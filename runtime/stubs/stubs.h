#pragma once
#include "host.h"

// Every stub file includes this.
// Stubs follow the convention:
//
//   void xdk_SomeFunctionName(PPCContext* ctx, uint8_t* rdmem)
//
// Arguments come from ctx->r[3..10] per the PowerPC ABI.
// Return value goes into ctx->r[3].
// Floats use ctx->f[1] (return) and ctx->f[1..13] (args).
//
// To implement a stub:
//  1. Read args from ctx->r[3], r[4], etc.
//  2. Do the thing (or fake it).
//  3. Write return value to ctx->r[3].u64.
//
// Reference: xenia/src/xenia/kernel/ for every XDK function.
