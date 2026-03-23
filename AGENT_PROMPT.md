You are implementing Xbox 360 XDK API stubs for a native PC port of Kinect Sports
built from XenonRecomp-generated C++ source code.

=== PROJECT STRUCTURE ===
./src/              - Recompiled game source (hundreds of .cpp files, do not edit)
./runtime/          - Host runtime you maintain
  host.h            - Master include (PPCContext, memory helpers, macros)
  ppc_context.h     - CPU register struct
  memory.h / .cpp   - 512MB guest address space
  main.cpp          - Host entry point
  stubs/            - XDK API stub implementations (edit these freely)
    xthread.cpp     - Threading primitives
    xmemory.cpp     - Memory allocation
    xfile.cpp       - File I/O (remaps Xbox paths to ./assets/)
    xgraphics.cpp   - GPU stubs (DO NOT IMPLEMENT — log and return 0 only)
    xmisc.cpp       - Audio, user, kernel misc
./assets/           - Game files extracted from the XEX (textures, audio, etc.)
./xenia/            - Xenia emulator source — USE AS REFERENCE ONLY, do not build

=== YOUR TASK LOOP ===
1. Run: cmake -B build -S . && cmake --build build 2>&1 | tail -50
2. For each LINKER ERROR (undefined reference to `xdk_SomeName`):
   a. Search xenia/src/xenia/kernel/ for SomeName to understand the API
   b. Implement the stub in the appropriate stubs/*.cpp file
   c. Follow the signature: extern "C" void xdk_Name(PPCContext* ctx, uint8_t* rdmem)
   d. Read args from ctx->r[3..10], write return to ctx->r[3].u64
3. For RUNTIME ERRORS after a successful link:
   a. Run: ./build/KinectSports 2>&1 | head -200
   b. Find [STUB] lines — these are unimplemented functions the game actually called
   c. Implement the most critical ones first (crash-path over happy-path)
4. Rebuild and repeat.

=== STRICT RULES ===
- NEVER edit files in ./src/ — these are generated, treat as read-only
- NEVER implement graphics stubs in xgraphics.cpp — leave them as LOG+return 0
- NEVER add new .h files to ./src/ — put all headers in ./runtime/
- Always use STUB_RETURN(ctx, value) or STUB_RETURN_ZERO(ctx) — never bare return
- Always use LOG_STUB or LOG_CALL so the runtime log is useful
- When unsure of an API's behavior, look in xenia/src/xenia/kernel/ first
- If a Xenia implementation uses xe:: types, adapt to plain C++ equivalents
- Commit after every successful build with message: "stub: FunctionName"

=== PRIORITY ORDER ===
Implement stubs in this order:
1. Memory: XMemAlloc, RtlAllocateHeap and friends (already done — verify)
2. Threading: ExCreateThread, KeWaitForSingleObject (already done — verify)
3. File I/O: NtCreateFile, NtReadFile (already done — verify)
4. Time: KeQueryPerformanceCounter, KeQuerySystemTime (done)
5. Misc kernel: Rtl*, Ke* functions as they appear in linker errors
6. XUser / XContent: fake returns are fine
7. Audio: stub only (log + return 0)
8. Graphics: NEVER implement — stub only

=== KINECT NOTE ===
Any function containing "Kinect", "NUI", "XNui", or "KIN" in its name:
- Do NOT stub with fake data
- Implement a passthrough to OpenKinect (libfreenect) OR log and return failure
- Flag these for human review with: fprintf(stderr, "[KINECT-NEEDS-REVIEW] FunctionName\n")

=== SUCCESS CRITERIA ===
The session is successful when:
  ./build/KinectSports 2>&1
produces output beyond "[MAIN] Calling game entry point..." without immediately
crashing, and the [STUB] log shows the game progressing through initialization.
