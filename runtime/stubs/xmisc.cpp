#include "stubs.h"

// ---------------------------------------------------------------------------
// XAudio2 stubs
// Xenia reference: xenia/src/xenia/apu/
// These are safe to stub until the game is booting fully.
// ---------------------------------------------------------------------------

#define AUDIO_STUB(name) \
    extern "C" void xdk_##name(PPCContext* ctx, uint8_t* rdmem) { \
        fprintf(stderr, "[AUDIO-STUB] " #name "\n"); \
        STUB_RETURN(ctx, 0); \
    }

AUDIO_STUB(XAudioCreateSourceVoice)
AUDIO_STUB(XAudioSubmitSourceBuffer)
AUDIO_STUB(XAudioGetSampleRate)
AUDIO_STUB(IXAudio2_CreateSourceVoice)
AUDIO_STUB(IXAudio2_CreateSubmixVoice)
AUDIO_STUB(IXAudio2_CreateMasteringVoice)
AUDIO_STUB(IXAudio2_StartEngine)
AUDIO_STUB(IXAudio2_StopEngine)
AUDIO_STUB(IXAudio2SourceVoice_Start)
AUDIO_STUB(IXAudio2SourceVoice_Stop)
AUDIO_STUB(IXAudio2SourceVoice_SubmitSourceBuffer)
AUDIO_STUB(IXAudio2SourceVoice_FlushSourceBuffers)
AUDIO_STUB(IXAudio2SourceVoice_GetState)
AUDIO_STUB(IXAudio2SourceVoice_SetVolume)
AUDIO_STUB(IXAudio2SourceVoice_SetFrequencyRatio)
AUDIO_STUB(XAudio2Create)

// ---------------------------------------------------------------------------
// XUser / XContent / XLive stubs
// Xenia reference: xenia/src/xenia/kernel/xam/
// ---------------------------------------------------------------------------

// XUserGetXUID — return a fake XUID
extern "C"
void xdk_XUserGetXUID(PPCContext* ctx, uint8_t* rdmem) {
    uint32_t user_index = ctx->r[3].u32;
    uint32_t xuid_ptr   = ctx->r[5].u32; // out XUID (8 bytes)
    if (xuid_ptr) mem_write64(xuid_ptr, 0xDEADBEEFDEADBEEFull);
    STUB_RETURN(ctx, 0);
}

// XUserGetSigninState — return signed in locally (1)
extern "C"
void xdk_XUserGetSigninState(PPCContext* ctx, uint8_t* rdmem) {
    STUB_RETURN(ctx, 1);
}

// XUserGetName
extern "C"
void xdk_XUserGetName(PPCContext* ctx, uint8_t* rdmem) {
    uint32_t buf_ptr  = ctx->r[4].u32;
    uint32_t buf_size = ctx->r[5].u32;
    if (buf_ptr && buf_size > 0) {
        const char* name = "Player1";
        strncpy((char*)(g_memory + buf_ptr), name, buf_size - 1);
        g_memory[buf_ptr + buf_size - 1] = '\0';
    }
    STUB_RETURN(ctx, 0);
}

// XContentCreate / XContentClose — fake content handles
extern "C"
void xdk_XContentCreate(PPCContext* ctx, uint8_t* rdmem) {
    LOG_STUB("XContentCreate");
    STUB_RETURN(ctx, 0);
}

extern "C"
void xdk_XContentClose(PPCContext* ctx, uint8_t* rdmem) {
    LOG_STUB("XContentClose");
    STUB_RETURN(ctx, 0);
}

// ---------------------------------------------------------------------------
// Misc kernel stubs
// ---------------------------------------------------------------------------

// KeQuerySystemTime — return epoch-ish value
extern "C"
void xdk_KeQuerySystemTime(PPCContext* ctx, uint8_t* rdmem) {
    uint32_t time_ptr = ctx->r[3].u32;
    if (time_ptr) {
        // Return a plausible FILETIME (100ns intervals since 1601)
        uint64_t fake_time = 132000000000000000ull;
        mem_write64(time_ptr, fake_time);
    }
    STUB_RETURN(ctx, 0);
}

// KeQueryPerformanceFrequency / KeQueryPerformanceCounter
extern "C"
void xdk_KeQueryPerformanceFrequency(PPCContext* ctx, uint8_t* rdmem) {
    STUB_RETURN(ctx, 50000000); // 50 MHz — matches Xbox 360 timer
}

extern "C"
void xdk_KeQueryPerformanceCounter(PPCContext* ctx, uint8_t* rdmem) {
    // Return monotonically increasing value — use host clock
    static uint64_t counter = 0;
    counter += 833333; // ~60fps tick at 50MHz
    STUB_RETURN(ctx, counter);
}

// RtlInitializeCriticalSection / Enter / Leave
extern "C"
void xdk_RtlInitializeCriticalSection(PPCContext* ctx, uint8_t* rdmem) {
    STUB_RETURN(ctx, 0);
}
extern "C"
void xdk_RtlEnterCriticalSection(PPCContext* ctx, uint8_t* rdmem) {
    STUB_RETURN(ctx, 0);
}
extern "C"
void xdk_RtlLeaveCriticalSection(PPCContext* ctx, uint8_t* rdmem) {
    STUB_RETURN(ctx, 0);
}

// DbgPrint — route to stderr so agent can see game logs
extern "C"
void xdk_DbgPrint(PPCContext* ctx, uint8_t* rdmem) {
    uint32_t fmt_ptr = ctx->r[3].u32;
    if (fmt_ptr) fprintf(stderr, "[GAME] %s\n", guest_str(fmt_ptr));
    STUB_RETURN(ctx, 0);
}

// OutputDebugStringA
extern "C"
void xdk_OutputDebugStringA(PPCContext* ctx, uint8_t* rdmem) {
    uint32_t str_ptr = ctx->r[3].u32;
    if (str_ptr) fprintf(stderr, "[GAME-DBG] %s\n", guest_str(str_ptr));
    STUB_RETURN(ctx, 0);
}
