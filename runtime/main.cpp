#include "host.h"
#include <cstdio>
#include <cstdlib>

int main(int argc, char** argv) {
    printf("=== Kinect Sports PC Runtime ===\n");

    memory_init();

    PPCContext ctx{};

    // r1 = stack pointer (PPC convention), grows down from top of address space
    ctx.r1.u32 = STACK_BASE - 16;

    // r2 = TOC pointer — XenonRecomp bakes the real value in, 
    // but set something non-zero so null checks don't misfire
    ctx.r2.u32 = MODULE_LOAD_ADDR + 0x8000;

    printf("[MAIN] Calling game entry point...\n");
    fflush(stdout);

    _xstart(ctx, g_memory);

    printf("[MAIN] Entry point returned\n");
    memory_shutdown();
    return 0;
}
