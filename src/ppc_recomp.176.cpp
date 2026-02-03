#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_82A2670C"))) PPC_WEAK_FUNC(sub_82A2670C);
PPC_FUNC_IMPL(__imp__sub_82A2670C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A26710"))) PPC_WEAK_FUNC(sub_82A26710);
PPC_FUNC_IMPL(__imp__sub_82A26710) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stfd f31,-24(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.f31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lbz r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 32);
	// addi r31,r3,32
	ctx.r31.s64 = ctx.r3.s64 + 32;
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lfs f31,5184(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5184);
	ctx.f31.f64 = double(temp.f32);
	// bne 0x82a26748
	if (!ctx.cr0.eq) goto loc_82A26748;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a267d0
	if (ctx.cr6.eq) goto loc_82A267D0;
loc_82A26748:
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,9
	ctx.r9.s64 = 9;
	// stw r10,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r10.u32);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// beq 0x82a26790
	if (ctx.cr0.eq) goto loc_82A26790;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a26790
	if (ctx.cr6.eq) goto loc_82A26790;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// b 0x82a26790
	goto loc_82A26790;
loc_82A2677C:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lfs f0,20(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// fadds f31,f0,f31
	ctx.f31.f64 = double(float(ctx.f0.f64 + ctx.f31.f64));
loc_82A26790:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a26360
	ctx.lr = 0x82A26798;
	sub_82A26360(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82a2677c
	if (!ctx.cr0.eq) goto loc_82A2677C;
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// li r11,10
	ctx.r11.s64 = 10;
	// bne 0x82a267b4
	if (!ctx.cr0.eq) goto loc_82A267B4;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
loc_82A267B4:
	// clrldi r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fdivs f1,f31,f0
	ctx.f1.f64 = double(float(ctx.f31.f64 / ctx.f0.f64));
	// b 0x82a267d4
	goto loc_82A267D4;
loc_82A267D0:
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
loc_82A267D4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f31,-24(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A267EC"))) PPC_WEAK_FUNC(sub_82A267EC);
PPC_FUNC_IMPL(__imp__sub_82A267EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A267F0"))) PPC_WEAK_FUNC(sub_82A267F0);
PPC_FUNC_IMPL(__imp__sub_82A267F0) {
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
	// li r10,10
	ctx.r10.s64 = 10;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stb r11,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r11.u8);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// addi r11,r3,-4
	ctx.r11.s64 = ctx.r3.s64 + -4;
	// lfs f0,5184(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5184);
	ctx.f0.f64 = double(temp.f32);
loc_82A26830:
	// stfs f0,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stfsu f0,8(r11)
	temp.f32 = float(ctx.f0.f64);
	ea = 8 + ctx.r11.u32;
	PPC_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x82a26830
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82A26830;
	// li r5,80
	ctx.r5.s64 = 80;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82fa7cf0
	ctx.lr = 0x82A26848;
	sub_82FA7CF0(ctx, base);
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

__attribute__((alias("__imp__sub_82A26860"))) PPC_WEAK_FUNC(sub_82A26860);
PPC_FUNC_IMPL(__imp__sub_82A26860) {
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
	// addi r3,r3,32
	ctx.r3.s64 = ctx.r3.s64 + 32;
	// bl 0x82a267f0
	ctx.lr = 0x82A2687C;
	sub_82A267F0(ctx, base);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// li r10,16
	ctx.r10.s64 = 16;
	// addi r11,r11,15312
	ctx.r11.s64 = ctx.r11.s64 + 15312;
	// li r9,1
	ctx.r9.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stb r9,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r9.u8);
	// lvx128 v63,r0,r11
	simd::store_shuffled(ctx.v63, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// stvx128 v63,r31,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32 + ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
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

__attribute__((alias("__imp__sub_82A268B0"))) PPC_WEAK_FUNC(sub_82A268B0);
PPC_FUNC_IMPL(__imp__sub_82A268B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x82A268B8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r31,19
	ctx.r31.s64 = 19;
loc_82A268C8:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a26860
	ctx.lr = 0x82A268D0;
	sub_82A26860(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r30,r30,128
	ctx.r30.s64 = ctx.r30.s64 + 128;
	// bge 0x82a268c8
	if (!ctx.cr0.lt) goto loc_82A268C8;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A268E8"))) PPC_WEAK_FUNC(sub_82A268E8);
PPC_FUNC_IMPL(__imp__sub_82A268E8) {
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
	// addi r5,r4,32
	ctx.r5.s64 = ctx.r4.s64 + 32;
	// addi r4,r4,352
	ctx.r4.s64 = ctx.r4.s64 + 352;
	// li r6,20
	ctx.r6.s64 = 20;
loc_82A26900:
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82a26914
	if (ctx.cr6.eq) goto loc_82A26914;
	// lvx128 v1,r0,r5
	simd::store_shuffled(ctx.v1, simd::load_and_shuffle(base + ((ctx.r5.u32) & ~0xF), VectorMaskL));
	// bl 0x82a263d0
	ctx.lr = 0x82A26914;
	sub_82A263D0(ctx, base);
loc_82A26914:
	// addic. r6,r6,-1
	ctx.xer.ca = ctx.r6.u32 > 0;
	ctx.r6.s64 = ctx.r6.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// addi r4,r4,4
	ctx.r4.s64 = ctx.r4.s64 + 4;
	// addi r5,r5,16
	ctx.r5.s64 = ctx.r5.s64 + 16;
	// addi r3,r3,128
	ctx.r3.s64 = ctx.r3.s64 + 128;
	// bne 0x82a26900
	if (!ctx.cr0.eq) goto loc_82A26900;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A26938"))) PPC_WEAK_FUNC(sub_82A26938);
PPC_FUNC_IMPL(__imp__sub_82A26938) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// addi r10,r10,29064
	ctx.r10.s64 = ctx.r10.s64 + 29064;
	// lfs f0,5184(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5184);
	ctx.f0.f64 = double(temp.f32);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stfs f0,4(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// stfs f0,8(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 8, temp.u32);
	// stfs f0,12(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 12, temp.u32);
	// stfs f0,16(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 16, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A26960"))) PPC_WEAK_FUNC(sub_82A26960);
PPC_FUNC_IMPL(__imp__sub_82A26960) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lfs f0,5184(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5184);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bge cr6,0x82a26980
	if (!ctx.cr6.lt) goto loc_82A26980;
loc_82A26974:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// blr 
	return;
loc_82A26980:
	// fcmpu cr6,f2,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f2.f64, ctx.f0.f64);
	// ble cr6,0x82a26974
	if (!ctx.cr6.gt) goto loc_82A26974;
	// fcmpu cr6,f3,f0
	ctx.cr6.compare(ctx.f3.f64, ctx.f0.f64);
	// ble cr6,0x82a26974
	if (!ctx.cr6.gt) goto loc_82A26974;
	// stfs f1,4(r11)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stfs f2,8(r11)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// stfs f3,12(r11)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A269A4"))) PPC_WEAK_FUNC(sub_82A269A4);
PPC_FUNC_IMPL(__imp__sub_82A269A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A269A8"))) PPC_WEAK_FUNC(sub_82A269A8);
PPC_FUNC_IMPL(__imp__sub_82A269A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lfs f0,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// lfs f0,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r5)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r5.u32 + 0, temp.u32);
	// lfs f0,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r6)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r6.u32 + 0, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A269CC"))) PPC_WEAK_FUNC(sub_82A269CC);
PPC_FUNC_IMPL(__imp__sub_82A269CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A269D0"))) PPC_WEAK_FUNC(sub_82A269D0);
PPC_FUNC_IMPL(__imp__sub_82A269D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// stfs f1,4(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 4, temp.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A269DC"))) PPC_WEAK_FUNC(sub_82A269DC);
PPC_FUNC_IMPL(__imp__sub_82A269DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A269E0"))) PPC_WEAK_FUNC(sub_82A269E0);
PPC_FUNC_IMPL(__imp__sub_82A269E0) {
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
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// lfs f0,5184(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5184);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bgt cr6,0x82a26a10
	if (ctx.cr6.gt) goto loc_82A26A10;
loc_82A26A04:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// b 0x82a26a30
	goto loc_82A26A30;
loc_82A26A10:
	// fcmpu cr6,f2,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f2.f64, ctx.f0.f64);
	// ble cr6,0x82a26a04
	if (!ctx.cr6.gt) goto loc_82A26A04;
	// fdivs f0,f1,f2
	ctx.f0.f64 = double(float(ctx.f1.f64 / ctx.f2.f64));
	// fneg f1,f0
	ctx.f1.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// bl 0x82fa4be8
	ctx.lr = 0x82A26A24;
	sub_82FA4BE8(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// stfs f0,0(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// li r3,0
	ctx.r3.s64 = 0;
loc_82A26A30:
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

__attribute__((alias("__imp__sub_82A26A44"))) PPC_WEAK_FUNC(sub_82A26A44);
PPC_FUNC_IMPL(__imp__sub_82A26A44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A26A48"))) PPC_WEAK_FUNC(sub_82A26A48);
PPC_FUNC_IMPL(__imp__sub_82A26A48) {
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
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmr f30,f1
	ctx.f30.f64 = ctx.f1.f64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fmr f31,f2
	ctx.f31.f64 = ctx.f2.f64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// lfs f0,5184(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5184);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f2,f0
	ctx.cr6.compare(ctx.f2.f64, ctx.f0.f64);
	// bgt cr6,0x82a26a90
	if (ctx.cr6.gt) goto loc_82A26A90;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// b 0x82a26b0c
	goto loc_82A26B0C;
loc_82A26A90:
	// lfs f13,8(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgt cr6,0x82a26aa8
	if (ctx.cr6.gt) goto loc_82A26AA8;
loc_82A26A9C:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,65535
	ctx.r3.u64 = ctx.r3.u64 | 65535;
	// b 0x82a26b0c
	goto loc_82A26B0C;
loc_82A26AA8:
	// lfs f2,12(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f2.f64 = double(temp.f32);
	// fcmpu cr6,f2,f0
	ctx.cr6.compare(ctx.f2.f64, ctx.f0.f64);
	// ble cr6,0x82a26a9c
	if (!ctx.cr6.gt) goto loc_82A26A9C;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a269e0
	ctx.lr = 0x82A26AC4;
	sub_82A269E0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x82a26ae4
	if (!ctx.cr0.lt) goto loc_82A26AE4;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lfs f2,12(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	ctx.f2.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82a269e0
	ctx.lr = 0x82A26AE0;
	sub_82A269E0(ctx, base);
	// b 0x82a26b0c
	goto loc_82A26B0C;
loc_82A26AE4:
	// lis r11,-32233
	ctx.r11.s64 = -2112421888;
	// lfs f0,4(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// li r3,0
	ctx.r3.s64 = 0;
	// fmuls f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// lfs f0,24436(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24436);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// fmadds f0,f0,f30,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f30.f64 + ctx.f12.f64));
	// stfs f0,0(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// stfs f0,16(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
loc_82A26B0C:
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

__attribute__((alias("__imp__sub_82A26B2C"))) PPC_WEAK_FUNC(sub_82A26B2C);
PPC_FUNC_IMPL(__imp__sub_82A26B2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A26B30"))) PPC_WEAK_FUNC(sub_82A26B30);
PPC_FUNC_IMPL(__imp__sub_82A26B30) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x82a26b5c
	if (ctx.cr6.lt) goto loc_82A26B5C;
	// beq cr6,0x82a26b54
	if (ctx.cr6.eq) goto loc_82A26B54;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// blr 
	return;
loc_82A26B54:
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// b 0x82a28d28
	sub_82A28D28(ctx, base);
	return;
loc_82A26B5C:
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// b 0x82a28768
	sub_82A28768(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A26B64"))) PPC_WEAK_FUNC(sub_82A26B64);
PPC_FUNC_IMPL(__imp__sub_82A26B64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A26B68"))) PPC_WEAK_FUNC(sub_82A26B68);
PPC_FUNC_IMPL(__imp__sub_82A26B68) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r3,1
	ctx.r11.s64 = ctx.r3.s64 + 1;
	// addi r10,r4,1
	ctx.r10.s64 = ctx.r4.s64 + 1;
	// mullw r11,r11,r10
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// rlwinm r3,r11,3,0,28
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A26B7C"))) PPC_WEAK_FUNC(sub_82A26B7C);
PPC_FUNC_IMPL(__imp__sub_82A26B7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A26B80"))) PPC_WEAK_FUNC(sub_82A26B80);
PPC_FUNC_IMPL(__imp__sub_82A26B80) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7658
	ctx.lr = 0x82A26B88;
	__savegprlr_20(ctx, base);
	// li r12,-128
	ctx.r12.s64 = -128;
	// stvx128 v127,r1,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r1.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v127.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r28,r5,1
	ctx.r28.s64 = ctx.r5.s64 + 1;
	// stw r4,284(r1)
	PPC_STORE_U32(ctx.r1.u32 + 284, ctx.r4.u32);
	// addi r11,r4,1
	ctx.r11.s64 = ctx.r4.s64 + 1;
	// stw r6,300(r1)
	PPC_STORE_U32(ctx.r1.u32 + 300, ctx.r6.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mullw r11,r11,r28
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r28.s32);
	// rlwinm r5,r11,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r23,r4
	ctx.r23.u64 = ctx.r4.u64;
	// cmplw cr6,r5,r8
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r8.u32, ctx.xer);
	// ble cr6,0x82a26bc8
	if (!ctx.cr6.gt) goto loc_82A26BC8;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x82a26f7c
	goto loc_82A26F7C;
loc_82A26BC8:
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// addi r11,r23,1
	ctx.r11.s64 = ctx.r23.s64 + 1;
	// addi r9,r10,-13520
	ctx.r9.s64 = ctx.r10.s64 + -13520;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r20,r11,28,4,31
	ctx.r20.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFF;
	// clrlwi r21,r11,28
	ctx.r21.u64 = ctx.r11.u32 & 0xF;
	// lvx128 v127,r0,r9
	simd::store_shuffled(ctx.v127, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r20,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r20.u32);
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// stw r21,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r21.u32);
	// addi r30,r7,8
	ctx.r30.s64 = ctx.r7.s64 + 8;
	// add r31,r10,r7
	ctx.r31.u64 = ctx.r10.u64 + ctx.r7.u64;
	// bl 0x82a75988
	ctx.lr = 0x82A26C08;
	sub_82A75988(ctx, base);
	// cmplwi cr6,r28,1
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 1, ctx.xer);
	// ble cr6,0x82a26f78
	if (!ctx.cr6.gt) goto loc_82A26F78;
	// lis r26,-31962
	ctx.r26.s64 = -2094661632;
	// vspltisw128 v58,0
	_mm_store_si128((__m128i*)ctx.v58.u32, _mm_set1_epi32(int(0x0)));
	// lis r25,-31962
	ctx.r25.s64 = -2094661632;
	// addi r22,r28,-1
	ctx.r22.s64 = ctx.r28.s64 + -1;
	// addi r10,r26,-28912
	ctx.r10.s64 = ctx.r26.s64 + -28912;
	// addi r9,r25,-30848
	ctx.r9.s64 = ctx.r25.s64 + -30848;
	// stw r22,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r22.u32);
	// lis r4,-31962
	ctx.r4.s64 = -2094661632;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// lis r3,-31962
	ctx.r3.s64 = -2094661632;
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// lis r28,-31962
	ctx.r28.s64 = -2094661632;
	// lis r27,-31962
	ctx.r27.s64 = -2094661632;
	// li r11,16
	ctx.r11.s64 = 16;
	// li r5,32
	ctx.r5.s64 = 32;
	// li r6,48
	ctx.r6.s64 = 48;
	// li r7,64
	ctx.r7.s64 = 64;
	// li r8,80
	ctx.r8.s64 = 80;
	// li r9,96
	ctx.r9.s64 = 96;
	// li r10,112
	ctx.r10.s64 = 112;
	// li r24,128
	ctx.r24.s64 = 128;
	// addi r4,r4,-28896
	ctx.r4.s64 = ctx.r4.s64 + -28896;
	// addi r3,r3,-30864
	ctx.r3.s64 = ctx.r3.s64 + -30864;
	// addi r28,r28,-30816
	ctx.r28.s64 = ctx.r28.s64 + -30816;
	// addi r27,r27,-30832
	ctx.r27.s64 = ctx.r27.s64 + -30832;
loc_82A26C74:
	// vor128 v59,v58,v58
	_mm_store_si128((__m128i*)ctx.v59.u8, _mm_load_si128((__m128i*)ctx.v58.u8));
	// cmplwi cr6,r20,0
	ctx.cr6.compare<uint32_t>(ctx.r20.u32, 0, ctx.xer);
	// vor128 v60,v58,v58
	_mm_store_si128((__m128i*)ctx.v60.u8, _mm_load_si128((__m128i*)ctx.v58.u8));
	// beq cr6,0x82a26ee8
	if (ctx.cr6.eq) goto loc_82A26EE8;
	// mtctr r20
	ctx.ctr.u64 = ctx.r20.u64;
loc_82A26C88:
	// lwz r26,92(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lvrx128 v62,r11,r29
	temp.u32 = ctx.r11.u32 + ctx.r29.u32;
	_mm_store_si128((__m128i*)ctx.v62.u8, temp.u32 & 0xF ? _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : _mm_setzero_si128());
	// lvlx128 v63,r0,r29
	temp.u32 = ctx.r29.u32;
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lwz r25,96(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// vor128 v63,v63,v62
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)ctx.v62.u8)));
	// lvx128 v0,r0,r3
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r3.u32) & ~0xF), VectorMaskL));
	// lvx128 v6,r0,r27
	simd::store_shuffled(ctx.v6, simd::load_and_shuffle(base + ((ctx.r27.u32) & ~0xF), VectorMaskL));
	// lvx128 v5,r0,r28
	simd::store_shuffled(ctx.v5, simd::load_and_shuffle(base + ((ctx.r28.u32) & ~0xF), VectorMaskL));
	// lvx128 v62,r0,r26
	simd::store_shuffled(ctx.v62, simd::load_and_shuffle(base + ((ctx.r26.u32) & ~0xF), VectorMaskL));
	// lvx128 v7,r0,r25
	simd::store_shuffled(ctx.v7, simd::load_and_shuffle(base + ((ctx.r25.u32) & ~0xF), VectorMaskL));
	// vperm128 v57,v63,v62,v0
	_mm_store_si128((__m128i*)ctx.v57.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)ctx.v62.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// lvx128 v61,r0,r4
	simd::store_shuffled(ctx.v61, simd::load_and_shuffle(base + ((ctx.r4.u32) & ~0xF), VectorMaskL));
	// vperm128 v56,v63,v62,v7
	_mm_store_si128((__m128i*)ctx.v56.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)ctx.v62.u8), _mm_load_si128((__m128i*)ctx.v7.u8)));
	// vperm128 v55,v63,v62,v6
	_mm_store_si128((__m128i*)ctx.v55.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)ctx.v62.u8), _mm_load_si128((__m128i*)ctx.v6.u8)));
	// vperm128 v63,v63,v62,v5
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)ctx.v62.u8), _mm_load_si128((__m128i*)ctx.v5.u8)));
	// vcsxwfp128 v62,v57,0
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v62.f32, _mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v57.u32)));
	// vcsxwfp128 v57,v56,0
	_mm_store_ps(ctx.v57.f32, _mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v56.u32)));
	// vcsxwfp128 v56,v55,0
	_mm_store_ps(ctx.v56.f32, _mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v55.u32)));
	// vcsxwfp128 v63,v63,0
	_mm_store_ps(ctx.v63.f32, _mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v63.u32)));
	// vmsum4fp128 v55,v62,v61
	_mm_store_ps(ctx.v55.f32, _mm_dp_ps(_mm_load_ps(ctx.v62.f32), _mm_load_ps(ctx.v61.f32), 0xFF));
	// vmulfp128 v54,v62,v62
	_mm_store_ps(ctx.v54.f32, _mm_mul_ps(_mm_load_ps(ctx.v62.f32), _mm_load_ps(ctx.v62.f32)));
	// vmsum4fp128 v53,v62,v62
	_mm_store_ps(ctx.v53.f32, _mm_dp_ps(_mm_load_ps(ctx.v62.f32), _mm_load_ps(ctx.v62.f32), 0xFF));
	// vslo128 v62,v62,v127
	int shift = simd::extract_u8(ctx.v127.v128, 15) & 0x1F;
	if (shift >= 16) {
		ctx.v62.v128 = simd::zero_i128();
	} else {
		ctx.v62.v128 = simd::alignr_i8(simd::zero_i128(), ctx.v62.v128, 16 - shift);
	}
	// vmsum4fp128 v52,v57,v61
	_mm_store_ps(ctx.v52.f32, _mm_dp_ps(_mm_load_ps(ctx.v57.f32), _mm_load_ps(ctx.v61.f32), 0xFF));
	// vmulfp128 v51,v57,v57
	_mm_store_ps(ctx.v51.f32, _mm_mul_ps(_mm_load_ps(ctx.v57.f32), _mm_load_ps(ctx.v57.f32)));
	// vmsum4fp128 v50,v57,v57
	_mm_store_ps(ctx.v50.f32, _mm_dp_ps(_mm_load_ps(ctx.v57.f32), _mm_load_ps(ctx.v57.f32), 0xFF));
	// vmulfp128 v48,v56,v56
	_mm_store_ps(ctx.v48.f32, _mm_mul_ps(_mm_load_ps(ctx.v56.f32), _mm_load_ps(ctx.v56.f32)));
	// vmsum4fp128 v49,v56,v61
	_mm_store_ps(ctx.v49.f32, _mm_dp_ps(_mm_load_ps(ctx.v56.f32), _mm_load_ps(ctx.v61.f32), 0xFF));
	// vslo128 v57,v57,v127
	int shift = simd::extract_u8(ctx.v127.v128, 15) & 0x1F;
	if (shift >= 16) {
		ctx.v57.v128 = simd::zero_i128();
	} else {
		ctx.v57.v128 = simd::alignr_i8(simd::zero_i128(), ctx.v57.v128, 16 - shift);
	}
	// vmsum4fp128 v47,v56,v56
	_mm_store_ps(ctx.v47.f32, _mm_dp_ps(_mm_load_ps(ctx.v56.f32), _mm_load_ps(ctx.v56.f32), 0xFF));
	// vslo128 v46,v62,v127
	int shift = simd::extract_u8(ctx.v127.v128, 15) & 0x1F;
	if (shift >= 16) {
		ctx.v46.v128 = simd::zero_i128();
	} else {
		ctx.v46.v128 = simd::alignr_i8(simd::zero_i128(), ctx.v62.v128, 16 - shift);
	}
	// vmsum4fp128 v45,v63,v63
	_mm_store_ps(ctx.v45.f32, _mm_dp_ps(_mm_load_ps(ctx.v63.f32), _mm_load_ps(ctx.v63.f32), 0xFF));
	// vmulfp128 v44,v63,v63
	_mm_store_ps(ctx.v44.f32, _mm_mul_ps(_mm_load_ps(ctx.v63.f32), _mm_load_ps(ctx.v63.f32)));
	// vslo128 v56,v56,v127
	int shift = simd::extract_u8(ctx.v127.v128, 15) & 0x1F;
	if (shift >= 16) {
		ctx.v56.v128 = simd::zero_i128();
	} else {
		ctx.v56.v128 = simd::alignr_i8(simd::zero_i128(), ctx.v56.v128, 16 - shift);
	}
	// vmsum4fp128 v61,v63,v61
	_mm_store_ps(ctx.v61.f32, _mm_dp_ps(_mm_load_ps(ctx.v63.f32), _mm_load_ps(ctx.v61.f32), 0xFF));
	// vslo128 v43,v57,v127
	int shift = simd::extract_u8(ctx.v127.v128, 15) & 0x1F;
	if (shift >= 16) {
		ctx.v43.v128 = simd::zero_i128();
	} else {
		ctx.v43.v128 = simd::alignr_i8(simd::zero_i128(), ctx.v57.v128, 16 - shift);
	}
	// vslo128 v42,v46,v127
	int shift = simd::extract_u8(ctx.v127.v128, 15) & 0x1F;
	if (shift >= 16) {
		ctx.v42.v128 = simd::zero_i128();
	} else {
		ctx.v42.v128 = simd::alignr_i8(simd::zero_i128(), ctx.v46.v128, 16 - shift);
	}
	// vslo128 v63,v63,v127
	int shift = simd::extract_u8(ctx.v127.v128, 15) & 0x1F;
	if (shift >= 16) {
		ctx.v63.v128 = simd::zero_i128();
	} else {
		ctx.v63.v128 = simd::alignr_i8(simd::zero_i128(), ctx.v63.v128, 16 - shift);
	}
	// vslo128 v41,v56,v127
	int shift = simd::extract_u8(ctx.v127.v128, 15) & 0x1F;
	if (shift >= 16) {
		ctx.v41.v128 = simd::zero_i128();
	} else {
		ctx.v41.v128 = simd::alignr_i8(simd::zero_i128(), ctx.v56.v128, 16 - shift);
	}
	// vslo128 v54,v54,v127
	int shift = simd::extract_u8(ctx.v127.v128, 15) & 0x1F;
	if (shift >= 16) {
		ctx.v54.v128 = simd::zero_i128();
	} else {
		ctx.v54.v128 = simd::alignr_i8(simd::zero_i128(), ctx.v54.v128, 16 - shift);
	}
	// vslo128 v40,v43,v127
	int shift = simd::extract_u8(ctx.v127.v128, 15) & 0x1F;
	if (shift >= 16) {
		ctx.v40.v128 = simd::zero_i128();
	} else {
		ctx.v40.v128 = simd::alignr_i8(simd::zero_i128(), ctx.v43.v128, 16 - shift);
	}
	// vslo128 v51,v51,v127
	int shift = simd::extract_u8(ctx.v127.v128, 15) & 0x1F;
	if (shift >= 16) {
		ctx.v51.v128 = simd::zero_i128();
	} else {
		ctx.v51.v128 = simd::alignr_i8(simd::zero_i128(), ctx.v51.v128, 16 - shift);
	}
	// vslo128 v39,v63,v127
	int shift = simd::extract_u8(ctx.v127.v128, 15) & 0x1F;
	if (shift >= 16) {
		ctx.v39.v128 = simd::zero_i128();
	} else {
		ctx.v39.v128 = simd::alignr_i8(simd::zero_i128(), ctx.v63.v128, 16 - shift);
	}
	// vaddfp128 v59,v59,v55
	_mm_store_ps(ctx.v59.f32, _mm_add_ps(_mm_load_ps(ctx.v59.f32), _mm_load_ps(ctx.v55.f32)));
	// vslo128 v55,v54,v127
	int shift = simd::extract_u8(ctx.v127.v128, 15) & 0x1F;
	if (shift >= 16) {
		ctx.v55.v128 = simd::zero_i128();
	} else {
		ctx.v55.v128 = simd::alignr_i8(simd::zero_i128(), ctx.v54.v128, 16 - shift);
	}
	// vaddfp128 v60,v60,v53
	_mm_store_ps(ctx.v60.f32, _mm_add_ps(_mm_load_ps(ctx.v60.f32), _mm_load_ps(ctx.v53.f32)));
	// vslo128 v53,v48,v127
	int shift = simd::extract_u8(ctx.v127.v128, 15) & 0x1F;
	if (shift >= 16) {
		ctx.v53.v128 = simd::zero_i128();
	} else {
		ctx.v53.v128 = simd::alignr_i8(simd::zero_i128(), ctx.v48.v128, 16 - shift);
	}
	// vslo128 v48,v51,v127
	int shift = simd::extract_u8(ctx.v127.v128, 15) & 0x1F;
	if (shift >= 16) {
		ctx.v48.v128 = simd::zero_i128();
	} else {
		ctx.v48.v128 = simd::alignr_i8(simd::zero_i128(), ctx.v51.v128, 16 - shift);
	}
	// vslo128 v44,v44,v127
	int shift = simd::extract_u8(ctx.v127.v128, 15) & 0x1F;
	if (shift >= 16) {
		ctx.v44.v128 = simd::zero_i128();
	} else {
		ctx.v44.v128 = simd::alignr_i8(simd::zero_i128(), ctx.v44.v128, 16 - shift);
	}
	// vslo128 v38,v55,v127
	int shift = simd::extract_u8(ctx.v127.v128, 15) & 0x1F;
	if (shift >= 16) {
		ctx.v38.v128 = simd::zero_i128();
	} else {
		ctx.v38.v128 = simd::alignr_i8(simd::zero_i128(), ctx.v55.v128, 16 - shift);
	}
	// vslo128 v37,v53,v127
	int shift = simd::extract_u8(ctx.v127.v128, 15) & 0x1F;
	if (shift >= 16) {
		ctx.v37.v128 = simd::zero_i128();
	} else {
		ctx.v37.v128 = simd::alignr_i8(simd::zero_i128(), ctx.v53.v128, 16 - shift);
	}
	// vslo128 v36,v48,v127
	int shift = simd::extract_u8(ctx.v127.v128, 15) & 0x1F;
	if (shift >= 16) {
		ctx.v36.v128 = simd::zero_i128();
	} else {
		ctx.v36.v128 = simd::alignr_i8(simd::zero_i128(), ctx.v48.v128, 16 - shift);
	}
	// vslo128 v35,v44,v127
	int shift = simd::extract_u8(ctx.v127.v128, 15) & 0x1F;
	if (shift >= 16) {
		ctx.v35.v128 = simd::zero_i128();
	} else {
		ctx.v35.v128 = simd::alignr_i8(simd::zero_i128(), ctx.v44.v128, 16 - shift);
	}
	// vslo128 v34,v41,v127
	int shift = simd::extract_u8(ctx.v127.v128, 15) & 0x1F;
	if (shift >= 16) {
		ctx.v34.v128 = simd::zero_i128();
	} else {
		ctx.v34.v128 = simd::alignr_i8(simd::zero_i128(), ctx.v41.v128, 16 - shift);
	}
	// vslo128 v33,v37,v127
	int shift = simd::extract_u8(ctx.v127.v128, 15) & 0x1F;
	if (shift >= 16) {
		ctx.v33.v128 = simd::zero_i128();
	} else {
		ctx.v33.v128 = simd::alignr_i8(simd::zero_i128(), ctx.v37.v128, 16 - shift);
	}
	// vslo128 v32,v39,v127
	int shift = simd::extract_u8(ctx.v127.v128, 15) & 0x1F;
	if (shift >= 16) {
		ctx.v32.v128 = simd::zero_i128();
	} else {
		ctx.v32.v128 = simd::alignr_i8(simd::zero_i128(), ctx.v39.v128, 16 - shift);
	}
	// vslo128 v0,v35,v127
	int shift = simd::extract_u8(ctx.v127.v128, 15) & 0x1F;
	if (shift >= 16) {
		ctx.v0.v128 = simd::zero_i128();
	} else {
		ctx.v0.v128 = simd::alignr_i8(simd::zero_i128(), ctx.v35.v128, 16 - shift);
	}
	// vaddfp128 v52,v59,v52
	_mm_store_ps(ctx.v52.f32, _mm_add_ps(_mm_load_ps(ctx.v59.f32), _mm_load_ps(ctx.v52.f32)));
	// vaddfp128 v50,v60,v50
	_mm_store_ps(ctx.v50.f32, _mm_add_ps(_mm_load_ps(ctx.v60.f32), _mm_load_ps(ctx.v50.f32)));
	// vsubfp128 v60,v60,v54
	_mm_store_ps(ctx.v60.f32, _mm_sub_ps(_mm_load_ps(ctx.v60.f32), _mm_load_ps(ctx.v54.f32)));
	// vsubfp128 v62,v59,v62
	_mm_store_ps(ctx.v62.f32, _mm_sub_ps(_mm_load_ps(ctx.v59.f32), _mm_load_ps(ctx.v62.f32)));
	// vaddfp128 v59,v52,v49
	_mm_store_ps(ctx.v59.f32, _mm_add_ps(_mm_load_ps(ctx.v52.f32), _mm_load_ps(ctx.v49.f32)));
	// vaddfp128 v54,v50,v47
	_mm_store_ps(ctx.v54.f32, _mm_add_ps(_mm_load_ps(ctx.v50.f32), _mm_load_ps(ctx.v47.f32)));
	// vsubfp128 v60,v60,v55
	_mm_store_ps(ctx.v60.f32, _mm_sub_ps(_mm_load_ps(ctx.v60.f32), _mm_load_ps(ctx.v55.f32)));
	// vsubfp128 v57,v52,v57
	_mm_store_ps(ctx.v57.f32, _mm_sub_ps(_mm_load_ps(ctx.v52.f32), _mm_load_ps(ctx.v57.f32)));
	// vsubfp128 v62,v62,v46
	_mm_store_ps(ctx.v62.f32, _mm_sub_ps(_mm_load_ps(ctx.v62.f32), _mm_load_ps(ctx.v46.f32)));
	// vsubfp128 v55,v50,v51
	_mm_store_ps(ctx.v55.f32, _mm_sub_ps(_mm_load_ps(ctx.v50.f32), _mm_load_ps(ctx.v51.f32)));
	// vsubfp128 v56,v59,v56
	_mm_store_ps(ctx.v56.f32, _mm_sub_ps(_mm_load_ps(ctx.v59.f32), _mm_load_ps(ctx.v56.f32)));
	// vsubfp128 v53,v54,v53
	_mm_store_ps(ctx.v53.f32, _mm_sub_ps(_mm_load_ps(ctx.v54.f32), _mm_load_ps(ctx.v53.f32)));
	// vsubfp128 v52,v60,v38
	_mm_store_ps(ctx.v52.f32, _mm_sub_ps(_mm_load_ps(ctx.v60.f32), _mm_load_ps(ctx.v38.f32)));
	// vaddfp128 v60,v54,v45
	_mm_store_ps(ctx.v60.f32, _mm_add_ps(_mm_load_ps(ctx.v54.f32), _mm_load_ps(ctx.v45.f32)));
	// vsubfp128 v62,v62,v42
	_mm_store_ps(ctx.v62.f32, _mm_sub_ps(_mm_load_ps(ctx.v62.f32), _mm_load_ps(ctx.v42.f32)));
	// vsubfp128 v55,v55,v48
	_mm_store_ps(ctx.v55.f32, _mm_sub_ps(_mm_load_ps(ctx.v55.f32), _mm_load_ps(ctx.v48.f32)));
	// vsubfp128 v57,v57,v43
	_mm_store_ps(ctx.v57.f32, _mm_sub_ps(_mm_load_ps(ctx.v57.f32), _mm_load_ps(ctx.v43.f32)));
	// vaddfp128 v59,v59,v61
	_mm_store_ps(ctx.v59.f32, _mm_add_ps(_mm_load_ps(ctx.v59.f32), _mm_load_ps(ctx.v61.f32)));
	// vsubfp128 v61,v56,v41
	_mm_store_ps(ctx.v61.f32, _mm_sub_ps(_mm_load_ps(ctx.v56.f32), _mm_load_ps(ctx.v41.f32)));
	// vsubfp128 v56,v53,v37
	_mm_store_ps(ctx.v56.f32, _mm_sub_ps(_mm_load_ps(ctx.v53.f32), _mm_load_ps(ctx.v37.f32)));
	// vsubfp128 v53,v60,v44
	_mm_store_ps(ctx.v53.f32, _mm_sub_ps(_mm_load_ps(ctx.v60.f32), _mm_load_ps(ctx.v44.f32)));
	// vmrghw128 v54,v62,v52
	_mm_store_si128((__m128i*)ctx.v54.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v52.u32), _mm_load_si128((__m128i*)ctx.v62.u32)));
	// vsubfp128 v55,v55,v36
	_mm_store_ps(ctx.v55.f32, _mm_sub_ps(_mm_load_ps(ctx.v55.f32), _mm_load_ps(ctx.v36.f32)));
	// vsubfp128 v57,v57,v40
	_mm_store_ps(ctx.v57.f32, _mm_sub_ps(_mm_load_ps(ctx.v57.f32), _mm_load_ps(ctx.v40.f32)));
	// vsubfp128 v63,v59,v63
	_mm_store_ps(ctx.v63.f32, _mm_sub_ps(_mm_load_ps(ctx.v59.f32), _mm_load_ps(ctx.v63.f32)));
	// lvrx128 v50,r11,r30
	temp.u32 = ctx.r11.u32 + ctx.r30.u32;
	_mm_store_si128((__m128i*)ctx.v50.u8, temp.u32 & 0xF ? _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : _mm_setzero_si128());
	// vsubfp128 v53,v53,v35
	_mm_store_ps(ctx.v53.f32, _mm_sub_ps(_mm_load_ps(ctx.v53.f32), _mm_load_ps(ctx.v35.f32)));
	// lvlx128 v51,r0,r30
	temp.u32 = ctx.r30.u32;
	_mm_store_si128((__m128i*)ctx.v51.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvrx128 v49,r5,r30
	temp.u32 = ctx.r5.u32 + ctx.r30.u32;
	_mm_store_si128((__m128i*)ctx.v49.u8, temp.u32 & 0xF ? _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : _mm_setzero_si128());
	// vor128 v51,v51,v50
	_mm_store_si128((__m128i*)ctx.v51.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v51.u8), _mm_load_si128((__m128i*)ctx.v50.u8)));
	// lvlx128 v48,r11,r30
	temp.u32 = ctx.r11.u32 + ctx.r30.u32;
	_mm_store_si128((__m128i*)ctx.v48.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vmrglw128 v62,v62,v52
	_mm_store_si128((__m128i*)ctx.v62.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)ctx.v52.u32), _mm_load_si128((__m128i*)ctx.v62.u32)));
	// vor128 v52,v48,v49
	_mm_store_si128((__m128i*)ctx.v52.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v48.u8), _mm_load_si128((__m128i*)ctx.v49.u8)));
	// vsubfp128 v56,v56,v33
	_mm_store_ps(ctx.v56.f32, _mm_sub_ps(_mm_load_ps(ctx.v56.f32), _mm_load_ps(ctx.v33.f32)));
	// vsubfp128 v61,v61,v34
	_mm_store_ps(ctx.v61.f32, _mm_sub_ps(_mm_load_ps(ctx.v61.f32), _mm_load_ps(ctx.v34.f32)));
	// lvlx128 v47,r5,r30
	temp.u32 = ctx.r5.u32 + ctx.r30.u32;
	_mm_store_si128((__m128i*)ctx.v47.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vaddfp128 v54,v51,v54
	_mm_store_ps(ctx.v54.f32, _mm_add_ps(_mm_load_ps(ctx.v51.f32), _mm_load_ps(ctx.v54.f32)));
	// lvlx128 v48,r6,r30
	temp.u32 = ctx.r6.u32 + ctx.r30.u32;
	_mm_store_si128((__m128i*)ctx.v48.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvrx128 v50,r6,r30
	temp.u32 = ctx.r6.u32 + ctx.r30.u32;
	_mm_store_si128((__m128i*)ctx.v50.u8, temp.u32 & 0xF ? _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : _mm_setzero_si128());
	// vmrghw128 v46,v57,v55
	_mm_store_si128((__m128i*)ctx.v46.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v55.u32), _mm_load_si128((__m128i*)ctx.v57.u32)));
	// vaddfp128 v62,v52,v62
	_mm_store_ps(ctx.v62.f32, _mm_add_ps(_mm_load_ps(ctx.v52.f32), _mm_load_ps(ctx.v62.f32)));
	// lvrx128 v49,r7,r30
	temp.u32 = ctx.r7.u32 + ctx.r30.u32;
	_mm_store_si128((__m128i*)ctx.v49.u8, temp.u32 & 0xF ? _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : _mm_setzero_si128());
	// vor128 v50,v47,v50
	_mm_store_si128((__m128i*)ctx.v50.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v47.u8), _mm_load_si128((__m128i*)ctx.v50.u8)));
	// vmrglw128 v57,v57,v55
	_mm_store_si128((__m128i*)ctx.v57.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)ctx.v55.u32), _mm_load_si128((__m128i*)ctx.v57.u32)));
	// vor128 v49,v48,v49
	_mm_store_si128((__m128i*)ctx.v49.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v48.u8), _mm_load_si128((__m128i*)ctx.v49.u8)));
	// lvrx128 v51,r8,r30
	temp.u32 = ctx.r8.u32 + ctx.r30.u32;
	_mm_store_si128((__m128i*)ctx.v51.u8, temp.u32 & 0xF ? _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : _mm_setzero_si128());
	// lvlx128 v55,r7,r30
	temp.u32 = ctx.r7.u32 + ctx.r30.u32;
	_mm_store_si128((__m128i*)ctx.v55.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r29,r29,16
	ctx.r29.s64 = ctx.r29.s64 + 16;
	// vsubfp128 v63,v63,v39
	_mm_store_ps(ctx.v63.f32, _mm_sub_ps(_mm_load_ps(ctx.v63.f32), _mm_load_ps(ctx.v39.f32)));
	// vor128 v55,v55,v51
	_mm_store_si128((__m128i*)ctx.v55.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v55.u8), _mm_load_si128((__m128i*)ctx.v51.u8)));
	// vsubfp128 v53,v53,v0
	_mm_store_ps(ctx.v53.f32, _mm_sub_ps(_mm_load_ps(ctx.v53.f32), _mm_load_ps(ctx.v0.f32)));
	// lvrx128 v52,r9,r30
	temp.u32 = ctx.r9.u32 + ctx.r30.u32;
	_mm_store_si128((__m128i*)ctx.v52.u8, temp.u32 & 0xF ? _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : _mm_setzero_si128());
	// vaddfp128 v51,v50,v46
	_mm_store_ps(ctx.v51.f32, _mm_add_ps(_mm_load_ps(ctx.v50.f32), _mm_load_ps(ctx.v46.f32)));
	// lvlx128 v48,r8,r30
	temp.u32 = ctx.r8.u32 + ctx.r30.u32;
	_mm_store_si128((__m128i*)ctx.v48.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vaddfp128 v57,v49,v57
	_mm_store_ps(ctx.v57.f32, _mm_add_ps(_mm_load_ps(ctx.v49.f32), _mm_load_ps(ctx.v57.f32)));
	// lvrx128 v50,r10,r30
	temp.u32 = ctx.r10.u32 + ctx.r30.u32;
	_mm_store_si128((__m128i*)ctx.v50.u8, temp.u32 & 0xF ? _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : _mm_setzero_si128());
	// lvlx128 v46,r9,r30
	temp.u32 = ctx.r9.u32 + ctx.r30.u32;
	_mm_store_si128((__m128i*)ctx.v46.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vor128 v52,v48,v52
	_mm_store_si128((__m128i*)ctx.v52.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v48.u8), _mm_load_si128((__m128i*)ctx.v52.u8)));
	// vmrghw128 v47,v61,v56
	_mm_store_si128((__m128i*)ctx.v47.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v56.u32), _mm_load_si128((__m128i*)ctx.v61.u32)));
	// lvlx128 v49,r10,r30
	temp.u32 = ctx.r10.u32 + ctx.r30.u32;
	_mm_store_si128((__m128i*)ctx.v49.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vmrglw128 v61,v61,v56
	_mm_store_si128((__m128i*)ctx.v61.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)ctx.v56.u32), _mm_load_si128((__m128i*)ctx.v61.u32)));
	// lvrx128 v56,r24,r30
	temp.u32 = ctx.r24.u32 + ctx.r30.u32;
	_mm_store_si128((__m128i*)ctx.v56.u8, temp.u32 & 0xF ? _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : _mm_setzero_si128());
	// stvlx128 v54,r0,r31
	ea = ctx.r31.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v54.u8[15 - i]);
	// vor128 v50,v46,v50
	_mm_store_si128((__m128i*)ctx.v50.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v46.u8), _mm_load_si128((__m128i*)ctx.v50.u8)));
	// stvrx128 v54,r31,r11
	ea = ctx.r31.u32 + ctx.r11.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		PPC_STORE_U8(ea - i - 1, ctx.v54.u8[i]);
	// vor128 v56,v49,v56
	_mm_store_si128((__m128i*)ctx.v56.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v49.u8), _mm_load_si128((__m128i*)ctx.v56.u8)));
	// stvlx128 v62,r31,r11
	ea = ctx.r31.u32 + ctx.r11.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v62.u8[15 - i]);
	// vaddfp128 v55,v55,v47
	_mm_store_ps(ctx.v55.f32, _mm_add_ps(_mm_load_ps(ctx.v55.f32), _mm_load_ps(ctx.v47.f32)));
	// stvrx128 v62,r31,r5
	ea = ctx.r31.u32 + ctx.r5.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		PPC_STORE_U8(ea - i - 1, ctx.v62.u8[i]);
	// vaddfp128 v61,v52,v61
	_mm_store_ps(ctx.v61.f32, _mm_add_ps(_mm_load_ps(ctx.v52.f32), _mm_load_ps(ctx.v61.f32)));
	// li r24,128
	ctx.r24.s64 = 128;
	// vsubfp128 v63,v63,v32
	_mm_store_ps(ctx.v63.f32, _mm_sub_ps(_mm_load_ps(ctx.v63.f32), _mm_load_ps(ctx.v32.f32)));
	// addi r30,r30,128
	ctx.r30.s64 = ctx.r30.s64 + 128;
	// stvlx128 v51,r31,r5
	ea = ctx.r31.u32 + ctx.r5.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v51.u8[15 - i]);
	// stvrx128 v51,r31,r6
	ea = ctx.r31.u32 + ctx.r6.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		PPC_STORE_U8(ea - i - 1, ctx.v51.u8[i]);
	// stvlx128 v57,r31,r6
	ea = ctx.r31.u32 + ctx.r6.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v57.u8[15 - i]);
	// stvrx128 v57,r31,r7
	ea = ctx.r31.u32 + ctx.r7.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		PPC_STORE_U8(ea - i - 1, ctx.v57.u8[i]);
	// stvlx128 v55,r31,r7
	ea = ctx.r31.u32 + ctx.r7.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v55.u8[15 - i]);
	// stvrx128 v55,r31,r8
	ea = ctx.r31.u32 + ctx.r8.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		PPC_STORE_U8(ea - i - 1, ctx.v55.u8[i]);
	// stvlx128 v61,r31,r8
	ea = ctx.r31.u32 + ctx.r8.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v61.u8[15 - i]);
	// vmrghw128 v62,v63,v53
	_mm_store_si128((__m128i*)ctx.v62.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v53.u32), _mm_load_si128((__m128i*)ctx.v63.u32)));
	// stvrx128 v61,r31,r9
	ea = ctx.r31.u32 + ctx.r9.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		PPC_STORE_U8(ea - i - 1, ctx.v61.u8[i]);
	// vmrglw128 v63,v63,v53
	_mm_store_si128((__m128i*)ctx.v63.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)ctx.v53.u32), _mm_load_si128((__m128i*)ctx.v63.u32)));
	// vaddfp128 v62,v50,v62
	_mm_store_ps(ctx.v62.f32, _mm_add_ps(_mm_load_ps(ctx.v50.f32), _mm_load_ps(ctx.v62.f32)));
	// vaddfp128 v63,v56,v63
	_mm_store_ps(ctx.v63.f32, _mm_add_ps(_mm_load_ps(ctx.v56.f32), _mm_load_ps(ctx.v63.f32)));
	// stvlx128 v62,r31,r9
	ea = ctx.r31.u32 + ctx.r9.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v62.u8[15 - i]);
	// stvrx128 v62,r31,r10
	ea = ctx.r31.u32 + ctx.r10.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		PPC_STORE_U8(ea - i - 1, ctx.v62.u8[i]);
	// stvlx128 v63,r31,r10
	ea = ctx.r31.u32 + ctx.r10.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v63.u8[15 - i]);
	// stvrx128 v63,r31,r24
	ea = ctx.r31.u32 + ctx.r24.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		PPC_STORE_U8(ea - i - 1, ctx.v63.u8[i]);
	// addi r31,r31,128
	ctx.r31.s64 = ctx.r31.s64 + 128;
	// bdnz 0x82a26c88
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82A26C88;
	// lwz r22,88(r1)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r21,100(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r20,104(r1)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r23,284(r1)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r1.u32 + 284);
loc_82A26EE8:
	// addi r26,r1,84
	ctx.r26.s64 = ctx.r1.s64 + 84;
	// addi r25,r1,80
	ctx.r25.s64 = ctx.r1.s64 + 80;
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, 0, ctx.xer);
	// stvewx128 v59,r0,r26
	ea = (ctx.r26.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v59.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v60,r0,r25
	ea = (ctx.r25.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v60.u32[3 - ((ea & 0xF) >> 2)]);
	// beq cr6,0x82a26f58
	if (ctx.cr6.eq) goto loc_82A26F58;
	// lfs f0,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
	// mtctr r21
	ctx.ctr.u64 = ctx.r21.u64;
	// lfs f13,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
loc_82A26F0C:
	// lbz r26,0(r29)
	ctx.r26.u64 = PPC_LOAD_U8(ctx.r29.u32 + 0);
	// lfs f12,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// std r26,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r26.u64);
	// lfd f11,112(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f11,f11
	ctx.f11.f64 = double(ctx.f11.s64);
	// frsp f11,f11
	ctx.f11.f64 = double(float(ctx.f11.f64));
	// fadds f0,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 + ctx.f0.f64));
	// fmadds f13,f11,f11,f13
	ctx.f13.f64 = double(float(ctx.f11.f64 * ctx.f11.f64 + ctx.f13.f64));
	// fadds f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 + ctx.f0.f64));
	// stfs f12,0(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// lfs f12,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fadds f12,f12,f13
	ctx.f12.f64 = double(float(ctx.f12.f64 + ctx.f13.f64));
	// stfs f12,4(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// bdnz 0x82a26f0c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82A26F0C;
	// stfs f13,80(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
loc_82A26F58:
	// lwz r26,300(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 300);
	// addic. r22,r22,-1
	ctx.xer.ca = ctx.r22.u32 > 0;
	ctx.r22.s64 = ctx.r22.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// subf r29,r23,r29
	ctx.r29.s64 = ctx.r29.s64 - ctx.r23.s64;
	// stw r22,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r22.u32);
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// add r29,r29,r26
	ctx.r29.u64 = ctx.r29.u64 + ctx.r26.u64;
	// bne 0x82a26c74
	if (!ctx.cr0.eq) goto loc_82A26C74;
loc_82A26F78:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82A26F7C:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// li r0,-128
	ctx.r0.s64 = -128;
	// lvx128 v127,r1,r0
	simd::store_shuffled(ctx.v127, simd::load_and_shuffle(base + ((ctx.r1.u32 + ctx.r0.u32) & ~0xF), VectorMaskL));
	// b 0x82fa76a8
	__restgprlr_20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A26F8C"))) PPC_WEAK_FUNC(sub_82A26F8C);
PPC_FUNC_IMPL(__imp__sub_82A26F8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A26F90"))) PPC_WEAK_FUNC(sub_82A26F90);
PPC_FUNC_IMPL(__imp__sub_82A26F90) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r11,8(r3)
	PPC_STORE_U8(ctx.r3.u32 + 8, ctx.r11.u8);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// stw r11,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r11.u32);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A26FB4"))) PPC_WEAK_FUNC(sub_82A26FB4);
PPC_FUNC_IMPL(__imp__sub_82A26FB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A26FB8"))) PPC_WEAK_FUNC(sub_82A26FB8);
PPC_FUNC_IMPL(__imp__sub_82A26FB8) {
	PPC_FUNC_PROLOGUE();
	// li r11,5
	ctx.r11.s64 = 5;
	// stw r4,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r4.u32);
	// stw r5,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r5.u32);
	// divw r10,r4,r11
	ctx.r10.s32 = ctx.r4.s32 / ctx.r11.s32;
	// stw r6,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r6.u32);
	// divw r11,r5,r11
	ctx.r11.s32 = ctx.r5.s32 / ctx.r11.s32;
	// stw r10,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r10.u32);
	// stw r11,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A26FDC"))) PPC_WEAK_FUNC(sub_82A26FDC);
PPC_FUNC_IMPL(__imp__sub_82A26FDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A26FE0"))) PPC_WEAK_FUNC(sub_82A26FE0);
PPC_FUNC_IMPL(__imp__sub_82A26FE0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x82A26FE8;
	__savegprlr_28(ctx, base);
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mullw r11,r11,r10
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// cmplw cr6,r5,r11
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82a27008
	if (ctx.cr6.eq) goto loc_82A27008;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,65535
	ctx.r3.u64 = ctx.r3.u64 | 65535;
	// b 0x82a270d8
	goto loc_82A270D8;
loc_82A27008:
	// lwz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// lis r10,-32233
	ctx.r10.s64 = -2112421888;
	// lwz r9,24(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// li r31,0
	ctx.r31.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mullw r11,r9,r11
	ctx.r11.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r11.s32);
	// lfs f0,24436(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 24436);
	ctx.f0.f64 = double(temp.f32);
	// clrldi r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// std r11,-48(r1)
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.r11.u64);
	// lfd f13,-48(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fdivs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
loc_82A2703C:
	// li r10,5
	ctx.r10.s64 = 5;
	// lwz r9,28(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// li r11,0
	ctx.r11.s64 = 0;
	// mullw r6,r31,r9
	ctx.r6.s64 = int64_t(ctx.r31.s32) * int64_t(ctx.r9.s32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82A27050:
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// add r30,r5,r11
	ctx.r30.u64 = ctx.r5.u64 + ctx.r11.u64;
	// lwz r9,24(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// addi r8,r10,1
	ctx.r8.s64 = ctx.r10.s64 + 1;
	// lwz r29,28(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// mullw r7,r9,r11
	ctx.r7.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r11.s32);
	// lwz r28,4(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mullw r10,r8,r6
	ctx.r10.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r6.s32);
	// add r10,r7,r10
	ctx.r10.u64 = ctx.r7.u64 + ctx.r10.u64;
	// mullw r8,r8,r29
	ctx.r8.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r29.s32);
	// add r8,r8,r10
	ctx.r8.u64 = ctx.r8.u64 + ctx.r10.u64;
	// add r7,r9,r10
	ctx.r7.u64 = ctx.r9.u64 + ctx.r10.u64;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// rlwinm r8,r8,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r9,r9,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r7,r7,3,0,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r30,r30,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f13,r8,r4
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r4.u32);
	ctx.f13.f64 = double(temp.f32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lfsx f12,r9,r4
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r4.u32);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// lfsx f12,r7,r4
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r4.u32);
	ctx.f12.f64 = double(temp.f32);
	// lfsx f11,r10,r4
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r4.u32);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// fadds f13,f13,f11
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f11.f64));
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfsx f13,r30,r28
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + ctx.r28.u32, temp.u32);
	// bdnz 0x82a27050
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82A27050;
	// addi r5,r5,5
	ctx.r5.s64 = ctx.r5.s64 + 5;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplwi cr6,r5,25
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 25, ctx.xer);
	// blt cr6,0x82a2703c
	if (ctx.cr6.lt) goto loc_82A2703C;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82A270D8:
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A270DC"))) PPC_WEAK_FUNC(sub_82A270DC);
PPC_FUNC_IMPL(__imp__sub_82A270DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A270E0"))) PPC_WEAK_FUNC(sub_82A270E0);
PPC_FUNC_IMPL(__imp__sub_82A270E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x82A270E8;
	__savegprlr_28(ctx, base);
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mullw r11,r11,r10
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// cmplw cr6,r5,r11
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82a27108
	if (ctx.cr6.eq) goto loc_82A27108;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,65535
	ctx.r3.u64 = ctx.r3.u64 | 65535;
	// b 0x82a2721c
	goto loc_82A2721C;
loc_82A27108:
	// lwz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// lis r10,-32233
	ctx.r10.s64 = -2112421888;
	// lwz r9,24(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// li r31,0
	ctx.r31.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mullw r11,r9,r11
	ctx.r11.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r11.s32);
	// lfs f0,24436(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 24436);
	ctx.f0.f64 = double(temp.f32);
	// clrldi r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// std r11,-80(r1)
	PPC_STORE_U64(ctx.r1.u32 + -80, ctx.r11.u64);
	// lfd f13,-80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fdivs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
loc_82A2713C:
	// li r10,5
	ctx.r10.s64 = 5;
	// lwz r9,28(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// li r11,0
	ctx.r11.s64 = 0;
	// mullw r6,r31,r9
	ctx.r6.s64 = int64_t(ctx.r31.s32) * int64_t(ctx.r9.s32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82A27150:
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// add r30,r5,r11
	ctx.r30.u64 = ctx.r5.u64 + ctx.r11.u64;
	// lwz r9,24(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// addi r8,r10,1
	ctx.r8.s64 = ctx.r10.s64 + 1;
	// lwz r29,28(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// mullw r7,r9,r11
	ctx.r7.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r11.s32);
	// lwz r28,4(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mullw r10,r8,r6
	ctx.r10.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r6.s32);
	// add r10,r7,r10
	ctx.r10.u64 = ctx.r7.u64 + ctx.r10.u64;
	// mullw r8,r8,r29
	ctx.r8.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r29.s32);
	// add r8,r8,r10
	ctx.r8.u64 = ctx.r8.u64 + ctx.r10.u64;
	// add r7,r9,r10
	ctx.r7.u64 = ctx.r9.u64 + ctx.r10.u64;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// rlwinm r7,r7,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r9,r9,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r8,r8,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r30,r30,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lbzx r7,r7,r4
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r7.u32 + ctx.r4.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lbzx r9,r9,r4
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r4.u32);
	// lbzx r10,r10,r4
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r4.u32);
	// lbzx r8,r8,r4
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r8.u32 + ctx.r4.u32);
	// std r7,-80(r1)
	PPC_STORE_U64(ctx.r1.u32 + -80, ctx.r7.u64);
	// lfd f13,-80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// std r9,-72(r1)
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.r9.u64);
	// lfd f12,-72(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// std r10,-64(r1)
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.r10.u64);
	// lfd f11,-64(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// std r8,-56(r1)
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.r8.u64);
	// lfd f10,-56(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// fcfid f10,f10
	ctx.f10.f64 = double(ctx.f10.s64);
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f10,f10
	ctx.f10.f64 = double(float(ctx.f10.f64));
	// fcfid f11,f11
	ctx.f11.f64 = double(ctx.f11.s64);
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// frsp f11,f11
	ctx.f11.f64 = double(float(ctx.f11.f64));
	// fsubs f12,f12,f10
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f10.f64));
	// fsubs f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// fadds f13,f13,f11
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f11.f64));
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfsx f13,r30,r28
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r30.u32 + ctx.r28.u32, temp.u32);
	// bdnz 0x82a27150
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82A27150;
	// addi r5,r5,5
	ctx.r5.s64 = ctx.r5.s64 + 5;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplwi cr6,r5,25
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 25, ctx.xer);
	// blt cr6,0x82a2713c
	if (ctx.cr6.lt) goto loc_82A2713C;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82A2721C:
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A27220"))) PPC_WEAK_FUNC(sub_82A27220);
PPC_FUNC_IMPL(__imp__sub_82A27220) {
	PPC_FUNC_PROLOGUE();
	// rlwinm. r10,r5,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 31) & 0x7FFFFFFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// beq 0x82a27280
	if (ctx.cr0.eq) goto loc_82A27280;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82A27234:
	// lbzx r10,r11,r4
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r4.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r10,r10,25
	ctx.r10.s64 = ctx.r10.s64 + 25;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r10,r9
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// stwx r7,r10,r9
	PPC_STORE_U32(ctx.r10.u32 + ctx.r9.u32, ctx.r7.u32);
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// divwu r9,r8,r10
	ctx.r9.u32 = ctx.r8.u32 / ctx.r10.u32;
	// mullw r9,r9,r10
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r10.s32);
	// twllei r10,0
	if (ctx.r10.u32 <= 0) __builtin_debugtrap();
	// subf. r9,r9,r8
	ctx.r9.s64 = ctx.r8.s64 - ctx.r9.s64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82a27278
	if (!ctx.cr0.eq) goto loc_82A27278;
	// lwz r9,20(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// subf r10,r10,r9
	ctx.r10.s64 = ctx.r9.s64 - ctx.r10.s64;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_82A27278:
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// bdnz 0x82a27234
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82A27234;
loc_82A27280:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A27288"))) PPC_WEAK_FUNC(sub_82A27288);
PPC_FUNC_IMPL(__imp__sub_82A27288) {
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
	// lbz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 8);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82a272b8
	if (!ctx.cr0.eq) goto loc_82A272B8;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,65535
	ctx.r3.u64 = ctx.r3.u64 | 65535;
	// b 0x82a27304
	goto loc_82A27304;
loc_82A272B8:
	// lwz r31,0(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r5,100
	ctx.r5.s64 = 100;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82fa7cf0
	ctx.lr = 0x82A272CC;
	sub_82FA7CF0(ctx, base);
	// li r5,1024
	ctx.r5.s64 = 1024;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,100
	ctx.r3.s64 = ctx.r31.s64 + 100;
	// bl 0x82fa7cf0
	ctx.lr = 0x82A272DC;
	sub_82FA7CF0(ctx, base);
	// li r5,100
	ctx.r5.s64 = 100;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r31,4(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82fa7cf0
	ctx.lr = 0x82A272F0;
	sub_82FA7CF0(ctx, base);
	// li r5,1024
	ctx.r5.s64 = 1024;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,100
	ctx.r3.s64 = ctx.r31.s64 + 100;
	// bl 0x82fa7cf0
	ctx.lr = 0x82A27300;
	sub_82FA7CF0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_82A27304:
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

__attribute__((alias("__imp__sub_82A2731C"))) PPC_WEAK_FUNC(sub_82A2731C);
PPC_FUNC_IMPL(__imp__sub_82A2731C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A27320"))) PPC_WEAK_FUNC(sub_82A27320);
PPC_FUNC_IMPL(__imp__sub_82A27320) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7674
	ctx.lr = 0x82A27328;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 8);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82a27408
	if (ctx.cr0.eq) goto loc_82A27408;
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mullw r11,r11,r10
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// cmplw cr6,r6,r11
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82a27408
	if (!ctx.cr6.eq) goto loc_82A27408;
	// lwz r29,0(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r5,100
	ctx.r5.s64 = 100;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r29,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r29.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x82fa7cf0
	ctx.lr = 0x82A2737C;
	sub_82FA7CF0(ctx, base);
	// li r5,1024
	ctx.r5.s64 = 1024;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r29,100
	ctx.r3.s64 = ctx.r29.s64 + 100;
	// bl 0x82fa7cf0
	ctx.lr = 0x82A2738C;
	sub_82FA7CF0(ctx, base);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bne cr6,0x82a273a8
	if (!ctx.cr6.eq) goto loc_82A273A8;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x82a270e0
	ctx.lr = 0x82A273A4;
	sub_82A270E0(ctx, base);
	// b 0x82a273b0
	goto loc_82A273B0;
loc_82A273A8:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x82a26fe0
	ctx.lr = 0x82A273B0;
	sub_82A26FE0(ctx, base);
loc_82A273B0:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bge cr6,0x82a273e0
	if (!ctx.cr6.lt) goto loc_82A273E0;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x82a273d4
	if (!ctx.cr6.eq) goto loc_82A273D4;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x82a270e0
	ctx.lr = 0x82A273D0;
	sub_82A270E0(ctx, base);
	// b 0x82a27410
	goto loc_82A27410;
loc_82A273D4:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x82a26fe0
	ctx.lr = 0x82A273DC;
	sub_82A26FE0(ctx, base);
	// b 0x82a27410
	goto loc_82A27410;
loc_82A273E0:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x82a27220
	ctx.lr = 0x82A273E8;
	sub_82A27220(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x82a27400
	if (!ctx.cr0.lt) goto loc_82A27400;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a27220
	ctx.lr = 0x82A273FC;
	sub_82A27220(ctx, base);
	// b 0x82a27410
	goto loc_82A27410;
loc_82A27400:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82a27410
	goto loc_82A27410;
loc_82A27408:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,65535
	ctx.r3.u64 = ctx.r3.u64 | 65535;
loc_82A27410:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A27418"))) PPC_WEAK_FUNC(sub_82A27418);
PPC_FUNC_IMPL(__imp__sub_82A27418) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x82A27420;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r30,-32250
	ctx.r30.s64 = -2113536000;
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a27448
	if (ctx.cr6.eq) goto loc_82A27448;
	// lwz r4,-24632(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + -24632);
	// bl 0x82691460
	ctx.lr = 0x82A27444;
	sub_82691460(ctx, base);
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
loc_82A27448:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a27460
	if (ctx.cr6.eq) goto loc_82A27460;
	// lwz r4,-24632(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + -24632);
	// bl 0x82691460
	ctx.lr = 0x82A2745C;
	sub_82691460(ctx, base);
	// stw r29,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r29.u32);
loc_82A27460:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A27468"))) PPC_WEAK_FUNC(sub_82A27468);
PPC_FUNC_IMPL(__imp__sub_82A27468) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x82A27470;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r30,-32250
	ctx.r30.s64 = -2113536000;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r3,1124
	ctx.r3.s64 = 1124;
	// lwz r4,-24632(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + -24632);
	// bl 0x82691410
	ctx.lr = 0x82A27488;
	sub_82691410(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r3,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a27500
	if (ctx.cr6.eq) goto loc_82A27500;
	// li r5,100
	ctx.r5.s64 = 100;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82fa7cf0
	ctx.lr = 0x82A274A4;
	sub_82FA7CF0(ctx, base);
	// li r5,1024
	ctx.r5.s64 = 1024;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,100
	ctx.r3.s64 = ctx.r31.s64 + 100;
	// bl 0x82fa7cf0
	ctx.lr = 0x82A274B4;
	sub_82FA7CF0(ctx, base);
	// li r3,1124
	ctx.r3.s64 = 1124;
	// lwz r4,-24632(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + -24632);
	// bl 0x82691410
	ctx.lr = 0x82A274C0;
	sub_82691410(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r3,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a27500
	if (ctx.cr6.eq) goto loc_82A27500;
	// li r5,100
	ctx.r5.s64 = 100;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82fa7cf0
	ctx.lr = 0x82A274DC;
	sub_82FA7CF0(ctx, base);
	// li r5,1024
	ctx.r5.s64 = 1024;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,100
	ctx.r3.s64 = ctx.r31.s64 + 100;
	// bl 0x82fa7cf0
	ctx.lr = 0x82A274EC;
	sub_82FA7CF0(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r3,0
	ctx.r3.s64 = 0;
	// stb r11,8(r29)
	PPC_STORE_U8(ctx.r29.u32 + 8, ctx.r11.u8);
loc_82A274F8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
loc_82A27500:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x82a274f8
	goto loc_82A274F8;
}

__attribute__((alias("__imp__sub_82A2750C"))) PPC_WEAK_FUNC(sub_82A2750C);
PPC_FUNC_IMPL(__imp__sub_82A2750C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A27510"))) PPC_WEAK_FUNC(sub_82A27510);
PPC_FUNC_IMPL(__imp__sub_82A27510) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r9,0
	ctx.r9.s64 = 0;
	// lfs f1,5184(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5184);
	ctx.f1.f64 = double(temp.f32);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r8,r11,-22944
	ctx.r8.s64 = ctx.r11.s64 + -22944;
loc_82A27524:
	// li r10,3
	ctx.r10.s64 = 3;
	// li r11,0
	ctx.r11.s64 = 0;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82A27530:
	// add r10,r9,r11
	ctx.r10.u64 = ctx.r9.u64 + ctx.r11.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f0,r10,r8
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	ctx.f0.f64 = double(temp.f32);
	// fadds f1,f0,f1
	ctx.f1.f64 = double(float(ctx.f0.f64 + ctx.f1.f64));
	// bdnz 0x82a27530
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82A27530;
	// addi r9,r9,3
	ctx.r9.s64 = ctx.r9.s64 + 3;
	// cmpwi cr6,r9,9
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 9, ctx.xer);
	// blt cr6,0x82a27524
	if (ctx.cr6.lt) goto loc_82A27524;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A27558"))) PPC_WEAK_FUNC(sub_82A27558);
PPC_FUNC_IMPL(__imp__sub_82A27558) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// lfs f0,5184(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5184);
	ctx.f0.f64 = double(temp.f32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stfs f0,60(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 60, temp.u32);
	// stw r11,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r11.u32);
	// stw r11,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r11.u32);
	// stw r9,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A27588"))) PPC_WEAK_FUNC(sub_82A27588);
PPC_FUNC_IMPL(__imp__sub_82A27588) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82a2759c
	if (!ctx.cr6.eq) goto loc_82A2759C;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// blr 
	return;
loc_82A2759C:
	// stw r4,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r4.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A275A8"))) PPC_WEAK_FUNC(sub_82A275A8);
PPC_FUNC_IMPL(__imp__sub_82A275A8) {
	PPC_FUNC_PROLOGUE();
	// stw r4,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r4.u32);
	// stw r5,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r5.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A275B4"))) PPC_WEAK_FUNC(sub_82A275B4);
PPC_FUNC_IMPL(__imp__sub_82A275B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A275B8"))) PPC_WEAK_FUNC(sub_82A275B8);
PPC_FUNC_IMPL(__imp__sub_82A275B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// lfs f0,5184(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 5184);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,60(r10)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 60, temp.u32);
	// stw r11,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r11.u32);
	// stw r8,52(r10)
	PPC_STORE_U32(ctx.r10.u32 + 52, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A275E4"))) PPC_WEAK_FUNC(sub_82A275E4);
PPC_FUNC_IMPL(__imp__sub_82A275E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A275E8"))) PPC_WEAK_FUNC(sub_82A275E8);
PPC_FUNC_IMPL(__imp__sub_82A275E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,5184(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5184);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f4,f0
	ctx.cr6.compare(ctx.f4.f64, ctx.f0.f64);
	// bgt cr6,0x82a27604
	if (ctx.cr6.gt) goto loc_82A27604;
loc_82A275F8:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,65535
	ctx.r3.u64 = ctx.r3.u64 | 65535;
	// blr 
	return;
loc_82A27604:
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x82a27618
	if (!ctx.cr6.eq) goto loc_82A27618;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// blr 
	return;
loc_82A27618:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a275f8
	if (ctx.cr6.eq) goto loc_82A275F8;
	// fdivs f0,f2,f4
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f2.f64 / ctx.f4.f64));
	// li r11,0
	ctx.r11.s64 = 0;
	// fmuls f0,f0,f1
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f1.f64));
	// fcmpu cr6,f3,f0
	ctx.cr6.compare(ctx.f3.f64, ctx.f0.f64);
	// ble cr6,0x82a27640
	if (!ctx.cr6.gt) goto loc_82A27640;
	// fmr f12,f3
	ctx.f12.f64 = ctx.f3.f64;
	// b 0x82a27644
	goto loc_82A27644;
loc_82A27640:
	// fmr f12,f0
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = ctx.f0.f64;
loc_82A27644:
	// fcmpu cr6,f3,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f3.f64, ctx.f0.f64);
	// bge cr6,0x82a27650
	if (!ctx.cr6.lt) goto loc_82A27650;
	// fmr f0,f3
	ctx.f0.f64 = ctx.f3.f64;
loc_82A27650:
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lfs f13,-22952(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -22952);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x82a27664
	if (ctx.cr6.gt) goto loc_82A27664;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
loc_82A27664:
	// fdivs f0,f12,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f12.f64 / ctx.f0.f64));
	// fsubs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x82a27678
	if (!ctx.cr6.gt) goto loc_82A27678;
	// li r11,1
	ctx.r11.s64 = 1;
loc_82A27678:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A27688"))) PPC_WEAK_FUNC(sub_82A27688);
PPC_FUNC_IMPL(__imp__sub_82A27688) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82a276a0
	if (!ctx.cr6.eq) goto loc_82A276A0;
loc_82A27694:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// blr 
	return;
loc_82A276A0:
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82a27694
	if (ctx.cr6.eq) goto loc_82A27694;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A276C0"))) PPC_WEAK_FUNC(sub_82A276C0);
PPC_FUNC_IMPL(__imp__sub_82A276C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lfs f0,-19524(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -19524);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bgt cr6,0x82a27720
	if (ctx.cr6.gt) goto loc_82A27720;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
loc_82A276E0:
	// li r9,5
	ctx.r9.s64 = 5;
	// li r11,0
	ctx.r11.s64 = 0;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82A276EC:
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f13,r9,r8
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x82a27704
	if (!ctx.cr6.gt) goto loc_82A27704;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
loc_82A27704:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x82a276ec
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82A276EC;
	// addi r10,r10,5
	ctx.r10.s64 = ctx.r10.s64 + 5;
	// cmpwi cr6,r10,25
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 25, ctx.xer);
	// blt cr6,0x82a276e0
	if (ctx.cr6.lt) goto loc_82A276E0;
	// cmplwi cr6,r7,4
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 4, ctx.xer);
	// blt cr6,0x82a27728
	if (ctx.cr6.lt) goto loc_82A27728;
loc_82A27720:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_82A27728:
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// li r10,128
	ctx.r10.s64 = 128;
	// li r11,612
	ctx.r11.s64 = 612;
	// lfs f0,5184(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 5184);
	ctx.f0.f64 = double(temp.f32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82A2773C:
	// lwzx r10,r11,r8
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// std r10,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r10.u64);
	// lfd f13,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fadds f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// bdnz 0x82a2773c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82A2773C;
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lwz r9,44(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// mullw r11,r11,r9
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r9.s32);
	// lfs f13,-22956(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -22956);
	ctx.f13.f64 = double(temp.f32);
	// rlwinm r11,r11,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// std r11,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r11.u64);
	// lfd f12,-16(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// li r11,1
	ctx.r11.s64 = 1;
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// fdivs f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f12.f64));
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x82a27798
	if (ctx.cr6.gt) goto loc_82A27798;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82A27798:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A277A0"))) PPC_WEAK_FUNC(sub_82A277A0);
PPC_FUNC_IMPL(__imp__sub_82A277A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x82A277A8;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r28,8(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// cmpwi cr6,r28,1
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 1, ctx.xer);
	// bne cr6,0x82a277e8
	if (!ctx.cr6.eq) goto loc_82A277E8;
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// addi r11,r3,12
	ctx.r11.s64 = ctx.r3.s64 + 12;
	// addi r11,r3,28
	ctx.r11.s64 = ctx.r3.s64 + 28;
	// stw r10,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r10.u32);
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// stw r11,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r11.u32);
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// stw r11,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r11.u32);
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// stw r11,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r11.u32);
loc_82A277E8:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// li r30,2
	ctx.r30.s64 = 2;
	// bl 0x82a231c0
	ctx.lr = 0x82A277F4;
	sub_82A231C0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82a27854
	if (ctx.cr0.eq) goto loc_82A27854;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8234cc28
	ctx.lr = 0x82A27804;
	sub_8234CC28(ctx, base);
	// addi r11,r31,12
	ctx.r11.s64 = ctx.r31.s64 + 12;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lwz r8,4(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// lwz r7,8(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r30,1
	ctx.r30.s64 = 1;
	// lwz r6,12(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// stw r8,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r8.u32);
	// stw r7,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r7.u32);
	// stw r6,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r6.u32);
	// lwz r11,12(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// lwz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r8,4(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// lwz r9,8(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// stw r10,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r10.u32);
	// stw r8,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r8.u32);
	// stw r9,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r9.u32);
loc_82A27854:
	// stw r28,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r28.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A27868"))) PPC_WEAK_FUNC(sub_82A27868);
PPC_FUNC_IMPL(__imp__sub_82A27868) {
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
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r11,5
	ctx.r11.s64 = 5;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// lfs f0,5184(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 5184);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r10,-4
	ctx.r11.s64 = ctx.r10.s64 + -4;
loc_82A27894:
	// lfsu f13,4(r11)
	ctx.fpscr.disableFlushMode();
	ea = 4 + ctx.r11.u32;
	temp.u32 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	ctx.f13.f64 = double(temp.f32);
	// fadds f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// bdnz 0x82a27894
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82A27894;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// lfs f13,11508(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 11508);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f11,f0,f13
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// fmr f1,f11
	ctx.f1.f64 = ctx.f11.f64;
	// bl 0x82a276c0
	ctx.lr = 0x82A278B8;
	sub_82A276C0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// stfs f11,64(r6)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r6.u32 + 64, temp.u32);
	// li r10,4
	ctx.r10.s64 = 4;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// stw r10,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r10.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A278E8"))) PPC_WEAK_FUNC(sub_82A278E8);
PPC_FUNC_IMPL(__imp__sub_82A278E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x82A278F0;
	__savegprlr_28(ctx, base);
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// lwz r10,44(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// mullw r11,r11,r10
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// cmplw cr6,r5,r11
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82a27910
	if (ctx.cr6.eq) goto loc_82A27910;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lfs f1,-22908(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -22908);
	ctx.f1.f64 = double(temp.f32);
	// b 0x82a279f0
	goto loc_82A279F0;
loc_82A27910:
	// lwz r7,12(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// li r9,3
	ctx.r9.s64 = 3;
	// lwz r6,16(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// lis r31,-32250
	ctx.r31.s64 = -2113536000;
	// lwz r10,24(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// subf r11,r7,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r7.s64;
	// lwz r8,44(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// lis r3,-32250
	ctx.r3.s64 = -2113536000;
	// subf r10,r6,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r6.s64;
	// lfs f0,5184(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 5184);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lfs f13,-22952(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + -22952);
	ctx.f13.f64 = double(temp.f32);
	// divwu r11,r11,r9
	ctx.r11.u32 = ctx.r11.u32 / ctx.r9.u32;
	// divwu r10,r10,r9
	ctx.r10.u32 = ctx.r10.u32 / ctx.r9.u32;
	// addi r3,r3,-22944
	ctx.r3.s64 = ctx.r3.s64 + -22944;
	// mullw r5,r10,r11
	ctx.r5.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// clrldi r9,r5,32
	ctx.r9.u64 = ctx.r5.u64 & 0xFFFFFFFF;
	// addi r5,r8,1
	ctx.r5.s64 = ctx.r8.s64 + 1;
	// std r9,-48(r1)
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.r9.u64);
	// lfd f12,-48(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// li r9,0
	ctx.r9.s64 = 0;
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// mullw r30,r5,r10
	ctx.r30.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r10.s32);
	// fdivs f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 / ctx.f12.f64));
	// addi r3,r3,-8
	ctx.r3.s64 = ctx.r3.s64 + -8;
loc_82A27988:
	// add r8,r9,r6
	ctx.r8.u64 = ctx.r9.u64 + ctx.r6.u64;
	// lfsu f12,12(r3)
	ctx.fpscr.disableFlushMode();
	ea = 12 + ctx.r3.u32;
	temp.u32 = PPC_LOAD_U32(ea);
	ctx.r3.u32 = ea;
	ctx.f12.f64 = double(temp.f32);
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// mullw r8,r8,r5
	ctx.r8.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r5.s32);
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// add r8,r8,r11
	ctx.r8.u64 = ctx.r8.u64 + ctx.r11.u64;
	// add r31,r30,r8
	ctx.r31.u64 = ctx.r30.u64 + ctx.r8.u64;
	// add r29,r8,r11
	ctx.r29.u64 = ctx.r8.u64 + ctx.r11.u64;
	// add r28,r31,r11
	ctx.r28.u64 = ctx.r31.u64 + ctx.r11.u64;
	// rlwinm r31,r31,3,0,28
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r28,r28,3,0,28
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r29,r29,3,0,28
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r8,r8,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// lfsx f11,r31,r4
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r4.u32);
	ctx.f11.f64 = double(temp.f32);
	// lfsx f10,r28,r4
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r4.u32);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f11,f10,f11
	ctx.f11.f64 = double(float(ctx.f10.f64 - ctx.f11.f64));
	// lfsx f10,r29,r4
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r4.u32);
	ctx.f10.f64 = double(temp.f32);
	// lfsx f9,r8,r4
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r4.u32);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f11,f11,f10
	ctx.f11.f64 = double(float(ctx.f11.f64 - ctx.f10.f64));
	// fadds f11,f11,f9
	ctx.f11.f64 = double(float(ctx.f11.f64 + ctx.f9.f64));
	// fmuls f12,f11,f12
	ctx.f12.f64 = double(float(ctx.f11.f64 * ctx.f12.f64));
	// fmadds f0,f12,f13,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f13.f64 + ctx.f0.f64));
	// bdnz 0x82a27988
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82A27988;
	// lis r11,-31962
	ctx.r11.s64 = -2094661632;
	// lfs f13,-30800(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -30800);
	ctx.f13.f64 = double(temp.f32);
	// fdivs f1,f0,f13
	ctx.f1.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
loc_82A279F0:
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A279F4"))) PPC_WEAK_FUNC(sub_82A279F4);
PPC_FUNC_IMPL(__imp__sub_82A279F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A279F8"))) PPC_WEAK_FUNC(sub_82A279F8);
PPC_FUNC_IMPL(__imp__sub_82A279F8) {
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
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lfs f0,-22960(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -22960);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f2,f0
	ctx.cr6.compare(ctx.f2.f64, ctx.f0.f64);
	// blt cr6,0x82a27a18
	if (ctx.cr6.lt) goto loc_82A27A18;
	// fmr f0,f2
	ctx.f0.f64 = ctx.f2.f64;
loc_82A27A18:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lfs f13,-15356(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -15356);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f1,f13
	ctx.cr6.compare(ctx.f1.f64, ctx.f13.f64);
	// ble cr6,0x82a27a40
	if (!ctx.cr6.gt) goto loc_82A27A40;
	// fdivs f13,f1,f0
	ctx.f13.f64 = double(float(ctx.f1.f64 / ctx.f0.f64));
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,21500(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 21500);
	ctx.f0.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgt cr6,0x82a27a44
	if (ctx.cr6.gt) goto loc_82A27A44;
loc_82A27A40:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82A27A44:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82a27a5c
	if (!ctx.cr0.eq) goto loc_82A27A5C;
	// bl 0x82a276c0
	ctx.lr = 0x82A27A50;
	sub_82A276C0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// beq 0x82a27a60
	if (ctx.cr0.eq) goto loc_82A27A60;
loc_82A27A5C:
	// li r11,1
	ctx.r11.s64 = 1;
loc_82A27A60:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A27A74"))) PPC_WEAK_FUNC(sub_82A27A74);
PPC_FUNC_IMPL(__imp__sub_82A27A74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A27A78"))) PPC_WEAK_FUNC(sub_82A27A78);
PPC_FUNC_IMPL(__imp__sub_82A27A78) {
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
	// lwz r11,56(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// lfs f0,64(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,60(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 60, temp.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r11,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r11.u32);
	// bl 0x82a277a0
	ctx.lr = 0x82A27AA8;
	sub_82A277A0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x82a27ac0
	if (!ctx.cr0.lt) goto loc_82A27AC0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a277a0
	ctx.lr = 0x82A27ABC;
	sub_82A277A0(ctx, base);
	// b 0x82a27ac4
	goto loc_82A27AC4;
loc_82A27AC0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82A27AC4:
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

__attribute__((alias("__imp__sub_82A27ADC"))) PPC_WEAK_FUNC(sub_82A27ADC);
PPC_FUNC_IMPL(__imp__sub_82A27ADC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A27AE0"))) PPC_WEAK_FUNC(sub_82A27AE0);
PPC_FUNC_IMPL(__imp__sub_82A27AE0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x82A27AE8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r10
	ctx.r28.u64 = ctx.r10.u64;
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// lwz r10,44(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fmr f8,f1
	ctx.fpscr.disableFlushMode();
	ctx.f8.f64 = ctx.f1.f64;
	// mr r30,r8
	ctx.r30.u64 = ctx.r8.u64;
	// mullw r11,r11,r10
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// fmr f7,f2
	ctx.f7.f64 = ctx.f2.f64;
	// mr r29,r9
	ctx.r29.u64 = ctx.r9.u64;
	// cmplw cr6,r5,r11
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82a27b24
	if (ctx.cr6.eq) goto loc_82A27B24;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,65535
	ctx.r3.u64 = ctx.r3.u64 | 65535;
	// b 0x82a27c34
	goto loc_82A27C34;
loc_82A27B24:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a278e8
	ctx.lr = 0x82A27B2C;
	sub_82A278E8(ctx, base);
	// fsubs f13,f1,f8
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64 - ctx.f8.f64));
	// fmuls f0,f8,f7
	ctx.f0.f64 = double(float(ctx.f8.f64 * ctx.f7.f64));
	// li r11,1
	ctx.r11.s64 = 1;
	// fmr f2,f1
	ctx.f2.f64 = ctx.f1.f64;
	// fabs f13,f13
	ctx.f13.u64 = ctx.f13.u64 & ~0x8000000000000000;
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgt cr6,0x82a27b4c
	if (ctx.cr6.gt) goto loc_82A27B4C;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82A27B4C:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82a27b7c
	if (ctx.cr0.eq) goto loc_82A27B7C;
	// fcmpu cr6,f2,f8
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f2.f64, ctx.f8.f64);
	// li r11,1
	ctx.r11.s64 = 1;
	// blt cr6,0x82a27b64
	if (ctx.cr6.lt) goto loc_82A27B64;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82A27B64:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// subfic r11,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r11.s64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// rlwinm r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// b 0x82a27b80
	goto loc_82A27B80;
loc_82A27B7C:
	// li r6,0
	ctx.r6.s64 = 0;
loc_82A27B80:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r11,5
	ctx.r11.s64 = 5;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// lfs f0,5184(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 5184);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r10,-4
	ctx.r11.s64 = ctx.r10.s64 + -4;
loc_82A27B9C:
	// lfsu f13,4(r11)
	ctx.fpscr.disableFlushMode();
	ea = 4 + ctx.r11.u32;
	temp.u32 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	ctx.f13.f64 = double(temp.f32);
	// fadds f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// bdnz 0x82a27b9c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82A27B9C;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// cmpwi cr6,r6,2
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 2, ctx.xer);
	// lfs f13,11508(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 11508);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f11,f0,f13
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// bne cr6,0x82a27bc4
	if (!ctx.cr6.eq) goto loc_82A27BC4;
	// li r11,3
	ctx.r11.s64 = 3;
	// b 0x82a27c20
	goto loc_82A27C20;
loc_82A27BC4:
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lfs f1,-22960(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -22960);
	ctx.f1.f64 = double(temp.f32);
	// fcmpu cr6,f11,f1
	ctx.cr6.compare(ctx.f11.f64, ctx.f1.f64);
	// blt cr6,0x82a27bd8
	if (ctx.cr6.lt) goto loc_82A27BD8;
	// fmr f1,f11
	ctx.f1.f64 = ctx.f11.f64;
loc_82A27BD8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a279f8
	ctx.lr = 0x82A27BE0;
	sub_82A279F8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82a27bf0
	if (ctx.cr0.eq) goto loc_82A27BF0;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82a27c20
	goto loc_82A27C20;
loc_82A27BF0:
	// fdivs f13,f2,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f2.f64 / ctx.f1.f64));
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,21500(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 21500);
	ctx.f0.f64 = double(temp.f32);
	// li r11,1
	ctx.r11.s64 = 1;
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgt cr6,0x82a27c0c
	if (ctx.cr6.gt) goto loc_82A27C0C;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82A27C0C:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_82A27C20:
	// stfs f11,64(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 64, temp.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stfs f2,0(r30)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// stw r6,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r6.u32);
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
loc_82A27C34:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A27C3C"))) PPC_WEAK_FUNC(sub_82A27C3C);
PPC_FUNC_IMPL(__imp__sub_82A27C3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A27C40"))) PPC_WEAK_FUNC(sub_82A27C40);
PPC_FUNC_IMPL(__imp__sub_82A27C40) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa766c
	ctx.lr = 0x82A27C48;
	__savegprlr_25(ctx, base);
	// stfd f30,-80(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -80, ctx.f30.u64);
	// stfd f31,-72(r1)
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.f31.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// fmr f30,f2
	ctx.f30.f64 = ctx.f2.f64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// mr r27,r10
	ctx.r27.u64 = ctx.r10.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82a27c84
	if (!ctx.cr6.eq) goto loc_82A27C84;
loc_82A27C78:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// b 0x82a27d7c
	goto loc_82A27D7C;
loc_82A27C84:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82a27c78
	if (ctx.cr6.eq) goto loc_82A27C78;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x82a27c78
	if (ctx.cr6.eq) goto loc_82A27C78;
	// lwz r25,260(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 260);
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x82a27c78
	if (ctx.cr6.eq) goto loc_82A27C78;
	// lwz r26,268(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 268);
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x82a27c78
	if (ctx.cr6.eq) goto loc_82A27C78;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a27a78
	ctx.lr = 0x82A27CB8;
	sub_82A27A78(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bge 0x82a27cd0
	if (!ctx.cr0.lt) goto loc_82A27CD0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82a27a78
	ctx.lr = 0x82A27CCC;
	sub_82A27A78(ctx, base);
	// b 0x82a27d7c
	goto loc_82A27D7C;
loc_82A27CD0:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// lfs f0,5184(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5184);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// bne cr6,0x82a27d34
	if (!ctx.cr6.eq) goto loc_82A27D34;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// fmr f2,f30
	ctx.f2.f64 = ctx.f30.f64;
	// addi r9,r1,84
	ctx.r9.s64 = ctx.r1.s64 + 84;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// addi r8,r1,88
	ctx.r8.s64 = ctx.r1.s64 + 88;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82a27ae0
	ctx.lr = 0x82A27D08;
	sub_82A27AE0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x82a27d5c
	if (!ctx.cr0.lt) goto loc_82A27D5C;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// fmr f2,f30
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f30.f64;
	// addi r9,r1,84
	ctx.r9.s64 = ctx.r1.s64 + 84;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// addi r8,r1,88
	ctx.r8.s64 = ctx.r1.s64 + 88;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a27ae0
	ctx.lr = 0x82A27D30;
	sub_82A27AE0(ctx, base);
	// b 0x82a27d7c
	goto loc_82A27D7C;
loc_82A27D34:
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82a27868
	ctx.lr = 0x82A27D40;
	sub_82A27868(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x82a27d5c
	if (!ctx.cr0.lt) goto loc_82A27D5C;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a27868
	ctx.lr = 0x82A27D58;
	sub_82A27868(ctx, base);
	// b 0x82a27d7c
	goto loc_82A27D7C;
loc_82A27D5C:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lfs f0,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r11.u32);
	// stw r11,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
	// stw r10,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r10.u32);
	// stfs f0,0(r26)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r26.u32 + 0, temp.u32);
loc_82A27D7C:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f30,-80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// lfd f31,-72(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x82fa76bc
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A27D8C"))) PPC_WEAK_FUNC(sub_82A27D8C);
PPC_FUNC_IMPL(__imp__sub_82A27D8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A27D90"))) PPC_WEAK_FUNC(sub_82A27D90);
PPC_FUNC_IMPL(__imp__sub_82A27D90) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82A27DA4"))) PPC_WEAK_FUNC(sub_82A27DA4);
PPC_FUNC_IMPL(__imp__sub_82A27DA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A27DA8"))) PPC_WEAK_FUNC(sub_82A27DA8);
PPC_FUNC_IMPL(__imp__sub_82A27DA8) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82A27DBC"))) PPC_WEAK_FUNC(sub_82A27DBC);
PPC_FUNC_IMPL(__imp__sub_82A27DBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A27DC0"))) PPC_WEAK_FUNC(sub_82A27DC0);
PPC_FUNC_IMPL(__imp__sub_82A27DC0) {
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
	// bl 0x82a27f68
	ctx.lr = 0x82A27DD8;
	sub_82A27F68(ctx, base);
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// lis r10,8
	ctx.r10.s64 = 524288;
	// li r5,28
	ctx.r5.s64 = 28;
	// ori r10,r10,63156
	ctx.r10.u64 = ctx.r10.u64 | 63156;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,24028(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24028);
	// lwzx r3,r11,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// bl 0x82a81490
	ctx.lr = 0x82A27DF8;
	sub_82A81490(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82a27e08
	if (ctx.cr0.eq) goto loc_82A27E08;
	// bl 0x82a28f08
	ctx.lr = 0x82A27E04;
	sub_82A28F08(ctx, base);
	// b 0x82a27e0c
	goto loc_82A27E0C;
loc_82A27E08:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82A27E0C:
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82a27e24
	if (!ctx.cr6.eq) goto loc_82A27E24;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x82a27e2c
	goto loc_82A27E2C;
loc_82A27E24:
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82a29048
	ctx.lr = 0x82A27E2C;
	sub_82A29048(ctx, base);
loc_82A27E2C:
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

__attribute__((alias("__imp__sub_82A27E40"))) PPC_WEAK_FUNC(sub_82A27E40);
PPC_FUNC_IMPL(__imp__sub_82A27E40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x82A27E48;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r30,r6,60
	ctx.r30.s64 = ctx.r6.s64 + 60;
	// addi r7,r6,16
	ctx.r7.s64 = ctx.r6.s64 + 16;
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// bl 0x82a29ce8
	ctx.lr = 0x82A27E60;
	sub_82A29CE8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82a27f5c
	if (!ctx.cr0.eq) goto loc_82A27F5C;
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// lwz r3,24032(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24032);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a27e8c
	if (ctx.cr6.eq) goto loc_82A27E8C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82A27E8C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82A27E8C:
	// lis r4,1
	ctx.r4.s64 = 65536;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// ori r4,r4,3584
	ctx.r4.u64 = ctx.r4.u64 | 3584;
	// bl 0x82a0d110
	ctx.lr = 0x82A27E9C;
	sub_82A0D110(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r31,80(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addis r5,r31,1
	ctx.r5.s64 = ctx.r31.s64 + 65536;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r5,r5,-30976
	ctx.r5.s64 = ctx.r5.s64 + -30976;
	// bl 0x82a29c78
	ctx.lr = 0x82A27EB4;
	sub_82A29C78(ctx, base);
	// mr. r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq 0x82a27eec
	if (ctx.cr0.eq) goto loc_82A27EEC;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82a27ee4
	if (ctx.cr6.eq) goto loc_82A27EE4;
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// lis r10,8
	ctx.r10.s64 = 524288;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// ori r10,r10,63156
	ctx.r10.u64 = ctx.r10.u64 | 63156;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,24028(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24028);
	// lwzx r3,r11,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// bl 0x82a81d88
	ctx.lr = 0x82A27EE4;
	sub_82A81D88(ctx, base);
loc_82A27EE4:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// b 0x82a27f5c
	goto loc_82A27F5C;
loc_82A27EEC:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lwz r4,56(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 56);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a29220
	ctx.lr = 0x82A27EFC;
	sub_82A29220(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq 0x82a27f34
	if (ctx.cr0.eq) goto loc_82A27F34;
	// beq cr6,0x82a27f2c
	if (ctx.cr6.eq) goto loc_82A27F2C;
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// lis r10,8
	ctx.r10.s64 = 524288;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// ori r10,r10,63156
	ctx.r10.u64 = ctx.r10.u64 | 63156;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,24028(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24028);
	// lwzx r3,r11,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// bl 0x82a81d88
	ctx.lr = 0x82A27F2C;
	sub_82A81D88(ctx, base);
loc_82A27F2C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x82a27f5c
	goto loc_82A27F5C;
loc_82A27F34:
	// beq cr6,0x82a27f58
	if (ctx.cr6.eq) goto loc_82A27F58;
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// lis r10,8
	ctx.r10.s64 = 524288;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// ori r10,r10,63156
	ctx.r10.u64 = ctx.r10.u64 | 63156;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,24028(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24028);
	// lwzx r3,r11,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// bl 0x82a81d88
	ctx.lr = 0x82A27F58;
	sub_82A81D88(ctx, base);
loc_82A27F58:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82A27F5C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A27F64"))) PPC_WEAK_FUNC(sub_82A27F64);
PPC_FUNC_IMPL(__imp__sub_82A27F64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A27F68"))) PPC_WEAK_FUNC(sub_82A27F68);
PPC_FUNC_IMPL(__imp__sub_82A27F68) {
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
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a27fa4
	if (ctx.cr6.eq) goto loc_82A27FA4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82A27F9C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_82A27FA4:
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

__attribute__((alias("__imp__sub_82A27FB8"))) PPC_WEAK_FUNC(sub_82A27FB8);
PPC_FUNC_IMPL(__imp__sub_82A27FB8) {
	PPC_FUNC_PROLOGUE();
	// b 0x82a27f68
	sub_82A27F68(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A27FBC"))) PPC_WEAK_FUNC(sub_82A27FBC);
PPC_FUNC_IMPL(__imp__sub_82A27FBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A27FC0"))) PPC_WEAK_FUNC(sub_82A27FC0);
PPC_FUNC_IMPL(__imp__sub_82A27FC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-368(r1)
	ea = -368 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82a27f68
	ctx.lr = 0x82A27FD8;
	sub_82A27F68(ctx, base);
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// lis r10,8
	ctx.r10.s64 = 524288;
	// li r5,76
	ctx.r5.s64 = 76;
	// ori r10,r10,63156
	ctx.r10.u64 = ctx.r10.u64 | 63156;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,24028(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24028);
	// lwzx r3,r11,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// bl 0x82a81490
	ctx.lr = 0x82A27FF8;
	sub_82A81490(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82a28008
	if (ctx.cr0.eq) goto loc_82A28008;
	// bl 0x82a2a198
	ctx.lr = 0x82A28004;
	sub_82A2A198(ctx, base);
	// b 0x82a2800c
	goto loc_82A2800C;
loc_82A28008:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82A2800C:
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82a28024
	if (!ctx.cr6.eq) goto loc_82A28024;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x82a28084
	goto loc_82A28084;
loc_82A28024:
	// bl 0x82a0c140
	ctx.lr = 0x82A28028;
	sub_82A0C140(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,260
	ctx.r4.s64 = 260;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82fa5590
	ctx.lr = 0x82A28038;
	sub_82FA5590(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82a2805c
	if (!ctx.cr0.eq) goto loc_82A2805C;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// li r4,260
	ctx.r4.s64 = 260;
	// addi r5,r11,27008
	ctx.r5.s64 = ctx.r11.s64 + 27008;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82fa85a0
	ctx.lr = 0x82A28054;
	sub_82FA85A0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82a28068
	if (ctx.cr0.eq) goto loc_82A28068;
loc_82A2805C:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// b 0x82a28084
	goto loc_82A28084;
loc_82A28068:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82a2a360
	ctx.lr = 0x82A28074;
	sub_82A2A360(ctx, base);
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// srawi r10,r3,31
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x7FFFFFFF) != 0);
	ctx.r10.s64 = ctx.r3.s32 >> 31;
	// ori r11,r11,16389
	ctx.r11.u64 = ctx.r11.u64 | 16389;
	// and r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 & ctx.r11.u64;
loc_82A28084:
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A28098"))) PPC_WEAK_FUNC(sub_82A28098);
PPC_FUNC_IMPL(__imp__sub_82A28098) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	PPCVRegister vTemp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// li r12,-48
	ctx.r12.s64 = -48;
	// stvx128 v127,r1,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r1.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v127.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82a28280
	if (ctx.cr6.eq) goto loc_82A28280;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82a28280
	if (ctx.cr6.eq) goto loc_82A28280;
	// lis r9,-31962
	ctx.r9.s64 = -2094661632;
	// lis r11,-31962
	ctx.r11.s64 = -2094661632;
	// addi r10,r11,-30656
	ctx.r10.s64 = ctx.r11.s64 + -30656;
	// lwz r11,-30640(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + -30640);
	// clrlwi. r8,r11,31
	ctx.r8.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x82a28100
	if (!ctx.cr0.eq) goto loc_82A28100;
	// lis r8,-32242
	ctx.r8.s64 = -2113011712;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// addi r8,r8,-29680
	ctx.r8.s64 = ctx.r8.s64 + -29680;
	// stw r11,-30640(r9)
	PPC_STORE_U32(ctx.r9.u32 + -30640, ctx.r11.u32);
	// lvx128 v62,r0,r8
	simd::store_shuffled(ctx.v62, simd::load_and_shuffle(base + ((ctx.r8.u32) & ~0xF), VectorMaskL));
	// stvx128 v62,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v62.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// b 0x82a28104
	goto loc_82A28104;
loc_82A28100:
	// lvx128 v62,r0,r10
	simd::store_shuffled(ctx.v62, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
loc_82A28104:
	// lis r10,-31962
	ctx.r10.s64 = -2094661632;
	// rlwinm. r8,r11,0,30,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// addi r10,r10,-30688
	ctx.r10.s64 = ctx.r10.s64 + -30688;
	// bne 0x82a28128
	if (!ctx.cr0.eq) goto loc_82A28128;
	// li r8,16
	ctx.r8.s64 = 16;
	// stvx128 v62,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v62.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// stw r11,-30640(r9)
	PPC_STORE_U32(ctx.r9.u32 + -30640, ctx.r11.u32);
	// stvx128 v62,r10,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32 + ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v62.u8), _mm_load_si128((__m128i*)VectorMaskL)));
loc_82A28128:
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x82a2813c
	if (ctx.cr6.eq) goto loc_82A2813C;
	// rlwinm r11,r3,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 4) & 0xFFFFFFF0;
	// lvx128 v63,r0,r6
	simd::store_shuffled(ctx.v63, simd::load_and_shuffle(base + ((ctx.r6.u32) & ~0xF), VectorMaskL));
	// stvx128 v63,r11,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
loc_82A2813C:
	// lvx128 v63,r0,r6
	simd::store_shuffled(ctx.v63, simd::load_and_shuffle(base + ((ctx.r6.u32) & ~0xF), VectorMaskL));
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// vmsum3fp128 v61,v63,v63
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v61.f32, _mm_dp_ps(_mm_load_ps(ctx.v63.f32), _mm_load_ps(ctx.v63.f32), 0xEF));
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// lfs f0,-25140(r9)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -25140);
	ctx.f0.f64 = double(temp.f32);
	// stvx128 v61,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v61.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lfs f13,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// fabs f13,f13
	ctx.f13.u64 = ctx.f13.u64 & ~0x8000000000000000;
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x82a28168
	if (!ctx.cr6.lt) goto loc_82A28168;
	// vor128 v63,v62,v62
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_load_si128((__m128i*)ctx.v62.u8));
loc_82A28168:
	// rlwinm r11,r3,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 4) & 0xFFFFFFF0;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r10,r9,11976
	ctx.r10.s64 = ctx.r9.s64 + 11976;
	// lvx128 v0,r0,r11
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// vsubfp128 v13,v63,v0
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v13.f32, _mm_sub_ps(_mm_load_ps(ctx.v63.f32), _mm_load_ps(ctx.v0.f32)));
	// lvlx128 v63,r0,r10
	temp.u32 = ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw128 v12,v63,0
	_mm_store_si128((__m128i*)ctx.v12.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v63.u32), 0xFF));
	// vmaddfp v9,v13,v12,v0
	_mm_store_ps(ctx.v9.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v12.f32)), _mm_load_ps(ctx.v0.f32)));
	// stvx128 v9,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v9.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x82a28280
	if (!ctx.cr6.eq) goto loc_82A28280;
	// vmsum4fp128 v61,v9,v9
	_mm_store_ps(ctx.v61.f32, _mm_dp_ps(_mm_load_ps(ctx.v9.f32), _mm_load_ps(ctx.v9.f32), 0xFF));
	// vspltisw128 v60,1
	_mm_store_si128((__m128i*)ctx.v60.u32, _mm_set1_epi32(int(0x1)));
	// vspltisw128 v63,0
	_mm_store_si128((__m128i*)ctx.v63.u32, _mm_set1_epi32(int(0x0)));
	// vpermwi128 v59,v62,135
	_mm_store_si128((__m128i*)ctx.v59.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v62.u32), 0x78));
	// vpermwi128 v13,v62,99
	_mm_store_si128((__m128i*)ctx.v13.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v62.u32), 0x9C));
	// vcsxwfp128 v8,v60,1
	_mm_store_ps(ctx.v8.f32, _mm_mul_ps(_mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v60.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x3F000000)))));
	// vrsqrtefp128 v0,v61
	_mm_store_ps(ctx.v0.f32, _mm_div_ps(_mm_set1_ps(1), _mm_sqrt_ps(_mm_load_ps(ctx.v61.f32))));
	// vor128 v12,v61,v61
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_load_si128((__m128i*)ctx.v61.u8));
	// vmulfp128 v11,v61,v8
	_mm_store_ps(ctx.v11.f32, _mm_mul_ps(_mm_load_ps(ctx.v61.f32), _mm_load_ps(ctx.v8.f32)));
	// vcmpeqfp128 v7,v61,v63
	_mm_store_ps(ctx.v7.f32, _mm_cmpeq_ps(_mm_load_ps(ctx.v61.f32), _mm_load_ps(ctx.v63.f32)));
	// vmulfp128 v10,v0,v0
	_mm_store_ps(ctx.v10.f32, _mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v0.f32)));
	// vnmsubfp v8,v11,v10,v8
	_mm_store_ps(ctx.v8.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(ctx.v11.f32), _mm_load_ps(ctx.v10.f32)), _mm_load_ps(ctx.v8.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// vmaddfp v0,v0,v8,v0
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v8.f32)), _mm_load_ps(ctx.v0.f32)));
	// vmulfp128 v0,v9,v0
	_mm_store_ps(ctx.v0.f32, _mm_mul_ps(_mm_load_ps(ctx.v9.f32), _mm_load_ps(ctx.v0.f32)));
	// vsel v11,v0,v12,v7
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v7.u8), _mm_load_si128((__m128i*)ctx.v0.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v7.u8), _mm_load_si128((__m128i*)ctx.v12.u8))));
	// vpermwi128 v61,v11,99
	_mm_store_si128((__m128i*)ctx.v61.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v11.u32), 0x9C));
	// vpermwi128 v0,v11,135
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v11.u32), 0x78));
	// vmulfp128 v127,v61,v59
	_mm_store_ps(ctx.v127.f32, _mm_mul_ps(_mm_load_ps(ctx.v61.f32), _mm_load_ps(ctx.v59.f32)));
	// vnmsubfp128 v127,v0,v13,v127
	_mm_store_ps(ctx.v127.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v13.f32)), _mm_load_ps(ctx.v127.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// vcmpeqfp128. v61,v127,v63
	_mm_store_ps(ctx.v61.f32, _mm_cmpeq_ps(_mm_load_ps(ctx.v127.f32), _mm_load_ps(ctx.v63.f32)));
	ctx.cr6.setFromMask(_mm_load_ps(ctx.v61.f32), 0xF);
	// bge cr6,0x82a28208
	if (!ctx.cr6.lt) goto loc_82A28208;
	// vupkd3d128 v63,v63,4
	temp.f32 = 3.0f;
	temp.s32 += ctx.v63.s16[1];
	vTemp.f32[3] = temp.f32;
	temp.f32 = 3.0f;
	temp.s32 += ctx.v63.s16[0];
	vTemp.f32[2] = temp.f32;
	vTemp.f32[1] = 0.0f;
	vTemp.f32[0] = 1.0f;
	ctx.v63 = vTemp;
	// vpermwi128 v0,v63,234
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v63.u32), 0x15));
	// vpermwi128 v13,v63,186
	_mm_store_si128((__m128i*)ctx.v13.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v63.u32), 0x45));
	// vpermwi128 v12,v63,174
	_mm_store_si128((__m128i*)ctx.v12.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v63.u32), 0x51));
	// vpermwi128 v11,v63,171
	_mm_store_si128((__m128i*)ctx.v11.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v63.u32), 0x54));
	// b 0x82a28248
	goto loc_82A28248;
loc_82A28208:
	// vmsum4fp128 v63,v62,v11
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v63.f32, _mm_dp_ps(_mm_load_ps(ctx.v62.f32), _mm_load_ps(ctx.v11.f32), 0xFF));
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// stvx128 v63,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lfs f1,80(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82fa3ec8
	ctx.lr = 0x82A2821C;
	sub_82FA3EC8(ctx, base);
	// vor128 v1,v127,v127
	_mm_store_si128((__m128i*)ctx.v1.u8, _mm_load_si128((__m128i*)ctx.v127.u8));
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// frsp f1,f1
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f1.f64));
	// bl 0x8247a400
	ctx.lr = 0x82A2822C;
	sub_8247A400(ctx, base);
	// li r11,16
	ctx.r11.s64 = 16;
	// li r10,32
	ctx.r10.s64 = 32;
	// lvx128 v0,r0,r3
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r3.u32) & ~0xF), VectorMaskL));
	// li r9,48
	ctx.r9.s64 = 48;
	// lvx128 v13,r3,r11
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r3.u32 + ctx.r11.u32) & ~0xF), VectorMaskL));
	// lvx128 v12,r3,r10
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((ctx.r3.u32 + ctx.r10.u32) & ~0xF), VectorMaskL));
	// lvx128 v11,r3,r9
	simd::store_shuffled(ctx.v11, simd::load_and_shuffle(base + ((ctx.r3.u32 + ctx.r9.u32) & ~0xF), VectorMaskL));
loc_82A28248:
	// li r10,20
	ctx.r10.s64 = 20;
	// addi r11,r30,32
	ctx.r11.s64 = ctx.r30.s64 + 32;
	// subf r9,r30,r31
	ctx.r9.s64 = ctx.r31.s64 - ctx.r30.s64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82A28258:
	// lvx128 v63,r9,r11
	simd::store_shuffled(ctx.v63, simd::load_and_shuffle(base + ((ctx.r9.u32 + ctx.r11.u32) & ~0xF), VectorMaskL));
	// vspltw128 v8,v63,2
	_mm_store_si128((__m128i*)ctx.v8.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v63.u32), 0x55));
	// vspltw128 v9,v63,1
	_mm_store_si128((__m128i*)ctx.v9.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v63.u32), 0xAA));
	// vspltw128 v10,v63,0
	_mm_store_si128((__m128i*)ctx.v10.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v63.u32), 0xFF));
	// vmaddfp v8,v12,v8,v11
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v8.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v8.f32)), _mm_load_ps(ctx.v11.f32)));
	// vmaddfp v9,v9,v13,v8
	_mm_store_ps(ctx.v9.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v9.f32), _mm_load_ps(ctx.v13.f32)), _mm_load_ps(ctx.v8.f32)));
	// vmaddfp v10,v10,v0,v9
	_mm_store_ps(ctx.v10.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v10.f32), _mm_load_ps(ctx.v0.f32)), _mm_load_ps(ctx.v9.f32)));
	// stvx128 v10,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v10.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// bdnz 0x82a28258
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82A28258;
loc_82A28280:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// li r0,-48
	ctx.r0.s64 = -48;
	// lvx128 v127,r1,r0
	simd::store_shuffled(ctx.v127, simd::load_and_shuffle(base + ((ctx.r1.u32 + ctx.r0.u32) & ~0xF), VectorMaskL));
	// ld r30,-24(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A282A0"))) PPC_WEAK_FUNC(sub_82A282A0);
PPC_FUNC_IMPL(__imp__sub_82A282A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7670
	ctx.lr = 0x82A282A8;
	__savegprlr_26(ctx, base);
	// stwu r1,-608(r1)
	ea = -608 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// ld r30,0(r5)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r5.u32 + 0);
	// lis r29,-31962
	ctx.r29.s64 = -2094661632;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// lwz r11,-14928(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -14928);
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// ld r31,-30720(r29)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r29.u32 + -30720);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// subf r3,r31,r30
	ctx.r3.s64 = ctx.r30.s64 - ctx.r31.s64;
	// stw r11,544(r1)
	PPC_STORE_U32(ctx.r1.u32 + 544, ctx.r11.u32);
	// bl 0x82fa9760
	ctx.lr = 0x82A282E0;
	sub_82FA9760(ctx, base);
	// frsp f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64));
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// cmpldi cr6,r31,0
	ctx.cr6.compare<uint64_t>(ctx.r31.u64, 0, ctx.xer);
	// lfs f0,-23580(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -23580);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// bne cr6,0x82a28310
	if (!ctx.cr6.eq) goto loc_82A28310;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// lfs f0,5184(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5184);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
loc_82A28310:
	// std r30,-30720(r29)
	PPC_STORE_U64(ctx.r29.u32 + -30720, ctx.r30.u64);
	// li r5,448
	ctx.r5.s64 = 448;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82a75220
	ctx.lr = 0x82A28324;
	sub_82A75220(ctx, base);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x82a28344
	if (ctx.cr6.eq) goto loc_82A28344;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// lwz r7,84(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82a28098
	ctx.lr = 0x82A28344;
	sub_82A28098(ctx, base);
loc_82A28344:
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// lfs f1,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f1.f64 = double(temp.f32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82a2a7e8
	ctx.lr = 0x82A28358;
	sub_82A2A7E8(ctx, base);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82a28370
	if (ctx.cr6.eq) goto loc_82A28370;
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// lfs f0,27160(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 27160);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
loc_82A28370:
	// lis r11,-31962
	ctx.r11.s64 = -2094661632;
	// lis r29,-31962
	ctx.r29.s64 = -2094661632;
	// lwz r30,-30704(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + -30704);
	// lwz r11,-30708(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -30708);
	// dcbt r0,r11
	// li r10,128
	ctx.r10.s64 = 128;
	// dcbt r10,r11
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq 0x82a283d0
	if (ctx.cr0.eq) goto loc_82A283D0;
	// li r31,0
	ctx.r31.s64 = 0;
loc_82A28398:
	// lwzx r3,r31,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82A283B4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,-30708(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -30708);
	// li r10,128
	ctx.r10.s64 = 128;
	// lwzx r9,r31,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// dcbt r10,r9
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// bne 0x82a28398
	if (!ctx.cr0.eq) goto loc_82A28398;
loc_82A283D0:
	// lwz r3,544(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 544);
	// bl 0x82faddd8
	ctx.lr = 0x82A283D8;
	sub_82FADDD8(ctx, base);
	// addi r1,r1,608
	ctx.r1.s64 = ctx.r1.s64 + 608;
	// b 0x82fa76c0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A283E0"))) PPC_WEAK_FUNC(sub_82A283E0);
PPC_FUNC_IMPL(__imp__sub_82A283E0) {
	PPC_FUNC_PROLOGUE();
	// li r10,20
	ctx.r10.s64 = 20;
	// li r3,0
	ctx.r3.s64 = 0;
	// li r11,0
	ctx.r11.s64 = 0;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82A283F0:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a28450
	if (ctx.cr6.eq) goto loc_82A28450;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x82a28450
	if (ctx.cr6.eq) goto loc_82A28450;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// beq cr6,0x82a28450
	if (ctx.cr6.eq) goto loc_82A28450;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// beq cr6,0x82a28450
	if (ctx.cr6.eq) goto loc_82A28450;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// beq cr6,0x82a28450
	if (ctx.cr6.eq) goto loc_82A28450;
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// beq cr6,0x82a28450
	if (ctx.cr6.eq) goto loc_82A28450;
	// cmplwi cr6,r11,6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 6, ctx.xer);
	// beq cr6,0x82a28450
	if (ctx.cr6.eq) goto loc_82A28450;
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// beq cr6,0x82a28450
	if (ctx.cr6.eq) goto loc_82A28450;
	// cmplwi cr6,r11,9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 9, ctx.xer);
	// beq cr6,0x82a28450
	if (ctx.cr6.eq) goto loc_82A28450;
	// cmplwi cr6,r11,10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 10, ctx.xer);
	// beq cr6,0x82a28450
	if (ctx.cr6.eq) goto loc_82A28450;
	// cmplwi cr6,r11,12
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 12, ctx.xer);
	// beq cr6,0x82a28450
	if (ctx.cr6.eq) goto loc_82A28450;
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// bne cr6,0x82a2845c
	if (!ctx.cr6.eq) goto loc_82A2845C;
loc_82A28450:
	// li r10,1
	ctx.r10.s64 = 1;
	// slw r10,r10,r11
	ctx.r10.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r11.u8 & 0x3F));
	// or r3,r10,r3
	ctx.r3.u64 = ctx.r10.u64 | ctx.r3.u64;
loc_82A2845C:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x82a283f0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82A283F0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A28468"))) PPC_WEAK_FUNC(sub_82A28468);
PPC_FUNC_IMPL(__imp__sub_82A28468) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x82A28470;
	__savegprlr_29(ctx, base);
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r6,1
	ctx.r11.s64 = ctx.r6.s64 + 1;
	// stw r4,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r4.u32);
	// addi r10,r7,1
	ctx.r10.s64 = ctx.r7.s64 + 1;
	// std r8,184(r1)
	PPC_STORE_U64(ctx.r1.u32 + 184, ctx.r8.u64);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r10,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r10.u32);
	// addi r30,r3,12
	ctx.r30.s64 = ctx.r3.s64 + 12;
	// std r9,192(r1)
	PPC_STORE_U64(ctx.r1.u32 + 192, ctx.r9.u64);
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// lwz r5,196(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// lwz r4,192(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// lwz r3,24(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// bl 0x82a2ea38
	ctx.lr = 0x82A284B0;
	sub_82A2EA38(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r5,188(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 188);
	// lwz r4,184(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// bl 0x82a2e9f8
	ctx.lr = 0x82A284C4;
	sub_82A2E9F8(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// li r8,1
	ctx.r8.s64 = 1;
	// bl 0x82a2aec8
	ctx.lr = 0x82A284E0;
	sub_82A2AEC8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82a28500
	if (ctx.cr0.lt) goto loc_82A28500;
	// li r11,1
	ctx.r11.s64 = 1;
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r4,212(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82a2b650
	ctx.lr = 0x82A28500;
	sub_82A2B650(ctx, base);
loc_82A28500:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A2850C"))) PPC_WEAK_FUNC(sub_82A2850C);
PPC_FUNC_IMPL(__imp__sub_82A2850C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A28510"))) PPC_WEAK_FUNC(sub_82A28510);
PPC_FUNC_IMPL(__imp__sub_82A28510) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x82A28518;
	__savegprlr_29(ctx, base);
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r6,1
	ctx.r11.s64 = ctx.r6.s64 + 1;
	// stw r4,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r4.u32);
	// addi r10,r7,1
	ctx.r10.s64 = ctx.r7.s64 + 1;
	// std r8,184(r1)
	PPC_STORE_U64(ctx.r1.u32 + 184, ctx.r8.u64);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r10,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r10.u32);
	// addi r30,r3,12
	ctx.r30.s64 = ctx.r3.s64 + 12;
	// std r9,192(r1)
	PPC_STORE_U64(ctx.r1.u32 + 192, ctx.r9.u64);
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// lwz r5,196(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// lwz r4,192(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// lwz r3,24(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// bl 0x82a2ea38
	ctx.lr = 0x82A28558;
	sub_82A2EA38(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r5,188(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 188);
	// lwz r4,184(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// bl 0x82a2e9f8
	ctx.lr = 0x82A2856C;
	sub_82A2E9F8(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// bl 0x82a2aec8
	ctx.lr = 0x82A28588;
	sub_82A2AEC8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82a285a0
	if (ctx.cr0.lt) goto loc_82A285A0;
	// lwz r5,220(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 220);
	// lwz r4,212(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// bl 0x82a2b650
	ctx.lr = 0x82A285A0;
	sub_82A2B650(ctx, base);
loc_82A285A0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A285AC"))) PPC_WEAK_FUNC(sub_82A285AC);
PPC_FUNC_IMPL(__imp__sub_82A285AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A285B0"))) PPC_WEAK_FUNC(sub_82A285B0);
PPC_FUNC_IMPL(__imp__sub_82A285B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7674
	ctx.lr = 0x82A285B8;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a28618
	if (ctx.cr6.eq) goto loc_82A28618;
	// bl 0x826914b0
	ctx.lr = 0x82A285D4;
	sub_826914B0(ctx, base);
	// li r11,520
	ctx.r11.s64 = 520;
	// li r31,0
	ctx.r31.s64 = 0;
	// divwu. r29,r3,r11
	ctx.r29.u32 = ctx.r3.u32 / ctx.r11.u32;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq 0x82a28604
	if (ctx.cr0.eq) goto loc_82A28604;
	// li r30,0
	ctx.r30.s64 = 0;
loc_82A285E8:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// add r3,r11,r30
	ctx.r3.u64 = ctx.r11.u64 + ctx.r30.u64;
	// bl 0x828b2440
	ctx.lr = 0x82A285F4;
	sub_828B2440(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,520
	ctx.r30.s64 = ctx.r30.s64 + 520;
	// cmplw cr6,r31,r29
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, ctx.xer);
	// blt cr6,0x82a285e8
	if (ctx.cr6.lt) goto loc_82A285E8;
loc_82A28604:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// bl 0x82691460
	ctx.lr = 0x82A28610;
	sub_82691460(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
loc_82A28618:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A28620"))) PPC_WEAK_FUNC(sub_82A28620);
PPC_FUNC_IMPL(__imp__sub_82A28620) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x82A28628;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mulli r3,r30,520
	ctx.r3.s64 = ctx.r30.s64 * 520;
	// bl 0x82691410
	ctx.lr = 0x82A2863C;
	sub_82691410(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq 0x82a2866c
	if (ctx.cr0.eq) goto loc_82A2866C;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82a2866c
	if (ctx.cr6.eq) goto loc_82A2866C;
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
loc_82A28650:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82a28660
	if (ctx.cr6.eq) goto loc_82A28660;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a2ae88
	ctx.lr = 0x82A28660;
	sub_82A2AE88(ctx, base);
loc_82A28660:
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r31,r31,520
	ctx.r31.s64 = ctx.r31.s64 + 520;
	// bne 0x82a28650
	if (!ctx.cr0.eq) goto loc_82A28650;
loc_82A2866C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A28678"))) PPC_WEAK_FUNC(sub_82A28678);
PPC_FUNC_IMPL(__imp__sub_82A28678) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mulli r3,r31,28
	ctx.r3.s64 = ctx.r31.s64 * 28;
	// bl 0x82691410
	ctx.lr = 0x82A28698;
	sub_82691410(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82a286e8
	if (ctx.cr0.eq) goto loc_82A286E8;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82a286e8
	if (ctx.cr6.eq) goto loc_82A286E8;
	// lis r9,-32248
	ctx.r9.s64 = -2113404928;
	// mtctr r31
	ctx.ctr.u64 = ctx.r31.u64;
	// addi r11,r3,20
	ctx.r11.s64 = ctx.r3.s64 + 20;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r9,-15104
	ctx.r9.s64 = ctx.r9.s64 + -15104;
loc_82A286BC:
	// addic. r8,r11,-20
	ctx.xer.ca = ctx.r11.u32 > 19;
	ctx.r8.s64 = ctx.r11.s64 + -20;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x82a286e0
	if (ctx.cr0.eq) goto loc_82A286E0;
	// stw r9,-20(r11)
	PPC_STORE_U32(ctx.r11.u32 + -20, ctx.r9.u32);
	// stw r10,-12(r11)
	PPC_STORE_U32(ctx.r11.u32 + -12, ctx.r10.u32);
	// stw r10,-8(r11)
	PPC_STORE_U32(ctx.r11.u32 + -8, ctx.r10.u32);
	// stw r10,-4(r11)
	PPC_STORE_U32(ctx.r11.u32 + -4, ctx.r10.u32);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// stw r10,-16(r11)
	PPC_STORE_U32(ctx.r11.u32 + -16, ctx.r10.u32);
loc_82A286E0:
	// addi r11,r11,28
	ctx.r11.s64 = ctx.r11.s64 + 28;
	// bdnz 0x82a286bc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82A286BC;
loc_82A286E8:
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

__attribute__((alias("__imp__sub_82A286FC"))) PPC_WEAK_FUNC(sub_82A286FC);
PPC_FUNC_IMPL(__imp__sub_82A286FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A28700"))) PPC_WEAK_FUNC(sub_82A28700);
PPC_FUNC_IMPL(__imp__sub_82A28700) {
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
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// bl 0x82a28620
	ctx.lr = 0x82A28720;
	sub_82A28620(ctx, base);
	// stw r3,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82a28738
	if (!ctx.cr0.eq) goto loc_82A28738;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x82a28754
	goto loc_82A28754;
loc_82A28738:
	// bl 0x82a2ae58
	ctx.lr = 0x82A2873C;
	sub_82A2AE58(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// lis r10,-32761
	ctx.r10.s64 = -2147024896;
	// addic r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// ori r10,r10,14
	ctx.r10.u64 = ctx.r10.u64 | 14;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 & ctx.r10.u64;
loc_82A28754:
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

__attribute__((alias("__imp__sub_82A28768"))) PPC_WEAK_FUNC(sub_82A28768);
PPC_FUNC_IMPL(__imp__sub_82A28768) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x82A28770;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// rlwinm r11,r3,16,0,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 16) & 0xFFFF0000;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// oris r30,r11,8192
	ctx.r30.u64 = ctx.r11.u64 | 536870912;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a28678
	ctx.lr = 0x82A2878C;
	sub_82A28678(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x82a287a0
	if (!ctx.cr0.eq) goto loc_82A287A0;
	// lis r30,-32761
	ctx.r30.s64 = -2147024896;
	// ori r30,r30,14
	ctx.r30.u64 = ctx.r30.u64 | 14;
	// b 0x82a287d0
	goto loc_82A287D0;
loc_82A287A0:
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a28700
	ctx.lr = 0x82A287AC;
	sub_82A28700(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt 0x82a287bc
	if (ctx.cr0.lt) goto loc_82A287BC;
	// stw r31,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r31.u32);
	// b 0x82a287d0
	goto loc_82A287D0;
loc_82A287BC:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82A287D0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82A287D0:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A287DC"))) PPC_WEAK_FUNC(sub_82A287DC);
PPC_FUNC_IMPL(__imp__sub_82A287DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A287E0"))) PPC_WEAK_FUNC(sub_82A287E0);
PPC_FUNC_IMPL(__imp__sub_82A287E0) {
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
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r4,8(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// addi r11,r11,-15104
	ctx.r11.s64 = ctx.r11.s64 + -15104;
	// addi r3,r3,24
	ctx.r3.s64 = ctx.r3.s64 + 24;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x82a285b0
	ctx.lr = 0x82A28814;
	sub_82A285B0(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82a28824
	if (ctx.cr0.eq) goto loc_82A28824;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82691540
	ctx.lr = 0x82A28824;
	sub_82691540(ctx, base);
loc_82A28824:
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

__attribute__((alias("__imp__sub_82A28840"))) PPC_WEAK_FUNC(sub_82A28840);
PPC_FUNC_IMPL(__imp__sub_82A28840) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7674
	ctx.lr = 0x82A28848;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a288ac
	if (ctx.cr6.eq) goto loc_82A288AC;
	// bl 0x826914b0
	ctx.lr = 0x82A28864;
	sub_826914B0(ctx, base);
	// li r11,28
	ctx.r11.s64 = 28;
	// li r31,0
	ctx.r31.s64 = 0;
	// divwu. r29,r3,r11
	ctx.r29.u32 = ctx.r3.u32 / ctx.r11.u32;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq 0x82a28898
	if (ctx.cr0.eq) goto loc_82A28898;
	// li r30,0
	ctx.r30.s64 = 0;
loc_82A28878:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// add r3,r11,r30
	ctx.r3.u64 = ctx.r11.u64 + ctx.r30.u64;
	// bl 0x82a287e0
	ctx.lr = 0x82A28888;
	sub_82A287E0(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,28
	ctx.r30.s64 = ctx.r30.s64 + 28;
	// cmplw cr6,r31,r29
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, ctx.xer);
	// blt cr6,0x82a28878
	if (ctx.cr6.lt) goto loc_82A28878;
loc_82A28898:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// bl 0x82691460
	ctx.lr = 0x82A288A4;
	sub_82691460(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
loc_82A288AC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A288B4"))) PPC_WEAK_FUNC(sub_82A288B4);
PPC_FUNC_IMPL(__imp__sub_82A288B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A288B8"))) PPC_WEAK_FUNC(sub_82A288B8);
PPC_FUNC_IMPL(__imp__sub_82A288B8) {
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
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,8(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// bl 0x82a28840
	ctx.lr = 0x82A288D8;
	sub_82A28840(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A288E8"))) PPC_WEAK_FUNC(sub_82A288E8);
PPC_FUNC_IMPL(__imp__sub_82A288E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x82A288F0;
	__savegprlr_29(ctx, base);
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r6,1
	ctx.r11.s64 = ctx.r6.s64 + 1;
	// stw r4,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r4.u32);
	// addi r10,r7,1
	ctx.r10.s64 = ctx.r7.s64 + 1;
	// std r8,184(r1)
	PPC_STORE_U64(ctx.r1.u32 + 184, ctx.r8.u64);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r10,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r10.u32);
	// addi r30,r3,8
	ctx.r30.s64 = ctx.r3.s64 + 8;
	// std r9,192(r1)
	PPC_STORE_U64(ctx.r1.u32 + 192, ctx.r9.u64);
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// lwz r5,196(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// lwz r4,192(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// lwz r3,20(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// bl 0x82a2bfb8
	ctx.lr = 0x82A28930;
	sub_82A2BFB8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r5,188(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 188);
	// lwz r4,184(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// bl 0x82a2bf78
	ctx.lr = 0x82A28944;
	sub_82A2BF78(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// li r8,1
	ctx.r8.s64 = 1;
	// bl 0x82a2c0a0
	ctx.lr = 0x82A28960;
	sub_82A2C0A0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82a28980
	if (ctx.cr0.lt) goto loc_82A28980;
	// li r11,1
	ctx.r11.s64 = 1;
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r4,212(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82a2da38
	ctx.lr = 0x82A28980;
	sub_82A2DA38(ctx, base);
loc_82A28980:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A2898C"))) PPC_WEAK_FUNC(sub_82A2898C);
PPC_FUNC_IMPL(__imp__sub_82A2898C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A28990"))) PPC_WEAK_FUNC(sub_82A28990);
PPC_FUNC_IMPL(__imp__sub_82A28990) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x82A28998;
	__savegprlr_29(ctx, base);
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r6,1
	ctx.r11.s64 = ctx.r6.s64 + 1;
	// stw r4,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r4.u32);
	// addi r10,r7,1
	ctx.r10.s64 = ctx.r7.s64 + 1;
	// std r8,184(r1)
	PPC_STORE_U64(ctx.r1.u32 + 184, ctx.r8.u64);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r10,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r10.u32);
	// addi r30,r3,8
	ctx.r30.s64 = ctx.r3.s64 + 8;
	// std r9,192(r1)
	PPC_STORE_U64(ctx.r1.u32 + 192, ctx.r9.u64);
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// lwz r5,196(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// lwz r4,192(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// lwz r3,20(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// bl 0x82a2bfb8
	ctx.lr = 0x82A289D8;
	sub_82A2BFB8(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r5,188(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 188);
	// lwz r4,184(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// bl 0x82a2bf78
	ctx.lr = 0x82A289EC;
	sub_82A2BF78(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// bl 0x82a2c0a0
	ctx.lr = 0x82A28A08;
	sub_82A2C0A0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82a28a20
	if (ctx.cr0.lt) goto loc_82A28A20;
	// lwz r5,220(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 220);
	// lwz r4,212(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// bl 0x82a2da38
	ctx.lr = 0x82A28A20;
	sub_82A2DA38(ctx, base);
loc_82A28A20:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A28A2C"))) PPC_WEAK_FUNC(sub_82A28A2C);
PPC_FUNC_IMPL(__imp__sub_82A28A2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A28A30"))) PPC_WEAK_FUNC(sub_82A28A30);
PPC_FUNC_IMPL(__imp__sub_82A28A30) {
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
	// lis r11,-31962
	ctx.r11.s64 = -2094661632;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r5,2384
	ctx.r5.s64 = 2384;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,-28960(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -28960);
	// bl 0x82a81490
	ctx.lr = 0x82A28A60;
	sub_82A81490(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82a28a70
	if (ctx.cr0.eq) goto loc_82A28A70;
	// bl 0x828b2440
	ctx.lr = 0x82A28A6C;
	sub_828B2440(ctx, base);
	// b 0x82a28a74
	goto loc_82A28A74;
loc_82A28A70:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82A28A74:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r3.u32);
	// bne cr6,0x82a28a8c
	if (!ctx.cr6.eq) goto loc_82A28A8C;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x82a28aa4
	goto loc_82A28AA4;
loc_82A28A8C:
	// bl 0x82a2c000
	ctx.lr = 0x82A28A90;
	sub_82A2C000(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82a28aa4
	if (ctx.cr0.lt) goto loc_82A28AA4;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// bl 0x82a2be30
	ctx.lr = 0x82A28AA4;
	sub_82A2BE30(ctx, base);
loc_82A28AA4:
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

__attribute__((alias("__imp__sub_82A28ABC"))) PPC_WEAK_FUNC(sub_82A28ABC);
PPC_FUNC_IMPL(__imp__sub_82A28ABC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A28AC0"))) PPC_WEAK_FUNC(sub_82A28AC0);
PPC_FUNC_IMPL(__imp__sub_82A28AC0) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mulli r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 * 24;
	// bl 0x82691410
	ctx.lr = 0x82A28AE0;
	sub_82691410(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82a28b30
	if (ctx.cr0.eq) goto loc_82A28B30;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82a28b30
	if (ctx.cr6.eq) goto loc_82A28B30;
	// lis r9,-32248
	ctx.r9.s64 = -2113404928;
	// mtctr r31
	ctx.ctr.u64 = ctx.r31.u64;
	// addi r11,r3,16
	ctx.r11.s64 = ctx.r3.s64 + 16;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r9,-15012
	ctx.r9.s64 = ctx.r9.s64 + -15012;
loc_82A28B04:
	// addic. r8,r11,-16
	ctx.xer.ca = ctx.r11.u32 > 15;
	ctx.r8.s64 = ctx.r11.s64 + -16;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x82a28b28
	if (ctx.cr0.eq) goto loc_82A28B28;
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r9,-16(r11)
	PPC_STORE_U32(ctx.r11.u32 + -16, ctx.r9.u32);
	// stw r10,-8(r11)
	PPC_STORE_U32(ctx.r11.u32 + -8, ctx.r10.u32);
	// stw r10,-4(r11)
	PPC_STORE_U32(ctx.r11.u32 + -4, ctx.r10.u32);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// stw r8,-12(r11)
	PPC_STORE_U32(ctx.r11.u32 + -12, ctx.r8.u32);
loc_82A28B28:
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
	// bdnz 0x82a28b04
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82A28B04;
loc_82A28B30:
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

__attribute__((alias("__imp__sub_82A28B44"))) PPC_WEAK_FUNC(sub_82A28B44);
PPC_FUNC_IMPL(__imp__sub_82A28B44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A28B48"))) PPC_WEAK_FUNC(sub_82A28B48);
PPC_FUNC_IMPL(__imp__sub_82A28B48) {
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
	// bl 0x82a2dd38
	ctx.lr = 0x82A28B68;
	sub_82A2DD38(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82a28b8c
	if (ctx.cr0.eq) goto loc_82A28B8C;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82a28b8c
	if (ctx.cr6.eq) goto loc_82A28B8C;
	// lis r11,-31962
	ctx.r11.s64 = -2094661632;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,-28960(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -28960);
	// bl 0x82a81d88
	ctx.lr = 0x82A28B8C;
	sub_82A81D88(ctx, base);
loc_82A28B8C:
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

__attribute__((alias("__imp__sub_82A28BA8"))) PPC_WEAK_FUNC(sub_82A28BA8);
PPC_FUNC_IMPL(__imp__sub_82A28BA8) {
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
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,-15012
	ctx.r11.s64 = ctx.r11.s64 + -15012;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lwz r3,20(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a28be4
	if (ctx.cr6.eq) goto loc_82A28BE4;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82a28b48
	ctx.lr = 0x82A28BDC;
	sub_82A28B48(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
loc_82A28BE4:
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

__attribute__((alias("__imp__sub_82A28BF8"))) PPC_WEAK_FUNC(sub_82A28BF8);
PPC_FUNC_IMPL(__imp__sub_82A28BF8) {
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
	// bl 0x82a28ba8
	ctx.lr = 0x82A28C18;
	sub_82A28BA8(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82a28c3c
	if (ctx.cr0.eq) goto loc_82A28C3C;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82a28c3c
	if (ctx.cr6.eq) goto loc_82A28C3C;
	// lis r11,-31962
	ctx.r11.s64 = -2094661632;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,-28960(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -28960);
	// bl 0x82a81d88
	ctx.lr = 0x82A28C3C;
	sub_82A81D88(ctx, base);
loc_82A28C3C:
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

__attribute__((alias("__imp__sub_82A28C58"))) PPC_WEAK_FUNC(sub_82A28C58);
PPC_FUNC_IMPL(__imp__sub_82A28C58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7674
	ctx.lr = 0x82A28C60;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a28cc4
	if (ctx.cr6.eq) goto loc_82A28CC4;
	// bl 0x826914b0
	ctx.lr = 0x82A28C7C;
	sub_826914B0(ctx, base);
	// li r11,24
	ctx.r11.s64 = 24;
	// li r31,0
	ctx.r31.s64 = 0;
	// divwu. r29,r3,r11
	ctx.r29.u32 = ctx.r3.u32 / ctx.r11.u32;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq 0x82a28cb0
	if (ctx.cr0.eq) goto loc_82A28CB0;
	// li r30,0
	ctx.r30.s64 = 0;
loc_82A28C90:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// add r3,r11,r30
	ctx.r3.u64 = ctx.r11.u64 + ctx.r30.u64;
	// bl 0x82a28bf8
	ctx.lr = 0x82A28CA0;
	sub_82A28BF8(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,24
	ctx.r30.s64 = ctx.r30.s64 + 24;
	// cmplw cr6,r31,r29
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, ctx.xer);
	// blt cr6,0x82a28c90
	if (ctx.cr6.lt) goto loc_82A28C90;
loc_82A28CB0:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// bl 0x82691460
	ctx.lr = 0x82A28CBC;
	sub_82691460(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
loc_82A28CC4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A28CCC"))) PPC_WEAK_FUNC(sub_82A28CCC);
PPC_FUNC_IMPL(__imp__sub_82A28CCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A28CD0"))) PPC_WEAK_FUNC(sub_82A28CD0);
PPC_FUNC_IMPL(__imp__sub_82A28CD0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x82A28CD8;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// lis r31,-31962
	ctx.r31.s64 = -2094661632;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,-28952(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28952);
	// bl 0x82a28c58
	ctx.lr = 0x82A28CF0;
	sub_82A28C58(ctx, base);
	// lis r30,-31962
	ctx.r30.s64 = -2094661632;
	// lwz r3,-28960(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -28960);
	// bl 0x82a80070
	ctx.lr = 0x82A28CFC;
	sub_82A80070(ctx, base);
	// lis r29,-31962
	ctx.r29.s64 = -2094661632;
	// lwz r4,-28952(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + -28952);
	// lwz r3,-28956(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -28956);
	// bl 0x82691460
	ctx.lr = 0x82A28D0C;
	sub_82691460(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,-28960(r30)
	PPC_STORE_U32(ctx.r30.u32 + -28960, ctx.r11.u32);
	// stw r10,-28956(r29)
	PPC_STORE_U32(ctx.r29.u32 + -28956, ctx.r10.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A28D24"))) PPC_WEAK_FUNC(sub_82A28D24);
PPC_FUNC_IMPL(__imp__sub_82A28D24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A28D28"))) PPC_WEAK_FUNC(sub_82A28D28);
PPC_FUNC_IMPL(__imp__sub_82A28D28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7668
	ctx.lr = 0x82A28D30;
	__savegprlr_24(ctx, base);
	// stwu r1,-432(r1)
	ea = -432 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r30,-31962
	ctx.r30.s64 = -2094661632;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// mr r24,r5
	ctx.r24.u64 = ctx.r5.u64;
	// li r27,0
	ctx.r27.s64 = 0;
	// lwz r11,-28960(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -28960);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a28d5c
	if (ctx.cr6.eq) goto loc_82A28D5C;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,1247
	ctx.r3.u64 = ctx.r3.u64 | 1247;
	// b 0x82a28e7c
	goto loc_82A28E7C;
loc_82A28D5C:
	// rlwinm r11,r3,16,0,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 16) & 0xFFFF0000;
	// lis r29,-31962
	ctx.r29.s64 = -2094661632;
	// oris r4,r11,8192
	ctx.r4.u64 = ctx.r11.u64 | 536870912;
	// lis r3,29
	ctx.r3.s64 = 1900544;
	// ori r3,r3,32768
	ctx.r3.u64 = ctx.r3.u64 | 32768;
	// stw r4,-28952(r29)
	PPC_STORE_U32(ctx.r29.u32 + -28952, ctx.r4.u32);
	// bl 0x82691410
	ctx.lr = 0x82A28D78;
	sub_82691410(ctx, base);
	// lis r26,-31962
	ctx.r26.s64 = -2094661632;
	// lis r11,-32761
	ctx.r11.s64 = -2147024896;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// ori r28,r11,14
	ctx.r28.u64 = ctx.r11.u64 | 14;
	// stw r3,-28956(r26)
	PPC_STORE_U32(ctx.r26.u32 + -28956, ctx.r3.u32);
	// beq 0x82a28da8
	if (ctx.cr0.eq) goto loc_82A28DA8;
	// lis r4,29
	ctx.r4.s64 = 1900544;
	// ori r4,r4,32768
	ctx.r4.u64 = ctx.r4.u64 | 32768;
	// bl 0x82a28e88
	ctx.lr = 0x82A28D9C;
	sub_82A28E88(ctx, base);
	// stw r3,-28960(r30)
	PPC_STORE_U32(ctx.r30.u32 + -28960, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82a28dac
	if (!ctx.cr0.eq) goto loc_82A28DAC;
loc_82A28DA8:
	// mr r27,r28
	ctx.r27.u64 = ctx.r28.u64;
loc_82A28DAC:
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// blt cr6,0x82a28e40
	if (ctx.cr6.lt) goto loc_82A28E40;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,-28952(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -28952);
	// bl 0x82a28ac0
	ctx.lr = 0x82A28DC8;
	sub_82A28AC0(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// bne 0x82a28dd8
	if (!ctx.cr0.eq) goto loc_82A28DD8;
	// mr r27,r28
	ctx.r27.u64 = ctx.r28.u64;
loc_82A28DD8:
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// blt cr6,0x82a28e40
	if (ctx.cr6.lt) goto loc_82A28E40;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// li r4,260
	ctx.r4.s64 = 260;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82fa5590
	ctx.lr = 0x82A28DF0;
	sub_82FA5590(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82a28e14
	if (!ctx.cr0.eq) goto loc_82A28E14;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// li r4,260
	ctx.r4.s64 = 260;
	// addi r5,r11,-15000
	ctx.r5.s64 = ctx.r11.s64 + -15000;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82fa85a0
	ctx.lr = 0x82A28E0C;
	sub_82FA85A0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82a28e1c
	if (ctx.cr0.eq) goto loc_82A28E1C;
loc_82A28E14:
	// lis r27,-32768
	ctx.r27.s64 = -2147483648;
	// ori r27,r27,16389
	ctx.r27.u64 = ctx.r27.u64 | 16389;
loc_82A28E1C:
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// blt cr6,0x82a28e40
	if (ctx.cr6.lt) goto loc_82A28E40;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a28a30
	ctx.lr = 0x82A28E30;
	sub_82A28A30(ctx, base);
	// mr. r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// blt 0x82a28e40
	if (ctx.cr0.lt) goto loc_82A28E40;
	// stw r31,0(r24)
	PPC_STORE_U32(ctx.r24.u32 + 0, ctx.r31.u32);
	// b 0x82a28e78
	goto loc_82A28E78;
loc_82A28E40:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,-28952(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + -28952);
	// bl 0x82a28c58
	ctx.lr = 0x82A28E4C;
	sub_82A28C58(ctx, base);
	// lwz r3,-28960(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -28960);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a28e64
	if (ctx.cr6.eq) goto loc_82A28E64;
	// bl 0x82a80070
	ctx.lr = 0x82A28E5C;
	sub_82A80070(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,-28960(r30)
	PPC_STORE_U32(ctx.r30.u32 + -28960, ctx.r11.u32);
loc_82A28E64:
	// lwz r3,-28956(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + -28956);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a28e78
	if (ctx.cr6.eq) goto loc_82A28E78;
	// lwz r4,-28952(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + -28952);
	// bl 0x82691460
	ctx.lr = 0x82A28E78;
	sub_82691460(ctx, base);
loc_82A28E78:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
loc_82A28E7C:
	// addi r1,r1,432
	ctx.r1.s64 = ctx.r1.s64 + 432;
	// b 0x82fa76b8
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A28E84"))) PPC_WEAK_FUNC(sub_82A28E84);
PPC_FUNC_IMPL(__imp__sub_82A28E84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A28E88"))) PPC_WEAK_FUNC(sub_82A28E88);
PPC_FUNC_IMPL(__imp__sub_82A28E88) {
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
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r5,44
	ctx.r5.s64 = 44;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82fa7cf0
	ctx.lr = 0x82A28EB4;
	sub_82FA7CF0(ctx, base);
	// lis r11,-32095
	ctx.r11.s64 = -2103377920;
	// li r10,48
	ctx.r10.s64 = 48;
	// stw r30,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r30.u32);
	// addi r11,r11,-16080
	ctx.r11.s64 = ctx.r11.s64 + -16080;
	// stw r30,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r30.u32);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,4096
	ctx.r3.s64 = 4096;
	// bl 0x82a80ec0
	ctx.lr = 0x82A28EEC;
	sub_82A80EC0(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
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

__attribute__((alias("__imp__sub_82A28F04"))) PPC_WEAK_FUNC(sub_82A28F04);
PPC_FUNC_IMPL(__imp__sub_82A28F04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A28F08"))) PPC_WEAK_FUNC(sub_82A28F08);
PPC_FUNC_IMPL(__imp__sub_82A28F08) {
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
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// addi r11,r11,-14916
	ctx.r11.s64 = ctx.r11.s64 + -14916;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x82c8af70
	ctx.lr = 0x82A28F30;
	sub_82C8AF70(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82A28F50"))) PPC_WEAK_FUNC(sub_82A28F50);
PPC_FUNC_IMPL(__imp__sub_82A28F50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7668
	ctx.lr = 0x82A28F58;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r28,r3,4
	ctx.r28.s64 = ctx.r3.s64 + 4;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// mr r25,r8
	ctx.r25.u64 = ctx.r8.u64;
	// mr r27,r9
	ctx.r27.u64 = ctx.r9.u64;
	// mr r24,r10
	ctx.r24.u64 = ctx.r10.u64;
	// bl 0x82a2de28
	ctx.lr = 0x82A28F84;
	sub_82A2DE28(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82a28fd0
	if (ctx.cr0.lt) goto loc_82A28FD0;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82a2ea38
	ctx.lr = 0x82A28F9C;
	sub_82A2EA38(ctx, base);
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// bl 0x82a2e9f8
	ctx.lr = 0x82A28FB0;
	sub_82A2E9F8(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// bl 0x82a2e278
	ctx.lr = 0x82A28FC8;
	sub_82A2E278(ctx, base);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// b 0x82a28fd4
	goto loc_82A28FD4;
loc_82A28FD0:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82A28FD4:
	// stw r11,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82fa76b8
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A28FE0"))) PPC_WEAK_FUNC(sub_82A28FE0);
PPC_FUNC_IMPL(__imp__sub_82A28FE0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// b 0x82a2dd40
	sub_82A2DD40(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A28FE8"))) PPC_WEAK_FUNC(sub_82A28FE8);
PPC_FUNC_IMPL(__imp__sub_82A28FE8) {
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
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,-14928
	ctx.r11.s64 = ctx.r11.s64 + -14928;
	// clrlwi. r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// beq 0x82a29030
	if (ctx.cr0.eq) goto loc_82A29030;
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// lis r10,8
	ctx.r10.s64 = 524288;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// ori r10,r10,63156
	ctx.r10.u64 = ctx.r10.u64 | 63156;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,24028(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24028);
	// lwzx r3,r11,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// bl 0x82a81d88
	ctx.lr = 0x82A29030;
	sub_82A81D88(ctx, base);
loc_82A29030:
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

__attribute__((alias("__imp__sub_82A29048"))) PPC_WEAK_FUNC(sub_82A29048);
PPC_FUNC_IMPL(__imp__sub_82A29048) {
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
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// lis r10,8
	ctx.r10.s64 = 524288;
	// li r5,20
	ctx.r5.s64 = 20;
	// ori r10,r10,63156
	ctx.r10.u64 = ctx.r10.u64 | 63156;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,24028(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24028);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwzx r3,r11,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// bl 0x82a81490
	ctx.lr = 0x82A2907C;
	sub_82A81490(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82a2908c
	if (ctx.cr0.eq) goto loc_82A2908C;
	// bl 0x82a2ea80
	ctx.lr = 0x82A29088;
	sub_82A2EA80(ctx, base);
	// b 0x82a29090
	goto loc_82A29090;
loc_82A2908C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82A29090:
	// stw r3,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82a290a8
	if (!ctx.cr6.eq) goto loc_82A290A8;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x82a290c4
	goto loc_82A290C4;
loc_82A290A8:
	// bl 0x82a2e258
	ctx.lr = 0x82A290AC;
	sub_82A2E258(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// lis r10,-32761
	ctx.r10.s64 = -2147024896;
	// addic r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// ori r10,r10,14
	ctx.r10.u64 = ctx.r10.u64 | 14;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 & ctx.r10.u64;
loc_82A290C4:
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

__attribute__((alias("__imp__sub_82A290D8"))) PPC_WEAK_FUNC(sub_82A290D8);
PPC_FUNC_IMPL(__imp__sub_82A290D8) {
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
	// bl 0x828b2440
	ctx.lr = 0x82A290F8;
	sub_828B2440(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82a29128
	if (ctx.cr0.eq) goto loc_82A29128;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82a29128
	if (ctx.cr6.eq) goto loc_82A29128;
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// lis r10,8
	ctx.r10.s64 = 524288;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// ori r10,r10,63156
	ctx.r10.u64 = ctx.r10.u64 | 63156;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,24028(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24028);
	// lwzx r3,r11,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// bl 0x82a81d88
	ctx.lr = 0x82A29128;
	sub_82A81D88(ctx, base);
loc_82A29128:
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

__attribute__((alias("__imp__sub_82A29144"))) PPC_WEAK_FUNC(sub_82A29144);
PPC_FUNC_IMPL(__imp__sub_82A29144) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A29148"))) PPC_WEAK_FUNC(sub_82A29148);
PPC_FUNC_IMPL(__imp__sub_82A29148) {
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
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,-14916
	ctx.r11.s64 = ctx.r11.s64 + -14916;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lwz r3,24(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a29184
	if (ctx.cr6.eq) goto loc_82A29184;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82a290d8
	ctx.lr = 0x82A2917C;
	sub_82A290D8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
loc_82A29184:
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// bl 0x82a2dd88
	ctx.lr = 0x82A2918C;
	sub_82A2DD88(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// addi r11,r11,-14928
	ctx.r11.s64 = ctx.r11.s64 + -14928;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82A291AC"))) PPC_WEAK_FUNC(sub_82A291AC);
PPC_FUNC_IMPL(__imp__sub_82A291AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A291B0"))) PPC_WEAK_FUNC(sub_82A291B0);
PPC_FUNC_IMPL(__imp__sub_82A291B0) {
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
	// bl 0x82a29148
	ctx.lr = 0x82A291D0;
	sub_82A29148(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82a29200
	if (ctx.cr0.eq) goto loc_82A29200;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82a29200
	if (ctx.cr6.eq) goto loc_82A29200;
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// lis r10,8
	ctx.r10.s64 = 524288;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// ori r10,r10,63156
	ctx.r10.u64 = ctx.r10.u64 | 63156;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,24028(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24028);
	// lwzx r3,r11,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// bl 0x82a81d88
	ctx.lr = 0x82A29200;
	sub_82A81D88(ctx, base);
loc_82A29200:
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

__attribute__((alias("__imp__sub_82A2921C"))) PPC_WEAK_FUNC(sub_82A2921C);
PPC_FUNC_IMPL(__imp__sub_82A2921C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A29220"))) PPC_WEAK_FUNC(sub_82A29220);
PPC_FUNC_IMPL(__imp__sub_82A29220) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7670
	ctx.lr = 0x82A29228;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// li r5,8640
	ctx.r5.s64 = 8640;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82fa7cf0
	ctx.lr = 0x82A29248;
	sub_82FA7CF0(ctx, base);
	// li r5,3717
	ctx.r5.s64 = 3717;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82fa7cf0
	ctx.lr = 0x82A29258;
	sub_82FA7CF0(ctx, base);
	// addi r11,r31,320
	ctx.r11.s64 = ctx.r31.s64 + 320;
	// mr r8,r31
	ctx.r8.u64 = ctx.r31.u64;
	// addi r5,r11,320
	ctx.r5.s64 = ctx.r11.s64 + 320;
	// lis r11,-31962
	ctx.r11.s64 = -2094661632;
	// lis r31,-31962
	ctx.r31.s64 = -2094661632;
	// addi r11,r11,-28768
	ctx.r11.s64 = ctx.r11.s64 + -28768;
	// lis r10,-31962
	ctx.r10.s64 = -2094661632;
	// lis r9,-31962
	ctx.r9.s64 = -2094661632;
	// lis r7,-31962
	ctx.r7.s64 = -2094661632;
	// lis r3,-31962
	ctx.r3.s64 = -2094661632;
	// addi r28,r31,-28848
	ctx.r28.s64 = ctx.r31.s64 + -28848;
	// lvx128 v58,r0,r11
	simd::store_shuffled(ctx.v58, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// addi r10,r10,-28784
	ctx.r10.s64 = ctx.r10.s64 + -28784;
	// addi r9,r9,-28800
	ctx.r9.s64 = ctx.r9.s64 + -28800;
	// addi r7,r7,-28816
	ctx.r7.s64 = ctx.r7.s64 + -28816;
	// addi r3,r3,-28832
	ctx.r3.s64 = ctx.r3.s64 + -28832;
	// addi r4,r30,80
	ctx.r4.s64 = ctx.r30.s64 + 80;
	// lvx128 v63,r0,r28
	simd::store_shuffled(ctx.v63, simd::load_and_shuffle(base + ((ctx.r28.u32) & ~0xF), VectorMaskL));
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lvx128 v59,r0,r10
	simd::store_shuffled(ctx.v59, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// lvx128 v60,r0,r9
	simd::store_shuffled(ctx.v60, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// addi r6,r4,2
	ctx.r6.s64 = ctx.r4.s64 + 2;
	// lvx128 v61,r0,r7
	simd::store_shuffled(ctx.v61, simd::load_and_shuffle(base + ((ctx.r7.u32) & ~0xF), VectorMaskL));
	// li r30,106
	ctx.r30.s64 = 106;
	// lvx128 v62,r0,r3
	simd::store_shuffled(ctx.v62, simd::load_and_shuffle(base + ((ctx.r3.u32) & ~0xF), VectorMaskL));
	// addi r31,r11,-14896
	ctx.r31.s64 = ctx.r11.s64 + -14896;
loc_82A292C0:
	// li r9,40
	ctx.r9.s64 = 40;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r3,r6,-1
	ctx.r3.s64 = ctx.r6.s64 + -1;
	// li r11,0
	ctx.r11.s64 = 0;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82A292D4:
	// addi r9,r11,16
	ctx.r9.s64 = ctx.r11.s64 + 16;
	// lvlx128 v57,r11,r8
	temp.u32 = ctx.r11.u32 + ctx.r8.u32;
	_mm_store_si128((__m128i*)ctx.v57.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r7,r8,320
	ctx.r7.s64 = ctx.r8.s64 + 320;
	// lvlx128 v56,r11,r5
	temp.u32 = ctx.r11.u32 + ctx.r5.u32;
	_mm_store_si128((__m128i*)ctx.v56.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r28,r1,80
	ctx.r28.s64 = ctx.r1.s64 + 80;
	// addi r27,r1,80
	ctx.r27.s64 = ctx.r1.s64 + 80;
	// li r26,4
	ctx.r26.s64 = 4;
	// lvrx128 v55,r9,r8
	temp.u32 = ctx.r9.u32 + ctx.r8.u32;
	_mm_store_si128((__m128i*)ctx.v55.u8, temp.u32 & 0xF ? _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : _mm_setzero_si128());
	// vor128 v57,v57,v55
	_mm_store_si128((__m128i*)ctx.v57.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v57.u8), _mm_load_si128((__m128i*)ctx.v55.u8)));
	// lvrx128 v55,r9,r7
	temp.u32 = ctx.r9.u32 + ctx.r7.u32;
	_mm_store_si128((__m128i*)ctx.v55.u8, temp.u32 & 0xF ? _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : _mm_setzero_si128());
	// lvlx128 v54,r11,r7
	temp.u32 = ctx.r11.u32 + ctx.r7.u32;
	_mm_store_si128((__m128i*)ctx.v54.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// vor128 v55,v54,v55
	_mm_store_si128((__m128i*)ctx.v55.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v54.u8), _mm_load_si128((__m128i*)ctx.v55.u8)));
	// lvrx128 v54,r9,r5
	temp.u32 = ctx.r9.u32 + ctx.r5.u32;
	_mm_store_si128((__m128i*)ctx.v54.u8, temp.u32 & 0xF ? _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : _mm_setzero_si128());
	// vor128 v56,v56,v54
	_mm_store_si128((__m128i*)ctx.v56.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v56.u8), _mm_load_si128((__m128i*)ctx.v54.u8)));
	// vspltw128 v54,v55,1
	_mm_store_si128((__m128i*)ctx.v54.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v55.u32), 0xAA));
	// vspltw128 v53,v55,2
	_mm_store_si128((__m128i*)ctx.v53.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v55.u32), 0x55));
	// vcmpgtfp128 v52,v55,v54
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v52.f32, _mm_cmpgt_ps(_mm_load_ps(ctx.v55.f32), _mm_load_ps(ctx.v54.f32)));
	// vcmpgtfp128 v51,v57,v54
	_mm_store_ps(ctx.v51.f32, _mm_cmpgt_ps(_mm_load_ps(ctx.v57.f32), _mm_load_ps(ctx.v54.f32)));
	// vcmpgtfp128 v57,v57,v53
	_mm_store_ps(ctx.v57.f32, _mm_cmpgt_ps(_mm_load_ps(ctx.v57.f32), _mm_load_ps(ctx.v53.f32)));
	// vcmpgtfp128 v55,v55,v53
	_mm_store_ps(ctx.v55.f32, _mm_cmpgt_ps(_mm_load_ps(ctx.v55.f32), _mm_load_ps(ctx.v53.f32)));
	// vcmpgtfp128 v54,v56,v54
	_mm_store_ps(ctx.v54.f32, _mm_cmpgt_ps(_mm_load_ps(ctx.v56.f32), _mm_load_ps(ctx.v54.f32)));
	// vcmpgtfp128 v56,v56,v53
	_mm_store_ps(ctx.v56.f32, _mm_cmpgt_ps(_mm_load_ps(ctx.v56.f32), _mm_load_ps(ctx.v53.f32)));
	// vcsxwfp128 v53,v52,0
	_mm_store_ps(ctx.v53.f32, _mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v52.u32)));
	// vcsxwfp128 v52,v51,0
	_mm_store_ps(ctx.v52.f32, _mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v51.u32)));
	// vcsxwfp128 v57,v57,0
	_mm_store_ps(ctx.v57.f32, _mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v57.u32)));
	// vcsxwfp128 v55,v55,0
	_mm_store_ps(ctx.v55.f32, _mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v55.u32)));
	// vcsxwfp128 v54,v54,0
	_mm_store_ps(ctx.v54.f32, _mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v54.u32)));
	// vcsxwfp128 v56,v56,0
	_mm_store_ps(ctx.v56.f32, _mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v56.u32)));
	// vmsum4fp128 v53,v53,v62
	_mm_store_ps(ctx.v53.f32, _mm_dp_ps(_mm_load_ps(ctx.v53.f32), _mm_load_ps(ctx.v62.f32), 0xFF));
	// vmsum4fp128 v52,v52,v63
	_mm_store_ps(ctx.v52.f32, _mm_dp_ps(_mm_load_ps(ctx.v52.f32), _mm_load_ps(ctx.v63.f32), 0xFF));
	// vmsum4fp128 v57,v57,v60
	_mm_store_ps(ctx.v57.f32, _mm_dp_ps(_mm_load_ps(ctx.v57.f32), _mm_load_ps(ctx.v60.f32), 0xFF));
	// vmsum4fp128 v55,v55,v59
	_mm_store_ps(ctx.v55.f32, _mm_dp_ps(_mm_load_ps(ctx.v55.f32), _mm_load_ps(ctx.v59.f32), 0xFF));
	// vmsum4fp128 v54,v54,v61
	_mm_store_ps(ctx.v54.f32, _mm_dp_ps(_mm_load_ps(ctx.v54.f32), _mm_load_ps(ctx.v61.f32), 0xFF));
	// vmsum4fp128 v56,v56,v58
	_mm_store_ps(ctx.v56.f32, _mm_dp_ps(_mm_load_ps(ctx.v56.f32), _mm_load_ps(ctx.v58.f32), 0xFF));
	// vaddfp128 v53,v52,v53
	_mm_store_ps(ctx.v53.f32, _mm_add_ps(_mm_load_ps(ctx.v52.f32), _mm_load_ps(ctx.v53.f32)));
	// vaddfp128 v57,v57,v55
	_mm_store_ps(ctx.v57.f32, _mm_add_ps(_mm_load_ps(ctx.v57.f32), _mm_load_ps(ctx.v55.f32)));
	// vaddfp128 v55,v53,v54
	_mm_store_ps(ctx.v55.f32, _mm_add_ps(_mm_load_ps(ctx.v53.f32), _mm_load_ps(ctx.v54.f32)));
	// vaddfp128 v57,v57,v56
	_mm_store_ps(ctx.v57.f32, _mm_add_ps(_mm_load_ps(ctx.v57.f32), _mm_load_ps(ctx.v56.f32)));
	// vcfpsxws128 v56,v55,0
	_mm_store_si128((__m128i*)ctx.v56.s32, _mm_vctsxs(_mm_load_ps(ctx.v55.f32)));
	// vcfpsxws128 v57,v57,0
	_mm_store_si128((__m128i*)ctx.v57.s32, _mm_vctsxs(_mm_load_ps(ctx.v57.f32)));
	// stvewx128 v56,r0,r28
	ea = (ctx.r28.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v56.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v57,r27,r26
	ea = (ctx.r27.u32 + ctx.r26.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v57.u32[3 - ((ea & 0xF) >> 2)]);
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r28,84(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lbzx r9,r9,r31
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r31.u32);
	// stbx r9,r3,r10
	PPC_STORE_U8(ctx.r3.u32 + ctx.r10.u32, ctx.r9.u8);
	// lbzx r9,r28,r31
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r28.u32 + ctx.r31.u32);
	// stbx r9,r6,r10
	PPC_STORE_U8(ctx.r6.u32 + ctx.r10.u32, ctx.r9.u8);
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// bdnz 0x82a292d4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82A292D4;
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// mr r8,r7
	ctx.r8.u64 = ctx.r7.u64;
	// addi r5,r5,320
	ctx.r5.s64 = ctx.r5.s64 + 320;
	// addi r6,r6,80
	ctx.r6.s64 = ctx.r6.s64 + 80;
	// bne 0x82a292c0
	if (!ctx.cr0.eq) goto loc_82A292C0;
	// addi r6,r4,1
	ctx.r6.s64 = ctx.r4.s64 + 1;
	// li r5,1
	ctx.r5.s64 = 1;
	// subfic r4,r4,-1
	ctx.xer.ca = ctx.r4.u32 <= 4294967295;
	ctx.r4.s64 = -1 - ctx.r4.s64;
	// li r3,11
	ctx.r3.s64 = 11;
loc_82A293C4:
	// addi r11,r5,-1
	ctx.r11.s64 = ctx.r5.s64 + -1;
	// divw r11,r11,r3
	ctx.r11.s32 = ctx.r11.s32 / ctx.r3.s32;
	// cmpwi cr6,r11,9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 9, ctx.xer);
	// beq cr6,0x82a29434
	if (ctx.cr6.eq) goto loc_82A29434;
	// mulli r7,r11,7
	ctx.r7.s64 = ctx.r11.s64 * 7;
	// li r10,1
	ctx.r10.s64 = 1;
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
loc_82A293E0:
	// add r9,r4,r11
	ctx.r9.u64 = ctx.r4.u64 + ctx.r11.u64;
	// divw r9,r9,r3
	ctx.r9.s32 = ctx.r9.s32 / ctx.r3.s32;
	// cmpwi cr6,r9,7
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 7, ctx.xer);
	// beq cr6,0x82a29420
	if (ctx.cr6.eq) goto loc_82A29420;
	// add r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 + ctx.r7.u64;
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// mulli r9,r9,59
	ctx.r9.s64 = ctx.r9.s64 * 59;
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpwi cr6,r10,79
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 79, ctx.xer);
	// lbzx r8,r9,r29
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r29.u32);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// clrlwi r8,r8,24
	ctx.r8.u64 = ctx.r8.u32 & 0xFF;
	// stbx r8,r9,r29
	PPC_STORE_U8(ctx.r9.u32 + ctx.r29.u32, ctx.r8.u8);
	// blt cr6,0x82a293e0
	if (ctx.cr6.lt) goto loc_82A293E0;
loc_82A29420:
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// addi r6,r6,80
	ctx.r6.s64 = ctx.r6.s64 + 80;
	// addi r4,r4,-80
	ctx.r4.s64 = ctx.r4.s64 + -80;
	// cmpwi cr6,r5,107
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 107, ctx.xer);
	// blt cr6,0x82a293c4
	if (ctx.cr6.lt) goto loc_82A293C4;
loc_82A29434:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82fa76c0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A29440"))) PPC_WEAK_FUNC(sub_82A29440);
PPC_FUNC_IMPL(__imp__sub_82A29440) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa766c
	ctx.lr = 0x82A29448;
	__savegprlr_25(ctx, base);
	// addi r12,r1,-64
	ctx.r12.s64 = ctx.r1.s64 + -64;
	// bl 0x82fac154
	ctx.lr = 0x82A29450;
	__savevmx_124(ctx, base);
	// ld r12,-4096(r1)
	ctx.r12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -4096);
	// stwu r1,-5408(r1)
	ea = -5408 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// li r10,16
	ctx.r10.s64 = 16;
	// addi r11,r11,-14544
	ctx.r11.s64 = ctx.r11.s64 + -14544;
	// li r9,32
	ctx.r9.s64 = 32;
	// li r8,48
	ctx.r8.s64 = 48;
	// addi r7,r1,128
	ctx.r7.s64 = ctx.r1.s64 + 128;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// lvx128 v127,r0,r11
	simd::store_shuffled(ctx.v127, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// lvx128 v126,r11,r10
	simd::store_shuffled(ctx.v126, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r10.u32) & ~0xF), VectorMaskL));
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lvx128 v125,r11,r9
	simd::store_shuffled(ctx.v125, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r9.u32) & ~0xF), VectorMaskL));
	// subf r30,r4,r7
	ctx.r30.s64 = ctx.r7.s64 - ctx.r4.s64;
	// lvx128 v124,r11,r8
	simd::store_shuffled(ctx.v124, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r8.u32) & ~0xF), VectorMaskL));
	// lis r11,-31962
	ctx.r11.s64 = -2094661632;
	// subf r28,r4,r3
	ctx.r28.s64 = ctx.r3.s64 - ctx.r4.s64;
	// li r29,108
	ctx.r29.s64 = 108;
	// addi r25,r11,-30752
	ctx.r25.s64 = ctx.r11.s64 + -30752;
loc_82A294A0:
	// li r5,5200
	ctx.r5.s64 = 5200;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82a75988
	ctx.lr = 0x82A294B0;
	sub_82A75988(ctx, base);
	// li r5,320
	ctx.r5.s64 = 320;
	// add r4,r28,r31
	ctx.r4.u64 = ctx.r28.u64 + ctx.r31.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82a75220
	ctx.lr = 0x82A294C0;
	sub_82A75220(ctx, base);
	// li r9,6
	ctx.r9.s64 = 6;
	// addi r10,r1,420
	ctx.r10.s64 = ctx.r1.s64 + 420;
	// addi r11,r1,424
	ctx.r11.s64 = ctx.r1.s64 + 424;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82A294D0:
	// lfs f0,-316(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -316);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,-324(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + -324, temp.u32);
	// lfsu f0,-4(r11)
	ea = -4 + ctx.r11.u32;
	temp.u32 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	ctx.f0.f64 = double(temp.f32);
	// stfsu f0,4(r10)
	temp.f32 = float(ctx.f0.f64);
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, temp.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x82a294d0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82A294D0;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// li r10,20
	ctx.r10.s64 = 20;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// lvx128 v60,r0,r9
	simd::store_shuffled(ctx.v60, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// lvx128 v63,r0,r8
	simd::store_shuffled(ctx.v63, simd::load_and_shuffle(base + ((ctx.r8.u32) & ~0xF), VectorMaskL));
	// lvx128 v62,r0,r7
	simd::store_shuffled(ctx.v62, simd::load_and_shuffle(base + ((ctx.r7.u32) & ~0xF), VectorMaskL));
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82A29508:
	// lvx128 v59,r11,r30
	simd::store_shuffled(ctx.v59, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r30.u32) & ~0xF), VectorMaskL));
	// vsldoi128 v58,v63,v62,4
	_mm_store_si128((__m128i*)ctx.v58.u8, _mm_alignr_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)ctx.v62.u8), 12));
	// lvx128 v61,r0,r25
	simd::store_shuffled(ctx.v61, simd::load_and_shuffle(base + ((ctx.r25.u32) & ~0xF), VectorMaskL));
	// vsldoi128 v57,v60,v63,4
	_mm_store_si128((__m128i*)ctx.v57.u8, _mm_alignr_epi8(_mm_load_si128((__m128i*)ctx.v60.u8), _mm_load_si128((__m128i*)ctx.v63.u8), 12));
	// vsldoi128 v56,v62,v59,4
	_mm_store_si128((__m128i*)ctx.v56.u8, _mm_alignr_epi8(_mm_load_si128((__m128i*)ctx.v62.u8), _mm_load_si128((__m128i*)ctx.v59.u8), 12));
	// vmsum4fp128 v55,v127,v60
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v55.f32, _mm_dp_ps(_mm_load_ps(ctx.v127.f32), _mm_load_ps(ctx.v60.f32), 0xFF));
	// vsldoi128 v60,v59,v61,4
	_mm_store_si128((__m128i*)ctx.v60.u8, _mm_alignr_epi8(_mm_load_si128((__m128i*)ctx.v59.u8), _mm_load_si128((__m128i*)ctx.v61.u8), 12));
	// vmsum4fp128 v54,v126,v63
	_mm_store_ps(ctx.v54.f32, _mm_dp_ps(_mm_load_ps(ctx.v126.f32), _mm_load_ps(ctx.v63.f32), 0xFF));
	// vmsum4fp128 v53,v125,v62
	_mm_store_ps(ctx.v53.f32, _mm_dp_ps(_mm_load_ps(ctx.v125.f32), _mm_load_ps(ctx.v62.f32), 0xFF));
	// vmsum4fp128 v59,v124,v59
	_mm_store_ps(ctx.v59.f32, _mm_dp_ps(_mm_load_ps(ctx.v124.f32), _mm_load_ps(ctx.v59.f32), 0xFF));
	// vsldoi128 v63,v57,v58,4
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_alignr_epi8(_mm_load_si128((__m128i*)ctx.v57.u8), _mm_load_si128((__m128i*)ctx.v58.u8), 12));
	// vsldoi128 v62,v58,v56,4
	_mm_store_si128((__m128i*)ctx.v62.u8, _mm_alignr_epi8(_mm_load_si128((__m128i*)ctx.v58.u8), _mm_load_si128((__m128i*)ctx.v56.u8), 12));
	// vmsum4fp128 v57,v127,v57
	_mm_store_ps(ctx.v57.f32, _mm_dp_ps(_mm_load_ps(ctx.v127.f32), _mm_load_ps(ctx.v57.f32), 0xFF));
	// vsldoi128 v52,v56,v60,4
	_mm_store_si128((__m128i*)ctx.v52.u8, _mm_alignr_epi8(_mm_load_si128((__m128i*)ctx.v56.u8), _mm_load_si128((__m128i*)ctx.v60.u8), 12));
	// vmsum4fp128 v58,v126,v58
	_mm_store_ps(ctx.v58.f32, _mm_dp_ps(_mm_load_ps(ctx.v126.f32), _mm_load_ps(ctx.v58.f32), 0xFF));
	// vsldoi128 v51,v60,v61,4
	_mm_store_si128((__m128i*)ctx.v51.u8, _mm_alignr_epi8(_mm_load_si128((__m128i*)ctx.v60.u8), _mm_load_si128((__m128i*)ctx.v61.u8), 12));
	// vmsum4fp128 v56,v125,v56
	_mm_store_ps(ctx.v56.f32, _mm_dp_ps(_mm_load_ps(ctx.v125.f32), _mm_load_ps(ctx.v56.f32), 0xFF));
	// vmsum4fp128 v50,v124,v60
	_mm_store_ps(ctx.v50.f32, _mm_dp_ps(_mm_load_ps(ctx.v124.f32), _mm_load_ps(ctx.v60.f32), 0xFF));
	// vmsum4fp128 v49,v127,v63
	_mm_store_ps(ctx.v49.f32, _mm_dp_ps(_mm_load_ps(ctx.v127.f32), _mm_load_ps(ctx.v63.f32), 0xFF));
	// vsldoi128 v63,v63,v62,4
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_alignr_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)ctx.v62.u8), 12));
	// vmsum4fp128 v48,v126,v62
	_mm_store_ps(ctx.v48.f32, _mm_dp_ps(_mm_load_ps(ctx.v126.f32), _mm_load_ps(ctx.v62.f32), 0xFF));
	// vsldoi128 v62,v62,v52,4
	_mm_store_si128((__m128i*)ctx.v62.u8, _mm_alignr_epi8(_mm_load_si128((__m128i*)ctx.v62.u8), _mm_load_si128((__m128i*)ctx.v52.u8), 12));
	// vmsum4fp128 v47,v125,v52
	_mm_store_ps(ctx.v47.f32, _mm_dp_ps(_mm_load_ps(ctx.v125.f32), _mm_load_ps(ctx.v52.f32), 0xFF));
	// vsldoi128 v61,v51,v61,4
	_mm_store_si128((__m128i*)ctx.v61.u8, _mm_alignr_epi8(_mm_load_si128((__m128i*)ctx.v51.u8), _mm_load_si128((__m128i*)ctx.v61.u8), 12));
	// vsldoi128 v52,v52,v51,4
	_mm_store_si128((__m128i*)ctx.v52.u8, _mm_alignr_epi8(_mm_load_si128((__m128i*)ctx.v52.u8), _mm_load_si128((__m128i*)ctx.v51.u8), 12));
	// vmsum4fp128 v46,v124,v51
	_mm_store_ps(ctx.v46.f32, _mm_dp_ps(_mm_load_ps(ctx.v124.f32), _mm_load_ps(ctx.v51.f32), 0xFF));
	// vmsum4fp128 v51,v127,v63
	_mm_store_ps(ctx.v51.f32, _mm_dp_ps(_mm_load_ps(ctx.v127.f32), _mm_load_ps(ctx.v63.f32), 0xFF));
	// vmsum4fp128 v45,v126,v62
	_mm_store_ps(ctx.v45.f32, _mm_dp_ps(_mm_load_ps(ctx.v126.f32), _mm_load_ps(ctx.v62.f32), 0xFF));
	// vsldoi128 v60,v63,v62,4
	_mm_store_si128((__m128i*)ctx.v60.u8, _mm_alignr_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)ctx.v62.u8), 12));
	// vmsum4fp128 v43,v124,v61
	_mm_store_ps(ctx.v43.f32, _mm_dp_ps(_mm_load_ps(ctx.v124.f32), _mm_load_ps(ctx.v61.f32), 0xFF));
	// vmsum4fp128 v44,v125,v52
	_mm_store_ps(ctx.v44.f32, _mm_dp_ps(_mm_load_ps(ctx.v125.f32), _mm_load_ps(ctx.v52.f32), 0xFF));
	// vsldoi128 v63,v62,v52,4
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_alignr_epi8(_mm_load_si128((__m128i*)ctx.v62.u8), _mm_load_si128((__m128i*)ctx.v52.u8), 12));
	// vsldoi128 v62,v52,v61,4
	_mm_store_si128((__m128i*)ctx.v62.u8, _mm_alignr_epi8(_mm_load_si128((__m128i*)ctx.v52.u8), _mm_load_si128((__m128i*)ctx.v61.u8), 12));
	// vaddfp128 v61,v55,v54
	_mm_store_ps(ctx.v61.f32, _mm_add_ps(_mm_load_ps(ctx.v55.f32), _mm_load_ps(ctx.v54.f32)));
	// vaddfp128 v59,v53,v59
	_mm_store_ps(ctx.v59.f32, _mm_add_ps(_mm_load_ps(ctx.v53.f32), _mm_load_ps(ctx.v59.f32)));
	// vaddfp128 v58,v57,v58
	_mm_store_ps(ctx.v58.f32, _mm_add_ps(_mm_load_ps(ctx.v57.f32), _mm_load_ps(ctx.v58.f32)));
	// vaddfp128 v57,v56,v50
	_mm_store_ps(ctx.v57.f32, _mm_add_ps(_mm_load_ps(ctx.v56.f32), _mm_load_ps(ctx.v50.f32)));
	// vaddfp128 v56,v49,v48
	_mm_store_ps(ctx.v56.f32, _mm_add_ps(_mm_load_ps(ctx.v49.f32), _mm_load_ps(ctx.v48.f32)));
	// vaddfp128 v55,v47,v46
	_mm_store_ps(ctx.v55.f32, _mm_add_ps(_mm_load_ps(ctx.v47.f32), _mm_load_ps(ctx.v46.f32)));
	// vaddfp128 v54,v51,v45
	_mm_store_ps(ctx.v54.f32, _mm_add_ps(_mm_load_ps(ctx.v51.f32), _mm_load_ps(ctx.v45.f32)));
	// vaddfp128 v61,v61,v59
	_mm_store_ps(ctx.v61.f32, _mm_add_ps(_mm_load_ps(ctx.v61.f32), _mm_load_ps(ctx.v59.f32)));
	// vaddfp128 v59,v44,v43
	_mm_store_ps(ctx.v59.f32, _mm_add_ps(_mm_load_ps(ctx.v44.f32), _mm_load_ps(ctx.v43.f32)));
	// vaddfp128 v58,v58,v57
	_mm_store_ps(ctx.v58.f32, _mm_add_ps(_mm_load_ps(ctx.v58.f32), _mm_load_ps(ctx.v57.f32)));
	// vaddfp128 v57,v56,v55
	_mm_store_ps(ctx.v57.f32, _mm_add_ps(_mm_load_ps(ctx.v56.f32), _mm_load_ps(ctx.v55.f32)));
	// vaddfp128 v59,v54,v59
	_mm_store_ps(ctx.v59.f32, _mm_add_ps(_mm_load_ps(ctx.v54.f32), _mm_load_ps(ctx.v59.f32)));
	// vrlimi128 v61,v58,4,0
	_mm_store_ps(ctx.v61.f32, _mm_blend_ps(_mm_load_ps(ctx.v61.f32), _mm_permute_ps(_mm_load_ps(ctx.v58.f32), 228), 4));
	// vrlimi128 v61,v57,2,0
	_mm_store_ps(ctx.v61.f32, _mm_blend_ps(_mm_load_ps(ctx.v61.f32), _mm_permute_ps(_mm_load_ps(ctx.v57.f32), 228), 2));
	// vrlimi128 v61,v59,1,0
	_mm_store_ps(ctx.v61.f32, _mm_blend_ps(_mm_load_ps(ctx.v61.f32), _mm_permute_ps(_mm_load_ps(ctx.v59.f32), 228), 1));
	// stvx128 v61,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v61.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// bdnz 0x82a29508
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82A29508;
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// addi r30,r30,-320
	ctx.r30.s64 = ctx.r30.s64 + -320;
	// bne 0x82a294a0
	if (!ctx.cr0.eq) goto loc_82A294A0;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r31,160
	ctx.r31.s64 = 160;
	// li r29,80
	ctx.r29.s64 = 80;
loc_82A295F0:
	// li r5,120
	ctx.r5.s64 = 120;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82fa7cf0
	ctx.lr = 0x82A29600;
	sub_82FA7CF0(ctx, base);
	// li r11,108
	ctx.r11.s64 = 108;
	// add r10,r30,r26
	ctx.r10.u64 = ctx.r30.u64 + ctx.r26.u64;
	// addi r9,r1,100
	ctx.r9.s64 = ctx.r1.s64 + 100;
	// addi r10,r10,-320
	ctx.r10.s64 = ctx.r10.s64 + -320;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_82A29614:
	// lfsu f0,320(r10)
	ctx.fpscr.disableFlushMode();
	ea = 320 + ctx.r10.u32;
	temp.u32 = PPC_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	ctx.f0.f64 = double(temp.f32);
	// stfsu f0,4(r9)
	temp.f32 = float(ctx.f0.f64);
	ea = 4 + ctx.r9.u32;
	PPC_STORE_U32(ea, temp.u32);
	ctx.r9.u32 = ea;
	// bdnz 0x82a29614
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82A29614;
	// li r9,6
	ctx.r9.s64 = 6;
	// addi r10,r1,532
	ctx.r10.s64 = ctx.r1.s64 + 532;
	// addi r11,r1,536
	ctx.r11.s64 = ctx.r1.s64 + 536;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82A29630:
	// lfs f0,-428(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -428);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,-436(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + -436, temp.u32);
	// lfsu f0,-4(r11)
	ea = -4 + ctx.r11.u32;
	temp.u32 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	ctx.f0.f64 = double(temp.f32);
	// stfsu f0,4(r10)
	temp.f32 = float(ctx.f0.f64);
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, temp.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x82a29630
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82A29630;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// li r8,27
	ctx.r8.s64 = 27;
	// li r11,0
	ctx.r11.s64 = 0;
	// lvx128 v60,r0,r10
	simd::store_shuffled(ctx.v60, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// addi r7,r31,-80
	ctx.r7.s64 = ctx.r31.s64 + -80;
	// lvx128 v63,r0,r9
	simd::store_shuffled(ctx.v63, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// addi r6,r31,80
	ctx.r6.s64 = ctx.r31.s64 + 80;
	// lvx128 v62,r0,r5
	simd::store_shuffled(ctx.v62, simd::load_and_shuffle(base + ((ctx.r5.u32) & ~0xF), VectorMaskL));
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_82A29678:
	// lvx128 v59,r0,r10
	simd::store_shuffled(ctx.v59, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// vsldoi128 v58,v63,v62,4
	_mm_store_si128((__m128i*)ctx.v58.u8, _mm_alignr_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)ctx.v62.u8), 12));
	// lvx128 v61,r0,r25
	simd::store_shuffled(ctx.v61, simd::load_and_shuffle(base + ((ctx.r25.u32) & ~0xF), VectorMaskL));
	// vsldoi128 v57,v60,v63,4
	_mm_store_si128((__m128i*)ctx.v57.u8, _mm_alignr_epi8(_mm_load_si128((__m128i*)ctx.v60.u8), _mm_load_si128((__m128i*)ctx.v63.u8), 12));
	// vsldoi128 v56,v62,v59,4
	_mm_store_si128((__m128i*)ctx.v56.u8, _mm_alignr_epi8(_mm_load_si128((__m128i*)ctx.v62.u8), _mm_load_si128((__m128i*)ctx.v59.u8), 12));
	// vmsum4fp128 v55,v125,v62
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v55.f32, _mm_dp_ps(_mm_load_ps(ctx.v125.f32), _mm_load_ps(ctx.v62.f32), 0xFF));
	// vsldoi128 v62,v59,v61,4
	_mm_store_si128((__m128i*)ctx.v62.u8, _mm_alignr_epi8(_mm_load_si128((__m128i*)ctx.v59.u8), _mm_load_si128((__m128i*)ctx.v61.u8), 12));
	// vmsum4fp128 v54,v126,v63
	_mm_store_ps(ctx.v54.f32, _mm_dp_ps(_mm_load_ps(ctx.v126.f32), _mm_load_ps(ctx.v63.f32), 0xFF));
	// vmsum4fp128 v53,v127,v60
	_mm_store_ps(ctx.v53.f32, _mm_dp_ps(_mm_load_ps(ctx.v127.f32), _mm_load_ps(ctx.v60.f32), 0xFF));
	// add r8,r7,r11
	ctx.r8.u64 = ctx.r7.u64 + ctx.r11.u64;
	// vsldoi128 v63,v57,v58,4
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_alignr_epi8(_mm_load_si128((__m128i*)ctx.v57.u8), _mm_load_si128((__m128i*)ctx.v58.u8), 12));
	// vmsum4fp128 v59,v124,v59
	_mm_store_ps(ctx.v59.f32, _mm_dp_ps(_mm_load_ps(ctx.v124.f32), _mm_load_ps(ctx.v59.f32), 0xFF));
	// vsldoi128 v60,v58,v56,4
	_mm_store_si128((__m128i*)ctx.v60.u8, _mm_alignr_epi8(_mm_load_si128((__m128i*)ctx.v58.u8), _mm_load_si128((__m128i*)ctx.v56.u8), 12));
	// vmsum4fp128 v58,v126,v58
	_mm_store_ps(ctx.v58.f32, _mm_dp_ps(_mm_load_ps(ctx.v126.f32), _mm_load_ps(ctx.v58.f32), 0xFF));
	// vsldoi128 v52,v56,v62,4
	_mm_store_si128((__m128i*)ctx.v52.u8, _mm_alignr_epi8(_mm_load_si128((__m128i*)ctx.v56.u8), _mm_load_si128((__m128i*)ctx.v62.u8), 12));
	// vmsum4fp128 v50,v124,v62
	_mm_store_ps(ctx.v50.f32, _mm_dp_ps(_mm_load_ps(ctx.v124.f32), _mm_load_ps(ctx.v62.f32), 0xFF));
	// vsldoi128 v51,v62,v61,4
	_mm_store_si128((__m128i*)ctx.v51.u8, _mm_alignr_epi8(_mm_load_si128((__m128i*)ctx.v62.u8), _mm_load_si128((__m128i*)ctx.v61.u8), 12));
	// vmsum4fp128 v57,v127,v57
	_mm_store_ps(ctx.v57.f32, _mm_dp_ps(_mm_load_ps(ctx.v127.f32), _mm_load_ps(ctx.v57.f32), 0xFF));
	// vmsum4fp128 v49,v127,v63
	_mm_store_ps(ctx.v49.f32, _mm_dp_ps(_mm_load_ps(ctx.v127.f32), _mm_load_ps(ctx.v63.f32), 0xFF));
	// add r5,r31,r11
	ctx.r5.u64 = ctx.r31.u64 + ctx.r11.u64;
	// vsldoi128 v62,v63,v60,4
	_mm_store_si128((__m128i*)ctx.v62.u8, _mm_alignr_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)ctx.v60.u8), 12));
	// vmsum4fp128 v56,v125,v56
	_mm_store_ps(ctx.v56.f32, _mm_dp_ps(_mm_load_ps(ctx.v125.f32), _mm_load_ps(ctx.v56.f32), 0xFF));
	// vsldoi128 v63,v60,v52,4
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_alignr_epi8(_mm_load_si128((__m128i*)ctx.v60.u8), _mm_load_si128((__m128i*)ctx.v52.u8), 12));
	// vmsum4fp128 v48,v126,v60
	_mm_store_ps(ctx.v48.f32, _mm_dp_ps(_mm_load_ps(ctx.v126.f32), _mm_load_ps(ctx.v60.f32), 0xFF));
	// vsldoi128 v47,v52,v51,4
	_mm_store_si128((__m128i*)ctx.v47.u8, _mm_alignr_epi8(_mm_load_si128((__m128i*)ctx.v52.u8), _mm_load_si128((__m128i*)ctx.v51.u8), 12));
	// vmsum4fp128 v52,v125,v52
	_mm_store_ps(ctx.v52.f32, _mm_dp_ps(_mm_load_ps(ctx.v125.f32), _mm_load_ps(ctx.v52.f32), 0xFF));
	// vsldoi128 v61,v51,v61,4
	_mm_store_si128((__m128i*)ctx.v61.u8, _mm_alignr_epi8(_mm_load_si128((__m128i*)ctx.v51.u8), _mm_load_si128((__m128i*)ctx.v61.u8), 12));
	// vmsum4fp128 v51,v124,v51
	_mm_store_ps(ctx.v51.f32, _mm_dp_ps(_mm_load_ps(ctx.v124.f32), _mm_load_ps(ctx.v51.f32), 0xFF));
	// vmsum4fp128 v46,v127,v62
	_mm_store_ps(ctx.v46.f32, _mm_dp_ps(_mm_load_ps(ctx.v127.f32), _mm_load_ps(ctx.v62.f32), 0xFF));
	// add r4,r6,r11
	ctx.r4.u64 = ctx.r6.u64 + ctx.r11.u64;
	// vmsum4fp128 v45,v126,v63
	_mm_store_ps(ctx.v45.f32, _mm_dp_ps(_mm_load_ps(ctx.v126.f32), _mm_load_ps(ctx.v63.f32), 0xFF));
	// vsldoi128 v60,v62,v63,4
	_mm_store_si128((__m128i*)ctx.v60.u8, _mm_alignr_epi8(_mm_load_si128((__m128i*)ctx.v62.u8), _mm_load_si128((__m128i*)ctx.v63.u8), 12));
	// vmsum4fp128 v44,v125,v47
	_mm_store_ps(ctx.v44.f32, _mm_dp_ps(_mm_load_ps(ctx.v125.f32), _mm_load_ps(ctx.v47.f32), 0xFF));
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// vmsum4fp128 v43,v124,v61
	_mm_store_ps(ctx.v43.f32, _mm_dp_ps(_mm_load_ps(ctx.v124.f32), _mm_load_ps(ctx.v61.f32), 0xFF));
	// vsldoi128 v62,v47,v61,4
	_mm_store_si128((__m128i*)ctx.v62.u8, _mm_alignr_epi8(_mm_load_si128((__m128i*)ctx.v47.u8), _mm_load_si128((__m128i*)ctx.v61.u8), 12));
	// rlwinm r5,r5,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// vsldoi128 v63,v63,v47,4
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_alignr_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)ctx.v47.u8), 12));
	// rlwinm r4,r4,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// vaddfp128 v54,v53,v54
	_mm_store_ps(ctx.v54.f32, _mm_add_ps(_mm_load_ps(ctx.v53.f32), _mm_load_ps(ctx.v54.f32)));
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// vaddfp128 v61,v55,v59
	_mm_store_ps(ctx.v61.f32, _mm_add_ps(_mm_load_ps(ctx.v55.f32), _mm_load_ps(ctx.v59.f32)));
	// addi r11,r11,320
	ctx.r11.s64 = ctx.r11.s64 + 320;
	// vaddfp128 v59,v57,v58
	_mm_store_ps(ctx.v59.f32, _mm_add_ps(_mm_load_ps(ctx.v57.f32), _mm_load_ps(ctx.v58.f32)));
	// vaddfp128 v58,v56,v50
	_mm_store_ps(ctx.v58.f32, _mm_add_ps(_mm_load_ps(ctx.v56.f32), _mm_load_ps(ctx.v50.f32)));
	// vaddfp128 v57,v49,v48
	_mm_store_ps(ctx.v57.f32, _mm_add_ps(_mm_load_ps(ctx.v49.f32), _mm_load_ps(ctx.v48.f32)));
	// vaddfp128 v56,v52,v51
	_mm_store_ps(ctx.v56.f32, _mm_add_ps(_mm_load_ps(ctx.v52.f32), _mm_load_ps(ctx.v51.f32)));
	// vaddfp128 v55,v46,v45
	_mm_store_ps(ctx.v55.f32, _mm_add_ps(_mm_load_ps(ctx.v46.f32), _mm_load_ps(ctx.v45.f32)));
	// vaddfp128 v53,v44,v43
	_mm_store_ps(ctx.v53.f32, _mm_add_ps(_mm_load_ps(ctx.v44.f32), _mm_load_ps(ctx.v43.f32)));
	// vaddfp128 v61,v54,v61
	_mm_store_ps(ctx.v61.f32, _mm_add_ps(_mm_load_ps(ctx.v54.f32), _mm_load_ps(ctx.v61.f32)));
	// vaddfp128 v59,v59,v58
	_mm_store_ps(ctx.v59.f32, _mm_add_ps(_mm_load_ps(ctx.v59.f32), _mm_load_ps(ctx.v58.f32)));
	// vaddfp128 v58,v57,v56
	_mm_store_ps(ctx.v58.f32, _mm_add_ps(_mm_load_ps(ctx.v57.f32), _mm_load_ps(ctx.v56.f32)));
	// vaddfp128 v57,v55,v53
	_mm_store_ps(ctx.v57.f32, _mm_add_ps(_mm_load_ps(ctx.v55.f32), _mm_load_ps(ctx.v53.f32)));
	// stvewx128 v61,r27,r9
	ea = (ctx.r27.u32 + ctx.r9.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v61.u32[3 - ((ea & 0xF) >> 2)]);
	// addi r9,r9,1280
	ctx.r9.s64 = ctx.r9.s64 + 1280;
	// stvewx128 v59,r27,r8
	ea = (ctx.r27.u32 + ctx.r8.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v59.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v58,r27,r5
	ea = (ctx.r27.u32 + ctx.r5.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v58.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v57,r27,r4
	ea = (ctx.r27.u32 + ctx.r4.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v57.u32[3 - ((ea & 0xF) >> 2)]);
	// bdnz 0x82a29678
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82A29678;
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// bne 0x82a295f0
	if (!ctx.cr0.eq) goto loc_82A295F0;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,5408
	ctx.r1.s64 = ctx.r1.s64 + 5408;
	// addi r12,r1,-64
	ctx.r12.s64 = ctx.r1.s64 + -64;
	// bl 0x82fac3ec
	ctx.lr = 0x82A29784;
	__restvmx_124(ctx, base);
	// b 0x82fa76bc
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A29788"))) PPC_WEAK_FUNC(sub_82A29788);
PPC_FUNC_IMPL(__imp__sub_82A29788) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7668
	ctx.lr = 0x82A29790;
	__savegprlr_24(ctx, base);
	// addi r12,r1,-80
	ctx.r12.s64 = ctx.r1.s64 + -80;
	// bl 0x82fac13c
	ctx.lr = 0x82A29798;
	__savevmx_121(ctx, base);
	// ld r12,-4096(r1)
	ctx.r12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -4096);
	// ld r12,-8192(r1)
	ctx.r12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8192);
	// stwu r1,-10656(r1)
	ea = -10656 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r24,r5
	ctx.r24.u64 = ctx.r5.u64;
	// addi r11,r11,-14480
	ctx.r11.s64 = ctx.r11.s64 + -14480;
	// li r10,16
	ctx.r10.s64 = 16;
	// li r9,32
	ctx.r9.s64 = 32;
	// li r8,48
	ctx.r8.s64 = 48;
	// li r7,64
	ctx.r7.s64 = 64;
	// li r6,80
	ctx.r6.s64 = 80;
	// lvx128 v127,r0,r11
	simd::store_shuffled(ctx.v127, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// li r5,96
	ctx.r5.s64 = 96;
	// lvx128 v126,r11,r10
	simd::store_shuffled(ctx.v126, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r10.u32) & ~0xF), VectorMaskL));
	// lvx128 v125,r11,r9
	simd::store_shuffled(ctx.v125, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r9.u32) & ~0xF), VectorMaskL));
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// lvx128 v124,r11,r8
	simd::store_shuffled(ctx.v124, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r8.u32) & ~0xF), VectorMaskL));
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// lvx128 v123,r11,r7
	simd::store_shuffled(ctx.v123, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r7.u32) & ~0xF), VectorMaskL));
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lvx128 v122,r11,r6
	simd::store_shuffled(ctx.v122, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r6.u32) & ~0xF), VectorMaskL));
	// mr r31,r26
	ctx.r31.u64 = ctx.r26.u64;
	// lvx128 v121,r11,r5
	simd::store_shuffled(ctx.v121, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r5.u32) & ~0xF), VectorMaskL));
	// lis r11,-31962
	ctx.r11.s64 = -2094661632;
	// subf r30,r26,r4
	ctx.r30.s64 = ctx.r4.s64 - ctx.r26.s64;
	// subf r27,r26,r3
	ctx.r27.s64 = ctx.r3.s64 - ctx.r26.s64;
	// li r29,108
	ctx.r29.s64 = 108;
	// addi r25,r11,-30752
	ctx.r25.s64 = ctx.r11.s64 + -30752;
loc_82A29808:
	// li r5,10384
	ctx.r5.s64 = 10384;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82a75988
	ctx.lr = 0x82A29818;
	sub_82A75988(ctx, base);
	// li r5,320
	ctx.r5.s64 = 320;
	// add r4,r27,r31
	ctx.r4.u64 = ctx.r27.u64 + ctx.r31.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82a75220
	ctx.lr = 0x82A29828;
	sub_82A75220(ctx, base);
	// li r9,12
	ctx.r9.s64 = 12;
	// addi r10,r1,444
	ctx.r10.s64 = ctx.r1.s64 + 444;
	// addi r11,r1,448
	ctx.r11.s64 = ctx.r1.s64 + 448;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82A29838:
	// lfs f0,-316(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -316);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,-324(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + -324, temp.u32);
	// lfsu f0,-4(r11)
	ea = -4 + ctx.r11.u32;
	temp.u32 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	ctx.f0.f64 = double(temp.f32);
	// stfsu f0,4(r10)
	temp.f32 = float(ctx.f0.f64);
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, temp.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x82a29838
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82A29838;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// addi r8,r1,112
	ctx.r8.s64 = ctx.r1.s64 + 112;
	// addi r7,r1,128
	ctx.r7.s64 = ctx.r1.s64 + 128;
	// addi r6,r1,144
	ctx.r6.s64 = ctx.r1.s64 + 144;
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// lvx128 v57,r0,r11
	simd::store_shuffled(ctx.v57, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// li r10,20
	ctx.r10.s64 = 20;
	// lvx128 v63,r0,r9
	simd::store_shuffled(ctx.v63, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// lvx128 v62,r0,r8
	simd::store_shuffled(ctx.v62, simd::load_and_shuffle(base + ((ctx.r8.u32) & ~0xF), VectorMaskL));
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// lvx128 v61,r0,r7
	simd::store_shuffled(ctx.v61, simd::load_and_shuffle(base + ((ctx.r7.u32) & ~0xF), VectorMaskL));
	// lvx128 v60,r0,r6
	simd::store_shuffled(ctx.v60, simd::load_and_shuffle(base + ((ctx.r6.u32) & ~0xF), VectorMaskL));
	// lvx128 v59,r0,r5
	simd::store_shuffled(ctx.v59, simd::load_and_shuffle(base + ((ctx.r5.u32) & ~0xF), VectorMaskL));
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82A29888:
	// vsldoi128 v55,v63,v62,4
	_mm_store_si128((__m128i*)ctx.v55.u8, _mm_alignr_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)ctx.v62.u8), 12));
	// vmsum4fp128 v50,v126,v63
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v50.f32, _mm_dp_ps(_mm_load_ps(ctx.v126.f32), _mm_load_ps(ctx.v63.f32), 0xFF));
	// vsldoi128 v51,v60,v59,4
	_mm_store_si128((__m128i*)ctx.v51.u8, _mm_alignr_epi8(_mm_load_si128((__m128i*)ctx.v60.u8), _mm_load_si128((__m128i*)ctx.v59.u8), 12));
	// lvx128 v56,r30,r11
	simd::store_shuffled(ctx.v56, simd::load_and_shuffle(base + ((ctx.r30.u32 + ctx.r11.u32) & ~0xF), VectorMaskL));
	// vsldoi128 v54,v62,v61,4
	_mm_store_si128((__m128i*)ctx.v54.u8, _mm_alignr_epi8(_mm_load_si128((__m128i*)ctx.v62.u8), _mm_load_si128((__m128i*)ctx.v61.u8), 12));
	// vmsum4fp128 v52,v127,v57
	_mm_store_ps(ctx.v52.f32, _mm_dp_ps(_mm_load_ps(ctx.v127.f32), _mm_load_ps(ctx.v57.f32), 0xFF));
	// vsldoi128 v53,v61,v60,4
	_mm_store_si128((__m128i*)ctx.v53.u8, _mm_alignr_epi8(_mm_load_si128((__m128i*)ctx.v61.u8), _mm_load_si128((__m128i*)ctx.v60.u8), 12));
	// lvx128 v58,r0,r25
	simd::store_shuffled(ctx.v58, simd::load_and_shuffle(base + ((ctx.r25.u32) & ~0xF), VectorMaskL));
	// vsldoi128 v63,v57,v63,4
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_alignr_epi8(_mm_load_si128((__m128i*)ctx.v57.u8), _mm_load_si128((__m128i*)ctx.v63.u8), 12));
	// vmsum4fp128 v44,v126,v55
	_mm_store_ps(ctx.v44.f32, _mm_dp_ps(_mm_load_ps(ctx.v126.f32), _mm_load_ps(ctx.v55.f32), 0xFF));
	// vsldoi128 v57,v59,v56,4
	_mm_store_si128((__m128i*)ctx.v57.u8, _mm_alignr_epi8(_mm_load_si128((__m128i*)ctx.v59.u8), _mm_load_si128((__m128i*)ctx.v56.u8), 12));
	// vmsum4fp128 v60,v123,v60
	_mm_store_ps(ctx.v60.f32, _mm_dp_ps(_mm_load_ps(ctx.v123.f32), _mm_load_ps(ctx.v60.f32), 0xFF));
	// vsldoi128 v48,v55,v54,4
	_mm_store_si128((__m128i*)ctx.v48.u8, _mm_alignr_epi8(_mm_load_si128((__m128i*)ctx.v55.u8), _mm_load_si128((__m128i*)ctx.v54.u8), 12));
	// vmsum4fp128 v59,v122,v59
	_mm_store_ps(ctx.v59.f32, _mm_dp_ps(_mm_load_ps(ctx.v122.f32), _mm_load_ps(ctx.v59.f32), 0xFF));
	// vsldoi128 v49,v56,v58,4
	_mm_store_si128((__m128i*)ctx.v49.u8, _mm_alignr_epi8(_mm_load_si128((__m128i*)ctx.v56.u8), _mm_load_si128((__m128i*)ctx.v58.u8), 12));
	// vmsum4fp128 v62,v125,v62
	_mm_store_ps(ctx.v62.f32, _mm_dp_ps(_mm_load_ps(ctx.v125.f32), _mm_load_ps(ctx.v62.f32), 0xFF));
	// vsldoi128 v47,v54,v53,4
	_mm_store_si128((__m128i*)ctx.v47.u8, _mm_alignr_epi8(_mm_load_si128((__m128i*)ctx.v54.u8), _mm_load_si128((__m128i*)ctx.v53.u8), 12));
	// vmsum4fp128 v46,v127,v63
	_mm_store_ps(ctx.v46.f32, _mm_dp_ps(_mm_load_ps(ctx.v127.f32), _mm_load_ps(ctx.v63.f32), 0xFF));
	// vsldoi128 v45,v53,v51,4
	_mm_store_si128((__m128i*)ctx.v45.u8, _mm_alignr_epi8(_mm_load_si128((__m128i*)ctx.v53.u8), _mm_load_si128((__m128i*)ctx.v51.u8), 12));
	// vmsum4fp128 v54,v125,v54
	_mm_store_ps(ctx.v54.f32, _mm_dp_ps(_mm_load_ps(ctx.v125.f32), _mm_load_ps(ctx.v54.f32), 0xFF));
	// vmsum4fp128 v53,v124,v53
	_mm_store_ps(ctx.v53.f32, _mm_dp_ps(_mm_load_ps(ctx.v124.f32), _mm_load_ps(ctx.v53.f32), 0xFF));
	// vsldoi128 v63,v63,v55,4
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_alignr_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)ctx.v55.u8), 12));
	// vsldoi128 v43,v51,v57,4
	_mm_store_si128((__m128i*)ctx.v43.u8, _mm_alignr_epi8(_mm_load_si128((__m128i*)ctx.v51.u8), _mm_load_si128((__m128i*)ctx.v57.u8), 12));
	// vmsum4fp128 v55,v123,v51
	_mm_store_ps(ctx.v55.f32, _mm_dp_ps(_mm_load_ps(ctx.v123.f32), _mm_load_ps(ctx.v51.f32), 0xFF));
	// vsldoi128 v41,v49,v58,4
	_mm_store_si128((__m128i*)ctx.v41.u8, _mm_alignr_epi8(_mm_load_si128((__m128i*)ctx.v49.u8), _mm_load_si128((__m128i*)ctx.v58.u8), 12));
	// vmsum4fp128 v39,v126,v48
	_mm_store_ps(ctx.v39.f32, _mm_dp_ps(_mm_load_ps(ctx.v126.f32), _mm_load_ps(ctx.v48.f32), 0xFF));
	// vsldoi128 v42,v57,v49,4
	_mm_store_si128((__m128i*)ctx.v42.u8, _mm_alignr_epi8(_mm_load_si128((__m128i*)ctx.v57.u8), _mm_load_si128((__m128i*)ctx.v49.u8), 12));
	// vmsum4fp128 v40,v122,v57
	_mm_store_ps(ctx.v40.f32, _mm_dp_ps(_mm_load_ps(ctx.v122.f32), _mm_load_ps(ctx.v57.f32), 0xFF));
	// vmsum4fp128 v35,v127,v63
	_mm_store_ps(ctx.v35.f32, _mm_dp_ps(_mm_load_ps(ctx.v127.f32), _mm_load_ps(ctx.v63.f32), 0xFF));
	// vsldoi128 v51,v48,v47,4
	_mm_store_si128((__m128i*)ctx.v51.u8, _mm_alignr_epi8(_mm_load_si128((__m128i*)ctx.v48.u8), _mm_load_si128((__m128i*)ctx.v47.u8), 12));
	// vsldoi128 v38,v47,v45,4
	_mm_store_si128((__m128i*)ctx.v38.u8, _mm_alignr_epi8(_mm_load_si128((__m128i*)ctx.v47.u8), _mm_load_si128((__m128i*)ctx.v45.u8), 12));
	// vmsum4fp128 v47,v125,v47
	_mm_store_ps(ctx.v47.f32, _mm_dp_ps(_mm_load_ps(ctx.v125.f32), _mm_load_ps(ctx.v47.f32), 0xFF));
	// vsldoi128 v37,v45,v43,4
	_mm_store_si128((__m128i*)ctx.v37.u8, _mm_alignr_epi8(_mm_load_si128((__m128i*)ctx.v45.u8), _mm_load_si128((__m128i*)ctx.v43.u8), 12));
	// vmsum4fp128 v45,v124,v45
	_mm_store_ps(ctx.v45.f32, _mm_dp_ps(_mm_load_ps(ctx.v124.f32), _mm_load_ps(ctx.v45.f32), 0xFF));
	// vsldoi128 v63,v63,v48,4
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_alignr_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)ctx.v48.u8), 12));
	// vmsum4fp128 v48,v122,v42
	_mm_store_ps(ctx.v48.f32, _mm_dp_ps(_mm_load_ps(ctx.v122.f32), _mm_load_ps(ctx.v42.f32), 0xFF));
	// vsldoi128 v36,v43,v42,4
	_mm_store_si128((__m128i*)ctx.v36.u8, _mm_alignr_epi8(_mm_load_si128((__m128i*)ctx.v43.u8), _mm_load_si128((__m128i*)ctx.v42.u8), 12));
	// vaddfp128 v52,v52,v50
	_mm_store_ps(ctx.v52.f32, _mm_add_ps(_mm_load_ps(ctx.v52.f32), _mm_load_ps(ctx.v50.f32)));
	// vsldoi128 v34,v42,v41,4
	_mm_store_si128((__m128i*)ctx.v34.u8, _mm_alignr_epi8(_mm_load_si128((__m128i*)ctx.v42.u8), _mm_load_si128((__m128i*)ctx.v41.u8), 12));
	// vmsum4fp128 v42,v126,v51
	_mm_store_ps(ctx.v42.f32, _mm_dp_ps(_mm_load_ps(ctx.v126.f32), _mm_load_ps(ctx.v51.f32), 0xFF));
	// vmsum4fp128 v33,v125,v38
	_mm_store_ps(ctx.v33.f32, _mm_dp_ps(_mm_load_ps(ctx.v125.f32), _mm_load_ps(ctx.v38.f32), 0xFF));
	// vsldoi128 v58,v41,v58,4
	_mm_store_si128((__m128i*)ctx.v58.u8, _mm_alignr_epi8(_mm_load_si128((__m128i*)ctx.v41.u8), _mm_load_si128((__m128i*)ctx.v58.u8), 12));
	// vmsum4fp128 v50,v127,v63
	_mm_store_ps(ctx.v50.f32, _mm_dp_ps(_mm_load_ps(ctx.v127.f32), _mm_load_ps(ctx.v63.f32), 0xFF));
	// vsldoi128 v57,v63,v51,4
	_mm_store_si128((__m128i*)ctx.v57.u8, _mm_alignr_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)ctx.v51.u8), 12));
	// vmsum4fp128 v0,v124,v37
	_mm_store_ps(ctx.v0.f32, _mm_dp_ps(_mm_load_ps(ctx.v124.f32), _mm_load_ps(ctx.v37.f32), 0xFF));
	// vsldoi128 v63,v51,v38,4
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_alignr_epi8(_mm_load_si128((__m128i*)ctx.v51.u8), _mm_load_si128((__m128i*)ctx.v38.u8), 12));
	// vmsum4fp128 v61,v124,v61
	_mm_store_ps(ctx.v61.f32, _mm_dp_ps(_mm_load_ps(ctx.v124.f32), _mm_load_ps(ctx.v61.f32), 0xFF));
	// vaddfp128 v13,v60,v59
	_mm_store_ps(ctx.v13.f32, _mm_add_ps(_mm_load_ps(ctx.v60.f32), _mm_load_ps(ctx.v59.f32)));
	// vmsum4fp128 v43,v123,v43
	_mm_store_ps(ctx.v43.f32, _mm_dp_ps(_mm_load_ps(ctx.v123.f32), _mm_load_ps(ctx.v43.f32), 0xFF));
	// vaddfp128 v46,v46,v44
	_mm_store_ps(ctx.v46.f32, _mm_add_ps(_mm_load_ps(ctx.v46.f32), _mm_load_ps(ctx.v44.f32)));
	// vmsum4fp128 v12,v122,v34
	_mm_store_ps(ctx.v12.f32, _mm_dp_ps(_mm_load_ps(ctx.v122.f32), _mm_load_ps(ctx.v34.f32), 0xFF));
	// vsldoi128 v59,v34,v58,4
	_mm_store_si128((__m128i*)ctx.v59.u8, _mm_alignr_epi8(_mm_load_si128((__m128i*)ctx.v34.u8), _mm_load_si128((__m128i*)ctx.v58.u8), 12));
	// vmsum4fp128 v11,v123,v36
	_mm_store_ps(ctx.v11.f32, _mm_dp_ps(_mm_load_ps(ctx.v123.f32), _mm_load_ps(ctx.v36.f32), 0xFF));
	// vaddfp128 v54,v54,v53
	_mm_store_ps(ctx.v54.f32, _mm_add_ps(_mm_load_ps(ctx.v54.f32), _mm_load_ps(ctx.v53.f32)));
	// vmsum4fp128 v51,v121,v49
	_mm_store_ps(ctx.v51.f32, _mm_dp_ps(_mm_load_ps(ctx.v121.f32), _mm_load_ps(ctx.v49.f32), 0xFF));
	// vsldoi128 v60,v36,v34,4
	_mm_store_si128((__m128i*)ctx.v60.u8, _mm_alignr_epi8(_mm_load_si128((__m128i*)ctx.v36.u8), _mm_load_si128((__m128i*)ctx.v34.u8), 12));
	// vmsum4fp128 v49,v121,v58
	_mm_store_ps(ctx.v49.f32, _mm_dp_ps(_mm_load_ps(ctx.v121.f32), _mm_load_ps(ctx.v58.f32), 0xFF));
	// vmsum4fp128 v56,v121,v56
	_mm_store_ps(ctx.v56.f32, _mm_dp_ps(_mm_load_ps(ctx.v121.f32), _mm_load_ps(ctx.v56.f32), 0xFF));
	// vaddfp128 v55,v55,v40
	_mm_store_ps(ctx.v55.f32, _mm_add_ps(_mm_load_ps(ctx.v55.f32), _mm_load_ps(ctx.v40.f32)));
	// vmsum4fp128 v53,v121,v41
	_mm_store_ps(ctx.v53.f32, _mm_dp_ps(_mm_load_ps(ctx.v121.f32), _mm_load_ps(ctx.v41.f32), 0xFF));
	// vaddfp128 v58,v35,v39
	_mm_store_ps(ctx.v58.f32, _mm_add_ps(_mm_load_ps(ctx.v35.f32), _mm_load_ps(ctx.v39.f32)));
	// vaddfp128 v47,v47,v45
	_mm_store_ps(ctx.v47.f32, _mm_add_ps(_mm_load_ps(ctx.v47.f32), _mm_load_ps(ctx.v45.f32)));
	// vaddfp128 v50,v50,v42
	_mm_store_ps(ctx.v50.f32, _mm_add_ps(_mm_load_ps(ctx.v50.f32), _mm_load_ps(ctx.v42.f32)));
	// vaddfp128 v54,v46,v54
	_mm_store_ps(ctx.v54.f32, _mm_add_ps(_mm_load_ps(ctx.v46.f32), _mm_load_ps(ctx.v54.f32)));
	// vaddfp128 v45,v33,v0
	_mm_store_ps(ctx.v45.f32, _mm_add_ps(_mm_load_ps(ctx.v33.f32), _mm_load_ps(ctx.v0.f32)));
	// vaddfp128 v32,v62,v61
	_mm_store_ps(ctx.v32.f32, _mm_add_ps(_mm_load_ps(ctx.v62.f32), _mm_load_ps(ctx.v61.f32)));
	// vsldoi128 v62,v38,v37,4
	_mm_store_si128((__m128i*)ctx.v62.u8, _mm_alignr_epi8(_mm_load_si128((__m128i*)ctx.v38.u8), _mm_load_si128((__m128i*)ctx.v37.u8), 12));
	// vaddfp128 v48,v43,v48
	_mm_store_ps(ctx.v48.f32, _mm_add_ps(_mm_load_ps(ctx.v43.f32), _mm_load_ps(ctx.v48.f32)));
	// vsldoi128 v61,v37,v36,4
	_mm_store_si128((__m128i*)ctx.v61.u8, _mm_alignr_epi8(_mm_load_si128((__m128i*)ctx.v37.u8), _mm_load_si128((__m128i*)ctx.v36.u8), 12));
	// vaddfp128 v46,v11,v12
	_mm_store_ps(ctx.v46.f32, _mm_add_ps(_mm_load_ps(ctx.v11.f32), _mm_load_ps(ctx.v12.f32)));
	// vaddfp128 v55,v55,v51
	_mm_store_ps(ctx.v55.f32, _mm_add_ps(_mm_load_ps(ctx.v55.f32), _mm_load_ps(ctx.v51.f32)));
	// vaddfp128 v58,v58,v47
	_mm_store_ps(ctx.v58.f32, _mm_add_ps(_mm_load_ps(ctx.v58.f32), _mm_load_ps(ctx.v47.f32)));
	// vaddfp128 v56,v13,v56
	_mm_store_ps(ctx.v56.f32, _mm_add_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v56.f32)));
	// vaddfp128 v51,v50,v45
	_mm_store_ps(ctx.v51.f32, _mm_add_ps(_mm_load_ps(ctx.v50.f32), _mm_load_ps(ctx.v45.f32)));
	// vaddfp128 v52,v52,v32
	_mm_store_ps(ctx.v52.f32, _mm_add_ps(_mm_load_ps(ctx.v52.f32), _mm_load_ps(ctx.v32.f32)));
	// vaddfp128 v53,v48,v53
	_mm_store_ps(ctx.v53.f32, _mm_add_ps(_mm_load_ps(ctx.v48.f32), _mm_load_ps(ctx.v53.f32)));
	// vaddfp128 v50,v46,v49
	_mm_store_ps(ctx.v50.f32, _mm_add_ps(_mm_load_ps(ctx.v46.f32), _mm_load_ps(ctx.v49.f32)));
	// vaddfp128 v55,v54,v55
	_mm_store_ps(ctx.v55.f32, _mm_add_ps(_mm_load_ps(ctx.v54.f32), _mm_load_ps(ctx.v55.f32)));
	// vaddfp128 v56,v52,v56
	_mm_store_ps(ctx.v56.f32, _mm_add_ps(_mm_load_ps(ctx.v52.f32), _mm_load_ps(ctx.v56.f32)));
	// vaddfp128 v58,v58,v53
	_mm_store_ps(ctx.v58.f32, _mm_add_ps(_mm_load_ps(ctx.v58.f32), _mm_load_ps(ctx.v53.f32)));
	// vaddfp128 v54,v51,v50
	_mm_store_ps(ctx.v54.f32, _mm_add_ps(_mm_load_ps(ctx.v51.f32), _mm_load_ps(ctx.v50.f32)));
	// vrlimi128 v56,v55,4,0
	_mm_store_ps(ctx.v56.f32, _mm_blend_ps(_mm_load_ps(ctx.v56.f32), _mm_permute_ps(_mm_load_ps(ctx.v55.f32), 228), 4));
	// vrlimi128 v56,v58,2,0
	_mm_store_ps(ctx.v56.f32, _mm_blend_ps(_mm_load_ps(ctx.v56.f32), _mm_permute_ps(_mm_load_ps(ctx.v58.f32), 228), 2));
	// vrlimi128 v56,v54,1,0
	_mm_store_ps(ctx.v56.f32, _mm_blend_ps(_mm_load_ps(ctx.v56.f32), _mm_permute_ps(_mm_load_ps(ctx.v54.f32), 228), 1));
	// stvx128 v56,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v56.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// bdnz 0x82a29888
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82A29888;
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// addi r30,r30,-320
	ctx.r30.s64 = ctx.r30.s64 + -320;
	// bne 0x82a29808
	if (!ctx.cr0.eq) goto loc_82A29808;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r31,160
	ctx.r31.s64 = 160;
	// li r29,80
	ctx.r29.s64 = 80;
loc_82A29A00:
	// li r5,132
	ctx.r5.s64 = 132;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82a75988
	ctx.lr = 0x82A29A10;
	sub_82A75988(ctx, base);
	// li r11,108
	ctx.r11.s64 = 108;
	// add r10,r30,r26
	ctx.r10.u64 = ctx.r30.u64 + ctx.r26.u64;
	// addi r9,r1,124
	ctx.r9.s64 = ctx.r1.s64 + 124;
	// addi r10,r10,-320
	ctx.r10.s64 = ctx.r10.s64 + -320;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_82A29A24:
	// lfsu f0,320(r10)
	ctx.fpscr.disableFlushMode();
	ea = 320 + ctx.r10.u32;
	temp.u32 = PPC_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	ctx.f0.f64 = double(temp.f32);
	// stfsu f0,4(r9)
	temp.f32 = float(ctx.f0.f64);
	ea = 4 + ctx.r9.u32;
	PPC_STORE_U32(ea, temp.u32);
	ctx.r9.u32 = ea;
	// bdnz 0x82a29a24
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82A29A24;
	// li r9,12
	ctx.r9.s64 = 12;
	// addi r10,r1,556
	ctx.r10.s64 = ctx.r1.s64 + 556;
	// addi r11,r1,560
	ctx.r11.s64 = ctx.r1.s64 + 560;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82A29A40:
	// lfs f0,-428(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -428);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,-436(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + -436, temp.u32);
	// lfsu f0,-4(r11)
	ea = -4 + ctx.r11.u32;
	temp.u32 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	ctx.f0.f64 = double(temp.f32);
	// stfsu f0,4(r10)
	temp.f32 = float(ctx.f0.f64);
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, temp.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x82a29a40
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82A29A40;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// addi r7,r1,128
	ctx.r7.s64 = ctx.r1.s64 + 128;
	// addi r6,r1,144
	ctx.r6.s64 = ctx.r1.s64 + 144;
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// lvx128 v58,r0,r11
	simd::store_shuffled(ctx.v58, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// li r8,27
	ctx.r8.s64 = 27;
	// lvx128 v63,r0,r10
	simd::store_shuffled(ctx.v63, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// lvx128 v62,r0,r9
	simd::store_shuffled(ctx.v62, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// li r11,0
	ctx.r11.s64 = 0;
	// lvx128 v61,r0,r7
	simd::store_shuffled(ctx.v61, simd::load_and_shuffle(base + ((ctx.r7.u32) & ~0xF), VectorMaskL));
	// addi r7,r31,-80
	ctx.r7.s64 = ctx.r31.s64 + -80;
	// lvx128 v60,r0,r6
	simd::store_shuffled(ctx.v60, simd::load_and_shuffle(base + ((ctx.r6.u32) & ~0xF), VectorMaskL));
	// addi r6,r31,80
	ctx.r6.s64 = ctx.r31.s64 + 80;
	// lvx128 v59,r0,r5
	simd::store_shuffled(ctx.v59, simd::load_and_shuffle(base + ((ctx.r5.u32) & ~0xF), VectorMaskL));
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// addi r10,r1,176
	ctx.r10.s64 = ctx.r1.s64 + 176;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_82A29AA0:
	// vsldoi128 v54,v63,v62,4
	_mm_store_si128((__m128i*)ctx.v54.u8, _mm_alignr_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)ctx.v62.u8), 12));
	// vmsum4fp128 v53,v125,v62
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v53.f32, _mm_dp_ps(_mm_load_ps(ctx.v125.f32), _mm_load_ps(ctx.v62.f32), 0xFF));
	// vsldoi128 v62,v62,v61,4
	_mm_store_si128((__m128i*)ctx.v62.u8, _mm_alignr_epi8(_mm_load_si128((__m128i*)ctx.v62.u8), _mm_load_si128((__m128i*)ctx.v61.u8), 12));
	// vmsum4fp128 v55,v124,v61
	_mm_store_ps(ctx.v55.f32, _mm_dp_ps(_mm_load_ps(ctx.v124.f32), _mm_load_ps(ctx.v61.f32), 0xFF));
	// vsldoi128 v50,v60,v59,4
	_mm_store_si128((__m128i*)ctx.v50.u8, _mm_alignr_epi8(_mm_load_si128((__m128i*)ctx.v60.u8), _mm_load_si128((__m128i*)ctx.v59.u8), 12));
	// vmsum4fp128 v52,v127,v58
	_mm_store_ps(ctx.v52.f32, _mm_dp_ps(_mm_load_ps(ctx.v127.f32), _mm_load_ps(ctx.v58.f32), 0xFF));
	// vsldoi128 v61,v61,v60,4
	_mm_store_si128((__m128i*)ctx.v61.u8, _mm_alignr_epi8(_mm_load_si128((__m128i*)ctx.v61.u8), _mm_load_si128((__m128i*)ctx.v60.u8), 12));
	// vmsum4fp128 v57,v126,v63
	_mm_store_ps(ctx.v57.f32, _mm_dp_ps(_mm_load_ps(ctx.v126.f32), _mm_load_ps(ctx.v63.f32), 0xFF));
	// vmsum4fp128 v51,v122,v59
	_mm_store_ps(ctx.v51.f32, _mm_dp_ps(_mm_load_ps(ctx.v122.f32), _mm_load_ps(ctx.v59.f32), 0xFF));
	// lvx128 v56,r0,r10
	simd::store_shuffled(ctx.v56, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// vmsum4fp128 v60,v123,v60
	_mm_store_ps(ctx.v60.f32, _mm_dp_ps(_mm_load_ps(ctx.v123.f32), _mm_load_ps(ctx.v60.f32), 0xFF));
	// vsldoi128 v58,v58,v63,4
	_mm_store_si128((__m128i*)ctx.v58.u8, _mm_alignr_epi8(_mm_load_si128((__m128i*)ctx.v58.u8), _mm_load_si128((__m128i*)ctx.v63.u8), 12));
	// lvx128 v63,r0,r25
	simd::store_shuffled(ctx.v63, simd::load_and_shuffle(base + ((ctx.r25.u32) & ~0xF), VectorMaskL));
	// vsldoi128 v59,v59,v56,4
	_mm_store_si128((__m128i*)ctx.v59.u8, _mm_alignr_epi8(_mm_load_si128((__m128i*)ctx.v59.u8), _mm_load_si128((__m128i*)ctx.v56.u8), 12));
	// vmsum4fp128 v49,v121,v56
	_mm_store_ps(ctx.v49.f32, _mm_dp_ps(_mm_load_ps(ctx.v121.f32), _mm_load_ps(ctx.v56.f32), 0xFF));
	// vsldoi128 v48,v54,v62,4
	_mm_store_si128((__m128i*)ctx.v48.u8, _mm_alignr_epi8(_mm_load_si128((__m128i*)ctx.v54.u8), _mm_load_si128((__m128i*)ctx.v62.u8), 12));
	// vsldoi128 v56,v56,v63,4
	_mm_store_si128((__m128i*)ctx.v56.u8, _mm_alignr_epi8(_mm_load_si128((__m128i*)ctx.v56.u8), _mm_load_si128((__m128i*)ctx.v63.u8), 12));
	// vmsum4fp128 v47,v126,v54
	_mm_store_ps(ctx.v47.f32, _mm_dp_ps(_mm_load_ps(ctx.v126.f32), _mm_load_ps(ctx.v54.f32), 0xFF));
	// vsldoi128 v44,v61,v50,4
	_mm_store_si128((__m128i*)ctx.v44.u8, _mm_alignr_epi8(_mm_load_si128((__m128i*)ctx.v61.u8), _mm_load_si128((__m128i*)ctx.v50.u8), 12));
	// vmsum4fp128 v46,v127,v58
	_mm_store_ps(ctx.v46.f32, _mm_dp_ps(_mm_load_ps(ctx.v127.f32), _mm_load_ps(ctx.v58.f32), 0xFF));
	// vsldoi128 v43,v50,v59,4
	_mm_store_si128((__m128i*)ctx.v43.u8, _mm_alignr_epi8(_mm_load_si128((__m128i*)ctx.v50.u8), _mm_load_si128((__m128i*)ctx.v59.u8), 12));
	// vmsum4fp128 v50,v123,v50
	_mm_store_ps(ctx.v50.f32, _mm_dp_ps(_mm_load_ps(ctx.v123.f32), _mm_load_ps(ctx.v50.f32), 0xFF));
	// vsldoi128 v45,v62,v61,4
	_mm_store_si128((__m128i*)ctx.v45.u8, _mm_alignr_epi8(_mm_load_si128((__m128i*)ctx.v62.u8), _mm_load_si128((__m128i*)ctx.v61.u8), 12));
	// vmsum4fp128 v62,v125,v62
	_mm_store_ps(ctx.v62.f32, _mm_dp_ps(_mm_load_ps(ctx.v125.f32), _mm_load_ps(ctx.v62.f32), 0xFF));
	// vsldoi128 v42,v59,v56,4
	_mm_store_si128((__m128i*)ctx.v42.u8, _mm_alignr_epi8(_mm_load_si128((__m128i*)ctx.v59.u8), _mm_load_si128((__m128i*)ctx.v56.u8), 12));
	// vmsum4fp128 v61,v124,v61
	_mm_store_ps(ctx.v61.f32, _mm_dp_ps(_mm_load_ps(ctx.v124.f32), _mm_load_ps(ctx.v61.f32), 0xFF));
	// vmsum4fp128 v59,v122,v59
	_mm_store_ps(ctx.v59.f32, _mm_dp_ps(_mm_load_ps(ctx.v122.f32), _mm_load_ps(ctx.v59.f32), 0xFF));
	// vsldoi128 v58,v58,v54,4
	_mm_store_si128((__m128i*)ctx.v58.u8, _mm_alignr_epi8(_mm_load_si128((__m128i*)ctx.v58.u8), _mm_load_si128((__m128i*)ctx.v54.u8), 12));
	// vsldoi128 v37,v44,v43,4
	_mm_store_si128((__m128i*)ctx.v37.u8, _mm_alignr_epi8(_mm_load_si128((__m128i*)ctx.v44.u8), _mm_load_si128((__m128i*)ctx.v43.u8), 12));
	// vmsum4fp128 v41,v126,v48
	_mm_store_ps(ctx.v41.f32, _mm_dp_ps(_mm_load_ps(ctx.v126.f32), _mm_load_ps(ctx.v48.f32), 0xFF));
	// vsldoi128 v40,v48,v45,4
	_mm_store_si128((__m128i*)ctx.v40.u8, _mm_alignr_epi8(_mm_load_si128((__m128i*)ctx.v48.u8), _mm_load_si128((__m128i*)ctx.v45.u8), 12));
	// vmsum4fp128 v39,v125,v45
	_mm_store_ps(ctx.v39.f32, _mm_dp_ps(_mm_load_ps(ctx.v125.f32), _mm_load_ps(ctx.v45.f32), 0xFF));
	// vsldoi128 v45,v45,v44,4
	_mm_store_si128((__m128i*)ctx.v45.u8, _mm_alignr_epi8(_mm_load_si128((__m128i*)ctx.v45.u8), _mm_load_si128((__m128i*)ctx.v44.u8), 12));
	// vmsum4fp128 v54,v121,v56
	_mm_store_ps(ctx.v54.f32, _mm_dp_ps(_mm_load_ps(ctx.v121.f32), _mm_load_ps(ctx.v56.f32), 0xFF));
	// vaddfp128 v55,v53,v55
	_mm_store_ps(ctx.v55.f32, _mm_add_ps(_mm_load_ps(ctx.v53.f32), _mm_load_ps(ctx.v55.f32)));
	// vmsum4fp128 v38,v127,v58
	_mm_store_ps(ctx.v38.f32, _mm_dp_ps(_mm_load_ps(ctx.v127.f32), _mm_load_ps(ctx.v58.f32), 0xFF));
	// vmsum4fp128 v53,v124,v44
	_mm_store_ps(ctx.v53.f32, _mm_dp_ps(_mm_load_ps(ctx.v124.f32), _mm_load_ps(ctx.v44.f32), 0xFF));
	// vsldoi128 v56,v56,v63,4
	_mm_store_si128((__m128i*)ctx.v56.u8, _mm_alignr_epi8(_mm_load_si128((__m128i*)ctx.v56.u8), _mm_load_si128((__m128i*)ctx.v63.u8), 12));
	// vaddfp128 v57,v52,v57
	_mm_store_ps(ctx.v57.f32, _mm_add_ps(_mm_load_ps(ctx.v52.f32), _mm_load_ps(ctx.v57.f32)));
	// vmsum4fp128 v52,v123,v43
	_mm_store_ps(ctx.v52.f32, _mm_dp_ps(_mm_load_ps(ctx.v123.f32), _mm_load_ps(ctx.v43.f32), 0xFF));
	// vmsum4fp128 v44,v122,v42
	_mm_store_ps(ctx.v44.f32, _mm_dp_ps(_mm_load_ps(ctx.v122.f32), _mm_load_ps(ctx.v42.f32), 0xFF));
	// vsldoi128 v58,v58,v48,4
	_mm_store_si128((__m128i*)ctx.v58.u8, _mm_alignr_epi8(_mm_load_si128((__m128i*)ctx.v58.u8), _mm_load_si128((__m128i*)ctx.v48.u8), 12));
	// vaddfp128 v60,v60,v51
	_mm_store_ps(ctx.v60.f32, _mm_add_ps(_mm_load_ps(ctx.v60.f32), _mm_load_ps(ctx.v51.f32)));
	// vsldoi128 v43,v43,v42,4
	_mm_store_si128((__m128i*)ctx.v43.u8, _mm_alignr_epi8(_mm_load_si128((__m128i*)ctx.v43.u8), _mm_load_si128((__m128i*)ctx.v42.u8), 12));
	// vsldoi128 v51,v42,v56,4
	_mm_store_si128((__m128i*)ctx.v51.u8, _mm_alignr_epi8(_mm_load_si128((__m128i*)ctx.v42.u8), _mm_load_si128((__m128i*)ctx.v56.u8), 12));
	// vmsum4fp128 v48,v121,v56
	_mm_store_ps(ctx.v48.f32, _mm_dp_ps(_mm_load_ps(ctx.v121.f32), _mm_load_ps(ctx.v56.f32), 0xFF));
	// vsldoi128 v56,v56,v63,4
	_mm_store_si128((__m128i*)ctx.v56.u8, _mm_alignr_epi8(_mm_load_si128((__m128i*)ctx.v56.u8), _mm_load_si128((__m128i*)ctx.v63.u8), 12));
	// vmsum4fp128 v42,v125,v45
	_mm_store_ps(ctx.v42.f32, _mm_dp_ps(_mm_load_ps(ctx.v125.f32), _mm_load_ps(ctx.v45.f32), 0xFF));
	// vmsum4fp128 v35,v127,v58
	_mm_store_ps(ctx.v35.f32, _mm_dp_ps(_mm_load_ps(ctx.v127.f32), _mm_load_ps(ctx.v58.f32), 0xFF));
	// add r8,r7,r11
	ctx.r8.u64 = ctx.r7.u64 + ctx.r11.u64;
	// vaddfp128 v47,v46,v47
	_mm_store_ps(ctx.v47.f32, _mm_add_ps(_mm_load_ps(ctx.v46.f32), _mm_load_ps(ctx.v47.f32)));
	// vmsum4fp128 v46,v126,v40
	_mm_store_ps(ctx.v46.f32, _mm_dp_ps(_mm_load_ps(ctx.v126.f32), _mm_load_ps(ctx.v40.f32), 0xFF));
	// vmsum4fp128 v33,v122,v51
	_mm_store_ps(ctx.v33.f32, _mm_dp_ps(_mm_load_ps(ctx.v122.f32), _mm_load_ps(ctx.v51.f32), 0xFF));
	// add r5,r31,r11
	ctx.r5.u64 = ctx.r31.u64 + ctx.r11.u64;
	// vmsum4fp128 v36,v124,v37
	_mm_store_ps(ctx.v36.f32, _mm_dp_ps(_mm_load_ps(ctx.v124.f32), _mm_load_ps(ctx.v37.f32), 0xFF));
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// vaddfp128 v34,v62,v61
	_mm_store_ps(ctx.v34.f32, _mm_add_ps(_mm_load_ps(ctx.v62.f32), _mm_load_ps(ctx.v61.f32)));
	// vmsum4fp128 v32,v123,v43
	_mm_store_ps(ctx.v32.f32, _mm_dp_ps(_mm_load_ps(ctx.v123.f32), _mm_load_ps(ctx.v43.f32), 0xFF));
	// vaddfp128 v50,v50,v59
	_mm_store_ps(ctx.v50.f32, _mm_add_ps(_mm_load_ps(ctx.v50.f32), _mm_load_ps(ctx.v59.f32)));
	// vsldoi128 v59,v51,v56,4
	_mm_store_si128((__m128i*)ctx.v59.u8, _mm_alignr_epi8(_mm_load_si128((__m128i*)ctx.v51.u8), _mm_load_si128((__m128i*)ctx.v56.u8), 12));
	// vsldoi128 v58,v58,v40,4
	_mm_store_si128((__m128i*)ctx.v58.u8, _mm_alignr_epi8(_mm_load_si128((__m128i*)ctx.v58.u8), _mm_load_si128((__m128i*)ctx.v40.u8), 12));
	// rlwinm r5,r5,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// vaddfp128 v57,v57,v55
	_mm_store_ps(ctx.v57.f32, _mm_add_ps(_mm_load_ps(ctx.v57.f32), _mm_load_ps(ctx.v55.f32)));
	// vsldoi128 v63,v40,v45,4
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_alignr_epi8(_mm_load_si128((__m128i*)ctx.v40.u8), _mm_load_si128((__m128i*)ctx.v45.u8), 12));
	// vsldoi128 v62,v45,v37,4
	_mm_store_si128((__m128i*)ctx.v62.u8, _mm_alignr_epi8(_mm_load_si128((__m128i*)ctx.v45.u8), _mm_load_si128((__m128i*)ctx.v37.u8), 12));
	// vaddfp128 v55,v60,v49
	_mm_store_ps(ctx.v55.f32, _mm_add_ps(_mm_load_ps(ctx.v60.f32), _mm_load_ps(ctx.v49.f32)));
	// vsldoi128 v60,v43,v51,4
	_mm_store_si128((__m128i*)ctx.v60.u8, _mm_alignr_epi8(_mm_load_si128((__m128i*)ctx.v43.u8), _mm_load_si128((__m128i*)ctx.v51.u8), 12));
	// vaddfp128 v53,v39,v53
	_mm_store_ps(ctx.v53.f32, _mm_add_ps(_mm_load_ps(ctx.v39.f32), _mm_load_ps(ctx.v53.f32)));
	// vsldoi128 v61,v37,v43,4
	_mm_store_si128((__m128i*)ctx.v61.u8, _mm_alignr_epi8(_mm_load_si128((__m128i*)ctx.v37.u8), _mm_load_si128((__m128i*)ctx.v43.u8), 12));
	// vaddfp128 v49,v38,v41
	_mm_store_ps(ctx.v49.f32, _mm_add_ps(_mm_load_ps(ctx.v38.f32), _mm_load_ps(ctx.v41.f32)));
	// vaddfp128 v52,v52,v44
	_mm_store_ps(ctx.v52.f32, _mm_add_ps(_mm_load_ps(ctx.v52.f32), _mm_load_ps(ctx.v44.f32)));
	// vaddfp128 v51,v47,v34
	_mm_store_ps(ctx.v51.f32, _mm_add_ps(_mm_load_ps(ctx.v47.f32), _mm_load_ps(ctx.v34.f32)));
	// vaddfp128 v54,v50,v54
	_mm_store_ps(ctx.v54.f32, _mm_add_ps(_mm_load_ps(ctx.v50.f32), _mm_load_ps(ctx.v54.f32)));
	// vaddfp128 v50,v35,v46
	_mm_store_ps(ctx.v50.f32, _mm_add_ps(_mm_load_ps(ctx.v35.f32), _mm_load_ps(ctx.v46.f32)));
	// vaddfp128 v47,v42,v36
	_mm_store_ps(ctx.v47.f32, _mm_add_ps(_mm_load_ps(ctx.v42.f32), _mm_load_ps(ctx.v36.f32)));
	// vaddfp128 v46,v32,v33
	_mm_store_ps(ctx.v46.f32, _mm_add_ps(_mm_load_ps(ctx.v32.f32), _mm_load_ps(ctx.v33.f32)));
	// vaddfp128 v57,v57,v55
	_mm_store_ps(ctx.v57.f32, _mm_add_ps(_mm_load_ps(ctx.v57.f32), _mm_load_ps(ctx.v55.f32)));
	// vaddfp128 v55,v49,v53
	_mm_store_ps(ctx.v55.f32, _mm_add_ps(_mm_load_ps(ctx.v49.f32), _mm_load_ps(ctx.v53.f32)));
	// vaddfp128 v53,v52,v48
	_mm_store_ps(ctx.v53.f32, _mm_add_ps(_mm_load_ps(ctx.v52.f32), _mm_load_ps(ctx.v48.f32)));
	// vaddfp128 v54,v51,v54
	_mm_store_ps(ctx.v54.f32, _mm_add_ps(_mm_load_ps(ctx.v51.f32), _mm_load_ps(ctx.v54.f32)));
	// stvewx128 v57,r28,r9
	ea = (ctx.r28.u32 + ctx.r9.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v57.u32[3 - ((ea & 0xF) >> 2)]);
	// vmsum4fp128 v57,v121,v56
	_mm_store_ps(ctx.v57.f32, _mm_dp_ps(_mm_load_ps(ctx.v121.f32), _mm_load_ps(ctx.v56.f32), 0xFF));
	// vaddfp128 v56,v50,v47
	_mm_store_ps(ctx.v56.f32, _mm_add_ps(_mm_load_ps(ctx.v50.f32), _mm_load_ps(ctx.v47.f32)));
	// vaddfp128 v55,v55,v53
	_mm_store_ps(ctx.v55.f32, _mm_add_ps(_mm_load_ps(ctx.v55.f32), _mm_load_ps(ctx.v53.f32)));
	// add r4,r6,r11
	ctx.r4.u64 = ctx.r6.u64 + ctx.r11.u64;
	// stvewx128 v54,r28,r8
	ea = (ctx.r28.u32 + ctx.r8.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v54.u32[3 - ((ea & 0xF) >> 2)]);
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// rlwinm r8,r4,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,320
	ctx.r11.s64 = ctx.r11.s64 + 320;
	// addi r9,r9,1280
	ctx.r9.s64 = ctx.r9.s64 + 1280;
	// stvewx128 v55,r28,r5
	ea = (ctx.r28.u32 + ctx.r5.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v55.u32[3 - ((ea & 0xF) >> 2)]);
	// vaddfp128 v57,v46,v57
	_mm_store_ps(ctx.v57.f32, _mm_add_ps(_mm_load_ps(ctx.v46.f32), _mm_load_ps(ctx.v57.f32)));
	// vaddfp128 v57,v56,v57
	_mm_store_ps(ctx.v57.f32, _mm_add_ps(_mm_load_ps(ctx.v56.f32), _mm_load_ps(ctx.v57.f32)));
	// stvewx128 v57,r28,r8
	ea = (ctx.r28.u32 + ctx.r8.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v57.u32[3 - ((ea & 0xF) >> 2)]);
	// bdnz 0x82a29aa0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82A29AA0;
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// bne 0x82a29a00
	if (!ctx.cr0.eq) goto loc_82A29A00;
	// li r10,2160
	ctx.r10.s64 = 2160;
	// li r11,16
	ctx.r11.s64 = 16;
	// addi r9,r28,-16
	ctx.r9.s64 = ctx.r28.s64 + -16;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82A29C3C:
	// addi r10,r11,-16
	ctx.r10.s64 = ctx.r11.s64 + -16;
	// lvrx128 v63,r11,r24
	temp.u32 = ctx.r11.u32 + ctx.r24.u32;
	_mm_store_si128((__m128i*)ctx.v63.u8, temp.u32 & 0xF ? _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : _mm_setzero_si128());
	// lvx128 v62,r9,r11
	simd::store_shuffled(ctx.v62, simd::load_and_shuffle(base + ((ctx.r9.u32 + ctx.r11.u32) & ~0xF), VectorMaskL));
	// lvlx128 v61,r10,r24
	temp.u32 = ctx.r10.u32 + ctx.r24.u32;
	_mm_store_si128((__m128i*)ctx.v61.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vor128 v63,v61,v63
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v61.u8), _mm_load_si128((__m128i*)ctx.v63.u8)));
	// vsubfp128 v63,v63,v62
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v63.f32, _mm_sub_ps(_mm_load_ps(ctx.v63.f32), _mm_load_ps(ctx.v62.f32)));
	// stvlx128 v63,r24,r10
	ea = ctx.r24.u32 + ctx.r10.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v63.u8[15 - i]);
	// stvrx128 v63,r24,r11
	ea = ctx.r24.u32 + ctx.r11.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		PPC_STORE_U8(ea - i - 1, ctx.v63.u8[i]);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// bdnz 0x82a29c3c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82A29C3C;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,10656
	ctx.r1.s64 = ctx.r1.s64 + 10656;
	// addi r12,r1,-80
	ctx.r12.s64 = ctx.r1.s64 + -80;
	// bl 0x82fac3d4
	ctx.lr = 0x82A29C74;
	__restvmx_121(ctx, base);
	// b 0x82fa76b8
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A29C78"))) PPC_WEAK_FUNC(sub_82A29C78);
PPC_FUNC_IMPL(__imp__sub_82A29C78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x82A29C80;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lis r5,0
	ctx.r5.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// ori r5,r5,34560
	ctx.r5.u64 = ctx.r5.u64 | 34560;
	// bl 0x82a75220
	ctx.lr = 0x82A29CA4;
	sub_82A75220(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// addi r11,r11,-14544
	ctx.r11.s64 = ctx.r11.s64 + -14544;
	// dcbt r0,r11
	// li r10,64
	ctx.r10.s64 = 64;
	// dcbt r11,r10
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a29440
	ctx.lr = 0x82A29CC4;
	sub_82A29440(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82a29cdc
	if (!ctx.cr0.eq) goto loc_82A29CDC;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a29788
	ctx.lr = 0x82A29CDC;
	sub_82A29788(ctx, base);
loc_82A29CDC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A29CE4"))) PPC_WEAK_FUNC(sub_82A29CE4);
PPC_FUNC_IMPL(__imp__sub_82A29CE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A29CE8"))) PPC_WEAK_FUNC(sub_82A29CE8);
PPC_FUNC_IMPL(__imp__sub_82A29CE8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7670
	ctx.lr = 0x82A29CF0;
	__savegprlr_26(ctx, base);
	// lfs f0,0(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// addi r29,r1,28
	ctx.r29.s64 = ctx.r1.s64 + 28;
	// lfs f13,8(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	ctx.f13.f64 = double(temp.f32);
	// stw r4,28(r1)
	PPC_STORE_U32(ctx.r1.u32 + 28, ctx.r4.u32);
	// fsubs f11,f13,f0
	ctx.f11.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lfs f13,4(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lfs f12,12(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// addi r11,r11,-14368
	ctx.r11.s64 = ctx.r11.s64 + -14368;
	// lvlx128 v61,r0,r29
	temp.u32 = ctx.r29.u32;
	_mm_store_si128((__m128i*)ctx.v61.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// fsubs f10,f12,f13
	ctx.f10.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// lis r9,-32248
	ctx.r9.s64 = -2113404928;
	// stfs f13,-72(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + -72, temp.u32);
	// stw r5,36(r1)
	PPC_STORE_U32(ctx.r1.u32 + 36, ctx.r5.u32);
	// lis r7,-32233
	ctx.r7.s64 = -2112421888;
	// lfs f12,23556(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 23556);
	ctx.f12.f64 = double(temp.f32);
	// lis r10,-31962
	ctx.r10.s64 = -2094661632;
	// lfs f13,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// lis r6,-32248
	ctx.r6.s64 = -2113404928;
	// fmuls f9,f13,f12
	ctx.f9.f64 = double(float(ctx.f13.f64 * ctx.f12.f64));
	// addi r31,r10,-30752
	ctx.r31.s64 = ctx.r10.s64 + -30752;
	// lfs f13,-14356(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -14356);
	ctx.f13.f64 = double(temp.f32);
	// addi r9,r1,-112
	ctx.r9.s64 = ctx.r1.s64 + -112;
	// fmuls f8,f11,f11
	ctx.f8.f64 = double(float(ctx.f11.f64 * ctx.f11.f64));
	// stfs f9,-108(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + -108, temp.u32);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stfs f0,-88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -88, temp.u32);
	// stfs f13,-112(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + -112, temp.u32);
	// lis r11,-31962
	ctx.r11.s64 = -2094661632;
	// lfs f13,24436(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 24436);
	ctx.f13.f64 = double(temp.f32);
	// addi r30,r1,36
	ctx.r30.s64 = ctx.r1.s64 + 36;
	// lfs f12,-14360(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + -14360);
	ctx.f12.f64 = double(temp.f32);
	// addi r5,r11,-30736
	ctx.r5.s64 = ctx.r11.s64 + -30736;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// lfs f0,5184(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5184);
	ctx.f0.f64 = double(temp.f32);
	// addi r8,r1,-80
	ctx.r8.s64 = ctx.r1.s64 + -80;
	// stfs f0,-104(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -104, temp.u32);
	// addi r10,r4,16
	ctx.r10.s64 = ctx.r4.s64 + 16;
	// stfs f0,-100(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -100, temp.u32);
	// lis r7,-31962
	ctx.r7.s64 = -2094661632;
	// stfs f0,-84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -84, temp.u32);
	// fmadds f9,f10,f10,f8
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f10.f64 + ctx.f8.f64));
	// stfs f0,-68(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -68, temp.u32);
	// lvlx128 v63,r0,r30
	temp.u32 = ctx.r30.u32;
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw128 v60,v63,0
	_mm_store_si128((__m128i*)ctx.v60.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v63.u32), 0xFF));
	// fsqrts f9,f9
	ctx.f9.f64 = double(float(sqrt(ctx.f9.f64)));
	// vspltw128 v61,v61,0
	_mm_store_si128((__m128i*)ctx.v61.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v61.u32), 0xFF));
	// lvx128 v62,r0,r5
	simd::store_shuffled(ctx.v62, simd::load_and_shuffle(base + ((ctx.r5.u32) & ~0xF), VectorMaskL));
	// vcsxwfp128 v58,v60,0
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v58.f32, _mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v60.u32)));
	// vor128 v59,v62,v62
	_mm_store_si128((__m128i*)ctx.v59.u8, _mm_load_si128((__m128i*)ctx.v62.u8));
	// lvx128 v63,r0,r31
	simd::store_shuffled(ctx.v63, simd::load_and_shuffle(base + ((ctx.r31.u32) & ~0xF), VectorMaskL));
	// lvx128 v60,r0,r9
	simd::store_shuffled(ctx.v60, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// vor128 v54,v60,v60
	_mm_store_si128((__m128i*)ctx.v54.u8, _mm_load_si128((__m128i*)ctx.v60.u8));
	// fdivs f0,f13,f9
	ctx.fpscr.disableFlushModeUnconditional();
	ctx.f0.f64 = double(float(ctx.f13.f64 / ctx.f9.f64));
	// vcsxwfp128 v0,v61,0
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v0.f32, _mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v61.u32)));
	// fmuls f13,f9,f12
	ctx.fpscr.disableFlushModeUnconditional();
	ctx.f13.f64 = double(float(ctx.f9.f64 * ctx.f12.f64));
	// vor128 v57,v59,v59
	_mm_store_si128((__m128i*)ctx.v57.u8, _mm_load_si128((__m128i*)ctx.v59.u8));
	// vsubfp128 v58,v58,v62
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v58.f32, _mm_sub_ps(_mm_load_ps(ctx.v58.f32), _mm_load_ps(ctx.v62.f32)));
	// addi r9,r1,-96
	ctx.r9.s64 = ctx.r1.s64 + -96;
	// vor128 v55,v59,v59
	_mm_store_si128((__m128i*)ctx.v55.u8, _mm_load_si128((__m128i*)ctx.v59.u8));
	// li r30,108
	ctx.r30.s64 = 108;
	// vor128 v61,v59,v59
	_mm_store_si128((__m128i*)ctx.v61.u8, _mm_load_si128((__m128i*)ctx.v59.u8));
	// vrlimi128 v57,v63,13,0
	_mm_store_ps(ctx.v57.f32, _mm_blend_ps(_mm_load_ps(ctx.v57.f32), _mm_permute_ps(_mm_load_ps(ctx.v63.f32), 228), 13));
	// vrlimi128 v55,v63,11,0
	_mm_store_ps(ctx.v55.f32, _mm_blend_ps(_mm_load_ps(ctx.v55.f32), _mm_permute_ps(_mm_load_ps(ctx.v63.f32), 228), 11));
	// vrlimi128 v61,v63,7,0
	_mm_store_ps(ctx.v61.f32, _mm_blend_ps(_mm_load_ps(ctx.v61.f32), _mm_permute_ps(_mm_load_ps(ctx.v63.f32), 228), 7));
	// vsubfp128 v60,v57,v60
	_mm_store_ps(ctx.v60.f32, _mm_sub_ps(_mm_load_ps(ctx.v57.f32), _mm_load_ps(ctx.v60.f32)));
	// fmuls f0,f13,f0
	ctx.fpscr.disableFlushModeUnconditional();
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// vsubfp128 v56,v0,v62
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v56.f32, _mm_sub_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v62.f32)));
	// vsubfp128 v58,v58,v62
	_mm_store_ps(ctx.v58.f32, _mm_sub_ps(_mm_load_ps(ctx.v58.f32), _mm_load_ps(ctx.v62.f32)));
	// fmuls f13,f0,f10
	ctx.fpscr.disableFlushModeUnconditional();
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f10.f64));
	// stfs f13,-80(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + -80, temp.u32);
	// fmuls f0,f0,f11
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f11.f64));
	// stfs f0,-96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -96, temp.u32);
	// stfs f0,-76(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -76, temp.u32);
	// vrlimi128 v54,v60,8,0
	_mm_store_ps(ctx.v54.f32, _mm_blend_ps(_mm_load_ps(ctx.v54.f32), _mm_permute_ps(_mm_load_ps(ctx.v60.f32), 228), 8));
	// vsubfp128 v59,v56,v62
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v59.f32, _mm_sub_ps(_mm_load_ps(ctx.v56.f32), _mm_load_ps(ctx.v62.f32)));
	// lvx128 v56,r0,r8
	simd::store_shuffled(ctx.v56, simd::load_and_shuffle(base + ((ctx.r8.u32) & ~0xF), VectorMaskL));
	// fneg f0,f13
	ctx.fpscr.disableFlushModeUnconditional();
	ctx.f0.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// stfs f0,-92(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + -92, temp.u32);
	// lvx128 v57,r0,r9
	simd::store_shuffled(ctx.v57, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// addi r9,r7,-28752
	ctx.r9.s64 = ctx.r7.s64 + -28752;
	// lvx128 v7,r0,r9
	simd::store_shuffled(ctx.v7, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// b 0x82a29e48
	goto loc_82A29E48;
loc_82A29E40:
	// lvx128 v62,r0,r5
	simd::store_shuffled(ctx.v62, simd::load_and_shuffle(base + ((ctx.r5.u32) & ~0xF), VectorMaskL));
	// lvx128 v63,r0,r31
	simd::store_shuffled(ctx.v63, simd::load_and_shuffle(base + ((ctx.r31.u32) & ~0xF), VectorMaskL));
loc_82A29E48:
	// li r9,20
	ctx.r9.s64 = 20;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// b 0x82a29e5c
	goto loc_82A29E5C;
loc_82A29E54:
	// lvx128 v62,r0,r5
	simd::store_shuffled(ctx.v62, simd::load_and_shuffle(base + ((ctx.r5.u32) & ~0xF), VectorMaskL));
	// lvx128 v63,r0,r31
	simd::store_shuffled(ctx.v63, simd::load_and_shuffle(base + ((ctx.r31.u32) & ~0xF), VectorMaskL));
loc_82A29E5C:
	// vaddfp128 v53,v60,v61
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v53.f32, _mm_add_ps(_mm_load_ps(ctx.v60.f32), _mm_load_ps(ctx.v61.f32)));
	// vmsum3fp128 v52,v60,v57
	_mm_store_ps(ctx.v52.f32, _mm_dp_ps(_mm_load_ps(ctx.v60.f32), _mm_load_ps(ctx.v57.f32), 0xEF));
	// vmsum3fp128 v60,v60,v56
	_mm_store_ps(ctx.v60.f32, _mm_dp_ps(_mm_load_ps(ctx.v60.f32), _mm_load_ps(ctx.v56.f32), 0xEF));
	// addi r9,r1,-80
	ctx.r9.s64 = ctx.r1.s64 + -80;
	// li r29,16
	ctx.r29.s64 = 16;
	// vaddfp128 v51,v53,v61
	_mm_store_ps(ctx.v51.f32, _mm_add_ps(_mm_load_ps(ctx.v53.f32), _mm_load_ps(ctx.v61.f32)));
	// vmsum3fp128 v50,v53,v57
	_mm_store_ps(ctx.v50.f32, _mm_dp_ps(_mm_load_ps(ctx.v53.f32), _mm_load_ps(ctx.v57.f32), 0xEF));
	// vmsum3fp128 v53,v53,v56
	_mm_store_ps(ctx.v53.f32, _mm_dp_ps(_mm_load_ps(ctx.v53.f32), _mm_load_ps(ctx.v56.f32), 0xEF));
	// vmaxfp128 v52,v63,v52
	_mm_store_ps(ctx.v52.f32, _mm_max_ps(_mm_load_ps(ctx.v63.f32), _mm_load_ps(ctx.v52.f32)));
	// vmaxfp128 v60,v63,v60
	_mm_store_ps(ctx.v60.f32, _mm_max_ps(_mm_load_ps(ctx.v63.f32), _mm_load_ps(ctx.v60.f32)));
	// vaddfp128 v49,v51,v61
	_mm_store_ps(ctx.v49.f32, _mm_add_ps(_mm_load_ps(ctx.v51.f32), _mm_load_ps(ctx.v61.f32)));
	// vmsum3fp128 v48,v51,v57
	_mm_store_ps(ctx.v48.f32, _mm_dp_ps(_mm_load_ps(ctx.v51.f32), _mm_load_ps(ctx.v57.f32), 0xEF));
	// vmsum3fp128 v51,v51,v56
	_mm_store_ps(ctx.v51.f32, _mm_dp_ps(_mm_load_ps(ctx.v51.f32), _mm_load_ps(ctx.v56.f32), 0xEF));
	// vmaxfp128 v50,v63,v50
	_mm_store_ps(ctx.v50.f32, _mm_max_ps(_mm_load_ps(ctx.v63.f32), _mm_load_ps(ctx.v50.f32)));
	// vminfp128 v47,v58,v60
	_mm_store_ps(ctx.v47.f32, _mm_min_ps(_mm_load_ps(ctx.v58.f32), _mm_load_ps(ctx.v60.f32)));
	// vmaxfp128 v53,v63,v53
	_mm_store_ps(ctx.v53.f32, _mm_max_ps(_mm_load_ps(ctx.v63.f32), _mm_load_ps(ctx.v53.f32)));
	// vminfp128 v52,v59,v52
	_mm_store_ps(ctx.v52.f32, _mm_min_ps(_mm_load_ps(ctx.v59.f32), _mm_load_ps(ctx.v52.f32)));
	// vmsum3fp128 v46,v49,v57
	_mm_store_ps(ctx.v46.f32, _mm_dp_ps(_mm_load_ps(ctx.v49.f32), _mm_load_ps(ctx.v57.f32), 0xEF));
	// vaddfp128 v60,v49,v61
	_mm_store_ps(ctx.v60.f32, _mm_add_ps(_mm_load_ps(ctx.v49.f32), _mm_load_ps(ctx.v61.f32)));
	// vmsum3fp128 v49,v49,v56
	_mm_store_ps(ctx.v49.f32, _mm_dp_ps(_mm_load_ps(ctx.v49.f32), _mm_load_ps(ctx.v56.f32), 0xEF));
	// vmaxfp128 v48,v63,v48
	_mm_store_ps(ctx.v48.f32, _mm_max_ps(_mm_load_ps(ctx.v63.f32), _mm_load_ps(ctx.v48.f32)));
	// vmaxfp128 v51,v63,v51
	_mm_store_ps(ctx.v51.f32, _mm_max_ps(_mm_load_ps(ctx.v63.f32), _mm_load_ps(ctx.v51.f32)));
	// vminfp128 v50,v59,v50
	_mm_store_ps(ctx.v50.f32, _mm_min_ps(_mm_load_ps(ctx.v59.f32), _mm_load_ps(ctx.v50.f32)));
	// vminfp128 v53,v58,v53
	_mm_store_ps(ctx.v53.f32, _mm_min_ps(_mm_load_ps(ctx.v58.f32), _mm_load_ps(ctx.v53.f32)));
	// vrfiz128 v12,v47
	_mm_store_ps(ctx.v12.f32, _mm_round_ps(_mm_load_ps(ctx.v47.f32), _MM_FROUND_TO_ZERO | _MM_FROUND_NO_EXC));
	// vrfiz128 v13,v52
	_mm_store_ps(ctx.v13.f32, _mm_round_ps(_mm_load_ps(ctx.v52.f32), _MM_FROUND_TO_ZERO | _MM_FROUND_NO_EXC));
	// vmaxfp128 v46,v63,v46
	_mm_store_ps(ctx.v46.f32, _mm_max_ps(_mm_load_ps(ctx.v63.f32), _mm_load_ps(ctx.v46.f32)));
	// vmaxfp128 v49,v63,v49
	_mm_store_ps(ctx.v49.f32, _mm_max_ps(_mm_load_ps(ctx.v63.f32), _mm_load_ps(ctx.v49.f32)));
	// vminfp128 v48,v59,v48
	_mm_store_ps(ctx.v48.f32, _mm_min_ps(_mm_load_ps(ctx.v59.f32), _mm_load_ps(ctx.v48.f32)));
	// vminfp128 v51,v58,v51
	_mm_store_ps(ctx.v51.f32, _mm_min_ps(_mm_load_ps(ctx.v58.f32), _mm_load_ps(ctx.v51.f32)));
	// vrfiz128 v11,v50
	_mm_store_ps(ctx.v11.f32, _mm_round_ps(_mm_load_ps(ctx.v50.f32), _MM_FROUND_TO_ZERO | _MM_FROUND_NO_EXC));
	// vrfiz128 v10,v53
	_mm_store_ps(ctx.v10.f32, _mm_round_ps(_mm_load_ps(ctx.v53.f32), _MM_FROUND_TO_ZERO | _MM_FROUND_NO_EXC));
	// vsubfp128 v47,v47,v12
	_mm_store_ps(ctx.v47.f32, _mm_sub_ps(_mm_load_ps(ctx.v47.f32), _mm_load_ps(ctx.v12.f32)));
	// vmaddfp v9,v0,v12,v13
	_mm_store_ps(ctx.v9.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v12.f32)), _mm_load_ps(ctx.v13.f32)));
	// vsubfp128 v52,v52,v13
	_mm_store_ps(ctx.v52.f32, _mm_sub_ps(_mm_load_ps(ctx.v52.f32), _mm_load_ps(ctx.v13.f32)));
	// vminfp128 v46,v59,v46
	_mm_store_ps(ctx.v46.f32, _mm_min_ps(_mm_load_ps(ctx.v59.f32), _mm_load_ps(ctx.v46.f32)));
	// vminfp128 v49,v58,v49
	_mm_store_ps(ctx.v49.f32, _mm_min_ps(_mm_load_ps(ctx.v58.f32), _mm_load_ps(ctx.v49.f32)));
	// vrfiz128 v13,v48
	_mm_store_ps(ctx.v13.f32, _mm_round_ps(_mm_load_ps(ctx.v48.f32), _MM_FROUND_TO_ZERO | _MM_FROUND_NO_EXC));
	// vrfiz128 v12,v51
	_mm_store_ps(ctx.v12.f32, _mm_round_ps(_mm_load_ps(ctx.v51.f32), _MM_FROUND_TO_ZERO | _MM_FROUND_NO_EXC));
	// vsubfp128 v50,v50,v11
	_mm_store_ps(ctx.v50.f32, _mm_sub_ps(_mm_load_ps(ctx.v50.f32), _mm_load_ps(ctx.v11.f32)));
	// vsubfp128 v53,v53,v10
	_mm_store_ps(ctx.v53.f32, _mm_sub_ps(_mm_load_ps(ctx.v53.f32), _mm_load_ps(ctx.v10.f32)));
	// vmaddfp v8,v0,v10,v11
	_mm_store_ps(ctx.v8.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v10.f32)), _mm_load_ps(ctx.v11.f32)));
	// vor128 v43,v47,v47
	_mm_store_si128((__m128i*)ctx.v43.u8, _mm_load_si128((__m128i*)ctx.v47.u8));
	// vsubfp128 v47,v62,v47
	_mm_store_ps(ctx.v47.f32, _mm_sub_ps(_mm_load_ps(ctx.v62.f32), _mm_load_ps(ctx.v47.f32)));
	// vor128 v44,v52,v52
	_mm_store_si128((__m128i*)ctx.v44.u8, _mm_load_si128((__m128i*)ctx.v52.u8));
	// vsubfp128 v52,v62,v52
	_mm_store_ps(ctx.v52.f32, _mm_sub_ps(_mm_load_ps(ctx.v62.f32), _mm_load_ps(ctx.v52.f32)));
	// vcfpsxws128 v45,v9,0
	_mm_store_si128((__m128i*)ctx.v45.s32, _mm_vctsxs(_mm_load_ps(ctx.v9.f32)));
	// vrfiz128 v11,v46
	_mm_store_ps(ctx.v11.f32, _mm_round_ps(_mm_load_ps(ctx.v46.f32), _MM_FROUND_TO_ZERO | _MM_FROUND_NO_EXC));
	// vrfiz128 v10,v49
	_mm_store_ps(ctx.v10.f32, _mm_round_ps(_mm_load_ps(ctx.v49.f32), _MM_FROUND_TO_ZERO | _MM_FROUND_NO_EXC));
	// vsubfp128 v48,v48,v13
	_mm_store_ps(ctx.v48.f32, _mm_sub_ps(_mm_load_ps(ctx.v48.f32), _mm_load_ps(ctx.v13.f32)));
	// vmaddfp v13,v0,v12,v13
	_mm_store_ps(ctx.v13.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v12.f32)), _mm_load_ps(ctx.v13.f32)));
	// vor128 v42,v50,v50
	_mm_store_si128((__m128i*)ctx.v42.u8, _mm_load_si128((__m128i*)ctx.v50.u8));
	// vsubfp128 v50,v62,v50
	_mm_store_ps(ctx.v50.f32, _mm_sub_ps(_mm_load_ps(ctx.v62.f32), _mm_load_ps(ctx.v50.f32)));
	// vsubfp128 v51,v51,v12
	_mm_store_ps(ctx.v51.f32, _mm_sub_ps(_mm_load_ps(ctx.v51.f32), _mm_load_ps(ctx.v12.f32)));
	// vor128 v40,v53,v53
	_mm_store_si128((__m128i*)ctx.v40.u8, _mm_load_si128((__m128i*)ctx.v53.u8));
	// vcfpsxws128 v41,v8,0
	_mm_store_si128((__m128i*)ctx.v41.s32, _mm_vctsxs(_mm_load_ps(ctx.v8.f32)));
	// vrlimi128 v43,v47,12,0
	_mm_store_ps(ctx.v43.f32, _mm_blend_ps(_mm_load_ps(ctx.v43.f32), _mm_permute_ps(_mm_load_ps(ctx.v47.f32), 228), 12));
	// vsubfp128 v53,v62,v53
	_mm_store_ps(ctx.v53.f32, _mm_sub_ps(_mm_load_ps(ctx.v62.f32), _mm_load_ps(ctx.v53.f32)));
	// vrlimi128 v44,v52,10,0
	_mm_store_ps(ctx.v44.f32, _mm_blend_ps(_mm_load_ps(ctx.v44.f32), _mm_permute_ps(_mm_load_ps(ctx.v52.f32), 228), 10));
	// vsubfp128 v52,v46,v11
	_mm_store_ps(ctx.v52.f32, _mm_sub_ps(_mm_load_ps(ctx.v46.f32), _mm_load_ps(ctx.v11.f32)));
	// vmaddfp v12,v0,v10,v11
	_mm_store_ps(ctx.v12.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v10.f32)), _mm_load_ps(ctx.v11.f32)));
	// vsubfp128 v47,v62,v48
	_mm_store_ps(ctx.v47.f32, _mm_sub_ps(_mm_load_ps(ctx.v62.f32), _mm_load_ps(ctx.v48.f32)));
	// vsubfp128 v49,v49,v10
	_mm_store_ps(ctx.v49.f32, _mm_sub_ps(_mm_load_ps(ctx.v49.f32), _mm_load_ps(ctx.v10.f32)));
	// vcfpsxws128 v46,v13,0
	_mm_store_si128((__m128i*)ctx.v46.s32, _mm_vctsxs(_mm_load_ps(ctx.v13.f32)));
	// vrlimi128 v42,v50,10,0
	_mm_store_ps(ctx.v42.f32, _mm_blend_ps(_mm_load_ps(ctx.v42.f32), _mm_permute_ps(_mm_load_ps(ctx.v50.f32), 228), 10));
	// vmulfp128 v50,v44,v43
	_mm_store_ps(ctx.v50.f32, _mm_mul_ps(_mm_load_ps(ctx.v44.f32), _mm_load_ps(ctx.v43.f32)));
	// vsubfp128 v39,v62,v51
	_mm_store_ps(ctx.v39.f32, _mm_sub_ps(_mm_load_ps(ctx.v62.f32), _mm_load_ps(ctx.v51.f32)));
	// vrlimi128 v45,v41,4,0
	_mm_store_ps(ctx.v45.f32, _mm_blend_ps(_mm_load_ps(ctx.v45.f32), _mm_permute_ps(_mm_load_ps(ctx.v41.f32), 228), 4));
	// vrlimi128 v40,v53,12,0
	_mm_store_ps(ctx.v40.f32, _mm_blend_ps(_mm_load_ps(ctx.v40.f32), _mm_permute_ps(_mm_load_ps(ctx.v53.f32), 228), 12));
	// vmulfp128 v53,v42,v40
	_mm_store_ps(ctx.v53.f32, _mm_mul_ps(_mm_load_ps(ctx.v42.f32), _mm_load_ps(ctx.v40.f32)));
	// vcfpsxws128 v44,v12,0
	_mm_store_si128((__m128i*)ctx.v44.s32, _mm_vctsxs(_mm_load_ps(ctx.v12.f32)));
	// vrlimi128 v48,v47,10,0
	_mm_store_ps(ctx.v48.f32, _mm_blend_ps(_mm_load_ps(ctx.v48.f32), _mm_permute_ps(_mm_load_ps(ctx.v47.f32), 228), 10));
	// vsubfp128 v47,v62,v49
	_mm_store_ps(ctx.v47.f32, _mm_sub_ps(_mm_load_ps(ctx.v62.f32), _mm_load_ps(ctx.v49.f32)));
	// vrlimi128 v45,v46,2,0
	_mm_store_ps(ctx.v45.f32, _mm_blend_ps(_mm_load_ps(ctx.v45.f32), _mm_permute_ps(_mm_load_ps(ctx.v46.f32), 228), 2));
	// vsubfp128 v62,v62,v52
	_mm_store_ps(ctx.v62.f32, _mm_sub_ps(_mm_load_ps(ctx.v62.f32), _mm_load_ps(ctx.v52.f32)));
	// vrlimi128 v51,v39,12,0
	_mm_store_ps(ctx.v51.f32, _mm_blend_ps(_mm_load_ps(ctx.v51.f32), _mm_permute_ps(_mm_load_ps(ctx.v39.f32), 228), 12));
	// vmulfp128 v51,v48,v51
	_mm_store_ps(ctx.v51.f32, _mm_mul_ps(_mm_load_ps(ctx.v48.f32), _mm_load_ps(ctx.v51.f32)));
	// vrlimi128 v45,v44,1,0
	_mm_store_ps(ctx.v45.f32, _mm_blend_ps(_mm_load_ps(ctx.v45.f32), _mm_permute_ps(_mm_load_ps(ctx.v44.f32), 228), 1));
	// vrlimi128 v49,v47,12,0
	_mm_store_ps(ctx.v49.f32, _mm_blend_ps(_mm_load_ps(ctx.v49.f32), _mm_permute_ps(_mm_load_ps(ctx.v47.f32), 228), 12));
	// stvx128 v45,r0,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v45.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lwz r9,-76(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + -76);
	// lwz r8,-80(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + -80);
	// add r27,r9,r4
	ctx.r27.u64 = ctx.r9.u64 + ctx.r4.u64;
	// lvlx128 v46,r9,r3
	temp.u32 = ctx.r9.u32 + ctx.r3.u32;
	_mm_store_si128((__m128i*)ctx.v46.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lwz r7,-72(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + -72);
	// add r28,r8,r4
	ctx.r28.u64 = ctx.r8.u64 + ctx.r4.u64;
	// lwz r6,-68(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + -68);
	// add r26,r8,r10
	ctx.r26.u64 = ctx.r8.u64 + ctx.r10.u64;
	// vrlimi128 v52,v62,10,0
	_mm_store_ps(ctx.v52.f32, _mm_blend_ps(_mm_load_ps(ctx.v52.f32), _mm_permute_ps(_mm_load_ps(ctx.v62.f32), 228), 10));
	// lvlx128 v47,r8,r3
	temp.u32 = ctx.r8.u32 + ctx.r3.u32;
	_mm_store_si128((__m128i*)ctx.v47.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r8,r8,16
	ctx.r8.s64 = ctx.r8.s64 + 16;
	// lvlx128 v43,r27,r3
	temp.u32 = ctx.r27.u32 + ctx.r3.u32;
	_mm_store_si128((__m128i*)ctx.v43.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// add r27,r7,r4
	ctx.r27.u64 = ctx.r7.u64 + ctx.r4.u64;
	// lvlx128 v48,r28,r3
	temp.u32 = ctx.r28.u32 + ctx.r3.u32;
	_mm_store_si128((__m128i*)ctx.v48.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// add r28,r9,r10
	ctx.r28.u64 = ctx.r9.u64 + ctx.r10.u64;
	// addi r9,r9,16
	ctx.r9.s64 = ctx.r9.s64 + 16;
	// lvrx128 v41,r26,r3
	temp.u32 = ctx.r26.u32 + ctx.r3.u32;
	_mm_store_si128((__m128i*)ctx.v41.u8, temp.u32 & 0xF ? _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : _mm_setzero_si128());
	// vor128 v48,v48,v41
	_mm_store_si128((__m128i*)ctx.v48.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v48.u8), _mm_load_si128((__m128i*)ctx.v41.u8)));
	// lvlx128 v45,r7,r3
	temp.u32 = ctx.r7.u32 + ctx.r3.u32;
	_mm_store_si128((__m128i*)ctx.v45.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvrx128 v41,r8,r3
	temp.u32 = ctx.r8.u32 + ctx.r3.u32;
	_mm_store_si128((__m128i*)ctx.v41.u8, temp.u32 & 0xF ? _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : _mm_setzero_si128());
	// add r8,r6,r4
	ctx.r8.u64 = ctx.r6.u64 + ctx.r4.u64;
	// vor128 v47,v47,v41
	_mm_store_si128((__m128i*)ctx.v47.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v47.u8), _mm_load_si128((__m128i*)ctx.v41.u8)));
	// lvlx128 v41,r27,r3
	temp.u32 = ctx.r27.u32 + ctx.r3.u32;
	_mm_store_si128((__m128i*)ctx.v41.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvrx128 v42,r28,r3
	temp.u32 = ctx.r28.u32 + ctx.r3.u32;
	_mm_store_si128((__m128i*)ctx.v42.u8, temp.u32 & 0xF ? _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : _mm_setzero_si128());
	// add r28,r7,r10
	ctx.r28.u64 = ctx.r7.u64 + ctx.r10.u64;
	// vor128 v43,v43,v42
	_mm_store_si128((__m128i*)ctx.v43.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v43.u8), _mm_load_si128((__m128i*)ctx.v42.u8)));
	// lvrx128 v42,r9,r3
	temp.u32 = ctx.r9.u32 + ctx.r3.u32;
	_mm_store_si128((__m128i*)ctx.v42.u8, temp.u32 & 0xF ? _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : _mm_setzero_si128());
	// vor128 v46,v46,v42
	_mm_store_si128((__m128i*)ctx.v46.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v46.u8), _mm_load_si128((__m128i*)ctx.v42.u8)));
	// addi r9,r7,16
	ctx.r9.s64 = ctx.r7.s64 + 16;
	// vrlimi128 v48,v63,1,0
	_mm_store_ps(ctx.v48.f32, _mm_blend_ps(_mm_load_ps(ctx.v48.f32), _mm_permute_ps(_mm_load_ps(ctx.v63.f32), 228), 1));
	// add r7,r6,r10
	ctx.r7.u64 = ctx.r6.u64 + ctx.r10.u64;
	// vmulfp128 v52,v52,v49
	_mm_store_ps(ctx.v52.f32, _mm_mul_ps(_mm_load_ps(ctx.v52.f32), _mm_load_ps(ctx.v49.f32)));
	// lvlx128 v44,r6,r3
	temp.u32 = ctx.r6.u32 + ctx.r3.u32;
	_mm_store_si128((__m128i*)ctx.v44.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vrlimi128 v43,v63,1,0
	_mm_store_ps(ctx.v43.f32, _mm_blend_ps(_mm_load_ps(ctx.v43.f32), _mm_permute_ps(_mm_load_ps(ctx.v63.f32), 228), 1));
	// lvrx128 v42,r28,r3
	temp.u32 = ctx.r28.u32 + ctx.r3.u32;
	_mm_store_si128((__m128i*)ctx.v42.u8, temp.u32 & 0xF ? _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : _mm_setzero_si128());
	// vor128 v42,v41,v42
	_mm_store_si128((__m128i*)ctx.v42.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v41.u8), _mm_load_si128((__m128i*)ctx.v42.u8)));
	// vperm128 v48,v47,v48,v7
	_mm_store_si128((__m128i*)ctx.v48.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v47.u8), _mm_load_si128((__m128i*)ctx.v48.u8), _mm_load_si128((__m128i*)ctx.v7.u8)));
	// lvrx128 v49,r7,r3
	temp.u32 = ctx.r7.u32 + ctx.r3.u32;
	_mm_store_si128((__m128i*)ctx.v49.u8, temp.u32 & 0xF ? _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : _mm_setzero_si128());
	// vperm128 v62,v46,v43,v7
	_mm_store_si128((__m128i*)ctx.v62.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v46.u8), _mm_load_si128((__m128i*)ctx.v43.u8), _mm_load_si128((__m128i*)ctx.v7.u8)));
	// lvrx128 v46,r9,r3
	temp.u32 = ctx.r9.u32 + ctx.r3.u32;
	_mm_store_si128((__m128i*)ctx.v46.u8, temp.u32 & 0xF ? _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : _mm_setzero_si128());
	// vor128 v47,v45,v46
	_mm_store_si128((__m128i*)ctx.v47.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v45.u8), _mm_load_si128((__m128i*)ctx.v46.u8)));
	// addi r9,r6,16
	ctx.r9.s64 = ctx.r6.s64 + 16;
	// lvlx128 v46,r8,r3
	temp.u32 = ctx.r8.u32 + ctx.r3.u32;
	_mm_store_si128((__m128i*)ctx.v46.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vrlimi128 v42,v63,1,0
	_mm_store_ps(ctx.v42.f32, _mm_blend_ps(_mm_load_ps(ctx.v42.f32), _mm_permute_ps(_mm_load_ps(ctx.v63.f32), 228), 1));
	// vor128 v49,v46,v49
	_mm_store_si128((__m128i*)ctx.v49.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v46.u8), _mm_load_si128((__m128i*)ctx.v49.u8)));
	// vcsxwfp128 v48,v48,0
	_mm_store_ps(ctx.v48.f32, _mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v48.u32)));
	// vcsxwfp128 v62,v62,0
	_mm_store_ps(ctx.v62.f32, _mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v62.u32)));
	// lvrx128 v46,r9,r3
	temp.u32 = ctx.r9.u32 + ctx.r3.u32;
	_mm_store_si128((__m128i*)ctx.v46.u8, temp.u32 & 0xF ? _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : _mm_setzero_si128());
	// vperm128 v47,v47,v42,v7
	_mm_store_si128((__m128i*)ctx.v47.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v47.u8), _mm_load_si128((__m128i*)ctx.v42.u8), _mm_load_si128((__m128i*)ctx.v7.u8)));
	// vrlimi128 v49,v63,1,0
	_mm_store_ps(ctx.v49.f32, _mm_blend_ps(_mm_load_ps(ctx.v49.f32), _mm_permute_ps(_mm_load_ps(ctx.v63.f32), 228), 1));
	// vor128 v46,v44,v46
	_mm_store_si128((__m128i*)ctx.v46.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v44.u8), _mm_load_si128((__m128i*)ctx.v46.u8)));
	// vcsxwfp128 v63,v47,0
	_mm_store_ps(ctx.v63.f32, _mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v47.u32)));
	// vperm128 v49,v46,v49,v7
	_mm_store_si128((__m128i*)ctx.v49.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v46.u8), _mm_load_si128((__m128i*)ctx.v49.u8), _mm_load_si128((__m128i*)ctx.v7.u8)));
	// vmsum4fp128 v62,v53,v62
	_mm_store_ps(ctx.v62.f32, _mm_dp_ps(_mm_load_ps(ctx.v53.f32), _mm_load_ps(ctx.v62.f32), 0xFF));
	// vmsum4fp128 v53,v50,v48
	_mm_store_ps(ctx.v53.f32, _mm_dp_ps(_mm_load_ps(ctx.v50.f32), _mm_load_ps(ctx.v48.f32), 0xFF));
	// vcsxwfp128 v50,v49,0
	_mm_store_ps(ctx.v50.f32, _mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v49.u32)));
	// vmsum4fp128 v63,v51,v63
	_mm_store_ps(ctx.v63.f32, _mm_dp_ps(_mm_load_ps(ctx.v51.f32), _mm_load_ps(ctx.v63.f32), 0xFF));
	// vmsum4fp128 v52,v52,v50
	_mm_store_ps(ctx.v52.f32, _mm_dp_ps(_mm_load_ps(ctx.v52.f32), _mm_load_ps(ctx.v50.f32), 0xFF));
	// vrlimi128 v53,v62,4,0
	_mm_store_ps(ctx.v53.f32, _mm_blend_ps(_mm_load_ps(ctx.v53.f32), _mm_permute_ps(_mm_load_ps(ctx.v62.f32), 228), 4));
	// vrlimi128 v53,v63,2,0
	_mm_store_ps(ctx.v53.f32, _mm_blend_ps(_mm_load_ps(ctx.v53.f32), _mm_permute_ps(_mm_load_ps(ctx.v63.f32), 228), 2));
	// vrlimi128 v53,v52,1,0
	_mm_store_ps(ctx.v53.f32, _mm_blend_ps(_mm_load_ps(ctx.v53.f32), _mm_permute_ps(_mm_load_ps(ctx.v52.f32), 228), 1));
	// stvlx128 v53,r0,r11
	ea = ctx.r11.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v53.u8[15 - i]);
	// stvrx128 v53,r11,r29
	ea = ctx.r11.u32 + ctx.r29.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		PPC_STORE_U8(ea - i - 1, ctx.v53.u8[i]);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// bdnz 0x82a29e54
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82A29E54;
	// vrlimi128 v60,v54,8,0
	_mm_store_ps(ctx.v60.f32, _mm_blend_ps(_mm_load_ps(ctx.v60.f32), _mm_permute_ps(_mm_load_ps(ctx.v54.f32), 228), 8));
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// vaddfp128 v60,v60,v55
	_mm_store_ps(ctx.v60.f32, _mm_add_ps(_mm_load_ps(ctx.v60.f32), _mm_load_ps(ctx.v55.f32)));
	// bne 0x82a29e40
	if (!ctx.cr0.eq) goto loc_82A29E40;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82fa76c0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A2A0B8"))) PPC_WEAK_FUNC(sub_82A2A0B8);
PPC_FUNC_IMPL(__imp__sub_82A2A0B8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// addi r3,r11,-13232
	ctx.r3.s64 = ctx.r11.s64 + -13232;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A2A0C4"))) PPC_WEAK_FUNC(sub_82A2A0C4);
PPC_FUNC_IMPL(__imp__sub_82A2A0C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A2A0C8"))) PPC_WEAK_FUNC(sub_82A2A0C8);
PPC_FUNC_IMPL(__imp__sub_82A2A0C8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// addi r3,r11,-13216
	ctx.r3.s64 = ctx.r11.s64 + -13216;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A2A0D4"))) PPC_WEAK_FUNC(sub_82A2A0D4);
PPC_FUNC_IMPL(__imp__sub_82A2A0D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A2A0D8"))) PPC_WEAK_FUNC(sub_82A2A0D8);
PPC_FUNC_IMPL(__imp__sub_82A2A0D8) {
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
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,-14352
	ctx.r11.s64 = ctx.r11.s64 + -14352;
	// clrlwi. r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// beq 0x82a2a120
	if (ctx.cr0.eq) goto loc_82A2A120;
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// lis r10,8
	ctx.r10.s64 = 524288;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// ori r10,r10,63156
	ctx.r10.u64 = ctx.r10.u64 | 63156;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,24028(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24028);
	// lwzx r3,r11,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// bl 0x82a81d88
	ctx.lr = 0x82A2A120;
	sub_82A81D88(ctx, base);
loc_82A2A120:
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

__attribute__((alias("__imp__sub_82A2A138"))) PPC_WEAK_FUNC(sub_82A2A138);
PPC_FUNC_IMPL(__imp__sub_82A2A138) {
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
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,-14344
	ctx.r11.s64 = ctx.r11.s64 + -14344;
	// clrlwi. r10,r4,31
	ctx.r10.u64 = ctx.r4.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// beq 0x82a2a180
	if (ctx.cr0.eq) goto loc_82A2A180;
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// lis r10,8
	ctx.r10.s64 = 524288;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// ori r10,r10,63156
	ctx.r10.u64 = ctx.r10.u64 | 63156;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,24028(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24028);
	// lwzx r3,r11,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// bl 0x82a81d88
	ctx.lr = 0x82A2A180;
	sub_82A81D88(ctx, base);
loc_82A2A180:
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

__attribute__((alias("__imp__sub_82A2A198"))) PPC_WEAK_FUNC(sub_82A2A198);
PPC_FUNC_IMPL(__imp__sub_82A2A198) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lis r8,-32248
	ctx.r8.s64 = -2113404928;
	// addi r7,r10,-14328
	ctx.r7.s64 = ctx.r10.s64 + -14328;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r7,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r7.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r9,4
	ctx.r9.s64 = 4;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// addi r8,r8,-14336
	ctx.r8.s64 = ctx.r8.s64 + -14336;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// li r7,2
	ctx.r7.s64 = 2;
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// stb r11,16(r3)
	PPC_STORE_U8(ctx.r3.u32 + 16, ctx.r11.u8);
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// stw r8,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r8.u32);
	// stw r10,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r10.u32);
	// stw r11,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r11.u32);
	// stw r11,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r11.u32);
	// stw r10,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r10.u32);
	// stw r10,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r10.u32);
	// stw r11,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, ctx.r11.u32);
	// stw r11,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, ctx.r11.u32);
	// stw r11,64(r3)
	PPC_STORE_U32(ctx.r3.u32 + 64, ctx.r11.u32);
	// stw r9,68(r3)
	PPC_STORE_U32(ctx.r3.u32 + 68, ctx.r9.u32);
	// stw r9,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r9.u32);
	// stw r7,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r7.u32);
	// stw r11,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A2A208"))) PPC_WEAK_FUNC(sub_82A2A208);
PPC_FUNC_IMPL(__imp__sub_82A2A208) {
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
	// bl 0x82a2ea98
	ctx.lr = 0x82A2A228;
	sub_82A2EA98(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82a2a258
	if (ctx.cr0.eq) goto loc_82A2A258;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82a2a258
	if (ctx.cr6.eq) goto loc_82A2A258;
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// lis r10,8
	ctx.r10.s64 = 524288;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// ori r10,r10,63156
	ctx.r10.u64 = ctx.r10.u64 | 63156;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,24028(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24028);
	// lwzx r3,r11,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// bl 0x82a81d88
	ctx.lr = 0x82A2A258;
	sub_82A81D88(ctx, base);
loc_82A2A258:
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

__attribute__((alias("__imp__sub_82A2A274"))) PPC_WEAK_FUNC(sub_82A2A274);
PPC_FUNC_IMPL(__imp__sub_82A2A274) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A2A278"))) PPC_WEAK_FUNC(sub_82A2A278);
PPC_FUNC_IMPL(__imp__sub_82A2A278) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x82A2A280;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r5,0(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r11,8
	ctx.r11.s64 = 524288;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// lis r29,-31963
	ctx.r29.s64 = -2094727168;
	// ori r30,r11,63156
	ctx.r30.u64 = ctx.r11.u64 | 63156;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82a2a2bc
	if (ctx.cr6.eq) goto loc_82A2A2BC;
	// lwz r11,24028(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24028);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwzx r3,r11,r30
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// bl 0x82a81d88
	ctx.lr = 0x82A2A2B4;
	sub_82A81D88(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_82A2A2BC:
	// lis r11,16383
	ctx.r11.s64 = 1073676288;
	// rlwinm r5,r28,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// ori r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 65535;
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82a2a2d4
	if (!ctx.cr6.gt) goto loc_82A2A2D4;
	// li r5,-1
	ctx.r5.s64 = -1;
loc_82A2A2D4:
	// lwz r11,24028(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24028);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwzx r3,r11,r30
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// bl 0x82a81490
	ctx.lr = 0x82A2A2E4;
	sub_82A81490(ctx, base);
	// addic r10,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r10.s64 = ctx.r3.s64 + -1;
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// lis r11,-32761
	ctx.r11.s64 = -2147024896;
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// ori r11,r11,14
	ctx.r11.u64 = ctx.r11.u64 | 14;
	// and r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 & ctx.r11.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A2A304"))) PPC_WEAK_FUNC(sub_82A2A304);
PPC_FUNC_IMPL(__imp__sub_82A2A304) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A2A308"))) PPC_WEAK_FUNC(sub_82A2A308);
PPC_FUNC_IMPL(__imp__sub_82A2A308) {
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
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// addi r11,r11,-14328
	ctx.r11.s64 = ctx.r11.s64 + -14328;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x82a27f68
	ctx.lr = 0x82A2A330;
	sub_82A27F68(ctx, base);
	// addi r3,r31,72
	ctx.r3.s64 = ctx.r31.s64 + 72;
	// bl 0x82a35780
	ctx.lr = 0x82A2A338;
	sub_82A35780(ctx, base);
	// addi r3,r31,20
	ctx.r3.s64 = ctx.r31.s64 + 20;
	// bl 0x82a2ea98
	ctx.lr = 0x82A2A340;
	sub_82A2EA98(ctx, base);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// addi r11,r11,-14352
	ctx.r11.s64 = ctx.r11.s64 + -14352;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82A2A360"))) PPC_WEAK_FUNC(sub_82A2A360);
PPC_FUNC_IMPL(__imp__sub_82A2A360) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x82A2A368;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r30,r3,4
	ctx.r30.s64 = ctx.r3.s64 + 4;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x82a27f68
	ctx.lr = 0x82A2A380;
	sub_82A27F68(ctx, base);
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// lis r10,8
	ctx.r10.s64 = 524288;
	// li r5,32
	ctx.r5.s64 = 32;
	// ori r10,r10,63156
	ctx.r10.u64 = ctx.r10.u64 | 63156;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,24028(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24028);
	// lwzx r3,r11,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// bl 0x82a81490
	ctx.lr = 0x82A2A3A0;
	sub_82A81490(ctx, base);
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82a2a3b4
	if (ctx.cr0.eq) goto loc_82A2A3B4;
	// bl 0x82a2ef30
	ctx.lr = 0x82A2A3B0;
	sub_82A2EF30(ctx, base);
	// b 0x82a2a3b8
	goto loc_82A2A3B8;
loc_82A2A3B4:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
loc_82A2A3B8:
	// stw r3,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82a2a3d0
	if (!ctx.cr6.eq) goto loc_82A2A3D0;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x82a2a49c
	goto loc_82A2A49C;
loc_82A2A3D0:
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82a2f6e0
	ctx.lr = 0x82A2A3DC;
	sub_82A2F6E0(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bge 0x82a2a3fc
	if (!ctx.cr0.lt) goto loc_82A2A3FC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a27f68
	ctx.lr = 0x82A2A3EC;
	sub_82A27F68(ctx, base);
	// stw r28,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r28.u32);
	// stw r28,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r28.u32);
	// stb r28,16(r31)
	PPC_STORE_U8(ctx.r31.u32 + 16, ctx.r28.u8);
	// b 0x82a2a498
	goto loc_82A2A498;
loc_82A2A3FC:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x82a2efb0
	ctx.lr = 0x82A2A408;
	sub_82A2EFB0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82a2a498
	if (ctx.cr0.lt) goto loc_82A2A498;
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// std r10,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r10.u64);
	// lfd f0,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// fsqrts f0,f0
	ctx.f0.f64 = double(float(sqrt(ctx.f0.f64)));
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f0.f64));
	// stfd f0,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f0.u64);
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// ble cr6,0x82a2a498
	if (!ctx.cr6.gt) goto loc_82A2A498;
	// divwu r10,r10,r11
	ctx.r10.u32 = ctx.r10.u32 / ctx.r11.u32;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// stw r10,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r10.u32);
	// bne cr6,0x82a2a498
	if (!ctx.cr6.eq) goto loc_82A2A498;
	// addi r30,r31,20
	ctx.r30.s64 = ctx.r31.s64 + 20;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a2eaf8
	ctx.lr = 0x82A2A45C;
	sub_82A2EAF8(ctx, base);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,2
	ctx.r8.s64 = 2;
	// lwz r5,12(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r7,4
	ctx.r7.s64 = 4;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a2ebd0
	ctx.lr = 0x82A2A47C;
	sub_82A2EBD0(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r3,r31,72
	ctx.r3.s64 = ctx.r31.s64 + 72;
	// stb r11,16(r31)
	PPC_STORE_U8(ctx.r31.u32 + 16, ctx.r11.u8);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mullw r4,r11,r10
	ctx.r4.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// bl 0x82a2a278
	ctx.lr = 0x82A2A498;
	sub_82A2A278(ctx, base);
loc_82A2A498:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
loc_82A2A49C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A2A4A4"))) PPC_WEAK_FUNC(sub_82A2A4A4);
PPC_FUNC_IMPL(__imp__sub_82A2A4A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A2A4A8"))) PPC_WEAK_FUNC(sub_82A2A4A8);
PPC_FUNC_IMPL(__imp__sub_82A2A4A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa766c
	ctx.lr = 0x82A2A4B0;
	__savegprlr_25(ctx, base);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 16);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82a2a760
	if (ctx.cr0.eq) goto loc_82A2A760;
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r10,r10,-14336
	ctx.r10.s64 = ctx.r10.s64 + -14336;
	// stw r30,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r30.u32);
	// li r9,4
	ctx.r9.s64 = 4;
	// stw r11,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r11.u32);
	// stw r10,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r10.u32);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// stw r30,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r30.u32);
	// stw r30,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r30.u32);
	// stw r11,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r11.u32);
	// stw r11,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r11.u32);
	// stw r30,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r30.u32);
	// stw r30,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, ctx.r30.u32);
	// stw r30,204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 204, ctx.r30.u32);
	// stw r9,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r9.u32);
	// stw r11,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r11.u32);
	// stw r11,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r11.u32);
	// bl 0x82a2eaf8
	ctx.lr = 0x82A2A520;
	sub_82A2EAF8(ctx, base);
	// lwz r5,4(r27)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r4,8(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// mullw r6,r5,r29
	ctx.r6.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r29.s32);
	// subf r26,r11,r4
	ctx.r26.s64 = ctx.r4.s64 - ctx.r11.s64;
	// add r11,r6,r11
	ctx.r11.u64 = ctx.r6.u64 + ctx.r11.u64;
	// li r9,1
	ctx.r9.s64 = 1;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// li r7,1
	ctx.r7.s64 = 1;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// add r4,r11,r28
	ctx.r4.u64 = ctx.r11.u64 + ctx.r28.u64;
	// lwz r25,12(r27)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// subf r25,r5,r25
	ctx.r25.s64 = ctx.r25.s64 - ctx.r5.s64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// bl 0x82a2edd8
	ctx.lr = 0x82A2A564;
	sub_82A2EDD8(ctx, base);
	// addi r29,r31,20
	ctx.r29.s64 = ctx.r31.s64 + 20;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82a31da0
	ctx.lr = 0x82A2A578;
	sub_82A31DA0(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lfs f0,5184(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5184);
	ctx.f0.f64 = double(temp.f32);
	// ble cr6,0x82a2a5c8
	if (!ctx.cr6.gt) goto loc_82A2A5C8;
	// lwz r8,36(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// lwz r6,56(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lwz r7,40(r29)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + 40);
loc_82A2A59C:
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble cr6,0x82a2a5c0
	if (!ctx.cr6.gt) goto loc_82A2A5C0;
	// addi r9,r7,-4
	ctx.r9.s64 = ctx.r7.s64 + -4;
loc_82A2A5AC:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lfsu f13,4(r9)
	ctx.fpscr.disableFlushMode();
	ea = 4 + ctx.r9.u32;
	temp.u32 = PPC_LOAD_U32(ea);
	ctx.r9.u32 = ea;
	ctx.f13.f64 = double(temp.f32);
	// fadds f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// cmpw cr6,r10,r8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x82a2a5ac
	if (ctx.cr6.lt) goto loc_82A2A5AC;
loc_82A2A5C0:
	// add r7,r6,r7
	ctx.r7.u64 = ctx.r6.u64 + ctx.r7.u64;
	// bdnz 0x82a2a59c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82A2A59C;
loc_82A2A5C8:
	// lis r9,-32248
	ctx.r9.s64 = -2113404928;
	// lwz r8,12(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r6,8(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// lwz r10,72(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mullw r5,r8,r6
	ctx.r5.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r6.s32);
	// lfs f13,-14316(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -14316);
	ctx.f13.f64 = double(temp.f32);
	// fdivs f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 / ctx.f0.f64));
	// ble cr6,0x82a2a644
	if (!ctx.cr6.gt) goto loc_82A2A644;
	// addi r6,r10,-4
	ctx.r6.s64 = ctx.r10.s64 + -4;
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
loc_82A2A5F8:
	// lwz r8,36(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 36);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// lwz r9,40(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 40);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// mullw r8,r7,r8
	ctx.r8.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r8.s32);
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// ble cr6,0x82a2a634
	if (!ctx.cr6.gt) goto loc_82A2A634;
	// addi r9,r9,-4
	ctx.r9.s64 = ctx.r9.s64 + -4;
loc_82A2A618:
	// lfsu f13,4(r9)
	ctx.fpscr.disableFlushMode();
	ea = 4 + ctx.r9.u32;
	temp.u32 = PPC_LOAD_U32(ea);
	ctx.r9.u32 = ea;
	ctx.f13.f64 = double(temp.f32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfsu f13,4(r6)
	temp.f32 = float(ctx.f13.f64);
	ea = 4 + ctx.r6.u32;
	PPC_STORE_U32(ea, temp.u32);
	ctx.r6.u32 = ea;
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82a2a618
	if (ctx.cr6.lt) goto loc_82A2A618;
loc_82A2A634:
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// cmpw cr6,r7,r11
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82a2a5f8
	if (ctx.cr6.lt) goto loc_82A2A5F8;
loc_82A2A644:
	// li r8,10
	ctx.r8.s64 = 10;
	// lwz r4,72(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// bl 0x82a2f070
	ctx.lr = 0x82A2A65C;
	sub_82A2F070(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// blt 0x82a2a754
	if (ctx.cr0.lt) goto loc_82A2A754;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82a2f028
	ctx.lr = 0x82A2A670;
	sub_82A2F028(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne 0x82a2a754
	if (!ctx.cr0.eq) goto loc_82A2A754;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 10, ctx.xer);
	// blt cr6,0x82a2a688
	if (ctx.cr6.lt) goto loc_82A2A688;
	// li r11,10
	ctx.r11.s64 = 10;
loc_82A2A688:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a2a754
	if (ctx.cr6.eq) goto loc_82A2A754;
	// lis r9,-32248
	ctx.r9.s64 = -2113404928;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// addi r10,r1,108
	ctx.r10.s64 = ctx.r1.s64 + 108;
	// lfs f0,-14320(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -14320);
	ctx.f0.f64 = double(temp.f32);
loc_82A2A6A0:
	// lfs f13,4(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfsu f13,4(r10)
	temp.f32 = float(ctx.f13.f64);
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, temp.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x82a2a6a0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82A2A6A0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a2a754
	if (ctx.cr6.eq) goto loc_82A2A754;
	// extsw r10,r25
	ctx.r10.s64 = ctx.r25.s32;
	// extsw r9,r26
	ctx.r9.s64 = ctx.r26.s32;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f0,80(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// rlwinm r11,r11,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r9,r1,116
	ctx.r9.s64 = ctx.r1.s64 + 116;
	// frsp f12,f0
	ctx.f12.f64 = double(float(ctx.f0.f64));
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// addi r11,r9,-8
	ctx.r11.s64 = ctx.r9.s64 + -8;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
loc_82A2A6F8:
	// lwa r8,0(r27)
	ctx.r8.s64 = int32_t(PPC_LOAD_U32(ctx.r27.u32 + 0));
	// rlwinm r10,r30,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 31) & 0x7FFFFFFF;
	// std r8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// lfs f11,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f11.f64 = double(temp.f32);
	// rlwinm r9,r30,2,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFF8;
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// lfsu f0,8(r11)
	ea = 8 + ctx.r11.u32;
	temp.u32 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	ctx.f0.f64 = double(temp.f32);
	// add r9,r9,r27
	ctx.r9.u64 = ctx.r9.u64 + ctx.r27.u64;
	// addi r30,r30,2
	ctx.r30.s64 = ctx.r30.s64 + 2;
	// lfd f10,80(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f10,f10
	ctx.f10.f64 = double(ctx.f10.s64);
	// frsp f10,f10
	ctx.f10.f64 = double(float(ctx.f10.f64));
	// fmadds f11,f11,f13,f10
	ctx.f11.f64 = double(float(ctx.f11.f64 * ctx.f13.f64 + ctx.f10.f64));
	// stfsx f11,r10,r27
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r10.u32 + ctx.r27.u32, temp.u32);
	// lwa r10,4(r27)
	ctx.r10.s64 = int32_t(PPC_LOAD_U32(ctx.r27.u32 + 4));
	// std r10,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r10.u64);
	// lfd f11,96(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f11,f11
	ctx.f11.f64 = double(ctx.f11.s64);
	// frsp f11,f11
	ctx.f11.f64 = double(float(ctx.f11.f64));
	// fmadds f0,f0,f12,f11
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f12.f64 + ctx.f11.f64));
	// stfs f0,20(r9)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 20, temp.u32);
	// bdnz 0x82a2a6f8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82A2A6F8;
loc_82A2A754:
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82a2ea98
	ctx.lr = 0x82A2A75C;
	sub_82A2EA98(ctx, base);
	// b 0x82a2a768
	goto loc_82A2A768;
loc_82A2A760:
	// lis r29,-32768
	ctx.r29.s64 = -2147483648;
	// ori r29,r29,65535
	ctx.r29.u64 = ctx.r29.u64 | 65535;
loc_82A2A768:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x82fa76bc
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A2A774"))) PPC_WEAK_FUNC(sub_82A2A774);
PPC_FUNC_IMPL(__imp__sub_82A2A774) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A2A778"))) PPC_WEAK_FUNC(sub_82A2A778);
PPC_FUNC_IMPL(__imp__sub_82A2A778) {
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
	// bl 0x82a2a308
	ctx.lr = 0x82A2A798;
	sub_82A2A308(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82a2a7c8
	if (ctx.cr0.eq) goto loc_82A2A7C8;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82a2a7c8
	if (ctx.cr6.eq) goto loc_82A2A7C8;
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// lis r10,8
	ctx.r10.s64 = 524288;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// ori r10,r10,63156
	ctx.r10.u64 = ctx.r10.u64 | 63156;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,24028(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24028);
	// lwzx r3,r11,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// bl 0x82a81d88
	ctx.lr = 0x82A2A7C8;
	sub_82A81D88(ctx, base);
loc_82A2A7C8:
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

__attribute__((alias("__imp__sub_82A2A7E4"))) PPC_WEAK_FUNC(sub_82A2A7E4);
PPC_FUNC_IMPL(__imp__sub_82A2A7E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A2A7E8"))) PPC_WEAK_FUNC(sub_82A2A7E8);
PPC_FUNC_IMPL(__imp__sub_82A2A7E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7670
	ctx.lr = 0x82A2A7F0;
	__savegprlr_26(ctx, base);
	// stfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// li r10,1
	ctx.r10.s64 = 1;
	// lfs f0,5184(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5184);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// beq cr6,0x82a2a820
	if (ctx.cr6.eq) goto loc_82A2A820;
	// li r10,0
	ctx.r10.s64 = 0;
loc_82A2A820:
	// lis r11,-31962
	ctx.r11.s64 = -2094661632;
	// stw r10,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r10.u32);
	// mulli r29,r26,1360
	ctx.r29.s64 = ctx.r26.s64 * 1360;
	// addi r30,r11,-13920
	ctx.r30.s64 = ctx.r11.s64 + -13920;
	// li r10,2
	ctx.r10.s64 = 2;
	// add r31,r29,r30
	ctx.r31.u64 = ctx.r29.u64 + ctx.r30.u64;
	// lwzx r11,r29,r30
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r30.u32);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stwx r11,r29,r30
	PPC_STORE_U32(ctx.r29.u32 + ctx.r30.u32, ctx.r11.u32);
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// blt cr6,0x82a2a850
	if (ctx.cr6.lt) goto loc_82A2A850;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
loc_82A2A850:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// blt cr6,0x82a2a868
	if (ctx.cr6.lt) goto loc_82A2A868;
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
loc_82A2A868:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r5,448
	ctx.r5.s64 = 448;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mulli r11,r11,448
	ctx.r11.s64 = ctx.r11.s64 * 448;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// bl 0x82a75220
	ctx.lr = 0x82A2A884;
	sub_82A75220(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r7,3
	ctx.r7.s64 = 3;
	// lwz r6,4(r28)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r9,r30,16
	ctx.r9.s64 = ctx.r30.s64 + 16;
	// subfc r10,r7,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r7.u32;
	ctx.r10.s64 = ctx.r11.s64 - ctx.r7.s64;
	// addi r8,r30,16
	ctx.r8.s64 = ctx.r30.s64 + 16;
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 & ctx.r11.u64;
	// addi r11,r10,1
	ctx.r11.s64 = ctx.r10.s64 + 1;
	// mulli r10,r10,448
	ctx.r10.s64 = ctx.r10.s64 * 448;
	// subfc r7,r7,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r7.u32;
	ctx.r7.s64 = ctx.r11.s64 - ctx.r7.s64;
	// add r10,r10,r29
	ctx.r10.u64 = ctx.r10.u64 + ctx.r29.u64;
	// subfe r7,r7,r7
	temp.u8 = (~ctx.r7.u32 + ctx.r7.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r7.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r7.u64 = ~ctx.r7.u64 + ctx.r7.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// and r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 & ctx.r11.u64;
	// mulli r11,r11,448
	ctx.r11.s64 = ctx.r11.s64 * 448;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// cmplw cr6,r6,r9
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r9.u32, ctx.xer);
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// bne cr6,0x82a2a904
	if (!ctx.cr6.eq) goto loc_82A2A904;
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r8,0(r28)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmpw cr6,r8,r10
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x82a2a904
	if (!ctx.cr6.eq) goto loc_82A2A904;
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x82a2a904
	if (!ctx.cr6.eq) goto loc_82A2A904;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x82a2a934
	if (ctx.cr6.eq) goto loc_82A2A934;
loc_82A2A904:
	// li r31,0
	ctx.r31.s64 = 0;
loc_82A2A908:
	// add r10,r31,r29
	ctx.r10.u64 = ctx.r31.u64 + ctx.r29.u64;
	// addi r11,r30,16
	ctx.r11.s64 = ctx.r30.s64 + 16;
	// li r5,448
	ctx.r5.s64 = 448;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x82a75220
	ctx.lr = 0x82A2A920;
	sub_82A75220(ctx, base);
	// addi r31,r31,448
	ctx.r31.s64 = ctx.r31.s64 + 448;
	// cmplwi cr6,r31,1344
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 1344, ctx.xer);
	// blt cr6,0x82a2a908
	if (ctx.cr6.lt) goto loc_82A2A908;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
loc_82A2A934:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82a2a988
	if (ctx.cr6.eq) goto loc_82A2A988;
	// li r31,0
	ctx.r31.s64 = 0;
loc_82A2A944:
	// add r11,r31,r29
	ctx.r11.u64 = ctx.r31.u64 + ctx.r29.u64;
	// addi r10,r30,16
	ctx.r10.s64 = ctx.r30.s64 + 16;
	// li r5,448
	ctx.r5.s64 = 448;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x82a75220
	ctx.lr = 0x82A2A95C;
	sub_82A75220(ctx, base);
	// addi r31,r31,448
	ctx.r31.s64 = ctx.r31.s64 + 448;
	// cmplwi cr6,r31,1344
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 1344, ctx.xer);
	// blt cr6,0x82a2a944
	if (ctx.cr6.lt) goto loc_82A2A944;
	// lis r10,-31962
	ctx.r10.s64 = -2094661632;
	// mulli r11,r26,7408
	ctx.r11.s64 = ctx.r26.s64 * 7408;
	// addi r10,r10,-28736
	ctx.r10.s64 = ctx.r10.s64 + -28736;
	// li r5,7408
	ctx.r5.s64 = 7408;
	// li r4,0
	ctx.r4.s64 = 0;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x82a75988
	ctx.lr = 0x82A2A984;
	sub_82A75988(ctx, base);
	// b 0x82a2aa28
	goto loc_82A2AA28;
loc_82A2A988:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82a2a9f8
	if (ctx.cr6.eq) goto loc_82A2A9F8;
	// li r31,0
	ctx.r31.s64 = 0;
loc_82A2A998:
	// add r11,r31,r29
	ctx.r11.u64 = ctx.r31.u64 + ctx.r29.u64;
	// addi r10,r30,16
	ctx.r10.s64 = ctx.r30.s64 + 16;
	// li r5,448
	ctx.r5.s64 = 448;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x82a75220
	ctx.lr = 0x82A2A9B0;
	sub_82A75220(ctx, base);
	// addi r31,r31,448
	ctx.r31.s64 = ctx.r31.s64 + 448;
	// cmplwi cr6,r31,1344
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 1344, ctx.xer);
	// blt cr6,0x82a2a998
	if (ctx.cr6.lt) goto loc_82A2A998;
	// lis r10,-31962
	ctx.r10.s64 = -2094661632;
	// mulli r11,r26,7408
	ctx.r11.s64 = ctx.r26.s64 * 7408;
	// addi r10,r10,-28736
	ctx.r10.s64 = ctx.r10.s64 + -28736;
	// li r5,7408
	ctx.r5.s64 = 7408;
	// add r31,r11,r10
	ctx.r31.u64 = ctx.r11.u64 + ctx.r10.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a75988
	ctx.lr = 0x82A2A9DC;
	sub_82A75988(ctx, base);
	// lis r10,-32249
	ctx.r10.s64 = -2113470464;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r11,r11,-29680
	ctx.r11.s64 = ctx.r11.s64 + -29680;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f1,27160(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 27160);
	ctx.f1.f64 = double(temp.f32);
	// b 0x82a2aa18
	goto loc_82A2AA18;
loc_82A2A9F8:
	// lis r10,-31962
	ctx.r10.s64 = -2094661632;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mulli r11,r26,7408
	ctx.r11.s64 = ctx.r26.s64 * 7408;
	// addi r10,r10,-28736
	ctx.r10.s64 = ctx.r10.s64 + -28736;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r11,r9,-29680
	ctx.r11.s64 = ctx.r9.s64 + -29680;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
loc_82A2AA18:
	// addi r6,r28,352
	ctx.r6.s64 = ctx.r28.s64 + 352;
	// lvx128 v1,r0,r11
	simd::store_shuffled(ctx.v1, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// addi r5,r28,32
	ctx.r5.s64 = ctx.r28.s64 + 32;
	// bl 0x82a33970
	ctx.lr = 0x82A2AA28;
	sub_82A33970(ctx, base);
loc_82A2AA28:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x82fa76c0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A2AA34"))) PPC_WEAK_FUNC(sub_82A2AA34);
PPC_FUNC_IMPL(__imp__sub_82A2AA34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A2AA38"))) PPC_WEAK_FUNC(sub_82A2AA38);
PPC_FUNC_IMPL(__imp__sub_82A2AA38) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lhz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// lhz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// subf r3,r10,r11
	ctx.r3.s64 = ctx.r11.s64 - ctx.r10.s64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A2AA50"))) PPC_WEAK_FUNC(sub_82A2AA50);
PPC_FUNC_IMPL(__imp__sub_82A2AA50) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa765c
	ctx.lr = 0x82A2AA58;
	__savegprlr_21(ctx, base);
	// stfd f31,-104(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -104, ctx.f31.u64);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// lis r11,-32093
	ctx.r11.s64 = -2103246848;
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// li r5,8
	ctx.r5.s64 = 8;
	// addi r6,r11,-21960
	ctx.r6.s64 = ctx.r11.s64 + -21960;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82fa3590
	ctx.lr = 0x82A2AA88;
	sub_82FA3590(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// ble cr6,0x82a2ac0c
	if (!ctx.cr6.gt) goto loc_82A2AC0C;
	// addi r11,r31,-8
	ctx.r11.s64 = ctx.r31.s64 + -8;
	// mtctr r29
	ctx.ctr.u64 = ctx.r29.u64;
loc_82A2AA9C:
	// stwu r10,8(r11)
	ea = 8 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// bdnz 0x82a2aa9c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82A2AA9C;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// ble cr6,0x82a2ac0c
	if (!ctx.cr6.gt) goto loc_82A2AC0C;
	// addi r9,r21,-4
	ctx.r9.s64 = ctx.r21.s64 + -4;
	// mtctr r29
	ctx.ctr.u64 = ctx.r29.u64;
	// addi r10,r31,-4
	ctx.r10.s64 = ctx.r31.s64 + -4;
loc_82A2AABC:
	// lwzu r11,8(r10)
	ea = 8 + ctx.r10.u32;
	ctx.r11.u64 = PPC_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// lhz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + 4);
	// lhz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// lhz r6,6(r11)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r11.u32 + 6);
	// lhz r11,2(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 2);
	// subf r8,r7,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r7.s64;
	// subf r11,r11,r6
	ctx.r11.s64 = ctx.r6.s64 - ctx.r11.s64;
	// extsw r8,r8
	ctx.r8.s64 = ctx.r8.s32;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// std r8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lfd f13,88(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfsu f0,4(r9)
	temp.f32 = float(ctx.f0.f64);
	ea = 4 + ctx.r9.u32;
	PPC_STORE_U32(ea, temp.u32);
	ctx.r9.u32 = ea;
	// bdnz 0x82a2aabc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82A2AABC;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// ble cr6,0x82a2ac0c
	if (!ctx.cr6.gt) goto loc_82A2AC0C;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r24,1
	ctx.r24.s64 = 1;
	// mr r26,r21
	ctx.r26.u64 = ctx.r21.u64;
	// mr r22,r29
	ctx.r22.u64 = ctx.r29.u64;
	// lfd f0,11528(r11)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + 11528);
loc_82A2AB28:
	// mr r23,r24
	ctx.r23.u64 = ctx.r24.u64;
	// cmpw cr6,r24,r29
	ctx.cr6.compare<int32_t>(ctx.r24.s32, ctx.r29.s32, ctx.xer);
	// bge cr6,0x82a2abf8
	if (!ctx.cr6.lt) goto loc_82A2ABF8;
	// addi r30,r31,8
	ctx.r30.s64 = ctx.r31.s64 + 8;
	// addi r25,r26,4
	ctx.r25.s64 = ctx.r26.s64 + 4;
loc_82A2AB3C:
	// lwz r28,0(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r27,0(r30)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpw cr6,r28,r27
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r27.s32, ctx.xer);
	// beq cr6,0x82a2abe4
	if (ctx.cr6.eq) goto loc_82A2ABE4;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r5,4(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82a2b758
	ctx.lr = 0x82A2AB60;
	sub_82A2B758(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82a2abf8
	if (ctx.cr0.eq) goto loc_82A2ABF8;
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x82a2abe4
	if (ctx.cr6.eq) goto loc_82A2ABE4;
	// lhz r10,82(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 82);
	// lfs f12,0(r26)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lhz r11,86(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 86);
	// lfs f13,0(r25)
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lhz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r1.u32 + 84);
	// fadds f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f12.f64));
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// lhz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// subf r10,r8,r9
	ctx.r10.s64 = ctx.r9.s64 - ctx.r8.s64;
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// extsw r11,r10
	ctx.r11.s64 = ctx.r10.s32;
	// std r11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// lfd f11,96(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f11,f11
	ctx.f11.f64 = double(ctx.f11.s64);
	// lfd f12,88(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// frsp f11,f11
	ctx.f11.f64 = double(float(ctx.f11.f64));
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// fmuls f12,f11,f12
	ctx.f12.f64 = double(float(ctx.f11.f64 * ctx.f12.f64));
	// fmul f12,f12,f0
	ctx.f12.f64 = ctx.f12.f64 * ctx.f0.f64;
	// fdiv f13,f12,f13
	ctx.f13.f64 = ctx.f12.f64 / ctx.f13.f64;
	// fcmpu cr6,f13,f31
	ctx.cr6.compare(ctx.f13.f64, ctx.f31.f64);
	// ble cr6,0x82a2abe4
	if (!ctx.cr6.gt) goto loc_82A2ABE4;
	// cmpw cr6,r28,r27
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r27.s32, ctx.xer);
	// ble cr6,0x82a2abe0
	if (!ctx.cr6.gt) goto loc_82A2ABE0;
	// stw r27,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r27.u32);
	// b 0x82a2abe4
	goto loc_82A2ABE4;
loc_82A2ABE0:
	// stw r28,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r28.u32);
loc_82A2ABE4:
	// addi r23,r23,1
	ctx.r23.s64 = ctx.r23.s64 + 1;
	// addi r25,r25,4
	ctx.r25.s64 = ctx.r25.s64 + 4;
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// cmpw cr6,r23,r29
	ctx.cr6.compare<int32_t>(ctx.r23.s32, ctx.r29.s32, ctx.xer);
	// blt cr6,0x82a2ab3c
	if (ctx.cr6.lt) goto loc_82A2AB3C;
loc_82A2ABF8:
	// addic. r22,r22,-1
	ctx.xer.ca = ctx.r22.u32 > 0;
	ctx.r22.s64 = ctx.r22.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// addi r24,r24,1
	ctx.r24.s64 = ctx.r24.s64 + 1;
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// addi r26,r26,4
	ctx.r26.s64 = ctx.r26.s64 + 4;
	// bne 0x82a2ab28
	if (!ctx.cr0.eq) goto loc_82A2AB28;
loc_82A2AC0C:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lfd f31,-104(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -104);
	// b 0x82fa76ac
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A2AC18"))) PPC_WEAK_FUNC(sub_82A2AC18);
PPC_FUNC_IMPL(__imp__sub_82A2AC18) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7670
	ctx.lr = 0x82A2AC20;
	__savegprlr_26(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// mr r27,r8
	ctx.r27.u64 = ctx.r8.u64;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// ble cr6,0x82a2ac58
	if (!ctx.cr6.gt) goto loc_82A2AC58;
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// addi r10,r3,252
	ctx.r10.s64 = ctx.r3.s64 + 252;
loc_82A2AC4C:
	// stwu r11,8(r10)
	ea = 8 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r10.u32 = ea;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// bdnz 0x82a2ac4c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82A2AC4C;
loc_82A2AC58:
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// addi r29,r30,256
	ctx.r29.s64 = ctx.r30.s64 + 256;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lfd f1,-13968(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r11.u32 + -13968);
	// bl 0x82a2aa50
	ctx.lr = 0x82A2AC74;
	sub_82A2AA50(ctx, base);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// ble cr6,0x82a2acb4
	if (!ctx.cr6.gt) goto loc_82A2ACB4;
	// addi r9,r29,-8
	ctx.r9.s64 = ctx.r29.s64 + -8;
	// mtctr r31
	ctx.ctr.u64 = ctx.r31.u64;
loc_82A2AC84:
	// lwz r11,8(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// addi r10,r11,32
	ctx.r10.s64 = ctx.r11.s64 + 32;
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// b 0x82a2aca0
	goto loc_82A2ACA0;
loc_82A2AC94:
	// addi r8,r10,32
	ctx.r8.s64 = ctx.r10.s64 + 32;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// rlwinm r10,r8,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
loc_82A2ACA0:
	// lwzx r10,r10,r30
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r30.u32);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x82a2ac94
	if (!ctx.cr6.eq) goto loc_82A2AC94;
	// stwu r11,8(r9)
	ea = 8 + ctx.r9.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r9.u32 = ea;
	// bdnz 0x82a2ac84
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82A2AC84;
loc_82A2ACB4:
	// lis r11,-32003
	ctx.r11.s64 = -2097348608;
	// li r5,8
	ctx.r5.s64 = 8;
	// addi r6,r11,-14768
	ctx.r6.s64 = ctx.r11.s64 + -14768;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82fa3590
	ctx.lr = 0x82A2ACCC;
	sub_82FA3590(ctx, base);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// ble cr6,0x82a2ae48
	if (!ctx.cr6.gt) goto loc_82A2AE48;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lis r9,-32233
	ctx.r9.s64 = -2112421888;
	// lis r6,-32256
	ctx.r6.s64 = -2113929216;
	// addi r8,r28,-2
	ctx.r8.s64 = ctx.r28.s64 + -2;
	// lfd f10,22496(r10)
	ctx.fpscr.disableFlushMode();
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r10.u32 + 22496);
	// lfs f8,24436(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 24436);
	ctx.f8.f64 = double(temp.f32);
	// lfs f9,5184(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 5184);
	ctx.f9.f64 = double(temp.f32);
loc_82A2ACF8:
	// addi r10,r11,32
	ctx.r10.s64 = ctx.r11.s64 + 32;
	// fmr f0,f9
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f9.f64;
	// fmr f13,f9
	ctx.f13.f64 = ctx.f9.f64;
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// fmr f12,f9
	ctx.f12.f64 = ctx.f9.f64;
	// fmr f11,f9
	ctx.f11.f64 = ctx.f9.f64;
	// cmpw cr6,r11,r31
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r31.s32, ctx.xer);
	// lwzx r5,r10,r30
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r30.u32);
	// bge cr6,0x82a2adb8
	if (!ctx.cr6.lt) goto loc_82A2ADB8;
	// rlwinm r10,r11,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + ctx.r30.u64;
	// addi r9,r10,252
	ctx.r9.s64 = ctx.r10.s64 + 252;
loc_82A2AD2C:
	// lwz r10,4(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// cmpw cr6,r10,r5
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r5.s32, ctx.xer);
	// bne cr6,0x82a2adb8
	if (!ctx.cr6.eq) goto loc_82A2ADB8;
	// lwzu r10,8(r9)
	ea = 8 + ctx.r9.u32;
	ctx.r10.u64 = PPC_LOAD_U32(ea);
	ctx.r9.u32 = ea;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpw cr6,r11,r31
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r31.s32, ctx.xer);
	// lhz r4,6(r10)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r10.u32 + 6);
	// lhz r3,0(r10)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// lhz r29,4(r10)
	ctx.r29.u64 = PPC_LOAD_U16(ctx.r10.u32 + 4);
	// extsw r4,r4
	ctx.r4.s64 = ctx.r4.s32;
	// lhz r10,2(r10)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r10.u32 + 2);
	// extsw r3,r3
	ctx.r3.s64 = ctx.r3.s32;
	// extsw r29,r29
	ctx.r29.s64 = ctx.r29.s32;
	// std r4,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r4.u64);
	// extsw r10,r10
	ctx.r10.s64 = ctx.r10.s32;
	// std r3,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r3.u64);
	// std r29,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r29.u64);
	// lfd f6,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// std r10,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r10.u64);
	// lfd f5,96(r1)
	ctx.f5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// lfd f4,104(r1)
	ctx.f4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// lfd f7,80(r1)
	ctx.f7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f7,f7
	ctx.f7.f64 = double(ctx.f7.s64);
	// fcfid f4,f4
	ctx.f4.f64 = double(ctx.f4.s64);
	// fcfid f5,f5
	ctx.f5.f64 = double(ctx.f5.s64);
	// fcfid f6,f6
	ctx.f6.f64 = double(ctx.f6.s64);
	// frsp f7,f7
	ctx.f7.f64 = double(float(ctx.f7.f64));
	// frsp f4,f4
	ctx.f4.f64 = double(float(ctx.f4.f64));
	// frsp f5,f5
	ctx.f5.f64 = double(float(ctx.f5.f64));
	// frsp f6,f6
	ctx.f6.f64 = double(float(ctx.f6.f64));
	// fadds f11,f7,f11
	ctx.f11.f64 = double(float(ctx.f7.f64 + ctx.f11.f64));
	// fadds f12,f4,f12
	ctx.f12.f64 = double(float(ctx.f4.f64 + ctx.f12.f64));
	// fadds f13,f5,f13
	ctx.f13.f64 = double(float(ctx.f5.f64 + ctx.f13.f64));
	// fadds f0,f6,f0
	ctx.f0.f64 = double(float(ctx.f6.f64 + ctx.f0.f64));
	// blt cr6,0x82a2ad2c
	if (ctx.cr6.lt) goto loc_82A2AD2C;
loc_82A2ADB8:
	// subf r10,r6,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r6.s64;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// extsw r10,r10
	ctx.r10.s64 = ctx.r10.s32;
	// cmpw cr6,r7,r27
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r27.s32, ctx.xer);
	// std r10,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r10.u64);
	// lfd f7,112(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f7,f7
	ctx.f7.f64 = double(ctx.f7.s64);
	// frsp f7,f7
	ctx.f7.f64 = double(float(ctx.f7.f64));
	// fdivs f7,f8,f7
	ctx.f7.f64 = double(float(ctx.f8.f64 / ctx.f7.f64));
	// fmuls f0,f7,f0
	ctx.f0.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// fmuls f11,f7,f11
	ctx.f11.f64 = double(float(ctx.f7.f64 * ctx.f11.f64));
	// fmuls f12,f7,f12
	ctx.f12.f64 = double(float(ctx.f7.f64 * ctx.f12.f64));
	// fmuls f13,f7,f13
	ctx.f13.f64 = double(float(ctx.f7.f64 * ctx.f13.f64));
	// fadd f0,f0,f10
	ctx.f0.f64 = ctx.f0.f64 + ctx.f10.f64;
	// fadd f11,f11,f10
	ctx.f11.f64 = ctx.f11.f64 + ctx.f10.f64;
	// fadd f12,f12,f10
	ctx.f12.f64 = ctx.f12.f64 + ctx.f10.f64;
	// fadd f13,f13,f10
	ctx.f13.f64 = ctx.f13.f64 + ctx.f10.f64;
	// fctidz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f0.f64));
	// stfd f0,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.f0.u64);
	// lhz r9,134(r1)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r1.u32 + 134);
	// fctidz f0,f11
	ctx.f0.s64 = (ctx.f11.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f11.f64));
	// stfd f0,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.f0.u64);
	// lhz r6,134(r1)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r1.u32 + 134);
	// fctidz f12,f12
	ctx.f12.s64 = (ctx.f12.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f12.f64));
	// stfd f12,120(r1)
	PPC_STORE_U64(ctx.r1.u32 + 120, ctx.f12.u64);
	// fctidz f0,f13
	ctx.f0.s64 = (ctx.f13.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f13.f64));
	// stfd f0,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.f0.u64);
	// lhz r10,126(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 126);
	// lhz r5,134(r1)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r1.u32 + 134);
	// sth r9,2(r8)
	PPC_STORE_U16(ctx.r8.u32 + 2, ctx.r9.u16);
	// sth r10,4(r8)
	PPC_STORE_U16(ctx.r8.u32 + 4, ctx.r10.u16);
	// sth r5,6(r8)
	PPC_STORE_U16(ctx.r8.u32 + 6, ctx.r5.u16);
	// sthu r6,8(r8)
	ea = 8 + ctx.r8.u32;
	PPC_STORE_U16(ea, ctx.r6.u16);
	ctx.r8.u32 = ea;
	// beq cr6,0x82a2ae48
	if (ctx.cr6.eq) goto loc_82A2AE48;
	// cmpw cr6,r11,r31
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r31.s32, ctx.xer);
	// blt cr6,0x82a2acf8
	if (ctx.cr6.lt) goto loc_82A2ACF8;
loc_82A2AE48:
	// stw r7,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r7.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82fa76c0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A2AE54"))) PPC_WEAK_FUNC(sub_82A2AE54);
PPC_FUNC_IMPL(__imp__sub_82A2AE54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A2AE58"))) PPC_WEAK_FUNC(sub_82A2AE58);
PPC_FUNC_IMPL(__imp__sub_82A2AE58) {
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
	// li r5,512
	ctx.r5.s64 = 512;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// bl 0x82fa7cf0
	ctx.lr = 0x82A2AE74;
	sub_82FA7CF0(ctx, base);
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

__attribute__((alias("__imp__sub_82A2AE88"))) PPC_WEAK_FUNC(sub_82A2AE88);
PPC_FUNC_IMPL(__imp__sub_82A2AE88) {
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
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// li r5,512
	ctx.r5.s64 = 512;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82fa7cf0
	ctx.lr = 0x82A2AEAC;
	sub_82FA7CF0(ctx, base);
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

__attribute__((alias("__imp__sub_82A2AEC4"))) PPC_WEAK_FUNC(sub_82A2AEC4);
PPC_FUNC_IMPL(__imp__sub_82A2AEC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A2AEC8"))) PPC_WEAK_FUNC(sub_82A2AEC8);
PPC_FUNC_IMPL(__imp__sub_82A2AEC8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	PPCVRegister vTemp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7640
	ctx.lr = 0x82A2AED0;
	__savegprlr_14(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r4,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r4.u32);
	// lis r9,-32248
	ctx.r9.s64 = -2113404928;
	// stb r8,63(r1)
	PPC_STORE_U8(ctx.r1.u32 + 63, ctx.r8.u8);
	// stw r10,516(r3)
	PPC_STORE_U32(ctx.r3.u32 + 516, ctx.r10.u32);
	// addi r11,r3,516
	ctx.r11.s64 = ctx.r3.s64 + 516;
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// addi r5,r9,-14192
	ctx.r5.s64 = ctx.r9.s64 + -14192;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r4,-16
	ctx.r4.s64 = -16;
	// addi r16,r11,-1
	ctx.r16.s64 = ctx.r11.s64 + -1;
	// std r11,-400(r1)
	PPC_STORE_U64(ctx.r1.u32 + -400, ctx.r11.u64);
	// lvx128 v62,r5,r4
	simd::store_shuffled(ctx.v62, simd::load_and_shuffle(base + ((ctx.r5.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// lvx128 v38,r0,r5
	simd::store_shuffled(ctx.v38, simd::load_and_shuffle(base + ((ctx.r5.u32) & ~0xF), VectorMaskL));
	// lis r5,-31975
	ctx.r5.s64 = -2095513600;
	// addi r8,r1,-432
	ctx.r8.s64 = ctx.r1.s64 + -432;
	// stw r16,-432(r1)
	PPC_STORE_U32(ctx.r1.u32 + -432, ctx.r16.u32);
	// addi r11,r5,-11216
	ctx.r11.s64 = ctx.r5.s64 + -11216;
	// stw r16,-424(r1)
	PPC_STORE_U32(ctx.r1.u32 + -424, ctx.r16.u32);
	// addi r17,r10,-1
	ctx.r17.s64 = ctx.r10.s64 + -1;
	// lfd f0,-400(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + -400);
	// fcfid f12,f0
	ctx.f12.f64 = double(ctx.f0.s64);
	// lis r9,-31962
	ctx.r9.s64 = -2094661632;
	// stw r17,-428(r1)
	PPC_STORE_U32(ctx.r1.u32 + -428, ctx.r17.u32);
	// lis r4,-32229
	ctx.r4.s64 = -2112159744;
	// stw r17,-420(r1)
	PPC_STORE_U32(ctx.r1.u32 + -420, ctx.r17.u32);
	// lvx128 v60,r0,r8
	simd::store_shuffled(ctx.v60, simd::load_and_shuffle(base + ((ctx.r8.u32) & ~0xF), VectorMaskL));
	// lvx128 v63,r0,r11
	simd::store_shuffled(ctx.v63, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// addi r9,r9,-28896
	ctx.r9.s64 = ctx.r9.s64 + -28896;
	// lis r10,-32768
	ctx.r10.s64 = -2147483648;
	// stw r3,20(r1)
	PPC_STORE_U32(ctx.r1.u32 + 20, ctx.r3.u32);
	// addi r8,r3,4
	ctx.r8.s64 = ctx.r3.s64 + 4;
	// fmr f13,f1
	ctx.f13.f64 = ctx.f1.f64;
	// lfs f0,-27104(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + -27104);
	ctx.f0.f64 = double(temp.f32);
	// ori r5,r10,16389
	ctx.r5.u64 = ctx.r10.u64 | 16389;
	// stw r7,52(r1)
	PPC_STORE_U32(ctx.r1.u32 + 52, ctx.r7.u32);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// lvx128 v37,r0,r9
	simd::store_shuffled(ctx.v37, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// stw r17,-384(r1)
	PPC_STORE_U32(ctx.r1.u32 + -384, ctx.r17.u32);
	// stw r16,-376(r1)
	PPC_STORE_U32(ctx.r1.u32 + -376, ctx.r16.u32);
	// vor128 v36,v62,v62
	_mm_store_si128((__m128i*)ctx.v36.u8, _mm_load_si128((__m128i*)ctx.v62.u8));
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// stw r9,-388(r1)
	PPC_STORE_U32(ctx.r1.u32 + -388, ctx.r9.u32);
	// stw r5,-416(r1)
	PPC_STORE_U32(ctx.r1.u32 + -416, ctx.r5.u32);
	// stw r8,-464(r1)
	PPC_STORE_U32(ctx.r1.u32 + -464, ctx.r8.u32);
	// vcsxwfp128 v34,v60,0
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v34.f32, _mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v60.u32)));
	// vor128 v35,v63,v63
	_mm_store_si128((__m128i*)ctx.v35.u8, _mm_load_si128((__m128i*)ctx.v63.u8));
	// vor128 v63,v63,v63
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_load_si128((__m128i*)ctx.v63.u8));
	// fadds f10,f11,f0
	ctx.fpscr.disableFlushModeUnconditional();
	ctx.f10.f64 = double(float(ctx.f11.f64 + ctx.f0.f64));
	// stfs f10,-432(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + -432, temp.u32);
	// stfs f10,-428(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + -428, temp.u32);
	// stfs f10,-424(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + -424, temp.u32);
	// stfs f10,-420(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + -420, temp.u32);
	// beq cr6,0x82a2afb8
	if (ctx.cr6.eq) goto loc_82A2AFB8;
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
loc_82A2AFB0:
	// vmulfp128 v37,v37,v62
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v37.f32, _mm_mul_ps(_mm_load_ps(ctx.v37.f32), _mm_load_ps(ctx.v62.f32)));
	// bdnz 0x82a2afb0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82A2AFB0;
loc_82A2AFB8:
	// vmulfp128 v59,v63,v37
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v59.f32, _mm_mul_ps(_mm_load_ps(ctx.v63.f32), _mm_load_ps(ctx.v37.f32)));
	// stw r6,-448(r1)
	PPC_STORE_U32(ctx.r1.u32 + -448, ctx.r6.u32);
	// cmplw cr6,r6,r7
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r7.u32, ctx.xer);
	// vrfin128 v48,v59
	_mm_store_ps(ctx.v48.f32, _mm_round_ps(_mm_load_ps(ctx.v59.f32), _MM_FROUND_TO_NEAREST_INT | _MM_FROUND_NO_EXC));
	// bgt cr6,0x82a2b63c
	if (ctx.cr6.gt) goto loc_82A2B63C;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// mulli r10,r6,11184
	ctx.r10.s64 = ctx.r6.s64 * 11184;
	// addi r11,r11,3040
	ctx.r11.s64 = ctx.r11.s64 + 3040;
	// lis r6,-31962
	ctx.r6.s64 = -2094661632;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lis r11,-31962
	ctx.r11.s64 = -2094661632;
	// lis r9,-31962
	ctx.r9.s64 = -2094661632;
	// stw r10,-456(r1)
	PPC_STORE_U32(ctx.r1.u32 + -456, ctx.r10.u32);
	// lis r7,-31962
	ctx.r7.s64 = -2094661632;
	// lis r22,-31962
	ctx.r22.s64 = -2094661632;
	// lis r25,-31962
	ctx.r25.s64 = -2094661632;
	// lis r5,-31962
	ctx.r5.s64 = -2094661632;
	// addi r26,r11,-10976
	ctx.r26.s64 = ctx.r11.s64 + -10976;
	// addi r23,r6,-11024
	ctx.r23.s64 = ctx.r6.s64 + -11024;
	// lis r21,-31962
	ctx.r21.s64 = -2094661632;
	// addi r11,r7,-11120
	ctx.r11.s64 = ctx.r7.s64 + -11120;
	// addi r24,r9,-11008
	ctx.r24.s64 = ctx.r9.s64 + -11008;
	// addi r6,r22,-11152
	ctx.r6.s64 = ctx.r22.s64 + -11152;
	// lvx128 v58,r0,r26
	simd::store_shuffled(ctx.v58, simd::load_and_shuffle(base + ((ctx.r26.u32) & ~0xF), VectorMaskL));
	// lis r4,-31962
	ctx.r4.s64 = -2094661632;
	// lvx128 v3,r0,r23
	simd::store_shuffled(ctx.v3, simd::load_and_shuffle(base + ((ctx.r23.u32) & ~0xF), VectorMaskL));
	// addi r7,r1,-432
	ctx.r7.s64 = ctx.r1.s64 + -432;
	// addi r20,r1,-288
	ctx.r20.s64 = ctx.r1.s64 + -288;
	// lvx128 v57,r0,r11
	simd::store_shuffled(ctx.v57, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// addi r9,r25,-11104
	ctx.r9.s64 = ctx.r25.s64 + -11104;
	// lvx128 v2,r0,r24
	simd::store_shuffled(ctx.v2, simd::load_and_shuffle(base + ((ctx.r24.u32) & ~0xF), VectorMaskL));
	// addi r22,r5,-10944
	ctx.r22.s64 = ctx.r5.s64 + -10944;
	// lvx128 v53,r0,r6
	simd::store_shuffled(ctx.v53, simd::load_and_shuffle(base + ((ctx.r6.u32) & ~0xF), VectorMaskL));
	// lis r19,-31962
	ctx.r19.s64 = -2094661632;
	// addi r5,r21,-11136
	ctx.r5.s64 = ctx.r21.s64 + -11136;
	// lvx128 v10,r0,r7
	simd::store_shuffled(ctx.v10, simd::load_and_shuffle(base + ((ctx.r7.u32) & ~0xF), VectorMaskL));
	// addi r21,r4,-11040
	ctx.r21.s64 = ctx.r4.s64 + -11040;
	// stvx128 v58,r0,r20
	_mm_store_si128((__m128i*)(base + ((ctx.r20.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v58.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r4,r19,-11168
	ctx.r4.s64 = ctx.r19.s64 + -11168;
	// lvx128 v56,r0,r9
	simd::store_shuffled(ctx.v56, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// lis r10,-31962
	ctx.r10.s64 = -2094661632;
	// lvx128 v59,r0,r22
	simd::store_shuffled(ctx.v59, simd::load_and_shuffle(base + ((ctx.r22.u32) & ~0xF), VectorMaskL));
	// lis r18,-31962
	ctx.r18.s64 = -2094661632;
	// lis r31,-31962
	ctx.r31.s64 = -2094661632;
	// lvx128 v61,r0,r5
	simd::store_shuffled(ctx.v61, simd::load_and_shuffle(base + ((ctx.r5.u32) & ~0xF), VectorMaskL));
	// lis r30,-31962
	ctx.r30.s64 = -2094661632;
	// lvx128 v4,r0,r21
	simd::store_shuffled(ctx.v4, simd::load_and_shuffle(base + ((ctx.r21.u32) & ~0xF), VectorMaskL));
	// lis r29,-31962
	ctx.r29.s64 = -2094661632;
	// lvx128 v40,r0,r4
	simd::store_shuffled(ctx.v40, simd::load_and_shuffle(base + ((ctx.r4.u32) & ~0xF), VectorMaskL));
	// lis r28,-31962
	ctx.r28.s64 = -2094661632;
	// lis r27,-31962
	ctx.r27.s64 = -2094661632;
	// addi r15,r1,-208
	ctx.r15.s64 = ctx.r1.s64 + -208;
	// addi r14,r1,-224
	ctx.r14.s64 = ctx.r1.s64 + -224;
	// addi r25,r10,-10992
	ctx.r25.s64 = ctx.r10.s64 + -10992;
	// addi r7,r18,-11184
	ctx.r7.s64 = ctx.r18.s64 + -11184;
	// addi r20,r31,-11056
	ctx.r20.s64 = ctx.r31.s64 + -11056;
	// addi r30,r30,-11072
	ctx.r30.s64 = ctx.r30.s64 + -11072;
	// stvx128 v57,r0,r15
	_mm_store_si128((__m128i*)(base + ((ctx.r15.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v57.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r29,r29,-11088
	ctx.r29.s64 = ctx.r29.s64 + -11088;
	// stvx128 v56,r0,r14
	_mm_store_si128((__m128i*)(base + ((ctx.r14.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v56.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r28,r28,-10960
	ctx.r28.s64 = ctx.r28.s64 + -10960;
	// lvx128 v1,r0,r25
	simd::store_shuffled(ctx.v1, simd::load_and_shuffle(base + ((ctx.r25.u32) & ~0xF), VectorMaskL));
	// addi r27,r27,-28912
	ctx.r27.s64 = ctx.r27.s64 + -28912;
	// lvx128 v41,r0,r7
	simd::store_shuffled(ctx.v41, simd::load_and_shuffle(base + ((ctx.r7.u32) & ~0xF), VectorMaskL));
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lvx128 v5,r0,r20
	simd::store_shuffled(ctx.v5, simd::load_and_shuffle(base + ((ctx.r20.u32) & ~0xF), VectorMaskL));
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// lvx128 v6,r0,r30
	simd::store_shuffled(ctx.v6, simd::load_and_shuffle(base + ((ctx.r30.u32) & ~0xF), VectorMaskL));
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lvx128 v7,r0,r29
	simd::store_shuffled(ctx.v7, simd::load_and_shuffle(base + ((ctx.r29.u32) & ~0xF), VectorMaskL));
	// lis r6,-32249
	ctx.r6.s64 = -2113470464;
	// lvx128 v51,r0,r28
	simd::store_shuffled(ctx.v51, simd::load_and_shuffle(base + ((ctx.r28.u32) & ~0xF), VectorMaskL));
	// addi r5,r11,2328
	ctx.r5.s64 = ctx.r11.s64 + 2328;
	// lvx128 v62,r0,r27
	simd::store_shuffled(ctx.v62, simd::load_and_shuffle(base + ((ctx.r27.u32) & ~0xF), VectorMaskL));
	// addi r4,r9,-22872
	ctx.r4.s64 = ctx.r9.s64 + -22872;
	// stw r5,-380(r1)
	PPC_STORE_U32(ctx.r1.u32 + -380, ctx.r5.u32);
	// addi r18,r10,-472
	ctx.r18.s64 = ctx.r10.s64 + -472;
	// stw r4,-408(r1)
	PPC_STORE_U32(ctx.r1.u32 + -408, ctx.r4.u32);
	// addi r19,r6,28000
	ctx.r19.s64 = ctx.r6.s64 + 28000;
	// b 0x82a2b100
	goto loc_82A2B100;
loc_82A2B0F8:
	// lwz r17,-384(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -384);
	// lwz r16,-376(r1)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r1.u32 + -376);
loc_82A2B100:
	// vcmpgtfp128. v55,v34,v48
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v55.f32, _mm_cmpgt_ps(_mm_load_ps(ctx.v34.f32), _mm_load_ps(ctx.v48.f32)));
	ctx.cr6.setFromMask(_mm_load_ps(ctx.v55.f32), 0xF);
	// bge cr6,0x82a2b63c
	if (!ctx.cr6.lt) goto loc_82A2B63C;
	// vspltw128 v54,v48,3
	_mm_store_si128((__m128i*)ctx.v54.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v48.u32), 0x0));
	// vcfpsxws128 v52,v48,0
	_mm_store_si128((__m128i*)ctx.v52.s32, _mm_vctsxs(_mm_load_ps(ctx.v48.f32)));
	// addi r11,r1,-272
	ctx.r11.s64 = ctx.r1.s64 + -272;
	// vspltw128 v50,v48,2
	_mm_store_si128((__m128i*)ctx.v50.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v48.u32), 0x55));
	// addi r10,r1,-256
	ctx.r10.s64 = ctx.r1.s64 + -256;
	// vsldoi128 v49,v48,v62,4
	_mm_store_si128((__m128i*)ctx.v49.u8, _mm_alignr_epi8(_mm_load_si128((__m128i*)ctx.v48.u8), _mm_load_si128((__m128i*)ctx.v62.u8), 12));
	// li r5,0
	ctx.r5.s64 = 0;
	// vor128 v44,v7,v7
	_mm_store_si128((__m128i*)ctx.v44.u8, _mm_load_si128((__m128i*)ctx.v7.u8));
	// vmulfp128 v47,v54,v38
	_mm_store_ps(ctx.v47.f32, _mm_mul_ps(_mm_load_ps(ctx.v54.f32), _mm_load_ps(ctx.v38.f32)));
	// addi r9,r1,-208
	ctx.r9.s64 = ctx.r1.s64 + -208;
	// stw r5,-412(r1)
	PPC_STORE_U32(ctx.r1.u32 + -412, ctx.r5.u32);
	// vmulfp128 v46,v50,v38
	_mm_store_ps(ctx.v46.f32, _mm_mul_ps(_mm_load_ps(ctx.v50.f32), _mm_load_ps(ctx.v38.f32)));
	// addi r7,r1,-224
	ctx.r7.s64 = ctx.r1.s64 + -224;
	// vmulfp128 v45,v49,v48
	_mm_store_ps(ctx.v45.f32, _mm_mul_ps(_mm_load_ps(ctx.v49.f32), _mm_load_ps(ctx.v48.f32)));
	// addi r6,r1,-240
	ctx.r6.s64 = ctx.r1.s64 + -240;
	// addi r31,r1,-192
	ctx.r31.s64 = ctx.r1.s64 + -192;
	// lvx128 v0,r0,r9
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// lvx128 v7,r0,r7
	simd::store_shuffled(ctx.v7, simd::load_and_shuffle(base + ((ctx.r7.u32) & ~0xF), VectorMaskL));
	// vperm128 v0,v48,v62,v0
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v48.u8), _mm_load_si128((__m128i*)ctx.v62.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// stvx128 v52,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v52.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lwz r11,-264(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -264);
	// vperm128 v13,v48,v62,v7
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v48.u8), _mm_load_si128((__m128i*)ctx.v62.u8), _mm_load_si128((__m128i*)ctx.v7.u8)));
	// lwz r4,-260(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + -260);
	// subf r7,r4,r17
	ctx.r7.s64 = ctx.r17.s64 - ctx.r4.s64;
	// stvx128 v44,r0,r31
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v44.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// vrfin128 v42,v47
	_mm_store_ps(ctx.v42.f32, _mm_round_ps(_mm_load_ps(ctx.v47.f32), _MM_FROUND_TO_NEAREST_INT | _MM_FROUND_NO_EXC));
	// subf r9,r11,r16
	ctx.r9.s64 = ctx.r16.s64 - ctx.r11.s64;
	// vrfin128 v33,v46
	_mm_store_ps(ctx.v33.f32, _mm_round_ps(_mm_load_ps(ctx.v46.f32), _MM_FROUND_TO_NEAREST_INT | _MM_FROUND_NO_EXC));
	// vspltw128 v46,v45,2
	_mm_store_si128((__m128i*)ctx.v46.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v45.u32), 0x55));
	// vmaddfp v0,v10,v13,v0
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v10.f32), _mm_load_ps(ctx.v13.f32)), _mm_load_ps(ctx.v0.f32)));
	// lvx128 v7,r0,r31
	simd::store_shuffled(ctx.v7, simd::load_and_shuffle(base + ((ctx.r31.u32) & ~0xF), VectorMaskL));
	// vcfpsxws128 v32,v42,0
	_mm_store_si128((__m128i*)ctx.v32.s32, _mm_vctsxs(_mm_load_ps(ctx.v42.f32)));
	// vor128 v43,v42,v42
	_mm_store_si128((__m128i*)ctx.v43.u8, _mm_load_si128((__m128i*)ctx.v42.u8));
	// vcfpsxws128 v63,v33,0
	_mm_store_si128((__m128i*)ctx.v63.s32, _mm_vctsxs(_mm_load_ps(ctx.v33.f32)));
	// vor128 v45,v33,v33
	_mm_store_si128((__m128i*)ctx.v45.u8, _mm_load_si128((__m128i*)ctx.v33.u8));
	// vmulfp128 v39,v42,v10
	_mm_store_ps(ctx.v39.f32, _mm_mul_ps(_mm_load_ps(ctx.v42.f32), _mm_load_ps(ctx.v10.f32)));
	// vor128 v44,v0,v0
	_mm_store_si128((__m128i*)ctx.v44.u8, _mm_load_si128((__m128i*)ctx.v0.u8));
	// vor128 v42,v33,v33
	_mm_store_si128((__m128i*)ctx.v42.u8, _mm_load_si128((__m128i*)ctx.v33.u8));
	// vrlimi128 v43,v62,10,0
	_mm_store_ps(ctx.v43.f32, _mm_blend_ps(_mm_load_ps(ctx.v43.f32), _mm_permute_ps(_mm_load_ps(ctx.v62.f32), 228), 10));
	// vrlimi128 v45,v62,5,0
	_mm_store_ps(ctx.v45.f32, _mm_blend_ps(_mm_load_ps(ctx.v45.f32), _mm_permute_ps(_mm_load_ps(ctx.v62.f32), 228), 5));
	// stvx128 v32,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v32.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lwz r5,-248(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + -248);
	// stvx128 v63,r0,r6
	_mm_store_si128((__m128i*)(base + ((ctx.r6.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lwz r4,-240(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + -240);
	// divwu r11,r9,r4
	ctx.r11.u32 = ctx.r9.u32 / ctx.r4.u32;
	// divwu r10,r7,r5
	ctx.r10.u32 = ctx.r7.u32 / ctx.r5.u32;
	// stw r11,-392(r1)
	PPC_STORE_U32(ctx.r1.u32 + -392, ctx.r11.u32);
	// stw r10,-400(r1)
	PPC_STORE_U32(ctx.r1.u32 + -400, ctx.r10.u32);
loc_82A2B1C8:
	// li r11,0
	ctx.r11.s64 = 0;
	// vor128 v47,v48,v48
	_mm_store_si128((__m128i*)ctx.v47.u8, _mm_load_si128((__m128i*)ctx.v48.u8));
	// vor128 v49,v44,v44
	_mm_store_si128((__m128i*)ctx.v49.u8, _mm_load_si128((__m128i*)ctx.v44.u8));
	// stw r11,-452(r1)
	PPC_STORE_U32(ctx.r1.u32 + -452, ctx.r11.u32);
loc_82A2B1D8:
	// vcfpsxws128 v60,v49,0
	ctx.fpscr.enableFlushMode();
	_mm_store_si128((__m128i*)ctx.v60.s32, _mm_vctsxs(_mm_load_ps(ctx.v49.f32)));
	// addi r10,r1,-352
	ctx.r10.s64 = ctx.r1.s64 + -352;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r7,16
	ctx.r7.s64 = 16;
	// lwz r5,-388(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + -388);
	// lvx128 v58,r0,r19
	simd::store_shuffled(ctx.v58, simd::load_and_shuffle(base + ((ctx.r19.u32) & ~0xF), VectorMaskL));
	// addi r4,r1,-460
	ctx.r4.s64 = ctx.r1.s64 + -460;
	// lwz r31,-408(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + -408);
	// lwz r6,-456(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + -456);
	// lwz r11,8(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// lvx128 v57,r19,r7
	simd::store_shuffled(ctx.v57, simd::load_and_shuffle(base + ((ctx.r19.u32 + ctx.r7.u32) & ~0xF), VectorMaskL));
	// lvx128 v56,r0,r5
	simd::store_shuffled(ctx.v56, simd::load_and_shuffle(base + ((ctx.r5.u32) & ~0xF), VectorMaskL));
	// stvx128 v60,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v60.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lwz r7,-352(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + -352);
	// lwz r9,-344(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + -344);
	// lwz r10,-340(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + -340);
	// lwz r5,-348(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + -348);
	// rlwinm r5,r5,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 3) & 0xFFFFFFF8;
	// lvlx128 v55,r5,r11
	temp.u32 = ctx.r5.u32 + ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v55.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// rlwinm r5,r10,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r9,r9,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// lvlx128 v52,r5,r11
	temp.u32 = ctx.r5.u32 + ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v52.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// rlwinm r10,r7,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0xFFFFFFF8;
	// vsubfp128 v33,v52,v55
	_mm_store_ps(ctx.v33.f32, _mm_sub_ps(_mm_load_ps(ctx.v52.f32), _mm_load_ps(ctx.v55.f32)));
	// lvlx128 v54,r9,r11
	temp.u32 = ctx.r9.u32 + ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v54.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v50,r10,r11
	temp.u32 = ctx.r10.u32 + ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v50.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vsubfp128 v32,v54,v50
	_mm_store_ps(ctx.v32.f32, _mm_sub_ps(_mm_load_ps(ctx.v54.f32), _mm_load_ps(ctx.v50.f32)));
	// vsubfp128 v63,v33,v32
	_mm_store_ps(ctx.v63.f32, _mm_sub_ps(_mm_load_ps(ctx.v33.f32), _mm_load_ps(ctx.v32.f32)));
	// vand128 v60,v63,v41
	_mm_store_si128((__m128i*)ctx.v60.u8, _mm_and_si128(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)ctx.v41.u8)));
	// vrlimi128 v60,v46,4,0
	_mm_store_ps(ctx.v60.f32, _mm_blend_ps(_mm_load_ps(ctx.v60.f32), _mm_permute_ps(_mm_load_ps(ctx.v46.f32), 228), 4));
	// vxor128 v55,v60,v40
	_mm_store_si128((__m128i*)ctx.v55.u8, _mm_xor_si128(_mm_load_si128((__m128i*)ctx.v60.u8), _mm_load_si128((__m128i*)ctx.v40.u8)));
	// vmsum4fp128 v54,v63,v55
	_mm_store_ps(ctx.v54.f32, _mm_dp_ps(_mm_load_ps(ctx.v63.f32), _mm_load_ps(ctx.v55.f32), 0xFF));
	// vrsqrtefp128 v52,v54
	_mm_store_ps(ctx.v52.f32, _mm_div_ps(_mm_set1_ps(1), _mm_sqrt_ps(_mm_load_ps(ctx.v54.f32))));
	// vmulfp128 v50,v46,v52
	_mm_store_ps(ctx.v50.f32, _mm_mul_ps(_mm_load_ps(ctx.v46.f32), _mm_load_ps(ctx.v52.f32)));
	// vminfp128 v50,v50,v56
	_mm_store_ps(ctx.v50.f32, _mm_min_ps(_mm_load_ps(ctx.v50.f32), _mm_load_ps(ctx.v56.f32)));
	// vcmpgtfp128 v33,v57,v50
	_mm_store_ps(ctx.v33.f32, _mm_cmpgt_ps(_mm_load_ps(ctx.v57.f32), _mm_load_ps(ctx.v50.f32)));
	// vcmpgtfp128 v32,v58,v50
	_mm_store_ps(ctx.v32.f32, _mm_cmpgt_ps(_mm_load_ps(ctx.v58.f32), _mm_load_ps(ctx.v50.f32)));
	// vcsxwfp128 v63,v33,0
	_mm_store_ps(ctx.v63.f32, _mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v33.u32)));
	// vcsxwfp128 v60,v32,0
	_mm_store_ps(ctx.v60.f32, _mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v32.u32)));
	// vmsum3fp128 v58,v63,v51
	_mm_store_ps(ctx.v58.f32, _mm_dp_ps(_mm_load_ps(ctx.v63.f32), _mm_load_ps(ctx.v51.f32), 0xEF));
	// vmsum4fp128 v57,v60,v51
	_mm_store_ps(ctx.v57.f32, _mm_dp_ps(_mm_load_ps(ctx.v60.f32), _mm_load_ps(ctx.v51.f32), 0xFF));
	// vaddfp128 v56,v57,v58
	_mm_store_ps(ctx.v56.f32, _mm_add_ps(_mm_load_ps(ctx.v57.f32), _mm_load_ps(ctx.v58.f32)));
	// vcfpsxws128 v55,v56,0
	_mm_store_si128((__m128i*)ctx.v55.s32, _mm_vctsxs(_mm_load_ps(ctx.v56.f32)));
	// stvewx128 v55,r0,r4
	ea = (ctx.r4.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v55.u32[3 - ((ea & 0xF) >> 2)]);
	// lwz r9,-460(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + -460);
	// lfs f12,0(r18)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r18.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f0,r7,r31
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r31.u32);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// blt cr6,0x82a2b528
	if (ctx.cr6.lt) goto loc_82A2B528;
	// vspltw128 v60,v49,0
	_mm_store_si128((__m128i*)ctx.v60.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v49.u32), 0xFF));
	// vor128 v52,v62,v62
	_mm_store_si128((__m128i*)ctx.v52.u8, _mm_load_si128((__m128i*)ctx.v62.u8));
	// li r10,1
	ctx.r10.s64 = 1;
	// li r4,8
	ctx.r4.s64 = 8;
	// addi r31,r18,4
	ctx.r31.s64 = ctx.r18.s64 + 4;
	// addi r9,r19,48
	ctx.r9.s64 = ctx.r19.s64 + 48;
	// li r5,-16
	ctx.r5.s64 = -16;
loc_82A2B2BC:
	// lvx128 v63,r0,r6
	simd::store_shuffled(ctx.v63, simd::load_and_shuffle(base + ((ctx.r6.u32) & ~0xF), VectorMaskL));
	// li r8,128
	ctx.r8.s64 = 128;
	// dcbt r8,r6
	// vperm128 v54,v63,v62,v7
	_mm_store_si128((__m128i*)ctx.v54.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)ctx.v62.u8), _mm_load_si128((__m128i*)ctx.v7.u8)));
	// vperm128 v33,v63,v62,v5
	_mm_store_si128((__m128i*)ctx.v33.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)ctx.v62.u8), _mm_load_si128((__m128i*)ctx.v5.u8)));
	// lwz r7,-380(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + -380);
	// vperm128 v32,v63,v62,v6
	_mm_store_si128((__m128i*)ctx.v32.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)ctx.v62.u8), _mm_load_si128((__m128i*)ctx.v6.u8)));
	// addi r8,r1,-368
	ctx.r8.s64 = ctx.r1.s64 + -368;
	// vperm128 v58,v63,v62,v4
	_mm_store_si128((__m128i*)ctx.v58.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)ctx.v62.u8), _mm_load_si128((__m128i*)ctx.v4.u8)));
	// addi r17,r1,-320
	ctx.r17.s64 = ctx.r1.s64 + -320;
	// vcsxwfp128 v0,v54,0
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v0.f32, _mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v54.u32)));
	// lvx128 v57,r9,r5
	simd::store_shuffled(ctx.v57, simd::load_and_shuffle(base + ((ctx.r9.u32 + ctx.r5.u32) & ~0xF), VectorMaskL));
	// vcsxwfp128 v13,v33,0
	_mm_store_ps(ctx.v13.f32, _mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v33.u32)));
	// lvx128 v56,r0,r9
	simd::store_shuffled(ctx.v56, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// vcsxwfp128 v12,v32,0
	_mm_store_ps(ctx.v12.f32, _mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v32.u32)));
	// lbzx r7,r10,r7
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r7.u32);
	// vcsxwfp128 v11,v58,0
	_mm_store_ps(ctx.v11.f32, _mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v58.u32)));
	// vor128 v58,v52,v52
	_mm_store_si128((__m128i*)ctx.v58.u8, _mm_load_si128((__m128i*)ctx.v52.u8));
	// cmplwi cr6,r7,4
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 4, ctx.xer);
	// vxor128 v55,v0,v61
	_mm_store_si128((__m128i*)ctx.v55.u8, _mm_xor_si128(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)ctx.v61.u8)));
	// vxor128 v54,v13,v61
	_mm_store_si128((__m128i*)ctx.v54.u8, _mm_xor_si128(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)ctx.v61.u8)));
	// vmaddfp v0,v10,v12,v0
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v10.f32), _mm_load_ps(ctx.v12.f32)), _mm_load_ps(ctx.v0.f32)));
	// vmaddfp v13,v10,v11,v13
	_mm_store_ps(ctx.v13.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v10.f32), _mm_load_ps(ctx.v11.f32)), _mm_load_ps(ctx.v13.f32)));
	// vmsum4fp128 v33,v55,v12
	_mm_store_ps(ctx.v33.f32, _mm_dp_ps(_mm_load_ps(ctx.v55.f32), _mm_load_ps(ctx.v12.f32), 0xFF));
	// vmsum4fp128 v32,v54,v11
	_mm_store_ps(ctx.v32.f32, _mm_dp_ps(_mm_load_ps(ctx.v54.f32), _mm_load_ps(ctx.v11.f32), 0xFF));
	// vaddfp128 v55,v0,v60
	_mm_store_ps(ctx.v55.f32, _mm_add_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v60.f32)));
	// vaddfp128 v54,v13,v60
	_mm_store_ps(ctx.v54.f32, _mm_add_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v60.f32)));
	// vrefp128 v33,v33
	_mm_store_ps(ctx.v33.f32, _mm_div_ps(_mm_set1_ps(1), _mm_load_ps(ctx.v33.f32)));
	// vrefp128 v32,v32
	_mm_store_ps(ctx.v32.f32, _mm_div_ps(_mm_set1_ps(1), _mm_load_ps(ctx.v32.f32)));
	// vcfpsxws128 v0,v55,0
	_mm_store_si128((__m128i*)ctx.v0.s32, _mm_vctsxs(_mm_load_ps(ctx.v55.f32)));
	// vcfpsxws128 v13,v54,0
	_mm_store_si128((__m128i*)ctx.v13.s32, _mm_vctsxs(_mm_load_ps(ctx.v54.f32)));
	// vxor128 v55,v33,v53
	_mm_store_si128((__m128i*)ctx.v55.u8, _mm_xor_si128(_mm_load_si128((__m128i*)ctx.v33.u8), _mm_load_si128((__m128i*)ctx.v53.u8)));
	// vxor128 v54,v32,v61
	_mm_store_si128((__m128i*)ctx.v54.u8, _mm_xor_si128(_mm_load_si128((__m128i*)ctx.v32.u8), _mm_load_si128((__m128i*)ctx.v61.u8)));
	// vslw128 v33,v0,v59
	ctx.v33.u32[0] = ctx.v0.u32[0] << (ctx.v59.u8[0] & 0x1F);
	ctx.v33.u32[1] = ctx.v0.u32[1] << (ctx.v59.u8[4] & 0x1F);
	ctx.v33.u32[2] = ctx.v0.u32[2] << (ctx.v59.u8[8] & 0x1F);
	ctx.v33.u32[3] = ctx.v0.u32[3] << (ctx.v59.u8[12] & 0x1F);
	// vslw128 v32,v13,v59
	ctx.v32.u32[0] = ctx.v13.u32[0] << (ctx.v59.u8[0] & 0x1F);
	ctx.v32.u32[1] = ctx.v13.u32[1] << (ctx.v59.u8[4] & 0x1F);
	ctx.v32.u32[2] = ctx.v13.u32[2] << (ctx.v59.u8[8] & 0x1F);
	ctx.v32.u32[3] = ctx.v13.u32[3] << (ctx.v59.u8[12] & 0x1F);
	// stvx128 v33,r0,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v33.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v32,r0,r17
	_mm_store_si128((__m128i*)(base + ((ctx.r17.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v32.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// bne cr6,0x82a2b44c
	if (!ctx.cr6.eq) goto loc_82A2B44C;
	// vperm128 v58,v63,v62,v3
	_mm_store_si128((__m128i*)ctx.v58.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)ctx.v62.u8), _mm_load_si128((__m128i*)ctx.v3.u8)));
	// addi r8,r1,-288
	ctx.r8.s64 = ctx.r1.s64 + -288;
	// vperm128 v33,v63,v62,v2
	_mm_store_si128((__m128i*)ctx.v33.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)ctx.v62.u8), _mm_load_si128((__m128i*)ctx.v2.u8)));
	// addi r7,r1,-336
	ctx.r7.s64 = ctx.r1.s64 + -336;
	// vperm128 v32,v63,v62,v1
	_mm_store_si128((__m128i*)ctx.v32.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)ctx.v62.u8), _mm_load_si128((__m128i*)ctx.v1.u8)));
	// addi r5,r1,-304
	ctx.r5.s64 = ctx.r1.s64 + -304;
	// std r10,-432(r1)
	PPC_STORE_U64(ctx.r1.u32 + -432, ctx.r10.u64);
	// vcsxwfp128 v0,v58,0
	_mm_store_ps(ctx.v0.f32, _mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v58.u32)));
	// vor128 v58,v7,v7
	_mm_store_si128((__m128i*)ctx.v58.u8, _mm_load_si128((__m128i*)ctx.v7.u8));
	// lvx128 v7,r0,r8
	simd::store_shuffled(ctx.v7, simd::load_and_shuffle(base + ((ctx.r8.u32) & ~0xF), VectorMaskL));
	// vcsxwfp128 v13,v33,0
	_mm_store_ps(ctx.v13.f32, _mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v33.u32)));
	// vcsxwfp128 v12,v32,0
	_mm_store_ps(ctx.v12.f32, _mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v32.u32)));
	// lwz r3,20(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 20);
	// vperm128 v33,v63,v62,v7
	_mm_store_si128((__m128i*)ctx.v33.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)ctx.v62.u8), _mm_load_si128((__m128i*)ctx.v7.u8)));
	// vcsxwfp128 v11,v33,0
	_mm_store_ps(ctx.v11.f32, _mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v33.u32)));
	// vxor128 v32,v0,v61
	_mm_store_si128((__m128i*)ctx.v32.u8, _mm_xor_si128(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)ctx.v61.u8)));
	// vmaddfp v9,v10,v13,v0
	_mm_store_ps(ctx.v9.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v10.f32), _mm_load_ps(ctx.v13.f32)), _mm_load_ps(ctx.v0.f32)));
	// vxor128 v63,v12,v61
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_xor_si128(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)ctx.v61.u8)));
	// vmsum4fp128 v33,v32,v13
	_mm_store_ps(ctx.v33.f32, _mm_dp_ps(_mm_load_ps(ctx.v32.f32), _mm_load_ps(ctx.v13.f32), 0xFF));
	// vmaddfp v0,v10,v11,v12
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v10.f32), _mm_load_ps(ctx.v11.f32)), _mm_load_ps(ctx.v12.f32)));
	// vmsum4fp128 v32,v63,v11
	_mm_store_ps(ctx.v32.f32, _mm_dp_ps(_mm_load_ps(ctx.v63.f32), _mm_load_ps(ctx.v11.f32), 0xFF));
	// vaddfp128 v63,v9,v60
	_mm_store_ps(ctx.v63.f32, _mm_add_ps(_mm_load_ps(ctx.v9.f32), _mm_load_ps(ctx.v60.f32)));
	// vaddfp128 v0,v0,v60
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v60.f32)));
	// vrefp128 v33,v33
	_mm_store_ps(ctx.v33.f32, _mm_div_ps(_mm_set1_ps(1), _mm_load_ps(ctx.v33.f32)));
	// vrefp128 v32,v32
	_mm_store_ps(ctx.v32.f32, _mm_div_ps(_mm_set1_ps(1), _mm_load_ps(ctx.v32.f32)));
	// vcfpsxws128 v63,v63,0
	_mm_store_si128((__m128i*)ctx.v63.s32, _mm_vctsxs(_mm_load_ps(ctx.v63.f32)));
	// vctsxs v13,v0,0
	_mm_store_si128((__m128i*)ctx.v13.s32, _mm_vctsxs(_mm_load_ps(ctx.v0.f32)));
	// vxor128 v33,v33,v53
	_mm_store_si128((__m128i*)ctx.v33.u8, _mm_xor_si128(_mm_load_si128((__m128i*)ctx.v33.u8), _mm_load_si128((__m128i*)ctx.v53.u8)));
	// vxor128 v32,v32,v61
	_mm_store_si128((__m128i*)ctx.v32.u8, _mm_xor_si128(_mm_load_si128((__m128i*)ctx.v32.u8), _mm_load_si128((__m128i*)ctx.v61.u8)));
	// vslw128 v63,v63,v59
	ctx.v63.u32[0] = ctx.v63.u32[0] << (ctx.v59.u8[0] & 0x1F);
	ctx.v63.u32[1] = ctx.v63.u32[1] << (ctx.v59.u8[4] & 0x1F);
	ctx.v63.u32[2] = ctx.v63.u32[2] << (ctx.v59.u8[8] & 0x1F);
	ctx.v63.u32[3] = ctx.v63.u32[3] << (ctx.v59.u8[12] & 0x1F);
	// stvx128 v63,r0,r7
	_mm_store_si128((__m128i*)(base + ((ctx.r7.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lwz r8,-332(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + -332);
	// lwz r17,-328(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -328);
	// vslw128 v63,v13,v59
	ctx.v63.u32[0] = ctx.v13.u32[0] << (ctx.v59.u8[0] & 0x1F);
	ctx.v63.u32[1] = ctx.v13.u32[1] << (ctx.v59.u8[4] & 0x1F);
	ctx.v63.u32[2] = ctx.v13.u32[2] << (ctx.v59.u8[8] & 0x1F);
	ctx.v63.u32[3] = ctx.v13.u32[3] << (ctx.v59.u8[12] & 0x1F);
	// lwz r16,-324(r1)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r1.u32 + -324);
	// stvx128 v63,r0,r5
	_mm_store_si128((__m128i*)(base + ((ctx.r5.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lwz r5,-304(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + -304);
	// lwz r15,-300(r1)
	ctx.r15.u64 = PPC_LOAD_U32(ctx.r1.u32 + -300);
	// lwz r10,-296(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + -296);
	// lwz r14,-292(r1)
	ctx.r14.u64 = PPC_LOAD_U32(ctx.r1.u32 + -292);
	// lwz r7,-336(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + -336);
	// lvlx v11,r7,r11
	temp.u32 = ctx.r7.u32 + ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx v12,r8,r11
	temp.u32 = ctx.r8.u32 + ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vrlimi128 v11,v12,4,3
	_mm_store_ps(ctx.v11.f32, _mm_blend_ps(_mm_load_ps(ctx.v11.f32), _mm_permute_ps(_mm_load_ps(ctx.v12.f32), 57), 4));
	// lvlx v9,r17,r11
	temp.u32 = ctx.r17.u32 + ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v9.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx v8,r16,r11
	temp.u32 = ctx.r16.u32 + ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v8.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vrlimi128 v11,v9,2,2
	_mm_store_ps(ctx.v11.f32, _mm_blend_ps(_mm_load_ps(ctx.v11.f32), _mm_permute_ps(_mm_load_ps(ctx.v9.f32), 78), 2));
	// lvlx v31,r5,r11
	temp.u32 = ctx.r5.u32 + ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v31.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx v30,r15,r11
	temp.u32 = ctx.r15.u32 + ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v30.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vrlimi128 v31,v30,4,3
	_mm_store_ps(ctx.v31.f32, _mm_blend_ps(_mm_load_ps(ctx.v31.f32), _mm_permute_ps(_mm_load_ps(ctx.v30.f32), 57), 4));
	// lvlx128 v63,r10,r11
	temp.u32 = ctx.r10.u32 + ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx v29,r14,r11
	temp.u32 = ctx.r14.u32 + ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v29.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vrlimi128 v11,v8,1,1
	_mm_store_ps(ctx.v11.f32, _mm_blend_ps(_mm_load_ps(ctx.v11.f32), _mm_permute_ps(_mm_load_ps(ctx.v8.f32), 147), 1));
	// addi r10,r1,-176
	ctx.r10.s64 = ctx.r1.s64 + -176;
	// vrlimi128 v31,v63,2,2
	_mm_store_ps(ctx.v31.f32, _mm_blend_ps(_mm_load_ps(ctx.v31.f32), _mm_permute_ps(_mm_load_ps(ctx.v63.f32), 78), 2));
	// vmsum4fp128 v33,v11,v33
	_mm_store_ps(ctx.v33.f32, _mm_dp_ps(_mm_load_ps(ctx.v11.f32), _mm_load_ps(ctx.v33.f32), 0xFF));
	// stvx128 v58,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v58.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// vrlimi128 v31,v29,1,1
	_mm_store_ps(ctx.v31.f32, _mm_blend_ps(_mm_load_ps(ctx.v31.f32), _mm_permute_ps(_mm_load_ps(ctx.v29.f32), 147), 1));
	// lvx128 v7,r0,r10
	simd::store_shuffled(ctx.v7, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// ld r10,-432(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -432);
	// vmsum4fp128 v32,v31,v32
	_mm_store_ps(ctx.v32.f32, _mm_dp_ps(_mm_load_ps(ctx.v31.f32), _mm_load_ps(ctx.v32.f32), 0xFF));
	// vaddfp128 v58,v33,v32
	_mm_store_ps(ctx.v58.f32, _mm_add_ps(_mm_load_ps(ctx.v33.f32), _mm_load_ps(ctx.v32.f32)));
loc_82A2B44C:
	// lwz r8,-364(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + -364);
	// addi r7,r1,-460
	ctx.r7.s64 = ctx.r1.s64 + -460;
	// lwz r5,-368(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + -368);
	// lwz r17,-360(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -360);
	// lwz r16,-316(r1)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r1.u32 + -316);
	// lwz r15,-320(r1)
	ctx.r15.u64 = PPC_LOAD_U32(ctx.r1.u32 + -320);
	// lvlx128 v63,r8,r11
	temp.u32 = ctx.r8.u32 + ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lwz r8,-356(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + -356);
	// lvlx128 v33,r5,r11
	temp.u32 = ctx.r5.u32 + ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v33.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lwz r5,-312(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + -312);
	// vrlimi128 v33,v63,4,3
	_mm_store_ps(ctx.v33.f32, _mm_blend_ps(_mm_load_ps(ctx.v33.f32), _mm_permute_ps(_mm_load_ps(ctx.v63.f32), 57), 4));
	// lvlx128 v32,r17,r11
	temp.u32 = ctx.r17.u32 + ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v32.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v63,r16,r11
	temp.u32 = ctx.r16.u32 + ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lwz r17,-308(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + -308);
	// lvlx v0,r15,r11
	temp.u32 = ctx.r15.u32 + ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lwz r16,-408(r1)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r1.u32 + -408);
	// vrlimi128 v0,v63,4,3
	_mm_store_ps(ctx.v0.f32, _mm_blend_ps(_mm_load_ps(ctx.v0.f32), _mm_permute_ps(_mm_load_ps(ctx.v63.f32), 57), 4));
	// lvlx128 v63,r8,r11
	temp.u32 = ctx.r8.u32 + ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vrlimi128 v33,v32,2,2
	_mm_store_ps(ctx.v33.f32, _mm_blend_ps(_mm_load_ps(ctx.v33.f32), _mm_permute_ps(_mm_load_ps(ctx.v32.f32), 78), 2));
	// lvlx v13,r5,r11
	temp.u32 = ctx.r5.u32 + ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx v12,r17,r11
	temp.u32 = ctx.r17.u32 + ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vrlimi128 v0,v13,2,2
	_mm_store_ps(ctx.v0.f32, _mm_blend_ps(_mm_load_ps(ctx.v0.f32), _mm_permute_ps(_mm_load_ps(ctx.v13.f32), 78), 2));
	// vrlimi128 v33,v63,1,1
	_mm_store_ps(ctx.v33.f32, _mm_blend_ps(_mm_load_ps(ctx.v33.f32), _mm_permute_ps(_mm_load_ps(ctx.v63.f32), 147), 1));
	// vrlimi128 v0,v12,1,1
	_mm_store_ps(ctx.v0.f32, _mm_blend_ps(_mm_load_ps(ctx.v0.f32), _mm_permute_ps(_mm_load_ps(ctx.v12.f32), 147), 1));
	// vmsum4fp128 v55,v33,v55
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v55.f32, _mm_dp_ps(_mm_load_ps(ctx.v33.f32), _mm_load_ps(ctx.v55.f32), 0xFF));
	// vmsum4fp128 v54,v0,v54
	_mm_store_ps(ctx.v54.f32, _mm_dp_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v54.f32), 0xFF));
	// vaddfp128 v33,v58,v55
	_mm_store_ps(ctx.v33.f32, _mm_add_ps(_mm_load_ps(ctx.v58.f32), _mm_load_ps(ctx.v55.f32)));
	// vaddfp128 v32,v33,v54
	_mm_store_ps(ctx.v32.f32, _mm_add_ps(_mm_load_ps(ctx.v33.f32), _mm_load_ps(ctx.v54.f32)));
	// vmulfp128 v63,v32,v50
	_mm_store_ps(ctx.v63.f32, _mm_mul_ps(_mm_load_ps(ctx.v32.f32), _mm_load_ps(ctx.v50.f32)));
	// vcmpgtfp128 v58,v56,v63
	_mm_store_ps(ctx.v58.f32, _mm_cmpgt_ps(_mm_load_ps(ctx.v56.f32), _mm_load_ps(ctx.v63.f32)));
	// vcmpgtfp128 v57,v57,v63
	_mm_store_ps(ctx.v57.f32, _mm_cmpgt_ps(_mm_load_ps(ctx.v57.f32), _mm_load_ps(ctx.v63.f32)));
	// vcsxwfp128 v56,v58,0
	_mm_store_ps(ctx.v56.f32, _mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v58.u32)));
	// vcsxwfp128 v55,v57,0
	_mm_store_ps(ctx.v55.f32, _mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v57.u32)));
	// vmsum3fp128 v54,v56,v51
	_mm_store_ps(ctx.v54.f32, _mm_dp_ps(_mm_load_ps(ctx.v56.f32), _mm_load_ps(ctx.v51.f32), 0xEF));
	// vmsum4fp128 v33,v55,v51
	_mm_store_ps(ctx.v33.f32, _mm_dp_ps(_mm_load_ps(ctx.v55.f32), _mm_load_ps(ctx.v51.f32), 0xFF));
	// vaddfp128 v32,v33,v54
	_mm_store_ps(ctx.v32.f32, _mm_add_ps(_mm_load_ps(ctx.v33.f32), _mm_load_ps(ctx.v54.f32)));
	// vcfpsxws128 v63,v32,0
	_mm_store_si128((__m128i*)ctx.v63.s32, _mm_vctsxs(_mm_load_ps(ctx.v32.f32)));
	// stvewx128 v63,r0,r7
	ea = (ctx.r7.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v63.u32[3 - ((ea & 0xF) >> 2)]);
	// lfs f12,0(r31)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lwz r5,-460(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + -460);
	// add r8,r4,r5
	ctx.r8.u64 = ctx.r4.u64 + ctx.r5.u64;
	// rlwinm r7,r8,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f11,r7,r16
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r16.u32);
	ctx.f11.f64 = double(temp.f32);
	// fadds f0,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 + ctx.f0.f64));
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// blt cr6,0x82a2b524
	if (ctx.cr6.lt) goto loc_82A2B524;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r6,r6,16
	ctx.r6.s64 = ctx.r6.s64 + 16;
	// addi r9,r9,32
	ctx.r9.s64 = ctx.r9.s64 + 32;
	// addi r4,r4,8
	ctx.r4.s64 = ctx.r4.s64 + 8;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmplwi cr6,r10,700
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 700, ctx.xer);
	// li r5,-16
	ctx.r5.s64 = -16;
	// blt cr6,0x82a2b2bc
	if (ctx.cr6.lt) goto loc_82A2B2BC;
loc_82A2B524:
	// lwz r8,-464(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + -464);
loc_82A2B528:
	// fcmpu cr6,f0,f13
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x82a2b5cc
	if (!ctx.cr6.gt) goto loc_82A2B5CC;
	// vcfpsxws128 v60,v47,0
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_si128((__m128i*)ctx.v60.s32, _mm_vctsxs(_mm_load_ps(ctx.v47.f32)));
	// li r10,16
	ctx.r10.s64 = 16;
	// lbz r7,63(r1)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r1.u32 + 63);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r9,-416(r1)
	PPC_STORE_U32(ctx.r1.u32 + -416, ctx.r9.u32);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// vpkuwus128 v59,v60,v62
	_mm_store_si128((__m128i*)vTemp.u32, _mm_load_si128((__m128i*)ctx.v62.u32));
	ctx.v59.u16[0] = vTemp.u32[0] > 0xFFFF ? 0xFFFF : vTemp.u32[0];
	ctx.v59.u16[1] = vTemp.u32[1] > 0xFFFF ? 0xFFFF : vTemp.u32[1];
	ctx.v59.u16[2] = vTemp.u32[2] > 0xFFFF ? 0xFFFF : vTemp.u32[2];
	ctx.v59.u16[3] = vTemp.u32[3] > 0xFFFF ? 0xFFFF : vTemp.u32[3];
	_mm_store_si128((__m128i*)vTemp.u32, _mm_load_si128((__m128i*)ctx.v60.u32));
	ctx.v59.u16[4] = vTemp.u32[0] > 0xFFFF ? 0xFFFF : vTemp.u32[0];
	ctx.v59.u16[5] = vTemp.u32[1] > 0xFFFF ? 0xFFFF : vTemp.u32[1];
	ctx.v59.u16[6] = vTemp.u32[2] > 0xFFFF ? 0xFFFF : vTemp.u32[2];
	ctx.v59.u16[7] = vTemp.u32[3] > 0xFFFF ? 0xFFFF : vTemp.u32[3];
	// stvlx128 v59,r0,r8
	ea = ctx.r8.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v59.u8[15 - i]);
	// stvrx128 v59,r8,r10
	ea = ctx.r8.u32 + ctx.r10.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		PPC_STORE_U8(ea - i - 1, ctx.v59.u8[i]);
	// beq cr6,0x82a2b578
	if (ctx.cr6.eq) goto loc_82A2B578;
	// addi r10,r1,-288
	ctx.r10.s64 = ctx.r1.s64 + -288;
	// fmr f13,f0
	ctx.fpscr.disableFlushModeUnconditional();
	ctx.f13.f64 = ctx.f0.f64;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,516(r3)
	PPC_STORE_U32(ctx.r3.u32 + 516, ctx.r11.u32);
	// lvx128 v58,r0,r26
	simd::store_shuffled(ctx.v58, simd::load_and_shuffle(base + ((ctx.r26.u32) & ~0xF), VectorMaskL));
	// addi r11,r3,516
	ctx.r11.s64 = ctx.r3.s64 + 516;
	// stvx128 v58,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v58.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// b 0x82a2b5a4
	goto loc_82A2B5A4;
loc_82A2B578:
	// lwz r11,516(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 516);
	// addi r8,r8,8
	ctx.r8.s64 = ctx.r8.s64 + 8;
	// addi r10,r3,516
	ctx.r10.s64 = ctx.r3.s64 + 516;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r8,-464(r1)
	PPC_STORE_U32(ctx.r1.u32 + -464, ctx.r8.u32);
	// stw r11,516(r3)
	PPC_STORE_U32(ctx.r3.u32 + 516, ctx.r11.u32);
	// cmplwi cr6,r11,64
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 64, ctx.xer);
	// bge cr6,0x82a2b644
	if (!ctx.cr6.lt) goto loc_82A2B644;
	// addi r11,r1,-288
	ctx.r11.s64 = ctx.r1.s64 + -288;
	// lvx128 v57,r0,r26
	simd::store_shuffled(ctx.v57, simd::load_and_shuffle(base + ((ctx.r26.u32) & ~0xF), VectorMaskL));
	// stvx128 v57,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v57.u8), _mm_load_si128((__m128i*)VectorMaskL)));
loc_82A2B5A4:
	// lvx128 v1,r0,r25
	simd::store_shuffled(ctx.v1, simd::load_and_shuffle(base + ((ctx.r25.u32) & ~0xF), VectorMaskL));
	// lvx128 v2,r0,r24
	simd::store_shuffled(ctx.v2, simd::load_and_shuffle(base + ((ctx.r24.u32) & ~0xF), VectorMaskL));
	// lvx128 v3,r0,r23
	simd::store_shuffled(ctx.v3, simd::load_and_shuffle(base + ((ctx.r23.u32) & ~0xF), VectorMaskL));
	// lvx128 v59,r0,r22
	simd::store_shuffled(ctx.v59, simd::load_and_shuffle(base + ((ctx.r22.u32) & ~0xF), VectorMaskL));
	// lvx128 v4,r0,r21
	simd::store_shuffled(ctx.v4, simd::load_and_shuffle(base + ((ctx.r21.u32) & ~0xF), VectorMaskL));
	// lvx128 v5,r0,r20
	simd::store_shuffled(ctx.v5, simd::load_and_shuffle(base + ((ctx.r20.u32) & ~0xF), VectorMaskL));
	// lvx128 v6,r0,r30
	simd::store_shuffled(ctx.v6, simd::load_and_shuffle(base + ((ctx.r30.u32) & ~0xF), VectorMaskL));
	// lvx128 v7,r0,r29
	simd::store_shuffled(ctx.v7, simd::load_and_shuffle(base + ((ctx.r29.u32) & ~0xF), VectorMaskL));
	// lvx128 v51,r0,r28
	simd::store_shuffled(ctx.v51, simd::load_and_shuffle(base + ((ctx.r28.u32) & ~0xF), VectorMaskL));
	// lvx128 v62,r0,r27
	simd::store_shuffled(ctx.v62, simd::load_and_shuffle(base + ((ctx.r27.u32) & ~0xF), VectorMaskL));
loc_82A2B5CC:
	// lwz r11,-452(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -452);
	// vaddfp128 v47,v47,v45
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v47.f32, _mm_add_ps(_mm_load_ps(ctx.v47.f32), _mm_load_ps(ctx.v45.f32)));
	// lwz r10,-392(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + -392);
	// vaddfp128 v49,v49,v42
	_mm_store_ps(ctx.v49.f32, _mm_add_ps(_mm_load_ps(ctx.v49.f32), _mm_load_ps(ctx.v42.f32)));
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,-452(r1)
	PPC_STORE_U32(ctx.r1.u32 + -452, ctx.r11.u32);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82a2b1d8
	if (!ctx.cr6.gt) goto loc_82A2B1D8;
	// lwz r11,-412(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -412);
	// vaddfp128 v48,v48,v43
	_mm_store_ps(ctx.v48.f32, _mm_add_ps(_mm_load_ps(ctx.v48.f32), _mm_load_ps(ctx.v43.f32)));
	// lwz r10,-400(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + -400);
	// vaddfp128 v44,v44,v39
	_mm_store_ps(ctx.v44.f32, _mm_add_ps(_mm_load_ps(ctx.v44.f32), _mm_load_ps(ctx.v39.f32)));
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,-412(r1)
	PPC_STORE_U32(ctx.r1.u32 + -412, ctx.r11.u32);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82a2b1c8
	if (!ctx.cr6.gt) goto loc_82A2B1C8;
	// vmulfp128 v37,v37,v36
	_mm_store_ps(ctx.v37.f32, _mm_mul_ps(_mm_load_ps(ctx.v37.f32), _mm_load_ps(ctx.v36.f32)));
	// lwz r11,-448(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -448);
	// lwz r10,-456(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + -456);
	// lwz r9,52(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 52);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r7,r10,11184
	ctx.r7.s64 = ctx.r10.s64 + 11184;
	// stw r11,-448(r1)
	PPC_STORE_U32(ctx.r1.u32 + -448, ctx.r11.u32);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// stw r7,-456(r1)
	PPC_STORE_U32(ctx.r1.u32 + -456, ctx.r7.u32);
	// vmulfp128 v56,v35,v37
	_mm_store_ps(ctx.v56.f32, _mm_mul_ps(_mm_load_ps(ctx.v35.f32), _mm_load_ps(ctx.v37.f32)));
	// vrfin128 v48,v56
	_mm_store_ps(ctx.v48.f32, _mm_round_ps(_mm_load_ps(ctx.v56.f32), _MM_FROUND_TO_NEAREST_INT | _MM_FROUND_NO_EXC));
	// ble cr6,0x82a2b0f8
	if (!ctx.cr6.gt) goto loc_82A2B0F8;
loc_82A2B63C:
	// lwz r3,-416(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + -416);
	// b 0x82fa7690
	__restgprlr_14(ctx, base);
	return;
loc_82A2B644:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82fa7690
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A2B64C"))) PPC_WEAK_FUNC(sub_82A2B64C);
PPC_FUNC_IMPL(__imp__sub_82A2B64C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A2B650"))) PPC_WEAK_FUNC(sub_82A2B650);
PPC_FUNC_IMPL(__imp__sub_82A2B650) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x82A2B658;
	__savegprlr_29(ctx, base);
	// stwu r1,-1408(r1)
	ea = -1408 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,516(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 516);
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r9
	ctx.r29.u64 = ctx.r9.u64;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// ble cr6,0x82a2b710
	if (!ctx.cr6.gt) goto loc_82A2B710;
	// li r10,64
	ctx.r10.s64 = 64;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// addi r11,r1,860
	ctx.r11.s64 = ctx.r1.s64 + 860;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82A2B688:
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// stwu r9,8(r11)
	ea = 8 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x82a2b688
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82A2B688;
	// lwz r5,516(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 516);
	// addi r4,r3,4
	ctx.r4.s64 = ctx.r3.s64 + 4;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// mr r8,r5
	ctx.r8.u64 = ctx.r5.u64;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,608
	ctx.r3.s64 = ctx.r1.s64 + 608;
	// bl 0x82a2ac18
	ctx.lr = 0x82A2B6B4;
	sub_82A2AC18(ctx, base);
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82a2b704
	if (ctx.cr6.gt) goto loc_82A2B704;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82a2b6fc
	if (ctx.cr6.eq) goto loc_82A2B6FC;
	// addi r11,r1,94
	ctx.r11.s64 = ctx.r1.s64 + 94;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// addi r10,r31,-4
	ctx.r10.s64 = ctx.r31.s64 + -4;
loc_82A2B6D8:
	// lhz r5,2(r11)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r11.u32 + 2);
	// lhz r7,6(r11)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r11.u32 + 6);
	// lhz r6,4(r11)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r11.u32 + 4);
	// lhzu r8,8(r11)
	ea = 8 + ctx.r11.u32;
	ctx.r8.u64 = PPC_LOAD_U16(ea);
	ctx.r11.u32 = ea;
	// stw r5,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r5.u32);
	// stw r7,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r7.u32);
	// stw r6,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r6.u32);
	// stwu r8,16(r10)
	ea = 16 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x82a2b6d8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82A2B6D8;
loc_82A2B6FC:
	// stw r9,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r9.u32);
	// b 0x82a2b748
	goto loc_82A2B748;
loc_82A2B704:
	// lis r29,-32761
	ctx.r29.s64 = -2147024896;
	// ori r29,r29,14
	ctx.r29.u64 = ctx.r29.u64 | 14;
	// b 0x82a2b748
	goto loc_82A2B748;
loc_82A2B710:
	// bne cr6,0x82a2b740
	if (!ctx.cr6.eq) goto loc_82A2B740;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// lhz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 4);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lhz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 8);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// lhz r11,6(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 6);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// lhz r11,10(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 10);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// b 0x82a2b748
	goto loc_82A2B748;
loc_82A2B740:
	// lis r29,-32768
	ctx.r29.s64 = -2147483648;
	// ori r29,r29,16389
	ctx.r29.u64 = ctx.r29.u64 | 16389;
loc_82A2B748:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,1408
	ctx.r1.s64 = ctx.r1.s64 + 1408;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A2B754"))) PPC_WEAK_FUNC(sub_82A2B754);
PPC_FUNC_IMPL(__imp__sub_82A2B754) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A2B758"))) PPC_WEAK_FUNC(sub_82A2B758);
PPC_FUNC_IMPL(__imp__sub_82A2B758) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lhz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// lhz r10,0(r5)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r5.u32 + 0);
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x82a2b774
	if (ctx.cr6.gt) goto loc_82A2B774;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
loc_82A2B774:
	// sth r9,0(r6)
	PPC_STORE_U16(ctx.r6.u32 + 0, ctx.r9.u16);
	// lhz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 4);
	// lhz r10,4(r5)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r5.u32 + 4);
	// mr r7,r10
	ctx.r7.u64 = ctx.r10.u64;
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82a2b794
	if (ctx.cr6.lt) goto loc_82A2B794;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_82A2B794:
	// clrlwi r10,r11,16
	ctx.r10.u64 = ctx.r11.u32 & 0xFFFF;
	// sth r11,4(r6)
	PPC_STORE_U16(ctx.r6.u32 + 4, ctx.r11.u16);
	// clrlwi r11,r9,16
	ctx.r11.u64 = ctx.r9.u32 & 0xFFFF;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82a2b7b0
	if (!ctx.cr6.gt) goto loc_82A2B7B0;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82A2B7B0:
	// lhz r11,2(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 2);
	// lhz r9,2(r5)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r5.u32 + 2);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// ble cr6,0x82a2b7cc
	if (!ctx.cr6.gt) goto loc_82A2B7CC;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
loc_82A2B7CC:
	// sth r9,2(r6)
	PPC_STORE_U16(ctx.r6.u32 + 2, ctx.r9.u16);
	// lhz r10,6(r5)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r5.u32 + 6);
	// mr r7,r10
	ctx.r7.u64 = ctx.r10.u64;
	// lhz r11,6(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 6);
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82a2b7ec
	if (ctx.cr6.lt) goto loc_82A2B7EC;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_82A2B7EC:
	// clrlwi r10,r11,16
	ctx.r10.u64 = ctx.r11.u32 & 0xFFFF;
	// sth r11,6(r6)
	PPC_STORE_U16(ctx.r6.u32 + 6, ctx.r11.u16);
	// clrlwi r11,r9,16
	ctx.r11.u64 = ctx.r9.u32 & 0xFFFF;
	// subfc r11,r11,r10
	ctx.xer.ca = ctx.r10.u32 >= ctx.r11.u32;
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addi r3,r11,2
	ctx.r3.s64 = ctx.r11.s64 + 2;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A2B808"))) PPC_WEAK_FUNC(sub_82A2B808);
PPC_FUNC_IMPL(__imp__sub_82A2B808) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa765c
	ctx.lr = 0x82A2B810;
	__savegprlr_21(ctx, base);
	// stfd f31,-104(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -104, ctx.f31.u64);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r31,r3,3584
	ctx.r31.s64 = ctx.r3.s64 + 3584;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// lis r11,-32093
	ctx.r11.s64 = -2103246848;
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// li r5,8
	ctx.r5.s64 = 8;
	// addi r6,r11,-21960
	ctx.r6.s64 = ctx.r11.s64 + -21960;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x82fa3590
	ctx.lr = 0x82A2B83C;
	sub_82FA3590(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// ble cr6,0x82a2b9c0
	if (!ctx.cr6.gt) goto loc_82A2B9C0;
	// addi r11,r31,-8
	ctx.r11.s64 = ctx.r31.s64 + -8;
	// mtctr r29
	ctx.ctr.u64 = ctx.r29.u64;
loc_82A2B850:
	// stwu r10,8(r11)
	ea = 8 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// bdnz 0x82a2b850
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82A2B850;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// ble cr6,0x82a2b9c0
	if (!ctx.cr6.gt) goto loc_82A2B9C0;
	// addi r9,r21,-4
	ctx.r9.s64 = ctx.r21.s64 + -4;
	// mtctr r29
	ctx.ctr.u64 = ctx.r29.u64;
	// addi r10,r21,3580
	ctx.r10.s64 = ctx.r21.s64 + 3580;
loc_82A2B870:
	// lwzu r11,8(r10)
	ea = 8 + ctx.r10.u32;
	ctx.r11.u64 = PPC_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// lhz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + 4);
	// lhz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// lhz r6,6(r11)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r11.u32 + 6);
	// lhz r11,2(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 2);
	// subf r8,r7,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r7.s64;
	// subf r11,r11,r6
	ctx.r11.s64 = ctx.r6.s64 - ctx.r11.s64;
	// extsw r8,r8
	ctx.r8.s64 = ctx.r8.s32;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// std r8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// lfd f13,88(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfsu f0,4(r9)
	temp.f32 = float(ctx.f0.f64);
	ea = 4 + ctx.r9.u32;
	PPC_STORE_U32(ea, temp.u32);
	ctx.r9.u32 = ea;
	// bdnz 0x82a2b870
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82A2B870;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// ble cr6,0x82a2b9c0
	if (!ctx.cr6.gt) goto loc_82A2B9C0;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r24,1
	ctx.r24.s64 = 1;
	// mr r26,r21
	ctx.r26.u64 = ctx.r21.u64;
	// mr r22,r29
	ctx.r22.u64 = ctx.r29.u64;
	// lfd f0,11528(r11)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + 11528);
loc_82A2B8DC:
	// mr r23,r24
	ctx.r23.u64 = ctx.r24.u64;
	// cmpw cr6,r24,r29
	ctx.cr6.compare<int32_t>(ctx.r24.s32, ctx.r29.s32, ctx.xer);
	// bge cr6,0x82a2b9ac
	if (!ctx.cr6.lt) goto loc_82A2B9AC;
	// addi r25,r26,4
	ctx.r25.s64 = ctx.r26.s64 + 4;
	// addi r30,r31,8
	ctx.r30.s64 = ctx.r31.s64 + 8;
loc_82A2B8F0:
	// lwz r28,0(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r27,0(r30)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpw cr6,r28,r27
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r27.s32, ctx.xer);
	// beq cr6,0x82a2b998
	if (ctx.cr6.eq) goto loc_82A2B998;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r5,4(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82a2b758
	ctx.lr = 0x82A2B914;
	sub_82A2B758(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82a2b9ac
	if (ctx.cr0.eq) goto loc_82A2B9AC;
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x82a2b998
	if (ctx.cr6.eq) goto loc_82A2B998;
	// lhz r10,82(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 82);
	// lfs f12,0(r26)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lhz r11,86(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 86);
	// lfs f13,0(r25)
	temp.u32 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lhz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r1.u32 + 84);
	// fadds f13,f13,f12
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f12.f64));
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// lhz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// subf r10,r8,r9
	ctx.r10.s64 = ctx.r9.s64 - ctx.r8.s64;
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// extsw r11,r10
	ctx.r11.s64 = ctx.r10.s32;
	// std r11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// lfd f11,96(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f11,f11
	ctx.f11.f64 = double(ctx.f11.s64);
	// lfd f12,88(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// frsp f11,f11
	ctx.f11.f64 = double(float(ctx.f11.f64));
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// fmuls f12,f11,f12
	ctx.f12.f64 = double(float(ctx.f11.f64 * ctx.f12.f64));
	// fmul f12,f12,f0
	ctx.f12.f64 = ctx.f12.f64 * ctx.f0.f64;
	// fdiv f13,f12,f13
	ctx.f13.f64 = ctx.f12.f64 / ctx.f13.f64;
	// fcmpu cr6,f13,f31
	ctx.cr6.compare(ctx.f13.f64, ctx.f31.f64);
	// ble cr6,0x82a2b998
	if (!ctx.cr6.gt) goto loc_82A2B998;
	// cmpw cr6,r28,r27
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r27.s32, ctx.xer);
	// ble cr6,0x82a2b994
	if (!ctx.cr6.gt) goto loc_82A2B994;
	// stw r27,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r27.u32);
	// b 0x82a2b998
	goto loc_82A2B998;
loc_82A2B994:
	// stw r28,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r28.u32);
loc_82A2B998:
	// addi r23,r23,1
	ctx.r23.s64 = ctx.r23.s64 + 1;
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// addi r25,r25,4
	ctx.r25.s64 = ctx.r25.s64 + 4;
	// cmpw cr6,r23,r29
	ctx.cr6.compare<int32_t>(ctx.r23.s32, ctx.r29.s32, ctx.xer);
	// blt cr6,0x82a2b8f0
	if (ctx.cr6.lt) goto loc_82A2B8F0;
loc_82A2B9AC:
	// addic. r22,r22,-1
	ctx.xer.ca = ctx.r22.u32 > 0;
	ctx.r22.s64 = ctx.r22.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// addi r24,r24,1
	ctx.r24.s64 = ctx.r24.s64 + 1;
	// addi r26,r26,4
	ctx.r26.s64 = ctx.r26.s64 + 4;
	// bne 0x82a2b8dc
	if (!ctx.cr0.eq) goto loc_82A2B8DC;
loc_82A2B9C0:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lfd f31,-104(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -104);
	// b 0x82fa76ac
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A2B9CC"))) PPC_WEAK_FUNC(sub_82A2B9CC);
PPC_FUNC_IMPL(__imp__sub_82A2B9CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A2B9D0"))) PPC_WEAK_FUNC(sub_82A2B9D0);
PPC_FUNC_IMPL(__imp__sub_82A2B9D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7658
	ctx.lr = 0x82A2B9D8;
	__savegprlr_20(ctx, base);
	// addi r12,r1,-104
	ctx.r12.s64 = ctx.r1.s64 + -104;
	// bl 0x82fa8d0c
	ctx.lr = 0x82A2B9E0;
	__savefpr_21(ctx, base);
	// stwu r1,-368(r1)
	ea = -368 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r20,r6
	ctx.r20.u64 = ctx.r6.u64;
	// mr r21,r7
	ctx.r21.u64 = ctx.r7.u64;
	// mr r22,r8
	ctx.r22.u64 = ctx.r8.u64;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// ble cr6,0x82a2ba18
	if (!ctx.cr6.gt) goto loc_82A2BA18;
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// addi r10,r3,3580
	ctx.r10.s64 = ctx.r3.s64 + 3580;
loc_82A2BA0C:
	// stwu r11,8(r10)
	ea = 8 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r10.u32 = ea;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// bdnz 0x82a2ba0c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82A2BA0C;
loc_82A2BA18:
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lfd f21,-13968(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f21.u64 = PPC_LOAD_U64(ctx.r11.u32 + -13968);
	// fmr f1,f21
	ctx.f1.f64 = ctx.f21.f64;
	// bl 0x82a2b808
	ctx.lr = 0x82A2BA30;
	sub_82A2B808(ctx, base);
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// ble cr6,0x82a2ba70
	if (!ctx.cr6.gt) goto loc_82A2BA70;
	// addi r9,r29,3576
	ctx.r9.s64 = ctx.r29.s64 + 3576;
	// mtctr r28
	ctx.ctr.u64 = ctx.r28.u64;
loc_82A2BA40:
	// lwz r11,8(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// addi r10,r11,448
	ctx.r10.s64 = ctx.r11.s64 + 448;
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// b 0x82a2ba5c
	goto loc_82A2BA5C;
loc_82A2BA50:
	// addi r8,r10,448
	ctx.r8.s64 = ctx.r10.s64 + 448;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// rlwinm r10,r8,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
loc_82A2BA5C:
	// lwzx r10,r10,r29
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r29.u32);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x82a2ba50
	if (!ctx.cr6.eq) goto loc_82A2BA50;
	// stwu r11,8(r9)
	ea = 8 + ctx.r9.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r9.u32 = ea;
	// bdnz 0x82a2ba40
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82A2BA40;
loc_82A2BA70:
	// lis r11,-32003
	ctx.r11.s64 = -2097348608;
	// li r5,8
	ctx.r5.s64 = 8;
	// addi r6,r11,-14768
	ctx.r6.s64 = ctx.r11.s64 + -14768;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r29,3584
	ctx.r3.s64 = ctx.r29.s64 + 3584;
	// bl 0x82fa3590
	ctx.lr = 0x82A2BA88;
	sub_82FA3590(ctx, base);
	// li r23,0
	ctx.r23.s64 = 0;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// mr r24,r23
	ctx.r24.u64 = ctx.r23.u64;
	// mr r30,r23
	ctx.r30.u64 = ctx.r23.u64;
	// ble cr6,0x82a2bcb4
	if (!ctx.cr6.gt) goto loc_82A2BCB4;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32233
	ctx.r10.s64 = -2112421888;
	// lis r9,-32248
	ctx.r9.s64 = -2113404928;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// addi r31,r29,504
	ctx.r31.s64 = ctx.r29.s64 + 504;
	// lfd f24,22496(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f24.u64 = PPC_LOAD_U64(ctx.r11.u32 + 22496);
	// li r26,-1
	ctx.r26.s64 = -1;
	// lfs f22,24436(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 24436);
	ctx.f22.f64 = double(temp.f32);
	// lfs f23,-13632(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -13632);
	ctx.f23.f64 = double(temp.f32);
	// lfs f26,5184(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 5184);
	ctx.f26.f64 = double(temp.f32);
loc_82A2BAC4:
	// addi r11,r1,148
	ctx.r11.s64 = ctx.r1.s64 + 148;
	// stw r26,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r26.u32);
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// fmr f30,f26
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f26.f64;
	// addi r9,r30,448
	ctx.r9.s64 = ctx.r30.s64 + 448;
	// fmr f29,f26
	ctx.f29.f64 = ctx.f26.f64;
	// fmr f28,f26
	ctx.f28.f64 = ctx.f26.f64;
	// cmpw cr6,r30,r28
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r28.s32, ctx.xer);
	// rlwinm r9,r9,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// fmr f27,f26
	ctx.f27.f64 = ctx.f26.f64;
	// stw r23,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r23.u32);
	// fmr f31,f26
	ctx.f31.f64 = ctx.f26.f64;
	// stw r23,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r23.u32);
	// fmr f25,f23
	ctx.f25.f64 = ctx.f23.f64;
	// stw r23,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r23.u32);
	// stw r23,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r23.u32);
	// std r26,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r26.u64);
	// std r26,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r26.u64);
	// lwzx r25,r9,r29
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r29.u32);
	// stw r26,16(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16, ctx.r26.u32);
	// bge cr6,0x82a2bbe4
	if (!ctx.cr6.lt) goto loc_82A2BBE4;
	// rlwinm r11,r30,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// addi r27,r11,3588
	ctx.r27.s64 = ctx.r11.s64 + 3588;
loc_82A2BB24:
	// lwz r11,-4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + -4);
	// cmpw cr6,r25,r11
	ctx.cr6.compare<int32_t>(ctx.r25.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x82a2bbe4
	if (!ctx.cr6.eq) goto loc_82A2BBE4;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lhz r10,6(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 6);
	// lfs f0,8(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lhz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// fsubs f13,f0,f23
	ctx.f13.f64 = double(float(ctx.f0.f64 - ctx.f23.f64));
	// extsw r10,r10
	ctx.r10.s64 = ctx.r10.s32;
	// lhz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + 4);
	// lhz r7,2(r11)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r11.u32 + 2);
	// extsw r9,r9
	ctx.r9.s64 = ctx.r9.s32;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// extsw r8,r8
	ctx.r8.s64 = ctx.r8.s32;
	// extsw r10,r7
	ctx.r10.s64 = ctx.r7.s32;
	// fcmpu cr6,f25,f0
	ctx.cr6.compare(ctx.f25.f64, ctx.f0.f64);
	// std r9,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r9.u64);
	// lfd f11,88(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// std r8,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r8.u64);
	// lfd f10,96(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// std r10,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r10.u64);
	// lfd f0,104(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// lfd f12,80(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// fcfid f10,f10
	ctx.f10.f64 = double(ctx.f10.s64);
	// fcfid f11,f11
	ctx.f11.f64 = double(ctx.f11.s64);
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// fadds f31,f13,f31
	ctx.f31.f64 = double(float(ctx.f13.f64 + ctx.f31.f64));
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// frsp f10,f10
	ctx.f10.f64 = double(float(ctx.f10.f64));
	// frsp f11,f11
	ctx.f11.f64 = double(float(ctx.f11.f64));
	// fmadds f27,f12,f13,f27
	ctx.f27.f64 = double(float(ctx.f12.f64 * ctx.f13.f64 + ctx.f27.f64));
	// fmadds f28,f0,f13,f28
	ctx.f28.f64 = double(float(ctx.f0.f64 * ctx.f13.f64 + ctx.f28.f64));
	// fmadds f29,f10,f13,f29
	ctx.f29.f64 = double(float(ctx.f10.f64 * ctx.f13.f64 + ctx.f29.f64));
	// fmadds f30,f11,f13,f30
	ctx.f30.f64 = double(float(ctx.f11.f64 * ctx.f13.f64 + ctx.f30.f64));
	// bge cr6,0x82a2bbd4
	if (!ctx.cr6.lt) goto loc_82A2BBD4;
	// li r6,16
	ctx.r6.s64 = 16;
	// lfs f25,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f25.f64 = double(temp.f32);
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// li r4,16
	ctx.r4.s64 = 16;
	// addi r3,r1,148
	ctx.r3.s64 = ctx.r1.s64 + 148;
	// bl 0x82fa26a0
	ctx.lr = 0x82A2BBD0;
	sub_82FA26A0(ctx, base);
	// stw r30,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r30.u32);
loc_82A2BBD4:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r27,r27,8
	ctx.r27.s64 = ctx.r27.s64 + 8;
	// cmpw cr6,r30,r28
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r28.s32, ctx.xer);
	// blt cr6,0x82a2bb24
	if (ctx.cr6.lt) goto loc_82A2BB24;
loc_82A2BBE4:
	// fdivs f0,f22,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f22.f64 / ctx.f31.f64));
	// lwz r11,144(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// addi r24,r24,1
	ctx.r24.s64 = ctx.r24.s64 + 1;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// cmpw cr6,r24,r22
	ctx.cr6.compare<int32_t>(ctx.r24.s32, ctx.r22.s32, ctx.xer);
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// fmuls f13,f0,f27
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f27.f64));
	// fmuls f12,f0,f28
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f28.f64));
	// fmuls f11,f0,f29
	ctx.f11.f64 = double(float(ctx.f0.f64 * ctx.f29.f64));
	// fmuls f0,f0,f30
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f30.f64));
	// fadd f13,f13,f24
	ctx.f13.f64 = ctx.f13.f64 + ctx.f24.f64;
	// fadd f12,f12,f24
	ctx.f12.f64 = ctx.f12.f64 + ctx.f24.f64;
	// fadd f11,f11,f24
	ctx.f11.f64 = ctx.f11.f64 + ctx.f24.f64;
	// fadd f0,f0,f24
	ctx.f0.f64 = ctx.f0.f64 + ctx.f24.f64;
	// fctidz f13,f13
	ctx.f13.s64 = (ctx.f13.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f13.f64));
	// stfd f13,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.f13.u64);
	// fctidz f13,f12
	ctx.f13.s64 = (ctx.f12.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f12.f64));
	// stfd f13,120(r1)
	PPC_STORE_U64(ctx.r1.u32 + 120, ctx.f13.u64);
	// lhz r10,118(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 118);
	// fctidz f13,f11
	ctx.f13.s64 = (ctx.f11.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f11.f64));
	// stfd f13,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.f13.u64);
	// lhz r9,118(r1)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r1.u32 + 118);
	// fctidz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f0.f64));
	// stfd f0,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.f0.u64);
	// lhz r8,118(r1)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r1.u32 + 118);
	// mr r5,r10
	ctx.r5.u64 = ctx.r10.u64;
	// sth r10,14(r31)
	PPC_STORE_U16(ctx.r31.u32 + 14, ctx.r10.u16);
	// lhz r6,126(r1)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r1.u32 + 126);
	// subf r10,r8,r9
	ctx.r10.s64 = ctx.r9.s64 - ctx.r8.s64;
	// sth r9,12(r31)
	PPC_STORE_U16(ctx.r31.u32 + 12, ctx.r9.u16);
	// sth r8,8(r31)
	PPC_STORE_U16(ctx.r31.u32 + 8, ctx.r8.u16);
	// subf r9,r6,r5
	ctx.r9.s64 = ctx.r5.s64 - ctx.r6.s64;
	// extsw r10,r10
	ctx.r10.s64 = ctx.r10.s32;
	// sth r6,10(r31)
	PPC_STORE_U16(ctx.r31.u32 + 10, ctx.r6.u16);
	// lwz r11,3588(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3588);
	// extsw r9,r9
	ctx.r9.s64 = ctx.r9.s32;
	// std r10,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.r10.u64);
	// lfd f0,128(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// std r9,136(r1)
	PPC_STORE_U64(ctx.r1.u32 + 136, ctx.r9.u64);
	// lfd f13,136(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 136);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// stfs f25,16(r31)
	temp.f32 = float(ctx.f25.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfdu f0,24(r31)
	ea = 24 + ctx.r31.u32;
	PPC_STORE_U64(ea, ctx.r0.u64);
	ctx.r31.u32 = ea;
	// beq cr6,0x82a2bcb4
	if (ctx.cr6.eq) goto loc_82A2BCB4;
	// cmpw cr6,r30,r28
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r28.s32, ctx.xer);
	// blt cr6,0x82a2bac4
	if (ctx.cr6.lt) goto loc_82A2BAC4;
loc_82A2BCB4:
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addic. r11,r24,-1
	ctx.xer.ca = ctx.r24.u32 > 0;
	ctx.r11.s64 = ctx.r24.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lfd f11,22472(r10)
	ctx.fpscr.disableFlushMode();
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r10.u32 + 22472);
	// ble 0x82a2bdb8
	if (!ctx.cr0.gt) goto loc_82A2BDB8;
	// mr r26,r11
	ctx.r26.u64 = ctx.r11.u64;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r27,1
	ctx.r27.s64 = 1;
	// addi r30,r29,528
	ctx.r30.s64 = ctx.r29.s64 + 528;
	// lfd f10,-5808(r11)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r11.u32 + -5808);
loc_82A2BCD8:
	// lfd f0,0(r30)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r30.u32 + 0);
	// addi r4,r30,-16
	ctx.r4.s64 = ctx.r30.s64 + -16;
	// fcmpu cr6,f0,f11
	ctx.cr6.compare(ctx.f0.f64, ctx.f11.f64);
	// ble cr6,0x82a2bda8
	if (!ctx.cr6.gt) goto loc_82A2BDA8;
	// mr r28,r27
	ctx.r28.u64 = ctx.r27.u64;
	// cmpw cr6,r27,r24
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r24.s32, ctx.xer);
	// bge cr6,0x82a2bda8
	if (!ctx.cr6.lt) goto loc_82A2BDA8;
	// addi r31,r30,24
	ctx.r31.s64 = ctx.r30.s64 + 24;
loc_82A2BCF8:
	// lfd f0,0(r31)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// fcmpu cr6,f0,f11
	ctx.cr6.compare(ctx.f0.f64, ctx.f11.f64);
	// ble cr6,0x82a2bd90
	if (!ctx.cr6.gt) goto loc_82A2BD90;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r31,-16
	ctx.r5.s64 = ctx.r31.s64 + -16;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82a2b758
	ctx.lr = 0x82A2BD14;
	sub_82A2B758(ctx, base);
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// bne cr6,0x82a2bd90
	if (!ctx.cr6.eq) goto loc_82A2BD90;
	// lhz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// lfd f13,0(r30)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r30.u32 + 0);
	// lhz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 84);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// lhz r9,86(r1)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r1.u32 + 86);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// lhz r8,82(r1)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r1.u32 + 82);
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// subf r10,r8,r9
	ctx.r10.s64 = ctx.r9.s64 - ctx.r8.s64;
	// std r11,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.r11.u64);
	// lfd f9,128(r1)
	ctx.f9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// extsw r11,r10
	ctx.r11.s64 = ctx.r10.s32;
	// fcfid f9,f9
	ctx.f9.f64 = double(ctx.f9.s64);
	// std r11,136(r1)
	PPC_STORE_U64(ctx.r1.u32 + 136, ctx.r11.u64);
	// lfd f12,136(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 136);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// frsp f9,f9
	ctx.f9.f64 = double(float(ctx.f9.f64));
	// fmuls f12,f9,f12
	ctx.f12.f64 = double(float(ctx.f9.f64 * ctx.f12.f64));
	// bge cr6,0x82a2bd70
	if (!ctx.cr6.lt) goto loc_82A2BD70;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
loc_82A2BD70:
	// fdiv f0,f12,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f12.f64 / ctx.f0.f64;
	// fcmpu cr6,f0,f21
	ctx.cr6.compare(ctx.f0.f64, ctx.f21.f64);
	// ble cr6,0x82a2bd90
	if (!ctx.cr6.gt) goto loc_82A2BD90;
	// lfs f0,8(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,-8(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x82a2bda4
	if (ctx.cr6.lt) goto loc_82A2BDA4;
	// stfd f10,0(r31)
	PPC_STORE_U64(ctx.r31.u32 + 0, ctx.f10.u64);
loc_82A2BD90:
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r31,r31,24
	ctx.r31.s64 = ctx.r31.s64 + 24;
	// cmpw cr6,r28,r24
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r24.s32, ctx.xer);
	// blt cr6,0x82a2bcf8
	if (ctx.cr6.lt) goto loc_82A2BCF8;
	// b 0x82a2bda8
	goto loc_82A2BDA8;
loc_82A2BDA4:
	// stfd f10,0(r30)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r30.u32 + 0, ctx.f10.u64);
loc_82A2BDA8:
	// addic. r26,r26,-1
	ctx.xer.ca = ctx.r26.u32 > 0;
	ctx.r26.s64 = ctx.r26.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// addi r30,r30,24
	ctx.r30.s64 = ctx.r30.s64 + 24;
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// bne 0x82a2bcd8
	if (!ctx.cr0.eq) goto loc_82A2BCD8;
loc_82A2BDB8:
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// stw r23,0(r21)
	PPC_STORE_U32(ctx.r21.u32 + 0, ctx.r23.u32);
	// ble cr6,0x82a2be1c
	if (!ctx.cr6.gt) goto loc_82A2BE1C;
	// addi r11,r29,512
	ctx.r11.s64 = ctx.r29.s64 + 512;
	// mr r9,r24
	ctx.r9.u64 = ctx.r24.u64;
loc_82A2BDCC:
	// lfd f0,16(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + 16);
	// fcmpu cr6,f0,f11
	ctx.cr6.compare(ctx.f0.f64, ctx.f11.f64);
	// ble cr6,0x82a2be10
	if (!ctx.cr6.gt) goto loc_82A2BE10;
	// lwz r10,0(r21)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// add r7,r10,r20
	ctx.r7.u64 = ctx.r10.u64 + ctx.r20.u64;
	// stwx r8,r10,r20
	PPC_STORE_U32(ctx.r10.u32 + ctx.r20.u32, ctx.r8.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, ctx.r10.u32);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r10,8(r7)
	PPC_STORE_U32(ctx.r7.u32 + 8, ctx.r10.u32);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stw r10,12(r7)
	PPC_STORE_U32(ctx.r7.u32 + 12, ctx.r10.u32);
	// lwz r10,0(r21)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,0(r21)
	PPC_STORE_U32(ctx.r21.u32 + 0, ctx.r10.u32);
loc_82A2BE10:
	// addic. r9,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
	// bne 0x82a2bdcc
	if (!ctx.cr0.eq) goto loc_82A2BDCC;
loc_82A2BE1C:
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// addi r12,r1,-104
	ctx.r12.s64 = ctx.r1.s64 + -104;
	// bl 0x82fa8d58
	ctx.lr = 0x82A2BE28;
	__restfpr_21(ctx, base);
	// b 0x82fa76a8
	__restgprlr_20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A2BE2C"))) PPC_WEAK_FUNC(sub_82A2BE2C);
PPC_FUNC_IMPL(__imp__sub_82A2BE2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A2BE30"))) PPC_WEAK_FUNC(sub_82A2BE30);
PPC_FUNC_IMPL(__imp__sub_82A2BE30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa766c
	ctx.lr = 0x82A2BE38;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r25,r3,64
	ctx.r25.s64 = ctx.r3.s64 + 64;
	// lwz r3,2380(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2380);
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// bl 0x82a33ce0
	ctx.lr = 0x82A2BE54;
	sub_82A33CE0(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// blt 0x82a2bf64
	if (ctx.cr0.lt) goto loc_82A2BF64;
	// addi r27,r31,68
	ctx.r27.s64 = ctx.r31.s64 + 68;
	// lwz r9,2380(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2380);
	// addi r30,r31,56
	ctx.r30.s64 = ctx.r31.s64 + 56;
	// addi r26,r31,12
	ctx.r26.s64 = ctx.r31.s64 + 12;
	// addi r28,r31,4
	ctx.r28.s64 = ctx.r31.s64 + 4;
	// addi r8,r31,72
	ctx.r8.s64 = ctx.r31.s64 + 72;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82a33eb0
	ctx.lr = 0x82A2BE8C;
	sub_82A33EB0(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// blt 0x82a2bf64
	if (ctx.cr0.lt) goto loc_82A2BF64;
	// lwz r9,0(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// li r28,0
	ctx.r28.s64 = 0;
	// lwz r10,0(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r9,r9,127
	ctx.r9.s64 = ctx.r9.s64 + 127;
	// addi r10,r10,127
	ctx.r10.s64 = ctx.r10.s64 + 127;
	// lwz r8,0(r27)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// addi r11,r11,127
	ctx.r11.s64 = ctx.r11.s64 + 127;
	// rlwinm r9,r9,0,0,24
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFF80;
	// rlwinm r10,r10,0,0,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFF80;
	// rlwinm r11,r11,0,0,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFF80;
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// stw r10,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// stw r11,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r11.u32);
	// ble cr6,0x82a2bf4c
	if (!ctx.cr6.gt) goto loc_82A2BF4C;
	// addi r30,r31,112
	ctx.r30.s64 = ctx.r31.s64 + 112;
loc_82A2BED8:
	// addi r26,r30,144
	ctx.r26.s64 = ctx.r30.s64 + 144;
	// lwz r9,2380(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2380);
	// addi r25,r30,72
	ctx.r25.s64 = ctx.r30.s64 + 72;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r30,-36
	ctx.r3.s64 = ctx.r30.s64 + -36;
	// bl 0x82a33eb0
	ctx.lr = 0x82A2BF00;
	sub_82A33EB0(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// blt 0x82a2bf64
	if (ctx.cr0.lt) goto loc_82A2BF64;
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// lwz r10,0(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// addi r9,r9,127
	ctx.r9.s64 = ctx.r9.s64 + 127;
	// addi r10,r10,127
	ctx.r10.s64 = ctx.r10.s64 + 127;
	// addi r11,r11,127
	ctx.r11.s64 = ctx.r11.s64 + 127;
	// rlwinm r9,r9,0,0,24
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFF80;
	// rlwinm r11,r11,0,0,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFF80;
	// rlwinm r10,r10,0,0,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFF80;
	// stw r9,36(r30)
	PPC_STORE_U32(ctx.r30.u32 + 36, ctx.r9.u32);
	// stw r11,180(r30)
	PPC_STORE_U32(ctx.r30.u32 + 180, ctx.r11.u32);
	// stw r10,108(r30)
	PPC_STORE_U32(ctx.r30.u32 + 108, ctx.r10.u32);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82a2bed8
	if (ctx.cr6.lt) goto loc_82A2BED8;
loc_82A2BF4C:
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r3,2380(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2380);
	// li r5,36
	ctx.r5.s64 = 36;
	// addi r4,r31,20
	ctx.r4.s64 = ctx.r31.s64 + 20;
	// bl 0x82a33b30
	ctx.lr = 0x82A2BF60;
	sub_82A33B30(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
loc_82A2BF64:
	// lwz r3,2380(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2380);
	// bl 0x82a33e28
	ctx.lr = 0x82A2BF6C;
	sub_82A33E28(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82fa76bc
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A2BF78"))) PPC_WEAK_FUNC(sub_82A2BF78);
PPC_FUNC_IMPL(__imp__sub_82A2BF78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r10,r11,-15056
	ctx.r10.s64 = ctx.r11.s64 + -15056;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82A2BF88:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r9,r4
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r4.u32, ctx.xer);
	// bgtlr cr6
	if (ctx.cr6.gt) return;
	// cmplw cr6,r9,r5
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r5.u32, ctx.xer);
	// bgtlr cr6
	if (ctx.cr6.gt) return;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplwi cr6,r11,11
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 11, ctx.xer);
	// blt cr6,0x82a2bf88
	if (ctx.cr6.lt) goto loc_82A2BF88;
	// li r3,10
	ctx.r3.s64 = 10;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A2BFB8"))) PPC_WEAK_FUNC(sub_82A2BFB8);
PPC_FUNC_IMPL(__imp__sub_82A2BFB8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// li r3,10
	ctx.r3.s64 = 10;
	// addi r8,r11,-15056
	ctx.r8.s64 = ctx.r11.s64 + -15056;
	// li r10,10
	ctx.r10.s64 = 10;
	// addi r11,r8,40
	ctx.r11.s64 = ctx.r8.s64 + 40;
loc_82A2BFCC:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r9,r4
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r4.u32, ctx.xer);
	// bge cr6,0x82a2bfe0
	if (!ctx.cr6.lt) goto loc_82A2BFE0;
	// cmplw cr6,r9,r5
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r5.u32, ctx.xer);
	// bltlr cr6
	if (ctx.cr6.lt) return;
loc_82A2BFE0:
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bge cr6,0x82a2bfcc
	if (!ctx.cr6.lt) goto loc_82A2BFCC;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A2BFFC"))) PPC_WEAK_FUNC(sub_82A2BFFC);
PPC_FUNC_IMPL(__imp__sub_82A2BFFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A2C000"))) PPC_WEAK_FUNC(sub_82A2C000);
PPC_FUNC_IMPL(__imp__sub_82A2C000) {
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
	// li r10,9
	ctx.r10.s64 = 9;
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r30,64(r3)
	PPC_STORE_U32(ctx.r3.u32 + 64, ctx.r30.u32);
	// addi r11,r3,252
	ctx.r11.s64 = ctx.r3.s64 + 252;
	// stw r30,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r30.u32);
	// stw r30,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r30.u32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// stw r30,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, ctx.r30.u32);
loc_82A2C038:
	// stw r30,-140(r11)
	PPC_STORE_U32(ctx.r11.u32 + -140, ctx.r30.u32);
	// stw r30,-68(r11)
	PPC_STORE_U32(ctx.r11.u32 + -68, ctx.r30.u32);
	// stwu r30,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r30.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x82a2c038
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82A2C038;
	// lis r11,-31962
	ctx.r11.s64 = -2094661632;
	// li r5,48
	ctx.r5.s64 = 48;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,-28960(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -28960);
	// bl 0x82a81490
	ctx.lr = 0x82A2C05C;
	sub_82A81490(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82a2c06c
	if (ctx.cr0.eq) goto loc_82A2C06C;
	// bl 0x82a33b18
	ctx.lr = 0x82A2C068;
	sub_82A33B18(ctx, base);
	// b 0x82a2c070
	goto loc_82A2C070;
loc_82A2C06C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_82A2C070:
	// stw r3,2380(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2380, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82a2c084
	if (!ctx.cr6.eq) goto loc_82A2C084;
	// lis r30,-32761
	ctx.r30.s64 = -2147024896;
	// ori r30,r30,14
	ctx.r30.u64 = ctx.r30.u64 | 14;
loc_82A2C084:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
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

__attribute__((alias("__imp__sub_82A2C0A0"))) PPC_WEAK_FUNC(sub_82A2C0A0);
PPC_FUNC_IMPL(__imp__sub_82A2C0A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	PPCVRegister vTemp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7640
	ctx.lr = 0x82A2C0A8;
	__savegprlr_14(ctx, base);
	// stwu r1,-992(r1)
	ea = -992 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// stw r6,1036(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1036, ctx.r6.u32);
	// addi r6,r3,328
	ctx.r6.s64 = ctx.r3.s64 + 328;
	// stw r4,1020(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1020, ctx.r4.u32);
	// mr r20,r4
	ctx.r20.u64 = ctx.r4.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r6,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r6.u32);
	// stw r20,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r20.u32);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// lis r8,-31962
	ctx.r8.s64 = -2094661632;
	// stw r4,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r4.u32);
	// addi r11,r11,-13920
	ctx.r11.s64 = ctx.r11.s64 + -13920;
	// lwz r10,0(r20)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r20.u32 + 0);
	// addi r8,r8,-28896
	ctx.r8.s64 = ctx.r8.s64 + -28896;
	// std r10,144(r1)
	PPC_STORE_U64(ctx.r1.u32 + 144, ctx.r10.u64);
	// lfd f0,144(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// lvx128 v63,r0,r11
	simd::store_shuffled(ctx.v63, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// lvx128 v45,r0,r8
	simd::store_shuffled(ctx.v45, simd::load_and_shuffle(base + ((ctx.r8.u32) & ~0xF), VectorMaskL));
	// addi r31,r1,48
	ctx.r31.s64 = ctx.r1.s64 + 48;
	// lwz r9,4(r20)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r20.u32 + 4);
	// mr r30,r10
	ctx.r30.u64 = ctx.r10.u64;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// stw r8,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r8.u32);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// stw r9,52(r1)
	PPC_STORE_U32(ctx.r1.u32 + 52, ctx.r9.u32);
	// li r30,48
	ctx.r30.s64 = 48;
	// stw r10,48(r1)
	PPC_STORE_U32(ctx.r1.u32 + 48, ctx.r10.u32);
	// li r8,32
	ctx.r8.s64 = 32;
	// stw r10,56(r1)
	PPC_STORE_U32(ctx.r1.u32 + 56, ctx.r10.u32);
	// vor128 v34,v63,v63
	_mm_store_si128((__m128i*)ctx.v34.u8, _mm_load_si128((__m128i*)ctx.v63.u8));
	// stw r9,60(r1)
	PPC_STORE_U32(ctx.r1.u32 + 60, ctx.r9.u32);
	// lvx128 v60,r0,r31
	simd::store_shuffled(ctx.v60, simd::load_and_shuffle(base + ((ctx.r31.u32) & ~0xF), VectorMaskL));
	// lis r31,-32229
	ctx.r31.s64 = -2112159744;
	// stw r9,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r9.u32);
	// lvx128 v37,r11,r30
	simd::store_shuffled(ctx.v37, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r30.u32) & ~0xF), VectorMaskL));
	// stw r10,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r10.u32);
	// lvx128 v35,r11,r8
	simd::store_shuffled(ctx.v35, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r8.u32) & ~0xF), VectorMaskL));
	// addi r22,r3,332
	ctx.r22.s64 = ctx.r3.s64 + 332;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// vor128 v63,v63,v63
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_load_si128((__m128i*)ctx.v63.u8));
	// vcsxwfp128 v33,v60,0
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v33.f32, _mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v60.u32)));
	// vor128 v36,v45,v45
	_mm_store_si128((__m128i*)ctx.v36.u8, _mm_load_si128((__m128i*)ctx.v45.u8));
	// lfs f0,-27104(r31)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + -27104);
	ctx.f0.f64 = double(temp.f32);
	// fadds f11,f12,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 + ctx.f0.f64));
	// stfs f11,48(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 48, temp.u32);
	// stfs f11,52(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 52, temp.u32);
	// stfs f11,56(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 56, temp.u32);
	// stfs f11,60(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + 60, temp.u32);
	// beq cr6,0x82a2c18c
	if (ctx.cr6.eq) goto loc_82A2C18C;
	// li r8,16
	ctx.r8.s64 = 16;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// lvx128 v62,r11,r8
	simd::store_shuffled(ctx.v62, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r8.u32) & ~0xF), VectorMaskL));
loc_82A2C184:
	// vmulfp128 v36,v36,v62
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v36.f32, _mm_mul_ps(_mm_load_ps(ctx.v36.f32), _mm_load_ps(ctx.v62.f32)));
	// bdnz 0x82a2c184
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82A2C184;
loc_82A2C18C:
	// vmulfp128 v59,v63,v36
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v59.f32, _mm_mul_ps(_mm_load_ps(ctx.v63.f32), _mm_load_ps(ctx.v36.f32)));
	// stw r4,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r4.u32);
	// stw r4,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r4.u32);
	// cmpw cr6,r7,r5
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r5.s32, ctx.xer);
	// stw r10,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// stw r9,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r9.u32);
	// stw r7,32(r1)
	PPC_STORE_U32(ctx.r1.u32 + 32, ctx.r7.u32);
	// vrfin128 v13,v59
	_mm_store_ps(ctx.v13.f32, _mm_round_ps(_mm_load_ps(ctx.v59.f32), _MM_FROUND_TO_NEAREST_INT | _MM_FROUND_NO_EXC));
	// blt cr6,0x82a2da04
	if (ctx.cr6.lt) goto loc_82A2DA04;
	// lis r11,-31962
	ctx.r11.s64 = -2094661632;
	// lis r10,-31962
	ctx.r10.s64 = -2094661632;
	// lis r9,-31962
	ctx.r9.s64 = -2094661632;
	// addi r11,r11,-10704
	ctx.r11.s64 = ctx.r11.s64 + -10704;
	// addi r10,r10,-10720
	ctx.r10.s64 = ctx.r10.s64 + -10720;
	// lis r8,-31962
	ctx.r8.s64 = -2094661632;
	// stw r11,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r11.u32);
	// addi r9,r9,-10736
	ctx.r9.s64 = ctx.r9.s64 + -10736;
	// stw r10,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r10.u32);
	// addi r8,r8,-10752
	ctx.r8.s64 = ctx.r8.s64 + -10752;
	// lis r31,-31962
	ctx.r31.s64 = -2094661632;
	// lvx128 v58,r0,r11
	simd::store_shuffled(ctx.v58, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// lis r30,-31962
	ctx.r30.s64 = -2094661632;
	// lvx128 v57,r0,r10
	simd::store_shuffled(ctx.v57, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// lis r5,-31962
	ctx.r5.s64 = -2094661632;
	// stw r9,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r9.u32);
	// lis r29,-31962
	ctx.r29.s64 = -2094661632;
	// lvx128 v56,r0,r9
	simd::store_shuffled(ctx.v56, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// addi r11,r31,-10768
	ctx.r11.s64 = ctx.r31.s64 + -10768;
	// lvx128 v55,r0,r8
	simd::store_shuffled(ctx.v55, simd::load_and_shuffle(base + ((ctx.r8.u32) & ~0xF), VectorMaskL));
	// addi r5,r5,-10656
	ctx.r5.s64 = ctx.r5.s64 + -10656;
	// stw r8,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r8.u32);
	// addi r10,r30,-10784
	ctx.r10.s64 = ctx.r30.s64 + -10784;
	// stw r11,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r11.u32);
	// addi r9,r29,-10800
	ctx.r9.s64 = ctx.r29.s64 + -10800;
	// stw r5,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r5.u32);
	// addi r8,r1,48
	ctx.r8.s64 = ctx.r1.s64 + 48;
	// stw r10,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r10.u32);
	// lvx128 v7,r0,r11
	simd::store_shuffled(ctx.v7, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// addi r11,r1,496
	ctx.r11.s64 = ctx.r1.s64 + 496;
	// lvx128 v59,r0,r5
	simd::store_shuffled(ctx.v59, simd::load_and_shuffle(base + ((ctx.r5.u32) & ~0xF), VectorMaskL));
	// addi r5,r1,560
	ctx.r5.s64 = ctx.r1.s64 + 560;
	// lvx128 v2,r0,r10
	simd::store_shuffled(ctx.v2, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// addi r10,r1,464
	ctx.r10.s64 = ctx.r1.s64 + 464;
	// lvx128 v3,r0,r9
	simd::store_shuffled(ctx.v3, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// stw r9,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r9.u32);
	// lis r28,-31962
	ctx.r28.s64 = -2094661632;
	// lvx128 v0,r0,r8
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r8.u32) & ~0xF), VectorMaskL));
	// addi r9,r1,192
	ctx.r9.s64 = ctx.r1.s64 + 192;
	// stvx128 v56,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v56.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r8,r28,-10816
	ctx.r8.s64 = ctx.r28.s64 + -10816;
	// stvx128 v58,r0,r5
	_mm_store_si128((__m128i*)(base + ((ctx.r5.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v58.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r31,r1,528
	ctx.r31.s64 = ctx.r1.s64 + 528;
	// stvx128 v55,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v55.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lis r7,-31962
	ctx.r7.s64 = -2094661632;
	// stw r8,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r8.u32);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// addi r30,r1,48
	ctx.r30.s64 = ctx.r1.s64 + 48;
	// stvx128 v7,r0,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v7.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r5,r1,208
	ctx.r5.s64 = ctx.r1.s64 + 208;
	// lvx128 v1,r0,r8
	simd::store_shuffled(ctx.v1, simd::load_and_shuffle(base + ((ctx.r8.u32) & ~0xF), VectorMaskL));
	// lis r4,-31962
	ctx.r4.s64 = -2094661632;
	// stvx128 v57,r0,r31
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v57.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r9,r7,-10848
	ctx.r9.s64 = ctx.r7.s64 + -10848;
	// lfs f11,-13632(r11)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -13632);
	ctx.f11.f64 = double(temp.f32);
	// addi r8,r4,-10832
	ctx.r8.s64 = ctx.r4.s64 + -10832;
	// stvx128 v2,r0,r30
	_mm_store_si128((__m128i*)(base + ((ctx.r30.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v2.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lis r27,-31962
	ctx.r27.s64 = -2094661632;
	// stvx128 v3,r0,r5
	_mm_store_si128((__m128i*)(base + ((ctx.r5.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v3.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lis r26,-31962
	ctx.r26.s64 = -2094661632;
	// lis r31,-31962
	ctx.r31.s64 = -2094661632;
	// lfs f13,5184(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5184);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-31962
	ctx.r11.s64 = -2094661632;
	// lvx128 v55,r0,r9
	simd::store_shuffled(ctx.v55, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// lis r30,-31962
	ctx.r30.s64 = -2094661632;
	// lvx128 v61,r0,r8
	simd::store_shuffled(ctx.v61, simd::load_and_shuffle(base + ((ctx.r8.u32) & ~0xF), VectorMaskL));
	// lis r25,-31962
	ctx.r25.s64 = -2094661632;
	// addi r5,r27,-10672
	ctx.r5.s64 = ctx.r27.s64 + -10672;
	// addi r4,r26,-10688
	ctx.r4.s64 = ctx.r26.s64 + -10688;
	// lis r10,-31962
	ctx.r10.s64 = -2094661632;
	// stw r5,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r5.u32);
	// addi r9,r31,-10896
	ctx.r9.s64 = ctx.r31.s64 + -10896;
	// stw r4,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r4.u32);
	// addi r31,r11,-10880
	ctx.r31.s64 = ctx.r11.s64 + -10880;
	// li r7,16
	ctx.r7.s64 = 16;
	// li r23,48
	ctx.r23.s64 = 48;
	// li r24,32
	ctx.r24.s64 = 32;
	// addi r8,r30,-10912
	ctx.r8.s64 = ctx.r30.s64 + -10912;
	// addi r11,r25,-28912
	ctx.r11.s64 = ctx.r25.s64 + -28912;
	// addi r10,r10,-10864
	ctx.r10.s64 = ctx.r10.s64 + -10864;
	// lvx128 v54,r0,r31
	simd::store_shuffled(ctx.v54, simd::load_and_shuffle(base + ((ctx.r31.u32) & ~0xF), VectorMaskL));
	// addi r30,r1,816
	ctx.r30.s64 = ctx.r1.s64 + 816;
	// addi r31,r1,768
	ctx.r31.s64 = ctx.r1.s64 + 768;
	// lvx128 v62,r0,r4
	simd::store_shuffled(ctx.v62, simd::load_and_shuffle(base + ((ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v53,r0,r10
	simd::store_shuffled(ctx.v53, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// lwz r4,32(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 32);
	// lvx128 v58,r0,r5
	simd::store_shuffled(ctx.v58, simd::load_and_shuffle(base + ((ctx.r5.u32) & ~0xF), VectorMaskL));
	// stw r11,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r11.u32);
	// lvx128 v43,r0,r9
	simd::store_shuffled(ctx.v43, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// lvx128 v44,r0,r8
	simd::store_shuffled(ctx.v44, simd::load_and_shuffle(base + ((ctx.r8.u32) & ~0xF), VectorMaskL));
	// lvx128 v63,r0,r11
	simd::store_shuffled(ctx.v63, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// stvx128 v54,r0,r30
	_mm_store_si128((__m128i*)(base + ((ctx.r30.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v54.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v53,r0,r31
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v53.u8), _mm_load_si128((__m128i*)VectorMaskL)));
loc_82A2C328:
	// lwz r10,156(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r9,124(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// vcmpgtfp128. v52,v33,v13
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v52.f32, _mm_cmpgt_ps(_mm_load_ps(ctx.v33.f32), _mm_load_ps(ctx.v13.f32)));
	ctx.cr6.setFromMask(_mm_load_ps(ctx.v52.f32), 0xF);
	// stw r11,72(r1)
	PPC_STORE_U32(ctx.r1.u32 + 72, ctx.r11.u32);
	// stw r11,76(r1)
	PPC_STORE_U32(ctx.r1.u32 + 76, ctx.r11.u32);
	// stb r11,24(r1)
	PPC_STORE_U8(ctx.r1.u32 + 24, ctx.r11.u8);
	// stw r10,64(r1)
	PPC_STORE_U32(ctx.r1.u32 + 64, ctx.r10.u32);
	// stw r9,68(r1)
	PPC_STORE_U32(ctx.r1.u32 + 68, ctx.r9.u32);
	// bge cr6,0x82a2d9f0
	if (!ctx.cr6.lt) goto loc_82A2D9F0;
	// vspltw128 v51,v13,3
	_mm_store_si128((__m128i*)ctx.v51.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v13.u32), 0x0));
	// vcfpsxws128 v49,v13,0
	_mm_store_si128((__m128i*)ctx.v49.s32, _mm_vctsxs(_mm_load_ps(ctx.v13.f32)));
	// vspltw128 v50,v13,2
	_mm_store_si128((__m128i*)ctx.v50.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v13.u32), 0x55));
	// addi r10,r1,688
	ctx.r10.s64 = ctx.r1.s64 + 688;
	// addi r30,r1,816
	ctx.r30.s64 = ctx.r1.s64 + 816;
	// lwz r26,108(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// addi r11,r1,800
	ctx.r11.s64 = ctx.r1.s64 + 800;
	// lwz r31,100(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// vmulfp128 v48,v51,v37
	_mm_store_ps(ctx.v48.f32, _mm_mul_ps(_mm_load_ps(ctx.v51.f32), _mm_load_ps(ctx.v37.f32)));
	// addi r29,r1,768
	ctx.r29.s64 = ctx.r1.s64 + 768;
	// vmulfp128 v47,v50,v37
	_mm_store_ps(ctx.v47.f32, _mm_mul_ps(_mm_load_ps(ctx.v50.f32), _mm_load_ps(ctx.v37.f32)));
	// addi r9,r1,784
	ctx.r9.s64 = ctx.r1.s64 + 784;
	// addi r28,r1,36
	ctx.r28.s64 = ctx.r1.s64 + 36;
	// lwz r8,96(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lvx128 v6,r0,r30
	simd::store_shuffled(ctx.v6, simd::load_and_shuffle(base + ((ctx.r30.u32) & ~0xF), VectorMaskL));
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// vsldoi128 v46,v13,v63,4
	_mm_store_si128((__m128i*)ctx.v46.u8, _mm_alignr_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)ctx.v63.u8), 12));
	// lwz r27,104(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// lvx128 v5,r0,r29
	simd::store_shuffled(ctx.v5, simd::load_and_shuffle(base + ((ctx.r29.u32) & ~0xF), VectorMaskL));
	// vperm128 v12,v13,v63,v6
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)ctx.v6.u8)));
	// vperm128 v11,v13,v63,v5
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)ctx.v5.u8)));
	// stvx128 v49,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v49.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lwz r30,696(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 696);
	// lwz r10,700(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 700);
	// subf r29,r10,r26
	ctx.r29.s64 = ctx.r26.s64 - ctx.r10.s64;
	// vrfin128 v40,v48
	_mm_store_ps(ctx.v40.f32, _mm_round_ps(_mm_load_ps(ctx.v48.f32), _MM_FROUND_TO_NEAREST_INT | _MM_FROUND_NO_EXC));
	// subf r30,r30,r27
	ctx.r30.s64 = ctx.r27.s64 - ctx.r30.s64;
	// vrfin128 v39,v47
	_mm_store_ps(ctx.v39.f32, _mm_round_ps(_mm_load_ps(ctx.v47.f32), _MM_FROUND_TO_NEAREST_INT | _MM_FROUND_NO_EXC));
	// vmaddfp v11,v0,v11,v12
	_mm_store_ps(ctx.v11.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v11.f32)), _mm_load_ps(ctx.v12.f32)));
	// vmulfp128 v42,v46,v13
	_mm_store_ps(ctx.v42.f32, _mm_mul_ps(_mm_load_ps(ctx.v46.f32), _mm_load_ps(ctx.v13.f32)));
	// vcfpsxws128 v38,v40,0
	_mm_store_si128((__m128i*)ctx.v38.s32, _mm_vctsxs(_mm_load_ps(ctx.v40.f32)));
	// vor128 v24,v40,v40
	_mm_store_si128((__m128i*)ctx.v24.u8, _mm_load_si128((__m128i*)ctx.v40.u8));
	// vcfpsxws128 v32,v39,0
	_mm_store_si128((__m128i*)ctx.v32.s32, _mm_vctsxs(_mm_load_ps(ctx.v39.f32)));
	// vor128 v41,v39,v39
	_mm_store_si128((__m128i*)ctx.v41.u8, _mm_load_si128((__m128i*)ctx.v39.u8));
	// vmulfp128 v21,v40,v0
	_mm_store_ps(ctx.v21.f32, _mm_mul_ps(_mm_load_ps(ctx.v40.f32), _mm_load_ps(ctx.v0.f32)));
	// vor128 v40,v39,v39
	_mm_store_si128((__m128i*)ctx.v40.u8, _mm_load_si128((__m128i*)ctx.v39.u8));
	// vspltw128 v46,v42,2
	_mm_store_si128((__m128i*)ctx.v46.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v42.u32), 0x55));
	// vrlimi128 v24,v63,10,0
	_mm_store_ps(ctx.v24.f32, _mm_blend_ps(_mm_load_ps(ctx.v24.f32), _mm_permute_ps(_mm_load_ps(ctx.v63.f32), 228), 10));
	// vrlimi128 v41,v63,5,0
	_mm_store_ps(ctx.v41.f32, _mm_blend_ps(_mm_load_ps(ctx.v41.f32), _mm_permute_ps(_mm_load_ps(ctx.v63.f32), 228), 5));
	// stvx128 v38,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v38.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v32,r0,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v32.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lwz r9,784(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 784);
	// divwu r8,r8,r9
	ctx.r8.u32 = ctx.r8.u32 / ctx.r9.u32;
	// lwz r10,808(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 808);
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// lvlx128 v60,r0,r5
	temp.u32 = ctx.r5.u32;
	_mm_store_si128((__m128i*)ctx.v60.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// divwu r11,r31,r10
	ctx.r11.u32 = ctx.r31.u32 / ctx.r10.u32;
	// vcsxwfp128 v54,v60,0
	_mm_store_ps(ctx.v54.f32, _mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v60.u32)));
	// stw r11,36(r1)
	PPC_STORE_U32(ctx.r1.u32 + 36, ctx.r11.u32);
	// lvlx128 v57,r0,r28
	temp.u32 = ctx.r28.u32;
	_mm_store_si128((__m128i*)ctx.v57.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vcsxwfp128 v56,v57,0
	_mm_store_ps(ctx.v56.f32, _mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v57.u32)));
	// divwu r5,r30,r9
	ctx.r5.u32 = ctx.r30.u32 / ctx.r9.u32;
	// vspltw128 v12,v56,0
	_mm_store_si128((__m128i*)ctx.v12.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v56.u32), 0xFF));
	// divwu r10,r29,r10
	ctx.r10.u32 = ctx.r29.u32 / ctx.r10.u32;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// stw r5,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r5.u32);
	// stw r10,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r10.u32);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// stw r11,36(r1)
	PPC_STORE_U32(ctx.r1.u32 + 36, ctx.r11.u32);
	// vspltw128 v60,v54,0
	_mm_store_si128((__m128i*)ctx.v60.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v54.u32), 0xFF));
	// vmaddfp v23,v24,v12,v13
	_mm_store_ps(ctx.v23.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v24.f32), _mm_load_ps(ctx.v12.f32)), _mm_load_ps(ctx.v13.f32)));
	// vmaddfp v22,v21,v12,v11
	_mm_store_ps(ctx.v22.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v21.f32), _mm_load_ps(ctx.v12.f32)), _mm_load_ps(ctx.v11.f32)));
	// bgt cr6,0x82a2d9b0
	if (ctx.cr6.gt) goto loc_82A2D9B0;
	// vmulfp128 v39,v60,v41
	_mm_store_ps(ctx.v39.f32, _mm_mul_ps(_mm_load_ps(ctx.v60.f32), _mm_load_ps(ctx.v41.f32)));
	// vmulfp128 v38,v60,v40
	_mm_store_ps(ctx.v38.f32, _mm_mul_ps(_mm_load_ps(ctx.v60.f32), _mm_load_ps(ctx.v40.f32)));
loc_82A2C454:
	// vor128 v53,v23,v23
	_mm_store_si128((__m128i*)ctx.v53.u8, _mm_load_si128((__m128i*)ctx.v23.u8));
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// vor128 v52,v22,v22
	_mm_store_si128((__m128i*)ctx.v52.u8, _mm_load_si128((__m128i*)ctx.v22.u8));
	// cmplw cr6,r8,r5
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r5.u32, ctx.xer);
	// vaddfp128 v42,v53,v39
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v42.f32, _mm_add_ps(_mm_load_ps(ctx.v53.f32), _mm_load_ps(ctx.v39.f32)));
	// vaddfp128 v47,v52,v38
	_mm_store_ps(ctx.v47.f32, _mm_add_ps(_mm_load_ps(ctx.v52.f32), _mm_load_ps(ctx.v38.f32)));
	// bgt cr6,0x82a2d998
	if (ctx.cr6.gt) goto loc_82A2D998;
	// lwz r10,64(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// addi r21,r3,64
	ctx.r21.s64 = ctx.r3.s64 + 64;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// addi r26,r20,8
	ctx.r26.s64 = ctx.r20.s64 + 8;
	// mullw r9,r10,r4
	ctx.r9.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r4.s32);
	// lwz r28,16(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// lwz r25,60(r3)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// vspltisw128 v52,0
	_mm_store_si128((__m128i*)ctx.v52.u32, _mm_set1_epi32(int(0x0)));
	// stw r10,40(r1)
	PPC_STORE_U32(ctx.r1.u32 + 40, ctx.r10.u32);
	// rlwinm r10,r9,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// add r27,r10,r11
	ctx.r27.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_82A2C49C:
	// vcfpsxws128 v51,v47,0
	ctx.fpscr.enableFlushMode();
	_mm_store_si128((__m128i*)ctx.v51.s32, _mm_vctsxs(_mm_load_ps(ctx.v47.f32)));
	// addi r5,r1,256
	ctx.r5.s64 = ctx.r1.s64 + 256;
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// mr r9,r27
	ctx.r9.u64 = ctx.r27.u64;
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// mr r8,r25
	ctx.r8.u64 = ctx.r25.u64;
	// stvx128 v51,r0,r5
	_mm_store_si128((__m128i*)(base + ((ctx.r5.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v51.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lwz r4,268(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 268);
	// lwz r5,264(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 264);
	// lwz r30,256(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 256);
	// lwz r31,260(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 260);
	// rlwinm r31,r31,3,0,28
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 3) & 0xFFFFFFF8;
	// lvlx128 v50,r31,r11
	temp.u32 = ctx.r31.u32 + ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v50.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// rlwinm r4,r4,3,0,28
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r5,r5,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r31,r30,3,0,28
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 3) & 0xFFFFFFF8;
	// lvlx128 v49,r4,r11
	temp.u32 = ctx.r4.u32 + ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v49.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v48,r5,r11
	temp.u32 = ctx.r5.u32 + ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v48.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vsubfp128 v32,v49,v50
	_mm_store_ps(ctx.v32.f32, _mm_sub_ps(_mm_load_ps(ctx.v49.f32), _mm_load_ps(ctx.v50.f32)));
	// lvlx128 v60,r31,r11
	temp.u32 = ctx.r31.u32 + ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v60.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vsubfp128 v57,v48,v60
	_mm_store_ps(ctx.v57.f32, _mm_sub_ps(_mm_load_ps(ctx.v48.f32), _mm_load_ps(ctx.v60.f32)));
	// vsubfp128 v56,v32,v57
	_mm_store_ps(ctx.v56.f32, _mm_sub_ps(_mm_load_ps(ctx.v32.f32), _mm_load_ps(ctx.v57.f32)));
	// vand128 v54,v56,v44
	_mm_store_si128((__m128i*)ctx.v54.u8, _mm_and_si128(_mm_load_si128((__m128i*)ctx.v56.u8), _mm_load_si128((__m128i*)ctx.v44.u8)));
	// vrlimi128 v54,v46,4,0
	_mm_store_ps(ctx.v54.f32, _mm_blend_ps(_mm_load_ps(ctx.v54.f32), _mm_permute_ps(_mm_load_ps(ctx.v46.f32), 228), 4));
	// vxor128 v53,v54,v43
	_mm_store_si128((__m128i*)ctx.v53.u8, _mm_xor_si128(_mm_load_si128((__m128i*)ctx.v54.u8), _mm_load_si128((__m128i*)ctx.v43.u8)));
	// vmsum4fp128 v51,v56,v53
	_mm_store_ps(ctx.v51.f32, _mm_dp_ps(_mm_load_ps(ctx.v56.f32), _mm_load_ps(ctx.v53.f32), 0xFF));
	// vrsqrtefp128 v50,v51
	_mm_store_ps(ctx.v50.f32, _mm_div_ps(_mm_set1_ps(1), _mm_sqrt_ps(_mm_load_ps(ctx.v51.f32))));
	// vmulfp128 v49,v46,v50
	_mm_store_ps(ctx.v49.f32, _mm_mul_ps(_mm_load_ps(ctx.v46.f32), _mm_load_ps(ctx.v50.f32)));
	// vminfp128 v56,v49,v45
	_mm_store_ps(ctx.v56.f32, _mm_min_ps(_mm_load_ps(ctx.v49.f32), _mm_load_ps(ctx.v45.f32)));
	// dcbt r0,r27
	// vspltw128 v60,v47,0
	_mm_store_si128((__m128i*)ctx.v60.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v47.u32), 0xFF));
	// li r4,128
	ctx.r4.s64 = 128;
	// dcbt r4,r27
	// lvx128 v48,r0,r28
	simd::store_shuffled(ctx.v48, simd::load_and_shuffle(base + ((ctx.r28.u32) & ~0xF), VectorMaskL));
	// lvx128 v32,r28,r7
	simd::store_shuffled(ctx.v32, simd::load_and_shuffle(base + ((ctx.r28.u32 + ctx.r7.u32) & ~0xF), VectorMaskL));
	// vcmpgtfp128 v57,v48,v56
	_mm_store_ps(ctx.v57.f32, _mm_cmpgt_ps(_mm_load_ps(ctx.v48.f32), _mm_load_ps(ctx.v56.f32)));
	// vcmpgtfp128 v54,v32,v56
	_mm_store_ps(ctx.v54.f32, _mm_cmpgt_ps(_mm_load_ps(ctx.v32.f32), _mm_load_ps(ctx.v56.f32)));
	// addi r5,r1,16
	ctx.r5.s64 = ctx.r1.s64 + 16;
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// addi r31,r1,608
	ctx.r31.s64 = ctx.r1.s64 + 608;
	// vcsxwfp128 v53,v57,0
	_mm_store_ps(ctx.v53.f32, _mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v57.u32)));
	// vcsxwfp128 v51,v54,0
	_mm_store_ps(ctx.v51.f32, _mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v54.u32)));
	// vmsum4fp128 v50,v53,v62
	_mm_store_ps(ctx.v50.f32, _mm_dp_ps(_mm_load_ps(ctx.v53.f32), _mm_load_ps(ctx.v62.f32), 0xFF));
	// vmsum3fp128 v49,v51,v62
	_mm_store_ps(ctx.v49.f32, _mm_dp_ps(_mm_load_ps(ctx.v51.f32), _mm_load_ps(ctx.v62.f32), 0xEF));
	// vaddfp128 v48,v50,v49
	_mm_store_ps(ctx.v48.f32, _mm_add_ps(_mm_load_ps(ctx.v50.f32), _mm_load_ps(ctx.v49.f32)));
	// vcfpsxws128 v32,v48,0
	_mm_store_si128((__m128i*)ctx.v32.s32, _mm_vctsxs(_mm_load_ps(ctx.v48.f32)));
	// stvewx128 v32,r0,r5
	ea = (ctx.r5.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v32.u32[3 - ((ea & 0xF) >> 2)]);
	// lvx128 v57,r27,r7
	simd::store_shuffled(ctx.v57, simd::load_and_shuffle(base + ((ctx.r27.u32 + ctx.r7.u32) & ~0xF), VectorMaskL));
	// vperm128 v54,v57,v63,v2
	_mm_store_si128((__m128i*)ctx.v54.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v57.u8), _mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)ctx.v2.u8)));
	// vperm128 v53,v57,v63,v7
	_mm_store_si128((__m128i*)ctx.v53.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v57.u8), _mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)ctx.v7.u8)));
	// vcsxwfp128 v13,v54,0
	_mm_store_ps(ctx.v13.f32, _mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v54.u32)));
	// vperm128 v51,v57,v63,v1
	_mm_store_si128((__m128i*)ctx.v51.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v57.u8), _mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)ctx.v1.u8)));
	// vperm128 v50,v57,v63,v3
	_mm_store_si128((__m128i*)ctx.v50.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v57.u8), _mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)ctx.v3.u8)));
	// vcsxwfp128 v12,v53,0
	_mm_store_ps(ctx.v12.f32, _mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v53.u32)));
	// vcsxwfp128 v11,v51,0
	_mm_store_ps(ctx.v11.f32, _mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v51.u32)));
	// vcsxwfp128 v10,v50,0
	_mm_store_ps(ctx.v10.f32, _mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v50.u32)));
	// vxor128 v49,v13,v61
	_mm_store_si128((__m128i*)ctx.v49.u8, _mm_xor_si128(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)ctx.v61.u8)));
	// vmaddfp v13,v0,v12,v13
	_mm_store_ps(ctx.v13.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v12.f32)), _mm_load_ps(ctx.v13.f32)));
	// vmsum4fp128 v48,v49,v12
	_mm_store_ps(ctx.v48.f32, _mm_dp_ps(_mm_load_ps(ctx.v49.f32), _mm_load_ps(ctx.v12.f32), 0xFF));
	// vxor128 v32,v11,v61
	_mm_store_si128((__m128i*)ctx.v32.u8, _mm_xor_si128(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)ctx.v61.u8)));
	// vmaddfp v11,v0,v10,v11
	_mm_store_ps(ctx.v11.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v10.f32)), _mm_load_ps(ctx.v11.f32)));
	// vmsum4fp128 v57,v32,v10
	_mm_store_ps(ctx.v57.f32, _mm_dp_ps(_mm_load_ps(ctx.v32.f32), _mm_load_ps(ctx.v10.f32), 0xFF));
	// vaddfp128 v54,v13,v60
	_mm_store_ps(ctx.v54.f32, _mm_add_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v60.f32)));
	// vaddfp128 v53,v11,v60
	_mm_store_ps(ctx.v53.f32, _mm_add_ps(_mm_load_ps(ctx.v11.f32), _mm_load_ps(ctx.v60.f32)));
	// vrefp128 v51,v48
	_mm_store_ps(ctx.v51.f32, _mm_div_ps(_mm_set1_ps(1), _mm_load_ps(ctx.v48.f32)));
	// vrefp128 v50,v57
	_mm_store_ps(ctx.v50.f32, _mm_div_ps(_mm_set1_ps(1), _mm_load_ps(ctx.v57.f32)));
	// vcfpsxws128 v49,v54,0
	_mm_store_si128((__m128i*)ctx.v49.s32, _mm_vctsxs(_mm_load_ps(ctx.v54.f32)));
	// vcfpsxws128 v48,v53,0
	_mm_store_si128((__m128i*)ctx.v48.s32, _mm_vctsxs(_mm_load_ps(ctx.v53.f32)));
	// vxor128 v32,v51,v61
	_mm_store_si128((__m128i*)ctx.v32.u8, _mm_xor_si128(_mm_load_si128((__m128i*)ctx.v51.u8), _mm_load_si128((__m128i*)ctx.v61.u8)));
	// vxor128 v57,v50,v55
	_mm_store_si128((__m128i*)ctx.v57.u8, _mm_xor_si128(_mm_load_si128((__m128i*)ctx.v50.u8), _mm_load_si128((__m128i*)ctx.v55.u8)));
	// vslw128 v54,v49,v59
	ctx.v54.u32[0] = ctx.v49.u32[0] << (ctx.v59.u8[0] & 0x1F);
	ctx.v54.u32[1] = ctx.v49.u32[1] << (ctx.v59.u8[4] & 0x1F);
	ctx.v54.u32[2] = ctx.v49.u32[2] << (ctx.v59.u8[8] & 0x1F);
	ctx.v54.u32[3] = ctx.v49.u32[3] << (ctx.v59.u8[12] & 0x1F);
	// vslw128 v53,v48,v59
	ctx.v53.u32[0] = ctx.v48.u32[0] << (ctx.v59.u8[0] & 0x1F);
	ctx.v53.u32[1] = ctx.v48.u32[1] << (ctx.v59.u8[4] & 0x1F);
	ctx.v53.u32[2] = ctx.v48.u32[2] << (ctx.v59.u8[8] & 0x1F);
	ctx.v53.u32[3] = ctx.v48.u32[3] << (ctx.v59.u8[12] & 0x1F);
	// stvx128 v54,r0,r4
	_mm_store_si128((__m128i*)(base + ((ctx.r4.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v54.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lwz r5,232(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 232);
	// lwz r4,236(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 236);
	// stvx128 v53,r0,r31
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v53.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lwz r31,612(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 612);
	// lvlx128 v51,r5,r11
	temp.u32 = ctx.r5.u32 + ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v51.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lwz r5,608(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 608);
	// lvlx128 v50,r4,r11
	temp.u32 = ctx.r4.u32 + ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v50.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v49,r31,r11
	temp.u32 = ctx.r31.u32 + ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v49.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lwz r4,616(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 616);
	// lvlx128 v53,r5,r11
	temp.u32 = ctx.r5.u32 + ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v53.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vrlimi128 v53,v49,4,3
	_mm_store_ps(ctx.v53.f32, _mm_blend_ps(_mm_load_ps(ctx.v53.f32), _mm_permute_ps(_mm_load_ps(ctx.v49.f32), 57), 4));
	// lwz r20,620(r1)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r1.u32 + 620);
	// lwz r31,228(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	// lvx128 v54,r28,r24
	simd::store_shuffled(ctx.v54, simd::load_and_shuffle(base + ((ctx.r28.u32 + ctx.r24.u32) & ~0xF), VectorMaskL));
	// lwz r30,224(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	// lvx128 v48,r28,r23
	simd::store_shuffled(ctx.v48, simd::load_and_shuffle(base + ((ctx.r28.u32 + ctx.r23.u32) & ~0xF), VectorMaskL));
	// addi r29,r1,20
	ctx.r29.s64 = ctx.r1.s64 + 20;
	// lvlx128 v49,r4,r11
	temp.u32 = ctx.r4.u32 + ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v49.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vrlimi128 v53,v49,2,2
	_mm_store_ps(ctx.v53.f32, _mm_blend_ps(_mm_load_ps(ctx.v53.f32), _mm_permute_ps(_mm_load_ps(ctx.v49.f32), 78), 2));
	// lvlx v11,r20,r11
	temp.u32 = ctx.r20.u32 + ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx v13,r31,r11
	temp.u32 = ctx.r31.u32 + ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx v12,r30,r11
	temp.u32 = ctx.r30.u32 + ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vrlimi128 v12,v13,4,3
	_mm_store_ps(ctx.v12.f32, _mm_blend_ps(_mm_load_ps(ctx.v12.f32), _mm_permute_ps(_mm_load_ps(ctx.v13.f32), 57), 4));
	// vrlimi128 v53,v11,1,1
	_mm_store_ps(ctx.v53.f32, _mm_blend_ps(_mm_load_ps(ctx.v53.f32), _mm_permute_ps(_mm_load_ps(ctx.v11.f32), 147), 1));
	// vrlimi128 v12,v51,2,2
	_mm_store_ps(ctx.v12.f32, _mm_blend_ps(_mm_load_ps(ctx.v12.f32), _mm_permute_ps(_mm_load_ps(ctx.v51.f32), 78), 2));
	// vmsum4fp128 v57,v53,v57
	_mm_store_ps(ctx.v57.f32, _mm_dp_ps(_mm_load_ps(ctx.v53.f32), _mm_load_ps(ctx.v57.f32), 0xFF));
	// vrlimi128 v12,v50,1,1
	_mm_store_ps(ctx.v12.f32, _mm_blend_ps(_mm_load_ps(ctx.v12.f32), _mm_permute_ps(_mm_load_ps(ctx.v50.f32), 147), 1));
	// vmsum4fp128 v53,v12,v32
	_mm_store_ps(ctx.v53.f32, _mm_dp_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v32.f32), 0xFF));
	// vaddfp128 v51,v52,v57
	_mm_store_ps(ctx.v51.f32, _mm_add_ps(_mm_load_ps(ctx.v52.f32), _mm_load_ps(ctx.v57.f32)));
	// vaddfp128 v50,v51,v53
	_mm_store_ps(ctx.v50.f32, _mm_add_ps(_mm_load_ps(ctx.v51.f32), _mm_load_ps(ctx.v53.f32)));
	// vmulfp128 v49,v50,v56
	_mm_store_ps(ctx.v49.f32, _mm_mul_ps(_mm_load_ps(ctx.v50.f32), _mm_load_ps(ctx.v56.f32)));
	// vcmpgtfp128 v48,v48,v49
	_mm_store_ps(ctx.v48.f32, _mm_cmpgt_ps(_mm_load_ps(ctx.v48.f32), _mm_load_ps(ctx.v49.f32)));
	// vcmpgtfp128 v32,v54,v49
	_mm_store_ps(ctx.v32.f32, _mm_cmpgt_ps(_mm_load_ps(ctx.v54.f32), _mm_load_ps(ctx.v49.f32)));
	// vcsxwfp128 v57,v48,0
	_mm_store_ps(ctx.v57.f32, _mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v48.u32)));
	// vcsxwfp128 v54,v32,0
	_mm_store_ps(ctx.v54.f32, _mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v32.u32)));
	// vmsum3fp128 v53,v57,v62
	_mm_store_ps(ctx.v53.f32, _mm_dp_ps(_mm_load_ps(ctx.v57.f32), _mm_load_ps(ctx.v62.f32), 0xEF));
	// vmsum4fp128 v51,v54,v62
	_mm_store_ps(ctx.v51.f32, _mm_dp_ps(_mm_load_ps(ctx.v54.f32), _mm_load_ps(ctx.v62.f32), 0xFF));
	// vaddfp128 v50,v51,v53
	_mm_store_ps(ctx.v50.f32, _mm_add_ps(_mm_load_ps(ctx.v51.f32), _mm_load_ps(ctx.v53.f32)));
	// vcfpsxws128 v49,v50,0
	_mm_store_si128((__m128i*)ctx.v49.s32, _mm_vctsxs(_mm_load_ps(ctx.v50.f32)));
	// stvewx128 v49,r0,r29
	ea = (ctx.r29.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v49.u32[3 - ((ea & 0xF) >> 2)]);
	// lwz r5,16(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 16);
	// rlwinm r4,r5,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f0,r4,r25
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r25.u32);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x82a2d964
	if (ctx.cr6.lt) goto loc_82A2D964;
	// lwz r5,20(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 20);
	// addi r4,r5,8
	ctx.r4.s64 = ctx.r5.s64 + 8;
	// rlwinm r5,r4,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f12,r5,r25
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r25.u32);
	ctx.f12.f64 = double(temp.f32);
	// fadds f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 + ctx.f0.f64));
	// stfs f0,720(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 720, temp.u32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x82a2d964
	if (ctx.cr6.lt) goto loc_82A2D964;
	// lwz r4,72(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// addi r31,r3,72
	ctx.r31.s64 = ctx.r3.s64 + 72;
	// addi r9,r9,32
	ctx.r9.s64 = ctx.r9.s64 + 32;
	// addi r10,r10,64
	ctx.r10.s64 = ctx.r10.s64 + 64;
	// addi r5,r25,64
	ctx.r5.s64 = ctx.r25.s64 + 64;
	// li r30,2
	ctx.r30.s64 = 2;
	// cmpwi cr6,r4,2
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 2, ctx.xer);
	// ble cr6,0x82a2c930
	if (!ctx.cr6.gt) goto loc_82A2C930;
loc_82A2C6B4:
	// lvx128 v57,r0,r9
	simd::store_shuffled(ctx.v57, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// li r8,128
	ctx.r8.s64 = 128;
	// dcbt r8,r9
	// vperm128 v48,v57,v63,v1
	_mm_store_si128((__m128i*)ctx.v48.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v57.u8), _mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)ctx.v1.u8)));
	// vperm128 v32,v57,v63,v3
	_mm_store_si128((__m128i*)ctx.v32.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v57.u8), _mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)ctx.v3.u8)));
	// addi r4,r1,288
	ctx.r4.s64 = ctx.r1.s64 + 288;
	// vperm128 v54,v57,v63,v2
	_mm_store_si128((__m128i*)ctx.v54.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v57.u8), _mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)ctx.v2.u8)));
	// addi r8,r1,544
	ctx.r8.s64 = ctx.r1.s64 + 544;
	// vperm128 v53,v57,v63,v7
	_mm_store_si128((__m128i*)ctx.v53.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v57.u8), _mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)ctx.v7.u8)));
	// lvx128 v51,r0,r10
	simd::store_shuffled(ctx.v51, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// vcsxwfp128 v13,v48,0
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v13.f32, _mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v48.u32)));
	// lvx128 v50,r10,r7
	simd::store_shuffled(ctx.v50, simd::load_and_shuffle(base + ((ctx.r10.u32 + ctx.r7.u32) & ~0xF), VectorMaskL));
	// vcsxwfp128 v12,v32,0
	_mm_store_ps(ctx.v12.f32, _mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v32.u32)));
	// addi r29,r1,16
	ctx.r29.s64 = ctx.r1.s64 + 16;
	// vcsxwfp128 v11,v54,0
	_mm_store_ps(ctx.v11.f32, _mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v54.u32)));
	// addi r20,r1,320
	ctx.r20.s64 = ctx.r1.s64 + 320;
	// vcsxwfp128 v10,v53,0
	_mm_store_ps(ctx.v10.f32, _mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v53.u32)));
	// vxor128 v49,v13,v61
	_mm_store_si128((__m128i*)ctx.v49.u8, _mm_xor_si128(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)ctx.v61.u8)));
	// vmaddfp v13,v0,v12,v13
	_mm_store_ps(ctx.v13.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v12.f32)), _mm_load_ps(ctx.v13.f32)));
	// vxor128 v48,v11,v61
	_mm_store_si128((__m128i*)ctx.v48.u8, _mm_xor_si128(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)ctx.v61.u8)));
	// vmaddfp v11,v0,v10,v11
	_mm_store_ps(ctx.v11.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v10.f32)), _mm_load_ps(ctx.v11.f32)));
	// vmsum4fp128 v32,v49,v12
	_mm_store_ps(ctx.v32.f32, _mm_dp_ps(_mm_load_ps(ctx.v49.f32), _mm_load_ps(ctx.v12.f32), 0xFF));
	// vmsum4fp128 v57,v48,v10
	_mm_store_ps(ctx.v57.f32, _mm_dp_ps(_mm_load_ps(ctx.v48.f32), _mm_load_ps(ctx.v10.f32), 0xFF));
	// vaddfp128 v54,v13,v60
	_mm_store_ps(ctx.v54.f32, _mm_add_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v60.f32)));
	// vaddfp128 v53,v11,v60
	_mm_store_ps(ctx.v53.f32, _mm_add_ps(_mm_load_ps(ctx.v11.f32), _mm_load_ps(ctx.v60.f32)));
	// vrefp128 v49,v32
	_mm_store_ps(ctx.v49.f32, _mm_div_ps(_mm_set1_ps(1), _mm_load_ps(ctx.v32.f32)));
	// vrefp128 v48,v57
	_mm_store_ps(ctx.v48.f32, _mm_div_ps(_mm_set1_ps(1), _mm_load_ps(ctx.v57.f32)));
	// vcfpsxws128 v32,v54,0
	_mm_store_si128((__m128i*)ctx.v32.s32, _mm_vctsxs(_mm_load_ps(ctx.v54.f32)));
	// vcfpsxws128 v57,v53,0
	_mm_store_si128((__m128i*)ctx.v57.s32, _mm_vctsxs(_mm_load_ps(ctx.v53.f32)));
	// vxor128 v54,v49,v55
	_mm_store_si128((__m128i*)ctx.v54.u8, _mm_xor_si128(_mm_load_si128((__m128i*)ctx.v49.u8), _mm_load_si128((__m128i*)ctx.v55.u8)));
	// vxor128 v53,v48,v61
	_mm_store_si128((__m128i*)ctx.v53.u8, _mm_xor_si128(_mm_load_si128((__m128i*)ctx.v48.u8), _mm_load_si128((__m128i*)ctx.v61.u8)));
	// vslw128 v49,v32,v59
	ctx.v49.u32[0] = ctx.v32.u32[0] << (ctx.v59.u8[0] & 0x1F);
	ctx.v49.u32[1] = ctx.v32.u32[1] << (ctx.v59.u8[4] & 0x1F);
	ctx.v49.u32[2] = ctx.v32.u32[2] << (ctx.v59.u8[8] & 0x1F);
	ctx.v49.u32[3] = ctx.v32.u32[3] << (ctx.v59.u8[12] & 0x1F);
	// vslw128 v48,v57,v59
	ctx.v48.u32[0] = ctx.v57.u32[0] << (ctx.v59.u8[0] & 0x1F);
	ctx.v48.u32[1] = ctx.v57.u32[1] << (ctx.v59.u8[4] & 0x1F);
	ctx.v48.u32[2] = ctx.v57.u32[2] << (ctx.v59.u8[8] & 0x1F);
	ctx.v48.u32[3] = ctx.v57.u32[3] << (ctx.v59.u8[12] & 0x1F);
	// stvx128 v49,r0,r4
	_mm_store_si128((__m128i*)(base + ((ctx.r4.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v49.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lwz r4,292(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 292);
	// lwz r18,296(r1)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r1.u32 + 296);
	// stvx128 v48,r0,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v48.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lwz r17,544(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + 544);
	// lwz r16,300(r1)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r1.u32 + 300);
	// lwz r14,552(r1)
	ctx.r14.u64 = PPC_LOAD_U32(ctx.r1.u32 + 552);
	// lwz r15,556(r1)
	ctx.r15.u64 = PPC_LOAD_U32(ctx.r1.u32 + 556);
	// lwz r19,288(r1)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r1.u32 + 288);
	// lwz r8,548(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 548);
	// lvlx128 v49,r19,r11
	temp.u32 = ctx.r19.u32 + ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v49.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v57,r4,r11
	temp.u32 = ctx.r4.u32 + ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v57.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r4,r1,640
	ctx.r4.s64 = ctx.r1.s64 + 640;
	// vrlimi128 v49,v57,4,3
	_mm_store_ps(ctx.v49.f32, _mm_blend_ps(_mm_load_ps(ctx.v49.f32), _mm_permute_ps(_mm_load_ps(ctx.v57.f32), 57), 4));
	// lvlx128 v48,r18,r11
	temp.u32 = ctx.r18.u32 + ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v48.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v57,r8,r11
	temp.u32 = ctx.r8.u32 + ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v57.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx v13,r17,r11
	temp.u32 = ctx.r17.u32 + ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vrlimi128 v13,v57,4,3
	_mm_store_ps(ctx.v13.f32, _mm_blend_ps(_mm_load_ps(ctx.v13.f32), _mm_permute_ps(_mm_load_ps(ctx.v57.f32), 57), 4));
	// lvlx128 v57,r16,r11
	temp.u32 = ctx.r16.u32 + ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v57.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vrlimi128 v49,v48,2,2
	_mm_store_ps(ctx.v49.f32, _mm_blend_ps(_mm_load_ps(ctx.v49.f32), _mm_permute_ps(_mm_load_ps(ctx.v48.f32), 78), 2));
	// lvlx128 v32,r14,r11
	temp.u32 = ctx.r14.u32 + ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v32.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx v12,r15,r11
	temp.u32 = ctx.r15.u32 + ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vrlimi128 v13,v32,2,2
	_mm_store_ps(ctx.v13.f32, _mm_blend_ps(_mm_load_ps(ctx.v13.f32), _mm_permute_ps(_mm_load_ps(ctx.v32.f32), 78), 2));
	// vrlimi128 v49,v57,1,1
	_mm_store_ps(ctx.v49.f32, _mm_blend_ps(_mm_load_ps(ctx.v49.f32), _mm_permute_ps(_mm_load_ps(ctx.v57.f32), 147), 1));
	// vrlimi128 v13,v12,1,1
	_mm_store_ps(ctx.v13.f32, _mm_blend_ps(_mm_load_ps(ctx.v13.f32), _mm_permute_ps(_mm_load_ps(ctx.v12.f32), 147), 1));
	// vmsum4fp128 v54,v49,v54
	_mm_store_ps(ctx.v54.f32, _mm_dp_ps(_mm_load_ps(ctx.v49.f32), _mm_load_ps(ctx.v54.f32), 0xFF));
	// vmsum4fp128 v53,v13,v53
	_mm_store_ps(ctx.v53.f32, _mm_dp_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v53.f32), 0xFF));
	// vaddfp128 v49,v52,v54
	_mm_store_ps(ctx.v49.f32, _mm_add_ps(_mm_load_ps(ctx.v52.f32), _mm_load_ps(ctx.v54.f32)));
	// vaddfp128 v48,v49,v53
	_mm_store_ps(ctx.v48.f32, _mm_add_ps(_mm_load_ps(ctx.v49.f32), _mm_load_ps(ctx.v53.f32)));
	// vmulfp128 v32,v48,v56
	_mm_store_ps(ctx.v32.f32, _mm_mul_ps(_mm_load_ps(ctx.v48.f32), _mm_load_ps(ctx.v56.f32)));
	// vcmpgtfp128 v57,v50,v32
	_mm_store_ps(ctx.v57.f32, _mm_cmpgt_ps(_mm_load_ps(ctx.v50.f32), _mm_load_ps(ctx.v32.f32)));
	// vcmpgtfp128 v54,v51,v32
	_mm_store_ps(ctx.v54.f32, _mm_cmpgt_ps(_mm_load_ps(ctx.v51.f32), _mm_load_ps(ctx.v32.f32)));
	// vcsxwfp128 v53,v57,0
	_mm_store_ps(ctx.v53.f32, _mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v57.u32)));
	// vcsxwfp128 v51,v54,0
	_mm_store_ps(ctx.v51.f32, _mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v54.u32)));
	// vmsum3fp128 v50,v53,v62
	_mm_store_ps(ctx.v50.f32, _mm_dp_ps(_mm_load_ps(ctx.v53.f32), _mm_load_ps(ctx.v62.f32), 0xEF));
	// vmsum4fp128 v49,v51,v62
	_mm_store_ps(ctx.v49.f32, _mm_dp_ps(_mm_load_ps(ctx.v51.f32), _mm_load_ps(ctx.v62.f32), 0xFF));
	// vaddfp128 v48,v49,v50
	_mm_store_ps(ctx.v48.f32, _mm_add_ps(_mm_load_ps(ctx.v49.f32), _mm_load_ps(ctx.v50.f32)));
	// vcfpsxws128 v32,v48,0
	_mm_store_si128((__m128i*)ctx.v32.s32, _mm_vctsxs(_mm_load_ps(ctx.v48.f32)));
	// stvewx128 v32,r0,r29
	ea = (ctx.r29.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v32.u32[3 - ((ea & 0xF) >> 2)]);
	// lvx128 v57,r9,r7
	simd::store_shuffled(ctx.v57, simd::load_and_shuffle(base + ((ctx.r9.u32 + ctx.r7.u32) & ~0xF), VectorMaskL));
	// vperm128 v54,v57,v63,v1
	_mm_store_si128((__m128i*)ctx.v54.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v57.u8), _mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)ctx.v1.u8)));
	// vcsxwfp128 v13,v54,0
	_mm_store_ps(ctx.v13.f32, _mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v54.u32)));
	// vperm128 v53,v57,v63,v2
	_mm_store_si128((__m128i*)ctx.v53.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v57.u8), _mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)ctx.v2.u8)));
	// vperm128 v51,v57,v63,v3
	_mm_store_si128((__m128i*)ctx.v51.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v57.u8), _mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)ctx.v3.u8)));
	// vperm128 v50,v57,v63,v7
	_mm_store_si128((__m128i*)ctx.v50.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v57.u8), _mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)ctx.v7.u8)));
	// vcsxwfp128 v12,v53,0
	_mm_store_ps(ctx.v12.f32, _mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v53.u32)));
	// vcsxwfp128 v11,v51,0
	_mm_store_ps(ctx.v11.f32, _mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v51.u32)));
	// vxor128 v49,v13,v61
	_mm_store_si128((__m128i*)ctx.v49.u8, _mm_xor_si128(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)ctx.v61.u8)));
	// vcsxwfp128 v10,v50,0
	_mm_store_ps(ctx.v10.f32, _mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v50.u32)));
	// vxor128 v54,v12,v61
	_mm_store_si128((__m128i*)ctx.v54.u8, _mm_xor_si128(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)ctx.v61.u8)));
	// vmaddfp v9,v0,v11,v13
	_mm_store_ps(ctx.v9.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v11.f32)), _mm_load_ps(ctx.v13.f32)));
	// vmsum4fp128 v57,v49,v11
	_mm_store_ps(ctx.v57.f32, _mm_dp_ps(_mm_load_ps(ctx.v49.f32), _mm_load_ps(ctx.v11.f32), 0xFF));
	// lvx128 v48,r10,r23
	simd::store_shuffled(ctx.v48, simd::load_and_shuffle(base + ((ctx.r10.u32 + ctx.r23.u32) & ~0xF), VectorMaskL));
	// addi r8,r1,20
	ctx.r8.s64 = ctx.r1.s64 + 20;
	// lvx128 v32,r10,r24
	simd::store_shuffled(ctx.v32, simd::load_and_shuffle(base + ((ctx.r10.u32 + ctx.r24.u32) & ~0xF), VectorMaskL));
	// vmaddfp v13,v0,v10,v12
	_mm_store_ps(ctx.v13.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v10.f32)), _mm_load_ps(ctx.v12.f32)));
	// vmsum4fp128 v53,v54,v10
	_mm_store_ps(ctx.v53.f32, _mm_dp_ps(_mm_load_ps(ctx.v54.f32), _mm_load_ps(ctx.v10.f32), 0xFF));
	// vaddfp128 v51,v9,v60
	_mm_store_ps(ctx.v51.f32, _mm_add_ps(_mm_load_ps(ctx.v9.f32), _mm_load_ps(ctx.v60.f32)));
	// vrefp128 v49,v57
	_mm_store_ps(ctx.v49.f32, _mm_div_ps(_mm_set1_ps(1), _mm_load_ps(ctx.v57.f32)));
	// vaddfp128 v50,v13,v60
	_mm_store_ps(ctx.v50.f32, _mm_add_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v60.f32)));
	// vcfpsxws128 v54,v51,0
	_mm_store_si128((__m128i*)ctx.v54.s32, _mm_vctsxs(_mm_load_ps(ctx.v51.f32)));
	// vrefp128 v57,v53
	_mm_store_ps(ctx.v57.f32, _mm_div_ps(_mm_set1_ps(1), _mm_load_ps(ctx.v53.f32)));
	// vxor128 v51,v49,v55
	_mm_store_si128((__m128i*)ctx.v51.u8, _mm_xor_si128(_mm_load_si128((__m128i*)ctx.v49.u8), _mm_load_si128((__m128i*)ctx.v55.u8)));
	// vcfpsxws128 v53,v50,0
	_mm_store_si128((__m128i*)ctx.v53.s32, _mm_vctsxs(_mm_load_ps(ctx.v50.f32)));
	// vslw128 v49,v54,v59
	ctx.v49.u32[0] = ctx.v54.u32[0] << (ctx.v59.u8[0] & 0x1F);
	ctx.v49.u32[1] = ctx.v54.u32[1] << (ctx.v59.u8[4] & 0x1F);
	ctx.v49.u32[2] = ctx.v54.u32[2] << (ctx.v59.u8[8] & 0x1F);
	ctx.v49.u32[3] = ctx.v54.u32[3] << (ctx.v59.u8[12] & 0x1F);
	// vxor128 v50,v57,v61
	_mm_store_si128((__m128i*)ctx.v50.u8, _mm_xor_si128(_mm_load_si128((__m128i*)ctx.v57.u8), _mm_load_si128((__m128i*)ctx.v61.u8)));
	// stvx128 v49,r0,r20
	_mm_store_si128((__m128i*)(base + ((ctx.r20.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v49.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lwz r29,324(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 324);
	// lwz r18,332(r1)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r1.u32 + 332);
	// vslw128 v57,v53,v59
	ctx.v57.u32[0] = ctx.v53.u32[0] << (ctx.v59.u8[0] & 0x1F);
	ctx.v57.u32[1] = ctx.v53.u32[1] << (ctx.v59.u8[4] & 0x1F);
	ctx.v57.u32[2] = ctx.v53.u32[2] << (ctx.v59.u8[8] & 0x1F);
	ctx.v57.u32[3] = ctx.v53.u32[3] << (ctx.v59.u8[12] & 0x1F);
	// stvx128 v57,r0,r4
	_mm_store_si128((__m128i*)(base + ((ctx.r4.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v57.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lwz r16,644(r1)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r1.u32 + 644);
	// lwz r20,320(r1)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r1.u32 + 320);
	// lwz r19,328(r1)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r1.u32 + 328);
	// lvlx v11,r20,r11
	temp.u32 = ctx.r20.u32 + ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lwz r17,640(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + 640);
	// lwz r4,648(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 648);
	// lwz r15,652(r1)
	ctx.r15.u64 = PPC_LOAD_U32(ctx.r1.u32 + 652);
	// lvlx128 v53,r17,r11
	temp.u32 = ctx.r17.u32 + ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v53.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx v10,r4,r11
	temp.u32 = ctx.r4.u32 + ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v10.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v57,r15,r11
	temp.u32 = ctx.r15.u32 + ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v57.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v54,r18,r11
	temp.u32 = ctx.r18.u32 + ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v54.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v49,r16,r11
	temp.u32 = ctx.r16.u32 + ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v49.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vrlimi128 v53,v49,4,3
	_mm_store_ps(ctx.v53.f32, _mm_blend_ps(_mm_load_ps(ctx.v53.f32), _mm_permute_ps(_mm_load_ps(ctx.v49.f32), 57), 4));
	// lvlx128 v49,r29,r11
	temp.u32 = ctx.r29.u32 + ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v49.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vrlimi128 v11,v49,4,3
	_mm_store_ps(ctx.v11.f32, _mm_blend_ps(_mm_load_ps(ctx.v11.f32), _mm_permute_ps(_mm_load_ps(ctx.v49.f32), 57), 4));
	// lvlx128 v49,r19,r11
	temp.u32 = ctx.r19.u32 + ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v49.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vrlimi128 v53,v10,2,2
	_mm_store_ps(ctx.v53.f32, _mm_blend_ps(_mm_load_ps(ctx.v53.f32), _mm_permute_ps(_mm_load_ps(ctx.v10.f32), 78), 2));
	// vrlimi128 v11,v49,2,2
	_mm_store_ps(ctx.v11.f32, _mm_blend_ps(_mm_load_ps(ctx.v11.f32), _mm_permute_ps(_mm_load_ps(ctx.v49.f32), 78), 2));
	// vrlimi128 v53,v57,1,1
	_mm_store_ps(ctx.v53.f32, _mm_blend_ps(_mm_load_ps(ctx.v53.f32), _mm_permute_ps(_mm_load_ps(ctx.v57.f32), 147), 1));
	// vrlimi128 v11,v54,1,1
	_mm_store_ps(ctx.v11.f32, _mm_blend_ps(_mm_load_ps(ctx.v11.f32), _mm_permute_ps(_mm_load_ps(ctx.v54.f32), 147), 1));
	// vmsum4fp128 v57,v53,v50
	_mm_store_ps(ctx.v57.f32, _mm_dp_ps(_mm_load_ps(ctx.v53.f32), _mm_load_ps(ctx.v50.f32), 0xFF));
	// vmsum4fp128 v54,v11,v51
	_mm_store_ps(ctx.v54.f32, _mm_dp_ps(_mm_load_ps(ctx.v11.f32), _mm_load_ps(ctx.v51.f32), 0xFF));
	// vaddfp128 v53,v52,v54
	_mm_store_ps(ctx.v53.f32, _mm_add_ps(_mm_load_ps(ctx.v52.f32), _mm_load_ps(ctx.v54.f32)));
	// vaddfp128 v51,v53,v57
	_mm_store_ps(ctx.v51.f32, _mm_add_ps(_mm_load_ps(ctx.v53.f32), _mm_load_ps(ctx.v57.f32)));
	// vmulfp128 v50,v51,v56
	_mm_store_ps(ctx.v50.f32, _mm_mul_ps(_mm_load_ps(ctx.v51.f32), _mm_load_ps(ctx.v56.f32)));
	// vcmpgtfp128 v49,v48,v50
	_mm_store_ps(ctx.v49.f32, _mm_cmpgt_ps(_mm_load_ps(ctx.v48.f32), _mm_load_ps(ctx.v50.f32)));
	// vcmpgtfp128 v48,v32,v50
	_mm_store_ps(ctx.v48.f32, _mm_cmpgt_ps(_mm_load_ps(ctx.v32.f32), _mm_load_ps(ctx.v50.f32)));
	// vcsxwfp128 v32,v49,0
	_mm_store_ps(ctx.v32.f32, _mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v49.u32)));
	// vcsxwfp128 v57,v48,0
	_mm_store_ps(ctx.v57.f32, _mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v48.u32)));
	// vmsum3fp128 v54,v32,v62
	_mm_store_ps(ctx.v54.f32, _mm_dp_ps(_mm_load_ps(ctx.v32.f32), _mm_load_ps(ctx.v62.f32), 0xEF));
	// vmsum4fp128 v53,v57,v62
	_mm_store_ps(ctx.v53.f32, _mm_dp_ps(_mm_load_ps(ctx.v57.f32), _mm_load_ps(ctx.v62.f32), 0xFF));
	// vaddfp128 v51,v53,v54
	_mm_store_ps(ctx.v51.f32, _mm_add_ps(_mm_load_ps(ctx.v53.f32), _mm_load_ps(ctx.v54.f32)));
	// vcfpsxws128 v50,v51,0
	_mm_store_si128((__m128i*)ctx.v50.s32, _mm_vctsxs(_mm_load_ps(ctx.v51.f32)));
	// stvewx128 v50,r0,r8
	ea = (ctx.r8.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v50.u32[3 - ((ea & 0xF) >> 2)]);
	// lwz r8,16(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 16);
	// rlwinm r4,r8,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f12,r4,r5
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r5.u32);
	ctx.f12.f64 = double(temp.f32);
	// fadds f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 + ctx.f0.f64));
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x82a2d964
	if (ctx.cr6.lt) goto loc_82A2D964;
	// lwz r8,20(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 20);
	// addi r4,r8,8
	ctx.r4.s64 = ctx.r8.s64 + 8;
	// rlwinm r8,r4,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f12,r8,r5
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r5.u32);
	ctx.f12.f64 = double(temp.f32);
	// fadds f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 + ctx.f0.f64));
	// stfs f0,720(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 720, temp.u32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x82a2d964
	if (ctx.cr6.lt) goto loc_82A2D964;
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r30,r30,2
	ctx.r30.s64 = ctx.r30.s64 + 2;
	// addi r9,r9,32
	ctx.r9.s64 = ctx.r9.s64 + 32;
	// addi r10,r10,64
	ctx.r10.s64 = ctx.r10.s64 + 64;
	// addi r5,r5,64
	ctx.r5.s64 = ctx.r5.s64 + 64;
	// cmpw cr6,r30,r8
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x82a2c6b4
	if (ctx.cr6.lt) goto loc_82A2C6B4;
loc_82A2C930:
	// addi r8,r1,720
	ctx.r8.s64 = ctx.r1.s64 + 720;
	// li r4,128
	ctx.r4.s64 = 128;
	// lvx128 v49,r0,r8
	simd::store_shuffled(ctx.v49, simd::load_and_shuffle(base + ((ctx.r8.u32) & ~0xF), VectorMaskL));
	// vspltw128 v13,v49,0
	_mm_store_si128((__m128i*)ctx.v13.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v49.u32), 0xFF));
	// vor v12,v13,v13
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_load_si128((__m128i*)ctx.v13.u8));
	// vrlimi128 v12,v58,7,0
	_mm_store_ps(ctx.v12.f32, _mm_blend_ps(_mm_load_ps(ctx.v12.f32), _mm_permute_ps(_mm_load_ps(ctx.v58.f32), 228), 7));
	// dcbt r4,r9
	// lvx128 v48,r0,r10
	simd::store_shuffled(ctx.v48, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// addi r8,r1,16
	ctx.r8.s64 = ctx.r1.s64 + 16;
	// lvx128 v32,r10,r7
	simd::store_shuffled(ctx.v32, simd::load_and_shuffle(base + ((ctx.r10.u32 + ctx.r7.u32) & ~0xF), VectorMaskL));
	// vcmpgtfp128 v57,v48,v56
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v57.f32, _mm_cmpgt_ps(_mm_load_ps(ctx.v48.f32), _mm_load_ps(ctx.v56.f32)));
	// vcmpgtfp128 v54,v32,v56
	_mm_store_ps(ctx.v54.f32, _mm_cmpgt_ps(_mm_load_ps(ctx.v32.f32), _mm_load_ps(ctx.v56.f32)));
	// addi r4,r1,352
	ctx.r4.s64 = ctx.r1.s64 + 352;
	// addi r29,r1,576
	ctx.r29.s64 = ctx.r1.s64 + 576;
	// vcmpgtfp128 v29,v13,v58
	_mm_store_ps(ctx.v29.f32, _mm_cmpgt_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v58.f32)));
	// addi r20,r1,20
	ctx.r20.s64 = ctx.r1.s64 + 20;
	// vor128 v5,v62,v62
	_mm_store_si128((__m128i*)ctx.v5.u8, _mm_load_si128((__m128i*)ctx.v62.u8));
	// vcmpgtfp128 v31,v12,v58
	_mm_store_ps(ctx.v31.f32, _mm_cmpgt_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v58.f32)));
	// vcmpgtfp128 v30,v13,v58
	_mm_store_ps(ctx.v30.f32, _mm_cmpgt_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v58.f32)));
	// vcsxwfp128 v53,v57,0
	_mm_store_ps(ctx.v53.f32, _mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v57.u32)));
	// vcsxwfp128 v51,v54,0
	_mm_store_ps(ctx.v51.f32, _mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v54.u32)));
	// vmsum4fp128 v50,v53,v62
	_mm_store_ps(ctx.v50.f32, _mm_dp_ps(_mm_load_ps(ctx.v53.f32), _mm_load_ps(ctx.v62.f32), 0xFF));
	// vmsum3fp128 v49,v51,v62
	_mm_store_ps(ctx.v49.f32, _mm_dp_ps(_mm_load_ps(ctx.v51.f32), _mm_load_ps(ctx.v62.f32), 0xEF));
	// vaddfp128 v48,v50,v49
	_mm_store_ps(ctx.v48.f32, _mm_add_ps(_mm_load_ps(ctx.v50.f32), _mm_load_ps(ctx.v49.f32)));
	// vcfpsxws128 v32,v48,0
	_mm_store_si128((__m128i*)ctx.v32.s32, _mm_vctsxs(_mm_load_ps(ctx.v48.f32)));
	// stvewx128 v32,r0,r8
	ea = (ctx.r8.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v32.u32[3 - ((ea & 0xF) >> 2)]);
	// lwz r8,16(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 16);
	// lvx128 v57,r9,r7
	simd::store_shuffled(ctx.v57, simd::load_and_shuffle(base + ((ctx.r9.u32 + ctx.r7.u32) & ~0xF), VectorMaskL));
	// rlwinm r31,r8,1,0,30
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// vperm128 v54,v57,v63,v1
	_mm_store_si128((__m128i*)ctx.v54.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v57.u8), _mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)ctx.v1.u8)));
	// add r8,r8,r31
	ctx.r8.u64 = ctx.r8.u64 + ctx.r31.u64;
	// vperm128 v53,v57,v63,v3
	_mm_store_si128((__m128i*)ctx.v53.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v57.u8), _mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)ctx.v3.u8)));
	// lvx128 v51,r10,r23
	simd::store_shuffled(ctx.v51, simd::load_and_shuffle(base + ((ctx.r10.u32 + ctx.r23.u32) & ~0xF), VectorMaskL));
	// vperm128 v50,v57,v63,v2
	_mm_store_si128((__m128i*)ctx.v50.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v57.u8), _mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)ctx.v2.u8)));
	// rlwinm r8,r8,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// vperm128 v49,v57,v63,v7
	_mm_store_si128((__m128i*)ctx.v49.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v57.u8), _mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)ctx.v7.u8)));
	// lvx128 v48,r10,r24
	simd::store_shuffled(ctx.v48, simd::load_and_shuffle(base + ((ctx.r10.u32 + ctx.r24.u32) & ~0xF), VectorMaskL));
	// vcsxwfp128 v11,v54,0
	_mm_store_ps(ctx.v11.f32, _mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v54.u32)));
	// add r8,r8,r5
	ctx.r8.u64 = ctx.r8.u64 + ctx.r5.u64;
	// vcsxwfp128 v10,v53,0
	_mm_store_ps(ctx.v10.f32, _mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v53.u32)));
	// vcsxwfp128 v9,v50,0
	_mm_store_ps(ctx.v9.f32, _mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v50.u32)));
	// vcsxwfp128 v8,v49,0
	_mm_store_ps(ctx.v8.f32, _mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v49.u32)));
	// vxor128 v32,v11,v61
	_mm_store_si128((__m128i*)ctx.v32.u8, _mm_xor_si128(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)ctx.v61.u8)));
	// vmaddfp v6,v0,v10,v11
	_mm_store_ps(ctx.v6.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v10.f32)), _mm_load_ps(ctx.v11.f32)));
	// vxor128 v57,v9,v61
	_mm_store_si128((__m128i*)ctx.v57.u8, _mm_xor_si128(_mm_load_si128((__m128i*)ctx.v9.u8), _mm_load_si128((__m128i*)ctx.v61.u8)));
	// vmaddfp v11,v0,v8,v9
	_mm_store_ps(ctx.v11.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v8.f32)), _mm_load_ps(ctx.v9.f32)));
	// vmsum4fp128 v54,v32,v10
	_mm_store_ps(ctx.v54.f32, _mm_dp_ps(_mm_load_ps(ctx.v32.f32), _mm_load_ps(ctx.v10.f32), 0xFF));
	// vmsum4fp128 v53,v57,v8
	_mm_store_ps(ctx.v53.f32, _mm_dp_ps(_mm_load_ps(ctx.v57.f32), _mm_load_ps(ctx.v8.f32), 0xFF));
	// vaddfp128 v50,v6,v60
	_mm_store_ps(ctx.v50.f32, _mm_add_ps(_mm_load_ps(ctx.v6.f32), _mm_load_ps(ctx.v60.f32)));
	// vaddfp128 v49,v11,v60
	_mm_store_ps(ctx.v49.f32, _mm_add_ps(_mm_load_ps(ctx.v11.f32), _mm_load_ps(ctx.v60.f32)));
	// vrefp128 v32,v54
	_mm_store_ps(ctx.v32.f32, _mm_div_ps(_mm_set1_ps(1), _mm_load_ps(ctx.v54.f32)));
	// vrefp128 v57,v53
	_mm_store_ps(ctx.v57.f32, _mm_div_ps(_mm_set1_ps(1), _mm_load_ps(ctx.v53.f32)));
	// vcfpsxws128 v54,v50,0
	_mm_store_si128((__m128i*)ctx.v54.s32, _mm_vctsxs(_mm_load_ps(ctx.v50.f32)));
	// vcfpsxws128 v53,v49,0
	_mm_store_si128((__m128i*)ctx.v53.s32, _mm_vctsxs(_mm_load_ps(ctx.v49.f32)));
	// vxor128 v50,v32,v55
	_mm_store_si128((__m128i*)ctx.v50.u8, _mm_xor_si128(_mm_load_si128((__m128i*)ctx.v32.u8), _mm_load_si128((__m128i*)ctx.v55.u8)));
	// vxor128 v49,v57,v61
	_mm_store_si128((__m128i*)ctx.v49.u8, _mm_xor_si128(_mm_load_si128((__m128i*)ctx.v57.u8), _mm_load_si128((__m128i*)ctx.v61.u8)));
	// vslw128 v32,v54,v59
	ctx.v32.u32[0] = ctx.v54.u32[0] << (ctx.v59.u8[0] & 0x1F);
	ctx.v32.u32[1] = ctx.v54.u32[1] << (ctx.v59.u8[4] & 0x1F);
	ctx.v32.u32[2] = ctx.v54.u32[2] << (ctx.v59.u8[8] & 0x1F);
	ctx.v32.u32[3] = ctx.v54.u32[3] << (ctx.v59.u8[12] & 0x1F);
	// vslw128 v57,v53,v59
	ctx.v57.u32[0] = ctx.v53.u32[0] << (ctx.v59.u8[0] & 0x1F);
	ctx.v57.u32[1] = ctx.v53.u32[1] << (ctx.v59.u8[4] & 0x1F);
	ctx.v57.u32[2] = ctx.v53.u32[2] << (ctx.v59.u8[8] & 0x1F);
	ctx.v57.u32[3] = ctx.v53.u32[3] << (ctx.v59.u8[12] & 0x1F);
	// stvx128 v32,r0,r4
	_mm_store_si128((__m128i*)(base + ((ctx.r4.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v32.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lwz r18,360(r1)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r1.u32 + 360);
	// lwz r17,364(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + 364);
	// stvx128 v57,r0,r29
	_mm_store_si128((__m128i*)(base + ((ctx.r29.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v57.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lwz r4,356(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 356);
	// lwz r31,352(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 352);
	// lwz r19,576(r1)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r1.u32 + 576);
	// lwz r16,588(r1)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r1.u32 + 588);
	// lwz r29,580(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 580);
	// lwz r15,584(r1)
	ctx.r15.u64 = PPC_LOAD_U32(ctx.r1.u32 + 584);
	// lvlx128 v54,r15,r11
	temp.u32 = ctx.r15.u32 + ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v54.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx v11,r18,r11
	temp.u32 = ctx.r18.u32 + ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx v10,r17,r11
	temp.u32 = ctx.r17.u32 + ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v10.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v53,r4,r11
	temp.u32 = ctx.r4.u32 + ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v53.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v32,r31,r11
	temp.u32 = ctx.r31.u32 + ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v32.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vrlimi128 v32,v53,4,3
	_mm_store_ps(ctx.v32.f32, _mm_blend_ps(_mm_load_ps(ctx.v32.f32), _mm_permute_ps(_mm_load_ps(ctx.v53.f32), 57), 4));
	// lvlx128 v57,r29,r11
	temp.u32 = ctx.r29.u32 + ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v57.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vrlimi128 v32,v11,2,2
	_mm_store_ps(ctx.v32.f32, _mm_blend_ps(_mm_load_ps(ctx.v32.f32), _mm_permute_ps(_mm_load_ps(ctx.v11.f32), 78), 2));
	// lvlx128 v53,r19,r11
	temp.u32 = ctx.r19.u32 + ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v53.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vrlimi128 v53,v57,4,3
	_mm_store_ps(ctx.v53.f32, _mm_blend_ps(_mm_load_ps(ctx.v53.f32), _mm_permute_ps(_mm_load_ps(ctx.v57.f32), 57), 4));
	// lvlx v9,r16,r11
	temp.u32 = ctx.r16.u32 + ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v9.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vrlimi128 v32,v10,1,1
	_mm_store_ps(ctx.v32.f32, _mm_blend_ps(_mm_load_ps(ctx.v32.f32), _mm_permute_ps(_mm_load_ps(ctx.v10.f32), 147), 1));
	// vrlimi128 v53,v54,2,2
	_mm_store_ps(ctx.v53.f32, _mm_blend_ps(_mm_load_ps(ctx.v53.f32), _mm_permute_ps(_mm_load_ps(ctx.v54.f32), 78), 2));
	// vmsum4fp128 v50,v32,v50
	_mm_store_ps(ctx.v50.f32, _mm_dp_ps(_mm_load_ps(ctx.v32.f32), _mm_load_ps(ctx.v50.f32), 0xFF));
	// vrlimi128 v53,v9,1,1
	_mm_store_ps(ctx.v53.f32, _mm_blend_ps(_mm_load_ps(ctx.v53.f32), _mm_permute_ps(_mm_load_ps(ctx.v9.f32), 147), 1));
	// vor128 v11,v62,v62
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_load_si128((__m128i*)ctx.v62.u8));
	// addi r4,r1,28
	ctx.r4.s64 = ctx.r1.s64 + 28;
	// vor128 v10,v63,v63
	_mm_store_si128((__m128i*)ctx.v10.u8, _mm_load_si128((__m128i*)ctx.v63.u8));
	// vor128 v4,v63,v63
	_mm_store_si128((__m128i*)ctx.v4.u8, _mm_load_si128((__m128i*)ctx.v63.u8));
	// vmsum4fp128 v49,v53,v49
	_mm_store_ps(ctx.v49.f32, _mm_dp_ps(_mm_load_ps(ctx.v53.f32), _mm_load_ps(ctx.v49.f32), 0xFF));
	// vor128 v8,v62,v62
	_mm_store_si128((__m128i*)ctx.v8.u8, _mm_load_si128((__m128i*)ctx.v62.u8));
	// vor128 v6,v63,v63
	_mm_store_si128((__m128i*)ctx.v6.u8, _mm_load_si128((__m128i*)ctx.v63.u8));
	// vor128 v54,v12,v12
	_mm_store_si128((__m128i*)ctx.v54.u8, _mm_load_si128((__m128i*)ctx.v12.u8));
	// vsel v31,v10,v11,v31
	_mm_store_si128((__m128i*)ctx.v31.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v31.u8), _mm_load_si128((__m128i*)ctx.v10.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v31.u8), _mm_load_si128((__m128i*)ctx.v11.u8))));
	// vsel v29,v4,v5,v29
	_mm_store_si128((__m128i*)ctx.v29.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v29.u8), _mm_load_si128((__m128i*)ctx.v4.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v29.u8), _mm_load_si128((__m128i*)ctx.v5.u8))));
	// vsel v30,v6,v8,v30
	_mm_store_si128((__m128i*)ctx.v30.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v30.u8), _mm_load_si128((__m128i*)ctx.v6.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v30.u8), _mm_load_si128((__m128i*)ctx.v8.u8))));
	// vor128 v57,v13,v13
	_mm_store_si128((__m128i*)ctx.v57.u8, _mm_load_si128((__m128i*)ctx.v13.u8));
	// vor128 v5,v63,v63
	_mm_store_si128((__m128i*)ctx.v5.u8, _mm_load_si128((__m128i*)ctx.v63.u8));
	// vor128 v6,v62,v62
	_mm_store_si128((__m128i*)ctx.v6.u8, _mm_load_si128((__m128i*)ctx.v62.u8));
	// vor128 v9,v62,v62
	_mm_store_si128((__m128i*)ctx.v9.u8, _mm_load_si128((__m128i*)ctx.v62.u8));
	// vor128 v8,v63,v63
	_mm_store_si128((__m128i*)ctx.v8.u8, _mm_load_si128((__m128i*)ctx.v63.u8));
	// vaddfp128 v32,v52,v50
	_mm_store_ps(ctx.v32.f32, _mm_add_ps(_mm_load_ps(ctx.v52.f32), _mm_load_ps(ctx.v50.f32)));
	// vaddfp128 v53,v32,v49
	_mm_store_ps(ctx.v53.f32, _mm_add_ps(_mm_load_ps(ctx.v32.f32), _mm_load_ps(ctx.v49.f32)));
	// vmulfp128 v50,v53,v56
	_mm_store_ps(ctx.v50.f32, _mm_mul_ps(_mm_load_ps(ctx.v53.f32), _mm_load_ps(ctx.v56.f32)));
	// vcmpgtfp128 v49,v51,v50
	_mm_store_ps(ctx.v49.f32, _mm_cmpgt_ps(_mm_load_ps(ctx.v51.f32), _mm_load_ps(ctx.v50.f32)));
	// vcmpgtfp128 v48,v48,v50
	_mm_store_ps(ctx.v48.f32, _mm_cmpgt_ps(_mm_load_ps(ctx.v48.f32), _mm_load_ps(ctx.v50.f32)));
	// vcsxwfp128 v32,v49,0
	_mm_store_ps(ctx.v32.f32, _mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v49.u32)));
	// vcsxwfp128 v53,v48,0
	_mm_store_ps(ctx.v53.f32, _mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v48.u32)));
	// vmsum3fp128 v51,v32,v62
	_mm_store_ps(ctx.v51.f32, _mm_dp_ps(_mm_load_ps(ctx.v32.f32), _mm_load_ps(ctx.v62.f32), 0xEF));
	// vmsum4fp128 v50,v53,v62
	_mm_store_ps(ctx.v50.f32, _mm_dp_ps(_mm_load_ps(ctx.v53.f32), _mm_load_ps(ctx.v62.f32), 0xFF));
	// vaddfp128 v49,v50,v51
	_mm_store_ps(ctx.v49.f32, _mm_add_ps(_mm_load_ps(ctx.v50.f32), _mm_load_ps(ctx.v51.f32)));
	// vcfpsxws128 v48,v49,0
	_mm_store_si128((__m128i*)ctx.v48.s32, _mm_vctsxs(_mm_load_ps(ctx.v49.f32)));
	// stvewx128 v48,r0,r20
	ea = (ctx.r20.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v48.u32[3 - ((ea & 0xF) >> 2)]);
	// lvx128 v4,r8,r24
	simd::store_shuffled(ctx.v4, simd::load_and_shuffle(base + ((ctx.r8.u32 + ctx.r24.u32) & ~0xF), VectorMaskL));
	// vnmsubfp128 v54,v31,v4,v54
	_mm_store_ps(ctx.v54.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(ctx.v31.f32), _mm_load_ps(ctx.v4.f32)), _mm_load_ps(ctx.v54.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// lvx128 v12,r8,r7
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((ctx.r8.u32 + ctx.r7.u32) & ~0xF), VectorMaskL));
	// vnmsubfp128 v57,v30,v12,v57
	_mm_store_ps(ctx.v57.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(ctx.v30.f32), _mm_load_ps(ctx.v12.f32)), _mm_load_ps(ctx.v57.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// lvx128 v4,r0,r8
	simd::store_shuffled(ctx.v4, simd::load_and_shuffle(base + ((ctx.r8.u32) & ~0xF), VectorMaskL));
	// vnmsubfp v13,v29,v4,v13
	_mm_store_ps(ctx.v13.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(ctx.v29.f32), _mm_load_ps(ctx.v4.f32)), _mm_load_ps(ctx.v13.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// vcmpgefp128 v30,v54,v63
	_mm_store_ps(ctx.v30.f32, _mm_cmpge_ps(_mm_load_ps(ctx.v54.f32), _mm_load_ps(ctx.v63.f32)));
	// lwz r8,20(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 20);
	// vcmpgefp128 v31,v57,v63
	_mm_store_ps(ctx.v31.f32, _mm_cmpge_ps(_mm_load_ps(ctx.v57.f32), _mm_load_ps(ctx.v63.f32)));
	// addi r8,r8,8
	ctx.r8.s64 = ctx.r8.s64 + 8;
	// vcmpgefp128 v28,v13,v63
	_mm_store_ps(ctx.v28.f32, _mm_cmpge_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v63.f32)));
	// vsel v12,v5,v6,v30
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v30.u8), _mm_load_si128((__m128i*)ctx.v5.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v30.u8), _mm_load_si128((__m128i*)ctx.v6.u8))));
	// vsel v29,v8,v9,v31
	_mm_store_si128((__m128i*)ctx.v29.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v31.u8), _mm_load_si128((__m128i*)ctx.v8.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v31.u8), _mm_load_si128((__m128i*)ctx.v9.u8))));
	// rlwinm r31,r8,1,0,30
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// add r8,r8,r31
	ctx.r8.u64 = ctx.r8.u64 + ctx.r31.u64;
	// vmsum4fp128 v32,v12,v62
	_mm_store_ps(ctx.v32.f32, _mm_dp_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v62.f32), 0xFF));
	// vmsum4fp128 v53,v29,v62
	_mm_store_ps(ctx.v53.f32, _mm_dp_ps(_mm_load_ps(ctx.v29.f32), _mm_load_ps(ctx.v62.f32), 0xFF));
	// rlwinm r8,r8,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// add r8,r8,r5
	ctx.r8.u64 = ctx.r8.u64 + ctx.r5.u64;
	// vsel v5,v10,v11,v28
	_mm_store_si128((__m128i*)ctx.v5.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v28.u8), _mm_load_si128((__m128i*)ctx.v10.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v28.u8), _mm_load_si128((__m128i*)ctx.v11.u8))));
	// vmsum4fp128 v51,v5,v62
	_mm_store_ps(ctx.v51.f32, _mm_dp_ps(_mm_load_ps(ctx.v5.f32), _mm_load_ps(ctx.v62.f32), 0xFF));
	// vaddfp128 v50,v51,v53
	_mm_store_ps(ctx.v50.f32, _mm_add_ps(_mm_load_ps(ctx.v51.f32), _mm_load_ps(ctx.v53.f32)));
	// vaddfp128 v49,v50,v32
	_mm_store_ps(ctx.v49.f32, _mm_add_ps(_mm_load_ps(ctx.v50.f32), _mm_load_ps(ctx.v32.f32)));
	// vcfpsxws128 v48,v49,0
	_mm_store_si128((__m128i*)ctx.v48.s32, _mm_vctsxs(_mm_load_ps(ctx.v49.f32)));
	// stvewx128 v48,r0,r4
	ea = (ctx.r4.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v48.u32[3 - ((ea & 0xF) >> 2)]);
	// lwz r4,28(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 28);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82a2d964
	if (ctx.cr6.eq) goto loc_82A2D964;
	// vor128 v4,v58,v58
	_mm_store_si128((__m128i*)ctx.v4.u8, _mm_load_si128((__m128i*)ctx.v58.u8));
	// lvx128 v9,r8,r7
	simd::store_shuffled(ctx.v9, simd::load_and_shuffle(base + ((ctx.r8.u32 + ctx.r7.u32) & ~0xF), VectorMaskL));
	// vor128 v11,v57,v57
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_load_si128((__m128i*)ctx.v57.u8));
	// lvx128 v6,r0,r8
	simd::store_shuffled(ctx.v6, simd::load_and_shuffle(base + ((ctx.r8.u32) & ~0xF), VectorMaskL));
	// vor128 v10,v58,v58
	_mm_store_si128((__m128i*)ctx.v10.u8, _mm_load_si128((__m128i*)ctx.v58.u8));
	// addi r4,r1,704
	ctx.r4.s64 = ctx.r1.s64 + 704;
	// vor v8,v29,v29
	_mm_store_si128((__m128i*)ctx.v8.u8, _mm_load_si128((__m128i*)ctx.v29.u8));
	// addi r31,r1,28
	ctx.r31.s64 = ctx.r1.s64 + 28;
	// vsel v29,v4,v13,v28
	_mm_store_si128((__m128i*)ctx.v29.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v28.u8), _mm_load_si128((__m128i*)ctx.v4.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v28.u8), _mm_load_si128((__m128i*)ctx.v13.u8))));
	// lvx128 v13,r8,r24
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r8.u32 + ctx.r24.u32) & ~0xF), VectorMaskL));
	// vor128 v28,v63,v63
	_mm_store_si128((__m128i*)ctx.v28.u8, _mm_load_si128((__m128i*)ctx.v63.u8));
	// vsel v4,v10,v11,v31
	_mm_store_si128((__m128i*)ctx.v4.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v31.u8), _mm_load_si128((__m128i*)ctx.v10.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v31.u8), _mm_load_si128((__m128i*)ctx.v11.u8))));
	// vor128 v11,v54,v54
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_load_si128((__m128i*)ctx.v54.u8));
	// vnmsubfp v26,v5,v6,v29
	_mm_store_ps(ctx.v26.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(ctx.v5.f32), _mm_load_ps(ctx.v6.f32)), _mm_load_ps(ctx.v29.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// vor128 v29,v63,v63
	_mm_store_si128((__m128i*)ctx.v29.u8, _mm_load_si128((__m128i*)ctx.v63.u8));
	// vor128 v31,v58,v58
	_mm_store_si128((__m128i*)ctx.v31.u8, _mm_load_si128((__m128i*)ctx.v58.u8));
	// vnmsubfp v27,v8,v9,v4
	_mm_store_ps(ctx.v27.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(ctx.v8.f32), _mm_load_ps(ctx.v9.f32)), _mm_load_ps(ctx.v4.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// vor128 v8,v62,v62
	_mm_store_si128((__m128i*)ctx.v8.u8, _mm_load_si128((__m128i*)ctx.v62.u8));
	// vsel v6,v10,v11,v30
	_mm_store_si128((__m128i*)ctx.v6.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v30.u8), _mm_load_si128((__m128i*)ctx.v10.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v30.u8), _mm_load_si128((__m128i*)ctx.v11.u8))));
	// vor128 v4,v62,v62
	_mm_store_si128((__m128i*)ctx.v4.u8, _mm_load_si128((__m128i*)ctx.v62.u8));
	// vor128 v30,v58,v58
	_mm_store_si128((__m128i*)ctx.v30.u8, _mm_load_si128((__m128i*)ctx.v58.u8));
	// vor128 v5,v63,v63
	_mm_store_si128((__m128i*)ctx.v5.u8, _mm_load_si128((__m128i*)ctx.v63.u8));
	// vnmsubfp v10,v12,v13,v6
	_mm_store_ps(ctx.v10.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v13.f32)), _mm_load_ps(ctx.v6.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// vor128 v9,v62,v62
	_mm_store_si128((__m128i*)ctx.v9.u8, _mm_load_si128((__m128i*)ctx.v62.u8));
	// vor128 v11,v58,v58
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_load_si128((__m128i*)ctx.v58.u8));
	// vcmpgefp128 v25,v26,v63
	_mm_store_ps(ctx.v25.f32, _mm_cmpge_ps(_mm_load_ps(ctx.v26.f32), _mm_load_ps(ctx.v63.f32)));
	// vor v6,v26,v26
	_mm_store_si128((__m128i*)ctx.v6.u8, _mm_load_si128((__m128i*)ctx.v26.u8));
	// vor128 v32,v27,v27
	_mm_store_si128((__m128i*)ctx.v32.u8, _mm_load_si128((__m128i*)ctx.v27.u8));
	// vcmpgefp128 v27,v32,v63
	_mm_store_ps(ctx.v27.f32, _mm_cmpge_ps(_mm_load_ps(ctx.v32.f32), _mm_load_ps(ctx.v63.f32)));
	// vor128 v12,v32,v32
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_load_si128((__m128i*)ctx.v32.u8));
	// vcmpgefp128 v26,v10,v63
	_mm_store_ps(ctx.v26.f32, _mm_cmpge_ps(_mm_load_ps(ctx.v10.f32), _mm_load_ps(ctx.v63.f32)));
	// vor v13,v10,v10
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_load_si128((__m128i*)ctx.v10.u8));
	// vsel v10,v28,v8,v25
	_mm_store_si128((__m128i*)ctx.v10.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v25.u8), _mm_load_si128((__m128i*)ctx.v28.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v25.u8), _mm_load_si128((__m128i*)ctx.v8.u8))));
	// vmsum4fp128 v57,v10,v62
	_mm_store_ps(ctx.v57.f32, _mm_dp_ps(_mm_load_ps(ctx.v10.f32), _mm_load_ps(ctx.v62.f32), 0xFF));
	// vsel v8,v29,v4,v27
	_mm_store_si128((__m128i*)ctx.v8.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v27.u8), _mm_load_si128((__m128i*)ctx.v29.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v27.u8), _mm_load_si128((__m128i*)ctx.v4.u8))));
	// vsel v4,v30,v6,v25
	_mm_store_si128((__m128i*)ctx.v4.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v25.u8), _mm_load_si128((__m128i*)ctx.v30.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v25.u8), _mm_load_si128((__m128i*)ctx.v6.u8))));
	// vsel v6,v31,v12,v27
	_mm_store_si128((__m128i*)ctx.v6.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v27.u8), _mm_load_si128((__m128i*)ctx.v31.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v27.u8), _mm_load_si128((__m128i*)ctx.v12.u8))));
	// vsel v12,v5,v9,v26
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v26.u8), _mm_load_si128((__m128i*)ctx.v5.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v26.u8), _mm_load_si128((__m128i*)ctx.v9.u8))));
	// vmsum4fp128 v54,v8,v62
	_mm_store_ps(ctx.v54.f32, _mm_dp_ps(_mm_load_ps(ctx.v8.f32), _mm_load_ps(ctx.v62.f32), 0xFF));
	// vsel v5,v11,v13,v26
	_mm_store_si128((__m128i*)ctx.v5.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v26.u8), _mm_load_si128((__m128i*)ctx.v11.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v26.u8), _mm_load_si128((__m128i*)ctx.v13.u8))));
	// stvx128 v4,r0,r4
	_mm_store_si128((__m128i*)(base + ((ctx.r4.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v4.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmsum4fp128 v53,v12,v62
	_mm_store_ps(ctx.v53.f32, _mm_dp_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v62.f32), 0xFF));
	// vaddfp128 v51,v57,v54
	_mm_store_ps(ctx.v51.f32, _mm_add_ps(_mm_load_ps(ctx.v57.f32), _mm_load_ps(ctx.v54.f32)));
	// vaddfp128 v50,v51,v53
	_mm_store_ps(ctx.v50.f32, _mm_add_ps(_mm_load_ps(ctx.v51.f32), _mm_load_ps(ctx.v53.f32)));
	// vcfpsxws128 v49,v50,0
	_mm_store_si128((__m128i*)ctx.v49.s32, _mm_vctsxs(_mm_load_ps(ctx.v50.f32)));
	// stvewx128 v49,r0,r31
	ea = (ctx.r31.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v49.u32[3 - ((ea & 0xF) >> 2)]);
	// lwz r8,28(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 28);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82a2d964
	if (ctx.cr6.eq) goto loc_82A2D964;
	// lwz r4,40(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 40);
	// addi r30,r30,2
	ctx.r30.s64 = ctx.r30.s64 + 2;
	// addi r8,r9,32
	ctx.r8.s64 = ctx.r9.s64 + 32;
	// addi r10,r10,64
	ctx.r10.s64 = ctx.r10.s64 + 64;
	// addi r5,r5,768
	ctx.r5.s64 = ctx.r5.s64 + 768;
	// cmpw cr6,r30,r4
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r4.s32, ctx.xer);
	// bge cr6,0x82a2d030
	if (!ctx.cr6.lt) goto loc_82A2D030;
	// b 0x82a2cc58
	goto loc_82A2CC58;
loc_82A2CC40:
	// addi r9,r1,208
	ctx.r9.s64 = ctx.r1.s64 + 208;
	// addi r4,r1,48
	ctx.r4.s64 = ctx.r1.s64 + 48;
	// addi r31,r1,192
	ctx.r31.s64 = ctx.r1.s64 + 192;
	// lvx128 v3,r0,r9
	simd::store_shuffled(ctx.v3, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// lvx128 v2,r0,r4
	simd::store_shuffled(ctx.v2, simd::load_and_shuffle(base + ((ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v7,r0,r31
	simd::store_shuffled(ctx.v7, simd::load_and_shuffle(base + ((ctx.r31.u32) & ~0xF), VectorMaskL));
loc_82A2CC58:
	// lvx128 v57,r0,r8
	simd::store_shuffled(ctx.v57, simd::load_and_shuffle(base + ((ctx.r8.u32) & ~0xF), VectorMaskL));
	// li r9,128
	ctx.r9.s64 = 128;
	// dcbt r9,r8
	// vperm128 v48,v57,v63,v1
	_mm_store_si128((__m128i*)ctx.v48.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v57.u8), _mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)ctx.v1.u8)));
	// vperm128 v32,v57,v63,v3
	_mm_store_si128((__m128i*)ctx.v32.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v57.u8), _mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)ctx.v3.u8)));
	// addi r4,r1,672
	ctx.r4.s64 = ctx.r1.s64 + 672;
	// vperm128 v53,v57,v63,v7
	_mm_store_si128((__m128i*)ctx.v53.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v57.u8), _mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)ctx.v7.u8)));
	// addi r9,r1,384
	ctx.r9.s64 = ctx.r1.s64 + 384;
	// vperm128 v54,v57,v63,v2
	_mm_store_si128((__m128i*)ctx.v54.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v57.u8), _mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)ctx.v2.u8)));
	// lvx128 v51,r0,r10
	simd::store_shuffled(ctx.v51, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// vcsxwfp128 v13,v48,0
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v13.f32, _mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v48.u32)));
	// lvx128 v50,r10,r7
	simd::store_shuffled(ctx.v50, simd::load_and_shuffle(base + ((ctx.r10.u32 + ctx.r7.u32) & ~0xF), VectorMaskL));
	// vcsxwfp128 v11,v32,0
	_mm_store_ps(ctx.v11.f32, _mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v32.u32)));
	// addi r31,r1,16
	ctx.r31.s64 = ctx.r1.s64 + 16;
	// vcsxwfp128 v7,v53,0
	_mm_store_ps(ctx.v7.f32, _mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v53.u32)));
	// addi r29,r1,192
	ctx.r29.s64 = ctx.r1.s64 + 192;
	// vcsxwfp128 v9,v54,0
	_mm_store_ps(ctx.v9.f32, _mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v54.u32)));
	// vxor128 v49,v13,v61
	_mm_store_si128((__m128i*)ctx.v49.u8, _mm_xor_si128(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)ctx.v61.u8)));
	// vmaddfp v31,v0,v11,v13
	_mm_store_ps(ctx.v31.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v11.f32)), _mm_load_ps(ctx.v13.f32)));
	// vmaddfp v13,v0,v7,v9
	_mm_store_ps(ctx.v13.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v7.f32)), _mm_load_ps(ctx.v9.f32)));
	// vxor128 v48,v9,v61
	_mm_store_si128((__m128i*)ctx.v48.u8, _mm_xor_si128(_mm_load_si128((__m128i*)ctx.v9.u8), _mm_load_si128((__m128i*)ctx.v61.u8)));
	// vmsum4fp128 v32,v49,v11
	_mm_store_ps(ctx.v32.f32, _mm_dp_ps(_mm_load_ps(ctx.v49.f32), _mm_load_ps(ctx.v11.f32), 0xFF));
	// vmsum4fp128 v57,v48,v7
	_mm_store_ps(ctx.v57.f32, _mm_dp_ps(_mm_load_ps(ctx.v48.f32), _mm_load_ps(ctx.v7.f32), 0xFF));
	// vaddfp128 v54,v31,v60
	_mm_store_ps(ctx.v54.f32, _mm_add_ps(_mm_load_ps(ctx.v31.f32), _mm_load_ps(ctx.v60.f32)));
	// vaddfp128 v53,v13,v60
	_mm_store_ps(ctx.v53.f32, _mm_add_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v60.f32)));
	// vrefp128 v49,v32
	_mm_store_ps(ctx.v49.f32, _mm_div_ps(_mm_set1_ps(1), _mm_load_ps(ctx.v32.f32)));
	// vrefp128 v48,v57
	_mm_store_ps(ctx.v48.f32, _mm_div_ps(_mm_set1_ps(1), _mm_load_ps(ctx.v57.f32)));
	// vcfpsxws128 v32,v54,0
	_mm_store_si128((__m128i*)ctx.v32.s32, _mm_vctsxs(_mm_load_ps(ctx.v54.f32)));
	// vcfpsxws128 v57,v53,0
	_mm_store_si128((__m128i*)ctx.v57.s32, _mm_vctsxs(_mm_load_ps(ctx.v53.f32)));
	// vxor128 v54,v49,v55
	_mm_store_si128((__m128i*)ctx.v54.u8, _mm_xor_si128(_mm_load_si128((__m128i*)ctx.v49.u8), _mm_load_si128((__m128i*)ctx.v55.u8)));
	// vxor128 v53,v48,v61
	_mm_store_si128((__m128i*)ctx.v53.u8, _mm_xor_si128(_mm_load_si128((__m128i*)ctx.v48.u8), _mm_load_si128((__m128i*)ctx.v61.u8)));
	// vslw128 v49,v32,v59
	ctx.v49.u32[0] = ctx.v32.u32[0] << (ctx.v59.u8[0] & 0x1F);
	ctx.v49.u32[1] = ctx.v32.u32[1] << (ctx.v59.u8[4] & 0x1F);
	ctx.v49.u32[2] = ctx.v32.u32[2] << (ctx.v59.u8[8] & 0x1F);
	ctx.v49.u32[3] = ctx.v32.u32[3] << (ctx.v59.u8[12] & 0x1F);
	// vslw128 v48,v57,v59
	ctx.v48.u32[0] = ctx.v57.u32[0] << (ctx.v59.u8[0] & 0x1F);
	ctx.v48.u32[1] = ctx.v57.u32[1] << (ctx.v59.u8[4] & 0x1F);
	ctx.v48.u32[2] = ctx.v57.u32[2] << (ctx.v59.u8[8] & 0x1F);
	ctx.v48.u32[3] = ctx.v57.u32[3] << (ctx.v59.u8[12] & 0x1F);
	// stvx128 v49,r0,r4
	_mm_store_si128((__m128i*)(base + ((ctx.r4.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v49.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lwz r19,676(r1)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r1.u32 + 676);
	// stvx128 v48,r0,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v48.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lwz r16,384(r1)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r1.u32 + 384);
	// lwz r9,392(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 392);
	// lwz r18,672(r1)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r1.u32 + 672);
	// lwz r4,680(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 680);
	// lwz r17,388(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + 388);
	// lwz r15,684(r1)
	ctx.r15.u64 = PPC_LOAD_U32(ctx.r1.u32 + 684);
	// lwz r20,396(r1)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r1.u32 + 396);
	// lvlx128 v57,r18,r11
	temp.u32 = ctx.r18.u32 + ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v57.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v49,r17,r11
	temp.u32 = ctx.r17.u32 + ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v49.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v32,r19,r11
	temp.u32 = ctx.r19.u32 + ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v32.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vrlimi128 v57,v32,4,3
	_mm_store_ps(ctx.v57.f32, _mm_blend_ps(_mm_load_ps(ctx.v57.f32), _mm_permute_ps(_mm_load_ps(ctx.v32.f32), 57), 4));
	// lvlx128 v32,r15,r11
	temp.u32 = ctx.r15.u32 + ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v32.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v48,r16,r11
	temp.u32 = ctx.r16.u32 + ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v48.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vrlimi128 v48,v49,4,3
	_mm_store_ps(ctx.v48.f32, _mm_blend_ps(_mm_load_ps(ctx.v48.f32), _mm_permute_ps(_mm_load_ps(ctx.v49.f32), 57), 4));
	// lvlx128 v49,r4,r11
	temp.u32 = ctx.r4.u32 + ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v49.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r4,r1,416
	ctx.r4.s64 = ctx.r1.s64 + 416;
	// vrlimi128 v57,v49,2,2
	_mm_store_ps(ctx.v57.f32, _mm_blend_ps(_mm_load_ps(ctx.v57.f32), _mm_permute_ps(_mm_load_ps(ctx.v49.f32), 78), 2));
	// lvlx128 v49,r9,r11
	temp.u32 = ctx.r9.u32 + ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v49.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vrlimi128 v48,v49,2,2
	_mm_store_ps(ctx.v48.f32, _mm_blend_ps(_mm_load_ps(ctx.v48.f32), _mm_permute_ps(_mm_load_ps(ctx.v49.f32), 78), 2));
	// lvlx128 v49,r20,r11
	temp.u32 = ctx.r20.u32 + ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v49.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vrlimi128 v57,v32,1,1
	_mm_store_ps(ctx.v57.f32, _mm_blend_ps(_mm_load_ps(ctx.v57.f32), _mm_permute_ps(_mm_load_ps(ctx.v32.f32), 147), 1));
	// vrlimi128 v48,v49,1,1
	_mm_store_ps(ctx.v48.f32, _mm_blend_ps(_mm_load_ps(ctx.v48.f32), _mm_permute_ps(_mm_load_ps(ctx.v49.f32), 147), 1));
	// vmsum4fp128 v32,v57,v54
	_mm_store_ps(ctx.v32.f32, _mm_dp_ps(_mm_load_ps(ctx.v57.f32), _mm_load_ps(ctx.v54.f32), 0xFF));
	// vmsum4fp128 v57,v48,v53
	_mm_store_ps(ctx.v57.f32, _mm_dp_ps(_mm_load_ps(ctx.v48.f32), _mm_load_ps(ctx.v53.f32), 0xFF));
	// vaddfp128 v54,v52,v32
	_mm_store_ps(ctx.v54.f32, _mm_add_ps(_mm_load_ps(ctx.v52.f32), _mm_load_ps(ctx.v32.f32)));
	// vaddfp128 v53,v54,v57
	_mm_store_ps(ctx.v53.f32, _mm_add_ps(_mm_load_ps(ctx.v54.f32), _mm_load_ps(ctx.v57.f32)));
	// vmulfp128 v49,v53,v56
	_mm_store_ps(ctx.v49.f32, _mm_mul_ps(_mm_load_ps(ctx.v53.f32), _mm_load_ps(ctx.v56.f32)));
	// vcmpgtfp128 v48,v50,v49
	_mm_store_ps(ctx.v48.f32, _mm_cmpgt_ps(_mm_load_ps(ctx.v50.f32), _mm_load_ps(ctx.v49.f32)));
	// vcmpgtfp128 v32,v51,v49
	_mm_store_ps(ctx.v32.f32, _mm_cmpgt_ps(_mm_load_ps(ctx.v51.f32), _mm_load_ps(ctx.v49.f32)));
	// vcsxwfp128 v57,v48,0
	_mm_store_ps(ctx.v57.f32, _mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v48.u32)));
	// vcsxwfp128 v54,v32,0
	_mm_store_ps(ctx.v54.f32, _mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v32.u32)));
	// vmsum3fp128 v53,v57,v62
	_mm_store_ps(ctx.v53.f32, _mm_dp_ps(_mm_load_ps(ctx.v57.f32), _mm_load_ps(ctx.v62.f32), 0xEF));
	// vmsum4fp128 v51,v54,v62
	_mm_store_ps(ctx.v51.f32, _mm_dp_ps(_mm_load_ps(ctx.v54.f32), _mm_load_ps(ctx.v62.f32), 0xFF));
	// vaddfp128 v50,v51,v53
	_mm_store_ps(ctx.v50.f32, _mm_add_ps(_mm_load_ps(ctx.v51.f32), _mm_load_ps(ctx.v53.f32)));
	// vcfpsxws128 v49,v50,0
	_mm_store_si128((__m128i*)ctx.v49.s32, _mm_vctsxs(_mm_load_ps(ctx.v50.f32)));
	// stvewx128 v49,r0,r31
	ea = (ctx.r31.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v49.u32[3 - ((ea & 0xF) >> 2)]);
	// lvx128 v7,r0,r29
	simd::store_shuffled(ctx.v7, simd::load_and_shuffle(base + ((ctx.r29.u32) & ~0xF), VectorMaskL));
	// addi r29,r1,656
	ctx.r29.s64 = ctx.r1.s64 + 656;
	// lvx128 v57,r8,r7
	simd::store_shuffled(ctx.v57, simd::load_and_shuffle(base + ((ctx.r8.u32 + ctx.r7.u32) & ~0xF), VectorMaskL));
	// vperm128 v48,v57,v63,v1
	_mm_store_si128((__m128i*)ctx.v48.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v57.u8), _mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)ctx.v1.u8)));
	// vperm128 v54,v57,v63,v3
	_mm_store_si128((__m128i*)ctx.v54.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v57.u8), _mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)ctx.v3.u8)));
	// vcsxwfp128 v13,v48,0
	_mm_store_ps(ctx.v13.f32, _mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v48.u32)));
	// vperm128 v32,v57,v63,v2
	_mm_store_si128((__m128i*)ctx.v32.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v57.u8), _mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)ctx.v2.u8)));
	// vperm128 v53,v57,v63,v7
	_mm_store_si128((__m128i*)ctx.v53.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v57.u8), _mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)ctx.v7.u8)));
	// vcsxwfp128 v9,v54,0
	_mm_store_ps(ctx.v9.f32, _mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v54.u32)));
	// vcsxwfp128 v11,v32,0
	_mm_store_ps(ctx.v11.f32, _mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v32.u32)));
	// vxor128 v49,v13,v61
	_mm_store_si128((__m128i*)ctx.v49.u8, _mm_xor_si128(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)ctx.v61.u8)));
	// vcsxwfp128 v7,v53,0
	_mm_store_ps(ctx.v7.f32, _mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v53.u32)));
	// lwz r9,16(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 16);
	// vmaddfp v3,v0,v9,v13
	_mm_store_ps(ctx.v3.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v9.f32)), _mm_load_ps(ctx.v13.f32)));
	// vor128 v57,v4,v4
	_mm_store_si128((__m128i*)ctx.v57.u8, _mm_load_si128((__m128i*)ctx.v4.u8));
	// rlwinm r31,r9,1,0,30
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// vor128 v53,v6,v6
	_mm_store_si128((__m128i*)ctx.v53.u8, _mm_load_si128((__m128i*)ctx.v6.u8));
	// vmsum4fp128 v32,v49,v9
	_mm_store_ps(ctx.v32.f32, _mm_dp_ps(_mm_load_ps(ctx.v49.f32), _mm_load_ps(ctx.v9.f32), 0xFF));
	// lvx128 v51,r10,r23
	simd::store_shuffled(ctx.v51, simd::load_and_shuffle(base + ((ctx.r10.u32 + ctx.r23.u32) & ~0xF), VectorMaskL));
	// add r9,r9,r31
	ctx.r9.u64 = ctx.r9.u64 + ctx.r31.u64;
	// lvx128 v50,r10,r24
	simd::store_shuffled(ctx.v50, simd::load_and_shuffle(base + ((ctx.r10.u32 + ctx.r24.u32) & ~0xF), VectorMaskL));
	// addi r20,r1,20
	ctx.r20.s64 = ctx.r1.s64 + 20;
	// rlwinm r9,r9,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// add r9,r9,r5
	ctx.r9.u64 = ctx.r9.u64 + ctx.r5.u64;
	// vxor128 v48,v11,v61
	_mm_store_si128((__m128i*)ctx.v48.u8, _mm_xor_si128(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)ctx.v61.u8)));
	// vmaddfp v13,v0,v7,v11
	_mm_store_ps(ctx.v13.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v7.f32)), _mm_load_ps(ctx.v11.f32)));
	// vaddfp128 v49,v3,v60
	_mm_store_ps(ctx.v49.f32, _mm_add_ps(_mm_load_ps(ctx.v3.f32), _mm_load_ps(ctx.v60.f32)));
	// vmsum4fp128 v54,v48,v7
	_mm_store_ps(ctx.v54.f32, _mm_dp_ps(_mm_load_ps(ctx.v48.f32), _mm_load_ps(ctx.v7.f32), 0xFF));
	// vrefp128 v32,v32
	_mm_store_ps(ctx.v32.f32, _mm_div_ps(_mm_set1_ps(1), _mm_load_ps(ctx.v32.f32)));
	// vaddfp128 v48,v13,v60
	_mm_store_ps(ctx.v48.f32, _mm_add_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v60.f32)));
	// vcfpsxws128 v49,v49,0
	_mm_store_si128((__m128i*)ctx.v49.s32, _mm_vctsxs(_mm_load_ps(ctx.v49.f32)));
	// vrefp128 v54,v54
	_mm_store_ps(ctx.v54.f32, _mm_div_ps(_mm_set1_ps(1), _mm_load_ps(ctx.v54.f32)));
	// vxor128 v32,v32,v55
	_mm_store_si128((__m128i*)ctx.v32.u8, _mm_xor_si128(_mm_load_si128((__m128i*)ctx.v32.u8), _mm_load_si128((__m128i*)ctx.v55.u8)));
	// vcfpsxws128 v48,v48,0
	_mm_store_si128((__m128i*)ctx.v48.s32, _mm_vctsxs(_mm_load_ps(ctx.v48.f32)));
	// vslw128 v49,v49,v59
	ctx.v49.u32[0] = ctx.v49.u32[0] << (ctx.v59.u8[0] & 0x1F);
	ctx.v49.u32[1] = ctx.v49.u32[1] << (ctx.v59.u8[4] & 0x1F);
	ctx.v49.u32[2] = ctx.v49.u32[2] << (ctx.v59.u8[8] & 0x1F);
	ctx.v49.u32[3] = ctx.v49.u32[3] << (ctx.v59.u8[12] & 0x1F);
	// stvx128 v49,r0,r4
	_mm_store_si128((__m128i*)(base + ((ctx.r4.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v49.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lwz r19,424(r1)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r1.u32 + 424);
	// vxor128 v54,v54,v61
	_mm_store_si128((__m128i*)ctx.v54.u8, _mm_xor_si128(_mm_load_si128((__m128i*)ctx.v54.u8), _mm_load_si128((__m128i*)ctx.v61.u8)));
	// vslw128 v48,v48,v59
	ctx.v48.u32[0] = ctx.v48.u32[0] << (ctx.v59.u8[0] & 0x1F);
	ctx.v48.u32[1] = ctx.v48.u32[1] << (ctx.v59.u8[4] & 0x1F);
	ctx.v48.u32[2] = ctx.v48.u32[2] << (ctx.v59.u8[8] & 0x1F);
	ctx.v48.u32[3] = ctx.v48.u32[3] << (ctx.v59.u8[12] & 0x1F);
	// stvx128 v48,r0,r29
	_mm_store_si128((__m128i*)(base + ((ctx.r29.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v48.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lwz r29,416(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 416);
	// lwz r18,660(r1)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r1.u32 + 660);
	// lwz r17,656(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + 656);
	// lwz r31,420(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 420);
	// lvlx128 v49,r31,r11
	temp.u32 = ctx.r31.u32 + ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v49.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lwz r31,428(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 428);
	// lvlx v3,r31,r11
	temp.u32 = ctx.r31.u32 + ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v3.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lwz r4,668(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 668);
	// lvlx128 v48,r29,r11
	temp.u32 = ctx.r29.u32 + ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v48.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lwz r29,664(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 664);
	// vrlimi128 v48,v49,4,3
	_mm_store_ps(ctx.v48.f32, _mm_blend_ps(_mm_load_ps(ctx.v48.f32), _mm_permute_ps(_mm_load_ps(ctx.v49.f32), 57), 4));
	// lvlx128 v49,r19,r11
	temp.u32 = ctx.r19.u32 + ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v49.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx v6,r18,r11
	temp.u32 = ctx.r18.u32 + ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v6.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx v4,r17,r11
	temp.u32 = ctx.r17.u32 + ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v4.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vrlimi128 v4,v6,4,3
	_mm_store_ps(ctx.v4.f32, _mm_blend_ps(_mm_load_ps(ctx.v4.f32), _mm_permute_ps(_mm_load_ps(ctx.v6.f32), 57), 4));
	// vrlimi128 v48,v49,2,2
	_mm_store_ps(ctx.v48.f32, _mm_blend_ps(_mm_load_ps(ctx.v48.f32), _mm_permute_ps(_mm_load_ps(ctx.v49.f32), 78), 2));
	// lvlx v2,r29,r11
	temp.u32 = ctx.r29.u32 + ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v2.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v49,r4,r11
	temp.u32 = ctx.r4.u32 + ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v49.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r4,r1,28
	ctx.r4.s64 = ctx.r1.s64 + 28;
	// vrlimi128 v4,v2,2,2
	_mm_store_ps(ctx.v4.f32, _mm_blend_ps(_mm_load_ps(ctx.v4.f32), _mm_permute_ps(_mm_load_ps(ctx.v2.f32), 78), 2));
	// vrlimi128 v48,v3,1,1
	_mm_store_ps(ctx.v48.f32, _mm_blend_ps(_mm_load_ps(ctx.v48.f32), _mm_permute_ps(_mm_load_ps(ctx.v3.f32), 147), 1));
	// vrlimi128 v4,v49,1,1
	_mm_store_ps(ctx.v4.f32, _mm_blend_ps(_mm_load_ps(ctx.v4.f32), _mm_permute_ps(_mm_load_ps(ctx.v49.f32), 147), 1));
	// vmsum4fp128 v48,v48,v32
	_mm_store_ps(ctx.v48.f32, _mm_dp_ps(_mm_load_ps(ctx.v48.f32), _mm_load_ps(ctx.v32.f32), 0xFF));
	// vmsum4fp128 v32,v4,v54
	_mm_store_ps(ctx.v32.f32, _mm_dp_ps(_mm_load_ps(ctx.v4.f32), _mm_load_ps(ctx.v54.f32), 0xFF));
	// vaddfp128 v54,v52,v48
	_mm_store_ps(ctx.v54.f32, _mm_add_ps(_mm_load_ps(ctx.v52.f32), _mm_load_ps(ctx.v48.f32)));
	// vaddfp128 v49,v54,v32
	_mm_store_ps(ctx.v49.f32, _mm_add_ps(_mm_load_ps(ctx.v54.f32), _mm_load_ps(ctx.v32.f32)));
	// vmulfp128 v48,v49,v56
	_mm_store_ps(ctx.v48.f32, _mm_mul_ps(_mm_load_ps(ctx.v49.f32), _mm_load_ps(ctx.v56.f32)));
	// vcmpgtfp128 v32,v51,v48
	_mm_store_ps(ctx.v32.f32, _mm_cmpgt_ps(_mm_load_ps(ctx.v51.f32), _mm_load_ps(ctx.v48.f32)));
	// vcmpgtfp128 v54,v50,v48
	_mm_store_ps(ctx.v54.f32, _mm_cmpgt_ps(_mm_load_ps(ctx.v50.f32), _mm_load_ps(ctx.v48.f32)));
	// vcsxwfp128 v51,v32,0
	_mm_store_ps(ctx.v51.f32, _mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v32.u32)));
	// vcsxwfp128 v50,v54,0
	_mm_store_ps(ctx.v50.f32, _mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v54.u32)));
	// vmsum3fp128 v49,v51,v62
	_mm_store_ps(ctx.v49.f32, _mm_dp_ps(_mm_load_ps(ctx.v51.f32), _mm_load_ps(ctx.v62.f32), 0xEF));
	// vmsum4fp128 v48,v50,v62
	_mm_store_ps(ctx.v48.f32, _mm_dp_ps(_mm_load_ps(ctx.v50.f32), _mm_load_ps(ctx.v62.f32), 0xFF));
	// vaddfp128 v32,v48,v49
	_mm_store_ps(ctx.v32.f32, _mm_add_ps(_mm_load_ps(ctx.v48.f32), _mm_load_ps(ctx.v49.f32)));
	// vcfpsxws128 v54,v32,0
	_mm_store_si128((__m128i*)ctx.v54.s32, _mm_vctsxs(_mm_load_ps(ctx.v32.f32)));
	// stvewx128 v54,r0,r20
	ea = (ctx.r20.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v54.u32[3 - ((ea & 0xF) >> 2)]);
	// vor128 v54,v5,v5
	_mm_store_si128((__m128i*)ctx.v54.u8, _mm_load_si128((__m128i*)ctx.v5.u8));
	// lvx128 v13,r9,r24
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r9.u32 + ctx.r24.u32) & ~0xF), VectorMaskL));
	// lvx128 v11,r0,r9
	simd::store_shuffled(ctx.v11, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// lvx128 v9,r9,r7
	simd::store_shuffled(ctx.v9, simd::load_and_shuffle(base + ((ctx.r9.u32 + ctx.r7.u32) & ~0xF), VectorMaskL));
	// vnmsubfp128 v53,v8,v9,v53
	_mm_store_ps(ctx.v53.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(ctx.v8.f32), _mm_load_ps(ctx.v9.f32)), _mm_load_ps(ctx.v53.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// vnmsubfp128 v54,v12,v13,v54
	_mm_store_ps(ctx.v54.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v13.f32)), _mm_load_ps(ctx.v54.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// lwz r9,20(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 20);
	// vnmsubfp128 v57,v10,v11,v57
	_mm_store_ps(ctx.v57.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(ctx.v10.f32), _mm_load_ps(ctx.v11.f32)), _mm_load_ps(ctx.v57.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// vor128 v9,v62,v62
	_mm_store_si128((__m128i*)ctx.v9.u8, _mm_load_si128((__m128i*)ctx.v62.u8));
	// vor128 v8,v63,v63
	_mm_store_si128((__m128i*)ctx.v8.u8, _mm_load_si128((__m128i*)ctx.v63.u8));
	// vcmpgefp128 v4,v53,v63
	_mm_store_ps(ctx.v4.f32, _mm_cmpge_ps(_mm_load_ps(ctx.v53.f32), _mm_load_ps(ctx.v63.f32)));
	// vor128 v13,v62,v62
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_load_si128((__m128i*)ctx.v62.u8));
	// vor128 v12,v63,v63
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_load_si128((__m128i*)ctx.v63.u8));
	// vor128 v11,v62,v62
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_load_si128((__m128i*)ctx.v62.u8));
	// vcmpgefp128 v3,v57,v63
	_mm_store_ps(ctx.v3.f32, _mm_cmpge_ps(_mm_load_ps(ctx.v57.f32), _mm_load_ps(ctx.v63.f32)));
	// vsel v31,v8,v9,v4
	_mm_store_si128((__m128i*)ctx.v31.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v4.u8), _mm_load_si128((__m128i*)ctx.v8.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v4.u8), _mm_load_si128((__m128i*)ctx.v9.u8))));
	// vcmpgefp128 v5,v54,v63
	_mm_store_ps(ctx.v5.f32, _mm_cmpge_ps(_mm_load_ps(ctx.v54.f32), _mm_load_ps(ctx.v63.f32)));
	// vor128 v10,v63,v63
	_mm_store_si128((__m128i*)ctx.v10.u8, _mm_load_si128((__m128i*)ctx.v63.u8));
	// addi r9,r9,8
	ctx.r9.s64 = ctx.r9.s64 + 8;
	// vmsum4fp128 v51,v31,v62
	_mm_store_ps(ctx.v51.f32, _mm_dp_ps(_mm_load_ps(ctx.v31.f32), _mm_load_ps(ctx.v62.f32), 0xFF));
	// rlwinm r31,r9,1,0,30
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// add r9,r9,r31
	ctx.r9.u64 = ctx.r9.u64 + ctx.r31.u64;
	// rlwinm r9,r9,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// add r9,r9,r5
	ctx.r9.u64 = ctx.r9.u64 + ctx.r5.u64;
	// vsel v6,v12,v13,v3
	_mm_store_si128((__m128i*)ctx.v6.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v3.u8), _mm_load_si128((__m128i*)ctx.v12.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v3.u8), _mm_load_si128((__m128i*)ctx.v13.u8))));
	// vsel v2,v10,v11,v5
	_mm_store_si128((__m128i*)ctx.v2.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v5.u8), _mm_load_si128((__m128i*)ctx.v10.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v5.u8), _mm_load_si128((__m128i*)ctx.v11.u8))));
	// vmsum4fp128 v50,v6,v62
	_mm_store_ps(ctx.v50.f32, _mm_dp_ps(_mm_load_ps(ctx.v6.f32), _mm_load_ps(ctx.v62.f32), 0xFF));
	// vmsum4fp128 v49,v2,v62
	_mm_store_ps(ctx.v49.f32, _mm_dp_ps(_mm_load_ps(ctx.v2.f32), _mm_load_ps(ctx.v62.f32), 0xFF));
	// vaddfp128 v48,v50,v51
	_mm_store_ps(ctx.v48.f32, _mm_add_ps(_mm_load_ps(ctx.v50.f32), _mm_load_ps(ctx.v51.f32)));
	// vaddfp128 v32,v48,v49
	_mm_store_ps(ctx.v32.f32, _mm_add_ps(_mm_load_ps(ctx.v48.f32), _mm_load_ps(ctx.v49.f32)));
	// vcfpsxws128 v51,v32,0
	_mm_store_si128((__m128i*)ctx.v51.s32, _mm_vctsxs(_mm_load_ps(ctx.v32.f32)));
	// stvewx128 v51,r0,r4
	ea = (ctx.r4.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v51.u32[3 - ((ea & 0xF) >> 2)]);
	// lwz r4,28(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 28);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82a2d944
	if (ctx.cr6.eq) goto loc_82A2D944;
	// vor128 v12,v53,v53
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_load_si128((__m128i*)ctx.v53.u8));
	// lvx128 v9,r9,r7
	simd::store_shuffled(ctx.v9, simd::load_and_shuffle(base + ((ctx.r9.u32 + ctx.r7.u32) & ~0xF), VectorMaskL));
	// vor128 v11,v58,v58
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_load_si128((__m128i*)ctx.v58.u8));
	// lvx128 v7,r0,r9
	simd::store_shuffled(ctx.v7, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// vor128 v13,v57,v57
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_load_si128((__m128i*)ctx.v57.u8));
	// addi r4,r1,704
	ctx.r4.s64 = ctx.r1.s64 + 704;
	// vor128 v10,v58,v58
	_mm_store_si128((__m128i*)ctx.v10.u8, _mm_load_si128((__m128i*)ctx.v58.u8));
	// addi r31,r1,28
	ctx.r31.s64 = ctx.r1.s64 + 28;
	// vor128 v8,v62,v62
	_mm_store_si128((__m128i*)ctx.v8.u8, _mm_load_si128((__m128i*)ctx.v62.u8));
	// vsel v4,v11,v12,v4
	_mm_store_si128((__m128i*)ctx.v4.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v4.u8), _mm_load_si128((__m128i*)ctx.v11.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v4.u8), _mm_load_si128((__m128i*)ctx.v12.u8))));
	// vor128 v11,v54,v54
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_load_si128((__m128i*)ctx.v54.u8));
	// vsel v3,v10,v13,v3
	_mm_store_si128((__m128i*)ctx.v3.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v3.u8), _mm_load_si128((__m128i*)ctx.v10.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v3.u8), _mm_load_si128((__m128i*)ctx.v13.u8))));
	// lvx128 v13,r9,r24
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r9.u32 + ctx.r24.u32) & ~0xF), VectorMaskL));
	// vor v12,v2,v2
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_load_si128((__m128i*)ctx.v2.u8));
	// vnmsubfp v30,v31,v9,v4
	_mm_store_ps(ctx.v30.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(ctx.v31.f32), _mm_load_ps(ctx.v9.f32)), _mm_load_ps(ctx.v4.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// vor128 v31,v63,v63
	_mm_store_si128((__m128i*)ctx.v31.u8, _mm_load_si128((__m128i*)ctx.v63.u8));
	// vor128 v2,v63,v63
	_mm_store_si128((__m128i*)ctx.v2.u8, _mm_load_si128((__m128i*)ctx.v63.u8));
	// vnmsubfp v29,v6,v7,v3
	_mm_store_ps(ctx.v29.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(ctx.v6.f32), _mm_load_ps(ctx.v7.f32)), _mm_load_ps(ctx.v3.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// vsel v7,v10,v11,v5
	_mm_store_si128((__m128i*)ctx.v7.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v5.u8), _mm_load_si128((__m128i*)ctx.v10.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v5.u8), _mm_load_si128((__m128i*)ctx.v11.u8))));
	// vor128 v3,v62,v62
	_mm_store_si128((__m128i*)ctx.v3.u8, _mm_load_si128((__m128i*)ctx.v62.u8));
	// vor128 v6,v58,v58
	_mm_store_si128((__m128i*)ctx.v6.u8, _mm_load_si128((__m128i*)ctx.v58.u8));
	// vor128 v9,v62,v62
	_mm_store_si128((__m128i*)ctx.v9.u8, _mm_load_si128((__m128i*)ctx.v62.u8));
	// vnmsubfp v10,v12,v13,v7
	_mm_store_ps(ctx.v10.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v13.f32)), _mm_load_ps(ctx.v7.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// vor128 v7,v63,v63
	_mm_store_si128((__m128i*)ctx.v7.u8, _mm_load_si128((__m128i*)ctx.v63.u8));
	// vor128 v4,v58,v58
	_mm_store_si128((__m128i*)ctx.v4.u8, _mm_load_si128((__m128i*)ctx.v58.u8));
	// vor128 v11,v58,v58
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_load_si128((__m128i*)ctx.v58.u8));
	// vor128 v50,v30,v30
	_mm_store_si128((__m128i*)ctx.v50.u8, _mm_load_si128((__m128i*)ctx.v30.u8));
	// vcmpgefp128 v28,v29,v63
	_mm_store_ps(ctx.v28.f32, _mm_cmpge_ps(_mm_load_ps(ctx.v29.f32), _mm_load_ps(ctx.v63.f32)));
	// vor v5,v29,v29
	_mm_store_si128((__m128i*)ctx.v5.u8, _mm_load_si128((__m128i*)ctx.v29.u8));
	// vcmpgefp128 v30,v50,v63
	_mm_store_ps(ctx.v30.f32, _mm_cmpge_ps(_mm_load_ps(ctx.v50.f32), _mm_load_ps(ctx.v63.f32)));
	// vor128 v12,v50,v50
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_load_si128((__m128i*)ctx.v50.u8));
	// vcmpgefp128 v29,v10,v63
	_mm_store_ps(ctx.v29.f32, _mm_cmpge_ps(_mm_load_ps(ctx.v10.f32), _mm_load_ps(ctx.v63.f32)));
	// vor v13,v10,v10
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_load_si128((__m128i*)ctx.v10.u8));
	// vsel v10,v31,v8,v28
	_mm_store_si128((__m128i*)ctx.v10.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v28.u8), _mm_load_si128((__m128i*)ctx.v31.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v28.u8), _mm_load_si128((__m128i*)ctx.v8.u8))));
	// vsel v4,v4,v5,v28
	_mm_store_si128((__m128i*)ctx.v4.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v28.u8), _mm_load_si128((__m128i*)ctx.v4.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v28.u8), _mm_load_si128((__m128i*)ctx.v5.u8))));
	// vsel v8,v2,v3,v30
	_mm_store_si128((__m128i*)ctx.v8.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v30.u8), _mm_load_si128((__m128i*)ctx.v2.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v30.u8), _mm_load_si128((__m128i*)ctx.v3.u8))));
	// vsel v6,v6,v12,v30
	_mm_store_si128((__m128i*)ctx.v6.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v30.u8), _mm_load_si128((__m128i*)ctx.v6.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v30.u8), _mm_load_si128((__m128i*)ctx.v12.u8))));
	// vmsum4fp128 v49,v10,v62
	_mm_store_ps(ctx.v49.f32, _mm_dp_ps(_mm_load_ps(ctx.v10.f32), _mm_load_ps(ctx.v62.f32), 0xFF));
	// vsel v12,v7,v9,v29
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v29.u8), _mm_load_si128((__m128i*)ctx.v7.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v29.u8), _mm_load_si128((__m128i*)ctx.v9.u8))));
	// stvx128 v4,r0,r4
	_mm_store_si128((__m128i*)(base + ((ctx.r4.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v4.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// vsel v5,v11,v13,v29
	_mm_store_si128((__m128i*)ctx.v5.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v29.u8), _mm_load_si128((__m128i*)ctx.v11.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v29.u8), _mm_load_si128((__m128i*)ctx.v13.u8))));
	// vmsum4fp128 v48,v8,v62
	_mm_store_ps(ctx.v48.f32, _mm_dp_ps(_mm_load_ps(ctx.v8.f32), _mm_load_ps(ctx.v62.f32), 0xFF));
	// vmsum4fp128 v32,v12,v62
	_mm_store_ps(ctx.v32.f32, _mm_dp_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v62.f32), 0xFF));
	// vaddfp128 v57,v49,v48
	_mm_store_ps(ctx.v57.f32, _mm_add_ps(_mm_load_ps(ctx.v49.f32), _mm_load_ps(ctx.v48.f32)));
	// vaddfp128 v54,v57,v32
	_mm_store_ps(ctx.v54.f32, _mm_add_ps(_mm_load_ps(ctx.v57.f32), _mm_load_ps(ctx.v32.f32)));
	// vcfpsxws128 v53,v54,0
	_mm_store_si128((__m128i*)ctx.v53.s32, _mm_vctsxs(_mm_load_ps(ctx.v54.f32)));
	// stvewx128 v53,r0,r31
	ea = (ctx.r31.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v53.u32[3 - ((ea & 0xF) >> 2)]);
	// lwz r9,28(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 28);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82a2d944
	if (ctx.cr6.eq) goto loc_82A2D944;
	// lwz r9,0(r21)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// addi r30,r30,2
	ctx.r30.s64 = ctx.r30.s64 + 2;
	// addi r8,r8,32
	ctx.r8.s64 = ctx.r8.s64 + 32;
	// addi r10,r10,64
	ctx.r10.s64 = ctx.r10.s64 + 64;
	// addi r5,r5,768
	ctx.r5.s64 = ctx.r5.s64 + 768;
	// cmpw cr6,r30,r9
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x82a2cc40
	if (ctx.cr6.lt) goto loc_82A2CC40;
	// addi r10,r1,208
	ctx.r10.s64 = ctx.r1.s64 + 208;
	// addi r9,r1,48
	ctx.r9.s64 = ctx.r1.s64 + 48;
	// addi r8,r1,192
	ctx.r8.s64 = ctx.r1.s64 + 192;
	// lvx128 v3,r0,r10
	simd::store_shuffled(ctx.v3, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// lvx128 v2,r0,r9
	simd::store_shuffled(ctx.v2, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// lvx128 v7,r0,r8
	simd::store_shuffled(ctx.v7, simd::load_and_shuffle(base + ((ctx.r8.u32) & ~0xF), VectorMaskL));
loc_82A2D030:
	// addi r9,r1,720
	ctx.r9.s64 = ctx.r1.s64 + 720;
	// lwz r8,68(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	// addi r5,r1,736
	ctx.r5.s64 = ctx.r1.s64 + 736;
	// lfs f0,704(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 704);
	ctx.f0.f64 = double(temp.f32);
	// addi r4,r1,752
	ctx.r4.s64 = ctx.r1.s64 + 752;
	// li r29,0
	ctx.r29.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// stvx128 v4,r0,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v4.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// cmpwi cr6,r8,1
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 1, ctx.xer);
	// stvx128 v6,r0,r5
	_mm_store_si128((__m128i*)(base + ((ctx.r5.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v6.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v5,r0,r4
	_mm_store_si128((__m128i*)(base + ((ctx.r4.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v5.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// ble cr6,0x82a2d08c
	if (!ctx.cr6.gt) goto loc_82A2D08C;
	// rotlwi r8,r8,0
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// addi r9,r1,724
	ctx.r9.s64 = ctx.r1.s64 + 724;
loc_82A2D068:
	// lfs f12,0(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f12,f0
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// ble cr6,0x82a2d07c
	if (!ctx.cr6.gt) goto loc_82A2D07C;
	// fmr f0,f12
	ctx.f0.f64 = ctx.f12.f64;
	// mr r29,r10
	ctx.r29.u64 = ctx.r10.u64;
loc_82A2D07C:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmpw cr6,r10,r8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x82a2d068
	if (ctx.cr6.lt) goto loc_82A2D068;
loc_82A2D08C:
	// addi r10,r29,19
	ctx.r10.s64 = ctx.r29.s64 + 19;
	// lwz r9,32(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 32);
	// addi r8,r29,37
	ctx.r8.s64 = ctx.r29.s64 + 37;
	// rlwinm r5,r10,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r29,55
	ctx.r10.s64 = ctx.r29.s64 + 55;
	// rlwinm r4,r8,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r29,73
	ctx.r8.s64 = ctx.r29.s64 + 73;
	// lwzx r30,r5,r3
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r3.u32);
	// rlwinm r5,r8,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// mullw r31,r30,r9
	ctx.r31.s64 = int64_t(ctx.r30.s32) * int64_t(ctx.r9.s32);
	// lwzx r8,r4,r3
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r3.u32);
	// lwzx r9,r10,r3
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// lwzx r5,r5,r3
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r3.u32);
	// rlwinm r10,r31,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 4) & 0xFFFFFFF0;
	// li r4,128
	ctx.r4.s64 = 128;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// dcbt r4,r10
	// lvx128 v51,r0,r9
	simd::store_shuffled(ctx.v51, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// addi r8,r1,16
	ctx.r8.s64 = ctx.r1.s64 + 16;
	// lvx128 v50,r9,r7
	simd::store_shuffled(ctx.v50, simd::load_and_shuffle(base + ((ctx.r9.u32 + ctx.r7.u32) & ~0xF), VectorMaskL));
	// vcmpgtfp128 v49,v51,v56
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v49.f32, _mm_cmpgt_ps(_mm_load_ps(ctx.v51.f32), _mm_load_ps(ctx.v56.f32)));
	// vcmpgtfp128 v48,v50,v56
	_mm_store_ps(ctx.v48.f32, _mm_cmpgt_ps(_mm_load_ps(ctx.v50.f32), _mm_load_ps(ctx.v56.f32)));
	// addi r4,r1,480
	ctx.r4.s64 = ctx.r1.s64 + 480;
	// addi r31,r1,592
	ctx.r31.s64 = ctx.r1.s64 + 592;
	// vor128 v54,v52,v52
	_mm_store_si128((__m128i*)ctx.v54.u8, _mm_load_si128((__m128i*)ctx.v52.u8));
	// vcsxwfp128 v32,v49,0
	_mm_store_ps(ctx.v32.f32, _mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v49.u32)));
	// vcsxwfp128 v57,v48,0
	_mm_store_ps(ctx.v57.f32, _mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v48.u32)));
	// vmsum4fp128 v53,v32,v62
	_mm_store_ps(ctx.v53.f32, _mm_dp_ps(_mm_load_ps(ctx.v32.f32), _mm_load_ps(ctx.v62.f32), 0xFF));
	// vmsum3fp128 v51,v57,v62
	_mm_store_ps(ctx.v51.f32, _mm_dp_ps(_mm_load_ps(ctx.v57.f32), _mm_load_ps(ctx.v62.f32), 0xEF));
	// vaddfp128 v50,v53,v51
	_mm_store_ps(ctx.v50.f32, _mm_add_ps(_mm_load_ps(ctx.v53.f32), _mm_load_ps(ctx.v51.f32)));
	// vcfpsxws128 v49,v50,0
	_mm_store_si128((__m128i*)ctx.v49.s32, _mm_vctsxs(_mm_load_ps(ctx.v50.f32)));
	// stvewx128 v49,r0,r8
	ea = (ctx.r8.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v49.u32[3 - ((ea & 0xF) >> 2)]);
	// lvx128 v53,r9,r24
	simd::store_shuffled(ctx.v53, simd::load_and_shuffle(base + ((ctx.r9.u32 + ctx.r24.u32) & ~0xF), VectorMaskL));
	// lvx128 v57,r10,r7
	simd::store_shuffled(ctx.v57, simd::load_and_shuffle(base + ((ctx.r10.u32 + ctx.r7.u32) & ~0xF), VectorMaskL));
	// lwz r8,24(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// lvx128 v51,r9,r23
	simd::store_shuffled(ctx.v51, simd::load_and_shuffle(base + ((ctx.r9.u32 + ctx.r23.u32) & ~0xF), VectorMaskL));
	// vperm128 v48,v57,v63,v1
	_mm_store_si128((__m128i*)ctx.v48.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v57.u8), _mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)ctx.v1.u8)));
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// vperm128 v32,v57,v63,v3
	_mm_store_si128((__m128i*)ctx.v32.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v57.u8), _mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)ctx.v3.u8)));
	// vperm128 v50,v57,v63,v2
	_mm_store_si128((__m128i*)ctx.v50.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v57.u8), _mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)ctx.v2.u8)));
	// vperm128 v49,v57,v63,v7
	_mm_store_si128((__m128i*)ctx.v49.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v57.u8), _mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)ctx.v7.u8)));
	// vcsxwfp128 v13,v48,0
	_mm_store_ps(ctx.v13.f32, _mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v48.u32)));
	// vcsxwfp128 v11,v32,0
	_mm_store_ps(ctx.v11.f32, _mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v32.u32)));
	// vcsxwfp128 v12,v50,0
	_mm_store_ps(ctx.v12.f32, _mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v50.u32)));
	// vcsxwfp128 v10,v49,0
	_mm_store_ps(ctx.v10.f32, _mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v49.u32)));
	// vxor128 v48,v13,v61
	_mm_store_si128((__m128i*)ctx.v48.u8, _mm_xor_si128(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)ctx.v61.u8)));
	// vmaddfp v9,v0,v11,v13
	_mm_store_ps(ctx.v9.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v11.f32)), _mm_load_ps(ctx.v13.f32)));
	// vxor128 v32,v12,v61
	_mm_store_si128((__m128i*)ctx.v32.u8, _mm_xor_si128(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)ctx.v61.u8)));
	// vmaddfp v13,v0,v10,v12
	_mm_store_ps(ctx.v13.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v10.f32)), _mm_load_ps(ctx.v12.f32)));
	// vmsum4fp128 v50,v48,v11
	_mm_store_ps(ctx.v50.f32, _mm_dp_ps(_mm_load_ps(ctx.v48.f32), _mm_load_ps(ctx.v11.f32), 0xFF));
	// vmsum4fp128 v49,v32,v10
	_mm_store_ps(ctx.v49.f32, _mm_dp_ps(_mm_load_ps(ctx.v32.f32), _mm_load_ps(ctx.v10.f32), 0xFF));
	// vaddfp128 v48,v9,v60
	_mm_store_ps(ctx.v48.f32, _mm_add_ps(_mm_load_ps(ctx.v9.f32), _mm_load_ps(ctx.v60.f32)));
	// vaddfp128 v32,v13,v60
	_mm_store_ps(ctx.v32.f32, _mm_add_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v60.f32)));
	// vrefp128 v50,v50
	_mm_store_ps(ctx.v50.f32, _mm_div_ps(_mm_set1_ps(1), _mm_load_ps(ctx.v50.f32)));
	// vrefp128 v49,v49
	_mm_store_ps(ctx.v49.f32, _mm_div_ps(_mm_set1_ps(1), _mm_load_ps(ctx.v49.f32)));
	// vcfpsxws128 v48,v48,0
	_mm_store_si128((__m128i*)ctx.v48.s32, _mm_vctsxs(_mm_load_ps(ctx.v48.f32)));
	// vcfpsxws128 v32,v32,0
	_mm_store_si128((__m128i*)ctx.v32.s32, _mm_vctsxs(_mm_load_ps(ctx.v32.f32)));
	// vxor128 v50,v50,v55
	_mm_store_si128((__m128i*)ctx.v50.u8, _mm_xor_si128(_mm_load_si128((__m128i*)ctx.v50.u8), _mm_load_si128((__m128i*)ctx.v55.u8)));
	// vxor128 v49,v49,v61
	_mm_store_si128((__m128i*)ctx.v49.u8, _mm_xor_si128(_mm_load_si128((__m128i*)ctx.v49.u8), _mm_load_si128((__m128i*)ctx.v61.u8)));
	// vslw128 v48,v48,v59
	ctx.v48.u32[0] = ctx.v48.u32[0] << (ctx.v59.u8[0] & 0x1F);
	ctx.v48.u32[1] = ctx.v48.u32[1] << (ctx.v59.u8[4] & 0x1F);
	ctx.v48.u32[2] = ctx.v48.u32[2] << (ctx.v59.u8[8] & 0x1F);
	ctx.v48.u32[3] = ctx.v48.u32[3] << (ctx.v59.u8[12] & 0x1F);
	// vslw128 v32,v32,v59
	ctx.v32.u32[0] = ctx.v32.u32[0] << (ctx.v59.u8[0] & 0x1F);
	ctx.v32.u32[1] = ctx.v32.u32[1] << (ctx.v59.u8[4] & 0x1F);
	ctx.v32.u32[2] = ctx.v32.u32[2] << (ctx.v59.u8[8] & 0x1F);
	ctx.v32.u32[3] = ctx.v32.u32[3] << (ctx.v59.u8[12] & 0x1F);
	// stvx128 v48,r0,r4
	_mm_store_si128((__m128i*)(base + ((ctx.r4.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v48.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v32,r0,r31
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v32.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// beq cr6,0x82a2d284
	if (ctx.cr6.eq) goto loc_82A2D284;
	// addi r8,r1,464
	ctx.r8.s64 = ctx.r1.s64 + 464;
	// addi r4,r1,496
	ctx.r4.s64 = ctx.r1.s64 + 496;
	// addi r31,r1,528
	ctx.r31.s64 = ctx.r1.s64 + 528;
	// addi r20,r1,560
	ctx.r20.s64 = ctx.r1.s64 + 560;
	// addi r19,r1,448
	ctx.r19.s64 = ctx.r1.s64 + 448;
	// lvx128 v6,r0,r8
	simd::store_shuffled(ctx.v6, simd::load_and_shuffle(base + ((ctx.r8.u32) & ~0xF), VectorMaskL));
	// addi r8,r1,624
	ctx.r8.s64 = ctx.r1.s64 + 624;
	// lvx128 v5,r0,r4
	simd::store_shuffled(ctx.v5, simd::load_and_shuffle(base + ((ctx.r4.u32) & ~0xF), VectorMaskL));
	// vperm128 v54,v57,v63,v6
	_mm_store_si128((__m128i*)ctx.v54.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v57.u8), _mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)ctx.v6.u8)));
	// lvx128 v4,r0,r31
	simd::store_shuffled(ctx.v4, simd::load_and_shuffle(base + ((ctx.r31.u32) & ~0xF), VectorMaskL));
	// vperm128 v48,v57,v63,v5
	_mm_store_si128((__m128i*)ctx.v48.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v57.u8), _mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)ctx.v5.u8)));
	// lvx128 v6,r0,r20
	simd::store_shuffled(ctx.v6, simd::load_and_shuffle(base + ((ctx.r20.u32) & ~0xF), VectorMaskL));
	// vperm128 v32,v57,v63,v4
	_mm_store_si128((__m128i*)ctx.v32.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v57.u8), _mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)ctx.v4.u8)));
	// vperm128 v57,v57,v63,v6
	_mm_store_si128((__m128i*)ctx.v57.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v57.u8), _mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)ctx.v6.u8)));
	// vcsxwfp128 v13,v54,0
	_mm_store_ps(ctx.v13.f32, _mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v54.u32)));
	// vcsxwfp128 v12,v48,0
	_mm_store_ps(ctx.v12.f32, _mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v48.u32)));
	// vcsxwfp128 v11,v32,0
	_mm_store_ps(ctx.v11.f32, _mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v32.u32)));
	// vcsxwfp128 v10,v57,0
	_mm_store_ps(ctx.v10.f32, _mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v57.u32)));
	// vxor128 v54,v13,v61
	_mm_store_si128((__m128i*)ctx.v54.u8, _mm_xor_si128(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)ctx.v61.u8)));
	// vmaddfp v9,v0,v12,v13
	_mm_store_ps(ctx.v9.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v12.f32)), _mm_load_ps(ctx.v13.f32)));
	// vxor128 v48,v11,v61
	_mm_store_si128((__m128i*)ctx.v48.u8, _mm_xor_si128(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)ctx.v61.u8)));
	// vmaddfp v13,v0,v10,v11
	_mm_store_ps(ctx.v13.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v10.f32)), _mm_load_ps(ctx.v11.f32)));
	// vmsum4fp128 v32,v54,v12
	_mm_store_ps(ctx.v32.f32, _mm_dp_ps(_mm_load_ps(ctx.v54.f32), _mm_load_ps(ctx.v12.f32), 0xFF));
	// vmsum4fp128 v57,v48,v10
	_mm_store_ps(ctx.v57.f32, _mm_dp_ps(_mm_load_ps(ctx.v48.f32), _mm_load_ps(ctx.v10.f32), 0xFF));
	// vaddfp128 v54,v9,v60
	_mm_store_ps(ctx.v54.f32, _mm_add_ps(_mm_load_ps(ctx.v9.f32), _mm_load_ps(ctx.v60.f32)));
	// vaddfp128 v48,v13,v60
	_mm_store_ps(ctx.v48.f32, _mm_add_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v60.f32)));
	// vrefp128 v32,v32
	_mm_store_ps(ctx.v32.f32, _mm_div_ps(_mm_set1_ps(1), _mm_load_ps(ctx.v32.f32)));
	// vrefp128 v57,v57
	_mm_store_ps(ctx.v57.f32, _mm_div_ps(_mm_set1_ps(1), _mm_load_ps(ctx.v57.f32)));
	// vcfpsxws128 v54,v54,0
	_mm_store_si128((__m128i*)ctx.v54.s32, _mm_vctsxs(_mm_load_ps(ctx.v54.f32)));
	// vcfpsxws128 v48,v48,0
	_mm_store_si128((__m128i*)ctx.v48.s32, _mm_vctsxs(_mm_load_ps(ctx.v48.f32)));
	// vxor128 v32,v32,v55
	_mm_store_si128((__m128i*)ctx.v32.u8, _mm_xor_si128(_mm_load_si128((__m128i*)ctx.v32.u8), _mm_load_si128((__m128i*)ctx.v55.u8)));
	// vxor128 v57,v57,v61
	_mm_store_si128((__m128i*)ctx.v57.u8, _mm_xor_si128(_mm_load_si128((__m128i*)ctx.v57.u8), _mm_load_si128((__m128i*)ctx.v61.u8)));
	// vslw128 v54,v54,v59
	ctx.v54.u32[0] = ctx.v54.u32[0] << (ctx.v59.u8[0] & 0x1F);
	ctx.v54.u32[1] = ctx.v54.u32[1] << (ctx.v59.u8[4] & 0x1F);
	ctx.v54.u32[2] = ctx.v54.u32[2] << (ctx.v59.u8[8] & 0x1F);
	ctx.v54.u32[3] = ctx.v54.u32[3] << (ctx.v59.u8[12] & 0x1F);
	// vslw128 v48,v48,v59
	ctx.v48.u32[0] = ctx.v48.u32[0] << (ctx.v59.u8[0] & 0x1F);
	ctx.v48.u32[1] = ctx.v48.u32[1] << (ctx.v59.u8[4] & 0x1F);
	ctx.v48.u32[2] = ctx.v48.u32[2] << (ctx.v59.u8[8] & 0x1F);
	ctx.v48.u32[3] = ctx.v48.u32[3] << (ctx.v59.u8[12] & 0x1F);
	// stvx128 v54,r0,r19
	_mm_store_si128((__m128i*)(base + ((ctx.r19.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v54.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lwz r4,452(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 452);
	// lwz r19,456(r1)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r1.u32 + 456);
	// stvx128 v48,r0,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v48.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lwz r20,624(r1)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r1.u32 + 624);
	// lwz r8,448(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 448);
	// lwz r31,628(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 628);
	// lvlx128 v48,r8,r11
	temp.u32 = ctx.r8.u32 + ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v48.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lwz r8,460(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 460);
	// lvlx v5,r31,r11
	temp.u32 = ctx.r31.u32 + ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v5.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lwz r31,636(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 636);
	// lvlx128 v54,r4,r11
	temp.u32 = ctx.r4.u32 + ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v54.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lwz r4,632(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 632);
	// vrlimi128 v48,v54,4,3
	_mm_store_ps(ctx.v48.f32, _mm_blend_ps(_mm_load_ps(ctx.v48.f32), _mm_permute_ps(_mm_load_ps(ctx.v54.f32), 57), 4));
	// lvlx v4,r19,r11
	temp.u32 = ctx.r19.u32 + ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v4.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v54,r20,r11
	temp.u32 = ctx.r20.u32 + ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v54.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vrlimi128 v54,v5,4,3
	_mm_store_ps(ctx.v54.f32, _mm_blend_ps(_mm_load_ps(ctx.v54.f32), _mm_permute_ps(_mm_load_ps(ctx.v5.f32), 57), 4));
	// vrlimi128 v48,v4,2,2
	_mm_store_ps(ctx.v48.f32, _mm_blend_ps(_mm_load_ps(ctx.v48.f32), _mm_permute_ps(_mm_load_ps(ctx.v4.f32), 78), 2));
	// lvlx v30,r8,r11
	temp.u32 = ctx.r8.u32 + ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v30.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vrlimi128 v48,v30,1,1
	_mm_store_ps(ctx.v48.f32, _mm_blend_ps(_mm_load_ps(ctx.v48.f32), _mm_permute_ps(_mm_load_ps(ctx.v30.f32), 147), 1));
	// lvlx v29,r31,r11
	temp.u32 = ctx.r31.u32 + ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v29.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vmsum4fp128 v48,v48,v32
	_mm_store_ps(ctx.v48.f32, _mm_dp_ps(_mm_load_ps(ctx.v48.f32), _mm_load_ps(ctx.v32.f32), 0xFF));
	// lvlx v31,r4,r11
	temp.u32 = ctx.r4.u32 + ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v31.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vrlimi128 v54,v31,2,2
	_mm_store_ps(ctx.v54.f32, _mm_blend_ps(_mm_load_ps(ctx.v54.f32), _mm_permute_ps(_mm_load_ps(ctx.v31.f32), 78), 2));
	// vrlimi128 v54,v29,1,1
	_mm_store_ps(ctx.v54.f32, _mm_blend_ps(_mm_load_ps(ctx.v54.f32), _mm_permute_ps(_mm_load_ps(ctx.v29.f32), 147), 1));
	// vmsum4fp128 v32,v54,v57
	_mm_store_ps(ctx.v32.f32, _mm_dp_ps(_mm_load_ps(ctx.v54.f32), _mm_load_ps(ctx.v57.f32), 0xFF));
	// vaddfp128 v54,v48,v32
	_mm_store_ps(ctx.v54.f32, _mm_add_ps(_mm_load_ps(ctx.v48.f32), _mm_load_ps(ctx.v32.f32)));
loc_82A2D284:
	// lwz r8,484(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 484);
	// addi r4,r1,20
	ctx.r4.s64 = ctx.r1.s64 + 20;
	// lwz r31,480(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 480);
	// lwz r20,488(r1)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r1.u32 + 488);
	// lwz r19,596(r1)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r1.u32 + 596);
	// lwz r18,592(r1)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r1.u32 + 592);
	// lvlx128 v57,r8,r11
	temp.u32 = ctx.r8.u32 + ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v57.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lwz r8,492(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 492);
	// lvlx128 v48,r31,r11
	temp.u32 = ctx.r31.u32 + ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v48.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lwz r31,600(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 600);
	// vrlimi128 v48,v57,4,3
	_mm_store_ps(ctx.v48.f32, _mm_blend_ps(_mm_load_ps(ctx.v48.f32), _mm_permute_ps(_mm_load_ps(ctx.v57.f32), 57), 4));
	// lvlx128 v32,r20,r11
	temp.u32 = ctx.r20.u32 + ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v32.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v57,r19,r11
	temp.u32 = ctx.r19.u32 + ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v57.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lwz r20,604(r1)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r1.u32 + 604);
	// lvlx v13,r18,r11
	temp.u32 = ctx.r18.u32 + ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vrlimi128 v13,v57,4,3
	_mm_store_ps(ctx.v13.f32, _mm_blend_ps(_mm_load_ps(ctx.v13.f32), _mm_permute_ps(_mm_load_ps(ctx.v57.f32), 57), 4));
	// lvlx128 v57,r8,r11
	temp.u32 = ctx.r8.u32 + ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v57.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vrlimi128 v48,v32,2,2
	_mm_store_ps(ctx.v48.f32, _mm_blend_ps(_mm_load_ps(ctx.v48.f32), _mm_permute_ps(_mm_load_ps(ctx.v32.f32), 78), 2));
	// lvlx v12,r31,r11
	temp.u32 = ctx.r31.u32 + ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx v11,r20,r11
	temp.u32 = ctx.r20.u32 + ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vrlimi128 v13,v12,2,2
	_mm_store_ps(ctx.v13.f32, _mm_blend_ps(_mm_load_ps(ctx.v13.f32), _mm_permute_ps(_mm_load_ps(ctx.v12.f32), 78), 2));
	// vrlimi128 v48,v57,1,1
	_mm_store_ps(ctx.v48.f32, _mm_blend_ps(_mm_load_ps(ctx.v48.f32), _mm_permute_ps(_mm_load_ps(ctx.v57.f32), 147), 1));
	// vrlimi128 v13,v11,1,1
	_mm_store_ps(ctx.v13.f32, _mm_blend_ps(_mm_load_ps(ctx.v13.f32), _mm_permute_ps(_mm_load_ps(ctx.v11.f32), 147), 1));
	// vmsum4fp128 v50,v48,v50
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v50.f32, _mm_dp_ps(_mm_load_ps(ctx.v48.f32), _mm_load_ps(ctx.v50.f32), 0xFF));
	// vmsum4fp128 v49,v13,v49
	_mm_store_ps(ctx.v49.f32, _mm_dp_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v49.f32), 0xFF));
	// vaddfp128 v48,v54,v50
	_mm_store_ps(ctx.v48.f32, _mm_add_ps(_mm_load_ps(ctx.v54.f32), _mm_load_ps(ctx.v50.f32)));
	// vaddfp128 v32,v48,v49
	_mm_store_ps(ctx.v32.f32, _mm_add_ps(_mm_load_ps(ctx.v48.f32), _mm_load_ps(ctx.v49.f32)));
	// vmulfp128 v57,v32,v56
	_mm_store_ps(ctx.v57.f32, _mm_mul_ps(_mm_load_ps(ctx.v32.f32), _mm_load_ps(ctx.v56.f32)));
	// vcmpgtfp128 v54,v51,v57
	_mm_store_ps(ctx.v54.f32, _mm_cmpgt_ps(_mm_load_ps(ctx.v51.f32), _mm_load_ps(ctx.v57.f32)));
	// vcmpgtfp128 v53,v53,v57
	_mm_store_ps(ctx.v53.f32, _mm_cmpgt_ps(_mm_load_ps(ctx.v53.f32), _mm_load_ps(ctx.v57.f32)));
	// vcsxwfp128 v51,v54,0
	_mm_store_ps(ctx.v51.f32, _mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v54.u32)));
	// vcsxwfp128 v50,v53,0
	_mm_store_ps(ctx.v50.f32, _mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v53.u32)));
	// vmsum3fp128 v49,v51,v62
	_mm_store_ps(ctx.v49.f32, _mm_dp_ps(_mm_load_ps(ctx.v51.f32), _mm_load_ps(ctx.v62.f32), 0xEF));
	// vmsum4fp128 v48,v50,v62
	_mm_store_ps(ctx.v48.f32, _mm_dp_ps(_mm_load_ps(ctx.v50.f32), _mm_load_ps(ctx.v62.f32), 0xFF));
	// vaddfp128 v32,v48,v49
	_mm_store_ps(ctx.v32.f32, _mm_add_ps(_mm_load_ps(ctx.v48.f32), _mm_load_ps(ctx.v49.f32)));
	// vcfpsxws128 v57,v32,0
	_mm_store_si128((__m128i*)ctx.v57.s32, _mm_vctsxs(_mm_load_ps(ctx.v32.f32)));
	// stvewx128 v57,r0,r4
	ea = (ctx.r4.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v57.u32[3 - ((ea & 0xF) >> 2)]);
	// lwz r4,16(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 16);
	// rlwinm r8,r4,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f12,r8,r5
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r5.u32);
	ctx.f12.f64 = double(temp.f32);
	// fadds f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 + ctx.f0.f64));
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x82a2d964
	if (ctx.cr6.lt) goto loc_82A2D964;
	// lwz r8,20(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 20);
	// addi r4,r8,8
	ctx.r4.s64 = ctx.r8.s64 + 8;
	// rlwinm r8,r4,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f12,r8,r5
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r5.u32);
	ctx.f12.f64 = double(temp.f32);
	// fadds f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 + ctx.f0.f64));
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x82a2d964
	if (ctx.cr6.lt) goto loc_82A2D964;
	// addi r10,r10,32
	ctx.r10.s64 = ctx.r10.s64 + 32;
	// addi r9,r9,64
	ctx.r9.s64 = ctx.r9.s64 + 64;
	// addi r5,r5,64
	ctx.r5.s64 = ctx.r5.s64 + 64;
	// li r31,2
	ctx.r31.s64 = 2;
	// cmpwi cr6,r30,2
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 2, ctx.xer);
	// ble cr6,0x82a2d7ec
	if (!ctx.cr6.gt) goto loc_82A2D7EC;
	// mr r8,r7
	ctx.r8.u64 = ctx.r7.u64;
loc_82A2D368:
	// lvx128 v57,r0,r10
	simd::store_shuffled(ctx.v57, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// li r6,128
	ctx.r6.s64 = 128;
	// dcbt r6,r10
	// vperm128 v54,v57,v63,v1
	_mm_store_si128((__m128i*)ctx.v54.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v57.u8), _mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)ctx.v1.u8)));
	// vperm128 v53,v57,v63,v3
	_mm_store_si128((__m128i*)ctx.v53.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v57.u8), _mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)ctx.v3.u8)));
	// addi r4,r1,272
	ctx.r4.s64 = ctx.r1.s64 + 272;
	// vperm128 v49,v57,v63,v2
	_mm_store_si128((__m128i*)ctx.v49.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v57.u8), _mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)ctx.v2.u8)));
	// addi r6,r1,304
	ctx.r6.s64 = ctx.r1.s64 + 304;
	// vperm128 v48,v57,v63,v7
	_mm_store_si128((__m128i*)ctx.v48.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v57.u8), _mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)ctx.v7.u8)));
	// lwz r20,8(r10)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// vcsxwfp128 v13,v54,0
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v13.f32, _mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v54.u32)));
	// lvx128 v51,r0,r9
	simd::store_shuffled(ctx.v51, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// vcsxwfp128 v11,v53,0
	_mm_store_ps(ctx.v11.f32, _mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v53.u32)));
	// lvx128 v50,r9,r8
	simd::store_shuffled(ctx.v50, simd::load_and_shuffle(base + ((ctx.r9.u32 + ctx.r8.u32) & ~0xF), VectorMaskL));
	// vcsxwfp128 v12,v49,0
	_mm_store_ps(ctx.v12.f32, _mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v49.u32)));
	// vor128 v54,v52,v52
	_mm_store_si128((__m128i*)ctx.v54.u8, _mm_load_si128((__m128i*)ctx.v52.u8));
	// vcsxwfp128 v10,v48,0
	_mm_store_ps(ctx.v10.f32, _mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v48.u32)));
	// cmplwi cr6,r20,0
	ctx.cr6.compare<uint32_t>(ctx.r20.u32, 0, ctx.xer);
	// vxor128 v32,v13,v61
	_mm_store_si128((__m128i*)ctx.v32.u8, _mm_xor_si128(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)ctx.v61.u8)));
	// vmaddfp v9,v0,v11,v13
	_mm_store_ps(ctx.v9.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v11.f32)), _mm_load_ps(ctx.v13.f32)));
	// vxor128 v53,v12,v61
	_mm_store_si128((__m128i*)ctx.v53.u8, _mm_xor_si128(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)ctx.v61.u8)));
	// vmaddfp v13,v0,v10,v12
	_mm_store_ps(ctx.v13.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v10.f32)), _mm_load_ps(ctx.v12.f32)));
	// vmsum4fp128 v49,v32,v11
	_mm_store_ps(ctx.v49.f32, _mm_dp_ps(_mm_load_ps(ctx.v32.f32), _mm_load_ps(ctx.v11.f32), 0xFF));
	// vmsum4fp128 v48,v53,v10
	_mm_store_ps(ctx.v48.f32, _mm_dp_ps(_mm_load_ps(ctx.v53.f32), _mm_load_ps(ctx.v10.f32), 0xFF));
	// vaddfp128 v32,v9,v60
	_mm_store_ps(ctx.v32.f32, _mm_add_ps(_mm_load_ps(ctx.v9.f32), _mm_load_ps(ctx.v60.f32)));
	// vaddfp128 v53,v13,v60
	_mm_store_ps(ctx.v53.f32, _mm_add_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v60.f32)));
	// vrefp128 v49,v49
	_mm_store_ps(ctx.v49.f32, _mm_div_ps(_mm_set1_ps(1), _mm_load_ps(ctx.v49.f32)));
	// vrefp128 v48,v48
	_mm_store_ps(ctx.v48.f32, _mm_div_ps(_mm_set1_ps(1), _mm_load_ps(ctx.v48.f32)));
	// vcfpsxws128 v32,v32,0
	_mm_store_si128((__m128i*)ctx.v32.s32, _mm_vctsxs(_mm_load_ps(ctx.v32.f32)));
	// vcfpsxws128 v53,v53,0
	_mm_store_si128((__m128i*)ctx.v53.s32, _mm_vctsxs(_mm_load_ps(ctx.v53.f32)));
	// vxor128 v49,v49,v55
	_mm_store_si128((__m128i*)ctx.v49.u8, _mm_xor_si128(_mm_load_si128((__m128i*)ctx.v49.u8), _mm_load_si128((__m128i*)ctx.v55.u8)));
	// vxor128 v48,v48,v61
	_mm_store_si128((__m128i*)ctx.v48.u8, _mm_xor_si128(_mm_load_si128((__m128i*)ctx.v48.u8), _mm_load_si128((__m128i*)ctx.v61.u8)));
	// vslw128 v32,v32,v59
	ctx.v32.u32[0] = ctx.v32.u32[0] << (ctx.v59.u8[0] & 0x1F);
	ctx.v32.u32[1] = ctx.v32.u32[1] << (ctx.v59.u8[4] & 0x1F);
	ctx.v32.u32[2] = ctx.v32.u32[2] << (ctx.v59.u8[8] & 0x1F);
	ctx.v32.u32[3] = ctx.v32.u32[3] << (ctx.v59.u8[12] & 0x1F);
	// vslw128 v53,v53,v59
	ctx.v53.u32[0] = ctx.v53.u32[0] << (ctx.v59.u8[0] & 0x1F);
	ctx.v53.u32[1] = ctx.v53.u32[1] << (ctx.v59.u8[4] & 0x1F);
	ctx.v53.u32[2] = ctx.v53.u32[2] << (ctx.v59.u8[8] & 0x1F);
	ctx.v53.u32[3] = ctx.v53.u32[3] << (ctx.v59.u8[12] & 0x1F);
	// stvx128 v32,r0,r4
	_mm_store_si128((__m128i*)(base + ((ctx.r4.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v32.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v53,r0,r6
	_mm_store_si128((__m128i*)(base + ((ctx.r6.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v53.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// beq cr6,0x82a2d4f0
	if (ctx.cr6.eq) goto loc_82A2D4F0;
	// addi r8,r1,464
	ctx.r8.s64 = ctx.r1.s64 + 464;
	// addi r6,r1,496
	ctx.r6.s64 = ctx.r1.s64 + 496;
	// addi r4,r1,528
	ctx.r4.s64 = ctx.r1.s64 + 528;
	// addi r20,r1,560
	ctx.r20.s64 = ctx.r1.s64 + 560;
	// addi r19,r1,512
	ctx.r19.s64 = ctx.r1.s64 + 512;
	// lvx128 v6,r0,r8
	simd::store_shuffled(ctx.v6, simd::load_and_shuffle(base + ((ctx.r8.u32) & ~0xF), VectorMaskL));
	// addi r8,r1,240
	ctx.r8.s64 = ctx.r1.s64 + 240;
	// lvx128 v5,r0,r6
	simd::store_shuffled(ctx.v5, simd::load_and_shuffle(base + ((ctx.r6.u32) & ~0xF), VectorMaskL));
	// vperm128 v32,v57,v63,v6
	_mm_store_si128((__m128i*)ctx.v32.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v57.u8), _mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)ctx.v6.u8)));
	// lvx128 v4,r0,r4
	simd::store_shuffled(ctx.v4, simd::load_and_shuffle(base + ((ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v6,r0,r20
	simd::store_shuffled(ctx.v6, simd::load_and_shuffle(base + ((ctx.r20.u32) & ~0xF), VectorMaskL));
	// vperm128 v54,v57,v63,v5
	_mm_store_si128((__m128i*)ctx.v54.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v57.u8), _mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)ctx.v5.u8)));
	// vperm128 v53,v57,v63,v4
	_mm_store_si128((__m128i*)ctx.v53.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v57.u8), _mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)ctx.v4.u8)));
	// vperm128 v57,v57,v63,v6
	_mm_store_si128((__m128i*)ctx.v57.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v57.u8), _mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)ctx.v6.u8)));
	// vcsxwfp128 v13,v32,0
	_mm_store_ps(ctx.v13.f32, _mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v32.u32)));
	// vcsxwfp128 v12,v54,0
	_mm_store_ps(ctx.v12.f32, _mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v54.u32)));
	// vcsxwfp128 v11,v53,0
	_mm_store_ps(ctx.v11.f32, _mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v53.u32)));
	// vcsxwfp128 v10,v57,0
	_mm_store_ps(ctx.v10.f32, _mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v57.u32)));
	// vxor128 v54,v13,v61
	_mm_store_si128((__m128i*)ctx.v54.u8, _mm_xor_si128(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)ctx.v61.u8)));
	// vmaddfp v9,v0,v12,v13
	_mm_store_ps(ctx.v9.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v12.f32)), _mm_load_ps(ctx.v13.f32)));
	// vxor128 v53,v11,v61
	_mm_store_si128((__m128i*)ctx.v53.u8, _mm_xor_si128(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)ctx.v61.u8)));
	// vmaddfp v13,v0,v10,v11
	_mm_store_ps(ctx.v13.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v10.f32)), _mm_load_ps(ctx.v11.f32)));
	// vmsum4fp128 v32,v54,v12
	_mm_store_ps(ctx.v32.f32, _mm_dp_ps(_mm_load_ps(ctx.v54.f32), _mm_load_ps(ctx.v12.f32), 0xFF));
	// vmsum4fp128 v57,v53,v10
	_mm_store_ps(ctx.v57.f32, _mm_dp_ps(_mm_load_ps(ctx.v53.f32), _mm_load_ps(ctx.v10.f32), 0xFF));
	// vaddfp128 v54,v9,v60
	_mm_store_ps(ctx.v54.f32, _mm_add_ps(_mm_load_ps(ctx.v9.f32), _mm_load_ps(ctx.v60.f32)));
	// vaddfp128 v53,v13,v60
	_mm_store_ps(ctx.v53.f32, _mm_add_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v60.f32)));
	// vrefp128 v32,v32
	_mm_store_ps(ctx.v32.f32, _mm_div_ps(_mm_set1_ps(1), _mm_load_ps(ctx.v32.f32)));
	// vrefp128 v57,v57
	_mm_store_ps(ctx.v57.f32, _mm_div_ps(_mm_set1_ps(1), _mm_load_ps(ctx.v57.f32)));
	// vcfpsxws128 v54,v54,0
	_mm_store_si128((__m128i*)ctx.v54.s32, _mm_vctsxs(_mm_load_ps(ctx.v54.f32)));
	// vcfpsxws128 v53,v53,0
	_mm_store_si128((__m128i*)ctx.v53.s32, _mm_vctsxs(_mm_load_ps(ctx.v53.f32)));
	// vxor128 v32,v32,v55
	_mm_store_si128((__m128i*)ctx.v32.u8, _mm_xor_si128(_mm_load_si128((__m128i*)ctx.v32.u8), _mm_load_si128((__m128i*)ctx.v55.u8)));
	// vxor128 v57,v57,v61
	_mm_store_si128((__m128i*)ctx.v57.u8, _mm_xor_si128(_mm_load_si128((__m128i*)ctx.v57.u8), _mm_load_si128((__m128i*)ctx.v61.u8)));
	// vslw128 v54,v54,v59
	ctx.v54.u32[0] = ctx.v54.u32[0] << (ctx.v59.u8[0] & 0x1F);
	ctx.v54.u32[1] = ctx.v54.u32[1] << (ctx.v59.u8[4] & 0x1F);
	ctx.v54.u32[2] = ctx.v54.u32[2] << (ctx.v59.u8[8] & 0x1F);
	ctx.v54.u32[3] = ctx.v54.u32[3] << (ctx.v59.u8[12] & 0x1F);
	// vslw128 v53,v53,v59
	ctx.v53.u32[0] = ctx.v53.u32[0] << (ctx.v59.u8[0] & 0x1F);
	ctx.v53.u32[1] = ctx.v53.u32[1] << (ctx.v59.u8[4] & 0x1F);
	ctx.v53.u32[2] = ctx.v53.u32[2] << (ctx.v59.u8[8] & 0x1F);
	ctx.v53.u32[3] = ctx.v53.u32[3] << (ctx.v59.u8[12] & 0x1F);
	// stvx128 v54,r0,r19
	_mm_store_si128((__m128i*)(base + ((ctx.r19.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v54.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lwz r6,516(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 516);
	// lwz r4,524(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 524);
	// stvx128 v53,r0,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v53.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lwz r19,240(r1)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r1.u32 + 240);
	// lwz r8,512(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 512);
	// lwz r20,520(r1)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r1.u32 + 520);
	// lwz r18,244(r1)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	// lwz r17,248(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + 248);
	// lvlx128 v54,r8,r11
	temp.u32 = ctx.r8.u32 + ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v54.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lwz r8,252(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 252);
	// lvlx128 v53,r20,r11
	temp.u32 = ctx.r20.u32 + ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v53.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx v4,r18,r11
	temp.u32 = ctx.r18.u32 + ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v4.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx v31,r17,r11
	temp.u32 = ctx.r17.u32 + ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v31.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx v30,r8,r11
	temp.u32 = ctx.r8.u32 + ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v30.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx v29,r6,r11
	temp.u32 = ctx.r6.u32 + ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v29.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vrlimi128 v54,v29,4,3
	_mm_store_ps(ctx.v54.f32, _mm_blend_ps(_mm_load_ps(ctx.v54.f32), _mm_permute_ps(_mm_load_ps(ctx.v29.f32), 57), 4));
	// lvlx v28,r4,r11
	temp.u32 = ctx.r4.u32 + ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v28.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx v5,r19,r11
	temp.u32 = ctx.r19.u32 + ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v5.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vrlimi128 v5,v4,4,3
	_mm_store_ps(ctx.v5.f32, _mm_blend_ps(_mm_load_ps(ctx.v5.f32), _mm_permute_ps(_mm_load_ps(ctx.v4.f32), 57), 4));
	// vrlimi128 v54,v53,2,2
	_mm_store_ps(ctx.v54.f32, _mm_blend_ps(_mm_load_ps(ctx.v54.f32), _mm_permute_ps(_mm_load_ps(ctx.v53.f32), 78), 2));
	// vrlimi128 v5,v31,2,2
	_mm_store_ps(ctx.v5.f32, _mm_blend_ps(_mm_load_ps(ctx.v5.f32), _mm_permute_ps(_mm_load_ps(ctx.v31.f32), 78), 2));
	// vrlimi128 v54,v28,1,1
	_mm_store_ps(ctx.v54.f32, _mm_blend_ps(_mm_load_ps(ctx.v54.f32), _mm_permute_ps(_mm_load_ps(ctx.v28.f32), 147), 1));
	// vrlimi128 v5,v30,1,1
	_mm_store_ps(ctx.v5.f32, _mm_blend_ps(_mm_load_ps(ctx.v5.f32), _mm_permute_ps(_mm_load_ps(ctx.v30.f32), 147), 1));
	// vmsum4fp128 v54,v54,v32
	_mm_store_ps(ctx.v54.f32, _mm_dp_ps(_mm_load_ps(ctx.v54.f32), _mm_load_ps(ctx.v32.f32), 0xFF));
	// vmsum4fp128 v57,v5,v57
	_mm_store_ps(ctx.v57.f32, _mm_dp_ps(_mm_load_ps(ctx.v5.f32), _mm_load_ps(ctx.v57.f32), 0xFF));
	// vaddfp128 v54,v54,v57
	_mm_store_ps(ctx.v54.f32, _mm_add_ps(_mm_load_ps(ctx.v54.f32), _mm_load_ps(ctx.v57.f32)));
loc_82A2D4F0:
	// lwz r8,276(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 276);
	// addi r6,r1,16
	ctx.r6.s64 = ctx.r1.s64 + 16;
	// lwz r4,272(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 272);
	// addi r20,r1,400
	ctx.r20.s64 = ctx.r1.s64 + 400;
	// lwz r19,280(r1)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r1.u32 + 280);
	// addi r18,r1,432
	ctx.r18.s64 = ctx.r1.s64 + 432;
	// lwz r17,308(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + 308);
	// vor128 v53,v52,v52
	_mm_store_si128((__m128i*)ctx.v53.u8, _mm_load_si128((__m128i*)ctx.v52.u8));
	// lwz r16,304(r1)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r1.u32 + 304);
	// lvlx128 v32,r8,r11
	temp.u32 = ctx.r8.u32 + ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v32.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lwz r8,284(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 284);
	// lvlx128 v57,r4,r11
	temp.u32 = ctx.r4.u32 + ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v57.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lwz r4,312(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 312);
	// vrlimi128 v57,v32,4,3
	_mm_store_ps(ctx.v57.f32, _mm_blend_ps(_mm_load_ps(ctx.v57.f32), _mm_permute_ps(_mm_load_ps(ctx.v32.f32), 57), 4));
	// lvlx128 v32,r19,r11
	temp.u32 = ctx.r19.u32 + ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v32.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx v13,r17,r11
	temp.u32 = ctx.r17.u32 + ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lwz r19,316(r1)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r1.u32 + 316);
	// lvlx v12,r16,r11
	temp.u32 = ctx.r16.u32 + ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx v11,r8,r11
	temp.u32 = ctx.r8.u32 + ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vrlimi128 v12,v13,4,3
	_mm_store_ps(ctx.v12.f32, _mm_blend_ps(_mm_load_ps(ctx.v12.f32), _mm_permute_ps(_mm_load_ps(ctx.v13.f32), 57), 4));
	// vrlimi128 v57,v32,2,2
	_mm_store_ps(ctx.v57.f32, _mm_blend_ps(_mm_load_ps(ctx.v57.f32), _mm_permute_ps(_mm_load_ps(ctx.v32.f32), 78), 2));
	// lvlx v10,r4,r11
	temp.u32 = ctx.r4.u32 + ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v10.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx v9,r19,r11
	temp.u32 = ctx.r19.u32 + ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v9.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vrlimi128 v12,v10,2,2
	_mm_store_ps(ctx.v12.f32, _mm_blend_ps(_mm_load_ps(ctx.v12.f32), _mm_permute_ps(_mm_load_ps(ctx.v10.f32), 78), 2));
	// vrlimi128 v57,v11,1,1
	_mm_store_ps(ctx.v57.f32, _mm_blend_ps(_mm_load_ps(ctx.v57.f32), _mm_permute_ps(_mm_load_ps(ctx.v11.f32), 147), 1));
	// vrlimi128 v12,v9,1,1
	_mm_store_ps(ctx.v12.f32, _mm_blend_ps(_mm_load_ps(ctx.v12.f32), _mm_permute_ps(_mm_load_ps(ctx.v9.f32), 147), 1));
	// vmsum4fp128 v57,v57,v49
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v57.f32, _mm_dp_ps(_mm_load_ps(ctx.v57.f32), _mm_load_ps(ctx.v49.f32), 0xFF));
	// vmsum4fp128 v49,v12,v48
	_mm_store_ps(ctx.v49.f32, _mm_dp_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v48.f32), 0xFF));
	// vaddfp128 v48,v54,v57
	_mm_store_ps(ctx.v48.f32, _mm_add_ps(_mm_load_ps(ctx.v54.f32), _mm_load_ps(ctx.v57.f32)));
	// vaddfp128 v32,v48,v49
	_mm_store_ps(ctx.v32.f32, _mm_add_ps(_mm_load_ps(ctx.v48.f32), _mm_load_ps(ctx.v49.f32)));
	// vmulfp128 v57,v32,v56
	_mm_store_ps(ctx.v57.f32, _mm_mul_ps(_mm_load_ps(ctx.v32.f32), _mm_load_ps(ctx.v56.f32)));
	// vcmpgtfp128 v54,v50,v57
	_mm_store_ps(ctx.v54.f32, _mm_cmpgt_ps(_mm_load_ps(ctx.v50.f32), _mm_load_ps(ctx.v57.f32)));
	// vcmpgtfp128 v51,v51,v57
	_mm_store_ps(ctx.v51.f32, _mm_cmpgt_ps(_mm_load_ps(ctx.v51.f32), _mm_load_ps(ctx.v57.f32)));
	// vcsxwfp128 v50,v54,0
	_mm_store_ps(ctx.v50.f32, _mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v54.u32)));
	// vcsxwfp128 v49,v51,0
	_mm_store_ps(ctx.v49.f32, _mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v51.u32)));
	// vmsum3fp128 v48,v50,v62
	_mm_store_ps(ctx.v48.f32, _mm_dp_ps(_mm_load_ps(ctx.v50.f32), _mm_load_ps(ctx.v62.f32), 0xEF));
	// vmsum4fp128 v32,v49,v62
	_mm_store_ps(ctx.v32.f32, _mm_dp_ps(_mm_load_ps(ctx.v49.f32), _mm_load_ps(ctx.v62.f32), 0xFF));
	// vaddfp128 v57,v32,v48
	_mm_store_ps(ctx.v57.f32, _mm_add_ps(_mm_load_ps(ctx.v32.f32), _mm_load_ps(ctx.v48.f32)));
	// vcfpsxws128 v54,v57,0
	_mm_store_si128((__m128i*)ctx.v54.s32, _mm_vctsxs(_mm_load_ps(ctx.v57.f32)));
	// stvewx128 v54,r0,r6
	ea = (ctx.r6.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v54.u32[3 - ((ea & 0xF) >> 2)]);
	// lwz r8,24(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// lvx128 v57,r10,r7
	simd::store_shuffled(ctx.v57, simd::load_and_shuffle(base + ((ctx.r10.u32 + ctx.r7.u32) & ~0xF), VectorMaskL));
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// vperm128 v51,v57,v63,v1
	_mm_store_si128((__m128i*)ctx.v51.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v57.u8), _mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)ctx.v1.u8)));
	// lvx128 v54,r9,r24
	simd::store_shuffled(ctx.v54, simd::load_and_shuffle(base + ((ctx.r9.u32 + ctx.r24.u32) & ~0xF), VectorMaskL));
	// vperm128 v50,v57,v63,v3
	_mm_store_si128((__m128i*)ctx.v50.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v57.u8), _mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)ctx.v3.u8)));
	// vperm128 v49,v57,v63,v2
	_mm_store_si128((__m128i*)ctx.v49.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v57.u8), _mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)ctx.v2.u8)));
	// vperm128 v48,v57,v63,v7
	_mm_store_si128((__m128i*)ctx.v48.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v57.u8), _mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)ctx.v7.u8)));
	// vcsxwfp128 v13,v51,0
	_mm_store_ps(ctx.v13.f32, _mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v51.u32)));
	// lvx128 v51,r9,r23
	simd::store_shuffled(ctx.v51, simd::load_and_shuffle(base + ((ctx.r9.u32 + ctx.r23.u32) & ~0xF), VectorMaskL));
	// vcsxwfp128 v11,v50,0
	_mm_store_ps(ctx.v11.f32, _mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v50.u32)));
	// vcsxwfp128 v12,v49,0
	_mm_store_ps(ctx.v12.f32, _mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v49.u32)));
	// vcsxwfp128 v10,v48,0
	_mm_store_ps(ctx.v10.f32, _mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v48.u32)));
	// vxor128 v32,v13,v61
	_mm_store_si128((__m128i*)ctx.v32.u8, _mm_xor_si128(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)ctx.v61.u8)));
	// vmaddfp v9,v0,v11,v13
	_mm_store_ps(ctx.v9.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v11.f32)), _mm_load_ps(ctx.v13.f32)));
	// vxor128 v49,v12,v61
	_mm_store_si128((__m128i*)ctx.v49.u8, _mm_xor_si128(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)ctx.v61.u8)));
	// vmaddfp v13,v0,v10,v12
	_mm_store_ps(ctx.v13.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v10.f32)), _mm_load_ps(ctx.v12.f32)));
	// vmsum4fp128 v50,v32,v11
	_mm_store_ps(ctx.v50.f32, _mm_dp_ps(_mm_load_ps(ctx.v32.f32), _mm_load_ps(ctx.v11.f32), 0xFF));
	// vmsum4fp128 v48,v49,v10
	_mm_store_ps(ctx.v48.f32, _mm_dp_ps(_mm_load_ps(ctx.v49.f32), _mm_load_ps(ctx.v10.f32), 0xFF));
	// vaddfp128 v32,v9,v60
	_mm_store_ps(ctx.v32.f32, _mm_add_ps(_mm_load_ps(ctx.v9.f32), _mm_load_ps(ctx.v60.f32)));
	// vaddfp128 v49,v13,v60
	_mm_store_ps(ctx.v49.f32, _mm_add_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v60.f32)));
	// vrefp128 v50,v50
	_mm_store_ps(ctx.v50.f32, _mm_div_ps(_mm_set1_ps(1), _mm_load_ps(ctx.v50.f32)));
	// vrefp128 v48,v48
	_mm_store_ps(ctx.v48.f32, _mm_div_ps(_mm_set1_ps(1), _mm_load_ps(ctx.v48.f32)));
	// vcfpsxws128 v32,v32,0
	_mm_store_si128((__m128i*)ctx.v32.s32, _mm_vctsxs(_mm_load_ps(ctx.v32.f32)));
	// vcfpsxws128 v8,v49,0
	_mm_store_si128((__m128i*)ctx.v8.s32, _mm_vctsxs(_mm_load_ps(ctx.v49.f32)));
	// vxor128 v50,v50,v55
	_mm_store_si128((__m128i*)ctx.v50.u8, _mm_xor_si128(_mm_load_si128((__m128i*)ctx.v50.u8), _mm_load_si128((__m128i*)ctx.v55.u8)));
	// vxor128 v49,v48,v61
	_mm_store_si128((__m128i*)ctx.v49.u8, _mm_xor_si128(_mm_load_si128((__m128i*)ctx.v48.u8), _mm_load_si128((__m128i*)ctx.v61.u8)));
	// vslw128 v48,v32,v59
	ctx.v48.u32[0] = ctx.v32.u32[0] << (ctx.v59.u8[0] & 0x1F);
	ctx.v48.u32[1] = ctx.v32.u32[1] << (ctx.v59.u8[4] & 0x1F);
	ctx.v48.u32[2] = ctx.v32.u32[2] << (ctx.v59.u8[8] & 0x1F);
	ctx.v48.u32[3] = ctx.v32.u32[3] << (ctx.v59.u8[12] & 0x1F);
	// vslw128 v32,v8,v59
	ctx.v32.u32[0] = ctx.v8.u32[0] << (ctx.v59.u8[0] & 0x1F);
	ctx.v32.u32[1] = ctx.v8.u32[1] << (ctx.v59.u8[4] & 0x1F);
	ctx.v32.u32[2] = ctx.v8.u32[2] << (ctx.v59.u8[8] & 0x1F);
	ctx.v32.u32[3] = ctx.v8.u32[3] << (ctx.v59.u8[12] & 0x1F);
	// stvx128 v48,r0,r20
	_mm_store_si128((__m128i*)(base + ((ctx.r20.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v48.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v32,r0,r18
	_mm_store_si128((__m128i*)(base + ((ctx.r18.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v32.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// beq cr6,0x82a2d704
	if (ctx.cr6.eq) goto loc_82A2D704;
	// addi r8,r1,464
	ctx.r8.s64 = ctx.r1.s64 + 464;
	// addi r6,r1,496
	ctx.r6.s64 = ctx.r1.s64 + 496;
	// addi r4,r1,528
	ctx.r4.s64 = ctx.r1.s64 + 528;
	// addi r20,r1,560
	ctx.r20.s64 = ctx.r1.s64 + 560;
	// addi r19,r1,368
	ctx.r19.s64 = ctx.r1.s64 + 368;
	// lvx128 v6,r0,r8
	simd::store_shuffled(ctx.v6, simd::load_and_shuffle(base + ((ctx.r8.u32) & ~0xF), VectorMaskL));
	// addi r8,r1,336
	ctx.r8.s64 = ctx.r1.s64 + 336;
	// lvx128 v5,r0,r6
	simd::store_shuffled(ctx.v5, simd::load_and_shuffle(base + ((ctx.r6.u32) & ~0xF), VectorMaskL));
	// vperm128 v53,v57,v63,v6
	_mm_store_si128((__m128i*)ctx.v53.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v57.u8), _mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)ctx.v6.u8)));
	// lvx128 v4,r0,r4
	simd::store_shuffled(ctx.v4, simd::load_and_shuffle(base + ((ctx.r4.u32) & ~0xF), VectorMaskL));
	// vperm128 v48,v57,v63,v5
	_mm_store_si128((__m128i*)ctx.v48.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v57.u8), _mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)ctx.v5.u8)));
	// lvx128 v6,r0,r20
	simd::store_shuffled(ctx.v6, simd::load_and_shuffle(base + ((ctx.r20.u32) & ~0xF), VectorMaskL));
	// vperm128 v32,v57,v63,v4
	_mm_store_si128((__m128i*)ctx.v32.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v57.u8), _mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)ctx.v4.u8)));
	// vperm128 v57,v57,v63,v6
	_mm_store_si128((__m128i*)ctx.v57.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v57.u8), _mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)ctx.v6.u8)));
	// vcsxwfp128 v13,v53,0
	_mm_store_ps(ctx.v13.f32, _mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v53.u32)));
	// vcsxwfp128 v12,v48,0
	_mm_store_ps(ctx.v12.f32, _mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v48.u32)));
	// vcsxwfp128 v11,v32,0
	_mm_store_ps(ctx.v11.f32, _mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v32.u32)));
	// vcsxwfp128 v10,v57,0
	_mm_store_ps(ctx.v10.f32, _mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v57.u32)));
	// vxor128 v53,v13,v61
	_mm_store_si128((__m128i*)ctx.v53.u8, _mm_xor_si128(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)ctx.v61.u8)));
	// vmaddfp v9,v0,v12,v13
	_mm_store_ps(ctx.v9.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v12.f32)), _mm_load_ps(ctx.v13.f32)));
	// vxor128 v48,v11,v61
	_mm_store_si128((__m128i*)ctx.v48.u8, _mm_xor_si128(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)ctx.v61.u8)));
	// vmaddfp v13,v0,v10,v11
	_mm_store_ps(ctx.v13.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v10.f32)), _mm_load_ps(ctx.v11.f32)));
	// vmsum4fp128 v32,v53,v12
	_mm_store_ps(ctx.v32.f32, _mm_dp_ps(_mm_load_ps(ctx.v53.f32), _mm_load_ps(ctx.v12.f32), 0xFF));
	// vmsum4fp128 v57,v48,v10
	_mm_store_ps(ctx.v57.f32, _mm_dp_ps(_mm_load_ps(ctx.v48.f32), _mm_load_ps(ctx.v10.f32), 0xFF));
	// vaddfp128 v53,v9,v60
	_mm_store_ps(ctx.v53.f32, _mm_add_ps(_mm_load_ps(ctx.v9.f32), _mm_load_ps(ctx.v60.f32)));
	// vaddfp128 v48,v13,v60
	_mm_store_ps(ctx.v48.f32, _mm_add_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v60.f32)));
	// vrefp128 v32,v32
	_mm_store_ps(ctx.v32.f32, _mm_div_ps(_mm_set1_ps(1), _mm_load_ps(ctx.v32.f32)));
	// vrefp128 v57,v57
	_mm_store_ps(ctx.v57.f32, _mm_div_ps(_mm_set1_ps(1), _mm_load_ps(ctx.v57.f32)));
	// vcfpsxws128 v53,v53,0
	_mm_store_si128((__m128i*)ctx.v53.s32, _mm_vctsxs(_mm_load_ps(ctx.v53.f32)));
	// vcfpsxws128 v48,v48,0
	_mm_store_si128((__m128i*)ctx.v48.s32, _mm_vctsxs(_mm_load_ps(ctx.v48.f32)));
	// vxor128 v32,v32,v55
	_mm_store_si128((__m128i*)ctx.v32.u8, _mm_xor_si128(_mm_load_si128((__m128i*)ctx.v32.u8), _mm_load_si128((__m128i*)ctx.v55.u8)));
	// vxor128 v57,v57,v61
	_mm_store_si128((__m128i*)ctx.v57.u8, _mm_xor_si128(_mm_load_si128((__m128i*)ctx.v57.u8), _mm_load_si128((__m128i*)ctx.v61.u8)));
	// vslw128 v53,v53,v59
	ctx.v53.u32[0] = ctx.v53.u32[0] << (ctx.v59.u8[0] & 0x1F);
	ctx.v53.u32[1] = ctx.v53.u32[1] << (ctx.v59.u8[4] & 0x1F);
	ctx.v53.u32[2] = ctx.v53.u32[2] << (ctx.v59.u8[8] & 0x1F);
	ctx.v53.u32[3] = ctx.v53.u32[3] << (ctx.v59.u8[12] & 0x1F);
	// vslw128 v48,v48,v59
	ctx.v48.u32[0] = ctx.v48.u32[0] << (ctx.v59.u8[0] & 0x1F);
	ctx.v48.u32[1] = ctx.v48.u32[1] << (ctx.v59.u8[4] & 0x1F);
	ctx.v48.u32[2] = ctx.v48.u32[2] << (ctx.v59.u8[8] & 0x1F);
	ctx.v48.u32[3] = ctx.v48.u32[3] << (ctx.v59.u8[12] & 0x1F);
	// stvx128 v53,r0,r19
	_mm_store_si128((__m128i*)(base + ((ctx.r19.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v53.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lwz r4,372(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 372);
	// stvx128 v48,r0,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v48.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lwz r20,340(r1)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r1.u32 + 340);
	// lwz r18,344(r1)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r1.u32 + 344);
	// lwz r8,368(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 368);
	// lwz r6,376(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 376);
	// lwz r19,336(r1)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r1.u32 + 336);
	// lvlx128 v48,r8,r11
	temp.u32 = ctx.r8.u32 + ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v48.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lwz r8,380(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 380);
	// lvlx v29,r6,r11
	temp.u32 = ctx.r6.u32 + ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v29.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v53,r4,r11
	temp.u32 = ctx.r4.u32 + ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v53.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lwz r4,348(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 348);
	// vrlimi128 v48,v53,4,3
	_mm_store_ps(ctx.v48.f32, _mm_blend_ps(_mm_load_ps(ctx.v48.f32), _mm_permute_ps(_mm_load_ps(ctx.v53.f32), 57), 4));
	// lvlx128 v53,r19,r11
	temp.u32 = ctx.r19.u32 + ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v53.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx v5,r20,r11
	temp.u32 = ctx.r20.u32 + ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v5.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vrlimi128 v53,v5,4,3
	_mm_store_ps(ctx.v53.f32, _mm_blend_ps(_mm_load_ps(ctx.v53.f32), _mm_permute_ps(_mm_load_ps(ctx.v5.f32), 57), 4));
	// lvlx v4,r18,r11
	temp.u32 = ctx.r18.u32 + ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v4.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vrlimi128 v48,v29,2,2
	_mm_store_ps(ctx.v48.f32, _mm_blend_ps(_mm_load_ps(ctx.v48.f32), _mm_permute_ps(_mm_load_ps(ctx.v29.f32), 78), 2));
	// vrlimi128 v53,v4,2,2
	_mm_store_ps(ctx.v53.f32, _mm_blend_ps(_mm_load_ps(ctx.v53.f32), _mm_permute_ps(_mm_load_ps(ctx.v4.f32), 78), 2));
	// lvlx v30,r8,r11
	temp.u32 = ctx.r8.u32 + ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v30.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vrlimi128 v48,v30,1,1
	_mm_store_ps(ctx.v48.f32, _mm_blend_ps(_mm_load_ps(ctx.v48.f32), _mm_permute_ps(_mm_load_ps(ctx.v30.f32), 147), 1));
	// lvlx v31,r4,r11
	temp.u32 = ctx.r4.u32 + ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v31.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vrlimi128 v53,v31,1,1
	_mm_store_ps(ctx.v53.f32, _mm_blend_ps(_mm_load_ps(ctx.v53.f32), _mm_permute_ps(_mm_load_ps(ctx.v31.f32), 147), 1));
	// vmsum4fp128 v57,v53,v57
	_mm_store_ps(ctx.v57.f32, _mm_dp_ps(_mm_load_ps(ctx.v53.f32), _mm_load_ps(ctx.v57.f32), 0xFF));
	// vmsum4fp128 v53,v48,v32
	_mm_store_ps(ctx.v53.f32, _mm_dp_ps(_mm_load_ps(ctx.v48.f32), _mm_load_ps(ctx.v32.f32), 0xFF));
	// vaddfp128 v53,v53,v57
	_mm_store_ps(ctx.v53.f32, _mm_add_ps(_mm_load_ps(ctx.v53.f32), _mm_load_ps(ctx.v57.f32)));
loc_82A2D704:
	// lwz r8,404(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 404);
	// addi r6,r1,20
	ctx.r6.s64 = ctx.r1.s64 + 20;
	// lwz r4,400(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 400);
	// lwz r20,408(r1)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r1.u32 + 408);
	// lwz r19,436(r1)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r1.u32 + 436);
	// lwz r18,432(r1)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r1.u32 + 432);
	// lvlx128 v48,r8,r11
	temp.u32 = ctx.r8.u32 + ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v48.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lwz r8,412(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 412);
	// lvlx128 v32,r4,r11
	temp.u32 = ctx.r4.u32 + ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v32.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lwz r4,440(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 440);
	// vrlimi128 v32,v48,4,3
	_mm_store_ps(ctx.v32.f32, _mm_blend_ps(_mm_load_ps(ctx.v32.f32), _mm_permute_ps(_mm_load_ps(ctx.v48.f32), 57), 4));
	// lvlx128 v57,r20,r11
	temp.u32 = ctx.r20.u32 + ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v57.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v48,r19,r11
	temp.u32 = ctx.r19.u32 + ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v48.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lwz r20,444(r1)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r1.u32 + 444);
	// lvlx v13,r18,r11
	temp.u32 = ctx.r18.u32 + ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vrlimi128 v13,v48,4,3
	_mm_store_ps(ctx.v13.f32, _mm_blend_ps(_mm_load_ps(ctx.v13.f32), _mm_permute_ps(_mm_load_ps(ctx.v48.f32), 57), 4));
	// lvlx128 v48,r8,r11
	temp.u32 = ctx.r8.u32 + ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v48.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vrlimi128 v32,v57,2,2
	_mm_store_ps(ctx.v32.f32, _mm_blend_ps(_mm_load_ps(ctx.v32.f32), _mm_permute_ps(_mm_load_ps(ctx.v57.f32), 78), 2));
	// lvlx v12,r4,r11
	temp.u32 = ctx.r4.u32 + ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx v11,r20,r11
	temp.u32 = ctx.r20.u32 + ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vrlimi128 v13,v12,2,2
	_mm_store_ps(ctx.v13.f32, _mm_blend_ps(_mm_load_ps(ctx.v13.f32), _mm_permute_ps(_mm_load_ps(ctx.v12.f32), 78), 2));
	// vrlimi128 v32,v48,1,1
	_mm_store_ps(ctx.v32.f32, _mm_blend_ps(_mm_load_ps(ctx.v32.f32), _mm_permute_ps(_mm_load_ps(ctx.v48.f32), 147), 1));
	// vrlimi128 v13,v11,1,1
	_mm_store_ps(ctx.v13.f32, _mm_blend_ps(_mm_load_ps(ctx.v13.f32), _mm_permute_ps(_mm_load_ps(ctx.v11.f32), 147), 1));
	// vmsum4fp128 v32,v32,v50
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v32.f32, _mm_dp_ps(_mm_load_ps(ctx.v32.f32), _mm_load_ps(ctx.v50.f32), 0xFF));
	// vmsum4fp128 v57,v13,v49
	_mm_store_ps(ctx.v57.f32, _mm_dp_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v49.f32), 0xFF));
	// vaddfp128 v53,v53,v32
	_mm_store_ps(ctx.v53.f32, _mm_add_ps(_mm_load_ps(ctx.v53.f32), _mm_load_ps(ctx.v32.f32)));
	// vaddfp128 v50,v53,v57
	_mm_store_ps(ctx.v50.f32, _mm_add_ps(_mm_load_ps(ctx.v53.f32), _mm_load_ps(ctx.v57.f32)));
	// vmulfp128 v49,v50,v56
	_mm_store_ps(ctx.v49.f32, _mm_mul_ps(_mm_load_ps(ctx.v50.f32), _mm_load_ps(ctx.v56.f32)));
	// vcmpgtfp128 v48,v51,v49
	_mm_store_ps(ctx.v48.f32, _mm_cmpgt_ps(_mm_load_ps(ctx.v51.f32), _mm_load_ps(ctx.v49.f32)));
	// vcmpgtfp128 v32,v54,v49
	_mm_store_ps(ctx.v32.f32, _mm_cmpgt_ps(_mm_load_ps(ctx.v54.f32), _mm_load_ps(ctx.v49.f32)));
	// vcsxwfp128 v57,v48,0
	_mm_store_ps(ctx.v57.f32, _mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v48.u32)));
	// vcsxwfp128 v54,v32,0
	_mm_store_ps(ctx.v54.f32, _mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v32.u32)));
	// vmsum3fp128 v53,v57,v62
	_mm_store_ps(ctx.v53.f32, _mm_dp_ps(_mm_load_ps(ctx.v57.f32), _mm_load_ps(ctx.v62.f32), 0xEF));
	// vmsum4fp128 v51,v54,v62
	_mm_store_ps(ctx.v51.f32, _mm_dp_ps(_mm_load_ps(ctx.v54.f32), _mm_load_ps(ctx.v62.f32), 0xFF));
	// vaddfp128 v50,v51,v53
	_mm_store_ps(ctx.v50.f32, _mm_add_ps(_mm_load_ps(ctx.v51.f32), _mm_load_ps(ctx.v53.f32)));
	// vcfpsxws128 v49,v50,0
	_mm_store_si128((__m128i*)ctx.v49.s32, _mm_vctsxs(_mm_load_ps(ctx.v50.f32)));
	// stvewx128 v49,r0,r6
	ea = (ctx.r6.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v49.u32[3 - ((ea & 0xF) >> 2)]);
	// lwz r8,16(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 16);
	// rlwinm r6,r8,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f12,r6,r5
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r5.u32);
	ctx.f12.f64 = double(temp.f32);
	// fadds f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 + ctx.f0.f64));
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x82a2d960
	if (ctx.cr6.lt) goto loc_82A2D960;
	// lwz r8,20(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 20);
	// addi r6,r8,8
	ctx.r6.s64 = ctx.r8.s64 + 8;
	// rlwinm r4,r6,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f12,r4,r5
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r5.u32);
	ctx.f12.f64 = double(temp.f32);
	// fadds f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 + ctx.f0.f64));
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x82a2d960
	if (ctx.cr6.lt) goto loc_82A2D960;
	// addi r31,r31,2
	ctx.r31.s64 = ctx.r31.s64 + 2;
	// addi r10,r10,32
	ctx.r10.s64 = ctx.r10.s64 + 32;
	// addi r9,r9,64
	ctx.r9.s64 = ctx.r9.s64 + 64;
	// addi r5,r5,64
	ctx.r5.s64 = ctx.r5.s64 + 64;
	// cmpw cr6,r31,r30
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r30.s32, ctx.xer);
	// mr r8,r7
	ctx.r8.u64 = ctx.r7.u64;
	// blt cr6,0x82a2d368
	if (ctx.cr6.lt) goto loc_82A2D368;
	// lwz r6,88(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
loc_82A2D7EC:
	// addi r11,r29,5
	ctx.r11.s64 = ctx.r29.s64 + 5;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f12,r10,r3
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	ctx.f12.f64 = double(temp.f32);
	// fadds f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 + ctx.f0.f64));
	// fcmpu cr6,f0,f11
	ctx.cr6.compare(ctx.f0.f64, ctx.f11.f64);
	// ble cr6,0x82a2d964
	if (!ctx.cr6.gt) goto loc_82A2D964;
	// vcfpsxws128 v48,v42,0
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_si128((__m128i*)ctx.v48.s32, _mm_vctsxs(_mm_load_ps(ctx.v42.f32)));
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,24(r1)
	PPC_STORE_U8(ctx.r1.u32 + 24, ctx.r11.u8);
	// vpkuwus128 v45,v48,v63
	_mm_store_si128((__m128i*)vTemp.u32, _mm_load_si128((__m128i*)ctx.v63.u32));
	ctx.v45.u16[0] = vTemp.u32[0] > 0xFFFF ? 0xFFFF : vTemp.u32[0];
	ctx.v45.u16[1] = vTemp.u32[1] > 0xFFFF ? 0xFFFF : vTemp.u32[1];
	ctx.v45.u16[2] = vTemp.u32[2] > 0xFFFF ? 0xFFFF : vTemp.u32[2];
	ctx.v45.u16[3] = vTemp.u32[3] > 0xFFFF ? 0xFFFF : vTemp.u32[3];
	_mm_store_si128((__m128i*)vTemp.u32, _mm_load_si128((__m128i*)ctx.v48.u32));
	ctx.v45.u16[4] = vTemp.u32[0] > 0xFFFF ? 0xFFFF : vTemp.u32[0];
	ctx.v45.u16[5] = vTemp.u32[1] > 0xFFFF ? 0xFFFF : vTemp.u32[1];
	ctx.v45.u16[6] = vTemp.u32[2] > 0xFFFF ? 0xFFFF : vTemp.u32[2];
	ctx.v45.u16[7] = vTemp.u32[3] > 0xFFFF ? 0xFFFF : vTemp.u32[3];
	// stvlx128 v45,r0,r22
	ea = ctx.r22.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v45.u8[15 - i]);
	// stvrx128 v45,r22,r7
	ea = ctx.r22.u32 + ctx.r7.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		PPC_STORE_U8(ea - i - 1, ctx.v45.u8[i]);
	// stfs f0,8(r22)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r22.u32 + 8, temp.u32);
	// lwz r10,64(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 64);
	// lhz r11,0(r22)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r22.u32 + 0);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x82a2d834
	if (!ctx.cr6.lt) goto loc_82A2D834;
	// stw r11,64(r1)
	PPC_STORE_U32(ctx.r1.u32 + 64, ctx.r11.u32);
loc_82A2D834:
	// lhz r11,2(r22)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r22.u32 + 2);
	// lwz r10,68(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 68);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x82a2d848
	if (!ctx.cr6.lt) goto loc_82A2D848;
	// stw r11,68(r1)
	PPC_STORE_U32(ctx.r1.u32 + 68, ctx.r11.u32);
loc_82A2D848:
	// lhz r11,4(r22)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r22.u32 + 4);
	// lwz r10,72(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 72);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x82a2d85c
	if (!ctx.cr6.gt) goto loc_82A2D85C;
	// stw r11,72(r1)
	PPC_STORE_U32(ctx.r1.u32 + 72, ctx.r11.u32);
loc_82A2D85C:
	// lhz r11,6(r22)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r22.u32 + 6);
	// lwz r10,76(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 76);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x82a2d870
	if (!ctx.cr6.gt) goto loc_82A2D870;
	// stw r11,76(r1)
	PPC_STORE_U32(ctx.r1.u32 + 76, ctx.r11.u32);
loc_82A2D870:
	// lwz r11,0(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// addi r22,r22,16
	ctx.r22.s64 = ctx.r22.s64 + 16;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// cmpwi cr6,r11,128
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 128, ctx.xer);
	// bge cr6,0x82a2da28
	if (!ctx.cr6.lt) goto loc_82A2DA28;
	// lwz r11,164(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// addi r10,r1,208
	ctx.r10.s64 = ctx.r1.s64 + 208;
	// lwz r9,176(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// addi r8,r1,48
	ctx.r8.s64 = ctx.r1.s64 + 48;
	// lwz r5,172(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// lwz r31,112(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// addi r30,r1,464
	ctx.r30.s64 = ctx.r1.s64 + 464;
	// lwz r29,160(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// addi r20,r1,496
	ctx.r20.s64 = ctx.r1.s64 + 496;
	// lvx128 v32,r0,r11
	simd::store_shuffled(ctx.v32, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lvx128 v63,r0,r9
	simd::store_shuffled(ctx.v63, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// lwz r9,180(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// lvx128 v62,r0,r5
	simd::store_shuffled(ctx.v62, simd::load_and_shuffle(base + ((ctx.r5.u32) & ~0xF), VectorMaskL));
	// lwz r5,140(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// stvx128 v63,r0,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lwz r8,152(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// stvx128 v62,r0,r4
	_mm_store_si128((__m128i*)(base + ((ctx.r4.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v62.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lwz r4,116(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// stvx128 v32,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v32.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lwz r10,168(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// lvx128 v60,r0,r31
	simd::store_shuffled(ctx.v60, simd::load_and_shuffle(base + ((ctx.r31.u32) & ~0xF), VectorMaskL));
	// lwz r19,120(r1)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// lvx128 v57,r0,r29
	simd::store_shuffled(ctx.v57, simd::load_and_shuffle(base + ((ctx.r29.u32) & ~0xF), VectorMaskL));
	// addi r18,r1,528
	ctx.r18.s64 = ctx.r1.s64 + 528;
	// lwz r17,128(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// addi r16,r1,560
	ctx.r16.s64 = ctx.r1.s64 + 560;
	// addi r15,r1,208
	ctx.r15.s64 = ctx.r1.s64 + 208;
	// lvx128 v56,r0,r11
	simd::store_shuffled(ctx.v56, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// addi r31,r1,48
	ctx.r31.s64 = ctx.r1.s64 + 48;
	// lvx128 v54,r0,r9
	simd::store_shuffled(ctx.v54, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// addi r29,r1,192
	ctx.r29.s64 = ctx.r1.s64 + 192;
	// lvx128 v45,r0,r5
	simd::store_shuffled(ctx.v45, simd::load_and_shuffle(base + ((ctx.r5.u32) & ~0xF), VectorMaskL));
	// lvx128 v63,r0,r10
	simd::store_shuffled(ctx.v63, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// lvx128 v62,r0,r8
	simd::store_shuffled(ctx.v62, simd::load_and_shuffle(base + ((ctx.r8.u32) & ~0xF), VectorMaskL));
	// lvx128 v58,r0,r4
	simd::store_shuffled(ctx.v58, simd::load_and_shuffle(base + ((ctx.r4.u32) & ~0xF), VectorMaskL));
	// lvx128 v1,r0,r19
	simd::store_shuffled(ctx.v1, simd::load_and_shuffle(base + ((ctx.r19.u32) & ~0xF), VectorMaskL));
	// lvx128 v59,r0,r17
	simd::store_shuffled(ctx.v59, simd::load_and_shuffle(base + ((ctx.r17.u32) & ~0xF), VectorMaskL));
	// stvx128 v60,r0,r30
	_mm_store_si128((__m128i*)(base + ((ctx.r30.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v60.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v57,r0,r20
	_mm_store_si128((__m128i*)(base + ((ctx.r20.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v57.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v56,r0,r18
	_mm_store_si128((__m128i*)(base + ((ctx.r18.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v56.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v54,r0,r16
	_mm_store_si128((__m128i*)(base + ((ctx.r16.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v54.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v2,r0,r31
	simd::store_shuffled(ctx.v2, simd::load_and_shuffle(base + ((ctx.r31.u32) & ~0xF), VectorMaskL));
	// lvx128 v7,r0,r29
	simd::store_shuffled(ctx.v7, simd::load_and_shuffle(base + ((ctx.r29.u32) & ~0xF), VectorMaskL));
	// lvx128 v3,r0,r15
	simd::store_shuffled(ctx.v3, simd::load_and_shuffle(base + ((ctx.r15.u32) & ~0xF), VectorMaskL));
	// b 0x82a2d964
	goto loc_82A2D964;
loc_82A2D944:
	// addi r11,r1,208
	ctx.r11.s64 = ctx.r1.s64 + 208;
	// addi r10,r1,48
	ctx.r10.s64 = ctx.r1.s64 + 48;
	// addi r9,r1,192
	ctx.r9.s64 = ctx.r1.s64 + 192;
	// lvx128 v3,r0,r11
	simd::store_shuffled(ctx.v3, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// lvx128 v2,r0,r10
	simd::store_shuffled(ctx.v2, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// lvx128 v7,r0,r9
	simd::store_shuffled(ctx.v7, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// b 0x82a2d964
	goto loc_82A2D964;
loc_82A2D960:
	// lwz r6,88(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
loc_82A2D964:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// vaddfp128 v42,v42,v41
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v42.f32, _mm_add_ps(_mm_load_ps(ctx.v42.f32), _mm_load_ps(ctx.v41.f32)));
	// lwz r5,136(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// vaddfp128 v47,v47,v40
	_mm_store_ps(ctx.v47.f32, _mm_add_ps(_mm_load_ps(ctx.v47.f32), _mm_load_ps(ctx.v40.f32)));
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// cmplw cr6,r11,r5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r5.u32, ctx.xer);
	// ble cr6,0x82a2c49c
	if (!ctx.cr6.gt) goto loc_82A2C49C;
	// lwz r10,144(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// lwz r8,84(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r20,1020(r1)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1020);
	// lwz r4,32(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 32);
	// lwz r9,36(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 36);
loc_82A2D998:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// vaddfp v23,v23,v24
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v23.f32, _mm_add_ps(_mm_load_ps(ctx.v23.f32), _mm_load_ps(ctx.v24.f32)));
	// vaddfp v22,v22,v21
	_mm_store_ps(ctx.v22.f32, _mm_add_ps(_mm_load_ps(ctx.v22.f32), _mm_load_ps(ctx.v21.f32)));
	// stw r9,36(r1)
	PPC_STORE_U32(ctx.r1.u32 + 36, ctx.r9.u32);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82a2c454
	if (!ctx.cr6.gt) goto loc_82A2C454;
loc_82A2D9B0:
	// lbz r10,24(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 24);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82a2d9e4
	if (ctx.cr6.eq) goto loc_82A2D9E4;
	// addi r11,r1,64
	ctx.r11.s64 = ctx.r1.s64 + 64;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r5,8(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// stw r8,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r8.u32);
	// stw r5,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r5.u32);
	// stw r11,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r11.u32);
loc_82A2D9E4:
	// vmulfp128 v36,v36,v35
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v36.f32, _mm_mul_ps(_mm_load_ps(ctx.v36.f32), _mm_load_ps(ctx.v35.f32)));
	// vmulfp128 v53,v34,v36
	_mm_store_ps(ctx.v53.f32, _mm_mul_ps(_mm_load_ps(ctx.v34.f32), _mm_load_ps(ctx.v36.f32)));
	// vrfin128 v13,v53
	_mm_store_ps(ctx.v13.f32, _mm_round_ps(_mm_load_ps(ctx.v53.f32), _MM_FROUND_TO_NEAREST_INT | _MM_FROUND_NO_EXC));
loc_82A2D9F0:
	// lwz r11,1036(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1036);
	// addi r4,r4,-1
	ctx.r4.s64 = ctx.r4.s64 + -1;
	// stw r4,32(r1)
	PPC_STORE_U32(ctx.r1.u32 + 32, ctx.r4.u32);
	// cmpw cr6,r4,r11
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x82a2c328
	if (!ctx.cr6.lt) goto loc_82A2C328;
loc_82A2DA04:
	// lwz r11,0(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// lis r10,-32768
	ctx.r10.s64 = -2147483648;
	// addic r9,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// rlwinm r8,r11,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// ori r7,r10,16389
	ctx.r7.u64 = ctx.r10.u64 | 16389;
	// subfze r6,r8
	temp.u64 = ~ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u64 < ctx.xer.ca;
	ctx.r6.u64 = temp.u64;
	// and r3,r6,r7
	ctx.r3.u64 = ctx.r6.u64 & ctx.r7.u64;
	// addi r1,r1,992
	ctx.r1.s64 = ctx.r1.s64 + 992;
	// b 0x82fa7690
	__restgprlr_14(ctx, base);
	return;
loc_82A2DA28:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,992
	ctx.r1.s64 = ctx.r1.s64 + 992;
	// b 0x82fa7690
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A2DA34"))) PPC_WEAK_FUNC(sub_82A2DA34);
PPC_FUNC_IMPL(__imp__sub_82A2DA34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A2DA38"))) PPC_WEAK_FUNC(sub_82A2DA38);
PPC_FUNC_IMPL(__imp__sub_82A2DA38) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x82A2DA40;
	__savegprlr_29(ctx, base);
	// ld r12,-4096(r1)
	ctx.r12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -4096);
	// stwu r1,-6784(r1)
	ea = -6784 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,328(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 328);
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r9
	ctx.r29.u64 = ctx.r9.u64;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// ble cr6,0x82a2db98
	if (!ctx.cr6.gt) goto loc_82A2DB98;
	// li r10,128
	ctx.r10.s64 = 128;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// addi r11,r1,5724
	ctx.r11.s64 = ctx.r1.s64 + 5724;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82A2DA74:
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// stwu r9,8(r11)
	ea = 8 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x82a2da74
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82A2DA74;
	// lwz r5,328(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 328);
	// addi r4,r3,332
	ctx.r4.s64 = ctx.r3.s64 + 332;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// mr r8,r5
	ctx.r8.u64 = ctx.r5.u64;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,2144
	ctx.r3.s64 = ctx.r1.s64 + 2144;
	// bl 0x82a2b9d0
	ctx.lr = 0x82A2DAA0;
	sub_82A2B9D0(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x82a2db28
	if (!ctx.cr6.eq) goto loc_82A2DB28;
	// lhz r8,96(r1)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r1.u32 + 96);
	// lfs f13,104(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f13.f64 = double(temp.f32);
	// lhz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 100);
	// lhz r9,98(r1)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r1.u32 + 98);
	// lhz r7,102(r1)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r1.u32 + 102);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// stw r9,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
	// stw r7,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r7.u32);
	// ble cr6,0x82a2dbd0
	if (!ctx.cr6.gt) goto loc_82A2DBD0;
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// addi r11,r1,120
	ctx.r11.s64 = ctx.r1.s64 + 120;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82A2DAE8:
	// lfs f0,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x82a2db1c
	if (!ctx.cr6.gt) goto loc_82A2DB1C;
	// lhz r10,-8(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + -8);
	// fmr f13,f0
	ctx.f13.f64 = ctx.f0.f64;
	// lhz r7,-2(r11)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r11.u32 + -2);
	// lhz r9,-4(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + -4);
	// lhz r8,-6(r11)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + -6);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// stw r7,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r7.u32);
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// stw r8,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r8.u32);
loc_82A2DB1C:
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// bdnz 0x82a2dae8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82A2DAE8;
	// b 0x82a2dbd0
	goto loc_82A2DBD0;
loc_82A2DB28:
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r6,r11
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82a2db8c
	if (ctx.cr6.gt) goto loc_82A2DB8C;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x82a2db84
	if (ctx.cr6.eq) goto loc_82A2DB84;
	// addi r11,r1,98
	ctx.r11.s64 = ctx.r1.s64 + 98;
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// addi r8,r1,98
	ctx.r8.s64 = ctx.r1.s64 + 98;
	// addi r10,r11,-16
	ctx.r10.s64 = ctx.r11.s64 + -16;
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
	// subf r9,r31,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r31.s64;
	// subf r8,r31,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r31.s64;
loc_82A2DB5C:
	// lhz r3,14(r10)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r10.u32 + 14);
	// lhzx r5,r9,r11
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r9.u32 + ctx.r11.u32);
	// lhzx r4,r8,r11
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r8.u32 + ctx.r11.u32);
	// lhzu r7,16(r10)
	ea = 16 + ctx.r10.u32;
	ctx.r7.u64 = PPC_LOAD_U16(ea);
	ctx.r10.u32 = ea;
	// stw r3,-4(r11)
	PPC_STORE_U32(ctx.r11.u32 + -4, ctx.r3.u32);
	// stw r5,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r5.u32);
	// stw r4,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r4.u32);
	// stw r7,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r7.u32);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// bdnz 0x82a2db5c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82A2DB5C;
loc_82A2DB84:
	// stw r6,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r6.u32);
	// b 0x82a2dbd0
	goto loc_82A2DBD0;
loc_82A2DB8C:
	// lis r29,-32761
	ctx.r29.s64 = -2147024896;
	// ori r29,r29,14
	ctx.r29.u64 = ctx.r29.u64 | 14;
	// b 0x82a2dbd0
	goto loc_82A2DBD0;
loc_82A2DB98:
	// bne cr6,0x82a2dbc8
	if (!ctx.cr6.eq) goto loc_82A2DBC8;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// lhz r11,332(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 332);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lhz r11,336(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 336);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// lhz r11,334(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 334);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// lhz r11,338(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 338);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// b 0x82a2dbd0
	goto loc_82A2DBD0;
loc_82A2DBC8:
	// lis r29,-32768
	ctx.r29.s64 = -2147483648;
	// ori r29,r29,16389
	ctx.r29.u64 = ctx.r29.u64 | 16389;
loc_82A2DBD0:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,6784
	ctx.r1.s64 = ctx.r1.s64 + 6784;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A2DBDC"))) PPC_WEAK_FUNC(sub_82A2DBDC);
PPC_FUNC_IMPL(__imp__sub_82A2DBDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A2DBE0"))) PPC_WEAK_FUNC(sub_82A2DBE0);
PPC_FUNC_IMPL(__imp__sub_82A2DBE0) {
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
	// bl 0x82a33ea8
	ctx.lr = 0x82A2DC00;
	sub_82A33EA8(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82a2dc24
	if (ctx.cr0.eq) goto loc_82A2DC24;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82a2dc24
	if (ctx.cr6.eq) goto loc_82A2DC24;
	// lis r11,-31962
	ctx.r11.s64 = -2094661632;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,-28960(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -28960);
	// bl 0x82a81d88
	ctx.lr = 0x82A2DC24;
	sub_82A81D88(ctx, base);
loc_82A2DC24:
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

__attribute__((alias("__imp__sub_82A2DC40"))) PPC_WEAK_FUNC(sub_82A2DC40);
PPC_FUNC_IMPL(__imp__sub_82A2DC40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7674
	ctx.lr = 0x82A2DC48;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lwz r3,2380(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 2380);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a2dc6c
	if (ctx.cr6.eq) goto loc_82A2DC6C;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82a2dbe0
	ctx.lr = 0x82A2DC68;
	sub_82A2DBE0(ctx, base);
	// stw r29,2380(r28)
	PPC_STORE_U32(ctx.r28.u32 + 2380, ctx.r29.u32);
loc_82A2DC6C:
	// addi r31,r28,184
	ctx.r31.s64 = ctx.r28.s64 + 184;
	// li r27,9
	ctx.r27.s64 = 9;
	// lis r30,-31962
	ctx.r30.s64 = -2094661632;
loc_82A2DC78:
	// lwz r5,72(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82a2dc94
	if (ctx.cr6.eq) goto loc_82A2DC94;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,-28960(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -28960);
	// bl 0x82a81d88
	ctx.lr = 0x82A2DC90;
	sub_82A81D88(ctx, base);
	// stw r29,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r29.u32);
loc_82A2DC94:
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82a2dcb0
	if (ctx.cr6.eq) goto loc_82A2DCB0;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,-28960(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -28960);
	// bl 0x82a81d88
	ctx.lr = 0x82A2DCAC;
	sub_82A81D88(ctx, base);
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
loc_82A2DCB0:
	// lwz r5,-72(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -72);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82a2dccc
	if (ctx.cr6.eq) goto loc_82A2DCCC;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,-28960(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -28960);
	// bl 0x82a81d88
	ctx.lr = 0x82A2DCC8;
	sub_82A81D88(ctx, base);
	// stw r29,-72(r31)
	PPC_STORE_U32(ctx.r31.u32 + -72, ctx.r29.u32);
loc_82A2DCCC:
	// addic. r27,r27,-1
	ctx.xer.ca = ctx.r27.u32 > 0;
	ctx.r27.s64 = ctx.r27.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// bne 0x82a2dc78
	if (!ctx.cr0.eq) goto loc_82A2DC78;
	// lwz r5,56(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 56);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82a2dcf4
	if (ctx.cr6.eq) goto loc_82A2DCF4;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,-28960(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -28960);
	// bl 0x82a81d88
	ctx.lr = 0x82A2DCF0;
	sub_82A81D88(ctx, base);
	// stw r29,56(r28)
	PPC_STORE_U32(ctx.r28.u32 + 56, ctx.r29.u32);
loc_82A2DCF4:
	// lwz r5,12(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82a2dd10
	if (ctx.cr6.eq) goto loc_82A2DD10;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,-28960(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -28960);
	// bl 0x82a81d88
	ctx.lr = 0x82A2DD0C;
	sub_82A81D88(ctx, base);
	// stw r29,12(r28)
	PPC_STORE_U32(ctx.r28.u32 + 12, ctx.r29.u32);
loc_82A2DD10:
	// lwz r5,4(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82a2dd2c
	if (ctx.cr6.eq) goto loc_82A2DD2C;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,-28960(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -28960);
	// bl 0x82a81d88
	ctx.lr = 0x82A2DD28;
	sub_82A81D88(ctx, base);
	// stw r29,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r29.u32);
loc_82A2DD2C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A2DD34"))) PPC_WEAK_FUNC(sub_82A2DD34);
PPC_FUNC_IMPL(__imp__sub_82A2DD34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A2DD38"))) PPC_WEAK_FUNC(sub_82A2DD38);
PPC_FUNC_IMPL(__imp__sub_82A2DD38) {
	PPC_FUNC_PROLOGUE();
	// b 0x82a2dc40
	sub_82A2DC40(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A2DD3C"))) PPC_WEAK_FUNC(sub_82A2DD3C);
PPC_FUNC_IMPL(__imp__sub_82A2DD3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A2DD40"))) PPC_WEAK_FUNC(sub_82A2DD40);
PPC_FUNC_IMPL(__imp__sub_82A2DD40) {
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
	// addi r3,r3,16
	ctx.r3.s64 = ctx.r3.s64 + 16;
	// bl 0x82a35780
	ctx.lr = 0x82A2DD5C;
	sub_82A35780(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82A2DD84"))) PPC_WEAK_FUNC(sub_82A2DD84);
PPC_FUNC_IMPL(__imp__sub_82A2DD84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A2DD88"))) PPC_WEAK_FUNC(sub_82A2DD88);
PPC_FUNC_IMPL(__imp__sub_82A2DD88) {
	PPC_FUNC_PROLOGUE();
	// b 0x82a2dd40
	sub_82A2DD40(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A2DD8C"))) PPC_WEAK_FUNC(sub_82A2DD8C);
PPC_FUNC_IMPL(__imp__sub_82A2DD8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A2DD90"))) PPC_WEAK_FUNC(sub_82A2DD90);
PPC_FUNC_IMPL(__imp__sub_82A2DD90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x82A2DD98;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mullw r10,r4,r5
	ctx.r10.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r5.s32);
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm r30,r10,3,0,28
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// bge cr6,0x82a2de18
	if (!ctx.cr6.lt) goto loc_82A2DE18;
	// lwz r10,16(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82a2ddd4
	if (ctx.cr6.eq) goto loc_82A2DDD4;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a2ddd4
	if (ctx.cr6.eq) goto loc_82A2DDD4;
	// bl 0x82a2dd40
	ctx.lr = 0x82A2DDD4;
	sub_82A2DD40(ctx, base);
loc_82A2DDD4:
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// lis r10,8
	ctx.r10.s64 = 524288;
	// addi r5,r30,31
	ctx.r5.s64 = ctx.r30.s64 + 31;
	// ori r10,r10,63156
	ctx.r10.u64 = ctx.r10.u64 | 63156;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,24028(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24028);
	// lwzx r3,r11,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// bl 0x82a81490
	ctx.lr = 0x82A2DDF4;
	sub_82A81490(ctx, base);
	// stw r3,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82a2de1c
	if (ctx.cr0.eq) goto loc_82A2DE1C;
	// addi r11,r3,31
	ctx.r11.s64 = ctx.r3.s64 + 31;
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
	// rlwinm r11,r11,0,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFE0;
	// stw r28,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r28.u32);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
loc_82A2DE18:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82A2DE1C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A2DE24"))) PPC_WEAK_FUNC(sub_82A2DE24);
PPC_FUNC_IMPL(__imp__sub_82A2DE24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A2DE28"))) PPC_WEAK_FUNC(sub_82A2DE28);
PPC_FUNC_IMPL(__imp__sub_82A2DE28) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7658
	ctx.lr = 0x82A2DE30;
	__savegprlr_20(ctx, base);
	// li r12,-128
	ctx.r12.s64 = -128;
	// stvx128 v127,r1,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r1.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v127.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82a2e23c
	if (ctx.cr6.eq) goto loc_82A2E23C;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x82a2e23c
	if (ctx.cr6.eq) goto loc_82A2E23C;
	// addi r5,r6,1
	ctx.r5.s64 = ctx.r6.s64 + 1;
	// addi r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 1;
	// bl 0x82a2dd90
	ctx.lr = 0x82A2DE64;
	sub_82A2DD90(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82a2de78
	if (!ctx.cr0.eq) goto loc_82A2DE78;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x82a2e244
	goto loc_82A2E244;
loc_82A2DE78:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// lwz r3,12(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// lwz r5,8(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// addi r8,r10,-13520
	ctx.r8.s64 = ctx.r10.s64 + -13520;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rlwinm r10,r9,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r20,r11,28,4,31
	ctx.r20.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFF;
	// clrlwi r21,r11,28
	ctx.r21.u64 = ctx.r11.u32 & 0xF;
	// lvx128 v127,r0,r8
	simd::store_shuffled(ctx.v127, simd::load_and_shuffle(base + ((ctx.r8.u32) & ~0xF), VectorMaskL));
	// addi r30,r3,8
	ctx.r30.s64 = ctx.r3.s64 + 8;
	// add r31,r10,r3
	ctx.r31.u64 = ctx.r10.u64 + ctx.r3.u64;
	// stw r20,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r20.u32);
	// stw r21,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r21.u32);
	// bl 0x82a75988
	ctx.lr = 0x82A2DEBC;
	sub_82A75988(ctx, base);
	// addi r23,r29,4
	ctx.r23.s64 = ctx.r29.s64 + 4;
	// li r22,1
	ctx.r22.s64 = 1;
	// stw r23,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r23.u32);
	// stw r22,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r22.u32);
	// lwz r11,0(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// ble cr6,0x82a2e234
	if (!ctx.cr6.gt) goto loc_82A2E234;
	// lis r27,-31962
	ctx.r27.s64 = -2094661632;
	// vspltisw128 v58,0
	_mm_store_si128((__m128i*)ctx.v58.u32, _mm_set1_epi32(int(0x0)));
	// lis r26,-31962
	ctx.r26.s64 = -2094661632;
	// addi r10,r27,-30752
	ctx.r10.s64 = ctx.r27.s64 + -30752;
	// addi r9,r26,-10592
	ctx.r9.s64 = ctx.r26.s64 + -10592;
	// lis r4,-31962
	ctx.r4.s64 = -2094661632;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// lis r3,-31962
	ctx.r3.s64 = -2094661632;
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// lis r29,-31962
	ctx.r29.s64 = -2094661632;
	// lis r28,-31962
	ctx.r28.s64 = -2094661632;
	// li r11,16
	ctx.r11.s64 = 16;
	// li r5,32
	ctx.r5.s64 = 32;
	// li r6,48
	ctx.r6.s64 = 48;
	// li r7,64
	ctx.r7.s64 = 64;
	// li r8,80
	ctx.r8.s64 = 80;
	// li r9,96
	ctx.r9.s64 = 96;
	// li r10,112
	ctx.r10.s64 = 112;
	// li r24,128
	ctx.r24.s64 = 128;
	// addi r4,r4,-30736
	ctx.r4.s64 = ctx.r4.s64 + -30736;
	// addi r3,r3,-10608
	ctx.r3.s64 = ctx.r3.s64 + -10608;
	// addi r29,r29,-10560
	ctx.r29.s64 = ctx.r29.s64 + -10560;
	// addi r28,r28,-10576
	ctx.r28.s64 = ctx.r28.s64 + -10576;
loc_82A2DF34:
	// vor128 v59,v58,v58
	_mm_store_si128((__m128i*)ctx.v59.u8, _mm_load_si128((__m128i*)ctx.v58.u8));
	// cmplwi cr6,r20,0
	ctx.cr6.compare<uint32_t>(ctx.r20.u32, 0, ctx.xer);
	// vor128 v60,v58,v58
	_mm_store_si128((__m128i*)ctx.v60.u8, _mm_load_si128((__m128i*)ctx.v58.u8));
	// beq cr6,0x82a2e1a8
	if (ctx.cr6.eq) goto loc_82A2E1A8;
	// mtctr r20
	ctx.ctr.u64 = ctx.r20.u64;
loc_82A2DF48:
	// lwz r27,92(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lvrx128 v62,r11,r25
	temp.u32 = ctx.r11.u32 + ctx.r25.u32;
	_mm_store_si128((__m128i*)ctx.v62.u8, temp.u32 & 0xF ? _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : _mm_setzero_si128());
	// lvlx128 v63,r0,r25
	temp.u32 = ctx.r25.u32;
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lwz r26,96(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// vor128 v63,v63,v62
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)ctx.v62.u8)));
	// lvx128 v0,r0,r3
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r3.u32) & ~0xF), VectorMaskL));
	// lvx128 v6,r0,r28
	simd::store_shuffled(ctx.v6, simd::load_and_shuffle(base + ((ctx.r28.u32) & ~0xF), VectorMaskL));
	// lvx128 v5,r0,r29
	simd::store_shuffled(ctx.v5, simd::load_and_shuffle(base + ((ctx.r29.u32) & ~0xF), VectorMaskL));
	// lvx128 v62,r0,r27
	simd::store_shuffled(ctx.v62, simd::load_and_shuffle(base + ((ctx.r27.u32) & ~0xF), VectorMaskL));
	// lvx128 v7,r0,r26
	simd::store_shuffled(ctx.v7, simd::load_and_shuffle(base + ((ctx.r26.u32) & ~0xF), VectorMaskL));
	// vperm128 v57,v63,v62,v0
	_mm_store_si128((__m128i*)ctx.v57.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)ctx.v62.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// lvx128 v61,r0,r4
	simd::store_shuffled(ctx.v61, simd::load_and_shuffle(base + ((ctx.r4.u32) & ~0xF), VectorMaskL));
	// vperm128 v56,v63,v62,v7
	_mm_store_si128((__m128i*)ctx.v56.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)ctx.v62.u8), _mm_load_si128((__m128i*)ctx.v7.u8)));
	// vperm128 v55,v63,v62,v6
	_mm_store_si128((__m128i*)ctx.v55.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)ctx.v62.u8), _mm_load_si128((__m128i*)ctx.v6.u8)));
	// vperm128 v63,v63,v62,v5
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)ctx.v62.u8), _mm_load_si128((__m128i*)ctx.v5.u8)));
	// vcsxwfp128 v62,v57,0
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v62.f32, _mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v57.u32)));
	// vcsxwfp128 v57,v56,0
	_mm_store_ps(ctx.v57.f32, _mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v56.u32)));
	// vcsxwfp128 v56,v55,0
	_mm_store_ps(ctx.v56.f32, _mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v55.u32)));
	// vcsxwfp128 v63,v63,0
	_mm_store_ps(ctx.v63.f32, _mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v63.u32)));
	// vmsum4fp128 v55,v62,v61
	_mm_store_ps(ctx.v55.f32, _mm_dp_ps(_mm_load_ps(ctx.v62.f32), _mm_load_ps(ctx.v61.f32), 0xFF));
	// vmulfp128 v54,v62,v62
	_mm_store_ps(ctx.v54.f32, _mm_mul_ps(_mm_load_ps(ctx.v62.f32), _mm_load_ps(ctx.v62.f32)));
	// vmsum4fp128 v53,v62,v62
	_mm_store_ps(ctx.v53.f32, _mm_dp_ps(_mm_load_ps(ctx.v62.f32), _mm_load_ps(ctx.v62.f32), 0xFF));
	// vslo128 v62,v62,v127
	int shift = simd::extract_u8(ctx.v127.v128, 15) & 0x1F;
	if (shift >= 16) {
		ctx.v62.v128 = simd::zero_i128();
	} else {
		ctx.v62.v128 = simd::alignr_i8(simd::zero_i128(), ctx.v62.v128, 16 - shift);
	}
	// vmsum4fp128 v52,v57,v61
	_mm_store_ps(ctx.v52.f32, _mm_dp_ps(_mm_load_ps(ctx.v57.f32), _mm_load_ps(ctx.v61.f32), 0xFF));
	// vmulfp128 v51,v57,v57
	_mm_store_ps(ctx.v51.f32, _mm_mul_ps(_mm_load_ps(ctx.v57.f32), _mm_load_ps(ctx.v57.f32)));
	// vmsum4fp128 v50,v57,v57
	_mm_store_ps(ctx.v50.f32, _mm_dp_ps(_mm_load_ps(ctx.v57.f32), _mm_load_ps(ctx.v57.f32), 0xFF));
	// vmulfp128 v48,v56,v56
	_mm_store_ps(ctx.v48.f32, _mm_mul_ps(_mm_load_ps(ctx.v56.f32), _mm_load_ps(ctx.v56.f32)));
	// vmsum4fp128 v49,v56,v61
	_mm_store_ps(ctx.v49.f32, _mm_dp_ps(_mm_load_ps(ctx.v56.f32), _mm_load_ps(ctx.v61.f32), 0xFF));
	// vslo128 v57,v57,v127
	int shift = simd::extract_u8(ctx.v127.v128, 15) & 0x1F;
	if (shift >= 16) {
		ctx.v57.v128 = simd::zero_i128();
	} else {
		ctx.v57.v128 = simd::alignr_i8(simd::zero_i128(), ctx.v57.v128, 16 - shift);
	}
	// vmsum4fp128 v47,v56,v56
	_mm_store_ps(ctx.v47.f32, _mm_dp_ps(_mm_load_ps(ctx.v56.f32), _mm_load_ps(ctx.v56.f32), 0xFF));
	// vslo128 v46,v62,v127
	int shift = simd::extract_u8(ctx.v127.v128, 15) & 0x1F;
	if (shift >= 16) {
		ctx.v46.v128 = simd::zero_i128();
	} else {
		ctx.v46.v128 = simd::alignr_i8(simd::zero_i128(), ctx.v62.v128, 16 - shift);
	}
	// vmsum4fp128 v45,v63,v63
	_mm_store_ps(ctx.v45.f32, _mm_dp_ps(_mm_load_ps(ctx.v63.f32), _mm_load_ps(ctx.v63.f32), 0xFF));
	// vmulfp128 v44,v63,v63
	_mm_store_ps(ctx.v44.f32, _mm_mul_ps(_mm_load_ps(ctx.v63.f32), _mm_load_ps(ctx.v63.f32)));
	// vslo128 v56,v56,v127
	int shift = simd::extract_u8(ctx.v127.v128, 15) & 0x1F;
	if (shift >= 16) {
		ctx.v56.v128 = simd::zero_i128();
	} else {
		ctx.v56.v128 = simd::alignr_i8(simd::zero_i128(), ctx.v56.v128, 16 - shift);
	}
	// vmsum4fp128 v61,v63,v61
	_mm_store_ps(ctx.v61.f32, _mm_dp_ps(_mm_load_ps(ctx.v63.f32), _mm_load_ps(ctx.v61.f32), 0xFF));
	// vslo128 v43,v57,v127
	int shift = simd::extract_u8(ctx.v127.v128, 15) & 0x1F;
	if (shift >= 16) {
		ctx.v43.v128 = simd::zero_i128();
	} else {
		ctx.v43.v128 = simd::alignr_i8(simd::zero_i128(), ctx.v57.v128, 16 - shift);
	}
	// vslo128 v42,v46,v127
	int shift = simd::extract_u8(ctx.v127.v128, 15) & 0x1F;
	if (shift >= 16) {
		ctx.v42.v128 = simd::zero_i128();
	} else {
		ctx.v42.v128 = simd::alignr_i8(simd::zero_i128(), ctx.v46.v128, 16 - shift);
	}
	// vslo128 v63,v63,v127
	int shift = simd::extract_u8(ctx.v127.v128, 15) & 0x1F;
	if (shift >= 16) {
		ctx.v63.v128 = simd::zero_i128();
	} else {
		ctx.v63.v128 = simd::alignr_i8(simd::zero_i128(), ctx.v63.v128, 16 - shift);
	}
	// vslo128 v41,v56,v127
	int shift = simd::extract_u8(ctx.v127.v128, 15) & 0x1F;
	if (shift >= 16) {
		ctx.v41.v128 = simd::zero_i128();
	} else {
		ctx.v41.v128 = simd::alignr_i8(simd::zero_i128(), ctx.v56.v128, 16 - shift);
	}
	// vslo128 v54,v54,v127
	int shift = simd::extract_u8(ctx.v127.v128, 15) & 0x1F;
	if (shift >= 16) {
		ctx.v54.v128 = simd::zero_i128();
	} else {
		ctx.v54.v128 = simd::alignr_i8(simd::zero_i128(), ctx.v54.v128, 16 - shift);
	}
	// vslo128 v40,v43,v127
	int shift = simd::extract_u8(ctx.v127.v128, 15) & 0x1F;
	if (shift >= 16) {
		ctx.v40.v128 = simd::zero_i128();
	} else {
		ctx.v40.v128 = simd::alignr_i8(simd::zero_i128(), ctx.v43.v128, 16 - shift);
	}
	// vslo128 v51,v51,v127
	int shift = simd::extract_u8(ctx.v127.v128, 15) & 0x1F;
	if (shift >= 16) {
		ctx.v51.v128 = simd::zero_i128();
	} else {
		ctx.v51.v128 = simd::alignr_i8(simd::zero_i128(), ctx.v51.v128, 16 - shift);
	}
	// vslo128 v39,v63,v127
	int shift = simd::extract_u8(ctx.v127.v128, 15) & 0x1F;
	if (shift >= 16) {
		ctx.v39.v128 = simd::zero_i128();
	} else {
		ctx.v39.v128 = simd::alignr_i8(simd::zero_i128(), ctx.v63.v128, 16 - shift);
	}
	// vaddfp128 v59,v59,v55
	_mm_store_ps(ctx.v59.f32, _mm_add_ps(_mm_load_ps(ctx.v59.f32), _mm_load_ps(ctx.v55.f32)));
	// vslo128 v55,v54,v127
	int shift = simd::extract_u8(ctx.v127.v128, 15) & 0x1F;
	if (shift >= 16) {
		ctx.v55.v128 = simd::zero_i128();
	} else {
		ctx.v55.v128 = simd::alignr_i8(simd::zero_i128(), ctx.v54.v128, 16 - shift);
	}
	// vaddfp128 v60,v60,v53
	_mm_store_ps(ctx.v60.f32, _mm_add_ps(_mm_load_ps(ctx.v60.f32), _mm_load_ps(ctx.v53.f32)));
	// vslo128 v53,v48,v127
	int shift = simd::extract_u8(ctx.v127.v128, 15) & 0x1F;
	if (shift >= 16) {
		ctx.v53.v128 = simd::zero_i128();
	} else {
		ctx.v53.v128 = simd::alignr_i8(simd::zero_i128(), ctx.v48.v128, 16 - shift);
	}
	// vslo128 v48,v51,v127
	int shift = simd::extract_u8(ctx.v127.v128, 15) & 0x1F;
	if (shift >= 16) {
		ctx.v48.v128 = simd::zero_i128();
	} else {
		ctx.v48.v128 = simd::alignr_i8(simd::zero_i128(), ctx.v51.v128, 16 - shift);
	}
	// vslo128 v44,v44,v127
	int shift = simd::extract_u8(ctx.v127.v128, 15) & 0x1F;
	if (shift >= 16) {
		ctx.v44.v128 = simd::zero_i128();
	} else {
		ctx.v44.v128 = simd::alignr_i8(simd::zero_i128(), ctx.v44.v128, 16 - shift);
	}
	// vslo128 v38,v55,v127
	int shift = simd::extract_u8(ctx.v127.v128, 15) & 0x1F;
	if (shift >= 16) {
		ctx.v38.v128 = simd::zero_i128();
	} else {
		ctx.v38.v128 = simd::alignr_i8(simd::zero_i128(), ctx.v55.v128, 16 - shift);
	}
	// vslo128 v37,v53,v127
	int shift = simd::extract_u8(ctx.v127.v128, 15) & 0x1F;
	if (shift >= 16) {
		ctx.v37.v128 = simd::zero_i128();
	} else {
		ctx.v37.v128 = simd::alignr_i8(simd::zero_i128(), ctx.v53.v128, 16 - shift);
	}
	// vslo128 v36,v48,v127
	int shift = simd::extract_u8(ctx.v127.v128, 15) & 0x1F;
	if (shift >= 16) {
		ctx.v36.v128 = simd::zero_i128();
	} else {
		ctx.v36.v128 = simd::alignr_i8(simd::zero_i128(), ctx.v48.v128, 16 - shift);
	}
	// vslo128 v35,v44,v127
	int shift = simd::extract_u8(ctx.v127.v128, 15) & 0x1F;
	if (shift >= 16) {
		ctx.v35.v128 = simd::zero_i128();
	} else {
		ctx.v35.v128 = simd::alignr_i8(simd::zero_i128(), ctx.v44.v128, 16 - shift);
	}
	// vslo128 v34,v41,v127
	int shift = simd::extract_u8(ctx.v127.v128, 15) & 0x1F;
	if (shift >= 16) {
		ctx.v34.v128 = simd::zero_i128();
	} else {
		ctx.v34.v128 = simd::alignr_i8(simd::zero_i128(), ctx.v41.v128, 16 - shift);
	}
	// vslo128 v33,v37,v127
	int shift = simd::extract_u8(ctx.v127.v128, 15) & 0x1F;
	if (shift >= 16) {
		ctx.v33.v128 = simd::zero_i128();
	} else {
		ctx.v33.v128 = simd::alignr_i8(simd::zero_i128(), ctx.v37.v128, 16 - shift);
	}
	// vslo128 v32,v39,v127
	int shift = simd::extract_u8(ctx.v127.v128, 15) & 0x1F;
	if (shift >= 16) {
		ctx.v32.v128 = simd::zero_i128();
	} else {
		ctx.v32.v128 = simd::alignr_i8(simd::zero_i128(), ctx.v39.v128, 16 - shift);
	}
	// vslo128 v0,v35,v127
	int shift = simd::extract_u8(ctx.v127.v128, 15) & 0x1F;
	if (shift >= 16) {
		ctx.v0.v128 = simd::zero_i128();
	} else {
		ctx.v0.v128 = simd::alignr_i8(simd::zero_i128(), ctx.v35.v128, 16 - shift);
	}
	// vaddfp128 v52,v59,v52
	_mm_store_ps(ctx.v52.f32, _mm_add_ps(_mm_load_ps(ctx.v59.f32), _mm_load_ps(ctx.v52.f32)));
	// vaddfp128 v50,v60,v50
	_mm_store_ps(ctx.v50.f32, _mm_add_ps(_mm_load_ps(ctx.v60.f32), _mm_load_ps(ctx.v50.f32)));
	// vsubfp128 v60,v60,v54
	_mm_store_ps(ctx.v60.f32, _mm_sub_ps(_mm_load_ps(ctx.v60.f32), _mm_load_ps(ctx.v54.f32)));
	// vsubfp128 v62,v59,v62
	_mm_store_ps(ctx.v62.f32, _mm_sub_ps(_mm_load_ps(ctx.v59.f32), _mm_load_ps(ctx.v62.f32)));
	// vaddfp128 v59,v52,v49
	_mm_store_ps(ctx.v59.f32, _mm_add_ps(_mm_load_ps(ctx.v52.f32), _mm_load_ps(ctx.v49.f32)));
	// vaddfp128 v54,v50,v47
	_mm_store_ps(ctx.v54.f32, _mm_add_ps(_mm_load_ps(ctx.v50.f32), _mm_load_ps(ctx.v47.f32)));
	// vsubfp128 v60,v60,v55
	_mm_store_ps(ctx.v60.f32, _mm_sub_ps(_mm_load_ps(ctx.v60.f32), _mm_load_ps(ctx.v55.f32)));
	// vsubfp128 v57,v52,v57
	_mm_store_ps(ctx.v57.f32, _mm_sub_ps(_mm_load_ps(ctx.v52.f32), _mm_load_ps(ctx.v57.f32)));
	// vsubfp128 v62,v62,v46
	_mm_store_ps(ctx.v62.f32, _mm_sub_ps(_mm_load_ps(ctx.v62.f32), _mm_load_ps(ctx.v46.f32)));
	// vsubfp128 v55,v50,v51
	_mm_store_ps(ctx.v55.f32, _mm_sub_ps(_mm_load_ps(ctx.v50.f32), _mm_load_ps(ctx.v51.f32)));
	// vsubfp128 v56,v59,v56
	_mm_store_ps(ctx.v56.f32, _mm_sub_ps(_mm_load_ps(ctx.v59.f32), _mm_load_ps(ctx.v56.f32)));
	// vsubfp128 v53,v54,v53
	_mm_store_ps(ctx.v53.f32, _mm_sub_ps(_mm_load_ps(ctx.v54.f32), _mm_load_ps(ctx.v53.f32)));
	// vsubfp128 v52,v60,v38
	_mm_store_ps(ctx.v52.f32, _mm_sub_ps(_mm_load_ps(ctx.v60.f32), _mm_load_ps(ctx.v38.f32)));
	// vaddfp128 v60,v54,v45
	_mm_store_ps(ctx.v60.f32, _mm_add_ps(_mm_load_ps(ctx.v54.f32), _mm_load_ps(ctx.v45.f32)));
	// vsubfp128 v62,v62,v42
	_mm_store_ps(ctx.v62.f32, _mm_sub_ps(_mm_load_ps(ctx.v62.f32), _mm_load_ps(ctx.v42.f32)));
	// vsubfp128 v55,v55,v48
	_mm_store_ps(ctx.v55.f32, _mm_sub_ps(_mm_load_ps(ctx.v55.f32), _mm_load_ps(ctx.v48.f32)));
	// vsubfp128 v57,v57,v43
	_mm_store_ps(ctx.v57.f32, _mm_sub_ps(_mm_load_ps(ctx.v57.f32), _mm_load_ps(ctx.v43.f32)));
	// vaddfp128 v59,v59,v61
	_mm_store_ps(ctx.v59.f32, _mm_add_ps(_mm_load_ps(ctx.v59.f32), _mm_load_ps(ctx.v61.f32)));
	// vsubfp128 v61,v56,v41
	_mm_store_ps(ctx.v61.f32, _mm_sub_ps(_mm_load_ps(ctx.v56.f32), _mm_load_ps(ctx.v41.f32)));
	// vsubfp128 v56,v53,v37
	_mm_store_ps(ctx.v56.f32, _mm_sub_ps(_mm_load_ps(ctx.v53.f32), _mm_load_ps(ctx.v37.f32)));
	// vsubfp128 v53,v60,v44
	_mm_store_ps(ctx.v53.f32, _mm_sub_ps(_mm_load_ps(ctx.v60.f32), _mm_load_ps(ctx.v44.f32)));
	// vmrghw128 v54,v62,v52
	_mm_store_si128((__m128i*)ctx.v54.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v52.u32), _mm_load_si128((__m128i*)ctx.v62.u32)));
	// vsubfp128 v55,v55,v36
	_mm_store_ps(ctx.v55.f32, _mm_sub_ps(_mm_load_ps(ctx.v55.f32), _mm_load_ps(ctx.v36.f32)));
	// vsubfp128 v57,v57,v40
	_mm_store_ps(ctx.v57.f32, _mm_sub_ps(_mm_load_ps(ctx.v57.f32), _mm_load_ps(ctx.v40.f32)));
	// vsubfp128 v63,v59,v63
	_mm_store_ps(ctx.v63.f32, _mm_sub_ps(_mm_load_ps(ctx.v59.f32), _mm_load_ps(ctx.v63.f32)));
	// lvrx128 v50,r11,r30
	temp.u32 = ctx.r11.u32 + ctx.r30.u32;
	_mm_store_si128((__m128i*)ctx.v50.u8, temp.u32 & 0xF ? _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : _mm_setzero_si128());
	// vsubfp128 v53,v53,v35
	_mm_store_ps(ctx.v53.f32, _mm_sub_ps(_mm_load_ps(ctx.v53.f32), _mm_load_ps(ctx.v35.f32)));
	// lvlx128 v51,r0,r30
	temp.u32 = ctx.r30.u32;
	_mm_store_si128((__m128i*)ctx.v51.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvrx128 v49,r5,r30
	temp.u32 = ctx.r5.u32 + ctx.r30.u32;
	_mm_store_si128((__m128i*)ctx.v49.u8, temp.u32 & 0xF ? _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : _mm_setzero_si128());
	// vor128 v51,v51,v50
	_mm_store_si128((__m128i*)ctx.v51.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v51.u8), _mm_load_si128((__m128i*)ctx.v50.u8)));
	// lvlx128 v48,r11,r30
	temp.u32 = ctx.r11.u32 + ctx.r30.u32;
	_mm_store_si128((__m128i*)ctx.v48.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vmrglw128 v62,v62,v52
	_mm_store_si128((__m128i*)ctx.v62.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)ctx.v52.u32), _mm_load_si128((__m128i*)ctx.v62.u32)));
	// vor128 v52,v48,v49
	_mm_store_si128((__m128i*)ctx.v52.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v48.u8), _mm_load_si128((__m128i*)ctx.v49.u8)));
	// vsubfp128 v56,v56,v33
	_mm_store_ps(ctx.v56.f32, _mm_sub_ps(_mm_load_ps(ctx.v56.f32), _mm_load_ps(ctx.v33.f32)));
	// vsubfp128 v61,v61,v34
	_mm_store_ps(ctx.v61.f32, _mm_sub_ps(_mm_load_ps(ctx.v61.f32), _mm_load_ps(ctx.v34.f32)));
	// lvlx128 v47,r5,r30
	temp.u32 = ctx.r5.u32 + ctx.r30.u32;
	_mm_store_si128((__m128i*)ctx.v47.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vaddfp128 v54,v51,v54
	_mm_store_ps(ctx.v54.f32, _mm_add_ps(_mm_load_ps(ctx.v51.f32), _mm_load_ps(ctx.v54.f32)));
	// lvlx128 v48,r6,r30
	temp.u32 = ctx.r6.u32 + ctx.r30.u32;
	_mm_store_si128((__m128i*)ctx.v48.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvrx128 v50,r6,r30
	temp.u32 = ctx.r6.u32 + ctx.r30.u32;
	_mm_store_si128((__m128i*)ctx.v50.u8, temp.u32 & 0xF ? _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : _mm_setzero_si128());
	// vmrghw128 v46,v57,v55
	_mm_store_si128((__m128i*)ctx.v46.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v55.u32), _mm_load_si128((__m128i*)ctx.v57.u32)));
	// vaddfp128 v62,v52,v62
	_mm_store_ps(ctx.v62.f32, _mm_add_ps(_mm_load_ps(ctx.v52.f32), _mm_load_ps(ctx.v62.f32)));
	// lvrx128 v49,r7,r30
	temp.u32 = ctx.r7.u32 + ctx.r30.u32;
	_mm_store_si128((__m128i*)ctx.v49.u8, temp.u32 & 0xF ? _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : _mm_setzero_si128());
	// vor128 v50,v47,v50
	_mm_store_si128((__m128i*)ctx.v50.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v47.u8), _mm_load_si128((__m128i*)ctx.v50.u8)));
	// vmrglw128 v57,v57,v55
	_mm_store_si128((__m128i*)ctx.v57.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)ctx.v55.u32), _mm_load_si128((__m128i*)ctx.v57.u32)));
	// vor128 v49,v48,v49
	_mm_store_si128((__m128i*)ctx.v49.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v48.u8), _mm_load_si128((__m128i*)ctx.v49.u8)));
	// lvrx128 v51,r8,r30
	temp.u32 = ctx.r8.u32 + ctx.r30.u32;
	_mm_store_si128((__m128i*)ctx.v51.u8, temp.u32 & 0xF ? _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : _mm_setzero_si128());
	// lvlx128 v55,r7,r30
	temp.u32 = ctx.r7.u32 + ctx.r30.u32;
	_mm_store_si128((__m128i*)ctx.v55.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r25,r25,16
	ctx.r25.s64 = ctx.r25.s64 + 16;
	// vsubfp128 v63,v63,v39
	_mm_store_ps(ctx.v63.f32, _mm_sub_ps(_mm_load_ps(ctx.v63.f32), _mm_load_ps(ctx.v39.f32)));
	// vor128 v55,v55,v51
	_mm_store_si128((__m128i*)ctx.v55.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v55.u8), _mm_load_si128((__m128i*)ctx.v51.u8)));
	// vsubfp128 v53,v53,v0
	_mm_store_ps(ctx.v53.f32, _mm_sub_ps(_mm_load_ps(ctx.v53.f32), _mm_load_ps(ctx.v0.f32)));
	// lvrx128 v52,r9,r30
	temp.u32 = ctx.r9.u32 + ctx.r30.u32;
	_mm_store_si128((__m128i*)ctx.v52.u8, temp.u32 & 0xF ? _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : _mm_setzero_si128());
	// vaddfp128 v51,v50,v46
	_mm_store_ps(ctx.v51.f32, _mm_add_ps(_mm_load_ps(ctx.v50.f32), _mm_load_ps(ctx.v46.f32)));
	// lvlx128 v48,r8,r30
	temp.u32 = ctx.r8.u32 + ctx.r30.u32;
	_mm_store_si128((__m128i*)ctx.v48.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vaddfp128 v57,v49,v57
	_mm_store_ps(ctx.v57.f32, _mm_add_ps(_mm_load_ps(ctx.v49.f32), _mm_load_ps(ctx.v57.f32)));
	// lvrx128 v50,r10,r30
	temp.u32 = ctx.r10.u32 + ctx.r30.u32;
	_mm_store_si128((__m128i*)ctx.v50.u8, temp.u32 & 0xF ? _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : _mm_setzero_si128());
	// lvlx128 v46,r9,r30
	temp.u32 = ctx.r9.u32 + ctx.r30.u32;
	_mm_store_si128((__m128i*)ctx.v46.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vor128 v52,v48,v52
	_mm_store_si128((__m128i*)ctx.v52.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v48.u8), _mm_load_si128((__m128i*)ctx.v52.u8)));
	// vmrghw128 v47,v61,v56
	_mm_store_si128((__m128i*)ctx.v47.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v56.u32), _mm_load_si128((__m128i*)ctx.v61.u32)));
	// lvlx128 v49,r10,r30
	temp.u32 = ctx.r10.u32 + ctx.r30.u32;
	_mm_store_si128((__m128i*)ctx.v49.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vmrglw128 v61,v61,v56
	_mm_store_si128((__m128i*)ctx.v61.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)ctx.v56.u32), _mm_load_si128((__m128i*)ctx.v61.u32)));
	// lvrx128 v56,r24,r30
	temp.u32 = ctx.r24.u32 + ctx.r30.u32;
	_mm_store_si128((__m128i*)ctx.v56.u8, temp.u32 & 0xF ? _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : _mm_setzero_si128());
	// stvlx128 v54,r0,r31
	ea = ctx.r31.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v54.u8[15 - i]);
	// vor128 v50,v46,v50
	_mm_store_si128((__m128i*)ctx.v50.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v46.u8), _mm_load_si128((__m128i*)ctx.v50.u8)));
	// stvrx128 v54,r31,r11
	ea = ctx.r31.u32 + ctx.r11.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		PPC_STORE_U8(ea - i - 1, ctx.v54.u8[i]);
	// vor128 v56,v49,v56
	_mm_store_si128((__m128i*)ctx.v56.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v49.u8), _mm_load_si128((__m128i*)ctx.v56.u8)));
	// stvlx128 v62,r31,r11
	ea = ctx.r31.u32 + ctx.r11.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v62.u8[15 - i]);
	// vaddfp128 v55,v55,v47
	_mm_store_ps(ctx.v55.f32, _mm_add_ps(_mm_load_ps(ctx.v55.f32), _mm_load_ps(ctx.v47.f32)));
	// stvrx128 v62,r31,r5
	ea = ctx.r31.u32 + ctx.r5.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		PPC_STORE_U8(ea - i - 1, ctx.v62.u8[i]);
	// vaddfp128 v61,v52,v61
	_mm_store_ps(ctx.v61.f32, _mm_add_ps(_mm_load_ps(ctx.v52.f32), _mm_load_ps(ctx.v61.f32)));
	// li r24,128
	ctx.r24.s64 = 128;
	// vsubfp128 v63,v63,v32
	_mm_store_ps(ctx.v63.f32, _mm_sub_ps(_mm_load_ps(ctx.v63.f32), _mm_load_ps(ctx.v32.f32)));
	// addi r30,r30,128
	ctx.r30.s64 = ctx.r30.s64 + 128;
	// stvlx128 v51,r31,r5
	ea = ctx.r31.u32 + ctx.r5.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v51.u8[15 - i]);
	// stvrx128 v51,r31,r6
	ea = ctx.r31.u32 + ctx.r6.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		PPC_STORE_U8(ea - i - 1, ctx.v51.u8[i]);
	// stvlx128 v57,r31,r6
	ea = ctx.r31.u32 + ctx.r6.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v57.u8[15 - i]);
	// stvrx128 v57,r31,r7
	ea = ctx.r31.u32 + ctx.r7.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		PPC_STORE_U8(ea - i - 1, ctx.v57.u8[i]);
	// stvlx128 v55,r31,r7
	ea = ctx.r31.u32 + ctx.r7.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v55.u8[15 - i]);
	// stvrx128 v55,r31,r8
	ea = ctx.r31.u32 + ctx.r8.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		PPC_STORE_U8(ea - i - 1, ctx.v55.u8[i]);
	// stvlx128 v61,r31,r8
	ea = ctx.r31.u32 + ctx.r8.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v61.u8[15 - i]);
	// vmrghw128 v62,v63,v53
	_mm_store_si128((__m128i*)ctx.v62.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v53.u32), _mm_load_si128((__m128i*)ctx.v63.u32)));
	// stvrx128 v61,r31,r9
	ea = ctx.r31.u32 + ctx.r9.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		PPC_STORE_U8(ea - i - 1, ctx.v61.u8[i]);
	// vmrglw128 v63,v63,v53
	_mm_store_si128((__m128i*)ctx.v63.u32, _mm_unpacklo_epi32(_mm_load_si128((__m128i*)ctx.v53.u32), _mm_load_si128((__m128i*)ctx.v63.u32)));
	// vaddfp128 v62,v50,v62
	_mm_store_ps(ctx.v62.f32, _mm_add_ps(_mm_load_ps(ctx.v50.f32), _mm_load_ps(ctx.v62.f32)));
	// vaddfp128 v63,v56,v63
	_mm_store_ps(ctx.v63.f32, _mm_add_ps(_mm_load_ps(ctx.v56.f32), _mm_load_ps(ctx.v63.f32)));
	// stvlx128 v62,r31,r9
	ea = ctx.r31.u32 + ctx.r9.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v62.u8[15 - i]);
	// stvrx128 v62,r31,r10
	ea = ctx.r31.u32 + ctx.r10.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		PPC_STORE_U8(ea - i - 1, ctx.v62.u8[i]);
	// stvlx128 v63,r31,r10
	ea = ctx.r31.u32 + ctx.r10.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v63.u8[15 - i]);
	// stvrx128 v63,r31,r24
	ea = ctx.r31.u32 + ctx.r24.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		PPC_STORE_U8(ea - i - 1, ctx.v63.u8[i]);
	// addi r31,r31,128
	ctx.r31.s64 = ctx.r31.s64 + 128;
	// bdnz 0x82a2df48
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82A2DF48;
	// lwz r23,100(r1)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r22,88(r1)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r21,104(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r20,108(r1)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
loc_82A2E1A8:
	// addi r27,r1,84
	ctx.r27.s64 = ctx.r1.s64 + 84;
	// addi r26,r1,80
	ctx.r26.s64 = ctx.r1.s64 + 80;
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, 0, ctx.xer);
	// stvewx128 v59,r0,r27
	ea = (ctx.r27.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v59.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v60,r0,r26
	ea = (ctx.r26.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v60.u32[3 - ((ea & 0xF) >> 2)]);
	// beq cr6,0x82a2e218
	if (ctx.cr6.eq) goto loc_82A2E218;
	// lfs f0,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
	// mtctr r21
	ctx.ctr.u64 = ctx.r21.u64;
	// lfs f13,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
loc_82A2E1CC:
	// lbz r27,0(r25)
	ctx.r27.u64 = PPC_LOAD_U8(ctx.r25.u32 + 0);
	// lfs f12,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// std r27,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r27.u64);
	// lfd f11,112(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f11,f11
	ctx.f11.f64 = double(ctx.f11.s64);
	// frsp f11,f11
	ctx.f11.f64 = double(float(ctx.f11.f64));
	// fadds f0,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 + ctx.f0.f64));
	// fmadds f13,f11,f11,f13
	ctx.f13.f64 = double(float(ctx.f11.f64 * ctx.f11.f64 + ctx.f13.f64));
	// fadds f12,f12,f0
	ctx.f12.f64 = double(float(ctx.f12.f64 + ctx.f0.f64));
	// stfs f12,0(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// lfs f12,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fadds f12,f12,f13
	ctx.f12.f64 = double(float(ctx.f12.f64 + ctx.f13.f64));
	// stfs f12,4(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// bdnz 0x82a2e1cc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82A2E1CC;
	// stfs f13,80(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
loc_82A2E218:
	// lwz r27,0(r23)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// addi r22,r22,1
	ctx.r22.s64 = ctx.r22.s64 + 1;
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// stw r22,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r22.u32);
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// cmplw cr6,r22,r27
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, ctx.r27.u32, ctx.xer);
	// blt cr6,0x82a2df34
	if (ctx.cr6.lt) goto loc_82A2DF34;
loc_82A2E234:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82a2e244
	goto loc_82A2E244;
loc_82A2E23C:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,65535
	ctx.r3.u64 = ctx.r3.u64 | 65535;
loc_82A2E244:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// li r0,-128
	ctx.r0.s64 = -128;
	// lvx128 v127,r1,r0
	simd::store_shuffled(ctx.v127, simd::load_and_shuffle(base + ((ctx.r1.u32 + ctx.r0.u32) & ~0xF), VectorMaskL));
	// b 0x82fa76a8
	__restgprlr_20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A2E254"))) PPC_WEAK_FUNC(sub_82A2E254);
PPC_FUNC_IMPL(__imp__sub_82A2E254) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A2E258"))) PPC_WEAK_FUNC(sub_82A2E258);
PPC_FUNC_IMPL(__imp__sub_82A2E258) {
	PPC_FUNC_PROLOGUE();
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// stw r11,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r11.u32);
	// stw r11,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r11.u32);
	// stw r11,16(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A2E278"))) PPC_WEAK_FUNC(sub_82A2E278);
PPC_FUNC_IMPL(__imp__sub_82A2E278) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	PPCVRegister vTemp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7640
	ctx.lr = 0x82A2E280;
	__savegprlr_14(ctx, base);
	// stwu r1,-528(r1)
	ea = -528 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r4,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r4.u32);
	// lis r16,-32768
	ctx.r16.s64 = -2147483648;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r5,564(r1)
	PPC_STORE_U32(ctx.r1.u32 + 564, ctx.r5.u32);
	// ori r16,r16,16389
	ctx.r16.u64 = ctx.r16.u64 | 16389;
	// stw r7,580(r1)
	PPC_STORE_U32(ctx.r1.u32 + 580, ctx.r7.u32);
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r17,r5
	ctx.r17.u64 = ctx.r5.u64;
	// stw r16,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r16.u32);
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// addi r30,r3,12
	ctx.r30.s64 = ctx.r3.s64 + 12;
	// bl 0x82a16a88
	ctx.lr = 0x82A2E2B8;
	sub_82A16A88(ctx, base);
	// lfs f0,48(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,12(r29)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + 12, temp.u32);
	// lwz r10,4(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// std r11,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r11.u64);
	// lis r8,-32248
	ctx.r8.s64 = -2113404928;
	// lis r9,-31962
	ctx.r9.s64 = -2094661632;
	// lfd f13,112(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// addi r6,r8,-13456
	ctx.r6.s64 = ctx.r8.s64 + -13456;
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// addi r9,r9,-30736
	ctx.r9.s64 = ctx.r9.s64 + -30736;
	// li r4,-16
	ctx.r4.s64 = -16;
	// addi r19,r10,-1
	ctx.r19.s64 = ctx.r10.s64 + -1;
	// addi r18,r11,-1
	ctx.r18.s64 = ctx.r11.s64 + -1;
	// stw r19,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r19.u32);
	// lis r3,-31975
	ctx.r3.s64 = -2095513600;
	// stw r18,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r18.u32);
	// lvx128 v46,r0,r9
	simd::store_shuffled(ctx.v46, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// stw r18,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r18.u32);
	// lvx128 v62,r6,r4
	simd::store_shuffled(ctx.v62, simd::load_and_shuffle(base + ((ctx.r6.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// stw r19,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r19.u32);
	// lvx128 v60,r0,r7
	simd::store_shuffled(ctx.v60, simd::load_and_shuffle(base + ((ctx.r7.u32) & ~0xF), VectorMaskL));
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// lvx128 v37,r0,r6
	simd::store_shuffled(ctx.v37, simd::load_and_shuffle(base + ((ctx.r6.u32) & ~0xF), VectorMaskL));
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r10,r3,-11200
	ctx.r10.s64 = ctx.r3.s64 + -11200;
	// stw r9,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r9.u32);
	// stw r19,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r19.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// stw r18,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r18.u32);
	// lfs f0,-27104(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -27104);
	ctx.f0.f64 = double(temp.f32);
	// lvx128 v63,r0,r10
	simd::store_shuffled(ctx.v63, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// vor128 v34,v63,v63
	_mm_store_si128((__m128i*)ctx.v34.u8, _mm_load_si128((__m128i*)ctx.v63.u8));
	// fadds f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 + ctx.f0.f64));
	// stfs f10,128(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stfs f10,132(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 132, temp.u32);
	// vor128 v35,v62,v62
	_mm_store_si128((__m128i*)ctx.v35.u8, _mm_load_si128((__m128i*)ctx.v62.u8));
	// stfs f10,136(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 136, temp.u32);
	// vcsxwfp128 v33,v60,0
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v33.f32, _mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v60.u32)));
	// stfs f10,140(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + 140, temp.u32);
	// vor128 v63,v63,v63
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_load_si128((__m128i*)ctx.v63.u8));
	// vor128 v36,v46,v46
	_mm_store_si128((__m128i*)ctx.v36.u8, _mm_load_si128((__m128i*)ctx.v46.u8));
	// beq cr6,0x82a2e378
	if (ctx.cr6.eq) goto loc_82A2E378;
	// mtctr r31
	ctx.ctr.u64 = ctx.r31.u64;
loc_82A2E370:
	// vmulfp128 v36,v36,v62
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v36.f32, _mm_mul_ps(_mm_load_ps(ctx.v36.f32), _mm_load_ps(ctx.v62.f32)));
	// bdnz 0x82a2e370
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82A2E370;
loc_82A2E378:
	// vmulfp128 v59,v63,v36
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v59.f32, _mm_mul_ps(_mm_load_ps(ctx.v63.f32), _mm_load_ps(ctx.v36.f32)));
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r31.u32);
	// cmplw cr6,r31,r28
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r28.u32, ctx.xer);
	// vrfin128 v47,v59
	_mm_store_ps(ctx.v47.f32, _mm_round_ps(_mm_load_ps(ctx.v59.f32), _MM_FROUND_TO_NEAREST_INT | _MM_FROUND_NO_EXC));
	// bgt cr6,0x82a2e9e8
	if (ctx.cr6.gt) goto loc_82A2E9E8;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// mulli r10,r31,11184
	ctx.r10.s64 = ctx.r31.s64 * 11184;
	// addi r11,r11,3040
	ctx.r11.s64 = ctx.r11.s64 + 3040;
	// lis r25,-31962
	ctx.r25.s64 = -2094661632;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lis r11,-31962
	ctx.r11.s64 = -2094661632;
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// lis r10,-31962
	ctx.r10.s64 = -2094661632;
	// addi r28,r11,-10336
	ctx.r28.s64 = ctx.r11.s64 + -10336;
	// addi r11,r25,-10480
	ctx.r11.s64 = ctx.r25.s64 + -10480;
	// addi r25,r1,272
	ctx.r25.s64 = ctx.r1.s64 + 272;
	// lis r24,-31962
	ctx.r24.s64 = -2094661632;
	// stw r25,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r25.u32);
	// addi r27,r10,-10352
	ctx.r27.s64 = ctx.r10.s64 + -10352;
	// addi r10,r24,-10464
	ctx.r10.s64 = ctx.r24.s64 + -10464;
	// lvx128 v58,r0,r28
	simd::store_shuffled(ctx.v58, simd::load_and_shuffle(base + ((ctx.r28.u32) & ~0xF), VectorMaskL));
	// lis r9,-31962
	ctx.r9.s64 = -2094661632;
	// lvx128 v57,r0,r11
	simd::store_shuffled(ctx.v57, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// lis r22,-31962
	ctx.r22.s64 = -2094661632;
	// addi r26,r9,-10368
	ctx.r26.s64 = ctx.r9.s64 + -10368;
	// addi r24,r1,304
	ctx.r24.s64 = ctx.r1.s64 + 304;
	// lvx128 v1,r0,r27
	simd::store_shuffled(ctx.v1, simd::load_and_shuffle(base + ((ctx.r27.u32) & ~0xF), VectorMaskL));
	// addi r9,r1,128
	ctx.r9.s64 = ctx.r1.s64 + 128;
	// lvx128 v56,r0,r10
	simd::store_shuffled(ctx.v56, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// lis r8,-31962
	ctx.r8.s64 = -2094661632;
	// stw r24,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r24.u32);
	// lis r7,-31962
	ctx.r7.s64 = -2094661632;
	// addi r10,r22,-10496
	ctx.r10.s64 = ctx.r22.s64 + -10496;
	// lvx128 v2,r0,r26
	simd::store_shuffled(ctx.v2, simd::load_and_shuffle(base + ((ctx.r26.u32) & ~0xF), VectorMaskL));
	// lis r23,-31962
	ctx.r23.s64 = -2094661632;
	// lis r20,-31962
	ctx.r20.s64 = -2094661632;
	// lvx128 v10,r0,r9
	simd::store_shuffled(ctx.v10, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// addi r25,r8,-10384
	ctx.r25.s64 = ctx.r8.s64 + -10384;
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r24,r7,-10304
	ctx.r24.s64 = ctx.r7.s64 + -10304;
	// stvx128 v56,r0,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v56.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// addi r8,r23,-10512
	ctx.r8.s64 = ctx.r23.s64 + -10512;
	// addi r7,r20,-10528
	ctx.r7.s64 = ctx.r20.s64 + -10528;
	// lvx128 v61,r0,r10
	simd::store_shuffled(ctx.v61, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// lis r6,-31962
	ctx.r6.s64 = -2094661632;
	// lvx128 v3,r0,r25
	simd::store_shuffled(ctx.v3, simd::load_and_shuffle(base + ((ctx.r25.u32) & ~0xF), VectorMaskL));
	// lis r4,-31962
	ctx.r4.s64 = -2094661632;
	// lvx128 v59,r0,r24
	simd::store_shuffled(ctx.v59, simd::load_and_shuffle(base + ((ctx.r24.u32) & ~0xF), VectorMaskL));
	// lis r5,-31962
	ctx.r5.s64 = -2094661632;
	// lis r3,-31962
	ctx.r3.s64 = -2094661632;
	// stvx128 v57,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v57.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lis r15,-31962
	ctx.r15.s64 = -2094661632;
	// lvx128 v57,r0,r8
	simd::store_shuffled(ctx.v57, simd::load_and_shuffle(base + ((ctx.r8.u32) & ~0xF), VectorMaskL));
	// lis r31,-31962
	ctx.r31.s64 = -2094661632;
	// lvx128 v39,r0,r7
	simd::store_shuffled(ctx.v39, simd::load_and_shuffle(base + ((ctx.r7.u32) & ~0xF), VectorMaskL));
	// lis r30,-31962
	ctx.r30.s64 = -2094661632;
	// addi r23,r6,-10400
	ctx.r23.s64 = ctx.r6.s64 + -10400;
	// addi r14,r1,256
	ctx.r14.s64 = ctx.r1.s64 + 256;
	// addi r21,r4,-10432
	ctx.r21.s64 = ctx.r4.s64 + -10432;
	// addi r22,r5,-10416
	ctx.r22.s64 = ctx.r5.s64 + -10416;
	// addi r3,r3,-10448
	ctx.r3.s64 = ctx.r3.s64 + -10448;
	// addi r6,r15,-10544
	ctx.r6.s64 = ctx.r15.s64 + -10544;
	// lvx128 v4,r0,r23
	simd::store_shuffled(ctx.v4, simd::load_and_shuffle(base + ((ctx.r23.u32) & ~0xF), VectorMaskL));
	// addi r31,r31,-10320
	ctx.r31.s64 = ctx.r31.s64 + -10320;
	// stvx128 v58,r0,r14
	_mm_store_si128((__m128i*)(base + ((ctx.r14.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v58.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r30,r30,-30752
	ctx.r30.s64 = ctx.r30.s64 + -30752;
	// lvx128 v6,r0,r21
	simd::store_shuffled(ctx.v6, simd::load_and_shuffle(base + ((ctx.r21.u32) & ~0xF), VectorMaskL));
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lvx128 v5,r0,r22
	simd::store_shuffled(ctx.v5, simd::load_and_shuffle(base + ((ctx.r22.u32) & ~0xF), VectorMaskL));
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lvx128 v7,r0,r3
	simd::store_shuffled(ctx.v7, simd::load_and_shuffle(base + ((ctx.r3.u32) & ~0xF), VectorMaskL));
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// lvx128 v40,r0,r6
	simd::store_shuffled(ctx.v40, simd::load_and_shuffle(base + ((ctx.r6.u32) & ~0xF), VectorMaskL));
	// lis r8,-32249
	ctx.r8.s64 = -2113470464;
	// lvx128 v51,r0,r31
	simd::store_shuffled(ctx.v51, simd::load_and_shuffle(base + ((ctx.r31.u32) & ~0xF), VectorMaskL));
	// addi r5,r11,2328
	ctx.r5.s64 = ctx.r11.s64 + 2328;
	// lvx128 v62,r0,r30
	simd::store_shuffled(ctx.v62, simd::load_and_shuffle(base + ((ctx.r30.u32) & ~0xF), VectorMaskL));
	// addi r7,r10,-472
	ctx.r7.s64 = ctx.r10.s64 + -472;
	// addi r20,r9,-22872
	ctx.r20.s64 = ctx.r9.s64 + -22872;
	// stw r5,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r5.u32);
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// addi r4,r8,28000
	ctx.r4.s64 = ctx.r8.s64 + 28000;
	// stw r20,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r20.u32);
	// b 0x82a2e4d4
	goto loc_82A2E4D4;
loc_82A2E4CC:
	// lwz r18,152(r1)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// lwz r19,160(r1)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
loc_82A2E4D4:
	// vcmpgtfp128. v55,v33,v47
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v55.f32, _mm_cmpgt_ps(_mm_load_ps(ctx.v33.f32), _mm_load_ps(ctx.v47.f32)));
	ctx.cr6.setFromMask(_mm_load_ps(ctx.v55.f32), 0xF);
	// bge cr6,0x82a2e9b4
	if (!ctx.cr6.lt) goto loc_82A2E9B4;
	// vcfpsxws128 v53,v47,0
	_mm_store_si128((__m128i*)ctx.v53.s32, _mm_vctsxs(_mm_load_ps(ctx.v47.f32)));
	// addi r11,r1,240
	ctx.r11.s64 = ctx.r1.s64 + 240;
	// vspltw128 v52,v47,3
	_mm_store_si128((__m128i*)ctx.v52.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v47.u32), 0x0));
	// addi r9,r1,272
	ctx.r9.s64 = ctx.r1.s64 + 272;
	// vspltw128 v54,v47,2
	_mm_store_si128((__m128i*)ctx.v54.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v47.u32), 0x55));
	// addi r8,r1,304
	ctx.r8.s64 = ctx.r1.s64 + 304;
	// vor128 v44,v7,v7
	_mm_store_si128((__m128i*)ctx.v44.u8, _mm_load_si128((__m128i*)ctx.v7.u8));
	// addi r6,r1,288
	ctx.r6.s64 = ctx.r1.s64 + 288;
	// vsldoi128 v50,v47,v62,4
	_mm_store_si128((__m128i*)ctx.v50.u8, _mm_alignr_epi8(_mm_load_si128((__m128i*)ctx.v47.u8), _mm_load_si128((__m128i*)ctx.v62.u8), 12));
	// addi r10,r1,320
	ctx.r10.s64 = ctx.r1.s64 + 320;
	// vmulfp128 v48,v52,v37
	_mm_store_ps(ctx.v48.f32, _mm_mul_ps(_mm_load_ps(ctx.v52.f32), _mm_load_ps(ctx.v37.f32)));
	// vmulfp128 v49,v54,v37
	_mm_store_ps(ctx.v49.f32, _mm_mul_ps(_mm_load_ps(ctx.v54.f32), _mm_load_ps(ctx.v37.f32)));
	// lvx128 v0,r0,r9
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// lvx128 v7,r0,r8
	simd::store_shuffled(ctx.v7, simd::load_and_shuffle(base + ((ctx.r8.u32) & ~0xF), VectorMaskL));
	// vperm128 v0,v47,v62,v0
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v47.u8), _mm_load_si128((__m128i*)ctx.v62.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vmulfp128 v45,v50,v47
	_mm_store_ps(ctx.v45.f32, _mm_mul_ps(_mm_load_ps(ctx.v50.f32), _mm_load_ps(ctx.v47.f32)));
	// vperm128 v13,v47,v62,v7
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v47.u8), _mm_load_si128((__m128i*)ctx.v62.u8), _mm_load_si128((__m128i*)ctx.v7.u8)));
	// stvx128 v53,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v53.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lwz r5,248(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 248);
	// lwz r11,252(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 252);
	// subf r9,r11,r19
	ctx.r9.s64 = ctx.r19.s64 - ctx.r11.s64;
	// vrfin128 v38,v48
	_mm_store_ps(ctx.v38.f32, _mm_round_ps(_mm_load_ps(ctx.v48.f32), _MM_FROUND_TO_NEAREST_INT | _MM_FROUND_NO_EXC));
	// addi r19,r1,336
	ctx.r19.s64 = ctx.r1.s64 + 336;
	// vrfin128 v41,v49
	_mm_store_ps(ctx.v41.f32, _mm_round_ps(_mm_load_ps(ctx.v49.f32), _MM_FROUND_TO_NEAREST_INT | _MM_FROUND_NO_EXC));
	// subf r8,r5,r18
	ctx.r8.s64 = ctx.r18.s64 - ctx.r5.s64;
	// vmaddfp v0,v10,v13,v0
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v10.f32), _mm_load_ps(ctx.v13.f32)), _mm_load_ps(ctx.v0.f32)));
	// vspltw128 v45,v45,2
	_mm_store_si128((__m128i*)ctx.v45.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v45.u32), 0x55));
	// stvx128 v44,r0,r19
	_mm_store_si128((__m128i*)(base + ((ctx.r19.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v44.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v7,r0,r19
	simd::store_shuffled(ctx.v7, simd::load_and_shuffle(base + ((ctx.r19.u32) & ~0xF), VectorMaskL));
	// vcfpsxws128 v63,v38,0
	_mm_store_si128((__m128i*)ctx.v63.s32, _mm_vctsxs(_mm_load_ps(ctx.v38.f32)));
	// vor128 v42,v38,v38
	_mm_store_si128((__m128i*)ctx.v42.u8, _mm_load_si128((__m128i*)ctx.v38.u8));
	// vcfpsxws128 v32,v41,0
	_mm_store_si128((__m128i*)ctx.v32.s32, _mm_vctsxs(_mm_load_ps(ctx.v41.f32)));
	// vor128 v44,v41,v41
	_mm_store_si128((__m128i*)ctx.v44.u8, _mm_load_si128((__m128i*)ctx.v41.u8));
	// vor128 v43,v0,v0
	_mm_store_si128((__m128i*)ctx.v43.u8, _mm_load_si128((__m128i*)ctx.v0.u8));
	// vmulfp128 v38,v38,v10
	_mm_store_ps(ctx.v38.f32, _mm_mul_ps(_mm_load_ps(ctx.v38.f32), _mm_load_ps(ctx.v10.f32)));
	// vor128 v41,v41,v41
	_mm_store_si128((__m128i*)ctx.v41.u8, _mm_load_si128((__m128i*)ctx.v41.u8));
	// vrlimi128 v42,v62,10,0
	_mm_store_ps(ctx.v42.f32, _mm_blend_ps(_mm_load_ps(ctx.v42.f32), _mm_permute_ps(_mm_load_ps(ctx.v62.f32), 228), 10));
	// vrlimi128 v44,v62,5,0
	_mm_store_ps(ctx.v44.f32, _mm_blend_ps(_mm_load_ps(ctx.v44.f32), _mm_permute_ps(_mm_load_ps(ctx.v62.f32), 228), 5));
	// stvx128 v63,r0,r6
	_mm_store_si128((__m128i*)(base + ((ctx.r6.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lwz r11,296(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 296);
	// divwu r11,r9,r11
	ctx.r11.u32 = ctx.r9.u32 / ctx.r11.u32;
	// stvx128 v32,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v32.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lwz r5,320(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 320);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// divwu r11,r8,r5
	ctx.r11.u32 = ctx.r8.u32 / ctx.r5.u32;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// stw r11,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r11.u32);
	// b 0x82a2e5a4
	goto loc_82A2E5A4;
loc_82A2E5A0:
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
loc_82A2E5A4:
	// vor128 v49,v47,v47
	_mm_store_si128((__m128i*)ctx.v49.u8, _mm_load_si128((__m128i*)ctx.v47.u8));
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// vor128 v48,v43,v43
	_mm_store_si128((__m128i*)ctx.v48.u8, _mm_load_si128((__m128i*)ctx.v43.u8));
loc_82A2E5B0:
	// vcfpsxws128 v60,v48,0
	ctx.fpscr.enableFlushMode();
	_mm_store_si128((__m128i*)ctx.v60.s32, _mm_vctsxs(_mm_load_ps(ctx.v48.f32)));
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// lwz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// li r6,16
	ctx.r6.s64 = 16;
	// lvx128 v58,r0,r4
	simd::store_shuffled(ctx.v58, simd::load_and_shuffle(base + ((ctx.r4.u32) & ~0xF), VectorMaskL));
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r8,96(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r11,12(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// lvx128 v56,r4,r6
	simd::store_shuffled(ctx.v56, simd::load_and_shuffle(base + ((ctx.r4.u32 + ctx.r6.u32) & ~0xF), VectorMaskL));
	// stvx128 v60,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v60.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lwz r10,128(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// lwz r9,136(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// lwz r19,140(r1)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// lwz r6,132(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// rlwinm r6,r6,3,0,28
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// lvlx128 v55,r6,r11
	temp.u32 = ctx.r6.u32 + ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v55.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r9,r9,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r6,r19,3,0,28
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r19.u32 | (ctx.r19.u64 << 32), 3) & 0xFFFFFFF8;
	// lvlx128 v54,r10,r11
	temp.u32 = ctx.r10.u32 + ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v54.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v53,r9,r11
	temp.u32 = ctx.r9.u32 + ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v53.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v52,r6,r11
	temp.u32 = ctx.r6.u32 + ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v52.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vsubfp128 v50,v53,v54
	_mm_store_ps(ctx.v50.f32, _mm_sub_ps(_mm_load_ps(ctx.v53.f32), _mm_load_ps(ctx.v54.f32)));
	// vsubfp128 v32,v52,v55
	_mm_store_ps(ctx.v32.f32, _mm_sub_ps(_mm_load_ps(ctx.v52.f32), _mm_load_ps(ctx.v55.f32)));
	// vsubfp128 v63,v32,v50
	_mm_store_ps(ctx.v63.f32, _mm_sub_ps(_mm_load_ps(ctx.v32.f32), _mm_load_ps(ctx.v50.f32)));
	// vand128 v60,v63,v40
	_mm_store_si128((__m128i*)ctx.v60.u8, _mm_and_si128(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)ctx.v40.u8)));
	// vrlimi128 v60,v45,4,0
	_mm_store_ps(ctx.v60.f32, _mm_blend_ps(_mm_load_ps(ctx.v60.f32), _mm_permute_ps(_mm_load_ps(ctx.v45.f32), 228), 4));
	// vxor128 v55,v60,v39
	_mm_store_si128((__m128i*)ctx.v55.u8, _mm_xor_si128(_mm_load_si128((__m128i*)ctx.v60.u8), _mm_load_si128((__m128i*)ctx.v39.u8)));
	// vmsum4fp128 v54,v63,v55
	_mm_store_ps(ctx.v54.f32, _mm_dp_ps(_mm_load_ps(ctx.v63.f32), _mm_load_ps(ctx.v55.f32), 0xFF));
	// vrsqrtefp128 v53,v54
	_mm_store_ps(ctx.v53.f32, _mm_div_ps(_mm_set1_ps(1), _mm_sqrt_ps(_mm_load_ps(ctx.v54.f32))));
	// vmulfp128 v52,v45,v53
	_mm_store_ps(ctx.v52.f32, _mm_mul_ps(_mm_load_ps(ctx.v45.f32), _mm_load_ps(ctx.v53.f32)));
	// vminfp128 v50,v52,v46
	_mm_store_ps(ctx.v50.f32, _mm_min_ps(_mm_load_ps(ctx.v52.f32), _mm_load_ps(ctx.v46.f32)));
	// vcmpgtfp128 v32,v56,v50
	_mm_store_ps(ctx.v32.f32, _mm_cmpgt_ps(_mm_load_ps(ctx.v56.f32), _mm_load_ps(ctx.v50.f32)));
	// vcmpgtfp128 v63,v58,v50
	_mm_store_ps(ctx.v63.f32, _mm_cmpgt_ps(_mm_load_ps(ctx.v58.f32), _mm_load_ps(ctx.v50.f32)));
	// vcsxwfp128 v60,v32,0
	_mm_store_ps(ctx.v60.f32, _mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v32.u32)));
	// vcsxwfp128 v58,v63,0
	_mm_store_ps(ctx.v58.f32, _mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v63.u32)));
	// vmsum3fp128 v56,v60,v51
	_mm_store_ps(ctx.v56.f32, _mm_dp_ps(_mm_load_ps(ctx.v60.f32), _mm_load_ps(ctx.v51.f32), 0xEF));
	// vmsum4fp128 v55,v58,v51
	_mm_store_ps(ctx.v55.f32, _mm_dp_ps(_mm_load_ps(ctx.v58.f32), _mm_load_ps(ctx.v51.f32), 0xFF));
	// vaddfp128 v54,v55,v56
	_mm_store_ps(ctx.v54.f32, _mm_add_ps(_mm_load_ps(ctx.v55.f32), _mm_load_ps(ctx.v56.f32)));
	// vcfpsxws128 v53,v54,0
	_mm_store_si128((__m128i*)ctx.v53.s32, _mm_vctsxs(_mm_load_ps(ctx.v54.f32)));
	// stvewx128 v53,r0,r5
	ea = (ctx.r5.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v53.u32[3 - ((ea & 0xF) >> 2)]);
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lfs f13,0(r7)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// rlwinm r10,r5,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f0,r10,r20
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r20.u32);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x82a2e8e8
	if (ctx.cr6.lt) goto loc_82A2E8E8;
	// addi r5,r7,4
	ctx.r5.s64 = ctx.r7.s64 + 4;
	// vspltw128 v60,v48,0
	_mm_store_si128((__m128i*)ctx.v60.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v48.u32), 0xFF));
	// vor128 v52,v62,v62
	_mm_store_si128((__m128i*)ctx.v52.u8, _mm_load_si128((__m128i*)ctx.v62.u8));
	// li r10,1
	ctx.r10.s64 = 1;
	// li r6,8
	ctx.r6.s64 = 8;
	// addi r9,r4,48
	ctx.r9.s64 = ctx.r4.s64 + 48;
	// li r7,-16
	ctx.r7.s64 = -16;
loc_82A2E688:
	// lvx128 v63,r0,r8
	simd::store_shuffled(ctx.v63, simd::load_and_shuffle(base + ((ctx.r8.u32) & ~0xF), VectorMaskL));
	// li r19,128
	ctx.r19.s64 = 128;
	// dcbt r19,r8
	// vperm128 v32,v63,v62,v7
	_mm_store_si128((__m128i*)ctx.v32.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)ctx.v62.u8), _mm_load_si128((__m128i*)ctx.v7.u8)));
	// vperm128 v58,v63,v62,v6
	_mm_store_si128((__m128i*)ctx.v58.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)ctx.v62.u8), _mm_load_si128((__m128i*)ctx.v6.u8)));
	// lwz r19,156(r1)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// vperm128 v54,v63,v62,v5
	_mm_store_si128((__m128i*)ctx.v54.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)ctx.v62.u8), _mm_load_si128((__m128i*)ctx.v5.u8)));
	// addi r18,r1,224
	ctx.r18.s64 = ctx.r1.s64 + 224;
	// vperm128 v53,v63,v62,v4
	_mm_store_si128((__m128i*)ctx.v53.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)ctx.v62.u8), _mm_load_si128((__m128i*)ctx.v4.u8)));
	// addi r17,r1,176
	ctx.r17.s64 = ctx.r1.s64 + 176;
	// vcsxwfp128 v0,v32,0
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v0.f32, _mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v32.u32)));
	// lvx128 v56,r9,r7
	simd::store_shuffled(ctx.v56, simd::load_and_shuffle(base + ((ctx.r9.u32 + ctx.r7.u32) & ~0xF), VectorMaskL));
	// vcsxwfp128 v12,v58,0
	_mm_store_ps(ctx.v12.f32, _mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v58.u32)));
	// lvx128 v55,r0,r9
	simd::store_shuffled(ctx.v55, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// vcsxwfp128 v13,v54,0
	_mm_store_ps(ctx.v13.f32, _mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v54.u32)));
	// lbzx r7,r10,r19
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r19.u32);
	// vcsxwfp128 v11,v53,0
	_mm_store_ps(ctx.v11.f32, _mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v53.u32)));
	// vor128 v58,v52,v52
	_mm_store_si128((__m128i*)ctx.v58.u8, _mm_load_si128((__m128i*)ctx.v52.u8));
	// cmplwi cr6,r7,4
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 4, ctx.xer);
	// vxor128 v32,v0,v61
	_mm_store_si128((__m128i*)ctx.v32.u8, _mm_xor_si128(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)ctx.v61.u8)));
	// vmaddfp v9,v10,v12,v0
	_mm_store_ps(ctx.v9.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v10.f32), _mm_load_ps(ctx.v12.f32)), _mm_load_ps(ctx.v0.f32)));
	// vxor128 v54,v13,v61
	_mm_store_si128((__m128i*)ctx.v54.u8, _mm_xor_si128(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)ctx.v61.u8)));
	// vmaddfp v0,v10,v11,v13
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v10.f32), _mm_load_ps(ctx.v11.f32)), _mm_load_ps(ctx.v13.f32)));
	// vmsum4fp128 v53,v32,v12
	_mm_store_ps(ctx.v53.f32, _mm_dp_ps(_mm_load_ps(ctx.v32.f32), _mm_load_ps(ctx.v12.f32), 0xFF));
	// vmsum4fp128 v32,v54,v11
	_mm_store_ps(ctx.v32.f32, _mm_dp_ps(_mm_load_ps(ctx.v54.f32), _mm_load_ps(ctx.v11.f32), 0xFF));
	// vaddfp128 v54,v9,v60
	_mm_store_ps(ctx.v54.f32, _mm_add_ps(_mm_load_ps(ctx.v9.f32), _mm_load_ps(ctx.v60.f32)));
	// vaddfp128 v0,v0,v60
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v60.f32)));
	// vrefp128 v53,v53
	_mm_store_ps(ctx.v53.f32, _mm_div_ps(_mm_set1_ps(1), _mm_load_ps(ctx.v53.f32)));
	// vrefp128 v32,v32
	_mm_store_ps(ctx.v32.f32, _mm_div_ps(_mm_set1_ps(1), _mm_load_ps(ctx.v32.f32)));
	// vcfpsxws128 v13,v54,0
	_mm_store_si128((__m128i*)ctx.v13.s32, _mm_vctsxs(_mm_load_ps(ctx.v54.f32)));
	// vctsxs v12,v0,0
	_mm_store_si128((__m128i*)ctx.v12.s32, _mm_vctsxs(_mm_load_ps(ctx.v0.f32)));
	// vxor128 v54,v53,v57
	_mm_store_si128((__m128i*)ctx.v54.u8, _mm_xor_si128(_mm_load_si128((__m128i*)ctx.v53.u8), _mm_load_si128((__m128i*)ctx.v57.u8)));
	// vxor128 v53,v32,v61
	_mm_store_si128((__m128i*)ctx.v53.u8, _mm_xor_si128(_mm_load_si128((__m128i*)ctx.v32.u8), _mm_load_si128((__m128i*)ctx.v61.u8)));
	// vslw128 v32,v13,v59
	ctx.v32.u32[0] = ctx.v13.u32[0] << (ctx.v59.u8[0] & 0x1F);
	ctx.v32.u32[1] = ctx.v13.u32[1] << (ctx.v59.u8[4] & 0x1F);
	ctx.v32.u32[2] = ctx.v13.u32[2] << (ctx.v59.u8[8] & 0x1F);
	ctx.v32.u32[3] = ctx.v13.u32[3] << (ctx.v59.u8[12] & 0x1F);
	// vslw128 v11,v12,v59
	ctx.v11.u32[0] = ctx.v12.u32[0] << (ctx.v59.u8[0] & 0x1F);
	ctx.v11.u32[1] = ctx.v12.u32[1] << (ctx.v59.u8[4] & 0x1F);
	ctx.v11.u32[2] = ctx.v12.u32[2] << (ctx.v59.u8[8] & 0x1F);
	ctx.v11.u32[3] = ctx.v12.u32[3] << (ctx.v59.u8[12] & 0x1F);
	// stvx128 v32,r0,r18
	_mm_store_si128((__m128i*)(base + ((ctx.r18.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v32.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v11,r0,r17
	_mm_store_si128((__m128i*)(base + ((ctx.r17.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// bne cr6,0x82a2e810
	if (!ctx.cr6.eq) goto loc_82A2E810;
	// vperm128 v58,v63,v62,v3
	_mm_store_si128((__m128i*)ctx.v58.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)ctx.v62.u8), _mm_load_si128((__m128i*)ctx.v3.u8)));
	// addi r7,r1,256
	ctx.r7.s64 = ctx.r1.s64 + 256;
	// vperm128 v32,v63,v62,v2
	_mm_store_si128((__m128i*)ctx.v32.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)ctx.v62.u8), _mm_load_si128((__m128i*)ctx.v2.u8)));
	// addi r19,r1,192
	ctx.r19.s64 = ctx.r1.s64 + 192;
	// vperm128 v12,v63,v62,v1
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)ctx.v62.u8), _mm_load_si128((__m128i*)ctx.v1.u8)));
	// addi r18,r1,208
	ctx.r18.s64 = ctx.r1.s64 + 208;
	// lwz r20,144(r1)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// vcsxwfp128 v0,v58,0
	_mm_store_ps(ctx.v0.f32, _mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v58.u32)));
	// vor128 v58,v7,v7
	_mm_store_si128((__m128i*)ctx.v58.u8, _mm_load_si128((__m128i*)ctx.v7.u8));
	// vcsxwfp128 v13,v32,0
	_mm_store_ps(ctx.v13.f32, _mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v32.u32)));
	// lvx128 v7,r0,r7
	simd::store_shuffled(ctx.v7, simd::load_and_shuffle(base + ((ctx.r7.u32) & ~0xF), VectorMaskL));
	// vcfsx v12,v12,0
	_mm_store_ps(ctx.v12.f32, _mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v12.u32)));
	// vperm128 v32,v63,v62,v7
	_mm_store_si128((__m128i*)ctx.v32.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)ctx.v62.u8), _mm_load_si128((__m128i*)ctx.v7.u8)));
	// vcsxwfp128 v11,v32,0
	_mm_store_ps(ctx.v11.f32, _mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v32.u32)));
	// vxor128 v63,v0,v61
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_xor_si128(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)ctx.v61.u8)));
	// vmaddfp v9,v10,v13,v0
	_mm_store_ps(ctx.v9.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v10.f32), _mm_load_ps(ctx.v13.f32)), _mm_load_ps(ctx.v0.f32)));
	// vxor128 v32,v12,v61
	_mm_store_si128((__m128i*)ctx.v32.u8, _mm_xor_si128(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)ctx.v61.u8)));
	// vmsum4fp128 v63,v63,v13
	_mm_store_ps(ctx.v63.f32, _mm_dp_ps(_mm_load_ps(ctx.v63.f32), _mm_load_ps(ctx.v13.f32), 0xFF));
	// vmsum4fp128 v32,v32,v11
	_mm_store_ps(ctx.v32.f32, _mm_dp_ps(_mm_load_ps(ctx.v32.f32), _mm_load_ps(ctx.v11.f32), 0xFF));
	// vmaddfp v0,v10,v11,v12
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v10.f32), _mm_load_ps(ctx.v11.f32)), _mm_load_ps(ctx.v12.f32)));
	// vaddfp128 v11,v9,v60
	_mm_store_ps(ctx.v11.f32, _mm_add_ps(_mm_load_ps(ctx.v9.f32), _mm_load_ps(ctx.v60.f32)));
	// vaddfp128 v9,v0,v60
	_mm_store_ps(ctx.v9.f32, _mm_add_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v60.f32)));
	// vrefp128 v63,v63
	_mm_store_ps(ctx.v63.f32, _mm_div_ps(_mm_set1_ps(1), _mm_load_ps(ctx.v63.f32)));
	// vrefp128 v32,v32
	_mm_store_ps(ctx.v32.f32, _mm_div_ps(_mm_set1_ps(1), _mm_load_ps(ctx.v32.f32)));
	// vctsxs v8,v11,0
	_mm_store_si128((__m128i*)ctx.v8.s32, _mm_vctsxs(_mm_load_ps(ctx.v11.f32)));
	// vctsxs v31,v9,0
	_mm_store_si128((__m128i*)ctx.v31.s32, _mm_vctsxs(_mm_load_ps(ctx.v9.f32)));
	// vxor128 v63,v63,v57
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_xor_si128(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)ctx.v57.u8)));
	// vxor128 v32,v32,v61
	_mm_store_si128((__m128i*)ctx.v32.u8, _mm_xor_si128(_mm_load_si128((__m128i*)ctx.v32.u8), _mm_load_si128((__m128i*)ctx.v61.u8)));
	// vslw128 v30,v8,v59
	ctx.v30.u32[0] = ctx.v8.u32[0] << (ctx.v59.u8[0] & 0x1F);
	ctx.v30.u32[1] = ctx.v8.u32[1] << (ctx.v59.u8[4] & 0x1F);
	ctx.v30.u32[2] = ctx.v8.u32[2] << (ctx.v59.u8[8] & 0x1F);
	ctx.v30.u32[3] = ctx.v8.u32[3] << (ctx.v59.u8[12] & 0x1F);
	// stvx128 v30,r0,r19
	_mm_store_si128((__m128i*)(base + ((ctx.r19.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v30.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lwz r15,204(r1)
	ctx.r15.u64 = PPC_LOAD_U32(ctx.r1.u32 + 204);
	// lwz r7,196(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// vslw128 v29,v31,v59
	ctx.v29.u32[0] = ctx.v31.u32[0] << (ctx.v59.u8[0] & 0x1F);
	ctx.v29.u32[1] = ctx.v31.u32[1] << (ctx.v59.u8[4] & 0x1F);
	ctx.v29.u32[2] = ctx.v31.u32[2] << (ctx.v59.u8[8] & 0x1F);
	ctx.v29.u32[3] = ctx.v31.u32[3] << (ctx.v59.u8[12] & 0x1F);
	// lwz r19,192(r1)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// lwz r17,200(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + 200);
	// stvx128 v29,r0,r18
	_mm_store_si128((__m128i*)(base + ((ctx.r18.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v29.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lwz r14,212(r1)
	ctx.r14.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// lwz r18,216(r1)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r1.u32 + 216);
	// lwz r16,220(r1)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r1.u32 + 220);
	// lvlx v28,r15,r11
	temp.u32 = ctx.r15.u32 + ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v28.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lwz r15,208(r1)
	ctx.r15.u64 = PPC_LOAD_U32(ctx.r1.u32 + 208);
	// lvlx v25,r7,r11
	temp.u32 = ctx.r7.u32 + ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v25.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r7,r1,352
	ctx.r7.s64 = ctx.r1.s64 + 352;
	// lvlx v24,r19,r11
	temp.u32 = ctx.r19.u32 + ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v24.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vrlimi128 v24,v25,4,3
	_mm_store_ps(ctx.v24.f32, _mm_blend_ps(_mm_load_ps(ctx.v24.f32), _mm_permute_ps(_mm_load_ps(ctx.v25.f32), 57), 4));
	// lvlx v23,r17,r11
	temp.u32 = ctx.r17.u32 + ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v23.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx v26,r14,r11
	temp.u32 = ctx.r14.u32 + ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v26.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx v22,r18,r11
	temp.u32 = ctx.r18.u32 + ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v22.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vrlimi128 v24,v23,2,2
	_mm_store_ps(ctx.v24.f32, _mm_blend_ps(_mm_load_ps(ctx.v24.f32), _mm_permute_ps(_mm_load_ps(ctx.v23.f32), 78), 2));
	// lvlx v21,r16,r11
	temp.u32 = ctx.r16.u32 + ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v21.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// stvx128 v58,r0,r7
	_mm_store_si128((__m128i*)(base + ((ctx.r7.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v58.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v7,r0,r7
	simd::store_shuffled(ctx.v7, simd::load_and_shuffle(base + ((ctx.r7.u32) & ~0xF), VectorMaskL));
	// vrlimi128 v24,v28,1,1
	_mm_store_ps(ctx.v24.f32, _mm_blend_ps(_mm_load_ps(ctx.v24.f32), _mm_permute_ps(_mm_load_ps(ctx.v28.f32), 147), 1));
	// vmsum4fp128 v63,v24,v63
	_mm_store_ps(ctx.v63.f32, _mm_dp_ps(_mm_load_ps(ctx.v24.f32), _mm_load_ps(ctx.v63.f32), 0xFF));
	// lvlx v27,r15,r11
	temp.u32 = ctx.r15.u32 + ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v27.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vrlimi128 v27,v26,4,3
	_mm_store_ps(ctx.v27.f32, _mm_blend_ps(_mm_load_ps(ctx.v27.f32), _mm_permute_ps(_mm_load_ps(ctx.v26.f32), 57), 4));
	// vrlimi128 v27,v22,2,2
	_mm_store_ps(ctx.v27.f32, _mm_blend_ps(_mm_load_ps(ctx.v27.f32), _mm_permute_ps(_mm_load_ps(ctx.v22.f32), 78), 2));
	// vrlimi128 v27,v21,1,1
	_mm_store_ps(ctx.v27.f32, _mm_blend_ps(_mm_load_ps(ctx.v27.f32), _mm_permute_ps(_mm_load_ps(ctx.v21.f32), 147), 1));
	// vmsum4fp128 v32,v27,v32
	_mm_store_ps(ctx.v32.f32, _mm_dp_ps(_mm_load_ps(ctx.v27.f32), _mm_load_ps(ctx.v32.f32), 0xFF));
	// vaddfp128 v58,v63,v32
	_mm_store_ps(ctx.v58.f32, _mm_add_ps(_mm_load_ps(ctx.v63.f32), _mm_load_ps(ctx.v32.f32)));
loc_82A2E810:
	// lwz r7,228(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	// addi r19,r1,80
	ctx.r19.s64 = ctx.r1.s64 + 80;
	// lwz r18,224(r1)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	// lwz r17,232(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + 232);
	// lwz r16,180(r1)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// lwz r15,176(r1)
	ctx.r15.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// lvlx128 v32,r7,r11
	temp.u32 = ctx.r7.u32 + ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v32.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lwz r7,236(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 236);
	// lvlx128 v63,r18,r11
	temp.u32 = ctx.r18.u32 + ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lwz r18,184(r1)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r1.u32 + 184);
	// vrlimi128 v63,v32,4,3
	_mm_store_ps(ctx.v63.f32, _mm_blend_ps(_mm_load_ps(ctx.v63.f32), _mm_permute_ps(_mm_load_ps(ctx.v32.f32), 57), 4));
	// lvlx128 v32,r17,r11
	temp.u32 = ctx.r17.u32 + ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v32.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx v0,r16,r11
	temp.u32 = ctx.r16.u32 + ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lwz r17,188(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + 188);
	// lvlx v13,r15,r11
	temp.u32 = ctx.r15.u32 + ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx v12,r7,r11
	temp.u32 = ctx.r7.u32 + ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vrlimi128 v13,v0,4,3
	_mm_store_ps(ctx.v13.f32, _mm_blend_ps(_mm_load_ps(ctx.v13.f32), _mm_permute_ps(_mm_load_ps(ctx.v0.f32), 57), 4));
	// vrlimi128 v63,v32,2,2
	_mm_store_ps(ctx.v63.f32, _mm_blend_ps(_mm_load_ps(ctx.v63.f32), _mm_permute_ps(_mm_load_ps(ctx.v32.f32), 78), 2));
	// lvlx v11,r18,r11
	temp.u32 = ctx.r18.u32 + ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx v9,r17,r11
	temp.u32 = ctx.r17.u32 + ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v9.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vrlimi128 v13,v11,2,2
	_mm_store_ps(ctx.v13.f32, _mm_blend_ps(_mm_load_ps(ctx.v13.f32), _mm_permute_ps(_mm_load_ps(ctx.v11.f32), 78), 2));
	// vrlimi128 v63,v12,1,1
	_mm_store_ps(ctx.v63.f32, _mm_blend_ps(_mm_load_ps(ctx.v63.f32), _mm_permute_ps(_mm_load_ps(ctx.v12.f32), 147), 1));
	// vrlimi128 v13,v9,1,1
	_mm_store_ps(ctx.v13.f32, _mm_blend_ps(_mm_load_ps(ctx.v13.f32), _mm_permute_ps(_mm_load_ps(ctx.v9.f32), 147), 1));
	// vmsum4fp128 v63,v63,v54
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v63.f32, _mm_dp_ps(_mm_load_ps(ctx.v63.f32), _mm_load_ps(ctx.v54.f32), 0xFF));
	// vmsum4fp128 v54,v13,v53
	_mm_store_ps(ctx.v54.f32, _mm_dp_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v53.f32), 0xFF));
	// vaddfp128 v53,v58,v63
	_mm_store_ps(ctx.v53.f32, _mm_add_ps(_mm_load_ps(ctx.v58.f32), _mm_load_ps(ctx.v63.f32)));
	// vaddfp128 v32,v53,v54
	_mm_store_ps(ctx.v32.f32, _mm_add_ps(_mm_load_ps(ctx.v53.f32), _mm_load_ps(ctx.v54.f32)));
	// vmulfp128 v63,v32,v50
	_mm_store_ps(ctx.v63.f32, _mm_mul_ps(_mm_load_ps(ctx.v32.f32), _mm_load_ps(ctx.v50.f32)));
	// vcmpgtfp128 v58,v55,v63
	_mm_store_ps(ctx.v58.f32, _mm_cmpgt_ps(_mm_load_ps(ctx.v55.f32), _mm_load_ps(ctx.v63.f32)));
	// vcmpgtfp128 v56,v56,v63
	_mm_store_ps(ctx.v56.f32, _mm_cmpgt_ps(_mm_load_ps(ctx.v56.f32), _mm_load_ps(ctx.v63.f32)));
	// vcsxwfp128 v55,v58,0
	_mm_store_ps(ctx.v55.f32, _mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v58.u32)));
	// vcsxwfp128 v54,v56,0
	_mm_store_ps(ctx.v54.f32, _mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v56.u32)));
	// vmsum3fp128 v53,v55,v51
	_mm_store_ps(ctx.v53.f32, _mm_dp_ps(_mm_load_ps(ctx.v55.f32), _mm_load_ps(ctx.v51.f32), 0xEF));
	// vmsum4fp128 v32,v54,v51
	_mm_store_ps(ctx.v32.f32, _mm_dp_ps(_mm_load_ps(ctx.v54.f32), _mm_load_ps(ctx.v51.f32), 0xFF));
	// vaddfp128 v63,v32,v53
	_mm_store_ps(ctx.v63.f32, _mm_add_ps(_mm_load_ps(ctx.v32.f32), _mm_load_ps(ctx.v53.f32)));
	// vcfpsxws128 v58,v63,0
	_mm_store_si128((__m128i*)ctx.v58.s32, _mm_vctsxs(_mm_load_ps(ctx.v63.f32)));
	// stvewx128 v58,r0,r19
	ea = (ctx.r19.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v58.u32[3 - ((ea & 0xF) >> 2)]);
	// lwz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lfs f13,0(r5)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// add r7,r6,r7
	ctx.r7.u64 = ctx.r6.u64 + ctx.r7.u64;
	// rlwinm r7,r7,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f12,r7,r20
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r20.u32);
	ctx.f12.f64 = double(temp.f32);
	// fadds f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 + ctx.f0.f64));
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x82a2e8e4
	if (ctx.cr6.lt) goto loc_82A2E8E4;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r8,r8,16
	ctx.r8.s64 = ctx.r8.s64 + 16;
	// addi r9,r9,32
	ctx.r9.s64 = ctx.r9.s64 + 32;
	// addi r6,r6,8
	ctx.r6.s64 = ctx.r6.s64 + 8;
	// addi r5,r5,4
	ctx.r5.s64 = ctx.r5.s64 + 4;
	// cmplwi cr6,r10,700
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 700, ctx.xer);
	// li r7,-16
	ctx.r7.s64 = -16;
	// blt cr6,0x82a2e688
	if (ctx.cr6.lt) goto loc_82A2E688;
loc_82A2E8E4:
	// lwz r7,84(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
loc_82A2E8E8:
	// lfs f13,12(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// addi r10,r29,12
	ctx.r10.s64 = ctx.r29.s64 + 12;
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x82a2e958
	if (!ctx.cr6.gt) goto loc_82A2E958;
	// vcfpsxws128 v56,v49,0
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_si128((__m128i*)ctx.v56.s32, _mm_vctsxs(_mm_load_ps(ctx.v49.f32)));
	// addi r11,r29,4
	ctx.r11.s64 = ctx.r29.s64 + 4;
	// li r9,16
	ctx.r9.s64 = 16;
	// lwz r8,112(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// addi r6,r1,256
	ctx.r6.s64 = ctx.r1.s64 + 256;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r5,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r5.u32);
	// vpkuwus128 v55,v56,v62
	_mm_store_si128((__m128i*)vTemp.u32, _mm_load_si128((__m128i*)ctx.v62.u32));
	ctx.v55.u16[0] = vTemp.u32[0] > 0xFFFF ? 0xFFFF : vTemp.u32[0];
	ctx.v55.u16[1] = vTemp.u32[1] > 0xFFFF ? 0xFFFF : vTemp.u32[1];
	ctx.v55.u16[2] = vTemp.u32[2] > 0xFFFF ? 0xFFFF : vTemp.u32[2];
	ctx.v55.u16[3] = vTemp.u32[3] > 0xFFFF ? 0xFFFF : vTemp.u32[3];
	_mm_store_si128((__m128i*)vTemp.u32, _mm_load_si128((__m128i*)ctx.v56.u32));
	ctx.v55.u16[4] = vTemp.u32[0] > 0xFFFF ? 0xFFFF : vTemp.u32[0];
	ctx.v55.u16[5] = vTemp.u32[1] > 0xFFFF ? 0xFFFF : vTemp.u32[1];
	ctx.v55.u16[6] = vTemp.u32[2] > 0xFFFF ? 0xFFFF : vTemp.u32[2];
	ctx.v55.u16[7] = vTemp.u32[3] > 0xFFFF ? 0xFFFF : vTemp.u32[3];
	// stvlx128 v55,r0,r11
	ea = ctx.r11.u32;
	for (size_t i = 0; i < (16 - (ea & 0xF)); i++)
		PPC_STORE_U8(ea + i, ctx.v55.u8[15 - i]);
	// stvrx128 v55,r11,r9
	ea = ctx.r11.u32 + ctx.r9.u32;
	for (size_t i = 0; i < (ea & 0xF); i++)
		PPC_STORE_U8(ea - i - 1, ctx.v55.u8[i]);
	// stfs f0,0(r10)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
	// lvx128 v51,r0,r31
	simd::store_shuffled(ctx.v51, simd::load_and_shuffle(base + ((ctx.r31.u32) & ~0xF), VectorMaskL));
	// lvx128 v6,r0,r21
	simd::store_shuffled(ctx.v6, simd::load_and_shuffle(base + ((ctx.r21.u32) & ~0xF), VectorMaskL));
	// lvx128 v7,r0,r3
	simd::store_shuffled(ctx.v7, simd::load_and_shuffle(base + ((ctx.r3.u32) & ~0xF), VectorMaskL));
	// lvx128 v46,r0,r8
	simd::store_shuffled(ctx.v46, simd::load_and_shuffle(base + ((ctx.r8.u32) & ~0xF), VectorMaskL));
	// lvx128 v5,r0,r22
	simd::store_shuffled(ctx.v5, simd::load_and_shuffle(base + ((ctx.r22.u32) & ~0xF), VectorMaskL));
	// lvx128 v59,r0,r24
	simd::store_shuffled(ctx.v59, simd::load_and_shuffle(base + ((ctx.r24.u32) & ~0xF), VectorMaskL));
	// lvx128 v3,r0,r25
	simd::store_shuffled(ctx.v3, simd::load_and_shuffle(base + ((ctx.r25.u32) & ~0xF), VectorMaskL));
	// lvx128 v62,r0,r30
	simd::store_shuffled(ctx.v62, simd::load_and_shuffle(base + ((ctx.r30.u32) & ~0xF), VectorMaskL));
	// lvx128 v54,r0,r28
	simd::store_shuffled(ctx.v54, simd::load_and_shuffle(base + ((ctx.r28.u32) & ~0xF), VectorMaskL));
	// lvx128 v1,r0,r27
	simd::store_shuffled(ctx.v1, simd::load_and_shuffle(base + ((ctx.r27.u32) & ~0xF), VectorMaskL));
	// lvx128 v4,r0,r23
	simd::store_shuffled(ctx.v4, simd::load_and_shuffle(base + ((ctx.r23.u32) & ~0xF), VectorMaskL));
	// lvx128 v2,r0,r26
	simd::store_shuffled(ctx.v2, simd::load_and_shuffle(base + ((ctx.r26.u32) & ~0xF), VectorMaskL));
	// stvx128 v54,r0,r6
	_mm_store_si128((__m128i*)(base + ((ctx.r6.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v54.u8), _mm_load_si128((__m128i*)VectorMaskL)));
loc_82A2E958:
	// vaddfp128 v49,v49,v44
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v49.f32, _mm_add_ps(_mm_load_ps(ctx.v49.f32), _mm_load_ps(ctx.v44.f32)));
	// vaddfp128 v48,v48,v41
	_mm_store_ps(ctx.v48.f32, _mm_add_ps(_mm_load_ps(ctx.v48.f32), _mm_load_ps(ctx.v41.f32)));
	// bdnz 0x82a2e5b0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82A2E5B0;
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// vaddfp128 v47,v47,v42
	_mm_store_ps(ctx.v47.f32, _mm_add_ps(_mm_load_ps(ctx.v47.f32), _mm_load_ps(ctx.v42.f32)));
	// vaddfp128 v43,v43,v38
	_mm_store_ps(ctx.v43.f32, _mm_add_ps(_mm_load_ps(ctx.v43.f32), _mm_load_ps(ctx.v38.f32)));
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// bne 0x82a2e5a0
	if (!ctx.cr0.eq) goto loc_82A2E5A0;
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// vmulfp128 v36,v36,v35
	_mm_store_ps(ctx.v36.f32, _mm_mul_ps(_mm_load_ps(ctx.v36.f32), _mm_load_ps(ctx.v35.f32)));
	// lwz r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwz r9,580(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 580);
	// addi r8,r10,11184
	ctx.r8.s64 = ctx.r10.s64 + 11184;
	// lwz r16,92(r1)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// stw r8,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r8.u32);
	// vmulfp128 v53,v34,v36
	_mm_store_ps(ctx.v53.f32, _mm_mul_ps(_mm_load_ps(ctx.v34.f32), _mm_load_ps(ctx.v36.f32)));
	// lwz r17,564(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + 564);
	// vrfin128 v47,v53
	_mm_store_ps(ctx.v47.f32, _mm_round_ps(_mm_load_ps(ctx.v53.f32), _MM_FROUND_TO_NEAREST_INT | _MM_FROUND_NO_EXC));
	// ble cr6,0x82a2e4cc
	if (!ctx.cr6.gt) goto loc_82A2E4CC;
loc_82A2E9B4:
	// cmpwi cr6,r16,0
	ctx.cr6.compare<int32_t>(ctx.r16.s32, 0, ctx.xer);
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
	// blt cr6,0x82a2e9ec
	if (ctx.cr6.lt) goto loc_82A2E9EC;
	// lhz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 4);
	// stw r11,0(r17)
	PPC_STORE_U32(ctx.r17.u32 + 0, ctx.r11.u32);
	// lhz r10,8(r29)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r29.u32 + 8);
	// stw r10,8(r17)
	PPC_STORE_U32(ctx.r17.u32 + 8, ctx.r10.u32);
	// lhz r9,6(r29)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r29.u32 + 6);
	// stw r9,4(r17)
	PPC_STORE_U32(ctx.r17.u32 + 4, ctx.r9.u32);
	// lhz r8,10(r29)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r29.u32 + 10);
	// stw r8,12(r17)
	PPC_STORE_U32(ctx.r17.u32 + 12, ctx.r8.u32);
	// addi r1,r1,528
	ctx.r1.s64 = ctx.r1.s64 + 528;
	// b 0x82fa7690
	__restgprlr_14(ctx, base);
	return;
loc_82A2E9E8:
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
loc_82A2E9EC:
	// addi r1,r1,528
	ctx.r1.s64 = ctx.r1.s64 + 528;
	// b 0x82fa7690
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A2E9F4"))) PPC_WEAK_FUNC(sub_82A2E9F4);
PPC_FUNC_IMPL(__imp__sub_82A2E9F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A2E9F8"))) PPC_WEAK_FUNC(sub_82A2E9F8);
PPC_FUNC_IMPL(__imp__sub_82A2E9F8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r10,r11,-22904
	ctx.r10.s64 = ctx.r11.s64 + -22904;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82A2EA08:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r9,r4
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r4.u32, ctx.xer);
	// bgtlr cr6
	if (ctx.cr6.gt) return;
	// cmplw cr6,r9,r5
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r5.u32, ctx.xer);
	// bgtlr cr6
	if (ctx.cr6.gt) return;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// blt cr6,0x82a2ea08
	if (ctx.cr6.lt) goto loc_82A2EA08;
	// li r3,7
	ctx.r3.s64 = 7;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A2EA38"))) PPC_WEAK_FUNC(sub_82A2EA38);
PPC_FUNC_IMPL(__imp__sub_82A2EA38) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// li r3,7
	ctx.r3.s64 = 7;
	// addi r8,r11,-22904
	ctx.r8.s64 = ctx.r11.s64 + -22904;
	// li r10,7
	ctx.r10.s64 = 7;
	// addi r11,r8,28
	ctx.r11.s64 = ctx.r8.s64 + 28;
loc_82A2EA4C:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r9,r4
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r4.u32, ctx.xer);
	// bge cr6,0x82a2ea60
	if (!ctx.cr6.lt) goto loc_82A2EA60;
	// cmplw cr6,r9,r5
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r5.u32, ctx.xer);
	// bltlr cr6
	if (ctx.cr6.lt) return;
loc_82A2EA60:
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bge cr6,0x82a2ea4c
	if (!ctx.cr6.lt) goto loc_82A2EA4C;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A2EA7C"))) PPC_WEAK_FUNC(sub_82A2EA7C);
PPC_FUNC_IMPL(__imp__sub_82A2EA7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A2EA80"))) PPC_WEAK_FUNC(sub_82A2EA80);
PPC_FUNC_IMPL(__imp__sub_82A2EA80) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A2EA98"))) PPC_WEAK_FUNC(sub_82A2EA98);
PPC_FUNC_IMPL(__imp__sub_82A2EA98) {
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
	// lwz r3,44(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r11,r11,-14336
	ctx.r11.s64 = ctx.r11.s64 + -14336;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// beq cr6,0x82a2ead4
	if (ctx.cr6.eq) goto loc_82A2EAD4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82A2EAD4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82A2EAD4:
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// addi r11,r11,-14344
	ctx.r11.s64 = ctx.r11.s64 + -14344;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82A2EAF4"))) PPC_WEAK_FUNC(sub_82A2EAF4);
PPC_FUNC_IMPL(__imp__sub_82A2EAF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A2EAF8"))) PPC_WEAK_FUNC(sub_82A2EAF8);
PPC_FUNC_IMPL(__imp__sub_82A2EAF8) {
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
	// lwz r3,44(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a2eb34
	if (ctx.cr6.eq) goto loc_82A2EB34;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82A2EB30;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r30,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r30.u32);
loc_82A2EB34:
	// stw r30,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r30.u32);
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// stw r30,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r30.u32);
	// stw r30,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r30.u32);
	// stw r30,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r30.u32);
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

__attribute__((alias("__imp__sub_82A2EB60"))) PPC_WEAK_FUNC(sub_82A2EB60);
PPC_FUNC_IMPL(__imp__sub_82A2EB60) {
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
	// bl 0x82a34158
	ctx.lr = 0x82A2EB80;
	sub_82A34158(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82a2ebb0
	if (ctx.cr0.eq) goto loc_82A2EBB0;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82a2ebb0
	if (ctx.cr6.eq) goto loc_82A2EBB0;
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// lis r10,8
	ctx.r10.s64 = 524288;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// ori r10,r10,63156
	ctx.r10.u64 = ctx.r10.u64 | 63156;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,24028(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24028);
	// lwzx r3,r11,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// bl 0x82a81d88
	ctx.lr = 0x82A2EBB0;
	sub_82A81D88(ctx, base);
loc_82A2EBB0:
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

__attribute__((alias("__imp__sub_82A2EBCC"))) PPC_WEAK_FUNC(sub_82A2EBCC);
PPC_FUNC_IMPL(__imp__sub_82A2EBCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A2EBD0"))) PPC_WEAK_FUNC(sub_82A2EBD0);
PPC_FUNC_IMPL(__imp__sub_82A2EBD0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7658
	ctx.lr = 0x82A2EBD8;
	__savegprlr_20(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r22,0
	ctx.r22.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// mr r23,r7
	ctx.r23.u64 = ctx.r7.u64;
	// mr r20,r8
	ctx.r20.u64 = ctx.r8.u64;
	// mr r24,r9
	ctx.r24.u64 = ctx.r9.u64;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// mr r21,r22
	ctx.r21.u64 = ctx.r22.u64;
	// ble cr6,0x82a2ec18
	if (!ctx.cr6.gt) goto loc_82A2EC18;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// ble cr6,0x82a2ec18
	if (!ctx.cr6.gt) goto loc_82A2EC18;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bgt cr6,0x82a2ec30
	if (ctx.cr6.gt) goto loc_82A2EC30;
loc_82A2EC18:
	// lis r21,-32761
	ctx.r21.s64 = -2147024896;
	// ori r21,r21,87
	ctx.r21.u64 = ctx.r21.u64 | 87;
loc_82A2EC20:
	// stw r21,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r21.u32);
loc_82A2EC24:
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82fa76a8
	__restgprlr_20(ctx, base);
	return;
loc_82A2EC30:
	// mullw r28,r25,r23
	ctx.r28.s64 = int64_t(ctx.r25.s32) * int64_t(ctx.r23.s32);
	// li r11,3
	ctx.r11.s64 = 3;
	// cmpwi cr6,r24,2
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 2, ctx.xer);
	// bne cr6,0x82a2ec48
	if (!ctx.cr6.eq) goto loc_82A2EC48;
	// li r11,15
	ctx.r11.s64 = 15;
	// b 0x82a2ec54
	goto loc_82A2EC54;
loc_82A2EC48:
	// cmpwi cr6,r24,4
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 4, ctx.xer);
	// bne cr6,0x82a2ec54
	if (!ctx.cr6.eq) goto loc_82A2EC54;
	// li r11,63
	ctx.r11.s64 = 63;
loc_82A2EC54:
	// extsw r9,r29
	ctx.r9.s64 = ctx.r29.s32;
	// clrldi r10,r28,32
	ctx.r10.u64 = ctx.r28.u64 & 0xFFFFFFFF;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// mulld r10,r10,r9
	ctx.r10.s64 = ctx.r10.s64 * ctx.r9.s64;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// extsw r9,r27
	ctx.r9.s64 = ctx.r27.s32;
	// andc r30,r10,r11
	ctx.r30.u64 = ctx.r10.u64 & ~ctx.r11.u64;
	// li r10,-1
	ctx.r10.s64 = -1;
	// mulld r11,r9,r30
	ctx.r11.s64 = ctx.r9.s64 * ctx.r30.s64;
	// clrldi r10,r10,32
	ctx.r10.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// cmpld cr6,r11,r10
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, ctx.r10.u64, ctx.xer);
	// ble cr6,0x82a2ec90
	if (!ctx.cr6.gt) goto loc_82A2EC90;
loc_82A2EC84:
	// lis r21,-32761
	ctx.r21.s64 = -2147024896;
	// ori r21,r21,14
	ctx.r21.u64 = ctx.r21.u64 | 14;
	// b 0x82a2ec20
	goto loc_82A2EC20;
loc_82A2EC90:
	// lwz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// rotlwi r26,r11,0
	ctx.r26.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a2ecc0
	if (ctx.cr6.eq) goto loc_82A2ECC0;
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// ble cr6,0x82a2ecc0
	if (!ctx.cr6.gt) goto loc_82A2ECC0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82A2ECBC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r22,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r22.u32);
loc_82A2ECC0:
	// lwz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82a2ed30
	if (!ctx.cr6.eq) goto loc_82A2ED30;
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// lis r10,8
	ctx.r10.s64 = 524288;
	// li r5,20
	ctx.r5.s64 = 20;
	// ori r10,r10,63156
	ctx.r10.u64 = ctx.r10.u64 | 63156;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,24028(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24028);
	// lwzx r3,r11,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// bl 0x82a81490
	ctx.lr = 0x82A2ECEC;
	sub_82A81490(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82a2ed1c
	if (ctx.cr0.eq) goto loc_82A2ED1C;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// stw r22,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r22.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r22,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r22.u32);
	// addi r9,r11,-13136
	ctx.r9.s64 = ctx.r11.s64 + -13136;
	// stw r22,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r22.u32);
	// stw r10,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r10.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// b 0x82a2ed20
	goto loc_82A2ED20;
loc_82A2ED1C:
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
loc_82A2ED20:
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a2ec84
	if (ctx.cr6.eq) goto loc_82A2EC84;
loc_82A2ED30:
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bl 0x82a34190
	ctx.lr = 0x82A2ED40;
	sub_82A34190(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82a2ed70
	if (!ctx.cr0.eq) goto loc_82A2ED70;
	// lwz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a2ed68
	if (ctx.cr6.eq) goto loc_82A2ED68;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82A2ED68;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82A2ED68:
	// stw r22,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r22.u32);
	// b 0x82a2ec84
	goto loc_82A2EC84;
loc_82A2ED70:
	// rotlwi r11,r30,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r30.u32, 0);
	// stw r3,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r3.u32);
	// clrlwi. r10,r3,26
	ctx.r10.u64 = ctx.r3.u32 & 0x3F;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r29,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r29.u32);
	// stw r27,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r27.u32);
	// stw r25,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r25.u32);
	// stw r23,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r23.u32);
	// stw r28,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r28.u32);
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// bne 0x82a2edac
	if (!ctx.cr0.eq) goto loc_82A2EDAC;
	// clrlwi r11,r11,26
	ctx.r11.u64 = ctx.r11.u32 & 0x3F;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// addi r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 + 3;
	// b 0x82a2edcc
	goto loc_82A2EDCC;
loc_82A2EDAC:
	// clrlwi. r10,r3,28
	ctx.r10.u64 = ctx.r3.u32 & 0xF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82a2edc8
	if (!ctx.cr0.eq) goto loc_82A2EDC8;
	// clrlwi r11,r11,28
	ctx.r11.u64 = ctx.r11.u32 & 0xF;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// b 0x82a2edcc
	goto loc_82A2EDCC;
loc_82A2EDC8:
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
loc_82A2EDCC:
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// stw r20,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r20.u32);
	// b 0x82a2ec24
	goto loc_82A2EC24;
}

__attribute__((alias("__imp__sub_82A2EDD8"))) PPC_WEAK_FUNC(sub_82A2EDD8);
PPC_FUNC_IMPL(__imp__sub_82A2EDD8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7664
	ctx.lr = 0x82A2EDE0;
	__savegprlr_23(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// mr r27,r8
	ctx.r27.u64 = ctx.r8.u64;
	// mr r28,r9
	ctx.r28.u64 = ctx.r9.u64;
	// mr r23,r10
	ctx.r23.u64 = ctx.r10.u64;
	// li r24,0
	ctx.r24.s64 = 0;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82a2eeb4
	if (ctx.cr6.eq) goto loc_82A2EEB4;
	// lwz r3,44(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a2ee3c
	if (ctx.cr6.eq) goto loc_82A2EE3C;
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// ble cr6,0x82a2ee3c
	if (!ctx.cr6.gt) goto loc_82A2EE3C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82A2EE38;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r24,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r24.u32);
loc_82A2EE3C:
	// lwz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82a2eec0
	if (!ctx.cr6.eq) goto loc_82A2EEC0;
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// lis r10,8
	ctx.r10.s64 = 524288;
	// li r5,20
	ctx.r5.s64 = 20;
	// ori r10,r10,63156
	ctx.r10.u64 = ctx.r10.u64 | 63156;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,24028(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24028);
	// lwzx r3,r11,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// bl 0x82a81490
	ctx.lr = 0x82A2EE68;
	sub_82A81490(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82a2ee94
	if (ctx.cr0.eq) goto loc_82A2EE94;
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// stw r24,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r24.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r24,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r24.u32);
	// addi r11,r11,-13136
	ctx.r11.s64 = ctx.r11.s64 + -13136;
	// stw r24,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r24.u32);
	// stw r10,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r10.u32);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x82a2ee98
	goto loc_82A2EE98;
loc_82A2EE94:
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
loc_82A2EE98:
	// stw r3,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82a2eec0
	if (!ctx.cr6.eq) goto loc_82A2EEC0;
	// lis r11,-32761
	ctx.r11.s64 = -2147024896;
	// ori r11,r11,14
	ctx.r11.u64 = ctx.r11.u64 | 14;
	// mr r24,r11
	ctx.r24.u64 = ctx.r11.u64;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
loc_82A2EEB4:
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82fa76b4
	__restgprlr_23(ctx, base);
	return;
loc_82A2EEC0:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82a342c8
	ctx.lr = 0x82A2EEC8;
	sub_82A342C8(ctx, base);
	// mullw r11,r29,r28
	ctx.r11.s64 = int64_t(ctx.r29.s32) * int64_t(ctx.r28.s32);
	// stw r3,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r3.u32);
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// stw r26,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r26.u32);
	// stw r25,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r25.u32);
	// stw r29,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r29.u32);
	// stw r28,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r28.u32);
	// stw r27,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r27.u32);
	// clrlwi. r11,r30,26
	ctx.r11.u64 = ctx.r30.u32 & 0x3F;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82a2ef04
	if (!ctx.cr0.eq) goto loc_82A2EF04;
	// clrlwi r11,r27,26
	ctx.r11.u64 = ctx.r27.u32 & 0x3F;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// addi r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 + 3;
	// b 0x82a2ef24
	goto loc_82A2EF24;
loc_82A2EF04:
	// clrlwi. r11,r30,28
	ctx.r11.u64 = ctx.r30.u32 & 0xF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82a2ef20
	if (!ctx.cr0.eq) goto loc_82A2EF20;
	// clrlwi r11,r27,28
	ctx.r11.u64 = ctx.r27.u32 & 0xF;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// b 0x82a2ef24
	goto loc_82A2EF24;
loc_82A2EF20:
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
loc_82A2EF24:
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// stw r23,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r23.u32);
	// b 0x82a2eeb4
	goto loc_82A2EEB4;
}

__attribute__((alias("__imp__sub_82A2EF30"))) PPC_WEAK_FUNC(sub_82A2EF30);
PPC_FUNC_IMPL(__imp__sub_82A2EF30) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r10,-13124
	ctx.r10.s64 = ctx.r10.s64 + -13124;
	// stb r11,8(r3)
	PPC_STORE_U8(ctx.r3.u32 + 8, ctx.r11.u8);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// stw r11,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A2EF58"))) PPC_WEAK_FUNC(sub_82A2EF58);
PPC_FUNC_IMPL(__imp__sub_82A2EF58) {
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
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stb r30,8(r31)
	PPC_STORE_U8(ctx.r31.u32 + 8, ctx.r30.u8);
	// beq cr6,0x82a2ef8c
	if (ctx.cr6.eq) goto loc_82A2EF8C;
	// lis r4,8349
	ctx.r4.s64 = 547160064;
	// bl 0x82691460
	ctx.lr = 0x82A2EF8C;
	sub_82691460(ctx, base);
loc_82A2EF8C:
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
	// std r30,16(r31)
	PPC_STORE_U64(ctx.r31.u32 + 16, ctx.r30.u64);
	// stw r30,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r30.u32);
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

__attribute__((alias("__imp__sub_82A2EFB0"))) PPC_WEAK_FUNC(sub_82A2EFB0);
PPC_FUNC_IMPL(__imp__sub_82A2EFB0) {
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
	// lis r30,-32768
	ctx.r30.s64 = -2147483648;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// ori r30,r30,16389
	ctx.r30.u64 = ctx.r30.u64 | 16389;
	// bne cr6,0x82a2efe4
	if (!ctx.cr6.eq) goto loc_82A2EFE4;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// b 0x82a2f010
	goto loc_82A2F010;
loc_82A2EFE4:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r3,24(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a2f00c
	if (ctx.cr6.eq) goto loc_82A2F00C;
	// bl 0x82a34318
	ctx.lr = 0x82A2EFFC;
	sub_82A34318(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82a2f00c
	if (ctx.cr0.lt) goto loc_82A2F00C;
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// li r30,0
	ctx.r30.s64 = 0;
loc_82A2F00C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_82A2F010:
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

__attribute__((alias("__imp__sub_82A2F028"))) PPC_WEAK_FUNC(sub_82A2F028);
PPC_FUNC_IMPL(__imp__sub_82A2F028) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// bne cr6,0x82a2f048
	if (!ctx.cr6.eq) goto loc_82A2F048;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// blr 
	return;
loc_82A2F048:
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82A2F070"))) PPC_WEAK_FUNC(sub_82A2F070);
PPC_FUNC_IMPL(__imp__sub_82A2F070) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa766c
	ctx.lr = 0x82A2F078;
	__savegprlr_25(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// mr r27,r8
	ctx.r27.u64 = ctx.r8.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82a2f0a8
	if (!ctx.cr6.eq) goto loc_82A2F0A8;
loc_82A2F09C:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// b 0x82a2f1d0
	goto loc_82A2F1D0;
loc_82A2F0A8:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x82a2f09c
	if (ctx.cr6.eq) goto loc_82A2F09C;
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// stw r10,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r10.u32);
	// beq cr6,0x82a2f0e0
	if (ctx.cr6.eq) goto loc_82A2F0E0;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x82a2f0e0
	if (ctx.cr6.eq) goto loc_82A2F0E0;
	// addi r11,r30,-4
	ctx.r11.s64 = ctx.r30.s64 + -4;
	// cmplwi r27,0
	ctx.cr0.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq 0x82a2f0e0
	if (ctx.cr0.eq) goto loc_82A2F0E0;
	// mtctr r27
	ctx.ctr.u64 = ctx.r27.u64;
loc_82A2F0D8:
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x82a2f0d8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82A2F0D8;
loc_82A2F0E0:
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82a2f0f8
	if (!ctx.cr6.eq) goto loc_82A2F0F8;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,65535
	ctx.r3.u64 = ctx.r3.u64 | 65535;
	// b 0x82a2f1d0
	goto loc_82A2F1D0;
loc_82A2F0F8:
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82A2F114;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// blt 0x82a2f1cc
	if (ctx.cr0.lt) goto loc_82A2F1CC;
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// bl 0x8241a078
	ctx.lr = 0x82A2F124;
	sub_8241A078(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82a2f138
	if (!ctx.cr0.eq) goto loc_82A2F138;
loc_82A2F12C:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// b 0x82a2f1d0
	goto loc_82A2F1D0;
loc_82A2F138:
	// rlwinm r5,r28,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82a75220
	ctx.lr = 0x82A2F144;
	sub_82A75220(ctx, base);
	// mftb r10
	ctx.r10.u64 = __rdtsc();
	// lis r29,-31962
	ctx.r29.s64 = -2094661632;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// ld r11,-10288(r29)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r29.u32 + -10288);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// std r11,-10288(r29)
	PPC_STORE_U64(ctx.r29.u32 + -10288, ctx.r11.u64);
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// bl 0x82a35908
	ctx.lr = 0x82A2F164;
	sub_82A35908(ctx, base);
	// mftb r10
	ctx.r10.u64 = __rdtsc();
	// ld r11,-10288(r29)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r29.u32 + -10288);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// std r11,-10288(r29)
	PPC_STORE_U64(ctx.r29.u32 + -10288, ctx.r11.u64);
	// beq 0x82a2f12c
	if (ctx.cr0.eq) goto loc_82A2F12C;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// stw r11,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r11.u32);
	// beq cr6,0x82a2f1cc
	if (ctx.cr6.eq) goto loc_82A2F1CC;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x82a2f1cc
	if (ctx.cr6.eq) goto loc_82A2F1CC;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// mtctr r27
	ctx.ctr.u64 = ctx.r27.u64;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// subf r10,r30,r3
	ctx.r10.s64 = ctx.r3.s64 - ctx.r30.s64;
	// lfs f0,11704(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 11704);
	ctx.f0.f64 = double(temp.f32);
loc_82A2F1A8:
	// lwax r9,r10,r11
	ctx.r9.s64 = int32_t(PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32));
	// std r9,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r9.u64);
	// lfd f13,88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f13,0(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x82a2f1a8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82A2F1A8;
loc_82A2F1CC:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
loc_82A2F1D0:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82fa76bc
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A2F1D8"))) PPC_WEAK_FUNC(sub_82A2F1D8);
PPC_FUNC_IMPL(__imp__sub_82A2F1D8) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r10,1
	ctx.r10.s64 = 1;
	// li r3,0
	ctx.r3.s64 = 0;
	// stb r10,8(r11)
	PPC_STORE_U8(ctx.r11.u32 + 8, ctx.r10.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A2F1EC"))) PPC_WEAK_FUNC(sub_82A2F1EC);
PPC_FUNC_IMPL(__imp__sub_82A2F1EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A2F1F0"))) PPC_WEAK_FUNC(sub_82A2F1F0);
PPC_FUNC_IMPL(__imp__sub_82A2F1F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x82A2F1F8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82a2f22c
	if (ctx.cr6.eq) goto loc_82A2F22C;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x82a2f22c
	if (ctx.cr6.eq) goto loc_82A2F22C;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82fa7cf0
	ctx.lr = 0x82A2F22C;
	sub_82FA7CF0(ctx, base);
loc_82A2F22C:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82a2f290
	if (ctx.cr6.eq) goto loc_82A2F290;
	// cmplwi cr6,r28,88
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 88, ctx.xer);
	// ble cr6,0x82a2f290
	if (!ctx.cr6.gt) goto loc_82A2F290;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82a2f290
	if (ctx.cr6.eq) goto loc_82A2F290;
	// cmplwi cr6,r30,16
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 16, ctx.xer);
	// bne cr6,0x82a2f290
	if (!ctx.cr6.eq) goto loc_82A2F290;
	// addi r10,r28,-16
	ctx.r10.s64 = ctx.r28.s64 + -16;
	// addi r11,r29,16
	ctx.r11.s64 = ctx.r29.s64 + 16;
	// rlwinm. r10,r10,29,3,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x1FFFFFFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82a2f288
	if (ctx.cr0.eq) goto loc_82A2F288;
	// addi r11,r11,-8
	ctx.r11.s64 = ctx.r11.s64 + -8;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82A2F264:
	// ld r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// ld r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// xor r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 ^ ctx.r10.u64;
	// std r10,0(r31)
	PPC_STORE_U64(ctx.r31.u32 + 0, ctx.r10.u64);
	// ldu r10,8(r11)
	ea = 8 + ctx.r11.u32;
	ctx.r10.u64 = PPC_LOAD_U64(ea);
	ctx.r11.u32 = ea;
	// ld r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 8);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// std r10,8(r31)
	PPC_STORE_U64(ctx.r31.u32 + 8, ctx.r10.u64);
	// bdnz 0x82a2f264
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82A2F264;
loc_82A2F288:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82a2f298
	goto loc_82A2F298;
loc_82A2F290:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
loc_82A2F298:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A2F2A0"))) PPC_WEAK_FUNC(sub_82A2F2A0);
PPC_FUNC_IMPL(__imp__sub_82A2F2A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x82A2F2A8;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82a2f2c8
	if (!ctx.cr6.eq) goto loc_82A2F2C8;
loc_82A2F2C0:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82a2f390
	goto loc_82A2F390;
loc_82A2F2C8:
	// cmplwi cr6,r30,88
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 88, ctx.xer);
	// blt cr6,0x82a2f2c0
	if (ctx.cr6.lt) goto loc_82A2F2C0;
	// li r6,16
	ctx.r6.s64 = 16;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a2f1f0
	ctx.lr = 0x82A2F2E4;
	sub_82A2F1F0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82a2f2c0
	if (ctx.cr0.lt) goto loc_82A2F2C0;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// addi r8,r31,16
	ctx.r8.s64 = ctx.r31.s64 + 16;
loc_82A2F2F8:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r9,r7,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r7.s64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82a2f318
	if (!ctx.cr0.eq) goto loc_82A2F318;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x82a2f2f8
	if (!ctx.cr6.eq) goto loc_82A2F2F8;
loc_82A2F318:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82a2f2c0
	if (!ctx.cr0.eq) goto loc_82A2F2C0;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82a2f2c0
	if (!ctx.cr6.eq) goto loc_82A2F2C0;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,100
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 100, ctx.xer);
	// bne cr6,0x82a2f2c0
	if (!ctx.cr6.eq) goto loc_82A2F2C0;
	// lwz r9,36(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// blt cr6,0x82a2f2c0
	if (ctx.cr6.lt) goto loc_82A2F2C0;
	// addi r11,r9,-1
	ctx.r11.s64 = ctx.r9.s64 + -1;
	// li r8,0
	ctx.r8.s64 = 0;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// addi r11,r11,88
	ctx.r11.s64 = ctx.r11.s64 + 88;
	// beq cr6,0x82a2f380
	if (ctx.cr6.eq) goto loc_82A2F380;
	// addi r10,r31,84
	ctx.r10.s64 = ctx.r31.s64 + 84;
loc_82A2F360:
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// add r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 + ctx.r11.u64;
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// bgt cr6,0x82a2f2c0
	if (ctx.cr6.gt) goto loc_82A2F2C0;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82a2f360
	if (ctx.cr6.lt) goto loc_82A2F360;
loc_82A2F380:
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x82a2f38c
	if (!ctx.cr6.eq) goto loc_82A2F38C;
	// li r29,1
	ctx.r29.s64 = 1;
loc_82A2F38C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
loc_82A2F390:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A2F398"))) PPC_WEAK_FUNC(sub_82A2F398);
PPC_FUNC_IMPL(__imp__sub_82A2F398) {
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
	// bl 0x82a357d8
	ctx.lr = 0x82A2F3B8;
	sub_82A357D8(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82a2f3e8
	if (ctx.cr0.eq) goto loc_82A2F3E8;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82a2f3e8
	if (ctx.cr6.eq) goto loc_82A2F3E8;
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// lis r10,8
	ctx.r10.s64 = 524288;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// ori r10,r10,63156
	ctx.r10.u64 = ctx.r10.u64 | 63156;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,24028(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24028);
	// lwzx r3,r11,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// bl 0x82a81d88
	ctx.lr = 0x82A2F3E8;
	sub_82A81D88(ctx, base);
loc_82A2F3E8:
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

__attribute__((alias("__imp__sub_82A2F404"))) PPC_WEAK_FUNC(sub_82A2F404);
PPC_FUNC_IMPL(__imp__sub_82A2F404) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A2F408"))) PPC_WEAK_FUNC(sub_82A2F408);
PPC_FUNC_IMPL(__imp__sub_82A2F408) {
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
	// lis r11,-32248
	ctx.r11.s64 = -2113404928;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,-13124
	ctx.r11.s64 = ctx.r11.s64 + -13124;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x82a2ef58
	ctx.lr = 0x82A2F42C;
	sub_82A2EF58(ctx, base);
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a2f448
	if (ctx.cr6.eq) goto loc_82A2F448;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82a2f398
	ctx.lr = 0x82A2F440;
	sub_82A2F398(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
loc_82A2F448:
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

__attribute__((alias("__imp__sub_82A2F45C"))) PPC_WEAK_FUNC(sub_82A2F45C);
PPC_FUNC_IMPL(__imp__sub_82A2F45C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A2F460"))) PPC_WEAK_FUNC(sub_82A2F460);
PPC_FUNC_IMPL(__imp__sub_82A2F460) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x82A2F468;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,3
	ctx.r7.s64 = 3;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// lis r4,-32768
	ctx.r4.s64 = -2147483648;
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
	// bl 0x82a82d10
	ctx.lr = 0x82A2F498;
	sub_82A82D10(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x82a2f4a8
	if (ctx.cr0.eq) goto loc_82A2F4A8;
	// cmpwi cr6,r30,-1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, -1, ctx.xer);
	// bne cr6,0x82a2f4b0
	if (!ctx.cr6.eq) goto loc_82A2F4B0;
loc_82A2F4A8:
	// lis r31,-32761
	ctx.r31.s64 = -2147024896;
	// ori r31,r31,87
	ctx.r31.u64 = ctx.r31.u64 | 87;
loc_82A2F4B0:
	// addi r11,r1,92
	ctx.r11.s64 = ctx.r1.s64 + 92;
	// stw r29,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r29.u32);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// stw r29,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r29.u32);
	// blt cr6,0x82a2f564
	if (ctx.cr6.lt) goto loc_82A2F564;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a84678
	ctx.lr = 0x82A2F4D0;
	sub_82A84678(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x82a2f4e4
	if (!ctx.cr6.eq) goto loc_82A2F4E4;
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82a2f4ec
	if (!ctx.cr6.gt) goto loc_82A2F4EC;
loc_82A2F4E4:
	// lis r31,-32761
	ctx.r31.s64 = -2147024896;
	// ori r31,r31,87
	ctx.r31.u64 = ctx.r31.u64 | 87;
loc_82A2F4EC:
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt cr6,0x82a2f564
	if (ctx.cr6.lt) goto loc_82A2F564;
	// lis r4,8349
	ctx.r4.s64 = 547160064;
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// bl 0x82691410
	ctx.lr = 0x82A2F500;
	sub_82691410(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// stw r4,12(r28)
	PPC_STORE_U32(ctx.r28.u32 + 12, ctx.r4.u32);
	// bne 0x82a2f514
	if (!ctx.cr0.eq) goto loc_82A2F514;
	// lis r31,-32761
	ctx.r31.s64 = -2147024896;
	// ori r31,r31,14
	ctx.r31.u64 = ctx.r31.u64 | 14;
loc_82A2F514:
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt cr6,0x82a2f564
	if (ctx.cr6.lt) goto loc_82A2F564;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r5,92(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a83030
	ctx.lr = 0x82A2F530;
	sub_82A83030(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x82a2f548
	if (!ctx.cr6.eq) goto loc_82A2F548;
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82a2f550
	if (ctx.cr6.eq) goto loc_82A2F550;
loc_82A2F548:
	// lis r31,-32768
	ctx.r31.s64 = -2147483648;
	// ori r31,r31,16389
	ctx.r31.u64 = ctx.r31.u64 | 16389;
loc_82A2F550:
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt cr6,0x82a2f564
	if (ctx.cr6.lt) goto loc_82A2F564;
	// ld r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// std r11,16(r28)
	PPC_STORE_U64(ctx.r28.u32 + 16, ctx.r11.u64);
	// b 0x82a2f56c
	goto loc_82A2F56C;
loc_82A2F564:
	// addi r3,r28,12
	ctx.r3.s64 = ctx.r28.s64 + 12;
	// bl 0x82a35780
	ctx.lr = 0x82A2F56C;
	sub_82A35780(ctx, base);
loc_82A2F56C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a756a0
	ctx.lr = 0x82A2F574;
	sub_82A756A0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A2F580"))) PPC_WEAK_FUNC(sub_82A2F580);
PPC_FUNC_IMPL(__imp__sub_82A2F580) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x82A2F588;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,-1
	ctx.r11.s64 = -1;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// clrldi r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmpld cr6,r5,r11
	ctx.cr6.compare<uint64_t>(ctx.r5.u64, ctx.r11.u64, ctx.xer);
	// bgt cr6,0x82a2f65c
	if (ctx.cr6.gt) goto loc_82A2F65C;
	// rotlwi r4,r5,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r5.u32, 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a2f2a0
	ctx.lr = 0x82A2F5B0;
	sub_82A2F2A0(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x82a2f65c
	if (!ctx.cr6.eq) goto loc_82A2F65C;
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82a2f65c
	if (!ctx.cr6.eq) goto loc_82A2F65C;
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x82a2f65c
	if (!ctx.cr6.eq) goto loc_82A2F65C;
	// lwz r11,72(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// lwz r3,24(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	// lwz r30,84(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// add r31,r11,r31
	ctx.r31.u64 = ctx.r11.u64 + ctx.r31.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a2f5f4
	if (ctx.cr6.eq) goto loc_82A2F5F4;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82a2f398
	ctx.lr = 0x82A2F5F4;
	sub_82A2F398(ctx, base);
loc_82A2F5F4:
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// lis r10,8
	ctx.r10.s64 = 524288;
	// li r5,156
	ctx.r5.s64 = 156;
	// ori r10,r10,63156
	ctx.r10.u64 = ctx.r10.u64 | 63156;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,24028(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24028);
	// lwzx r3,r11,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// bl 0x82a81490
	ctx.lr = 0x82A2F614;
	sub_82A81490(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82a2f624
	if (ctx.cr0.eq) goto loc_82A2F624;
	// bl 0x82a35488
	ctx.lr = 0x82A2F620;
	sub_82A35488(ctx, base);
	// b 0x82a2f628
	goto loc_82A2F628;
loc_82A2F624:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82A2F628:
	// stw r3,24(r29)
	PPC_STORE_U32(ctx.r29.u32 + 24, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82a2f640
	if (!ctx.cr6.eq) goto loc_82A2F640;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x82a2f664
	goto loc_82A2F664;
loc_82A2F640:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82a35450
	ctx.lr = 0x82A2F64C;
	sub_82A35450(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x82a2f65c
	if (!ctx.cr6.eq) goto loc_82A2F65C;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82a2f664
	goto loc_82A2F664;
loc_82A2F65C:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
loc_82A2F664:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A2F66C"))) PPC_WEAK_FUNC(sub_82A2F66C);
PPC_FUNC_IMPL(__imp__sub_82A2F66C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A2F670"))) PPC_WEAK_FUNC(sub_82A2F670);
PPC_FUNC_IMPL(__imp__sub_82A2F670) {
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
	// bl 0x82a2f408
	ctx.lr = 0x82A2F690;
	sub_82A2F408(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82a2f6c0
	if (ctx.cr0.eq) goto loc_82A2F6C0;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82a2f6c0
	if (ctx.cr6.eq) goto loc_82A2F6C0;
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// lis r10,8
	ctx.r10.s64 = 524288;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// ori r10,r10,63156
	ctx.r10.u64 = ctx.r10.u64 | 63156;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,24028(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24028);
	// lwzx r3,r11,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// bl 0x82a81d88
	ctx.lr = 0x82A2F6C0;
	sub_82A81D88(ctx, base);
loc_82A2F6C0:
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

__attribute__((alias("__imp__sub_82A2F6DC"))) PPC_WEAK_FUNC(sub_82A2F6DC);
PPC_FUNC_IMPL(__imp__sub_82A2F6DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A2F6E0"))) PPC_WEAK_FUNC(sub_82A2F6E0);
PPC_FUNC_IMPL(__imp__sub_82A2F6E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x82A2F6E8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82a2f70c
	if (!ctx.cr6.eq) goto loc_82A2F70C;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// b 0x82a2f750
	goto loc_82A2F750;
loc_82A2F70C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82A2F720;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a2f460
	ctx.lr = 0x82A2F730;
	sub_82A2F460(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82a2f750
	if (ctx.cr0.lt) goto loc_82A2F750;
	// ld r5,16(r31)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r31.u32 + 16);
	// cmpldi cr6,r5,0
	ctx.cr6.compare<uint64_t>(ctx.r5.u64, 0, ctx.xer);
	// ble cr6,0x82a2f750
	if (!ctx.cr6.gt) goto loc_82A2F750;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x82a2f580
	ctx.lr = 0x82A2F750;
	sub_82A2F580(ctx, base);
loc_82A2F750:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A2F758"))) PPC_WEAK_FUNC(sub_82A2F758);
PPC_FUNC_IMPL(__imp__sub_82A2F758) {
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
	// lis r10,-32248
	ctx.r10.s64 = -2113404928;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r10,-13136
	ctx.r10.s64 = ctx.r10.s64 + -13136;
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r9,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r9.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// bl 0x82a35e10
	ctx.lr = 0x82A2F7A8;
	sub_82A35E10(ctx, base);
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

__attribute__((alias("__imp__sub_82A2F7C0"))) PPC_WEAK_FUNC(sub_82A2F7C0);
PPC_FUNC_IMPL(__imp__sub_82A2F7C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq cr6,0x82a2f824
	if (ctx.cr6.eq) goto loc_82A2F824;
	// cmpwi cr6,r6,2
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 2, ctx.xer);
	// beq cr6,0x82a2f810
	if (ctx.cr6.eq) goto loc_82A2F810;
	// cmpwi cr6,r6,4
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 4, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// subf r10,r4,r5
	ctx.r10.s64 = ctx.r5.s64 - ctx.r4.s64;
	// subf r11,r4,r3
	ctx.r11.s64 = ctx.r3.s64 - ctx.r4.s64;
loc_82A2F7E0:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x82a2f800
	if (ctx.cr6.lt) goto loc_82A2F800;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82a2f808
	if (ctx.cr6.lt) goto loc_82A2F808;
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r11,r11,r9
	ctx.r11.s64 = ctx.r9.s64 - ctx.r11.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// b 0x82a2f7e0
	goto loc_82A2F7E0;
loc_82A2F800:
	// subfic r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 <= 4294967295;
	ctx.r11.s64 = -1 - ctx.r11.s64;
	// b 0x82a2f7e0
	goto loc_82A2F7E0;
loc_82A2F808:
	// add r3,r11,r4
	ctx.r3.u64 = ctx.r11.u64 + ctx.r4.u64;
	// blr 
	return;
loc_82A2F810:
	// cmpw cr6,r3,r4
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r4.s32, ctx.xer);
	// blt cr6,0x82a2f840
	if (ctx.cr6.lt) goto loc_82A2F840;
	// cmpw cr6,r3,r5
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r5.s32, ctx.xer);
	// bltlr cr6
	if (ctx.cr6.lt) return;
	// b 0x82a2f864
	goto loc_82A2F864;
loc_82A2F824:
	// cmpw cr6,r3,r4
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r4.s32, ctx.xer);
	// bge cr6,0x82a2f848
	if (!ctx.cr6.lt) goto loc_82A2F848;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82a2f840
	if (ctx.cr6.eq) goto loc_82A2F840;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,5184(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5184);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r7)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r7.u32 + 0, temp.u32);
loc_82A2F840:
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// blr 
	return;
loc_82A2F848:
	// cmpw cr6,r3,r5
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r5.s32, ctx.xer);
	// bltlr cr6
	if (ctx.cr6.lt) return;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82a2f864
	if (ctx.cr6.eq) goto loc_82A2F864;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,5184(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5184);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r7)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r7.u32 + 0, temp.u32);
loc_82A2F864:
	// addi r3,r5,-1
	ctx.r3.s64 = ctx.r5.s64 + -1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A2F86C"))) PPC_WEAK_FUNC(sub_82A2F86C);
PPC_FUNC_IMPL(__imp__sub_82A2F86C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A2F870"))) PPC_WEAK_FUNC(sub_82A2F870);
PPC_FUNC_IMPL(__imp__sub_82A2F870) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x82A2F878;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmplw cr6,r4,r5
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r5.u32, ctx.xer);
	// bge cr6,0x82a2f8a8
	if (!ctx.cr6.lt) goto loc_82A2F8A8;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
loc_82A2F894:
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82a2f8a8
	if (!ctx.cr6.lt) goto loc_82A2F8A8;
	// addi r31,r31,12
	ctx.r31.s64 = ctx.r31.s64 + 12;
	// cmplw cr6,r31,r5
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r5.u32, ctx.xer);
	// blt cr6,0x82a2f894
	if (ctx.cr6.lt) goto loc_82A2F894;
loc_82A2F8A8:
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// li r28,12
	ctx.r28.s64 = 12;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// subf r11,r31,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r31.s64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// divw r11,r11,r28
	ctx.r11.s32 = ctx.r11.s32 / ctx.r28.s32;
	// mulli r5,r11,12
	ctx.r5.s64 = ctx.r11.s64 * 12;
	// bl 0x82fa20f0
	ctx.lr = 0x82A2F8C8;
	sub_82FA20F0(ctx, base);
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// subf r11,r31,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r31.s64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// divw r11,r11,r28
	ctx.r11.s32 = ctx.r11.s32 / ctx.r28.s32;
	// mulli r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 * 12;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stw r11,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A2F8EC"))) PPC_WEAK_FUNC(sub_82A2F8EC);
PPC_FUNC_IMPL(__imp__sub_82A2F8EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A2F8F0"))) PPC_WEAK_FUNC(sub_82A2F8F0);
PPC_FUNC_IMPL(__imp__sub_82A2F8F0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// mr r9,r4
	ctx.r9.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a2f948
	if (ctx.cr6.eq) goto loc_82A2F948;
	// lwz r10,32(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmpw cr6,r5,r10
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x82a2f948
	if (!ctx.cr6.eq) goto loc_82A2F948;
	// rlwinm. r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// li r8,0
	ctx.r8.s64 = 0;
	// beq 0x82a2f93c
	if (ctx.cr0.eq) goto loc_82A2F93C;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_82A2F91C:
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// subf. r8,r7,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r7.s64;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x82a2f93c
	if (!ctx.cr0.eq) goto loc_82A2F93C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x82a2f91c
	if (!ctx.cr6.eq) goto loc_82A2F91C;
loc_82A2F93C:
	// cmpwi r8,0
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// beq 0x82a2f94c
	if (ctx.cr0.eq) goto loc_82A2F94C;
loc_82A2F948:
	// li r11,1
	ctx.r11.s64 = 1;
loc_82A2F94C:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A2F954"))) PPC_WEAK_FUNC(sub_82A2F954);
PPC_FUNC_IMPL(__imp__sub_82A2F954) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A2F958"))) PPC_WEAK_FUNC(sub_82A2F958);
PPC_FUNC_IMPL(__imp__sub_82A2F958) {
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
	// lis r9,-32248
	ctx.r9.s64 = -2113404928;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r9,-14336
	ctx.r9.s64 = ctx.r9.s64 + -14336;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// li r30,4
	ctx.r30.s64 = 4;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// mr r9,r7
	ctx.r9.u64 = ctx.r7.u64;
	// stw r10,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r10.u32);
	// li r8,2
	ctx.r8.s64 = 2;
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// li r7,4
	ctx.r7.s64 = 4;
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r10,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r10.u32);
	// stw r10,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r10.u32);
	// stw r10,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r10.u32);
	// stw r11,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r11.u32);
	// stw r11,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r11.u32);
	// stw r11,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r11.u32);
	// stw r30,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r30.u32);
	// bl 0x82a2ebd0
	ctx.lr = 0x82A2F9C8;
	sub_82A2EBD0(ctx, base);
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

__attribute__((alias("__imp__sub_82A2F9E4"))) PPC_WEAK_FUNC(sub_82A2F9E4);
PPC_FUNC_IMPL(__imp__sub_82A2F9E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A2F9E8"))) PPC_WEAK_FUNC(sub_82A2F9E8);
PPC_FUNC_IMPL(__imp__sub_82A2F9E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x82A2F9F0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmplw cr6,r4,r5
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r5.u32, ctx.xer);
	// bge cr6,0x82a2fa20
	if (!ctx.cr6.lt) goto loc_82A2FA20;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
loc_82A2FA0C:
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82a2fa20
	if (!ctx.cr6.lt) goto loc_82A2FA20;
	// addi r31,r31,2
	ctx.r31.s64 = ctx.r31.s64 + 2;
	// cmplw cr6,r31,r5
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r5.u32, ctx.xer);
	// blt cr6,0x82a2fa0c
	if (ctx.cr6.lt) goto loc_82A2FA0C;
loc_82A2FA20:
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// subf r11,r31,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r31.s64;
	// srawi r11,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 1;
	// rlwinm r5,r11,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// bl 0x82fa20f0
	ctx.lr = 0x82A2FA3C;
	sub_82FA20F0(ctx, base);
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// subf r11,r31,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r31.s64;
	// srawi r11,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 1;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stw r11,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A2FA60"))) PPC_WEAK_FUNC(sub_82A2FA60);
PPC_FUNC_IMPL(__imp__sub_82A2FA60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x82A2FA68;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmplw cr6,r4,r5
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r5.u32, ctx.xer);
	// bge cr6,0x82a2fa98
	if (!ctx.cr6.lt) goto loc_82A2FA98;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
loc_82A2FA84:
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82a2fa98
	if (!ctx.cr6.lt) goto loc_82A2FA98;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmplw cr6,r31,r5
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r5.u32, ctx.xer);
	// blt cr6,0x82a2fa84
	if (ctx.cr6.lt) goto loc_82A2FA84;
loc_82A2FA98:
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// subf r11,r31,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r31.s64;
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82fa20f0
	ctx.lr = 0x82A2FAB4;
	sub_82FA20F0(ctx, base);
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// subf r11,r31,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r31.s64;
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stw r11,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A2FAD8"))) PPC_WEAK_FUNC(sub_82A2FAD8);
PPC_FUNC_IMPL(__imp__sub_82A2FAD8) {
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
	// fmr f0,f1
	ctx.f0.f64 = ctx.f1.f64;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lfs f1,5184(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5184);
	ctx.f1.f64 = double(temp.f32);
	// fcmpu cr6,f0,f1
	ctx.cr6.compare(ctx.f0.f64, ctx.f1.f64);
	// bne cr6,0x82a2fb14
	if (!ctx.cr6.eq) goto loc_82A2FB14;
	// lis r11,-32233
	ctx.r11.s64 = -2112421888;
	// lfs f1,24436(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24436);
	ctx.f1.f64 = double(temp.f32);
	// b 0x82a2fb60
	goto loc_82A2FB60;
loc_82A2FB14:
	// fabs f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// fctiwz f13,f13
	ctx.f13.s64 = (ctx.f13.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f13.f64));
	// stfd f13,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f13.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bgt cr6,0x82a2fb60
	if (ctx.cr6.gt) goto loc_82A2FB60;
	// rlwinm r31,r11,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f13,r31,r30
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r30.u32);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f1
	ctx.cr6.compare(ctx.f13.f64, ctx.f1.f64);
	// beq cr6,0x82a2fb60
	if (ctx.cr6.eq) goto loc_82A2FB60;
	// lis r11,-32233
	ctx.r11.s64 = -2112421888;
	// lfs f13,24440(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24440);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f31,f0,f13
	ctx.f31.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82fa28d0
	ctx.lr = 0x82A2FB50;
	sub_82FA28D0(ctx, base);
	// lfsx f0,r31,r30
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r30.u32);
	ctx.f0.f64 = double(temp.f32);
	// frsp f13,f1
	ctx.f13.f64 = double(float(ctx.f1.f64));
	// fdivs f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f31.f64));
	// fmuls f1,f0,f13
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
loc_82A2FB60:
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

__attribute__((alias("__imp__sub_82A2FB7C"))) PPC_WEAK_FUNC(sub_82A2FB7C);
PPC_FUNC_IMPL(__imp__sub_82A2FB7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A2FB80"))) PPC_WEAK_FUNC(sub_82A2FB80);
PPC_FUNC_IMPL(__imp__sub_82A2FB80) {
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
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82a2fbb4
	if (ctx.cr6.eq) goto loc_82A2FBB4;
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
loc_82A2FBA8:
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82a2fba8
	if (!ctx.cr6.eq) goto loc_82A2FBA8;
loc_82A2FBB4:
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82a2fbdc
	if (ctx.cr6.eq) goto loc_82A2FBDC;
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// lis r10,8
	ctx.r10.s64 = 524288;
	// li r4,0
	ctx.r4.s64 = 0;
	// ori r10,r10,63156
	ctx.r10.u64 = ctx.r10.u64 | 63156;
	// lwz r11,24028(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24028);
	// lwzx r3,r11,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// bl 0x82a81d88
	ctx.lr = 0x82A2FBDC;
	sub_82A81D88(ctx, base);
loc_82A2FBDC:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82A2FC04"))) PPC_WEAK_FUNC(sub_82A2FC04);
PPC_FUNC_IMPL(__imp__sub_82A2FC04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A2FC08"))) PPC_WEAK_FUNC(sub_82A2FC08);
PPC_FUNC_IMPL(__imp__sub_82A2FC08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7670
	ctx.lr = 0x82A2FC10;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lis r26,-31963
	ctx.r26.s64 = -2094727168;
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// lis r8,8
	ctx.r8.s64 = 524288;
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// ori r27,r8,63156
	ctx.r27.u64 = ctx.r8.u64 | 63156;
	// srawi r9,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 2;
	// lwz r11,24028(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 24028);
	// li r4,0
	ctx.r4.s64 = 0;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// rlwinm r28,r10,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r27
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r27.u32);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// bl 0x82a81490
	ctx.lr = 0x82A2FC54;
	sub_82A81490(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne 0x82a2fc64
	if (!ctx.cr0.eq) goto loc_82A2FC64;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82a2fce0
	goto loc_82A2FCE0;
loc_82A2FC64:
	// clrlwi. r11,r30,30
	ctx.r11.u64 = ctx.r30.u32 & 0x3;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
	// beq 0x82a2fc78
	if (ctx.cr0.eq) goto loc_82A2FC78;
	// subf r11,r11,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r11.s64;
	// addi r29,r11,4
	ctx.r29.s64 = ctx.r11.s64 + 4;
loc_82A2FC78:
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82fa20f0
	ctx.lr = 0x82A2FC94;
	sub_82FA20F0(ctx, base);
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82a2fcb0
	if (ctx.cr6.eq) goto loc_82A2FCB0;
	// lwz r11,24028(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 24028);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwzx r3,r11,r27
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r27.u32);
	// bl 0x82a81d88
	ctx.lr = 0x82A2FCB0;
	sub_82A81D88(ctx, base);
loc_82A2FCB0:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// add r10,r28,r29
	ctx.r10.u64 = ctx.r28.u64 + ctx.r29.u64;
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// stw r10,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r10.u32);
	// stw r29,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r29.u32);
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_82A2FCE0:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82fa76c0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A2FCE8"))) PPC_WEAK_FUNC(sub_82A2FCE8);
PPC_FUNC_IMPL(__imp__sub_82A2FCE8) {
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
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82a2fd1c
	if (ctx.cr6.eq) goto loc_82A2FD1C;
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
loc_82A2FD10:
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82a2fd10
	if (!ctx.cr6.eq) goto loc_82A2FD10;
loc_82A2FD1C:
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82a2fd44
	if (ctx.cr6.eq) goto loc_82A2FD44;
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// lis r10,8
	ctx.r10.s64 = 524288;
	// li r4,0
	ctx.r4.s64 = 0;
	// ori r10,r10,63156
	ctx.r10.u64 = ctx.r10.u64 | 63156;
	// lwz r11,24028(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24028);
	// lwzx r3,r11,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// bl 0x82a81d88
	ctx.lr = 0x82A2FD44;
	sub_82A81D88(ctx, base);
loc_82A2FD44:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82A2FD6C"))) PPC_WEAK_FUNC(sub_82A2FD6C);
PPC_FUNC_IMPL(__imp__sub_82A2FD6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A2FD70"))) PPC_WEAK_FUNC(sub_82A2FD70);
PPC_FUNC_IMPL(__imp__sub_82A2FD70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa766c
	ctx.lr = 0x82A2FD78;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r25,12
	ctx.r25.s64 = 12;
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// lis r26,-31963
	ctx.r26.s64 = -2094727168;
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// lis r8,8
	ctx.r8.s64 = 524288;
	// divw r9,r11,r25
	ctx.r9.s32 = ctx.r11.s32 / ctx.r25.s32;
	// lwz r11,24028(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 24028);
	// ori r27,r8,63156
	ctx.r27.u64 = ctx.r8.u64 | 63156;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mulli r28,r10,12
	ctx.r28.s64 = ctx.r10.s64 * 12;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwzx r3,r11,r27
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r27.u32);
	// bl 0x82a81490
	ctx.lr = 0x82A2FDC0;
	sub_82A81490(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne 0x82a2fdd0
	if (!ctx.cr0.eq) goto loc_82A2FDD0;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82a2fe4c
	goto loc_82A2FE4C;
loc_82A2FDD0:
	// clrlwi. r11,r30,30
	ctx.r11.u64 = ctx.r30.u32 & 0x3;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
	// beq 0x82a2fde4
	if (ctx.cr0.eq) goto loc_82A2FDE4;
	// subf r11,r11,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r11.s64;
	// addi r29,r11,4
	ctx.r29.s64 = ctx.r11.s64 + 4;
loc_82A2FDE4:
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// divw r11,r11,r25
	ctx.r11.s32 = ctx.r11.s32 / ctx.r25.s32;
	// mulli r5,r11,12
	ctx.r5.s64 = ctx.r11.s64 * 12;
	// bl 0x82fa20f0
	ctx.lr = 0x82A2FE00;
	sub_82FA20F0(ctx, base);
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82a2fe1c
	if (ctx.cr6.eq) goto loc_82A2FE1C;
	// lwz r11,24028(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 24028);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwzx r3,r11,r27
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r27.u32);
	// bl 0x82a81d88
	ctx.lr = 0x82A2FE1C;
	sub_82A81D88(ctx, base);
loc_82A2FE1C:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// add r10,r28,r29
	ctx.r10.u64 = ctx.r28.u64 + ctx.r29.u64;
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// stw r10,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r10.u32);
	// stw r29,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r29.u32);
	// divw r11,r11,r25
	ctx.r11.s32 = ctx.r11.s32 / ctx.r25.s32;
	// mulli r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 * 12;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_82A2FE4C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82fa76bc
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A2FE54"))) PPC_WEAK_FUNC(sub_82A2FE54);
PPC_FUNC_IMPL(__imp__sub_82A2FE54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A2FE58"))) PPC_WEAK_FUNC(sub_82A2FE58);
PPC_FUNC_IMPL(__imp__sub_82A2FE58) {
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
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82a34158
	ctx.lr = 0x82A2FE7C;
	sub_82A34158(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82a2feac
	if (ctx.cr0.eq) goto loc_82A2FEAC;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82a2feac
	if (ctx.cr6.eq) goto loc_82A2FEAC;
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// lis r10,8
	ctx.r10.s64 = 524288;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// ori r10,r10,63156
	ctx.r10.u64 = ctx.r10.u64 | 63156;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,24028(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24028);
	// lwzx r3,r11,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// bl 0x82a81d88
	ctx.lr = 0x82A2FEAC;
	sub_82A81D88(ctx, base);
loc_82A2FEAC:
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

__attribute__((alias("__imp__sub_82A2FEC8"))) PPC_WEAK_FUNC(sub_82A2FEC8);
PPC_FUNC_IMPL(__imp__sub_82A2FEC8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa766c
	ctx.lr = 0x82A2FED0;
	__savegprlr_25(ctx, base);
	// li r27,0
	ctx.r27.s64 = 0;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// ble cr6,0x82a2ffac
	if (!ctx.cr6.gt) goto loc_82A2FFAC;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// addi r25,r5,4
	ctx.r25.s64 = ctx.r5.s64 + 4;
	// addi r26,r8,-4
	ctx.r26.s64 = ctx.r8.s64 + -4;
	// lfs f12,5184(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5184);
	ctx.f12.f64 = double(temp.f32);
loc_82A2FEF4:
	// lwz r9,8(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// mulli r10,r7,12
	ctx.r10.s64 = ctx.r7.s64 * 12;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// mullw r9,r11,r27
	ctx.r9.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r27.s32);
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// add r28,r9,r4
	ctx.r28.u64 = ctx.r9.u64 + ctx.r4.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82a2ff7c
	if (!ctx.cr6.gt) goto loc_82A2FF7C;
loc_82A2FF1C:
	// lwz r30,4(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// add r6,r8,r28
	ctx.r6.u64 = ctx.r8.u64 + ctx.r28.u64;
	// lwz r31,8(r10)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// fmr f0,f12
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f12.f64;
	// li r9,0
	ctx.r9.s64 = 0;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// ble cr6,0x82a2ff68
	if (!ctx.cr6.gt) goto loc_82A2FF68;
	// addi r31,r31,-4
	ctx.r31.s64 = ctx.r31.s64 + -4;
	// subf r6,r11,r6
	ctx.r6.s64 = ctx.r6.s64 - ctx.r11.s64;
loc_82A2FF40:
	// lbzux r29,r6,r11
	ea = ctx.r6.u32 + ctx.r11.u32;
	ctx.r29.u64 = PPC_LOAD_U8(ea);
	ctx.r6.u32 = ea;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// lfsu f13,4(r31)
	ctx.fpscr.disableFlushMode();
	ea = 4 + ctx.r31.u32;
	temp.u32 = PPC_LOAD_U32(ea);
	ctx.r31.u32 = ea;
	ctx.f13.f64 = double(temp.f32);
	// cmpw cr6,r9,r30
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r30.s32, ctx.xer);
	// std r29,-80(r1)
	PPC_STORE_U64(ctx.r1.u32 + -80, ctx.r29.u64);
	// lfd f11,-80(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// fcfid f11,f11
	ctx.f11.f64 = double(ctx.f11.s64);
	// frsp f11,f11
	ctx.f11.f64 = double(float(ctx.f11.f64));
	// fmadds f0,f11,f13,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 * ctx.f13.f64 + ctx.f0.f64));
	// blt cr6,0x82a2ff40
	if (ctx.cr6.lt) goto loc_82A2FF40;
loc_82A2FF68:
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// stfsu f0,4(r26)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	ea = 4 + ctx.r26.u32;
	PPC_STORE_U32(ea, temp.u32);
	ctx.r26.u32 = ea;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// cmpw cr6,r8,r11
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82a2ff1c
	if (ctx.cr6.lt) goto loc_82A2FF1C;
loc_82A2FF7C:
	// lwz r10,8(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 8);
	// li r9,12
	ctx.r9.s64 = 12;
	// lwz r8,4(r25)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// subf r10,r8,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r8.s64;
	// divw r10,r10,r9
	ctx.r10.s32 = ctx.r10.s32 / ctx.r9.s32;
	// cmplw cr6,r7,r10
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82a2ffa8
	if (ctx.cr6.lt) goto loc_82A2FFA8;
	// lwz r10,0(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// li r7,0
	ctx.r7.s64 = 0;
	// add r27,r10,r27
	ctx.r27.u64 = ctx.r10.u64 + ctx.r27.u64;
loc_82A2FFA8:
	// bdnz 0x82a2fef4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82A2FEF4;
loc_82A2FFAC:
	// b 0x82fa76bc
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A2FFB0"))) PPC_WEAK_FUNC(sub_82A2FFB0);
PPC_FUNC_IMPL(__imp__sub_82A2FFB0) {
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
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82a2ffe4
	if (ctx.cr6.eq) goto loc_82A2FFE4;
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
loc_82A2FFD8:
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82a2ffd8
	if (!ctx.cr6.eq) goto loc_82A2FFD8;
loc_82A2FFE4:
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82a3000c
	if (ctx.cr6.eq) goto loc_82A3000C;
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// lis r10,8
	ctx.r10.s64 = 524288;
	// li r4,0
	ctx.r4.s64 = 0;
	// ori r10,r10,63156
	ctx.r10.u64 = ctx.r10.u64 | 63156;
	// lwz r11,24028(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24028);
	// lwzx r3,r11,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// bl 0x82a81d88
	ctx.lr = 0x82A3000C;
	sub_82A81D88(ctx, base);
loc_82A3000C:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82A30034"))) PPC_WEAK_FUNC(sub_82A30034);
PPC_FUNC_IMPL(__imp__sub_82A30034) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A30038"))) PPC_WEAK_FUNC(sub_82A30038);
PPC_FUNC_IMPL(__imp__sub_82A30038) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7670
	ctx.lr = 0x82A30040;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lis r26,-31963
	ctx.r26.s64 = -2094727168;
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// lis r8,8
	ctx.r8.s64 = 524288;
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// ori r27,r8,63156
	ctx.r27.u64 = ctx.r8.u64 | 63156;
	// srawi r9,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 1;
	// lwz r11,24028(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 24028);
	// li r4,0
	ctx.r4.s64 = 0;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// rlwinm r28,r10,1,0,30
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lwzx r3,r11,r27
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r27.u32);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// bl 0x82a81490
	ctx.lr = 0x82A30084;
	sub_82A81490(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne 0x82a30094
	if (!ctx.cr0.eq) goto loc_82A30094;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82a30110
	goto loc_82A30110;
loc_82A30094:
	// clrlwi. r11,r30,30
	ctx.r11.u64 = ctx.r30.u32 & 0x3;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
	// beq 0x82a300a8
	if (ctx.cr0.eq) goto loc_82A300A8;
	// subf r11,r11,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r11.s64;
	// addi r29,r11,4
	ctx.r29.s64 = ctx.r11.s64 + 4;
loc_82A300A8:
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// srawi r11,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 1;
	// rlwinm r5,r11,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// bl 0x82fa20f0
	ctx.lr = 0x82A300C4;
	sub_82FA20F0(ctx, base);
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82a300e0
	if (ctx.cr6.eq) goto loc_82A300E0;
	// lwz r11,24028(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 24028);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwzx r3,r11,r27
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r27.u32);
	// bl 0x82a81d88
	ctx.lr = 0x82A300E0;
	sub_82A81D88(ctx, base);
loc_82A300E0:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// add r10,r28,r29
	ctx.r10.u64 = ctx.r28.u64 + ctx.r29.u64;
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// stw r10,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r10.u32);
	// stw r29,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r29.u32);
	// srawi r11,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 1;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_82A30110:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82fa76c0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A30118"))) PPC_WEAK_FUNC(sub_82A30118);
PPC_FUNC_IMPL(__imp__sub_82A30118) {
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
	// lwz r5,8(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// subf r10,r11,r5
	ctx.r10.s64 = ctx.r5.s64 - ctx.r11.s64;
	// srawi r10,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 2;
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82a301f0
	if (!ctx.cr6.gt) goto loc_82A301F0;
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82a301bc
	if (!ctx.cr6.gt) goto loc_82A301BC;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82a30170
	if (!ctx.cr6.eq) goto loc_82A30170;
	// li r9,4
	ctx.r9.s64 = 4;
	// b 0x82a30178
	goto loc_82A30178;
loc_82A30170:
	// addi r10,r11,7
	ctx.r10.s64 = ctx.r11.s64 + 7;
	// rlwinm r9,r10,29,3,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x1FFFFFFF;
loc_82A30178:
	// subf r10,r11,r30
	ctx.r10.s64 = ctx.r30.s64 - ctx.r11.s64;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bgt cr6,0x82a3019c
	if (ctx.cr6.gt) goto loc_82A3019C;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82a30194
	if (!ctx.cr6.eq) goto loc_82A30194;
	// li r10,4
	ctx.r10.s64 = 4;
	// b 0x82a3019c
	goto loc_82A3019C;
loc_82A30194:
	// addi r11,r11,7
	ctx.r11.s64 = ctx.r11.s64 + 7;
	// rlwinm r10,r11,29,3,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
loc_82A3019C:
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a2fc08
	ctx.lr = 0x82A301A8;
	sub_82A2FC08(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82a301bc
	if (!ctx.cr0.eq) goto loc_82A301BC;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x82a30208
	goto loc_82A30208;
loc_82A301BC:
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82a301e8
	if (ctx.cr6.eq) goto loc_82A301E8;
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
loc_82A301DC:
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82a301dc
	if (!ctx.cr6.eq) goto loc_82A301DC;
loc_82A301E8:
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// b 0x82a30204
	goto loc_82A30204;
loc_82A301F0:
	// bge cr6,0x82a30204
	if (!ctx.cr6.lt) goto loc_82A30204;
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x82a2fa60
	ctx.lr = 0x82A30204;
	sub_82A2FA60(ctx, base);
loc_82A30204:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82A30208:
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

__attribute__((alias("__imp__sub_82A30220"))) PPC_WEAK_FUNC(sub_82A30220);
PPC_FUNC_IMPL(__imp__sub_82A30220) {
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
	// lwz r5,20(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82a3025c
	if (ctx.cr6.eq) goto loc_82A3025C;
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// lis r10,8
	ctx.r10.s64 = 524288;
	// li r4,0
	ctx.r4.s64 = 0;
	// ori r10,r10,63156
	ctx.r10.u64 = ctx.r10.u64 | 63156;
	// lwz r11,24028(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24028);
	// lwzx r3,r11,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// bl 0x82a81d88
	ctx.lr = 0x82A3025C;
	sub_82A81D88(ctx, base);
loc_82A3025C:
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// bl 0x82a2fce8
	ctx.lr = 0x82A3026C;
	sub_82A2FCE8(ctx, base);
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

__attribute__((alias("__imp__sub_82A30280"))) PPC_WEAK_FUNC(sub_82A30280);
PPC_FUNC_IMPL(__imp__sub_82A30280) {
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
	// lwz r5,8(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r9,12
	ctx.r9.s64 = 12;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// subf r10,r11,r5
	ctx.r10.s64 = ctx.r5.s64 - ctx.r11.s64;
	// divw r10,r10,r9
	ctx.r10.s32 = ctx.r10.s32 / ctx.r9.s32;
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82a3035c
	if (!ctx.cr6.gt) goto loc_82A3035C;
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// divw r11,r11,r9
	ctx.r11.s32 = ctx.r11.s32 / ctx.r9.s32;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82a30328
	if (!ctx.cr6.gt) goto loc_82A30328;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82a302dc
	if (!ctx.cr6.eq) goto loc_82A302DC;
	// li r9,4
	ctx.r9.s64 = 4;
	// b 0x82a302e4
	goto loc_82A302E4;
loc_82A302DC:
	// addi r10,r11,7
	ctx.r10.s64 = ctx.r11.s64 + 7;
	// rlwinm r9,r10,29,3,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x1FFFFFFF;
loc_82A302E4:
	// subf r10,r11,r30
	ctx.r10.s64 = ctx.r30.s64 - ctx.r11.s64;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bgt cr6,0x82a30308
	if (ctx.cr6.gt) goto loc_82A30308;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82a30300
	if (!ctx.cr6.eq) goto loc_82A30300;
	// li r10,4
	ctx.r10.s64 = 4;
	// b 0x82a30308
	goto loc_82A30308;
loc_82A30300:
	// addi r11,r11,7
	ctx.r11.s64 = ctx.r11.s64 + 7;
	// rlwinm r10,r11,29,3,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
loc_82A30308:
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a2fd70
	ctx.lr = 0x82A30314;
	sub_82A2FD70(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82a30328
	if (!ctx.cr0.eq) goto loc_82A30328;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x82a30374
	goto loc_82A30374;
loc_82A30328:
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mulli r10,r30,12
	ctx.r10.s64 = ctx.r30.s64 * 12;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82a30354
	if (ctx.cr6.eq) goto loc_82A30354;
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
loc_82A30348:
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82a30348
	if (!ctx.cr6.eq) goto loc_82A30348;
loc_82A30354:
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// b 0x82a30370
	goto loc_82A30370;
loc_82A3035C:
	// bge cr6,0x82a30370
	if (!ctx.cr6.lt) goto loc_82A30370;
	// mulli r10,r30,12
	ctx.r10.s64 = ctx.r30.s64 * 12;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a2f870
	ctx.lr = 0x82A30370;
	sub_82A2F870(ctx, base);
loc_82A30370:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82A30374:
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

__attribute__((alias("__imp__sub_82A3038C"))) PPC_WEAK_FUNC(sub_82A3038C);
PPC_FUNC_IMPL(__imp__sub_82A3038C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A30390"))) PPC_WEAK_FUNC(sub_82A30390);
PPC_FUNC_IMPL(__imp__sub_82A30390) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7668
	ctx.lr = 0x82A30398;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// li r26,0
	ctx.r26.s64 = 0;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// ble cr6,0x82a303c8
	if (!ctx.cr6.gt) goto loc_82A303C8;
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
loc_82A303B8:
	// lwz r10,372(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 372);
	// stwx r26,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r26.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x82a303b8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82A303B8;
loc_82A303C8:
	// lwz r11,344(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 344);
	// addi r6,r31,336
	ctx.r6.s64 = ctx.r31.s64 + 336;
	// lwz r10,340(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 340);
	// mr r8,r26
	ctx.r8.u64 = ctx.r26.u64;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi. r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82a3049c
	if (ctx.cr0.eq) goto loc_82A3049C;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
loc_82A303EC:
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// mr r9,r26
	ctx.r9.u64 = ctx.r26.u64;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// ble cr6,0x82a30468
	if (!ctx.cr6.gt) goto loc_82A30468;
	// lwz r10,340(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 340);
	// lwzx r10,r10,r7
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r7.u32);
loc_82A30404:
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x82a30438
	if (ctx.cr6.eq) goto loc_82A30438;
	// lwz r29,4(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// subfc r28,r29,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r29.u32;
	ctx.r28.s64 = ctx.r11.s64 - ctx.r29.s64;
	// rlwinm r27,r11,1,31,31
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// rlwinm r29,r29,1,31,31
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0x1;
	// cmpw cr6,r9,r5
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r5.s32, ctx.xer);
	// subfe r29,r27,r29
	temp.u8 = (~ctx.r27.u32 + ctx.r29.u32 < ~ctx.r27.u32) | (~ctx.r27.u32 + ctx.r29.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r29.u64 = ~ctx.r27.u64 + ctx.r29.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r29,r11
	ctx.r11.u64 = ctx.r29.u64 & ctx.r11.u64;
	// blt cr6,0x82a30404
	if (ctx.cr6.lt) goto loc_82A30404;
	// b 0x82a30468
	goto loc_82A30468;
loc_82A30438:
	// subf. r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge 0x82a30448
	if (!ctx.cr0.lt) goto loc_82A30448;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_82A30448:
	// lwz r10,332(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 332);
	// rlwinm r29,r11,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r28,372(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 372);
	// lwz r27,36(r10)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	// lwz r11,40(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 40);
	// mullw r10,r27,r8
	ctx.r10.s64 = int64_t(ctx.r27.s32) * int64_t(ctx.r8.s32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stwx r11,r28,r29
	PPC_STORE_U32(ctx.r28.u32 + ctx.r29.u32, ctx.r11.u32);
loc_82A30468:
	// cmpw cr6,r9,r5
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r5.s32, ctx.xer);
	// bne cr6,0x82a3047c
	if (!ctx.cr6.eq) goto loc_82A3047C;
	// lwz r11,356(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 356);
	// sthx r8,r11,r3
	PPC_STORE_U16(ctx.r11.u32 + ctx.r3.u32, ctx.r8.u16);
	// addi r3,r3,2
	ctx.r3.s64 = ctx.r3.s64 + 2;
loc_82A3047C:
	// lwz r11,8(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// lwz r10,4(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// cmplw cr6,r8,r11
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82a303ec
	if (ctx.cr6.lt) goto loc_82A303EC;
loc_82A3049C:
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// ble cr6,0x82a305d0
	if (!ctx.cr6.gt) goto loc_82A305D0;
	// mr r27,r26
	ctx.r27.u64 = ctx.r26.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
loc_82A304B0:
	// lwz r11,372(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 372);
	// lwzx r11,r27,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r11.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82a305a8
	if (!ctx.cr6.eq) goto loc_82A305A8;
	// lwz r11,356(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 356);
	// addi r5,r31,92
	ctx.r5.s64 = ctx.r31.s64 + 92;
	// lwz r10,340(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 340);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lhax r9,r11,r26
	ctx.r9.s64 = int16_t(PPC_LOAD_U16(ctx.r11.u32 + ctx.r26.u32));
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r29,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r29.u32);
	// lwz r10,332(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 332);
	// lwz r8,372(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 372);
	// lwz r11,40(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 40);
	// lwz r10,36(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	// mullw r10,r10,r9
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r9.s32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stwx r11,r27,r8
	PPC_STORE_U32(ctx.r27.u32 + ctx.r8.u32, ctx.r11.u32);
	// lwz r9,372(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 372);
	// lwz r10,40(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// lwz r7,304(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 304);
	// lwz r6,308(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 308);
	// lwz r11,36(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// mullw r11,r11,r29
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r29.s32);
	// lwzx r28,r27,r9
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r9.u32);
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// bl 0x82a2fec8
	ctx.lr = 0x82A30520;
	sub_82A2FEC8(ctx, base);
	// lwz r9,32(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r11,308(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 308);
	// addi r5,r31,124
	ctx.r5.s64 = ctx.r31.s64 + 124;
	// lwz r4,312(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 312);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mullw r11,r11,r9
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r9.s32);
	// lwz r10,40(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// lwz r7,320(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 320);
	// lwz r6,316(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 316);
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r28,r8,r28
	ctx.r28.u64 = ctx.r8.u64 + ctx.r28.u64;
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// lwz r24,28(r30)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// lwz r9,36(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// mullw r11,r4,r24
	ctx.r11.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r24.s32);
	// mullw r9,r9,r29
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r29.s32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x82a2fec8
	ctx.lr = 0x82A3056C;
	sub_82A2FEC8(ctx, base);
	// lwz r9,32(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r11,316(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 316);
	// addi r5,r31,148
	ctx.r5.s64 = ctx.r31.s64 + 148;
	// lwz r8,36(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mullw r11,r11,r9
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r9.s32);
	// lwz r10,40(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// lwz r7,324(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 324);
	// lwz r6,328(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 328);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mullw r11,r8,r29
	ctx.r11.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r29.s32);
	// add r8,r9,r28
	ctx.r8.u64 = ctx.r9.u64 + ctx.r28.u64;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x82a2fec8
	ctx.lr = 0x82A305A4;
	sub_82A2FEC8(ctx, base);
	// addi r26,r26,2
	ctx.r26.s64 = ctx.r26.s64 + 2;
loc_82A305A8:
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r11,r29,1
	ctx.r11.s64 = ctx.r29.s64 + 1;
	// addi r27,r27,4
	ctx.r27.s64 = ctx.r27.s64 + 4;
	// subfc r9,r10,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r10.u32;
	ctx.r9.s64 = ctx.r11.s64 - ctx.r10.s64;
	// rlwinm r8,r11,1,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// rlwinm r10,r10,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// subfe r10,r8,r10
	temp.u8 = (~ctx.r8.u32 + ctx.r10.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r8.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addic. r25,r25,-1
	ctx.xer.ca = ctx.r25.u32 > 0;
	ctx.r25.s64 = ctx.r25.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// and r29,r10,r11
	ctx.r29.u64 = ctx.r10.u64 & ctx.r11.u64;
	// bne 0x82a304b0
	if (!ctx.cr0.eq) goto loc_82A304B0;
loc_82A305D0:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82fa76b8
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A305D8"))) PPC_WEAK_FUNC(sub_82A305D8);
PPC_FUNC_IMPL(__imp__sub_82A305D8) {
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
	// lwz r5,8(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// subf r10,r11,r5
	ctx.r10.s64 = ctx.r5.s64 - ctx.r11.s64;
	// srawi r10,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 1;
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82a306b0
	if (!ctx.cr6.gt) goto loc_82A306B0;
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi r11,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 1;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82a3067c
	if (!ctx.cr6.gt) goto loc_82A3067C;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82a30630
	if (!ctx.cr6.eq) goto loc_82A30630;
	// li r9,4
	ctx.r9.s64 = 4;
	// b 0x82a30638
	goto loc_82A30638;
loc_82A30630:
	// addi r10,r11,7
	ctx.r10.s64 = ctx.r11.s64 + 7;
	// rlwinm r9,r10,29,3,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x1FFFFFFF;
loc_82A30638:
	// subf r10,r11,r30
	ctx.r10.s64 = ctx.r30.s64 - ctx.r11.s64;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bgt cr6,0x82a3065c
	if (ctx.cr6.gt) goto loc_82A3065C;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82a30654
	if (!ctx.cr6.eq) goto loc_82A30654;
	// li r10,4
	ctx.r10.s64 = 4;
	// b 0x82a3065c
	goto loc_82A3065C;
loc_82A30654:
	// addi r11,r11,7
	ctx.r11.s64 = ctx.r11.s64 + 7;
	// rlwinm r10,r11,29,3,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
loc_82A3065C:
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a30038
	ctx.lr = 0x82A30668;
	sub_82A30038(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82a3067c
	if (!ctx.cr0.eq) goto loc_82A3067C;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x82a306c8
	goto loc_82A306C8;
loc_82A3067C:
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm r10,r30,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82a306a8
	if (ctx.cr6.eq) goto loc_82A306A8;
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
loc_82A3069C:
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82a3069c
	if (!ctx.cr6.eq) goto loc_82A3069C;
loc_82A306A8:
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// b 0x82a306c4
	goto loc_82A306C4;
loc_82A306B0:
	// bge cr6,0x82a306c4
	if (!ctx.cr6.lt) goto loc_82A306C4;
	// rlwinm r10,r30,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x82a2f9e8
	ctx.lr = 0x82A306C4;
	sub_82A2F9E8(ctx, base);
loc_82A306C4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82A306C8:
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

__attribute__((alias("__imp__sub_82A306E0"))) PPC_WEAK_FUNC(sub_82A306E0);
PPC_FUNC_IMPL(__imp__sub_82A306E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa765c
	ctx.lr = 0x82A306E8;
	__savegprlr_21(ctx, base);
	// addi r12,r1,-96
	ctx.r12.s64 = ctx.r1.s64 + -96;
	// bl 0x82fa8d18
	ctx.lr = 0x82A306F0;
	__savefpr_24(ctx, base);
	// stwu r1,-336(r1)
	ea = -336 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x82a36380
	ctx.lr = 0x82A3070C;
	sub_82A36380(ctx, base);
	// divwu r24,r30,r3
	ctx.r24.u32 = ctx.r30.u32 / ctx.r3.u32;
	// divwu r21,r31,r3
	ctx.r21.u32 = ctx.r31.u32 / ctx.r3.u32;
	// clrldi r10,r24,32
	ctx.r10.u64 = ctx.r24.u64 & 0xFFFFFFFF;
	// clrldi r9,r21,32
	ctx.r9.u64 = ctx.r21.u64 & 0xFFFFFFFF;
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// lis r11,-32233
	ctx.r11.s64 = -2112421888;
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// lfs f28,24436(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24436);
	ctx.f28.f64 = double(temp.f32);
	// frsp f24,f0
	ctx.f24.f64 = double(float(ctx.f0.f64));
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fdivs f27,f13,f24
	ctx.f27.f64 = double(float(ctx.f13.f64 / ctx.f24.f64));
	// fcmpu cr6,f27,f28
	ctx.cr6.compare(ctx.f27.f64, ctx.f28.f64);
	// bge cr6,0x82a30754
	if (!ctx.cr6.lt) goto loc_82A30754;
	// fmr f27,f28
	ctx.f27.f64 = ctx.f28.f64;
loc_82A30754:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// li r25,0
	ctx.r25.s64 = 0;
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// stw r25,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r25.u32);
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// stw r25,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r25.u32);
	// lfs f0,-9860(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -9860);
	ctx.f0.f64 = double(temp.f32);
	// stw r25,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r25.u32);
	// fmuls f26,f27,f0
	ctx.f26.f64 = double(float(ctx.f27.f64 * ctx.f0.f64));
	// stw r25,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r25.u32);
	// bl 0x82a36278
	ctx.lr = 0x82A30784;
	sub_82A36278(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// blt 0x82a3091c
	if (ctx.cr0.lt) goto loc_82A3091C;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,21496(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 21496);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f26,f0
	ctx.f0.f64 = double(float(ctx.f26.f64 * ctx.f0.f64));
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f0.f64));
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// subfic r4,r11,1
	ctx.xer.ca = ctx.r11.u32 <= 1;
	ctx.r4.s64 = 1 - ctx.r11.s64;
	// bl 0x82a30118
	ctx.lr = 0x82A307B0;
	sub_82A30118(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x82a30918
	if (ctx.cr0.lt) goto loc_82A30918;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82a2f758
	ctx.lr = 0x82A307C0;
	sub_82A2F758(ctx, base);
	// mr r27,r25
	ctx.r27.u64 = ctx.r25.u64;
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// beq cr6,0x82a30910
	if (ctx.cr6.eq) goto loc_82A30910;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r26,116(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lis r11,-31975
	ctx.r11.s64 = -2095513600;
	// addi r23,r11,-11184
	ctx.r23.s64 = ctx.r11.s64 + -11184;
	// lfs f25,5184(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5184);
	ctx.f25.f64 = double(temp.f32);
loc_82A307E0:
	// mullw r11,r27,r21
	ctx.r11.s64 = int64_t(ctx.r27.s32) * int64_t(ctx.r21.s32);
	// clrldi r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fdivs f30,f0,f24
	ctx.f30.f64 = double(float(ctx.f0.f64 / ctx.f24.f64));
	// bne cr6,0x82a3081c
	if (!ctx.cr6.eq) goto loc_82A3081C;
	// fcmpu cr6,f27,f28
	ctx.cr6.compare(ctx.f27.f64, ctx.f28.f64);
	// bne cr6,0x82a3081c
	if (!ctx.cr6.eq) goto loc_82A3081C;
	// stfs f28,0(r26)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r26.u32 + 0, temp.u32);
	// mr r29,r25
	ctx.r29.u64 = ctx.r25.u64;
	// li r30,1
	ctx.r30.s64 = 1;
	// b 0x82a308c0
	goto loc_82A308C0;
loc_82A3081C:
	// fsubs f1,f30,f26
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f30.f64 - ctx.f26.f64));
	// bl 0x82fa99d8
	ctx.lr = 0x82A30824;
	sub_82FA99D8(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// fadds f1,f30,f26
	ctx.f1.f64 = double(float(ctx.f30.f64 + ctx.f26.f64));
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f0.f64));
	// stfd f0,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f0.u64);
	// lwz r29,92(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// bl 0x82fa7560
	ctx.lr = 0x82A3083C;
	sub_82FA7560(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// mr r31,r25
	ctx.r31.u64 = ctx.r25.u64;
	// fmr f31,f25
	ctx.f31.f64 = ctx.f25.f64;
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f0.f64));
	// stfd f0,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f0.u64);
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// subf r11,r29,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r29.s64;
	// addic. r30,r11,1
	ctx.xer.ca = ctx.r11.u32 > 4294967294;
	ctx.r30.s64 = ctx.r11.s64 + 1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// ble 0x82a308c0
	if (!ctx.cr0.gt) goto loc_82A308C0;
	// fdivs f29,f28,f27
	ctx.f29.f64 = double(float(ctx.f28.f64 / ctx.f27.f64));
	// addi r28,r26,-4
	ctx.r28.s64 = ctx.r26.s64 + -4;
loc_82A30868:
	// add r11,r31,r29
	ctx.r11.u64 = ctx.r31.u64 + ctx.r29.u64;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// std r11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// lfd f0,96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fsubs f0,f0,f30
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f30.f64));
	// fmuls f1,f0,f29
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f29.f64));
	// bl 0x82a2fad8
	ctx.lr = 0x82A30890;
	sub_82A2FAD8(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// stfsu f1,4(r28)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	ea = 4 + ctx.r28.u32;
	PPC_STORE_U32(ea, temp.u32);
	ctx.r28.u32 = ea;
	// fadds f31,f1,f31
	ctx.f31.f64 = double(float(ctx.f1.f64 + ctx.f31.f64));
	// cmpw cr6,r31,r30
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r30.s32, ctx.xer);
	// blt cr6,0x82a30868
	if (ctx.cr6.lt) goto loc_82A30868;
	// fdivs f0,f28,f31
	ctx.f0.f64 = double(float(ctx.f28.f64 / ctx.f31.f64));
	// addi r11,r26,-4
	ctx.r11.s64 = ctx.r26.s64 + -4;
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
loc_82A308B0:
	// lfs f13,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfsu f13,4(r11)
	temp.f32 = float(ctx.f13.f64);
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x82a308b0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82A308B0;
loc_82A308C0:
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82a35e10
	ctx.lr = 0x82A308D4;
	sub_82A35E10(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x82a30910
	if (ctx.cr0.lt) goto loc_82A30910;
	// lwz r11,156(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// lwz r3,152(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82fa77c0
	ctx.lr = 0x82A308F0;
	sub_82FA77C0(ctx, base);
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x82a35f60
	ctx.lr = 0x82A30904;
	sub_82A35F60(ctx, base);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// cmplw cr6,r27,r24
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r24.u32, ctx.xer);
	// blt cr6,0x82a307e0
	if (ctx.cr6.lt) goto loc_82A307E0;
loc_82A30910:
	// addi r3,r1,132
	ctx.r3.s64 = ctx.r1.s64 + 132;
	// bl 0x82a34158
	ctx.lr = 0x82A30918;
	sub_82A34158(ctx, base);
loc_82A30918:
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
loc_82A3091C:
	// bl 0x82a2fb80
	ctx.lr = 0x82A30920;
	sub_82A2FB80(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// addi r12,r1,-96
	ctx.r12.s64 = ctx.r1.s64 + -96;
	// bl 0x82fa8d64
	ctx.lr = 0x82A30930;
	__restfpr_24(ctx, base);
	// b 0x82fa76ac
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A30934"))) PPC_WEAK_FUNC(sub_82A30934);
PPC_FUNC_IMPL(__imp__sub_82A30934) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A30938"))) PPC_WEAK_FUNC(sub_82A30938);
PPC_FUNC_IMPL(__imp__sub_82A30938) {
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
	// lwz r5,4(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82a30974
	if (ctx.cr6.eq) goto loc_82A30974;
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// lis r10,8
	ctx.r10.s64 = 524288;
	// li r4,0
	ctx.r4.s64 = 0;
	// ori r10,r10,63156
	ctx.r10.u64 = ctx.r10.u64 | 63156;
	// lwz r11,24028(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24028);
	// lwzx r3,r11,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// bl 0x82a81d88
	ctx.lr = 0x82A30974;
	sub_82A81D88(ctx, base);
loc_82A30974:
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r3,r31,52
	ctx.r3.s64 = ctx.r31.s64 + 52;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// bl 0x82a30220
	ctx.lr = 0x82A30984;
	sub_82A30220(ctx, base);
	// addi r3,r31,108
	ctx.r3.s64 = ctx.r31.s64 + 108;
	// bl 0x82a30220
	ctx.lr = 0x82A3098C;
	sub_82A30220(ctx, base);
	// addi r3,r31,84
	ctx.r3.s64 = ctx.r31.s64 + 84;
	// bl 0x82a30220
	ctx.lr = 0x82A30994;
	sub_82A30220(ctx, base);
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

__attribute__((alias("__imp__sub_82A309A8"))) PPC_WEAK_FUNC(sub_82A309A8);
PPC_FUNC_IMPL(__imp__sub_82A309A8) {
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
	// lwz r5,20(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82a309e4
	if (ctx.cr6.eq) goto loc_82A309E4;
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// lis r10,8
	ctx.r10.s64 = 524288;
	// li r4,0
	ctx.r4.s64 = 0;
	// ori r10,r10,63156
	ctx.r10.u64 = ctx.r10.u64 | 63156;
	// lwz r11,24028(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24028);
	// lwzx r3,r11,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// bl 0x82a81d88
	ctx.lr = 0x82A309E4;
	sub_82A81D88(ctx, base);
loc_82A309E4:
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// bl 0x82a2fce8
	ctx.lr = 0x82A309EC;
	sub_82A2FCE8(ctx, base);
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

__attribute__((alias("__imp__sub_82A30A00"))) PPC_WEAK_FUNC(sub_82A30A00);
PPC_FUNC_IMPL(__imp__sub_82A30A00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x82A30A08;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x82a30280
	ctx.lr = 0x82A30A1C;
	sub_82A30280(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne 0x82a30a7c
	if (!ctx.cr0.eq) goto loc_82A30A7C;
	// lis r11,16383
	ctx.r11.s64 = 1073676288;
	// rlwinm r5,r30,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// ori r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 65535;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82a30a3c
	if (!ctx.cr6.gt) goto loc_82A30A3C;
	// li r5,-1
	ctx.r5.s64 = -1;
loc_82A30A3C:
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// lis r10,8
	ctx.r10.s64 = 524288;
	// li r4,0
	ctx.r4.s64 = 0;
	// ori r10,r10,63156
	ctx.r10.u64 = ctx.r10.u64 | 63156;
	// lwz r11,24028(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24028);
	// lwzx r3,r11,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// bl 0x82a81490
	ctx.lr = 0x82A30A58;
	sub_82A81490(ctx, base);
	// stw r3,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82a30a74
	if (ctx.cr0.eq) goto loc_82A30A74;
	// rlwinm r5,r30,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82fa7cf0
	ctx.lr = 0x82A30A70;
	sub_82FA7CF0(ctx, base);
	// b 0x82a30a7c
	goto loc_82A30A7C;
loc_82A30A74:
	// lis r29,-32761
	ctx.r29.s64 = -2147024896;
	// ori r29,r29,14
	ctx.r29.u64 = ctx.r29.u64 | 14;
loc_82A30A7C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A30A88"))) PPC_WEAK_FUNC(sub_82A30A88);
PPC_FUNC_IMPL(__imp__sub_82A30A88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x82A30A90;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r29,8(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r30,4(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// b 0x82a30ab4
	goto loc_82A30AB4;
loc_82A30AA4:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a2fe58
	ctx.lr = 0x82A30AB0;
	sub_82A2FE58(ctx, base);
	// addi r30,r30,36
	ctx.r30.s64 = ctx.r30.s64 + 36;
loc_82A30AB4:
	// cmplw cr6,r30,r29
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r29.u32, ctx.xer);
	// bne cr6,0x82a30aa4
	if (!ctx.cr6.eq) goto loc_82A30AA4;
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82a30ae4
	if (ctx.cr6.eq) goto loc_82A30AE4;
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// lis r10,8
	ctx.r10.s64 = 524288;
	// li r4,0
	ctx.r4.s64 = 0;
	// ori r10,r10,63156
	ctx.r10.u64 = ctx.r10.u64 | 63156;
	// lwz r11,24028(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24028);
	// lwzx r3,r11,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// bl 0x82a81d88
	ctx.lr = 0x82A30AE4;
	sub_82A81D88(ctx, base);
loc_82A30AE4:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A30B00"))) PPC_WEAK_FUNC(sub_82A30B00);
PPC_FUNC_IMPL(__imp__sub_82A30B00) {
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
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// bl 0x82a83ff0
	ctx.lr = 0x82A30B2C;
	sub_82A83FF0(ctx, base);
	// stw r30,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r30.u32);
	// stw r30,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r30.u32);
	// addi r3,r31,40
	ctx.r3.s64 = ctx.r31.s64 + 40;
	// stw r30,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r30.u32);
	// bl 0x82a30938
	ctx.lr = 0x82A30B40;
	sub_82A30938(ctx, base);
	// addi r3,r31,172
	ctx.r3.s64 = ctx.r31.s64 + 172;
	// bl 0x82a30938
	ctx.lr = 0x82A30B48;
	sub_82A30938(ctx, base);
	// lwz r3,332(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 332);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a30b68
	if (ctx.cr6.eq) goto loc_82A30B68;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82A30B68;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82A30B68:
	// stw r30,332(r31)
	PPC_STORE_U32(ctx.r31.u32 + 332, ctx.r30.u32);
	// addi r3,r31,336
	ctx.r3.s64 = ctx.r31.s64 + 336;
	// bl 0x82a2fb80
	ctx.lr = 0x82A30B74;
	sub_82A2FB80(ctx, base);
	// addi r3,r31,352
	ctx.r3.s64 = ctx.r31.s64 + 352;
	// bl 0x82a2ffb0
	ctx.lr = 0x82A30B7C;
	sub_82A2FFB0(ctx, base);
	// addi r3,r31,368
	ctx.r3.s64 = ctx.r31.s64 + 368;
	// bl 0x82a2fb80
	ctx.lr = 0x82A30B84;
	sub_82A2FB80(ctx, base);
	// addi r3,r31,384
	ctx.r3.s64 = ctx.r31.s64 + 384;
	// bl 0x82a2eaf8
	ctx.lr = 0x82A30B8C;
	sub_82A2EAF8(ctx, base);
	// addi r3,r31,436
	ctx.r3.s64 = ctx.r31.s64 + 436;
	// bl 0x82a2eaf8
	ctx.lr = 0x82A30B94;
	sub_82A2EAF8(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82A30BB4"))) PPC_WEAK_FUNC(sub_82A30BB4);
PPC_FUNC_IMPL(__imp__sub_82A30BB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A30BB8"))) PPC_WEAK_FUNC(sub_82A30BB8);
PPC_FUNC_IMPL(__imp__sub_82A30BB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7670
	ctx.lr = 0x82A30BC0;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,196(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 196);
	// li r26,36
	ctx.r26.s64 = 36;
	// lwz r10,192(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 192);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r29,r3,188
	ctx.r29.s64 = ctx.r3.s64 + 188;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// li r28,0
	ctx.r28.s64 = 0;
	// li r30,0
	ctx.r30.s64 = 0;
	// divw. r11,r11,r26
	ctx.r11.s32 = ctx.r11.s32 / ctx.r26.s32;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82a30c34
	if (ctx.cr0.eq) goto loc_82A30C34;
	// addi r27,r3,184
	ctx.r27.s64 = ctx.r3.s64 + 184;
loc_82A30BF0:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82a35fe8
	ctx.lr = 0x82A30BFC;
	sub_82A35FE8(ctx, base);
	// lwz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// bgt cr6,0x82a30c18
	if (ctx.cr6.gt) goto loc_82A30C18;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82a35fe8
	ctx.lr = 0x82A30C14;
	sub_82A35FE8(ctx, base);
	// lwz r28,28(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
loc_82A30C18:
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// divw r11,r11,r26
	ctx.r11.s32 = ctx.r11.s32 / ctx.r26.s32;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82a30bf0
	if (ctx.cr6.lt) goto loc_82A30BF0;
loc_82A30C34:
	// lwz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lis r9,8
	ctx.r9.s64 = 524288;
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// mullw r10,r28,r10
	ctx.r10.s64 = int64_t(ctx.r28.s32) * int64_t(ctx.r10.s32);
	// rlwinm r10,r10,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// divwu r30,r9,r10
	ctx.r30.u32 = ctx.r9.u32 / ctx.r10.u32;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x82a30c5c
	if (!ctx.cr6.gt) goto loc_82A30C5C;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// b 0x82a30c68
	goto loc_82A30C68;
loc_82A30C5C:
	// cmpwi cr6,r30,32
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 32, ctx.xer);
	// bgt cr6,0x82a30c68
	if (ctx.cr6.gt) goto loc_82A30C68;
	// li r30,32
	ctx.r30.s64 = 32;
loc_82A30C68:
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// lis r10,8
	ctx.r10.s64 = 524288;
	// li r5,52
	ctx.r5.s64 = 52;
	// ori r10,r10,63156
	ctx.r10.u64 = ctx.r10.u64 | 63156;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,24028(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24028);
	// lwzx r3,r11,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// bl 0x82a81490
	ctx.lr = 0x82A30C88;
	sub_82A81490(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82a30ca8
	if (ctx.cr0.eq) goto loc_82A30CA8;
	// li r7,2
	ctx.r7.s64 = 2;
	// lwz r6,32(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82a2f958
	ctx.lr = 0x82A30CA4;
	sub_82A2F958(ctx, base);
	// b 0x82a30cac
	goto loc_82A30CAC;
loc_82A30CA8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82A30CAC:
	// stw r3,332(r31)
	PPC_STORE_U32(ctx.r31.u32 + 332, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82a30cc4
	if (!ctx.cr6.eq) goto loc_82A30CC4;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x82a30d54
	goto loc_82A30D54;
loc_82A30CC4:
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82a30d54
	if (ctx.cr6.lt) goto loc_82A30D54;
	// li r9,2
	ctx.r9.s64 = 2;
	// lwz r6,32(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// li r8,2
	ctx.r8.s64 = 2;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r7,4
	ctx.r7.s64 = 4;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r31,384
	ctx.r3.s64 = ctx.r31.s64 + 384;
	// bl 0x82a2ebd0
	ctx.lr = 0x82A30CF0;
	sub_82A2EBD0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82a30d54
	if (ctx.cr0.lt) goto loc_82A30D54;
	// li r9,2
	ctx.r9.s64 = 2;
	// lwz r6,32(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// li r8,2
	ctx.r8.s64 = 2;
	// li r7,4
	ctx.r7.s64 = 4;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,436
	ctx.r3.s64 = ctx.r31.s64 + 436;
	// bl 0x82a2ebd0
	ctx.lr = 0x82A30D18;
	sub_82A2EBD0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82a30d54
	if (ctx.cr0.lt) goto loc_82A30D54;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r31,336
	ctx.r3.s64 = ctx.r31.s64 + 336;
	// bl 0x82a30118
	ctx.lr = 0x82A30D2C;
	sub_82A30118(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82a30d54
	if (ctx.cr0.lt) goto loc_82A30D54;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r31,352
	ctx.r3.s64 = ctx.r31.s64 + 352;
	// bl 0x82a305d8
	ctx.lr = 0x82A30D40;
	sub_82A305D8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82a30d54
	if (ctx.cr0.lt) goto loc_82A30D54;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r31,368
	ctx.r3.s64 = ctx.r31.s64 + 368;
	// bl 0x82a30118
	ctx.lr = 0x82A30D54;
	sub_82A30118(ctx, base);
loc_82A30D54:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82fa76c0
	__restgprlr_26(ctx, base);
	return;
}

