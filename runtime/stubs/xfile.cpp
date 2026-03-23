#include "stubs.h"
#include <cstdio>
#include <cstring>
#include <unordered_map>
#include <string>
#include <atomic>

// ---------------------------------------------------------------------------
// File I/O stubs.
// Xenia reference: xenia/src/xenia/kernel/xboxkrnl/xboxkrnl_io.cc
//
// Xbox 360 paths look like:  "game:\Media\Textures\foo.dds"
//                            "d:\default.xex"
// We strip the device prefix and remap to your local assets folder.
// Set ASSETS_ROOT to wherever you put the game files on PC.
// ---------------------------------------------------------------------------

static const char* ASSETS_ROOT = "./assets"; // change this to your path

static std::unordered_map<uint32_t, FILE*> s_open_files;
static std::atomic<uint32_t> s_next_file_handle{ 0x8000 };

static std::string remap_path(const char* xbox_path) {
    if (!xbox_path) return "";

    std::string path(xbox_path);

    // Strip device prefixes
    for (const char* prefix : { "game:\\", "game:/", "d:\\", "d:/",
                                  "GAME:\\", "GAME:/", "D:\\", "D:/" }) {
        if (path.find(prefix) == 0) {
            path = path.substr(strlen(prefix));
            break;
        }
    }

    // Xbox uses backslashes; convert to forward slashes
    for (char& c : path) if (c == '\\') c = '/';

    return std::string(ASSETS_ROOT) + "/" + path;
}

// --- NtCreateFile ---
// r3 = handle_out, r4 = desired_access, r5 = object_attributes ptr,
// r6 = io_status_block ptr, r7 = allocation_size, r8 = file_attributes,
// r9 = share_access, r10 = create_disposition, stack = create_options
extern "C"
void xdk_NtCreateFile(PPCContext* ctx, uint8_t* rdmem) {
    uint32_t handle_out = ctx->r[3].u32;
    uint32_t obj_attrs  = ctx->r[5].u32;  // OBJECT_ATTRIBUTES struct

    // OBJECT_ATTRIBUTES layout (Xbox 360):
    //  +0x00 ULONG  Length
    //  +0x04 HANDLE RootDirectory
    //  +0x08 PUNICODE_STRING ObjectName
    //     ObjectName: +0x00 Length, +0x02 MaxLen, +0x04 Buffer (char*, ASCII on 360)
    const char* xbox_path = nullptr;
    if (obj_attrs) {
        uint32_t name_ptr_struct = mem_read32(obj_attrs + 0x08);
        if (name_ptr_struct) {
            uint32_t buf_ptr = mem_read32(name_ptr_struct + 0x04);
            if (buf_ptr) xbox_path = guest_str(buf_ptr);
        }
    }

    std::string host_path = remap_path(xbox_path);
    LOG_CALL("NtCreateFile", "'%s' -> '%s'\n", xbox_path ? xbox_path : "(null)", host_path.c_str());

    FILE* f = fopen(host_path.c_str(), "rb");
    if (!f) {
        fprintf(stderr, "[FILE] NtCreateFile: failed to open '%s'\n", host_path.c_str());
        if (handle_out) mem_write32(handle_out, 0);
        STUB_RETURN(ctx, 0xC0000034); // STATUS_OBJECT_NAME_NOT_FOUND
    }

    uint32_t handle = s_next_file_handle.fetch_add(1);
    s_open_files[handle] = f;
    if (handle_out) mem_write32(handle_out, handle);
    STUB_RETURN(ctx, 0); // STATUS_SUCCESS
}

// --- NtReadFile ---
// r3 = handle, r4 = event, r5 = apc_routine, r6 = apc_ctx,
// r7 = io_status_block, r8 = buffer (guest ptr), r9 = length, r10 = byte_offset ptr
extern "C"
void xdk_NtReadFile(PPCContext* ctx, uint8_t* rdmem) {
    uint32_t handle      = ctx->r[3].u32;
    uint32_t io_status   = ctx->r[7].u32;
    uint32_t buffer_addr = ctx->r[8].u32;
    uint32_t length      = ctx->r[9].u32;
    uint32_t offset_ptr  = ctx->r[10].u32;

    auto it = s_open_files.find(handle);
    if (it == s_open_files.end()) {
        fprintf(stderr, "[FILE] NtReadFile: unknown handle 0x%X\n", handle);
        STUB_RETURN(ctx, 0xC0000008); // STATUS_INVALID_HANDLE
    }

    FILE* f = it->second;
    if (offset_ptr) {
        uint64_t offset = mem_read64(offset_ptr);
        fseek(f, (long)offset, SEEK_SET);
    }

    size_t read = fread(g_memory + buffer_addr, 1, length, f);

    if (io_status) {
        mem_write32(io_status, 0);            // Status = SUCCESS
        mem_write32(io_status + 4, (uint32_t)read); // Information = bytes read
    }

    STUB_RETURN(ctx, 0);
}

// --- NtQueryInformationFile (used to get file size) ---
extern "C"
void xdk_NtQueryInformationFile(PPCContext* ctx, uint8_t* rdmem) {
    uint32_t handle     = ctx->r[3].u32;
    uint32_t io_status  = ctx->r[4].u32;
    uint32_t file_info  = ctx->r[5].u32;
    uint32_t length     = ctx->r[6].u32;
    uint32_t info_class = ctx->r[7].u32; // 5 = FileStandardInformation

    auto it = s_open_files.find(handle);
    if (it == s_open_files.end()) {
        STUB_RETURN(ctx, 0xC0000008);
    }

    FILE* f = it->second;
    if (info_class == 5 && file_info) { // FileStandardInformation
        long cur = ftell(f);
        fseek(f, 0, SEEK_END);
        uint64_t size = (uint64_t)ftell(f);
        fseek(f, cur, SEEK_SET);
        // FILE_STANDARD_INFORMATION: AllocationSize(8), EndOfFile(8), ...
        mem_write64(file_info,     size); // AllocationSize
        mem_write64(file_info + 8, size); // EndOfFile
    }

    STUB_RETURN(ctx, 0);
}

// --- NtClose for files (shared with xthread.cpp handle table — ok for now) ---
// NtClose is already declared in xthread.cpp; if linker complains, consolidate.

// --- NtWriteFile (for save data / logging — stub ok) ---
extern "C"
void xdk_NtWriteFile(PPCContext* ctx, uint8_t* rdmem) {
    LOG_STUB("NtWriteFile");
    STUB_RETURN(ctx, 0);
}
