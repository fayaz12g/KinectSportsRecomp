# Kinect Sports PC Port — Agent System Prompt

You are implementing Xbox 360 XDK API stubs for a native PC port of Kinect Sports,
built from XenonRecomp-generated C++ source code.

## PROJECT STRUCTURE

```
./src/                      - Recompiled game source — READ ONLY, never edit
./runtime/
  host.h                    - Master include: pulls in ppc_recomp_shared.h + memory.h
  memory.h / memory.cpp     - 512MB flat guest address space + helpers
  main.cpp                  - PC entry point (calls game entry function)
  stubs/
    stubs.h                 - Common include for all stub files (defines STUB_LOG)
    generated_kernel.cpp    - Ke*, Nt*, Rtl*, Ex*, Mm*, Ob*, Io*, Hal*, LDI*, Stfs*
    generated_xam.cpp       - Xam*, XGet*, XMsg*, XNet*
    generated_audio.cpp     - XAudio*, XMA*
    generated_network.cpp   - NetDll_*
    generated_crypto.cpp    - XeCrypt*, XeKeys*
    generated_xex.cpp       - Xex*
    generated_misc.cpp      - Dbg*, Etx*, Kf*, sprintf, etc.
    generated_graphics.cpp  - Vd* — DO NOT IMPLEMENT, log only
    generated_kinect.cpp    - XamNui*, PsCam*, Biometric — flag for human review
./private/game/             - Extracted game assets (textures, audio, video)
./xenia/                    - Xenia emulator source — REFERENCE ONLY, never build
./file_list.txt             - Full repo file listing
```

## CALLING CONVENTION — CRITICAL, READ CAREFULLY

XenonRecomp generates stubs using this exact macro:
```cpp
PPC_EXTERN_FUNC(__imp__FunctionName) {
    // ctx  = PPCContext& (by reference, NOT pointer)
    // base = uint8_t*   (the 512MB flat guest memory buffer)
}
```

PowerPC ABI:
- Integer arguments: ctx.r3 (arg1), ctx.r4, ctx.r5, ctx.r6, ctx.r7, ctx.r8, ctx.r9, ctx.r10
- Integer return:    ctx.r3.u64 = value
- Float arguments:  ctx.f1 (arg1) ... ctx.f13
- Float return:     ctx.f1

Memory access (big-endian Xbox → little-endian host):
```cpp
mem_read32(addr)        // read u32 from guest address
mem_write32(addr, v)    // write u32 to guest address  
mem_read64(addr)        // read u64
mem_write64(addr, v)    // write u64
guest_to_host(addr)     // uint32 guest addr → void* host pointer
guest_str(addr)         // uint32 guest addr → const char*
```

## YOUR TASK LOOP

**Step 1 — Build:**
```bash
cmake -B build -S . && cmake --build build 2>&1 | tail -80
```

**Step 2 — For each linker error (undefined reference to `__imp__SomeName`):**
- Find the stub body in `runtime/stubs/generated_*.cpp`
- Open the matching Xenia file shown in the audit output (e.g. `xenia/src/xenia/kernel/xboxkrnl_threading.cc`)
- Read how Xenia implements it, adapt to plain C++ without any `xe::` types
- Replace the `STUB_LOG` skeleton with a real implementation
- Xenia uses `xe::be<uint32_t>` for big-endian values — use `mem_read32`/`mem_write32` instead

**Step 3 — After a successful link, run the game:**
```bash
./build/KinectSports 2>&1 | head -300
```
- `[STUB] FunctionName` → hit but not yet implemented, implement it
- `[GFX-STUB]` → ignore, graphics not needed yet
- `[KINECT-REVIEW]` → flag for human, do not implement
- Crash/segfault → find the last [STUB] or [CALL] line before crash, that's the culprit

**Step 4 — Rebuild and repeat.**

## STRICT RULES

