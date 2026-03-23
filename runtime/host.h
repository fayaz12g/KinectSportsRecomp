#pragma once

// This is the single header all recompiled source files include.
// It provides the CPU context, memory model, and all XDK stub declarations.

#include "ppc_context.h"
#include "memory.h"
#include <cstdio>
#include <cstdint>
#include <cstring>

// ---------------------------------------------------------------------------
// Function pointer type for all recompiled guest functions
// ---------------------------------------------------------------------------
using GuestFunc = void(*)(PPCContext*, uint8_t*);

// ---------------------------------------------------------------------------
// Logging — use these in stubs so the agent's loop can grep output
// ---------------------------------------------------------------------------
#define LOG_STUB(name) \
    fprintf(stderr, "[STUB] " name " (unimplemented)\n")

#define LOG_CALL(name, ...) \
    fprintf(stderr, "[CALL] " name ": " __VA_ARGS__)

// ---------------------------------------------------------------------------
// Safe stub return — zero out r3 (return value register) and return
// ---------------------------------------------------------------------------
#define STUB_RETURN_ZERO(ctx) \
    do { (ctx)->r[3].u64 = 0; return; } while(0)

#define STUB_RETURN(ctx, val) \
    do { (ctx)->r[3].u64 = (uint64_t)(val); return; } while(0)

// ---------------------------------------------------------------------------
// Guest → host string helper (Xbox strings are big-endian UTF-16 or ASCII)
// ---------------------------------------------------------------------------
inline const char* guest_str(uint32_t addr) {
    if (addr == 0) return "(null)";
    return reinterpret_cast<const char*>(g_memory + addr);
}

// ---------------------------------------------------------------------------
// Forward declaration of the game's entry point
// (XenonRecomp should have emitted this; adjust name if it differs)
// ---------------------------------------------------------------------------
extern "C" void _start(PPCContext* ctx, uint8_t* rdmem);
