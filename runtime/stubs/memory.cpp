#include "memory.h"
#include <cstdio>
#include <cstdlib>
#include <atomic>

uint8_t* g_memory = nullptr;

// Very simple bump allocator in the lower half of guest address space.
// Kinect Sports will call XMemAlloc / RtlAllocateHeap — those stubs
// delegate here until you wire in something more robust.
static std::atomic<uint32_t> s_heap_ptr{ 0x04000000u }; // start at 64MB mark

uint32_t guest_alloc(uint32_t size, uint32_t alignment) {
    // Round size up to alignment
    size = (size + alignment - 1) & ~(alignment - 1);
    uint32_t addr = s_heap_ptr.fetch_add(size);
    if (addr + size >= MEMORY_SIZE) {
        fprintf(stderr, "[MEMORY] guest_alloc: out of guest address space!\n");
        return 0;
    }
    return addr;
}

void guest_free(uint32_t addr) {
    // No-op for bump allocator — swap in a real allocator when crashes appear
    (void)addr;
}

void memory_init() {
    g_memory = (uint8_t*)calloc(1, MEMORY_SIZE);
    if (!g_memory) {
        fprintf(stderr, "[MEMORY] Failed to allocate %u bytes for guest memory\n", MEMORY_SIZE);
        exit(1);
    }
    printf("[MEMORY] Guest address space allocated: %u MB\n", MEMORY_SIZE / (1024 * 1024));
}

void memory_shutdown() {
    free(g_memory);
    g_memory = nullptr;
}