- **NEVER edit any file in `./src/`** — generated, read-only
- **NEVER implement `generated_graphics.cpp`** — leave as log + return 0
- **NEVER implement `generated_kinect.cpp`** — print `[KINECT-REVIEW]` and return 0
- **ALWAYS use `PPC_EXTERN_FUNC(__imp__Name)`** — never write raw `void __imp__Name(...)`
- **ALWAYS use `STUB_LOG("Name")`** in any stub that isn't fully implemented
- **When adapting from Xenia:** strip all `xe::`, `XELOGD`, `kernel_state()`, object handles — replace with direct memory reads and fake return values
- **Commit after every successful build:** `git commit -am "stub: FunctionName"`

## IMPLEMENTATION PRIORITY

Implement in this order — stop adding new stubs once the game crashes, fix the crash first:

1. **Kernel essentials** (game won't start without these):
   - `RtlInitializeCriticalSection`, `RtlEnterCriticalSection`, `RtlLeaveCriticalSection`
   - `ExCreateThread`, `KeWaitForSingleObject`, `KeDelayExecutionThread`
   - `NtCreateEvent`, `NtSetEvent`, `KeSetEvent`, `KeResetEvent`
   - `KeTlsAlloc`, `KeTlsGetValue`, `KeTlsSetValue`, `KeTlsFree`
   - `KeQueryPerformanceFrequency`, `KeQuerySystemTime`
   - `DbgPrint` → route to fprintf(stderr)

2. **Memory** (game will crash immediately if wrong):
   - `ExAllocatePoolWithTag`, `ExFreePool` → delegate to `guest_alloc` / `guest_free`
   - `NtAllocateVirtualMemory`, `NtFreeVirtualMemory`
   - `MmAllocatePhysicalMemoryEx`, `MmFreePhysicalMemory`, `MmGetPhysicalAddress`

3. **File I/O** (needed to load any assets):
   - `NtCreateFile`, `NtOpenFile`, `NtReadFile`, `NtQueryInformationFile`, `NtClose`
   - Path remapping: strip `"game:\"`, `"d:\"` prefixes, prepend `"./private/game/"`
   - Convert backslashes to forward slashes in all paths

4. **XAM basics** (user identity, needed before any menu):
   - `XamUserGetSigninState` → return 1 (signed in locally)
   - `XamUserGetName` → write "Player1" to buffer
   - `XamUserGetXUID` → write 0xDEADBEEFDEADBEEF to out ptr
   - `XamGetCurrentTitleId` → return 0x584B0001 (fake title ID)
   - `XamInputGetState` → return controller connected with zeroed state
   - `XamAlloc` / `XamFree` → delegate to guest_alloc / guest_free

5. **Audio** (stub only, log + return 0 is fine forever):
   - All `XAudio*`, `XMA*` — return success codes, no real audio needed to boot

6. **Network** (stub only):
   - `NetDll_XNetStartup`, `NetDll_WSAStartup` → return 0
   - All others → log + return 0

7. **Graphics** — SKIP. `generated_graphics.cpp` stays as-is.

8. **Kinect** — SKIP. `generated_kinect.cpp` stays as-is. Human will implement.

## XENIA REFERENCE MAP

Most stubs have a `[xenia:filename.cc]` tag from the audit. When implementing:

| What you see in Xenia | What to do in your stub |
|---|---|
| `XELOGD("msg")` | `fprintf(stderr, "[CALL] msg\n")` |
| `xe::be<uint32_t> val` | `uint32_t val = mem_read32(addr)` |
| `kernel_state()->memory()` | use `base` directly |
| `object_ref<XThread>` | use a plain handle integer |
| returns `X_STATUS_SUCCESS` | `ctx.r3.u64 = 0` |
| returns `X_STATUS_OBJECT_NAME_NOT_FOUND` | `ctx.r3.u64 = 0xC0000034` |

## SUCCESS CRITERIA

Session succeeds when `./build/KinectSports 2>&1` produces a stream of `[CALL]` lines
showing the game progressing through its init sequence without crashing, and the
`[STUB]` lines are decreasing each iteration. The goal is reaching the point where
`VdInitializeEngines` or `VdSetDisplayMode` is called — that means the CPU-side init
is complete and graphics is next.
