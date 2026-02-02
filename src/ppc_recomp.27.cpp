#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_82360E88"))) PPC_WEAK_FUNC(sub_82360E88);
PPC_FUNC_IMPL(__imp__sub_82360E88) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x82360E90;
	__savegprlr_29(ctx, base);
	// li r12,-48
	ctx.r12.s64 = -48;
	// stvx128 v127,r1,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r1.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v127.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// rlwinm r30,r4,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// lwzx r11,r11,r30
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi. r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82360fac
	if (ctx.cr0.eq) goto loc_82360FAC;
	// bl 0x823da478
	ctx.lr = 0x82360EC8;
	sub_823DA478(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwzx r8,r11,r30
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// lwz r11,16(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 16);
	// lwz r10,0(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// bl 0x824fa600
	ctx.lr = 0x82360EF0;
	sub_824FA600(ctx, base);
	// lwz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82360f14
	if (ctx.cr6.eq) goto loc_82360F14;
	// lwz r10,352(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 352);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82360f14
	if (ctx.cr6.eq) goto loc_82360F14;
	// li r10,304
	ctx.r10.s64 = 304;
	// lvx128 v127,r11,r10
	simd::store_shuffled(ctx.v127, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r10.u32) & ~0xF), VectorMaskL));
	// b 0x82360f1c
	goto loc_82360F1C;
loc_82360F14:
	// li r11,128
	ctx.r11.s64 = 128;
	// lvx128 v127,r3,r11
	simd::store_shuffled(ctx.v127, simd::load_and_shuffle(base + ((ctx.r3.u32 + ctx.r11.u32) & ~0xF), VectorMaskL));
loc_82360F1C:
	// mr r4,r8
	ctx.r4.u64 = ctx.r8.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x824f9910
	ctx.lr = 0x82360F28;
	sub_824F9910(ctx, base);
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// lfs f0,-2340(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -2340);
	ctx.f0.f64 = double(temp.f32);
	// lvx128 v0,r0,r11
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// lwz r9,28(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// lvx128 v13,r0,r11
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// vsubfp128 v13,v127,v13
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v13.f32, _mm_sub_ps(_mm_load_ps(ctx.v127.f32), _mm_load_ps(ctx.v13.f32)));
	// vmsum3fp128 v0,v0,v13
	_mm_store_ps(ctx.v0.f32, _mm_dp_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v13.f32), 0xEF));
	// stvx128 v0,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lfs f13,96(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// blt cr6,0x82360fac
	if (ctx.cr6.lt) goto loc_82360FAC;
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// lis r11,25
	ctx.r11.s64 = 1638400;
	// lis r9,-32227
	ctx.r9.s64 = -2112028672;
	// ori r8,r11,26125
	ctx.r8.u64 = ctx.r11.u64 | 26125;
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r11,21292(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 21292);
	// mullw r11,r11,r8
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r8.s32);
	// lfs f0,-24756(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -24756);
	ctx.f0.f64 = double(temp.f32);
	// addis r11,r11,15471
	ctx.r11.s64 = ctx.r11.s64 + 1013907456;
	// addi r11,r11,-3233
	ctx.r11.s64 = ctx.r11.s64 + -3233;
	// stw r11,21292(r10)
	PPC_STORE_U32(ctx.r10.u32 + 21292, ctx.r11.u32);
	// lfs f13,0(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// clrlwi r11,r11,9
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFFF;
	// oris r11,r11,16256
	ctx.r11.u64 = ctx.r11.u64 | 1065353216;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lfs f12,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x82360fb0
	if (ctx.cr6.lt) goto loc_82360FB0;
loc_82360FAC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82360FB0:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// li r0,-48
	ctx.r0.s64 = -48;
	// lvx128 v127,r1,r0
	simd::store_shuffled(ctx.v127, simd::load_and_shuffle(base + ((ctx.r1.u32 + ctx.r0.u32) & ~0xF), VectorMaskL));
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82360FC0"))) PPC_WEAK_FUNC(sub_82360FC0);
PPC_FUNC_IMPL(__imp__sub_82360FC0) {
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
	// cntlzw r11,r4
	ctx.r11.u64 = ctx.r4.u32 == 0 ? 32 : __builtin_clz(ctx.r4.u32);
	// lwz r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// rlwinm r11,r11,29,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x4;
	// lwzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// rlwinm. r11,r11,0,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFC;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82361094
	if (!ctx.cr0.eq) goto loc_82361094;
	// bl 0x823da3b8
	ctx.lr = 0x82361000;
	sub_823DA3B8(ctx, base);
	// mulli r11,r3,300
	ctx.r11.s64 = ctx.r3.s64 * 300;
	// lwz r10,5016(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 5016);
	// add r30,r11,r31
	ctx.r30.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r11,1368(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1368);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82361094
	if (!ctx.cr6.lt) goto loc_82361094;
	// lfs f0,5020(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 5020);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,1364(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1364);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x82361094
	if (!ctx.cr6.gt) goto loc_82361094;
	// lis r11,-31955
	ctx.r11.s64 = -2094202880;
	// lwz r3,30428(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 30428);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8236103c
	if (!ctx.cr6.eq) goto loc_8236103C;
	// bl 0x822599a0
	ctx.lr = 0x8236103C;
	sub_822599A0(ctx, base);
loc_8236103C:
	// lbz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 4);
	// li r3,1
	ctx.r3.s64 = 1;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82361098
	if (!ctx.cr0.eq) goto loc_82361098;
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// lfs f13,1360(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1360);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,25
	ctx.r11.s64 = 1638400;
	// lis r9,-32227
	ctx.r9.s64 = -2112028672;
	// ori r8,r11,26125
	ctx.r8.u64 = ctx.r11.u64 | 26125;
	// lwz r11,21292(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 21292);
	// mullw r11,r11,r8
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r8.s32);
	// lfs f0,-24756(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -24756);
	ctx.f0.f64 = double(temp.f32);
	// addis r11,r11,15471
	ctx.r11.s64 = ctx.r11.s64 + 1013907456;
	// addi r11,r11,-3233
	ctx.r11.s64 = ctx.r11.s64 + -3233;
	// clrlwi r9,r11,9
	ctx.r9.u64 = ctx.r11.u32 & 0x7FFFFF;
	// stw r11,21292(r10)
	PPC_STORE_U32(ctx.r10.u32 + 21292, ctx.r11.u32);
	// oris r11,r9,16256
	ctx.r11.u64 = ctx.r9.u64 | 1065353216;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lfs f12,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x82361098
	if (!ctx.cr6.gt) goto loc_82361098;
loc_82361094:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82361098:
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

__attribute__((alias("__imp__sub_823610B0"))) PPC_WEAK_FUNC(sub_823610B0);
PPC_FUNC_IMPL(__imp__sub_823610B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x823610B8;
	__savegprlr_29(ctx, base);
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,48(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,52(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// li r29,1
	ctx.r29.s64 = 1;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8236114c
	if (ctx.cr6.eq) goto loc_8236114C;
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// lfs f31,17660(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 17660);
	ctx.f31.f64 = double(temp.f32);
loc_823610E0:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x824261e8
	ctx.lr = 0x823610EC;
	sub_824261E8(ctx, base);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,692(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 692);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82361118
	if (ctx.cr6.eq) goto loc_82361118;
	// lwz r11,864(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 864);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82361118
	if (ctx.cr6.eq) goto loc_82361118;
	// lfs f0,12(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// stb r29,24(r11)
	PPC_STORE_U8(ctx.r11.u32 + 24, ctx.r29.u8);
	// stfs f0,28(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 28, temp.u32);
	// stfs f31,32(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 32, temp.u32);
loc_82361118:
	// lwz r11,608(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 608);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bge cr6,0x82361128
	if (!ctx.cr6.lt) goto loc_82361128;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_82361128:
	// stw r11,608(r9)
	PPC_STORE_U32(ctx.r9.u32 + 608, ctx.r11.u32);
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8236113c
	if (ctx.cr6.eq) goto loc_8236113C;
	// bl 0x82241d18
	ctx.lr = 0x8236113C;
	sub_82241D18(ctx, base);
loc_8236113C:
	// lwz r11,52(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x823610e0
	if (!ctx.cr6.eq) goto loc_823610E0;
loc_8236114C:
	// addic. r11,r30,4136
	ctx.xer.ca = ctx.r30.u32 > 4294963159;
	ctx.r11.s64 = ctx.r30.s64 + 4136;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82361164
	if (ctx.cr0.eq) goto loc_82361164;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addic r9,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// subfe r10,r9,r10
	temp.u8 = (~ctx.r9.u32 + ctx.r10.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r9.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// b 0x82361168
	goto loc_82361168;
loc_82361164:
	// li r10,0
	ctx.r10.s64 = 0;
loc_82361168:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x823611a4
	if (ctx.cr6.eq) goto loc_823611A4;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lis r10,-31955
	ctx.r10.s64 = -2094202880;
	// lwz r9,4096(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4096);
	// lis r8,-31955
	ctx.r8.s64 = -2094202880;
	// addi r6,r10,26796
	ctx.r6.s64 = ctx.r10.s64 + 26796;
	// addi r5,r8,26780
	ctx.r5.s64 = ctx.r8.s64 + 26780;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lwz r4,0(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// bl 0x8256f138
	ctx.lr = 0x82361198;
	sub_8256F138(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82570318
	ctx.lr = 0x823611A4;
	sub_82570318(ctx, base);
loc_823611A4:
	// stw r29,4036(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4036, ctx.r29.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823611B4"))) PPC_WEAK_FUNC(sub_823611B4);
PPC_FUNC_IMPL(__imp__sub_823611B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823611B8"))) PPC_WEAK_FUNC(sub_823611B8);
PPC_FUNC_IMPL(__imp__sub_823611B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
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
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lwz r31,1200(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1200);
	// lfs f0,-2340(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -2340);
	ctx.f0.f64 = double(temp.f32);
	// stfs f1,936(r31)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 936, temp.u32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bne cr6,0x82361220
	if (!ctx.cr6.eq) goto loc_82361220;
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// addi r11,r11,23144
	ctx.r11.s64 = ctx.r11.s64 + 23144;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82361220
	if (ctx.cr6.eq) goto loc_82361220;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// lis r9,-32229
	ctx.r9.s64 = -2112159744;
	// addi r7,r10,31968
	ctx.r7.s64 = ctx.r10.s64 + 31968;
	// addi r6,r9,32080
	ctx.r6.s64 = ctx.r9.s64 + 32080;
	// li r8,620
	ctx.r8.s64 = 620;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bctrl 
	ctx.lr = 0x82361220;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82361220:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,932(r31)
	PPC_STORE_U32(ctx.r31.u32 + 932, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_8236123C"))) PPC_WEAK_FUNC(sub_8236123C);
PPC_FUNC_IMPL(__imp__sub_8236123C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82361240"))) PPC_WEAK_FUNC(sub_82361240);
PPC_FUNC_IMPL(__imp__sub_82361240) {
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
	// lwz r30,1200(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1200);
	// lwz r11,932(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 932);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823612dc
	if (ctx.cr6.eq) goto loc_823612DC;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lfs f13,936(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 936);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,-2340(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -2340);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgt cr6,0x823612f8
	if (ctx.cr6.gt) goto loc_823612F8;
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// addi r31,r11,23144
	ctx.r31.s64 = ctx.r11.s64 + 23144;
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8236129c
	if (ctx.cr6.eq) goto loc_8236129C;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82361298;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x823612a0
	goto loc_823612A0;
loc_8236129C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823612A0:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x823612f8
	if (ctx.cr6.eq) goto loc_823612F8;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,932(r30)
	PPC_STORE_U32(ctx.r30.u32 + 932, ctx.r11.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823612dc
	if (ctx.cr6.eq) goto loc_823612DC;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// lis r9,-32229
	ctx.r9.s64 = -2112159744;
	// addi r4,r10,31968
	ctx.r4.s64 = ctx.r10.s64 + 31968;
	// addi r3,r9,32128
	ctx.r3.s64 = ctx.r9.s64 + 32128;
	// li r5,629
	ctx.r5.s64 = 629;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823612DC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_823612DC:
	// li r3,1
	ctx.r3.s64 = 1;
loc_823612E0:
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
loc_823612F8:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x823612e0
	goto loc_823612E0;
}

__attribute__((alias("__imp__sub_82361300"))) PPC_WEAK_FUNC(sub_82361300);
PPC_FUNC_IMPL(__imp__sub_82361300) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x82361308;
	__savegprlr_29(ctx, base);
	// stwu r1,-720(r1)
	ea = -720 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// li r5,256
	ctx.r5.s64 = 256;
	// addi r6,r11,14928
	ctx.r6.s64 = ctx.r11.s64 + 14928;
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8234aa60
	ctx.lr = 0x8236132C;
	sub_8234AA60(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// addi r5,r11,-10716
	ctx.r5.s64 = ctx.r11.s64 + -10716;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82563c28
	ctx.lr = 0x82361344;
	sub_82563C28(ctx, base);
	// lwz r11,212(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 212);
	// lwz r31,20(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82361380
	if (!ctx.cr6.eq) goto loc_82361380;
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// addi r5,r1,176
	ctx.r5.s64 = ctx.r1.s64 + 176;
	// addi r4,r30,48
	ctx.r4.s64 = ctx.r30.s64 + 48;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253cb60
	ctx.lr = 0x8236136C;
	sub_8253CB60(ctx, base);
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r10,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r10.u32);
	// lfs f0,7008(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 7008);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,16(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
loc_82361380:
	// addi r1,r1,720
	ctx.r1.s64 = ctx.r1.s64 + 720;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82361388"))) PPC_WEAK_FUNC(sub_82361388);
PPC_FUNC_IMPL(__imp__sub_82361388) {
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
	// lwz r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// rlwinm r6,r4,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// addi r31,r11,14952
	ctx.r31.s64 = ctx.r11.s64 + 14952;
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// lwzx r11,r10,r6
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r6.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi r5,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r5.s64 = ctx.r11.s32 >> 2;
	// cmplwi cr6,r5,1
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 1, ctx.xer);
	// ble cr6,0x82361404
	if (!ctx.cr6.gt) goto loc_82361404;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwzx r11,r11,r6
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r6.u32);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// bl 0x824fa600
	ctx.lr = 0x823613F8;
	sub_824FA600(ctx, base);
	// addic. r7,r3,48
	ctx.xer.ca = ctx.r3.u32 > 4294967247;
	ctx.r7.s64 = ctx.r3.s64 + 48;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne 0x82361404
	if (!ctx.cr0.eq) goto loc_82361404;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
loc_82361404:
	// lwz r11,8(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwzx r11,r11,r6
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r6.u32);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// bl 0x824fa600
	ctx.lr = 0x82361428;
	sub_824FA600(ctx, base);
	// addic. r6,r3,48
	ctx.xer.ca = ctx.r3.u32 > 4294967247;
	ctx.r6.s64 = ctx.r3.s64 + 48;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bne 0x82361434
	if (!ctx.cr0.eq) goto loc_82361434;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
loc_82361434:
	// cmplwi cr6,r5,2
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 2, ctx.xer);
	// li r4,96
	ctx.r4.s64 = 96;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bne cr6,0x82361454
	if (!ctx.cr6.eq) goto loc_82361454;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r5,r11,14964
	ctx.r5.s64 = ctx.r11.s64 + 14964;
	// bl 0x82563c28
	ctx.lr = 0x82361450;
	sub_82563C28(ctx, base);
	// b 0x82361460
	goto loc_82361460;
loc_82361454:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r5,r11,-27324
	ctx.r5.s64 = ctx.r11.s64 + -27324;
	// bl 0x82563c28
	ctx.lr = 0x82361460;
	sub_82563C28(ctx, base);
loc_82361460:
	// li r3,1
	ctx.r3.s64 = 1;
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

__attribute__((alias("__imp__sub_8236147C"))) PPC_WEAK_FUNC(sub_8236147C);
PPC_FUNC_IMPL(__imp__sub_8236147C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82361480"))) PPC_WEAK_FUNC(sub_82361480);
PPC_FUNC_IMPL(__imp__sub_82361480) {
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
	// ld r12,-4096(r1)
	ctx.r12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -4096);
	// stwu r1,-4400(r1)
	ea = -4400 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82361388
	ctx.lr = 0x823614A8;
	sub_82361388(ctx, base);
	// lwz r11,1200(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1200);
	// lis r10,-32231
	ctx.r10.s64 = -2112290816;
	// rlwinm r9,r30,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r10,6156
	ctx.r10.s64 = ctx.r10.s64 + 6156;
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// li r5,1024
	ctx.r5.s64 = 1024;
	// lwzx r6,r9,r10
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// lwz r31,212(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 212);
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// beq 0x82361500
	if (ctx.cr0.eq) goto loc_82361500;
	// addi r4,r1,272
	ctx.r4.s64 = ctx.r1.s64 + 272;
	// bl 0x8234aa60
	ctx.lr = 0x823614DC;
	sub_8234AA60(ctx, base);
	// lwz r31,56(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lwz r11,4640(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4640);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82361530
	if (!ctx.cr6.eq) goto loc_82361530;
	// addi r5,r1,272
	ctx.r5.s64 = ctx.r1.s64 + 272;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82539030
	ctx.lr = 0x823614FC;
	sub_82539030(ctx, base);
	// b 0x82361524
	goto loc_82361524;
loc_82361500:
	// addi r4,r1,2320
	ctx.r4.s64 = ctx.r1.s64 + 2320;
	// bl 0x8234aa60
	ctx.lr = 0x82361508;
	sub_8234AA60(ctx, base);
	// lwz r31,56(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lwz r11,4640(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4640);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82361530
	if (!ctx.cr6.eq) goto loc_82361530;
	// addi r4,r1,2320
	ctx.r4.s64 = ctx.r1.s64 + 2320;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82538f08
	ctx.lr = 0x82361524;
	sub_82538F08(ctx, base);
loc_82361524:
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// lfs f0,7008(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 7008);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4636(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4636, temp.u32);
loc_82361530:
	// addi r1,r1,4400
	ctx.r1.s64 = ctx.r1.s64 + 4400;
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

__attribute__((alias("__imp__sub_82361548"))) PPC_WEAK_FUNC(sub_82361548);
PPC_FUNC_IMPL(__imp__sub_82361548) {
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
	// stwu r1,-2352(r1)
	ea = -2352 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82361388
	ctx.lr = 0x8236156C;
	sub_82361388(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x823615cc
	if (ctx.cr0.eq) goto loc_823615CC;
	// lwz r11,1200(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1200);
	// lis r10,-32231
	ctx.r10.s64 = -2112290816;
	// rlwinm r9,r30,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r10,6156
	ctx.r10.s64 = ctx.r10.s64 + 6156;
	// li r5,1024
	ctx.r5.s64 = 1024;
	// addi r4,r1,272
	ctx.r4.s64 = ctx.r1.s64 + 272;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwzx r6,r9,r10
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// lwz r31,212(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 212);
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// bl 0x8234aa60
	ctx.lr = 0x823615A0;
	sub_8234AA60(ctx, base);
	// lwz r31,60(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// lwz r11,4640(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4640);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x823615cc
	if (!ctx.cr6.eq) goto loc_823615CC;
	// addi r5,r1,272
	ctx.r5.s64 = ctx.r1.s64 + 272;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82539030
	ctx.lr = 0x823615C0;
	sub_82539030(ctx, base);
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// lfs f0,7008(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 7008);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,4636(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4636, temp.u32);
loc_823615CC:
	// addi r1,r1,2352
	ctx.r1.s64 = ctx.r1.s64 + 2352;
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

__attribute__((alias("__imp__sub_823615E4"))) PPC_WEAK_FUNC(sub_823615E4);
PPC_FUNC_IMPL(__imp__sub_823615E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823615E8"))) PPC_WEAK_FUNC(sub_823615E8);
PPC_FUNC_IMPL(__imp__sub_823615E8) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,1200(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1200);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r30,212(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 212);
	// stw r11,132(r30)
	PPC_STORE_U32(ctx.r30.u32 + 132, ctx.r11.u32);
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// bl 0x8253f838
	ctx.lr = 0x8236162C;
	sub_8253F838(ctx, base);
	// fctiwz f0,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f31.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f31.f64));
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwa r11,84(r1)
	ctx.r11.s64 = int32_t(PPC_LOAD_U32(ctx.r1.u32 + 84));
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lfd f0,80(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// lfs f0,-15356(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -15356);
	ctx.f0.f64 = double(temp.f32);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// lfs f1,-2340(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -2340);
	ctx.f1.f64 = double(temp.f32);
	// frsp f2,f13
	ctx.f2.f64 = double(float(ctx.f13.f64));
	// fsubs f13,f31,f2
	ctx.f13.f64 = double(float(ctx.f31.f64 - ctx.f2.f64));
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f0.f64));
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwa r11,84(r1)
	ctx.r11.s64 = int32_t(PPC_LOAD_U32(ctx.r1.u32 + 84));
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f3,f0
	ctx.f3.f64 = double(float(ctx.f0.f64));
	// bl 0x8253ed38
	ctx.lr = 0x82361688;
	sub_8253ED38(ctx, base);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8253ee40
	ctx.lr = 0x82361698;
	sub_8253EE40(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f31,-32(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823616B4"))) PPC_WEAK_FUNC(sub_823616B4);
PPC_FUNC_IMPL(__imp__sub_823616B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823616B8"))) PPC_WEAK_FUNC(sub_823616B8);
PPC_FUNC_IMPL(__imp__sub_823616B8) {
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
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lwz r5,8(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x8246a208
	ctx.lr = 0x823616D8;
	sub_8246A208(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823616EC"))) PPC_WEAK_FUNC(sub_823616EC);
PPC_FUNC_IMPL(__imp__sub_823616EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823616F0"))) PPC_WEAK_FUNC(sub_823616F0);
PPC_FUNC_IMPL(__imp__sub_823616F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7674
	ctx.lr = 0x823616F8;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// li r27,0
	ctx.r27.s64 = 0;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r29,r27
	ctx.r29.u64 = ctx.r27.u64;
	// lwzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r28,8(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x8236179c
	if (ctx.cr6.eq) goto loc_8236179C;
loc_82361724:
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// bl 0x824fa600
	ctx.lr = 0x8236173C;
	sub_824FA600(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,36(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8236175c
	if (ctx.cr6.eq) goto loc_8236175C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8236175C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8236175C:
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82361790
	if (ctx.cr6.eq) goto loc_82361790;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r27,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r27.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,2240(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2240);
	// stw r27,144(r11)
	PPC_STORE_U32(ctx.r11.u32 + 144, ctx.r27.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82361790;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82361790:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmplw cr6,r29,r28
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r28.u32, ctx.xer);
	// blt cr6,0x82361724
	if (ctx.cr6.lt) goto loc_82361724;
loc_8236179C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823617A4"))) PPC_WEAK_FUNC(sub_823617A4);
PPC_FUNC_IMPL(__imp__sub_823617A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823617A8"))) PPC_WEAK_FUNC(sub_823617A8);
PPC_FUNC_IMPL(__imp__sub_823617A8) {
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
	// stfd f30,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f30.u64);
	// stfd f31,-32(r1)
	PPC_STORE_U64(ctx.r1.u32 + -32, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,88(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,17
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 17, ctx.xer);
	// beq cr6,0x823617f0
	if (ctx.cr6.eq) goto loc_823617F0;
	// lwz r11,84(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 84);
	// cmplwi cr6,r11,17
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 17, ctx.xer);
	// beq cr6,0x823617f0
	if (ctx.cr6.eq) goto loc_823617F0;
	// addi r3,r3,2792
	ctx.r3.s64 = ctx.r3.s64 + 2792;
	// bl 0x8235c7b0
	ctx.lr = 0x823617E8;
	sub_8235C7B0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x823618ec
	if (!ctx.cr0.eq) goto loc_823618EC;
loc_823617F0:
	// lwz r31,2464(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2464);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x823618ec
	if (ctx.cr6.eq) goto loc_823618EC;
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823618ec
	if (ctx.cr6.eq) goto loc_823618EC;
	// lwz r3,360(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 360);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82361820
	if (ctx.cr6.eq) goto loc_82361820;
	// bl 0x828c11f8
	ctx.lr = 0x82361818;
	sub_828C11F8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// b 0x82361824
	goto loc_82361824;
loc_82361820:
	// lwz r11,364(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 364);
loc_82361824:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823618ec
	if (ctx.cr6.eq) goto loc_823618EC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,44(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// bl 0x8235ede0
	ctx.lr = 0x82361838;
	sub_8235EDE0(ctx, base);
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// beq cr6,0x8236184c
	if (ctx.cr6.eq) goto loc_8236184C;
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne cr6,0x82361850
	if (!ctx.cr6.eq) goto loc_82361850;
loc_8236184C:
	// li r11,1
	ctx.r11.s64 = 1;
loc_82361850:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82361878
	if (!ctx.cr0.eq) goto loc_82361878;
	// lis r11,-31955
	ctx.r11.s64 = -2094202880;
	// lwz r3,30428(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 30428);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8236186c
	if (!ctx.cr6.eq) goto loc_8236186C;
	// bl 0x822599a0
	ctx.lr = 0x8236186C;
	sub_822599A0(ctx, base);
loc_8236186C:
	// lbz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 4);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x823618ec
	if (ctx.cr0.eq) goto loc_823618EC;
loc_82361878:
	// bl 0x823da3b8
	ctx.lr = 0x8236187C;
	sub_823DA3B8(ctx, base);
	// mulli r11,r3,300
	ctx.r11.s64 = ctx.r3.s64 * 300;
	// lfs f30,3860(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 3860);
	ctx.f30.f64 = double(temp.f32);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r10,r11,1420
	ctx.r10.s64 = ctx.r11.s64 + 1420;
	// lfs f31,1420(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 1420);
	ctx.f31.f64 = double(temp.f32);
	// bl 0x828b5b38
	ctx.lr = 0x82361894;
	sub_828B5B38(ctx, base);
	// bl 0x823b8d18
	ctx.lr = 0x82361898;
	sub_823B8D18(ctx, base);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// lfs f0,-23580(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -23580);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f0,f1,f0,f31
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f0.f64 + ctx.f31.f64));
	// fcmpu cr6,f30,f0
	ctx.cr6.compare(ctx.f30.f64, ctx.f0.f64);
	// blt cr6,0x823618c0
	if (ctx.cr6.lt) goto loc_823618C0;
	// li r4,32
	ctx.r4.s64 = 32;
	// lwz r3,1208(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1208);
	// bl 0x823d9eb0
	ctx.lr = 0x823618B8;
	sub_823D9EB0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x823618f0
	goto loc_823618F0;
loc_823618C0:
	// lis r11,-31968
	ctx.r11.s64 = -2095054848;
	// addi r11,r11,15128
	ctx.r11.s64 = ctx.r11.s64 + 15128;
	// lfs f0,576(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 576);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f13,f0,f31
	ctx.f13.f64 = double(float(ctx.f0.f64 - ctx.f31.f64));
	// fsel f0,f13,f31,f0
	ctx.f0.f64 = ctx.f13.f64 >= 0.0 ? ctx.f31.f64 : ctx.f0.f64;
	// fsubs f0,f31,f0
	ctx.f0.f64 = double(float(ctx.f31.f64 - ctx.f0.f64));
	// fcmpu cr6,f30,f0
	ctx.cr6.compare(ctx.f30.f64, ctx.f0.f64);
	// blt cr6,0x823618ec
	if (ctx.cr6.lt) goto loc_823618EC;
	// li r4,31
	ctx.r4.s64 = 31;
	// lwz r3,1208(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1208);
	// bl 0x823d9eb0
	ctx.lr = 0x823618EC;
	sub_823D9EB0(ctx, base);
loc_823618EC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823618F0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f30,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// lfd f31,-32(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82361910"))) PPC_WEAK_FUNC(sub_82361910);
PPC_FUNC_IMPL(__imp__sub_82361910) {
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
	// lwz r31,1200(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1200);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8236197c
	if (ctx.cr6.eq) goto loc_8236197C;
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82361974
	if (ctx.cr6.eq) goto loc_82361974;
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82361974
	if (ctx.cr6.eq) goto loc_82361974;
	// lwz r10,56(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82361974
	if (!ctx.cr6.eq) goto loc_82361974;
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r3,60(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// lis r9,-32228
	ctx.r9.s64 = -2112094208;
	// stw r10,56(r11)
	PPC_STORE_U32(ctx.r11.u32 + 56, ctx.r10.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r9,7744
	ctx.r4.s64 = ctx.r9.s64 + 7744;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x826a7620
	ctx.lr = 0x82361974;
	sub_826A7620(ctx, base);
loc_82361974:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
loc_8236197C:
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

__attribute__((alias("__imp__sub_82361990"))) PPC_WEAK_FUNC(sub_82361990);
PPC_FUNC_IMPL(__imp__sub_82361990) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7674
	ctx.lr = 0x82361998;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31955
	ctx.r11.s64 = -2094202880;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lwz r11,30428(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 30428);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823619bc
	if (!ctx.cr6.eq) goto loc_823619BC;
	// bl 0x822599a0
	ctx.lr = 0x823619B8;
	sub_822599A0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_823619BC:
	// lbz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x823619d4
	if (ctx.cr0.eq) goto loc_823619D4;
	// lwz r11,204(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 204);
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x82361b24
	if (!ctx.cr6.eq) goto loc_82361B24;
loc_823619D4:
	// lwz r10,1164(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1164);
	// li r27,1
	ctx.r27.s64 = 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x823619fc
	if (ctx.cr6.eq) goto loc_823619FC;
	// lwz r11,1168(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1168);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bge cr6,0x823619fc
	if (!ctx.cr6.lt) goto loc_823619FC;
	// addi r11,r11,89
	ctx.r11.s64 = ctx.r11.s64 + 89;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r27,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r27.u32);
loc_823619FC:
	// lwz r10,1212(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1212);
	// mulli r11,r29,132
	ctx.r11.s64 = ctx.r29.s64 * 132;
	// lwz r9,32(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r10,r29,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwzx r28,r10,r9
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// blt cr6,0x82361a88
	if (ctx.cr6.lt) goto loc_82361A88;
	// bl 0x823da3b8
	ctx.lr = 0x82361A24;
	sub_823DA3B8(ctx, base);
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// blt cr6,0x82361a88
	if (ctx.cr6.lt) goto loc_82361A88;
	// cntlzw r11,r29
	ctx.r11.u64 = ctx.r29.u32 == 0 ? 32 : __builtin_clz(ctx.r29.u32);
	// lwz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// rlwinm r11,r11,29,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x4;
	// lwzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82361a88
	if (!ctx.cr6.eq) goto loc_82361A88;
	// lwz r30,0(r28)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// b 0x82361a7c
	goto loc_82361A7C;
loc_82361A54:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r3,52(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82361a78
	if (ctx.cr6.eq) goto loc_82361A78;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,31
	ctx.r4.s64 = 31;
	// bl 0x824f8f78
	ctx.lr = 0x82361A78;
	sub_824F8F78(ctx, base);
loc_82361A78:
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
loc_82361A7C:
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82361a54
	if (!ctx.cr6.eq) goto loc_82361A54;
loc_82361A88:
	// lfs f0,1148(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1148);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// lfs f13,1140(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1140);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32231
	ctx.r10.s64 = -2112290816;
	// fdivs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// lfs f11,1144(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1144);
	ctx.f11.f64 = double(temp.f32);
	// lfs f0,-24756(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -24756);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,7408(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 7408);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f12.f64));
	// fmuls f0,f0,f11
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x82361ac4
	if (!ctx.cr6.lt) goto loc_82361AC4;
	// addi r11,r29,165
	ctx.r11.s64 = ctx.r29.s64 + 165;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r27,r11,r31
	PPC_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r27.u32);
loc_82361AC4:
	// lwz r31,0(r28)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// b 0x82361b18
	goto loc_82361B18;
loc_82361ACC:
	// li r8,3
	ctx.r8.s64 = 3;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// addi r9,r11,352
	ctx.r9.s64 = ctx.r11.s64 + 352;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_82361AE0:
	// lwzu r8,4(r9)
	ea = 4 + ctx.r9.u32;
	ctx.r8.u64 = PPC_LOAD_U32(ea);
	ctx.r9.u32 = ea;
	// and r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 & ctx.r10.u64;
	// bdnz 0x82361ae0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82361AE0;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82361b14
	if (ctx.cr6.eq) goto loc_82361B14;
	// lwz r3,52(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82361b14
	if (ctx.cr6.eq) goto loc_82361B14;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,26
	ctx.r4.s64 = 26;
	// bl 0x824f8f78
	ctx.lr = 0x82361B14;
	sub_824F8F78(ctx, base);
loc_82361B14:
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
loc_82361B18:
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82361acc
	if (!ctx.cr6.eq) goto loc_82361ACC;
loc_82361B24:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82361B2C"))) PPC_WEAK_FUNC(sub_82361B2C);
PPC_FUNC_IMPL(__imp__sub_82361B2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82361B30"))) PPC_WEAK_FUNC(sub_82361B30);
PPC_FUNC_IMPL(__imp__sub_82361B30) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7670
	ctx.lr = 0x82361B38;
	__savegprlr_26(ctx, base);
	// addi r12,r1,-56
	ctx.r12.s64 = ctx.r1.s64 + -56;
	// bl 0x82fa8d28
	ctx.lr = 0x82361B40;
	__savefpr_28(ctx, base);
	// stwu r1,-1216(r1)
	ea = -1216 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,48(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,52(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// li r27,1
	ctx.r27.s64 = 1;
	// li r26,0
	ctx.r26.s64 = 0;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82361c80
	if (ctx.cr6.eq) goto loc_82361C80;
	// lis r10,-32231
	ctx.r10.s64 = -2112290816;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// lis r8,-32227
	ctx.r8.s64 = -2112028672;
	// lis r7,-32243
	ctx.r7.s64 = -2113077248;
	// lis r11,-31968
	ctx.r11.s64 = -2095054848;
	// lfs f30,8552(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 8552);
	ctx.f30.f64 = double(temp.f32);
	// lis r28,-31958
	ctx.r28.s64 = -2094399488;
	// lfs f28,-2340(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -2340);
	ctx.f28.f64 = double(temp.f32);
	// addi r29,r11,17512
	ctx.r29.s64 = ctx.r11.s64 + 17512;
	// lfs f31,-24756(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -24756);
	ctx.f31.f64 = double(temp.f32);
	// lfs f29,31512(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 31512);
	ctx.f29.f64 = double(temp.f32);
loc_82361B8C:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x824261e8
	ctx.lr = 0x82361B98;
	sub_824261E8(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,880(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 880);
	// stw r27,912(r11)
	PPC_STORE_U32(ctx.r11.u32 + 912, ctx.r27.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// addi r10,r29,720
	ctx.r10.s64 = ctx.r29.s64 + 720;
	// bne cr6,0x82361bb4
	if (!ctx.cr6.eq) goto loc_82361BB4;
	// addi r10,r29,644
	ctx.r10.s64 = ctx.r29.s64 + 644;
loc_82361BB4:
	// lwz r9,960(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 960);
	// stw r10,876(r11)
	PPC_STORE_U32(ctx.r11.u32 + 876, ctx.r10.u32);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82361c10
	if (ctx.cr6.eq) goto loc_82361C10;
	// lfs f0,932(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 932);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f29
	ctx.cr6.compare(ctx.f0.f64, ctx.f29.f64);
	// ble cr6,0x82361c10
	if (!ctx.cr6.gt) goto loc_82361C10;
	// lis r9,25
	ctx.r9.s64 = 1638400;
	// lwz r10,21292(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 21292);
	// ori r9,r9,26125
	ctx.r9.u64 = ctx.r9.u64 | 26125;
	// mullw r10,r10,r9
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r9.s32);
	// addis r10,r10,15471
	ctx.r10.s64 = ctx.r10.s64 + 1013907456;
	// addi r10,r10,-3233
	ctx.r10.s64 = ctx.r10.s64 + -3233;
	// clrlwi r9,r10,9
	ctx.r9.u64 = ctx.r10.u32 & 0x7FFFFF;
	// stw r10,21292(r28)
	PPC_STORE_U32(ctx.r28.u32 + 21292, ctx.r10.u32);
	// oris r10,r9,16256
	ctx.r10.u64 = ctx.r9.u64 | 1065353216;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lfs f0,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f31.f64));
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// ble cr6,0x82361c10
	if (!ctx.cr6.gt) goto loc_82361C10;
	// addi r10,r29,796
	ctx.r10.s64 = ctx.r29.s64 + 796;
	// stw r10,876(r11)
	PPC_STORE_U32(ctx.r11.u32 + 876, ctx.r10.u32);
loc_82361C10:
	// lwz r9,880(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 880);
	// lwz r10,656(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 656);
	// subfic r9,r9,1
	ctx.xer.ca = ctx.r9.u32 <= 1;
	ctx.r9.s64 = 1 - ctx.r9.s64;
	// cmpwi cr6,r10,24
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 24, ctx.xer);
	// stw r9,880(r11)
	PPC_STORE_U32(ctx.r11.u32 + 880, ctx.r9.u32);
	// beq cr6,0x82361c60
	if (ctx.cr6.eq) goto loc_82361C60;
	// cmpwi cr6,r10,5
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 5, ctx.xer);
	// beq cr6,0x82361c38
	if (ctx.cr6.eq) goto loc_82361C38;
	// cmpwi cr6,r10,17
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 17, ctx.xer);
	// bne cr6,0x82361c3c
	if (!ctx.cr6.eq) goto loc_82361C3C;
loc_82361C38:
	// stw r27,872(r11)
	PPC_STORE_U32(ctx.r11.u32 + 872, ctx.r27.u32);
loc_82361C3C:
	// lwz r10,608(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 608);
	// li r9,24
	ctx.r9.s64 = 24;
	// stw r26,868(r11)
	PPC_STORE_U32(ctx.r11.u32 + 868, ctx.r26.u32);
	// stw r9,656(r11)
	PPC_STORE_U32(ctx.r11.u32 + 656, ctx.r9.u32);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bge cr6,0x82361c58
	if (!ctx.cr6.lt) goto loc_82361C58;
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
loc_82361C58:
	// stfs f28,668(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r11.u32 + 668, temp.u32);
	// stw r10,608(r11)
	PPC_STORE_U32(ctx.r11.u32 + 608, ctx.r10.u32);
loc_82361C60:
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82361c70
	if (ctx.cr6.eq) goto loc_82361C70;
	// bl 0x82241d18
	ctx.lr = 0x82361C70;
	sub_82241D18(ctx, base);
loc_82361C70:
	// lwz r11,52(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82361b8c
	if (!ctx.cr6.eq) goto loc_82361B8C;
loc_82361C80:
	// bl 0x8226c3f0
	ctx.lr = 0x82361C84;
	sub_8226C3F0(ctx, base);
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82361cdc
	if (!ctx.cr6.eq) goto loc_82361CDC;
	// lis r11,-31955
	ctx.r11.s64 = -2094202880;
	// lwz r3,30428(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 30428);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82361ca4
	if (!ctx.cr6.eq) goto loc_82361CA4;
	// bl 0x822599a0
	ctx.lr = 0x82361CA4;
	sub_822599A0(ctx, base);
loc_82361CA4:
	// lbz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 4);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82361cdc
	if (!ctx.cr0.eq) goto loc_82361CDC;
	// lwz r11,3848(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3848);
	// lwz r10,48(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,30,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x8;
	// lwzx r31,r11,r10
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r11,556(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 556);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82361cdc
	if (ctx.cr6.eq) goto loc_82361CDC;
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// bl 0x8257e8d8
	ctx.lr = 0x82361CD8;
	sub_8257E8D8(ctx, base);
	// stw r26,556(r31)
	PPC_STORE_U32(ctx.r31.u32 + 556, ctx.r26.u32);
loc_82361CDC:
	// lwz r11,1200(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1200);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,212(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 212);
	// lwz r3,12(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// bl 0x8253ebe8
	ctx.lr = 0x82361CF0;
	sub_8253EBE8(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// li r5,256
	ctx.r5.s64 = 256;
	// addi r6,r11,11332
	ctx.r6.s64 = ctx.r11.s64 + 11332;
	// addi r4,r1,608
	ctx.r4.s64 = ctx.r1.s64 + 608;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8234aa60
	ctx.lr = 0x82361D08;
	sub_8234AA60(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// li r5,256
	ctx.r5.s64 = 256;
	// addi r6,r11,14980
	ctx.r6.s64 = ctx.r11.s64 + 14980;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8234aa60
	ctx.lr = 0x82361D20;
	sub_8234AA60(ctx, base);
	// lwz r11,3744(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 3744);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r4,r1,608
	ctx.r4.s64 = ctx.r1.s64 + 608;
	// lwz r11,148(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 148);
	// lwz r3,92(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// beq cr6,0x82361d44
	if (ctx.cr6.eq) goto loc_82361D44;
	// bl 0x8253e318
	ctx.lr = 0x82361D40;
	sub_8253E318(ctx, base);
	// b 0x82361d48
	goto loc_82361D48;
loc_82361D44:
	// bl 0x8253e448
	ctx.lr = 0x82361D48;
	sub_8253E448(ctx, base);
loc_82361D48:
	// stw r27,840(r30)
	PPC_STORE_U32(ctx.r30.u32 + 840, ctx.r27.u32);
	// addi r1,r1,1216
	ctx.r1.s64 = ctx.r1.s64 + 1216;
	// addi r12,r1,-56
	ctx.r12.s64 = ctx.r1.s64 + -56;
	// bl 0x82fa8d74
	ctx.lr = 0x82361D58;
	__restfpr_28(ctx, base);
	// b 0x82fa76c0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82361D5C"))) PPC_WEAK_FUNC(sub_82361D5C);
PPC_FUNC_IMPL(__imp__sub_82361D5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82361D60"))) PPC_WEAK_FUNC(sub_82361D60);
PPC_FUNC_IMPL(__imp__sub_82361D60) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x82361D68;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,148(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 148);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82361d88
	if (ctx.cr6.eq) goto loc_82361D88;
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// b 0x82361d8c
	goto loc_82361D8C;
loc_82361D88:
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_82361D8C:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82361e5c
	if (ctx.cr6.eq) goto loc_82361E5C;
	// lwz r30,48(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 48);
	// b 0x82361dc8
	goto loc_82361DC8;
loc_82361D9C:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x824261e8
	ctx.lr = 0x82361DA8;
	sub_824261E8(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r31,960(r11)
	PPC_STORE_U32(ctx.r11.u32 + 960, ctx.r31.u32);
	// stw r31,964(r11)
	PPC_STORE_U32(ctx.r11.u32 + 964, ctx.r31.u32);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82361dc4
	if (ctx.cr6.eq) goto loc_82361DC4;
	// bl 0x82241d18
	ctx.lr = 0x82361DC4;
	sub_82241D18(ctx, base);
loc_82361DC4:
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
loc_82361DC8:
	// lwz r11,52(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 52);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82361d9c
	if (!ctx.cr6.eq) goto loc_82361D9C;
	// li r3,72
	ctx.r3.s64 = 72;
	// bl 0x822ec438
	ctx.lr = 0x82361DDC;
	sub_822EC438(ctx, base);
	// li r30,1
	ctx.r30.s64 = 1;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82361e4c
	if (ctx.cr0.eq) goto loc_82361E4C;
	// lis r11,-31968
	ctx.r11.s64 = -2095054848;
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// addi r9,r11,15128
	ctx.r9.s64 = ctx.r11.s64 + 15128;
	// li r11,-1
	ctx.r11.s64 = -1;
	// addi r10,r10,-12264
	ctx.r10.s64 = ctx.r10.s64 + -12264;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lfs f0,560(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 560);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,556(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 556);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,552(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 552);
	ctx.f12.f64 = double(temp.f32);
	// stw r31,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r31.u32);
	// stw r31,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r31.u32);
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r31.u32);
	// stw r31,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r31.u32);
	// stw r31,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r31.u32);
	// stfs f12,36(r3)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r3.u32 + 36, temp.u32);
	// stfs f13,40(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 40, temp.u32);
	// stw r11,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r11.u32);
	// stfs f0,44(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 44, temp.u32);
	// stw r11,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r11.u32);
	// stw r30,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r30.u32);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r31,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, ctx.r31.u32);
	// stw r31,64(r3)
	PPC_STORE_U32(ctx.r3.u32 + 64, ctx.r31.u32);
	// stw r29,68(r3)
	PPC_STORE_U32(ctx.r3.u32 + 68, ctx.r29.u32);
	// b 0x82361e50
	goto loc_82361E50;
loc_82361E4C:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
loc_82361E50:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8234aaf8
	ctx.lr = 0x82361E58;
	sub_8234AAF8(ctx, base);
	// stw r30,3728(r29)
	PPC_STORE_U32(ctx.r29.u32 + 3728, ctx.r30.u32);
loc_82361E5C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82361E64"))) PPC_WEAK_FUNC(sub_82361E64);
PPC_FUNC_IMPL(__imp__sub_82361E64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82361E68"))) PPC_WEAK_FUNC(sub_82361E68);
PPC_FUNC_IMPL(__imp__sub_82361E68) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,272(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 272);
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// addi r11,r11,-3
	ctx.r11.s64 = ctx.r11.s64 + -3;
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r3,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82361E80"))) PPC_WEAK_FUNC(sub_82361E80);
PPC_FUNC_IMPL(__imp__sub_82361E80) {
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
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,15304
	ctx.r11.s64 = ctx.r11.s64 + 15304;
	// clrlwi. r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// beq 0x82361eac
	if (ctx.cr0.eq) goto loc_82361EAC;
	// bl 0x82691540
	ctx.lr = 0x82361EAC;
	sub_82691540(ctx, base);
loc_82361EAC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
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

__attribute__((alias("__imp__sub_82361EC4"))) PPC_WEAK_FUNC(sub_82361EC4);
PPC_FUNC_IMPL(__imp__sub_82361EC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82361EC8"))) PPC_WEAK_FUNC(sub_82361EC8);
PPC_FUNC_IMPL(__imp__sub_82361EC8) {
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
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82361f60
	if (ctx.cr6.eq) goto loc_82361F60;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// srawi. r31,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r31.s64 = ctx.r10.s32 >> 2;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// ble 0x82361f60
	if (!ctx.cr0.gt) goto loc_82361F60;
	// rotlwi r6,r9,0
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
loc_82361F08:
	// lwz r11,0(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r10,r11
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r7,8(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82361f50
	if (ctx.cr6.eq) goto loc_82361F50;
loc_82361F2C:
	// mr r3,r8
	ctx.r3.u64 = ctx.r8.u64;
	// bl 0x824fa600
	ctx.lr = 0x82361F34;
	sub_824FA600(ctx, base);
	// lwz r11,272(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 272);
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x82361f64
	if (ctx.cr6.eq) goto loc_82361F64;
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// cmplw cr6,r4,r7
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r7.u32, ctx.xer);
	// blt cr6,0x82361f2c
	if (ctx.cr6.lt) goto loc_82361F2C;
loc_82361F50:
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// cmpw cr6,r5,r31
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r31.s32, ctx.xer);
	// blt cr6,0x82361f08
	if (ctx.cr6.lt) goto loc_82361F08;
loc_82361F60:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82361F64:
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

__attribute__((alias("__imp__sub_82361F7C"))) PPC_WEAK_FUNC(sub_82361F7C);
PPC_FUNC_IMPL(__imp__sub_82361F7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82361F80"))) PPC_WEAK_FUNC(sub_82361F80);
PPC_FUNC_IMPL(__imp__sub_82361F80) {
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
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82361fec
	if (ctx.cr6.eq) goto loc_82361FEC;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r10,r5,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r10,r11
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r7,8(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82361fec
	if (ctx.cr6.eq) goto loc_82361FEC;
loc_82361FC8:
	// mr r3,r8
	ctx.r3.u64 = ctx.r8.u64;
	// bl 0x824fa600
	ctx.lr = 0x82361FD0;
	sub_824FA600(ctx, base);
	// lwz r11,272(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 272);
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// cmplw cr6,r11,r6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x82361ff0
	if (ctx.cr6.eq) goto loc_82361FF0;
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// cmplw cr6,r4,r7
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r7.u32, ctx.xer);
	// blt cr6,0x82361fc8
	if (ctx.cr6.lt) goto loc_82361FC8;
loc_82361FEC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82361FF0:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82362000"))) PPC_WEAK_FUNC(sub_82362000);
PPC_FUNC_IMPL(__imp__sub_82362000) {
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
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82362098
	if (ctx.cr6.eq) goto loc_82362098;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// srawi. r31,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r31.s64 = ctx.r10.s32 >> 2;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// ble 0x82362098
	if (!ctx.cr0.gt) goto loc_82362098;
	// rotlwi r6,r9,0
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
loc_82362040:
	// lwz r11,0(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r10,r11
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r7,8(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82362088
	if (ctx.cr6.eq) goto loc_82362088;
loc_82362064:
	// mr r3,r8
	ctx.r3.u64 = ctx.r8.u64;
	// bl 0x824fa600
	ctx.lr = 0x8236206C;
	sub_824FA600(ctx, base);
	// lwz r11,272(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 272);
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x8236209c
	if (ctx.cr6.eq) goto loc_8236209C;
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// cmplw cr6,r4,r7
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r7.u32, ctx.xer);
	// blt cr6,0x82362064
	if (ctx.cr6.lt) goto loc_82362064;
loc_82362088:
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// cmpw cr6,r5,r31
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r31.s32, ctx.xer);
	// blt cr6,0x82362040
	if (ctx.cr6.lt) goto loc_82362040;
loc_82362098:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8236209C:
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

__attribute__((alias("__imp__sub_823620B4"))) PPC_WEAK_FUNC(sub_823620B4);
PPC_FUNC_IMPL(__imp__sub_823620B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823620B8"))) PPC_WEAK_FUNC(sub_823620B8);
PPC_FUNC_IMPL(__imp__sub_823620B8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,492(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 492);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823620dc
	if (ctx.cr6.eq) goto loc_823620DC;
	// lwz r11,36(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 36);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823620dc
	if (ctx.cr6.eq) goto loc_823620DC;
	// stw r4,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r4.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_823620DC:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823620E4"))) PPC_WEAK_FUNC(sub_823620E4);
PPC_FUNC_IMPL(__imp__sub_823620E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823620E8"))) PPC_WEAK_FUNC(sub_823620E8);
PPC_FUNC_IMPL(__imp__sub_823620E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// addi r9,r11,-32496
	ctx.r9.s64 = ctx.r11.s64 + -32496;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// addi r7,r1,128
	ctx.r7.s64 = ctx.r1.s64 + 128;
	// lis r6,-32254
	ctx.r6.s64 = -2113798144;
	// stvx128 v77,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v77.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,0
	ctx.r11.s64 = 0;
	// lvx128 v0,r0,r9
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// li r10,-1
	ctx.r10.s64 = -1;
	// li r9,-1
	ctx.r9.s64 = -1;
	// stvx128 v0,r0,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v77,r0,r7
	_mm_store_si128((__m128i*)(base + ((ctx.r7.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v77.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stw r11,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r11.u32);
	// lfs f0,-2340(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + -2340);
	ctx.f0.f64 = double(temp.f32);
	// stw r10,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r10.u32);
	// stfs f0,144(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
	// stw r9,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r9.u32);
	// stfs f0,152(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 152, temp.u32);
	// stw r11,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r11.u32);
	// stw r11,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r11.u32);
	// addi r3,r3,3472
	ctx.r3.s64 = ctx.r3.s64 + 3472;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r5,112
	ctx.r5.s64 = 112;
	// bl 0x82fa77c0
	ctx.lr = 0x82362158;
	sub_82FA77C0(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82362168"))) PPC_WEAK_FUNC(sub_82362168);
PPC_FUNC_IMPL(__imp__sub_82362168) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x82362170;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// li r29,0
	ctx.r29.s64 = 0;
	// lwzx r10,r11,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r30,4(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x823621b8
	if (ctx.cr6.eq) goto loc_823621B8;
loc_82362198:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x822a4538
	ctx.lr = 0x823621A0;
	sub_822A4538(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x823621ac
	if (ctx.cr0.eq) goto loc_823621AC;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
loc_823621AC:
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x82362198
	if (!ctx.cr6.eq) goto loc_82362198;
loc_823621B8:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823621C4"))) PPC_WEAK_FUNC(sub_823621C4);
PPC_FUNC_IMPL(__imp__sub_823621C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823621C8"))) PPC_WEAK_FUNC(sub_823621C8);
PPC_FUNC_IMPL(__imp__sub_823621C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa766c
	ctx.lr = 0x823621D0;
	__savegprlr_25(ctx, base);
	// stfd f30,-80(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -80, ctx.f30.u64);
	// stfd f31,-72(r1)
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.f31.u64);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r29,1
	ctx.r29.s64 = 1;
	// lfs f31,5416(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 5416);
	ctx.f31.f64 = double(temp.f32);
	// lfs f30,5420(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 5420);
	ctx.f30.f64 = double(temp.f32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stfs f31,84(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stw r29,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r29.u32);
	// stfs f30,80(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// li r26,0
	ctx.r26.s64 = 0;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// stw r26,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r26.u32);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// mr r28,r26
	ctx.r28.u64 = ctx.r26.u64;
	// addi r25,r31,5352
	ctx.r25.s64 = ctx.r31.s64 + 5352;
	// bl 0x8235b660
	ctx.lr = 0x8236221C;
	sub_8235B660(ctx, base);
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x823f62d0
	ctx.lr = 0x82362228;
	sub_823F62D0(ctx, base);
	// addi r27,r25,40
	ctx.r27.s64 = ctx.r25.s64 + 40;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8234fa10
	ctx.lr = 0x82362238;
	sub_8234FA10(ctx, base);
	// lwz r3,100(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82362248
	if (ctx.cr6.eq) goto loc_82362248;
	// bl 0x82241d18
	ctx.lr = 0x82362248;
	sub_82241D18(ctx, base);
loc_82362248:
	// li r3,64
	ctx.r3.s64 = 64;
	// bl 0x82691500
	ctx.lr = 0x82362250;
	sub_82691500(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x823622b8
	if (ctx.cr0.eq) goto loc_823622B8;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// stw r29,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r29.u32);
	// addic. r3,r30,16
	ctx.xer.ca = ctx.r30.u32 > 4294967279;
	ctx.r3.s64 = ctx.r30.s64 + 16;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// stw r29,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r29.u32);
	// addi r11,r11,-24032
	ctx.r11.s64 = ctx.r11.s64 + -24032;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// beq 0x823622a4
	if (ctx.cr0.eq) goto loc_823622A4;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// stw r31,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r31.u32);
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// fmr f2,f30
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f30.f64;
	// addi r11,r11,15460
	ctx.r11.s64 = ctx.r11.s64 + 15460;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// stw r10,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r10.u32);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r28,r29
	ctx.r28.u64 = ctx.r29.u64;
	// bl 0x822c19b8
	ctx.lr = 0x823622A4;
	sub_822C19B8(ctx, base);
loc_823622A4:
	// clrlwi. r11,r28,31
	ctx.r11.u64 = ctx.r28.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823622bc
	if (ctx.cr0.eq) goto loc_823622BC;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82f91940
	ctx.lr = 0x823622B4;
	sub_82F91940(ctx, base);
	// b 0x823622bc
	goto loc_823622BC;
loc_823622B8:
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
loc_823622BC:
	// addi r31,r30,16
	ctx.r31.s64 = ctx.r30.s64 + 16;
	// stw r26,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r26.u32);
	// stw r26,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r26.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x823622e8
	if (ctx.cr6.eq) goto loc_823622E8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x826abc90
	ctx.lr = 0x823622D8;
	sub_826ABC90(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823622e8
	if (ctx.cr0.eq) goto loc_823622E8;
	// stw r30,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r30.u32);
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
loc_823622E8:
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x8234fa10
	ctx.lr = 0x823622F4;
	sub_8234FA10(ctx, base);
	// lwz r3,100(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82362304
	if (ctx.cr6.eq) goto loc_82362304;
	// bl 0x82241d18
	ctx.lr = 0x82362304;
	sub_82241D18(ctx, base);
loc_82362304:
	// addi r4,r1,104
	ctx.r4.s64 = ctx.r1.s64 + 104;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x823f62d0
	ctx.lr = 0x82362310;
	sub_823F62D0(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x822c1818
	ctx.lr = 0x8236231C;
	sub_822C1818(ctx, base);
	// lwz r3,100(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8236232c
	if (ctx.cr6.eq) goto loc_8236232C;
	// bl 0x82241d18
	ctx.lr = 0x8236232C;
	sub_82241D18(ctx, base);
loc_8236232C:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8236233c
	if (ctx.cr6.eq) goto loc_8236233C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82241d18
	ctx.lr = 0x8236233C;
	sub_82241D18(ctx, base);
loc_8236233C:
	// lwz r3,108(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8236234c
	if (ctx.cr6.eq) goto loc_8236234C;
	// bl 0x82241d18
	ctx.lr = 0x8236234C;
	sub_82241D18(ctx, base);
loc_8236234C:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// lfd f30,-80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// lfd f31,-72(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x82fa76bc
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8236235C"))) PPC_WEAK_FUNC(sub_8236235C);
PPC_FUNC_IMPL(__imp__sub_8236235C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82362360"))) PPC_WEAK_FUNC(sub_82362360);
PPC_FUNC_IMPL(__imp__sub_82362360) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,44(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 44);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r10,5344(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5344);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x823623bc
	if (!ctx.cr6.eq) goto loc_823623BC;
	// lwz r11,5348(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 5348);
	// lwz r10,40(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 40);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x823623bc
	if (!ctx.cr6.eq) goto loc_823623BC;
	// lwz r11,280(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 280);
	// li r4,20
	ctx.r4.s64 = 20;
	// addi r3,r11,20
	ctx.r3.s64 = ctx.r11.s64 + 20;
	// bl 0x82278300
	ctx.lr = 0x823623A4;
	sub_82278300(ctx, base);
	// li r11,-1
	ctx.r11.s64 = -1;
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r11,5344(r31)
	PPC_STORE_U64(ctx.r31.u32 + 5344, ctx.r11.u64);
loc_823623BC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823623D0"))) PPC_WEAK_FUNC(sub_823623D0);
PPC_FUNC_IMPL(__imp__sub_823623D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x823623D8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r3,144
	ctx.r3.s64 = 144;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x82691500
	ctx.lr = 0x823623F0;
	sub_82691500(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82362408
	if (ctx.cr0.eq) goto loc_82362408;
	// addi r5,r30,136
	ctx.r5.s64 = ctx.r30.s64 + 136;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8253a358
	ctx.lr = 0x82362404;
	sub_8253A358(ctx, base);
	// b 0x8236240c
	goto loc_8236240C;
loc_82362408:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8236240C:
	// stw r3,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r3.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8236241C"))) PPC_WEAK_FUNC(sub_8236241C);
PPC_FUNC_IMPL(__imp__sub_8236241C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82362420"))) PPC_WEAK_FUNC(sub_82362420);
PPC_FUNC_IMPL(__imp__sub_82362420) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31955
	ctx.r11.s64 = -2094202880;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,30428(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 30428);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8236244c
	if (!ctx.cr6.eq) goto loc_8236244C;
	// bl 0x822599a0
	ctx.lr = 0x82362448;
	sub_822599A0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_8236244C:
	// lbz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x823624a4
	if (ctx.cr0.eq) goto loc_823624A4;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// addi r11,r11,15388
	ctx.r11.s64 = ctx.r11.s64 + 15388;
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8234a7c0
	ctx.lr = 0x82362478;
	sub_8234A7C0(ctx, base);
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823624a4
	if (ctx.cr6.eq) goto loc_823624A4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// subf r10,r3,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r3.s64;
	// addic r9,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// subfe r4,r9,r10
	temp.u8 = (~ctx.r9.u32 + ctx.r10.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r4.u64 = ~ctx.r9.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823624A4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_823624A4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823624B8"))) PPC_WEAK_FUNC(sub_823624B8);
PPC_FUNC_IMPL(__imp__sub_823624B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31955
	ctx.r11.s64 = -2094202880;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,30428(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 30428);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823624e4
	if (!ctx.cr6.eq) goto loc_823624E4;
	// bl 0x822599a0
	ctx.lr = 0x823624E0;
	sub_822599A0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_823624E4:
	// lbz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8236253c
	if (ctx.cr0.eq) goto loc_8236253C;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// addi r11,r11,15412
	ctx.r11.s64 = ctx.r11.s64 + 15412;
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8234a7c0
	ctx.lr = 0x82362510;
	sub_8234A7C0(ctx, base);
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8236253c
	if (ctx.cr6.eq) goto loc_8236253C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// subf r10,r3,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r3.s64;
	// addic r9,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// subfe r4,r9,r10
	temp.u8 = (~ctx.r9.u32 + ctx.r10.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r4.u64 = ~ctx.r9.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8236253C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8236253C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82362550"))) PPC_WEAK_FUNC(sub_82362550);
PPC_FUNC_IMPL(__imp__sub_82362550) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x82362558;
	__savegprlr_28(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lwz r30,32(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r28,36(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,15436
	ctx.r11.s64 = ctx.r11.s64 + 15436;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// cmplw cr6,r30,r28
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r28.u32, ctx.xer);
	// stw r3,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r3.u32);
	// bge cr6,0x823625e8
	if (!ctx.cr6.lt) goto loc_823625E8;
loc_82362590:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r29,4(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x823625cc
	goto loc_823625CC;
loc_823625A0:
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x823625c8
	if (ctx.cr6.eq) goto loc_823625C8;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82362614
	if (ctx.cr6.eq) goto loc_82362614;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823625C4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
loc_823625C8:
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
loc_823625CC:
	// cmplw cr6,r31,r29
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, ctx.xer);
	// blt cr6,0x823625a0
	if (ctx.cr6.lt) goto loc_823625A0;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmplw cr6,r30,r28
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r28.u32, ctx.xer);
	// blt cr6,0x82362590
	if (ctx.cr6.lt) goto loc_82362590;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82362608
	if (ctx.cr6.eq) goto loc_82362608;
loc_823625E8:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// subf r10,r3,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r3.s64;
	// addic r9,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// subfe r4,r9,r10
	temp.u8 = (~ctx.r9.u32 + ctx.r10.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r4.u64 = ~ctx.r9.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82362608;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82362608:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
loc_82362614:
	// bl 0x82fa1518
	ctx.lr = 0x82362618;
	sub_82FA1518(ctx, base);
}

__attribute__((alias("__imp__sub_82362618"))) PPC_WEAK_FUNC(sub_82362618);
PPC_FUNC_IMPL(__imp__sub_82362618) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7670
	ctx.lr = 0x82362620;
	__savegprlr_26(ctx, base);
	// stfd f29,-80(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -80, ctx.f29.u64);
	// stfd f30,-72(r1)
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.f30.u64);
	// stfd f31,-64(r1)
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f31.u64);
	// addi r12,r1,-80
	ctx.r12.s64 = ctx.r1.s64 + -80;
	// bl 0x82fac104
	ctx.lr = 0x82362634;
	__savevmx_114(ctx, base);
	// stwu r1,-480(r1)
	ea = -480 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,2196(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 2196);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,844(r3)
	PPC_STORE_U32(ctx.r3.u32 + 844, ctx.r11.u32);
	// beq cr6,0x82362ac8
	if (ctx.cr6.eq) goto loc_82362AC8;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r11,15000
	ctx.r3.s64 = ctx.r11.s64 + 15000;
	// bl 0x826909a0
	ctx.lr = 0x8236265C;
	sub_826909A0(ctx, base);
	// lwz r30,844(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 844);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// lwz r3,188(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 188);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8236267c
	if (ctx.cr6.eq) goto loc_8236267C;
	// bl 0x825469e0
	ctx.lr = 0x82362674;
	sub_825469E0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,188(r30)
	PPC_STORE_U32(ctx.r30.u32 + 188, ctx.r11.u32);
loc_8236267C:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82546708
	ctx.lr = 0x8236268C;
	sub_82546708(ctx, base);
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// lis r29,-32254
	ctx.r29.s64 = -2113798144;
	// stw r3,188(r30)
	PPC_STORE_U32(ctx.r30.u32 + 188, ctx.r3.u32);
	// addi r30,r11,27984
	ctx.r30.s64 = ctx.r11.s64 + 27984;
	// lwz r3,844(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 844);
	// addi r11,r29,-2340
	ctx.r11.s64 = ctx.r29.s64 + -2340;
	// li r10,2376
	ctx.r10.s64 = 2376;
	// li r9,2372
	ctx.r9.s64 = 2372;
	// li r8,1520
	ctx.r8.s64 = 1520;
	// lis r7,-31967
	ctx.r7.s64 = -2094989312;
	// lfs f30,32(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	ctx.f30.f64 = double(temp.f32);
	// lvlx128 v126,r0,r11
	temp.u32 = ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v126.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r11,r1,144
	ctx.r11.s64 = ctx.r1.s64 + 144;
	// lvlx v0,r30,r10
	temp.u32 = ctx.r30.u32 + ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// lvlx v13,r30,r9
	temp.u32 = ctx.r30.u32 + ctx.r9.u32;
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r9,r7,-7828
	ctx.r9.s64 = ctx.r7.s64 + -7828;
	// lvlx128 v127,r30,r8
	temp.u32 = ctx.r30.u32 + ctx.r8.u32;
	_mm_store_si128((__m128i*)ctx.v127.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vor128 v12,v127,v127
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_load_si128((__m128i*)ctx.v127.u8));
	// vor128 v11,v127,v127
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_load_si128((__m128i*)ctx.v127.u8));
	// addi r28,r1,112
	ctx.r28.s64 = ctx.r1.s64 + 112;
	// vrlimi128 v12,v0,4,3
	_mm_store_ps(ctx.v12.f32, _mm_blend_ps(_mm_load_ps(ctx.v12.f32), _mm_permute_ps(_mm_load_ps(ctx.v0.f32), 57), 4));
	// addi r27,r1,96
	ctx.r27.s64 = ctx.r1.s64 + 96;
	// vrlimi128 v13,v126,4,3
	_mm_store_ps(ctx.v13.f32, _mm_blend_ps(_mm_load_ps(ctx.v13.f32), _mm_permute_ps(_mm_load_ps(ctx.v126.f32), 57), 4));
	// lis r4,-31967
	ctx.r4.s64 = -2094989312;
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// vrlimi128 v11,v126,4,3
	_mm_store_ps(ctx.v11.f32, _mm_blend_ps(_mm_load_ps(ctx.v11.f32), _mm_permute_ps(_mm_load_ps(ctx.v126.f32), 57), 4));
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// vor128 v125,v12,v12
	_mm_store_si128((__m128i*)ctx.v125.u8, _mm_load_si128((__m128i*)ctx.v12.u8));
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// vrlimi128 v12,v13,3,2
	_mm_store_ps(ctx.v12.f32, _mm_blend_ps(_mm_load_ps(ctx.v12.f32), _mm_permute_ps(_mm_load_ps(ctx.v13.f32), 78), 3));
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// lfs f2,-11504(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + -11504);
	ctx.f2.f64 = double(temp.f32);
	// li r4,32
	ctx.r4.s64 = 32;
	// vor128 v124,v11,v11
	_mm_store_si128((__m128i*)ctx.v124.u8, _mm_load_si128((__m128i*)ctx.v11.u8));
	// vrlimi128 v11,v13,3,2
	_mm_store_ps(ctx.v11.f32, _mm_blend_ps(_mm_load_ps(ctx.v11.f32), _mm_permute_ps(_mm_load_ps(ctx.v13.f32), 78), 3));
	// vor128 v123,v12,v12
	_mm_store_si128((__m128i*)ctx.v123.u8, _mm_load_si128((__m128i*)ctx.v12.u8));
	// vor128 v122,v11,v11
	_mm_store_si128((__m128i*)ctx.v122.u8, _mm_load_si128((__m128i*)ctx.v11.u8));
	// stvx128 v123,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v123.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v122,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v122.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvlx128 v121,r0,r9
	temp.u32 = ctx.r9.u32;
	_mm_store_si128((__m128i*)ctx.v121.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vor128 v12,v121,v121
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_load_si128((__m128i*)ctx.v121.u8));
	// vor128 v11,v121,v121
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_load_si128((__m128i*)ctx.v121.u8));
	// vrlimi128 v12,v0,4,3
	_mm_store_ps(ctx.v12.f32, _mm_blend_ps(_mm_load_ps(ctx.v12.f32), _mm_permute_ps(_mm_load_ps(ctx.v0.f32), 57), 4));
	// vrlimi128 v11,v126,4,3
	_mm_store_ps(ctx.v11.f32, _mm_blend_ps(_mm_load_ps(ctx.v11.f32), _mm_permute_ps(_mm_load_ps(ctx.v126.f32), 57), 4));
	// vor128 v120,v12,v12
	_mm_store_si128((__m128i*)ctx.v120.u8, _mm_load_si128((__m128i*)ctx.v12.u8));
	// vor128 v119,v11,v11
	_mm_store_si128((__m128i*)ctx.v119.u8, _mm_load_si128((__m128i*)ctx.v11.u8));
	// vor128 v0,v120,v120
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_load_si128((__m128i*)ctx.v120.u8));
	// vor128 v12,v119,v119
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_load_si128((__m128i*)ctx.v119.u8));
	// vrlimi128 v0,v13,3,2
	_mm_store_ps(ctx.v0.f32, _mm_blend_ps(_mm_load_ps(ctx.v0.f32), _mm_permute_ps(_mm_load_ps(ctx.v13.f32), 78), 3));
	// vrlimi128 v12,v13,3,2
	_mm_store_ps(ctx.v12.f32, _mm_blend_ps(_mm_load_ps(ctx.v12.f32), _mm_permute_ps(_mm_load_ps(ctx.v13.f32), 78), 3));
	// vor128 v118,v0,v0
	_mm_store_si128((__m128i*)ctx.v118.u8, _mm_load_si128((__m128i*)ctx.v0.u8));
	// vor128 v117,v12,v12
	_mm_store_si128((__m128i*)ctx.v117.u8, _mm_load_si128((__m128i*)ctx.v12.u8));
	// stvx128 v118,r0,r28
	_mm_store_si128((__m128i*)(base + ((ctx.r28.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v118.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v117,r0,r27
	_mm_store_si128((__m128i*)(base + ((ctx.r27.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v117.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// bl 0x825ba038
	ctx.lr = 0x82362770;
	sub_825BA038(ctx, base);
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// stw r3,816(r31)
	PPC_STORE_U32(ctx.r31.u32 + 816, ctx.r3.u32);
	// li r9,2380
	ctx.r9.s64 = 2380;
	// lwz r3,844(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 844);
	// li r8,2384
	ctx.r8.s64 = 2384;
	// vor128 v13,v124,v124
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_load_si128((__m128i*)ctx.v124.u8));
	// lis r28,-32231
	ctx.r28.s64 = -2112290816;
	// stvx128 v123,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v123.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// stvx128 v122,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v122.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// lvlx v0,r30,r9
	temp.u32 = ctx.r30.u32 + ctx.r9.u32;
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v123,r30,r8
	temp.u32 = ctx.r30.u32 + ctx.r8.u32;
	_mm_store_si128((__m128i*)ctx.v123.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vrlimi128 v127,v123,4,3
	_mm_store_ps(ctx.v127.f32, _mm_blend_ps(_mm_load_ps(ctx.v127.f32), _mm_permute_ps(_mm_load_ps(ctx.v123.f32), 57), 4));
	// vrlimi128 v0,v126,4,3
	_mm_store_ps(ctx.v0.f32, _mm_blend_ps(_mm_load_ps(ctx.v0.f32), _mm_permute_ps(_mm_load_ps(ctx.v126.f32), 57), 4));
	// vor128 v122,v127,v127
	_mm_store_si128((__m128i*)ctx.v122.u8, _mm_load_si128((__m128i*)ctx.v127.u8));
	// vor128 v116,v0,v0
	_mm_store_si128((__m128i*)ctx.v116.u8, _mm_load_si128((__m128i*)ctx.v0.u8));
	// vor128 v0,v122,v122
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_load_si128((__m128i*)ctx.v122.u8));
	// vrlimi128 v0,v116,3,2
	_mm_store_ps(ctx.v0.f32, _mm_blend_ps(_mm_load_ps(ctx.v0.f32), _mm_permute_ps(_mm_load_ps(ctx.v116.f32), 78), 3));
	// vrlimi128 v13,v116,3,2
	_mm_store_ps(ctx.v13.f32, _mm_blend_ps(_mm_load_ps(ctx.v13.f32), _mm_permute_ps(_mm_load_ps(ctx.v116.f32), 78), 3));
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lis r9,-32231
	ctx.r9.s64 = -2112290816;
	// addi r27,r28,-2152
	ctx.r27.s64 = ctx.r28.s64 + -2152;
	// addi r8,r1,144
	ctx.r8.s64 = ctx.r1.s64 + 144;
	// stvx128 v13,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// lfs f31,7408(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 7408);
	ctx.f31.f64 = double(temp.f32);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// li r4,16
	ctx.r4.s64 = 16;
	// lfs f2,14164(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 14164);
	ctx.f2.f64 = double(temp.f32);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x825ba038
	ctx.lr = 0x823627F8;
	sub_825BA038(ctx, base);
	// stw r3,820(r31)
	PPC_STORE_U32(ctx.r31.u32 + 820, ctx.r3.u32);
	// vor128 v0,v126,v126
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_load_si128((__m128i*)ctx.v126.u8));
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// li r10,2388
	ctx.r10.s64 = 2388;
	// vspltisw v12,1
	_mm_store_si128((__m128i*)ctx.v12.u32, _mm_set1_epi32(int(0x1)));
	// addi r11,r11,-24756
	ctx.r11.s64 = ctx.r11.s64 + -24756;
	// vrlimi128 v121,v123,4,3
	_mm_store_ps(ctx.v121.f32, _mm_blend_ps(_mm_load_ps(ctx.v121.f32), _mm_permute_ps(_mm_load_ps(ctx.v123.f32), 57), 4));
	// li r9,752
	ctx.r9.s64 = 752;
	// vor128 v13,v126,v126
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_load_si128((__m128i*)ctx.v126.u8));
	// vrlimi128 v0,v126,4,3
	_mm_store_ps(ctx.v0.f32, _mm_blend_ps(_mm_load_ps(ctx.v0.f32), _mm_permute_ps(_mm_load_ps(ctx.v126.f32), 57), 4));
	// li r6,56
	ctx.r6.s64 = 56;
	// vcsxwfp128 v127,v12,1
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v127.f32, _mm_mul_ps(_mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v12.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x3F000000)))));
	// li r5,2392
	ctx.r5.s64 = 2392;
	// lvlx v10,r30,r10
	temp.u32 = ctx.r30.u32 + ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v10.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// vor128 v11,v119,v119
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_load_si128((__m128i*)ctx.v119.u8));
	// addi r26,r1,144
	ctx.r26.s64 = ctx.r1.s64 + 144;
	// vor128 v123,v0,v0
	_mm_store_si128((__m128i*)ctx.v123.u8, _mm_load_si128((__m128i*)ctx.v0.u8));
	// vspltisw128 v115,0
	_mm_store_si128((__m128i*)ctx.v115.u32, _mm_set1_epi32(int(0x0)));
	// addi r10,r1,160
	ctx.r10.s64 = ctx.r1.s64 + 160;
	// lfs f29,-2340(r29)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + -2340);
	ctx.f29.f64 = double(temp.f32);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// fmr f2,f29
	ctx.f2.f64 = ctx.f29.f64;
	// vrlimi128 v11,v116,3,2
	_mm_store_ps(ctx.v11.f32, _mm_blend_ps(_mm_load_ps(ctx.v11.f32), _mm_permute_ps(_mm_load_ps(ctx.v116.f32), 78), 3));
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// vor128 v12,v123,v123
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_load_si128((__m128i*)ctx.v123.u8));
	// addi r8,r1,144
	ctx.r8.s64 = ctx.r1.s64 + 144;
	// addi r7,r1,128
	ctx.r7.s64 = ctx.r1.s64 + 128;
	// lvlx v0,0,r11
	temp.u32 = ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r11,r31,784
	ctx.r11.s64 = ctx.r31.s64 + 784;
	// vrlimi128 v0,v10,4,3
	_mm_store_ps(ctx.v0.f32, _mm_blend_ps(_mm_load_ps(ctx.v0.f32), _mm_permute_ps(_mm_load_ps(ctx.v10.f32), 57), 4));
	// vrlimi128 v12,v0,3,2
	_mm_store_ps(ctx.v12.f32, _mm_blend_ps(_mm_load_ps(ctx.v12.f32), _mm_permute_ps(_mm_load_ps(ctx.v0.f32), 78), 3));
	// vor128 v0,v121,v121
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_load_si128((__m128i*)ctx.v121.u8));
	// stvx128 v12,r31,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32 + ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// lvlx v12,r30,r5
	temp.u32 = ctx.r30.u32 + ctx.r5.u32;
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vrlimi128 v12,v126,4,3
	_mm_store_ps(ctx.v12.f32, _mm_blend_ps(_mm_load_ps(ctx.v12.f32), _mm_permute_ps(_mm_load_ps(ctx.v126.f32), 57), 4));
	// lvlx v10,r30,r6
	temp.u32 = ctx.r30.u32 + ctx.r6.u32;
	_mm_store_si128((__m128i*)ctx.v10.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vrlimi128 v0,v116,3,2
	_mm_store_ps(ctx.v0.f32, _mm_blend_ps(_mm_load_ps(ctx.v0.f32), _mm_permute_ps(_mm_load_ps(ctx.v116.f32), 78), 3));
	// vrlimi128 v13,v10,4,3
	_mm_store_ps(ctx.v13.f32, _mm_blend_ps(_mm_load_ps(ctx.v13.f32), _mm_permute_ps(_mm_load_ps(ctx.v10.f32), 57), 4));
	// stvx128 v11,r0,r26
	_mm_store_si128((__m128i*)(base + ((ctx.r26.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// vor128 v10,v127,v127
	_mm_store_si128((__m128i*)ctx.v10.u8, _mm_load_si128((__m128i*)ctx.v127.u8));
	// stvx128 v118,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v118.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// stvx128 v117,r0,r4
	_mm_store_si128((__m128i*)(base + ((ctx.r4.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v117.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v0,r0,r3
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lwz r3,844(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 844);
	// vor128 v114,v13,v13
	_mm_store_si128((__m128i*)ctx.v114.u8, _mm_load_si128((__m128i*)ctx.v13.u8));
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// vrlimi128 v13,v12,3,2
	_mm_store_ps(ctx.v13.f32, _mm_blend_ps(_mm_load_ps(ctx.v13.f32), _mm_permute_ps(_mm_load_ps(ctx.v12.f32), 78), 3));
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// li r4,16
	ctx.r4.s64 = 16;
	// vor v8,v13,v13
	_mm_store_si128((__m128i*)ctx.v8.u8, _mm_load_si128((__m128i*)ctx.v13.u8));
	// vmsum3fp128 v12,v8,v8
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v12.f32, _mm_dp_ps(_mm_load_ps(ctx.v8.f32), _mm_load_ps(ctx.v8.f32), 0xEF));
	// stvx128 v8,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v8.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// vrsqrtefp v0,v12
	_mm_store_ps(ctx.v0.f32, _mm_div_ps(_mm_set1_ps(1), _mm_sqrt_ps(_mm_load_ps(ctx.v12.f32))));
	// vor v11,v12,v12
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_load_si128((__m128i*)ctx.v12.u8));
	// vmulfp128 v13,v12,v127
	_mm_store_ps(ctx.v13.f32, _mm_mul_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v127.f32)));
	// vcmpeqfp128 v9,v12,v115
	_mm_store_ps(ctx.v9.f32, _mm_cmpeq_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v115.f32)));
	// vmulfp128 v12,v0,v0
	_mm_store_ps(ctx.v12.f32, _mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v0.f32)));
	// vnmsubfp128 v10,v13,v12,v10
	_mm_store_ps(ctx.v10.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v12.f32)), _mm_load_ps(ctx.v10.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// lvx128 v12,r0,r10
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// vmaddfp v0,v0,v10,v0
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v10.f32)), _mm_load_ps(ctx.v0.f32)));
	// vmulfp128 v0,v8,v0
	_mm_store_ps(ctx.v0.f32, _mm_mul_ps(_mm_load_ps(ctx.v8.f32), _mm_load_ps(ctx.v0.f32)));
	// vsel v13,v0,v11,v9
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v9.u8), _mm_load_si128((__m128i*)ctx.v0.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v9.u8), _mm_load_si128((__m128i*)ctx.v11.u8))));
	// vmsum3fp128 v0,v13,v12
	_mm_store_ps(ctx.v0.f32, _mm_dp_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v12.f32), 0xEF));
	// stvx128 v13,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v0,r0,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lfs f0,96(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f0.f64 = double(temp.f32);
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// stfs f0,796(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 796, temp.u32);
	// bl 0x825ba038
	ctx.lr = 0x82362918;
	sub_825BA038(ctx, base);
	// stw r3,824(r31)
	PPC_STORE_U32(ctx.r31.u32 + 824, ctx.r3.u32);
	// li r11,2396
	ctx.r11.s64 = 2396;
	// vor128 v0,v124,v124
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_load_si128((__m128i*)ctx.v124.u8));
	// vor128 v13,v119,v119
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_load_si128((__m128i*)ctx.v119.u8));
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// addi r9,r1,160
	ctx.r9.s64 = ctx.r1.s64 + 160;
	// lfs f2,-2152(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + -2152);
	ctx.f2.f64 = double(temp.f32);
	// addi r29,r1,112
	ctx.r29.s64 = ctx.r1.s64 + 112;
	// lwz r3,844(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 844);
	// addi r8,r1,160
	ctx.r8.s64 = ctx.r1.s64 + 160;
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// addi r7,r1,144
	ctx.r7.s64 = ctx.r1.s64 + 144;
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// li r4,32
	ctx.r4.s64 = 32;
	// lvlx v12,r30,r11
	temp.u32 = ctx.r30.u32 + ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
	// vrlimi128 v12,v126,4,3
	_mm_store_ps(ctx.v12.f32, _mm_blend_ps(_mm_load_ps(ctx.v12.f32), _mm_permute_ps(_mm_load_ps(ctx.v126.f32), 57), 4));
	// vrlimi128 v0,v12,3,2
	_mm_store_ps(ctx.v0.f32, _mm_blend_ps(_mm_load_ps(ctx.v0.f32), _mm_permute_ps(_mm_load_ps(ctx.v12.f32), 78), 3));
	// vrlimi128 v13,v12,3,2
	_mm_store_ps(ctx.v13.f32, _mm_blend_ps(_mm_load_ps(ctx.v13.f32), _mm_permute_ps(_mm_load_ps(ctx.v12.f32), 78), 3));
	// vrlimi128 v125,v12,3,2
	_mm_store_ps(ctx.v125.f32, _mm_blend_ps(_mm_load_ps(ctx.v125.f32), _mm_permute_ps(_mm_load_ps(ctx.v12.f32), 78), 3));
	// vrlimi128 v120,v12,3,2
	_mm_store_ps(ctx.v120.f32, _mm_blend_ps(_mm_load_ps(ctx.v120.f32), _mm_permute_ps(_mm_load_ps(ctx.v12.f32), 78), 3));
	// vor128 v118,v0,v0
	_mm_store_si128((__m128i*)ctx.v118.u8, _mm_load_si128((__m128i*)ctx.v0.u8));
	// vor128 v117,v13,v13
	_mm_store_si128((__m128i*)ctx.v117.u8, _mm_load_si128((__m128i*)ctx.v13.u8));
	// stvx128 v125,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v125.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v120,r0,r29
	_mm_store_si128((__m128i*)(base + ((ctx.r29.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v120.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v118,r0,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v118.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v117,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v117.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// bl 0x825ba038
	ctx.lr = 0x8236298C;
	sub_825BA038(ctx, base);
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// stw r3,828(r31)
	PPC_STORE_U32(ctx.r31.u32 + 828, ctx.r3.u32);
	// li r9,2400
	ctx.r9.s64 = 2400;
	// lfs f2,564(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 564);
	ctx.f2.f64 = double(temp.f32);
	// addi r29,r1,96
	ctx.r29.s64 = ctx.r1.s64 + 96;
	// lwz r3,844(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 844);
	// addi r8,r1,160
	ctx.r8.s64 = ctx.r1.s64 + 160;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// stvx128 v125,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v125.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r11,r1,160
	ctx.r11.s64 = ctx.r1.s64 + 160;
	// stvx128 v118,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v118.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// lvlx v0,r30,r9
	temp.u32 = ctx.r30.u32 + ctx.r9.u32;
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vrlimi128 v0,v126,4,3
	_mm_store_ps(ctx.v0.f32, _mm_blend_ps(_mm_load_ps(ctx.v0.f32), _mm_permute_ps(_mm_load_ps(ctx.v126.f32), 57), 4));
	// vor128 v125,v0,v0
	_mm_store_si128((__m128i*)ctx.v125.u8, _mm_load_si128((__m128i*)ctx.v0.u8));
	// addi r6,r1,144
	ctx.r6.s64 = ctx.r1.s64 + 144;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// li r4,16
	ctx.r4.s64 = 16;
	// vrlimi128 v122,v125,3,2
	_mm_store_ps(ctx.v122.f32, _mm_blend_ps(_mm_load_ps(ctx.v122.f32), _mm_permute_ps(_mm_load_ps(ctx.v125.f32), 78), 3));
	// vrlimi128 v124,v125,3,2
	_mm_store_ps(ctx.v124.f32, _mm_blend_ps(_mm_load_ps(ctx.v124.f32), _mm_permute_ps(_mm_load_ps(ctx.v125.f32), 78), 3));
	// stvx128 v122,r0,r29
	_mm_store_si128((__m128i*)(base + ((ctx.r29.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v122.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v124,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v124.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// bl 0x825ba038
	ctx.lr = 0x823629EC;
	sub_825BA038(ctx, base);
	// li r11,2404
	ctx.r11.s64 = 2404;
	// li r10,10224
	ctx.r10.s64 = 10224;
	// stw r3,832(r31)
	PPC_STORE_U32(ctx.r31.u32 + 832, ctx.r3.u32);
	// li r9,768
	ctx.r9.s64 = 768;
	// lwz r3,844(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 844);
	// li r8,2408
	ctx.r8.s64 = 2408;
	// vrlimi128 v121,v125,3,2
	_mm_store_ps(ctx.v121.f32, _mm_blend_ps(_mm_load_ps(ctx.v121.f32), _mm_permute_ps(_mm_load_ps(ctx.v125.f32), 78), 3));
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// lvlx v0,r30,r11
	temp.u32 = ctx.r30.u32 + ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r29,r1,96
	ctx.r29.s64 = ctx.r1.s64 + 96;
	// lvlx v13,r27,r10
	temp.u32 = ctx.r27.u32 + ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vrlimi128 v13,v0,4,3
	_mm_store_ps(ctx.v13.f32, _mm_blend_ps(_mm_load_ps(ctx.v13.f32), _mm_permute_ps(_mm_load_ps(ctx.v0.f32), 57), 4));
	// vrlimi128 v123,v13,3,2
	_mm_store_ps(ctx.v123.f32, _mm_blend_ps(_mm_load_ps(ctx.v123.f32), _mm_permute_ps(_mm_load_ps(ctx.v13.f32), 78), 3));
	// lvx128 v8,r0,r7
	simd::store_shuffled(ctx.v8, simd::load_and_shuffle(base + ((ctx.r7.u32) & ~0xF), VectorMaskL));
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// addi r7,r1,160
	ctx.r7.s64 = ctx.r1.s64 + 160;
	// addi r11,r31,800
	ctx.r11.s64 = ctx.r31.s64 + 800;
	// stvx128 v123,r31,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32 + ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v123.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// lvlx v0,r30,r8
	temp.u32 = ctx.r30.u32 + ctx.r8.u32;
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vrlimi128 v0,v126,4,3
	_mm_store_ps(ctx.v0.f32, _mm_blend_ps(_mm_load_ps(ctx.v0.f32), _mm_permute_ps(_mm_load_ps(ctx.v126.f32), 57), 4));
	// addi r30,r1,128
	ctx.r30.s64 = ctx.r1.s64 + 128;
	// vrlimi128 v114,v0,3,2
	_mm_store_ps(ctx.v114.f32, _mm_blend_ps(_mm_load_ps(ctx.v114.f32), _mm_permute_ps(_mm_load_ps(ctx.v0.f32), 78), 3));
	// vmsum3fp128 v12,v114,v114
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v12.f32, _mm_dp_ps(_mm_load_ps(ctx.v114.f32), _mm_load_ps(ctx.v114.f32), 0xEF));
	// vor128 v10,v127,v127
	_mm_store_si128((__m128i*)ctx.v10.u8, _mm_load_si128((__m128i*)ctx.v127.u8));
	// vrlimi128 v119,v125,3,2
	_mm_store_ps(ctx.v119.f32, _mm_blend_ps(_mm_load_ps(ctx.v119.f32), _mm_permute_ps(_mm_load_ps(ctx.v125.f32), 78), 3));
	// stvx128 v114,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v114.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v117,r0,r7
	_mm_store_si128((__m128i*)(base + ((ctx.r7.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v117.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r8,r1,160
	ctx.r8.s64 = ctx.r1.s64 + 160;
	// stvx128 v120,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v120.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r7,r1,144
	ctx.r7.s64 = ctx.r1.s64 + 144;
	// stvx128 v121,r0,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v121.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// stvx128 v119,r0,r30
	_mm_store_si128((__m128i*)(base + ((ctx.r30.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v119.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// li r4,16
	ctx.r4.s64 = 16;
	// fmr f2,f29
	ctx.fpscr.disableFlushModeUnconditional();
	ctx.f2.f64 = ctx.f29.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// vrsqrtefp v0,v12
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v0.f32, _mm_div_ps(_mm_set1_ps(1), _mm_sqrt_ps(_mm_load_ps(ctx.v12.f32))));
	// vor v11,v12,v12
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_load_si128((__m128i*)ctx.v12.u8));
	// vmulfp128 v13,v12,v127
	_mm_store_ps(ctx.v13.f32, _mm_mul_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v127.f32)));
	// vcmpeqfp128 v9,v12,v115
	_mm_store_ps(ctx.v9.f32, _mm_cmpeq_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v115.f32)));
	// vmulfp128 v12,v0,v0
	_mm_store_ps(ctx.v12.f32, _mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v0.f32)));
	// vnmsubfp128 v10,v13,v12,v10
	_mm_store_ps(ctx.v10.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v12.f32)), _mm_load_ps(ctx.v10.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// vmaddfp v0,v0,v10,v0
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v10.f32)), _mm_load_ps(ctx.v0.f32)));
	// vmulfp128 v0,v114,v0
	_mm_store_ps(ctx.v0.f32, _mm_mul_ps(_mm_load_ps(ctx.v114.f32), _mm_load_ps(ctx.v0.f32)));
	// vsel v13,v0,v11,v9
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v9.u8), _mm_load_si128((__m128i*)ctx.v0.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v9.u8), _mm_load_si128((__m128i*)ctx.v11.u8))));
	// vmsum3fp128 v0,v13,v8
	_mm_store_ps(ctx.v0.f32, _mm_dp_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v8.f32), 0xEF));
	// stvx128 v13,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v0,r0,r29
	_mm_store_si128((__m128i*)(base + ((ctx.r29.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lfs f0,96(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f0.f64 = double(temp.f32);
	// fneg f0,f0
	ctx.f0.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// stfs f0,812(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 812, temp.u32);
	// bl 0x825ba038
	ctx.lr = 0x82362AC4;
	sub_825BA038(ctx, base);
	// stw r3,836(r31)
	PPC_STORE_U32(ctx.r31.u32 + 836, ctx.r3.u32);
loc_82362AC8:
	// addi r1,r1,480
	ctx.r1.s64 = ctx.r1.s64 + 480;
	// addi r12,r1,-80
	ctx.r12.s64 = ctx.r1.s64 + -80;
	// bl 0x82fac39c
	ctx.lr = 0x82362AD4;
	__restvmx_114(ctx, base);
	// lfd f29,-80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// lfd f30,-72(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// lfd f31,-64(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x82fa76c0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82362AE4"))) PPC_WEAK_FUNC(sub_82362AE4);
PPC_FUNC_IMPL(__imp__sub_82362AE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82362AE8"))) PPC_WEAK_FUNC(sub_82362AE8);
PPC_FUNC_IMPL(__imp__sub_82362AE8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7674
	ctx.lr = 0x82362AF0;
	__savegprlr_27(ctx, base);
	// stfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f31.u64);
	// li r12,-112
	ctx.r12.s64 = -112;
	// stvx128 v125,r1,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r1.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v125.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r12,-96
	ctx.r12.s64 = -96;
	// stvx128 v126,r1,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r1.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v126.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r12,-80
	ctx.r12.s64 = -80;
	// stvx128 v127,r1,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r1.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v127.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,844(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 844);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82362d70
	if (ctx.cr6.eq) goto loc_82362D70;
	// lwz r3,3600(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3600);
	// li r11,80
	ctx.r11.s64 = 80;
	// lwz r10,840(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 840);
	// li r28,0
	ctx.r28.s64 = 0;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lvx128 v125,r3,r11
	simd::store_shuffled(ctx.v125, simd::load_and_shuffle(base + ((ctx.r3.u32 + ctx.r11.u32) & ~0xF), VectorMaskL));
	// beq cr6,0x82362b4c
	if (ctx.cr6.eq) goto loc_82362B4C;
	// vor128 v1,v125,v125
	_mm_store_si128((__m128i*)ctx.v1.u8, _mm_load_si128((__m128i*)ctx.v125.u8));
	// bl 0x82281400
	ctx.lr = 0x82362B48;
	sub_82281400(ctx, base);
	// stw r28,840(r31)
	PPC_STORE_U32(ctx.r31.u32 + 840, ctx.r28.u32);
loc_82362B4C:
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// lwz r9,3600(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3600);
	// li r8,3008
	ctx.r8.s64 = 3008;
	// li r27,3024
	ctx.r27.s64 = 3024;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// addi r10,r11,8072
	ctx.r10.s64 = ctx.r11.s64 + 8072;
	// lwz r11,844(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 844);
	// lvx128 v0,r9,r8
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r9.u32 + ctx.r8.u32) & ~0xF), VectorMaskL));
	// lvx128 v13,r9,r27
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r9.u32 + ctx.r27.u32) & ~0xF), VectorMaskL));
	// lbz r9,3410(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 3410);
	// stvx128 v0,r0,r7
	_mm_store_si128((__m128i*)(base + ((ctx.r7.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lfs f0,11652(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 11652);
	ctx.f0.f64 = double(temp.f32);
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// lfs f13,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x82362bdc
	if (!ctx.cr6.lt) goto loc_82362BDC;
	// beq 0x82362b9c
	if (ctx.cr0.eq) goto loc_82362B9C;
	// lis r10,-32227
	ctx.r10.s64 = -2112028672;
	// lfs f0,-24756(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -24756);
	ctx.f0.f64 = double(temp.f32);
	// b 0x82362ba0
	goto loc_82362BA0;
loc_82362B9C:
	// lfs f0,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
loc_82362BA0:
	// li r10,784
	ctx.r10.s64 = 784;
	// stfs f0,8(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// li r9,2
	ctx.r9.s64 = 2;
	// stw r28,152(r11)
	PPC_STORE_U32(ctx.r11.u32 + 152, ctx.r28.u32);
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r9,148(r11)
	PPC_STORE_U32(ctx.r11.u32 + 148, ctx.r9.u32);
	// li r9,112
	ctx.r9.s64 = 112;
	// stw r8,144(r11)
	PPC_STORE_U32(ctx.r11.u32 + 144, ctx.r8.u32);
	// li r8,752
	ctx.r8.s64 = 752;
	// lvx128 v12,r31,r10
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((ctx.r31.u32 + ctx.r10.u32) & ~0xF), VectorMaskL));
	// li r7,128
	ctx.r7.s64 = 128;
	// stvx128 v12,r11,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v12,r31,r8
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((ctx.r31.u32 + ctx.r8.u32) & ~0xF), VectorMaskL));
	// stvx128 v12,r11,r7
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r7.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// b 0x82362c2c
	goto loc_82362C2C;
loc_82362BDC:
	// beq 0x82362bec
	if (ctx.cr0.eq) goto loc_82362BEC;
	// lis r10,-32227
	ctx.r10.s64 = -2112028672;
	// lfs f0,-24756(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -24756);
	ctx.f0.f64 = double(temp.f32);
	// b 0x82362bf0
	goto loc_82362BF0;
loc_82362BEC:
	// lfs f0,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
loc_82362BF0:
	// li r10,4
	ctx.r10.s64 = 4;
	// stfs f0,8(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// li r9,5
	ctx.r9.s64 = 5;
	// li r8,3
	ctx.r8.s64 = 3;
	// stw r10,144(r11)
	PPC_STORE_U32(ctx.r11.u32 + 144, ctx.r10.u32);
	// stw r9,148(r11)
	PPC_STORE_U32(ctx.r11.u32 + 148, ctx.r9.u32);
	// li r10,800
	ctx.r10.s64 = 800;
	// stw r8,152(r11)
	PPC_STORE_U32(ctx.r11.u32 + 152, ctx.r8.u32);
	// li r9,112
	ctx.r9.s64 = 112;
	// li r7,768
	ctx.r7.s64 = 768;
	// li r8,128
	ctx.r8.s64 = 128;
	// lvx128 v12,r31,r10
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((ctx.r31.u32 + ctx.r10.u32) & ~0xF), VectorMaskL));
	// stvx128 v12,r11,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v12,r31,r7
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((ctx.r31.u32 + ctx.r7.u32) & ~0xF), VectorMaskL));
	// stvx128 v12,r11,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)VectorMaskL)));
loc_82362C2C:
	// lwz r11,1068(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1068);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82362c48
	if (!ctx.cr6.eq) goto loc_82362C48;
	// lbz r11,3409(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 3409);
	// li r10,1
	ctx.r10.s64 = 1;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82362c4c
	if (ctx.cr0.eq) goto loc_82362C4C;
loc_82362C48:
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
loc_82362C4C:
	// lwz r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// li r8,48
	ctx.r8.s64 = 48;
	// lwz r9,844(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 844);
	// li r30,64
	ctx.r30.s64 = 64;
	// addi r11,r11,-20
	ctx.r11.s64 = ctx.r11.s64 + -20;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// li r29,16
	ctx.r29.s64 = 16;
	// addic r7,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r7.s64 = ctx.r11.s64 + -1;
	// subfe r11,r7,r11
	temp.u8 = (~ctx.r7.u32 + ctx.r11.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r7.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// stb r10,80(r9)
	PPC_STORE_U8(ctx.r9.u32 + 80, ctx.r10.u8);
	// stvx128 v13,r9,r30
	_mm_store_si128((__m128i*)(base + ((ctx.r9.u32 + ctx.r30.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v0,r9,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r9.u32 + ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stb r11,81(r9)
	PPC_STORE_U8(ctx.r9.u32 + 81, ctx.r11.u8);
	// stvx128 v125,r9,r29
	_mm_store_si128((__m128i*)(base + ((ctx.r9.u32 + ctx.r29.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v125.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lwz r3,844(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 844);
	// bl 0x825bb2d8
	ctx.lr = 0x82362C8C;
	sub_825BB2D8(ctx, base);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// lfs f0,-23580(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -23580);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// blt cr6,0x82362d70
	if (ctx.cr6.lt) goto loc_82362D70;
	// lwz r11,844(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 844);
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// addi r10,r10,-27104
	ctx.r10.s64 = ctx.r10.s64 + -27104;
	// lvx128 v126,r11,r29
	simd::store_shuffled(ctx.v126, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r29.u32) & ~0xF), VectorMaskL));
	// vsubfp128 v0,v125,v126
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v0.f32, _mm_sub_ps(_mm_load_ps(ctx.v125.f32), _mm_load_ps(ctx.v126.f32)));
	// lvx128 v127,r11,r30
	simd::store_shuffled(ctx.v127, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r30.u32) & ~0xF), VectorMaskL));
	// lvlx v13,0,r10
	temp.u32 = ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw v13,v13,0
	_mm_store_si128((__m128i*)ctx.v13.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v13.u32), 0xFF));
	// vrlimi128 v0,v13,1,0
	_mm_store_ps(ctx.v0.f32, _mm_blend_ps(_mm_load_ps(ctx.v0.f32), _mm_permute_ps(_mm_load_ps(ctx.v13.f32), 228), 1));
	// vcmpbfp. v0,v0,v13
	_mm_store_ps(ctx.v0.f32, _mm_vcmpbfp(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v13.f32)));
	ctx.cr6.setFromMask(_mm_load_ps(ctx.v0.f32), 0xF);
	// beq cr6,0x82362d70
	if (ctx.cr6.eq) goto loc_82362D70;
	// lwz r30,48(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// b 0x82362cfc
	goto loc_82362CFC;
loc_82362CD0:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x824261e8
	ctx.lr = 0x82362CDC;
	sub_824261E8(ctx, base);
	// vor128 v1,v125,v125
	_mm_store_si128((__m128i*)ctx.v1.u8, _mm_load_si128((__m128i*)ctx.v125.u8));
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x823d9ac0
	ctx.lr = 0x82362CE8;
	sub_823D9AC0(ctx, base);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82362cf8
	if (ctx.cr6.eq) goto loc_82362CF8;
	// bl 0x82241d18
	ctx.lr = 0x82362CF8;
	sub_82241D18(ctx, base);
loc_82362CF8:
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
loc_82362CFC:
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82362cd0
	if (!ctx.cr6.eq) goto loc_82362CD0;
	// vor128 v1,v126,v126
	_mm_store_si128((__m128i*)ctx.v1.u8, _mm_load_si128((__m128i*)ctx.v126.u8));
	// lwz r3,3600(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3600);
	// bl 0x822814b0
	ctx.lr = 0x82362D14;
	sub_822814B0(ctx, base);
	// vmsum3fp128 v8,v127,v127
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v8.f32, _mm_dp_ps(_mm_load_ps(ctx.v127.f32), _mm_load_ps(ctx.v127.f32), 0xEF));
	// vspltisw v0,1
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_set1_epi32(int(0x1)));
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// vspltisw v12,0
	_mm_store_si128((__m128i*)ctx.v12.u32, _mm_set1_epi32(int(0x0)));
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// vcfsx v10,v0,1
	_mm_store_ps(ctx.v10.f32, _mm_mul_ps(_mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v0.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x3F000000)))));
	// lfs f0,-15356(r10)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -15356);
	ctx.f0.f64 = double(temp.f32);
	// vrsqrtefp v0,v8
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v0.f32, _mm_div_ps(_mm_set1_ps(1), _mm_sqrt_ps(_mm_load_ps(ctx.v8.f32))));
	// vcmpeqfp v9,v8,v12
	_mm_store_ps(ctx.v9.f32, _mm_cmpeq_ps(_mm_load_ps(ctx.v8.f32), _mm_load_ps(ctx.v12.f32)));
	// vmulfp128 v13,v8,v10
	_mm_store_ps(ctx.v13.f32, _mm_mul_ps(_mm_load_ps(ctx.v8.f32), _mm_load_ps(ctx.v10.f32)));
	// vmulfp128 v12,v0,v0
	_mm_store_ps(ctx.v12.f32, _mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v0.f32)));
	// vnmsubfp v10,v13,v12,v10
	_mm_store_ps(ctx.v10.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v12.f32)), _mm_load_ps(ctx.v10.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// vmaddfp v0,v0,v10,v0
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v10.f32)), _mm_load_ps(ctx.v0.f32)));
	// vmulfp128 v0,v8,v0
	_mm_store_ps(ctx.v0.f32, _mm_mul_ps(_mm_load_ps(ctx.v8.f32), _mm_load_ps(ctx.v0.f32)));
	// vsel v13,v0,v8,v9
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v9.u8), _mm_load_si128((__m128i*)ctx.v0.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v9.u8), _mm_load_si128((__m128i*)ctx.v8.u8))));
	// stvx128 v13,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lfs f13,96(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x82362d70
	if (!ctx.cr6.lt) goto loc_82362D70;
	// lwz r11,3600(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3600);
	// li r10,3120
	ctx.r10.s64 = 3120;
	// stvx128 v127,r11,r27
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r27.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v127.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v77,r11,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v77.u8), _mm_load_si128((__m128i*)VectorMaskL)));
loc_82362D70:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// li r0,-112
	ctx.r0.s64 = -112;
	// lvx128 v125,r1,r0
	simd::store_shuffled(ctx.v125, simd::load_and_shuffle(base + ((ctx.r1.u32 + ctx.r0.u32) & ~0xF), VectorMaskL));
	// li r0,-96
	ctx.r0.s64 = -96;
	// lvx128 v126,r1,r0
	simd::store_shuffled(ctx.v126, simd::load_and_shuffle(base + ((ctx.r1.u32 + ctx.r0.u32) & ~0xF), VectorMaskL));
	// li r0,-80
	ctx.r0.s64 = -80;
	// lvx128 v127,r1,r0
	simd::store_shuffled(ctx.v127, simd::load_and_shuffle(base + ((ctx.r1.u32 + ctx.r0.u32) & ~0xF), VectorMaskL));
	// lfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x82fa76c4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82362D94"))) PPC_WEAK_FUNC(sub_82362D94);
PPC_FUNC_IMPL(__imp__sub_82362D94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82362D98"))) PPC_WEAK_FUNC(sub_82362D98);
PPC_FUNC_IMPL(__imp__sub_82362D98) {
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
	// li r3,5840
	ctx.r3.s64 = 5840;
	// bl 0x82691500
	ctx.lr = 0x82362DB4;
	sub_82691500(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82362dc8
	if (ctx.cr0.eq) goto loc_82362DC8;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8235c898
	ctx.lr = 0x82362DC4;
	sub_8235C898(ctx, base);
	// b 0x82362dcc
	goto loc_82362DCC;
loc_82362DC8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82362DCC:
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

__attribute__((alias("__imp__sub_82362DE0"))) PPC_WEAK_FUNC(sub_82362DE0);
PPC_FUNC_IMPL(__imp__sub_82362DE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x82362DE8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r3,32
	ctx.r3.s64 = 32;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x82691500
	ctx.lr = 0x82362E00;
	sub_82691500(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82362e44
	if (ctx.cr0.eq) goto loc_82362E44;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r11,-16484
	ctx.r9.s64 = ctx.r11.s64 + -16484;
	// addic. r11,r3,12
	ctx.xer.ca = ctx.r3.u32 > 4294967283;
	ctx.r11.s64 = ctx.r3.s64 + 12;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// beq 0x82362e48
	if (ctx.cr0.eq) goto loc_82362E48;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lis r9,-32228
	ctx.r9.s64 = -2112094208;
	// stw r31,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r31.u32);
	// addi r9,r9,-28756
	ctx.r9.s64 = ctx.r9.s64 + -28756;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// b 0x82362e48
	goto loc_82362E48;
loc_82362E44:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82362E48:
	// addi r11,r3,12
	ctx.r11.s64 = ctx.r3.s64 + 12;
	// stw r3,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r3.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82362E60"))) PPC_WEAK_FUNC(sub_82362E60);
PPC_FUNC_IMPL(__imp__sub_82362E60) {
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
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82362e98
	if (!ctx.cr6.eq) goto loc_82362E98;
	// li r3,64
	ctx.r3.s64 = 64;
	// bl 0x82691500
	ctx.lr = 0x82362E8C;
	sub_82691500(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82362ed0
	if (ctx.cr0.eq) goto loc_82362ED0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_82362E98:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r4,r30,8
	ctx.r4.s64 = ctx.r30.s64 + 8;
	// addi r11,r11,15340
	ctx.r11.s64 = ctx.r11.s64 + 15340;
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// li r5,56
	ctx.r5.s64 = 56;
	// bl 0x82fa77c0
	ctx.lr = 0x82362EB4;
	sub_82FA77C0(ctx, base);
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
loc_82362ED0:
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
	ctx.lr = 0x82362EEC;
	sub_82240040(ctx, base);
}

__attribute__((alias("__imp__sub_82362EEC"))) PPC_WEAK_FUNC(sub_82362EEC);
PPC_FUNC_IMPL(__imp__sub_82362EEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82362EF0"))) PPC_WEAK_FUNC(sub_82362EF0);
PPC_FUNC_IMPL(__imp__sub_82362EF0) {
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
	// ld r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 8);
	// lwz r10,16(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// std r11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// lwz r9,96(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82362F1C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82362F2C"))) PPC_WEAK_FUNC(sub_82362F2C);
PPC_FUNC_IMPL(__imp__sub_82362F2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82362F30"))) PPC_WEAK_FUNC(sub_82362F30);
PPC_FUNC_IMPL(__imp__sub_82362F30) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// addi r3,r11,-15104
	ctx.r3.s64 = ctx.r11.s64 + -15104;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82362F3C"))) PPC_WEAK_FUNC(sub_82362F3C);
PPC_FUNC_IMPL(__imp__sub_82362F3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82362F40"))) PPC_WEAK_FUNC(sub_82362F40);
PPC_FUNC_IMPL(__imp__sub_82362F40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82362f88
	if (!ctx.cr6.eq) goto loc_82362F88;
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x82691500
	ctx.lr = 0x82362F64;
	sub_82691500(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne 0x82362f88
	if (!ctx.cr0.eq) goto loc_82362F88;
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
	ctx.lr = 0x82362F88;
	sub_82240040(ctx, base);
loc_82362F88:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r11,r11,15364
	ctx.r11.s64 = ctx.r11.s64 + 15364;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// lbz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 4);
	// stb r11,4(r4)
	PPC_STORE_U8(ctx.r4.u32 + 4, ctx.r11.u8);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82362FB4"))) PPC_WEAK_FUNC(sub_82362FB4);
PPC_FUNC_IMPL(__imp__sub_82362FB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82362FB8"))) PPC_WEAK_FUNC(sub_82362FB8);
PPC_FUNC_IMPL(__imp__sub_82362FB8) {
	PPC_FUNC_PROLOGUE();
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lbz r11,216(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 216);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bnelr 
	if (!ctx.cr0.eq) return;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x8255a8c0
	sub_8255A8C0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82362FDC"))) PPC_WEAK_FUNC(sub_82362FDC);
PPC_FUNC_IMPL(__imp__sub_82362FDC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82362FE0"))) PPC_WEAK_FUNC(sub_82362FE0);
PPC_FUNC_IMPL(__imp__sub_82362FE0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// addi r3,r11,-14796
	ctx.r3.s64 = ctx.r11.s64 + -14796;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82362FEC"))) PPC_WEAK_FUNC(sub_82362FEC);
PPC_FUNC_IMPL(__imp__sub_82362FEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82362FF0"))) PPC_WEAK_FUNC(sub_82362FF0);
PPC_FUNC_IMPL(__imp__sub_82362FF0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82363038
	if (!ctx.cr6.eq) goto loc_82363038;
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x82691500
	ctx.lr = 0x82363014;
	sub_82691500(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne 0x82363038
	if (!ctx.cr0.eq) goto loc_82363038;
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
	ctx.lr = 0x82363038;
	sub_82240040(ctx, base);
loc_82363038:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r11,r11,15388
	ctx.r11.s64 = ctx.r11.s64 + 15388;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// lbz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 4);
	// stb r11,4(r4)
	PPC_STORE_U8(ctx.r4.u32 + 4, ctx.r11.u8);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82363064"))) PPC_WEAK_FUNC(sub_82363064);
PPC_FUNC_IMPL(__imp__sub_82363064) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82363068"))) PPC_WEAK_FUNC(sub_82363068);
PPC_FUNC_IMPL(__imp__sub_82363068) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,244(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 244);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r10,120(r11)
	PPC_STORE_U32(ctx.r11.u32 + 120, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82363080"))) PPC_WEAK_FUNC(sub_82363080);
PPC_FUNC_IMPL(__imp__sub_82363080) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// addi r3,r11,-14736
	ctx.r3.s64 = ctx.r11.s64 + -14736;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8236308C"))) PPC_WEAK_FUNC(sub_8236308C);
PPC_FUNC_IMPL(__imp__sub_8236308C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82363090"))) PPC_WEAK_FUNC(sub_82363090);
PPC_FUNC_IMPL(__imp__sub_82363090) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x823630d8
	if (!ctx.cr6.eq) goto loc_823630D8;
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x82691500
	ctx.lr = 0x823630B4;
	sub_82691500(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne 0x823630d8
	if (!ctx.cr0.eq) goto loc_823630D8;
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
	ctx.lr = 0x823630D8;
	sub_82240040(ctx, base);
loc_823630D8:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r11,r11,15412
	ctx.r11.s64 = ctx.r11.s64 + 15412;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// lbz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 4);
	// stb r11,4(r4)
	PPC_STORE_U8(ctx.r4.u32 + 4, ctx.r11.u8);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82363104"))) PPC_WEAK_FUNC(sub_82363104);
PPC_FUNC_IMPL(__imp__sub_82363104) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82363108"))) PPC_WEAK_FUNC(sub_82363108);
PPC_FUNC_IMPL(__imp__sub_82363108) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,244(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 244);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,120(r11)
	PPC_STORE_U32(ctx.r11.u32 + 120, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82363120"))) PPC_WEAK_FUNC(sub_82363120);
PPC_FUNC_IMPL(__imp__sub_82363120) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// addi r3,r11,-14676
	ctx.r3.s64 = ctx.r11.s64 + -14676;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8236312C"))) PPC_WEAK_FUNC(sub_8236312C);
PPC_FUNC_IMPL(__imp__sub_8236312C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82363130"))) PPC_WEAK_FUNC(sub_82363130);
PPC_FUNC_IMPL(__imp__sub_82363130) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82363178
	if (!ctx.cr6.eq) goto loc_82363178;
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x82691500
	ctx.lr = 0x82363154;
	sub_82691500(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne 0x82363178
	if (!ctx.cr0.eq) goto loc_82363178;
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
	ctx.lr = 0x82363178;
	sub_82240040(ctx, base);
loc_82363178:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r11,r11,15436
	ctx.r11.s64 = ctx.r11.s64 + 15436;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r11,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823631A4"))) PPC_WEAK_FUNC(sub_823631A4);
PPC_FUNC_IMPL(__imp__sub_823631A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823631A8"))) PPC_WEAK_FUNC(sub_823631A8);
PPC_FUNC_IMPL(__imp__sub_823631A8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,244(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 244);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x823631d4
	if (!ctx.cr6.eq) goto loc_823631D4;
	// lwz r11,120(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 120);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// beq cr6,0x823631d8
	if (ctx.cr6.eq) goto loc_823631D8;
loc_823631D4:
	// li r11,1
	ctx.r11.s64 = 1;
loc_823631D8:
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823631E0"))) PPC_WEAK_FUNC(sub_823631E0);
PPC_FUNC_IMPL(__imp__sub_823631E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// addi r3,r11,-14616
	ctx.r3.s64 = ctx.r11.s64 + -14616;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823631EC"))) PPC_WEAK_FUNC(sub_823631EC);
PPC_FUNC_IMPL(__imp__sub_823631EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823631F0"))) PPC_WEAK_FUNC(sub_823631F0);
PPC_FUNC_IMPL(__imp__sub_823631F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82363238
	if (!ctx.cr6.eq) goto loc_82363238;
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x82691500
	ctx.lr = 0x82363214;
	sub_82691500(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne 0x82363238
	if (!ctx.cr0.eq) goto loc_82363238;
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
	ctx.lr = 0x82363238;
	sub_82240040(ctx, base);
loc_82363238:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r11,r11,15460
	ctx.r11.s64 = ctx.r11.s64 + 15460;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r11,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82363264"))) PPC_WEAK_FUNC(sub_82363264);
PPC_FUNC_IMPL(__imp__sub_82363264) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82363268"))) PPC_WEAK_FUNC(sub_82363268);
PPC_FUNC_IMPL(__imp__sub_82363268) {
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
	// lwz r31,4(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82362168
	ctx.lr = 0x82363290;
	sub_82362168(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x823632ac
	if (ctx.cr0.eq) goto loc_823632AC;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82362168
	ctx.lr = 0x823632A4;
	sub_82362168(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x823632c4
	if (!ctx.cr0.eq) goto loc_823632C4;
loc_823632AC:
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x82362168
	ctx.lr = 0x823632B8;
	sub_82362168(ctx, base);
	// cmplwi cr6,r3,2
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 2, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne cr6,0x823632c8
	if (!ctx.cr6.eq) goto loc_823632C8;
loc_823632C4:
	// li r11,1
	ctx.r11.s64 = 1;
loc_823632C8:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
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

__attribute__((alias("__imp__sub_823632E4"))) PPC_WEAK_FUNC(sub_823632E4);
PPC_FUNC_IMPL(__imp__sub_823632E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823632E8"))) PPC_WEAK_FUNC(sub_823632E8);
PPC_FUNC_IMPL(__imp__sub_823632E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// addi r3,r11,-14556
	ctx.r3.s64 = ctx.r11.s64 + -14556;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823632F4"))) PPC_WEAK_FUNC(sub_823632F4);
PPC_FUNC_IMPL(__imp__sub_823632F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823632F8"))) PPC_WEAK_FUNC(sub_823632F8);
PPC_FUNC_IMPL(__imp__sub_823632F8) {
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
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// li r5,9
	ctx.r5.s64 = 9;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82550538
	ctx.lr = 0x8236331C;
	sub_82550538(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// stw r30,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r30.u32);
	// addi r11,r11,15528
	ctx.r11.s64 = ctx.r11.s64 + 15528;
	// addi r10,r10,15600
	ctx.r10.s64 = ctx.r10.s64 + 15600;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r10.u32);
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

__attribute__((alias("__imp__sub_82363354"))) PPC_WEAK_FUNC(sub_82363354);
PPC_FUNC_IMPL(__imp__sub_82363354) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82363358"))) PPC_WEAK_FUNC(sub_82363358);
PPC_FUNC_IMPL(__imp__sub_82363358) {
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
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// lwz r11,128(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 128);
	// lis r9,-32229
	ctx.r9.s64 = -2112159744;
	// addi r10,r10,15528
	ctx.r10.s64 = ctx.r10.s64 + 15528;
	// addi r9,r9,15600
	ctx.r9.s64 = ctx.r9.s64 + 15600;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r9,104(r3)
	PPC_STORE_U32(ctx.r3.u32 + 104, ctx.r9.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823633a4
	if (ctx.cr6.eq) goto loc_823633A4;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,132(r11)
	PPC_STORE_U32(ctx.r11.u32 + 132, ctx.r10.u32);
	// stw r10,128(r3)
	PPC_STORE_U32(ctx.r3.u32 + 128, ctx.r10.u32);
loc_823633A4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82550660
	ctx.lr = 0x823633AC;
	sub_82550660(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823633bc
	if (ctx.cr0.eq) goto loc_823633BC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82691540
	ctx.lr = 0x823633BC;
	sub_82691540(ctx, base);
loc_823633BC:
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

__attribute__((alias("__imp__sub_823633D8"))) PPC_WEAK_FUNC(sub_823633D8);
PPC_FUNC_IMPL(__imp__sub_823633D8) {
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
	// li r5,3
	ctx.r5.s64 = 3;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x828ca3b0
	ctx.lr = 0x823633F4;
	sub_828CA3B0(ctx, base);
	// lis r10,-32230
	ctx.r10.s64 = -2112225280;
	// addi r11,r31,104
	ctx.r11.s64 = ctx.r31.s64 + 104;
	// addi r10,r10,-26200
	ctx.r10.s64 = ctx.r10.s64 + -26200;
	// lis r9,-32229
	ctx.r9.s64 = -2112159744;
	// stw r10,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r10.u32);
	// lis r8,-32229
	ctx.r8.s64 = -2112159744;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// addi r9,r9,15528
	ctx.r9.s64 = ctx.r9.s64 + 15528;
	// stw r10,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r10.u32);
	// addi r8,r8,15600
	ctx.r8.s64 = ctx.r8.s64 + 15600;
	// stw r11,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r11.u32);
	// stw r11,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r10.u32);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// stw r8,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r8.u32);
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

__attribute__((alias("__imp__sub_8236344C"))) PPC_WEAK_FUNC(sub_8236344C);
PPC_FUNC_IMPL(__imp__sub_8236344C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82363450"))) PPC_WEAK_FUNC(sub_82363450);
PPC_FUNC_IMPL(__imp__sub_82363450) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x82363458;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,128(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 128);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82363504
	if (ctx.cr6.eq) goto loc_82363504;
	// bl 0x828c11f8
	ctx.lr = 0x82363470;
	sub_828C11F8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82363504
	if (ctx.cr0.eq) goto loc_82363504;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8236348C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r30,1
	ctx.r30.s64 = 1;
	// lwz r10,512(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 512);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// beq cr6,0x823634f0
	if (ctx.cr6.eq) goto loc_823634F0;
	// addi r29,r3,72
	ctx.r29.s64 = ctx.r3.s64 + 72;
loc_823634B0:
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r4,16(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r11,56(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 56);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823634C8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// clrlwi r10,r30,24
	ctx.r10.u64 = ctx.r30.u32 & 0xFF;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// and r30,r11,r10
	ctx.r30.u64 = ctx.r11.u64 & ctx.r10.u64;
	// bl 0x8285aa38
	ctx.lr = 0x823634DC;
	sub_8285AA38(ctx, base);
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,512(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 512);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x823634b0
	if (!ctx.cr6.eq) goto loc_823634B0;
loc_823634F0:
	// clrlwi. r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82363504
	if (ctx.cr0.eq) goto loc_82363504;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r28,156
	ctx.r3.s64 = ctx.r28.s64 + 156;
	// bl 0x828df890
	ctx.lr = 0x82363504;
	sub_828DF890(ctx, base);
loc_82363504:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8236350C"))) PPC_WEAK_FUNC(sub_8236350C);
PPC_FUNC_IMPL(__imp__sub_8236350C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82363510"))) PPC_WEAK_FUNC(sub_82363510);
PPC_FUNC_IMPL(__imp__sub_82363510) {
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,15484
	ctx.r4.s64 = ctx.r11.s64 + 15484;
	// bl 0x822400d8
	ctx.lr = 0x82363538;
	sub_822400D8(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r3,r31,52
	ctx.r3.s64 = ctx.r31.s64 + 52;
	// stb r30,64(r31)
	PPC_STORE_U8(ctx.r31.u32 + 64, ctx.r30.u8);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x828cd148
	ctx.lr = 0x82363550;
	sub_828CD148(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822402c8
	ctx.lr = 0x82363560;
	sub_822402C8(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r4,r11,15504
	ctx.r4.s64 = ctx.r11.s64 + 15504;
	// bl 0x822400d8
	ctx.lr = 0x82363570;
	sub_822400D8(ctx, base);
	// stb r30,152(r31)
	PPC_STORE_U8(ctx.r31.u32 + 152, ctx.r30.u8);
	// addi r3,r31,140
	ctx.r3.s64 = ctx.r31.s64 + 140;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x828cd148
	ctx.lr = 0x82363584;
	sub_828CD148(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x822402c8
	ctx.lr = 0x82363594;
	sub_822402C8(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
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

__attribute__((alias("__imp__sub_823635AC"))) PPC_WEAK_FUNC(sub_823635AC);
PPC_FUNC_IMPL(__imp__sub_823635AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823635B0"))) PPC_WEAK_FUNC(sub_823635B0);
PPC_FUNC_IMPL(__imp__sub_823635B0) {
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
	// lwz r30,16(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r3,72
	ctx.r3.s64 = ctx.r3.s64 + 72;
	// addi r5,r30,52
	ctx.r5.s64 = ctx.r30.s64 + 52;
	// bl 0x82265e80
	ctx.lr = 0x823635DC;
	sub_82265E80(ctx, base);
	// addi r5,r30,140
	ctx.r5.s64 = ctx.r30.s64 + 140;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r31,156
	ctx.r3.s64 = ctx.r31.s64 + 156;
	// bl 0x82265e80
	ctx.lr = 0x823635EC;
	sub_82265E80(ctx, base);
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

__attribute__((alias("__imp__sub_82363604"))) PPC_WEAK_FUNC(sub_82363604);
PPC_FUNC_IMPL(__imp__sub_82363604) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82363608"))) PPC_WEAK_FUNC(sub_82363608);
PPC_FUNC_IMPL(__imp__sub_82363608) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-104
	ctx.r3.s64 = ctx.r3.s64 + -104;
	// b 0x82363358
	sub_82363358(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82363610"))) PPC_WEAK_FUNC(sub_82363610);
PPC_FUNC_IMPL(__imp__sub_82363610) {
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
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,15604
	ctx.r11.s64 = ctx.r11.s64 + 15604;
	// clrlwi. r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// beq 0x8236363c
	if (ctx.cr0.eq) goto loc_8236363C;
	// bl 0x82691540
	ctx.lr = 0x8236363C;
	sub_82691540(ctx, base);
loc_8236363C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
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

__attribute__((alias("__imp__sub_82363654"))) PPC_WEAK_FUNC(sub_82363654);
PPC_FUNC_IMPL(__imp__sub_82363654) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82363658"))) PPC_WEAK_FUNC(sub_82363658);
PPC_FUNC_IMPL(__imp__sub_82363658) {
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
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,15632
	ctx.r11.s64 = ctx.r11.s64 + 15632;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x8243ca58
	ctx.lr = 0x82363684;
	sub_8243CA58(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82363694
	if (ctx.cr0.eq) goto loc_82363694;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82691540
	ctx.lr = 0x82363694;
	sub_82691540(ctx, base);
loc_82363694:
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

__attribute__((alias("__imp__sub_823636B0"))) PPC_WEAK_FUNC(sub_823636B0);
PPC_FUNC_IMPL(__imp__sub_823636B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x823636B8;
	__savegprlr_29(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r11,r11,-21532
	ctx.r11.s64 = ctx.r11.s64 + -21532;
	// li r3,28
	ctx.r3.s64 = 28;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
	// bl 0x82691500
	ctx.lr = 0x823636E0;
	sub_82691500(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x823637bc
	if (ctx.cr0.eq) goto loc_823637BC;
	// stw r3,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r3,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r3.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r3,r31,28
	ctx.r3.s64 = ctx.r31.s64 + 28;
	// stw r10,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r10.u32);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r10,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r10.u32);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stb r11,24(r10)
	PPC_STORE_U8(ctx.r10.u32 + 24, ctx.r11.u8);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stb r11,25(r10)
	PPC_STORE_U8(ctx.r10.u32 + 25, ctx.r11.u8);
	// stw r30,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r30.u32);
	// stw r30,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r30.u32);
	// bl 0x8224d3e0
	ctx.lr = 0x82363728;
	sub_8224D3E0(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r3,40
	ctx.r3.s64 = 40;
	// lfs f0,-2340(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -2340);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,56(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 56, temp.u32);
	// stw r30,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r30.u32);
	// stw r30,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r30.u32);
	// bl 0x82691500
	ctx.lr = 0x82363744;
	sub_82691500(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82363784
	if (ctx.cr0.eq) goto loc_82363784;
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// addi r10,r10,15648
	ctx.r10.s64 = ctx.r10.s64 + 15648;
	// stw r9,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r9.u32);
	// lis r11,-32188
	ctx.r11.s64 = -2109472768;
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r11,r11,-12720
	ctx.r11.s64 = ctx.r11.s64 + -12720;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r11,100(r1)
	PPC_STORE_U64(ctx.r1.u32 + 100, ctx.r11.u64);
	// bl 0x824f7fb0
	ctx.lr = 0x82363780;
	sub_824F7FB0(ctx, base);
	// b 0x82363788
	goto loc_82363788;
loc_82363784:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_82363788:
	// lwz r29,60(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// stw r3,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r3.u32);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x823637b0
	if (ctx.cr6.eq) goto loc_823637B0;
	// addi r3,r29,16
	ctx.r3.s64 = ctx.r29.s64 + 16;
	// bl 0x82f91940
	ctx.lr = 0x823637A0;
	sub_82F91940(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x824f80e8
	ctx.lr = 0x823637A8;
	sub_824F80E8(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82691540
	ctx.lr = 0x823637B0;
	sub_82691540(ctx, base);
loc_823637B0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
loc_823637BC:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r11,r11,11272
	ctx.r11.s64 = ctx.r11.s64 + 11272;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// bl 0x82240040
	ctx.lr = 0x823637D4;
	sub_82240040(ctx, base);
}

__attribute__((alias("__imp__sub_823637D4"))) PPC_WEAK_FUNC(sub_823637D4);
PPC_FUNC_IMPL(__imp__sub_823637D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823637D8"))) PPC_WEAK_FUNC(sub_823637D8);
PPC_FUNC_IMPL(__imp__sub_823637D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82363820
	if (!ctx.cr6.eq) goto loc_82363820;
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x82691500
	ctx.lr = 0x823637FC;
	sub_82691500(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne 0x82363820
	if (!ctx.cr0.eq) goto loc_82363820;
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
	ctx.lr = 0x82363820;
	sub_82240040(ctx, base);
loc_82363820:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r11,r11,15648
	ctx.r11.s64 = ctx.r11.s64 + 15648;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r11,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r11.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r11,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82363854"))) PPC_WEAK_FUNC(sub_82363854);
PPC_FUNC_IMPL(__imp__sub_82363854) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82363858"))) PPC_WEAK_FUNC(sub_82363858);
PPC_FUNC_IMPL(__imp__sub_82363858) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// addi r3,r11,-14496
	ctx.r3.s64 = ctx.r11.s64 + -14496;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82363864"))) PPC_WEAK_FUNC(sub_82363864);
PPC_FUNC_IMPL(__imp__sub_82363864) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82363868"))) PPC_WEAK_FUNC(sub_82363868);
PPC_FUNC_IMPL(__imp__sub_82363868) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7640
	ctx.lr = 0x82363870;
	__savegprlr_14(ctx, base);
	// stfd f30,-168(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -168, ctx.f30.u64);
	// stfd f31,-160(r1)
	PPC_STORE_U64(ctx.r1.u32 + -160, ctx.f31.u64);
	// stwu r1,-1904(r1)
	ea = -1904 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r21,r4
	ctx.r21.u64 = ctx.r4.u64;
	// bl 0x823496d0
	ctx.lr = 0x82363888;
	sub_823496D0(ctx, base);
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// addi r9,r10,17096
	ctx.r9.s64 = ctx.r10.s64 + 17096;
	// li r30,0
	ctx.r30.s64 = 0;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// addi r14,r11,8072
	ctx.r14.s64 = ctx.r11.s64 + 8072;
	// stw r30,388(r31)
	PPC_STORE_U32(ctx.r31.u32 + 388, ctx.r30.u32);
	// stw r30,392(r31)
	PPC_STORE_U32(ctx.r31.u32 + 392, ctx.r30.u32);
	// li r15,-1
	ctx.r15.s64 = -1;
	// stw r30,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r30.u32);
	// li r18,1
	ctx.r18.s64 = 1;
	// stw r30,432(r31)
	PPC_STORE_U32(ctx.r31.u32 + 432, ctx.r30.u32);
	// addi r28,r10,-2340
	ctx.r28.s64 = ctx.r10.s64 + -2340;
	// stw r30,436(r31)
	PPC_STORE_U32(ctx.r31.u32 + 436, ctx.r30.u32);
	// lfs f31,-2340(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -2340);
	ctx.f31.f64 = double(temp.f32);
	// stw r30,1536(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1536, ctx.r30.u32);
	// lfs f0,3676(r14)
	temp.u32 = PPC_LOAD_U32(ctx.r14.u32 + 3676);
	ctx.f0.f64 = double(temp.f32);
	// stw r30,1540(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1540, ctx.r30.u32);
	// stw r15,1632(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1632, ctx.r15.u32);
	// stw r30,1636(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1636, ctx.r30.u32);
	// stw r30,1640(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1640, ctx.r30.u32);
	// stfs f0,2468(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2468, temp.u32);
	// stfs f31,2472(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2472, temp.u32);
	// stw r30,2484(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2484, ctx.r30.u32);
	// stfs f31,2476(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2476, temp.u32);
	// stfs f31,2480(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2480, temp.u32);
	// stw r30,2524(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2524, ctx.r30.u32);
	// stw r30,2528(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2528, ctx.r30.u32);
	// stw r30,2532(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2532, ctx.r30.u32);
	// stw r30,2536(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2536, ctx.r30.u32);
	// stw r30,2540(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2540, ctx.r30.u32);
	// stw r30,2544(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2544, ctx.r30.u32);
	// stw r30,2548(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2548, ctx.r30.u32);
	// stw r30,2552(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2552, ctx.r30.u32);
	// stw r18,2556(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2556, ctx.r18.u32);
	// stw r30,2560(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2560, ctx.r30.u32);
	// stw r30,2568(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2568, ctx.r30.u32);
	// stw r30,2572(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2572, ctx.r30.u32);
	// stw r30,2584(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2584, ctx.r30.u32);
	// bl 0x8226c3f0
	ctx.lr = 0x8236392C;
	sub_8226C3F0(ctx, base);
	// lwz r8,24(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// addi r11,r31,2588
	ctx.r11.s64 = ctx.r31.s64 + 2588;
	// addi r7,r10,29064
	ctx.r7.s64 = ctx.r10.s64 + 29064;
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// li r9,25
	ctx.r9.s64 = 25;
	// stw r7,2588(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2588, ctx.r7.u32);
	// stw r8,3200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3200, ctx.r8.u32);
	// li r20,2
	ctx.r20.s64 = 2;
loc_82363950:
	// mr r7,r20
	ctx.r7.u64 = ctx.r20.u64;
	// mtctr r20
	ctx.ctr.u64 = ctx.r20.u64;
	// addi r8,r10,-152
	ctx.r8.s64 = ctx.r10.s64 + -152;
loc_8236395C:
	// stwu r30,152(r8)
	ea = 152 + ctx.r8.u32;
	PPC_STORE_U32(ea, ctx.r30.u32);
	ctx.r8.u32 = ea;
	// bdnz 0x8236395c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8236395C;
	// addic. r9,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bne 0x82363950
	if (!ctx.cr0.eq) goto loc_82363950;
	// addi r10,r11,308
	ctx.r10.s64 = ctx.r11.s64 + 308;
	// li r7,25
	ctx.r7.s64 = 25;
loc_82363978:
	// mr r8,r20
	ctx.r8.u64 = ctx.r20.u64;
	// mtctr r20
	ctx.ctr.u64 = ctx.r20.u64;
	// addi r9,r10,-152
	ctx.r9.s64 = ctx.r10.s64 + -152;
loc_82363984:
	// stwu r30,152(r9)
	ea = 152 + ctx.r9.u32;
	PPC_STORE_U32(ea, ctx.r30.u32);
	ctx.r9.u32 = ea;
	// bdnz 0x82363984
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82363984;
	// addic. r7,r7,-1
	ctx.xer.ca = ctx.r7.u32 > 0;
	ctx.r7.s64 = ctx.r7.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bne 0x82363978
	if (!ctx.cr0.eq) goto loc_82363978;
	// mr r9,r20
	ctx.r9.u64 = ctx.r20.u64;
	// mtctr r20
	ctx.ctr.u64 = ctx.r20.u64;
	// addi r10,r11,-48
	ctx.r10.s64 = ctx.r11.s64 + -48;
loc_823639A4:
	// stwu r30,152(r10)
	ea = 152 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r30.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x823639a4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823639A4;
	// mr r10,r20
	ctx.r10.u64 = ctx.r20.u64;
	// mtctr r20
	ctx.ctr.u64 = ctx.r20.u64;
	// addi r11,r11,256
	ctx.r11.s64 = ctx.r11.s64 + 256;
loc_823639B8:
	// stwu r30,152(r11)
	ea = 152 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r30.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x823639b8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823639B8;
	// stw r30,3216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3216, ctx.r30.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r21,60
	ctx.r3.s64 = ctx.r21.s64 + 60;
	// bl 0x82546708
	ctx.lr = 0x823639D4;
	sub_82546708(ctx, base);
	// stw r30,832(r31)
	PPC_STORE_U32(ctx.r31.u32 + 832, ctx.r30.u32);
	// stw r30,816(r31)
	PPC_STORE_U32(ctx.r31.u32 + 816, ctx.r30.u32);
	// lis r10,-32227
	ctx.r10.s64 = -2112028672;
	// stw r30,2020(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2020, ctx.r30.u32);
	// li r9,560
	ctx.r9.s64 = 560;
	// stw r30,812(r31)
	PPC_STORE_U32(ctx.r31.u32 + 812, ctx.r30.u32);
	// li r22,8
	ctx.r22.s64 = 8;
	// stw r30,840(r31)
	PPC_STORE_U32(ctx.r31.u32 + 840, ctx.r30.u32);
	// addi r11,r31,624
	ctx.r11.s64 = ctx.r31.s64 + 624;
	// lwz r8,56(r21)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r21.u32 + 56);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// stw r8,516(r31)
	PPC_STORE_U32(ctx.r31.u32 + 516, ctx.r8.u32);
	// lfs f30,-24756(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -24756);
	ctx.f30.f64 = double(temp.f32);
	// stfs f31,520(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 520, temp.u32);
	// stw r30,600(r31)
	PPC_STORE_U32(ctx.r31.u32 + 600, ctx.r30.u32);
	// stfs f30,548(r31)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r31.u32 + 548, temp.u32);
	// stw r30,1504(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1504, ctx.r30.u32);
	// stfs f31,528(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 528, temp.u32);
	// stw r22,480(r31)
	PPC_STORE_U32(ctx.r31.u32 + 480, ctx.r22.u32);
	// stw r22,496(r31)
	PPC_STORE_U32(ctx.r31.u32 + 496, ctx.r22.u32);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// stw r15,500(r31)
	PPC_STORE_U32(ctx.r31.u32 + 500, ctx.r15.u32);
	// li r5,20
	ctx.r5.s64 = 20;
	// stw r22,504(r31)
	PPC_STORE_U32(ctx.r31.u32 + 504, ctx.r22.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r22,484(r31)
	PPC_STORE_U32(ctx.r31.u32 + 484, ctx.r22.u32);
	// stw r15,492(r31)
	PPC_STORE_U32(ctx.r31.u32 + 492, ctx.r15.u32);
	// lwz r11,40(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 40);
	// stvx128 v77,r31,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32 + ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v77.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stw r11,604(r31)
	PPC_STORE_U32(ctx.r31.u32 + 604, ctx.r11.u32);
	// stw r30,612(r31)
	PPC_STORE_U32(ctx.r31.u32 + 612, ctx.r30.u32);
	// stw r30,616(r31)
	PPC_STORE_U32(ctx.r31.u32 + 616, ctx.r30.u32);
	// stw r30,620(r31)
	PPC_STORE_U32(ctx.r31.u32 + 620, ctx.r30.u32);
	// stw r30,644(r31)
	PPC_STORE_U32(ctx.r31.u32 + 644, ctx.r30.u32);
	// bl 0x82a75988
	ctx.lr = 0x82363A60;
	sub_82A75988(ctx, base);
	// lis r19,-31958
	ctx.r19.s64 = -2094399488;
	// lis r11,25
	ctx.r11.s64 = 1638400;
	// lis r10,15470
	ctx.r10.s64 = 1013841920;
	// ori r16,r11,26125
	ctx.r16.u64 = ctx.r11.u64 | 26125;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// ori r17,r10,62303
	ctx.r17.u64 = ctx.r10.u64 | 62303;
	// lis r10,-32231
	ctx.r10.s64 = -2112290816;
	// addi r10,r10,27984
	ctx.r10.s64 = ctx.r10.s64 + 27984;
	// lfs f0,12080(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 12080);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,616(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 616);
	ctx.f13.f64 = double(temp.f32);
	// lwz r11,21292(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 21292);
	// mullw r11,r11,r16
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r16.s32);
	// add r11,r11,r17
	ctx.r11.u64 = ctx.r11.u64 + ctx.r17.u64;
	// clrlwi r9,r11,9
	ctx.r9.u64 = ctx.r11.u32 & 0x7FFFFF;
	// stw r11,21292(r19)
	PPC_STORE_U32(ctx.r19.u32 + 21292, ctx.r11.u32);
	// lwz r11,644(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 644);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// oris r9,r9,16256
	ctx.r9.u64 = ctx.r9.u64 | 1065353216;
	// stfs f31,1368(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1368, temp.u32);
	// stfs f31,1372(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1372, temp.u32);
	// stw r30,1360(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1360, ctx.r30.u32);
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// lfs f12,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f12,f12,f30
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f30.f64));
	// stfs f31,1376(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1376, temp.u32);
	// fmsubs f0,f12,f0,f13
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f0.f64 - ctx.f13.f64));
	// stfs f31,648(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 648, temp.u32);
	// stfs f0,624(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 624, temp.u32);
	// stw r30,1364(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1364, ctx.r30.u32);
	// stw r11,644(r31)
	PPC_STORE_U32(ctx.r31.u32 + 644, ctx.r11.u32);
	// stw r15,1380(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1380, ctx.r15.u32);
	// stw r30,580(r31)
	PPC_STORE_U32(ctx.r31.u32 + 580, ctx.r30.u32);
	// stw r30,584(r31)
	PPC_STORE_U32(ctx.r31.u32 + 584, ctx.r30.u32);
	// stw r30,544(r31)
	PPC_STORE_U32(ctx.r31.u32 + 544, ctx.r30.u32);
	// stw r30,540(r31)
	PPC_STORE_U32(ctx.r31.u32 + 540, ctx.r30.u32);
	// lwz r11,48(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 48);
	// stfs f31,1620(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1620, temp.u32);
	// stfs f31,1628(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1628, temp.u32);
	// stw r11,2020(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2020, ctx.r11.u32);
	// stw r30,1608(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1608, ctx.r30.u32);
	// stw r30,1612(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1612, ctx.r30.u32);
	// stw r30,1616(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1616, ctx.r30.u32);
	// lwz r11,52(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 52);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// stw r10,608(r31)
	PPC_STORE_U32(ctx.r31.u32 + 608, ctx.r10.u32);
	// lwz r11,516(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 516);
	// lwz r10,340(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 340);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// stw r10,536(r31)
	PPC_STORE_U32(ctx.r31.u32 + 536, ctx.r10.u32);
	// beq cr6,0x82363b38
	if (ctx.cr6.eq) goto loc_82363B38;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82363b90
	if (ctx.cr6.eq) goto loc_82363B90;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82363b44
	if (!ctx.cr6.eq) goto loc_82363B44;
loc_82363B38:
	// lwz r11,608(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 608);
	// lfs f0,416(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 416);
	ctx.f0.f64 = double(temp.f32);
loc_82363B40:
	// stfs f0,1628(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1628, temp.u32);
loc_82363B44:
	// addi r4,r25,764
	ctx.r4.s64 = ctx.r25.s64 + 764;
	// addi r3,r31,2028
	ctx.r3.s64 = ctx.r31.s64 + 2028;
	// li r5,440
	ctx.r5.s64 = 440;
	// bl 0x82fa77c0
	ctx.lr = 0x82363B54;
	sub_82FA77C0(ctx, base);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82369ad0
	ctx.lr = 0x82363B60;
	sub_82369AD0(ctx, base);
	// bl 0x8226c3f0
	ctx.lr = 0x82363B64;
	sub_8226C3F0(ctx, base);
	// lwz r11,116(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82363bac
	if (ctx.cr6.eq) goto loc_82363BAC;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82363ba4
	if (ctx.cr6.eq) goto loc_82363BA4;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x82363b9c
	if (ctx.cr6.eq) goto loc_82363B9C;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x82363bac
	if (!ctx.cr6.eq) goto loc_82363BAC;
	// lwz r11,76(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 76);
	// b 0x82363bb0
	goto loc_82363BB0;
loc_82363B90:
	// lwz r11,608(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 608);
	// lfs f0,576(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 576);
	ctx.f0.f64 = double(temp.f32);
	// b 0x82363b40
	goto loc_82363B40;
loc_82363B9C:
	// lwz r11,72(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 72);
	// b 0x82363bb0
	goto loc_82363BB0;
loc_82363BA4:
	// lwz r11,68(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 68);
	// b 0x82363bb0
	goto loc_82363BB0;
loc_82363BAC:
	// lwz r11,64(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 64);
loc_82363BB0:
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82363bfc
	if (ctx.cr6.eq) goto loc_82363BFC;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82546708
	ctx.lr = 0x82363BCC;
	sub_82546708(ctx, base);
	// addi r29,r31,1644
	ctx.r29.s64 = ctx.r31.s64 + 1644;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// li r5,372
	ctx.r5.s64 = 372;
	// bl 0x82fa77c0
	ctx.lr = 0x82363BE4;
	sub_82FA77C0(ctx, base);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,144(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	// bl 0x822cbbf8
	ctx.lr = 0x82363BF4;
	sub_822CBBF8(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x825469e0
	ctx.lr = 0x82363BFC;
	sub_825469E0(ctx, base);
loc_82363BFC:
	// lis r11,-31968
	ctx.r11.s64 = -2095054848;
	// lvlx v0,0,r28
	temp.u32 = ctx.r28.u32;
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// li r10,4
	ctx.r10.s64 = 4;
	// vor v13,v0,v0
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_load_si128((__m128i*)ctx.v0.u8));
	// addi r23,r11,15768
	ctx.r23.s64 = ctx.r11.s64 + 15768;
	// li r11,416
	ctx.r11.s64 = 416;
	// li r3,40
	ctx.r3.s64 = 40;
	// lvlx v12,0,r23
	temp.u32 = ctx.r23.u32;
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx v11,r23,r10
	temp.u32 = ctx.r23.u32 + ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vrlimi128 v13,v12,4,3
	_mm_store_ps(ctx.v13.f32, _mm_blend_ps(_mm_load_ps(ctx.v13.f32), _mm_permute_ps(_mm_load_ps(ctx.v12.f32), 57), 4));
	// vrlimi128 v11,v0,4,3
	_mm_store_ps(ctx.v11.f32, _mm_blend_ps(_mm_load_ps(ctx.v11.f32), _mm_permute_ps(_mm_load_ps(ctx.v0.f32), 57), 4));
	// vrlimi128 v13,v11,3,2
	_mm_store_ps(ctx.v13.f32, _mm_blend_ps(_mm_load_ps(ctx.v13.f32), _mm_permute_ps(_mm_load_ps(ctx.v11.f32), 78), 3));
	// stvx128 v13,r31,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32 + ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// stw r11,384(r31)
	PPC_STORE_U32(ctx.r31.u32 + 384, ctx.r11.u32);
	// lwz r11,4(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// stw r11,440(r31)
	PPC_STORE_U32(ctx.r31.u32 + 440, ctx.r11.u32);
	// lwz r11,744(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 744);
	// stw r11,444(r31)
	PPC_STORE_U32(ctx.r31.u32 + 444, ctx.r11.u32);
	// lwz r11,84(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 84);
	// stw r11,2508(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2508, ctx.r11.u32);
	// lwz r11,88(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 88);
	// stw r11,2512(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2512, ctx.r11.u32);
	// lwz r11,92(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 92);
	// stw r11,2516(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2516, ctx.r11.u32);
	// lwz r11,80(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 80);
	// stw r11,2520(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2520, ctx.r11.u32);
	// lwz r11,140(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 140);
	// stw r11,2580(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2580, ctx.r11.u32);
	// bl 0x82691500
	ctx.lr = 0x82363C74;
	sub_82691500(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82363c88
	if (ctx.cr0.eq) goto loc_82363C88;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x824481c8
	ctx.lr = 0x82363C84;
	sub_824481C8(ctx, base);
	// b 0x82363c8c
	goto loc_82363C8C;
loc_82363C88:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_82363C8C:
	// stw r3,2024(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2024, ctx.r3.u32);
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// lwz r11,8(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 8);
	// addi r29,r31,592
	ctx.r29.s64 = ctx.r31.s64 + 592;
	// stw r11,592(r31)
	PPC_STORE_U32(ctx.r31.u32 + 592, ctx.r11.u32);
	// stw r30,656(r31)
	PPC_STORE_U32(ctx.r31.u32 + 656, ctx.r30.u32);
	// lwz r28,2020(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2020);
	// bl 0x82569e10
	ctx.lr = 0x82363CAC;
	sub_82569E10(ctx, base);
	// stw r28,388(r1)
	PPC_STORE_U32(ctx.r1.u32 + 388, ctx.r28.u32);
	// lwz r11,12(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 12);
	// addi r3,r1,331
	ctx.r3.s64 = ctx.r1.s64 + 331;
	// stw r11,468(r1)
	PPC_STORE_U32(ctx.r1.u32 + 468, ctx.r11.u32);
	// bl 0x8259bbf8
	ctx.lr = 0x82363CC0;
	sub_8259BBF8(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,256
	ctx.r4.s64 = ctx.r1.s64 + 256;
	// bl 0x8256a330
	ctx.lr = 0x82363CCC;
	sub_8256A330(ctx, base);
	// stw r3,656(r31)
	PPC_STORE_U32(ctx.r31.u32 + 656, ctx.r3.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,760(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 760);
	// stw r11,824(r31)
	PPC_STORE_U32(ctx.r31.u32 + 824, ctx.r11.u32);
	// lwz r11,16(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 16);
	// stw r11,660(r31)
	PPC_STORE_U32(ctx.r31.u32 + 660, ctx.r11.u32);
	// lwz r11,20(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 20);
	// stw r11,664(r31)
	PPC_STORE_U32(ctx.r31.u32 + 664, ctx.r11.u32);
	// lwz r11,24(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 24);
	// stw r11,668(r31)
	PPC_STORE_U32(ctx.r31.u32 + 668, ctx.r11.u32);
	// lwz r11,28(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 28);
	// stw r11,672(r31)
	PPC_STORE_U32(ctx.r31.u32 + 672, ctx.r11.u32);
	// lwz r11,32(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 32);
	// stw r11,676(r31)
	PPC_STORE_U32(ctx.r31.u32 + 676, ctx.r11.u32);
	// lwz r11,36(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 36);
	// stw r11,680(r31)
	PPC_STORE_U32(ctx.r31.u32 + 680, ctx.r11.u32);
	// lwz r11,40(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 40);
	// stw r11,684(r31)
	PPC_STORE_U32(ctx.r31.u32 + 684, ctx.r11.u32);
	// lwz r11,44(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 44);
	// stw r11,688(r31)
	PPC_STORE_U32(ctx.r31.u32 + 688, ctx.r11.u32);
	// lwz r11,48(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 48);
	// stw r11,692(r31)
	PPC_STORE_U32(ctx.r31.u32 + 692, ctx.r11.u32);
	// lwz r11,52(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 52);
	// stw r11,696(r31)
	PPC_STORE_U32(ctx.r31.u32 + 696, ctx.r11.u32);
	// lwz r11,56(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 56);
	// stw r11,700(r31)
	PPC_STORE_U32(ctx.r31.u32 + 700, ctx.r11.u32);
	// lwz r11,60(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 60);
	// stw r11,704(r31)
	PPC_STORE_U32(ctx.r31.u32 + 704, ctx.r11.u32);
	// lwz r11,64(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 64);
	// stw r11,708(r31)
	PPC_STORE_U32(ctx.r31.u32 + 708, ctx.r11.u32);
	// lwz r11,68(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 68);
	// stw r11,712(r31)
	PPC_STORE_U32(ctx.r31.u32 + 712, ctx.r11.u32);
	// lwz r11,72(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 72);
	// stw r11,716(r31)
	PPC_STORE_U32(ctx.r31.u32 + 716, ctx.r11.u32);
	// lwz r11,76(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 76);
	// stw r11,720(r31)
	PPC_STORE_U32(ctx.r31.u32 + 720, ctx.r11.u32);
	// lwz r11,144(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 144);
	// stw r11,724(r31)
	PPC_STORE_U32(ctx.r31.u32 + 724, ctx.r11.u32);
	// lwz r11,148(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 148);
	// stw r11,728(r31)
	PPC_STORE_U32(ctx.r31.u32 + 728, ctx.r11.u32);
	// bl 0x82546708
	ctx.lr = 0x82363D78;
	sub_82546708(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r3,596(r31)
	PPC_STORE_U32(ctx.r31.u32 + 596, ctx.r3.u32);
	// li r3,32
	ctx.r3.s64 = 32;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// stfs f31,32(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 32, temp.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// stfs f31,32(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 32, temp.u32);
	// sth r30,1544(r31)
	PPC_STORE_U16(ctx.r31.u32 + 1544, ctx.r30.u16);
	// stw r30,836(r31)
	PPC_STORE_U32(ctx.r31.u32 + 836, ctx.r30.u32);
	// lwz r11,80(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 80);
	// stw r11,448(r31)
	PPC_STORE_U32(ctx.r31.u32 + 448, ctx.r11.u32);
	// lwz r11,84(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 84);
	// stw r11,452(r31)
	PPC_STORE_U32(ctx.r31.u32 + 452, ctx.r11.u32);
	// lwz r11,88(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 88);
	// stw r11,456(r31)
	PPC_STORE_U32(ctx.r31.u32 + 456, ctx.r11.u32);
	// lwz r11,92(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 92);
	// stw r11,460(r31)
	PPC_STORE_U32(ctx.r31.u32 + 460, ctx.r11.u32);
	// lwz r11,96(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 96);
	// stw r11,464(r31)
	PPC_STORE_U32(ctx.r31.u32 + 464, ctx.r11.u32);
	// stw r30,468(r31)
	PPC_STORE_U32(ctx.r31.u32 + 468, ctx.r30.u32);
	// stw r30,472(r31)
	PPC_STORE_U32(ctx.r31.u32 + 472, ctx.r30.u32);
	// bl 0x82691500
	ctx.lr = 0x82363DFC;
	sub_82691500(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82363e38
	if (ctx.cr0.eq) goto loc_82363E38;
	// lwz r9,168(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 168);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r10,2020(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2020);
	// stfs f31,12(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// stw r30,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r30.u32);
	// stw r30,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r30.u32);
	// stw r30,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r30.u32);
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// stw r30,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r30.u32);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// lwz r10,116(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 116);
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// b 0x82363e3c
	goto loc_82363E3C;
loc_82363E38:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_82363E3C:
	// stw r11,1356(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1356, ctx.r11.u32);
	// li r3,532
	ctx.r3.s64 = 532;
	// bl 0x82691500
	ctx.lr = 0x82363E48;
	sub_82691500(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq 0x82363eac
	if (ctx.cr0.eq) goto loc_82363EAC;
	// lwz r11,48(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 48);
	// addi r4,r25,152
	ctx.r4.s64 = ctx.r25.s64 + 152;
	// lwz r10,516(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 516);
	// li r5,492
	ctx.r5.s64 = 492;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r26,2020(r31)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2020);
	// addic r9,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// addi r28,r11,2124
	ctx.r28.s64 = ctx.r11.s64 + 2124;
	// lwz r24,2248(r11)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2248);
	// subfe r27,r9,r10
	temp.u8 = (~ctx.r9.u32 + ctx.r10.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r27.u64 = ~ctx.r9.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// bl 0x82fa77c0
	ctx.lr = 0x82363E7C;
	sub_82FA77C0(ctx, base);
	// stfs f31,508(r29)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r29.u32 + 508, temp.u32);
	// stfs f31,512(r29)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r29.u32 + 512, temp.u32);
	// stw r24,492(r29)
	PPC_STORE_U32(ctx.r29.u32 + 492, ctx.r24.u32);
	// stfs f31,516(r29)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r29.u32 + 516, temp.u32);
	// stw r26,496(r29)
	PPC_STORE_U32(ctx.r29.u32 + 496, ctx.r26.u32);
	// stfs f31,520(r29)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r29.u32 + 520, temp.u32);
	// stw r28,500(r29)
	PPC_STORE_U32(ctx.r29.u32 + 500, ctx.r28.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r27,504(r29)
	PPC_STORE_U32(ctx.r29.u32 + 504, ctx.r27.u32);
	// stw r30,524(r29)
	PPC_STORE_U32(ctx.r29.u32 + 524, ctx.r30.u32);
	// stw r30,528(r29)
	PPC_STORE_U32(ctx.r29.u32 + 528, ctx.r30.u32);
	// b 0x82363eb0
	goto loc_82363EB0;
loc_82363EAC:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_82363EB0:
	// stw r3,1640(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1640, ctx.r3.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82447cf8
	ctx.lr = 0x82363EBC;
	sub_82447CF8(ctx, base);
	// li r3,60
	ctx.r3.s64 = 60;
	// bl 0x82691500
	ctx.lr = 0x82363EC4;
	sub_82691500(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq 0x82363ee0
	if (ctx.cr0.eq) goto loc_82363EE0;
	// li r5,48
	ctx.r5.s64 = 48;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82a75988
	ctx.lr = 0x82363EDC;
	sub_82A75988(ctx, base);
	// b 0x82363ee4
	goto loc_82363EE4;
loc_82363EE0:
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
loc_82363EE4:
	// stw r29,2016(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2016, ctx.r29.u32);
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// addi r10,r10,-22432
	ctx.r10.s64 = ctx.r10.s64 + -22432;
	// stw r30,268(r10)
	PPC_STORE_U32(ctx.r10.u32 + 268, ctx.r30.u32);
	// lwz r11,516(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 516);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x82364278
	if (ctx.cr6.lt) goto loc_82364278;
	// beq cr6,0x8236415c
	if (ctx.cr6.eq) goto loc_8236415C;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// blt cr6,0x82364040
	if (ctx.cr6.lt) goto loc_82364040;
	// bne cr6,0x823648a4
	if (!ctx.cr6.eq) goto loc_823648A4;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,152
	ctx.r3.s64 = ctx.r1.s64 + 152;
	// bl 0x8236c1f8
	ctx.lr = 0x82363F20;
	sub_8236C1F8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r29,4(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r30,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r30.u32);
	// stw r30,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r30.u32);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// bl 0x8234b0c0
	ctx.lr = 0x82363F48;
	sub_8234B0C0(ctx, base);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82363f58
	if (ctx.cr6.eq) goto loc_82363F58;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82241d18
	ctx.lr = 0x82363F58;
	sub_82241D18(ctx, base);
loc_82363F58:
	// lwz r3,156(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82363f68
	if (ctx.cr6.eq) goto loc_82363F68;
	// bl 0x82241d18
	ctx.lr = 0x82363F68;
	sub_82241D18(ctx, base);
loc_82363F68:
	// li r3,116
	ctx.r3.s64 = 116;
	// bl 0x82691500
	ctx.lr = 0x82363F70;
	sub_82691500(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82363fc0
	if (ctx.cr0.eq) goto loc_82363FC0;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// stw r18,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r18.u32);
	// addic. r11,r3,12
	ctx.xer.ca = ctx.r3.u32 > 4294967283;
	ctx.r11.s64 = ctx.r3.s64 + 12;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r18,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r18.u32);
	// addi r10,r10,-16484
	ctx.r10.s64 = ctx.r10.s64 + -16484;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// beq 0x82363fb8
	if (ctx.cr0.eq) goto loc_82363FB8;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// stw r31,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r31.u32);
	// li r9,18
	ctx.r9.s64 = 18;
	// stw r30,84(r11)
	PPC_STORE_U32(ctx.r11.u32 + 84, ctx.r30.u32);
	// addi r10,r10,-18728
	ctx.r10.s64 = ctx.r10.s64 + -18728;
	// stw r30,96(r11)
	PPC_STORE_U32(ctx.r11.u32 + 96, ctx.r30.u32);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// stw r30,100(r11)
	PPC_STORE_U32(ctx.r11.u32 + 100, ctx.r30.u32);
loc_82363FB8:
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// b 0x82363fc4
	goto loc_82363FC4;
loc_82363FC0:
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
loc_82363FC4:
	// addi r11,r29,12
	ctx.r11.s64 = ctx.r29.s64 + 12;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8234b0c0
	ctx.lr = 0x82363FDC;
	sub_8234B0C0(ctx, base);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82363fec
	if (ctx.cr6.eq) goto loc_82363FEC;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82241d18
	ctx.lr = 0x82363FEC;
	sub_82241D18(ctx, base);
loc_82363FEC:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x8236c5c0
	ctx.lr = 0x82363FF8;
	sub_8236C5C0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r29,4(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r30,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r30.u32);
	// stw r30,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r30.u32);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// bl 0x8234b0c0
	ctx.lr = 0x82364020;
	sub_8234B0C0(ctx, base);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82364030
	if (ctx.cr6.eq) goto loc_82364030;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82241d18
	ctx.lr = 0x82364030;
	sub_82241D18(ctx, base);
loc_82364030:
	// lwz r3,124(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
loc_82364034:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823648a4
	if (ctx.cr6.eq) goto loc_823648A4;
	// b 0x823648a0
	goto loc_823648A0;
loc_82364040:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,200
	ctx.r3.s64 = ctx.r1.s64 + 200;
	// bl 0x8236c1f8
	ctx.lr = 0x8236404C;
	sub_8236C1F8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r29,4(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r30,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r30.u32);
	// stw r30,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r30.u32);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// bl 0x8234b0c0
	ctx.lr = 0x82364074;
	sub_8234B0C0(ctx, base);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82364084
	if (ctx.cr6.eq) goto loc_82364084;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82241d18
	ctx.lr = 0x82364084;
	sub_82241D18(ctx, base);
loc_82364084:
	// lwz r3,204(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 204);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82364094
	if (ctx.cr6.eq) goto loc_82364094;
	// bl 0x82241d18
	ctx.lr = 0x82364094;
	sub_82241D18(ctx, base);
loc_82364094:
	// li r3,100
	ctx.r3.s64 = 100;
	// bl 0x82691500
	ctx.lr = 0x8236409C;
	sub_82691500(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x823640e4
	if (ctx.cr0.eq) goto loc_823640E4;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// stw r18,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r18.u32);
	// addic. r11,r3,12
	ctx.xer.ca = ctx.r3.u32 > 4294967283;
	ctx.r11.s64 = ctx.r3.s64 + 12;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r18,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r18.u32);
	// addi r10,r10,-16484
	ctx.r10.s64 = ctx.r10.s64 + -16484;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// beq 0x823640dc
	if (ctx.cr0.eq) goto loc_823640DC;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// stw r31,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r31.u32);
	// li r9,17
	ctx.r9.s64 = 17;
	// stw r30,84(r11)
	PPC_STORE_U32(ctx.r11.u32 + 84, ctx.r30.u32);
	// addi r10,r10,-19640
	ctx.r10.s64 = ctx.r10.s64 + -19640;
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_823640DC:
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// b 0x823640e8
	goto loc_823640E8;
loc_823640E4:
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
loc_823640E8:
	// addi r11,r29,12
	ctx.r11.s64 = ctx.r29.s64 + 12;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8234b0c0
	ctx.lr = 0x82364100;
	sub_8234B0C0(ctx, base);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82364110
	if (ctx.cr6.eq) goto loc_82364110;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82241d18
	ctx.lr = 0x82364110;
	sub_82241D18(ctx, base);
loc_82364110:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// bl 0x8236c5c0
	ctx.lr = 0x8236411C;
	sub_8236C5C0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r29,4(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r30,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r30.u32);
	// stw r30,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r30.u32);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// bl 0x8234b0c0
	ctx.lr = 0x82364144;
	sub_8234B0C0(ctx, base);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82364154
	if (ctx.cr6.eq) goto loc_82364154;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82241d18
	ctx.lr = 0x82364154;
	sub_82241D18(ctx, base);
loc_82364154:
	// lwz r3,140(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// b 0x82364034
	goto loc_82364034;
loc_8236415C:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,184
	ctx.r3.s64 = ctx.r1.s64 + 184;
	// bl 0x8236c1f8
	ctx.lr = 0x82364168;
	sub_8236C1F8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r29,4(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r30,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r30.u32);
	// stw r30,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r30.u32);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// bl 0x8234b0c0
	ctx.lr = 0x82364190;
	sub_8234B0C0(ctx, base);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x823641a0
	if (ctx.cr6.eq) goto loc_823641A0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82241d18
	ctx.lr = 0x823641A0;
	sub_82241D18(ctx, base);
loc_823641A0:
	// lwz r3,188(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 188);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823641b0
	if (ctx.cr6.eq) goto loc_823641B0;
	// bl 0x82241d18
	ctx.lr = 0x823641B0;
	sub_82241D18(ctx, base);
loc_823641B0:
	// li r3,104
	ctx.r3.s64 = 104;
	// bl 0x82691500
	ctx.lr = 0x823641B8;
	sub_82691500(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82364200
	if (ctx.cr0.eq) goto loc_82364200;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// stw r18,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r18.u32);
	// addic. r11,r3,12
	ctx.xer.ca = ctx.r3.u32 > 4294967283;
	ctx.r11.s64 = ctx.r3.s64 + 12;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r18,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r18.u32);
	// addi r10,r10,-16484
	ctx.r10.s64 = ctx.r10.s64 + -16484;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// beq 0x823641f8
	if (ctx.cr0.eq) goto loc_823641F8;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// stw r31,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r31.u32);
	// li r9,16
	ctx.r9.s64 = 16;
	// stw r30,84(r11)
	PPC_STORE_U32(ctx.r11.u32 + 84, ctx.r30.u32);
	// addi r10,r10,-19432
	ctx.r10.s64 = ctx.r10.s64 + -19432;
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_823641F8:
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// b 0x82364204
	goto loc_82364204;
loc_82364200:
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
loc_82364204:
	// addi r11,r29,12
	ctx.r11.s64 = ctx.r29.s64 + 12;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8234b0c0
	ctx.lr = 0x8236421C;
	sub_8234B0C0(ctx, base);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8236422c
	if (ctx.cr6.eq) goto loc_8236422C;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82241d18
	ctx.lr = 0x8236422C;
	sub_82241D18(ctx, base);
loc_8236422C:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x8236c5c0
	ctx.lr = 0x82364238;
	sub_8236C5C0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r29,4(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r30,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r30.u32);
	// stw r30,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r30.u32);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// bl 0x8234b0c0
	ctx.lr = 0x82364260;
	sub_8234B0C0(ctx, base);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82364270
	if (ctx.cr6.eq) goto loc_82364270;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82241d18
	ctx.lr = 0x82364270;
	sub_82241D18(ctx, base);
loc_82364270:
	// lwz r3,108(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// b 0x82364034
	goto loc_82364034;
loc_82364278:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x8236c1f8
	ctx.lr = 0x82364284;
	sub_8236C1F8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r29,4(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r30,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r30.u32);
	// stw r30,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r30.u32);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// bl 0x8234b0c0
	ctx.lr = 0x823642AC;
	sub_8234B0C0(ctx, base);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x823642bc
	if (ctx.cr6.eq) goto loc_823642BC;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82241d18
	ctx.lr = 0x823642BC;
	sub_82241D18(ctx, base);
loc_823642BC:
	// lwz r3,212(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823642cc
	if (ctx.cr6.eq) goto loc_823642CC;
	// bl 0x82241d18
	ctx.lr = 0x823642CC;
	sub_82241D18(ctx, base);
loc_823642CC:
	// li r3,36
	ctx.r3.s64 = 36;
	// lwz r29,168(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 168);
	// bl 0x82691500
	ctx.lr = 0x823642D8;
	sub_82691500(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82364324
	if (ctx.cr0.eq) goto loc_82364324;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// stw r18,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r18.u32);
	// addic. r11,r3,12
	ctx.xer.ca = ctx.r3.u32 > 4294967283;
	ctx.r11.s64 = ctx.r3.s64 + 12;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r18,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r18.u32);
	// addi r10,r10,-16484
	ctx.r10.s64 = ctx.r10.s64 + -16484;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// beq 0x8236431c
	if (ctx.cr0.eq) goto loc_8236431C;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// stfs f31,20(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// stw r31,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r31.u32);
	// addi r10,r10,-18092
	ctx.r10.s64 = ctx.r10.s64 + -18092;
	// stw r29,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r29.u32);
	// stw r20,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r20.u32);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// stw r30,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r30.u32);
loc_8236431C:
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// b 0x82364328
	goto loc_82364328;
loc_82364324:
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
loc_82364328:
	// addi r11,r29,12
	ctx.r11.s64 = ctx.r29.s64 + 12;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8234b0c0
	ctx.lr = 0x82364340;
	sub_8234B0C0(ctx, base);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82364350
	if (ctx.cr6.eq) goto loc_82364350;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82241d18
	ctx.lr = 0x82364350;
	sub_82241D18(ctx, base);
loc_82364350:
	// li r3,48
	ctx.r3.s64 = 48;
	// lwz r29,168(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 168);
	// bl 0x82691500
	ctx.lr = 0x8236435C;
	sub_82691500(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x823643b4
	if (ctx.cr0.eq) goto loc_823643B4;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// stw r18,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r18.u32);
	// addic. r11,r3,12
	ctx.xer.ca = ctx.r3.u32 > 4294967283;
	ctx.r11.s64 = ctx.r3.s64 + 12;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r18,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r18.u32);
	// addi r10,r10,-16484
	ctx.r10.s64 = ctx.r10.s64 + -16484;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// beq 0x823643ac
	if (ctx.cr0.eq) goto loc_823643AC;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// stw r31,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r31.u32);
	// li r9,3
	ctx.r9.s64 = 3;
	// addi r10,r10,-18404
	ctx.r10.s64 = ctx.r10.s64 + -18404;
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// stw r30,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r30.u32);
	// stw r30,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r30.u32);
	// stfs f31,24(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 24, temp.u32);
	// stw r30,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r30.u32);
	// stw r29,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r29.u32);
loc_823643AC:
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// b 0x823643b8
	goto loc_823643B8;
loc_823643B4:
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
loc_823643B8:
	// addi r11,r29,12
	ctx.r11.s64 = ctx.r29.s64 + 12;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8234b0c0
	ctx.lr = 0x823643D0;
	sub_8234B0C0(ctx, base);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x823643e0
	if (ctx.cr6.eq) goto loc_823643E0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82241d18
	ctx.lr = 0x823643E0;
	sub_82241D18(ctx, base);
loc_823643E0:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,168
	ctx.r3.s64 = ctx.r1.s64 + 168;
	// bl 0x8236c288
	ctx.lr = 0x823643EC;
	sub_8236C288(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r29,4(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r30,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r30.u32);
	// stw r30,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r30.u32);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// bl 0x8234b0c0
	ctx.lr = 0x82364414;
	sub_8234B0C0(ctx, base);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82364424
	if (ctx.cr6.eq) goto loc_82364424;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82241d18
	ctx.lr = 0x82364424;
	sub_82241D18(ctx, base);
loc_82364424:
	// lwz r3,172(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82364434
	if (ctx.cr6.eq) goto loc_82364434;
	// bl 0x82241d18
	ctx.lr = 0x82364434;
	sub_82241D18(ctx, base);
loc_82364434:
	// li r3,36
	ctx.r3.s64 = 36;
	// bl 0x82691500
	ctx.lr = 0x8236443C;
	sub_82691500(ctx, base);
	// li r24,5
	ctx.r24.s64 = 5;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82364490
	if (ctx.cr0.eq) goto loc_82364490;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// stw r18,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r18.u32);
	// addic. r11,r3,12
	ctx.xer.ca = ctx.r3.u32 > 4294967283;
	ctx.r11.s64 = ctx.r3.s64 + 12;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r18,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r18.u32);
	// addi r10,r10,-16484
	ctx.r10.s64 = ctx.r10.s64 + -16484;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// beq 0x82364488
	if (ctx.cr0.eq) goto loc_82364488;
	// stfs f31,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// stw r31,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r31.u32);
	// stw r24,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r24.u32);
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// stw r30,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r30.u32);
	// addi r10,r10,-18136
	ctx.r10.s64 = ctx.r10.s64 + -18136;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r10,680(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 680);
	// stw r10,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
loc_82364488:
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// b 0x82364494
	goto loc_82364494;
loc_82364490:
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
loc_82364494:
	// addi r11,r29,12
	ctx.r11.s64 = ctx.r29.s64 + 12;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8234b0c0
	ctx.lr = 0x823644AC;
	sub_8234B0C0(ctx, base);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x823644bc
	if (ctx.cr6.eq) goto loc_823644BC;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82241d18
	ctx.lr = 0x823644BC;
	sub_82241D18(ctx, base);
loc_823644BC:
	// li r3,36
	ctx.r3.s64 = 36;
	// bl 0x82691500
	ctx.lr = 0x823644C4;
	sub_82691500(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82364514
	if (ctx.cr0.eq) goto loc_82364514;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// stw r18,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r18.u32);
	// addic. r11,r3,12
	ctx.xer.ca = ctx.r3.u32 > 4294967283;
	ctx.r11.s64 = ctx.r3.s64 + 12;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r18,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r18.u32);
	// addi r10,r10,-16484
	ctx.r10.s64 = ctx.r10.s64 + -16484;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// beq 0x8236450c
	if (ctx.cr0.eq) goto loc_8236450C;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// stfs f31,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// li r9,6
	ctx.r9.s64 = 6;
	// stfs f31,20(r11)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// addi r10,r10,-18360
	ctx.r10.s64 = ctx.r10.s64 + -18360;
	// stw r31,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r31.u32);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// stw r30,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r30.u32);
loc_8236450C:
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// b 0x82364518
	goto loc_82364518;
loc_82364514:
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
loc_82364518:
	// addi r11,r29,12
	ctx.r11.s64 = ctx.r29.s64 + 12;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8234b0c0
	ctx.lr = 0x82364530;
	sub_8234B0C0(ctx, base);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82364540
	if (ctx.cr6.eq) goto loc_82364540;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82241d18
	ctx.lr = 0x82364540;
	sub_82241D18(ctx, base);
loc_82364540:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8236c350
	ctx.lr = 0x8236454C;
	sub_8236C350(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r29,4(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r30,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r30.u32);
	// stw r30,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r30.u32);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// bl 0x8234b0c0
	ctx.lr = 0x82364574;
	sub_8234B0C0(ctx, base);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82364584
	if (ctx.cr6.eq) goto loc_82364584;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82241d18
	ctx.lr = 0x82364584;
	sub_82241D18(ctx, base);
loc_82364584:
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82364594
	if (ctx.cr6.eq) goto loc_82364594;
	// bl 0x82241d18
	ctx.lr = 0x82364594;
	sub_82241D18(ctx, base);
loc_82364594:
	// li r3,24
	ctx.r3.s64 = 24;
	// bl 0x82691500
	ctx.lr = 0x8236459C;
	sub_82691500(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x823645e0
	if (ctx.cr0.eq) goto loc_823645E0;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// stw r18,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r18.u32);
	// addic. r11,r3,12
	ctx.xer.ca = ctx.r3.u32 > 4294967283;
	ctx.r11.s64 = ctx.r3.s64 + 12;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r18,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r18.u32);
	// addi r10,r10,-16484
	ctx.r10.s64 = ctx.r10.s64 + -16484;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// beq 0x823645d8
	if (ctx.cr0.eq) goto loc_823645D8;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// stw r31,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r31.u32);
	// li r9,12
	ctx.r9.s64 = 12;
	// addi r10,r10,-18268
	ctx.r10.s64 = ctx.r10.s64 + -18268;
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_823645D8:
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// b 0x823645e4
	goto loc_823645E4;
loc_823645E0:
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
loc_823645E4:
	// addi r11,r29,12
	ctx.r11.s64 = ctx.r29.s64 + 12;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8234b0c0
	ctx.lr = 0x823645FC;
	sub_8234B0C0(ctx, base);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8236460c
	if (ctx.cr6.eq) goto loc_8236460C;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82241d18
	ctx.lr = 0x8236460C;
	sub_82241D18(ctx, base);
loc_8236460C:
	// li r3,32
	ctx.r3.s64 = 32;
	// bl 0x82691500
	ctx.lr = 0x82364614;
	sub_82691500(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82364660
	if (ctx.cr0.eq) goto loc_82364660;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// stw r18,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r18.u32);
	// addic. r11,r3,12
	ctx.xer.ca = ctx.r3.u32 > 4294967283;
	ctx.r11.s64 = ctx.r3.s64 + 12;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r18,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r18.u32);
	// addi r10,r10,-16484
	ctx.r10.s64 = ctx.r10.s64 + -16484;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// beq 0x82364658
	if (ctx.cr0.eq) goto loc_82364658;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// stfs f31,12(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// li r9,14
	ctx.r9.s64 = 14;
	// stw r31,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r31.u32);
	// addi r10,r10,-18776
	ctx.r10.s64 = ctx.r10.s64 + -18776;
	// stw r30,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r30.u32);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_82364658:
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// b 0x82364664
	goto loc_82364664;
loc_82364660:
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
loc_82364664:
	// addi r11,r29,12
	ctx.r11.s64 = ctx.r29.s64 + 12;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8234b0c0
	ctx.lr = 0x8236467C;
	sub_8234B0C0(ctx, base);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8236468c
	if (ctx.cr6.eq) goto loc_8236468C;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82241d18
	ctx.lr = 0x8236468C;
	sub_82241D18(ctx, base);
loc_8236468C:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8236c408
	ctx.lr = 0x82364698;
	sub_8236C408(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r29,4(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r30,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r30.u32);
	// stw r30,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r30.u32);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// bl 0x8234b0c0
	ctx.lr = 0x823646C0;
	sub_8234B0C0(ctx, base);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x823646d0
	if (ctx.cr6.eq) goto loc_823646D0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82241d18
	ctx.lr = 0x823646D0;
	sub_82241D18(ctx, base);
loc_823646D0:
	// lwz r3,132(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823646e0
	if (ctx.cr6.eq) goto loc_823646E0;
	// bl 0x82241d18
	ctx.lr = 0x823646E0;
	sub_82241D18(ctx, base);
loc_823646E0:
	// li r11,7
	ctx.r11.s64 = 7;
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r30.u32);
	// addi r9,r23,144
	ctx.r9.s64 = ctx.r23.s64 + 144;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// addi r8,r23,140
	ctx.r8.s64 = ctx.r23.s64 + 140;
	// addi r7,r25,704
	ctx.r7.s64 = ctx.r25.s64 + 704;
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x8236c4e8
	ctx.lr = 0x8236470C;
	sub_8236C4E8(ctx, base);
	// lwz r26,4(r3)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r30,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r30.u32);
	// stw r30,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r30.u32);
	// lwz r3,148(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r26,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r26.u32);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// beq cr6,0x82364734
	if (ctx.cr6.eq) goto loc_82364734;
	// bl 0x82241d18
	ctx.lr = 0x82364734;
	sub_82241D18(ctx, base);
loc_82364734:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8234b0c0
	ctx.lr = 0x82364740;
	sub_8234B0C0(ctx, base);
	// stw r18,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r18.u32);
	// stw r22,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r22.u32);
	// addi r9,r23,144
	ctx.r9.s64 = ctx.r23.s64 + 144;
	// addi r8,r23,132
	ctx.r8.s64 = ctx.r23.s64 + 132;
	// addi r7,r25,708
	ctx.r7.s64 = ctx.r25.s64 + 708;
	// addi r6,r1,92
	ctx.r6.s64 = ctx.r1.s64 + 92;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x8236c4e8
	ctx.lr = 0x82364768;
	sub_8236C4E8(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r27,4(r3)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r30,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r30.u32);
	// stw r30,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r30.u32);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// lwz r3,164(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82364790
	if (ctx.cr6.eq) goto loc_82364790;
	// bl 0x82241d18
	ctx.lr = 0x82364790;
	sub_82241D18(ctx, base);
loc_82364790:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8234b0c0
	ctx.lr = 0x8236479C;
	sub_8234B0C0(ctx, base);
	// li r11,9
	ctx.r11.s64 = 9;
	// stw r20,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r20.u32);
	// addi r9,r23,144
	ctx.r9.s64 = ctx.r23.s64 + 144;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// addi r8,r23,136
	ctx.r8.s64 = ctx.r23.s64 + 136;
	// addi r7,r25,700
	ctx.r7.s64 = ctx.r25.s64 + 700;
	// addi r6,r1,92
	ctx.r6.s64 = ctx.r1.s64 + 92;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x8236c4e8
	ctx.lr = 0x823647C8;
	sub_8236C4E8(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r30,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r30.u32);
	// lwz r28,4(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r30,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r30.u32);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// lwz r3,180(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823647f0
	if (ctx.cr6.eq) goto loc_823647F0;
	// bl 0x82241d18
	ctx.lr = 0x823647F0;
	sub_82241D18(ctx, base);
loc_823647F0:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8234b0c0
	ctx.lr = 0x823647FC;
	sub_8234B0C0(ctx, base);
	// li r11,10
	ctx.r11.s64 = 10;
	// stfs f31,92(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r30.u32);
	// stw r24,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r24.u32);
	// addi r8,r1,92
	ctx.r8.s64 = ctx.r1.s64 + 92;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r7,r1,88
	ctx.r7.s64 = ctx.r1.s64 + 88;
	// addi r9,r23,144
	ctx.r9.s64 = ctx.r23.s64 + 144;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x8236c4e8
	ctx.lr = 0x82364830;
	sub_8236C4E8(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r29,4(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r30,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r30.u32);
	// stw r30,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r30.u32);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// lwz r3,196(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82364858
	if (ctx.cr6.eq) goto loc_82364858;
	// bl 0x82241d18
	ctx.lr = 0x82364858;
	sub_82241D18(ctx, base);
loc_82364858:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8234b0c0
	ctx.lr = 0x82364864;
	sub_8234B0C0(ctx, base);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82364874
	if (ctx.cr6.eq) goto loc_82364874;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82241d18
	ctx.lr = 0x82364874;
	sub_82241D18(ctx, base);
loc_82364874:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82364884
	if (ctx.cr6.eq) goto loc_82364884;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82241d18
	ctx.lr = 0x82364884;
	sub_82241D18(ctx, base);
loc_82364884:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x82364894
	if (ctx.cr6.eq) goto loc_82364894;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82241d18
	ctx.lr = 0x82364894;
	sub_82241D18(ctx, base);
loc_82364894:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x823648a4
	if (ctx.cr6.eq) goto loc_823648A4;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
loc_823648A0:
	// bl 0x82241d18
	ctx.lr = 0x823648A4;
	sub_82241D18(ctx, base);
loc_823648A4:
	// li r3,60
	ctx.r3.s64 = 60;
	// bl 0x82691500
	ctx.lr = 0x823648AC;
	sub_82691500(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x823648ec
	if (ctx.cr0.eq) goto loc_823648EC;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// stw r18,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r18.u32);
	// addic. r11,r3,12
	ctx.xer.ca = ctx.r3.u32 > 4294967283;
	ctx.r11.s64 = ctx.r3.s64 + 12;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r18,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r18.u32);
	// addi r10,r10,-16484
	ctx.r10.s64 = ctx.r10.s64 + -16484;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// beq 0x823648e4
	if (ctx.cr0.eq) goto loc_823648E4;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// stw r31,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r31.u32);
	// stw r30,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r30.u32);
	// addi r10,r10,29064
	ctx.r10.s64 = ctx.r10.s64 + 29064;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_823648E4:
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x823648f0
	goto loc_823648F0;
loc_823648EC:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_823648F0:
	// lwz r3,1540(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1540);
	// addi r10,r11,12
	ctx.r10.s64 = ctx.r11.s64 + 12;
	// stw r11,1540(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1540, ctx.r11.u32);
	// stw r10,1536(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1536, ctx.r10.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8236490c
	if (ctx.cr6.eq) goto loc_8236490C;
	// bl 0x82241d18
	ctx.lr = 0x8236490C;
	sub_82241D18(ctx, base);
loc_8236490C:
	// li r11,1408
	ctx.r11.s64 = 1408;
	// stw r30,1508(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1508, ctx.r30.u32);
	// li r10,1424
	ctx.r10.s64 = 1424;
	// vor128 v0,v77,v77
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_load_si128((__m128i*)ctx.v77.u8));
	// stfs f31,1512(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1512, temp.u32);
	// vor128 v13,v77,v77
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_load_si128((__m128i*)ctx.v77.u8));
	// li r9,24
	ctx.r9.s64 = 24;
	// stw r30,1516(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1516, ctx.r30.u32);
	// li r8,1440
	ctx.r8.s64 = 1440;
	// vor128 v12,v77,v77
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_load_si128((__m128i*)ctx.v77.u8));
	// li r7,1456
	ctx.r7.s64 = 1456;
	// stw r30,1520(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1520, ctx.r30.u32);
	// stw r9,1392(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1392, ctx.r9.u32);
	// stvx128 v0,r31,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32 + ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v13,r31,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32 + ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,4
	ctx.r11.s64 = 4;
	// lfs f0,0(r14)
	temp.u32 = PPC_LOAD_U32(ctx.r14.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stvx128 v12,r31,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32 + ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v77,r31,r7
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32 + ctx.r7.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v77.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stw r30,1472(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1472, ctx.r30.u32);
	// stfs f31,1476(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1476, temp.u32);
	// stw r15,1480(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1480, ctx.r15.u32);
	// stw r15,1484(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1484, ctx.r15.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// stw r30,1488(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1488, ctx.r30.u32);
	// lwz r11,1536(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1536);
	// addi r10,r11,28
	ctx.r10.s64 = ctx.r11.s64 + 28;
	// stw r30,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r30.u32);
loc_8236497C:
	// stfs f0,-12(r10)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + -12, temp.u32);
	// stfsu f0,4(r10)
	temp.f32 = float(ctx.f0.f64);
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, temp.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x8236497c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8236497C;
	// lwz r11,48(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 48);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,2116(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2116);
	// stw r11,2488(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2488, ctx.r11.u32);
	// lwz r11,48(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 48);
	// addi r11,r11,2124
	ctx.r11.s64 = ctx.r11.s64 + 2124;
	// stw r11,2492(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2492, ctx.r11.u32);
	// lwz r11,48(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 48);
	// lwz r11,2364(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2364);
	// stw r11,2496(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2496, ctx.r11.u32);
	// lwz r11,48(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 48);
	// addi r11,r11,3148
	ctx.r11.s64 = ctx.r11.s64 + 3148;
	// stw r11,2500(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2500, ctx.r11.u32);
	// lwz r11,48(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 48);
	// addi r11,r11,2076
	ctx.r11.s64 = ctx.r11.s64 + 2076;
	// stw r11,2504(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2504, ctx.r11.u32);
	// bl 0x82368170
	ctx.lr = 0x823649CC;
	sub_82368170(ctx, base);
	// lwz r11,21292(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 21292);
	// mullw r11,r11,r16
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r16.s32);
	// add. r11,r11,r17
	ctx.r11.u64 = ctx.r11.u64 + ctx.r17.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,21292(r19)
	PPC_STORE_U32(ctx.r19.u32 + 21292, ctx.r11.u32);
	// bne 0x823649e4
	if (!ctx.cr0.eq) goto loc_823649E4;
	// mr r11,r18
	ctx.r11.u64 = ctx.r18.u64;
loc_823649E4:
	// lis r9,-31969
	ctx.r9.s64 = -2095120384;
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// addi r8,r1,224
	ctx.r8.s64 = ctx.r1.s64 + 224;
	// addi r10,r10,17344
	ctx.r10.s64 = ctx.r10.s64 + 17344;
	// stw r8,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r8.u32);
	// stw r10,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r10.u32);
	// stw r11,29648(r9)
	PPC_STORE_U32(ctx.r9.u32 + 29648, ctx.r11.u32);
	// bl 0x8226d8e8
	ctx.lr = 0x82364A04;
	sub_8226D8E8(ctx, base);
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// bl 0x8226eed0
	ctx.lr = 0x82364A0C;
	sub_8226EED0(ctx, base);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x825469e0
	ctx.lr = 0x82364A14;
	sub_825469E0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,1904
	ctx.r1.s64 = ctx.r1.s64 + 1904;
	// lfd f30,-168(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -168);
	// lfd f31,-160(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -160);
	// b 0x82fa7690
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82364A28"))) PPC_WEAK_FUNC(sub_82364A28);
PPC_FUNC_IMPL(__imp__sub_82364A28) {
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
	// bl 0x82364a78
	ctx.lr = 0x82364A48;
	sub_82364A78(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82364a58
	if (ctx.cr0.eq) goto loc_82364A58;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82691540
	ctx.lr = 0x82364A58;
	sub_82691540(ctx, base);
loc_82364A58:
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

__attribute__((alias("__imp__sub_82364A74"))) PPC_WEAK_FUNC(sub_82364A74);
PPC_FUNC_IMPL(__imp__sub_82364A74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82364A78"))) PPC_WEAK_FUNC(sub_82364A78);
PPC_FUNC_IMPL(__imp__sub_82364A78) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x82364A80;
	__savegprlr_28(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,132(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 132);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r11,r11,17096
	ctx.r11.s64 = ctx.r11.s64 + 17096;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// beq cr6,0x82364aa4
	if (ctx.cr6.eq) goto loc_82364AA4;
	// bl 0x824492f0
	ctx.lr = 0x82364AA4;
	sub_824492F0(ctx, base);
loc_82364AA4:
	// lwz r10,1536(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1536);
	// li r28,0
	ctx.r28.s64 = 0;
	// lwz r11,516(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 516);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,8(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// bne cr6,0x82364adc
	if (!ctx.cr6.eq) goto loc_82364ADC;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82364b20
	if (ctx.cr6.eq) goto loc_82364B20;
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// addi r11,r11,1392
	ctx.r11.s64 = ctx.r11.s64 + 1392;
	// lwz r9,112(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 112);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stw r9,112(r11)
	PPC_STORE_U32(ctx.r11.u32 + 112, ctx.r9.u32);
	// b 0x82364b1c
	goto loc_82364B1C;
loc_82364ADC:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82364b20
	if (ctx.cr6.eq) goto loc_82364B20;
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// li r9,4
	ctx.r9.s64 = 4;
	// addi r8,r10,28
	ctx.r8.s64 = ctx.r10.s64 + 28;
	// addi r11,r11,1392
	ctx.r11.s64 = ctx.r11.s64 + 1392;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// lwz r9,112(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 112);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stw r9,112(r11)
	PPC_STORE_U32(ctx.r11.u32 + 112, ctx.r9.u32);
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// stw r28,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r28.u32);
	// lfs f0,8072(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8072);
	ctx.f0.f64 = double(temp.f32);
loc_82364B10:
	// stfs f0,-12(r8)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + -12, temp.u32);
	// stfsu f0,4(r8)
	temp.f32 = float(ctx.f0.f64);
	ea = 4 + ctx.r8.u32;
	PPC_STORE_U32(ea, temp.u32);
	ctx.r8.u32 = ea;
	// bdnz 0x82364b10
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82364B10;
loc_82364B1C:
	// stw r28,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r28.u32);
loc_82364B20:
	// lwz r11,160(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 160);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82364b38
	if (ctx.cr6.eq) goto loc_82364B38;
	// lwz r11,64(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x82364b54
	if (ctx.cr6.eq) goto loc_82364B54;
loc_82364B38:
	// lwz r11,3216(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 3216);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82364b54
	if (ctx.cr6.eq) goto loc_82364B54;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,3212
	ctx.r3.s64 = ctx.r31.s64 + 3212;
	// bl 0x82570620
	ctx.lr = 0x82364B50;
	sub_82570620(ctx, base);
	// stw r28,3216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3216, ctx.r28.u32);
loc_82364B54:
	// lwz r11,2572(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2572);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82364bcc
	if (ctx.cr6.eq) goto loc_82364BCC;
	// lwz r11,2020(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2020);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,2124(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2124);
	// bl 0x828997b0
	ctx.lr = 0x82364B70;
	sub_828997B0(ctx, base);
	// lis r29,-31956
	ctx.r29.s64 = -2094268416;
	// lwz r30,-5288(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + -5288);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x82364b8c
	if (!ctx.cr6.eq) goto loc_82364B8C;
	// bl 0x82570b38
	ctx.lr = 0x82364B84;
	sub_82570B38(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r3,-5288(r29)
	PPC_STORE_U32(ctx.r29.u32 + -5288, ctx.r3.u32);
loc_82364B8C:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r4,r11,15696
	ctx.r4.s64 = ctx.r11.s64 + 15696;
	// bl 0x82899948
	ctx.lr = 0x82364B9C;
	sub_82899948(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822e5208
	ctx.lr = 0x82364BAC;
	sub_822E5208(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82364bbc
	if (ctx.cr0.eq) goto loc_82364BBC;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x822e4ed8
	ctx.lr = 0x82364BBC;
	sub_822E4ED8(ctx, base);
loc_82364BBC:
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82899858
	ctx.lr = 0x82364BC4;
	sub_82899858(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82899858
	ctx.lr = 0x82364BCC;
	sub_82899858(ctx, base);
loc_82364BCC:
	// lwz r3,2024(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2024);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82364bec
	if (ctx.cr6.eq) goto loc_82364BEC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82364BEC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82364BEC:
	// lwz r30,816(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 816);
	// stw r28,2024(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2024, ctx.r28.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82364c58
	if (ctx.cr6.eq) goto loc_82364C58;
	// lwz r29,0(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq cr6,0x82364c3c
	if (ctx.cr6.eq) goto loc_82364C3C;
	// bl 0x826a4210
	ctx.lr = 0x82364C0C;
	sub_826A4210(ctx, base);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r11,21980
	ctx.r4.s64 = ctx.r11.s64 + 21980;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x826a72e8
	ctx.lr = 0x82364C20;
	sub_826A72E8(ctx, base);
	// lwz r29,0(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x826a4210
	ctx.lr = 0x82364C28;
	sub_826A4210(ctx, base);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r11,21992
	ctx.r4.s64 = ctx.r11.s64 + 21992;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x826a72e8
	ctx.lr = 0x82364C3C;
	sub_826A72E8(ctx, base);
loc_82364C3C:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82364c4c
	if (ctx.cr6.eq) goto loc_82364C4C;
	// bl 0x82241d18
	ctx.lr = 0x82364C4C;
	sub_82241D18(ctx, base);
loc_82364C4C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82691540
	ctx.lr = 0x82364C54;
	sub_82691540(ctx, base);
	// stw r28,816(r31)
	PPC_STORE_U32(ctx.r31.u32 + 816, ctx.r28.u32);
loc_82364C58:
	// lwz r3,596(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 596);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82364c6c
	if (ctx.cr6.eq) goto loc_82364C6C;
	// bl 0x825469e0
	ctx.lr = 0x82364C68;
	sub_825469E0(ctx, base);
	// stw r28,596(r31)
	PPC_STORE_U32(ctx.r31.u32 + 596, ctx.r28.u32);
loc_82364C6C:
	// lwz r3,1640(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1640);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82364c7c
	if (ctx.cr6.eq) goto loc_82364C7C;
	// bl 0x82691540
	ctx.lr = 0x82364C7C;
	sub_82691540(ctx, base);
loc_82364C7C:
	// lwz r3,2016(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2016);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82364c8c
	if (ctx.cr6.eq) goto loc_82364C8C;
	// bl 0x82691540
	ctx.lr = 0x82364C8C;
	sub_82691540(ctx, base);
loc_82364C8C:
	// lwz r3,1356(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1356);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82364ca0
	if (ctx.cr6.eq) goto loc_82364CA0;
	// stw r28,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r28.u32);
	// bl 0x82691540
	ctx.lr = 0x82364CA0;
	sub_82691540(ctx, base);
loc_82364CA0:
	// stw r28,1356(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1356, ctx.r28.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82369f20
	ctx.lr = 0x82364CAC;
	sub_82369F20(ctx, base);
	// lwz r3,656(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 656);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82364cc4
	if (ctx.cr6.eq) goto loc_82364CC4;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8256c608
	ctx.lr = 0x82364CC0;
	sub_8256C608(ctx, base);
	// stw r28,656(r31)
	PPC_STORE_U32(ctx.r31.u32 + 656, ctx.r28.u32);
loc_82364CC4:
	// lis r11,-31968
	ctx.r11.s64 = -2095054848;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// addi r11,r11,25048
	ctx.r11.s64 = ctx.r11.s64 + 25048;
	// addi r10,r10,29064
	ctx.r10.s64 = ctx.r10.s64 + 29064;
	// stw r10,2588(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2588, ctx.r10.u32);
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82364d00
	if (!ctx.cr6.eq) goto loc_82364D00;
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// stw r28,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r28.u32);
	// li r10,255
	ctx.r10.s64 = 255;
	// mr r9,r28
	ctx.r9.u64 = ctx.r28.u64;
	// stw r10,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r10.u32);
	// lfs f0,-2340(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -2340);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,8(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
loc_82364D00:
	// lwz r3,1540(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1540);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82364d10
	if (ctx.cr6.eq) goto loc_82364D10;
	// bl 0x82241d18
	ctx.lr = 0x82364D10;
	sub_82241D18(ctx, base);
loc_82364D10:
	// lwz r3,436(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 436);
	// addi r30,r31,384
	ctx.r30.s64 = ctx.r31.s64 + 384;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82364d58
	if (ctx.cr6.eq) goto loc_82364D58;
	// addi r9,r3,8
	ctx.r9.s64 = ctx.r3.s64 + 8;
loc_82364D24:
	// mfmsr r10
	ctx.r10.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r9
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r9.u32);
	ctx.r11.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stwcx. r11,0,r9
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r9.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r11.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r10,1
	ctx.msr = (ctx.r10.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x82364d24
	if (!ctx.cr0.eq) goto loc_82364D24;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82364d58
	if (!ctx.cr6.eq) goto loc_82364D58;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82364D58;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82364D58:
	// addi r3,r30,4
	ctx.r3.s64 = ctx.r30.s64 + 4;
	// bl 0x82507f48
	ctx.lr = 0x82364D60;
	sub_82507F48(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82349a00
	ctx.lr = 0x82364D68;
	sub_82349A00(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82364D70"))) PPC_WEAK_FUNC(sub_82364D70);
PPC_FUNC_IMPL(__imp__sub_82364D70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x82364D78;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// rlwinm. r10,r10,0,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFC;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble 0x82364dec
	if (!ctx.cr0.gt) goto loc_82364DEC;
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r28,r10,17368
	ctx.r28.s64 = ctx.r10.s64 + 17368;
loc_82364DA8:
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwzx r3,r11,r30
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// bl 0x824fa158
	ctx.lr = 0x82364DC8;
	sub_824FA158(ctx, base);
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// srawi r10,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 2;
	// cmpw cr6,r31,r10
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82364da8
	if (ctx.cr6.lt) goto loc_82364DA8;
loc_82364DEC:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82364DF4"))) PPC_WEAK_FUNC(sub_82364DF4);
PPC_FUNC_IMPL(__imp__sub_82364DF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82364DF8"))) PPC_WEAK_FUNC(sub_82364DF8);
PPC_FUNC_IMPL(__imp__sub_82364DF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7674
	ctx.lr = 0x82364E00;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r3,16
	ctx.r3.s64 = 16;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// bl 0x82691500
	ctx.lr = 0x82364E18;
	sub_82691500(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// li r31,0
	ctx.r31.s64 = 0;
	// beq 0x82364e38
	if (ctx.cr0.eq) goto loc_82364E38;
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// stw r31,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r31.u32);
	// stw r31,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r31.u32);
	// stw r31,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r31.u32);
	// b 0x82364e3c
	goto loc_82364E3C;
loc_82364E38:
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
loc_82364E3C:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r29,32
	ctx.r3.s64 = ctx.r29.s64 + 32;
	// bl 0x8234b5f0
	ctx.lr = 0x82364E48;
	sub_8234B5F0(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82546708
	ctx.lr = 0x82364E58;
	sub_82546708(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x82364e80
	if (ctx.cr0.eq) goto loc_82364E80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82546b30
	ctx.lr = 0x82364E68;
	sub_82546B30(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// bl 0x82691580
	ctx.lr = 0x82364E70;
	sub_82691580(ctx, base);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82a75198
	ctx.lr = 0x82364E80;
	sub_82A75198(ctx, base);
loc_82364E80:
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// rlwinm r10,r28,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r8,r1,84
	ctx.r8.s64 = ctx.r1.s64 + 84;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// stw r9,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r9.u32);
	// stw r8,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r8.u32);
	// bl 0x8234bb18
	ctx.lr = 0x82364EAC;
	sub_8234BB18(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8245f708
	ctx.lr = 0x82364EB4;
	sub_8245F708(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826915c0
	ctx.lr = 0x82364EC0;
	sub_826915C0(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82364ed0
	if (ctx.cr6.eq) goto loc_82364ED0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825469e0
	ctx.lr = 0x82364ED0;
	sub_825469E0(ctx, base);
loc_82364ED0:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82fa76c4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82364EDC"))) PPC_WEAK_FUNC(sub_82364EDC);
PPC_FUNC_IMPL(__imp__sub_82364EDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82364EE0"))) PPC_WEAK_FUNC(sub_82364EE0);
PPC_FUNC_IMPL(__imp__sub_82364EE0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x82364EE8;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r31,r4,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwzx r3,r11,r31
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// bl 0x824f9968
	ctx.lr = 0x82364F08;
	sub_824F9968(ctx, base);
	// mr. r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82364f38
	if (ctx.cr0.eq) goto loc_82364F38;
	// lwz r3,360(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 360);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82364f28
	if (ctx.cr6.eq) goto loc_82364F28;
	// bl 0x828c11f8
	ctx.lr = 0x82364F20;
	sub_828C11F8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// b 0x82364f2c
	goto loc_82364F2C;
loc_82364F28:
	// lwz r11,364(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 364);
loc_82364F2C:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r6,1
	ctx.r6.s64 = 1;
	// bne cr6,0x82364f3c
	if (!ctx.cr6.eq) goto loc_82364F3C;
loc_82364F38:
	// li r6,0
	ctx.r6.s64 = 0;
loc_82364F3C:
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cntlzw r11,r29
	ctx.r11.u64 = ctx.r29.u32 == 0 ? 32 : __builtin_clz(ctx.r29.u32);
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// rlwinm r11,r11,29,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x4;
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r9,0(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lwzx r8,r10,r11
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwzx r10,r10,r31
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	// lwzx r7,r9,r31
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r31.u32);
	// lwzx r9,r11,r9
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// lwz r5,16(r8)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r8.u32 + 16);
	// lwz r8,0(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// rlwinm r5,r5,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r4,16(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// lwz r29,16(r9)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r4,r4,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,0(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r3,16(r7)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + 16);
	// lwzx r8,r5,r8
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r8.u32);
	// rlwinm r5,r29,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r7,0(r7)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// rlwinm r3,r3,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r4,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r10.u32);
	// lfs f0,32(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 32);
	ctx.f0.f64 = double(temp.f32);
	// lwzx r8,r5,r9
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r9.u32);
	// lwzx r7,r3,r7
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r7.u32);
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f0.f64));
	// lfs f13,32(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	ctx.f13.f64 = double(temp.f32);
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// fctiwz f13,f13
	ctx.f13.s64 = (ctx.f13.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f13.f64));
	// stfd f13,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f13.u64);
	// lwz r9,92(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lfs f0,32(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 32);
	ctx.f0.f64 = double(temp.f32);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f0.f64));
	// stfd f0,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f0.u64);
	// lfs f0,32(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 32);
	ctx.f0.f64 = double(temp.f32);
	// lwz r8,92(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f0.f64));
	// stfd f0,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f0.u64);
	// lwz r7,92(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// subfc r5,r7,r8
	ctx.xer.ca = ctx.r8.u32 >= ctx.r7.u32;
	ctx.r5.s64 = ctx.r8.s64 - ctx.r7.s64;
	// eqv r8,r7,r8
	ctx.r8.u64 = ~(ctx.r7.u64 ^ ctx.r8.u64);
	// rlwinm r8,r8,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0x1;
	// addze r8,r8
	temp.s64 = ctx.r8.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r8.s64 = temp.s64;
	// clrlwi r7,r8,31
	ctx.r7.u64 = ctx.r8.u32 & 0x1;
	// blt cr6,0x82365004
	if (ctx.cr6.lt) goto loc_82365004;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
loc_82365004:
	// lwz r9,8(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r9,0(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lwzx r11,r9,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// lwzx r9,r9,r31
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r31.u32);
	// lwz r8,16(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r5,16(r9)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,0(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// rlwinm r5,r5,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r8,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// lwzx r9,r5,r9
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r9.u32);
	// lfs f0,32(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,32(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 32);
	ctx.f13.f64 = double(temp.f32);
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f0.f64));
	// fctiwz f13,f13
	ctx.f13.s64 = (ctx.f13.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f13.f64));
	// stfd f0,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f0.u64);
	// stfd f13,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f13.u64);
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r8,84(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpw cr6,r8,r11
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x82365060
	if (!ctx.cr6.lt) goto loc_82365060;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_82365060:
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq cr6,0x82365088
	if (ctx.cr6.eq) goto loc_82365088;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x82365088
	if (ctx.cr6.eq) goto loc_82365088;
	// lwz r11,456(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 456);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x82365088
	if (!ctx.cr6.gt) goto loc_82365088;
	// li r3,7
	ctx.r3.s64 = 7;
	// b 0x823650e0
	goto loc_823650E0;
loc_82365088:
	// lwz r11,512(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 512);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8236509c
	if (!ctx.cr6.eq) goto loc_8236509C;
	// li r3,17
	ctx.r3.s64 = 17;
	// b 0x823650e0
	goto loc_823650E0;
loc_8236509C:
	// lwz r9,448(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 448);
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x823650b8
	if (ctx.cr6.lt) goto loc_823650B8;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq cr6,0x823650f8
	if (ctx.cr6.eq) goto loc_823650F8;
	// li r3,18
	ctx.r3.s64 = 18;
	// b 0x823650e0
	goto loc_823650E0;
loc_823650B8:
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq cr6,0x823650f8
	if (ctx.cr6.eq) goto loc_823650F8;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x823650f8
	if (ctx.cr6.eq) goto loc_823650F8;
	// lis r11,-31968
	ctx.r11.s64 = -2095054848;
	// addi r11,r11,15768
	ctx.r11.s64 = ctx.r11.s64 + 15768;
	// lwz r11,124(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x823650f8
	if (!ctx.cr6.gt) goto loc_823650F8;
	// li r3,27
	ctx.r3.s64 = 27;
loc_823650E0:
	// bl 0x82365400
	ctx.lr = 0x823650E4;
	sub_82365400(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq 0x823650f8
	if (ctx.cr0.eq) goto loc_823650F8;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,164(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 164);
	// bl 0x8227d838
	ctx.lr = 0x823650F8;
	sub_8227D838(ctx, base);
loc_823650F8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82365100"))) PPC_WEAK_FUNC(sub_82365100);
PPC_FUNC_IMPL(__imp__sub_82365100) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x82365108;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r8,16(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	// lwz r7,16(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,0(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// rlwinm r7,r7,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r7,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r11.u32);
	// lwzx r9,r8,r9
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// lfs f13,32(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,32(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 32);
	ctx.f0.f64 = double(temp.f32);
	// fctiwz f13,f13
	ctx.f13.s64 = (ctx.f13.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f13.f64));
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f0.f64));
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// stfd f13,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f13.u64);
	// lwz r31,84(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r30,92(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// subfc r11,r30,r31
	ctx.xer.ca = ctx.r31.u32 >= ctx.r30.u32;
	ctx.r11.s64 = ctx.r31.s64 - ctx.r30.s64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// rlwinm r11,r11,2,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x4;
	// lwzx r3,r11,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// bl 0x824f9968
	ctx.lr = 0x8236517C;
	sub_824F9968(ctx, base);
	// mr. r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823651ac
	if (ctx.cr0.eq) goto loc_823651AC;
	// lwz r3,360(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 360);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8236519c
	if (ctx.cr6.eq) goto loc_8236519C;
	// bl 0x828c11f8
	ctx.lr = 0x82365194;
	sub_828C11F8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// b 0x823651a0
	goto loc_823651A0;
loc_8236519C:
	// lwz r11,364(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 364);
loc_823651A0:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r8,1
	ctx.r8.s64 = 1;
	// bne cr6,0x823651b0
	if (!ctx.cr6.eq) goto loc_823651B0;
loc_823651AC:
	// li r8,0
	ctx.r8.s64 = 0;
loc_823651B0:
	// cmpw cr6,r31,r30
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r30.s32, ctx.xer);
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// bge cr6,0x823651cc
	if (!ctx.cr6.lt) goto loc_823651CC;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// cmpw cr6,r31,r30
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r30.s32, ctx.xer);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// blt cr6,0x823651d0
	if (ctx.cr6.lt) goto loc_823651D0;
loc_823651CC:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_823651D0:
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x823651e4
	if (!ctx.cr6.eq) goto loc_823651E4;
	// li r3,22
	ctx.r3.s64 = 22;
	// b 0x8236521c
	goto loc_8236521C;
loc_823651E4:
	// lis r10,-31968
	ctx.r10.s64 = -2095054848;
	// addi r10,r10,15768
	ctx.r10.s64 = ctx.r10.s64 + 15768;
	// lwz r9,124(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 124);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// ble cr6,0x82365208
	if (!ctx.cr6.gt) goto loc_82365208;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x82365208
	if (ctx.cr6.eq) goto loc_82365208;
	// li r3,21
	ctx.r3.s64 = 21;
	// b 0x8236521c
	goto loc_8236521C;
loc_82365208:
	// lwz r10,128(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 128);
	// li r3,19
	ctx.r3.s64 = 19;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x8236521c
	if (!ctx.cr6.gt) goto loc_8236521C;
	// li r3,20
	ctx.r3.s64 = 20;
loc_8236521C:
	// bl 0x82365400
	ctx.lr = 0x82365220;
	sub_82365400(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq 0x82365234
	if (ctx.cr0.eq) goto loc_82365234;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,164(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 164);
	// bl 0x8227d838
	ctx.lr = 0x82365234;
	sub_8227D838(ctx, base);
loc_82365234:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8236523C"))) PPC_WEAK_FUNC(sub_8236523C);
PPC_FUNC_IMPL(__imp__sub_8236523C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82365240"))) PPC_WEAK_FUNC(sub_82365240);
PPC_FUNC_IMPL(__imp__sub_82365240) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x82365248;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r29,480(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 480);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r29,8
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 8, ctx.xer);
	// beq cr6,0x82365314
	if (ctx.cr6.eq) goto loc_82365314;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r31,r29,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwzx r3,r11,r31
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// bl 0x824f9968
	ctx.lr = 0x82365270;
	sub_824F9968(ctx, base);
	// mr. r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82365314
	if (ctx.cr0.eq) goto loc_82365314;
	// lwz r3,360(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 360);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82365290
	if (ctx.cr6.eq) goto loc_82365290;
	// bl 0x828c11f8
	ctx.lr = 0x82365288;
	sub_828C11F8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// b 0x82365294
	goto loc_82365294;
loc_82365290:
	// lwz r11,364(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 364);
loc_82365294:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82365314
	if (ctx.cr6.eq) goto loc_82365314;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cntlzw r10,r29
	ctx.r10.u64 = ctx.r29.u32 == 0 ? 32 : __builtin_clz(ctx.r29.u32);
	// rlwinm r10,r10,29,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x4;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwzx r10,r10,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwzx r11,r11,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// lwz r9,16(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r8,16(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r9,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// lwzx r9,r8,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// lfs f0,32(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	ctx.f0.f64 = double(temp.f32);
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f0.f64));
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lfs f0,32(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 32);
	ctx.f0.f64 = double(temp.f32);
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f0.f64));
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r9,r10,-1
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82365314
	if (!ctx.cr6.eq) goto loc_82365314;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// ble cr6,0x82365314
	if (!ctx.cr6.gt) goto loc_82365314;
	// cmplwi cr6,r10,2
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 2, ctx.xer);
	// li r3,1
	ctx.r3.s64 = 1;
	// bgt cr6,0x82365318
	if (ctx.cr6.gt) goto loc_82365318;
loc_82365314:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82365318:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82365320"))) PPC_WEAK_FUNC(sub_82365320);
PPC_FUNC_IMPL(__imp__sub_82365320) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x82365328;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r29,480(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 480);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r29,8
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 8, ctx.xer);
	// beq cr6,0x823653f4
	if (ctx.cr6.eq) goto loc_823653F4;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cntlzw r10,r29
	ctx.r10.u64 = ctx.r29.u32 == 0 ? 32 : __builtin_clz(ctx.r29.u32);
	// rlwinm r31,r10,29,29,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x4;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwzx r3,r11,r31
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// bl 0x824f9968
	ctx.lr = 0x82365354;
	sub_824F9968(ctx, base);
	// mr. r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823653f4
	if (ctx.cr0.eq) goto loc_823653F4;
	// lwz r3,360(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 360);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82365374
	if (ctx.cr6.eq) goto loc_82365374;
	// bl 0x828c11f8
	ctx.lr = 0x8236536C;
	sub_828C11F8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// b 0x82365378
	goto loc_82365378;
loc_82365374:
	// lwz r11,364(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 364);
loc_82365378:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823653f4
	if (ctx.cr6.eq) goto loc_823653F4;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// rlwinm r10,r29,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwzx r9,r11,r31
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r10,16(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	// lwz r9,0(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r8,16(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r9
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// lwzx r9,r8,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// lfs f0,32(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	ctx.f0.f64 = double(temp.f32);
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f0.f64));
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lfs f0,32(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 32);
	ctx.f0.f64 = double(temp.f32);
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f0.f64));
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r9,r10,-1
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x823653f4
	if (!ctx.cr6.eq) goto loc_823653F4;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// ble cr6,0x823653f4
	if (!ctx.cr6.gt) goto loc_823653F4;
	// cmplwi cr6,r10,2
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 2, ctx.xer);
	// li r3,1
	ctx.r3.s64 = 1;
	// bgt cr6,0x823653f8
	if (ctx.cr6.gt) goto loc_823653F8;
loc_823653F4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823653F8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82365400"))) PPC_WEAK_FUNC(sub_82365400);
PPC_FUNC_IMPL(__imp__sub_82365400) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r12,-32231
	ctx.r12.s64 = -2112290816;
	// addi r12,r12,25144
	ctx.r12.s64 = ctx.r12.s64 + 25144;
	// lbzx r0,r12,r3
	ctx.r0.u64 = PPC_LOAD_U8(ctx.r12.u32 + ctx.r3.u32);
	// rlwinm r0,r0,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r0.u32 | (ctx.r0.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r12,-32202
	ctx.r12.s64 = -2110390272;
	// nop 
	// addi r12,r12,21548
	ctx.r12.s64 = ctx.r12.s64 + 21548;
	// add r12,r12,r0
	ctx.r12.u64 = ctx.r12.u64 + ctx.r0.u64;
	// mtctr r12
	ctx.ctr.u64 = ctx.r12.u64;
	// bctr 
	switch (ctx.r10.u64) {
	case 0:
		// ERROR: 0x8236542C
		return;
	case 1:
		// ERROR: 0x82365438
		return;
	case 2:
		// ERROR: 0x82365444
		return;
	default:
		__builtin_unreachable();
	}
}

__attribute__((alias("__imp__sub_8236542C"))) PPC_WEAK_FUNC(sub_8236542C);
PPC_FUNC_IMPL(__imp__sub_8236542C) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r11,r11,15720
	ctx.r11.s64 = ctx.r11.s64 + 15720;
	// b 0x82365620
	// ERROR 82365620
	return;
}

__attribute__((alias("__imp__sub_82365438"))) PPC_WEAK_FUNC(sub_82365438);
PPC_FUNC_IMPL(__imp__sub_82365438) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r11,r11,15748
	ctx.r11.s64 = ctx.r11.s64 + 15748;
	// b 0x82365620
	// ERROR 82365620
	return;
}

__attribute__((alias("__imp__sub_82365444"))) PPC_WEAK_FUNC(sub_82365444);
PPC_FUNC_IMPL(__imp__sub_82365444) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r11,r11,15768
	ctx.r11.s64 = ctx.r11.s64 + 15768;
	// b 0x82365620
	// ERROR 82365620
	return;
}

__attribute__((alias("__imp__sub_82365450"))) PPC_WEAK_FUNC(sub_82365450);
PPC_FUNC_IMPL(__imp__sub_82365450) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r11,r11,15792
	ctx.r11.s64 = ctx.r11.s64 + 15792;
	// b 0x82365620
	// ERROR 82365620
	return;
}

__attribute__((alias("__imp__sub_8236545C"))) PPC_WEAK_FUNC(sub_8236545C);
PPC_FUNC_IMPL(__imp__sub_8236545C) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r11,r11,15812
	ctx.r11.s64 = ctx.r11.s64 + 15812;
	// b 0x82365620
	// ERROR 82365620
	return;
}

__attribute__((alias("__imp__sub_82365468"))) PPC_WEAK_FUNC(sub_82365468);
PPC_FUNC_IMPL(__imp__sub_82365468) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r11,r11,15832
	ctx.r11.s64 = ctx.r11.s64 + 15832;
	// b 0x82365620
	// ERROR 82365620
	return;
}

__attribute__((alias("__imp__sub_82365474"))) PPC_WEAK_FUNC(sub_82365474);
PPC_FUNC_IMPL(__imp__sub_82365474) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r11,r11,15856
	ctx.r11.s64 = ctx.r11.s64 + 15856;
	// b 0x82365620
	// ERROR 82365620
	return;
}

__attribute__((alias("__imp__sub_82365480"))) PPC_WEAK_FUNC(sub_82365480);
PPC_FUNC_IMPL(__imp__sub_82365480) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r11,r11,15880
	ctx.r11.s64 = ctx.r11.s64 + 15880;
	// b 0x82365620
	// ERROR 82365620
	return;
}

__attribute__((alias("__imp__sub_8236548C"))) PPC_WEAK_FUNC(sub_8236548C);
PPC_FUNC_IMPL(__imp__sub_8236548C) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r11,r11,15904
	ctx.r11.s64 = ctx.r11.s64 + 15904;
	// b 0x82365620
	// ERROR 82365620
	return;
}

__attribute__((alias("__imp__sub_82365498"))) PPC_WEAK_FUNC(sub_82365498);
PPC_FUNC_IMPL(__imp__sub_82365498) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r11,r11,15928
	ctx.r11.s64 = ctx.r11.s64 + 15928;
	// b 0x82365620
	// ERROR 82365620
	return;
}

__attribute__((alias("__imp__sub_823654A4"))) PPC_WEAK_FUNC(sub_823654A4);
PPC_FUNC_IMPL(__imp__sub_823654A4) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r11,r11,15952
	ctx.r11.s64 = ctx.r11.s64 + 15952;
	// b 0x82365620
	// ERROR 82365620
	return;
}

__attribute__((alias("__imp__sub_823654B0"))) PPC_WEAK_FUNC(sub_823654B0);
PPC_FUNC_IMPL(__imp__sub_823654B0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r11,r11,11392
	ctx.r11.s64 = ctx.r11.s64 + 11392;
	// b 0x82365620
	// ERROR 82365620
	return;
}

__attribute__((alias("__imp__sub_823654BC"))) PPC_WEAK_FUNC(sub_823654BC);
PPC_FUNC_IMPL(__imp__sub_823654BC) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r11,r11,15976
	ctx.r11.s64 = ctx.r11.s64 + 15976;
	// b 0x82365620
	// ERROR 82365620
	return;
}

__attribute__((alias("__imp__sub_823654C8"))) PPC_WEAK_FUNC(sub_823654C8);
PPC_FUNC_IMPL(__imp__sub_823654C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r11,r11,15996
	ctx.r11.s64 = ctx.r11.s64 + 15996;
	// b 0x82365620
	// ERROR 82365620
	return;
}

__attribute__((alias("__imp__sub_823654D4"))) PPC_WEAK_FUNC(sub_823654D4);
PPC_FUNC_IMPL(__imp__sub_823654D4) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r11,r11,16020
	ctx.r11.s64 = ctx.r11.s64 + 16020;
	// b 0x82365620
	// ERROR 82365620
	return;
}

__attribute__((alias("__imp__sub_823654E0"))) PPC_WEAK_FUNC(sub_823654E0);
PPC_FUNC_IMPL(__imp__sub_823654E0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r11,r11,16040
	ctx.r11.s64 = ctx.r11.s64 + 16040;
	// b 0x82365620
	// ERROR 82365620
	return;
}

__attribute__((alias("__imp__sub_823654EC"))) PPC_WEAK_FUNC(sub_823654EC);
PPC_FUNC_IMPL(__imp__sub_823654EC) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r11,r11,16056
	ctx.r11.s64 = ctx.r11.s64 + 16056;
	// b 0x82365620
	// ERROR 82365620
	return;
}

__attribute__((alias("__imp__sub_823654F8"))) PPC_WEAK_FUNC(sub_823654F8);
PPC_FUNC_IMPL(__imp__sub_823654F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r11,r11,16072
	ctx.r11.s64 = ctx.r11.s64 + 16072;
	// b 0x82365620
	// ERROR 82365620
	return;
}

__attribute__((alias("__imp__sub_82365504"))) PPC_WEAK_FUNC(sub_82365504);
PPC_FUNC_IMPL(__imp__sub_82365504) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r11,r11,16088
	ctx.r11.s64 = ctx.r11.s64 + 16088;
	// b 0x82365620
	// ERROR 82365620
	return;
}

__attribute__((alias("__imp__sub_82365510"))) PPC_WEAK_FUNC(sub_82365510);
PPC_FUNC_IMPL(__imp__sub_82365510) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r11,r11,16108
	ctx.r11.s64 = ctx.r11.s64 + 16108;
	// b 0x82365620
	// ERROR 82365620
	return;
}

__attribute__((alias("__imp__sub_8236551C"))) PPC_WEAK_FUNC(sub_8236551C);
PPC_FUNC_IMPL(__imp__sub_8236551C) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r11,r11,16140
	ctx.r11.s64 = ctx.r11.s64 + 16140;
	// b 0x82365620
	// ERROR 82365620
	return;
}

__attribute__((alias("__imp__sub_82365528"))) PPC_WEAK_FUNC(sub_82365528);
PPC_FUNC_IMPL(__imp__sub_82365528) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r11,r11,16156
	ctx.r11.s64 = ctx.r11.s64 + 16156;
	// b 0x82365620
	// ERROR 82365620
	return;
}

__attribute__((alias("__imp__sub_82365534"))) PPC_WEAK_FUNC(sub_82365534);
PPC_FUNC_IMPL(__imp__sub_82365534) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r11,r11,16180
	ctx.r11.s64 = ctx.r11.s64 + 16180;
	// b 0x82365620
	// ERROR 82365620
	return;
}

__attribute__((alias("__imp__sub_82365540"))) PPC_WEAK_FUNC(sub_82365540);
PPC_FUNC_IMPL(__imp__sub_82365540) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r11,r11,16216
	ctx.r11.s64 = ctx.r11.s64 + 16216;
	// b 0x82365620
	// ERROR 82365620
	return;
}

__attribute__((alias("__imp__sub_8236554C"))) PPC_WEAK_FUNC(sub_8236554C);
PPC_FUNC_IMPL(__imp__sub_8236554C) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r11,r11,16248
	ctx.r11.s64 = ctx.r11.s64 + 16248;
	// b 0x82365620
	// ERROR 82365620
	return;
}

__attribute__((alias("__imp__sub_82365558"))) PPC_WEAK_FUNC(sub_82365558);
PPC_FUNC_IMPL(__imp__sub_82365558) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r11,r11,16272
	ctx.r11.s64 = ctx.r11.s64 + 16272;
	// b 0x82365620
	// ERROR 82365620
	return;
}

__attribute__((alias("__imp__sub_82365564"))) PPC_WEAK_FUNC(sub_82365564);
PPC_FUNC_IMPL(__imp__sub_82365564) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r11,r11,16296
	ctx.r11.s64 = ctx.r11.s64 + 16296;
	// b 0x82365620
	// ERROR 82365620
	return;
}

__attribute__((alias("__imp__sub_82365570"))) PPC_WEAK_FUNC(sub_82365570);
PPC_FUNC_IMPL(__imp__sub_82365570) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r11,r11,16320
	ctx.r11.s64 = ctx.r11.s64 + 16320;
	// b 0x82365620
	// ERROR 82365620
	return;
}

__attribute__((alias("__imp__sub_8236557C"))) PPC_WEAK_FUNC(sub_8236557C);
PPC_FUNC_IMPL(__imp__sub_8236557C) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r11,r11,16348
	ctx.r11.s64 = ctx.r11.s64 + 16348;
	// b 0x82365620
	// ERROR 82365620
	return;
}

__attribute__((alias("__imp__sub_82365588"))) PPC_WEAK_FUNC(sub_82365588);
PPC_FUNC_IMPL(__imp__sub_82365588) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r11,r11,16372
	ctx.r11.s64 = ctx.r11.s64 + 16372;
	// b 0x82365620
	// ERROR 82365620
	return;
}

__attribute__((alias("__imp__sub_82365594"))) PPC_WEAK_FUNC(sub_82365594);
PPC_FUNC_IMPL(__imp__sub_82365594) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r11,r11,16388
	ctx.r11.s64 = ctx.r11.s64 + 16388;
	// b 0x82365620
	// ERROR 82365620
	return;
}

__attribute__((alias("__imp__sub_823655A0"))) PPC_WEAK_FUNC(sub_823655A0);
PPC_FUNC_IMPL(__imp__sub_823655A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r11,r11,16404
	ctx.r11.s64 = ctx.r11.s64 + 16404;
	// b 0x82365620
	// ERROR 82365620
	return;
}

__attribute__((alias("__imp__sub_823655AC"))) PPC_WEAK_FUNC(sub_823655AC);
PPC_FUNC_IMPL(__imp__sub_823655AC) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r11,r11,16420
	ctx.r11.s64 = ctx.r11.s64 + 16420;
	// b 0x82365620
	// ERROR 82365620
	return;
}

__attribute__((alias("__imp__sub_823655B8"))) PPC_WEAK_FUNC(sub_823655B8);
PPC_FUNC_IMPL(__imp__sub_823655B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r11,r11,16440
	ctx.r11.s64 = ctx.r11.s64 + 16440;
	// b 0x82365620
	// ERROR 82365620
	return;
}

__attribute__((alias("__imp__sub_823655C4"))) PPC_WEAK_FUNC(sub_823655C4);
PPC_FUNC_IMPL(__imp__sub_823655C4) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r11,r11,16460
	ctx.r11.s64 = ctx.r11.s64 + 16460;
	// b 0x82365620
	// ERROR 82365620
	return;
}

__attribute__((alias("__imp__sub_823655D0"))) PPC_WEAK_FUNC(sub_823655D0);
PPC_FUNC_IMPL(__imp__sub_823655D0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r11,r11,16484
	ctx.r11.s64 = ctx.r11.s64 + 16484;
	// b 0x82365620
	// ERROR 82365620
	return;
}

__attribute__((alias("__imp__sub_823655DC"))) PPC_WEAK_FUNC(sub_823655DC);
PPC_FUNC_IMPL(__imp__sub_823655DC) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r11,r11,16512
	ctx.r11.s64 = ctx.r11.s64 + 16512;
	// b 0x82365620
	// ERROR 82365620
	return;
}

__attribute__((alias("__imp__sub_823655E8"))) PPC_WEAK_FUNC(sub_823655E8);
PPC_FUNC_IMPL(__imp__sub_823655E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r11,r11,16524
	ctx.r11.s64 = ctx.r11.s64 + 16524;
	// b 0x82365620
	// ERROR 82365620
	return;
}

__attribute__((alias("__imp__sub_823655F4"))) PPC_WEAK_FUNC(sub_823655F4);
PPC_FUNC_IMPL(__imp__sub_823655F4) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r11,r11,16540
	ctx.r11.s64 = ctx.r11.s64 + 16540;
	// b 0x82365620
	// ERROR 82365620
	return;
}

__attribute__((alias("__imp__sub_82365600"))) PPC_WEAK_FUNC(sub_82365600);
PPC_FUNC_IMPL(__imp__sub_82365600) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r11,r11,16556
	ctx.r11.s64 = ctx.r11.s64 + 16556;
	// b 0x82365620
	// ERROR 82365620
	return;
}

__attribute__((alias("__imp__sub_8236560C"))) PPC_WEAK_FUNC(sub_8236560C);
PPC_FUNC_IMPL(__imp__sub_8236560C) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r11,r11,16572
	ctx.r11.s64 = ctx.r11.s64 + 16572;
	// b 0x82365620
	// ERROR 82365620
	return;
}

__attribute__((alias("__imp__sub_82365618"))) PPC_WEAK_FUNC(sub_82365618);
PPC_FUNC_IMPL(__imp__sub_82365618) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r11,r11,16592
	ctx.r11.s64 = ctx.r11.s64 + 16592;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82365628"))) PPC_WEAK_FUNC(sub_82365628);
PPC_FUNC_IMPL(__imp__sub_82365628) {
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
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,41
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 41, ctx.xer);
	// bgt cr6,0x82365650
	if (ctx.cr6.gt) goto loc_82365650;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// bl 0x82365400
	ctx.lr = 0x82365648;
	sub_82365400(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82365654
	goto loc_82365654;
loc_82365650:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82365654:
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82365668
	if (ctx.cr6.eq) goto loc_82365668;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,164(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 164);
	// bl 0x8227d838
	ctx.lr = 0x82365668;
	sub_8227D838(ctx, base);
loc_82365668:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82365678"))) PPC_WEAK_FUNC(sub_82365678);
PPC_FUNC_IMPL(__imp__sub_82365678) {
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
	// lwz r3,28(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// bl 0x824f9968
	ctx.lr = 0x8236568C;
	sub_824F9968(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x823656c0
	if (ctx.cr0.eq) goto loc_823656C0;
	// lwz r11,360(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 360);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823656b0
	if (ctx.cr6.eq) goto loc_823656B0;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x828c11f8
	ctx.lr = 0x823656A8;
	sub_828C11F8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// b 0x823656b4
	goto loc_823656B4;
loc_823656B0:
	// lwz r11,364(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 364);
loc_823656B4:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r3,1
	ctx.r3.s64 = 1;
	// bne cr6,0x823656c4
	if (!ctx.cr6.eq) goto loc_823656C4;
loc_823656C0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823656C4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823656D4"))) PPC_WEAK_FUNC(sub_823656D4);
PPC_FUNC_IMPL(__imp__sub_823656D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823656D8"))) PPC_WEAK_FUNC(sub_823656D8);
PPC_FUNC_IMPL(__imp__sub_823656D8) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,112(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 112);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82365718;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble 0x8236576c
	if (!ctx.cr0.gt) goto loc_8236576C;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x82365738
	if (ctx.cr6.eq) goto loc_82365738;
	// lwz r11,832(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 832);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// b 0x82365770
	goto loc_82365770;
loc_82365738:
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// blt cr6,0x8236576c
	if (ctx.cr6.lt) goto loc_8236576C;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// ble cr6,0x8236575c
	if (!ctx.cr6.gt) goto loc_8236575C;
	// cmplwi cr6,r11,15
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 15, ctx.xer);
	// ble cr6,0x8236576c
	if (!ctx.cr6.gt) goto loc_8236576C;
	// cmplwi cr6,r11,18
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 18, ctx.xer);
	// bgt cr6,0x8236576c
	if (ctx.cr6.gt) goto loc_8236576C;
loc_8236575C:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8234a1d8
	ctx.lr = 0x82365768;
	sub_8234A1D8(ctx, base);
	// b 0x82365770
	goto loc_82365770;
loc_8236576C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82365770:
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

__attribute__((alias("__imp__sub_82365788"))) PPC_WEAK_FUNC(sub_82365788);
PPC_FUNC_IMPL(__imp__sub_82365788) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x82365790;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,160(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 160);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823657c8
	if (ctx.cr6.eq) goto loc_823657C8;
	// lwz r11,64(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x823657c8
	if (!ctx.cr6.eq) goto loc_823657C8;
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// lfs f1,17660(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 17660);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8234ac98
	ctx.lr = 0x823657C4;
	sub_8234AC98(ctx, base);
	// b 0x82365828
	goto loc_82365828;
loc_823657C8:
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,112(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 112);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823657F0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lfs f1,17660(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 17660);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8234aff8
	ctx.lr = 0x82365804;
	sub_8234AFF8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8234aff8
	ctx.lr = 0x82365814;
	sub_8234AFF8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// bl 0x8234ab90
	ctx.lr = 0x82365828;
	sub_8234AB90(ctx, base);
loc_82365828:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82365830"))) PPC_WEAK_FUNC(sub_82365830);
PPC_FUNC_IMPL(__imp__sub_82365830) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,516(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 516);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82365844
	if (ctx.cr6.eq) goto loc_82365844;
	// lfs f1,1628(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 1628);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
loc_82365844:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lfs f1,-2340(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -2340);
	ctx.f1.f64 = double(temp.f32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82365850"))) PPC_WEAK_FUNC(sub_82365850);
PPC_FUNC_IMPL(__imp__sub_82365850) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// subf r11,r10,r9
	ctx.r11.s64 = ctx.r9.s64 - ctx.r10.s64;
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// subf r10,r7,r8
	ctx.r10.s64 = ctx.r8.s64 - ctx.r7.s64;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// srawi r10,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 2;
	// bne cr6,0x82365894
	if (!ctx.cr6.eq) goto loc_82365894;
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x823658b0
	if (!ctx.cr6.eq) goto loc_823658B0;
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_82365894:
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x823658b0
	if (!ctx.cr6.eq) goto loc_823658B0;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// li r3,0
	ctx.r3.s64 = 0;
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
loc_823658B0:
	// li r3,3
	ctx.r3.s64 = 3;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823658B8"))) PPC_WEAK_FUNC(sub_823658B8);
PPC_FUNC_IMPL(__imp__sub_823658B8) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r4,17
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 17, ctx.xer);
	// bgtlr cr6
	if (ctx.cr6.gt) return;
	// lis r12,-32231
	ctx.r12.s64 = -2112290816;
	// addi r12,r12,27496
	ctx.r12.s64 = ctx.r12.s64 + 27496;
	// lbzx r0,r12,r4
	ctx.r0.u64 = PPC_LOAD_U8(ctx.r12.u32 + ctx.r4.u32);
	// rlwinm r0,r0,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r0.u32 | (ctx.r0.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r12,-32202
	ctx.r12.s64 = -2110390272;
	// nop 
	// addi r12,r12,22760
	ctx.r12.s64 = ctx.r12.s64 + 22760;
	// add r12,r12,r0
	ctx.r12.u64 = ctx.r12.u64 + ctx.r0.u64;
	// mtctr r12
	ctx.ctr.u64 = ctx.r12.u64;
	// bctr 
	switch (ctx.r4.u64) {
	case 0:
		// ERROR: 0x823659D4
		return;
	case 1:
		// ERROR: 0x823659F4
		return;
	case 2:
		// ERROR: 0x82365AF4
		return;
	case 3:
		// ERROR: 0x82365994
		return;
	case 4:
		// ERROR: 0x823659B4
		return;
	case 5:
		// ERROR: 0x82365A34
		return;
	case 6:
		// ERROR: 0x82365A14
		return;
	case 7:
		// ERROR: 0x82365A54
		return;
	case 8:
		// ERROR: 0x82365AF4
		return;
	case 9:
		// ERROR: 0x82365908
		return;
	case 10:
		// ERROR: 0x82365948
		return;
	case 11:
		// ERROR: 0x82365968
		return;
	case 12:
		// ERROR: 0x823658E8
		return;
	case 13:
		// ERROR: 0x82365928
		return;
	case 14:
		// ERROR: 0x82365A74
		return;
	case 15:
		// ERROR: 0x82365A94
		return;
	case 16:
		// ERROR: 0x82365AB4
		return;
	case 17:
		// ERROR: 0x82365AD4
		return;
	default:
		__builtin_unreachable();
	}
}

__attribute__((alias("__imp__sub_823658E8"))) PPC_WEAK_FUNC(sub_823658E8);
PPC_FUNC_IMPL(__imp__sub_823658E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,144(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 144);
	// lfs f2,1932(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 1932);
	ctx.f2.f64 = double(temp.f32);
	// lwz r7,1920(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1920);
	// lfs f1,1928(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 1928);
	ctx.f1.f64 = double(temp.f32);
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r5,176(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 176);
	// b 0x822cb988
	sub_822CB988(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82365908"))) PPC_WEAK_FUNC(sub_82365908);
PPC_FUNC_IMPL(__imp__sub_82365908) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,144(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 144);
	// lfs f2,1948(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 1948);
	ctx.f2.f64 = double(temp.f32);
	// lwz r7,1936(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1936);
	// lfs f1,1944(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 1944);
	ctx.f1.f64 = double(temp.f32);
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r5,176(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 176);
	// b 0x822cb988
	sub_822CB988(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82365928"))) PPC_WEAK_FUNC(sub_82365928);
PPC_FUNC_IMPL(__imp__sub_82365928) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,144(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 144);
	// lfs f2,1916(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 1916);
	ctx.f2.f64 = double(temp.f32);
	// lwz r7,1904(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1904);
	// lfs f1,1912(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 1912);
	ctx.f1.f64 = double(temp.f32);
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r5,176(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 176);
	// b 0x822cb988
	sub_822CB988(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82365948"))) PPC_WEAK_FUNC(sub_82365948);
PPC_FUNC_IMPL(__imp__sub_82365948) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,144(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 144);
	// lfs f2,1980(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 1980);
	ctx.f2.f64 = double(temp.f32);
	// lwz r7,1968(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1968);
	// lfs f1,1976(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 1976);
	ctx.f1.f64 = double(temp.f32);
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r5,176(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 176);
	// b 0x822cb988
	sub_822CB988(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82365968"))) PPC_WEAK_FUNC(sub_82365968);
PPC_FUNC_IMPL(__imp__sub_82365968) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,544(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 544);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r11,144(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 144);
	// lfs f2,1964(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 1964);
	ctx.f2.f64 = double(temp.f32);
	// lwz r7,1952(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1952);
	// lfs f1,1960(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 1960);
	ctx.f1.f64 = double(temp.f32);
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r5,176(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 176);
	// b 0x822cb988
	sub_822CB988(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82365994"))) PPC_WEAK_FUNC(sub_82365994);
PPC_FUNC_IMPL(__imp__sub_82365994) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,144(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 144);
	// lfs f2,1772(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 1772);
	ctx.f2.f64 = double(temp.f32);
	// lwz r7,1760(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1760);
	// lfs f1,1768(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 1768);
	ctx.f1.f64 = double(temp.f32);
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r5,176(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 176);
	// b 0x822cb988
	sub_822CB988(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823659B4"))) PPC_WEAK_FUNC(sub_823659B4);
PPC_FUNC_IMPL(__imp__sub_823659B4) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,144(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 144);
	// lfs f2,1756(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 1756);
	ctx.f2.f64 = double(temp.f32);
	// lwz r7,1744(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1744);
	// lfs f1,1752(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 1752);
	ctx.f1.f64 = double(temp.f32);
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r5,176(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 176);
	// b 0x822cb988
	sub_822CB988(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823659D4"))) PPC_WEAK_FUNC(sub_823659D4);
PPC_FUNC_IMPL(__imp__sub_823659D4) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,144(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 144);
	// lfs f2,1836(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 1836);
	ctx.f2.f64 = double(temp.f32);
	// lwz r7,1824(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1824);
	// lfs f1,1832(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 1832);
	ctx.f1.f64 = double(temp.f32);
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r5,176(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 176);
	// b 0x822cb988
	sub_822CB988(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823659F4"))) PPC_WEAK_FUNC(sub_823659F4);
PPC_FUNC_IMPL(__imp__sub_823659F4) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,144(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 144);
	// lfs f2,1852(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 1852);
	ctx.f2.f64 = double(temp.f32);
	// lwz r7,1840(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1840);
	// lfs f1,1848(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 1848);
	ctx.f1.f64 = double(temp.f32);
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r5,176(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 176);
	// b 0x822cb988
	sub_822CB988(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82365A14"))) PPC_WEAK_FUNC(sub_82365A14);
PPC_FUNC_IMPL(__imp__sub_82365A14) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,144(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 144);
	// lfs f2,1868(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 1868);
	ctx.f2.f64 = double(temp.f32);
	// lwz r7,1856(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1856);
	// lfs f1,1864(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 1864);
	ctx.f1.f64 = double(temp.f32);
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r5,176(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 176);
	// b 0x822cb988
	sub_822CB988(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82365A34"))) PPC_WEAK_FUNC(sub_82365A34);
PPC_FUNC_IMPL(__imp__sub_82365A34) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,144(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 144);
	// lfs f2,1884(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 1884);
	ctx.f2.f64 = double(temp.f32);
	// lwz r7,1872(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1872);
	// lfs f1,1880(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 1880);
	ctx.f1.f64 = double(temp.f32);
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r5,176(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 176);
	// b 0x822cb988
	sub_822CB988(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82365A54"))) PPC_WEAK_FUNC(sub_82365A54);
PPC_FUNC_IMPL(__imp__sub_82365A54) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,144(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 144);
	// lfs f2,1900(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 1900);
	ctx.f2.f64 = double(temp.f32);
	// lwz r7,1888(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1888);
	// lfs f1,1896(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 1896);
	ctx.f1.f64 = double(temp.f32);
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r5,176(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 176);
	// b 0x822cb988
	sub_822CB988(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82365A74"))) PPC_WEAK_FUNC(sub_82365A74);
PPC_FUNC_IMPL(__imp__sub_82365A74) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,144(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 144);
	// lfs f2,1708(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 1708);
	ctx.f2.f64 = double(temp.f32);
	// lwz r7,1696(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1696);
	// lfs f1,1704(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 1704);
	ctx.f1.f64 = double(temp.f32);
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r5,176(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 176);
	// b 0x822cb988
	sub_822CB988(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82365A94"))) PPC_WEAK_FUNC(sub_82365A94);
PPC_FUNC_IMPL(__imp__sub_82365A94) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,144(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 144);
	// lfs f2,1724(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 1724);
	ctx.f2.f64 = double(temp.f32);
	// lwz r7,1712(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1712);
	// lfs f1,1720(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 1720);
	ctx.f1.f64 = double(temp.f32);
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r5,176(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 176);
	// b 0x822cb988
	sub_822CB988(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82365AB4"))) PPC_WEAK_FUNC(sub_82365AB4);
PPC_FUNC_IMPL(__imp__sub_82365AB4) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,144(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 144);
	// lfs f2,1740(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 1740);
	ctx.f2.f64 = double(temp.f32);
	// lwz r7,1728(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1728);
	// lfs f1,1736(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 1736);
	ctx.f1.f64 = double(temp.f32);
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r5,176(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 176);
	// b 0x822cb988
	sub_822CB988(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82365AD4"))) PPC_WEAK_FUNC(sub_82365AD4);
PPC_FUNC_IMPL(__imp__sub_82365AD4) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,144(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 144);
	// lfs f2,1804(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 1804);
	ctx.f2.f64 = double(temp.f32);
	// lwz r7,1792(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1792);
	// lfs f1,1800(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 1800);
	ctx.f1.f64 = double(temp.f32);
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r5,176(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 176);
	// b 0x822cb988
	sub_822CB988(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82365AF4"))) PPC_WEAK_FUNC(sub_82365AF4);
PPC_FUNC_IMPL(__imp__sub_82365AF4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82365AF8"))) PPC_WEAK_FUNC(sub_82365AF8);
PPC_FUNC_IMPL(__imp__sub_82365AF8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x82365B00;
	__savegprlr_29(ctx, base);
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lfs f13,1512(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 1512);
	ctx.f13.f64 = double(temp.f32);
	// lwz r8,1536(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1536);
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// li r7,1408
	ctx.r7.s64 = 1408;
	// vor128 v0,v77,v77
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_load_si128((__m128i*)ctx.v77.u8));
	// li r6,1424
	ctx.r6.s64 = 1424;
	// vor128 v13,v77,v77
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_load_si128((__m128i*)ctx.v77.u8));
	// li r4,1440
	ctx.r4.s64 = 1440;
	// vor128 v12,v77,v77
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_load_si128((__m128i*)ctx.v77.u8));
	// lwz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// li r31,1456
	ctx.r31.s64 = 1456;
	// lwz r10,12(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// lfs f0,-2340(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -2340);
	ctx.f0.f64 = double(temp.f32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// li r9,-1
	ctx.r9.s64 = -1;
	// lwz r5,0(r5)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// li r30,24
	ctx.r30.s64 = 24;
	// lwz r29,16(r5)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r5.u32 + 16);
	// lwz r5,0(r5)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// rlwinm r29,r29,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r5,r29,r5
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r5.u32);
	// lfs f12,32(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 32);
	ctx.f12.f64 = double(temp.f32);
	// stfsx f13,r10,r8
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r10.u32 + ctx.r8.u32, temp.u32);
	// fctiwz f13,f12
	ctx.f13.s64 = (ctx.f12.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f12.f64));
	// stfd f13,-48(r1)
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f13.u64);
	// lwa r5,-44(r1)
	ctx.r5.s64 = int32_t(PPC_LOAD_U32(ctx.r1.u32 + -44));
	// std r5,-48(r1)
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.r5.u64);
	// lfd f13,-48(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// lwz r10,12(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// stfsx f13,r10,r8
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r10.u32 + ctx.r8.u32, temp.u32);
	// lwz r10,12(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,12(r8)
	PPC_STORE_U32(ctx.r8.u32 + 12, ctx.r10.u32);
	// stfs f0,1512(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1512, temp.u32);
	// stfs f0,1476(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1476, temp.u32);
	// stw r11,1508(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1508, ctx.r11.u32);
	// stw r11,1516(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1516, ctx.r11.u32);
	// stvx128 v0,r3,r7
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32 + ctx.r7.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stw r11,1520(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1520, ctx.r11.u32);
	// stvx128 v13,r3,r6
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32 + ctx.r6.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stw r30,1392(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1392, ctx.r30.u32);
	// stvx128 v12,r3,r4
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32 + ctx.r4.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v77,r3,r31
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32 + ctx.r31.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v77.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stw r11,1472(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1472, ctx.r11.u32);
	// stw r9,1480(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1480, ctx.r9.u32);
	// stw r9,1484(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1484, ctx.r9.u32);
	// stw r11,1488(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1488, ctx.r11.u32);
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82365BDC"))) PPC_WEAK_FUNC(sub_82365BDC);
PPC_FUNC_IMPL(__imp__sub_82365BDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82365BE0"))) PPC_WEAK_FUNC(sub_82365BE0);
PPC_FUNC_IMPL(__imp__sub_82365BE0) {
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
	// bl 0x8236b8a8
	ctx.lr = 0x82365BF8;
	sub_8236B8A8(ctx, base);
	// li r3,23
	ctx.r3.s64 = 23;
	// bl 0x82365400
	ctx.lr = 0x82365C00;
	sub_82365400(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq 0x82365c14
	if (ctx.cr0.eq) goto loc_82365C14;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,164(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 164);
	// bl 0x8227d838
	ctx.lr = 0x82365C14;
	sub_8227D838(ctx, base);
loc_82365C14:
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

__attribute__((alias("__imp__sub_82365C28"))) PPC_WEAK_FUNC(sub_82365C28);
PPC_FUNC_IMPL(__imp__sub_82365C28) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7654
	ctx.lr = 0x82365C30;
	__savegprlr_19(ctx, base);
	// stfd f30,-128(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -128, ctx.f30.u64);
	// stfd f31,-120(r1)
	PPC_STORE_U64(ctx.r1.u32 + -120, ctx.f31.u64);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r22,0
	ctx.r22.s64 = 0;
	// li r23,1
	ctx.r23.s64 = 1;
	// stw r22,2556(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2556, ctx.r22.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r23,240(r3)
	PPC_STORE_U32(ctx.r3.u32 + 240, ctx.r23.u32);
	// mr r21,r4
	ctx.r21.u64 = ctx.r4.u64;
	// mr r20,r5
	ctx.r20.u64 = ctx.r5.u64;
	// bl 0x8236b8a8
	ctx.lr = 0x82365C5C;
	sub_8236B8A8(ctx, base);
	// lwz r11,2016(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2016);
	// mr r24,r22
	ctx.r24.u64 = ctx.r22.u64;
	// stw r23,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r23.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// rlwinm. r11,r11,0,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFC;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble 0x82365d98
	if (!ctx.cr0.gt) goto loc_82365D98;
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// mr r26,r22
	ctx.r26.u64 = ctx.r22.u64;
	// lfs f30,-1980(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -1980);
	ctx.f30.f64 = double(temp.f32);
	// lfs f31,-2340(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -2340);
	ctx.f31.f64 = double(temp.f32);
loc_82365C94:
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// mr r28,r22
	ctx.r28.u64 = ctx.r22.u64;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwzx r27,r11,r26
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r26.u32);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r30,0(r27)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lwz r10,4(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// lwzx r25,r11,r26
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r26.u32);
	// cmplw cr6,r30,r10
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82365d74
	if (ctx.cr6.eq) goto loc_82365D74;
loc_82365CBC:
	// lwz r11,16(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 16);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r10,0(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// bl 0x824fa600
	ctx.lr = 0x82365CD4;
	sub_824FA600(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,8(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82365CF0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,36(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 36);
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x82365d34
	if (ctx.cr6.eq) goto loc_82365D34;
	// lwz r11,20(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// stw r4,36(r29)
	PPC_STORE_U32(ctx.r29.u32 + 36, ctx.r4.u32);
	// lwz r11,2240(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2240);
	// beq cr6,0x82365d1c
	if (ctx.cr6.eq) goto loc_82365D1C;
	// stw r23,144(r11)
	PPC_STORE_U32(ctx.r11.u32 + 144, ctx.r23.u32);
	// b 0x82365d20
	goto loc_82365D20;
loc_82365D1C:
	// stw r22,144(r11)
	PPC_STORE_U32(ctx.r11.u32 + 144, ctx.r22.u32);
loc_82365D20:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82365D34;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82365D34:
	// lwz r19,280(r29)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r29.u32 + 280);
	// fmr f2,f30
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f30.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// lwz r3,16(r19)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r19.u32 + 16);
	// bl 0x82827820
	ctx.lr = 0x82365D48;
	sub_82827820(ctx, base);
	// lwz r11,16(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 16);
	// li r4,1
	ctx.r4.s64 = 1;
	// lfs f0,268(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 268);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,264(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 264, temp.u32);
	// lwz r3,280(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 280);
	// bl 0x82460348
	ctx.lr = 0x82365D60;
	sub_82460348(ctx, base);
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82365cbc
	if (!ctx.cr6.eq) goto loc_82365CBC;
loc_82365D74:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r24,r24,1
	ctx.r24.s64 = ctx.r24.s64 + 1;
	// addi r26,r26,4
	ctx.r26.s64 = ctx.r26.s64 + 4;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// cmpw cr6,r24,r11
	ctx.cr6.compare<int32_t>(ctx.r24.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82365c94
	if (ctx.cr6.lt) goto loc_82365C94;
loc_82365D98:
	// lwz r11,516(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 516);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82365dc4
	if (!ctx.cr6.eq) goto loc_82365DC4;
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// lwz r11,21120(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 21120);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82365dc4
	if (!ctx.cr6.eq) goto loc_82365DC4;
	// lwz r11,148(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82365dc4
	if (ctx.cr6.eq) goto loc_82365DC4;
	// stw r23,80(r11)
	PPC_STORE_U32(ctx.r11.u32 + 80, ctx.r23.u32);
loc_82365DC4:
	// lwz r11,2016(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2016);
	// stw r23,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r23.u32);
	// lwz r3,1356(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1356);
	// bl 0x8244b830
	ctx.lr = 0x82365DD4;
	sub_8244B830(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82366118
	ctx.lr = 0x82365DDC;
	sub_82366118(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82367408
	ctx.lr = 0x82365DE4;
	sub_82367408(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,204(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 204);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82365DF8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// blt cr6,0x82365ec0
	if (ctx.cr6.lt) goto loc_82365EC0;
	// bne cr6,0x82365f90
	if (!ctx.cr6.eq) goto loc_82365F90;
	// lis r11,-31955
	ctx.r11.s64 = -2094202880;
	// lwz r3,30428(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 30428);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82365e18
	if (!ctx.cr6.eq) goto loc_82365E18;
	// bl 0x822599a0
	ctx.lr = 0x82365E18;
	sub_822599A0(ctx, base);
loc_82365E18:
	// lbz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 4);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82365e5c
	if (ctx.cr0.eq) goto loc_82365E5C;
	// lwz r11,204(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 204);
	// lwz r10,48(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r4,r11,27,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// lwz r3,0(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// bl 0x8235c6b8
	ctx.lr = 0x82365E3C;
	sub_8235C6B8(ctx, base);
	// lwz r11,204(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 204);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r4,r11,27,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// bl 0x8235c6b8
	ctx.lr = 0x82365E58;
	sub_8235C6B8(ctx, base);
	// b 0x82365f90
	goto loc_82365F90;
loc_82365E5C:
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// lwz r30,0(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,556(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 556);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82365e8c
	if (ctx.cr6.eq) goto loc_82365E8C;
	// lwz r3,16(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// addi r29,r30,32
	ctx.r29.s64 = ctx.r30.s64 + 32;
	// bl 0x822a4288
	ctx.lr = 0x82365E7C;
	sub_822A4288(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x8257e800
	ctx.lr = 0x82365E88;
	sub_8257E800(ctx, base);
	// stw r23,556(r30)
	PPC_STORE_U32(ctx.r30.u32 + 556, ctx.r23.u32);
loc_82365E8C:
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// lwz r30,8(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r11,556(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 556);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82365f90
	if (ctx.cr6.eq) goto loc_82365F90;
	// lwz r3,16(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// addi r29,r30,32
	ctx.r29.s64 = ctx.r30.s64 + 32;
	// bl 0x822a4288
	ctx.lr = 0x82365EAC;
	sub_822A4288(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x8257e800
	ctx.lr = 0x82365EB8;
	sub_8257E800(ctx, base);
	// stw r23,556(r30)
	PPC_STORE_U32(ctx.r30.u32 + 556, ctx.r23.u32);
	// b 0x82365f90
	goto loc_82365F90;
loc_82365EC0:
	// lis r11,-31955
	ctx.r11.s64 = -2094202880;
	// lwz r3,30428(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 30428);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82365ed4
	if (!ctx.cr6.eq) goto loc_82365ED4;
	// bl 0x822599a0
	ctx.lr = 0x82365ED4;
	sub_822599A0(ctx, base);
loc_82365ED4:
	// lbz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 4);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82365f40
	if (ctx.cr0.eq) goto loc_82365F40;
	// lwz r11,204(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 204);
	// lwz r10,48(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r4,r11,27,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// lwz r3,0(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// bl 0x8235c6b8
	ctx.lr = 0x82365EF8;
	sub_8235C6B8(ctx, base);
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// lwz r30,8(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r11,556(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 556);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82365f18
	if (ctx.cr6.eq) goto loc_82365F18;
	// addi r3,r30,32
	ctx.r3.s64 = ctx.r30.s64 + 32;
	// bl 0x8257e8d8
	ctx.lr = 0x82365F14;
	sub_8257E8D8(ctx, base);
	// stw r22,556(r30)
	PPC_STORE_U32(ctx.r30.u32 + 556, ctx.r22.u32);
loc_82365F18:
	// lwz r11,204(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 204);
	// lwz r10,48(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r4,r11,27,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// lwz r3,16(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// bl 0x8235c6b8
	ctx.lr = 0x82365F34;
	sub_8235C6B8(ctx, base);
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// lwz r30,24(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// b 0x82365f78
	goto loc_82365F78;
loc_82365F40:
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// lwz r30,0(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,556(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 556);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82365f70
	if (ctx.cr6.eq) goto loc_82365F70;
	// lwz r3,16(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// addi r29,r30,32
	ctx.r29.s64 = ctx.r30.s64 + 32;
	// bl 0x822a4288
	ctx.lr = 0x82365F60;
	sub_822A4288(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x8257e800
	ctx.lr = 0x82365F6C;
	sub_8257E800(ctx, base);
	// stw r23,556(r30)
	PPC_STORE_U32(ctx.r30.u32 + 556, ctx.r23.u32);
loc_82365F70:
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// lwz r30,8(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
loc_82365F78:
	// lwz r11,556(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 556);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82365f90
	if (ctx.cr6.eq) goto loc_82365F90;
	// addi r3,r30,32
	ctx.r3.s64 = ctx.r30.s64 + 32;
	// bl 0x8257e8d8
	ctx.lr = 0x82365F8C;
	sub_8257E8D8(ctx, base);
	// stw r22,556(r30)
	PPC_STORE_U32(ctx.r30.u32 + 556, ctx.r22.u32);
loc_82365F90:
	// lwz r30,48(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// b 0x82365fc8
	goto loc_82365FC8;
loc_82365F98:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x824261e8
	ctx.lr = 0x82365FA4;
	sub_824261E8(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,2
	ctx.r4.s64 = 2;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x82445f00
	ctx.lr = 0x82365FB4;
	sub_82445F00(ctx, base);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82365fc4
	if (ctx.cr6.eq) goto loc_82365FC4;
	// bl 0x82241d18
	ctx.lr = 0x82365FC4;
	sub_82241D18(ctx, base);
loc_82365FC4:
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
loc_82365FC8:
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82365f98
	if (!ctx.cr6.eq) goto loc_82365F98;
	// cmpwi cr6,r21,0
	ctx.cr6.compare<int32_t>(ctx.r21.s32, 0, ctx.xer);
	// bne cr6,0x82365fec
	if (!ctx.cr6.eq) goto loc_82365FEC;
	// cmpwi cr6,r20,0
	ctx.cr6.compare<int32_t>(ctx.r20.s32, 0, ctx.xer);
	// bne cr6,0x82365fec
	if (!ctx.cr6.eq) goto loc_82365FEC;
	// lwz r3,1536(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1536);
	// bl 0x8244f028
	ctx.lr = 0x82365FEC;
	sub_8244F028(ctx, base);
loc_82365FEC:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// lfd f30,-128(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -128);
	// lfd f31,-120(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -120);
	// b 0x82fa76a4
	__restgprlr_19(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82365FFC"))) PPC_WEAK_FUNC(sub_82365FFC);
PPC_FUNC_IMPL(__imp__sub_82365FFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82366000"))) PPC_WEAK_FUNC(sub_82366000);
PPC_FUNC_IMPL(__imp__sub_82366000) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa766c
	ctx.lr = 0x82366008;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r27,516(r4)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r4.u32 + 516);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// cmpwi cr6,r27,1
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 1, ctx.xer);
	// beq cr6,0x82366034
	if (ctx.cr6.eq) goto loc_82366034;
	// cmpwi cr6,r27,2
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 2, ctx.xer);
	// beq cr6,0x823660f4
	if (ctx.cr6.eq) goto loc_823660F4;
	// cmpwi cr6,r27,3
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 3, ctx.xer);
	// bne cr6,0x82366054
	if (!ctx.cr6.eq) goto loc_82366054;
loc_82366034:
	// lwz r11,608(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 608);
	// lfs f13,416(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 416);
	ctx.f13.f64 = double(temp.f32);
loc_8236603C:
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// li r28,1
	ctx.r28.s64 = 1;
	// lfs f0,-2340(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -2340);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgt cr6,0x82366054
	if (ctx.cr6.gt) goto loc_82366054;
	// li r28,0
	ctx.r28.s64 = 0;
loc_82366054:
	// li r3,64
	ctx.r3.s64 = 64;
	// bl 0x82691500
	ctx.lr = 0x8236605C;
	sub_82691500(ctx, base);
	// mr. r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// beq 0x82366100
	if (ctx.cr0.eq) goto loc_82366100;
	// lwz r11,160(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 160);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82366080
	if (ctx.cr6.eq) goto loc_82366080;
	// lwz r11,64(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// li r29,1
	ctx.r29.s64 = 1;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x82366084
	if (ctx.cr6.eq) goto loc_82366084;
loc_82366080:
	// li r29,0
	ctx.r29.s64 = 0;
loc_82366084:
	// lis r11,-31955
	ctx.r11.s64 = -2094202880;
	// lwz r3,30428(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 30428);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82366098
	if (!ctx.cr6.eq) goto loc_82366098;
	// bl 0x822599a0
	ctx.lr = 0x82366098;
	sub_822599A0(ctx, base);
loc_82366098:
	// lbz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 4);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x823660d0
	if (!ctx.cr0.eq) goto loc_823660D0;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r30,0(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x824f9968
	ctx.lr = 0x823660B4;
	sub_824F9968(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x823660d0
	if (ctx.cr0.eq) goto loc_823660D0;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x824f9968
	ctx.lr = 0x823660C4;
	sub_824F9968(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// li r7,1
	ctx.r7.s64 = 1;
	// bne 0x823660d4
	if (!ctx.cr0.eq) goto loc_823660D4;
loc_823660D0:
	// li r7,0
	ctx.r7.s64 = 0;
loc_823660D4:
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// addi r5,r31,824
	ctx.r5.s64 = ctx.r31.s64 + 824;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82540d60
	ctx.lr = 0x823660F0;
	sub_82540D60(ctx, base);
	// b 0x82366104
	goto loc_82366104;
loc_823660F4:
	// lwz r11,608(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 608);
	// lfs f13,576(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 576);
	ctx.f13.f64 = double(temp.f32);
	// b 0x8236603c
	goto loc_8236603C;
loc_82366100:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82366104:
	// stw r3,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r3.u32);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82fa76bc
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82366114"))) PPC_WEAK_FUNC(sub_82366114);
PPC_FUNC_IMPL(__imp__sub_82366114) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82366118"))) PPC_WEAK_FUNC(sub_82366118);
PPC_FUNC_IMPL(__imp__sub_82366118) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7670
	ctx.lr = 0x82366120;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,516(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 516);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r4,208(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 208);
	// lwz r3,212(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 212);
	// bl 0x8253a050
	ctx.lr = 0x82366138;
	sub_8253A050(ctx, base);
	// li r28,0
	ctx.r28.s64 = 0;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// stw r28,832(r31)
	PPC_STORE_U32(ctx.r31.u32 + 832, ctx.r28.u32);
	// bne cr6,0x82366230
	if (!ctx.cr6.eq) goto loc_82366230;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// rlwinm. r11,r11,0,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFC;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble 0x8236626c
	if (!ctx.cr0.gt) goto loc_8236626C;
loc_82366164:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwzx r11,r11,r28
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r28.u32);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r10,r11
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// mr r3,r8
	ctx.r3.u64 = ctx.r8.u64;
	// bl 0x824fa600
	ctx.lr = 0x8236618C;
	sub_824FA600(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r8
	ctx.r3.u64 = ctx.r8.u64;
	// bl 0x824fa600
	ctx.lr = 0x8236619C;
	sub_824FA600(ctx, base);
	// lwz r11,160(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 160);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823661d8
	if (ctx.cr6.eq) goto loc_823661D8;
	// lwz r11,64(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x823661d8
	if (!ctx.cr6.eq) goto loc_823661D8;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r29,212(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 212);
	// bl 0x8245e648
	ctx.lr = 0x823661C0;
	sub_8245E648(ctx, base);
	// bl 0x82461500
	ctx.lr = 0x823661C4;
	sub_82461500(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8253a0e8
	ctx.lr = 0x823661D4;
	sub_8253A0E8(ctx, base);
	// b 0x82366208
	goto loc_82366208;
loc_823661D8:
	// lwz r27,212(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 212);
	// bl 0x8245e648
	ctx.lr = 0x823661E0;
	sub_8245E648(ctx, base);
	// bl 0x82461500
	ctx.lr = 0x823661E4;
	sub_82461500(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8245e648
	ctx.lr = 0x823661F0;
	sub_8245E648(ctx, base);
	// bl 0x82461500
	ctx.lr = 0x823661F4;
	sub_82461500(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// bl 0x8253a150
	ctx.lr = 0x82366208;
	sub_8253A150(ctx, base);
loc_82366208:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82366164
	if (ctx.cr6.lt) goto loc_82366164;
	// b 0x8236626c
	goto loc_8236626C;
loc_82366230:
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// bl 0x824fa600
	ctx.lr = 0x82366250;
	sub_824FA600(ctx, base);
	// lwz r30,212(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 212);
	// bl 0x8245e648
	ctx.lr = 0x82366258;
	sub_8245E648(ctx, base);
	// bl 0x82461500
	ctx.lr = 0x8236625C;
	sub_82461500(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8253a0e8
	ctx.lr = 0x8236626C;
	sub_8253A0E8(ctx, base);
loc_8236626C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8236a858
	ctx.lr = 0x82366274;
	sub_8236A858(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82fa76c0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8236627C"))) PPC_WEAK_FUNC(sub_8236627C);
PPC_FUNC_IMPL(__imp__sub_8236627C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82366280"))) PPC_WEAK_FUNC(sub_82366280);
PPC_FUNC_IMPL(__imp__sub_82366280) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lfs f0,1512(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 1512);
	ctx.f0.f64 = double(temp.f32);
	// lwz r10,1536(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1536);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,12(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// lwz r9,0(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r8,16(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	// lwz r9,0(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r8,r9
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// lfs f13,32(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 32);
	ctx.f13.f64 = double(temp.f32);
	// stfsx f0,r11,r10
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, temp.u32);
	// fctiwz f0,f13
	ctx.f0.s64 = (ctx.f13.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f13.f64));
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwa r9,84(r1)
	ctx.r9.s64 = int32_t(PPC_LOAD_U32(ctx.r1.u32 + 84));
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f0,80(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// lwz r11,12(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// stfsx f0,r11,r10
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, temp.u32);
	// lwz r11,12(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r11.u32);
	// bl 0x82365100
	ctx.lr = 0x82366308;
	sub_82365100(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lfs f0,-2340(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -2340);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,648(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 648, temp.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82366328"))) PPC_WEAK_FUNC(sub_82366328);
PPC_FUNC_IMPL(__imp__sub_82366328) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lfs f0,648(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 648);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,160(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 160);
	// fadds f13,f1,f0
	ctx.f13.f64 = double(float(ctx.f1.f64 + ctx.f0.f64));
	// stfs f13,648(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 648, temp.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8236634c
	if (ctx.cr6.eq) goto loc_8236634C;
	// lwz r11,64(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x82366364
	if (ctx.cr6.eq) goto loc_82366364;
loc_8236634C:
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// lwz r11,21120(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 21120);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82366364
	if (!ctx.cr6.eq) goto loc_82366364;
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_82366364:
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// li r3,1
	ctx.r3.s64 = 1;
	// lfs f0,7008(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 7008);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgtlr cr6
	if (ctx.cr6.gt) return;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82366380"))) PPC_WEAK_FUNC(sub_82366380);
PPC_FUNC_IMPL(__imp__sub_82366380) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7670
	ctx.lr = 0x82366388;
	__savegprlr_26(ctx, base);
	// stfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,48(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r11,52(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82366484
	if (ctx.cr6.eq) goto loc_82366484;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// addi r27,r11,31720
	ctx.r27.s64 = ctx.r11.s64 + 31720;
	// lfs f31,-2340(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -2340);
	ctx.f31.f64 = double(temp.f32);
loc_823663C0:
	// lwz r11,36(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 36);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823663f4
	if (ctx.cr6.eq) goto loc_823663F4;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r31,44(r26)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r26.u32 + 44);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// ori r29,r29,1
	ctx.r29.u64 = ctx.r29.u64 | 1;
	// bl 0x824261e8
	ctx.lr = 0x823663E0;
	sub_824261E8(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,596(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 596);
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x823663f8
	if (ctx.cr6.eq) goto loc_823663F8;
loc_823663F4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_823663F8:
	// clrlwi. r10,r29,31
	ctx.r10.u64 = ctx.r29.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// clrlwi r31,r11,24
	ctx.r31.u64 = ctx.r11.u32 & 0xFF;
	// beq 0x82366418
	if (ctx.cr0.eq) goto loc_82366418;
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// rlwinm r29,r29,0,0,30
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0xFFFFFFFE;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82366418
	if (ctx.cr6.eq) goto loc_82366418;
	// bl 0x82241d18
	ctx.lr = 0x82366418;
	sub_82241D18(ctx, base);
loc_82366418:
	// clrlwi. r11,r31,24
	ctx.r11.u64 = ctx.r31.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82366474
	if (ctx.cr0.eq) goto loc_82366474;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x824261e8
	ctx.lr = 0x8236642C;
	sub_824261E8(ctx, base);
	// lwz r11,124(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 124);
	// lwz r31,0(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82366464
	if (ctx.cr6.eq) goto loc_82366464;
	// lwz r11,720(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 720);
	// addi r4,r31,720
	ctx.r4.s64 = ctx.r31.s64 + 720;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82366464
	if (ctx.cr6.eq) goto loc_82366464;
	// addi r6,r31,32
	ctx.r6.s64 = ctx.r31.s64 + 32;
	// lwz r3,708(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 708);
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x825b1360
	ctx.lr = 0x8236645C;
	sub_825B1360(ctx, base);
	// stfs f31,684(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 684, temp.u32);
	// stw r3,736(r31)
	PPC_STORE_U32(ctx.r31.u32 + 736, ctx.r3.u32);
loc_82366464:
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82366474
	if (ctx.cr6.eq) goto loc_82366474;
	// bl 0x82241d18
	ctx.lr = 0x82366474;
	sub_82241D18(ctx, base);
loc_82366474:
	// lwz r11,52(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 52);
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x823663c0
	if (!ctx.cr6.eq) goto loc_823663C0;
loc_82366484:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x82fa76c0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82366490"))) PPC_WEAK_FUNC(sub_82366490);
PPC_FUNC_IMPL(__imp__sub_82366490) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x82366498;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,48(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r11,52(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x823664f0
	if (ctx.cr6.eq) goto loc_823664F0;
	// lis r11,-31968
	ctx.r11.s64 = -2095054848;
	// addi r30,r11,15768
	ctx.r30.s64 = ctx.r11.s64 + 15768;
loc_823664B8:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x824261e8
	ctx.lr = 0x823664C4;
	sub_824261E8(ctx, base);
	// lwz r4,104(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 104);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x824461b8
	ctx.lr = 0x823664D0;
	sub_824461B8(ctx, base);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823664e0
	if (ctx.cr6.eq) goto loc_823664E0;
	// bl 0x82241d18
	ctx.lr = 0x823664E0;
	sub_82241D18(ctx, base);
loc_823664E0:
	// lwz r11,52(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 52);
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x823664b8
	if (!ctx.cr6.eq) goto loc_823664B8;
loc_823664F0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823664F8"))) PPC_WEAK_FUNC(sub_823664F8);
PPC_FUNC_IMPL(__imp__sub_823664F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7658
	ctx.lr = 0x82366500;
	__savegprlr_20(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r20,r3
	ctx.r20.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// addic. r24,r5,8
	ctx.xer.ca = ctx.r5.u32 > 4294967287;
	ctx.r24.s64 = ctx.r5.s64 + 8;
	ctx.cr0.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// beq 0x82366674
	if (ctx.cr0.eq) goto loc_82366674;
	// lbz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r24.u32 + 0);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82366674
	if (ctx.cr0.eq) goto loc_82366674;
	// lwz r11,16(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// li r21,0
	ctx.r21.s64 = 0;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r25,0
	ctx.r25.s64 = 0;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82366674
	if (!ctx.cr6.gt) goto loc_82366674;
	// lis r11,-31955
	ctx.r11.s64 = -2094202880;
	// lis r10,-31955
	ctx.r10.s64 = -2094202880;
	// addi r28,r5,40
	ctx.r28.s64 = ctx.r5.s64 + 40;
	// lis r29,-31958
	ctx.r29.s64 = -2094399488;
	// lis r26,-32227
	ctx.r26.s64 = -2112028672;
	// addi r23,r11,26780
	ctx.r23.s64 = ctx.r11.s64 + 26780;
	// addi r22,r10,26796
	ctx.r22.s64 = ctx.r10.s64 + 26796;
loc_82366564:
	// lis r10,25
	ctx.r10.s64 = 1638400;
	// lwz r11,21292(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 21292);
	// lfs f13,4(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// ori r10,r10,26125
	ctx.r10.u64 = ctx.r10.u64 | 26125;
	// lfs f12,0(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// mullw r11,r11,r10
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// addis r11,r11,15471
	ctx.r11.s64 = ctx.r11.s64 + 1013907456;
	// addi r11,r11,-3233
	ctx.r11.s64 = ctx.r11.s64 + -3233;
	// stw r11,21292(r29)
	PPC_STORE_U32(ctx.r29.u32 + 21292, ctx.r11.u32);
	// clrlwi r11,r11,9
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFFF;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r9,16(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// oris r11,r11,16256
	ctx.r11.u64 = ctx.r11.u64 | 1065353216;
	// lwzx r3,r9,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x824fa600
	ctx.lr = 0x823665AC;
	sub_824FA600(ctx, base);
	// lfs f11,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// lfs f0,-24756(r26)
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + -24756);
	ctx.f0.f64 = double(temp.f32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fsubs f0,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 - ctx.f0.f64));
	// li r10,128
	ctx.r10.s64 = 128;
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// lwz r11,280(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 280);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// addi r3,r11,704
	ctx.r3.s64 = ctx.r11.s64 + 704;
	// lvx128 v0,r31,r10
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r31.u32 + ctx.r10.u32) & ~0xF), VectorMaskL));
	// stvx128 v0,r0,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// fmadds f1,f13,f0,f12
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f0.f64 + ctx.f12.f64));
	// bl 0x82477260
	ctx.lr = 0x823665E4;
	sub_82477260(ctx, base);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x823665fc
	if (ctx.cr6.eq) goto loc_823665FC;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r11,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// b 0x82366600
	goto loc_82366600;
loc_823665FC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82366600:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82366654
	if (ctx.cr6.eq) goto loc_82366654;
	// cmpwi cr6,r21,0
	ctx.cr6.compare<int32_t>(ctx.r21.s32, 0, ctx.xer);
	// bne cr6,0x82366654
	if (!ctx.cr6.eq) goto loc_82366654;
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82366654
	if (!ctx.cr6.eq) goto loc_82366654;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r8,r22
	ctx.r8.u64 = ctx.r22.u64;
	// lwz r10,2020(r20)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r20.u32 + 2020);
	// mr r7,r23
	ctx.r7.u64 = ctx.r23.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r21,1
	ctx.r21.s64 = 1;
	// lwz r6,2124(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 2124);
	// bl 0x8256f3c8
	ctx.lr = 0x82366648;
	sub_8256F3C8(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82570318
	ctx.lr = 0x82366654;
	sub_82570318(ctx, base);
loc_82366654:
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplw cr6,r25,r11
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82366564
	if (ctx.cr6.lt) goto loc_82366564;
loc_82366674:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x82fa76a8
	__restgprlr_20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8236667C"))) PPC_WEAK_FUNC(sub_8236667C);
PPC_FUNC_IMPL(__imp__sub_8236667C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82366680"))) PPC_WEAK_FUNC(sub_82366680);
PPC_FUNC_IMPL(__imp__sub_82366680) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa766c
	ctx.lr = 0x82366688;
	__savegprlr_25(ctx, base);
	// stfd f30,-80(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -80, ctx.f30.u64);
	// stfd f31,-72(r1)
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.f31.u64);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mulli r10,r7,328
	ctx.r10.s64 = ctx.r7.s64 * 328;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// fmr f30,f2
	ctx.f30.f64 = ctx.f2.f64;
	// lfs f0,31512(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 31512);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// mr r25,r8
	ctx.r25.u64 = ctx.r8.u64;
	// addi r11,r11,492
	ctx.r11.s64 = ctx.r11.s64 + 492;
	// blt cr6,0x823666d8
	if (ctx.cr6.lt) goto loc_823666D8;
	// addi r11,r11,164
	ctx.r11.s64 = ctx.r11.s64 + 164;
loc_823666D8:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r26,36(r11)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// bl 0x823690b0
	ctx.lr = 0x823666E4;
	sub_823690B0(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r11,r11,17440
	ctx.r11.s64 = ctx.r11.s64 + 17440;
	// stw r10,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// bl 0x824fdbb0
	ctx.lr = 0x82366704;
	sub_824FDBB0(ctx, base);
	// lwz r11,44(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 44);
	// lwz r10,44(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x82366718
	if (ctx.cr6.eq) goto loc_82366718;
	// stw r26,844(r31)
	PPC_STORE_U32(ctx.r31.u32 + 844, ctx.r26.u32);
loc_82366718:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// addi r11,r11,17464
	ctx.r11.s64 = ctx.r11.s64 + 17464;
	// stw r10,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// bl 0x824fdbb0
	ctx.lr = 0x82366738;
	sub_824FDBB0(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r11,r11,17488
	ctx.r11.s64 = ctx.r11.s64 + 17488;
	// stw r10,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// bl 0x824fdbb0
	ctx.lr = 0x82366758;
	sub_824FDBB0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82475b78
	ctx.lr = 0x82366760;
	sub_82475B78(ctx, base);
	// lwz r11,44(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 44);
	// lwz r10,44(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x823667a8
	if (ctx.cr6.eq) goto loc_823667A8;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823667a8
	if (ctx.cr6.eq) goto loc_823667A8;
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8236679c
	if (!ctx.cr6.eq) goto loc_8236679C;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x824768a0
	ctx.lr = 0x82366794;
	sub_824768A0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x823667a8
	if (!ctx.cr0.eq) goto loc_823667A8;
loc_8236679C:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,692(r31)
	PPC_STORE_U32(ctx.r31.u32 + 692, ctx.r11.u32);
	// stw r11,692(r6)
	PPC_STORE_U32(ctx.r6.u32 + 692, ctx.r11.u32);
loc_823667A8:
	// lwz r11,300(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 300);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823667d4
	if (ctx.cr6.eq) goto loc_823667D4;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// addi r11,r11,17512
	ctx.r11.s64 = ctx.r11.s64 + 17512;
	// stw r10,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// bl 0x824fdbb0
	ctx.lr = 0x823667D4;
	sub_824FDBB0(ctx, base);
loc_823667D4:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82369330
	ctx.lr = 0x823667E0;
	sub_82369330(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// lwz r30,0(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r26,0(r30)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x823f62d0
	ctx.lr = 0x823667F8;
	sub_823F62D0(ctx, base);
	// lwz r11,32(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,292(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 292);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// fmr f2,f30
	ctx.f2.f64 = ctx.f30.f64;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82366824;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82366834
	if (ctx.cr6.eq) goto loc_82366834;
	// bl 0x82241d18
	ctx.lr = 0x82366834;
	sub_82241D18(ctx, base);
loc_82366834:
	// stw r27,592(r29)
	PPC_STORE_U32(ctx.r29.u32 + 592, ctx.r27.u32);
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x824408d0
	ctx.lr = 0x82366854;
	sub_824408D0(ctx, base);
	// lwz r3,4(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82366864
	if (ctx.cr6.eq) goto loc_82366864;
	// bl 0x82241d18
	ctx.lr = 0x82366864;
	sub_82241D18(ctx, base);
loc_82366864:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lfd f30,-80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// lfd f31,-72(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x82fa76bc
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82366874"))) PPC_WEAK_FUNC(sub_82366874);
PPC_FUNC_IMPL(__imp__sub_82366874) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82366878"))) PPC_WEAK_FUNC(sub_82366878);
PPC_FUNC_IMPL(__imp__sub_82366878) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7640
	ctx.lr = 0x82366880;
	__savegprlr_14(ctx, base);
	// stfd f29,-176(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -176, ctx.f29.u64);
	// stfd f30,-168(r1)
	PPC_STORE_U64(ctx.r1.u32 + -168, ctx.f30.u64);
	// stfd f31,-160(r1)
	PPC_STORE_U64(ctx.r1.u32 + -160, ctx.f31.u64);
	// stwu r1,-464(r1)
	ea = -464 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r16,0
	ctx.r16.s64 = 0;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fmr f30,f2
	ctx.f30.f64 = ctx.f2.f64;
	// stw r16,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r16.u32);
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// mr r21,r4
	ctx.r21.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r18,r6
	ctx.r18.u64 = ctx.r6.u64;
	// mr r25,r7
	ctx.r25.u64 = ctx.r7.u64;
	// mr r28,r8
	ctx.r28.u64 = ctx.r8.u64;
	// mr r14,r16
	ctx.r14.u64 = ctx.r16.u64;
	// bl 0x823f62d0
	ctx.lr = 0x823668C4;
	sub_823F62D0(ctx, base);
	// lwz r26,548(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 548);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// li r15,1
	ctx.r15.s64 = 1;
	// fmr f2,f30
	ctx.f2.f64 = ctx.f30.f64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// stw r15,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r15.u32);
	// mr r6,r18
	ctx.r6.u64 = ctx.r18.u64;
	// stw r26,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r26.u32);
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// bl 0x82366680
	ctx.lr = 0x823668F8;
	sub_82366680(ctx, base);
	// lis r27,-32243
	ctx.r27.s64 = -2113077248;
	// cmpwi cr6,r25,11
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 11, ctx.xer);
	// bne cr6,0x82366914
	if (!ctx.cr6.eq) goto loc_82366914;
	// lfs f0,31512(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 31512);
	ctx.f0.f64 = double(temp.f32);
	// mr r11,r15
	ctx.r11.u64 = ctx.r15.u64;
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// bge cr6,0x82366918
	if (!ctx.cr6.lt) goto loc_82366918;
loc_82366914:
	// mr r11,r16
	ctx.r11.u64 = ctx.r16.u64;
loc_82366918:
	// cmpwi cr6,r25,10
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 10, ctx.xer);
	// stw r11,540(r31)
	PPC_STORE_U32(ctx.r31.u32 + 540, ctx.r11.u32);
	// beq cr6,0x8236692c
	if (ctx.cr6.eq) goto loc_8236692C;
	// cmpwi cr6,r25,11
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 11, ctx.xer);
	// bne cr6,0x8236693c
	if (!ctx.cr6.eq) goto loc_8236693C;
loc_8236692C:
	// lfs f0,31512(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 31512);
	ctx.f0.f64 = double(temp.f32);
	// mr r11,r15
	ctx.r11.u64 = ctx.r15.u64;
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// bge cr6,0x82366940
	if (!ctx.cr6.lt) goto loc_82366940;
loc_8236693C:
	// mr r11,r16
	ctx.r11.u64 = ctx.r16.u64;
loc_82366940:
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// stw r11,544(r31)
	PPC_STORE_U32(ctx.r31.u32 + 544, ctx.r11.u32);
	// addi r11,r1,256
	ctx.r11.s64 = ctx.r1.s64 + 256;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r10,r10,17440
	ctx.r10.s64 = ctx.r10.s64 + 17440;
	// stw r11,272(r1)
	PPC_STORE_U32(ctx.r1.u32 + 272, ctx.r11.u32);
	// addi r4,r1,256
	ctx.r4.s64 = ctx.r1.s64 + 256;
	// stw r10,256(r1)
	PPC_STORE_U32(ctx.r1.u32 + 256, ctx.r10.u32);
	// bl 0x824fdbb0
	ctx.lr = 0x82366964;
	sub_824FDBB0(ctx, base);
	// lwz r11,44(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 44);
	// lwz r10,44(r18)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r18.u32 + 44);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x823669bc
	if (ctx.cr6.eq) goto loc_823669BC;
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// addi r11,r11,27984
	ctx.r11.s64 = ctx.r11.s64 + 27984;
	// lfs f1,1296(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 1296);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82475c68
	ctx.lr = 0x82366988;
	sub_82475C68(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x823669bc
	if (!ctx.cr0.eq) goto loc_823669BC;
	// lwz r11,0(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// mulli r10,r25,328
	ctx.r10.s64 = ctx.r25.s64 * 328;
	// lfs f0,31512(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 31512);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r11,r11,492
	ctx.r11.s64 = ctx.r11.s64 + 492;
	// blt cr6,0x823669b0
	if (ctx.cr6.lt) goto loc_823669B0;
	// addi r11,r11,164
	ctx.r11.s64 = ctx.r11.s64 + 164;
loc_823669B0:
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// stw r16,844(r18)
	PPC_STORE_U32(ctx.r18.u32 + 844, ctx.r16.u32);
	// stw r11,848(r18)
	PPC_STORE_U32(ctx.r18.u32 + 848, ctx.r11.u32);
loc_823669BC:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r10,r1,256
	ctx.r10.s64 = ctx.r1.s64 + 256;
	// addi r11,r11,17464
	ctx.r11.s64 = ctx.r11.s64 + 17464;
	// stw r10,272(r1)
	PPC_STORE_U32(ctx.r1.u32 + 272, ctx.r10.u32);
	// addi r4,r1,256
	ctx.r4.s64 = ctx.r1.s64 + 256;
	// stw r11,256(r1)
	PPC_STORE_U32(ctx.r1.u32 + 256, ctx.r11.u32);
	// bl 0x824fdbb0
	ctx.lr = 0x823669DC;
	sub_824FDBB0(ctx, base);
	// lwz r11,0(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// lwz r11,8600(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8600);
	// cmpwi cr6,r11,24
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 24, ctx.xer);
	// stw r11,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r11.u32);
	// blt cr6,0x823669f8
	if (ctx.cr6.lt) goto loc_823669F8;
	// li r30,6
	ctx.r30.s64 = 6;
	// b 0x82366a2c
	goto loc_82366A2C;
loc_823669F8:
	// lis r10,-31967
	ctx.r10.s64 = -2094989312;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r10,19608
	ctx.r10.s64 = ctx.r10.s64 + 19608;
	// lwzx r30,r11,r10
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmpwi cr6,r30,4
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 4, ctx.xer);
	// bne cr6,0x82366a2c
	if (!ctx.cr6.eq) goto loc_82366A2C;
	// li r3,28
	ctx.r3.s64 = 28;
	// bl 0x82365400
	ctx.lr = 0x82366A18;
	sub_82365400(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq 0x82366a2c
	if (ctx.cr0.eq) goto loc_82366A2C;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,164(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 164);
	// bl 0x8227d838
	ctx.lr = 0x82366A2C;
	sub_8227D838(ctx, base);
loc_82366A2C:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,232
	ctx.r3.s64 = ctx.r1.s64 + 232;
	// bl 0x82369330
	ctx.lr = 0x82366A38;
	sub_82369330(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// lwz r24,0(r11)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r23,0(r24)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// bl 0x823f62d0
	ctx.lr = 0x82366A50;
	sub_823F62D0(ctx, base);
	// lwz r11,36(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 36);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lwz r10,556(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 556);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r6,r18
	ctx.r6.u64 = ctx.r18.u64;
	// fmr f2,f30
	ctx.f2.f64 = ctx.f30.f64;
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82366A7C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,236(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 236);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82366a8c
	if (ctx.cr6.eq) goto loc_82366A8C;
	// bl 0x82241d18
	ctx.lr = 0x82366A8C;
	sub_82241D18(ctx, base);
loc_82366A8C:
	// cmpwi cr6,r30,5
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 5, ctx.xer);
	// bne cr6,0x82366aa4
	if (!ctx.cr6.eq) goto loc_82366AA4;
	// lwz r11,508(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 508);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r11,r15
	ctx.r11.u64 = ctx.r15.u64;
	// beq cr6,0x82366aa8
	if (ctx.cr6.eq) goto loc_82366AA8;
loc_82366AA4:
	// mr r11,r16
	ctx.r11.u64 = ctx.r16.u64;
loc_82366AA8:
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// cmpwi cr6,r25,24
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 24, ctx.xer);
	// lfs f29,-2340(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -2340);
	ctx.f29.f64 = double(temp.f32);
	// bge cr6,0x82366ac8
	if (!ctx.cr6.lt) goto loc_82366AC8;
	// stfs f29,612(r29)
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r29.u32 + 612, temp.u32);
	// stw r25,600(r29)
	PPC_STORE_U32(ctx.r29.u32 + 600, ctx.r25.u32);
	// stfs f31,608(r29)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r29.u32 + 608, temp.u32);
	// stw r11,620(r29)
	PPC_STORE_U32(ctx.r29.u32 + 620, ctx.r11.u32);
loc_82366AC8:
	// li r11,24
	ctx.r11.s64 = 24;
	// stfs f31,604(r29)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r29.u32 + 604, temp.u32);
	// stw r25,596(r29)
	PPC_STORE_U32(ctx.r29.u32 + 596, ctx.r25.u32);
	// stw r26,616(r29)
	PPC_STORE_U32(ctx.r29.u32 + 616, ctx.r26.u32);
	// stw r11,592(r29)
	PPC_STORE_U32(ctx.r29.u32 + 592, ctx.r11.u32);
	// lwz r11,516(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 516);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82366b48
	if (!ctx.cr6.eq) goto loc_82366B48;
	// lwz r11,576(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 576);
	// fmr f1,f29
	ctx.f1.f64 = ctx.f29.f64;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82366b18
	if (ctx.cr6.eq) goto loc_82366B18;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82366b10
	if (ctx.cr6.eq) goto loc_82366B10;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82366b24
	if (!ctx.cr6.eq) goto loc_82366B24;
	// li r4,21
	ctx.r4.s64 = 21;
	// b 0x82366b1c
	goto loc_82366B1C;
loc_82366B10:
	// li r4,20
	ctx.r4.s64 = 20;
	// b 0x82366b1c
	goto loc_82366B1C;
loc_82366B18:
	// li r4,19
	ctx.r4.s64 = 19;
loc_82366B1C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x824767b0
	ctx.lr = 0x82366B24;
	sub_824767B0(ctx, base);
loc_82366B24:
	// lfs f0,472(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 472);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// fsubs f13,f0,f1
	ctx.f13.f64 = double(float(ctx.f0.f64 - ctx.f1.f64));
	// stfs f13,472(r29)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r29.u32 + 472, temp.u32);
	// addi r11,r11,9776
	ctx.r11.s64 = ctx.r11.s64 + 9776;
	// lfs f0,132(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x82366b48
	if (!ctx.cr6.lt) goto loc_82366B48;
	// stfs f0,472(r29)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + 472, temp.u32);
loc_82366B48:
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x823f62d0
	ctx.lr = 0x82366B54;
	sub_823F62D0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r6,r18
	ctx.r6.u64 = ctx.r18.u64;
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// mr r8,r26
	ctx.r8.u64 = ctx.r26.u64;
	// bl 0x82367d88
	ctx.lr = 0x82366B70;
	sub_82367D88(ctx, base);
	// cmpwi cr6,r25,6
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 6, ctx.xer);
	// blt cr6,0x82366c08
	if (ctx.cr6.lt) goto loc_82366C08;
	// cmpwi cr6,r25,7
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 7, ctx.xer);
	// ble cr6,0x82366c08
	if (!ctx.cr6.gt) goto loc_82366C08;
	// cmpwi cr6,r25,10
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 10, ctx.xer);
	// beq cr6,0x82366bbc
	if (ctx.cr6.eq) goto loc_82366BBC;
	// cmpwi cr6,r25,11
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 11, ctx.xer);
	// beq cr6,0x82366ba8
	if (ctx.cr6.eq) goto loc_82366BA8;
	// cmpwi cr6,r25,13
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 13, ctx.xer);
	// ble cr6,0x82366c08
	if (!ctx.cr6.gt) goto loc_82366C08;
	// cmpwi cr6,r25,16
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 16, ctx.xer);
	// bgt cr6,0x82366c08
	if (ctx.cr6.gt) goto loc_82366C08;
	// addi r30,r31,2116
	ctx.r30.s64 = ctx.r31.s64 + 2116;
	// b 0x82366bcc
	goto loc_82366BCC;
loc_82366BA8:
	// lwz r11,540(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 540);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82366c08
	if (ctx.cr6.eq) goto loc_82366C08;
	// addi r30,r31,2292
	ctx.r30.s64 = ctx.r31.s64 + 2292;
	// b 0x82366bcc
	goto loc_82366BCC;
loc_82366BBC:
	// lwz r11,544(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 544);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82366c08
	if (ctx.cr6.eq) goto loc_82366C08;
	// addi r30,r31,2204
	ctx.r30.s64 = ctx.r31.s64 + 2204;
loc_82366BCC:
	// lwz r11,44(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 44);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cntlzw r9,r11
	ctx.r9.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r9,29,29,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 29) & 0x4;
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwzx r24,r11,r10
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwzx r4,r9,r10
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// bl 0x823664f8
	ctx.lr = 0x82366BF8;
	sub_823664F8(ctx, base);
	// addi r5,r30,44
	ctx.r5.s64 = ctx.r30.s64 + 44;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823664f8
	ctx.lr = 0x82366C08;
	sub_823664F8(ctx, base);
loc_82366C08:
	// lwz r3,360(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 360);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82366c20
	if (ctx.cr6.eq) goto loc_82366C20;
	// bl 0x828c11f8
	ctx.lr = 0x82366C18;
	sub_828C11F8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// b 0x82366c24
	goto loc_82366C24;
loc_82366C20:
	// lwz r11,364(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 364);
loc_82366C24:
	// li r17,416
	ctx.r17.s64 = 416;
	// li r19,48
	ctx.r19.s64 = 48;
	// li r20,32
	ctx.r20.s64 = 32;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82366d58
	if (ctx.cr6.eq) goto loc_82366D58;
	// li r11,800
	ctx.r11.s64 = 800;
	// lwz r10,784(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 784);
	// li r9,816
	ctx.r9.s64 = 816;
	// addi r8,r1,208
	ctx.r8.s64 = ctx.r1.s64 + 208;
	// addi r7,r1,256
	ctx.r7.s64 = ctx.r1.s64 + 256;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lvx128 v0,r29,r11
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r29.u32 + ctx.r11.u32) & ~0xF), VectorMaskL));
	// lvx128 v13,r29,r9
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r29.u32 + ctx.r9.u32) & ~0xF), VectorMaskL));
	// stvx128 v0,r0,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v13,r0,r7
	_mm_store_si128((__m128i*)(base + ((ctx.r7.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// beq cr6,0x82366cc8
	if (ctx.cr6.eq) goto loc_82366CC8;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// addi r11,r1,208
	ctx.r11.s64 = ctx.r1.s64 + 208;
	// beq cr6,0x82366c74
	if (ctx.cr6.eq) goto loc_82366C74;
	// addi r11,r1,256
	ctx.r11.s64 = ctx.r1.s64 + 256;
loc_82366C74:
	// lwz r30,0(r21)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// lfs f2,31512(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 31512);
	ctx.f2.f64 = double(temp.f32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lvx128 v1,r0,r11
	simd::store_shuffled(ctx.v1, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x82441180
	ctx.lr = 0x82366CA0;
	sub_82441180(ctx, base);
	// addi r11,r1,256
	ctx.r11.s64 = ctx.r1.s64 + 256;
	// li r8,0
	ctx.r8.s64 = 0;
	// fmr f2,f30
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f30.f64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lvx128 v1,r0,r11
	simd::store_shuffled(ctx.v1, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// bl 0x82440e90
	ctx.lr = 0x82366CC4;
	sub_82440E90(ctx, base);
	// b 0x82366cec
	goto loc_82366CEC;
loc_82366CC8:
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r3,0(r21)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// fmr f2,f30
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f30.f64;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// mr r5,r18
	ctx.r5.u64 = ctx.r18.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82440b38
	ctx.lr = 0x82366CEC;
	sub_82440B38(ctx, base);
loc_82366CEC:
	// lwz r11,0(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// li r4,8064
	ctx.r4.s64 = 8064;
	// mr r10,r25
	ctx.r10.u64 = ctx.r25.u64;
	// lwz r9,40(r18)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r18.u32 + 40);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,44(r18)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r18.u32 + 44);
	// lwz r7,40(r29)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + 40);
	// fmr f3,f30
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f30.f64;
	// lwz r6,44(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + 44);
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// lwz r28,192(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 192);
	// lvx128 v3,r11,r17
	simd::store_shuffled(ctx.v3, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r17.u32) & ~0xF), VectorMaskL));
	// lwz r30,8444(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8444);
	// lvx128 v2,r11,r19
	simd::store_shuffled(ctx.v2, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r19.u32) & ~0xF), VectorMaskL));
	// addic r24,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r24.s64 = ctx.r28.s64 + -1;
	// lwz r5,8652(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8652);
	// lvx128 v1,r11,r20
	simd::store_shuffled(ctx.v1, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r20.u32) & ~0xF), VectorMaskL));
	// lfs f1,296(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 296);
	ctx.f1.f64 = double(temp.f32);
	// subfe r28,r24,r28
	temp.u8 = (~ctx.r24.u32 + ctx.r28.u32 < ~ctx.r24.u32) | (~ctx.r24.u32 + ctx.r28.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r28.u64 = ~ctx.r24.u64 + ctx.r28.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// lwz r11,8044(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8044);
	// lvx128 v4,r30,r4
	simd::store_shuffled(ctx.v4, simd::load_and_shuffle(base + ((ctx.r30.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// lwz r24,8040(r30)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8040);
	// stb r28,199(r1)
	PPC_STORE_U8(ctx.r1.u32 + 199, ctx.r28.u8);
	// stw r11,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r11.u32);
	// stw r24,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r24.u32);
	// bl 0x8236d0e8
	ctx.lr = 0x82366D54;
	sub_8236D0E8(ctx, base);
	// b 0x82366db8
	goto loc_82366DB8;
loc_82366D58:
	// lwz r30,0(r21)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// mulli r11,r25,328
	ctx.r11.s64 = ctx.r25.s64 * 328;
	// lfs f0,31512(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 31512);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r11,r11,492
	ctx.r11.s64 = ctx.r11.s64 + 492;
	// addi r28,r11,164
	ctx.r28.s64 = ctx.r11.s64 + 164;
	// bge cr6,0x82366d7c
	if (!ctx.cr6.lt) goto loc_82366D7C;
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
loc_82366D7C:
	// addic. r4,r30,252
	ctx.xer.ca = ctx.r30.u32 > 4294967043;
	ctx.r4.s64 = ctx.r30.s64 + 252;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq 0x82366d94
	if (ctx.cr0.eq) goto loc_82366D94;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r11,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// b 0x82366d98
	goto loc_82366D98;
loc_82366D94:
	// mr r11,r16
	ctx.r11.u64 = ctx.r16.u64;
loc_82366D98:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82366da4
	if (!ctx.cr6.eq) goto loc_82366DA4;
	// addi r4,r28,88
	ctx.r4.s64 = ctx.r28.s64 + 88;
loc_82366DA4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82440770
	ctx.lr = 0x82366DAC;
	sub_82440770(ctx, base);
	// addi r4,r28,92
	ctx.r4.s64 = ctx.r28.s64 + 92;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82440770
	ctx.lr = 0x82366DB8;
	sub_82440770(ctx, base);
loc_82366DB8:
	// lwz r3,360(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 360);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82366dd0
	if (ctx.cr6.eq) goto loc_82366DD0;
	// bl 0x828c11f8
	ctx.lr = 0x82366DC8;
	sub_828C11F8(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// b 0x82366dd4
	goto loc_82366DD4;
loc_82366DD0:
	// lwz r11,364(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 364);
loc_82366DD4:
	// lwz r10,0(r21)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// stw r11,8636(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8636, ctx.r11.u32);
	// lwz r11,44(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 44);
	// lwz r10,516(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 516);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,496(r31)
	PPC_STORE_U32(ctx.r31.u32 + 496, ctx.r11.u32);
	// lwz r10,40(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 40);
	// stfs f29,528(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f29.f64);
	PPC_STORE_U32(ctx.r31.u32 + 528, temp.u32);
	// lwz r11,508(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 508);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// lwz r11,512(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 512);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r10,500(r31)
	PPC_STORE_U32(ctx.r31.u32 + 500, ctx.r10.u32);
	// stw r9,508(r31)
	PPC_STORE_U32(ctx.r31.u32 + 508, ctx.r9.u32);
	// stw r11,512(r31)
	PPC_STORE_U32(ctx.r31.u32 + 512, ctx.r11.u32);
	// bne cr6,0x82366e3c
	if (!ctx.cr6.eq) goto loc_82366E3C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82368458
	ctx.lr = 0x82366E24;
	sub_82368458(ctx, base);
	// cmplw cr6,r3,r18
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r18.u32, ctx.xer);
	// beq cr6,0x82366e3c
	if (ctx.cr6.eq) goto loc_82366E3C;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r15,288(r18)
	PPC_STORE_U32(ctx.r18.u32 + 288, ctx.r15.u32);
	// beq cr6,0x82366e3c
	if (ctx.cr6.eq) goto loc_82366E3C;
	// stw r16,288(r3)
	PPC_STORE_U32(ctx.r3.u32 + 288, ctx.r16.u32);
loc_82366E3C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,44(r18)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r18.u32 + 44);
	// bl 0x8236b410
	ctx.lr = 0x82366E48;
	sub_8236B410(ctx, base);
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x823f62d0
	ctx.lr = 0x82366E54;
	sub_823F62D0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r6,r18
	ctx.r6.u64 = ctx.r18.u64;
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// bl 0x82367c08
	ctx.lr = 0x82366E70;
	sub_82367C08(ctx, base);
	// lwz r11,0(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// mulli r10,r25,328
	ctx.r10.s64 = ctx.r25.s64 * 328;
	// lfs f0,31512(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 31512);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r11,r11,492
	ctx.r11.s64 = ctx.r11.s64 + 492;
	// addi r23,r11,164
	ctx.r23.s64 = ctx.r11.s64 + 164;
	// bge cr6,0x82366e94
	if (!ctx.cr6.lt) goto loc_82366E94;
	// mr r23,r11
	ctx.r23.u64 = ctx.r11.u64;
loc_82366E94:
	// addic. r10,r23,96
	ctx.xer.ca = ctx.r23.u32 > 4294967199;
	ctx.r10.s64 = ctx.r23.s64 + 96;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82366eac
	if (ctx.cr0.eq) goto loc_82366EAC;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addic r9,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// subfe r11,r9,r11
	temp.u8 = (~ctx.r9.u32 + ctx.r11.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r9.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// b 0x82366eb0
	goto loc_82366EB0;
loc_82366EAC:
	// mr r11,r16
	ctx.r11.u64 = ctx.r16.u64;
loc_82366EB0:
	// li r24,128
	ctx.r24.s64 = 128;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82366f08
	if (ctx.cr6.eq) goto loc_82366F08;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r10,r1,256
	ctx.r10.s64 = ctx.r1.s64 + 256;
	// lvx128 v0,r29,r24
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r29.u32 + ctx.r24.u32) & ~0xF), VectorMaskL));
	// lwz r9,20(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// lis r8,-31955
	ctx.r8.s64 = -2094202880;
	// lis r7,-31955
	ctx.r7.s64 = -2094202880;
	// addi r8,r8,26796
	ctx.r8.s64 = ctx.r8.s64 + 26796;
	// stw r11,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r11.u32);
	// stvx128 v0,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lwz r11,76(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 76);
	// addi r7,r7,26780
	ctx.r7.s64 = ctx.r7.s64 + 26780;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,256
	ctx.r4.s64 = ctx.r1.s64 + 256;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// lwz r6,2124(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2124);
	// bl 0x8256f3c8
	ctx.lr = 0x82366EFC;
	sub_8256F3C8(ctx, base);
	// stw r3,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r3.u32);
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x82570318
	ctx.lr = 0x82366F08;
	sub_82570318(ctx, base);
loc_82366F08:
	// lwz r10,48(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// lis r11,-31968
	ctx.r11.s64 = -2095054848;
	// lwz r9,52(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// lis r22,-32227
	ctx.r22.s64 = -2112028672;
	// addi r27,r11,15768
	ctx.r27.s64 = ctx.r11.s64 + 15768;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82366fdc
	if (ctx.cr6.eq) goto loc_82366FDC;
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// lfs f0,12(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,25
	ctx.r11.s64 = 1638400;
	// lfs f13,16(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,-24756(r22)
	temp.u32 = PPC_LOAD_U32(ctx.r22.u32 + -24756);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// ori r9,r11,26125
	ctx.r9.u64 = ctx.r11.u64 | 26125;
	// li r3,68
	ctx.r3.s64 = 68;
	// lwz r11,21292(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 21292);
	// mullw r11,r11,r9
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r9.s32);
	// addis r11,r11,15471
	ctx.r11.s64 = ctx.r11.s64 + 1013907456;
	// addi r11,r11,-3233
	ctx.r11.s64 = ctx.r11.s64 + -3233;
	// stw r11,21292(r10)
	PPC_STORE_U32(ctx.r10.u32 + 21292, ctx.r11.u32);
	// clrlwi r9,r11,9
	ctx.r9.u64 = ctx.r11.u32 & 0x7FFFFF;
	// oris r11,r9,16256
	ctx.r11.u64 = ctx.r9.u64 | 1065353216;
	// stw r11,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r11.u32);
	// lfs f11,208(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f12,f11,f12
	ctx.f12.f64 = double(float(ctx.f11.f64 - ctx.f12.f64));
	// fmadds f30,f13,f12,f0
	ctx.f30.f64 = double(float(ctx.f13.f64 * ctx.f12.f64 + ctx.f0.f64));
	// bl 0x822ec438
	ctx.lr = 0x82366F74;
	sub_822EC438(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82366fd0
	if (ctx.cr0.eq) goto loc_82366FD0;
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// lfs f0,24(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,20(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// li r11,-1
	ctx.r11.s64 = -1;
	// addi r10,r10,-12208
	ctx.r10.s64 = ctx.r10.s64 + -12208;
	// stw r16,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r16.u32);
	// stw r16,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r16.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r16,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r16.u32);
	// stw r16,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r16.u32);
	// stw r16,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r16.u32);
	// stfs f13,36(r3)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r3.u32 + 36, temp.u32);
	// stfs f0,40(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 40, temp.u32);
	// stw r11,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r11.u32);
	// stfs f30,44(r3)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r3.u32 + 44, temp.u32);
	// stw r11,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r11.u32);
	// stw r15,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r15.u32);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r16,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, ctx.r16.u32);
	// stw r31,64(r3)
	PPC_STORE_U32(ctx.r3.u32 + 64, ctx.r31.u32);
	// b 0x82366fd4
	goto loc_82366FD4;
loc_82366FD0:
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
loc_82366FD4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8234aaf8
	ctx.lr = 0x82366FDC;
	sub_8234AAF8(ctx, base);
loc_82366FDC:
	// lwz r28,48(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x823670b8
	if (ctx.cr6.eq) goto loc_823670B8;
	// lis r11,-31968
	ctx.r11.s64 = -2095054848;
	// addi r26,r11,20536
	ctx.r26.s64 = ctx.r11.s64 + 20536;
loc_82366FF4:
	// lwz r11,36(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 36);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82367028
	if (ctx.cr6.eq) goto loc_82367028;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r30,44(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 44);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// ori r14,r14,1
	ctx.r14.u64 = ctx.r14.u64 | 1;
	// bl 0x824261e8
	ctx.lr = 0x82367014;
	sub_824261E8(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,596(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 596);
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// mr r11,r15
	ctx.r11.u64 = ctx.r15.u64;
	// beq cr6,0x8236702c
	if (ctx.cr6.eq) goto loc_8236702C;
loc_82367028:
	// mr r11,r16
	ctx.r11.u64 = ctx.r16.u64;
loc_8236702C:
	// clrlwi. r10,r14,31
	ctx.r10.u64 = ctx.r14.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// clrlwi r30,r11,24
	ctx.r30.u64 = ctx.r11.u32 & 0xFF;
	// beq 0x8236704c
	if (ctx.cr0.eq) goto loc_8236704C;
	// lwz r3,244(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	// rlwinm r14,r14,0,0,30
	ctx.r14.u64 = __builtin_rotateleft64(ctx.r14.u32 | (ctx.r14.u64 << 32), 0) & 0xFFFFFFFE;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8236704c
	if (ctx.cr6.eq) goto loc_8236704C;
	// bl 0x82241d18
	ctx.lr = 0x8236704C;
	sub_82241D18(ctx, base);
loc_8236704C:
	// clrlwi. r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823670a4
	if (ctx.cr0.eq) goto loc_823670A4;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,248
	ctx.r3.s64 = ctx.r1.s64 + 248;
	// bl 0x824261e8
	ctx.lr = 0x82367060;
	sub_824261E8(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r25,11
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 11, ctx.xer);
	// bgt cr6,0x823672cc
	if (ctx.cr6.gt) goto loc_823672CC;
	// cmpwi cr6,r25,10
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 10, ctx.xer);
	// bge cr6,0x823672c0
	if (!ctx.cr6.lt) goto loc_823672C0;
	// cmplwi cr6,r25,1
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 1, ctx.xer);
	// blt cr6,0x823672e0
	if (ctx.cr6.lt) goto loc_823672E0;
	// cmplwi cr6,r25,8
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 8, ctx.xer);
	// blt cr6,0x8236708c
	if (ctx.cr6.lt) goto loc_8236708C;
	// cmplwi cr6,r25,9
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 9, ctx.xer);
	// bne cr6,0x82367094
	if (!ctx.cr6.eq) goto loc_82367094;
loc_8236708C:
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
loc_82367090:
	// bl 0x824461b8
	ctx.lr = 0x82367094;
	sub_824461B8(ctx, base);
loc_82367094:
	// lwz r3,252(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 252);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823670a4
	if (ctx.cr6.eq) goto loc_823670A4;
	// bl 0x82241d18
	ctx.lr = 0x823670A4;
	sub_82241D18(ctx, base);
loc_823670A4:
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// addi r28,r28,8
	ctx.r28.s64 = ctx.r28.s64 + 8;
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82366ff4
	if (!ctx.cr6.eq) goto loc_82366FF4;
	// lwz r26,548(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 548);
loc_823670B8:
	// lwz r11,472(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 472);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x823670f4
	if (!ctx.cr6.eq) goto loc_823670F4;
	// lwz r10,2584(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2584);
	// lwz r11,36(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 36);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x823670f4
	if (ctx.cr6.lt) goto loc_823670F4;
	// li r3,24
	ctx.r3.s64 = 24;
	// bl 0x82365400
	ctx.lr = 0x823670DC;
	sub_82365400(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq 0x823670f0
	if (ctx.cr0.eq) goto loc_823670F0;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,164(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 164);
	// bl 0x8227d838
	ctx.lr = 0x823670F0;
	sub_8227D838(ctx, base);
loc_823670F0:
	// stw r15,472(r31)
	PPC_STORE_U32(ctx.r31.u32 + 472, ctx.r15.u32);
loc_823670F4:
	// lwz r11,468(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 468);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82367114
	if (!ctx.cr6.eq) goto loc_82367114;
	// lwz r11,512(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 512);
	// lwz r10,448(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 448);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x82367114
	if (!ctx.cr6.gt) goto loc_82367114;
	// stw r15,468(r31)
	PPC_STORE_U32(ctx.r31.u32 + 468, ctx.r15.u32);
loc_82367114:
	// lwz r11,516(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 516);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82367130
	if (!ctx.cr6.eq) goto loc_82367130;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,164(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 164);
	// addi r4,r23,100
	ctx.r4.s64 = ctx.r23.s64 + 100;
	// bl 0x8227d838
	ctx.lr = 0x82367130;
	sub_8227D838(ctx, base);
loc_82367130:
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x82475b78
	ctx.lr = 0x82367138;
	sub_82475B78(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8236719c
	if (ctx.cr0.eq) goto loc_8236719C;
	// lwz r11,832(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 832);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8236719c
	if (ctx.cr6.eq) goto loc_8236719C;
	// lwz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82367174
	if (ctx.cr6.eq) goto loc_82367174;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82365400
	ctx.lr = 0x82367160;
	sub_82365400(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq 0x82367174
	if (ctx.cr0.eq) goto loc_82367174;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,164(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 164);
	// bl 0x8227d838
	ctx.lr = 0x82367174;
	sub_8227D838(ctx, base);
loc_82367174:
	// lwz r11,36(r18)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r18.u32 + 36);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8236719c
	if (ctx.cr6.eq) goto loc_8236719C;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x82365400
	ctx.lr = 0x82367188;
	sub_82365400(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq 0x8236719c
	if (ctx.cr0.eq) goto loc_8236719C;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,164(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 164);
	// bl 0x8227d838
	ctx.lr = 0x8236719C;
	sub_8227D838(ctx, base);
loc_8236719C:
	// lwz r11,616(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 616);
	// lwz r3,1640(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1640);
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// stw r4,616(r31)
	PPC_STORE_U32(ctx.r31.u32 + 616, ctx.r4.u32);
	// bl 0x82447b58
	ctx.lr = 0x823671B0;
	sub_82447B58(ctx, base);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823672e8
	ctx.lr = 0x823671BC;
	sub_823672E8(ctx, base);
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// lwz r31,1536(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1536);
	// bl 0x823f62d0
	ctx.lr = 0x823671CC;
	sub_823F62D0(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r10,16
	ctx.r10.s64 = 16;
	// lwz r9,36(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 36);
	// li r8,64
	ctx.r8.s64 = 64;
	// addi r11,r11,1392
	ctx.r11.s64 = ctx.r11.s64 + 1392;
	// addic r7,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r7.s64 = ctx.r9.s64 + -1;
	// stw r25,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r25.u32);
	// lwz r6,0(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lvx128 v0,r6,r20
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r6.u32 + ctx.r20.u32) & ~0xF), VectorMaskL));
	// stvx128 v0,r11,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lvx128 v0,r10,r19
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r10.u32 + ctx.r19.u32) & ~0xF), VectorMaskL));
	// lwz r10,116(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 116);
	// stvx128 v0,r11,r20
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r20.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lwz r6,0(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lvx128 v0,r6,r17
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r6.u32 + ctx.r17.u32) & ~0xF), VectorMaskL));
	// addi r6,r10,1
	ctx.r6.s64 = ctx.r10.s64 + 1;
	// stvx128 v0,r11,r19
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r19.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// subfe r10,r7,r9
	temp.u8 = (~ctx.r7.u32 + ctx.r9.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r7.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// lvx128 v0,r29,r24
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r29.u32 + ctx.r24.u32) & ~0xF), VectorMaskL));
	// stw r26,80(r11)
	PPC_STORE_U32(ctx.r11.u32 + 80, ctx.r26.u32);
	// stfs f31,84(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 84, temp.u32);
	// stvx128 v0,r11,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lwz r9,44(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 44);
	// stw r9,88(r11)
	PPC_STORE_U32(ctx.r11.u32 + 88, ctx.r9.u32);
	// lwz r9,40(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 40);
	// stw r9,92(r11)
	PPC_STORE_U32(ctx.r11.u32 + 92, ctx.r9.u32);
	// stw r10,96(r11)
	PPC_STORE_U32(ctx.r11.u32 + 96, ctx.r10.u32);
	// stw r6,116(r11)
	PPC_STORE_U32(ctx.r11.u32 + 116, ctx.r6.u32);
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82367250
	if (ctx.cr6.eq) goto loc_82367250;
	// bl 0x82241d18
	ctx.lr = 0x82367250;
	sub_82241D18(ctx, base);
loc_82367250:
	// lwz r11,224(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	// cmpwi cr6,r11,11
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 11, ctx.xer);
	// bne cr6,0x82367294
	if (!ctx.cr6.eq) goto loc_82367294;
	// lwz r11,0(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// addi r4,r11,8408
	ctx.r4.s64 = ctx.r11.s64 + 8408;
	// lwz r10,8408(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8408);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82367294
	if (ctx.cr6.eq) goto loc_82367294;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// lfs f1,-24756(r22)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r22.u32 + -24756);
	ctx.f1.f64 = double(temp.f32);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r5,r11,80
	ctx.r5.s64 = ctx.r11.s64 + 80;
	// lwz r3,76(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// bl 0x8255d160
	ctx.lr = 0x82367294;
	sub_8255D160(ctx, base);
loc_82367294:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82365678
	ctx.lr = 0x8236729C;
	sub_82365678(ctx, base);
	// lwz r3,4(r21)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r21.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823672ac
	if (ctx.cr6.eq) goto loc_823672AC;
	// bl 0x82241d18
	ctx.lr = 0x823672AC;
	sub_82241D18(ctx, base);
loc_823672AC:
	// addi r1,r1,464
	ctx.r1.s64 = ctx.r1.s64 + 464;
	// lfd f29,-176(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -176);
	// lfd f30,-168(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -168);
	// lfd f31,-160(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -160);
	// b 0x82fa7690
	__restgprlr_14(ctx, base);
	return;
loc_823672C0:
	// lfs f0,912(r26)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 912);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,604(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 604, temp.u32);
	// b 0x823672e0
	goto loc_823672E0;
loc_823672CC:
	// cmpwi cr6,r25,12
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 12, ctx.xer);
	// beq cr6,0x8236708c
	if (ctx.cr6.eq) goto loc_8236708C;
	// ble cr6,0x82367094
	if (!ctx.cr6.gt) goto loc_82367094;
	// cmpwi cr6,r25,16
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 16, ctx.xer);
	// bgt cr6,0x82367094
	if (ctx.cr6.gt) goto loc_82367094;
loc_823672E0:
	// li r4,2
	ctx.r4.s64 = 2;
	// b 0x82367090
	goto loc_82367090;
}

__attribute__((alias("__imp__sub_823672E8"))) PPC_WEAK_FUNC(sub_823672E8);
PPC_FUNC_IMPL(__imp__sub_823672E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r4,4
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 4, ctx.xer);
	// beq cr6,0x8236739c
	if (ctx.cr6.eq) goto loc_8236739C;
	// cmpwi cr6,r4,5
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 5, ctx.xer);
	// ble cr6,0x82367374
	if (!ctx.cr6.gt) goto loc_82367374;
	// cmpwi cr6,r4,7
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 7, ctx.xer);
	// ble cr6,0x8236737c
	if (!ctx.cr6.gt) goto loc_8236737C;
	// cmpwi cr6,r4,11
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 11, ctx.xer);
	// bne cr6,0x82367374
	if (!ctx.cr6.eq) goto loc_82367374;
	// lwz r11,540(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 540);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823673f0
	if (ctx.cr6.eq) goto loc_823673F0;
	// lwz r11,612(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 612);
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bne cr6,0x823673f0
	if (!ctx.cr6.eq) goto loc_823673F0;
	// lwz r11,740(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 740);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823673f0
	if (ctx.cr6.eq) goto loc_823673F0;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r9,2492(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2492);
	// lis r10,-31955
	ctx.r10.s64 = -2094202880;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lis r8,-31955
	ctx.r8.s64 = -2094202880;
	// addi r6,r10,26796
	ctx.r6.s64 = ctx.r10.s64 + 26796;
	// addi r5,r8,26780
	ctx.r5.s64 = ctx.r8.s64 + 26780;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,0(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// bl 0x8256f138
	ctx.lr = 0x82367368;
	sub_8256F138(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82570318
	ctx.lr = 0x82367374;
	sub_82570318(ctx, base);
loc_82367374:
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x823673ec
	goto loc_823673EC;
loc_8236737C:
	// lwz r11,612(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 612);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x823673f0
	if (!ctx.cr6.eq) goto loc_823673F0;
	// lwz r11,736(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 736);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823673f0
	if (ctx.cr6.eq) goto loc_823673F0;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// b 0x823673b4
	goto loc_823673B4;
loc_8236739C:
	// lwz r11,732(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 732);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,612(r31)
	PPC_STORE_U32(ctx.r31.u32 + 612, ctx.r10.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823673f0
	if (ctx.cr6.eq) goto loc_823673F0;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
loc_823673B4:
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lis r10,-31955
	ctx.r10.s64 = -2094202880;
	// lwz r9,2492(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2492);
	// lis r8,-31955
	ctx.r8.s64 = -2094202880;
	// addi r6,r10,26796
	ctx.r6.s64 = ctx.r10.s64 + 26796;
	// addi r5,r8,26780
	ctx.r5.s64 = ctx.r8.s64 + 26780;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,0(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// bl 0x8256f138
	ctx.lr = 0x823673D8;
	sub_8256F138(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82570318
	ctx.lr = 0x823673E4;
	sub_82570318(ctx, base);
	// lwz r11,612(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 612);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_823673EC:
	// stw r11,612(r31)
	PPC_STORE_U32(ctx.r31.u32 + 612, ctx.r11.u32);
loc_823673F0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82367404"))) PPC_WEAK_FUNC(sub_82367404);
PPC_FUNC_IMPL(__imp__sub_82367404) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82367408"))) PPC_WEAK_FUNC(sub_82367408);
PPC_FUNC_IMPL(__imp__sub_82367408) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7674
	ctx.lr = 0x82367410;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r27,0
	ctx.r27.s64 = 0;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// rlwinm. r10,r10,0,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFC;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble 0x82367504
	if (!ctx.cr0.gt) goto loc_82367504;
	// li r30,0
	ctx.r30.s64 = 0;
loc_82367438:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// li r31,0
	ctx.r31.s64 = 0;
	// lwzx r9,r30,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r10.u32);
	// lwz r8,16(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	// lwz r9,0(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r8,r9
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// lwz r9,8(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// ble cr6,0x823674e4
	if (!ctx.cr6.gt) goto loc_823674E4;
loc_82367460:
	// lwzx r11,r30,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r10.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// bl 0x824fa600
	ctx.lr = 0x8236747C;
	sub_824FA600(ctx, base);
	// lwz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823674b8
	if (ctx.cr6.eq) goto loc_823674B8;
	// lwz r29,116(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x823674b8
	if (ctx.cr6.eq) goto loc_823674B8;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82920500
	ctx.lr = 0x8236749C;
	sub_82920500(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823674b8
	if (ctx.cr0.eq) goto loc_823674B8;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r28,2588
	ctx.r3.s64 = ctx.r28.s64 + 2588;
	// bl 0x8244eab0
	ctx.lr = 0x823674B8;
	sub_8244EAB0(ctx, base);
loc_823674B8:
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwzx r9,r30,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r10.u32);
	// lwz r8,16(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	// lwz r9,0(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r8,r9
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// lwz r9,8(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// cmplw cr6,r31,r9
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82367460
	if (ctx.cr6.lt) goto loc_82367460;
loc_823674E4:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// srawi r10,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 2;
	// cmpw cr6,r27,r10
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82367438
	if (ctx.cr6.lt) goto loc_82367438;
loc_82367504:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8236750C"))) PPC_WEAK_FUNC(sub_8236750C);
PPC_FUNC_IMPL(__imp__sub_8236750C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82367510"))) PPC_WEAK_FUNC(sub_82367510);
PPC_FUNC_IMPL(__imp__sub_82367510) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7674
	ctx.lr = 0x82367518;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,160(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 160);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82367538
	if (ctx.cr6.eq) goto loc_82367538;
	// lwz r11,64(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x8236763c
	if (ctx.cr6.eq) goto loc_8236763C;
loc_82367538:
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// lwz r11,21120(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 21120);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8236763c
	if (!ctx.cr6.eq) goto loc_8236763C;
	// lwz r11,8(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// li r28,0
	ctx.r28.s64 = 0;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// rlwinm. r10,r10,0,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFC;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble 0x8236763c
	if (!ctx.cr0.gt) goto loc_8236763C;
	// li r30,0
	ctx.r30.s64 = 0;
loc_82367568:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// li r31,0
	ctx.r31.s64 = 0;
	// lwzx r9,r30,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r10.u32);
	// lwz r8,16(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	// lwz r9,0(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r8,r9
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// lwz r9,8(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// ble cr6,0x8236761c
	if (!ctx.cr6.gt) goto loc_8236761C;
loc_82367590:
	// lwzx r11,r30,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r10.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// bl 0x824fa600
	ctx.lr = 0x823675AC;
	sub_824FA600(ctx, base);
	// lwz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823675f0
	if (ctx.cr6.eq) goto loc_823675F0;
	// lwz r29,116(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x823675f0
	if (ctx.cr6.eq) goto loc_823675F0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82920500
	ctx.lr = 0x823675CC;
	sub_82920500(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823675f0
	if (ctx.cr0.eq) goto loc_823675F0;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r27,2588
	ctx.r3.s64 = ctx.r27.s64 + 2588;
	// bl 0x8244ec20
	ctx.lr = 0x823675E8;
	sub_8244EC20(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x829206c8
	ctx.lr = 0x823675F0;
	sub_829206C8(ctx, base);
loc_823675F0:
	// lwz r11,8(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwzx r9,r30,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r10.u32);
	// lwz r8,16(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	// lwz r9,0(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r8,r9
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// lwz r9,8(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// cmplw cr6,r31,r9
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82367590
	if (ctx.cr6.lt) goto loc_82367590;
loc_8236761C:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// srawi r10,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 2;
	// cmpw cr6,r28,r10
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82367568
	if (ctx.cr6.lt) goto loc_82367568;
loc_8236763C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82367644"))) PPC_WEAK_FUNC(sub_82367644);
PPC_FUNC_IMPL(__imp__sub_82367644) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82367648"))) PPC_WEAK_FUNC(sub_82367648);
PPC_FUNC_IMPL(__imp__sub_82367648) {
	PPC_FUNC_PROLOGUE();
	// li r10,2
	ctx.r10.s64 = 2;
	// cntlzw r11,r4
	ctx.r11.u64 = ctx.r4.u32 == 0 ? 32 : __builtin_clz(ctx.r4.u32);
	// addi r9,r3,2588
	ctx.r9.s64 = ctx.r3.s64 + 2588;
	// rlwinm r7,r11,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// li r11,0
	ctx.r11.s64 = 0;
	// rlwinm r6,r4,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82367664:
	// add r10,r6,r11
	ctx.r10.u64 = ctx.r6.u64 + ctx.r11.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// mulli r10,r10,152
	ctx.r10.s64 = ctx.r10.s64 * 152;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// addi r8,r10,80
	ctx.r8.s64 = ctx.r10.s64 + 80;
	// lwz r8,80(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 80);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// stw r8,80(r10)
	PPC_STORE_U32(ctx.r10.u32 + 80, ctx.r8.u32);
	// bdnz 0x82367664
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82367664;
	// li r11,2
	ctx.r11.s64 = 2;
	// li r10,0
	ctx.r10.s64 = 0;
	// rlwinm r7,r7,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_82367698:
	// add r11,r7,r10
	ctx.r11.u64 = ctx.r7.u64 + ctx.r10.u64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// mulli r11,r11,152
	ctx.r11.s64 = ctx.r11.s64 * 152;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r8,r11,76
	ctx.r8.s64 = ctx.r11.s64 + 76;
	// lwz r8,76(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// stw r8,76(r11)
	PPC_STORE_U32(ctx.r11.u32 + 76, ctx.r8.u32);
	// bdnz 0x82367698
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82367698;
	// lwz r11,512(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 512);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82367728
	if (!ctx.cr6.eq) goto loc_82367728;
	// li r11,2
	ctx.r11.s64 = 2;
	// li r10,0
	ctx.r10.s64 = 0;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_823676D4:
	// add r11,r6,r10
	ctx.r11.u64 = ctx.r6.u64 + ctx.r10.u64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// mulli r11,r11,152
	ctx.r11.s64 = ctx.r11.s64 * 152;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r8,r11,24
	ctx.r8.s64 = ctx.r11.s64 + 24;
	// lwz r8,24(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// stw r8,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r8.u32);
	// bdnz 0x823676d4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823676D4;
	// li r11,2
	ctx.r11.s64 = 2;
	// li r10,0
	ctx.r10.s64 = 0;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_82367704:
	// add r11,r7,r10
	ctx.r11.u64 = ctx.r7.u64 + ctx.r10.u64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// mulli r11,r11,152
	ctx.r11.s64 = ctx.r11.s64 * 152;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r8,r11,28
	ctx.r8.s64 = ctx.r11.s64 + 28;
	// lwz r8,28(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// stw r8,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r8.u32);
	// bdnz 0x82367704
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82367704;
loc_82367728:
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r8,r4,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwzx r10,r10,r8
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	// lwz r9,16(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r9,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// blelr cr6
	if (!ctx.cr6.gt) return;
loc_82367758:
	// add r9,r6,r11
	ctx.r9.u64 = ctx.r6.u64 + ctx.r11.u64;
	// lwz r10,512(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 512);
	// mulli r9,r9,152
	ctx.r9.s64 = ctx.r9.s64 * 152;
	// add r9,r9,r3
	ctx.r9.u64 = ctx.r9.u64 + ctx.r3.u64;
	// lwz r7,2592(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 2592);
	// cmplw cr6,r10,r7
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r7.u32, ctx.xer);
	// ble cr6,0x82367778
	if (!ctx.cr6.gt) goto loc_82367778;
	// stw r10,2592(r9)
	PPC_STORE_U32(ctx.r9.u32 + 2592, ctx.r10.u32);
loc_82367778:
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwzx r10,r10,r8
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	// lwz r9,16(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r9,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82367758
	if (ctx.cr6.lt) goto loc_82367758;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823677A8"))) PPC_WEAK_FUNC(sub_823677A8);
PPC_FUNC_IMPL(__imp__sub_823677A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7670
	ctx.lr = 0x823677B0;
	__savegprlr_26(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x823687e0
	ctx.lr = 0x823677BC;
	sub_823687E0(ctx, base);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cntlzw r9,r3
	ctx.r9.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// lis r10,-31955
	ctx.r10.s64 = -2094202880;
	// rlwinm r29,r9,27,31,31
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// rlwinm r27,r3,2,0,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r29,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,30428(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 30428);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwzx r10,r27,r9
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r9.u32);
	// lwzx r9,r8,r9
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// lwz r8,16(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// lwz r7,16(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,0(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// rlwinm r7,r7,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r8,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// lwzx r9,r7,r9
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r9.u32);
	// lfs f0,32(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,32(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 32);
	ctx.f13.f64 = double(temp.f32);
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f0.f64));
	// fctiwz f13,f13
	ctx.f13.s64 = (ctx.f13.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f13.f64));
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// stfd f13,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f13.u64);
	// lwz r26,84(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r28,92(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// bne cr6,0x82367838
	if (!ctx.cr6.eq) goto loc_82367838;
	// bl 0x822599a0
	ctx.lr = 0x82367834;
	sub_822599A0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_82367838:
	// li r10,2
	ctx.r10.s64 = 2;
	// lbz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 4);
	// addi r7,r30,2588
	ctx.r7.s64 = ctx.r30.s64 + 2588;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// rlwinm r5,r31,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// beq 0x823678b4
	if (ctx.cr0.eq) goto loc_823678B4;
loc_82367858:
	// add r10,r5,r11
	ctx.r10.u64 = ctx.r5.u64 + ctx.r11.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// mulli r10,r10,152
	ctx.r10.s64 = ctx.r10.s64 * 152;
	// add r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 + ctx.r7.u64;
	// addi r9,r10,60
	ctx.r9.s64 = ctx.r10.s64 + 60;
	// lwz r9,60(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 60);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stw r9,60(r10)
	PPC_STORE_U32(ctx.r10.u32 + 60, ctx.r9.u32);
	// bdnz 0x82367858
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82367858;
	// li r11,2
	ctx.r11.s64 = 2;
	// li r10,0
	ctx.r10.s64 = 0;
	// rlwinm r4,r29,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0xFFFFFFFE;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_8236788C:
	// add r11,r4,r10
	ctx.r11.u64 = ctx.r4.u64 + ctx.r10.u64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// mulli r11,r11,152
	ctx.r11.s64 = ctx.r11.s64 * 152;
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// addi r9,r11,56
	ctx.r9.s64 = ctx.r11.s64 + 56;
	// lwz r9,56(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stw r9,56(r11)
	PPC_STORE_U32(ctx.r11.u32 + 56, ctx.r9.u32);
	// bdnz 0x8236788c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8236788C;
	// b 0x8236790c
	goto loc_8236790C;
loc_823678B4:
	// add r10,r5,r11
	ctx.r10.u64 = ctx.r5.u64 + ctx.r11.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// mulli r10,r10,152
	ctx.r10.s64 = ctx.r10.s64 * 152;
	// add r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 + ctx.r7.u64;
	// addi r9,r10,68
	ctx.r9.s64 = ctx.r10.s64 + 68;
	// lwz r9,68(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 68);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stw r9,68(r10)
	PPC_STORE_U32(ctx.r10.u32 + 68, ctx.r9.u32);
	// bdnz 0x823678b4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823678B4;
	// li r11,2
	ctx.r11.s64 = 2;
	// li r10,0
	ctx.r10.s64 = 0;
	// rlwinm r4,r29,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0xFFFFFFFE;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_823678E8:
	// add r11,r4,r10
	ctx.r11.u64 = ctx.r4.u64 + ctx.r10.u64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// mulli r11,r11,152
	ctx.r11.s64 = ctx.r11.s64 * 152;
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// addi r9,r11,64
	ctx.r9.s64 = ctx.r11.s64 + 64;
	// lwz r9,64(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stw r9,64(r11)
	PPC_STORE_U32(ctx.r11.u32 + 64, ctx.r9.u32);
	// bdnz 0x823678e8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823678E8;
loc_8236790C:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x82367944
	if (!ctx.cr6.eq) goto loc_82367944;
	// li r11,2
	ctx.r11.s64 = 2;
	// li r10,0
	ctx.r10.s64 = 0;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_82367920:
	// add r11,r5,r10
	ctx.r11.u64 = ctx.r5.u64 + ctx.r10.u64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// mulli r11,r11,152
	ctx.r11.s64 = ctx.r11.s64 * 152;
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// addi r9,r11,44
	ctx.r9.s64 = ctx.r11.s64 + 44;
	// lwz r9,44(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stw r9,44(r11)
	PPC_STORE_U32(ctx.r11.u32 + 44, ctx.r9.u32);
	// bdnz 0x82367920
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82367920;
loc_82367944:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// subf r8,r28,r26
	ctx.r8.s64 = ctx.r26.s64 - ctx.r28.s64;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwzx r11,r11,r27
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r27.u32);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x823679f0
	if (!ctx.cr6.gt) goto loc_823679F0;
loc_82367974:
	// add r11,r5,r9
	ctx.r11.u64 = ctx.r5.u64 + ctx.r9.u64;
	// add r10,r4,r9
	ctx.r10.u64 = ctx.r4.u64 + ctx.r9.u64;
	// mulli r11,r11,152
	ctx.r11.s64 = ctx.r11.s64 * 152;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// mulli r10,r10,152
	ctx.r10.s64 = ctx.r10.s64 * 152;
	// lwz r3,2596(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2596);
	// lwz r6,2600(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2600);
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + ctx.r30.u64;
	// subf r6,r3,r6
	ctx.r6.s64 = ctx.r6.s64 - ctx.r3.s64;
	// cmplw cr6,r8,r6
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r6.u32, ctx.xer);
	// lwz r6,2608(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 2608);
	// lwz r3,2604(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 2604);
	// subf r6,r6,r3
	ctx.r6.s64 = ctx.r3.s64 - ctx.r6.s64;
	// ble cr6,0x823679b4
	if (!ctx.cr6.gt) goto loc_823679B4;
	// stw r26,2600(r11)
	PPC_STORE_U32(ctx.r11.u32 + 2600, ctx.r26.u32);
	// stw r28,2596(r11)
	PPC_STORE_U32(ctx.r11.u32 + 2596, ctx.r28.u32);
loc_823679B4:
	// cmplw cr6,r8,r6
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r6.u32, ctx.xer);
	// ble cr6,0x823679c4
	if (!ctx.cr6.gt) goto loc_823679C4;
	// stw r26,2604(r10)
	PPC_STORE_U32(ctx.r10.u32 + 2604, ctx.r26.u32);
	// stw r28,2608(r10)
	PPC_STORE_U32(ctx.r10.u32 + 2608, ctx.r28.u32);
loc_823679C4:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwzx r11,r11,r27
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r27.u32);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82367974
	if (ctx.cr6.lt) goto loc_82367974;
loc_823679F0:
	// li r11,2
	ctx.r11.s64 = 2;
	// lfs f0,520(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 520);
	ctx.f0.f64 = double(temp.f32);
	// fctidz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f0.f64));
	// stfd f0,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f0.u64);
	// lwz r9,92(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// li r10,0
	ctx.r10.s64 = 0;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_82367A0C:
	// add r11,r5,r10
	ctx.r11.u64 = ctx.r5.u64 + ctx.r10.u64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// mulli r11,r11,152
	ctx.r11.s64 = ctx.r11.s64 * 152;
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// addi r8,r11,100
	ctx.r8.s64 = ctx.r11.s64 + 100;
	// lwz r8,100(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// add r8,r9,r8
	ctx.r8.u64 = ctx.r9.u64 + ctx.r8.u64;
	// stw r8,100(r11)
	PPC_STORE_U32(ctx.r11.u32 + 100, ctx.r8.u32);
	// bdnz 0x82367a0c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82367A0C;
	// li r11,2
	ctx.r11.s64 = 2;
	// li r10,0
	ctx.r10.s64 = 0;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_82367A3C:
	// add r11,r4,r10
	ctx.r11.u64 = ctx.r4.u64 + ctx.r10.u64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// mulli r11,r11,152
	ctx.r11.s64 = ctx.r11.s64 * 152;
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// addi r8,r11,100
	ctx.r8.s64 = ctx.r11.s64 + 100;
	// lwz r8,100(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// add r8,r8,r9
	ctx.r8.u64 = ctx.r8.u64 + ctx.r9.u64;
	// stw r8,100(r11)
	PPC_STORE_U32(ctx.r11.u32 + 100, ctx.r8.u32);
	// bdnz 0x82367a3c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82367A3C;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82fa76c0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82367A68"))) PPC_WEAK_FUNC(sub_82367A68);
PPC_FUNC_IMPL(__imp__sub_82367A68) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7674
	ctx.lr = 0x82367A70;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// lwz r29,44(r5)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r5.u32 + 44);
	// lis r9,-32243
	ctx.r9.s64 = -2113077248;
	// lwz r28,40(r5)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r5.u32 + 40);
	// mulli r10,r7,328
	ctx.r10.s64 = ctx.r7.s64 * 328;
	// lwz r31,44(r6)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r6.u32 + 44);
	// lwz r5,40(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 40);
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lfs f0,31512(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 31512);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r4,r7
	ctx.r4.u64 = ctx.r7.u64;
	// addi r11,r11,492
	ctx.r11.s64 = ctx.r11.s64 + 492;
	// blt cr6,0x82367ab0
	if (ctx.cr6.lt) goto loc_82367AB0;
	// addi r11,r11,164
	ctx.r11.s64 = ctx.r11.s64 + 164;
loc_82367AB0:
	// lwz r8,36(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// cmpwi cr6,r4,24
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 24, ctx.xer);
	// blt cr6,0x82367ac4
	if (ctx.cr6.lt) goto loc_82367AC4;
	// li r11,6
	ctx.r11.s64 = 6;
	// b 0x82367ad4
	goto loc_82367AD4;
loc_82367AC4:
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,19608
	ctx.r11.s64 = ctx.r11.s64 + 19608;
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
loc_82367AD4:
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x82367be4
	if (ctx.cr6.lt) goto loc_82367BE4;
	// beq cr6,0x82367bc4
	if (ctx.cr6.eq) goto loc_82367BC4;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// blt cr6,0x82367ba8
	if (ctx.cr6.lt) goto loc_82367BA8;
	// beq cr6,0x82367b90
	if (ctx.cr6.eq) goto loc_82367B90;
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// bge cr6,0x82367bf0
	if (!ctx.cr6.lt) goto loc_82367BF0;
	// lwz r30,2024(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2024);
	// cmpw cr6,r29,r31
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r31.s32, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bne cr6,0x82367b20
	if (!ctx.cr6.eq) goto loc_82367B20;
	// cmpwi cr6,r4,14
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 14, ctx.xer);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bne cr6,0x82367b18
	if (!ctx.cr6.eq) goto loc_82367B18;
	// li r6,7
	ctx.r6.s64 = 7;
	// b 0x82367b88
	goto loc_82367B88;
loc_82367B18:
	// li r6,12
	ctx.r6.s64 = 12;
	// b 0x82367b88
	goto loc_82367B88;
loc_82367B20:
	// cmpwi cr6,r4,16
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 16, ctx.xer);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bne cr6,0x82367b44
	if (!ctx.cr6.eq) goto loc_82367B44;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x82367b3c
	if (ctx.cr6.eq) goto loc_82367B3C;
	// li r6,5
	ctx.r6.s64 = 5;
	// b 0x82367b48
	goto loc_82367B48;
loc_82367B3C:
	// li r6,6
	ctx.r6.s64 = 6;
	// b 0x82367b48
	goto loc_82367B48;
loc_82367B44:
	// li r6,12
	ctx.r6.s64 = 12;
loc_82367B48:
	// bl 0x824489e8
	ctx.lr = 0x82367B4C;
	sub_824489E8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x824488d8
	ctx.lr = 0x82367B58;
	sub_824488D8(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// rlwinm r10,r3,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r11,r11,31232
	ctx.r11.s64 = ctx.r11.s64 + 31232;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r6,16
	ctx.r6.s64 = 16;
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82367b88
	if (!ctx.cr6.eq) goto loc_82367B88;
	// li r6,15
	ctx.r6.s64 = 15;
loc_82367B88:
	// bl 0x824489e8
	ctx.lr = 0x82367B8C;
	sub_824489E8(ctx, base);
	// b 0x82367bf0
	goto loc_82367BF0;
loc_82367B90:
	// mr r7,r5
	ctx.r7.u64 = ctx.r5.u64;
	// lwz r3,2024(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2024);
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// bl 0x82448810
	ctx.lr = 0x82367BA4;
	sub_82448810(ctx, base);
	// b 0x82367bf0
	goto loc_82367BF0;
loc_82367BA8:
	// mr r8,r5
	ctx.r8.u64 = ctx.r5.u64;
	// lwz r3,2024(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2024);
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x82448668
	ctx.lr = 0x82367BC0;
	sub_82448668(ctx, base);
	// b 0x82367bf0
	goto loc_82367BF0;
loc_82367BC4:
	// mr r8,r5
	ctx.r8.u64 = ctx.r5.u64;
	// lwz r3,2024(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2024);
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// fmr f1,f2
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f2.f64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x82448540
	ctx.lr = 0x82367BE0;
	sub_82448540(ctx, base);
	// b 0x82367bf0
	goto loc_82367BF0;
loc_82367BE4:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,2024(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2024);
	// bl 0x82448480
	ctx.lr = 0x82367BF0;
	sub_82448480(ctx, base);
loc_82367BF0:
	// lwz r3,4(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82367c00
	if (ctx.cr6.eq) goto loc_82367C00;
	// bl 0x82241d18
	ctx.lr = 0x82367C00;
	sub_82241D18(ctx, base);
loc_82367C00:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82367C08"))) PPC_WEAK_FUNC(sub_82367C08);
PPC_FUNC_IMPL(__imp__sub_82367C08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7674
	ctx.lr = 0x82367C10;
	__savegprlr_27(ctx, base);
	// stfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f31.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// cmpwi cr6,r7,24
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 24, ctx.xer);
	// blt cr6,0x82367c40
	if (ctx.cr6.lt) goto loc_82367C40;
	// li r11,6
	ctx.r11.s64 = 6;
	// b 0x82367c50
	goto loc_82367C50;
loc_82367C40:
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// rlwinm r10,r29,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,19608
	ctx.r11.s64 = ctx.r11.s64 + 19608;
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
loc_82367C50:
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x82367d10
	if (ctx.cr6.lt) goto loc_82367D10;
	// beq cr6,0x82367ce8
	if (ctx.cr6.eq) goto loc_82367CE8;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// blt cr6,0x82367cc0
	if (ctx.cr6.lt) goto loc_82367CC0;
	// beq cr6,0x82367c98
	if (ctx.cr6.eq) goto loc_82367C98;
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// bge cr6,0x82367d30
	if (!ctx.cr6.lt) goto loc_82367D30;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823f62d0
	ctx.lr = 0x82367C7C;
	sub_823F62D0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// bl 0x8236aee8
	ctx.lr = 0x82367C94;
	sub_8236AEE8(ctx, base);
	// b 0x82367d30
	goto loc_82367D30;
loc_82367C98:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x823f62d0
	ctx.lr = 0x82367CA4;
	sub_823F62D0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// bl 0x8236acb8
	ctx.lr = 0x82367CBC;
	sub_8236ACB8(ctx, base);
	// b 0x82367d30
	goto loc_82367D30;
loc_82367CC0:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x823f62d0
	ctx.lr = 0x82367CCC;
	sub_823F62D0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// bl 0x8236ab50
	ctx.lr = 0x82367CE4;
	sub_8236AB50(ctx, base);
	// b 0x82367d30
	goto loc_82367D30;
loc_82367CE8:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x823f62d0
	ctx.lr = 0x82367CF4;
	sub_823F62D0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// bl 0x8236aa98
	ctx.lr = 0x82367D0C;
	sub_8236AA98(ctx, base);
	// b 0x82367d30
	goto loc_82367D30;
loc_82367D10:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x823f62d0
	ctx.lr = 0x82367D1C;
	sub_823F62D0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// bl 0x8236a910
	ctx.lr = 0x82367D30;
	sub_8236A910(ctx, base);
loc_82367D30:
	// lwz r11,516(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 516);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82367d68
	if (!ctx.cr6.eq) goto loc_82367D68;
	// lwz r9,44(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// addi r11,r30,2588
	ctx.r11.s64 = ctx.r30.s64 + 2588;
	// lwz r10,40(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// rlwinm r9,r9,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// mulli r10,r10,152
	ctx.r10.s64 = ctx.r10.s64 * 152;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r10,r11,32
	ctx.r10.s64 = ctx.r11.s64 + 32;
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r10.u32);
loc_82367D68:
	// lwz r3,4(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82367d78
	if (ctx.cr6.eq) goto loc_82367D78;
	// bl 0x82241d18
	ctx.lr = 0x82367D78;
	sub_82241D18(ctx, base);
loc_82367D78:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x82fa76c4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82367D84"))) PPC_WEAK_FUNC(sub_82367D84);
PPC_FUNC_IMPL(__imp__sub_82367D84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82367D88"))) PPC_WEAK_FUNC(sub_82367D88);
PPC_FUNC_IMPL(__imp__sub_82367D88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa766c
	ctx.lr = 0x82367D90;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,496(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 496);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// mr r26,r8
	ctx.r26.u64 = ctx.r8.u64;
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// beq cr6,0x82367f18
	if (ctx.cr6.eq) goto loc_82367F18;
	// cmpwi cr6,r7,24
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 24, ctx.xer);
	// blt cr6,0x82367dc8
	if (ctx.cr6.lt) goto loc_82367DC8;
	// li r27,6
	ctx.r27.s64 = 6;
	// b 0x82367dd8
	goto loc_82367DD8;
loc_82367DC8:
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// rlwinm r10,r29,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,19608
	ctx.r11.s64 = ctx.r11.s64 + 19608;
	// lwzx r27,r10,r11
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
loc_82367DD8:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82475b78
	ctx.lr = 0x82367DE0;
	sub_82475B78(ctx, base);
	// lwz r11,544(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 544);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82367e0c
	if (ctx.cr6.eq) goto loc_82367E0C;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r10,16660
	ctx.r4.s64 = ctx.r10.s64 + 16660;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82367E0C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82367E0C:
	// lwz r11,44(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	// lwz r10,44(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 44);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x82367eac
	if (!ctx.cr6.eq) goto loc_82367EAC;
	// cmpwi cr6,r27,2
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 2, ctx.xer);
	// bne cr6,0x82367e44
	if (!ctx.cr6.eq) goto loc_82367E44;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r11,16680
	ctx.r4.s64 = ctx.r11.s64 + 16680;
	// bl 0x82474998
	ctx.lr = 0x82367E34;
	sub_82474998(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r11,16700
	ctx.r4.s64 = ctx.r11.s64 + 16700;
	// bl 0x82474998
	ctx.lr = 0x82367E44;
	sub_82474998(ctx, base);
loc_82367E44:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r11,16720
	ctx.r4.s64 = ctx.r11.s64 + 16720;
	// bl 0x82474998
	ctx.lr = 0x82367E54;
	sub_82474998(ctx, base);
	// cmpwi cr6,r29,4
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 4, ctx.xer);
	// beq cr6,0x82367e7c
	if (ctx.cr6.eq) goto loc_82367E7C;
	// cmpwi cr6,r29,5
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 5, ctx.xer);
	// ble cr6,0x82367ebc
	if (!ctx.cr6.gt) goto loc_82367EBC;
	// cmpwi cr6,r29,7
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 7, ctx.xer);
	// bgt cr6,0x82367ebc
	if (ctx.cr6.gt) goto loc_82367EBC;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r4,r11,16788
	ctx.r4.s64 = ctx.r11.s64 + 16788;
	// b 0x82367eb8
	goto loc_82367EB8;
loc_82367E7C:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r4,r11,16732
	ctx.r4.s64 = ctx.r11.s64 + 16732;
	// bl 0x82474998
	ctx.lr = 0x82367E8C;
	sub_82474998(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r4,r11,16752
	ctx.r4.s64 = ctx.r11.s64 + 16752;
	// bl 0x82474998
	ctx.lr = 0x82367E9C;
	sub_82474998(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r4,r11,16772
	ctx.r4.s64 = ctx.r11.s64 + 16772;
	// b 0x82367eb8
	goto loc_82367EB8;
loc_82367EAC:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r11,16804
	ctx.r4.s64 = ctx.r11.s64 + 16804;
loc_82367EB8:
	// bl 0x82474998
	ctx.lr = 0x82367EBC;
	sub_82474998(ctx, base);
loc_82367EBC:
	// cmpwi cr6,r27,4
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 4, ctx.xer);
	// bne cr6,0x82367edc
	if (!ctx.cr6.eq) goto loc_82367EDC;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82367edc
	if (ctx.cr6.eq) goto loc_82367EDC;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,16820
	ctx.r4.s64 = ctx.r11.s64 + 16820;
	// bl 0x82474998
	ctx.lr = 0x82367EDC;
	sub_82474998(ctx, base);
loc_82367EDC:
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// beq cr6,0x82367f18
	if (ctx.cr6.eq) goto loc_82367F18;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r11,16840
	ctx.r4.s64 = ctx.r11.s64 + 16840;
	// bl 0x82474998
	ctx.lr = 0x82367EF4;
	sub_82474998(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82367f18
	if (ctx.cr6.eq) goto loc_82367F18;
	// lwz r11,852(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 852);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82367f18
	if (ctx.cr6.eq) goto loc_82367F18;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,16856
	ctx.r4.s64 = ctx.r11.s64 + 16856;
	// bl 0x82474998
	ctx.lr = 0x82367F18;
	sub_82474998(ctx, base);
loc_82367F18:
	// lwz r3,4(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82367f28
	if (ctx.cr6.eq) goto loc_82367F28;
	// bl 0x82241d18
	ctx.lr = 0x82367F28;
	sub_82241D18(ctx, base);
loc_82367F28:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82fa76bc
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82367F30"))) PPC_WEAK_FUNC(sub_82367F30);
PPC_FUNC_IMPL(__imp__sub_82367F30) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x82367F38;
	__savegprlr_28(ctx, base);
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,1
	ctx.r11.s64 = 1;
	// stfs f2,1620(r3)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r3.u32 + 1620, temp.u32);
	// lis r10,-32201
	ctx.r10.s64 = -2110324736;
	// stw r3,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r3.u32);
	// stw r11,1608(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1608, ctx.r11.u32);
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r11,r10,-32520
	ctx.r11.s64 = ctx.r10.s64 + -32520;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// stw r29,1612(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1612, ctx.r29.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// li r3,32
	ctx.r3.s64 = 32;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// bl 0x82691500
	ctx.lr = 0x82367F84;
	sub_82691500(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x82367ff4
	if (ctx.cr0.eq) goto loc_82367FF4;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r3,r30,8
	ctx.r3.s64 = ctx.r30.s64 + 8;
	// addi r11,r11,17392
	ctx.r11.s64 = ctx.r11.s64 + 17392;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// li r5,24
	ctx.r5.s64 = 24;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// bl 0x82fa77c0
	ctx.lr = 0x82367FA8;
	sub_82FA77C0(ctx, base);
	// lwz r3,2020(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2020);
	// stw r30,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r30.u32);
	// lwz r11,3408(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3408);
	// addi r4,r11,32
	ctx.r4.s64 = ctx.r11.s64 + 32;
	// bl 0x822a00f0
	ctx.lr = 0x82367FBC;
	sub_822A00F0(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r4,r11,16876
	ctx.r4.s64 = ctx.r11.s64 + 16876;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x822400d8
	ctx.lr = 0x82367FD0;
	sub_822400D8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// bl 0x8229ee18
	ctx.lr = 0x82367FE8;
	sub_8229EE18(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
loc_82367FF4:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r11,r11,11272
	ctx.r11.s64 = ctx.r11.s64 + 11272;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82240040
	ctx.lr = 0x8236800C;
	sub_82240040(ctx, base);
}

__attribute__((alias("__imp__sub_8236800C"))) PPC_WEAK_FUNC(sub_8236800C);
PPC_FUNC_IMPL(__imp__sub_8236800C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82368010"))) PPC_WEAK_FUNC(sub_82368010);
PPC_FUNC_IMPL(__imp__sub_82368010) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7674
	ctx.lr = 0x82368018;
	__savegprlr_27(ctx, base);
	// stfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f31.u64);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31968
	ctx.r11.s64 = -2095054848;
	// stw r3,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r3.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r29,r11,15768
	ctx.r29.s64 = ctx.r11.s64 + 15768;
	// lis r10,-32201
	ctx.r10.s64 = -2110324736;
	// li r28,0
	ctx.r28.s64 = 0;
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r10,r10,-32520
	ctx.r10.s64 = ctx.r10.s64 + -32520;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// lfs f0,100(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 100);
	ctx.f0.f64 = double(temp.f32);
	// stw r11,1608(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1608, ctx.r11.u32);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// stfs f0,1620(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1620, temp.u32);
	// stw r28,1612(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1612, ctx.r28.u32);
	// li r3,32
	ctx.r3.s64 = 32;
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// std r11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// bl 0x82691500
	ctx.lr = 0x8236806C;
	sub_82691500(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x823680e0
	if (ctx.cr0.eq) goto loc_823680E0;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r3,r30,8
	ctx.r3.s64 = ctx.r30.s64 + 8;
	// addi r11,r11,17392
	ctx.r11.s64 = ctx.r11.s64 + 17392;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// li r5,24
	ctx.r5.s64 = 24;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// bl 0x82fa77c0
	ctx.lr = 0x82368090;
	sub_82FA77C0(ctx, base);
	// lwz r3,2020(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2020);
	// stw r30,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r30.u32);
	// lwz r11,3408(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3408);
	// addi r4,r11,32
	ctx.r4.s64 = ctx.r11.s64 + 32;
	// bl 0x822a00f0
	ctx.lr = 0x823680A4;
	sub_822A00F0(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lfs f31,96(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 96);
	ctx.f31.f64 = double(temp.f32);
	// addi r4,r11,16892
	ctx.r4.s64 = ctx.r11.s64 + 16892;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x822400d8
	ctx.lr = 0x823680BC;
	sub_822400D8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// bl 0x8229ee18
	ctx.lr = 0x823680D4;
	sub_8229EE18(ctx, base);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// lfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x82fa76c4
	__restgprlr_27(ctx, base);
	return;
loc_823680E0:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r11,r11,11272
	ctx.r11.s64 = ctx.r11.s64 + 11272;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82240040
	ctx.lr = 0x823680F8;
	sub_82240040(ctx, base);
}

__attribute__((alias("__imp__sub_823680F8"))) PPC_WEAK_FUNC(sub_823680F8);
PPC_FUNC_IMPL(__imp__sub_823680F8) {
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
	// lwz r11,1608(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1608);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8236812c
	if (!ctx.cr6.eq) goto loc_8236812C;
	// lwz r11,1612(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1612);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82368154
	if (ctx.cr6.eq) goto loc_82368154;
loc_8236812C:
	// lwz r3,2020(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2020);
	// lwz r11,3408(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 3408);
	// addi r4,r11,32
	ctx.r4.s64 = ctx.r11.s64 + 32;
	// bl 0x822a00f0
	ctx.lr = 0x8236813C;
	sub_822A00F0(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lfs f1,1620(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1620);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8229f1c8
	ctx.lr = 0x82368148;
	sub_8229F1C8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,1608(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1608, ctx.r11.u32);
	// stw r11,1612(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1612, ctx.r11.u32);
loc_82368154:
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

__attribute__((alias("__imp__sub_8236816C"))) PPC_WEAK_FUNC(sub_8236816C);
PPC_FUNC_IMPL(__imp__sub_8236816C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82368170"))) PPC_WEAK_FUNC(sub_82368170);
PPC_FUNC_IMPL(__imp__sub_82368170) {
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
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,516(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 516);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8236827c
	if (ctx.cr6.eq) goto loc_8236827C;
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// beq cr6,0x823681b0
	if (ctx.cr6.eq) goto loc_823681B0;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82368220
	if (ctx.cr6.eq) goto loc_82368220;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x823681c8
	if (!ctx.cr6.eq) goto loc_823681C8;
loc_823681B0:
	// lwz r11,608(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 608);
	// lwz r10,480(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 480);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lwz r11,472(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 472);
loc_823681C0:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8236827c
	if (!ctx.cr6.eq) goto loc_8236827C;
loc_823681C8:
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// addi r10,r10,17416
	ctx.r10.s64 = ctx.r10.s64 + 17416;
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// stw r8,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r8.u32);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r31,r10,r11
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// bl 0x8226c200
	ctx.lr = 0x8236820C;
	sub_8226C200(ctx, base);
	// lwz r31,4(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// b 0x82368264
	goto loc_82368264;
loc_82368220:
	// lwz r11,608(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 608);
	// lwz r10,540(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 540);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lwz r11,624(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 624);
	// b 0x823681c0
	goto loc_823681C0;
loc_82368234:
	// lwz r10,16(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82368294
	if (ctx.cr6.eq) goto loc_82368294;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r4,16(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82368258;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x8285aa38
	ctx.lr = 0x82368260;
	sub_8285AA38(ctx, base);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
loc_82368264:
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x82368234
	if (!ctx.cr6.eq) goto loc_82368234;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82f91940
	ctx.lr = 0x82368274;
	sub_82F91940(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82f91940
	ctx.lr = 0x8236827C;
	sub_82F91940(ctx, base);
loc_8236827C:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
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
loc_82368294:
	// bl 0x82fa1518
	ctx.lr = 0x82368298;
	sub_82FA1518(ctx, base);
}

__attribute__((alias("__imp__sub_82368298"))) PPC_WEAK_FUNC(sub_82368298);
PPC_FUNC_IMPL(__imp__sub_82368298) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x823682A0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,516(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 516);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x823682c8
	if (!ctx.cr6.eq) goto loc_823682C8;
	// bl 0x823687e0
	ctx.lr = 0x823682B8;
	sub_823687E0(ctx, base);
	// addi r11,r3,1
	ctx.r11.s64 = ctx.r3.s64 + 1;
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r8,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// b 0x823682cc
	goto loc_823682CC;
loc_823682C8:
	// lwz r8,1624(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1624);
loc_823682CC:
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// lwz r11,160(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 160);
	// li r29,1
	ctx.r29.s64 = 1;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r9,21120(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 21120);
	// beq cr6,0x823682f4
	if (ctx.cr6.eq) goto loc_823682F4;
	// lwz r10,64(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// beq cr6,0x82368300
	if (ctx.cr6.eq) goto loc_82368300;
loc_823682F4:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// beq cr6,0x82368304
	if (ctx.cr6.eq) goto loc_82368304;
loc_82368300:
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
loc_82368304:
	// lwz r7,2568(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2568);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x8236831c
	if (ctx.cr6.eq) goto loc_8236831C;
	// li r3,10
	ctx.r3.s64 = 10;
	// stw r30,2568(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2568, ctx.r30.u32);
	// b 0x8236844c
	goto loc_8236844C;
loc_8236831C:
	// lwz r7,2564(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2564);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x82368334
	if (ctx.cr6.eq) goto loc_82368334;
	// li r3,5
	ctx.r3.s64 = 5;
	// stw r30,2564(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2564, ctx.r30.u32);
	// b 0x8236844c
	goto loc_8236844C;
loc_82368334:
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x82368350
	if (ctx.cr6.eq) goto loc_82368350;
	// subfic r11,r10,0
	ctx.xer.ca = ctx.r10.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r10.s64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// rlwinm r11,r11,0,31,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// addi r3,r11,15
	ctx.r3.s64 = ctx.r11.s64 + 15;
	// b 0x8236844c
	goto loc_8236844C;
loc_82368350:
	// lwz r10,2532(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2532);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82368384
	if (!ctx.cr6.eq) goto loc_82368384;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82368370
	if (ctx.cr6.eq) goto loc_82368370;
	// lwz r11,64(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x82368384
	if (ctx.cr6.eq) goto loc_82368384;
loc_82368370:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82368384
	if (!ctx.cr6.eq) goto loc_82368384;
	// li r3,6
	ctx.r3.s64 = 6;
	// stw r29,2532(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2532, ctx.r29.u32);
	// b 0x8236844c
	goto loc_8236844C;
loc_82368384:
	// lwz r11,2548(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2548);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x823683a8
	if (!ctx.cr6.eq) goto loc_823683A8;
	// lwz r11,536(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 536);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x823683a8
	if (!ctx.cr6.eq) goto loc_823683A8;
	// li r3,11
	ctx.r3.s64 = 11;
	// stw r29,2548(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2548, ctx.r29.u32);
	// b 0x8236844c
	goto loc_8236844C;
loc_823683A8:
	// lwz r11,2536(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2536);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x823683cc
	if (!ctx.cr6.eq) goto loc_823683CC;
	// lwz r11,840(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 840);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823683cc
	if (ctx.cr6.eq) goto loc_823683CC;
	// li r3,7
	ctx.r3.s64 = 7;
	// stw r29,2536(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2536, ctx.r29.u32);
	// b 0x8236844c
	goto loc_8236844C;
loc_823683CC:
	// lwz r11,2544(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2544);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x823683f4
	if (!ctx.cr6.eq) goto loc_823683F4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82368730
	ctx.lr = 0x823683E0;
	sub_82368730(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x823683f4
	if (ctx.cr0.eq) goto loc_823683F4;
	// li r3,8
	ctx.r3.s64 = 8;
	// stw r29,2544(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2544, ctx.r29.u32);
	// b 0x8236844c
	goto loc_8236844C;
loc_823683F4:
	// lwz r11,2540(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2540);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82368434
	if (!ctx.cr6.eq) goto loc_82368434;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82368640
	ctx.lr = 0x8236840C;
	sub_82368640(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82368428
	if (!ctx.cr0.eq) goto loc_82368428;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82368640
	ctx.lr = 0x82368420;
	sub_82368640(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82368434
	if (ctx.cr0.eq) goto loc_82368434;
loc_82368428:
	// li r3,9
	ctx.r3.s64 = 9;
	// stw r29,2540(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2540, ctx.r29.u32);
	// b 0x8236844c
	goto loc_8236844C;
loc_82368434:
	// stw r30,2532(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2532, ctx.r30.u32);
	// li r3,2
	ctx.r3.s64 = 2;
	// stw r30,2536(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2536, ctx.r30.u32);
	// stw r30,2540(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2540, ctx.r30.u32);
	// stw r30,2544(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2544, ctx.r30.u32);
	// stw r30,2548(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2548, ctx.r30.u32);
loc_8236844C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82368454"))) PPC_WEAK_FUNC(sub_82368454);
PPC_FUNC_IMPL(__imp__sub_82368454) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82368458"))) PPC_WEAK_FUNC(sub_82368458);
PPC_FUNC_IMPL(__imp__sub_82368458) {
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
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// srawi. r31,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r31.s64 = ctx.r10.s32 >> 2;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// ble 0x823684dc
	if (!ctx.cr0.gt) goto loc_823684DC;
	// rotlwi r6,r9,0
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
loc_82368488:
	// lwz r11,0(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r10,r11
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r7,8(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x823684cc
	if (ctx.cr6.eq) goto loc_823684CC;
loc_823684AC:
	// mr r3,r8
	ctx.r3.u64 = ctx.r8.u64;
	// bl 0x824fa600
	ctx.lr = 0x823684B4;
	sub_824FA600(ctx, base);
	// lwz r11,288(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 288);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x823684e0
	if (!ctx.cr6.eq) goto loc_823684E0;
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// cmplw cr6,r4,r7
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r7.u32, ctx.xer);
	// blt cr6,0x823684ac
	if (ctx.cr6.lt) goto loc_823684AC;
loc_823684CC:
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// cmpw cr6,r5,r31
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r31.s32, ctx.xer);
	// blt cr6,0x82368488
	if (ctx.cr6.lt) goto loc_82368488;
loc_823684DC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823684E0:
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

__attribute__((alias("__imp__sub_823684F4"))) PPC_WEAK_FUNC(sub_823684F4);
PPC_FUNC_IMPL(__imp__sub_823684F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823684F8"))) PPC_WEAK_FUNC(sub_823684F8);
PPC_FUNC_IMPL(__imp__sub_823684F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	PPCVRegister vTemp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7674
	ctx.lr = 0x82368500;
	__savegprlr_27(ctx, base);
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x82fa8d28
	ctx.lr = 0x82368508;
	__savefpr_28(ctx, base);
	// addi r12,r1,-80
	ctx.r12.s64 = ctx.r1.s64 + -80;
	// bl 0x82fac144
	ctx.lr = 0x82368510;
	__savevmx_122(ctx, base);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi. r31,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r31.s64 = ctx.r11.s32 >> 2;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// ble 0x82368628
	if (!ctx.cr0.gt) goto loc_82368628;
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// vspltisw v0,1
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_set1_epi32(int(0x1)));
	// lis r10,-32243
	ctx.r10.s64 = -2113077248;
	// vspltisw128 v124,0
	_mm_store_si128((__m128i*)ctx.v124.u32, _mm_set1_epi32(int(0x0)));
	// addi r9,r11,27984
	ctx.r9.s64 = ctx.r11.s64 + 27984;
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// li r30,0
	ctx.r30.s64 = 0;
	// vcsxwfp128 v125,v0,1
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v125.f32, _mm_mul_ps(_mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v0.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x3F000000)))));
	// vupkd3d128 v123,v124,4
	temp.f32 = 3.0f;
	temp.s32 += ctx.v124.s16[1];
	vTemp.f32[3] = temp.f32;
	temp.f32 = 3.0f;
	temp.s32 += ctx.v124.s16[0];
	vTemp.f32[2] = temp.f32;
	vTemp.f32[1] = 0.0f;
	vTemp.f32[0] = 1.0f;
	ctx.v123 = vTemp;
	// addi r29,r11,-32464
	ctx.r29.s64 = ctx.r11.s64 + -32464;
	// lfs f31,31512(r10)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 31512);
	ctx.f31.f64 = double(temp.f32);
	// lfd f30,256(r9)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r9.u32 + 256);
	// lfd f29,248(r9)
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r9.u32 + 248);
	// lfs f28,240(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 240);
	ctx.f28.f64 = double(temp.f32);
loc_82368568:
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwzx r11,r11,r30
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lfs f0,20(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// lwz r27,72(r11)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// fmadds f0,f0,f28,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f28.f64 + ctx.f31.f64));
	// fsub f13,f0,f29
	ctx.f13.f64 = ctx.f0.f64 - ctx.f29.f64;
	// fctid f13,f13
	ctx.f13.s64 = (ctx.f13.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvtsd_si64(_mm_load_sd(&ctx.f13.f64));
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fsub f0,f0,f13
	ctx.f0.f64 = ctx.f0.f64 - ctx.f13.f64;
	// fmul f0,f0,f30
	ctx.f0.f64 = ctx.f0.f64 * ctx.f30.f64;
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// stfs f0,20(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// lvx128 v126,r0,r29
	simd::store_shuffled(ctx.v126, simd::load_and_shuffle(base + ((ctx.r29.u32) & ~0xF), VectorMaskL));
	// vmsum3fp128 v122,v126,v126
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v122.f32, _mm_dp_ps(_mm_load_ps(ctx.v126.f32), _mm_load_ps(ctx.v126.f32), 0xEF));
	// fmuls f1,f0,f31
	ctx.fpscr.disableFlushModeUnconditional();
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// vrsqrtefp128 v127,v122
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v127.f32, _mm_div_ps(_mm_set1_ps(1), _mm_sqrt_ps(_mm_load_ps(ctx.v122.f32))));
	// bl 0x82574dd0
	ctx.lr = 0x823685CC;
	sub_82574DD0(ctx, base);
	// vmulfp128 v13,v127,v127
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v13.f32, _mm_mul_ps(_mm_load_ps(ctx.v127.f32), _mm_load_ps(ctx.v127.f32)));
	// vmulfp128 v0,v122,v125
	_mm_store_ps(ctx.v0.f32, _mm_mul_ps(_mm_load_ps(ctx.v122.f32), _mm_load_ps(ctx.v125.f32)));
	// vor128 v11,v125,v125
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_load_si128((__m128i*)ctx.v125.u8));
	// vcmpeqfp128 v10,v122,v124
	_mm_store_ps(ctx.v10.f32, _mm_cmpeq_ps(_mm_load_ps(ctx.v122.f32), _mm_load_ps(ctx.v124.f32)));
	// vor128 v12,v122,v122
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_load_si128((__m128i*)ctx.v122.u8));
	// vor128 v9,v123,v123
	_mm_store_si128((__m128i*)ctx.v9.u8, _mm_load_si128((__m128i*)ctx.v123.u8));
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// lfs f0,88(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
	// li r10,144
	ctx.r10.s64 = 144;
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// lvx128 v8,r0,r11
	simd::store_shuffled(ctx.v8, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// vnmsubfp128 v11,v0,v13,v11
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v11.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v13.f32)), _mm_load_ps(ctx.v11.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// vor v0,v11,v11
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_load_si128((__m128i*)ctx.v11.u8));
	// vmaddcfp128 v0,v127,v0,v127
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v127.f32), _mm_load_ps(ctx.v0.f32)), _mm_load_ps(ctx.v127.f32)));
	// vmulfp128 v0,v126,v0
	_mm_store_ps(ctx.v0.f32, _mm_mul_ps(_mm_load_ps(ctx.v126.f32), _mm_load_ps(ctx.v0.f32)));
	// vsel v13,v0,v12,v10
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v10.u8), _mm_load_si128((__m128i*)ctx.v0.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v10.u8), _mm_load_si128((__m128i*)ctx.v12.u8))));
	// vrlimi128 v9,v13,14,0
	_mm_store_ps(ctx.v9.f32, _mm_blend_ps(_mm_load_ps(ctx.v9.f32), _mm_permute_ps(_mm_load_ps(ctx.v13.f32), 228), 14));
	// vmulfp128 v0,v9,v8
	_mm_store_ps(ctx.v0.f32, _mm_mul_ps(_mm_load_ps(ctx.v9.f32), _mm_load_ps(ctx.v8.f32)));
	// stvx128 v0,r27,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r27.u32 + ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// bne 0x82368568
	if (!ctx.cr0.eq) goto loc_82368568;
loc_82368628:
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// addi r12,r1,-80
	ctx.r12.s64 = ctx.r1.s64 + -80;
	// bl 0x82fac3dc
	ctx.lr = 0x82368634;
	__restvmx_122(ctx, base);
	// addi r12,r1,-48
	ctx.r12.s64 = ctx.r1.s64 + -48;
	// bl 0x82fa8d74
	ctx.lr = 0x8236863C;
	__restfpr_28(ctx, base);
	// b 0x82fa76c4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82368640"))) PPC_WEAK_FUNC(sub_82368640);
PPC_FUNC_IMPL(__imp__sub_82368640) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x82368648;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cntlzw r10,r4
	ctx.r10.u64 = ctx.r4.u32 == 0 ? 32 : __builtin_clz(ctx.r4.u32);
	// rlwinm r9,r4,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r8,516(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 516);
	// rlwinm r10,r10,29,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x4;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwzx r9,r9,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r10,16(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	// lwz r8,16(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r9,0(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r9
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// lwzx r11,r8,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// lfs f0,32(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,32(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	ctx.f13.f64 = double(temp.f32);
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f0.f64));
	// fctiwz f13,f13
	ctx.f13.s64 = (ctx.f13.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f13.f64));
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// stfd f13,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f13.u64);
	// lwz r30,84(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r29,92(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// bne cr6,0x823686cc
	if (!ctx.cr6.eq) goto loc_823686CC;
	// bl 0x823687e0
	ctx.lr = 0x823686BC;
	sub_823687E0(ctx, base);
	// addi r11,r3,1
	ctx.r11.s64 = ctx.r3.s64 + 1;
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r11,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// b 0x823686d0
	goto loc_823686D0;
loc_823686CC:
	// lwz r11,1624(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1624);
loc_823686D0:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82368724
	if (!ctx.cr6.eq) goto loc_82368724;
	// lwz r11,608(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 608);
	// lwz r10,336(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 336);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// cmplw cr6,r30,r10
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x823686f4
	if (!ctx.cr6.eq) goto loc_823686F4;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82368728
	goto loc_82368728;
loc_823686F4:
	// cmplw cr6,r30,r29
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r29.u32, ctx.xer);
	// ble cr6,0x82368724
	if (!ctx.cr6.gt) goto loc_82368724;
	// lwz r10,328(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 328);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// cmplw cr6,r30,r10
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82368724
	if (ctx.cr6.lt) goto loc_82368724;
	// lwz r11,332(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 332);
	// subf r10,r29,r30
	ctx.r10.s64 = ctx.r30.s64 - ctx.r29.s64;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82368728
	if (!ctx.cr6.lt) goto loc_82368728;
loc_82368724:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82368728:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82368730"))) PPC_WEAK_FUNC(sub_82368730);
PPC_FUNC_IMPL(__imp__sub_82368730) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r11,608(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 608);
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r10,336(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 336);
	// addi r9,r10,-1
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// lwz r10,0(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// lwz r8,4(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// lwz r7,16(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// lwz r6,16(r8)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + 16);
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r7,r7,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r8,0(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// rlwinm r6,r6,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r7,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r10.u32);
	// lwzx r8,r6,r8
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r8.u32);
	// lfs f0,32(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,32(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 32);
	ctx.f13.f64 = double(temp.f32);
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f0.f64));
	// stfd f0,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f0.u64);
	// lwz r10,-12(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	// fctiwz f0,f13
	ctx.f0.s64 = (ctx.f13.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f13.f64));
	// stfd f0,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f0.u64);
	// lwz r8,-12(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + -12);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// beq cr6,0x823687d8
	if (ctx.cr6.eq) goto loc_823687D8;
	// cmpw cr6,r8,r9
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r9.s32, ctx.xer);
	// beq cr6,0x823687d8
	if (ctx.cr6.eq) goto loc_823687D8;
	// lwz r9,328(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 328);
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x823687b4
	if (!ctx.cr6.lt) goto loc_823687B4;
	// cmpw cr6,r8,r9
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x823687d8
	if (ctx.cr6.lt) goto loc_823687D8;
loc_823687B4:
	// subf r10,r8,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r8.s64;
	// lwz r11,332(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 332);
	// li r3,1
	ctx.r3.s64 = 1;
	// srawi r9,r10,31
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7FFFFFFF) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 31;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// xor r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 ^ ctx.r9.u64;
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bltlr cr6
	if (ctx.cr6.lt) return;
loc_823687D8:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823687E0"))) PPC_WEAK_FUNC(sub_823687E0);
PPC_FUNC_IMPL(__imp__sub_823687E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r10,516(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 516);
	// lwz r9,608(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 608);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r8,16(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// lwz r7,16(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r7,r7,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r8,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// lwzx r11,r7,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r11.u32);
	// lfs f0,32(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,32(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	ctx.f13.f64 = double(temp.f32);
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f0.f64));
	// fctiwz f13,f13
	ctx.f13.s64 = (ctx.f13.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f13.f64));
	// stfd f0,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.f0.u64);
	// stfd f13,-32(r1)
	PPC_STORE_U64(ctx.r1.u32 + -32, ctx.f13.u64);
	// lwz r11,-20(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -20);
	// lwz r10,-28(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + -28);
	// bne cr6,0x8236890c
	if (!ctx.cr6.eq) goto loc_8236890C;
	// lwz r8,328(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 328);
	// srawi r7,r11,31
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFFFFFF) != 0);
	ctx.r7.s64 = ctx.r11.s32 >> 31;
	// subf r6,r10,r11
	ctx.r6.s64 = ctx.r11.s64 - ctx.r10.s64;
	// lwz r5,332(r9)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + 332);
	// rlwinm r4,r8,1,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0x1;
	// lwz r9,336(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 336);
	// subfc r3,r8,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r8.u32;
	ctx.r3.s64 = ctx.r11.s64 - ctx.r8.s64;
	// rlwinm r31,r8,1,31,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0x1;
	// adde r7,r4,r7
	temp.u8 = (ctx.r4.u32 + ctx.r7.u32 < ctx.r4.u32) | (ctx.r4.u32 + ctx.r7.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r7.u64 = ctx.r4.u64 + ctx.r7.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// srawi r4,r10,31
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7FFFFFFF) != 0);
	ctx.r4.s64 = ctx.r10.s32 >> 31;
	// subfc r8,r8,r10
	ctx.xer.ca = ctx.r10.u32 >= ctx.r8.u32;
	ctx.r8.s64 = ctx.r10.s64 - ctx.r8.s64;
	// stw r7,-32(r1)
	PPC_STORE_U32(ctx.r1.u32 + -32, ctx.r7.u32);
	// rlwinm r7,r5,1,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0x1;
	// adde r8,r31,r4
	temp.u8 = (ctx.r31.u32 + ctx.r4.u32 < ctx.r31.u32) | (ctx.r31.u32 + ctx.r4.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ctx.r31.u64 + ctx.r4.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// srawi r4,r6,31
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x7FFFFFFF) != 0);
	ctx.r4.s64 = ctx.r6.s32 >> 31;
	// stw r8,-28(r1)
	PPC_STORE_U32(ctx.r1.u32 + -28, ctx.r8.u32);
	// subfc r6,r5,r6
	ctx.xer.ca = ctx.r6.u32 >= ctx.r5.u32;
	ctx.r6.s64 = ctx.r6.s64 - ctx.r5.s64;
	// subf r8,r11,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r11.s64;
	// adde r7,r7,r4
	temp.u8 = (ctx.r7.u32 + ctx.r4.u32 < ctx.r7.u32) | (ctx.r7.u32 + ctx.r4.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r7.u64 = ctx.r7.u64 + ctx.r4.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// srawi r6,r8,31
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7FFFFFFF) != 0);
	ctx.r6.s64 = ctx.r8.s32 >> 31;
	// rlwinm r4,r5,1,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0x1;
	// stw r7,-24(r1)
	PPC_STORE_U32(ctx.r1.u32 + -24, ctx.r7.u32);
	// subfc r8,r5,r8
	ctx.xer.ca = ctx.r8.u32 >= ctx.r5.u32;
	ctx.r8.s64 = ctx.r8.s64 - ctx.r5.s64;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// adde r8,r4,r6
	temp.u8 = (ctx.r4.u32 + ctx.r6.u32 < ctx.r4.u32) | (ctx.r4.u32 + ctx.r6.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ctx.r4.u64 + ctx.r6.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// stw r8,-20(r1)
	PPC_STORE_U32(ctx.r1.u32 + -20, ctx.r8.u32);
	// bge cr6,0x823688b8
	if (!ctx.cr6.lt) goto loc_823688B8;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x823688cc
	if (ctx.cr6.lt) goto loc_823688CC;
loc_823688B8:
	// srawi r9,r10,31
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7FFFFFFF) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 31;
	// rlwinm r8,r11,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// subfc r11,r11,r10
	ctx.xer.ca = ctx.r10.u32 >= ctx.r11.u32;
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// adde r3,r8,r9
	temp.u8 = (ctx.r8.u32 + ctx.r9.u32 < ctx.r8.u32) | (ctx.r8.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ctx.r8.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// b 0x82368910
	goto loc_82368910;
loc_823688CC:
	// li r3,0
	ctx.r3.s64 = 0;
	// li r11,0
	ctx.r11.s64 = 0;
loc_823688D4:
	// addi r10,r1,-32
	ctx.r10.s64 = ctx.r1.s64 + -32;
	// lwzx r10,r11,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x823688f4
	if (ctx.cr6.eq) goto loc_823688F4;
	// addi r10,r1,-24
	ctx.r10.s64 = ctx.r1.s64 + -24;
	// lwzx r10,r11,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82368910
	if (!ctx.cr6.eq) goto loc_82368910;
loc_823688F4:
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// blt cr6,0x823688d4
	if (ctx.cr6.lt) goto loc_823688D4;
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x82368910
	goto loc_82368910;
loc_8236890C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82368910:
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82368918"))) PPC_WEAK_FUNC(sub_82368918);
PPC_FUNC_IMPL(__imp__sub_82368918) {
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
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// lwz r4,388(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 388);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,392(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 392);
	// b 0x82368950
	goto loc_82368950;
loc_8236893C:
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r10,8652(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8652);
	// cmplw cr6,r10,r5
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r5.u32, ctx.xer);
	// beq cr6,0x82368978
	if (ctx.cr6.eq) goto loc_82368978;
	// addi r4,r4,8
	ctx.r4.s64 = ctx.r4.s64 + 8;
loc_82368950:
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8236893c
	if (!ctx.cr6.eq) goto loc_8236893C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8236c038
	ctx.lr = 0x82368960;
	sub_8236C038(ctx, base);
loc_82368960:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
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
loc_82368978:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823f62d0
	ctx.lr = 0x82368980;
	sub_823F62D0(ctx, base);
	// b 0x82368960
	goto loc_82368960;
}

__attribute__((alias("__imp__sub_82368984"))) PPC_WEAK_FUNC(sub_82368984);
PPC_FUNC_IMPL(__imp__sub_82368984) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82368988"))) PPC_WEAK_FUNC(sub_82368988);
PPC_FUNC_IMPL(__imp__sub_82368988) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7668
	ctx.lr = 0x82368990;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// lwz r25,480(r3)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + 480);
	// li r28,0
	ctx.r28.s64 = 0;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// rlwinm. r10,r10,0,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFC;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble 0x82368ab8
	if (!ctx.cr0.gt) goto loc_82368AB8;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// lis r10,-32231
	ctx.r10.s64 = -2112290816;
	// li r27,0
	ctx.r27.s64 = 0;
	// addi r24,r10,9776
	ctx.r24.s64 = ctx.r10.s64 + 9776;
	// lfs f10,-2340(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -2340);
	ctx.f10.f64 = double(temp.f32);
loc_823689CC:
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// li r30,0
	ctx.r30.s64 = 0;
	// lwzx r29,r27,r11
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r11.u32);
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82368a94
	if (!ctx.cr6.gt) goto loc_82368A94;
loc_823689F4:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x824fa600
	ctx.lr = 0x823689FC;
	sub_824FA600(ctx, base);
	// lwz r11,276(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 276);
	// vor128 v1,v77,v77
	_mm_store_si128((__m128i*)ctx.v1.u8, _mm_load_si128((__m128i*)ctx.v77.u8));
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,72(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// bl 0x8246e1c0
	ctx.lr = 0x82368A10;
	sub_8246E1C0(ctx, base);
	// lwz r3,276(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 276);
	// bl 0x82471420
	ctx.lr = 0x82368A18;
	sub_82471420(ctx, base);
	// cmpw cr6,r28,r25
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r25.s32, ctx.xer);
	// li r4,22
	ctx.r4.s64 = 22;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bne cr6,0x82368a3c
	if (!ctx.cr6.eq) goto loc_82368A3C;
	// bl 0x824767b0
	ctx.lr = 0x82368A2C;
	sub_824767B0(ctx, base);
	// fneg f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = ctx.f1.u64 ^ 0x8000000000000000;
	// lfs f13,476(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 476);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// b 0x82368a48
	goto loc_82368A48;
loc_82368A3C:
	// bl 0x824767b0
	ctx.lr = 0x82368A40;
	sub_824767B0(ctx, base);
	// lfs f0,476(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 476);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f0,f1
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f1.f64));
loc_82368A48:
	// stfs f0,476(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 476, temp.u32);
	// fcmpu cr6,f0,f10
	ctx.cr6.compare(ctx.f0.f64, ctx.f10.f64);
	// bge cr6,0x82368a5c
	if (!ctx.cr6.lt) goto loc_82368A5C;
	// stfs f10,476(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 476, temp.u32);
	// b 0x82368a6c
	goto loc_82368A6C;
loc_82368A5C:
	// lfs f13,136(r24)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r24.u32 + 136);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x82368a6c
	if (!ctx.cr6.gt) goto loc_82368A6C;
	// stfs f13,476(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 476, temp.u32);
loc_82368A6C:
	// lfs f0,476(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 476);
	ctx.f0.f64 = double(temp.f32);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// stfs f0,472(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 472, temp.u32);
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x823689f4
	if (ctx.cr6.lt) goto loc_823689F4;
loc_82368A94:
	// lwz r11,8(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r27,r27,4
	ctx.r27.s64 = ctx.r27.s64 + 4;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// srawi r10,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 2;
	// cmpw cr6,r28,r10
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x823689cc
	if (ctx.cr6.lt) goto loc_823689CC;
loc_82368AB8:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82fa76b8
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82368AC0"))) PPC_WEAK_FUNC(sub_82368AC0);
PPC_FUNC_IMPL(__imp__sub_82368AC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7670
	ctx.lr = 0x82368AC8;
	__savegprlr_26(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// rlwinm. r10,r10,0,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFC;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble 0x82368bcc
	if (!ctx.cr0.gt) goto loc_82368BCC;
	// li r29,0
	ctx.r29.s64 = 0;
loc_82368AF0:
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// li r30,0
	ctx.r30.s64 = 0;
	// lwzx r31,r11,r29
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82368ba8
	if (!ctx.cr6.gt) goto loc_82368BA8;
	// vspltisw v0,1
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_set1_epi32(int(0x1)));
	// vspltisw128 v58,0
	_mm_store_si128((__m128i*)ctx.v58.u32, _mm_set1_epi32(int(0x0)));
	// vcsxwfp128 v59,v0,1
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v59.f32, _mm_mul_ps(_mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v0.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x3F000000)))));
loc_82368B24:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x824fa600
	ctx.lr = 0x82368B2C;
	sub_824FA600(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// bl 0x824749f8
	ctx.lr = 0x82368B3C;
	sub_824749F8(ctx, base);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// vor128 v8,v59,v59
	_mm_store_si128((__m128i*)ctx.v8.u8, _mm_load_si128((__m128i*)ctx.v59.u8));
	// li r9,128
	ctx.r9.s64 = 128;
	// li r8,144
	ctx.r8.s64 = 144;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// lvx128 v10,r0,r11
	simd::store_shuffled(ctx.v10, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// vmsum4fp128 v11,v10,v10
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v11.f32, _mm_dp_ps(_mm_load_ps(ctx.v10.f32), _mm_load_ps(ctx.v10.f32), 0xFF));
	// lvx128 v0,r0,r10
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// stvx128 v0,r26,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r26.u32 + ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// vrsqrtefp v0,v11
	_mm_store_ps(ctx.v0.f32, _mm_div_ps(_mm_set1_ps(1), _mm_sqrt_ps(_mm_load_ps(ctx.v11.f32))));
	// vor v13,v11,v11
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_load_si128((__m128i*)ctx.v11.u8));
	// vmulfp128 v12,v11,v59
	_mm_store_ps(ctx.v12.f32, _mm_mul_ps(_mm_load_ps(ctx.v11.f32), _mm_load_ps(ctx.v59.f32)));
	// vcmpeqfp128 v9,v11,v58
	_mm_store_ps(ctx.v9.f32, _mm_cmpeq_ps(_mm_load_ps(ctx.v11.f32), _mm_load_ps(ctx.v58.f32)));
	// vmulfp128 v11,v0,v0
	_mm_store_ps(ctx.v11.f32, _mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v0.f32)));
	// vnmsubfp128 v8,v12,v11,v8
	_mm_store_ps(ctx.v8.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v11.f32)), _mm_load_ps(ctx.v8.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// vmaddfp v0,v0,v8,v0
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v8.f32)), _mm_load_ps(ctx.v0.f32)));
	// vmulfp128 v0,v10,v0
	_mm_store_ps(ctx.v0.f32, _mm_mul_ps(_mm_load_ps(ctx.v10.f32), _mm_load_ps(ctx.v0.f32)));
	// vsel v12,v0,v13,v9
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v9.u8), _mm_load_si128((__m128i*)ctx.v0.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v9.u8), _mm_load_si128((__m128i*)ctx.v13.u8))));
	// stvx128 v12,r26,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r26.u32 + ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82368b24
	if (ctx.cr6.lt) goto loc_82368B24;
loc_82368BA8:
	// lwz r11,8(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// srawi r10,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 2;
	// cmpw cr6,r28,r10
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82368af0
	if (ctx.cr6.lt) goto loc_82368AF0;
loc_82368BCC:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82fa76c0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82368BD4"))) PPC_WEAK_FUNC(sub_82368BD4);
PPC_FUNC_IMPL(__imp__sub_82368BD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82368BD8"))) PPC_WEAK_FUNC(sub_82368BD8);
PPC_FUNC_IMPL(__imp__sub_82368BD8) {
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
	// lwz r11,2524(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2524);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpw cr6,r11,r4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r4.s32, ctx.xer);
	// beq cr6,0x82368c6c
	if (ctx.cr6.eq) goto loc_82368C6C;
	// stw r4,2524(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2524, ctx.r4.u32);
	// bl 0x8226c3f0
	ctx.lr = 0x82368C00;
	sub_8226C3F0(ctx, base);
	// lwz r11,2524(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2524);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82368c6c
	if (ctx.cr6.eq) goto loc_82368C6C;
	// lwz r11,76(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 76);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82368c6c
	if (!ctx.cr6.eq) goto loc_82368C6C;
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82368c6c
	if (ctx.cr6.eq) goto loc_82368C6C;
	// lis r11,-31955
	ctx.r11.s64 = -2094202880;
	// lwz r3,30428(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 30428);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82368c3c
	if (!ctx.cr6.eq) goto loc_82368C3C;
	// bl 0x822599a0
	ctx.lr = 0x82368C3C;
	sub_822599A0(ctx, base);
loc_82368C3C:
	// lbz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 4);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82368c6c
	if (!ctx.cr0.eq) goto loc_82368C6C;
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// lwz r31,8(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r11,556(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 556);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82368c6c
	if (ctx.cr6.eq) goto loc_82368C6C;
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// bl 0x8257e8d8
	ctx.lr = 0x82368C64;
	sub_8257E8D8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,556(r31)
	PPC_STORE_U32(ctx.r31.u32 + 556, ctx.r11.u32);
loc_82368C6C:
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

__attribute__((alias("__imp__sub_82368C80"))) PPC_WEAK_FUNC(sub_82368C80);
PPC_FUNC_IMPL(__imp__sub_82368C80) {
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
	// lwz r11,2528(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2528);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpw cr6,r11,r4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r4.s32, ctx.xer);
	// beq cr6,0x82368d80
	if (ctx.cr6.eq) goto loc_82368D80;
	// stw r4,2528(r3)
	PPC_STORE_U32(ctx.r3.u32 + 2528, ctx.r4.u32);
	// bl 0x8226c3f0
	ctx.lr = 0x82368CAC;
	sub_8226C3F0(ctx, base);
	// lwz r11,2524(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2524);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82368d80
	if (ctx.cr6.eq) goto loc_82368D80;
	// lwz r11,76(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 76);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82368d80
	if (!ctx.cr6.eq) goto loc_82368D80;
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82368d80
	if (ctx.cr6.eq) goto loc_82368D80;
	// lis r11,-31955
	ctx.r11.s64 = -2094202880;
	// lwz r3,30428(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 30428);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82368ce8
	if (!ctx.cr6.eq) goto loc_82368CE8;
	// bl 0x822599a0
	ctx.lr = 0x82368CE8;
	sub_822599A0(ctx, base);
loc_82368CE8:
	// lbz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 4);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82368d80
	if (!ctx.cr0.eq) goto loc_82368D80;
	// lwz r11,160(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 160);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82368d0c
	if (ctx.cr6.eq) goto loc_82368D0C;
	// lwz r11,64(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x82368d1c
	if (ctx.cr6.eq) goto loc_82368D1C;
loc_82368D0C:
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// lwz r11,21120(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 21120);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82368d4c
	if (ctx.cr6.eq) goto loc_82368D4C;
loc_82368D1C:
	// lwz r11,516(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 516);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82368d40
	if (!ctx.cr6.eq) goto loc_82368D40;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823687e0
	ctx.lr = 0x82368D30;
	sub_823687E0(ctx, base);
	// addi r11,r3,1
	ctx.r11.s64 = ctx.r3.s64 + 1;
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r11,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// b 0x82368d44
	goto loc_82368D44;
loc_82368D40:
	// lwz r11,1624(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1624);
loc_82368D44:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82368d80
	if (!ctx.cr6.eq) goto loc_82368D80;
loc_82368D4C:
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// lwz r31,8(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r11,556(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 556);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82368d80
	if (ctx.cr6.eq) goto loc_82368D80;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r30,r31,32
	ctx.r30.s64 = ctx.r31.s64 + 32;
	// bl 0x822a4288
	ctx.lr = 0x82368D6C;
	sub_822A4288(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// bl 0x8257e800
	ctx.lr = 0x82368D78;
	sub_8257E800(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,556(r31)
	PPC_STORE_U32(ctx.r31.u32 + 556, ctx.r11.u32);
loc_82368D80:
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

__attribute__((alias("__imp__sub_82368D98"))) PPC_WEAK_FUNC(sub_82368D98);
PPC_FUNC_IMPL(__imp__sub_82368D98) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// lwz r10,484(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 484);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwzx r8,r10,r11
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r11,16(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 16);
	// lwz r10,0(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// ble cr6,0x82368e40
	if (!ctx.cr6.gt) goto loc_82368E40;
	// lwz r11,16(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 16);
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// bl 0x824fa600
	ctx.lr = 0x82368DF0;
	sub_824FA600(ctx, base);
	// lwz r11,16(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 16);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,0(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// bl 0x824fa600
	ctx.lr = 0x82368E0C;
	sub_824FA600(ctx, base);
	// lwz r11,36(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 36);
	// lwz r9,36(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r10,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addic r8,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r8.s64 = ctx.r9.s64 + -1;
	// subfe r9,r8,r9
	temp.u8 = (~ctx.r8.u32 + ctx.r9.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r8.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// beq cr6,0x82368e40
	if (ctx.cr6.eq) goto loc_82368E40;
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r11,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// b 0x82368e44
	goto loc_82368E44;
loc_82368E40:
	// lwz r3,488(r7)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + 488);
loc_82368E44:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82368E54"))) PPC_WEAK_FUNC(sub_82368E54);
PPC_FUNC_IMPL(__imp__sub_82368E54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82368E58"))) PPC_WEAK_FUNC(sub_82368E58);
PPC_FUNC_IMPL(__imp__sub_82368E58) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa766c
	ctx.lr = 0x82368E60;
	__savegprlr_25(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,480(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 480);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cntlzw r9,r11
	ctx.r9.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// lwz r8,496(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 496);
	// rlwinm r28,r11,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r26,r9,29,29,29
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 29) & 0x4;
	// subf r11,r8,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r8.s64;
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r25,r11,27,31,31
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// lwzx r30,r26,r10
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r26.u32 + ctx.r10.u32);
	// lwzx r29,r28,r10
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r10.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r27,8(r11)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// bl 0x824f99d8
	ctx.lr = 0x82368EB4;
	sub_824F99D8(ctx, base);
	// lwz r11,540(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 540);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82368edc
	if (!ctx.cr6.eq) goto loc_82368EDC;
	// lwz r11,544(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 544);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82368edc
	if (!ctx.cr6.eq) goto loc_82368EDC;
	// lwz r11,512(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 512);
	// li r7,0
	ctx.r7.s64 = 0;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82368ee0
	if (!ctx.cr6.eq) goto loc_82368EE0;
loc_82368EDC:
	// li r7,1
	ctx.r7.s64 = 1;
loc_82368EE0:
	// lis r8,-31958
	ctx.r8.s64 = -2094399488;
	// lis r11,25
	ctx.r11.s64 = 1638400;
	// lis r9,15470
	ctx.r9.s64 = 1013841920;
	// ori r10,r11,26125
	ctx.r10.u64 = ctx.r11.u64 | 26125;
	// ori r11,r9,62303
	ctx.r11.u64 = ctx.r9.u64 | 62303;
	// lwz r9,21292(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 21292);
	// lis r6,-32227
	ctx.r6.s64 = -2112028672;
	// lis r5,-32231
	ctx.r5.s64 = -2112290816;
	// mullw r9,r9,r10
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r10.s32);
	// lfs f0,-24756(r6)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + -24756);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,17660(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 17660);
	ctx.f13.f64 = double(temp.f32);
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// clrlwi r6,r9,9
	ctx.r6.u64 = ctx.r9.u32 & 0x7FFFFF;
	// stw r9,21292(r8)
	PPC_STORE_U32(ctx.r8.u32 + 21292, ctx.r9.u32);
	// oris r6,r6,16256
	ctx.r6.u64 = ctx.r6.u64 | 1065353216;
	// stw r6,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r6.u32);
	// lfs f12,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x82368f98
	if (ctx.cr6.gt) goto loc_82368F98;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne cr6,0x82368f98
	if (!ctx.cr6.eq) goto loc_82368F98;
	// cmplw cr6,r3,r27
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r27.u32, ctx.xer);
	// bge cr6,0x82368f98
	if (!ctx.cr6.lt) goto loc_82368F98;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82368f64
	if (!ctx.cr6.eq) goto loc_82368F64;
	// mullw r10,r9,r10
	ctx.r10.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r10.s32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// neg r10,r11
	ctx.r10.s64 = -ctx.r11.s64;
	// stw r11,21292(r8)
	PPC_STORE_U32(ctx.r8.u32 + 21292, ctx.r11.u32);
	// andc r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ~ctx.r11.u64;
	// rlwinm r4,r11,1,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// b 0x82368f78
	goto loc_82368F78;
loc_82368F64:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x824f9968
	ctx.lr = 0x82368F6C;
	sub_824F9968(ctx, base);
	// lwz r11,40(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r4,r11,27,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
loc_82368F78:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwzx r11,r11,r26
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r26.u32);
loc_82368F84:
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// b 0x82369018
	goto loc_82369018;
loc_82368F98:
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// beq cr6,0x82368fc4
	if (ctx.cr6.eq) goto loc_82368FC4;
	// lwz r4,500(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 500);
	// cmpwi cr6,r4,-1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, -1, ctx.xer);
	// beq cr6,0x82368fc4
	if (ctx.cr6.eq) goto loc_82368FC4;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,496(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 496);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// b 0x82368f84
	goto loc_82368F84;
loc_82368FC4:
	// lwz r7,32(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lwzx r7,r7,r28
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r28.u32);
	// lwz r6,4(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// lwz r7,0(r7)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// subf r7,r7,r6
	ctx.r7.s64 = ctx.r6.s64 - ctx.r7.s64;
	// rlwinm r7,r7,0,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFFC;
	// cmpwi cr6,r7,4
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 4, ctx.xer);
	// bne cr6,0x82368ff0
	if (!ctx.cr6.eq) goto loc_82368FF0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x824f9968
	ctx.lr = 0x82368FEC;
	sub_824F9968(ctx, base);
	// b 0x8236901c
	goto loc_8236901C;
loc_82368FF0:
	// mullw r10,r9,r10
	ctx.r10.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r10.s32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r11,21292(r8)
	PPC_STORE_U32(ctx.r8.u32 + 21292, ctx.r11.u32);
	// neg r10,r11
	ctx.r10.s64 = -ctx.r11.s64;
	// lwz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r8,16(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// andc r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ~ctx.r11.u64;
	// lwzx r3,r8,r9
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// rlwinm r4,r11,1,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
loc_82369018:
	// bl 0x824fa600
	ctx.lr = 0x8236901C;
	sub_824FA600(ctx, base);
loc_8236901C:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82fa76bc
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82369024"))) PPC_WEAK_FUNC(sub_82369024);
PPC_FUNC_IMPL(__imp__sub_82369024) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82369028"))) PPC_WEAK_FUNC(sub_82369028);
PPC_FUNC_IMPL(__imp__sub_82369028) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x82369030;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r9
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// lwz r29,8(r10)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8236909c
	if (ctx.cr6.eq) goto loc_8236909C;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// rotlwi r11,r9,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r30,r10,r11
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
loc_82369074:
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x824fa600
	ctx.lr = 0x82369080;
	sub_824FA600(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82475cd8
	ctx.lr = 0x82369088;
	sub_82475CD8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x823690a8
	if (!ctx.cr0.eq) goto loc_823690A8;
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// cmplw cr6,r5,r29
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r29.u32, ctx.xer);
	// blt cr6,0x82369074
	if (ctx.cr6.lt) goto loc_82369074;
loc_8236909C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823690A0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
loc_823690A8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x823690a0
	goto loc_823690A0;
}

__attribute__((alias("__imp__sub_823690B0"))) PPC_WEAK_FUNC(sub_823690B0);
PPC_FUNC_IMPL(__imp__sub_823690B0) {
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
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi. r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble 0x8236914c
	if (!ctx.cr0.gt) goto loc_8236914C;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
loc_823690E0:
	// lwz r11,8(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwzx r11,r11,r8
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r7,8(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82369140
	if (ctx.cr6.eq) goto loc_82369140;
loc_8236910C:
	// lwz r11,8(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwzx r11,r11,r8
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// bl 0x824fa600
	ctx.lr = 0x8236912C;
	sub_824FA600(ctx, base);
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplw cr6,r4,r7
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r7.u32, ctx.xer);
	// stw r11,832(r3)
	PPC_STORE_U32(ctx.r3.u32 + 832, ctx.r11.u32);
	// blt cr6,0x8236910c
	if (ctx.cr6.lt) goto loc_8236910C;
loc_82369140:
	// addic. r5,r5,-1
	ctx.xer.ca = ctx.r5.u32 > 0;
	ctx.r5.s64 = ctx.r5.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// bne 0x823690e0
	if (!ctx.cr0.eq) goto loc_823690E0;
loc_8236914C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8236915C"))) PPC_WEAK_FUNC(sub_8236915C);
PPC_FUNC_IMPL(__imp__sub_8236915C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82369160"))) PPC_WEAK_FUNC(sub_82369160);
PPC_FUNC_IMPL(__imp__sub_82369160) {
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
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi. r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble 0x823691fc
	if (!ctx.cr0.gt) goto loc_823691FC;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
loc_82369190:
	// lwz r11,8(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwzx r11,r11,r8
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r7,8(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x823691f0
	if (ctx.cr6.eq) goto loc_823691F0;
loc_823691BC:
	// lwz r11,8(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwzx r11,r11,r8
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// bl 0x824fa600
	ctx.lr = 0x823691DC;
	sub_824FA600(ctx, base);
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplw cr6,r4,r7
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r7.u32, ctx.xer);
	// stw r11,684(r3)
	PPC_STORE_U32(ctx.r3.u32 + 684, ctx.r11.u32);
	// blt cr6,0x823691bc
	if (ctx.cr6.lt) goto loc_823691BC;
loc_823691F0:
	// addic. r5,r5,-1
	ctx.xer.ca = ctx.r5.u32 > 0;
	ctx.r5.s64 = ctx.r5.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// bne 0x82369190
	if (!ctx.cr0.eq) goto loc_82369190;
loc_823691FC:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8236920C"))) PPC_WEAK_FUNC(sub_8236920C);
PPC_FUNC_IMPL(__imp__sub_8236920C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82369210"))) PPC_WEAK_FUNC(sub_82369210);
PPC_FUNC_IMPL(__imp__sub_82369210) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x82369218;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r4,r4,64
	ctx.r4.s64 = ctx.r4.s64 + 64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r5,84(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// bl 0x8243cd28
	ctx.lr = 0x82369234;
	sub_8243CD28(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823692b4
	if (ctx.cr6.eq) goto loc_823692B4;
	// lwz r29,84(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8236926c
	if (ctx.cr6.eq) goto loc_8236926C;
	// addi r10,r29,4
	ctx.r10.s64 = ctx.r29.s64 + 4;
loc_82369250:
	// mfmsr r8
	ctx.r8.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r9,0,r10
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r10.u32);
	ctx.r9.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stwcx. r9,0,r10
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r10.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r9.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r8,1
	ctx.msr = (ctx.r8.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x82369250
	if (!ctx.cr0.eq) goto loc_82369250;
loc_8236926C:
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// cmplw cr6,r31,r10
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82369298
	if (ctx.cr6.eq) goto loc_82369298;
	// stw r29,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r29.u32);
	// rotlwi r3,r30,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r30.u32, 0);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_82369298:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823692a4
	if (ctx.cr6.eq) goto loc_823692A4;
	// bl 0x82241d18
	ctx.lr = 0x823692A4;
	sub_82241D18(ctx, base);
loc_823692A4:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82369320
	if (ctx.cr6.eq) goto loc_82369320;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// b 0x8236931c
	goto loc_8236931C;
loc_823692B4:
	// li r30,0
	ctx.r30.s64 = 0;
	// li r3,16
	ctx.r3.s64 = 16;
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// bl 0x82691500
	ctx.lr = 0x823692C8;
	sub_82691500(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x823692f4
	if (ctx.cr0.eq) goto loc_823692F4;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// stw r30,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r30.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r10,r10,-27204
	ctx.r10.s64 = ctx.r10.s64 + -27204;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// b 0x823692f8
	goto loc_823692F8;
loc_823692F4:
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
loc_823692F8:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82369308
	if (ctx.cr6.eq) goto loc_82369308;
	// bl 0x82241d18
	ctx.lr = 0x82369308;
	sub_82241D18(ctx, base);
loc_82369308:
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r29,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r29.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// beq cr6,0x82369320
	if (ctx.cr6.eq) goto loc_82369320;
loc_8236931C:
	// bl 0x82241d18
	ctx.lr = 0x82369320;
	sub_82241D18(ctx, base);
loc_82369320:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8236932C"))) PPC_WEAK_FUNC(sub_8236932C);
PPC_FUNC_IMPL(__imp__sub_8236932C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82369330"))) PPC_WEAK_FUNC(sub_82369330);
PPC_FUNC_IMPL(__imp__sub_82369330) {
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
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r4,r4,64
	ctx.r4.s64 = ctx.r4.s64 + 64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r5,84(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// bl 0x8243cd28
	ctx.lr = 0x8236935C;
	sub_8243CD28(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// lwz r30,84(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82369394
	if (ctx.cr6.eq) goto loc_82369394;
	// addi r11,r30,4
	ctx.r11.s64 = ctx.r30.s64 + 4;
loc_82369378:
	// mfmsr r9
	ctx.r9.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r11
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r11.u32);
	ctx.r10.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwcx. r10,0,r11
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r11.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r10.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x82369378
	if (!ctx.cr0.eq) goto loc_82369378;
loc_82369394:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823693a4
	if (ctx.cr6.eq) goto loc_823693A4;
	// bl 0x82241d18
	ctx.lr = 0x823693A4;
	sub_82241D18(ctx, base);
loc_823693A4:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// beq cr6,0x823693c0
	if (ctx.cr6.eq) goto loc_823693C0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82241d18
	ctx.lr = 0x823693C0;
	sub_82241D18(ctx, base);
loc_823693C0:
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

__attribute__((alias("__imp__sub_823693DC"))) PPC_WEAK_FUNC(sub_823693DC);
PPC_FUNC_IMPL(__imp__sub_823693DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823693E0"))) PPC_WEAK_FUNC(sub_823693E0);
PPC_FUNC_IMPL(__imp__sub_823693E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7670
	ctx.lr = 0x823693E8;
	__savegprlr_26(ctx, base);
	// stfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r28,388(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 388);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// lwz r11,392(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 392);
	// addi r29,r3,388
	ctx.r29.s64 = ctx.r3.s64 + 388;
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x823694cc
	if (ctx.cr6.eq) goto loc_823694CC;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// li r27,0
	ctx.r27.s64 = 0;
	// lfs f31,-27104(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -27104);
	ctx.f31.f64 = double(temp.f32);
loc_82369414:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r10,212(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 212);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x823694bc
	if (ctx.cr6.eq) goto loc_823694BC;
	// lfs f0,228(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 228);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bge cr6,0x823694bc
	if (!ctx.cr6.lt) goto loc_823694BC;
	// lwz r30,4(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// addi r31,r28,8
	ctx.r31.s64 = ctx.r28.s64 + 8;
	// b 0x8236947c
	goto loc_8236947C;
loc_8236943C:
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// cmplw cr6,r9,r31
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x82369460
	if (ctx.cr6.eq) goto loc_82369460;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r27,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r27.u32);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r27,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r27.u32);
loc_82369460:
	// lwz r3,-4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	// stw r11,-4(r31)
	PPC_STORE_U32(ctx.r31.u32 + -4, ctx.r11.u32);
	// stw r10,-8(r31)
	PPC_STORE_U32(ctx.r31.u32 + -8, ctx.r10.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82369478
	if (ctx.cr6.eq) goto loc_82369478;
	// bl 0x82241d18
	ctx.lr = 0x82369478;
	sub_82241D18(ctx, base);
loc_82369478:
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
loc_8236947C:
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x8236943c
	if (!ctx.cr6.eq) goto loc_8236943C;
	// lwz r30,4(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// addi r31,r30,-8
	ctx.r31.s64 = ctx.r30.s64 + -8;
	// b 0x823694a4
	goto loc_823694A4;
loc_82369490:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823694a0
	if (ctx.cr6.eq) goto loc_823694A0;
	// bl 0x82241d18
	ctx.lr = 0x823694A0;
	sub_82241D18(ctx, base);
loc_823694A0:
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
loc_823694A4:
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x82369490
	if (!ctx.cr6.eq) goto loc_82369490;
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// addi r11,r11,-8
	ctx.r11.s64 = ctx.r11.s64 + -8;
	// stw r11,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r11.u32);
	// b 0x823694c0
	goto loc_823694C0;
loc_823694BC:
	// addi r28,r28,8
	ctx.r28.s64 = ctx.r28.s64 + 8;
loc_823694C0:
	// lwz r11,392(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 392);
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82369414
	if (!ctx.cr6.eq) goto loc_82369414;
loc_823694CC:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x82fa76c0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823694D8"))) PPC_WEAK_FUNC(sub_823694D8);
PPC_FUNC_IMPL(__imp__sub_823694D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa766c
	ctx.lr = 0x823694E0;
	__savegprlr_25(ctx, base);
	// stfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.f31.u64);
	// stwu r1,-352(r1)
	ea = -352 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r9,-32231
	ctx.r9.s64 = -2112290816;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r8,r9,19760
	ctx.r8.s64 = ctx.r9.s64 + 19760;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// lfs f3,19760(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 19760);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,2076(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 2076);
	ctx.f2.f64 = double(temp.f32);
	// lwzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lfs f1,20(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8255c838
	ctx.lr = 0x8236952C;
	sub_8255C838(ctx, base);
	// lwz r11,1356(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1356);
	// mr. r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// beq 0x82369544
	if (ctx.cr0.eq) goto loc_82369544;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// addi r28,r10,-20536
	ctx.r28.s64 = ctx.r10.s64 + -20536;
	// b 0x8236954c
	goto loc_8236954C;
loc_82369544:
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// addi r28,r10,-20524
	ctx.r28.s64 = ctx.r10.s64 + -20524;
loc_8236954C:
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r30,0(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r29,4(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x82369570
	goto loc_82369570;
loc_8236955C:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r3,40(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// bl 0x822be780
	ctx.lr = 0x8236956C;
	sub_822BE780(ctx, base);
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
loc_82369570:
	// cmplw cr6,r30,r29
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r29.u32, ctx.xer);
	// bne cr6,0x8236955c
	if (!ctx.cr6.eq) goto loc_8236955C;
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// lfs f31,-24756(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -24756);
	ctx.f31.f64 = double(temp.f32);
	// beq cr6,0x82369590
	if (ctx.cr6.eq) goto loc_82369590;
	// fmr f12,f31
	ctx.f12.f64 = ctx.f31.f64;
	// b 0x82369598
	goto loc_82369598;
loc_82369590:
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lfs f12,31512(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 31512);
	ctx.f12.f64 = double(temp.f32);
loc_82369598:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82368640
	ctx.lr = 0x823695A4;
	sub_82368640(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x823695c4
	if (!ctx.cr0.eq) goto loc_823695C4;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82368640
	ctx.lr = 0x823695B8;
	sub_82368640(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// beq 0x823695c8
	if (ctx.cr0.eq) goto loc_823695C8;
loc_823695C4:
	// li r11,1
	ctx.r11.s64 = 1;
loc_823695C8:
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r9,24
	ctx.r9.s64 = 24;
	// lwz r8,1356(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1356);
	// li r7,28
	ctx.r7.s64 = 28;
	// li r6,0
	ctx.r6.s64 = 0;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r5,0(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r4,16(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 16);
	// lwz r3,16(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// lwz r5,0(r5)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// rlwinm r4,r4,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r3,r3,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r5,r4,r5
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r5.u32);
	// lwzx r10,r3,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r10.u32);
	// lfs f0,32(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 32);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,32(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	ctx.f13.f64 = double(temp.f32);
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f0.f64));
	// stfiwx f0,r8,r9
	PPC_STORE_U32(ctx.r8.u32 + ctx.r9.u32, ctx.f0.u32);
	// fctiwz f0,f13
	ctx.f0.s64 = (ctx.f13.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f13.f64));
	// stfs f12,12(r8)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r8.u32 + 12, temp.u32);
	// stw r6,16(r8)
	PPC_STORE_U32(ctx.r8.u32 + 16, ctx.r6.u32);
	// stfiwx f0,r8,r7
	PPC_STORE_U32(ctx.r8.u32 + ctx.r7.u32, ctx.f0.u32);
	// stw r11,20(r8)
	PPC_STORE_U32(ctx.r8.u32 + 20, ctx.r11.u32);
	// beq cr6,0x82369640
	if (ctx.cr6.eq) goto loc_82369640;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r28,r11,16912
	ctx.r28.s64 = ctx.r11.s64 + 16912;
	// b 0x82369648
	goto loc_82369648;
loc_82369640:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r28,r11,16932
	ctx.r28.s64 = ctx.r11.s64 + 16932;
loc_82369648:
	// lwz r11,168(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 168);
	// lwz r30,0(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r29,4(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x8236966c
	goto loc_8236966C;
loc_82369658:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r3,40(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// bl 0x822be780
	ctx.lr = 0x82369668;
	sub_822BE780(ctx, base);
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
loc_8236966C:
	// cmplw cr6,r30,r29
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r29.u32, ctx.xer);
	// bne cr6,0x82369658
	if (!ctx.cr6.eq) goto loc_82369658;
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// bne cr6,0x82369688
	if (!ctx.cr6.eq) goto loc_82369688;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r28,r11,16952
	ctx.r28.s64 = ctx.r11.s64 + 16952;
	// b 0x82369690
	goto loc_82369690;
loc_82369688:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r28,r11,16964
	ctx.r28.s64 = ctx.r11.s64 + 16964;
loc_82369690:
	// lwz r11,168(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 168);
	// lwz r30,0(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r29,4(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x823696b4
	goto loc_823696B4;
loc_823696A0:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r3,40(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// bl 0x822be780
	ctx.lr = 0x823696B0;
	sub_822BE780(ctx, base);
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
loc_823696B4:
	// cmplw cr6,r30,r29
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r29.u32, ctx.xer);
	// bne cr6,0x823696a0
	if (!ctx.cr6.eq) goto loc_823696A0;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8224edb8
	ctx.lr = 0x823696CC;
	sub_8224EDB8(ctx, base);
	// lis r9,-31958
	ctx.r9.s64 = -2094399488;
	// lwz r10,2580(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2580);
	// lis r11,25
	ctx.r11.s64 = 1638400;
	// lis r7,-32229
	ctx.r7.s64 = -2112159744;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// ori r8,r11,26125
	ctx.r8.u64 = ctx.r11.u64 | 26125;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// extsw r10,r10
	ctx.r10.s64 = ctx.r10.s32;
	// addi r4,r7,16976
	ctx.r4.s64 = ctx.r7.s64 + 16976;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// lwz r11,21292(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 21292);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// mullw r11,r11,r8
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r8.s32);
	// addis r11,r11,15471
	ctx.r11.s64 = ctx.r11.s64 + 1013907456;
	// addi r11,r11,-3233
	ctx.r11.s64 = ctx.r11.s64 + -3233;
	// clrlwi r10,r11,9
	ctx.r10.u64 = ctx.r11.u32 & 0x7FFFFF;
	// stw r11,21292(r9)
	PPC_STORE_U32(ctx.r9.u32 + 21292, ctx.r11.u32);
	// oris r11,r10,16256
	ctx.r11.u64 = ctx.r10.u64 | 1065353216;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lfs f13,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f13,f13,f31
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f31.f64));
	// fmadds f0,f13,f0,f31
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64 + ctx.f31.f64));
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f0.f64));
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// bl 0x82251da0
	ctx.lr = 0x8236973C;
	sub_82251DA0(ctx, base);
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x82251960
	ctx.lr = 0x82369744;
	sub_82251960(ctx, base);
	// addi r4,r1,132
	ctx.r4.s64 = ctx.r1.s64 + 132;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82252010
	ctx.lr = 0x82369750;
	sub_82252010(ctx, base);
	// lwz r10,168(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 168);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// lwz r30,4(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x82369794
	if (ctx.cr6.eq) goto loc_82369794;
loc_82369768:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r10,16
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 16, ctx.xer);
	// lwz r3,40(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// bge cr6,0x82369784
	if (!ctx.cr6.lt) goto loc_82369784;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
loc_82369784:
	// bl 0x822be780
	ctx.lr = 0x82369788;
	sub_822BE780(ctx, base);
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x82369768
	if (!ctx.cr6.eq) goto loc_82369768;
loc_82369794:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x822402c8
	ctx.lr = 0x823697A4;
	sub_822402C8(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8224fa68
	ctx.lr = 0x823697AC;
	sub_8224FA68(ctx, base);
	// addi r1,r1,352
	ctx.r1.s64 = ctx.r1.s64 + 352;
	// lfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x82fa76bc
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823697B8"))) PPC_WEAK_FUNC(sub_823697B8);
PPC_FUNC_IMPL(__imp__sub_823697B8) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82368730
	ctx.lr = 0x823697D8;
	sub_82368730(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r3,2552(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2552, ctx.r3.u32);
	// lis r9,-32227
	ctx.r9.s64 = -2112028672;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lfs f0,-24756(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -24756);
	ctx.f0.f64 = double(temp.f32);
	// lwzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,16(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r9,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f13,32(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	ctx.f13.f64 = double(temp.f32);
	// lwzx r11,r11,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// fadds f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// stfs f0,32(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 32, temp.u32);
	// lwz r11,2552(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2552);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82369834
	if (ctx.cr6.eq) goto loc_82369834;
	// li r3,39
	ctx.r3.s64 = 39;
	// b 0x82369868
	goto loc_82369868;
loc_82369834:
	// lwz r11,516(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 516);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82369858
	if (!ctx.cr6.eq) goto loc_82369858;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823687e0
	ctx.lr = 0x82369848;
	sub_823687E0(ctx, base);
	// addi r11,r3,1
	ctx.r11.s64 = ctx.r3.s64 + 1;
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r11,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// b 0x8236985c
	goto loc_8236985C;
loc_82369858:
	// lwz r11,1624(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1624);
loc_8236985C:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82369880
	if (ctx.cr6.eq) goto loc_82369880;
	// li r3,8
	ctx.r3.s64 = 8;
loc_82369868:
	// bl 0x82365400
	ctx.lr = 0x8236986C;
	sub_82365400(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq 0x82369880
	if (ctx.cr0.eq) goto loc_82369880;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,164(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 164);
	// bl 0x8227d838
	ctx.lr = 0x82369880;
	sub_8227D838(ctx, base);
loc_82369880:
	// lwz r11,536(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 536);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r30,480(r31)
	PPC_STORE_U32(ctx.r31.u32 + 480, ctx.r30.u32);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,536(r31)
	PPC_STORE_U32(ctx.r31.u32 + 536, ctx.r11.u32);
	// bl 0x8236a858
	ctx.lr = 0x82369898;
	sub_8236A858(ctx, base);
	// lwz r11,148(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823698cc
	if (ctx.cr6.eq) goto loc_823698CC;
	// lwz r3,28(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823698cc
	if (ctx.cr6.eq) goto loc_823698CC;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823698c4
	if (ctx.cr6.eq) goto loc_823698C4;
	// addi r4,r11,-1
	ctx.r4.s64 = ctx.r11.s64 + -1;
loc_823698C4:
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x822ec5a0
	ctx.lr = 0x823698CC;
	sub_822EC5A0(ctx, base);
loc_823698CC:
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

