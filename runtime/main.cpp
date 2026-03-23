#include "host.h"
#include <cstdio>
#include <cstdlib>

// ---------------------------------------------------------------------------
// Entry point
// Initialises the guest runtime, sets up the initial CPU context and stack,
// then calls the game's recompiled entry point.
// ---------------------------------------------------------------------------
int main(int argc, char** argv) {
    printf("=== Kinect Sports PC Runtime ===\n");

    // 1. Allocate guest address space
    memory_init();

    // 2. Set up initial CPU context
    PPCContext ctx{};

    // Stack pointer — Xbox 360 stack grows down from STACK_BASE
    // r1 is the stack pointer on PPC
    ctx.r[1].u32 = STACK_BASE - 16; // 16-byte aligned

    // r2 is the TOC (Table of Contents) pointer — the recompiler bakes this in,
    // so the value here is less critical, but set it to something non-zero.
    ctx.r[2].u32 = MODULE_LOAD_ADDR + 0x8000;

    // r3 / r4 = argc / argv in the XEX ABI (may be 0 for games)
    ctx.r[3].u32 = 0;
    ctx.r[4].u32 = 0;

    printf("[MAIN] Calling game entry point...\n");

    // 3. Jump into the recompiled game
    _start(&ctx, g_memory);

    printf("[MAIN] Game entry point returned (unexpected for a game — check logs)\n");

    memory_shutdown();
    return 0;
}
