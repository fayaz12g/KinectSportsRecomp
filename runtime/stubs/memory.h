#pragma once
#include <cstdint>
#include <cstdlib>
#include <cassert>

// ---------------------------------------------------------------------------
// Xbox 360 physical memory layout (simplified)
//   0x00000000 – 0x1FFFFFFF  512 MB main RAM
//   0x7F000000 –             XDK heap / stack region (grows down)
// ---------------------------------------------------------------------------

constexpr uint32_t MEMORY_SIZE       = 0x20000000u; // 512 MB
constexpr uint32_t STACK_BASE        = 0x7F000000u; // top of stack
constexpr uint32_t STACK_SIZE        = 0x00100000u; // 1 MB per thread (default)
constexpr uint32_t MODULE_LOAD_ADDR  = 0x00010000u; // where the XEX was mapped

// The single flat allocation that represents Xbox 360 RAM.
// All generated code accesses memory via:  *(uint32_t*)(rdmem + guest_addr)
extern uint8_t* g_memory;

// ---------------------------------------------------------------------------
// Byte-swap helpers — Xbox 360 is big-endian; host (your PC) is little-endian.
// Every memory read/write in generated code goes through these.
// ---------------------------------------------------------------------------
inline uint16_t bswap16(uint16_t v) {
    return (v >> 8) | (v << 8);
}
inline uint32_t bswap32(uint32_t v) {
    return __builtin_bswap32(v);
}
inline uint64_t bswap64(uint64_t v) {
    return __builtin_bswap64(v);
}

// Typed reads from guest memory (address is guest-side uint32)
inline uint8_t  mem_read8 (uint32_t addr) { return g_memory[addr]; }
inline uint16_t mem_read16(uint32_t addr) { return bswap16(*(uint16_t*)(g_memory + addr)); }
inline uint32_t mem_read32(uint32_t addr) { return bswap32(*(uint32_t*)(g_memory + addr)); }
inline uint64_t mem_read64(uint32_t addr) { return bswap64(*(uint64_t*)(g_memory + addr)); }

// Typed writes to guest memory
inline void mem_write8 (uint32_t addr, uint8_t  v) { g_memory[addr] = v; }
inline void mem_write16(uint32_t addr, uint16_t v) { *(uint16_t*)(g_memory + addr) = bswap16(v); }
inline void mem_write32(uint32_t addr, uint32_t v) { *(uint32_t*)(g_memory + addr) = bswap32(v); }
inline void mem_write64(uint32_t addr, uint64_t v) { *(uint64_t*)(g_memory + addr) = bswap64(v); }

// Guest pointer → host pointer (for passing to native APIs)
inline void* guest_to_host(uint32_t addr) {
    if (addr == 0) return nullptr;
    assert(addr < MEMORY_SIZE);
    return g_memory + addr;
}

// Host pointer → guest address (round-trip for APIs that return pointers)
inline uint32_t host_to_guest(const void* ptr) {
    if (ptr == nullptr) return 0;
    return (uint32_t)((uint8_t*)ptr - g_memory);
}

// ---------------------------------------------------------------------------
// Heap allocator operating in guest address space.
// Simple bump allocator for now; replace with a real one as needed.
// ---------------------------------------------------------------------------
uint32_t guest_alloc(uint32_t size, uint32_t alignment = 16);
void     guest_free(uint32_t addr);
void     memory_init();
void     memory_shutdown();
