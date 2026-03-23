# Kinect Sports PC — Native Recompiled Port

## Project layout

```
.
├── src/                    # XenonRecomp output — DO NOT EDIT
├── runtime/                # Host runtime
│   ├── host.h              # Master include for all generated + stub code
│   ├── ppc_context.h       # Xbox 360 CPU register layout
│   ├── memory.h / .cpp     # 512MB flat guest address space
│   ├── main.cpp            # PC entry point
│   └── stubs/              # XDK API implementations
├── assets/                 # Game files (textures, audio, video) — set path in xfile.cpp
├── xenia/                  # Cloned Xenia — reference only
├── CMakeLists.txt
├── audit_symbols.py        # Finds missing stubs, generates skeletons
└── AGENT_PROMPT.md         # System prompt for the agentic coding loop
```

## Step 0 — Prerequisites

```bash
# Linux / WSL2 recommended
sudo apt install cmake build-essential python3

# Or on Windows: Visual Studio 2022 + CMake
```

## Step 1 — Point assets root at your game files

Edit `runtime/stubs/xfile.cpp`, line ~20:
```cpp
static const char* ASSETS_ROOT = "/path/to/your/extracted/game/files";
```

## Step 2 — First build (expect many linker errors — that's fine)

```bash
mkdir build && cd build
cmake .. -DCMAKE_BUILD_TYPE=Debug
cmake --build . 2>&1 | tee ../build.log
```

## Step 3 — Audit missing symbols

```bash
cd ..
python3 audit_symbols.py
# This generates runtime/stubs/generated_stubs.cpp with skeleton stubs
```

## Step 4 — Launch the agentic loop

Install aider:
```bash
pip install aider-chat
```

Start the agent (local LLM via ollama):
```bash
# Pull the model first
ollama pull qwen2.5-coder:32b

# Launch aider pointed at the runtime
aider \
  --model ollama/qwen2.5-coder:32b \
  --no-auto-commits \
  runtime/stubs/*.cpp \
  runtime/host.h \
  runtime/memory.h \
  --read xenia/src/xenia/kernel/ \
  --message-file AGENT_PROMPT.md
```

The agent will:
1. Build → read linker errors → implement stubs → rebuild → repeat

## Step 5 — Check progress

```bash
./build/KinectSports 2>&1 | grep -E "\[STUB\]|\[CALL\]|\[GAME\]|\[KINECT"
```

`[STUB]` lines = hit but unimplemented  
`[CALL]` lines = implemented and called  
`[GAME]` lines = game's own debug output (DbgPrint)  
`[KINECT-NEEDS-REVIEW]` = Kinect APIs that need libfreenect wiring  

## Kinect passthrough (when ready)

Install libfreenect:
```bash
sudo apt install libfreenect-dev
```

Then implement the `[KINECT-NEEDS-REVIEW]` symbols in `runtime/stubs/xkinect.cpp`
using the libfreenect skeleton/depth callbacks.

## Graphics (later)

The `xgraphics.cpp` stubs all return 0. When the CPU side is stable, the graphics
layer will need:
- Vulkan backend (vk-bootstrap recommended)
- Xbox 360 shader bytecode translator (reference: Xenia's shader translator in xenia/src/xenia/gpu/)
- Xenos EDRAM tile resolve → Vulkan render pass mapping
