#include "stubs.h"
#include <cstdio>
#include <cstdlib>

// ---------------------------------------------------------------------------
// Memory allocation stubs.
// Xenia reference: xenia/src/xenia/kernel/xboxkrnl/xboxkrnl_memory.cc
// ---------------------------------------------------------------------------

// --- XMemAlloc ---
// r3 = size, r4 = attributes (alignment hints etc.)
// Returns guest address of allocated block.
extern "C"
void xdk_XMemAlloc(PPCContext* ctx, uint8_t* rdmem) {
    uint32_t size       = ctx->r[3].u32;
    uint32_t attributes = ctx->r[4].u32;
    uint32_t alignment  = 16; // default

    // Alignment encoded in attributes bits [5:4] in some XDK versions
    // (see Xenia xboxkrnl_memory.cc for full decode)
    uint32_t align_bits = (attributes >> 4) & 0xF;
    if (align_bits) alignment = 1u << align_bits;

    uint32_t addr = guest_alloc(size, alignment);
    LOG_CALL("XMemAlloc", "size=%u align=%u -> 0x%08X\n", size, alignment, addr);
    STUB_RETURN(ctx, addr);
}

// --- XMemFree ---
// r3 = guest address, r4 = attributes
extern "C"
void xdk_XMemFree(PPCContext* ctx, uint8_t* rdmem) {
    uint32_t addr = ctx->r[3].u32;
    LOG_CALL("XMemFree", "0x%08X\n", addr);
    guest_free(addr);
    STUB_RETURN(ctx, 0);
}

// --- RtlAllocateHeap ---
// r3 = heap handle (ignored), r4 = flags, r5 = size
extern "C"
void xdk_RtlAllocateHeap(PPCContext* ctx, uint8_t* rdmem) {
    uint32_t size = ctx->r[5].u32;
    uint32_t addr = guest_alloc(size, 16);
    LOG_CALL("RtlAllocateHeap", "size=%u -> 0x%08X\n", size, addr);
    STUB_RETURN(ctx, addr);
}

// --- RtlFreeHeap ---
// r3 = heap handle, r4 = flags, r5 = ptr
extern "C"
void xdk_RtlFreeHeap(PPCContext* ctx, uint8_t* rdmem) {
    uint32_t addr = ctx->r[5].u32;
    guest_free(addr);
    STUB_RETURN(ctx, 1); // TRUE = success
}

// --- RtlReAllocateHeap ---
extern "C"
void xdk_RtlReAllocateHeap(PPCContext* ctx, uint8_t* rdmem) {
    uint32_t old_addr = ctx->r[5].u32;
    uint32_t new_size = ctx->r[6].u32;
    // Naive: alloc new, copy, free old
    uint32_t new_addr = guest_alloc(new_size, 16);
    if (old_addr && new_addr) {
        uint32_t copy_size = new_size; // we don't know old size, copy max
        memcpy(g_memory + new_addr, g_memory + old_addr, copy_size);
        guest_free(old_addr);
    }
    STUB_RETURN(ctx, new_addr);
}

// --- NtAllocateVirtualMemory ---
// r3 = base_addr_ptr, r4 = zero_bits, r5 = region_size_ptr, r6 = type, r7 = protect
extern "C"
void xdk_NtAllocateVirtualMemory(PPCContext* ctx, uint8_t* rdmem) {
    uint32_t base_ptr = ctx->r[3].u32;
    uint32_t size_ptr = ctx->r[5].u32;
    uint32_t size = size_ptr ? mem_read32(size_ptr) : 0x10000;

    uint32_t addr = guest_alloc(size, 0x10000); // 64KB page alignment
    LOG_CALL("NtAllocateVirtualMemory", "size=0x%X -> 0x%08X\n", size, addr);

    if (base_ptr) mem_write32(base_ptr, addr);
    if (size_ptr) mem_write32(size_ptr, size);
    STUB_RETURN(ctx, 0); // STATUS_SUCCESS
}

// --- NtFreeVirtualMemory ---
extern "C"
void xdk_NtFreeVirtualMemory(PPCContext* ctx, uint8_t* rdmem) {
    LOG_STUB("NtFreeVirtualMemory");
    STUB_RETURN(ctx, 0);
}

// --- MmGetPhysicalAddress (rarely needed, return identity map) ---
extern "C"
void xdk_MmGetPhysicalAddress(PPCContext* ctx, uint8_t* rdmem) {
    STUB_RETURN(ctx, ctx->r[3].u32);
}
