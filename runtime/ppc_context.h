#pragma once
#include <cstdint>
#include <cstring>

// ---------------------------------------------------------------------------
// General-purpose register — provides u64/s64/u32/s32 views of the same bits
// matching how XenonRecomp references registers in generated code.
// ---------------------------------------------------------------------------
union GPR {
    uint64_t u64;
    int64_t  s64;
    uint32_t u32;   // low 32 bits (big-endian word)
    int32_t  s32;
    uint16_t u16;
    int16_t  s16;
    uint8_t  u8;
    int8_t   s8;
};

// ---------------------------------------------------------------------------
// Floating-point / vector register
// ---------------------------------------------------------------------------
union FPR {
    double   f64;
    float    f32;
    uint64_t u64;
};

// 128-bit VMX / Altivec register
union VR {
    float    f32[4];
    uint32_t u32[4];
    uint16_t u16[8];
    uint8_t  u8[16];
};

// ---------------------------------------------------------------------------
// Condition Register field (cr0 – cr7)
// ---------------------------------------------------------------------------
struct CRField {
    uint8_t lt : 1;  // Less Than
    uint8_t gt : 1;  // Greater Than
    uint8_t eq : 1;  // Equal
    uint8_t so : 1;  // Summary Overflow
};

// ---------------------------------------------------------------------------
// Full PowerPC context — passed by pointer into every recompiled function.
// Layout must match what XenonRecomp emits; do NOT reorder fields.
// ---------------------------------------------------------------------------
struct PPCContext {
    // General-purpose registers r0–r31
    GPR r[32];

    // Floating-point registers f0–f31
    FPR f[32];

    // VMX / Altivec vector registers v0–v127
    VR  v[128];

    // Special-purpose registers
    uint64_t lr;    // Link Register
    uint64_t ctr;   // Count Register
    uint32_t xer;   // Fixed-Point Exception Register
    uint32_t fpscr; // Floating-Point Status and Control Register
    uint32_t msr;   // Machine State Register (minimal use)

    // Condition Register (8 fields × 4 bits)
    CRField cr[8];

    // Reservation for lwarx/stwcx synchronisation primitives
    uint64_t reserve_address;
    uint32_t reserve_value;
    bool     reserve_valid;

    // -----------------------------------------------------------------------
    // Convenience accessors so generated code can do ctx.r3.u32 etc.
    // These mirror the named aliases XenonRecomp may emit.
    // -----------------------------------------------------------------------
    GPR& r0  = r[0];  GPR& r1  = r[1];  GPR& r2  = r[2];  GPR& r3  = r[3];
    GPR& r4  = r[4];  GPR& r5  = r[5];  GPR& r6  = r[6];  GPR& r7  = r[7];
    GPR& r8  = r[8];  GPR& r9  = r[9];  GPR& r10 = r[10]; GPR& r11 = r[11];
    GPR& r12 = r[12]; GPR& r13 = r[13]; GPR& r14 = r[14]; GPR& r15 = r[15];
    GPR& r16 = r[16]; GPR& r17 = r[17]; GPR& r18 = r[18]; GPR& r19 = r[19];
    GPR& r20 = r[20]; GPR& r21 = r[21]; GPR& r22 = r[22]; GPR& r23 = r[23];
    GPR& r24 = r[24]; GPR& r25 = r[25]; GPR& r26 = r[26]; GPR& r27 = r[27];
    GPR& r28 = r[28]; GPR& r29 = r[29]; GPR& r30 = r[30]; GPR& r31 = r[31];

    PPCContext() { std::memset(this, 0, sizeof(*this)); }
};
