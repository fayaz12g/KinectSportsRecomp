#include "stubs.h"
#include <thread>
#include <mutex>
#include <condition_variable>
#include <unordered_map>
#include <atomic>
#include <cstdio>

// ---------------------------------------------------------------------------
// Minimal thread/sync primitive stubs.
// Xenia reference: xenia/src/xenia/kernel/xthread.cc
//                  xenia/src/xenia/kernel/xevent.cc
//                  xenia/src/xenia/kernel/xmutant.cc
// ---------------------------------------------------------------------------

static std::atomic<uint32_t> s_next_handle{ 0x0100 };

uint32_t alloc_handle() {
    return s_next_handle.fetch_add(1);
}

// --- XCreateThread / ExCreateThread ---
// r3 = handle_out ptr, r4 = stack_size, r5 = unused, r6 = xapi_thread_startup,
// r7 = start_address, r8 = start_context, r9 = creation_flags
extern "C"
void xdk_ExCreateThread(PPCContext* ctx, uint8_t* rdmem) {
    uint32_t handle_out    = ctx->r[3].u32;
    uint32_t stack_size    = ctx->r[4].u32;
    uint32_t start_address = ctx->r[7].u32;
    uint32_t start_context = ctx->r[8].u32;

    LOG_CALL("ExCreateThread", "start=0x%08X ctx=0x%08X stack=%u\n",
             start_address, start_context, stack_size);

    // Allocate a fake handle — full implementation would spawn a std::thread
    // that calls back into the recompiled function at start_address.
    // For now: stub returns success so the game doesn't crash on startup.
    uint32_t handle = alloc_handle();
    if (handle_out) {
        mem_write32(handle_out, handle);
    }

    // TODO: spawn actual thread:
    //   std::thread([start_address, start_context](){
    //       PPCContext tctx{};
    //       tctx.r[3].u32 = start_context;
    //       reinterpret_cast<GuestFunc>(get_function(start_address))(&tctx, g_memory);
    //   }).detach();

    STUB_RETURN(ctx, 0); // STATUS_SUCCESS
}

// --- KeWaitForSingleObject ---
// r3 = object handle, r4 = wait_reason, r5 = processor_mode,
// r6 = alertable, r7 = timeout ptr
extern "C"
void xdk_KeWaitForSingleObject(PPCContext* ctx, uint8_t* rdmem) {
    uint32_t handle = ctx->r[3].u32;
    (void)handle;
    // Return STATUS_SUCCESS — object "signalled" immediately
    STUB_RETURN(ctx, 0);
}

// --- NtCreateEvent / KeInitializeEvent ---
extern "C"
void xdk_NtCreateEvent(PPCContext* ctx, uint8_t* rdmem) {
    uint32_t handle_out = ctx->r[3].u32;
    uint32_t event_type = ctx->r[5].u32; // 0=NotificationEvent 1=SynchronizationEvent
    uint32_t initial    = ctx->r[6].u32;

    LOG_CALL("NtCreateEvent", "type=%u initial=%u\n", event_type, initial);

    uint32_t handle = alloc_handle();
    if (handle_out) mem_write32(handle_out, handle);
    STUB_RETURN(ctx, 0);
}

// --- NtSetEvent ---
extern "C"
void xdk_NtSetEvent(PPCContext* ctx, uint8_t* rdmem) {
    LOG_STUB("NtSetEvent");
    STUB_RETURN(ctx, 0);
}

// --- NtCreateMutant (mutex) ---
extern "C"
void xdk_NtCreateMutant(PPCContext* ctx, uint8_t* rdmem) {
    uint32_t handle_out = ctx->r[3].u32;
    uint32_t owned      = ctx->r[5].u32;
    LOG_CALL("NtCreateMutant", "initially_owned=%u\n", owned);
    uint32_t handle = alloc_handle();
    if (handle_out) mem_write32(handle_out, handle);
    STUB_RETURN(ctx, 0);
}

// --- NtReleaseMutant ---
extern "C"
void xdk_NtReleaseMutant(PPCContext* ctx, uint8_t* rdmem) {
    LOG_STUB("NtReleaseMutant");
    STUB_RETURN(ctx, 0);
}

// --- NtClose (closes any handle) ---
extern "C"
void xdk_NtClose(PPCContext* ctx, uint8_t* rdmem) {
    LOG_STUB("NtClose");
    STUB_RETURN(ctx, 0);
}

// --- KeGetCurrentProcessType ---
extern "C"
void xdk_KeGetCurrentProcessType(PPCContext* ctx, uint8_t* rdmem) {
    // Return "user process" (1)
    STUB_RETURN(ctx, 1);
}

// --- XGetThreadProcessor / KeSaveFloatingPointState etc ---
extern "C"
void xdk_XGetThreadProcessor(PPCContext* ctx, uint8_t* rdmem) {
    STUB_RETURN(ctx, 0); // CPU 0
}

extern "C"
void xdk_KeSaveFloatingPointState(PPCContext* ctx, uint8_t* rdmem) {
    STUB_RETURN(ctx, 0);
}

extern "C"
void xdk_KeRestoreFloatingPointState(PPCContext* ctx, uint8_t* rdmem) {
    STUB_RETURN(ctx, 0);
}
