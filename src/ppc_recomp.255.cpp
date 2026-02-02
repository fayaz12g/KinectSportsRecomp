#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_82E1DED4"))) PPC_WEAK_FUNC(sub_82E1DED4);
PPC_FUNC_IMPL(__imp__sub_82E1DED4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E1DED8"))) PPC_WEAK_FUNC(sub_82E1DED8);
PPC_FUNC_IMPL(__imp__sub_82E1DED8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r30.u64);
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// lfs f0,76(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 76);
	ctx.f0.f64 = double(temp.f32);
	// addi r31,r1,-32
	ctx.r31.s64 = ctx.r1.s64 + -32;
	// lfs f11,76(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 76);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f13,f1,f0
	ctx.f13.f64 = double(float(ctx.f1.f64 - ctx.f0.f64));
	// fsubs f10,f1,f11
	ctx.f10.f64 = double(float(ctx.f1.f64 - ctx.f11.f64));
	// lfs f12,92(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 92);
	ctx.f12.f64 = double(temp.f32);
	// addi r30,r1,-32
	ctx.r30.s64 = ctx.r1.s64 + -32;
	// lfs f9,92(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 92);
	ctx.f9.f64 = double(temp.f32);
	// lis r10,-32237
	ctx.r10.s64 = -2112684032;
	// lvx128 v13,r0,r7
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r7.u32) & ~0xF), VectorMaskL));
	// lvx128 v8,r0,r5
	simd::store_shuffled(ctx.v8, simd::load_and_shuffle(base + ((ctx.r5.u32) & ~0xF), VectorMaskL));
	// lis r5,-32246
	ctx.r5.s64 = -2113273856;
	// addi r7,r10,21920
	ctx.r7.s64 = ctx.r10.s64 + 21920;
	// lvx128 v7,r0,r8
	simd::store_shuffled(ctx.v7, simd::load_and_shuffle(base + ((ctx.r8.u32) & ~0xF), VectorMaskL));
	// addi r5,r5,544
	ctx.r5.s64 = ctx.r5.s64 + 544;
	// vpermwi128 v6,v7,135
	_mm_store_si128((__m128i*)ctx.v6.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v7.u32), 0x78));
	// addi r11,r3,64
	ctx.r11.s64 = ctx.r3.s64 + 64;
	// vpermwi128 v5,v7,99
	_mm_store_si128((__m128i*)ctx.v5.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v7.u32), 0x9C));
	// li r9,80
	ctx.r9.s64 = 80;
	// lvx128 v4,r0,r6
	simd::store_shuffled(ctx.v4, simd::load_and_shuffle(base + ((ctx.r6.u32) & ~0xF), VectorMaskL));
	// addi r10,r4,64
	ctx.r10.s64 = ctx.r4.s64 + 64;
	// fmuls f8,f13,f12
	ctx.f8.f64 = double(float(ctx.f13.f64 * ctx.f12.f64));
	// stfs f8,-32(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + -32, temp.u32);
	// lvlx v2,0,r31
	temp.u32 = ctx.r31.u32;
	_mm_store_si128((__m128i*)ctx.v2.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// fmuls f7,f10,f9
	ctx.f7.f64 = double(float(ctx.f10.f64 * ctx.f9.f64));
	// stfs f7,-32(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + -32, temp.u32);
	// vspltw v30,v2,0
	_mm_store_si128((__m128i*)ctx.v30.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v2.u32), 0xFF));
	// lvlx v1,0,r30
	temp.u32 = ctx.r30.u32;
	_mm_store_si128((__m128i*)ctx.v1.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw v31,v1,0
	_mm_store_si128((__m128i*)ctx.v31.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v1.u32), 0xFF));
	// vspltw v0,v31,0
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v31.u32), 0xFF));
	// lvx128 v12,r0,r7
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((ctx.r7.u32) & ~0xF), VectorMaskL));
	// lvx128 v11,r0,r5
	simd::store_shuffled(ctx.v11, simd::load_and_shuffle(base + ((ctx.r5.u32) & ~0xF), VectorMaskL));
	// vxor v28,v13,v11
	_mm_store_si128((__m128i*)ctx.v28.u8, _mm_xor_si128(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)ctx.v11.u8)));
	// vspltw v13,v30,0
	_mm_store_si128((__m128i*)ctx.v13.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v30.u32), 0xFF));
	// lvx128 v3,r0,r11
	simd::store_shuffled(ctx.v3, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// addi r11,r8,16
	ctx.r11.s64 = ctx.r8.s64 + 16;
	// vsubfp v27,v12,v0
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v27.f32, _mm_sub_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v0.f32)));
	// lvx128 v10,r3,r9
	simd::store_shuffled(ctx.v10, simd::load_and_shuffle(base + ((ctx.r3.u32 + ctx.r9.u32) & ~0xF), VectorMaskL));
	// lvx128 v29,r0,r10
	simd::store_shuffled(ctx.v29, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// addi r3,r1,-32
	ctx.r3.s64 = ctx.r1.s64 + -32;
	// vsubfp v23,v12,v13
	_mm_store_ps(ctx.v23.f32, _mm_sub_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v13.f32)));
	// lvx128 v9,r4,r9
	simd::store_shuffled(ctx.v9, simd::load_and_shuffle(base + ((ctx.r4.u32 + ctx.r9.u32) & ~0xF), VectorMaskL));
	// lvx128 v26,r0,r11
	simd::store_shuffled(ctx.v26, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// vpermwi128 v25,v26,135
	_mm_store_si128((__m128i*)ctx.v25.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v26.u32), 0x78));
	// vpermwi128 v24,v26,99
	_mm_store_si128((__m128i*)ctx.v24.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v26.u32), 0x9C));
	// vmulfp128 v12,v27,v3
	_mm_store_ps(ctx.v12.f32, _mm_mul_ps(_mm_load_ps(ctx.v27.f32), _mm_load_ps(ctx.v3.f32)));
	// vmulfp128 v11,v23,v29
	_mm_store_ps(ctx.v11.f32, _mm_mul_ps(_mm_load_ps(ctx.v23.f32), _mm_load_ps(ctx.v29.f32)));
	// vmaddfp v0,v0,v10,v12
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v10.f32)), _mm_load_ps(ctx.v12.f32)));
	// vmaddfp v13,v13,v9,v11
	_mm_store_ps(ctx.v13.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v9.f32)), _mm_load_ps(ctx.v11.f32)));
	// vsubfp v22,v8,v0
	_mm_store_ps(ctx.v22.f32, _mm_sub_ps(_mm_load_ps(ctx.v8.f32), _mm_load_ps(ctx.v0.f32)));
	// vsubfp v21,v8,v13
	_mm_store_ps(ctx.v21.f32, _mm_sub_ps(_mm_load_ps(ctx.v8.f32), _mm_load_ps(ctx.v13.f32)));
	// vpermwi128 v20,v22,99
	_mm_store_si128((__m128i*)ctx.v20.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v22.u32), 0x9C));
	// vpermwi128 v19,v22,135
	_mm_store_si128((__m128i*)ctx.v19.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v22.u32), 0x78));
	// vpermwi128 v16,v21,99
	_mm_store_si128((__m128i*)ctx.v16.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v21.u32), 0x9C));
	// vpermwi128 v15,v21,135
	_mm_store_si128((__m128i*)ctx.v15.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v21.u32), 0x78));
	// vmulfp128 v18,v6,v20
	_mm_store_ps(ctx.v18.f32, _mm_mul_ps(_mm_load_ps(ctx.v6.f32), _mm_load_ps(ctx.v20.f32)));
	// vmulfp128 v17,v5,v19
	_mm_store_ps(ctx.v17.f32, _mm_mul_ps(_mm_load_ps(ctx.v5.f32), _mm_load_ps(ctx.v19.f32)));
	// vmulfp128 v14,v25,v16
	_mm_store_ps(ctx.v14.f32, _mm_mul_ps(_mm_load_ps(ctx.v25.f32), _mm_load_ps(ctx.v16.f32)));
	// vmulfp128 v63,v24,v15
	_mm_store_ps(ctx.v63.f32, _mm_mul_ps(_mm_load_ps(ctx.v24.f32), _mm_load_ps(ctx.v15.f32)));
	// vsubfp128 v62,v17,v18
	_mm_store_ps(ctx.v62.f32, _mm_sub_ps(_mm_load_ps(ctx.v17.f32), _mm_load_ps(ctx.v18.f32)));
	// vsubfp128 v61,v63,v14
	_mm_store_ps(ctx.v61.f32, _mm_sub_ps(_mm_load_ps(ctx.v63.f32), _mm_load_ps(ctx.v14.f32)));
	// vaddfp128 v60,v28,v62
	_mm_store_ps(ctx.v60.f32, _mm_add_ps(_mm_load_ps(ctx.v28.f32), _mm_load_ps(ctx.v62.f32)));
	// vsubfp128 v59,v60,v61
	_mm_store_ps(ctx.v59.f32, _mm_sub_ps(_mm_load_ps(ctx.v60.f32), _mm_load_ps(ctx.v61.f32)));
	// vmsum3fp128 v58,v59,v4
	_mm_store_ps(ctx.v58.f32, _mm_dp_ps(_mm_load_ps(ctx.v59.f32), _mm_load_ps(ctx.v4.f32), 0xEF));
	// stvewx128 v58,r0,r3
	ea = (ctx.r3.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v58.u32[3 - ((ea & 0xF) >> 2)]);
	// lfs f1,-32(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -32);
	ctx.f1.f64 = double(temp.f32);
	// ld r30,-16(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E1DFF4"))) PPC_WEAK_FUNC(sub_82E1DFF4);
PPC_FUNC_IMPL(__imp__sub_82E1DFF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E1DFF8"))) PPC_WEAK_FUNC(sub_82E1DFF8);
PPC_FUNC_IMPL(__imp__sub_82E1DFF8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x82E1E000;
	__savegprlr_28(ctx, base);
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lvx128 v12,r0,r7
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((ctx.r7.u32) & ~0xF), VectorMaskL));
	// lvx128 v0,r0,r6
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r6.u32) & ~0xF), VectorMaskL));
	// addi r10,r1,-48
	ctx.r10.s64 = ctx.r1.s64 + -48;
	// addi r7,r11,544
	ctx.r7.s64 = ctx.r11.s64 + 544;
	// lis r6,-32237
	ctx.r6.s64 = -2112684032;
	// addi r11,r3,64
	ctx.r11.s64 = ctx.r3.s64 + 64;
	// addi r6,r6,21920
	ctx.r6.s64 = ctx.r6.s64 + 21920;
	// li r9,80
	ctx.r9.s64 = 80;
	// lvx128 v13,r0,r7
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r7.u32) & ~0xF), VectorMaskL));
	// addi r7,r1,-44
	ctx.r7.s64 = ctx.r1.s64 + -44;
	// vxor v11,v12,v13
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_xor_si128(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)ctx.v13.u8)));
	// addi r31,r1,-44
	ctx.r31.s64 = ctx.r1.s64 + -44;
	// lis r30,-32256
	ctx.r30.s64 = -2113929216;
	// lis r29,-32256
	ctx.r29.s64 = -2113929216;
	// lis r28,-32254
	ctx.r28.s64 = -2113798144;
	// vmsum3fp128 v10,v11,v0
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v10.f32, _mm_dp_ps(_mm_load_ps(ctx.v11.f32), _mm_load_ps(ctx.v0.f32), 0xEF));
	// stvewx v10,r0,r10
	ea = (ctx.r10.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v10.u32[3 - ((ea & 0xF) >> 2)]);
	// lfs f0,92(r3)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 92);
	ctx.f0.f64 = double(temp.f32);
	// lvx128 v11,r0,r6
	simd::store_shuffled(ctx.v11, simd::load_and_shuffle(base + ((ctx.r6.u32) & ~0xF), VectorMaskL));
	// lvx128 v8,r0,r11
	simd::store_shuffled(ctx.v8, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// lfs f13,76(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 76);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f1,f13
	ctx.f12.f64 = double(float(ctx.f1.f64 - ctx.f13.f64));
	// lvx128 v9,r3,r9
	simd::store_shuffled(ctx.v9, simd::load_and_shuffle(base + ((ctx.r3.u32 + ctx.r9.u32) & ~0xF), VectorMaskL));
	// fmuls f11,f12,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stfs f11,-44(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + -44, temp.u32);
	// lvlx v7,0,r7
	temp.u32 = ctx.r7.u32;
	_mm_store_si128((__m128i*)ctx.v7.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw v6,v7,0
	_mm_store_si128((__m128i*)ctx.v6.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v7.u32), 0xFF));
	// vspltw v13,v6,0
	_mm_store_si128((__m128i*)ctx.v13.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v6.u32), 0xFF));
	// lvx128 v5,r0,r8
	simd::store_shuffled(ctx.v5, simd::load_and_shuffle(base + ((ctx.r8.u32) & ~0xF), VectorMaskL));
	// lvx128 v12,r0,r5
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((ctx.r5.u32) & ~0xF), VectorMaskL));
	// vsubfp v4,v11,v13
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v4.f32, _mm_sub_ps(_mm_load_ps(ctx.v11.f32), _mm_load_ps(ctx.v13.f32)));
	// vmulfp128 v10,v4,v8
	_mm_store_ps(ctx.v10.f32, _mm_mul_ps(_mm_load_ps(ctx.v4.f32), _mm_load_ps(ctx.v8.f32)));
	// vmaddfp v13,v13,v9,v10
	_mm_store_ps(ctx.v13.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v9.f32)), _mm_load_ps(ctx.v10.f32)));
	// vsubfp v3,v12,v13
	_mm_store_ps(ctx.v3.f32, _mm_sub_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v13.f32)));
	// vpermwi128 v2,v5,135
	_mm_store_si128((__m128i*)ctx.v2.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v5.u32), 0x78));
	// vpermwi128 v1,v5,99
	_mm_store_si128((__m128i*)ctx.v1.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v5.u32), 0x9C));
	// vpermwi128 v31,v3,99
	_mm_store_si128((__m128i*)ctx.v31.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v3.u32), 0x9C));
	// vpermwi128 v30,v3,135
	_mm_store_si128((__m128i*)ctx.v30.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v3.u32), 0x78));
	// vmulfp128 v29,v2,v31
	_mm_store_ps(ctx.v29.f32, _mm_mul_ps(_mm_load_ps(ctx.v2.f32), _mm_load_ps(ctx.v31.f32)));
	// vmulfp128 v28,v1,v30
	_mm_store_ps(ctx.v28.f32, _mm_mul_ps(_mm_load_ps(ctx.v1.f32), _mm_load_ps(ctx.v30.f32)));
	// vsubfp v27,v28,v29
	_mm_store_ps(ctx.v27.f32, _mm_sub_ps(_mm_load_ps(ctx.v28.f32), _mm_load_ps(ctx.v29.f32)));
	// vmsum3fp128 v26,v27,v0
	_mm_store_ps(ctx.v26.f32, _mm_dp_ps(_mm_load_ps(ctx.v27.f32), _mm_load_ps(ctx.v0.f32), 0xEF));
	// stvewx v26,r0,r31
	ea = (ctx.r31.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v26.u32[3 - ((ea & 0xF) >> 2)]);
	// lfs f0,-44(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -44);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,5184(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 5184);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// lfs f11,-1592(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + -1592);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,5152(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 5152);
	ctx.f10.f64 = double(temp.f32);
	// lfs f13,-48(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -48);
	ctx.f13.f64 = double(temp.f32);
	// bgt cr6,0x82e1e0d4
	if (ctx.cr6.gt) goto loc_82E1E0D4;
	// fmadds f13,f0,f10,f13
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f10.f64 + ctx.f13.f64));
	// b 0x82e1e0d8
	goto loc_82E1E0D8;
loc_82E1E0D4:
	// fmadds f13,f0,f11,f13
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f11.f64 + ctx.f13.f64));
loc_82E1E0D8:
	// lfs f0,76(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 76);
	ctx.f0.f64 = double(temp.f32);
	// addi r7,r1,-44
	ctx.r7.s64 = ctx.r1.s64 + -44;
	// fsubs f9,f1,f0
	ctx.f9.f64 = double(float(ctx.f1.f64 - ctx.f0.f64));
	// lfs f8,92(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 92);
	ctx.f8.f64 = double(temp.f32);
	// addi r11,r4,64
	ctx.r11.s64 = ctx.r4.s64 + 64;
	// lvx128 v10,r4,r9
	simd::store_shuffled(ctx.v10, simd::load_and_shuffle(base + ((ctx.r4.u32 + ctx.r9.u32) & ~0xF), VectorMaskL));
	// addi r10,r8,16
	ctx.r10.s64 = ctx.r8.s64 + 16;
	// addi r6,r1,-44
	ctx.r6.s64 = ctx.r1.s64 + -44;
	// lvx128 v9,r0,r11
	simd::store_shuffled(ctx.v9, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// lvx128 v8,r0,r10
	simd::store_shuffled(ctx.v8, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// vpermwi128 v7,v8,135
	_mm_store_si128((__m128i*)ctx.v7.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v8.u32), 0x78));
	// vpermwi128 v6,v8,99
	_mm_store_si128((__m128i*)ctx.v6.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v8.u32), 0x9C));
	// fmuls f7,f9,f8
	ctx.f7.f64 = double(float(ctx.f9.f64 * ctx.f8.f64));
	// stfs f7,-44(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + -44, temp.u32);
	// lvlx v5,0,r7
	temp.u32 = ctx.r7.u32;
	_mm_store_si128((__m128i*)ctx.v5.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw v4,v5,0
	_mm_store_si128((__m128i*)ctx.v4.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v5.u32), 0xFF));
	// vspltw v13,v4,0
	_mm_store_si128((__m128i*)ctx.v13.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v4.u32), 0xFF));
	// vsubfp v3,v11,v13
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v3.f32, _mm_sub_ps(_mm_load_ps(ctx.v11.f32), _mm_load_ps(ctx.v13.f32)));
	// vmulfp128 v11,v3,v9
	_mm_store_ps(ctx.v11.f32, _mm_mul_ps(_mm_load_ps(ctx.v3.f32), _mm_load_ps(ctx.v9.f32)));
	// vmaddfp v13,v13,v10,v11
	_mm_store_ps(ctx.v13.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v10.f32)), _mm_load_ps(ctx.v11.f32)));
	// vsubfp v2,v12,v13
	_mm_store_ps(ctx.v2.f32, _mm_sub_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v13.f32)));
	// vpermwi128 v1,v2,99
	_mm_store_si128((__m128i*)ctx.v1.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v2.u32), 0x9C));
	// vpermwi128 v31,v2,135
	_mm_store_si128((__m128i*)ctx.v31.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v2.u32), 0x78));
	// vmulfp128 v30,v7,v1
	_mm_store_ps(ctx.v30.f32, _mm_mul_ps(_mm_load_ps(ctx.v7.f32), _mm_load_ps(ctx.v1.f32)));
	// vmulfp128 v29,v6,v31
	_mm_store_ps(ctx.v29.f32, _mm_mul_ps(_mm_load_ps(ctx.v6.f32), _mm_load_ps(ctx.v31.f32)));
	// vsubfp v28,v29,v30
	_mm_store_ps(ctx.v28.f32, _mm_sub_ps(_mm_load_ps(ctx.v29.f32), _mm_load_ps(ctx.v30.f32)));
	// vmsum3fp128 v27,v28,v0
	_mm_store_ps(ctx.v27.f32, _mm_dp_ps(_mm_load_ps(ctx.v28.f32), _mm_load_ps(ctx.v0.f32), 0xEF));
	// stvewx v27,r0,r6
	ea = (ctx.r6.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v27.u32[3 - ((ea & 0xF) >> 2)]);
	// lfs f0,-44(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -44);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// blt cr6,0x82e1e15c
	if (ctx.cr6.lt) goto loc_82E1E15C;
	// fnmsubs f1,f0,f10,f13
	ctx.f1.f64 = double(float(-(ctx.f0.f64 * ctx.f10.f64 - ctx.f13.f64)));
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
loc_82E1E15C:
	// fnmsubs f1,f0,f11,f13
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(-(ctx.f0.f64 * ctx.f11.f64 - ctx.f13.f64)));
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E1E164"))) PPC_WEAK_FUNC(sub_82E1E164);
PPC_FUNC_IMPL(__imp__sub_82E1E164) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E1E168"))) PPC_WEAK_FUNC(sub_82E1E168);
PPC_FUNC_IMPL(__imp__sub_82E1E168) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7670
	ctx.lr = 0x82E1E170;
	__savegprlr_26(ctx, base);
	// stfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r29,64(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// addi r3,r11,64
	ctx.r3.s64 = ctx.r11.s64 + 64;
	// lfs f0,8(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f31,f0,f1
	ctx.f31.f64 = double(float(ctx.f0.f64 * ctx.f1.f64));
	// lfs f1,0(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// bl 0x830b2db0
	ctx.lr = 0x82E1E1A4;
	sub_830B2DB0(ctx, base);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r28,r31,64
	ctx.r28.s64 = ctx.r31.s64 + 64;
	// lfs f1,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r3,r11,64
	ctx.r3.s64 = ctx.r11.s64 + 64;
	// bl 0x830b2db0
	ctx.lr = 0x82E1E1C0;
	sub_830B2DB0(ctx, base);
	// addi r29,r31,128
	ctx.r29.s64 = ctx.r31.s64 + 128;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82d2e728
	ctx.lr = 0x82E1E1D4;
	sub_82D2E728(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r5,r30,32
	ctx.r5.s64 = ctx.r30.s64 + 32;
	// addi r3,r31,192
	ctx.r3.s64 = ctx.r31.s64 + 192;
	// bl 0x82d2e2a8
	ctx.lr = 0x82E1E1E4;
	sub_82D2E2A8(ctx, base);
	// addi r5,r30,48
	ctx.r5.s64 = ctx.r30.s64 + 48;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r31,208
	ctx.r3.s64 = ctx.r31.s64 + 208;
	// bl 0x82d2e210
	ctx.lr = 0x82E1E1F4;
	sub_82D2E210(ctx, base);
	// li r9,2
	ctx.r9.s64 = 2;
	// li r8,128
	ctx.r8.s64 = 128;
	// lfs f13,20(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// li r7,272
	ctx.r7.s64 = 272;
	// fneg f12,f13
	ctx.f12.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// addi r28,r31,16
	ctx.r28.s64 = ctx.r31.s64 + 16;
	// stfs f12,204(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 204, temp.u32);
	// addi r27,r31,32
	ctx.r27.s64 = ctx.r31.s64 + 32;
	// lwz r6,0(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// lvx128 v0,r6,r8
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r6.u32 + ctx.r8.u32) & ~0xF), VectorMaskL));
	// addi r10,r31,256
	ctx.r10.s64 = ctx.r31.s64 + 256;
	// lvx128 v13,r0,r31
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r31.u32) & ~0xF), VectorMaskL));
	// addi r11,r30,112
	ctx.r11.s64 = ctx.r30.s64 + 112;
	// lvx128 v12,r0,r28
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((ctx.r28.u32) & ~0xF), VectorMaskL));
	// addi r26,r9,21904
	ctx.r26.s64 = ctx.r9.s64 + 21904;
	// lvx128 v11,r0,r27
	simd::store_shuffled(ctx.v11, simd::load_and_shuffle(base + ((ctx.r27.u32) & ~0xF), VectorMaskL));
	// stvx128 v0,r31,r7
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32 + ctx.r7.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
loc_82E1E240:
	// lvx128 v10,r0,r11
	simd::store_shuffled(ctx.v10, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// addi r11,r11,-16
	ctx.r11.s64 = ctx.r11.s64 + -16;
	// vmsum3fp128 v9,v12,v10
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v9.f32, _mm_dp_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v10.f32), 0xEF));
	// lvx128 v0,r0,r26
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r26.u32) & ~0xF), VectorMaskL));
	// vmsum3fp128 v8,v11,v10
	_mm_store_ps(ctx.v8.f32, _mm_dp_ps(_mm_load_ps(ctx.v11.f32), _mm_load_ps(ctx.v10.f32), 0xEF));
	// vmsum3fp128 v7,v13,v10
	_mm_store_ps(ctx.v7.f32, _mm_dp_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v10.f32), 0xEF));
	// vmrghw v6,v9,v0
	_mm_store_si128((__m128i*)ctx.v6.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), _mm_load_si128((__m128i*)ctx.v9.u32)));
	// vmrghw v5,v7,v8
	_mm_store_si128((__m128i*)ctx.v5.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v8.u32), _mm_load_si128((__m128i*)ctx.v7.u32)));
	// vmrghw v4,v5,v6
	_mm_store_si128((__m128i*)ctx.v4.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v6.u32), _mm_load_si128((__m128i*)ctx.v5.u32)));
	// stvx128 v4,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v4.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r10,r10,-16
	ctx.r10.s64 = ctx.r10.s64 + -16;
	// bdnz 0x82e1e240
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82E1E240;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r31,288
	ctx.r3.s64 = ctx.r31.s64 + 288;
	// addi r5,r11,128
	ctx.r5.s64 = ctx.r11.s64 + 128;
	// bl 0x82d2e210
	ctx.lr = 0x82E1E284;
	sub_82D2E210(ctx, base);
	// addi r11,r30,80
	ctx.r11.s64 = ctx.r30.s64 + 80;
	// lvx128 v12,r0,r28
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((ctx.r28.u32) & ~0xF), VectorMaskL));
	// li r10,224
	ctx.r10.s64 = 224;
	// lvx128 v11,r0,r27
	simd::store_shuffled(ctx.v11, simd::load_and_shuffle(base + ((ctx.r27.u32) & ~0xF), VectorMaskL));
	// lvx128 v9,r0,r31
	simd::store_shuffled(ctx.v9, simd::load_and_shuffle(base + ((ctx.r31.u32) & ~0xF), VectorMaskL));
	// lvx128 v0,r0,r26
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r26.u32) & ~0xF), VectorMaskL));
	// lvx128 v13,r0,r11
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// vmsum3fp128 v10,v12,v13
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v10.f32, _mm_dp_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v13.f32), 0xEF));
	// vmsum3fp128 v8,v11,v13
	_mm_store_ps(ctx.v8.f32, _mm_dp_ps(_mm_load_ps(ctx.v11.f32), _mm_load_ps(ctx.v13.f32), 0xEF));
	// vmsum3fp128 v7,v9,v13
	_mm_store_ps(ctx.v7.f32, _mm_dp_ps(_mm_load_ps(ctx.v9.f32), _mm_load_ps(ctx.v13.f32), 0xEF));
	// vmrghw v6,v10,v0
	_mm_store_si128((__m128i*)ctx.v6.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), _mm_load_si128((__m128i*)ctx.v10.u32)));
	// vmrghw v5,v7,v8
	_mm_store_si128((__m128i*)ctx.v5.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v8.u32), _mm_load_si128((__m128i*)ctx.v7.u32)));
	// vmrghw v4,v5,v6
	_mm_store_si128((__m128i*)ctx.v4.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v6.u32), _mm_load_si128((__m128i*)ctx.v5.u32)));
	// stvx128 v4,r31,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32 + ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v4.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-64(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x82fa76c0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E1E2C8"))) PPC_WEAK_FUNC(sub_82E1E2C8);
PPC_FUNC_IMPL(__imp__sub_82E1E2C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x82E1E2D0;
	__savegprlr_28(ctx, base);
	// addi r12,r1,-40
	ctx.r12.s64 = ctx.r1.s64 + -40;
	// bl 0x82fa8d14
	ctx.lr = 0x82E1E2D8;
	__savefpr_23(ctx, base);
	// stwu r1,-512(r1)
	ea = -512 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f12,16(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	ctx.f12.f64 = double(temp.f32);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lfs f13,0(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// fmr f30,f1
	ctx.f30.f64 = ctx.f1.f64;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// fmr f28,f2
	ctx.f28.f64 = ctx.f2.f64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// fmr f29,f3
	ctx.f29.f64 = ctx.f3.f64;
	// lfs f0,11504(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 11504);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32233
	ctx.r11.s64 = -2112421888;
	// lfs f23,-19516(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -19516);
	ctx.f23.f64 = double(temp.f32);
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// lfs f24,11976(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 11976);
	ctx.f24.f64 = double(temp.f32);
	// fmr f26,f4
	ctx.f26.f64 = ctx.f4.f64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// li r29,0
	ctx.r29.s64 = 0;
	// fmuls f27,f12,f0
	ctx.f27.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// lfs f25,24436(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24436);
	ctx.f25.f64 = double(temp.f32);
loc_82E1E32C:
	// fcmpu cr6,f29,f13
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f29.f64, ctx.f13.f64);
	// ble cr6,0x82e1e404
	if (!ctx.cr6.gt) goto loc_82E1E404;
	// fsubs f0,f26,f29
	ctx.f0.f64 = double(float(ctx.f26.f64 - ctx.f29.f64));
	// fneg f12,f27
	ctx.f12.u64 = ctx.f27.u64 ^ 0x8000000000000000;
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// bgt cr6,0x82e1e404
	if (ctx.cr6.gt) goto loc_82E1E404;
	// fsubs f13,f13,f29
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f29.f64));
	// clrlwi r11,r29,31
	ctx.r11.u64 = ctx.r29.u32 & 0x1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// fdivs f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 / ctx.f0.f64));
	// bne cr6,0x82e1e368
	if (!ctx.cr6.eq) goto loc_82E1E368;
	// fsubs f13,f0,f24
	ctx.f13.f64 = double(float(ctx.f0.f64 - ctx.f24.f64));
	// fsel f12,f13,f0,f24
	ctx.f12.f64 = ctx.f13.f64 >= 0.0 ? ctx.f0.f64 : ctx.f24.f64;
	// fsubs f11,f12,f23
	ctx.f11.f64 = double(float(ctx.f12.f64 - ctx.f23.f64));
	// fsel f0,f11,f23,f12
	ctx.f0.f64 = ctx.f11.f64 >= 0.0 ? ctx.f23.f64 : ctx.f12.f64;
loc_82E1E368:
	// fsubs f13,f25,f0
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f25.f64 - ctx.f0.f64));
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// fmuls f12,f0,f28
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f28.f64));
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// fmadds f31,f13,f30,f12
	ctx.f31.f64 = double(float(ctx.f13.f64 * ctx.f30.f64 + ctx.f12.f64));
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82e1e168
	ctx.lr = 0x82E1E384;
	sub_82E1E168(ctx, base);
	// addi r11,r1,304
	ctx.r11.s64 = ctx.r1.s64 + 304;
	// lvx128 v12,r0,r30
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((ctx.r30.u32) & ~0xF), VectorMaskL));
	// addi r10,r1,288
	ctx.r10.s64 = ctx.r1.s64 + 288;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// lvx128 v11,r0,r11
	simd::store_shuffled(ctx.v11, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// li r11,1
	ctx.r11.s64 = 1;
	// vsubfp v10,v12,v11
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v10.f32, _mm_sub_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v11.f32)));
	// lvx128 v0,r0,r10
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// vspltw v13,v0,3
	_mm_store_si128((__m128i*)ctx.v13.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0x0));
	// vmsum3fp128 v9,v0,v10
	_mm_store_ps(ctx.v9.f32, _mm_dp_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v10.f32), 0xEF));
	// vaddfp v8,v13,v9
	_mm_store_ps(ctx.v8.f32, _mm_add_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v9.f32)));
	// stvewx v8,r0,r9
	ea = (ctx.r9.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v8.u32[3 - ((ea & 0xF) >> 2)]);
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f11,f0,f13
	ctx.f11.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// fabs f10,f11
	ctx.f10.u64 = ctx.f11.u64 & ~0x8000000000000000;
	// fcmpu cr6,f10,f27
	ctx.cr6.compare(ctx.f10.f64, ctx.f27.f64);
	// blt cr6,0x82e1e3d0
	if (ctx.cr6.lt) goto loc_82E1E3D0;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82E1E3D0:
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82e1e404
	if (!ctx.cr6.eq) goto loc_82E1E404;
	// fcmpu cr6,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x82e1e3f0
	if (!ctx.cr6.lt) goto loc_82E1E3F0;
	// fmr f28,f31
	ctx.f28.f64 = ctx.f31.f64;
	// fmr f26,f0
	ctx.f26.f64 = ctx.f0.f64;
	// b 0x82e1e3f8
	goto loc_82E1E3F8;
loc_82E1E3F0:
	// fmr f30,f31
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f31.f64;
	// fmr f29,f0
	ctx.f29.f64 = ctx.f0.f64;
loc_82E1E3F8:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmpwi cr6,r29,10
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 10, ctx.xer);
	// blt cr6,0x82e1e32c
	if (ctx.cr6.lt) goto loc_82E1E32C;
loc_82E1E404:
	// lwz r11,596(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 596);
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// bge cr6,0x82e1e424
	if (!ctx.cr6.lt) goto loc_82E1E424;
	// li r10,16
	ctx.r10.s64 = 16;
	// stfs f31,0(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lvx128 v0,r0,r30
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r30.u32) & ~0xF), VectorMaskL));
	// stvx128 v0,r11,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
loc_82E1E424:
	// lfs f1,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// addi r1,r1,512
	ctx.r1.s64 = ctx.r1.s64 + 512;
	// addi r12,r1,-40
	ctx.r12.s64 = ctx.r1.s64 + -40;
	// bl 0x82fa8d60
	ctx.lr = 0x82E1E434;
	__restfpr_23(ctx, base);
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E1E438"))) PPC_WEAK_FUNC(sub_82E1E438);
PPC_FUNC_IMPL(__imp__sub_82E1E438) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa765c
	ctx.lr = 0x82E1E440;
	__savegprlr_21(ctx, base);
	// addi r12,r1,-96
	ctx.r12.s64 = ctx.r1.s64 + -96;
	// bl 0x82fa8d14
	ctx.lr = 0x82E1E448;
	__savefpr_23(ctx, base);
	// stwu r1,-592(r1)
	ea = -592 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32233
	ctx.r11.s64 = -2112421888;
	// lwz r28,12(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lfs f30,128(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 128);
	ctx.f30.f64 = double(temp.f32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// fmr f25,f30
	ctx.f25.f64 = ctx.f30.f64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// addi r21,r3,128
	ctx.r21.s64 = ctx.r3.s64 + 128;
	// lfs f28,24436(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24436);
	ctx.f28.f64 = double(temp.f32);
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq cr6,0x82e1e6d0
	if (ctx.cr6.eq) goto loc_82E1E6D0;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r24,r3,8
	ctx.r24.s64 = ctx.r3.s64 + 8;
	// addi r23,r3,68
	ctx.r23.s64 = ctx.r3.s64 + 68;
	// lfs f26,5184(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5184);
	ctx.f26.f64 = double(temp.f32);
	// li r22,16
	ctx.r22.s64 = 16;
	// lfs f29,21500(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 21500);
	ctx.f29.f64 = double(temp.f32);
	// lfs f23,11556(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 11556);
	ctx.f23.f64 = double(temp.f32);
loc_82E1E49C:
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f30.f64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82e1e168
	ctx.lr = 0x82E1E4AC;
	sub_82E1E168(ctx, base);
	// fsubs f31,f28,f30
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = double(float(ctx.f28.f64 - ctx.f30.f64));
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// lfs f0,0(r23)
	temp.u32 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fmr f27,f28
	ctx.f27.f64 = ctx.f28.f64;
	// li r28,0
	ctx.r28.s64 = 0;
	// addic. r26,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r26.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// fmuls f24,f0,f31
	ctx.f24.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// lwz r31,0(r24)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
	// blt 0x82e1e6a8
	if (ctx.cr0.lt) goto loc_82E1E6A8;
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
loc_82E1E4D8:
	// addi r10,r1,320
	ctx.r10.s64 = ctx.r1.s64 + 320;
	// lvx128 v0,r0,r31
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r31.u32) & ~0xF), VectorMaskL));
	// addi r9,r1,304
	ctx.r9.s64 = ctx.r1.s64 + 304;
	// lvx128 v13,r0,r10
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// vsubfp v11,v0,v13
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v11.f32, _mm_sub_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v13.f32)));
	// lvx128 v12,r0,r9
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// vspltw v10,v12,3
	_mm_store_si128((__m128i*)ctx.v10.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v12.u32), 0x0));
	// vmsum3fp128 v9,v12,v11
	_mm_store_ps(ctx.v9.f32, _mm_dp_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v11.f32), 0xEF));
	// vaddfp v8,v10,v9
	_mm_store_ps(ctx.v8.f32, _mm_add_ps(_mm_load_ps(ctx.v10.f32), _mm_load_ps(ctx.v9.f32)));
	// stvewx v8,r0,r11
	ea = (ctx.r11.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v8.u32[3 - ((ea & 0xF) >> 2)]);
	// lfs f4,96(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f4.f64 = double(temp.f32);
	// lfs f0,0(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fadds f13,f0,f24
	ctx.f13.f64 = double(float(ctx.f0.f64 + ctx.f24.f64));
	// fcmpu cr6,f4,f13
	ctx.cr6.compare(ctx.f4.f64, ctx.f13.f64);
	// bgt cr6,0x82e1e698
	if (ctx.cr6.gt) goto loc_82E1E698;
	// addi r11,r1,384
	ctx.r11.s64 = ctx.r1.s64 + 384;
	// fsubs f13,f4,f0
	ctx.f13.f64 = double(float(ctx.f4.f64 - ctx.f0.f64));
	// addi r10,r1,352
	ctx.r10.s64 = ctx.r1.s64 + 352;
	// addi r9,r1,400
	ctx.r9.s64 = ctx.r1.s64 + 400;
	// addi r8,r1,368
	ctx.r8.s64 = ctx.r1.s64 + 368;
	// addi r7,r1,336
	ctx.r7.s64 = ctx.r1.s64 + 336;
	// lvx128 v13,r0,r11
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// addi r6,r1,100
	ctx.r6.s64 = ctx.r1.s64 + 100;
	// vsubfp v11,v0,v13
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v11.f32, _mm_sub_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v13.f32)));
	// lvx128 v13,r0,r10
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// lvx128 v10,r0,r9
	simd::store_shuffled(ctx.v10, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// vpermwi128 v9,v13,135
	_mm_store_si128((__m128i*)ctx.v9.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v13.u32), 0x78));
	// vsubfp v8,v0,v10
	_mm_store_ps(ctx.v8.f32, _mm_sub_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v10.f32)));
	// vpermwi128 v7,v13,99
	_mm_store_si128((__m128i*)ctx.v7.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v13.u32), 0x9C));
	// lvx128 v13,r0,r8
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r8.u32) & ~0xF), VectorMaskL));
	// vpermwi128 v6,v13,135
	_mm_store_si128((__m128i*)ctx.v6.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v13.u32), 0x78));
	// lvx128 v5,r0,r7
	simd::store_shuffled(ctx.v5, simd::load_and_shuffle(base + ((ctx.r7.u32) & ~0xF), VectorMaskL));
	// vpermwi128 v4,v13,99
	_mm_store_si128((__m128i*)ctx.v4.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v13.u32), 0x9C));
	// vpermwi128 v3,v11,99
	_mm_store_si128((__m128i*)ctx.v3.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v11.u32), 0x9C));
	// vpermwi128 v2,v11,135
	_mm_store_si128((__m128i*)ctx.v2.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v11.u32), 0x78));
	// vpermwi128 v1,v8,99
	_mm_store_si128((__m128i*)ctx.v1.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v8.u32), 0x9C));
	// vpermwi128 v31,v8,135
	_mm_store_si128((__m128i*)ctx.v31.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v8.u32), 0x78));
	// vmulfp128 v30,v9,v3
	_mm_store_ps(ctx.v30.f32, _mm_mul_ps(_mm_load_ps(ctx.v9.f32), _mm_load_ps(ctx.v3.f32)));
	// vmulfp128 v29,v7,v2
	_mm_store_ps(ctx.v29.f32, _mm_mul_ps(_mm_load_ps(ctx.v7.f32), _mm_load_ps(ctx.v2.f32)));
	// vmulfp128 v28,v6,v1
	_mm_store_ps(ctx.v28.f32, _mm_mul_ps(_mm_load_ps(ctx.v6.f32), _mm_load_ps(ctx.v1.f32)));
	// vmulfp128 v27,v4,v31
	_mm_store_ps(ctx.v27.f32, _mm_mul_ps(_mm_load_ps(ctx.v4.f32), _mm_load_ps(ctx.v31.f32)));
	// vsubfp v26,v29,v30
	_mm_store_ps(ctx.v26.f32, _mm_sub_ps(_mm_load_ps(ctx.v29.f32), _mm_load_ps(ctx.v30.f32)));
	// vsubfp v25,v27,v28
	_mm_store_ps(ctx.v25.f32, _mm_sub_ps(_mm_load_ps(ctx.v27.f32), _mm_load_ps(ctx.v28.f32)));
	// vsubfp v24,v26,v5
	_mm_store_ps(ctx.v24.f32, _mm_sub_ps(_mm_load_ps(ctx.v26.f32), _mm_load_ps(ctx.v5.f32)));
	// vsubfp v23,v24,v25
	_mm_store_ps(ctx.v23.f32, _mm_sub_ps(_mm_load_ps(ctx.v24.f32), _mm_load_ps(ctx.v25.f32)));
	// vmsum3fp128 v22,v23,v12
	_mm_store_ps(ctx.v22.f32, _mm_dp_ps(_mm_load_ps(ctx.v23.f32), _mm_load_ps(ctx.v12.f32), 0xEF));
	// stvewx v22,r0,r6
	ea = (ctx.r6.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v22.u32[3 - ((ea & 0xF) >> 2)]);
	// lfs f5,100(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f5.f64 = double(temp.f32);
	// lfs f12,24(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f11,f12,f31
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f31.f64));
	// fmuls f10,f11,f31
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f31.f64));
	// fmadds f9,f5,f31,f13
	ctx.f9.f64 = double(float(ctx.f5.f64 * ctx.f31.f64 + ctx.f13.f64));
	// fmuls f8,f10,f23
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f23.f64));
	// fcmpu cr6,f9,f8
	ctx.cr6.compare(ctx.f9.f64, ctx.f8.f64);
	// bgt cr6,0x82e1e698
	if (ctx.cr6.gt) goto loc_82E1E698;
	// fcmpu cr6,f4,f0
	ctx.cr6.compare(ctx.f4.f64, ctx.f0.f64);
	// bge cr6,0x82e1e604
	if (!ctx.cr6.lt) goto loc_82E1E604;
	// lfs f0,0(r21)
	temp.u32 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f30,f0
	ctx.cr6.compare(ctx.f30.f64, ctx.f0.f64);
	// bne cr6,0x82e1e5dc
	if (!ctx.cr6.eq) goto loc_82E1E5DC;
	// stfs f30,0(r25)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r25.u32 + 0, temp.u32);
	// fmr f28,f30
	ctx.f28.f64 = ctx.f30.f64;
	// lvx128 v0,r0,r31
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r31.u32) & ~0xF), VectorMaskL));
	// stvx128 v0,r25,r22
	_mm_store_si128((__m128i*)(base + ((ctx.r25.u32 + ctx.r22.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// b 0x82e1e698
	goto loc_82E1E698;
loc_82E1E5DC:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lfs f3,12(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f3.f64 = double(temp.f32);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// stw r25,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r25.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// fmr f2,f30
	ctx.f2.f64 = ctx.f30.f64;
	// fmr f1,f25
	ctx.f1.f64 = ctx.f25.f64;
	// bl 0x82e1e2c8
	ctx.lr = 0x82E1E5FC;
	sub_82E1E2C8(ctx, base);
	// fmr f28,f1
	ctx.fpscr.disableFlushMode();
	ctx.f28.f64 = ctx.f1.f64;
	// b 0x82e1e698
	goto loc_82E1E698;
loc_82E1E604:
	// lvx128 v13,r0,r30
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r30.u32) & ~0xF), VectorMaskL));
	// fmuls f11,f31,f31
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(float(ctx.f31.f64 * ctx.f31.f64));
	// stvx128 v13,r0,r31
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// stvx128 v0,r0,r30
	_mm_store_si128((__m128i*)(base + ((ctx.r30.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stfs f4,12(r30)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r30.u32 + 12, temp.u32);
	// addi r30,r30,16
	ctx.r30.s64 = ctx.r30.s64 + 16;
	// lfs f0,28(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,4(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f10,f4,f12
	ctx.f10.f64 = double(float(ctx.f4.f64 - ctx.f12.f64));
	// fmuls f9,f10,f0
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// fmuls f13,f9,f29
	ctx.f13.f64 = double(float(ctx.f9.f64 * ctx.f29.f64));
	// fcmpu cr6,f13,f11
	ctx.cr6.compare(ctx.f13.f64, ctx.f11.f64);
	// bgt cr6,0x82e1e698
	if (ctx.cr6.gt) goto loc_82E1E698;
	// lfs f11,0(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// fsqrts f13,f13
	ctx.f13.f64 = double(float(sqrt(ctx.f13.f64)));
	// fsubs f10,f11,f12
	ctx.f10.f64 = double(float(ctx.f11.f64 - ctx.f12.f64));
	// fcmpu cr6,f5,f26
	ctx.cr6.compare(ctx.f5.f64, ctx.f26.f64);
	// fmuls f9,f10,f0
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// fmuls f0,f0,f5
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f5.f64));
	// fmuls f12,f9,f29
	ctx.f12.f64 = double(float(ctx.f9.f64 * ctx.f29.f64));
	// blt cr6,0x82e1e664
	if (ctx.cr6.lt) goto loc_82E1E664;
	// fmadds f0,f0,f29,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f29.f64 + ctx.f13.f64));
	// b 0x82e1e670
	goto loc_82E1E670;
loc_82E1E664:
	// fneg f11,f0
	ctx.fpscr.disableFlushMode();
	ctx.f11.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// fsubs f10,f11,f13
	ctx.f10.f64 = double(float(ctx.f11.f64 - ctx.f13.f64));
	// fsel f0,f10,f11,f13
	ctx.f0.f64 = ctx.f10.f64 >= 0.0 ? ctx.f11.f64 : ctx.f13.f64;
loc_82E1E670:
	// fcmpu cr6,f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bgt cr6,0x82e1e698
	if (ctx.cr6.gt) goto loc_82E1E698;
	// fsqrts f13,f12
	ctx.f13.f64 = double(float(sqrt(ctx.f12.f64)));
	// lfs f12,8(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	ctx.f12.f64 = double(temp.f32);
	// fadds f11,f13,f0
	ctx.f11.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// fsubs f10,f11,f12
	ctx.f10.f64 = double(float(ctx.f11.f64 - ctx.f12.f64));
	// fsel f9,f10,f11,f12
	ctx.f9.f64 = ctx.f10.f64 >= 0.0 ? ctx.f11.f64 : ctx.f12.f64;
	// fadds f8,f9,f30
	ctx.f8.f64 = double(float(ctx.f9.f64 + ctx.f30.f64));
	// fsubs f7,f27,f8
	ctx.f7.f64 = double(float(ctx.f27.f64 - ctx.f8.f64));
	// fsel f27,f7,f8,f27
	ctx.f27.f64 = ctx.f7.f64 >= 0.0 ? ctx.f8.f64 : ctx.f27.f64;
loc_82E1E698:
	// addic. r26,r26,-1
	ctx.xer.ca = ctx.r26.u32 > 0;
	ctx.r26.s64 = ctx.r26.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// addi r31,r31,16
	ctx.r31.s64 = ctx.r31.s64 + 16;
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// bge 0x82e1e4d8
	if (!ctx.cr0.lt) goto loc_82E1E4D8;
loc_82E1E6A8:
	// fcmpu cr6,f30,f28
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f30.f64, ctx.f28.f64);
	// bgt cr6,0x82e1e6d0
	if (ctx.cr6.gt) goto loc_82E1E6D0;
	// fcmpu cr6,f30,f27
	ctx.cr6.compare(ctx.f30.f64, ctx.f27.f64);
	// bne cr6,0x82e1e6c0
	if (!ctx.cr6.eq) goto loc_82E1E6C0;
	// fcmpu cr6,f30,f28
	ctx.cr6.compare(ctx.f30.f64, ctx.f28.f64);
	// bge cr6,0x82e1e6d0
	if (!ctx.cr6.lt) goto loc_82E1E6D0;
loc_82E1E6C0:
	// fmr f25,f30
	ctx.fpscr.disableFlushMode();
	ctx.f25.f64 = ctx.f30.f64;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// fmr f30,f27
	ctx.f30.f64 = ctx.f27.f64;
	// bne cr6,0x82e1e49c
	if (!ctx.cr6.eq) goto loc_82E1E49C;
loc_82E1E6D0:
	// addi r1,r1,592
	ctx.r1.s64 = ctx.r1.s64 + 592;
	// addi r12,r1,-96
	ctx.r12.s64 = ctx.r1.s64 + -96;
	// bl 0x82fa8d60
	ctx.lr = 0x82E1E6DC;
	__restfpr_23(ctx, base);
	// b 0x82fa76ac
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E1E6E0"))) PPC_WEAK_FUNC(sub_82E1E6E0);
PPC_FUNC_IMPL(__imp__sub_82E1E6E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7670
	ctx.lr = 0x82E1E6E8;
	__savegprlr_26(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r31,r7
	ctx.r31.u64 = ctx.r7.u64;
	// mr r28,r8
	ctx.r28.u64 = ctx.r8.u64;
	// mr r27,r9
	ctx.r27.u64 = ctx.r9.u64;
	// bl 0x82d2e728
	ctx.lr = 0x82E1E714;
	sub_82D2E728(ctx, base);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e19ca0
	ctx.lr = 0x82E1E72C;
	sub_82E19CA0(ctx, base);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lvx128 v8,r0,r26
	simd::store_shuffled(ctx.v8, simd::load_and_shuffle(base + ((ctx.r26.u32) & ~0xF), VectorMaskL));
	// li r9,16
	ctx.r9.s64 = 16;
	// li r11,32
	ctx.r11.s64 = 32;
	// lvx128 v0,r0,r10
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// vspltw v11,v0,0
	_mm_store_si128((__m128i*)ctx.v11.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0xFF));
	// lvx128 v12,r26,r9
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((ctx.r26.u32 + ctx.r9.u32) & ~0xF), VectorMaskL));
	// vspltw v10,v0,1
	_mm_store_si128((__m128i*)ctx.v10.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0xAA));
	// lvx128 v9,r26,r11
	simd::store_shuffled(ctx.v9, simd::load_and_shuffle(base + ((ctx.r26.u32 + ctx.r11.u32) & ~0xF), VectorMaskL));
	// vspltw v13,v0,2
	_mm_store_si128((__m128i*)ctx.v13.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0x55));
	// vmulfp128 v11,v8,v11
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v11.f32, _mm_mul_ps(_mm_load_ps(ctx.v8.f32), _mm_load_ps(ctx.v11.f32)));
	// vmaddfp v12,v12,v10,v11
	_mm_store_ps(ctx.v12.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v10.f32)), _mm_load_ps(ctx.v11.f32)));
	// vmaddfp v13,v9,v13,v12
	_mm_store_ps(ctx.v13.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v9.f32), _mm_load_ps(ctx.v13.f32)), _mm_load_ps(ctx.v12.f32)));
	// stvx128 v13,r0,r28
	_mm_store_si128((__m128i*)(base + ((ctx.r28.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r8,1
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 1, ctx.xer);
	// beq cr6,0x82e1e794
	if (ctx.cr6.eq) goto loc_82E1E794;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82e1e790
	if (!ctx.cr6.eq) goto loc_82E1E790;
	// li r11,160
	ctx.r11.s64 = 160;
	// vspltw v13,v0,3
	_mm_store_si128((__m128i*)ctx.v13.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0x0));
	// lvx128 v12,r31,r11
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((ctx.r31.u32 + ctx.r11.u32) & ~0xF), VectorMaskL));
	// vmaddfp v12,v0,v13,v12
	_mm_store_ps(ctx.v12.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v13.f32)), _mm_load_ps(ctx.v12.f32)));
	// b 0x82e1e798
	goto loc_82E1E798;
loc_82E1E790:
	// li r11,304
	ctx.r11.s64 = 304;
loc_82E1E794:
	// lvx128 v12,r31,r11
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((ctx.r31.u32 + ctx.r11.u32) & ~0xF), VectorMaskL));
loc_82E1E798:
	// vspltw v13,v0,3
	_mm_store_si128((__m128i*)ctx.v13.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0x0));
	// addi r11,r1,144
	ctx.r11.s64 = ctx.r1.s64 + 144;
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// lfs f0,92(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f0.f64 = double(temp.f32);
	// addi r9,r1,128
	ctx.r9.s64 = ctx.r1.s64 + 128;
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// vnmsubfp v12,v0,v13,v12
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v12.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v13.f32)), _mm_load_ps(ctx.v12.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// lis r7,-32237
	ctx.r7.s64 = -2112684032;
	// lvx128 v13,r0,r11
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// lvx128 v11,r0,r10
	simd::store_shuffled(ctx.v11, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// addi r6,r7,21904
	ctx.r6.s64 = ctx.r7.s64 + 21904;
	// lvx128 v10,r0,r9
	simd::store_shuffled(ctx.v10, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// lvx128 v9,r0,r8
	simd::store_shuffled(ctx.v9, simd::load_and_shuffle(base + ((ctx.r8.u32) & ~0xF), VectorMaskL));
	// lvx128 v0,r0,r6
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r6.u32) & ~0xF), VectorMaskL));
	// vsubfp v8,v12,v13
	_mm_store_ps(ctx.v8.f32, _mm_sub_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v13.f32)));
	// vmsum3fp128 v7,v11,v8
	_mm_store_ps(ctx.v7.f32, _mm_dp_ps(_mm_load_ps(ctx.v11.f32), _mm_load_ps(ctx.v8.f32), 0xEF));
	// vmsum3fp128 v6,v10,v8
	_mm_store_ps(ctx.v6.f32, _mm_dp_ps(_mm_load_ps(ctx.v10.f32), _mm_load_ps(ctx.v8.f32), 0xEF));
	// vmsum3fp128 v5,v9,v8
	_mm_store_ps(ctx.v5.f32, _mm_dp_ps(_mm_load_ps(ctx.v9.f32), _mm_load_ps(ctx.v8.f32), 0xEF));
	// vmrghw v4,v7,v0
	_mm_store_si128((__m128i*)ctx.v4.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), _mm_load_si128((__m128i*)ctx.v7.u32)));
	// vmrghw v3,v5,v6
	_mm_store_si128((__m128i*)ctx.v3.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v6.u32), _mm_load_si128((__m128i*)ctx.v5.u32)));
	// vmrghw v2,v3,v4
	_mm_store_si128((__m128i*)ctx.v2.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v4.u32), _mm_load_si128((__m128i*)ctx.v3.u32)));
	// stvx128 v2,r0,r27
	_mm_store_si128((__m128i*)(base + ((ctx.r27.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v2.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lfs f13,16(r29)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,16(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f11,f0,f12
	ctx.f11.f64 = double(float(ctx.f0.f64 - ctx.f12.f64));
	// fsubs f10,f11,f13
	ctx.f10.f64 = double(float(ctx.f11.f64 - ctx.f13.f64));
	// stfs f10,12(r28)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r28.u32 + 12, temp.u32);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x82fa76c0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E1E80C"))) PPC_WEAK_FUNC(sub_82E1E80C);
PPC_FUNC_IMPL(__imp__sub_82E1E80C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E1E810"))) PPC_WEAK_FUNC(sub_82E1E810);
PPC_FUNC_IMPL(__imp__sub_82E1E810) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7674
	ctx.lr = 0x82E1E818;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r10,112
	ctx.r10.s64 = 112;
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r8,80
	ctx.r8.s64 = 80;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r30,8(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r29,8(r9)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// lwz r28,0(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// stw r30,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r30.u32);
	// stw r29,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r29.u32);
	// lfs f0,16(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,16(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// fadds f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// stfs f12,20(r4)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r4.u32 + 20, temp.u32);
	// lvx128 v0,r3,r10
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r3.u32 + ctx.r10.u32) & ~0xF), VectorMaskL));
	// stvx128 v0,r4,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r4.u32 + ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addi r6,r11,80
	ctx.r6.s64 = ctx.r11.s64 + 80;
	// stw r6,64(r4)
	PPC_STORE_U32(ctx.r4.u32 + 64, ctx.r6.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r5,0(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r4,44(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 44);
	// mtctr r4
	ctx.ctr.u64 = ctx.r4.u64;
	// bctrl 
	ctx.lr = 0x82E1E880;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r3.u32);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// stw r3,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r3.u32);
	// bl 0x82d2d090
	ctx.lr = 0x82E1E890;
	sub_82D2D090(ctx, base);
	// rlwinm r11,r27,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r4,0(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r11,r11,127
	ctx.r11.s64 = ctx.r11.s64 + 127;
	// rlwinm r11,r11,0,0,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFF80;
	// add r10,r11,r4
	ctx.r10.u64 = ctx.r11.u64 + ctx.r4.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r4,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r4.u32);
	// lwz r9,0(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r8,48(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82E1E8C0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lfs f11,124(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,160(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 160);
	ctx.f10.f64 = double(temp.f32);
	// lis r7,-32250
	ctx.r7.s64 = -2113536000;
	// fmuls f9,f10,f11
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f11.f64));
	// lfs f8,108(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,160(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 160);
	ctx.f7.f64 = double(temp.f32);
	// lis r6,-32233
	ctx.r6.s64 = -2112421888;
	// fmuls f6,f7,f8
	ctx.f6.f64 = double(float(ctx.f7.f64 * ctx.f8.f64));
	// lfs f0,-25140(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -25140);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,24436(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 24436);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f5,f9,f11
	ctx.f5.f64 = double(float(ctx.f9.f64 * ctx.f11.f64));
	// fmadds f4,f6,f8,f5
	ctx.f4.f64 = double(float(ctx.f6.f64 * ctx.f8.f64 + ctx.f5.f64));
	// stfs f4,24(r31)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r31.u32 + 24, temp.u32);
	// fadds f3,f4,f0
	ctx.f3.f64 = double(float(ctx.f4.f64 + ctx.f0.f64));
	// fdivs f2,f13,f3
	ctx.f2.f64 = double(float(ctx.f13.f64 / ctx.f3.f64));
	// stfs f2,28(r31)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r31.u32 + 28, temp.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E1E908"))) PPC_WEAK_FUNC(sub_82E1E908);
PPC_FUNC_IMPL(__imp__sub_82E1E908) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7644
	ctx.lr = 0x82E1E910;
	__savegprlr_15(ctx, base);
	// addi r12,r1,-144
	ctx.r12.s64 = ctx.r1.s64 + -144;
	// bl 0x82fa8d08
	ctx.lr = 0x82E1E918;
	__savefpr_20(ctx, base);
	// stwu r1,-960(r1)
	ea = -960 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r17,r8
	ctx.r17.u64 = ctx.r8.u64;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// fsubs f0,f4,f3
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f4.f64 - ctx.f3.f64));
	// fsubs f13,f2,f1
	ctx.f13.f64 = double(float(ctx.f2.f64 - ctx.f1.f64));
	// mr r24,r7
	ctx.r24.u64 = ctx.r7.u64;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// fmr f28,f1
	ctx.f28.f64 = ctx.f1.f64;
	// li r15,0
	ctx.r15.s64 = 0;
	// fmr f29,f2
	ctx.f29.f64 = ctx.f2.f64;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lis r10,-32233
	ctx.r10.s64 = -2112421888;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// fmr f27,f3
	ctx.f27.f64 = ctx.f3.f64;
	// lfs f22,11556(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 11556);
	ctx.f22.f64 = double(temp.f32);
	// mr r16,r4
	ctx.r16.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// fmr f24,f4
	ctx.f24.f64 = ctx.f4.f64;
	// lfs f12,16(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	ctx.f12.f64 = double(temp.f32);
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// lfs f11,16(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 16);
	ctx.f11.f64 = double(temp.f32);
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// lfs f23,24436(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 24436);
	ctx.f23.f64 = double(temp.f32);
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// addi r26,r3,4
	ctx.r26.s64 = ctx.r3.s64 + 4;
	// fdivs f20,f0,f13
	ctx.f20.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// addi r19,r3,12
	ctx.r19.s64 = ctx.r3.s64 + 12;
	// fadds f21,f12,f11
	ctx.f21.f64 = double(float(ctx.f12.f64 + ctx.f11.f64));
	// lfs f25,-19516(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -19516);
	ctx.f25.f64 = double(temp.f32);
	// mr r23,r15
	ctx.r23.u64 = ctx.r15.u64;
	// lfs f26,11976(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 11976);
	ctx.f26.f64 = double(temp.f32);
	// li r20,32
	ctx.r20.s64 = 32;
	// li r21,160
	ctx.r21.s64 = 160;
	// li r22,304
	ctx.r22.s64 = 304;
	// li r25,-64
	ctx.r25.s64 = -64;
	// addi r18,r11,21904
	ctx.r18.s64 = ctx.r11.s64 + 21904;
loc_82E1E9B4:
	// lfs f12,16(r16)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r16.u32 + 16);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f0,f24,f27
	ctx.f0.f64 = double(float(ctx.f24.f64 - ctx.f27.f64));
	// fneg f13,f12
	ctx.f13.u64 = ctx.f12.u64 ^ 0x8000000000000000;
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x82e1e9d0
	if (!ctx.cr6.gt) goto loc_82E1E9D0;
	// fmr f29,f28
	ctx.f29.f64 = ctx.f28.f64;
	// fmr f0,f22
	ctx.f0.f64 = ctx.f22.f64;
loc_82E1E9D0:
	// lfs f13,0(r16)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r16.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// fsubs f11,f24,f13
	ctx.f11.f64 = double(float(ctx.f24.f64 - ctx.f13.f64));
	// fabs f10,f11
	ctx.f10.u64 = ctx.f11.u64 & ~0x8000000000000000;
	// fcmpu cr6,f10,f12
	ctx.cr6.compare(ctx.f10.f64, ctx.f12.f64);
	// blt cr6,0x82e1e9ec
	if (ctx.cr6.lt) goto loc_82E1E9EC;
	// mr r11,r15
	ctx.r11.u64 = ctx.r15.u64;
loc_82E1E9EC:
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82e1ea08
	if (ctx.cr6.eq) goto loc_82E1EA08;
	// li r28,1
	ctx.r28.s64 = 1;
	// fmr f31,f29
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f29.f64;
	// mr r29,r15
	ctx.r29.u64 = ctx.r15.u64;
	// b 0x82e1ea30
	goto loc_82E1EA30;
loc_82E1EA08:
	// fsubs f13,f13,f27
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f27.f64));
	// mr r28,r15
	ctx.r28.u64 = ctx.r15.u64;
	// fdivs f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 / ctx.f0.f64));
	// fsubs f11,f12,f26
	ctx.f11.f64 = double(float(ctx.f12.f64 - ctx.f26.f64));
	// fsel f10,f11,f12,f26
	ctx.f10.f64 = ctx.f11.f64 >= 0.0 ? ctx.f12.f64 : ctx.f26.f64;
	// fsubs f9,f10,f25
	ctx.f9.f64 = double(float(ctx.f10.f64 - ctx.f25.f64));
	// fsel f8,f9,f25,f10
	ctx.f8.f64 = ctx.f9.f64 >= 0.0 ? ctx.f25.f64 : ctx.f10.f64;
	// fsubs f7,f23,f8
	ctx.f7.f64 = double(float(ctx.f23.f64 - ctx.f8.f64));
	// fmuls f6,f8,f29
	ctx.f6.f64 = double(float(ctx.f8.f64 * ctx.f29.f64));
	// fmadds f31,f7,f28,f6
	ctx.f31.f64 = double(float(ctx.f7.f64 * ctx.f28.f64 + ctx.f6.f64));
loc_82E1EA30:
	// lwz r31,0(r19)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r19.u32 + 0);
	// addi r6,r1,240
	ctx.r6.s64 = ctx.r1.s64 + 240;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lfs f0,88(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f30,f0,f31
	ctx.f30.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lfs f1,80(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	ctx.f1.f64 = double(temp.f32);
	// addi r3,r11,64
	ctx.r3.s64 = ctx.r11.s64 + 64;
	// fmr f2,f30
	ctx.f2.f64 = ctx.f30.f64;
	// bl 0x830b2db0
	ctx.lr = 0x82E1EA58;
	sub_830B2DB0(ctx, base);
	// lwz r10,0(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// addi r6,r1,592
	ctx.r6.s64 = ctx.r1.s64 + 592;
	// lfs f1,80(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	ctx.f1.f64 = double(temp.f32);
	// fmr f2,f30
	ctx.f2.f64 = ctx.f30.f64;
	// lwz r11,8(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// addi r3,r11,64
	ctx.r3.s64 = ctx.r11.s64 + 64;
	// bl 0x830b2db0
	ctx.lr = 0x82E1EA74;
	sub_830B2DB0(ctx, base);
	// addi r5,r1,592
	ctx.r5.s64 = ctx.r1.s64 + 592;
	// addi r4,r1,240
	ctx.r4.s64 = ctx.r1.s64 + 240;
	// addi r3,r1,656
	ctx.r3.s64 = ctx.r1.s64 + 656;
	// bl 0x82d2e728
	ctx.lr = 0x82E1EA84;
	sub_82D2E728(ctx, base);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq cr6,0x82e1eb04
	if (ctx.cr6.eq) goto loc_82E1EB04;
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// addi r7,r1,208
	ctx.r7.s64 = ctx.r1.s64 + 208;
	// lwz r10,0(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// addi r6,r1,656
	ctx.r6.s64 = ctx.r1.s64 + 656;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r4,0(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// bl 0x82e19ca0
	ctx.lr = 0x82E1EAAC;
	sub_82E19CA0(ctx, base);
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// bne cr6,0x82e1eac8
	if (!ctx.cr6.eq) goto loc_82E1EAC8;
	// addi r11,r1,192
	ctx.r11.s64 = ctx.r1.s64 + 192;
	// lvx128 v0,r30,r20
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r30.u32 + ctx.r20.u32) & ~0xF), VectorMaskL));
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// b 0x82e1ebc8
	goto loc_82E1EBC8;
loc_82E1EAC8:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82e1eaf4
	if (!ctx.cr6.eq) goto loc_82E1EAF4;
	// addi r11,r1,208
	ctx.r11.s64 = ctx.r1.s64 + 208;
	// lvx128 v12,r30,r21
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((ctx.r30.u32 + ctx.r21.u32) & ~0xF), VectorMaskL));
	// addi r10,r1,192
	ctx.r10.s64 = ctx.r1.s64 + 192;
	// lvx128 v0,r0,r11
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// vspltw v13,v0,3
	_mm_store_si128((__m128i*)ctx.v13.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0x0));
	// vmaddfp v0,v0,v13,v12
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v13.f32)), _mm_load_ps(ctx.v12.f32)));
	// stvx128 v0,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// b 0x82e1ebc8
	goto loc_82E1EBC8;
loc_82E1EAF4:
	// addi r11,r1,192
	ctx.r11.s64 = ctx.r1.s64 + 192;
	// lvx128 v0,r30,r22
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r30.u32 + ctx.r22.u32) & ~0xF), VectorMaskL));
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// b 0x82e1ebc8
	goto loc_82E1EBC8;
loc_82E1EB04:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r9,r1,704
	ctx.r9.s64 = ctx.r1.s64 + 704;
	// addi r8,r1,688
	ctx.r8.s64 = ctx.r1.s64 + 688;
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// addi r7,r1,672
	ctx.r7.s64 = ctx.r1.s64 + 672;
	// addi r6,r1,656
	ctx.r6.s64 = ctx.r1.s64 + 656;
	// addi r11,r10,14
	ctx.r11.s64 = ctx.r10.s64 + 14;
	// lvx128 v11,r0,r9
	simd::store_shuffled(ctx.v11, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// lvx128 v10,r0,r8
	simd::store_shuffled(ctx.v10, simd::load_and_shuffle(base + ((ctx.r8.u32) & ~0xF), VectorMaskL));
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// lvx128 v9,r0,r7
	simd::store_shuffled(ctx.v9, simd::load_and_shuffle(base + ((ctx.r7.u32) & ~0xF), VectorMaskL));
	// lvx128 v8,r0,r6
	simd::store_shuffled(ctx.v8, simd::load_and_shuffle(base + ((ctx.r6.u32) & ~0xF), VectorMaskL));
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
loc_82E1EB38:
	// lvx128 v0,r0,r11
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// vspltw v7,v0,0
	_mm_store_si128((__m128i*)ctx.v7.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0xFF));
	// vspltw v13,v0,1
	_mm_store_si128((__m128i*)ctx.v13.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0xAA));
	// vspltw v12,v0,2
	_mm_store_si128((__m128i*)ctx.v12.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0x55));
	// vmulfp128 v0,v8,v7
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v0.f32, _mm_mul_ps(_mm_load_ps(ctx.v8.f32), _mm_load_ps(ctx.v7.f32)));
	// vmaddfp v0,v9,v13,v0
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v9.f32), _mm_load_ps(ctx.v13.f32)), _mm_load_ps(ctx.v0.f32)));
	// vmaddfp v0,v10,v12,v0
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v10.f32), _mm_load_ps(ctx.v12.f32)), _mm_load_ps(ctx.v0.f32)));
	// vaddfp v6,v0,v11
	_mm_store_ps(ctx.v6.f32, _mm_add_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v11.f32)));
	// stvx128 v6,r11,r25
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r25.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v6.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r11,r11,-16
	ctx.r11.s64 = ctx.r11.s64 + -16;
	// bge 0x82e1eb38
	if (!ctx.cr0.lt) goto loc_82E1EB38;
	// addi r7,r1,240
	ctx.r7.s64 = ctx.r1.s64 + 240;
	// lvx128 v13,r0,r24
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r24.u32) & ~0xF), VectorMaskL));
	// addi r11,r1,256
	ctx.r11.s64 = ctx.r1.s64 + 256;
	// lvx128 v0,r0,r18
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r18.u32) & ~0xF), VectorMaskL));
	// addi r10,r1,272
	ctx.r10.s64 = ctx.r1.s64 + 272;
	// lwz r6,4(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r31,r1,496
	ctx.r31.s64 = ctx.r1.s64 + 496;
	// lwz r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r9,r1,208
	ctx.r9.s64 = ctx.r1.s64 + 208;
	// lvx128 v9,r0,r7
	simd::store_shuffled(ctx.v9, simd::load_and_shuffle(base + ((ctx.r7.u32) & ~0xF), VectorMaskL));
	// addi r8,r1,192
	ctx.r8.s64 = ctx.r1.s64 + 192;
	// lvx128 v12,r0,r11
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// vmsum3fp128 v7,v9,v13
	_mm_store_ps(ctx.v7.f32, _mm_dp_ps(_mm_load_ps(ctx.v9.f32), _mm_load_ps(ctx.v13.f32), 0xEF));
	// lvx128 v11,r0,r10
	simd::store_shuffled(ctx.v11, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// vmsum3fp128 v10,v12,v13
	_mm_store_ps(ctx.v10.f32, _mm_dp_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v13.f32), 0xEF));
	// vmsum3fp128 v8,v11,v13
	_mm_store_ps(ctx.v8.f32, _mm_dp_ps(_mm_load_ps(ctx.v11.f32), _mm_load_ps(ctx.v13.f32), 0xEF));
	// addi r7,r1,496
	ctx.r7.s64 = ctx.r1.s64 + 496;
	// addi r4,r30,160
	ctx.r4.s64 = ctx.r30.s64 + 160;
	// addi r3,r30,32
	ctx.r3.s64 = ctx.r30.s64 + 32;
	// vmrghw v6,v10,v0
	_mm_store_si128((__m128i*)ctx.v6.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), _mm_load_si128((__m128i*)ctx.v10.u32)));
	// vmrghw v5,v7,v8
	_mm_store_si128((__m128i*)ctx.v5.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v8.u32), _mm_load_si128((__m128i*)ctx.v7.u32)));
	// vmrghw v4,v5,v6
	_mm_store_si128((__m128i*)ctx.v4.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v6.u32), _mm_load_si128((__m128i*)ctx.v5.u32)));
	// stvx128 v4,r0,r31
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v4.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// bl 0x82e17978
	ctx.lr = 0x82E1EBC8;
	sub_82E17978(ctx, base);
loc_82E1EBC8:
	// lfs f0,220(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 220);
	ctx.f0.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// fsubs f30,f0,f21
	ctx.f30.f64 = double(float(ctx.f0.f64 - ctx.f21.f64));
	// lfs f0,0(r16)
	temp.u32 = PPC_LOAD_U32(ctx.r16.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,16(r16)
	temp.u32 = PPC_LOAD_U32(ctx.r16.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f30,f0
	ctx.f12.f64 = double(float(ctx.f30.f64 - ctx.f0.f64));
	// fabs f11,f12
	ctx.f11.u64 = ctx.f12.u64 & ~0x8000000000000000;
	// fcmpu cr6,f11,f13
	ctx.cr6.compare(ctx.f11.f64, ctx.f13.f64);
	// blt cr6,0x82e1ebf0
	if (ctx.cr6.lt) goto loc_82E1EBF0;
	// mr r11,r15
	ctx.r11.u64 = ctx.r15.u64;
loc_82E1EBF0:
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82e1ec38
	if (!ctx.cr6.eq) goto loc_82E1EC38;
	// extsb r11,r28
	ctx.r11.s64 = ctx.r28.s8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82e1ec38
	if (!ctx.cr6.eq) goto loc_82E1EC38;
	// fcmpu cr6,f28,f29
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f28.f64, ctx.f29.f64);
	// beq cr6,0x82e1ec38
	if (ctx.cr6.eq) goto loc_82E1EC38;
	// fcmpu cr6,f30,f0
	ctx.cr6.compare(ctx.f30.f64, ctx.f0.f64);
	// bge cr6,0x82e1ec24
	if (!ctx.cr6.lt) goto loc_82E1EC24;
	// fmr f29,f31
	ctx.f29.f64 = ctx.f31.f64;
	// fmr f24,f30
	ctx.f24.f64 = ctx.f30.f64;
	// b 0x82e1ec2c
	goto loc_82E1EC2C;
loc_82E1EC24:
	// fmr f28,f31
	ctx.fpscr.disableFlushMode();
	ctx.f28.f64 = ctx.f31.f64;
	// fmr f27,f30
	ctx.f27.f64 = ctx.f30.f64;
loc_82E1EC2C:
	// addi r23,r23,1
	ctx.r23.s64 = ctx.r23.s64 + 1;
	// cmpwi cr6,r23,10
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 10, ctx.xer);
	// blt cr6,0x82e1e9b4
	if (ctx.cr6.lt) goto loc_82E1E9B4;
loc_82E1EC38:
	// lwz r11,0(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 0);
	// lfs f0,12(r16)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r16.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// lwz r28,1060(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1060);
	// addi r29,r11,80
	ctx.r29.s64 = ctx.r11.s64 + 80;
	// addi r25,r28,12336
	ctx.r25.s64 = ctx.r28.s64 + 12336;
	// lfs f13,88(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f13,f31
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f31.f64));
	// lfs f11,80(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,12336(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 12336);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f9,f12,f0
	ctx.f9.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
	// fsel f8,f9,f12,f0
	ctx.f8.f64 = ctx.f9.f64 >= 0.0 ? ctx.f12.f64 : ctx.f0.f64;
	// fadds f29,f8,f11
	ctx.f29.f64 = double(float(ctx.f8.f64 + ctx.f11.f64));
	// fcmpu cr6,f29,f10
	ctx.cr6.compare(ctx.f29.f64, ctx.f10.f64);
	// bge cr6,0x82e1f430
	if (!ctx.cr6.lt) goto loc_82E1F430;
	// lfs f13,4(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// fcmpu cr6,f29,f12
	ctx.cr6.compare(ctx.f29.f64, ctx.f12.f64);
	// bge cr6,0x82e1f430
	if (!ctx.cr6.lt) goto loc_82E1F430;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// addi r5,r1,192
	ctx.r5.s64 = ctx.r1.s64 + 192;
	// addi r4,r1,240
	ctx.r4.s64 = ctx.r1.s64 + 240;
	// addi r3,r1,512
	ctx.r3.s64 = ctx.r1.s64 + 512;
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x82d2e210
	ctx.lr = 0x82E1EC98;
	sub_82D2E210(ctx, base);
	// addi r5,r1,208
	ctx.r5.s64 = ctx.r1.s64 + 208;
	// addi r4,r1,240
	ctx.r4.s64 = ctx.r1.s64 + 240;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82d2e2a8
	ctx.lr = 0x82E1ECA8;
	sub_82D2E2A8(ctx, base);
	// lfs f0,16(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// fneg f13,f0
	ctx.f13.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// addi r9,r1,160
	ctx.r9.s64 = ctx.r1.s64 + 160;
	// addi r7,r1,160
	ctx.r7.s64 = ctx.r1.s64 + 160;
	// lwz r8,0(r26)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// addi r6,r1,512
	ctx.r6.s64 = ctx.r1.s64 + 512;
	// addi r5,r1,176
	ctx.r5.s64 = ctx.r1.s64 + 176;
	// lvx128 v0,r0,r9
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// stfs f30,172(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// li r3,2
	ctx.r3.s64 = 2;
	// lvx128 v10,r0,r7
	simd::store_shuffled(ctx.v10, simd::load_and_shuffle(base + ((ctx.r7.u32) & ~0xF), VectorMaskL));
	// stvx128 v10,r0,r5
	_mm_store_si128((__m128i*)(base + ((ctx.r5.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v10.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// fsubs f12,f13,f30
	ctx.f12.f64 = double(float(ctx.f13.f64 - ctx.f30.f64));
	// stfs f12,96(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lvlx v12,0,r10
	temp.u32 = ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw v12,v12,0
	_mm_store_si128((__m128i*)ctx.v12.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v12.u32), 0xFF));
	// lvx128 v13,r0,r6
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r6.u32) & ~0xF), VectorMaskL));
	// vmaddfp v0,v0,v12,v13
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v12.f32)), _mm_load_ps(ctx.v13.f32)));
	// stvx128 v0,r0,r4
	_mm_store_si128((__m128i*)(base + ((ctx.r4.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lwz r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// bne cr6,0x82e1eda4
	if (!ctx.cr6.eq) goto loc_82E1EDA4;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r9,236(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 236);
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// stb r11,105(r1)
	PPC_STORE_U8(ctx.r1.u32 + 105, ctx.r11.u8);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// sth r9,116(r1)
	PPC_STORE_U16(ctx.r1.u32 + 116, ctx.r9.u16);
	// bge cr6,0x82e1ed38
	if (!ctx.cr6.lt) goto loc_82E1ED38;
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 65535;
	// b 0x82e1ed40
	goto loc_82E1ED40;
loc_82E1ED38:
	// lwz r11,252(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 252);
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
loc_82E1ED40:
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// sth r11,118(r1)
	PPC_STORE_U16(ctx.r1.u32 + 118, ctx.r11.u16);
	// bge cr6,0x82e1ed58
	if (!ctx.cr6.lt) goto loc_82E1ED58;
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 65535;
	// b 0x82e1ed60
	goto loc_82E1ED60;
loc_82E1ED58:
	// lwz r11,268(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 268);
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
loc_82E1ED60:
	// sth r11,120(r1)
	PPC_STORE_U16(ctx.r1.u32 + 120, ctx.r11.u16);
	// addi r10,r1,176
	ctx.r10.s64 = ctx.r1.s64 + 176;
	// lwz r3,0(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// addi r9,r1,240
	ctx.r9.s64 = ctx.r1.s64 + 240;
	// lwz r6,0(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r8,r31
	ctx.r8.u64 = ctx.r31.u64;
	// lwz r11,64(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 64);
	// addi r7,r1,592
	ctx.r7.s64 = ctx.r1.s64 + 592;
	// addi r6,r1,144
	ctx.r6.s64 = ctx.r1.s64 + 144;
	// addi r5,r1,105
	ctx.r5.s64 = ctx.r1.s64 + 105;
	// addi r4,r1,116
	ctx.r4.s64 = ctx.r1.s64 + 116;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E1ED94;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r10,r1,176
	ctx.r10.s64 = ctx.r1.s64 + 176;
	// addi r9,r1,160
	ctx.r9.s64 = ctx.r1.s64 + 160;
	// lvx128 v10,r0,r10
	simd::store_shuffled(ctx.v10, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// b 0x82e1ee84
	goto loc_82E1EE84;
loc_82E1EDA4:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// cmpwi cr6,r9,3
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 3, ctx.xer);
	// bne cr6,0x82e1eeac
	if (!ctx.cr6.eq) goto loc_82E1EEAC;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r9,44(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// stb r11,104(r1)
	PPC_STORE_U8(ctx.r1.u32 + 104, ctx.r11.u8);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// sth r9,124(r1)
	PPC_STORE_U16(ctx.r1.u32 + 124, ctx.r9.u16);
	// bge cr6,0x82e1ede4
	if (!ctx.cr6.lt) goto loc_82E1EDE4;
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 65535;
	// b 0x82e1edec
	goto loc_82E1EDEC;
loc_82E1EDE4:
	// lwz r11,60(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 60);
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
loc_82E1EDEC:
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// sth r11,126(r1)
	PPC_STORE_U16(ctx.r1.u32 + 126, ctx.r11.u16);
	// bge cr6,0x82e1ee04
	if (!ctx.cr6.lt) goto loc_82E1EE04;
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 65535;
	// b 0x82e1ee0c
	goto loc_82E1EE0C;
loc_82E1EE04:
	// lwz r11,76(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 76);
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
loc_82E1EE0C:
	// vspltw v13,v10,3
	_mm_store_si128((__m128i*)ctx.v13.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v10.u32), 0x0));
	// lis r10,-32237
	ctx.r10.s64 = -2112684032;
	// addi r24,r1,176
	ctx.r24.s64 = ctx.r1.s64 + 176;
	// sth r11,128(r1)
	PPC_STORE_U16(ctx.r1.u32 + 128, ctx.r11.u16);
	// addi r23,r10,21872
	ctx.r23.s64 = ctx.r10.s64 + 21872;
	// addi r22,r1,480
	ctx.r22.s64 = ctx.r1.s64 + 480;
	// vmaddfp v13,v10,v13,v0
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v13.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v10.f32), _mm_load_ps(ctx.v13.f32)), _mm_load_ps(ctx.v0.f32)));
	// addi r10,r1,176
	ctx.r10.s64 = ctx.r1.s64 + 176;
	// addi r9,r1,592
	ctx.r9.s64 = ctx.r1.s64 + 592;
	// addi r7,r1,240
	ctx.r7.s64 = ctx.r1.s64 + 240;
	// lvx128 v0,r0,r23
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r23.u32) & ~0xF), VectorMaskL));
	// addi r6,r1,480
	ctx.r6.s64 = ctx.r1.s64 + 480;
	// vxor v0,v10,v0
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_xor_si128(_mm_load_si128((__m128i*)ctx.v10.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// addi r5,r1,104
	ctx.r5.s64 = ctx.r1.s64 + 104;
	// addi r4,r1,124
	ctx.r4.s64 = ctx.r1.s64 + 124;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stvx128 v0,r0,r24
	_mm_store_si128((__m128i*)(base + ((ctx.r24.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v13,r0,r22
	_mm_store_si128((__m128i*)(base + ((ctx.r22.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,64(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// lwz r8,0(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E1EE68;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r10,r1,176
	ctx.r10.s64 = ctx.r1.s64 + 176;
	// lvx128 v13,r0,r10
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// addi r8,r1,160
	ctx.r8.s64 = ctx.r1.s64 + 160;
	// lvx128 v0,r0,r23
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r23.u32) & ~0xF), VectorMaskL));
	// addi r9,r1,176
	ctx.r9.s64 = ctx.r1.s64 + 176;
	// vxor v10,v13,v0
	_mm_store_si128((__m128i*)ctx.v10.u8, _mm_xor_si128(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// stvx128 v10,r0,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v10.u8), _mm_load_si128((__m128i*)VectorMaskL)));
loc_82E1EE84:
	// stvx128 v10,r0,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v10.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82e1eea4
	if (!ctx.cr6.eq) goto loc_82E1EEA4;
	// lwz r11,0(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 0);
	// lwz r10,96(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// lbz r9,62(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 62);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82e1f430
	if (!ctx.cr6.eq) goto loc_82E1F430;
loc_82E1EEA4:
	// addi r11,r1,144
	ctx.r11.s64 = ctx.r1.s64 + 144;
	// lvx128 v0,r0,r11
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
loc_82E1EEAC:
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// lis r10,-32237
	ctx.r10.s64 = -2112684032;
	// lwz r9,0(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// addi r24,r1,96
	ctx.r24.s64 = ctx.r1.s64 + 96;
	// addi r7,r10,21920
	ctx.r7.s64 = ctx.r10.s64 + 21920;
	// lvx128 v13,r0,r17
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r17.u32) & ~0xF), VectorMaskL));
	// addi r23,r1,96
	ctx.r23.s64 = ctx.r1.s64 + 96;
	// vpermwi128 v6,v13,135
	_mm_store_si128((__m128i*)ctx.v6.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v13.u32), 0x78));
	// lis r8,-32246
	ctx.r8.s64 = -2113273856;
	// vpermwi128 v5,v13,99
	_mm_store_si128((__m128i*)ctx.v5.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v13.u32), 0x9C));
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r31,r27,112
	ctx.r31.s64 = ctx.r27.s64 + 112;
	// lwz r10,8(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// addi r8,r8,544
	ctx.r8.s64 = ctx.r8.s64 + 544;
	// lvx128 v11,r0,r7
	simd::store_shuffled(ctx.v11, simd::load_and_shuffle(base + ((ctx.r7.u32) & ~0xF), VectorMaskL));
	// li r4,80
	ctx.r4.s64 = 80;
	// addi r5,r10,64
	ctx.r5.s64 = ctx.r10.s64 + 64;
	// addi r7,r11,64
	ctx.r7.s64 = ctx.r11.s64 + 64;
	// lfs f0,76(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	ctx.f0.f64 = double(temp.f32);
	// addi r6,r17,16
	ctx.r6.s64 = ctx.r17.s64 + 16;
	// lfs f11,76(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 76);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f13,f29,f0
	ctx.f13.f64 = double(float(ctx.f29.f64 - ctx.f0.f64));
	// fsubs f10,f29,f11
	ctx.f10.f64 = double(float(ctx.f29.f64 - ctx.f11.f64));
	// lfs f12,92(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	ctx.f12.f64 = double(temp.f32);
	// lfs f9,92(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 92);
	ctx.f9.f64 = double(temp.f32);
	// addi r22,r1,108
	ctx.r22.s64 = ctx.r1.s64 + 108;
	// lvx128 v13,r0,r8
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r8.u32) & ~0xF), VectorMaskL));
	// addi r8,r9,8
	ctx.r8.s64 = ctx.r9.s64 + 8;
	// lvx128 v3,r0,r31
	simd::store_shuffled(ctx.v3, simd::load_and_shuffle(base + ((ctx.r31.u32) & ~0xF), VectorMaskL));
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// vxor v4,v3,v13
	_mm_store_si128((__m128i*)ctx.v4.u8, _mm_xor_si128(_mm_load_si128((__m128i*)ctx.v3.u8), _mm_load_si128((__m128i*)ctx.v13.u8)));
	// lvx128 v2,r0,r5
	simd::store_shuffled(ctx.v2, simd::load_and_shuffle(base + ((ctx.r5.u32) & ~0xF), VectorMaskL));
	// lvx128 v1,r0,r7
	simd::store_shuffled(ctx.v1, simd::load_and_shuffle(base + ((ctx.r7.u32) & ~0xF), VectorMaskL));
	// lvx128 v9,r10,r4
	simd::store_shuffled(ctx.v9, simd::load_and_shuffle(base + ((ctx.r10.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v7,r11,r4
	simd::store_shuffled(ctx.v7, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v31,r0,r6
	simd::store_shuffled(ctx.v31, simd::load_and_shuffle(base + ((ctx.r6.u32) & ~0xF), VectorMaskL));
	// fmuls f8,f13,f12
	ctx.f8.f64 = double(float(ctx.f13.f64 * ctx.f12.f64));
	// stfs f8,96(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lvlx v30,0,r24
	temp.u32 = ctx.r24.u32;
	_mm_store_si128((__m128i*)ctx.v30.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// fmuls f7,f10,f9
	ctx.f7.f64 = double(float(ctx.f10.f64 * ctx.f9.f64));
	// stfs f7,96(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// vspltw v26,v30,0
	_mm_store_si128((__m128i*)ctx.v26.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v30.u32), 0xFF));
	// lvlx v28,0,r23
	temp.u32 = ctx.r23.u32;
	_mm_store_si128((__m128i*)ctx.v28.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw v27,v28,0
	_mm_store_si128((__m128i*)ctx.v27.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v28.u32), 0xFF));
	// vspltw v12,v27,0
	_mm_store_si128((__m128i*)ctx.v12.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v27.u32), 0xFF));
	// vspltw v13,v26,0
	_mm_store_si128((__m128i*)ctx.v13.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v26.u32), 0xFF));
	// vpermwi128 v29,v31,135
	_mm_store_si128((__m128i*)ctx.v29.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v31.u32), 0x78));
	// vpermwi128 v25,v31,99
	_mm_store_si128((__m128i*)ctx.v25.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v31.u32), 0x9C));
	// vsubfp v24,v11,v12
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v24.f32, _mm_sub_ps(_mm_load_ps(ctx.v11.f32), _mm_load_ps(ctx.v12.f32)));
	// vsubfp v23,v11,v13
	_mm_store_ps(ctx.v23.f32, _mm_sub_ps(_mm_load_ps(ctx.v11.f32), _mm_load_ps(ctx.v13.f32)));
	// vmulfp128 v11,v24,v2
	_mm_store_ps(ctx.v11.f32, _mm_mul_ps(_mm_load_ps(ctx.v24.f32), _mm_load_ps(ctx.v2.f32)));
	// vmulfp128 v8,v23,v1
	_mm_store_ps(ctx.v8.f32, _mm_mul_ps(_mm_load_ps(ctx.v23.f32), _mm_load_ps(ctx.v1.f32)));
	// vmaddfp v12,v12,v9,v11
	_mm_store_ps(ctx.v12.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v9.f32)), _mm_load_ps(ctx.v11.f32)));
	// vmaddfp v13,v13,v7,v8
	_mm_store_ps(ctx.v13.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v7.f32)), _mm_load_ps(ctx.v8.f32)));
	// vsubfp v22,v0,v12
	_mm_store_ps(ctx.v22.f32, _mm_sub_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v12.f32)));
	// vsubfp v21,v0,v13
	_mm_store_ps(ctx.v21.f32, _mm_sub_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v13.f32)));
	// vpermwi128 v20,v22,99
	_mm_store_si128((__m128i*)ctx.v20.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v22.u32), 0x9C));
	// vpermwi128 v19,v22,135
	_mm_store_si128((__m128i*)ctx.v19.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v22.u32), 0x78));
	// vpermwi128 v16,v21,99
	_mm_store_si128((__m128i*)ctx.v16.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v21.u32), 0x9C));
	// vpermwi128 v15,v21,135
	_mm_store_si128((__m128i*)ctx.v15.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v21.u32), 0x78));
	// vmulfp128 v18,v6,v20
	_mm_store_ps(ctx.v18.f32, _mm_mul_ps(_mm_load_ps(ctx.v6.f32), _mm_load_ps(ctx.v20.f32)));
	// vmulfp128 v17,v5,v19
	_mm_store_ps(ctx.v17.f32, _mm_mul_ps(_mm_load_ps(ctx.v5.f32), _mm_load_ps(ctx.v19.f32)));
	// vmulfp128 v14,v29,v16
	_mm_store_ps(ctx.v14.f32, _mm_mul_ps(_mm_load_ps(ctx.v29.f32), _mm_load_ps(ctx.v16.f32)));
	// vmulfp128 v63,v25,v15
	_mm_store_ps(ctx.v63.f32, _mm_mul_ps(_mm_load_ps(ctx.v25.f32), _mm_load_ps(ctx.v15.f32)));
	// vsubfp128 v62,v17,v18
	_mm_store_ps(ctx.v62.f32, _mm_sub_ps(_mm_load_ps(ctx.v17.f32), _mm_load_ps(ctx.v18.f32)));
	// vsubfp128 v61,v63,v14
	_mm_store_ps(ctx.v61.f32, _mm_sub_ps(_mm_load_ps(ctx.v63.f32), _mm_load_ps(ctx.v14.f32)));
	// vaddfp128 v60,v4,v62
	_mm_store_ps(ctx.v60.f32, _mm_add_ps(_mm_load_ps(ctx.v4.f32), _mm_load_ps(ctx.v62.f32)));
	// vsubfp128 v59,v60,v61
	_mm_store_ps(ctx.v59.f32, _mm_sub_ps(_mm_load_ps(ctx.v60.f32), _mm_load_ps(ctx.v61.f32)));
	// vmsum3fp128 v58,v59,v10
	_mm_store_ps(ctx.v58.f32, _mm_dp_ps(_mm_load_ps(ctx.v59.f32), _mm_load_ps(ctx.v10.f32), 0xEF));
	// stvewx128 v58,r0,r22
	ea = (ctx.r22.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v58.u32[3 - ((ea & 0xF) >> 2)]);
	// lfs f0,108(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,100(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// bne cr6,0x82e1f298
	if (!ctx.cr6.eq) goto loc_82E1F298;
	// lis r7,-32237
	ctx.r7.s64 = -2112684032;
	// lfs f13,29536(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 29536);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x82e1f298
	if (!ctx.cr6.gt) goto loc_82E1F298;
	// stfs f31,432(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 432, temp.u32);
	// li r6,144
	ctx.r6.s64 = 144;
	// lfs f0,92(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 92);
	ctx.f0.f64 = double(temp.f32);
	// lwz r7,0(r19)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r19.u32 + 0);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// vpermwi128 v12,v10,99
	_mm_store_si128((__m128i*)ctx.v12.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v10.u32), 0x9C));
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// vpermwi128 v11,v10,135
	_mm_store_si128((__m128i*)ctx.v11.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v10.u32), 0x78));
	// lis r24,-32237
	ctx.r24.s64 = -2112684032;
	// vspltisw v30,0
	_mm_store_si128((__m128i*)ctx.v30.u32, _mm_set1_epi32(int(0x0)));
	// lvx128 v8,r10,r6
	simd::store_shuffled(ctx.v8, simd::load_and_shuffle(base + ((ctx.r10.u32 + ctx.r6.u32) & ~0xF), VectorMaskL));
	// addi r3,r1,400
	ctx.r3.s64 = ctx.r1.s64 + 400;
	// lfs f12,88(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 88);
	ctx.f12.f64 = double(temp.f32);
	// addi r24,r24,22016
	ctx.r24.s64 = ctx.r24.s64 + 22016;
	// lvx128 v9,r11,r6
	simd::store_shuffled(ctx.v9, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r6.u32) & ~0xF), VectorMaskL));
	// addi r6,r1,416
	ctx.r6.s64 = ctx.r1.s64 + 416;
	// vmsum3fp128 v29,v3,v10
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v29.f32, _mm_dp_ps(_mm_load_ps(ctx.v3.f32), _mm_load_ps(ctx.v10.f32), 0xEF));
	// addi r23,r1,108
	ctx.r23.s64 = ctx.r1.s64 + 108;
	// addi r7,r7,80
	ctx.r7.s64 = ctx.r7.s64 + 80;
	// lfs f13,92(r11)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f10,f0,f12
	ctx.f10.f64 = double(float(ctx.f0.f64 * ctx.f12.f64));
	// fmuls f11,f13,f12
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f12.f64));
	// stfs f11,112(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// lvlx v7,0,r4
	temp.u32 = ctx.r4.u32;
	_mm_store_si128((__m128i*)ctx.v7.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stfs f10,96(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lvlx v5,0,r5
	temp.u32 = ctx.r5.u32;
	_mm_store_si128((__m128i*)ctx.v5.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw v1,v5,0
	_mm_store_si128((__m128i*)ctx.v1.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v5.u32), 0xFF));
	// vmulfp128 v13,v8,v1
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v13.f32, _mm_mul_ps(_mm_load_ps(ctx.v8.f32), _mm_load_ps(ctx.v1.f32)));
	// vspltw v6,v7,0
	_mm_store_si128((__m128i*)ctx.v6.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v7.u32), 0xFF));
	// lvx128 v0,r0,r24
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r24.u32) & ~0xF), VectorMaskL));
	// addi r24,r1,384
	ctx.r24.s64 = ctx.r1.s64 + 384;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// vmulfp128 v2,v9,v6
	_mm_store_ps(ctx.v2.f32, _mm_mul_ps(_mm_load_ps(ctx.v9.f32), _mm_load_ps(ctx.v6.f32)));
	// vpermwi128 v25,v13,135
	_mm_store_si128((__m128i*)ctx.v25.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v13.u32), 0x78));
	// stvx128 v13,r0,r3
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// vpermwi128 v23,v13,99
	_mm_store_si128((__m128i*)ctx.v23.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v13.u32), 0x9C));
	// vmulfp128 v22,v25,v12
	_mm_store_ps(ctx.v22.f32, _mm_mul_ps(_mm_load_ps(ctx.v25.f32), _mm_load_ps(ctx.v12.f32)));
	// vpermwi128 v28,v2,135
	_mm_store_si128((__m128i*)ctx.v28.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v2.u32), 0x78));
	// vmulfp128 v21,v23,v11
	_mm_store_ps(ctx.v21.f32, _mm_mul_ps(_mm_load_ps(ctx.v23.f32), _mm_load_ps(ctx.v11.f32)));
	// vpermwi128 v27,v2,99
	_mm_store_si128((__m128i*)ctx.v27.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v2.u32), 0x9C));
	// stvx128 v2,r0,r6
	_mm_store_si128((__m128i*)(base + ((ctx.r6.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v2.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmulfp128 v26,v28,v12
	_mm_store_ps(ctx.v26.f32, _mm_mul_ps(_mm_load_ps(ctx.v28.f32), _mm_load_ps(ctx.v12.f32)));
	// vmulfp128 v24,v27,v11
	_mm_store_ps(ctx.v24.f32, _mm_mul_ps(_mm_load_ps(ctx.v27.f32), _mm_load_ps(ctx.v11.f32)));
	// vsubfp v19,v21,v22
	_mm_store_ps(ctx.v19.f32, _mm_sub_ps(_mm_load_ps(ctx.v21.f32), _mm_load_ps(ctx.v22.f32)));
	// vsubfp v20,v24,v26
	_mm_store_ps(ctx.v20.f32, _mm_sub_ps(_mm_load_ps(ctx.v24.f32), _mm_load_ps(ctx.v26.f32)));
	// vmsum3fp128 v17,v19,v19
	_mm_store_ps(ctx.v17.f32, _mm_dp_ps(_mm_load_ps(ctx.v19.f32), _mm_load_ps(ctx.v19.f32), 0xEF));
	// vmsum3fp128 v18,v20,v20
	_mm_store_ps(ctx.v18.f32, _mm_dp_ps(_mm_load_ps(ctx.v20.f32), _mm_load_ps(ctx.v20.f32), 0xEF));
	// vrsqrtefp v13,v17
	_mm_store_ps(ctx.v13.f32, _mm_div_ps(_mm_set1_ps(1), _mm_sqrt_ps(_mm_load_ps(ctx.v17.f32))));
	// vmulfp128 v7,v17,v0
	_mm_store_ps(ctx.v7.f32, _mm_mul_ps(_mm_load_ps(ctx.v17.f32), _mm_load_ps(ctx.v0.f32)));
	// vcmpeqfp v1,v30,v17
	_mm_store_ps(ctx.v1.f32, _mm_cmpeq_ps(_mm_load_ps(ctx.v30.f32), _mm_load_ps(ctx.v17.f32)));
	// vrsqrtefp v12,v18
	_mm_store_ps(ctx.v12.f32, _mm_div_ps(_mm_set1_ps(1), _mm_sqrt_ps(_mm_load_ps(ctx.v18.f32))));
	// vmulfp128 v6,v18,v0
	_mm_store_ps(ctx.v6.f32, _mm_mul_ps(_mm_load_ps(ctx.v18.f32), _mm_load_ps(ctx.v0.f32)));
	// vcmpeqfp v31,v30,v18
	_mm_store_ps(ctx.v31.f32, _mm_cmpeq_ps(_mm_load_ps(ctx.v30.f32), _mm_load_ps(ctx.v18.f32)));
	// vmulfp128 v9,v13,v13
	_mm_store_ps(ctx.v9.f32, _mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v13.f32)));
	// vmulfp128 v8,v12,v12
	_mm_store_ps(ctx.v8.f32, _mm_mul_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v12.f32)));
	// vnmsubfp v2,v7,v9,v0
	_mm_store_ps(ctx.v2.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(ctx.v7.f32), _mm_load_ps(ctx.v9.f32)), _mm_load_ps(ctx.v0.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// vmaddfp v11,v13,v2,v13
	_mm_store_ps(ctx.v11.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v2.f32)), _mm_load_ps(ctx.v13.f32)));
	// vnmsubfp v13,v6,v8,v0
	_mm_store_ps(ctx.v13.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(ctx.v6.f32), _mm_load_ps(ctx.v8.f32)), _mm_load_ps(ctx.v0.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// vmaddfp v13,v12,v13,v12
	_mm_store_ps(ctx.v13.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v13.f32)), _mm_load_ps(ctx.v12.f32)));
	// vmulfp128 v12,v11,v11
	_mm_store_ps(ctx.v12.f32, _mm_mul_ps(_mm_load_ps(ctx.v11.f32), _mm_load_ps(ctx.v11.f32)));
	// vmulfp128 v9,v13,v13
	_mm_store_ps(ctx.v9.f32, _mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v13.f32)));
	// vnmsubfp v8,v7,v12,v0
	_mm_store_ps(ctx.v8.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(ctx.v7.f32), _mm_load_ps(ctx.v12.f32)), _mm_load_ps(ctx.v0.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// vnmsubfp v0,v6,v9,v0
	_mm_store_ps(ctx.v0.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(ctx.v6.f32), _mm_load_ps(ctx.v9.f32)), _mm_load_ps(ctx.v0.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// vmaddfp v12,v11,v8,v11
	_mm_store_ps(ctx.v12.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v11.f32), _mm_load_ps(ctx.v8.f32)), _mm_load_ps(ctx.v11.f32)));
	// vmaddfp v0,v13,v0,v13
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v0.f32)), _mm_load_ps(ctx.v13.f32)));
	// vsel v11,v12,v30,v1
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v1.u8), _mm_load_si128((__m128i*)ctx.v12.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v1.u8), _mm_load_si128((__m128i*)ctx.v30.u8))));
	// vmulfp128 v16,v17,v11
	_mm_store_ps(ctx.v16.f32, _mm_mul_ps(_mm_load_ps(ctx.v17.f32), _mm_load_ps(ctx.v11.f32)));
	// vsel v13,v0,v30,v31
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v31.u8), _mm_load_si128((__m128i*)ctx.v0.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v31.u8), _mm_load_si128((__m128i*)ctx.v30.u8))));
	// vmulfp128 v15,v18,v13
	_mm_store_ps(ctx.v15.f32, _mm_mul_ps(_mm_load_ps(ctx.v18.f32), _mm_load_ps(ctx.v13.f32)));
	// stvewx v16,r0,r5
	ea = (ctx.r5.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v16.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx v15,r0,r4
	ea = (ctx.r4.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v15.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx v29,r0,r23
	ea = (ctx.r23.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v29.u32[3 - ((ea & 0xF) >> 2)]);
	// lwz r6,0(r26)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// lfs f9,160(r11)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 160);
	ctx.f9.f64 = double(temp.f32);
	// lfs f4,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f4.f64 = double(temp.f32);
	// lfs f7,160(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 160);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f5,f7,f6
	ctx.f5.f64 = double(float(ctx.f7.f64 * ctx.f6.f64));
	// lfs f8,108(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	ctx.f8.f64 = double(temp.f32);
	// fmadds f3,f9,f4,f5
	ctx.f3.f64 = double(float(ctx.f9.f64 * ctx.f4.f64 + ctx.f5.f64));
	// fadds f2,f3,f8
	ctx.f2.f64 = double(float(ctx.f3.f64 + ctx.f8.f64));
	// stfs f2,372(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 372, temp.u32);
	// lwz r5,0(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// lwz r22,0(r8)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// lwz r21,8(r6)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// lwz r23,0(r9)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// stw r22,304(r1)
	PPC_STORE_U32(ctx.r1.u32 + 304, ctx.r22.u32);
	// stw r21,308(r1)
	PPC_STORE_U32(ctx.r1.u32 + 308, ctx.r21.u32);
	// lfs f1,16(r23)
	temp.u32 = PPC_LOAD_U32(ctx.r23.u32 + 16);
	ctx.f1.f64 = double(temp.f32);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// lfs f0,16(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// fadds f13,f0,f1
	ctx.f13.f64 = double(float(ctx.f0.f64 + ctx.f1.f64));
	// stfs f13,324(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 324, temp.u32);
	// stvx128 v3,r0,r24
	_mm_store_si128((__m128i*)(base + ((ctx.r24.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v3.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stw r7,368(r1)
	PPC_STORE_U32(ctx.r1.u32 + 368, ctx.r7.u32);
	// lwz r4,0(r23)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// lwz r11,44(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 44);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E1F170;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,320(r1)
	PPC_STORE_U32(ctx.r1.u32 + 320, ctx.r3.u32);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// stw r3,316(r1)
	PPC_STORE_U32(ctx.r1.u32 + 316, ctx.r3.u32);
	// bl 0x82d2d090
	ctx.lr = 0x82E1F180;
	sub_82D2D090(ctx, base);
	// rlwinm r11,r24,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r4,0(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r10,r11,127
	ctx.r10.s64 = ctx.r11.s64 + 127;
	// rlwinm r11,r10,0,0,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFF80;
	// add r9,r11,r4
	ctx.r9.u64 = ctx.r11.u64 + ctx.r4.u64;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// stw r4,312(r1)
	PPC_STORE_U32(ctx.r1.u32 + 312, ctx.r4.u32);
	// lwz r8,0(r23)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// lwz r7,48(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 48);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x82E1F1B0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lfs f0,428(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 428);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,160(r21)
	temp.u32 = PPC_LOAD_U32(ctx.r21.u32 + 160);
	ctx.f12.f64 = double(temp.f32);
	// addi r6,r1,608
	ctx.r6.s64 = ctx.r1.s64 + 608;
	// fmuls f11,f12,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// addi r5,r1,624
	ctx.r5.s64 = ctx.r1.s64 + 624;
	// addi r4,r1,592
	ctx.r4.s64 = ctx.r1.s64 + 592;
	// lfs f13,412(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 412);
	ctx.f13.f64 = double(temp.f32);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// lfs f10,160(r22)
	temp.u32 = PPC_LOAD_U32(ctx.r22.u32 + 160);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f9,f10,f13
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// lvx128 v14,r0,r6
	simd::store_shuffled(ctx.v14, simd::load_and_shuffle(base + ((ctx.r6.u32) & ~0xF), VectorMaskL));
	// li r11,224
	ctx.r11.s64 = 224;
	// lvx128 v63,r0,r5
	simd::store_shuffled(ctx.v63, simd::load_and_shuffle(base + ((ctx.r5.u32) & ~0xF), VectorMaskL));
	// addi r10,r1,352
	ctx.r10.s64 = ctx.r1.s64 + 352;
	// lvx128 v61,r0,r4
	simd::store_shuffled(ctx.v61, simd::load_and_shuffle(base + ((ctx.r4.u32) & ~0xF), VectorMaskL));
	// addi r8,r1,336
	ctx.r8.s64 = ctx.r1.s64 + 336;
	// lvx128 v0,r0,r3
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r3.u32) & ~0xF), VectorMaskL));
	// lwz r7,312(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 312);
	// vmsum3fp128 v62,v14,v0
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v62.f32, _mm_dp_ps(_mm_load_ps(ctx.v14.f32), _mm_load_ps(ctx.v0.f32), 0xEF));
	// vmsum3fp128 v60,v63,v0
	_mm_store_ps(ctx.v60.f32, _mm_dp_ps(_mm_load_ps(ctx.v63.f32), _mm_load_ps(ctx.v0.f32), 0xEF));
	// lvx128 v58,r30,r11
	simd::store_shuffled(ctx.v58, simd::load_and_shuffle(base + ((ctx.r30.u32 + ctx.r11.u32) & ~0xF), VectorMaskL));
	// fmuls f8,f11,f0
	ctx.fpscr.disableFlushModeUnconditional();
	ctx.f8.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// vmsum3fp128 v59,v61,v0
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v59.f32, _mm_dp_ps(_mm_load_ps(ctx.v61.f32), _mm_load_ps(ctx.v0.f32), 0xEF));
	// lvx128 v0,r0,r18
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r18.u32) & ~0xF), VectorMaskL));
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// stvx128 v58,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v58.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// fmadds f0,f9,f13,f8
	ctx.fpscr.disableFlushModeUnconditional();
	ctx.f0.f64 = double(float(ctx.f9.f64 * ctx.f13.f64 + ctx.f8.f64));
	// lfs f13,-25140(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -25140);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,328(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 328, temp.u32);
	// vmrghw128 v57,v62,v0
	_mm_store_si128((__m128i*)ctx.v57.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), _mm_load_si128((__m128i*)ctx.v62.u32)));
	// vmrghw128 v56,v59,v60
	_mm_store_si128((__m128i*)ctx.v56.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v60.u32), _mm_load_si128((__m128i*)ctx.v59.u32)));
	// fadds f7,f0,f13
	ctx.f7.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// vmrghw128 v55,v56,v57
	_mm_store_si128((__m128i*)ctx.v55.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v57.u32), _mm_load_si128((__m128i*)ctx.v56.u32)));
	// stvx128 v55,r0,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v55.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// fdivs f6,f23,f7
	ctx.f6.f64 = double(float(ctx.f23.f64 / ctx.f7.f64));
	// stfs f6,332(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 332, temp.u32);
	// beq cr6,0x82e1f294
	if (ctx.cr6.eq) goto loc_82E1F294;
	// stfs f23,448(r1)
	temp.f32 = float(ctx.f23.f64);
	PPC_STORE_U32(ctx.r1.u32 + 448, temp.u32);
	// addi r5,r1,448
	ctx.r5.s64 = ctx.r1.s64 + 448;
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// bl 0x82e1e438
	ctx.lr = 0x82E1F25C;
	sub_82E1E438(ctx, base);
	// lwz r24,312(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 312);
	// bl 0x82d2d090
	ctx.lr = 0x82E1F264;
	sub_82D2D090(ctx, base);
	// stw r24,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r24.u32);
	// lfs f0,448(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 448);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f23
	ctx.cr6.compare(ctx.f0.f64, ctx.f23.f64);
	// bge cr6,0x82e1f294
	if (!ctx.cr6.lt) goto loc_82E1F294;
	// addi r5,r1,464
	ctx.r5.s64 = ctx.r1.s64 + 464;
	// addi r4,r1,240
	ctx.r4.s64 = ctx.r1.s64 + 240;
	// addi r3,r1,528
	ctx.r3.s64 = ctx.r1.s64 + 528;
	// bl 0x82d2e210
	ctx.lr = 0x82E1F284;
	sub_82D2E210(ctx, base);
	// addi r11,r1,528
	ctx.r11.s64 = ctx.r1.s64 + 528;
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// lvx128 v0,r0,r11
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// stvx128 v0,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
loc_82E1F294:
	// lfs f0,100(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f0.f64 = double(temp.f32);
loc_82E1F298:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fcmpu cr6,f20,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f20.f64, ctx.f0.f64);
	// lfs f6,5184(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5184);
	ctx.f6.f64 = double(temp.f32);
	// bge cr6,0x82e1f2f8
	if (!ctx.cr6.lt) goto loc_82E1F2F8;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,5152(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5152);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// fcmpu cr6,f20,f0
	ctx.cr6.compare(ctx.f20.f64, ctx.f0.f64);
	// ble cr6,0x82e1f2c4
	if (!ctx.cr6.gt) goto loc_82E1F2C4;
	// fmr f0,f20
	ctx.f0.f64 = ctx.f20.f64;
	// b 0x82e1f2f4
	goto loc_82E1F2F4;
loc_82E1F2C4:
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// mr r8,r17
	ctx.r8.u64 = ctx.r17.u64;
	// lwz r10,0(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// addi r6,r1,160
	ctx.r6.s64 = ctx.r1.s64 + 160;
	// fmr f1,f29
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f29.f64;
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// lwz r4,8(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r3,8(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// bl 0x82e1dff8
	ctx.lr = 0x82E1F2EC;
	sub_82E1DFF8(ctx, base);
	// fneg f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = ctx.f1.u64 ^ 0x8000000000000000;
	// fsel f0,f0,f1,f6
	ctx.f0.f64 = ctx.f0.f64 >= 0.0 ? ctx.f1.f64 : ctx.f6.f64;
loc_82E1F2F4:
	// stfs f0,100(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
loc_82E1F2F8:
	// li r10,3
	ctx.r10.s64 = 3;
	// lfs f13,12(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// addi r11,r1,540
	ctx.r11.s64 = ctx.r1.s64 + 540;
	// fmuls f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f12,100(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stfs f6,544(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 544, temp.u32);
	// stfs f6,548(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 548, temp.u32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82E1F318:
	// stw r15,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r15.u32);
	// stw r15,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r15.u32);
	// stw r15,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r15.u32);
	// stwu r15,16(r11)
	ea = 16 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r15.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x82e1f318
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82E1F318;
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfs f0,22636(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 22636);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,560(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 560, temp.u32);
	// bl 0x82e185f0
	ctx.lr = 0x82E1F344;
	sub_82E185F0(ctx, base);
	// addi r8,r1,100
	ctx.r8.s64 = ctx.r1.s64 + 100;
	// addi r3,r1,544
	ctx.r3.s64 = ctx.r1.s64 + 544;
	// lwz r6,0(r19)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r19.u32 + 0);
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// addi r10,r1,224
	ctx.r10.s64 = ctx.r1.s64 + 224;
	// stw r3,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r3.u32);
	// addi r9,r1,144
	ctx.r9.s64 = ctx.r1.s64 + 144;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// lwz r5,0(r26)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// lwz r4,0(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// fmr f1,f29
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f29.f64;
	// lwz r3,16(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r8,28(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82E1F384;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82e1f430
	if (!ctx.cr6.eq) goto loc_82E1F430;
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// lfs f13,0(r25)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,28856(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 28856);
	ctx.f0.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bne cr6,0x82e1f3a8
	if (!ctx.cr6.eq) goto loc_82E1F3A8;
	// mr r11,r15
	ctx.r11.u64 = ctx.r15.u64;
loc_82E1F3A8:
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82e1f3d0
	if (ctx.cr6.eq) goto loc_82E1F3D0;
	// lwz r3,16(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// addi r5,r28,12368
	ctx.r5.s64 = ctx.r28.s64 + 12368;
	// lwz r4,4(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82E1F3D0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82E1F3D0:
	// addi r9,r1,144
	ctx.r9.s64 = ctx.r1.s64 + 144;
	// lfs f0,100(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f0.f64 = double(temp.f32);
	// addi r7,r1,160
	ctx.r7.s64 = ctx.r1.s64 + 160;
	// stfs f0,12340(r28)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r28.u32 + 12340, temp.u32);
	// addi r11,r28,12304
	ctx.r11.s64 = ctx.r28.s64 + 12304;
	// li r6,16
	ctx.r6.s64 = 16;
	// li r8,6
	ctx.r8.s64 = 6;
	// addi r10,r1,536
	ctx.r10.s64 = ctx.r1.s64 + 536;
	// lvx128 v0,r0,r9
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// lvx128 v13,r0,r7
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r7.u32) & ~0xF), VectorMaskL));
	// addi r9,r28,12360
	ctx.r9.s64 = ctx.r28.s64 + 12360;
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v13,r11,r6
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r6.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stfs f29,0(r25)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r25.u32 + 0, temp.u32);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_82E1F40C:
	// ldu r11,8(r10)
	ea = 8 + ctx.r10.u32;
	ctx.r11.u64 = PPC_LOAD_U64(ea);
	ctx.r10.u32 = ea;
	// stdu r11,8(r9)
	ea = 8 + ctx.r9.u32;
	PPC_STORE_U64(ea, ctx.r11.u64);
	ctx.r9.u32 = ea;
	// bdnz 0x82e1f40c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82E1F40C;
	// addi r11,r1,224
	ctx.r11.s64 = ctx.r1.s64 + 224;
	// addi r10,r28,12352
	ctx.r10.s64 = ctx.r28.s64 + 12352;
	// ld r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// ld r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// std r9,12352(r28)
	PPC_STORE_U64(ctx.r28.u32 + 12352, ctx.r9.u64);
	// std r8,12360(r28)
	PPC_STORE_U64(ctx.r28.u32 + 12360, ctx.r8.u64);
loc_82E1F430:
	// addi r1,r1,960
	ctx.r1.s64 = ctx.r1.s64 + 960;
	// addi r12,r1,-144
	ctx.r12.s64 = ctx.r1.s64 + -144;
	// bl 0x82fa8d54
	ctx.lr = 0x82E1F43C;
	__restfpr_20(ctx, base);
	// b 0x82fa7694
	__restgprlr_15(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E1F440"))) PPC_WEAK_FUNC(sub_82E1F440);
PPC_FUNC_IMPL(__imp__sub_82E1F440) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7640
	ctx.lr = 0x82E1F448;
	__savegprlr_14(ctx, base);
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x82fa8cf0
	ctx.lr = 0x82E1F450;
	__savefpr_14(ctx, base);
	// li r12,-320
	ctx.r12.s64 = -320;
	// stvx128 v127,r1,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r1.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v127.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stwu r1,-1840(r1)
	ea = -1840 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r31,r8
	ctx.r31.u64 = ctx.r8.u64;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r22,r3,12
	ctx.r22.s64 = ctx.r3.s64 + 12;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// stw r9,1908(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1908, ctx.r9.u32);
	// li r18,0
	ctx.r18.s64 = 0;
	// fmr f19,f3
	ctx.fpscr.disableFlushMode();
	ctx.f19.f64 = ctx.f3.f64;
	// lwz r27,96(r11)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// mr r14,r9
	ctx.r14.u64 = ctx.r9.u64;
	// lwz r25,8(r10)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// lwz r26,8(r8)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// lfs f0,92(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	ctx.f0.f64 = double(temp.f32);
	// lwz r29,0(r8)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// mr r17,r7
	ctx.r17.u64 = ctx.r7.u64;
	// lwz r28,0(r10)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// lfs f13,36(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 36);
	ctx.f13.f64 = double(temp.f32);
	// li r16,144
	ctx.r16.s64 = 144;
	// lfs f12,48(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 48);
	ctx.f12.f64 = double(temp.f32);
	// addi r30,r1,352
	ctx.r30.s64 = ctx.r1.s64 + 352;
	// lfs f11,32(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 32);
	ctx.f11.f64 = double(temp.f32);
	// addi r11,r1,368
	ctx.r11.s64 = ctx.r1.s64 + 368;
	// lfs f14,56(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 56);
	ctx.f14.f64 = double(temp.f32);
	// stw r18,264(r1)
	PPC_STORE_U32(ctx.r1.u32 + 264, ctx.r18.u32);
	// lfs f10,88(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f9,f11,f1
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f1.f64));
	// lfs f8,92(r25)
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 92);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f7,f8,f10
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f10.f64));
	// lfs f5,92(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 92);
	ctx.f5.f64 = double(temp.f32);
	// fmuls f4,f5,f10
	ctx.f4.f64 = double(float(ctx.f5.f64 * ctx.f10.f64));
	// stfs f7,96(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lbz r6,10(r17)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r17.u32 + 10);
	// lvlx v0,0,r9
	temp.u32 = ctx.r9.u32;
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw v13,v0,0
	_mm_store_si128((__m128i*)ctx.v13.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0xFF));
	// stfs f4,96(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lbz r5,8(r17)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r17.u32 + 8);
	// lvlx v12,0,r7
	temp.u32 = ctx.r7.u32;
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// rlwinm r23,r6,28,4,31
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 28) & 0xFFFFFFF;
	// lvx128 v10,r25,r16
	simd::store_shuffled(ctx.v10, simd::load_and_shuffle(base + ((ctx.r25.u32 + ctx.r16.u32) & ~0xF), VectorMaskL));
	// vmulfp128 v9,v10,v13
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v9.f32, _mm_mul_ps(_mm_load_ps(ctx.v10.f32), _mm_load_ps(ctx.v13.f32)));
	// vspltw v11,v12,0
	_mm_store_si128((__m128i*)ctx.v11.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v12.u32), 0xFF));
	// lvx128 v8,r26,r16
	simd::store_shuffled(ctx.v8, simd::load_and_shuffle(base + ((ctx.r26.u32 + ctx.r16.u32) & ~0xF), VectorMaskL));
	// clrlwi r8,r6,28
	ctx.r8.u64 = ctx.r6.u32 & 0xF;
	// stw r23,856(r1)
	PPC_STORE_U32(ctx.r1.u32 + 856, ctx.r23.u32);
	// stw r8,860(r1)
	PPC_STORE_U32(ctx.r1.u32 + 860, ctx.r8.u32);
	// fsubs f6,f9,f13
	ctx.fpscr.disableFlushModeUnconditional();
	ctx.f6.f64 = double(float(ctx.f9.f64 - ctx.f13.f64));
	// stw r5,848(r1)
	PPC_STORE_U32(ctx.r1.u32 + 848, ctx.r5.u32);
	// stvx128 v9,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v9.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmulfp128 v7,v8,v11
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v7.f32, _mm_mul_ps(_mm_load_ps(ctx.v8.f32), _mm_load_ps(ctx.v11.f32)));
	// lbz r10,9(r17)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r17.u32 + 9);
	// stw r18,864(r1)
	PPC_STORE_U32(ctx.r1.u32 + 864, ctx.r18.u32);
	// fsel f3,f6,f9,f13
	ctx.fpscr.disableFlushModeUnconditional();
	ctx.f3.f64 = ctx.f6.f64 >= 0.0 ? ctx.f9.f64 : ctx.f13.f64;
	// stw r18,868(r1)
	PPC_STORE_U32(ctx.r1.u32 + 868, ctx.r18.u32);
	// addi r6,r1,880
	ctx.r6.s64 = ctx.r1.s64 + 880;
	// mr r4,r17
	ctx.r4.u64 = ctx.r17.u64;
	// fmuls f17,f12,f1
	ctx.f17.f64 = double(float(ctx.f12.f64 * ctx.f1.f64));
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stfs f2,196(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 196, temp.u32);
	// stw r10,852(r1)
	PPC_STORE_U32(ctx.r1.u32 + 852, ctx.r10.u32);
	// stfs f19,192(r1)
	temp.f32 = float(ctx.f19.f64);
	PPC_STORE_U32(ctx.r1.u32 + 192, temp.u32);
	// stfs f17,208(r1)
	temp.f32 = float(ctx.f17.f64);
	PPC_STORE_U32(ctx.r1.u32 + 208, temp.u32);
	// fmr f27,f2
	ctx.f27.f64 = ctx.f2.f64;
	// stfs f14,204(r1)
	temp.f32 = float(ctx.f14.f64);
	PPC_STORE_U32(ctx.r1.u32 + 204, temp.u32);
	// addi r21,r24,4
	ctx.r21.s64 = ctx.r24.s64 + 4;
	// mr r23,r18
	ctx.r23.u64 = ctx.r18.u64;
	// fmuls f26,f3,f0
	ctx.f26.f64 = double(float(ctx.f3.f64 * ctx.f0.f64));
	// stfs f26,200(r1)
	temp.f32 = float(ctx.f26.f64);
	PPC_STORE_U32(ctx.r1.u32 + 200, temp.u32);
	// stvx128 v7,r0,r30
	_mm_store_si128((__m128i*)(base + ((ctx.r30.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v7.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lwz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r8,60(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 60);
	// mr r30,r18
	ctx.r30.u64 = ctx.r18.u64;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82E1F590;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r5,852(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 852);
	// lwz r7,0(r28)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// addi r6,r1,1072
	ctx.r6.s64 = ctx.r1.s64 + 1072;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r4,848(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 848);
	// lwz r10,60(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 60);
	// rlwinm r11,r4,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// add r4,r11,r17
	ctx.r4.u64 = ctx.r11.u64 + ctx.r17.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82E1F5B8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// fadds f25,f17,f19
	ctx.fpscr.disableFlushMode();
	ctx.f25.f64 = double(float(ctx.f17.f64 + ctx.f19.f64));
	// addi r9,r1,400
	ctx.r9.s64 = ctx.r1.s64 + 400;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lis r7,-32250
	ctx.r7.s64 = -2113536000;
	// lis r6,-32233
	ctx.r6.s64 = -2112421888;
	// lis r10,-32237
	ctx.r10.s64 = -2112684032;
	// lvx128 v0,r0,r9
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// addi r15,r10,22016
	ctx.r15.s64 = ctx.r10.s64 + 22016;
	// lfs f16,5184(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 5184);
	ctx.f16.f64 = double(temp.f32);
	// lfs f15,-25140(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -25140);
	ctx.f15.f64 = double(temp.f32);
	// vxor128 v127,v0,v0
	_mm_store_si128((__m128i*)ctx.v127.u8, _mm_setzero_si128());
	// lfs f23,24436(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 24436);
	ctx.f23.f64 = double(temp.f32);
	// fmr f31,f16
	ctx.f31.f64 = ctx.f16.f64;
	// addi r27,r31,12
	ctx.r27.s64 = ctx.r31.s64 + 12;
	// fmr f28,f16
	ctx.f28.f64 = ctx.f16.f64;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r15,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r15.u32);
	// addi r19,r9,21904
	ctx.r19.s64 = ctx.r9.s64 + 21904;
	// lfs f30,12(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f30.f64 = double(temp.f32);
	// fmr f0,f30
	ctx.f0.f64 = ctx.f30.f64;
	// fcmpu cr6,f30,f25
	ctx.cr6.compare(ctx.f30.f64, ctx.f25.f64);
	// ble cr6,0x82e1fa54
	if (!ctx.cr6.gt) goto loc_82E1FA54;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r20,112
	ctx.r20.s64 = 112;
	// lfs f24,21500(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 21500);
	ctx.f24.f64 = double(temp.f32);
	// lfs f22,11508(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 11508);
	ctx.f22.f64 = double(temp.f32);
loc_82E1F628:
	// fsubs f13,f23,f31
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f23.f64 - ctx.f31.f64));
	// fcmpu cr6,f13,f16
	ctx.cr6.compare(ctx.f13.f64, ctx.f16.f64);
	// ble cr6,0x82e20500
	if (!ctx.cr6.gt) goto loc_82E20500;
	// addi r11,r1,352
	ctx.r11.s64 = ctx.r1.s64 + 352;
	// lvx128 v31,r0,r31
	simd::store_shuffled(ctx.v31, simd::load_and_shuffle(base + ((ctx.r31.u32) & ~0xF), VectorMaskL));
	// addi r10,r1,368
	ctx.r10.s64 = ctx.r1.s64 + 368;
	// vpermwi128 v30,v31,99
	_mm_store_si128((__m128i*)ctx.v30.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v31.u32), 0x9C));
	// vpermwi128 v29,v31,135
	_mm_store_si128((__m128i*)ctx.v29.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v31.u32), 0x78));
	// lvx128 v0,r0,r15
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r15.u32) & ~0xF), VectorMaskL));
	// vspltisw v28,0
	_mm_store_si128((__m128i*)ctx.v28.u32, _mm_set1_epi32(int(0x0)));
	// addi r9,r1,120
	ctx.r9.s64 = ctx.r1.s64 + 120;
	// addi r8,r1,116
	ctx.r8.s64 = ctx.r1.s64 + 116;
	// lvx128 v13,r0,r11
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// addi r7,r1,100
	ctx.r7.s64 = ctx.r1.s64 + 100;
	// lvx128 v12,r0,r10
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// vpermwi128 v27,v13,135
	_mm_store_si128((__m128i*)ctx.v27.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v13.u32), 0x78));
	// vpermwi128 v26,v13,99
	_mm_store_si128((__m128i*)ctx.v26.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v13.u32), 0x9C));
	// vpermwi128 v25,v12,135
	_mm_store_si128((__m128i*)ctx.v25.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v12.u32), 0x78));
	// vpermwi128 v24,v12,99
	_mm_store_si128((__m128i*)ctx.v24.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v12.u32), 0x9C));
	// vmulfp128 v23,v27,v30
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v23.f32, _mm_mul_ps(_mm_load_ps(ctx.v27.f32), _mm_load_ps(ctx.v30.f32)));
	// vmulfp128 v22,v26,v29
	_mm_store_ps(ctx.v22.f32, _mm_mul_ps(_mm_load_ps(ctx.v26.f32), _mm_load_ps(ctx.v29.f32)));
	// vmulfp128 v21,v25,v30
	_mm_store_ps(ctx.v21.f32, _mm_mul_ps(_mm_load_ps(ctx.v25.f32), _mm_load_ps(ctx.v30.f32)));
	// vmulfp128 v20,v24,v29
	_mm_store_ps(ctx.v20.f32, _mm_mul_ps(_mm_load_ps(ctx.v24.f32), _mm_load_ps(ctx.v29.f32)));
	// vsubfp v19,v22,v23
	_mm_store_ps(ctx.v19.f32, _mm_sub_ps(_mm_load_ps(ctx.v22.f32), _mm_load_ps(ctx.v23.f32)));
	// vsubfp v18,v20,v21
	_mm_store_ps(ctx.v18.f32, _mm_sub_ps(_mm_load_ps(ctx.v20.f32), _mm_load_ps(ctx.v21.f32)));
	// vmsum3fp128 v17,v19,v19
	_mm_store_ps(ctx.v17.f32, _mm_dp_ps(_mm_load_ps(ctx.v19.f32), _mm_load_ps(ctx.v19.f32), 0xEF));
	// vmsum3fp128 v16,v18,v18
	_mm_store_ps(ctx.v16.f32, _mm_dp_ps(_mm_load_ps(ctx.v18.f32), _mm_load_ps(ctx.v18.f32), 0xEF));
	// vrsqrtefp v13,v17
	_mm_store_ps(ctx.v13.f32, _mm_div_ps(_mm_set1_ps(1), _mm_sqrt_ps(_mm_load_ps(ctx.v17.f32))));
	// vmulfp128 v7,v17,v0
	_mm_store_ps(ctx.v7.f32, _mm_mul_ps(_mm_load_ps(ctx.v17.f32), _mm_load_ps(ctx.v0.f32)));
	// vrsqrtefp v12,v16
	_mm_store_ps(ctx.v12.f32, _mm_div_ps(_mm_set1_ps(1), _mm_sqrt_ps(_mm_load_ps(ctx.v16.f32))));
	// vmulfp128 v6,v16,v0
	_mm_store_ps(ctx.v6.f32, _mm_mul_ps(_mm_load_ps(ctx.v16.f32), _mm_load_ps(ctx.v0.f32)));
	// vcmpeqfp v2,v28,v17
	_mm_store_ps(ctx.v2.f32, _mm_cmpeq_ps(_mm_load_ps(ctx.v28.f32), _mm_load_ps(ctx.v17.f32)));
	// vcmpeqfp v1,v28,v16
	_mm_store_ps(ctx.v1.f32, _mm_cmpeq_ps(_mm_load_ps(ctx.v28.f32), _mm_load_ps(ctx.v16.f32)));
	// vmulfp128 v10,v13,v13
	_mm_store_ps(ctx.v10.f32, _mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v13.f32)));
	// vmulfp128 v8,v12,v12
	_mm_store_ps(ctx.v8.f32, _mm_mul_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v12.f32)));
	// vnmsubfp v3,v7,v10,v0
	_mm_store_ps(ctx.v3.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(ctx.v7.f32), _mm_load_ps(ctx.v10.f32)), _mm_load_ps(ctx.v0.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// vnmsubfp v11,v6,v8,v0
	_mm_store_ps(ctx.v11.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(ctx.v6.f32), _mm_load_ps(ctx.v8.f32)), _mm_load_ps(ctx.v0.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// vmaddfp v13,v13,v3,v13
	_mm_store_ps(ctx.v13.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v3.f32)), _mm_load_ps(ctx.v13.f32)));
	// vmaddfp v12,v12,v11,v12
	_mm_store_ps(ctx.v12.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v11.f32)), _mm_load_ps(ctx.v12.f32)));
	// vmulfp128 v11,v13,v13
	_mm_store_ps(ctx.v11.f32, _mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v13.f32)));
	// vmulfp128 v10,v12,v12
	_mm_store_ps(ctx.v10.f32, _mm_mul_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v12.f32)));
	// vnmsubfp v9,v7,v11,v0
	_mm_store_ps(ctx.v9.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(ctx.v7.f32), _mm_load_ps(ctx.v11.f32)), _mm_load_ps(ctx.v0.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// vnmsubfp v11,v6,v10,v0
	_mm_store_ps(ctx.v11.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(ctx.v6.f32), _mm_load_ps(ctx.v10.f32)), _mm_load_ps(ctx.v0.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// vmaddfp v0,v13,v9,v13
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v9.f32)), _mm_load_ps(ctx.v13.f32)));
	// vmaddfp v13,v12,v11,v12
	_mm_store_ps(ctx.v13.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v11.f32)), _mm_load_ps(ctx.v12.f32)));
	// vsel v12,v0,v28,v2
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v2.u8), _mm_load_si128((__m128i*)ctx.v0.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v2.u8), _mm_load_si128((__m128i*)ctx.v28.u8))));
	// vsel v0,v13,v28,v1
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v1.u8), _mm_load_si128((__m128i*)ctx.v13.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v1.u8), _mm_load_si128((__m128i*)ctx.v28.u8))));
	// vmulfp128 v15,v17,v12
	_mm_store_ps(ctx.v15.f32, _mm_mul_ps(_mm_load_ps(ctx.v17.f32), _mm_load_ps(ctx.v12.f32)));
	// vmulfp128 v14,v16,v0
	_mm_store_ps(ctx.v14.f32, _mm_mul_ps(_mm_load_ps(ctx.v16.f32), _mm_load_ps(ctx.v0.f32)));
	// stvewx v15,r0,r9
	ea = (ctx.r9.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v15.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx v14,r0,r8
	ea = (ctx.r8.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v14.u32[3 - ((ea & 0xF) >> 2)]);
	// lfs f12,120(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,160(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 160);
	ctx.f0.f64 = double(temp.f32);
	// lfs f10,160(r25)
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 160);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f9.f64 = double(temp.f32);
	// lvx128 v0,r24,r20
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r24.u32 + ctx.r20.u32) & ~0xF), VectorMaskL));
	// vmsum3fp128 v63,v0,v31
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v63.f32, _mm_dp_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v31.f32), 0xEF));
	// fmuls f8,f0,f12
	ctx.fpscr.disableFlushModeUnconditional();
	ctx.f8.f64 = double(float(ctx.f0.f64 * ctx.f12.f64));
	// stvewx128 v63,r0,r7
	ea = (ctx.r7.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v63.u32[3 - ((ea & 0xF) >> 2)]);
	// lfs f11,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f11.f64 = double(temp.f32);
	// fmadds f12,f10,f9,f8
	ctx.f12.f64 = double(float(ctx.f10.f64 * ctx.f9.f64 + ctx.f8.f64));
	// fadds f30,f12,f11
	ctx.f30.f64 = double(float(ctx.f12.f64 + ctx.f11.f64));
	// fcmpu cr6,f30,f16
	ctx.cr6.compare(ctx.f30.f64, ctx.f16.f64);
	// ble cr6,0x82e20500
	if (!ctx.cr6.gt) goto loc_82E20500;
	// lfs f0,0(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fnmsubs f13,f30,f13,f0
	ctx.f13.f64 = double(float(-(ctx.f30.f64 * ctx.f13.f64 - ctx.f0.f64)));
	// fcmpu cr6,f13,f27
	ctx.cr6.compare(ctx.f13.f64, ctx.f27.f64);
	// bgt cr6,0x82e20500
	if (ctx.cr6.gt) goto loc_82E20500;
	// fsubs f0,f0,f27
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f27.f64));
	// fdivs f29,f0,f30
	ctx.f29.f64 = double(float(ctx.f0.f64 / ctx.f30.f64));
	// fcmpu cr6,f29,f22
	ctx.cr6.compare(ctx.f29.f64, ctx.f22.f64);
	// bge cr6,0x82e1f898
	if (!ctx.cr6.lt) goto loc_82E1F898;
	// extsb r11,r23
	ctx.r11.s64 = ctx.r23.s8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82e1f898
	if (!ctx.cr6.eq) goto loc_82E1F898;
	// extsb r11,r30
	ctx.r11.s64 = ctx.r30.s8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82e1f898
	if (ctx.cr6.eq) goto loc_82E1F898;
	// fcmpu cr6,f11,f12
	ctx.cr6.compare(ctx.f11.f64, ctx.f12.f64);
	// bge cr6,0x82e1f898
	if (!ctx.cr6.lt) goto loc_82E1F898;
	// lwz r11,264(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 264);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82e1f85c
	if (!ctx.cr6.eq) goto loc_82E1F85C;
	// lwz r10,0(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// addi r9,r1,336
	ctx.r9.s64 = ctx.r1.s64 + 336;
	// lwz r8,0(r21)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// lwz r11,0(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// addi r7,r11,80
	ctx.r7.s64 = ctx.r11.s64 + 80;
	// lwz r30,8(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r16,8(r8)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// lwz r15,0(r10)
	ctx.r15.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r6,0(r8)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// stw r30,256(r1)
	PPC_STORE_U32(ctx.r1.u32 + 256, ctx.r30.u32);
	// stw r16,260(r1)
	PPC_STORE_U32(ctx.r1.u32 + 260, ctx.r16.u32);
	// lfs f0,16(r15)
	temp.u32 = PPC_LOAD_U32(ctx.r15.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,16(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// fadds f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// stvx128 v0,r0,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stw r7,320(r1)
	PPC_STORE_U32(ctx.r1.u32 + 320, ctx.r7.u32);
	// stfs f12,276(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 276, temp.u32);
	// lwz r5,0(r15)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r15.u32 + 0);
	// lwz r4,44(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 44);
	// mtctr r4
	ctx.ctr.u64 = ctx.r4.u64;
	// bctrl 
	ctx.lr = 0x82E1F7CC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,272(r1)
	PPC_STORE_U32(ctx.r1.u32 + 272, ctx.r3.u32);
	// mr r14,r3
	ctx.r14.u64 = ctx.r3.u64;
	// stw r3,268(r1)
	PPC_STORE_U32(ctx.r1.u32 + 268, ctx.r3.u32);
	// bl 0x82d2d090
	ctx.lr = 0x82E1F7DC;
	sub_82D2D090(ctx, base);
	// rlwinm r11,r14,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r14.u32 | (ctx.r14.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r4,0(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r11,r11,127
	ctx.r11.s64 = ctx.r11.s64 + 127;
	// rlwinm r11,r11,0,0,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFF80;
	// add r10,r11,r4
	ctx.r10.u64 = ctx.r11.u64 + ctx.r4.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// stw r4,264(r1)
	PPC_STORE_U32(ctx.r1.u32 + 264, ctx.r4.u32);
	// lwz r9,0(r15)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r15.u32 + 0);
	// lwz r8,48(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 48);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82E1F80C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lfs f0,364(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 364);
	ctx.f0.f64 = double(temp.f32);
	// lfs f11,160(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 160);
	ctx.f11.f64 = double(temp.f32);
	// lwz r7,264(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 264);
	// fmuls f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// lfs f9,160(r16)
	temp.u32 = PPC_LOAD_U32(ctx.r16.u32 + 160);
	ctx.f9.f64 = double(temp.f32);
	// lfs f13,380(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 380);
	ctx.f13.f64 = double(temp.f32);
	// lwz r15,96(r1)
	ctx.r15.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// fmuls f8,f9,f13
	ctx.f8.f64 = double(float(ctx.f9.f64 * ctx.f13.f64));
	// lwz r14,1908(r1)
	ctx.r14.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1908);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// li r16,144
	ctx.r16.s64 = 144;
	// fmuls f7,f10,f0
	ctx.f7.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// fmadds f0,f8,f13,f7
	ctx.f0.f64 = double(float(ctx.f8.f64 * ctx.f13.f64 + ctx.f7.f64));
	// stfs f0,280(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 280, temp.u32);
	// fadds f6,f0,f15
	ctx.f6.f64 = double(float(ctx.f0.f64 + ctx.f15.f64));
	// fdivs f5,f23,f6
	ctx.f5.f64 = double(float(ctx.f23.f64 / ctx.f6.f64));
	// stfs f5,284(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 284, temp.u32);
	// bne cr6,0x82e1f85c
	if (!ctx.cr6.eq) goto loc_82E1F85C;
	// li r23,1
	ctx.r23.s64 = 1;
	// b 0x82e1f898
	goto loc_82E1F898;
loc_82E1F85C:
	// stfs f31,384(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 384, temp.u32);
	// addi r5,r1,1360
	ctx.r5.s64 = ctx.r1.s64 + 1360;
	// stfs f30,324(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 324, temp.u32);
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// stfs f23,1360(r1)
	temp.f32 = float(ctx.f23.f64);
	PPC_STORE_U32(ctx.r1.u32 + 1360, temp.u32);
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x82e1e438
	ctx.lr = 0x82E1F878;
	sub_82E1E438(ctx, base);
	// lfs f12,1360(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 1360);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f13,f29,f24
	ctx.f13.f64 = double(float(ctx.f29.f64 * ctx.f24.f64));
	// fsubs f0,f12,f31
	ctx.f0.f64 = double(float(ctx.f12.f64 - ctx.f31.f64));
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x82e1f890
	if (!ctx.cr6.lt) goto loc_82E1F890;
	// li r23,1
	ctx.r23.s64 = 1;
loc_82E1F890:
	// fsubs f13,f29,f0
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f29.f64 - ctx.f0.f64));
	// fsel f29,f13,f29,f0
	ctx.f29.f64 = ctx.f13.f64 >= 0.0 ? ctx.f29.f64 : ctx.f0.f64;
loc_82E1F898:
	// fadds f0,f29,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f29.f64 + ctx.f31.f64));
	// fcmpu cr6,f0,f23
	ctx.cr6.compare(ctx.f0.f64, ctx.f23.f64);
	// bge cr6,0x82e20500
	if (!ctx.cr6.lt) goto loc_82E20500;
	// fsubs f0,f26,f29
	ctx.f0.f64 = double(float(ctx.f26.f64 - ctx.f29.f64));
	// lwz r30,0(r22)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// fmr f28,f31
	ctx.f28.f64 = ctx.f31.f64;
	// addi r6,r1,1456
	ctx.r6.s64 = ctx.r1.s64 + 1456;
	// addi r3,r26,64
	ctx.r3.s64 = ctx.r26.s64 + 64;
	// lvx128 v127,r0,r31
	simd::store_shuffled(ctx.v127, simd::load_and_shuffle(base + ((ctx.r31.u32) & ~0xF), VectorMaskL));
	// lfs f30,0(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	ctx.f30.f64 = double(temp.f32);
	// lfs f13,88(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 88);
	ctx.f13.f64 = double(temp.f32);
	// lfs f1,80(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 80);
	ctx.f1.f64 = double(temp.f32);
	// fsel f12,f0,f26,f29
	ctx.f12.f64 = ctx.f0.f64 >= 0.0 ? ctx.f26.f64 : ctx.f29.f64;
	// fadds f11,f12,f31
	ctx.f11.f64 = double(float(ctx.f12.f64 + ctx.f31.f64));
	// fsubs f10,f11,f23
	ctx.f10.f64 = double(float(ctx.f11.f64 - ctx.f23.f64));
	// fsel f31,f10,f23,f11
	ctx.f31.f64 = ctx.f10.f64 >= 0.0 ? ctx.f23.f64 : ctx.f11.f64;
	// fmuls f29,f13,f31
	ctx.f29.f64 = double(float(ctx.f13.f64 * ctx.f31.f64));
	// fmr f2,f29
	ctx.f2.f64 = ctx.f29.f64;
	// bl 0x830b2db0
	ctx.lr = 0x82E1F8E4;
	sub_830B2DB0(ctx, base);
	// addi r6,r1,1392
	ctx.r6.s64 = ctx.r1.s64 + 1392;
	// lfs f1,80(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 80);
	ctx.f1.f64 = double(temp.f32);
	// addi r3,r25,64
	ctx.r3.s64 = ctx.r25.s64 + 64;
	// fmr f2,f29
	ctx.f2.f64 = ctx.f29.f64;
	// bl 0x830b2db0
	ctx.lr = 0x82E1F8F8;
	sub_830B2DB0(ctx, base);
	// addi r5,r1,1392
	ctx.r5.s64 = ctx.r1.s64 + 1392;
	// addi r4,r1,1456
	ctx.r4.s64 = ctx.r1.s64 + 1456;
	// addi r3,r1,1296
	ctx.r3.s64 = ctx.r1.s64 + 1296;
	// bl 0x82d2e728
	ctx.lr = 0x82E1F908;
	sub_82D2E728(ctx, base);
	// addi r7,r1,432
	ctx.r7.s64 = ctx.r1.s64 + 432;
	// addi r6,r1,1296
	ctx.r6.s64 = ctx.r1.s64 + 1296;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,848
	ctx.r3.s64 = ctx.r1.s64 + 848;
	// bl 0x82e19ca0
	ctx.lr = 0x82E1F920;
	sub_82E19CA0(ctx, base);
	// addi r11,r1,432
	ctx.r11.s64 = ctx.r1.s64 + 432;
	// addi r10,r1,1456
	ctx.r10.s64 = ctx.r1.s64 + 1456;
	// lwz r7,848(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 848);
	// addi r9,r1,1472
	ctx.r9.s64 = ctx.r1.s64 + 1472;
	// addi r8,r1,1488
	ctx.r8.s64 = ctx.r1.s64 + 1488;
	// cmpwi cr6,r7,1
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 1, ctx.xer);
	// lvx128 v0,r0,r11
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// vspltw v12,v0,0
	_mm_store_si128((__m128i*)ctx.v12.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0xFF));
	// lvx128 v8,r0,r10
	simd::store_shuffled(ctx.v8, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// vspltw v11,v0,1
	_mm_store_si128((__m128i*)ctx.v11.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0xAA));
	// lvx128 v13,r0,r9
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// vspltw v9,v0,2
	_mm_store_si128((__m128i*)ctx.v9.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0x55));
	// lvx128 v10,r0,r8
	simd::store_shuffled(ctx.v10, simd::load_and_shuffle(base + ((ctx.r8.u32) & ~0xF), VectorMaskL));
	// vmulfp128 v12,v8,v12
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v12.f32, _mm_mul_ps(_mm_load_ps(ctx.v8.f32), _mm_load_ps(ctx.v12.f32)));
	// vmaddfp v13,v13,v11,v12
	_mm_store_ps(ctx.v13.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v11.f32)), _mm_load_ps(ctx.v12.f32)));
	// vmaddfp v13,v10,v9,v13
	_mm_store_ps(ctx.v13.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v10.f32), _mm_load_ps(ctx.v9.f32)), _mm_load_ps(ctx.v13.f32)));
	// stvx128 v13,r0,r31
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// bne cr6,0x82e1f970
	if (!ctx.cr6.eq) goto loc_82E1F970;
	// addi r11,r1,880
	ctx.r11.s64 = ctx.r1.s64 + 880;
	// b 0x82e1f994
	goto loc_82E1F994;
loc_82E1F970:
	// lwz r11,852(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 852);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82e1f990
	if (!ctx.cr6.eq) goto loc_82E1F990;
	// addi r11,r1,1008
	ctx.r11.s64 = ctx.r1.s64 + 1008;
	// vspltw v13,v0,3
	_mm_store_si128((__m128i*)ctx.v13.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0x0));
	// lvx128 v12,r0,r11
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// vmaddfp v11,v0,v13,v12
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v11.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v13.f32)), _mm_load_ps(ctx.v12.f32)));
	// b 0x82e1f998
	goto loc_82E1F998;
loc_82E1F990:
	// addi r11,r1,1152
	ctx.r11.s64 = ctx.r1.s64 + 1152;
loc_82E1F994:
	// lvx128 v11,r0,r11
	simd::store_shuffled(ctx.v11, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
loc_82E1F998:
	// vspltw v13,v0,3
	_mm_store_si128((__m128i*)ctx.v13.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0x0));
	// addi r10,r1,1344
	ctx.r10.s64 = ctx.r1.s64 + 1344;
	// addi r9,r1,1312
	ctx.r9.s64 = ctx.r1.s64 + 1312;
	// lvx128 v12,r0,r19
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((ctx.r19.u32) & ~0xF), VectorMaskL));
	// addi r8,r1,1328
	ctx.r8.s64 = ctx.r1.s64 + 1328;
	// lfs f0,444(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 444);
	ctx.f0.f64 = double(temp.f32);
	// addi r7,r1,1296
	ctx.r7.s64 = ctx.r1.s64 + 1296;
	// lwz r11,868(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 868);
	// vnmsubfp v11,v0,v13,v11
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v11.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v13.f32)), _mm_load_ps(ctx.v11.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// addi r6,r1,304
	ctx.r6.s64 = ctx.r1.s64 + 304;
	// lvx128 v0,r0,r10
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// addi r5,r1,288
	ctx.r5.s64 = ctx.r1.s64 + 288;
	// lvx128 v13,r0,r9
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// addi r4,r1,1408
	ctx.r4.s64 = ctx.r1.s64 + 1408;
	// lvx128 v10,r0,r8
	simd::store_shuffled(ctx.v10, simd::load_and_shuffle(base + ((ctx.r8.u32) & ~0xF), VectorMaskL));
	// addi r3,r1,1424
	ctx.r3.s64 = ctx.r1.s64 + 1424;
	// lvx128 v9,r0,r7
	simd::store_shuffled(ctx.v9, simd::load_and_shuffle(base + ((ctx.r7.u32) & ~0xF), VectorMaskL));
	// addi r10,r1,1392
	ctx.r10.s64 = ctx.r1.s64 + 1392;
	// li r30,1
	ctx.r30.s64 = 1;
	// lvx128 v8,r0,r4
	simd::store_shuffled(ctx.v8, simd::load_and_shuffle(base + ((ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v7,r0,r3
	simd::store_shuffled(ctx.v7, simd::load_and_shuffle(base + ((ctx.r3.u32) & ~0xF), VectorMaskL));
	// lvx128 v6,r0,r10
	simd::store_shuffled(ctx.v6, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// vsubfp v5,v11,v0
	_mm_store_ps(ctx.v5.f32, _mm_sub_ps(_mm_load_ps(ctx.v11.f32), _mm_load_ps(ctx.v0.f32)));
	// vmsum3fp128 v4,v13,v5
	_mm_store_ps(ctx.v4.f32, _mm_dp_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v5.f32), 0xEF));
	// vmsum3fp128 v3,v10,v5
	_mm_store_ps(ctx.v3.f32, _mm_dp_ps(_mm_load_ps(ctx.v10.f32), _mm_load_ps(ctx.v5.f32), 0xEF));
	// vmsum3fp128 v2,v9,v5
	_mm_store_ps(ctx.v2.f32, _mm_dp_ps(_mm_load_ps(ctx.v9.f32), _mm_load_ps(ctx.v5.f32), 0xEF));
	// vmrghw v1,v4,v12
	_mm_store_si128((__m128i*)ctx.v1.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v12.u32), _mm_load_si128((__m128i*)ctx.v4.u32)));
	// vmrghw v31,v2,v3
	_mm_store_si128((__m128i*)ctx.v31.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v3.u32), _mm_load_si128((__m128i*)ctx.v2.u32)));
	// vmrghw v30,v31,v1
	_mm_store_si128((__m128i*)ctx.v30.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v1.u32), _mm_load_si128((__m128i*)ctx.v31.u32)));
	// stvx128 v30,r0,r6
	_mm_store_si128((__m128i*)(base + ((ctx.r6.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v30.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lfs f13,16(r28)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,16(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f11,f0,f12
	ctx.f11.f64 = double(float(ctx.f0.f64 - ctx.f12.f64));
	// fsubs f10,f11,f13
	ctx.f10.f64 = double(float(ctx.f11.f64 - ctx.f13.f64));
	// stfs f10,0(r27)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r27.u32 + 0, temp.u32);
	// lvx128 v0,r0,r19
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r19.u32) & ~0xF), VectorMaskL));
	// lvx128 v29,r0,r31
	simd::store_shuffled(ctx.v29, simd::load_and_shuffle(base + ((ctx.r31.u32) & ~0xF), VectorMaskL));
	// vmsum3fp128 v28,v8,v29
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v28.f32, _mm_dp_ps(_mm_load_ps(ctx.v8.f32), _mm_load_ps(ctx.v29.f32), 0xEF));
	// vmsum3fp128 v27,v7,v29
	_mm_store_ps(ctx.v27.f32, _mm_dp_ps(_mm_load_ps(ctx.v7.f32), _mm_load_ps(ctx.v29.f32), 0xEF));
	// vmrghw v25,v28,v0
	_mm_store_si128((__m128i*)ctx.v25.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), _mm_load_si128((__m128i*)ctx.v28.u32)));
	// vmsum3fp128 v26,v6,v29
	_mm_store_ps(ctx.v26.f32, _mm_dp_ps(_mm_load_ps(ctx.v6.f32), _mm_load_ps(ctx.v29.f32), 0xEF));
	// fmr f0,f10
	ctx.fpscr.disableFlushModeUnconditional();
	ctx.f0.f64 = ctx.f10.f64;
	// fcmpu cr6,f10,f25
	ctx.cr6.compare(ctx.f10.f64, ctx.f25.f64);
	// vmrghw v24,v26,v27
	_mm_store_si128((__m128i*)ctx.v24.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v27.u32), _mm_load_si128((__m128i*)ctx.v26.u32)));
	// vmrghw v23,v24,v25
	_mm_store_si128((__m128i*)ctx.v23.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v25.u32), _mm_load_si128((__m128i*)ctx.v24.u32)));
	// stvx128 v23,r0,r5
	_mm_store_si128((__m128i*)(base + ((ctx.r5.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v23.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// bgt cr6,0x82e1f628
	if (ctx.cr6.gt) goto loc_82E1F628;
loc_82E1FA54:
	// lwz r10,0(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// fsubs f13,f31,f28
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f31.f64 - ctx.f28.f64));
	// lwz r9,0(r21)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// fsubs f12,f0,f30
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f30.f64));
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// fmr f24,f0
	ctx.f24.f64 = ctx.f0.f64;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// fneg f22,f17
	ctx.f22.u64 = ctx.f17.u64 ^ 0x8000000000000000;
	// mr r27,r18
	ctx.r27.u64 = ctx.r18.u64;
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lwz r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// li r28,-64
	ctx.r28.s64 = -64;
	// lfs f25,-19516(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -19516);
	ctx.f25.f64 = double(temp.f32);
	// lfs f11,16(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 16);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,16(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 16);
	ctx.f10.f64 = double(temp.f32);
	// fdivs f18,f12,f13
	ctx.f18.f64 = double(float(ctx.f12.f64 / ctx.f13.f64));
	// lfs f26,11976(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 11976);
	ctx.f26.f64 = double(temp.f32);
	// fadds f21,f11,f10
	ctx.f21.f64 = double(float(ctx.f11.f64 + ctx.f10.f64));
	// lfs f20,11556(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 11556);
	ctx.f20.f64 = double(temp.f32);
loc_82E1FAA8:
	// fsubs f0,f24,f30
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f24.f64 - ctx.f30.f64));
	// fcmpu cr6,f0,f22
	ctx.cr6.compare(ctx.f0.f64, ctx.f22.f64);
	// ble cr6,0x82e1fabc
	if (!ctx.cr6.gt) goto loc_82E1FABC;
	// fmr f31,f28
	ctx.f31.f64 = ctx.f28.f64;
	// fmr f0,f20
	ctx.f0.f64 = ctx.f20.f64;
loc_82E1FABC:
	// fsubs f13,f24,f19
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f24.f64 - ctx.f19.f64));
	// li r11,1
	ctx.r11.s64 = 1;
	// fabs f12,f13
	ctx.f12.u64 = ctx.f13.u64 & ~0x8000000000000000;
	// fcmpu cr6,f12,f17
	ctx.cr6.compare(ctx.f12.f64, ctx.f17.f64);
	// blt cr6,0x82e1fad4
	if (ctx.cr6.lt) goto loc_82E1FAD4;
	// mr r11,r18
	ctx.r11.u64 = ctx.r18.u64;
loc_82E1FAD4:
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82e1faf0
	if (ctx.cr6.eq) goto loc_82E1FAF0;
	// li r29,1
	ctx.r29.s64 = 1;
	// fmr f27,f31
	ctx.fpscr.disableFlushMode();
	ctx.f27.f64 = ctx.f31.f64;
	// mr r30,r18
	ctx.r30.u64 = ctx.r18.u64;
	// b 0x82e1fb18
	goto loc_82E1FB18;
loc_82E1FAF0:
	// fsubs f13,f19,f30
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f19.f64 - ctx.f30.f64));
	// mr r29,r18
	ctx.r29.u64 = ctx.r18.u64;
	// fdivs f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 / ctx.f0.f64));
	// fsubs f11,f12,f26
	ctx.f11.f64 = double(float(ctx.f12.f64 - ctx.f26.f64));
	// fsel f10,f11,f12,f26
	ctx.f10.f64 = ctx.f11.f64 >= 0.0 ? ctx.f12.f64 : ctx.f26.f64;
	// fsubs f9,f10,f25
	ctx.f9.f64 = double(float(ctx.f10.f64 - ctx.f25.f64));
	// fsel f8,f9,f25,f10
	ctx.f8.f64 = ctx.f9.f64 >= 0.0 ? ctx.f25.f64 : ctx.f10.f64;
	// fsubs f7,f23,f8
	ctx.f7.f64 = double(float(ctx.f23.f64 - ctx.f8.f64));
	// fmuls f6,f8,f31
	ctx.f6.f64 = double(float(ctx.f8.f64 * ctx.f31.f64));
	// fmadds f27,f7,f28,f6
	ctx.f27.f64 = double(float(ctx.f7.f64 * ctx.f28.f64 + ctx.f6.f64));
loc_82E1FB18:
	// lwz r31,0(r22)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// addi r6,r1,448
	ctx.r6.s64 = ctx.r1.s64 + 448;
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// lfs f0,88(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f29,f0,f27
	ctx.f29.f64 = double(float(ctx.f0.f64 * ctx.f27.f64));
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lfs f1,80(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	ctx.f1.f64 = double(temp.f32);
	// addi r3,r11,64
	ctx.r3.s64 = ctx.r11.s64 + 64;
	// fmr f2,f29
	ctx.f2.f64 = ctx.f29.f64;
	// bl 0x830b2db0
	ctx.lr = 0x82E1FB40;
	sub_830B2DB0(ctx, base);
	// lwz r10,0(r21)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// addi r6,r1,784
	ctx.r6.s64 = ctx.r1.s64 + 784;
	// lfs f1,80(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	ctx.f1.f64 = double(temp.f32);
	// fmr f2,f29
	ctx.f2.f64 = ctx.f29.f64;
	// lwz r11,8(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// addi r3,r11,64
	ctx.r3.s64 = ctx.r11.s64 + 64;
	// bl 0x830b2db0
	ctx.lr = 0x82E1FB5C;
	sub_830B2DB0(ctx, base);
	// addi r5,r1,784
	ctx.r5.s64 = ctx.r1.s64 + 784;
	// addi r4,r1,448
	ctx.r4.s64 = ctx.r1.s64 + 448;
	// addi r3,r1,1232
	ctx.r3.s64 = ctx.r1.s64 + 1232;
	// bl 0x82d2e728
	ctx.lr = 0x82E1FB6C;
	sub_82D2E728(ctx, base);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x82e1fbf8
	if (ctx.cr6.eq) goto loc_82E1FBF8;
	// lwz r11,0(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// addi r7,r1,224
	ctx.r7.s64 = ctx.r1.s64 + 224;
	// lwz r10,0(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// addi r6,r1,1232
	ctx.r6.s64 = ctx.r1.s64 + 1232;
	// addi r3,r1,848
	ctx.r3.s64 = ctx.r1.s64 + 848;
	// lwz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r4,0(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// bl 0x82e19ca0
	ctx.lr = 0x82E1FB94;
	sub_82E19CA0(ctx, base);
	// lwz r9,848(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 848);
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// bne cr6,0x82e1fbb4
	if (!ctx.cr6.eq) goto loc_82E1FBB4;
	// addi r11,r1,880
	ctx.r11.s64 = ctx.r1.s64 + 880;
	// addi r10,r1,240
	ctx.r10.s64 = ctx.r1.s64 + 240;
	// lvx128 v0,r0,r11
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// stvx128 v0,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// b 0x82e1fcb8
	goto loc_82E1FCB8;
loc_82E1FBB4:
	// lwz r11,852(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 852);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82e1fbe4
	if (!ctx.cr6.eq) goto loc_82E1FBE4;
	// addi r11,r1,224
	ctx.r11.s64 = ctx.r1.s64 + 224;
	// addi r10,r1,1008
	ctx.r10.s64 = ctx.r1.s64 + 1008;
	// addi r9,r1,240
	ctx.r9.s64 = ctx.r1.s64 + 240;
	// lvx128 v0,r0,r11
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// vspltw v13,v0,3
	_mm_store_si128((__m128i*)ctx.v13.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0x0));
	// lvx128 v12,r0,r10
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// vmaddfp v0,v0,v13,v12
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v13.f32)), _mm_load_ps(ctx.v12.f32)));
	// stvx128 v0,r0,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// b 0x82e1fcb8
	goto loc_82E1FCB8;
loc_82E1FBE4:
	// addi r11,r1,1152
	ctx.r11.s64 = ctx.r1.s64 + 1152;
	// addi r10,r1,240
	ctx.r10.s64 = ctx.r1.s64 + 240;
	// lvx128 v0,r0,r11
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// stvx128 v0,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// b 0x82e1fcb8
	goto loc_82E1FCB8;
loc_82E1FBF8:
	// lwz r10,852(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 852);
	// addi r11,r1,1072
	ctx.r11.s64 = ctx.r1.s64 + 1072;
	// addi r8,r1,1264
	ctx.r8.s64 = ctx.r1.s64 + 1264;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// addi r7,r1,1248
	ctx.r7.s64 = ctx.r1.s64 + 1248;
	// rlwinm r9,r10,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r6,r1,1232
	ctx.r6.s64 = ctx.r1.s64 + 1232;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lvx128 v10,r0,r8
	simd::store_shuffled(ctx.v10, simd::load_and_shuffle(base + ((ctx.r8.u32) & ~0xF), VectorMaskL));
	// addi r9,r1,1280
	ctx.r9.s64 = ctx.r1.s64 + 1280;
	// lvx128 v9,r0,r7
	simd::store_shuffled(ctx.v9, simd::load_and_shuffle(base + ((ctx.r7.u32) & ~0xF), VectorMaskL));
	// lvx128 v8,r0,r6
	simd::store_shuffled(ctx.v8, simd::load_and_shuffle(base + ((ctx.r6.u32) & ~0xF), VectorMaskL));
	// lvx128 v11,r0,r9
	simd::store_shuffled(ctx.v11, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
loc_82E1FC2C:
	// lvx128 v0,r0,r11
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// vspltw v7,v0,0
	_mm_store_si128((__m128i*)ctx.v7.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0xFF));
	// vspltw v13,v0,1
	_mm_store_si128((__m128i*)ctx.v13.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0xAA));
	// vspltw v12,v0,2
	_mm_store_si128((__m128i*)ctx.v12.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0x55));
	// vmulfp128 v0,v8,v7
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v0.f32, _mm_mul_ps(_mm_load_ps(ctx.v8.f32), _mm_load_ps(ctx.v7.f32)));
	// vmaddfp v0,v9,v13,v0
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v9.f32), _mm_load_ps(ctx.v13.f32)), _mm_load_ps(ctx.v0.f32)));
	// vmaddfp v0,v10,v12,v0
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v10.f32), _mm_load_ps(ctx.v12.f32)), _mm_load_ps(ctx.v0.f32)));
	// vaddfp v6,v0,v11
	_mm_store_ps(ctx.v6.f32, _mm_add_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v11.f32)));
	// stvx128 v6,r11,r28
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r28.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v6.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r11,r11,-16
	ctx.r11.s64 = ctx.r11.s64 + -16;
	// bge 0x82e1fc2c
	if (!ctx.cr0.lt) goto loc_82E1FC2C;
	// addi r7,r1,448
	ctx.r7.s64 = ctx.r1.s64 + 448;
	// lvx128 v0,r0,r19
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r19.u32) & ~0xF), VectorMaskL));
	// addi r11,r1,464
	ctx.r11.s64 = ctx.r1.s64 + 464;
	// lwz r6,852(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 852);
	// addi r10,r1,480
	ctx.r10.s64 = ctx.r1.s64 + 480;
	// lwz r5,848(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 848);
	// addi r31,r1,768
	ctx.r31.s64 = ctx.r1.s64 + 768;
	// addi r9,r1,224
	ctx.r9.s64 = ctx.r1.s64 + 224;
	// lvx128 v10,r0,r7
	simd::store_shuffled(ctx.v10, simd::load_and_shuffle(base + ((ctx.r7.u32) & ~0xF), VectorMaskL));
	// addi r8,r1,240
	ctx.r8.s64 = ctx.r1.s64 + 240;
	// lvx128 v13,r0,r11
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// vmsum3fp128 v8,v10,v127
	_mm_store_ps(ctx.v8.f32, _mm_dp_ps(_mm_load_ps(ctx.v10.f32), _mm_load_ps(ctx.v127.f32), 0xEF));
	// lvx128 v12,r0,r10
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// vmsum3fp128 v11,v13,v127
	_mm_store_ps(ctx.v11.f32, _mm_dp_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v127.f32), 0xEF));
	// vmsum3fp128 v9,v12,v127
	_mm_store_ps(ctx.v9.f32, _mm_dp_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v127.f32), 0xEF));
	// addi r7,r1,768
	ctx.r7.s64 = ctx.r1.s64 + 768;
	// addi r4,r1,1008
	ctx.r4.s64 = ctx.r1.s64 + 1008;
	// addi r3,r1,880
	ctx.r3.s64 = ctx.r1.s64 + 880;
	// vmrghw v7,v11,v0
	_mm_store_si128((__m128i*)ctx.v7.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), _mm_load_si128((__m128i*)ctx.v11.u32)));
	// vmrghw v6,v8,v9
	_mm_store_si128((__m128i*)ctx.v6.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v9.u32), _mm_load_si128((__m128i*)ctx.v8.u32)));
	// vmrghw v5,v6,v7
	_mm_store_si128((__m128i*)ctx.v5.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v7.u32), _mm_load_si128((__m128i*)ctx.v6.u32)));
	// stvx128 v5,r0,r31
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v5.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// bl 0x82e17978
	ctx.lr = 0x82E1FCB8;
	sub_82E17978(ctx, base);
loc_82E1FCB8:
	// lfs f0,236(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 236);
	ctx.f0.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// fsubs f29,f0,f21
	ctx.f29.f64 = double(float(ctx.f0.f64 - ctx.f21.f64));
	// fsubs f13,f29,f19
	ctx.f13.f64 = double(float(ctx.f29.f64 - ctx.f19.f64));
	// fabs f12,f13
	ctx.f12.u64 = ctx.f13.u64 & ~0x8000000000000000;
	// fcmpu cr6,f12,f17
	ctx.cr6.compare(ctx.f12.f64, ctx.f17.f64);
	// blt cr6,0x82e1fcd8
	if (ctx.cr6.lt) goto loc_82E1FCD8;
	// mr r11,r18
	ctx.r11.u64 = ctx.r18.u64;
loc_82E1FCD8:
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82e1fd20
	if (!ctx.cr6.eq) goto loc_82E1FD20;
	// extsb r11,r29
	ctx.r11.s64 = ctx.r29.s8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82e1fd20
	if (!ctx.cr6.eq) goto loc_82E1FD20;
	// fcmpu cr6,f28,f31
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f28.f64, ctx.f31.f64);
	// beq cr6,0x82e1fd20
	if (ctx.cr6.eq) goto loc_82E1FD20;
	// fcmpu cr6,f29,f19
	ctx.cr6.compare(ctx.f29.f64, ctx.f19.f64);
	// bge cr6,0x82e1fd0c
	if (!ctx.cr6.lt) goto loc_82E1FD0C;
	// fmr f31,f27
	ctx.f31.f64 = ctx.f27.f64;
	// fmr f24,f29
	ctx.f24.f64 = ctx.f29.f64;
	// b 0x82e1fd14
	goto loc_82E1FD14;
loc_82E1FD0C:
	// fmr f28,f27
	ctx.fpscr.disableFlushMode();
	ctx.f28.f64 = ctx.f27.f64;
	// fmr f30,f29
	ctx.f30.f64 = ctx.f29.f64;
loc_82E1FD14:
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// cmpwi cr6,r27,10
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 10, ctx.xer);
	// blt cr6,0x82e1faa8
	if (ctx.cr6.lt) goto loc_82E1FAA8;
loc_82E1FD20:
	// lwz r11,0(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// lfs f0,12336(r14)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r14.u32 + 12336);
	ctx.f0.f64 = double(temp.f32);
	// addi r29,r14,12336
	ctx.r29.s64 = ctx.r14.s64 + 12336;
	// addi r30,r11,80
	ctx.r30.s64 = ctx.r11.s64 + 80;
	// lfs f13,88(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 88);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f13,f27
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f27.f64));
	// lfs f11,80(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f10,f12,f14
	ctx.f10.f64 = double(float(ctx.f12.f64 - ctx.f14.f64));
	// fsel f9,f10,f12,f14
	ctx.f9.f64 = ctx.f10.f64 >= 0.0 ? ctx.f12.f64 : ctx.f14.f64;
	// fadds f31,f9,f11
	ctx.f31.f64 = double(float(ctx.f9.f64 + ctx.f11.f64));
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// bge cr6,0x82e20500
	if (!ctx.cr6.lt) goto loc_82E20500;
	// lfs f0,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f13,f0,f14
	ctx.f13.f64 = double(float(ctx.f0.f64 - ctx.f14.f64));
	// fcmpu cr6,f31,f13
	ctx.cr6.compare(ctx.f31.f64, ctx.f13.f64);
	// bge cr6,0x82e20500
	if (!ctx.cr6.lt) goto loc_82E20500;
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// addi r5,r1,240
	ctx.r5.s64 = ctx.r1.s64 + 240;
	// addi r4,r1,448
	ctx.r4.s64 = ctx.r1.s64 + 448;
	// addi r3,r1,656
	ctx.r3.s64 = ctx.r1.s64 + 656;
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x82d2e210
	ctx.lr = 0x82E1FD78;
	sub_82D2E210(ctx, base);
	// addi r5,r1,224
	ctx.r5.s64 = ctx.r1.s64 + 224;
	// addi r4,r1,448
	ctx.r4.s64 = ctx.r1.s64 + 448;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82d2e2a8
	ctx.lr = 0x82E1FD88;
	sub_82D2E2A8(ctx, base);
	// lfs f0,16(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// fneg f13,f0
	ctx.f13.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// addi r9,r1,160
	ctx.r9.s64 = ctx.r1.s64 + 160;
	// addi r6,r1,160
	ctx.r6.s64 = ctx.r1.s64 + 160;
	// lwz r8,0(r21)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// addi r7,r1,656
	ctx.r7.s64 = ctx.r1.s64 + 656;
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// lvx128 v0,r0,r9
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// stfs f29,172(r1)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r1.u32 + 172, temp.u32);
	// li r3,2
	ctx.r3.s64 = 2;
	// lvx128 v11,r0,r6
	simd::store_shuffled(ctx.v11, simd::load_and_shuffle(base + ((ctx.r6.u32) & ~0xF), VectorMaskL));
	// stvx128 v11,r0,r4
	_mm_store_si128((__m128i*)(base + ((ctx.r4.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// fsubs f12,f13,f29
	ctx.f12.f64 = double(float(ctx.f13.f64 - ctx.f29.f64));
	// stfs f12,96(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lvlx v12,0,r10
	temp.u32 = ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw v12,v12,0
	_mm_store_si128((__m128i*)ctx.v12.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v12.u32), 0xFF));
	// lvx128 v13,r0,r7
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r7.u32) & ~0xF), VectorMaskL));
	// vmaddfp v10,v0,v12,v13
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v10.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v12.f32)), _mm_load_ps(ctx.v13.f32)));
	// stvx128 v10,r0,r5
	_mm_store_si128((__m128i*)(base + ((ctx.r5.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v10.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lwz r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// bne cr6,0x82e1fe84
	if (!ctx.cr6.eq) goto loc_82E1FE84;
	// lwz r11,852(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 852);
	// lwz r9,1084(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1084);
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// stb r11,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r11.u8);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// sth r9,124(r1)
	PPC_STORE_U16(ctx.r1.u32 + 124, ctx.r9.u16);
	// bge cr6,0x82e1fe18
	if (!ctx.cr6.lt) goto loc_82E1FE18;
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 65535;
	// b 0x82e1fe20
	goto loc_82E1FE20;
loc_82E1FE18:
	// lwz r11,1100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1100);
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
loc_82E1FE20:
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// sth r11,126(r1)
	PPC_STORE_U16(ctx.r1.u32 + 126, ctx.r11.u16);
	// bge cr6,0x82e1fe38
	if (!ctx.cr6.lt) goto loc_82E1FE38;
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 65535;
	// b 0x82e1fe40
	goto loc_82E1FE40;
loc_82E1FE38:
	// lwz r11,1116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1116);
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
loc_82E1FE40:
	// sth r11,128(r1)
	PPC_STORE_U16(ctx.r1.u32 + 128, ctx.r11.u16);
	// addi r10,r1,176
	ctx.r10.s64 = ctx.r1.s64 + 176;
	// lwz r3,0(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// addi r9,r1,448
	ctx.r9.s64 = ctx.r1.s64 + 448;
	// lwz r6,0(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r8,r31
	ctx.r8.u64 = ctx.r31.u64;
	// lwz r11,64(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 64);
	// addi r7,r1,784
	ctx.r7.s64 = ctx.r1.s64 + 784;
	// addi r6,r1,144
	ctx.r6.s64 = ctx.r1.s64 + 144;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// addi r4,r1,124
	ctx.r4.s64 = ctx.r1.s64 + 124;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E1FE74;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r10,r1,176
	ctx.r10.s64 = ctx.r1.s64 + 176;
	// addi r9,r1,160
	ctx.r9.s64 = ctx.r1.s64 + 160;
	// lvx128 v11,r0,r10
	simd::store_shuffled(ctx.v11, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// b 0x82e1ff64
	goto loc_82E1FF64;
loc_82E1FE84:
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// cmpwi cr6,r9,3
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 3, ctx.xer);
	// bne cr6,0x82e1ff8c
	if (!ctx.cr6.eq) goto loc_82E1FF8C;
	// lwz r11,848(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 848);
	// lwz r9,892(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 892);
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// stb r11,104(r1)
	PPC_STORE_U8(ctx.r1.u32 + 104, ctx.r11.u8);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// sth r9,132(r1)
	PPC_STORE_U16(ctx.r1.u32 + 132, ctx.r9.u16);
	// bge cr6,0x82e1fec4
	if (!ctx.cr6.lt) goto loc_82E1FEC4;
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 65535;
	// b 0x82e1fecc
	goto loc_82E1FECC;
loc_82E1FEC4:
	// lwz r11,908(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 908);
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
loc_82E1FECC:
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// sth r11,134(r1)
	PPC_STORE_U16(ctx.r1.u32 + 134, ctx.r11.u16);
	// bge cr6,0x82e1fee4
	if (!ctx.cr6.lt) goto loc_82E1FEE4;
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 65535;
	// b 0x82e1feec
	goto loc_82E1FEEC;
loc_82E1FEE4:
	// lwz r11,924(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 924);
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
loc_82E1FEEC:
	// vspltw v0,v11,3
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v11.u32), 0x0));
	// lis r10,-32237
	ctx.r10.s64 = -2112684032;
	// addi r28,r1,176
	ctx.r28.s64 = ctx.r1.s64 + 176;
	// sth r11,136(r1)
	PPC_STORE_U16(ctx.r1.u32 + 136, ctx.r11.u16);
	// addi r27,r10,21872
	ctx.r27.s64 = ctx.r10.s64 + 21872;
	// addi r26,r1,672
	ctx.r26.s64 = ctx.r1.s64 + 672;
	// vmaddfp v13,v11,v0,v10
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v13.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v11.f32), _mm_load_ps(ctx.v0.f32)), _mm_load_ps(ctx.v10.f32)));
	// addi r10,r1,176
	ctx.r10.s64 = ctx.r1.s64 + 176;
	// addi r9,r1,784
	ctx.r9.s64 = ctx.r1.s64 + 784;
	// addi r7,r1,448
	ctx.r7.s64 = ctx.r1.s64 + 448;
	// lvx128 v0,r0,r27
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r27.u32) & ~0xF), VectorMaskL));
	// addi r6,r1,672
	ctx.r6.s64 = ctx.r1.s64 + 672;
	// vxor v0,v11,v0
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_xor_si128(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// addi r5,r1,104
	ctx.r5.s64 = ctx.r1.s64 + 104;
	// addi r4,r1,132
	ctx.r4.s64 = ctx.r1.s64 + 132;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stvx128 v0,r0,r28
	_mm_store_si128((__m128i*)(base + ((ctx.r28.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v13,r0,r26
	_mm_store_si128((__m128i*)(base + ((ctx.r26.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,64(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// lwz r8,0(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E1FF48;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r10,r1,176
	ctx.r10.s64 = ctx.r1.s64 + 176;
	// lvx128 v13,r0,r10
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// addi r8,r1,160
	ctx.r8.s64 = ctx.r1.s64 + 160;
	// lvx128 v0,r0,r27
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r27.u32) & ~0xF), VectorMaskL));
	// addi r9,r1,176
	ctx.r9.s64 = ctx.r1.s64 + 176;
	// vxor v11,v13,v0
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_xor_si128(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// stvx128 v11,r0,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)VectorMaskL)));
loc_82E1FF64:
	// stvx128 v11,r0,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82e1ff84
	if (!ctx.cr6.eq) goto loc_82E1FF84;
	// lwz r11,0(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// lwz r10,96(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// lbz r9,62(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 62);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82e20500
	if (!ctx.cr6.eq) goto loc_82E20500;
loc_82E1FF84:
	// addi r11,r1,144
	ctx.r11.s64 = ctx.r1.s64 + 144;
	// lvx128 v10,r0,r11
	simd::store_shuffled(ctx.v10, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
loc_82E1FF8C:
	// lwz r11,0(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// addi r27,r1,100
	ctx.r27.s64 = ctx.r1.s64 + 100;
	// lwz r8,0(r24)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r9,r1,368
	ctx.r9.s64 = ctx.r1.s64 + 368;
	// lis r7,-32237
	ctx.r7.s64 = -2112684032;
	// addi r28,r1,352
	ctx.r28.s64 = ctx.r1.s64 + 352;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r6,r7,21920
	ctx.r6.s64 = ctx.r7.s64 + 21920;
	// lwz r10,8(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// lis r5,-32246
	ctx.r5.s64 = -2113273856;
	// lvx128 v13,r0,r9
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// addi r31,r24,112
	ctx.r31.s64 = ctx.r24.s64 + 112;
	// vpermwi128 v6,v13,135
	_mm_store_si128((__m128i*)ctx.v6.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v13.u32), 0x78));
	// addi r7,r5,544
	ctx.r7.s64 = ctx.r5.s64 + 544;
	// vpermwi128 v5,v13,99
	_mm_store_si128((__m128i*)ctx.v5.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v13.u32), 0x9C));
	// lvx128 v0,r0,r28
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r28.u32) & ~0xF), VectorMaskL));
	// lfs f11,76(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	ctx.f11.f64 = double(temp.f32);
	// vpermwi128 v4,v0,135
	_mm_store_si128((__m128i*)ctx.v4.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0x78));
	// fsubs f10,f31,f11
	ctx.f10.f64 = double(float(ctx.f31.f64 - ctx.f11.f64));
	// lfs f9,92(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	ctx.f9.f64 = double(temp.f32);
	// lfs f0,76(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 76);
	ctx.f0.f64 = double(temp.f32);
	// vpermwi128 v3,v0,99
	_mm_store_si128((__m128i*)ctx.v3.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0x9C));
	// fsubs f13,f31,f0
	ctx.f13.f64 = double(float(ctx.f31.f64 - ctx.f0.f64));
	// lfs f12,92(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 92);
	ctx.f12.f64 = double(temp.f32);
	// lvx128 v12,r0,r6
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((ctx.r6.u32) & ~0xF), VectorMaskL));
	// addi r6,r10,64
	ctx.r6.s64 = ctx.r10.s64 + 64;
	// lvx128 v0,r0,r7
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r7.u32) & ~0xF), VectorMaskL));
	// li r5,80
	ctx.r5.s64 = 80;
	// lvx128 v2,r0,r31
	simd::store_shuffled(ctx.v2, simd::load_and_shuffle(base + ((ctx.r31.u32) & ~0xF), VectorMaskL));
	// addi r9,r11,64
	ctx.r9.s64 = ctx.r11.s64 + 64;
	// vxor v1,v2,v0
	_mm_store_si128((__m128i*)ctx.v1.u8, _mm_xor_si128(_mm_load_si128((__m128i*)ctx.v2.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// addi r7,r8,8
	ctx.r7.s64 = ctx.r8.s64 + 8;
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// lvx128 v31,r0,r6
	simd::store_shuffled(ctx.v31, simd::load_and_shuffle(base + ((ctx.r6.u32) & ~0xF), VectorMaskL));
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// lvx128 v7,r10,r5
	simd::store_shuffled(ctx.v7, simd::load_and_shuffle(base + ((ctx.r10.u32 + ctx.r5.u32) & ~0xF), VectorMaskL));
	// fmuls f7,f10,f9
	ctx.f7.f64 = double(float(ctx.f10.f64 * ctx.f9.f64));
	// stfs f7,100(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// lvlx v29,0,r27
	temp.u32 = ctx.r27.u32;
	_mm_store_si128((__m128i*)ctx.v29.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// fmuls f8,f13,f12
	ctx.f8.f64 = double(float(ctx.f13.f64 * ctx.f12.f64));
	// stfs f8,96(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lvlx v27,0,r4
	temp.u32 = ctx.r4.u32;
	_mm_store_si128((__m128i*)ctx.v27.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw v26,v27,0
	_mm_store_si128((__m128i*)ctx.v26.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v27.u32), 0xFF));
	// vspltw v13,v26,0
	_mm_store_si128((__m128i*)ctx.v13.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v26.u32), 0xFF));
	// lvx128 v30,r0,r9
	simd::store_shuffled(ctx.v30, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// vspltw v28,v29,0
	_mm_store_si128((__m128i*)ctx.v28.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v29.u32), 0xFF));
	// lvx128 v9,r11,r5
	simd::store_shuffled(ctx.v9, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r5.u32) & ~0xF), VectorMaskL));
	// vsubfp v24,v12,v13
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v24.f32, _mm_sub_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v13.f32)));
	// vspltw v0,v28,0
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v28.u32), 0xFF));
	// vsubfp v25,v12,v0
	_mm_store_ps(ctx.v25.f32, _mm_sub_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v0.f32)));
	// vmulfp128 v8,v24,v31
	_mm_store_ps(ctx.v8.f32, _mm_mul_ps(_mm_load_ps(ctx.v24.f32), _mm_load_ps(ctx.v31.f32)));
	// vmulfp128 v12,v25,v30
	_mm_store_ps(ctx.v12.f32, _mm_mul_ps(_mm_load_ps(ctx.v25.f32), _mm_load_ps(ctx.v30.f32)));
	// vmaddfp v13,v13,v7,v8
	_mm_store_ps(ctx.v13.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v7.f32)), _mm_load_ps(ctx.v8.f32)));
	// vmaddfp v0,v0,v9,v12
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v9.f32)), _mm_load_ps(ctx.v12.f32)));
	// vsubfp v22,v10,v13
	_mm_store_ps(ctx.v22.f32, _mm_sub_ps(_mm_load_ps(ctx.v10.f32), _mm_load_ps(ctx.v13.f32)));
	// vsubfp v23,v10,v0
	_mm_store_ps(ctx.v23.f32, _mm_sub_ps(_mm_load_ps(ctx.v10.f32), _mm_load_ps(ctx.v0.f32)));
	// vpermwi128 v18,v22,99
	_mm_store_si128((__m128i*)ctx.v18.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v22.u32), 0x9C));
	// vpermwi128 v16,v22,135
	_mm_store_si128((__m128i*)ctx.v16.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v22.u32), 0x78));
	// vmulfp128 v15,v4,v18
	_mm_store_ps(ctx.v15.f32, _mm_mul_ps(_mm_load_ps(ctx.v4.f32), _mm_load_ps(ctx.v18.f32)));
	// vmulfp128 v14,v3,v16
	_mm_store_ps(ctx.v14.f32, _mm_mul_ps(_mm_load_ps(ctx.v3.f32), _mm_load_ps(ctx.v16.f32)));
	// vpermwi128 v21,v23,99
	_mm_store_si128((__m128i*)ctx.v21.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v23.u32), 0x9C));
	// vpermwi128 v20,v23,135
	_mm_store_si128((__m128i*)ctx.v20.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v23.u32), 0x78));
	// vmulfp128 v19,v6,v21
	_mm_store_ps(ctx.v19.f32, _mm_mul_ps(_mm_load_ps(ctx.v6.f32), _mm_load_ps(ctx.v21.f32)));
	// vmulfp128 v17,v5,v20
	_mm_store_ps(ctx.v17.f32, _mm_mul_ps(_mm_load_ps(ctx.v5.f32), _mm_load_ps(ctx.v20.f32)));
	// vsubfp128 v62,v14,v15
	_mm_store_ps(ctx.v62.f32, _mm_sub_ps(_mm_load_ps(ctx.v14.f32), _mm_load_ps(ctx.v15.f32)));
	// vsubfp128 v63,v17,v19
	_mm_store_ps(ctx.v63.f32, _mm_sub_ps(_mm_load_ps(ctx.v17.f32), _mm_load_ps(ctx.v19.f32)));
	// vaddfp128 v61,v1,v62
	_mm_store_ps(ctx.v61.f32, _mm_add_ps(_mm_load_ps(ctx.v1.f32), _mm_load_ps(ctx.v62.f32)));
	// vsubfp128 v60,v61,v63
	_mm_store_ps(ctx.v60.f32, _mm_sub_ps(_mm_load_ps(ctx.v61.f32), _mm_load_ps(ctx.v63.f32)));
	// vmsum3fp128 v59,v60,v11
	_mm_store_ps(ctx.v59.f32, _mm_dp_ps(_mm_load_ps(ctx.v60.f32), _mm_load_ps(ctx.v11.f32), 0xEF));
	// stvewx128 v59,r0,r6
	ea = (ctx.r6.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v59.u32[3 - ((ea & 0xF) >> 2)]);
	// lfs f0,96(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,108(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// bne cr6,0x82e20370
	if (!ctx.cr6.eq) goto loc_82E20370;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// lfs f13,29536(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 29536);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x82e20370
	if (!ctx.cr6.gt) goto loc_82E20370;
	// stfs f27,640(r1)
	temp.f32 = float(ctx.f27.f64);
	PPC_STORE_U32(ctx.r1.u32 + 640, temp.u32);
	// lwz r9,0(r22)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// lfs f13,92(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	ctx.f13.f64 = double(temp.f32);
	// addi r6,r1,120
	ctx.r6.s64 = ctx.r1.s64 + 120;
	// lfs f0,92(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 92);
	ctx.f0.f64 = double(temp.f32);
	// addi r5,r1,140
	ctx.r5.s64 = ctx.r1.s64 + 140;
	// lvx128 v13,r10,r16
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r10.u32 + ctx.r16.u32) & ~0xF), VectorMaskL));
	// vpermwi128 v12,v11,99
	_mm_store_si128((__m128i*)ctx.v12.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v11.u32), 0x9C));
	// vpermwi128 v10,v11,135
	_mm_store_si128((__m128i*)ctx.v10.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v11.u32), 0x78));
	// addi r4,r1,608
	ctx.r4.s64 = ctx.r1.s64 + 608;
	// lfs f12,88(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 88);
	ctx.f12.f64 = double(temp.f32);
	// addi r3,r1,624
	ctx.r3.s64 = ctx.r1.s64 + 624;
	// addi r25,r1,592
	ctx.r25.s64 = ctx.r1.s64 + 592;
	// lvx128 v0,r0,r15
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r15.u32) & ~0xF), VectorMaskL));
	// vspltisw v8,0
	_mm_store_si128((__m128i*)ctx.v8.u32, _mm_set1_epi32(int(0x0)));
	// vmsum3fp128 v29,v2,v11
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v29.f32, _mm_dp_ps(_mm_load_ps(ctx.v2.f32), _mm_load_ps(ctx.v11.f32), 0xEF));
	// addi r28,r1,100
	ctx.r28.s64 = ctx.r1.s64 + 100;
	// addi r27,r1,116
	ctx.r27.s64 = ctx.r1.s64 + 116;
	// addi r26,r1,96
	ctx.r26.s64 = ctx.r1.s64 + 96;
	// vor v4,v8,v8
	_mm_store_si128((__m128i*)ctx.v4.u8, _mm_load_si128((__m128i*)ctx.v8.u8));
	// addi r9,r9,80
	ctx.r9.s64 = ctx.r9.s64 + 80;
	// fmuls f11,f13,f12
	ctx.fpscr.disableFlushModeUnconditional();
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f12.f64));
	// stfs f11,120(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// fmuls f10,f0,f12
	ctx.f10.f64 = double(float(ctx.f0.f64 * ctx.f12.f64));
	// stfs f10,140(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// lvx128 v9,r11,r16
	simd::store_shuffled(ctx.v9, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r16.u32) & ~0xF), VectorMaskL));
	// vor v3,v8,v8
	_mm_store_si128((__m128i*)ctx.v3.u8, _mm_load_si128((__m128i*)ctx.v8.u8));
	// lvlx v28,0,r6
	temp.u32 = ctx.r6.u32;
	_mm_store_si128((__m128i*)ctx.v28.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx v27,0,r5
	temp.u32 = ctx.r5.u32;
	_mm_store_si128((__m128i*)ctx.v27.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw v26,v28,0
	_mm_store_si128((__m128i*)ctx.v26.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v28.u32), 0xFF));
	// vspltw v25,v27,0
	_mm_store_si128((__m128i*)ctx.v25.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v27.u32), 0xFF));
	// vmulfp128 v24,v9,v26
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v24.f32, _mm_mul_ps(_mm_load_ps(ctx.v9.f32), _mm_load_ps(ctx.v26.f32)));
	// vmulfp128 v13,v13,v25
	_mm_store_ps(ctx.v13.f32, _mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v25.f32)));
	// vpermwi128 v23,v24,135
	_mm_store_si128((__m128i*)ctx.v23.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v24.u32), 0x78));
	// stvx128 v24,r0,r3
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v24.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// vpermwi128 v22,v24,99
	_mm_store_si128((__m128i*)ctx.v22.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v24.u32), 0x9C));
	// stvx128 v13,r0,r4
	_mm_store_si128((__m128i*)(base + ((ctx.r4.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// vpermwi128 v21,v13,135
	_mm_store_si128((__m128i*)ctx.v21.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v13.u32), 0x78));
	// vpermwi128 v20,v13,99
	_mm_store_si128((__m128i*)ctx.v20.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v13.u32), 0x9C));
	// vmulfp128 v19,v23,v12
	_mm_store_ps(ctx.v19.f32, _mm_mul_ps(_mm_load_ps(ctx.v23.f32), _mm_load_ps(ctx.v12.f32)));
	// vmulfp128 v18,v22,v10
	_mm_store_ps(ctx.v18.f32, _mm_mul_ps(_mm_load_ps(ctx.v22.f32), _mm_load_ps(ctx.v10.f32)));
	// vmulfp128 v17,v21,v12
	_mm_store_ps(ctx.v17.f32, _mm_mul_ps(_mm_load_ps(ctx.v21.f32), _mm_load_ps(ctx.v12.f32)));
	// vmulfp128 v16,v20,v10
	_mm_store_ps(ctx.v16.f32, _mm_mul_ps(_mm_load_ps(ctx.v20.f32), _mm_load_ps(ctx.v10.f32)));
	// vsubfp v15,v18,v19
	_mm_store_ps(ctx.v15.f32, _mm_sub_ps(_mm_load_ps(ctx.v18.f32), _mm_load_ps(ctx.v19.f32)));
	// vsubfp v14,v16,v17
	_mm_store_ps(ctx.v14.f32, _mm_sub_ps(_mm_load_ps(ctx.v16.f32), _mm_load_ps(ctx.v17.f32)));
	// vmsum3fp128 v63,v15,v15
	_mm_store_ps(ctx.v63.f32, _mm_dp_ps(_mm_load_ps(ctx.v15.f32), _mm_load_ps(ctx.v15.f32), 0xEF));
	// vmsum3fp128 v62,v14,v14
	_mm_store_ps(ctx.v62.f32, _mm_dp_ps(_mm_load_ps(ctx.v14.f32), _mm_load_ps(ctx.v14.f32), 0xEF));
	// vrsqrtefp128 v12,v63
	_mm_store_ps(ctx.v12.f32, _mm_div_ps(_mm_set1_ps(1), _mm_sqrt_ps(_mm_load_ps(ctx.v63.f32))));
	// vmulfp128 v6,v63,v0
	_mm_store_ps(ctx.v6.f32, _mm_mul_ps(_mm_load_ps(ctx.v63.f32), _mm_load_ps(ctx.v0.f32)));
	// vrsqrtefp128 v13,v62
	_mm_store_ps(ctx.v13.f32, _mm_div_ps(_mm_set1_ps(1), _mm_sqrt_ps(_mm_load_ps(ctx.v62.f32))));
	// vmulfp128 v5,v62,v0
	_mm_store_ps(ctx.v5.f32, _mm_mul_ps(_mm_load_ps(ctx.v62.f32), _mm_load_ps(ctx.v0.f32)));
	// vcmpeqfp128 v31,v8,v63
	_mm_store_ps(ctx.v31.f32, _mm_cmpeq_ps(_mm_load_ps(ctx.v8.f32), _mm_load_ps(ctx.v63.f32)));
	// vcmpeqfp128 v30,v8,v62
	_mm_store_ps(ctx.v30.f32, _mm_cmpeq_ps(_mm_load_ps(ctx.v8.f32), _mm_load_ps(ctx.v62.f32)));
	// vmulfp128 v9,v12,v12
	_mm_store_ps(ctx.v9.f32, _mm_mul_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v12.f32)));
	// vmulfp128 v7,v13,v13
	_mm_store_ps(ctx.v7.f32, _mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v13.f32)));
	// vnmsubfp v1,v6,v9,v0
	_mm_store_ps(ctx.v1.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(ctx.v6.f32), _mm_load_ps(ctx.v9.f32)), _mm_load_ps(ctx.v0.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// vnmsubfp v10,v5,v7,v0
	_mm_store_ps(ctx.v10.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(ctx.v5.f32), _mm_load_ps(ctx.v7.f32)), _mm_load_ps(ctx.v0.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// vmaddfp v12,v12,v1,v12
	_mm_store_ps(ctx.v12.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v1.f32)), _mm_load_ps(ctx.v12.f32)));
	// vmaddfp v13,v13,v10,v13
	_mm_store_ps(ctx.v13.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v10.f32)), _mm_load_ps(ctx.v13.f32)));
	// vmulfp128 v10,v12,v12
	_mm_store_ps(ctx.v10.f32, _mm_mul_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v12.f32)));
	// vmulfp128 v9,v13,v13
	_mm_store_ps(ctx.v9.f32, _mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v13.f32)));
	// vnmsubfp v8,v6,v10,v0
	_mm_store_ps(ctx.v8.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(ctx.v6.f32), _mm_load_ps(ctx.v10.f32)), _mm_load_ps(ctx.v0.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// vnmsubfp v10,v5,v9,v0
	_mm_store_ps(ctx.v10.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(ctx.v5.f32), _mm_load_ps(ctx.v9.f32)), _mm_load_ps(ctx.v0.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// vmaddfp v0,v12,v8,v12
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v8.f32)), _mm_load_ps(ctx.v12.f32)));
	// vmaddfp v13,v13,v10,v13
	_mm_store_ps(ctx.v13.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v10.f32)), _mm_load_ps(ctx.v13.f32)));
	// vsel v12,v0,v4,v31
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v31.u8), _mm_load_si128((__m128i*)ctx.v0.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v31.u8), _mm_load_si128((__m128i*)ctx.v4.u8))));
	// vsel v0,v13,v3,v30
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v30.u8), _mm_load_si128((__m128i*)ctx.v13.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v30.u8), _mm_load_si128((__m128i*)ctx.v3.u8))));
	// vmulfp128 v61,v63,v12
	_mm_store_ps(ctx.v61.f32, _mm_mul_ps(_mm_load_ps(ctx.v63.f32), _mm_load_ps(ctx.v12.f32)));
	// vmulfp128 v60,v62,v0
	_mm_store_ps(ctx.v60.f32, _mm_mul_ps(_mm_load_ps(ctx.v62.f32), _mm_load_ps(ctx.v0.f32)));
	// stvewx128 v60,r0,r28
	ea = (ctx.r28.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v60.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v61,r0,r27
	ea = (ctx.r27.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v61.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx v29,r0,r26
	ea = (ctx.r26.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v29.u32[3 - ((ea & 0xF) >> 2)]);
	// lfs f4,116(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f4.f64 = double(temp.f32);
	// lfs f8,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,160(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 160);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f5,f7,f6
	ctx.f5.f64 = double(float(ctx.f7.f64 * ctx.f6.f64));
	// lfs f9,160(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 160);
	ctx.f9.f64 = double(temp.f32);
	// fmadds f3,f9,f4,f5
	ctx.f3.f64 = double(float(ctx.f9.f64 * ctx.f4.f64 + ctx.f5.f64));
	// lwz r6,0(r21)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// fadds f2,f3,f8
	ctx.f2.f64 = double(float(ctx.f3.f64 + ctx.f8.f64));
	// stfs f2,580(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 580, temp.u32);
	// lwz r5,0(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// lwz r27,0(r7)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// lwz r26,0(r8)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// lwz r28,8(r6)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// stw r27,512(r1)
	PPC_STORE_U32(ctx.r1.u32 + 512, ctx.r27.u32);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// stw r28,516(r1)
	PPC_STORE_U32(ctx.r1.u32 + 516, ctx.r28.u32);
	// lfs f1,16(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 16);
	ctx.f1.f64 = double(temp.f32);
	// lfs f0,16(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// fadds f13,f0,f1
	ctx.f13.f64 = double(float(ctx.f0.f64 + ctx.f1.f64));
	// stfs f13,532(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 532, temp.u32);
	// stvx128 v2,r0,r25
	_mm_store_si128((__m128i*)(base + ((ctx.r25.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v2.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stw r9,576(r1)
	PPC_STORE_U32(ctx.r1.u32 + 576, ctx.r9.u32);
	// lwz r4,0(r26)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// lwz r11,44(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 44);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82E20250;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,528(r1)
	PPC_STORE_U32(ctx.r1.u32 + 528, ctx.r3.u32);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// stw r3,524(r1)
	PPC_STORE_U32(ctx.r1.u32 + 524, ctx.r3.u32);
	// bl 0x82d2d090
	ctx.lr = 0x82E20260;
	sub_82D2D090(ctx, base);
	// rlwinm r11,r25,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 4) & 0xFFFFFFF0;
	// lwz r4,0(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r10,r11,127
	ctx.r10.s64 = ctx.r11.s64 + 127;
	// rlwinm r11,r10,0,0,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFF80;
	// add r9,r11,r4
	ctx.r9.u64 = ctx.r11.u64 + ctx.r4.u64;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// stw r4,520(r1)
	PPC_STORE_U32(ctx.r1.u32 + 520, ctx.r4.u32);
	// lwz r8,0(r26)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// lwz r7,48(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 48);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x82E20290;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lfs f0,620(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 620);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,160(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 160);
	ctx.f12.f64 = double(temp.f32);
	// addi r6,r1,800
	ctx.r6.s64 = ctx.r1.s64 + 800;
	// fmuls f11,f12,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// addi r5,r1,816
	ctx.r5.s64 = ctx.r1.s64 + 816;
	// addi r4,r1,784
	ctx.r4.s64 = ctx.r1.s64 + 784;
	// lfs f10,160(r28)
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 160);
	ctx.f10.f64 = double(temp.f32);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// lfs f13,636(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 636);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f9,f10,f13
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// addi r11,r1,1072
	ctx.r11.s64 = ctx.r1.s64 + 1072;
	// lvx128 v59,r0,r6
	simd::store_shuffled(ctx.v59, simd::load_and_shuffle(base + ((ctx.r6.u32) & ~0xF), VectorMaskL));
	// addi r10,r1,560
	ctx.r10.s64 = ctx.r1.s64 + 560;
	// lvx128 v58,r0,r5
	simd::store_shuffled(ctx.v58, simd::load_and_shuffle(base + ((ctx.r5.u32) & ~0xF), VectorMaskL));
	// addi r9,r1,544
	ctx.r9.s64 = ctx.r1.s64 + 544;
	// lvx128 v56,r0,r4
	simd::store_shuffled(ctx.v56, simd::load_and_shuffle(base + ((ctx.r4.u32) & ~0xF), VectorMaskL));
	// lwz r8,520(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 520);
	// lvx128 v0,r0,r3
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r3.u32) & ~0xF), VectorMaskL));
	// vmsum3fp128 v57,v59,v0
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v57.f32, _mm_dp_ps(_mm_load_ps(ctx.v59.f32), _mm_load_ps(ctx.v0.f32), 0xEF));
	// lvx128 v53,r0,r11
	simd::store_shuffled(ctx.v53, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// vmsum3fp128 v55,v58,v0
	_mm_store_ps(ctx.v55.f32, _mm_dp_ps(_mm_load_ps(ctx.v58.f32), _mm_load_ps(ctx.v0.f32), 0xEF));
	// stvx128 v53,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v53.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// fmuls f8,f11,f0
	ctx.fpscr.disableFlushModeUnconditional();
	ctx.f8.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// vmsum3fp128 v54,v56,v0
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v54.f32, _mm_dp_ps(_mm_load_ps(ctx.v56.f32), _mm_load_ps(ctx.v0.f32), 0xEF));
	// lvx128 v0,r0,r19
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r19.u32) & ~0xF), VectorMaskL));
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// fmadds f0,f9,f13,f8
	ctx.fpscr.disableFlushModeUnconditional();
	ctx.f0.f64 = double(float(ctx.f9.f64 * ctx.f13.f64 + ctx.f8.f64));
	// stfs f0,536(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 536, temp.u32);
	// vmrghw128 v52,v57,v0
	_mm_store_si128((__m128i*)ctx.v52.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), _mm_load_si128((__m128i*)ctx.v57.u32)));
	// vmrghw128 v51,v54,v55
	_mm_store_si128((__m128i*)ctx.v51.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v55.u32), _mm_load_si128((__m128i*)ctx.v54.u32)));
	// fadds f7,f0,f15
	ctx.f7.f64 = double(float(ctx.f0.f64 + ctx.f15.f64));
	// vmrghw128 v50,v51,v52
	_mm_store_si128((__m128i*)ctx.v50.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v52.u32), _mm_load_si128((__m128i*)ctx.v51.u32)));
	// stvx128 v50,r0,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v50.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// fdivs f6,f23,f7
	ctx.f6.f64 = double(float(ctx.f23.f64 / ctx.f7.f64));
	// stfs f6,540(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 540, temp.u32);
	// beq cr6,0x82e2036c
	if (ctx.cr6.eq) goto loc_82E2036C;
	// stfs f23,736(r1)
	temp.f32 = float(ctx.f23.f64);
	PPC_STORE_U32(ctx.r1.u32 + 736, temp.u32);
	// addi r5,r1,736
	ctx.r5.s64 = ctx.r1.s64 + 736;
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// addi r3,r1,512
	ctx.r3.s64 = ctx.r1.s64 + 512;
	// bl 0x82e1e438
	ctx.lr = 0x82E20334;
	sub_82E1E438(ctx, base);
	// lwz r28,520(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 520);
	// bl 0x82d2d090
	ctx.lr = 0x82E2033C;
	sub_82D2D090(ctx, base);
	// stw r28,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r28.u32);
	// lfs f0,736(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 736);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f23
	ctx.cr6.compare(ctx.f0.f64, ctx.f23.f64);
	// bge cr6,0x82e2036c
	if (!ctx.cr6.lt) goto loc_82E2036C;
	// addi r5,r1,752
	ctx.r5.s64 = ctx.r1.s64 + 752;
	// addi r4,r1,448
	ctx.r4.s64 = ctx.r1.s64 + 448;
	// addi r3,r1,400
	ctx.r3.s64 = ctx.r1.s64 + 400;
	// bl 0x82d2e210
	ctx.lr = 0x82E2035C;
	sub_82D2E210(ctx, base);
	// addi r11,r1,400
	ctx.r11.s64 = ctx.r1.s64 + 400;
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// lvx128 v0,r0,r11
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// stvx128 v0,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
loc_82E2036C:
	// lfs f0,108(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	ctx.f0.f64 = double(temp.f32);
loc_82E20370:
	// fcmpu cr6,f18,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f18.f64, ctx.f0.f64);
	// bge cr6,0x82e203c8
	if (!ctx.cr6.lt) goto loc_82E203C8;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,5152(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5152);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// fcmpu cr6,f18,f0
	ctx.cr6.compare(ctx.f18.f64, ctx.f0.f64);
	// ble cr6,0x82e20394
	if (!ctx.cr6.gt) goto loc_82E20394;
	// fmr f0,f18
	ctx.f0.f64 = ctx.f18.f64;
	// b 0x82e203c4
	goto loc_82E203C4;
loc_82E20394:
	// lwz r11,0(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// addi r8,r1,352
	ctx.r8.s64 = ctx.r1.s64 + 352;
	// lwz r10,0(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// addi r6,r1,160
	ctx.r6.s64 = ctx.r1.s64 + 160;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// lwz r4,8(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r3,8(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// bl 0x82e1dff8
	ctx.lr = 0x82E203BC;
	sub_82E1DFF8(ctx, base);
	// fneg f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = ctx.f1.u64 ^ 0x8000000000000000;
	// fsel f0,f0,f1,f16
	ctx.f0.f64 = ctx.f0.f64 >= 0.0 ? ctx.f1.f64 : ctx.f16.f64;
loc_82E203C4:
	// stfs f0,108(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
loc_82E203C8:
	// li r10,3
	ctx.r10.s64 = 3;
	// lfs f13,12(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// addi r11,r1,684
	ctx.r11.s64 = ctx.r1.s64 + 684;
	// fmuls f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f12,108(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 108, temp.u32);
	// stfs f16,688(r1)
	temp.f32 = float(ctx.f16.f64);
	PPC_STORE_U32(ctx.r1.u32 + 688, temp.u32);
	// stfs f16,692(r1)
	temp.f32 = float(ctx.f16.f64);
	PPC_STORE_U32(ctx.r1.u32 + 692, temp.u32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82E203E8:
	// stw r18,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r18.u32);
	// stw r18,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r18.u32);
	// stw r18,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r18.u32);
	// stwu r18,16(r11)
	ea = 16 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r18.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x82e203e8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82E203E8;
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// addi r4,r1,416
	ctx.r4.s64 = ctx.r1.s64 + 416;
	// addi r3,r1,848
	ctx.r3.s64 = ctx.r1.s64 + 848;
	// lfs f0,22636(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 22636);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,704(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 704, temp.u32);
	// bl 0x82e185f0
	ctx.lr = 0x82E20414;
	sub_82E185F0(ctx, base);
	// addi r10,r1,108
	ctx.r10.s64 = ctx.r1.s64 + 108;
	// addi r8,r1,688
	ctx.r8.s64 = ctx.r1.s64 + 688;
	// lwz r3,16(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + 16);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r10,r1,416
	ctx.r10.s64 = ctx.r1.s64 + 416;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// addi r9,r1,144
	ctx.r9.s64 = ctx.r1.s64 + 144;
	// mr r7,r14
	ctx.r7.u64 = ctx.r14.u64;
	// lwz r6,0(r22)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// lwz r5,0(r21)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r4,0(r24)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// lwz r8,28(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82E20454;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82e20500
	if (!ctx.cr6.eq) goto loc_82E20500;
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// lfs f13,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,28856(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 28856);
	ctx.f0.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bne cr6,0x82e20478
	if (!ctx.cr6.eq) goto loc_82E20478;
	// mr r11,r18
	ctx.r11.u64 = ctx.r18.u64;
loc_82E20478:
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82e204a0
	if (ctx.cr6.eq) goto loc_82E204A0;
	// lwz r3,16(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + 16);
	// addi r5,r14,12368
	ctx.r5.s64 = ctx.r14.s64 + 12368;
	// lwz r4,4(r14)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r14.u32 + 4);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82E204A0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82E204A0:
	// addi r9,r1,144
	ctx.r9.s64 = ctx.r1.s64 + 144;
	// lfs f0,108(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	ctx.f0.f64 = double(temp.f32);
	// addi r7,r1,160
	ctx.r7.s64 = ctx.r1.s64 + 160;
	// stfs f0,12340(r14)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r14.u32 + 12340, temp.u32);
	// addi r11,r14,12304
	ctx.r11.s64 = ctx.r14.s64 + 12304;
	// li r6,16
	ctx.r6.s64 = 16;
	// li r8,6
	ctx.r8.s64 = 6;
	// addi r10,r1,680
	ctx.r10.s64 = ctx.r1.s64 + 680;
	// lvx128 v0,r0,r9
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// lvx128 v13,r0,r7
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r7.u32) & ~0xF), VectorMaskL));
	// addi r9,r14,12360
	ctx.r9.s64 = ctx.r14.s64 + 12360;
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v13,r11,r6
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r6.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stfs f31,0(r29)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r29.u32 + 0, temp.u32);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_82E204DC:
	// ldu r11,8(r10)
	ea = 8 + ctx.r10.u32;
	ctx.r11.u64 = PPC_LOAD_U64(ea);
	ctx.r10.u32 = ea;
	// stdu r11,8(r9)
	ea = 8 + ctx.r9.u32;
	PPC_STORE_U64(ea, ctx.r11.u64);
	ctx.r9.u32 = ea;
	// bdnz 0x82e204dc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82E204DC;
	// addi r11,r1,416
	ctx.r11.s64 = ctx.r1.s64 + 416;
	// addi r10,r14,12352
	ctx.r10.s64 = ctx.r14.s64 + 12352;
	// ld r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// ld r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// std r9,12352(r14)
	PPC_STORE_U64(ctx.r14.u32 + 12352, ctx.r9.u64);
	// std r8,12360(r14)
	PPC_STORE_U64(ctx.r14.u32 + 12360, ctx.r8.u64);
loc_82E20500:
	// lwz r11,264(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 264);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82e20518
	if (ctx.cr6.eq) goto loc_82E20518;
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// bl 0x82d2d090
	ctx.lr = 0x82E20514;
	sub_82D2D090(ctx, base);
	// stw r31,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r31.u32);
loc_82E20518:
	// lwz r11,868(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 868);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82e20530
	if (ctx.cr6.eq) goto loc_82E20530;
	// mr r4,r17
	ctx.r4.u64 = ctx.r17.u64;
	// addi r3,r1,848
	ctx.r3.s64 = ctx.r1.s64 + 848;
	// bl 0x82e185f0
	ctx.lr = 0x82E20530;
	sub_82E185F0(ctx, base);
loc_82E20530:
	// addi r1,r1,1840
	ctx.r1.s64 = ctx.r1.s64 + 1840;
	// li r0,-320
	ctx.r0.s64 = -320;
	// lvx128 v127,r1,r0
	simd::store_shuffled(ctx.v127, simd::load_and_shuffle(base + ((ctx.r1.u32 + ctx.r0.u32) & ~0xF), VectorMaskL));
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x82fa8d3c
	ctx.lr = 0x82E20544;
	__restfpr_14(ctx, base);
	// b 0x82fa7690
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E20548"))) PPC_WEAK_FUNC(sub_82E20548);
PPC_FUNC_IMPL(__imp__sub_82E20548) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E2054C"))) PPC_WEAK_FUNC(sub_82E2054C);
PPC_FUNC_IMPL(__imp__sub_82E2054C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E20550"))) PPC_WEAK_FUNC(sub_82E20550);
PPC_FUNC_IMPL(__imp__sub_82E20550) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,15929
	ctx.r11.s64 = 1043922944;
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// ori r9,r11,45459
	ctx.r9.u64 = ctx.r11.u64 | 45459;
	// mullw r8,r3,r9
	ctx.r8.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r9.s32);
	// lfs f0,14232(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 14232);
	ctx.f0.f64 = double(temp.f32);
	// subfic r7,r8,12345
	ctx.xer.ca = ctx.r8.u32 <= 12345;
	ctx.r7.s64 = 12345 - ctx.r8.s64;
	// clrlwi r5,r7,1
	ctx.r5.u64 = ctx.r7.u32 & 0x7FFFFFFF;
	// std r5,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r5.u64);
	// lfd f13,-16(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fmuls f1,f11,f0
	ctx.f1.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E20584"))) PPC_WEAK_FUNC(sub_82E20584);
PPC_FUNC_IMPL(__imp__sub_82E20584) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E20588"))) PPC_WEAK_FUNC(sub_82E20588);
PPC_FUNC_IMPL(__imp__sub_82E20588) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E2058C"))) PPC_WEAK_FUNC(sub_82E2058C);
PPC_FUNC_IMPL(__imp__sub_82E2058C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E20590"))) PPC_WEAK_FUNC(sub_82E20590);
PPC_FUNC_IMPL(__imp__sub_82E20590) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,15929
	ctx.r11.s64 = 1043922944;
	// fsubs f13,f2,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f2.f64 - ctx.f1.f64));
	// lis r10,-32247
	ctx.r10.s64 = -2113339392;
	// ori r9,r11,45459
	ctx.r9.u64 = ctx.r11.u64 | 45459;
	// mullw r8,r3,r9
	ctx.r8.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r9.s32);
	// lfs f0,14232(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 14232);
	ctx.f0.f64 = double(temp.f32);
	// subfic r7,r8,12345
	ctx.xer.ca = ctx.r8.u32 <= 12345;
	ctx.r7.s64 = 12345 - ctx.r8.s64;
	// clrlwi r4,r7,1
	ctx.r4.u64 = ctx.r7.u32 & 0x7FFFFFFF;
	// std r4,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r4.u64);
	// lfd f12,-16(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// frsp f10,f11
	ctx.f10.f64 = double(float(ctx.f11.f64));
	// fmuls f9,f10,f0
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// fadds f8,f9,f1
	ctx.f8.f64 = double(float(ctx.f9.f64 + ctx.f1.f64));
	// fadds f7,f9,f1
	ctx.f7.f64 = double(float(ctx.f9.f64 + ctx.f1.f64));
	// fadds f6,f9,f1
	ctx.f6.f64 = double(float(ctx.f9.f64 + ctx.f1.f64));
	// fmuls f5,f8,f13
	ctx.f5.f64 = double(float(ctx.f8.f64 * ctx.f13.f64));
	// stfs f5,0(r6)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r6.u32 + 0, temp.u32);
	// fmuls f4,f7,f13
	ctx.f4.f64 = double(float(ctx.f7.f64 * ctx.f13.f64));
	// stfs f4,4(r6)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r6.u32 + 4, temp.u32);
	// fmuls f3,f6,f13
	ctx.f3.f64 = double(float(ctx.f6.f64 * ctx.f13.f64));
	// stfs f3,8(r6)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r6.u32 + 8, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E205EC"))) PPC_WEAK_FUNC(sub_82E205EC);
PPC_FUNC_IMPL(__imp__sub_82E205EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E205F0"))) PPC_WEAK_FUNC(sub_82E205F0);
PPC_FUNC_IMPL(__imp__sub_82E205F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa766c
	ctx.lr = 0x82E205F8;
	__savegprlr_25(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,84(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 84);
	// addi r29,r5,16
	ctx.r29.s64 = ctx.r5.s64 + 16;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,56(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82E20624;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r9,-32246
	ctx.r9.s64 = -2113273856;
	// lvx128 v13,r0,r25
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r25.u32) & ~0xF), VectorMaskL));
	// addi r28,r31,16
	ctx.r28.s64 = ctx.r31.s64 + 16;
	// lvx128 v9,r0,r31
	simd::store_shuffled(ctx.v9, simd::load_and_shuffle(base + ((ctx.r31.u32) & ~0xF), VectorMaskL));
	// addi r8,r9,544
	ctx.r8.s64 = ctx.r9.s64 + 544;
	// lwz r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// addi r27,r31,32
	ctx.r27.s64 = ctx.r31.s64 + 32;
	// lis r7,-32237
	ctx.r7.s64 = -2112684032;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lvx128 v11,r0,r28
	simd::store_shuffled(ctx.v11, simd::load_and_shuffle(base + ((ctx.r28.u32) & ~0xF), VectorMaskL));
	// addi r3,r7,21904
	ctx.r3.s64 = ctx.r7.s64 + 21904;
	// lvx128 v0,r0,r8
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r8.u32) & ~0xF), VectorMaskL));
	// addi r26,r30,32
	ctx.r26.s64 = ctx.r30.s64 + 32;
	// vxor v12,v13,v0
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_xor_si128(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// lvx128 v10,r0,r27
	simd::store_shuffled(ctx.v10, simd::load_and_shuffle(base + ((ctx.r27.u32) & ~0xF), VectorMaskL));
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// vmsum3fp128 v8,v11,v12
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v8.f32, _mm_dp_ps(_mm_load_ps(ctx.v11.f32), _mm_load_ps(ctx.v12.f32), 0xEF));
	// vmsum3fp128 v7,v10,v12
	_mm_store_ps(ctx.v7.f32, _mm_dp_ps(_mm_load_ps(ctx.v10.f32), _mm_load_ps(ctx.v12.f32), 0xEF));
	// vmsum3fp128 v6,v9,v12
	_mm_store_ps(ctx.v6.f32, _mm_dp_ps(_mm_load_ps(ctx.v9.f32), _mm_load_ps(ctx.v12.f32), 0xEF));
	// lvx128 v0,r0,r3
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r3.u32) & ~0xF), VectorMaskL));
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// vmrghw v5,v8,v0
	_mm_store_si128((__m128i*)ctx.v5.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), _mm_load_si128((__m128i*)ctx.v8.u32)));
	// vmrghw v4,v6,v7
	_mm_store_si128((__m128i*)ctx.v4.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v7.u32), _mm_load_si128((__m128i*)ctx.v6.u32)));
	// vmrghw v3,v4,v5
	_mm_store_si128((__m128i*)ctx.v3.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v5.u32), _mm_load_si128((__m128i*)ctx.v4.u32)));
	// stvx128 v3,r0,r6
	_mm_store_si128((__m128i*)(base + ((ctx.r6.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v3.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,56(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 56);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82E2069C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lvx128 v2,r0,r26
	simd::store_shuffled(ctx.v2, simd::load_and_shuffle(base + ((ctx.r26.u32) & ~0xF), VectorMaskL));
	// li r8,48
	ctx.r8.s64 = 48;
	// vspltw v1,v2,0
	_mm_store_si128((__m128i*)ctx.v1.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v2.u32), 0xFF));
	// lvx128 v31,r0,r31
	simd::store_shuffled(ctx.v31, simd::load_and_shuffle(base + ((ctx.r31.u32) & ~0xF), VectorMaskL));
	// vspltw v12,v2,1
	_mm_store_si128((__m128i*)ctx.v12.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v2.u32), 0xAA));
	// lvx128 v0,r0,r28
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r28.u32) & ~0xF), VectorMaskL));
	// vspltw v10,v2,2
	_mm_store_si128((__m128i*)ctx.v10.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v2.u32), 0x55));
	// lvx128 v11,r0,r27
	simd::store_shuffled(ctx.v11, simd::load_and_shuffle(base + ((ctx.r27.u32) & ~0xF), VectorMaskL));
	// lvx128 v29,r0,r29
	simd::store_shuffled(ctx.v29, simd::load_and_shuffle(base + ((ctx.r29.u32) & ~0xF), VectorMaskL));
	// vmulfp128 v13,v31,v1
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v13.f32, _mm_mul_ps(_mm_load_ps(ctx.v31.f32), _mm_load_ps(ctx.v1.f32)));
	// lvx128 v30,r31,r8
	simd::store_shuffled(ctx.v30, simd::load_and_shuffle(base + ((ctx.r31.u32 + ctx.r8.u32) & ~0xF), VectorMaskL));
	// vmaddfp v0,v0,v12,v13
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v12.f32)), _mm_load_ps(ctx.v13.f32)));
	// vmaddfp v0,v11,v10,v0
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v11.f32), _mm_load_ps(ctx.v10.f32)), _mm_load_ps(ctx.v0.f32)));
	// vaddfp v28,v0,v30
	_mm_store_ps(ctx.v28.f32, _mm_add_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v30.f32)));
	// vsubfp v27,v29,v28
	_mm_store_ps(ctx.v27.f32, _mm_sub_ps(_mm_load_ps(ctx.v29.f32), _mm_load_ps(ctx.v28.f32)));
	// stvx128 v27,r0,r30
	_mm_store_si128((__m128i*)(base + ((ctx.r30.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v27.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82fa76bc
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E206E4"))) PPC_WEAK_FUNC(sub_82E206E4);
PPC_FUNC_IMPL(__imp__sub_82E206E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E206E8"))) PPC_WEAK_FUNC(sub_82E206E8);
PPC_FUNC_IMPL(__imp__sub_82E206E8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,108(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 108);
	// li r10,16
	ctx.r10.s64 = 16;
	// lwz r9,104(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	// lvx128 v0,r0,r4
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r4.u32) & ~0xF), VectorMaskL));
	// rlwinm r8,r11,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// li r7,32
	ctx.r7.s64 = 32;
	// stvx128 v0,r9,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r9.u32 + ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lwz r5,96(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// lvx128 v13,r4,r10
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r4.u32 + ctx.r10.u32) & ~0xF), VectorMaskL));
	// stvx128 v13,r5,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r5.u32 + ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lwz r11,100(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// lvx128 v12,r4,r7
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((ctx.r4.u32 + ctx.r7.u32) & ~0xF), VectorMaskL));
	// stvx128 v12,r11,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stw r6,108(r3)
	PPC_STORE_U32(ctx.r3.u32 + 108, ctx.r6.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E20728"))) PPC_WEAK_FUNC(sub_82E20728);
PPC_FUNC_IMPL(__imp__sub_82E20728) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x82E20730;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,16(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 16);
	// lvx128 v0,r0,r6
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r6.u32) & ~0xF), VectorMaskL));
	// lwz r10,32(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 32);
	// lvx128 v12,r0,r5
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((ctx.r5.u32) & ~0xF), VectorMaskL));
	// lwz r9,48(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 48);
	// lis r8,-32237
	ctx.r8.s64 = -2112684032;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// vspltisw v11,0
	_mm_store_si128((__m128i*)ctx.v11.u32, _mm_set1_epi32(int(0x0)));
	// addi r6,r8,21904
	ctx.r6.s64 = ctx.r8.s64 + 21904;
	// lvx128 v10,r0,r11
	simd::store_shuffled(ctx.v10, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// lvx128 v9,r0,r10
	simd::store_shuffled(ctx.v9, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// vsubfp v8,v0,v10
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v8.f32, _mm_sub_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v10.f32)));
	// lvx128 v7,r0,r9
	simd::store_shuffled(ctx.v7, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// vsubfp v6,v0,v9
	_mm_store_ps(ctx.v6.f32, _mm_sub_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v9.f32)));
	// vsubfp v5,v0,v7
	_mm_store_ps(ctx.v5.f32, _mm_sub_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v7.f32)));
	// li r7,64
	ctx.r7.s64 = 64;
	// lvx128 v0,r0,r6
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r6.u32) & ~0xF), VectorMaskL));
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// lis r5,-31960
	ctx.r5.s64 = -2094530560;
	// li r11,224
	ctx.r11.s64 = 224;
	// lvx128 v4,r3,r7
	simd::store_shuffled(ctx.v4, simd::load_and_shuffle(base + ((ctx.r3.u32 + ctx.r7.u32) & ~0xF), VectorMaskL));
	// addi r3,r5,-21664
	ctx.r3.s64 = ctx.r5.s64 + -21664;
	// vmsum3fp128 v3,v8,v12
	_mm_store_ps(ctx.v3.f32, _mm_dp_ps(_mm_load_ps(ctx.v8.f32), _mm_load_ps(ctx.v12.f32), 0xEF));
	// lvx128 v13,r3,r11
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r3.u32 + ctx.r11.u32) & ~0xF), VectorMaskL));
	// vmsum3fp128 v2,v6,v12
	_mm_store_ps(ctx.v2.f32, _mm_dp_ps(_mm_load_ps(ctx.v6.f32), _mm_load_ps(ctx.v12.f32), 0xEF));
	// vmsum3fp128 v1,v5,v12
	_mm_store_ps(ctx.v1.f32, _mm_dp_ps(_mm_load_ps(ctx.v5.f32), _mm_load_ps(ctx.v12.f32), 0xEF));
	// vmrghw v31,v2,v0
	_mm_store_si128((__m128i*)ctx.v31.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), _mm_load_si128((__m128i*)ctx.v2.u32)));
	// vmrghw v30,v3,v1
	_mm_store_si128((__m128i*)ctx.v30.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v1.u32), _mm_load_si128((__m128i*)ctx.v3.u32)));
	// vmrghw v29,v30,v31
	_mm_store_si128((__m128i*)ctx.v29.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v31.u32), _mm_load_si128((__m128i*)ctx.v30.u32)));
	// vcmpgtfp v28,v4,v29
	_mm_store_ps(ctx.v28.f32, _mm_cmpgt_ps(_mm_load_ps(ctx.v4.f32), _mm_load_ps(ctx.v29.f32)));
	// vand v27,v28,v13
	_mm_store_si128((__m128i*)ctx.v27.u8, _mm_and_si128(_mm_load_si128((__m128i*)ctx.v28.u8), _mm_load_si128((__m128i*)ctx.v13.u8)));
	// vcmpequw. v26,v27,v11
	_mm_store_si128((__m128i*)ctx.v26.u8, _mm_cmpeq_epi32(_mm_load_si128((__m128i*)ctx.v27.u32), _mm_load_si128((__m128i*)ctx.v11.u32)));
	ctx.cr6.setFromMask(_mm_load_ps(ctx.v26.f32), 0xF);
	// mfocrf r10,2
	ctx.r10.u64 = (ctx.cr6.lt << 7) | (ctx.cr6.gt << 6) | (ctx.cr6.eq << 5) | (ctx.cr6.so << 4);
	// not r9,r10
	ctx.r9.u64 = ~ctx.r10.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// rlwinm r8,r9,0,24,24
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x80;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x82e207f8
	if (!ctx.cr6.eq) goto loc_82E207F8;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r7,r1,84
	ctx.r7.s64 = ctx.r1.s64 + 84;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e21c00
	ctx.lr = 0x82E207EC;
	sub_82E21C00(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82e20808
	if (ctx.cr6.eq) goto loc_82E20808;
loc_82E207F4:
	// li r11,3
	ctx.r11.s64 = 3;
loc_82E207F8:
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
loc_82E20808:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// addi r9,r11,100
	ctx.r9.s64 = ctx.r11.s64 + 100;
	// cmpw cr6,r9,r4
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r4.s32, ctx.xer);
	// bge cr6,0x82e20838
	if (!ctx.cr6.lt) goto loc_82E20838;
	// li r11,2
	ctx.r11.s64 = 2;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
loc_82E20838:
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// lwz r5,84(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e269f0
	ctx.lr = 0x82E20848;
	sub_82E269F0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82e207f4
	if (!ctx.cr6.eq) goto loc_82E207F4;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E20858"))) PPC_WEAK_FUNC(sub_82E20858);
PPC_FUNC_IMPL(__imp__sub_82E20858) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7668
	ctx.lr = 0x82E20860;
	__savegprlr_24(ctx, base);
	// stfd f31,-80(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -80, ctx.f31.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r11,-31960
	ctx.r11.s64 = -2094530560;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// lfs f31,5184(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5184);
	ctx.f31.f64 = double(temp.f32);
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// li r26,0
	ctx.r26.s64 = 0;
	// li r29,16
	ctx.r29.s64 = 16;
	// li r28,32
	ctx.r28.s64 = 32;
	// addi r27,r11,-21760
	ctx.r27.s64 = ctx.r11.s64 + -21760;
loc_82E20894:
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r10,104(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// lvx128 v0,r0,r11
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// stvx128 v0,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lwz r9,32(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// lwz r8,104(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// lvx128 v13,r0,r9
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// stvx128 v13,r8,r29
	_mm_store_si128((__m128i*)(base + ((ctx.r8.u32 + ctx.r29.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lwz r6,48(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	// lwz r5,104(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// lvx128 v12,r0,r6
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((ctx.r6.u32) & ~0xF), VectorMaskL));
	// stvx128 v12,r5,r28
	_mm_store_si128((__m128i*)(base + ((ctx.r5.u32 + ctx.r28.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lwz r4,104(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// addi r6,r4,32
	ctx.r6.s64 = ctx.r4.s64 + 32;
	// addi r5,r4,16
	ctx.r5.s64 = ctx.r4.s64 + 16;
	// bl 0x82dba228
	ctx.lr = 0x82E208DC;
	sub_82DBA228(ctx, base);
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// blt cr6,0x82e20900
	if (ctx.cr6.lt) goto loc_82E20900;
	// lfs f0,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// blt cr6,0x82e20900
	if (ctx.cr6.lt) goto loc_82E20900;
	// lfs f0,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bge cr6,0x82e2091c
	if (!ctx.cr6.lt) goto loc_82E2091C;
loc_82E20900:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82e26ec0
	ctx.lr = 0x82E2090C;
	sub_82E26EC0(ctx, base);
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r26,10
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 10, ctx.xer);
	// blt cr6,0x82e20894
	if (ctx.cr6.lt) goto loc_82E20894;
loc_82E2091C:
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// lis r5,-32246
	ctx.r5.s64 = -2113273856;
	// lwz r9,96(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// li r10,3
	ctx.r10.s64 = 3;
	// addi r3,r5,544
	ctx.r3.s64 = ctx.r5.s64 + 544;
	// addi r8,r1,84
	ctx.r8.s64 = ctx.r1.s64 + 84;
	// addi r7,r1,88
	ctx.r7.s64 = ctx.r1.s64 + 88;
	// lvx128 v0,r11,r29
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r29.u32) & ~0xF), VectorMaskL));
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// stvx128 v0,r0,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v13,r11,r28
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r28.u32) & ~0xF), VectorMaskL));
	// lwz r4,100(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// stvx128 v13,r0,r4
	_mm_store_si128((__m128i*)(base + ((ctx.r4.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lwz r9,32(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// lwz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// lvx128 v12,r9,r29
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((ctx.r9.u32 + ctx.r29.u32) & ~0xF), VectorMaskL));
	// stvx128 v12,r11,r29
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r29.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lwz r5,100(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// lvx128 v11,r9,r28
	simd::store_shuffled(ctx.v11, simd::load_and_shuffle(base + ((ctx.r9.u32 + ctx.r28.u32) & ~0xF), VectorMaskL));
	// stvx128 v11,r5,r29
	_mm_store_si128((__m128i*)(base + ((ctx.r5.u32 + ctx.r29.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lwz r4,48(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	// lvx128 v10,r4,r29
	simd::store_shuffled(ctx.v10, simd::load_and_shuffle(base + ((ctx.r4.u32 + ctx.r29.u32) & ~0xF), VectorMaskL));
	// lwz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// stvx128 v10,r11,r28
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r28.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v10.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lwz r9,100(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// lvx128 v9,r4,r28
	simd::store_shuffled(ctx.v9, simd::load_and_shuffle(base + ((ctx.r4.u32 + ctx.r28.u32) & ~0xF), VectorMaskL));
	// stvx128 v9,r9,r28
	_mm_store_si128((__m128i*)(base + ((ctx.r9.u32 + ctx.r28.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v9.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lwz r5,96(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// stw r10,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r10.u32);
	// lvx128 v8,r0,r5
	simd::store_shuffled(ctx.v8, simd::load_and_shuffle(base + ((ctx.r5.u32) & ~0xF), VectorMaskL));
	// lvlx v7,0,r8
	temp.u32 = ctx.r8.u32;
	_mm_store_si128((__m128i*)ctx.v7.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvx128 v13,r5,r29
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r5.u32 + ctx.r29.u32) & ~0xF), VectorMaskL));
	// lvlx v6,0,r7
	temp.u32 = ctx.r7.u32;
	_mm_store_si128((__m128i*)ctx.v6.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvx128 v10,r5,r28
	simd::store_shuffled(ctx.v10, simd::load_and_shuffle(base + ((ctx.r5.u32 + ctx.r28.u32) & ~0xF), VectorMaskL));
	// lvlx v5,0,r6
	temp.u32 = ctx.r6.u32;
	_mm_store_si128((__m128i*)ctx.v5.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw v4,v5,0
	_mm_store_si128((__m128i*)ctx.v4.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v5.u32), 0xFF));
	// vmulfp128 v12,v8,v4
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v12.f32, _mm_mul_ps(_mm_load_ps(ctx.v8.f32), _mm_load_ps(ctx.v4.f32)));
	// vspltw v11,v7,0
	_mm_store_si128((__m128i*)ctx.v11.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v7.u32), 0xFF));
	// vspltw v0,v6,0
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v6.u32), 0xFF));
	// vmaddfp v13,v13,v11,v12
	_mm_store_ps(ctx.v13.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v11.f32)), _mm_load_ps(ctx.v12.f32)));
	// vmaddfp v0,v10,v0,v13
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v10.f32), _mm_load_ps(ctx.v0.f32)), _mm_load_ps(ctx.v13.f32)));
	// stvx128 v0,r25,r29
	_mm_store_si128((__m128i*)(base + ((ctx.r25.u32 + ctx.r29.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lfs f0,64(r30)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 64);
	ctx.f0.f64 = double(temp.f32);
	// fneg f13,f0
	ctx.f13.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// stfs f13,32(r25)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r25.u32 + 32, temp.u32);
	// lvx128 v0,r0,r3
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r3.u32) & ~0xF), VectorMaskL));
	// lvx128 v3,r0,r30
	simd::store_shuffled(ctx.v3, simd::load_and_shuffle(base + ((ctx.r30.u32) & ~0xF), VectorMaskL));
	// vxor v2,v3,v0
	_mm_store_si128((__m128i*)ctx.v2.u8, _mm_xor_si128(_mm_load_si128((__m128i*)ctx.v3.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// stvx128 v2,r0,r25
	_mm_store_si128((__m128i*)(base + ((ctx.r25.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v2.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f31,-80(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// b 0x82fa76b8
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E209EC"))) PPC_WEAK_FUNC(sub_82E209EC);
PPC_FUNC_IMPL(__imp__sub_82E209EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E209F0"))) PPC_WEAK_FUNC(sub_82E209F0);
PPC_FUNC_IMPL(__imp__sub_82E209F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7674
	ctx.lr = 0x82E209F8;
	__savegprlr_27(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lvx128 v13,r0,r4
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r4.u32) & ~0xF), VectorMaskL));
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// addi r9,r11,544
	ctx.r9.s64 = ctx.r11.s64 + 544;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// lvx128 v0,r0,r9
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// vxor v12,v13,v0
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_xor_si128(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// stvx128 v12,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// bl 0x82e205f0
	ctx.lr = 0x82E20A34;
	sub_82E205F0(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82e205f0
	ctx.lr = 0x82E20A44;
	sub_82E205F0(ctx, base);
	// addi r8,r1,112
	ctx.r8.s64 = ctx.r1.s64 + 112;
	// lvx128 v11,r0,r27
	simd::store_shuffled(ctx.v11, simd::load_and_shuffle(base + ((ctx.r27.u32) & ~0xF), VectorMaskL));
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// lvx128 v9,r0,r28
	simd::store_shuffled(ctx.v9, simd::load_and_shuffle(base + ((ctx.r28.u32) & ~0xF), VectorMaskL));
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lvx128 v0,r0,r8
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r8.u32) & ~0xF), VectorMaskL));
	// vsubfp v10,v0,v11
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v10.f32, _mm_sub_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v11.f32)));
	// vmsum3fp128 v8,v10,v9
	_mm_store_ps(ctx.v8.f32, _mm_dp_ps(_mm_load_ps(ctx.v10.f32), _mm_load_ps(ctx.v9.f32), 0xEF));
	// stvewx v8,r0,r7
	ea = (ctx.r7.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v8.u32[3 - ((ea & 0xF) >> 2)]);
	// lvx128 v7,r0,r6
	simd::store_shuffled(ctx.v7, simd::load_and_shuffle(base + ((ctx.r6.u32) & ~0xF), VectorMaskL));
	// lvx128 v6,r0,r31
	simd::store_shuffled(ctx.v6, simd::load_and_shuffle(base + ((ctx.r31.u32) & ~0xF), VectorMaskL));
	// vsubfp v5,v6,v11
	_mm_store_ps(ctx.v5.f32, _mm_sub_ps(_mm_load_ps(ctx.v6.f32), _mm_load_ps(ctx.v11.f32)));
	// vmsum3fp128 v4,v5,v7
	_mm_store_ps(ctx.v4.f32, _mm_dp_ps(_mm_load_ps(ctx.v5.f32), _mm_load_ps(ctx.v7.f32), 0xEF));
	// stvewx v4,r0,r5
	ea = (ctx.r5.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v4.u32[3 - ((ea & 0xF) >> 2)]);
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x82e20ac8
	if (ctx.cr6.lt) goto loc_82E20AC8;
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
	// lwz r10,160(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// addi r9,r1,144
	ctx.r9.s64 = ctx.r1.s64 + 144;
	// stvx128 v0,r0,r31
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r8,16
	ctx.r8.s64 = 16;
	// li r7,32
	ctx.r7.s64 = 32;
	// lvx128 v0,r0,r11
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// lvx128 v13,r0,r9
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// stvx128 v0,r31,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32 + ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v13,r31,r7
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32 + ctx.r7.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stw r10,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r10.u32);
	// stfs f0,0(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x82fa76c4
	__restgprlr_27(ctx, base);
	return;
loc_82E20AC8:
	// stfs f13,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x82fa76c4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E20AD4"))) PPC_WEAK_FUNC(sub_82E20AD4);
PPC_FUNC_IMPL(__imp__sub_82E20AD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E20AD8"))) PPC_WEAK_FUNC(sub_82E20AD8);
PPC_FUNC_IMPL(__imp__sub_82E20AD8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7644
	ctx.lr = 0x82E20AE0;
	__savegprlr_15(ctx, base);
	// stfd f31,-152(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -152, ctx.f31.u64);
	// stwu r1,-800(r1)
	ea = -800 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r8,108(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 108);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r16,r5
	ctx.r16.u64 = ctx.r5.u64;
	// addi r29,r3,108
	ctx.r29.s64 = ctx.r3.s64 + 108;
	// li r28,-1
	ctx.r28.s64 = -1;
	// cmplwi cr6,r8,4
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 4, ctx.xer);
	// bgt cr6,0x82e213d0
	if (ctx.cr6.gt) goto loc_82E213D0;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// lis r10,-31960
	ctx.r10.s64 = -2094530560;
	// lis r9,-32246
	ctx.r9.s64 = -2113273856;
	// li r26,16
	ctx.r26.s64 = 16;
	// lfs f31,5184(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 5184);
	ctx.f31.f64 = double(temp.f32);
	// li r21,32
	ctx.r21.s64 = 32;
	// li r17,48
	ctx.r17.s64 = 48;
	// li r18,3
	ctx.r18.s64 = 3;
	// li r20,2
	ctx.r20.s64 = 2;
	// li r23,1
	ctx.r23.s64 = 1;
	// li r22,0
	ctx.r22.s64 = 0;
	// addi r25,r11,22016
	ctx.r25.s64 = ctx.r11.s64 + 22016;
	// addi r19,r10,-21744
	ctx.r19.s64 = ctx.r10.s64 + -21744;
	// addi r24,r9,544
	ctx.r24.s64 = ctx.r9.s64 + 544;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x82e20cbc
	if (ctx.cr6.eq) goto loc_82E20CBC;
	// bdz 0x82e20c88
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_82E20C88;
	// bdz 0x82e20c48
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_82E20C48;
	// bdz 0x82e20be4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_82E20BE4;
loc_82E20B5C:
	// lwz r11,104(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// addi r10,r1,192
	ctx.r10.s64 = ctx.r1.s64 + 192;
	// addi r9,r1,128
	ctx.r9.s64 = ctx.r1.s64 + 128;
	// addi r8,r1,112
	ctx.r8.s64 = ctx.r1.s64 + 112;
	// lvx128 v0,r11,r26
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r26.u32) & ~0xF), VectorMaskL));
	// lvx128 v13,r0,r11
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// lvx128 v12,r11,r21
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r21.u32) & ~0xF), VectorMaskL));
	// vsubfp v11,v13,v0
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v11.f32, _mm_sub_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v0.f32)));
	// vsubfp v10,v0,v12
	_mm_store_ps(ctx.v10.f32, _mm_sub_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v12.f32)));
	// vpermwi128 v9,v11,135
	_mm_store_si128((__m128i*)ctx.v9.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v11.u32), 0x78));
	// vpermwi128 v8,v10,99
	_mm_store_si128((__m128i*)ctx.v8.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v10.u32), 0x9C));
	// vpermwi128 v7,v10,135
	_mm_store_si128((__m128i*)ctx.v7.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v10.u32), 0x78));
	// vpermwi128 v6,v11,99
	_mm_store_si128((__m128i*)ctx.v6.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v11.u32), 0x9C));
	// vmulfp128 v5,v9,v8
	_mm_store_ps(ctx.v5.f32, _mm_mul_ps(_mm_load_ps(ctx.v9.f32), _mm_load_ps(ctx.v8.f32)));
	// vmulfp128 v4,v6,v7
	_mm_store_ps(ctx.v4.f32, _mm_mul_ps(_mm_load_ps(ctx.v6.f32), _mm_load_ps(ctx.v7.f32)));
	// vsubfp v0,v4,v5
	_mm_store_ps(ctx.v0.f32, _mm_sub_ps(_mm_load_ps(ctx.v4.f32), _mm_load_ps(ctx.v5.f32)));
	// vmsum3fp128 v3,v0,v0
	_mm_store_ps(ctx.v3.f32, _mm_dp_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v0.f32), 0xEF));
	// stvx128 v0,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvewx v3,r0,r9
	ea = (ctx.r9.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v3.u32[3 - ((ea & 0xF) >> 2)]);
	// lvx128 v2,r0,r11
	simd::store_shuffled(ctx.v2, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// lvx128 v1,r11,r17
	simd::store_shuffled(ctx.v1, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r17.u32) & ~0xF), VectorMaskL));
	// vsubfp v31,v1,v2
	_mm_store_ps(ctx.v31.f32, _mm_sub_ps(_mm_load_ps(ctx.v1.f32), _mm_load_ps(ctx.v2.f32)));
	// vmsum3fp128 v30,v31,v0
	_mm_store_ps(ctx.v30.f32, _mm_dp_ps(_mm_load_ps(ctx.v31.f32), _mm_load_ps(ctx.v0.f32), 0xEF));
	// stvewx v30,r0,r8
	ea = (ctx.r8.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v30.u32[3 - ((ea & 0xF) >> 2)]);
	// lfs f0,112(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,80(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,128(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f10,f13,f12
	ctx.f10.f64 = double(float(ctx.f13.f64 * ctx.f12.f64));
	// fmuls f11,f0,f0
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// fcmpu cr6,f11,f10
	ctx.cr6.compare(ctx.f11.f64, ctx.f10.f64);
	// bgt cr6,0x82e213bc
	if (ctx.cr6.gt) goto loc_82E213BC;
	// cmpwi cr6,r28,3
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 3, ctx.xer);
	// bge cr6,0x82e211b4
	if (!ctx.cr6.lt) goto loc_82E211B4;
	// stw r18,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r18.u32);
loc_82E20BE4:
	// lwz r5,104(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// addi r11,r1,192
	ctx.r11.s64 = ctx.r1.s64 + 192;
	// addi r10,r1,120
	ctx.r10.s64 = ctx.r1.s64 + 120;
	// addi r30,r31,104
	ctx.r30.s64 = ctx.r31.s64 + 104;
	// lvx128 v0,r5,r26
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r5.u32 + ctx.r26.u32) & ~0xF), VectorMaskL));
	// lvx128 v12,r5,r21
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((ctx.r5.u32 + ctx.r21.u32) & ~0xF), VectorMaskL));
	// lvx128 v13,r0,r5
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r5.u32) & ~0xF), VectorMaskL));
	// vsubfp v10,v0,v12
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v10.f32, _mm_sub_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v12.f32)));
	// vsubfp v11,v13,v0
	_mm_store_ps(ctx.v11.f32, _mm_sub_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v0.f32)));
	// vpermwi128 v8,v10,99
	_mm_store_si128((__m128i*)ctx.v8.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v10.u32), 0x9C));
	// vpermwi128 v6,v11,99
	_mm_store_si128((__m128i*)ctx.v6.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v11.u32), 0x9C));
	// vpermwi128 v9,v11,135
	_mm_store_si128((__m128i*)ctx.v9.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v11.u32), 0x78));
	// vpermwi128 v7,v10,135
	_mm_store_si128((__m128i*)ctx.v7.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v10.u32), 0x78));
	// vmulfp128 v5,v9,v8
	_mm_store_ps(ctx.v5.f32, _mm_mul_ps(_mm_load_ps(ctx.v9.f32), _mm_load_ps(ctx.v8.f32)));
	// vmulfp128 v4,v6,v7
	_mm_store_ps(ctx.v4.f32, _mm_mul_ps(_mm_load_ps(ctx.v6.f32), _mm_load_ps(ctx.v7.f32)));
	// vsubfp v6,v4,v5
	_mm_store_ps(ctx.v6.f32, _mm_sub_ps(_mm_load_ps(ctx.v4.f32), _mm_load_ps(ctx.v5.f32)));
	// vmsum3fp128 v12,v6,v6
	_mm_store_ps(ctx.v12.f32, _mm_dp_ps(_mm_load_ps(ctx.v6.f32), _mm_load_ps(ctx.v6.f32), 0xEF));
	// stvx128 v6,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v6.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvewx v12,r0,r10
	ea = (ctx.r10.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v12.u32[3 - ((ea & 0xF) >> 2)]);
	// lfs f0,120(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bne cr6,0x82e21108
	if (!ctx.cr6.eq) goto loc_82E21108;
	// cmpwi cr6,r28,2
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 2, ctx.xer);
	// bge cr6,0x82e211c8
	if (!ctx.cr6.lt) goto loc_82E211C8;
	// stw r20,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r20.u32);
loc_82E20C48:
	// lwz r5,104(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// addi r10,r1,136
	ctx.r10.s64 = ctx.r1.s64 + 136;
	// addi r30,r31,104
	ctx.r30.s64 = ctx.r31.s64 + 104;
	// addi r11,r5,16
	ctx.r11.s64 = ctx.r5.s64 + 16;
	// lvx128 v0,r0,r5
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r5.u32) & ~0xF), VectorMaskL));
	// lvx128 v13,r0,r11
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// vsubfp v12,v0,v13
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v12.f32, _mm_sub_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v13.f32)));
	// vmsum3fp128 v11,v12,v12
	_mm_store_ps(ctx.v11.f32, _mm_dp_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v12.f32), 0xEF));
	// stvewx v11,r0,r10
	ea = (ctx.r10.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v11.u32[3 - ((ea & 0xF) >> 2)]);
	// lfs f0,80(r31)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,136(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgt cr6,0x82e20efc
	if (ctx.cr6.gt) goto loc_82E20EFC;
	// cmpwi cr6,r28,1
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 1, ctx.xer);
	// bge cr6,0x82e211b4
	if (!ctx.cr6.lt) goto loc_82E211B4;
	// stw r23,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r23.u32);
loc_82E20C88:
	// lwz r4,104(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// addi r11,r1,124
	ctx.r11.s64 = ctx.r1.s64 + 124;
	// addi r30,r31,104
	ctx.r30.s64 = ctx.r31.s64 + 104;
	// lvx128 v0,r0,r4
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r4.u32) & ~0xF), VectorMaskL));
	// vmsum3fp128 v13,v0,v0
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v13.f32, _mm_dp_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v0.f32), 0xEF));
	// stvewx v13,r0,r11
	ea = (ctx.r11.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v13.u32[3 - ((ea & 0xF) >> 2)]);
	// lfs f0,80(r31)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,124(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgt cr6,0x82e20e04
	if (ctx.cr6.gt) goto loc_82E20E04;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// bge cr6,0x82e211b4
	if (!ctx.cr6.lt) goto loc_82E211B4;
	// stw r22,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r22.u32);
loc_82E20CBC:
	// addi r11,r31,48
	ctx.r11.s64 = ctx.r31.s64 + 48;
	// addi r10,r1,116
	ctx.r10.s64 = ctx.r1.s64 + 116;
	// addi r9,r1,208
	ctx.r9.s64 = ctx.r1.s64 + 208;
	// addi r30,r31,80
	ctx.r30.s64 = ctx.r31.s64 + 80;
	// lvx128 v0,r0,r11
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// vmsum3fp128 v13,v0,v0
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v13.f32, _mm_dp_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v0.f32), 0xEF));
	// stvewx v13,r0,r10
	ea = (ctx.r10.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v13.u32[3 - ((ea & 0xF) >> 2)]);
	// lfs f13,116(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f13.f64 = double(temp.f32);
	// lvx128 v0,r0,r24
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r24.u32) & ~0xF), VectorMaskL));
	// lvx128 v12,r0,r11
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// vxor v11,v12,v0
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_xor_si128(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// lfs f0,80(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// stvx128 v11,r0,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgt cr6,0x82e20d08
	if (ctx.cr6.gt) goto loc_82E20D08;
	// li r11,16
	ctx.r11.s64 = 16;
	// addi r10,r1,208
	ctx.r10.s64 = ctx.r1.s64 + 208;
	// lvx128 v0,r19,r11
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r19.u32 + ctx.r11.u32) & ~0xF), VectorMaskL));
	// stvx128 v0,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
loc_82E20D08:
	// addi r5,r1,256
	ctx.r5.s64 = ctx.r1.s64 + 256;
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e205f0
	ctx.lr = 0x82E20D18;
	sub_82E205F0(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r10,r1,256
	ctx.r10.s64 = ctx.r1.s64 + 256;
	// lwz r4,104(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// rlwinm r9,r11,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r8,r1,272
	ctx.r8.s64 = ctx.r1.s64 + 272;
	// addi r7,r1,288
	ctx.r7.s64 = ctx.r1.s64 + 288;
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// lvx128 v0,r0,r10
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// addi r5,r1,132
	ctx.r5.s64 = ctx.r1.s64 + 132;
	// stvx128 v0,r9,r4
	_mm_store_si128((__m128i*)(base + ((ctx.r9.u32 + ctx.r4.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// lvx128 v13,r0,r8
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r8.u32) & ~0xF), VectorMaskL));
	// stvx128 v13,r3,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32 + ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// lvx128 v12,r0,r7
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((ctx.r7.u32) & ~0xF), VectorMaskL));
	// stvx128 v12,r11,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lwz r11,104(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// stw r6,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r6.u32);
	// lvx128 v11,r0,r11
	simd::store_shuffled(ctx.v11, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// vmsum3fp128 v10,v11,v11
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v10.f32, _mm_dp_ps(_mm_load_ps(ctx.v11.f32), _mm_load_ps(ctx.v11.f32), 0xEF));
	// stvewx v10,r0,r5
	ea = (ctx.r5.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v10.u32[3 - ((ea & 0xF) >> 2)]);
	// lfs f0,0(r30)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,132(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgt cr6,0x82e20dec
	if (ctx.cr6.gt) goto loc_82E20DEC;
	// lvx128 v0,r0,r11
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// vspltisw v12,0
	_mm_store_si128((__m128i*)ctx.v12.u32, _mm_set1_epi32(int(0x0)));
	// vmsum3fp128 v6,v0,v0
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v6.f32, _mm_dp_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v0.f32), 0xEF));
	// lvx128 v13,r0,r25
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r25.u32) & ~0xF), VectorMaskL));
	// addi r10,r1,92
	ctx.r10.s64 = ctx.r1.s64 + 92;
	// addi r9,r1,208
	ctx.r9.s64 = ctx.r1.s64 + 208;
	// vor v9,v12,v12
	_mm_store_si128((__m128i*)ctx.v9.u8, _mm_load_si128((__m128i*)ctx.v12.u8));
	// addi r8,r1,272
	ctx.r8.s64 = ctx.r1.s64 + 272;
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
	// vrsqrtefp v0,v6
	_mm_store_ps(ctx.v0.f32, _mm_div_ps(_mm_set1_ps(1), _mm_sqrt_ps(_mm_load_ps(ctx.v6.f32))));
	// vmulfp128 v10,v6,v13
	_mm_store_ps(ctx.v10.f32, _mm_mul_ps(_mm_load_ps(ctx.v6.f32), _mm_load_ps(ctx.v13.f32)));
	// vcmpeqfp v7,v12,v6
	_mm_store_ps(ctx.v7.f32, _mm_cmpeq_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v6.f32)));
	// vmulfp128 v11,v0,v0
	_mm_store_ps(ctx.v11.f32, _mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v0.f32)));
	// vnmsubfp v8,v10,v11,v13
	_mm_store_ps(ctx.v8.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(ctx.v10.f32), _mm_load_ps(ctx.v11.f32)), _mm_load_ps(ctx.v13.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// vmaddfp v0,v0,v8,v0
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v8.f32)), _mm_load_ps(ctx.v0.f32)));
	// vmulfp128 v12,v0,v0
	_mm_store_ps(ctx.v12.f32, _mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v0.f32)));
	// vnmsubfp v13,v10,v12,v13
	_mm_store_ps(ctx.v13.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(ctx.v10.f32), _mm_load_ps(ctx.v12.f32)), _mm_load_ps(ctx.v13.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// vmaddfp v0,v0,v13,v0
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v13.f32)), _mm_load_ps(ctx.v0.f32)));
	// vsel v13,v0,v9,v7
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v7.u8), _mm_load_si128((__m128i*)ctx.v0.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v7.u8), _mm_load_si128((__m128i*)ctx.v9.u8))));
	// vmulfp128 v5,v6,v13
	_mm_store_ps(ctx.v5.f32, _mm_mul_ps(_mm_load_ps(ctx.v6.f32), _mm_load_ps(ctx.v13.f32)));
	// stvewx v5,r0,r10
	ea = (ctx.r10.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v5.u32[3 - ((ea & 0xF) >> 2)]);
	// lfs f0,92(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f0.f64 = double(temp.f32);
	// lvx128 v4,r0,r8
	simd::store_shuffled(ctx.v4, simd::load_and_shuffle(base + ((ctx.r8.u32) & ~0xF), VectorMaskL));
	// lvx128 v3,r0,r9
	simd::store_shuffled(ctx.v3, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// stfs f0,32(r27)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r27.u32 + 32, temp.u32);
	// stvx128 v4,r27,r26
	_mm_store_si128((__m128i*)(base + ((ctx.r27.u32 + ctx.r26.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v4.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v3,r0,r27
	_mm_store_si128((__m128i*)(base + ((ctx.r27.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v3.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// b 0x82e20df0
	goto loc_82E20DF0;
loc_82E20DEC:
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
loc_82E20DF0:
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82e213a8
	if (!ctx.cr6.eq) goto loc_82E213A8;
	// mr r28,r22
	ctx.r28.u64 = ctx.r22.u64;
	// b 0x82e20c88
	goto loc_82E20C88;
loc_82E20E04:
	// addi r5,r1,320
	ctx.r5.s64 = ctx.r1.s64 + 320;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r28,r23
	ctx.r28.u64 = ctx.r23.u64;
	// mr r15,r4
	ctx.r15.u64 = ctx.r4.u64;
	// bl 0x82e205f0
	ctx.lr = 0x82E20E18;
	sub_82E205F0(ctx, base);
	// addi r11,r1,320
	ctx.r11.s64 = ctx.r1.s64 + 320;
	// lwz r8,0(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r10,r1,84
	ctx.r10.s64 = ctx.r1.s64 + 84;
	// addi r9,r1,240
	ctx.r9.s64 = ctx.r1.s64 + 240;
	// addi r5,r1,384
	ctx.r5.s64 = ctx.r1.s64 + 384;
	// addi r4,r1,240
	ctx.r4.s64 = ctx.r1.s64 + 240;
	// lvx128 v0,r0,r11
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lvx128 v13,r0,r8
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r8.u32) & ~0xF), VectorMaskL));
	// vsubfp v12,v0,v13
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v12.f32, _mm_sub_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v13.f32)));
	// vmsum3fp128 v11,v12,v12
	_mm_store_ps(ctx.v11.f32, _mm_dp_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v12.f32), 0xEF));
	// stvewx v11,r0,r10
	ea = (ctx.r10.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v11.u32[3 - ((ea & 0xF) >> 2)]);
	// lvx128 v0,r0,r24
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r24.u32) & ~0xF), VectorMaskL));
	// lvx128 v10,r0,r15
	simd::store_shuffled(ctx.v10, simd::load_and_shuffle(base + ((ctx.r15.u32) & ~0xF), VectorMaskL));
	// vxor v9,v10,v0
	_mm_store_si128((__m128i*)ctx.v9.u8, _mm_xor_si128(_mm_load_si128((__m128i*)ctx.v10.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// stvx128 v9,r0,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v9.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// bl 0x82e205f0
	ctx.lr = 0x82E20E5C;
	sub_82E205F0(ctx, base);
	// addi r7,r1,384
	ctx.r7.s64 = ctx.r1.s64 + 384;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lvx128 v0,r0,r7
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r7.u32) & ~0xF), VectorMaskL));
	// lvx128 v8,r0,r11
	simd::store_shuffled(ctx.v8, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// vsubfp v7,v0,v8
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v7.f32, _mm_sub_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v8.f32)));
	// vmsum3fp128 v6,v7,v7
	_mm_store_ps(ctx.v6.f32, _mm_dp_ps(_mm_load_ps(ctx.v7.f32), _mm_load_ps(ctx.v7.f32), 0xEF));
	// stvewx v6,r0,r6
	ea = (ctx.r6.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v6.u32[3 - ((ea & 0xF) >> 2)]);
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lfs f13,80(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// rlwinm r7,r10,4,0,27
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// lfs f0,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x82e20ecc
	if (ctx.cr6.lt) goto loc_82E20ECC;
	// addi r9,r1,320
	ctx.r9.s64 = ctx.r1.s64 + 320;
	// addi r8,r1,336
	ctx.r8.s64 = ctx.r1.s64 + 336;
	// addi r6,r1,352
	ctx.r6.s64 = ctx.r1.s64 + 352;
	// addi r5,r10,1
	ctx.r5.s64 = ctx.r10.s64 + 1;
	// lvx128 v0,r0,r9
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// stvx128 v0,r7,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r7.u32 + ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v13,r0,r8
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r8.u32) & ~0xF), VectorMaskL));
	// lwz r4,96(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// stvx128 v13,r4,r7
	_mm_store_si128((__m128i*)(base + ((ctx.r4.u32 + ctx.r7.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lwz r3,100(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// lvx128 v12,r0,r6
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((ctx.r6.u32) & ~0xF), VectorMaskL));
	// stvx128 v12,r3,r7
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32 + ctx.r7.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stw r5,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r5.u32);
	// b 0x82e20c48
	goto loc_82E20C48;
loc_82E20ECC:
	// addi r9,r1,400
	ctx.r9.s64 = ctx.r1.s64 + 400;
	// addi r8,r1,416
	ctx.r8.s64 = ctx.r1.s64 + 416;
	// stvx128 v0,r7,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r7.u32 + ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lwz r5,96(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// addi r6,r10,1
	ctx.r6.s64 = ctx.r10.s64 + 1;
	// lvx128 v0,r0,r9
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// stvx128 v0,r5,r7
	_mm_store_si128((__m128i*)(base + ((ctx.r5.u32 + ctx.r7.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lwz r4,100(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// lvx128 v13,r0,r8
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r8.u32) & ~0xF), VectorMaskL));
	// stvx128 v13,r4,r7
	_mm_store_si128((__m128i*)(base + ((ctx.r4.u32 + ctx.r7.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stw r6,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r6.u32);
	// b 0x82e20c48
	goto loc_82E20C48;
loc_82E20EFC:
	// lvx128 v0,r0,r11
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// lvx128 v13,r0,r5
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r5.u32) & ~0xF), VectorMaskL));
	// mr r28,r20
	ctx.r28.u64 = ctx.r20.u64;
	// vsubfp v0,v13,v0
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v0.f32, _mm_sub_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v0.f32)));
	// mr r10,r22
	ctx.r10.u64 = ctx.r22.u64;
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
	// mr r9,r20
	ctx.r9.u64 = ctx.r20.u64;
	// stvx128 v0,r0,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lfs f11,100(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f11.f64 = double(temp.f32);
	// lfs f0,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f13.f64 = double(temp.f32);
	// fabs f12,f0
	ctx.f12.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// fabs f0,f13
	ctx.f0.u64 = ctx.f13.u64 & ~0x8000000000000000;
	// fabs f13,f11
	ctx.f13.u64 = ctx.f11.u64 & ~0x8000000000000000;
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x82e20f4c
	if (!ctx.cr6.lt) goto loc_82E20F4C;
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
	// mr r10,r23
	ctx.r10.u64 = ctx.r23.u64;
loc_82E20F4C:
	// fcmpu cr6,f12,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// bge cr6,0x82e20f58
	if (!ctx.cr6.lt) goto loc_82E20F58;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
loc_82E20F58:
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// vpermwi128 v11,v0,135
	_mm_store_si128((__m128i*)ctx.v11.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0x78));
	// addi r8,r1,144
	ctx.r8.s64 = ctx.r1.s64 + 144;
	// vpermwi128 v10,v0,99
	_mm_store_si128((__m128i*)ctx.v10.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0x9C));
	// rlwinm r7,r11,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lvx128 v0,r0,r25
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r25.u32) & ~0xF), VectorMaskL));
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// vspltisw v6,0
	_mm_store_si128((__m128i*)ctx.v6.u32, _mm_set1_epi32(int(0x0)));
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// lvx128 v5,r0,r10
	simd::store_shuffled(ctx.v5, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// rlwinm r3,r9,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lvx128 v4,r0,r8
	simd::store_shuffled(ctx.v4, simd::load_and_shuffle(base + ((ctx.r8.u32) & ~0xF), VectorMaskL));
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// vxor v3,v5,v4
	_mm_store_si128((__m128i*)ctx.v3.u8, _mm_xor_si128(_mm_load_si128((__m128i*)ctx.v5.u8), _mm_load_si128((__m128i*)ctx.v4.u8)));
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// addi r9,r1,144
	ctx.r9.s64 = ctx.r1.s64 + 144;
	// lfsx f0,r7,r6
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r6.u32);
	ctx.f0.f64 = double(temp.f32);
	// addi r8,r1,144
	ctx.r8.s64 = ctx.r1.s64 + 144;
	// fneg f13,f0
	ctx.f13.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// addi r15,r1,144
	ctx.r15.s64 = ctx.r1.s64 + 144;
	// vor v5,v6,v6
	_mm_store_si128((__m128i*)ctx.v5.u8, _mm_load_si128((__m128i*)ctx.v6.u8));
	// lfsx f12,r3,r11
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r11.u32);
	ctx.f12.f64 = double(temp.f32);
	// addi r11,r1,224
	ctx.r11.s64 = ctx.r1.s64 + 224;
	// stvx128 v3,r0,r4
	_mm_store_si128((__m128i*)(base + ((ctx.r4.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v3.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// vor v3,v6,v6
	_mm_store_si128((__m128i*)ctx.v3.u8, _mm_load_si128((__m128i*)ctx.v6.u8));
	// stfsx f12,r7,r10
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r7.u32 + ctx.r10.u32, temp.u32);
	// addi r10,r1,224
	ctx.r10.s64 = ctx.r1.s64 + 224;
	// stfsx f13,r3,r9
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + ctx.r9.u32, temp.u32);
	// addi r7,r1,160
	ctx.r7.s64 = ctx.r1.s64 + 160;
	// lvx128 v13,r0,r8
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r8.u32) & ~0xF), VectorMaskL));
	// vmsum3fp128 v2,v13,v13
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v2.f32, _mm_dp_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v13.f32), 0xEF));
	// vpermwi128 v31,v13,99
	_mm_store_si128((__m128i*)ctx.v31.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v13.u32), 0x9C));
	// vrsqrtefp v12,v2
	_mm_store_ps(ctx.v12.f32, _mm_div_ps(_mm_set1_ps(1), _mm_sqrt_ps(_mm_load_ps(ctx.v2.f32))));
	// vpermwi128 v30,v13,135
	_mm_store_si128((__m128i*)ctx.v30.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v13.u32), 0x78));
	// vmulfp128 v7,v2,v0
	_mm_store_ps(ctx.v7.f32, _mm_mul_ps(_mm_load_ps(ctx.v2.f32), _mm_load_ps(ctx.v0.f32)));
	// vcmpeqfp v1,v6,v2
	_mm_store_ps(ctx.v1.f32, _mm_cmpeq_ps(_mm_load_ps(ctx.v6.f32), _mm_load_ps(ctx.v2.f32)));
	// addi r6,r1,512
	ctx.r6.s64 = ctx.r1.s64 + 512;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// vmulfp128 v29,v11,v31
	_mm_store_ps(ctx.v29.f32, _mm_mul_ps(_mm_load_ps(ctx.v11.f32), _mm_load_ps(ctx.v31.f32)));
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// vmulfp128 v28,v10,v30
	_mm_store_ps(ctx.v28.f32, _mm_mul_ps(_mm_load_ps(ctx.v10.f32), _mm_load_ps(ctx.v30.f32)));
	// vmulfp128 v9,v12,v12
	_mm_store_ps(ctx.v9.f32, _mm_mul_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v12.f32)));
	// vsubfp v10,v28,v29
	_mm_store_ps(ctx.v10.f32, _mm_sub_ps(_mm_load_ps(ctx.v28.f32), _mm_load_ps(ctx.v29.f32)));
	// vnmsubfp v8,v7,v9,v0
	_mm_store_ps(ctx.v8.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(ctx.v7.f32), _mm_load_ps(ctx.v9.f32)), _mm_load_ps(ctx.v0.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// vmsum3fp128 v27,v10,v10
	_mm_store_ps(ctx.v27.f32, _mm_dp_ps(_mm_load_ps(ctx.v10.f32), _mm_load_ps(ctx.v10.f32), 0xEF));
	// stvx128 v10,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v10.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmaddfp v11,v12,v8,v12
	_mm_store_ps(ctx.v11.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v8.f32)), _mm_load_ps(ctx.v12.f32)));
	// vrsqrtefp v12,v27
	_mm_store_ps(ctx.v12.f32, _mm_div_ps(_mm_set1_ps(1), _mm_sqrt_ps(_mm_load_ps(ctx.v27.f32))));
	// vcmpeqfp v31,v6,v27
	_mm_store_ps(ctx.v31.f32, _mm_cmpeq_ps(_mm_load_ps(ctx.v6.f32), _mm_load_ps(ctx.v27.f32)));
	// vmulfp128 v4,v27,v0
	_mm_store_ps(ctx.v4.f32, _mm_mul_ps(_mm_load_ps(ctx.v27.f32), _mm_load_ps(ctx.v0.f32)));
	// vmulfp128 v6,v11,v11
	_mm_store_ps(ctx.v6.f32, _mm_mul_ps(_mm_load_ps(ctx.v11.f32), _mm_load_ps(ctx.v11.f32)));
	// vmulfp128 v8,v12,v12
	_mm_store_ps(ctx.v8.f32, _mm_mul_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v12.f32)));
	// vnmsubfp v9,v7,v6,v0
	_mm_store_ps(ctx.v9.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(ctx.v7.f32), _mm_load_ps(ctx.v6.f32)), _mm_load_ps(ctx.v0.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// vnmsubfp v2,v4,v8,v0
	_mm_store_ps(ctx.v2.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(ctx.v4.f32), _mm_load_ps(ctx.v8.f32)), _mm_load_ps(ctx.v0.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// vmaddfp v11,v11,v9,v11
	_mm_store_ps(ctx.v11.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v11.f32), _mm_load_ps(ctx.v9.f32)), _mm_load_ps(ctx.v11.f32)));
	// vmaddfp v12,v12,v2,v12
	_mm_store_ps(ctx.v12.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v2.f32)), _mm_load_ps(ctx.v12.f32)));
	// vsel v9,v11,v5,v1
	_mm_store_si128((__m128i*)ctx.v9.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v1.u8), _mm_load_si128((__m128i*)ctx.v11.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v1.u8), _mm_load_si128((__m128i*)ctx.v5.u8))));
	// vspltw v26,v9,0
	_mm_store_si128((__m128i*)ctx.v26.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v9.u32), 0xFF));
	// vmulfp128 v25,v13,v26
	_mm_store_ps(ctx.v25.f32, _mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v26.f32)));
	// vmulfp128 v11,v12,v12
	_mm_store_ps(ctx.v11.f32, _mm_mul_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v12.f32)));
	// stvx128 v25,r0,r15
	_mm_store_si128((__m128i*)(base + ((ctx.r15.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v25.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// vnmsubfp v0,v4,v11,v0
	_mm_store_ps(ctx.v0.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(ctx.v4.f32), _mm_load_ps(ctx.v11.f32)), _mm_load_ps(ctx.v0.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// vmaddfp v0,v12,v0,v12
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v0.f32)), _mm_load_ps(ctx.v12.f32)));
	// vsel v13,v0,v3,v31
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v31.u8), _mm_load_si128((__m128i*)ctx.v0.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v31.u8), _mm_load_si128((__m128i*)ctx.v3.u8))));
	// vspltw v24,v13,0
	_mm_store_si128((__m128i*)ctx.v24.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v13.u32), 0xFF));
	// vmulfp128 v23,v10,v24
	_mm_store_ps(ctx.v23.f32, _mm_mul_ps(_mm_load_ps(ctx.v10.f32), _mm_load_ps(ctx.v24.f32)));
	// stvx128 v23,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v23.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// bl 0x82e209f0
	ctx.lr = 0x82E21068;
	sub_82E209F0(ctx, base);
	// addi r7,r1,164
	ctx.r7.s64 = ctx.r1.s64 + 164;
	// addi r6,r1,448
	ctx.r6.s64 = ctx.r1.s64 + 448;
	// lwz r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e209f0
	ctx.lr = 0x82E21080;
	sub_82E209F0(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lfs f11,160(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	ctx.f11.f64 = double(temp.f32);
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lfs f10,164(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	ctx.f10.f64 = double(temp.f32);
	// rlwinm r7,r11,4,0,27
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// fcmpu cr6,f11,f10
	ctx.cr6.compare(ctx.f11.f64, ctx.f10.f64);
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// ble cr6,0x82e210d4
	if (!ctx.cr6.gt) goto loc_82E210D4;
	// addi r10,r1,512
	ctx.r10.s64 = ctx.r1.s64 + 512;
	// addi r8,r1,528
	ctx.r8.s64 = ctx.r1.s64 + 528;
	// addi r6,r1,544
	ctx.r6.s64 = ctx.r1.s64 + 544;
	// lvx128 v0,r0,r10
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// stvx128 v0,r7,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r7.u32 + ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v13,r0,r8
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r8.u32) & ~0xF), VectorMaskL));
	// lwz r4,96(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// stvx128 v13,r4,r7
	_mm_store_si128((__m128i*)(base + ((ctx.r4.u32 + ctx.r7.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lwz r3,100(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// lvx128 v12,r0,r6
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((ctx.r6.u32) & ~0xF), VectorMaskL));
	// stvx128 v12,r3,r7
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32 + ctx.r7.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stw r5,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r5.u32);
	// b 0x82e20be4
	goto loc_82E20BE4;
loc_82E210D4:
	// addi r10,r1,448
	ctx.r10.s64 = ctx.r1.s64 + 448;
	// addi r8,r1,464
	ctx.r8.s64 = ctx.r1.s64 + 464;
	// addi r6,r1,480
	ctx.r6.s64 = ctx.r1.s64 + 480;
	// lvx128 v0,r0,r10
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// stvx128 v0,r7,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r7.u32 + ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lwz r4,96(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// lvx128 v13,r0,r8
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r8.u32) & ~0xF), VectorMaskL));
	// stvx128 v13,r4,r7
	_mm_store_si128((__m128i*)(base + ((ctx.r4.u32 + ctx.r7.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v12,r0,r6
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((ctx.r6.u32) & ~0xF), VectorMaskL));
	// lwz r3,100(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// stvx128 v12,r3,r7
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32 + ctx.r7.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stw r5,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r5.u32);
	// b 0x82e20be4
	goto loc_82E20BE4;
loc_82E21108:
	// vrsqrtefp v0,v12
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v0.f32, _mm_div_ps(_mm_set1_ps(1), _mm_sqrt_ps(_mm_load_ps(ctx.v12.f32))));
	// lvx128 v13,r0,r25
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r25.u32) & ~0xF), VectorMaskL));
	// vmulfp128 v10,v12,v13
	_mm_store_ps(ctx.v10.f32, _mm_mul_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v13.f32)));
	// vspltisw v9,0
	_mm_store_si128((__m128i*)ctx.v9.u32, _mm_set1_epi32(int(0x0)));
	// addi r11,r1,192
	ctx.r11.s64 = ctx.r1.s64 + 192;
	// addi r7,r1,88
	ctx.r7.s64 = ctx.r1.s64 + 88;
	// addi r6,r1,576
	ctx.r6.s64 = ctx.r1.s64 + 576;
	// vcmpeqfp v7,v9,v12
	_mm_store_ps(ctx.v7.f32, _mm_cmpeq_ps(_mm_load_ps(ctx.v9.f32), _mm_load_ps(ctx.v12.f32)));
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r28,r18
	ctx.r28.u64 = ctx.r18.u64;
	// vmulfp128 v11,v0,v0
	_mm_store_ps(ctx.v11.f32, _mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v0.f32)));
	// vnmsubfp v8,v10,v11,v13
	_mm_store_ps(ctx.v8.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(ctx.v10.f32), _mm_load_ps(ctx.v11.f32)), _mm_load_ps(ctx.v13.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// vmaddfp v0,v0,v8,v0
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v8.f32)), _mm_load_ps(ctx.v0.f32)));
	// vmulfp128 v12,v0,v0
	_mm_store_ps(ctx.v12.f32, _mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v0.f32)));
	// vnmsubfp v13,v10,v12,v13
	_mm_store_ps(ctx.v13.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(ctx.v10.f32), _mm_load_ps(ctx.v12.f32)), _mm_load_ps(ctx.v13.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// vmaddfp v0,v0,v13,v0
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v13.f32)), _mm_load_ps(ctx.v0.f32)));
	// vsel v13,v0,v9,v7
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v7.u8), _mm_load_si128((__m128i*)ctx.v0.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v7.u8), _mm_load_si128((__m128i*)ctx.v9.u8))));
	// vspltw v0,v13,0
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v13.u32), 0xFF));
	// vmulfp128 v13,v6,v0
	_mm_store_ps(ctx.v13.f32, _mm_mul_ps(_mm_load_ps(ctx.v6.f32), _mm_load_ps(ctx.v0.f32)));
	// stvx128 v13,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// bl 0x82e209f0
	ctx.lr = 0x82E21160;
	sub_82E209F0(ctx, base);
	// lfs f0,64(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// blt cr6,0x82e21338
	if (ctx.cr6.lt) goto loc_82E21338;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r10,r1,576
	ctx.r10.s64 = ctx.r1.s64 + 576;
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r8,r1,592
	ctx.r8.s64 = ctx.r1.s64 + 592;
	// rlwinm r7,r11,4,0,27
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r6,r1,608
	ctx.r6.s64 = ctx.r1.s64 + 608;
	// addi r5,r11,1
	ctx.r5.s64 = ctx.r11.s64 + 1;
	// lvx128 v0,r0,r10
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// stvx128 v0,r7,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r7.u32 + ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lwz r4,96(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// lvx128 v13,r0,r8
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r8.u32) & ~0xF), VectorMaskL));
	// stvx128 v13,r4,r7
	_mm_store_si128((__m128i*)(base + ((ctx.r4.u32 + ctx.r7.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v12,r0,r6
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((ctx.r6.u32) & ~0xF), VectorMaskL));
	// lwz r3,100(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// stvx128 v12,r3,r7
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32 + ctx.r7.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stw r5,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r5.u32);
	// b 0x82e20b5c
	goto loc_82E20B5C;
loc_82E211B4:
	// stw r18,0(r16)
	PPC_STORE_U32(ctx.r16.u32 + 0, ctx.r18.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,800
	ctx.r1.s64 = ctx.r1.s64 + 800;
	// lfd f31,-152(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -152);
	// b 0x82fa7694
	__restgprlr_15(ctx, base);
	return;
loc_82E211C8:
	// stfs f31,32(r27)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r27.u32 + 32, temp.u32);
	// lwz r8,0(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// mr r9,r22
	ctx.r9.u64 = ctx.r22.u64;
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
	// mr r10,r20
	ctx.r10.u64 = ctx.r20.u64;
	// lvx128 v13,r0,r8
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r8.u32) & ~0xF), VectorMaskL));
	// lvx128 v0,r8,r26
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r8.u32 + ctx.r26.u32) & ~0xF), VectorMaskL));
	// vsubfp v12,v13,v0
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v12.f32, _mm_sub_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v0.f32)));
	// stvx128 v12,r0,r7
	_mm_store_si128((__m128i*)(base + ((ctx.r7.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lfs f0,96(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f13.f64 = double(temp.f32);
	// fabs f0,f0
	ctx.f0.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// fabs f13,f13
	ctx.f13.u64 = ctx.f13.u64 & ~0x8000000000000000;
	// lfs f12,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f12.f64 = double(temp.f32);
	// fabs f12,f12
	ctx.f12.u64 = ctx.f12.u64 & ~0x8000000000000000;
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x82e2121c
	if (!ctx.cr6.lt) goto loc_82E2121C;
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
	// mr r9,r23
	ctx.r9.u64 = ctx.r23.u64;
loc_82E2121C:
	// fcmpu cr6,f12,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// bge cr6,0x82e21228
	if (!ctx.cr6.lt) goto loc_82E21228;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
loc_82E21228:
	// lvx128 v0,r0,r27
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r27.u32) & ~0xF), VectorMaskL));
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// vxor v13,v0,v0
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_setzero_si128());
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// vspltisw v11,0
	_mm_store_si128((__m128i*)ctx.v11.u32, _mm_set1_epi32(int(0x0)));
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// lis r6,-32237
	ctx.r6.s64 = -2112684032;
	// stvx128 v13,r0,r27
	_mm_store_si128((__m128i*)(base + ((ctx.r27.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lis r5,-32227
	ctx.r5.s64 = -2112028672;
	// lfsx f13,r8,r7
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r7.u32);
	ctx.f13.f64 = double(temp.f32);
	// vor v12,v11,v11
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_load_si128((__m128i*)ctx.v11.u8));
	// fneg f12,f13
	ctx.f12.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// addi r4,r6,21920
	ctx.r4.s64 = ctx.r6.s64 + 21920;
	// lfsx f0,r10,r9
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r5,-2608
	ctx.r11.s64 = ctx.r5.s64 + -2608;
	// stfsx f0,r8,r27
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + ctx.r27.u32, temp.u32);
	// addi r9,r1,84
	ctx.r9.s64 = ctx.r1.s64 + 84;
	// stfsx f12,r10,r27
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r10.u32 + ctx.r27.u32, temp.u32);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lvx128 v13,r0,r25
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r25.u32) & ~0xF), VectorMaskL));
	// lis r8,-32250
	ctx.r8.s64 = -2113536000;
	// addi r7,r1,88
	ctx.r7.s64 = ctx.r1.s64 + 88;
	// li r3,1
	ctx.r3.s64 = 1;
	// lvx128 v6,r0,r27
	simd::store_shuffled(ctx.v6, simd::load_and_shuffle(base + ((ctx.r27.u32) & ~0xF), VectorMaskL));
	// vmsum3fp128 v5,v6,v6
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v5.f32, _mm_dp_ps(_mm_load_ps(ctx.v6.f32), _mm_load_ps(ctx.v6.f32), 0xEF));
	// vrsqrtefp v0,v5
	_mm_store_ps(ctx.v0.f32, _mm_div_ps(_mm_set1_ps(1), _mm_sqrt_ps(_mm_load_ps(ctx.v5.f32))));
	// vmulfp128 v10,v5,v13
	_mm_store_ps(ctx.v10.f32, _mm_mul_ps(_mm_load_ps(ctx.v5.f32), _mm_load_ps(ctx.v13.f32)));
	// vcmpeqfp v8,v11,v5
	_mm_store_ps(ctx.v8.f32, _mm_cmpeq_ps(_mm_load_ps(ctx.v11.f32), _mm_load_ps(ctx.v5.f32)));
	// vmulfp128 v9,v0,v0
	_mm_store_ps(ctx.v9.f32, _mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v0.f32)));
	// vnmsubfp v7,v10,v9,v13
	_mm_store_ps(ctx.v7.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(ctx.v10.f32), _mm_load_ps(ctx.v9.f32)), _mm_load_ps(ctx.v13.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// vmaddfp v0,v0,v7,v0
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v7.f32)), _mm_load_ps(ctx.v0.f32)));
	// vmulfp128 v11,v0,v0
	_mm_store_ps(ctx.v11.f32, _mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v0.f32)));
	// vnmsubfp v13,v10,v11,v13
	_mm_store_ps(ctx.v13.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(ctx.v10.f32), _mm_load_ps(ctx.v11.f32)), _mm_load_ps(ctx.v13.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// vmaddfp v0,v0,v13,v0
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v13.f32)), _mm_load_ps(ctx.v0.f32)));
	// vsel v13,v0,v12,v8
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v8.u8), _mm_load_si128((__m128i*)ctx.v0.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v8.u8), _mm_load_si128((__m128i*)ctx.v12.u8))));
	// vspltw v4,v13,0
	_mm_store_si128((__m128i*)ctx.v4.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v13.u32), 0xFF));
	// vmulfp128 v3,v6,v4
	_mm_store_ps(ctx.v3.f32, _mm_mul_ps(_mm_load_ps(ctx.v6.f32), _mm_load_ps(ctx.v4.f32)));
	// stvx128 v3,r0,r27
	_mm_store_si128((__m128i*)(base + ((ctx.r27.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v3.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lwz r6,0(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lvx128 v0,r0,r4
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v13,r0,r11
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// lvx128 v2,r0,r6
	simd::store_shuffled(ctx.v2, simd::load_and_shuffle(base + ((ctx.r6.u32) & ~0xF), VectorMaskL));
	// vand v1,v2,v13
	_mm_store_si128((__m128i*)ctx.v1.u8, _mm_and_si128(_mm_load_si128((__m128i*)ctx.v2.u8), _mm_load_si128((__m128i*)ctx.v13.u8)));
	// vmsum3fp128 v31,v1,v0
	_mm_store_ps(ctx.v31.f32, _mm_dp_ps(_mm_load_ps(ctx.v1.f32), _mm_load_ps(ctx.v0.f32), 0xEF));
	// stvewx v31,r0,r10
	ea = (ctx.r10.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v31.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx v31,r0,r9
	ea = (ctx.r9.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v31.u32[3 - ((ea & 0xF) >> 2)]);
	// lwz r5,96(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// lfs f13,-25140(r8)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -25140);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// lfs f11,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f11.f64 = double(temp.f32);
	// fadds f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 + ctx.f0.f64));
	// lvx128 v30,r0,r5
	simd::store_shuffled(ctx.v30, simd::load_and_shuffle(base + ((ctx.r5.u32) & ~0xF), VectorMaskL));
	// fadds f9,f10,f13
	ctx.f9.f64 = double(float(ctx.f10.f64 + ctx.f13.f64));
	// lvx128 v12,r5,r26
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((ctx.r5.u32 + ctx.r26.u32) & ~0xF), VectorMaskL));
	// fdivs f8,f0,f9
	ctx.f8.f64 = double(float(ctx.f0.f64 / ctx.f9.f64));
	// stfs f8,88(r1)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lvlx v29,0,r7
	temp.u32 = ctx.r7.u32;
	_mm_store_si128((__m128i*)ctx.v29.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw v28,v29,0
	_mm_store_si128((__m128i*)ctx.v28.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v29.u32), 0xFF));
	// vspltw v13,v28,0
	_mm_store_si128((__m128i*)ctx.v13.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v28.u32), 0xFF));
	// vsubfp v27,v0,v13
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v27.f32, _mm_sub_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v13.f32)));
	// vmulfp128 v0,v27,v30
	_mm_store_ps(ctx.v0.f32, _mm_mul_ps(_mm_load_ps(ctx.v27.f32), _mm_load_ps(ctx.v30.f32)));
	// vmaddfp v0,v13,v12,v0
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v12.f32)), _mm_load_ps(ctx.v0.f32)));
	// stvx128 v0,r27,r26
	_mm_store_si128((__m128i*)(base + ((ctx.r27.u32 + ctx.r26.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stw r22,0(r16)
	PPC_STORE_U32(ctx.r16.u32 + 0, ctx.r22.u32);
	// addi r1,r1,800
	ctx.r1.s64 = ctx.r1.s64 + 800;
	// lfd f31,-152(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -152);
	// b 0x82fa7694
	__restgprlr_15(ctx, base);
	return;
loc_82E21338:
	// addi r11,r1,192
	ctx.r11.s64 = ctx.r1.s64 + 192;
	// stfs f31,32(r27)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r27.u32 + 32, temp.u32);
	// lis r10,-31960
	ctx.r10.s64 = -2094530560;
	// addi r7,r1,168
	ctx.r7.s64 = ctx.r1.s64 + 168;
	// addi r3,r10,-21760
	ctx.r3.s64 = ctx.r10.s64 + -21760;
	// lvx128 v0,r0,r11
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// stvx128 v0,r0,r27
	_mm_store_si128((__m128i*)(base + ((ctx.r27.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r6,r4,32
	ctx.r6.s64 = ctx.r4.s64 + 32;
	// addi r5,r4,16
	ctx.r5.s64 = ctx.r4.s64 + 16;
	// bl 0x82dba228
	ctx.lr = 0x82E21364;
	sub_82DBA228(ctx, base);
	// addi r9,r1,168
	ctx.r9.s64 = ctx.r1.s64 + 168;
	// lwz r6,96(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// addi r8,r1,172
	ctx.r8.s64 = ctx.r1.s64 + 172;
	// addi r7,r1,176
	ctx.r7.s64 = ctx.r1.s64 + 176;
	// lvlx v13,0,r9
	temp.u32 = ctx.r9.u32;
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw v11,v13,0
	_mm_store_si128((__m128i*)ctx.v11.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v13.u32), 0xFF));
	// lvx128 v8,r0,r6
	simd::store_shuffled(ctx.v8, simd::load_and_shuffle(base + ((ctx.r6.u32) & ~0xF), VectorMaskL));
	// lvlx v10,0,r8
	temp.u32 = ctx.r8.u32;
	_mm_store_si128((__m128i*)ctx.v10.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw v12,v10,0
	_mm_store_si128((__m128i*)ctx.v12.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v10.u32), 0xFF));
	// lvlx v9,0,r7
	temp.u32 = ctx.r7.u32;
	_mm_store_si128((__m128i*)ctx.v9.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw v0,v9,0
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v9.u32), 0xFF));
	// vmulfp128 v11,v8,v11
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v11.f32, _mm_mul_ps(_mm_load_ps(ctx.v8.f32), _mm_load_ps(ctx.v11.f32)));
	// lvx128 v10,r6,r26
	simd::store_shuffled(ctx.v10, simd::load_and_shuffle(base + ((ctx.r6.u32 + ctx.r26.u32) & ~0xF), VectorMaskL));
	// lvx128 v13,r6,r21
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r6.u32 + ctx.r21.u32) & ~0xF), VectorMaskL));
	// vmaddfp v12,v10,v12,v11
	_mm_store_ps(ctx.v12.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v10.f32), _mm_load_ps(ctx.v12.f32)), _mm_load_ps(ctx.v11.f32)));
	// vmaddfp v0,v13,v0,v12
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v0.f32)), _mm_load_ps(ctx.v12.f32)));
	// stvx128 v0,r27,r26
	_mm_store_si128((__m128i*)(base + ((ctx.r27.u32 + ctx.r26.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
loc_82E213A8:
	// stw r22,0(r16)
	PPC_STORE_U32(ctx.r16.u32 + 0, ctx.r22.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,800
	ctx.r1.s64 = ctx.r1.s64 + 800;
	// lfd f31,-152(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -152);
	// b 0x82fa7694
	__restgprlr_15(ctx, base);
	return;
loc_82E213BC:
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r22,0(r16)
	PPC_STORE_U32(ctx.r16.u32 + 0, ctx.r22.u32);
	// addi r1,r1,800
	ctx.r1.s64 = ctx.r1.s64 + 800;
	// lfd f31,-152(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -152);
	// b 0x82fa7694
	__restgprlr_15(ctx, base);
	return;
loc_82E213D0:
	// li r11,3
	ctx.r11.s64 = 3;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,0(r16)
	PPC_STORE_U32(ctx.r16.u32 + 0, ctx.r11.u32);
	// addi r1,r1,800
	ctx.r1.s64 = ctx.r1.s64 + 800;
	// lfd f31,-152(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -152);
	// b 0x82fa7694
	__restgprlr_15(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E213E8"))) PPC_WEAK_FUNC(sub_82E213E8);
PPC_FUNC_IMPL(__imp__sub_82E213E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa766c
	ctx.lr = 0x82E213F0;
	__savegprlr_25(ctx, base);
	// stfd f29,-88(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -88, ctx.f29.u64);
	// stfd f30,-80(r1)
	PPC_STORE_U64(ctx.r1.u32 + -80, ctx.f30.u64);
	// stfd f31,-72(r1)
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.f31.u64);
	// ld r12,-4096(r1)
	ctx.r12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -4096);
	// ld r12,-8192(r1)
	ctx.r12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8192);
	// stwu r1,-12176(r1)
	ea = -12176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32247
	ctx.r9.s64 = -2113339392;
	// lis r8,15929
	ctx.r8.s64 = 1043922944;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lfs f30,17488(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 17488);
	ctx.f30.f64 = double(temp.f32);
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// lfs f31,11704(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 11704);
	ctx.f31.f64 = double(temp.f32);
	// li r28,0
	ctx.r28.s64 = 0;
	// lfs f29,14232(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 14232);
	ctx.f29.f64 = double(temp.f32);
	// li r25,1
	ctx.r25.s64 = 1;
	// ori r27,r8,45459
	ctx.r27.u64 = ctx.r8.u64 | 45459;
loc_82E21438:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e20ad8
	ctx.lr = 0x82E2144C;
	sub_82E20AD8(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x82e21464
	if (!ctx.cr6.eq) goto loc_82E21464;
	// lwz r29,80(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r29,3
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 3, ctx.xer);
	// bne cr6,0x82e215e8
	if (!ctx.cr6.eq) goto loc_82E215E8;
	// b 0x82e2153c
	goto loc_82E2153C;
loc_82E21464:
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// lwz r6,104(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// lwz r5,100(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// lwz r4,96(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// bl 0x82e21af8
	ctx.lr = 0x82E21478;
	sub_82E21AF8(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82e21c90
	ctx.lr = 0x82E21480;
	sub_82E21C90(ctx, base);
	// lwz r11,136(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// addi r10,r1,160
	ctx.r10.s64 = ctx.r1.s64 + 160;
	// rlwinm r9,r11,6,0,25
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0xFFFFFFC0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// add r29,r9,r10
	ctx.r29.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r11,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r11.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// stw r28,48(r29)
	PPC_STORE_U32(ctx.r29.u32 + 48, ctx.r28.u32);
	// bl 0x82e205f0
	ctx.lr = 0x82E214B0;
	sub_82E205F0(ctx, base);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e20728
	ctx.lr = 0x82E214C8;
	sub_82E20728(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x82e21530
	if (ctx.cr6.eq) goto loc_82E21530;
loc_82E214D0:
	// lwz r29,136(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// cmpwi cr6,r29,55
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 55, ctx.xer);
	// bge cr6,0x82e215d0
	if (!ctx.cr6.lt) goto loc_82E215D0;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82e21c90
	ctx.lr = 0x82E214E4;
	sub_82E21C90(ctx, base);
	// rlwinm r10,r29,6,0,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 6) & 0xFFFFFFC0;
	// addi r11,r1,160
	ctx.r11.s64 = ctx.r1.s64 + 160;
	// addi r9,r29,1
	ctx.r9.s64 = ctx.r29.s64 + 1;
	// add r29,r10,r11
	ctx.r29.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r9,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r9.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// stw r28,48(r29)
	PPC_STORE_U32(ctx.r29.u32 + 48, ctx.r28.u32);
	// bl 0x82e205f0
	ctx.lr = 0x82E21510;
	sub_82E205F0(ctx, base);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e20728
	ctx.lr = 0x82E21528;
	sub_82E20728(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x82e214d0
	if (!ctx.cr6.eq) goto loc_82E214D0;
loc_82E21530:
	// lwz r29,80(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r29,3
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 3, ctx.xer);
	// bne cr6,0x82e215d4
	if (!ctx.cr6.eq) goto loc_82E215D4;
loc_82E2153C:
	// lwz r11,92(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// stw r10,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r10.u32);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x82e21558
	if (!ctx.cr6.eq) goto loc_82E21558;
	// stw r25,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r25.u32);
	// b 0x82e21438
	goto loc_82E21438;
loc_82E21558:
	// cmpwi cr6,r10,20
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 20, ctx.xer);
	// bge cr6,0x82e215e8
	if (!ctx.cr6.lt) goto loc_82E215E8;
	// mullw r11,r10,r27
	ctx.r11.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r27.s32);
	// stw r28,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r28.u32);
	// subfic r10,r11,12345
	ctx.xer.ca = ctx.r11.u32 <= 12345;
	ctx.r10.s64 = 12345 - ctx.r11.s64;
	// addi r11,r31,48
	ctx.r11.s64 = ctx.r31.s64 + 48;
	// clrlwi r9,r10,1
	ctx.r9.u64 = ctx.r10.u32 & 0x7FFFFFFF;
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// extsw r7,r9
	ctx.r7.s64 = ctx.r9.s32;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// std r7,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r7.u64);
	// lfd f0,112(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// lvx128 v0,r0,r11
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fmuls f11,f12,f29
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f29.f64));
	// fsubs f10,f11,f31
	ctx.f10.f64 = double(float(ctx.f11.f64 - ctx.f31.f64));
	// fsubs f9,f11,f31
	ctx.f9.f64 = double(float(ctx.f11.f64 - ctx.f31.f64));
	// fsubs f8,f11,f31
	ctx.f8.f64 = double(float(ctx.f11.f64 - ctx.f31.f64));
	// fmuls f7,f10,f30
	ctx.f7.f64 = double(float(ctx.f10.f64 * ctx.f30.f64));
	// stfs f7,96(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// fmuls f6,f9,f30
	ctx.f6.f64 = double(float(ctx.f9.f64 * ctx.f30.f64));
	// stfs f6,100(r1)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// fmuls f5,f8,f30
	ctx.f5.f64 = double(float(ctx.f8.f64 * ctx.f30.f64));
	// stfs f5,104(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// lvx128 v13,r0,r8
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r8.u32) & ~0xF), VectorMaskL));
	// vaddfp v0,v13,v0
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v0.f32)));
	// stvx128 v0,r0,r6
	_mm_store_si128((__m128i*)(base + ((ctx.r6.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// b 0x82e21438
	goto loc_82E21438;
loc_82E215D0:
	// li r29,2
	ctx.r29.s64 = 2;
loc_82E215D4:
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e20858
	ctx.lr = 0x82E215E8;
	sub_82E20858(ctx, base);
loc_82E215E8:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,12176
	ctx.r1.s64 = ctx.r1.s64 + 12176;
	// lfd f29,-88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// lfd f30,-80(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// lfd f31,-72(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x82fa76bc
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E21600"))) PPC_WEAK_FUNC(sub_82E21600);
PPC_FUNC_IMPL(__imp__sub_82E21600) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7664
	ctx.lr = 0x82E21608;
	__savegprlr_23(ctx, base);
	// stfd f31,-88(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -88, ctx.f31.u64);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r23,-31960
	ctx.r23.s64 = -2094530560;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// lwz r3,-21024(r23)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r23.u32 + -21024);
	// mr r26,r8
	ctx.r26.u64 = ctx.r8.u64;
	// mr r30,r9
	ctx.r30.u64 = ctx.r9.u64;
	// mr r25,r10
	ctx.r25.u64 = ctx.r10.u64;
	// bl 0x831791e4
	ctx.lr = 0x82E2163C;
	__imp__KeTlsGetValue(ctx, base);
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82e21668
	if (!ctx.cr6.lt) goto loc_82E21668;
	// lis r10,-32236
	ctx.r10.s64 = -2112618496;
	// addi r9,r10,22644
	ctx.r9.s64 = ctx.r10.s64 + 22644;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// mftb r8
	ctx.r8.u64 = __rdtsc();
	// addi r6,r11,12
	ctx.r6.s64 = ctx.r11.s64 + 12;
	// stw r8,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
	// stw r6,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r6.u32);
loc_82E21668:
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// stfs f31,144(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// li r10,16
	ctx.r10.s64 = 16;
	// lvx128 v0,r0,r31
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r31.u32) & ~0xF), VectorMaskL));
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// fmuls f0,f31,f31
	ctx.f0.f64 = double(float(ctx.f31.f64 * ctx.f31.f64));
	// li r8,32
	ctx.r8.s64 = 32;
	// lwz r24,372(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 372);
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// li r6,48
	ctx.r6.s64 = 48;
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// lvx128 v13,r31,r10
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r31.u32 + ctx.r10.u32) & ~0xF), VectorMaskL));
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// stfs f0,160(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// stw r29,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r29.u32);
	// lvx128 v12,r31,r8
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((ctx.r31.u32 + ctx.r8.u32) & ~0xF), VectorMaskL));
	// stw r28,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r28.u32);
	// stvx128 v13,r0,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stw r27,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r27.u32);
	// stvx128 v12,r0,r7
	_mm_store_si128((__m128i*)(base + ((ctx.r7.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,0
	ctx.r11.s64 = 0;
	// lvx128 v11,r31,r6
	simd::store_shuffled(ctx.v11, simd::load_and_shuffle(base + ((ctx.r31.u32 + ctx.r6.u32) & ~0xF), VectorMaskL));
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// stw r26,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r26.u32);
	// stvx128 v11,r0,r5
	_mm_store_si128((__m128i*)(base + ((ctx.r5.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stw r30,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r30.u32);
	// stw r11,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r11.u32);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// stw r25,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r25.u32);
	// lvx128 v10,r0,r3
	simd::store_shuffled(ctx.v10, simd::load_and_shuffle(base + ((ctx.r3.u32) & ~0xF), VectorMaskL));
	// vspltw v9,v10,0
	_mm_store_si128((__m128i*)ctx.v9.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v10.u32), 0xFF));
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stvx128 v9,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v9.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// bl 0x82e213e8
	ctx.lr = 0x82E216F4;
	sub_82E213E8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// bne cr6,0x82e21720
	if (!ctx.cr6.eq) goto loc_82E21720;
	// mr r8,r24
	ctx.r8.u64 = ctx.r24.u64;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82e273e0
	ctx.lr = 0x82E2171C;
	sub_82E273E0(ctx, base);
	// li r30,1
	ctx.r30.s64 = 1;
loc_82E21720:
	// lwz r3,-21024(r23)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r23.u32 + -21024);
	// bl 0x831791e4
	ctx.lr = 0x82E21728;
	__imp__KeTlsGetValue(ctx, base);
	// lwz r9,12(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x82e21758
	if (!ctx.cr6.lt) goto loc_82E21758;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// addi r8,r9,22820
	ctx.r8.s64 = ctx.r9.s64 + 22820;
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// mftb r7
	ctx.r7.u64 = __rdtsc();
	// addi r5,r11,12
	ctx.r5.s64 = ctx.r11.s64 + 12;
	// stw r7,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r7.u32);
	// stw r5,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r5.u32);
loc_82E21758:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// lfd f31,-88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// b 0x82fa76b4
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E21768"))) PPC_WEAK_FUNC(sub_82E21768);
PPC_FUNC_IMPL(__imp__sub_82E21768) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7640
	ctx.lr = 0x82E21770;
	__savegprlr_14(ctx, base);
	// stfd f30,-168(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -168, ctx.f30.u64);
	// stfd f31,-160(r1)
	PPC_STORE_U64(ctx.r1.u32 + -160, ctx.f31.u64);
	// li r12,-224
	ctx.r12.s64 = -224;
	// stvx128 v125,r1,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r1.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v125.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r12,-208
	ctx.r12.s64 = -208;
	// stvx128 v126,r1,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r1.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v126.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r12,-192
	ctx.r12.s64 = -192;
	// stvx128 v127,r1,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r1.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v127.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stwu r1,-384(r1)
	ea = -384 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r14,r3
	ctx.r14.u64 = ctx.r3.u64;
	// mr r15,r4
	ctx.r15.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r18,r6
	ctx.r18.u64 = ctx.r6.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// mr r30,r8
	ctx.r30.u64 = ctx.r8.u64;
	// bl 0x82d2d090
	ctx.lr = 0x82E217B0;
	sub_82D2D090(ctx, base);
	// rlwinm r11,r18,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r18.u32 | (ctx.r18.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r16,0(r3)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r26,0
	ctx.r26.s64 = 0;
	// add r11,r18,r11
	ctx.r11.u64 = ctx.r18.u64 + ctx.r11.u64;
	// mr r17,r26
	ctx.r17.u64 = ctx.r26.u64;
	// rlwinm r11,r11,12,0,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0xFFFFF000;
	// cmpwi cr6,r18,0
	ctx.cr6.compare<int32_t>(ctx.r18.s32, 0, ctx.xer);
	// addi r10,r11,127
	ctx.r10.s64 = ctx.r11.s64 + 127;
	// rlwinm r11,r10,0,0,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFF80;
	// add r9,r11,r16
	ctx.r9.u64 = ctx.r11.u64 + ctx.r16.u64;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// ble cr6,0x82e218d0
	if (!ctx.cr6.gt) goto loc_82E218D0;
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r25,r28,16
	ctx.r25.s64 = ctx.r28.s64 + 16;
	// addi r24,r28,32
	ctx.r24.s64 = ctx.r28.s64 + 32;
	// addi r23,r28,48
	ctx.r23.s64 = ctx.r28.s64 + 48;
	// lfs f30,22660(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 22660);
	ctx.f30.f64 = double(temp.f32);
	// addi r31,r16,308
	ctx.r31.s64 = ctx.r16.s64 + 308;
	// lfs f31,11704(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 11704);
	ctx.f31.f64 = double(temp.f32);
	// subf r22,r29,r30
	ctx.r22.s64 = ctx.r30.s64 - ctx.r29.s64;
	// li r19,-292
	ctx.r19.s64 = -292;
	// li r20,-276
	ctx.r20.s64 = -276;
	// li r21,-260
	ctx.r21.s64 = -260;
	// li r27,-244
	ctx.r27.s64 = -244;
loc_82E21814:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r30,r31,-308
	ctx.r30.s64 = ctx.r31.s64 + -308;
	// addi r10,r31,-196
	ctx.r10.s64 = ctx.r31.s64 + -196;
	// addi r9,r31,-132
	ctx.r9.s64 = ctx.r31.s64 + -132;
	// addi r8,r31,-68
	ctx.r8.s64 = ctx.r31.s64 + -68;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r11,-4(r31)
	PPC_STORE_U32(ctx.r31.u32 + -4, ctx.r11.u32);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// lwzx r7,r22,r29
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r22.u32 + ctx.r29.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r7,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r7.u32);
	// lvx128 v0,r0,r28
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r28.u32) & ~0xF), VectorMaskL));
	// lwz r6,0(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// stvx128 v0,r0,r30
	_mm_store_si128((__m128i*)(base + ((ctx.r30.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v13,r0,r25
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r25.u32) & ~0xF), VectorMaskL));
	// stvx128 v13,r31,r19
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32 + ctx.r19.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v12,r0,r24
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((ctx.r24.u32) & ~0xF), VectorMaskL));
	// stvx128 v12,r31,r20
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32 + ctx.r20.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v11,r0,r23
	simd::store_shuffled(ctx.v11, simd::load_and_shuffle(base + ((ctx.r23.u32) & ~0xF), VectorMaskL));
	// stw r6,-220(r31)
	PPC_STORE_U32(ctx.r31.u32 + -220, ctx.r6.u32);
	// stw r15,-224(r31)
	PPC_STORE_U32(ctx.r31.u32 + -224, ctx.r15.u32);
	// stvx128 v11,r31,r21
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32 + ctx.r21.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stfs f31,-244(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + -244, temp.u32);
	// lvx128 v10,r31,r27
	simd::store_shuffled(ctx.v10, simd::load_and_shuffle(base + ((ctx.r31.u32 + ctx.r27.u32) & ~0xF), VectorMaskL));
	// vspltw v9,v10,0
	_mm_store_si128((__m128i*)ctx.v9.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v10.u32), 0xFF));
	// stvx128 v9,r31,r27
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32 + ctx.r27.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v9.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stw r10,-212(r31)
	PPC_STORE_U32(ctx.r31.u32 + -212, ctx.r10.u32);
	// stfs f30,-228(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + -228, temp.u32);
	// stw r9,-208(r31)
	PPC_STORE_U32(ctx.r31.u32 + -208, ctx.r9.u32);
	// stw r26,-216(r31)
	PPC_STORE_U32(ctx.r31.u32 + -216, ctx.r26.u32);
	// stw r8,-204(r31)
	PPC_STORE_U32(ctx.r31.u32 + -204, ctx.r8.u32);
	// stw r26,-200(r31)
	PPC_STORE_U32(ctx.r31.u32 + -200, ctx.r26.u32);
	// bl 0x82e20ad8
	ctx.lr = 0x82E21898;
	sub_82E20AD8(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x82e218a8
	if (!ctx.cr6.eq) goto loc_82E218A8;
	// addi r18,r18,-1
	ctx.r18.s64 = ctx.r18.s64 + -1;
	// b 0x82e218c0
	goto loc_82E218C0;
loc_82E218A8:
	// addi r6,r30,240
	ctx.r6.s64 = ctx.r30.s64 + 240;
	// addi r5,r30,176
	ctx.r5.s64 = ctx.r30.s64 + 176;
	// addi r4,r30,112
	ctx.r4.s64 = ctx.r30.s64 + 112;
	// addi r3,r30,320
	ctx.r3.s64 = ctx.r30.s64 + 320;
	// addi r31,r31,12288
	ctx.r31.s64 = ctx.r31.s64 + 12288;
	// bl 0x82e21af8
	ctx.lr = 0x82E218C0;
	sub_82E21AF8(ctx, base);
loc_82E218C0:
	// addi r17,r17,1
	ctx.r17.s64 = ctx.r17.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmpw cr6,r17,r18
	ctx.cr6.compare<int32_t>(ctx.r17.s32, ctx.r18.s32, ctx.xer);
	// blt cr6,0x82e21814
	if (ctx.cr6.lt) goto loc_82E21814;
loc_82E218D0:
	// cmpwi cr6,r18,2
	ctx.cr6.compare<int32_t>(ctx.r18.s32, 2, ctx.xer);
	// ble cr6,0x82e219a0
	if (!ctx.cr6.gt) goto loc_82E219A0;
	// li r18,2
	ctx.r18.s64 = 2;
loc_82E218DC:
	// stw r26,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r26.u32);
	// addi r23,r16,24560
	ctx.r23.s64 = ctx.r16.s64 + 24560;
	// stw r26,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r26.u32);
	// addi r22,r16,12272
	ctx.r22.s64 = ctx.r16.s64 + 12272;
	// addi r21,r16,12608
	ctx.r21.s64 = ctx.r16.s64 + 12608;
	// addi r20,r16,320
	ctx.r20.s64 = ctx.r16.s64 + 320;
loc_82E218F4:
	// mr r7,r23
	ctx.r7.u64 = ctx.r23.u64;
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x82e27008
	ctx.lr = 0x82E2190C;
	sub_82E27008(ctx, base);
	// mr r24,r26
	ctx.r24.u64 = ctx.r26.u64;
	// mr r25,r26
	ctx.r25.u64 = ctx.r26.u64;
	// cmpwi cr6,r18,0
	ctx.cr6.compare<int32_t>(ctx.r18.s32, 0, ctx.xer);
	// ble cr6,0x82e219cc
	if (!ctx.cr6.gt) goto loc_82E219CC;
	// addi r27,r1,80
	ctx.r27.s64 = ctx.r1.s64 + 80;
	// addi r31,r16,328
	ctx.r31.s64 = ctx.r16.s64 + 328;
loc_82E21924:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82e219b8
	if (ctx.cr6.eq) goto loc_82E219B8;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,55
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 55, ctx.xer);
	// blt cr6,0x82e219b8
	if (ctx.cr6.lt) goto loc_82E219B8;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// addi r30,r31,-8
	ctx.r30.s64 = ctx.r31.s64 + -8;
	// rlwinm r10,r11,6,0,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0xFFFFFFC0;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// add r11,r10,r30
	ctx.r11.u64 = ctx.r10.u64 + ctx.r30.u64;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r28,r31,-328
	ctx.r28.s64 = ctx.r31.s64 + -328;
	// addi r29,r11,32
	ctx.r29.s64 = ctx.r11.s64 + 32;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// stw r26,80(r11)
	PPC_STORE_U32(ctx.r11.u32 + 80, ctx.r26.u32);
	// lwz r4,11944(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11944);
	// bl 0x82e205f0
	ctx.lr = 0x82E21970;
	sub_82E205F0(ctx, base);
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// lwz r5,11944(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11944);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82e20728
	ctx.lr = 0x82E21988;
	sub_82E20728(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x82e219b4
	if (!ctx.cr6.eq) goto loc_82E219B4;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x82e219a4
	if (ctx.cr6.eq) goto loc_82E219A4;
	// b 0x82e219b8
	goto loc_82E219B8;
loc_82E219A0:
	// bge cr6,0x82e218dc
	if (!ctx.cr6.lt) goto loc_82E218DC;
loc_82E219A4:
	// bl 0x82d2d090
	ctx.lr = 0x82E219A8;
	sub_82D2D090(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82e21ac8
	goto loc_82E21AC8;
loc_82E219B4:
	// li r24,1
	ctx.r24.s64 = 1;
loc_82E219B8:
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// addi r31,r31,12288
	ctx.r31.s64 = ctx.r31.s64 + 12288;
	// addi r27,r27,4
	ctx.r27.s64 = ctx.r27.s64 + 4;
	// cmpw cr6,r25,r18
	ctx.cr6.compare<int32_t>(ctx.r25.s32, ctx.r18.s32, ctx.xer);
	// blt cr6,0x82e21924
	if (ctx.cr6.lt) goto loc_82E21924;
loc_82E219CC:
	// clrlwi r11,r24,24
	ctx.r11.u64 = ctx.r24.u32 & 0xFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82e218f4
	if (!ctx.cr6.eq) goto loc_82E218F4;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lfs f13,108(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	ctx.f13.f64 = double(temp.f32);
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// lfs f0,16(r15)
	temp.u32 = PPC_LOAD_U32(ctx.r15.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// addi r9,r11,544
	ctx.r9.s64 = ctx.r11.s64 + 544;
	// fneg f13,f13
	ctx.f13.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// cmpwi cr6,r18,0
	ctx.cr6.compare<int32_t>(ctx.r18.s32, 0, ctx.xer);
	// lvx128 v13,r0,r10
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// lvx128 v0,r0,r9
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// vxor v0,v13,v0
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_xor_si128(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// ble cr6,0x82e21abc
	if (!ctx.cr6.gt) goto loc_82E21ABC;
	// vspltw128 v127,v0,0
	_mm_store_si128((__m128i*)ctx.v127.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0xFF));
	// addi r27,r14,48
	ctx.r27.s64 = ctx.r14.s64 + 48;
	// vspltw128 v126,v0,1
	_mm_store_si128((__m128i*)ctx.v126.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0xAA));
	// addi r29,r14,16
	ctx.r29.s64 = ctx.r14.s64 + 16;
	// vspltw128 v125,v0,2
	_mm_store_si128((__m128i*)ctx.v125.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0x55));
	// addi r28,r14,32
	ctx.r28.s64 = ctx.r14.s64 + 32;
	// fsubs f31,f13,f0
	ctx.f31.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// addi r31,r16,308
	ctx.r31.s64 = ctx.r16.s64 + 308;
	// mr r30,r18
	ctx.r30.u64 = ctx.r18.u64;
	// li r26,16
	ctx.r26.s64 = 16;
loc_82E21A2C:
	// addi r4,r31,12
	ctx.r4.s64 = ctx.r31.s64 + 12;
	// lwz r5,11964(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11964);
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// addi r3,r31,-308
	ctx.r3.s64 = ctx.r31.s64 + -308;
	// bl 0x82e20858
	ctx.lr = 0x82E21A40;
	sub_82E20858(ctx, base);
	// lvx128 v8,r0,r14
	simd::store_shuffled(ctx.v8, simd::load_and_shuffle(base + ((ctx.r14.u32) & ~0xF), VectorMaskL));
	// vmulfp128 v11,v8,v127
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v11.f32, _mm_mul_ps(_mm_load_ps(ctx.v8.f32), _mm_load_ps(ctx.v127.f32)));
	// lvx128 v13,r0,r29
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r29.u32) & ~0xF), VectorMaskL));
	// lvx128 v10,r0,r28
	simd::store_shuffled(ctx.v10, simd::load_and_shuffle(base + ((ctx.r28.u32) & ~0xF), VectorMaskL));
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// lvx128 v0,r0,r11
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// vspltw v9,v0,0
	_mm_store_si128((__m128i*)ctx.v9.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0xFF));
	// vspltw v12,v0,1
	_mm_store_si128((__m128i*)ctx.v12.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0xAA));
	// vspltw v0,v0,2
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0x55));
	// vmaddcfp128 v13,v126,v13,v11
	_mm_store_ps(ctx.v13.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v126.f32), _mm_load_ps(ctx.v13.f32)), _mm_load_ps(ctx.v11.f32)));
	// vmaddfp128 v13,v10,v125,v13
	_mm_store_ps(ctx.v13.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v10.f32), _mm_load_ps(ctx.v125.f32)), _mm_load_ps(ctx.v13.f32)));
	// stvx128 v13,r10,r26
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32 + ctx.r26.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lwz r8,-4(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	// lvx128 v10,r0,r29
	simd::store_shuffled(ctx.v10, simd::load_and_shuffle(base + ((ctx.r29.u32) & ~0xF), VectorMaskL));
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lvx128 v6,r0,r14
	simd::store_shuffled(ctx.v6, simd::load_and_shuffle(base + ((ctx.r14.u32) & ~0xF), VectorMaskL));
	// vmulfp128 v11,v6,v9
	_mm_store_ps(ctx.v11.f32, _mm_mul_ps(_mm_load_ps(ctx.v6.f32), _mm_load_ps(ctx.v9.f32)));
	// vmaddfp v12,v10,v12,v11
	_mm_store_ps(ctx.v12.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v10.f32), _mm_load_ps(ctx.v12.f32)), _mm_load_ps(ctx.v11.f32)));
	// lvx128 v13,r0,r28
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r28.u32) & ~0xF), VectorMaskL));
	// lvx128 v7,r0,r27
	simd::store_shuffled(ctx.v7, simd::load_and_shuffle(base + ((ctx.r27.u32) & ~0xF), VectorMaskL));
	// lfs f0,16(r8)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f13,f31,f0
	ctx.f13.f64 = double(float(ctx.f31.f64 - ctx.f0.f64));
	// vmaddfp v0,v13,v0,v12
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v0.f32)), _mm_load_ps(ctx.v12.f32)));
	// vaddfp v5,v0,v7
	_mm_store_ps(ctx.v5.f32, _mm_add_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v7.f32)));
	// stvx128 v5,r0,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v5.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stfs f13,28(r7)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r7.u32 + 28, temp.u32);
	// addi r31,r31,12288
	ctx.r31.s64 = ctx.r31.s64 + 12288;
	// bne 0x82e21a2c
	if (!ctx.cr0.eq) goto loc_82E21A2C;
loc_82E21ABC:
	// bl 0x82d2d090
	ctx.lr = 0x82E21AC0;
	sub_82D2D090(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82E21AC8:
	// stw r16,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r16.u32);
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
	// li r0,-224
	ctx.r0.s64 = -224;
	// lvx128 v125,r1,r0
	simd::store_shuffled(ctx.v125, simd::load_and_shuffle(base + ((ctx.r1.u32 + ctx.r0.u32) & ~0xF), VectorMaskL));
	// li r0,-208
	ctx.r0.s64 = -208;
	// lvx128 v126,r1,r0
	simd::store_shuffled(ctx.v126, simd::load_and_shuffle(base + ((ctx.r1.u32 + ctx.r0.u32) & ~0xF), VectorMaskL));
	// li r0,-192
	ctx.r0.s64 = -192;
	// lvx128 v127,r1,r0
	simd::store_shuffled(ctx.v127, simd::load_and_shuffle(base + ((ctx.r1.u32 + ctx.r0.u32) & ~0xF), VectorMaskL));
	// lfd f30,-168(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -168);
	// lfd f31,-160(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -160);
	// b 0x82fa7690
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E21AF4"))) PPC_WEAK_FUNC(sub_82E21AF4);
PPC_FUNC_IMPL(__imp__sub_82E21AF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E21AF8"))) PPC_WEAK_FUNC(sub_82E21AF8);
PPC_FUNC_IMPL(__imp__sub_82E21AF8) {
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
	// li r8,4
	ctx.r8.s64 = 4;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r3,32
	ctx.r11.s64 = ctx.r3.s64 + 32;
	// stw r8,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r8.u32);
	// li r10,16
	ctx.r10.s64 = 16;
	// li r9,32
	ctx.r9.s64 = 32;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// li r30,0
	ctx.r30.s64 = 0;
loc_82E21B2C:
	// lvx128 v0,r0,r4
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r4.u32) & ~0xF), VectorMaskL));
	// addi r4,r4,16
	ctx.r4.s64 = ctx.r4.s64 + 16;
	// stvx128 v0,r11,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v13,r0,r5
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r5.u32) & ~0xF), VectorMaskL));
	// addi r5,r5,16
	ctx.r5.s64 = ctx.r5.s64 + 16;
	// stvx128 v13,r11,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v12,r0,r6
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((ctx.r6.u32) & ~0xF), VectorMaskL));
	// stw r30,48(r11)
	PPC_STORE_U32(ctx.r11.u32 + 48, ctx.r30.u32);
	// stvx128 v12,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r6,r6,16
	ctx.r6.s64 = ctx.r6.s64 + 16;
	// addi r11,r11,64
	ctx.r11.s64 = ctx.r11.s64 + 64;
	// bdnz 0x82e21b2c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82E21B2C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e26c70
	ctx.lr = 0x82E21B64;
	sub_82E26C70(ctx, base);
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
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

__attribute__((alias("__imp__sub_82E21B80"))) PPC_WEAK_FUNC(sub_82E21B80);
PPC_FUNC_IMPL(__imp__sub_82E21B80) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// lvx128 v0,r0,r4
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v13,r0,r3
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r3.u32) & ~0xF), VectorMaskL));
	// addi r10,r1,-16
	ctx.r10.s64 = ctx.r1.s64 + -16;
	// li r3,1
	ctx.r3.s64 = 1;
	// lvx128 v12,r0,r11
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// vsubfp v11,v0,v12
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v11.f32, _mm_sub_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v12.f32)));
	// vmsum3fp128 v10,v13,v11
	_mm_store_ps(ctx.v10.f32, _mm_dp_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v11.f32), 0xEF));
	// stvewx v10,r0,r10
	ea = (ctx.r10.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v10.u32[3 - ((ea & 0xF) >> 2)]);
	// lfs f12,-16(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,0(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f12,f13
	ctx.cr6.compare(ctx.f12.f64, ctx.f13.f64);
	// ble cr6,0x82e21bc8
	if (!ctx.cr6.gt) goto loc_82E21BC8;
	// lfs f0,0(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f12,f0
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// bge cr6,0x82e21be4
	if (!ctx.cr6.lt) goto loc_82E21BE4;
	// stfs f12,0(r6)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r6.u32 + 0, temp.u32);
	// b 0x82e21be4
	goto loc_82E21BE4;
loc_82E21BC8:
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// lfs f0,22640(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 22640);
	ctx.f0.f64 = double(temp.f32);
	// fadds f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 + ctx.f0.f64));
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x82e21be0
	if (!ctx.cr6.gt) goto loc_82E21BE0;
	// stfs f0,0(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
loc_82E21BE0:
	// li r3,2
	ctx.r3.s64 = 2;
loc_82E21BE4:
	// lfs f0,0(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,0(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bltlr cr6
	if (ctx.cr6.lt) return;
	// li r3,4
	ctx.r3.s64 = 4;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E21BFC"))) PPC_WEAK_FUNC(sub_82E21BFC);
PPC_FUNC_IMPL(__imp__sub_82E21BFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E21C00"))) PPC_WEAK_FUNC(sub_82E21C00);
PPC_FUNC_IMPL(__imp__sub_82E21C00) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7674
	ctx.lr = 0x82E21C08;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// lis r10,-32236
	ctx.r10.s64 = -2112618496;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r11,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r11.u32);
	// lfs f0,22640(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 22640);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,28856(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 28856);
	ctx.f13.f64 = double(temp.f32);
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// stfs f0,0(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// stfs f13,4(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// addi r6,r3,4
	ctx.r6.s64 = ctx.r3.s64 + 4;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// bl 0x82e21b80
	ctx.lr = 0x82E21C58;
	sub_82E21B80(ctx, base);
	// stw r3,68(r30)
	PPC_STORE_U32(ctx.r30.u32 + 68, ctx.r3.u32);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x82e21c84
	if (!ctx.cr6.eq) goto loc_82E21C84;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e26878
	ctx.lr = 0x82E21C7C;
	sub_82E26878(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c4
	__restgprlr_27(ctx, base);
	return;
loc_82E21C84:
	// li r3,2
	ctx.r3.s64 = 2;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E21C90"))) PPC_WEAK_FUNC(sub_82E21C90);
PPC_FUNC_IMPL(__imp__sub_82E21C90) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r10,16(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// addi r11,r3,3952
	ctx.r11.s64 = ctx.r3.s64 + 3952;
	// addi r10,r10,-2
	ctx.r10.s64 = ctx.r10.s64 + -2;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// lfs f0,64(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	ctx.f0.f64 = double(temp.f32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bltlr cr6
	if (ctx.cr6.lt) return;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// blt cr6,0x82e21d24
	if (ctx.cr6.lt) goto loc_82E21D24;
	// rlwinm r8,r10,30,2,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x3FFFFFFF;
	// rlwinm r7,r10,0,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFC;
	// subf r9,r7,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r7.s64;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_82E21CCC:
	// lfs f13,144(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 144);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x82e21ce0
	if (!ctx.cr6.lt) goto loc_82E21CE0;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
	// addi r3,r11,80
	ctx.r3.s64 = ctx.r11.s64 + 80;
loc_82E21CE0:
	// lfs f13,224(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 224);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x82e21cf4
	if (!ctx.cr6.lt) goto loc_82E21CF4;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
	// addi r3,r11,160
	ctx.r3.s64 = ctx.r11.s64 + 160;
loc_82E21CF4:
	// lfs f13,304(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 304);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x82e21d08
	if (!ctx.cr6.lt) goto loc_82E21D08;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
	// addi r3,r11,240
	ctx.r3.s64 = ctx.r11.s64 + 240;
loc_82E21D08:
	// lfs f13,384(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 384);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x82e21d1c
	if (!ctx.cr6.lt) goto loc_82E21D1C;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
	// addi r3,r11,320
	ctx.r3.s64 = ctx.r11.s64 + 320;
loc_82E21D1C:
	// addi r11,r11,320
	ctx.r11.s64 = ctx.r11.s64 + 320;
	// bdnz 0x82e21ccc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82E21CCC;
loc_82E21D24:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bltlr cr6
	if (ctx.cr6.lt) return;
	// addi r10,r9,1
	ctx.r10.s64 = ctx.r9.s64 + 1;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82E21D34:
	// addi r11,r11,80
	ctx.r11.s64 = ctx.r11.s64 + 80;
	// lfs f13,64(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x82e21d4c
	if (!ctx.cr6.lt) goto loc_82E21D4C;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
loc_82E21D4C:
	// bdnz 0x82e21d34
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82E21D34;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E21D54"))) PPC_WEAK_FUNC(sub_82E21D54);
PPC_FUNC_IMPL(__imp__sub_82E21D54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E21D58"))) PPC_WEAK_FUNC(sub_82E21D58);
PPC_FUNC_IMPL(__imp__sub_82E21D58) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// addi r10,r11,10816
	ctx.r10.s64 = ctx.r11.s64 + 10816;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E21D68"))) PPC_WEAK_FUNC(sub_82E21D68);
PPC_FUNC_IMPL(__imp__sub_82E21D68) {
	PPC_FUNC_PROLOGUE();
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,0(r3)
	PPC_STORE_U8(ctx.r3.u32 + 0, ctx.r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E21D74"))) PPC_WEAK_FUNC(sub_82E21D74);
PPC_FUNC_IMPL(__imp__sub_82E21D74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E21D78"))) PPC_WEAK_FUNC(sub_82E21D78);
PPC_FUNC_IMPL(__imp__sub_82E21D78) {
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
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lis r10,-32236
	ctx.r10.s64 = -2112618496;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r4,r10,22664
	ctx.r4.s64 = ctx.r10.s64 + 22664;
	// lwz r9,24(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82E21DA8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r7,28(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 28);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x82E21DBC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
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

__attribute__((alias("__imp__sub_82E21DD0"))) PPC_WEAK_FUNC(sub_82E21DD0);
PPC_FUNC_IMPL(__imp__sub_82E21DD0) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E21DD8"))) PPC_WEAK_FUNC(sub_82E21DD8);
PPC_FUNC_IMPL(__imp__sub_82E21DD8) {
	PPC_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E21DE0"))) PPC_WEAK_FUNC(sub_82E21DE0);
PPC_FUNC_IMPL(__imp__sub_82E21DE0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,22696
	ctx.r9.s64 = ctx.r11.s64 + 22696;
	// lis r8,2
	ctx.r8.s64 = 131072;
	// sth r10,6(r3)
	PPC_STORE_U16(ctx.r3.u32 + 6, ctx.r10.u16);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r8,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E21E00"))) PPC_WEAK_FUNC(sub_82E21E00);
PPC_FUNC_IMPL(__imp__sub_82E21E00) {
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
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// addi r31,r3,8
	ctx.r31.s64 = ctx.r3.s64 + 8;
	// stw r11,28(r6)
	PPC_STORE_U32(ctx.r6.u32 + 28, ctx.r11.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// bl 0x82d2d090
	ctx.lr = 0x82E21E2C;
	sub_82D2D090(ctx, base);
	// lwz r3,24(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82E21E48;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,1000
	ctx.r11.s64 = 1000;
	// stw r3,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r3.u32);
	// li r10,3
	ctx.r10.s64 = 3;
	// li r8,4
	ctx.r8.s64 = 4;
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// stw r10,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r10.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r8,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r8.u32);
	// stw r11,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r11.u32);
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
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

__attribute__((alias("__imp__sub_82E21E8C"))) PPC_WEAK_FUNC(sub_82E21E8C);
PPC_FUNC_IMPL(__imp__sub_82E21E8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E21E90"))) PPC_WEAK_FUNC(sub_82E21E90);
PPC_FUNC_IMPL(__imp__sub_82E21E90) {
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
	// lwz r31,8(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r30,24(r6)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r6.u32 + 24);
	// bl 0x82d2d090
	ctx.lr = 0x82E21EB0;
	sub_82D2D090(ctx, base);
	// lwz r3,24(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82E21ED0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
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

__attribute__((alias("__imp__sub_82E21EE8"))) PPC_WEAK_FUNC(sub_82E21EE8);
PPC_FUNC_IMPL(__imp__sub_82E21EE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31960
	ctx.r11.s64 = -2094530560;
	// addi r3,r11,-8936
	ctx.r3.s64 = ctx.r11.s64 + -8936;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E21EF4"))) PPC_WEAK_FUNC(sub_82E21EF4);
PPC_FUNC_IMPL(__imp__sub_82E21EF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E21EF8"))) PPC_WEAK_FUNC(sub_82E21EF8);
PPC_FUNC_IMPL(__imp__sub_82E21EF8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7654
	ctx.lr = 0x82E21F00;
	__savegprlr_19(ctx, base);
	// stwu r1,-800(r1)
	ea = -800 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r10,64(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 64);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lbz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r5.u32 + 0);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82e2283c
	if (!ctx.cr6.eq) goto loc_82E2283C;
	// lis r10,-32236
	ctx.r10.s64 = -2112618496;
	// lis r9,-32236
	ctx.r9.s64 = -2112618496;
	// lis r22,-31960
	ctx.r22.s64 = -2094530560;
	// addi r24,r10,22724
	ctx.r24.s64 = ctx.r10.s64 + 22724;
	// addi r23,r9,22056
	ctx.r23.s64 = ctx.r9.s64 + 22056;
loc_82E21F34:
	// cmplwi cr6,r11,107
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 107, ctx.xer);
	// bgt cr6,0x82e227c0
	if (ctx.cr6.gt) goto loc_82E227C0;
	// lis r12,-32030
	ctx.r12.s64 = -2099118080;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,8020
	ctx.r12.s64 = ctx.r12.s64 + 8020;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_82E2283C;
	case 1:
		goto loc_82E22530;
	case 2:
		goto loc_82E22530;
	case 3:
		goto loc_82E22530;
	case 4:
		goto loc_82E22530;
	case 5:
		goto loc_82E224DC;
	case 6:
		goto loc_82E224EC;
	case 7:
		goto loc_82E22508;
	case 8:
		goto loc_82E227C0;
	case 9:
		goto loc_82E22644;
	case 10:
		goto loc_82E2267C;
	case 11:
		goto loc_82E226C0;
	case 12:
		goto loc_82E227C0;
	case 13:
		goto loc_82E227C0;
	case 14:
		goto loc_82E227C0;
	case 15:
		goto loc_82E227C0;
	case 16:
		goto loc_82E22328;
	case 17:
		goto loc_82E22328;
	case 18:
		goto loc_82E22328;
	case 19:
		goto loc_82E22104;
	case 20:
		goto loc_82E22134;
	case 21:
		goto loc_82E22168;
	case 22:
		goto loc_82E22198;
	case 23:
		goto loc_82E221CC;
	case 24:
		goto loc_82E221FC;
	case 25:
		goto loc_82E22230;
	case 26:
		goto loc_82E22268;
	case 27:
		goto loc_82E22290;
	case 28:
		goto loc_82E222B8;
	case 29:
		goto loc_82E227C0;
	case 30:
		goto loc_82E227C0;
	case 31:
		goto loc_82E227C0;
	case 32:
		goto loc_82E22378;
	case 33:
		goto loc_82E22378;
	case 34:
		goto loc_82E22378;
	case 35:
		goto loc_82E223C4;
	case 36:
		goto loc_82E223C4;
	case 37:
		goto loc_82E223C4;
	case 38:
		goto loc_82E2243C;
	case 39:
		goto loc_82E2243C;
	case 40:
		goto loc_82E2243C;
	case 41:
		goto loc_82E22474;
	case 42:
		goto loc_82E22474;
	case 43:
		goto loc_82E22474;
	case 44:
		goto loc_82E227C0;
	case 45:
		goto loc_82E227C0;
	case 46:
		goto loc_82E227C0;
	case 47:
		goto loc_82E227C0;
	case 48:
		goto loc_82E22834;
	case 49:
		goto loc_82E22834;
	case 50:
		goto loc_82E22834;
	case 51:
		goto loc_82E22834;
	case 52:
		goto loc_82E22834;
	case 53:
		goto loc_82E22834;
	case 54:
		goto loc_82E22834;
	case 55:
		goto loc_82E22834;
	case 56:
		goto loc_82E22834;
	case 57:
		goto loc_82E22834;
	case 58:
		goto loc_82E22834;
	case 59:
		goto loc_82E22834;
	case 60:
		goto loc_82E22834;
	case 61:
		goto loc_82E22834;
	case 62:
		goto loc_82E22834;
	case 63:
		goto loc_82E22834;
	case 64:
		goto loc_82E22834;
	case 65:
		goto loc_82E22834;
	case 66:
		goto loc_82E22834;
	case 67:
		goto loc_82E22834;
	case 68:
		goto loc_82E22834;
	case 69:
		goto loc_82E22834;
	case 70:
		goto loc_82E22834;
	case 71:
		goto loc_82E22834;
	case 72:
		goto loc_82E22834;
	case 73:
		goto loc_82E22834;
	case 74:
		goto loc_82E22834;
	case 75:
		goto loc_82E22834;
	case 76:
		goto loc_82E22834;
	case 77:
		goto loc_82E22834;
	case 78:
		goto loc_82E22834;
	case 79:
		goto loc_82E22834;
	case 80:
		goto loc_82E22834;
	case 81:
		goto loc_82E22834;
	case 82:
		goto loc_82E22834;
	case 83:
		goto loc_82E22834;
	case 84:
		goto loc_82E227C0;
	case 85:
		goto loc_82E227C0;
	case 86:
		goto loc_82E227C0;
	case 87:
		goto loc_82E227C0;
	case 88:
		goto loc_82E227C0;
	case 89:
		goto loc_82E227C0;
	case 90:
		goto loc_82E227C0;
	case 91:
		goto loc_82E227C0;
	case 92:
		goto loc_82E227C0;
	case 93:
		goto loc_82E227C0;
	case 94:
		goto loc_82E227C0;
	case 95:
		goto loc_82E227C0;
	case 96:
		goto loc_82E22714;
	case 97:
		goto loc_82E22714;
	case 98:
		goto loc_82E22714;
	case 99:
		goto loc_82E22714;
	case 100:
		goto loc_82E22730;
	case 101:
		goto loc_82E22730;
	case 102:
		goto loc_82E22730;
	case 103:
		goto loc_82E22730;
	case 104:
		goto loc_82E22758;
	case 105:
		goto loc_82E22758;
	case 106:
		goto loc_82E22758;
	case 107:
		goto loc_82E22758;
	default:
		__builtin_unreachable();
	}
	// lwz r23,10300(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 10300);
	// lwz r23,9520(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 9520);
	// lwz r23,9520(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 9520);
	// lwz r23,9520(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 9520);
	// lwz r23,9520(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 9520);
	// lwz r23,9436(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 9436);
	// lwz r23,9452(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 9452);
	// lwz r23,9480(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 9480);
	// lwz r23,10176(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 10176);
	// lwz r23,9796(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 9796);
	// lwz r23,9852(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 9852);
	// lwz r23,9920(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 9920);
	// lwz r23,10176(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 10176);
	// lwz r23,10176(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 10176);
	// lwz r23,10176(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 10176);
	// lwz r23,10176(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 10176);
	// lwz r23,9000(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 9000);
	// lwz r23,9000(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 9000);
	// lwz r23,9000(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 9000);
	// lwz r23,8452(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 8452);
	// lwz r23,8500(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 8500);
	// lwz r23,8552(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 8552);
	// lwz r23,8600(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 8600);
	// lwz r23,8652(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 8652);
	// lwz r23,8700(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 8700);
	// lwz r23,8752(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 8752);
	// lwz r23,8808(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 8808);
	// lwz r23,8848(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 8848);
	// lwz r23,8888(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 8888);
	// lwz r23,10176(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 10176);
	// lwz r23,10176(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 10176);
	// lwz r23,10176(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 10176);
	// lwz r23,9080(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 9080);
	// lwz r23,9080(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 9080);
	// lwz r23,9080(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 9080);
	// lwz r23,9156(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 9156);
	// lwz r23,9156(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 9156);
	// lwz r23,9156(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 9156);
	// lwz r23,9276(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 9276);
	// lwz r23,9276(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 9276);
	// lwz r23,9276(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 9276);
	// lwz r23,9332(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 9332);
	// lwz r23,9332(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 9332);
	// lwz r23,9332(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 9332);
	// lwz r23,10176(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 10176);
	// lwz r23,10176(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 10176);
	// lwz r23,10176(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 10176);
	// lwz r23,10176(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 10176);
	// lwz r23,10292(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 10292);
	// lwz r23,10292(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 10292);
	// lwz r23,10292(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 10292);
	// lwz r23,10292(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 10292);
	// lwz r23,10292(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 10292);
	// lwz r23,10292(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 10292);
	// lwz r23,10292(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 10292);
	// lwz r23,10292(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 10292);
	// lwz r23,10292(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 10292);
	// lwz r23,10292(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 10292);
	// lwz r23,10292(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 10292);
	// lwz r23,10292(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 10292);
	// lwz r23,10292(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 10292);
	// lwz r23,10292(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 10292);
	// lwz r23,10292(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 10292);
	// lwz r23,10292(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 10292);
	// lwz r23,10292(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 10292);
	// lwz r23,10292(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 10292);
	// lwz r23,10292(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 10292);
	// lwz r23,10292(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 10292);
	// lwz r23,10292(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 10292);
	// lwz r23,10292(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 10292);
	// lwz r23,10292(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 10292);
	// lwz r23,10292(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 10292);
	// lwz r23,10292(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 10292);
	// lwz r23,10292(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 10292);
	// lwz r23,10292(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 10292);
	// lwz r23,10292(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 10292);
	// lwz r23,10292(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 10292);
	// lwz r23,10292(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 10292);
	// lwz r23,10292(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 10292);
	// lwz r23,10292(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 10292);
	// lwz r23,10292(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 10292);
	// lwz r23,10292(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 10292);
	// lwz r23,10292(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 10292);
	// lwz r23,10292(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 10292);
	// lwz r23,10176(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 10176);
	// lwz r23,10176(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 10176);
	// lwz r23,10176(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 10176);
	// lwz r23,10176(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 10176);
	// lwz r23,10176(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 10176);
	// lwz r23,10176(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 10176);
	// lwz r23,10176(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 10176);
	// lwz r23,10176(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 10176);
	// lwz r23,10176(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 10176);
	// lwz r23,10176(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 10176);
	// lwz r23,10176(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 10176);
	// lwz r23,10176(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 10176);
	// lwz r23,10004(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 10004);
	// lwz r23,10004(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 10004);
	// lwz r23,10004(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 10004);
	// lwz r23,10004(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 10004);
	// lwz r23,10032(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 10032);
	// lwz r23,10032(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 10032);
	// lwz r23,10032(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 10032);
	// lwz r23,10032(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 10032);
	// lwz r23,10072(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 10072);
	// lwz r23,10072(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 10072);
	// lwz r23,10072(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 10072);
	// lwz r23,10072(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 10072);
loc_82E22104:
	// lwz r11,44(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	// lbz r9,1(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// srawi r10,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 1;
	// lbz r5,2(r31)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2);
	// lwz r6,40(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// rotlwi r8,r9,1
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r9.u32, 1);
	// lwz r7,36(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rotlwi r9,r5,1
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r5.u32, 1);
	// add r11,r6,r7
	ctx.r11.u64 = ctx.r6.u64 + ctx.r7.u64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// b 0x82e222f0
	goto loc_82E222F0;
loc_82E22134:
	// lwz r11,44(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	// lwz r9,36(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// lwz r8,40(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// srawi r10,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 1;
	// lbz r6,1(r31)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// lbz r5,2(r31)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2);
	// subf r7,r8,r9
	ctx.r7.s64 = ctx.r9.s64 - ctx.r8.s64;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rotlwi r8,r6,1
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r6.u32, 1);
	// rotlwi r9,r5,1
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r5.u32, 1);
	// addi r11,r7,255
	ctx.r11.s64 = ctx.r7.s64 + 255;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// b 0x82e222f0
	goto loc_82E222F0;
loc_82E22168:
	// lwz r11,44(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	// lbz r9,1(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// srawi r10,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 1;
	// lbz r5,2(r31)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2);
	// lwz r6,40(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// rotlwi r8,r9,1
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r9.u32, 1);
	// lwz r7,32(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rotlwi r9,r5,1
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r5.u32, 1);
	// add r11,r6,r7
	ctx.r11.u64 = ctx.r6.u64 + ctx.r7.u64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// b 0x82e222f0
	goto loc_82E222F0;
loc_82E22198:
	// lwz r11,44(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	// lwz r9,32(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// lwz r8,40(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// srawi r10,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 1;
	// lbz r6,1(r31)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// lbz r5,2(r31)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2);
	// subf r7,r8,r9
	ctx.r7.s64 = ctx.r9.s64 - ctx.r8.s64;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rotlwi r8,r6,1
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r6.u32, 1);
	// rotlwi r9,r5,1
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r5.u32, 1);
	// addi r11,r7,255
	ctx.r11.s64 = ctx.r7.s64 + 255;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// b 0x82e222f0
	goto loc_82E222F0;
loc_82E221CC:
	// lwz r11,44(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	// lbz r9,1(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// srawi r10,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 1;
	// lbz r5,2(r31)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2);
	// lwz r6,36(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// rotlwi r8,r9,1
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r9.u32, 1);
	// lwz r7,32(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rotlwi r9,r5,1
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r5.u32, 1);
	// add r11,r6,r7
	ctx.r11.u64 = ctx.r6.u64 + ctx.r7.u64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// b 0x82e222f0
	goto loc_82E222F0;
loc_82E221FC:
	// lwz r11,44(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	// lwz r9,32(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// lwz r8,36(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// srawi r10,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 1;
	// lbz r6,1(r31)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// lbz r5,2(r31)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2);
	// subf r7,r8,r9
	ctx.r7.s64 = ctx.r9.s64 - ctx.r8.s64;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rotlwi r8,r6,1
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r6.u32, 1);
	// rotlwi r9,r5,1
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r5.u32, 1);
	// addi r11,r7,255
	ctx.r11.s64 = ctx.r7.s64 + 255;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// b 0x82e222f0
	goto loc_82E222F0;
loc_82E22230:
	// lbz r10,1(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// lbz r11,2(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2);
	// rotlwi r8,r10,1
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// lwz r6,40(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// lwz r5,36(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// rotlwi r9,r11,1
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// add r8,r10,r8
	ctx.r8.u64 = ctx.r10.u64 + ctx.r8.u64;
	// lwz r7,32(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// add r10,r6,r5
	ctx.r10.u64 = ctx.r6.u64 + ctx.r5.u64;
	// lwz r6,44(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r11,r10,r7
	ctx.r11.u64 = ctx.r10.u64 + ctx.r7.u64;
	// rlwinm r10,r6,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// b 0x82e222f0
	goto loc_82E222F0;
loc_82E22268:
	// lwz r9,36(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// lwz r8,40(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// lbz r11,2(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2);
	// lwz r6,32(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// subf r7,r8,r9
	ctx.r7.s64 = ctx.r9.s64 - ctx.r8.s64;
	// rotlwi r9,r11,1
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// add r7,r7,r6
	ctx.r7.u64 = ctx.r7.u64 + ctx.r6.u64;
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r11,r7,255
	ctx.r11.s64 = ctx.r7.s64 + 255;
	// b 0x82e222dc
	goto loc_82E222DC;
loc_82E22290:
	// lwz r9,40(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// lwz r8,36(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// lbz r11,2(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2);
	// lwz r6,32(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// subf r7,r8,r9
	ctx.r7.s64 = ctx.r9.s64 - ctx.r8.s64;
	// rotlwi r9,r11,1
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// add r7,r7,r6
	ctx.r7.u64 = ctx.r7.u64 + ctx.r6.u64;
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r11,r7,255
	ctx.r11.s64 = ctx.r7.s64 + 255;
	// b 0x82e222dc
	goto loc_82E222DC;
loc_82E222B8:
	// lwz r9,32(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// lwz r8,40(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// lbz r11,2(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2);
	// lwz r6,36(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// subf r7,r8,r9
	ctx.r7.s64 = ctx.r9.s64 - ctx.r8.s64;
	// rotlwi r9,r11,1
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// subf r7,r6,r7
	ctx.r7.s64 = ctx.r7.s64 - ctx.r6.s64;
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r11,r7,510
	ctx.r11.s64 = ctx.r7.s64 + 510;
loc_82E222DC:
	// lbz r10,1(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// lwz r5,44(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	// rotlwi r8,r10,1
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// add r8,r10,r8
	ctx.r8.u64 = ctx.r10.u64 + ctx.r8.u64;
	// rlwinm r10,r5,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
loc_82E222F0:
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmpw cr6,r7,r9
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r9.s32, ctx.xer);
	// ble cr6,0x82e2281c
	if (!ctx.cr6.gt) goto loc_82E2281C;
	// lbz r9,-1(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + -1);
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// add r31,r9,r31
	ctx.r31.u64 = ctx.r9.u64 + ctx.r31.u64;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x82e2281c
	if (!ctx.cr6.lt) goto loc_82E2281C;
	// subf r5,r9,r31
	ctx.r5.s64 = ctx.r31.s64 - ctx.r9.s64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82e21ef8
	ctx.lr = 0x82E22324;
	sub_82E21EF8(ctx, base);
	// b 0x82e2281c
	goto loc_82E2281C;
loc_82E22328:
	// addi r9,r11,-16
	ctx.r9.s64 = ctx.r11.s64 + -16;
	// lbz r8,2(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2);
	// lbz r10,1(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r6,r7,r30
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r30.u32);
	// cmpw cr6,r6,r8
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r8.s32, ctx.xer);
	// ble cr6,0x82e2281c
	if (!ctx.cr6.gt) goto loc_82E2281C;
	// addi r9,r11,-12
	ctx.r9.s64 = ctx.r11.s64 + -12;
	// lbz r11,-1(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + -1);
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r31,r11,r31
	ctx.r31.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwzx r7,r8,r30
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r30.u32);
	// cmpw cr6,r7,r10
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x82e2281c
	if (!ctx.cr6.lt) goto loc_82E2281C;
	// subf r5,r11,r31
	ctx.r5.s64 = ctx.r31.s64 - ctx.r11.s64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82e21ef8
	ctx.lr = 0x82E22374;
	sub_82E21EF8(ctx, base);
	// b 0x82e2281c
	goto loc_82E2281C;
loc_82E22378:
	// addi r9,r11,-32
	ctx.r9.s64 = ctx.r11.s64 + -32;
	// lbz r10,1(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// addi r31,r31,3
	ctx.r31.s64 = ctx.r31.s64 + 3;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r8,r30
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r30.u32);
	// cmpw cr6,r7,r10
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x82e2281c
	if (!ctx.cr6.gt) goto loc_82E2281C;
	// addi r9,r11,-28
	ctx.r9.s64 = ctx.r11.s64 + -28;
	// lbz r11,-1(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + -1);
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r31,r11,r31
	ctx.r31.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwzx r7,r8,r30
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r30.u32);
	// cmpw cr6,r7,r10
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r10.s32, ctx.xer);
	// bgt cr6,0x82e2281c
	if (ctx.cr6.gt) goto loc_82E2281C;
	// subf r5,r11,r31
	ctx.r5.s64 = ctx.r31.s64 - ctx.r11.s64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82e21ef8
	ctx.lr = 0x82E223C0;
	sub_82E21EF8(ctx, base);
	// b 0x82e2281c
	goto loc_82E2281C;
loc_82E223C4:
	// addi r9,r11,-35
	ctx.r9.s64 = ctx.r11.s64 + -35;
	// lbz r8,3(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 3);
	// lbz r6,2(r31)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2);
	// addi r10,r31,7
	ctx.r10.s64 = ctx.r31.s64 + 7;
	// rlwinm r5,r9,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lbz r7,4(r31)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r31.u32 + 4);
	// rotlwi r8,r8,8
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r8.u32, 8);
	// lbz r9,1(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// add r7,r8,r7
	ctx.r7.u64 = ctx.r8.u64 + ctx.r7.u64;
	// lwzx r4,r5,r30
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r30.u32);
	// cmpw cr6,r4,r6
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r6.s32, ctx.xer);
	// bgt cr6,0x82e223fc
	if (ctx.cr6.gt) goto loc_82E223FC;
	// add r31,r7,r10
	ctx.r31.u64 = ctx.r7.u64 + ctx.r10.u64;
	// b 0x82e2281c
	goto loc_82E2281C;
loc_82E223FC:
	// addi r11,r11,-31
	ctx.r11.s64 = ctx.r11.s64 + -31;
	// lbz r6,-2(r10)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r10.u32 + -2);
	// lbz r8,-1(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + -1);
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rotlwi r11,r6,8
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r6.u32, 8);
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// lwzx r4,r5,r30
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r30.u32);
	// add r31,r11,r10
	ctx.r31.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmpw cr6,r4,r9
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x82e2281c
	if (!ctx.cr6.lt) goto loc_82E2281C;
	// subf r11,r11,r7
	ctx.r11.s64 = ctx.r7.s64 - ctx.r11.s64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// add r5,r11,r31
	ctx.r5.u64 = ctx.r11.u64 + ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82e21ef8
	ctx.lr = 0x82E22438;
	sub_82E21EF8(ctx, base);
	// b 0x82e2281c
	goto loc_82E2281C;
loc_82E2243C:
	// addi r10,r11,-38
	ctx.r10.s64 = ctx.r11.s64 + -38;
	// lbz r9,1(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r8,r30
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r30.u32);
	// cmpw cr6,r7,r9
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x82e2283c
	if (ctx.cr6.lt) goto loc_82E2283C;
	// addi r11,r11,-34
	ctx.r11.s64 = ctx.r11.s64 + -34;
	// lbz r10,2(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r9,r30
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r30.u32);
	// cmpw cr6,r8,r10
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x82e2283c
	if (!ctx.cr6.lt) goto loc_82E2283C;
	// addi r31,r31,3
	ctx.r31.s64 = ctx.r31.s64 + 3;
	// b 0x82e2281c
	goto loc_82E2281C;
loc_82E22474:
	// lbz r9,1(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// addi r7,r11,-37
	ctx.r7.s64 = ctx.r11.s64 + -37;
	// lbz r10,2(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2);
	// rotlwi r8,r9,8
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r9.u32, 8);
	// lbz r9,3(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 3);
	// rlwinm r6,r7,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r5,r10,r8
	ctx.r5.u64 = ctx.r10.u64 + ctx.r8.u64;
	// rlwinm r10,r5,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 8) & 0xFFFFFF00;
	// lwzx r4,r6,r29
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r29.u32);
	// add r3,r10,r9
	ctx.r3.u64 = ctx.r10.u64 + ctx.r9.u64;
	// cmpw cr6,r4,r3
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r3.s32, ctx.xer);
	// blt cr6,0x82e2283c
	if (ctx.cr6.lt) goto loc_82E2283C;
	// lbz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 4);
	// addi r8,r11,-33
	ctx.r8.s64 = ctx.r11.s64 + -33;
	// lbz r11,5(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 5);
	// rotlwi r9,r10,8
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// lbz r10,6(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 6);
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r6,r11,r9
	ctx.r6.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r6,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 8) & 0xFFFFFF00;
	// lwzx r5,r7,r29
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r29.u32);
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmpw cr6,r5,r4
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r4.s32, ctx.xer);
	// bgt cr6,0x82e2283c
	if (ctx.cr6.gt) goto loc_82E2283C;
	// addi r31,r31,7
	ctx.r31.s64 = ctx.r31.s64 + 7;
	// b 0x82e2281c
	goto loc_82E2281C;
loc_82E224DC:
	// lbz r11,1(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r31,r11,2
	ctx.r31.s64 = ctx.r11.s64 + 2;
	// b 0x82e2281c
	goto loc_82E2281C;
loc_82E224EC:
	// lbz r11,1(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// lbz r10,2(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2);
	// rotlwi r11,r11,8
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 8);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r31,r11,3
	ctx.r31.s64 = ctx.r11.s64 + 3;
	// b 0x82e2281c
	goto loc_82E2281C;
loc_82E22508:
	// lbz r11,1(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// lbz r9,2(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2);
	// rotlwi r11,r11,8
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 8);
	// lbz r10,3(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 3);
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r9,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFFFF00;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r31,r11,4
	ctx.r31.s64 = ctx.r11.s64 + 4;
	// b 0x82e2281c
	goto loc_82E2281C;
loc_82E22530:
	// lbz r10,1(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// lwz r9,48(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	// lwz r6,32(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	// add r5,r10,r9
	ctx.r5.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lwz r4,36(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 36);
	// lwz r3,40(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 40);
	// slw r10,r5,r11
	ctx.r10.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r5.u32 << (ctx.r11.u8 & 0x3F));
	// stw r10,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r10.u32);
	// lwz r28,16(r29)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// lwz r27,20(r29)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// lwz r26,24(r29)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// lwz r25,48(r29)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r29.u32 + 48);
	// lwz r8,52(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	// lbz r9,2(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2);
	// lwz r21,52(r29)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r29.u32 + 52);
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// lwz r20,56(r29)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r29.u32 + 56);
	// lwz r19,60(r29)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r29.u32 + 60);
	// slw r9,r9,r11
	ctx.r9.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r11.u8 & 0x3F));
	// stw r9,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r9.u32);
	// lwz r7,56(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	// lbz r8,3(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 3);
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// slw r8,r8,r11
	ctx.r8.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r11.u8 & 0x3F));
	// stw r8,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r8.u32);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// lwz r7,64(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 64);
	// add r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 + ctx.r11.u64;
	// stw r11,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r11.u32);
	// subfic r11,r11,16
	ctx.xer.ca = ctx.r11.u32 <= 16;
	ctx.r11.s64 = 16 - ctx.r11.s64;
	// sraw r7,r6,r11
	temp.u32 = ctx.r11.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r6.s32 < 0) & (((ctx.r6.s32 >> temp.u32) << temp.u32) != ctx.r6.s32);
	ctx.r7.s64 = ctx.r6.s32 >> temp.u32;
	// sraw r6,r4,r11
	temp.u32 = ctx.r11.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r4.s32 < 0) & (((ctx.r4.s32 >> temp.u32) << temp.u32) != ctx.r4.s32);
	ctx.r6.s64 = ctx.r4.s32 >> temp.u32;
	// sraw r5,r3,r11
	temp.u32 = ctx.r11.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r3.s32 < 0) & (((ctx.r3.s32 >> temp.u32) << temp.u32) != ctx.r3.s32);
	ctx.r5.s64 = ctx.r3.s32 >> temp.u32;
	// sraw r4,r28,r11
	temp.u32 = ctx.r11.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r28.s32 < 0) & (((ctx.r28.s32 >> temp.u32) << temp.u32) != ctx.r28.s32);
	ctx.r4.s64 = ctx.r28.s32 >> temp.u32;
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// subf r7,r10,r7
	ctx.r7.s64 = ctx.r7.s64 - ctx.r10.s64;
	// subf r4,r10,r4
	ctx.r4.s64 = ctx.r4.s64 - ctx.r10.s64;
	// subf r6,r9,r6
	ctx.r6.s64 = ctx.r6.s64 - ctx.r9.s64;
	// stw r7,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r7.u32);
	// subf r5,r8,r5
	ctx.r5.s64 = ctx.r5.s64 - ctx.r8.s64;
	// stw r5,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r5.u32);
	// stw r6,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r6.u32);
	// sraw r3,r27,r11
	temp.u32 = ctx.r11.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r27.s32 < 0) & (((ctx.r27.s32 >> temp.u32) << temp.u32) != ctx.r27.s32);
	ctx.r3.s64 = ctx.r27.s32 >> temp.u32;
	// stw r4,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r4.u32);
	// sraw r28,r26,r11
	temp.u32 = ctx.r11.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r26.s32 < 0) & (((ctx.r26.s32 >> temp.u32) << temp.u32) != ctx.r26.s32);
	ctx.r28.s64 = ctx.r26.s32 >> temp.u32;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// sraw r27,r25,r11
	temp.u32 = ctx.r11.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r25.s32 < 0) & (((ctx.r25.s32 >> temp.u32) << temp.u32) != ctx.r25.s32);
	ctx.r27.s64 = ctx.r25.s32 >> temp.u32;
	// sraw r26,r21,r11
	temp.u32 = ctx.r11.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r21.s32 < 0) & (((ctx.r21.s32 >> temp.u32) << temp.u32) != ctx.r21.s32);
	ctx.r26.s64 = ctx.r21.s32 >> temp.u32;
	// sraw r25,r20,r11
	temp.u32 = ctx.r11.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r20.s32 < 0) & (((ctx.r20.s32 >> temp.u32) << temp.u32) != ctx.r20.s32);
	ctx.r25.s64 = ctx.r20.s32 >> temp.u32;
	// subf r3,r9,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r9.s64;
	// sraw r11,r19,r11
	temp.u32 = ctx.r11.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r19.s32 < 0) & (((ctx.r19.s32 >> temp.u32) << temp.u32) != ctx.r19.s32);
	ctx.r11.s64 = ctx.r19.s32 >> temp.u32;
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// subf r6,r10,r27
	ctx.r6.s64 = ctx.r27.s64 - ctx.r10.s64;
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
	// subf r7,r8,r28
	ctx.r7.s64 = ctx.r28.s64 - ctx.r8.s64;
	// stw r6,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r6.u32);
	// subf r5,r9,r26
	ctx.r5.s64 = ctx.r26.s64 - ctx.r9.s64;
	// stw r3,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r3.u32);
	// subf r4,r8,r25
	ctx.r4.s64 = ctx.r25.s64 - ctx.r8.s64;
	// stw r7,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r7.u32);
	// stw r5,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r5.u32);
	// stw r4,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r4.u32);
	// lwz r11,68(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 68);
	// stw r11,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r11.u32);
	// lwz r10,60(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 60);
	// addi r30,r1,80
	ctx.r30.s64 = ctx.r1.s64 + 80;
	// stw r10,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r10.u32);
	// b 0x82e2281c
	goto loc_82E2281C;
loc_82E22644:
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// lbz r28,1(r31)
	ctx.r28.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82e22668
	if (ctx.cr6.eq) goto loc_82E22668;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// li r5,72
	ctx.r5.s64 = 72;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82fa77c0
	ctx.lr = 0x82E22664;
	sub_82FA77C0(ctx, base);
	// addi r30,r1,80
	ctx.r30.s64 = ctx.r1.s64 + 80;
loc_82E22668:
	// lwz r11,140(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// addi r31,r31,2
	ctx.r31.s64 = ctx.r31.s64 + 2;
	// add r10,r28,r11
	ctx.r10.u64 = ctx.r28.u64 + ctx.r11.u64;
	// stw r10,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r10.u32);
	// b 0x82e2281c
	goto loc_82E2281C;
loc_82E2267C:
	// lbz r11,1(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// lbz r10,2(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2);
	// rotlwi r11,r11,8
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 8);
	// cmplw cr6,r30,r9
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r9.u32, ctx.xer);
	// add r28,r11,r10
	ctx.r28.u64 = ctx.r11.u64 + ctx.r10.u64;
	// beq cr6,0x82e226ac
	if (ctx.cr6.eq) goto loc_82E226AC;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// li r5,72
	ctx.r5.s64 = 72;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82fa77c0
	ctx.lr = 0x82E226A8;
	sub_82FA77C0(ctx, base);
	// addi r30,r1,80
	ctx.r30.s64 = ctx.r1.s64 + 80;
loc_82E226AC:
	// lwz r11,140(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// addi r31,r31,3
	ctx.r31.s64 = ctx.r31.s64 + 3;
	// add r10,r28,r11
	ctx.r10.u64 = ctx.r28.u64 + ctx.r11.u64;
	// stw r10,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r10.u32);
	// b 0x82e2281c
	goto loc_82E2281C;
loc_82E226C0:
	// lbz r11,1(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// lbz r8,2(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2);
	// rotlwi r11,r11,8
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 8);
	// lbz r9,3(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 3);
	// lbz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 4);
	// cmplw cr6,r30,r7
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r7.u32, ctx.xer);
	// add r6,r11,r8
	ctx.r6.u64 = ctx.r11.u64 + ctx.r8.u64;
	// rlwinm r11,r6,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 8) & 0xFFFFFF00;
	// add r5,r11,r9
	ctx.r5.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r5,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 8) & 0xFFFFFF00;
	// add r28,r11,r10
	ctx.r28.u64 = ctx.r11.u64 + ctx.r10.u64;
	// beq cr6,0x82e22708
	if (ctx.cr6.eq) goto loc_82E22708;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// li r5,72
	ctx.r5.s64 = 72;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82fa77c0
	ctx.lr = 0x82E22704;
	sub_82FA77C0(ctx, base);
	// addi r30,r1,80
	ctx.r30.s64 = ctx.r1.s64 + 80;
loc_82E22708:
	// stw r28,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r28.u32);
	// addi r31,r31,5
	ctx.r31.s64 = ctx.r31.s64 + 5;
	// b 0x82e2281c
	goto loc_82E2281C;
loc_82E22714:
	// addi r11,r11,-96
	ctx.r11.s64 = ctx.r11.s64 + -96;
	// lbz r10,1(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// addi r9,r1,148
	ctx.r9.s64 = ctx.r1.s64 + 148;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r31,r31,2
	ctx.r31.s64 = ctx.r31.s64 + 2;
	// stwx r10,r8,r9
	PPC_STORE_U32(ctx.r8.u32 + ctx.r9.u32, ctx.r10.u32);
	// b 0x82e22794
	goto loc_82E22794;
loc_82E22730:
	// lbz r9,1(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// addi r8,r11,-100
	ctx.r8.s64 = ctx.r11.s64 + -100;
	// lbz r10,2(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2);
	// addi r7,r1,148
	ctx.r7.s64 = ctx.r1.s64 + 148;
	// rotlwi r11,r9,8
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 8);
	// rlwinm r6,r8,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r31,r31,3
	ctx.r31.s64 = ctx.r31.s64 + 3;
	// stwx r5,r6,r7
	PPC_STORE_U32(ctx.r6.u32 + ctx.r7.u32, ctx.r5.u32);
	// b 0x82e22794
	goto loc_82E22794;
loc_82E22758:
	// lbz r10,1(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// addi r7,r11,-104
	ctx.r7.s64 = ctx.r11.s64 + -104;
	// lbz r8,2(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2);
	// addi r6,r1,148
	ctx.r6.s64 = ctx.r1.s64 + 148;
	// rotlwi r11,r10,8
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// lbz r9,3(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 3);
	// lbz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 4);
	// rlwinm r5,r7,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r4,r11,r8
	ctx.r4.u64 = ctx.r11.u64 + ctx.r8.u64;
	// addi r31,r31,5
	ctx.r31.s64 = ctx.r31.s64 + 5;
	// rlwinm r11,r4,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 8) & 0xFFFFFF00;
	// add r3,r11,r9
	ctx.r3.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r3,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 8) & 0xFFFFFF00;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stwx r11,r5,r6
	PPC_STORE_U32(ctx.r5.u32 + ctx.r6.u32, ctx.r11.u32);
loc_82E22794:
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// lwz r28,148(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82e227b8
	if (ctx.cr6.eq) goto loc_82E227B8;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// li r5,72
	ctx.r5.s64 = 72;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82fa77c0
	ctx.lr = 0x82E227B4;
	sub_82FA77C0(ctx, base);
	// addi r30,r1,80
	ctx.r30.s64 = ctx.r1.s64 + 80;
loc_82E227B8:
	// stw r28,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r28.u32);
	// b 0x82e2281c
	goto loc_82E2281C;
loc_82E227C0:
	// li r5,512
	ctx.r5.s64 = 512;
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// addi r3,r1,152
	ctx.r3.s64 = ctx.r1.s64 + 152;
	// bl 0x82d37840
	ctx.lr = 0x82E227D0;
	sub_82D37840(ctx, base);
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// addi r3,r1,152
	ctx.r3.s64 = ctx.r1.s64 + 152;
	// bl 0x82d348d0
	ctx.lr = 0x82E227DC;
	sub_82D348D0(ctx, base);
	// lwz r3,-21100(r22)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r22.u32 + -21100);
	// lis r5,4760
	ctx.r5.s64 = 311951360;
	// mr r7,r24
	ctx.r7.u64 = ctx.r24.u64;
	// li r8,342
	ctx.r8.s64 = 342;
	// addi r6,r1,176
	ctx.r6.s64 = ctx.r1.s64 + 176;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// ori r5,r5,65245
	ctx.r5.u64 = ctx.r5.u64 | 65245;
	// li r4,3
	ctx.r4.s64 = 3;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82E22808;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82e22814
	if (ctx.cr6.eq) goto loc_82E22814;
	// twi 31,r0,22
	if (ctx.r0.s32 < 22 || ctx.r0.s32 > 22 || ctx.r0.u32 == 22 || ctx.r0.u32 < 22 || ctx.r0.u32 > 22) __builtin_debugtrap();
loc_82E22814:
	// addi r3,r1,152
	ctx.r3.s64 = ctx.r1.s64 + 152;
	// bl 0x82d346f0
	ctx.lr = 0x82E2281C;
	sub_82D346F0(ctx, base);
loc_82E2281C:
	// lbz r10,64(r29)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r29.u32 + 64);
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82e21f34
	if (ctx.cr6.eq) goto loc_82E21F34;
	// addi r1,r1,800
	ctx.r1.s64 = ctx.r1.s64 + 800;
	// b 0x82fa76a4
	__restgprlr_19(ctx, base);
	return;
loc_82E22834:
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,64(r29)
	PPC_STORE_U8(ctx.r29.u32 + 64, ctx.r11.u8);
loc_82E2283C:
	// addi r1,r1,800
	ctx.r1.s64 = ctx.r1.s64 + 800;
	// b 0x82fa76a4
	__restgprlr_19(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E22844"))) PPC_WEAK_FUNC(sub_82E22844);
PPC_FUNC_IMPL(__imp__sub_82E22844) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E22848"))) PPC_WEAK_FUNC(sub_82E22848);
PPC_FUNC_IMPL(__imp__sub_82E22848) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa765c
	ctx.lr = 0x82E22850;
	__savegprlr_21(ctx, base);
	// li r11,16
	ctx.r11.s64 = 16;
	// lvx128 v0,r0,r4
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r4.u32) & ~0xF), VectorMaskL));
	// vspltw v13,v0,1
	_mm_store_si128((__m128i*)ctx.v13.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0xAA));
	// lvx128 v12,r0,r5
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((ctx.r5.u32) & ~0xF), VectorMaskL));
	// vspltw v11,v0,0
	_mm_store_si128((__m128i*)ctx.v11.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0xFF));
	// lis r10,-32227
	ctx.r10.s64 = -2112028672;
	// li r9,32
	ctx.r9.s64 = 32;
	// vspltw v10,v0,2
	_mm_store_si128((__m128i*)ctx.v10.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0x55));
	// addi r8,r10,-2608
	ctx.r8.s64 = ctx.r10.s64 + -2608;
	// lfs f0,0(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lvx128 v9,r5,r11
	simd::store_shuffled(ctx.v9, simd::load_and_shuffle(base + ((ctx.r5.u32 + ctx.r11.u32) & ~0xF), VectorMaskL));
	// mr r24,r7
	ctx.r24.u64 = ctx.r7.u64;
	// vmulfp128 v8,v13,v9
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v8.f32, _mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v9.f32)));
	// addi r7,r1,-112
	ctx.r7.s64 = ctx.r1.s64 + -112;
	// vmulfp128 v7,v11,v12
	_mm_store_ps(ctx.v7.f32, _mm_mul_ps(_mm_load_ps(ctx.v11.f32), _mm_load_ps(ctx.v12.f32)));
	// stfs f0,-112(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -112, temp.u32);
	// lvx128 v6,r5,r9
	simd::store_shuffled(ctx.v6, simd::load_and_shuffle(base + ((ctx.r5.u32 + ctx.r9.u32) & ~0xF), VectorMaskL));
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// lvx128 v0,r0,r8
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r8.u32) & ~0xF), VectorMaskL));
	// vmulfp128 v5,v10,v6
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v5.f32, _mm_mul_ps(_mm_load_ps(ctx.v10.f32), _mm_load_ps(ctx.v6.f32)));
	// lis r6,-32246
	ctx.r6.s64 = -2113273856;
	// lwz r11,68(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	// lvx128 v4,r0,r7
	simd::store_shuffled(ctx.v4, simd::load_and_shuffle(base + ((ctx.r7.u32) & ~0xF), VectorMaskL));
	// vspltw v3,v4,0
	_mm_store_si128((__m128i*)ctx.v3.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v4.u32), 0xFF));
	// vand v2,v8,v0
	_mm_store_si128((__m128i*)ctx.v2.u8, _mm_and_si128(_mm_load_si128((__m128i*)ctx.v8.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// addi r10,r6,544
	ctx.r10.s64 = ctx.r6.s64 + 544;
	// vand v1,v7,v0
	_mm_store_si128((__m128i*)ctx.v1.u8, _mm_and_si128(_mm_load_si128((__m128i*)ctx.v7.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// vand v30,v5,v0
	_mm_store_si128((__m128i*)ctx.v30.u8, _mm_and_si128(_mm_load_si128((__m128i*)ctx.v5.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// li r4,48
	ctx.r4.s64 = 48;
	// addi r31,r1,-128
	ctx.r31.s64 = ctx.r1.s64 + -128;
	// lfs f13,16(r11)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// addi r30,r1,-128
	ctx.r30.s64 = ctx.r1.s64 + -128;
	// lfs f12,28(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	ctx.f12.f64 = double(temp.f32);
	// vaddfp v29,v1,v2
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v29.f32, _mm_add_ps(_mm_load_ps(ctx.v1.f32), _mm_load_ps(ctx.v2.f32)));
	// lvx128 v13,r0,r10
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// addi r29,r1,-112
	ctx.r29.s64 = ctx.r1.s64 + -112;
	// lvx128 v31,r5,r4
	simd::store_shuffled(ctx.v31, simd::load_and_shuffle(base + ((ctx.r5.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// addi r10,r1,-112
	ctx.r10.s64 = ctx.r1.s64 + -112;
	// addi r9,r11,28
	ctx.r9.s64 = ctx.r11.s64 + 28;
	// addi r8,r3,16
	ctx.r8.s64 = ctx.r3.s64 + 16;
	// addi r7,r3,36
	ctx.r7.s64 = ctx.r3.s64 + 36;
	// addi r6,r3,20
	ctx.r6.s64 = ctx.r3.s64 + 20;
	// addi r5,r3,40
	ctx.r5.s64 = ctx.r3.s64 + 40;
	// addi r4,r3,24
	ctx.r4.s64 = ctx.r3.s64 + 24;
	// vaddfp v28,v29,v30
	_mm_store_ps(ctx.v28.f32, _mm_add_ps(_mm_load_ps(ctx.v29.f32), _mm_load_ps(ctx.v30.f32)));
	// vaddfp v0,v28,v3
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_load_ps(ctx.v28.f32), _mm_load_ps(ctx.v3.f32)));
	// vxor v13,v0,v13
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_xor_si128(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)ctx.v13.u8)));
	// vaddfp v27,v0,v31
	_mm_store_ps(ctx.v27.f32, _mm_add_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v31.f32)));
	// stvx128 v0,r0,r29
	_mm_store_si128((__m128i*)(base + ((ctx.r29.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// vaddfp v26,v13,v31
	_mm_store_ps(ctx.v26.f32, _mm_add_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v31.f32)));
	// stvx128 v13,r0,r31
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v27,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v27.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lfs f11,-112(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -112);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,-108(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -108);
	ctx.f10.f64 = double(temp.f32);
	// stvx128 v26,r0,r30
	_mm_store_si128((__m128i*)(base + ((ctx.r30.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v26.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lfs f9,-128(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -128);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f8,f9,f13
	ctx.f8.f64 = double(float(ctx.f9.f64 - ctx.f13.f64));
	// fmuls f7,f8,f12
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f12.f64));
	// lfs f6,-124(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -124);
	ctx.f6.f64 = double(temp.f32);
	// fctiwz f5,f7
	ctx.f5.s64 = (ctx.f7.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f7.f64));
	// stfd f5,-144(r1)
	PPC_STORE_U64(ctx.r1.u32 + -144, ctx.f5.u64);
	// lwz r10,-140(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + -140);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r10,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r10.u32);
	// lfs f4,28(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,16(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f3.f64 = double(temp.f32);
	// fsubs f2,f11,f3
	ctx.f2.f64 = double(float(ctx.f11.f64 - ctx.f3.f64));
	// fmuls f1,f2,f4
	ctx.f1.f64 = double(float(ctx.f2.f64 * ctx.f4.f64));
	// fctiwz f0,f1
	ctx.f0.s64 = (ctx.f1.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f1.f64));
	// stfd f0,-144(r1)
	PPC_STORE_U64(ctx.r1.u32 + -144, ctx.f0.u64);
	// lwz r10,-140(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + -140);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r10.u32);
	// lfs f13,28(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,20(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f11,f6,f12
	ctx.f11.f64 = double(float(ctx.f6.f64 - ctx.f12.f64));
	// fmuls f9,f11,f13
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// fctiwz f8,f9
	ctx.f8.s64 = (ctx.f9.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f9.f64));
	// stfd f8,-144(r1)
	PPC_STORE_U64(ctx.r1.u32 + -144, ctx.f8.u64);
	// lwz r10,-140(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + -140);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// lfs f4,-120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -120);
	ctx.f4.f64 = double(temp.f32);
	// lwz r31,16(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// lfs f3,-104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -104);
	ctx.f3.f64 = double(temp.f32);
	// stw r10,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r10.u32);
	// lfs f5,28(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	ctx.f5.f64 = double(temp.f32);
	// lfs f7,20(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f6,f10,f7
	ctx.f6.f64 = double(float(ctx.f10.f64 - ctx.f7.f64));
	// fmuls f2,f6,f5
	ctx.f2.f64 = double(float(ctx.f6.f64 * ctx.f5.f64));
	// rotlwi r27,r10,0
	ctx.r27.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lis r30,-32237
	ctx.r30.s64 = -2112684032;
	// vspltisw v25,0
	_mm_store_si128((__m128i*)ctx.v25.u32, _mm_set1_epi32(int(0x0)));
	// addi r21,r1,-144
	ctx.r21.s64 = ctx.r1.s64 + -144;
	// add r31,r10,r31
	ctx.r31.u64 = ctx.r10.u64 + ctx.r31.u64;
	// addi r23,r30,22016
	ctx.r23.s64 = ctx.r30.s64 + 22016;
	// srawi r22,r31,1
	ctx.xer.ca = (ctx.r31.s32 < 0) & ((ctx.r31.u32 & 0x1) != 0);
	ctx.r22.s64 = ctx.r31.s32 >> 1;
	// addi r31,r3,48
	ctx.r31.s64 = ctx.r3.s64 + 48;
	// addi r30,r3,52
	ctx.r30.s64 = ctx.r3.s64 + 52;
	// addi r29,r3,56
	ctx.r29.s64 = ctx.r3.s64 + 56;
	// fctiwz f1,f2
	ctx.f1.s64 = (ctx.f2.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f2.f64));
	// stfd f1,-144(r1)
	PPC_STORE_U64(ctx.r1.u32 + -144, ctx.f1.u64);
	// lwz r28,-140(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + -140);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// stw r28,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r28.u32);
	// lfs f0,28(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,24(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f4,f13
	ctx.f12.f64 = double(float(ctx.f4.f64 - ctx.f13.f64));
	// fmuls f11,f12,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// rotlwi r28,r28,0
	ctx.r28.u64 = __builtin_rotateleft32(ctx.r28.u32, 0);
	// add r28,r27,r28
	ctx.r28.u64 = ctx.r27.u64 + ctx.r28.u64;
	// srawi r27,r28,1
	ctx.xer.ca = (ctx.r28.s32 < 0) & ((ctx.r28.u32 & 0x1) != 0);
	ctx.r27.s64 = ctx.r28.s32 >> 1;
	// fctiwz f10,f11
	ctx.f10.s64 = (ctx.f11.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f11.f64));
	// stfd f10,-144(r1)
	PPC_STORE_U64(ctx.r1.u32 + -144, ctx.f10.u64);
	// lwz r28,-140(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + -140);
	// addi r28,r28,-1
	ctx.r28.s64 = ctx.r28.s64 + -1;
	// stw r28,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r28.u32);
	// lfs f9,28(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	ctx.f9.f64 = double(temp.f32);
	// lfs f8,24(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f7,f3,f8
	ctx.f7.f64 = double(float(ctx.f3.f64 - ctx.f8.f64));
	// fmuls f6,f7,f9
	ctx.f6.f64 = double(float(ctx.f7.f64 * ctx.f9.f64));
	// stw r27,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r27.u32);
	// stw r22,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r22.u32);
	// rotlwi r28,r28,0
	ctx.r28.u64 = __builtin_rotateleft32(ctx.r28.u32, 0);
	// fctiwz f5,f6
	ctx.f5.s64 = (ctx.f6.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f6.f64));
	// stfd f5,-144(r1)
	PPC_STORE_U64(ctx.r1.u32 + -144, ctx.f5.u64);
	// lwz r11,-140(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -140);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// srawi r11,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 1;
	// srawi r10,r10,16
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xFFFF) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 16;
	// stw r11,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, ctx.r11.u32);
	// lvx128 v13,r0,r23
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r23.u32) & ~0xF), VectorMaskL));
	// lvx128 v24,r0,r26
	simd::store_shuffled(ctx.v24, simd::load_and_shuffle(base + ((ctx.r26.u32) & ~0xF), VectorMaskL));
	// vmsum3fp128 v23,v24,v24
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v23.f32, _mm_dp_ps(_mm_load_ps(ctx.v24.f32), _mm_load_ps(ctx.v24.f32), 0xEF));
	// vrsqrtefp v0,v23
	_mm_store_ps(ctx.v0.f32, _mm_div_ps(_mm_set1_ps(1), _mm_sqrt_ps(_mm_load_ps(ctx.v23.f32))));
	// vmulfp128 v10,v23,v13
	_mm_store_ps(ctx.v10.f32, _mm_mul_ps(_mm_load_ps(ctx.v23.f32), _mm_load_ps(ctx.v13.f32)));
	// vcmpeqfp v8,v25,v23
	_mm_store_ps(ctx.v8.f32, _mm_cmpeq_ps(_mm_load_ps(ctx.v25.f32), _mm_load_ps(ctx.v23.f32)));
	// vmulfp128 v11,v0,v0
	_mm_store_ps(ctx.v11.f32, _mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v0.f32)));
	// vnmsubfp v7,v10,v11,v13
	_mm_store_ps(ctx.v7.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(ctx.v10.f32), _mm_load_ps(ctx.v11.f32)), _mm_load_ps(ctx.v13.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// vmaddfp v0,v0,v7,v0
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v7.f32)), _mm_load_ps(ctx.v0.f32)));
	// vmulfp128 v11,v0,v0
	_mm_store_ps(ctx.v11.f32, _mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v0.f32)));
	// vnmsubfp v13,v10,v11,v13
	_mm_store_ps(ctx.v13.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(ctx.v10.f32), _mm_load_ps(ctx.v11.f32)), _mm_load_ps(ctx.v13.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// vmaddfp v0,v0,v13,v0
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v13.f32)), _mm_load_ps(ctx.v0.f32)));
	// vsel v13,v0,v25,v8
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v8.u8), _mm_load_si128((__m128i*)ctx.v0.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v8.u8), _mm_load_si128((__m128i*)ctx.v25.u8))));
	// vmulfp128 v22,v23,v13
	_mm_store_ps(ctx.v22.f32, _mm_mul_ps(_mm_load_ps(ctx.v23.f32), _mm_load_ps(ctx.v13.f32)));
	// stvewx v22,r0,r21
	ea = (ctx.r21.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v22.u32[3 - ((ea & 0xF) >> 2)]);
	// lfs f4,0(r9)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,0(r25)
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,-144(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -144);
	ctx.f2.f64 = double(temp.f32);
	// fadds f1,f3,f2
	ctx.f1.f64 = double(float(ctx.f3.f64 + ctx.f2.f64));
	// fmuls f0,f1,f4
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f4.f64));
	// fctiwz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f0.f64));
	// stfd f13,-144(r1)
	PPC_STORE_U64(ctx.r1.u32 + -144, ctx.f13.u64);
	// lwz r11,-140(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -140);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// stw r9,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, ctx.r9.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,16(r24)
	PPC_STORE_U32(ctx.r24.u32 + 16, ctx.r10.u32);
	// lhz r10,16(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 16);
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// stw r9,0(r24)
	PPC_STORE_U32(ctx.r24.u32 + 0, ctx.r9.u32);
	// lhz r10,36(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 36);
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// stw r9,20(r24)
	PPC_STORE_U32(ctx.r24.u32 + 20, ctx.r9.u32);
	// lhz r10,20(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 20);
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// stw r9,4(r24)
	PPC_STORE_U32(ctx.r24.u32 + 4, ctx.r9.u32);
	// lhz r10,40(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 40);
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// stw r9,24(r24)
	PPC_STORE_U32(ctx.r24.u32 + 24, ctx.r9.u32);
	// lhz r10,24(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 24);
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// stw r9,8(r24)
	PPC_STORE_U32(ctx.r24.u32 + 8, ctx.r9.u32);
	// lhz r10,48(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 48);
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// stw r9,32(r24)
	PPC_STORE_U32(ctx.r24.u32 + 32, ctx.r9.u32);
	// lhz r10,52(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 52);
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// stw r9,36(r24)
	PPC_STORE_U32(ctx.r24.u32 + 36, ctx.r9.u32);
	// lhz r10,56(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 56);
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// stw r9,40(r24)
	PPC_STORE_U32(ctx.r24.u32 + 40, ctx.r9.u32);
	// lhz r3,60(r3)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r3.u32 + 60);
	// extsh r10,r3
	ctx.r10.s64 = ctx.r3.s16;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r11,48(r24)
	PPC_STORE_U32(ctx.r24.u32 + 48, ctx.r11.u32);
	// stw r11,52(r24)
	PPC_STORE_U32(ctx.r24.u32 + 52, ctx.r11.u32);
	// stw r10,44(r24)
	PPC_STORE_U32(ctx.r24.u32 + 44, ctx.r10.u32);
	// stw r11,56(r24)
	PPC_STORE_U32(ctx.r24.u32 + 56, ctx.r11.u32);
	// stw r11,60(r24)
	PPC_STORE_U32(ctx.r24.u32 + 60, ctx.r11.u32);
	// stw r11,64(r24)
	PPC_STORE_U32(ctx.r24.u32 + 64, ctx.r11.u32);
	// stw r11,68(r24)
	PPC_STORE_U32(ctx.r24.u32 + 68, ctx.r11.u32);
	// b 0x82fa76ac
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E22B70"))) PPC_WEAK_FUNC(sub_82E22B70);
PPC_FUNC_IMPL(__imp__sub_82E22B70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa766c
	ctx.lr = 0x82E22B78;
	__savegprlr_25(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31960
	ctx.r11.s64 = -2094530560;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r29,r11,-8888
	ctx.r29.s64 = ctx.r11.s64 + -8888;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// lbz r11,-8888(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + -8888);
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// mr r25,r8
	ctx.r25.u64 = ctx.r8.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82e22bcc
	if (!ctx.cr6.eq) goto loc_82E22BCC;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x830e3d28
	ctx.lr = 0x82E22BB0;
	sub_830E3D28(ctx, base);
	// lbz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82e22bcc
	if (!ctx.cr6.eq) goto loc_82E22BCC;
	// stb r11,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r11.u8);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x82fa76bc
	__restgprlr_25(ctx, base);
	return;
loc_82E22BCC:
	// stw r28,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r28.u32);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// lwz r29,32(r28)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r28.u32 + 32);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e22848
	ctx.lr = 0x82E22BEC;
	sub_82E22848(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// stb r11,64(r31)
	PPC_STORE_U8(ctx.r31.u32 + 64, ctx.r11.u8);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e21ef8
	ctx.lr = 0x82E22C08;
	sub_82E21EF8(ctx, base);
	// lbz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 64);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stb r11,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r11.u8);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x82fa76bc
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E22C1C"))) PPC_WEAK_FUNC(sub_82E22C1C);
PPC_FUNC_IMPL(__imp__sub_82E22C1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E22C20"))) PPC_WEAK_FUNC(sub_82E22C20);
PPC_FUNC_IMPL(__imp__sub_82E22C20) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7670
	ctx.lr = 0x82E22C28;
	__savegprlr_26(ctx, base);
	// stwu r1,-720(r1)
	ea = -720 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31960
	ctx.r11.s64 = -2094530560;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r29,r11,-8887
	ctx.r29.s64 = ctx.r11.s64 + -8887;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// lbz r11,-8887(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + -8887);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82e22c60
	if (!ctx.cr6.eq) goto loc_82E22C60;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x830e3d28
	ctx.lr = 0x82E22C54;
	sub_830E3D28(ctx, base);
	// lbz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82e235d4
	if (ctx.cr6.eq) goto loc_82E235D4;
loc_82E22C60:
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// lis r10,-32236
	ctx.r10.s64 = -2112618496;
	// lis r26,-31960
	ctx.r26.s64 = -2094530560;
	// addi r29,r11,22788
	ctx.r29.s64 = ctx.r11.s64 + 22788;
	// addi r27,r10,22056
	ctx.r27.s64 = ctx.r10.s64 + 22056;
loc_82E22C74:
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,107
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 107, ctx.xer);
	// bgt cr6,0x82e234bc
	if (ctx.cr6.gt) goto loc_82E234BC;
	// lis r12,-32030
	ctx.r12.s64 = -2099118080;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,11416
	ctx.r12.s64 = ctx.r12.s64 + 11416;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_82E235D4;
	case 1:
		goto loc_82E2326C;
	case 2:
		goto loc_82E2326C;
	case 3:
		goto loc_82E2326C;
	case 4:
		goto loc_82E2326C;
	case 5:
		goto loc_82E23218;
	case 6:
		goto loc_82E23228;
	case 7:
		goto loc_82E23244;
	case 8:
		goto loc_82E234BC;
	case 9:
		goto loc_82E23310;
	case 10:
		goto loc_82E23354;
	case 11:
		goto loc_82E233A4;
	case 12:
		goto loc_82E234BC;
	case 13:
		goto loc_82E234BC;
	case 14:
		goto loc_82E234BC;
	case 15:
		goto loc_82E234BC;
	case 16:
		goto loc_82E23060;
	case 17:
		goto loc_82E23060;
	case 18:
		goto loc_82E23060;
	case 19:
		goto loc_82E22E48;
	case 20:
		goto loc_82E22E78;
	case 21:
		goto loc_82E22EAC;
	case 22:
		goto loc_82E22EDC;
	case 23:
		goto loc_82E22F10;
	case 24:
		goto loc_82E22F40;
	case 25:
		goto loc_82E22F74;
	case 26:
		goto loc_82E22FAC;
	case 27:
		goto loc_82E22FE8;
	case 28:
		goto loc_82E23024;
	case 29:
		goto loc_82E234BC;
	case 30:
		goto loc_82E234BC;
	case 31:
		goto loc_82E234BC;
	case 32:
		goto loc_82E230B0;
	case 33:
		goto loc_82E230B0;
	case 34:
		goto loc_82E230B0;
	case 35:
		goto loc_82E23100;
	case 36:
		goto loc_82E23100;
	case 37:
		goto loc_82E23100;
	case 38:
		goto loc_82E23178;
	case 39:
		goto loc_82E23178;
	case 40:
		goto loc_82E23178;
	case 41:
		goto loc_82E231B0;
	case 42:
		goto loc_82E231B0;
	case 43:
		goto loc_82E231B0;
	case 44:
		goto loc_82E234BC;
	case 45:
		goto loc_82E234BC;
	case 46:
		goto loc_82E234BC;
	case 47:
		goto loc_82E234BC;
	case 48:
		goto loc_82E23584;
	case 49:
		goto loc_82E23584;
	case 50:
		goto loc_82E23584;
	case 51:
		goto loc_82E23584;
	case 52:
		goto loc_82E23584;
	case 53:
		goto loc_82E23584;
	case 54:
		goto loc_82E23584;
	case 55:
		goto loc_82E23584;
	case 56:
		goto loc_82E23584;
	case 57:
		goto loc_82E23584;
	case 58:
		goto loc_82E23584;
	case 59:
		goto loc_82E23584;
	case 60:
		goto loc_82E23584;
	case 61:
		goto loc_82E23584;
	case 62:
		goto loc_82E23584;
	case 63:
		goto loc_82E23584;
	case 64:
		goto loc_82E23584;
	case 65:
		goto loc_82E23584;
	case 66:
		goto loc_82E23584;
	case 67:
		goto loc_82E23584;
	case 68:
		goto loc_82E23584;
	case 69:
		goto loc_82E23584;
	case 70:
		goto loc_82E23584;
	case 71:
		goto loc_82E23584;
	case 72:
		goto loc_82E23584;
	case 73:
		goto loc_82E23584;
	case 74:
		goto loc_82E23584;
	case 75:
		goto loc_82E23584;
	case 76:
		goto loc_82E23584;
	case 77:
		goto loc_82E23584;
	case 78:
		goto loc_82E23584;
	case 79:
		goto loc_82E23584;
	case 80:
		goto loc_82E2351C;
	case 81:
		goto loc_82E23524;
	case 82:
		goto loc_82E23538;
	case 83:
		goto loc_82E23558;
	case 84:
		goto loc_82E234BC;
	case 85:
		goto loc_82E234BC;
	case 86:
		goto loc_82E234BC;
	case 87:
		goto loc_82E234BC;
	case 88:
		goto loc_82E234BC;
	case 89:
		goto loc_82E234BC;
	case 90:
		goto loc_82E234BC;
	case 91:
		goto loc_82E234BC;
	case 92:
		goto loc_82E234BC;
	case 93:
		goto loc_82E234BC;
	case 94:
		goto loc_82E234BC;
	case 95:
		goto loc_82E234BC;
	case 96:
		goto loc_82E23404;
	case 97:
		goto loc_82E23404;
	case 98:
		goto loc_82E23404;
	case 99:
		goto loc_82E23404;
	case 100:
		goto loc_82E23420;
	case 101:
		goto loc_82E23420;
	case 102:
		goto loc_82E23420;
	case 103:
		goto loc_82E23420;
	case 104:
		goto loc_82E23448;
	case 105:
		goto loc_82E23448;
	case 106:
		goto loc_82E23448;
	case 107:
		goto loc_82E23448;
	default:
		__builtin_unreachable();
	}
	// lwz r23,13780(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 13780);
	// lwz r23,12908(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 12908);
	// lwz r23,12908(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 12908);
	// lwz r23,12908(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 12908);
	// lwz r23,12908(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 12908);
	// lwz r23,12824(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 12824);
	// lwz r23,12840(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 12840);
	// lwz r23,12868(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 12868);
	// lwz r23,13500(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 13500);
	// lwz r23,13072(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 13072);
	// lwz r23,13140(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 13140);
	// lwz r23,13220(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 13220);
	// lwz r23,13500(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 13500);
	// lwz r23,13500(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 13500);
	// lwz r23,13500(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 13500);
	// lwz r23,13500(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 13500);
	// lwz r23,12384(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 12384);
	// lwz r23,12384(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 12384);
	// lwz r23,12384(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 12384);
	// lwz r23,11848(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 11848);
	// lwz r23,11896(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 11896);
	// lwz r23,11948(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 11948);
	// lwz r23,11996(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 11996);
	// lwz r23,12048(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 12048);
	// lwz r23,12096(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 12096);
	// lwz r23,12148(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 12148);
	// lwz r23,12204(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 12204);
	// lwz r23,12264(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 12264);
	// lwz r23,12324(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 12324);
	// lwz r23,13500(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 13500);
	// lwz r23,13500(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 13500);
	// lwz r23,13500(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 13500);
	// lwz r23,12464(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 12464);
	// lwz r23,12464(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 12464);
	// lwz r23,12464(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 12464);
	// lwz r23,12544(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 12544);
	// lwz r23,12544(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 12544);
	// lwz r23,12544(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 12544);
	// lwz r23,12664(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 12664);
	// lwz r23,12664(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 12664);
	// lwz r23,12664(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 12664);
	// lwz r23,12720(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 12720);
	// lwz r23,12720(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 12720);
	// lwz r23,12720(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 12720);
	// lwz r23,13500(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 13500);
	// lwz r23,13500(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 13500);
	// lwz r23,13500(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 13500);
	// lwz r23,13500(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 13500);
	// lwz r23,13700(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 13700);
	// lwz r23,13700(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 13700);
	// lwz r23,13700(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 13700);
	// lwz r23,13700(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 13700);
	// lwz r23,13700(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 13700);
	// lwz r23,13700(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 13700);
	// lwz r23,13700(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 13700);
	// lwz r23,13700(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 13700);
	// lwz r23,13700(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 13700);
	// lwz r23,13700(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 13700);
	// lwz r23,13700(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 13700);
	// lwz r23,13700(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 13700);
	// lwz r23,13700(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 13700);
	// lwz r23,13700(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 13700);
	// lwz r23,13700(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 13700);
	// lwz r23,13700(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 13700);
	// lwz r23,13700(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 13700);
	// lwz r23,13700(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 13700);
	// lwz r23,13700(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 13700);
	// lwz r23,13700(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 13700);
	// lwz r23,13700(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 13700);
	// lwz r23,13700(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 13700);
	// lwz r23,13700(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 13700);
	// lwz r23,13700(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 13700);
	// lwz r23,13700(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 13700);
	// lwz r23,13700(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 13700);
	// lwz r23,13700(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 13700);
	// lwz r23,13700(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 13700);
	// lwz r23,13700(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 13700);
	// lwz r23,13700(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 13700);
	// lwz r23,13700(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 13700);
	// lwz r23,13700(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 13700);
	// lwz r23,13596(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 13596);
	// lwz r23,13604(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 13604);
	// lwz r23,13624(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 13624);
	// lwz r23,13656(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 13656);
	// lwz r23,13500(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 13500);
	// lwz r23,13500(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 13500);
	// lwz r23,13500(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 13500);
	// lwz r23,13500(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 13500);
	// lwz r23,13500(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 13500);
	// lwz r23,13500(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 13500);
	// lwz r23,13500(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 13500);
	// lwz r23,13500(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 13500);
	// lwz r23,13500(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 13500);
	// lwz r23,13500(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 13500);
	// lwz r23,13500(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 13500);
	// lwz r23,13500(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 13500);
	// lwz r23,13316(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 13316);
	// lwz r23,13316(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 13316);
	// lwz r23,13316(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 13316);
	// lwz r23,13316(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 13316);
	// lwz r23,13344(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 13344);
	// lwz r23,13344(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 13344);
	// lwz r23,13344(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 13344);
	// lwz r23,13344(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 13344);
	// lwz r23,13384(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 13384);
	// lwz r23,13384(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 13384);
	// lwz r23,13384(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 13384);
	// lwz r23,13384(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 13384);
loc_82E22E48:
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// lbz r9,1(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// srawi r10,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 1;
	// lbz r5,2(r31)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2);
	// lwz r6,8(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// rotlwi r8,r9,1
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r9.u32, 1);
	// lwz r7,4(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rotlwi r9,r5,1
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r5.u32, 1);
	// add r10,r6,r7
	ctx.r10.u64 = ctx.r6.u64 + ctx.r7.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// b 0x82e23078
	goto loc_82E23078;
loc_82E22E78:
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r8,8(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// srawi r10,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 1;
	// lbz r6,1(r31)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// lbz r5,2(r31)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2);
	// subf r7,r8,r9
	ctx.r7.s64 = ctx.r9.s64 - ctx.r8.s64;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rotlwi r8,r6,1
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r6.u32, 1);
	// rotlwi r9,r5,1
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r5.u32, 1);
	// addi r10,r7,255
	ctx.r10.s64 = ctx.r7.s64 + 255;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// b 0x82e23078
	goto loc_82E23078;
loc_82E22EAC:
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// lbz r9,1(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// srawi r10,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 1;
	// lbz r5,2(r31)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2);
	// lwz r6,8(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// rotlwi r8,r9,1
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r9.u32, 1);
	// lwz r7,0(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rotlwi r9,r5,1
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r5.u32, 1);
	// add r10,r6,r7
	ctx.r10.u64 = ctx.r6.u64 + ctx.r7.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// b 0x82e23078
	goto loc_82E23078;
loc_82E22EDC:
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r8,8(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// srawi r10,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 1;
	// lbz r6,1(r31)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// lbz r5,2(r31)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2);
	// subf r7,r8,r9
	ctx.r7.s64 = ctx.r9.s64 - ctx.r8.s64;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rotlwi r8,r6,1
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r6.u32, 1);
	// rotlwi r9,r5,1
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r5.u32, 1);
	// addi r10,r7,255
	ctx.r10.s64 = ctx.r7.s64 + 255;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// b 0x82e23078
	goto loc_82E23078;
loc_82E22F10:
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// lbz r9,1(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// srawi r10,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 1;
	// lbz r5,2(r31)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2);
	// lwz r6,4(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// rotlwi r8,r9,1
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r9.u32, 1);
	// lwz r7,0(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rotlwi r9,r5,1
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r5.u32, 1);
	// add r10,r6,r7
	ctx.r10.u64 = ctx.r6.u64 + ctx.r7.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// b 0x82e23078
	goto loc_82E23078;
loc_82E22F40:
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r8,4(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// srawi r10,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 1;
	// lbz r6,1(r31)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// lbz r5,2(r31)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2);
	// subf r7,r8,r9
	ctx.r7.s64 = ctx.r9.s64 - ctx.r8.s64;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rotlwi r8,r6,1
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r6.u32, 1);
	// rotlwi r9,r5,1
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r5.u32, 1);
	// addi r10,r7,255
	ctx.r10.s64 = ctx.r7.s64 + 255;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// b 0x82e23078
	goto loc_82E23078;
loc_82E22F74:
	// lbz r10,1(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// lbz r11,2(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2);
	// rotlwi r8,r10,1
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// lwz r5,8(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r6,4(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// rotlwi r9,r11,1
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// add r8,r10,r8
	ctx.r8.u64 = ctx.r10.u64 + ctx.r8.u64;
	// lwz r7,0(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r4,12(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// add r10,r5,r6
	ctx.r10.u64 = ctx.r5.u64 + ctx.r6.u64;
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 + ctx.r7.u64;
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// b 0x82e23078
	goto loc_82E23078;
loc_82E22FAC:
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r8,8(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lbz r10,1(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// lbz r11,2(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2);
	// subf r7,r8,r9
	ctx.r7.s64 = ctx.r9.s64 - ctx.r8.s64;
	// lwz r6,0(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// rotlwi r8,r10,1
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// rotlwi r9,r11,1
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// lwz r5,12(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// add r7,r7,r6
	ctx.r7.u64 = ctx.r7.u64 + ctx.r6.u64;
	// add r8,r10,r8
	ctx.r8.u64 = ctx.r10.u64 + ctx.r8.u64;
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r10,r7,255
	ctx.r10.s64 = ctx.r7.s64 + 255;
	// rlwinm r11,r5,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// b 0x82e23078
	goto loc_82E23078;
loc_82E22FE8:
	// lwz r9,8(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r8,4(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lbz r10,1(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// lbz r11,2(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2);
	// subf r7,r8,r9
	ctx.r7.s64 = ctx.r9.s64 - ctx.r8.s64;
	// lwz r6,0(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// rotlwi r8,r10,1
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// rotlwi r9,r11,1
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// lwz r5,12(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// add r7,r7,r6
	ctx.r7.u64 = ctx.r7.u64 + ctx.r6.u64;
	// add r8,r10,r8
	ctx.r8.u64 = ctx.r10.u64 + ctx.r8.u64;
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r10,r7,255
	ctx.r10.s64 = ctx.r7.s64 + 255;
	// rlwinm r11,r5,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// b 0x82e23078
	goto loc_82E23078;
loc_82E23024:
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r8,8(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lbz r10,1(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// lbz r11,2(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2);
	// subf r7,r8,r9
	ctx.r7.s64 = ctx.r9.s64 - ctx.r8.s64;
	// lwz r6,4(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// rotlwi r8,r10,1
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// rotlwi r9,r11,1
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// lwz r5,12(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// subf r7,r6,r7
	ctx.r7.s64 = ctx.r7.s64 - ctx.r6.s64;
	// add r8,r10,r8
	ctx.r8.u64 = ctx.r10.u64 + ctx.r8.u64;
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r10,r7,510
	ctx.r10.s64 = ctx.r7.s64 + 510;
	// rlwinm r11,r5,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// b 0x82e23078
	goto loc_82E23078;
loc_82E23060:
	// addi r11,r11,-16
	ctx.r11.s64 = ctx.r11.s64 + -16;
	// lbz r8,1(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// lbz r9,2(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// lwzx r10,r10,r30
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r30.u32);
loc_82E23078:
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmpw cr6,r7,r9
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x82e22c74
	if (ctx.cr6.lt) goto loc_82E22C74;
	// lbz r9,-1(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + -1);
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// add r31,r9,r31
	ctx.r31.u64 = ctx.r9.u64 + ctx.r31.u64;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bgt cr6,0x82e22c74
	if (ctx.cr6.gt) goto loc_82E22C74;
	// subf r5,r9,r31
	ctx.r5.s64 = ctx.r31.s64 - ctx.r9.s64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82e22c20
	ctx.lr = 0x82E230AC;
	sub_82E22C20(ctx, base);
	// b 0x82e22c74
	goto loc_82E22C74;
loc_82E230B0:
	// addi r9,r11,-32
	ctx.r9.s64 = ctx.r11.s64 + -32;
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// lbz r10,1(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// addi r31,r31,3
	ctx.r31.s64 = ctx.r31.s64 + 3;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r8,r30
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r30.u32);
	// add r7,r11,r9
	ctx.r7.u64 = ctx.r11.u64 + ctx.r9.u64;
	// cmpw cr6,r7,r10
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82e22c74
	if (ctx.cr6.lt) goto loc_82E22C74;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lbz r11,-1(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + -1);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// add r31,r11,r31
	ctx.r31.u64 = ctx.r11.u64 + ctx.r31.u64;
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// bgt cr6,0x82e22c74
	if (ctx.cr6.gt) goto loc_82E22C74;
	// subf r5,r11,r31
	ctx.r5.s64 = ctx.r31.s64 - ctx.r11.s64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82e22c20
	ctx.lr = 0x82E230FC;
	sub_82E22C20(ctx, base);
	// b 0x82e22c74
	goto loc_82E22C74;
loc_82E23100:
	// addi r10,r11,-35
	ctx.r10.s64 = ctx.r11.s64 + -35;
	// lbz r9,3(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 3);
	// lbz r8,4(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 4);
	// addi r11,r31,7
	ctx.r11.s64 = ctx.r31.s64 + 7;
	// rlwinm r5,r10,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,12(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// rotlwi r9,r9,8
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 8);
	// lbz r4,2(r31)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2);
	// lbz r7,1(r31)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// add r6,r9,r8
	ctx.r6.u64 = ctx.r9.u64 + ctx.r8.u64;
	// lwzx r9,r5,r30
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r30.u32);
	// add r3,r10,r9
	ctx.r3.u64 = ctx.r10.u64 + ctx.r9.u64;
	// cmpw cr6,r3,r4
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r4.s32, ctx.xer);
	// bge cr6,0x82e23140
	if (!ctx.cr6.lt) goto loc_82E23140;
	// add r31,r6,r11
	ctx.r31.u64 = ctx.r6.u64 + ctx.r11.u64;
	// b 0x82e22c74
	goto loc_82E22C74;
loc_82E23140:
	// lbz r5,-2(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + -2);
	// add r4,r10,r7
	ctx.r4.u64 = ctx.r10.u64 + ctx.r7.u64;
	// lbz r8,-1(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + -1);
	// rotlwi r10,r5,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r5.u32, 8);
	// cmpw cr6,r9,r4
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r4.s32, ctx.xer);
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bgt cr6,0x82e22c74
	if (ctx.cr6.gt) goto loc_82E22C74;
	// subf r11,r10,r6
	ctx.r11.s64 = ctx.r6.s64 - ctx.r10.s64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// add r5,r11,r31
	ctx.r5.u64 = ctx.r11.u64 + ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82e22c20
	ctx.lr = 0x82E23174;
	sub_82E22C20(ctx, base);
	// b 0x82e22c74
	goto loc_82E22C74;
loc_82E23178:
	// addi r10,r11,-38
	ctx.r10.s64 = ctx.r11.s64 + -38;
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// lbz r9,1(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r8,r30
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r30.u32);
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmpw cr6,r7,r9
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x82e235d4
	if (ctx.cr6.lt) goto loc_82E235D4;
	// lbz r9,2(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2);
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bgt cr6,0x82e235d4
	if (ctx.cr6.gt) goto loc_82E235D4;
	// addi r31,r31,3
	ctx.r31.s64 = ctx.r31.s64 + 3;
	// b 0x82e22c74
	goto loc_82E22C74;
loc_82E231B0:
	// lbz r10,1(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// addi r8,r11,-37
	ctx.r8.s64 = ctx.r11.s64 + -37;
	// lbz r9,2(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2);
	// rotlwi r10,r10,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// lwz r11,28(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 28);
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lbz r8,3(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 3);
	// add r6,r10,r9
	ctx.r6.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r9,r6,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 8) & 0xFFFFFF00;
	// lwzx r10,r7,r28
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r28.u32);
	// add r5,r9,r8
	ctx.r5.u64 = ctx.r9.u64 + ctx.r8.u64;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmpw cr6,r4,r5
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r5.s32, ctx.xer);
	// blt cr6,0x82e235d4
	if (ctx.cr6.lt) goto loc_82E235D4;
	// lbz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 4);
	// lbz r7,5(r31)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r31.u32 + 5);
	// rotlwi r9,r9,8
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 8);
	// lbz r8,6(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 6);
	// add r7,r9,r7
	ctx.r7.u64 = ctx.r9.u64 + ctx.r7.u64;
	// rlwinm r9,r7,8,0,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 8) & 0xFFFFFF00;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// add r6,r9,r11
	ctx.r6.u64 = ctx.r9.u64 + ctx.r11.u64;
	// cmpw cr6,r10,r6
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r6.s32, ctx.xer);
	// bgt cr6,0x82e235d4
	if (ctx.cr6.gt) goto loc_82E235D4;
	// addi r31,r31,7
	ctx.r31.s64 = ctx.r31.s64 + 7;
	// b 0x82e22c74
	goto loc_82E22C74;
loc_82E23218:
	// lbz r11,1(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r31,r11,2
	ctx.r31.s64 = ctx.r11.s64 + 2;
	// b 0x82e22c74
	goto loc_82E22C74;
loc_82E23228:
	// lbz r11,1(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// lbz r10,2(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2);
	// rotlwi r11,r11,8
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 8);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r31,r11,3
	ctx.r31.s64 = ctx.r11.s64 + 3;
	// b 0x82e22c74
	goto loc_82E22C74;
loc_82E23244:
	// lbz r11,1(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// lbz r9,2(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2);
	// rotlwi r11,r11,8
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 8);
	// lbz r10,3(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 3);
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r9,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFFFF00;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r31,r11,4
	ctx.r31.s64 = ctx.r11.s64 + 4;
	// b 0x82e22c74
	goto loc_82E22C74;
loc_82E2326C:
	// lwz r10,32(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// lwz r9,16(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// subf r7,r11,r10
	ctx.r7.s64 = ctx.r10.s64 - ctx.r11.s64;
	// lwz r6,20(r28)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20);
	// lwz r5,24(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 24);
	// stw r7,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r7.u32);
	// sraw r4,r9,r7
	temp.u32 = ctx.r7.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r9.s32 < 0) & (((ctx.r9.s32 >> temp.u32) << temp.u32) != ctx.r9.s32);
	ctx.r4.s64 = ctx.r9.s32 >> temp.u32;
	// lwz r3,28(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 28);
	// sraw r6,r6,r7
	temp.u32 = ctx.r7.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r6.s32 < 0) & (((ctx.r6.s32 >> temp.u32) << temp.u32) != ctx.r6.s32);
	ctx.r6.s64 = ctx.r6.s32 >> temp.u32;
	// lbz r9,1(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// sraw r5,r5,r7
	temp.u32 = ctx.r7.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r5.s32 < 0) & (((ctx.r5.s32 >> temp.u32) << temp.u32) != ctx.r5.s32);
	ctx.r5.s64 = ctx.r5.s32 >> temp.u32;
	// lwz r8,16(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// sraw r10,r3,r7
	temp.u32 = ctx.r7.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r3.s32 < 0) & (((ctx.r3.s32 >> temp.u32) << temp.u32) != ctx.r3.s32);
	ctx.r10.s64 = ctx.r3.s32 >> temp.u32;
	// add r3,r9,r8
	ctx.r3.u64 = ctx.r9.u64 + ctx.r8.u64;
	// addi r8,r10,1
	ctx.r8.s64 = ctx.r10.s64 + 1;
	// slw r7,r3,r11
	ctx.r7.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r3.u32 << (ctx.r11.u8 & 0x3F));
	// subf r4,r7,r4
	ctx.r4.s64 = ctx.r4.s64 - ctx.r7.s64;
	// stw r7,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r7.u32);
	// stw r4,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r4.u32);
	// lbz r10,2(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2);
	// lwz r9,20(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// add r3,r10,r9
	ctx.r3.u64 = ctx.r10.u64 + ctx.r9.u64;
	// slw r10,r3,r11
	ctx.r10.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r3.u32 << (ctx.r11.u8 & 0x3F));
	// subf r9,r10,r6
	ctx.r9.s64 = ctx.r6.s64 - ctx.r10.s64;
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// lbz r10,3(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 3);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// lwz r9,24(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// add r7,r10,r9
	ctx.r7.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// slw r6,r7,r11
	ctx.r6.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r11.u8 & 0x3F));
	// subf r5,r6,r5
	ctx.r5.s64 = ctx.r5.s64 - ctx.r6.s64;
	// stw r6,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r6.u32);
	// stw r5,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r5.u32);
	// lwz r4,28(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// stw r4,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r4.u32);
	// lwz r3,36(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// addi r30,r1,80
	ctx.r30.s64 = ctx.r1.s64 + 80;
	// stw r3,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// b 0x82e22c74
	goto loc_82E22C74;
loc_82E23310:
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// lbz r8,1(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82e23340
	if (ctx.cr6.eq) goto loc_82E23340;
	// li r9,10
	ctx.r9.s64 = 10;
	// addi r10,r1,76
	ctx.r10.s64 = ctx.r1.s64 + 76;
	// addi r11,r30,-4
	ctx.r11.s64 = ctx.r30.s64 + -4;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82E23330:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x82e23330
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82E23330;
	// addi r30,r1,80
	ctx.r30.s64 = ctx.r1.s64 + 80;
loc_82E23340:
	// lwz r11,108(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// addi r31,r31,2
	ctx.r31.s64 = ctx.r31.s64 + 2;
	// add r10,r8,r11
	ctx.r10.u64 = ctx.r8.u64 + ctx.r11.u64;
	// stw r10,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r10.u32);
	// b 0x82e22c74
	goto loc_82E22C74;
loc_82E23354:
	// lbz r11,1(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// lbz r10,2(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2);
	// rotlwi r11,r11,8
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 8);
	// cmplw cr6,r30,r9
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r9.u32, ctx.xer);
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// beq cr6,0x82e23390
	if (ctx.cr6.eq) goto loc_82E23390;
	// li r9,10
	ctx.r9.s64 = 10;
	// addi r10,r1,76
	ctx.r10.s64 = ctx.r1.s64 + 76;
	// addi r11,r30,-4
	ctx.r11.s64 = ctx.r30.s64 + -4;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82E23380:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x82e23380
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82E23380;
	// addi r30,r1,80
	ctx.r30.s64 = ctx.r1.s64 + 80;
loc_82E23390:
	// lwz r11,108(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// addi r31,r31,3
	ctx.r31.s64 = ctx.r31.s64 + 3;
	// add r10,r8,r11
	ctx.r10.u64 = ctx.r8.u64 + ctx.r11.u64;
	// stw r10,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r10.u32);
	// b 0x82e22c74
	goto loc_82E22C74;
loc_82E233A4:
	// lbz r11,1(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// lbz r8,2(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2);
	// rotlwi r11,r11,8
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 8);
	// lbz r9,3(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 3);
	// lbz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 4);
	// cmplw cr6,r30,r7
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r7.u32, ctx.xer);
	// add r6,r11,r8
	ctx.r6.u64 = ctx.r11.u64 + ctx.r8.u64;
	// rlwinm r11,r6,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 8) & 0xFFFFFF00;
	// add r5,r11,r9
	ctx.r5.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r5,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 8) & 0xFFFFFF00;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// beq cr6,0x82e233f8
	if (ctx.cr6.eq) goto loc_82E233F8;
	// li r9,10
	ctx.r9.s64 = 10;
	// addi r10,r1,76
	ctx.r10.s64 = ctx.r1.s64 + 76;
	// addi r11,r30,-4
	ctx.r11.s64 = ctx.r30.s64 + -4;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82E233E8:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x82e233e8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82E233E8;
	// addi r30,r1,80
	ctx.r30.s64 = ctx.r1.s64 + 80;
loc_82E233F8:
	// stw r8,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r8.u32);
	// addi r31,r31,5
	ctx.r31.s64 = ctx.r31.s64 + 5;
	// b 0x82e22c74
	goto loc_82E22C74;
loc_82E23404:
	// addi r11,r11,-96
	ctx.r11.s64 = ctx.r11.s64 + -96;
	// lbz r10,1(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// addi r9,r1,116
	ctx.r9.s64 = ctx.r1.s64 + 116;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r31,r31,2
	ctx.r31.s64 = ctx.r31.s64 + 2;
	// stwx r10,r8,r9
	PPC_STORE_U32(ctx.r8.u32 + ctx.r9.u32, ctx.r10.u32);
	// b 0x82e23484
	goto loc_82E23484;
loc_82E23420:
	// lbz r9,1(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// addi r8,r11,-100
	ctx.r8.s64 = ctx.r11.s64 + -100;
	// lbz r10,2(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2);
	// addi r7,r1,116
	ctx.r7.s64 = ctx.r1.s64 + 116;
	// rotlwi r11,r9,8
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 8);
	// rlwinm r6,r8,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r31,r31,3
	ctx.r31.s64 = ctx.r31.s64 + 3;
	// stwx r5,r6,r7
	PPC_STORE_U32(ctx.r6.u32 + ctx.r7.u32, ctx.r5.u32);
	// b 0x82e23484
	goto loc_82E23484;
loc_82E23448:
	// lbz r10,1(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// addi r7,r11,-104
	ctx.r7.s64 = ctx.r11.s64 + -104;
	// lbz r8,2(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2);
	// addi r6,r1,116
	ctx.r6.s64 = ctx.r1.s64 + 116;
	// rotlwi r11,r10,8
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// lbz r9,3(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 3);
	// lbz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 4);
	// rlwinm r5,r7,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r4,r11,r8
	ctx.r4.u64 = ctx.r11.u64 + ctx.r8.u64;
	// addi r31,r31,5
	ctx.r31.s64 = ctx.r31.s64 + 5;
	// rlwinm r11,r4,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 8) & 0xFFFFFF00;
	// add r3,r11,r9
	ctx.r3.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r3,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 8) & 0xFFFFFF00;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stwx r11,r5,r6
	PPC_STORE_U32(ctx.r5.u32 + ctx.r6.u32, ctx.r11.u32);
loc_82E23484:
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// lwz r8,116(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82e234b4
	if (ctx.cr6.eq) goto loc_82E234B4;
	// li r9,10
	ctx.r9.s64 = 10;
	// addi r10,r1,76
	ctx.r10.s64 = ctx.r1.s64 + 76;
	// addi r11,r30,-4
	ctx.r11.s64 = ctx.r30.s64 + -4;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82E234A4:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x82e234a4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82E234A4;
	// addi r30,r1,80
	ctx.r30.s64 = ctx.r1.s64 + 80;
loc_82E234B4:
	// stw r8,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r8.u32);
	// b 0x82e22c74
	goto loc_82E22C74;
loc_82E234BC:
	// li r5,512
	ctx.r5.s64 = 512;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x82d37840
	ctx.lr = 0x82E234CC;
	sub_82D37840(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x82d348d0
	ctx.lr = 0x82E234D8;
	sub_82D348D0(ctx, base);
	// lwz r3,-21100(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + -21100);
	// lis r5,4760
	ctx.r5.s64 = 311951360;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// li r8,292
	ctx.r8.s64 = 292;
	// addi r6,r1,144
	ctx.r6.s64 = ctx.r1.s64 + 144;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// ori r5,r5,65245
	ctx.r5.u64 = ctx.r5.u64 | 65245;
	// li r4,3
	ctx.r4.s64 = 3;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82E23504;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82e23510
	if (ctx.cr6.eq) goto loc_82E23510;
	// twi 31,r0,22
	if (ctx.r0.s32 < 22 || ctx.r0.s32 > 22 || ctx.r0.u32 == 22 || ctx.r0.u32 < 22 || ctx.r0.u32 > 22) __builtin_debugtrap();
loc_82E23510:
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x82d346f0
	ctx.lr = 0x82E23518;
	sub_82D346F0(ctx, base);
	// b 0x82e22c74
	goto loc_82E22C74;
loc_82E2351C:
	// lbz r11,1(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// b 0x82e23588
	goto loc_82E23588;
loc_82E23524:
	// lbz r11,1(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// lbz r10,2(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2);
	// rotlwi r11,r11,8
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 8);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x82e23588
	goto loc_82E23588;
loc_82E23538:
	// lbz r11,1(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// lbz r9,2(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2);
	// rotlwi r11,r11,8
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 8);
	// lbz r10,3(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 3);
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r9,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFFFF00;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x82e23588
	goto loc_82E23588;
loc_82E23558:
	// lbz r11,1(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// lbz r8,2(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2);
	// rotlwi r11,r11,8
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 8);
	// lbz r9,3(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 3);
	// lbz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 4);
	// add r8,r11,r8
	ctx.r8.u64 = ctx.r11.u64 + ctx.r8.u64;
	// rlwinm r11,r8,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFFFF00;
	// add r7,r11,r9
	ctx.r7.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r7,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 8) & 0xFFFFFF00;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x82e23588
	goto loc_82E23588;
loc_82E23584:
	// addi r11,r11,-48
	ctx.r11.s64 = ctx.r11.s64 + -48;
loc_82E23588:
	// lwz r10,28(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// lwz r31,0(r28)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// add r30,r10,r11
	ctx.r30.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x82d2d090
	ctx.lr = 0x82E23598;
	sub_82D2D090(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// clrlwi r9,r11,2
	ctx.r9.u64 = ctx.r11.u32 & 0x3FFFFFFF;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x82e235bc
	if (!ctx.cr6.eq) goto loc_82E235BC;
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82d2ded0
	ctx.lr = 0x82E235BC;
	sub_82D2DED0(ctx, base);
loc_82E235BC:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stwx r30,r10,r9
	PPC_STORE_U32(ctx.r10.u32 + ctx.r9.u32, ctx.r30.u32);
loc_82E235D4:
	// addi r1,r1,720
	ctx.r1.s64 = ctx.r1.s64 + 720;
	// b 0x82fa76c0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E235DC"))) PPC_WEAK_FUNC(sub_82E235DC);
PPC_FUNC_IMPL(__imp__sub_82E235DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E235E0"))) PPC_WEAK_FUNC(sub_82E235E0);
PPC_FUNC_IMPL(__imp__sub_82E235E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r9,r5
	ctx.r9.u64 = ctx.r5.u64;
	// lwz r5,32(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 32);
	// stw r6,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r6.u32);
	// lfs f0,28(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,16(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	ctx.f12.f64 = double(temp.f32);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// li r8,16
	ctx.r8.s64 = 16;
	// lfs f13,0(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f11,f13,f12
	ctx.f11.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// fmuls f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// stw r11,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r11.u32);
	// stw r8,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r8.u32);
	// fctiwz f9,f10
	ctx.f9.s64 = (ctx.f10.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f10.f64));
	// stfd f9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f9.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r7,r11,-1
	ctx.r7.s64 = ctx.r11.s64 + -1;
	// stw r7,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r7.u32);
	// lfs f8,28(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 28);
	ctx.f8.f64 = double(temp.f32);
	// lhz r6,16(r3)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r3.u32 + 16);
	// lfs f7,4(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	ctx.f7.f64 = double(temp.f32);
	// lfs f6,20(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	ctx.f6.f64 = double(temp.f32);
	// fsubs f5,f7,f6
	ctx.f5.f64 = double(float(ctx.f7.f64 - ctx.f6.f64));
	// fmuls f4,f5,f8
	ctx.f4.f64 = double(float(ctx.f5.f64 * ctx.f8.f64));
	// extsh r11,r6
	ctx.r11.s64 = ctx.r6.s16;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// fctiwz f3,f4
	ctx.f3.s64 = (ctx.f4.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f4.f64));
	// stfd f3,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f3.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r8,r11,-1
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// stw r8,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r8.u32);
	// lfs f2,28(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 28);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,8(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	ctx.f1.f64 = double(temp.f32);
	// lhz r7,20(r3)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r3.u32 + 20);
	// lfs f0,24(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f13,f1,f0
	ctx.f13.f64 = double(float(ctx.f1.f64 - ctx.f0.f64));
	// fmuls f12,f13,f2
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f2.f64));
	// extsh r6,r7
	ctx.r6.s64 = ctx.r7.s16;
	// stw r6,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r6.u32);
	// fctiwz f11,f12
	ctx.f11.s64 = (ctx.f12.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f12.f64));
	// stfd f11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f11.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// lfs f10,12(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	ctx.f10.f64 = double(temp.f32);
	// lhz r9,24(r3)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r3.u32 + 24);
	// lfs f9,28(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 28);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f8,f10,f9
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f9.f64));
	// fctiwz f7,f8
	ctx.f7.s64 = (ctx.f8.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f8.f64));
	// stfd f7,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f7.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// srawi r10,r11,16
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFFFF) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 16;
	// stw r11,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r11.u32);
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// addi r7,r10,1
	ctx.r7.s64 = ctx.r10.s64 + 1;
	// stw r8,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r8.u32);
	// stw r7,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r7.u32);
	// bl 0x82e22c20
	ctx.lr = 0x82E236EC;
	sub_82E22C20(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E236FC"))) PPC_WEAK_FUNC(sub_82E236FC);
PPC_FUNC_IMPL(__imp__sub_82E236FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E23700"))) PPC_WEAK_FUNC(sub_82E23700);
PPC_FUNC_IMPL(__imp__sub_82E23700) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// rlwinm r11,r4,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r7)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r7.u32 + 0, temp.u32);
	// lfs f13,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,0(r8)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r8.u32 + 0, temp.u32);
	// stfs f1,0(r11)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// stfs f2,4(r11)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E23724"))) PPC_WEAK_FUNC(sub_82E23724);
PPC_FUNC_IMPL(__imp__sub_82E23724) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E23728"))) PPC_WEAK_FUNC(sub_82E23728);
PPC_FUNC_IMPL(__imp__sub_82E23728) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// rlwinm r11,r4,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// lfsx f0,r11,r3
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	ctx.f0.f64 = double(temp.f32);
	// stfsx f1,r11,r3
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + ctx.r3.u32, temp.u32);
	// fmr f1,f0
	ctx.f1.f64 = ctx.f0.f64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E2373C"))) PPC_WEAK_FUNC(sub_82E2373C);
PPC_FUNC_IMPL(__imp__sub_82E2373C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E23740"))) PPC_WEAK_FUNC(sub_82E23740);
PPC_FUNC_IMPL(__imp__sub_82E23740) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// rlwinm r11,r4,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// lfs f0,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f1,4(r11)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// fmr f1,f0
	ctx.f1.f64 = ctx.f0.f64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E2375C"))) PPC_WEAK_FUNC(sub_82E2375C);
PPC_FUNC_IMPL(__imp__sub_82E2375C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E23760"))) PPC_WEAK_FUNC(sub_82E23760);
PPC_FUNC_IMPL(__imp__sub_82E23760) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,64(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// extsb r11,r4
	ctx.r11.s64 = ctx.r4.s8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stb r4,109(r3)
	PPC_STORE_U8(ctx.r3.u32 + 109, ctx.r4.u8);
	// beq cr6,0x82e2378c
	if (ctx.cr6.eq) goto loc_82E2378C;
	// stw r5,104(r3)
	PPC_STORE_U32(ctx.r3.u32 + 104, ctx.r5.u32);
loc_82E2378C:
	// lwz r11,172(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 172);
	// addi r4,r31,68
	ctx.r4.s64 = ctx.r31.s64 + 68;
	// li r5,104
	ctx.r5.s64 = 104;
	// stb r11,108(r3)
	PPC_STORE_U8(ctx.r3.u32 + 108, ctx.r11.u8);
	// bl 0x82fa77c0
	ctx.lr = 0x82E237A0;
	sub_82FA77C0(ctx, base);
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// addi r9,r11,112
	ctx.r9.s64 = ctx.r11.s64 + 112;
	// stw r9,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r9.u32);
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

__attribute__((alias("__imp__sub_82E237C0"))) PPC_WEAK_FUNC(sub_82E237C0);
PPC_FUNC_IMPL(__imp__sub_82E237C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7674
	ctx.lr = 0x82E237C8;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r9,56(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// addi r30,r3,52
	ctx.r30.s64 = ctx.r3.s64 + 52;
	// li r27,1
	ctx.r27.s64 = 1;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x82e23818
	if (!ctx.cr6.gt) goto loc_82E23818;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
loc_82E237F0:
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r8,r28
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r28.u32, ctx.xer);
	// beq cr6,0x82e23810
	if (ctx.cr6.eq) goto loc_82E23810;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x82e237f0
	if (ctx.cr6.lt) goto loc_82E237F0;
	// b 0x82e23818
	goto loc_82E23818;
loc_82E23810:
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x82e238e4
	if (!ctx.cr6.eq) goto loc_82E238E4;
loc_82E23818:
	// lbz r11,184(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 184);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82e23838
	if (ctx.cr6.eq) goto loc_82E23838;
	// lwz r10,188(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 188);
	// mr r29,r27
	ctx.r29.u64 = ctx.r27.u64;
	// cmplw cr6,r28,r10
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82e2383c
	if (ctx.cr6.eq) goto loc_82E2383C;
loc_82E23838:
	// li r29,0
	ctx.r29.s64 = 0;
loc_82E2383C:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82e23850
	if (ctx.cr6.eq) goto loc_82E23850;
	// extsb r11,r29
	ctx.r11.s64 = ctx.r29.s8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82e238a0
	if (ctx.cr6.eq) goto loc_82E238A0;
loc_82E23850:
	// lwz r3,64(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// addi r4,r31,68
	ctx.r4.s64 = ctx.r31.s64 + 68;
	// li r5,104
	ctx.r5.s64 = 104;
	// stb r27,109(r3)
	PPC_STORE_U8(ctx.r3.u32 + 109, ctx.r27.u8);
	// stw r28,104(r3)
	PPC_STORE_U32(ctx.r3.u32 + 104, ctx.r28.u32);
	// lwz r11,172(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 172);
	// stb r11,108(r3)
	PPC_STORE_U8(ctx.r3.u32 + 108, ctx.r11.u8);
	// bl 0x82fa77c0
	ctx.lr = 0x82E23870;
	sub_82FA77C0(ctx, base);
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// lbz r8,176(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 176);
	// addi r9,r11,112
	ctx.r9.s64 = ctx.r11.s64 + 112;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// stw r9,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r9.u32);
	// bne cr6,0x82e23898
	if (!ctx.cr6.eq) goto loc_82E23898;
	// extsb r11,r29
	ctx.r11.s64 = ctx.r29.s8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// beq cr6,0x82e2389c
	if (ctx.cr6.eq) goto loc_82E2389C;
loc_82E23898:
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
loc_82E2389C:
	// stb r11,176(r31)
	PPC_STORE_U8(ctx.r31.u32 + 176, ctx.r11.u8);
loc_82E238A0:
	// bl 0x82d2d090
	ctx.lr = 0x82E238A4;
	sub_82D2D090(ctx, base);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// clrlwi r9,r11,2
	ctx.r9.u64 = ctx.r11.u32 & 0x3FFFFFFF;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x82e238c8
	if (!ctx.cr6.eq) goto loc_82E238C8;
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82d2ded0
	ctx.lr = 0x82E238C8;
	sub_82D2DED0(ctx, base);
loc_82E238C8:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r28,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r28.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// stw r10,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r10.u32);
loc_82E238E4:
	// lbz r11,176(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 176);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82e238f4
	if (ctx.cr6.eq) goto loc_82E238F4;
	// stb r27,192(r31)
	PPC_STORE_U8(ctx.r31.u32 + 192, ctx.r27.u8);
loc_82E238F4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E238FC"))) PPC_WEAK_FUNC(sub_82E238FC);
PPC_FUNC_IMPL(__imp__sub_82E238FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E23900"))) PPC_WEAK_FUNC(sub_82E23900);
PPC_FUNC_IMPL(__imp__sub_82E23900) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7668
	ctx.lr = 0x82E23908;
	__savegprlr_24(ctx, base);
	// addi r12,r1,-72
	ctx.r12.s64 = ctx.r1.s64 + -72;
	// bl 0x82fa8d28
	ctx.lr = 0x82E23910;
	__savefpr_28(ctx, base);
	// stwu r1,-784(r1)
	ea = -784 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r10,192(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 192);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lbz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r5.u32 + 0);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82e248cc
	if (!ctx.cr6.eq) goto loc_82E248CC;
	// lis r10,-32236
	ctx.r10.s64 = -2112618496;
	// lis r9,-32236
	ctx.r9.s64 = -2112618496;
	// lis r26,-31960
	ctx.r26.s64 = -2094530560;
	// addi r28,r10,22844
	ctx.r28.s64 = ctx.r10.s64 + 22844;
	// addi r27,r9,22056
	ctx.r27.s64 = ctx.r9.s64 + 22056;
loc_82E23944:
	// cmplwi cr6,r11,107
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 107, ctx.xer);
	// bgt cr6,0x82e23d90
	if (ctx.cr6.gt) goto loc_82E23D90;
	// lis r12,-32030
	ctx.r12.s64 = -2099118080;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,14692
	ctx.r12.s64 = ctx.r12.s64 + 14692;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_82E23B68;
	case 1:
		goto loc_82E23B68;
	case 2:
		goto loc_82E23B68;
	case 3:
		goto loc_82E23B68;
	case 4:
		goto loc_82E23B68;
	case 5:
		goto loc_82E23B14;
	case 6:
		goto loc_82E23B24;
	case 7:
		goto loc_82E23B40;
	case 8:
		goto loc_82E23D90;
	case 9:
		goto loc_82E23BE4;
	case 10:
		goto loc_82E23C28;
	case 11:
		goto loc_82E23C78;
	case 12:
		goto loc_82E23D90;
	case 13:
		goto loc_82E23D90;
	case 14:
		goto loc_82E23D90;
	case 15:
		goto loc_82E23D90;
	case 16:
		goto loc_82E2441C;
	case 17:
		goto loc_82E2441C;
	case 18:
		goto loc_82E2441C;
	case 19:
		goto loc_82E23E0C;
	case 20:
		goto loc_82E23E9C;
	case 21:
		goto loc_82E23F34;
	case 22:
		goto loc_82E23FC4;
	case 23:
		goto loc_82E2405C;
	case 24:
		goto loc_82E240EC;
	case 25:
		goto loc_82E24184;
	case 26:
		goto loc_82E24224;
	case 27:
		goto loc_82E242CC;
	case 28:
		goto loc_82E24374;
	case 29:
		goto loc_82E23D90;
	case 30:
		goto loc_82E23D90;
	case 31:
		goto loc_82E23D90;
	case 32:
		goto loc_82E2448C;
	case 33:
		goto loc_82E2448C;
	case 34:
		goto loc_82E2448C;
	case 35:
		goto loc_82E244FC;
	case 36:
		goto loc_82E244FC;
	case 37:
		goto loc_82E244FC;
	case 38:
		goto loc_82E245EC;
	case 39:
		goto loc_82E245EC;
	case 40:
		goto loc_82E245EC;
	case 41:
		goto loc_82E24720;
	case 42:
		goto loc_82E24720;
	case 43:
		goto loc_82E24720;
	case 44:
		goto loc_82E23D90;
	case 45:
		goto loc_82E23D90;
	case 46:
		goto loc_82E23D90;
	case 47:
		goto loc_82E23D90;
	case 48:
		goto loc_82E248A0;
	case 49:
		goto loc_82E248A0;
	case 50:
		goto loc_82E248A0;
	case 51:
		goto loc_82E248A0;
	case 52:
		goto loc_82E248A0;
	case 53:
		goto loc_82E248A0;
	case 54:
		goto loc_82E248A0;
	case 55:
		goto loc_82E248A0;
	case 56:
		goto loc_82E248A0;
	case 57:
		goto loc_82E248A0;
	case 58:
		goto loc_82E248A0;
	case 59:
		goto loc_82E248A0;
	case 60:
		goto loc_82E248A0;
	case 61:
		goto loc_82E248A0;
	case 62:
		goto loc_82E248A0;
	case 63:
		goto loc_82E248A0;
	case 64:
		goto loc_82E248A0;
	case 65:
		goto loc_82E248A0;
	case 66:
		goto loc_82E248A0;
	case 67:
		goto loc_82E248A0;
	case 68:
		goto loc_82E248A0;
	case 69:
		goto loc_82E248A0;
	case 70:
		goto loc_82E248A0;
	case 71:
		goto loc_82E248A0;
	case 72:
		goto loc_82E248A0;
	case 73:
		goto loc_82E248A0;
	case 74:
		goto loc_82E248A0;
	case 75:
		goto loc_82E248A0;
	case 76:
		goto loc_82E248A0;
	case 77:
		goto loc_82E248A0;
	case 78:
		goto loc_82E248A0;
	case 79:
		goto loc_82E248A0;
	case 80:
		goto loc_82E24858;
	case 81:
		goto loc_82E24860;
	case 82:
		goto loc_82E24878;
	case 83:
		goto loc_82E23D90;
	case 84:
		goto loc_82E23D90;
	case 85:
		goto loc_82E23D90;
	case 86:
		goto loc_82E23D90;
	case 87:
		goto loc_82E23D90;
	case 88:
		goto loc_82E23D90;
	case 89:
		goto loc_82E23D90;
	case 90:
		goto loc_82E23D90;
	case 91:
		goto loc_82E23D90;
	case 92:
		goto loc_82E23D90;
	case 93:
		goto loc_82E23D90;
	case 94:
		goto loc_82E23D90;
	case 95:
		goto loc_82E23D90;
	case 96:
		goto loc_82E23CD8;
	case 97:
		goto loc_82E23CD8;
	case 98:
		goto loc_82E23CD8;
	case 99:
		goto loc_82E23CD8;
	case 100:
		goto loc_82E23CF4;
	case 101:
		goto loc_82E23CF4;
	case 102:
		goto loc_82E23CF4;
	case 103:
		goto loc_82E23CF4;
	case 104:
		goto loc_82E23D1C;
	case 105:
		goto loc_82E23D1C;
	case 106:
		goto loc_82E23D1C;
	case 107:
		goto loc_82E23D1C;
	default:
		__builtin_unreachable();
	}
	// lwz r23,15208(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 15208);
	// lwz r23,15208(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 15208);
	// lwz r23,15208(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 15208);
	// lwz r23,15208(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 15208);
	// lwz r23,15208(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 15208);
	// lwz r23,15124(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 15124);
	// lwz r23,15140(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 15140);
	// lwz r23,15168(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 15168);
	// lwz r23,15760(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 15760);
	// lwz r23,15332(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 15332);
	// lwz r23,15400(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 15400);
	// lwz r23,15480(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 15480);
	// lwz r23,15760(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 15760);
	// lwz r23,15760(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 15760);
	// lwz r23,15760(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 15760);
	// lwz r23,15760(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 15760);
	// lwz r23,17436(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 17436);
	// lwz r23,17436(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 17436);
	// lwz r23,17436(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 17436);
	// lwz r23,15884(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 15884);
	// lwz r23,16028(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 16028);
	// lwz r23,16180(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 16180);
	// lwz r23,16324(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 16324);
	// lwz r23,16476(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 16476);
	// lwz r23,16620(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 16620);
	// lwz r23,16772(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 16772);
	// lwz r23,16932(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 16932);
	// lwz r23,17100(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 17100);
	// lwz r23,17268(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 17268);
	// lwz r23,15760(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 15760);
	// lwz r23,15760(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 15760);
	// lwz r23,15760(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 15760);
	// lwz r23,17548(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 17548);
	// lwz r23,17548(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 17548);
	// lwz r23,17548(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 17548);
	// lwz r23,17660(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 17660);
	// lwz r23,17660(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 17660);
	// lwz r23,17660(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 17660);
	// lwz r23,17900(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 17900);
	// lwz r23,17900(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 17900);
	// lwz r23,17900(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 17900);
	// lwz r23,18208(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 18208);
	// lwz r23,18208(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 18208);
	// lwz r23,18208(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 18208);
	// lwz r23,15760(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 15760);
	// lwz r23,15760(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 15760);
	// lwz r23,15760(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 15760);
	// lwz r23,15760(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 15760);
	// lwz r23,18592(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 18592);
	// lwz r23,18592(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 18592);
	// lwz r23,18592(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 18592);
	// lwz r23,18592(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 18592);
	// lwz r23,18592(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 18592);
	// lwz r23,18592(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 18592);
	// lwz r23,18592(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 18592);
	// lwz r23,18592(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 18592);
	// lwz r23,18592(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 18592);
	// lwz r23,18592(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 18592);
	// lwz r23,18592(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 18592);
	// lwz r23,18592(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 18592);
	// lwz r23,18592(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 18592);
	// lwz r23,18592(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 18592);
	// lwz r23,18592(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 18592);
	// lwz r23,18592(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 18592);
	// lwz r23,18592(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 18592);
	// lwz r23,18592(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 18592);
	// lwz r23,18592(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 18592);
	// lwz r23,18592(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 18592);
	// lwz r23,18592(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 18592);
	// lwz r23,18592(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 18592);
	// lwz r23,18592(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 18592);
	// lwz r23,18592(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 18592);
	// lwz r23,18592(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 18592);
	// lwz r23,18592(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 18592);
	// lwz r23,18592(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 18592);
	// lwz r23,18592(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 18592);
	// lwz r23,18592(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 18592);
	// lwz r23,18592(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 18592);
	// lwz r23,18592(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 18592);
	// lwz r23,18592(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 18592);
	// lwz r23,18520(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 18520);
	// lwz r23,18528(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 18528);
	// lwz r23,18552(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 18552);
	// lwz r23,15760(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 15760);
	// lwz r23,15760(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 15760);
	// lwz r23,15760(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 15760);
	// lwz r23,15760(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 15760);
	// lwz r23,15760(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 15760);
	// lwz r23,15760(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 15760);
	// lwz r23,15760(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 15760);
	// lwz r23,15760(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 15760);
	// lwz r23,15760(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 15760);
	// lwz r23,15760(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 15760);
	// lwz r23,15760(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 15760);
	// lwz r23,15760(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 15760);
	// lwz r23,15760(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 15760);
	// lwz r23,15576(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 15576);
	// lwz r23,15576(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 15576);
	// lwz r23,15576(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 15576);
	// lwz r23,15576(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 15576);
	// lwz r23,15604(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 15604);
	// lwz r23,15604(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 15604);
	// lwz r23,15604(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 15604);
	// lwz r23,15604(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 15604);
	// lwz r23,15644(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 15644);
	// lwz r23,15644(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 15644);
	// lwz r23,15644(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 15644);
	// lwz r23,15644(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 15644);
loc_82E23B14:
	// lbz r11,1(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r31,r11,2
	ctx.r31.s64 = ctx.r11.s64 + 2;
	// b 0x82e23dec
	goto loc_82E23DEC;
loc_82E23B24:
	// lbz r10,1(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// lbz r11,2(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2);
	// rotlwi r10,r10,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r31,r11,3
	ctx.r31.s64 = ctx.r11.s64 + 3;
	// b 0x82e23dec
	goto loc_82E23DEC;
loc_82E23B40:
	// lbz r10,1(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// lbz r11,2(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2);
	// rotlwi r10,r10,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// lbz r9,3(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 3);
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r11,r8,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFFFF00;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r31,r11,4
	ctx.r31.s64 = ctx.r11.s64 + 4;
	// b 0x82e23dec
	goto loc_82E23DEC;
loc_82E23B68:
	// lwz r10,12(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// lbz r9,1(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// subfic r8,r10,16
	ctx.xer.ca = ctx.r10.u32 <= 16;
	ctx.r8.s64 = 16 - ctx.r10.s64;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// slw r9,r9,r8
	ctx.r9.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r8.u8 & 0x3F));
	// add r7,r9,r10
	ctx.r7.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r7,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r7.u32);
	// lbz r6,2(r31)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r5,12(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// subfic r4,r5,16
	ctx.xer.ca = ctx.r5.u32 <= 16;
	ctx.r4.s64 = 16 - ctx.r5.s64;
	// slw r9,r6,r4
	ctx.r9.u64 = ctx.r4.u8 & 0x20 ? 0 : (ctx.r6.u32 << (ctx.r4.u8 & 0x3F));
	// add r3,r9,r10
	ctx.r3.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r3,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// lbz r9,3(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 3);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r8,12(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// subfic r7,r8,16
	ctx.xer.ca = ctx.r8.u32 <= 16;
	ctx.r7.s64 = 16 - ctx.r8.s64;
	// slw r9,r9,r7
	ctx.r9.u64 = ctx.r7.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r7.u8 & 0x3F));
	// add r6,r9,r10
	ctx.r6.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r6,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r6.u32);
	// lwz r10,12(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// add r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r5,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r5.u32);
	// lwz r4,20(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// stw r4,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r4.u32);
	// lwz r3,16(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// addi r30,r1,112
	ctx.r30.s64 = ctx.r1.s64 + 112;
	// stw r3,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r3.u32);
	// b 0x82e23dec
	goto loc_82E23DEC;
loc_82E23BE4:
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// lbz r8,1(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82e23c14
	if (ctx.cr6.eq) goto loc_82E23C14;
	// li r9,6
	ctx.r9.s64 = 6;
	// addi r10,r1,108
	ctx.r10.s64 = ctx.r1.s64 + 108;
	// addi r11,r30,-4
	ctx.r11.s64 = ctx.r30.s64 + -4;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82E23C04:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x82e23c04
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82E23C04;
	// addi r30,r1,112
	ctx.r30.s64 = ctx.r1.s64 + 112;
loc_82E23C14:
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// addi r31,r31,2
	ctx.r31.s64 = ctx.r31.s64 + 2;
	// add r10,r8,r11
	ctx.r10.u64 = ctx.r8.u64 + ctx.r11.u64;
	// stw r10,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r10.u32);
	// b 0x82e23dec
	goto loc_82E23DEC;
loc_82E23C28:
	// lbz r10,1(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// lbz r11,2(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2);
	// rotlwi r10,r10,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// cmplw cr6,r30,r9
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r9.u32, ctx.xer);
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// beq cr6,0x82e23c64
	if (ctx.cr6.eq) goto loc_82E23C64;
	// li r9,6
	ctx.r9.s64 = 6;
	// addi r10,r1,108
	ctx.r10.s64 = ctx.r1.s64 + 108;
	// addi r11,r30,-4
	ctx.r11.s64 = ctx.r30.s64 + -4;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82E23C54:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x82e23c54
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82E23C54;
	// addi r30,r1,112
	ctx.r30.s64 = ctx.r1.s64 + 112;
loc_82E23C64:
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// addi r31,r31,3
	ctx.r31.s64 = ctx.r31.s64 + 3;
	// add r10,r8,r11
	ctx.r10.u64 = ctx.r8.u64 + ctx.r11.u64;
	// stw r10,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r10.u32);
	// b 0x82e23dec
	goto loc_82E23DEC;
loc_82E23C78:
	// lbz r10,1(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// lbz r11,2(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2);
	// rotlwi r10,r10,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// lbz r9,3(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 3);
	// lbz r8,4(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 4);
	// cmplw cr6,r30,r7
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r7.u32, ctx.xer);
	// add r6,r10,r11
	ctx.r6.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r11,r6,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 8) & 0xFFFFFF00;
	// add r5,r11,r9
	ctx.r5.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r5,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 8) & 0xFFFFFF00;
	// add r8,r11,r8
	ctx.r8.u64 = ctx.r11.u64 + ctx.r8.u64;
	// beq cr6,0x82e23ccc
	if (ctx.cr6.eq) goto loc_82E23CCC;
	// li r9,6
	ctx.r9.s64 = 6;
	// addi r10,r1,108
	ctx.r10.s64 = ctx.r1.s64 + 108;
	// addi r11,r30,-4
	ctx.r11.s64 = ctx.r30.s64 + -4;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82E23CBC:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x82e23cbc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82E23CBC;
	// addi r30,r1,112
	ctx.r30.s64 = ctx.r1.s64 + 112;
loc_82E23CCC:
	// stw r8,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r8.u32);
	// addi r31,r31,5
	ctx.r31.s64 = ctx.r31.s64 + 5;
	// b 0x82e23dec
	goto loc_82E23DEC;
loc_82E23CD8:
	// addi r11,r11,-96
	ctx.r11.s64 = ctx.r11.s64 + -96;
	// lbz r10,1(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// addi r9,r1,132
	ctx.r9.s64 = ctx.r1.s64 + 132;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r31,r31,2
	ctx.r31.s64 = ctx.r31.s64 + 2;
	// stwx r10,r8,r9
	PPC_STORE_U32(ctx.r8.u32 + ctx.r9.u32, ctx.r10.u32);
	// b 0x82e23d58
	goto loc_82E23D58;
loc_82E23CF4:
	// lbz r10,1(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// addi r9,r11,-100
	ctx.r9.s64 = ctx.r11.s64 + -100;
	// lbz r11,2(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2);
	// addi r8,r1,132
	ctx.r8.s64 = ctx.r1.s64 + 132;
	// rotlwi r10,r10,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r6,r10,r11
	ctx.r6.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r31,r31,3
	ctx.r31.s64 = ctx.r31.s64 + 3;
	// stwx r6,r7,r8
	PPC_STORE_U32(ctx.r7.u32 + ctx.r8.u32, ctx.r6.u32);
	// b 0x82e23d58
	goto loc_82E23D58;
loc_82E23D1C:
	// lbz r10,1(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// addi r7,r11,-104
	ctx.r7.s64 = ctx.r11.s64 + -104;
	// lbz r11,2(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2);
	// addi r6,r1,132
	ctx.r6.s64 = ctx.r1.s64 + 132;
	// rotlwi r10,r10,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// lbz r9,3(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 3);
	// lbz r8,4(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 4);
	// rlwinm r5,r7,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r31,r31,5
	ctx.r31.s64 = ctx.r31.s64 + 5;
	// rlwinm r11,r4,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 8) & 0xFFFFFF00;
	// add r3,r11,r9
	ctx.r3.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r3,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 8) & 0xFFFFFF00;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// stwx r11,r5,r6
	PPC_STORE_U32(ctx.r5.u32 + ctx.r6.u32, ctx.r11.u32);
loc_82E23D58:
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// lwz r8,132(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82e23d88
	if (ctx.cr6.eq) goto loc_82E23D88;
	// li r9,6
	ctx.r9.s64 = 6;
	// addi r10,r1,108
	ctx.r10.s64 = ctx.r1.s64 + 108;
	// addi r11,r30,-4
	ctx.r11.s64 = ctx.r30.s64 + -4;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82E23D78:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x82e23d78
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82E23D78;
	// addi r30,r1,112
	ctx.r30.s64 = ctx.r1.s64 + 112;
loc_82E23D88:
	// stw r8,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r8.u32);
	// b 0x82e23dec
	goto loc_82E23DEC;
loc_82E23D90:
	// li r5,512
	ctx.r5.s64 = 512;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// bl 0x82d37840
	ctx.lr = 0x82E23DA0;
	sub_82D37840(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// bl 0x82d348d0
	ctx.lr = 0x82E23DAC;
	sub_82D348D0(ctx, base);
	// lwz r3,-21100(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + -21100);
	// lis r5,4760
	ctx.r5.s64 = 311951360;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// li r8,593
	ctx.r8.s64 = 593;
	// addi r6,r1,160
	ctx.r6.s64 = ctx.r1.s64 + 160;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// ori r5,r5,65245
	ctx.r5.u64 = ctx.r5.u64 | 65245;
	// li r4,3
	ctx.r4.s64 = 3;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82E23DD8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82e23de4
	if (ctx.cr6.eq) goto loc_82E23DE4;
	// twi 31,r0,22
	if (ctx.r0.s32 < 22 || ctx.r0.s32 > 22 || ctx.r0.u32 == 22 || ctx.r0.u32 < 22 || ctx.r0.u32 > 22) __builtin_debugtrap();
loc_82E23DE4:
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// bl 0x82d346f0
	ctx.lr = 0x82E23DEC;
	sub_82D346F0(ctx, base);
loc_82E23DEC:
	// lbz r10,192(r29)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r29.u32 + 192);
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82e23944
	if (ctx.cr6.eq) goto loc_82E23944;
	// addi r1,r1,784
	ctx.r1.s64 = ctx.r1.s64 + 784;
	// addi r12,r1,-72
	ctx.r12.s64 = ctx.r1.s64 + -72;
	// bl 0x82fa8d74
	ctx.lr = 0x82E23E08;
	__restfpr_28(ctx, base);
	// b 0x82fa76b8
	__restgprlr_24(ctx, base);
	return;
loc_82E23E0C:
	// lwz r8,8(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lfs f13,16(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
	// lbz r10,1(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// li r28,3
	ctx.r28.s64 = 3;
	// add r4,r8,r9
	ctx.r4.u64 = ctx.r8.u64 + ctx.r9.u64;
	// lwz r7,12(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// lbz r5,2(r31)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2);
	// rotlwi r6,r10,1
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// extsw r9,r4
	ctx.r9.s64 = ctx.r4.s32;
	// lbz r31,3(r31)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r31.u32 + 3);
	// subfic r10,r7,16
	ctx.xer.ca = ctx.r7.u32 <= 16;
	ctx.r10.s64 = 16 - ctx.r7.s64;
	// std r9,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r9.u64);
	// rotlwi r7,r5,1
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r5.u32, 1);
	// slw r3,r6,r10
	ctx.r3.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r6.u32 << (ctx.r10.u8 & 0x3F));
	// slw r6,r7,r10
	ctx.r6.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r10.u8 & 0x3F));
	// extsw r8,r3
	ctx.r8.s64 = ctx.r3.s32;
	// lfd f12,104(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// extsw r5,r6
	ctx.r5.s64 = ctx.r6.s32;
	// fcfid f7,f12
	ctx.f7.f64 = double(ctx.f12.s64);
	// std r8,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r8.u64);
	// lfd f11,104(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// std r5,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r5.u64);
	// lfd f10,104(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// fcfid f8,f11
	ctx.f8.f64 = double(ctx.f11.s64);
	// li r27,0
	ctx.r27.s64 = 0;
	// fcfid f9,f10
	ctx.f9.f64 = double(ctx.f10.s64);
	// frsp f4,f7
	ctx.f4.f64 = double(float(ctx.f7.f64));
	// frsp f5,f8
	ctx.f5.f64 = double(float(ctx.f8.f64));
	// frsp f6,f9
	ctx.f6.f64 = double(float(ctx.f9.f64));
	// fadds f3,f5,f4
	ctx.f3.f64 = double(float(ctx.f5.f64 + ctx.f4.f64));
	// fadds f2,f6,f4
	ctx.f2.f64 = double(float(ctx.f6.f64 + ctx.f4.f64));
	// fmuls f0,f3,f13
	ctx.f0.f64 = double(float(ctx.f3.f64 * ctx.f13.f64));
	// fmuls f31,f2,f13
	ctx.f31.f64 = double(float(ctx.f2.f64 * ctx.f13.f64));
	// b 0x82e24580
	goto loc_82E24580;
loc_82E23E9C:
	// lbz r11,1(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// lfs f13,16(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// lbz r10,2(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2);
	// li r28,4
	ctx.r28.s64 = 4;
	// rotlwi r11,r11,1
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// lwz r9,12(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// lwz r8,4(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// li r27,0
	ctx.r27.s64 = 0;
	// addi r7,r11,-255
	ctx.r7.s64 = ctx.r11.s64 + -255;
	// lwz r6,8(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// rotlwi r11,r10,1
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// subfic r10,r9,16
	ctx.xer.ca = ctx.r9.u32 <= 16;
	ctx.r10.s64 = 16 - ctx.r9.s64;
	// addi r5,r11,-255
	ctx.r5.s64 = ctx.r11.s64 + -255;
	// slw r4,r7,r10
	ctx.r4.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r10.u8 & 0x3F));
	// extsw r11,r4
	ctx.r11.s64 = ctx.r4.s32;
	// std r11,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r11.u64);
	// slw r3,r5,r10
	ctx.r3.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r5.u32 << (ctx.r10.u8 & 0x3F));
	// subf r9,r6,r8
	ctx.r9.s64 = ctx.r8.s64 - ctx.r6.s64;
	// extsw r10,r3
	ctx.r10.s64 = ctx.r3.s32;
	// extsw r8,r9
	ctx.r8.s64 = ctx.r9.s32;
	// lfd f12,104(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// std r10,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r10.u64);
	// lfd f11,104(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// std r8,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r8.u64);
	// lfd f10,104(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// fcfid f8,f12
	ctx.f8.f64 = double(ctx.f12.s64);
	// fcfid f7,f11
	ctx.f7.f64 = double(ctx.f11.s64);
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
	// fcfid f9,f10
	ctx.f9.f64 = double(ctx.f10.s64);
	// lbz r31,3(r31)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r31.u32 + 3);
	// frsp f5,f8
	ctx.f5.f64 = double(float(ctx.f8.f64));
	// frsp f4,f7
	ctx.f4.f64 = double(float(ctx.f7.f64));
	// frsp f6,f9
	ctx.f6.f64 = double(float(ctx.f9.f64));
	// fadds f3,f5,f6
	ctx.f3.f64 = double(float(ctx.f5.f64 + ctx.f6.f64));
	// fadds f2,f4,f6
	ctx.f2.f64 = double(float(ctx.f4.f64 + ctx.f6.f64));
	// fmuls f0,f3,f13
	ctx.f0.f64 = double(float(ctx.f3.f64 * ctx.f13.f64));
	// fmuls f31,f2,f13
	ctx.f31.f64 = double(float(ctx.f2.f64 * ctx.f13.f64));
	// b 0x82e24580
	goto loc_82E24580;
loc_82E23F34:
	// lwz r9,8(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lfs f0,16(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r28,5
	ctx.r28.s64 = 5;
	// lbz r11,1(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// li r27,0
	ctx.r27.s64 = 0;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lwz r9,12(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// rotlwi r8,r11,1
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// lbz r7,2(r31)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2);
	// subfic r11,r9,16
	ctx.xer.ca = ctx.r9.u32 <= 16;
	ctx.r11.s64 = 16 - ctx.r9.s64;
	// extsw r6,r10
	ctx.r6.s64 = ctx.r10.s32;
	// slw r5,r8,r11
	ctx.r5.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r11.u8 & 0x3F));
	// extsw r4,r5
	ctx.r4.s64 = ctx.r5.s32;
	// std r6,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r6.u64);
	// rotlwi r3,r7,1
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r7.u32, 1);
	// std r4,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r4.u64);
	// lfd f11,96(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// slw r11,r3,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r3.u32 << (ctx.r11.u8 & 0x3F));
	// extsw r10,r11
	ctx.r10.s64 = ctx.r11.s32;
	// lfd f13,104(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
	// std r10,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r10.u64);
	// lfd f12,104(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// fcfid f10,f12
	ctx.f10.f64 = double(ctx.f12.s64);
	// lbz r31,3(r31)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r31.u32 + 3);
	// fcfid f9,f13
	ctx.f9.f64 = double(ctx.f13.s64);
	// fcfid f8,f11
	ctx.f8.f64 = double(ctx.f11.s64);
	// frsp f7,f10
	ctx.f7.f64 = double(float(ctx.f10.f64));
	// frsp f6,f9
	ctx.f6.f64 = double(float(ctx.f9.f64));
	// frsp f5,f8
	ctx.f5.f64 = double(float(ctx.f8.f64));
	// fadds f4,f7,f6
	ctx.f4.f64 = double(float(ctx.f7.f64 + ctx.f6.f64));
	// fadds f3,f5,f6
	ctx.f3.f64 = double(float(ctx.f5.f64 + ctx.f6.f64));
	// fmuls f31,f4,f0
	ctx.f31.f64 = double(float(ctx.f4.f64 * ctx.f0.f64));
	// fmuls f0,f3,f0
	ctx.f0.f64 = double(float(ctx.f3.f64 * ctx.f0.f64));
	// b 0x82e24580
	goto loc_82E24580;
loc_82E23FC4:
	// lbz r10,2(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2);
	// lfs f13,16(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// lwz r8,12(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
	// rotlwi r9,r10,1
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// lwz r7,0(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r6,8(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// subfic r10,r8,16
	ctx.xer.ca = ctx.r8.u32 <= 16;
	ctx.r10.s64 = 16 - ctx.r8.s64;
	// addi r5,r9,-255
	ctx.r5.s64 = ctx.r9.s64 + -255;
	// lbz r4,1(r31)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// subf r3,r6,r7
	ctx.r3.s64 = ctx.r7.s64 - ctx.r6.s64;
	// lbz r31,3(r31)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r31.u32 + 3);
	// slw r9,r5,r10
	ctx.r9.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r5.u32 << (ctx.r10.u8 & 0x3F));
	// extsw r8,r3
	ctx.r8.s64 = ctx.r3.s32;
	// extsw r7,r9
	ctx.r7.s64 = ctx.r9.s32;
	// std r8,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r8.u64);
	// rotlwi r8,r4,1
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r4.u32, 1);
	// std r7,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r7.u64);
	// li r28,6
	ctx.r28.s64 = 6;
	// addi r6,r8,-255
	ctx.r6.s64 = ctx.r8.s64 + -255;
	// li r27,0
	ctx.r27.s64 = 0;
	// slw r5,r6,r10
	ctx.r5.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r6.u32 << (ctx.r10.u8 & 0x3F));
	// extsw r4,r5
	ctx.r4.s64 = ctx.r5.s32;
	// lfd f12,96(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// lfd f11,104(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// fcfid f10,f12
	ctx.f10.f64 = double(ctx.f12.s64);
	// std r4,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r4.u64);
	// lfd f9,96(r1)
	ctx.f9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f8,f9
	ctx.f8.f64 = double(ctx.f9.s64);
	// fcfid f7,f11
	ctx.f7.f64 = double(ctx.f11.s64);
	// frsp f6,f10
	ctx.f6.f64 = double(float(ctx.f10.f64));
	// frsp f5,f8
	ctx.f5.f64 = double(float(ctx.f8.f64));
	// frsp f4,f7
	ctx.f4.f64 = double(float(ctx.f7.f64));
	// fadds f3,f5,f6
	ctx.f3.f64 = double(float(ctx.f5.f64 + ctx.f6.f64));
	// fadds f2,f4,f6
	ctx.f2.f64 = double(float(ctx.f4.f64 + ctx.f6.f64));
	// fmuls f0,f3,f13
	ctx.f0.f64 = double(float(ctx.f3.f64 * ctx.f13.f64));
	// fmuls f31,f2,f13
	ctx.f31.f64 = double(float(ctx.f2.f64 * ctx.f13.f64));
	// b 0x82e24580
	goto loc_82E24580;
loc_82E2405C:
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lfs f13,16(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// lwz r8,0(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
	// lbz r10,2(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2);
	// li r28,7
	ctx.r28.s64 = 7;
	// add r4,r9,r8
	ctx.r4.u64 = ctx.r9.u64 + ctx.r8.u64;
	// lwz r7,12(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// lbz r5,1(r31)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// rotlwi r6,r10,1
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// extsw r9,r4
	ctx.r9.s64 = ctx.r4.s32;
	// lbz r31,3(r31)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r31.u32 + 3);
	// subfic r10,r7,16
	ctx.xer.ca = ctx.r7.u32 <= 16;
	ctx.r10.s64 = 16 - ctx.r7.s64;
	// std r9,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r9.u64);
	// rotlwi r7,r5,1
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r5.u32, 1);
	// slw r3,r6,r10
	ctx.r3.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r6.u32 << (ctx.r10.u8 & 0x3F));
	// slw r6,r7,r10
	ctx.r6.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r10.u8 & 0x3F));
	// extsw r5,r6
	ctx.r5.s64 = ctx.r6.s32;
	// lfd f12,96(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// extsw r8,r3
	ctx.r8.s64 = ctx.r3.s32;
	// fcfid f10,f12
	ctx.f10.f64 = double(ctx.f12.s64);
	// std r5,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r5.u64);
	// li r27,0
	ctx.r27.s64 = 0;
	// std r8,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r8.u64);
	// lfd f11,104(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// fcfid f7,f11
	ctx.f7.f64 = double(ctx.f11.s64);
	// lfd f9,96(r1)
	ctx.f9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// frsp f6,f10
	ctx.f6.f64 = double(float(ctx.f10.f64));
	// fcfid f8,f9
	ctx.f8.f64 = double(ctx.f9.s64);
	// frsp f4,f7
	ctx.f4.f64 = double(float(ctx.f7.f64));
	// frsp f5,f8
	ctx.f5.f64 = double(float(ctx.f8.f64));
	// fadds f2,f4,f6
	ctx.f2.f64 = double(float(ctx.f4.f64 + ctx.f6.f64));
	// fadds f3,f5,f6
	ctx.f3.f64 = double(float(ctx.f5.f64 + ctx.f6.f64));
	// fmuls f31,f2,f13
	ctx.f31.f64 = double(float(ctx.f2.f64 * ctx.f13.f64));
	// fmuls f0,f3,f13
	ctx.f0.f64 = double(float(ctx.f3.f64 * ctx.f13.f64));
	// b 0x82e24580
	goto loc_82E24580;
loc_82E240EC:
	// lbz r9,2(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2);
	// lfs f13,16(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// lwz r6,0(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
	// rotlwi r9,r9,1
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 1);
	// lwz r5,4(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lbz r10,1(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// li r28,8
	ctx.r28.s64 = 8;
	// addi r3,r9,-255
	ctx.r3.s64 = ctx.r9.s64 + -255;
	// lwz r7,12(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// subf r9,r5,r6
	ctx.r9.s64 = ctx.r6.s64 - ctx.r5.s64;
	// lbz r31,3(r31)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r31.u32 + 3);
	// rotlwi r8,r10,1
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// extsw r6,r9
	ctx.r6.s64 = ctx.r9.s32;
	// subfic r10,r7,16
	ctx.xer.ca = ctx.r7.u32 <= 16;
	ctx.r10.s64 = 16 - ctx.r7.s64;
	// std r6,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r6.u64);
	// lfd f12,96(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// addi r4,r8,-255
	ctx.r4.s64 = ctx.r8.s64 + -255;
	// slw r7,r3,r10
	ctx.r7.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r3.u32 << (ctx.r10.u8 & 0x3F));
	// slw r8,r4,r10
	ctx.r8.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r4.u32 << (ctx.r10.u8 & 0x3F));
	// extsw r5,r8
	ctx.r5.s64 = ctx.r8.s32;
	// extsw r4,r7
	ctx.r4.s64 = ctx.r7.s32;
	// std r5,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r5.u64);
	// li r27,0
	ctx.r27.s64 = 0;
	// std r4,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r4.u64);
	// fcfid f10,f12
	ctx.f10.f64 = double(ctx.f12.s64);
	// frsp f6,f10
	ctx.f6.f64 = double(float(ctx.f10.f64));
	// lfd f11,104(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// lfd f9,88(r1)
	ctx.f9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f8,f11
	ctx.f8.f64 = double(ctx.f11.s64);
	// fcfid f7,f9
	ctx.f7.f64 = double(ctx.f9.s64);
	// frsp f5,f8
	ctx.f5.f64 = double(float(ctx.f8.f64));
	// frsp f4,f7
	ctx.f4.f64 = double(float(ctx.f7.f64));
	// fadds f3,f5,f6
	ctx.f3.f64 = double(float(ctx.f5.f64 + ctx.f6.f64));
	// fadds f2,f4,f6
	ctx.f2.f64 = double(float(ctx.f4.f64 + ctx.f6.f64));
	// fmuls f0,f3,f13
	ctx.f0.f64 = double(float(ctx.f3.f64 * ctx.f13.f64));
	// fmuls f31,f2,f13
	ctx.f31.f64 = double(float(ctx.f2.f64 * ctx.f13.f64));
	// b 0x82e24580
	goto loc_82E24580;
loc_82E24184:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lfs f13,16(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// li r28,9
	ctx.r28.s64 = 9;
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r27,0
	ctx.r27.s64 = 0;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lbz r11,2(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2);
	// lwz r7,12(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// rotlwi r8,r11,1
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// add r6,r10,r9
	ctx.r6.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lbz r9,1(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// add r5,r11,r8
	ctx.r5.u64 = ctx.r11.u64 + ctx.r8.u64;
	// subfic r10,r7,16
	ctx.xer.ca = ctx.r7.u32 <= 16;
	ctx.r10.s64 = 16 - ctx.r7.s64;
	// rotlwi r11,r9,1
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 1);
	// slw r4,r5,r10
	ctx.r4.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r5.u32 << (ctx.r10.u8 & 0x3F));
	// extsw r3,r4
	ctx.r3.s64 = ctx.r4.s32;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// std r3,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r3.u64);
	// extsw r9,r6
	ctx.r9.s64 = ctx.r6.s32;
	// slw r10,r11,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r10.u8 & 0x3F));
	// extsw r8,r10
	ctx.r8.s64 = ctx.r10.s32;
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
	// lbz r31,3(r31)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r31.u32 + 3);
	// std r8,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r8.u64);
	// lfd f10,96(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// lfd f12,88(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// std r9,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r9.u64);
	// lfd f11,88(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f8,f10
	ctx.f8.f64 = double(ctx.f10.s64);
	// fcfid f7,f12
	ctx.f7.f64 = double(ctx.f12.s64);
	// fcfid f9,f11
	ctx.f9.f64 = double(ctx.f11.s64);
	// frsp f5,f8
	ctx.f5.f64 = double(float(ctx.f8.f64));
	// frsp f4,f7
	ctx.f4.f64 = double(float(ctx.f7.f64));
	// frsp f6,f9
	ctx.f6.f64 = double(float(ctx.f9.f64));
	// fadds f3,f5,f6
	ctx.f3.f64 = double(float(ctx.f5.f64 + ctx.f6.f64));
	// fadds f2,f4,f6
	ctx.f2.f64 = double(float(ctx.f4.f64 + ctx.f6.f64));
	// fmuls f0,f3,f13
	ctx.f0.f64 = double(float(ctx.f3.f64 * ctx.f13.f64));
	// fmuls f31,f2,f13
	ctx.f31.f64 = double(float(ctx.f2.f64 * ctx.f13.f64));
	// b 0x82e24580
	goto loc_82E24580;
loc_82E24224:
	// lwz r9,8(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lfs f0,16(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
	// lbz r8,1(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// li r28,10
	ctx.r28.s64 = 10;
	// lwz r7,0(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// addi r8,r8,-85
	ctx.r8.s64 = ctx.r8.s64 + -85;
	// lwz r5,12(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// add r4,r10,r7
	ctx.r4.u64 = ctx.r10.u64 + ctx.r7.u64;
	// lbz r6,2(r31)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2);
	// rlwinm r7,r8,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// lbz r31,3(r31)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r31.u32 + 3);
	// subfic r9,r5,16
	ctx.xer.ca = ctx.r5.u32 <= 16;
	ctx.r9.s64 = 16 - ctx.r5.s64;
	// add r3,r8,r7
	ctx.r3.u64 = ctx.r8.u64 + ctx.r7.u64;
	// extsw r10,r4
	ctx.r10.s64 = ctx.r4.s32;
	// slw r8,r3,r9
	ctx.r8.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r3.u32 << (ctx.r9.u8 & 0x3F));
	// extsw r7,r8
	ctx.r7.s64 = ctx.r8.s32;
	// std r10,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r10.u64);
	// addi r10,r6,-85
	ctx.r10.s64 = ctx.r6.s64 + -85;
	// std r7,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r7.u64);
	// li r27,0
	ctx.r27.s64 = 0;
	// rlwinm r6,r10,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r6,r10,r6
	ctx.r6.u64 = ctx.r10.u64 + ctx.r6.u64;
	// slw r5,r6,r9
	ctx.r5.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r6.u32 << (ctx.r9.u8 & 0x3F));
	// extsw r4,r5
	ctx.r4.s64 = ctx.r5.s32;
	// lfd f13,88(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// lfd f12,96(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f8,f13
	ctx.f8.f64 = double(ctx.f13.s64);
	// std r4,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r4.u64);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// frsp f5,f8
	ctx.f5.f64 = double(float(ctx.f8.f64));
	// frsp f7,f11
	ctx.f7.f64 = double(float(ctx.f11.f64));
	// lfd f10,88(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fadds f3,f5,f7
	ctx.f3.f64 = double(float(ctx.f5.f64 + ctx.f7.f64));
	// fcfid f9,f10
	ctx.f9.f64 = double(ctx.f10.s64);
	// frsp f6,f9
	ctx.f6.f64 = double(float(ctx.f9.f64));
	// fadds f4,f6,f7
	ctx.f4.f64 = double(float(ctx.f6.f64 + ctx.f7.f64));
	// fmuls f31,f4,f0
	ctx.f31.f64 = double(float(ctx.f4.f64 * ctx.f0.f64));
	// fmuls f0,f3,f0
	ctx.f0.f64 = double(float(ctx.f3.f64 * ctx.f0.f64));
	// b 0x82e24580
	goto loc_82E24580;
loc_82E242CC:
	// lwz r8,4(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lfs f0,16(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r28,11
	ctx.r28.s64 = 11;
	// subf r10,r8,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r8.s64;
	// lbz r7,2(r31)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2);
	// lbz r6,1(r31)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// li r27,0
	ctx.r27.s64 = 0;
	// add r5,r10,r9
	ctx.r5.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lwz r4,12(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// addi r9,r7,-85
	ctx.r9.s64 = ctx.r7.s64 + -85;
	// lbz r31,3(r31)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r31.u32 + 3);
	// addi r10,r6,-85
	ctx.r10.s64 = ctx.r6.s64 + -85;
	// rlwinm r7,r9,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// subfic r8,r4,16
	ctx.xer.ca = ctx.r4.u32 <= 16;
	ctx.r8.s64 = 16 - ctx.r4.s64;
	// add r3,r9,r7
	ctx.r3.u64 = ctx.r9.u64 + ctx.r7.u64;
	// rlwinm r6,r10,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// slw r9,r3,r8
	ctx.r9.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r3.u32 << (ctx.r8.u8 & 0x3F));
	// add r10,r10,r6
	ctx.r10.u64 = ctx.r10.u64 + ctx.r6.u64;
	// extsw r7,r5
	ctx.r7.s64 = ctx.r5.s32;
	// extsw r6,r9
	ctx.r6.s64 = ctx.r9.s32;
	// std r7,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r7.u64);
	// slw r8,r10,r8
	ctx.r8.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r8.u8 & 0x3F));
	// std r6,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r6.u64);
	// extsw r5,r8
	ctx.r5.s64 = ctx.r8.s32;
	// std r5,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r5.u64);
	// lfd f10,104(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// fcfid f8,f10
	ctx.f8.f64 = double(ctx.f10.s64);
	// lfd f13,88(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// frsp f5,f8
	ctx.f5.f64 = double(float(ctx.f8.f64));
	// lfd f12,96(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f11,f13
	ctx.f11.f64 = double(ctx.f13.s64);
	// fcfid f9,f12
	ctx.f9.f64 = double(ctx.f12.s64);
	// frsp f7,f11
	ctx.f7.f64 = double(float(ctx.f11.f64));
	// frsp f6,f9
	ctx.f6.f64 = double(float(ctx.f9.f64));
	// fadds f3,f5,f7
	ctx.f3.f64 = double(float(ctx.f5.f64 + ctx.f7.f64));
	// fadds f4,f6,f7
	ctx.f4.f64 = double(float(ctx.f6.f64 + ctx.f7.f64));
	// fmuls f31,f4,f0
	ctx.f31.f64 = double(float(ctx.f4.f64 * ctx.f0.f64));
	// fmuls f0,f3,f0
	ctx.f0.f64 = double(float(ctx.f3.f64 * ctx.f0.f64));
	// b 0x82e24580
	goto loc_82E24580;
loc_82E24374:
	// lbz r9,2(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2);
	// lfs f13,16(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// lwz r10,12(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
	// addi r9,r9,-170
	ctx.r9.s64 = ctx.r9.s64 + -170;
	// lwz r6,0(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r5,8(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// subfic r8,r10,16
	ctx.xer.ca = ctx.r10.u32 <= 16;
	ctx.r8.s64 = 16 - ctx.r10.s64;
	// rlwinm r7,r9,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// lbz r10,1(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// subf r3,r5,r6
	ctx.r3.s64 = ctx.r6.s64 - ctx.r5.s64;
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// add r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 + ctx.r7.u64;
	// lbz r31,3(r31)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r31.u32 + 3);
	// addi r10,r10,-170
	ctx.r10.s64 = ctx.r10.s64 + -170;
	// slw r6,r9,r8
	ctx.r6.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r8.u8 & 0x3F));
	// extsw r5,r6
	ctx.r5.s64 = ctx.r6.s32;
	// rlwinm r6,r10,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// std r5,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r5.u64);
	// subf r7,r4,r3
	ctx.r7.s64 = ctx.r3.s64 - ctx.r4.s64;
	// add r3,r10,r6
	ctx.r3.u64 = ctx.r10.u64 + ctx.r6.u64;
	// extsw r4,r7
	ctx.r4.s64 = ctx.r7.s32;
	// slw r10,r3,r8
	ctx.r10.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r3.u32 << (ctx.r8.u8 & 0x3F));
	// extsw r9,r10
	ctx.r9.s64 = ctx.r10.s32;
	// lfd f12,88(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// std r4,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r4.u64);
	// lfd f11,88(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// std r9,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r9.u64);
	// lfd f9,88(r1)
	ctx.f9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// fcfid f8,f9
	ctx.f8.f64 = double(ctx.f9.s64);
	// li r28,12
	ctx.r28.s64 = 12;
	// fcfid f7,f12
	ctx.f7.f64 = double(ctx.f12.s64);
	// li r27,0
	ctx.r27.s64 = 0;
	// frsp f6,f10
	ctx.f6.f64 = double(float(ctx.f10.f64));
	// frsp f5,f8
	ctx.f5.f64 = double(float(ctx.f8.f64));
	// frsp f4,f7
	ctx.f4.f64 = double(float(ctx.f7.f64));
	// fadds f3,f5,f6
	ctx.f3.f64 = double(float(ctx.f5.f64 + ctx.f6.f64));
	// fadds f2,f4,f6
	ctx.f2.f64 = double(float(ctx.f4.f64 + ctx.f6.f64));
	// fmuls f0,f3,f13
	ctx.f0.f64 = double(float(ctx.f3.f64 * ctx.f13.f64));
	// fmuls f31,f2,f13
	ctx.f31.f64 = double(float(ctx.f2.f64 * ctx.f13.f64));
	// b 0x82e24580
	goto loc_82E24580;
loc_82E2441C:
	// addi r28,r11,-16
	ctx.r28.s64 = ctx.r11.s64 + -16;
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// lbz r9,2(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2);
	// lfs f0,16(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// rlwinm r7,r28,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// lbz r6,1(r31)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// subfic r10,r11,16
	ctx.xer.ca = ctx.r11.u32 <= 16;
	ctx.r10.s64 = 16 - ctx.r11.s64;
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
	// lbz r31,3(r31)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r31.u32 + 3);
	// slw r8,r9,r10
	ctx.r8.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r10.u8 & 0x3F));
	// lwzx r9,r7,r30
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r30.u32);
	// slw r10,r6,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r6.u32 << (ctx.r10.u8 & 0x3F));
	// add r5,r10,r9
	ctx.r5.u64 = ctx.r10.u64 + ctx.r9.u64;
	// add r4,r8,r9
	ctx.r4.u64 = ctx.r8.u64 + ctx.r9.u64;
	// extsw r3,r5
	ctx.r3.s64 = ctx.r5.s32;
	// extsw r10,r4
	ctx.r10.s64 = ctx.r4.s32;
	// std r3,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r3.u64);
	// lfd f11,96(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// std r10,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r10.u64);
	// lfd f13,88(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// li r27,0
	ctx.r27.s64 = 0;
	// fcfid f9,f11
	ctx.f9.f64 = double(ctx.f11.s64);
	// frsp f10,f12
	ctx.f10.f64 = double(float(ctx.f12.f64));
	// frsp f8,f9
	ctx.f8.f64 = double(float(ctx.f9.f64));
	// fmuls f31,f10,f0
	ctx.f31.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// fmuls f0,f8,f0
	ctx.f0.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// b 0x82e24580
	goto loc_82E24580;
loc_82E2448C:
	// addi r28,r11,-32
	ctx.r28.s64 = ctx.r11.s64 + -32;
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// li r7,1
	ctx.r7.s64 = 1;
	// lbz r9,1(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// subfic r10,r11,16
	ctx.xer.ca = ctx.r11.u32 <= 16;
	ctx.r10.s64 = 16 - ctx.r11.s64;
	// lfs f0,16(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// rlwinm r6,r28,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// slw r5,r7,r10
	ctx.r5.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r10.u8 & 0x3F));
	// extsw r3,r5
	ctx.r3.s64 = ctx.r5.s32;
	// std r3,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r3.u64);
	// lwzx r8,r6,r30
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r30.u32);
	// slw r9,r9,r10
	ctx.r9.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r10.u8 & 0x3F));
	// add r4,r9,r8
	ctx.r4.u64 = ctx.r9.u64 + ctx.r8.u64;
	// addi r11,r31,3
	ctx.r11.s64 = ctx.r31.s64 + 3;
	// lbz r31,2(r31)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2);
	// extsw r10,r4
	ctx.r10.s64 = ctx.r4.s32;
	// lfd f13,88(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// li r27,0
	ctx.r27.s64 = 0;
	// std r10,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r10.u64);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f10,f12
	ctx.f10.f64 = double(float(ctx.f12.f64));
	// lfd f11,88(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f9,f11
	ctx.f9.f64 = double(ctx.f11.s64);
	// frsp f8,f9
	ctx.f8.f64 = double(float(ctx.f9.f64));
	// fadds f7,f10,f8
	ctx.f7.f64 = double(float(ctx.f10.f64 + ctx.f8.f64));
	// fmuls f31,f0,f8
	ctx.f31.f64 = double(float(ctx.f0.f64 * ctx.f8.f64));
	// fmuls f0,f0,f7
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f7.f64));
	// b 0x82e24580
	goto loc_82E24580;
loc_82E244FC:
	// addi r28,r11,-35
	ctx.r28.s64 = ctx.r11.s64 + -35;
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// lbz r9,1(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// lfs f13,16(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// rlwinm r6,r28,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// lbz r5,2(r31)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2);
	// subfic r10,r11,16
	ctx.xer.ca = ctx.r11.u32 <= 16;
	ctx.r10.s64 = 16 - ctx.r11.s64;
	// lbz r4,3(r31)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r31.u32 + 3);
	// lbz r3,5(r31)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r31.u32 + 5);
	// addi r11,r31,7
	ctx.r11.s64 = ctx.r31.s64 + 7;
	// slw r8,r9,r10
	ctx.r8.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r10.u8 & 0x3F));
	// lbz r7,4(r31)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r31.u32 + 4);
	// lwzx r9,r6,r30
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r30.u32);
	// slw r10,r5,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r5.u32 << (ctx.r10.u8 & 0x3F));
	// add r8,r8,r9
	ctx.r8.u64 = ctx.r8.u64 + ctx.r9.u64;
	// add r6,r10,r9
	ctx.r6.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lbz r9,6(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 6);
	// extsw r5,r8
	ctx.r5.s64 = ctx.r8.s32;
	// extsw r10,r6
	ctx.r10.s64 = ctx.r6.s32;
	// std r5,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r5.u64);
	// rotlwi r8,r4,8
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r4.u32, 8);
	// std r10,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r10.u64);
	// rotlwi r10,r3,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r3.u32, 8);
	// add r27,r8,r7
	ctx.r27.u64 = ctx.r8.u64 + ctx.r7.u64;
	// add r31,r10,r9
	ctx.r31.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lfd f12,88(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// lfd f11,96(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f10,f12
	ctx.f10.f64 = double(ctx.f12.s64);
	// fcfid f9,f11
	ctx.f9.f64 = double(ctx.f11.s64);
	// frsp f8,f10
	ctx.f8.f64 = double(float(ctx.f10.f64));
	// frsp f7,f9
	ctx.f7.f64 = double(float(ctx.f9.f64));
	// fmuls f0,f8,f13
	ctx.f0.f64 = double(float(ctx.f8.f64 * ctx.f13.f64));
	// fmuls f31,f7,f13
	ctx.f31.f64 = double(float(ctx.f7.f64 * ctx.f13.f64));
loc_82E24580:
	// addi r25,r29,68
	ctx.r25.s64 = ctx.r29.s64 + 68;
	// rlwinm r26,r28,3,0,28
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 3) & 0xFFFFFFF8;
	// add r24,r27,r11
	ctx.r24.u64 = ctx.r27.u64 + ctx.r11.u64;
	// add r11,r26,r25
	ctx.r11.u64 = ctx.r26.u64 + ctx.r25.u64;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// lfs f30,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f30.f64 = double(temp.f32);
	// stfs f0,4(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// bl 0x82e23900
	ctx.lr = 0x82E245AC;
	sub_82E23900(ctx, base);
	// addi r10,r28,9
	ctx.r10.s64 = ctx.r28.s64 + 9;
	// subf r11,r27,r31
	ctx.r11.s64 = ctx.r31.s64 - ctx.r27.s64;
	// rlwinm r9,r10,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// add r5,r11,r24
	ctx.r5.u64 = ctx.r11.u64 + ctx.r24.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stfsx f30,r9,r29
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r9.u32 + ctx.r29.u32, temp.u32);
	// lfsx f30,r26,r25
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + ctx.r25.u32);
	ctx.f30.f64 = double(temp.f32);
	// stfsx f31,r26,r25
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r26.u32 + ctx.r25.u32, temp.u32);
	// bl 0x82e23900
	ctx.lr = 0x82E245D4;
	sub_82E23900(ctx, base);
	// add r8,r26,r29
	ctx.r8.u64 = ctx.r26.u64 + ctx.r29.u64;
	// stfs f30,68(r8)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r8.u32 + 68, temp.u32);
	// addi r1,r1,784
	ctx.r1.s64 = ctx.r1.s64 + 784;
	// addi r12,r1,-72
	ctx.r12.s64 = ctx.r1.s64 + -72;
	// bl 0x82fa8d74
	ctx.lr = 0x82E245E8;
	__restfpr_28(ctx, base);
	// b 0x82fa76b8
	__restgprlr_24(ctx, base);
	return;
loc_82E245EC:
	// addi r27,r11,-38
	ctx.r27.s64 = ctx.r11.s64 + -38;
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// lbz r10,1(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// lfs f0,16(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// rlwinm r7,r27,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xFFFFFFFC;
	// lbz r6,2(r31)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2);
	// subfic r11,r11,16
	ctx.xer.ca = ctx.r11.u32 <= 16;
	ctx.r11.s64 = 16 - ctx.r11.s64;
	// lwz r9,180(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 180);
	// slw r8,r10,r11
	ctx.r8.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r11.u8 & 0x3F));
	// lwzx r10,r7,r30
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r30.u32);
	// slw r11,r6,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r6.u32 << (ctx.r11.u8 & 0x3F));
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r4,r8,r10
	ctx.r4.u64 = ctx.r8.u64 + ctx.r10.u64;
	// extsw r3,r5
	ctx.r3.s64 = ctx.r5.s32;
	// extsw r11,r4
	ctx.r11.s64 = ctx.r4.s32;
	// std r3,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r3.u64);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lfd f11,96(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// lfd f13,88(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f9,f11
	ctx.f9.f64 = double(ctx.f11.s64);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f8,f9
	ctx.f8.f64 = double(float(ctx.f9.f64));
	// frsp f10,f12
	ctx.f10.f64 = double(float(ctx.f12.f64));
	// fmuls f28,f8,f0
	ctx.f28.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// fmuls f29,f10,f0
	ctx.f29.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// beq cr6,0x82e24668
	if (ctx.cr6.eq) goto loc_82E24668;
	// lwz r11,172(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 172);
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bge cr6,0x82e2466c
	if (!ctx.cr6.lt) goto loc_82E2466C;
loc_82E24668:
	// li r11,1
	ctx.r11.s64 = 1;
loc_82E2466C:
	// extsb r26,r11
	ctx.r26.s64 = ctx.r11.s8;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// beq cr6,0x82e24694
	if (ctx.cr6.eq) goto loc_82E24694;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r5,-1
	ctx.r5.s64 = -1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stb r10,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r10.u8);
	// lbz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// bl 0x82e23760
	ctx.lr = 0x82E24694;
	sub_82E23760(ctx, base);
loc_82E24694:
	// addi r28,r29,68
	ctx.r28.s64 = ctx.r29.s64 + 68;
	// rlwinm r27,r27,3,0,28
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r5,r31,3
	ctx.r5.s64 = ctx.r31.s64 + 3;
	// add r11,r28,r27
	ctx.r11.u64 = ctx.r28.u64 + ctx.r27.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lfsx f31,r28,r27
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r27.u32);
	ctx.f31.f64 = double(temp.f32);
	// lfs f30,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f30.f64 = double(temp.f32);
	// stfsx f29,r28,r27
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r28.u32 + ctx.r27.u32, temp.u32);
	// stfs f28,4(r11)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// lwz r11,172(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 172);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,172(r29)
	PPC_STORE_U32(ctx.r29.u32 + 172, ctx.r11.u32);
	// bl 0x82e23900
	ctx.lr = 0x82E246CC;
	sub_82E23900(ctx, base);
	// lwz r11,172(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 172);
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// stw r10,172(r29)
	PPC_STORE_U32(ctx.r29.u32 + 172, ctx.r10.u32);
	// beq cr6,0x82e24704
	if (ctx.cr6.eq) goto loc_82E24704;
	// lbz r11,184(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 184);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82e24704
	if (ctx.cr6.eq) goto loc_82E24704;
	// lbz r11,192(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 192);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82e24704
	if (!ctx.cr6.eq) goto loc_82E24704;
	// lwz r11,64(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 64);
	// addi r11,r11,-112
	ctx.r11.s64 = ctx.r11.s64 + -112;
	// stw r11,64(r29)
	PPC_STORE_U32(ctx.r29.u32 + 64, ctx.r11.u32);
loc_82E24704:
	// add r11,r28,r27
	ctx.r11.u64 = ctx.r28.u64 + ctx.r27.u64;
	// stfsx f31,r28,r27
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r28.u32 + ctx.r27.u32, temp.u32);
	// stfs f30,4(r11)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// addi r1,r1,784
	ctx.r1.s64 = ctx.r1.s64 + 784;
	// addi r12,r1,-72
	ctx.r12.s64 = ctx.r1.s64 + -72;
	// bl 0x82fa8d74
	ctx.lr = 0x82E2471C;
	__restfpr_28(ctx, base);
	// b 0x82fa76b8
	__restgprlr_24(ctx, base);
	return;
loc_82E24720:
	// lbz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 4);
	// addi r27,r11,-41
	ctx.r27.s64 = ctx.r11.s64 + -41;
	// lbz r7,1(r31)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// lfs f0,16(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// rotlwi r8,r10,8
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// lbz r9,5(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 5);
	// lbz r10,2(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2);
	// rotlwi r11,r7,8
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r7.u32, 8);
	// add r6,r9,r8
	ctx.r6.u64 = ctx.r9.u64 + ctx.r8.u64;
	// lbz r9,3(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 3);
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lbz r7,6(r31)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r31.u32 + 6);
	// rlwinm r8,r6,8,0,23
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r11,180(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 180);
	// rlwinm r10,r5,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 8) & 0xFFFFFF00;
	// add r4,r8,r7
	ctx.r4.u64 = ctx.r8.u64 + ctx.r7.u64;
	// add r3,r10,r9
	ctx.r3.u64 = ctx.r10.u64 + ctx.r9.u64;
	// extsw r10,r4
	ctx.r10.s64 = ctx.r4.s32;
	// extsw r9,r3
	ctx.r9.s64 = ctx.r3.s32;
	// std r10,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r10.u64);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// std r9,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r9.u64);
	// lfd f13,88(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// lfd f12,96(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f11,f13
	ctx.f11.f64 = double(ctx.f13.s64);
	// fcfid f10,f12
	ctx.f10.f64 = double(ctx.f12.s64);
	// frsp f9,f11
	ctx.f9.f64 = double(float(ctx.f11.f64));
	// frsp f8,f10
	ctx.f8.f64 = double(float(ctx.f10.f64));
	// fmuls f28,f9,f0
	ctx.f28.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// fmuls f29,f8,f0
	ctx.f29.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// beq cr6,0x82e247ac
	if (ctx.cr6.eq) goto loc_82E247AC;
	// lwz r10,172(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 172);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bge cr6,0x82e247b0
	if (!ctx.cr6.lt) goto loc_82E247B0;
loc_82E247AC:
	// li r11,1
	ctx.r11.s64 = 1;
loc_82E247B0:
	// extsb r26,r11
	ctx.r26.s64 = ctx.r11.s8;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// beq cr6,0x82e247d8
	if (ctx.cr6.eq) goto loc_82E247D8;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r5,-1
	ctx.r5.s64 = -1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// lbz r4,0(r10)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// bl 0x82e23760
	ctx.lr = 0x82E247D8;
	sub_82E23760(ctx, base);
loc_82E247D8:
	// addi r28,r29,68
	ctx.r28.s64 = ctx.r29.s64 + 68;
	// rlwinm r27,r27,3,0,28
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r5,r31,7
	ctx.r5.s64 = ctx.r31.s64 + 7;
	// add r11,r27,r28
	ctx.r11.u64 = ctx.r27.u64 + ctx.r28.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lfsx f31,r27,r28
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r28.u32);
	ctx.f31.f64 = double(temp.f32);
	// lfs f30,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f30.f64 = double(temp.f32);
	// stfsx f29,r27,r28
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r27.u32 + ctx.r28.u32, temp.u32);
	// stfs f28,4(r11)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// lwz r11,172(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 172);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,172(r29)
	PPC_STORE_U32(ctx.r29.u32 + 172, ctx.r11.u32);
	// bl 0x82e23900
	ctx.lr = 0x82E24810;
	sub_82E23900(ctx, base);
	// lwz r11,172(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 172);
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// stw r10,172(r29)
	PPC_STORE_U32(ctx.r29.u32 + 172, ctx.r10.u32);
	// beq cr6,0x82e2483c
	if (ctx.cr6.eq) goto loc_82E2483C;
	// lbz r11,184(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 184);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82e2483c
	if (ctx.cr6.eq) goto loc_82E2483C;
	// lwz r11,64(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 64);
	// addi r11,r11,-112
	ctx.r11.s64 = ctx.r11.s64 + -112;
	// stw r11,64(r29)
	PPC_STORE_U32(ctx.r29.u32 + 64, ctx.r11.u32);
loc_82E2483C:
	// add r11,r27,r28
	ctx.r11.u64 = ctx.r27.u64 + ctx.r28.u64;
	// stfsx f31,r27,r28
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r27.u32 + ctx.r28.u32, temp.u32);
	// stfs f30,4(r11)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// addi r1,r1,784
	ctx.r1.s64 = ctx.r1.s64 + 784;
	// addi r12,r1,-72
	ctx.r12.s64 = ctx.r1.s64 + -72;
	// bl 0x82fa8d74
	ctx.lr = 0x82E24854;
	__restfpr_28(ctx, base);
	// b 0x82fa76b8
	__restgprlr_24(ctx, base);
	return;
loc_82E24858:
	// lbz r11,1(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// b 0x82e248a4
	goto loc_82E248A4;
loc_82E24860:
	// lbz r10,1(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// lbz r11,2(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2);
	// rotlwi r10,r10,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r9,48(r29)
	PPC_STORE_U32(ctx.r29.u32 + 48, ctx.r9.u32);
	// b 0x82e248a8
	goto loc_82E248A8;
loc_82E24878:
	// lbz r11,2(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2);
	// lbz r10,1(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// rotlwi r11,r11,8
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 8);
	// rotlwi r10,r10,16
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 16);
	// stw r11,48(r29)
	PPC_STORE_U32(ctx.r29.u32 + 48, ctx.r11.u32);
	// lbz r9,3(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 3);
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r9,48(r29)
	PPC_STORE_U32(ctx.r29.u32 + 48, ctx.r9.u32);
	// b 0x82e248a8
	goto loc_82E248A8;
loc_82E248A0:
	// addi r11,r11,-48
	ctx.r11.s64 = ctx.r11.s64 + -48;
loc_82E248A4:
	// stw r11,48(r29)
	PPC_STORE_U32(ctx.r29.u32 + 48, ctx.r11.u32);
loc_82E248A8:
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// addi r5,r30,20
	ctx.r5.s64 = ctx.r30.s64 + 20;
	// lwz r10,48(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 48);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r4,48(r29)
	PPC_STORE_U32(ctx.r29.u32 + 48, ctx.r4.u32);
	// bl 0x82e237c0
	ctx.lr = 0x82E248C4;
	sub_82E237C0(ctx, base);
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r11,48(r29)
	PPC_STORE_U32(ctx.r29.u32 + 48, ctx.r11.u32);
loc_82E248CC:
	// addi r1,r1,784
	ctx.r1.s64 = ctx.r1.s64 + 784;
	// addi r12,r1,-72
	ctx.r12.s64 = ctx.r1.s64 + -72;
	// bl 0x82fa8d74
	ctx.lr = 0x82E248D8;
	__restfpr_28(ctx, base);
	// b 0x82fa76b8
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E248DC"))) PPC_WEAK_FUNC(sub_82E248DC);
PPC_FUNC_IMPL(__imp__sub_82E248DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E248E0"))) PPC_WEAK_FUNC(sub_82E248E0);
PPC_FUNC_IMPL(__imp__sub_82E248E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32233
	ctx.r10.s64 = -2112421888;
	// stw r6,64(r3)
	PPC_STORE_U32(ctx.r3.u32 + 64, ctx.r6.u32);
	// li r9,16
	ctx.r9.s64 = 16;
	// lfs f13,28(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	ctx.f13.f64 = double(temp.f32);
	// li r8,32
	ctx.r8.s64 = 32;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r7,-32242
	ctx.r7.s64 = -2113011712;
	// lfs f0,24436(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 24436);
	ctx.f0.f64 = double(temp.f32);
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// fdivs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// stfs f12,16(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// lvx128 v0,r4,r9
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r4.u32 + ctx.r9.u32) & ~0xF), VectorMaskL));
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// stvx128 v0,r3,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32 + ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stb r11,192(r3)
	PPC_STORE_U8(ctx.r3.u32 + 192, ctx.r11.u8);
	// lwz r8,0(r5)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// lfs f11,16(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f11.f64 = double(temp.f32);
	// stw r8,176(r3)
	PPC_STORE_U32(ctx.r3.u32 + 176, ctx.r8.u32);
	// lfs f0,30400(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 30400);
	ctx.f0.f64 = double(temp.f32);
	// lwz r7,4(r5)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// fmuls f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stw r7,180(r3)
	PPC_STORE_U32(ctx.r3.u32 + 180, ctx.r7.u32);
	// li r10,13
	ctx.r10.s64 = 13;
	// lwz r8,8(r5)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// li r7,-1
	ctx.r7.s64 = -1;
	// stw r8,184(r3)
	PPC_STORE_U32(ctx.r3.u32 + 184, ctx.r8.u32);
	// lfs f0,21496(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 21496);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,21500(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 21500);
	ctx.f13.f64 = double(temp.f32);
	// lwz r6,12(r5)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// stw r6,188(r3)
	PPC_STORE_U32(ctx.r3.u32 + 188, ctx.r6.u32);
	// stw r7,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r7.u32);
	// fmuls f0,f10,f0
	ctx.f0.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// fmuls f13,f10,f13
	ctx.f13.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// stw r11,172(r3)
	PPC_STORE_U32(ctx.r3.u32 + 172, ctx.r11.u32);
	// addi r10,r3,64
	ctx.r10.s64 = ctx.r3.s64 + 64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
loc_82E24990:
	// stfs f0,4(r10)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 4, temp.u32);
	// stfsu f13,8(r10)
	temp.f32 = float(ctx.f13.f64);
	ea = 8 + ctx.r10.u32;
	PPC_STORE_U32(ea, temp.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x82e24990
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82E24990;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// lwz r5,32(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82e23900
	ctx.lr = 0x82E249AC;
	sub_82E23900(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E249BC"))) PPC_WEAK_FUNC(sub_82E249BC);
PPC_FUNC_IMPL(__imp__sub_82E249BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E249C0"))) PPC_WEAK_FUNC(sub_82E249C0);
PPC_FUNC_IMPL(__imp__sub_82E249C0) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-32768
	ctx.r10.s64 = -2147483648;
	// li r9,-1
	ctx.r9.s64 = -1;
	// stw r11,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r11.u32);
	// stw r11,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, ctx.r11.u32);
	// stw r10,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, ctx.r10.u32);
	// stb r11,176(r3)
	PPC_STORE_U8(ctx.r3.u32 + 176, ctx.r11.u8);
	// stw r9,180(r3)
	PPC_STORE_U32(ctx.r3.u32 + 180, ctx.r9.u32);
	// stb r11,184(r3)
	PPC_STORE_U8(ctx.r3.u32 + 184, ctx.r11.u8);
	// stw r11,188(r3)
	PPC_STORE_U32(ctx.r3.u32 + 188, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E249EC"))) PPC_WEAK_FUNC(sub_82E249EC);
PPC_FUNC_IMPL(__imp__sub_82E249EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E249F0"))) PPC_WEAK_FUNC(sub_82E249F0);
PPC_FUNC_IMPL(__imp__sub_82E249F0) {
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
	// addi r31,r3,52
	ctx.r31.s64 = ctx.r3.s64 + 52;
	// bl 0x82d2d090
	ctx.lr = 0x82E24A0C;
	sub_82D2D090(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82e24a44
	if (!ctx.cr6.eq) goto loc_82E24A44;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,4
	ctx.r6.s64 = 4;
	// clrlwi r5,r11,2
	ctx.r5.u64 = ctx.r11.u32 & 0x3FFFFFFF;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r9,16(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82E24A44;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82E24A44:
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82E24A68"))) PPC_WEAK_FUNC(sub_82E24A68);
PPC_FUNC_IMPL(__imp__sub_82E24A68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa766c
	ctx.lr = 0x82E24A70;
	__savegprlr_25(ctx, base);
	// stwu r1,-688(r1)
	ea = -688 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// lis r10,-32236
	ctx.r10.s64 = -2112618496;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// lis r25,-31960
	ctx.r25.s64 = -2094530560;
	// addi r27,r11,22908
	ctx.r27.s64 = ctx.r11.s64 + 22908;
	// addi r26,r10,22056
	ctx.r26.s64 = ctx.r10.s64 + 22056;
loc_82E24A94:
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,107
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 107, ctx.xer);
	// bgt cr6,0x82e24eac
	if (ctx.cr6.gt) goto loc_82E24EAC;
	// lis r12,-32030
	ctx.r12.s64 = -2099118080;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,19128
	ctx.r12.s64 = ctx.r12.s64 + 19128;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_82E24FC4;
	case 1:
		goto loc_82E24D48;
	case 2:
		goto loc_82E24D48;
	case 3:
		goto loc_82E24D48;
	case 4:
		goto loc_82E24D48;
	case 5:
		goto loc_82E24CF4;
	case 6:
		goto loc_82E24D04;
	case 7:
		goto loc_82E24D20;
	case 8:
		goto loc_82E24EAC;
	case 9:
		goto loc_82E24D50;
	case 10:
		goto loc_82E24D80;
	case 11:
		goto loc_82E24DBC;
	case 12:
		goto loc_82E24EAC;
	case 13:
		goto loc_82E24EAC;
	case 14:
		goto loc_82E24EAC;
	case 15:
		goto loc_82E24EAC;
	case 16:
		goto loc_82E24C68;
	case 17:
		goto loc_82E24C68;
	case 18:
		goto loc_82E24C68;
	case 19:
		goto loc_82E24C68;
	case 20:
		goto loc_82E24C68;
	case 21:
		goto loc_82E24C68;
	case 22:
		goto loc_82E24C68;
	case 23:
		goto loc_82E24C68;
	case 24:
		goto loc_82E24C68;
	case 25:
		goto loc_82E24C68;
	case 26:
		goto loc_82E24C68;
	case 27:
		goto loc_82E24C68;
	case 28:
		goto loc_82E24C68;
	case 29:
		goto loc_82E24EAC;
	case 30:
		goto loc_82E24EAC;
	case 31:
		goto loc_82E24EAC;
	case 32:
		goto loc_82E24C88;
	case 33:
		goto loc_82E24C88;
	case 34:
		goto loc_82E24C88;
	case 35:
		goto loc_82E24CA8;
	case 36:
		goto loc_82E24CA8;
	case 37:
		goto loc_82E24CA8;
	case 38:
		goto loc_82E24CE4;
	case 39:
		goto loc_82E24CE4;
	case 40:
		goto loc_82E24CE4;
	case 41:
		goto loc_82E24CEC;
	case 42:
		goto loc_82E24CEC;
	case 43:
		goto loc_82E24CEC;
	case 44:
		goto loc_82E24EAC;
	case 45:
		goto loc_82E24EAC;
	case 46:
		goto loc_82E24EAC;
	case 47:
		goto loc_82E24EAC;
	case 48:
		goto loc_82E24F74;
	case 49:
		goto loc_82E24F74;
	case 50:
		goto loc_82E24F74;
	case 51:
		goto loc_82E24F74;
	case 52:
		goto loc_82E24F74;
	case 53:
		goto loc_82E24F74;
	case 54:
		goto loc_82E24F74;
	case 55:
		goto loc_82E24F74;
	case 56:
		goto loc_82E24F74;
	case 57:
		goto loc_82E24F74;
	case 58:
		goto loc_82E24F74;
	case 59:
		goto loc_82E24F74;
	case 60:
		goto loc_82E24F74;
	case 61:
		goto loc_82E24F74;
	case 62:
		goto loc_82E24F74;
	case 63:
		goto loc_82E24F74;
	case 64:
		goto loc_82E24F74;
	case 65:
		goto loc_82E24F74;
	case 66:
		goto loc_82E24F74;
	case 67:
		goto loc_82E24F74;
	case 68:
		goto loc_82E24F74;
	case 69:
		goto loc_82E24F74;
	case 70:
		goto loc_82E24F74;
	case 71:
		goto loc_82E24F74;
	case 72:
		goto loc_82E24F74;
	case 73:
		goto loc_82E24F74;
	case 74:
		goto loc_82E24F74;
	case 75:
		goto loc_82E24F74;
	case 76:
		goto loc_82E24F74;
	case 77:
		goto loc_82E24F74;
	case 78:
		goto loc_82E24F74;
	case 79:
		goto loc_82E24F74;
	case 80:
		goto loc_82E24F0C;
	case 81:
		goto loc_82E24F14;
	case 82:
		goto loc_82E24F28;
	case 83:
		goto loc_82E24F48;
	case 84:
		goto loc_82E24EAC;
	case 85:
		goto loc_82E24EAC;
	case 86:
		goto loc_82E24EAC;
	case 87:
		goto loc_82E24EAC;
	case 88:
		goto loc_82E24EAC;
	case 89:
		goto loc_82E24EAC;
	case 90:
		goto loc_82E24EAC;
	case 91:
		goto loc_82E24EAC;
	case 92:
		goto loc_82E24EAC;
	case 93:
		goto loc_82E24EAC;
	case 94:
		goto loc_82E24EAC;
	case 95:
		goto loc_82E24EAC;
	case 96:
		goto loc_82E24E08;
	case 97:
		goto loc_82E24E08;
	case 98:
		goto loc_82E24E08;
	case 99:
		goto loc_82E24E08;
	case 100:
		goto loc_82E24E24;
	case 101:
		goto loc_82E24E24;
	case 102:
		goto loc_82E24E24;
	case 103:
		goto loc_82E24E24;
	case 104:
		goto loc_82E24E4C;
	case 105:
		goto loc_82E24E4C;
	case 106:
		goto loc_82E24E4C;
	case 107:
		goto loc_82E24E4C;
	default:
		__builtin_unreachable();
	}
	// lwz r23,20420(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 20420);
	// lwz r23,19784(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 19784);
	// lwz r23,19784(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 19784);
	// lwz r23,19784(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 19784);
	// lwz r23,19784(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 19784);
	// lwz r23,19700(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 19700);
	// lwz r23,19716(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 19716);
	// lwz r23,19744(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 19744);
	// lwz r23,20140(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 20140);
	// lwz r23,19792(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 19792);
	// lwz r23,19840(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 19840);
	// lwz r23,19900(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 19900);
	// lwz r23,20140(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 20140);
	// lwz r23,20140(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 20140);
	// lwz r23,20140(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 20140);
	// lwz r23,20140(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 20140);
	// lwz r23,19560(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 19560);
	// lwz r23,19560(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 19560);
	// lwz r23,19560(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 19560);
	// lwz r23,19560(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 19560);
	// lwz r23,19560(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 19560);
	// lwz r23,19560(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 19560);
	// lwz r23,19560(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 19560);
	// lwz r23,19560(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 19560);
	// lwz r23,19560(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 19560);
	// lwz r23,19560(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 19560);
	// lwz r23,19560(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 19560);
	// lwz r23,19560(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 19560);
	// lwz r23,19560(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 19560);
	// lwz r23,20140(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 20140);
	// lwz r23,20140(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 20140);
	// lwz r23,20140(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 20140);
	// lwz r23,19592(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 19592);
	// lwz r23,19592(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 19592);
	// lwz r23,19592(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 19592);
	// lwz r23,19624(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 19624);
	// lwz r23,19624(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 19624);
	// lwz r23,19624(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 19624);
	// lwz r23,19684(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 19684);
	// lwz r23,19684(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 19684);
	// lwz r23,19684(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 19684);
	// lwz r23,19692(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 19692);
	// lwz r23,19692(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 19692);
	// lwz r23,19692(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 19692);
	// lwz r23,20140(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 20140);
	// lwz r23,20140(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 20140);
	// lwz r23,20140(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 20140);
	// lwz r23,20140(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 20140);
	// lwz r23,20340(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 20340);
	// lwz r23,20340(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 20340);
	// lwz r23,20340(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 20340);
	// lwz r23,20340(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 20340);
	// lwz r23,20340(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 20340);
	// lwz r23,20340(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 20340);
	// lwz r23,20340(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 20340);
	// lwz r23,20340(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 20340);
	// lwz r23,20340(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 20340);
	// lwz r23,20340(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 20340);
	// lwz r23,20340(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 20340);
	// lwz r23,20340(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 20340);
	// lwz r23,20340(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 20340);
	// lwz r23,20340(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 20340);
	// lwz r23,20340(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 20340);
	// lwz r23,20340(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 20340);
	// lwz r23,20340(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 20340);
	// lwz r23,20340(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 20340);
	// lwz r23,20340(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 20340);
	// lwz r23,20340(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 20340);
	// lwz r23,20340(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 20340);
	// lwz r23,20340(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 20340);
	// lwz r23,20340(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 20340);
	// lwz r23,20340(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 20340);
	// lwz r23,20340(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 20340);
	// lwz r23,20340(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 20340);
	// lwz r23,20340(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 20340);
	// lwz r23,20340(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 20340);
	// lwz r23,20340(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 20340);
	// lwz r23,20340(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 20340);
	// lwz r23,20340(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 20340);
	// lwz r23,20340(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 20340);
	// lwz r23,20236(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 20236);
	// lwz r23,20244(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 20244);
	// lwz r23,20264(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 20264);
	// lwz r23,20296(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 20296);
	// lwz r23,20140(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 20140);
	// lwz r23,20140(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 20140);
	// lwz r23,20140(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 20140);
	// lwz r23,20140(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 20140);
	// lwz r23,20140(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 20140);
	// lwz r23,20140(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 20140);
	// lwz r23,20140(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 20140);
	// lwz r23,20140(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 20140);
	// lwz r23,20140(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 20140);
	// lwz r23,20140(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 20140);
	// lwz r23,20140(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 20140);
	// lwz r23,20140(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 20140);
	// lwz r23,19976(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 19976);
	// lwz r23,19976(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 19976);
	// lwz r23,19976(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 19976);
	// lwz r23,19976(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 19976);
	// lwz r23,20004(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 20004);
	// lwz r23,20004(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 20004);
	// lwz r23,20004(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 20004);
	// lwz r23,20004(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 20004);
	// lwz r23,20044(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 20044);
	// lwz r23,20044(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 20044);
	// lwz r23,20044(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 20044);
	// lwz r23,20044(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 20044);
loc_82E24C68:
	// lbz r30,3(r31)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r31.u32 + 3);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82e24a68
	ctx.lr = 0x82E24C80;
	sub_82E24A68(ctx, base);
	// add r31,r30,r31
	ctx.r31.u64 = ctx.r30.u64 + ctx.r31.u64;
	// b 0x82e24a94
	goto loc_82E24A94;
loc_82E24C88:
	// lbz r30,2(r31)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2);
	// addi r31,r31,3
	ctx.r31.s64 = ctx.r31.s64 + 3;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82e24a68
	ctx.lr = 0x82E24CA0;
	sub_82E24A68(ctx, base);
	// add r31,r30,r31
	ctx.r31.u64 = ctx.r30.u64 + ctx.r31.u64;
	// b 0x82e24a94
	goto loc_82E24A94;
loc_82E24CA8:
	// lbz r11,3(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 3);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lbz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 4);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// rotlwi r11,r11,8
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 8);
	// lbz r8,5(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 5);
	// lbz r9,6(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 6);
	// addi r31,r31,7
	ctx.r31.s64 = ctx.r31.s64 + 7;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rotlwi r10,r8,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r8.u32, 8);
	// add r5,r11,r31
	ctx.r5.u64 = ctx.r11.u64 + ctx.r31.u64;
	// add r30,r10,r9
	ctx.r30.u64 = ctx.r10.u64 + ctx.r9.u64;
	// bl 0x82e24a68
	ctx.lr = 0x82E24CDC;
	sub_82E24A68(ctx, base);
	// add r31,r30,r31
	ctx.r31.u64 = ctx.r30.u64 + ctx.r31.u64;
	// b 0x82e24a94
	goto loc_82E24A94;
loc_82E24CE4:
	// addi r31,r31,3
	ctx.r31.s64 = ctx.r31.s64 + 3;
	// b 0x82e24a94
	goto loc_82E24A94;
loc_82E24CEC:
	// addi r31,r31,7
	ctx.r31.s64 = ctx.r31.s64 + 7;
	// b 0x82e24a94
	goto loc_82E24A94;
loc_82E24CF4:
	// lbz r11,1(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r31,r11,2
	ctx.r31.s64 = ctx.r11.s64 + 2;
	// b 0x82e24a94
	goto loc_82E24A94;
loc_82E24D04:
	// lbz r11,1(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// lbz r10,2(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2);
	// rotlwi r11,r11,8
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 8);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r31,r11,3
	ctx.r31.s64 = ctx.r11.s64 + 3;
	// b 0x82e24a94
	goto loc_82E24A94;
loc_82E24D20:
	// lbz r11,1(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// lbz r9,2(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2);
	// rotlwi r11,r11,8
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 8);
	// lbz r10,3(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 3);
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r9,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFFFF00;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r31,r11,4
	ctx.r31.s64 = ctx.r11.s64 + 4;
	// b 0x82e24a94
	goto loc_82E24A94;
loc_82E24D48:
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// b 0x82e24a94
	goto loc_82E24A94;
loc_82E24D50:
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lbz r11,1(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// cmplw cr6,r29,r10
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82e24d6c
	if (ctx.cr6.eq) goto loc_82E24D6C;
	// ld r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r29.u32 + 0);
	// addi r29,r1,80
	ctx.r29.s64 = ctx.r1.s64 + 80;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
loc_82E24D6C:
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r31,r31,2
	ctx.r31.s64 = ctx.r31.s64 + 2;
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// b 0x82e24a94
	goto loc_82E24A94;
loc_82E24D80:
	// lbz r11,1(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// lbz r10,2(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2);
	// rotlwi r11,r11,8
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 8);
	// cmplw cr6,r29,r9
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r9.u32, ctx.xer);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// beq cr6,0x82e24da8
	if (ctx.cr6.eq) goto loc_82E24DA8;
	// ld r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r29.u32 + 0);
	// addi r29,r1,80
	ctx.r29.s64 = ctx.r1.s64 + 80;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
loc_82E24DA8:
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r31,r31,3
	ctx.r31.s64 = ctx.r31.s64 + 3;
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// b 0x82e24a94
	goto loc_82E24A94;
loc_82E24DBC:
	// lbz r11,1(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// lbz r8,2(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2);
	// rotlwi r11,r11,8
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 8);
	// lbz r9,3(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 3);
	// lbz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 4);
	// cmplw cr6,r29,r7
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r7.u32, ctx.xer);
	// add r6,r11,r8
	ctx.r6.u64 = ctx.r11.u64 + ctx.r8.u64;
	// rlwinm r11,r6,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 8) & 0xFFFFFF00;
	// add r5,r11,r9
	ctx.r5.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r5,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 8) & 0xFFFFFF00;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// beq cr6,0x82e24dfc
	if (ctx.cr6.eq) goto loc_82E24DFC;
	// ld r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r29.u32 + 0);
	// addi r29,r1,80
	ctx.r29.s64 = ctx.r1.s64 + 80;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
loc_82E24DFC:
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r31,r31,5
	ctx.r31.s64 = ctx.r31.s64 + 5;
	// b 0x82e24a94
	goto loc_82E24A94;
loc_82E24E08:
	// addi r11,r11,-96
	ctx.r11.s64 = ctx.r11.s64 + -96;
	// lbz r10,1(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// addi r9,r1,84
	ctx.r9.s64 = ctx.r1.s64 + 84;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r31,r31,2
	ctx.r31.s64 = ctx.r31.s64 + 2;
	// stwx r10,r8,r9
	PPC_STORE_U32(ctx.r8.u32 + ctx.r9.u32, ctx.r10.u32);
	// b 0x82e24e88
	goto loc_82E24E88;
loc_82E24E24:
	// lbz r9,1(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// addi r8,r11,-100
	ctx.r8.s64 = ctx.r11.s64 + -100;
	// lbz r10,2(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2);
	// addi r7,r1,84
	ctx.r7.s64 = ctx.r1.s64 + 84;
	// rotlwi r11,r9,8
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 8);
	// rlwinm r6,r8,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r31,r31,3
	ctx.r31.s64 = ctx.r31.s64 + 3;
	// stwx r5,r6,r7
	PPC_STORE_U32(ctx.r6.u32 + ctx.r7.u32, ctx.r5.u32);
	// b 0x82e24e88
	goto loc_82E24E88;
loc_82E24E4C:
	// lbz r10,1(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// addi r7,r11,-104
	ctx.r7.s64 = ctx.r11.s64 + -104;
	// lbz r8,2(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2);
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// rotlwi r11,r10,8
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// lbz r9,3(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 3);
	// lbz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 4);
	// rlwinm r5,r7,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r4,r11,r8
	ctx.r4.u64 = ctx.r11.u64 + ctx.r8.u64;
	// addi r31,r31,5
	ctx.r31.s64 = ctx.r31.s64 + 5;
	// rlwinm r11,r4,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 8) & 0xFFFFFF00;
	// add r3,r11,r9
	ctx.r3.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r3,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 8) & 0xFFFFFF00;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stwx r11,r5,r6
	PPC_STORE_U32(ctx.r5.u32 + ctx.r6.u32, ctx.r11.u32);
loc_82E24E88:
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplw cr6,r29,r10
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82e24ea4
	if (ctx.cr6.eq) goto loc_82E24EA4;
	// ld r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r29.u32 + 0);
	// addi r29,r1,80
	ctx.r29.s64 = ctx.r1.s64 + 80;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
loc_82E24EA4:
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// b 0x82e24a94
	goto loc_82E24A94;
loc_82E24EAC:
	// li r5,512
	ctx.r5.s64 = 512;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82d37840
	ctx.lr = 0x82E24EBC;
	sub_82D37840(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82d348d0
	ctx.lr = 0x82E24EC8;
	sub_82D348D0(ctx, base);
	// lwz r3,-21100(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + -21100);
	// lis r5,4760
	ctx.r5.s64 = 311951360;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// li r8,113
	ctx.r8.s64 = 113;
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// ori r5,r5,65245
	ctx.r5.u64 = ctx.r5.u64 | 65245;
	// li r4,3
	ctx.r4.s64 = 3;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82E24EF4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82e24f00
	if (ctx.cr6.eq) goto loc_82E24F00;
	// twi 31,r0,22
	if (ctx.r0.s32 < 22 || ctx.r0.s32 > 22 || ctx.r0.u32 == 22 || ctx.r0.u32 < 22 || ctx.r0.u32 > 22) __builtin_debugtrap();
loc_82E24F00:
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82d346f0
	ctx.lr = 0x82E24F08;
	sub_82D346F0(ctx, base);
	// b 0x82e24a94
	goto loc_82E24A94;
loc_82E24F0C:
	// lbz r11,1(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// b 0x82e24f78
	goto loc_82E24F78;
loc_82E24F14:
	// lbz r11,1(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// lbz r10,2(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2);
	// rotlwi r11,r11,8
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 8);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x82e24f78
	goto loc_82E24F78;
loc_82E24F28:
	// lbz r11,1(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// lbz r9,2(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2);
	// rotlwi r11,r11,8
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 8);
	// lbz r10,3(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 3);
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r9,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFFFF00;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x82e24f78
	goto loc_82E24F78;
loc_82E24F48:
	// lbz r11,1(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// lbz r10,2(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2);
	// rotlwi r11,r11,8
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 8);
	// lbz r8,3(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 3);
	// lbz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 4);
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rotlwi r11,r8,8
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r8.u32, 8);
	// rlwinm r10,r7,16,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 16) & 0xFFFF0000;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x82e24f78
	goto loc_82E24F78;
loc_82E24F74:
	// addi r11,r11,-48
	ctx.r11.s64 = ctx.r11.s64 + -48;
loc_82E24F78:
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r31,0(r28)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// add r30,r10,r11
	ctx.r30.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x82d2d090
	ctx.lr = 0x82E24F88;
	sub_82D2D090(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// clrlwi r9,r11,2
	ctx.r9.u64 = ctx.r11.u32 & 0x3FFFFFFF;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x82e24fac
	if (!ctx.cr6.eq) goto loc_82E24FAC;
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82d2ded0
	ctx.lr = 0x82E24FAC;
	sub_82D2DED0(ctx, base);
loc_82E24FAC:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stwx r30,r10,r9
	PPC_STORE_U32(ctx.r10.u32 + ctx.r9.u32, ctx.r30.u32);
loc_82E24FC4:
	// addi r1,r1,688
	ctx.r1.s64 = ctx.r1.s64 + 688;
	// b 0x82fa76bc
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E24FCC"))) PPC_WEAK_FUNC(sub_82E24FCC);
PPC_FUNC_IMPL(__imp__sub_82E24FCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E24FD0"))) PPC_WEAK_FUNC(sub_82E24FD0);
PPC_FUNC_IMPL(__imp__sub_82E24FD0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7670
	ctx.lr = 0x82E24FD8;
	__savegprlr_26(ctx, base);
	// stwu r1,-688(r1)
	ea = -688 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// lis r10,-32236
	ctx.r10.s64 = -2112618496;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// lis r27,-31960
	ctx.r27.s64 = -2094530560;
	// addi r29,r11,22908
	ctx.r29.s64 = ctx.r11.s64 + 22908;
	// addi r28,r10,22056
	ctx.r28.s64 = ctx.r10.s64 + 22056;
loc_82E24FFC:
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,107
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 107, ctx.xer);
	// bgt cr6,0x82e253d4
	if (ctx.cr6.gt) goto loc_82E253D4;
	// lis r12,-32030
	ctx.r12.s64 = -2099118080;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,20512
	ctx.r12.s64 = ctx.r12.s64 + 20512;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_82E254EC;
	case 1:
		goto loc_82E25270;
	case 2:
		goto loc_82E25270;
	case 3:
		goto loc_82E25270;
	case 4:
		goto loc_82E25270;
	case 5:
		goto loc_82E2521C;
	case 6:
		goto loc_82E2522C;
	case 7:
		goto loc_82E25248;
	case 8:
		goto loc_82E253D4;
	case 9:
		goto loc_82E25278;
	case 10:
		goto loc_82E252A8;
	case 11:
		goto loc_82E252E4;
	case 12:
		goto loc_82E253D4;
	case 13:
		goto loc_82E253D4;
	case 14:
		goto loc_82E253D4;
	case 15:
		goto loc_82E253D4;
	case 16:
		goto loc_82E251D0;
	case 17:
		goto loc_82E251D0;
	case 18:
		goto loc_82E251D0;
	case 19:
		goto loc_82E251D0;
	case 20:
		goto loc_82E251D0;
	case 21:
		goto loc_82E251D0;
	case 22:
		goto loc_82E251D0;
	case 23:
		goto loc_82E251D0;
	case 24:
		goto loc_82E251D0;
	case 25:
		goto loc_82E251D0;
	case 26:
		goto loc_82E251D0;
	case 27:
		goto loc_82E251D0;
	case 28:
		goto loc_82E251D0;
	case 29:
		goto loc_82E253D4;
	case 30:
		goto loc_82E253D4;
	case 31:
		goto loc_82E253D4;
	case 32:
		goto loc_82E251E0;
	case 33:
		goto loc_82E251E0;
	case 34:
		goto loc_82E251E0;
	case 35:
		goto loc_82E251F0;
	case 36:
		goto loc_82E251F0;
	case 37:
		goto loc_82E251F0;
	case 38:
		goto loc_82E2520C;
	case 39:
		goto loc_82E2520C;
	case 40:
		goto loc_82E2520C;
	case 41:
		goto loc_82E25214;
	case 42:
		goto loc_82E25214;
	case 43:
		goto loc_82E25214;
	case 44:
		goto loc_82E253D4;
	case 45:
		goto loc_82E253D4;
	case 46:
		goto loc_82E253D4;
	case 47:
		goto loc_82E253D4;
	case 48:
		goto loc_82E2549C;
	case 49:
		goto loc_82E2549C;
	case 50:
		goto loc_82E2549C;
	case 51:
		goto loc_82E2549C;
	case 52:
		goto loc_82E2549C;
	case 53:
		goto loc_82E2549C;
	case 54:
		goto loc_82E2549C;
	case 55:
		goto loc_82E2549C;
	case 56:
		goto loc_82E2549C;
	case 57:
		goto loc_82E2549C;
	case 58:
		goto loc_82E2549C;
	case 59:
		goto loc_82E2549C;
	case 60:
		goto loc_82E2549C;
	case 61:
		goto loc_82E2549C;
	case 62:
		goto loc_82E2549C;
	case 63:
		goto loc_82E2549C;
	case 64:
		goto loc_82E2549C;
	case 65:
		goto loc_82E2549C;
	case 66:
		goto loc_82E2549C;
	case 67:
		goto loc_82E2549C;
	case 68:
		goto loc_82E2549C;
	case 69:
		goto loc_82E2549C;
	case 70:
		goto loc_82E2549C;
	case 71:
		goto loc_82E2549C;
	case 72:
		goto loc_82E2549C;
	case 73:
		goto loc_82E2549C;
	case 74:
		goto loc_82E2549C;
	case 75:
		goto loc_82E2549C;
	case 76:
		goto loc_82E2549C;
	case 77:
		goto loc_82E2549C;
	case 78:
		goto loc_82E2549C;
	case 79:
		goto loc_82E2549C;
	case 80:
		goto loc_82E25434;
	case 81:
		goto loc_82E2543C;
	case 82:
		goto loc_82E25450;
	case 83:
		goto loc_82E25470;
	case 84:
		goto loc_82E253D4;
	case 85:
		goto loc_82E253D4;
	case 86:
		goto loc_82E253D4;
	case 87:
		goto loc_82E253D4;
	case 88:
		goto loc_82E253D4;
	case 89:
		goto loc_82E253D4;
	case 90:
		goto loc_82E253D4;
	case 91:
		goto loc_82E253D4;
	case 92:
		goto loc_82E253D4;
	case 93:
		goto loc_82E253D4;
	case 94:
		goto loc_82E253D4;
	case 95:
		goto loc_82E253D4;
	case 96:
		goto loc_82E25330;
	case 97:
		goto loc_82E25330;
	case 98:
		goto loc_82E25330;
	case 99:
		goto loc_82E25330;
	case 100:
		goto loc_82E2534C;
	case 101:
		goto loc_82E2534C;
	case 102:
		goto loc_82E2534C;
	case 103:
		goto loc_82E2534C;
	case 104:
		goto loc_82E25374;
	case 105:
		goto loc_82E25374;
	case 106:
		goto loc_82E25374;
	case 107:
		goto loc_82E25374;
	default:
		__builtin_unreachable();
	}
	// lwz r23,21740(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 21740);
	// lwz r23,21104(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 21104);
	// lwz r23,21104(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 21104);
	// lwz r23,21104(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 21104);
	// lwz r23,21104(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 21104);
	// lwz r23,21020(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 21020);
	// lwz r23,21036(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 21036);
	// lwz r23,21064(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 21064);
	// lwz r23,21460(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 21460);
	// lwz r23,21112(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 21112);
	// lwz r23,21160(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 21160);
	// lwz r23,21220(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 21220);
	// lwz r23,21460(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 21460);
	// lwz r23,21460(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 21460);
	// lwz r23,21460(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 21460);
	// lwz r23,21460(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 21460);
	// lwz r23,20944(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 20944);
	// lwz r23,20944(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 20944);
	// lwz r23,20944(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 20944);
	// lwz r23,20944(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 20944);
	// lwz r23,20944(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 20944);
	// lwz r23,20944(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 20944);
	// lwz r23,20944(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 20944);
	// lwz r23,20944(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 20944);
	// lwz r23,20944(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 20944);
	// lwz r23,20944(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 20944);
	// lwz r23,20944(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 20944);
	// lwz r23,20944(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 20944);
	// lwz r23,20944(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 20944);
	// lwz r23,21460(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 21460);
	// lwz r23,21460(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 21460);
	// lwz r23,21460(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 21460);
	// lwz r23,20960(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 20960);
	// lwz r23,20960(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 20960);
	// lwz r23,20960(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 20960);
	// lwz r23,20976(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 20976);
	// lwz r23,20976(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 20976);
	// lwz r23,20976(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 20976);
	// lwz r23,21004(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 21004);
	// lwz r23,21004(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 21004);
	// lwz r23,21004(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 21004);
	// lwz r23,21012(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 21012);
	// lwz r23,21012(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 21012);
	// lwz r23,21012(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 21012);
	// lwz r23,21460(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 21460);
	// lwz r23,21460(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 21460);
	// lwz r23,21460(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 21460);
	// lwz r23,21460(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 21460);
	// lwz r23,21660(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 21660);
	// lwz r23,21660(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 21660);
	// lwz r23,21660(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 21660);
	// lwz r23,21660(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 21660);
	// lwz r23,21660(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 21660);
	// lwz r23,21660(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 21660);
	// lwz r23,21660(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 21660);
	// lwz r23,21660(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 21660);
	// lwz r23,21660(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 21660);
	// lwz r23,21660(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 21660);
	// lwz r23,21660(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 21660);
	// lwz r23,21660(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 21660);
	// lwz r23,21660(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 21660);
	// lwz r23,21660(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 21660);
	// lwz r23,21660(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 21660);
	// lwz r23,21660(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 21660);
	// lwz r23,21660(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 21660);
	// lwz r23,21660(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 21660);
	// lwz r23,21660(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 21660);
	// lwz r23,21660(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 21660);
	// lwz r23,21660(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 21660);
	// lwz r23,21660(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 21660);
	// lwz r23,21660(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 21660);
	// lwz r23,21660(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 21660);
	// lwz r23,21660(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 21660);
	// lwz r23,21660(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 21660);
	// lwz r23,21660(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 21660);
	// lwz r23,21660(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 21660);
	// lwz r23,21660(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 21660);
	// lwz r23,21660(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 21660);
	// lwz r23,21660(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 21660);
	// lwz r23,21660(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 21660);
	// lwz r23,21556(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 21556);
	// lwz r23,21564(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 21564);
	// lwz r23,21584(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 21584);
	// lwz r23,21616(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 21616);
	// lwz r23,21460(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 21460);
	// lwz r23,21460(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 21460);
	// lwz r23,21460(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 21460);
	// lwz r23,21460(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 21460);
	// lwz r23,21460(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 21460);
	// lwz r23,21460(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 21460);
	// lwz r23,21460(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 21460);
	// lwz r23,21460(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 21460);
	// lwz r23,21460(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 21460);
	// lwz r23,21460(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 21460);
	// lwz r23,21460(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 21460);
	// lwz r23,21460(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 21460);
	// lwz r23,21296(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 21296);
	// lwz r23,21296(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 21296);
	// lwz r23,21296(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 21296);
	// lwz r23,21296(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 21296);
	// lwz r23,21324(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 21324);
	// lwz r23,21324(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 21324);
	// lwz r23,21324(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 21324);
	// lwz r23,21324(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 21324);
	// lwz r23,21364(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 21364);
	// lwz r23,21364(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 21364);
	// lwz r23,21364(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 21364);
	// lwz r23,21364(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 21364);
loc_82E251D0:
	// lbz r11,3(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 3);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r31,r11,4
	ctx.r31.s64 = ctx.r11.s64 + 4;
	// b 0x82e24ffc
	goto loc_82E24FFC;
loc_82E251E0:
	// lbz r11,2(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r31,r11,3
	ctx.r31.s64 = ctx.r11.s64 + 3;
	// b 0x82e24ffc
	goto loc_82E24FFC;
loc_82E251F0:
	// lbz r11,5(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 5);
	// lbz r10,6(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 6);
	// rotlwi r11,r11,8
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 8);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r31,r11,7
	ctx.r31.s64 = ctx.r11.s64 + 7;
	// b 0x82e24ffc
	goto loc_82E24FFC;
loc_82E2520C:
	// addi r31,r31,3
	ctx.r31.s64 = ctx.r31.s64 + 3;
	// b 0x82e24ffc
	goto loc_82E24FFC;
loc_82E25214:
	// addi r31,r31,7
	ctx.r31.s64 = ctx.r31.s64 + 7;
	// b 0x82e24ffc
	goto loc_82E24FFC;
loc_82E2521C:
	// lbz r11,1(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r31,r11,2
	ctx.r31.s64 = ctx.r11.s64 + 2;
	// b 0x82e24ffc
	goto loc_82E24FFC;
loc_82E2522C:
	// lbz r11,1(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// lbz r10,2(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2);
	// rotlwi r11,r11,8
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 8);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r31,r11,3
	ctx.r31.s64 = ctx.r11.s64 + 3;
	// b 0x82e24ffc
	goto loc_82E24FFC;
loc_82E25248:
	// lbz r11,1(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// lbz r9,2(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2);
	// rotlwi r11,r11,8
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 8);
	// lbz r10,3(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 3);
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r9,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFFFF00;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r31,r11,4
	ctx.r31.s64 = ctx.r11.s64 + 4;
	// b 0x82e24ffc
	goto loc_82E24FFC;
loc_82E25270:
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// b 0x82e24ffc
	goto loc_82E24FFC;
loc_82E25278:
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lbz r11,1(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// cmplw cr6,r30,r10
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82e25294
	if (ctx.cr6.eq) goto loc_82E25294;
	// ld r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r30.u32 + 0);
	// addi r30,r1,80
	ctx.r30.s64 = ctx.r1.s64 + 80;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
loc_82E25294:
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r31,r31,2
	ctx.r31.s64 = ctx.r31.s64 + 2;
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// b 0x82e24ffc
	goto loc_82E24FFC;
loc_82E252A8:
	// lbz r11,1(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// lbz r10,2(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2);
	// rotlwi r11,r11,8
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 8);
	// cmplw cr6,r30,r9
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r9.u32, ctx.xer);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// beq cr6,0x82e252d0
	if (ctx.cr6.eq) goto loc_82E252D0;
	// ld r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r30.u32 + 0);
	// addi r30,r1,80
	ctx.r30.s64 = ctx.r1.s64 + 80;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
loc_82E252D0:
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r31,r31,3
	ctx.r31.s64 = ctx.r31.s64 + 3;
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// b 0x82e24ffc
	goto loc_82E24FFC;
loc_82E252E4:
	// lbz r11,1(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// lbz r8,2(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2);
	// rotlwi r11,r11,8
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 8);
	// lbz r9,3(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 3);
	// lbz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 4);
	// cmplw cr6,r30,r7
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r7.u32, ctx.xer);
	// add r6,r11,r8
	ctx.r6.u64 = ctx.r11.u64 + ctx.r8.u64;
	// rlwinm r11,r6,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 8) & 0xFFFFFF00;
	// add r5,r11,r9
	ctx.r5.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r5,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 8) & 0xFFFFFF00;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// beq cr6,0x82e25324
	if (ctx.cr6.eq) goto loc_82E25324;
	// ld r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r30.u32 + 0);
	// addi r30,r1,80
	ctx.r30.s64 = ctx.r1.s64 + 80;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
loc_82E25324:
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r31,r31,5
	ctx.r31.s64 = ctx.r31.s64 + 5;
	// b 0x82e24ffc
	goto loc_82E24FFC;
loc_82E25330:
	// addi r11,r11,-96
	ctx.r11.s64 = ctx.r11.s64 + -96;
	// lbz r10,1(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// addi r9,r1,84
	ctx.r9.s64 = ctx.r1.s64 + 84;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r31,r31,2
	ctx.r31.s64 = ctx.r31.s64 + 2;
	// stwx r10,r8,r9
	PPC_STORE_U32(ctx.r8.u32 + ctx.r9.u32, ctx.r10.u32);
	// b 0x82e253b0
	goto loc_82E253B0;
loc_82E2534C:
	// lbz r9,1(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// addi r8,r11,-100
	ctx.r8.s64 = ctx.r11.s64 + -100;
	// lbz r10,2(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2);
	// addi r7,r1,84
	ctx.r7.s64 = ctx.r1.s64 + 84;
	// rotlwi r11,r9,8
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 8);
	// rlwinm r6,r8,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r31,r31,3
	ctx.r31.s64 = ctx.r31.s64 + 3;
	// stwx r5,r6,r7
	PPC_STORE_U32(ctx.r6.u32 + ctx.r7.u32, ctx.r5.u32);
	// b 0x82e253b0
	goto loc_82E253B0;
loc_82E25374:
	// lbz r10,1(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// addi r7,r11,-104
	ctx.r7.s64 = ctx.r11.s64 + -104;
	// lbz r8,2(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2);
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// rotlwi r11,r10,8
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// lbz r9,3(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 3);
	// lbz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 4);
	// rlwinm r5,r7,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r4,r11,r8
	ctx.r4.u64 = ctx.r11.u64 + ctx.r8.u64;
	// addi r31,r31,5
	ctx.r31.s64 = ctx.r31.s64 + 5;
	// rlwinm r11,r4,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 8) & 0xFFFFFF00;
	// add r3,r11,r9
	ctx.r3.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r3,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 8) & 0xFFFFFF00;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stwx r11,r5,r6
	PPC_STORE_U32(ctx.r5.u32 + ctx.r6.u32, ctx.r11.u32);
loc_82E253B0:
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplw cr6,r30,r10
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82e253cc
	if (ctx.cr6.eq) goto loc_82E253CC;
	// ld r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r30.u32 + 0);
	// addi r30,r1,80
	ctx.r30.s64 = ctx.r1.s64 + 80;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
loc_82E253CC:
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// b 0x82e24ffc
	goto loc_82E24FFC;
loc_82E253D4:
	// li r5,512
	ctx.r5.s64 = 512;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82d37840
	ctx.lr = 0x82E253E4;
	sub_82D37840(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82d348d0
	ctx.lr = 0x82E253F0;
	sub_82D348D0(ctx, base);
	// lwz r3,-21100(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + -21100);
	// lis r5,4760
	ctx.r5.s64 = 311951360;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// li r8,211
	ctx.r8.s64 = 211;
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// ori r5,r5,65245
	ctx.r5.u64 = ctx.r5.u64 | 65245;
	// li r4,3
	ctx.r4.s64 = 3;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82E2541C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82e25428
	if (ctx.cr6.eq) goto loc_82E25428;
	// twi 31,r0,22
	if (ctx.r0.s32 < 22 || ctx.r0.s32 > 22 || ctx.r0.u32 == 22 || ctx.r0.u32 < 22 || ctx.r0.u32 > 22) __builtin_debugtrap();
loc_82E25428:
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82d346f0
	ctx.lr = 0x82E25430;
	sub_82D346F0(ctx, base);
	// b 0x82e24ffc
	goto loc_82E24FFC;
loc_82E25434:
	// lbz r11,1(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// b 0x82e254a0
	goto loc_82E254A0;
loc_82E2543C:
	// lbz r11,1(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// lbz r10,2(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2);
	// rotlwi r11,r11,8
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 8);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x82e254a0
	goto loc_82E254A0;
loc_82E25450:
	// lbz r11,1(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// lbz r9,2(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2);
	// rotlwi r11,r11,8
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 8);
	// lbz r10,3(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 3);
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r9,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFFFF00;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x82e254a0
	goto loc_82E254A0;
loc_82E25470:
	// lbz r11,1(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// lbz r10,2(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2);
	// rotlwi r11,r11,8
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 8);
	// lbz r8,3(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 3);
	// lbz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 4);
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rotlwi r11,r8,8
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r8.u32, 8);
	// rlwinm r10,r7,16,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 16) & 0xFFFF0000;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x82e254a0
	goto loc_82E254A0;
loc_82E2549C:
	// addi r11,r11,-48
	ctx.r11.s64 = ctx.r11.s64 + -48;
loc_82E254A0:
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r31,0(r26)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// add r30,r10,r11
	ctx.r30.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x82d2d090
	ctx.lr = 0x82E254B0;
	sub_82D2D090(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// clrlwi r9,r11,2
	ctx.r9.u64 = ctx.r11.u32 & 0x3FFFFFFF;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x82e254d4
	if (!ctx.cr6.eq) goto loc_82E254D4;
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82d2ded0
	ctx.lr = 0x82E254D4;
	sub_82D2DED0(ctx, base);
loc_82E254D4:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stwx r30,r10,r9
	PPC_STORE_U32(ctx.r10.u32 + ctx.r9.u32, ctx.r30.u32);
loc_82E254EC:
	// addi r1,r1,688
	ctx.r1.s64 = ctx.r1.s64 + 688;
	// b 0x82fa76c0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E254F4"))) PPC_WEAK_FUNC(sub_82E254F4);
PPC_FUNC_IMPL(__imp__sub_82E254F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E254F8"))) PPC_WEAK_FUNC(sub_82E254F8);
PPC_FUNC_IMPL(__imp__sub_82E254F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7670
	ctx.lr = 0x82E25500;
	__savegprlr_26(ctx, base);
	// stwu r1,-688(r1)
	ea = -688 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// lis r10,-32236
	ctx.r10.s64 = -2112618496;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// lis r27,-31960
	ctx.r27.s64 = -2094530560;
	// addi r29,r11,22908
	ctx.r29.s64 = ctx.r11.s64 + 22908;
	// addi r28,r10,22056
	ctx.r28.s64 = ctx.r10.s64 + 22056;
loc_82E25524:
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,107
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 107, ctx.xer);
	// bgt cr6,0x82e258dc
	if (ctx.cr6.gt) goto loc_82E258DC;
	// lis r12,-32030
	ctx.r12.s64 = -2099118080;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,21832
	ctx.r12.s64 = ctx.r12.s64 + 21832;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_82E259F4;
	case 1:
		goto loc_82E256F8;
	case 2:
		goto loc_82E256F8;
	case 3:
		goto loc_82E256F8;
	case 4:
		goto loc_82E256F8;
	case 5:
		goto loc_82E2572C;
	case 6:
		goto loc_82E2573C;
	case 7:
		goto loc_82E25758;
	case 8:
		goto loc_82E258DC;
	case 9:
		goto loc_82E25780;
	case 10:
		goto loc_82E257B0;
	case 11:
		goto loc_82E257EC;
	case 12:
		goto loc_82E258DC;
	case 13:
		goto loc_82E258DC;
	case 14:
		goto loc_82E258DC;
	case 15:
		goto loc_82E258DC;
	case 16:
		goto loc_82E256F8;
	case 17:
		goto loc_82E256F8;
	case 18:
		goto loc_82E256F8;
	case 19:
		goto loc_82E256F8;
	case 20:
		goto loc_82E256F8;
	case 21:
		goto loc_82E256F8;
	case 22:
		goto loc_82E256F8;
	case 23:
		goto loc_82E256F8;
	case 24:
		goto loc_82E256F8;
	case 25:
		goto loc_82E256F8;
	case 26:
		goto loc_82E256F8;
	case 27:
		goto loc_82E256F8;
	case 28:
		goto loc_82E256F8;
	case 29:
		goto loc_82E258DC;
	case 30:
		goto loc_82E258DC;
	case 31:
		goto loc_82E258DC;
	case 32:
		goto loc_82E2571C;
	case 33:
		goto loc_82E2571C;
	case 34:
		goto loc_82E2571C;
	case 35:
		goto loc_82E25700;
	case 36:
		goto loc_82E25700;
	case 37:
		goto loc_82E25700;
	case 38:
		goto loc_82E2571C;
	case 39:
		goto loc_82E2571C;
	case 40:
		goto loc_82E2571C;
	case 41:
		goto loc_82E25724;
	case 42:
		goto loc_82E25724;
	case 43:
		goto loc_82E25724;
	case 44:
		goto loc_82E258DC;
	case 45:
		goto loc_82E258DC;
	case 46:
		goto loc_82E258DC;
	case 47:
		goto loc_82E258DC;
	case 48:
		goto loc_82E259A4;
	case 49:
		goto loc_82E259A4;
	case 50:
		goto loc_82E259A4;
	case 51:
		goto loc_82E259A4;
	case 52:
		goto loc_82E259A4;
	case 53:
		goto loc_82E259A4;
	case 54:
		goto loc_82E259A4;
	case 55:
		goto loc_82E259A4;
	case 56:
		goto loc_82E259A4;
	case 57:
		goto loc_82E259A4;
	case 58:
		goto loc_82E259A4;
	case 59:
		goto loc_82E259A4;
	case 60:
		goto loc_82E259A4;
	case 61:
		goto loc_82E259A4;
	case 62:
		goto loc_82E259A4;
	case 63:
		goto loc_82E259A4;
	case 64:
		goto loc_82E259A4;
	case 65:
		goto loc_82E259A4;
	case 66:
		goto loc_82E259A4;
	case 67:
		goto loc_82E259A4;
	case 68:
		goto loc_82E259A4;
	case 69:
		goto loc_82E259A4;
	case 70:
		goto loc_82E259A4;
	case 71:
		goto loc_82E259A4;
	case 72:
		goto loc_82E259A4;
	case 73:
		goto loc_82E259A4;
	case 74:
		goto loc_82E259A4;
	case 75:
		goto loc_82E259A4;
	case 76:
		goto loc_82E259A4;
	case 77:
		goto loc_82E259A4;
	case 78:
		goto loc_82E259A4;
	case 79:
		goto loc_82E259A4;
	case 80:
		goto loc_82E2593C;
	case 81:
		goto loc_82E25944;
	case 82:
		goto loc_82E25958;
	case 83:
		goto loc_82E25978;
	case 84:
		goto loc_82E258DC;
	case 85:
		goto loc_82E258DC;
	case 86:
		goto loc_82E258DC;
	case 87:
		goto loc_82E258DC;
	case 88:
		goto loc_82E258DC;
	case 89:
		goto loc_82E258DC;
	case 90:
		goto loc_82E258DC;
	case 91:
		goto loc_82E258DC;
	case 92:
		goto loc_82E258DC;
	case 93:
		goto loc_82E258DC;
	case 94:
		goto loc_82E258DC;
	case 95:
		goto loc_82E258DC;
	case 96:
		goto loc_82E25838;
	case 97:
		goto loc_82E25838;
	case 98:
		goto loc_82E25838;
	case 99:
		goto loc_82E25838;
	case 100:
		goto loc_82E25854;
	case 101:
		goto loc_82E25854;
	case 102:
		goto loc_82E25854;
	case 103:
		goto loc_82E25854;
	case 104:
		goto loc_82E2587C;
	case 105:
		goto loc_82E2587C;
	case 106:
		goto loc_82E2587C;
	case 107:
		goto loc_82E2587C;
	default:
		__builtin_unreachable();
	}
	// lwz r23,23028(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 23028);
	// lwz r23,22264(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 22264);
	// lwz r23,22264(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 22264);
	// lwz r23,22264(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 22264);
	// lwz r23,22264(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 22264);
	// lwz r23,22316(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 22316);
	// lwz r23,22332(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 22332);
	// lwz r23,22360(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 22360);
	// lwz r23,22748(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 22748);
	// lwz r23,22400(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 22400);
	// lwz r23,22448(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 22448);
	// lwz r23,22508(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 22508);
	// lwz r23,22748(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 22748);
	// lwz r23,22748(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 22748);
	// lwz r23,22748(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 22748);
	// lwz r23,22748(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 22748);
	// lwz r23,22264(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 22264);
	// lwz r23,22264(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 22264);
	// lwz r23,22264(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 22264);
	// lwz r23,22264(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 22264);
	// lwz r23,22264(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 22264);
	// lwz r23,22264(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 22264);
	// lwz r23,22264(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 22264);
	// lwz r23,22264(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 22264);
	// lwz r23,22264(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 22264);
	// lwz r23,22264(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 22264);
	// lwz r23,22264(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 22264);
	// lwz r23,22264(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 22264);
	// lwz r23,22264(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 22264);
	// lwz r23,22748(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 22748);
	// lwz r23,22748(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 22748);
	// lwz r23,22748(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 22748);
	// lwz r23,22300(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 22300);
	// lwz r23,22300(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 22300);
	// lwz r23,22300(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 22300);
	// lwz r23,22272(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 22272);
	// lwz r23,22272(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 22272);
	// lwz r23,22272(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 22272);
	// lwz r23,22300(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 22300);
	// lwz r23,22300(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 22300);
	// lwz r23,22300(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 22300);
	// lwz r23,22308(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 22308);
	// lwz r23,22308(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 22308);
	// lwz r23,22308(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 22308);
	// lwz r23,22748(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 22748);
	// lwz r23,22748(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 22748);
	// lwz r23,22748(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 22748);
	// lwz r23,22748(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 22748);
	// lwz r23,22948(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 22948);
	// lwz r23,22948(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 22948);
	// lwz r23,22948(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 22948);
	// lwz r23,22948(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 22948);
	// lwz r23,22948(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 22948);
	// lwz r23,22948(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 22948);
	// lwz r23,22948(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 22948);
	// lwz r23,22948(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 22948);
	// lwz r23,22948(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 22948);
	// lwz r23,22948(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 22948);
	// lwz r23,22948(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 22948);
	// lwz r23,22948(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 22948);
	// lwz r23,22948(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 22948);
	// lwz r23,22948(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 22948);
	// lwz r23,22948(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 22948);
	// lwz r23,22948(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 22948);
	// lwz r23,22948(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 22948);
	// lwz r23,22948(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 22948);
	// lwz r23,22948(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 22948);
	// lwz r23,22948(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 22948);
	// lwz r23,22948(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 22948);
	// lwz r23,22948(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 22948);
	// lwz r23,22948(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 22948);
	// lwz r23,22948(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 22948);
	// lwz r23,22948(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 22948);
	// lwz r23,22948(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 22948);
	// lwz r23,22948(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 22948);
	// lwz r23,22948(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 22948);
	// lwz r23,22948(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 22948);
	// lwz r23,22948(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 22948);
	// lwz r23,22948(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 22948);
	// lwz r23,22948(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 22948);
	// lwz r23,22844(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 22844);
	// lwz r23,22852(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 22852);
	// lwz r23,22872(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 22872);
	// lwz r23,22904(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 22904);
	// lwz r23,22748(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 22748);
	// lwz r23,22748(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 22748);
	// lwz r23,22748(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 22748);
	// lwz r23,22748(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 22748);
	// lwz r23,22748(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 22748);
	// lwz r23,22748(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 22748);
	// lwz r23,22748(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 22748);
	// lwz r23,22748(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 22748);
	// lwz r23,22748(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 22748);
	// lwz r23,22748(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 22748);
	// lwz r23,22748(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 22748);
	// lwz r23,22748(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 22748);
	// lwz r23,22584(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 22584);
	// lwz r23,22584(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 22584);
	// lwz r23,22584(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 22584);
	// lwz r23,22584(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 22584);
	// lwz r23,22612(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 22612);
	// lwz r23,22612(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 22612);
	// lwz r23,22612(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 22612);
	// lwz r23,22612(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 22612);
	// lwz r23,22652(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 22652);
	// lwz r23,22652(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 22652);
	// lwz r23,22652(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 22652);
	// lwz r23,22652(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 22652);
loc_82E256F8:
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// b 0x82e25524
	goto loc_82E25524;
loc_82E25700:
	// lbz r11,3(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 3);
	// lbz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 4);
	// rotlwi r11,r11,8
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 8);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r31,r11,7
	ctx.r31.s64 = ctx.r11.s64 + 7;
	// b 0x82e25524
	goto loc_82E25524;
loc_82E2571C:
	// addi r31,r31,3
	ctx.r31.s64 = ctx.r31.s64 + 3;
	// b 0x82e25524
	goto loc_82E25524;
loc_82E25724:
	// addi r31,r31,7
	ctx.r31.s64 = ctx.r31.s64 + 7;
	// b 0x82e25524
	goto loc_82E25524;
loc_82E2572C:
	// lbz r11,1(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r31,r11,2
	ctx.r31.s64 = ctx.r11.s64 + 2;
	// b 0x82e25524
	goto loc_82E25524;
loc_82E2573C:
	// lbz r11,1(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// lbz r10,2(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2);
	// rotlwi r11,r11,8
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 8);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r31,r11,3
	ctx.r31.s64 = ctx.r11.s64 + 3;
	// b 0x82e25524
	goto loc_82E25524;
loc_82E25758:
	// lbz r11,1(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// lbz r9,2(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2);
	// rotlwi r11,r11,8
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 8);
	// lbz r10,3(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 3);
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r9,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFFFF00;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r31,r11,4
	ctx.r31.s64 = ctx.r11.s64 + 4;
	// b 0x82e25524
	goto loc_82E25524;
loc_82E25780:
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lbz r11,1(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// cmplw cr6,r30,r10
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82e2579c
	if (ctx.cr6.eq) goto loc_82E2579C;
	// ld r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r30.u32 + 0);
	// addi r30,r1,80
	ctx.r30.s64 = ctx.r1.s64 + 80;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
loc_82E2579C:
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r31,r31,2
	ctx.r31.s64 = ctx.r31.s64 + 2;
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// b 0x82e25524
	goto loc_82E25524;
loc_82E257B0:
	// lbz r11,1(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// lbz r10,2(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2);
	// rotlwi r11,r11,8
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 8);
	// cmplw cr6,r30,r9
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r9.u32, ctx.xer);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// beq cr6,0x82e257d8
	if (ctx.cr6.eq) goto loc_82E257D8;
	// ld r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r30.u32 + 0);
	// addi r30,r1,80
	ctx.r30.s64 = ctx.r1.s64 + 80;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
loc_82E257D8:
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r31,r31,3
	ctx.r31.s64 = ctx.r31.s64 + 3;
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// b 0x82e25524
	goto loc_82E25524;
loc_82E257EC:
	// lbz r11,1(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// lbz r8,2(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2);
	// rotlwi r11,r11,8
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 8);
	// lbz r9,3(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 3);
	// lbz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 4);
	// cmplw cr6,r30,r7
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r7.u32, ctx.xer);
	// add r6,r11,r8
	ctx.r6.u64 = ctx.r11.u64 + ctx.r8.u64;
	// rlwinm r11,r6,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 8) & 0xFFFFFF00;
	// add r5,r11,r9
	ctx.r5.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r5,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 8) & 0xFFFFFF00;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// beq cr6,0x82e2582c
	if (ctx.cr6.eq) goto loc_82E2582C;
	// ld r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r30.u32 + 0);
	// addi r30,r1,80
	ctx.r30.s64 = ctx.r1.s64 + 80;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
loc_82E2582C:
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r31,r31,5
	ctx.r31.s64 = ctx.r31.s64 + 5;
	// b 0x82e25524
	goto loc_82E25524;
loc_82E25838:
	// addi r11,r11,-96
	ctx.r11.s64 = ctx.r11.s64 + -96;
	// lbz r10,1(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// addi r9,r1,84
	ctx.r9.s64 = ctx.r1.s64 + 84;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r31,r31,2
	ctx.r31.s64 = ctx.r31.s64 + 2;
	// stwx r10,r8,r9
	PPC_STORE_U32(ctx.r8.u32 + ctx.r9.u32, ctx.r10.u32);
	// b 0x82e258b8
	goto loc_82E258B8;
loc_82E25854:
	// lbz r9,1(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// addi r8,r11,-100
	ctx.r8.s64 = ctx.r11.s64 + -100;
	// lbz r10,2(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2);
	// addi r7,r1,84
	ctx.r7.s64 = ctx.r1.s64 + 84;
	// rotlwi r11,r9,8
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 8);
	// rlwinm r6,r8,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r31,r31,3
	ctx.r31.s64 = ctx.r31.s64 + 3;
	// stwx r5,r6,r7
	PPC_STORE_U32(ctx.r6.u32 + ctx.r7.u32, ctx.r5.u32);
	// b 0x82e258b8
	goto loc_82E258B8;
loc_82E2587C:
	// lbz r10,1(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// addi r7,r11,-104
	ctx.r7.s64 = ctx.r11.s64 + -104;
	// lbz r8,2(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2);
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// rotlwi r11,r10,8
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// lbz r9,3(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 3);
	// lbz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 4);
	// rlwinm r5,r7,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r4,r11,r8
	ctx.r4.u64 = ctx.r11.u64 + ctx.r8.u64;
	// addi r31,r31,5
	ctx.r31.s64 = ctx.r31.s64 + 5;
	// rlwinm r11,r4,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 8) & 0xFFFFFF00;
	// add r3,r11,r9
	ctx.r3.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r3,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 8) & 0xFFFFFF00;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stwx r11,r5,r6
	PPC_STORE_U32(ctx.r5.u32 + ctx.r6.u32, ctx.r11.u32);
loc_82E258B8:
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplw cr6,r30,r10
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82e258d4
	if (ctx.cr6.eq) goto loc_82E258D4;
	// ld r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r30.u32 + 0);
	// addi r30,r1,80
	ctx.r30.s64 = ctx.r1.s64 + 80;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
loc_82E258D4:
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// b 0x82e25524
	goto loc_82E25524;
loc_82E258DC:
	// li r5,512
	ctx.r5.s64 = 512;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82d37840
	ctx.lr = 0x82E258EC;
	sub_82D37840(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82d348d0
	ctx.lr = 0x82E258F8;
	sub_82D348D0(ctx, base);
	// lwz r3,-21100(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + -21100);
	// lis r5,4760
	ctx.r5.s64 = 311951360;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// li r8,305
	ctx.r8.s64 = 305;
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// ori r5,r5,65245
	ctx.r5.u64 = ctx.r5.u64 | 65245;
	// li r4,3
	ctx.r4.s64 = 3;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82E25924;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82e25930
	if (ctx.cr6.eq) goto loc_82E25930;
	// twi 31,r0,22
	if (ctx.r0.s32 < 22 || ctx.r0.s32 > 22 || ctx.r0.u32 == 22 || ctx.r0.u32 < 22 || ctx.r0.u32 > 22) __builtin_debugtrap();
loc_82E25930:
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82d346f0
	ctx.lr = 0x82E25938;
	sub_82D346F0(ctx, base);
	// b 0x82e25524
	goto loc_82E25524;
loc_82E2593C:
	// lbz r11,1(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// b 0x82e259a8
	goto loc_82E259A8;
loc_82E25944:
	// lbz r11,1(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// lbz r10,2(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2);
	// rotlwi r11,r11,8
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 8);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x82e259a8
	goto loc_82E259A8;
loc_82E25958:
	// lbz r11,1(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// lbz r9,2(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2);
	// rotlwi r11,r11,8
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 8);
	// lbz r10,3(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 3);
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r9,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFFFF00;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x82e259a8
	goto loc_82E259A8;
loc_82E25978:
	// lbz r11,1(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// lbz r10,2(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2);
	// rotlwi r11,r11,8
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 8);
	// lbz r8,3(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 3);
	// lbz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 4);
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rotlwi r11,r8,8
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r8.u32, 8);
	// rlwinm r10,r7,16,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 16) & 0xFFFF0000;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x82e259a8
	goto loc_82E259A8;
loc_82E259A4:
	// addi r11,r11,-48
	ctx.r11.s64 = ctx.r11.s64 + -48;
loc_82E259A8:
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r31,0(r26)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// add r30,r10,r11
	ctx.r30.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x82d2d090
	ctx.lr = 0x82E259B8;
	sub_82D2D090(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// clrlwi r9,r11,2
	ctx.r9.u64 = ctx.r11.u32 & 0x3FFFFFFF;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x82e259dc
	if (!ctx.cr6.eq) goto loc_82E259DC;
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82d2ded0
	ctx.lr = 0x82E259DC;
	sub_82D2DED0(ctx, base);
loc_82E259DC:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stwx r30,r10,r9
	PPC_STORE_U32(ctx.r10.u32 + ctx.r9.u32, ctx.r30.u32);
loc_82E259F4:
	// addi r1,r1,688
	ctx.r1.s64 = ctx.r1.s64 + 688;
	// b 0x82fa76c0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E259FC"))) PPC_WEAK_FUNC(sub_82E259FC);
PPC_FUNC_IMPL(__imp__sub_82E259FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E25A00"))) PPC_WEAK_FUNC(sub_82E25A00);
PPC_FUNC_IMPL(__imp__sub_82E25A00) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa765c
	ctx.lr = 0x82E25A08;
	__savegprlr_21(ctx, base);
	// stwu r1,-784(r1)
	ea = -784 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// lis r10,-32236
	ctx.r10.s64 = -2112618496;
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// mr r24,r7
	ctx.r24.u64 = ctx.r7.u64;
	// lis r27,-31960
	ctx.r27.s64 = -2094530560;
	// addi r29,r11,22964
	ctx.r29.s64 = ctx.r11.s64 + 22964;
	// addi r28,r10,22056
	ctx.r28.s64 = ctx.r10.s64 + 22056;
loc_82E25A34:
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,112
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 112, ctx.xer);
	// bgt cr6,0x82e25fec
	if (ctx.cr6.gt) goto loc_82E25FEC;
	// lis r12,-32030
	ctx.r12.s64 = -2099118080;
	// rlwinm r0,r11,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,23128
	ctx.r12.s64 = ctx.r12.s64 + 23128;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_82E265A4;
	case 1:
		goto loc_82E25D6C;
	case 2:
		goto loc_82E25D6C;
	case 3:
		goto loc_82E25D6C;
	case 4:
		goto loc_82E25D6C;
	case 5:
		goto loc_82E25CBC;
	case 6:
		goto loc_82E25CCC;
	case 7:
		goto loc_82E25CE8;
	case 8:
		goto loc_82E25FEC;
	case 9:
		goto loc_82E25E40;
	case 10:
		goto loc_82E25E84;
	case 11:
		goto loc_82E25ED4;
	case 12:
		goto loc_82E25D10;
	case 13:
		goto loc_82E25F2C;
	case 14:
		goto loc_82E25FEC;
	case 15:
		goto loc_82E25FEC;
	case 16:
		goto loc_82E2630C;
	case 17:
		goto loc_82E2630C;
	case 18:
		goto loc_82E2630C;
	case 19:
		goto loc_82E2604C;
	case 20:
		goto loc_82E26084;
	case 21:
		goto loc_82E260C4;
	case 22:
		goto loc_82E260FC;
	case 23:
		goto loc_82E2613C;
	case 24:
		goto loc_82E26174;
	case 25:
		goto loc_82E261B4;
	case 26:
		goto loc_82E26204;
	case 27:
		goto loc_82E2625C;
	case 28:
		goto loc_82E262B4;
	case 29:
		goto loc_82E25FEC;
	case 30:
		goto loc_82E25FEC;
	case 31:
		goto loc_82E25FEC;
	case 32:
		goto loc_82E2633C;
	case 33:
		goto loc_82E2633C;
	case 34:
		goto loc_82E2633C;
	case 35:
		goto loc_82E26370;
	case 36:
		goto loc_82E26370;
	case 37:
		goto loc_82E26370;
	case 38:
		goto loc_82E25C1C;
	case 39:
		goto loc_82E25C1C;
	case 40:
		goto loc_82E25C1C;
	case 41:
		goto loc_82E25C54;
	case 42:
		goto loc_82E25C54;
	case 43:
		goto loc_82E25C54;
	case 44:
		goto loc_82E25FEC;
	case 45:
		goto loc_82E25FEC;
	case 46:
		goto loc_82E25FEC;
	case 47:
		goto loc_82E25FEC;
	case 48:
		goto loc_82E26560;
	case 49:
		goto loc_82E26560;
	case 50:
		goto loc_82E26560;
	case 51:
		goto loc_82E26560;
	case 52:
		goto loc_82E26560;
	case 53:
		goto loc_82E26560;
	case 54:
		goto loc_82E26560;
	case 55:
		goto loc_82E26560;
	case 56:
		goto loc_82E26560;
	case 57:
		goto loc_82E26560;
	case 58:
		goto loc_82E26560;
	case 59:
		goto loc_82E26560;
	case 60:
		goto loc_82E26560;
	case 61:
		goto loc_82E26560;
	case 62:
		goto loc_82E26560;
	case 63:
		goto loc_82E26560;
	case 64:
		goto loc_82E26560;
	case 65:
		goto loc_82E26560;
	case 66:
		goto loc_82E26560;
	case 67:
		goto loc_82E26560;
	case 68:
		goto loc_82E26560;
	case 69:
		goto loc_82E26560;
	case 70:
		goto loc_82E26560;
	case 71:
		goto loc_82E26560;
	case 72:
		goto loc_82E26560;
	case 73:
		goto loc_82E26560;
	case 74:
		goto loc_82E26560;
	case 75:
		goto loc_82E26560;
	case 76:
		goto loc_82E26560;
	case 77:
		goto loc_82E26560;
	case 78:
		goto loc_82E26560;
	case 79:
		goto loc_82E26560;
	case 80:
		goto loc_82E264F8;
	case 81:
		goto loc_82E26500;
	case 82:
		goto loc_82E26514;
	case 83:
		goto loc_82E26534;
	case 84:
		goto loc_82E25FEC;
	case 85:
		goto loc_82E25FEC;
	case 86:
		goto loc_82E25FEC;
	case 87:
		goto loc_82E25FEC;
	case 88:
		goto loc_82E25FEC;
	case 89:
		goto loc_82E25FEC;
	case 90:
		goto loc_82E25FEC;
	case 91:
		goto loc_82E25FEC;
	case 92:
		goto loc_82E25FEC;
	case 93:
		goto loc_82E25FEC;
	case 94:
		goto loc_82E25FEC;
	case 95:
		goto loc_82E25FEC;
	case 96:
		goto loc_82E25F34;
	case 97:
		goto loc_82E25F34;
	case 98:
		goto loc_82E25F34;
	case 99:
		goto loc_82E25F34;
	case 100:
		goto loc_82E25F50;
	case 101:
		goto loc_82E25F50;
	case 102:
		goto loc_82E25F50;
	case 103:
		goto loc_82E25F50;
	case 104:
		goto loc_82E25F78;
	case 105:
		goto loc_82E25F78;
	case 106:
		goto loc_82E25F78;
	case 107:
		goto loc_82E25F78;
	case 108:
		goto loc_82E25FEC;
	case 109:
		goto loc_82E25FEC;
	case 110:
		goto loc_82E25FEC;
	case 111:
		goto loc_82E25FEC;
	case 112:
		goto loc_82E25D34;
	default:
		__builtin_unreachable();
	}
	// lwz r23,26020(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 26020);
	// lwz r23,23916(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 23916);
	// lwz r23,23916(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 23916);
	// lwz r23,23916(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 23916);
	// lwz r23,23916(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 23916);
	// lwz r23,23740(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 23740);
	// lwz r23,23756(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 23756);
	// lwz r23,23784(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 23784);
	// lwz r23,24556(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 24556);
	// lwz r23,24128(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 24128);
	// lwz r23,24196(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 24196);
	// lwz r23,24276(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 24276);
	// lwz r23,23824(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 23824);
	// lwz r23,24364(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 24364);
	// lwz r23,24556(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 24556);
	// lwz r23,24556(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 24556);
	// lwz r23,25356(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 25356);
	// lwz r23,25356(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 25356);
	// lwz r23,25356(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 25356);
	// lwz r23,24652(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 24652);
	// lwz r23,24708(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 24708);
	// lwz r23,24772(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 24772);
	// lwz r23,24828(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 24828);
	// lwz r23,24892(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 24892);
	// lwz r23,24948(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 24948);
	// lwz r23,25012(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 25012);
	// lwz r23,25092(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 25092);
	// lwz r23,25180(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 25180);
	// lwz r23,25268(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 25268);
	// lwz r23,24556(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 24556);
	// lwz r23,24556(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 24556);
	// lwz r23,24556(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 24556);
	// lwz r23,25404(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 25404);
	// lwz r23,25404(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 25404);
	// lwz r23,25404(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 25404);
	// lwz r23,25456(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 25456);
	// lwz r23,25456(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 25456);
	// lwz r23,25456(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 25456);
	// lwz r23,23580(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 23580);
	// lwz r23,23580(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 23580);
	// lwz r23,23580(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 23580);
	// lwz r23,23636(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 23636);
	// lwz r23,23636(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 23636);
	// lwz r23,23636(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 23636);
	// lwz r23,24556(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 24556);
	// lwz r23,24556(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 24556);
	// lwz r23,24556(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 24556);
	// lwz r23,24556(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 24556);
	// lwz r23,25952(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 25952);
	// lwz r23,25952(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 25952);
	// lwz r23,25952(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 25952);
	// lwz r23,25952(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 25952);
	// lwz r23,25952(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 25952);
	// lwz r23,25952(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 25952);
	// lwz r23,25952(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 25952);
	// lwz r23,25952(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 25952);
	// lwz r23,25952(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 25952);
	// lwz r23,25952(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 25952);
	// lwz r23,25952(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 25952);
	// lwz r23,25952(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 25952);
	// lwz r23,25952(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 25952);
	// lwz r23,25952(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 25952);
	// lwz r23,25952(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 25952);
	// lwz r23,25952(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 25952);
	// lwz r23,25952(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 25952);
	// lwz r23,25952(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 25952);
	// lwz r23,25952(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 25952);
	// lwz r23,25952(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 25952);
	// lwz r23,25952(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 25952);
	// lwz r23,25952(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 25952);
	// lwz r23,25952(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 25952);
	// lwz r23,25952(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 25952);
	// lwz r23,25952(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 25952);
	// lwz r23,25952(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 25952);
	// lwz r23,25952(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 25952);
	// lwz r23,25952(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 25952);
	// lwz r23,25952(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 25952);
	// lwz r23,25952(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 25952);
	// lwz r23,25952(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 25952);
	// lwz r23,25952(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 25952);
	// lwz r23,25848(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 25848);
	// lwz r23,25856(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 25856);
	// lwz r23,25876(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 25876);
	// lwz r23,25908(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 25908);
	// lwz r23,24556(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 24556);
	// lwz r23,24556(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 24556);
	// lwz r23,24556(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 24556);
	// lwz r23,24556(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 24556);
	// lwz r23,24556(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 24556);
	// lwz r23,24556(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 24556);
	// lwz r23,24556(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 24556);
	// lwz r23,24556(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 24556);
	// lwz r23,24556(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 24556);
	// lwz r23,24556(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 24556);
	// lwz r23,24556(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 24556);
	// lwz r23,24556(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 24556);
	// lwz r23,24372(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 24372);
	// lwz r23,24372(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 24372);
	// lwz r23,24372(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 24372);
	// lwz r23,24372(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 24372);
	// lwz r23,24400(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 24400);
	// lwz r23,24400(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 24400);
	// lwz r23,24400(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 24400);
	// lwz r23,24400(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 24400);
	// lwz r23,24440(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 24440);
	// lwz r23,24440(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 24440);
	// lwz r23,24440(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 24440);
	// lwz r23,24440(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 24440);
	// lwz r23,24556(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 24556);
	// lwz r23,24556(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 24556);
	// lwz r23,24556(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 24556);
	// lwz r23,24556(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 24556);
	// lwz r23,23860(r2)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r2.u32 + 23860);
loc_82E25C1C:
	// addi r10,r11,-38
	ctx.r10.s64 = ctx.r11.s64 + -38;
	// lbz r9,1(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r8,r30
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r30.u32);
	// cmpw cr6,r7,r9
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x82e263ec
	if (ctx.cr6.lt) goto loc_82E263EC;
	// addi r11,r11,-34
	ctx.r11.s64 = ctx.r11.s64 + -34;
	// lbz r10,2(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r9,r30
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r30.u32);
	// cmpw cr6,r8,r10
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x82e263ec
	if (!ctx.cr6.lt) goto loc_82E263EC;
	// addi r31,r31,3
	ctx.r31.s64 = ctx.r31.s64 + 3;
	// b 0x82e25a34
	goto loc_82E25A34;
loc_82E25C54:
	// lbz r9,1(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// addi r7,r11,-37
	ctx.r7.s64 = ctx.r11.s64 + -37;
	// lbz r10,2(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2);
	// rotlwi r9,r9,8
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 8);
	// lbz r8,3(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 3);
	// rlwinm r6,r7,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r5,r9,r10
	ctx.r5.u64 = ctx.r9.u64 + ctx.r10.u64;
	// rlwinm r10,r5,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 8) & 0xFFFFFF00;
	// lwzx r4,r6,r25
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r25.u32);
	// add r3,r10,r8
	ctx.r3.u64 = ctx.r10.u64 + ctx.r8.u64;
	// cmpw cr6,r4,r3
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r3.s32, ctx.xer);
	// blt cr6,0x82e263ec
	if (ctx.cr6.lt) goto loc_82E263EC;
	// lbz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 4);
	// addi r8,r11,-33
	ctx.r8.s64 = ctx.r11.s64 + -33;
	// lbz r10,5(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 5);
	// rotlwi r11,r9,8
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 8);
	// lbz r9,6(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 6);
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r6,r10,r11
	ctx.r6.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r11,r6,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 8) & 0xFFFFFF00;
	// lwzx r5,r7,r25
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r25.u32);
	// add r4,r11,r9
	ctx.r4.u64 = ctx.r11.u64 + ctx.r9.u64;
	// cmpw cr6,r5,r4
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r4.s32, ctx.xer);
	// bgt cr6,0x82e263ec
	if (ctx.cr6.gt) goto loc_82E263EC;
	// addi r31,r31,7
	ctx.r31.s64 = ctx.r31.s64 + 7;
	// b 0x82e25a34
	goto loc_82E25A34;
loc_82E25CBC:
	// lbz r11,1(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r31,r11,2
	ctx.r31.s64 = ctx.r11.s64 + 2;
	// b 0x82e25a34
	goto loc_82E25A34;
loc_82E25CCC:
	// lbz r10,1(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// lbz r11,2(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2);
	// rotlwi r10,r10,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r31,r11,3
	ctx.r31.s64 = ctx.r11.s64 + 3;
	// b 0x82e25a34
	goto loc_82E25A34;
loc_82E25CE8:
	// lbz r10,1(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// lbz r11,2(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2);
	// rotlwi r10,r10,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// lbz r9,3(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 3);
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r11,r8,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFFFF00;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r31,r11,4
	ctx.r31.s64 = ctx.r11.s64 + 4;
	// b 0x82e25a34
	goto loc_82E25A34;
loc_82E25D10:
	// lbz r11,1(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// lbz r10,2(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2);
	// lwz r9,48(r25)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r25.u32 + 48);
	// rotlwi r8,r11,8
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r11.u32, 8);
	// or r7,r8,r10
	ctx.r7.u64 = ctx.r8.u64 | ctx.r10.u64;
	// rlwinm r24,r7,9,0,22
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 9) & 0xFFFFFE00;
	// lwz r11,32(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 32);
	// add r31,r11,r24
	ctx.r31.u64 = ctx.r11.u64 + ctx.r24.u64;
	// b 0x82e25a34
	goto loc_82E25A34;
loc_82E25D34:
	// lbz r10,1(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// lbz r11,2(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2);
	// rotlwi r10,r10,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// lbz r8,3(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 3);
	// lwz r7,48(r25)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r25.u32 + 48);
	// add r6,r10,r11
	ctx.r6.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lbz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 4);
	// rlwinm r11,r6,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 8) & 0xFFFFFF00;
	// add r5,r11,r8
	ctx.r5.u64 = ctx.r11.u64 + ctx.r8.u64;
	// lwz r11,32(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 32);
	// rlwinm r10,r5,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 8) & 0xFFFFFF00;
	// add r24,r10,r9
	ctx.r24.u64 = ctx.r10.u64 + ctx.r9.u64;
	// add r31,r11,r24
	ctx.r31.u64 = ctx.r11.u64 + ctx.r24.u64;
	// b 0x82e25a34
	goto loc_82E25A34;
loc_82E25D6C:
	// lbz r10,1(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// lwz r9,32(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// lwz r6,32(r25)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r25.u32 + 32);
	// add r5,r10,r9
	ctx.r5.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lwz r4,36(r25)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r25.u32 + 36);
	// lwz r3,40(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 40);
	// slw r10,r5,r11
	ctx.r10.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r5.u32 << (ctx.r11.u8 & 0x3F));
	// lwz r5,16(r25)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r25.u32 + 16);
	// stw r10,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r10.u32);
	// lwz r8,36(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// lbz r9,2(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2);
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// slw r9,r9,r11
	ctx.r9.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r11.u8 & 0x3F));
	// lwz r26,20(r25)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r25.u32 + 20);
	// stw r9,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r9.u32);
	// lwz r7,40(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// lbz r8,3(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 3);
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// slw r8,r8,r11
	ctx.r8.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r11.u8 & 0x3F));
	// lwz r22,24(r25)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r25.u32 + 24);
	// stw r8,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r8.u32);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// lwz r7,48(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	// add r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 + ctx.r11.u64;
	// stw r11,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r11.u32);
	// subfic r11,r11,16
	ctx.xer.ca = ctx.r11.u32 <= 16;
	ctx.r11.s64 = 16 - ctx.r11.s64;
	// sraw r21,r6,r11
	temp.u32 = ctx.r11.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r6.s32 < 0) & (((ctx.r6.s32 >> temp.u32) << temp.u32) != ctx.r6.s32);
	ctx.r21.s64 = ctx.r6.s32 >> temp.u32;
	// sraw r4,r4,r11
	temp.u32 = ctx.r11.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r4.s32 < 0) & (((ctx.r4.s32 >> temp.u32) << temp.u32) != ctx.r4.s32);
	ctx.r4.s64 = ctx.r4.s32 >> temp.u32;
	// sraw r3,r3,r11
	temp.u32 = ctx.r11.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r3.s32 < 0) & (((ctx.r3.s32 >> temp.u32) << temp.u32) != ctx.r3.s32);
	ctx.r3.s64 = ctx.r3.s32 >> temp.u32;
	// sraw r7,r5,r11
	temp.u32 = ctx.r11.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r5.s32 < 0) & (((ctx.r5.s32 >> temp.u32) << temp.u32) != ctx.r5.s32);
	ctx.r7.s64 = ctx.r5.s32 >> temp.u32;
	// sraw r5,r26,r11
	temp.u32 = ctx.r11.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r26.s32 < 0) & (((ctx.r26.s32 >> temp.u32) << temp.u32) != ctx.r26.s32);
	ctx.r5.s64 = ctx.r26.s32 >> temp.u32;
	// sraw r11,r22,r11
	temp.u32 = ctx.r11.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r22.s32 < 0) & (((ctx.r22.s32 >> temp.u32) << temp.u32) != ctx.r22.s32);
	ctx.r11.s64 = ctx.r22.s32 >> temp.u32;
	// subf r6,r10,r7
	ctx.r6.s64 = ctx.r7.s64 - ctx.r10.s64;
	// subf r11,r8,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r8.s64;
	// subf r7,r9,r5
	ctx.r7.s64 = ctx.r5.s64 - ctx.r9.s64;
	// subf r9,r9,r4
	ctx.r9.s64 = ctx.r4.s64 - ctx.r9.s64;
	// subf r8,r8,r3
	ctx.r8.s64 = ctx.r3.s64 - ctx.r8.s64;
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// stw r9,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r9.u32);
	// subf r10,r10,r21
	ctx.r10.s64 = ctx.r21.s64 - ctx.r10.s64;
	// stw r8,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r8.u32);
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// stw r4,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r4.u32);
	// addi r5,r7,1
	ctx.r5.s64 = ctx.r7.s64 + 1;
	// stw r10,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
	// stw r6,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r6.u32);
	// stw r5,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r5.u32);
	// lwz r3,52(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	// stw r3,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r3.u32);
	// lwz r11,44(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	// addi r30,r1,96
	ctx.r30.s64 = ctx.r1.s64 + 96;
	// stw r11,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r11.u32);
	// b 0x82e25a34
	goto loc_82E25A34;
loc_82E25E40:
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// lbz r8,1(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82e25e70
	if (ctx.cr6.eq) goto loc_82E25E70;
	// li r9,8
	ctx.r9.s64 = 8;
	// addi r10,r1,88
	ctx.r10.s64 = ctx.r1.s64 + 88;
	// addi r11,r30,-8
	ctx.r11.s64 = ctx.r30.s64 + -8;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82E25E60:
	// ldu r9,8(r11)
	ea = 8 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U64(ea);
	ctx.r11.u32 = ea;
	// stdu r9,8(r10)
	ea = 8 + ctx.r10.u32;
	PPC_STORE_U64(ea, ctx.r9.u64);
	ctx.r10.u32 = ea;
	// bdnz 0x82e25e60
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82E25E60;
	// addi r30,r1,96
	ctx.r30.s64 = ctx.r1.s64 + 96;
loc_82E25E70:
	// lwz r11,140(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// addi r31,r31,2
	ctx.r31.s64 = ctx.r31.s64 + 2;
	// add r10,r8,r11
	ctx.r10.u64 = ctx.r8.u64 + ctx.r11.u64;
	// stw r10,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r10.u32);
	// b 0x82e25a34
	goto loc_82E25A34;
loc_82E25E84:
	// lbz r11,1(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// lbz r10,2(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2);
	// rotlwi r11,r11,8
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 8);
	// cmplw cr6,r30,r9
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r9.u32, ctx.xer);
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// beq cr6,0x82e25ec0
	if (ctx.cr6.eq) goto loc_82E25EC0;
	// li r9,8
	ctx.r9.s64 = 8;
	// addi r10,r1,88
	ctx.r10.s64 = ctx.r1.s64 + 88;
	// addi r11,r30,-8
	ctx.r11.s64 = ctx.r30.s64 + -8;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82E25EB0:
	// ldu r9,8(r11)
	ea = 8 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U64(ea);
	ctx.r11.u32 = ea;
	// stdu r9,8(r10)
	ea = 8 + ctx.r10.u32;
	PPC_STORE_U64(ea, ctx.r9.u64);
	ctx.r10.u32 = ea;
	// bdnz 0x82e25eb0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82E25EB0;
	// addi r30,r1,96
	ctx.r30.s64 = ctx.r1.s64 + 96;
loc_82E25EC0:
	// lwz r11,140(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// addi r31,r31,3
	ctx.r31.s64 = ctx.r31.s64 + 3;
	// add r10,r8,r11
	ctx.r10.u64 = ctx.r8.u64 + ctx.r11.u64;
	// stw r10,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r10.u32);
	// b 0x82e25a34
	goto loc_82E25A34;
loc_82E25ED4:
	// lbz r11,1(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// lbz r8,2(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2);
	// rotlwi r11,r11,8
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 8);
	// lbz r9,3(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 3);
	// lbz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 4);
	// cmplw cr6,r30,r7
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r7.u32, ctx.xer);
	// add r6,r11,r8
	ctx.r6.u64 = ctx.r11.u64 + ctx.r8.u64;
	// rlwinm r11,r6,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 8) & 0xFFFFFF00;
	// add r5,r11,r9
	ctx.r5.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r5,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 8) & 0xFFFFFF00;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// beq cr6,0x82e25f28
	if (ctx.cr6.eq) goto loc_82E25F28;
	// li r9,8
	ctx.r9.s64 = 8;
	// addi r10,r1,88
	ctx.r10.s64 = ctx.r1.s64 + 88;
	// addi r11,r30,-8
	ctx.r11.s64 = ctx.r30.s64 + -8;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82E25F18:
	// ldu r9,8(r11)
	ea = 8 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U64(ea);
	ctx.r11.u32 = ea;
	// stdu r9,8(r10)
	ea = 8 + ctx.r10.u32;
	PPC_STORE_U64(ea, ctx.r9.u64);
	ctx.r10.u32 = ea;
	// bdnz 0x82e25f18
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82E25F18;
	// addi r30,r1,96
	ctx.r30.s64 = ctx.r1.s64 + 96;
loc_82E25F28:
	// stw r8,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r8.u32);
loc_82E25F2C:
	// addi r31,r31,5
	ctx.r31.s64 = ctx.r31.s64 + 5;
	// b 0x82e25a34
	goto loc_82E25A34;
loc_82E25F34:
	// addi r11,r11,-96
	ctx.r11.s64 = ctx.r11.s64 + -96;
	// lbz r10,1(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// addi r9,r1,148
	ctx.r9.s64 = ctx.r1.s64 + 148;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r31,r31,2
	ctx.r31.s64 = ctx.r31.s64 + 2;
	// stwx r10,r8,r9
	PPC_STORE_U32(ctx.r8.u32 + ctx.r9.u32, ctx.r10.u32);
	// b 0x82e25fb4
	goto loc_82E25FB4;
loc_82E25F50:
	// lbz r9,1(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// addi r8,r11,-100
	ctx.r8.s64 = ctx.r11.s64 + -100;
	// lbz r10,2(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2);
	// addi r7,r1,148
	ctx.r7.s64 = ctx.r1.s64 + 148;
	// rotlwi r11,r9,8
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 8);
	// rlwinm r6,r8,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r31,r31,3
	ctx.r31.s64 = ctx.r31.s64 + 3;
	// stwx r5,r6,r7
	PPC_STORE_U32(ctx.r6.u32 + ctx.r7.u32, ctx.r5.u32);
	// b 0x82e25fb4
	goto loc_82E25FB4;
loc_82E25F78:
	// lbz r10,1(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// addi r7,r11,-104
	ctx.r7.s64 = ctx.r11.s64 + -104;
	// lbz r8,2(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2);
	// addi r6,r1,148
	ctx.r6.s64 = ctx.r1.s64 + 148;
	// rotlwi r11,r10,8
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// lbz r9,3(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 3);
	// lbz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 4);
	// rlwinm r5,r7,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r4,r11,r8
	ctx.r4.u64 = ctx.r11.u64 + ctx.r8.u64;
	// addi r31,r31,5
	ctx.r31.s64 = ctx.r31.s64 + 5;
	// rlwinm r11,r4,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 8) & 0xFFFFFF00;
	// add r3,r11,r9
	ctx.r3.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r3,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 8) & 0xFFFFFF00;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stwx r11,r5,r6
	PPC_STORE_U32(ctx.r5.u32 + ctx.r6.u32, ctx.r11.u32);
loc_82E25FB4:
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// lwz r8,148(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82e25fe4
	if (ctx.cr6.eq) goto loc_82E25FE4;
	// li r9,8
	ctx.r9.s64 = 8;
	// addi r10,r1,88
	ctx.r10.s64 = ctx.r1.s64 + 88;
	// addi r11,r30,-8
	ctx.r11.s64 = ctx.r30.s64 + -8;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82E25FD4:
	// ldu r9,8(r11)
	ea = 8 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U64(ea);
	ctx.r11.u32 = ea;
	// stdu r9,8(r10)
	ea = 8 + ctx.r10.u32;
	PPC_STORE_U64(ea, ctx.r9.u64);
	ctx.r10.u32 = ea;
	// bdnz 0x82e25fd4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82E25FD4;
	// addi r30,r1,96
	ctx.r30.s64 = ctx.r1.s64 + 96;
loc_82E25FE4:
	// stw r8,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r8.u32);
	// b 0x82e25a34
	goto loc_82E25A34;
loc_82E25FEC:
	// li r5,512
	ctx.r5.s64 = 512;
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82d37840
	ctx.lr = 0x82E25FFC;
	sub_82D37840(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82d348d0
	ctx.lr = 0x82E26008;
	sub_82D348D0(ctx, base);
	// lwz r3,-21100(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + -21100);
	// lis r5,4760
	ctx.r5.s64 = 311951360;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// li r8,293
	ctx.r8.s64 = 293;
	// addi r6,r1,176
	ctx.r6.s64 = ctx.r1.s64 + 176;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// ori r5,r5,65245
	ctx.r5.u64 = ctx.r5.u64 | 65245;
	// li r4,3
	ctx.r4.s64 = 3;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82E26034;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82e26040
	if (ctx.cr6.eq) goto loc_82E26040;
	// twi 31,r0,22
	if (ctx.r0.s32 < 22 || ctx.r0.s32 > 22 || ctx.r0.u32 == 22 || ctx.r0.u32 < 22 || ctx.r0.u32 > 22) __builtin_debugtrap();
loc_82E26040:
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82d346f0
	ctx.lr = 0x82E26048;
	sub_82D346F0(ctx, base);
	// b 0x82e25a34
	goto loc_82E25A34;
loc_82E2604C:
	// lbz r11,1(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// li r29,0
	ctx.r29.s64 = 0;
	// lbz r10,2(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// rotlwi r9,r11,1
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// lwz r8,24(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// lwz r6,20(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// rotlwi r10,r10,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r7,4(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// add r8,r8,r6
	ctx.r8.u64 = ctx.r8.u64 + ctx.r6.u64;
	// lbz r26,-1(r31)
	ctx.r26.u64 = PPC_LOAD_U8(ctx.r31.u32 + -1);
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// b 0x82e263b4
	goto loc_82E263B4;
loc_82E26084:
	// lbz r11,1(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// li r29,0
	ctx.r29.s64 = 0;
	// lbz r9,2(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// rotlwi r10,r11,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// lwz r8,20(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// rotlwi r11,r9,1
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 1);
	// lwz r7,8(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r6,4(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r9,r10,-255
	ctx.r9.s64 = ctx.r10.s64 + -255;
	// lwz r5,24(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// addi r10,r11,-255
	ctx.r10.s64 = ctx.r11.s64 + -255;
	// lbz r26,-1(r31)
	ctx.r26.u64 = PPC_LOAD_U8(ctx.r31.u32 + -1);
	// subf r8,r7,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r7.s64;
	// subf r11,r5,r6
	ctx.r11.s64 = ctx.r6.s64 - ctx.r5.s64;
	// b 0x82e263b4
	goto loc_82E263B4;
loc_82E260C4:
	// lbz r11,1(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// li r29,0
	ctx.r29.s64 = 0;
	// lbz r10,2(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// rotlwi r9,r11,1
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// lwz r8,24(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// lwz r6,16(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// rotlwi r10,r10,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r7,0(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// add r8,r8,r6
	ctx.r8.u64 = ctx.r8.u64 + ctx.r6.u64;
	// lbz r26,-1(r31)
	ctx.r26.u64 = PPC_LOAD_U8(ctx.r31.u32 + -1);
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// b 0x82e263b4
	goto loc_82E263B4;
loc_82E260FC:
	// lbz r11,1(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// li r29,0
	ctx.r29.s64 = 0;
	// lbz r9,2(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// rotlwi r10,r11,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// lwz r8,16(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// rotlwi r11,r9,1
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 1);
	// lwz r7,8(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r6,0(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r9,r10,-255
	ctx.r9.s64 = ctx.r10.s64 + -255;
	// lwz r5,24(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// addi r10,r11,-255
	ctx.r10.s64 = ctx.r11.s64 + -255;
	// lbz r26,-1(r31)
	ctx.r26.u64 = PPC_LOAD_U8(ctx.r31.u32 + -1);
	// subf r8,r7,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r7.s64;
	// subf r11,r5,r6
	ctx.r11.s64 = ctx.r6.s64 - ctx.r5.s64;
	// b 0x82e263b4
	goto loc_82E263B4;
loc_82E2613C:
	// lbz r11,1(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// li r29,0
	ctx.r29.s64 = 0;
	// lbz r10,2(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// rotlwi r9,r11,1
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// lwz r8,20(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// lwz r6,16(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// rotlwi r10,r10,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r7,0(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// add r8,r8,r6
	ctx.r8.u64 = ctx.r8.u64 + ctx.r6.u64;
	// lbz r26,-1(r31)
	ctx.r26.u64 = PPC_LOAD_U8(ctx.r31.u32 + -1);
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// b 0x82e263b4
	goto loc_82E263B4;
loc_82E26174:
	// lbz r11,1(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// li r29,0
	ctx.r29.s64 = 0;
	// lbz r9,2(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// rotlwi r10,r11,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// lwz r8,16(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// rotlwi r11,r9,1
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 1);
	// lwz r7,4(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r6,0(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r9,r10,-255
	ctx.r9.s64 = ctx.r10.s64 + -255;
	// lwz r5,20(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// addi r10,r11,-255
	ctx.r10.s64 = ctx.r11.s64 + -255;
	// lbz r26,-1(r31)
	ctx.r26.u64 = PPC_LOAD_U8(ctx.r31.u32 + -1);
	// subf r8,r7,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r7.s64;
	// subf r11,r5,r6
	ctx.r11.s64 = ctx.r6.s64 - ctx.r5.s64;
	// b 0x82e263b4
	goto loc_82E263B4;
loc_82E261B4:
	// lbz r10,1(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// li r29,0
	ctx.r29.s64 = 0;
	// lbz r11,2(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// rotlwi r9,r10,1
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// lwz r6,20(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// lwz r8,24(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// rotlwi r7,r11,1
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// lwz r5,8(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// add r10,r11,r7
	ctx.r10.u64 = ctx.r11.u64 + ctx.r7.u64;
	// add r8,r8,r6
	ctx.r8.u64 = ctx.r8.u64 + ctx.r6.u64;
	// lwz r6,16(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// lwz r7,0(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// add r11,r5,r4
	ctx.r11.u64 = ctx.r5.u64 + ctx.r4.u64;
	// lbz r26,-1(r31)
	ctx.r26.u64 = PPC_LOAD_U8(ctx.r31.u32 + -1);
	// add r8,r8,r6
	ctx.r8.u64 = ctx.r8.u64 + ctx.r6.u64;
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// b 0x82e263b4
	goto loc_82E263B4;
loc_82E26204:
	// lwz r9,24(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r8,20(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// lwz r5,8(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lbz r6,1(r31)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// subf r9,r5,r8
	ctx.r9.s64 = ctx.r8.s64 - ctx.r5.s64;
	// lbz r7,2(r31)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r8,16(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// addi r10,r6,-85
	ctx.r10.s64 = ctx.r6.s64 + -85;
	// addi r7,r7,-85
	ctx.r7.s64 = ctx.r7.s64 + -85;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// add r8,r9,r8
	ctx.r8.u64 = ctx.r9.u64 + ctx.r8.u64;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r6,r7,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lbz r26,-1(r31)
	ctx.r26.u64 = PPC_LOAD_U8(ctx.r31.u32 + -1);
	// add r10,r7,r6
	ctx.r10.u64 = ctx.r7.u64 + ctx.r6.u64;
	// b 0x82e263b4
	goto loc_82E263B4;
loc_82E2625C:
	// lwz r9,20(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r8,24(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// lwz r5,4(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lbz r6,1(r31)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// subf r9,r5,r8
	ctx.r9.s64 = ctx.r8.s64 - ctx.r5.s64;
	// lbz r7,2(r31)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r8,16(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// addi r10,r6,-85
	ctx.r10.s64 = ctx.r6.s64 + -85;
	// addi r7,r7,-85
	ctx.r7.s64 = ctx.r7.s64 + -85;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// add r8,r9,r8
	ctx.r8.u64 = ctx.r9.u64 + ctx.r8.u64;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r6,r7,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lbz r26,-1(r31)
	ctx.r26.u64 = PPC_LOAD_U8(ctx.r31.u32 + -1);
	// add r10,r7,r6
	ctx.r10.u64 = ctx.r7.u64 + ctx.r6.u64;
	// b 0x82e263b4
	goto loc_82E263B4;
loc_82E262B4:
	// lbz r10,1(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// lbz r9,2(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// addi r10,r10,-170
	ctx.r10.s64 = ctx.r10.s64 + -170;
	// lwz r8,8(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r7,r9,-170
	ctx.r7.s64 = ctx.r9.s64 + -170;
	// lwz r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r4,24(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// subf r3,r8,r11
	ctx.r3.s64 = ctx.r11.s64 - ctx.r8.s64;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// rlwinm r6,r7,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r29,20(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// subf r5,r4,r5
	ctx.r5.s64 = ctx.r5.s64 - ctx.r4.s64;
	// subf r8,r11,r3
	ctx.r8.s64 = ctx.r3.s64 - ctx.r11.s64;
	// lbz r26,-1(r31)
	ctx.r26.u64 = PPC_LOAD_U8(ctx.r31.u32 + -1);
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// subf r11,r29,r5
	ctx.r11.s64 = ctx.r5.s64 - ctx.r29.s64;
	// add r10,r7,r6
	ctx.r10.u64 = ctx.r7.u64 + ctx.r6.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// b 0x82e263b4
	goto loc_82E263B4;
loc_82E2630C:
	// addi r8,r11,-12
	ctx.r8.s64 = ctx.r11.s64 + -12;
	// lbz r9,1(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// addi r7,r11,-16
	ctx.r7.s64 = ctx.r11.s64 + -16;
	// lbz r10,2(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2);
	// rlwinm r6,r8,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r5,r7,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// li r29,0
	ctx.r29.s64 = 0;
	// lwzx r8,r6,r30
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r30.u32);
	// lwzx r11,r5,r30
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r30.u32);
	// lbz r26,-1(r31)
	ctx.r26.u64 = PPC_LOAD_U8(ctx.r31.u32 + -1);
	// b 0x82e263b4
	goto loc_82E263B4;
loc_82E2633C:
	// lbz r10,1(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// addi r9,r11,-28
	ctx.r9.s64 = ctx.r11.s64 + -28;
	// addi r8,r11,-32
	ctx.r8.s64 = ctx.r11.s64 + -32;
	// addi r31,r31,-1
	ctx.r31.s64 = ctx.r31.s64 + -1;
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r6,r8,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// addi r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 1;
	// li r29,0
	ctx.r29.s64 = 0;
	// lwzx r8,r7,r30
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r30.u32);
	// lwzx r11,r6,r30
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r30.u32);
	// lbz r26,-1(r31)
	ctx.r26.u64 = PPC_LOAD_U8(ctx.r31.u32 + -1);
	// b 0x82e263b4
	goto loc_82E263B4;
loc_82E26370:
	// addi r10,r11,-31
	ctx.r10.s64 = ctx.r11.s64 + -31;
	// lbz r9,3(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 3);
	// addi r8,r11,-35
	ctx.r8.s64 = ctx.r11.s64 + -35;
	// lbz r5,5(r31)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r31.u32 + 5);
	// rlwinm r4,r10,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lbz r6,4(r31)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r31.u32 + 4);
	// rlwinm r3,r8,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lbz r7,6(r31)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r31.u32 + 6);
	// rotlwi r8,r9,8
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r9.u32, 8);
	// lbz r9,1(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// rotlwi r11,r5,8
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r5.u32, 8);
	// lbz r10,2(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2);
	// add r29,r8,r6
	ctx.r29.u64 = ctx.r8.u64 + ctx.r6.u64;
	// add r26,r11,r7
	ctx.r26.u64 = ctx.r11.u64 + ctx.r7.u64;
	// lwzx r8,r4,r30
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r30.u32);
	// lwzx r11,r3,r30
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r30.u32);
	// addi r31,r31,7
	ctx.r31.s64 = ctx.r31.s64 + 7;
loc_82E263B4:
	// li r28,0
	ctx.r28.s64 = 0;
	// li r27,0
	ctx.r27.s64 = 0;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bgt cr6,0x82e26400
	if (ctx.cr6.gt) goto loc_82E26400;
	// cmpw cr6,r8,r9
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x82e263ec
	if (!ctx.cr6.lt) goto loc_82E263EC;
	// mr r7,r24
	ctx.r7.u64 = ctx.r24.u64;
	// add r6,r29,r31
	ctx.r6.u64 = ctx.r29.u64 + ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82e25a00
	ctx.lr = 0x82E263E4;
	sub_82E25A00(ctx, base);
	// lbz r28,0(r3)
	ctx.r28.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// b 0x82e2644c
	goto loc_82E2644C;
loc_82E263EC:
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// stb r11,0(r23)
	PPC_STORE_U8(ctx.r23.u32 + 0, ctx.r11.u8);
	// addi r1,r1,784
	ctx.r1.s64 = ctx.r1.s64 + 784;
	// b 0x82fa76ac
	__restgprlr_21(ctx, base);
	return;
loc_82E26400:
	// cmpw cr6,r8,r9
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r9.s32, ctx.xer);
	// mr r7,r24
	ctx.r7.u64 = ctx.r24.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// blt cr6,0x82e2641c
	if (ctx.cr6.lt) goto loc_82E2641C;
	// addi r3,r1,82
	ctx.r3.s64 = ctx.r1.s64 + 82;
	// b 0x82e26440
	goto loc_82E26440;
loc_82E2641C:
	// add r6,r29,r31
	ctx.r6.u64 = ctx.r29.u64 + ctx.r31.u64;
	// addi r3,r1,83
	ctx.r3.s64 = ctx.r1.s64 + 83;
	// bl 0x82e25a00
	ctx.lr = 0x82E26428;
	sub_82E25A00(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r7,r24
	ctx.r7.u64 = ctx.r24.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lbz r28,0(r11)
	ctx.r28.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
loc_82E26440:
	// add r6,r26,r31
	ctx.r6.u64 = ctx.r26.u64 + ctx.r31.u64;
	// bl 0x82e25a00
	ctx.lr = 0x82E26448;
	sub_82E25A00(ctx, base);
	// lbz r27,0(r3)
	ctx.r27.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
loc_82E2644C:
	// extsb r30,r28
	ctx.r30.s64 = ctx.r28.s8;
	// extsb r28,r27
	ctx.r28.s64 = ctx.r27.s8;
	// addic r11,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r11.s64 = ctx.r30.s64 + -1;
	// cntlzw r10,r28
	ctx.r10.u64 = ctx.r28.u32 == 0 ? 32 : __builtin_clz(ctx.r28.u32);
	// subfe r9,r11,r30
	temp.u8 = (~ctx.r11.u32 + ctx.r30.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r30.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r11.u64 + ctx.r30.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// rlwinm r8,r10,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// and r7,r9,r8
	ctx.r7.u64 = ctx.r9.u64 & ctx.r8.u64;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x82e26494
	if (ctx.cr6.eq) goto loc_82E26494;
	// lwz r3,68(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 68);
	// lwz r11,48(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 48);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,32(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// subf r11,r9,r29
	ctx.r11.s64 = ctx.r29.s64 - ctx.r9.s64;
	// lwz r8,8(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// add r4,r11,r31
	ctx.r4.u64 = ctx.r11.u64 + ctx.r31.u64;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82E26494;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82E26494:
	// cntlzw r11,r30
	ctx.r11.u64 = ctx.r30.u32 == 0 ? 32 : __builtin_clz(ctx.r30.u32);
	// addic r10,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r10.s64 = ctx.r28.s64 + -1;
	// rlwinm r9,r11,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// subfe r8,r10,r28
	temp.u8 = (~ctx.r10.u32 + ctx.r28.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r28.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ~ctx.r10.u64 + ctx.r28.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r7,r9,r8
	ctx.r7.u64 = ctx.r9.u64 & ctx.r8.u64;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x82e264d4
	if (ctx.cr6.eq) goto loc_82E264D4;
	// lwz r3,68(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 68);
	// lwz r11,48(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 48);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,32(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// subf r11,r9,r26
	ctx.r11.s64 = ctx.r26.s64 - ctx.r9.s64;
	// lwz r8,8(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// add r4,r11,r31
	ctx.r4.u64 = ctx.r11.u64 + ctx.r31.u64;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82E264D4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82E264D4:
	// addic r11,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r11.s64 = ctx.r30.s64 + -1;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// subfe r10,r11,r30
	temp.u8 = (~ctx.r11.u32 + ctx.r30.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r30.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r11.u64 + ctx.r30.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addic r9,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r9.s64 = ctx.r28.s64 + -1;
	// subfe r8,r9,r28
	temp.u8 = (~ctx.r9.u32 + ctx.r28.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r28.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r28.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r7,r10,r8
	ctx.r7.u64 = ctx.r10.u64 & ctx.r8.u64;
	// stb r7,0(r23)
	PPC_STORE_U8(ctx.r23.u32 + 0, ctx.r7.u8);
	// addi r1,r1,784
	ctx.r1.s64 = ctx.r1.s64 + 784;
	// b 0x82fa76ac
	__restgprlr_21(ctx, base);
	return;
loc_82E264F8:
	// lbz r11,1(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// b 0x82e26564
	goto loc_82E26564;
loc_82E26500:
	// lbz r11,1(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// lbz r10,2(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2);
	// rotlwi r11,r11,8
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 8);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x82e26564
	goto loc_82E26564;
loc_82E26514:
	// lbz r11,1(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// lbz r9,2(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2);
	// rotlwi r11,r11,8
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 8);
	// lbz r10,3(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 3);
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r9,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFFFF00;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x82e26564
	goto loc_82E26564;
loc_82E26534:
	// lbz r11,1(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// lbz r8,2(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 2);
	// rotlwi r11,r11,8
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 8);
	// lbz r9,3(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 3);
	// lbz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 4);
	// add r8,r11,r8
	ctx.r8.u64 = ctx.r11.u64 + ctx.r8.u64;
	// rlwinm r11,r8,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 8) & 0xFFFFFF00;
	// add r7,r11,r9
	ctx.r7.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r7,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 8) & 0xFFFFFF00;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x82e26564
	goto loc_82E26564;
loc_82E26560:
	// addi r11,r11,-48
	ctx.r11.s64 = ctx.r11.s64 + -48;
loc_82E26564:
	// lwz r4,68(r25)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r25.u32 + 68);
	// srawi r9,r24,9
	ctx.xer.ca = (ctx.r24.s32 < 0) & ((ctx.r24.u32 & 0x1FF) != 0);
	ctx.r9.s64 = ctx.r24.s32 >> 9;
	// lwz r10,44(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	// addi r6,r30,52
	ctx.r6.s64 = ctx.r30.s64 + 52;
	// lwz r8,72(r25)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r25.u32 + 72);
	// rlwinm r7,r9,8,0,23
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFFFFFF00;
	// add r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 + ctx.r11.u64;
	// and r10,r7,r8
	ctx.r10.u64 = ctx.r7.u64 & ctx.r8.u64;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r3,r1,81
	ctx.r3.s64 = ctx.r1.s64 + 81;
	// or r5,r10,r5
	ctx.r5.u64 = ctx.r10.u64 | ctx.r5.u64;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82E2659C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lbz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// stb r8,64(r25)
	PPC_STORE_U8(ctx.r25.u32 + 64, ctx.r8.u8);
loc_82E265A4:
	// lbz r11,64(r25)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r25.u32 + 64);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// stb r11,0(r23)
	PPC_STORE_U8(ctx.r23.u32 + 0, ctx.r11.u8);
	// addi r1,r1,784
	ctx.r1.s64 = ctx.r1.s64 + 784;
	// b 0x82fa76ac
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E265B8"))) PPC_WEAK_FUNC(sub_82E265B8);
PPC_FUNC_IMPL(__imp__sub_82E265B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7674
	ctx.lr = 0x82E265C0;
	__savegprlr_27(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31960
	ctx.r11.s64 = -2094530560;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r27,r11,-8886
	ctx.r27.s64 = ctx.r11.s64 + -8886;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// lbz r11,-8886(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + -8886);
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82e265fc
	if (!ctx.cr6.eq) goto loc_82E265FC;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x830e3d28
	ctx.lr = 0x82E265F0;
	sub_830E3D28(ctx, base);
	// lbz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82e267b8
	if (ctx.cr6.eq) goto loc_82E267B8;
loc_82E265FC:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r28,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r28.u32);
	// stw r30,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r30.u32);
	// li r9,-1
	ctx.r9.s64 = -1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lfs f0,28(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,16(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,0(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f11,f12,f13
	ctx.f11.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// fmuls f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fctiwz f9,f10
	ctx.f9.s64 = (ctx.f10.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f10.f64));
	// stfd f9,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f9.u64);
	// lwz r10,92(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// addi r8,r10,-1
	ctx.r8.s64 = ctx.r10.s64 + -1;
	// stw r8,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r8.u32);
	// lfs f8,16(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	ctx.f8.f64 = double(temp.f32);
	// fsubs f7,f8,f13
	ctx.f7.f64 = double(float(ctx.f8.f64 - ctx.f13.f64));
	// lhz r7,32(r31)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r31.u32 + 32);
	// fmuls f6,f7,f0
	ctx.f6.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// extsh r6,r7
	ctx.r6.s64 = ctx.r7.s16;
	// fctiwz f5,f6
	ctx.f5.s64 = (ctx.f6.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f6.f64));
	// stfd f5,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f5.u64);
	// lwz r10,92(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// addi r5,r10,1
	ctx.r5.s64 = ctx.r10.s64 + 1;
	// stw r5,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r5.u32);
	// lfs f4,20(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,4(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	ctx.f3.f64 = double(temp.f32);
	// fsubs f2,f3,f4
	ctx.f2.f64 = double(float(ctx.f3.f64 - ctx.f4.f64));
	// lhz r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r31.u32 + 16);
	// fmuls f1,f2,f0
	ctx.f1.f64 = double(float(ctx.f2.f64 * ctx.f0.f64));
	// fctiwz f13,f1
	ctx.f13.s64 = (ctx.f1.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f1.f64));
	// stfd f13,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f13.u64);
	// lwz r10,92(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// addi r3,r10,-1
	ctx.r3.s64 = ctx.r10.s64 + -1;
	// stw r3,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r3.u32);
	// lfs f12,20(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f11,f12,f4
	ctx.f11.f64 = double(float(ctx.f12.f64 - ctx.f4.f64));
	// extsh r10,r4
	ctx.r10.s64 = ctx.r4.s16;
	// fmuls f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// addi r8,r10,1
	ctx.r8.s64 = ctx.r10.s64 + 1;
	// lhz r7,36(r31)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r31.u32 + 36);
	// fctiwz f9,f10
	ctx.f9.s64 = (ctx.f10.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f10.f64));
	// stfd f9,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f9.u64);
	// lwz r10,92(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// addi r5,r10,1
	ctx.r5.s64 = ctx.r10.s64 + 1;
	// stw r5,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r5.u32);
	// lfs f8,24(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	ctx.f8.f64 = double(temp.f32);
	// lfs f7,8(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f6,f7,f8
	ctx.f6.f64 = double(float(ctx.f7.f64 - ctx.f8.f64));
	// fmuls f5,f6,f0
	ctx.f5.f64 = double(float(ctx.f6.f64 * ctx.f0.f64));
	// lhz r4,20(r31)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r31.u32 + 20);
	// stw r11,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
	// extsh r3,r7
	ctx.r3.s64 = ctx.r7.s16;
	// stw r11,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r11.u32);
	// stw r11,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r11.u32);
	// stw r11,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r11.u32);
	// stw r11,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r11.u32);
	// stw r11,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r11.u32);
	// stw r8,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r8.u32);
	// stw r6,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r6.u32);
	// stw r3,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// fctiwz f4,f5
	ctx.f4.s64 = (ctx.f5.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f5.f64));
	// stfd f4,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f4.u64);
	// lwz r10,92(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// addi r11,r10,-1
	ctx.r11.s64 = ctx.r10.s64 + -1;
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// lfs f3,24(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	ctx.f3.f64 = double(temp.f32);
	// lhz r8,40(r31)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r31.u32 + 40);
	// fsubs f2,f3,f8
	ctx.f2.f64 = double(float(ctx.f3.f64 - ctx.f8.f64));
	// fmuls f1,f2,f0
	ctx.f1.f64 = double(float(ctx.f2.f64 * ctx.f0.f64));
	// extsh r10,r4
	ctx.r10.s64 = ctx.r4.s16;
	// extsh r7,r8
	ctx.r7.s64 = ctx.r8.s16;
	// addi r6,r10,1
	ctx.r6.s64 = ctx.r10.s64 + 1;
	// stw r7,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r7.u32);
	// stw r6,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r6.u32);
	// fctiwz f0,f1
	ctx.f0.s64 = (ctx.f1.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f1.f64));
	// stfd f0,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f0.u64);
	// lwz r10,92(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// srawi r11,r10,16
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xFFFF) != 0);
	ctx.r11.s64 = ctx.r10.s32 >> 16;
	// stw r10,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r10.u32);
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r4,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r4.u32);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r6,32(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// lbz r11,0(r6)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r6.u32 + 0);
	// addi r11,r11,-13
	ctx.r11.s64 = ctx.r11.s64 + -13;
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r11,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r8.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r10,r11,r9
	ctx.r10.u64 = ctx.r11.u64 & ctx.r9.u64;
	// stw r10,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r10.u32);
	// bl 0x82e25a00
	ctx.lr = 0x82E26778;
	sub_82E25A00(ctx, base);
	// lbz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82e267b8
	if (ctx.cr6.eq) goto loc_82E267B8;
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// li r10,5
	ctx.r10.s64 = 5;
	// lwz r9,0(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r8,32(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lwz r7,8(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// lbz r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r8.u32 + 0);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// addi r6,r11,-13
	ctx.r6.s64 = ctx.r11.s64 + -13;
	// addic r5,r6,-1
	ctx.xer.ca = ctx.r6.u32 > 0;
	ctx.r5.s64 = ctx.r6.s64 + -1;
	// subfe r11,r4,r4
	temp.u8 = (~ctx.r4.u32 + ctx.r4.u32 < ~ctx.r4.u32) | (~ctx.r4.u32 + ctx.r4.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r4.u64 + ctx.r4.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 & ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82E267B8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82E267B8:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82fa76c4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E267C0"))) PPC_WEAK_FUNC(sub_82E267C0);
PPC_FUNC_IMPL(__imp__sub_82E267C0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E267C4"))) PPC_WEAK_FUNC(sub_82E267C4);
PPC_FUNC_IMPL(__imp__sub_82E267C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E267C8"))) PPC_WEAK_FUNC(sub_82E267C8);
PPC_FUNC_IMPL(__imp__sub_82E267C8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E267CC"))) PPC_WEAK_FUNC(sub_82E267CC);
PPC_FUNC_IMPL(__imp__sub_82E267CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E267D0"))) PPC_WEAK_FUNC(sub_82E267D0);
PPC_FUNC_IMPL(__imp__sub_82E267D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// lis r10,-32237
	ctx.r10.s64 = -2112684032;
	// lwz r9,32(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// vspltisw v8,0
	_mm_store_si128((__m128i*)ctx.v8.u32, _mm_set1_epi32(int(0x0)));
	// lwz r8,48(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// addi r7,r10,22016
	ctx.r7.s64 = ctx.r10.s64 + 22016;
	// addi r6,r1,-16
	ctx.r6.s64 = ctx.r1.s64 + -16;
	// lvx128 v7,r0,r11
	simd::store_shuffled(ctx.v7, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// vor v9,v8,v8
	_mm_store_si128((__m128i*)ctx.v9.u8, _mm_load_si128((__m128i*)ctx.v8.u8));
	// lvx128 v6,r0,r9
	simd::store_shuffled(ctx.v6, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// lvx128 v5,r0,r8
	simd::store_shuffled(ctx.v5, simd::load_and_shuffle(base + ((ctx.r8.u32) & ~0xF), VectorMaskL));
	// vsubfp v4,v7,v6
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v4.f32, _mm_sub_ps(_mm_load_ps(ctx.v7.f32), _mm_load_ps(ctx.v6.f32)));
	// vsubfp v3,v6,v5
	_mm_store_ps(ctx.v3.f32, _mm_sub_ps(_mm_load_ps(ctx.v6.f32), _mm_load_ps(ctx.v5.f32)));
	// vpermwi128 v2,v4,135
	_mm_store_si128((__m128i*)ctx.v2.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v4.u32), 0x78));
	// vpermwi128 v1,v3,99
	_mm_store_si128((__m128i*)ctx.v1.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v3.u32), 0x9C));
	// vpermwi128 v31,v3,135
	_mm_store_si128((__m128i*)ctx.v31.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v3.u32), 0x78));
	// vpermwi128 v30,v4,99
	_mm_store_si128((__m128i*)ctx.v30.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v4.u32), 0x9C));
	// vmulfp128 v29,v2,v1
	_mm_store_ps(ctx.v29.f32, _mm_mul_ps(_mm_load_ps(ctx.v2.f32), _mm_load_ps(ctx.v1.f32)));
	// vmulfp128 v28,v30,v31
	_mm_store_ps(ctx.v28.f32, _mm_mul_ps(_mm_load_ps(ctx.v30.f32), _mm_load_ps(ctx.v31.f32)));
	// vsubfp v27,v28,v29
	_mm_store_ps(ctx.v27.f32, _mm_sub_ps(_mm_load_ps(ctx.v28.f32), _mm_load_ps(ctx.v29.f32)));
	// vmsum3fp128 v26,v27,v27
	_mm_store_ps(ctx.v26.f32, _mm_dp_ps(_mm_load_ps(ctx.v27.f32), _mm_load_ps(ctx.v27.f32), 0xEF));
	// stvx128 v27,r0,r3
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v27.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v13,r0,r7
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r7.u32) & ~0xF), VectorMaskL));
	// vrsqrtefp v0,v26
	_mm_store_ps(ctx.v0.f32, _mm_div_ps(_mm_set1_ps(1), _mm_sqrt_ps(_mm_load_ps(ctx.v26.f32))));
	// vmulfp128 v10,v26,v13
	_mm_store_ps(ctx.v10.f32, _mm_mul_ps(_mm_load_ps(ctx.v26.f32), _mm_load_ps(ctx.v13.f32)));
	// vmulfp128 v11,v0,v0
	_mm_store_ps(ctx.v11.f32, _mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v0.f32)));
	// vcmpeqfp v7,v8,v26
	_mm_store_ps(ctx.v7.f32, _mm_cmpeq_ps(_mm_load_ps(ctx.v8.f32), _mm_load_ps(ctx.v26.f32)));
	// vnmsubfp v8,v10,v11,v13
	_mm_store_ps(ctx.v8.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(ctx.v10.f32), _mm_load_ps(ctx.v11.f32)), _mm_load_ps(ctx.v13.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// vmaddfp v0,v0,v8,v0
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v8.f32)), _mm_load_ps(ctx.v0.f32)));
	// vmulfp128 v12,v0,v0
	_mm_store_ps(ctx.v12.f32, _mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v0.f32)));
	// vnmsubfp v13,v10,v12,v13
	_mm_store_ps(ctx.v13.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(ctx.v10.f32), _mm_load_ps(ctx.v12.f32)), _mm_load_ps(ctx.v13.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// vmaddfp v0,v0,v13,v0
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v13.f32)), _mm_load_ps(ctx.v0.f32)));
	// vsel v13,v0,v9,v7
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v7.u8), _mm_load_si128((__m128i*)ctx.v0.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v7.u8), _mm_load_si128((__m128i*)ctx.v9.u8))));
	// vspltw v25,v13,0
	_mm_store_si128((__m128i*)ctx.v25.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v13.u32), 0xFF));
	// vmulfp128 v24,v27,v25
	_mm_store_ps(ctx.v24.f32, _mm_mul_ps(_mm_load_ps(ctx.v27.f32), _mm_load_ps(ctx.v25.f32)));
	// stvx128 v24,r0,r3
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v24.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v23,r0,r11
	simd::store_shuffled(ctx.v23, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// vmsum3fp128 v22,v24,v23
	_mm_store_ps(ctx.v22.f32, _mm_dp_ps(_mm_load_ps(ctx.v24.f32), _mm_load_ps(ctx.v23.f32), 0xEF));
	// stvewx v22,r0,r6
	ea = (ctx.r6.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v22.u32[3 - ((ea & 0xF) >> 2)]);
	// lfs f0,-16(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,64(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 64, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E26878"))) PPC_WEAK_FUNC(sub_82E26878);
PPC_FUNC_IMPL(__imp__sub_82E26878) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7668
	ctx.lr = 0x82E26880;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// li r26,0
	ctx.r26.s64 = 0;
	// addi r27,r4,24
	ctx.r27.s64 = ctx.r4.s64 + 24;
	// addi r24,r11,23020
	ctx.r24.s64 = ctx.r11.s64 + 23020;
loc_82E268AC:
	// lwz r9,0(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lwz r4,12(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// addi r8,r4,68
	ctx.r8.s64 = ctx.r4.s64 + 68;
	// lwz r11,68(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 68);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82e26970
	if (!ctx.cr6.eq) goto loc_82E26970;
	// lwz r7,16(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// lvx128 v0,r0,r30
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r30.u32) & ~0xF), VectorMaskL));
	// lvx128 v13,r0,r4
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r4.u32) & ~0xF), VectorMaskL));
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r10,r31,4
	ctx.r10.s64 = ctx.r31.s64 + 4;
	// lvx128 v12,r0,r7
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((ctx.r7.u32) & ~0xF), VectorMaskL));
	// vsubfp v11,v0,v12
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v11.f32, _mm_sub_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v12.f32)));
	// vmsum3fp128 v10,v13,v11
	_mm_store_ps(ctx.v10.f32, _mm_dp_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v11.f32), 0xEF));
	// stvewx v10,r0,r6
	ea = (ctx.r6.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v10.u32[3 - ((ea & 0xF) >> 2)]);
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,0(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x82e26910
	if (!ctx.cr6.gt) goto loc_82E26910;
	// lfs f13,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x82e26928
	if (!ctx.cr6.lt) goto loc_82E26928;
	// stfs f0,0(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// b 0x82e26928
	goto loc_82E26928;
loc_82E26910:
	// lfs f12,0(r24)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fadds f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f12.f64));
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x82e26924
	if (!ctx.cr6.gt) goto loc_82E26924;
	// stfs f0,0(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
loc_82E26924:
	// li r11,2
	ctx.r11.s64 = 2;
loc_82E26928:
	// lfs f0,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,0(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x82e2693c
	if (ctx.cr6.lt) goto loc_82E2693C;
	// li r11,4
	ctx.r11.s64 = 4;
loc_82E2693C:
	// stw r11,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r11.u32);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82e26968
	if (!ctx.cr6.eq) goto loc_82E26968;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e26878
	ctx.lr = 0x82E2695C;
	sub_82E26878(ctx, base);
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// beq cr6,0x82e269a8
	if (ctx.cr6.eq) goto loc_82E269A8;
	// b 0x82e26990
	goto loc_82E26990;
loc_82E26968:
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x82e269a4
	if (ctx.cr6.eq) goto loc_82E269A4;
loc_82E26970:
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x82e26990
	if (!ctx.cr6.eq) goto loc_82E26990;
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// stw r9,48(r11)
	PPC_STORE_U32(ctx.r11.u32 + 48, ctx.r9.u32);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// stw r10,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r10.u32);
	// stw r9,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r9.u32);
loc_82E26990:
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// addi r27,r27,16
	ctx.r27.s64 = ctx.r27.s64 + 16;
	// cmpwi cr6,r26,3
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 3, ctx.xer);
	// blt cr6,0x82e268ac
	if (ctx.cr6.lt) goto loc_82E268AC;
	// b 0x82e269a8
	goto loc_82E269A8;
loc_82E269A4:
	// li r3,2
	ctx.r3.s64 = 2;
loc_82E269A8:
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// lfs f0,28856(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 28856);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,64(r25)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r25.u32 + 64, temp.u32);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmpwi cr6,r11,100
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 100, ctx.xer);
	// blt cr6,0x82e269cc
	if (ctx.cr6.lt) goto loc_82E269CC;
	// li r3,2
	ctx.r3.s64 = 2;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82fa76b8
	__restgprlr_24(ctx, base);
	return;
loc_82E269CC:
	// addi r11,r11,888
	ctx.r11.s64 = ctx.r11.s64 + 888;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r25,r10,r31
	PPC_STORE_U32(ctx.r10.u32 + ctx.r31.u32, ctx.r25.u32);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// stw r9,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r9.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82fa76b8
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E269EC"))) PPC_WEAK_FUNC(sub_82E269EC);
PPC_FUNC_IMPL(__imp__sub_82E269EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E269F0"))) PPC_WEAK_FUNC(sub_82E269F0);
PPC_FUNC_IMPL(__imp__sub_82E269F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7660
	ctx.lr = 0x82E269F8;
	__savegprlr_22(ctx, base);
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// li r25,0
	ctx.r25.s64 = 0;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// mr r9,r25
	ctx.r9.u64 = ctx.r25.u64;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// beq cr6,0x82e26a54
	if (ctx.cr6.eq) goto loc_82E26A54;
	// addi r7,r10,889
	ctx.r7.s64 = ctx.r10.s64 + 889;
	// addi r8,r1,-496
	ctx.r8.s64 = ctx.r1.s64 + -496;
	// rlwinm r31,r7,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r7,r8,-4
	ctx.r7.s64 = ctx.r8.s64 + -4;
	// add r8,r31,r3
	ctx.r8.u64 = ctx.r31.u64 + ctx.r3.u64;
loc_82E26A28:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x82e26a54
	if (ctx.cr6.lt) goto loc_82E26A54;
	// lwzu r31,-4(r8)
	ea = -4 + ctx.r8.u32;
	ctx.r31.u64 = PPC_LOAD_U32(ea);
	ctx.r8.u32 = ea;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r30,12(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// addi r30,r30,-1
	ctx.r30.s64 = ctx.r30.s64 + -1;
	// stwu r31,4(r7)
	ea = 4 + ctx.r7.u32;
	PPC_STORE_U32(ea, ctx.r31.u32);
	ctx.r7.u32 = ea;
	// stw r30,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r30.u32);
	// bne 0x82e26a28
	if (!ctx.cr0.eq) goto loc_82E26A28;
loc_82E26A54:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82e26aa0
	if (!ctx.cr6.gt) goto loc_82E26AA0;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// addi r10,r1,-496
	ctx.r10.s64 = ctx.r1.s64 + -496;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lwz r10,16(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r11,r10,r8
	ctx.r11.u64 = ctx.r10.u64 + ctx.r8.u64;
	// addi r9,r9,-4
	ctx.r9.s64 = ctx.r9.s64 + -4;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
loc_82E26A84:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// addi r11,r11,80
	ctx.r11.s64 = ctx.r11.s64 + 80;
	// add r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 + ctx.r3.u64;
	// addi r10,r10,3952
	ctx.r10.s64 = ctx.r10.s64 + 3952;
	// stwu r10,4(r9)
	ea = 4 + ctx.r9.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r9.u32 = ea;
	// bdnz 0x82e26a84
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82E26A84;
	// stw r7,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r7.u32);
loc_82E26AA0:
	// mr r7,r5
	ctx.r7.u64 = ctx.r5.u64;
	// mr r9,r25
	ctx.r9.u64 = ctx.r25.u64;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x82e26bfc
	if (!ctx.cr6.gt) goto loc_82E26BFC;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r26,-496(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + -496);
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// addi r29,r1,-492
	ctx.r29.s64 = ctx.r1.s64 + -492;
	// addi r27,r11,22016
	ctx.r27.s64 = ctx.r11.s64 + 22016;
	// lfs f0,5184(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5184);
	ctx.f0.f64 = double(temp.f32);
loc_82E26AC8:
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82e26c64
	if (ctx.cr6.eq) goto loc_82E26C64;
	// addi r30,r9,1
	ctx.r30.s64 = ctx.r9.s64 + 1;
	// lwz r11,-4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -4);
	// cmpw cr6,r30,r4
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r4.s32, ctx.xer);
	// bge cr6,0x82e26ae8
	if (!ctx.cr6.lt) goto loc_82E26AE8;
	// lwz r31,0(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// b 0x82e26aec
	goto loc_82E26AEC;
loc_82E26AE8:
	// mr r31,r26
	ctx.r31.u64 = ctx.r26.u64;
loc_82E26AEC:
	// addi r9,r11,48
	ctx.r9.s64 = ctx.r11.s64 + 48;
	// stw r11,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r11.u32);
	// addi r8,r11,16
	ctx.r8.s64 = ctx.r11.s64 + 16;
	// stw r11,44(r11)
	PPC_STORE_U32(ctx.r11.u32 + 44, ctx.r11.u32);
	// addi r28,r11,32
	ctx.r28.s64 = ctx.r11.s64 + 32;
	// stw r11,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r11.u32);
	// stw r9,36(r11)
	PPC_STORE_U32(ctx.r11.u32 + 36, ctx.r9.u32);
	// addi r24,r31,32
	ctx.r24.s64 = ctx.r31.s64 + 32;
	// stw r8,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r8.u32);
	// addi r23,r1,-508
	ctx.r23.s64 = ctx.r1.s64 + -508;
	// stw r28,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r28.u32);
	// addi r10,r7,4
	ctx.r10.s64 = ctx.r7.s64 + 4;
	// lwz r28,4(r7)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// lwz r28,0(r28)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r22,0(r7)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// stw r22,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r22.u32);
	// stw r6,48(r11)
	PPC_STORE_U32(ctx.r11.u32 + 48, ctx.r6.u32);
	// stw r28,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r28.u32);
	// stw r8,8(r7)
	PPC_STORE_U32(ctx.r7.u32 + 8, ctx.r8.u32);
	// stw r7,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r7.u32);
	// stw r9,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r9.u32);
	// stw r24,56(r11)
	PPC_STORE_U32(ctx.r11.u32 + 56, ctx.r24.u32);
	// lvx128 v13,r0,r6
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r6.u32) & ~0xF), VectorMaskL));
	// lvx128 v0,r0,r22
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r22.u32) & ~0xF), VectorMaskL));
	// lvx128 v5,r0,r28
	simd::store_shuffled(ctx.v5, simd::load_and_shuffle(base + ((ctx.r28.u32) & ~0xF), VectorMaskL));
	// vsubfp v11,v5,v0
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v11.f32, _mm_sub_ps(_mm_load_ps(ctx.v5.f32), _mm_load_ps(ctx.v0.f32)));
	// vsubfp v12,v0,v13
	_mm_store_ps(ctx.v12.f32, _mm_sub_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v13.f32)));
	// vpermwi128 v8,v11,135
	_mm_store_si128((__m128i*)ctx.v8.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v11.u32), 0x78));
	// vpermwi128 v7,v11,99
	_mm_store_si128((__m128i*)ctx.v7.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v11.u32), 0x9C));
	// vpermwi128 v10,v12,99
	_mm_store_si128((__m128i*)ctx.v10.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v12.u32), 0x9C));
	// vpermwi128 v9,v12,135
	_mm_store_si128((__m128i*)ctx.v9.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v12.u32), 0x78));
	// vmulfp128 v6,v8,v10
	_mm_store_ps(ctx.v6.f32, _mm_mul_ps(_mm_load_ps(ctx.v8.f32), _mm_load_ps(ctx.v10.f32)));
	// vmulfp128 v4,v7,v9
	_mm_store_ps(ctx.v4.f32, _mm_mul_ps(_mm_load_ps(ctx.v7.f32), _mm_load_ps(ctx.v9.f32)));
	// vsubfp v6,v4,v6
	_mm_store_ps(ctx.v6.f32, _mm_sub_ps(_mm_load_ps(ctx.v4.f32), _mm_load_ps(ctx.v6.f32)));
	// vmsum3fp128 v12,v6,v6
	_mm_store_ps(ctx.v12.f32, _mm_dp_ps(_mm_load_ps(ctx.v6.f32), _mm_load_ps(ctx.v6.f32), 0xEF));
	// stvewx v12,r0,r23
	ea = (ctx.r23.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v12.u32[3 - ((ea & 0xF) >> 2)]);
	// lfs f13,-508(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -508);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// beq cr6,0x82e26c64
	if (ctx.cr6.eq) goto loc_82E26C64;
	// vrsqrtefp v0,v12
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v0.f32, _mm_div_ps(_mm_set1_ps(1), _mm_sqrt_ps(_mm_load_ps(ctx.v12.f32))));
	// lvx128 v13,r0,r27
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r27.u32) & ~0xF), VectorMaskL));
	// vmulfp128 v9,v12,v13
	_mm_store_ps(ctx.v9.f32, _mm_mul_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v13.f32)));
	// vspltisw v11,0
	_mm_store_si128((__m128i*)ctx.v11.u32, _mm_set1_epi32(int(0x0)));
	// addi r8,r1,-512
	ctx.r8.s64 = ctx.r1.s64 + -512;
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// vcmpeqfp v8,v11,v12
	_mm_store_ps(ctx.v8.f32, _mm_cmpeq_ps(_mm_load_ps(ctx.v11.f32), _mm_load_ps(ctx.v12.f32)));
	// vor v12,v11,v11
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_load_si128((__m128i*)ctx.v11.u8));
	// cmpw cr6,r30,r4
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r4.s32, ctx.xer);
	// vmulfp128 v10,v0,v0
	_mm_store_ps(ctx.v10.f32, _mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v0.f32)));
	// vnmsubfp v7,v9,v10,v13
	_mm_store_ps(ctx.v7.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(ctx.v9.f32), _mm_load_ps(ctx.v10.f32)), _mm_load_ps(ctx.v13.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// vmaddfp v0,v0,v7,v0
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v7.f32)), _mm_load_ps(ctx.v0.f32)));
	// vmulfp128 v11,v0,v0
	_mm_store_ps(ctx.v11.f32, _mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v0.f32)));
	// vnmsubfp v13,v9,v11,v13
	_mm_store_ps(ctx.v13.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(ctx.v9.f32), _mm_load_ps(ctx.v11.f32)), _mm_load_ps(ctx.v13.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// vmaddfp v0,v0,v13,v0
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v13.f32)), _mm_load_ps(ctx.v0.f32)));
	// vsel v13,v0,v12,v8
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v8.u8), _mm_load_si128((__m128i*)ctx.v0.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v8.u8), _mm_load_si128((__m128i*)ctx.v12.u8))));
	// vspltw v10,v13,0
	_mm_store_si128((__m128i*)ctx.v10.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v13.u32), 0xFF));
	// vmulfp128 v9,v6,v10
	_mm_store_ps(ctx.v9.f32, _mm_mul_ps(_mm_load_ps(ctx.v6.f32), _mm_load_ps(ctx.v10.f32)));
	// vmsum3fp128 v8,v9,v5
	_mm_store_ps(ctx.v8.f32, _mm_dp_ps(_mm_load_ps(ctx.v9.f32), _mm_load_ps(ctx.v5.f32), 0xEF));
	// stvewx v8,r0,r8
	ea = (ctx.r8.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v8.u32[3 - ((ea & 0xF) >> 2)]);
	// lfs f13,-512(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -512);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,64(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 64, temp.u32);
	// stvx128 v9,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v9.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r11,0(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// lwz r7,48(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// stw r25,48(r11)
	PPC_STORE_U32(ctx.r11.u32 + 48, ctx.r25.u32);
	// blt cr6,0x82e26ac8
	if (ctx.cr6.lt) goto loc_82E26AC8;
loc_82E26BFC:
	// lwz r10,16(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x82e26c24
	if (!ctx.cr6.gt) goto loc_82E26C24;
	// addi r10,r3,3940
	ctx.r10.s64 = ctx.r3.s64 + 3940;
loc_82E26C10:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stwu r25,80(r10)
	ea = 80 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r25.u32);
	ctx.r10.u32 = ea;
	// lwz r9,16(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x82e26c10
	if (ctx.cr6.lt) goto loc_82E26C10;
loc_82E26C24:
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x82e26c4c
	if (!ctx.cr6.gt) goto loc_82E26C4C;
	// addi r10,r3,16
	ctx.r10.s64 = ctx.r3.s64 + 16;
loc_82E26C38:
	// stwu r25,64(r10)
	ea = 64 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r25.u32);
	ctx.r10.u32 = ea;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x82e26c38
	if (ctx.cr6.lt) goto loc_82E26C38;
loc_82E26C4C:
	// subf r11,r5,r7
	ctx.r11.s64 = ctx.r7.s64 - ctx.r5.s64;
	// li r10,2
	ctx.r10.s64 = 2;
	// subfic r9,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r11.s64;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r3,r7,r10
	ctx.r3.u64 = ctx.r7.u64 & ctx.r10.u64;
	// b 0x82fa76b0
	__restgprlr_22(ctx, base);
	return;
loc_82E26C64:
	// li r3,2
	ctx.r3.s64 = 2;
	// b 0x82fa76b0
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E26C6C"))) PPC_WEAK_FUNC(sub_82E26C6C);
PPC_FUNC_IMPL(__imp__sub_82E26C6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E26C70"))) PPC_WEAK_FUNC(sub_82E26C70);
PPC_FUNC_IMPL(__imp__sub_82E26C70) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// addi r6,r3,3952
	ctx.r6.s64 = ctx.r3.s64 + 3952;
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// addi r5,r3,4272
	ctx.r5.s64 = ctx.r3.s64 + 4272;
	// li r10,4
	ctx.r10.s64 = 4;
	// addi r11,r11,23032
	ctx.r11.s64 = ctx.r11.s64 + 23032;
	// stw r10,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r10.u32);
	// mr r9,r6
	ctx.r9.u64 = ctx.r6.u64;
	// cmplw cr6,r6,r5
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r5.u32, ctx.xer);
	// beq cr6,0x82e26d1c
	if (ctx.cr6.eq) goto loc_82E26D1C;
	// addi r10,r11,-4
	ctx.r10.s64 = ctx.r11.s64 + -4;
	// li r4,0
	ctx.r4.s64 = 0;
loc_82E26CA0:
	// addi r11,r9,16
	ctx.r11.s64 = ctx.r9.s64 + 16;
	// stw r4,68(r9)
	PPC_STORE_U32(ctx.r9.u32 + 68, ctx.r4.u32);
	// addi r7,r9,32
	ctx.r7.s64 = ctx.r9.s64 + 32;
	// addi r31,r9,48
	ctx.r31.s64 = ctx.r9.s64 + 48;
	// stw r11,52(r9)
	PPC_STORE_U32(ctx.r9.u32 + 52, ctx.r11.u32);
	// addi r8,r9,64
	ctx.r8.s64 = ctx.r9.s64 + 64;
	// stw r7,20(r9)
	PPC_STORE_U32(ctx.r9.u32 + 20, ctx.r7.u32);
	// stw r31,36(r9)
	PPC_STORE_U32(ctx.r9.u32 + 36, ctx.r31.u32);
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// bge cr6,0x82e26d10
	if (!ctx.cr6.lt) goto loc_82E26D10;
	// subf r8,r11,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r11.s64;
	// addi r11,r11,-8
	ctx.r11.s64 = ctx.r11.s64 + -8;
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// rlwinm r8,r8,28,4,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 28) & 0xFFFFFFF;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_82E26CE0:
	// stw r9,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r9.u32);
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r8,r8,r3
	ctx.r8.u64 = ctx.r8.u64 + ctx.r3.u64;
	// addi r8,r8,32
	ctx.r8.s64 = ctx.r8.s64 + 32;
	// stw r8,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r8.u32);
	// lwz r7,8(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lwzu r8,12(r10)
	ea = 12 + ctx.r10.u32;
	ctx.r8.u64 = PPC_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// add r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 + ctx.r8.u64;
	// add r8,r8,r3
	ctx.r8.u64 = ctx.r8.u64 + ctx.r3.u64;
	// addi r8,r8,3968
	ctx.r8.s64 = ctx.r8.s64 + 3968;
	// stwu r8,16(r11)
	ea = 16 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x82e26ce0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82E26CE0;
loc_82E26D10:
	// addi r9,r9,80
	ctx.r9.s64 = ctx.r9.s64 + 80;
	// cmplw cr6,r9,r5
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r5.u32, ctx.xer);
	// bne cr6,0x82e26ca0
	if (!ctx.cr6.eq) goto loc_82E26CA0;
loc_82E26D1C:
	// lwz r7,4208(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4208);
	// lis r10,-32237
	ctx.r10.s64 = -2112684032;
	// lwz r5,4224(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4224);
	// addi r11,r3,4192
	ctx.r11.s64 = ctx.r3.s64 + 4192;
	// lwz r4,4240(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4240);
	// addi r8,r10,22016
	ctx.r8.s64 = ctx.r10.s64 + 22016;
	// vspltisw v8,0
	_mm_store_si128((__m128i*)ctx.v8.u32, _mm_set1_epi32(int(0x0)));
	// addi r31,r1,-16
	ctx.r31.s64 = ctx.r1.s64 + -16;
	// addi r10,r3,96
	ctx.r10.s64 = ctx.r3.s64 + 96;
	// lvx128 v0,r0,r7
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r7.u32) & ~0xF), VectorMaskL));
	// addi r9,r3,32
	ctx.r9.s64 = ctx.r3.s64 + 32;
	// lvx128 v13,r0,r5
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r5.u32) & ~0xF), VectorMaskL));
	// addi r5,r1,-16
	ctx.r5.s64 = ctx.r1.s64 + -16;
	// lvx128 v12,r0,r4
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((ctx.r4.u32) & ~0xF), VectorMaskL));
	// vsubfp v11,v0,v13
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v11.f32, _mm_sub_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v13.f32)));
	// vsubfp v10,v13,v12
	_mm_store_ps(ctx.v10.f32, _mm_sub_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v12.f32)));
	// lis r4,-32256
	ctx.r4.s64 = -2113929216;
	// vpermwi128 v7,v11,135
	_mm_store_si128((__m128i*)ctx.v7.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v11.u32), 0x78));
	// vpermwi128 v6,v10,99
	_mm_store_si128((__m128i*)ctx.v6.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v10.u32), 0x9C));
	// vpermwi128 v5,v10,135
	_mm_store_si128((__m128i*)ctx.v5.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v10.u32), 0x78));
	// vpermwi128 v4,v11,99
	_mm_store_si128((__m128i*)ctx.v4.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v11.u32), 0x9C));
	// vmulfp128 v3,v7,v6
	_mm_store_ps(ctx.v3.f32, _mm_mul_ps(_mm_load_ps(ctx.v7.f32), _mm_load_ps(ctx.v6.f32)));
	// vmulfp128 v2,v4,v5
	_mm_store_ps(ctx.v2.f32, _mm_mul_ps(_mm_load_ps(ctx.v4.f32), _mm_load_ps(ctx.v5.f32)));
	// vsubfp v1,v2,v3
	_mm_store_ps(ctx.v1.f32, _mm_sub_ps(_mm_load_ps(ctx.v2.f32), _mm_load_ps(ctx.v3.f32)));
	// vmsum3fp128 v31,v1,v1
	_mm_store_ps(ctx.v31.f32, _mm_dp_ps(_mm_load_ps(ctx.v1.f32), _mm_load_ps(ctx.v1.f32), 0xEF));
	// stvx128 v1,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v1.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v13,r0,r8
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r8.u32) & ~0xF), VectorMaskL));
	// vrsqrtefp v0,v31
	_mm_store_ps(ctx.v0.f32, _mm_div_ps(_mm_set1_ps(1), _mm_sqrt_ps(_mm_load_ps(ctx.v31.f32))));
	// vmulfp128 v10,v31,v13
	_mm_store_ps(ctx.v10.f32, _mm_mul_ps(_mm_load_ps(ctx.v31.f32), _mm_load_ps(ctx.v13.f32)));
	// vmulfp128 v11,v0,v0
	_mm_store_ps(ctx.v11.f32, _mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v0.f32)));
	// vcmpeqfp v6,v8,v31
	_mm_store_ps(ctx.v6.f32, _mm_cmpeq_ps(_mm_load_ps(ctx.v8.f32), _mm_load_ps(ctx.v31.f32)));
	// vnmsubfp v7,v10,v11,v13
	_mm_store_ps(ctx.v7.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(ctx.v10.f32), _mm_load_ps(ctx.v11.f32)), _mm_load_ps(ctx.v13.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// vmaddfp v0,v0,v7,v0
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v7.f32)), _mm_load_ps(ctx.v0.f32)));
	// vmulfp128 v12,v0,v0
	_mm_store_ps(ctx.v12.f32, _mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v0.f32)));
	// vnmsubfp v13,v10,v12,v13
	_mm_store_ps(ctx.v13.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(ctx.v10.f32), _mm_load_ps(ctx.v12.f32)), _mm_load_ps(ctx.v13.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// vmaddfp v0,v0,v13,v0
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v13.f32)), _mm_load_ps(ctx.v0.f32)));
	// vsel v13,v0,v8,v6
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v6.u8), _mm_load_si128((__m128i*)ctx.v0.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v6.u8), _mm_load_si128((__m128i*)ctx.v8.u8))));
	// vspltw v30,v13,0
	_mm_store_si128((__m128i*)ctx.v30.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v13.u32), 0xFF));
	// vmulfp128 v29,v1,v30
	_mm_store_ps(ctx.v29.f32, _mm_mul_ps(_mm_load_ps(ctx.v1.f32), _mm_load_ps(ctx.v30.f32)));
	// stvx128 v29,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v29.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v28,r0,r7
	simd::store_shuffled(ctx.v28, simd::load_and_shuffle(base + ((ctx.r7.u32) & ~0xF), VectorMaskL));
	// vmsum3fp128 v27,v29,v28
	_mm_store_ps(ctx.v27.f32, _mm_dp_ps(_mm_load_ps(ctx.v29.f32), _mm_load_ps(ctx.v28.f32), 0xEF));
	// stvewx v27,r0,r31
	ea = (ctx.r31.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v27.u32[3 - ((ea & 0xF) >> 2)]);
	// lfs f0,-16(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4256(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4256, temp.u32);
	// lvx128 v26,r0,r11
	simd::store_shuffled(ctx.v26, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// lvx128 v25,r0,r10
	simd::store_shuffled(ctx.v25, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// lvx128 v24,r0,r9
	simd::store_shuffled(ctx.v24, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// vsubfp v23,v24,v25
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v23.f32, _mm_sub_ps(_mm_load_ps(ctx.v24.f32), _mm_load_ps(ctx.v25.f32)));
	// vmsum3fp128 v22,v23,v26
	_mm_store_ps(ctx.v22.f32, _mm_dp_ps(_mm_load_ps(ctx.v23.f32), _mm_load_ps(ctx.v26.f32), 0xEF));
	// stvewx v22,r0,r5
	ea = (ctx.r5.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v22.u32[3 - ((ea & 0xF) >> 2)]);
	// lfs f0,5184(r4)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 5184);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,-16(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x82e26e10
	if (!ctx.cr6.gt) goto loc_82E26E10;
	// stw r10,4128(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4128, ctx.r10.u32);
	// stw r10,4048(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4048, ctx.r10.u32);
	// stw r10,16(r6)
	PPC_STORE_U32(ctx.r6.u32 + 16, ctx.r10.u32);
	// stw r9,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r9.u32);
	// stw r9,4064(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4064, ctx.r9.u32);
	// stw r9,48(r6)
	PPC_STORE_U32(ctx.r6.u32 + 48, ctx.r9.u32);
loc_82E26E10:
	// li r10,4
	ctx.r10.s64 = 4;
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82E26E1C:
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// addi r7,r1,-16
	ctx.r7.s64 = ctx.r1.s64 + -16;
	// lwz r9,32(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lwz r6,48(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// lvx128 v0,r0,r10
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// lvx128 v13,r0,r9
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// lvx128 v11,r0,r6
	simd::store_shuffled(ctx.v11, simd::load_and_shuffle(base + ((ctx.r6.u32) & ~0xF), VectorMaskL));
	// vsubfp v10,v0,v13
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v10.f32, _mm_sub_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v13.f32)));
	// vsubfp v9,v13,v11
	_mm_store_ps(ctx.v9.f32, _mm_sub_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v11.f32)));
	// vpermwi128 v7,v10,135
	_mm_store_si128((__m128i*)ctx.v7.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v10.u32), 0x78));
	// vpermwi128 v6,v9,99
	_mm_store_si128((__m128i*)ctx.v6.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v9.u32), 0x9C));
	// vpermwi128 v5,v9,135
	_mm_store_si128((__m128i*)ctx.v5.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v9.u32), 0x78));
	// vpermwi128 v4,v10,99
	_mm_store_si128((__m128i*)ctx.v4.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v10.u32), 0x9C));
	// vmulfp128 v3,v7,v6
	_mm_store_ps(ctx.v3.f32, _mm_mul_ps(_mm_load_ps(ctx.v7.f32), _mm_load_ps(ctx.v6.f32)));
	// vmulfp128 v2,v4,v5
	_mm_store_ps(ctx.v2.f32, _mm_mul_ps(_mm_load_ps(ctx.v4.f32), _mm_load_ps(ctx.v5.f32)));
	// vsubfp v1,v2,v3
	_mm_store_ps(ctx.v1.f32, _mm_sub_ps(_mm_load_ps(ctx.v2.f32), _mm_load_ps(ctx.v3.f32)));
	// vmsum3fp128 v31,v1,v1
	_mm_store_ps(ctx.v31.f32, _mm_dp_ps(_mm_load_ps(ctx.v1.f32), _mm_load_ps(ctx.v1.f32), 0xEF));
	// stvx128 v1,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v1.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v13,r0,r8
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r8.u32) & ~0xF), VectorMaskL));
	// vrsqrtefp v0,v31
	_mm_store_ps(ctx.v0.f32, _mm_div_ps(_mm_set1_ps(1), _mm_sqrt_ps(_mm_load_ps(ctx.v31.f32))));
	// vmulfp128 v9,v31,v13
	_mm_store_ps(ctx.v9.f32, _mm_mul_ps(_mm_load_ps(ctx.v31.f32), _mm_load_ps(ctx.v13.f32)));
	// vmulfp128 v10,v0,v0
	_mm_store_ps(ctx.v10.f32, _mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v0.f32)));
	// vcmpeqfp v7,v8,v31
	_mm_store_ps(ctx.v7.f32, _mm_cmpeq_ps(_mm_load_ps(ctx.v8.f32), _mm_load_ps(ctx.v31.f32)));
	// vnmsubfp v6,v9,v10,v13
	_mm_store_ps(ctx.v6.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(ctx.v9.f32), _mm_load_ps(ctx.v10.f32)), _mm_load_ps(ctx.v13.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// vmaddfp v0,v0,v6,v0
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v6.f32)), _mm_load_ps(ctx.v0.f32)));
	// vmulfp128 v11,v0,v0
	_mm_store_ps(ctx.v11.f32, _mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v0.f32)));
	// vnmsubfp v13,v9,v11,v13
	_mm_store_ps(ctx.v13.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(ctx.v9.f32), _mm_load_ps(ctx.v11.f32)), _mm_load_ps(ctx.v13.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// vmaddfp v0,v0,v13,v0
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v13.f32)), _mm_load_ps(ctx.v0.f32)));
	// vsel v13,v0,v8,v7
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v7.u8), _mm_load_si128((__m128i*)ctx.v0.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v7.u8), _mm_load_si128((__m128i*)ctx.v8.u8))));
	// vspltw v30,v13,0
	_mm_store_si128((__m128i*)ctx.v30.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v13.u32), 0xFF));
	// vmulfp128 v29,v1,v30
	_mm_store_ps(ctx.v29.f32, _mm_mul_ps(_mm_load_ps(ctx.v1.f32), _mm_load_ps(ctx.v30.f32)));
	// stvx128 v29,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v29.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v28,r0,r10
	simd::store_shuffled(ctx.v28, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// vmsum3fp128 v27,v29,v28
	_mm_store_ps(ctx.v27.f32, _mm_dp_ps(_mm_load_ps(ctx.v29.f32), _mm_load_ps(ctx.v28.f32), 0xEF));
	// stvewx v27,r0,r7
	ea = (ctx.r7.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v27.u32[3 - ((ea & 0xF) >> 2)]);
	// lfs f0,-16(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,64(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 64, temp.u32);
	// addi r11,r11,80
	ctx.r11.s64 = ctx.r11.s64 + 80;
	// bdnz 0x82e26e1c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82E26E1C;
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E26EC0"))) PPC_WEAK_FUNC(sub_82E26EC0);
PPC_FUNC_IMPL(__imp__sub_82E26EC0) {
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
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x82e27250
	ctx.lr = 0x82E26EDC;
	sub_82E27250(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r8,-32236
	ctx.r8.s64 = -2112618496;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// lfs f11,-19516(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -19516);
	ctx.f11.f64 = double(temp.f32);
	// li r7,0
	ctx.r7.s64 = 0;
	// lfs f12,5184(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5184);
	ctx.f12.f64 = double(temp.f32);
	// li r6,3
	ctx.r6.s64 = 3;
	// lfs f13,23176(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 23176);
	ctx.f13.f64 = double(temp.f32);
loc_82E26F04:
	// extsb r11,r7
	ctx.r11.s64 = ctx.r7.s8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82e26ff0
	if (!ctx.cr6.eq) goto loc_82E26FF0;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r6,68(r3)
	PPC_STORE_U32(ctx.r3.u32 + 68, ctx.r6.u32);
	// addi r11,r3,16
	ctx.r11.s64 = ctx.r3.s64 + 16;
loc_82E26F1C:
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82e26fb4
	if (ctx.cr6.eq) goto loc_82E26FB4;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r30,r1,84
	ctx.r30.s64 = ctx.r1.s64 + 84;
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lvx128 v0,r0,r4
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v13,r0,r10
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// vsubfp v12,v13,v0
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v12.f32, _mm_sub_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v0.f32)));
	// vmsum3fp128 v11,v12,v12
	_mm_store_ps(ctx.v11.f32, _mm_dp_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v12.f32), 0xEF));
	// vpermwi128 v10,v12,135
	_mm_store_si128((__m128i*)ctx.v10.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v12.u32), 0x78));
	// vpermwi128 v9,v12,99
	_mm_store_si128((__m128i*)ctx.v9.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v12.u32), 0x9C));
	// stvewx v11,r0,r5
	ea = (ctx.r5.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v11.u32[3 - ((ea & 0xF) >> 2)]);
	// lvx128 v8,r0,r3
	simd::store_shuffled(ctx.v8, simd::load_and_shuffle(base + ((ctx.r3.u32) & ~0xF), VectorMaskL));
	// vpermwi128 v7,v8,99
	_mm_store_si128((__m128i*)ctx.v7.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v8.u32), 0x9C));
	// vpermwi128 v6,v8,135
	_mm_store_si128((__m128i*)ctx.v6.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v8.u32), 0x78));
	// vmulfp128 v5,v10,v7
	_mm_store_ps(ctx.v5.f32, _mm_mul_ps(_mm_load_ps(ctx.v10.f32), _mm_load_ps(ctx.v7.f32)));
	// vmulfp128 v4,v9,v6
	_mm_store_ps(ctx.v4.f32, _mm_mul_ps(_mm_load_ps(ctx.v9.f32), _mm_load_ps(ctx.v6.f32)));
	// vsubfp v3,v4,v5
	_mm_store_ps(ctx.v3.f32, _mm_sub_ps(_mm_load_ps(ctx.v4.f32), _mm_load_ps(ctx.v5.f32)));
	// vmsum3fp128 v2,v3,v0
	_mm_store_ps(ctx.v2.f32, _mm_dp_ps(_mm_load_ps(ctx.v3.f32), _mm_load_ps(ctx.v0.f32), 0xEF));
	// stvewx v2,r0,r30
	ea = (ctx.r30.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v2.u32[3 - ((ea & 0xF) >> 2)]);
	// lfs f10,80(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f10.f64 = double(temp.f32);
	// lfs f0,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
	// fabs f9,f0
	ctx.f9.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// fmuls f8,f10,f13
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f13.f64));
	// fmuls f7,f9,f0
	ctx.f7.f64 = double(float(ctx.f9.f64 * ctx.f0.f64));
	// fcmpu cr6,f7,f8
	ctx.cr6.compare(ctx.f7.f64, ctx.f8.f64);
	// bge cr6,0x82e26fb4
	if (!ctx.cr6.lt) goto loc_82E26FB4;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lfs f0,64(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// lwz r10,12(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// ble cr6,0x82e26fc8
	if (!ctx.cr6.gt) goto loc_82E26FC8;
	// fmuls f0,f0,f11
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// lfs f10,64(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 64);
	ctx.f10.f64 = double(temp.f32);
	// fcmpu cr6,f10,f0
	ctx.cr6.compare(ctx.f10.f64, ctx.f0.f64);
	// bge cr6,0x82e26fc8
	if (!ctx.cr6.lt) goto loc_82E26FC8;
loc_82E26FB4:
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// cmpwi cr6,r8,3
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 3, ctx.xer);
	// blt cr6,0x82e26f1c
	if (ctx.cr6.lt) goto loc_82E26F1C;
	// b 0x82e26fe8
	goto loc_82E26FE8;
loc_82E26FC8:
	// lwz r9,68(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 68);
	// rlwinm r11,r8,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r9,r9,-3
	ctx.r9.s64 = ctx.r9.s64 + -3;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// cntlzw r7,r9
	ctx.r7.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// lwz r9,24(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// rlwinm r7,r7,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
loc_82E26FE8:
	// cmpwi cr6,r8,3
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 3, ctx.xer);
	// bne cr6,0x82e26f04
	if (!ctx.cr6.eq) goto loc_82E26F04;
loc_82E26FF0:
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

__attribute__((alias("__imp__sub_82E27008"))) PPC_WEAK_FUNC(sub_82E27008);
PPC_FUNC_IMPL(__imp__sub_82E27008) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lwz r10,16(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// addic. r31,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r31.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// lfs f7,5184(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 5184);
	ctx.f7.f64 = double(temp.f32);
	// lfs f5,28856(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 28856);
	ctx.f5.f64 = double(temp.f32);
	// stfs f7,-28(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + -28, temp.u32);
	// stfs f7,-24(r1)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r1.u32 + -24, temp.u32);
	// blt 0x82e271b4
	if (ctx.cr0.lt) goto loc_82E271B4;
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r10,-32233
	ctx.r10.s64 = -2112421888;
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lfs f9,24436(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 24436);
	ctx.f9.f64 = double(temp.f32);
	// lis r3,-32256
	ctx.r3.s64 = -2113929216;
	// addi r8,r11,4016
	ctx.r8.s64 = ctx.r11.s64 + 4016;
	// lfs f6,-25140(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -25140);
	ctx.f6.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f4,21492(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 21492);
	ctx.f4.f64 = double(temp.f32);
	// lfs f8,11556(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 11556);
	ctx.f8.f64 = double(temp.f32);
loc_82E27064:
	// lfs f0,0(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// addi r9,r8,-64
	ctx.r9.s64 = ctx.r8.s64 + -64;
	// fmuls f13,f0,f0
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// fcmpu cr6,f13,f5
	ctx.cr6.compare(ctx.f13.f64, ctx.f5.f64);
	// bgt cr6,0x82e271a8
	if (ctx.cr6.gt) goto loc_82E271A8;
	// lwz r11,16(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// blt cr6,0x82e271a8
	if (ctx.cr6.lt) goto loc_82E271A8;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// addi r11,r11,3952
	ctx.r11.s64 = ctx.r11.s64 + 3952;
loc_82E270A0:
	// lfs f0,64(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f0,f0
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// fcmpu cr6,f13,f5
	ctx.cr6.compare(ctx.f13.f64, ctx.f5.f64);
	// bgt cr6,0x82e271a0
	if (ctx.cr6.gt) goto loc_82E271A0;
	// lvx128 v0,r0,r11
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// addi r10,r1,-32
	ctx.r10.s64 = ctx.r1.s64 + -32;
	// lvx128 v13,r0,r9
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// vmsum3fp128 v12,v13,v0
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v12.f32, _mm_dp_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v0.f32), 0xEF));
	// stvewx v12,r0,r10
	ea = (ctx.r10.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v12.u32[3 - ((ea & 0xF) >> 2)]);
	// lfs f0,-32(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -32);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f4
	ctx.cr6.compare(ctx.f0.f64, ctx.f4.f64);
	// blt cr6,0x82e271a0
	if (ctx.cr6.lt) goto loc_82E271A0;
	// lfs f11,0(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,64(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	ctx.f10.f64 = double(temp.f32);
	// fnmsubs f13,f0,f10,f11
	ctx.f13.f64 = double(float(-(ctx.f0.f64 * ctx.f10.f64 - ctx.f11.f64)));
	// fnmsubs f12,f0,f11,f10
	ctx.f12.f64 = double(float(-(ctx.f0.f64 * ctx.f11.f64 - ctx.f10.f64)));
	// fcmpu cr6,f13,f6
	ctx.cr6.compare(ctx.f13.f64, ctx.f6.f64);
	// ble cr6,0x82e2715c
	if (!ctx.cr6.gt) goto loc_82E2715C;
	// fcmpu cr6,f12,f6
	ctx.cr6.compare(ctx.f12.f64, ctx.f6.f64);
	// ble cr6,0x82e27144
	if (!ctx.cr6.gt) goto loc_82E27144;
	// fcmpu cr6,f13,f12
	ctx.cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// ble cr6,0x82e27114
	if (!ctx.cr6.gt) goto loc_82E27114;
	// fdivs f3,f12,f13
	ctx.f3.f64 = double(float(ctx.f12.f64 / ctx.f13.f64));
	// fmadds f2,f0,f3,f9
	ctx.f2.f64 = double(float(ctx.f0.f64 * ctx.f3.f64 + ctx.f9.f64));
	// fdivs f13,f9,f2
	ctx.f13.f64 = double(float(ctx.f9.f64 / ctx.f2.f64));
	// fdivs f10,f11,f2
	ctx.f10.f64 = double(float(ctx.f11.f64 / ctx.f2.f64));
	// fmuls f12,f13,f3
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f3.f64));
	// fmuls f11,f10,f3
	ctx.f11.f64 = double(float(ctx.f10.f64 * ctx.f3.f64));
	// b 0x82e2712c
	goto loc_82E2712C;
loc_82E27114:
	// fdivs f3,f13,f12
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = double(float(ctx.f13.f64 / ctx.f12.f64));
	// fmadds f2,f0,f3,f9
	ctx.f2.f64 = double(float(ctx.f0.f64 * ctx.f3.f64 + ctx.f9.f64));
	// fdivs f12,f9,f2
	ctx.f12.f64 = double(float(ctx.f9.f64 / ctx.f2.f64));
	// fdivs f11,f10,f2
	ctx.f11.f64 = double(float(ctx.f10.f64 / ctx.f2.f64));
	// fmuls f13,f3,f12
	ctx.f13.f64 = double(float(ctx.f3.f64 * ctx.f12.f64));
	// fmuls f10,f3,f11
	ctx.f10.f64 = double(float(ctx.f3.f64 * ctx.f11.f64));
loc_82E2712C:
	// fmadds f10,f0,f11,f10
	ctx.fpscr.disableFlushMode();
	ctx.f10.f64 = double(float(ctx.f0.f64 * ctx.f11.f64 + ctx.f10.f64));
	// fnmsubs f3,f0,f0,f9
	ctx.f3.f64 = double(float(-(ctx.f0.f64 * ctx.f0.f64 - ctx.f9.f64)));
	// fmuls f2,f10,f10
	ctx.f2.f64 = double(float(ctx.f10.f64 * ctx.f10.f64));
	// fmuls f1,f3,f11
	ctx.f1.f64 = double(float(ctx.f3.f64 * ctx.f11.f64));
	// fmadds f0,f1,f11,f2
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f11.f64 + ctx.f2.f64));
	// b 0x82e27184
	goto loc_82E27184;
loc_82E27144:
	// fcmpu cr6,f10,f7
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f10.f64, ctx.f7.f64);
	// ble cr6,0x82e27174
	if (!ctx.cr6.gt) goto loc_82E27174;
	// fmr f13,f9
	ctx.f13.f64 = ctx.f9.f64;
	// fmr f12,f7
	ctx.f12.f64 = ctx.f7.f64;
	// fmuls f0,f11,f11
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f11.f64));
	// b 0x82e27184
	goto loc_82E27184;
loc_82E2715C:
	// fcmpu cr6,f11,f6
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f11.f64, ctx.f6.f64);
	// ble cr6,0x82e27174
	if (!ctx.cr6.gt) goto loc_82E27174;
	// fmr f13,f7
	ctx.f13.f64 = ctx.f7.f64;
	// fmr f12,f9
	ctx.f12.f64 = ctx.f9.f64;
	// fmuls f0,f10,f10
	ctx.f0.f64 = double(float(ctx.f10.f64 * ctx.f10.f64));
	// b 0x82e27184
	goto loc_82E27184;
loc_82E27174:
	// fmuls f0,f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// fmr f13,f8
	ctx.f13.f64 = ctx.f8.f64;
	// fmr f12,f8
	ctx.f12.f64 = ctx.f8.f64;
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
loc_82E27184:
	// fcmpu cr6,f0,f5
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f5.f64);
	// bge cr6,0x82e271a0
	if (!ctx.cr6.lt) goto loc_82E271A0;
	// stw r9,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r9.u32);
	// stfs f13,-28(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + -28, temp.u32);
	// stfs f12,-24(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + -24, temp.u32);
	// stw r11,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r11.u32);
	// fmr f5,f0
	ctx.f5.f64 = ctx.f0.f64;
loc_82E271A0:
	// addi r11,r11,-80
	ctx.r11.s64 = ctx.r11.s64 + -80;
	// bdnz 0x82e270a0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82E270A0;
loc_82E271A8:
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r8,r8,-80
	ctx.r8.s64 = ctx.r8.s64 + -80;
	// bge 0x82e27064
	if (!ctx.cr0.lt) goto loc_82E27064;
loc_82E271B4:
	// addi r11,r1,-28
	ctx.r11.s64 = ctx.r1.s64 + -28;
	// lwz r10,0(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// addi r9,r1,-24
	ctx.r9.s64 = ctx.r1.s64 + -24;
	// vspltisw v11,0
	_mm_store_si128((__m128i*)ctx.v11.u32, _mm_set1_epi32(int(0x0)));
	// lis r8,-32237
	ctx.r8.s64 = -2112684032;
	// fneg f0,f5
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = ctx.f5.u64 ^ 0x8000000000000000;
	// addi r6,r8,22016
	ctx.r6.s64 = ctx.r8.s64 + 22016;
	// lvlx v10,0,r11
	temp.u32 = ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v10.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vor v8,v11,v11
	_mm_store_si128((__m128i*)ctx.v8.u8, _mm_load_si128((__m128i*)ctx.v11.u8));
	// vspltw v9,v10,0
	_mm_store_si128((__m128i*)ctx.v9.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v10.u32), 0xFF));
	// lvx128 v7,r0,r10
	simd::store_shuffled(ctx.v7, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// lvlx v6,0,r9
	temp.u32 = ctx.r9.u32;
	_mm_store_si128((__m128i*)ctx.v6.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw v12,v6,0
	_mm_store_si128((__m128i*)ctx.v12.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v6.u32), 0xFF));
	// vmulfp128 v0,v7,v9
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v0.f32, _mm_mul_ps(_mm_load_ps(ctx.v7.f32), _mm_load_ps(ctx.v9.f32)));
	// fsel f13,f0,f7,f5
	ctx.fpscr.disableFlushModeUnconditional();
	ctx.f13.f64 = ctx.f0.f64 >= 0.0 ? ctx.f7.f64 : ctx.f5.f64;
	// stvx128 v0,r0,r5
	_mm_store_si128((__m128i*)(base + ((ctx.r5.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// fsqrts f12,f13
	ctx.f12.f64 = double(float(sqrt(ctx.f13.f64)));
	// lwz r4,0(r7)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// lvx128 v13,r0,r4
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r4.u32) & ~0xF), VectorMaskL));
	// vmaddfp v0,v13,v12,v0
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v12.f32)), _mm_load_ps(ctx.v0.f32)));
	// vmsum3fp128 v5,v0,v0
	_mm_store_ps(ctx.v5.f32, _mm_dp_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v0.f32), 0xEF));
	// stvx128 v0,r0,r5
	_mm_store_si128((__m128i*)(base + ((ctx.r5.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// vrsqrtefp v13,v5
	_mm_store_ps(ctx.v13.f32, _mm_div_ps(_mm_set1_ps(1), _mm_sqrt_ps(_mm_load_ps(ctx.v5.f32))));
	// vcmpeqfp v6,v11,v5
	_mm_store_ps(ctx.v6.f32, _mm_cmpeq_ps(_mm_load_ps(ctx.v11.f32), _mm_load_ps(ctx.v5.f32)));
	// lvx128 v12,r0,r6
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((ctx.r6.u32) & ~0xF), VectorMaskL));
	// vmulfp128 v9,v5,v12
	_mm_store_ps(ctx.v9.f32, _mm_mul_ps(_mm_load_ps(ctx.v5.f32), _mm_load_ps(ctx.v12.f32)));
	// vmulfp128 v10,v13,v13
	_mm_store_ps(ctx.v10.f32, _mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v13.f32)));
	// vnmsubfp v7,v9,v10,v12
	_mm_store_ps(ctx.v7.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(ctx.v9.f32), _mm_load_ps(ctx.v10.f32)), _mm_load_ps(ctx.v12.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// vmaddfp v13,v13,v7,v13
	_mm_store_ps(ctx.v13.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v7.f32)), _mm_load_ps(ctx.v13.f32)));
	// vmulfp128 v11,v13,v13
	_mm_store_ps(ctx.v11.f32, _mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v13.f32)));
	// vnmsubfp v12,v9,v11,v12
	_mm_store_ps(ctx.v12.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(ctx.v9.f32), _mm_load_ps(ctx.v11.f32)), _mm_load_ps(ctx.v12.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// vmaddfp v13,v13,v12,v13
	_mm_store_ps(ctx.v13.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v12.f32)), _mm_load_ps(ctx.v13.f32)));
	// vsel v12,v13,v8,v6
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v6.u8), _mm_load_si128((__m128i*)ctx.v13.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v6.u8), _mm_load_si128((__m128i*)ctx.v8.u8))));
	// vspltw v4,v12,0
	_mm_store_si128((__m128i*)ctx.v4.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v12.u32), 0xFF));
	// vmulfp128 v3,v0,v4
	_mm_store_ps(ctx.v3.f32, _mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v4.f32)));
	// stvx128 v3,r0,r5
	_mm_store_si128((__m128i*)(base + ((ctx.r5.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v3.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stfs f12,12(r5)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r5.u32 + 12, temp.u32);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E27250"))) PPC_WEAK_FUNC(sub_82E27250);
PPC_FUNC_IMPL(__imp__sub_82E27250) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r10,16(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x82e2727c
	if (!ctx.cr6.gt) goto loc_82E2727C;
	// addi r10,r3,3940
	ctx.r10.s64 = ctx.r3.s64 + 3940;
loc_82E27268:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stwu r9,80(r10)
	ea = 80 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// lwz r8,16(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x82e27268
	if (ctx.cr6.lt) goto loc_82E27268;
loc_82E2727C:
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// addi r10,r3,16
	ctx.r10.s64 = ctx.r3.s64 + 16;
loc_82E27290:
	// stwu r9,64(r10)
	ea = 64 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwz r8,8(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x82e27290
	if (ctx.cr6.lt) goto loc_82E27290;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E272A8"))) PPC_WEAK_FUNC(sub_82E272A8);
PPC_FUNC_IMPL(__imp__sub_82E272A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7670
	ctx.lr = 0x82E272B0;
	__savegprlr_26(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// lvx128 v13,r0,r6
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r6.u32) & ~0xF), VectorMaskL));
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r8,r11,544
	ctx.r8.s64 = ctx.r11.s64 + 544;
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// lwz r7,56(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 56);
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// lvx128 v0,r0,r8
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r8.u32) & ~0xF), VectorMaskL));
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// vxor v12,v13,v0
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_xor_si128(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// stvx128 v12,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// bctrl 
	ctx.lr = 0x82E272F8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r29,r31,16
	ctx.r29.s64 = ctx.r31.s64 + 16;
	// addi r28,r31,32
	ctx.r28.s64 = ctx.r31.s64 + 32;
	// lvx128 v11,r0,r26
	simd::store_shuffled(ctx.v11, simd::load_and_shuffle(base + ((ctx.r26.u32) & ~0xF), VectorMaskL));
	// lvx128 v7,r0,r31
	simd::store_shuffled(ctx.v7, simd::load_and_shuffle(base + ((ctx.r31.u32) & ~0xF), VectorMaskL));
	// lis r6,-32237
	ctx.r6.s64 = -2112684032;
	// vmsum3fp128 v5,v7,v11
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v5.f32, _mm_dp_ps(_mm_load_ps(ctx.v7.f32), _mm_load_ps(ctx.v11.f32), 0xEF));
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// addi r10,r6,21904
	ctx.r10.s64 = ctx.r6.s64 + 21904;
	// lwz r9,0(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lvx128 v10,r0,r29
	simd::store_shuffled(ctx.v10, simd::load_and_shuffle(base + ((ctx.r29.u32) & ~0xF), VectorMaskL));
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// lvx128 v9,r0,r28
	simd::store_shuffled(ctx.v9, simd::load_and_shuffle(base + ((ctx.r28.u32) & ~0xF), VectorMaskL));
	// vmsum3fp128 v8,v10,v11
	_mm_store_ps(ctx.v8.f32, _mm_dp_ps(_mm_load_ps(ctx.v10.f32), _mm_load_ps(ctx.v11.f32), 0xEF));
	// vmsum3fp128 v6,v9,v11
	_mm_store_ps(ctx.v6.f32, _mm_dp_ps(_mm_load_ps(ctx.v9.f32), _mm_load_ps(ctx.v11.f32), 0xEF));
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lvx128 v0,r0,r10
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// lwz r8,56(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 56);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// vmrghw v4,v8,v0
	_mm_store_si128((__m128i*)ctx.v4.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), _mm_load_si128((__m128i*)ctx.v8.u32)));
	// vmrghw v3,v5,v6
	_mm_store_si128((__m128i*)ctx.v3.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v6.u32), _mm_load_si128((__m128i*)ctx.v5.u32)));
	// vmrghw v2,v3,v4
	_mm_store_si128((__m128i*)ctx.v2.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v4.u32), _mm_load_si128((__m128i*)ctx.v3.u32)));
	// stvx128 v2,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v2.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// bctrl 
	ctx.lr = 0x82E27358;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r7,r1,128
	ctx.r7.s64 = ctx.r1.s64 + 128;
	// lvx128 v31,r0,r31
	simd::store_shuffled(ctx.v31, simd::load_and_shuffle(base + ((ctx.r31.u32) & ~0xF), VectorMaskL));
	// li r6,48
	ctx.r6.s64 = 48;
	// lvx128 v12,r0,r29
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((ctx.r29.u32) & ~0xF), VectorMaskL));
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// lvx128 v9,r0,r28
	simd::store_shuffled(ctx.v9, simd::load_and_shuffle(base + ((ctx.r28.u32) & ~0xF), VectorMaskL));
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lvx128 v13,r0,r26
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r26.u32) & ~0xF), VectorMaskL));
	// addi r11,r30,44
	ctx.r11.s64 = ctx.r30.s64 + 44;
	// lvx128 v0,r0,r7
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r7.u32) & ~0xF), VectorMaskL));
	// vspltw v1,v0,0
	_mm_store_si128((__m128i*)ctx.v1.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0xFF));
	// lvx128 v30,r31,r6
	simd::store_shuffled(ctx.v30, simd::load_and_shuffle(base + ((ctx.r31.u32 + ctx.r6.u32) & ~0xF), VectorMaskL));
	// vspltw v10,v0,1
	_mm_store_si128((__m128i*)ctx.v10.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0xAA));
	// lvx128 v7,r0,r5
	simd::store_shuffled(ctx.v7, simd::load_and_shuffle(base + ((ctx.r5.u32) & ~0xF), VectorMaskL));
	// vspltw v8,v0,2
	_mm_store_si128((__m128i*)ctx.v8.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0x55));
	// vmulfp128 v11,v31,v1
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v11.f32, _mm_mul_ps(_mm_load_ps(ctx.v31.f32), _mm_load_ps(ctx.v1.f32)));
	// vmaddfp v12,v12,v10,v11
	_mm_store_ps(ctx.v12.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v10.f32)), _mm_load_ps(ctx.v11.f32)));
	// vmaddfp v12,v9,v8,v12
	_mm_store_ps(ctx.v12.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v9.f32), _mm_load_ps(ctx.v8.f32)), _mm_load_ps(ctx.v12.f32)));
	// vaddfp v29,v12,v30
	_mm_store_ps(ctx.v29.f32, _mm_add_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v30.f32)));
	// vsubfp v28,v7,v29
	_mm_store_ps(ctx.v28.f32, _mm_sub_ps(_mm_load_ps(ctx.v7.f32), _mm_load_ps(ctx.v29.f32)));
	// vmsum3fp128 v27,v28,v13
	_mm_store_ps(ctx.v27.f32, _mm_dp_ps(_mm_load_ps(ctx.v28.f32), _mm_load_ps(ctx.v13.f32), 0xEF));
	// stvewx v27,r0,r4
	ea = (ctx.r4.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v27.u32[3 - ((ea & 0xF) >> 2)]);
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,44(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x82e273d8
	if (!ctx.cr6.gt) goto loc_82E273D8;
	// li r10,32
	ctx.r10.s64 = 32;
	// stvx128 v7,r0,r30
	_mm_store_si128((__m128i*)(base + ((ctx.r30.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v7.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r9,16
	ctx.r9.s64 = 16;
	// stvx128 v13,r30,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r30.u32 + ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v0,r30,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r30.u32 + ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
loc_82E273D8:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x82fa76c0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E273E0"))) PPC_WEAK_FUNC(sub_82E273E0);
PPC_FUNC_IMPL(__imp__sub_82E273E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7664
	ctx.lr = 0x82E273E8;
	__savegprlr_23(ctx, base);
	// addi r12,r1,-80
	ctx.r12.s64 = ctx.r1.s64 + -80;
	// bl 0x82fa8d28
	ctx.lr = 0x82E273F0;
	__savefpr_28(ctx, base);
	// li r12,-144
	ctx.r12.s64 = -144;
	// stvx128 v126,r1,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r1.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v126.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r12,-128
	ctx.r12.s64 = -128;
	// stvx128 v127,r1,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r1.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v127.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stwu r1,-368(r1)
	ea = -368 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31960
	ctx.r11.s64 = -2094530560;
	// lis r10,-32237
	ctx.r10.s64 = -2112684032;
	// addi r28,r11,-21744
	ctx.r28.s64 = ctx.r11.s64 + -21744;
	// lis r11,-32246
	ctx.r11.s64 = -2113273856;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lfs f0,28852(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 28852);
	ctx.f0.f64 = double(temp.f32);
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// stfs f0,156(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 156, temp.u32);
	// mr r24,r6
	ctx.r24.u64 = ctx.r6.u64;
	// mr r23,r7
	ctx.r23.u64 = ctx.r7.u64;
	// mr r25,r8
	ctx.r25.u64 = ctx.r8.u64;
	// li r27,3
	ctx.r27.s64 = 3;
	// addi r26,r11,544
	ctx.r26.s64 = ctx.r11.s64 + 544;
loc_82E2743C:
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// lvx128 v0,r0,r28
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r28.u32) & ~0xF), VectorMaskL));
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r28,r28,16
	ctx.r28.s64 = ctx.r28.s64 + 16;
	// bl 0x82e272a8
	ctx.lr = 0x82E27464;
	sub_82E272A8(ctx, base);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lvx128 v0,r0,r26
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r26.u32) & ~0xF), VectorMaskL));
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lvx128 v13,r0,r10
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// vxor v12,v13,v0
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_xor_si128(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stvx128 v12,r0,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// bl 0x82e272a8
	ctx.lr = 0x82E27494;
	sub_82E272A8(ctx, base);
	// addic. r27,r27,-1
	ctx.xer.ca = ctx.r27.u32 > 0;
	ctx.r27.s64 = ctx.r27.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// bne 0x82e2743c
	if (!ctx.cr0.eq) goto loc_82E2743C;
	// lis r11,-32233
	ctx.r11.s64 = -2112421888;
	// vspltisw128 v126,0
	_mm_store_si128((__m128i*)ctx.v126.u32, _mm_set1_epi32(int(0x0)));
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32250
	ctx.r8.s64 = -2113536000;
	// lfs f0,24436(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24436);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// lfs f28,-23580(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -23580);
	ctx.f28.f64 = double(temp.f32);
	// lfs f29,11556(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 11556);
	ctx.f29.f64 = double(temp.f32);
	// addi r28,r11,22016
	ctx.r28.s64 = ctx.r11.s64 + 22016;
	// lfs f30,-23072(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -23072);
	ctx.f30.f64 = double(temp.f32);
loc_82E274C8:
	// lfs f13,144(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f31,f0,f30
	ctx.f31.f64 = double(float(ctx.f0.f64 * ctx.f30.f64));
	// lfs f12,148(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	ctx.f12.f64 = double(temp.f32);
	// fabs f0,f13
	ctx.f0.u64 = ctx.f13.u64 & ~0x8000000000000000;
	// fabs f13,f12
	ctx.f13.u64 = ctx.f12.u64 & ~0x8000000000000000;
	// lfs f11,152(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	ctx.f11.f64 = double(temp.f32);
	// stfs f31,96(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// fabs f12,f11
	ctx.f12.u64 = ctx.f11.u64 & ~0x8000000000000000;
	// li r11,1
	ctx.r11.s64 = 1;
	// li r9,2
	ctx.r9.s64 = 2;
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x82e27508
	if (!ctx.cr6.lt) goto loc_82E27508;
	// li r11,0
	ctx.r11.s64 = 0;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
	// li r10,1
	ctx.r10.s64 = 1;
loc_82E27508:
	// fcmpu cr6,f12,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// bge cr6,0x82e27514
	if (!ctx.cr6.lt) goto loc_82E27514;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
loc_82E27514:
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// vxor128 v13,v127,v127
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_setzero_si128());
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// lvx128 v0,r0,r28
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r28.u32) & ~0xF), VectorMaskL));
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// vor128 v7,v126,v126
	_mm_store_si128((__m128i*)ctx.v7.u8, _mm_load_si128((__m128i*)ctx.v126.u8));
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// vor128 v11,v126,v126
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_load_si128((__m128i*)ctx.v126.u8));
	// addi r6,r1,144
	ctx.r6.s64 = ctx.r1.s64 + 144;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lfsx f0,r11,r10
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	ctx.f0.f64 = double(temp.f32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stvx128 v13,r0,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// fneg f13,f0
	ctx.f13.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// lfsx f12,r7,r6
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r6.u32);
	ctx.f12.f64 = double(temp.f32);
	// addi r9,r1,144
	ctx.r9.s64 = ctx.r1.s64 + 144;
	// stfsx f12,r11,r5
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + ctx.r5.u32, temp.u32);
	// addi r8,r1,160
	ctx.r8.s64 = ctx.r1.s64 + 160;
	// stfsx f13,r7,r4
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r7.u32 + ctx.r4.u32, temp.u32);
	// addi r11,r1,160
	ctx.r11.s64 = ctx.r1.s64 + 160;
	// lvx128 v6,r0,r3
	simd::store_shuffled(ctx.v6, simd::load_and_shuffle(base + ((ctx.r3.u32) & ~0xF), VectorMaskL));
	// vmsum3fp128 v10,v6,v6
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v10.f32, _mm_dp_ps(_mm_load_ps(ctx.v6.f32), _mm_load_ps(ctx.v6.f32), 0xEF));
	// vrsqrtefp v12,v10
	_mm_store_ps(ctx.v12.f32, _mm_div_ps(_mm_set1_ps(1), _mm_sqrt_ps(_mm_load_ps(ctx.v10.f32))));
	// lvlx v9,0,r10
	temp.u32 = ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v9.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw v3,v9,0
	_mm_store_si128((__m128i*)ctx.v3.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v9.u32), 0xFF));
	// vmulfp128 v8,v10,v0
	_mm_store_ps(ctx.v8.f32, _mm_mul_ps(_mm_load_ps(ctx.v10.f32), _mm_load_ps(ctx.v0.f32)));
	// vcmpeqfp128 v4,v126,v10
	_mm_store_ps(ctx.v4.f32, _mm_cmpeq_ps(_mm_load_ps(ctx.v126.f32), _mm_load_ps(ctx.v10.f32)));
	// lvx128 v13,r0,r9
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// vpermwi128 v2,v13,99
	_mm_store_si128((__m128i*)ctx.v2.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v13.u32), 0x9C));
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// vpermwi128 v1,v13,135
	_mm_store_si128((__m128i*)ctx.v1.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v13.u32), 0x78));
	// addi r9,r1,176
	ctx.r9.s64 = ctx.r1.s64 + 176;
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// addi r6,r1,160
	ctx.r6.s64 = ctx.r1.s64 + 160;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// vmulfp128 v9,v12,v12
	_mm_store_ps(ctx.v9.f32, _mm_mul_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v12.f32)));
	// vnmsubfp v5,v8,v9,v0
	_mm_store_ps(ctx.v5.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(ctx.v8.f32), _mm_load_ps(ctx.v9.f32)), _mm_load_ps(ctx.v0.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// vmaddfp v12,v12,v5,v12
	_mm_store_ps(ctx.v12.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v5.f32)), _mm_load_ps(ctx.v12.f32)));
	// vmulfp128 v10,v12,v12
	_mm_store_ps(ctx.v10.f32, _mm_mul_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v12.f32)));
	// vnmsubfp v9,v8,v10,v0
	_mm_store_ps(ctx.v9.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(ctx.v8.f32), _mm_load_ps(ctx.v10.f32)), _mm_load_ps(ctx.v0.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// vmaddfp v12,v12,v9,v12
	_mm_store_ps(ctx.v12.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v9.f32)), _mm_load_ps(ctx.v12.f32)));
	// vsel v10,v12,v7,v4
	_mm_store_si128((__m128i*)ctx.v10.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v4.u8), _mm_load_si128((__m128i*)ctx.v12.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v4.u8), _mm_load_si128((__m128i*)ctx.v7.u8))));
	// vspltw v31,v10,0
	_mm_store_si128((__m128i*)ctx.v31.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v10.u32), 0xFF));
	// vmulfp128 v30,v6,v31
	_mm_store_ps(ctx.v30.f32, _mm_mul_ps(_mm_load_ps(ctx.v6.f32), _mm_load_ps(ctx.v31.f32)));
	// vpermwi128 v29,v30,135
	_mm_store_si128((__m128i*)ctx.v29.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v30.u32), 0x78));
	// vmulfp128 v127,v30,v3
	_mm_store_ps(ctx.v127.f32, _mm_mul_ps(_mm_load_ps(ctx.v30.f32), _mm_load_ps(ctx.v3.f32)));
	// vpermwi128 v28,v30,99
	_mm_store_si128((__m128i*)ctx.v28.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v30.u32), 0x9C));
	// vmulfp128 v27,v2,v29
	_mm_store_ps(ctx.v27.f32, _mm_mul_ps(_mm_load_ps(ctx.v2.f32), _mm_load_ps(ctx.v29.f32)));
	// vmulfp128 v26,v1,v28
	_mm_store_ps(ctx.v26.f32, _mm_mul_ps(_mm_load_ps(ctx.v1.f32), _mm_load_ps(ctx.v28.f32)));
	// vaddfp128 v12,v13,v127
	_mm_store_ps(ctx.v12.f32, _mm_add_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v127.f32)));
	// stvx128 v127,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v127.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// vsubfp128 v25,v13,v127
	_mm_store_ps(ctx.v25.f32, _mm_sub_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v127.f32)));
	// vsubfp v24,v27,v26
	_mm_store_ps(ctx.v24.f32, _mm_sub_ps(_mm_load_ps(ctx.v27.f32), _mm_load_ps(ctx.v26.f32)));
	// vmsum3fp128 v23,v12,v12
	_mm_store_ps(ctx.v23.f32, _mm_dp_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v12.f32), 0xEF));
	// stvx128 v12,r0,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r8,r1,208
	ctx.r8.s64 = ctx.r1.s64 + 208;
	// vmulfp128 v22,v24,v3
	_mm_store_ps(ctx.v22.f32, _mm_mul_ps(_mm_load_ps(ctx.v24.f32), _mm_load_ps(ctx.v3.f32)));
	// vmulfp128 v9,v23,v0
	_mm_store_ps(ctx.v9.f32, _mm_mul_ps(_mm_load_ps(ctx.v23.f32), _mm_load_ps(ctx.v0.f32)));
	// vaddfp v21,v13,v22
	_mm_store_ps(ctx.v21.f32, _mm_add_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v22.f32)));
	// vsubfp v20,v13,v22
	_mm_store_ps(ctx.v20.f32, _mm_sub_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v22.f32)));
	// vrsqrtefp v13,v23
	_mm_store_ps(ctx.v13.f32, _mm_div_ps(_mm_set1_ps(1), _mm_sqrt_ps(_mm_load_ps(ctx.v23.f32))));
	// vcmpeqfp128 v7,v126,v23
	_mm_store_ps(ctx.v7.f32, _mm_cmpeq_ps(_mm_load_ps(ctx.v126.f32), _mm_load_ps(ctx.v23.f32)));
	// vmulfp128 v8,v13,v13
	_mm_store_ps(ctx.v8.f32, _mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v13.f32)));
	// vnmsubfp v6,v9,v8,v0
	_mm_store_ps(ctx.v6.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(ctx.v9.f32), _mm_load_ps(ctx.v8.f32)), _mm_load_ps(ctx.v0.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// vmaddfp v13,v13,v6,v13
	_mm_store_ps(ctx.v13.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v6.f32)), _mm_load_ps(ctx.v13.f32)));
	// vmulfp128 v10,v13,v13
	_mm_store_ps(ctx.v10.f32, _mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v13.f32)));
	// vnmsubfp v0,v9,v10,v0
	_mm_store_ps(ctx.v0.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(ctx.v9.f32), _mm_load_ps(ctx.v10.f32)), _mm_load_ps(ctx.v0.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// vmaddfp v0,v13,v0,v13
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v0.f32)), _mm_load_ps(ctx.v13.f32)));
	// vsel v13,v0,v11,v7
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v7.u8), _mm_load_si128((__m128i*)ctx.v0.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v7.u8), _mm_load_si128((__m128i*)ctx.v11.u8))));
	// vmulfp128 v19,v12,v13
	_mm_store_ps(ctx.v19.f32, _mm_mul_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v13.f32)));
	// vmulfp128 v18,v25,v13
	_mm_store_ps(ctx.v18.f32, _mm_mul_ps(_mm_load_ps(ctx.v25.f32), _mm_load_ps(ctx.v13.f32)));
	// vmulfp128 v17,v21,v13
	_mm_store_ps(ctx.v17.f32, _mm_mul_ps(_mm_load_ps(ctx.v21.f32), _mm_load_ps(ctx.v13.f32)));
	// vmulfp128 v16,v20,v13
	_mm_store_ps(ctx.v16.f32, _mm_mul_ps(_mm_load_ps(ctx.v20.f32), _mm_load_ps(ctx.v13.f32)));
	// stvx128 v19,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v19.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r11,r1,192
	ctx.r11.s64 = ctx.r1.s64 + 192;
	// stvx128 v18,r0,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v18.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v17,r0,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v17.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v16,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v16.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// bl 0x82e272a8
	ctx.lr = 0x82E27660;
	sub_82E272A8(ctx, base);
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// addi r6,r1,176
	ctx.r6.s64 = ctx.r1.s64 + 176;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e272a8
	ctx.lr = 0x82E27678;
	sub_82E272A8(ctx, base);
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// addi r6,r1,208
	ctx.r6.s64 = ctx.r1.s64 + 208;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e272a8
	ctx.lr = 0x82E27690;
	sub_82E272A8(ctx, base);
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// addi r6,r1,192
	ctx.r6.s64 = ctx.r1.s64 + 192;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e272a8
	ctx.lr = 0x82E276A8;
	sub_82E272A8(ctx, base);
	// fmuls f0,f31,f29
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f31.f64 * ctx.f29.f64));
	// fcmpu cr6,f0,f28
	ctx.cr6.compare(ctx.f0.f64, ctx.f28.f64);
	// bgt cr6,0x82e274c8
	if (ctx.cr6.gt) goto loc_82E274C8;
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// lfs f0,156(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	ctx.f0.f64 = double(temp.f32);
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// addi r9,r1,144
	ctx.r9.s64 = ctx.r1.s64 + 144;
	// li r8,16
	ctx.r8.s64 = 16;
	// lvx128 v0,r0,r11
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// lvx128 v13,r0,r10
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// stvx128 v0,r0,r24
	_mm_store_si128((__m128i*)(base + ((ctx.r24.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v12,r0,r9
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// stvx128 v13,r0,r23
	_mm_store_si128((__m128i*)(base + ((ctx.r23.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stfs f0,32(r25)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r25.u32 + 32, temp.u32);
	// stvx128 v12,r0,r25
	_mm_store_si128((__m128i*)(base + ((ctx.r25.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v0,r25,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r25.u32 + ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// li r0,-144
	ctx.r0.s64 = -144;
	// lvx128 v126,r1,r0
	simd::store_shuffled(ctx.v126, simd::load_and_shuffle(base + ((ctx.r1.u32 + ctx.r0.u32) & ~0xF), VectorMaskL));
	// li r0,-128
	ctx.r0.s64 = -128;
	// lvx128 v127,r1,r0
	simd::store_shuffled(ctx.v127, simd::load_and_shuffle(base + ((ctx.r1.u32 + ctx.r0.u32) & ~0xF), VectorMaskL));
	// addi r12,r1,-80
	ctx.r12.s64 = ctx.r1.s64 + -80;
	// bl 0x82fa8d74
	ctx.lr = 0x82E27704;
	__restfpr_28(ctx, base);
	// b 0x82fa76b4
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E27708"))) PPC_WEAK_FUNC(sub_82E27708);
PPC_FUNC_IMPL(__imp__sub_82E27708) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31960
	ctx.r11.s64 = -2094530560;
	// addi r3,r11,-9952
	ctx.r3.s64 = ctx.r11.s64 + -9952;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E27714"))) PPC_WEAK_FUNC(sub_82E27714);
PPC_FUNC_IMPL(__imp__sub_82E27714) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E27718"))) PPC_WEAK_FUNC(sub_82E27718);
PPC_FUNC_IMPL(__imp__sub_82E27718) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82e27754
	if (ctx.cr6.eq) goto loc_82E27754;
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// addi r3,r3,20
	ctx.r3.s64 = ctx.r3.s64 + 20;
	// addi r10,r11,-11484
	ctx.r10.s64 = ctx.r11.s64 + -11484;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x82d372b8
	ctx.lr = 0x82E27748;
	sub_82D372B8(ctx, base);
	// lis r9,-32236
	ctx.r9.s64 = -2112618496;
	// addi r8,r9,23328
	ctx.r8.s64 = ctx.r9.s64 + 23328;
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
loc_82E27754:
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

__attribute__((alias("__imp__sub_82E27768"))) PPC_WEAK_FUNC(sub_82E27768);
PPC_FUNC_IMPL(__imp__sub_82E27768) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82E2777C"))) PPC_WEAK_FUNC(sub_82E2777C);
PPC_FUNC_IMPL(__imp__sub_82E2777C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E27780"))) PPC_WEAK_FUNC(sub_82E27780);
PPC_FUNC_IMPL(__imp__sub_82E27780) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r10,r11,-11484
	ctx.r10.s64 = ctx.r11.s64 + -11484;
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// bl 0x82d372b8
	ctx.lr = 0x82E277A4;
	sub_82D372B8(ctx, base);
	// lis r9,-32236
	ctx.r9.s64 = -2112618496;
	// addi r3,r9,23328
	ctx.r3.s64 = ctx.r9.s64 + 23328;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E277BC"))) PPC_WEAK_FUNC(sub_82E277BC);
PPC_FUNC_IMPL(__imp__sub_82E277BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E277C0"))) PPC_WEAK_FUNC(sub_82E277C0);
PPC_FUNC_IMPL(__imp__sub_82E277C0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31960
	ctx.r11.s64 = -2094530560;
	// addi r3,r11,-8868
	ctx.r3.s64 = ctx.r11.s64 + -8868;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E277CC"))) PPC_WEAK_FUNC(sub_82E277CC);
PPC_FUNC_IMPL(__imp__sub_82E277CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E277D0"))) PPC_WEAK_FUNC(sub_82E277D0);
PPC_FUNC_IMPL(__imp__sub_82E277D0) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// b 0x82e32e70
	sub_82E32E70(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E277DC"))) PPC_WEAK_FUNC(sub_82E277DC);
PPC_FUNC_IMPL(__imp__sub_82E277DC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E277E0"))) PPC_WEAK_FUNC(sub_82E277E0);
PPC_FUNC_IMPL(__imp__sub_82E277E0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82E277F4"))) PPC_WEAK_FUNC(sub_82E277F4);
PPC_FUNC_IMPL(__imp__sub_82E277F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E277F8"))) PPC_WEAK_FUNC(sub_82E277F8);
PPC_FUNC_IMPL(__imp__sub_82E277F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e32e70
	ctx.lr = 0x82E27810;
	sub_82E32E70(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E27824"))) PPC_WEAK_FUNC(sub_82E27824);
PPC_FUNC_IMPL(__imp__sub_82E27824) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E27828"))) PPC_WEAK_FUNC(sub_82E27828);
PPC_FUNC_IMPL(__imp__sub_82E27828) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31960
	ctx.r11.s64 = -2094530560;
	// addi r3,r11,-8820
	ctx.r3.s64 = ctx.r11.s64 + -8820;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E27834"))) PPC_WEAK_FUNC(sub_82E27834);
PPC_FUNC_IMPL(__imp__sub_82E27834) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E27838"))) PPC_WEAK_FUNC(sub_82E27838);
PPC_FUNC_IMPL(__imp__sub_82E27838) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82E2784C"))) PPC_WEAK_FUNC(sub_82E2784C);
PPC_FUNC_IMPL(__imp__sub_82E2784C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E27850"))) PPC_WEAK_FUNC(sub_82E27850);
PPC_FUNC_IMPL(__imp__sub_82E27850) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31960
	ctx.r11.s64 = -2094530560;
	// addi r3,r11,-8756
	ctx.r3.s64 = ctx.r11.s64 + -8756;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E2785C"))) PPC_WEAK_FUNC(sub_82E2785C);
PPC_FUNC_IMPL(__imp__sub_82E2785C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E27860"))) PPC_WEAK_FUNC(sub_82E27860);
PPC_FUNC_IMPL(__imp__sub_82E27860) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// lis r10,-32237
	ctx.r10.s64 = -2112684032;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// addi r8,r11,31300
	ctx.r8.s64 = ctx.r11.s64 + 31300;
	// addi r6,r10,31324
	ctx.r6.s64 = ctx.r10.s64 + 31324;
	// lis r7,-32237
	ctx.r7.s64 = -2112684032;
	// stw r8,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r8.u32);
	// addi r4,r9,31344
	ctx.r4.s64 = ctx.r9.s64 + 31344;
	// stw r6,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r6.u32);
	// addi r7,r7,31312
	ctx.r7.s64 = ctx.r7.s64 + 31312;
	// stw r4,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r4.u32);
	// lis r6,-32236
	ctx.r6.s64 = -2112618496;
	// lis r5,-32236
	ctx.r5.s64 = -2112618496;
	// stw r7,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r7.u32);
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// lis r10,-32236
	ctx.r10.s64 = -2112618496;
	// lis r9,-32236
	ctx.r9.s64 = -2112618496;
	// lis r8,-32236
	ctx.r8.s64 = -2112618496;
	// lis r4,-32236
	ctx.r4.s64 = -2112618496;
	// addi r7,r6,24244
	ctx.r7.s64 = ctx.r6.s64 + 24244;
	// addi r5,r5,20128
	ctx.r5.s64 = ctx.r5.s64 + 20128;
	// addi r11,r11,24228
	ctx.r11.s64 = ctx.r11.s64 + 24228;
	// addi r10,r10,24216
	ctx.r10.s64 = ctx.r10.s64 + 24216;
	// stw r5,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r5.u32);
	// addi r9,r9,24196
	ctx.r9.s64 = ctx.r9.s64 + 24196;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// addi r8,r8,24184
	ctx.r8.s64 = ctx.r8.s64 + 24184;
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// addi r6,r4,24156
	ctx.r6.s64 = ctx.r4.s64 + 24156;
	// stw r9,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r9.u32);
	// stw r8,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r8.u32);
	// stw r7,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r7.u32);
	// stw r6,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r6.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E278F0"))) PPC_WEAK_FUNC(sub_82E278F0);
PPC_FUNC_IMPL(__imp__sub_82E278F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// addi r3,r11,24228
	ctx.r3.s64 = ctx.r11.s64 + 24228;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E278FC"))) PPC_WEAK_FUNC(sub_82E278FC);
PPC_FUNC_IMPL(__imp__sub_82E278FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E27900"))) PPC_WEAK_FUNC(sub_82E27900);
PPC_FUNC_IMPL(__imp__sub_82E27900) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31960
	ctx.r11.s64 = -2094530560;
	// addi r3,r11,-8756
	ctx.r3.s64 = ctx.r11.s64 + -8756;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E2790C"))) PPC_WEAK_FUNC(sub_82E2790C);
PPC_FUNC_IMPL(__imp__sub_82E2790C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E27910"))) PPC_WEAK_FUNC(sub_82E27910);
PPC_FUNC_IMPL(__imp__sub_82E27910) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82e33678
	ctx.lr = 0x82E27930;
	sub_82E33678(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82e2795c
	if (ctx.cr6.eq) goto loc_82E2795C;
	// bl 0x82d2d090
	ctx.lr = 0x82E27940;
	sub_82D2D090(ctx, base);
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lhz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82E2795C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82E2795C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
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

__attribute__((alias("__imp__sub_82E27978"))) PPC_WEAK_FUNC(sub_82E27978);
PPC_FUNC_IMPL(__imp__sub_82E27978) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x82e27910
	sub_82E27910(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E27980"))) PPC_WEAK_FUNC(sub_82E27980);
PPC_FUNC_IMPL(__imp__sub_82E27980) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-12
	ctx.r3.s64 = ctx.r3.s64 + -12;
	// b 0x82e27910
	sub_82E27910(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E27988"))) PPC_WEAK_FUNC(sub_82E27988);
PPC_FUNC_IMPL(__imp__sub_82E27988) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-16
	ctx.r3.s64 = ctx.r3.s64 + -16;
	// b 0x82e27910
	sub_82E27910(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E27990"))) PPC_WEAK_FUNC(sub_82E27990);
PPC_FUNC_IMPL(__imp__sub_82E27990) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-48
	ctx.r3.s64 = ctx.r3.s64 + -48;
	// b 0x82e27910
	sub_82E27910(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E27998"))) PPC_WEAK_FUNC(sub_82E27998);
PPC_FUNC_IMPL(__imp__sub_82E27998) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-20
	ctx.r3.s64 = ctx.r3.s64 + -20;
	// b 0x82e27910
	sub_82E27910(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E279A0"))) PPC_WEAK_FUNC(sub_82E279A0);
PPC_FUNC_IMPL(__imp__sub_82E279A0) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82e279dc
	if (ctx.cr6.eq) goto loc_82E279DC;
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// addi r3,r3,20
	ctx.r3.s64 = ctx.r3.s64 + 20;
	// addi r10,r11,-11484
	ctx.r10.s64 = ctx.r11.s64 + -11484;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x82d372b8
	ctx.lr = 0x82E279D0;
	sub_82D372B8(ctx, base);
	// lis r9,-32236
	ctx.r9.s64 = -2112618496;
	// addi r8,r9,24420
	ctx.r8.s64 = ctx.r9.s64 + 24420;
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
loc_82E279DC:
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

__attribute__((alias("__imp__sub_82E279F0"))) PPC_WEAK_FUNC(sub_82E279F0);
PPC_FUNC_IMPL(__imp__sub_82E279F0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82E27A04"))) PPC_WEAK_FUNC(sub_82E27A04);
PPC_FUNC_IMPL(__imp__sub_82E27A04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E27A08"))) PPC_WEAK_FUNC(sub_82E27A08);
PPC_FUNC_IMPL(__imp__sub_82E27A08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r10,r11,-11484
	ctx.r10.s64 = ctx.r11.s64 + -11484;
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// bl 0x82d372b8
	ctx.lr = 0x82E27A2C;
	sub_82D372B8(ctx, base);
	// lis r9,-32236
	ctx.r9.s64 = -2112618496;
	// addi r3,r9,24420
	ctx.r3.s64 = ctx.r9.s64 + 24420;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E27A44"))) PPC_WEAK_FUNC(sub_82E27A44);
PPC_FUNC_IMPL(__imp__sub_82E27A44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E27A48"))) PPC_WEAK_FUNC(sub_82E27A48);
PPC_FUNC_IMPL(__imp__sub_82E27A48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31960
	ctx.r11.s64 = -2094530560;
	// addi r3,r11,-8692
	ctx.r3.s64 = ctx.r11.s64 + -8692;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E27A54"))) PPC_WEAK_FUNC(sub_82E27A54);
PPC_FUNC_IMPL(__imp__sub_82E27A54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E27A58"))) PPC_WEAK_FUNC(sub_82E27A58);
PPC_FUNC_IMPL(__imp__sub_82E27A58) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82E27A6C"))) PPC_WEAK_FUNC(sub_82E27A6C);
PPC_FUNC_IMPL(__imp__sub_82E27A6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E27A70"))) PPC_WEAK_FUNC(sub_82E27A70);
PPC_FUNC_IMPL(__imp__sub_82E27A70) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31960
	ctx.r11.s64 = -2094530560;
	// addi r3,r11,-8644
	ctx.r3.s64 = ctx.r11.s64 + -8644;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E27A7C"))) PPC_WEAK_FUNC(sub_82E27A7C);
PPC_FUNC_IMPL(__imp__sub_82E27A7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E27A80"))) PPC_WEAK_FUNC(sub_82E27A80);
PPC_FUNC_IMPL(__imp__sub_82E27A80) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// lis r10,-32237
	ctx.r10.s64 = -2112684032;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// addi r8,r11,31300
	ctx.r8.s64 = ctx.r11.s64 + 31300;
	// addi r6,r10,31324
	ctx.r6.s64 = ctx.r10.s64 + 31324;
	// lis r7,-32237
	ctx.r7.s64 = -2112684032;
	// stw r8,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r8.u32);
	// addi r4,r9,31344
	ctx.r4.s64 = ctx.r9.s64 + 31344;
	// stw r6,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r6.u32);
	// addi r7,r7,31312
	ctx.r7.s64 = ctx.r7.s64 + 31312;
	// stw r4,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r4.u32);
	// lis r6,-32236
	ctx.r6.s64 = -2112618496;
	// lis r5,-32236
	ctx.r5.s64 = -2112618496;
	// stw r7,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r7.u32);
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// lis r10,-32236
	ctx.r10.s64 = -2112618496;
	// lis r9,-32236
	ctx.r9.s64 = -2112618496;
	// lis r8,-32236
	ctx.r8.s64 = -2112618496;
	// lis r4,-32236
	ctx.r4.s64 = -2112618496;
	// addi r7,r6,24644
	ctx.r7.s64 = ctx.r6.s64 + 24644;
	// addi r5,r5,19212
	ctx.r5.s64 = ctx.r5.s64 + 19212;
	// addi r11,r11,24628
	ctx.r11.s64 = ctx.r11.s64 + 24628;
	// addi r10,r10,24616
	ctx.r10.s64 = ctx.r10.s64 + 24616;
	// stw r5,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r5.u32);
	// addi r9,r9,24596
	ctx.r9.s64 = ctx.r9.s64 + 24596;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// addi r8,r8,24584
	ctx.r8.s64 = ctx.r8.s64 + 24584;
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// addi r6,r4,24556
	ctx.r6.s64 = ctx.r4.s64 + 24556;
	// stw r9,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r9.u32);
	// stw r8,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r8.u32);
	// stw r7,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r7.u32);
	// stw r6,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r6.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E27B10"))) PPC_WEAK_FUNC(sub_82E27B10);
PPC_FUNC_IMPL(__imp__sub_82E27B10) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// addi r3,r11,24628
	ctx.r3.s64 = ctx.r11.s64 + 24628;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E27B1C"))) PPC_WEAK_FUNC(sub_82E27B1C);
PPC_FUNC_IMPL(__imp__sub_82E27B1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E27B20"))) PPC_WEAK_FUNC(sub_82E27B20);
PPC_FUNC_IMPL(__imp__sub_82E27B20) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82e33fc8
	ctx.lr = 0x82E27B40;
	sub_82E33FC8(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82e27b6c
	if (ctx.cr6.eq) goto loc_82E27B6C;
	// bl 0x82d2d090
	ctx.lr = 0x82E27B50;
	sub_82D2D090(ctx, base);
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lhz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82E27B6C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82E27B6C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
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

__attribute__((alias("__imp__sub_82E27B88"))) PPC_WEAK_FUNC(sub_82E27B88);
PPC_FUNC_IMPL(__imp__sub_82E27B88) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
	// b 0x82e27b20
	sub_82E27B20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E27B90"))) PPC_WEAK_FUNC(sub_82E27B90);
PPC_FUNC_IMPL(__imp__sub_82E27B90) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-12
	ctx.r3.s64 = ctx.r3.s64 + -12;
	// b 0x82e27b20
	sub_82E27B20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E27B98"))) PPC_WEAK_FUNC(sub_82E27B98);
PPC_FUNC_IMPL(__imp__sub_82E27B98) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-16
	ctx.r3.s64 = ctx.r3.s64 + -16;
	// b 0x82e27b20
	sub_82E27B20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E27BA0"))) PPC_WEAK_FUNC(sub_82E27BA0);
PPC_FUNC_IMPL(__imp__sub_82E27BA0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-48
	ctx.r3.s64 = ctx.r3.s64 + -48;
	// b 0x82e27b20
	sub_82E27B20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E27BA8"))) PPC_WEAK_FUNC(sub_82E27BA8);
PPC_FUNC_IMPL(__imp__sub_82E27BA8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-20
	ctx.r3.s64 = ctx.r3.s64 + -20;
	// b 0x82e27b20
	sub_82E27B20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E27BB0"))) PPC_WEAK_FUNC(sub_82E27BB0);
PPC_FUNC_IMPL(__imp__sub_82E27BB0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82E27BC4"))) PPC_WEAK_FUNC(sub_82E27BC4);
PPC_FUNC_IMPL(__imp__sub_82E27BC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E27BC8"))) PPC_WEAK_FUNC(sub_82E27BC8);
PPC_FUNC_IMPL(__imp__sub_82E27BC8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31960
	ctx.r11.s64 = -2094530560;
	// addi r3,r11,-8596
	ctx.r3.s64 = ctx.r11.s64 + -8596;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E27BD4"))) PPC_WEAK_FUNC(sub_82E27BD4);
PPC_FUNC_IMPL(__imp__sub_82E27BD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E27BD8"))) PPC_WEAK_FUNC(sub_82E27BD8);
PPC_FUNC_IMPL(__imp__sub_82E27BD8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82E27BEC"))) PPC_WEAK_FUNC(sub_82E27BEC);
PPC_FUNC_IMPL(__imp__sub_82E27BEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E27BF0"))) PPC_WEAK_FUNC(sub_82E27BF0);
PPC_FUNC_IMPL(__imp__sub_82E27BF0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31960
	ctx.r11.s64 = -2094530560;
	// addi r3,r11,-8548
	ctx.r3.s64 = ctx.r11.s64 + -8548;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E27BFC"))) PPC_WEAK_FUNC(sub_82E27BFC);
PPC_FUNC_IMPL(__imp__sub_82E27BFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E27C00"))) PPC_WEAK_FUNC(sub_82E27C00);
PPC_FUNC_IMPL(__imp__sub_82E27C00) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82E27C14"))) PPC_WEAK_FUNC(sub_82E27C14);
PPC_FUNC_IMPL(__imp__sub_82E27C14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E27C18"))) PPC_WEAK_FUNC(sub_82E27C18);
PPC_FUNC_IMPL(__imp__sub_82E27C18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31960
	ctx.r11.s64 = -2094530560;
	// addi r3,r11,-8500
	ctx.r3.s64 = ctx.r11.s64 + -8500;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E27C24"))) PPC_WEAK_FUNC(sub_82E27C24);
PPC_FUNC_IMPL(__imp__sub_82E27C24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E27C28"))) PPC_WEAK_FUNC(sub_82E27C28);
PPC_FUNC_IMPL(__imp__sub_82E27C28) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// addi r10,r11,25020
	ctx.r10.s64 = ctx.r11.s64 + 25020;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E27C40"))) PPC_WEAK_FUNC(sub_82E27C40);
PPC_FUNC_IMPL(__imp__sub_82E27C40) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// addi r3,r11,25020
	ctx.r3.s64 = ctx.r11.s64 + 25020;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E27C4C"))) PPC_WEAK_FUNC(sub_82E27C4C);
PPC_FUNC_IMPL(__imp__sub_82E27C4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E27C50"))) PPC_WEAK_FUNC(sub_82E27C50);
PPC_FUNC_IMPL(__imp__sub_82E27C50) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// addi r10,r11,25036
	ctx.r10.s64 = ctx.r11.s64 + 25036;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E27C68"))) PPC_WEAK_FUNC(sub_82E27C68);
PPC_FUNC_IMPL(__imp__sub_82E27C68) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// addi r3,r11,25036
	ctx.r3.s64 = ctx.r11.s64 + 25036;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E27C74"))) PPC_WEAK_FUNC(sub_82E27C74);
PPC_FUNC_IMPL(__imp__sub_82E27C74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E27C78"))) PPC_WEAK_FUNC(sub_82E27C78);
PPC_FUNC_IMPL(__imp__sub_82E27C78) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// addi r10,r11,25052
	ctx.r10.s64 = ctx.r11.s64 + 25052;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E27C90"))) PPC_WEAK_FUNC(sub_82E27C90);
PPC_FUNC_IMPL(__imp__sub_82E27C90) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// addi r3,r11,25052
	ctx.r3.s64 = ctx.r11.s64 + 25052;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E27C9C"))) PPC_WEAK_FUNC(sub_82E27C9C);
PPC_FUNC_IMPL(__imp__sub_82E27C9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E27CA0"))) PPC_WEAK_FUNC(sub_82E27CA0);
PPC_FUNC_IMPL(__imp__sub_82E27CA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x82E27CA8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82e27cc4
	if (ctx.cr6.eq) goto loc_82E27CC4;
	// bl 0x82d2c0a0
	ctx.lr = 0x82E27CC4;
	sub_82D2C0A0(ctx, base);
loc_82E27CC4:
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82e27cdc
	if (ctx.cr6.eq) goto loc_82E27CDC;
	// bl 0x82d2c0a0
	ctx.lr = 0x82E27CDC;
	sub_82D2C0A0(ctx, base);
loc_82E27CDC:
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// clrlwi r10,r29,31
	ctx.r10.u64 = ctx.r29.u32 & 0x1;
	// addi r9,r11,10816
	ctx.r9.s64 = ctx.r11.s64 + 10816;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// beq cr6,0x82e27d18
	if (ctx.cr6.eq) goto loc_82E27D18;
	// bl 0x82d2d090
	ctx.lr = 0x82E27CFC;
	sub_82D2D090(ctx, base);
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lhz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82E27D18;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82E27D18:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E27D24"))) PPC_WEAK_FUNC(sub_82E27D24);
PPC_FUNC_IMPL(__imp__sub_82E27D24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E27D28"))) PPC_WEAK_FUNC(sub_82E27D28);
PPC_FUNC_IMPL(__imp__sub_82E27D28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7670
	ctx.lr = 0x82E27D30;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// lwz r3,20(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82e27d48
	if (ctx.cr6.eq) goto loc_82E27D48;
	// bl 0x82d2c0a0
	ctx.lr = 0x82E27D48;
	sub_82D2C0A0(ctx, base);
loc_82E27D48:
	// li r28,0
	ctx.r28.s64 = 0;
	// addi r30,r27,8
	ctx.r30.s64 = ctx.r27.s64 + 8;
	// stw r28,20(r27)
	PPC_STORE_U32(ctx.r27.u32 + 20, ctx.r28.u32);
	// bl 0x82d2d090
	ctx.lr = 0x82E27D58;
	sub_82D2D090(ctx, base);
	// lwz r29,12(r27)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// lwz r11,8(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// lwz r26,16(r3)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// ble cr6,0x82e27d8c
	if (!ctx.cr6.gt) goto loc_82E27D8C;
	// addi r31,r11,-4
	ctx.r31.s64 = ctx.r11.s64 + -4;
loc_82E27D70:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82e27d80
	if (ctx.cr6.eq) goto loc_82E27D80;
	// bl 0x82d2c0a0
	ctx.lr = 0x82E27D80;
	sub_82D2C0A0(ctx, base);
loc_82E27D80:
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// stwu r28,4(r31)
	ea = 4 + ctx.r31.u32;
	PPC_STORE_U32(ea, ctx.r28.u32);
	ctx.r31.u32 = ea;
	// bne 0x82e27d70
	if (!ctx.cr0.eq) goto loc_82E27D70;
loc_82E27D8C:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// stw r28,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r28.u32);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82e27dc0
	if (!ctx.cr6.eq) goto loc_82E27DC0;
	// lwz r10,0(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// li r6,4
	ctx.r6.s64 = 4;
	// clrlwi r5,r11,2
	ctx.r5.u64 = ctx.r11.u32 & 0x3FFFFFFF;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r9,16(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82E27DC0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82E27DC0:
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// stw r28,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r28.u32);
	// lis r10,-32768
	ctx.r10.s64 = -2147483648;
	// addi r9,r11,10816
	ctx.r9.s64 = ctx.r11.s64 + 10816;
	// stw r10,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r10.u32);
	// stw r9,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r9.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82fa76c0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E27DE0"))) PPC_WEAK_FUNC(sub_82E27DE0);
PPC_FUNC_IMPL(__imp__sub_82E27DE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa766c
	ctx.lr = 0x82E27DE8;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// addi r31,r3,20
	ctx.r31.s64 = ctx.r3.s64 + 20;
	// bl 0x82d2d090
	ctx.lr = 0x82E27DF8;
	sub_82D2D090(ctx, base);
	// lwz r29,24(r25)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r25.u32 + 24);
	// li r28,0
	ctx.r28.s64 = 0;
	// lwz r11,20(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 20);
	// lwz r27,16(r3)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// ble cr6,0x82e27e30
	if (!ctx.cr6.gt) goto loc_82E27E30;
	// addi r30,r11,-4
	ctx.r30.s64 = ctx.r11.s64 + -4;
loc_82E27E14:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82e27e24
	if (ctx.cr6.eq) goto loc_82E27E24;
	// bl 0x82d2c0a0
	ctx.lr = 0x82E27E24;
	sub_82D2C0A0(ctx, base);
loc_82E27E24:
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// stwu r28,4(r30)
	ea = 4 + ctx.r30.u32;
	PPC_STORE_U32(ea, ctx.r28.u32);
	ctx.r30.u32 = ea;
	// bne 0x82e27e14
	if (!ctx.cr0.eq) goto loc_82E27E14;
loc_82E27E30:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r28,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r28.u32);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82e27e64
	if (!ctx.cr6.eq) goto loc_82E27E64;
	// lwz r10,0(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// li r6,4
	ctx.r6.s64 = 4;
	// clrlwi r5,r11,2
	ctx.r5.u64 = ctx.r11.u32 & 0x3FFFFFFF;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r9,16(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82E27E64;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82E27E64:
	// lis r26,-32768
	ctx.r26.s64 = -2147483648;
	// stw r28,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r28.u32);
	// addi r30,r25,8
	ctx.r30.s64 = ctx.r25.s64 + 8;
	// stw r26,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r26.u32);
	// bl 0x82d2d090
	ctx.lr = 0x82E27E78;
	sub_82D2D090(ctx, base);
	// lwz r11,12(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 12);
	// lwz r10,8(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 8);
	// lwz r27,16(r3)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82e27eb0
	if (!ctx.cr6.gt) goto loc_82E27EB0;
	// addi r31,r10,-4
	ctx.r31.s64 = ctx.r10.s64 + -4;
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
loc_82E27E94:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82e27ea4
	if (ctx.cr6.eq) goto loc_82E27EA4;
	// bl 0x82d2c0a0
	ctx.lr = 0x82E27EA4;
	sub_82D2C0A0(ctx, base);
loc_82E27EA4:
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// stwu r28,4(r31)
	ea = 4 + ctx.r31.u32;
	PPC_STORE_U32(ea, ctx.r28.u32);
	ctx.r31.u32 = ea;
	// bne 0x82e27e94
	if (!ctx.cr0.eq) goto loc_82E27E94;
loc_82E27EB0:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// stw r28,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r28.u32);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82e27ee4
	if (!ctx.cr6.eq) goto loc_82E27EE4;
	// lwz r10,0(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// li r6,4
	ctx.r6.s64 = 4;
	// clrlwi r5,r11,2
	ctx.r5.u64 = ctx.r11.u32 & 0x3FFFFFFF;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r9,16(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82E27EE4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82E27EE4:
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// stw r28,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r28.u32);
	// stw r26,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r26.u32);
	// addi r10,r11,10816
	ctx.r10.s64 = ctx.r11.s64 + 10816;
	// stw r10,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r10.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82fa76bc
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E27F00"))) PPC_WEAK_FUNC(sub_82E27F00);
PPC_FUNC_IMPL(__imp__sub_82E27F00) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82e27d28
	ctx.lr = 0x82E27F20;
	sub_82E27D28(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82e27f4c
	if (ctx.cr6.eq) goto loc_82E27F4C;
	// bl 0x82d2d090
	ctx.lr = 0x82E27F30;
	sub_82D2D090(ctx, base);
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lhz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82E27F4C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82E27F4C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
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

__attribute__((alias("__imp__sub_82E27F68"))) PPC_WEAK_FUNC(sub_82E27F68);
PPC_FUNC_IMPL(__imp__sub_82E27F68) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82e27de0
	ctx.lr = 0x82E27F88;
	sub_82E27DE0(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82e27fb4
	if (ctx.cr6.eq) goto loc_82E27FB4;
	// bl 0x82d2d090
	ctx.lr = 0x82E27F98;
	sub_82D2D090(ctx, base);
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lhz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82E27FB4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82E27FB4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
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

__attribute__((alias("__imp__sub_82E27FD0"))) PPC_WEAK_FUNC(sub_82E27FD0);
PPC_FUNC_IMPL(__imp__sub_82E27FD0) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// b 0x82e34670
	sub_82E34670(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E27FDC"))) PPC_WEAK_FUNC(sub_82E27FDC);
PPC_FUNC_IMPL(__imp__sub_82E27FDC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E27FE0"))) PPC_WEAK_FUNC(sub_82E27FE0);
PPC_FUNC_IMPL(__imp__sub_82E27FE0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82E27FF4"))) PPC_WEAK_FUNC(sub_82E27FF4);
PPC_FUNC_IMPL(__imp__sub_82E27FF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E27FF8"))) PPC_WEAK_FUNC(sub_82E27FF8);
PPC_FUNC_IMPL(__imp__sub_82E27FF8) {
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
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e34670
	ctx.lr = 0x82E28010;
	sub_82E34670(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E28024"))) PPC_WEAK_FUNC(sub_82E28024);
PPC_FUNC_IMPL(__imp__sub_82E28024) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E28028"))) PPC_WEAK_FUNC(sub_82E28028);
PPC_FUNC_IMPL(__imp__sub_82E28028) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31960
	ctx.r11.s64 = -2094530560;
	// addi r3,r11,-8452
	ctx.r3.s64 = ctx.r11.s64 + -8452;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E28034"))) PPC_WEAK_FUNC(sub_82E28034);
PPC_FUNC_IMPL(__imp__sub_82E28034) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E28038"))) PPC_WEAK_FUNC(sub_82E28038);
PPC_FUNC_IMPL(__imp__sub_82E28038) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// b 0x82e35208
	sub_82E35208(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E28044"))) PPC_WEAK_FUNC(sub_82E28044);
PPC_FUNC_IMPL(__imp__sub_82E28044) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E28048"))) PPC_WEAK_FUNC(sub_82E28048);
PPC_FUNC_IMPL(__imp__sub_82E28048) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82E2805C"))) PPC_WEAK_FUNC(sub_82E2805C);
PPC_FUNC_IMPL(__imp__sub_82E2805C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E28060"))) PPC_WEAK_FUNC(sub_82E28060);
PPC_FUNC_IMPL(__imp__sub_82E28060) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e35208
	ctx.lr = 0x82E28078;
	sub_82E35208(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E2808C"))) PPC_WEAK_FUNC(sub_82E2808C);
PPC_FUNC_IMPL(__imp__sub_82E2808C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E28090"))) PPC_WEAK_FUNC(sub_82E28090);
PPC_FUNC_IMPL(__imp__sub_82E28090) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31960
	ctx.r11.s64 = -2094530560;
	// addi r3,r11,-8388
	ctx.r3.s64 = ctx.r11.s64 + -8388;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E2809C"))) PPC_WEAK_FUNC(sub_82E2809C);
PPC_FUNC_IMPL(__imp__sub_82E2809C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E280A0"))) PPC_WEAK_FUNC(sub_82E280A0);
PPC_FUNC_IMPL(__imp__sub_82E280A0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82E280B4"))) PPC_WEAK_FUNC(sub_82E280B4);
PPC_FUNC_IMPL(__imp__sub_82E280B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E280B8"))) PPC_WEAK_FUNC(sub_82E280B8);
PPC_FUNC_IMPL(__imp__sub_82E280B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31960
	ctx.r11.s64 = -2094530560;
	// addi r3,r11,-8324
	ctx.r3.s64 = ctx.r11.s64 + -8324;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E280C4"))) PPC_WEAK_FUNC(sub_82E280C4);
PPC_FUNC_IMPL(__imp__sub_82E280C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E280C8"))) PPC_WEAK_FUNC(sub_82E280C8);
PPC_FUNC_IMPL(__imp__sub_82E280C8) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r11,-32237
	ctx.r11.s64 = -2112684032;
	// lis r10,-32237
	ctx.r10.s64 = -2112684032;
	// addi r8,r11,31300
	ctx.r8.s64 = ctx.r11.s64 + 31300;
	// addi r6,r10,31324
	ctx.r6.s64 = ctx.r10.s64 + 31324;
	// lis r9,-32237
	ctx.r9.s64 = -2112684032;
	// stw r8,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r8.u32);
	// stw r6,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r6.u32);
	// lis r7,-32237
	ctx.r7.s64 = -2112684032;
	// addi r6,r9,31344
	ctx.r6.s64 = ctx.r9.s64 + 31344;
	// lis r5,-32236
	ctx.r5.s64 = -2112618496;
	// lis r4,-32236
	ctx.r4.s64 = -2112618496;
	// stw r6,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r6.u32);
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// addi r9,r7,31312
	ctx.r9.s64 = ctx.r7.s64 + 31312;
	// lis r10,-32236
	ctx.r10.s64 = -2112618496;
	// lis r8,-32236
	ctx.r8.s64 = -2112618496;
	// stw r9,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r9.u32);
	// addi r7,r5,26988
	ctx.r7.s64 = ctx.r5.s64 + 26988;
	// addi r6,r4,26976
	ctx.r6.s64 = ctx.r4.s64 + 26976;
	// addi r5,r11,26956
	ctx.r5.s64 = ctx.r11.s64 + 26956;
	// stw r7,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r7.u32);
	// addi r4,r10,26944
	ctx.r4.s64 = ctx.r10.s64 + 26944;
	// stw r6,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r6.u32);
	// addi r11,r8,26932
	ctx.r11.s64 = ctx.r8.s64 + 26932;
	// stw r5,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r5.u32);
	// stw r4,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r4.u32);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E28140"))) PPC_WEAK_FUNC(sub_82E28140);
PPC_FUNC_IMPL(__imp__sub_82E28140) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// addi r3,r11,26988
	ctx.r3.s64 = ctx.r11.s64 + 26988;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E2814C"))) PPC_WEAK_FUNC(sub_82E2814C);
PPC_FUNC_IMPL(__imp__sub_82E2814C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E28150"))) PPC_WEAK_FUNC(sub_82E28150);
PPC_FUNC_IMPL(__imp__sub_82E28150) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82e2818c
	if (ctx.cr6.eq) goto loc_82E2818C;
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// addi r3,r3,20
	ctx.r3.s64 = ctx.r3.s64 + 20;
	// addi r10,r11,-11484
	ctx.r10.s64 = ctx.r11.s64 + -11484;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x82d372b8
	ctx.lr = 0x82E28180;
	sub_82D372B8(ctx, base);
	// lis r9,-32236
	ctx.r9.s64 = -2112618496;
	// addi r8,r9,27188
	ctx.r8.s64 = ctx.r9.s64 + 27188;
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
loc_82E2818C:
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

__attribute__((alias("__imp__sub_82E281A0"))) PPC_WEAK_FUNC(sub_82E281A0);
PPC_FUNC_IMPL(__imp__sub_82E281A0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82E281B4"))) PPC_WEAK_FUNC(sub_82E281B4);
PPC_FUNC_IMPL(__imp__sub_82E281B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E281B8"))) PPC_WEAK_FUNC(sub_82E281B8);
PPC_FUNC_IMPL(__imp__sub_82E281B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r10,r11,-11484
	ctx.r10.s64 = ctx.r11.s64 + -11484;
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// bl 0x82d372b8
	ctx.lr = 0x82E281DC;
	sub_82D372B8(ctx, base);
	// lis r9,-32236
	ctx.r9.s64 = -2112618496;
	// addi r3,r9,27188
	ctx.r3.s64 = ctx.r9.s64 + 27188;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E281F4"))) PPC_WEAK_FUNC(sub_82E281F4);
PPC_FUNC_IMPL(__imp__sub_82E281F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E281F8"))) PPC_WEAK_FUNC(sub_82E281F8);
PPC_FUNC_IMPL(__imp__sub_82E281F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31960
	ctx.r11.s64 = -2094530560;
	// addi r3,r11,-8260
	ctx.r3.s64 = ctx.r11.s64 + -8260;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E28204"))) PPC_WEAK_FUNC(sub_82E28204);
PPC_FUNC_IMPL(__imp__sub_82E28204) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E28208"))) PPC_WEAK_FUNC(sub_82E28208);
PPC_FUNC_IMPL(__imp__sub_82E28208) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82dd7e40
	ctx.lr = 0x82E28228;
	sub_82DD7E40(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82e28254
	if (ctx.cr6.eq) goto loc_82E28254;
	// bl 0x82d2d090
	ctx.lr = 0x82E28238;
	sub_82D2D090(ctx, base);
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lhz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82E28254;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82E28254:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
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

__attribute__((alias("__imp__sub_82E28270"))) PPC_WEAK_FUNC(sub_82E28270);
PPC_FUNC_IMPL(__imp__sub_82E28270) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// b 0x82e35c78
	sub_82E35C78(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E2827C"))) PPC_WEAK_FUNC(sub_82E2827C);
PPC_FUNC_IMPL(__imp__sub_82E2827C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E28280"))) PPC_WEAK_FUNC(sub_82E28280);
PPC_FUNC_IMPL(__imp__sub_82E28280) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82E28294"))) PPC_WEAK_FUNC(sub_82E28294);
PPC_FUNC_IMPL(__imp__sub_82E28294) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E28298"))) PPC_WEAK_FUNC(sub_82E28298);
PPC_FUNC_IMPL(__imp__sub_82E28298) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e35c78
	ctx.lr = 0x82E282B0;
	sub_82E35C78(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E282C4"))) PPC_WEAK_FUNC(sub_82E282C4);
PPC_FUNC_IMPL(__imp__sub_82E282C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E282C8"))) PPC_WEAK_FUNC(sub_82E282C8);
PPC_FUNC_IMPL(__imp__sub_82E282C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31960
	ctx.r11.s64 = -2094530560;
	// addi r3,r11,-8212
	ctx.r3.s64 = ctx.r11.s64 + -8212;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E282D4"))) PPC_WEAK_FUNC(sub_82E282D4);
PPC_FUNC_IMPL(__imp__sub_82E282D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E282D8"))) PPC_WEAK_FUNC(sub_82E282D8);
PPC_FUNC_IMPL(__imp__sub_82E282D8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82E282EC"))) PPC_WEAK_FUNC(sub_82E282EC);
PPC_FUNC_IMPL(__imp__sub_82E282EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E282F0"))) PPC_WEAK_FUNC(sub_82E282F0);
PPC_FUNC_IMPL(__imp__sub_82E282F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31960
	ctx.r11.s64 = -2094530560;
	// addi r3,r11,-8148
	ctx.r3.s64 = ctx.r11.s64 + -8148;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E282FC"))) PPC_WEAK_FUNC(sub_82E282FC);
PPC_FUNC_IMPL(__imp__sub_82E282FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E28300"))) PPC_WEAK_FUNC(sub_82E28300);
PPC_FUNC_IMPL(__imp__sub_82E28300) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82e28350
	if (ctx.cr6.eq) goto loc_82E28350;
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// addi r3,r3,20
	ctx.r3.s64 = ctx.r3.s64 + 20;
	// addi r10,r11,-11484
	ctx.r10.s64 = ctx.r11.s64 + -11484;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x82d372b8
	ctx.lr = 0x82E28330;
	sub_82D372B8(ctx, base);
	// lis r9,-32236
	ctx.r9.s64 = -2112618496;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r8,r9,27748
	ctx.r8.s64 = ctx.r9.s64 + 27748;
	// lis r7,-32768
	ctx.r7.s64 = -2147483648;
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// stw r7,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r7.u32);
loc_82E28350:
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

__attribute__((alias("__imp__sub_82E28364"))) PPC_WEAK_FUNC(sub_82E28364);
PPC_FUNC_IMPL(__imp__sub_82E28364) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E28368"))) PPC_WEAK_FUNC(sub_82E28368);
PPC_FUNC_IMPL(__imp__sub_82E28368) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r10,r11,-11484
	ctx.r10.s64 = ctx.r11.s64 + -11484;
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// bl 0x82d372b8
	ctx.lr = 0x82E2838C;
	sub_82D372B8(ctx, base);
	// lis r9,-32236
	ctx.r9.s64 = -2112618496;
	// addi r3,r9,27748
	ctx.r3.s64 = ctx.r9.s64 + 27748;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E283A4"))) PPC_WEAK_FUNC(sub_82E283A4);
PPC_FUNC_IMPL(__imp__sub_82E283A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E283A8"))) PPC_WEAK_FUNC(sub_82E283A8);
PPC_FUNC_IMPL(__imp__sub_82E283A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x82E283B0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r31,r3,84
	ctx.r31.s64 = ctx.r3.s64 + 84;
	// bl 0x82d2d090
	ctx.lr = 0x82E283C4;
	sub_82D2D090(ctx, base);
	// lwz r11,92(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 92);
	// li r28,0
	ctx.r28.s64 = 0;
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	// stw r28,88(r30)
	PPC_STORE_U32(ctx.r30.u32 + 88, ctx.r28.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82e283fc
	if (!ctx.cr6.eq) goto loc_82E283FC;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,4
	ctx.r6.s64 = 4;
	// clrlwi r5,r11,2
	ctx.r5.u64 = ctx.r11.u32 & 0x3FFFFFFF;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r9,16(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82E283FC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82E283FC:
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// stw r28,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r28.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// bl 0x82dd7e40
	ctx.lr = 0x82E28410;
	sub_82DD7E40(ctx, base);
	// clrlwi r10,r29,31
	ctx.r10.u64 = ctx.r29.u32 & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82e2843c
	if (ctx.cr6.eq) goto loc_82E2843C;
	// bl 0x82d2d090
	ctx.lr = 0x82E28420;
	sub_82D2D090(ctx, base);
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lhz r5,4(r30)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r30.u32 + 4);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82E2843C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82E2843C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82E28448"))) PPC_WEAK_FUNC(sub_82E28448);
PPC_FUNC_IMPL(__imp__sub_82E28448) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82E2845C"))) PPC_WEAK_FUNC(sub_82E2845C);
PPC_FUNC_IMPL(__imp__sub_82E2845C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E28460"))) PPC_WEAK_FUNC(sub_82E28460);
PPC_FUNC_IMPL(__imp__sub_82E28460) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31960
	ctx.r11.s64 = -2094530560;
	// addi r3,r11,-8084
	ctx.r3.s64 = ctx.r11.s64 + -8084;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E2846C"))) PPC_WEAK_FUNC(sub_82E2846C);
PPC_FUNC_IMPL(__imp__sub_82E2846C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E28470"))) PPC_WEAK_FUNC(sub_82E28470);
PPC_FUNC_IMPL(__imp__sub_82E28470) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// addi r10,r11,27908
	ctx.r10.s64 = ctx.r11.s64 + 27908;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E28488"))) PPC_WEAK_FUNC(sub_82E28488);
PPC_FUNC_IMPL(__imp__sub_82E28488) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// addi r3,r11,27908
	ctx.r3.s64 = ctx.r11.s64 + 27908;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E28494"))) PPC_WEAK_FUNC(sub_82E28494);
PPC_FUNC_IMPL(__imp__sub_82E28494) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E28498"))) PPC_WEAK_FUNC(sub_82E28498);
PPC_FUNC_IMPL(__imp__sub_82E28498) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82e36e48
	ctx.lr = 0x82E284B8;
	sub_82E36E48(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82e284e4
	if (ctx.cr6.eq) goto loc_82E284E4;
	// bl 0x82d2d090
	ctx.lr = 0x82E284C8;
	sub_82D2D090(ctx, base);
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lhz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82E284E4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82E284E4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
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

__attribute__((alias("__imp__sub_82E28500"))) PPC_WEAK_FUNC(sub_82E28500);
PPC_FUNC_IMPL(__imp__sub_82E28500) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82E28514"))) PPC_WEAK_FUNC(sub_82E28514);
PPC_FUNC_IMPL(__imp__sub_82E28514) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E28518"))) PPC_WEAK_FUNC(sub_82E28518);
PPC_FUNC_IMPL(__imp__sub_82E28518) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31960
	ctx.r11.s64 = -2094530560;
	// addi r3,r11,-8020
	ctx.r3.s64 = ctx.r11.s64 + -8020;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E28524"))) PPC_WEAK_FUNC(sub_82E28524);
PPC_FUNC_IMPL(__imp__sub_82E28524) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E28528"))) PPC_WEAK_FUNC(sub_82E28528);
PPC_FUNC_IMPL(__imp__sub_82E28528) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82e28564
	if (ctx.cr6.eq) goto loc_82E28564;
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// addi r3,r3,56
	ctx.r3.s64 = ctx.r3.s64 + 56;
	// addi r10,r11,-6532
	ctx.r10.s64 = ctx.r11.s64 + -6532;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// bl 0x82d372b8
	ctx.lr = 0x82E28558;
	sub_82D372B8(ctx, base);
	// lis r9,-32236
	ctx.r9.s64 = -2112618496;
	// addi r8,r9,27996
	ctx.r8.s64 = ctx.r9.s64 + 27996;
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
loc_82E28564:
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

__attribute__((alias("__imp__sub_82E28578"))) PPC_WEAK_FUNC(sub_82E28578);
PPC_FUNC_IMPL(__imp__sub_82E28578) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r10,r11,-6532
	ctx.r10.s64 = ctx.r11.s64 + -6532;
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// bl 0x82d372b8
	ctx.lr = 0x82E2859C;
	sub_82D372B8(ctx, base);
	// lis r9,-32236
	ctx.r9.s64 = -2112618496;
	// addi r3,r9,27996
	ctx.r3.s64 = ctx.r9.s64 + 27996;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E285B4"))) PPC_WEAK_FUNC(sub_82E285B4);
PPC_FUNC_IMPL(__imp__sub_82E285B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E285B8"))) PPC_WEAK_FUNC(sub_82E285B8);
PPC_FUNC_IMPL(__imp__sub_82E285B8) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82e37970
	ctx.lr = 0x82E285D8;
	sub_82E37970(ctx, base);
	// clrlwi r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82e28604
	if (ctx.cr6.eq) goto loc_82E28604;
	// bl 0x82d2d090
	ctx.lr = 0x82E285E8;
	sub_82D2D090(ctx, base);
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lhz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82E28604;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82E28604:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
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

__attribute__((alias("__imp__sub_82E28620"))) PPC_WEAK_FUNC(sub_82E28620);
PPC_FUNC_IMPL(__imp__sub_82E28620) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E28624"))) PPC_WEAK_FUNC(sub_82E28624);
PPC_FUNC_IMPL(__imp__sub_82E28624) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E28628"))) PPC_WEAK_FUNC(sub_82E28628);
PPC_FUNC_IMPL(__imp__sub_82E28628) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31960
	ctx.r11.s64 = -2094530560;
	// addi r3,r11,-7876
	ctx.r3.s64 = ctx.r11.s64 + -7876;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E28634"))) PPC_WEAK_FUNC(sub_82E28634);
PPC_FUNC_IMPL(__imp__sub_82E28634) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E28638"))) PPC_WEAK_FUNC(sub_82E28638);
PPC_FUNC_IMPL(__imp__sub_82E28638) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E2863C"))) PPC_WEAK_FUNC(sub_82E2863C);
PPC_FUNC_IMPL(__imp__sub_82E2863C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E28640"))) PPC_WEAK_FUNC(sub_82E28640);
PPC_FUNC_IMPL(__imp__sub_82E28640) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31960
	ctx.r11.s64 = -2094530560;
	// addi r3,r11,-7924
	ctx.r3.s64 = ctx.r11.s64 + -7924;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E2864C"))) PPC_WEAK_FUNC(sub_82E2864C);
PPC_FUNC_IMPL(__imp__sub_82E2864C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E28650"))) PPC_WEAK_FUNC(sub_82E28650);
PPC_FUNC_IMPL(__imp__sub_82E28650) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82E28664"))) PPC_WEAK_FUNC(sub_82E28664);
PPC_FUNC_IMPL(__imp__sub_82E28664) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E28668"))) PPC_WEAK_FUNC(sub_82E28668);
PPC_FUNC_IMPL(__imp__sub_82E28668) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31960
	ctx.r11.s64 = -2094530560;
	// addi r3,r11,-7972
	ctx.r3.s64 = ctx.r11.s64 + -7972;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82E28674"))) PPC_WEAK_FUNC(sub_82E28674);
PPC_FUNC_IMPL(__imp__sub_82E28674) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82E28678"))) PPC_WEAK_FUNC(sub_82E28678);
PPC_FUNC_IMPL(__imp__sub_82E28678) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r11,-32236
	ctx.r11.s64 = -2112618496;
	// addi r10,r11,28372
	ctx.r10.s64 = ctx.r11.s64 + 28372;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

