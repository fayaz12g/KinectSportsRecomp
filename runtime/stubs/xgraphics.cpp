#include "stubs.h"

// ---------------------------------------------------------------------------
// Graphics stubs — ALL return safe defaults and log.
// Do NOT implement these yet. The agent loop should skip them.
// Come back to these once CPU-side is stable.
//
// Xenia reference (when ready): xenia/src/xenia/gpu/
// Target backend:               Vulkan (via vk-bootstrap + VulkanMemoryAllocator)
// ---------------------------------------------------------------------------

#define GFX_STUB(name) \
    extern "C" void xdk_##name(PPCContext* ctx, uint8_t* rdmem) { \
        fprintf(stderr, "[GFX-STUB] " #name "\n"); \
        STUB_RETURN(ctx, 0); \
    }

GFX_STUB(Direct3D_CreateDevice)
GFX_STUB(IDirect3DDevice9_Present)
GFX_STUB(IDirect3DDevice9_Clear)
GFX_STUB(IDirect3DDevice9_BeginScene)
GFX_STUB(IDirect3DDevice9_EndScene)
GFX_STUB(IDirect3DDevice9_SetRenderTarget)
GFX_STUB(IDirect3DDevice9_SetDepthStencilSurface)
GFX_STUB(IDirect3DDevice9_SetViewport)
GFX_STUB(IDirect3DDevice9_SetVertexShader)
GFX_STUB(IDirect3DDevice9_SetPixelShader)
GFX_STUB(IDirect3DDevice9_SetVertexDeclaration)
GFX_STUB(IDirect3DDevice9_SetStreamSource)
GFX_STUB(IDirect3DDevice9_SetIndices)
GFX_STUB(IDirect3DDevice9_DrawIndexedPrimitive)
GFX_STUB(IDirect3DDevice9_DrawPrimitive)
GFX_STUB(IDirect3DDevice9_SetTexture)
GFX_STUB(IDirect3DDevice9_SetSamplerState)
GFX_STUB(IDirect3DDevice9_SetRenderState)
GFX_STUB(IDirect3DDevice9_CreateTexture)
GFX_STUB(IDirect3DDevice9_CreateVertexBuffer)
GFX_STUB(IDirect3DDevice9_CreateIndexBuffer)
GFX_STUB(IDirect3DDevice9_CreateVertexShader)
GFX_STUB(IDirect3DDevice9_CreatePixelShader)
GFX_STUB(IDirect3DDevice9_CreateVertexDeclaration)
GFX_STUB(IDirect3DDevice9_SetVertexShaderConstantF)
GFX_STUB(IDirect3DDevice9_SetPixelShaderConstantF)
GFX_STUB(IDirect3DDevice9_SetVertexShaderConstantB)
GFX_STUB(IDirect3DDevice9_SetVertexShaderConstantI)
GFX_STUB(IDirect3DDevice9_Lock)
GFX_STUB(IDirect3DDevice9_Unlock)
GFX_STUB(IDirect3DDevice9_Release)
GFX_STUB(XGSetTextureHeader)
GFX_STUB(XGSetVertexBufferHeader)
GFX_STUB(XGSetIndexBufferHeader)
GFX_STUB(XGSetSurface)
GFX_STUB(XGTessellateRectPatch)
