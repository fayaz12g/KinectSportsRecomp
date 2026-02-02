#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_83150644"))) PPC_WEAK_FUNC(sub_83150644);
PPC_FUNC_IMPL(__imp__sub_83150644) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83150648"))) PPC_WEAK_FUNC(sub_83150648);
PPC_FUNC_IMPL(__imp__sub_83150648) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// lis r10,-31955
	ctx.r10.s64 = -2094202880;
	// addi r4,r11,31956
	ctx.r4.s64 = ctx.r11.s64 + 31956;
	// addi r3,r10,188
	ctx.r3.s64 = ctx.r10.s64 + 188;
	// bl 0x822400d8
	ctx.lr = 0x83150668;
	sub_822400D8(ctx, base);
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// addi r3,r11,17504
	ctx.r3.s64 = ctx.r11.s64 + 17504;
	// bl 0x82fa2318
	ctx.lr = 0x83150674;
	sub_82FA2318(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83150684"))) PPC_WEAK_FUNC(sub_83150684);
PPC_FUNC_IMPL(__imp__sub_83150684) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83150688"))) PPC_WEAK_FUNC(sub_83150688);
PPC_FUNC_IMPL(__imp__sub_83150688) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	PPCVRegister vTemp{};
	// vspltisw v0,0
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_set1_epi32(int(0x0)));
	// lis r11,-31955
	ctx.r11.s64 = -2094202880;
	// addi r11,r11,224
	ctx.r11.s64 = ctx.r11.s64 + 224;
	// vupkd3d128 v0,v0,4
	temp.f32 = 3.0f;
	temp.s32 += ctx.v0.s16[1];
	vTemp.f32[3] = temp.f32;
	temp.f32 = 3.0f;
	temp.s32 += ctx.v0.s16[0];
	vTemp.f32[2] = temp.f32;
	vTemp.f32[1] = 0.0f;
	vTemp.f32[0] = 1.0f;
	ctx.v0 = vTemp;
	// vpermwi128 v0,v0,171
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0x54));
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831506A4"))) PPC_WEAK_FUNC(sub_831506A4);
PPC_FUNC_IMPL(__imp__sub_831506A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831506A8"))) PPC_WEAK_FUNC(sub_831506A8);
PPC_FUNC_IMPL(__imp__sub_831506A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// lis r10,-31955
	ctx.r10.s64 = -2094202880;
	// addi r11,r11,15824
	ctx.r11.s64 = ctx.r11.s64 + 15824;
	// addi r10,r10,240
	ctx.r10.s64 = ctx.r10.s64 + 240;
	// lvx128 v0,r0,r11
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// stvx128 v0,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831506C4"))) PPC_WEAK_FUNC(sub_831506C4);
PPC_FUNC_IMPL(__imp__sub_831506C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831506C8"))) PPC_WEAK_FUNC(sub_831506C8);
PPC_FUNC_IMPL(__imp__sub_831506C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	PPCVRegister vTemp{};
	// vspltisw v0,0
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_set1_epi32(int(0x0)));
	// lis r11,-31955
	ctx.r11.s64 = -2094202880;
	// li r10,16
	ctx.r10.s64 = 16;
	// addi r11,r11,256
	ctx.r11.s64 = ctx.r11.s64 + 256;
	// li r9,32
	ctx.r9.s64 = 32;
	// vupkd3d128 v11,v0,4
	temp.f32 = 3.0f;
	temp.s32 += ctx.v0.s16[1];
	vTemp.f32[3] = temp.f32;
	temp.f32 = 3.0f;
	temp.s32 += ctx.v0.s16[0];
	vTemp.f32[2] = temp.f32;
	vTemp.f32[1] = 0.0f;
	vTemp.f32[0] = 1.0f;
	ctx.v11 = vTemp;
	// li r8,48
	ctx.r8.s64 = 48;
	// vpermwi128 v0,v11,234
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v11.u32), 0x15));
	// vpermwi128 v13,v11,186
	_mm_store_si128((__m128i*)ctx.v13.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v11.u32), 0x45));
	// vpermwi128 v12,v11,174
	_mm_store_si128((__m128i*)ctx.v12.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v11.u32), 0x51));
	// vpermwi128 v11,v11,171
	_mm_store_si128((__m128i*)ctx.v11.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v11.u32), 0x54));
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v13,r11,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v12,r11,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v11,r11,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83150708"))) PPC_WEAK_FUNC(sub_83150708);
PPC_FUNC_IMPL(__imp__sub_83150708) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	PPCVRegister vTemp{};
	// vspltisw v0,0
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_set1_epi32(int(0x0)));
	// lis r11,-31955
	ctx.r11.s64 = -2094202880;
	// addi r11,r11,320
	ctx.r11.s64 = ctx.r11.s64 + 320;
	// vupkd3d128 v0,v0,4
	temp.f32 = 3.0f;
	temp.s32 += ctx.v0.s16[1];
	vTemp.f32[3] = temp.f32;
	temp.f32 = 3.0f;
	temp.s32 += ctx.v0.s16[0];
	vTemp.f32[2] = temp.f32;
	vTemp.f32[1] = 0.0f;
	vTemp.f32[0] = 1.0f;
	ctx.v0 = vTemp;
	// vpermwi128 v0,v0,171
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0x54));
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83150724"))) PPC_WEAK_FUNC(sub_83150724);
PPC_FUNC_IMPL(__imp__sub_83150724) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83150728"))) PPC_WEAK_FUNC(sub_83150728);
PPC_FUNC_IMPL(__imp__sub_83150728) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// lis r10,-31955
	ctx.r10.s64 = -2094202880;
	// addi r11,r11,15824
	ctx.r11.s64 = ctx.r11.s64 + 15824;
	// addi r10,r10,336
	ctx.r10.s64 = ctx.r10.s64 + 336;
	// lvx128 v0,r0,r11
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// stvx128 v0,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83150744"))) PPC_WEAK_FUNC(sub_83150744);
PPC_FUNC_IMPL(__imp__sub_83150744) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83150748"))) PPC_WEAK_FUNC(sub_83150748);
PPC_FUNC_IMPL(__imp__sub_83150748) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	PPCVRegister vTemp{};
	// vspltisw v0,0
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_set1_epi32(int(0x0)));
	// lis r11,-31955
	ctx.r11.s64 = -2094202880;
	// li r10,16
	ctx.r10.s64 = 16;
	// addi r11,r11,352
	ctx.r11.s64 = ctx.r11.s64 + 352;
	// li r9,32
	ctx.r9.s64 = 32;
	// vupkd3d128 v11,v0,4
	temp.f32 = 3.0f;
	temp.s32 += ctx.v0.s16[1];
	vTemp.f32[3] = temp.f32;
	temp.f32 = 3.0f;
	temp.s32 += ctx.v0.s16[0];
	vTemp.f32[2] = temp.f32;
	vTemp.f32[1] = 0.0f;
	vTemp.f32[0] = 1.0f;
	ctx.v11 = vTemp;
	// li r8,48
	ctx.r8.s64 = 48;
	// vpermwi128 v0,v11,234
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v11.u32), 0x15));
	// vpermwi128 v13,v11,186
	_mm_store_si128((__m128i*)ctx.v13.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v11.u32), 0x45));
	// vpermwi128 v12,v11,174
	_mm_store_si128((__m128i*)ctx.v12.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v11.u32), 0x51));
	// vpermwi128 v11,v11,171
	_mm_store_si128((__m128i*)ctx.v11.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v11.u32), 0x54));
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v13,r11,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v12,r11,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v11,r11,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83150788"))) PPC_WEAK_FUNC(sub_83150788);
PPC_FUNC_IMPL(__imp__sub_83150788) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// lis r10,-31955
	ctx.r10.s64 = -2094202880;
	// addi r4,r11,31956
	ctx.r4.s64 = ctx.r11.s64 + 31956;
	// addi r3,r10,416
	ctx.r3.s64 = ctx.r10.s64 + 416;
	// bl 0x822400d8
	ctx.lr = 0x831507A8;
	sub_822400D8(ctx, base);
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// addi r3,r11,17528
	ctx.r3.s64 = ctx.r11.s64 + 17528;
	// bl 0x82fa2318
	ctx.lr = 0x831507B4;
	sub_82FA2318(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831507C4"))) PPC_WEAK_FUNC(sub_831507C4);
PPC_FUNC_IMPL(__imp__sub_831507C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831507C8"))) PPC_WEAK_FUNC(sub_831507C8);
PPC_FUNC_IMPL(__imp__sub_831507C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	PPCVRegister vTemp{};
	// vspltisw v0,0
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_set1_epi32(int(0x0)));
	// lis r11,-31955
	ctx.r11.s64 = -2094202880;
	// addi r11,r11,448
	ctx.r11.s64 = ctx.r11.s64 + 448;
	// vupkd3d128 v0,v0,4
	temp.f32 = 3.0f;
	temp.s32 += ctx.v0.s16[1];
	vTemp.f32[3] = temp.f32;
	temp.f32 = 3.0f;
	temp.s32 += ctx.v0.s16[0];
	vTemp.f32[2] = temp.f32;
	vTemp.f32[1] = 0.0f;
	vTemp.f32[0] = 1.0f;
	ctx.v0 = vTemp;
	// vpermwi128 v0,v0,171
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0x54));
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831507E4"))) PPC_WEAK_FUNC(sub_831507E4);
PPC_FUNC_IMPL(__imp__sub_831507E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831507E8"))) PPC_WEAK_FUNC(sub_831507E8);
PPC_FUNC_IMPL(__imp__sub_831507E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// lis r10,-31955
	ctx.r10.s64 = -2094202880;
	// addi r11,r11,15824
	ctx.r11.s64 = ctx.r11.s64 + 15824;
	// addi r10,r10,464
	ctx.r10.s64 = ctx.r10.s64 + 464;
	// lvx128 v0,r0,r11
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// stvx128 v0,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83150804"))) PPC_WEAK_FUNC(sub_83150804);
PPC_FUNC_IMPL(__imp__sub_83150804) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83150808"))) PPC_WEAK_FUNC(sub_83150808);
PPC_FUNC_IMPL(__imp__sub_83150808) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	PPCVRegister vTemp{};
	// vspltisw v0,0
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_set1_epi32(int(0x0)));
	// lis r11,-31955
	ctx.r11.s64 = -2094202880;
	// li r10,16
	ctx.r10.s64 = 16;
	// addi r11,r11,480
	ctx.r11.s64 = ctx.r11.s64 + 480;
	// li r9,32
	ctx.r9.s64 = 32;
	// vupkd3d128 v11,v0,4
	temp.f32 = 3.0f;
	temp.s32 += ctx.v0.s16[1];
	vTemp.f32[3] = temp.f32;
	temp.f32 = 3.0f;
	temp.s32 += ctx.v0.s16[0];
	vTemp.f32[2] = temp.f32;
	vTemp.f32[1] = 0.0f;
	vTemp.f32[0] = 1.0f;
	ctx.v11 = vTemp;
	// li r8,48
	ctx.r8.s64 = 48;
	// vpermwi128 v0,v11,234
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v11.u32), 0x15));
	// vpermwi128 v13,v11,186
	_mm_store_si128((__m128i*)ctx.v13.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v11.u32), 0x45));
	// vpermwi128 v12,v11,174
	_mm_store_si128((__m128i*)ctx.v12.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v11.u32), 0x51));
	// vpermwi128 v11,v11,171
	_mm_store_si128((__m128i*)ctx.v11.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v11.u32), 0x54));
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v13,r11,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v12,r11,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v11,r11,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83150848"))) PPC_WEAK_FUNC(sub_83150848);
PPC_FUNC_IMPL(__imp__sub_83150848) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// lis r10,-31955
	ctx.r10.s64 = -2094202880;
	// addi r4,r11,31956
	ctx.r4.s64 = ctx.r11.s64 + 31956;
	// addi r3,r10,544
	ctx.r3.s64 = ctx.r10.s64 + 544;
	// bl 0x822400d8
	ctx.lr = 0x83150868;
	sub_822400D8(ctx, base);
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// addi r3,r11,17552
	ctx.r3.s64 = ctx.r11.s64 + 17552;
	// bl 0x82fa2318
	ctx.lr = 0x83150874;
	sub_82FA2318(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83150884"))) PPC_WEAK_FUNC(sub_83150884);
PPC_FUNC_IMPL(__imp__sub_83150884) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83150888"))) PPC_WEAK_FUNC(sub_83150888);
PPC_FUNC_IMPL(__imp__sub_83150888) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	PPCVRegister vTemp{};
	// vspltisw v0,0
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_set1_epi32(int(0x0)));
	// lis r11,-31955
	ctx.r11.s64 = -2094202880;
	// addi r11,r11,576
	ctx.r11.s64 = ctx.r11.s64 + 576;
	// vupkd3d128 v0,v0,4
	temp.f32 = 3.0f;
	temp.s32 += ctx.v0.s16[1];
	vTemp.f32[3] = temp.f32;
	temp.f32 = 3.0f;
	temp.s32 += ctx.v0.s16[0];
	vTemp.f32[2] = temp.f32;
	vTemp.f32[1] = 0.0f;
	vTemp.f32[0] = 1.0f;
	ctx.v0 = vTemp;
	// vpermwi128 v0,v0,171
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0x54));
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831508A4"))) PPC_WEAK_FUNC(sub_831508A4);
PPC_FUNC_IMPL(__imp__sub_831508A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831508A8"))) PPC_WEAK_FUNC(sub_831508A8);
PPC_FUNC_IMPL(__imp__sub_831508A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// lis r10,-31955
	ctx.r10.s64 = -2094202880;
	// addi r11,r11,15824
	ctx.r11.s64 = ctx.r11.s64 + 15824;
	// addi r10,r10,592
	ctx.r10.s64 = ctx.r10.s64 + 592;
	// lvx128 v0,r0,r11
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// stvx128 v0,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831508C4"))) PPC_WEAK_FUNC(sub_831508C4);
PPC_FUNC_IMPL(__imp__sub_831508C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831508C8"))) PPC_WEAK_FUNC(sub_831508C8);
PPC_FUNC_IMPL(__imp__sub_831508C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	PPCVRegister vTemp{};
	// vspltisw v0,0
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_set1_epi32(int(0x0)));
	// lis r11,-31955
	ctx.r11.s64 = -2094202880;
	// li r10,16
	ctx.r10.s64 = 16;
	// addi r11,r11,608
	ctx.r11.s64 = ctx.r11.s64 + 608;
	// li r9,32
	ctx.r9.s64 = 32;
	// vupkd3d128 v11,v0,4
	temp.f32 = 3.0f;
	temp.s32 += ctx.v0.s16[1];
	vTemp.f32[3] = temp.f32;
	temp.f32 = 3.0f;
	temp.s32 += ctx.v0.s16[0];
	vTemp.f32[2] = temp.f32;
	vTemp.f32[1] = 0.0f;
	vTemp.f32[0] = 1.0f;
	ctx.v11 = vTemp;
	// li r8,48
	ctx.r8.s64 = 48;
	// vpermwi128 v0,v11,234
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v11.u32), 0x15));
	// vpermwi128 v13,v11,186
	_mm_store_si128((__m128i*)ctx.v13.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v11.u32), 0x45));
	// vpermwi128 v12,v11,174
	_mm_store_si128((__m128i*)ctx.v12.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v11.u32), 0x51));
	// vpermwi128 v11,v11,171
	_mm_store_si128((__m128i*)ctx.v11.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v11.u32), 0x54));
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v13,r11,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v12,r11,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v11,r11,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83150908"))) PPC_WEAK_FUNC(sub_83150908);
PPC_FUNC_IMPL(__imp__sub_83150908) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// lis r10,-31955
	ctx.r10.s64 = -2094202880;
	// addi r4,r11,31956
	ctx.r4.s64 = ctx.r11.s64 + 31956;
	// addi r3,r10,672
	ctx.r3.s64 = ctx.r10.s64 + 672;
	// bl 0x822400d8
	ctx.lr = 0x83150928;
	sub_822400D8(ctx, base);
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// addi r3,r11,17576
	ctx.r3.s64 = ctx.r11.s64 + 17576;
	// bl 0x82fa2318
	ctx.lr = 0x83150934;
	sub_82FA2318(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83150944"))) PPC_WEAK_FUNC(sub_83150944);
PPC_FUNC_IMPL(__imp__sub_83150944) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83150948"))) PPC_WEAK_FUNC(sub_83150948);
PPC_FUNC_IMPL(__imp__sub_83150948) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	PPCVRegister vTemp{};
	// vspltisw v0,0
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_set1_epi32(int(0x0)));
	// lis r11,-31955
	ctx.r11.s64 = -2094202880;
	// addi r11,r11,704
	ctx.r11.s64 = ctx.r11.s64 + 704;
	// vupkd3d128 v0,v0,4
	temp.f32 = 3.0f;
	temp.s32 += ctx.v0.s16[1];
	vTemp.f32[3] = temp.f32;
	temp.f32 = 3.0f;
	temp.s32 += ctx.v0.s16[0];
	vTemp.f32[2] = temp.f32;
	vTemp.f32[1] = 0.0f;
	vTemp.f32[0] = 1.0f;
	ctx.v0 = vTemp;
	// vpermwi128 v0,v0,171
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0x54));
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83150964"))) PPC_WEAK_FUNC(sub_83150964);
PPC_FUNC_IMPL(__imp__sub_83150964) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83150968"))) PPC_WEAK_FUNC(sub_83150968);
PPC_FUNC_IMPL(__imp__sub_83150968) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// lis r10,-31955
	ctx.r10.s64 = -2094202880;
	// addi r11,r11,15824
	ctx.r11.s64 = ctx.r11.s64 + 15824;
	// addi r10,r10,720
	ctx.r10.s64 = ctx.r10.s64 + 720;
	// lvx128 v0,r0,r11
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// stvx128 v0,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83150984"))) PPC_WEAK_FUNC(sub_83150984);
PPC_FUNC_IMPL(__imp__sub_83150984) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83150988"))) PPC_WEAK_FUNC(sub_83150988);
PPC_FUNC_IMPL(__imp__sub_83150988) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	PPCVRegister vTemp{};
	// vspltisw v0,0
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_set1_epi32(int(0x0)));
	// lis r11,-31955
	ctx.r11.s64 = -2094202880;
	// li r10,16
	ctx.r10.s64 = 16;
	// addi r11,r11,736
	ctx.r11.s64 = ctx.r11.s64 + 736;
	// li r9,32
	ctx.r9.s64 = 32;
	// vupkd3d128 v11,v0,4
	temp.f32 = 3.0f;
	temp.s32 += ctx.v0.s16[1];
	vTemp.f32[3] = temp.f32;
	temp.f32 = 3.0f;
	temp.s32 += ctx.v0.s16[0];
	vTemp.f32[2] = temp.f32;
	vTemp.f32[1] = 0.0f;
	vTemp.f32[0] = 1.0f;
	ctx.v11 = vTemp;
	// li r8,48
	ctx.r8.s64 = 48;
	// vpermwi128 v0,v11,234
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v11.u32), 0x15));
	// vpermwi128 v13,v11,186
	_mm_store_si128((__m128i*)ctx.v13.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v11.u32), 0x45));
	// vpermwi128 v12,v11,174
	_mm_store_si128((__m128i*)ctx.v12.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v11.u32), 0x51));
	// vpermwi128 v11,v11,171
	_mm_store_si128((__m128i*)ctx.v11.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v11.u32), 0x54));
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v13,r11,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v12,r11,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v11,r11,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831509C8"))) PPC_WEAK_FUNC(sub_831509C8);
PPC_FUNC_IMPL(__imp__sub_831509C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// lis r10,-31955
	ctx.r10.s64 = -2094202880;
	// addi r4,r11,31956
	ctx.r4.s64 = ctx.r11.s64 + 31956;
	// addi r3,r10,800
	ctx.r3.s64 = ctx.r10.s64 + 800;
	// bl 0x822400d8
	ctx.lr = 0x831509E8;
	sub_822400D8(ctx, base);
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// addi r3,r11,17600
	ctx.r3.s64 = ctx.r11.s64 + 17600;
	// bl 0x82fa2318
	ctx.lr = 0x831509F4;
	sub_82FA2318(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83150A04"))) PPC_WEAK_FUNC(sub_83150A04);
PPC_FUNC_IMPL(__imp__sub_83150A04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83150A08"))) PPC_WEAK_FUNC(sub_83150A08);
PPC_FUNC_IMPL(__imp__sub_83150A08) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	PPCVRegister vTemp{};
	// vspltisw v0,0
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_set1_epi32(int(0x0)));
	// lis r11,-31955
	ctx.r11.s64 = -2094202880;
	// addi r11,r11,832
	ctx.r11.s64 = ctx.r11.s64 + 832;
	// vupkd3d128 v0,v0,4
	temp.f32 = 3.0f;
	temp.s32 += ctx.v0.s16[1];
	vTemp.f32[3] = temp.f32;
	temp.f32 = 3.0f;
	temp.s32 += ctx.v0.s16[0];
	vTemp.f32[2] = temp.f32;
	vTemp.f32[1] = 0.0f;
	vTemp.f32[0] = 1.0f;
	ctx.v0 = vTemp;
	// vpermwi128 v0,v0,171
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0x54));
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83150A24"))) PPC_WEAK_FUNC(sub_83150A24);
PPC_FUNC_IMPL(__imp__sub_83150A24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83150A28"))) PPC_WEAK_FUNC(sub_83150A28);
PPC_FUNC_IMPL(__imp__sub_83150A28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// lis r10,-31955
	ctx.r10.s64 = -2094202880;
	// addi r11,r11,15824
	ctx.r11.s64 = ctx.r11.s64 + 15824;
	// addi r10,r10,848
	ctx.r10.s64 = ctx.r10.s64 + 848;
	// lvx128 v0,r0,r11
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// stvx128 v0,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83150A44"))) PPC_WEAK_FUNC(sub_83150A44);
PPC_FUNC_IMPL(__imp__sub_83150A44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83150A48"))) PPC_WEAK_FUNC(sub_83150A48);
PPC_FUNC_IMPL(__imp__sub_83150A48) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	PPCVRegister vTemp{};
	// vspltisw v0,0
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_set1_epi32(int(0x0)));
	// lis r11,-31955
	ctx.r11.s64 = -2094202880;
	// li r10,16
	ctx.r10.s64 = 16;
	// addi r11,r11,864
	ctx.r11.s64 = ctx.r11.s64 + 864;
	// li r9,32
	ctx.r9.s64 = 32;
	// vupkd3d128 v11,v0,4
	temp.f32 = 3.0f;
	temp.s32 += ctx.v0.s16[1];
	vTemp.f32[3] = temp.f32;
	temp.f32 = 3.0f;
	temp.s32 += ctx.v0.s16[0];
	vTemp.f32[2] = temp.f32;
	vTemp.f32[1] = 0.0f;
	vTemp.f32[0] = 1.0f;
	ctx.v11 = vTemp;
	// li r8,48
	ctx.r8.s64 = 48;
	// vpermwi128 v0,v11,234
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v11.u32), 0x15));
	// vpermwi128 v13,v11,186
	_mm_store_si128((__m128i*)ctx.v13.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v11.u32), 0x45));
	// vpermwi128 v12,v11,174
	_mm_store_si128((__m128i*)ctx.v12.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v11.u32), 0x51));
	// vpermwi128 v11,v11,171
	_mm_store_si128((__m128i*)ctx.v11.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v11.u32), 0x54));
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v13,r11,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v12,r11,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v11,r11,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83150A88"))) PPC_WEAK_FUNC(sub_83150A88);
PPC_FUNC_IMPL(__imp__sub_83150A88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// lis r10,-31955
	ctx.r10.s64 = -2094202880;
	// addi r4,r11,31956
	ctx.r4.s64 = ctx.r11.s64 + 31956;
	// addi r3,r10,928
	ctx.r3.s64 = ctx.r10.s64 + 928;
	// bl 0x822400d8
	ctx.lr = 0x83150AA8;
	sub_822400D8(ctx, base);
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// addi r3,r11,17624
	ctx.r3.s64 = ctx.r11.s64 + 17624;
	// bl 0x82fa2318
	ctx.lr = 0x83150AB4;
	sub_82FA2318(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83150AC4"))) PPC_WEAK_FUNC(sub_83150AC4);
PPC_FUNC_IMPL(__imp__sub_83150AC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83150AC8"))) PPC_WEAK_FUNC(sub_83150AC8);
PPC_FUNC_IMPL(__imp__sub_83150AC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// lis r10,-31955
	ctx.r10.s64 = -2094202880;
	// addi r4,r11,31956
	ctx.r4.s64 = ctx.r11.s64 + 31956;
	// addi r3,r10,956
	ctx.r3.s64 = ctx.r10.s64 + 956;
	// bl 0x822400d8
	ctx.lr = 0x83150AE8;
	sub_822400D8(ctx, base);
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// addi r3,r11,17648
	ctx.r3.s64 = ctx.r11.s64 + 17648;
	// bl 0x82fa2318
	ctx.lr = 0x83150AF4;
	sub_82FA2318(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83150B04"))) PPC_WEAK_FUNC(sub_83150B04);
PPC_FUNC_IMPL(__imp__sub_83150B04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83150B08"))) PPC_WEAK_FUNC(sub_83150B08);
PPC_FUNC_IMPL(__imp__sub_83150B08) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	PPCVRegister vTemp{};
	// vspltisw v0,0
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_set1_epi32(int(0x0)));
	// lis r11,-31955
	ctx.r11.s64 = -2094202880;
	// addi r11,r11,992
	ctx.r11.s64 = ctx.r11.s64 + 992;
	// vupkd3d128 v0,v0,4
	temp.f32 = 3.0f;
	temp.s32 += ctx.v0.s16[1];
	vTemp.f32[3] = temp.f32;
	temp.f32 = 3.0f;
	temp.s32 += ctx.v0.s16[0];
	vTemp.f32[2] = temp.f32;
	vTemp.f32[1] = 0.0f;
	vTemp.f32[0] = 1.0f;
	ctx.v0 = vTemp;
	// vpermwi128 v0,v0,171
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0x54));
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83150B24"))) PPC_WEAK_FUNC(sub_83150B24);
PPC_FUNC_IMPL(__imp__sub_83150B24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83150B28"))) PPC_WEAK_FUNC(sub_83150B28);
PPC_FUNC_IMPL(__imp__sub_83150B28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// lis r10,-31955
	ctx.r10.s64 = -2094202880;
	// addi r11,r11,15824
	ctx.r11.s64 = ctx.r11.s64 + 15824;
	// addi r10,r10,1008
	ctx.r10.s64 = ctx.r10.s64 + 1008;
	// lvx128 v0,r0,r11
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// stvx128 v0,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83150B44"))) PPC_WEAK_FUNC(sub_83150B44);
PPC_FUNC_IMPL(__imp__sub_83150B44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83150B48"))) PPC_WEAK_FUNC(sub_83150B48);
PPC_FUNC_IMPL(__imp__sub_83150B48) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	PPCVRegister vTemp{};
	// vspltisw v0,0
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_set1_epi32(int(0x0)));
	// lis r11,-31955
	ctx.r11.s64 = -2094202880;
	// li r10,16
	ctx.r10.s64 = 16;
	// addi r11,r11,1024
	ctx.r11.s64 = ctx.r11.s64 + 1024;
	// li r9,32
	ctx.r9.s64 = 32;
	// vupkd3d128 v11,v0,4
	temp.f32 = 3.0f;
	temp.s32 += ctx.v0.s16[1];
	vTemp.f32[3] = temp.f32;
	temp.f32 = 3.0f;
	temp.s32 += ctx.v0.s16[0];
	vTemp.f32[2] = temp.f32;
	vTemp.f32[1] = 0.0f;
	vTemp.f32[0] = 1.0f;
	ctx.v11 = vTemp;
	// li r8,48
	ctx.r8.s64 = 48;
	// vpermwi128 v0,v11,234
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v11.u32), 0x15));
	// vpermwi128 v13,v11,186
	_mm_store_si128((__m128i*)ctx.v13.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v11.u32), 0x45));
	// vpermwi128 v12,v11,174
	_mm_store_si128((__m128i*)ctx.v12.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v11.u32), 0x51));
	// vpermwi128 v11,v11,171
	_mm_store_si128((__m128i*)ctx.v11.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v11.u32), 0x54));
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v13,r11,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v12,r11,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v11,r11,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83150B88"))) PPC_WEAK_FUNC(sub_83150B88);
PPC_FUNC_IMPL(__imp__sub_83150B88) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	PPCVRegister vTemp{};
	// vspltisw v0,0
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_set1_epi32(int(0x0)));
	// lis r11,-31955
	ctx.r11.s64 = -2094202880;
	// addi r11,r11,1088
	ctx.r11.s64 = ctx.r11.s64 + 1088;
	// vupkd3d128 v0,v0,4
	temp.f32 = 3.0f;
	temp.s32 += ctx.v0.s16[1];
	vTemp.f32[3] = temp.f32;
	temp.f32 = 3.0f;
	temp.s32 += ctx.v0.s16[0];
	vTemp.f32[2] = temp.f32;
	vTemp.f32[1] = 0.0f;
	vTemp.f32[0] = 1.0f;
	ctx.v0 = vTemp;
	// vpermwi128 v0,v0,171
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0x54));
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83150BA4"))) PPC_WEAK_FUNC(sub_83150BA4);
PPC_FUNC_IMPL(__imp__sub_83150BA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83150BA8"))) PPC_WEAK_FUNC(sub_83150BA8);
PPC_FUNC_IMPL(__imp__sub_83150BA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// lis r10,-31955
	ctx.r10.s64 = -2094202880;
	// addi r11,r11,15824
	ctx.r11.s64 = ctx.r11.s64 + 15824;
	// addi r10,r10,1104
	ctx.r10.s64 = ctx.r10.s64 + 1104;
	// lvx128 v0,r0,r11
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// stvx128 v0,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83150BC4"))) PPC_WEAK_FUNC(sub_83150BC4);
PPC_FUNC_IMPL(__imp__sub_83150BC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83150BC8"))) PPC_WEAK_FUNC(sub_83150BC8);
PPC_FUNC_IMPL(__imp__sub_83150BC8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	PPCVRegister vTemp{};
	// vspltisw v0,0
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_set1_epi32(int(0x0)));
	// lis r11,-31955
	ctx.r11.s64 = -2094202880;
	// li r10,16
	ctx.r10.s64 = 16;
	// addi r11,r11,1120
	ctx.r11.s64 = ctx.r11.s64 + 1120;
	// li r9,32
	ctx.r9.s64 = 32;
	// vupkd3d128 v11,v0,4
	temp.f32 = 3.0f;
	temp.s32 += ctx.v0.s16[1];
	vTemp.f32[3] = temp.f32;
	temp.f32 = 3.0f;
	temp.s32 += ctx.v0.s16[0];
	vTemp.f32[2] = temp.f32;
	vTemp.f32[1] = 0.0f;
	vTemp.f32[0] = 1.0f;
	ctx.v11 = vTemp;
	// li r8,48
	ctx.r8.s64 = 48;
	// vpermwi128 v0,v11,234
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v11.u32), 0x15));
	// vpermwi128 v13,v11,186
	_mm_store_si128((__m128i*)ctx.v13.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v11.u32), 0x45));
	// vpermwi128 v12,v11,174
	_mm_store_si128((__m128i*)ctx.v12.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v11.u32), 0x51));
	// vpermwi128 v11,v11,171
	_mm_store_si128((__m128i*)ctx.v11.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v11.u32), 0x54));
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v13,r11,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v12,r11,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v11,r11,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83150C08"))) PPC_WEAK_FUNC(sub_83150C08);
PPC_FUNC_IMPL(__imp__sub_83150C08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// lis r10,-31955
	ctx.r10.s64 = -2094202880;
	// addi r4,r11,31956
	ctx.r4.s64 = ctx.r11.s64 + 31956;
	// addi r3,r10,1184
	ctx.r3.s64 = ctx.r10.s64 + 1184;
	// bl 0x822400d8
	ctx.lr = 0x83150C28;
	sub_822400D8(ctx, base);
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// addi r3,r11,17672
	ctx.r3.s64 = ctx.r11.s64 + 17672;
	// bl 0x82fa2318
	ctx.lr = 0x83150C34;
	sub_82FA2318(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83150C44"))) PPC_WEAK_FUNC(sub_83150C44);
PPC_FUNC_IMPL(__imp__sub_83150C44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83150C48"))) PPC_WEAK_FUNC(sub_83150C48);
PPC_FUNC_IMPL(__imp__sub_83150C48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// lis r10,-31955
	ctx.r10.s64 = -2094202880;
	// addi r4,r11,31956
	ctx.r4.s64 = ctx.r11.s64 + 31956;
	// addi r3,r10,1216
	ctx.r3.s64 = ctx.r10.s64 + 1216;
	// bl 0x822400d8
	ctx.lr = 0x83150C68;
	sub_822400D8(ctx, base);
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// addi r3,r11,17696
	ctx.r3.s64 = ctx.r11.s64 + 17696;
	// bl 0x82fa2318
	ctx.lr = 0x83150C74;
	sub_82FA2318(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83150C84"))) PPC_WEAK_FUNC(sub_83150C84);
PPC_FUNC_IMPL(__imp__sub_83150C84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83150C88"))) PPC_WEAK_FUNC(sub_83150C88);
PPC_FUNC_IMPL(__imp__sub_83150C88) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	PPCVRegister vTemp{};
	// vspltisw v0,0
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_set1_epi32(int(0x0)));
	// lis r11,-31955
	ctx.r11.s64 = -2094202880;
	// addi r11,r11,1248
	ctx.r11.s64 = ctx.r11.s64 + 1248;
	// vupkd3d128 v0,v0,4
	temp.f32 = 3.0f;
	temp.s32 += ctx.v0.s16[1];
	vTemp.f32[3] = temp.f32;
	temp.f32 = 3.0f;
	temp.s32 += ctx.v0.s16[0];
	vTemp.f32[2] = temp.f32;
	vTemp.f32[1] = 0.0f;
	vTemp.f32[0] = 1.0f;
	ctx.v0 = vTemp;
	// vpermwi128 v0,v0,171
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0x54));
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83150CA4"))) PPC_WEAK_FUNC(sub_83150CA4);
PPC_FUNC_IMPL(__imp__sub_83150CA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83150CA8"))) PPC_WEAK_FUNC(sub_83150CA8);
PPC_FUNC_IMPL(__imp__sub_83150CA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// lis r10,-31955
	ctx.r10.s64 = -2094202880;
	// addi r11,r11,15824
	ctx.r11.s64 = ctx.r11.s64 + 15824;
	// addi r10,r10,1264
	ctx.r10.s64 = ctx.r10.s64 + 1264;
	// lvx128 v0,r0,r11
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// stvx128 v0,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83150CC4"))) PPC_WEAK_FUNC(sub_83150CC4);
PPC_FUNC_IMPL(__imp__sub_83150CC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83150CC8"))) PPC_WEAK_FUNC(sub_83150CC8);
PPC_FUNC_IMPL(__imp__sub_83150CC8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	PPCVRegister vTemp{};
	// vspltisw v0,0
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_set1_epi32(int(0x0)));
	// lis r11,-31955
	ctx.r11.s64 = -2094202880;
	// li r10,16
	ctx.r10.s64 = 16;
	// addi r11,r11,1280
	ctx.r11.s64 = ctx.r11.s64 + 1280;
	// li r9,32
	ctx.r9.s64 = 32;
	// vupkd3d128 v11,v0,4
	temp.f32 = 3.0f;
	temp.s32 += ctx.v0.s16[1];
	vTemp.f32[3] = temp.f32;
	temp.f32 = 3.0f;
	temp.s32 += ctx.v0.s16[0];
	vTemp.f32[2] = temp.f32;
	vTemp.f32[1] = 0.0f;
	vTemp.f32[0] = 1.0f;
	ctx.v11 = vTemp;
	// li r8,48
	ctx.r8.s64 = 48;
	// vpermwi128 v0,v11,234
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v11.u32), 0x15));
	// vpermwi128 v13,v11,186
	_mm_store_si128((__m128i*)ctx.v13.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v11.u32), 0x45));
	// vpermwi128 v12,v11,174
	_mm_store_si128((__m128i*)ctx.v12.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v11.u32), 0x51));
	// vpermwi128 v11,v11,171
	_mm_store_si128((__m128i*)ctx.v11.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v11.u32), 0x54));
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v13,r11,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v12,r11,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v11,r11,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83150D08"))) PPC_WEAK_FUNC(sub_83150D08);
PPC_FUNC_IMPL(__imp__sub_83150D08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// lis r10,-31955
	ctx.r10.s64 = -2094202880;
	// addi r4,r11,31956
	ctx.r4.s64 = ctx.r11.s64 + 31956;
	// addi r3,r10,1344
	ctx.r3.s64 = ctx.r10.s64 + 1344;
	// bl 0x822400d8
	ctx.lr = 0x83150D28;
	sub_822400D8(ctx, base);
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// addi r3,r11,17720
	ctx.r3.s64 = ctx.r11.s64 + 17720;
	// bl 0x82fa2318
	ctx.lr = 0x83150D34;
	sub_82FA2318(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83150D44"))) PPC_WEAK_FUNC(sub_83150D44);
PPC_FUNC_IMPL(__imp__sub_83150D44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83150D48"))) PPC_WEAK_FUNC(sub_83150D48);
PPC_FUNC_IMPL(__imp__sub_83150D48) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	PPCVRegister vTemp{};
	// vspltisw v0,0
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_set1_epi32(int(0x0)));
	// lis r11,-31955
	ctx.r11.s64 = -2094202880;
	// addi r11,r11,1376
	ctx.r11.s64 = ctx.r11.s64 + 1376;
	// vupkd3d128 v0,v0,4
	temp.f32 = 3.0f;
	temp.s32 += ctx.v0.s16[1];
	vTemp.f32[3] = temp.f32;
	temp.f32 = 3.0f;
	temp.s32 += ctx.v0.s16[0];
	vTemp.f32[2] = temp.f32;
	vTemp.f32[1] = 0.0f;
	vTemp.f32[0] = 1.0f;
	ctx.v0 = vTemp;
	// vpermwi128 v0,v0,171
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0x54));
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83150D64"))) PPC_WEAK_FUNC(sub_83150D64);
PPC_FUNC_IMPL(__imp__sub_83150D64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83150D68"))) PPC_WEAK_FUNC(sub_83150D68);
PPC_FUNC_IMPL(__imp__sub_83150D68) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// lis r10,-31955
	ctx.r10.s64 = -2094202880;
	// addi r11,r11,15824
	ctx.r11.s64 = ctx.r11.s64 + 15824;
	// addi r10,r10,1392
	ctx.r10.s64 = ctx.r10.s64 + 1392;
	// lvx128 v0,r0,r11
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// stvx128 v0,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83150D84"))) PPC_WEAK_FUNC(sub_83150D84);
PPC_FUNC_IMPL(__imp__sub_83150D84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83150D88"))) PPC_WEAK_FUNC(sub_83150D88);
PPC_FUNC_IMPL(__imp__sub_83150D88) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	PPCVRegister vTemp{};
	// vspltisw v0,0
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_set1_epi32(int(0x0)));
	// lis r11,-31955
	ctx.r11.s64 = -2094202880;
	// li r10,16
	ctx.r10.s64 = 16;
	// addi r11,r11,1408
	ctx.r11.s64 = ctx.r11.s64 + 1408;
	// li r9,32
	ctx.r9.s64 = 32;
	// vupkd3d128 v11,v0,4
	temp.f32 = 3.0f;
	temp.s32 += ctx.v0.s16[1];
	vTemp.f32[3] = temp.f32;
	temp.f32 = 3.0f;
	temp.s32 += ctx.v0.s16[0];
	vTemp.f32[2] = temp.f32;
	vTemp.f32[1] = 0.0f;
	vTemp.f32[0] = 1.0f;
	ctx.v11 = vTemp;
	// li r8,48
	ctx.r8.s64 = 48;
	// vpermwi128 v0,v11,234
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v11.u32), 0x15));
	// vpermwi128 v13,v11,186
	_mm_store_si128((__m128i*)ctx.v13.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v11.u32), 0x45));
	// vpermwi128 v12,v11,174
	_mm_store_si128((__m128i*)ctx.v12.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v11.u32), 0x51));
	// vpermwi128 v11,v11,171
	_mm_store_si128((__m128i*)ctx.v11.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v11.u32), 0x54));
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v13,r11,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v12,r11,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v11,r11,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83150DC8"))) PPC_WEAK_FUNC(sub_83150DC8);
PPC_FUNC_IMPL(__imp__sub_83150DC8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	PPCVRegister vTemp{};
	// vspltisw v0,0
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_set1_epi32(int(0x0)));
	// lis r11,-31955
	ctx.r11.s64 = -2094202880;
	// addi r11,r11,1472
	ctx.r11.s64 = ctx.r11.s64 + 1472;
	// vupkd3d128 v0,v0,4
	temp.f32 = 3.0f;
	temp.s32 += ctx.v0.s16[1];
	vTemp.f32[3] = temp.f32;
	temp.f32 = 3.0f;
	temp.s32 += ctx.v0.s16[0];
	vTemp.f32[2] = temp.f32;
	vTemp.f32[1] = 0.0f;
	vTemp.f32[0] = 1.0f;
	ctx.v0 = vTemp;
	// vpermwi128 v0,v0,171
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0x54));
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83150DE4"))) PPC_WEAK_FUNC(sub_83150DE4);
PPC_FUNC_IMPL(__imp__sub_83150DE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83150DE8"))) PPC_WEAK_FUNC(sub_83150DE8);
PPC_FUNC_IMPL(__imp__sub_83150DE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// lis r10,-31955
	ctx.r10.s64 = -2094202880;
	// addi r11,r11,15824
	ctx.r11.s64 = ctx.r11.s64 + 15824;
	// addi r10,r10,1488
	ctx.r10.s64 = ctx.r10.s64 + 1488;
	// lvx128 v0,r0,r11
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// stvx128 v0,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83150E04"))) PPC_WEAK_FUNC(sub_83150E04);
PPC_FUNC_IMPL(__imp__sub_83150E04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83150E08"))) PPC_WEAK_FUNC(sub_83150E08);
PPC_FUNC_IMPL(__imp__sub_83150E08) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	PPCVRegister vTemp{};
	// vspltisw v0,0
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_set1_epi32(int(0x0)));
	// lis r11,-31955
	ctx.r11.s64 = -2094202880;
	// li r10,16
	ctx.r10.s64 = 16;
	// addi r11,r11,1504
	ctx.r11.s64 = ctx.r11.s64 + 1504;
	// li r9,32
	ctx.r9.s64 = 32;
	// vupkd3d128 v11,v0,4
	temp.f32 = 3.0f;
	temp.s32 += ctx.v0.s16[1];
	vTemp.f32[3] = temp.f32;
	temp.f32 = 3.0f;
	temp.s32 += ctx.v0.s16[0];
	vTemp.f32[2] = temp.f32;
	vTemp.f32[1] = 0.0f;
	vTemp.f32[0] = 1.0f;
	ctx.v11 = vTemp;
	// li r8,48
	ctx.r8.s64 = 48;
	// vpermwi128 v0,v11,234
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v11.u32), 0x15));
	// vpermwi128 v13,v11,186
	_mm_store_si128((__m128i*)ctx.v13.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v11.u32), 0x45));
	// vpermwi128 v12,v11,174
	_mm_store_si128((__m128i*)ctx.v12.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v11.u32), 0x51));
	// vpermwi128 v11,v11,171
	_mm_store_si128((__m128i*)ctx.v11.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v11.u32), 0x54));
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v13,r11,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v12,r11,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v11,r11,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83150E48"))) PPC_WEAK_FUNC(sub_83150E48);
PPC_FUNC_IMPL(__imp__sub_83150E48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// lis r10,-31955
	ctx.r10.s64 = -2094202880;
	// addi r4,r11,31956
	ctx.r4.s64 = ctx.r11.s64 + 31956;
	// addi r3,r10,1568
	ctx.r3.s64 = ctx.r10.s64 + 1568;
	// bl 0x822400d8
	ctx.lr = 0x83150E68;
	sub_822400D8(ctx, base);
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// addi r3,r11,17744
	ctx.r3.s64 = ctx.r11.s64 + 17744;
	// bl 0x82fa2318
	ctx.lr = 0x83150E74;
	sub_82FA2318(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83150E84"))) PPC_WEAK_FUNC(sub_83150E84);
PPC_FUNC_IMPL(__imp__sub_83150E84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83150E88"))) PPC_WEAK_FUNC(sub_83150E88);
PPC_FUNC_IMPL(__imp__sub_83150E88) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	PPCVRegister vTemp{};
	// vspltisw v0,0
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_set1_epi32(int(0x0)));
	// lis r11,-31955
	ctx.r11.s64 = -2094202880;
	// addi r11,r11,1600
	ctx.r11.s64 = ctx.r11.s64 + 1600;
	// vupkd3d128 v0,v0,4
	temp.f32 = 3.0f;
	temp.s32 += ctx.v0.s16[1];
	vTemp.f32[3] = temp.f32;
	temp.f32 = 3.0f;
	temp.s32 += ctx.v0.s16[0];
	vTemp.f32[2] = temp.f32;
	vTemp.f32[1] = 0.0f;
	vTemp.f32[0] = 1.0f;
	ctx.v0 = vTemp;
	// vpermwi128 v0,v0,171
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0x54));
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83150EA4"))) PPC_WEAK_FUNC(sub_83150EA4);
PPC_FUNC_IMPL(__imp__sub_83150EA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83150EA8"))) PPC_WEAK_FUNC(sub_83150EA8);
PPC_FUNC_IMPL(__imp__sub_83150EA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// lis r10,-31955
	ctx.r10.s64 = -2094202880;
	// addi r11,r11,15824
	ctx.r11.s64 = ctx.r11.s64 + 15824;
	// addi r10,r10,1616
	ctx.r10.s64 = ctx.r10.s64 + 1616;
	// lvx128 v0,r0,r11
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// stvx128 v0,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83150EC4"))) PPC_WEAK_FUNC(sub_83150EC4);
PPC_FUNC_IMPL(__imp__sub_83150EC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83150EC8"))) PPC_WEAK_FUNC(sub_83150EC8);
PPC_FUNC_IMPL(__imp__sub_83150EC8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	PPCVRegister vTemp{};
	// vspltisw v0,0
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_set1_epi32(int(0x0)));
	// lis r11,-31955
	ctx.r11.s64 = -2094202880;
	// li r10,16
	ctx.r10.s64 = 16;
	// addi r11,r11,1632
	ctx.r11.s64 = ctx.r11.s64 + 1632;
	// li r9,32
	ctx.r9.s64 = 32;
	// vupkd3d128 v11,v0,4
	temp.f32 = 3.0f;
	temp.s32 += ctx.v0.s16[1];
	vTemp.f32[3] = temp.f32;
	temp.f32 = 3.0f;
	temp.s32 += ctx.v0.s16[0];
	vTemp.f32[2] = temp.f32;
	vTemp.f32[1] = 0.0f;
	vTemp.f32[0] = 1.0f;
	ctx.v11 = vTemp;
	// li r8,48
	ctx.r8.s64 = 48;
	// vpermwi128 v0,v11,234
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v11.u32), 0x15));
	// vpermwi128 v13,v11,186
	_mm_store_si128((__m128i*)ctx.v13.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v11.u32), 0x45));
	// vpermwi128 v12,v11,174
	_mm_store_si128((__m128i*)ctx.v12.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v11.u32), 0x51));
	// vpermwi128 v11,v11,171
	_mm_store_si128((__m128i*)ctx.v11.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v11.u32), 0x54));
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v13,r11,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v12,r11,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v11,r11,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83150F08"))) PPC_WEAK_FUNC(sub_83150F08);
PPC_FUNC_IMPL(__imp__sub_83150F08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// lis r10,-31955
	ctx.r10.s64 = -2094202880;
	// addi r4,r11,31956
	ctx.r4.s64 = ctx.r11.s64 + 31956;
	// addi r3,r10,1696
	ctx.r3.s64 = ctx.r10.s64 + 1696;
	// bl 0x822400d8
	ctx.lr = 0x83150F28;
	sub_822400D8(ctx, base);
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// addi r3,r11,17768
	ctx.r3.s64 = ctx.r11.s64 + 17768;
	// bl 0x82fa2318
	ctx.lr = 0x83150F34;
	sub_82FA2318(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83150F44"))) PPC_WEAK_FUNC(sub_83150F44);
PPC_FUNC_IMPL(__imp__sub_83150F44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83150F48"))) PPC_WEAK_FUNC(sub_83150F48);
PPC_FUNC_IMPL(__imp__sub_83150F48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// lis r10,-31955
	ctx.r10.s64 = -2094202880;
	// addi r4,r11,31956
	ctx.r4.s64 = ctx.r11.s64 + 31956;
	// addi r3,r10,1724
	ctx.r3.s64 = ctx.r10.s64 + 1724;
	// bl 0x822400d8
	ctx.lr = 0x83150F68;
	sub_822400D8(ctx, base);
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// addi r3,r11,17792
	ctx.r3.s64 = ctx.r11.s64 + 17792;
	// bl 0x82fa2318
	ctx.lr = 0x83150F74;
	sub_82FA2318(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83150F84"))) PPC_WEAK_FUNC(sub_83150F84);
PPC_FUNC_IMPL(__imp__sub_83150F84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83150F88"))) PPC_WEAK_FUNC(sub_83150F88);
PPC_FUNC_IMPL(__imp__sub_83150F88) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	PPCVRegister vTemp{};
	// vspltisw v0,0
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_set1_epi32(int(0x0)));
	// lis r11,-31955
	ctx.r11.s64 = -2094202880;
	// addi r11,r11,1760
	ctx.r11.s64 = ctx.r11.s64 + 1760;
	// vupkd3d128 v0,v0,4
	temp.f32 = 3.0f;
	temp.s32 += ctx.v0.s16[1];
	vTemp.f32[3] = temp.f32;
	temp.f32 = 3.0f;
	temp.s32 += ctx.v0.s16[0];
	vTemp.f32[2] = temp.f32;
	vTemp.f32[1] = 0.0f;
	vTemp.f32[0] = 1.0f;
	ctx.v0 = vTemp;
	// vpermwi128 v0,v0,171
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0x54));
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83150FA4"))) PPC_WEAK_FUNC(sub_83150FA4);
PPC_FUNC_IMPL(__imp__sub_83150FA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83150FA8"))) PPC_WEAK_FUNC(sub_83150FA8);
PPC_FUNC_IMPL(__imp__sub_83150FA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// lis r10,-31955
	ctx.r10.s64 = -2094202880;
	// addi r11,r11,15824
	ctx.r11.s64 = ctx.r11.s64 + 15824;
	// addi r10,r10,1776
	ctx.r10.s64 = ctx.r10.s64 + 1776;
	// lvx128 v0,r0,r11
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// stvx128 v0,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83150FC4"))) PPC_WEAK_FUNC(sub_83150FC4);
PPC_FUNC_IMPL(__imp__sub_83150FC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83150FC8"))) PPC_WEAK_FUNC(sub_83150FC8);
PPC_FUNC_IMPL(__imp__sub_83150FC8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	PPCVRegister vTemp{};
	// vspltisw v0,0
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_set1_epi32(int(0x0)));
	// lis r11,-31955
	ctx.r11.s64 = -2094202880;
	// li r10,16
	ctx.r10.s64 = 16;
	// addi r11,r11,1792
	ctx.r11.s64 = ctx.r11.s64 + 1792;
	// li r9,32
	ctx.r9.s64 = 32;
	// vupkd3d128 v11,v0,4
	temp.f32 = 3.0f;
	temp.s32 += ctx.v0.s16[1];
	vTemp.f32[3] = temp.f32;
	temp.f32 = 3.0f;
	temp.s32 += ctx.v0.s16[0];
	vTemp.f32[2] = temp.f32;
	vTemp.f32[1] = 0.0f;
	vTemp.f32[0] = 1.0f;
	ctx.v11 = vTemp;
	// li r8,48
	ctx.r8.s64 = 48;
	// vpermwi128 v0,v11,234
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v11.u32), 0x15));
	// vpermwi128 v13,v11,186
	_mm_store_si128((__m128i*)ctx.v13.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v11.u32), 0x45));
	// vpermwi128 v12,v11,174
	_mm_store_si128((__m128i*)ctx.v12.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v11.u32), 0x51));
	// vpermwi128 v11,v11,171
	_mm_store_si128((__m128i*)ctx.v11.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v11.u32), 0x54));
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v13,r11,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v12,r11,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v11,r11,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83151008"))) PPC_WEAK_FUNC(sub_83151008);
PPC_FUNC_IMPL(__imp__sub_83151008) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	PPCVRegister vTemp{};
	// vspltisw v0,0
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_set1_epi32(int(0x0)));
	// lis r11,-31955
	ctx.r11.s64 = -2094202880;
	// addi r11,r11,1856
	ctx.r11.s64 = ctx.r11.s64 + 1856;
	// vupkd3d128 v0,v0,4
	temp.f32 = 3.0f;
	temp.s32 += ctx.v0.s16[1];
	vTemp.f32[3] = temp.f32;
	temp.f32 = 3.0f;
	temp.s32 += ctx.v0.s16[0];
	vTemp.f32[2] = temp.f32;
	vTemp.f32[1] = 0.0f;
	vTemp.f32[0] = 1.0f;
	ctx.v0 = vTemp;
	// vpermwi128 v0,v0,171
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0x54));
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83151024"))) PPC_WEAK_FUNC(sub_83151024);
PPC_FUNC_IMPL(__imp__sub_83151024) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83151028"))) PPC_WEAK_FUNC(sub_83151028);
PPC_FUNC_IMPL(__imp__sub_83151028) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// lis r10,-31955
	ctx.r10.s64 = -2094202880;
	// addi r11,r11,15824
	ctx.r11.s64 = ctx.r11.s64 + 15824;
	// addi r10,r10,1872
	ctx.r10.s64 = ctx.r10.s64 + 1872;
	// lvx128 v0,r0,r11
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// stvx128 v0,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83151044"))) PPC_WEAK_FUNC(sub_83151044);
PPC_FUNC_IMPL(__imp__sub_83151044) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83151048"))) PPC_WEAK_FUNC(sub_83151048);
PPC_FUNC_IMPL(__imp__sub_83151048) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	PPCVRegister vTemp{};
	// vspltisw v0,0
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_set1_epi32(int(0x0)));
	// lis r11,-31955
	ctx.r11.s64 = -2094202880;
	// li r10,16
	ctx.r10.s64 = 16;
	// addi r11,r11,1888
	ctx.r11.s64 = ctx.r11.s64 + 1888;
	// li r9,32
	ctx.r9.s64 = 32;
	// vupkd3d128 v11,v0,4
	temp.f32 = 3.0f;
	temp.s32 += ctx.v0.s16[1];
	vTemp.f32[3] = temp.f32;
	temp.f32 = 3.0f;
	temp.s32 += ctx.v0.s16[0];
	vTemp.f32[2] = temp.f32;
	vTemp.f32[1] = 0.0f;
	vTemp.f32[0] = 1.0f;
	ctx.v11 = vTemp;
	// li r8,48
	ctx.r8.s64 = 48;
	// vpermwi128 v0,v11,234
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v11.u32), 0x15));
	// vpermwi128 v13,v11,186
	_mm_store_si128((__m128i*)ctx.v13.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v11.u32), 0x45));
	// vpermwi128 v12,v11,174
	_mm_store_si128((__m128i*)ctx.v12.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v11.u32), 0x51));
	// vpermwi128 v11,v11,171
	_mm_store_si128((__m128i*)ctx.v11.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v11.u32), 0x54));
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v13,r11,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v12,r11,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v11,r11,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83151088"))) PPC_WEAK_FUNC(sub_83151088);
PPC_FUNC_IMPL(__imp__sub_83151088) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// lis r10,-31955
	ctx.r10.s64 = -2094202880;
	// addi r4,r11,31956
	ctx.r4.s64 = ctx.r11.s64 + 31956;
	// addi r3,r10,1952
	ctx.r3.s64 = ctx.r10.s64 + 1952;
	// bl 0x822400d8
	ctx.lr = 0x831510A8;
	sub_822400D8(ctx, base);
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// addi r3,r11,17816
	ctx.r3.s64 = ctx.r11.s64 + 17816;
	// bl 0x82fa2318
	ctx.lr = 0x831510B4;
	sub_82FA2318(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831510C4"))) PPC_WEAK_FUNC(sub_831510C4);
PPC_FUNC_IMPL(__imp__sub_831510C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831510C8"))) PPC_WEAK_FUNC(sub_831510C8);
PPC_FUNC_IMPL(__imp__sub_831510C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	PPCVRegister vTemp{};
	// vspltisw v0,0
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_set1_epi32(int(0x0)));
	// lis r11,-31955
	ctx.r11.s64 = -2094202880;
	// addi r11,r11,1984
	ctx.r11.s64 = ctx.r11.s64 + 1984;
	// vupkd3d128 v0,v0,4
	temp.f32 = 3.0f;
	temp.s32 += ctx.v0.s16[1];
	vTemp.f32[3] = temp.f32;
	temp.f32 = 3.0f;
	temp.s32 += ctx.v0.s16[0];
	vTemp.f32[2] = temp.f32;
	vTemp.f32[1] = 0.0f;
	vTemp.f32[0] = 1.0f;
	ctx.v0 = vTemp;
	// vpermwi128 v0,v0,171
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0x54));
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831510E4"))) PPC_WEAK_FUNC(sub_831510E4);
PPC_FUNC_IMPL(__imp__sub_831510E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831510E8"))) PPC_WEAK_FUNC(sub_831510E8);
PPC_FUNC_IMPL(__imp__sub_831510E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// lis r10,-31955
	ctx.r10.s64 = -2094202880;
	// addi r11,r11,15824
	ctx.r11.s64 = ctx.r11.s64 + 15824;
	// addi r10,r10,2000
	ctx.r10.s64 = ctx.r10.s64 + 2000;
	// lvx128 v0,r0,r11
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// stvx128 v0,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83151104"))) PPC_WEAK_FUNC(sub_83151104);
PPC_FUNC_IMPL(__imp__sub_83151104) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83151108"))) PPC_WEAK_FUNC(sub_83151108);
PPC_FUNC_IMPL(__imp__sub_83151108) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	PPCVRegister vTemp{};
	// vspltisw v0,0
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_set1_epi32(int(0x0)));
	// lis r11,-31955
	ctx.r11.s64 = -2094202880;
	// li r10,16
	ctx.r10.s64 = 16;
	// addi r11,r11,2016
	ctx.r11.s64 = ctx.r11.s64 + 2016;
	// li r9,32
	ctx.r9.s64 = 32;
	// vupkd3d128 v11,v0,4
	temp.f32 = 3.0f;
	temp.s32 += ctx.v0.s16[1];
	vTemp.f32[3] = temp.f32;
	temp.f32 = 3.0f;
	temp.s32 += ctx.v0.s16[0];
	vTemp.f32[2] = temp.f32;
	vTemp.f32[1] = 0.0f;
	vTemp.f32[0] = 1.0f;
	ctx.v11 = vTemp;
	// li r8,48
	ctx.r8.s64 = 48;
	// vpermwi128 v0,v11,234
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v11.u32), 0x15));
	// vpermwi128 v13,v11,186
	_mm_store_si128((__m128i*)ctx.v13.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v11.u32), 0x45));
	// vpermwi128 v12,v11,174
	_mm_store_si128((__m128i*)ctx.v12.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v11.u32), 0x51));
	// vpermwi128 v11,v11,171
	_mm_store_si128((__m128i*)ctx.v11.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v11.u32), 0x54));
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v13,r11,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v12,r11,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v11,r11,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83151148"))) PPC_WEAK_FUNC(sub_83151148);
PPC_FUNC_IMPL(__imp__sub_83151148) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// lis r10,-31955
	ctx.r10.s64 = -2094202880;
	// addi r4,r11,31956
	ctx.r4.s64 = ctx.r11.s64 + 31956;
	// addi r3,r10,2080
	ctx.r3.s64 = ctx.r10.s64 + 2080;
	// bl 0x822400d8
	ctx.lr = 0x83151168;
	sub_822400D8(ctx, base);
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// addi r3,r11,17840
	ctx.r3.s64 = ctx.r11.s64 + 17840;
	// bl 0x82fa2318
	ctx.lr = 0x83151174;
	sub_82FA2318(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83151184"))) PPC_WEAK_FUNC(sub_83151184);
PPC_FUNC_IMPL(__imp__sub_83151184) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83151188"))) PPC_WEAK_FUNC(sub_83151188);
PPC_FUNC_IMPL(__imp__sub_83151188) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// lis r10,-31955
	ctx.r10.s64 = -2094202880;
	// addi r4,r11,31956
	ctx.r4.s64 = ctx.r11.s64 + 31956;
	// addi r3,r10,2108
	ctx.r3.s64 = ctx.r10.s64 + 2108;
	// bl 0x822400d8
	ctx.lr = 0x831511A8;
	sub_822400D8(ctx, base);
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// addi r3,r11,17864
	ctx.r3.s64 = ctx.r11.s64 + 17864;
	// bl 0x82fa2318
	ctx.lr = 0x831511B4;
	sub_82FA2318(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831511C4"))) PPC_WEAK_FUNC(sub_831511C4);
PPC_FUNC_IMPL(__imp__sub_831511C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831511C8"))) PPC_WEAK_FUNC(sub_831511C8);
PPC_FUNC_IMPL(__imp__sub_831511C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	PPCVRegister vTemp{};
	// vspltisw v0,0
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_set1_epi32(int(0x0)));
	// lis r11,-31955
	ctx.r11.s64 = -2094202880;
	// addi r11,r11,2144
	ctx.r11.s64 = ctx.r11.s64 + 2144;
	// vupkd3d128 v0,v0,4
	temp.f32 = 3.0f;
	temp.s32 += ctx.v0.s16[1];
	vTemp.f32[3] = temp.f32;
	temp.f32 = 3.0f;
	temp.s32 += ctx.v0.s16[0];
	vTemp.f32[2] = temp.f32;
	vTemp.f32[1] = 0.0f;
	vTemp.f32[0] = 1.0f;
	ctx.v0 = vTemp;
	// vpermwi128 v0,v0,171
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0x54));
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831511E4"))) PPC_WEAK_FUNC(sub_831511E4);
PPC_FUNC_IMPL(__imp__sub_831511E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831511E8"))) PPC_WEAK_FUNC(sub_831511E8);
PPC_FUNC_IMPL(__imp__sub_831511E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// lis r10,-31955
	ctx.r10.s64 = -2094202880;
	// addi r11,r11,15824
	ctx.r11.s64 = ctx.r11.s64 + 15824;
	// addi r10,r10,2160
	ctx.r10.s64 = ctx.r10.s64 + 2160;
	// lvx128 v0,r0,r11
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// stvx128 v0,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83151204"))) PPC_WEAK_FUNC(sub_83151204);
PPC_FUNC_IMPL(__imp__sub_83151204) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83151208"))) PPC_WEAK_FUNC(sub_83151208);
PPC_FUNC_IMPL(__imp__sub_83151208) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	PPCVRegister vTemp{};
	// vspltisw v0,0
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_set1_epi32(int(0x0)));
	// lis r11,-31955
	ctx.r11.s64 = -2094202880;
	// li r10,16
	ctx.r10.s64 = 16;
	// addi r11,r11,2176
	ctx.r11.s64 = ctx.r11.s64 + 2176;
	// li r9,32
	ctx.r9.s64 = 32;
	// vupkd3d128 v11,v0,4
	temp.f32 = 3.0f;
	temp.s32 += ctx.v0.s16[1];
	vTemp.f32[3] = temp.f32;
	temp.f32 = 3.0f;
	temp.s32 += ctx.v0.s16[0];
	vTemp.f32[2] = temp.f32;
	vTemp.f32[1] = 0.0f;
	vTemp.f32[0] = 1.0f;
	ctx.v11 = vTemp;
	// li r8,48
	ctx.r8.s64 = 48;
	// vpermwi128 v0,v11,234
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v11.u32), 0x15));
	// vpermwi128 v13,v11,186
	_mm_store_si128((__m128i*)ctx.v13.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v11.u32), 0x45));
	// vpermwi128 v12,v11,174
	_mm_store_si128((__m128i*)ctx.v12.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v11.u32), 0x51));
	// vpermwi128 v11,v11,171
	_mm_store_si128((__m128i*)ctx.v11.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v11.u32), 0x54));
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v13,r11,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v12,r11,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v11,r11,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83151248"))) PPC_WEAK_FUNC(sub_83151248);
PPC_FUNC_IMPL(__imp__sub_83151248) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// lis r10,-31955
	ctx.r10.s64 = -2094202880;
	// addi r4,r11,31956
	ctx.r4.s64 = ctx.r11.s64 + 31956;
	// addi r3,r10,2240
	ctx.r3.s64 = ctx.r10.s64 + 2240;
	// bl 0x822400d8
	ctx.lr = 0x83151268;
	sub_822400D8(ctx, base);
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// addi r3,r11,17888
	ctx.r3.s64 = ctx.r11.s64 + 17888;
	// bl 0x82fa2318
	ctx.lr = 0x83151274;
	sub_82FA2318(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83151284"))) PPC_WEAK_FUNC(sub_83151284);
PPC_FUNC_IMPL(__imp__sub_83151284) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83151288"))) PPC_WEAK_FUNC(sub_83151288);
PPC_FUNC_IMPL(__imp__sub_83151288) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	PPCVRegister vTemp{};
	// vspltisw v0,0
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_set1_epi32(int(0x0)));
	// lis r11,-31955
	ctx.r11.s64 = -2094202880;
	// addi r11,r11,2272
	ctx.r11.s64 = ctx.r11.s64 + 2272;
	// vupkd3d128 v0,v0,4
	temp.f32 = 3.0f;
	temp.s32 += ctx.v0.s16[1];
	vTemp.f32[3] = temp.f32;
	temp.f32 = 3.0f;
	temp.s32 += ctx.v0.s16[0];
	vTemp.f32[2] = temp.f32;
	vTemp.f32[1] = 0.0f;
	vTemp.f32[0] = 1.0f;
	ctx.v0 = vTemp;
	// vpermwi128 v0,v0,171
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0x54));
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831512A4"))) PPC_WEAK_FUNC(sub_831512A4);
PPC_FUNC_IMPL(__imp__sub_831512A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831512A8"))) PPC_WEAK_FUNC(sub_831512A8);
PPC_FUNC_IMPL(__imp__sub_831512A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// lis r10,-31955
	ctx.r10.s64 = -2094202880;
	// addi r11,r11,15824
	ctx.r11.s64 = ctx.r11.s64 + 15824;
	// addi r10,r10,2288
	ctx.r10.s64 = ctx.r10.s64 + 2288;
	// lvx128 v0,r0,r11
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// stvx128 v0,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831512C4"))) PPC_WEAK_FUNC(sub_831512C4);
PPC_FUNC_IMPL(__imp__sub_831512C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831512C8"))) PPC_WEAK_FUNC(sub_831512C8);
PPC_FUNC_IMPL(__imp__sub_831512C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	PPCVRegister vTemp{};
	// vspltisw v0,0
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_set1_epi32(int(0x0)));
	// lis r11,-31955
	ctx.r11.s64 = -2094202880;
	// li r10,16
	ctx.r10.s64 = 16;
	// addi r11,r11,2304
	ctx.r11.s64 = ctx.r11.s64 + 2304;
	// li r9,32
	ctx.r9.s64 = 32;
	// vupkd3d128 v11,v0,4
	temp.f32 = 3.0f;
	temp.s32 += ctx.v0.s16[1];
	vTemp.f32[3] = temp.f32;
	temp.f32 = 3.0f;
	temp.s32 += ctx.v0.s16[0];
	vTemp.f32[2] = temp.f32;
	vTemp.f32[1] = 0.0f;
	vTemp.f32[0] = 1.0f;
	ctx.v11 = vTemp;
	// li r8,48
	ctx.r8.s64 = 48;
	// vpermwi128 v0,v11,234
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v11.u32), 0x15));
	// vpermwi128 v13,v11,186
	_mm_store_si128((__m128i*)ctx.v13.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v11.u32), 0x45));
	// vpermwi128 v12,v11,174
	_mm_store_si128((__m128i*)ctx.v12.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v11.u32), 0x51));
	// vpermwi128 v11,v11,171
	_mm_store_si128((__m128i*)ctx.v11.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v11.u32), 0x54));
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v13,r11,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v12,r11,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v11,r11,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83151308"))) PPC_WEAK_FUNC(sub_83151308);
PPC_FUNC_IMPL(__imp__sub_83151308) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31955
	ctx.r11.s64 = -2094202880;
	// vor128 v0,v77,v77
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_load_si128((__m128i*)ctx.v77.u8));
	// addi r11,r11,2368
	ctx.r11.s64 = ctx.r11.s64 + 2368;
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8315131C"))) PPC_WEAK_FUNC(sub_8315131C);
PPC_FUNC_IMPL(__imp__sub_8315131C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83151320"))) PPC_WEAK_FUNC(sub_83151320);
PPC_FUNC_IMPL(__imp__sub_83151320) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	PPCVRegister vTemp{};
	// vspltisw v0,0
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_set1_epi32(int(0x0)));
	// lis r11,-31955
	ctx.r11.s64 = -2094202880;
	// addi r11,r11,2384
	ctx.r11.s64 = ctx.r11.s64 + 2384;
	// vupkd3d128 v0,v0,4
	temp.f32 = 3.0f;
	temp.s32 += ctx.v0.s16[1];
	vTemp.f32[3] = temp.f32;
	temp.f32 = 3.0f;
	temp.s32 += ctx.v0.s16[0];
	vTemp.f32[2] = temp.f32;
	vTemp.f32[1] = 0.0f;
	vTemp.f32[0] = 1.0f;
	ctx.v0 = vTemp;
	// vpermwi128 v0,v0,171
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0x54));
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8315133C"))) PPC_WEAK_FUNC(sub_8315133C);
PPC_FUNC_IMPL(__imp__sub_8315133C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83151340"))) PPC_WEAK_FUNC(sub_83151340);
PPC_FUNC_IMPL(__imp__sub_83151340) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// lis r10,-31955
	ctx.r10.s64 = -2094202880;
	// addi r11,r11,15824
	ctx.r11.s64 = ctx.r11.s64 + 15824;
	// addi r10,r10,2400
	ctx.r10.s64 = ctx.r10.s64 + 2400;
	// lvx128 v0,r0,r11
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// stvx128 v0,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8315135C"))) PPC_WEAK_FUNC(sub_8315135C);
PPC_FUNC_IMPL(__imp__sub_8315135C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83151360"))) PPC_WEAK_FUNC(sub_83151360);
PPC_FUNC_IMPL(__imp__sub_83151360) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	PPCVRegister vTemp{};
	// vspltisw v0,0
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_set1_epi32(int(0x0)));
	// lis r11,-31955
	ctx.r11.s64 = -2094202880;
	// li r10,16
	ctx.r10.s64 = 16;
	// addi r11,r11,2416
	ctx.r11.s64 = ctx.r11.s64 + 2416;
	// li r9,32
	ctx.r9.s64 = 32;
	// vupkd3d128 v11,v0,4
	temp.f32 = 3.0f;
	temp.s32 += ctx.v0.s16[1];
	vTemp.f32[3] = temp.f32;
	temp.f32 = 3.0f;
	temp.s32 += ctx.v0.s16[0];
	vTemp.f32[2] = temp.f32;
	vTemp.f32[1] = 0.0f;
	vTemp.f32[0] = 1.0f;
	ctx.v11 = vTemp;
	// li r8,48
	ctx.r8.s64 = 48;
	// vpermwi128 v0,v11,234
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v11.u32), 0x15));
	// vpermwi128 v13,v11,186
	_mm_store_si128((__m128i*)ctx.v13.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v11.u32), 0x45));
	// vpermwi128 v12,v11,174
	_mm_store_si128((__m128i*)ctx.v12.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v11.u32), 0x51));
	// vpermwi128 v11,v11,171
	_mm_store_si128((__m128i*)ctx.v11.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v11.u32), 0x54));
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v13,r11,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v12,r11,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v11,r11,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831513A0"))) PPC_WEAK_FUNC(sub_831513A0);
PPC_FUNC_IMPL(__imp__sub_831513A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// lis r10,-31955
	ctx.r10.s64 = -2094202880;
	// addi r4,r11,31956
	ctx.r4.s64 = ctx.r11.s64 + 31956;
	// addi r3,r10,2480
	ctx.r3.s64 = ctx.r10.s64 + 2480;
	// bl 0x822400d8
	ctx.lr = 0x831513C0;
	sub_822400D8(ctx, base);
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// addi r3,r11,17912
	ctx.r3.s64 = ctx.r11.s64 + 17912;
	// bl 0x82fa2318
	ctx.lr = 0x831513CC;
	sub_82FA2318(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831513DC"))) PPC_WEAK_FUNC(sub_831513DC);
PPC_FUNC_IMPL(__imp__sub_831513DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831513E0"))) PPC_WEAK_FUNC(sub_831513E0);
PPC_FUNC_IMPL(__imp__sub_831513E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// lis r10,-31955
	ctx.r10.s64 = -2094202880;
	// addi r4,r11,31956
	ctx.r4.s64 = ctx.r11.s64 + 31956;
	// addi r3,r10,2508
	ctx.r3.s64 = ctx.r10.s64 + 2508;
	// bl 0x822400d8
	ctx.lr = 0x83151400;
	sub_822400D8(ctx, base);
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// addi r3,r11,17936
	ctx.r3.s64 = ctx.r11.s64 + 17936;
	// bl 0x82fa2318
	ctx.lr = 0x8315140C;
	sub_82FA2318(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8315141C"))) PPC_WEAK_FUNC(sub_8315141C);
PPC_FUNC_IMPL(__imp__sub_8315141C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83151420"))) PPC_WEAK_FUNC(sub_83151420);
PPC_FUNC_IMPL(__imp__sub_83151420) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	PPCVRegister vTemp{};
	// vspltisw v0,0
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_set1_epi32(int(0x0)));
	// lis r11,-31955
	ctx.r11.s64 = -2094202880;
	// addi r11,r11,2544
	ctx.r11.s64 = ctx.r11.s64 + 2544;
	// vupkd3d128 v0,v0,4
	temp.f32 = 3.0f;
	temp.s32 += ctx.v0.s16[1];
	vTemp.f32[3] = temp.f32;
	temp.f32 = 3.0f;
	temp.s32 += ctx.v0.s16[0];
	vTemp.f32[2] = temp.f32;
	vTemp.f32[1] = 0.0f;
	vTemp.f32[0] = 1.0f;
	ctx.v0 = vTemp;
	// vpermwi128 v0,v0,171
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0x54));
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8315143C"))) PPC_WEAK_FUNC(sub_8315143C);
PPC_FUNC_IMPL(__imp__sub_8315143C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83151440"))) PPC_WEAK_FUNC(sub_83151440);
PPC_FUNC_IMPL(__imp__sub_83151440) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// lis r10,-31955
	ctx.r10.s64 = -2094202880;
	// addi r11,r11,15824
	ctx.r11.s64 = ctx.r11.s64 + 15824;
	// addi r10,r10,2560
	ctx.r10.s64 = ctx.r10.s64 + 2560;
	// lvx128 v0,r0,r11
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// stvx128 v0,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8315145C"))) PPC_WEAK_FUNC(sub_8315145C);
PPC_FUNC_IMPL(__imp__sub_8315145C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83151460"))) PPC_WEAK_FUNC(sub_83151460);
PPC_FUNC_IMPL(__imp__sub_83151460) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	PPCVRegister vTemp{};
	// vspltisw v0,0
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_set1_epi32(int(0x0)));
	// lis r11,-31955
	ctx.r11.s64 = -2094202880;
	// li r10,16
	ctx.r10.s64 = 16;
	// addi r11,r11,2576
	ctx.r11.s64 = ctx.r11.s64 + 2576;
	// li r9,32
	ctx.r9.s64 = 32;
	// vupkd3d128 v11,v0,4
	temp.f32 = 3.0f;
	temp.s32 += ctx.v0.s16[1];
	vTemp.f32[3] = temp.f32;
	temp.f32 = 3.0f;
	temp.s32 += ctx.v0.s16[0];
	vTemp.f32[2] = temp.f32;
	vTemp.f32[1] = 0.0f;
	vTemp.f32[0] = 1.0f;
	ctx.v11 = vTemp;
	// li r8,48
	ctx.r8.s64 = 48;
	// vpermwi128 v0,v11,234
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v11.u32), 0x15));
	// vpermwi128 v13,v11,186
	_mm_store_si128((__m128i*)ctx.v13.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v11.u32), 0x45));
	// vpermwi128 v12,v11,174
	_mm_store_si128((__m128i*)ctx.v12.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v11.u32), 0x51));
	// vpermwi128 v11,v11,171
	_mm_store_si128((__m128i*)ctx.v11.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v11.u32), 0x54));
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v13,r11,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v12,r11,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v11,r11,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831514A0"))) PPC_WEAK_FUNC(sub_831514A0);
PPC_FUNC_IMPL(__imp__sub_831514A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// lis r10,-31955
	ctx.r10.s64 = -2094202880;
	// addi r4,r11,31956
	ctx.r4.s64 = ctx.r11.s64 + 31956;
	// addi r3,r10,2640
	ctx.r3.s64 = ctx.r10.s64 + 2640;
	// bl 0x822400d8
	ctx.lr = 0x831514C0;
	sub_822400D8(ctx, base);
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// addi r3,r11,17960
	ctx.r3.s64 = ctx.r11.s64 + 17960;
	// bl 0x82fa2318
	ctx.lr = 0x831514CC;
	sub_82FA2318(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831514DC"))) PPC_WEAK_FUNC(sub_831514DC);
PPC_FUNC_IMPL(__imp__sub_831514DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831514E0"))) PPC_WEAK_FUNC(sub_831514E0);
PPC_FUNC_IMPL(__imp__sub_831514E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// lis r10,-31955
	ctx.r10.s64 = -2094202880;
	// addi r4,r11,31956
	ctx.r4.s64 = ctx.r11.s64 + 31956;
	// addi r3,r10,2668
	ctx.r3.s64 = ctx.r10.s64 + 2668;
	// bl 0x822400d8
	ctx.lr = 0x83151500;
	sub_822400D8(ctx, base);
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// addi r3,r11,17984
	ctx.r3.s64 = ctx.r11.s64 + 17984;
	// bl 0x82fa2318
	ctx.lr = 0x8315150C;
	sub_82FA2318(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8315151C"))) PPC_WEAK_FUNC(sub_8315151C);
PPC_FUNC_IMPL(__imp__sub_8315151C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83151520"))) PPC_WEAK_FUNC(sub_83151520);
PPC_FUNC_IMPL(__imp__sub_83151520) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	PPCVRegister vTemp{};
	// vspltisw v0,0
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_set1_epi32(int(0x0)));
	// lis r11,-31955
	ctx.r11.s64 = -2094202880;
	// addi r11,r11,2704
	ctx.r11.s64 = ctx.r11.s64 + 2704;
	// vupkd3d128 v0,v0,4
	temp.f32 = 3.0f;
	temp.s32 += ctx.v0.s16[1];
	vTemp.f32[3] = temp.f32;
	temp.f32 = 3.0f;
	temp.s32 += ctx.v0.s16[0];
	vTemp.f32[2] = temp.f32;
	vTemp.f32[1] = 0.0f;
	vTemp.f32[0] = 1.0f;
	ctx.v0 = vTemp;
	// vpermwi128 v0,v0,171
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0x54));
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8315153C"))) PPC_WEAK_FUNC(sub_8315153C);
PPC_FUNC_IMPL(__imp__sub_8315153C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83151540"))) PPC_WEAK_FUNC(sub_83151540);
PPC_FUNC_IMPL(__imp__sub_83151540) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// lis r10,-31955
	ctx.r10.s64 = -2094202880;
	// addi r11,r11,15824
	ctx.r11.s64 = ctx.r11.s64 + 15824;
	// addi r10,r10,2720
	ctx.r10.s64 = ctx.r10.s64 + 2720;
	// lvx128 v0,r0,r11
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// stvx128 v0,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8315155C"))) PPC_WEAK_FUNC(sub_8315155C);
PPC_FUNC_IMPL(__imp__sub_8315155C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83151560"))) PPC_WEAK_FUNC(sub_83151560);
PPC_FUNC_IMPL(__imp__sub_83151560) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	PPCVRegister vTemp{};
	// vspltisw v0,0
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_set1_epi32(int(0x0)));
	// lis r11,-31955
	ctx.r11.s64 = -2094202880;
	// li r10,16
	ctx.r10.s64 = 16;
	// addi r11,r11,2736
	ctx.r11.s64 = ctx.r11.s64 + 2736;
	// li r9,32
	ctx.r9.s64 = 32;
	// vupkd3d128 v11,v0,4
	temp.f32 = 3.0f;
	temp.s32 += ctx.v0.s16[1];
	vTemp.f32[3] = temp.f32;
	temp.f32 = 3.0f;
	temp.s32 += ctx.v0.s16[0];
	vTemp.f32[2] = temp.f32;
	vTemp.f32[1] = 0.0f;
	vTemp.f32[0] = 1.0f;
	ctx.v11 = vTemp;
	// li r8,48
	ctx.r8.s64 = 48;
	// vpermwi128 v0,v11,234
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v11.u32), 0x15));
	// vpermwi128 v13,v11,186
	_mm_store_si128((__m128i*)ctx.v13.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v11.u32), 0x45));
	// vpermwi128 v12,v11,174
	_mm_store_si128((__m128i*)ctx.v12.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v11.u32), 0x51));
	// vpermwi128 v11,v11,171
	_mm_store_si128((__m128i*)ctx.v11.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v11.u32), 0x54));
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v13,r11,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v12,r11,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v11,r11,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831515A0"))) PPC_WEAK_FUNC(sub_831515A0);
PPC_FUNC_IMPL(__imp__sub_831515A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// lis r10,-31955
	ctx.r10.s64 = -2094202880;
	// addi r4,r11,31956
	ctx.r4.s64 = ctx.r11.s64 + 31956;
	// addi r3,r10,2800
	ctx.r3.s64 = ctx.r10.s64 + 2800;
	// bl 0x822400d8
	ctx.lr = 0x831515C0;
	sub_822400D8(ctx, base);
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// addi r3,r11,18008
	ctx.r3.s64 = ctx.r11.s64 + 18008;
	// bl 0x82fa2318
	ctx.lr = 0x831515CC;
	sub_82FA2318(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831515DC"))) PPC_WEAK_FUNC(sub_831515DC);
PPC_FUNC_IMPL(__imp__sub_831515DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831515E0"))) PPC_WEAK_FUNC(sub_831515E0);
PPC_FUNC_IMPL(__imp__sub_831515E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	PPCVRegister vTemp{};
	// vspltisw v0,0
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_set1_epi32(int(0x0)));
	// lis r11,-31955
	ctx.r11.s64 = -2094202880;
	// addi r11,r11,2832
	ctx.r11.s64 = ctx.r11.s64 + 2832;
	// vupkd3d128 v0,v0,4
	temp.f32 = 3.0f;
	temp.s32 += ctx.v0.s16[1];
	vTemp.f32[3] = temp.f32;
	temp.f32 = 3.0f;
	temp.s32 += ctx.v0.s16[0];
	vTemp.f32[2] = temp.f32;
	vTemp.f32[1] = 0.0f;
	vTemp.f32[0] = 1.0f;
	ctx.v0 = vTemp;
	// vpermwi128 v0,v0,171
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0x54));
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831515FC"))) PPC_WEAK_FUNC(sub_831515FC);
PPC_FUNC_IMPL(__imp__sub_831515FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83151600"))) PPC_WEAK_FUNC(sub_83151600);
PPC_FUNC_IMPL(__imp__sub_83151600) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// lis r10,-31955
	ctx.r10.s64 = -2094202880;
	// addi r11,r11,15824
	ctx.r11.s64 = ctx.r11.s64 + 15824;
	// addi r10,r10,2848
	ctx.r10.s64 = ctx.r10.s64 + 2848;
	// lvx128 v0,r0,r11
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// stvx128 v0,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8315161C"))) PPC_WEAK_FUNC(sub_8315161C);
PPC_FUNC_IMPL(__imp__sub_8315161C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83151620"))) PPC_WEAK_FUNC(sub_83151620);
PPC_FUNC_IMPL(__imp__sub_83151620) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	PPCVRegister vTemp{};
	// vspltisw v0,0
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_set1_epi32(int(0x0)));
	// lis r11,-31955
	ctx.r11.s64 = -2094202880;
	// li r10,16
	ctx.r10.s64 = 16;
	// addi r11,r11,2864
	ctx.r11.s64 = ctx.r11.s64 + 2864;
	// li r9,32
	ctx.r9.s64 = 32;
	// vupkd3d128 v11,v0,4
	temp.f32 = 3.0f;
	temp.s32 += ctx.v0.s16[1];
	vTemp.f32[3] = temp.f32;
	temp.f32 = 3.0f;
	temp.s32 += ctx.v0.s16[0];
	vTemp.f32[2] = temp.f32;
	vTemp.f32[1] = 0.0f;
	vTemp.f32[0] = 1.0f;
	ctx.v11 = vTemp;
	// li r8,48
	ctx.r8.s64 = 48;
	// vpermwi128 v0,v11,234
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v11.u32), 0x15));
	// vpermwi128 v13,v11,186
	_mm_store_si128((__m128i*)ctx.v13.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v11.u32), 0x45));
	// vpermwi128 v12,v11,174
	_mm_store_si128((__m128i*)ctx.v12.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v11.u32), 0x51));
	// vpermwi128 v11,v11,171
	_mm_store_si128((__m128i*)ctx.v11.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v11.u32), 0x54));
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v13,r11,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v12,r11,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v11,r11,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83151660"))) PPC_WEAK_FUNC(sub_83151660);
PPC_FUNC_IMPL(__imp__sub_83151660) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// lis r10,-31955
	ctx.r10.s64 = -2094202880;
	// addi r4,r11,31956
	ctx.r4.s64 = ctx.r11.s64 + 31956;
	// addi r3,r10,2928
	ctx.r3.s64 = ctx.r10.s64 + 2928;
	// bl 0x822400d8
	ctx.lr = 0x83151680;
	sub_822400D8(ctx, base);
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// addi r3,r11,18032
	ctx.r3.s64 = ctx.r11.s64 + 18032;
	// bl 0x82fa2318
	ctx.lr = 0x8315168C;
	sub_82FA2318(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8315169C"))) PPC_WEAK_FUNC(sub_8315169C);
PPC_FUNC_IMPL(__imp__sub_8315169C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831516A0"))) PPC_WEAK_FUNC(sub_831516A0);
PPC_FUNC_IMPL(__imp__sub_831516A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	PPCVRegister vTemp{};
	// vspltisw v0,0
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_set1_epi32(int(0x0)));
	// lis r11,-31955
	ctx.r11.s64 = -2094202880;
	// addi r11,r11,2960
	ctx.r11.s64 = ctx.r11.s64 + 2960;
	// vupkd3d128 v0,v0,4
	temp.f32 = 3.0f;
	temp.s32 += ctx.v0.s16[1];
	vTemp.f32[3] = temp.f32;
	temp.f32 = 3.0f;
	temp.s32 += ctx.v0.s16[0];
	vTemp.f32[2] = temp.f32;
	vTemp.f32[1] = 0.0f;
	vTemp.f32[0] = 1.0f;
	ctx.v0 = vTemp;
	// vpermwi128 v0,v0,171
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0x54));
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831516BC"))) PPC_WEAK_FUNC(sub_831516BC);
PPC_FUNC_IMPL(__imp__sub_831516BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831516C0"))) PPC_WEAK_FUNC(sub_831516C0);
PPC_FUNC_IMPL(__imp__sub_831516C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// lis r10,-31955
	ctx.r10.s64 = -2094202880;
	// addi r11,r11,15824
	ctx.r11.s64 = ctx.r11.s64 + 15824;
	// addi r10,r10,2976
	ctx.r10.s64 = ctx.r10.s64 + 2976;
	// lvx128 v0,r0,r11
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// stvx128 v0,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831516DC"))) PPC_WEAK_FUNC(sub_831516DC);
PPC_FUNC_IMPL(__imp__sub_831516DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831516E0"))) PPC_WEAK_FUNC(sub_831516E0);
PPC_FUNC_IMPL(__imp__sub_831516E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	PPCVRegister vTemp{};
	// vspltisw v0,0
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_set1_epi32(int(0x0)));
	// lis r11,-31955
	ctx.r11.s64 = -2094202880;
	// li r10,16
	ctx.r10.s64 = 16;
	// addi r11,r11,2992
	ctx.r11.s64 = ctx.r11.s64 + 2992;
	// li r9,32
	ctx.r9.s64 = 32;
	// vupkd3d128 v11,v0,4
	temp.f32 = 3.0f;
	temp.s32 += ctx.v0.s16[1];
	vTemp.f32[3] = temp.f32;
	temp.f32 = 3.0f;
	temp.s32 += ctx.v0.s16[0];
	vTemp.f32[2] = temp.f32;
	vTemp.f32[1] = 0.0f;
	vTemp.f32[0] = 1.0f;
	ctx.v11 = vTemp;
	// li r8,48
	ctx.r8.s64 = 48;
	// vpermwi128 v0,v11,234
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v11.u32), 0x15));
	// vpermwi128 v13,v11,186
	_mm_store_si128((__m128i*)ctx.v13.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v11.u32), 0x45));
	// vpermwi128 v12,v11,174
	_mm_store_si128((__m128i*)ctx.v12.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v11.u32), 0x51));
	// vpermwi128 v11,v11,171
	_mm_store_si128((__m128i*)ctx.v11.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v11.u32), 0x54));
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v13,r11,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v12,r11,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v11,r11,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83151720"))) PPC_WEAK_FUNC(sub_83151720);
PPC_FUNC_IMPL(__imp__sub_83151720) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// lis r10,-31955
	ctx.r10.s64 = -2094202880;
	// addi r4,r11,31956
	ctx.r4.s64 = ctx.r11.s64 + 31956;
	// addi r3,r10,3056
	ctx.r3.s64 = ctx.r10.s64 + 3056;
	// bl 0x822400d8
	ctx.lr = 0x83151740;
	sub_822400D8(ctx, base);
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// addi r3,r11,18056
	ctx.r3.s64 = ctx.r11.s64 + 18056;
	// bl 0x82fa2318
	ctx.lr = 0x8315174C;
	sub_82FA2318(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8315175C"))) PPC_WEAK_FUNC(sub_8315175C);
PPC_FUNC_IMPL(__imp__sub_8315175C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83151760"))) PPC_WEAK_FUNC(sub_83151760);
PPC_FUNC_IMPL(__imp__sub_83151760) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// lis r10,-31955
	ctx.r10.s64 = -2094202880;
	// addi r4,r11,31956
	ctx.r4.s64 = ctx.r11.s64 + 31956;
	// addi r3,r10,3084
	ctx.r3.s64 = ctx.r10.s64 + 3084;
	// bl 0x822400d8
	ctx.lr = 0x83151780;
	sub_822400D8(ctx, base);
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// addi r3,r11,18080
	ctx.r3.s64 = ctx.r11.s64 + 18080;
	// bl 0x82fa2318
	ctx.lr = 0x8315178C;
	sub_82FA2318(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8315179C"))) PPC_WEAK_FUNC(sub_8315179C);
PPC_FUNC_IMPL(__imp__sub_8315179C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831517A0"))) PPC_WEAK_FUNC(sub_831517A0);
PPC_FUNC_IMPL(__imp__sub_831517A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	PPCVRegister vTemp{};
	// vspltisw v0,0
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_set1_epi32(int(0x0)));
	// lis r11,-31955
	ctx.r11.s64 = -2094202880;
	// addi r11,r11,3120
	ctx.r11.s64 = ctx.r11.s64 + 3120;
	// vupkd3d128 v0,v0,4
	temp.f32 = 3.0f;
	temp.s32 += ctx.v0.s16[1];
	vTemp.f32[3] = temp.f32;
	temp.f32 = 3.0f;
	temp.s32 += ctx.v0.s16[0];
	vTemp.f32[2] = temp.f32;
	vTemp.f32[1] = 0.0f;
	vTemp.f32[0] = 1.0f;
	ctx.v0 = vTemp;
	// vpermwi128 v0,v0,171
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0x54));
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831517BC"))) PPC_WEAK_FUNC(sub_831517BC);
PPC_FUNC_IMPL(__imp__sub_831517BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831517C0"))) PPC_WEAK_FUNC(sub_831517C0);
PPC_FUNC_IMPL(__imp__sub_831517C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// lis r10,-31955
	ctx.r10.s64 = -2094202880;
	// addi r11,r11,15824
	ctx.r11.s64 = ctx.r11.s64 + 15824;
	// addi r10,r10,3136
	ctx.r10.s64 = ctx.r10.s64 + 3136;
	// lvx128 v0,r0,r11
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// stvx128 v0,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831517DC"))) PPC_WEAK_FUNC(sub_831517DC);
PPC_FUNC_IMPL(__imp__sub_831517DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831517E0"))) PPC_WEAK_FUNC(sub_831517E0);
PPC_FUNC_IMPL(__imp__sub_831517E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	PPCVRegister vTemp{};
	// vspltisw v0,0
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_set1_epi32(int(0x0)));
	// lis r11,-31955
	ctx.r11.s64 = -2094202880;
	// li r10,16
	ctx.r10.s64 = 16;
	// addi r11,r11,3152
	ctx.r11.s64 = ctx.r11.s64 + 3152;
	// li r9,32
	ctx.r9.s64 = 32;
	// vupkd3d128 v11,v0,4
	temp.f32 = 3.0f;
	temp.s32 += ctx.v0.s16[1];
	vTemp.f32[3] = temp.f32;
	temp.f32 = 3.0f;
	temp.s32 += ctx.v0.s16[0];
	vTemp.f32[2] = temp.f32;
	vTemp.f32[1] = 0.0f;
	vTemp.f32[0] = 1.0f;
	ctx.v11 = vTemp;
	// li r8,48
	ctx.r8.s64 = 48;
	// vpermwi128 v0,v11,234
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v11.u32), 0x15));
	// vpermwi128 v13,v11,186
	_mm_store_si128((__m128i*)ctx.v13.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v11.u32), 0x45));
	// vpermwi128 v12,v11,174
	_mm_store_si128((__m128i*)ctx.v12.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v11.u32), 0x51));
	// vpermwi128 v11,v11,171
	_mm_store_si128((__m128i*)ctx.v11.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v11.u32), 0x54));
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v13,r11,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v12,r11,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v11,r11,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83151820"))) PPC_WEAK_FUNC(sub_83151820);
PPC_FUNC_IMPL(__imp__sub_83151820) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa766c
	ctx.lr = 0x83151828;
	__savegprlr_25(ctx, base);
	// stfd f29,-88(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -88, ctx.f29.u64);
	// stfd f30,-80(r1)
	PPC_STORE_U64(ctx.r1.u32 + -80, ctx.f30.u64);
	// stfd f31,-72(r1)
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.f31.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// lis r11,-31968
	ctx.r11.s64 = -2095054848;
	// addi r9,r10,-19100
	ctx.r9.s64 = ctx.r10.s64 + -19100;
	// lis r8,-32228
	ctx.r8.s64 = -2112094208;
	// lis r28,-32254
	ctx.r28.s64 = -2113798144;
	// addi r31,r11,22584
	ctx.r31.s64 = ctx.r11.s64 + 22584;
	// lwz r10,-19100(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + -19100);
	// addi r7,r8,-19116
	ctx.r7.s64 = ctx.r8.s64 + -19116;
	// lwz r6,4(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r30,8(r9)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// lis r5,-32231
	ctx.r5.s64 = -2112290816;
	// lwz r9,12(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// lfs f31,-2340(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + -2340);
	ctx.f31.f64 = double(temp.f32);
	// std r11,104(r31)
	PPC_STORE_U64(ctx.r31.u32 + 104, ctx.r11.u64);
	// addi r27,r5,27984
	ctx.r27.s64 = ctx.r5.s64 + 27984;
	// lwz r26,4(r7)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// lis r29,-32227
	ctx.r29.s64 = -2112028672;
	// lwz r25,8(r7)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// li r5,17
	ctx.r5.s64 = 17;
	// lhz r28,12(r7)
	ctx.r28.u64 = PPC_LOAD_U16(ctx.r7.u32 + 12);
	// li r4,0
	ctx.r4.s64 = 0;
	// std r11,112(r31)
	PPC_STORE_U64(ctx.r31.u32 + 112, ctx.r11.u64);
	// lwz r8,-19116(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + -19116);
	// addi r3,r31,199
	ctx.r3.s64 = ctx.r31.s64 + 199;
	// lbz r7,14(r7)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r7.u32 + 14);
	// lfs f0,2564(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 2564);
	ctx.f0.f64 = double(temp.f32);
	// stw r10,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r10.u32);
	// lfs f30,-24756(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + -24756);
	ctx.f30.f64 = double(temp.f32);
	// stw r6,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r6.u32);
	// addi r10,r31,120
	ctx.r10.s64 = ctx.r31.s64 + 120;
	// stw r30,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r30.u32);
	// stw r9,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r9.u32);
	// std r11,136(r31)
	PPC_STORE_U64(ctx.r31.u32 + 136, ctx.r11.u64);
	// std r11,144(r31)
	PPC_STORE_U64(ctx.r31.u32 + 144, ctx.r11.u64);
	// addi r11,r31,104
	ctx.r11.s64 = ctx.r31.s64 + 104;
	// stfs f30,152(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 152, temp.u32);
	// stfs f31,156(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 156, temp.u32);
	// addi r11,r31,136
	ctx.r11.s64 = ctx.r31.s64 + 136;
	// stfs f31,160(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 160, temp.u32);
	// stw r8,184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 184, ctx.r8.u32);
	// stfs f0,164(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 164, temp.u32);
	// stw r26,188(r31)
	PPC_STORE_U32(ctx.r31.u32 + 188, ctx.r26.u32);
	// stfs f31,168(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 168, temp.u32);
	// stw r25,192(r31)
	PPC_STORE_U32(ctx.r31.u32 + 192, ctx.r25.u32);
	// stfs f31,172(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 172, temp.u32);
	// sth r28,196(r31)
	PPC_STORE_U16(ctx.r31.u32 + 196, ctx.r28.u16);
	// stfs f31,176(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 176, temp.u32);
	// stb r7,198(r31)
	PPC_STORE_U8(ctx.r31.u32 + 198, ctx.r7.u8);
	// stfs f31,180(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 180, temp.u32);
	// bl 0x82fa7cf0
	ctx.lr = 0x83151904;
	sub_82FA7CF0(ctx, base);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// li r5,17
	ctx.r5.s64 = 17;
	// addi r10,r11,-19132
	ctx.r10.s64 = ctx.r11.s64 + -19132;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,231
	ctx.r3.s64 = ctx.r31.s64 + 231;
	// lwz r11,-19132(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -19132);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r8,8(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lhz r7,12(r10)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r10.u32 + 12);
	// lbz r10,14(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 14);
	// stw r11,216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 216, ctx.r11.u32);
	// stw r9,220(r31)
	PPC_STORE_U32(ctx.r31.u32 + 220, ctx.r9.u32);
	// stw r8,224(r31)
	PPC_STORE_U32(ctx.r31.u32 + 224, ctx.r8.u32);
	// sth r7,228(r31)
	PPC_STORE_U16(ctx.r31.u32 + 228, ctx.r7.u16);
	// stb r10,230(r31)
	PPC_STORE_U8(ctx.r31.u32 + 230, ctx.r10.u8);
	// bl 0x82fa7cf0
	ctx.lr = 0x83151944;
	sub_82FA7CF0(ctx, base);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// lis r30,-32231
	ctx.r30.s64 = -2112290816;
	// addi r10,r11,-19148
	ctx.r10.s64 = ctx.r11.s64 + -19148;
	// addi r8,r30,-2152
	ctx.r8.s64 = ctx.r30.s64 + -2152;
	// lis r9,-31967
	ctx.r9.s64 = -2094989312;
	// lwz r11,-19148(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -19148);
	// li r5,17
	ctx.r5.s64 = 17;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r7,4(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// addi r3,r31,295
	ctx.r3.s64 = ctx.r31.s64 + 295;
	// lwz r6,8(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lfs f0,10224(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 10224);
	ctx.f0.f64 = double(temp.f32);
	// lhz r8,12(r10)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r10.u32 + 12);
	// lfs f29,-12544(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -12544);
	ctx.f29.f64 = double(temp.f32);
	// lbz r10,14(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 14);
	// stfs f29,248(r31)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 248, temp.u32);
	// stfs f31,252(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 252, temp.u32);
	// stw r11,280(r31)
	PPC_STORE_U32(ctx.r31.u32 + 280, ctx.r11.u32);
	// stfs f31,256(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 256, temp.u32);
	// stw r7,284(r31)
	PPC_STORE_U32(ctx.r31.u32 + 284, ctx.r7.u32);
	// stfs f0,260(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 260, temp.u32);
	// stw r6,288(r31)
	PPC_STORE_U32(ctx.r31.u32 + 288, ctx.r6.u32);
	// stfs f31,264(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 264, temp.u32);
	// sth r8,292(r31)
	PPC_STORE_U16(ctx.r31.u32 + 292, ctx.r8.u16);
	// stfs f31,268(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 268, temp.u32);
	// stb r10,294(r31)
	PPC_STORE_U8(ctx.r31.u32 + 294, ctx.r10.u8);
	// stfs f31,272(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 272, temp.u32);
	// stfs f31,276(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 276, temp.u32);
	// bl 0x82fa7cf0
	ctx.lr = 0x831519B8;
	sub_82FA7CF0(ctx, base);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// li r5,17
	ctx.r5.s64 = 17;
	// addi r10,r11,-19164
	ctx.r10.s64 = ctx.r11.s64 + -19164;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,327
	ctx.r3.s64 = ctx.r31.s64 + 327;
	// lwz r11,-19164(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -19164);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r8,8(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lhz r7,12(r10)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r10.u32 + 12);
	// lbz r10,14(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 14);
	// stw r11,312(r31)
	PPC_STORE_U32(ctx.r31.u32 + 312, ctx.r11.u32);
	// stw r9,316(r31)
	PPC_STORE_U32(ctx.r31.u32 + 316, ctx.r9.u32);
	// stw r8,320(r31)
	PPC_STORE_U32(ctx.r31.u32 + 320, ctx.r8.u32);
	// sth r7,324(r31)
	PPC_STORE_U16(ctx.r31.u32 + 324, ctx.r7.u16);
	// stb r10,326(r31)
	PPC_STORE_U8(ctx.r31.u32 + 326, ctx.r10.u8);
	// bl 0x82fa7cf0
	ctx.lr = 0x831519F8;
	sub_82FA7CF0(ctx, base);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// lfs f0,2568(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 2568);
	ctx.f0.f64 = double(temp.f32);
	// li r5,17
	ctx.r5.s64 = 17;
	// stfs f29,344(r31)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 344, temp.u32);
	// addi r10,r11,-19180
	ctx.r10.s64 = ctx.r11.s64 + -19180;
	// stfs f31,348(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 348, temp.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stfs f31,352(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 352, temp.u32);
	// addi r3,r31,391
	ctx.r3.s64 = ctx.r31.s64 + 391;
	// stfs f0,356(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 356, temp.u32);
	// lwz r11,-19180(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -19180);
	// stfs f31,360(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 360, temp.u32);
	// stfs f31,364(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 364, temp.u32);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stfs f31,368(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 368, temp.u32);
	// lwz r8,8(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// stfs f31,372(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 372, temp.u32);
	// lhz r7,12(r10)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r10.u32 + 12);
	// lbz r10,14(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 14);
	// stw r11,376(r31)
	PPC_STORE_U32(ctx.r31.u32 + 376, ctx.r11.u32);
	// stw r9,380(r31)
	PPC_STORE_U32(ctx.r31.u32 + 380, ctx.r9.u32);
	// stw r8,384(r31)
	PPC_STORE_U32(ctx.r31.u32 + 384, ctx.r8.u32);
	// sth r7,388(r31)
	PPC_STORE_U16(ctx.r31.u32 + 388, ctx.r7.u16);
	// stb r10,390(r31)
	PPC_STORE_U8(ctx.r31.u32 + 390, ctx.r10.u8);
	// bl 0x82fa7cf0
	ctx.lr = 0x83151A5C;
	sub_82FA7CF0(ctx, base);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// li r5,17
	ctx.r5.s64 = 17;
	// addi r10,r11,-19196
	ctx.r10.s64 = ctx.r11.s64 + -19196;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,423
	ctx.r3.s64 = ctx.r31.s64 + 423;
	// lwz r11,-19196(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -19196);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r8,8(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lhz r7,12(r10)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r10.u32 + 12);
	// lbz r10,14(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 14);
	// stw r11,408(r31)
	PPC_STORE_U32(ctx.r31.u32 + 408, ctx.r11.u32);
	// stw r9,412(r31)
	PPC_STORE_U32(ctx.r31.u32 + 412, ctx.r9.u32);
	// stw r8,416(r31)
	PPC_STORE_U32(ctx.r31.u32 + 416, ctx.r8.u32);
	// sth r7,420(r31)
	PPC_STORE_U16(ctx.r31.u32 + 420, ctx.r7.u16);
	// stb r10,422(r31)
	PPC_STORE_U8(ctx.r31.u32 + 422, ctx.r10.u8);
	// bl 0x82fa7cf0
	ctx.lr = 0x83151A9C;
	sub_82FA7CF0(ctx, base);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// lfs f0,2572(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 2572);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,-2152(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + -2152);
	ctx.f13.f64 = double(temp.f32);
	// li r5,17
	ctx.r5.s64 = 17;
	// addi r10,r11,-19212
	ctx.r10.s64 = ctx.r11.s64 + -19212;
	// stfs f30,440(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 440, temp.u32);
	// lwz r11,-19212(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -19212);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r8,8(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// addi r3,r31,487
	ctx.r3.s64 = ctx.r31.s64 + 487;
	// lhz r7,12(r10)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r10.u32 + 12);
	// stfs f31,444(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 444, temp.u32);
	// lbz r10,14(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 14);
	// stfs f31,448(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 448, temp.u32);
	// stfs f0,452(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 452, temp.u32);
	// stw r11,472(r31)
	PPC_STORE_U32(ctx.r31.u32 + 472, ctx.r11.u32);
	// stfs f31,456(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 456, temp.u32);
	// stw r9,476(r31)
	PPC_STORE_U32(ctx.r31.u32 + 476, ctx.r9.u32);
	// stfs f13,460(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 460, temp.u32);
	// stw r8,480(r31)
	PPC_STORE_U32(ctx.r31.u32 + 480, ctx.r8.u32);
	// stfs f31,464(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 464, temp.u32);
	// sth r7,484(r31)
	PPC_STORE_U16(ctx.r31.u32 + 484, ctx.r7.u16);
	// stfs f31,468(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 468, temp.u32);
	// stb r10,486(r31)
	PPC_STORE_U8(ctx.r31.u32 + 486, ctx.r10.u8);
	// bl 0x82fa7cf0
	ctx.lr = 0x83151B04;
	sub_82FA7CF0(ctx, base);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// li r5,17
	ctx.r5.s64 = 17;
	// addi r10,r11,-19228
	ctx.r10.s64 = ctx.r11.s64 + -19228;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,519
	ctx.r3.s64 = ctx.r31.s64 + 519;
	// lwz r11,-19228(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -19228);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r8,8(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lhz r7,12(r10)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r10.u32 + 12);
	// lbz r10,14(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 14);
	// stw r11,504(r31)
	PPC_STORE_U32(ctx.r31.u32 + 504, ctx.r11.u32);
	// stw r9,508(r31)
	PPC_STORE_U32(ctx.r31.u32 + 508, ctx.r9.u32);
	// stw r8,512(r31)
	PPC_STORE_U32(ctx.r31.u32 + 512, ctx.r8.u32);
	// sth r7,516(r31)
	PPC_STORE_U16(ctx.r31.u32 + 516, ctx.r7.u16);
	// stb r10,518(r31)
	PPC_STORE_U8(ctx.r31.u32 + 518, ctx.r10.u8);
	// bl 0x82fa7cf0
	ctx.lr = 0x83151B44;
	sub_82FA7CF0(ctx, base);
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// lfs f13,564(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 564);
	ctx.f13.f64 = double(temp.f32);
	// stfs f31,540(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 540, temp.u32);
	// stfs f13,544(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 544, temp.u32);
	// stfs f31,552(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 552, temp.u32);
	// stfs f31,556(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 556, temp.u32);
	// lfs f0,-12512(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -12512);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,536(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 536, temp.u32);
	// lfs f0,560(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 560);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,548(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 548, temp.u32);
	// stfs f31,560(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 560, temp.u32);
	// stfs f31,564(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 564, temp.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f29,-88(r1)
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// lfd f30,-80(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// lfd f31,-72(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x82fa76bc
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83151B88"))) PPC_WEAK_FUNC(sub_83151B88);
PPC_FUNC_IMPL(__imp__sub_83151B88) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	PPCVRegister vTemp{};
	// vspltisw v0,0
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_set1_epi32(int(0x0)));
	// lis r11,-31955
	ctx.r11.s64 = -2094202880;
	// addi r11,r11,3216
	ctx.r11.s64 = ctx.r11.s64 + 3216;
	// vupkd3d128 v0,v0,4
	temp.f32 = 3.0f;
	temp.s32 += ctx.v0.s16[1];
	vTemp.f32[3] = temp.f32;
	temp.f32 = 3.0f;
	temp.s32 += ctx.v0.s16[0];
	vTemp.f32[2] = temp.f32;
	vTemp.f32[1] = 0.0f;
	vTemp.f32[0] = 1.0f;
	ctx.v0 = vTemp;
	// vpermwi128 v0,v0,171
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0x54));
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83151BA4"))) PPC_WEAK_FUNC(sub_83151BA4);
PPC_FUNC_IMPL(__imp__sub_83151BA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83151BA8"))) PPC_WEAK_FUNC(sub_83151BA8);
PPC_FUNC_IMPL(__imp__sub_83151BA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// lis r10,-31955
	ctx.r10.s64 = -2094202880;
	// addi r11,r11,15824
	ctx.r11.s64 = ctx.r11.s64 + 15824;
	// addi r10,r10,3232
	ctx.r10.s64 = ctx.r10.s64 + 3232;
	// lvx128 v0,r0,r11
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// stvx128 v0,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83151BC4"))) PPC_WEAK_FUNC(sub_83151BC4);
PPC_FUNC_IMPL(__imp__sub_83151BC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83151BC8"))) PPC_WEAK_FUNC(sub_83151BC8);
PPC_FUNC_IMPL(__imp__sub_83151BC8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	PPCVRegister vTemp{};
	// vspltisw v0,0
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_set1_epi32(int(0x0)));
	// lis r11,-31955
	ctx.r11.s64 = -2094202880;
	// li r10,16
	ctx.r10.s64 = 16;
	// addi r11,r11,3248
	ctx.r11.s64 = ctx.r11.s64 + 3248;
	// li r9,32
	ctx.r9.s64 = 32;
	// vupkd3d128 v11,v0,4
	temp.f32 = 3.0f;
	temp.s32 += ctx.v0.s16[1];
	vTemp.f32[3] = temp.f32;
	temp.f32 = 3.0f;
	temp.s32 += ctx.v0.s16[0];
	vTemp.f32[2] = temp.f32;
	vTemp.f32[1] = 0.0f;
	vTemp.f32[0] = 1.0f;
	ctx.v11 = vTemp;
	// li r8,48
	ctx.r8.s64 = 48;
	// vpermwi128 v0,v11,234
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v11.u32), 0x15));
	// vpermwi128 v13,v11,186
	_mm_store_si128((__m128i*)ctx.v13.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v11.u32), 0x45));
	// vpermwi128 v12,v11,174
	_mm_store_si128((__m128i*)ctx.v12.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v11.u32), 0x51));
	// vpermwi128 v11,v11,171
	_mm_store_si128((__m128i*)ctx.v11.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v11.u32), 0x54));
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v13,r11,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v12,r11,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v11,r11,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83151C08"))) PPC_WEAK_FUNC(sub_83151C08);
PPC_FUNC_IMPL(__imp__sub_83151C08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// lis r10,-31955
	ctx.r10.s64 = -2094202880;
	// addi r4,r11,31956
	ctx.r4.s64 = ctx.r11.s64 + 31956;
	// addi r3,r10,3312
	ctx.r3.s64 = ctx.r10.s64 + 3312;
	// bl 0x822400d8
	ctx.lr = 0x83151C28;
	sub_822400D8(ctx, base);
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// addi r3,r11,18104
	ctx.r3.s64 = ctx.r11.s64 + 18104;
	// bl 0x82fa2318
	ctx.lr = 0x83151C34;
	sub_82FA2318(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83151C44"))) PPC_WEAK_FUNC(sub_83151C44);
PPC_FUNC_IMPL(__imp__sub_83151C44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83151C48"))) PPC_WEAK_FUNC(sub_83151C48);
PPC_FUNC_IMPL(__imp__sub_83151C48) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	PPCVRegister vTemp{};
	// vspltisw v0,0
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_set1_epi32(int(0x0)));
	// lis r11,-31955
	ctx.r11.s64 = -2094202880;
	// addi r11,r11,3344
	ctx.r11.s64 = ctx.r11.s64 + 3344;
	// vupkd3d128 v0,v0,4
	temp.f32 = 3.0f;
	temp.s32 += ctx.v0.s16[1];
	vTemp.f32[3] = temp.f32;
	temp.f32 = 3.0f;
	temp.s32 += ctx.v0.s16[0];
	vTemp.f32[2] = temp.f32;
	vTemp.f32[1] = 0.0f;
	vTemp.f32[0] = 1.0f;
	ctx.v0 = vTemp;
	// vpermwi128 v0,v0,171
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0x54));
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83151C64"))) PPC_WEAK_FUNC(sub_83151C64);
PPC_FUNC_IMPL(__imp__sub_83151C64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83151C68"))) PPC_WEAK_FUNC(sub_83151C68);
PPC_FUNC_IMPL(__imp__sub_83151C68) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// lis r10,-31955
	ctx.r10.s64 = -2094202880;
	// addi r11,r11,15824
	ctx.r11.s64 = ctx.r11.s64 + 15824;
	// addi r10,r10,3360
	ctx.r10.s64 = ctx.r10.s64 + 3360;
	// lvx128 v0,r0,r11
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// stvx128 v0,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83151C84"))) PPC_WEAK_FUNC(sub_83151C84);
PPC_FUNC_IMPL(__imp__sub_83151C84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83151C88"))) PPC_WEAK_FUNC(sub_83151C88);
PPC_FUNC_IMPL(__imp__sub_83151C88) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	PPCVRegister vTemp{};
	// vspltisw v0,0
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_set1_epi32(int(0x0)));
	// lis r11,-31955
	ctx.r11.s64 = -2094202880;
	// li r10,16
	ctx.r10.s64 = 16;
	// addi r11,r11,3376
	ctx.r11.s64 = ctx.r11.s64 + 3376;
	// li r9,32
	ctx.r9.s64 = 32;
	// vupkd3d128 v11,v0,4
	temp.f32 = 3.0f;
	temp.s32 += ctx.v0.s16[1];
	vTemp.f32[3] = temp.f32;
	temp.f32 = 3.0f;
	temp.s32 += ctx.v0.s16[0];
	vTemp.f32[2] = temp.f32;
	vTemp.f32[1] = 0.0f;
	vTemp.f32[0] = 1.0f;
	ctx.v11 = vTemp;
	// li r8,48
	ctx.r8.s64 = 48;
	// vpermwi128 v0,v11,234
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v11.u32), 0x15));
	// vpermwi128 v13,v11,186
	_mm_store_si128((__m128i*)ctx.v13.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v11.u32), 0x45));
	// vpermwi128 v12,v11,174
	_mm_store_si128((__m128i*)ctx.v12.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v11.u32), 0x51));
	// vpermwi128 v11,v11,171
	_mm_store_si128((__m128i*)ctx.v11.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v11.u32), 0x54));
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v13,r11,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v12,r11,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v11,r11,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83151CC8"))) PPC_WEAK_FUNC(sub_83151CC8);
PPC_FUNC_IMPL(__imp__sub_83151CC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// lis r10,-31955
	ctx.r10.s64 = -2094202880;
	// addi r4,r11,31956
	ctx.r4.s64 = ctx.r11.s64 + 31956;
	// addi r3,r10,3440
	ctx.r3.s64 = ctx.r10.s64 + 3440;
	// bl 0x822400d8
	ctx.lr = 0x83151CE8;
	sub_822400D8(ctx, base);
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// addi r3,r11,18128
	ctx.r3.s64 = ctx.r11.s64 + 18128;
	// bl 0x82fa2318
	ctx.lr = 0x83151CF4;
	sub_82FA2318(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83151D04"))) PPC_WEAK_FUNC(sub_83151D04);
PPC_FUNC_IMPL(__imp__sub_83151D04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83151D08"))) PPC_WEAK_FUNC(sub_83151D08);
PPC_FUNC_IMPL(__imp__sub_83151D08) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	PPCVRegister vTemp{};
	// vspltisw v0,0
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_set1_epi32(int(0x0)));
	// lis r11,-31955
	ctx.r11.s64 = -2094202880;
	// addi r11,r11,3472
	ctx.r11.s64 = ctx.r11.s64 + 3472;
	// vupkd3d128 v0,v0,4
	temp.f32 = 3.0f;
	temp.s32 += ctx.v0.s16[1];
	vTemp.f32[3] = temp.f32;
	temp.f32 = 3.0f;
	temp.s32 += ctx.v0.s16[0];
	vTemp.f32[2] = temp.f32;
	vTemp.f32[1] = 0.0f;
	vTemp.f32[0] = 1.0f;
	ctx.v0 = vTemp;
	// vpermwi128 v0,v0,171
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0x54));
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83151D24"))) PPC_WEAK_FUNC(sub_83151D24);
PPC_FUNC_IMPL(__imp__sub_83151D24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83151D28"))) PPC_WEAK_FUNC(sub_83151D28);
PPC_FUNC_IMPL(__imp__sub_83151D28) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// lis r10,-31955
	ctx.r10.s64 = -2094202880;
	// addi r11,r11,15824
	ctx.r11.s64 = ctx.r11.s64 + 15824;
	// addi r10,r10,3488
	ctx.r10.s64 = ctx.r10.s64 + 3488;
	// lvx128 v0,r0,r11
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// stvx128 v0,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83151D44"))) PPC_WEAK_FUNC(sub_83151D44);
PPC_FUNC_IMPL(__imp__sub_83151D44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83151D48"))) PPC_WEAK_FUNC(sub_83151D48);
PPC_FUNC_IMPL(__imp__sub_83151D48) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	PPCVRegister vTemp{};
	// vspltisw v0,0
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_set1_epi32(int(0x0)));
	// lis r11,-31955
	ctx.r11.s64 = -2094202880;
	// li r10,16
	ctx.r10.s64 = 16;
	// addi r11,r11,3504
	ctx.r11.s64 = ctx.r11.s64 + 3504;
	// li r9,32
	ctx.r9.s64 = 32;
	// vupkd3d128 v11,v0,4
	temp.f32 = 3.0f;
	temp.s32 += ctx.v0.s16[1];
	vTemp.f32[3] = temp.f32;
	temp.f32 = 3.0f;
	temp.s32 += ctx.v0.s16[0];
	vTemp.f32[2] = temp.f32;
	vTemp.f32[1] = 0.0f;
	vTemp.f32[0] = 1.0f;
	ctx.v11 = vTemp;
	// li r8,48
	ctx.r8.s64 = 48;
	// vpermwi128 v0,v11,234
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v11.u32), 0x15));
	// vpermwi128 v13,v11,186
	_mm_store_si128((__m128i*)ctx.v13.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v11.u32), 0x45));
	// vpermwi128 v12,v11,174
	_mm_store_si128((__m128i*)ctx.v12.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v11.u32), 0x51));
	// vpermwi128 v11,v11,171
	_mm_store_si128((__m128i*)ctx.v11.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v11.u32), 0x54));
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v13,r11,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v12,r11,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v11,r11,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83151D88"))) PPC_WEAK_FUNC(sub_83151D88);
PPC_FUNC_IMPL(__imp__sub_83151D88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// lis r10,-31955
	ctx.r10.s64 = -2094202880;
	// addi r4,r11,31956
	ctx.r4.s64 = ctx.r11.s64 + 31956;
	// addi r3,r10,3568
	ctx.r3.s64 = ctx.r10.s64 + 3568;
	// bl 0x822400d8
	ctx.lr = 0x83151DA8;
	sub_822400D8(ctx, base);
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// addi r3,r11,18152
	ctx.r3.s64 = ctx.r11.s64 + 18152;
	// bl 0x82fa2318
	ctx.lr = 0x83151DB4;
	sub_82FA2318(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83151DC4"))) PPC_WEAK_FUNC(sub_83151DC4);
PPC_FUNC_IMPL(__imp__sub_83151DC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83151DC8"))) PPC_WEAK_FUNC(sub_83151DC8);
PPC_FUNC_IMPL(__imp__sub_83151DC8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	PPCVRegister vTemp{};
	// vspltisw v0,0
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_set1_epi32(int(0x0)));
	// lis r11,-31955
	ctx.r11.s64 = -2094202880;
	// addi r11,r11,3600
	ctx.r11.s64 = ctx.r11.s64 + 3600;
	// vupkd3d128 v0,v0,4
	temp.f32 = 3.0f;
	temp.s32 += ctx.v0.s16[1];
	vTemp.f32[3] = temp.f32;
	temp.f32 = 3.0f;
	temp.s32 += ctx.v0.s16[0];
	vTemp.f32[2] = temp.f32;
	vTemp.f32[1] = 0.0f;
	vTemp.f32[0] = 1.0f;
	ctx.v0 = vTemp;
	// vpermwi128 v0,v0,171
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0x54));
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83151DE4"))) PPC_WEAK_FUNC(sub_83151DE4);
PPC_FUNC_IMPL(__imp__sub_83151DE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83151DE8"))) PPC_WEAK_FUNC(sub_83151DE8);
PPC_FUNC_IMPL(__imp__sub_83151DE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// lis r10,-31955
	ctx.r10.s64 = -2094202880;
	// addi r11,r11,15824
	ctx.r11.s64 = ctx.r11.s64 + 15824;
	// addi r10,r10,3616
	ctx.r10.s64 = ctx.r10.s64 + 3616;
	// lvx128 v0,r0,r11
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// stvx128 v0,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83151E04"))) PPC_WEAK_FUNC(sub_83151E04);
PPC_FUNC_IMPL(__imp__sub_83151E04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83151E08"))) PPC_WEAK_FUNC(sub_83151E08);
PPC_FUNC_IMPL(__imp__sub_83151E08) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	PPCVRegister vTemp{};
	// vspltisw v0,0
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_set1_epi32(int(0x0)));
	// lis r11,-31955
	ctx.r11.s64 = -2094202880;
	// li r10,16
	ctx.r10.s64 = 16;
	// addi r11,r11,3632
	ctx.r11.s64 = ctx.r11.s64 + 3632;
	// li r9,32
	ctx.r9.s64 = 32;
	// vupkd3d128 v11,v0,4
	temp.f32 = 3.0f;
	temp.s32 += ctx.v0.s16[1];
	vTemp.f32[3] = temp.f32;
	temp.f32 = 3.0f;
	temp.s32 += ctx.v0.s16[0];
	vTemp.f32[2] = temp.f32;
	vTemp.f32[1] = 0.0f;
	vTemp.f32[0] = 1.0f;
	ctx.v11 = vTemp;
	// li r8,48
	ctx.r8.s64 = 48;
	// vpermwi128 v0,v11,234
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v11.u32), 0x15));
	// vpermwi128 v13,v11,186
	_mm_store_si128((__m128i*)ctx.v13.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v11.u32), 0x45));
	// vpermwi128 v12,v11,174
	_mm_store_si128((__m128i*)ctx.v12.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v11.u32), 0x51));
	// vpermwi128 v11,v11,171
	_mm_store_si128((__m128i*)ctx.v11.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v11.u32), 0x54));
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v13,r11,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v12,r11,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v11,r11,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83151E48"))) PPC_WEAK_FUNC(sub_83151E48);
PPC_FUNC_IMPL(__imp__sub_83151E48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// lis r10,-31955
	ctx.r10.s64 = -2094202880;
	// addi r4,r11,31956
	ctx.r4.s64 = ctx.r11.s64 + 31956;
	// addi r3,r10,3696
	ctx.r3.s64 = ctx.r10.s64 + 3696;
	// bl 0x822400d8
	ctx.lr = 0x83151E68;
	sub_822400D8(ctx, base);
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// addi r3,r11,18176
	ctx.r3.s64 = ctx.r11.s64 + 18176;
	// bl 0x82fa2318
	ctx.lr = 0x83151E74;
	sub_82FA2318(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83151E84"))) PPC_WEAK_FUNC(sub_83151E84);
PPC_FUNC_IMPL(__imp__sub_83151E84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83151E88"))) PPC_WEAK_FUNC(sub_83151E88);
PPC_FUNC_IMPL(__imp__sub_83151E88) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	PPCVRegister vTemp{};
	// vspltisw v0,0
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_set1_epi32(int(0x0)));
	// lis r11,-31955
	ctx.r11.s64 = -2094202880;
	// addi r11,r11,3728
	ctx.r11.s64 = ctx.r11.s64 + 3728;
	// vupkd3d128 v0,v0,4
	temp.f32 = 3.0f;
	temp.s32 += ctx.v0.s16[1];
	vTemp.f32[3] = temp.f32;
	temp.f32 = 3.0f;
	temp.s32 += ctx.v0.s16[0];
	vTemp.f32[2] = temp.f32;
	vTemp.f32[1] = 0.0f;
	vTemp.f32[0] = 1.0f;
	ctx.v0 = vTemp;
	// vpermwi128 v0,v0,171
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0x54));
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83151EA4"))) PPC_WEAK_FUNC(sub_83151EA4);
PPC_FUNC_IMPL(__imp__sub_83151EA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83151EA8"))) PPC_WEAK_FUNC(sub_83151EA8);
PPC_FUNC_IMPL(__imp__sub_83151EA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// lis r10,-31955
	ctx.r10.s64 = -2094202880;
	// addi r11,r11,15824
	ctx.r11.s64 = ctx.r11.s64 + 15824;
	// addi r10,r10,3744
	ctx.r10.s64 = ctx.r10.s64 + 3744;
	// lvx128 v0,r0,r11
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// stvx128 v0,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83151EC4"))) PPC_WEAK_FUNC(sub_83151EC4);
PPC_FUNC_IMPL(__imp__sub_83151EC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83151EC8"))) PPC_WEAK_FUNC(sub_83151EC8);
PPC_FUNC_IMPL(__imp__sub_83151EC8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	PPCVRegister vTemp{};
	// vspltisw v0,0
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_set1_epi32(int(0x0)));
	// lis r11,-31955
	ctx.r11.s64 = -2094202880;
	// li r10,16
	ctx.r10.s64 = 16;
	// addi r11,r11,3760
	ctx.r11.s64 = ctx.r11.s64 + 3760;
	// li r9,32
	ctx.r9.s64 = 32;
	// vupkd3d128 v11,v0,4
	temp.f32 = 3.0f;
	temp.s32 += ctx.v0.s16[1];
	vTemp.f32[3] = temp.f32;
	temp.f32 = 3.0f;
	temp.s32 += ctx.v0.s16[0];
	vTemp.f32[2] = temp.f32;
	vTemp.f32[1] = 0.0f;
	vTemp.f32[0] = 1.0f;
	ctx.v11 = vTemp;
	// li r8,48
	ctx.r8.s64 = 48;
	// vpermwi128 v0,v11,234
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v11.u32), 0x15));
	// vpermwi128 v13,v11,186
	_mm_store_si128((__m128i*)ctx.v13.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v11.u32), 0x45));
	// vpermwi128 v12,v11,174
	_mm_store_si128((__m128i*)ctx.v12.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v11.u32), 0x51));
	// vpermwi128 v11,v11,171
	_mm_store_si128((__m128i*)ctx.v11.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v11.u32), 0x54));
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v13,r11,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v12,r11,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v11,r11,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83151F08"))) PPC_WEAK_FUNC(sub_83151F08);
PPC_FUNC_IMPL(__imp__sub_83151F08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// lis r10,-31955
	ctx.r10.s64 = -2094202880;
	// addi r4,r11,31956
	ctx.r4.s64 = ctx.r11.s64 + 31956;
	// addi r3,r10,3824
	ctx.r3.s64 = ctx.r10.s64 + 3824;
	// bl 0x822400d8
	ctx.lr = 0x83151F28;
	sub_822400D8(ctx, base);
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// addi r3,r11,18200
	ctx.r3.s64 = ctx.r11.s64 + 18200;
	// bl 0x82fa2318
	ctx.lr = 0x83151F34;
	sub_82FA2318(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83151F44"))) PPC_WEAK_FUNC(sub_83151F44);
PPC_FUNC_IMPL(__imp__sub_83151F44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83151F48"))) PPC_WEAK_FUNC(sub_83151F48);
PPC_FUNC_IMPL(__imp__sub_83151F48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// lis r10,-31955
	ctx.r10.s64 = -2094202880;
	// addi r4,r11,31956
	ctx.r4.s64 = ctx.r11.s64 + 31956;
	// addi r3,r10,3852
	ctx.r3.s64 = ctx.r10.s64 + 3852;
	// bl 0x822400d8
	ctx.lr = 0x83151F68;
	sub_822400D8(ctx, base);
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// addi r3,r11,18224
	ctx.r3.s64 = ctx.r11.s64 + 18224;
	// bl 0x82fa2318
	ctx.lr = 0x83151F74;
	sub_82FA2318(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83151F84"))) PPC_WEAK_FUNC(sub_83151F84);
PPC_FUNC_IMPL(__imp__sub_83151F84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83151F88"))) PPC_WEAK_FUNC(sub_83151F88);
PPC_FUNC_IMPL(__imp__sub_83151F88) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	PPCVRegister vTemp{};
	// vspltisw v0,0
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_set1_epi32(int(0x0)));
	// lis r11,-31955
	ctx.r11.s64 = -2094202880;
	// addi r11,r11,3888
	ctx.r11.s64 = ctx.r11.s64 + 3888;
	// vupkd3d128 v0,v0,4
	temp.f32 = 3.0f;
	temp.s32 += ctx.v0.s16[1];
	vTemp.f32[3] = temp.f32;
	temp.f32 = 3.0f;
	temp.s32 += ctx.v0.s16[0];
	vTemp.f32[2] = temp.f32;
	vTemp.f32[1] = 0.0f;
	vTemp.f32[0] = 1.0f;
	ctx.v0 = vTemp;
	// vpermwi128 v0,v0,171
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0x54));
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83151FA4"))) PPC_WEAK_FUNC(sub_83151FA4);
PPC_FUNC_IMPL(__imp__sub_83151FA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83151FA8"))) PPC_WEAK_FUNC(sub_83151FA8);
PPC_FUNC_IMPL(__imp__sub_83151FA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// lis r10,-31955
	ctx.r10.s64 = -2094202880;
	// addi r11,r11,15824
	ctx.r11.s64 = ctx.r11.s64 + 15824;
	// addi r10,r10,3904
	ctx.r10.s64 = ctx.r10.s64 + 3904;
	// lvx128 v0,r0,r11
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// stvx128 v0,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83151FC4"))) PPC_WEAK_FUNC(sub_83151FC4);
PPC_FUNC_IMPL(__imp__sub_83151FC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83151FC8"))) PPC_WEAK_FUNC(sub_83151FC8);
PPC_FUNC_IMPL(__imp__sub_83151FC8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	PPCVRegister vTemp{};
	// vspltisw v0,0
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_set1_epi32(int(0x0)));
	// lis r11,-31955
	ctx.r11.s64 = -2094202880;
	// li r10,16
	ctx.r10.s64 = 16;
	// addi r11,r11,3920
	ctx.r11.s64 = ctx.r11.s64 + 3920;
	// li r9,32
	ctx.r9.s64 = 32;
	// vupkd3d128 v11,v0,4
	temp.f32 = 3.0f;
	temp.s32 += ctx.v0.s16[1];
	vTemp.f32[3] = temp.f32;
	temp.f32 = 3.0f;
	temp.s32 += ctx.v0.s16[0];
	vTemp.f32[2] = temp.f32;
	vTemp.f32[1] = 0.0f;
	vTemp.f32[0] = 1.0f;
	ctx.v11 = vTemp;
	// li r8,48
	ctx.r8.s64 = 48;
	// vpermwi128 v0,v11,234
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v11.u32), 0x15));
	// vpermwi128 v13,v11,186
	_mm_store_si128((__m128i*)ctx.v13.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v11.u32), 0x45));
	// vpermwi128 v12,v11,174
	_mm_store_si128((__m128i*)ctx.v12.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v11.u32), 0x51));
	// vpermwi128 v11,v11,171
	_mm_store_si128((__m128i*)ctx.v11.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v11.u32), 0x54));
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v13,r11,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v12,r11,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v11,r11,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83152008"))) PPC_WEAK_FUNC(sub_83152008);
PPC_FUNC_IMPL(__imp__sub_83152008) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	PPCVRegister vTemp{};
	// vspltisw v0,0
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_set1_epi32(int(0x0)));
	// lis r11,-31955
	ctx.r11.s64 = -2094202880;
	// addi r11,r11,3984
	ctx.r11.s64 = ctx.r11.s64 + 3984;
	// vupkd3d128 v0,v0,4
	temp.f32 = 3.0f;
	temp.s32 += ctx.v0.s16[1];
	vTemp.f32[3] = temp.f32;
	temp.f32 = 3.0f;
	temp.s32 += ctx.v0.s16[0];
	vTemp.f32[2] = temp.f32;
	vTemp.f32[1] = 0.0f;
	vTemp.f32[0] = 1.0f;
	ctx.v0 = vTemp;
	// vpermwi128 v0,v0,171
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0x54));
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83152024"))) PPC_WEAK_FUNC(sub_83152024);
PPC_FUNC_IMPL(__imp__sub_83152024) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83152028"))) PPC_WEAK_FUNC(sub_83152028);
PPC_FUNC_IMPL(__imp__sub_83152028) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// lis r10,-31955
	ctx.r10.s64 = -2094202880;
	// addi r11,r11,15824
	ctx.r11.s64 = ctx.r11.s64 + 15824;
	// addi r10,r10,4000
	ctx.r10.s64 = ctx.r10.s64 + 4000;
	// lvx128 v0,r0,r11
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// stvx128 v0,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83152044"))) PPC_WEAK_FUNC(sub_83152044);
PPC_FUNC_IMPL(__imp__sub_83152044) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83152048"))) PPC_WEAK_FUNC(sub_83152048);
PPC_FUNC_IMPL(__imp__sub_83152048) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	PPCVRegister vTemp{};
	// vspltisw v0,0
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_set1_epi32(int(0x0)));
	// lis r11,-31955
	ctx.r11.s64 = -2094202880;
	// li r10,16
	ctx.r10.s64 = 16;
	// addi r11,r11,4016
	ctx.r11.s64 = ctx.r11.s64 + 4016;
	// li r9,32
	ctx.r9.s64 = 32;
	// vupkd3d128 v11,v0,4
	temp.f32 = 3.0f;
	temp.s32 += ctx.v0.s16[1];
	vTemp.f32[3] = temp.f32;
	temp.f32 = 3.0f;
	temp.s32 += ctx.v0.s16[0];
	vTemp.f32[2] = temp.f32;
	vTemp.f32[1] = 0.0f;
	vTemp.f32[0] = 1.0f;
	ctx.v11 = vTemp;
	// li r8,48
	ctx.r8.s64 = 48;
	// vpermwi128 v0,v11,234
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v11.u32), 0x15));
	// vpermwi128 v13,v11,186
	_mm_store_si128((__m128i*)ctx.v13.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v11.u32), 0x45));
	// vpermwi128 v12,v11,174
	_mm_store_si128((__m128i*)ctx.v12.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v11.u32), 0x51));
	// vpermwi128 v11,v11,171
	_mm_store_si128((__m128i*)ctx.v11.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v11.u32), 0x54));
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v13,r11,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v12,r11,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v11,r11,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83152088"))) PPC_WEAK_FUNC(sub_83152088);
PPC_FUNC_IMPL(__imp__sub_83152088) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// lis r10,-31955
	ctx.r10.s64 = -2094202880;
	// addi r4,r11,31956
	ctx.r4.s64 = ctx.r11.s64 + 31956;
	// addi r3,r10,4080
	ctx.r3.s64 = ctx.r10.s64 + 4080;
	// bl 0x822400d8
	ctx.lr = 0x831520A8;
	sub_822400D8(ctx, base);
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// addi r3,r11,18248
	ctx.r3.s64 = ctx.r11.s64 + 18248;
	// bl 0x82fa2318
	ctx.lr = 0x831520B4;
	sub_82FA2318(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831520C4"))) PPC_WEAK_FUNC(sub_831520C4);
PPC_FUNC_IMPL(__imp__sub_831520C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831520C8"))) PPC_WEAK_FUNC(sub_831520C8);
PPC_FUNC_IMPL(__imp__sub_831520C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// lis r10,-31955
	ctx.r10.s64 = -2094202880;
	// addi r4,r11,31956
	ctx.r4.s64 = ctx.r11.s64 + 31956;
	// addi r3,r10,4108
	ctx.r3.s64 = ctx.r10.s64 + 4108;
	// bl 0x822400d8
	ctx.lr = 0x831520E8;
	sub_822400D8(ctx, base);
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// addi r3,r11,18272
	ctx.r3.s64 = ctx.r11.s64 + 18272;
	// bl 0x82fa2318
	ctx.lr = 0x831520F4;
	sub_82FA2318(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83152104"))) PPC_WEAK_FUNC(sub_83152104);
PPC_FUNC_IMPL(__imp__sub_83152104) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83152108"))) PPC_WEAK_FUNC(sub_83152108);
PPC_FUNC_IMPL(__imp__sub_83152108) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	PPCVRegister vTemp{};
	// vspltisw v0,0
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_set1_epi32(int(0x0)));
	// lis r11,-31955
	ctx.r11.s64 = -2094202880;
	// addi r11,r11,4144
	ctx.r11.s64 = ctx.r11.s64 + 4144;
	// vupkd3d128 v0,v0,4
	temp.f32 = 3.0f;
	temp.s32 += ctx.v0.s16[1];
	vTemp.f32[3] = temp.f32;
	temp.f32 = 3.0f;
	temp.s32 += ctx.v0.s16[0];
	vTemp.f32[2] = temp.f32;
	vTemp.f32[1] = 0.0f;
	vTemp.f32[0] = 1.0f;
	ctx.v0 = vTemp;
	// vpermwi128 v0,v0,171
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0x54));
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83152124"))) PPC_WEAK_FUNC(sub_83152124);
PPC_FUNC_IMPL(__imp__sub_83152124) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83152128"))) PPC_WEAK_FUNC(sub_83152128);
PPC_FUNC_IMPL(__imp__sub_83152128) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// lis r10,-31955
	ctx.r10.s64 = -2094202880;
	// addi r11,r11,15824
	ctx.r11.s64 = ctx.r11.s64 + 15824;
	// addi r10,r10,4160
	ctx.r10.s64 = ctx.r10.s64 + 4160;
	// lvx128 v0,r0,r11
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// stvx128 v0,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83152144"))) PPC_WEAK_FUNC(sub_83152144);
PPC_FUNC_IMPL(__imp__sub_83152144) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83152148"))) PPC_WEAK_FUNC(sub_83152148);
PPC_FUNC_IMPL(__imp__sub_83152148) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	PPCVRegister vTemp{};
	// vspltisw v0,0
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_set1_epi32(int(0x0)));
	// lis r11,-31955
	ctx.r11.s64 = -2094202880;
	// li r10,16
	ctx.r10.s64 = 16;
	// addi r11,r11,4176
	ctx.r11.s64 = ctx.r11.s64 + 4176;
	// li r9,32
	ctx.r9.s64 = 32;
	// vupkd3d128 v11,v0,4
	temp.f32 = 3.0f;
	temp.s32 += ctx.v0.s16[1];
	vTemp.f32[3] = temp.f32;
	temp.f32 = 3.0f;
	temp.s32 += ctx.v0.s16[0];
	vTemp.f32[2] = temp.f32;
	vTemp.f32[1] = 0.0f;
	vTemp.f32[0] = 1.0f;
	ctx.v11 = vTemp;
	// li r8,48
	ctx.r8.s64 = 48;
	// vpermwi128 v0,v11,234
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v11.u32), 0x15));
	// vpermwi128 v13,v11,186
	_mm_store_si128((__m128i*)ctx.v13.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v11.u32), 0x45));
	// vpermwi128 v12,v11,174
	_mm_store_si128((__m128i*)ctx.v12.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v11.u32), 0x51));
	// vpermwi128 v11,v11,171
	_mm_store_si128((__m128i*)ctx.v11.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v11.u32), 0x54));
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v13,r11,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v12,r11,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v11,r11,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83152188"))) PPC_WEAK_FUNC(sub_83152188);
PPC_FUNC_IMPL(__imp__sub_83152188) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	PPCVRegister vTemp{};
	// vspltisw v0,0
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_set1_epi32(int(0x0)));
	// lis r11,-31955
	ctx.r11.s64 = -2094202880;
	// addi r11,r11,4240
	ctx.r11.s64 = ctx.r11.s64 + 4240;
	// vupkd3d128 v0,v0,4
	temp.f32 = 3.0f;
	temp.s32 += ctx.v0.s16[1];
	vTemp.f32[3] = temp.f32;
	temp.f32 = 3.0f;
	temp.s32 += ctx.v0.s16[0];
	vTemp.f32[2] = temp.f32;
	vTemp.f32[1] = 0.0f;
	vTemp.f32[0] = 1.0f;
	ctx.v0 = vTemp;
	// vpermwi128 v0,v0,171
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0x54));
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831521A4"))) PPC_WEAK_FUNC(sub_831521A4);
PPC_FUNC_IMPL(__imp__sub_831521A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831521A8"))) PPC_WEAK_FUNC(sub_831521A8);
PPC_FUNC_IMPL(__imp__sub_831521A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// lis r10,-31955
	ctx.r10.s64 = -2094202880;
	// addi r11,r11,15824
	ctx.r11.s64 = ctx.r11.s64 + 15824;
	// addi r10,r10,4256
	ctx.r10.s64 = ctx.r10.s64 + 4256;
	// lvx128 v0,r0,r11
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// stvx128 v0,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831521C4"))) PPC_WEAK_FUNC(sub_831521C4);
PPC_FUNC_IMPL(__imp__sub_831521C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831521C8"))) PPC_WEAK_FUNC(sub_831521C8);
PPC_FUNC_IMPL(__imp__sub_831521C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	PPCVRegister vTemp{};
	// vspltisw v0,0
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_set1_epi32(int(0x0)));
	// lis r11,-31955
	ctx.r11.s64 = -2094202880;
	// li r10,16
	ctx.r10.s64 = 16;
	// addi r11,r11,4272
	ctx.r11.s64 = ctx.r11.s64 + 4272;
	// li r9,32
	ctx.r9.s64 = 32;
	// vupkd3d128 v11,v0,4
	temp.f32 = 3.0f;
	temp.s32 += ctx.v0.s16[1];
	vTemp.f32[3] = temp.f32;
	temp.f32 = 3.0f;
	temp.s32 += ctx.v0.s16[0];
	vTemp.f32[2] = temp.f32;
	vTemp.f32[1] = 0.0f;
	vTemp.f32[0] = 1.0f;
	ctx.v11 = vTemp;
	// li r8,48
	ctx.r8.s64 = 48;
	// vpermwi128 v0,v11,234
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v11.u32), 0x15));
	// vpermwi128 v13,v11,186
	_mm_store_si128((__m128i*)ctx.v13.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v11.u32), 0x45));
	// vpermwi128 v12,v11,174
	_mm_store_si128((__m128i*)ctx.v12.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v11.u32), 0x51));
	// vpermwi128 v11,v11,171
	_mm_store_si128((__m128i*)ctx.v11.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v11.u32), 0x54));
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v13,r11,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v12,r11,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v11,r11,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83152208"))) PPC_WEAK_FUNC(sub_83152208);
PPC_FUNC_IMPL(__imp__sub_83152208) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// lis r10,-31955
	ctx.r10.s64 = -2094202880;
	// addi r4,r11,31956
	ctx.r4.s64 = ctx.r11.s64 + 31956;
	// addi r3,r10,4336
	ctx.r3.s64 = ctx.r10.s64 + 4336;
	// bl 0x822400d8
	ctx.lr = 0x83152228;
	sub_822400D8(ctx, base);
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// addi r3,r11,18296
	ctx.r3.s64 = ctx.r11.s64 + 18296;
	// bl 0x82fa2318
	ctx.lr = 0x83152234;
	sub_82FA2318(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83152244"))) PPC_WEAK_FUNC(sub_83152244);
PPC_FUNC_IMPL(__imp__sub_83152244) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83152248"))) PPC_WEAK_FUNC(sub_83152248);
PPC_FUNC_IMPL(__imp__sub_83152248) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	PPCVRegister vTemp{};
	// vspltisw v0,0
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_set1_epi32(int(0x0)));
	// lis r11,-31955
	ctx.r11.s64 = -2094202880;
	// addi r11,r11,4368
	ctx.r11.s64 = ctx.r11.s64 + 4368;
	// vupkd3d128 v0,v0,4
	temp.f32 = 3.0f;
	temp.s32 += ctx.v0.s16[1];
	vTemp.f32[3] = temp.f32;
	temp.f32 = 3.0f;
	temp.s32 += ctx.v0.s16[0];
	vTemp.f32[2] = temp.f32;
	vTemp.f32[1] = 0.0f;
	vTemp.f32[0] = 1.0f;
	ctx.v0 = vTemp;
	// vpermwi128 v0,v0,171
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0x54));
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83152264"))) PPC_WEAK_FUNC(sub_83152264);
PPC_FUNC_IMPL(__imp__sub_83152264) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83152268"))) PPC_WEAK_FUNC(sub_83152268);
PPC_FUNC_IMPL(__imp__sub_83152268) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// lis r10,-31955
	ctx.r10.s64 = -2094202880;
	// addi r11,r11,15824
	ctx.r11.s64 = ctx.r11.s64 + 15824;
	// addi r10,r10,4384
	ctx.r10.s64 = ctx.r10.s64 + 4384;
	// lvx128 v0,r0,r11
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// stvx128 v0,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83152284"))) PPC_WEAK_FUNC(sub_83152284);
PPC_FUNC_IMPL(__imp__sub_83152284) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83152288"))) PPC_WEAK_FUNC(sub_83152288);
PPC_FUNC_IMPL(__imp__sub_83152288) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	PPCVRegister vTemp{};
	// vspltisw v0,0
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_set1_epi32(int(0x0)));
	// lis r11,-31955
	ctx.r11.s64 = -2094202880;
	// li r10,16
	ctx.r10.s64 = 16;
	// addi r11,r11,4400
	ctx.r11.s64 = ctx.r11.s64 + 4400;
	// li r9,32
	ctx.r9.s64 = 32;
	// vupkd3d128 v11,v0,4
	temp.f32 = 3.0f;
	temp.s32 += ctx.v0.s16[1];
	vTemp.f32[3] = temp.f32;
	temp.f32 = 3.0f;
	temp.s32 += ctx.v0.s16[0];
	vTemp.f32[2] = temp.f32;
	vTemp.f32[1] = 0.0f;
	vTemp.f32[0] = 1.0f;
	ctx.v11 = vTemp;
	// li r8,48
	ctx.r8.s64 = 48;
	// vpermwi128 v0,v11,234
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v11.u32), 0x15));
	// vpermwi128 v13,v11,186
	_mm_store_si128((__m128i*)ctx.v13.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v11.u32), 0x45));
	// vpermwi128 v12,v11,174
	_mm_store_si128((__m128i*)ctx.v12.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v11.u32), 0x51));
	// vpermwi128 v11,v11,171
	_mm_store_si128((__m128i*)ctx.v11.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v11.u32), 0x54));
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v13,r11,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v12,r11,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v11,r11,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831522C8"))) PPC_WEAK_FUNC(sub_831522C8);
PPC_FUNC_IMPL(__imp__sub_831522C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// lis r10,-31955
	ctx.r10.s64 = -2094202880;
	// addi r4,r11,31956
	ctx.r4.s64 = ctx.r11.s64 + 31956;
	// addi r3,r10,4464
	ctx.r3.s64 = ctx.r10.s64 + 4464;
	// bl 0x822400d8
	ctx.lr = 0x831522E8;
	sub_822400D8(ctx, base);
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// addi r3,r11,18320
	ctx.r3.s64 = ctx.r11.s64 + 18320;
	// bl 0x82fa2318
	ctx.lr = 0x831522F4;
	sub_82FA2318(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83152304"))) PPC_WEAK_FUNC(sub_83152304);
PPC_FUNC_IMPL(__imp__sub_83152304) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83152308"))) PPC_WEAK_FUNC(sub_83152308);
PPC_FUNC_IMPL(__imp__sub_83152308) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	PPCVRegister vTemp{};
	// vspltisw v0,0
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_set1_epi32(int(0x0)));
	// lis r11,-31955
	ctx.r11.s64 = -2094202880;
	// addi r11,r11,4496
	ctx.r11.s64 = ctx.r11.s64 + 4496;
	// vupkd3d128 v0,v0,4
	temp.f32 = 3.0f;
	temp.s32 += ctx.v0.s16[1];
	vTemp.f32[3] = temp.f32;
	temp.f32 = 3.0f;
	temp.s32 += ctx.v0.s16[0];
	vTemp.f32[2] = temp.f32;
	vTemp.f32[1] = 0.0f;
	vTemp.f32[0] = 1.0f;
	ctx.v0 = vTemp;
	// vpermwi128 v0,v0,171
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0x54));
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83152324"))) PPC_WEAK_FUNC(sub_83152324);
PPC_FUNC_IMPL(__imp__sub_83152324) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83152328"))) PPC_WEAK_FUNC(sub_83152328);
PPC_FUNC_IMPL(__imp__sub_83152328) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// lis r10,-31955
	ctx.r10.s64 = -2094202880;
	// addi r11,r11,15824
	ctx.r11.s64 = ctx.r11.s64 + 15824;
	// addi r10,r10,4512
	ctx.r10.s64 = ctx.r10.s64 + 4512;
	// lvx128 v0,r0,r11
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// stvx128 v0,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83152344"))) PPC_WEAK_FUNC(sub_83152344);
PPC_FUNC_IMPL(__imp__sub_83152344) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83152348"))) PPC_WEAK_FUNC(sub_83152348);
PPC_FUNC_IMPL(__imp__sub_83152348) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	PPCVRegister vTemp{};
	// vspltisw v0,0
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_set1_epi32(int(0x0)));
	// lis r11,-31955
	ctx.r11.s64 = -2094202880;
	// li r10,16
	ctx.r10.s64 = 16;
	// addi r11,r11,4528
	ctx.r11.s64 = ctx.r11.s64 + 4528;
	// li r9,32
	ctx.r9.s64 = 32;
	// vupkd3d128 v11,v0,4
	temp.f32 = 3.0f;
	temp.s32 += ctx.v0.s16[1];
	vTemp.f32[3] = temp.f32;
	temp.f32 = 3.0f;
	temp.s32 += ctx.v0.s16[0];
	vTemp.f32[2] = temp.f32;
	vTemp.f32[1] = 0.0f;
	vTemp.f32[0] = 1.0f;
	ctx.v11 = vTemp;
	// li r8,48
	ctx.r8.s64 = 48;
	// vpermwi128 v0,v11,234
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v11.u32), 0x15));
	// vpermwi128 v13,v11,186
	_mm_store_si128((__m128i*)ctx.v13.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v11.u32), 0x45));
	// vpermwi128 v12,v11,174
	_mm_store_si128((__m128i*)ctx.v12.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v11.u32), 0x51));
	// vpermwi128 v11,v11,171
	_mm_store_si128((__m128i*)ctx.v11.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v11.u32), 0x54));
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v13,r11,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v12,r11,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v11,r11,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83152388"))) PPC_WEAK_FUNC(sub_83152388);
PPC_FUNC_IMPL(__imp__sub_83152388) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// lis r10,-31955
	ctx.r10.s64 = -2094202880;
	// addi r4,r11,31956
	ctx.r4.s64 = ctx.r11.s64 + 31956;
	// addi r3,r10,4592
	ctx.r3.s64 = ctx.r10.s64 + 4592;
	// bl 0x822400d8
	ctx.lr = 0x831523A8;
	sub_822400D8(ctx, base);
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// addi r3,r11,18344
	ctx.r3.s64 = ctx.r11.s64 + 18344;
	// bl 0x82fa2318
	ctx.lr = 0x831523B4;
	sub_82FA2318(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831523C4"))) PPC_WEAK_FUNC(sub_831523C4);
PPC_FUNC_IMPL(__imp__sub_831523C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831523C8"))) PPC_WEAK_FUNC(sub_831523C8);
PPC_FUNC_IMPL(__imp__sub_831523C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	PPCVRegister vTemp{};
	// vspltisw v0,0
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_set1_epi32(int(0x0)));
	// lis r11,-31955
	ctx.r11.s64 = -2094202880;
	// addi r11,r11,4624
	ctx.r11.s64 = ctx.r11.s64 + 4624;
	// vupkd3d128 v0,v0,4
	temp.f32 = 3.0f;
	temp.s32 += ctx.v0.s16[1];
	vTemp.f32[3] = temp.f32;
	temp.f32 = 3.0f;
	temp.s32 += ctx.v0.s16[0];
	vTemp.f32[2] = temp.f32;
	vTemp.f32[1] = 0.0f;
	vTemp.f32[0] = 1.0f;
	ctx.v0 = vTemp;
	// vpermwi128 v0,v0,171
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0x54));
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831523E4"))) PPC_WEAK_FUNC(sub_831523E4);
PPC_FUNC_IMPL(__imp__sub_831523E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831523E8"))) PPC_WEAK_FUNC(sub_831523E8);
PPC_FUNC_IMPL(__imp__sub_831523E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// lis r10,-31955
	ctx.r10.s64 = -2094202880;
	// addi r11,r11,15824
	ctx.r11.s64 = ctx.r11.s64 + 15824;
	// addi r10,r10,4640
	ctx.r10.s64 = ctx.r10.s64 + 4640;
	// lvx128 v0,r0,r11
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// stvx128 v0,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83152404"))) PPC_WEAK_FUNC(sub_83152404);
PPC_FUNC_IMPL(__imp__sub_83152404) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83152408"))) PPC_WEAK_FUNC(sub_83152408);
PPC_FUNC_IMPL(__imp__sub_83152408) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	PPCVRegister vTemp{};
	// vspltisw v0,0
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_set1_epi32(int(0x0)));
	// lis r11,-31955
	ctx.r11.s64 = -2094202880;
	// li r10,16
	ctx.r10.s64 = 16;
	// addi r11,r11,4656
	ctx.r11.s64 = ctx.r11.s64 + 4656;
	// li r9,32
	ctx.r9.s64 = 32;
	// vupkd3d128 v11,v0,4
	temp.f32 = 3.0f;
	temp.s32 += ctx.v0.s16[1];
	vTemp.f32[3] = temp.f32;
	temp.f32 = 3.0f;
	temp.s32 += ctx.v0.s16[0];
	vTemp.f32[2] = temp.f32;
	vTemp.f32[1] = 0.0f;
	vTemp.f32[0] = 1.0f;
	ctx.v11 = vTemp;
	// li r8,48
	ctx.r8.s64 = 48;
	// vpermwi128 v0,v11,234
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v11.u32), 0x15));
	// vpermwi128 v13,v11,186
	_mm_store_si128((__m128i*)ctx.v13.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v11.u32), 0x45));
	// vpermwi128 v12,v11,174
	_mm_store_si128((__m128i*)ctx.v12.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v11.u32), 0x51));
	// vpermwi128 v11,v11,171
	_mm_store_si128((__m128i*)ctx.v11.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v11.u32), 0x54));
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v13,r11,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v12,r11,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v11,r11,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83152448"))) PPC_WEAK_FUNC(sub_83152448);
PPC_FUNC_IMPL(__imp__sub_83152448) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// lis r10,-31955
	ctx.r10.s64 = -2094202880;
	// addi r4,r11,31956
	ctx.r4.s64 = ctx.r11.s64 + 31956;
	// addi r3,r10,4720
	ctx.r3.s64 = ctx.r10.s64 + 4720;
	// bl 0x822400d8
	ctx.lr = 0x83152468;
	sub_822400D8(ctx, base);
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// addi r3,r11,18368
	ctx.r3.s64 = ctx.r11.s64 + 18368;
	// bl 0x82fa2318
	ctx.lr = 0x83152474;
	sub_82FA2318(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83152484"))) PPC_WEAK_FUNC(sub_83152484);
PPC_FUNC_IMPL(__imp__sub_83152484) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83152488"))) PPC_WEAK_FUNC(sub_83152488);
PPC_FUNC_IMPL(__imp__sub_83152488) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	PPCVRegister vTemp{};
	// vspltisw v0,0
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_set1_epi32(int(0x0)));
	// lis r11,-31955
	ctx.r11.s64 = -2094202880;
	// addi r11,r11,4752
	ctx.r11.s64 = ctx.r11.s64 + 4752;
	// vupkd3d128 v0,v0,4
	temp.f32 = 3.0f;
	temp.s32 += ctx.v0.s16[1];
	vTemp.f32[3] = temp.f32;
	temp.f32 = 3.0f;
	temp.s32 += ctx.v0.s16[0];
	vTemp.f32[2] = temp.f32;
	vTemp.f32[1] = 0.0f;
	vTemp.f32[0] = 1.0f;
	ctx.v0 = vTemp;
	// vpermwi128 v0,v0,171
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0x54));
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_831524A4"))) PPC_WEAK_FUNC(sub_831524A4);
PPC_FUNC_IMPL(__imp__sub_831524A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_831524A8"))) PPC_WEAK_FUNC(sub_831524A8);
PPC_FUNC_IMPL(__imp__sub_831524A8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// lis r10,-31955
	ctx.r10.s64 = -2094202880;
	// addi r11,r11,15824
	ctx.r11.s64 = ctx.r11.s64 + 15824;
	// addi r10,r10,4768
	ctx.r10.s64 = ctx.r10.s64 + 4768;
	// lvx128 v0,r0,r11
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// stvx128 v0,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

