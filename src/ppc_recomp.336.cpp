#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_83159A04"))) PPC_WEAK_FUNC(sub_83159A04);
PPC_FUNC_IMPL(__imp__sub_83159A04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83159A08"))) PPC_WEAK_FUNC(sub_83159A08);
PPC_FUNC_IMPL(__imp__sub_83159A08) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// lis r10,-31955
	ctx.r10.s64 = -2094202880;
	// addi r11,r11,15824
	ctx.r11.s64 = ctx.r11.s64 + 15824;
	// addi r10,r10,22752
	ctx.r10.s64 = ctx.r10.s64 + 22752;
	// lvx128 v0,r0,r11
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// stvx128 v0,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83159A24"))) PPC_WEAK_FUNC(sub_83159A24);
PPC_FUNC_IMPL(__imp__sub_83159A24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83159A28"))) PPC_WEAK_FUNC(sub_83159A28);
PPC_FUNC_IMPL(__imp__sub_83159A28) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	PPCVRegister vTemp{};
	// vspltisw v0,0
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_set1_epi32(int(0x0)));
	// lis r11,-31955
	ctx.r11.s64 = -2094202880;
	// li r10,16
	ctx.r10.s64 = 16;
	// addi r11,r11,22768
	ctx.r11.s64 = ctx.r11.s64 + 22768;
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

__attribute__((alias("__imp__sub_83159A68"))) PPC_WEAK_FUNC(sub_83159A68);
PPC_FUNC_IMPL(__imp__sub_83159A68) {
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
	// addi r3,r10,22832
	ctx.r3.s64 = ctx.r10.s64 + 22832;
	// bl 0x822400d8
	ctx.lr = 0x83159A88;
	sub_822400D8(ctx, base);
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// addi r3,r11,23048
	ctx.r3.s64 = ctx.r11.s64 + 23048;
	// bl 0x82fa2318
	ctx.lr = 0x83159A94;
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

__attribute__((alias("__imp__sub_83159AA4"))) PPC_WEAK_FUNC(sub_83159AA4);
PPC_FUNC_IMPL(__imp__sub_83159AA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83159AA8"))) PPC_WEAK_FUNC(sub_83159AA8);
PPC_FUNC_IMPL(__imp__sub_83159AA8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	PPCVRegister vTemp{};
	// vspltisw v0,0
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_set1_epi32(int(0x0)));
	// lis r11,-31955
	ctx.r11.s64 = -2094202880;
	// addi r11,r11,22864
	ctx.r11.s64 = ctx.r11.s64 + 22864;
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

__attribute__((alias("__imp__sub_83159AC4"))) PPC_WEAK_FUNC(sub_83159AC4);
PPC_FUNC_IMPL(__imp__sub_83159AC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83159AC8"))) PPC_WEAK_FUNC(sub_83159AC8);
PPC_FUNC_IMPL(__imp__sub_83159AC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// lis r10,-31955
	ctx.r10.s64 = -2094202880;
	// addi r11,r11,15824
	ctx.r11.s64 = ctx.r11.s64 + 15824;
	// addi r10,r10,22880
	ctx.r10.s64 = ctx.r10.s64 + 22880;
	// lvx128 v0,r0,r11
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// stvx128 v0,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83159AE4"))) PPC_WEAK_FUNC(sub_83159AE4);
PPC_FUNC_IMPL(__imp__sub_83159AE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83159AE8"))) PPC_WEAK_FUNC(sub_83159AE8);
PPC_FUNC_IMPL(__imp__sub_83159AE8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	PPCVRegister vTemp{};
	// vspltisw v0,0
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_set1_epi32(int(0x0)));
	// lis r11,-31955
	ctx.r11.s64 = -2094202880;
	// li r10,16
	ctx.r10.s64 = 16;
	// addi r11,r11,22896
	ctx.r11.s64 = ctx.r11.s64 + 22896;
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

__attribute__((alias("__imp__sub_83159B28"))) PPC_WEAK_FUNC(sub_83159B28);
PPC_FUNC_IMPL(__imp__sub_83159B28) {
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
	// addi r3,r10,22960
	ctx.r3.s64 = ctx.r10.s64 + 22960;
	// bl 0x822400d8
	ctx.lr = 0x83159B48;
	sub_822400D8(ctx, base);
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// addi r3,r11,23072
	ctx.r3.s64 = ctx.r11.s64 + 23072;
	// bl 0x82fa2318
	ctx.lr = 0x83159B54;
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

__attribute__((alias("__imp__sub_83159B64"))) PPC_WEAK_FUNC(sub_83159B64);
PPC_FUNC_IMPL(__imp__sub_83159B64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83159B68"))) PPC_WEAK_FUNC(sub_83159B68);
PPC_FUNC_IMPL(__imp__sub_83159B68) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	PPCVRegister vTemp{};
	// vspltisw v0,0
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_set1_epi32(int(0x0)));
	// lis r11,-31955
	ctx.r11.s64 = -2094202880;
	// addi r11,r11,22992
	ctx.r11.s64 = ctx.r11.s64 + 22992;
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

__attribute__((alias("__imp__sub_83159B84"))) PPC_WEAK_FUNC(sub_83159B84);
PPC_FUNC_IMPL(__imp__sub_83159B84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83159B88"))) PPC_WEAK_FUNC(sub_83159B88);
PPC_FUNC_IMPL(__imp__sub_83159B88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// lis r10,-31955
	ctx.r10.s64 = -2094202880;
	// addi r11,r11,15824
	ctx.r11.s64 = ctx.r11.s64 + 15824;
	// addi r10,r10,23008
	ctx.r10.s64 = ctx.r10.s64 + 23008;
	// lvx128 v0,r0,r11
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// stvx128 v0,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83159BA4"))) PPC_WEAK_FUNC(sub_83159BA4);
PPC_FUNC_IMPL(__imp__sub_83159BA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83159BA8"))) PPC_WEAK_FUNC(sub_83159BA8);
PPC_FUNC_IMPL(__imp__sub_83159BA8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	PPCVRegister vTemp{};
	// vspltisw v0,0
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_set1_epi32(int(0x0)));
	// lis r11,-31955
	ctx.r11.s64 = -2094202880;
	// li r10,16
	ctx.r10.s64 = 16;
	// addi r11,r11,23024
	ctx.r11.s64 = ctx.r11.s64 + 23024;
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

__attribute__((alias("__imp__sub_83159BE8"))) PPC_WEAK_FUNC(sub_83159BE8);
PPC_FUNC_IMPL(__imp__sub_83159BE8) {
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
	// addi r3,r10,23088
	ctx.r3.s64 = ctx.r10.s64 + 23088;
	// bl 0x822400d8
	ctx.lr = 0x83159C08;
	sub_822400D8(ctx, base);
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// addi r3,r11,23096
	ctx.r3.s64 = ctx.r11.s64 + 23096;
	// bl 0x82fa2318
	ctx.lr = 0x83159C14;
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

__attribute__((alias("__imp__sub_83159C24"))) PPC_WEAK_FUNC(sub_83159C24);
PPC_FUNC_IMPL(__imp__sub_83159C24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83159C28"))) PPC_WEAK_FUNC(sub_83159C28);
PPC_FUNC_IMPL(__imp__sub_83159C28) {
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
	// addi r3,r10,23116
	ctx.r3.s64 = ctx.r10.s64 + 23116;
	// bl 0x822400d8
	ctx.lr = 0x83159C48;
	sub_822400D8(ctx, base);
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// addi r3,r11,23120
	ctx.r3.s64 = ctx.r11.s64 + 23120;
	// bl 0x82fa2318
	ctx.lr = 0x83159C54;
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

__attribute__((alias("__imp__sub_83159C64"))) PPC_WEAK_FUNC(sub_83159C64);
PPC_FUNC_IMPL(__imp__sub_83159C64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83159C68"))) PPC_WEAK_FUNC(sub_83159C68);
PPC_FUNC_IMPL(__imp__sub_83159C68) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// addi r3,r11,23144
	ctx.r3.s64 = ctx.r11.s64 + 23144;
	// b 0x82fa2318
	sub_82FA2318(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_83159C74"))) PPC_WEAK_FUNC(sub_83159C74);
PPC_FUNC_IMPL(__imp__sub_83159C74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83159C78"))) PPC_WEAK_FUNC(sub_83159C78);
PPC_FUNC_IMPL(__imp__sub_83159C78) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	PPCVRegister vTemp{};
	// vspltisw v0,0
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_set1_epi32(int(0x0)));
	// lis r11,-31955
	ctx.r11.s64 = -2094202880;
	// addi r11,r11,23152
	ctx.r11.s64 = ctx.r11.s64 + 23152;
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

__attribute__((alias("__imp__sub_83159C94"))) PPC_WEAK_FUNC(sub_83159C94);
PPC_FUNC_IMPL(__imp__sub_83159C94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83159C98"))) PPC_WEAK_FUNC(sub_83159C98);
PPC_FUNC_IMPL(__imp__sub_83159C98) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// lis r10,-31955
	ctx.r10.s64 = -2094202880;
	// addi r11,r11,15824
	ctx.r11.s64 = ctx.r11.s64 + 15824;
	// addi r10,r10,23168
	ctx.r10.s64 = ctx.r10.s64 + 23168;
	// lvx128 v0,r0,r11
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// stvx128 v0,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83159CB4"))) PPC_WEAK_FUNC(sub_83159CB4);
PPC_FUNC_IMPL(__imp__sub_83159CB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83159CB8"))) PPC_WEAK_FUNC(sub_83159CB8);
PPC_FUNC_IMPL(__imp__sub_83159CB8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	PPCVRegister vTemp{};
	// vspltisw v0,0
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_set1_epi32(int(0x0)));
	// lis r11,-31955
	ctx.r11.s64 = -2094202880;
	// li r10,16
	ctx.r10.s64 = 16;
	// addi r11,r11,23184
	ctx.r11.s64 = ctx.r11.s64 + 23184;
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

__attribute__((alias("__imp__sub_83159CF8"))) PPC_WEAK_FUNC(sub_83159CF8);
PPC_FUNC_IMPL(__imp__sub_83159CF8) {
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
	// addi r3,r10,23248
	ctx.r3.s64 = ctx.r10.s64 + 23248;
	// bl 0x822400d8
	ctx.lr = 0x83159D18;
	sub_822400D8(ctx, base);
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// addi r3,r11,23224
	ctx.r3.s64 = ctx.r11.s64 + 23224;
	// bl 0x82fa2318
	ctx.lr = 0x83159D24;
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

__attribute__((alias("__imp__sub_83159D34"))) PPC_WEAK_FUNC(sub_83159D34);
PPC_FUNC_IMPL(__imp__sub_83159D34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83159D38"))) PPC_WEAK_FUNC(sub_83159D38);
PPC_FUNC_IMPL(__imp__sub_83159D38) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	PPCVRegister vTemp{};
	// vspltisw v0,0
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_set1_epi32(int(0x0)));
	// lis r11,-31955
	ctx.r11.s64 = -2094202880;
	// addi r11,r11,23280
	ctx.r11.s64 = ctx.r11.s64 + 23280;
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

__attribute__((alias("__imp__sub_83159D54"))) PPC_WEAK_FUNC(sub_83159D54);
PPC_FUNC_IMPL(__imp__sub_83159D54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83159D58"))) PPC_WEAK_FUNC(sub_83159D58);
PPC_FUNC_IMPL(__imp__sub_83159D58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// lis r10,-31955
	ctx.r10.s64 = -2094202880;
	// addi r11,r11,15824
	ctx.r11.s64 = ctx.r11.s64 + 15824;
	// addi r10,r10,23296
	ctx.r10.s64 = ctx.r10.s64 + 23296;
	// lvx128 v0,r0,r11
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// stvx128 v0,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83159D74"))) PPC_WEAK_FUNC(sub_83159D74);
PPC_FUNC_IMPL(__imp__sub_83159D74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83159D78"))) PPC_WEAK_FUNC(sub_83159D78);
PPC_FUNC_IMPL(__imp__sub_83159D78) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	PPCVRegister vTemp{};
	// vspltisw v0,0
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_set1_epi32(int(0x0)));
	// lis r11,-31955
	ctx.r11.s64 = -2094202880;
	// li r10,16
	ctx.r10.s64 = 16;
	// addi r11,r11,23312
	ctx.r11.s64 = ctx.r11.s64 + 23312;
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

__attribute__((alias("__imp__sub_83159DB8"))) PPC_WEAK_FUNC(sub_83159DB8);
PPC_FUNC_IMPL(__imp__sub_83159DB8) {
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
	// addi r3,r10,23376
	ctx.r3.s64 = ctx.r10.s64 + 23376;
	// bl 0x822400d8
	ctx.lr = 0x83159DD8;
	sub_822400D8(ctx, base);
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// addi r3,r11,23248
	ctx.r3.s64 = ctx.r11.s64 + 23248;
	// bl 0x82fa2318
	ctx.lr = 0x83159DE4;
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

__attribute__((alias("__imp__sub_83159DF4"))) PPC_WEAK_FUNC(sub_83159DF4);
PPC_FUNC_IMPL(__imp__sub_83159DF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83159DF8"))) PPC_WEAK_FUNC(sub_83159DF8);
PPC_FUNC_IMPL(__imp__sub_83159DF8) {
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
	// addi r3,r10,23404
	ctx.r3.s64 = ctx.r10.s64 + 23404;
	// bl 0x822400d8
	ctx.lr = 0x83159E18;
	sub_822400D8(ctx, base);
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// addi r3,r11,23272
	ctx.r3.s64 = ctx.r11.s64 + 23272;
	// bl 0x82fa2318
	ctx.lr = 0x83159E24;
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

__attribute__((alias("__imp__sub_83159E34"))) PPC_WEAK_FUNC(sub_83159E34);
PPC_FUNC_IMPL(__imp__sub_83159E34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83159E38"))) PPC_WEAK_FUNC(sub_83159E38);
PPC_FUNC_IMPL(__imp__sub_83159E38) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	PPCVRegister vTemp{};
	// vspltisw v0,0
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_set1_epi32(int(0x0)));
	// lis r11,-31955
	ctx.r11.s64 = -2094202880;
	// addi r11,r11,23440
	ctx.r11.s64 = ctx.r11.s64 + 23440;
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

__attribute__((alias("__imp__sub_83159E54"))) PPC_WEAK_FUNC(sub_83159E54);
PPC_FUNC_IMPL(__imp__sub_83159E54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83159E58"))) PPC_WEAK_FUNC(sub_83159E58);
PPC_FUNC_IMPL(__imp__sub_83159E58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// lis r10,-31955
	ctx.r10.s64 = -2094202880;
	// addi r11,r11,15824
	ctx.r11.s64 = ctx.r11.s64 + 15824;
	// addi r10,r10,23456
	ctx.r10.s64 = ctx.r10.s64 + 23456;
	// lvx128 v0,r0,r11
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// stvx128 v0,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83159E74"))) PPC_WEAK_FUNC(sub_83159E74);
PPC_FUNC_IMPL(__imp__sub_83159E74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83159E78"))) PPC_WEAK_FUNC(sub_83159E78);
PPC_FUNC_IMPL(__imp__sub_83159E78) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	PPCVRegister vTemp{};
	// vspltisw v0,0
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_set1_epi32(int(0x0)));
	// lis r11,-31955
	ctx.r11.s64 = -2094202880;
	// li r10,16
	ctx.r10.s64 = 16;
	// addi r11,r11,23472
	ctx.r11.s64 = ctx.r11.s64 + 23472;
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

__attribute__((alias("__imp__sub_83159EB8"))) PPC_WEAK_FUNC(sub_83159EB8);
PPC_FUNC_IMPL(__imp__sub_83159EB8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	PPCVRegister vTemp{};
	// vspltisw v0,0
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_set1_epi32(int(0x0)));
	// lis r11,-31955
	ctx.r11.s64 = -2094202880;
	// addi r11,r11,23536
	ctx.r11.s64 = ctx.r11.s64 + 23536;
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

__attribute__((alias("__imp__sub_83159ED4"))) PPC_WEAK_FUNC(sub_83159ED4);
PPC_FUNC_IMPL(__imp__sub_83159ED4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83159ED8"))) PPC_WEAK_FUNC(sub_83159ED8);
PPC_FUNC_IMPL(__imp__sub_83159ED8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// lis r10,-31955
	ctx.r10.s64 = -2094202880;
	// addi r11,r11,15824
	ctx.r11.s64 = ctx.r11.s64 + 15824;
	// addi r10,r10,23552
	ctx.r10.s64 = ctx.r10.s64 + 23552;
	// lvx128 v0,r0,r11
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// stvx128 v0,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83159EF4"))) PPC_WEAK_FUNC(sub_83159EF4);
PPC_FUNC_IMPL(__imp__sub_83159EF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83159EF8"))) PPC_WEAK_FUNC(sub_83159EF8);
PPC_FUNC_IMPL(__imp__sub_83159EF8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	PPCVRegister vTemp{};
	// vspltisw v0,0
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_set1_epi32(int(0x0)));
	// lis r11,-31955
	ctx.r11.s64 = -2094202880;
	// li r10,16
	ctx.r10.s64 = 16;
	// addi r11,r11,23568
	ctx.r11.s64 = ctx.r11.s64 + 23568;
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

__attribute__((alias("__imp__sub_83159F38"))) PPC_WEAK_FUNC(sub_83159F38);
PPC_FUNC_IMPL(__imp__sub_83159F38) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	PPCVRegister vTemp{};
	// vspltisw v0,0
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_set1_epi32(int(0x0)));
	// lis r11,-31955
	ctx.r11.s64 = -2094202880;
	// addi r11,r11,23632
	ctx.r11.s64 = ctx.r11.s64 + 23632;
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

__attribute__((alias("__imp__sub_83159F54"))) PPC_WEAK_FUNC(sub_83159F54);
PPC_FUNC_IMPL(__imp__sub_83159F54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83159F58"))) PPC_WEAK_FUNC(sub_83159F58);
PPC_FUNC_IMPL(__imp__sub_83159F58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// lis r10,-31955
	ctx.r10.s64 = -2094202880;
	// addi r11,r11,15824
	ctx.r11.s64 = ctx.r11.s64 + 15824;
	// addi r10,r10,23648
	ctx.r10.s64 = ctx.r10.s64 + 23648;
	// lvx128 v0,r0,r11
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// stvx128 v0,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83159F74"))) PPC_WEAK_FUNC(sub_83159F74);
PPC_FUNC_IMPL(__imp__sub_83159F74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83159F78"))) PPC_WEAK_FUNC(sub_83159F78);
PPC_FUNC_IMPL(__imp__sub_83159F78) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	PPCVRegister vTemp{};
	// vspltisw v0,0
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_set1_epi32(int(0x0)));
	// lis r11,-31955
	ctx.r11.s64 = -2094202880;
	// li r10,16
	ctx.r10.s64 = 16;
	// addi r11,r11,23664
	ctx.r11.s64 = ctx.r11.s64 + 23664;
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

__attribute__((alias("__imp__sub_83159FB8"))) PPC_WEAK_FUNC(sub_83159FB8);
PPC_FUNC_IMPL(__imp__sub_83159FB8) {
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
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r11,21472
	ctx.r3.s64 = ctx.r11.s64 + 21472;
	// bl 0x826909a0
	ctx.lr = 0x83159FD4;
	sub_826909A0(ctx, base);
	// lis r11,-31955
	ctx.r11.s64 = -2094202880;
	// stw r3,23728(r11)
	PPC_STORE_U32(ctx.r11.u32 + 23728, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_83159FEC"))) PPC_WEAK_FUNC(sub_83159FEC);
PPC_FUNC_IMPL(__imp__sub_83159FEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_83159FF0"))) PPC_WEAK_FUNC(sub_83159FF0);
PPC_FUNC_IMPL(__imp__sub_83159FF0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	PPCVRegister vTemp{};
	// vspltisw v0,0
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_set1_epi32(int(0x0)));
	// lis r11,-31955
	ctx.r11.s64 = -2094202880;
	// addi r11,r11,23744
	ctx.r11.s64 = ctx.r11.s64 + 23744;
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

__attribute__((alias("__imp__sub_8315A00C"))) PPC_WEAK_FUNC(sub_8315A00C);
PPC_FUNC_IMPL(__imp__sub_8315A00C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8315A010"))) PPC_WEAK_FUNC(sub_8315A010);
PPC_FUNC_IMPL(__imp__sub_8315A010) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// lis r10,-31955
	ctx.r10.s64 = -2094202880;
	// addi r11,r11,15824
	ctx.r11.s64 = ctx.r11.s64 + 15824;
	// addi r10,r10,23760
	ctx.r10.s64 = ctx.r10.s64 + 23760;
	// lvx128 v0,r0,r11
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// stvx128 v0,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8315A02C"))) PPC_WEAK_FUNC(sub_8315A02C);
PPC_FUNC_IMPL(__imp__sub_8315A02C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8315A030"))) PPC_WEAK_FUNC(sub_8315A030);
PPC_FUNC_IMPL(__imp__sub_8315A030) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	PPCVRegister vTemp{};
	// vspltisw v0,0
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_set1_epi32(int(0x0)));
	// lis r11,-31955
	ctx.r11.s64 = -2094202880;
	// li r10,16
	ctx.r10.s64 = 16;
	// addi r11,r11,23776
	ctx.r11.s64 = ctx.r11.s64 + 23776;
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

__attribute__((alias("__imp__sub_8315A070"))) PPC_WEAK_FUNC(sub_8315A070);
PPC_FUNC_IMPL(__imp__sub_8315A070) {
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
	// addi r3,r10,23840
	ctx.r3.s64 = ctx.r10.s64 + 23840;
	// bl 0x822400d8
	ctx.lr = 0x8315A090;
	sub_822400D8(ctx, base);
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// addi r3,r11,23296
	ctx.r3.s64 = ctx.r11.s64 + 23296;
	// bl 0x82fa2318
	ctx.lr = 0x8315A09C;
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

__attribute__((alias("__imp__sub_8315A0AC"))) PPC_WEAK_FUNC(sub_8315A0AC);
PPC_FUNC_IMPL(__imp__sub_8315A0AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8315A0B0"))) PPC_WEAK_FUNC(sub_8315A0B0);
PPC_FUNC_IMPL(__imp__sub_8315A0B0) {
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
	// addi r3,r10,23868
	ctx.r3.s64 = ctx.r10.s64 + 23868;
	// bl 0x822400d8
	ctx.lr = 0x8315A0D0;
	sub_822400D8(ctx, base);
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// addi r3,r11,23320
	ctx.r3.s64 = ctx.r11.s64 + 23320;
	// bl 0x82fa2318
	ctx.lr = 0x8315A0DC;
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

__attribute__((alias("__imp__sub_8315A0EC"))) PPC_WEAK_FUNC(sub_8315A0EC);
PPC_FUNC_IMPL(__imp__sub_8315A0EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8315A0F0"))) PPC_WEAK_FUNC(sub_8315A0F0);
PPC_FUNC_IMPL(__imp__sub_8315A0F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	PPCVRegister vTemp{};
	// vspltisw v0,0
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_set1_epi32(int(0x0)));
	// lis r11,-31955
	ctx.r11.s64 = -2094202880;
	// addi r11,r11,23904
	ctx.r11.s64 = ctx.r11.s64 + 23904;
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

__attribute__((alias("__imp__sub_8315A10C"))) PPC_WEAK_FUNC(sub_8315A10C);
PPC_FUNC_IMPL(__imp__sub_8315A10C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8315A110"))) PPC_WEAK_FUNC(sub_8315A110);
PPC_FUNC_IMPL(__imp__sub_8315A110) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// lis r10,-31955
	ctx.r10.s64 = -2094202880;
	// addi r11,r11,15824
	ctx.r11.s64 = ctx.r11.s64 + 15824;
	// addi r10,r10,23920
	ctx.r10.s64 = ctx.r10.s64 + 23920;
	// lvx128 v0,r0,r11
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// stvx128 v0,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8315A12C"))) PPC_WEAK_FUNC(sub_8315A12C);
PPC_FUNC_IMPL(__imp__sub_8315A12C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8315A130"))) PPC_WEAK_FUNC(sub_8315A130);
PPC_FUNC_IMPL(__imp__sub_8315A130) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	PPCVRegister vTemp{};
	// vspltisw v0,0
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_set1_epi32(int(0x0)));
	// lis r11,-31955
	ctx.r11.s64 = -2094202880;
	// li r10,16
	ctx.r10.s64 = 16;
	// addi r11,r11,23936
	ctx.r11.s64 = ctx.r11.s64 + 23936;
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

__attribute__((alias("__imp__sub_8315A170"))) PPC_WEAK_FUNC(sub_8315A170);
PPC_FUNC_IMPL(__imp__sub_8315A170) {
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
	// addi r3,r10,24000
	ctx.r3.s64 = ctx.r10.s64 + 24000;
	// bl 0x822400d8
	ctx.lr = 0x8315A190;
	sub_822400D8(ctx, base);
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// addi r3,r11,23344
	ctx.r3.s64 = ctx.r11.s64 + 23344;
	// bl 0x82fa2318
	ctx.lr = 0x8315A19C;
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

__attribute__((alias("__imp__sub_8315A1AC"))) PPC_WEAK_FUNC(sub_8315A1AC);
PPC_FUNC_IMPL(__imp__sub_8315A1AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8315A1B0"))) PPC_WEAK_FUNC(sub_8315A1B0);
PPC_FUNC_IMPL(__imp__sub_8315A1B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	PPCVRegister vTemp{};
	// vspltisw v0,0
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_set1_epi32(int(0x0)));
	// lis r11,-31955
	ctx.r11.s64 = -2094202880;
	// addi r11,r11,24032
	ctx.r11.s64 = ctx.r11.s64 + 24032;
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

__attribute__((alias("__imp__sub_8315A1CC"))) PPC_WEAK_FUNC(sub_8315A1CC);
PPC_FUNC_IMPL(__imp__sub_8315A1CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8315A1D0"))) PPC_WEAK_FUNC(sub_8315A1D0);
PPC_FUNC_IMPL(__imp__sub_8315A1D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// lis r10,-31955
	ctx.r10.s64 = -2094202880;
	// addi r11,r11,15824
	ctx.r11.s64 = ctx.r11.s64 + 15824;
	// addi r10,r10,24048
	ctx.r10.s64 = ctx.r10.s64 + 24048;
	// lvx128 v0,r0,r11
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// stvx128 v0,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8315A1EC"))) PPC_WEAK_FUNC(sub_8315A1EC);
PPC_FUNC_IMPL(__imp__sub_8315A1EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8315A1F0"))) PPC_WEAK_FUNC(sub_8315A1F0);
PPC_FUNC_IMPL(__imp__sub_8315A1F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	PPCVRegister vTemp{};
	// vspltisw v0,0
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_set1_epi32(int(0x0)));
	// lis r11,-31955
	ctx.r11.s64 = -2094202880;
	// li r10,16
	ctx.r10.s64 = 16;
	// addi r11,r11,24064
	ctx.r11.s64 = ctx.r11.s64 + 24064;
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

__attribute__((alias("__imp__sub_8315A230"))) PPC_WEAK_FUNC(sub_8315A230);
PPC_FUNC_IMPL(__imp__sub_8315A230) {
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
	// addi r3,r10,24128
	ctx.r3.s64 = ctx.r10.s64 + 24128;
	// bl 0x822400d8
	ctx.lr = 0x8315A250;
	sub_822400D8(ctx, base);
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// addi r3,r11,23368
	ctx.r3.s64 = ctx.r11.s64 + 23368;
	// bl 0x82fa2318
	ctx.lr = 0x8315A25C;
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

__attribute__((alias("__imp__sub_8315A26C"))) PPC_WEAK_FUNC(sub_8315A26C);
PPC_FUNC_IMPL(__imp__sub_8315A26C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8315A270"))) PPC_WEAK_FUNC(sub_8315A270);
PPC_FUNC_IMPL(__imp__sub_8315A270) {
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
	// addi r3,r10,24156
	ctx.r3.s64 = ctx.r10.s64 + 24156;
	// bl 0x822400d8
	ctx.lr = 0x8315A290;
	sub_822400D8(ctx, base);
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// addi r3,r11,23392
	ctx.r3.s64 = ctx.r11.s64 + 23392;
	// bl 0x82fa2318
	ctx.lr = 0x8315A29C;
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

__attribute__((alias("__imp__sub_8315A2AC"))) PPC_WEAK_FUNC(sub_8315A2AC);
PPC_FUNC_IMPL(__imp__sub_8315A2AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8315A2B0"))) PPC_WEAK_FUNC(sub_8315A2B0);
PPC_FUNC_IMPL(__imp__sub_8315A2B0) {
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
	// addi r3,r10,24184
	ctx.r3.s64 = ctx.r10.s64 + 24184;
	// bl 0x822400d8
	ctx.lr = 0x8315A2D0;
	sub_822400D8(ctx, base);
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// addi r3,r11,23416
	ctx.r3.s64 = ctx.r11.s64 + 23416;
	// bl 0x82fa2318
	ctx.lr = 0x8315A2DC;
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

__attribute__((alias("__imp__sub_8315A2EC"))) PPC_WEAK_FUNC(sub_8315A2EC);
PPC_FUNC_IMPL(__imp__sub_8315A2EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8315A2F0"))) PPC_WEAK_FUNC(sub_8315A2F0);
PPC_FUNC_IMPL(__imp__sub_8315A2F0) {
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
	// addi r3,r10,24212
	ctx.r3.s64 = ctx.r10.s64 + 24212;
	// bl 0x822400d8
	ctx.lr = 0x8315A310;
	sub_822400D8(ctx, base);
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// addi r3,r11,23440
	ctx.r3.s64 = ctx.r11.s64 + 23440;
	// bl 0x82fa2318
	ctx.lr = 0x8315A31C;
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

__attribute__((alias("__imp__sub_8315A32C"))) PPC_WEAK_FUNC(sub_8315A32C);
PPC_FUNC_IMPL(__imp__sub_8315A32C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8315A330"))) PPC_WEAK_FUNC(sub_8315A330);
PPC_FUNC_IMPL(__imp__sub_8315A330) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	PPCVRegister vTemp{};
	// vspltisw v0,0
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_set1_epi32(int(0x0)));
	// lis r11,-31955
	ctx.r11.s64 = -2094202880;
	// addi r11,r11,24240
	ctx.r11.s64 = ctx.r11.s64 + 24240;
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

__attribute__((alias("__imp__sub_8315A34C"))) PPC_WEAK_FUNC(sub_8315A34C);
PPC_FUNC_IMPL(__imp__sub_8315A34C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8315A350"))) PPC_WEAK_FUNC(sub_8315A350);
PPC_FUNC_IMPL(__imp__sub_8315A350) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// lis r10,-31955
	ctx.r10.s64 = -2094202880;
	// addi r11,r11,15824
	ctx.r11.s64 = ctx.r11.s64 + 15824;
	// addi r10,r10,24256
	ctx.r10.s64 = ctx.r10.s64 + 24256;
	// lvx128 v0,r0,r11
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// stvx128 v0,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8315A36C"))) PPC_WEAK_FUNC(sub_8315A36C);
PPC_FUNC_IMPL(__imp__sub_8315A36C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8315A370"))) PPC_WEAK_FUNC(sub_8315A370);
PPC_FUNC_IMPL(__imp__sub_8315A370) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	PPCVRegister vTemp{};
	// vspltisw v0,0
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_set1_epi32(int(0x0)));
	// lis r11,-31955
	ctx.r11.s64 = -2094202880;
	// li r10,16
	ctx.r10.s64 = 16;
	// addi r11,r11,24272
	ctx.r11.s64 = ctx.r11.s64 + 24272;
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

__attribute__((alias("__imp__sub_8315A3B0"))) PPC_WEAK_FUNC(sub_8315A3B0);
PPC_FUNC_IMPL(__imp__sub_8315A3B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31968
	ctx.r11.s64 = -2095054848;
	// li r5,60
	ctx.r5.s64 = 60;
	// addi r31,r11,24856
	ctx.r31.s64 = ctx.r11.s64 + 24856;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,20
	ctx.r3.s64 = ctx.r31.s64 + 20;
	// bl 0x82fa7cf0
	ctx.lr = 0x8315A3D8;
	sub_82FA7CF0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-31977
	ctx.r10.s64 = -2095644672;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// stw r11,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r11.u32);
	// addi r3,r10,23464
	ctx.r3.s64 = ctx.r10.s64 + 23464;
	// std r11,128(r31)
	PPC_STORE_U64(ctx.r31.u32 + 128, ctx.r11.u64);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// std r11,136(r31)
	PPC_STORE_U64(ctx.r31.u32 + 136, ctx.r11.u64);
	// std r11,144(r31)
	PPC_STORE_U64(ctx.r31.u32 + 144, ctx.r11.u64);
	// addi r11,r31,128
	ctx.r11.s64 = ctx.r31.s64 + 128;
	// bl 0x82fa2318
	ctx.lr = 0x8315A404;
	sub_82FA2318(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8315A418"))) PPC_WEAK_FUNC(sub_8315A418);
PPC_FUNC_IMPL(__imp__sub_8315A418) {
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
	// addi r3,r10,24336
	ctx.r3.s64 = ctx.r10.s64 + 24336;
	// bl 0x822400d8
	ctx.lr = 0x8315A438;
	sub_822400D8(ctx, base);
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// addi r3,r11,23528
	ctx.r3.s64 = ctx.r11.s64 + 23528;
	// bl 0x82fa2318
	ctx.lr = 0x8315A444;
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

__attribute__((alias("__imp__sub_8315A454"))) PPC_WEAK_FUNC(sub_8315A454);
PPC_FUNC_IMPL(__imp__sub_8315A454) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8315A458"))) PPC_WEAK_FUNC(sub_8315A458);
PPC_FUNC_IMPL(__imp__sub_8315A458) {
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
	// addi r3,r10,24364
	ctx.r3.s64 = ctx.r10.s64 + 24364;
	// bl 0x822400d8
	ctx.lr = 0x8315A478;
	sub_822400D8(ctx, base);
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// addi r3,r11,23552
	ctx.r3.s64 = ctx.r11.s64 + 23552;
	// bl 0x82fa2318
	ctx.lr = 0x8315A484;
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

__attribute__((alias("__imp__sub_8315A494"))) PPC_WEAK_FUNC(sub_8315A494);
PPC_FUNC_IMPL(__imp__sub_8315A494) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8315A498"))) PPC_WEAK_FUNC(sub_8315A498);
PPC_FUNC_IMPL(__imp__sub_8315A498) {
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
	// addi r3,r10,24392
	ctx.r3.s64 = ctx.r10.s64 + 24392;
	// bl 0x822400d8
	ctx.lr = 0x8315A4B8;
	sub_822400D8(ctx, base);
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// addi r3,r11,23576
	ctx.r3.s64 = ctx.r11.s64 + 23576;
	// bl 0x82fa2318
	ctx.lr = 0x8315A4C4;
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

__attribute__((alias("__imp__sub_8315A4D4"))) PPC_WEAK_FUNC(sub_8315A4D4);
PPC_FUNC_IMPL(__imp__sub_8315A4D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8315A4D8"))) PPC_WEAK_FUNC(sub_8315A4D8);
PPC_FUNC_IMPL(__imp__sub_8315A4D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// addi r3,r11,23600
	ctx.r3.s64 = ctx.r11.s64 + 23600;
	// b 0x82fa2318
	sub_82FA2318(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8315A4E4"))) PPC_WEAK_FUNC(sub_8315A4E4);
PPC_FUNC_IMPL(__imp__sub_8315A4E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8315A4E8"))) PPC_WEAK_FUNC(sub_8315A4E8);
PPC_FUNC_IMPL(__imp__sub_8315A4E8) {
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
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r11,26796
	ctx.r3.s64 = ctx.r11.s64 + 26796;
	// bl 0x826909a0
	ctx.lr = 0x8315A504;
	sub_826909A0(ctx, base);
	// lis r11,-31955
	ctx.r11.s64 = -2094202880;
	// stw r3,24424(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24424, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8315A51C"))) PPC_WEAK_FUNC(sub_8315A51C);
PPC_FUNC_IMPL(__imp__sub_8315A51C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8315A520"))) PPC_WEAK_FUNC(sub_8315A520);
PPC_FUNC_IMPL(__imp__sub_8315A520) {
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
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r11,26856
	ctx.r3.s64 = ctx.r11.s64 + 26856;
	// bl 0x826909a0
	ctx.lr = 0x8315A53C;
	sub_826909A0(ctx, base);
	// lis r11,-31955
	ctx.r11.s64 = -2094202880;
	// stw r3,24428(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24428, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8315A554"))) PPC_WEAK_FUNC(sub_8315A554);
PPC_FUNC_IMPL(__imp__sub_8315A554) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8315A558"))) PPC_WEAK_FUNC(sub_8315A558);
PPC_FUNC_IMPL(__imp__sub_8315A558) {
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
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r11,26928
	ctx.r3.s64 = ctx.r11.s64 + 26928;
	// bl 0x826909a0
	ctx.lr = 0x8315A574;
	sub_826909A0(ctx, base);
	// lis r11,-31955
	ctx.r11.s64 = -2094202880;
	// stw r3,24432(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24432, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8315A58C"))) PPC_WEAK_FUNC(sub_8315A58C);
PPC_FUNC_IMPL(__imp__sub_8315A58C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8315A590"))) PPC_WEAK_FUNC(sub_8315A590);
PPC_FUNC_IMPL(__imp__sub_8315A590) {
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
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r11,26984
	ctx.r3.s64 = ctx.r11.s64 + 26984;
	// bl 0x826909a0
	ctx.lr = 0x8315A5AC;
	sub_826909A0(ctx, base);
	// lis r11,-31955
	ctx.r11.s64 = -2094202880;
	// stw r3,24436(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24436, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8315A5C4"))) PPC_WEAK_FUNC(sub_8315A5C4);
PPC_FUNC_IMPL(__imp__sub_8315A5C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8315A5C8"))) PPC_WEAK_FUNC(sub_8315A5C8);
PPC_FUNC_IMPL(__imp__sub_8315A5C8) {
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
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r11,27036
	ctx.r3.s64 = ctx.r11.s64 + 27036;
	// bl 0x826909a0
	ctx.lr = 0x8315A5E4;
	sub_826909A0(ctx, base);
	// lis r11,-31955
	ctx.r11.s64 = -2094202880;
	// stw r3,24440(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24440, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8315A5FC"))) PPC_WEAK_FUNC(sub_8315A5FC);
PPC_FUNC_IMPL(__imp__sub_8315A5FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8315A600"))) PPC_WEAK_FUNC(sub_8315A600);
PPC_FUNC_IMPL(__imp__sub_8315A600) {
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
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r11,27088
	ctx.r3.s64 = ctx.r11.s64 + 27088;
	// bl 0x826909a0
	ctx.lr = 0x8315A61C;
	sub_826909A0(ctx, base);
	// lis r11,-31955
	ctx.r11.s64 = -2094202880;
	// stw r3,24444(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24444, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8315A634"))) PPC_WEAK_FUNC(sub_8315A634);
PPC_FUNC_IMPL(__imp__sub_8315A634) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8315A638"))) PPC_WEAK_FUNC(sub_8315A638);
PPC_FUNC_IMPL(__imp__sub_8315A638) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x8315A640;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31955
	ctx.r11.s64 = -2094202880;
	// li r29,3
	ctx.r29.s64 = 3;
	// addi r28,r11,24448
	ctx.r28.s64 = ctx.r11.s64 + 24448;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r31,r28,80
	ctx.r31.s64 = ctx.r28.s64 + 80;
loc_8315A658:
	// stw r30,-8(r31)
	PPC_STORE_U32(ctx.r31.u32 + -8, ctx.r30.u32);
	// addi r3,r31,-8
	ctx.r3.s64 = ctx.r31.s64 + -8;
	// stw r30,-4(r31)
	PPC_STORE_U32(ctx.r31.u32 + -4, ctx.r30.u32);
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// stw r30,-40(r31)
	PPC_STORE_U32(ctx.r31.u32 + -40, ctx.r30.u32);
	// stw r30,-36(r31)
	PPC_STORE_U32(ctx.r31.u32 + -36, ctx.r30.u32);
	// stw r30,-32(r31)
	PPC_STORE_U32(ctx.r31.u32 + -32, ctx.r30.u32);
	// stw r30,-28(r31)
	PPC_STORE_U32(ctx.r31.u32 + -28, ctx.r30.u32);
	// stw r30,-24(r31)
	PPC_STORE_U32(ctx.r31.u32 + -24, ctx.r30.u32);
	// stw r30,-20(r31)
	PPC_STORE_U32(ctx.r31.u32 + -20, ctx.r30.u32);
	// stw r30,-16(r31)
	PPC_STORE_U32(ctx.r31.u32 + -16, ctx.r30.u32);
	// stw r30,-12(r31)
	PPC_STORE_U32(ctx.r31.u32 + -12, ctx.r30.u32);
	// bl 0x822f7140
	ctx.lr = 0x8315A68C;
	sub_822F7140(ctx, base);
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r31,r31,48
	ctx.r31.s64 = ctx.r31.s64 + 48;
	// bge 0x8315a658
	if (!ctx.cr0.lt) goto loc_8315A658;
	// stw r30,232(r28)
	PPC_STORE_U32(ctx.r28.u32 + 232, ctx.r30.u32);
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// addi r3,r11,23704
	ctx.r3.s64 = ctx.r11.s64 + 23704;
	// bl 0x82fa2318
	ctx.lr = 0x8315A6A8;
	sub_82FA2318(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8315A6B0"))) PPC_WEAK_FUNC(sub_8315A6B0);
PPC_FUNC_IMPL(__imp__sub_8315A6B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,27348
	ctx.r4.s64 = ctx.r11.s64 + 27348;
	// bl 0x822400d8
	ctx.lr = 0x8315A6CC;
	sub_822400D8(ctx, base);
	// lis r11,-31955
	ctx.r11.s64 = -2094202880;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r3,r11,24752
	ctx.r3.s64 = ctx.r11.s64 + 24752;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82248c00
	ctx.lr = 0x8315A6F4;
	sub_82248C00(ctx, base);
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x8315a708
	if (ctx.cr6.lt) goto loc_8315A708;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82691540
	ctx.lr = 0x8315A708;
	sub_82691540(ctx, base);
loc_8315A708:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,15
	ctx.r10.s64 = 15;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// lis r9,-31977
	ctx.r9.s64 = -2095644672;
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// addi r3,r9,23856
	ctx.r3.s64 = ctx.r9.s64 + 23856;
	// bl 0x82fa2318
	ctx.lr = 0x8315A728;
	sub_82FA2318(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8315A738"))) PPC_WEAK_FUNC(sub_8315A738);
PPC_FUNC_IMPL(__imp__sub_8315A738) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,27596
	ctx.r4.s64 = ctx.r11.s64 + 27596;
	// bl 0x822400d8
	ctx.lr = 0x8315A75C;
	sub_822400D8(ctx, base);
	// lis r7,-31955
	ctx.r7.s64 = -2094202880;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r31,r7,24824
	ctx.r31.s64 = ctx.r7.s64 + 24824;
	// li r11,15
	ctx.r11.s64 = 15;
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// stw r30,24824(r7)
	PPC_STORE_U32(ctx.r7.u32 + 24824, ctx.r30.u32);
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r30,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r30.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// stb r30,4(r31)
	PPC_STORE_U8(ctx.r31.u32 + 4, ctx.r30.u8);
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// bl 0x822401e0
	ctx.lr = 0x8315A79C;
	sub_822401E0(ctx, base);
	// lis r11,-32171
	ctx.r11.s64 = -2108358656;
	// lis r10,-32219
	ctx.r10.s64 = -2111504384;
	// stw r30,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r30.u32);
	// addi r11,r11,-5240
	ctx.r11.s64 = ctx.r11.s64 + -5240;
	// addi r10,r10,-23120
	ctx.r10.s64 = ctx.r10.s64 + -23120;
	// lis r7,-32171
	ctx.r7.s64 = -2108358656;
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// lis r8,-32171
	ctx.r8.s64 = -2108358656;
	// stw r10,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r10.u32);
	// lis r9,-32219
	ctx.r9.s64 = -2111504384;
	// addi r11,r7,-5144
	ctx.r11.s64 = ctx.r7.s64 + -5144;
	// addi r9,r9,-23032
	ctx.r9.s64 = ctx.r9.s64 + -23032;
	// addi r10,r8,-5000
	ctx.r10.s64 = ctx.r8.s64 + -5000;
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// stw r9,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r9.u32);
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// stw r10,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r10.u32);
	// bl 0x8254dc90
	ctx.lr = 0x8315A7E4;
	sub_8254DC90(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8254dd48
	ctx.lr = 0x8315A7EC;
	sub_8254DD48(ctx, base);
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x8315a800
	if (ctx.cr6.lt) goto loc_8315A800;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82691540
	ctx.lr = 0x8315A800;
	sub_82691540(ctx, base);
loc_8315A800:
	// li r11,15
	ctx.r11.s64 = 15;
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// stb r30,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r30.u8);
	// lis r10,-31977
	ctx.r10.s64 = -2095644672;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// addi r3,r10,24088
	ctx.r3.s64 = ctx.r10.s64 + 24088;
	// bl 0x82fa2318
	ctx.lr = 0x8315A81C;
	sub_82FA2318(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8315A834"))) PPC_WEAK_FUNC(sub_8315A834);
PPC_FUNC_IMPL(__imp__sub_8315A834) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8315A838"))) PPC_WEAK_FUNC(sub_8315A838);
PPC_FUNC_IMPL(__imp__sub_8315A838) {
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
	// addi r4,r11,31204
	ctx.r4.s64 = ctx.r11.s64 + 31204;
	// addi r3,r10,24880
	ctx.r3.s64 = ctx.r10.s64 + 24880;
	// bl 0x822400d8
	ctx.lr = 0x8315A858;
	sub_822400D8(ctx, base);
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// addi r3,r11,24256
	ctx.r3.s64 = ctx.r11.s64 + 24256;
	// bl 0x82fa2318
	ctx.lr = 0x8315A864;
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

__attribute__((alias("__imp__sub_8315A874"))) PPC_WEAK_FUNC(sub_8315A874);
PPC_FUNC_IMPL(__imp__sub_8315A874) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8315A878"))) PPC_WEAK_FUNC(sub_8315A878);
PPC_FUNC_IMPL(__imp__sub_8315A878) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31968
	ctx.r11.s64 = -2095054848;
	// lwz r31,25008(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25008);
	// bl 0x82550908
	ctx.lr = 0x8315A894;
	sub_82550908(ctx, base);
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x82550cc0
	ctx.lr = 0x8315A8A0;
	sub_82550CC0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8315A8B4"))) PPC_WEAK_FUNC(sub_8315A8B4);
PPC_FUNC_IMPL(__imp__sub_8315A8B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8315A8B8"))) PPC_WEAK_FUNC(sub_8315A8B8);
PPC_FUNC_IMPL(__imp__sub_8315A8B8) {
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
	// li r3,7
	ctx.r3.s64 = 7;
	// bl 0x82920158
	ctx.lr = 0x8315A8CC;
	sub_82920158(ctx, base);
	// lis r11,-31955
	ctx.r11.s64 = -2094202880;
	// stw r3,24908(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24908, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8315A8E4"))) PPC_WEAK_FUNC(sub_8315A8E4);
PPC_FUNC_IMPL(__imp__sub_8315A8E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8315A8E8"))) PPC_WEAK_FUNC(sub_8315A8E8);
PPC_FUNC_IMPL(__imp__sub_8315A8E8) {
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
	// li r3,7
	ctx.r3.s64 = 7;
	// bl 0x82920158
	ctx.lr = 0x8315A8FC;
	sub_82920158(ctx, base);
	// lis r11,-31955
	ctx.r11.s64 = -2094202880;
	// stw r3,24912(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24912, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8315A914"))) PPC_WEAK_FUNC(sub_8315A914);
PPC_FUNC_IMPL(__imp__sub_8315A914) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8315A918"))) PPC_WEAK_FUNC(sub_8315A918);
PPC_FUNC_IMPL(__imp__sub_8315A918) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r4,r11,28120
	ctx.r4.s64 = ctx.r11.s64 + 28120;
	// bl 0x822400d8
	ctx.lr = 0x8315A93C;
	sub_822400D8(ctx, base);
	// lis r11,-31955
	ctx.r11.s64 = -2094202880;
	// lis r10,-32171
	ctx.r10.s64 = -2108358656;
	// addi r30,r11,24920
	ctx.r30.s64 = ctx.r11.s64 + 24920;
	// lis r9,-32171
	ctx.r9.s64 = -2108358656;
	// lis r8,-32217
	ctx.r8.s64 = -2111373312;
	// lis r7,-32171
	ctx.r7.s64 = -2108358656;
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// li r31,0
	ctx.r31.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r10,r10,80
	ctx.r10.s64 = ctx.r10.s64 + 80;
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// addi r9,r9,-48
	ctx.r9.s64 = ctx.r9.s64 + -48;
	// addi r8,r8,-30768
	ctx.r8.s64 = ctx.r8.s64 + -30768;
	// addi r7,r7,-184
	ctx.r7.s64 = ctx.r7.s64 + -184;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// bl 0x825503f8
	ctx.lr = 0x8315A988;
	sub_825503F8(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82f91940
	ctx.lr = 0x8315A990;
	sub_82F91940(ctx, base);
	// stw r31,80(r30)
	PPC_STORE_U32(ctx.r30.u32 + 80, ctx.r31.u32);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// bl 0x82550908
	ctx.lr = 0x8315A99C;
	sub_82550908(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82550a30
	ctx.lr = 0x8315A9A8;
	sub_82550A30(ctx, base);
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x8315a9bc
	if (ctx.cr6.lt) goto loc_8315A9BC;
	// lwz r3,128(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// bl 0x82691540
	ctx.lr = 0x8315A9BC;
	sub_82691540(ctx, base);
loc_8315A9BC:
	// li r11,15
	ctx.r11.s64 = 15;
	// stw r31,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r31.u32);
	// stb r31,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r31.u8);
	// lis r10,-31977
	ctx.r10.s64 = -2095644672;
	// stw r11,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r11.u32);
	// addi r3,r10,24280
	ctx.r3.s64 = ctx.r10.s64 + 24280;
	// bl 0x82fa2318
	ctx.lr = 0x8315A9D8;
	sub_82FA2318(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8315A9F0"))) PPC_WEAK_FUNC(sub_8315A9F0);
PPC_FUNC_IMPL(__imp__sub_8315A9F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r4,r11,28300
	ctx.r4.s64 = ctx.r11.s64 + 28300;
	// bl 0x822400d8
	ctx.lr = 0x8315AA14;
	sub_822400D8(ctx, base);
	// lis r11,-31955
	ctx.r11.s64 = -2094202880;
	// lis r10,-32171
	ctx.r10.s64 = -2108358656;
	// addi r30,r11,25008
	ctx.r30.s64 = ctx.r11.s64 + 25008;
	// lis r9,-32171
	ctx.r9.s64 = -2108358656;
	// lis r8,-32217
	ctx.r8.s64 = -2111373312;
	// lis r7,-32171
	ctx.r7.s64 = -2108358656;
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// li r31,0
	ctx.r31.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r10,r10,8688
	ctx.r10.s64 = ctx.r10.s64 + 8688;
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// addi r9,r9,8584
	ctx.r9.s64 = ctx.r9.s64 + 8584;
	// addi r8,r8,-30768
	ctx.r8.s64 = ctx.r8.s64 + -30768;
	// addi r7,r7,8512
	ctx.r7.s64 = ctx.r7.s64 + 8512;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r5,3
	ctx.r5.s64 = 3;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// bl 0x825503f8
	ctx.lr = 0x8315AA60;
	sub_825503F8(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82f91940
	ctx.lr = 0x8315AA68;
	sub_82F91940(ctx, base);
	// stw r31,80(r30)
	PPC_STORE_U32(ctx.r30.u32 + 80, ctx.r31.u32);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// bl 0x82550908
	ctx.lr = 0x8315AA74;
	sub_82550908(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82550a30
	ctx.lr = 0x8315AA80;
	sub_82550A30(ctx, base);
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x8315aa94
	if (ctx.cr6.lt) goto loc_8315AA94;
	// lwz r3,128(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// bl 0x82691540
	ctx.lr = 0x8315AA94;
	sub_82691540(ctx, base);
loc_8315AA94:
	// li r11,15
	ctx.r11.s64 = 15;
	// stw r31,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r31.u32);
	// stb r31,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r31.u8);
	// lis r10,-31977
	ctx.r10.s64 = -2095644672;
	// stw r11,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r11.u32);
	// addi r3,r10,24376
	ctx.r3.s64 = ctx.r10.s64 + 24376;
	// bl 0x82fa2318
	ctx.lr = 0x8315AAB0;
	sub_82FA2318(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8315AAC8"))) PPC_WEAK_FUNC(sub_8315AAC8);
PPC_FUNC_IMPL(__imp__sub_8315AAC8) {
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
	// addi r4,r11,31204
	ctx.r4.s64 = ctx.r11.s64 + 31204;
	// addi r3,r10,25152
	ctx.r3.s64 = ctx.r10.s64 + 25152;
	// bl 0x822400d8
	ctx.lr = 0x8315AAE8;
	sub_822400D8(ctx, base);
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// addi r3,r11,24624
	ctx.r3.s64 = ctx.r11.s64 + 24624;
	// bl 0x82fa2318
	ctx.lr = 0x8315AAF4;
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

__attribute__((alias("__imp__sub_8315AB04"))) PPC_WEAK_FUNC(sub_8315AB04);
PPC_FUNC_IMPL(__imp__sub_8315AB04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8315AB08"))) PPC_WEAK_FUNC(sub_8315AB08);
PPC_FUNC_IMPL(__imp__sub_8315AB08) {
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
	// addi r4,r11,31216
	ctx.r4.s64 = ctx.r11.s64 + 31216;
	// addi r3,r10,25124
	ctx.r3.s64 = ctx.r10.s64 + 25124;
	// bl 0x822400d8
	ctx.lr = 0x8315AB28;
	sub_822400D8(ctx, base);
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// addi r3,r11,24648
	ctx.r3.s64 = ctx.r11.s64 + 24648;
	// bl 0x82fa2318
	ctx.lr = 0x8315AB34;
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

__attribute__((alias("__imp__sub_8315AB44"))) PPC_WEAK_FUNC(sub_8315AB44);
PPC_FUNC_IMPL(__imp__sub_8315AB44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8315AB48"))) PPC_WEAK_FUNC(sub_8315AB48);
PPC_FUNC_IMPL(__imp__sub_8315AB48) {
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
	// addi r4,r11,31236
	ctx.r4.s64 = ctx.r11.s64 + 31236;
	// addi r3,r10,25096
	ctx.r3.s64 = ctx.r10.s64 + 25096;
	// bl 0x822400d8
	ctx.lr = 0x8315AB68;
	sub_822400D8(ctx, base);
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// addi r3,r11,24672
	ctx.r3.s64 = ctx.r11.s64 + 24672;
	// bl 0x82fa2318
	ctx.lr = 0x8315AB74;
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

__attribute__((alias("__imp__sub_8315AB84"))) PPC_WEAK_FUNC(sub_8315AB84);
PPC_FUNC_IMPL(__imp__sub_8315AB84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8315AB88"))) PPC_WEAK_FUNC(sub_8315AB88);
PPC_FUNC_IMPL(__imp__sub_8315AB88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r4,r11,29068
	ctx.r4.s64 = ctx.r11.s64 + 29068;
	// bl 0x822400d8
	ctx.lr = 0x8315ABAC;
	sub_822400D8(ctx, base);
	// lis r11,-31955
	ctx.r11.s64 = -2094202880;
	// lis r10,-32171
	ctx.r10.s64 = -2108358656;
	// addi r30,r11,25184
	ctx.r30.s64 = ctx.r11.s64 + 25184;
	// lis r9,-32171
	ctx.r9.s64 = -2108358656;
	// lis r8,-32217
	ctx.r8.s64 = -2111373312;
	// lis r7,-32171
	ctx.r7.s64 = -2108358656;
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// li r31,0
	ctx.r31.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r10,r10,19312
	ctx.r10.s64 = ctx.r10.s64 + 19312;
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// addi r9,r9,19208
	ctx.r9.s64 = ctx.r9.s64 + 19208;
	// addi r8,r8,-30768
	ctx.r8.s64 = ctx.r8.s64 + -30768;
	// addi r7,r7,19056
	ctx.r7.s64 = ctx.r7.s64 + 19056;
	// li r6,50
	ctx.r6.s64 = 50;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// bl 0x825503f8
	ctx.lr = 0x8315ABF8;
	sub_825503F8(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82f91940
	ctx.lr = 0x8315AC00;
	sub_82F91940(ctx, base);
	// stw r31,80(r30)
	PPC_STORE_U32(ctx.r30.u32 + 80, ctx.r31.u32);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// bl 0x82550908
	ctx.lr = 0x8315AC0C;
	sub_82550908(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82550a30
	ctx.lr = 0x8315AC18;
	sub_82550A30(ctx, base);
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x8315ac2c
	if (ctx.cr6.lt) goto loc_8315AC2C;
	// lwz r3,128(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// bl 0x82691540
	ctx.lr = 0x8315AC2C;
	sub_82691540(ctx, base);
loc_8315AC2C:
	// li r11,15
	ctx.r11.s64 = 15;
	// stw r31,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r31.u32);
	// stb r31,128(r1)
	PPC_STORE_U8(ctx.r1.u32 + 128, ctx.r31.u8);
	// lis r10,-31977
	ctx.r10.s64 = -2095644672;
	// stw r11,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r11.u32);
	// addi r3,r10,24696
	ctx.r3.s64 = ctx.r10.s64 + 24696;
	// bl 0x82fa2318
	ctx.lr = 0x8315AC48;
	sub_82FA2318(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8315AC60"))) PPC_WEAK_FUNC(sub_8315AC60);
PPC_FUNC_IMPL(__imp__sub_8315AC60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31968
	ctx.r11.s64 = -2095054848;
	// lwz r31,25016(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 25016);
	// bl 0x82550908
	ctx.lr = 0x8315AC7C;
	sub_82550908(ctx, base);
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x82550cc0
	ctx.lr = 0x8315AC88;
	sub_82550CC0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8315AC9C"))) PPC_WEAK_FUNC(sub_8315AC9C);
PPC_FUNC_IMPL(__imp__sub_8315AC9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8315ACA0"))) PPC_WEAK_FUNC(sub_8315ACA0);
PPC_FUNC_IMPL(__imp__sub_8315ACA0) {
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
	// li r3,1000
	ctx.r3.s64 = 1000;
	// bl 0x82920158
	ctx.lr = 0x8315ACB4;
	sub_82920158(ctx, base);
	// lis r11,-31955
	ctx.r11.s64 = -2094202880;
	// stw r3,25272(r11)
	PPC_STORE_U32(ctx.r11.u32 + 25272, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8315ACCC"))) PPC_WEAK_FUNC(sub_8315ACCC);
PPC_FUNC_IMPL(__imp__sub_8315ACCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8315ACD0"))) PPC_WEAK_FUNC(sub_8315ACD0);
PPC_FUNC_IMPL(__imp__sub_8315ACD0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31955
	ctx.r11.s64 = -2094202880;
	// addi r31,r11,25280
	ctx.r31.s64 = ctx.r11.s64 + 25280;
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// bl 0x8255ab70
	ctx.lr = 0x8315ACF4;
	sub_8255AB70(ctx, base);
	// addi r3,r31,20
	ctx.r3.s64 = ctx.r31.s64 + 20;
	// bl 0x8255ab70
	ctx.lr = 0x8315ACFC;
	sub_8255AB70(ctx, base);
	// li r5,300
	ctx.r5.s64 = 300;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,36
	ctx.r3.s64 = ctx.r31.s64 + 36;
	// bl 0x82fa7cf0
	ctx.lr = 0x8315AD0C;
	sub_82FA7CF0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r31,336
	ctx.r10.s64 = ctx.r31.s64 + 336;
	// std r11,336(r31)
	PPC_STORE_U64(ctx.r31.u32 + 336, ctx.r11.u64);
	// li r30,2
	ctx.r30.s64 = 2;
	// std r11,344(r31)
	PPC_STORE_U64(ctx.r31.u32 + 344, ctx.r11.u64);
	// std r11,352(r31)
	PPC_STORE_U64(ctx.r31.u32 + 352, ctx.r11.u64);
	// std r11,360(r31)
	PPC_STORE_U64(ctx.r31.u32 + 360, ctx.r11.u64);
	// addi r31,r31,388
	ctx.r31.s64 = ctx.r31.s64 + 388;
loc_8315AD2C:
	// addi r3,r31,-16
	ctx.r3.s64 = ctx.r31.s64 + -16;
	// bl 0x8255ab70
	ctx.lr = 0x8315AD34;
	sub_8255AB70(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8255ab70
	ctx.lr = 0x8315AD3C;
	sub_8255AB70(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r31,r31,368
	ctx.r31.s64 = ctx.r31.s64 + 368;
	// bge 0x8315ad2c
	if (!ctx.cr0.lt) goto loc_8315AD2C;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// addi r3,r11,24880
	ctx.r3.s64 = ctx.r11.s64 + 24880;
	// bl 0x82fa2318
	ctx.lr = 0x8315AD54;
	sub_82FA2318(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8315AD6C"))) PPC_WEAK_FUNC(sub_8315AD6C);
PPC_FUNC_IMPL(__imp__sub_8315AD6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8315AD70"))) PPC_WEAK_FUNC(sub_8315AD70);
PPC_FUNC_IMPL(__imp__sub_8315AD70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-31955
	ctx.r11.s64 = -2094202880;
	// li r10,6
	ctx.r10.s64 = 6;
	// addi r11,r11,26752
	ctx.r11.s64 = ctx.r11.s64 + 26752;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8315AD88:
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x8315ad88
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8315AD88;
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// addi r3,r11,24984
	ctx.r3.s64 = ctx.r11.s64 + 24984;
	// b 0x82fa2318
	sub_82FA2318(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8315AD9C"))) PPC_WEAK_FUNC(sub_8315AD9C);
PPC_FUNC_IMPL(__imp__sub_8315AD9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8315ADA0"))) PPC_WEAK_FUNC(sub_8315ADA0);
PPC_FUNC_IMPL(__imp__sub_8315ADA0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// addi r3,r11,25080
	ctx.r3.s64 = ctx.r11.s64 + 25080;
	// b 0x82fa2318
	sub_82FA2318(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8315ADAC"))) PPC_WEAK_FUNC(sub_8315ADAC);
PPC_FUNC_IMPL(__imp__sub_8315ADAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8315ADB0"))) PPC_WEAK_FUNC(sub_8315ADB0);
PPC_FUNC_IMPL(__imp__sub_8315ADB0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// addi r3,r11,25096
	ctx.r3.s64 = ctx.r11.s64 + 25096;
	// b 0x82fa2318
	sub_82FA2318(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8315ADBC"))) PPC_WEAK_FUNC(sub_8315ADBC);
PPC_FUNC_IMPL(__imp__sub_8315ADBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8315ADC0"))) PPC_WEAK_FUNC(sub_8315ADC0);
PPC_FUNC_IMPL(__imp__sub_8315ADC0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stfd f31,-32(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -32, ctx.f31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r11,-24460
	ctx.r3.s64 = ctx.r11.s64 + -24460;
	// bl 0x826909a0
	ctx.lr = 0x8315ADE8;
	sub_826909A0(ctx, base);
	// lis r11,-31955
	ctx.r11.s64 = -2094202880;
	// lis r10,-32231
	ctx.r10.s64 = -2112290816;
	// addi r31,r11,27168
	ctx.r31.s64 = ctx.r11.s64 + 27168;
	// lis r9,-32227
	ctx.r9.s64 = -2112028672;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r3,27168(r11)
	PPC_STORE_U32(ctx.r11.u32 + 27168, ctx.r3.u32);
	// addi r3,r9,-24492
	ctx.r3.s64 = ctx.r9.s64 + -24492;
	// lfs f0,13132(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 13132);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// bl 0x826909a0
	ctx.lr = 0x8315AE10;
	sub_826909A0(ctx, base);
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// stw r3,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r30,r11,27984
	ctx.r30.s64 = ctx.r11.s64 + 27984;
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r3,r11,-24532
	ctx.r3.s64 = ctx.r11.s64 + -24532;
	// lfs f31,2576(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 2576);
	ctx.f31.f64 = double(temp.f32);
	// stfs f31,12(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// bl 0x826909a0
	ctx.lr = 0x8315AE34;
	sub_826909A0(ctx, base);
	// lfs f0,2580(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 2580);
	ctx.f0.f64 = double(temp.f32);
	// stw r3,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r3.u32);
	// stfs f0,20(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 20, temp.u32);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r11,-24572
	ctx.r3.s64 = ctx.r11.s64 + -24572;
	// bl 0x826909a0
	ctx.lr = 0x8315AE50;
	sub_826909A0(ctx, base);
	// lfs f0,584(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 584);
	ctx.f0.f64 = double(temp.f32);
	// stw r3,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r3.u32);
	// stfs f0,28(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 28, temp.u32);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r11,-24612
	ctx.r3.s64 = ctx.r11.s64 + -24612;
	// bl 0x826909a0
	ctx.lr = 0x8315AE6C;
	sub_826909A0(ctx, base);
	// stfs f31,36(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 36, temp.u32);
	// stw r3,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r3.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f31,-32(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8315AE90"))) PPC_WEAK_FUNC(sub_8315AE90);
PPC_FUNC_IMPL(__imp__sub_8315AE90) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31968
	ctx.r11.s64 = -2095054848;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,27744
	ctx.r11.s64 = ctx.r11.s64 + 27744;
	// stw r10,92(r11)
	PPC_STORE_U32(ctx.r11.u32 + 92, ctx.r10.u32);
	// stw r10,96(r11)
	PPC_STORE_U32(ctx.r11.u32 + 96, ctx.r10.u32);
	// stw r10,100(r11)
	PPC_STORE_U32(ctx.r11.u32 + 100, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8315AEAC"))) PPC_WEAK_FUNC(sub_8315AEAC);
PPC_FUNC_IMPL(__imp__sub_8315AEAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8315AEB0"))) PPC_WEAK_FUNC(sub_8315AEB0);
PPC_FUNC_IMPL(__imp__sub_8315AEB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31955
	ctx.r11.s64 = -2094202880;
	// lis r10,-31968
	ctx.r10.s64 = -2095054848;
	// addi r31,r11,27232
	ctx.r31.s64 = ctx.r11.s64 + 27232;
	// addi r30,r10,27744
	ctx.r30.s64 = ctx.r10.s64 + 27744;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r5,104
	ctx.r5.s64 = 104;
	// bl 0x82fa77c0
	ctx.lr = 0x8315AEE4;
	sub_82FA77C0(ctx, base);
	// addi r3,r31,104
	ctx.r3.s64 = ctx.r31.s64 + 104;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r5,104
	ctx.r5.s64 = 104;
	// bl 0x82fa77c0
	ctx.lr = 0x8315AEF4;
	sub_82FA77C0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8315AF0C"))) PPC_WEAK_FUNC(sub_8315AF0C);
PPC_FUNC_IMPL(__imp__sub_8315AF0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8315AF10"))) PPC_WEAK_FUNC(sub_8315AF10);
PPC_FUNC_IMPL(__imp__sub_8315AF10) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31968
	ctx.r11.s64 = -2095054848;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,27716
	ctx.r11.s64 = ctx.r11.s64 + 27716;
	// stw r10,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// stw r10,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8315AF28"))) PPC_WEAK_FUNC(sub_8315AF28);
PPC_FUNC_IMPL(__imp__sub_8315AF28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x82691500
	ctx.lr = 0x8315AF3C;
	sub_82691500(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// li r10,0
	ctx.r10.s64 = 0;
	// beq 0x8315afa4
	if (ctx.cr0.eq) goto loc_8315AFA4;
	// lis r11,-31955
	ctx.r11.s64 = -2094202880;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// lis r6,-31977
	ctx.r6.s64 = -2095644672;
	// ld r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// addi r5,r11,27208
	ctx.r5.s64 = ctx.r11.s64 + 27208;
	// stw r3,27208(r11)
	PPC_STORE_U32(ctx.r11.u32 + 27208, ctx.r3.u32);
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// std r7,0(r3)
	PPC_STORE_U64(ctx.r3.u32 + 0, ctx.r7.u64);
	// addi r3,r6,25112
	ctx.r3.s64 = ctx.r6.s64 + 25112;
	// lwz r11,27208(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27208);
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// mr r7,r10
	ctx.r7.u64 = ctx.r10.u64;
	// stw r5,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r5.u32);
	// stw r10,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r10.u32);
	// stw r10,8(r5)
	PPC_STORE_U32(ctx.r5.u32 + 8, ctx.r10.u32);
	// stw r10,12(r5)
	PPC_STORE_U32(ctx.r5.u32 + 12, ctx.r10.u32);
	// stw r10,16(r5)
	PPC_STORE_U32(ctx.r5.u32 + 16, ctx.r10.u32);
	// bl 0x82fa2318
	ctx.lr = 0x8315AF94;
	sub_82FA2318(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8315AFA4:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r11,r11,11272
	ctx.r11.s64 = ctx.r11.s64 + 11272;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// bl 0x82240040
	ctx.lr = 0x8315AFBC;
	sub_82240040(ctx, base);
}

__attribute__((alias("__imp__sub_8315AFBC"))) PPC_WEAK_FUNC(sub_8315AFBC);
PPC_FUNC_IMPL(__imp__sub_8315AFBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8315AFC0"))) PPC_WEAK_FUNC(sub_8315AFC0);
PPC_FUNC_IMPL(__imp__sub_8315AFC0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// lis r9,-31955
	ctx.r9.s64 = -2094202880;
	// addi r11,r11,-22432
	ctx.r11.s64 = ctx.r11.s64 + -22432;
	// addi r8,r9,27440
	ctx.r8.s64 = ctx.r9.s64 + 27440;
	// lwa r10,192(r11)
	ctx.r10.s64 = int32_t(PPC_LOAD_U32(ctx.r11.u32 + 192));
	// std r10,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r10.u64);
	// lwa r11,196(r11)
	ctx.r11.s64 = int32_t(PPC_LOAD_U32(ctx.r11.u32 + 196));
	// lfd f0,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// std r11,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r11.u64);
	// lfd f13,-16(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// fcfid f12,f0
	ctx.f12.f64 = double(ctx.f0.s64);
	// frsp f0,f13
	ctx.f0.f64 = double(float(ctx.f13.f64));
	// stfs f0,4(r8)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 4, temp.u32);
	// frsp f0,f12
	ctx.f0.f64 = double(float(ctx.f12.f64));
	// stfs f0,27440(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 27440, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8315B004"))) PPC_WEAK_FUNC(sub_8315B004);
PPC_FUNC_IMPL(__imp__sub_8315B004) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8315B008"))) PPC_WEAK_FUNC(sub_8315B008);
PPC_FUNC_IMPL(__imp__sub_8315B008) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r11,-16336
	ctx.r3.s64 = ctx.r11.s64 + -16336;
	// bl 0x826909a0
	ctx.lr = 0x8315B028;
	sub_826909A0(ctx, base);
	// lis r10,-31955
	ctx.r10.s64 = -2094202880;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r9,-32227
	ctx.r9.s64 = -2112028672;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r9,-16408
	ctx.r3.s64 = ctx.r9.s64 + -16408;
	// stw r11,27448(r10)
	PPC_STORE_U32(ctx.r10.u32 + 27448, ctx.r11.u32);
	// addi r31,r10,27448
	ctx.r31.s64 = ctx.r10.s64 + 27448;
	// bl 0x826909a0
	ctx.lr = 0x8315B048;
	sub_826909A0(ctx, base);
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r11,-16480
	ctx.r3.s64 = ctx.r11.s64 + -16480;
	// bl 0x826909a0
	ctx.lr = 0x8315B05C;
	sub_826909A0(ctx, base);
	// stw r3,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r11,-16544
	ctx.r3.s64 = ctx.r11.s64 + -16544;
	// bl 0x826909a0
	ctx.lr = 0x8315B070;
	sub_826909A0(ctx, base);
	// stw r3,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r3.u32);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r11,-16608
	ctx.r3.s64 = ctx.r11.s64 + -16608;
	// bl 0x826909a0
	ctx.lr = 0x8315B084;
	sub_826909A0(ctx, base);
	// stw r3,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r3.u32);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r11,-16668
	ctx.r3.s64 = ctx.r11.s64 + -16668;
	// bl 0x826909a0
	ctx.lr = 0x8315B098;
	sub_826909A0(ctx, base);
	// stw r3,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r3.u32);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r11,-16736
	ctx.r3.s64 = ctx.r11.s64 + -16736;
	// bl 0x826909a0
	ctx.lr = 0x8315B0AC;
	sub_826909A0(ctx, base);
	// stw r3,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r3.u32);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r11,-16800
	ctx.r3.s64 = ctx.r11.s64 + -16800;
	// bl 0x826909a0
	ctx.lr = 0x8315B0C0;
	sub_826909A0(ctx, base);
	// stw r3,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r3.u32);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r11,-16872
	ctx.r3.s64 = ctx.r11.s64 + -16872;
	// bl 0x826909a0
	ctx.lr = 0x8315B0D4;
	sub_826909A0(ctx, base);
	// stw r3,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r3.u32);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r11,-16936
	ctx.r3.s64 = ctx.r11.s64 + -16936;
	// bl 0x826909a0
	ctx.lr = 0x8315B0E8;
	sub_826909A0(ctx, base);
	// stw r3,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r3.u32);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r11,-17008
	ctx.r3.s64 = ctx.r11.s64 + -17008;
	// bl 0x826909a0
	ctx.lr = 0x8315B0FC;
	sub_826909A0(ctx, base);
	// stw r3,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r3.u32);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r11,-17076
	ctx.r3.s64 = ctx.r11.s64 + -17076;
	// bl 0x826909a0
	ctx.lr = 0x8315B110;
	sub_826909A0(ctx, base);
	// stw r3,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r3.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8315B128"))) PPC_WEAK_FUNC(sub_8315B128);
PPC_FUNC_IMPL(__imp__sub_8315B128) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x8315B130;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r11,-15956
	ctx.r3.s64 = ctx.r11.s64 + -15956;
	// bl 0x826909a0
	ctx.lr = 0x8315B144;
	sub_826909A0(ctx, base);
	// lis r11,-31955
	ctx.r11.s64 = -2094202880;
	// lis r10,-32227
	ctx.r10.s64 = -2112028672;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r31,r10,-16016
	ctx.r31.s64 = ctx.r10.s64 + -16016;
	// addi r30,r11,27496
	ctx.r30.s64 = ctx.r11.s64 + 27496;
	// stw r3,27496(r11)
	PPC_STORE_U32(ctx.r11.u32 + 27496, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826909a0
	ctx.lr = 0x8315B164;
	sub_826909A0(ctx, base);
	// stw r3,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r3.u32);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r29,r11,-16408
	ctx.r29.s64 = ctx.r11.s64 + -16408;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x826909a0
	ctx.lr = 0x8315B17C;
	sub_826909A0(ctx, base);
	// stw r3,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r3.u32);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r11,-16076
	ctx.r3.s64 = ctx.r11.s64 + -16076;
	// bl 0x826909a0
	ctx.lr = 0x8315B190;
	sub_826909A0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r11.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x826909a0
	ctx.lr = 0x8315B1A4;
	sub_826909A0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r11.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x826909a0
	ctx.lr = 0x8315B1B8;
	sub_826909A0(ctx, base);
	// stw r3,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r3.u32);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r11,-16136
	ctx.r3.s64 = ctx.r11.s64 + -16136;
	// bl 0x826909a0
	ctx.lr = 0x8315B1CC;
	sub_826909A0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r11.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x826909a0
	ctx.lr = 0x8315B1E0;
	sub_826909A0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,28(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28, ctx.r11.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x826909a0
	ctx.lr = 0x8315B1F4;
	sub_826909A0(ctx, base);
	// stw r3,32(r30)
	PPC_STORE_U32(ctx.r30.u32 + 32, ctx.r3.u32);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r11,-16200
	ctx.r3.s64 = ctx.r11.s64 + -16200;
	// bl 0x826909a0
	ctx.lr = 0x8315B208;
	sub_826909A0(ctx, base);
	// stw r3,36(r30)
	PPC_STORE_U32(ctx.r30.u32 + 36, ctx.r3.u32);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r31,r11,-16268
	ctx.r31.s64 = ctx.r11.s64 + -16268;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826909a0
	ctx.lr = 0x8315B220;
	sub_826909A0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,40(r30)
	PPC_STORE_U32(ctx.r30.u32 + 40, ctx.r11.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x826909a0
	ctx.lr = 0x8315B234;
	sub_826909A0(ctx, base);
	// stw r3,44(r30)
	PPC_STORE_U32(ctx.r30.u32 + 44, ctx.r3.u32);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r11,18388
	ctx.r3.s64 = ctx.r11.s64 + 18388;
	// bl 0x826909a0
	ctx.lr = 0x8315B248;
	sub_826909A0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,48(r30)
	PPC_STORE_U32(ctx.r30.u32 + 48, ctx.r11.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x826909a0
	ctx.lr = 0x8315B25C;
	sub_826909A0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,52(r30)
	PPC_STORE_U32(ctx.r30.u32 + 52, ctx.r11.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x826909a0
	ctx.lr = 0x8315B270;
	sub_826909A0(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// stw r3,56(r30)
	PPC_STORE_U32(ctx.r30.u32 + 56, ctx.r3.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r11,18332
	ctx.r3.s64 = ctx.r11.s64 + 18332;
	// bl 0x826909a0
	ctx.lr = 0x8315B284;
	sub_826909A0(ctx, base);
	// stw r3,60(r30)
	PPC_STORE_U32(ctx.r30.u32 + 60, ctx.r3.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826909a0
	ctx.lr = 0x8315B294;
	sub_826909A0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,64(r30)
	PPC_STORE_U32(ctx.r30.u32 + 64, ctx.r11.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x826909a0
	ctx.lr = 0x8315B2A8;
	sub_826909A0(ctx, base);
	// stw r3,68(r30)
	PPC_STORE_U32(ctx.r30.u32 + 68, ctx.r3.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8315B2B4"))) PPC_WEAK_FUNC(sub_8315B2B4);
PPC_FUNC_IMPL(__imp__sub_8315B2B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8315B2B8"))) PPC_WEAK_FUNC(sub_8315B2B8);
PPC_FUNC_IMPL(__imp__sub_8315B2B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// addi r3,r11,25120
	ctx.r3.s64 = ctx.r11.s64 + 25120;
	// b 0x82fa2318
	sub_82FA2318(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8315B2C4"))) PPC_WEAK_FUNC(sub_8315B2C4);
PPC_FUNC_IMPL(__imp__sub_8315B2C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8315B2C8"))) PPC_WEAK_FUNC(sub_8315B2C8);
PPC_FUNC_IMPL(__imp__sub_8315B2C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// addi r3,r11,25272
	ctx.r3.s64 = ctx.r11.s64 + 25272;
	// b 0x82fa2318
	sub_82FA2318(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8315B2D4"))) PPC_WEAK_FUNC(sub_8315B2D4);
PPC_FUNC_IMPL(__imp__sub_8315B2D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8315B2D8"))) PPC_WEAK_FUNC(sub_8315B2D8);
PPC_FUNC_IMPL(__imp__sub_8315B2D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31955
	ctx.r11.s64 = -2094202880;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,28512
	ctx.r11.s64 = ctx.r11.s64 + 28512;
	// lis r9,-31977
	ctx.r9.s64 = -2095644672;
	// addi r3,r9,25400
	ctx.r3.s64 = ctx.r9.s64 + 25400;
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// stw r10,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// stw r10,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r10.u32);
	// b 0x82fa2318
	sub_82FA2318(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8315B300"))) PPC_WEAK_FUNC(sub_8315B300);
PPC_FUNC_IMPL(__imp__sub_8315B300) {
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
	// addi r4,r11,31204
	ctx.r4.s64 = ctx.r11.s64 + 31204;
	// addi r3,r10,28848
	ctx.r3.s64 = ctx.r10.s64 + 28848;
	// bl 0x822400d8
	ctx.lr = 0x8315B320;
	sub_822400D8(ctx, base);
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// addi r3,r11,25416
	ctx.r3.s64 = ctx.r11.s64 + 25416;
	// bl 0x82fa2318
	ctx.lr = 0x8315B32C;
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

__attribute__((alias("__imp__sub_8315B33C"))) PPC_WEAK_FUNC(sub_8315B33C);
PPC_FUNC_IMPL(__imp__sub_8315B33C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8315B340"))) PPC_WEAK_FUNC(sub_8315B340);
PPC_FUNC_IMPL(__imp__sub_8315B340) {
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
	// addi r4,r11,31216
	ctx.r4.s64 = ctx.r11.s64 + 31216;
	// addi r3,r10,28820
	ctx.r3.s64 = ctx.r10.s64 + 28820;
	// bl 0x822400d8
	ctx.lr = 0x8315B360;
	sub_822400D8(ctx, base);
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// addi r3,r11,25440
	ctx.r3.s64 = ctx.r11.s64 + 25440;
	// bl 0x82fa2318
	ctx.lr = 0x8315B36C;
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

__attribute__((alias("__imp__sub_8315B37C"))) PPC_WEAK_FUNC(sub_8315B37C);
PPC_FUNC_IMPL(__imp__sub_8315B37C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8315B380"))) PPC_WEAK_FUNC(sub_8315B380);
PPC_FUNC_IMPL(__imp__sub_8315B380) {
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
	// addi r4,r11,31228
	ctx.r4.s64 = ctx.r11.s64 + 31228;
	// addi r3,r10,28540
	ctx.r3.s64 = ctx.r10.s64 + 28540;
	// bl 0x822400d8
	ctx.lr = 0x8315B3A0;
	sub_822400D8(ctx, base);
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// addi r3,r11,25464
	ctx.r3.s64 = ctx.r11.s64 + 25464;
	// bl 0x82fa2318
	ctx.lr = 0x8315B3AC;
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

__attribute__((alias("__imp__sub_8315B3BC"))) PPC_WEAK_FUNC(sub_8315B3BC);
PPC_FUNC_IMPL(__imp__sub_8315B3BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8315B3C0"))) PPC_WEAK_FUNC(sub_8315B3C0);
PPC_FUNC_IMPL(__imp__sub_8315B3C0) {
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
	// addi r4,r11,31236
	ctx.r4.s64 = ctx.r11.s64 + 31236;
	// addi r3,r10,28568
	ctx.r3.s64 = ctx.r10.s64 + 28568;
	// bl 0x822400d8
	ctx.lr = 0x8315B3E0;
	sub_822400D8(ctx, base);
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// addi r3,r11,25488
	ctx.r3.s64 = ctx.r11.s64 + 25488;
	// bl 0x82fa2318
	ctx.lr = 0x8315B3EC;
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

__attribute__((alias("__imp__sub_8315B3FC"))) PPC_WEAK_FUNC(sub_8315B3FC);
PPC_FUNC_IMPL(__imp__sub_8315B3FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8315B400"))) PPC_WEAK_FUNC(sub_8315B400);
PPC_FUNC_IMPL(__imp__sub_8315B400) {
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
	// addi r4,r11,31248
	ctx.r4.s64 = ctx.r11.s64 + 31248;
	// addi r3,r10,28680
	ctx.r3.s64 = ctx.r10.s64 + 28680;
	// bl 0x822400d8
	ctx.lr = 0x8315B420;
	sub_822400D8(ctx, base);
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// addi r3,r11,25512
	ctx.r3.s64 = ctx.r11.s64 + 25512;
	// bl 0x82fa2318
	ctx.lr = 0x8315B42C;
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

__attribute__((alias("__imp__sub_8315B43C"))) PPC_WEAK_FUNC(sub_8315B43C);
PPC_FUNC_IMPL(__imp__sub_8315B43C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8315B440"))) PPC_WEAK_FUNC(sub_8315B440);
PPC_FUNC_IMPL(__imp__sub_8315B440) {
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
	// addi r4,r11,31264
	ctx.r4.s64 = ctx.r11.s64 + 31264;
	// addi r3,r10,28764
	ctx.r3.s64 = ctx.r10.s64 + 28764;
	// bl 0x822400d8
	ctx.lr = 0x8315B460;
	sub_822400D8(ctx, base);
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// addi r3,r11,25536
	ctx.r3.s64 = ctx.r11.s64 + 25536;
	// bl 0x82fa2318
	ctx.lr = 0x8315B46C;
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

__attribute__((alias("__imp__sub_8315B47C"))) PPC_WEAK_FUNC(sub_8315B47C);
PPC_FUNC_IMPL(__imp__sub_8315B47C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8315B480"))) PPC_WEAK_FUNC(sub_8315B480);
PPC_FUNC_IMPL(__imp__sub_8315B480) {
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
	// addi r4,r11,31276
	ctx.r4.s64 = ctx.r11.s64 + 31276;
	// addi r3,r10,28876
	ctx.r3.s64 = ctx.r10.s64 + 28876;
	// bl 0x822400d8
	ctx.lr = 0x8315B4A0;
	sub_822400D8(ctx, base);
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// addi r3,r11,25560
	ctx.r3.s64 = ctx.r11.s64 + 25560;
	// bl 0x82fa2318
	ctx.lr = 0x8315B4AC;
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

__attribute__((alias("__imp__sub_8315B4BC"))) PPC_WEAK_FUNC(sub_8315B4BC);
PPC_FUNC_IMPL(__imp__sub_8315B4BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8315B4C0"))) PPC_WEAK_FUNC(sub_8315B4C0);
PPC_FUNC_IMPL(__imp__sub_8315B4C0) {
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
	// addi r4,r11,31292
	ctx.r4.s64 = ctx.r11.s64 + 31292;
	// addi r3,r10,28912
	ctx.r3.s64 = ctx.r10.s64 + 28912;
	// bl 0x822400d8
	ctx.lr = 0x8315B4E0;
	sub_822400D8(ctx, base);
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// addi r3,r11,25584
	ctx.r3.s64 = ctx.r11.s64 + 25584;
	// bl 0x82fa2318
	ctx.lr = 0x8315B4EC;
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

__attribute__((alias("__imp__sub_8315B4FC"))) PPC_WEAK_FUNC(sub_8315B4FC);
PPC_FUNC_IMPL(__imp__sub_8315B4FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8315B500"))) PPC_WEAK_FUNC(sub_8315B500);
PPC_FUNC_IMPL(__imp__sub_8315B500) {
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
	// addi r4,r11,31304
	ctx.r4.s64 = ctx.r11.s64 + 31304;
	// addi r3,r10,28652
	ctx.r3.s64 = ctx.r10.s64 + 28652;
	// bl 0x822400d8
	ctx.lr = 0x8315B520;
	sub_822400D8(ctx, base);
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// addi r3,r11,25608
	ctx.r3.s64 = ctx.r11.s64 + 25608;
	// bl 0x82fa2318
	ctx.lr = 0x8315B52C;
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

__attribute__((alias("__imp__sub_8315B53C"))) PPC_WEAK_FUNC(sub_8315B53C);
PPC_FUNC_IMPL(__imp__sub_8315B53C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8315B540"))) PPC_WEAK_FUNC(sub_8315B540);
PPC_FUNC_IMPL(__imp__sub_8315B540) {
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
	// addi r4,r11,31316
	ctx.r4.s64 = ctx.r11.s64 + 31316;
	// addi r3,r10,28596
	ctx.r3.s64 = ctx.r10.s64 + 28596;
	// bl 0x822400d8
	ctx.lr = 0x8315B560;
	sub_822400D8(ctx, base);
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// addi r3,r11,25632
	ctx.r3.s64 = ctx.r11.s64 + 25632;
	// bl 0x82fa2318
	ctx.lr = 0x8315B56C;
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

__attribute__((alias("__imp__sub_8315B57C"))) PPC_WEAK_FUNC(sub_8315B57C);
PPC_FUNC_IMPL(__imp__sub_8315B57C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8315B580"))) PPC_WEAK_FUNC(sub_8315B580);
PPC_FUNC_IMPL(__imp__sub_8315B580) {
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
	// addi r4,r11,31324
	ctx.r4.s64 = ctx.r11.s64 + 31324;
	// addi r3,r10,28736
	ctx.r3.s64 = ctx.r10.s64 + 28736;
	// bl 0x822400d8
	ctx.lr = 0x8315B5A0;
	sub_822400D8(ctx, base);
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// addi r3,r11,25656
	ctx.r3.s64 = ctx.r11.s64 + 25656;
	// bl 0x82fa2318
	ctx.lr = 0x8315B5AC;
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

__attribute__((alias("__imp__sub_8315B5BC"))) PPC_WEAK_FUNC(sub_8315B5BC);
PPC_FUNC_IMPL(__imp__sub_8315B5BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8315B5C0"))) PPC_WEAK_FUNC(sub_8315B5C0);
PPC_FUNC_IMPL(__imp__sub_8315B5C0) {
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
	// addi r4,r11,31336
	ctx.r4.s64 = ctx.r11.s64 + 31336;
	// addi r3,r10,28624
	ctx.r3.s64 = ctx.r10.s64 + 28624;
	// bl 0x822400d8
	ctx.lr = 0x8315B5E0;
	sub_822400D8(ctx, base);
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// addi r3,r11,25680
	ctx.r3.s64 = ctx.r11.s64 + 25680;
	// bl 0x82fa2318
	ctx.lr = 0x8315B5EC;
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

__attribute__((alias("__imp__sub_8315B5FC"))) PPC_WEAK_FUNC(sub_8315B5FC);
PPC_FUNC_IMPL(__imp__sub_8315B5FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8315B600"))) PPC_WEAK_FUNC(sub_8315B600);
PPC_FUNC_IMPL(__imp__sub_8315B600) {
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
	// addi r4,r11,31352
	ctx.r4.s64 = ctx.r11.s64 + 31352;
	// addi r3,r10,28944
	ctx.r3.s64 = ctx.r10.s64 + 28944;
	// bl 0x822400d8
	ctx.lr = 0x8315B620;
	sub_822400D8(ctx, base);
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// addi r3,r11,25704
	ctx.r3.s64 = ctx.r11.s64 + 25704;
	// bl 0x82fa2318
	ctx.lr = 0x8315B62C;
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

__attribute__((alias("__imp__sub_8315B63C"))) PPC_WEAK_FUNC(sub_8315B63C);
PPC_FUNC_IMPL(__imp__sub_8315B63C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8315B640"))) PPC_WEAK_FUNC(sub_8315B640);
PPC_FUNC_IMPL(__imp__sub_8315B640) {
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
	// addi r4,r11,31368
	ctx.r4.s64 = ctx.r11.s64 + 31368;
	// addi r3,r10,28792
	ctx.r3.s64 = ctx.r10.s64 + 28792;
	// bl 0x822400d8
	ctx.lr = 0x8315B660;
	sub_822400D8(ctx, base);
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// addi r3,r11,25728
	ctx.r3.s64 = ctx.r11.s64 + 25728;
	// bl 0x82fa2318
	ctx.lr = 0x8315B66C;
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

__attribute__((alias("__imp__sub_8315B67C"))) PPC_WEAK_FUNC(sub_8315B67C);
PPC_FUNC_IMPL(__imp__sub_8315B67C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8315B680"))) PPC_WEAK_FUNC(sub_8315B680);
PPC_FUNC_IMPL(__imp__sub_8315B680) {
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
	// addi r4,r11,31380
	ctx.r4.s64 = ctx.r11.s64 + 31380;
	// addi r3,r10,28708
	ctx.r3.s64 = ctx.r10.s64 + 28708;
	// bl 0x822400d8
	ctx.lr = 0x8315B6A0;
	sub_822400D8(ctx, base);
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// addi r3,r11,25752
	ctx.r3.s64 = ctx.r11.s64 + 25752;
	// bl 0x82fa2318
	ctx.lr = 0x8315B6AC;
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

__attribute__((alias("__imp__sub_8315B6BC"))) PPC_WEAK_FUNC(sub_8315B6BC);
PPC_FUNC_IMPL(__imp__sub_8315B6BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8315B6C0"))) PPC_WEAK_FUNC(sub_8315B6C0);
PPC_FUNC_IMPL(__imp__sub_8315B6C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// addi r3,r11,25776
	ctx.r3.s64 = ctx.r11.s64 + 25776;
	// b 0x82fa2318
	sub_82FA2318(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8315B6CC"))) PPC_WEAK_FUNC(sub_8315B6CC);
PPC_FUNC_IMPL(__imp__sub_8315B6CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8315B6D0"))) PPC_WEAK_FUNC(sub_8315B6D0);
PPC_FUNC_IMPL(__imp__sub_8315B6D0) {
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
	// bl 0x831791d4
	ctx.lr = 0x8315B6E0;
	__imp__KeTlsAlloc(ctx, base);
	// lis r10,-31955
	ctx.r10.s64 = -2094202880;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r9,-31977
	ctx.r9.s64 = -2095644672;
	// addi r3,r9,25792
	ctx.r3.s64 = ctx.r9.s64 + 25792;
	// stw r11,28972(r10)
	PPC_STORE_U32(ctx.r10.u32 + 28972, ctx.r11.u32);
	// bl 0x82fa2318
	ctx.lr = 0x8315B6F8;
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

__attribute__((alias("__imp__sub_8315B708"))) PPC_WEAK_FUNC(sub_8315B708);
PPC_FUNC_IMPL(__imp__sub_8315B708) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// addi r3,r11,25864
	ctx.r3.s64 = ctx.r11.s64 + 25864;
	// b 0x82fa2318
	sub_82FA2318(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8315B714"))) PPC_WEAK_FUNC(sub_8315B714);
PPC_FUNC_IMPL(__imp__sub_8315B714) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8315B718"))) PPC_WEAK_FUNC(sub_8315B718);
PPC_FUNC_IMPL(__imp__sub_8315B718) {
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
	// lis r11,-31955
	ctx.r11.s64 = -2094202880;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r11,28992
	ctx.r3.s64 = ctx.r11.s64 + 28992;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x8255ab70
	ctx.lr = 0x8315B738;
	sub_8255AB70(ctx, base);
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// addi r3,r11,25952
	ctx.r3.s64 = ctx.r11.s64 + 25952;
	// bl 0x82fa2318
	ctx.lr = 0x8315B744;
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

__attribute__((alias("__imp__sub_8315B754"))) PPC_WEAK_FUNC(sub_8315B754);
PPC_FUNC_IMPL(__imp__sub_8315B754) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8315B758"))) PPC_WEAK_FUNC(sub_8315B758);
PPC_FUNC_IMPL(__imp__sub_8315B758) {
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
	// li r3,24
	ctx.r3.s64 = 24;
	// bl 0x82691500
	ctx.lr = 0x8315B76C;
	sub_82691500(ctx, base);
	// mr. r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8315b7c4
	if (ctx.cr0.eq) goto loc_8315B7C4;
	// lis r9,-31955
	ctx.r9.s64 = -2094202880;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r9,29008
	ctx.r9.s64 = ctx.r9.s64 + 29008;
	// lis r8,-31977
	ctx.r8.s64 = -2095644672;
	// addi r3,r8,26024
	ctx.r3.s64 = ctx.r8.s64 + 26024;
	// stw r11,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r11.u32);
	// stw r11,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r11.u32);
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stw r11,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r11.u32);
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stw r11,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r11.u32);
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stb r10,20(r11)
	PPC_STORE_U8(ctx.r11.u32 + 20, ctx.r10.u8);
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stb r10,21(r11)
	PPC_STORE_U8(ctx.r11.u32 + 21, ctx.r10.u8);
	// bl 0x82fa2318
	ctx.lr = 0x8315B7B4;
	sub_82FA2318(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8315B7C4:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,11272
	ctx.r11.s64 = ctx.r11.s64 + 11272;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82240040
	ctx.lr = 0x8315B7E0;
	sub_82240040(ctx, base);
}

__attribute__((alias("__imp__sub_8315B7E0"))) PPC_WEAK_FUNC(sub_8315B7E0);
PPC_FUNC_IMPL(__imp__sub_8315B7E0) {
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
	// li r3,20
	ctx.r3.s64 = 20;
	// bl 0x82691500
	ctx.lr = 0x8315B7F4;
	sub_82691500(ctx, base);
	// mr. r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8315b84c
	if (ctx.cr0.eq) goto loc_8315B84C;
	// lis r9,-31955
	ctx.r9.s64 = -2094202880;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r9,29024
	ctx.r9.s64 = ctx.r9.s64 + 29024;
	// lis r8,-31977
	ctx.r8.s64 = -2095644672;
	// addi r3,r8,26096
	ctx.r3.s64 = ctx.r8.s64 + 26096;
	// stw r11,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r11.u32);
	// stw r11,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r11.u32);
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stw r11,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r11.u32);
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stw r11,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r11.u32);
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stb r10,16(r11)
	PPC_STORE_U8(ctx.r11.u32 + 16, ctx.r10.u8);
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stb r10,17(r11)
	PPC_STORE_U8(ctx.r11.u32 + 17, ctx.r10.u8);
	// bl 0x82fa2318
	ctx.lr = 0x8315B83C;
	sub_82FA2318(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_8315B84C:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,11272
	ctx.r11.s64 = ctx.r11.s64 + 11272;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82240040
	ctx.lr = 0x8315B868;
	sub_82240040(ctx, base);
}

__attribute__((alias("__imp__sub_8315B868"))) PPC_WEAK_FUNC(sub_8315B868);
PPC_FUNC_IMPL(__imp__sub_8315B868) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31955
	ctx.r31.s64 = -2094202880;
	// addi r30,r31,29040
	ctx.r30.s64 = ctx.r31.s64 + 29040;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x828e35c0
	ctx.lr = 0x8315B88C;
	sub_828E35C0(ctx, base);
	// lis r10,-32227
	ctx.r10.s64 = -2112028672;
	// lis r8,-32162
	ctx.r8.s64 = -2107768832;
	// addi r9,r10,-11832
	ctx.r9.s64 = ctx.r10.s64 + -11832;
	// addi r10,r8,-16672
	ctx.r10.s64 = ctx.r8.s64 + -16672;
	// li r11,28
	ctx.r11.s64 = 28;
	// stw r9,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r9.u32);
	// stw r10,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r10.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,29040(r31)
	PPC_STORE_U32(ctx.r31.u32 + 29040, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r9,12(r30)
	PPC_STORE_U8(ctx.r30.u32 + 12, ctx.r9.u8);
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// stb r10,13(r30)
	PPC_STORE_U8(ctx.r30.u32 + 13, ctx.r10.u8);
	// stw r11,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r11.u32);
	// stw r9,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r9.u32);
	// bl 0x82555668
	ctx.lr = 0x8315B8D0;
	sub_82555668(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x825556d0
	ctx.lr = 0x8315B8D8;
	sub_825556D0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8315B8F0"))) PPC_WEAK_FUNC(sub_8315B8F0);
PPC_FUNC_IMPL(__imp__sub_8315B8F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r11,r11,-12552
	ctx.r11.s64 = ctx.r11.s64 + -12552;
	// addi r10,r10,-2340
	ctx.r10.s64 = ctx.r10.s64 + -2340;
	// lis r9,-31968
	ctx.r9.s64 = -2095054848;
	// lis r8,-32231
	ctx.r8.s64 = -2112290816;
	// addi r9,r9,28144
	ctx.r9.s64 = ctx.r9.s64 + 28144;
	// lvlx v0,0,r11
	temp.u32 = ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r11,r8,27984
	ctx.r11.s64 = ctx.r8.s64 + 27984;
	// vor v13,v0,v0
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_load_si128((__m128i*)ctx.v0.u8));
	// lvlx v12,0,r10
	temp.u32 = ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vor v11,v0,v0
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_load_si128((__m128i*)ctx.v0.u8));
	// li r10,96
	ctx.r10.s64 = 96;
	// li r8,32
	ctx.r8.s64 = 32;
	// li r7,28
	ctx.r7.s64 = 28;
	// vrlimi128 v13,v0,4,3
	_mm_store_ps(ctx.v13.f32, _mm_blend_ps(_mm_load_ps(ctx.v13.f32), _mm_permute_ps(_mm_load_ps(ctx.v0.f32), 57), 4));
	// li r6,64
	ctx.r6.s64 = 64;
	// vrlimi128 v11,v12,4,3
	_mm_store_ps(ctx.v11.f32, _mm_blend_ps(_mm_load_ps(ctx.v11.f32), _mm_permute_ps(_mm_load_ps(ctx.v12.f32), 57), 4));
	// vor v0,v13,v13
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_load_si128((__m128i*)ctx.v13.u8));
	// vrlimi128 v0,v11,3,2
	_mm_store_ps(ctx.v0.f32, _mm_blend_ps(_mm_load_ps(ctx.v0.f32), _mm_permute_ps(_mm_load_ps(ctx.v11.f32), 78), 3));
	// stvx128 v0,r0,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvlx v0,r11,r10
	temp.u32 = ctx.r11.u32 + ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vor v13,v0,v0
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_load_si128((__m128i*)ctx.v0.u8));
	// vrlimi128 v13,v0,4,3
	_mm_store_ps(ctx.v13.f32, _mm_blend_ps(_mm_load_ps(ctx.v13.f32), _mm_permute_ps(_mm_load_ps(ctx.v0.f32), 57), 4));
	// vor v11,v0,v0
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_load_si128((__m128i*)ctx.v0.u8));
	// vor v0,v13,v13
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_load_si128((__m128i*)ctx.v13.u8));
	// vrlimi128 v11,v12,4,3
	_mm_store_ps(ctx.v11.f32, _mm_blend_ps(_mm_load_ps(ctx.v11.f32), _mm_permute_ps(_mm_load_ps(ctx.v12.f32), 57), 4));
	// vrlimi128 v0,v11,3,2
	_mm_store_ps(ctx.v0.f32, _mm_blend_ps(_mm_load_ps(ctx.v0.f32), _mm_permute_ps(_mm_load_ps(ctx.v11.f32), 78), 3));
	// stvx128 v0,r9,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r9.u32 + ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvlx v0,r11,r7
	temp.u32 = ctx.r11.u32 + ctx.r7.u32;
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vor v13,v0,v0
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_load_si128((__m128i*)ctx.v0.u8));
	// vor v11,v0,v0
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_load_si128((__m128i*)ctx.v0.u8));
	// vrlimi128 v13,v0,4,3
	_mm_store_ps(ctx.v13.f32, _mm_blend_ps(_mm_load_ps(ctx.v13.f32), _mm_permute_ps(_mm_load_ps(ctx.v0.f32), 57), 4));
	// vrlimi128 v11,v12,4,3
	_mm_store_ps(ctx.v11.f32, _mm_blend_ps(_mm_load_ps(ctx.v11.f32), _mm_permute_ps(_mm_load_ps(ctx.v12.f32), 57), 4));
	// vor v0,v13,v13
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_load_si128((__m128i*)ctx.v13.u8));
	// vrlimi128 v0,v11,3,2
	_mm_store_ps(ctx.v0.f32, _mm_blend_ps(_mm_load_ps(ctx.v0.f32), _mm_permute_ps(_mm_load_ps(ctx.v11.f32), 78), 3));
	// stvx128 v0,r9,r6
	_mm_store_si128((__m128i*)(base + ((ctx.r9.u32 + ctx.r6.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8315B988"))) PPC_WEAK_FUNC(sub_8315B988);
PPC_FUNC_IMPL(__imp__sub_8315B988) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// addi r3,r11,26248
	ctx.r3.s64 = ctx.r11.s64 + 26248;
	// b 0x82fa2318
	sub_82FA2318(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8315B994"))) PPC_WEAK_FUNC(sub_8315B994);
PPC_FUNC_IMPL(__imp__sub_8315B994) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8315B998"))) PPC_WEAK_FUNC(sub_8315B998);
PPC_FUNC_IMPL(__imp__sub_8315B998) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31968
	ctx.r11.s64 = -2095054848;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,28240
	ctx.r11.s64 = ctx.r11.s64 + 28240;
	// li r9,-31
	ctx.r9.s64 = -31;
	// li r8,31
	ctx.r8.s64 = 31;
	// li r7,62
	ctx.r7.s64 = 62;
	// mr r6,r10
	ctx.r6.u64 = ctx.r10.u64;
	// stw r10,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// stw r9,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r9.u32);
	// stw r10,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r10.u32);
	// stw r8,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r8.u32);
	// stw r7,36(r11)
	PPC_STORE_U32(ctx.r11.u32 + 36, ctx.r7.u32);
	// stw r10,40(r11)
	PPC_STORE_U32(ctx.r11.u32 + 40, ctx.r10.u32);
	// stw r10,44(r11)
	PPC_STORE_U32(ctx.r11.u32 + 44, ctx.r10.u32);
	// stw r9,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r9.u32);
	// addi r9,r11,20
	ctx.r9.s64 = ctx.r11.s64 + 20;
	// addi r9,r11,44
	ctx.r9.s64 = ctx.r11.s64 + 44;
	// stw r10,48(r11)
	PPC_STORE_U32(ctx.r11.u32 + 48, ctx.r10.u32);
	// stw r8,56(r11)
	PPC_STORE_U32(ctx.r11.u32 + 56, ctx.r8.u32);
	// addi r9,r11,68
	ctx.r9.s64 = ctx.r11.s64 + 68;
	// stw r7,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r7.u32);
	// stw r10,64(r11)
	PPC_STORE_U32(ctx.r11.u32 + 64, ctx.r10.u32);
	// stw r10,68(r11)
	PPC_STORE_U32(ctx.r11.u32 + 68, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8315B9F8"))) PPC_WEAK_FUNC(sub_8315B9F8);
PPC_FUNC_IMPL(__imp__sub_8315B9F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-31968
	ctx.r11.s64 = -2095054848;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r11,r11,28312
	ctx.r11.s64 = ctx.r11.s64 + 28312;
	// lis r5,-32227
	ctx.r5.s64 = -2112028672;
	// lis r4,-32231
	ctx.r4.s64 = -2112290816;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r7,1
	ctx.r7.s64 = 1;
	// lfs f0,-2340(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -2340);
	ctx.f0.f64 = double(temp.f32);
	// stw r6,44(r11)
	PPC_STORE_U32(ctx.r11.u32 + 44, ctx.r6.u32);
	// lfs f13,-24756(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + -24756);
	ctx.f13.f64 = double(temp.f32);
	// mr r9,r6
	ctx.r9.u64 = ctx.r6.u64;
	// lfs f12,-4544(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + -4544);
	ctx.f12.f64 = double(temp.f32);
	// mr r8,r6
	ctx.r8.u64 = ctx.r6.u64;
	// stfs f0,48(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 48, temp.u32);
	// addi r10,r11,44
	ctx.r10.s64 = ctx.r11.s64 + 44;
	// stfs f13,52(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 52, temp.u32);
	// stw r6,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r6.u32);
	// stfs f12,56(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 56, temp.u32);
	// stw r6,64(r11)
	PPC_STORE_U32(ctx.r11.u32 + 64, ctx.r6.u32);
	// stw r7,68(r11)
	PPC_STORE_U32(ctx.r11.u32 + 68, ctx.r7.u32);
	// stw r6,72(r11)
	PPC_STORE_U32(ctx.r11.u32 + 72, ctx.r6.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8315BA50"))) PPC_WEAK_FUNC(sub_8315BA50);
PPC_FUNC_IMPL(__imp__sub_8315BA50) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// lis r10,-31968
	ctx.r10.s64 = -2095054848;
	// addi r11,r11,15312
	ctx.r11.s64 = ctx.r11.s64 + 15312;
	// addi r10,r10,25584
	ctx.r10.s64 = ctx.r10.s64 + 25584;
	// li r9,16
	ctx.r9.s64 = 16;
	// li r8,64
	ctx.r8.s64 = 64;
	// li r7,112
	ctx.r7.s64 = 112;
	// lvx128 v0,r0,r11
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// li r6,160
	ctx.r6.s64 = 160;
	// li r5,208
	ctx.r5.s64 = 208;
	// vor v13,v0,v0
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_load_si128((__m128i*)ctx.v0.u8));
	// li r4,256
	ctx.r4.s64 = 256;
	// vor v12,v0,v0
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_load_si128((__m128i*)ctx.v0.u8));
	// vor v11,v0,v0
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_load_si128((__m128i*)ctx.v0.u8));
	// stvx128 v0,r10,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32 + ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// vor v10,v0,v0
	_mm_store_si128((__m128i*)ctx.v10.u8, _mm_load_si128((__m128i*)ctx.v0.u8));
	// vor v9,v0,v0
	_mm_store_si128((__m128i*)ctx.v9.u8, _mm_load_si128((__m128i*)ctx.v0.u8));
	// stvx128 v13,r10,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32 + ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v12,r10,r7
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32 + ctx.r7.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v11,r10,r6
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32 + ctx.r6.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v10,r10,r5
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32 + ctx.r5.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v10.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v9,r10,r4
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32 + ctx.r4.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v9.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8315BAAC"))) PPC_WEAK_FUNC(sub_8315BAAC);
PPC_FUNC_IMPL(__imp__sub_8315BAAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8315BAB0"))) PPC_WEAK_FUNC(sub_8315BAB0);
PPC_FUNC_IMPL(__imp__sub_8315BAB0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7670
	ctx.lr = 0x8315BAB8;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// lis r10,-32227
	ctx.r10.s64 = -2112028672;
	// lis r9,-32227
	ctx.r9.s64 = -2112028672;
	// lis r8,-32227
	ctx.r8.s64 = -2112028672;
	// addi r11,r11,16016
	ctx.r11.s64 = ctx.r11.s64 + 16016;
	// addi r10,r10,15792
	ctx.r10.s64 = ctx.r10.s64 + 15792;
	// addi r9,r9,16000
	ctx.r9.s64 = ctx.r9.s64 + 16000;
	// addi r8,r8,15984
	ctx.r8.s64 = ctx.r8.s64 + 15984;
	// lis r5,-32227
	ctx.r5.s64 = -2112028672;
	// lis r4,-32227
	ctx.r4.s64 = -2112028672;
	// lvx128 v0,r0,r11
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// lis r3,-32227
	ctx.r3.s64 = -2112028672;
	// lvx128 v13,r0,r10
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// lis r31,-32227
	ctx.r31.s64 = -2112028672;
	// lvx128 v12,r0,r9
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// lis r7,-32227
	ctx.r7.s64 = -2112028672;
	// lvx128 v11,r0,r8
	simd::store_shuffled(ctx.v11, simd::load_and_shuffle(base + ((ctx.r8.u32) & ~0xF), VectorMaskL));
	// lis r6,-32227
	ctx.r6.s64 = -2112028672;
	// addi r7,r7,15920
	ctx.r7.s64 = ctx.r7.s64 + 15920;
	// addi r6,r6,15904
	ctx.r6.s64 = ctx.r6.s64 + 15904;
	// addi r11,r5,15968
	ctx.r11.s64 = ctx.r5.s64 + 15968;
	// addi r10,r4,15952
	ctx.r10.s64 = ctx.r4.s64 + 15952;
	// addi r9,r3,15840
	ctx.r9.s64 = ctx.r3.s64 + 15840;
	// addi r8,r31,15936
	ctx.r8.s64 = ctx.r31.s64 + 15936;
	// lvx128 v10,r0,r7
	simd::store_shuffled(ctx.v10, simd::load_and_shuffle(base + ((ctx.r7.u32) & ~0xF), VectorMaskL));
	// lis r30,-32227
	ctx.r30.s64 = -2112028672;
	// lvx128 v9,r0,r6
	simd::store_shuffled(ctx.v9, simd::load_and_shuffle(base + ((ctx.r6.u32) & ~0xF), VectorMaskL));
	// lis r29,-32227
	ctx.r29.s64 = -2112028672;
	// lvx128 v8,r0,r11
	simd::store_shuffled(ctx.v8, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// lis r28,-32242
	ctx.r28.s64 = -2113011712;
	// lvx128 v7,r0,r10
	simd::store_shuffled(ctx.v7, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// lis r27,-32227
	ctx.r27.s64 = -2112028672;
	// lvx128 v6,r0,r9
	simd::store_shuffled(ctx.v6, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// lis r26,-31968
	ctx.r26.s64 = -2095054848;
	// lvx128 v5,r0,r8
	simd::store_shuffled(ctx.v5, simd::load_and_shuffle(base + ((ctx.r8.u32) & ~0xF), VectorMaskL));
	// addi r7,r30,15888
	ctx.r7.s64 = ctx.r30.s64 + 15888;
	// addi r31,r26,28400
	ctx.r31.s64 = ctx.r26.s64 + 28400;
	// addi r6,r29,15856
	ctx.r6.s64 = ctx.r29.s64 + 15856;
	// addi r11,r28,-29680
	ctx.r11.s64 = ctx.r28.s64 + -29680;
	// addi r10,r27,15872
	ctx.r10.s64 = ctx.r27.s64 + 15872;
	// li r9,16
	ctx.r9.s64 = 16;
	// lvx128 v4,r0,r7
	simd::store_shuffled(ctx.v4, simd::load_and_shuffle(base + ((ctx.r7.u32) & ~0xF), VectorMaskL));
	// li r8,32
	ctx.r8.s64 = 32;
	// lvx128 v3,r0,r6
	simd::store_shuffled(ctx.v3, simd::load_and_shuffle(base + ((ctx.r6.u32) & ~0xF), VectorMaskL));
	// li r7,48
	ctx.r7.s64 = 48;
	// lvx128 v2,r0,r11
	simd::store_shuffled(ctx.v2, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// li r11,64
	ctx.r11.s64 = 64;
	// lvx128 v1,r0,r10
	simd::store_shuffled(ctx.v1, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// li r10,80
	ctx.r10.s64 = 80;
	// stvx128 v0,r31,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32 + ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r6,96
	ctx.r6.s64 = 96;
	// stvx128 v13,r31,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32 + ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r9,112
	ctx.r9.s64 = 112;
	// li r8,128
	ctx.r8.s64 = 128;
	// stvx128 v12,r31,r7
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32 + ctx.r7.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v11,r31,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32 + ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r7,160
	ctx.r7.s64 = 160;
	// stvx128 v10,r31,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32 + ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v10.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,192
	ctx.r11.s64 = 192;
	// stvx128 v9,r31,r6
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32 + ctx.r6.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v9.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r10,224
	ctx.r10.s64 = 224;
	// stvx128 v8,r31,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32 + ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v8.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r6,256
	ctx.r6.s64 = 256;
	// stvx128 v7,r31,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32 + ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v7.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r9,288
	ctx.r9.s64 = 288;
	// li r8,320
	ctx.r8.s64 = 320;
	// stvx128 v6,r31,r7
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32 + ctx.r7.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v6.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r5,64
	ctx.r5.s64 = 64;
	// stvx128 v5,r31,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32 + ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v5.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r4,0
	ctx.r4.s64 = 0;
	// stvx128 v4,r31,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32 + ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v4.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r3,r31,336
	ctx.r3.s64 = ctx.r31.s64 + 336;
	// stvx128 v3,r31,r6
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32 + ctx.r6.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v3.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v2,r31,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32 + ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v2.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v1,r31,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32 + ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v1.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// bl 0x82fa7cf0
	ctx.lr = 0x8315BBEC;
	sub_82FA7CF0(ctx, base);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// lis r10,-32231
	ctx.r10.s64 = -2112290816;
	// addi r11,r11,15312
	ctx.r11.s64 = ctx.r11.s64 + 15312;
	// addi r10,r10,27984
	ctx.r10.s64 = ctx.r10.s64 + 27984;
	// lis r9,-32227
	ctx.r9.s64 = -2112028672;
	// lvx128 v0,r0,r11
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// li r7,400
	ctx.r7.s64 = 400;
	// vor v13,v0,v0
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_load_si128((__m128i*)ctx.v0.u8));
	// li r6,432
	ctx.r6.s64 = 432;
	// vor v12,v0,v0
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_load_si128((__m128i*)ctx.v0.u8));
	// li r11,528
	ctx.r11.s64 = 528;
	// vor v11,v0,v0
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_load_si128((__m128i*)ctx.v0.u8));
	// li r30,464
	ctx.r30.s64 = 464;
	// vor v10,v0,v0
	_mm_store_si128((__m128i*)ctx.v10.u8, _mm_load_si128((__m128i*)ctx.v0.u8));
	// li r29,496
	ctx.r29.s64 = 496;
	// lfs f0,-2340(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -2340);
	ctx.f0.f64 = double(temp.f32);
	// li r5,128
	ctx.r5.s64 = 128;
	// lfs f13,2584(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2584);
	ctx.f13.f64 = double(temp.f32);
	// li r4,0
	ctx.r4.s64 = 0;
	// lfs f12,-24756(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -24756);
	ctx.f12.f64 = double(temp.f32);
	// addi r3,r31,560
	ctx.r3.s64 = ctx.r31.s64 + 560;
	// stfs f13,416(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 416, temp.u32);
	// stfs f12,420(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 420, temp.u32);
	// stfs f0,448(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 448, temp.u32);
	// stfs f0,452(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 452, temp.u32);
	// stfs f0,480(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 480, temp.u32);
	// stfs f0,484(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 484, temp.u32);
	// stfs f0,512(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 512, temp.u32);
	// stfs f0,516(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 516, temp.u32);
	// stfs f0,544(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 544, temp.u32);
	// stfs f0,548(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 548, temp.u32);
	// stvx128 v0,r31,r7
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32 + ctx.r7.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v13,r31,r6
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32 + ctx.r6.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v12,r31,r30
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32 + ctx.r30.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v11,r31,r29
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32 + ctx.r29.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v10,r31,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32 + ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v10.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// bl 0x82fa7cf0
	ctx.lr = 0x8315BC84;
	sub_82FA7CF0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82fa76c0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8315BC8C"))) PPC_WEAK_FUNC(sub_8315BC8C);
PPC_FUNC_IMPL(__imp__sub_8315BC8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8315BC90"))) PPC_WEAK_FUNC(sub_8315BC90);
PPC_FUNC_IMPL(__imp__sub_8315BC90) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7674
	ctx.lr = 0x8315BC98;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// lis r10,-32227
	ctx.r10.s64 = -2112028672;
	// lis r9,-32227
	ctx.r9.s64 = -2112028672;
	// lis r8,-32227
	ctx.r8.s64 = -2112028672;
	// lis r7,-32227
	ctx.r7.s64 = -2112028672;
	// addi r11,r11,16000
	ctx.r11.s64 = ctx.r11.s64 + 16000;
	// addi r10,r10,15984
	ctx.r10.s64 = ctx.r10.s64 + 15984;
	// addi r9,r9,15920
	ctx.r9.s64 = ctx.r9.s64 + 15920;
	// addi r8,r8,15904
	ctx.r8.s64 = ctx.r8.s64 + 15904;
	// addi r7,r7,15968
	ctx.r7.s64 = ctx.r7.s64 + 15968;
	// lis r4,-32227
	ctx.r4.s64 = -2112028672;
	// lvx128 v0,r0,r11
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// lis r3,-32227
	ctx.r3.s64 = -2112028672;
	// lvx128 v13,r0,r10
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// lis r31,-32227
	ctx.r31.s64 = -2112028672;
	// lvx128 v12,r0,r9
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// lis r30,-32227
	ctx.r30.s64 = -2112028672;
	// lvx128 v11,r0,r8
	simd::store_shuffled(ctx.v11, simd::load_and_shuffle(base + ((ctx.r8.u32) & ~0xF), VectorMaskL));
	// lis r6,-32227
	ctx.r6.s64 = -2112028672;
	// lvx128 v10,r0,r7
	simd::store_shuffled(ctx.v10, simd::load_and_shuffle(base + ((ctx.r7.u32) & ~0xF), VectorMaskL));
	// lis r29,-32227
	ctx.r29.s64 = -2112028672;
	// addi r6,r6,15952
	ctx.r6.s64 = ctx.r6.s64 + 15952;
	// addi r11,r4,16096
	ctx.r11.s64 = ctx.r4.s64 + 16096;
	// addi r10,r3,15872
	ctx.r10.s64 = ctx.r3.s64 + 15872;
	// addi r9,r31,15888
	ctx.r9.s64 = ctx.r31.s64 + 15888;
	// addi r8,r30,15936
	ctx.r8.s64 = ctx.r30.s64 + 15936;
	// addi r7,r29,15856
	ctx.r7.s64 = ctx.r29.s64 + 15856;
	// lvx128 v9,r0,r6
	simd::store_shuffled(ctx.v9, simd::load_and_shuffle(base + ((ctx.r6.u32) & ~0xF), VectorMaskL));
	// lis r5,-32227
	ctx.r5.s64 = -2112028672;
	// lvx128 v6,r0,r11
	simd::store_shuffled(ctx.v6, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// lis r28,-31968
	ctx.r28.s64 = -2095054848;
	// lvx128 v5,r0,r10
	simd::store_shuffled(ctx.v5, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// lvx128 v4,r0,r9
	simd::store_shuffled(ctx.v4, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// addi r27,r5,15312
	ctx.r27.s64 = ctx.r5.s64 + 15312;
	// lvx128 v3,r0,r8
	simd::store_shuffled(ctx.v3, simd::load_and_shuffle(base + ((ctx.r8.u32) & ~0xF), VectorMaskL));
	// addi r31,r28,29088
	ctx.r31.s64 = ctx.r28.s64 + 29088;
	// lvx128 v2,r0,r7
	simd::store_shuffled(ctx.v2, simd::load_and_shuffle(base + ((ctx.r7.u32) & ~0xF), VectorMaskL));
	// li r6,16
	ctx.r6.s64 = 16;
	// li r11,32
	ctx.r11.s64 = 32;
	// li r10,48
	ctx.r10.s64 = 48;
	// li r9,64
	ctx.r9.s64 = 64;
	// lvx128 v8,r0,r27
	simd::store_shuffled(ctx.v8, simd::load_and_shuffle(base + ((ctx.r27.u32) & ~0xF), VectorMaskL));
	// li r8,80
	ctx.r8.s64 = 80;
	// vor v7,v8,v8
	_mm_store_si128((__m128i*)ctx.v7.u8, _mm_load_si128((__m128i*)ctx.v8.u8));
	// li r7,112
	ctx.r7.s64 = 112;
	// stvx128 v0,r31,r6
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32 + ctx.r6.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r5,96
	ctx.r5.s64 = 96;
	// stvx128 v13,r31,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32 + ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v12,r31,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32 + ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r6,128
	ctx.r6.s64 = 128;
	// stvx128 v11,r31,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32 + ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,160
	ctx.r11.s64 = 160;
	// stvx128 v10,r31,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32 + ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v10.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r10,192
	ctx.r10.s64 = 192;
	// stvx128 v8,r31,r7
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32 + ctx.r7.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v8.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r9,224
	ctx.r9.s64 = 224;
	// li r8,256
	ctx.r8.s64 = 256;
	// vor v1,v8,v8
	_mm_store_si128((__m128i*)ctx.v1.u8, _mm_load_si128((__m128i*)ctx.v8.u8));
	// li r7,320
	ctx.r7.s64 = 320;
	// stvx128 v9,r31,r5
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32 + ctx.r5.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v9.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r30,288
	ctx.r30.s64 = 288;
	// stvx128 v7,r31,r6
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32 + ctx.r6.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v7.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r5,64
	ctx.r5.s64 = 64;
	// stvx128 v6,r31,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32 + ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v6.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r4,0
	ctx.r4.s64 = 0;
	// stvx128 v5,r31,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32 + ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v5.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r3,r31,336
	ctx.r3.s64 = ctx.r31.s64 + 336;
	// stvx128 v4,r31,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32 + ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v4.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v3,r31,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32 + ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v3.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v2,r31,r30
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32 + ctx.r30.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v2.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v1,r31,r7
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32 + ctx.r7.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v1.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// bl 0x82fa7cf0
	ctx.lr = 0x8315BDBC;
	sub_82FA7CF0(ctx, base);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// lvx128 v0,r0,r27
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r27.u32) & ~0xF), VectorMaskL));
	// lis r10,-32227
	ctx.r10.s64 = -2112028672;
	// lis r9,-32227
	ctx.r9.s64 = -2112028672;
	// lis r8,-32227
	ctx.r8.s64 = -2112028672;
	// addi r11,r11,16080
	ctx.r11.s64 = ctx.r11.s64 + 16080;
	// addi r10,r10,16064
	ctx.r10.s64 = ctx.r10.s64 + 16064;
	// addi r9,r9,16048
	ctx.r9.s64 = ctx.r9.s64 + 16048;
	// addi r8,r8,16032
	ctx.r8.s64 = ctx.r8.s64 + 16032;
	// lvx128 v13,r0,r11
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// lis r7,-32231
	ctx.r7.s64 = -2112290816;
	// lvx128 v12,r0,r10
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// lvx128 v11,r0,r9
	simd::store_shuffled(ctx.v11, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// lis r9,-32231
	ctx.r9.s64 = -2112290816;
	// lvx128 v10,r0,r8
	simd::store_shuffled(ctx.v10, simd::load_and_shuffle(base + ((ctx.r8.u32) & ~0xF), VectorMaskL));
	// addi r10,r7,27984
	ctx.r10.s64 = ctx.r7.s64 + 27984;
	// li r8,400
	ctx.r8.s64 = 400;
	// lfs f11,-24756(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -24756);
	ctx.f11.f64 = double(temp.f32);
	// li r7,432
	ctx.r7.s64 = 432;
	// li r6,464
	ctx.r6.s64 = 464;
	// stfs f11,420(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 420, temp.u32);
	// li r11,496
	ctx.r11.s64 = 496;
	// lfs f13,11748(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 11748);
	ctx.f13.f64 = double(temp.f32);
	// li r30,528
	ctx.r30.s64 = 528;
	// lfs f0,2588(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2588);
	ctx.f0.f64 = double(temp.f32);
	// li r5,128
	ctx.r5.s64 = 128;
	// lfs f12,2584(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2584);
	ctx.f12.f64 = double(temp.f32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stfs f12,416(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 416, temp.u32);
	// addi r3,r31,560
	ctx.r3.s64 = ctx.r31.s64 + 560;
	// stfs f0,448(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 448, temp.u32);
	// stfs f13,452(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 452, temp.u32);
	// stfs f0,480(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 480, temp.u32);
	// stfs f13,484(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 484, temp.u32);
	// stfs f0,512(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 512, temp.u32);
	// stfs f13,516(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 516, temp.u32);
	// stfs f0,544(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 544, temp.u32);
	// stfs f13,548(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 548, temp.u32);
	// stvx128 v0,r31,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32 + ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v13,r31,r7
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32 + ctx.r7.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v12,r31,r6
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32 + ctx.r6.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v11,r31,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32 + ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v10,r31,r30
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32 + ctx.r30.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v10.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// bl 0x82fa7cf0
	ctx.lr = 0x8315BE70;
	sub_82FA7CF0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8315BE78"))) PPC_WEAK_FUNC(sub_8315BE78);
PPC_FUNC_IMPL(__imp__sub_8315BE78) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7674
	ctx.lr = 0x8315BE80;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r7,-32227
	ctx.r7.s64 = -2112028672;
	// lis r6,-32227
	ctx.r6.s64 = -2112028672;
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// lis r10,-32227
	ctx.r10.s64 = -2112028672;
	// lis r9,-32227
	ctx.r9.s64 = -2112028672;
	// lis r8,-32227
	ctx.r8.s64 = -2112028672;
	// addi r30,r7,15312
	ctx.r30.s64 = ctx.r7.s64 + 15312;
	// addi r7,r6,16128
	ctx.r7.s64 = ctx.r6.s64 + 16128;
	// addi r11,r11,16000
	ctx.r11.s64 = ctx.r11.s64 + 16000;
	// addi r10,r10,15920
	ctx.r10.s64 = ctx.r10.s64 + 15920;
	// addi r9,r9,15968
	ctx.r9.s64 = ctx.r9.s64 + 15968;
	// addi r8,r8,15952
	ctx.r8.s64 = ctx.r8.s64 + 15952;
	// lvx128 v10,r0,r30
	simd::store_shuffled(ctx.v10, simd::load_and_shuffle(base + ((ctx.r30.u32) & ~0xF), VectorMaskL));
	// lis r5,-32227
	ctx.r5.s64 = -2112028672;
	// lvx128 v6,r0,r7
	simd::store_shuffled(ctx.v6, simd::load_and_shuffle(base + ((ctx.r7.u32) & ~0xF), VectorMaskL));
	// lis r4,-32227
	ctx.r4.s64 = -2112028672;
	// lvx128 v0,r0,r11
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// lis r3,-32227
	ctx.r3.s64 = -2112028672;
	// lvx128 v13,r0,r10
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// lis r31,-31968
	ctx.r31.s64 = -2095054848;
	// lvx128 v12,r0,r9
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// lvx128 v11,r0,r8
	simd::store_shuffled(ctx.v11, simd::load_and_shuffle(base + ((ctx.r8.u32) & ~0xF), VectorMaskL));
	// addi r6,r5,15936
	ctx.r6.s64 = ctx.r5.s64 + 15936;
	// addi r31,r31,29776
	ctx.r31.s64 = ctx.r31.s64 + 29776;
	// vor v9,v10,v10
	_mm_store_si128((__m128i*)ctx.v9.u8, _mm_load_si128((__m128i*)ctx.v10.u8));
	// addi r11,r4,15888
	ctx.r11.s64 = ctx.r4.s64 + 15888;
	// vor v8,v10,v10
	_mm_store_si128((__m128i*)ctx.v8.u8, _mm_load_si128((__m128i*)ctx.v10.u8));
	// addi r10,r3,15872
	ctx.r10.s64 = ctx.r3.s64 + 15872;
	// vor v7,v10,v10
	_mm_store_si128((__m128i*)ctx.v7.u8, _mm_load_si128((__m128i*)ctx.v10.u8));
	// li r9,16
	ctx.r9.s64 = 16;
	// vor v2,v10,v10
	_mm_store_si128((__m128i*)ctx.v2.u8, _mm_load_si128((__m128i*)ctx.v10.u8));
	// li r8,32
	ctx.r8.s64 = 32;
	// lvx128 v5,r0,r6
	simd::store_shuffled(ctx.v5, simd::load_and_shuffle(base + ((ctx.r6.u32) & ~0xF), VectorMaskL));
	// li r7,80
	ctx.r7.s64 = 80;
	// vor v1,v10,v10
	_mm_store_si128((__m128i*)ctx.v1.u8, _mm_load_si128((__m128i*)ctx.v10.u8));
	// li r5,48
	ctx.r5.s64 = 48;
	// lvx128 v4,r0,r11
	simd::store_shuffled(ctx.v4, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// li r4,64
	ctx.r4.s64 = 64;
	// lvx128 v3,r0,r10
	simd::store_shuffled(ctx.v3, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// stvx128 v0,r31,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32 + ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r6,96
	ctx.r6.s64 = 96;
	// stvx128 v13,r31,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32 + ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,112
	ctx.r11.s64 = 112;
	// stvx128 v10,r31,r7
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32 + ctx.r7.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v10.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r10,128
	ctx.r10.s64 = 128;
	// li r7,224
	ctx.r7.s64 = 224;
	// stvx128 v12,r31,r5
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32 + ctx.r5.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r9,256
	ctx.r9.s64 = 256;
	// stvx128 v11,r31,r4
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32 + ctx.r4.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r8,288
	ctx.r8.s64 = 288;
	// stvx128 v9,r31,r6
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32 + ctx.r6.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v9.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r29,160
	ctx.r29.s64 = 160;
	// stvx128 v8,r31,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32 + ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v8.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r28,192
	ctx.r28.s64 = 192;
	// stvx128 v7,r31,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32 + ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v7.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r27,320
	ctx.r27.s64 = 320;
	// stvx128 v4,r31,r7
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32 + ctx.r7.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v4.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r5,64
	ctx.r5.s64 = 64;
	// stvx128 v3,r31,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32 + ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v3.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r4,0
	ctx.r4.s64 = 0;
	// stvx128 v2,r31,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32 + ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v2.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r3,r31,336
	ctx.r3.s64 = ctx.r31.s64 + 336;
	// stvx128 v6,r31,r29
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32 + ctx.r29.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v6.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v5,r31,r28
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32 + ctx.r28.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v5.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v1,r31,r27
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32 + ctx.r27.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v1.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// bl 0x82fa7cf0
	ctx.lr = 0x8315BF8C;
	sub_82FA7CF0(ctx, base);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// lvx128 v13,r0,r30
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r30.u32) & ~0xF), VectorMaskL));
	// lis r10,-32227
	ctx.r10.s64 = -2112028672;
	// vor v12,v13,v13
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_load_si128((__m128i*)ctx.v13.u8));
	// addi r11,r11,16112
	ctx.r11.s64 = ctx.r11.s64 + 16112;
	// vor v11,v13,v13
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_load_si128((__m128i*)ctx.v13.u8));
	// lis r9,-32231
	ctx.r9.s64 = -2112290816;
	// vor v10,v13,v13
	_mm_store_si128((__m128i*)ctx.v10.u8, _mm_load_si128((__m128i*)ctx.v13.u8));
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// addi r9,r9,27984
	ctx.r9.s64 = ctx.r9.s64 + 27984;
	// lfs f12,-24756(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -24756);
	ctx.f12.f64 = double(temp.f32);
	// li r10,400
	ctx.r10.s64 = 400;
	// lvx128 v0,r0,r11
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// li r11,432
	ctx.r11.s64 = 432;
	// li r7,464
	ctx.r7.s64 = 464;
	// lfs f0,-2340(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -2340);
	ctx.f0.f64 = double(temp.f32);
	// li r6,496
	ctx.r6.s64 = 496;
	// li r8,528
	ctx.r8.s64 = 528;
	// lfs f13,2592(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 2592);
	ctx.f13.f64 = double(temp.f32);
	// li r5,128
	ctx.r5.s64 = 128;
	// stfs f13,416(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 416, temp.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stfs f12,420(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 420, temp.u32);
	// addi r3,r31,560
	ctx.r3.s64 = ctx.r31.s64 + 560;
	// stfs f0,448(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 448, temp.u32);
	// stfs f0,452(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 452, temp.u32);
	// stfs f0,480(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 480, temp.u32);
	// stfs f0,484(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 484, temp.u32);
	// stfs f0,512(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 512, temp.u32);
	// stfs f0,516(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 516, temp.u32);
	// stfs f0,544(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 544, temp.u32);
	// stfs f0,548(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 548, temp.u32);
	// stvx128 v13,r31,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32 + ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v12,r31,r7
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32 + ctx.r7.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v11,r31,r6
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32 + ctx.r6.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v10,r31,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32 + ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v10.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v0,r31,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32 + ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// bl 0x82fa7cf0
	ctx.lr = 0x8315C024;
	sub_82FA7CF0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8315C02C"))) PPC_WEAK_FUNC(sub_8315C02C);
PPC_FUNC_IMPL(__imp__sub_8315C02C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8315C030"))) PPC_WEAK_FUNC(sub_8315C030);
PPC_FUNC_IMPL(__imp__sub_8315C030) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x8315C038;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// lis r10,-32227
	ctx.r10.s64 = -2112028672;
	// lis r9,-32227
	ctx.r9.s64 = -2112028672;
	// addi r11,r11,16288
	ctx.r11.s64 = ctx.r11.s64 + 16288;
	// addi r10,r10,16000
	ctx.r10.s64 = ctx.r10.s64 + 16000;
	// addi r9,r9,15984
	ctx.r9.s64 = ctx.r9.s64 + 15984;
	// lis r4,-32227
	ctx.r4.s64 = -2112028672;
	// lis r3,-32227
	ctx.r3.s64 = -2112028672;
	// lis r31,-32227
	ctx.r31.s64 = -2112028672;
	// lvx128 v0,r0,r11
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// lis r8,-32227
	ctx.r8.s64 = -2112028672;
	// lvx128 v13,r0,r10
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// lis r7,-32227
	ctx.r7.s64 = -2112028672;
	// lvx128 v12,r0,r9
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// addi r11,r4,16272
	ctx.r11.s64 = ctx.r4.s64 + 16272;
	// addi r8,r8,15968
	ctx.r8.s64 = ctx.r8.s64 + 15968;
	// addi r7,r7,15952
	ctx.r7.s64 = ctx.r7.s64 + 15952;
	// addi r10,r3,16256
	ctx.r10.s64 = ctx.r3.s64 + 16256;
	// addi r9,r31,16240
	ctx.r9.s64 = ctx.r31.s64 + 16240;
	// lis r5,-32227
	ctx.r5.s64 = -2112028672;
	// lvx128 v5,r0,r11
	simd::store_shuffled(ctx.v5, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// lis r6,-32227
	ctx.r6.s64 = -2112028672;
	// lvx128 v11,r0,r8
	simd::store_shuffled(ctx.v11, simd::load_and_shuffle(base + ((ctx.r8.u32) & ~0xF), VectorMaskL));
	// addi r5,r5,16224
	ctx.r5.s64 = ctx.r5.s64 + 16224;
	// lvx128 v10,r0,r7
	simd::store_shuffled(ctx.v10, simd::load_and_shuffle(base + ((ctx.r7.u32) & ~0xF), VectorMaskL));
	// lis r30,-32227
	ctx.r30.s64 = -2112028672;
	// lvx128 v4,r0,r10
	simd::store_shuffled(ctx.v4, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// lis r29,-31968
	ctx.r29.s64 = -2095054848;
	// lvx128 v3,r0,r9
	simd::store_shuffled(ctx.v3, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// addi r6,r6,15312
	ctx.r6.s64 = ctx.r6.s64 + 15312;
	// addi r31,r29,30464
	ctx.r31.s64 = ctx.r29.s64 + 30464;
	// addi r8,r30,15872
	ctx.r8.s64 = ctx.r30.s64 + 15872;
	// lvx128 v6,r0,r5
	simd::store_shuffled(ctx.v6, simd::load_and_shuffle(base + ((ctx.r5.u32) & ~0xF), VectorMaskL));
	// li r7,16
	ctx.r7.s64 = 16;
	// li r11,64
	ctx.r11.s64 = 64;
	// li r10,80
	ctx.r10.s64 = 80;
	// lvx128 v9,r0,r6
	simd::store_shuffled(ctx.v9, simd::load_and_shuffle(base + ((ctx.r6.u32) & ~0xF), VectorMaskL));
	// li r9,96
	ctx.r9.s64 = 96;
	// vor v8,v9,v9
	_mm_store_si128((__m128i*)ctx.v8.u8, _mm_load_si128((__m128i*)ctx.v9.u8));
	// li r4,32
	ctx.r4.s64 = 32;
	// lvx128 v2,r0,r8
	simd::store_shuffled(ctx.v2, simd::load_and_shuffle(base + ((ctx.r8.u32) & ~0xF), VectorMaskL));
	// li r5,48
	ctx.r5.s64 = 48;
	// stvx128 v0,r31,r7
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32 + ctx.r7.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v11,r31,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32 + ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r8,112
	ctx.r8.s64 = 112;
	// stvx128 v10,r31,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32 + ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v10.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r6,128
	ctx.r6.s64 = 128;
	// stvx128 v9,r31,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32 + ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v9.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r7,160
	ctx.r7.s64 = 160;
	// li r9,256
	ctx.r9.s64 = 256;
	// vor v7,v9,v9
	_mm_store_si128((__m128i*)ctx.v7.u8, _mm_load_si128((__m128i*)ctx.v9.u8));
	// li r11,288
	ctx.r11.s64 = 288;
	// vor v1,v9,v9
	_mm_store_si128((__m128i*)ctx.v1.u8, _mm_load_si128((__m128i*)ctx.v9.u8));
	// li r10,320
	ctx.r10.s64 = 320;
	// stvx128 v13,r31,r4
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32 + ctx.r4.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r30,192
	ctx.r30.s64 = 192;
	// stvx128 v12,r31,r5
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32 + ctx.r5.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r29,224
	ctx.r29.s64 = 224;
	// stvx128 v8,r31,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32 + ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v8.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r5,64
	ctx.r5.s64 = 64;
	// stvx128 v7,r31,r6
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32 + ctx.r6.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v7.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r4,0
	ctx.r4.s64 = 0;
	// stvx128 v6,r31,r7
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32 + ctx.r7.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v6.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r3,r31,336
	ctx.r3.s64 = ctx.r31.s64 + 336;
	// stvx128 v3,r31,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32 + ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v3.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v5,r31,r30
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32 + ctx.r30.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v5.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v4,r31,r29
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32 + ctx.r29.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v4.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v2,r31,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32 + ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v2.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v1,r31,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32 + ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v1.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// bl 0x82fa7cf0
	ctx.lr = 0x8315C154;
	sub_82FA7CF0(ctx, base);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// lis r9,-32227
	ctx.r9.s64 = -2112028672;
	// addi r11,r11,16208
	ctx.r11.s64 = ctx.r11.s64 + 16208;
	// lis r8,-32227
	ctx.r8.s64 = -2112028672;
	// lis r10,-32227
	ctx.r10.s64 = -2112028672;
	// lis r7,-32227
	ctx.r7.s64 = -2112028672;
	// addi r10,r10,16160
	ctx.r10.s64 = ctx.r10.s64 + 16160;
	// lvx128 v0,r0,r11
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// addi r11,r9,16192
	ctx.r11.s64 = ctx.r9.s64 + 16192;
	// addi r9,r8,16176
	ctx.r9.s64 = ctx.r8.s64 + 16176;
	// addi r8,r7,16144
	ctx.r8.s64 = ctx.r7.s64 + 16144;
	// lvx128 v13,r0,r10
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// lis r10,-32227
	ctx.r10.s64 = -2112028672;
	// lis r7,-32231
	ctx.r7.s64 = -2112290816;
	// lvx128 v12,r0,r11
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// lvx128 v11,r0,r9
	simd::store_shuffled(ctx.v11, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// lis r9,-32231
	ctx.r9.s64 = -2112290816;
	// lvx128 v10,r0,r8
	simd::store_shuffled(ctx.v10, simd::load_and_shuffle(base + ((ctx.r8.u32) & ~0xF), VectorMaskL));
	// addi r11,r7,27984
	ctx.r11.s64 = ctx.r7.s64 + 27984;
	// li r8,400
	ctx.r8.s64 = 400;
	// lfs f11,-24756(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -24756);
	ctx.f11.f64 = double(temp.f32);
	// li r7,432
	ctx.r7.s64 = 432;
	// li r6,464
	ctx.r6.s64 = 464;
	// stfs f11,420(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 420, temp.u32);
	// li r10,496
	ctx.r10.s64 = 496;
	// lfs f13,11748(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 11748);
	ctx.f13.f64 = double(temp.f32);
	// li r30,528
	ctx.r30.s64 = 528;
	// lfs f0,2596(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2596);
	ctx.f0.f64 = double(temp.f32);
	// li r5,128
	ctx.r5.s64 = 128;
	// lfs f12,2584(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 2584);
	ctx.f12.f64 = double(temp.f32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stfs f12,416(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 416, temp.u32);
	// addi r3,r31,560
	ctx.r3.s64 = ctx.r31.s64 + 560;
	// stfs f0,448(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 448, temp.u32);
	// stfs f13,452(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 452, temp.u32);
	// stfs f0,480(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 480, temp.u32);
	// stfs f13,484(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 484, temp.u32);
	// stfs f0,512(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 512, temp.u32);
	// stfs f13,516(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 516, temp.u32);
	// stfs f0,544(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 544, temp.u32);
	// stfs f13,548(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 548, temp.u32);
	// stvx128 v0,r31,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32 + ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v13,r31,r7
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32 + ctx.r7.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v12,r31,r6
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32 + ctx.r6.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v11,r31,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32 + ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v10,r31,r30
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32 + ctx.r30.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v10.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// bl 0x82fa7cf0
	ctx.lr = 0x8315C210;
	sub_82FA7CF0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8315C218"))) PPC_WEAK_FUNC(sub_8315C218);
PPC_FUNC_IMPL(__imp__sub_8315C218) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7670
	ctx.lr = 0x8315C220;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// lis r10,-32227
	ctx.r10.s64 = -2112028672;
	// lis r9,-32227
	ctx.r9.s64 = -2112028672;
	// lis r8,-32227
	ctx.r8.s64 = -2112028672;
	// addi r11,r11,16448
	ctx.r11.s64 = ctx.r11.s64 + 16448;
	// addi r10,r10,16432
	ctx.r10.s64 = ctx.r10.s64 + 16432;
	// addi r9,r9,16416
	ctx.r9.s64 = ctx.r9.s64 + 16416;
	// addi r8,r8,16400
	ctx.r8.s64 = ctx.r8.s64 + 16400;
	// lis r5,-32227
	ctx.r5.s64 = -2112028672;
	// lis r4,-32227
	ctx.r4.s64 = -2112028672;
	// lvx128 v0,r0,r11
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// lis r3,-32227
	ctx.r3.s64 = -2112028672;
	// lvx128 v13,r0,r10
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// lis r31,-32227
	ctx.r31.s64 = -2112028672;
	// lvx128 v12,r0,r9
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// lis r7,-32227
	ctx.r7.s64 = -2112028672;
	// lvx128 v11,r0,r8
	simd::store_shuffled(ctx.v11, simd::load_and_shuffle(base + ((ctx.r8.u32) & ~0xF), VectorMaskL));
	// lis r6,-32227
	ctx.r6.s64 = -2112028672;
	// addi r7,r7,16352
	ctx.r7.s64 = ctx.r7.s64 + 16352;
	// addi r6,r6,16336
	ctx.r6.s64 = ctx.r6.s64 + 16336;
	// addi r11,r5,16384
	ctx.r11.s64 = ctx.r5.s64 + 16384;
	// addi r10,r4,16368
	ctx.r10.s64 = ctx.r4.s64 + 16368;
	// addi r9,r3,15840
	ctx.r9.s64 = ctx.r3.s64 + 15840;
	// addi r8,r31,15936
	ctx.r8.s64 = ctx.r31.s64 + 15936;
	// lvx128 v10,r0,r7
	simd::store_shuffled(ctx.v10, simd::load_and_shuffle(base + ((ctx.r7.u32) & ~0xF), VectorMaskL));
	// lis r30,-32227
	ctx.r30.s64 = -2112028672;
	// lvx128 v9,r0,r6
	simd::store_shuffled(ctx.v9, simd::load_and_shuffle(base + ((ctx.r6.u32) & ~0xF), VectorMaskL));
	// lis r29,-32227
	ctx.r29.s64 = -2112028672;
	// lvx128 v8,r0,r11
	simd::store_shuffled(ctx.v8, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// lis r28,-32242
	ctx.r28.s64 = -2113011712;
	// lvx128 v7,r0,r10
	simd::store_shuffled(ctx.v7, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// lis r27,-32227
	ctx.r27.s64 = -2112028672;
	// lvx128 v6,r0,r9
	simd::store_shuffled(ctx.v6, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// lis r26,-31968
	ctx.r26.s64 = -2095054848;
	// lvx128 v5,r0,r8
	simd::store_shuffled(ctx.v5, simd::load_and_shuffle(base + ((ctx.r8.u32) & ~0xF), VectorMaskL));
	// addi r7,r30,15888
	ctx.r7.s64 = ctx.r30.s64 + 15888;
	// addi r31,r26,31152
	ctx.r31.s64 = ctx.r26.s64 + 31152;
	// addi r6,r29,15856
	ctx.r6.s64 = ctx.r29.s64 + 15856;
	// addi r11,r28,-29680
	ctx.r11.s64 = ctx.r28.s64 + -29680;
	// addi r10,r27,15872
	ctx.r10.s64 = ctx.r27.s64 + 15872;
	// li r9,16
	ctx.r9.s64 = 16;
	// lvx128 v4,r0,r7
	simd::store_shuffled(ctx.v4, simd::load_and_shuffle(base + ((ctx.r7.u32) & ~0xF), VectorMaskL));
	// li r8,32
	ctx.r8.s64 = 32;
	// lvx128 v3,r0,r6
	simd::store_shuffled(ctx.v3, simd::load_and_shuffle(base + ((ctx.r6.u32) & ~0xF), VectorMaskL));
	// li r7,48
	ctx.r7.s64 = 48;
	// lvx128 v2,r0,r11
	simd::store_shuffled(ctx.v2, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// li r11,64
	ctx.r11.s64 = 64;
	// lvx128 v1,r0,r10
	simd::store_shuffled(ctx.v1, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// li r10,80
	ctx.r10.s64 = 80;
	// stvx128 v0,r31,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32 + ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r6,96
	ctx.r6.s64 = 96;
	// stvx128 v13,r31,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32 + ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r9,112
	ctx.r9.s64 = 112;
	// li r8,128
	ctx.r8.s64 = 128;
	// stvx128 v12,r31,r7
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32 + ctx.r7.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v11,r31,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32 + ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r7,160
	ctx.r7.s64 = 160;
	// stvx128 v10,r31,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32 + ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v10.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,192
	ctx.r11.s64 = 192;
	// stvx128 v9,r31,r6
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32 + ctx.r6.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v9.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r10,224
	ctx.r10.s64 = 224;
	// stvx128 v8,r31,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32 + ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v8.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r6,256
	ctx.r6.s64 = 256;
	// stvx128 v7,r31,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32 + ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v7.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r9,288
	ctx.r9.s64 = 288;
	// li r8,320
	ctx.r8.s64 = 320;
	// stvx128 v6,r31,r7
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32 + ctx.r7.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v6.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r5,64
	ctx.r5.s64 = 64;
	// stvx128 v5,r31,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32 + ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v5.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r4,0
	ctx.r4.s64 = 0;
	// stvx128 v4,r31,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32 + ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v4.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r3,r31,336
	ctx.r3.s64 = ctx.r31.s64 + 336;
	// stvx128 v3,r31,r6
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32 + ctx.r6.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v3.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v2,r31,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32 + ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v2.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v1,r31,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32 + ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v1.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// bl 0x82fa7cf0
	ctx.lr = 0x8315C354;
	sub_82FA7CF0(ctx, base);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// lis r10,-32227
	ctx.r10.s64 = -2112028672;
	// lis r9,-32227
	ctx.r9.s64 = -2112028672;
	// addi r11,r11,15312
	ctx.r11.s64 = ctx.r11.s64 + 15312;
	// addi r10,r10,16320
	ctx.r10.s64 = ctx.r10.s64 + 16320;
	// lis r8,-32231
	ctx.r8.s64 = -2112290816;
	// lvx128 v0,r0,r11
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// lvx128 v13,r0,r10
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// addi r9,r9,16304
	ctx.r9.s64 = ctx.r9.s64 + 16304;
	// addi r10,r8,27984
	ctx.r10.s64 = ctx.r8.s64 + 27984;
	// vor v11,v0,v0
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_load_si128((__m128i*)ctx.v0.u8));
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// vor v10,v0,v0
	_mm_store_si128((__m128i*)ctx.v10.u8, _mm_load_si128((__m128i*)ctx.v0.u8));
	// lis r8,-32227
	ctx.r8.s64 = -2112028672;
	// lis r7,-32254
	ctx.r7.s64 = -2113798144;
	// lvx128 v12,r0,r9
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// li r6,400
	ctx.r6.s64 = 400;
	// lfs f13,2604(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2604);
	ctx.f13.f64 = double(temp.f32);
	// li r9,432
	ctx.r9.s64 = 432;
	// lfs f12,31512(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 31512);
	ctx.f12.f64 = double(temp.f32);
	// li r11,528
	ctx.r11.s64 = 528;
	// lfs f11,2600(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2600);
	ctx.f11.f64 = double(temp.f32);
	// li r10,496
	ctx.r10.s64 = 496;
	// li r30,464
	ctx.r30.s64 = 464;
	// lfs f0,-2340(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -2340);
	ctx.f0.f64 = double(temp.f32);
	// li r5,128
	ctx.r5.s64 = 128;
	// lfs f10,-24756(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -24756);
	ctx.f10.f64 = double(temp.f32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stfs f11,416(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 416, temp.u32);
	// addi r3,r31,560
	ctx.r3.s64 = ctx.r31.s64 + 560;
	// stfs f10,420(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 420, temp.u32);
	// stfs f13,448(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 448, temp.u32);
	// stfs f12,452(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 452, temp.u32);
	// stfs f13,480(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 480, temp.u32);
	// stfs f12,484(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 484, temp.u32);
	// stfs f0,512(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 512, temp.u32);
	// stfs f0,516(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 516, temp.u32);
	// stfs f0,544(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 544, temp.u32);
	// stfs f0,548(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 548, temp.u32);
	// stvx128 v0,r31,r6
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32 + ctx.r6.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v13,r31,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32 + ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v12,r31,r30
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32 + ctx.r30.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v11,r31,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32 + ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v10,r31,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32 + ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v10.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// bl 0x82fa7cf0
	ctx.lr = 0x8315C408;
	sub_82FA7CF0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82fa76c0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8315C410"))) PPC_WEAK_FUNC(sub_8315C410);
PPC_FUNC_IMPL(__imp__sub_8315C410) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7670
	ctx.lr = 0x8315C418;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// lis r10,-32227
	ctx.r10.s64 = -2112028672;
	// lis r9,-32227
	ctx.r9.s64 = -2112028672;
	// lis r8,-32227
	ctx.r8.s64 = -2112028672;
	// addi r11,r11,16576
	ctx.r11.s64 = ctx.r11.s64 + 16576;
	// addi r10,r10,16560
	ctx.r10.s64 = ctx.r10.s64 + 16560;
	// addi r9,r9,16544
	ctx.r9.s64 = ctx.r9.s64 + 16544;
	// addi r8,r8,16528
	ctx.r8.s64 = ctx.r8.s64 + 16528;
	// lis r5,-32227
	ctx.r5.s64 = -2112028672;
	// lis r4,-32227
	ctx.r4.s64 = -2112028672;
	// lvx128 v0,r0,r11
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// lis r3,-32227
	ctx.r3.s64 = -2112028672;
	// lvx128 v13,r0,r10
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// lis r31,-32227
	ctx.r31.s64 = -2112028672;
	// lvx128 v12,r0,r9
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// lis r7,-32227
	ctx.r7.s64 = -2112028672;
	// lvx128 v11,r0,r8
	simd::store_shuffled(ctx.v11, simd::load_and_shuffle(base + ((ctx.r8.u32) & ~0xF), VectorMaskL));
	// lis r6,-32227
	ctx.r6.s64 = -2112028672;
	// addi r7,r7,16480
	ctx.r7.s64 = ctx.r7.s64 + 16480;
	// addi r6,r6,16464
	ctx.r6.s64 = ctx.r6.s64 + 16464;
	// addi r11,r5,16512
	ctx.r11.s64 = ctx.r5.s64 + 16512;
	// addi r10,r4,16496
	ctx.r10.s64 = ctx.r4.s64 + 16496;
	// addi r9,r3,15840
	ctx.r9.s64 = ctx.r3.s64 + 15840;
	// addi r8,r31,15936
	ctx.r8.s64 = ctx.r31.s64 + 15936;
	// lvx128 v10,r0,r7
	simd::store_shuffled(ctx.v10, simd::load_and_shuffle(base + ((ctx.r7.u32) & ~0xF), VectorMaskL));
	// lis r30,-32227
	ctx.r30.s64 = -2112028672;
	// lvx128 v9,r0,r6
	simd::store_shuffled(ctx.v9, simd::load_and_shuffle(base + ((ctx.r6.u32) & ~0xF), VectorMaskL));
	// lis r29,-32227
	ctx.r29.s64 = -2112028672;
	// lvx128 v8,r0,r11
	simd::store_shuffled(ctx.v8, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// lis r28,-32242
	ctx.r28.s64 = -2113011712;
	// lvx128 v7,r0,r10
	simd::store_shuffled(ctx.v7, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// lis r27,-32227
	ctx.r27.s64 = -2112028672;
	// lvx128 v6,r0,r9
	simd::store_shuffled(ctx.v6, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// lis r26,-31968
	ctx.r26.s64 = -2095054848;
	// lvx128 v5,r0,r8
	simd::store_shuffled(ctx.v5, simd::load_and_shuffle(base + ((ctx.r8.u32) & ~0xF), VectorMaskL));
	// addi r7,r30,15888
	ctx.r7.s64 = ctx.r30.s64 + 15888;
	// addi r31,r26,31840
	ctx.r31.s64 = ctx.r26.s64 + 31840;
	// addi r6,r29,15856
	ctx.r6.s64 = ctx.r29.s64 + 15856;
	// addi r11,r28,-29680
	ctx.r11.s64 = ctx.r28.s64 + -29680;
	// addi r10,r27,15872
	ctx.r10.s64 = ctx.r27.s64 + 15872;
	// li r9,16
	ctx.r9.s64 = 16;
	// lvx128 v4,r0,r7
	simd::store_shuffled(ctx.v4, simd::load_and_shuffle(base + ((ctx.r7.u32) & ~0xF), VectorMaskL));
	// li r8,32
	ctx.r8.s64 = 32;
	// lvx128 v3,r0,r6
	simd::store_shuffled(ctx.v3, simd::load_and_shuffle(base + ((ctx.r6.u32) & ~0xF), VectorMaskL));
	// li r7,48
	ctx.r7.s64 = 48;
	// lvx128 v2,r0,r11
	simd::store_shuffled(ctx.v2, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// li r11,64
	ctx.r11.s64 = 64;
	// lvx128 v1,r0,r10
	simd::store_shuffled(ctx.v1, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// li r10,80
	ctx.r10.s64 = 80;
	// stvx128 v0,r31,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32 + ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r6,96
	ctx.r6.s64 = 96;
	// stvx128 v13,r31,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32 + ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r9,112
	ctx.r9.s64 = 112;
	// li r8,128
	ctx.r8.s64 = 128;
	// stvx128 v12,r31,r7
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32 + ctx.r7.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v11,r31,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32 + ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r7,160
	ctx.r7.s64 = 160;
	// stvx128 v10,r31,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32 + ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v10.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,192
	ctx.r11.s64 = 192;
	// stvx128 v9,r31,r6
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32 + ctx.r6.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v9.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r10,224
	ctx.r10.s64 = 224;
	// stvx128 v8,r31,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32 + ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v8.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r6,256
	ctx.r6.s64 = 256;
	// stvx128 v7,r31,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32 + ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v7.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r9,288
	ctx.r9.s64 = 288;
	// li r8,320
	ctx.r8.s64 = 320;
	// stvx128 v6,r31,r7
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32 + ctx.r7.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v6.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r5,64
	ctx.r5.s64 = 64;
	// stvx128 v5,r31,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32 + ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v5.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r4,0
	ctx.r4.s64 = 0;
	// stvx128 v4,r31,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32 + ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v4.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r3,r31,336
	ctx.r3.s64 = ctx.r31.s64 + 336;
	// stvx128 v3,r31,r6
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32 + ctx.r6.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v3.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v2,r31,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32 + ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v2.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v1,r31,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32 + ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v1.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// bl 0x82fa7cf0
	ctx.lr = 0x8315C54C;
	sub_82FA7CF0(ctx, base);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// lis r10,-32231
	ctx.r10.s64 = -2112290816;
	// addi r11,r11,15312
	ctx.r11.s64 = ctx.r11.s64 + 15312;
	// addi r10,r10,27984
	ctx.r10.s64 = ctx.r10.s64 + 27984;
	// lis r9,-32227
	ctx.r9.s64 = -2112028672;
	// lvx128 v0,r0,r11
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// li r7,400
	ctx.r7.s64 = 400;
	// vor v13,v0,v0
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_load_si128((__m128i*)ctx.v0.u8));
	// li r6,432
	ctx.r6.s64 = 432;
	// vor v12,v0,v0
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_load_si128((__m128i*)ctx.v0.u8));
	// li r11,528
	ctx.r11.s64 = 528;
	// vor v11,v0,v0
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_load_si128((__m128i*)ctx.v0.u8));
	// li r30,464
	ctx.r30.s64 = 464;
	// vor v10,v0,v0
	_mm_store_si128((__m128i*)ctx.v10.u8, _mm_load_si128((__m128i*)ctx.v0.u8));
	// li r29,496
	ctx.r29.s64 = 496;
	// lfs f0,-2340(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -2340);
	ctx.f0.f64 = double(temp.f32);
	// li r5,128
	ctx.r5.s64 = 128;
	// lfs f13,2604(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2604);
	ctx.f13.f64 = double(temp.f32);
	// li r4,0
	ctx.r4.s64 = 0;
	// lfs f12,-24756(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -24756);
	ctx.f12.f64 = double(temp.f32);
	// addi r3,r31,560
	ctx.r3.s64 = ctx.r31.s64 + 560;
	// stfs f13,416(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 416, temp.u32);
	// stfs f12,420(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 420, temp.u32);
	// stfs f0,448(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 448, temp.u32);
	// stfs f0,452(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 452, temp.u32);
	// stfs f0,480(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 480, temp.u32);
	// stfs f0,484(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 484, temp.u32);
	// stfs f0,512(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 512, temp.u32);
	// stfs f0,516(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 516, temp.u32);
	// stfs f0,544(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 544, temp.u32);
	// stfs f0,548(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 548, temp.u32);
	// stvx128 v0,r31,r7
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32 + ctx.r7.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v13,r31,r6
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32 + ctx.r6.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v12,r31,r30
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32 + ctx.r30.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v11,r31,r29
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32 + ctx.r29.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v10,r31,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32 + ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v10.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// bl 0x82fa7cf0
	ctx.lr = 0x8315C5E4;
	sub_82FA7CF0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82fa76c0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8315C5EC"))) PPC_WEAK_FUNC(sub_8315C5EC);
PPC_FUNC_IMPL(__imp__sub_8315C5EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8315C5F0"))) PPC_WEAK_FUNC(sub_8315C5F0);
PPC_FUNC_IMPL(__imp__sub_8315C5F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7670
	ctx.lr = 0x8315C5F8;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// lis r10,-32227
	ctx.r10.s64 = -2112028672;
	// lis r9,-32227
	ctx.r9.s64 = -2112028672;
	// lis r8,-32227
	ctx.r8.s64 = -2112028672;
	// addi r11,r11,16768
	ctx.r11.s64 = ctx.r11.s64 + 16768;
	// addi r10,r10,16752
	ctx.r10.s64 = ctx.r10.s64 + 16752;
	// addi r9,r9,16736
	ctx.r9.s64 = ctx.r9.s64 + 16736;
	// addi r8,r8,16720
	ctx.r8.s64 = ctx.r8.s64 + 16720;
	// lis r5,-32227
	ctx.r5.s64 = -2112028672;
	// lis r4,-32227
	ctx.r4.s64 = -2112028672;
	// lvx128 v0,r0,r11
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// lis r3,-32227
	ctx.r3.s64 = -2112028672;
	// lvx128 v13,r0,r10
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// lis r31,-32227
	ctx.r31.s64 = -2112028672;
	// lvx128 v12,r0,r9
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// lis r7,-32227
	ctx.r7.s64 = -2112028672;
	// lvx128 v11,r0,r8
	simd::store_shuffled(ctx.v11, simd::load_and_shuffle(base + ((ctx.r8.u32) & ~0xF), VectorMaskL));
	// lis r6,-32227
	ctx.r6.s64 = -2112028672;
	// addi r7,r7,16672
	ctx.r7.s64 = ctx.r7.s64 + 16672;
	// addi r6,r6,16656
	ctx.r6.s64 = ctx.r6.s64 + 16656;
	// addi r11,r5,16704
	ctx.r11.s64 = ctx.r5.s64 + 16704;
	// addi r10,r4,16688
	ctx.r10.s64 = ctx.r4.s64 + 16688;
	// addi r9,r3,15840
	ctx.r9.s64 = ctx.r3.s64 + 15840;
	// addi r8,r31,15936
	ctx.r8.s64 = ctx.r31.s64 + 15936;
	// lvx128 v10,r0,r7
	simd::store_shuffled(ctx.v10, simd::load_and_shuffle(base + ((ctx.r7.u32) & ~0xF), VectorMaskL));
	// lis r30,-32227
	ctx.r30.s64 = -2112028672;
	// lvx128 v9,r0,r6
	simd::store_shuffled(ctx.v9, simd::load_and_shuffle(base + ((ctx.r6.u32) & ~0xF), VectorMaskL));
	// lis r29,-32227
	ctx.r29.s64 = -2112028672;
	// lvx128 v8,r0,r11
	simd::store_shuffled(ctx.v8, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// lis r28,-32242
	ctx.r28.s64 = -2113011712;
	// lvx128 v7,r0,r10
	simd::store_shuffled(ctx.v7, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// lis r27,-32227
	ctx.r27.s64 = -2112028672;
	// lvx128 v6,r0,r9
	simd::store_shuffled(ctx.v6, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// lis r26,-31968
	ctx.r26.s64 = -2095054848;
	// lvx128 v5,r0,r8
	simd::store_shuffled(ctx.v5, simd::load_and_shuffle(base + ((ctx.r8.u32) & ~0xF), VectorMaskL));
	// addi r7,r30,15888
	ctx.r7.s64 = ctx.r30.s64 + 15888;
	// addi r31,r26,32528
	ctx.r31.s64 = ctx.r26.s64 + 32528;
	// addi r6,r29,15856
	ctx.r6.s64 = ctx.r29.s64 + 15856;
	// addi r11,r28,-29680
	ctx.r11.s64 = ctx.r28.s64 + -29680;
	// addi r10,r27,15872
	ctx.r10.s64 = ctx.r27.s64 + 15872;
	// li r9,16
	ctx.r9.s64 = 16;
	// lvx128 v4,r0,r7
	simd::store_shuffled(ctx.v4, simd::load_and_shuffle(base + ((ctx.r7.u32) & ~0xF), VectorMaskL));
	// li r8,32
	ctx.r8.s64 = 32;
	// lvx128 v3,r0,r6
	simd::store_shuffled(ctx.v3, simd::load_and_shuffle(base + ((ctx.r6.u32) & ~0xF), VectorMaskL));
	// li r7,48
	ctx.r7.s64 = 48;
	// lvx128 v2,r0,r11
	simd::store_shuffled(ctx.v2, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// li r11,64
	ctx.r11.s64 = 64;
	// lvx128 v1,r0,r10
	simd::store_shuffled(ctx.v1, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// li r10,80
	ctx.r10.s64 = 80;
	// stvx128 v0,r31,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32 + ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r6,96
	ctx.r6.s64 = 96;
	// stvx128 v13,r31,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32 + ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r9,112
	ctx.r9.s64 = 112;
	// li r8,128
	ctx.r8.s64 = 128;
	// stvx128 v12,r31,r7
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32 + ctx.r7.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v11,r31,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32 + ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r7,160
	ctx.r7.s64 = 160;
	// stvx128 v10,r31,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32 + ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v10.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,192
	ctx.r11.s64 = 192;
	// stvx128 v9,r31,r6
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32 + ctx.r6.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v9.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r10,224
	ctx.r10.s64 = 224;
	// stvx128 v8,r31,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32 + ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v8.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r6,256
	ctx.r6.s64 = 256;
	// stvx128 v7,r31,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32 + ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v7.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r9,288
	ctx.r9.s64 = 288;
	// li r8,320
	ctx.r8.s64 = 320;
	// stvx128 v6,r31,r7
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32 + ctx.r7.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v6.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r5,64
	ctx.r5.s64 = 64;
	// stvx128 v5,r31,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32 + ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v5.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r4,0
	ctx.r4.s64 = 0;
	// stvx128 v4,r31,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32 + ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v4.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r3,r31,336
	ctx.r3.s64 = ctx.r31.s64 + 336;
	// stvx128 v3,r31,r6
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32 + ctx.r6.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v3.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v2,r31,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32 + ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v2.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v1,r31,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32 + ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v1.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// bl 0x82fa7cf0
	ctx.lr = 0x8315C72C;
	sub_82FA7CF0(ctx, base);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// lis r10,-32227
	ctx.r10.s64 = -2112028672;
	// lis r9,-32227
	ctx.r9.s64 = -2112028672;
	// lis r8,-32227
	ctx.r8.s64 = -2112028672;
	// lis r7,-32227
	ctx.r7.s64 = -2112028672;
	// addi r11,r11,15312
	ctx.r11.s64 = ctx.r11.s64 + 15312;
	// addi r10,r10,16640
	ctx.r10.s64 = ctx.r10.s64 + 16640;
	// addi r9,r9,16624
	ctx.r9.s64 = ctx.r9.s64 + 16624;
	// addi r8,r8,16608
	ctx.r8.s64 = ctx.r8.s64 + 16608;
	// addi r7,r7,16592
	ctx.r7.s64 = ctx.r7.s64 + 16592;
	// lvx128 v0,r0,r11
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// lis r6,-32231
	ctx.r6.s64 = -2112290816;
	// lvx128 v13,r0,r10
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// lis r5,-32231
	ctx.r5.s64 = -2112290816;
	// lvx128 v12,r0,r9
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// lvx128 v11,r0,r8
	simd::store_shuffled(ctx.v11, simd::load_and_shuffle(base + ((ctx.r8.u32) & ~0xF), VectorMaskL));
	// addi r6,r6,27984
	ctx.r6.s64 = ctx.r6.s64 + 27984;
	// lvx128 v10,r0,r7
	simd::store_shuffled(ctx.v10, simd::load_and_shuffle(base + ((ctx.r7.u32) & ~0xF), VectorMaskL));
	// li r10,400
	ctx.r10.s64 = 400;
	// lfs f11,-24756(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -24756);
	ctx.f11.f64 = double(temp.f32);
	// li r9,432
	ctx.r9.s64 = 432;
	// li r8,464
	ctx.r8.s64 = 464;
	// stfs f11,420(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 420, temp.u32);
	// li r7,496
	ctx.r7.s64 = 496;
	// lfs f13,11748(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 11748);
	ctx.f13.f64 = double(temp.f32);
	// li r11,528
	ctx.r11.s64 = 528;
	// lfs f0,2592(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 2592);
	ctx.f0.f64 = double(temp.f32);
	// li r5,128
	ctx.r5.s64 = 128;
	// lfs f12,2584(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 2584);
	ctx.f12.f64 = double(temp.f32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stfs f12,416(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 416, temp.u32);
	// addi r3,r31,560
	ctx.r3.s64 = ctx.r31.s64 + 560;
	// stfs f0,448(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 448, temp.u32);
	// stfs f13,452(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 452, temp.u32);
	// stfs f0,480(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 480, temp.u32);
	// stfs f13,484(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 484, temp.u32);
	// stfs f0,512(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 512, temp.u32);
	// stfs f13,516(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 516, temp.u32);
	// stfs f0,544(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 544, temp.u32);
	// stfs f13,548(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 548, temp.u32);
	// stvx128 v0,r31,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32 + ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v13,r31,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32 + ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v12,r31,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32 + ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v11,r31,r7
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32 + ctx.r7.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v10,r31,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32 + ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v10.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// bl 0x82fa7cf0
	ctx.lr = 0x8315C7E8;
	sub_82FA7CF0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82fa76c0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8315C7F0"))) PPC_WEAK_FUNC(sub_8315C7F0);
PPC_FUNC_IMPL(__imp__sub_8315C7F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7670
	ctx.lr = 0x8315C7F8;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// lis r10,-32227
	ctx.r10.s64 = -2112028672;
	// lis r9,-32227
	ctx.r9.s64 = -2112028672;
	// lis r8,-32227
	ctx.r8.s64 = -2112028672;
	// addi r11,r11,16960
	ctx.r11.s64 = ctx.r11.s64 + 16960;
	// addi r10,r10,16944
	ctx.r10.s64 = ctx.r10.s64 + 16944;
	// addi r9,r9,16928
	ctx.r9.s64 = ctx.r9.s64 + 16928;
	// addi r8,r8,16912
	ctx.r8.s64 = ctx.r8.s64 + 16912;
	// lis r5,-32227
	ctx.r5.s64 = -2112028672;
	// lis r4,-32227
	ctx.r4.s64 = -2112028672;
	// lvx128 v0,r0,r11
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// lis r3,-32227
	ctx.r3.s64 = -2112028672;
	// lvx128 v13,r0,r10
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// lis r31,-32227
	ctx.r31.s64 = -2112028672;
	// lvx128 v12,r0,r9
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// lis r7,-32227
	ctx.r7.s64 = -2112028672;
	// lvx128 v11,r0,r8
	simd::store_shuffled(ctx.v11, simd::load_and_shuffle(base + ((ctx.r8.u32) & ~0xF), VectorMaskL));
	// lis r6,-32227
	ctx.r6.s64 = -2112028672;
	// addi r7,r7,16864
	ctx.r7.s64 = ctx.r7.s64 + 16864;
	// addi r6,r6,16848
	ctx.r6.s64 = ctx.r6.s64 + 16848;
	// addi r11,r5,16896
	ctx.r11.s64 = ctx.r5.s64 + 16896;
	// addi r10,r4,16880
	ctx.r10.s64 = ctx.r4.s64 + 16880;
	// addi r9,r3,15840
	ctx.r9.s64 = ctx.r3.s64 + 15840;
	// addi r8,r31,15936
	ctx.r8.s64 = ctx.r31.s64 + 15936;
	// lvx128 v10,r0,r7
	simd::store_shuffled(ctx.v10, simd::load_and_shuffle(base + ((ctx.r7.u32) & ~0xF), VectorMaskL));
	// lis r30,-32227
	ctx.r30.s64 = -2112028672;
	// lvx128 v9,r0,r6
	simd::store_shuffled(ctx.v9, simd::load_and_shuffle(base + ((ctx.r6.u32) & ~0xF), VectorMaskL));
	// lis r29,-32227
	ctx.r29.s64 = -2112028672;
	// lvx128 v8,r0,r11
	simd::store_shuffled(ctx.v8, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// lis r28,-32242
	ctx.r28.s64 = -2113011712;
	// lvx128 v7,r0,r10
	simd::store_shuffled(ctx.v7, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// lis r27,-32227
	ctx.r27.s64 = -2112028672;
	// lvx128 v6,r0,r9
	simd::store_shuffled(ctx.v6, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// lis r26,-31967
	ctx.r26.s64 = -2094989312;
	// lvx128 v5,r0,r8
	simd::store_shuffled(ctx.v5, simd::load_and_shuffle(base + ((ctx.r8.u32) & ~0xF), VectorMaskL));
	// addi r7,r30,15888
	ctx.r7.s64 = ctx.r30.s64 + 15888;
	// addi r31,r26,-32320
	ctx.r31.s64 = ctx.r26.s64 + -32320;
	// addi r6,r29,15856
	ctx.r6.s64 = ctx.r29.s64 + 15856;
	// addi r11,r28,-29680
	ctx.r11.s64 = ctx.r28.s64 + -29680;
	// addi r10,r27,15872
	ctx.r10.s64 = ctx.r27.s64 + 15872;
	// li r9,16
	ctx.r9.s64 = 16;
	// lvx128 v4,r0,r7
	simd::store_shuffled(ctx.v4, simd::load_and_shuffle(base + ((ctx.r7.u32) & ~0xF), VectorMaskL));
	// li r8,32
	ctx.r8.s64 = 32;
	// lvx128 v3,r0,r6
	simd::store_shuffled(ctx.v3, simd::load_and_shuffle(base + ((ctx.r6.u32) & ~0xF), VectorMaskL));
	// li r7,48
	ctx.r7.s64 = 48;
	// lvx128 v2,r0,r11
	simd::store_shuffled(ctx.v2, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// li r11,64
	ctx.r11.s64 = 64;
	// lvx128 v1,r0,r10
	simd::store_shuffled(ctx.v1, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// li r10,80
	ctx.r10.s64 = 80;
	// stvx128 v0,r31,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32 + ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r6,96
	ctx.r6.s64 = 96;
	// stvx128 v13,r31,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32 + ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r9,112
	ctx.r9.s64 = 112;
	// li r8,128
	ctx.r8.s64 = 128;
	// stvx128 v12,r31,r7
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32 + ctx.r7.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v11,r31,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32 + ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r7,160
	ctx.r7.s64 = 160;
	// stvx128 v10,r31,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32 + ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v10.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,192
	ctx.r11.s64 = 192;
	// stvx128 v9,r31,r6
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32 + ctx.r6.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v9.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r10,224
	ctx.r10.s64 = 224;
	// stvx128 v8,r31,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32 + ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v8.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r6,256
	ctx.r6.s64 = 256;
	// stvx128 v7,r31,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32 + ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v7.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r9,288
	ctx.r9.s64 = 288;
	// li r8,320
	ctx.r8.s64 = 320;
	// stvx128 v6,r31,r7
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32 + ctx.r7.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v6.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r5,64
	ctx.r5.s64 = 64;
	// stvx128 v5,r31,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32 + ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v5.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r4,0
	ctx.r4.s64 = 0;
	// stvx128 v4,r31,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32 + ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v4.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r3,r31,336
	ctx.r3.s64 = ctx.r31.s64 + 336;
	// stvx128 v3,r31,r6
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32 + ctx.r6.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v3.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v2,r31,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32 + ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v2.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v1,r31,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32 + ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v1.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// bl 0x82fa7cf0
	ctx.lr = 0x8315C92C;
	sub_82FA7CF0(ctx, base);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// lis r10,-32227
	ctx.r10.s64 = -2112028672;
	// lis r9,-32227
	ctx.r9.s64 = -2112028672;
	// lis r8,-32227
	ctx.r8.s64 = -2112028672;
	// lis r7,-32227
	ctx.r7.s64 = -2112028672;
	// addi r11,r11,15312
	ctx.r11.s64 = ctx.r11.s64 + 15312;
	// addi r10,r10,16832
	ctx.r10.s64 = ctx.r10.s64 + 16832;
	// addi r9,r9,16816
	ctx.r9.s64 = ctx.r9.s64 + 16816;
	// addi r8,r8,16800
	ctx.r8.s64 = ctx.r8.s64 + 16800;
	// addi r7,r7,16784
	ctx.r7.s64 = ctx.r7.s64 + 16784;
	// lvx128 v0,r0,r11
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// lis r6,-32231
	ctx.r6.s64 = -2112290816;
	// lvx128 v13,r0,r10
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// lis r5,-32231
	ctx.r5.s64 = -2112290816;
	// lvx128 v12,r0,r9
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// lvx128 v11,r0,r8
	simd::store_shuffled(ctx.v11, simd::load_and_shuffle(base + ((ctx.r8.u32) & ~0xF), VectorMaskL));
	// addi r6,r6,27984
	ctx.r6.s64 = ctx.r6.s64 + 27984;
	// lvx128 v10,r0,r7
	simd::store_shuffled(ctx.v10, simd::load_and_shuffle(base + ((ctx.r7.u32) & ~0xF), VectorMaskL));
	// li r10,400
	ctx.r10.s64 = 400;
	// lfs f11,-24756(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -24756);
	ctx.f11.f64 = double(temp.f32);
	// li r9,432
	ctx.r9.s64 = 432;
	// li r8,464
	ctx.r8.s64 = 464;
	// stfs f11,420(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 420, temp.u32);
	// li r7,496
	ctx.r7.s64 = 496;
	// lfs f13,11748(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 11748);
	ctx.f13.f64 = double(temp.f32);
	// li r11,528
	ctx.r11.s64 = 528;
	// lfs f0,2596(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 2596);
	ctx.f0.f64 = double(temp.f32);
	// li r5,128
	ctx.r5.s64 = 128;
	// lfs f12,2584(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 2584);
	ctx.f12.f64 = double(temp.f32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stfs f12,416(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 416, temp.u32);
	// addi r3,r31,560
	ctx.r3.s64 = ctx.r31.s64 + 560;
	// stfs f0,448(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 448, temp.u32);
	// stfs f13,452(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 452, temp.u32);
	// stfs f0,480(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 480, temp.u32);
	// stfs f13,484(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 484, temp.u32);
	// stfs f0,512(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 512, temp.u32);
	// stfs f13,516(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 516, temp.u32);
	// stfs f0,544(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 544, temp.u32);
	// stfs f13,548(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 548, temp.u32);
	// stvx128 v0,r31,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32 + ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v13,r31,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32 + ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v12,r31,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32 + ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v11,r31,r7
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32 + ctx.r7.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v10,r31,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32 + ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v10.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// bl 0x82fa7cf0
	ctx.lr = 0x8315C9E8;
	sub_82FA7CF0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82fa76c0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8315C9F0"))) PPC_WEAK_FUNC(sub_8315C9F0);
PPC_FUNC_IMPL(__imp__sub_8315C9F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7670
	ctx.lr = 0x8315C9F8;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// lis r10,-32227
	ctx.r10.s64 = -2112028672;
	// lis r9,-32227
	ctx.r9.s64 = -2112028672;
	// lis r8,-32227
	ctx.r8.s64 = -2112028672;
	// addi r11,r11,17040
	ctx.r11.s64 = ctx.r11.s64 + 17040;
	// addi r10,r10,15792
	ctx.r10.s64 = ctx.r10.s64 + 15792;
	// addi r9,r9,17024
	ctx.r9.s64 = ctx.r9.s64 + 17024;
	// addi r8,r8,15984
	ctx.r8.s64 = ctx.r8.s64 + 15984;
	// lis r5,-32227
	ctx.r5.s64 = -2112028672;
	// lis r4,-32227
	ctx.r4.s64 = -2112028672;
	// lvx128 v0,r0,r11
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// lis r3,-32227
	ctx.r3.s64 = -2112028672;
	// lvx128 v13,r0,r10
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// lis r31,-32227
	ctx.r31.s64 = -2112028672;
	// lvx128 v12,r0,r9
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// lis r7,-32227
	ctx.r7.s64 = -2112028672;
	// lvx128 v11,r0,r8
	simd::store_shuffled(ctx.v11, simd::load_and_shuffle(base + ((ctx.r8.u32) & ~0xF), VectorMaskL));
	// lis r6,-32227
	ctx.r6.s64 = -2112028672;
	// addi r7,r7,16288
	ctx.r7.s64 = ctx.r7.s64 + 16288;
	// addi r6,r6,15728
	ctx.r6.s64 = ctx.r6.s64 + 15728;
	// addi r11,r5,-11488
	ctx.r11.s64 = ctx.r5.s64 + -11488;
	// addi r10,r4,17008
	ctx.r10.s64 = ctx.r4.s64 + 17008;
	// addi r9,r3,15840
	ctx.r9.s64 = ctx.r3.s64 + 15840;
	// addi r8,r31,15936
	ctx.r8.s64 = ctx.r31.s64 + 15936;
	// lvx128 v10,r0,r7
	simd::store_shuffled(ctx.v10, simd::load_and_shuffle(base + ((ctx.r7.u32) & ~0xF), VectorMaskL));
	// lis r30,-32227
	ctx.r30.s64 = -2112028672;
	// lvx128 v9,r0,r6
	simd::store_shuffled(ctx.v9, simd::load_and_shuffle(base + ((ctx.r6.u32) & ~0xF), VectorMaskL));
	// lis r29,-32227
	ctx.r29.s64 = -2112028672;
	// lvx128 v8,r0,r11
	simd::store_shuffled(ctx.v8, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// lis r28,-32242
	ctx.r28.s64 = -2113011712;
	// lvx128 v7,r0,r10
	simd::store_shuffled(ctx.v7, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// lis r27,-32227
	ctx.r27.s64 = -2112028672;
	// lvx128 v6,r0,r9
	simd::store_shuffled(ctx.v6, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// lis r26,-31967
	ctx.r26.s64 = -2094989312;
	// lvx128 v5,r0,r8
	simd::store_shuffled(ctx.v5, simd::load_and_shuffle(base + ((ctx.r8.u32) & ~0xF), VectorMaskL));
	// addi r7,r30,15888
	ctx.r7.s64 = ctx.r30.s64 + 15888;
	// addi r31,r26,-31632
	ctx.r31.s64 = ctx.r26.s64 + -31632;
	// addi r6,r29,15856
	ctx.r6.s64 = ctx.r29.s64 + 15856;
	// addi r11,r28,-29680
	ctx.r11.s64 = ctx.r28.s64 + -29680;
	// addi r10,r27,15872
	ctx.r10.s64 = ctx.r27.s64 + 15872;
	// li r9,16
	ctx.r9.s64 = 16;
	// lvx128 v4,r0,r7
	simd::store_shuffled(ctx.v4, simd::load_and_shuffle(base + ((ctx.r7.u32) & ~0xF), VectorMaskL));
	// li r8,32
	ctx.r8.s64 = 32;
	// lvx128 v3,r0,r6
	simd::store_shuffled(ctx.v3, simd::load_and_shuffle(base + ((ctx.r6.u32) & ~0xF), VectorMaskL));
	// li r7,48
	ctx.r7.s64 = 48;
	// lvx128 v2,r0,r11
	simd::store_shuffled(ctx.v2, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// li r11,64
	ctx.r11.s64 = 64;
	// lvx128 v1,r0,r10
	simd::store_shuffled(ctx.v1, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// li r10,80
	ctx.r10.s64 = 80;
	// stvx128 v0,r31,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32 + ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r6,96
	ctx.r6.s64 = 96;
	// stvx128 v13,r31,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32 + ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r9,112
	ctx.r9.s64 = 112;
	// li r8,128
	ctx.r8.s64 = 128;
	// stvx128 v12,r31,r7
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32 + ctx.r7.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v11,r31,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32 + ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r7,160
	ctx.r7.s64 = 160;
	// stvx128 v10,r31,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32 + ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v10.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,192
	ctx.r11.s64 = 192;
	// stvx128 v9,r31,r6
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32 + ctx.r6.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v9.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r10,224
	ctx.r10.s64 = 224;
	// stvx128 v8,r31,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32 + ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v8.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r6,256
	ctx.r6.s64 = 256;
	// stvx128 v7,r31,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32 + ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v7.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r9,288
	ctx.r9.s64 = 288;
	// li r8,320
	ctx.r8.s64 = 320;
	// stvx128 v6,r31,r7
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32 + ctx.r7.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v6.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r5,64
	ctx.r5.s64 = 64;
	// stvx128 v5,r31,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32 + ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v5.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r4,0
	ctx.r4.s64 = 0;
	// stvx128 v4,r31,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32 + ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v4.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r3,r31,336
	ctx.r3.s64 = ctx.r31.s64 + 336;
	// stvx128 v3,r31,r6
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32 + ctx.r6.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v3.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v2,r31,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32 + ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v2.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v1,r31,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32 + ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v1.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// bl 0x82fa7cf0
	ctx.lr = 0x8315CB2C;
	sub_82FA7CF0(ctx, base);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// lis r10,-32227
	ctx.r10.s64 = -2112028672;
	// lis r9,-32227
	ctx.r9.s64 = -2112028672;
	// lis r8,-32227
	ctx.r8.s64 = -2112028672;
	// addi r11,r11,16816
	ctx.r11.s64 = ctx.r11.s64 + 16816;
	// lvx128 v0,r0,r11
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// addi r11,r8,15312
	ctx.r11.s64 = ctx.r8.s64 + 15312;
	// addi r10,r10,16992
	ctx.r10.s64 = ctx.r10.s64 + 16992;
	// addi r9,r9,16976
	ctx.r9.s64 = ctx.r9.s64 + 16976;
	// lis r6,-32243
	ctx.r6.s64 = -2113077248;
	// lis r7,-32231
	ctx.r7.s64 = -2112290816;
	// lis r5,-32254
	ctx.r5.s64 = -2113798144;
	// lvx128 v11,r0,r11
	simd::store_shuffled(ctx.v11, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// addi r8,r7,27984
	ctx.r8.s64 = ctx.r7.s64 + 27984;
	// lvx128 v13,r0,r10
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// lvx128 v12,r0,r9
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// lis r7,-32227
	ctx.r7.s64 = -2112028672;
	// lfs f12,31512(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 31512);
	ctx.f12.f64 = double(temp.f32);
	// li r10,432
	ctx.r10.s64 = 432;
	// li r9,464
	ctx.r9.s64 = 464;
	// vor v10,v11,v11
	_mm_store_si128((__m128i*)ctx.v10.u8, _mm_load_si128((__m128i*)ctx.v11.u8));
	// li r11,496
	ctx.r11.s64 = 496;
	// lfs f0,-2340(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + -2340);
	ctx.f0.f64 = double(temp.f32);
	// li r6,528
	ctx.r6.s64 = 528;
	// lfs f13,2588(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 2588);
	ctx.f13.f64 = double(temp.f32);
	// li r30,400
	ctx.r30.s64 = 400;
	// lfs f10,-24756(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -24756);
	ctx.f10.f64 = double(temp.f32);
	// li r5,128
	ctx.r5.s64 = 128;
	// lfs f11,2584(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 2584);
	ctx.f11.f64 = double(temp.f32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stfs f11,416(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 416, temp.u32);
	// addi r3,r31,560
	ctx.r3.s64 = ctx.r31.s64 + 560;
	// stfs f10,420(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 420, temp.u32);
	// stfs f13,448(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 448, temp.u32);
	// stfs f12,452(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 452, temp.u32);
	// stfs f13,480(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 480, temp.u32);
	// stfs f12,484(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 484, temp.u32);
	// stfs f0,512(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 512, temp.u32);
	// stfs f0,516(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 516, temp.u32);
	// stfs f0,544(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 544, temp.u32);
	// stfs f0,548(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 548, temp.u32);
	// stvx128 v0,r31,r30
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32 + ctx.r30.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v11,r31,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32 + ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v13,r31,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32 + ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v12,r31,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32 + ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v10,r31,r6
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32 + ctx.r6.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v10.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// bl 0x82fa7cf0
	ctx.lr = 0x8315CBE8;
	sub_82FA7CF0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82fa76c0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8315CBF0"))) PPC_WEAK_FUNC(sub_8315CBF0);
PPC_FUNC_IMPL(__imp__sub_8315CBF0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7670
	ctx.lr = 0x8315CBF8;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// lis r10,-32227
	ctx.r10.s64 = -2112028672;
	// lis r9,-32227
	ctx.r9.s64 = -2112028672;
	// lis r8,-32227
	ctx.r8.s64 = -2112028672;
	// addi r11,r11,17184
	ctx.r11.s64 = ctx.r11.s64 + 17184;
	// addi r10,r10,15792
	ctx.r10.s64 = ctx.r10.s64 + 15792;
	// addi r9,r9,17168
	ctx.r9.s64 = ctx.r9.s64 + 17168;
	// addi r8,r8,15984
	ctx.r8.s64 = ctx.r8.s64 + 15984;
	// lis r5,-32227
	ctx.r5.s64 = -2112028672;
	// lis r4,-32227
	ctx.r4.s64 = -2112028672;
	// lvx128 v0,r0,r11
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// lis r3,-32227
	ctx.r3.s64 = -2112028672;
	// lvx128 v13,r0,r10
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// lis r31,-32227
	ctx.r31.s64 = -2112028672;
	// lvx128 v12,r0,r9
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// lis r7,-32227
	ctx.r7.s64 = -2112028672;
	// lvx128 v11,r0,r8
	simd::store_shuffled(ctx.v11, simd::load_and_shuffle(base + ((ctx.r8.u32) & ~0xF), VectorMaskL));
	// lis r6,-32227
	ctx.r6.s64 = -2112028672;
	// addi r7,r7,17120
	ctx.r7.s64 = ctx.r7.s64 + 17120;
	// addi r6,r6,17104
	ctx.r6.s64 = ctx.r6.s64 + 17104;
	// addi r11,r5,17152
	ctx.r11.s64 = ctx.r5.s64 + 17152;
	// addi r10,r4,17136
	ctx.r10.s64 = ctx.r4.s64 + 17136;
	// addi r9,r3,15840
	ctx.r9.s64 = ctx.r3.s64 + 15840;
	// addi r8,r31,15936
	ctx.r8.s64 = ctx.r31.s64 + 15936;
	// lvx128 v10,r0,r7
	simd::store_shuffled(ctx.v10, simd::load_and_shuffle(base + ((ctx.r7.u32) & ~0xF), VectorMaskL));
	// lis r30,-32227
	ctx.r30.s64 = -2112028672;
	// lvx128 v9,r0,r6
	simd::store_shuffled(ctx.v9, simd::load_and_shuffle(base + ((ctx.r6.u32) & ~0xF), VectorMaskL));
	// lis r29,-32227
	ctx.r29.s64 = -2112028672;
	// lvx128 v8,r0,r11
	simd::store_shuffled(ctx.v8, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// lis r28,-32242
	ctx.r28.s64 = -2113011712;
	// lvx128 v7,r0,r10
	simd::store_shuffled(ctx.v7, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// lis r27,-32227
	ctx.r27.s64 = -2112028672;
	// lvx128 v6,r0,r9
	simd::store_shuffled(ctx.v6, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// lis r26,-31967
	ctx.r26.s64 = -2094989312;
	// lvx128 v5,r0,r8
	simd::store_shuffled(ctx.v5, simd::load_and_shuffle(base + ((ctx.r8.u32) & ~0xF), VectorMaskL));
	// addi r7,r30,15888
	ctx.r7.s64 = ctx.r30.s64 + 15888;
	// addi r31,r26,-30944
	ctx.r31.s64 = ctx.r26.s64 + -30944;
	// addi r6,r29,15856
	ctx.r6.s64 = ctx.r29.s64 + 15856;
	// addi r11,r28,-29680
	ctx.r11.s64 = ctx.r28.s64 + -29680;
	// addi r10,r27,15872
	ctx.r10.s64 = ctx.r27.s64 + 15872;
	// li r9,16
	ctx.r9.s64 = 16;
	// lvx128 v4,r0,r7
	simd::store_shuffled(ctx.v4, simd::load_and_shuffle(base + ((ctx.r7.u32) & ~0xF), VectorMaskL));
	// li r8,32
	ctx.r8.s64 = 32;
	// lvx128 v3,r0,r6
	simd::store_shuffled(ctx.v3, simd::load_and_shuffle(base + ((ctx.r6.u32) & ~0xF), VectorMaskL));
	// li r7,48
	ctx.r7.s64 = 48;
	// lvx128 v2,r0,r11
	simd::store_shuffled(ctx.v2, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// li r11,64
	ctx.r11.s64 = 64;
	// lvx128 v1,r0,r10
	simd::store_shuffled(ctx.v1, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// li r10,80
	ctx.r10.s64 = 80;
	// stvx128 v0,r31,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32 + ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r6,96
	ctx.r6.s64 = 96;
	// stvx128 v13,r31,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32 + ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r9,112
	ctx.r9.s64 = 112;
	// li r8,128
	ctx.r8.s64 = 128;
	// stvx128 v12,r31,r7
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32 + ctx.r7.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v11,r31,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32 + ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r7,160
	ctx.r7.s64 = 160;
	// stvx128 v10,r31,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32 + ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v10.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,192
	ctx.r11.s64 = 192;
	// stvx128 v9,r31,r6
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32 + ctx.r6.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v9.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r10,224
	ctx.r10.s64 = 224;
	// stvx128 v8,r31,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32 + ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v8.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r6,256
	ctx.r6.s64 = 256;
	// stvx128 v7,r31,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32 + ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v7.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r9,288
	ctx.r9.s64 = 288;
	// li r8,320
	ctx.r8.s64 = 320;
	// stvx128 v6,r31,r7
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32 + ctx.r7.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v6.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r5,64
	ctx.r5.s64 = 64;
	// stvx128 v5,r31,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32 + ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v5.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r4,0
	ctx.r4.s64 = 0;
	// stvx128 v4,r31,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32 + ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v4.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r3,r31,336
	ctx.r3.s64 = ctx.r31.s64 + 336;
	// stvx128 v3,r31,r6
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32 + ctx.r6.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v3.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v2,r31,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32 + ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v2.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v1,r31,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32 + ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v1.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// bl 0x82fa7cf0
	ctx.lr = 0x8315CD2C;
	sub_82FA7CF0(ctx, base);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// lis r10,-32227
	ctx.r10.s64 = -2112028672;
	// lis r9,-32227
	ctx.r9.s64 = -2112028672;
	// lis r8,-32227
	ctx.r8.s64 = -2112028672;
	// addi r11,r11,17088
	ctx.r11.s64 = ctx.r11.s64 + 17088;
	// lvx128 v0,r0,r11
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// addi r11,r8,15312
	ctx.r11.s64 = ctx.r8.s64 + 15312;
	// addi r10,r10,17072
	ctx.r10.s64 = ctx.r10.s64 + 17072;
	// addi r9,r9,17056
	ctx.r9.s64 = ctx.r9.s64 + 17056;
	// lis r6,-32243
	ctx.r6.s64 = -2113077248;
	// lis r7,-32231
	ctx.r7.s64 = -2112290816;
	// lis r5,-32254
	ctx.r5.s64 = -2113798144;
	// lvx128 v11,r0,r11
	simd::store_shuffled(ctx.v11, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// addi r8,r7,27984
	ctx.r8.s64 = ctx.r7.s64 + 27984;
	// lvx128 v13,r0,r10
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// lvx128 v12,r0,r9
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// lis r7,-32227
	ctx.r7.s64 = -2112028672;
	// lfs f12,31512(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 31512);
	ctx.f12.f64 = double(temp.f32);
	// li r10,432
	ctx.r10.s64 = 432;
	// li r9,464
	ctx.r9.s64 = 464;
	// vor v10,v11,v11
	_mm_store_si128((__m128i*)ctx.v10.u8, _mm_load_si128((__m128i*)ctx.v11.u8));
	// li r11,496
	ctx.r11.s64 = 496;
	// lfs f0,-2340(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + -2340);
	ctx.f0.f64 = double(temp.f32);
	// li r6,528
	ctx.r6.s64 = 528;
	// lfs f13,2612(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 2612);
	ctx.f13.f64 = double(temp.f32);
	// li r30,400
	ctx.r30.s64 = 400;
	// lfs f10,-24756(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -24756);
	ctx.f10.f64 = double(temp.f32);
	// li r5,128
	ctx.r5.s64 = 128;
	// lfs f11,2608(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 2608);
	ctx.f11.f64 = double(temp.f32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stfs f11,416(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 416, temp.u32);
	// addi r3,r31,560
	ctx.r3.s64 = ctx.r31.s64 + 560;
	// stfs f10,420(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 420, temp.u32);
	// stfs f13,448(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 448, temp.u32);
	// stfs f12,452(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 452, temp.u32);
	// stfs f13,480(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 480, temp.u32);
	// stfs f12,484(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 484, temp.u32);
	// stfs f0,512(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 512, temp.u32);
	// stfs f0,516(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 516, temp.u32);
	// stfs f0,544(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 544, temp.u32);
	// stfs f0,548(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 548, temp.u32);
	// stvx128 v0,r31,r30
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32 + ctx.r30.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v11,r31,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32 + ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v13,r31,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32 + ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v12,r31,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32 + ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v10,r31,r6
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32 + ctx.r6.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v10.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// bl 0x82fa7cf0
	ctx.lr = 0x8315CDE8;
	sub_82FA7CF0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82fa76c0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8315CDF0"))) PPC_WEAK_FUNC(sub_8315CDF0);
PPC_FUNC_IMPL(__imp__sub_8315CDF0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7670
	ctx.lr = 0x8315CDF8;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// lis r10,-32227
	ctx.r10.s64 = -2112028672;
	// lis r9,-32227
	ctx.r9.s64 = -2112028672;
	// lis r8,-32227
	ctx.r8.s64 = -2112028672;
	// addi r11,r11,17296
	ctx.r11.s64 = ctx.r11.s64 + 17296;
	// addi r10,r10,15328
	ctx.r10.s64 = ctx.r10.s64 + 15328;
	// addi r9,r9,17280
	ctx.r9.s64 = ctx.r9.s64 + 17280;
	// addi r8,r8,17264
	ctx.r8.s64 = ctx.r8.s64 + 17264;
	// lis r5,-32227
	ctx.r5.s64 = -2112028672;
	// lis r4,-32227
	ctx.r4.s64 = -2112028672;
	// lvx128 v0,r0,r11
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// lis r3,-32227
	ctx.r3.s64 = -2112028672;
	// lvx128 v13,r0,r10
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// lis r31,-32227
	ctx.r31.s64 = -2112028672;
	// lvx128 v12,r0,r9
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// lis r7,-32227
	ctx.r7.s64 = -2112028672;
	// lvx128 v11,r0,r8
	simd::store_shuffled(ctx.v11, simd::load_and_shuffle(base + ((ctx.r8.u32) & ~0xF), VectorMaskL));
	// lis r6,-32227
	ctx.r6.s64 = -2112028672;
	// addi r7,r7,17216
	ctx.r7.s64 = ctx.r7.s64 + 17216;
	// addi r6,r6,17200
	ctx.r6.s64 = ctx.r6.s64 + 17200;
	// addi r11,r5,17248
	ctx.r11.s64 = ctx.r5.s64 + 17248;
	// addi r10,r4,17232
	ctx.r10.s64 = ctx.r4.s64 + 17232;
	// addi r9,r3,15840
	ctx.r9.s64 = ctx.r3.s64 + 15840;
	// addi r8,r31,15936
	ctx.r8.s64 = ctx.r31.s64 + 15936;
	// lvx128 v10,r0,r7
	simd::store_shuffled(ctx.v10, simd::load_and_shuffle(base + ((ctx.r7.u32) & ~0xF), VectorMaskL));
	// lis r30,-32227
	ctx.r30.s64 = -2112028672;
	// lvx128 v9,r0,r6
	simd::store_shuffled(ctx.v9, simd::load_and_shuffle(base + ((ctx.r6.u32) & ~0xF), VectorMaskL));
	// lis r29,-32227
	ctx.r29.s64 = -2112028672;
	// lvx128 v8,r0,r11
	simd::store_shuffled(ctx.v8, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// lis r28,-32242
	ctx.r28.s64 = -2113011712;
	// lvx128 v7,r0,r10
	simd::store_shuffled(ctx.v7, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// lis r27,-32227
	ctx.r27.s64 = -2112028672;
	// lvx128 v6,r0,r9
	simd::store_shuffled(ctx.v6, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// lis r26,-31967
	ctx.r26.s64 = -2094989312;
	// lvx128 v5,r0,r8
	simd::store_shuffled(ctx.v5, simd::load_and_shuffle(base + ((ctx.r8.u32) & ~0xF), VectorMaskL));
	// addi r7,r30,15888
	ctx.r7.s64 = ctx.r30.s64 + 15888;
	// addi r31,r26,-30256
	ctx.r31.s64 = ctx.r26.s64 + -30256;
	// addi r6,r29,15856
	ctx.r6.s64 = ctx.r29.s64 + 15856;
	// addi r11,r28,-29680
	ctx.r11.s64 = ctx.r28.s64 + -29680;
	// addi r10,r27,15872
	ctx.r10.s64 = ctx.r27.s64 + 15872;
	// li r9,16
	ctx.r9.s64 = 16;
	// lvx128 v4,r0,r7
	simd::store_shuffled(ctx.v4, simd::load_and_shuffle(base + ((ctx.r7.u32) & ~0xF), VectorMaskL));
	// li r8,32
	ctx.r8.s64 = 32;
	// lvx128 v3,r0,r6
	simd::store_shuffled(ctx.v3, simd::load_and_shuffle(base + ((ctx.r6.u32) & ~0xF), VectorMaskL));
	// li r7,48
	ctx.r7.s64 = 48;
	// lvx128 v2,r0,r11
	simd::store_shuffled(ctx.v2, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// li r11,64
	ctx.r11.s64 = 64;
	// lvx128 v1,r0,r10
	simd::store_shuffled(ctx.v1, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// li r10,80
	ctx.r10.s64 = 80;
	// stvx128 v0,r31,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32 + ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r6,96
	ctx.r6.s64 = 96;
	// stvx128 v13,r31,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32 + ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r9,112
	ctx.r9.s64 = 112;
	// li r8,128
	ctx.r8.s64 = 128;
	// stvx128 v12,r31,r7
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32 + ctx.r7.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v11,r31,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32 + ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r7,160
	ctx.r7.s64 = 160;
	// stvx128 v10,r31,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32 + ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v10.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,192
	ctx.r11.s64 = 192;
	// stvx128 v9,r31,r6
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32 + ctx.r6.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v9.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r10,224
	ctx.r10.s64 = 224;
	// stvx128 v8,r31,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32 + ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v8.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r6,256
	ctx.r6.s64 = 256;
	// stvx128 v7,r31,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32 + ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v7.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r9,288
	ctx.r9.s64 = 288;
	// li r8,320
	ctx.r8.s64 = 320;
	// stvx128 v6,r31,r7
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32 + ctx.r7.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v6.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r5,64
	ctx.r5.s64 = 64;
	// stvx128 v5,r31,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32 + ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v5.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r4,0
	ctx.r4.s64 = 0;
	// stvx128 v4,r31,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32 + ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v4.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r3,r31,336
	ctx.r3.s64 = ctx.r31.s64 + 336;
	// stvx128 v3,r31,r6
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32 + ctx.r6.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v3.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v2,r31,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32 + ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v2.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v1,r31,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32 + ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v1.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// bl 0x82fa7cf0
	ctx.lr = 0x8315CF2C;
	sub_82FA7CF0(ctx, base);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// lis r10,-32227
	ctx.r10.s64 = -2112028672;
	// addi r11,r11,15312
	ctx.r11.s64 = ctx.r11.s64 + 15312;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// li r8,400
	ctx.r8.s64 = 400;
	// lfs f0,-2340(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -2340);
	ctx.f0.f64 = double(temp.f32);
	// li r7,432
	ctx.r7.s64 = 432;
	// lvx128 v0,r0,r11
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// li r9,464
	ctx.r9.s64 = 464;
	// lfs f13,-24756(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -24756);
	ctx.f13.f64 = double(temp.f32);
	// li r10,496
	ctx.r10.s64 = 496;
	// li r6,528
	ctx.r6.s64 = 528;
	// vor v13,v0,v0
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_load_si128((__m128i*)ctx.v0.u8));
	// vor v12,v0,v0
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_load_si128((__m128i*)ctx.v0.u8));
	// li r5,128
	ctx.r5.s64 = 128;
	// vor v11,v0,v0
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_load_si128((__m128i*)ctx.v0.u8));
	// li r4,0
	ctx.r4.s64 = 0;
	// vor v10,v0,v0
	_mm_store_si128((__m128i*)ctx.v10.u8, _mm_load_si128((__m128i*)ctx.v0.u8));
	// addi r3,r31,560
	ctx.r3.s64 = ctx.r31.s64 + 560;
	// stfs f13,416(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 416, temp.u32);
	// stfs f13,420(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 420, temp.u32);
	// stfs f0,448(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 448, temp.u32);
	// stfs f0,452(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 452, temp.u32);
	// stfs f0,480(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 480, temp.u32);
	// stfs f0,484(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 484, temp.u32);
	// stfs f0,512(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 512, temp.u32);
	// stfs f0,516(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 516, temp.u32);
	// stfs f0,544(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 544, temp.u32);
	// stfs f0,548(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 548, temp.u32);
	// stvx128 v0,r31,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32 + ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v13,r31,r7
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32 + ctx.r7.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v12,r31,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32 + ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v11,r31,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32 + ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v10,r31,r6
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32 + ctx.r6.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v10.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// bl 0x82fa7cf0
	ctx.lr = 0x8315CFB8;
	sub_82FA7CF0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82fa76c0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8315CFC0"))) PPC_WEAK_FUNC(sub_8315CFC0);
PPC_FUNC_IMPL(__imp__sub_8315CFC0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// lis r10,-31955
	ctx.r10.s64 = -2094202880;
	// addi r11,r11,15312
	ctx.r11.s64 = ctx.r11.s64 + 15312;
	// addi r10,r10,29072
	ctx.r10.s64 = ctx.r10.s64 + 29072;
	// lvx128 v0,r0,r11
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// stvx128 v0,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8315CFDC"))) PPC_WEAK_FUNC(sub_8315CFDC);
PPC_FUNC_IMPL(__imp__sub_8315CFDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8315CFE0"))) PPC_WEAK_FUNC(sub_8315CFE0);
PPC_FUNC_IMPL(__imp__sub_8315CFE0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// lis r10,-31955
	ctx.r10.s64 = -2094202880;
	// addi r11,r11,15856
	ctx.r11.s64 = ctx.r11.s64 + 15856;
	// addi r10,r10,29088
	ctx.r10.s64 = ctx.r10.s64 + 29088;
	// lvx128 v0,r0,r11
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// stvx128 v0,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8315CFFC"))) PPC_WEAK_FUNC(sub_8315CFFC);
PPC_FUNC_IMPL(__imp__sub_8315CFFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8315D000"))) PPC_WEAK_FUNC(sub_8315D000);
PPC_FUNC_IMPL(__imp__sub_8315D000) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-31955
	ctx.r10.s64 = -2094202880;
	// addi r11,r11,-29680
	ctx.r11.s64 = ctx.r11.s64 + -29680;
	// addi r10,r10,29104
	ctx.r10.s64 = ctx.r10.s64 + 29104;
	// lvx128 v0,r0,r11
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// stvx128 v0,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8315D01C"))) PPC_WEAK_FUNC(sub_8315D01C);
PPC_FUNC_IMPL(__imp__sub_8315D01C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8315D020"))) PPC_WEAK_FUNC(sub_8315D020);
PPC_FUNC_IMPL(__imp__sub_8315D020) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// lis r10,-31955
	ctx.r10.s64 = -2094202880;
	// addi r11,r11,15840
	ctx.r11.s64 = ctx.r11.s64 + 15840;
	// addi r10,r10,29120
	ctx.r10.s64 = ctx.r10.s64 + 29120;
	// lvx128 v0,r0,r11
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// stvx128 v0,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8315D03C"))) PPC_WEAK_FUNC(sub_8315D03C);
PPC_FUNC_IMPL(__imp__sub_8315D03C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8315D040"))) PPC_WEAK_FUNC(sub_8315D040);
PPC_FUNC_IMPL(__imp__sub_8315D040) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// lis r10,-31955
	ctx.r10.s64 = -2094202880;
	// addi r11,r11,15936
	ctx.r11.s64 = ctx.r11.s64 + 15936;
	// addi r10,r10,29136
	ctx.r10.s64 = ctx.r10.s64 + 29136;
	// lvx128 v0,r0,r11
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// stvx128 v0,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8315D05C"))) PPC_WEAK_FUNC(sub_8315D05C);
PPC_FUNC_IMPL(__imp__sub_8315D05C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8315D060"))) PPC_WEAK_FUNC(sub_8315D060);
PPC_FUNC_IMPL(__imp__sub_8315D060) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// lis r10,-31955
	ctx.r10.s64 = -2094202880;
	// addi r11,r11,15872
	ctx.r11.s64 = ctx.r11.s64 + 15872;
	// addi r10,r10,29152
	ctx.r10.s64 = ctx.r10.s64 + 29152;
	// lvx128 v0,r0,r11
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// stvx128 v0,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8315D07C"))) PPC_WEAK_FUNC(sub_8315D07C);
PPC_FUNC_IMPL(__imp__sub_8315D07C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8315D080"))) PPC_WEAK_FUNC(sub_8315D080);
PPC_FUNC_IMPL(__imp__sub_8315D080) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// lis r10,-31955
	ctx.r10.s64 = -2094202880;
	// addi r11,r11,15888
	ctx.r11.s64 = ctx.r11.s64 + 15888;
	// addi r10,r10,29168
	ctx.r10.s64 = ctx.r10.s64 + 29168;
	// lvx128 v0,r0,r11
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// stvx128 v0,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8315D09C"))) PPC_WEAK_FUNC(sub_8315D09C);
PPC_FUNC_IMPL(__imp__sub_8315D09C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8315D0A0"))) PPC_WEAK_FUNC(sub_8315D0A0);
PPC_FUNC_IMPL(__imp__sub_8315D0A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r10,-31955
	ctx.r10.s64 = -2094202880;
	// addi r11,r11,-2340
	ctx.r11.s64 = ctx.r11.s64 + -2340;
	// lis r9,-32227
	ctx.r9.s64 = -2112028672;
	// addi r10,r10,29184
	ctx.r10.s64 = ctx.r10.s64 + 29184;
	// addi r9,r9,-24756
	ctx.r9.s64 = ctx.r9.s64 + -24756;
	// li r8,16
	ctx.r8.s64 = 16;
	// lvlx v13,0,r11
	temp.u32 = ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// li r11,32
	ctx.r11.s64 = 32;
	// vor v0,v13,v13
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_load_si128((__m128i*)ctx.v13.u8));
	// li r7,48
	ctx.r7.s64 = 48;
	// vor v11,v13,v13
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_load_si128((__m128i*)ctx.v13.u8));
	// li r6,64
	ctx.r6.s64 = 64;
	// li r5,80
	ctx.r5.s64 = 80;
	// li r4,96
	ctx.r4.s64 = 96;
	// vrlimi128 v0,v13,4,3
	_mm_store_ps(ctx.v0.f32, _mm_blend_ps(_mm_load_ps(ctx.v0.f32), _mm_permute_ps(_mm_load_ps(ctx.v13.f32), 57), 4));
	// li r3,112
	ctx.r3.s64 = 112;
	// vor v7,v0,v0
	_mm_store_si128((__m128i*)ctx.v7.u8, _mm_load_si128((__m128i*)ctx.v0.u8));
	// vrlimi128 v0,v7,3,2
	_mm_store_ps(ctx.v0.f32, _mm_blend_ps(_mm_load_ps(ctx.v0.f32), _mm_permute_ps(_mm_load_ps(ctx.v7.f32), 78), 3));
	// vor v12,v7,v7
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_load_si128((__m128i*)ctx.v7.u8));
	// stvx128 v0,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvlx v0,0,r9
	temp.u32 = ctx.r9.u32;
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vor v10,v0,v0
	_mm_store_si128((__m128i*)ctx.v10.u8, _mm_load_si128((__m128i*)ctx.v0.u8));
	// vor v9,v0,v0
	_mm_store_si128((__m128i*)ctx.v9.u8, _mm_load_si128((__m128i*)ctx.v0.u8));
	// vrlimi128 v11,v0,4,3
	_mm_store_ps(ctx.v11.f32, _mm_blend_ps(_mm_load_ps(ctx.v11.f32), _mm_permute_ps(_mm_load_ps(ctx.v0.f32), 57), 4));
	// vrlimi128 v10,v0,4,3
	_mm_store_ps(ctx.v10.f32, _mm_blend_ps(_mm_load_ps(ctx.v10.f32), _mm_permute_ps(_mm_load_ps(ctx.v0.f32), 57), 4));
	// vrlimi128 v9,v13,4,3
	_mm_store_ps(ctx.v9.f32, _mm_blend_ps(_mm_load_ps(ctx.v9.f32), _mm_permute_ps(_mm_load_ps(ctx.v13.f32), 57), 4));
	// vor v0,v11,v11
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_load_si128((__m128i*)ctx.v11.u8));
	// vor v8,v10,v10
	_mm_store_si128((__m128i*)ctx.v8.u8, _mm_load_si128((__m128i*)ctx.v10.u8));
	// vor v6,v9,v9
	_mm_store_si128((__m128i*)ctx.v6.u8, _mm_load_si128((__m128i*)ctx.v9.u8));
	// vor v13,v0,v0
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_load_si128((__m128i*)ctx.v0.u8));
	// vor v9,v0,v0
	_mm_store_si128((__m128i*)ctx.v9.u8, _mm_load_si128((__m128i*)ctx.v0.u8));
	// vor v11,v8,v8
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_load_si128((__m128i*)ctx.v8.u8));
	// vor v0,v6,v6
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_load_si128((__m128i*)ctx.v6.u8));
	// vor v10,v6,v6
	_mm_store_si128((__m128i*)ctx.v10.u8, _mm_load_si128((__m128i*)ctx.v6.u8));
	// vrlimi128 v13,v7,3,2
	_mm_store_ps(ctx.v13.f32, _mm_blend_ps(_mm_load_ps(ctx.v13.f32), _mm_permute_ps(_mm_load_ps(ctx.v7.f32), 78), 3));
	// vrlimi128 v12,v6,3,2
	_mm_store_ps(ctx.v12.f32, _mm_blend_ps(_mm_load_ps(ctx.v12.f32), _mm_permute_ps(_mm_load_ps(ctx.v6.f32), 78), 3));
	// vrlimi128 v0,v7,3,2
	_mm_store_ps(ctx.v0.f32, _mm_blend_ps(_mm_load_ps(ctx.v0.f32), _mm_permute_ps(_mm_load_ps(ctx.v7.f32), 78), 3));
	// vrlimi128 v11,v7,3,2
	_mm_store_ps(ctx.v11.f32, _mm_blend_ps(_mm_load_ps(ctx.v11.f32), _mm_permute_ps(_mm_load_ps(ctx.v7.f32), 78), 3));
	// vrlimi128 v10,v6,3,2
	_mm_store_ps(ctx.v10.f32, _mm_blend_ps(_mm_load_ps(ctx.v10.f32), _mm_permute_ps(_mm_load_ps(ctx.v6.f32), 78), 3));
	// stvx128 v13,r10,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32 + ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// vrlimi128 v9,v6,3,2
	_mm_store_ps(ctx.v9.f32, _mm_blend_ps(_mm_load_ps(ctx.v9.f32), _mm_permute_ps(_mm_load_ps(ctx.v6.f32), 78), 3));
	// stvx128 v12,r10,r7
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32 + ctx.r7.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// vrlimi128 v8,v6,3,2
	_mm_store_ps(ctx.v8.f32, _mm_blend_ps(_mm_load_ps(ctx.v8.f32), _mm_permute_ps(_mm_load_ps(ctx.v6.f32), 78), 3));
	// stvx128 v0,r10,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32 + ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v11,r10,r6
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32 + ctx.r6.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v10,r10,r5
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32 + ctx.r5.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v10.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v9,r10,r4
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32 + ctx.r4.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v9.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v8,r10,r3
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32 + ctx.r3.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v8.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8315D168"))) PPC_WEAK_FUNC(sub_8315D168);
PPC_FUNC_IMPL(__imp__sub_8315D168) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// lis r7,-32231
	ctx.r7.s64 = -2112290816;
	// addi r11,r11,-29568
	ctx.r11.s64 = ctx.r11.s64 + -29568;
	// lis r6,-32227
	ctx.r6.s64 = -2112028672;
	// lis r5,-32231
	ctx.r5.s64 = -2112290816;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r10,2
	ctx.r10.s64 = 2;
	// lfs f0,8072(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 8072);
	ctx.f0.f64 = double(temp.f32);
	// stw r8,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r8.u32);
	// li r9,6
	ctx.r9.s64 = 6;
	// lfs f13,-24756(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + -24756);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,31396(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 31396);
	ctx.f12.f64 = double(temp.f32);
	// stw r10,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r10.u32);
	// stfs f0,28(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 28, temp.u32);
	// addi r10,r11,20
	ctx.r10.s64 = ctx.r11.s64 + 20;
	// stfs f13,32(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 32, temp.u32);
	// stw r9,40(r11)
	PPC_STORE_U32(ctx.r11.u32 + 40, ctx.r9.u32);
	// stfs f12,36(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 36, temp.u32);
	// addi r10,r11,44
	ctx.r10.s64 = ctx.r11.s64 + 44;
	// stw r8,44(r11)
	PPC_STORE_U32(ctx.r11.u32 + 44, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8315D1BC"))) PPC_WEAK_FUNC(sub_8315D1BC);
PPC_FUNC_IMPL(__imp__sub_8315D1BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8315D1C0"))) PPC_WEAK_FUNC(sub_8315D1C0);
PPC_FUNC_IMPL(__imp__sub_8315D1C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31955
	ctx.r11.s64 = -2094202880;
	// vor128 v0,v77,v77
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_load_si128((__m128i*)ctx.v77.u8));
	// li r10,16
	ctx.r10.s64 = 16;
	// vor128 v13,v73,v73
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_load_si128((__m128i*)ctx.v73.u8));
	// addi r11,r11,29312
	ctx.r11.s64 = ctx.r11.s64 + 29312;
	// vor128 v12,v70,v70
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_load_si128((__m128i*)ctx.v70.u8));
	// li r9,32
	ctx.r9.s64 = 32;
	// vor128 v11,v71,v71
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_load_si128((__m128i*)ctx.v71.u8));
	// li r8,48
	ctx.r8.s64 = 48;
	// vor128 v10,v68,v68
	_mm_store_si128((__m128i*)ctx.v10.u8, _mm_load_si128((__m128i*)ctx.v68.u8));
	// li r7,64
	ctx.r7.s64 = 64;
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v13,r11,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v12,r11,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v11,r11,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v10,r11,r7
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r7.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v10.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8315D204"))) PPC_WEAK_FUNC(sub_8315D204);
PPC_FUNC_IMPL(__imp__sub_8315D204) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8315D208"))) PPC_WEAK_FUNC(sub_8315D208);
PPC_FUNC_IMPL(__imp__sub_8315D208) {
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
	// addi r4,r11,31204
	ctx.r4.s64 = ctx.r11.s64 + 31204;
	// addi r3,r10,29708
	ctx.r3.s64 = ctx.r10.s64 + 29708;
	// bl 0x822400d8
	ctx.lr = 0x8315D228;
	sub_822400D8(ctx, base);
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// addi r3,r11,26272
	ctx.r3.s64 = ctx.r11.s64 + 26272;
	// bl 0x82fa2318
	ctx.lr = 0x8315D234;
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

__attribute__((alias("__imp__sub_8315D244"))) PPC_WEAK_FUNC(sub_8315D244);
PPC_FUNC_IMPL(__imp__sub_8315D244) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8315D248"))) PPC_WEAK_FUNC(sub_8315D248);
PPC_FUNC_IMPL(__imp__sub_8315D248) {
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
	// addi r4,r11,31216
	ctx.r4.s64 = ctx.r11.s64 + 31216;
	// addi r3,r10,29680
	ctx.r3.s64 = ctx.r10.s64 + 29680;
	// bl 0x822400d8
	ctx.lr = 0x8315D268;
	sub_822400D8(ctx, base);
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// addi r3,r11,26296
	ctx.r3.s64 = ctx.r11.s64 + 26296;
	// bl 0x82fa2318
	ctx.lr = 0x8315D274;
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

__attribute__((alias("__imp__sub_8315D284"))) PPC_WEAK_FUNC(sub_8315D284);
PPC_FUNC_IMPL(__imp__sub_8315D284) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8315D288"))) PPC_WEAK_FUNC(sub_8315D288);
PPC_FUNC_IMPL(__imp__sub_8315D288) {
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
	// addi r4,r11,31228
	ctx.r4.s64 = ctx.r11.s64 + 31228;
	// addi r3,r10,29392
	ctx.r3.s64 = ctx.r10.s64 + 29392;
	// bl 0x822400d8
	ctx.lr = 0x8315D2A8;
	sub_822400D8(ctx, base);
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// addi r3,r11,26320
	ctx.r3.s64 = ctx.r11.s64 + 26320;
	// bl 0x82fa2318
	ctx.lr = 0x8315D2B4;
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

__attribute__((alias("__imp__sub_8315D2C4"))) PPC_WEAK_FUNC(sub_8315D2C4);
PPC_FUNC_IMPL(__imp__sub_8315D2C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8315D2C8"))) PPC_WEAK_FUNC(sub_8315D2C8);
PPC_FUNC_IMPL(__imp__sub_8315D2C8) {
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
	// addi r4,r11,31236
	ctx.r4.s64 = ctx.r11.s64 + 31236;
	// addi r3,r10,29420
	ctx.r3.s64 = ctx.r10.s64 + 29420;
	// bl 0x822400d8
	ctx.lr = 0x8315D2E8;
	sub_822400D8(ctx, base);
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// addi r3,r11,26344
	ctx.r3.s64 = ctx.r11.s64 + 26344;
	// bl 0x82fa2318
	ctx.lr = 0x8315D2F4;
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

__attribute__((alias("__imp__sub_8315D304"))) PPC_WEAK_FUNC(sub_8315D304);
PPC_FUNC_IMPL(__imp__sub_8315D304) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8315D308"))) PPC_WEAK_FUNC(sub_8315D308);
PPC_FUNC_IMPL(__imp__sub_8315D308) {
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
	// addi r4,r11,31248
	ctx.r4.s64 = ctx.r11.s64 + 31248;
	// addi r3,r10,29532
	ctx.r3.s64 = ctx.r10.s64 + 29532;
	// bl 0x822400d8
	ctx.lr = 0x8315D328;
	sub_822400D8(ctx, base);
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// addi r3,r11,26368
	ctx.r3.s64 = ctx.r11.s64 + 26368;
	// bl 0x82fa2318
	ctx.lr = 0x8315D334;
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

__attribute__((alias("__imp__sub_8315D344"))) PPC_WEAK_FUNC(sub_8315D344);
PPC_FUNC_IMPL(__imp__sub_8315D344) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8315D348"))) PPC_WEAK_FUNC(sub_8315D348);
PPC_FUNC_IMPL(__imp__sub_8315D348) {
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
	// addi r4,r11,31264
	ctx.r4.s64 = ctx.r11.s64 + 31264;
	// addi r3,r10,29624
	ctx.r3.s64 = ctx.r10.s64 + 29624;
	// bl 0x822400d8
	ctx.lr = 0x8315D368;
	sub_822400D8(ctx, base);
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// addi r3,r11,26392
	ctx.r3.s64 = ctx.r11.s64 + 26392;
	// bl 0x82fa2318
	ctx.lr = 0x8315D374;
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

__attribute__((alias("__imp__sub_8315D384"))) PPC_WEAK_FUNC(sub_8315D384);
PPC_FUNC_IMPL(__imp__sub_8315D384) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8315D388"))) PPC_WEAK_FUNC(sub_8315D388);
PPC_FUNC_IMPL(__imp__sub_8315D388) {
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
	// addi r4,r11,31276
	ctx.r4.s64 = ctx.r11.s64 + 31276;
	// addi r3,r10,29736
	ctx.r3.s64 = ctx.r10.s64 + 29736;
	// bl 0x822400d8
	ctx.lr = 0x8315D3A8;
	sub_822400D8(ctx, base);
	// lis r11,-31977
	ctx.r11.s64 = -2095644672;
	// addi r3,r11,26416
	ctx.r3.s64 = ctx.r11.s64 + 26416;
	// bl 0x82fa2318
	ctx.lr = 0x8315D3B4;
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

