#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_823ED30C"))) PPC_WEAK_FUNC(sub_823ED30C);
PPC_FUNC_IMPL(__imp__sub_823ED30C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823ED310"))) PPC_WEAK_FUNC(sub_823ED310);
PPC_FUNC_IMPL(__imp__sub_823ED310) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa766c
	ctx.lr = 0x823ED318;
	__savegprlr_25(ctx, base);
	// stfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.f31.u64);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,992(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 992);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r31,r3,48
	ctx.r31.s64 = ctx.r3.s64 + 48;
	// li r26,12
	ctx.r26.s64 = 12;
	// li r28,0
	ctx.r28.s64 = 0;
	// lwz r25,848(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + 848);
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// lfs f31,-2340(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -2340);
	ctx.f31.f64 = double(temp.f32);
	// addi r27,r11,12920
	ctx.r27.s64 = ctx.r11.s64 + 12920;
loc_823ED348:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823ed418
	if (ctx.cr6.eq) goto loc_823ED418;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,992(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 992);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x823ed380
	if (ctx.cr6.lt) goto loc_823ED380;
	// cmpwi cr6,r11,12
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 12, ctx.xer);
	// bge cr6,0x823ed380
	if (!ctx.cr6.lt) goto loc_823ED380;
	// addi r9,r11,901
	ctx.r9.s64 = ctx.r11.s64 + 901;
	// stw r11,848(r10)
	PPC_STORE_U32(ctx.r10.u32 + 848, ctx.r11.u32);
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// stw r11,3600(r10)
	PPC_STORE_U32(ctx.r10.u32 + 3600, ctx.r11.u32);
loc_823ED380:
	// lwz r11,992(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 992);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r10,6
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 6, ctx.xer);
	// lwz r29,3600(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3600);
	// bne cr6,0x823ed3f4
	if (!ctx.cr6.eq) goto loc_823ED3F4;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823ec9d0
	ctx.lr = 0x823ED3A0;
	sub_823EC9D0(ctx, base);
	// lwz r11,464(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 464);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x823ed418
	if (ctx.cr6.eq) goto loc_823ED418;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// li r11,6
	ctx.r11.s64 = 6;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// addi r10,r1,72
	ctx.r10.s64 = ctx.r1.s64 + 72;
	// stw r28,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r28.u32);
	// li r7,-1
	ctx.r7.s64 = -1;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// stvx128 v77,r0,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v77.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stfs f31,112(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stw r7,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r7.u32);
	// stfs f31,116(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// addi r9,r31,-8
	ctx.r9.s64 = ctx.r31.s64 + -8;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_823ED3E4:
	// ldu r11,8(r10)
	ea = 8 + ctx.r10.u32;
	ctx.r11.u64 = PPC_LOAD_U64(ea);
	ctx.r10.u32 = ea;
	// stdu r11,8(r9)
	ea = 8 + ctx.r9.u32;
	PPC_STORE_U64(ea, ctx.r11.u64);
	ctx.r9.u32 = ea;
	// bdnz 0x823ed3e4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823ED3E4;
	// b 0x823ed418
	goto loc_823ED418;
loc_823ED3F4:
	// li r11,6
	ctx.r11.s64 = 6;
	// stfs f31,36(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 36, temp.u32);
	// lfs f1,4(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	ctx.f1.f64 = double(temp.f32);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// lwz r3,992(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 992);
	// bl 0x82360918
	ctx.lr = 0x823ED40C;
	sub_82360918(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823ec9d0
	ctx.lr = 0x823ED418;
	sub_823EC9D0(ctx, base);
loc_823ED418:
	// addic. r26,r26,-1
	ctx.xer.ca = ctx.r26.u32 > 0;
	ctx.r26.s64 = ctx.r26.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// addi r31,r31,48
	ctx.r31.s64 = ctx.r31.s64 + 48;
	// bne 0x823ed348
	if (!ctx.cr0.eq) goto loc_823ED348;
	// lwz r11,992(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 992);
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// blt cr6,0x823ed44c
	if (ctx.cr6.lt) goto loc_823ED44C;
	// cmpwi cr6,r25,12
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 12, ctx.xer);
	// bge cr6,0x823ed44c
	if (!ctx.cr6.lt) goto loc_823ED44C;
	// addi r10,r25,901
	ctx.r10.s64 = ctx.r25.s64 + 901;
	// stw r25,848(r11)
	PPC_STORE_U32(ctx.r11.u32 + 848, ctx.r25.u32);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// stw r10,3600(r11)
	PPC_STORE_U32(ctx.r11.u32 + 3600, ctx.r10.u32);
loc_823ED44C:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// lfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x82fa76bc
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823ED458"))) PPC_WEAK_FUNC(sub_823ED458);
PPC_FUNC_IMPL(__imp__sub_823ED458) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// stw r4,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r4.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r5,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r5.u32);
	// stb r10,12(r3)
	PPC_STORE_U8(ctx.r3.u32 + 12, ctx.r10.u8);
	// lfs f0,-2340(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -2340);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,24(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 24, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823ED478"))) PPC_WEAK_FUNC(sub_823ED478);
PPC_FUNC_IMPL(__imp__sub_823ED478) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// stw r4,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r4.u32);
	// li r10,48
	ctx.r10.s64 = 48;
	// li r9,1
	ctx.r9.s64 = 1;
	// stb r9,32(r3)
	PPC_STORE_U8(ctx.r3.u32 + 32, ctx.r9.u8);
	// lfs f0,-2340(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -2340);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,64(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 64, temp.u32);
	// stvx128 v1,r3,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32 + ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v1.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823ED49C"))) PPC_WEAK_FUNC(sub_823ED49C);
PPC_FUNC_IMPL(__imp__sub_823ED49C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823ED4A0"))) PPC_WEAK_FUNC(sub_823ED4A0);
PPC_FUNC_IMPL(__imp__sub_823ED4A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x823ED4A8;
	__savegprlr_28(ctx, base);
	// stwu r1,-1472(r1)
	ea = -1472 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r4,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r4.u32);
	// lis r11,-32193
	ctx.r11.s64 = -2109800448;
	// stw r5,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r5.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,-3680
	ctx.r11.s64 = ctx.r11.s64 + -3680;
	// li r3,20
	ctx.r3.s64 = 20;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82691500
	ctx.lr = 0x823ED4D4;
	sub_82691500(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x823ee484
	if (ctx.cr0.eq) goto loc_823EE484;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r9,r3,4
	ctx.r9.s64 = ctx.r3.s64 + 4;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// addi r4,r1,928
	ctx.r4.s64 = ctx.r1.s64 + 928;
	// addi r10,r10,-31160
	ctx.r10.s64 = ctx.r10.s64 + -31160;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r7,8(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r9,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r9.u32);
	// stw r8,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r8.u32);
	// stw r7,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r7.u32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// stw r3,944(r1)
	PPC_STORE_U32(ctx.r1.u32 + 944, ctx.r3.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r3,r11,1560
	ctx.r3.s64 = ctx.r11.s64 + 1560;
	// bl 0x823f64c8
	ctx.lr = 0x823ED524;
	sub_823F64C8(ctx, base);
	// addi r3,r1,928
	ctx.r3.s64 = ctx.r1.s64 + 928;
	// bl 0x82f91940
	ctx.lr = 0x823ED52C;
	sub_82F91940(ctx, base);
	// lis r11,-32194
	ctx.r11.s64 = -2109865984;
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r28,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r28.u32);
	// addi r11,r11,-22808
	ctx.r11.s64 = ctx.r11.s64 + -22808;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// li r3,40
	ctx.r3.s64 = 40;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r11,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.r11.u64);
	// bl 0x82691500
	ctx.lr = 0x823ED554;
	sub_82691500(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq 0x823ee46c
	if (ctx.cr0.eq) goto loc_823EE46C;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r3,r29,8
	ctx.r3.s64 = ctx.r29.s64 + 8;
	// addi r11,r11,-31136
	ctx.r11.s64 = ctx.r11.s64 + -31136;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// li r5,32
	ctx.r5.s64 = 32;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// bl 0x82fa77c0
	ctx.lr = 0x823ED578;
	sub_82FA77C0(ctx, base);
	// stw r29,1424(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1424, ctx.r29.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r1,1408
	ctx.r4.s64 = ctx.r1.s64 + 1408;
	// addi r3,r11,1560
	ctx.r3.s64 = ctx.r11.s64 + 1560;
	// bl 0x823f6430
	ctx.lr = 0x823ED58C;
	sub_823F6430(ctx, base);
	// addi r3,r1,1408
	ctx.r3.s64 = ctx.r1.s64 + 1408;
	// bl 0x82f91940
	ctx.lr = 0x823ED594;
	sub_82F91940(ctx, base);
	// lis r11,-32193
	ctx.r11.s64 = -2109800448;
	// li r3,24
	ctx.r3.s64 = 24;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// addi r11,r11,-3496
	ctx.r11.s64 = ctx.r11.s64 + -3496;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82691500
	ctx.lr = 0x823ED5AC;
	sub_82691500(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x823ee454
	if (ctx.cr0.eq) goto loc_823EE454;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// li r11,5
	ctx.r11.s64 = 5;
	// addi r9,r10,-31112
	ctx.r9.s64 = ctx.r10.s64 + -31112;
	// addi r10,r1,76
	ctx.r10.s64 = ctx.r1.s64 + 76;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_823ED5D0:
	// lwzu r11,4(r10)
	ea = 4 + ctx.r10.u32;
	ctx.r11.u64 = PPC_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// stwu r11,4(r9)
	ea = 4 + ctx.r9.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r9.u32 = ea;
	// bdnz 0x823ed5d0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823ED5D0;
	// stw r3,752(r1)
	PPC_STORE_U32(ctx.r1.u32 + 752, ctx.r3.u32);
	// addi r4,r1,736
	ctx.r4.s64 = ctx.r1.s64 + 736;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r3,r11,1680
	ctx.r3.s64 = ctx.r11.s64 + 1680;
	// bl 0x823f64c8
	ctx.lr = 0x823ED5F0;
	sub_823F64C8(ctx, base);
	// addi r3,r1,736
	ctx.r3.s64 = ctx.r1.s64 + 736;
	// bl 0x82f91940
	ctx.lr = 0x823ED5F8;
	sub_82F91940(ctx, base);
	// lis r11,-32194
	ctx.r11.s64 = -2109865984;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// li r3,48
	ctx.r3.s64 = 48;
	// addi r11,r11,-18904
	ctx.r11.s64 = ctx.r11.s64 + -18904;
	// stw r28,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r28.u32);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r11,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.r11.u64);
	// bl 0x82691500
	ctx.lr = 0x823ED61C;
	sub_82691500(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq 0x823ee43c
	if (ctx.cr0.eq) goto loc_823EE43C;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r3,r29,8
	ctx.r3.s64 = ctx.r29.s64 + 8;
	// addi r11,r11,-31088
	ctx.r11.s64 = ctx.r11.s64 + -31088;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// li r5,40
	ctx.r5.s64 = 40;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// bl 0x82fa77c0
	ctx.lr = 0x823ED640;
	sub_82FA77C0(ctx, base);
	// stw r29,1264(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1264, ctx.r29.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r1,1248
	ctx.r4.s64 = ctx.r1.s64 + 1248;
	// addi r3,r11,1680
	ctx.r3.s64 = ctx.r11.s64 + 1680;
	// bl 0x823f6430
	ctx.lr = 0x823ED654;
	sub_823F6430(ctx, base);
	// addi r3,r1,1248
	ctx.r3.s64 = ctx.r1.s64 + 1248;
	// bl 0x82f91940
	ctx.lr = 0x823ED65C;
	sub_82F91940(ctx, base);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r10,r1,576
	ctx.r10.s64 = ctx.r1.s64 + 576;
	// stw r28,580(r1)
	PPC_STORE_U32(ctx.r1.u32 + 580, ctx.r28.u32);
	// addi r9,r11,-31064
	ctx.r9.s64 = ctx.r11.s64 + -31064;
	// stw r10,592(r1)
	PPC_STORE_U32(ctx.r1.u32 + 592, ctx.r10.u32);
	// addi r4,r1,576
	ctx.r4.s64 = ctx.r1.s64 + 576;
	// stw r9,576(r1)
	PPC_STORE_U32(ctx.r1.u32 + 576, ctx.r9.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r3,r11,1808
	ctx.r3.s64 = ctx.r11.s64 + 1808;
	// bl 0x82372360
	ctx.lr = 0x823ED684;
	sub_82372360(ctx, base);
	// addi r3,r1,576
	ctx.r3.s64 = ctx.r1.s64 + 576;
	// bl 0x82f91940
	ctx.lr = 0x823ED68C;
	sub_82F91940(ctx, base);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r10,r1,640
	ctx.r10.s64 = ctx.r1.s64 + 640;
	// stw r28,644(r1)
	PPC_STORE_U32(ctx.r1.u32 + 644, ctx.r28.u32);
	// addi r9,r11,-31040
	ctx.r9.s64 = ctx.r11.s64 + -31040;
	// stw r10,656(r1)
	PPC_STORE_U32(ctx.r1.u32 + 656, ctx.r10.u32);
	// addi r4,r1,640
	ctx.r4.s64 = ctx.r1.s64 + 640;
	// stw r9,640(r1)
	PPC_STORE_U32(ctx.r1.u32 + 640, ctx.r9.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r3,r11,1808
	ctx.r3.s64 = ctx.r11.s64 + 1808;
	// bl 0x823f63a0
	ctx.lr = 0x823ED6B4;
	sub_823F63A0(ctx, base);
	// addi r3,r1,640
	ctx.r3.s64 = ctx.r1.s64 + 640;
	// bl 0x82f91940
	ctx.lr = 0x823ED6BC;
	sub_82F91940(ctx, base);
	// lis r11,-32193
	ctx.r11.s64 = -2109800448;
	// li r3,40
	ctx.r3.s64 = 40;
	// stw r31,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r31.u32);
	// addi r11,r11,-3080
	ctx.r11.s64 = ctx.r11.s64 + -3080;
	// stw r11,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
	// bl 0x82691500
	ctx.lr = 0x823ED6D4;
	sub_82691500(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq 0x823ee424
	if (ctx.cr0.eq) goto loc_823EE424;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r3,r29,4
	ctx.r3.s64 = ctx.r29.s64 + 4;
	// addi r11,r11,-31016
	ctx.r11.s64 = ctx.r11.s64 + -31016;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// li r5,36
	ctx.r5.s64 = 36;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// bl 0x82fa77c0
	ctx.lr = 0x823ED6F8;
	sub_82FA77C0(ctx, base);
	// stw r29,816(r1)
	PPC_STORE_U32(ctx.r1.u32 + 816, ctx.r29.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r1,800
	ctx.r4.s64 = ctx.r1.s64 + 800;
	// addi r3,r11,2192
	ctx.r3.s64 = ctx.r11.s64 + 2192;
	// bl 0x823f64c8
	ctx.lr = 0x823ED70C;
	sub_823F64C8(ctx, base);
	// addi r3,r1,800
	ctx.r3.s64 = ctx.r1.s64 + 800;
	// bl 0x82f91940
	ctx.lr = 0x823ED714;
	sub_82F91940(ctx, base);
	// lis r11,-32194
	ctx.r11.s64 = -2109865984;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// li r3,80
	ctx.r3.s64 = 80;
	// addi r11,r11,-17344
	ctx.r11.s64 = ctx.r11.s64 + -17344;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// ld r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r10,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.r10.u64);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r11,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r11.u32);
	// bl 0x82691500
	ctx.lr = 0x823ED73C;
	sub_82691500(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq 0x823ee40c
	if (ctx.cr0.eq) goto loc_823EE40C;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r3,r29,8
	ctx.r3.s64 = ctx.r29.s64 + 8;
	// addi r11,r11,-30992
	ctx.r11.s64 = ctx.r11.s64 + -30992;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// li r5,72
	ctx.r5.s64 = 72;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// bl 0x82fa77c0
	ctx.lr = 0x823ED760;
	sub_82FA77C0(ctx, base);
	// stw r29,1136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1136, ctx.r29.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r1,1120
	ctx.r4.s64 = ctx.r1.s64 + 1120;
	// addi r3,r11,2192
	ctx.r3.s64 = ctx.r11.s64 + 2192;
	// bl 0x823f6430
	ctx.lr = 0x823ED774;
	sub_823F6430(ctx, base);
	// addi r3,r1,1120
	ctx.r3.s64 = ctx.r1.s64 + 1120;
	// bl 0x82f91940
	ctx.lr = 0x823ED77C;
	sub_82F91940(ctx, base);
	// lis r11,-32193
	ctx.r11.s64 = -2109800448;
	// li r3,32
	ctx.r3.s64 = 32;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// addi r11,r11,-2792
	ctx.r11.s64 = ctx.r11.s64 + -2792;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82691500
	ctx.lr = 0x823ED794;
	sub_82691500(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq 0x823ee3f4
	if (ctx.cr0.eq) goto loc_823EE3F4;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r3,r29,4
	ctx.r3.s64 = ctx.r29.s64 + 4;
	// addi r11,r11,-30968
	ctx.r11.s64 = ctx.r11.s64 + -30968;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r5,28
	ctx.r5.s64 = 28;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// bl 0x82fa77c0
	ctx.lr = 0x823ED7B8;
	sub_82FA77C0(ctx, base);
	// stw r29,880(r1)
	PPC_STORE_U32(ctx.r1.u32 + 880, ctx.r29.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r1,864
	ctx.r4.s64 = ctx.r1.s64 + 864;
	// addi r3,r11,2352
	ctx.r3.s64 = ctx.r11.s64 + 2352;
	// bl 0x823f64c8
	ctx.lr = 0x823ED7CC;
	sub_823F64C8(ctx, base);
	// addi r3,r1,864
	ctx.r3.s64 = ctx.r1.s64 + 864;
	// bl 0x82f91940
	ctx.lr = 0x823ED7D4;
	sub_82F91940(ctx, base);
	// lis r11,-32193
	ctx.r11.s64 = -2109800448;
	// li r3,36
	ctx.r3.s64 = 36;
	// stw r31,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r31.u32);
	// addi r11,r11,-2528
	ctx.r11.s64 = ctx.r11.s64 + -2528;
	// stw r11,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
	// bl 0x82691500
	ctx.lr = 0x823ED7EC;
	sub_82691500(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq 0x823ee3dc
	if (ctx.cr0.eq) goto loc_823EE3DC;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r3,r29,4
	ctx.r3.s64 = ctx.r29.s64 + 4;
	// addi r11,r11,-30944
	ctx.r11.s64 = ctx.r11.s64 + -30944;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// li r5,32
	ctx.r5.s64 = 32;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// bl 0x82fa77c0
	ctx.lr = 0x823ED810;
	sub_82FA77C0(ctx, base);
	// stw r29,1392(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1392, ctx.r29.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r1,1376
	ctx.r4.s64 = ctx.r1.s64 + 1376;
	// addi r3,r11,2496
	ctx.r3.s64 = ctx.r11.s64 + 2496;
	// bl 0x823f64c8
	ctx.lr = 0x823ED824;
	sub_823F64C8(ctx, base);
	// addi r3,r1,1376
	ctx.r3.s64 = ctx.r1.s64 + 1376;
	// bl 0x82f91940
	ctx.lr = 0x823ED82C;
	sub_82F91940(ctx, base);
	// lis r11,-32194
	ctx.r11.s64 = -2109865984;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// li r3,72
	ctx.r3.s64 = 72;
	// addi r11,r11,-9672
	ctx.r11.s64 = ctx.r11.s64 + -9672;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// ld r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// stw r11,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r11.u32);
	// std r10,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.r10.u64);
	// bl 0x82691500
	ctx.lr = 0x823ED854;
	sub_82691500(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq 0x823ee3c4
	if (ctx.cr0.eq) goto loc_823EE3C4;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r3,r29,8
	ctx.r3.s64 = ctx.r29.s64 + 8;
	// addi r11,r11,-30920
	ctx.r11.s64 = ctx.r11.s64 + -30920;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// li r5,64
	ctx.r5.s64 = 64;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// bl 0x82fa77c0
	ctx.lr = 0x823ED878;
	sub_82FA77C0(ctx, base);
	// stw r29,688(r1)
	PPC_STORE_U32(ctx.r1.u32 + 688, ctx.r29.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r1,672
	ctx.r4.s64 = ctx.r1.s64 + 672;
	// addi r3,r11,2496
	ctx.r3.s64 = ctx.r11.s64 + 2496;
	// bl 0x823f6430
	ctx.lr = 0x823ED88C;
	sub_823F6430(ctx, base);
	// addi r3,r1,672
	ctx.r3.s64 = ctx.r1.s64 + 672;
	// bl 0x82f91940
	ctx.lr = 0x823ED894;
	sub_82F91940(ctx, base);
	// lis r11,-32193
	ctx.r11.s64 = -2109800448;
	// li r3,40
	ctx.r3.s64 = 40;
	// stw r31,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r31.u32);
	// addi r11,r11,-2272
	ctx.r11.s64 = ctx.r11.s64 + -2272;
	// stw r11,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
	// bl 0x82691500
	ctx.lr = 0x823ED8AC;
	sub_82691500(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq 0x823ee3ac
	if (ctx.cr0.eq) goto loc_823EE3AC;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r3,r29,4
	ctx.r3.s64 = ctx.r29.s64 + 4;
	// addi r11,r11,-30896
	ctx.r11.s64 = ctx.r11.s64 + -30896;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// li r5,36
	ctx.r5.s64 = 36;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// bl 0x82fa77c0
	ctx.lr = 0x823ED8D0;
	sub_82FA77C0(ctx, base);
	// stw r29,1200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1200, ctx.r29.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r1,1184
	ctx.r4.s64 = ctx.r1.s64 + 1184;
	// addi r3,r11,2648
	ctx.r3.s64 = ctx.r11.s64 + 2648;
	// bl 0x823f64c8
	ctx.lr = 0x823ED8E4;
	sub_823F64C8(ctx, base);
	// addi r3,r1,1184
	ctx.r3.s64 = ctx.r1.s64 + 1184;
	// bl 0x82f91940
	ctx.lr = 0x823ED8EC;
	sub_82F91940(ctx, base);
	// lis r11,-32194
	ctx.r11.s64 = -2109865984;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// li r3,80
	ctx.r3.s64 = 80;
	// addi r11,r11,-8448
	ctx.r11.s64 = ctx.r11.s64 + -8448;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// ld r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// stw r11,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r11.u32);
	// std r10,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.r10.u64);
	// bl 0x82691500
	ctx.lr = 0x823ED914;
	sub_82691500(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq 0x823ee394
	if (ctx.cr0.eq) goto loc_823EE394;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r3,r29,8
	ctx.r3.s64 = ctx.r29.s64 + 8;
	// addi r11,r11,-30872
	ctx.r11.s64 = ctx.r11.s64 + -30872;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// li r5,72
	ctx.r5.s64 = 72;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// bl 0x82fa77c0
	ctx.lr = 0x823ED938;
	sub_82FA77C0(ctx, base);
	// stw r29,1008(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1008, ctx.r29.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r1,992
	ctx.r4.s64 = ctx.r1.s64 + 992;
	// addi r3,r11,2648
	ctx.r3.s64 = ctx.r11.s64 + 2648;
	// bl 0x823f6430
	ctx.lr = 0x823ED94C;
	sub_823F6430(ctx, base);
	// addi r3,r1,992
	ctx.r3.s64 = ctx.r1.s64 + 992;
	// bl 0x82f91940
	ctx.lr = 0x823ED954;
	sub_82F91940(ctx, base);
	// lis r11,-32193
	ctx.r11.s64 = -2109800448;
	// li r3,40
	ctx.r3.s64 = 40;
	// stw r31,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r31.u32);
	// addi r11,r11,-2024
	ctx.r11.s64 = ctx.r11.s64 + -2024;
	// stw r11,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
	// bl 0x82691500
	ctx.lr = 0x823ED96C;
	sub_82691500(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq 0x823ee37c
	if (ctx.cr0.eq) goto loc_823EE37C;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r3,r29,4
	ctx.r3.s64 = ctx.r29.s64 + 4;
	// addi r11,r11,-30848
	ctx.r11.s64 = ctx.r11.s64 + -30848;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// li r5,36
	ctx.r5.s64 = 36;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// bl 0x82fa77c0
	ctx.lr = 0x823ED990;
	sub_82FA77C0(ctx, base);
	// stw r29,1328(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1328, ctx.r29.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r1,1312
	ctx.r4.s64 = ctx.r1.s64 + 1312;
	// addi r3,r11,2808
	ctx.r3.s64 = ctx.r11.s64 + 2808;
	// bl 0x823f64c8
	ctx.lr = 0x823ED9A4;
	sub_823F64C8(ctx, base);
	// addi r3,r1,1312
	ctx.r3.s64 = ctx.r1.s64 + 1312;
	// bl 0x82f91940
	ctx.lr = 0x823ED9AC;
	sub_82F91940(ctx, base);
	// lis r11,-32194
	ctx.r11.s64 = -2109865984;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// li r3,80
	ctx.r3.s64 = 80;
	// addi r11,r11,-20896
	ctx.r11.s64 = ctx.r11.s64 + -20896;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// ld r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// stw r11,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r11.u32);
	// std r10,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.r10.u64);
	// bl 0x82691500
	ctx.lr = 0x823ED9D4;
	sub_82691500(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq 0x823ee364
	if (ctx.cr0.eq) goto loc_823EE364;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r3,r29,8
	ctx.r3.s64 = ctx.r29.s64 + 8;
	// addi r11,r11,-30824
	ctx.r11.s64 = ctx.r11.s64 + -30824;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// li r5,72
	ctx.r5.s64 = 72;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// bl 0x82fa77c0
	ctx.lr = 0x823ED9F8;
	sub_82FA77C0(ctx, base);
	// stw r29,1072(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1072, ctx.r29.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r1,1056
	ctx.r4.s64 = ctx.r1.s64 + 1056;
	// addi r3,r11,2808
	ctx.r3.s64 = ctx.r11.s64 + 2808;
	// bl 0x823f6430
	ctx.lr = 0x823EDA0C;
	sub_823F6430(ctx, base);
	// addi r3,r1,1056
	ctx.r3.s64 = ctx.r1.s64 + 1056;
	// bl 0x82f91940
	ctx.lr = 0x823EDA14;
	sub_82F91940(ctx, base);
	// lis r11,-32193
	ctx.r11.s64 = -2109800448;
	// li r3,40
	ctx.r3.s64 = 40;
	// stw r31,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r31.u32);
	// addi r11,r11,-1744
	ctx.r11.s64 = ctx.r11.s64 + -1744;
	// stw r11,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
	// bl 0x82691500
	ctx.lr = 0x823EDA2C;
	sub_82691500(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq 0x823ee34c
	if (ctx.cr0.eq) goto loc_823EE34C;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r3,r29,4
	ctx.r3.s64 = ctx.r29.s64 + 4;
	// addi r11,r11,-30800
	ctx.r11.s64 = ctx.r11.s64 + -30800;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// li r5,36
	ctx.r5.s64 = 36;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// bl 0x82fa77c0
	ctx.lr = 0x823EDA50;
	sub_82FA77C0(ctx, base);
	// stw r29,720(r1)
	PPC_STORE_U32(ctx.r1.u32 + 720, ctx.r29.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r1,704
	ctx.r4.s64 = ctx.r1.s64 + 704;
	// addi r3,r11,2968
	ctx.r3.s64 = ctx.r11.s64 + 2968;
	// bl 0x823f64c8
	ctx.lr = 0x823EDA64;
	sub_823F64C8(ctx, base);
	// addi r3,r1,704
	ctx.r3.s64 = ctx.r1.s64 + 704;
	// bl 0x82f91940
	ctx.lr = 0x823EDA6C;
	sub_82F91940(ctx, base);
	// lis r11,-32194
	ctx.r11.s64 = -2109865984;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// li r3,80
	ctx.r3.s64 = 80;
	// addi r11,r11,-19544
	ctx.r11.s64 = ctx.r11.s64 + -19544;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// ld r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// stw r11,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r11.u32);
	// std r10,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.r10.u64);
	// bl 0x82691500
	ctx.lr = 0x823EDA94;
	sub_82691500(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq 0x823ee334
	if (ctx.cr0.eq) goto loc_823EE334;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r3,r29,8
	ctx.r3.s64 = ctx.r29.s64 + 8;
	// addi r11,r11,-30776
	ctx.r11.s64 = ctx.r11.s64 + -30776;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// li r5,72
	ctx.r5.s64 = 72;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// bl 0x82fa77c0
	ctx.lr = 0x823EDAB8;
	sub_82FA77C0(ctx, base);
	// stw r29,784(r1)
	PPC_STORE_U32(ctx.r1.u32 + 784, ctx.r29.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r1,768
	ctx.r4.s64 = ctx.r1.s64 + 768;
	// addi r3,r11,2968
	ctx.r3.s64 = ctx.r11.s64 + 2968;
	// bl 0x823f6430
	ctx.lr = 0x823EDACC;
	sub_823F6430(ctx, base);
	// addi r3,r1,768
	ctx.r3.s64 = ctx.r1.s64 + 768;
	// bl 0x82f91940
	ctx.lr = 0x823EDAD4;
	sub_82F91940(ctx, base);
	// lis r11,-32193
	ctx.r11.s64 = -2109800448;
	// li r3,36
	ctx.r3.s64 = 36;
	// stw r31,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r31.u32);
	// addi r11,r11,-1432
	ctx.r11.s64 = ctx.r11.s64 + -1432;
	// stw r11,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
	// bl 0x82691500
	ctx.lr = 0x823EDAEC;
	sub_82691500(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq 0x823ee31c
	if (ctx.cr0.eq) goto loc_823EE31C;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r3,r29,4
	ctx.r3.s64 = ctx.r29.s64 + 4;
	// addi r11,r11,-30752
	ctx.r11.s64 = ctx.r11.s64 + -30752;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// li r5,32
	ctx.r5.s64 = 32;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// bl 0x82fa77c0
	ctx.lr = 0x823EDB10;
	sub_82FA77C0(ctx, base);
	// stw r29,848(r1)
	PPC_STORE_U32(ctx.r1.u32 + 848, ctx.r29.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r1,832
	ctx.r4.s64 = ctx.r1.s64 + 832;
	// addi r3,r11,3128
	ctx.r3.s64 = ctx.r11.s64 + 3128;
	// bl 0x823f64c8
	ctx.lr = 0x823EDB24;
	sub_823F64C8(ctx, base);
	// addi r3,r1,832
	ctx.r3.s64 = ctx.r1.s64 + 832;
	// bl 0x82f91940
	ctx.lr = 0x823EDB2C;
	sub_82F91940(ctx, base);
	// lis r11,-32194
	ctx.r11.s64 = -2109865984;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// li r3,72
	ctx.r3.s64 = 72;
	// addi r11,r11,-22368
	ctx.r11.s64 = ctx.r11.s64 + -22368;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// ld r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// stw r11,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r11.u32);
	// std r10,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.r10.u64);
	// bl 0x82691500
	ctx.lr = 0x823EDB54;
	sub_82691500(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq 0x823ee304
	if (ctx.cr0.eq) goto loc_823EE304;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r3,r29,8
	ctx.r3.s64 = ctx.r29.s64 + 8;
	// addi r11,r11,-30728
	ctx.r11.s64 = ctx.r11.s64 + -30728;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// li r5,64
	ctx.r5.s64 = 64;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// bl 0x82fa77c0
	ctx.lr = 0x823EDB78;
	sub_82FA77C0(ctx, base);
	// stw r29,912(r1)
	PPC_STORE_U32(ctx.r1.u32 + 912, ctx.r29.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r1,896
	ctx.r4.s64 = ctx.r1.s64 + 896;
	// addi r3,r11,3128
	ctx.r3.s64 = ctx.r11.s64 + 3128;
	// bl 0x823f6430
	ctx.lr = 0x823EDB8C;
	sub_823F6430(ctx, base);
	// addi r3,r1,896
	ctx.r3.s64 = ctx.r1.s64 + 896;
	// bl 0x82f91940
	ctx.lr = 0x823EDB94;
	sub_82F91940(ctx, base);
	// lwz r9,120(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// lis r11,-32193
	ctx.r11.s64 = -2109800448;
	// stw r31,456(r1)
	PPC_STORE_U32(ctx.r1.u32 + 456, ctx.r31.u32);
	// lis r8,-32228
	ctx.r8.s64 = -2112094208;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r11,r11,-1160
	ctx.r11.s64 = ctx.r11.s64 + -1160;
	// addi r8,r8,-30704
	ctx.r8.s64 = ctx.r8.s64 + -30704;
	// addi r7,r1,448
	ctx.r7.s64 = ctx.r1.s64 + 448;
	// stw r9,460(r1)
	PPC_STORE_U32(ctx.r1.u32 + 460, ctx.r9.u32);
	// stw r8,448(r1)
	PPC_STORE_U32(ctx.r1.u32 + 448, ctx.r8.u32);
	// addi r4,r1,448
	ctx.r4.s64 = ctx.r1.s64 + 448;
	// stw r7,464(r1)
	PPC_STORE_U32(ctx.r1.u32 + 464, ctx.r7.u32);
	// addi r3,r10,3280
	ctx.r3.s64 = ctx.r10.s64 + 3280;
	// stw r11,452(r1)
	PPC_STORE_U32(ctx.r1.u32 + 452, ctx.r11.u32);
	// bl 0x823f64c8
	ctx.lr = 0x823EDBD0;
	sub_823F64C8(ctx, base);
	// addi r3,r1,448
	ctx.r3.s64 = ctx.r1.s64 + 448;
	// bl 0x82f91940
	ctx.lr = 0x823EDBD8;
	sub_82F91940(ctx, base);
	// lis r11,-32194
	ctx.r11.s64 = -2109865984;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// li r3,32
	ctx.r3.s64 = 32;
	// addi r11,r11,-5056
	ctx.r11.s64 = ctx.r11.s64 + -5056;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// bl 0x82691500
	ctx.lr = 0x823EDC00;
	sub_82691500(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq 0x823ee2ec
	if (ctx.cr0.eq) goto loc_823EE2EC;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r3,r29,8
	ctx.r3.s64 = ctx.r29.s64 + 8;
	// addi r11,r11,-30680
	ctx.r11.s64 = ctx.r11.s64 + -30680;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r5,24
	ctx.r5.s64 = 24;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// bl 0x82fa77c0
	ctx.lr = 0x823EDC24;
	sub_82FA77C0(ctx, base);
	// stw r29,976(r1)
	PPC_STORE_U32(ctx.r1.u32 + 976, ctx.r29.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r1,960
	ctx.r4.s64 = ctx.r1.s64 + 960;
	// addi r3,r11,3280
	ctx.r3.s64 = ctx.r11.s64 + 3280;
	// bl 0x823f6430
	ctx.lr = 0x823EDC38;
	sub_823F6430(ctx, base);
	// addi r3,r1,960
	ctx.r3.s64 = ctx.r1.s64 + 960;
	// bl 0x82f91940
	ctx.lr = 0x823EDC40;
	sub_82F91940(ctx, base);
	// lwz r9,120(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// lis r11,-32193
	ctx.r11.s64 = -2109800448;
	// stw r31,488(r1)
	PPC_STORE_U32(ctx.r1.u32 + 488, ctx.r31.u32);
	// lis r8,-32228
	ctx.r8.s64 = -2112094208;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r11,r11,-992
	ctx.r11.s64 = ctx.r11.s64 + -992;
	// addi r8,r8,-30656
	ctx.r8.s64 = ctx.r8.s64 + -30656;
	// addi r7,r1,480
	ctx.r7.s64 = ctx.r1.s64 + 480;
	// stw r9,492(r1)
	PPC_STORE_U32(ctx.r1.u32 + 492, ctx.r9.u32);
	// stw r8,480(r1)
	PPC_STORE_U32(ctx.r1.u32 + 480, ctx.r8.u32);
	// addi r4,r1,480
	ctx.r4.s64 = ctx.r1.s64 + 480;
	// stw r7,496(r1)
	PPC_STORE_U32(ctx.r1.u32 + 496, ctx.r7.u32);
	// addi r3,r10,3392
	ctx.r3.s64 = ctx.r10.s64 + 3392;
	// stw r11,484(r1)
	PPC_STORE_U32(ctx.r1.u32 + 484, ctx.r11.u32);
	// bl 0x823f64c8
	ctx.lr = 0x823EDC7C;
	sub_823F64C8(ctx, base);
	// addi r3,r1,480
	ctx.r3.s64 = ctx.r1.s64 + 480;
	// bl 0x82f91940
	ctx.lr = 0x823EDC84;
	sub_82F91940(ctx, base);
	// lis r11,-32194
	ctx.r11.s64 = -2109865984;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// li r3,32
	ctx.r3.s64 = 32;
	// addi r11,r11,-4048
	ctx.r11.s64 = ctx.r11.s64 + -4048;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// ld r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// bl 0x82691500
	ctx.lr = 0x823EDCAC;
	sub_82691500(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq 0x823ee2d4
	if (ctx.cr0.eq) goto loc_823EE2D4;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r3,r29,8
	ctx.r3.s64 = ctx.r29.s64 + 8;
	// addi r11,r11,-30632
	ctx.r11.s64 = ctx.r11.s64 + -30632;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r5,24
	ctx.r5.s64 = 24;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// bl 0x82fa77c0
	ctx.lr = 0x823EDCD0;
	sub_82FA77C0(ctx, base);
	// stw r29,1040(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1040, ctx.r29.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r1,1024
	ctx.r4.s64 = ctx.r1.s64 + 1024;
	// addi r3,r11,3392
	ctx.r3.s64 = ctx.r11.s64 + 3392;
	// bl 0x823f6430
	ctx.lr = 0x823EDCE4;
	sub_823F6430(ctx, base);
	// addi r3,r1,1024
	ctx.r3.s64 = ctx.r1.s64 + 1024;
	// bl 0x82f91940
	ctx.lr = 0x823EDCEC;
	sub_82F91940(ctx, base);
	// lis r11,-32193
	ctx.r11.s64 = -2109800448;
	// li r3,28
	ctx.r3.s64 = 28;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// addi r11,r11,-640
	ctx.r11.s64 = ctx.r11.s64 + -640;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82691500
	ctx.lr = 0x823EDD04;
	sub_82691500(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq 0x823ee2bc
	if (ctx.cr0.eq) goto loc_823EE2BC;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r3,r29,4
	ctx.r3.s64 = ctx.r29.s64 + 4;
	// addi r11,r11,-30608
	ctx.r11.s64 = ctx.r11.s64 + -30608;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r5,24
	ctx.r5.s64 = 24;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// bl 0x82fa77c0
	ctx.lr = 0x823EDD28;
	sub_82FA77C0(ctx, base);
	// stw r29,1104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1104, ctx.r29.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r1,1088
	ctx.r4.s64 = ctx.r1.s64 + 1088;
	// addi r3,r11,3504
	ctx.r3.s64 = ctx.r11.s64 + 3504;
	// bl 0x823f64c8
	ctx.lr = 0x823EDD3C;
	sub_823F64C8(ctx, base);
	// addi r3,r1,1088
	ctx.r3.s64 = ctx.r1.s64 + 1088;
	// bl 0x82f91940
	ctx.lr = 0x823EDD44;
	sub_82F91940(ctx, base);
	// lis r11,-32194
	ctx.r11.s64 = -2109865984;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// li r3,56
	ctx.r3.s64 = 56;
	// addi r11,r11,-3248
	ctx.r11.s64 = ctx.r11.s64 + -3248;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// ld r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// stw r11,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r11.u32);
	// std r10,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.r10.u64);
	// bl 0x82691500
	ctx.lr = 0x823EDD6C;
	sub_82691500(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq 0x823ee2a4
	if (ctx.cr0.eq) goto loc_823EE2A4;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r3,r29,8
	ctx.r3.s64 = ctx.r29.s64 + 8;
	// addi r11,r11,-30584
	ctx.r11.s64 = ctx.r11.s64 + -30584;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// li r5,48
	ctx.r5.s64 = 48;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// bl 0x82fa77c0
	ctx.lr = 0x823EDD90;
	sub_82FA77C0(ctx, base);
	// stw r29,1168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1168, ctx.r29.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r1,1152
	ctx.r4.s64 = ctx.r1.s64 + 1152;
	// addi r3,r11,3504
	ctx.r3.s64 = ctx.r11.s64 + 3504;
	// bl 0x823f6430
	ctx.lr = 0x823EDDA4;
	sub_823F6430(ctx, base);
	// addi r3,r1,1152
	ctx.r3.s64 = ctx.r1.s64 + 1152;
	// bl 0x82f91940
	ctx.lr = 0x823EDDAC;
	sub_82F91940(ctx, base);
	// lis r11,-32193
	ctx.r11.s64 = -2109800448;
	// addi r10,r28,5440
	ctx.r10.s64 = ctx.r28.s64 + 5440;
	// addi r11,r11,-11176
	ctx.r11.s64 = ctx.r11.s64 + -11176;
	// li r3,20
	ctx.r3.s64 = 20;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82691500
	ctx.lr = 0x823EDDC8;
	sub_82691500(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x823ee28c
	if (ctx.cr0.eq) goto loc_823EE28C;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// addi r9,r3,4
	ctx.r9.s64 = ctx.r3.s64 + 4;
	// addi r10,r10,-30560
	ctx.r10.s64 = ctx.r10.s64 + -30560;
	// addi r4,r1,1216
	ctx.r4.s64 = ctx.r1.s64 + 1216;
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r8,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r8.u32);
	// stw r9,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
	// stw r7,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r7.u32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// stw r3,1232(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1232, ctx.r3.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r3,r11,1912
	ctx.r3.s64 = ctx.r11.s64 + 1912;
	// bl 0x823f64c8
	ctx.lr = 0x823EDE18;
	sub_823F64C8(ctx, base);
	// addi r3,r1,1216
	ctx.r3.s64 = ctx.r1.s64 + 1216;
	// bl 0x82f91940
	ctx.lr = 0x823EDE20;
	sub_82F91940(ctx, base);
	// lis r11,-32193
	ctx.r11.s64 = -2109800448;
	// li r3,40
	ctx.r3.s64 = 40;
	// stw r31,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r31.u32);
	// addi r11,r11,-3272
	ctx.r11.s64 = ctx.r11.s64 + -3272;
	// stw r11,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
	// bl 0x82691500
	ctx.lr = 0x823EDE38;
	sub_82691500(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq 0x823ee274
	if (ctx.cr0.eq) goto loc_823EE274;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r3,r29,4
	ctx.r3.s64 = ctx.r29.s64 + 4;
	// addi r11,r11,-30536
	ctx.r11.s64 = ctx.r11.s64 + -30536;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// li r5,36
	ctx.r5.s64 = 36;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// bl 0x82fa77c0
	ctx.lr = 0x823EDE5C;
	sub_82FA77C0(ctx, base);
	// stw r29,1296(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1296, ctx.r29.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r1,1280
	ctx.r4.s64 = ctx.r1.s64 + 1280;
	// addi r3,r11,2032
	ctx.r3.s64 = ctx.r11.s64 + 2032;
	// bl 0x823f64c8
	ctx.lr = 0x823EDE70;
	sub_823F64C8(ctx, base);
	// addi r3,r1,1280
	ctx.r3.s64 = ctx.r1.s64 + 1280;
	// bl 0x82f91940
	ctx.lr = 0x823EDE78;
	sub_82F91940(ctx, base);
	// lis r11,-32193
	ctx.r11.s64 = -2109800448;
	// li r3,24
	ctx.r3.s64 = 24;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// addi r11,r11,-5216
	ctx.r11.s64 = ctx.r11.s64 + -5216;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82691500
	ctx.lr = 0x823EDE90;
	sub_82691500(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x823ee25c
	if (ctx.cr0.eq) goto loc_823EE25C;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// li r11,5
	ctx.r11.s64 = 5;
	// addi r9,r10,-30512
	ctx.r9.s64 = ctx.r10.s64 + -30512;
	// addi r10,r1,76
	ctx.r10.s64 = ctx.r1.s64 + 76;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_823EDEB4:
	// lwzu r11,4(r10)
	ea = 4 + ctx.r10.u32;
	ctx.r11.u64 = PPC_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// stwu r11,4(r9)
	ea = 4 + ctx.r9.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r9.u32 = ea;
	// bdnz 0x823edeb4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823EDEB4;
	// stw r3,1360(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1360, ctx.r3.u32);
	// addi r4,r1,1344
	ctx.r4.s64 = ctx.r1.s64 + 1344;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r3,r11,40
	ctx.r3.s64 = ctx.r11.s64 + 40;
	// bl 0x823f64c8
	ctx.lr = 0x823EDED4;
	sub_823F64C8(ctx, base);
	// addi r3,r1,1344
	ctx.r3.s64 = ctx.r1.s64 + 1344;
	// bl 0x82f91940
	ctx.lr = 0x823EDEDC;
	sub_82F91940(ctx, base);
	// lis r11,-32193
	ctx.r11.s64 = -2109800448;
	// addi r10,r28,5712
	ctx.r10.s64 = ctx.r28.s64 + 5712;
	// ld r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// addi r11,r11,-11144
	ctx.r11.s64 = ctx.r11.s64 + -11144;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// bl 0x823f6560
	ctx.lr = 0x823EDF00;
	sub_823F6560(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r11,624
	ctx.r3.s64 = ctx.r11.s64 + 624;
	// bl 0x823f64c8
	ctx.lr = 0x823EDF10;
	sub_823F64C8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82f91940
	ctx.lr = 0x823EDF18;
	sub_82F91940(ctx, base);
	// lis r11,-32193
	ctx.r11.s64 = -2109800448;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// addi r11,r11,-5032
	ctx.r11.s64 = ctx.r11.s64 + -5032;
	// ld r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// bl 0x823f65f8
	ctx.lr = 0x823EDF38;
	sub_823F65F8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r11,168
	ctx.r3.s64 = ctx.r11.s64 + 168;
	// bl 0x823f64c8
	ctx.lr = 0x823EDF48;
	sub_823F64C8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82f91940
	ctx.lr = 0x823EDF50;
	sub_82F91940(ctx, base);
	// lis r11,-32193
	ctx.r11.s64 = -2109800448;
	// addi r10,r28,5632
	ctx.r10.s64 = ctx.r28.s64 + 5632;
	// ld r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// addi r11,r11,-11144
	ctx.r11.s64 = ctx.r11.s64 + -11144;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// bl 0x823f6690
	ctx.lr = 0x823EDF74;
	sub_823F6690(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r11,744
	ctx.r3.s64 = ctx.r11.s64 + 744;
	// bl 0x823f64c8
	ctx.lr = 0x823EDF84;
	sub_823F64C8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82f91940
	ctx.lr = 0x823EDF8C;
	sub_82F91940(ctx, base);
	// lwz r9,120(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// lis r11,-32193
	ctx.r11.s64 = -2109800448;
	// stw r31,520(r1)
	PPC_STORE_U32(ctx.r1.u32 + 520, ctx.r31.u32);
	// lis r8,-32228
	ctx.r8.s64 = -2112094208;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r11,r11,-4888
	ctx.r11.s64 = ctx.r11.s64 + -4888;
	// addi r8,r8,-30416
	ctx.r8.s64 = ctx.r8.s64 + -30416;
	// addi r7,r1,512
	ctx.r7.s64 = ctx.r1.s64 + 512;
	// stw r9,524(r1)
	PPC_STORE_U32(ctx.r1.u32 + 524, ctx.r9.u32);
	// stw r8,512(r1)
	PPC_STORE_U32(ctx.r1.u32 + 512, ctx.r8.u32);
	// addi r4,r1,512
	ctx.r4.s64 = ctx.r1.s64 + 512;
	// stw r7,528(r1)
	PPC_STORE_U32(ctx.r1.u32 + 528, ctx.r7.u32);
	// addi r3,r10,288
	ctx.r3.s64 = ctx.r10.s64 + 288;
	// stw r11,516(r1)
	PPC_STORE_U32(ctx.r1.u32 + 516, ctx.r11.u32);
	// bl 0x823f64c8
	ctx.lr = 0x823EDFC8;
	sub_823F64C8(ctx, base);
	// addi r3,r1,512
	ctx.r3.s64 = ctx.r1.s64 + 512;
	// bl 0x82f91940
	ctx.lr = 0x823EDFD0;
	sub_82F91940(ctx, base);
	// lis r11,-32193
	ctx.r11.s64 = -2109800448;
	// addi r10,r28,5472
	ctx.r10.s64 = ctx.r28.s64 + 5472;
	// ld r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// addi r11,r11,-11144
	ctx.r11.s64 = ctx.r11.s64 + -11144;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// bl 0x823f6728
	ctx.lr = 0x823EDFF4;
	sub_823F6728(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r11,864
	ctx.r3.s64 = ctx.r11.s64 + 864;
	// bl 0x823f64c8
	ctx.lr = 0x823EE004;
	sub_823F64C8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82f91940
	ctx.lr = 0x823EE00C;
	sub_82F91940(ctx, base);
	// lwz r9,120(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// lis r11,-32193
	ctx.r11.s64 = -2109800448;
	// stw r31,552(r1)
	PPC_STORE_U32(ctx.r1.u32 + 552, ctx.r31.u32);
	// lis r8,-32228
	ctx.r8.s64 = -2112094208;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r11,r11,-4712
	ctx.r11.s64 = ctx.r11.s64 + -4712;
	// addi r8,r8,-30368
	ctx.r8.s64 = ctx.r8.s64 + -30368;
	// addi r7,r1,544
	ctx.r7.s64 = ctx.r1.s64 + 544;
	// stw r9,556(r1)
	PPC_STORE_U32(ctx.r1.u32 + 556, ctx.r9.u32);
	// stw r8,544(r1)
	PPC_STORE_U32(ctx.r1.u32 + 544, ctx.r8.u32);
	// addi r4,r1,544
	ctx.r4.s64 = ctx.r1.s64 + 544;
	// stw r7,560(r1)
	PPC_STORE_U32(ctx.r1.u32 + 560, ctx.r7.u32);
	// addi r3,r10,400
	ctx.r3.s64 = ctx.r10.s64 + 400;
	// stw r11,548(r1)
	PPC_STORE_U32(ctx.r1.u32 + 548, ctx.r11.u32);
	// bl 0x823f64c8
	ctx.lr = 0x823EE048;
	sub_823F64C8(ctx, base);
	// addi r3,r1,544
	ctx.r3.s64 = ctx.r1.s64 + 544;
	// bl 0x82f91940
	ctx.lr = 0x823EE050;
	sub_82F91940(ctx, base);
	// lis r11,-32193
	ctx.r11.s64 = -2109800448;
	// addi r10,r28,5552
	ctx.r10.s64 = ctx.r28.s64 + 5552;
	// ld r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// addi r11,r11,-11144
	ctx.r11.s64 = ctx.r11.s64 + -11144;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// bl 0x823f67c0
	ctx.lr = 0x823EE074;
	sub_823F67C0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r11,984
	ctx.r3.s64 = ctx.r11.s64 + 984;
	// bl 0x823f64c8
	ctx.lr = 0x823EE084;
	sub_823F64C8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82f91940
	ctx.lr = 0x823EE08C;
	sub_82F91940(ctx, base);
	// lwz r9,120(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// lis r11,-32193
	ctx.r11.s64 = -2109800448;
	// stw r31,392(r1)
	PPC_STORE_U32(ctx.r1.u32 + 392, ctx.r31.u32);
	// lis r8,-32228
	ctx.r8.s64 = -2112094208;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r11,r11,-4536
	ctx.r11.s64 = ctx.r11.s64 + -4536;
	// addi r8,r8,-30320
	ctx.r8.s64 = ctx.r8.s64 + -30320;
	// addi r7,r1,384
	ctx.r7.s64 = ctx.r1.s64 + 384;
	// stw r9,396(r1)
	PPC_STORE_U32(ctx.r1.u32 + 396, ctx.r9.u32);
	// stw r8,384(r1)
	PPC_STORE_U32(ctx.r1.u32 + 384, ctx.r8.u32);
	// addi r4,r1,384
	ctx.r4.s64 = ctx.r1.s64 + 384;
	// stw r7,400(r1)
	PPC_STORE_U32(ctx.r1.u32 + 400, ctx.r7.u32);
	// addi r3,r10,512
	ctx.r3.s64 = ctx.r10.s64 + 512;
	// stw r11,388(r1)
	PPC_STORE_U32(ctx.r1.u32 + 388, ctx.r11.u32);
	// bl 0x823f64c8
	ctx.lr = 0x823EE0C8;
	sub_823F64C8(ctx, base);
	// addi r3,r1,384
	ctx.r3.s64 = ctx.r1.s64 + 384;
	// bl 0x82f91940
	ctx.lr = 0x823EE0D0;
	sub_82F91940(ctx, base);
	// lis r11,-32193
	ctx.r11.s64 = -2109800448;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// addi r11,r11,-4360
	ctx.r11.s64 = ctx.r11.s64 + -4360;
	// ld r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// bl 0x823f6858
	ctx.lr = 0x823EE0F0;
	sub_823F6858(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r11,1104
	ctx.r3.s64 = ctx.r11.s64 + 1104;
	// bl 0x823f64c8
	ctx.lr = 0x823EE100;
	sub_823F64C8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82f91940
	ctx.lr = 0x823EE108;
	sub_82F91940(ctx, base);
	// lis r11,-32194
	ctx.r11.s64 = -2109865984;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// addi r11,r11,-2864
	ctx.r11.s64 = ctx.r11.s64 + -2864;
	// ld r6,96(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// ld r7,104(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// ld r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x823f68f0
	ctx.lr = 0x823EE138;
	sub_823F68F0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r11,1104
	ctx.r3.s64 = ctx.r11.s64 + 1104;
	// bl 0x823f6430
	ctx.lr = 0x823EE148;
	sub_823F6430(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82f91940
	ctx.lr = 0x823EE150;
	sub_82F91940(ctx, base);
	// lis r11,-32193
	ctx.r11.s64 = -2109800448;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// addi r11,r11,-4192
	ctx.r11.s64 = ctx.r11.s64 + -4192;
	// ld r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// bl 0x823f65f8
	ctx.lr = 0x823EE170;
	sub_823F65F8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r11,1224
	ctx.r3.s64 = ctx.r11.s64 + 1224;
	// bl 0x823f64c8
	ctx.lr = 0x823EE180;
	sub_823F64C8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82f91940
	ctx.lr = 0x823EE188;
	sub_82F91940(ctx, base);
	// lwz r9,120(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// lis r11,-32193
	ctx.r11.s64 = -2109800448;
	// stw r31,424(r1)
	PPC_STORE_U32(ctx.r1.u32 + 424, ctx.r31.u32);
	// lis r8,-32228
	ctx.r8.s64 = -2112094208;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r11,r11,-4048
	ctx.r11.s64 = ctx.r11.s64 + -4048;
	// addi r8,r8,-30248
	ctx.r8.s64 = ctx.r8.s64 + -30248;
	// addi r7,r1,416
	ctx.r7.s64 = ctx.r1.s64 + 416;
	// stw r9,428(r1)
	PPC_STORE_U32(ctx.r1.u32 + 428, ctx.r9.u32);
	// stw r8,416(r1)
	PPC_STORE_U32(ctx.r1.u32 + 416, ctx.r8.u32);
	// addi r4,r1,416
	ctx.r4.s64 = ctx.r1.s64 + 416;
	// stw r7,432(r1)
	PPC_STORE_U32(ctx.r1.u32 + 432, ctx.r7.u32);
	// addi r3,r10,1344
	ctx.r3.s64 = ctx.r10.s64 + 1344;
	// stw r11,420(r1)
	PPC_STORE_U32(ctx.r1.u32 + 420, ctx.r11.u32);
	// bl 0x823f64c8
	ctx.lr = 0x823EE1C4;
	sub_823F64C8(ctx, base);
	// addi r3,r1,416
	ctx.r3.s64 = ctx.r1.s64 + 416;
	// bl 0x82f91940
	ctx.lr = 0x823EE1CC;
	sub_82F91940(ctx, base);
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// addi r8,r1,608
	ctx.r8.s64 = ctx.r1.s64 + 608;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// addi r10,r10,-30224
	ctx.r10.s64 = ctx.r10.s64 + -30224;
	// stw r8,624(r1)
	PPC_STORE_U32(ctx.r1.u32 + 624, ctx.r8.u32);
	// lis r11,-32193
	ctx.r11.s64 = -2109800448;
	// stw r10,608(r1)
	PPC_STORE_U32(ctx.r1.u32 + 608, ctx.r10.u32);
	// addi r4,r1,608
	ctx.r4.s64 = ctx.r1.s64 + 608;
	// addi r9,r11,-3888
	ctx.r9.s64 = ctx.r11.s64 + -3888;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// ld r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r9,612(r1)
	PPC_STORE_U64(ctx.r1.u32 + 612, ctx.r9.u64);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r3,r11,1456
	ctx.r3.s64 = ctx.r11.s64 + 1456;
	// bl 0x82372360
	ctx.lr = 0x823EE208;
	sub_82372360(ctx, base);
	// addi r3,r1,608
	ctx.r3.s64 = ctx.r1.s64 + 608;
	// bl 0x82f91940
	ctx.lr = 0x823EE210;
	sub_82F91940(ctx, base);
	// lis r11,-32194
	ctx.r11.s64 = -2109865984;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r11,r11,-2368
	ctx.r11.s64 = ctx.r11.s64 + -2368;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// ld r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// bl 0x823f6980
	ctx.lr = 0x823EE238;
	sub_823F6980(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r11,1456
	ctx.r3.s64 = ctx.r11.s64 + 1456;
	// bl 0x823f63a0
	ctx.lr = 0x823EE248;
	sub_823F63A0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82f91940
	ctx.lr = 0x823EE250;
	sub_82F91940(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,1472
	ctx.r1.s64 = ctx.r1.s64 + 1472;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
loc_823EE25C:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stw r30,356(r1)
	PPC_STORE_U32(ctx.r1.u32 + 356, ctx.r30.u32);
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// addi r11,r11,11272
	ctx.r11.s64 = ctx.r11.s64 + 11272;
	// stw r11,352(r1)
	PPC_STORE_U32(ctx.r1.u32 + 352, ctx.r11.u32);
	// bl 0x82240040
	ctx.lr = 0x823EE274;
	sub_82240040(ctx, base);
loc_823EE274:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stw r30,364(r1)
	PPC_STORE_U32(ctx.r1.u32 + 364, ctx.r30.u32);
	// addi r3,r1,360
	ctx.r3.s64 = ctx.r1.s64 + 360;
	// addi r11,r11,11272
	ctx.r11.s64 = ctx.r11.s64 + 11272;
	// stw r11,360(r1)
	PPC_STORE_U32(ctx.r1.u32 + 360, ctx.r11.u32);
	// bl 0x82240040
	ctx.lr = 0x823EE28C;
	sub_82240040(ctx, base);
loc_823EE28C:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stw r30,380(r1)
	PPC_STORE_U32(ctx.r1.u32 + 380, ctx.r30.u32);
	// addi r3,r1,376
	ctx.r3.s64 = ctx.r1.s64 + 376;
	// addi r11,r11,11272
	ctx.r11.s64 = ctx.r11.s64 + 11272;
	// stw r11,376(r1)
	PPC_STORE_U32(ctx.r1.u32 + 376, ctx.r11.u32);
	// bl 0x82240040
	ctx.lr = 0x823EE2A4;
	sub_82240040(ctx, base);
loc_823EE2A4:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stw r30,340(r1)
	PPC_STORE_U32(ctx.r1.u32 + 340, ctx.r30.u32);
	// addi r3,r1,336
	ctx.r3.s64 = ctx.r1.s64 + 336;
	// addi r11,r11,11272
	ctx.r11.s64 = ctx.r11.s64 + 11272;
	// stw r11,336(r1)
	PPC_STORE_U32(ctx.r1.u32 + 336, ctx.r11.u32);
	// bl 0x82240040
	ctx.lr = 0x823EE2BC;
	sub_82240040(ctx, base);
loc_823EE2BC:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stw r30,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r30.u32);
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// addi r11,r11,11272
	ctx.r11.s64 = ctx.r11.s64 + 11272;
	// stw r11,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r11.u32);
	// bl 0x82240040
	ctx.lr = 0x823EE2D4;
	sub_82240040(ctx, base);
loc_823EE2D4:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stw r30,308(r1)
	PPC_STORE_U32(ctx.r1.u32 + 308, ctx.r30.u32);
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// addi r11,r11,11272
	ctx.r11.s64 = ctx.r11.s64 + 11272;
	// stw r11,304(r1)
	PPC_STORE_U32(ctx.r1.u32 + 304, ctx.r11.u32);
	// bl 0x82240040
	ctx.lr = 0x823EE2EC;
	sub_82240040(ctx, base);
loc_823EE2EC:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stw r30,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r30.u32);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// addi r11,r11,11272
	ctx.r11.s64 = ctx.r11.s64 + 11272;
	// stw r11,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r11.u32);
	// bl 0x82240040
	ctx.lr = 0x823EE304;
	sub_82240040(ctx, base);
loc_823EE304:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stw r30,372(r1)
	PPC_STORE_U32(ctx.r1.u32 + 372, ctx.r30.u32);
	// addi r3,r1,368
	ctx.r3.s64 = ctx.r1.s64 + 368;
	// addi r11,r11,11272
	ctx.r11.s64 = ctx.r11.s64 + 11272;
	// stw r11,368(r1)
	PPC_STORE_U32(ctx.r1.u32 + 368, ctx.r11.u32);
	// bl 0x82240040
	ctx.lr = 0x823EE31C;
	sub_82240040(ctx, base);
loc_823EE31C:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stw r30,260(r1)
	PPC_STORE_U32(ctx.r1.u32 + 260, ctx.r30.u32);
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// addi r11,r11,11272
	ctx.r11.s64 = ctx.r11.s64 + 11272;
	// stw r11,256(r1)
	PPC_STORE_U32(ctx.r1.u32 + 256, ctx.r11.u32);
	// bl 0x82240040
	ctx.lr = 0x823EE334;
	sub_82240040(ctx, base);
loc_823EE334:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stw r30,324(r1)
	PPC_STORE_U32(ctx.r1.u32 + 324, ctx.r30.u32);
	// addi r3,r1,320
	ctx.r3.s64 = ctx.r1.s64 + 320;
	// addi r11,r11,11272
	ctx.r11.s64 = ctx.r11.s64 + 11272;
	// stw r11,320(r1)
	PPC_STORE_U32(ctx.r1.u32 + 320, ctx.r11.u32);
	// bl 0x82240040
	ctx.lr = 0x823EE34C;
	sub_82240040(ctx, base);
loc_823EE34C:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stw r30,276(r1)
	PPC_STORE_U32(ctx.r1.u32 + 276, ctx.r30.u32);
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// addi r11,r11,11272
	ctx.r11.s64 = ctx.r11.s64 + 11272;
	// stw r11,272(r1)
	PPC_STORE_U32(ctx.r1.u32 + 272, ctx.r11.u32);
	// bl 0x82240040
	ctx.lr = 0x823EE364;
	sub_82240040(ctx, base);
loc_823EE364:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stw r30,204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 204, ctx.r30.u32);
	// addi r3,r1,200
	ctx.r3.s64 = ctx.r1.s64 + 200;
	// addi r11,r11,11272
	ctx.r11.s64 = ctx.r11.s64 + 11272;
	// stw r11,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, ctx.r11.u32);
	// bl 0x82240040
	ctx.lr = 0x823EE37C;
	sub_82240040(ctx, base);
loc_823EE37C:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stw r30,292(r1)
	PPC_STORE_U32(ctx.r1.u32 + 292, ctx.r30.u32);
	// addi r3,r1,288
	ctx.r3.s64 = ctx.r1.s64 + 288;
	// addi r11,r11,11272
	ctx.r11.s64 = ctx.r11.s64 + 11272;
	// stw r11,288(r1)
	PPC_STORE_U32(ctx.r1.u32 + 288, ctx.r11.u32);
	// bl 0x82240040
	ctx.lr = 0x823EE394;
	sub_82240040(ctx, base);
loc_823EE394:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stw r30,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r30.u32);
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// addi r11,r11,11272
	ctx.r11.s64 = ctx.r11.s64 + 11272;
	// stw r11,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r11.u32);
	// bl 0x82240040
	ctx.lr = 0x823EE3AC;
	sub_82240040(ctx, base);
loc_823EE3AC:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stw r30,220(r1)
	PPC_STORE_U32(ctx.r1.u32 + 220, ctx.r30.u32);
	// addi r3,r1,216
	ctx.r3.s64 = ctx.r1.s64 + 216;
	// addi r11,r11,11272
	ctx.r11.s64 = ctx.r11.s64 + 11272;
	// stw r11,216(r1)
	PPC_STORE_U32(ctx.r1.u32 + 216, ctx.r11.u32);
	// bl 0x82240040
	ctx.lr = 0x823EE3C4;
	sub_82240040(ctx, base);
loc_823EE3C4:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stw r30,236(r1)
	PPC_STORE_U32(ctx.r1.u32 + 236, ctx.r30.u32);
	// addi r3,r1,232
	ctx.r3.s64 = ctx.r1.s64 + 232;
	// addi r11,r11,11272
	ctx.r11.s64 = ctx.r11.s64 + 11272;
	// stw r11,232(r1)
	PPC_STORE_U32(ctx.r1.u32 + 232, ctx.r11.u32);
	// bl 0x82240040
	ctx.lr = 0x823EE3DC;
	sub_82240040(ctx, base);
loc_823EE3DC:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stw r30,252(r1)
	PPC_STORE_U32(ctx.r1.u32 + 252, ctx.r30.u32);
	// addi r3,r1,248
	ctx.r3.s64 = ctx.r1.s64 + 248;
	// addi r11,r11,11272
	ctx.r11.s64 = ctx.r11.s64 + 11272;
	// stw r11,248(r1)
	PPC_STORE_U32(ctx.r1.u32 + 248, ctx.r11.u32);
	// bl 0x82240040
	ctx.lr = 0x823EE3F4;
	sub_82240040(ctx, base);
loc_823EE3F4:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stw r30,268(r1)
	PPC_STORE_U32(ctx.r1.u32 + 268, ctx.r30.u32);
	// addi r3,r1,264
	ctx.r3.s64 = ctx.r1.s64 + 264;
	// addi r11,r11,11272
	ctx.r11.s64 = ctx.r11.s64 + 11272;
	// stw r11,264(r1)
	PPC_STORE_U32(ctx.r1.u32 + 264, ctx.r11.u32);
	// bl 0x82240040
	ctx.lr = 0x823EE40C;
	sub_82240040(ctx, base);
loc_823EE40C:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stw r30,284(r1)
	PPC_STORE_U32(ctx.r1.u32 + 284, ctx.r30.u32);
	// addi r3,r1,280
	ctx.r3.s64 = ctx.r1.s64 + 280;
	// addi r11,r11,11272
	ctx.r11.s64 = ctx.r11.s64 + 11272;
	// stw r11,280(r1)
	PPC_STORE_U32(ctx.r1.u32 + 280, ctx.r11.u32);
	// bl 0x82240040
	ctx.lr = 0x823EE424;
	sub_82240040(ctx, base);
loc_823EE424:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stw r30,300(r1)
	PPC_STORE_U32(ctx.r1.u32 + 300, ctx.r30.u32);
	// addi r3,r1,296
	ctx.r3.s64 = ctx.r1.s64 + 296;
	// addi r11,r11,11272
	ctx.r11.s64 = ctx.r11.s64 + 11272;
	// stw r11,296(r1)
	PPC_STORE_U32(ctx.r1.u32 + 296, ctx.r11.u32);
	// bl 0x82240040
	ctx.lr = 0x823EE43C;
	sub_82240040(ctx, base);
loc_823EE43C:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stw r30,316(r1)
	PPC_STORE_U32(ctx.r1.u32 + 316, ctx.r30.u32);
	// addi r3,r1,312
	ctx.r3.s64 = ctx.r1.s64 + 312;
	// addi r11,r11,11272
	ctx.r11.s64 = ctx.r11.s64 + 11272;
	// stw r11,312(r1)
	PPC_STORE_U32(ctx.r1.u32 + 312, ctx.r11.u32);
	// bl 0x82240040
	ctx.lr = 0x823EE454;
	sub_82240040(ctx, base);
loc_823EE454:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stw r30,332(r1)
	PPC_STORE_U32(ctx.r1.u32 + 332, ctx.r30.u32);
	// addi r3,r1,328
	ctx.r3.s64 = ctx.r1.s64 + 328;
	// addi r11,r11,11272
	ctx.r11.s64 = ctx.r11.s64 + 11272;
	// stw r11,328(r1)
	PPC_STORE_U32(ctx.r1.u32 + 328, ctx.r11.u32);
	// bl 0x82240040
	ctx.lr = 0x823EE46C;
	sub_82240040(ctx, base);
loc_823EE46C:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stw r30,348(r1)
	PPC_STORE_U32(ctx.r1.u32 + 348, ctx.r30.u32);
	// addi r3,r1,344
	ctx.r3.s64 = ctx.r1.s64 + 344;
	// addi r11,r11,11272
	ctx.r11.s64 = ctx.r11.s64 + 11272;
	// stw r11,344(r1)
	PPC_STORE_U32(ctx.r1.u32 + 344, ctx.r11.u32);
	// bl 0x82240040
	ctx.lr = 0x823EE484;
	sub_82240040(ctx, base);
loc_823EE484:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,11272
	ctx.r11.s64 = ctx.r11.s64 + 11272;
	// stw r10,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// bl 0x82240040
	ctx.lr = 0x823EE4A0;
	sub_82240040(ctx, base);
}

__attribute__((alias("__imp__sub_823EE4A0"))) PPC_WEAK_FUNC(sub_823EE4A0);
PPC_FUNC_IMPL(__imp__sub_823EE4A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x823EE4A8;
	__savegprlr_29(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// stw r4,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r4.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r3,40
	ctx.r3.s64 = 40;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// addi r31,r11,40
	ctx.r31.s64 = ctx.r11.s64 + 40;
	// stvx128 v1,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v1.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// bl 0x82691500
	ctx.lr = 0x823EE4CC;
	sub_82691500(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x823ee4e4
	if (ctx.cr0.eq) goto loc_823EE4E4;
	// bl 0x822b0f58
	ctx.lr = 0x823EE4DC;
	sub_822B0F58(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x823ee4e8
	goto loc_823EE4E8;
loc_823EE4E4:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
loc_823EE4E8:
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r30.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// bl 0x822b0dc8
	ctx.lr = 0x823EE4F8;
	sub_822B0DC8(ctx, base);
	// lwz r3,104(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823EE514;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,112(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823EE530;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,120(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823EE54C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,72(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823ee578
	if (ctx.cr6.eq) goto loc_823EE578;
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x8291fc80
	ctx.lr = 0x823EE560;
	sub_8291FC80(ctx, base);
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x823567c0
	ctx.lr = 0x823EE568;
	sub_823567C0(ctx, base);
	// addi r5,r31,56
	ctx.r5.s64 = ctx.r31.s64 + 56;
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82256a50
	ctx.lr = 0x823EE578;
	sub_82256A50(ctx, base);
loc_823EE578:
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82917848
	ctx.lr = 0x823EE584;
	sub_82917848(ctx, base);
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823ee594
	if (ctx.cr6.eq) goto loc_823EE594;
	// bl 0x82241d18
	ctx.lr = 0x823EE594;
	sub_82241D18(ctx, base);
loc_823EE594:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823EE59C"))) PPC_WEAK_FUNC(sub_823EE59C);
PPC_FUNC_IMPL(__imp__sub_823EE59C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823EE5A0"))) PPC_WEAK_FUNC(sub_823EE5A0);
PPC_FUNC_IMPL(__imp__sub_823EE5A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x823EE5A8;
	__savegprlr_29(ctx, base);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r3,40
	ctx.r3.s64 = 40;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r31,r11,288
	ctx.r31.s64 = ctx.r11.s64 + 288;
	// bl 0x82691500
	ctx.lr = 0x823EE5C0;
	sub_82691500(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x823ee5d8
	if (ctx.cr0.eq) goto loc_823EE5D8;
	// bl 0x822b0f58
	ctx.lr = 0x823EE5D0;
	sub_822B0F58(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x823ee5dc
	goto loc_823EE5DC;
loc_823EE5D8:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
loc_823EE5DC:
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// bl 0x822b0dc8
	ctx.lr = 0x823EE5EC;
	sub_822B0DC8(ctx, base);
	// lwz r3,104(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823EE608;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,72(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823ee674
	if (ctx.cr6.eq) goto loc_823EE674;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x8291fc80
	ctx.lr = 0x823EE61C;
	sub_8291FC80(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x823567c0
	ctx.lr = 0x823EE624;
	sub_823567C0(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r30,r31,56
	ctx.r30.s64 = ctx.r31.s64 + 56;
	// lwz r29,80(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82255e08
	ctx.lr = 0x823EE634;
	sub_82255E08(ctx, base);
	// lwz r3,104(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823EE650;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,72(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823ee674
	if (ctx.cr6.eq) goto loc_823EE674;
	// lwz r3,16(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823EE674;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_823EE674:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82917848
	ctx.lr = 0x823EE680;
	sub_82917848(ctx, base);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823ee690
	if (ctx.cr6.eq) goto loc_823EE690;
	// bl 0x82241d18
	ctx.lr = 0x823EE690;
	sub_82241D18(ctx, base);
loc_823EE690:
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823EE698"))) PPC_WEAK_FUNC(sub_823EE698);
PPC_FUNC_IMPL(__imp__sub_823EE698) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x823EE6A0;
	__savegprlr_29(ctx, base);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r3,40
	ctx.r3.s64 = 40;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r31,r11,400
	ctx.r31.s64 = ctx.r11.s64 + 400;
	// bl 0x82691500
	ctx.lr = 0x823EE6B8;
	sub_82691500(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x823ee6d0
	if (ctx.cr0.eq) goto loc_823EE6D0;
	// bl 0x822b0f58
	ctx.lr = 0x823EE6C8;
	sub_822B0F58(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x823ee6d4
	goto loc_823EE6D4;
loc_823EE6D0:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
loc_823EE6D4:
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// bl 0x822b0dc8
	ctx.lr = 0x823EE6E4;
	sub_822B0DC8(ctx, base);
	// lwz r3,104(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823EE700;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,72(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823ee76c
	if (ctx.cr6.eq) goto loc_823EE76C;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x8291fc80
	ctx.lr = 0x823EE714;
	sub_8291FC80(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x823567c0
	ctx.lr = 0x823EE71C;
	sub_823567C0(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r30,r31,56
	ctx.r30.s64 = ctx.r31.s64 + 56;
	// lwz r29,80(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82255e08
	ctx.lr = 0x823EE72C;
	sub_82255E08(ctx, base);
	// lwz r3,104(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823EE748;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,72(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823ee76c
	if (ctx.cr6.eq) goto loc_823EE76C;
	// lwz r3,16(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823EE76C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_823EE76C:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82917848
	ctx.lr = 0x823EE778;
	sub_82917848(ctx, base);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823ee788
	if (ctx.cr6.eq) goto loc_823EE788;
	// bl 0x82241d18
	ctx.lr = 0x823EE788;
	sub_82241D18(ctx, base);
loc_823EE788:
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823EE790"))) PPC_WEAK_FUNC(sub_823EE790);
PPC_FUNC_IMPL(__imp__sub_823EE790) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x823EE798;
	__savegprlr_29(ctx, base);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r3,40
	ctx.r3.s64 = 40;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r31,r11,512
	ctx.r31.s64 = ctx.r11.s64 + 512;
	// bl 0x82691500
	ctx.lr = 0x823EE7B0;
	sub_82691500(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x823ee7c8
	if (ctx.cr0.eq) goto loc_823EE7C8;
	// bl 0x822b0f58
	ctx.lr = 0x823EE7C0;
	sub_822B0F58(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x823ee7cc
	goto loc_823EE7CC;
loc_823EE7C8:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
loc_823EE7CC:
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// bl 0x822b0dc8
	ctx.lr = 0x823EE7DC;
	sub_822B0DC8(ctx, base);
	// lwz r3,104(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823EE7F8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,72(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823ee864
	if (ctx.cr6.eq) goto loc_823EE864;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x8291fc80
	ctx.lr = 0x823EE80C;
	sub_8291FC80(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x823567c0
	ctx.lr = 0x823EE814;
	sub_823567C0(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r30,r31,56
	ctx.r30.s64 = ctx.r31.s64 + 56;
	// lwz r29,80(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82255e08
	ctx.lr = 0x823EE824;
	sub_82255E08(ctx, base);
	// lwz r3,104(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823EE840;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,72(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823ee864
	if (ctx.cr6.eq) goto loc_823EE864;
	// lwz r3,16(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823EE864;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_823EE864:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82917848
	ctx.lr = 0x823EE870;
	sub_82917848(ctx, base);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823ee880
	if (ctx.cr6.eq) goto loc_823EE880;
	// bl 0x82241d18
	ctx.lr = 0x823EE880;
	sub_82241D18(ctx, base);
loc_823EE880:
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823EE888"))) PPC_WEAK_FUNC(sub_823EE888);
PPC_FUNC_IMPL(__imp__sub_823EE888) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x823EE890;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r5,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r5.u32);
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// stw r4,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r4.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r3,40
	ctx.r3.s64 = 40;
	// addi r31,r11,1680
	ctx.r31.s64 = ctx.r11.s64 + 1680;
	// bl 0x82691500
	ctx.lr = 0x823EE8B0;
	sub_82691500(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x823ee8c8
	if (ctx.cr0.eq) goto loc_823EE8C8;
	// bl 0x822b0f58
	ctx.lr = 0x823EE8C0;
	sub_822B0F58(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x823ee8cc
	goto loc_823EE8CC;
loc_823EE8C8:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
loc_823EE8CC:
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r30.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// bl 0x822b0dc8
	ctx.lr = 0x823EE8DC;
	sub_822B0DC8(ctx, base);
	// lwz r3,104(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823EE8F8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,112(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823EE914;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,120(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823EE930;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,72(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823ee95c
	if (ctx.cr6.eq) goto loc_823EE95C;
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x8291fc80
	ctx.lr = 0x823EE944;
	sub_8291FC80(ctx, base);
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x823567c0
	ctx.lr = 0x823EE94C;
	sub_823567C0(ctx, base);
	// addi r5,r31,56
	ctx.r5.s64 = ctx.r31.s64 + 56;
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82256b18
	ctx.lr = 0x823EE95C;
	sub_82256B18(ctx, base);
loc_823EE95C:
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82917848
	ctx.lr = 0x823EE968;
	sub_82917848(ctx, base);
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823ee978
	if (ctx.cr6.eq) goto loc_823EE978;
	// bl 0x82241d18
	ctx.lr = 0x823EE978;
	sub_82241D18(ctx, base);
loc_823EE978:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823EE980"))) PPC_WEAK_FUNC(sub_823EE980);
PPC_FUNC_IMPL(__imp__sub_823EE980) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x823EE988;
	__savegprlr_29(ctx, base);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r3,40
	ctx.r3.s64 = 40;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r31,r11,3280
	ctx.r31.s64 = ctx.r11.s64 + 3280;
	// bl 0x82691500
	ctx.lr = 0x823EE9A0;
	sub_82691500(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x823ee9b8
	if (ctx.cr0.eq) goto loc_823EE9B8;
	// bl 0x822b0f58
	ctx.lr = 0x823EE9B0;
	sub_822B0F58(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x823ee9bc
	goto loc_823EE9BC;
loc_823EE9B8:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
loc_823EE9BC:
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// bl 0x822b0dc8
	ctx.lr = 0x823EE9CC;
	sub_822B0DC8(ctx, base);
	// lwz r3,104(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823EE9E8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,72(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823eea6c
	if (ctx.cr6.eq) goto loc_823EEA6C;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x8291fc80
	ctx.lr = 0x823EE9FC;
	sub_8291FC80(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x823567c0
	ctx.lr = 0x823EEA04;
	sub_823567C0(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r30,r31,56
	ctx.r30.s64 = ctx.r31.s64 + 56;
	// lwz r29,80(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82255da0
	ctx.lr = 0x823EEA14;
	sub_82255DA0(ctx, base);
	// addi r11,r1,176
	ctx.r11.s64 = ctx.r1.s64 + 176;
	// addi r10,r1,192
	ctx.r10.s64 = ctx.r1.s64 + 192;
	// addi r9,r1,208
	ctx.r9.s64 = ctx.r1.s64 + 208;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// stvx128 v77,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v77.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v77,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v77.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v77,r0,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v77.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lwz r3,104(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823EEA48;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,72(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823eea6c
	if (ctx.cr6.eq) goto loc_823EEA6C;
	// lwz r3,16(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823EEA6C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_823EEA6C:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82917848
	ctx.lr = 0x823EEA78;
	sub_82917848(ctx, base);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823eea88
	if (ctx.cr6.eq) goto loc_823EEA88;
	// bl 0x82241d18
	ctx.lr = 0x823EEA88;
	sub_82241D18(ctx, base);
loc_823EEA88:
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823EEA90"))) PPC_WEAK_FUNC(sub_823EEA90);
PPC_FUNC_IMPL(__imp__sub_823EEA90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x823EEA98;
	__savegprlr_29(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r3,40
	ctx.r3.s64 = 40;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r31,r11,3392
	ctx.r31.s64 = ctx.r11.s64 + 3392;
	// bl 0x82691500
	ctx.lr = 0x823EEAB0;
	sub_82691500(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x823eeac8
	if (ctx.cr0.eq) goto loc_823EEAC8;
	// bl 0x822b0f58
	ctx.lr = 0x823EEAC0;
	sub_822B0F58(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x823eeacc
	goto loc_823EEACC;
loc_823EEAC8:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
loc_823EEACC:
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// bl 0x822b0dc8
	ctx.lr = 0x823EEADC;
	sub_822B0DC8(ctx, base);
	// lwz r3,104(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823EEAF8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,72(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823eeb7c
	if (ctx.cr6.eq) goto loc_823EEB7C;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x8291fc80
	ctx.lr = 0x823EEB0C;
	sub_8291FC80(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x823567c0
	ctx.lr = 0x823EEB14;
	sub_823567C0(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r30,r31,56
	ctx.r30.s64 = ctx.r31.s64 + 56;
	// lwz r29,80(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82255da0
	ctx.lr = 0x823EEB24;
	sub_82255DA0(ctx, base);
	// addi r11,r1,176
	ctx.r11.s64 = ctx.r1.s64 + 176;
	// addi r10,r1,192
	ctx.r10.s64 = ctx.r1.s64 + 192;
	// li r9,-1
	ctx.r9.s64 = -1;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// stvx128 v77,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v77.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v77,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v77.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stw r9,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r9.u32);
	// lwz r3,104(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823EEB58;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,72(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823eeb7c
	if (ctx.cr6.eq) goto loc_823EEB7C;
	// lwz r3,16(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823EEB7C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_823EEB7C:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82917848
	ctx.lr = 0x823EEB88;
	sub_82917848(ctx, base);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823eeb98
	if (ctx.cr6.eq) goto loc_823EEB98;
	// bl 0x82241d18
	ctx.lr = 0x823EEB98;
	sub_82241D18(ctx, base);
loc_823EEB98:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823EEBA0"))) PPC_WEAK_FUNC(sub_823EEBA0);
PPC_FUNC_IMPL(__imp__sub_823EEBA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x823EEBA8;
	__savegprlr_29(ctx, base);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32194
	ctx.r10.s64 = -2109865984;
	// lwz r31,4(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r9,r1,192
	ctx.r9.s64 = ctx.r1.s64 + 192;
	// addi r10,r10,-12688
	ctx.r10.s64 = ctx.r10.s64 + -12688;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// stw r10,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r8,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r8.u32);
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// ld r10,112(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// stvx128 v1,r0,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v1.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r5,24
	ctx.r5.s64 = 24;
	// stw r31,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r31.u32);
	// stw r11,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r11.u32);
	// std r10,160(r1)
	PPC_STORE_U64(ctx.r1.u32 + 160, ctx.r10.u64);
	// bl 0x82fa77c0
	ctx.lr = 0x823EEBF4;
	sub_82FA77C0(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r4,r1,216
	ctx.r4.s64 = ctx.r1.s64 + 216;
	// li r5,24
	ctx.r5.s64 = 24;
	// addi r31,r31,2552
	ctx.r31.s64 = ctx.r31.s64 + 2552;
	// bl 0x82fa77c0
	ctx.lr = 0x823EEC08;
	sub_82FA77C0(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// ld r4,160(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 160);
	// ld r5,168(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 168);
	// ld r6,176(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 176);
	// ld r7,184(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 184);
	// ld r8,192(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 192);
	// ld r9,200(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 200);
	// ld r10,208(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 208);
	// bl 0x823dff48
	ctx.lr = 0x823EEC2C;
	sub_823DFF48(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r3,r31,312
	ctx.r3.s64 = ctx.r31.s64 + 312;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x8234cb18
	ctx.lr = 0x823EEC3C;
	sub_8234CB18(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82f91940
	ctx.lr = 0x823EEC44;
	sub_82F91940(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r3,r11,1808
	ctx.r3.s64 = ctx.r11.s64 + 1808;
	// bl 0x823721e0
	ctx.lr = 0x823EEC50;
	sub_823721E0(ctx, base);
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823EEC58"))) PPC_WEAK_FUNC(sub_823EEC58);
PPC_FUNC_IMPL(__imp__sub_823EEC58) {
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
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r9,r9,-13744
	ctx.r9.s64 = ctx.r9.s64 + -13744;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// stvx128 v1,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v1.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stw r4,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r4.u32);
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// addi r31,r11,2552
	ctx.r31.s64 = ctx.r11.s64 + 2552;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// ld r7,120(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// ld r8,128(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// ld r5,104(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// ld r6,112(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// ld r9,136(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 136);
	// bl 0x823dfeb0
	ctx.lr = 0x823EECB8;
	sub_823DFEB0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r31,360
	ctx.r3.s64 = ctx.r31.s64 + 360;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8234cb18
	ctx.lr = 0x823EECC8;
	sub_8234CB18(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82f91940
	ctx.lr = 0x823EECD0;
	sub_82F91940(ctx, base);
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

__attribute__((alias("__imp__sub_823EECE8"))) PPC_WEAK_FUNC(sub_823EECE8);
PPC_FUNC_IMPL(__imp__sub_823EECE8) {
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
	// stwu r1,-416(r1)
	ea = -416 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32194
	ctx.r11.s64 = -2109865984;
	// lwz r31,4(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,-15624
	ctx.r11.s64 = ctx.r11.s64 + -15624;
	// stw r10,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r10.u32);
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// stw r11,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r11.u32);
	// li r5,144
	ctx.r5.s64 = 144;
	// ld r11,192(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 192);
	// stw r31,216(r1)
	PPC_STORE_U32(ctx.r1.u32 + 216, ctx.r31.u32);
	// std r11,208(r1)
	PPC_STORE_U64(ctx.r1.u32 + 208, ctx.r11.u64);
	// bl 0x82fa77c0
	ctx.lr = 0x823EED2C;
	sub_82FA77C0(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r4,r1,264
	ctx.r4.s64 = ctx.r1.s64 + 264;
	// li r5,104
	ctx.r5.s64 = 104;
	// addi r31,r31,2552
	ctx.r31.s64 = ctx.r31.s64 + 2552;
	// bl 0x82fa77c0
	ctx.lr = 0x823EED40;
	sub_82FA77C0(ctx, base);
	// addi r3,r1,368
	ctx.r3.s64 = ctx.r1.s64 + 368;
	// ld r4,208(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 208);
	// ld r5,216(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 216);
	// ld r6,224(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 224);
	// ld r7,232(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 232);
	// ld r8,240(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 240);
	// ld r9,248(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 248);
	// ld r10,256(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 256);
	// bl 0x823dfd70
	ctx.lr = 0x823EED64;
	sub_823DFD70(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r31,408
	ctx.r3.s64 = ctx.r31.s64 + 408;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8234cb18
	ctx.lr = 0x823EED74;
	sub_8234CB18(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82f91940
	ctx.lr = 0x823EED7C;
	sub_82F91940(ctx, base);
	// addi r1,r1,416
	ctx.r1.s64 = ctx.r1.s64 + 416;
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

__attribute__((alias("__imp__sub_823EED94"))) PPC_WEAK_FUNC(sub_823EED94);
PPC_FUNC_IMPL(__imp__sub_823EED94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823EED98"))) PPC_WEAK_FUNC(sub_823EED98);
PPC_FUNC_IMPL(__imp__sub_823EED98) {
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
	// stwu r1,-416(r1)
	ea = -416 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32194
	ctx.r11.s64 = -2109865984;
	// lwz r31,4(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,-14736
	ctx.r11.s64 = ctx.r11.s64 + -14736;
	// stw r10,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r10.u32);
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// stw r11,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r11.u32);
	// li r5,144
	ctx.r5.s64 = 144;
	// ld r11,192(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 192);
	// stw r31,216(r1)
	PPC_STORE_U32(ctx.r1.u32 + 216, ctx.r31.u32);
	// std r11,208(r1)
	PPC_STORE_U64(ctx.r1.u32 + 208, ctx.r11.u64);
	// bl 0x82fa77c0
	ctx.lr = 0x823EEDDC;
	sub_82FA77C0(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r4,r1,264
	ctx.r4.s64 = ctx.r1.s64 + 264;
	// li r5,104
	ctx.r5.s64 = 104;
	// addi r31,r31,2552
	ctx.r31.s64 = ctx.r31.s64 + 2552;
	// bl 0x82fa77c0
	ctx.lr = 0x823EEDF0;
	sub_82FA77C0(ctx, base);
	// addi r3,r1,368
	ctx.r3.s64 = ctx.r1.s64 + 368;
	// ld r4,208(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 208);
	// ld r5,216(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 216);
	// ld r6,224(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 224);
	// ld r7,232(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 232);
	// ld r8,240(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 240);
	// ld r9,248(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 248);
	// ld r10,256(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 256);
	// bl 0x823dfe10
	ctx.lr = 0x823EEE14;
	sub_823DFE10(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r31,456
	ctx.r3.s64 = ctx.r31.s64 + 456;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8234cb18
	ctx.lr = 0x823EEE24;
	sub_8234CB18(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82f91940
	ctx.lr = 0x823EEE2C;
	sub_82F91940(ctx, base);
	// addi r1,r1,416
	ctx.r1.s64 = ctx.r1.s64 + 416;
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

__attribute__((alias("__imp__sub_823EEE44"))) PPC_WEAK_FUNC(sub_823EEE44);
PPC_FUNC_IMPL(__imp__sub_823EEE44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823EEE48"))) PPC_WEAK_FUNC(sub_823EEE48);
PPC_FUNC_IMPL(__imp__sub_823EEE48) {
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
	// stwu r1,-416(r1)
	ea = -416 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32194
	ctx.r11.s64 = -2109865984;
	// lwz r31,4(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,-10336
	ctx.r11.s64 = ctx.r11.s64 + -10336;
	// stw r10,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r10.u32);
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// stw r11,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r11.u32);
	// li r5,144
	ctx.r5.s64 = 144;
	// ld r11,192(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 192);
	// stw r31,216(r1)
	PPC_STORE_U32(ctx.r1.u32 + 216, ctx.r31.u32);
	// std r11,208(r1)
	PPC_STORE_U64(ctx.r1.u32 + 208, ctx.r11.u64);
	// bl 0x82fa77c0
	ctx.lr = 0x823EEE8C;
	sub_82FA77C0(ctx, base);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r4,r1,264
	ctx.r4.s64 = ctx.r1.s64 + 264;
	// li r5,104
	ctx.r5.s64 = 104;
	// addi r31,r31,2552
	ctx.r31.s64 = ctx.r31.s64 + 2552;
	// bl 0x82fa77c0
	ctx.lr = 0x823EEEA0;
	sub_82FA77C0(ctx, base);
	// addi r3,r1,368
	ctx.r3.s64 = ctx.r1.s64 + 368;
	// ld r4,208(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 208);
	// ld r5,216(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 216);
	// ld r6,224(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 224);
	// ld r7,232(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 232);
	// ld r8,240(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 240);
	// ld r9,248(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 248);
	// ld r10,256(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 256);
	// bl 0x823dffe8
	ctx.lr = 0x823EEEC4;
	sub_823DFFE8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r31,504
	ctx.r3.s64 = ctx.r31.s64 + 504;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8234cb18
	ctx.lr = 0x823EEED4;
	sub_8234CB18(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82f91940
	ctx.lr = 0x823EEEDC;
	sub_82F91940(ctx, base);
	// addi r1,r1,416
	ctx.r1.s64 = ctx.r1.s64 + 416;
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

__attribute__((alias("__imp__sub_823EEEF4"))) PPC_WEAK_FUNC(sub_823EEEF4);
PPC_FUNC_IMPL(__imp__sub_823EEEF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823EEEF8"))) PPC_WEAK_FUNC(sub_823EEEF8);
PPC_FUNC_IMPL(__imp__sub_823EEEF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x823EEF00;
	__savegprlr_29(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32194
	ctx.r11.s64 = -2109865984;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r29,0
	ctx.r29.s64 = 0;
	// stw r4,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r4.u32);
	// addi r11,r11,-2864
	ctx.r11.s64 = ctx.r11.s64 + -2864;
	// stw r5,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r5.u32);
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r3,40
	ctx.r3.s64 = 40;
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// stw r10,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// bl 0x82691500
	ctx.lr = 0x823EEF3C;
	sub_82691500(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x823eef84
	if (ctx.cr0.eq) goto loc_823EEF84;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// addi r11,r11,-30176
	ctx.r11.s64 = ctx.r11.s64 + -30176;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// li r5,32
	ctx.r5.s64 = 32;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x82fa77c0
	ctx.lr = 0x823EEF60;
	sub_82FA77C0(ctx, base);
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r11,3104
	ctx.r3.s64 = ctx.r11.s64 + 3104;
	// bl 0x8234cb18
	ctx.lr = 0x823EEF74;
	sub_8234CB18(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82f91940
	ctx.lr = 0x823EEF7C;
	sub_82F91940(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
loc_823EEF84:
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
	ctx.lr = 0x823EEF9C;
	sub_82240040(ctx, base);
}

__attribute__((alias("__imp__sub_823EEF9C"))) PPC_WEAK_FUNC(sub_823EEF9C);
PPC_FUNC_IMPL(__imp__sub_823EEF9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823EEFA0"))) PPC_WEAK_FUNC(sub_823EEFA0);
PPC_FUNC_IMPL(__imp__sub_823EEFA0) {
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
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lis r9,-32194
	ctx.r9.s64 = -2109865984;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r9,r9,-2768
	ctx.r9.s64 = ctx.r9.s64 + -2768;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// stvx128 v1,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v1.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stw r4,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r4.u32);
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// addi r31,r11,2552
	ctx.r31.s64 = ctx.r11.s64 + 2552;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// ld r7,120(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// ld r8,128(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// ld r5,104(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// ld r6,112(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// ld r9,136(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 136);
	// bl 0x823dfeb0
	ctx.lr = 0x823EF000;
	sub_823DFEB0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r31,648
	ctx.r3.s64 = ctx.r31.s64 + 648;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8234cb18
	ctx.lr = 0x823EF010;
	sub_8234CB18(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82f91940
	ctx.lr = 0x823EF018;
	sub_82F91940(ctx, base);
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

__attribute__((alias("__imp__sub_823EF030"))) PPC_WEAK_FUNC(sub_823EF030);
PPC_FUNC_IMPL(__imp__sub_823EF030) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x823EF038;
	__savegprlr_29(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32194
	ctx.r11.s64 = -2109865984;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r29,0
	ctx.r29.s64 = 0;
	// stw r4,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r4.u32);
	// addi r11,r11,-2672
	ctx.r11.s64 = ctx.r11.s64 + -2672;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r3,32
	ctx.r3.s64 = 32;
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// stw r10,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// bl 0x82691500
	ctx.lr = 0x823EF070;
	sub_82691500(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x823ef0b8
	if (ctx.cr0.eq) goto loc_823EF0B8;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// addi r11,r11,-30152
	ctx.r11.s64 = ctx.r11.s64 + -30152;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// li r5,24
	ctx.r5.s64 = 24;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x82fa77c0
	ctx.lr = 0x823EF094;
	sub_82FA77C0(ctx, base);
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r11,3248
	ctx.r3.s64 = ctx.r11.s64 + 3248;
	// bl 0x8234cb18
	ctx.lr = 0x823EF0A8;
	sub_8234CB18(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82f91940
	ctx.lr = 0x823EF0B0;
	sub_82F91940(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
loc_823EF0B8:
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
	ctx.lr = 0x823EF0D0;
	sub_82240040(ctx, base);
}

__attribute__((alias("__imp__sub_823EF0D0"))) PPC_WEAK_FUNC(sub_823EF0D0);
PPC_FUNC_IMPL(__imp__sub_823EF0D0) {
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
	// lis r11,-32194
	ctx.r11.s64 = -2109865984;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r11,r11,-2368
	ctx.r11.s64 = ctx.r11.s64 + -2368;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r3,24
	ctx.r3.s64 = 24;
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// stw r10,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// bl 0x82691500
	ctx.lr = 0x823EF114;
	sub_82691500(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x823ef184
	if (ctx.cr0.eq) goto loc_823EF184;
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// stw r3,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r3.u32);
	// addi r9,r3,8
	ctx.r9.s64 = ctx.r3.s64 + 8;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r10,r10,-30200
	ctx.r10.s64 = ctx.r10.s64 + -30200;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r7,8(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r9,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
	// stw r8,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r8.u32);
	// stw r7,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r7.u32);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r3,r11,3296
	ctx.r3.s64 = ctx.r11.s64 + 3296;
	// bl 0x8234cb18
	ctx.lr = 0x823EF164;
	sub_8234CB18(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82f91940
	ctx.lr = 0x823EF16C;
	sub_82F91940(ctx, base);
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
loc_823EF184:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r11,r11,11272
	ctx.r11.s64 = ctx.r11.s64 + 11272;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82240040
	ctx.lr = 0x823EF19C;
	sub_82240040(ctx, base);
}

__attribute__((alias("__imp__sub_823EF19C"))) PPC_WEAK_FUNC(sub_823EF19C);
PPC_FUNC_IMPL(__imp__sub_823EF19C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823EF1A0"))) PPC_WEAK_FUNC(sub_823EF1A0);
PPC_FUNC_IMPL(__imp__sub_823EF1A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x823EF1A8;
	__savegprlr_29(ctx, base);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lis r10,-32194
	ctx.r10.s64 = -2109865984;
	// stb r11,144(r1)
	PPC_STORE_U8(ctx.r1.u32 + 144, ctx.r11.u8);
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r11,r10,-22808
	ctx.r11.s64 = ctx.r10.s64 + -22808;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r3,r1,152
	ctx.r3.s64 = ctx.r1.s64 + 152;
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// li r5,76
	ctx.r5.s64 = 76;
	// std r11,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.r11.u64);
	// stw r9,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r9.u32);
	// bl 0x82fa77c0
	ctx.lr = 0x823EF1EC;
	sub_82FA77C0(ctx, base);
	// li r3,112
	ctx.r3.s64 = 112;
	// bl 0x82691500
	ctx.lr = 0x823EF1F4;
	sub_82691500(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x823ef23c
	if (ctx.cr0.eq) goto loc_823EF23C;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// addi r11,r11,-30128
	ctx.r11.s64 = ctx.r11.s64 + -30128;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// li r5,104
	ctx.r5.s64 = 104;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x82fa77c0
	ctx.lr = 0x823EF218;
	sub_82FA77C0(ctx, base);
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r11,3344
	ctx.r3.s64 = ctx.r11.s64 + 3344;
	// bl 0x8234cb18
	ctx.lr = 0x823EF22C;
	sub_8234CB18(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82f91940
	ctx.lr = 0x823EF234;
	sub_82F91940(ctx, base);
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
loc_823EF23C:
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
	ctx.lr = 0x823EF254;
	sub_82240040(ctx, base);
}

__attribute__((alias("__imp__sub_823EF254"))) PPC_WEAK_FUNC(sub_823EF254);
PPC_FUNC_IMPL(__imp__sub_823EF254) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823EF258"))) PPC_WEAK_FUNC(sub_823EF258);
PPC_FUNC_IMPL(__imp__sub_823EF258) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7674
	ctx.lr = 0x823EF260;
	__savegprlr_27(ctx, base);
	// stwu r1,-336(r1)
	ea = -336 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32194
	ctx.r11.s64 = -2109865984;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r27,0
	ctx.r27.s64 = 0;
	// stw r4,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r4.u32);
	// addi r11,r11,-18904
	ctx.r11.s64 = ctx.r11.s64 + -18904;
	// stw r5,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r5.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// std r11,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.r11.u64);
	// li r5,128
	ctx.r5.s64 = 128;
	// stw r10,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r10.u32);
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// bl 0x82fa77c0
	ctx.lr = 0x823EF2AC;
	sub_82FA77C0(ctx, base);
	// li r3,176
	ctx.r3.s64 = 176;
	// bl 0x82691500
	ctx.lr = 0x823EF2B4;
	sub_82691500(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x823ef31c
	if (ctx.cr0.eq) goto loc_823EF31C;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// addi r11,r11,-30104
	ctx.r11.s64 = ctx.r11.s64 + -30104;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// li r5,160
	ctx.r5.s64 = 160;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x82fa77c0
	ctx.lr = 0x823EF2D8;
	sub_82FA77C0(ctx, base);
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// addi r3,r11,2552
	ctx.r3.s64 = ctx.r11.s64 + 2552;
	// bl 0x823f3eb0
	ctx.lr = 0x823EF2F4;
	sub_823F3EB0(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r3,24
	ctx.r3.s64 = ctx.r3.s64 + 24;
	// bl 0x8234cb18
	ctx.lr = 0x823EF300;
	sub_8234CB18(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82f91940
	ctx.lr = 0x823EF308;
	sub_82F91940(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r3,r11,1808
	ctx.r3.s64 = ctx.r11.s64 + 1808;
	// bl 0x823721e0
	ctx.lr = 0x823EF314;
	sub_823721E0(ctx, base);
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// b 0x82fa76c4
	__restgprlr_27(ctx, base);
	return;
loc_823EF31C:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stw r27,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r27.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r11,r11,11272
	ctx.r11.s64 = ctx.r11.s64 + 11272;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// bl 0x82240040
	ctx.lr = 0x823EF334;
	sub_82240040(ctx, base);
}

__attribute__((alias("__imp__sub_823EF334"))) PPC_WEAK_FUNC(sub_823EF334);
PPC_FUNC_IMPL(__imp__sub_823EF334) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823EF338"))) PPC_WEAK_FUNC(sub_823EF338);
PPC_FUNC_IMPL(__imp__sub_823EF338) {
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
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32194
	ctx.r10.s64 = -2109865984;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r4,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r4.u32);
	// addi r10,r10,-7344
	ctx.r10.s64 = ctx.r10.s64 + -7344;
	// stw r5,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r5.u32);
	// stw r3,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// stfs f1,224(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 224, temp.u32);
	// stw r10,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// ld r30,112(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// addi r4,r1,216
	ctx.r4.s64 = ctx.r1.s64 + 216;
	// std r30,160(r1)
	PPC_STORE_U64(ctx.r1.u32 + 160, ctx.r30.u64);
	// li r5,16
	ctx.r5.s64 = 16;
	// stw r11,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r11.u32);
	// addi r31,r11,2552
	ctx.r31.s64 = ctx.r11.s64 + 2552;
	// stb r6,192(r1)
	PPC_STORE_U8(ctx.r1.u32 + 192, ctx.r6.u8);
	// stw r7,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, ctx.r7.u32);
	// stw r8,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r8.u32);
	// stb r9,216(r1)
	PPC_STORE_U8(ctx.r1.u32 + 216, ctx.r9.u8);
	// bl 0x82fa77c0
	ctx.lr = 0x823EF3A0;
	sub_82FA77C0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// ld r5,168(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 168);
	// ld r6,176(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 176);
	// ld r7,184(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 184);
	// ld r8,192(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 192);
	// ld r9,200(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 200);
	// ld r10,208(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 208);
	// bl 0x823e0088
	ctx.lr = 0x823EF3C4;
	sub_823E0088(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r31,168
	ctx.r3.s64 = ctx.r31.s64 + 168;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8234cb18
	ctx.lr = 0x823EF3D4;
	sub_8234CB18(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82f91940
	ctx.lr = 0x823EF3DC;
	sub_82F91940(ctx, base);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
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

__attribute__((alias("__imp__sub_823EF3F4"))) PPC_WEAK_FUNC(sub_823EF3F4);
PPC_FUNC_IMPL(__imp__sub_823EF3F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823EF3F8"))) PPC_WEAK_FUNC(sub_823EF3F8);
PPC_FUNC_IMPL(__imp__sub_823EF3F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7668
	ctx.lr = 0x823EF400;
	__savegprlr_24(ctx, base);
	// stwu r1,-416(r1)
	ea = -416 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r1,480
	ctx.r11.s64 = ctx.r1.s64 + 480;
	// std r6,480(r1)
	PPC_STORE_U64(ctx.r1.u32 + 480, ctx.r6.u64);
	// std r8,496(r1)
	PPC_STORE_U64(ctx.r1.u32 + 496, ctx.r8.u64);
	// lis r8,-32194
	ctx.r8.s64 = -2109865984;
	// std r7,488(r1)
	PPC_STORE_U64(ctx.r1.u32 + 488, ctx.r7.u64);
	// addi r6,r1,160
	ctx.r6.s64 = ctx.r1.s64 + 160;
	// std r9,504(r1)
	PPC_STORE_U64(ctx.r1.u32 + 504, ctx.r9.u64);
	// addi r31,r1,176
	ctx.r31.s64 = ctx.r1.s64 + 176;
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r8,r8,-17344
	ctx.r8.s64 = ctx.r8.s64 + -17344;
	// ld r26,0(r11)
	ctx.r26.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// li r27,0
	ctx.r27.s64 = 0;
	// ld r25,8(r11)
	ctx.r25.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// ld r24,16(r11)
	ctx.r24.u64 = PPC_LOAD_U64(ctx.r11.u32 + 16);
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// ld r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 24);
	// stvx128 v1,r0,r6
	_mm_store_si128((__m128i*)(base + ((ctx.r6.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v1.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lwz r7,524(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 524);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// li r5,96
	ctx.r5.s64 = 96;
	// ld r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// stw r30,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r30.u32);
	// stw r29,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r29.u32);
	// stw r9,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r9.u32);
	// std r8,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.r8.u64);
	// std r11,24(r31)
	PPC_STORE_U64(ctx.r31.u32 + 24, ctx.r11.u64);
	// std r26,0(r31)
	PPC_STORE_U64(ctx.r31.u32 + 0, ctx.r26.u64);
	// std r25,8(r31)
	PPC_STORE_U64(ctx.r31.u32 + 8, ctx.r25.u64);
	// std r24,16(r31)
	PPC_STORE_U64(ctx.r31.u32 + 16, ctx.r24.u64);
	// lwz r4,532(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 532);
	// sth r10,208(r1)
	PPC_STORE_U16(ctx.r1.u32 + 208, ctx.r10.u16);
	// stw r7,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r7.u32);
	// bl 0x82fa77c0
	ctx.lr = 0x823EF498;
	sub_82FA77C0(ctx, base);
	// li r3,224
	ctx.r3.s64 = 224;
	// bl 0x82691500
	ctx.lr = 0x823EF4A0;
	sub_82691500(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x823ef4fc
	if (ctx.cr0.eq) goto loc_823EF4FC;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// addi r11,r11,-30080
	ctx.r11.s64 = ctx.r11.s64 + -30080;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// li r5,208
	ctx.r5.s64 = 208;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x82fa77c0
	ctx.lr = 0x823EF4C4;
	sub_82FA77C0(ctx, base);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// addi r3,r11,2584
	ctx.r3.s64 = ctx.r11.s64 + 2584;
	// bl 0x823f3eb0
	ctx.lr = 0x823EF4E0;
	sub_823F3EB0(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r3,24
	ctx.r3.s64 = ctx.r3.s64 + 24;
	// bl 0x8234cb18
	ctx.lr = 0x823EF4EC;
	sub_8234CB18(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82f91940
	ctx.lr = 0x823EF4F4;
	sub_82F91940(ctx, base);
	// addi r1,r1,416
	ctx.r1.s64 = ctx.r1.s64 + 416;
	// b 0x82fa76b8
	__restgprlr_24(ctx, base);
	return;
loc_823EF4FC:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stw r27,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r27.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r11,r11,11272
	ctx.r11.s64 = ctx.r11.s64 + 11272;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// bl 0x82240040
	ctx.lr = 0x823EF514;
	sub_82240040(ctx, base);
}

__attribute__((alias("__imp__sub_823EF514"))) PPC_WEAK_FUNC(sub_823EF514);
PPC_FUNC_IMPL(__imp__sub_823EF514) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823EF518"))) PPC_WEAK_FUNC(sub_823EF518);
PPC_FUNC_IMPL(__imp__sub_823EF518) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7674
	ctx.lr = 0x823EF520;
	__savegprlr_27(ctx, base);
	// stwu r1,-368(r1)
	ea = -368 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// std r6,432(r1)
	PPC_STORE_U64(ctx.r1.u32 + 432, ctx.r6.u64);
	// li r11,8
	ctx.r11.s64 = 8;
	// std r8,448(r1)
	PPC_STORE_U64(ctx.r1.u32 + 448, ctx.r8.u64);
	// li r27,0
	ctx.r27.s64 = 0;
	// std r10,464(r1)
	PPC_STORE_U64(ctx.r1.u32 + 464, ctx.r10.u64);
	// lis r10,-32194
	ctx.r10.s64 = -2109865984;
	// std r9,456(r1)
	PPC_STORE_U64(ctx.r1.u32 + 456, ctx.r9.u64);
	// addi r9,r1,160
	ctx.r9.s64 = ctx.r1.s64 + 160;
	// lwz r8,4(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// std r7,440(r1)
	PPC_STORE_U64(ctx.r1.u32 + 440, ctx.r7.u64);
	// addi r7,r10,-11936
	ctx.r7.s64 = ctx.r10.s64 + -11936;
	// addi r10,r1,424
	ctx.r10.s64 = ctx.r1.s64 + 424;
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// stw r7,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r7.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stvx128 v1,r0,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v1.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// ld r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// addi r9,r1,168
	ctx.r9.s64 = ctx.r1.s64 + 168;
	// stw r4,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r4.u32);
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// stw r8,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r8.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// stw r5,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r5.u32);
	// std r7,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.r7.u64);
loc_823EF588:
	// ldu r11,8(r10)
	ea = 8 + ctx.r10.u32;
	ctx.r11.u64 = PPC_LOAD_U64(ea);
	ctx.r10.u32 = ea;
	// stdu r11,8(r9)
	ea = 8 + ctx.r9.u32;
	PPC_STORE_U64(ea, ctx.r11.u64);
	ctx.r9.u32 = ea;
	// bdnz 0x823ef588
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823EF588;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// lwz r4,500(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 500);
	// li r5,72
	ctx.r5.s64 = 72;
	// bl 0x82fa77c0
	ctx.lr = 0x823EF5A4;
	sub_82FA77C0(ctx, base);
	// li r3,208
	ctx.r3.s64 = 208;
	// bl 0x82691500
	ctx.lr = 0x823EF5AC;
	sub_82691500(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x823ef608
	if (ctx.cr0.eq) goto loc_823EF608;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// addi r11,r11,-30056
	ctx.r11.s64 = ctx.r11.s64 + -30056;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// li r5,192
	ctx.r5.s64 = 192;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x82fa77c0
	ctx.lr = 0x823EF5D0;
	sub_82FA77C0(ctx, base);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// addi r3,r11,2600
	ctx.r3.s64 = ctx.r11.s64 + 2600;
	// bl 0x823f3eb0
	ctx.lr = 0x823EF5EC;
	sub_823F3EB0(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r3,24
	ctx.r3.s64 = ctx.r3.s64 + 24;
	// bl 0x8234cb18
	ctx.lr = 0x823EF5F8;
	sub_8234CB18(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82f91940
	ctx.lr = 0x823EF600;
	sub_82F91940(ctx, base);
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// b 0x82fa76c4
	__restgprlr_27(ctx, base);
	return;
loc_823EF608:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stw r27,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r27.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r11,r11,11272
	ctx.r11.s64 = ctx.r11.s64 + 11272;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// bl 0x82240040
	ctx.lr = 0x823EF620;
	sub_82240040(ctx, base);
}

__attribute__((alias("__imp__sub_823EF620"))) PPC_WEAK_FUNC(sub_823EF620);
PPC_FUNC_IMPL(__imp__sub_823EF620) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7674
	ctx.lr = 0x823EF628;
	__savegprlr_27(ctx, base);
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// std r7,400(r1)
	PPC_STORE_U64(ctx.r1.u32 + 400, ctx.r7.u64);
	// li r11,8
	ctx.r11.s64 = 8;
	// std r10,424(r1)
	PPC_STORE_U64(ctx.r1.u32 + 424, ctx.r10.u64);
	// lis r10,-32194
	ctx.r10.s64 = -2109865984;
	// std r9,416(r1)
	PPC_STORE_U64(ctx.r1.u32 + 416, ctx.r9.u64);
	// addi r9,r1,160
	ctx.r9.s64 = ctx.r1.s64 + 160;
	// std r8,408(r1)
	PPC_STORE_U64(ctx.r1.u32 + 408, ctx.r8.u64);
	// addi r7,r10,-9672
	ctx.r7.s64 = ctx.r10.s64 + -9672;
	// lwz r8,4(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r27,0
	ctx.r27.s64 = 0;
	// addi r10,r1,392
	ctx.r10.s64 = ctx.r1.s64 + 392;
	// stw r7,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r7.u32);
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stvx128 v1,r0,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v1.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// ld r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// addi r9,r1,184
	ctx.r9.s64 = ctx.r1.s64 + 184;
	// stfs f1,176(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 176, temp.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r4,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r4.u32);
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// stw r8,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r8.u32);
	// stw r5,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r5.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// std r7,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.r7.u64);
loc_823EF690:
	// ldu r11,8(r10)
	ea = 8 + ctx.r10.u32;
	ctx.r11.u64 = PPC_LOAD_U64(ea);
	ctx.r10.u32 = ea;
	// stdu r11,8(r9)
	ea = 8 + ctx.r9.u32;
	PPC_STORE_U64(ea, ctx.r11.u64);
	ctx.r9.u32 = ea;
	// bdnz 0x823ef690
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823EF690;
	// lbz r11,471(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 471);
	// li r3,160
	ctx.r3.s64 = 160;
	// stb r11,256(r1)
	PPC_STORE_U8(ctx.r1.u32 + 256, ctx.r11.u8);
	// bl 0x82691500
	ctx.lr = 0x823EF6AC;
	sub_82691500(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x823ef708
	if (ctx.cr0.eq) goto loc_823EF708;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// addi r11,r11,-30032
	ctx.r11.s64 = ctx.r11.s64 + -30032;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// li r5,144
	ctx.r5.s64 = 144;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x82fa77c0
	ctx.lr = 0x823EF6D0;
	sub_82FA77C0(ctx, base);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// addi r3,r11,2616
	ctx.r3.s64 = ctx.r11.s64 + 2616;
	// bl 0x823f3eb0
	ctx.lr = 0x823EF6EC;
	sub_823F3EB0(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r3,24
	ctx.r3.s64 = ctx.r3.s64 + 24;
	// bl 0x8234cb18
	ctx.lr = 0x823EF6F8;
	sub_8234CB18(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82f91940
	ctx.lr = 0x823EF700;
	sub_82F91940(ctx, base);
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x82fa76c4
	__restgprlr_27(ctx, base);
	return;
loc_823EF708:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stw r27,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r27.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r11,r11,11272
	ctx.r11.s64 = ctx.r11.s64 + 11272;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// bl 0x82240040
	ctx.lr = 0x823EF720;
	sub_82240040(ctx, base);
}

__attribute__((alias("__imp__sub_823EF720"))) PPC_WEAK_FUNC(sub_823EF720);
PPC_FUNC_IMPL(__imp__sub_823EF720) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7674
	ctx.lr = 0x823EF728;
	__savegprlr_27(ctx, base);
	// stwu r1,-336(r1)
	ea = -336 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32194
	ctx.r11.s64 = -2109865984;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r9,r1,176
	ctx.r9.s64 = ctx.r1.s64 + 176;
	// addi r31,r1,192
	ctx.r31.s64 = ctx.r1.s64 + 192;
	// addi r11,r11,-8448
	ctx.r11.s64 = ctx.r11.s64 + -8448;
	// li r27,0
	ctx.r27.s64 = 0;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stvx128 v1,r0,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v1.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// stvx128 v2,r0,r31
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v2.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r5,76
	ctx.r5.s64 = 76;
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// mr r4,r8
	ctx.r4.u64 = ctx.r8.u64;
	// stw r29,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r29.u32);
	// stw r10,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r10.u32);
	// stw r28,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r28.u32);
	// stw r6,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r6.u32);
	// stw r7,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r7.u32);
	// std r11,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.r11.u64);
	// bl 0x82fa77c0
	ctx.lr = 0x823EF78C;
	sub_82FA77C0(ctx, base);
	// li r3,176
	ctx.r3.s64 = 176;
	// bl 0x82691500
	ctx.lr = 0x823EF794;
	sub_82691500(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x823ef7fc
	if (ctx.cr0.eq) goto loc_823EF7FC;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// addi r11,r11,-30008
	ctx.r11.s64 = ctx.r11.s64 + -30008;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// li r5,160
	ctx.r5.s64 = 160;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x82fa77c0
	ctx.lr = 0x823EF7B8;
	sub_82FA77C0(ctx, base);
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// addi r3,r11,2568
	ctx.r3.s64 = ctx.r11.s64 + 2568;
	// bl 0x823f3eb0
	ctx.lr = 0x823EF7D4;
	sub_823F3EB0(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r3,24
	ctx.r3.s64 = ctx.r3.s64 + 24;
	// bl 0x8234cb18
	ctx.lr = 0x823EF7E0;
	sub_8234CB18(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82f91940
	ctx.lr = 0x823EF7E8;
	sub_82F91940(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r3,r11,1808
	ctx.r3.s64 = ctx.r11.s64 + 1808;
	// bl 0x823721e0
	ctx.lr = 0x823EF7F4;
	sub_823721E0(ctx, base);
	// addi r1,r1,336
	ctx.r1.s64 = ctx.r1.s64 + 336;
	// b 0x82fa76c4
	__restgprlr_27(ctx, base);
	return;
loc_823EF7FC:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stw r27,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r27.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r11,r11,11272
	ctx.r11.s64 = ctx.r11.s64 + 11272;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// bl 0x82240040
	ctx.lr = 0x823EF814;
	sub_82240040(ctx, base);
}

__attribute__((alias("__imp__sub_823EF814"))) PPC_WEAK_FUNC(sub_823EF814);
PPC_FUNC_IMPL(__imp__sub_823EF814) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823EF818"))) PPC_WEAK_FUNC(sub_823EF818);
PPC_FUNC_IMPL(__imp__sub_823EF818) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x823EF820;
	__savegprlr_28(ctx, base);
	// stwu r1,-400(r1)
	ea = -400 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// lis r10,-32194
	ctx.r10.s64 = -2109865984;
	// mr r31,r8
	ctx.r31.u64 = ctx.r8.u64;
	// lwz r8,4(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r11,6
	ctx.r11.s64 = 6;
	// addi r10,r10,-20896
	ctx.r10.s64 = ctx.r10.s64 + -20896;
	// li r28,0
	ctx.r28.s64 = 0;
	// addi r9,r1,152
	ctx.r9.s64 = ctx.r1.s64 + 152;
	// stvx128 v1,r0,r5
	_mm_store_si128((__m128i*)(base + ((ctx.r5.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v1.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// ld r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// addi r10,r4,-8
	ctx.r10.s64 = ctx.r4.s64 + -8;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// std r5,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.r5.u64);
	// stw r8,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r8.u32);
loc_823EF86C:
	// ldu r11,8(r10)
	ea = 8 + ctx.r10.u32;
	ctx.r11.u64 = PPC_LOAD_U64(ea);
	ctx.r10.u32 = ea;
	// stdu r11,8(r9)
	ea = 8 + ctx.r9.u32;
	PPC_STORE_U64(ea, ctx.r11.u64);
	ctx.r9.u32 = ea;
	// bdnz 0x823ef86c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823EF86C;
	// addi r11,r1,208
	ctx.r11.s64 = ctx.r1.s64 + 208;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// li r5,76
	ctx.r5.s64 = 76;
	// mr r4,r7
	ctx.r4.u64 = ctx.r7.u64;
	// stvx128 v2,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v2.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stw r6,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r6.u32);
	// stfs f1,224(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 224, temp.u32);
	// bl 0x82fa77c0
	ctx.lr = 0x823EF898;
	sub_82FA77C0(ctx, base);
	// li r3,240
	ctx.r3.s64 = 240;
	// stw r31,336(r1)
	PPC_STORE_U32(ctx.r1.u32 + 336, ctx.r31.u32);
	// bl 0x82691500
	ctx.lr = 0x823EF8A4;
	sub_82691500(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x823ef914
	if (ctx.cr0.eq) goto loc_823EF914;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// addi r11,r11,-29984
	ctx.r11.s64 = ctx.r11.s64 + -29984;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// li r5,224
	ctx.r5.s64 = 224;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x82fa77c0
	ctx.lr = 0x823EF8C8;
	sub_82FA77C0(ctx, base);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r11,2632
	ctx.r3.s64 = ctx.r11.s64 + 2632;
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x823f3eb0
	ctx.lr = 0x823EF8EC;
	sub_823F3EB0(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r3,24
	ctx.r3.s64 = ctx.r3.s64 + 24;
	// bl 0x8234cb18
	ctx.lr = 0x823EF8F8;
	sub_8234CB18(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82f91940
	ctx.lr = 0x823EF900;
	sub_82F91940(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r3,r11,1808
	ctx.r3.s64 = ctx.r11.s64 + 1808;
	// bl 0x823721e0
	ctx.lr = 0x823EF90C;
	sub_823721E0(ctx, base);
	// addi r1,r1,400
	ctx.r1.s64 = ctx.r1.s64 + 400;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
loc_823EF914:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r11,r11,11272
	ctx.r11.s64 = ctx.r11.s64 + 11272;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// bl 0x82240040
	ctx.lr = 0x823EF92C;
	sub_82240040(ctx, base);
}

__attribute__((alias("__imp__sub_823EF92C"))) PPC_WEAK_FUNC(sub_823EF92C);
PPC_FUNC_IMPL(__imp__sub_823EF92C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823EF930"))) PPC_WEAK_FUNC(sub_823EF930);
PPC_FUNC_IMPL(__imp__sub_823EF930) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7670
	ctx.lr = 0x823EF938;
	__savegprlr_26(ctx, base);
	// stwu r1,-448(r1)
	ea = -448 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// lis r10,-32194
	ctx.r10.s64 = -2109865984;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// lwz r5,4(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r11,6
	ctx.r11.s64 = 6;
	// addi r10,r10,-19544
	ctx.r10.s64 = ctx.r10.s64 + -19544;
	// li r27,0
	ctx.r27.s64 = 0;
	// mr r28,r9
	ctx.r28.u64 = ctx.r9.u64;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// addi r9,r1,152
	ctx.r9.s64 = ctx.r1.s64 + 152;
	// stvx128 v1,r0,r4
	_mm_store_si128((__m128i*)(base + ((ctx.r4.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v1.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// addi r10,r29,-8
	ctx.r10.s64 = ctx.r29.s64 + -8;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// std r4,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.r4.u64);
	// stw r5,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r5.u32);
loc_823EF988:
	// ldu r11,8(r10)
	ea = 8 + ctx.r10.u32;
	ctx.r11.u64 = PPC_LOAD_U64(ea);
	ctx.r10.u32 = ea;
	// stdu r11,8(r9)
	ea = 8 + ctx.r9.u32;
	PPC_STORE_U64(ea, ctx.r11.u64);
	ctx.r9.u32 = ea;
	// bdnz 0x823ef988
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823EF988;
	// lhz r11,0(r6)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r6.u32 + 0);
	// mr r4,r8
	ctx.r4.u64 = ctx.r8.u64;
	// ld r9,0(r7)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r7.u32 + 0);
	// addi r10,r1,240
	ctx.r10.s64 = ctx.r1.s64 + 240;
	// ld r6,8(r7)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r7.u32 + 8);
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// ld r26,16(r7)
	ctx.r26.u64 = PPC_LOAD_U64(ctx.r7.u32 + 16);
	// li r5,96
	ctx.r5.s64 = 96;
	// ld r8,24(r7)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r7.u32 + 24);
	// sth r11,224(r1)
	PPC_STORE_U16(ctx.r1.u32 + 224, ctx.r11.u16);
	// stw r31,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r31.u32);
	// std r9,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r9.u64);
	// std r6,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r6.u64);
	// std r26,16(r10)
	PPC_STORE_U64(ctx.r10.u32 + 16, ctx.r26.u64);
	// std r8,24(r10)
	PPC_STORE_U64(ctx.r10.u32 + 24, ctx.r8.u64);
	// bl 0x82fa77c0
	ctx.lr = 0x823EF9D4;
	sub_82FA77C0(ctx, base);
	// li r3,272
	ctx.r3.s64 = 272;
	// stw r28,368(r1)
	PPC_STORE_U32(ctx.r1.u32 + 368, ctx.r28.u32);
	// bl 0x82691500
	ctx.lr = 0x823EF9E0;
	sub_82691500(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x823efa50
	if (ctx.cr0.eq) goto loc_823EFA50;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// addi r11,r11,-29960
	ctx.r11.s64 = ctx.r11.s64 + -29960;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// li r5,256
	ctx.r5.s64 = 256;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x82fa77c0
	ctx.lr = 0x823EFA04;
	sub_82FA77C0(ctx, base);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r11,2648
	ctx.r3.s64 = ctx.r11.s64 + 2648;
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x823f3eb0
	ctx.lr = 0x823EFA28;
	sub_823F3EB0(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r3,24
	ctx.r3.s64 = ctx.r3.s64 + 24;
	// bl 0x8234cb18
	ctx.lr = 0x823EFA34;
	sub_8234CB18(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82f91940
	ctx.lr = 0x823EFA3C;
	sub_82F91940(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r3,r11,1808
	ctx.r3.s64 = ctx.r11.s64 + 1808;
	// bl 0x823721e0
	ctx.lr = 0x823EFA48;
	sub_823721E0(ctx, base);
	// addi r1,r1,448
	ctx.r1.s64 = ctx.r1.s64 + 448;
	// b 0x82fa76c0
	__restgprlr_26(ctx, base);
	return;
loc_823EFA50:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stw r27,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r27.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r11,r11,11272
	ctx.r11.s64 = ctx.r11.s64 + 11272;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// bl 0x82240040
	ctx.lr = 0x823EFA68;
	sub_82240040(ctx, base);
}

__attribute__((alias("__imp__sub_823EFA68"))) PPC_WEAK_FUNC(sub_823EFA68);
PPC_FUNC_IMPL(__imp__sub_823EFA68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x823EFA70;
	__savegprlr_28(ctx, base);
	// stwu r1,-384(r1)
	ea = -384 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// lis r10,-32194
	ctx.r10.s64 = -2109865984;
	// mr r31,r8
	ctx.r31.u64 = ctx.r8.u64;
	// lwz r8,4(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r11,6
	ctx.r11.s64 = 6;
	// addi r10,r10,-22368
	ctx.r10.s64 = ctx.r10.s64 + -22368;
	// li r28,0
	ctx.r28.s64 = 0;
	// addi r9,r1,152
	ctx.r9.s64 = ctx.r1.s64 + 152;
	// stvx128 v1,r0,r4
	_mm_store_si128((__m128i*)(base + ((ctx.r4.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v1.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// addi r10,r29,-8
	ctx.r10.s64 = ctx.r29.s64 + -8;
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// std r4,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.r4.u64);
	// stw r8,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r8.u32);
loc_823EFABC:
	// ldu r11,8(r10)
	ea = 8 + ctx.r10.u32;
	ctx.r11.u64 = PPC_LOAD_U64(ea);
	ctx.r10.u32 = ea;
	// stdu r11,8(r9)
	ea = 8 + ctx.r9.u32;
	PPC_STORE_U64(ea, ctx.r11.u64);
	ctx.r9.u32 = ea;
	// bdnz 0x823efabc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823EFABC;
	// stb r5,208(r1)
	PPC_STORE_U8(ctx.r1.u32 + 208, ctx.r5.u8);
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// li r5,76
	ctx.r5.s64 = 76;
	// stb r6,224(r1)
	PPC_STORE_U8(ctx.r1.u32 + 224, ctx.r6.u8);
	// mr r4,r7
	ctx.r4.u64 = ctx.r7.u64;
	// bl 0x82fa77c0
	ctx.lr = 0x823EFAE0;
	sub_82FA77C0(ctx, base);
	// li r3,224
	ctx.r3.s64 = 224;
	// stw r31,320(r1)
	PPC_STORE_U32(ctx.r1.u32 + 320, ctx.r31.u32);
	// bl 0x82691500
	ctx.lr = 0x823EFAEC;
	sub_82691500(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x823efb5c
	if (ctx.cr0.eq) goto loc_823EFB5C;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// addi r11,r11,-29936
	ctx.r11.s64 = ctx.r11.s64 + -29936;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// li r5,208
	ctx.r5.s64 = 208;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x82fa77c0
	ctx.lr = 0x823EFB10;
	sub_82FA77C0(ctx, base);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r11,2664
	ctx.r3.s64 = ctx.r11.s64 + 2664;
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x823f3eb0
	ctx.lr = 0x823EFB34;
	sub_823F3EB0(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r3,24
	ctx.r3.s64 = ctx.r3.s64 + 24;
	// bl 0x8234cb18
	ctx.lr = 0x823EFB40;
	sub_8234CB18(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82f91940
	ctx.lr = 0x823EFB48;
	sub_82F91940(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r3,r11,1808
	ctx.r3.s64 = ctx.r11.s64 + 1808;
	// bl 0x823721e0
	ctx.lr = 0x823EFB54;
	sub_823721E0(ctx, base);
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
loc_823EFB5C:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r11,r11,11272
	ctx.r11.s64 = ctx.r11.s64 + 11272;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// bl 0x82240040
	ctx.lr = 0x823EFB74;
	sub_82240040(ctx, base);
}

__attribute__((alias("__imp__sub_823EFB74"))) PPC_WEAK_FUNC(sub_823EFB74);
PPC_FUNC_IMPL(__imp__sub_823EFB74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823EFB78"))) PPC_WEAK_FUNC(sub_823EFB78);
PPC_FUNC_IMPL(__imp__sub_823EFB78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x823EFB80;
	__savegprlr_29(ctx, base);
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32194
	ctx.r11.s64 = -2109865984;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r11,r11,-5056
	ctx.r11.s64 = ctx.r11.s64 + -5056;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// li r5,144
	ctx.r5.s64 = 144;
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r11,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.r11.u64);
	// stw r10,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r10.u32);
	// bl 0x82fa77c0
	ctx.lr = 0x823EFBB8;
	sub_82FA77C0(ctx, base);
	// li r3,176
	ctx.r3.s64 = 176;
	// bl 0x82691500
	ctx.lr = 0x823EFBC0;
	sub_82691500(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x823efc08
	if (ctx.cr0.eq) goto loc_823EFC08;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// addi r11,r11,-29912
	ctx.r11.s64 = ctx.r11.s64 + -29912;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// li r5,160
	ctx.r5.s64 = 160;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x82fa77c0
	ctx.lr = 0x823EFBE4;
	sub_82FA77C0(ctx, base);
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r11,2768
	ctx.r3.s64 = ctx.r11.s64 + 2768;
	// bl 0x8234cb18
	ctx.lr = 0x823EFBF8;
	sub_8234CB18(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82f91940
	ctx.lr = 0x823EFC00;
	sub_82F91940(ctx, base);
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
loc_823EFC08:
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
	ctx.lr = 0x823EFC20;
	sub_82240040(ctx, base);
}

__attribute__((alias("__imp__sub_823EFC20"))) PPC_WEAK_FUNC(sub_823EFC20);
PPC_FUNC_IMPL(__imp__sub_823EFC20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x823EFC28;
	__savegprlr_28(ctx, base);
	// stwu r1,-432(r1)
	ea = -432 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32194
	ctx.r11.s64 = -2109865984;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r28,0
	ctx.r28.s64 = 0;
	// addi r11,r11,-4048
	ctx.r11.s64 = ctx.r11.s64 + -4048;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// li r5,128
	ctx.r5.s64 = 128;
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// std r11,240(r1)
	PPC_STORE_U64(ctx.r1.u32 + 240, ctx.r11.u64);
	// stw r10,248(r1)
	PPC_STORE_U32(ctx.r1.u32 + 248, ctx.r10.u32);
	// bl 0x82fa77c0
	ctx.lr = 0x823EFC64;
	sub_82FA77C0(ctx, base);
	// li r3,160
	ctx.r3.s64 = 160;
	// bl 0x82691500
	ctx.lr = 0x823EFC6C;
	sub_82691500(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x823efd68
	if (ctx.cr0.eq) goto loc_823EFD68;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// addi r11,r11,-29888
	ctx.r11.s64 = ctx.r11.s64 + -29888;
	// addi r4,r1,240
	ctx.r4.s64 = ctx.r1.s64 + 240;
	// li r5,144
	ctx.r5.s64 = 144;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x82fa77c0
	ctx.lr = 0x823EFC90;
	sub_82FA77C0(ctx, base);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// lwz r10,112(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 112);
	// addi r30,r11,2680
	ctx.r30.s64 = ctx.r11.s64 + 2680;
	// lwz r31,2684(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2684);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// b 0x823efcc8
	goto loc_823EFCC8;
loc_823EFCAC:
	// lwz r9,16(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x823efcc0
	if (!ctx.cr6.lt) goto loc_823EFCC0;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x823efcc8
	goto loc_823EFCC8;
loc_823EFCC0:
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_823EFCC8:
	// lbz r9,73(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 73);
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq 0x823efcac
	if (ctx.cr0.eq) goto loc_823EFCAC;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x823efcec
	if (ctx.cr6.eq) goto loc_823EFCEC;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x823efd4c
	if (!ctx.cr6.lt) goto loc_823EFD4C;
loc_823EFCEC:
	// stw r10,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r10.u32);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// stw r28,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r28.u32);
	// addi r3,r1,184
	ctx.r3.s64 = ctx.r1.s64 + 184;
	// stw r28,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r28.u32);
	// bl 0x8234e650
	ctx.lr = 0x823EFD04;
	sub_8234E650(ctx, base);
	// addi r4,r1,152
	ctx.r4.s64 = ctx.r1.s64 + 152;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x8234e650
	ctx.lr = 0x823EFD10;
	sub_8234E650(ctx, base);
	// addi r6,r1,176
	ctx.r6.s64 = ctx.r1.s64 + 176;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823f8c40
	ctx.lr = 0x823EFD24;
	sub_823F8C40(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x82f91940
	ctx.lr = 0x823EFD34;
	sub_82F91940(ctx, base);
	// addi r3,r1,184
	ctx.r3.s64 = ctx.r1.s64 + 184;
	// bl 0x82f91940
	ctx.lr = 0x823EFD3C;
	sub_82F91940(ctx, base);
	// addi r3,r1,152
	ctx.r3.s64 = ctx.r1.s64 + 152;
	// bl 0x82f91940
	ctx.lr = 0x823EFD44;
	sub_82F91940(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82f91940
	ctx.lr = 0x823EFD4C;
	sub_82F91940(ctx, base);
loc_823EFD4C:
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r31,48
	ctx.r3.s64 = ctx.r31.s64 + 48;
	// bl 0x8234cb18
	ctx.lr = 0x823EFD58;
	sub_8234CB18(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82f91940
	ctx.lr = 0x823EFD60;
	sub_82F91940(ctx, base);
	// addi r1,r1,432
	ctx.r1.s64 = ctx.r1.s64 + 432;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
loc_823EFD68:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// addi r11,r11,11272
	ctx.r11.s64 = ctx.r11.s64 + 11272;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// bl 0x82240040
	ctx.lr = 0x823EFD80;
	sub_82240040(ctx, base);
}

__attribute__((alias("__imp__sub_823EFD80"))) PPC_WEAK_FUNC(sub_823EFD80);
PPC_FUNC_IMPL(__imp__sub_823EFD80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x823EFD88;
	__savegprlr_29(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32194
	ctx.r11.s64 = -2109865984;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r11,r11,-3248
	ctx.r11.s64 = ctx.r11.s64 + -3248;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// addi r9,r1,176
	ctx.r9.s64 = ctx.r1.s64 + 176;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,80
	ctx.r3.s64 = 80;
	// ld r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// stvx128 v1,r0,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v1.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stb r4,144(r1)
	PPC_STORE_U8(ctx.r1.u32 + 144, ctx.r4.u8);
	// stw r5,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r5.u32);
	// stw r6,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r6.u32);
	// stw r10,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r10.u32);
	// std r11,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.r11.u64);
	// bl 0x82691500
	ctx.lr = 0x823EFDD0;
	sub_82691500(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x823efe18
	if (ctx.cr0.eq) goto loc_823EFE18;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// addi r11,r11,-29864
	ctx.r11.s64 = ctx.r11.s64 + -29864;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// li r5,64
	ctx.r5.s64 = 64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x82fa77c0
	ctx.lr = 0x823EFDF4;
	sub_82FA77C0(ctx, base);
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r11,2816
	ctx.r3.s64 = ctx.r11.s64 + 2816;
	// bl 0x8234cb18
	ctx.lr = 0x823EFE08;
	sub_8234CB18(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82f91940
	ctx.lr = 0x823EFE10;
	sub_82F91940(ctx, base);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
loc_823EFE18:
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
	ctx.lr = 0x823EFE30;
	sub_82240040(ctx, base);
}

__attribute__((alias("__imp__sub_823EFE30"))) PPC_WEAK_FUNC(sub_823EFE30);
PPC_FUNC_IMPL(__imp__sub_823EFE30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7664
	ctx.lr = 0x823EFE38;
	__savegprlr_23(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82918710
	ctx.lr = 0x823EFE44;
	sub_82918710(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r3,r31,40
	ctx.r3.s64 = ctx.r31.s64 + 40;
	// addi r11,r11,-28416
	ctx.r11.s64 = ctx.r11.s64 + -28416;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x823f4000
	ctx.lr = 0x823EFE58;
	sub_823F4000(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r3,r31,168
	ctx.r3.s64 = ctx.r31.s64 + 168;
	// addi r11,r11,-28408
	ctx.r11.s64 = ctx.r11.s64 + -28408;
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// bl 0x823bc368
	ctx.lr = 0x823EFE6C;
	sub_823BC368(ctx, base);
	// addi r27,r31,288
	ctx.r27.s64 = ctx.r31.s64 + 288;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82918740
	ctx.lr = 0x823EFE78;
	sub_82918740(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r11,r11,-28392
	ctx.r11.s64 = ctx.r11.s64 + -28392;
	// stw r30,360(r31)
	PPC_STORE_U32(ctx.r31.u32 + 360, ctx.r30.u32);
	// li r3,8
	ctx.r3.s64 = 8;
	// stw r30,384(r31)
	PPC_STORE_U32(ctx.r31.u32 + 384, ctx.r30.u32);
	// stw r11,288(r31)
	PPC_STORE_U32(ctx.r31.u32 + 288, ctx.r11.u32);
	// bl 0x82691500
	ctx.lr = 0x823EFE98;
	sub_82691500(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x823efeb8
	if (ctx.cr0.eq) goto loc_823EFEB8;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// stw r30,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r30.u32);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// addi r11,r11,-32096
	ctx.r11.s64 = ctx.r11.s64 + -32096;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x823efebc
	goto loc_823EFEBC;
loc_823EFEB8:
	// mr r26,r30
	ctx.r26.u64 = ctx.r30.u64;
loc_823EFEBC:
	// stw r30,104(r27)
	PPC_STORE_U32(ctx.r27.u32 + 104, ctx.r30.u32);
	// li r3,16
	ctx.r3.s64 = 16;
	// stw r30,108(r27)
	PPC_STORE_U32(ctx.r27.u32 + 108, ctx.r30.u32);
	// addi r29,r27,104
	ctx.r29.s64 = ctx.r27.s64 + 104;
	// bl 0x82691500
	ctx.lr = 0x823EFED0;
	sub_82691500(ctx, base);
	// li r23,1
	ctx.r23.s64 = 1;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x823efefc
	if (ctx.cr0.eq) goto loc_823EFEFC;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// stw r26,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r26.u32);
	// stw r23,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r23.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r11,r11,-27204
	ctx.r11.s64 = ctx.r11.s64 + -27204;
	// stw r23,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r23.u32);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x823eff00
	goto loc_823EFF00;
loc_823EFEFC:
	// mr r28,r30
	ctx.r28.u64 = ctx.r30.u64;
loc_823EFF00:
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823eff10
	if (ctx.cr6.eq) goto loc_823EFF10;
	// bl 0x82241d18
	ctx.lr = 0x823EFF10;
	sub_82241D18(ctx, base);
loc_823EFF10:
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// stw r28,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r28.u32);
	// stw r26,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r26.u32);
	// addi r28,r31,400
	ctx.r28.s64 = ctx.r31.s64 + 400;
	// addi r11,r11,-28392
	ctx.r11.s64 = ctx.r11.s64 + -28392;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r11,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
	// bl 0x82918740
	ctx.lr = 0x823EFF30;
	sub_82918740(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// stw r30,472(r31)
	PPC_STORE_U32(ctx.r31.u32 + 472, ctx.r30.u32);
	// li r3,8
	ctx.r3.s64 = 8;
	// addi r11,r11,-28392
	ctx.r11.s64 = ctx.r11.s64 + -28392;
	// stw r30,496(r31)
	PPC_STORE_U32(ctx.r31.u32 + 496, ctx.r30.u32);
	// stw r11,400(r31)
	PPC_STORE_U32(ctx.r31.u32 + 400, ctx.r11.u32);
	// bl 0x82691500
	ctx.lr = 0x823EFF4C;
	sub_82691500(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x823eff6c
	if (ctx.cr0.eq) goto loc_823EFF6C;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// stw r30,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r30.u32);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// addi r11,r11,-32072
	ctx.r11.s64 = ctx.r11.s64 + -32072;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x823eff70
	goto loc_823EFF70;
loc_823EFF6C:
	// mr r26,r30
	ctx.r26.u64 = ctx.r30.u64;
loc_823EFF70:
	// stw r30,104(r28)
	PPC_STORE_U32(ctx.r28.u32 + 104, ctx.r30.u32);
	// li r3,16
	ctx.r3.s64 = 16;
	// stw r30,108(r28)
	PPC_STORE_U32(ctx.r28.u32 + 108, ctx.r30.u32);
	// addi r29,r28,104
	ctx.r29.s64 = ctx.r28.s64 + 104;
	// bl 0x82691500
	ctx.lr = 0x823EFF84;
	sub_82691500(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x823effac
	if (ctx.cr0.eq) goto loc_823EFFAC;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// stw r26,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r26.u32);
	// stw r23,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r23.u32);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// addi r11,r11,-27204
	ctx.r11.s64 = ctx.r11.s64 + -27204;
	// stw r23,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r23.u32);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x823effb0
	goto loc_823EFFB0;
loc_823EFFAC:
	// mr r27,r30
	ctx.r27.u64 = ctx.r30.u64;
loc_823EFFB0:
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823effc0
	if (ctx.cr6.eq) goto loc_823EFFC0;
	// bl 0x82241d18
	ctx.lr = 0x823EFFC0;
	sub_82241D18(ctx, base);
loc_823EFFC0:
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// stw r27,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r27.u32);
	// stw r26,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r26.u32);
	// addi r29,r31,512
	ctx.r29.s64 = ctx.r31.s64 + 512;
	// addi r11,r11,-28392
	ctx.r11.s64 = ctx.r11.s64 + -28392;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// bl 0x82918740
	ctx.lr = 0x823EFFE0;
	sub_82918740(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// stw r30,584(r31)
	PPC_STORE_U32(ctx.r31.u32 + 584, ctx.r30.u32);
	// li r3,8
	ctx.r3.s64 = 8;
	// addi r11,r11,-28392
	ctx.r11.s64 = ctx.r11.s64 + -28392;
	// stw r30,608(r31)
	PPC_STORE_U32(ctx.r31.u32 + 608, ctx.r30.u32);
	// stw r11,512(r31)
	PPC_STORE_U32(ctx.r31.u32 + 512, ctx.r11.u32);
	// bl 0x82691500
	ctx.lr = 0x823EFFFC;
	sub_82691500(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x823f001c
	if (ctx.cr0.eq) goto loc_823F001C;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// stw r30,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r30.u32);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// addi r11,r11,-32048
	ctx.r11.s64 = ctx.r11.s64 + -32048;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x823f0020
	goto loc_823F0020;
loc_823F001C:
	// mr r26,r30
	ctx.r26.u64 = ctx.r30.u64;
loc_823F0020:
	// stw r30,104(r29)
	PPC_STORE_U32(ctx.r29.u32 + 104, ctx.r30.u32);
	// li r3,16
	ctx.r3.s64 = 16;
	// stw r30,108(r29)
	PPC_STORE_U32(ctx.r29.u32 + 108, ctx.r30.u32);
	// addi r28,r29,104
	ctx.r28.s64 = ctx.r29.s64 + 104;
	// bl 0x82691500
	ctx.lr = 0x823F0034;
	sub_82691500(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x823f005c
	if (ctx.cr0.eq) goto loc_823F005C;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// stw r26,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r26.u32);
	// stw r23,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r23.u32);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// addi r11,r11,-27204
	ctx.r11.s64 = ctx.r11.s64 + -27204;
	// stw r23,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r23.u32);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x823f0060
	goto loc_823F0060;
loc_823F005C:
	// mr r27,r30
	ctx.r27.u64 = ctx.r30.u64;
loc_823F0060:
	// lwz r3,4(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823f0070
	if (ctx.cr6.eq) goto loc_823F0070;
	// bl 0x82241d18
	ctx.lr = 0x823F0070;
	sub_82241D18(ctx, base);
loc_823F0070:
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// stw r27,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r27.u32);
	// stw r26,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r26.u32);
	// addi r3,r31,624
	ctx.r3.s64 = ctx.r31.s64 + 624;
	// addi r11,r11,-28392
	ctx.r11.s64 = ctx.r11.s64 + -28392;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// bl 0x823bc368
	ctx.lr = 0x823F008C;
	sub_823BC368(ctx, base);
	// addi r3,r31,744
	ctx.r3.s64 = ctx.r31.s64 + 744;
	// bl 0x823bc368
	ctx.lr = 0x823F0094;
	sub_823BC368(ctx, base);
	// addi r3,r31,864
	ctx.r3.s64 = ctx.r31.s64 + 864;
	// bl 0x823bc368
	ctx.lr = 0x823F009C;
	sub_823BC368(ctx, base);
	// addi r3,r31,984
	ctx.r3.s64 = ctx.r31.s64 + 984;
	// bl 0x823bc368
	ctx.lr = 0x823F00A4;
	sub_823BC368(ctx, base);
	// addi r29,r31,1104
	ctx.r29.s64 = ctx.r31.s64 + 1104;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82918740
	ctx.lr = 0x823F00B0;
	sub_82918740(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// stw r30,1176(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1176, ctx.r30.u32);
	// li r3,8
	ctx.r3.s64 = 8;
	// addi r11,r11,-28376
	ctx.r11.s64 = ctx.r11.s64 + -28376;
	// stw r30,1200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1200, ctx.r30.u32);
	// stw r11,1104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1104, ctx.r11.u32);
	// bl 0x82691500
	ctx.lr = 0x823F00CC;
	sub_82691500(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r24,r11,28212
	ctx.r24.s64 = ctx.r11.s64 + 28212;
	// beq 0x823f00ec
	if (ctx.cr0.eq) goto loc_823F00EC;
	// stw r30,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r30.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r24,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r24.u32);
	// b 0x823f00f0
	goto loc_823F00F0;
loc_823F00EC:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
loc_823F00F0:
	// addi r3,r29,104
	ctx.r3.s64 = ctx.r29.s64 + 104;
	// bl 0x823fa8a0
	ctx.lr = 0x823F00F8;
	sub_823FA8A0(ctx, base);
	// li r3,24
	ctx.r3.s64 = 24;
	// bl 0x82691500
	ctx.lr = 0x823F0100;
	sub_82691500(ctx, base);
	// li r25,-1
	ctx.r25.s64 = -1;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x823f0124
	if (ctx.cr0.eq) goto loc_823F0124;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x828e06c0
	ctx.lr = 0x823F011C;
	sub_828E06C0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x823f0128
	goto loc_823F0128;
loc_823F0124:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
loc_823F0128:
	// addi r3,r29,112
	ctx.r3.s64 = ctx.r29.s64 + 112;
	// bl 0x823fa8a0
	ctx.lr = 0x823F0130;
	sub_823FA8A0(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r3,r31,1224
	ctx.r3.s64 = ctx.r31.s64 + 1224;
	// addi r11,r11,-28376
	ctx.r11.s64 = ctx.r11.s64 + -28376;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// bl 0x823bc368
	ctx.lr = 0x823F0144;
	sub_823BC368(ctx, base);
	// addi r29,r31,1344
	ctx.r29.s64 = ctx.r31.s64 + 1344;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82918740
	ctx.lr = 0x823F0150;
	sub_82918740(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// stw r30,1416(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1416, ctx.r30.u32);
	// li r3,8
	ctx.r3.s64 = 8;
	// addi r11,r11,-28656
	ctx.r11.s64 = ctx.r11.s64 + -28656;
	// stw r30,1440(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1440, ctx.r30.u32);
	// stw r11,1344(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1344, ctx.r11.u32);
	// bl 0x82691500
	ctx.lr = 0x823F016C;
	sub_82691500(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x823f018c
	if (ctx.cr0.eq) goto loc_823F018C;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// stw r30,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r30.u32);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// addi r11,r11,-32024
	ctx.r11.s64 = ctx.r11.s64 + -32024;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x823f0190
	goto loc_823F0190;
loc_823F018C:
	// mr r26,r30
	ctx.r26.u64 = ctx.r30.u64;
loc_823F0190:
	// stw r30,104(r29)
	PPC_STORE_U32(ctx.r29.u32 + 104, ctx.r30.u32);
	// li r3,16
	ctx.r3.s64 = 16;
	// stw r30,108(r29)
	PPC_STORE_U32(ctx.r29.u32 + 108, ctx.r30.u32);
	// addi r28,r29,104
	ctx.r28.s64 = ctx.r29.s64 + 104;
	// bl 0x82691500
	ctx.lr = 0x823F01A4;
	sub_82691500(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x823f01cc
	if (ctx.cr0.eq) goto loc_823F01CC;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// stw r26,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r26.u32);
	// stw r23,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r23.u32);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// addi r11,r11,-27204
	ctx.r11.s64 = ctx.r11.s64 + -27204;
	// stw r23,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r23.u32);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x823f01d0
	goto loc_823F01D0;
loc_823F01CC:
	// mr r27,r30
	ctx.r27.u64 = ctx.r30.u64;
loc_823F01D0:
	// lwz r3,4(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823f01e0
	if (ctx.cr6.eq) goto loc_823F01E0;
	// bl 0x82241d18
	ctx.lr = 0x823F01E0;
	sub_82241D18(ctx, base);
loc_823F01E0:
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// stw r27,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r27.u32);
	// stw r26,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r26.u32);
	// addi r3,r31,1456
	ctx.r3.s64 = ctx.r31.s64 + 1456;
	// addi r11,r11,-28656
	ctx.r11.s64 = ctx.r11.s64 + -28656;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// bl 0x82918740
	ctx.lr = 0x823F01FC;
	sub_82918740(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// stw r30,1528(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1528, ctx.r30.u32);
	// addi r29,r31,1560
	ctx.r29.s64 = ctx.r31.s64 + 1560;
	// addi r28,r11,-31040
	ctx.r28.s64 = ctx.r11.s64 + -31040;
	// stw r30,1552(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1552, ctx.r30.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r28,1456(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1456, ctx.r28.u32);
	// bl 0x82918740
	ctx.lr = 0x823F021C;
	sub_82918740(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// stw r30,1632(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1632, ctx.r30.u32);
	// li r3,8
	ctx.r3.s64 = 8;
	// addi r11,r11,-28360
	ctx.r11.s64 = ctx.r11.s64 + -28360;
	// stw r30,1656(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1656, ctx.r30.u32);
	// stw r11,1560(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1560, ctx.r11.u32);
	// bl 0x82691500
	ctx.lr = 0x823F0238;
	sub_82691500(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x823f0258
	if (ctx.cr0.eq) goto loc_823F0258;
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// stw r30,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r30.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r11,r11,-32128
	ctx.r11.s64 = ctx.r11.s64 + -32128;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x823f025c
	goto loc_823F025C;
loc_823F0258:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
loc_823F025C:
	// addi r3,r29,104
	ctx.r3.s64 = ctx.r29.s64 + 104;
	// bl 0x823fa8a0
	ctx.lr = 0x823F0264;
	sub_823FA8A0(ctx, base);
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x82691500
	ctx.lr = 0x823F026C;
	sub_82691500(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x823f028c
	if (ctx.cr0.eq) goto loc_823F028C;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// stw r30,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r30.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r11,r11,-32000
	ctx.r11.s64 = ctx.r11.s64 + -32000;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x823f0290
	goto loc_823F0290;
loc_823F028C:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
loc_823F0290:
	// addi r3,r29,112
	ctx.r3.s64 = ctx.r29.s64 + 112;
	// bl 0x823fa8a0
	ctx.lr = 0x823F0298;
	sub_823FA8A0(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r3,r31,1680
	ctx.r3.s64 = ctx.r31.s64 + 1680;
	// addi r11,r11,-28360
	ctx.r11.s64 = ctx.r11.s64 + -28360;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// bl 0x823f4250
	ctx.lr = 0x823F02AC;
	sub_823F4250(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r3,r31,1808
	ctx.r3.s64 = ctx.r31.s64 + 1808;
	// addi r11,r11,-28344
	ctx.r11.s64 = ctx.r11.s64 + -28344;
	// stw r11,1680(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1680, ctx.r11.u32);
	// bl 0x82918740
	ctx.lr = 0x823F02C0;
	sub_82918740(ctx, base);
	// stw r30,1880(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1880, ctx.r30.u32);
	// stw r30,1904(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1904, ctx.r30.u32);
	// addi r29,r31,1912
	ctx.r29.s64 = ctx.r31.s64 + 1912;
	// stw r28,1808(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1808, ctx.r28.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82918740
	ctx.lr = 0x823F02D8;
	sub_82918740(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// stw r30,1984(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1984, ctx.r30.u32);
	// li r3,24
	ctx.r3.s64 = 24;
	// addi r11,r11,-28376
	ctx.r11.s64 = ctx.r11.s64 + -28376;
	// stw r30,2008(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2008, ctx.r30.u32);
	// stw r11,1912(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1912, ctx.r11.u32);
	// bl 0x82691500
	ctx.lr = 0x823F02F4;
	sub_82691500(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x823f0314
	if (ctx.cr0.eq) goto loc_823F0314;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x828e06c0
	ctx.lr = 0x823F030C;
	sub_828E06C0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x823f0318
	goto loc_823F0318;
loc_823F0314:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
loc_823F0318:
	// addi r3,r29,104
	ctx.r3.s64 = ctx.r29.s64 + 104;
	// bl 0x823fa8a0
	ctx.lr = 0x823F0320;
	sub_823FA8A0(ctx, base);
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x82691500
	ctx.lr = 0x823F0328;
	sub_82691500(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq 0x823f033c
	if (ctx.cr0.eq) goto loc_823F033C;
	// stw r30,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r30.u32);
	// stw r24,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r24.u32);
	// b 0x823f0340
	goto loc_823F0340;
loc_823F033C:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
loc_823F0340:
	// addi r3,r29,112
	ctx.r3.s64 = ctx.r29.s64 + 112;
	// bl 0x823fa8a0
	ctx.lr = 0x823F0348;
	sub_823FA8A0(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r3,r31,2032
	ctx.r3.s64 = ctx.r31.s64 + 2032;
	// addi r11,r11,-28376
	ctx.r11.s64 = ctx.r11.s64 + -28376;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// bl 0x823f4370
	ctx.lr = 0x823F035C;
	sub_823F4370(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r3,r31,2192
	ctx.r3.s64 = ctx.r31.s64 + 2192;
	// addi r11,r11,-28328
	ctx.r11.s64 = ctx.r11.s64 + -28328;
	// stw r11,2032(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2032, ctx.r11.u32);
	// bl 0x823f4740
	ctx.lr = 0x823F0370;
	sub_823F4740(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r3,r31,2352
	ctx.r3.s64 = ctx.r31.s64 + 2352;
	// addi r11,r11,-28312
	ctx.r11.s64 = ctx.r11.s64 + -28312;
	// stw r11,2192(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2192, ctx.r11.u32);
	// bl 0x823f4bb8
	ctx.lr = 0x823F0384;
	sub_823F4BB8(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r3,r31,2496
	ctx.r3.s64 = ctx.r31.s64 + 2496;
	// addi r11,r11,-28296
	ctx.r11.s64 = ctx.r11.s64 + -28296;
	// stw r11,2352(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2352, ctx.r11.u32);
	// bl 0x823f4ef0
	ctx.lr = 0x823F0398;
	sub_823F4EF0(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r3,r31,2648
	ctx.r3.s64 = ctx.r31.s64 + 2648;
	// addi r11,r11,-28280
	ctx.r11.s64 = ctx.r11.s64 + -28280;
	// stw r11,2496(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2496, ctx.r11.u32);
	// bl 0x823f5230
	ctx.lr = 0x823F03AC;
	sub_823F5230(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r3,r31,2808
	ctx.r3.s64 = ctx.r31.s64 + 2808;
	// addi r11,r11,-28264
	ctx.r11.s64 = ctx.r11.s64 + -28264;
	// stw r11,2648(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2648, ctx.r11.u32);
	// bl 0x823f55f0
	ctx.lr = 0x823F03C0;
	sub_823F55F0(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r3,r31,2968
	ctx.r3.s64 = ctx.r31.s64 + 2968;
	// addi r11,r11,-28248
	ctx.r11.s64 = ctx.r11.s64 + -28248;
	// stw r11,2808(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2808, ctx.r11.u32);
	// bl 0x823f5960
	ctx.lr = 0x823F03D4;
	sub_823F5960(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r3,r31,3128
	ctx.r3.s64 = ctx.r31.s64 + 3128;
	// addi r11,r11,-28232
	ctx.r11.s64 = ctx.r11.s64 + -28232;
	// stw r11,2968(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2968, ctx.r11.u32);
	// bl 0x823f5dc0
	ctx.lr = 0x823F03E8;
	sub_823F5DC0(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r29,r31,3280
	ctx.r29.s64 = ctx.r31.s64 + 3280;
	// addi r11,r11,-28216
	ctx.r11.s64 = ctx.r11.s64 + -28216;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,3128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3128, ctx.r11.u32);
	// bl 0x82918740
	ctx.lr = 0x823F0400;
	sub_82918740(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// stw r30,3352(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3352, ctx.r30.u32);
	// li r3,8
	ctx.r3.s64 = 8;
	// addi r11,r11,-28200
	ctx.r11.s64 = ctx.r11.s64 + -28200;
	// stw r30,3376(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3376, ctx.r30.u32);
	// stw r11,3280(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3280, ctx.r11.u32);
	// bl 0x82691500
	ctx.lr = 0x823F041C;
	sub_82691500(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x823f043c
	if (ctx.cr0.eq) goto loc_823F043C;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// stw r30,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r30.u32);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// addi r11,r11,-31664
	ctx.r11.s64 = ctx.r11.s64 + -31664;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x823f0440
	goto loc_823F0440;
loc_823F043C:
	// mr r26,r30
	ctx.r26.u64 = ctx.r30.u64;
loc_823F0440:
	// stw r30,104(r29)
	PPC_STORE_U32(ctx.r29.u32 + 104, ctx.r30.u32);
	// li r3,16
	ctx.r3.s64 = 16;
	// stw r30,108(r29)
	PPC_STORE_U32(ctx.r29.u32 + 108, ctx.r30.u32);
	// addi r28,r29,104
	ctx.r28.s64 = ctx.r29.s64 + 104;
	// bl 0x82691500
	ctx.lr = 0x823F0454;
	sub_82691500(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x823f047c
	if (ctx.cr0.eq) goto loc_823F047C;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// stw r26,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r26.u32);
	// stw r23,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r23.u32);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// addi r11,r11,-27204
	ctx.r11.s64 = ctx.r11.s64 + -27204;
	// stw r23,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r23.u32);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x823f0480
	goto loc_823F0480;
loc_823F047C:
	// mr r27,r30
	ctx.r27.u64 = ctx.r30.u64;
loc_823F0480:
	// lwz r3,4(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823f0490
	if (ctx.cr6.eq) goto loc_823F0490;
	// bl 0x82241d18
	ctx.lr = 0x823F0490;
	sub_82241D18(ctx, base);
loc_823F0490:
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// stw r27,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r27.u32);
	// stw r26,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r26.u32);
	// addi r28,r31,3392
	ctx.r28.s64 = ctx.r31.s64 + 3392;
	// addi r11,r11,-28200
	ctx.r11.s64 = ctx.r11.s64 + -28200;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// bl 0x82918740
	ctx.lr = 0x823F04B0;
	sub_82918740(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// stw r30,3464(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3464, ctx.r30.u32);
	// li r3,8
	ctx.r3.s64 = 8;
	// addi r11,r11,-28184
	ctx.r11.s64 = ctx.r11.s64 + -28184;
	// stw r30,3488(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3488, ctx.r30.u32);
	// stw r11,3392(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3392, ctx.r11.u32);
	// bl 0x82691500
	ctx.lr = 0x823F04CC;
	sub_82691500(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x823f04ec
	if (ctx.cr0.eq) goto loc_823F04EC;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// stw r30,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r30.u32);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// addi r11,r11,-31640
	ctx.r11.s64 = ctx.r11.s64 + -31640;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x823f04f0
	goto loc_823F04F0;
loc_823F04EC:
	// mr r27,r30
	ctx.r27.u64 = ctx.r30.u64;
loc_823F04F0:
	// stw r30,104(r28)
	PPC_STORE_U32(ctx.r28.u32 + 104, ctx.r30.u32);
	// li r3,16
	ctx.r3.s64 = 16;
	// stw r30,108(r28)
	PPC_STORE_U32(ctx.r28.u32 + 108, ctx.r30.u32);
	// addi r29,r28,104
	ctx.r29.s64 = ctx.r28.s64 + 104;
	// bl 0x82691500
	ctx.lr = 0x823F0504;
	sub_82691500(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x823f0528
	if (ctx.cr0.eq) goto loc_823F0528;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// stw r27,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r27.u32);
	// stw r23,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r23.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r11,r11,-27204
	ctx.r11.s64 = ctx.r11.s64 + -27204;
	// stw r23,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r23.u32);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
loc_823F0528:
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823f0538
	if (ctx.cr6.eq) goto loc_823F0538;
	// bl 0x82241d18
	ctx.lr = 0x823F0538;
	sub_82241D18(ctx, base);
loc_823F0538:
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// stw r30,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r30.u32);
	// stw r27,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r27.u32);
	// addi r3,r31,3504
	ctx.r3.s64 = ctx.r31.s64 + 3504;
	// addi r11,r11,-28184
	ctx.r11.s64 = ctx.r11.s64 + -28184;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// bl 0x823f6080
	ctx.lr = 0x823F0554;
	sub_823F6080(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// addi r11,r11,-28168
	ctx.r11.s64 = ctx.r11.s64 + -28168;
	// addi r4,r10,32320
	ctx.r4.s64 = ctx.r10.s64 + 32320;
	// stw r11,3504(r31)
	PPC_STORE_U32(ctx.r31.u32 + 3504, ctx.r11.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822400d8
	ctx.lr = 0x823F0570;
	sub_822400D8(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82918c70
	ctx.lr = 0x823F057C;
	sub_82918C70(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822402c8
	ctx.lr = 0x823F058C;
	sub_822402C8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823f05a0
	ctx.lr = 0x823F0594;
	sub_823F05A0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82fa76b4
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823F05A0"))) PPC_WEAK_FUNC(sub_823F05A0);
PPC_FUNC_IMPL(__imp__sub_823F05A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7640
	ctx.lr = 0x823F05A8;
	__savegprlr_14(ctx, base);
	// stwu r1,-1536(r1)
	ea = -1536 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,10
	ctx.r11.s64 = 10;
	// stw r3,1556(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1556, ctx.r3.u32);
	// li r10,6
	ctx.r10.s64 = 6;
	// stw r11,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r11.u32);
	// addi r9,r1,176
	ctx.r9.s64 = ctx.r1.s64 + 176;
	// stw r10,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r10.u32);
	// addi r8,r1,192
	ctx.r8.s64 = ctx.r1.s64 + 192;
	// addi r7,r1,176
	ctx.r7.s64 = ctx.r1.s64 + 176;
	// addi r6,r1,192
	ctx.r6.s64 = ctx.r1.s64 + 192;
	// addi r5,r1,176
	ctx.r5.s64 = ctx.r1.s64 + 176;
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// bl 0x823f6a18
	ctx.lr = 0x823F05E0;
	sub_823F6A18(ctx, base);
	// addi r3,r1,168
	ctx.r3.s64 = ctx.r1.s64 + 168;
	// bl 0x8225e8a0
	ctx.lr = 0x823F05E8;
	sub_8225E8A0(ctx, base);
	// li r3,28
	ctx.r3.s64 = 28;
	// bl 0x82691500
	ctx.lr = 0x823F05F0;
	sub_82691500(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// li r16,0
	ctx.r16.s64 = 0;
	// li r28,1
	ctx.r28.s64 = 1;
	// beq 0x823f062c
	if (ctx.cr0.eq) goto loc_823F062C;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// stw r28,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r28.u32);
	// addic. r3,r31,12
	ctx.xer.ca = ctx.r31.u32 > 4294967283;
	ctx.r3.s64 = ctx.r31.s64 + 12;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// stw r28,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r28.u32);
	// addi r11,r11,-16484
	ctx.r11.s64 = ctx.r11.s64 + -16484;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// beq 0x823f0630
	if (ctx.cr0.eq) goto loc_823F0630;
	// li r5,255
	ctx.r5.s64 = 255;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x828e0718
	ctx.lr = 0x823F0628;
	sub_828E0718(ctx, base);
	// b 0x823f0630
	goto loc_823F0630;
loc_823F062C:
	// mr r31,r16
	ctx.r31.u64 = ctx.r16.u64;
loc_823F0630:
	// addi r21,r31,12
	ctx.r21.s64 = ctx.r31.s64 + 12;
	// stw r31,268(r1)
	PPC_STORE_U32(ctx.r1.u32 + 268, ctx.r31.u32);
	// li r3,44
	ctx.r3.s64 = 44;
	// stw r31,308(r1)
	PPC_STORE_U32(ctx.r1.u32 + 308, ctx.r31.u32);
	// stw r21,304(r1)
	PPC_STORE_U32(ctx.r1.u32 + 304, ctx.r21.u32);
	// bl 0x82691500
	ctx.lr = 0x823F0648;
	sub_82691500(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x823f0694
	if (ctx.cr0.eq) goto loc_823F0694;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// stw r28,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r28.u32);
	// addic. r11,r31,12
	ctx.xer.ca = ctx.r31.u32 > 4294967283;
	ctx.r11.s64 = ctx.r31.s64 + 12;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r28,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r28.u32);
	// addi r10,r10,-16484
	ctx.r10.s64 = ctx.r10.s64 + -16484;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// beq 0x823f0698
	if (ctx.cr0.eq) goto loc_823F0698;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// stw r16,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r16.u32);
	// li r6,8
	ctx.r6.s64 = 8;
	// addi r10,r10,-32528
	ctx.r10.s64 = ctx.r10.s64 + -32528;
	// li r5,-1
	ctx.r5.s64 = -1;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// bl 0x828e0808
	ctx.lr = 0x823F0690;
	sub_828E0808(ctx, base);
	// b 0x823f0698
	goto loc_823F0698;
loc_823F0694:
	// mr r31,r16
	ctx.r31.u64 = ctx.r16.u64;
loc_823F0698:
	// addi r11,r31,12
	ctx.r11.s64 = ctx.r31.s64 + 12;
	// stw r31,324(r1)
	PPC_STORE_U32(ctx.r1.u32 + 324, ctx.r31.u32);
	// li r3,24
	ctx.r3.s64 = 24;
	// stw r31,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r31.u32);
	// stw r11,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r11.u32);
	// bl 0x82691500
	ctx.lr = 0x823F06B0;
	sub_82691500(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x823f06f4
	if (ctx.cr0.eq) goto loc_823F06F4;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// stw r28,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r28.u32);
	// addic. r30,r31,12
	ctx.xer.ca = ctx.r31.u32 > 4294967283;
	ctx.r30.s64 = ctx.r31.s64 + 12;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// stw r28,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r28.u32);
	// addi r11,r11,-16484
	ctx.r11.s64 = ctx.r11.s64 + -16484;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// beq 0x823f06f8
	if (ctx.cr0.eq) goto loc_823F06F8;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// stw r16,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r16.u32);
	// li r3,7
	ctx.r3.s64 = 7;
	// addi r11,r11,-32552
	ctx.r11.s64 = ctx.r11.s64 + -32552;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// bl 0x82920158
	ctx.lr = 0x823F06EC;
	sub_82920158(ctx, base);
	// stw r3,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r3.u32);
	// b 0x823f06f8
	goto loc_823F06F8;
loc_823F06F4:
	// mr r31,r16
	ctx.r31.u64 = ctx.r16.u64;
loc_823F06F8:
	// addi r11,r31,12
	ctx.r11.s64 = ctx.r31.s64 + 12;
	// stw r31,368(r1)
	PPC_STORE_U32(ctx.r1.u32 + 368, ctx.r31.u32);
	// li r3,28
	ctx.r3.s64 = 28;
	// stw r31,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r31.u32);
	// stw r11,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r11.u32);
	// bl 0x82691500
	ctx.lr = 0x823F0710;
	sub_82691500(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x823f0744
	if (ctx.cr0.eq) goto loc_823F0744;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// stw r28,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r28.u32);
	// addic. r3,r31,12
	ctx.xer.ca = ctx.r31.u32 > 4294967283;
	ctx.r3.s64 = ctx.r31.s64 + 12;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// stw r28,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r28.u32);
	// addi r11,r11,-16484
	ctx.r11.s64 = ctx.r11.s64 + -16484;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// beq 0x823f0748
	if (ctx.cr0.eq) goto loc_823F0748;
	// li r5,6
	ctx.r5.s64 = 6;
	// li r4,10
	ctx.r4.s64 = 10;
	// bl 0x8291bdd0
	ctx.lr = 0x823F0740;
	sub_8291BDD0(ctx, base);
	// b 0x823f0748
	goto loc_823F0748;
loc_823F0744:
	// mr r31,r16
	ctx.r31.u64 = ctx.r16.u64;
loc_823F0748:
	// addi r11,r31,12
	ctx.r11.s64 = ctx.r31.s64 + 12;
	// stw r31,328(r1)
	PPC_STORE_U32(ctx.r1.u32 + 328, ctx.r31.u32);
	// li r3,44
	ctx.r3.s64 = 44;
	// stw r31,204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 204, ctx.r31.u32);
	// stw r11,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, ctx.r11.u32);
	// bl 0x82691500
	ctx.lr = 0x823F0760;
	sub_82691500(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x823f07b0
	if (ctx.cr0.eq) goto loc_823F07B0;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// stw r28,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r28.u32);
	// addic. r11,r31,12
	ctx.xer.ca = ctx.r31.u32 > 4294967283;
	ctx.r11.s64 = ctx.r31.s64 + 12;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r28,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r28.u32);
	// addi r10,r10,-16484
	ctx.r10.s64 = ctx.r10.s64 + -16484;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// beq 0x823f07a8
	if (ctx.cr0.eq) goto loc_823F07A8;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// stw r16,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r16.u32);
	// li r6,16
	ctx.r6.s64 = 16;
	// addi r10,r10,-32504
	ctx.r10.s64 = ctx.r10.s64 + -32504;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// bl 0x828e06c0
	ctx.lr = 0x823F07A8;
	sub_828E06C0(ctx, base);
loc_823F07A8:
	// mr r15,r31
	ctx.r15.u64 = ctx.r31.u64;
	// b 0x823f07b4
	goto loc_823F07B4;
loc_823F07B0:
	// mr r15,r16
	ctx.r15.u64 = ctx.r16.u64;
loc_823F07B4:
	// addi r26,r15,12
	ctx.r26.s64 = ctx.r15.s64 + 12;
	// stw r15,292(r1)
	PPC_STORE_U32(ctx.r1.u32 + 292, ctx.r15.u32);
	// li r3,44
	ctx.r3.s64 = 44;
	// stw r15,484(r1)
	PPC_STORE_U32(ctx.r1.u32 + 484, ctx.r15.u32);
	// stw r26,480(r1)
	PPC_STORE_U32(ctx.r1.u32 + 480, ctx.r26.u32);
	// bl 0x82691500
	ctx.lr = 0x823F07CC;
	sub_82691500(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x823f0818
	if (ctx.cr0.eq) goto loc_823F0818;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// stw r28,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r28.u32);
	// addic. r11,r31,12
	ctx.xer.ca = ctx.r31.u32 > 4294967283;
	ctx.r11.s64 = ctx.r31.s64 + 12;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r28,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r28.u32);
	// addi r10,r10,-16484
	ctx.r10.s64 = ctx.r10.s64 + -16484;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// beq 0x823f081c
	if (ctx.cr0.eq) goto loc_823F081C;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// stw r16,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r16.u32);
	// li r6,7
	ctx.r6.s64 = 7;
	// addi r10,r10,-32480
	ctx.r10.s64 = ctx.r10.s64 + -32480;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// bl 0x828e06c0
	ctx.lr = 0x823F0814;
	sub_828E06C0(ctx, base);
	// b 0x823f081c
	goto loc_823F081C;
loc_823F0818:
	// mr r31,r16
	ctx.r31.u64 = ctx.r16.u64;
loc_823F081C:
	// li r3,44
	ctx.r3.s64 = 44;
	// stw r31,296(r1)
	PPC_STORE_U32(ctx.r1.u32 + 296, ctx.r31.u32);
	// addi r25,r31,12
	ctx.r25.s64 = ctx.r31.s64 + 12;
	// bl 0x82691500
	ctx.lr = 0x823F082C;
	sub_82691500(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x823f0878
	if (ctx.cr0.eq) goto loc_823F0878;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// stw r28,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r28.u32);
	// addic. r11,r31,12
	ctx.xer.ca = ctx.r31.u32 > 4294967283;
	ctx.r11.s64 = ctx.r31.s64 + 12;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r28,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r28.u32);
	// addi r10,r10,-16484
	ctx.r10.s64 = ctx.r10.s64 + -16484;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// beq 0x823f087c
	if (ctx.cr0.eq) goto loc_823F087C;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// stw r16,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r16.u32);
	// li r6,3
	ctx.r6.s64 = 3;
	// addi r10,r10,-32456
	ctx.r10.s64 = ctx.r10.s64 + -32456;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// bl 0x828e06c0
	ctx.lr = 0x823F0874;
	sub_828E06C0(ctx, base);
	// b 0x823f087c
	goto loc_823F087C;
loc_823F0878:
	// mr r31,r16
	ctx.r31.u64 = ctx.r16.u64;
loc_823F087C:
	// addi r11,r31,12
	ctx.r11.s64 = ctx.r31.s64 + 12;
	// stw r31,348(r1)
	PPC_STORE_U32(ctx.r1.u32 + 348, ctx.r31.u32);
	// li r3,44
	ctx.r3.s64 = 44;
	// stw r31,396(r1)
	PPC_STORE_U32(ctx.r1.u32 + 396, ctx.r31.u32);
	// stw r11,392(r1)
	PPC_STORE_U32(ctx.r1.u32 + 392, ctx.r11.u32);
	// bl 0x82691500
	ctx.lr = 0x823F0894;
	sub_82691500(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x823f08e0
	if (ctx.cr0.eq) goto loc_823F08E0;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// stw r28,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r28.u32);
	// addic. r11,r31,12
	ctx.xer.ca = ctx.r31.u32 > 4294967283;
	ctx.r11.s64 = ctx.r31.s64 + 12;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r28,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r28.u32);
	// addi r10,r10,-16484
	ctx.r10.s64 = ctx.r10.s64 + -16484;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// beq 0x823f08e4
	if (ctx.cr0.eq) goto loc_823F08E4;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// stw r16,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r16.u32);
	// li r6,3
	ctx.r6.s64 = 3;
	// addi r10,r10,-32432
	ctx.r10.s64 = ctx.r10.s64 + -32432;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// bl 0x828e06c0
	ctx.lr = 0x823F08DC;
	sub_828E06C0(ctx, base);
	// b 0x823f08e4
	goto loc_823F08E4;
loc_823F08E0:
	// mr r31,r16
	ctx.r31.u64 = ctx.r16.u64;
loc_823F08E4:
	// addi r11,r31,12
	ctx.r11.s64 = ctx.r31.s64 + 12;
	// stw r31,340(r1)
	PPC_STORE_U32(ctx.r1.u32 + 340, ctx.r31.u32);
	// li r3,44
	ctx.r3.s64 = 44;
	// stw r31,452(r1)
	PPC_STORE_U32(ctx.r1.u32 + 452, ctx.r31.u32);
	// stw r11,448(r1)
	PPC_STORE_U32(ctx.r1.u32 + 448, ctx.r11.u32);
	// bl 0x82691500
	ctx.lr = 0x823F08FC;
	sub_82691500(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x823f0948
	if (ctx.cr0.eq) goto loc_823F0948;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// stw r28,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r28.u32);
	// addic. r11,r31,12
	ctx.xer.ca = ctx.r31.u32 > 4294967283;
	ctx.r11.s64 = ctx.r31.s64 + 12;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r28,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r28.u32);
	// addi r10,r10,-16484
	ctx.r10.s64 = ctx.r10.s64 + -16484;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// beq 0x823f094c
	if (ctx.cr0.eq) goto loc_823F094C;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// stw r16,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r16.u32);
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r10,r10,-32408
	ctx.r10.s64 = ctx.r10.s64 + -32408;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// bl 0x828e06c0
	ctx.lr = 0x823F0944;
	sub_828E06C0(ctx, base);
	// b 0x823f094c
	goto loc_823F094C;
loc_823F0948:
	// mr r31,r16
	ctx.r31.u64 = ctx.r16.u64;
loc_823F094C:
	// li r3,44
	ctx.r3.s64 = 44;
	// stw r31,280(r1)
	PPC_STORE_U32(ctx.r1.u32 + 280, ctx.r31.u32);
	// addi r20,r31,12
	ctx.r20.s64 = ctx.r31.s64 + 12;
	// bl 0x82691500
	ctx.lr = 0x823F095C;
	sub_82691500(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x823f09a8
	if (ctx.cr0.eq) goto loc_823F09A8;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// stw r28,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r28.u32);
	// addic. r11,r31,12
	ctx.xer.ca = ctx.r31.u32 > 4294967283;
	ctx.r11.s64 = ctx.r31.s64 + 12;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r28,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r28.u32);
	// addi r10,r10,-16484
	ctx.r10.s64 = ctx.r10.s64 + -16484;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// beq 0x823f09ac
	if (ctx.cr0.eq) goto loc_823F09AC;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// stw r16,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r16.u32);
	// li r6,2
	ctx.r6.s64 = 2;
	// addi r10,r10,-32384
	ctx.r10.s64 = ctx.r10.s64 + -32384;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// bl 0x828e06c0
	ctx.lr = 0x823F09A4;
	sub_828E06C0(ctx, base);
	// b 0x823f09ac
	goto loc_823F09AC;
loc_823F09A8:
	// mr r31,r16
	ctx.r31.u64 = ctx.r16.u64;
loc_823F09AC:
	// li r3,44
	ctx.r3.s64 = 44;
	// stw r31,288(r1)
	PPC_STORE_U32(ctx.r1.u32 + 288, ctx.r31.u32);
	// addi r23,r31,12
	ctx.r23.s64 = ctx.r31.s64 + 12;
	// bl 0x82691500
	ctx.lr = 0x823F09BC;
	sub_82691500(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x823f0a0c
	if (ctx.cr0.eq) goto loc_823F0A0C;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// stw r28,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r28.u32);
	// addic. r11,r31,12
	ctx.xer.ca = ctx.r31.u32 > 4294967283;
	ctx.r11.s64 = ctx.r31.s64 + 12;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r28,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r28.u32);
	// addi r10,r10,-16484
	ctx.r10.s64 = ctx.r10.s64 + -16484;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// beq 0x823f0a04
	if (ctx.cr0.eq) goto loc_823F0A04;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// stw r16,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r16.u32);
	// li r6,12
	ctx.r6.s64 = 12;
	// addi r10,r10,-32360
	ctx.r10.s64 = ctx.r10.s64 + -32360;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// bl 0x828e06c0
	ctx.lr = 0x823F0A04;
	sub_828E06C0(ctx, base);
loc_823F0A04:
	// stw r31,372(r1)
	PPC_STORE_U32(ctx.r1.u32 + 372, ctx.r31.u32);
	// b 0x823f0a10
	goto loc_823F0A10;
loc_823F0A0C:
	// stw r16,372(r1)
	PPC_STORE_U32(ctx.r1.u32 + 372, ctx.r16.u32);
loc_823F0A10:
	// li r3,44
	ctx.r3.s64 = 44;
	// bl 0x82691500
	ctx.lr = 0x823F0A18;
	sub_82691500(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x823f0a64
	if (ctx.cr0.eq) goto loc_823F0A64;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// stw r28,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r28.u32);
	// addic. r11,r31,12
	ctx.xer.ca = ctx.r31.u32 > 4294967283;
	ctx.r11.s64 = ctx.r31.s64 + 12;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r28,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r28.u32);
	// addi r10,r10,-16484
	ctx.r10.s64 = ctx.r10.s64 + -16484;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// beq 0x823f0a68
	if (ctx.cr0.eq) goto loc_823F0A68;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// stw r16,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r16.u32);
	// li r6,8
	ctx.r6.s64 = 8;
	// addi r10,r10,-32336
	ctx.r10.s64 = ctx.r10.s64 + -32336;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// bl 0x828e06c0
	ctx.lr = 0x823F0A60;
	sub_828E06C0(ctx, base);
	// b 0x823f0a68
	goto loc_823F0A68;
loc_823F0A64:
	// mr r31,r16
	ctx.r31.u64 = ctx.r16.u64;
loc_823F0A68:
	// addi r11,r31,12
	ctx.r11.s64 = ctx.r31.s64 + 12;
	// stw r31,344(r1)
	PPC_STORE_U32(ctx.r1.u32 + 344, ctx.r31.u32);
	// li r3,44
	ctx.r3.s64 = 44;
	// stw r31,444(r1)
	PPC_STORE_U32(ctx.r1.u32 + 444, ctx.r31.u32);
	// stw r11,440(r1)
	PPC_STORE_U32(ctx.r1.u32 + 440, ctx.r11.u32);
	// bl 0x82691500
	ctx.lr = 0x823F0A80;
	sub_82691500(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x823f0ad0
	if (ctx.cr0.eq) goto loc_823F0AD0;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// stw r28,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r28.u32);
	// addic. r11,r31,12
	ctx.xer.ca = ctx.r31.u32 > 4294967283;
	ctx.r11.s64 = ctx.r31.s64 + 12;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r28,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r28.u32);
	// addi r10,r10,-16484
	ctx.r10.s64 = ctx.r10.s64 + -16484;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// beq 0x823f0ac8
	if (ctx.cr0.eq) goto loc_823F0AC8;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// stw r16,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r16.u32);
	// li r6,37
	ctx.r6.s64 = 37;
	// addi r10,r10,-32312
	ctx.r10.s64 = ctx.r10.s64 + -32312;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// bl 0x828e06c0
	ctx.lr = 0x823F0AC8;
	sub_828E06C0(ctx, base);
loc_823F0AC8:
	// stw r31,352(r1)
	PPC_STORE_U32(ctx.r1.u32 + 352, ctx.r31.u32);
	// b 0x823f0ad4
	goto loc_823F0AD4;
loc_823F0AD0:
	// stw r16,352(r1)
	PPC_STORE_U32(ctx.r1.u32 + 352, ctx.r16.u32);
loc_823F0AD4:
	// li r3,44
	ctx.r3.s64 = 44;
	// bl 0x82691500
	ctx.lr = 0x823F0ADC;
	sub_82691500(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x823f0b28
	if (ctx.cr0.eq) goto loc_823F0B28;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// stw r28,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r28.u32);
	// addic. r11,r31,12
	ctx.xer.ca = ctx.r31.u32 > 4294967283;
	ctx.r11.s64 = ctx.r31.s64 + 12;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r28,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r28.u32);
	// addi r10,r10,-16484
	ctx.r10.s64 = ctx.r10.s64 + -16484;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// beq 0x823f0b2c
	if (ctx.cr0.eq) goto loc_823F0B2C;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// stw r16,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r16.u32);
	// li r6,41
	ctx.r6.s64 = 41;
	// addi r10,r10,-32288
	ctx.r10.s64 = ctx.r10.s64 + -32288;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// bl 0x828e06c0
	ctx.lr = 0x823F0B24;
	sub_828E06C0(ctx, base);
	// b 0x823f0b2c
	goto loc_823F0B2C;
loc_823F0B28:
	// mr r31,r16
	ctx.r31.u64 = ctx.r16.u64;
loc_823F0B2C:
	// li r3,44
	ctx.r3.s64 = 44;
	// stw r31,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r31.u32);
	// addi r22,r31,12
	ctx.r22.s64 = ctx.r31.s64 + 12;
	// bl 0x82691500
	ctx.lr = 0x823F0B3C;
	sub_82691500(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x823f0b88
	if (ctx.cr0.eq) goto loc_823F0B88;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// stw r28,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r28.u32);
	// addic. r11,r31,12
	ctx.xer.ca = ctx.r31.u32 > 4294967283;
	ctx.r11.s64 = ctx.r31.s64 + 12;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r28,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r28.u32);
	// addi r10,r10,-16484
	ctx.r10.s64 = ctx.r10.s64 + -16484;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// beq 0x823f0b8c
	if (ctx.cr0.eq) goto loc_823F0B8C;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// stw r16,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r16.u32);
	// li r6,23
	ctx.r6.s64 = 23;
	// addi r10,r10,-32264
	ctx.r10.s64 = ctx.r10.s64 + -32264;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// bl 0x828e06c0
	ctx.lr = 0x823F0B84;
	sub_828E06C0(ctx, base);
	// b 0x823f0b8c
	goto loc_823F0B8C;
loc_823F0B88:
	// mr r31,r16
	ctx.r31.u64 = ctx.r16.u64;
loc_823F0B8C:
	// li r3,44
	ctx.r3.s64 = 44;
	// stw r31,332(r1)
	PPC_STORE_U32(ctx.r1.u32 + 332, ctx.r31.u32);
	// addi r19,r31,12
	ctx.r19.s64 = ctx.r31.s64 + 12;
	// bl 0x82691500
	ctx.lr = 0x823F0B9C;
	sub_82691500(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x823f0be8
	if (ctx.cr0.eq) goto loc_823F0BE8;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// stw r28,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r28.u32);
	// addic. r11,r31,12
	ctx.xer.ca = ctx.r31.u32 > 4294967283;
	ctx.r11.s64 = ctx.r31.s64 + 12;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r28,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r28.u32);
	// addi r10,r10,-16484
	ctx.r10.s64 = ctx.r10.s64 + -16484;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// beq 0x823f0bec
	if (ctx.cr0.eq) goto loc_823F0BEC;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// stw r16,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r16.u32);
	// li r6,7
	ctx.r6.s64 = 7;
	// addi r10,r10,-32240
	ctx.r10.s64 = ctx.r10.s64 + -32240;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// bl 0x828e06c0
	ctx.lr = 0x823F0BE4;
	sub_828E06C0(ctx, base);
	// b 0x823f0bec
	goto loc_823F0BEC;
loc_823F0BE8:
	// mr r31,r16
	ctx.r31.u64 = ctx.r16.u64;
loc_823F0BEC:
	// li r3,44
	ctx.r3.s64 = 44;
	// stw r31,320(r1)
	PPC_STORE_U32(ctx.r1.u32 + 320, ctx.r31.u32);
	// addi r18,r31,12
	ctx.r18.s64 = ctx.r31.s64 + 12;
	// bl 0x82691500
	ctx.lr = 0x823F0BFC;
	sub_82691500(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x823f0c4c
	if (ctx.cr0.eq) goto loc_823F0C4C;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// stw r28,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r28.u32);
	// addic. r11,r31,12
	ctx.xer.ca = ctx.r31.u32 > 4294967283;
	ctx.r11.s64 = ctx.r31.s64 + 12;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r28,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r28.u32);
	// addi r10,r10,-16484
	ctx.r10.s64 = ctx.r10.s64 + -16484;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// beq 0x823f0c44
	if (ctx.cr0.eq) goto loc_823F0C44;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// stw r16,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r16.u32);
	// li r6,3
	ctx.r6.s64 = 3;
	// addi r10,r10,-32216
	ctx.r10.s64 = ctx.r10.s64 + -32216;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// bl 0x828e06c0
	ctx.lr = 0x823F0C44;
	sub_828E06C0(ctx, base);
loc_823F0C44:
	// mr r17,r31
	ctx.r17.u64 = ctx.r31.u64;
	// b 0x823f0c50
	goto loc_823F0C50;
loc_823F0C4C:
	// mr r17,r16
	ctx.r17.u64 = ctx.r16.u64;
loc_823F0C50:
	// li r3,28
	ctx.r3.s64 = 28;
	// stw r17,336(r1)
	PPC_STORE_U32(ctx.r1.u32 + 336, ctx.r17.u32);
	// addi r30,r17,12
	ctx.r30.s64 = ctx.r17.s64 + 12;
	// bl 0x82691500
	ctx.lr = 0x823F0C60;
	sub_82691500(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x823f0c78
	if (ctx.cr0.eq) goto loc_823F0C78;
	// addi r4,r1,152
	ctx.r4.s64 = ctx.r1.s64 + 152;
	// bl 0x823fd970
	ctx.lr = 0x823F0C70;
	sub_823FD970(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x823f0c7c
	goto loc_823F0C7C;
loc_823F0C78:
	// mr r11,r16
	ctx.r11.u64 = ctx.r16.u64;
loc_823F0C7C:
	// li r3,28
	ctx.r3.s64 = 28;
	// stw r11,264(r1)
	PPC_STORE_U32(ctx.r1.u32 + 264, ctx.r11.u32);
	// addi r29,r11,12
	ctx.r29.s64 = ctx.r11.s64 + 12;
	// bl 0x82691500
	ctx.lr = 0x823F0C8C;
	sub_82691500(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x823f0ca4
	if (ctx.cr0.eq) goto loc_823F0CA4;
	// addi r4,r1,152
	ctx.r4.s64 = ctx.r1.s64 + 152;
	// bl 0x823fdbd8
	ctx.lr = 0x823F0C9C;
	sub_823FDBD8(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x823f0ca8
	goto loc_823F0CA8;
loc_823F0CA4:
	// mr r11,r16
	ctx.r11.u64 = ctx.r16.u64;
loc_823F0CA8:
	// li r3,44
	ctx.r3.s64 = 44;
	// stw r11,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r11.u32);
	// addi r24,r11,12
	ctx.r24.s64 = ctx.r11.s64 + 12;
	// bl 0x82691500
	ctx.lr = 0x823F0CB8;
	sub_82691500(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x823f0d04
	if (ctx.cr0.eq) goto loc_823F0D04;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// stw r28,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r28.u32);
	// addic. r11,r31,12
	ctx.xer.ca = ctx.r31.u32 > 4294967283;
	ctx.r11.s64 = ctx.r31.s64 + 12;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r28,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r28.u32);
	// addi r10,r10,-16484
	ctx.r10.s64 = ctx.r10.s64 + -16484;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// beq 0x823f0d08
	if (ctx.cr0.eq) goto loc_823F0D08;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// stw r16,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r16.u32);
	// li r6,5
	ctx.r6.s64 = 5;
	// addi r10,r10,-32144
	ctx.r10.s64 = ctx.r10.s64 + -32144;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// bl 0x828e06c0
	ctx.lr = 0x823F0D00;
	sub_828E06C0(ctx, base);
	// b 0x823f0d08
	goto loc_823F0D08;
loc_823F0D04:
	// mr r31,r16
	ctx.r31.u64 = ctx.r16.u64;
loc_823F0D08:
	// stw r31,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r31.u32);
	// addi r27,r31,12
	ctx.r27.s64 = ctx.r31.s64 + 12;
	// stw r16,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r16.u32);
	// cmplwi cr6,r17,0
	ctx.cr6.compare<uint32_t>(ctx.r17.u32, 0, ctx.xer);
	// stw r16,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r16.u32);
	// beq cr6,0x823f0d38
	if (ctx.cr6.eq) goto loc_823F0D38;
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// bl 0x826abc90
	ctx.lr = 0x823F0D28;
	sub_826ABC90(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823f0d38
	if (ctx.cr0.eq) goto loc_823F0D38;
	// stw r17,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r17.u32);
	// stw r30,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r30.u32);
loc_823F0D38:
	// stw r16,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r16.u32);
	// cmplwi cr6,r15,0
	ctx.cr6.compare<uint32_t>(ctx.r15.u32, 0, ctx.xer);
	// stw r16,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r16.u32);
	// beq cr6,0x823f0d60
	if (ctx.cr6.eq) goto loc_823F0D60;
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// bl 0x826abc90
	ctx.lr = 0x823F0D50;
	sub_826ABC90(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823f0d60
	if (ctx.cr0.eq) goto loc_823F0D60;
	// stw r15,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r15.u32);
	// stw r26,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r26.u32);
loc_823F0D60:
	// addi r4,r1,168
	ctx.r4.s64 = ctx.r1.s64 + 168;
	// addi r3,r1,464
	ctx.r3.s64 = ctx.r1.s64 + 464;
	// bl 0x823f62d0
	ctx.lr = 0x823F0D6C;
	sub_823F62D0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r4,r1,168
	ctx.r4.s64 = ctx.r1.s64 + 168;
	// addi r3,r1,248
	ctx.r3.s64 = ctx.r1.s64 + 248;
	// bl 0x823f62d0
	ctx.lr = 0x823F0D7C;
	sub_823F62D0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r4,r1,168
	ctx.r4.s64 = ctx.r1.s64 + 168;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x823f62d0
	ctx.lr = 0x823F0D8C;
	sub_823F62D0(ctx, base);
	// mr r17,r3
	ctx.r17.u64 = ctx.r3.u64;
	// addi r4,r1,200
	ctx.r4.s64 = ctx.r1.s64 + 200;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x823f62d0
	ctx.lr = 0x823F0D9C;
	sub_823F62D0(ctx, base);
	// mr r16,r3
	ctx.r16.u64 = ctx.r3.u64;
	// addi r4,r1,136
	ctx.r4.s64 = ctx.r1.s64 + 136;
	// addi r3,r1,232
	ctx.r3.s64 = ctx.r1.s64 + 232;
	// bl 0x823f62d0
	ctx.lr = 0x823F0DAC;
	sub_823F62D0(ctx, base);
	// mr r15,r3
	ctx.r15.u64 = ctx.r3.u64;
	// addi r4,r1,136
	ctx.r4.s64 = ctx.r1.s64 + 136;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x823f62d0
	ctx.lr = 0x823F0DBC;
	sub_823F62D0(ctx, base);
	// mr r14,r3
	ctx.r14.u64 = ctx.r3.u64;
	// addi r4,r1,136
	ctx.r4.s64 = ctx.r1.s64 + 136;
	// addi r3,r1,216
	ctx.r3.s64 = ctx.r1.s64 + 216;
	// bl 0x823f62d0
	ctx.lr = 0x823F0DCC;
	sub_823F62D0(ctx, base);
	// addi r10,r1,120
	ctx.r10.s64 = ctx.r1.s64 + 120;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r11,r1,184
	ctx.r11.s64 = ctx.r1.s64 + 184;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// addi r3,r1,432
	ctx.r3.s64 = ctx.r1.s64 + 432;
	// mr r5,r14
	ctx.r5.u64 = ctx.r14.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// mr r6,r15
	ctx.r6.u64 = ctx.r15.u64;
	// mr r7,r16
	ctx.r7.u64 = ctx.r16.u64;
	// mr r8,r17
	ctx.r8.u64 = ctx.r17.u64;
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// bl 0x823f6ad8
	ctx.lr = 0x823F0E00;
	sub_823F6AD8(ctx, base);
	// lwz r16,292(r1)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r1.u32 + 292);
	// li r17,0
	ctx.r17.s64 = 0;
	// cmplwi cr6,r16,0
	ctx.cr6.compare<uint32_t>(ctx.r16.u32, 0, ctx.xer);
	// stw r17,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r17.u32);
	// stw r17,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r17.u32);
	// beq cr6,0x823f0e30
	if (ctx.cr6.eq) goto loc_823F0E30;
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
	// bl 0x826abc90
	ctx.lr = 0x823F0E20;
	sub_826ABC90(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823f0e30
	if (ctx.cr0.eq) goto loc_823F0E30;
	// stw r16,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r16.u32);
	// stw r26,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r26.u32);
loc_823F0E30:
	// lwz r15,288(r1)
	ctx.r15.u64 = PPC_LOAD_U32(ctx.r1.u32 + 288);
	// stw r17,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r17.u32);
	// cmplwi cr6,r15,0
	ctx.cr6.compare<uint32_t>(ctx.r15.u32, 0, ctx.xer);
	// stw r17,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r17.u32);
	// beq cr6,0x823f0e5c
	if (ctx.cr6.eq) goto loc_823F0E5C;
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// bl 0x826abc90
	ctx.lr = 0x823F0E4C;
	sub_826ABC90(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823f0e5c
	if (ctx.cr0.eq) goto loc_823F0E5C;
	// stw r15,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r15.u32);
	// stw r23,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r23.u32);
loc_823F0E5C:
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// addi r3,r1,464
	ctx.r3.s64 = ctx.r1.s64 + 464;
	// bl 0x823f62d0
	ctx.lr = 0x823F0E68;
	sub_823F62D0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r4,r1,152
	ctx.r4.s64 = ctx.r1.s64 + 152;
	// addi r3,r1,248
	ctx.r3.s64 = ctx.r1.s64 + 248;
	// bl 0x823f62d0
	ctx.lr = 0x823F0E78;
	sub_823F62D0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r4,r1,136
	ctx.r4.s64 = ctx.r1.s64 + 136;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x823f62d0
	ctx.lr = 0x823F0E88;
	sub_823F62D0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,456
	ctx.r3.s64 = ctx.r1.s64 + 456;
	// addi r5,r1,184
	ctx.r5.s64 = ctx.r1.s64 + 184;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// addi r8,r1,120
	ctx.r8.s64 = ctx.r1.s64 + 120;
	// bl 0x823f6c78
	ctx.lr = 0x823F0EA4;
	sub_823F6C78(ctx, base);
	// addi r3,r1,496
	ctx.r3.s64 = ctx.r1.s64 + 496;
	// bl 0x8225e8a0
	ctx.lr = 0x823F0EAC;
	sub_8225E8A0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,488
	ctx.r3.s64 = ctx.r1.s64 + 488;
	// bl 0x8225e8a0
	ctx.lr = 0x823F0EB8;
	sub_8225E8A0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,44
	ctx.r3.s64 = 44;
	// bl 0x82691500
	ctx.lr = 0x823F0EC4;
	sub_82691500(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x823f0ee0
	if (ctx.cr0.eq) goto loc_823F0EE0;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x823ff350
	ctx.lr = 0x823F0ED8;
	sub_823FF350(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x823f0ee4
	goto loc_823F0EE4;
loc_823F0EE0:
	// mr r31,r17
	ctx.r31.u64 = ctx.r17.u64;
loc_823F0EE4:
	// lwz r3,492(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 492);
	// addi r30,r31,12
	ctx.r30.s64 = ctx.r31.s64 + 12;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823f0ef8
	if (ctx.cr6.eq) goto loc_823F0EF8;
	// bl 0x82241d18
	ctx.lr = 0x823F0EF8;
	sub_82241D18(ctx, base);
loc_823F0EF8:
	// lwz r3,500(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 500);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823f0f08
	if (ctx.cr6.eq) goto loc_823F0F08;
	// bl 0x82241d18
	ctx.lr = 0x823F0F08;
	sub_82241D18(ctx, base);
loc_823F0F08:
	// stw r17,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r17.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// stw r17,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r17.u32);
	// stw r28,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r28.u32);
	// stw r17,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r17.u32);
	// beq cr6,0x823f0f40
	if (ctx.cr6.eq) goto loc_823F0F40;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826abc90
	ctx.lr = 0x823F0F28;
	sub_826ABC90(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823f0f38
	if (ctx.cr0.eq) goto loc_823F0F38;
	// stw r31,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r31.u32);
	// stw r30,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r30.u32);
loc_823F0F38:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82241d18
	ctx.lr = 0x823F0F40;
	sub_82241D18(ctx, base);
loc_823F0F40:
	// stw r17,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r17.u32);
	// cmplwi cr6,r16,0
	ctx.cr6.compare<uint32_t>(ctx.r16.u32, 0, ctx.xer);
	// stw r17,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r17.u32);
	// beq cr6,0x823f0f68
	if (ctx.cr6.eq) goto loc_823F0F68;
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
	// bl 0x826abc90
	ctx.lr = 0x823F0F58;
	sub_826ABC90(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823f0f68
	if (ctx.cr0.eq) goto loc_823F0F68;
	// stw r16,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r16.u32);
	// stw r26,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r26.u32);
loc_823F0F68:
	// lwz r31,268(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 268);
	// stw r17,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r17.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// stw r17,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r17.u32);
	// beq cr6,0x823f0f94
	if (ctx.cr6.eq) goto loc_823F0F94;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826abc90
	ctx.lr = 0x823F0F84;
	sub_826ABC90(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823f0f94
	if (ctx.cr0.eq) goto loc_823F0F94;
	// stw r31,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r31.u32);
	// stw r21,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r21.u32);
loc_823F0F94:
	// lwz r31,296(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 296);
	// stw r17,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r17.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// stw r17,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r17.u32);
	// beq cr6,0x823f0fc0
	if (ctx.cr6.eq) goto loc_823F0FC0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826abc90
	ctx.lr = 0x823F0FB0;
	sub_826ABC90(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823f0fc0
	if (ctx.cr0.eq) goto loc_823F0FC0;
	// stw r31,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r31.u32);
	// stw r25,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r25.u32);
loc_823F0FC0:
	// addi r4,r1,200
	ctx.r4.s64 = ctx.r1.s64 + 200;
	// addi r3,r1,248
	ctx.r3.s64 = ctx.r1.s64 + 248;
	// bl 0x823f62d0
	ctx.lr = 0x823F0FCC;
	sub_823F62D0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r4,r1,136
	ctx.r4.s64 = ctx.r1.s64 + 136;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x823f62d0
	ctx.lr = 0x823F0FDC;
	sub_823F62D0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,464
	ctx.r3.s64 = ctx.r1.s64 + 464;
	// addi r5,r1,120
	ctx.r5.s64 = ctx.r1.s64 + 120;
	// addi r6,r1,160
	ctx.r6.s64 = ctx.r1.s64 + 160;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// addi r8,r1,128
	ctx.r8.s64 = ctx.r1.s64 + 128;
	// bl 0x823f6d98
	ctx.lr = 0x823F0FF8;
	sub_823F6D98(ctx, base);
	// lwz r31,264(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 264);
	// mr r28,r17
	ctx.r28.u64 = ctx.r17.u64;
	// stw r17,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r17.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// stw r17,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r17.u32);
	// beq cr6,0x823f102c
	if (ctx.cr6.eq) goto loc_823F102C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826abc90
	ctx.lr = 0x823F1018;
	sub_826ABC90(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823f102c
	if (ctx.cr0.eq) goto loc_823F102C;
	// mr r28,r31
	ctx.r28.u64 = ctx.r31.u64;
	// stw r29,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r29.u32);
	// stw r31,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r31.u32);
loc_823F102C:
	// lwz r31,176(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// mr r29,r17
	ctx.r29.u64 = ctx.r17.u64;
	// stw r17,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r17.u32);
	// stw r17,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r17.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x823f1060
	if (ctx.cr6.eq) goto loc_823F1060;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826abc90
	ctx.lr = 0x823F104C;
	sub_826ABC90(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823f1060
	if (ctx.cr0.eq) goto loc_823F1060;
	// mr r29,r31
	ctx.r29.u64 = ctx.r31.u64;
	// stw r22,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r22.u32);
	// stw r31,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r31.u32);
loc_823F1060:
	// li r3,44
	ctx.r3.s64 = 44;
	// bl 0x82691500
	ctx.lr = 0x823F1068;
	sub_82691500(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x823f1084
	if (ctx.cr0.eq) goto loc_823F1084;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// addi r4,r1,120
	ctx.r4.s64 = ctx.r1.s64 + 120;
	// bl 0x823ff520
	ctx.lr = 0x823F107C;
	sub_823FF520(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x823f1088
	goto loc_823F1088;
loc_823F1084:
	// mr r31,r17
	ctx.r31.u64 = ctx.r17.u64;
loc_823F1088:
	// li r25,4
	ctx.r25.s64 = 4;
	// stw r17,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r17.u32);
	// addi r30,r31,12
	ctx.r30.s64 = ctx.r31.s64 + 12;
	// stw r17,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r17.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// stw r17,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r17.u32);
	// stw r25,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r25.u32);
	// beq cr6,0x823f10c8
	if (ctx.cr6.eq) goto loc_823F10C8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826abc90
	ctx.lr = 0x823F10B0;
	sub_826ABC90(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823f10c0
	if (ctx.cr0.eq) goto loc_823F10C0;
	// stw r31,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r31.u32);
	// stw r30,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r30.u32);
loc_823F10C0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82241d18
	ctx.lr = 0x823F10C8;
	sub_82241D18(ctx, base);
loc_823F10C8:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x823f10d8
	if (ctx.cr6.eq) goto loc_823F10D8;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82241d18
	ctx.lr = 0x823F10D8;
	sub_82241D18(ctx, base);
loc_823F10D8:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x823f10e8
	if (ctx.cr6.eq) goto loc_823F10E8;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82241d18
	ctx.lr = 0x823F10E8;
	sub_82241D18(ctx, base);
loc_823F10E8:
	// lwz r31,192(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// mr r28,r17
	ctx.r28.u64 = ctx.r17.u64;
	// stw r17,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r17.u32);
	// stw r17,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r17.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x823f111c
	if (ctx.cr6.eq) goto loc_823F111C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826abc90
	ctx.lr = 0x823F1108;
	sub_826ABC90(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823f111c
	if (ctx.cr0.eq) goto loc_823F111C;
	// mr r28,r31
	ctx.r28.u64 = ctx.r31.u64;
	// stw r27,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r27.u32);
	// stw r31,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r31.u32);
loc_823F111C:
	// addi r4,r1,152
	ctx.r4.s64 = ctx.r1.s64 + 152;
	// addi r3,r1,248
	ctx.r3.s64 = ctx.r1.s64 + 248;
	// bl 0x823f62d0
	ctx.lr = 0x823F1128;
	sub_823F62D0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r3,44
	ctx.r3.s64 = 44;
	// bl 0x82691500
	ctx.lr = 0x823F1134;
	sub_82691500(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x823f1150
	if (ctx.cr0.eq) goto loc_823F1150;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// bl 0x823ff5d8
	ctx.lr = 0x823F1148;
	sub_823FF5D8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x823f1154
	goto loc_823F1154;
loc_823F1150:
	// mr r31,r17
	ctx.r31.u64 = ctx.r17.u64;
loc_823F1154:
	// mr r14,r17
	ctx.r14.u64 = ctx.r17.u64;
	// stw r17,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r17.u32);
	// addi r30,r31,12
	ctx.r30.s64 = ctx.r31.s64 + 12;
	// stw r25,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r25.u32);
	// stw r17,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r17.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// stw r17,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r17.u32);
	// beq cr6,0x823f1198
	if (ctx.cr6.eq) goto loc_823F1198;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826abc90
	ctx.lr = 0x823F117C;
	sub_826ABC90(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823f1190
	if (ctx.cr0.eq) goto loc_823F1190;
	// mr r14,r31
	ctx.r14.u64 = ctx.r31.u64;
	// stw r30,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r30.u32);
	// stw r31,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r31.u32);
loc_823F1190:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82241d18
	ctx.lr = 0x823F1198;
	sub_82241D18(ctx, base);
loc_823F1198:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x823f11a8
	if (ctx.cr6.eq) goto loc_823F11A8;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82241d18
	ctx.lr = 0x823F11A8;
	sub_82241D18(ctx, base);
loc_823F11A8:
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823f11b8
	if (ctx.cr6.eq) goto loc_823F11B8;
	// bl 0x82241d18
	ctx.lr = 0x823F11B8;
	sub_82241D18(ctx, base);
loc_823F11B8:
	// mr r26,r17
	ctx.r26.u64 = ctx.r17.u64;
	// stw r17,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r17.u32);
	// cmplwi cr6,r15,0
	ctx.cr6.compare<uint32_t>(ctx.r15.u32, 0, ctx.xer);
	// stw r17,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r17.u32);
	// beq cr6,0x823f11e8
	if (ctx.cr6.eq) goto loc_823F11E8;
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// bl 0x826abc90
	ctx.lr = 0x823F11D4;
	sub_826ABC90(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823f11e8
	if (ctx.cr0.eq) goto loc_823F11E8;
	// mr r26,r15
	ctx.r26.u64 = ctx.r15.u64;
	// stw r23,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r23.u32);
	// stw r15,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r15.u32);
loc_823F11E8:
	// addi r4,r1,168
	ctx.r4.s64 = ctx.r1.s64 + 168;
	// addi r3,r1,248
	ctx.r3.s64 = ctx.r1.s64 + 248;
	// bl 0x823f62d0
	ctx.lr = 0x823F11F4;
	sub_823F62D0(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// addi r4,r1,152
	ctx.r4.s64 = ctx.r1.s64 + 152;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x823f62d0
	ctx.lr = 0x823F1204;
	sub_823F62D0(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x823f62d0
	ctx.lr = 0x823F1214;
	sub_823F62D0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r3,68
	ctx.r3.s64 = 68;
	// bl 0x82691500
	ctx.lr = 0x823F1220;
	sub_82691500(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x823f1244
	if (ctx.cr0.eq) goto loc_823F1244;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x823ff6d8
	ctx.lr = 0x823F123C;
	sub_823FF6D8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x823f1248
	goto loc_823F1248;
loc_823F1244:
	// mr r30,r17
	ctx.r30.u64 = ctx.r17.u64;
loc_823F1248:
	// li r11,8
	ctx.r11.s64 = 8;
	// stw r17,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r17.u32);
	// li r10,12
	ctx.r10.s64 = 12;
	// stw r17,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r17.u32);
	// mr r16,r17
	ctx.r16.u64 = ctx.r17.u64;
	// stw r25,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r25.u32);
	// addi r31,r30,12
	ctx.r31.s64 = ctx.r30.s64 + 12;
	// stw r11,28(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28, ctx.r11.u32);
	// stw r17,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r17.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// stw r10,32(r30)
	PPC_STORE_U32(ctx.r30.u32 + 32, ctx.r10.u32);
	// beq cr6,0x823f129c
	if (ctx.cr6.eq) goto loc_823F129C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x826abc90
	ctx.lr = 0x823F1280;
	sub_826ABC90(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823f1294
	if (ctx.cr0.eq) goto loc_823F1294;
	// mr r16,r30
	ctx.r16.u64 = ctx.r30.u64;
	// stw r31,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r31.u32);
	// stw r30,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r30.u32);
loc_823F1294:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82241d18
	ctx.lr = 0x823F129C;
	sub_82241D18(ctx, base);
loc_823F129C:
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823f12ac
	if (ctx.cr6.eq) goto loc_823F12AC;
	// bl 0x82241d18
	ctx.lr = 0x823F12AC;
	sub_82241D18(ctx, base);
loc_823F12AC:
	// lwz r3,4(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823f12bc
	if (ctx.cr6.eq) goto loc_823F12BC;
	// bl 0x82241d18
	ctx.lr = 0x823F12BC;
	sub_82241D18(ctx, base);
loc_823F12BC:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x823f12cc
	if (ctx.cr6.eq) goto loc_823F12CC;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82241d18
	ctx.lr = 0x823F12CC;
	sub_82241D18(ctx, base);
loc_823F12CC:
	// lwz r3,4(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823f12dc
	if (ctx.cr6.eq) goto loc_823F12DC;
	// bl 0x82241d18
	ctx.lr = 0x823F12DC;
	sub_82241D18(ctx, base);
loc_823F12DC:
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// addi r3,r1,248
	ctx.r3.s64 = ctx.r1.s64 + 248;
	// bl 0x823f62d0
	ctx.lr = 0x823F12E8;
	sub_823F62D0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x823f62d0
	ctx.lr = 0x823F12F8;
	sub_823F62D0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r4,r1,120
	ctx.r4.s64 = ctx.r1.s64 + 120;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x823f62d0
	ctx.lr = 0x823F1308;
	sub_823F62D0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r4,r1,120
	ctx.r4.s64 = ctx.r1.s64 + 120;
	// addi r3,r1,232
	ctx.r3.s64 = ctx.r1.s64 + 232;
	// bl 0x823f62d0
	ctx.lr = 0x823F1318;
	sub_823F62D0(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x823f62d0
	ctx.lr = 0x823F1328;
	sub_823F62D0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,424
	ctx.r3.s64 = ctx.r1.s64 + 424;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// mr r8,r31
	ctx.r8.u64 = ctx.r31.u64;
	// bl 0x823f6eb8
	ctx.lr = 0x823F1344;
	sub_823F6EB8(ctx, base);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x823f62d0
	ctx.lr = 0x823F1350;
	sub_823F62D0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x823f62d0
	ctx.lr = 0x823F1360;
	sub_823F62D0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// addi r3,r1,232
	ctx.r3.s64 = ctx.r1.s64 + 232;
	// bl 0x823f62d0
	ctx.lr = 0x823F1370;
	sub_823F62D0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r4,r1,152
	ctx.r4.s64 = ctx.r1.s64 + 152;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x823f62d0
	ctx.lr = 0x823F1380;
	sub_823F62D0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,248
	ctx.r3.s64 = ctx.r1.s64 + 248;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// bl 0x823f6fd8
	ctx.lr = 0x823F1398;
	sub_823F6FD8(ctx, base);
	// lwz r21,224(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 224);
	// stw r17,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r17.u32);
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, 0, ctx.xer);
	// stw r17,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r17.u32);
	// beq cr6,0x823f13c4
	if (ctx.cr6.eq) goto loc_823F13C4;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x826abc90
	ctx.lr = 0x823F13B4;
	sub_826ABC90(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823f13c4
	if (ctx.cr0.eq) goto loc_823F13C4;
	// stw r21,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r21.u32);
	// stw r24,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r24.u32);
loc_823F13C4:
	// addi r4,r1,136
	ctx.r4.s64 = ctx.r1.s64 + 136;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x823f62d0
	ctx.lr = 0x823F13D0;
	sub_823F62D0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r4,r1,168
	ctx.r4.s64 = ctx.r1.s64 + 168;
	// addi r3,r1,232
	ctx.r3.s64 = ctx.r1.s64 + 232;
	// bl 0x823f62d0
	ctx.lr = 0x823F13E0;
	sub_823F62D0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r4,r1,304
	ctx.r4.s64 = ctx.r1.s64 + 304;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x823f62d0
	ctx.lr = 0x823F13F0;
	sub_823F62D0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r4,r1,152
	ctx.r4.s64 = ctx.r1.s64 + 152;
	// addi r3,r1,216
	ctx.r3.s64 = ctx.r1.s64 + 216;
	// bl 0x823f62d0
	ctx.lr = 0x823F1400;
	sub_823F62D0(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// bl 0x823f62d0
	ctx.lr = 0x823F1410;
	sub_823F62D0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// mr r9,r31
	ctx.r9.u64 = ctx.r31.u64;
	// bl 0x823f70d8
	ctx.lr = 0x823F1430;
	sub_823F70D8(ctx, base);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x823f62d0
	ctx.lr = 0x823F143C;
	sub_823F62D0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// addi r3,r1,232
	ctx.r3.s64 = ctx.r1.s64 + 232;
	// bl 0x823f62d0
	ctx.lr = 0x823F144C;
	sub_823F62D0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r4,r1,120
	ctx.r4.s64 = ctx.r1.s64 + 120;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x823f62d0
	ctx.lr = 0x823F145C;
	sub_823F62D0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r4,r1,256
	ctx.r4.s64 = ctx.r1.s64 + 256;
	// addi r3,r1,216
	ctx.r3.s64 = ctx.r1.s64 + 216;
	// bl 0x823f62d0
	ctx.lr = 0x823F146C;
	sub_823F62D0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,472
	ctx.r3.s64 = ctx.r1.s64 + 472;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// bl 0x823f7218
	ctx.lr = 0x823F1484;
	sub_823F7218(ctx, base);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x823f62d0
	ctx.lr = 0x823F1490;
	sub_823F62D0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r4,r1,152
	ctx.r4.s64 = ctx.r1.s64 + 152;
	// addi r3,r1,232
	ctx.r3.s64 = ctx.r1.s64 + 232;
	// bl 0x823f62d0
	ctx.lr = 0x823F14A0;
	sub_823F62D0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r4,r1,152
	ctx.r4.s64 = ctx.r1.s64 + 152;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x823f62d0
	ctx.lr = 0x823F14B0;
	sub_823F62D0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// addi r3,r1,216
	ctx.r3.s64 = ctx.r1.s64 + 216;
	// bl 0x823f62d0
	ctx.lr = 0x823F14C0;
	sub_823F62D0(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// bl 0x823f62d0
	ctx.lr = 0x823F14D0;
	sub_823F62D0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// mr r8,r31
	ctx.r8.u64 = ctx.r31.u64;
	// bl 0x823f7318
	ctx.lr = 0x823F14EC;
	sub_823F7318(ctx, base);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// addi r3,r1,232
	ctx.r3.s64 = ctx.r1.s64 + 232;
	// bl 0x823f62d0
	ctx.lr = 0x823F14F8;
	sub_823F62D0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r4,r1,136
	ctx.r4.s64 = ctx.r1.s64 + 136;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x823f62d0
	ctx.lr = 0x823F1508;
	sub_823F62D0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r4,r1,136
	ctx.r4.s64 = ctx.r1.s64 + 136;
	// addi r3,r1,216
	ctx.r3.s64 = ctx.r1.s64 + 216;
	// bl 0x823f62d0
	ctx.lr = 0x823F1518;
	sub_823F62D0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r4,r1,136
	ctx.r4.s64 = ctx.r1.s64 + 136;
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// bl 0x823f62d0
	ctx.lr = 0x823F1528;
	sub_823F62D0(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x823f62d0
	ctx.lr = 0x823F1538;
	sub_823F62D0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// mr r8,r31
	ctx.r8.u64 = ctx.r31.u64;
	// bl 0x823f74a8
	ctx.lr = 0x823F1554;
	sub_823F74A8(ctx, base);
	// addi r4,r1,168
	ctx.r4.s64 = ctx.r1.s64 + 168;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x823f62d0
	ctx.lr = 0x823F1560;
	sub_823F62D0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// addi r3,r1,216
	ctx.r3.s64 = ctx.r1.s64 + 216;
	// bl 0x823f62d0
	ctx.lr = 0x823F1570;
	sub_823F62D0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r4,r1,136
	ctx.r4.s64 = ctx.r1.s64 + 136;
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// bl 0x823f62d0
	ctx.lr = 0x823F1580;
	sub_823F62D0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r4,r1,136
	ctx.r4.s64 = ctx.r1.s64 + 136;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x823f62d0
	ctx.lr = 0x823F1590;
	sub_823F62D0(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x823f62d0
	ctx.lr = 0x823F15A0;
	sub_823F62D0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,232
	ctx.r3.s64 = ctx.r1.s64 + 232;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// mr r8,r31
	ctx.r8.u64 = ctx.r31.u64;
	// bl 0x823f7638
	ctx.lr = 0x823F15BC;
	sub_823F7638(ctx, base);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x823f62d0
	ctx.lr = 0x823F15C8;
	sub_823F62D0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// addi r3,r1,216
	ctx.r3.s64 = ctx.r1.s64 + 216;
	// bl 0x823f62d0
	ctx.lr = 0x823F15D8;
	sub_823F62D0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r4,r1,136
	ctx.r4.s64 = ctx.r1.s64 + 136;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x823f62d0
	ctx.lr = 0x823F15E8;
	sub_823F62D0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r4,r1,200
	ctx.r4.s64 = ctx.r1.s64 + 200;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x823f62d0
	ctx.lr = 0x823F15F8;
	sub_823F62D0(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r4,r1,152
	ctx.r4.s64 = ctx.r1.s64 + 152;
	// addi r3,r1,384
	ctx.r3.s64 = ctx.r1.s64 + 384;
	// bl 0x823f62d0
	ctx.lr = 0x823F1608;
	sub_823F62D0(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// addi r4,r1,200
	ctx.r4.s64 = ctx.r1.s64 + 200;
	// addi r3,r1,376
	ctx.r3.s64 = ctx.r1.s64 + 376;
	// bl 0x823f62d0
	ctx.lr = 0x823F1618;
	sub_823F62D0(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// addi r4,r1,152
	ctx.r4.s64 = ctx.r1.s64 + 152;
	// addi r3,r1,400
	ctx.r3.s64 = ctx.r1.s64 + 400;
	// bl 0x823f62d0
	ctx.lr = 0x823F1628;
	sub_823F62D0(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// addi r4,r1,168
	ctx.r4.s64 = ctx.r1.s64 + 168;
	// addi r3,r1,416
	ctx.r3.s64 = ctx.r1.s64 + 416;
	// bl 0x823f62d0
	ctx.lr = 0x823F1638;
	sub_823F62D0(ctx, base);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// addi r4,r1,136
	ctx.r4.s64 = ctx.r1.s64 + 136;
	// addi r3,r1,408
	ctx.r3.s64 = ctx.r1.s64 + 408;
	// bl 0x823f62d0
	ctx.lr = 0x823F1648;
	sub_823F62D0(ctx, base);
	// mr r15,r3
	ctx.r15.u64 = ctx.r3.u64;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// addi r3,r1,360
	ctx.r3.s64 = ctx.r1.s64 + 360;
	// bl 0x823f62d0
	ctx.lr = 0x823F1658;
	sub_823F62D0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// mr r5,r15
	ctx.r5.u64 = ctx.r15.u64;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r31.u32);
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// mr r8,r26
	ctx.r8.u64 = ctx.r26.u64;
	// mr r9,r27
	ctx.r9.u64 = ctx.r27.u64;
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// bl 0x823f77c8
	ctx.lr = 0x823F1688;
	sub_823F77C8(ctx, base);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// addi r3,r1,360
	ctx.r3.s64 = ctx.r1.s64 + 360;
	// bl 0x823f62d0
	ctx.lr = 0x823F1694;
	sub_823F62D0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// addi r3,r1,408
	ctx.r3.s64 = ctx.r1.s64 + 408;
	// bl 0x823f62d0
	ctx.lr = 0x823F16A4;
	sub_823F62D0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r4,r1,136
	ctx.r4.s64 = ctx.r1.s64 + 136;
	// addi r3,r1,416
	ctx.r3.s64 = ctx.r1.s64 + 416;
	// bl 0x823f62d0
	ctx.lr = 0x823F16B4;
	sub_823F62D0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r4,r1,200
	ctx.r4.s64 = ctx.r1.s64 + 200;
	// addi r3,r1,400
	ctx.r3.s64 = ctx.r1.s64 + 400;
	// bl 0x823f62d0
	ctx.lr = 0x823F16C4;
	sub_823F62D0(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r4,r1,152
	ctx.r4.s64 = ctx.r1.s64 + 152;
	// addi r3,r1,376
	ctx.r3.s64 = ctx.r1.s64 + 376;
	// bl 0x823f62d0
	ctx.lr = 0x823F16D4;
	sub_823F62D0(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// addi r4,r1,200
	ctx.r4.s64 = ctx.r1.s64 + 200;
	// addi r3,r1,384
	ctx.r3.s64 = ctx.r1.s64 + 384;
	// bl 0x823f62d0
	ctx.lr = 0x823F16E4;
	sub_823F62D0(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// addi r4,r1,152
	ctx.r4.s64 = ctx.r1.s64 + 152;
	// addi r3,r1,216
	ctx.r3.s64 = ctx.r1.s64 + 216;
	// bl 0x823f62d0
	ctx.lr = 0x823F16F4;
	sub_823F62D0(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// addi r4,r1,168
	ctx.r4.s64 = ctx.r1.s64 + 168;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x823f62d0
	ctx.lr = 0x823F1704;
	sub_823F62D0(ctx, base);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// addi r4,r1,136
	ctx.r4.s64 = ctx.r1.s64 + 136;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x823f62d0
	ctx.lr = 0x823F1714;
	sub_823F62D0(ctx, base);
	// mr r15,r3
	ctx.r15.u64 = ctx.r3.u64;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// addi r3,r1,312
	ctx.r3.s64 = ctx.r1.s64 + 312;
	// bl 0x823f62d0
	ctx.lr = 0x823F1724;
	sub_823F62D0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// mr r5,r15
	ctx.r5.u64 = ctx.r15.u64;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r31.u32);
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// mr r8,r26
	ctx.r8.u64 = ctx.r26.u64;
	// mr r9,r27
	ctx.r9.u64 = ctx.r27.u64;
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// bl 0x823f7988
	ctx.lr = 0x823F1754;
	sub_823F7988(ctx, base);
	// lwz r15,280(r1)
	ctx.r15.u64 = PPC_LOAD_U32(ctx.r1.u32 + 280);
	// stw r17,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r17.u32);
	// cmplwi cr6,r15,0
	ctx.cr6.compare<uint32_t>(ctx.r15.u32, 0, ctx.xer);
	// stw r17,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r17.u32);
	// beq cr6,0x823f1780
	if (ctx.cr6.eq) goto loc_823F1780;
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// bl 0x826abc90
	ctx.lr = 0x823F1770;
	sub_826ABC90(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823f1780
	if (ctx.cr0.eq) goto loc_823F1780;
	// stw r15,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r15.u32);
	// stw r20,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r20.u32);
loc_823F1780:
	// addi r4,r1,136
	ctx.r4.s64 = ctx.r1.s64 + 136;
	// addi r3,r1,312
	ctx.r3.s64 = ctx.r1.s64 + 312;
	// bl 0x823f62d0
	ctx.lr = 0x823F178C;
	sub_823F62D0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r4,r1,168
	ctx.r4.s64 = ctx.r1.s64 + 168;
	// addi r3,r1,360
	ctx.r3.s64 = ctx.r1.s64 + 360;
	// bl 0x823f62d0
	ctx.lr = 0x823F179C;
	sub_823F62D0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r4,r1,168
	ctx.r4.s64 = ctx.r1.s64 + 168;
	// addi r3,r1,408
	ctx.r3.s64 = ctx.r1.s64 + 408;
	// bl 0x823f62d0
	ctx.lr = 0x823F17AC;
	sub_823F62D0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// addi r3,r1,416
	ctx.r3.s64 = ctx.r1.s64 + 416;
	// bl 0x823f62d0
	ctx.lr = 0x823F17BC;
	sub_823F62D0(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r4,r1,152
	ctx.r4.s64 = ctx.r1.s64 + 152;
	// addi r3,r1,400
	ctx.r3.s64 = ctx.r1.s64 + 400;
	// bl 0x823f62d0
	ctx.lr = 0x823F17CC;
	sub_823F62D0(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// addi r3,r1,376
	ctx.r3.s64 = ctx.r1.s64 + 376;
	// bl 0x823f62d0
	ctx.lr = 0x823F17DC;
	sub_823F62D0(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// addi r4,r1,152
	ctx.r4.s64 = ctx.r1.s64 + 152;
	// addi r3,r1,384
	ctx.r3.s64 = ctx.r1.s64 + 384;
	// bl 0x823f62d0
	ctx.lr = 0x823F17EC;
	sub_823F62D0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,280
	ctx.r3.s64 = ctx.r1.s64 + 280;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// addi r8,r1,128
	ctx.r8.s64 = ctx.r1.s64 + 128;
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// bl 0x823f7b48
	ctx.lr = 0x823F1814;
	sub_823F7B48(ctx, base);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// addi r3,r1,312
	ctx.r3.s64 = ctx.r1.s64 + 312;
	// bl 0x823f62d0
	ctx.lr = 0x823F1820;
	sub_823F62D0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// addi r3,r1,360
	ctx.r3.s64 = ctx.r1.s64 + 360;
	// bl 0x823f62d0
	ctx.lr = 0x823F1830;
	sub_823F62D0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r4,r1,136
	ctx.r4.s64 = ctx.r1.s64 + 136;
	// addi r3,r1,408
	ctx.r3.s64 = ctx.r1.s64 + 408;
	// bl 0x823f62d0
	ctx.lr = 0x823F1840;
	sub_823F62D0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r4,r1,200
	ctx.r4.s64 = ctx.r1.s64 + 200;
	// addi r3,r1,416
	ctx.r3.s64 = ctx.r1.s64 + 416;
	// bl 0x823f62d0
	ctx.lr = 0x823F1850;
	sub_823F62D0(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r4,r1,152
	ctx.r4.s64 = ctx.r1.s64 + 152;
	// addi r3,r1,400
	ctx.r3.s64 = ctx.r1.s64 + 400;
	// bl 0x823f62d0
	ctx.lr = 0x823F1860;
	sub_823F62D0(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// addi r4,r1,200
	ctx.r4.s64 = ctx.r1.s64 + 200;
	// addi r3,r1,376
	ctx.r3.s64 = ctx.r1.s64 + 376;
	// bl 0x823f62d0
	ctx.lr = 0x823F1870;
	sub_823F62D0(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// addi r4,r1,152
	ctx.r4.s64 = ctx.r1.s64 + 152;
	// addi r3,r1,384
	ctx.r3.s64 = ctx.r1.s64 + 384;
	// bl 0x823f62d0
	ctx.lr = 0x823F1880;
	sub_823F62D0(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// addi r4,r1,168
	ctx.r4.s64 = ctx.r1.s64 + 168;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x823f62d0
	ctx.lr = 0x823F1890;
	sub_823F62D0(ctx, base);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// addi r4,r1,136
	ctx.r4.s64 = ctx.r1.s64 + 136;
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x823f62d0
	ctx.lr = 0x823F18A0;
	sub_823F62D0(ctx, base);
	// mr r20,r3
	ctx.r20.u64 = ctx.r3.u64;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x823f62d0
	ctx.lr = 0x823F18B0;
	sub_823F62D0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,216
	ctx.r3.s64 = ctx.r1.s64 + 216;
	// mr r5,r20
	ctx.r5.u64 = ctx.r20.u64;
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// mr r8,r26
	ctx.r8.u64 = ctx.r26.u64;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// mr r9,r27
	ctx.r9.u64 = ctx.r27.u64;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r31.u32);
	// bl 0x823f7cc8
	ctx.lr = 0x823F18E0;
	sub_823F7CC8(ctx, base);
	// stw r17,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r17.u32);
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, 0, ctx.xer);
	// stw r17,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r17.u32);
	// beq cr6,0x823f1908
	if (ctx.cr6.eq) goto loc_823F1908;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x826abc90
	ctx.lr = 0x823F18F8;
	sub_826ABC90(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823f1908
	if (ctx.cr0.eq) goto loc_823F1908;
	// stw r21,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r21.u32);
	// stw r24,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r24.u32);
loc_823F1908:
	// lwz r31,176(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// stw r17,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r17.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// stw r17,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r17.u32);
	// beq cr6,0x823f1934
	if (ctx.cr6.eq) goto loc_823F1934;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826abc90
	ctx.lr = 0x823F1924;
	sub_826ABC90(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823f1934
	if (ctx.cr0.eq) goto loc_823F1934;
	// stw r31,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r31.u32);
	// stw r22,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r22.u32);
loc_823F1934:
	// addi r4,r1,304
	ctx.r4.s64 = ctx.r1.s64 + 304;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x823f62d0
	ctx.lr = 0x823F1940;
	sub_823F62D0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// addi r3,r1,312
	ctx.r3.s64 = ctx.r1.s64 + 312;
	// bl 0x823f62d0
	ctx.lr = 0x823F1950;
	sub_823F62D0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// addi r6,r1,120
	ctx.r6.s64 = ctx.r1.s64 + 120;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// bl 0x823f7e88
	ctx.lr = 0x823F1968;
	sub_823F7E88(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r3,r1,1184
	ctx.r3.s64 = ctx.r1.s64 + 1184;
	// addi r4,r11,32344
	ctx.r4.s64 = ctx.r11.s64 + 32344;
	// bl 0x822400d8
	ctx.lr = 0x823F1978;
	sub_822400D8(ctx, base);
	// lwz r28,1556(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1556);
	// addi r4,r1,1184
	ctx.r4.s64 = ctx.r1.s64 + 1184;
	// addi r31,r28,1560
	ctx.r31.s64 = ctx.r28.s64 + 1560;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82918c80
	ctx.lr = 0x823F198C;
	sub_82918C80(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,1184
	ctx.r3.s64 = ctx.r1.s64 + 1184;
	// bl 0x822402c8
	ctx.lr = 0x823F199C;
	sub_822402C8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x829173b8
	ctx.lr = 0x823F19A8;
	sub_829173B8(ctx, base);
	// addi r4,r1,168
	ctx.r4.s64 = ctx.r1.s64 + 168;
	// addi r3,r1,360
	ctx.r3.s64 = ctx.r1.s64 + 360;
	// bl 0x823f62d0
	ctx.lr = 0x823F19B4;
	sub_823F62D0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829173c0
	ctx.lr = 0x823F19C0;
	sub_829173C0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x823f19d4
	if (!ctx.cr0.eq) goto loc_823F19D4;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,104
	ctx.r3.s64 = ctx.r31.s64 + 104;
	// bl 0x823f6330
	ctx.lr = 0x823F19D4;
	sub_823F6330(ctx, base);
loc_823F19D4:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823f19e4
	if (ctx.cr6.eq) goto loc_823F19E4;
	// bl 0x82241d18
	ctx.lr = 0x823F19E4;
	sub_82241D18(ctx, base);
loc_823F19E4:
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x823f62d0
	ctx.lr = 0x823F19F0;
	sub_823F62D0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829173c0
	ctx.lr = 0x823F19FC;
	sub_829173C0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x823f1a10
	if (!ctx.cr0.eq) goto loc_823F1A10;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,112
	ctx.r3.s64 = ctx.r31.s64 + 112;
	// bl 0x823f6330
	ctx.lr = 0x823F1A10;
	sub_823F6330(ctx, base);
loc_823F1A10:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823f1a20
	if (ctx.cr6.eq) goto loc_823F1A20;
	// bl 0x82241d18
	ctx.lr = 0x823F1A20;
	sub_82241D18(ctx, base);
loc_823F1A20:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r3,r1,1248
	ctx.r3.s64 = ctx.r1.s64 + 1248;
	// addi r4,r11,32360
	ctx.r4.s64 = ctx.r11.s64 + 32360;
	// bl 0x822400d8
	ctx.lr = 0x823F1A30;
	sub_822400D8(ctx, base);
	// addi r31,r28,1680
	ctx.r31.s64 = ctx.r28.s64 + 1680;
	// addi r4,r1,1248
	ctx.r4.s64 = ctx.r1.s64 + 1248;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82918c80
	ctx.lr = 0x823F1A40;
	sub_82918C80(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,1248
	ctx.r3.s64 = ctx.r1.s64 + 1248;
	// bl 0x822402c8
	ctx.lr = 0x823F1A50;
	sub_822402C8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x829173b8
	ctx.lr = 0x823F1A5C;
	sub_829173B8(ctx, base);
	// addi r4,r1,152
	ctx.r4.s64 = ctx.r1.s64 + 152;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x823f62d0
	ctx.lr = 0x823F1A68;
	sub_823F62D0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829173c0
	ctx.lr = 0x823F1A74;
	sub_829173C0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x823f1a88
	if (!ctx.cr0.eq) goto loc_823F1A88;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,104
	ctx.r3.s64 = ctx.r31.s64 + 104;
	// bl 0x823f6330
	ctx.lr = 0x823F1A88;
	sub_823F6330(ctx, base);
loc_823F1A88:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823f1a98
	if (ctx.cr6.eq) goto loc_823F1A98;
	// bl 0x82241d18
	ctx.lr = 0x823F1A98;
	sub_82241D18(ctx, base);
loc_823F1A98:
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x823f62d0
	ctx.lr = 0x823F1AA4;
	sub_823F62D0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829173c0
	ctx.lr = 0x823F1AB0;
	sub_829173C0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x823f1ac4
	if (!ctx.cr0.eq) goto loc_823F1AC4;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,112
	ctx.r3.s64 = ctx.r31.s64 + 112;
	// bl 0x823f6330
	ctx.lr = 0x823F1AC4;
	sub_823F6330(ctx, base);
loc_823F1AC4:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823f1ad4
	if (ctx.cr6.eq) goto loc_823F1AD4;
	// bl 0x82241d18
	ctx.lr = 0x823F1AD4;
	sub_82241D18(ctx, base);
loc_823F1AD4:
	// lwz r23,476(r1)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r1.u32 + 476);
	// mr r29,r17
	ctx.r29.u64 = ctx.r17.u64;
	// mr r30,r17
	ctx.r30.u64 = ctx.r17.u64;
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// beq cr6,0x823f1b00
	if (ctx.cr6.eq) goto loc_823F1B00;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x826abc90
	ctx.lr = 0x823F1AF0;
	sub_826ABC90(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823f1b00
	if (ctx.cr0.eq) goto loc_823F1B00;
	// lwz r29,472(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 472);
	// mr r30,r23
	ctx.r30.u64 = ctx.r23.u64;
loc_823F1B00:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829173c0
	ctx.lr = 0x823F1B08;
	sub_829173C0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x823f1b30
	if (!ctx.cr0.eq) goto loc_823F1B30;
	// lwz r3,124(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// addi r11,r31,120
	ctx.r11.s64 = ctx.r31.s64 + 120;
	// stw r30,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r30.u32);
	// mr r30,r17
	ctx.r30.u64 = ctx.r17.u64;
	// stw r29,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r29.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823f1b40
	if (ctx.cr6.eq) goto loc_823F1B40;
	// bl 0x82241d18
	ctx.lr = 0x823F1B30;
	sub_82241D18(ctx, base);
loc_823F1B30:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x823f1b40
	if (ctx.cr6.eq) goto loc_823F1B40;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82241d18
	ctx.lr = 0x823F1B40;
	sub_82241D18(ctx, base);
loc_823F1B40:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r3,r1,608
	ctx.r3.s64 = ctx.r1.s64 + 608;
	// addi r4,r11,32384
	ctx.r4.s64 = ctx.r11.s64 + 32384;
	// bl 0x822400d8
	ctx.lr = 0x823F1B50;
	sub_822400D8(ctx, base);
	// addi r31,r28,40
	ctx.r31.s64 = ctx.r28.s64 + 40;
	// addi r4,r1,608
	ctx.r4.s64 = ctx.r1.s64 + 608;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82918c80
	ctx.lr = 0x823F1B60;
	sub_82918C80(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,608
	ctx.r3.s64 = ctx.r1.s64 + 608;
	// bl 0x822402c8
	ctx.lr = 0x823F1B70;
	sub_822402C8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x829173b8
	ctx.lr = 0x823F1B7C;
	sub_829173B8(ctx, base);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x823f62d0
	ctx.lr = 0x823F1B88;
	sub_823F62D0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829173c0
	ctx.lr = 0x823F1B94;
	sub_829173C0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x823f1ba8
	if (!ctx.cr0.eq) goto loc_823F1BA8;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,104
	ctx.r3.s64 = ctx.r31.s64 + 104;
	// bl 0x823f6330
	ctx.lr = 0x823F1BA8;
	sub_823F6330(ctx, base);
loc_823F1BA8:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823f1bb8
	if (ctx.cr6.eq) goto loc_823F1BB8;
	// bl 0x82241d18
	ctx.lr = 0x823F1BB8;
	sub_82241D18(ctx, base);
loc_823F1BB8:
	// addi r4,r1,136
	ctx.r4.s64 = ctx.r1.s64 + 136;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x823f62d0
	ctx.lr = 0x823F1BC4;
	sub_823F62D0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829173c0
	ctx.lr = 0x823F1BD0;
	sub_829173C0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x823f1be4
	if (!ctx.cr0.eq) goto loc_823F1BE4;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,112
	ctx.r3.s64 = ctx.r31.s64 + 112;
	// bl 0x823f6330
	ctx.lr = 0x823F1BE4;
	sub_823F6330(ctx, base);
loc_823F1BE4:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823f1bf4
	if (ctx.cr6.eq) goto loc_823F1BF4;
	// bl 0x82241d18
	ctx.lr = 0x823F1BF4;
	sub_82241D18(ctx, base);
loc_823F1BF4:
	// lwz r24,308(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 308);
	// mr r30,r17
	ctx.r30.u64 = ctx.r17.u64;
	// stw r17,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r17.u32);
	// stw r17,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r17.u32);
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// beq cr6,0x823f1c2c
	if (ctx.cr6.eq) goto loc_823F1C2C;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x826abc90
	ctx.lr = 0x823F1C14;
	sub_826ABC90(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823f1c2c
	if (ctx.cr0.eq) goto loc_823F1C2C;
	// lwz r11,304(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 304);
	// mr r30,r24
	ctx.r30.u64 = ctx.r24.u64;
	// stw r24,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r24.u32);
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
loc_823F1C2C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829173c0
	ctx.lr = 0x823F1C34;
	sub_829173C0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x823f1c4c
	if (!ctx.cr0.eq) goto loc_823F1C4C;
	// addi r4,r1,120
	ctx.r4.s64 = ctx.r1.s64 + 120;
	// addi r3,r31,120
	ctx.r3.s64 = ctx.r31.s64 + 120;
	// bl 0x823f6330
	ctx.lr = 0x823F1C48;
	sub_823F6330(ctx, base);
	// lwz r30,124(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
loc_823F1C4C:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x823f1c5c
	if (ctx.cr6.eq) goto loc_823F1C5C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82241d18
	ctx.lr = 0x823F1C5C;
	sub_82241D18(ctx, base);
loc_823F1C5C:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r3,r1,992
	ctx.r3.s64 = ctx.r1.s64 + 992;
	// addi r4,r11,32404
	ctx.r4.s64 = ctx.r11.s64 + 32404;
	// bl 0x822400d8
	ctx.lr = 0x823F1C6C;
	sub_822400D8(ctx, base);
	// addi r31,r28,168
	ctx.r31.s64 = ctx.r28.s64 + 168;
	// addi r4,r1,992
	ctx.r4.s64 = ctx.r1.s64 + 992;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82918c80
	ctx.lr = 0x823F1C7C;
	sub_82918C80(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,992
	ctx.r3.s64 = ctx.r1.s64 + 992;
	// bl 0x822402c8
	ctx.lr = 0x823F1C8C;
	sub_822402C8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x829173b8
	ctx.lr = 0x823F1C98;
	sub_829173B8(ctx, base);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x823f62d0
	ctx.lr = 0x823F1CA4;
	sub_823F62D0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823bc728
	ctx.lr = 0x823F1CB0;
	sub_823BC728(ctx, base);
	// addi r4,r1,136
	ctx.r4.s64 = ctx.r1.s64 + 136;
	// addi r3,r1,312
	ctx.r3.s64 = ctx.r1.s64 + 312;
	// bl 0x823f62d0
	ctx.lr = 0x823F1CBC;
	sub_823F62D0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823bc788
	ctx.lr = 0x823F1CC8;
	sub_823BC788(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r3,r1,672
	ctx.r3.s64 = ctx.r1.s64 + 672;
	// addi r4,r11,32424
	ctx.r4.s64 = ctx.r11.s64 + 32424;
	// bl 0x822400d8
	ctx.lr = 0x823F1CD8;
	sub_822400D8(ctx, base);
	// addi r31,r28,288
	ctx.r31.s64 = ctx.r28.s64 + 288;
	// addi r4,r1,672
	ctx.r4.s64 = ctx.r1.s64 + 672;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82918c80
	ctx.lr = 0x823F1CE8;
	sub_82918C80(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,672
	ctx.r3.s64 = ctx.r1.s64 + 672;
	// bl 0x822402c8
	ctx.lr = 0x823F1CF8;
	sub_822402C8(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829173b8
	ctx.lr = 0x823F1D04;
	sub_829173B8(ctx, base);
	// lwz r25,276(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 276);
	// mr r30,r17
	ctx.r30.u64 = ctx.r17.u64;
	// stw r17,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r17.u32);
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// stw r17,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r17.u32);
	// beq cr6,0x823f1d3c
	if (ctx.cr6.eq) goto loc_823F1D3C;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x826abc90
	ctx.lr = 0x823F1D24;
	sub_826ABC90(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823f1d3c
	if (ctx.cr0.eq) goto loc_823F1D3C;
	// lwz r11,272(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 272);
	// mr r30,r25
	ctx.r30.u64 = ctx.r25.u64;
	// stw r25,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r25.u32);
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
loc_823F1D3C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829173c0
	ctx.lr = 0x823F1D44;
	sub_829173C0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x823f1d5c
	if (!ctx.cr0.eq) goto loc_823F1D5C;
	// addi r4,r1,120
	ctx.r4.s64 = ctx.r1.s64 + 120;
	// addi r3,r31,104
	ctx.r3.s64 = ctx.r31.s64 + 104;
	// bl 0x823f6330
	ctx.lr = 0x823F1D58;
	sub_823F6330(ctx, base);
	// lwz r30,124(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
loc_823F1D5C:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x823f1d6c
	if (ctx.cr6.eq) goto loc_823F1D6C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82241d18
	ctx.lr = 0x823F1D6C;
	sub_82241D18(ctx, base);
loc_823F1D6C:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r3,r1,512
	ctx.r3.s64 = ctx.r1.s64 + 512;
	// addi r4,r11,32444
	ctx.r4.s64 = ctx.r11.s64 + 32444;
	// bl 0x822400d8
	ctx.lr = 0x823F1D7C;
	sub_822400D8(ctx, base);
	// addi r31,r28,400
	ctx.r31.s64 = ctx.r28.s64 + 400;
	// addi r4,r1,512
	ctx.r4.s64 = ctx.r1.s64 + 512;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82918c80
	ctx.lr = 0x823F1D8C;
	sub_82918C80(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,512
	ctx.r3.s64 = ctx.r1.s64 + 512;
	// bl 0x822402c8
	ctx.lr = 0x823F1D9C;
	sub_822402C8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x829173b8
	ctx.lr = 0x823F1DA8;
	sub_829173B8(ctx, base);
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x823f62d0
	ctx.lr = 0x823F1DB4;
	sub_823F62D0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829173c0
	ctx.lr = 0x823F1DC0;
	sub_829173C0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x823f1dd4
	if (!ctx.cr0.eq) goto loc_823F1DD4;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,104
	ctx.r3.s64 = ctx.r31.s64 + 104;
	// bl 0x823f6330
	ctx.lr = 0x823F1DD4;
	sub_823F6330(ctx, base);
loc_823F1DD4:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823f1de4
	if (ctx.cr6.eq) goto loc_823F1DE4;
	// bl 0x82241d18
	ctx.lr = 0x823F1DE4;
	sub_82241D18(ctx, base);
loc_823F1DE4:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r3,r1,736
	ctx.r3.s64 = ctx.r1.s64 + 736;
	// addi r4,r11,32472
	ctx.r4.s64 = ctx.r11.s64 + 32472;
	// bl 0x822400d8
	ctx.lr = 0x823F1DF4;
	sub_822400D8(ctx, base);
	// addi r31,r28,512
	ctx.r31.s64 = ctx.r28.s64 + 512;
	// addi r4,r1,736
	ctx.r4.s64 = ctx.r1.s64 + 736;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82918c80
	ctx.lr = 0x823F1E04;
	sub_82918C80(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,736
	ctx.r3.s64 = ctx.r1.s64 + 736;
	// bl 0x822402c8
	ctx.lr = 0x823F1E14;
	sub_822402C8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x829173b8
	ctx.lr = 0x823F1E20;
	sub_829173B8(ctx, base);
	// addi r4,r1,216
	ctx.r4.s64 = ctx.r1.s64 + 216;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x823f62d0
	ctx.lr = 0x823F1E2C;
	sub_823F62D0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829173c0
	ctx.lr = 0x823F1E38;
	sub_829173C0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x823f1e4c
	if (!ctx.cr0.eq) goto loc_823F1E4C;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,104
	ctx.r3.s64 = ctx.r31.s64 + 104;
	// bl 0x823f6330
	ctx.lr = 0x823F1E4C;
	sub_823F6330(ctx, base);
loc_823F1E4C:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823f1e5c
	if (ctx.cr6.eq) goto loc_823F1E5C;
	// bl 0x82241d18
	ctx.lr = 0x823F1E5C;
	sub_82241D18(ctx, base);
loc_823F1E5C:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r3,r1,1056
	ctx.r3.s64 = ctx.r1.s64 + 1056;
	// addi r4,r11,32500
	ctx.r4.s64 = ctx.r11.s64 + 32500;
	// bl 0x822400d8
	ctx.lr = 0x823F1E6C;
	sub_822400D8(ctx, base);
	// addi r31,r28,624
	ctx.r31.s64 = ctx.r28.s64 + 624;
	// addi r4,r1,1056
	ctx.r4.s64 = ctx.r1.s64 + 1056;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82918c80
	ctx.lr = 0x823F1E7C;
	sub_82918C80(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,1056
	ctx.r3.s64 = ctx.r1.s64 + 1056;
	// bl 0x822402c8
	ctx.lr = 0x823F1E8C;
	sub_822402C8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x829173b8
	ctx.lr = 0x823F1E98;
	sub_829173B8(ctx, base);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x823f62d0
	ctx.lr = 0x823F1EA4;
	sub_823F62D0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823bc728
	ctx.lr = 0x823F1EB0;
	sub_823BC728(ctx, base);
	// addi r4,r1,136
	ctx.r4.s64 = ctx.r1.s64 + 136;
	// addi r3,r1,312
	ctx.r3.s64 = ctx.r1.s64 + 312;
	// bl 0x823f62d0
	ctx.lr = 0x823F1EBC;
	sub_823F62D0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823bc788
	ctx.lr = 0x823F1EC8;
	sub_823BC788(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r3,r1,800
	ctx.r3.s64 = ctx.r1.s64 + 800;
	// addi r4,r11,32524
	ctx.r4.s64 = ctx.r11.s64 + 32524;
	// bl 0x822400d8
	ctx.lr = 0x823F1ED8;
	sub_822400D8(ctx, base);
	// addi r31,r28,744
	ctx.r31.s64 = ctx.r28.s64 + 744;
	// addi r4,r1,800
	ctx.r4.s64 = ctx.r1.s64 + 800;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82918c80
	ctx.lr = 0x823F1EE8;
	sub_82918C80(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,800
	ctx.r3.s64 = ctx.r1.s64 + 800;
	// bl 0x822402c8
	ctx.lr = 0x823F1EF8;
	sub_822402C8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x829173b8
	ctx.lr = 0x823F1F04;
	sub_829173B8(ctx, base);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// addi r3,r1,360
	ctx.r3.s64 = ctx.r1.s64 + 360;
	// bl 0x823f62d0
	ctx.lr = 0x823F1F10;
	sub_823F62D0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823bc728
	ctx.lr = 0x823F1F1C;
	sub_823BC728(ctx, base);
	// addi r4,r1,136
	ctx.r4.s64 = ctx.r1.s64 + 136;
	// addi r3,r1,408
	ctx.r3.s64 = ctx.r1.s64 + 408;
	// bl 0x823f62d0
	ctx.lr = 0x823F1F28;
	sub_823F62D0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823bc788
	ctx.lr = 0x823F1F34;
	sub_823BC788(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r3,r1,1312
	ctx.r3.s64 = ctx.r1.s64 + 1312;
	// addi r4,r11,32548
	ctx.r4.s64 = ctx.r11.s64 + 32548;
	// bl 0x822400d8
	ctx.lr = 0x823F1F44;
	sub_822400D8(ctx, base);
	// addi r31,r28,864
	ctx.r31.s64 = ctx.r28.s64 + 864;
	// addi r4,r1,1312
	ctx.r4.s64 = ctx.r1.s64 + 1312;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82918c80
	ctx.lr = 0x823F1F54;
	sub_82918C80(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,1312
	ctx.r3.s64 = ctx.r1.s64 + 1312;
	// bl 0x822402c8
	ctx.lr = 0x823F1F64;
	sub_822402C8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x829173b8
	ctx.lr = 0x823F1F70;
	sub_829173B8(ctx, base);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// addi r3,r1,416
	ctx.r3.s64 = ctx.r1.s64 + 416;
	// bl 0x823f62d0
	ctx.lr = 0x823F1F7C;
	sub_823F62D0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823bc728
	ctx.lr = 0x823F1F88;
	sub_823BC728(ctx, base);
	// addi r4,r1,136
	ctx.r4.s64 = ctx.r1.s64 + 136;
	// addi r3,r1,400
	ctx.r3.s64 = ctx.r1.s64 + 400;
	// bl 0x823f62d0
	ctx.lr = 0x823F1F94;
	sub_823F62D0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823bc788
	ctx.lr = 0x823F1FA0;
	sub_823BC788(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r3,r1,864
	ctx.r3.s64 = ctx.r1.s64 + 864;
	// addi r4,r11,32572
	ctx.r4.s64 = ctx.r11.s64 + 32572;
	// bl 0x822400d8
	ctx.lr = 0x823F1FB0;
	sub_822400D8(ctx, base);
	// addi r31,r28,984
	ctx.r31.s64 = ctx.r28.s64 + 984;
	// addi r4,r1,864
	ctx.r4.s64 = ctx.r1.s64 + 864;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82918c80
	ctx.lr = 0x823F1FC0;
	sub_82918C80(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,864
	ctx.r3.s64 = ctx.r1.s64 + 864;
	// bl 0x822402c8
	ctx.lr = 0x823F1FD0;
	sub_822402C8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x829173b8
	ctx.lr = 0x823F1FDC;
	sub_829173B8(ctx, base);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// addi r3,r1,376
	ctx.r3.s64 = ctx.r1.s64 + 376;
	// bl 0x823f62d0
	ctx.lr = 0x823F1FE8;
	sub_823F62D0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823bc728
	ctx.lr = 0x823F1FF4;
	sub_823BC728(ctx, base);
	// addi r4,r1,136
	ctx.r4.s64 = ctx.r1.s64 + 136;
	// addi r3,r1,384
	ctx.r3.s64 = ctx.r1.s64 + 384;
	// bl 0x823f62d0
	ctx.lr = 0x823F2000;
	sub_823F62D0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823bc788
	ctx.lr = 0x823F200C;
	sub_823BC788(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r3,r1,1120
	ctx.r3.s64 = ctx.r1.s64 + 1120;
	// addi r4,r11,32604
	ctx.r4.s64 = ctx.r11.s64 + 32604;
	// bl 0x822400d8
	ctx.lr = 0x823F201C;
	sub_822400D8(ctx, base);
	// addi r31,r28,1104
	ctx.r31.s64 = ctx.r28.s64 + 1104;
	// addi r4,r1,1120
	ctx.r4.s64 = ctx.r1.s64 + 1120;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82918c80
	ctx.lr = 0x823F202C;
	sub_82918C80(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,1120
	ctx.r3.s64 = ctx.r1.s64 + 1120;
	// bl 0x822402c8
	ctx.lr = 0x823F203C;
	sub_822402C8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x829173b8
	ctx.lr = 0x823F2048;
	sub_829173B8(ctx, base);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// bl 0x823f62d0
	ctx.lr = 0x823F2054;
	sub_823F62D0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829173c0
	ctx.lr = 0x823F2060;
	sub_829173C0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x823f2074
	if (!ctx.cr0.eq) goto loc_823F2074;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,104
	ctx.r3.s64 = ctx.r31.s64 + 104;
	// bl 0x823f6330
	ctx.lr = 0x823F2074;
	sub_823F6330(ctx, base);
loc_823F2074:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823f2084
	if (ctx.cr6.eq) goto loc_823F2084;
	// bl 0x82241d18
	ctx.lr = 0x823F2084;
	sub_82241D18(ctx, base);
loc_823F2084:
	// addi r4,r1,152
	ctx.r4.s64 = ctx.r1.s64 + 152;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x823f62d0
	ctx.lr = 0x823F2090;
	sub_823F62D0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829173c0
	ctx.lr = 0x823F209C;
	sub_829173C0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x823f20b0
	if (!ctx.cr0.eq) goto loc_823F20B0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,112
	ctx.r3.s64 = ctx.r31.s64 + 112;
	// bl 0x823f6330
	ctx.lr = 0x823F20B0;
	sub_823F6330(ctx, base);
loc_823F20B0:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823f20c0
	if (ctx.cr6.eq) goto loc_823F20C0;
	// bl 0x82241d18
	ctx.lr = 0x823F20C0;
	sub_82241D18(ctx, base);
loc_823F20C0:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r3,r1,928
	ctx.r3.s64 = ctx.r1.s64 + 928;
	// addi r4,r11,32628
	ctx.r4.s64 = ctx.r11.s64 + 32628;
	// bl 0x822400d8
	ctx.lr = 0x823F20D0;
	sub_822400D8(ctx, base);
	// addi r31,r28,1224
	ctx.r31.s64 = ctx.r28.s64 + 1224;
	// addi r4,r1,928
	ctx.r4.s64 = ctx.r1.s64 + 928;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82918c80
	ctx.lr = 0x823F20E0;
	sub_82918C80(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,928
	ctx.r3.s64 = ctx.r1.s64 + 928;
	// bl 0x822402c8
	ctx.lr = 0x823F20F0;
	sub_822402C8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x829173b8
	ctx.lr = 0x823F20FC;
	sub_829173B8(ctx, base);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x823f62d0
	ctx.lr = 0x823F2108;
	sub_823F62D0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823bc728
	ctx.lr = 0x823F2114;
	sub_823BC728(ctx, base);
	// addi r4,r1,136
	ctx.r4.s64 = ctx.r1.s64 + 136;
	// addi r3,r1,312
	ctx.r3.s64 = ctx.r1.s64 + 312;
	// bl 0x823f62d0
	ctx.lr = 0x823F2120;
	sub_823F62D0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x823bc788
	ctx.lr = 0x823F212C;
	sub_823BC788(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r3,r1,544
	ctx.r3.s64 = ctx.r1.s64 + 544;
	// addi r4,r11,32656
	ctx.r4.s64 = ctx.r11.s64 + 32656;
	// bl 0x822400d8
	ctx.lr = 0x823F213C;
	sub_822400D8(ctx, base);
	// addi r31,r28,1344
	ctx.r31.s64 = ctx.r28.s64 + 1344;
	// addi r4,r1,544
	ctx.r4.s64 = ctx.r1.s64 + 544;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82918c80
	ctx.lr = 0x823F214C;
	sub_82918C80(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,544
	ctx.r3.s64 = ctx.r1.s64 + 544;
	// bl 0x822402c8
	ctx.lr = 0x823F215C;
	sub_822402C8(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829173b8
	ctx.lr = 0x823F2168;
	sub_829173B8(ctx, base);
	// lwz r26,332(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 332);
	// mr r30,r17
	ctx.r30.u64 = ctx.r17.u64;
	// stw r17,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r17.u32);
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// stw r17,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r17.u32);
	// beq cr6,0x823f219c
	if (ctx.cr6.eq) goto loc_823F219C;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x826abc90
	ctx.lr = 0x823F2188;
	sub_826ABC90(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823f219c
	if (ctx.cr0.eq) goto loc_823F219C;
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
	// stw r19,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r19.u32);
	// stw r26,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r26.u32);
loc_823F219C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829173c0
	ctx.lr = 0x823F21A4;
	sub_829173C0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x823f21bc
	if (!ctx.cr0.eq) goto loc_823F21BC;
	// addi r4,r1,120
	ctx.r4.s64 = ctx.r1.s64 + 120;
	// addi r3,r31,104
	ctx.r3.s64 = ctx.r31.s64 + 104;
	// bl 0x823f6330
	ctx.lr = 0x823F21B8;
	sub_823F6330(ctx, base);
	// lwz r30,124(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
loc_823F21BC:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x823f21cc
	if (ctx.cr6.eq) goto loc_823F21CC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82241d18
	ctx.lr = 0x823F21CC;
	sub_82241D18(ctx, base);
loc_823F21CC:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r3,r1,576
	ctx.r3.s64 = ctx.r1.s64 + 576;
	// addi r4,r11,32680
	ctx.r4.s64 = ctx.r11.s64 + 32680;
	// bl 0x822400d8
	ctx.lr = 0x823F21DC;
	sub_822400D8(ctx, base);
	// addi r31,r28,1456
	ctx.r31.s64 = ctx.r28.s64 + 1456;
	// addi r4,r1,576
	ctx.r4.s64 = ctx.r1.s64 + 576;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82918c80
	ctx.lr = 0x823F21EC;
	sub_82918C80(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,576
	ctx.r3.s64 = ctx.r1.s64 + 576;
	// bl 0x822402c8
	ctx.lr = 0x823F21FC;
	sub_822402C8(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829173b8
	ctx.lr = 0x823F2208;
	sub_829173B8(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r3,r1,640
	ctx.r3.s64 = ctx.r1.s64 + 640;
	// addi r4,r11,32708
	ctx.r4.s64 = ctx.r11.s64 + 32708;
	// bl 0x822400d8
	ctx.lr = 0x823F2218;
	sub_822400D8(ctx, base);
	// addi r31,r28,1912
	ctx.r31.s64 = ctx.r28.s64 + 1912;
	// addi r4,r1,640
	ctx.r4.s64 = ctx.r1.s64 + 640;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82918c80
	ctx.lr = 0x823F2228;
	sub_82918C80(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,640
	ctx.r3.s64 = ctx.r1.s64 + 640;
	// bl 0x822402c8
	ctx.lr = 0x823F2238;
	sub_822402C8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x829173b8
	ctx.lr = 0x823F2244;
	sub_829173B8(ctx, base);
	// addi r4,r1,152
	ctx.r4.s64 = ctx.r1.s64 + 152;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x823f62d0
	ctx.lr = 0x823F2250;
	sub_823F62D0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829173c0
	ctx.lr = 0x823F225C;
	sub_829173C0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x823f2270
	if (!ctx.cr0.eq) goto loc_823F2270;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,104
	ctx.r3.s64 = ctx.r31.s64 + 104;
	// bl 0x823f6330
	ctx.lr = 0x823F2270;
	sub_823F6330(ctx, base);
loc_823F2270:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823f2280
	if (ctx.cr6.eq) goto loc_823F2280;
	// bl 0x82241d18
	ctx.lr = 0x823F2280;
	sub_82241D18(ctx, base);
loc_823F2280:
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x823f62d0
	ctx.lr = 0x823F228C;
	sub_823F62D0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829173c0
	ctx.lr = 0x823F2298;
	sub_829173C0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x823f22ac
	if (!ctx.cr0.eq) goto loc_823F22AC;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,112
	ctx.r3.s64 = ctx.r31.s64 + 112;
	// bl 0x823f6330
	ctx.lr = 0x823F22AC;
	sub_823F6330(ctx, base);
loc_823F22AC:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823f22bc
	if (ctx.cr6.eq) goto loc_823F22BC;
	// bl 0x82241d18
	ctx.lr = 0x823F22BC;
	sub_82241D18(ctx, base);
loc_823F22BC:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r3,r1,704
	ctx.r3.s64 = ctx.r1.s64 + 704;
	// addi r4,r11,32724
	ctx.r4.s64 = ctx.r11.s64 + 32724;
	// bl 0x822400d8
	ctx.lr = 0x823F22CC;
	sub_822400D8(ctx, base);
	// addi r31,r28,2032
	ctx.r31.s64 = ctx.r28.s64 + 2032;
	// addi r4,r1,704
	ctx.r4.s64 = ctx.r1.s64 + 704;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82918c80
	ctx.lr = 0x823F22DC;
	sub_82918C80(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,704
	ctx.r3.s64 = ctx.r1.s64 + 704;
	// bl 0x822402c8
	ctx.lr = 0x823F22EC;
	sub_822402C8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x829173b8
	ctx.lr = 0x823F22F8;
	sub_829173B8(ctx, base);
	// addi r4,r1,152
	ctx.r4.s64 = ctx.r1.s64 + 152;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x823f62d0
	ctx.lr = 0x823F2304;
	sub_823F62D0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829173c0
	ctx.lr = 0x823F2310;
	sub_829173C0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x823f2324
	if (!ctx.cr0.eq) goto loc_823F2324;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,104
	ctx.r3.s64 = ctx.r31.s64 + 104;
	// bl 0x823f6330
	ctx.lr = 0x823F2324;
	sub_823F6330(ctx, base);
loc_823F2324:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823f2334
	if (ctx.cr6.eq) goto loc_823F2334;
	// bl 0x82241d18
	ctx.lr = 0x823F2334;
	sub_82241D18(ctx, base);
loc_823F2334:
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x823f62d0
	ctx.lr = 0x823F2340;
	sub_823F62D0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829173c0
	ctx.lr = 0x823F234C;
	sub_829173C0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x823f2360
	if (!ctx.cr0.eq) goto loc_823F2360;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,112
	ctx.r3.s64 = ctx.r31.s64 + 112;
	// bl 0x823f6330
	ctx.lr = 0x823F2360;
	sub_823F6330(ctx, base);
loc_823F2360:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823f2370
	if (ctx.cr6.eq) goto loc_823F2370;
	// bl 0x82241d18
	ctx.lr = 0x823F2370;
	sub_82241D18(ctx, base);
loc_823F2370:
	// addi r4,r1,168
	ctx.r4.s64 = ctx.r1.s64 + 168;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x823f62d0
	ctx.lr = 0x823F237C;
	sub_823F62D0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829173c0
	ctx.lr = 0x823F2388;
	sub_829173C0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x823f239c
	if (!ctx.cr0.eq) goto loc_823F239C;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,120
	ctx.r3.s64 = ctx.r31.s64 + 120;
	// bl 0x823f6330
	ctx.lr = 0x823F239C;
	sub_823F6330(ctx, base);
loc_823F239C:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823f23ac
	if (ctx.cr6.eq) goto loc_823F23AC;
	// bl 0x82241d18
	ctx.lr = 0x823F23AC;
	sub_82241D18(ctx, base);
loc_823F23AC:
	// lwz r27,320(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 320);
	// mr r30,r17
	ctx.r30.u64 = ctx.r17.u64;
	// stw r17,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r17.u32);
	// stw r17,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r17.u32);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x823f23e0
	if (ctx.cr6.eq) goto loc_823F23E0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x826abc90
	ctx.lr = 0x823F23CC;
	sub_826ABC90(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823f23e0
	if (ctx.cr0.eq) goto loc_823F23E0;
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
	// stw r18,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r18.u32);
	// stw r27,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r27.u32);
loc_823F23E0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829173c0
	ctx.lr = 0x823F23E8;
	sub_829173C0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x823f2400
	if (!ctx.cr0.eq) goto loc_823F2400;
	// addi r4,r1,120
	ctx.r4.s64 = ctx.r1.s64 + 120;
	// addi r3,r31,128
	ctx.r3.s64 = ctx.r31.s64 + 128;
	// bl 0x823f6330
	ctx.lr = 0x823F23FC;
	sub_823F6330(ctx, base);
	// lwz r30,124(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
loc_823F2400:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x823f2410
	if (ctx.cr6.eq) goto loc_823F2410;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82241d18
	ctx.lr = 0x823F2410;
	sub_82241D18(ctx, base);
loc_823F2410:
	// addi r4,r1,480
	ctx.r4.s64 = ctx.r1.s64 + 480;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x823f62d0
	ctx.lr = 0x823F241C;
	sub_823F62D0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829173c0
	ctx.lr = 0x823F2428;
	sub_829173C0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x823f243c
	if (!ctx.cr0.eq) goto loc_823F243C;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,136
	ctx.r3.s64 = ctx.r31.s64 + 136;
	// bl 0x823f6330
	ctx.lr = 0x823F243C;
	sub_823F6330(ctx, base);
loc_823F243C:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823f244c
	if (ctx.cr6.eq) goto loc_823F244C;
	// bl 0x82241d18
	ctx.lr = 0x823F244C;
	sub_82241D18(ctx, base);
loc_823F244C:
	// addi r4,r1,168
	ctx.r4.s64 = ctx.r1.s64 + 168;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x823f62d0
	ctx.lr = 0x823F2458;
	sub_823F62D0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829173c0
	ctx.lr = 0x823F2464;
	sub_829173C0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x823f2478
	if (!ctx.cr0.eq) goto loc_823F2478;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,144
	ctx.r3.s64 = ctx.r31.s64 + 144;
	// bl 0x823f6330
	ctx.lr = 0x823F2478;
	sub_823F6330(ctx, base);
loc_823F2478:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823f2488
	if (ctx.cr6.eq) goto loc_823F2488;
	// bl 0x82241d18
	ctx.lr = 0x823F2488;
	sub_82241D18(ctx, base);
loc_823F2488:
	// addi r4,r1,200
	ctx.r4.s64 = ctx.r1.s64 + 200;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x823f62d0
	ctx.lr = 0x823F2494;
	sub_823F62D0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829173c0
	ctx.lr = 0x823F24A0;
	sub_829173C0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x823f24b4
	if (!ctx.cr0.eq) goto loc_823F24B4;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,152
	ctx.r3.s64 = ctx.r31.s64 + 152;
	// bl 0x823f6330
	ctx.lr = 0x823F24B4;
	sub_823F6330(ctx, base);
loc_823F24B4:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823f24c4
	if (ctx.cr6.eq) goto loc_823F24C4;
	// bl 0x82241d18
	ctx.lr = 0x823F24C4;
	sub_82241D18(ctx, base);
loc_823F24C4:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r3,r1,768
	ctx.r3.s64 = ctx.r1.s64 + 768;
	// addi r4,r11,32740
	ctx.r4.s64 = ctx.r11.s64 + 32740;
	// bl 0x822400d8
	ctx.lr = 0x823F24D4;
	sub_822400D8(ctx, base);
	// addi r31,r28,2192
	ctx.r31.s64 = ctx.r28.s64 + 2192;
	// addi r4,r1,768
	ctx.r4.s64 = ctx.r1.s64 + 768;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82918c80
	ctx.lr = 0x823F24E4;
	sub_82918C80(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,768
	ctx.r3.s64 = ctx.r1.s64 + 768;
	// bl 0x822402c8
	ctx.lr = 0x823F24F4;
	sub_822402C8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x829173b8
	ctx.lr = 0x823F2500;
	sub_829173B8(ctx, base);
	// addi r4,r1,152
	ctx.r4.s64 = ctx.r1.s64 + 152;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x823f62d0
	ctx.lr = 0x823F250C;
	sub_823F62D0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829173c0
	ctx.lr = 0x823F2518;
	sub_829173C0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x823f252c
	if (!ctx.cr0.eq) goto loc_823F252C;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,104
	ctx.r3.s64 = ctx.r31.s64 + 104;
	// bl 0x823f6330
	ctx.lr = 0x823F252C;
	sub_823F6330(ctx, base);
loc_823F252C:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823f253c
	if (ctx.cr6.eq) goto loc_823F253C;
	// bl 0x82241d18
	ctx.lr = 0x823F253C;
	sub_82241D18(ctx, base);
loc_823F253C:
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x823f62d0
	ctx.lr = 0x823F2548;
	sub_823F62D0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829173c0
	ctx.lr = 0x823F2554;
	sub_829173C0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x823f2568
	if (!ctx.cr0.eq) goto loc_823F2568;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,112
	ctx.r3.s64 = ctx.r31.s64 + 112;
	// bl 0x823f6330
	ctx.lr = 0x823F2568;
	sub_823F6330(ctx, base);
loc_823F2568:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823f2578
	if (ctx.cr6.eq) goto loc_823F2578;
	// bl 0x82241d18
	ctx.lr = 0x823F2578;
	sub_82241D18(ctx, base);
loc_823F2578:
	// addi r4,r1,136
	ctx.r4.s64 = ctx.r1.s64 + 136;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x823f62d0
	ctx.lr = 0x823F2584;
	sub_823F62D0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829173c0
	ctx.lr = 0x823F2590;
	sub_829173C0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x823f25a4
	if (!ctx.cr0.eq) goto loc_823F25A4;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,120
	ctx.r3.s64 = ctx.r31.s64 + 120;
	// bl 0x823f6330
	ctx.lr = 0x823F25A4;
	sub_823F6330(ctx, base);
loc_823F25A4:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823f25b4
	if (ctx.cr6.eq) goto loc_823F25B4;
	// bl 0x82241d18
	ctx.lr = 0x823F25B4;
	sub_82241D18(ctx, base);
loc_823F25B4:
	// addi r4,r1,456
	ctx.r4.s64 = ctx.r1.s64 + 456;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x823f62d0
	ctx.lr = 0x823F25C0;
	sub_823F62D0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829173c0
	ctx.lr = 0x823F25CC;
	sub_829173C0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x823f25e0
	if (!ctx.cr0.eq) goto loc_823F25E0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,128
	ctx.r3.s64 = ctx.r31.s64 + 128;
	// bl 0x823f6330
	ctx.lr = 0x823F25E0;
	sub_823F6330(ctx, base);
loc_823F25E0:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823f25f0
	if (ctx.cr6.eq) goto loc_823F25F0;
	// bl 0x82241d18
	ctx.lr = 0x823F25F0;
	sub_82241D18(ctx, base);
loc_823F25F0:
	// addi r4,r1,184
	ctx.r4.s64 = ctx.r1.s64 + 184;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x823f62d0
	ctx.lr = 0x823F25FC;
	sub_823F62D0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829173c0
	ctx.lr = 0x823F2608;
	sub_829173C0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x823f261c
	if (!ctx.cr0.eq) goto loc_823F261C;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,136
	ctx.r3.s64 = ctx.r31.s64 + 136;
	// bl 0x823f6330
	ctx.lr = 0x823F261C;
	sub_823F6330(ctx, base);
loc_823F261C:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823f262c
	if (ctx.cr6.eq) goto loc_823F262C;
	// bl 0x82241d18
	ctx.lr = 0x823F262C;
	sub_82241D18(ctx, base);
loc_823F262C:
	// addi r4,r1,448
	ctx.r4.s64 = ctx.r1.s64 + 448;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x823f62d0
	ctx.lr = 0x823F2638;
	sub_823F62D0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829173c0
	ctx.lr = 0x823F2644;
	sub_829173C0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x823f2658
	if (!ctx.cr0.eq) goto loc_823F2658;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,144
	ctx.r3.s64 = ctx.r31.s64 + 144;
	// bl 0x823f6330
	ctx.lr = 0x823F2658;
	sub_823F6330(ctx, base);
loc_823F2658:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823f2668
	if (ctx.cr6.eq) goto loc_823F2668;
	// bl 0x82241d18
	ctx.lr = 0x823F2668;
	sub_82241D18(ctx, base);
loc_823F2668:
	// addi r4,r1,424
	ctx.r4.s64 = ctx.r1.s64 + 424;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x823f62d0
	ctx.lr = 0x823F2674;
	sub_823F62D0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829173c0
	ctx.lr = 0x823F2680;
	sub_829173C0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x823f2694
	if (!ctx.cr0.eq) goto loc_823F2694;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,152
	ctx.r3.s64 = ctx.r31.s64 + 152;
	// bl 0x823f6330
	ctx.lr = 0x823F2694;
	sub_823F6330(ctx, base);
loc_823F2694:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823f26a4
	if (ctx.cr6.eq) goto loc_823F26A4;
	// bl 0x82241d18
	ctx.lr = 0x823F26A4;
	sub_82241D18(ctx, base);
loc_823F26A4:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r3,r1,832
	ctx.r3.s64 = ctx.r1.s64 + 832;
	// addi r4,r11,32756
	ctx.r4.s64 = ctx.r11.s64 + 32756;
	// bl 0x822400d8
	ctx.lr = 0x823F26B4;
	sub_822400D8(ctx, base);
	// addi r31,r28,2352
	ctx.r31.s64 = ctx.r28.s64 + 2352;
	// addi r4,r1,832
	ctx.r4.s64 = ctx.r1.s64 + 832;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82918c80
	ctx.lr = 0x823F26C4;
	sub_82918C80(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,832
	ctx.r3.s64 = ctx.r1.s64 + 832;
	// bl 0x822402c8
	ctx.lr = 0x823F26D4;
	sub_822402C8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x829173b8
	ctx.lr = 0x823F26E0;
	sub_829173B8(ctx, base);
	// addi r4,r1,152
	ctx.r4.s64 = ctx.r1.s64 + 152;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x823f62d0
	ctx.lr = 0x823F26EC;
	sub_823F62D0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829173c0
	ctx.lr = 0x823F26F8;
	sub_829173C0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x823f270c
	if (!ctx.cr0.eq) goto loc_823F270C;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,104
	ctx.r3.s64 = ctx.r31.s64 + 104;
	// bl 0x823f6330
	ctx.lr = 0x823F270C;
	sub_823F6330(ctx, base);
loc_823F270C:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823f271c
	if (ctx.cr6.eq) goto loc_823F271C;
	// bl 0x82241d18
	ctx.lr = 0x823F271C;
	sub_82241D18(ctx, base);
loc_823F271C:
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x823f62d0
	ctx.lr = 0x823F2728;
	sub_823F62D0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829173c0
	ctx.lr = 0x823F2734;
	sub_829173C0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x823f2748
	if (!ctx.cr0.eq) goto loc_823F2748;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,112
	ctx.r3.s64 = ctx.r31.s64 + 112;
	// bl 0x823f6330
	ctx.lr = 0x823F2748;
	sub_823F6330(ctx, base);
loc_823F2748:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823f2758
	if (ctx.cr6.eq) goto loc_823F2758;
	// bl 0x82241d18
	ctx.lr = 0x823F2758;
	sub_82241D18(ctx, base);
loc_823F2758:
	// addi r4,r1,136
	ctx.r4.s64 = ctx.r1.s64 + 136;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x823f62d0
	ctx.lr = 0x823F2764;
	sub_823F62D0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829173c0
	ctx.lr = 0x823F2770;
	sub_829173C0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x823f2784
	if (!ctx.cr0.eq) goto loc_823F2784;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,120
	ctx.r3.s64 = ctx.r31.s64 + 120;
	// bl 0x823f6330
	ctx.lr = 0x823F2784;
	sub_823F6330(ctx, base);
loc_823F2784:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823f2794
	if (ctx.cr6.eq) goto loc_823F2794;
	// bl 0x82241d18
	ctx.lr = 0x823F2794;
	sub_82241D18(ctx, base);
loc_823F2794:
	// addi r4,r1,432
	ctx.r4.s64 = ctx.r1.s64 + 432;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x823f62d0
	ctx.lr = 0x823F27A0;
	sub_823F62D0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829173c0
	ctx.lr = 0x823F27AC;
	sub_829173C0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x823f27c0
	if (!ctx.cr0.eq) goto loc_823F27C0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,128
	ctx.r3.s64 = ctx.r31.s64 + 128;
	// bl 0x823f6330
	ctx.lr = 0x823F27C0;
	sub_823F6330(ctx, base);
loc_823F27C0:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823f27d0
	if (ctx.cr6.eq) goto loc_823F27D0;
	// bl 0x82241d18
	ctx.lr = 0x823F27D0;
	sub_82241D18(ctx, base);
loc_823F27D0:
	// addi r4,r1,248
	ctx.r4.s64 = ctx.r1.s64 + 248;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x823f62d0
	ctx.lr = 0x823F27DC;
	sub_823F62D0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829173c0
	ctx.lr = 0x823F27E8;
	sub_829173C0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x823f27fc
	if (!ctx.cr0.eq) goto loc_823F27FC;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,136
	ctx.r3.s64 = ctx.r31.s64 + 136;
	// bl 0x823f6330
	ctx.lr = 0x823F27FC;
	sub_823F6330(ctx, base);
loc_823F27FC:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823f280c
	if (ctx.cr6.eq) goto loc_823F280C;
	// bl 0x82241d18
	ctx.lr = 0x823F280C;
	sub_82241D18(ctx, base);
loc_823F280C:
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r3,r1,896
	ctx.r3.s64 = ctx.r1.s64 + 896;
	// addi r4,r11,-32764
	ctx.r4.s64 = ctx.r11.s64 + -32764;
	// bl 0x822400d8
	ctx.lr = 0x823F281C;
	sub_822400D8(ctx, base);
	// addi r31,r28,2496
	ctx.r31.s64 = ctx.r28.s64 + 2496;
	// addi r4,r1,896
	ctx.r4.s64 = ctx.r1.s64 + 896;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82918c80
	ctx.lr = 0x823F282C;
	sub_82918C80(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,896
	ctx.r3.s64 = ctx.r1.s64 + 896;
	// bl 0x822402c8
	ctx.lr = 0x823F283C;
	sub_822402C8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x829173b8
	ctx.lr = 0x823F2848;
	sub_829173B8(ctx, base);
	// addi r4,r1,152
	ctx.r4.s64 = ctx.r1.s64 + 152;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x823f62d0
	ctx.lr = 0x823F2854;
	sub_823F62D0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829173c0
	ctx.lr = 0x823F2860;
	sub_829173C0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x823f2874
	if (!ctx.cr0.eq) goto loc_823F2874;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,104
	ctx.r3.s64 = ctx.r31.s64 + 104;
	// bl 0x823f6330
	ctx.lr = 0x823F2874;
	sub_823F6330(ctx, base);
loc_823F2874:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823f2884
	if (ctx.cr6.eq) goto loc_823F2884;
	// bl 0x82241d18
	ctx.lr = 0x823F2884;
	sub_82241D18(ctx, base);
loc_823F2884:
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x823f62d0
	ctx.lr = 0x823F2890;
	sub_823F62D0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829173c0
	ctx.lr = 0x823F289C;
	sub_829173C0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x823f28b0
	if (!ctx.cr0.eq) goto loc_823F28B0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,112
	ctx.r3.s64 = ctx.r31.s64 + 112;
	// bl 0x823f6330
	ctx.lr = 0x823F28B0;
	sub_823F6330(ctx, base);
loc_823F28B0:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823f28c0
	if (ctx.cr6.eq) goto loc_823F28C0;
	// bl 0x82241d18
	ctx.lr = 0x823F28C0;
	sub_82241D18(ctx, base);
loc_823F28C0:
	// addi r4,r1,136
	ctx.r4.s64 = ctx.r1.s64 + 136;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x823f62d0
	ctx.lr = 0x823F28CC;
	sub_823F62D0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829173c0
	ctx.lr = 0x823F28D8;
	sub_829173C0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x823f28ec
	if (!ctx.cr0.eq) goto loc_823F28EC;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,120
	ctx.r3.s64 = ctx.r31.s64 + 120;
	// bl 0x823f6330
	ctx.lr = 0x823F28EC;
	sub_823F6330(ctx, base);
loc_823F28EC:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823f28fc
	if (ctx.cr6.eq) goto loc_823F28FC;
	// bl 0x82241d18
	ctx.lr = 0x823F28FC;
	sub_82241D18(ctx, base);
loc_823F28FC:
	// addi r4,r1,200
	ctx.r4.s64 = ctx.r1.s64 + 200;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x823f62d0
	ctx.lr = 0x823F2908;
	sub_823F62D0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829173c0
	ctx.lr = 0x823F2914;
	sub_829173C0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x823f2928
	if (!ctx.cr0.eq) goto loc_823F2928;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,128
	ctx.r3.s64 = ctx.r31.s64 + 128;
	// bl 0x823f6330
	ctx.lr = 0x823F2928;
	sub_823F6330(ctx, base);
loc_823F2928:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823f2938
	if (ctx.cr6.eq) goto loc_823F2938;
	// bl 0x82241d18
	ctx.lr = 0x823F2938;
	sub_82241D18(ctx, base);
loc_823F2938:
	// addi r4,r1,432
	ctx.r4.s64 = ctx.r1.s64 + 432;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x823f62d0
	ctx.lr = 0x823F2944;
	sub_823F62D0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829173c0
	ctx.lr = 0x823F2950;
	sub_829173C0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x823f2964
	if (!ctx.cr0.eq) goto loc_823F2964;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,136
	ctx.r3.s64 = ctx.r31.s64 + 136;
	// bl 0x823f6330
	ctx.lr = 0x823F2964;
	sub_823F6330(ctx, base);
loc_823F2964:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823f2974
	if (ctx.cr6.eq) goto loc_823F2974;
	// bl 0x82241d18
	ctx.lr = 0x823F2974;
	sub_82241D18(ctx, base);
loc_823F2974:
	// addi r4,r1,168
	ctx.r4.s64 = ctx.r1.s64 + 168;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x823f62d0
	ctx.lr = 0x823F2980;
	sub_823F62D0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829173c0
	ctx.lr = 0x823F298C;
	sub_829173C0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x823f29a0
	if (!ctx.cr0.eq) goto loc_823F29A0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,144
	ctx.r3.s64 = ctx.r31.s64 + 144;
	// bl 0x823f6330
	ctx.lr = 0x823F29A0;
	sub_823F6330(ctx, base);
loc_823F29A0:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823f29b0
	if (ctx.cr6.eq) goto loc_823F29B0;
	// bl 0x82241d18
	ctx.lr = 0x823F29B0;
	sub_82241D18(ctx, base);
loc_823F29B0:
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r3,r1,960
	ctx.r3.s64 = ctx.r1.s64 + 960;
	// addi r4,r11,-32744
	ctx.r4.s64 = ctx.r11.s64 + -32744;
	// bl 0x822400d8
	ctx.lr = 0x823F29C0;
	sub_822400D8(ctx, base);
	// addi r31,r28,2648
	ctx.r31.s64 = ctx.r28.s64 + 2648;
	// addi r4,r1,960
	ctx.r4.s64 = ctx.r1.s64 + 960;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82918c80
	ctx.lr = 0x823F29D0;
	sub_82918C80(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,960
	ctx.r3.s64 = ctx.r1.s64 + 960;
	// bl 0x822402c8
	ctx.lr = 0x823F29E0;
	sub_822402C8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x829173b8
	ctx.lr = 0x823F29EC;
	sub_829173B8(ctx, base);
	// addi r4,r1,152
	ctx.r4.s64 = ctx.r1.s64 + 152;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x823f62d0
	ctx.lr = 0x823F29F8;
	sub_823F62D0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829173c0
	ctx.lr = 0x823F2A04;
	sub_829173C0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x823f2a18
	if (!ctx.cr0.eq) goto loc_823F2A18;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,104
	ctx.r3.s64 = ctx.r31.s64 + 104;
	// bl 0x823f6330
	ctx.lr = 0x823F2A18;
	sub_823F6330(ctx, base);
loc_823F2A18:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823f2a28
	if (ctx.cr6.eq) goto loc_823F2A28;
	// bl 0x82241d18
	ctx.lr = 0x823F2A28;
	sub_82241D18(ctx, base);
loc_823F2A28:
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x823f62d0
	ctx.lr = 0x823F2A34;
	sub_823F62D0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829173c0
	ctx.lr = 0x823F2A40;
	sub_829173C0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x823f2a54
	if (!ctx.cr0.eq) goto loc_823F2A54;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,112
	ctx.r3.s64 = ctx.r31.s64 + 112;
	// bl 0x823f6330
	ctx.lr = 0x823F2A54;
	sub_823F6330(ctx, base);
loc_823F2A54:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823f2a64
	if (ctx.cr6.eq) goto loc_823F2A64;
	// bl 0x82241d18
	ctx.lr = 0x823F2A64;
	sub_82241D18(ctx, base);
loc_823F2A64:
	// lwz r29,372(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 372);
	// mr r30,r17
	ctx.r30.u64 = ctx.r17.u64;
	// stw r17,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r17.u32);
	// stw r17,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r17.u32);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x823f2a9c
	if (ctx.cr6.eq) goto loc_823F2A9C;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x826abc90
	ctx.lr = 0x823F2A84;
	sub_826ABC90(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823f2a9c
	if (ctx.cr0.eq) goto loc_823F2A9C;
	// addi r11,r29,12
	ctx.r11.s64 = ctx.r29.s64 + 12;
	// stw r29,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r29.u32);
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
loc_823F2A9C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829173c0
	ctx.lr = 0x823F2AA4;
	sub_829173C0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x823f2abc
	if (!ctx.cr0.eq) goto loc_823F2ABC;
	// addi r4,r1,120
	ctx.r4.s64 = ctx.r1.s64 + 120;
	// addi r3,r31,120
	ctx.r3.s64 = ctx.r31.s64 + 120;
	// bl 0x823f6330
	ctx.lr = 0x823F2AB8;
	sub_823F6330(ctx, base);
	// lwz r30,124(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
loc_823F2ABC:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x823f2acc
	if (ctx.cr6.eq) goto loc_823F2ACC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82241d18
	ctx.lr = 0x823F2ACC;
	sub_82241D18(ctx, base);
loc_823F2ACC:
	// addi r4,r1,440
	ctx.r4.s64 = ctx.r1.s64 + 440;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x823f62d0
	ctx.lr = 0x823F2AD8;
	sub_823F62D0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829173c0
	ctx.lr = 0x823F2AE4;
	sub_829173C0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x823f2af8
	if (!ctx.cr0.eq) goto loc_823F2AF8;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,128
	ctx.r3.s64 = ctx.r31.s64 + 128;
	// bl 0x823f6330
	ctx.lr = 0x823F2AF8;
	sub_823F6330(ctx, base);
loc_823F2AF8:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823f2b08
	if (ctx.cr6.eq) goto loc_823F2B08;
	// bl 0x82241d18
	ctx.lr = 0x823F2B08;
	sub_82241D18(ctx, base);
loc_823F2B08:
	// addi r4,r1,136
	ctx.r4.s64 = ctx.r1.s64 + 136;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x823f62d0
	ctx.lr = 0x823F2B14;
	sub_823F62D0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829173c0
	ctx.lr = 0x823F2B20;
	sub_829173C0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x823f2b34
	if (!ctx.cr0.eq) goto loc_823F2B34;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,136
	ctx.r3.s64 = ctx.r31.s64 + 136;
	// bl 0x823f6330
	ctx.lr = 0x823F2B34;
	sub_823F6330(ctx, base);
loc_823F2B34:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823f2b44
	if (ctx.cr6.eq) goto loc_823F2B44;
	// bl 0x82241d18
	ctx.lr = 0x823F2B44;
	sub_82241D18(ctx, base);
loc_823F2B44:
	// addi r4,r1,136
	ctx.r4.s64 = ctx.r1.s64 + 136;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x823f62d0
	ctx.lr = 0x823F2B50;
	sub_823F62D0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829173c0
	ctx.lr = 0x823F2B5C;
	sub_829173C0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x823f2b70
	if (!ctx.cr0.eq) goto loc_823F2B70;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,144
	ctx.r3.s64 = ctx.r31.s64 + 144;
	// bl 0x823f6330
	ctx.lr = 0x823F2B70;
	sub_823F6330(ctx, base);
loc_823F2B70:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823f2b80
	if (ctx.cr6.eq) goto loc_823F2B80;
	// bl 0x82241d18
	ctx.lr = 0x823F2B80;
	sub_82241D18(ctx, base);
loc_823F2B80:
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x823f62d0
	ctx.lr = 0x823F2B8C;
	sub_823F62D0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829173c0
	ctx.lr = 0x823F2B98;
	sub_829173C0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x823f2bac
	if (!ctx.cr0.eq) goto loc_823F2BAC;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,152
	ctx.r3.s64 = ctx.r31.s64 + 152;
	// bl 0x823f6330
	ctx.lr = 0x823F2BAC;
	sub_823F6330(ctx, base);
loc_823F2BAC:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823f2bbc
	if (ctx.cr6.eq) goto loc_823F2BBC;
	// bl 0x82241d18
	ctx.lr = 0x823F2BBC;
	sub_82241D18(ctx, base);
loc_823F2BBC:
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r3,r1,1024
	ctx.r3.s64 = ctx.r1.s64 + 1024;
	// addi r4,r11,-32712
	ctx.r4.s64 = ctx.r11.s64 + -32712;
	// bl 0x822400d8
	ctx.lr = 0x823F2BCC;
	sub_822400D8(ctx, base);
	// addi r31,r28,2808
	ctx.r31.s64 = ctx.r28.s64 + 2808;
	// addi r4,r1,1024
	ctx.r4.s64 = ctx.r1.s64 + 1024;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82918c80
	ctx.lr = 0x823F2BDC;
	sub_82918C80(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,1024
	ctx.r3.s64 = ctx.r1.s64 + 1024;
	// bl 0x822402c8
	ctx.lr = 0x823F2BEC;
	sub_822402C8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x829173b8
	ctx.lr = 0x823F2BF8;
	sub_829173B8(ctx, base);
	// addi r4,r1,136
	ctx.r4.s64 = ctx.r1.s64 + 136;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x823f62d0
	ctx.lr = 0x823F2C04;
	sub_823F62D0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829173c0
	ctx.lr = 0x823F2C10;
	sub_829173C0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x823f2c24
	if (!ctx.cr0.eq) goto loc_823F2C24;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,104
	ctx.r3.s64 = ctx.r31.s64 + 104;
	// bl 0x823f6330
	ctx.lr = 0x823F2C24;
	sub_823F6330(ctx, base);
loc_823F2C24:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823f2c34
	if (ctx.cr6.eq) goto loc_823F2C34;
	// bl 0x82241d18
	ctx.lr = 0x823F2C34;
	sub_82241D18(ctx, base);
loc_823F2C34:
	// addi r4,r1,280
	ctx.r4.s64 = ctx.r1.s64 + 280;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x823f62d0
	ctx.lr = 0x823F2C40;
	sub_823F62D0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829173c0
	ctx.lr = 0x823F2C4C;
	sub_829173C0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x823f2c60
	if (!ctx.cr0.eq) goto loc_823F2C60;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,112
	ctx.r3.s64 = ctx.r31.s64 + 112;
	// bl 0x823f6330
	ctx.lr = 0x823F2C60;
	sub_823F6330(ctx, base);
loc_823F2C60:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823f2c70
	if (ctx.cr6.eq) goto loc_823F2C70;
	// bl 0x82241d18
	ctx.lr = 0x823F2C70;
	sub_82241D18(ctx, base);
loc_823F2C70:
	// addi r4,r1,136
	ctx.r4.s64 = ctx.r1.s64 + 136;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x823f62d0
	ctx.lr = 0x823F2C7C;
	sub_823F62D0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829173c0
	ctx.lr = 0x823F2C88;
	sub_829173C0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x823f2c9c
	if (!ctx.cr0.eq) goto loc_823F2C9C;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,120
	ctx.r3.s64 = ctx.r31.s64 + 120;
	// bl 0x823f6330
	ctx.lr = 0x823F2C9C;
	sub_823F6330(ctx, base);
loc_823F2C9C:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823f2cac
	if (ctx.cr6.eq) goto loc_823F2CAC;
	// bl 0x82241d18
	ctx.lr = 0x823F2CAC;
	sub_82241D18(ctx, base);
loc_823F2CAC:
	// addi r4,r1,200
	ctx.r4.s64 = ctx.r1.s64 + 200;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x823f62d0
	ctx.lr = 0x823F2CB8;
	sub_823F62D0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829173c0
	ctx.lr = 0x823F2CC4;
	sub_829173C0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x823f2cd8
	if (!ctx.cr0.eq) goto loc_823F2CD8;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,128
	ctx.r3.s64 = ctx.r31.s64 + 128;
	// bl 0x823f6330
	ctx.lr = 0x823F2CD8;
	sub_823F6330(ctx, base);
loc_823F2CD8:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823f2ce8
	if (ctx.cr6.eq) goto loc_823F2CE8;
	// bl 0x82241d18
	ctx.lr = 0x823F2CE8;
	sub_82241D18(ctx, base);
loc_823F2CE8:
	// addi r4,r1,440
	ctx.r4.s64 = ctx.r1.s64 + 440;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x823f62d0
	ctx.lr = 0x823F2CF4;
	sub_823F62D0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829173c0
	ctx.lr = 0x823F2D00;
	sub_829173C0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x823f2d14
	if (!ctx.cr0.eq) goto loc_823F2D14;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,136
	ctx.r3.s64 = ctx.r31.s64 + 136;
	// bl 0x823f6330
	ctx.lr = 0x823F2D14;
	sub_823F6330(ctx, base);
loc_823F2D14:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823f2d24
	if (ctx.cr6.eq) goto loc_823F2D24;
	// bl 0x82241d18
	ctx.lr = 0x823F2D24;
	sub_82241D18(ctx, base);
loc_823F2D24:
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x823f62d0
	ctx.lr = 0x823F2D30;
	sub_823F62D0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829173c0
	ctx.lr = 0x823F2D3C;
	sub_829173C0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x823f2d50
	if (!ctx.cr0.eq) goto loc_823F2D50;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,144
	ctx.r3.s64 = ctx.r31.s64 + 144;
	// bl 0x823f6330
	ctx.lr = 0x823F2D50;
	sub_823F6330(ctx, base);
loc_823F2D50:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823f2d60
	if (ctx.cr6.eq) goto loc_823F2D60;
	// bl 0x82241d18
	ctx.lr = 0x823F2D60;
	sub_82241D18(ctx, base);
loc_823F2D60:
	// addi r4,r1,392
	ctx.r4.s64 = ctx.r1.s64 + 392;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x823f62d0
	ctx.lr = 0x823F2D6C;
	sub_823F62D0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829173c0
	ctx.lr = 0x823F2D78;
	sub_829173C0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x823f2d8c
	if (!ctx.cr0.eq) goto loc_823F2D8C;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,152
	ctx.r3.s64 = ctx.r31.s64 + 152;
	// bl 0x823f6330
	ctx.lr = 0x823F2D8C;
	sub_823F6330(ctx, base);
loc_823F2D8C:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823f2d9c
	if (ctx.cr6.eq) goto loc_823F2D9C;
	// bl 0x82241d18
	ctx.lr = 0x823F2D9C;
	sub_82241D18(ctx, base);
loc_823F2D9C:
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r3,r1,1088
	ctx.r3.s64 = ctx.r1.s64 + 1088;
	// addi r4,r11,-32692
	ctx.r4.s64 = ctx.r11.s64 + -32692;
	// bl 0x822400d8
	ctx.lr = 0x823F2DAC;
	sub_822400D8(ctx, base);
	// addi r31,r28,2968
	ctx.r31.s64 = ctx.r28.s64 + 2968;
	// addi r4,r1,1088
	ctx.r4.s64 = ctx.r1.s64 + 1088;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82918c80
	ctx.lr = 0x823F2DBC;
	sub_82918C80(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,1088
	ctx.r3.s64 = ctx.r1.s64 + 1088;
	// bl 0x822402c8
	ctx.lr = 0x823F2DCC;
	sub_822402C8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x829173b8
	ctx.lr = 0x823F2DD8;
	sub_829173B8(ctx, base);
	// addi r4,r1,136
	ctx.r4.s64 = ctx.r1.s64 + 136;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x823f62d0
	ctx.lr = 0x823F2DE4;
	sub_823F62D0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829173c0
	ctx.lr = 0x823F2DF0;
	sub_829173C0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x823f2e04
	if (!ctx.cr0.eq) goto loc_823F2E04;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,104
	ctx.r3.s64 = ctx.r31.s64 + 104;
	// bl 0x823f6330
	ctx.lr = 0x823F2E04;
	sub_823F6330(ctx, base);
loc_823F2E04:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823f2e14
	if (ctx.cr6.eq) goto loc_823F2E14;
	// bl 0x82241d18
	ctx.lr = 0x823F2E14;
	sub_82241D18(ctx, base);
loc_823F2E14:
	// addi r4,r1,280
	ctx.r4.s64 = ctx.r1.s64 + 280;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x823f62d0
	ctx.lr = 0x823F2E20;
	sub_823F62D0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829173c0
	ctx.lr = 0x823F2E2C;
	sub_829173C0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x823f2e40
	if (!ctx.cr0.eq) goto loc_823F2E40;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,112
	ctx.r3.s64 = ctx.r31.s64 + 112;
	// bl 0x823f6330
	ctx.lr = 0x823F2E40;
	sub_823F6330(ctx, base);
loc_823F2E40:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823f2e50
	if (ctx.cr6.eq) goto loc_823F2E50;
	// bl 0x82241d18
	ctx.lr = 0x823F2E50;
	sub_82241D18(ctx, base);
loc_823F2E50:
	// addi r4,r1,448
	ctx.r4.s64 = ctx.r1.s64 + 448;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x823f62d0
	ctx.lr = 0x823F2E5C;
	sub_823F62D0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829173c0
	ctx.lr = 0x823F2E68;
	sub_829173C0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x823f2e7c
	if (!ctx.cr0.eq) goto loc_823F2E7C;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,120
	ctx.r3.s64 = ctx.r31.s64 + 120;
	// bl 0x823f6330
	ctx.lr = 0x823F2E7C;
	sub_823F6330(ctx, base);
loc_823F2E7C:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823f2e8c
	if (ctx.cr6.eq) goto loc_823F2E8C;
	// bl 0x82241d18
	ctx.lr = 0x823F2E8C;
	sub_82241D18(ctx, base);
loc_823F2E8C:
	// addi r4,r1,184
	ctx.r4.s64 = ctx.r1.s64 + 184;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x823f62d0
	ctx.lr = 0x823F2E98;
	sub_823F62D0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829173c0
	ctx.lr = 0x823F2EA4;
	sub_829173C0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x823f2eb8
	if (!ctx.cr0.eq) goto loc_823F2EB8;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,128
	ctx.r3.s64 = ctx.r31.s64 + 128;
	// bl 0x823f6330
	ctx.lr = 0x823F2EB8;
	sub_823F6330(ctx, base);
loc_823F2EB8:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823f2ec8
	if (ctx.cr6.eq) goto loc_823F2EC8;
	// bl 0x82241d18
	ctx.lr = 0x823F2EC8;
	sub_82241D18(ctx, base);
loc_823F2EC8:
	// addi r4,r1,456
	ctx.r4.s64 = ctx.r1.s64 + 456;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x823f62d0
	ctx.lr = 0x823F2ED4;
	sub_823F62D0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829173c0
	ctx.lr = 0x823F2EE0;
	sub_829173C0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x823f2ef4
	if (!ctx.cr0.eq) goto loc_823F2EF4;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,136
	ctx.r3.s64 = ctx.r31.s64 + 136;
	// bl 0x823f6330
	ctx.lr = 0x823F2EF4;
	sub_823F6330(ctx, base);
loc_823F2EF4:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823f2f04
	if (ctx.cr6.eq) goto loc_823F2F04;
	// bl 0x82241d18
	ctx.lr = 0x823F2F04;
	sub_82241D18(ctx, base);
loc_823F2F04:
	// addi r4,r1,424
	ctx.r4.s64 = ctx.r1.s64 + 424;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x823f62d0
	ctx.lr = 0x823F2F10;
	sub_823F62D0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829173c0
	ctx.lr = 0x823F2F1C;
	sub_829173C0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x823f2f30
	if (!ctx.cr0.eq) goto loc_823F2F30;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,144
	ctx.r3.s64 = ctx.r31.s64 + 144;
	// bl 0x823f6330
	ctx.lr = 0x823F2F30;
	sub_823F6330(ctx, base);
loc_823F2F30:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823f2f40
	if (ctx.cr6.eq) goto loc_823F2F40;
	// bl 0x82241d18
	ctx.lr = 0x823F2F40;
	sub_82241D18(ctx, base);
loc_823F2F40:
	// addi r4,r1,392
	ctx.r4.s64 = ctx.r1.s64 + 392;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x823f62d0
	ctx.lr = 0x823F2F4C;
	sub_823F62D0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829173c0
	ctx.lr = 0x823F2F58;
	sub_829173C0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x823f2f6c
	if (!ctx.cr0.eq) goto loc_823F2F6C;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,152
	ctx.r3.s64 = ctx.r31.s64 + 152;
	// bl 0x823f6330
	ctx.lr = 0x823F2F6C;
	sub_823F6330(ctx, base);
loc_823F2F6C:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823f2f7c
	if (ctx.cr6.eq) goto loc_823F2F7C;
	// bl 0x82241d18
	ctx.lr = 0x823F2F7C;
	sub_82241D18(ctx, base);
loc_823F2F7C:
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r3,r1,1152
	ctx.r3.s64 = ctx.r1.s64 + 1152;
	// addi r4,r11,-32660
	ctx.r4.s64 = ctx.r11.s64 + -32660;
	// bl 0x822400d8
	ctx.lr = 0x823F2F8C;
	sub_822400D8(ctx, base);
	// addi r31,r28,3128
	ctx.r31.s64 = ctx.r28.s64 + 3128;
	// addi r4,r1,1152
	ctx.r4.s64 = ctx.r1.s64 + 1152;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82918c80
	ctx.lr = 0x823F2F9C;
	sub_82918C80(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,1152
	ctx.r3.s64 = ctx.r1.s64 + 1152;
	// bl 0x822402c8
	ctx.lr = 0x823F2FAC;
	sub_822402C8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x829173b8
	ctx.lr = 0x823F2FB8;
	sub_829173B8(ctx, base);
	// addi r4,r1,136
	ctx.r4.s64 = ctx.r1.s64 + 136;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x823f62d0
	ctx.lr = 0x823F2FC4;
	sub_823F62D0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829173c0
	ctx.lr = 0x823F2FD0;
	sub_829173C0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x823f2fe4
	if (!ctx.cr0.eq) goto loc_823F2FE4;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,104
	ctx.r3.s64 = ctx.r31.s64 + 104;
	// bl 0x823f6330
	ctx.lr = 0x823F2FE4;
	sub_823F6330(ctx, base);
loc_823F2FE4:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823f2ff4
	if (ctx.cr6.eq) goto loc_823F2FF4;
	// bl 0x82241d18
	ctx.lr = 0x823F2FF4;
	sub_82241D18(ctx, base);
loc_823F2FF4:
	// addi r4,r1,280
	ctx.r4.s64 = ctx.r1.s64 + 280;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x823f62d0
	ctx.lr = 0x823F3000;
	sub_823F62D0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829173c0
	ctx.lr = 0x823F300C;
	sub_829173C0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x823f3020
	if (!ctx.cr0.eq) goto loc_823F3020;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,112
	ctx.r3.s64 = ctx.r31.s64 + 112;
	// bl 0x823f6330
	ctx.lr = 0x823F3020;
	sub_823F6330(ctx, base);
loc_823F3020:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823f3030
	if (ctx.cr6.eq) goto loc_823F3030;
	// bl 0x82241d18
	ctx.lr = 0x823F3030;
	sub_82241D18(ctx, base);
loc_823F3030:
	// addi r4,r1,168
	ctx.r4.s64 = ctx.r1.s64 + 168;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x823f62d0
	ctx.lr = 0x823F303C;
	sub_823F62D0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829173c0
	ctx.lr = 0x823F3048;
	sub_829173C0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x823f305c
	if (!ctx.cr0.eq) goto loc_823F305C;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,120
	ctx.r3.s64 = ctx.r31.s64 + 120;
	// bl 0x823f6330
	ctx.lr = 0x823F305C;
	sub_823F6330(ctx, base);
loc_823F305C:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823f306c
	if (ctx.cr6.eq) goto loc_823F306C;
	// bl 0x82241d18
	ctx.lr = 0x823F306C;
	sub_82241D18(ctx, base);
loc_823F306C:
	// addi r4,r1,168
	ctx.r4.s64 = ctx.r1.s64 + 168;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x823f62d0
	ctx.lr = 0x823F3078;
	sub_823F62D0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829173c0
	ctx.lr = 0x823F3084;
	sub_829173C0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x823f3098
	if (!ctx.cr0.eq) goto loc_823F3098;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,128
	ctx.r3.s64 = ctx.r31.s64 + 128;
	// bl 0x823f6330
	ctx.lr = 0x823F3098;
	sub_823F6330(ctx, base);
loc_823F3098:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823f30a8
	if (ctx.cr6.eq) goto loc_823F30A8;
	// bl 0x82241d18
	ctx.lr = 0x823F30A8;
	sub_82241D18(ctx, base);
loc_823F30A8:
	// addi r4,r1,224
	ctx.r4.s64 = ctx.r1.s64 + 224;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x823f62d0
	ctx.lr = 0x823F30B4;
	sub_823F62D0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829173c0
	ctx.lr = 0x823F30C0;
	sub_829173C0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x823f30d4
	if (!ctx.cr0.eq) goto loc_823F30D4;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,136
	ctx.r3.s64 = ctx.r31.s64 + 136;
	// bl 0x823f6330
	ctx.lr = 0x823F30D4;
	sub_823F6330(ctx, base);
loc_823F30D4:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823f30e4
	if (ctx.cr6.eq) goto loc_823F30E4;
	// bl 0x82241d18
	ctx.lr = 0x823F30E4;
	sub_82241D18(ctx, base);
loc_823F30E4:
	// addi r4,r1,392
	ctx.r4.s64 = ctx.r1.s64 + 392;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x823f62d0
	ctx.lr = 0x823F30F0;
	sub_823F62D0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829173c0
	ctx.lr = 0x823F30FC;
	sub_829173C0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x823f3110
	if (!ctx.cr0.eq) goto loc_823F3110;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,144
	ctx.r3.s64 = ctx.r31.s64 + 144;
	// bl 0x823f6330
	ctx.lr = 0x823F3110;
	sub_823F6330(ctx, base);
loc_823F3110:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823f3120
	if (ctx.cr6.eq) goto loc_823F3120;
	// bl 0x82241d18
	ctx.lr = 0x823F3120;
	sub_82241D18(ctx, base);
loc_823F3120:
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r3,r1,1216
	ctx.r3.s64 = ctx.r1.s64 + 1216;
	// addi r4,r11,-32632
	ctx.r4.s64 = ctx.r11.s64 + -32632;
	// bl 0x822400d8
	ctx.lr = 0x823F3130;
	sub_822400D8(ctx, base);
	// addi r31,r28,3280
	ctx.r31.s64 = ctx.r28.s64 + 3280;
	// addi r4,r1,1216
	ctx.r4.s64 = ctx.r1.s64 + 1216;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82918c80
	ctx.lr = 0x823F3140;
	sub_82918C80(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,1216
	ctx.r3.s64 = ctx.r1.s64 + 1216;
	// bl 0x822402c8
	ctx.lr = 0x823F3150;
	sub_822402C8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x829173b8
	ctx.lr = 0x823F315C;
	sub_829173B8(ctx, base);
	// addi r4,r1,240
	ctx.r4.s64 = ctx.r1.s64 + 240;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x823f62d0
	ctx.lr = 0x823F3168;
	sub_823F62D0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829173c0
	ctx.lr = 0x823F3174;
	sub_829173C0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x823f3188
	if (!ctx.cr0.eq) goto loc_823F3188;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,104
	ctx.r3.s64 = ctx.r31.s64 + 104;
	// bl 0x823f6330
	ctx.lr = 0x823F3188;
	sub_823F6330(ctx, base);
loc_823F3188:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823f3198
	if (ctx.cr6.eq) goto loc_823F3198;
	// bl 0x82241d18
	ctx.lr = 0x823F3198;
	sub_82241D18(ctx, base);
loc_823F3198:
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r3,r1,1280
	ctx.r3.s64 = ctx.r1.s64 + 1280;
	// addi r4,r11,-32608
	ctx.r4.s64 = ctx.r11.s64 + -32608;
	// bl 0x822400d8
	ctx.lr = 0x823F31A8;
	sub_822400D8(ctx, base);
	// addi r31,r28,3392
	ctx.r31.s64 = ctx.r28.s64 + 3392;
	// addi r4,r1,1280
	ctx.r4.s64 = ctx.r1.s64 + 1280;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82918c80
	ctx.lr = 0x823F31B8;
	sub_82918C80(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,1280
	ctx.r3.s64 = ctx.r1.s64 + 1280;
	// bl 0x822402c8
	ctx.lr = 0x823F31C8;
	sub_822402C8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x829173b8
	ctx.lr = 0x823F31D4;
	sub_829173B8(ctx, base);
	// addi r4,r1,232
	ctx.r4.s64 = ctx.r1.s64 + 232;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x823f62d0
	ctx.lr = 0x823F31E0;
	sub_823F62D0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829173c0
	ctx.lr = 0x823F31EC;
	sub_829173C0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x823f3200
	if (!ctx.cr0.eq) goto loc_823F3200;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,104
	ctx.r3.s64 = ctx.r31.s64 + 104;
	// bl 0x823f6330
	ctx.lr = 0x823F3200;
	sub_823F6330(ctx, base);
loc_823F3200:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823f3210
	if (ctx.cr6.eq) goto loc_823F3210;
	// bl 0x82241d18
	ctx.lr = 0x823F3210;
	sub_82241D18(ctx, base);
loc_823F3210:
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r3,r1,1344
	ctx.r3.s64 = ctx.r1.s64 + 1344;
	// addi r4,r11,-32580
	ctx.r4.s64 = ctx.r11.s64 + -32580;
	// bl 0x822400d8
	ctx.lr = 0x823F3220;
	sub_822400D8(ctx, base);
	// addi r31,r28,3504
	ctx.r31.s64 = ctx.r28.s64 + 3504;
	// addi r4,r1,1344
	ctx.r4.s64 = ctx.r1.s64 + 1344;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82918c80
	ctx.lr = 0x823F3230;
	sub_82918C80(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,1344
	ctx.r3.s64 = ctx.r1.s64 + 1344;
	// bl 0x822402c8
	ctx.lr = 0x823F3240;
	sub_822402C8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x829173b8
	ctx.lr = 0x823F324C;
	sub_829173B8(ctx, base);
	// addi r4,r1,168
	ctx.r4.s64 = ctx.r1.s64 + 168;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x823f62d0
	ctx.lr = 0x823F3258;
	sub_823F62D0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829173c0
	ctx.lr = 0x823F3264;
	sub_829173C0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x823f3278
	if (!ctx.cr0.eq) goto loc_823F3278;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,104
	ctx.r3.s64 = ctx.r31.s64 + 104;
	// bl 0x823f6330
	ctx.lr = 0x823F3278;
	sub_823F6330(ctx, base);
loc_823F3278:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823f3288
	if (ctx.cr6.eq) goto loc_823F3288;
	// bl 0x82241d18
	ctx.lr = 0x823F3288;
	sub_82241D18(ctx, base);
loc_823F3288:
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x823f62d0
	ctx.lr = 0x823F3294;
	sub_823F62D0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829173c0
	ctx.lr = 0x823F32A0;
	sub_829173C0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x823f32b4
	if (!ctx.cr0.eq) goto loc_823F32B4;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,112
	ctx.r3.s64 = ctx.r31.s64 + 112;
	// bl 0x823f6330
	ctx.lr = 0x823F32B4;
	sub_823F6330(ctx, base);
loc_823F32B4:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823f32c4
	if (ctx.cr6.eq) goto loc_823F32C4;
	// bl 0x82241d18
	ctx.lr = 0x823F32C4;
	sub_82241D18(ctx, base);
loc_823F32C4:
	// addi r4,r1,152
	ctx.r4.s64 = ctx.r1.s64 + 152;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x823f62d0
	ctx.lr = 0x823F32D0;
	sub_823F62D0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829173c0
	ctx.lr = 0x823F32DC;
	sub_829173C0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x823f32f0
	if (!ctx.cr0.eq) goto loc_823F32F0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,120
	ctx.r3.s64 = ctx.r31.s64 + 120;
	// bl 0x823f6330
	ctx.lr = 0x823F32F0;
	sub_823F6330(ctx, base);
loc_823F32F0:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823f3300
	if (ctx.cr6.eq) goto loc_823F3300;
	// bl 0x82241d18
	ctx.lr = 0x823F3300;
	sub_82241D18(ctx, base);
loc_823F3300:
	// addi r4,r1,136
	ctx.r4.s64 = ctx.r1.s64 + 136;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x823f62d0
	ctx.lr = 0x823F330C;
	sub_823F62D0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829173c0
	ctx.lr = 0x823F3318;
	sub_829173C0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x823f332c
	if (!ctx.cr0.eq) goto loc_823F332C;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,128
	ctx.r3.s64 = ctx.r31.s64 + 128;
	// bl 0x823f6330
	ctx.lr = 0x823F332C;
	sub_823F6330(ctx, base);
loc_823F332C:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823f333c
	if (ctx.cr6.eq) goto loc_823F333C;
	// bl 0x82241d18
	ctx.lr = 0x823F333C;
	sub_82241D18(ctx, base);
loc_823F333C:
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// beq cr6,0x823f334c
	if (ctx.cr6.eq) goto loc_823F334C;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82241d18
	ctx.lr = 0x823F334C;
	sub_82241D18(ctx, base);
loc_823F334C:
	// lwz r3,220(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 220);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823f335c
	if (ctx.cr6.eq) goto loc_823F335C;
	// bl 0x82241d18
	ctx.lr = 0x823F335C;
	sub_82241D18(ctx, base);
loc_823F335C:
	// lwz r3,284(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 284);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823f336c
	if (ctx.cr6.eq) goto loc_823F336C;
	// bl 0x82241d18
	ctx.lr = 0x823F336C;
	sub_82241D18(ctx, base);
loc_823F336C:
	// lwz r3,212(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823f337c
	if (ctx.cr6.eq) goto loc_823F337C;
	// bl 0x82241d18
	ctx.lr = 0x823F337C;
	sub_82241D18(ctx, base);
loc_823F337C:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x823f338c
	if (ctx.cr6.eq) goto loc_823F338C;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82241d18
	ctx.lr = 0x823F338C;
	sub_82241D18(ctx, base);
loc_823F338C:
	// lwz r3,236(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 236);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823f339c
	if (ctx.cr6.eq) goto loc_823F339C;
	// bl 0x82241d18
	ctx.lr = 0x823F339C;
	sub_82241D18(ctx, base);
loc_823F339C:
	// lwz r3,244(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823f33ac
	if (ctx.cr6.eq) goto loc_823F33AC;
	// bl 0x82241d18
	ctx.lr = 0x823F33AC;
	sub_82241D18(ctx, base);
loc_823F33AC:
	// lwz r3,228(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823f33bc
	if (ctx.cr6.eq) goto loc_823F33BC;
	// bl 0x82241d18
	ctx.lr = 0x823F33BC;
	sub_82241D18(ctx, base);
loc_823F33BC:
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// beq cr6,0x823f33cc
	if (ctx.cr6.eq) goto loc_823F33CC;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82241d18
	ctx.lr = 0x823F33CC;
	sub_82241D18(ctx, base);
loc_823F33CC:
	// lwz r3,260(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 260);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823f33dc
	if (ctx.cr6.eq) goto loc_823F33DC;
	// bl 0x82241d18
	ctx.lr = 0x823F33DC;
	sub_82241D18(ctx, base);
loc_823F33DC:
	// lwz r3,252(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 252);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823f33ec
	if (ctx.cr6.eq) goto loc_823F33EC;
	// bl 0x82241d18
	ctx.lr = 0x823F33EC;
	sub_82241D18(ctx, base);
loc_823F33EC:
	// lwz r3,428(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 428);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823f33fc
	if (ctx.cr6.eq) goto loc_823F33FC;
	// bl 0x82241d18
	ctx.lr = 0x823F33FC;
	sub_82241D18(ctx, base);
loc_823F33FC:
	// cmplwi cr6,r16,0
	ctx.cr6.compare<uint32_t>(ctx.r16.u32, 0, ctx.xer);
	// beq cr6,0x823f340c
	if (ctx.cr6.eq) goto loc_823F340C;
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
	// bl 0x82241d18
	ctx.lr = 0x823F340C;
	sub_82241D18(ctx, base);
loc_823F340C:
	// cmplwi cr6,r14,0
	ctx.cr6.compare<uint32_t>(ctx.r14.u32, 0, ctx.xer);
	// beq cr6,0x823f341c
	if (ctx.cr6.eq) goto loc_823F341C;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x82241d18
	ctx.lr = 0x823F341C;
	sub_82241D18(ctx, base);
loc_823F341C:
	// lwz r3,164(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823f342c
	if (ctx.cr6.eq) goto loc_823F342C;
	// bl 0x82241d18
	ctx.lr = 0x823F342C;
	sub_82241D18(ctx, base);
loc_823F342C:
	// lwz r3,468(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 468);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823f343c
	if (ctx.cr6.eq) goto loc_823F343C;
	// bl 0x82241d18
	ctx.lr = 0x823F343C;
	sub_82241D18(ctx, base);
loc_823F343C:
	// lwz r3,188(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 188);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823f344c
	if (ctx.cr6.eq) goto loc_823F344C;
	// bl 0x82241d18
	ctx.lr = 0x823F344C;
	sub_82241D18(ctx, base);
loc_823F344C:
	// lwz r3,460(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 460);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823f345c
	if (ctx.cr6.eq) goto loc_823F345C;
	// bl 0x82241d18
	ctx.lr = 0x823F345C;
	sub_82241D18(ctx, base);
loc_823F345C:
	// lwz r3,436(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 436);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823f346c
	if (ctx.cr6.eq) goto loc_823F346C;
	// bl 0x82241d18
	ctx.lr = 0x823F346C;
	sub_82241D18(ctx, base);
loc_823F346C:
	// lwz r3,192(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 192);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823f347c
	if (ctx.cr6.eq) goto loc_823F347C;
	// bl 0x82241d18
	ctx.lr = 0x823F347C;
	sub_82241D18(ctx, base);
loc_823F347C:
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, 0, ctx.xer);
	// beq cr6,0x823f348c
	if (ctx.cr6.eq) goto loc_823F348C;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x82241d18
	ctx.lr = 0x823F348C;
	sub_82241D18(ctx, base);
loc_823F348C:
	// lwz r3,264(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 264);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823f349c
	if (ctx.cr6.eq) goto loc_823F349C;
	// bl 0x82241d18
	ctx.lr = 0x823F349C;
	sub_82241D18(ctx, base);
loc_823F349C:
	// lwz r3,336(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 336);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823f34ac
	if (ctx.cr6.eq) goto loc_823F34AC;
	// bl 0x82241d18
	ctx.lr = 0x823F34AC;
	sub_82241D18(ctx, base);
loc_823F34AC:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x823f34bc
	if (ctx.cr6.eq) goto loc_823F34BC;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82241d18
	ctx.lr = 0x823F34BC;
	sub_82241D18(ctx, base);
loc_823F34BC:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x823f34cc
	if (ctx.cr6.eq) goto loc_823F34CC;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82241d18
	ctx.lr = 0x823F34CC;
	sub_82241D18(ctx, base);
loc_823F34CC:
	// lwz r3,176(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823f34dc
	if (ctx.cr6.eq) goto loc_823F34DC;
	// bl 0x82241d18
	ctx.lr = 0x823F34DC;
	sub_82241D18(ctx, base);
loc_823F34DC:
	// lwz r3,352(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 352);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823f34ec
	if (ctx.cr6.eq) goto loc_823F34EC;
	// bl 0x82241d18
	ctx.lr = 0x823F34EC;
	sub_82241D18(ctx, base);
loc_823F34EC:
	// lwz r3,344(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 344);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823f34fc
	if (ctx.cr6.eq) goto loc_823F34FC;
	// bl 0x82241d18
	ctx.lr = 0x823F34FC;
	sub_82241D18(ctx, base);
loc_823F34FC:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x823f350c
	if (ctx.cr6.eq) goto loc_823F350C;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82241d18
	ctx.lr = 0x823F350C;
	sub_82241D18(ctx, base);
loc_823F350C:
	// lwz r3,288(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 288);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823f351c
	if (ctx.cr6.eq) goto loc_823F351C;
	// bl 0x82241d18
	ctx.lr = 0x823F351C;
	sub_82241D18(ctx, base);
loc_823F351C:
	// cmplwi cr6,r15,0
	ctx.cr6.compare<uint32_t>(ctx.r15.u32, 0, ctx.xer);
	// beq cr6,0x823f352c
	if (ctx.cr6.eq) goto loc_823F352C;
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// bl 0x82241d18
	ctx.lr = 0x823F352C;
	sub_82241D18(ctx, base);
loc_823F352C:
	// lwz r3,340(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 340);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823f353c
	if (ctx.cr6.eq) goto loc_823F353C;
	// bl 0x82241d18
	ctx.lr = 0x823F353C;
	sub_82241D18(ctx, base);
loc_823F353C:
	// lwz r3,348(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 348);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823f354c
	if (ctx.cr6.eq) goto loc_823F354C;
	// bl 0x82241d18
	ctx.lr = 0x823F354C;
	sub_82241D18(ctx, base);
loc_823F354C:
	// lwz r3,296(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 296);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823f355c
	if (ctx.cr6.eq) goto loc_823F355C;
	// bl 0x82241d18
	ctx.lr = 0x823F355C;
	sub_82241D18(ctx, base);
loc_823F355C:
	// lwz r3,292(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 292);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823f356c
	if (ctx.cr6.eq) goto loc_823F356C;
	// bl 0x82241d18
	ctx.lr = 0x823F356C;
	sub_82241D18(ctx, base);
loc_823F356C:
	// lwz r3,328(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 328);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823f357c
	if (ctx.cr6.eq) goto loc_823F357C;
	// bl 0x82241d18
	ctx.lr = 0x823F357C;
	sub_82241D18(ctx, base);
loc_823F357C:
	// lwz r3,368(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 368);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823f358c
	if (ctx.cr6.eq) goto loc_823F358C;
	// bl 0x82241d18
	ctx.lr = 0x823F358C;
	sub_82241D18(ctx, base);
loc_823F358C:
	// lwz r3,324(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 324);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823f359c
	if (ctx.cr6.eq) goto loc_823F359C;
	// bl 0x82241d18
	ctx.lr = 0x823F359C;
	sub_82241D18(ctx, base);
loc_823F359C:
	// lwz r3,268(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 268);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823f35ac
	if (ctx.cr6.eq) goto loc_823F35AC;
	// bl 0x82241d18
	ctx.lr = 0x823F35AC;
	sub_82241D18(ctx, base);
loc_823F35AC:
	// lwz r3,172(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823f35bc
	if (ctx.cr6.eq) goto loc_823F35BC;
	// bl 0x82241d18
	ctx.lr = 0x823F35BC;
	sub_82241D18(ctx, base);
loc_823F35BC:
	// lwz r3,140(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823f35cc
	if (ctx.cr6.eq) goto loc_823F35CC;
	// bl 0x82241d18
	ctx.lr = 0x823F35CC;
	sub_82241D18(ctx, base);
loc_823F35CC:
	// addi r1,r1,1536
	ctx.r1.s64 = ctx.r1.s64 + 1536;
	// b 0x82fa7690
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823F35D4"))) PPC_WEAK_FUNC(sub_823F35D4);
PPC_FUNC_IMPL(__imp__sub_823F35D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823F35D8"))) PPC_WEAK_FUNC(sub_823F35D8);
PPC_FUNC_IMPL(__imp__sub_823F35D8) {
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
	ctx.lr = 0x823F35F8;
	sub_828B2440(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r31,40
	ctx.r4.s64 = ctx.r31.s64 + 40;
	// bl 0x82917768
	ctx.lr = 0x823F3604;
	sub_82917768(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r31,168
	ctx.r4.s64 = ctx.r31.s64 + 168;
	// bl 0x82917768
	ctx.lr = 0x823F3610;
	sub_82917768(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r31,288
	ctx.r4.s64 = ctx.r31.s64 + 288;
	// bl 0x82917768
	ctx.lr = 0x823F361C;
	sub_82917768(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r31,400
	ctx.r4.s64 = ctx.r31.s64 + 400;
	// bl 0x82917768
	ctx.lr = 0x823F3628;
	sub_82917768(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r31,624
	ctx.r4.s64 = ctx.r31.s64 + 624;
	// bl 0x82917768
	ctx.lr = 0x823F3634;
	sub_82917768(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r31,744
	ctx.r4.s64 = ctx.r31.s64 + 744;
	// bl 0x82917768
	ctx.lr = 0x823F3640;
	sub_82917768(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r31,864
	ctx.r4.s64 = ctx.r31.s64 + 864;
	// bl 0x82917768
	ctx.lr = 0x823F364C;
	sub_82917768(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r31,984
	ctx.r4.s64 = ctx.r31.s64 + 984;
	// bl 0x82917768
	ctx.lr = 0x823F3658;
	sub_82917768(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r31,512
	ctx.r4.s64 = ctx.r31.s64 + 512;
	// bl 0x82917768
	ctx.lr = 0x823F3664;
	sub_82917768(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r31,1104
	ctx.r4.s64 = ctx.r31.s64 + 1104;
	// bl 0x82917768
	ctx.lr = 0x823F3670;
	sub_82917768(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r31,1224
	ctx.r4.s64 = ctx.r31.s64 + 1224;
	// bl 0x82917768
	ctx.lr = 0x823F367C;
	sub_82917768(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r31,1344
	ctx.r4.s64 = ctx.r31.s64 + 1344;
	// bl 0x82917768
	ctx.lr = 0x823F3688;
	sub_82917768(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r31,1456
	ctx.r4.s64 = ctx.r31.s64 + 1456;
	// bl 0x82917768
	ctx.lr = 0x823F3694;
	sub_82917768(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r31,1560
	ctx.r4.s64 = ctx.r31.s64 + 1560;
	// bl 0x82917768
	ctx.lr = 0x823F36A0;
	sub_82917768(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r31,1680
	ctx.r4.s64 = ctx.r31.s64 + 1680;
	// bl 0x82917768
	ctx.lr = 0x823F36AC;
	sub_82917768(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r31,1808
	ctx.r4.s64 = ctx.r31.s64 + 1808;
	// bl 0x82917768
	ctx.lr = 0x823F36B8;
	sub_82917768(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r31,1912
	ctx.r4.s64 = ctx.r31.s64 + 1912;
	// bl 0x82917768
	ctx.lr = 0x823F36C4;
	sub_82917768(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r31,2032
	ctx.r4.s64 = ctx.r31.s64 + 2032;
	// bl 0x82917768
	ctx.lr = 0x823F36D0;
	sub_82917768(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r31,2192
	ctx.r4.s64 = ctx.r31.s64 + 2192;
	// bl 0x82917768
	ctx.lr = 0x823F36DC;
	sub_82917768(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r31,2352
	ctx.r4.s64 = ctx.r31.s64 + 2352;
	// bl 0x82917768
	ctx.lr = 0x823F36E8;
	sub_82917768(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r31,2496
	ctx.r4.s64 = ctx.r31.s64 + 2496;
	// bl 0x82917768
	ctx.lr = 0x823F36F4;
	sub_82917768(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r31,2648
	ctx.r4.s64 = ctx.r31.s64 + 2648;
	// bl 0x82917768
	ctx.lr = 0x823F3700;
	sub_82917768(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r31,2808
	ctx.r4.s64 = ctx.r31.s64 + 2808;
	// bl 0x82917768
	ctx.lr = 0x823F370C;
	sub_82917768(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r31,2968
	ctx.r4.s64 = ctx.r31.s64 + 2968;
	// bl 0x82917768
	ctx.lr = 0x823F3718;
	sub_82917768(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r31,3128
	ctx.r4.s64 = ctx.r31.s64 + 3128;
	// bl 0x82917768
	ctx.lr = 0x823F3724;
	sub_82917768(ctx, base);
	// addi r4,r31,3280
	ctx.r4.s64 = ctx.r31.s64 + 3280;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82917768
	ctx.lr = 0x823F3730;
	sub_82917768(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r31,3392
	ctx.r4.s64 = ctx.r31.s64 + 3392;
	// bl 0x82917768
	ctx.lr = 0x823F373C;
	sub_82917768(ctx, base);
	// addi r4,r31,3504
	ctx.r4.s64 = ctx.r31.s64 + 3504;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82917768
	ctx.lr = 0x823F3748;
	sub_82917768(ctx, base);
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

__attribute__((alias("__imp__sub_823F3760"))) PPC_WEAK_FUNC(sub_823F3760);
PPC_FUNC_IMPL(__imp__sub_823F3760) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x823F3768;
	__savegprlr_29(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r29,r3,96
	ctx.r29.s64 = ctx.r3.s64 + 96;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x823f37b8
	if (ctx.cr6.eq) goto loc_823F37B8;
	// lwz r3,16(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823f37b4
	if (ctx.cr6.eq) goto loc_823F37B4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// subf r10,r3,r29
	ctx.r10.s64 = ctx.r29.s64 - ctx.r3.s64;
	// addic r9,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// subfe r4,r9,r10
	temp.u8 = (~ctx.r9.u32 + ctx.r10.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r4.u64 = ~ctx.r9.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823F37B0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r31,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r31.u32);
loc_823F37B4:
	// stw r31,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r31.u32);
loc_823F37B8:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82f91940
	ctx.lr = 0x823F37C0;
	sub_82F91940(ctx, base);
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r30,40
	ctx.r3.s64 = ctx.r30.s64 + 40;
	// bl 0x823f64c8
	ctx.lr = 0x823F37D0;
	sub_823F64C8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82f91940
	ctx.lr = 0x823F37D8;
	sub_82F91940(ctx, base);
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// addi r29,r30,168
	ctx.r29.s64 = ctx.r30.s64 + 168;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823f6430
	ctx.lr = 0x823F37EC;
	sub_823F6430(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82f91940
	ctx.lr = 0x823F37F4;
	sub_82F91940(ctx, base);
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823f64c8
	ctx.lr = 0x823F3804;
	sub_823F64C8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82f91940
	ctx.lr = 0x823F380C;
	sub_82F91940(ctx, base);
	// addi r29,r30,344
	ctx.r29.s64 = ctx.r30.s64 + 344;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x823f3850
	if (ctx.cr6.eq) goto loc_823F3850;
	// lwz r3,16(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823f384c
	if (ctx.cr6.eq) goto loc_823F384C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// subf r10,r3,r29
	ctx.r10.s64 = ctx.r29.s64 - ctx.r3.s64;
	// addic r9,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// subfe r4,r9,r10
	temp.u8 = (~ctx.r9.u32 + ctx.r10.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r4.u64 = ~ctx.r9.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823F3848;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r31,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r31.u32);
loc_823F384C:
	// stw r31,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r31.u32);
loc_823F3850:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82f91940
	ctx.lr = 0x823F3858;
	sub_82F91940(ctx, base);
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r30,288
	ctx.r3.s64 = ctx.r30.s64 + 288;
	// bl 0x823f64c8
	ctx.lr = 0x823F3868;
	sub_823F64C8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82f91940
	ctx.lr = 0x823F3870;
	sub_82F91940(ctx, base);
	// addi r29,r30,456
	ctx.r29.s64 = ctx.r30.s64 + 456;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x823f38b4
	if (ctx.cr6.eq) goto loc_823F38B4;
	// lwz r3,16(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823f38b0
	if (ctx.cr6.eq) goto loc_823F38B0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// subf r10,r3,r29
	ctx.r10.s64 = ctx.r29.s64 - ctx.r3.s64;
	// addic r9,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// subfe r4,r9,r10
	temp.u8 = (~ctx.r9.u32 + ctx.r10.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r4.u64 = ~ctx.r9.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823F38AC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r31,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r31.u32);
loc_823F38B0:
	// stw r31,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r31.u32);
loc_823F38B4:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82f91940
	ctx.lr = 0x823F38BC;
	sub_82F91940(ctx, base);
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r30,400
	ctx.r3.s64 = ctx.r30.s64 + 400;
	// bl 0x823f64c8
	ctx.lr = 0x823F38CC;
	sub_823F64C8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82f91940
	ctx.lr = 0x823F38D4;
	sub_82F91940(ctx, base);
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// addi r29,r30,624
	ctx.r29.s64 = ctx.r30.s64 + 624;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823f6430
	ctx.lr = 0x823F38E8;
	sub_823F6430(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82f91940
	ctx.lr = 0x823F38F0;
	sub_82F91940(ctx, base);
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823f64c8
	ctx.lr = 0x823F3900;
	sub_823F64C8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82f91940
	ctx.lr = 0x823F3908;
	sub_82F91940(ctx, base);
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// addi r29,r30,744
	ctx.r29.s64 = ctx.r30.s64 + 744;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823f6430
	ctx.lr = 0x823F391C;
	sub_823F6430(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82f91940
	ctx.lr = 0x823F3924;
	sub_82F91940(ctx, base);
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823f64c8
	ctx.lr = 0x823F3934;
	sub_823F64C8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82f91940
	ctx.lr = 0x823F393C;
	sub_82F91940(ctx, base);
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// addi r29,r30,864
	ctx.r29.s64 = ctx.r30.s64 + 864;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823f6430
	ctx.lr = 0x823F3950;
	sub_823F6430(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82f91940
	ctx.lr = 0x823F3958;
	sub_82F91940(ctx, base);
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823f64c8
	ctx.lr = 0x823F3968;
	sub_823F64C8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82f91940
	ctx.lr = 0x823F3970;
	sub_82F91940(ctx, base);
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// addi r29,r30,984
	ctx.r29.s64 = ctx.r30.s64 + 984;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823f6430
	ctx.lr = 0x823F3984;
	sub_823F6430(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82f91940
	ctx.lr = 0x823F398C;
	sub_82F91940(ctx, base);
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823f64c8
	ctx.lr = 0x823F399C;
	sub_823F64C8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82f91940
	ctx.lr = 0x823F39A4;
	sub_82F91940(ctx, base);
	// addi r29,r30,568
	ctx.r29.s64 = ctx.r30.s64 + 568;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x823f39e8
	if (ctx.cr6.eq) goto loc_823F39E8;
	// lwz r3,16(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823f39e4
	if (ctx.cr6.eq) goto loc_823F39E4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// subf r10,r3,r29
	ctx.r10.s64 = ctx.r29.s64 - ctx.r3.s64;
	// addic r9,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// subfe r4,r9,r10
	temp.u8 = (~ctx.r9.u32 + ctx.r10.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r4.u64 = ~ctx.r9.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823F39E0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r31,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r31.u32);
loc_823F39E4:
	// stw r31,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r31.u32);
loc_823F39E8:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82f91940
	ctx.lr = 0x823F39F0;
	sub_82F91940(ctx, base);
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r30,512
	ctx.r3.s64 = ctx.r30.s64 + 512;
	// bl 0x823f64c8
	ctx.lr = 0x823F3A00;
	sub_823F64C8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82f91940
	ctx.lr = 0x823F3A08;
	sub_82F91940(ctx, base);
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// addi r29,r30,1104
	ctx.r29.s64 = ctx.r30.s64 + 1104;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823f6430
	ctx.lr = 0x823F3A1C;
	sub_823F6430(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82f91940
	ctx.lr = 0x823F3A24;
	sub_82F91940(ctx, base);
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823f64c8
	ctx.lr = 0x823F3A34;
	sub_823F64C8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82f91940
	ctx.lr = 0x823F3A3C;
	sub_82F91940(ctx, base);
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// addi r29,r30,1224
	ctx.r29.s64 = ctx.r30.s64 + 1224;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823f6430
	ctx.lr = 0x823F3A50;
	sub_823F6430(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82f91940
	ctx.lr = 0x823F3A58;
	sub_82F91940(ctx, base);
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823f64c8
	ctx.lr = 0x823F3A68;
	sub_823F64C8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82f91940
	ctx.lr = 0x823F3A70;
	sub_82F91940(ctx, base);
	// addi r29,r30,1400
	ctx.r29.s64 = ctx.r30.s64 + 1400;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x823f3ab4
	if (ctx.cr6.eq) goto loc_823F3AB4;
	// lwz r3,16(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823f3ab0
	if (ctx.cr6.eq) goto loc_823F3AB0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// subf r10,r3,r29
	ctx.r10.s64 = ctx.r29.s64 - ctx.r3.s64;
	// addic r9,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// subfe r4,r9,r10
	temp.u8 = (~ctx.r9.u32 + ctx.r10.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r4.u64 = ~ctx.r9.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823F3AAC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r31,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r31.u32);
loc_823F3AB0:
	// stw r31,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r31.u32);
loc_823F3AB4:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82f91940
	ctx.lr = 0x823F3ABC;
	sub_82F91940(ctx, base);
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r30,1344
	ctx.r3.s64 = ctx.r30.s64 + 1344;
	// bl 0x823f64c8
	ctx.lr = 0x823F3ACC;
	sub_823F64C8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82f91940
	ctx.lr = 0x823F3AD4;
	sub_82F91940(ctx, base);
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// addi r29,r30,1456
	ctx.r29.s64 = ctx.r30.s64 + 1456;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823f63a0
	ctx.lr = 0x823F3AE8;
	sub_823F63A0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82f91940
	ctx.lr = 0x823F3AF0;
	sub_82F91940(ctx, base);
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82372360
	ctx.lr = 0x823F3B00;
	sub_82372360(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82f91940
	ctx.lr = 0x823F3B08;
	sub_82F91940(ctx, base);
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// addi r29,r30,1560
	ctx.r29.s64 = ctx.r30.s64 + 1560;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823f6430
	ctx.lr = 0x823F3B1C;
	sub_823F6430(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82f91940
	ctx.lr = 0x823F3B24;
	sub_82F91940(ctx, base);
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823f64c8
	ctx.lr = 0x823F3B34;
	sub_823F64C8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82f91940
	ctx.lr = 0x823F3B3C;
	sub_82F91940(ctx, base);
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// addi r29,r30,1680
	ctx.r29.s64 = ctx.r30.s64 + 1680;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823f6430
	ctx.lr = 0x823F3B50;
	sub_823F6430(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82f91940
	ctx.lr = 0x823F3B58;
	sub_82F91940(ctx, base);
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823f64c8
	ctx.lr = 0x823F3B68;
	sub_823F64C8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82f91940
	ctx.lr = 0x823F3B70;
	sub_82F91940(ctx, base);
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// addi r29,r30,1808
	ctx.r29.s64 = ctx.r30.s64 + 1808;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823f63a0
	ctx.lr = 0x823F3B84;
	sub_823F63A0(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82f91940
	ctx.lr = 0x823F3B8C;
	sub_82F91940(ctx, base);
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82372360
	ctx.lr = 0x823F3B9C;
	sub_82372360(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82f91940
	ctx.lr = 0x823F3BA4;
	sub_82F91940(ctx, base);
	// addi r29,r30,1968
	ctx.r29.s64 = ctx.r30.s64 + 1968;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x823f3be8
	if (ctx.cr6.eq) goto loc_823F3BE8;
	// lwz r3,16(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823f3be4
	if (ctx.cr6.eq) goto loc_823F3BE4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// subf r10,r3,r29
	ctx.r10.s64 = ctx.r29.s64 - ctx.r3.s64;
	// addic r9,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// subfe r4,r9,r10
	temp.u8 = (~ctx.r9.u32 + ctx.r10.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r4.u64 = ~ctx.r9.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823F3BE0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r31,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r31.u32);
loc_823F3BE4:
	// stw r31,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r31.u32);
loc_823F3BE8:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82f91940
	ctx.lr = 0x823F3BF0;
	sub_82F91940(ctx, base);
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r30,1912
	ctx.r3.s64 = ctx.r30.s64 + 1912;
	// bl 0x823f64c8
	ctx.lr = 0x823F3C00;
	sub_823F64C8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82f91940
	ctx.lr = 0x823F3C08;
	sub_82F91940(ctx, base);
	// addi r29,r30,2088
	ctx.r29.s64 = ctx.r30.s64 + 2088;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x823f3c4c
	if (ctx.cr6.eq) goto loc_823F3C4C;
	// lwz r3,16(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823f3c48
	if (ctx.cr6.eq) goto loc_823F3C48;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// subf r10,r3,r29
	ctx.r10.s64 = ctx.r29.s64 - ctx.r3.s64;
	// addic r9,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// subfe r4,r9,r10
	temp.u8 = (~ctx.r9.u32 + ctx.r10.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r4.u64 = ~ctx.r9.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823F3C44;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r31,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r31.u32);
loc_823F3C48:
	// stw r31,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r31.u32);
loc_823F3C4C:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82f91940
	ctx.lr = 0x823F3C54;
	sub_82F91940(ctx, base);
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r30,2032
	ctx.r3.s64 = ctx.r30.s64 + 2032;
	// bl 0x823f64c8
	ctx.lr = 0x823F3C64;
	sub_823F64C8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82f91940
	ctx.lr = 0x823F3C6C;
	sub_82F91940(ctx, base);
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// addi r29,r30,2192
	ctx.r29.s64 = ctx.r30.s64 + 2192;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823f6430
	ctx.lr = 0x823F3C80;
	sub_823F6430(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82f91940
	ctx.lr = 0x823F3C88;
	sub_82F91940(ctx, base);
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823f64c8
	ctx.lr = 0x823F3C98;
	sub_823F64C8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82f91940
	ctx.lr = 0x823F3CA0;
	sub_82F91940(ctx, base);
	// addi r29,r30,2408
	ctx.r29.s64 = ctx.r30.s64 + 2408;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x823f3ce4
	if (ctx.cr6.eq) goto loc_823F3CE4;
	// lwz r3,16(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823f3ce0
	if (ctx.cr6.eq) goto loc_823F3CE0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// subf r10,r3,r29
	ctx.r10.s64 = ctx.r29.s64 - ctx.r3.s64;
	// addic r9,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// subfe r4,r9,r10
	temp.u8 = (~ctx.r9.u32 + ctx.r10.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r4.u64 = ~ctx.r9.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823F3CDC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r31,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r31.u32);
loc_823F3CE0:
	// stw r31,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r31.u32);
loc_823F3CE4:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82f91940
	ctx.lr = 0x823F3CEC;
	sub_82F91940(ctx, base);
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r30,2352
	ctx.r3.s64 = ctx.r30.s64 + 2352;
	// bl 0x823f64c8
	ctx.lr = 0x823F3CFC;
	sub_823F64C8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82f91940
	ctx.lr = 0x823F3D04;
	sub_82F91940(ctx, base);
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// addi r29,r30,2496
	ctx.r29.s64 = ctx.r30.s64 + 2496;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823f6430
	ctx.lr = 0x823F3D18;
	sub_823F6430(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82f91940
	ctx.lr = 0x823F3D20;
	sub_82F91940(ctx, base);
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823f64c8
	ctx.lr = 0x823F3D30;
	sub_823F64C8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82f91940
	ctx.lr = 0x823F3D38;
	sub_82F91940(ctx, base);
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// addi r29,r30,2648
	ctx.r29.s64 = ctx.r30.s64 + 2648;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823f6430
	ctx.lr = 0x823F3D4C;
	sub_823F6430(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82f91940
	ctx.lr = 0x823F3D54;
	sub_82F91940(ctx, base);
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823f64c8
	ctx.lr = 0x823F3D64;
	sub_823F64C8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82f91940
	ctx.lr = 0x823F3D6C;
	sub_82F91940(ctx, base);
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// addi r29,r30,2808
	ctx.r29.s64 = ctx.r30.s64 + 2808;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823f6430
	ctx.lr = 0x823F3D80;
	sub_823F6430(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82f91940
	ctx.lr = 0x823F3D88;
	sub_82F91940(ctx, base);
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823f64c8
	ctx.lr = 0x823F3D98;
	sub_823F64C8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82f91940
	ctx.lr = 0x823F3DA0;
	sub_82F91940(ctx, base);
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// addi r29,r30,2968
	ctx.r29.s64 = ctx.r30.s64 + 2968;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823f6430
	ctx.lr = 0x823F3DB4;
	sub_823F6430(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82f91940
	ctx.lr = 0x823F3DBC;
	sub_82F91940(ctx, base);
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823f64c8
	ctx.lr = 0x823F3DCC;
	sub_823F64C8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82f91940
	ctx.lr = 0x823F3DD4;
	sub_82F91940(ctx, base);
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// addi r29,r30,3128
	ctx.r29.s64 = ctx.r30.s64 + 3128;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823f6430
	ctx.lr = 0x823F3DE8;
	sub_823F6430(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82f91940
	ctx.lr = 0x823F3DF0;
	sub_82F91940(ctx, base);
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823f64c8
	ctx.lr = 0x823F3E00;
	sub_823F64C8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82f91940
	ctx.lr = 0x823F3E08;
	sub_82F91940(ctx, base);
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// addi r29,r30,3280
	ctx.r29.s64 = ctx.r30.s64 + 3280;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823f6430
	ctx.lr = 0x823F3E1C;
	sub_823F6430(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82f91940
	ctx.lr = 0x823F3E24;
	sub_82F91940(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823f64c8
	ctx.lr = 0x823F3E34;
	sub_823F64C8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82f91940
	ctx.lr = 0x823F3E3C;
	sub_82F91940(ctx, base);
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// addi r29,r30,3392
	ctx.r29.s64 = ctx.r30.s64 + 3392;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823f6430
	ctx.lr = 0x823F3E50;
	sub_823F6430(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82f91940
	ctx.lr = 0x823F3E58;
	sub_82F91940(ctx, base);
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823f64c8
	ctx.lr = 0x823F3E68;
	sub_823F64C8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82f91940
	ctx.lr = 0x823F3E70;
	sub_82F91940(ctx, base);
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// addi r30,r30,3504
	ctx.r30.s64 = ctx.r30.s64 + 3504;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823f6430
	ctx.lr = 0x823F3E84;
	sub_823F6430(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82f91940
	ctx.lr = 0x823F3E8C;
	sub_82F91940(ctx, base);
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x823f64c8
	ctx.lr = 0x823F3E9C;
	sub_823F64C8(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82f91940
	ctx.lr = 0x823F3EA4;
	sub_82F91940(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823F3EAC"))) PPC_WEAK_FUNC(sub_823F3EAC);
PPC_FUNC_IMPL(__imp__sub_823F3EAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823F3EB0"))) PPC_WEAK_FUNC(sub_823F3EB0);
PPC_FUNC_IMPL(__imp__sub_823F3EB0) {
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
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,4(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lbz r10,73(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 73);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x823f3f34
	if (!ctx.cr0.eq) goto loc_823F3F34;
	// lwz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
loc_823F3EE4:
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x823f3f0c
	if (ctx.cr6.gt) goto loc_823F3F0C;
	// blt cr6,0x823f3f04
	if (ctx.cr6.lt) goto loc_823F3F04;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// lwz r7,4(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// cmpw cr6,r10,r7
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x823f3f0c
	if (ctx.cr6.lt) goto loc_823F3F0C;
loc_823F3F04:
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// b 0x823f3f10
	goto loc_823F3F10;
loc_823F3F0C:
	// li r10,1
	ctx.r10.s64 = 1;
loc_823F3F10:
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x823f3f20
	if (ctx.cr0.eq) goto loc_823F3F20;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x823f3f28
	goto loc_823F3F28;
loc_823F3F20:
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_823F3F28:
	// lbz r10,73(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 73);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x823f3ee4
	if (ctx.cr0.eq) goto loc_823F3EE4;
loc_823F3F34:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x823f3f78
	if (ctx.cr6.eq) goto loc_823F3F78;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x823f3f6c
	if (ctx.cr6.gt) goto loc_823F3F6C;
	// blt cr6,0x823f3f64
	if (ctx.cr6.lt) goto loc_823F3F64;
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x823f3f6c
	if (ctx.cr6.lt) goto loc_823F3F6C;
loc_823F3F64:
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// b 0x823f3f70
	goto loc_823F3F70;
loc_823F3F6C:
	// li r11,1
	ctx.r11.s64 = 1;
loc_823F3F70:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823f3fe4
	if (ctx.cr0.eq) goto loc_823F3FE4;
loc_823F3F78:
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r3,r1,152
	ctx.r3.s64 = ctx.r1.s64 + 152;
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r8,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r8.u32);
	// stw r8,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r8.u32);
	// stw r11,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r11.u32);
	// stw r10,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r10.u32);
	// bl 0x8234e650
	ctx.lr = 0x823F3F9C;
	sub_8234E650(ctx, base);
	// addi r4,r1,120
	ctx.r4.s64 = ctx.r1.s64 + 120;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x8234e650
	ctx.lr = 0x823F3FA8;
	sub_8234E650(ctx, base);
	// addi r6,r1,144
	ctx.r6.s64 = ctx.r1.s64 + 144;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823f8b78
	ctx.lr = 0x823F3FBC;
	sub_823F8B78(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x82f91940
	ctx.lr = 0x823F3FCC;
	sub_82F91940(ctx, base);
	// addi r3,r1,152
	ctx.r3.s64 = ctx.r1.s64 + 152;
	// bl 0x82f91940
	ctx.lr = 0x823F3FD4;
	sub_82F91940(ctx, base);
	// addi r3,r1,120
	ctx.r3.s64 = ctx.r1.s64 + 120;
	// bl 0x82f91940
	ctx.lr = 0x823F3FDC;
	sub_82F91940(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82f91940
	ctx.lr = 0x823F3FE4;
	sub_82F91940(ctx, base);
loc_823F3FE4:
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
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

__attribute__((alias("__imp__sub_823F4000"))) PPC_WEAK_FUNC(sub_823F4000);
PPC_FUNC_IMPL(__imp__sub_823F4000) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x823F4008;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x82918740
	ctx.lr = 0x823F4014;
	sub_82918740(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r11,r11,-28408
	ctx.r11.s64 = ctx.r11.s64 + -28408;
	// stw r31,72(r29)
	PPC_STORE_U32(ctx.r29.u32 + 72, ctx.r31.u32);
	// li r3,8
	ctx.r3.s64 = 8;
	// stw r31,96(r29)
	PPC_STORE_U32(ctx.r29.u32 + 96, ctx.r31.u32);
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// bl 0x82691500
	ctx.lr = 0x823F4034;
	sub_82691500(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x823f4054
	if (ctx.cr0.eq) goto loc_823F4054;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// stw r31,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r31.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r11,r11,28212
	ctx.r11.s64 = ctx.r11.s64 + 28212;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x823f4058
	goto loc_823F4058;
loc_823F4054:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
loc_823F4058:
	// addi r3,r29,104
	ctx.r3.s64 = ctx.r29.s64 + 104;
	// bl 0x823fa8a0
	ctx.lr = 0x823F4060;
	sub_823FA8A0(ctx, base);
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x82691500
	ctx.lr = 0x823F4068;
	sub_82691500(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x823f4088
	if (ctx.cr0.eq) goto loc_823F4088;
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// stw r31,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r31.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r11,r11,-30364
	ctx.r11.s64 = ctx.r11.s64 + -30364;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x823f408c
	goto loc_823F408C;
loc_823F4088:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
loc_823F408C:
	// addi r3,r29,112
	ctx.r3.s64 = ctx.r29.s64 + 112;
	// bl 0x823fa8a0
	ctx.lr = 0x823F4094;
	sub_823FA8A0(ctx, base);
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x82691500
	ctx.lr = 0x823F409C;
	sub_82691500(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x823f40bc
	if (ctx.cr0.eq) goto loc_823F40BC;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// stw r31,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r31.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r11,r11,-32120
	ctx.r11.s64 = ctx.r11.s64 + -32120;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x823f40c0
	goto loc_823F40C0;
loc_823F40BC:
	// mr r28,r31
	ctx.r28.u64 = ctx.r31.u64;
loc_823F40C0:
	// stw r31,120(r29)
	PPC_STORE_U32(ctx.r29.u32 + 120, ctx.r31.u32);
	// li r3,16
	ctx.r3.s64 = 16;
	// stw r31,124(r29)
	PPC_STORE_U32(ctx.r29.u32 + 124, ctx.r31.u32);
	// addi r30,r29,120
	ctx.r30.s64 = ctx.r29.s64 + 120;
	// bl 0x82691500
	ctx.lr = 0x823F40D4;
	sub_82691500(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x823f40fc
	if (ctx.cr0.eq) goto loc_823F40FC;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// stw r28,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r28.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r10,r10,-27204
	ctx.r10.s64 = ctx.r10.s64 + -27204;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
loc_823F40FC:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823f410c
	if (ctx.cr6.eq) goto loc_823F410C;
	// bl 0x82241d18
	ctx.lr = 0x823F410C;
	sub_82241D18(ctx, base);
loc_823F410C:
	// stw r31,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r31.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r28,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r28.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823F4120"))) PPC_WEAK_FUNC(sub_823F4120);
PPC_FUNC_IMPL(__imp__sub_823F4120) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x823F4128;
	__savegprlr_29(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stb r4,239(r1)
	PPC_STORE_U8(ctx.r1.u32 + 239, ctx.r4.u8);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,40
	ctx.r3.s64 = 40;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x82691500
	ctx.lr = 0x823F4140;
	sub_82691500(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x823f4158
	if (ctx.cr0.eq) goto loc_823F4158;
	// bl 0x822b0f58
	ctx.lr = 0x823F4150;
	sub_822B0F58(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x823f415c
	goto loc_823F415C;
loc_823F4158:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
loc_823F415C:
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r30.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// bl 0x822b0dc8
	ctx.lr = 0x823F416C;
	sub_822B0DC8(ctx, base);
	// lwz r3,104(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// addi r5,r1,239
	ctx.r5.s64 = ctx.r1.s64 + 239;
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823F4188;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,112(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823F41A4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,72(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823f4228
	if (ctx.cr6.eq) goto loc_823F4228;
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x8291fc80
	ctx.lr = 0x823F41B8;
	sub_8291FC80(ctx, base);
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x823567c0
	ctx.lr = 0x823F41C0;
	sub_823567C0(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r30,88(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x82255da0
	ctx.lr = 0x823F41CC;
	sub_82255DA0(ctx, base);
	// lwz r3,104(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823F41E8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,112(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823F4204;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,72(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823f4228
	if (ctx.cr6.eq) goto loc_823F4228;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// lbz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823F4228;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_823F4228:
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82917848
	ctx.lr = 0x823F4234;
	sub_82917848(ctx, base);
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823f4244
	if (ctx.cr6.eq) goto loc_823F4244;
	// bl 0x82241d18
	ctx.lr = 0x823F4244;
	sub_82241D18(ctx, base);
loc_823F4244:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823F424C"))) PPC_WEAK_FUNC(sub_823F424C);
PPC_FUNC_IMPL(__imp__sub_823F424C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823F4250"))) PPC_WEAK_FUNC(sub_823F4250);
PPC_FUNC_IMPL(__imp__sub_823F4250) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x823F4258;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x82918740
	ctx.lr = 0x823F4264;
	sub_82918740(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r11,r11,-28344
	ctx.r11.s64 = ctx.r11.s64 + -28344;
	// stw r30,72(r29)
	PPC_STORE_U32(ctx.r29.u32 + 72, ctx.r30.u32);
	// li r3,24
	ctx.r3.s64 = 24;
	// stw r30,96(r29)
	PPC_STORE_U32(ctx.r29.u32 + 96, ctx.r30.u32);
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// bl 0x82691500
	ctx.lr = 0x823F4284;
	sub_82691500(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x823f42a4
	if (ctx.cr0.eq) goto loc_823F42A4;
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x828e06c0
	ctx.lr = 0x823F429C;
	sub_828E06C0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x823f42a8
	goto loc_823F42A8;
loc_823F42A4:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
loc_823F42A8:
	// addi r3,r29,104
	ctx.r3.s64 = ctx.r29.s64 + 104;
	// bl 0x823fa8a0
	ctx.lr = 0x823F42B0;
	sub_823FA8A0(ctx, base);
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x82691500
	ctx.lr = 0x823F42B8;
	sub_82691500(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x823f42d8
	if (ctx.cr0.eq) goto loc_823F42D8;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// stw r30,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r30.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r11,r11,28212
	ctx.r11.s64 = ctx.r11.s64 + 28212;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x823f42dc
	goto loc_823F42DC;
loc_823F42D8:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
loc_823F42DC:
	// addi r3,r29,112
	ctx.r3.s64 = ctx.r29.s64 + 112;
	// bl 0x823fa8a0
	ctx.lr = 0x823F42E4;
	sub_823FA8A0(ctx, base);
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x82691500
	ctx.lr = 0x823F42EC;
	sub_82691500(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x823f430c
	if (ctx.cr0.eq) goto loc_823F430C;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// stw r30,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r30.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r11,r11,-31976
	ctx.r11.s64 = ctx.r11.s64 + -31976;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x823f4310
	goto loc_823F4310;
loc_823F430C:
	// mr r28,r30
	ctx.r28.u64 = ctx.r30.u64;
loc_823F4310:
	// stw r30,120(r29)
	PPC_STORE_U32(ctx.r29.u32 + 120, ctx.r30.u32);
	// li r3,16
	ctx.r3.s64 = 16;
	// stw r30,124(r29)
	PPC_STORE_U32(ctx.r29.u32 + 124, ctx.r30.u32);
	// addi r31,r29,120
	ctx.r31.s64 = ctx.r29.s64 + 120;
	// bl 0x82691500
	ctx.lr = 0x823F4324;
	sub_82691500(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x823f434c
	if (ctx.cr0.eq) goto loc_823F434C;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// stw r28,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r28.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r10,r10,-27204
	ctx.r10.s64 = ctx.r10.s64 + -27204;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
loc_823F434C:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823f435c
	if (ctx.cr6.eq) goto loc_823F435C;
	// bl 0x82241d18
	ctx.lr = 0x823F435C;
	sub_82241D18(ctx, base);
loc_823F435C:
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r28,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r28.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823F4370"))) PPC_WEAK_FUNC(sub_823F4370);
PPC_FUNC_IMPL(__imp__sub_823F4370) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa766c
	ctx.lr = 0x823F4378;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// bl 0x82918740
	ctx.lr = 0x823F4384;
	sub_82918740(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r11,r11,-28328
	ctx.r11.s64 = ctx.r11.s64 + -28328;
	// stw r29,72(r26)
	PPC_STORE_U32(ctx.r26.u32 + 72, ctx.r29.u32);
	// li r3,24
	ctx.r3.s64 = 24;
	// stw r29,96(r26)
	PPC_STORE_U32(ctx.r26.u32 + 96, ctx.r29.u32);
	// stw r11,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r11.u32);
	// bl 0x82691500
	ctx.lr = 0x823F43A4;
	sub_82691500(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x823f43c4
	if (ctx.cr0.eq) goto loc_823F43C4;
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x828e06c0
	ctx.lr = 0x823F43BC;
	sub_828E06C0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x823f43c8
	goto loc_823F43C8;
loc_823F43C4:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
loc_823F43C8:
	// addi r3,r26,104
	ctx.r3.s64 = ctx.r26.s64 + 104;
	// bl 0x823fa8a0
	ctx.lr = 0x823F43D0;
	sub_823FA8A0(ctx, base);
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x82691500
	ctx.lr = 0x823F43D8;
	sub_82691500(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x823f43f8
	if (ctx.cr0.eq) goto loc_823F43F8;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// stw r29,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r29.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r11,r11,28212
	ctx.r11.s64 = ctx.r11.s64 + 28212;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x823f43fc
	goto loc_823F43FC;
loc_823F43F8:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
loc_823F43FC:
	// addi r3,r26,112
	ctx.r3.s64 = ctx.r26.s64 + 112;
	// bl 0x823fa8a0
	ctx.lr = 0x823F4404;
	sub_823FA8A0(ctx, base);
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x82691500
	ctx.lr = 0x823F440C;
	sub_82691500(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r25,r11,-32128
	ctx.r25.s64 = ctx.r11.s64 + -32128;
	// beq 0x823f442c
	if (ctx.cr0.eq) goto loc_823F442C;
	// stw r29,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r29.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r25,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r25.u32);
	// b 0x823f4430
	goto loc_823F4430;
loc_823F442C:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
loc_823F4430:
	// addi r3,r26,120
	ctx.r3.s64 = ctx.r26.s64 + 120;
	// bl 0x823fa8a0
	ctx.lr = 0x823F4438;
	sub_823FA8A0(ctx, base);
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x82691500
	ctx.lr = 0x823F4440;
	sub_82691500(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x823f4460
	if (ctx.cr0.eq) goto loc_823F4460;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// stw r29,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r29.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r11,r11,-31952
	ctx.r11.s64 = ctx.r11.s64 + -31952;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x823f4464
	goto loc_823F4464;
loc_823F4460:
	// mr r28,r29
	ctx.r28.u64 = ctx.r29.u64;
loc_823F4464:
	// stw r29,128(r26)
	PPC_STORE_U32(ctx.r26.u32 + 128, ctx.r29.u32);
	// li r3,16
	ctx.r3.s64 = 16;
	// stw r29,132(r26)
	PPC_STORE_U32(ctx.r26.u32 + 132, ctx.r29.u32);
	// addi r31,r26,128
	ctx.r31.s64 = ctx.r26.s64 + 128;
	// bl 0x82691500
	ctx.lr = 0x823F4478;
	sub_82691500(ctx, base);
	// li r27,1
	ctx.r27.s64 = 1;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x823f44a4
	if (ctx.cr0.eq) goto loc_823F44A4;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// stw r28,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r28.u32);
	// stw r27,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r27.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r11,r11,-27204
	ctx.r11.s64 = ctx.r11.s64 + -27204;
	// stw r27,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r27.u32);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x823f44a8
	goto loc_823F44A8;
loc_823F44A4:
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
loc_823F44A8:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823f44b8
	if (ctx.cr6.eq) goto loc_823F44B8;
	// bl 0x82241d18
	ctx.lr = 0x823F44B8;
	sub_82241D18(ctx, base);
loc_823F44B8:
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// li r3,8
	ctx.r3.s64 = 8;
	// stw r28,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r28.u32);
	// bl 0x82691500
	ctx.lr = 0x823F44C8;
	sub_82691500(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x823f44e8
	if (ctx.cr0.eq) goto loc_823F44E8;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// stw r29,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r29.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r11,r11,-31928
	ctx.r11.s64 = ctx.r11.s64 + -31928;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x823f44ec
	goto loc_823F44EC;
loc_823F44E8:
	// mr r28,r29
	ctx.r28.u64 = ctx.r29.u64;
loc_823F44EC:
	// stw r29,136(r26)
	PPC_STORE_U32(ctx.r26.u32 + 136, ctx.r29.u32);
	// li r3,16
	ctx.r3.s64 = 16;
	// stw r29,140(r26)
	PPC_STORE_U32(ctx.r26.u32 + 140, ctx.r29.u32);
	// addi r31,r26,136
	ctx.r31.s64 = ctx.r26.s64 + 136;
	// bl 0x82691500
	ctx.lr = 0x823F4500;
	sub_82691500(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x823f4528
	if (ctx.cr0.eq) goto loc_823F4528;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// stw r28,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r28.u32);
	// stw r27,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r27.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r11,r11,-27204
	ctx.r11.s64 = ctx.r11.s64 + -27204;
	// stw r27,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r27.u32);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x823f452c
	goto loc_823F452C;
loc_823F4528:
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
loc_823F452C:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823f453c
	if (ctx.cr6.eq) goto loc_823F453C;
	// bl 0x82241d18
	ctx.lr = 0x823F453C;
	sub_82241D18(ctx, base);
loc_823F453C:
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// li r3,8
	ctx.r3.s64 = 8;
	// stw r28,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r28.u32);
	// bl 0x82691500
	ctx.lr = 0x823F454C;
	sub_82691500(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x823f4564
	if (ctx.cr0.eq) goto loc_823F4564;
	// stw r29,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r29.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r25,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r25.u32);
	// b 0x823f4568
	goto loc_823F4568;
loc_823F4564:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
loc_823F4568:
	// addi r3,r26,144
	ctx.r3.s64 = ctx.r26.s64 + 144;
	// bl 0x823fa8a0
	ctx.lr = 0x823F4570;
	sub_823FA8A0(ctx, base);
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x82691500
	ctx.lr = 0x823F4578;
	sub_82691500(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x823f4598
	if (ctx.cr0.eq) goto loc_823F4598;
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// stw r29,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r29.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r11,r11,-30340
	ctx.r11.s64 = ctx.r11.s64 + -30340;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x823f459c
	goto loc_823F459C;
loc_823F4598:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
loc_823F459C:
	// addi r3,r26,152
	ctx.r3.s64 = ctx.r26.s64 + 152;
	// bl 0x823fa8a0
	ctx.lr = 0x823F45A4;
	sub_823FA8A0(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82fa76bc
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823F45B0"))) PPC_WEAK_FUNC(sub_823F45B0);
PPC_FUNC_IMPL(__imp__sub_823F45B0) {
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
	// stfs f1,188(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 188, temp.u32);
	// stw r4,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r4.u32);
	// stw r5,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r5.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stb r6,159(r1)
	PPC_STORE_U8(ctx.r1.u32 + 159, ctx.r6.u8);
	// li r3,40
	ctx.r3.s64 = 40;
	// stw r7,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r7.u32);
	// stw r8,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r8.u32);
	// stb r9,183(r1)
	PPC_STORE_U8(ctx.r1.u32 + 183, ctx.r9.u8);
	// bl 0x82691500
	ctx.lr = 0x823F45EC;
	sub_82691500(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x823f4604
	if (ctx.cr0.eq) goto loc_823F4604;
	// bl 0x822b0f58
	ctx.lr = 0x823F45FC;
	sub_822B0F58(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x823f4608
	goto loc_823F4608;
loc_823F4604:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
loc_823F4608:
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// bl 0x822b0dc8
	ctx.lr = 0x823F4618;
	sub_822B0DC8(ctx, base);
	// lwz r3,104(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// addi r5,r1,140
	ctx.r5.s64 = ctx.r1.s64 + 140;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823F4634;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,112(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// addi r5,r1,148
	ctx.r5.s64 = ctx.r1.s64 + 148;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823F4650;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,120(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// addi r5,r1,159
	ctx.r5.s64 = ctx.r1.s64 + 159;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823F466C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,128(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// addi r5,r1,164
	ctx.r5.s64 = ctx.r1.s64 + 164;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823F4688;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,136(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// addi r5,r1,172
	ctx.r5.s64 = ctx.r1.s64 + 172;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823F46A4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,144(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	// addi r5,r1,183
	ctx.r5.s64 = ctx.r1.s64 + 183;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823F46C0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,152(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 152);
	// addi r5,r1,188
	ctx.r5.s64 = ctx.r1.s64 + 188;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823F46DC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,72(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823f4708
	if (ctx.cr6.eq) goto loc_823F4708;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x8291fc80
	ctx.lr = 0x823F46F0;
	sub_8291FC80(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x823567c0
	ctx.lr = 0x823F46F8;
	sub_823567C0(ctx, base);
	// addi r5,r31,56
	ctx.r5.s64 = ctx.r31.s64 + 56;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82256bc0
	ctx.lr = 0x823F4708;
	sub_82256BC0(ctx, base);
loc_823F4708:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82917848
	ctx.lr = 0x823F4714;
	sub_82917848(ctx, base);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823f4724
	if (ctx.cr6.eq) goto loc_823F4724;
	// bl 0x82241d18
	ctx.lr = 0x823F4724;
	sub_82241D18(ctx, base);
loc_823F4724:
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

__attribute__((alias("__imp__sub_823F473C"))) PPC_WEAK_FUNC(sub_823F473C);
PPC_FUNC_IMPL(__imp__sub_823F473C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823F4740"))) PPC_WEAK_FUNC(sub_823F4740);
PPC_FUNC_IMPL(__imp__sub_823F4740) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7670
	ctx.lr = 0x823F4748;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// bl 0x82918740
	ctx.lr = 0x823F4754;
	sub_82918740(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r11,r11,-28312
	ctx.r11.s64 = ctx.r11.s64 + -28312;
	// stw r30,72(r26)
	PPC_STORE_U32(ctx.r26.u32 + 72, ctx.r30.u32);
	// li r3,24
	ctx.r3.s64 = 24;
	// stw r30,96(r26)
	PPC_STORE_U32(ctx.r26.u32 + 96, ctx.r30.u32);
	// stw r11,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r11.u32);
	// bl 0x82691500
	ctx.lr = 0x823F4774;
	sub_82691500(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x823f4794
	if (ctx.cr0.eq) goto loc_823F4794;
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x828e06c0
	ctx.lr = 0x823F478C;
	sub_828E06C0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x823f4798
	goto loc_823F4798;
loc_823F4794:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
loc_823F4798:
	// addi r3,r26,104
	ctx.r3.s64 = ctx.r26.s64 + 104;
	// bl 0x823fa8a0
	ctx.lr = 0x823F47A0;
	sub_823FA8A0(ctx, base);
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x82691500
	ctx.lr = 0x823F47A8;
	sub_82691500(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x823f47c8
	if (ctx.cr0.eq) goto loc_823F47C8;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// stw r30,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r30.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r11,r11,28212
	ctx.r11.s64 = ctx.r11.s64 + 28212;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x823f47cc
	goto loc_823F47CC;
loc_823F47C8:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
loc_823F47CC:
	// addi r3,r26,112
	ctx.r3.s64 = ctx.r26.s64 + 112;
	// bl 0x823fa8a0
	ctx.lr = 0x823F47D4;
	sub_823FA8A0(ctx, base);
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x82691500
	ctx.lr = 0x823F47DC;
	sub_82691500(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x823f47fc
	if (ctx.cr0.eq) goto loc_823F47FC;
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// stw r30,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r30.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r11,r11,-30364
	ctx.r11.s64 = ctx.r11.s64 + -30364;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x823f4800
	goto loc_823F4800;
loc_823F47FC:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
loc_823F4800:
	// addi r3,r26,120
	ctx.r3.s64 = ctx.r26.s64 + 120;
	// bl 0x823fa8a0
	ctx.lr = 0x823F4808;
	sub_823FA8A0(ctx, base);
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x82691500
	ctx.lr = 0x823F4810;
	sub_82691500(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x823f4830
	if (ctx.cr0.eq) goto loc_823F4830;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// stw r30,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r30.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r11,r11,-31904
	ctx.r11.s64 = ctx.r11.s64 + -31904;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x823f4834
	goto loc_823F4834;
loc_823F4830:
	// mr r28,r30
	ctx.r28.u64 = ctx.r30.u64;
loc_823F4834:
	// stw r30,128(r26)
	PPC_STORE_U32(ctx.r26.u32 + 128, ctx.r30.u32);
	// li r3,16
	ctx.r3.s64 = 16;
	// stw r30,132(r26)
	PPC_STORE_U32(ctx.r26.u32 + 132, ctx.r30.u32);
	// addi r31,r26,128
	ctx.r31.s64 = ctx.r26.s64 + 128;
	// bl 0x82691500
	ctx.lr = 0x823F4848;
	sub_82691500(ctx, base);
	// li r27,1
	ctx.r27.s64 = 1;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x823f4874
	if (ctx.cr0.eq) goto loc_823F4874;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// stw r28,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r28.u32);
	// stw r27,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r27.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r11,r11,-27204
	ctx.r11.s64 = ctx.r11.s64 + -27204;
	// stw r27,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r27.u32);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x823f4878
	goto loc_823F4878;
loc_823F4874:
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
loc_823F4878:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823f4888
	if (ctx.cr6.eq) goto loc_823F4888;
	// bl 0x82241d18
	ctx.lr = 0x823F4888;
	sub_82241D18(ctx, base);
loc_823F4888:
	// stw r29,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r29.u32);
	// li r3,8
	ctx.r3.s64 = 8;
	// stw r28,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r28.u32);
	// bl 0x82691500
	ctx.lr = 0x823F4898;
	sub_82691500(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x823f48b8
	if (ctx.cr0.eq) goto loc_823F48B8;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// stw r30,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r30.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r11,r11,-31880
	ctx.r11.s64 = ctx.r11.s64 + -31880;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x823f48bc
	goto loc_823F48BC;
loc_823F48B8:
	// mr r28,r30
	ctx.r28.u64 = ctx.r30.u64;
loc_823F48BC:
	// stw r30,136(r26)
	PPC_STORE_U32(ctx.r26.u32 + 136, ctx.r30.u32);
	// li r3,16
	ctx.r3.s64 = 16;
	// stw r30,140(r26)
	PPC_STORE_U32(ctx.r26.u32 + 140, ctx.r30.u32);
	// addi r31,r26,136
	ctx.r31.s64 = ctx.r26.s64 + 136;
	// bl 0x82691500
	ctx.lr = 0x823F48D0;
	sub_82691500(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x823f48f8
	if (ctx.cr0.eq) goto loc_823F48F8;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// stw r28,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r28.u32);
	// stw r27,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r27.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r11,r11,-27204
	ctx.r11.s64 = ctx.r11.s64 + -27204;
	// stw r27,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r27.u32);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x823f48fc
	goto loc_823F48FC;
loc_823F48F8:
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
loc_823F48FC:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823f490c
	if (ctx.cr6.eq) goto loc_823F490C;
	// bl 0x82241d18
	ctx.lr = 0x823F490C;
	sub_82241D18(ctx, base);
loc_823F490C:
	// stw r29,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r29.u32);
	// li r3,8
	ctx.r3.s64 = 8;
	// stw r28,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r28.u32);
	// bl 0x82691500
	ctx.lr = 0x823F491C;
	sub_82691500(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x823f493c
	if (ctx.cr0.eq) goto loc_823F493C;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// stw r30,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r30.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r11,r11,-31856
	ctx.r11.s64 = ctx.r11.s64 + -31856;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x823f4940
	goto loc_823F4940;
loc_823F493C:
	// mr r28,r30
	ctx.r28.u64 = ctx.r30.u64;
loc_823F4940:
	// stw r30,144(r26)
	PPC_STORE_U32(ctx.r26.u32 + 144, ctx.r30.u32);
	// li r3,16
	ctx.r3.s64 = 16;
	// stw r30,148(r26)
	PPC_STORE_U32(ctx.r26.u32 + 148, ctx.r30.u32);
	// addi r31,r26,144
	ctx.r31.s64 = ctx.r26.s64 + 144;
	// bl 0x82691500
	ctx.lr = 0x823F4954;
	sub_82691500(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x823f497c
	if (ctx.cr0.eq) goto loc_823F497C;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// stw r28,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r28.u32);
	// stw r27,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r27.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r11,r11,-27204
	ctx.r11.s64 = ctx.r11.s64 + -27204;
	// stw r27,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r27.u32);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x823f4980
	goto loc_823F4980;
loc_823F497C:
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
loc_823F4980:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823f4990
	if (ctx.cr6.eq) goto loc_823F4990;
	// bl 0x82241d18
	ctx.lr = 0x823F4990;
	sub_82241D18(ctx, base);
loc_823F4990:
	// stw r29,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r29.u32);
	// li r3,8
	ctx.r3.s64 = 8;
	// stw r28,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r28.u32);
	// bl 0x82691500
	ctx.lr = 0x823F49A0;
	sub_82691500(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x823f49c0
	if (ctx.cr0.eq) goto loc_823F49C0;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// stw r30,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r30.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r11,r11,-31832
	ctx.r11.s64 = ctx.r11.s64 + -31832;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x823f49c4
	goto loc_823F49C4;
loc_823F49C0:
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
loc_823F49C4:
	// stw r30,152(r26)
	PPC_STORE_U32(ctx.r26.u32 + 152, ctx.r30.u32);
	// li r3,16
	ctx.r3.s64 = 16;
	// stw r30,156(r26)
	PPC_STORE_U32(ctx.r26.u32 + 156, ctx.r30.u32);
	// addi r31,r26,152
	ctx.r31.s64 = ctx.r26.s64 + 152;
	// bl 0x82691500
	ctx.lr = 0x823F49D8;
	sub_82691500(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x823f49fc
	if (ctx.cr0.eq) goto loc_823F49FC;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// stw r29,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r29.u32);
	// stw r27,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r27.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r11,r11,-27204
	ctx.r11.s64 = ctx.r11.s64 + -27204;
	// stw r27,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r27.u32);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
loc_823F49FC:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823f4a0c
	if (ctx.cr6.eq) goto loc_823F4A0C;
	// bl 0x82241d18
	ctx.lr = 0x823F4A0C;
	sub_82241D18(ctx, base);
loc_823F4A0C:
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82fa76c0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823F4A20"))) PPC_WEAK_FUNC(sub_823F4A20);
PPC_FUNC_IMPL(__imp__sub_823F4A20) {
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
	// li r12,160
	ctx.r12.s64 = 160;
	// stvx128 v1,r1,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r1.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v1.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// std r6,176(r1)
	PPC_STORE_U64(ctx.r1.u32 + 176, ctx.r6.u64);
	// stw r4,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r4.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r5,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r5.u32);
	// li r3,40
	ctx.r3.s64 = 40;
	// std r7,184(r1)
	PPC_STORE_U64(ctx.r1.u32 + 184, ctx.r7.u64);
	// std r9,200(r1)
	PPC_STORE_U64(ctx.r1.u32 + 200, ctx.r9.u64);
	// sth r10,214(r1)
	PPC_STORE_U16(ctx.r1.u32 + 214, ctx.r10.u16);
	// std r8,192(r1)
	PPC_STORE_U64(ctx.r1.u32 + 192, ctx.r8.u64);
	// bl 0x82691500
	ctx.lr = 0x823F4A64;
	sub_82691500(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x823f4a7c
	if (ctx.cr0.eq) goto loc_823F4A7C;
	// bl 0x822b0f58
	ctx.lr = 0x823F4A74;
	sub_822B0F58(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x823f4a80
	goto loc_823F4A80;
loc_823F4A7C:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
loc_823F4A80:
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// bl 0x822b0dc8
	ctx.lr = 0x823F4A90;
	sub_822B0DC8(ctx, base);
	// lwz r3,104(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// addi r5,r1,140
	ctx.r5.s64 = ctx.r1.s64 + 140;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823F4AAC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,112(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// addi r5,r1,148
	ctx.r5.s64 = ctx.r1.s64 + 148;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823F4AC8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,120(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823F4AE4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,128(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// addi r5,r1,176
	ctx.r5.s64 = ctx.r1.s64 + 176;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823F4B00;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,136(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// addi r5,r1,214
	ctx.r5.s64 = ctx.r1.s64 + 214;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823F4B1C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,144(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	// addi r5,r1,220
	ctx.r5.s64 = ctx.r1.s64 + 220;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823F4B38;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,152(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 152);
	// lwz r5,228(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823F4B54;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,72(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823f4b80
	if (ctx.cr6.eq) goto loc_823F4B80;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x8291fc80
	ctx.lr = 0x823F4B68;
	sub_8291FC80(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x823567c0
	ctx.lr = 0x823F4B70;
	sub_823567C0(ctx, base);
	// addi r5,r31,56
	ctx.r5.s64 = ctx.r31.s64 + 56;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82256ce0
	ctx.lr = 0x823F4B80;
	sub_82256CE0(ctx, base);
loc_823F4B80:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82917848
	ctx.lr = 0x823F4B8C;
	sub_82917848(ctx, base);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823f4b9c
	if (ctx.cr6.eq) goto loc_823F4B9C;
	// bl 0x82241d18
	ctx.lr = 0x823F4B9C;
	sub_82241D18(ctx, base);
loc_823F4B9C:
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

__attribute__((alias("__imp__sub_823F4BB4"))) PPC_WEAK_FUNC(sub_823F4BB4);
PPC_FUNC_IMPL(__imp__sub_823F4BB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823F4BB8"))) PPC_WEAK_FUNC(sub_823F4BB8);
PPC_FUNC_IMPL(__imp__sub_823F4BB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7670
	ctx.lr = 0x823F4BC0;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// bl 0x82918740
	ctx.lr = 0x823F4BCC;
	sub_82918740(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r11,r11,-28296
	ctx.r11.s64 = ctx.r11.s64 + -28296;
	// stw r30,72(r26)
	PPC_STORE_U32(ctx.r26.u32 + 72, ctx.r30.u32);
	// li r3,24
	ctx.r3.s64 = 24;
	// stw r30,96(r26)
	PPC_STORE_U32(ctx.r26.u32 + 96, ctx.r30.u32);
	// stw r11,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r11.u32);
	// bl 0x82691500
	ctx.lr = 0x823F4BEC;
	sub_82691500(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x823f4c0c
	if (ctx.cr0.eq) goto loc_823F4C0C;
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x828e06c0
	ctx.lr = 0x823F4C04;
	sub_828E06C0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x823f4c10
	goto loc_823F4C10;
loc_823F4C0C:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
loc_823F4C10:
	// addi r3,r26,104
	ctx.r3.s64 = ctx.r26.s64 + 104;
	// bl 0x823fa8a0
	ctx.lr = 0x823F4C18;
	sub_823FA8A0(ctx, base);
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x82691500
	ctx.lr = 0x823F4C20;
	sub_82691500(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x823f4c40
	if (ctx.cr0.eq) goto loc_823F4C40;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// stw r30,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r30.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r11,r11,28212
	ctx.r11.s64 = ctx.r11.s64 + 28212;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x823f4c44
	goto loc_823F4C44;
loc_823F4C40:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
loc_823F4C44:
	// addi r3,r26,112
	ctx.r3.s64 = ctx.r26.s64 + 112;
	// bl 0x823fa8a0
	ctx.lr = 0x823F4C4C;
	sub_823FA8A0(ctx, base);
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x82691500
	ctx.lr = 0x823F4C54;
	sub_82691500(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x823f4c74
	if (ctx.cr0.eq) goto loc_823F4C74;
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// stw r30,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r30.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r11,r11,-30364
	ctx.r11.s64 = ctx.r11.s64 + -30364;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x823f4c78
	goto loc_823F4C78;
loc_823F4C74:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
loc_823F4C78:
	// addi r3,r26,120
	ctx.r3.s64 = ctx.r26.s64 + 120;
	// bl 0x823fa8a0
	ctx.lr = 0x823F4C80;
	sub_823FA8A0(ctx, base);
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x82691500
	ctx.lr = 0x823F4C88;
	sub_82691500(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x823f4ca8
	if (ctx.cr0.eq) goto loc_823F4CA8;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// stw r30,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r30.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r11,r11,-31808
	ctx.r11.s64 = ctx.r11.s64 + -31808;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x823f4cac
	goto loc_823F4CAC;
loc_823F4CA8:
	// mr r28,r30
	ctx.r28.u64 = ctx.r30.u64;
loc_823F4CAC:
	// stw r30,128(r26)
	PPC_STORE_U32(ctx.r26.u32 + 128, ctx.r30.u32);
	// li r3,16
	ctx.r3.s64 = 16;
	// stw r30,132(r26)
	PPC_STORE_U32(ctx.r26.u32 + 132, ctx.r30.u32);
	// addi r31,r26,128
	ctx.r31.s64 = ctx.r26.s64 + 128;
	// bl 0x82691500
	ctx.lr = 0x823F4CC0;
	sub_82691500(ctx, base);
	// li r27,1
	ctx.r27.s64 = 1;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x823f4cec
	if (ctx.cr0.eq) goto loc_823F4CEC;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// stw r28,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r28.u32);
	// stw r27,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r27.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r11,r11,-27204
	ctx.r11.s64 = ctx.r11.s64 + -27204;
	// stw r27,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r27.u32);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x823f4cf0
	goto loc_823F4CF0;
loc_823F4CEC:
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
loc_823F4CF0:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823f4d00
	if (ctx.cr6.eq) goto loc_823F4D00;
	// bl 0x82241d18
	ctx.lr = 0x823F4D00;
	sub_82241D18(ctx, base);
loc_823F4D00:
	// stw r29,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r29.u32);
	// li r3,8
	ctx.r3.s64 = 8;
	// stw r28,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r28.u32);
	// bl 0x82691500
	ctx.lr = 0x823F4D10;
	sub_82691500(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x823f4d30
	if (ctx.cr0.eq) goto loc_823F4D30;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// stw r30,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r30.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r11,r11,-31784
	ctx.r11.s64 = ctx.r11.s64 + -31784;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x823f4d34
	goto loc_823F4D34;
loc_823F4D30:
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
loc_823F4D34:
	// stw r30,136(r26)
	PPC_STORE_U32(ctx.r26.u32 + 136, ctx.r30.u32);
	// li r3,16
	ctx.r3.s64 = 16;
	// stw r30,140(r26)
	PPC_STORE_U32(ctx.r26.u32 + 140, ctx.r30.u32);
	// addi r31,r26,136
	ctx.r31.s64 = ctx.r26.s64 + 136;
	// bl 0x82691500
	ctx.lr = 0x823F4D48;
	sub_82691500(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x823f4d6c
	if (ctx.cr0.eq) goto loc_823F4D6C;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// stw r29,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r29.u32);
	// stw r27,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r27.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r11,r11,-27204
	ctx.r11.s64 = ctx.r11.s64 + -27204;
	// stw r27,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r27.u32);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
loc_823F4D6C:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823f4d7c
	if (ctx.cr6.eq) goto loc_823F4D7C;
	// bl 0x82241d18
	ctx.lr = 0x823F4D7C;
	sub_82241D18(ctx, base);
loc_823F4D7C:
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82fa76c0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823F4D90"))) PPC_WEAK_FUNC(sub_823F4D90);
PPC_FUNC_IMPL(__imp__sub_823F4D90) {
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
	// li r12,160
	ctx.r12.s64 = 160;
	// stvx128 v1,r1,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r1.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v1.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// std r6,176(r1)
	PPC_STORE_U64(ctx.r1.u32 + 176, ctx.r6.u64);
	// std r8,192(r1)
	PPC_STORE_U64(ctx.r1.u32 + 192, ctx.r8.u64);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r4,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r4.u32);
	// li r3,40
	ctx.r3.s64 = 40;
	// stw r5,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r5.u32);
	// std r7,184(r1)
	PPC_STORE_U64(ctx.r1.u32 + 184, ctx.r7.u64);
	// std r9,200(r1)
	PPC_STORE_U64(ctx.r1.u32 + 200, ctx.r9.u64);
	// std r10,208(r1)
	PPC_STORE_U64(ctx.r1.u32 + 208, ctx.r10.u64);
	// bl 0x82691500
	ctx.lr = 0x823F4DD4;
	sub_82691500(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x823f4dec
	if (ctx.cr0.eq) goto loc_823F4DEC;
	// bl 0x822b0f58
	ctx.lr = 0x823F4DE4;
	sub_822B0F58(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x823f4df0
	goto loc_823F4DF0;
loc_823F4DEC:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
loc_823F4DF0:
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// bl 0x822b0dc8
	ctx.lr = 0x823F4E00;
	sub_822B0DC8(ctx, base);
	// lwz r3,104(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// addi r5,r1,140
	ctx.r5.s64 = ctx.r1.s64 + 140;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823F4E1C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,112(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// addi r5,r1,148
	ctx.r5.s64 = ctx.r1.s64 + 148;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823F4E38;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,120(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823F4E54;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,128(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// addi r5,r1,176
	ctx.r5.s64 = ctx.r1.s64 + 176;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823F4E70;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,136(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// lwz r5,244(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823F4E8C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,72(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823f4eb8
	if (ctx.cr6.eq) goto loc_823F4EB8;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x8291fc80
	ctx.lr = 0x823F4EA0;
	sub_8291FC80(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x823567c0
	ctx.lr = 0x823F4EA8;
	sub_823567C0(ctx, base);
	// addi r5,r31,56
	ctx.r5.s64 = ctx.r31.s64 + 56;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82256e50
	ctx.lr = 0x823F4EB8;
	sub_82256E50(ctx, base);
loc_823F4EB8:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82917848
	ctx.lr = 0x823F4EC4;
	sub_82917848(ctx, base);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823f4ed4
	if (ctx.cr6.eq) goto loc_823F4ED4;
	// bl 0x82241d18
	ctx.lr = 0x823F4ED4;
	sub_82241D18(ctx, base);
loc_823F4ED4:
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

__attribute__((alias("__imp__sub_823F4EEC"))) PPC_WEAK_FUNC(sub_823F4EEC);
PPC_FUNC_IMPL(__imp__sub_823F4EEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823F4EF0"))) PPC_WEAK_FUNC(sub_823F4EF0);
PPC_FUNC_IMPL(__imp__sub_823F4EF0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7674
	ctx.lr = 0x823F4EF8;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// bl 0x82918740
	ctx.lr = 0x823F4F04;
	sub_82918740(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// li r28,0
	ctx.r28.s64 = 0;
	// addi r11,r11,-28280
	ctx.r11.s64 = ctx.r11.s64 + -28280;
	// stw r28,72(r27)
	PPC_STORE_U32(ctx.r27.u32 + 72, ctx.r28.u32);
	// li r3,24
	ctx.r3.s64 = 24;
	// stw r28,96(r27)
	PPC_STORE_U32(ctx.r27.u32 + 96, ctx.r28.u32);
	// stw r11,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
	// bl 0x82691500
	ctx.lr = 0x823F4F24;
	sub_82691500(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x823f4f44
	if (ctx.cr0.eq) goto loc_823F4F44;
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x828e06c0
	ctx.lr = 0x823F4F3C;
	sub_828E06C0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x823f4f48
	goto loc_823F4F48;
loc_823F4F44:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_823F4F48:
	// addi r3,r27,104
	ctx.r3.s64 = ctx.r27.s64 + 104;
	// bl 0x823fa8a0
	ctx.lr = 0x823F4F50;
	sub_823FA8A0(ctx, base);
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x82691500
	ctx.lr = 0x823F4F58;
	sub_82691500(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x823f4f78
	if (ctx.cr0.eq) goto loc_823F4F78;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// stw r28,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r28.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r11,r11,28212
	ctx.r11.s64 = ctx.r11.s64 + 28212;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x823f4f7c
	goto loc_823F4F7C;
loc_823F4F78:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_823F4F7C:
	// addi r3,r27,112
	ctx.r3.s64 = ctx.r27.s64 + 112;
	// bl 0x823fa8a0
	ctx.lr = 0x823F4F84;
	sub_823FA8A0(ctx, base);
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x82691500
	ctx.lr = 0x823F4F8C;
	sub_82691500(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x823f4fac
	if (ctx.cr0.eq) goto loc_823F4FAC;
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// stw r28,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r28.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r11,r11,-30364
	ctx.r11.s64 = ctx.r11.s64 + -30364;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x823f4fb0
	goto loc_823F4FB0;
loc_823F4FAC:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_823F4FB0:
	// addi r3,r27,120
	ctx.r3.s64 = ctx.r27.s64 + 120;
	// bl 0x823fa8a0
	ctx.lr = 0x823F4FB8;
	sub_823FA8A0(ctx, base);
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x82691500
	ctx.lr = 0x823F4FC0;
	sub_82691500(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x823f4fe0
	if (ctx.cr0.eq) goto loc_823F4FE0;
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// stw r28,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r28.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r11,r11,-30340
	ctx.r11.s64 = ctx.r11.s64 + -30340;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x823f4fe4
	goto loc_823F4FE4;
loc_823F4FE0:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_823F4FE4:
	// addi r3,r27,128
	ctx.r3.s64 = ctx.r27.s64 + 128;
	// bl 0x823fa8a0
	ctx.lr = 0x823F4FEC;
	sub_823FA8A0(ctx, base);
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x82691500
	ctx.lr = 0x823F4FF4;
	sub_82691500(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x823f5014
	if (ctx.cr0.eq) goto loc_823F5014;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// stw r28,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r28.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r11,r11,-31808
	ctx.r11.s64 = ctx.r11.s64 + -31808;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x823f5018
	goto loc_823F5018;
loc_823F5014:
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
loc_823F5018:
	// stw r28,136(r27)
	PPC_STORE_U32(ctx.r27.u32 + 136, ctx.r28.u32);
	// li r3,16
	ctx.r3.s64 = 16;
	// stw r28,140(r27)
	PPC_STORE_U32(ctx.r27.u32 + 140, ctx.r28.u32);
	// addi r31,r27,136
	ctx.r31.s64 = ctx.r27.s64 + 136;
	// bl 0x82691500
	ctx.lr = 0x823F502C;
	sub_82691500(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x823f5058
	if (ctx.cr0.eq) goto loc_823F5058;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// stw r29,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r29.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r10,r10,-27204
	ctx.r10.s64 = ctx.r10.s64 + -27204;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// b 0x823f505c
	goto loc_823F505C;
loc_823F5058:
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
loc_823F505C:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823f506c
	if (ctx.cr6.eq) goto loc_823F506C;
	// bl 0x82241d18
	ctx.lr = 0x823F506C;
	sub_82241D18(ctx, base);
loc_823F506C:
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// li r3,8
	ctx.r3.s64 = 8;
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
	// bl 0x82691500
	ctx.lr = 0x823F507C;
	sub_82691500(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x823f509c
	if (ctx.cr0.eq) goto loc_823F509C;
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// stw r28,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r28.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r11,r11,-32128
	ctx.r11.s64 = ctx.r11.s64 + -32128;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x823f50a0
	goto loc_823F50A0;
loc_823F509C:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_823F50A0:
	// addi r3,r27,144
	ctx.r3.s64 = ctx.r27.s64 + 144;
	// bl 0x823fa8a0
	ctx.lr = 0x823F50A8;
	sub_823FA8A0(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823F50B4"))) PPC_WEAK_FUNC(sub_823F50B4);
PPC_FUNC_IMPL(__imp__sub_823F50B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823F50B8"))) PPC_WEAK_FUNC(sub_823F50B8);
PPC_FUNC_IMPL(__imp__sub_823F50B8) {
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
	// li r12,160
	ctx.r12.s64 = 160;
	// stvx128 v1,r1,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r1.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v1.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// std r7,192(r1)
	PPC_STORE_U64(ctx.r1.u32 + 192, ctx.r7.u64);
	// stfs f1,180(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 180, temp.u32);
	// stw r4,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r4.u32);
	// stw r5,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r5.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// std r8,200(r1)
	PPC_STORE_U64(ctx.r1.u32 + 200, ctx.r8.u64);
	// li r3,40
	ctx.r3.s64 = 40;
	// std r10,216(r1)
	PPC_STORE_U64(ctx.r1.u32 + 216, ctx.r10.u64);
	// std r9,208(r1)
	PPC_STORE_U64(ctx.r1.u32 + 208, ctx.r9.u64);
	// bl 0x82691500
	ctx.lr = 0x823F50FC;
	sub_82691500(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x823f5114
	if (ctx.cr0.eq) goto loc_823F5114;
	// bl 0x822b0f58
	ctx.lr = 0x823F510C;
	sub_822B0F58(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x823f5118
	goto loc_823F5118;
loc_823F5114:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
loc_823F5118:
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// bl 0x822b0dc8
	ctx.lr = 0x823F5128;
	sub_822B0DC8(ctx, base);
	// lwz r3,104(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// addi r5,r1,140
	ctx.r5.s64 = ctx.r1.s64 + 140;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823F5144;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,112(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// addi r5,r1,148
	ctx.r5.s64 = ctx.r1.s64 + 148;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823F5160;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,120(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823F517C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,128(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// addi r5,r1,180
	ctx.r5.s64 = ctx.r1.s64 + 180;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823F5198;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,136(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// addi r5,r1,192
	ctx.r5.s64 = ctx.r1.s64 + 192;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823F51B4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,144(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	// addi r5,r1,263
	ctx.r5.s64 = ctx.r1.s64 + 263;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823F51D0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,72(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823f51fc
	if (ctx.cr6.eq) goto loc_823F51FC;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x8291fc80
	ctx.lr = 0x823F51E4;
	sub_8291FC80(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x823567c0
	ctx.lr = 0x823F51EC;
	sub_823567C0(ctx, base);
	// addi r5,r31,56
	ctx.r5.s64 = ctx.r31.s64 + 56;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82256fe0
	ctx.lr = 0x823F51FC;
	sub_82256FE0(ctx, base);
loc_823F51FC:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82917848
	ctx.lr = 0x823F5208;
	sub_82917848(ctx, base);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823f5218
	if (ctx.cr6.eq) goto loc_823F5218;
	// bl 0x82241d18
	ctx.lr = 0x823F5218;
	sub_82241D18(ctx, base);
loc_823F5218:
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

__attribute__((alias("__imp__sub_823F5230"))) PPC_WEAK_FUNC(sub_823F5230);
PPC_FUNC_IMPL(__imp__sub_823F5230) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7670
	ctx.lr = 0x823F5238;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// bl 0x82918740
	ctx.lr = 0x823F5244;
	sub_82918740(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// li r28,0
	ctx.r28.s64 = 0;
	// addi r11,r11,-28264
	ctx.r11.s64 = ctx.r11.s64 + -28264;
	// stw r28,72(r26)
	PPC_STORE_U32(ctx.r26.u32 + 72, ctx.r28.u32);
	// li r3,24
	ctx.r3.s64 = 24;
	// stw r28,96(r26)
	PPC_STORE_U32(ctx.r26.u32 + 96, ctx.r28.u32);
	// stw r11,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r11.u32);
	// bl 0x82691500
	ctx.lr = 0x823F5264;
	sub_82691500(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x823f5284
	if (ctx.cr0.eq) goto loc_823F5284;
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x828e06c0
	ctx.lr = 0x823F527C;
	sub_828E06C0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x823f5288
	goto loc_823F5288;
loc_823F5284:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_823F5288:
	// addi r3,r26,104
	ctx.r3.s64 = ctx.r26.s64 + 104;
	// bl 0x823fa8a0
	ctx.lr = 0x823F5290;
	sub_823FA8A0(ctx, base);
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x82691500
	ctx.lr = 0x823F5298;
	sub_82691500(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x823f52b8
	if (ctx.cr0.eq) goto loc_823F52B8;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// stw r28,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r28.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r11,r11,28212
	ctx.r11.s64 = ctx.r11.s64 + 28212;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x823f52bc
	goto loc_823F52BC;
loc_823F52B8:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_823F52BC:
	// addi r3,r26,112
	ctx.r3.s64 = ctx.r26.s64 + 112;
	// bl 0x823fa8a0
	ctx.lr = 0x823F52C4;
	sub_823FA8A0(ctx, base);
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x82691500
	ctx.lr = 0x823F52CC;
	sub_82691500(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x823f52ec
	if (ctx.cr0.eq) goto loc_823F52EC;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// stw r28,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r28.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r11,r11,-31760
	ctx.r11.s64 = ctx.r11.s64 + -31760;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x823f52f0
	goto loc_823F52F0;
loc_823F52EC:
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
loc_823F52F0:
	// stw r28,120(r26)
	PPC_STORE_U32(ctx.r26.u32 + 120, ctx.r28.u32);
	// li r3,16
	ctx.r3.s64 = 16;
	// stw r28,124(r26)
	PPC_STORE_U32(ctx.r26.u32 + 124, ctx.r28.u32);
	// addi r31,r26,120
	ctx.r31.s64 = ctx.r26.s64 + 120;
	// bl 0x82691500
	ctx.lr = 0x823F5304;
	sub_82691500(ctx, base);
	// li r27,1
	ctx.r27.s64 = 1;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x823f5330
	if (ctx.cr0.eq) goto loc_823F5330;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// stw r29,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r29.u32);
	// stw r27,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r27.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r11,r11,-27204
	ctx.r11.s64 = ctx.r11.s64 + -27204;
	// stw r27,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r27.u32);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x823f5334
	goto loc_823F5334;
loc_823F5330:
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
loc_823F5334:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823f5344
	if (ctx.cr6.eq) goto loc_823F5344;
	// bl 0x82241d18
	ctx.lr = 0x823F5344;
	sub_82241D18(ctx, base);
loc_823F5344:
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// li r3,8
	ctx.r3.s64 = 8;
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
	// bl 0x82691500
	ctx.lr = 0x823F5354;
	sub_82691500(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x823f5374
	if (ctx.cr0.eq) goto loc_823F5374;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// stw r28,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r28.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r11,r11,-31736
	ctx.r11.s64 = ctx.r11.s64 + -31736;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x823f5378
	goto loc_823F5378;
loc_823F5374:
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
loc_823F5378:
	// stw r28,128(r26)
	PPC_STORE_U32(ctx.r26.u32 + 128, ctx.r28.u32);
	// li r3,16
	ctx.r3.s64 = 16;
	// stw r28,132(r26)
	PPC_STORE_U32(ctx.r26.u32 + 132, ctx.r28.u32);
	// addi r31,r26,128
	ctx.r31.s64 = ctx.r26.s64 + 128;
	// bl 0x82691500
	ctx.lr = 0x823F538C;
	sub_82691500(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x823f53b4
	if (ctx.cr0.eq) goto loc_823F53B4;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// stw r29,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r29.u32);
	// stw r27,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r27.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r11,r11,-27204
	ctx.r11.s64 = ctx.r11.s64 + -27204;
	// stw r27,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r27.u32);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x823f53b8
	goto loc_823F53B8;
loc_823F53B4:
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
loc_823F53B8:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823f53c8
	if (ctx.cr6.eq) goto loc_823F53C8;
	// bl 0x82241d18
	ctx.lr = 0x823F53C8;
	sub_82241D18(ctx, base);
loc_823F53C8:
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// li r3,8
	ctx.r3.s64 = 8;
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
	// bl 0x82691500
	ctx.lr = 0x823F53D8;
	sub_82691500(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r31,r11,-30364
	ctx.r31.s64 = ctx.r11.s64 + -30364;
	// beq 0x823f53f8
	if (ctx.cr0.eq) goto loc_823F53F8;
	// stw r28,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r28.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r31,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r31.u32);
	// b 0x823f53fc
	goto loc_823F53FC;
loc_823F53F8:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_823F53FC:
	// addi r3,r26,136
	ctx.r3.s64 = ctx.r26.s64 + 136;
	// bl 0x823fa8a0
	ctx.lr = 0x823F5404;
	sub_823FA8A0(ctx, base);
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x82691500
	ctx.lr = 0x823F540C;
	sub_82691500(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x823f5424
	if (ctx.cr0.eq) goto loc_823F5424;
	// stw r28,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r28.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r31,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r31.u32);
	// b 0x823f5428
	goto loc_823F5428;
loc_823F5424:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_823F5428:
	// addi r3,r26,144
	ctx.r3.s64 = ctx.r26.s64 + 144;
	// bl 0x823fa8a0
	ctx.lr = 0x823F5430;
	sub_823FA8A0(ctx, base);
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x82691500
	ctx.lr = 0x823F5438;
	sub_82691500(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x823f5458
	if (ctx.cr0.eq) goto loc_823F5458;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// stw r28,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r28.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r11,r11,-32000
	ctx.r11.s64 = ctx.r11.s64 + -32000;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x823f545c
	goto loc_823F545C;
loc_823F5458:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
loc_823F545C:
	// addi r3,r26,152
	ctx.r3.s64 = ctx.r26.s64 + 152;
	// bl 0x823fa8a0
	ctx.lr = 0x823F5464;
	sub_823FA8A0(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82fa76c0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823F5470"))) PPC_WEAK_FUNC(sub_823F5470);
PPC_FUNC_IMPL(__imp__sub_823F5470) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x823F5478;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r12,192
	ctx.r12.s64 = 192;
	// stvx128 v1,r1,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r1.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v1.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stw r4,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r4.u32);
	// stw r5,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r5.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r6,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r6.u32);
	// li r3,40
	ctx.r3.s64 = 40;
	// stw r7,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r7.u32);
	// li r12,208
	ctx.r12.s64 = 208;
	// stvx128 v2,r1,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r1.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v2.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// mr r29,r8
	ctx.r29.u64 = ctx.r8.u64;
	// bl 0x82691500
	ctx.lr = 0x823F54AC;
	sub_82691500(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x823f54c4
	if (ctx.cr0.eq) goto loc_823F54C4;
	// bl 0x822b0f58
	ctx.lr = 0x823F54BC;
	sub_822B0F58(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x823f54c8
	goto loc_823F54C8;
loc_823F54C4:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
loc_823F54C8:
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// bl 0x822b0dc8
	ctx.lr = 0x823F54D8;
	sub_822B0DC8(ctx, base);
	// lwz r3,104(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// addi r5,r1,156
	ctx.r5.s64 = ctx.r1.s64 + 156;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823F54F4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,112(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// addi r5,r1,164
	ctx.r5.s64 = ctx.r1.s64 + 164;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823F5510;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,120(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// addi r5,r1,172
	ctx.r5.s64 = ctx.r1.s64 + 172;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823F552C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,128(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// addi r5,r1,180
	ctx.r5.s64 = ctx.r1.s64 + 180;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823F5548;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,136(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// addi r5,r1,192
	ctx.r5.s64 = ctx.r1.s64 + 192;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823F5564;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,144(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	// addi r5,r1,208
	ctx.r5.s64 = ctx.r1.s64 + 208;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823F5580;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,152(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 152);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823F559C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,72(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823f55c8
	if (ctx.cr6.eq) goto loc_823F55C8;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x8291fc80
	ctx.lr = 0x823F55B0;
	sub_8291FC80(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x823567c0
	ctx.lr = 0x823F55B8;
	sub_823567C0(ctx, base);
	// addi r5,r31,56
	ctx.r5.s64 = ctx.r31.s64 + 56;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82257148
	ctx.lr = 0x823F55C8;
	sub_82257148(ctx, base);
loc_823F55C8:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82917848
	ctx.lr = 0x823F55D4;
	sub_82917848(ctx, base);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823f55e4
	if (ctx.cr6.eq) goto loc_823F55E4;
	// bl 0x82241d18
	ctx.lr = 0x823F55E4;
	sub_82241D18(ctx, base);
loc_823F55E4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823F55EC"))) PPC_WEAK_FUNC(sub_823F55EC);
PPC_FUNC_IMPL(__imp__sub_823F55EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823F55F0"))) PPC_WEAK_FUNC(sub_823F55F0);
PPC_FUNC_IMPL(__imp__sub_823F55F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7674
	ctx.lr = 0x823F55F8;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// bl 0x82918740
	ctx.lr = 0x823F5604;
	sub_82918740(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r11,r11,-28248
	ctx.r11.s64 = ctx.r11.s64 + -28248;
	// stw r30,72(r27)
	PPC_STORE_U32(ctx.r27.u32 + 72, ctx.r30.u32);
	// li r3,8
	ctx.r3.s64 = 8;
	// stw r30,96(r27)
	PPC_STORE_U32(ctx.r27.u32 + 96, ctx.r30.u32);
	// stw r11,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
	// bl 0x82691500
	ctx.lr = 0x823F5624;
	sub_82691500(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r31,r11,-30364
	ctx.r31.s64 = ctx.r11.s64 + -30364;
	// beq 0x823f5644
	if (ctx.cr0.eq) goto loc_823F5644;
	// stw r30,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r30.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r31,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r31.u32);
	// b 0x823f5648
	goto loc_823F5648;
loc_823F5644:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
loc_823F5648:
	// addi r3,r27,104
	ctx.r3.s64 = ctx.r27.s64 + 104;
	// bl 0x823fa8a0
	ctx.lr = 0x823F5650;
	sub_823FA8A0(ctx, base);
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x82691500
	ctx.lr = 0x823F5658;
	sub_82691500(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x823f5678
	if (ctx.cr0.eq) goto loc_823F5678;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// stw r30,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r30.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r11,r11,-31712
	ctx.r11.s64 = ctx.r11.s64 + -31712;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x823f567c
	goto loc_823F567C;
loc_823F5678:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
loc_823F567C:
	// addi r3,r27,112
	ctx.r3.s64 = ctx.r27.s64 + 112;
	// bl 0x823fa8a0
	ctx.lr = 0x823F5684;
	sub_823FA8A0(ctx, base);
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x82691500
	ctx.lr = 0x823F568C;
	sub_82691500(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x823f56a4
	if (ctx.cr0.eq) goto loc_823F56A4;
	// stw r30,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r30.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r31,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r31.u32);
	// b 0x823f56a8
	goto loc_823F56A8;
loc_823F56A4:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
loc_823F56A8:
	// addi r3,r27,120
	ctx.r3.s64 = ctx.r27.s64 + 120;
	// bl 0x823fa8a0
	ctx.lr = 0x823F56B0;
	sub_823FA8A0(ctx, base);
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x82691500
	ctx.lr = 0x823F56B8;
	sub_82691500(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x823f56d8
	if (ctx.cr0.eq) goto loc_823F56D8;
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// stw r30,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r30.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r11,r11,-30340
	ctx.r11.s64 = ctx.r11.s64 + -30340;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x823f56dc
	goto loc_823F56DC;
loc_823F56D8:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
loc_823F56DC:
	// addi r3,r27,128
	ctx.r3.s64 = ctx.r27.s64 + 128;
	// bl 0x823fa8a0
	ctx.lr = 0x823F56E4;
	sub_823FA8A0(ctx, base);
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x82691500
	ctx.lr = 0x823F56EC;
	sub_82691500(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x823f570c
	if (ctx.cr0.eq) goto loc_823F570C;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// stw r30,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r30.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r11,r11,-31736
	ctx.r11.s64 = ctx.r11.s64 + -31736;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x823f5710
	goto loc_823F5710;
loc_823F570C:
	// mr r28,r30
	ctx.r28.u64 = ctx.r30.u64;
loc_823F5710:
	// stw r30,136(r27)
	PPC_STORE_U32(ctx.r27.u32 + 136, ctx.r30.u32);
	// li r3,16
	ctx.r3.s64 = 16;
	// stw r30,140(r27)
	PPC_STORE_U32(ctx.r27.u32 + 140, ctx.r30.u32);
	// addi r31,r27,136
	ctx.r31.s64 = ctx.r27.s64 + 136;
	// bl 0x82691500
	ctx.lr = 0x823F5724;
	sub_82691500(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x823f5750
	if (ctx.cr0.eq) goto loc_823F5750;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// stw r28,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r28.u32);
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
	// b 0x823f5754
	goto loc_823F5754;
loc_823F5750:
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
loc_823F5754:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823f5764
	if (ctx.cr6.eq) goto loc_823F5764;
	// bl 0x82241d18
	ctx.lr = 0x823F5764;
	sub_82241D18(ctx, base);
loc_823F5764:
	// stw r29,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r29.u32);
	// li r3,8
	ctx.r3.s64 = 8;
	// stw r28,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r28.u32);
	// bl 0x82691500
	ctx.lr = 0x823F5774;
	sub_82691500(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x823f5794
	if (ctx.cr0.eq) goto loc_823F5794;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// stw r30,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r30.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r11,r11,-32000
	ctx.r11.s64 = ctx.r11.s64 + -32000;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x823f5798
	goto loc_823F5798;
loc_823F5794:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
loc_823F5798:
	// addi r3,r27,144
	ctx.r3.s64 = ctx.r27.s64 + 144;
	// bl 0x823fa8a0
	ctx.lr = 0x823F57A0;
	sub_823FA8A0(ctx, base);
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x82691500
	ctx.lr = 0x823F57A8;
	sub_82691500(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x823f57c8
	if (ctx.cr0.eq) goto loc_823F57C8;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// stw r30,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r30.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r11,r11,-31688
	ctx.r11.s64 = ctx.r11.s64 + -31688;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x823f57cc
	goto loc_823F57CC;
loc_823F57C8:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
loc_823F57CC:
	// addi r3,r27,152
	ctx.r3.s64 = ctx.r27.s64 + 152;
	// bl 0x823fa8a0
	ctx.lr = 0x823F57D4;
	sub_823FA8A0(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823F57E0"))) PPC_WEAK_FUNC(sub_823F57E0);
PPC_FUNC_IMPL(__imp__sub_823F57E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x823F57E8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r12,160
	ctx.r12.s64 = 160;
	// stvx128 v1,r1,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r1.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v1.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stw r6,220(r1)
	PPC_STORE_U32(ctx.r1.u32 + 220, ctx.r6.u32);
	// stfs f1,212(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 212, temp.u32);
	// stw r8,236(r1)
	PPC_STORE_U32(ctx.r1.u32 + 236, ctx.r8.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r12,192
	ctx.r12.s64 = 192;
	// stvx128 v2,r1,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r1.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v2.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r3,40
	ctx.r3.s64 = 40;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// bl 0x82691500
	ctx.lr = 0x823F581C;
	sub_82691500(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x823f5834
	if (ctx.cr0.eq) goto loc_823F5834;
	// bl 0x822b0f58
	ctx.lr = 0x823F582C;
	sub_822B0F58(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x823f5838
	goto loc_823F5838;
loc_823F5834:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
loc_823F5838:
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// bl 0x822b0dc8
	ctx.lr = 0x823F5848;
	sub_822B0DC8(ctx, base);
	// lwz r3,104(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823F5864;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,112(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823F5880;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,120(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// addi r5,r1,192
	ctx.r5.s64 = ctx.r1.s64 + 192;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823F589C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,128(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// addi r5,r1,212
	ctx.r5.s64 = ctx.r1.s64 + 212;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823F58B8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,136(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// addi r5,r1,220
	ctx.r5.s64 = ctx.r1.s64 + 220;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823F58D4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,144(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823F58F0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,152(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 152);
	// addi r5,r1,236
	ctx.r5.s64 = ctx.r1.s64 + 236;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823F590C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,72(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823f5938
	if (ctx.cr6.eq) goto loc_823F5938;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x8291fc80
	ctx.lr = 0x823F5920;
	sub_8291FC80(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x823567c0
	ctx.lr = 0x823F5928;
	sub_823567C0(ctx, base);
	// addi r5,r31,56
	ctx.r5.s64 = ctx.r31.s64 + 56;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82257278
	ctx.lr = 0x823F5938;
	sub_82257278(ctx, base);
loc_823F5938:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82917848
	ctx.lr = 0x823F5944;
	sub_82917848(ctx, base);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823f5954
	if (ctx.cr6.eq) goto loc_823F5954;
	// bl 0x82241d18
	ctx.lr = 0x823F5954;
	sub_82241D18(ctx, base);
loc_823F5954:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823F595C"))) PPC_WEAK_FUNC(sub_823F595C);
PPC_FUNC_IMPL(__imp__sub_823F595C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823F5960"))) PPC_WEAK_FUNC(sub_823F5960);
PPC_FUNC_IMPL(__imp__sub_823F5960) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7670
	ctx.lr = 0x823F5968;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// bl 0x82918740
	ctx.lr = 0x823F5974;
	sub_82918740(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r11,r11,-28232
	ctx.r11.s64 = ctx.r11.s64 + -28232;
	// stw r30,72(r26)
	PPC_STORE_U32(ctx.r26.u32 + 72, ctx.r30.u32);
	// li r3,8
	ctx.r3.s64 = 8;
	// stw r30,96(r26)
	PPC_STORE_U32(ctx.r26.u32 + 96, ctx.r30.u32);
	// stw r11,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r11.u32);
	// bl 0x82691500
	ctx.lr = 0x823F5994;
	sub_82691500(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x823f59b4
	if (ctx.cr0.eq) goto loc_823F59B4;
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// stw r30,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r30.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r11,r11,-30364
	ctx.r11.s64 = ctx.r11.s64 + -30364;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x823f59b8
	goto loc_823F59B8;
loc_823F59B4:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
loc_823F59B8:
	// addi r3,r26,104
	ctx.r3.s64 = ctx.r26.s64 + 104;
	// bl 0x823fa8a0
	ctx.lr = 0x823F59C0;
	sub_823FA8A0(ctx, base);
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x82691500
	ctx.lr = 0x823F59C8;
	sub_82691500(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x823f59e8
	if (ctx.cr0.eq) goto loc_823F59E8;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// stw r30,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r30.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r11,r11,-31712
	ctx.r11.s64 = ctx.r11.s64 + -31712;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x823f59ec
	goto loc_823F59EC;
loc_823F59E8:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
loc_823F59EC:
	// addi r3,r26,112
	ctx.r3.s64 = ctx.r26.s64 + 112;
	// bl 0x823fa8a0
	ctx.lr = 0x823F59F4;
	sub_823FA8A0(ctx, base);
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x82691500
	ctx.lr = 0x823F59FC;
	sub_82691500(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x823f5a1c
	if (ctx.cr0.eq) goto loc_823F5A1C;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// stw r30,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r30.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r11,r11,-31856
	ctx.r11.s64 = ctx.r11.s64 + -31856;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x823f5a20
	goto loc_823F5A20;
loc_823F5A1C:
	// mr r28,r30
	ctx.r28.u64 = ctx.r30.u64;
loc_823F5A20:
	// stw r30,120(r26)
	PPC_STORE_U32(ctx.r26.u32 + 120, ctx.r30.u32);
	// li r3,16
	ctx.r3.s64 = 16;
	// stw r30,124(r26)
	PPC_STORE_U32(ctx.r26.u32 + 124, ctx.r30.u32);
	// addi r31,r26,120
	ctx.r31.s64 = ctx.r26.s64 + 120;
	// bl 0x82691500
	ctx.lr = 0x823F5A34;
	sub_82691500(ctx, base);
	// li r27,1
	ctx.r27.s64 = 1;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x823f5a60
	if (ctx.cr0.eq) goto loc_823F5A60;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// stw r28,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r28.u32);
	// stw r27,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r27.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r11,r11,-27204
	ctx.r11.s64 = ctx.r11.s64 + -27204;
	// stw r27,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r27.u32);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x823f5a64
	goto loc_823F5A64;
loc_823F5A60:
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
loc_823F5A64:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823f5a74
	if (ctx.cr6.eq) goto loc_823F5A74;
	// bl 0x82241d18
	ctx.lr = 0x823F5A74;
	sub_82241D18(ctx, base);
loc_823F5A74:
	// stw r29,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r29.u32);
	// li r3,8
	ctx.r3.s64 = 8;
	// stw r28,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r28.u32);
	// bl 0x82691500
	ctx.lr = 0x823F5A84;
	sub_82691500(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x823f5aa4
	if (ctx.cr0.eq) goto loc_823F5AA4;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// stw r30,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r30.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r11,r11,-31880
	ctx.r11.s64 = ctx.r11.s64 + -31880;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x823f5aa8
	goto loc_823F5AA8;
loc_823F5AA4:
	// mr r28,r30
	ctx.r28.u64 = ctx.r30.u64;
loc_823F5AA8:
	// stw r30,128(r26)
	PPC_STORE_U32(ctx.r26.u32 + 128, ctx.r30.u32);
	// li r3,16
	ctx.r3.s64 = 16;
	// stw r30,132(r26)
	PPC_STORE_U32(ctx.r26.u32 + 132, ctx.r30.u32);
	// addi r31,r26,128
	ctx.r31.s64 = ctx.r26.s64 + 128;
	// bl 0x82691500
	ctx.lr = 0x823F5ABC;
	sub_82691500(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x823f5ae4
	if (ctx.cr0.eq) goto loc_823F5AE4;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// stw r28,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r28.u32);
	// stw r27,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r27.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r11,r11,-27204
	ctx.r11.s64 = ctx.r11.s64 + -27204;
	// stw r27,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r27.u32);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x823f5ae8
	goto loc_823F5AE8;
loc_823F5AE4:
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
loc_823F5AE8:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823f5af8
	if (ctx.cr6.eq) goto loc_823F5AF8;
	// bl 0x82241d18
	ctx.lr = 0x823F5AF8;
	sub_82241D18(ctx, base);
loc_823F5AF8:
	// stw r29,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r29.u32);
	// li r3,8
	ctx.r3.s64 = 8;
	// stw r28,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r28.u32);
	// bl 0x82691500
	ctx.lr = 0x823F5B08;
	sub_82691500(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x823f5b28
	if (ctx.cr0.eq) goto loc_823F5B28;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// stw r30,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r30.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r11,r11,-31904
	ctx.r11.s64 = ctx.r11.s64 + -31904;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x823f5b2c
	goto loc_823F5B2C;
loc_823F5B28:
	// mr r28,r30
	ctx.r28.u64 = ctx.r30.u64;
loc_823F5B2C:
	// stw r30,136(r26)
	PPC_STORE_U32(ctx.r26.u32 + 136, ctx.r30.u32);
	// li r3,16
	ctx.r3.s64 = 16;
	// stw r30,140(r26)
	PPC_STORE_U32(ctx.r26.u32 + 140, ctx.r30.u32);
	// addi r31,r26,136
	ctx.r31.s64 = ctx.r26.s64 + 136;
	// bl 0x82691500
	ctx.lr = 0x823F5B40;
	sub_82691500(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x823f5b68
	if (ctx.cr0.eq) goto loc_823F5B68;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// stw r28,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r28.u32);
	// stw r27,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r27.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r11,r11,-27204
	ctx.r11.s64 = ctx.r11.s64 + -27204;
	// stw r27,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r27.u32);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x823f5b6c
	goto loc_823F5B6C;
loc_823F5B68:
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
loc_823F5B6C:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823f5b7c
	if (ctx.cr6.eq) goto loc_823F5B7C;
	// bl 0x82241d18
	ctx.lr = 0x823F5B7C;
	sub_82241D18(ctx, base);
loc_823F5B7C:
	// stw r29,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r29.u32);
	// li r3,8
	ctx.r3.s64 = 8;
	// stw r28,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r28.u32);
	// bl 0x82691500
	ctx.lr = 0x823F5B8C;
	sub_82691500(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x823f5bac
	if (ctx.cr0.eq) goto loc_823F5BAC;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// stw r30,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r30.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r11,r11,-31832
	ctx.r11.s64 = ctx.r11.s64 + -31832;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x823f5bb0
	goto loc_823F5BB0;
loc_823F5BAC:
	// mr r28,r30
	ctx.r28.u64 = ctx.r30.u64;
loc_823F5BB0:
	// stw r30,144(r26)
	PPC_STORE_U32(ctx.r26.u32 + 144, ctx.r30.u32);
	// li r3,16
	ctx.r3.s64 = 16;
	// stw r30,148(r26)
	PPC_STORE_U32(ctx.r26.u32 + 148, ctx.r30.u32);
	// addi r31,r26,144
	ctx.r31.s64 = ctx.r26.s64 + 144;
	// bl 0x82691500
	ctx.lr = 0x823F5BC4;
	sub_82691500(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x823f5bec
	if (ctx.cr0.eq) goto loc_823F5BEC;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// stw r28,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r28.u32);
	// stw r27,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r27.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r11,r11,-27204
	ctx.r11.s64 = ctx.r11.s64 + -27204;
	// stw r27,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r27.u32);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x823f5bf0
	goto loc_823F5BF0;
loc_823F5BEC:
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
loc_823F5BF0:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823f5c00
	if (ctx.cr6.eq) goto loc_823F5C00;
	// bl 0x82241d18
	ctx.lr = 0x823F5C00;
	sub_82241D18(ctx, base);
loc_823F5C00:
	// stw r29,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r29.u32);
	// li r3,8
	ctx.r3.s64 = 8;
	// stw r28,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r28.u32);
	// bl 0x82691500
	ctx.lr = 0x823F5C10;
	sub_82691500(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x823f5c30
	if (ctx.cr0.eq) goto loc_823F5C30;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// stw r30,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r30.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r11,r11,-31688
	ctx.r11.s64 = ctx.r11.s64 + -31688;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x823f5c34
	goto loc_823F5C34;
loc_823F5C30:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
loc_823F5C34:
	// addi r3,r26,152
	ctx.r3.s64 = ctx.r26.s64 + 152;
	// bl 0x823fa8a0
	ctx.lr = 0x823F5C3C;
	sub_823FA8A0(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82fa76c0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823F5C48"))) PPC_WEAK_FUNC(sub_823F5C48);
PPC_FUNC_IMPL(__imp__sub_823F5C48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7670
	ctx.lr = 0x823F5C50;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r5,204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 204, ctx.r5.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r9,236(r1)
	PPC_STORE_U32(ctx.r1.u32 + 236, ctx.r9.u32);
	// li r3,40
	ctx.r3.s64 = 40;
	// li r12,176
	ctx.r12.s64 = 176;
	// stvx128 v1,r1,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r1.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v1.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// mr r26,r8
	ctx.r26.u64 = ctx.r8.u64;
	// bl 0x82691500
	ctx.lr = 0x823F5C80;
	sub_82691500(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x823f5c98
	if (ctx.cr0.eq) goto loc_823F5C98;
	// bl 0x822b0f58
	ctx.lr = 0x823F5C90;
	sub_822B0F58(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x823f5c9c
	goto loc_823F5C9C;
loc_823F5C98:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
loc_823F5C9C:
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// bl 0x822b0dc8
	ctx.lr = 0x823F5CAC;
	sub_822B0DC8(ctx, base);
	// lwz r3,104(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// addi r5,r1,176
	ctx.r5.s64 = ctx.r1.s64 + 176;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823F5CC8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,112(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823F5CE4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,120(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// addi r5,r1,204
	ctx.r5.s64 = ctx.r1.s64 + 204;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823F5D00;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,128(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823F5D1C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,136(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823F5D38;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,144(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823F5D54;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,152(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 152);
	// addi r5,r1,236
	ctx.r5.s64 = ctx.r1.s64 + 236;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823F5D70;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,72(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823f5d9c
	if (ctx.cr6.eq) goto loc_823F5D9C;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x8291fc80
	ctx.lr = 0x823F5D84;
	sub_8291FC80(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x823567c0
	ctx.lr = 0x823F5D8C;
	sub_823567C0(ctx, base);
	// addi r5,r31,56
	ctx.r5.s64 = ctx.r31.s64 + 56;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822573e0
	ctx.lr = 0x823F5D9C;
	sub_822573E0(ctx, base);
loc_823F5D9C:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82917848
	ctx.lr = 0x823F5DA8;
	sub_82917848(ctx, base);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823f5db8
	if (ctx.cr6.eq) goto loc_823F5DB8;
	// bl 0x82241d18
	ctx.lr = 0x823F5DB8;
	sub_82241D18(ctx, base);
loc_823F5DB8:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82fa76c0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823F5DC0"))) PPC_WEAK_FUNC(sub_823F5DC0);
PPC_FUNC_IMPL(__imp__sub_823F5DC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x823F5DC8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x82918740
	ctx.lr = 0x823F5DD4;
	sub_82918740(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r11,r11,-28216
	ctx.r11.s64 = ctx.r11.s64 + -28216;
	// stw r31,72(r29)
	PPC_STORE_U32(ctx.r29.u32 + 72, ctx.r31.u32);
	// li r3,8
	ctx.r3.s64 = 8;
	// stw r31,96(r29)
	PPC_STORE_U32(ctx.r29.u32 + 96, ctx.r31.u32);
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// bl 0x82691500
	ctx.lr = 0x823F5DF4;
	sub_82691500(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x823f5e14
	if (ctx.cr0.eq) goto loc_823F5E14;
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// stw r31,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r31.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r11,r11,-30364
	ctx.r11.s64 = ctx.r11.s64 + -30364;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x823f5e18
	goto loc_823F5E18;
loc_823F5E14:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
loc_823F5E18:
	// addi r3,r29,104
	ctx.r3.s64 = ctx.r29.s64 + 104;
	// bl 0x823fa8a0
	ctx.lr = 0x823F5E20;
	sub_823FA8A0(ctx, base);
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x82691500
	ctx.lr = 0x823F5E28;
	sub_82691500(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x823f5e48
	if (ctx.cr0.eq) goto loc_823F5E48;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// stw r31,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r31.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r11,r11,-31712
	ctx.r11.s64 = ctx.r11.s64 + -31712;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x823f5e4c
	goto loc_823F5E4C;
loc_823F5E48:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
loc_823F5E4C:
	// addi r3,r29,112
	ctx.r3.s64 = ctx.r29.s64 + 112;
	// bl 0x823fa8a0
	ctx.lr = 0x823F5E54;
	sub_823FA8A0(ctx, base);
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x82691500
	ctx.lr = 0x823F5E5C;
	sub_82691500(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r30,r11,-32128
	ctx.r30.s64 = ctx.r11.s64 + -32128;
	// beq 0x823f5e7c
	if (ctx.cr0.eq) goto loc_823F5E7C;
	// stw r31,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r31.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r30,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r30.u32);
	// b 0x823f5e80
	goto loc_823F5E80;
loc_823F5E7C:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
loc_823F5E80:
	// addi r3,r29,120
	ctx.r3.s64 = ctx.r29.s64 + 120;
	// bl 0x823fa8a0
	ctx.lr = 0x823F5E88;
	sub_823FA8A0(ctx, base);
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x82691500
	ctx.lr = 0x823F5E90;
	sub_82691500(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x823f5ea8
	if (ctx.cr0.eq) goto loc_823F5EA8;
	// stw r31,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r31.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r30,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r30.u32);
	// b 0x823f5eac
	goto loc_823F5EAC;
loc_823F5EA8:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
loc_823F5EAC:
	// addi r3,r29,128
	ctx.r3.s64 = ctx.r29.s64 + 128;
	// bl 0x823fa8a0
	ctx.lr = 0x823F5EB4;
	sub_823FA8A0(ctx, base);
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x82691500
	ctx.lr = 0x823F5EBC;
	sub_82691500(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x823f5edc
	if (ctx.cr0.eq) goto loc_823F5EDC;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// stw r31,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r31.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r11,r11,-32000
	ctx.r11.s64 = ctx.r11.s64 + -32000;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x823f5ee0
	goto loc_823F5EE0;
loc_823F5EDC:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
loc_823F5EE0:
	// addi r3,r29,136
	ctx.r3.s64 = ctx.r29.s64 + 136;
	// bl 0x823fa8a0
	ctx.lr = 0x823F5EE8;
	sub_823FA8A0(ctx, base);
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x82691500
	ctx.lr = 0x823F5EF0;
	sub_82691500(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x823f5f10
	if (ctx.cr0.eq) goto loc_823F5F10;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// stw r31,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r31.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r11,r11,-31688
	ctx.r11.s64 = ctx.r11.s64 + -31688;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x823f5f14
	goto loc_823F5F14;
loc_823F5F10:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
loc_823F5F14:
	// addi r3,r29,144
	ctx.r3.s64 = ctx.r29.s64 + 144;
	// bl 0x823fa8a0
	ctx.lr = 0x823F5F1C;
	sub_823FA8A0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823F5F28"))) PPC_WEAK_FUNC(sub_823F5F28);
PPC_FUNC_IMPL(__imp__sub_823F5F28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x823F5F30;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r30,0
	ctx.r30.s64 = 0;
	// stb r5,207(r1)
	PPC_STORE_U8(ctx.r1.u32 + 207, ctx.r5.u8);
	// stw r7,220(r1)
	PPC_STORE_U32(ctx.r1.u32 + 220, ctx.r7.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stb r30,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r30.u8);
	// li r3,40
	ctx.r3.s64 = 40;
	// li r12,176
	ctx.r12.s64 = 176;
	// stvx128 v1,r1,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r1.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v1.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// bl 0x82691500
	ctx.lr = 0x823F5F60;
	sub_82691500(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x823f5f74
	if (ctx.cr0.eq) goto loc_823F5F74;
	// bl 0x822b0f58
	ctx.lr = 0x823F5F6C;
	sub_822B0F58(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x823f5f78
	goto loc_823F5F78;
loc_823F5F74:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
loc_823F5F78:
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r30.u32);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// bl 0x822b0dc8
	ctx.lr = 0x823F5F88;
	sub_822B0DC8(ctx, base);
	// lwz r3,104(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// addi r5,r1,176
	ctx.r5.s64 = ctx.r1.s64 + 176;
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823F5FA4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,112(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823F5FC0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,120(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823F5FDC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,128(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// addi r5,r1,207
	ctx.r5.s64 = ctx.r1.s64 + 207;
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823F5FF8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,136(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823F6014;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,144(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	// addi r5,r1,220
	ctx.r5.s64 = ctx.r1.s64 + 220;
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823F6030;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,72(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823f605c
	if (ctx.cr6.eq) goto loc_823F605C;
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x8291fc80
	ctx.lr = 0x823F6044;
	sub_8291FC80(ctx, base);
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x823567c0
	ctx.lr = 0x823F604C;
	sub_823567C0(ctx, base);
	// addi r5,r31,56
	ctx.r5.s64 = ctx.r31.s64 + 56;
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82257560
	ctx.lr = 0x823F605C;
	sub_82257560(ctx, base);
loc_823F605C:
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82917848
	ctx.lr = 0x823F6068;
	sub_82917848(ctx, base);
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823f6078
	if (ctx.cr6.eq) goto loc_823F6078;
	// bl 0x82241d18
	ctx.lr = 0x823F6078;
	sub_82241D18(ctx, base);
loc_823F6078:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823F6080"))) PPC_WEAK_FUNC(sub_823F6080);
PPC_FUNC_IMPL(__imp__sub_823F6080) {
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
	// bl 0x82918740
	ctx.lr = 0x823F609C;
	sub_82918740(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r11,r11,-28168
	ctx.r11.s64 = ctx.r11.s64 + -28168;
	// stw r30,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r30.u32);
	// li r3,8
	ctx.r3.s64 = 8;
	// stw r30,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r30.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x82691500
	ctx.lr = 0x823F60BC;
	sub_82691500(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x823f60dc
	if (ctx.cr0.eq) goto loc_823F60DC;
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// stw r30,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r30.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r11,r11,-32128
	ctx.r11.s64 = ctx.r11.s64 + -32128;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x823f60e0
	goto loc_823F60E0;
loc_823F60DC:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
loc_823F60E0:
	// addi r3,r31,104
	ctx.r3.s64 = ctx.r31.s64 + 104;
	// bl 0x823fa8a0
	ctx.lr = 0x823F60E8;
	sub_823FA8A0(ctx, base);
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x82691500
	ctx.lr = 0x823F60F0;
	sub_82691500(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x823f6110
	if (ctx.cr0.eq) goto loc_823F6110;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// stw r30,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r30.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r11,r11,28212
	ctx.r11.s64 = ctx.r11.s64 + 28212;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x823f6114
	goto loc_823F6114;
loc_823F6110:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
loc_823F6114:
	// addi r3,r31,112
	ctx.r3.s64 = ctx.r31.s64 + 112;
	// bl 0x823fa8a0
	ctx.lr = 0x823F611C;
	sub_823FA8A0(ctx, base);
	// li r3,24
	ctx.r3.s64 = 24;
	// bl 0x82691500
	ctx.lr = 0x823F6124;
	sub_82691500(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x823f6144
	if (ctx.cr0.eq) goto loc_823F6144;
	// li r6,-1
	ctx.r6.s64 = -1;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x828e06c0
	ctx.lr = 0x823F613C;
	sub_828E06C0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x823f6148
	goto loc_823F6148;
loc_823F6144:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
loc_823F6148:
	// addi r3,r31,120
	ctx.r3.s64 = ctx.r31.s64 + 120;
	// bl 0x823fa8a0
	ctx.lr = 0x823F6150;
	sub_823FA8A0(ctx, base);
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x82691500
	ctx.lr = 0x823F6158;
	sub_82691500(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x823f6178
	if (ctx.cr0.eq) goto loc_823F6178;
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// stw r30,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r30.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r11,r11,-30364
	ctx.r11.s64 = ctx.r11.s64 + -30364;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// b 0x823f617c
	goto loc_823F617C;
loc_823F6178:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
loc_823F617C:
	// addi r3,r31,128
	ctx.r3.s64 = ctx.r31.s64 + 128;
	// bl 0x823fa8a0
	ctx.lr = 0x823F6184;
	sub_823FA8A0(ctx, base);
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

__attribute__((alias("__imp__sub_823F61A0"))) PPC_WEAK_FUNC(sub_823F61A0);
PPC_FUNC_IMPL(__imp__sub_823F61A0) {
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
	// stb r4,143(r1)
	PPC_STORE_U8(ctx.r1.u32 + 143, ctx.r4.u8);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r5,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r5.u32);
	// li r3,40
	ctx.r3.s64 = 40;
	// stw r6,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r6.u32);
	// li r12,160
	ctx.r12.s64 = 160;
	// stvx128 v1,r1,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r1.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v1.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// bl 0x82691500
	ctx.lr = 0x823F61D4;
	sub_82691500(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x823f61ec
	if (ctx.cr0.eq) goto loc_823F61EC;
	// bl 0x822b0f58
	ctx.lr = 0x823F61E4;
	sub_822B0F58(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x823f61f0
	goto loc_823F61F0;
loc_823F61EC:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
loc_823F61F0:
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// bl 0x822b0dc8
	ctx.lr = 0x823F6200;
	sub_822B0DC8(ctx, base);
	// lwz r3,104(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// addi r5,r1,143
	ctx.r5.s64 = ctx.r1.s64 + 143;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823F621C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,112(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// addi r5,r1,148
	ctx.r5.s64 = ctx.r1.s64 + 148;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823F6238;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,120(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// addi r5,r1,156
	ctx.r5.s64 = ctx.r1.s64 + 156;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823F6254;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,128(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823F6270;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,72(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x823f629c
	if (ctx.cr6.eq) goto loc_823F629C;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x8291fc80
	ctx.lr = 0x823F6284;
	sub_8291FC80(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x823567c0
	ctx.lr = 0x823F628C;
	sub_823567C0(ctx, base);
	// addi r5,r31,56
	ctx.r5.s64 = ctx.r31.s64 + 56;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822576a0
	ctx.lr = 0x823F629C;
	sub_822576A0(ctx, base);
loc_823F629C:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82917848
	ctx.lr = 0x823F62A8;
	sub_82917848(ctx, base);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823f62b8
	if (ctx.cr6.eq) goto loc_823F62B8;
	// bl 0x82241d18
	ctx.lr = 0x823F62B8;
	sub_82241D18(ctx, base);
loc_823F62B8:
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

__attribute__((alias("__imp__sub_823F62D0"))) PPC_WEAK_FUNC(sub_823F62D0);
PPC_FUNC_IMPL(__imp__sub_823F62D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x823F62D8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// lwz r30,4(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// lwz r29,0(r4)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// beq cr6,0x823f6324
	if (ctx.cr6.eq) goto loc_823F6324;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x826abc90
	ctx.lr = 0x823F6304;
	sub_826ABC90(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823f6324
	if (ctx.cr0.eq) goto loc_823F6324;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823f631c
	if (ctx.cr6.eq) goto loc_823F631C;
	// bl 0x82241d18
	ctx.lr = 0x823F631C;
	sub_82241D18(ctx, base);
loc_823F631C:
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
loc_823F6324:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823F6330"))) PPC_WEAK_FUNC(sub_823F6330);
PPC_FUNC_IMPL(__imp__sub_823F6330) {
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
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// cmplw cr6,r8,r4
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x823f636c
	if (ctx.cr6.eq) goto loc_823F636C;
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// stw r9,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r9.u32);
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// stw r9,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r9.u32);
loc_823F636C:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823f6384
	if (ctx.cr6.eq) goto loc_823F6384;
	// bl 0x82241d18
	ctx.lr = 0x823F6384;
	sub_82241D18(ctx, base);
loc_823F6384:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
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

__attribute__((alias("__imp__sub_823F639C"))) PPC_WEAK_FUNC(sub_823F639C);
PPC_FUNC_IMPL(__imp__sub_823F639C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823F63A0"))) PPC_WEAK_FUNC(sub_823F63A0);
PPC_FUNC_IMPL(__imp__sub_823F63A0) {
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
	// addi r31,r3,56
	ctx.r31.s64 = ctx.r3.s64 + 56;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplw cr6,r31,r4
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x823f6414
	if (ctx.cr6.eq) goto loc_823F6414;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f91940
	ctx.lr = 0x823F63CC;
	sub_82F91940(ctx, base);
	// lwz r3,16(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x823f63e4
	if (!ctx.cr6.eq) goto loc_823F63E4;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// b 0x823f6414
	goto loc_823F6414;
loc_823F63E4:
	// cmplw cr6,r3,r30
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x823f6408
	if (!ctx.cr6.eq) goto loc_823F6408;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823F6400;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r3.u32);
	// b 0x823f6414
	goto loc_823F6414;
loc_823F6408:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r3,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r3.u32);
	// stw r11,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r11.u32);
loc_823F6414:
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

__attribute__((alias("__imp__sub_823F642C"))) PPC_WEAK_FUNC(sub_823F642C);
PPC_FUNC_IMPL(__imp__sub_823F642C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823F6430"))) PPC_WEAK_FUNC(sub_823F6430);
PPC_FUNC_IMPL(__imp__sub_823F6430) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x823F6438;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r31,r3,56
	ctx.r31.s64 = ctx.r3.s64 + 56;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplw cr6,r31,r4
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x823f64bc
	if (ctx.cr6.eq) goto loc_823F64BC;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823f647c
	if (ctx.cr6.eq) goto loc_823F647C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// subf r10,r3,r31
	ctx.r10.s64 = ctx.r31.s64 - ctx.r3.s64;
	// addic r9,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// subfe r4,r9,r10
	temp.u8 = (~ctx.r9.u32 + ctx.r10.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r4.u64 = ~ctx.r9.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823F6478;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r29,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r29.u32);
loc_823F647C:
	// lwz r3,16(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x823f6490
	if (!ctx.cr6.eq) goto loc_823F6490;
	// stw r29,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r29.u32);
	// b 0x823f64bc
	goto loc_823F64BC;
loc_823F6490:
	// cmplw cr6,r3,r30
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x823f64b4
	if (!ctx.cr6.eq) goto loc_823F64B4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823F64AC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r3.u32);
	// b 0x823f64bc
	goto loc_823F64BC;
loc_823F64B4:
	// stw r3,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r3.u32);
	// stw r29,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r29.u32);
loc_823F64BC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823F64C4"))) PPC_WEAK_FUNC(sub_823F64C4);
PPC_FUNC_IMPL(__imp__sub_823F64C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823F64C8"))) PPC_WEAK_FUNC(sub_823F64C8);
PPC_FUNC_IMPL(__imp__sub_823F64C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x823F64D0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r31,r3,80
	ctx.r31.s64 = ctx.r3.s64 + 80;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplw cr6,r31,r4
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x823f6554
	if (ctx.cr6.eq) goto loc_823F6554;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823f6514
	if (ctx.cr6.eq) goto loc_823F6514;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// subf r10,r3,r31
	ctx.r10.s64 = ctx.r31.s64 - ctx.r3.s64;
	// addic r9,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// subfe r4,r9,r10
	temp.u8 = (~ctx.r9.u32 + ctx.r10.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r4.u64 = ~ctx.r9.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823F6510;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r29,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r29.u32);
loc_823F6514:
	// lwz r3,16(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x823f6528
	if (!ctx.cr6.eq) goto loc_823F6528;
	// stw r29,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r29.u32);
	// b 0x823f6554
	goto loc_823F6554;
loc_823F6528:
	// cmplw cr6,r3,r30
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x823f654c
	if (!ctx.cr6.eq) goto loc_823F654C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823F6544;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r3.u32);
	// b 0x823f6554
	goto loc_823F6554;
loc_823F654C:
	// stw r3,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r3.u32);
	// stw r29,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r29.u32);
loc_823F6554:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823F655C"))) PPC_WEAK_FUNC(sub_823F655C);
PPC_FUNC_IMPL(__imp__sub_823F655C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823F6560"))) PPC_WEAK_FUNC(sub_823F6560);
PPC_FUNC_IMPL(__imp__sub_823F6560) {
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
	// std r4,144(r1)
	PPC_STORE_U64(ctx.r1.u32 + 144, ctx.r4.u64);
	// li r3,20
	ctx.r3.s64 = 20;
	// std r5,152(r1)
	PPC_STORE_U64(ctx.r1.u32 + 152, ctx.r5.u64);
	// bl 0x82691500
	ctx.lr = 0x823F6584;
	sub_82691500(ctx, base);
	// mr. r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823f65dc
	if (ctx.cr0.eq) goto loc_823F65DC;
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// addi r8,r11,4
	ctx.r8.s64 = ctx.r11.s64 + 4;
	// lis r9,-32228
	ctx.r9.s64 = -2112094208;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r9,r9,-30488
	ctx.r9.s64 = ctx.r9.s64 + -30488;
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r7,4(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r6,8(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r10,12(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// stw r8,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
	// stw r7,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r7.u32);
	// stw r6,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r6.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
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
loc_823F65DC:
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
	ctx.lr = 0x823F65F8;
	sub_82240040(ctx, base);
}

__attribute__((alias("__imp__sub_823F65F8"))) PPC_WEAK_FUNC(sub_823F65F8);
PPC_FUNC_IMPL(__imp__sub_823F65F8) {
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
	// std r4,144(r1)
	PPC_STORE_U64(ctx.r1.u32 + 144, ctx.r4.u64);
	// li r3,20
	ctx.r3.s64 = 20;
	// std r5,152(r1)
	PPC_STORE_U64(ctx.r1.u32 + 152, ctx.r5.u64);
	// bl 0x82691500
	ctx.lr = 0x823F661C;
	sub_82691500(ctx, base);
	// mr. r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823f6674
	if (ctx.cr0.eq) goto loc_823F6674;
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// addi r8,r11,4
	ctx.r8.s64 = ctx.r11.s64 + 4;
	// lis r9,-32228
	ctx.r9.s64 = -2112094208;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r9,r9,-30464
	ctx.r9.s64 = ctx.r9.s64 + -30464;
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r7,4(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r6,8(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r10,12(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// stw r8,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
	// stw r7,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r7.u32);
	// stw r6,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r6.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
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
loc_823F6674:
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
	ctx.lr = 0x823F6690;
	sub_82240040(ctx, base);
}

__attribute__((alias("__imp__sub_823F6690"))) PPC_WEAK_FUNC(sub_823F6690);
PPC_FUNC_IMPL(__imp__sub_823F6690) {
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
	// std r4,144(r1)
	PPC_STORE_U64(ctx.r1.u32 + 144, ctx.r4.u64);
	// li r3,20
	ctx.r3.s64 = 20;
	// std r5,152(r1)
	PPC_STORE_U64(ctx.r1.u32 + 152, ctx.r5.u64);
	// bl 0x82691500
	ctx.lr = 0x823F66B4;
	sub_82691500(ctx, base);
	// mr. r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823f670c
	if (ctx.cr0.eq) goto loc_823F670C;
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// addi r8,r11,4
	ctx.r8.s64 = ctx.r11.s64 + 4;
	// lis r9,-32228
	ctx.r9.s64 = -2112094208;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r9,r9,-30440
	ctx.r9.s64 = ctx.r9.s64 + -30440;
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r7,4(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r6,8(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r10,12(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// stw r8,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
	// stw r7,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r7.u32);
	// stw r6,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r6.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
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
loc_823F670C:
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
	ctx.lr = 0x823F6728;
	sub_82240040(ctx, base);
}

__attribute__((alias("__imp__sub_823F6728"))) PPC_WEAK_FUNC(sub_823F6728);
PPC_FUNC_IMPL(__imp__sub_823F6728) {
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
	// std r4,144(r1)
	PPC_STORE_U64(ctx.r1.u32 + 144, ctx.r4.u64);
	// li r3,20
	ctx.r3.s64 = 20;
	// std r5,152(r1)
	PPC_STORE_U64(ctx.r1.u32 + 152, ctx.r5.u64);
	// bl 0x82691500
	ctx.lr = 0x823F674C;
	sub_82691500(ctx, base);
	// mr. r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823f67a4
	if (ctx.cr0.eq) goto loc_823F67A4;
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// addi r8,r11,4
	ctx.r8.s64 = ctx.r11.s64 + 4;
	// lis r9,-32228
	ctx.r9.s64 = -2112094208;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r9,r9,-30392
	ctx.r9.s64 = ctx.r9.s64 + -30392;
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r7,4(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r6,8(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r10,12(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// stw r8,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
	// stw r7,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r7.u32);
	// stw r6,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r6.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
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
loc_823F67A4:
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
	ctx.lr = 0x823F67C0;
	sub_82240040(ctx, base);
}

__attribute__((alias("__imp__sub_823F67C0"))) PPC_WEAK_FUNC(sub_823F67C0);
PPC_FUNC_IMPL(__imp__sub_823F67C0) {
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
	// std r4,144(r1)
	PPC_STORE_U64(ctx.r1.u32 + 144, ctx.r4.u64);
	// li r3,20
	ctx.r3.s64 = 20;
	// std r5,152(r1)
	PPC_STORE_U64(ctx.r1.u32 + 152, ctx.r5.u64);
	// bl 0x82691500
	ctx.lr = 0x823F67E4;
	sub_82691500(ctx, base);
	// mr. r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823f683c
	if (ctx.cr0.eq) goto loc_823F683C;
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// addi r8,r11,4
	ctx.r8.s64 = ctx.r11.s64 + 4;
	// lis r9,-32228
	ctx.r9.s64 = -2112094208;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r9,r9,-30344
	ctx.r9.s64 = ctx.r9.s64 + -30344;
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r7,4(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r6,8(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r10,12(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// stw r8,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
	// stw r7,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r7.u32);
	// stw r6,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r6.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
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
loc_823F683C:
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
	ctx.lr = 0x823F6858;
	sub_82240040(ctx, base);
}

__attribute__((alias("__imp__sub_823F6858"))) PPC_WEAK_FUNC(sub_823F6858);
PPC_FUNC_IMPL(__imp__sub_823F6858) {
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
	// std r4,144(r1)
	PPC_STORE_U64(ctx.r1.u32 + 144, ctx.r4.u64);
	// li r3,20
	ctx.r3.s64 = 20;
	// std r5,152(r1)
	PPC_STORE_U64(ctx.r1.u32 + 152, ctx.r5.u64);
	// bl 0x82691500
	ctx.lr = 0x823F687C;
	sub_82691500(ctx, base);
	// mr. r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823f68d4
	if (ctx.cr0.eq) goto loc_823F68D4;
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// addi r8,r11,4
	ctx.r8.s64 = ctx.r11.s64 + 4;
	// lis r9,-32228
	ctx.r9.s64 = -2112094208;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r9,r9,-30296
	ctx.r9.s64 = ctx.r9.s64 + -30296;
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r7,4(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r6,8(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r10,12(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// stw r8,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r8.u32);
	// stw r7,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r7.u32);
	// stw r6,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r6.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
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
loc_823F68D4:
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
	ctx.lr = 0x823F68F0;
	sub_82240040(ctx, base);
}

__attribute__((alias("__imp__sub_823F68F0"))) PPC_WEAK_FUNC(sub_823F68F0);
PPC_FUNC_IMPL(__imp__sub_823F68F0) {
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
	// std r4,144(r1)
	PPC_STORE_U64(ctx.r1.u32 + 144, ctx.r4.u64);
	// li r3,40
	ctx.r3.s64 = 40;
	// std r5,152(r1)
	PPC_STORE_U64(ctx.r1.u32 + 152, ctx.r5.u64);
	// std r6,160(r1)
	PPC_STORE_U64(ctx.r1.u32 + 160, ctx.r6.u64);
	// std r7,168(r1)
	PPC_STORE_U64(ctx.r1.u32 + 168, ctx.r7.u64);
	// bl 0x82691500
	ctx.lr = 0x823F6920;
	sub_82691500(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x823f6964
	if (ctx.cr0.eq) goto loc_823F6964;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// addi r11,r11,-30272
	ctx.r11.s64 = ctx.r11.s64 + -30272;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// li r5,32
	ctx.r5.s64 = 32;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x82fa77c0
	ctx.lr = 0x823F6944;
	sub_82FA77C0(ctx, base);
	// stw r31,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r31.u32);
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
loc_823F6964:
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
	ctx.lr = 0x823F6980;
	sub_82240040(ctx, base);
}

__attribute__((alias("__imp__sub_823F6980"))) PPC_WEAK_FUNC(sub_823F6980);
PPC_FUNC_IMPL(__imp__sub_823F6980) {
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
	// std r4,144(r1)
	PPC_STORE_U64(ctx.r1.u32 + 144, ctx.r4.u64);
	// li r3,24
	ctx.r3.s64 = 24;
	// std r5,152(r1)
	PPC_STORE_U64(ctx.r1.u32 + 152, ctx.r5.u64);
	// bl 0x82691500
	ctx.lr = 0x823F69A4;
	sub_82691500(ctx, base);
	// mr. r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823f69fc
	if (ctx.cr0.eq) goto loc_823F69FC;
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// addi r8,r11,8
	ctx.r8.s64 = ctx.r11.s64 + 8;
	// lis r9,-32228
	ctx.r9.s64 = -2112094208;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r9,r9,-30200
	ctx.r9.s64 = ctx.r9.s64 + -30200;
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r7,4(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r6,8(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r10,12(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// stw r8,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r8.u32);
	// stw r7,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r7.u32);
	// stw r6,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r6.u32);
	// stw r10,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
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
loc_823F69FC:
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
	ctx.lr = 0x823F6A18;
	sub_82240040(ctx, base);
}

__attribute__((alias("__imp__sub_823F6A18"))) PPC_WEAK_FUNC(sub_823F6A18);
PPC_FUNC_IMPL(__imp__sub_823F6A18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa766c
	ctx.lr = 0x823F6A20;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// li r3,44
	ctx.r3.s64 = 44;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// mr r27,r8
	ctx.r27.u64 = ctx.r8.u64;
	// mr r26,r9
	ctx.r26.u64 = ctx.r9.u64;
	// bl 0x82691500
	ctx.lr = 0x823F6A48;
	sub_82691500(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x823f6ab8
	if (ctx.cr0.eq) goto loc_823F6AB8;
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
	// beq 0x823f6abc
	if (ctx.cr0.eq) goto loc_823F6ABC;
	// lwz r10,0(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// lis r9,-32230
	ctx.r9.s64 = -2112225280;
	// lwz r8,0(r27)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r6,0(r28)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// addi r9,r9,-24996
	ctx.r9.s64 = ctx.r9.s64 + -24996;
	// lwz r5,0(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r31,0(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r7,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r7.u32);
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// stw r5,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r5.u32);
	// stw r4,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r4.u32);
	// stw r31,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r31.u32);
	// stw r6,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r6.u32);
	// stw r8,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r8.u32);
	// stw r10,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r10.u32);
	// b 0x823f6abc
	goto loc_823F6ABC;
loc_823F6AB8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_823F6ABC:
	// addi r11,r3,12
	ctx.r11.s64 = ctx.r3.s64 + 12;
	// stw r3,4(r25)
	PPC_STORE_U32(ctx.r25.u32 + 4, ctx.r3.u32);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// stw r11,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82fa76bc
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823F6AD4"))) PPC_WEAK_FUNC(sub_823F6AD4);
PPC_FUNC_IMPL(__imp__sub_823F6AD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823F6AD8"))) PPC_WEAK_FUNC(sub_823F6AD8);
PPC_FUNC_IMPL(__imp__sub_823F6AD8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7654
	ctx.lr = 0x823F6AE0;
	__savegprlr_19(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// li r3,128
	ctx.r3.s64 = 128;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// mr r24,r8
	ctx.r24.u64 = ctx.r8.u64;
	// mr r23,r9
	ctx.r23.u64 = ctx.r9.u64;
	// mr r22,r10
	ctx.r22.u64 = ctx.r10.u64;
	// bl 0x82691500
	ctx.lr = 0x823F6B0C;
	sub_82691500(ctx, base);
	// lwz r19,300(r1)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r1.u32 + 300);
	// li r25,0
	ctx.r25.s64 = 0;
	// lwz r20,292(r1)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r1.u32 + 292);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x823f6b50
	if (ctx.cr0.eq) goto loc_823F6B50;
	// mr r10,r22
	ctx.r10.u64 = ctx.r22.u64;
	// stw r19,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r19.u32);
	// mr r9,r23
	ctx.r9.u64 = ctx.r23.u64;
	// stw r20,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r20.u32);
	// mr r8,r24
	ctx.r8.u64 = ctx.r24.u64;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x823ff0f0
	ctx.lr = 0x823F6B48;
	sub_823FF0F0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x823f6b54
	goto loc_823F6B54;
loc_823F6B50:
	// mr r30,r25
	ctx.r30.u64 = ctx.r25.u64;
loc_823F6B54:
	// li r11,16
	ctx.r11.s64 = 16;
	// stw r25,0(r21)
	PPC_STORE_U32(ctx.r21.u32 + 0, ctx.r25.u32);
	// li r10,32
	ctx.r10.s64 = 32;
	// stw r25,4(r21)
	PPC_STORE_U32(ctx.r21.u32 + 4, ctx.r25.u32);
	// li r9,48
	ctx.r9.s64 = 48;
	// stw r11,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r11.u32);
	// li r8,52
	ctx.r8.s64 = 52;
	// stw r10,28(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28, ctx.r10.u32);
	// stw r9,32(r30)
	PPC_STORE_U32(ctx.r30.u32 + 32, ctx.r9.u32);
	// li r11,53
	ctx.r11.s64 = 53;
	// stw r8,36(r30)
	PPC_STORE_U32(ctx.r30.u32 + 36, ctx.r8.u32);
	// li r10,54
	ctx.r10.s64 = 54;
	// li r9,56
	ctx.r9.s64 = 56;
	// stw r25,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r25.u32);
	// li r8,60
	ctx.r8.s64 = 60;
	// stw r11,40(r30)
	PPC_STORE_U32(ctx.r30.u32 + 40, ctx.r11.u32);
	// addi r31,r30,12
	ctx.r31.s64 = ctx.r30.s64 + 12;
	// stw r10,44(r30)
	PPC_STORE_U32(ctx.r30.u32 + 44, ctx.r10.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// stw r9,48(r30)
	PPC_STORE_U32(ctx.r30.u32 + 48, ctx.r9.u32);
	// stw r8,52(r30)
	PPC_STORE_U32(ctx.r30.u32 + 52, ctx.r8.u32);
	// beq cr6,0x823f6bdc
	if (ctx.cr6.eq) goto loc_823F6BDC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x826abc90
	ctx.lr = 0x823F6BB4;
	sub_826ABC90(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823f6bd4
	if (ctx.cr0.eq) goto loc_823F6BD4;
	// lwz r3,4(r21)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r21.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823f6bcc
	if (ctx.cr6.eq) goto loc_823F6BCC;
	// bl 0x82241d18
	ctx.lr = 0x823F6BCC;
	sub_82241D18(ctx, base);
loc_823F6BCC:
	// stw r30,4(r21)
	PPC_STORE_U32(ctx.r21.u32 + 4, ctx.r30.u32);
	// stw r31,0(r21)
	PPC_STORE_U32(ctx.r21.u32 + 0, ctx.r31.u32);
loc_823F6BD4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82241d18
	ctx.lr = 0x823F6BDC;
	sub_82241D18(ctx, base);
loc_823F6BDC:
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823f6bec
	if (ctx.cr6.eq) goto loc_823F6BEC;
	// bl 0x82241d18
	ctx.lr = 0x823F6BEC;
	sub_82241D18(ctx, base);
loc_823F6BEC:
	// lwz r3,4(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823f6bfc
	if (ctx.cr6.eq) goto loc_823F6BFC;
	// bl 0x82241d18
	ctx.lr = 0x823F6BFC;
	sub_82241D18(ctx, base);
loc_823F6BFC:
	// lwz r3,4(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823f6c0c
	if (ctx.cr6.eq) goto loc_823F6C0C;
	// bl 0x82241d18
	ctx.lr = 0x823F6C0C;
	sub_82241D18(ctx, base);
loc_823F6C0C:
	// lwz r3,4(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823f6c1c
	if (ctx.cr6.eq) goto loc_823F6C1C;
	// bl 0x82241d18
	ctx.lr = 0x823F6C1C;
	sub_82241D18(ctx, base);
loc_823F6C1C:
	// lwz r3,4(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823f6c2c
	if (ctx.cr6.eq) goto loc_823F6C2C;
	// bl 0x82241d18
	ctx.lr = 0x823F6C2C;
	sub_82241D18(ctx, base);
loc_823F6C2C:
	// lwz r3,4(r23)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r23.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823f6c3c
	if (ctx.cr6.eq) goto loc_823F6C3C;
	// bl 0x82241d18
	ctx.lr = 0x823F6C3C;
	sub_82241D18(ctx, base);
loc_823F6C3C:
	// lwz r3,4(r22)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r22.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823f6c4c
	if (ctx.cr6.eq) goto loc_823F6C4C;
	// bl 0x82241d18
	ctx.lr = 0x823F6C4C;
	sub_82241D18(ctx, base);
loc_823F6C4C:
	// lwz r3,4(r20)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r20.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823f6c5c
	if (ctx.cr6.eq) goto loc_823F6C5C;
	// bl 0x82241d18
	ctx.lr = 0x823F6C5C;
	sub_82241D18(ctx, base);
loc_823F6C5C:
	// lwz r3,4(r19)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r19.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823f6c6c
	if (ctx.cr6.eq) goto loc_823F6C6C;
	// bl 0x82241d18
	ctx.lr = 0x823F6C6C;
	sub_82241D18(ctx, base);
loc_823F6C6C:
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82fa76a4
	__restgprlr_19(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823F6C78"))) PPC_WEAK_FUNC(sub_823F6C78);
PPC_FUNC_IMPL(__imp__sub_823F6C78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7664
	ctx.lr = 0x823F6C80;
	__savegprlr_23(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// li r3,80
	ctx.r3.s64 = 80;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// mr r24,r7
	ctx.r24.u64 = ctx.r7.u64;
	// mr r23,r8
	ctx.r23.u64 = ctx.r8.u64;
	// bl 0x82691500
	ctx.lr = 0x823F6CA4;
	sub_82691500(ctx, base);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x823f6cd0
	if (ctx.cr0.eq) goto loc_823F6CD0;
	// mr r8,r23
	ctx.r8.u64 = ctx.r23.u64;
	// mr r7,r24
	ctx.r7.u64 = ctx.r24.u64;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x823ff258
	ctx.lr = 0x823F6CC8;
	sub_823FF258(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x823f6cd4
	goto loc_823F6CD4;
loc_823F6CD0:
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
loc_823F6CD4:
	// li r11,16
	ctx.r11.s64 = 16;
	// stw r29,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r29.u32);
	// li r10,20
	ctx.r10.s64 = 20;
	// stw r29,4(r26)
	PPC_STORE_U32(ctx.r26.u32 + 4, ctx.r29.u32);
	// li r9,24
	ctx.r9.s64 = 24;
	// stw r29,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r29.u32);
	// li r8,28
	ctx.r8.s64 = 28;
	// stw r11,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r11.u32);
	// addi r31,r30,12
	ctx.r31.s64 = ctx.r30.s64 + 12;
	// stw r10,28(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28, ctx.r10.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// stw r9,32(r30)
	PPC_STORE_U32(ctx.r30.u32 + 32, ctx.r9.u32);
	// stw r8,36(r30)
	PPC_STORE_U32(ctx.r30.u32 + 36, ctx.r8.u32);
	// beq cr6,0x823f6d3c
	if (ctx.cr6.eq) goto loc_823F6D3C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x826abc90
	ctx.lr = 0x823F6D14;
	sub_826ABC90(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823f6d34
	if (ctx.cr0.eq) goto loc_823F6D34;
	// lwz r3,4(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823f6d2c
	if (ctx.cr6.eq) goto loc_823F6D2C;
	// bl 0x82241d18
	ctx.lr = 0x823F6D2C;
	sub_82241D18(ctx, base);
loc_823F6D2C:
	// stw r30,4(r26)
	PPC_STORE_U32(ctx.r26.u32 + 4, ctx.r30.u32);
	// stw r31,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r31.u32);
loc_823F6D34:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82241d18
	ctx.lr = 0x823F6D3C;
	sub_82241D18(ctx, base);
loc_823F6D3C:
	// lwz r3,4(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823f6d4c
	if (ctx.cr6.eq) goto loc_823F6D4C;
	// bl 0x82241d18
	ctx.lr = 0x823F6D4C;
	sub_82241D18(ctx, base);
loc_823F6D4C:
	// lwz r3,4(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823f6d5c
	if (ctx.cr6.eq) goto loc_823F6D5C;
	// bl 0x82241d18
	ctx.lr = 0x823F6D5C;
	sub_82241D18(ctx, base);
loc_823F6D5C:
	// lwz r3,4(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823f6d6c
	if (ctx.cr6.eq) goto loc_823F6D6C;
	// bl 0x82241d18
	ctx.lr = 0x823F6D6C;
	sub_82241D18(ctx, base);
loc_823F6D6C:
	// lwz r3,4(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823f6d7c
	if (ctx.cr6.eq) goto loc_823F6D7C;
	// bl 0x82241d18
	ctx.lr = 0x823F6D7C;
	sub_82241D18(ctx, base);
loc_823F6D7C:
	// lwz r3,4(r23)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r23.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823f6d8c
	if (ctx.cr6.eq) goto loc_823F6D8C;
	// bl 0x82241d18
	ctx.lr = 0x823F6D8C;
	sub_82241D18(ctx, base);
loc_823F6D8C:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82fa76b4
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823F6D98"))) PPC_WEAK_FUNC(sub_823F6D98);
PPC_FUNC_IMPL(__imp__sub_823F6D98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7664
	ctx.lr = 0x823F6DA0;
	__savegprlr_23(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// li r3,80
	ctx.r3.s64 = 80;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// mr r24,r7
	ctx.r24.u64 = ctx.r7.u64;
	// mr r23,r8
	ctx.r23.u64 = ctx.r8.u64;
	// bl 0x82691500
	ctx.lr = 0x823F6DC4;
	sub_82691500(ctx, base);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x823f6df0
	if (ctx.cr0.eq) goto loc_823F6DF0;
	// mr r8,r23
	ctx.r8.u64 = ctx.r23.u64;
	// mr r7,r24
	ctx.r7.u64 = ctx.r24.u64;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x823ff408
	ctx.lr = 0x823F6DE8;
	sub_823FF408(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x823f6df4
	goto loc_823F6DF4;
loc_823F6DF0:
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
loc_823F6DF4:
	// li r11,16
	ctx.r11.s64 = 16;
	// stw r29,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r29.u32);
	// li r10,20
	ctx.r10.s64 = 20;
	// stw r29,4(r26)
	PPC_STORE_U32(ctx.r26.u32 + 4, ctx.r29.u32);
	// li r9,24
	ctx.r9.s64 = 24;
	// stw r29,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r29.u32);
	// li r8,28
	ctx.r8.s64 = 28;
	// stw r11,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r11.u32);
	// addi r31,r30,12
	ctx.r31.s64 = ctx.r30.s64 + 12;
	// stw r10,28(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28, ctx.r10.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// stw r9,32(r30)
	PPC_STORE_U32(ctx.r30.u32 + 32, ctx.r9.u32);
	// stw r8,36(r30)
	PPC_STORE_U32(ctx.r30.u32 + 36, ctx.r8.u32);
	// beq cr6,0x823f6e5c
	if (ctx.cr6.eq) goto loc_823F6E5C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x826abc90
	ctx.lr = 0x823F6E34;
	sub_826ABC90(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823f6e54
	if (ctx.cr0.eq) goto loc_823F6E54;
	// lwz r3,4(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823f6e4c
	if (ctx.cr6.eq) goto loc_823F6E4C;
	// bl 0x82241d18
	ctx.lr = 0x823F6E4C;
	sub_82241D18(ctx, base);
loc_823F6E4C:
	// stw r30,4(r26)
	PPC_STORE_U32(ctx.r26.u32 + 4, ctx.r30.u32);
	// stw r31,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r31.u32);
loc_823F6E54:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82241d18
	ctx.lr = 0x823F6E5C;
	sub_82241D18(ctx, base);
loc_823F6E5C:
	// lwz r3,4(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823f6e6c
	if (ctx.cr6.eq) goto loc_823F6E6C;
	// bl 0x82241d18
	ctx.lr = 0x823F6E6C;
	sub_82241D18(ctx, base);
loc_823F6E6C:
	// lwz r3,4(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823f6e7c
	if (ctx.cr6.eq) goto loc_823F6E7C;
	// bl 0x82241d18
	ctx.lr = 0x823F6E7C;
	sub_82241D18(ctx, base);
loc_823F6E7C:
	// lwz r3,4(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823f6e8c
	if (ctx.cr6.eq) goto loc_823F6E8C;
	// bl 0x82241d18
	ctx.lr = 0x823F6E8C;
	sub_82241D18(ctx, base);
loc_823F6E8C:
	// lwz r3,4(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823f6e9c
	if (ctx.cr6.eq) goto loc_823F6E9C;
	// bl 0x82241d18
	ctx.lr = 0x823F6E9C;
	sub_82241D18(ctx, base);
loc_823F6E9C:
	// lwz r3,4(r23)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r23.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823f6eac
	if (ctx.cr6.eq) goto loc_823F6EAC;
	// bl 0x82241d18
	ctx.lr = 0x823F6EAC;
	sub_82241D18(ctx, base);
loc_823F6EAC:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82fa76b4
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823F6EB8"))) PPC_WEAK_FUNC(sub_823F6EB8);
PPC_FUNC_IMPL(__imp__sub_823F6EB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7664
	ctx.lr = 0x823F6EC0;
	__savegprlr_23(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// li r3,80
	ctx.r3.s64 = 80;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// mr r24,r7
	ctx.r24.u64 = ctx.r7.u64;
	// mr r23,r8
	ctx.r23.u64 = ctx.r8.u64;
	// bl 0x82691500
	ctx.lr = 0x823F6EE4;
	sub_82691500(ctx, base);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x823f6f10
	if (ctx.cr0.eq) goto loc_823F6F10;
	// mr r8,r23
	ctx.r8.u64 = ctx.r23.u64;
	// mr r7,r24
	ctx.r7.u64 = ctx.r24.u64;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x823ff798
	ctx.lr = 0x823F6F08;
	sub_823FF798(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x823f6f14
	goto loc_823F6F14;
loc_823F6F10:
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
loc_823F6F14:
	// li r11,16
	ctx.r11.s64 = 16;
	// stw r29,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r29.u32);
	// li r10,24
	ctx.r10.s64 = 24;
	// stw r29,4(r26)
	PPC_STORE_U32(ctx.r26.u32 + 4, ctx.r29.u32);
	// li r9,32
	ctx.r9.s64 = 32;
	// stw r29,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r29.u32);
	// li r8,64
	ctx.r8.s64 = 64;
	// stw r11,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r11.u32);
	// addi r31,r30,12
	ctx.r31.s64 = ctx.r30.s64 + 12;
	// stw r10,28(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28, ctx.r10.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// stw r9,32(r30)
	PPC_STORE_U32(ctx.r30.u32 + 32, ctx.r9.u32);
	// stw r8,36(r30)
	PPC_STORE_U32(ctx.r30.u32 + 36, ctx.r8.u32);
	// beq cr6,0x823f6f7c
	if (ctx.cr6.eq) goto loc_823F6F7C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x826abc90
	ctx.lr = 0x823F6F54;
	sub_826ABC90(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823f6f74
	if (ctx.cr0.eq) goto loc_823F6F74;
	// lwz r3,4(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823f6f6c
	if (ctx.cr6.eq) goto loc_823F6F6C;
	// bl 0x82241d18
	ctx.lr = 0x823F6F6C;
	sub_82241D18(ctx, base);
loc_823F6F6C:
	// stw r30,4(r26)
	PPC_STORE_U32(ctx.r26.u32 + 4, ctx.r30.u32);
	// stw r31,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r31.u32);
loc_823F6F74:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82241d18
	ctx.lr = 0x823F6F7C;
	sub_82241D18(ctx, base);
loc_823F6F7C:
	// lwz r3,4(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823f6f8c
	if (ctx.cr6.eq) goto loc_823F6F8C;
	// bl 0x82241d18
	ctx.lr = 0x823F6F8C;
	sub_82241D18(ctx, base);
loc_823F6F8C:
	// lwz r3,4(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823f6f9c
	if (ctx.cr6.eq) goto loc_823F6F9C;
	// bl 0x82241d18
	ctx.lr = 0x823F6F9C;
	sub_82241D18(ctx, base);
loc_823F6F9C:
	// lwz r3,4(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823f6fac
	if (ctx.cr6.eq) goto loc_823F6FAC;
	// bl 0x82241d18
	ctx.lr = 0x823F6FAC;
	sub_82241D18(ctx, base);
loc_823F6FAC:
	// lwz r3,4(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823f6fbc
	if (ctx.cr6.eq) goto loc_823F6FBC;
	// bl 0x82241d18
	ctx.lr = 0x823F6FBC;
	sub_82241D18(ctx, base);
loc_823F6FBC:
	// lwz r3,4(r23)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r23.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823f6fcc
	if (ctx.cr6.eq) goto loc_823F6FCC;
	// bl 0x82241d18
	ctx.lr = 0x823F6FCC;
	sub_82241D18(ctx, base);
loc_823F6FCC:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82fa76b4
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823F6FD8"))) PPC_WEAK_FUNC(sub_823F6FD8);
PPC_FUNC_IMPL(__imp__sub_823F6FD8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7668
	ctx.lr = 0x823F6FE0;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r3,68
	ctx.r3.s64 = 68;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// mr r24,r7
	ctx.r24.u64 = ctx.r7.u64;
	// bl 0x82691500
	ctx.lr = 0x823F7000;
	sub_82691500(ctx, base);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x823f7028
	if (ctx.cr0.eq) goto loc_823F7028;
	// mr r7,r24
	ctx.r7.u64 = ctx.r24.u64;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x823ff870
	ctx.lr = 0x823F7020;
	sub_823FF870(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x823f702c
	goto loc_823F702C;
loc_823F7028:
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
loc_823F702C:
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r29,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r29.u32);
	// li r10,8
	ctx.r10.s64 = 8;
	// stw r29,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r29.u32);
	// li r9,40
	ctx.r9.s64 = 40;
	// stw r29,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r29.u32);
	// addi r31,r30,12
	ctx.r31.s64 = ctx.r30.s64 + 12;
	// stw r11,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r11.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// stw r10,28(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28, ctx.r10.u32);
	// stw r9,32(r30)
	PPC_STORE_U32(ctx.r30.u32 + 32, ctx.r9.u32);
	// beq cr6,0x823f708c
	if (ctx.cr6.eq) goto loc_823F708C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x826abc90
	ctx.lr = 0x823F7064;
	sub_826ABC90(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823f7084
	if (ctx.cr0.eq) goto loc_823F7084;
	// lwz r3,4(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823f707c
	if (ctx.cr6.eq) goto loc_823F707C;
	// bl 0x82241d18
	ctx.lr = 0x823F707C;
	sub_82241D18(ctx, base);
loc_823F707C:
	// stw r30,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r30.u32);
	// stw r31,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r31.u32);
loc_823F7084:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82241d18
	ctx.lr = 0x823F708C;
	sub_82241D18(ctx, base);
loc_823F708C:
	// lwz r3,4(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823f709c
	if (ctx.cr6.eq) goto loc_823F709C;
	// bl 0x82241d18
	ctx.lr = 0x823F709C;
	sub_82241D18(ctx, base);
loc_823F709C:
	// lwz r3,4(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823f70ac
	if (ctx.cr6.eq) goto loc_823F70AC;
	// bl 0x82241d18
	ctx.lr = 0x823F70AC;
	sub_82241D18(ctx, base);
loc_823F70AC:
	// lwz r3,4(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823f70bc
	if (ctx.cr6.eq) goto loc_823F70BC;
	// bl 0x82241d18
	ctx.lr = 0x823F70BC;
	sub_82241D18(ctx, base);
loc_823F70BC:
	// lwz r3,4(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823f70cc
	if (ctx.cr6.eq) goto loc_823F70CC;
	// bl 0x82241d18
	ctx.lr = 0x823F70CC;
	sub_82241D18(ctx, base);
loc_823F70CC:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82fa76b8
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823F70D8"))) PPC_WEAK_FUNC(sub_823F70D8);
PPC_FUNC_IMPL(__imp__sub_823F70D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7660
	ctx.lr = 0x823F70E0;
	__savegprlr_22(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// li r3,92
	ctx.r3.s64 = 92;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// mr r25,r7
	ctx.r25.u64 = ctx.r7.u64;
	// mr r23,r8
	ctx.r23.u64 = ctx.r8.u64;
	// mr r22,r9
	ctx.r22.u64 = ctx.r9.u64;
	// bl 0x82691500
	ctx.lr = 0x823F7108;
	sub_82691500(ctx, base);
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x823f7138
	if (ctx.cr0.eq) goto loc_823F7138;
	// mr r9,r22
	ctx.r9.u64 = ctx.r22.u64;
	// mr r8,r23
	ctx.r8.u64 = ctx.r23.u64;
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x823ff980
	ctx.lr = 0x823F7130;
	sub_823FF980(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x823f713c
	goto loc_823F713C;
loc_823F7138:
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
loc_823F713C:
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r28,0(r24)
	PPC_STORE_U32(ctx.r24.u32 + 0, ctx.r28.u32);
	// li r10,8
	ctx.r10.s64 = 8;
	// stw r28,4(r24)
	PPC_STORE_U32(ctx.r24.u32 + 4, ctx.r28.u32);
	// stw r11,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r11.u32);
	// li r9,20
	ctx.r9.s64 = 20;
	// li r8,21
	ctx.r8.s64 = 21;
	// stw r28,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r28.u32);
	// li r11,32
	ctx.r11.s64 = 32;
	// stw r10,28(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28, ctx.r10.u32);
	// addi r31,r30,12
	ctx.r31.s64 = ctx.r30.s64 + 12;
	// stw r9,32(r30)
	PPC_STORE_U32(ctx.r30.u32 + 32, ctx.r9.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// stw r8,36(r30)
	PPC_STORE_U32(ctx.r30.u32 + 36, ctx.r8.u32);
	// stw r11,40(r30)
	PPC_STORE_U32(ctx.r30.u32 + 40, ctx.r11.u32);
	// beq cr6,0x823f71ac
	if (ctx.cr6.eq) goto loc_823F71AC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x826abc90
	ctx.lr = 0x823F7184;
	sub_826ABC90(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823f71a4
	if (ctx.cr0.eq) goto loc_823F71A4;
	// lwz r3,4(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823f719c
	if (ctx.cr6.eq) goto loc_823F719C;
	// bl 0x82241d18
	ctx.lr = 0x823F719C;
	sub_82241D18(ctx, base);
loc_823F719C:
	// stw r30,4(r24)
	PPC_STORE_U32(ctx.r24.u32 + 4, ctx.r30.u32);
	// stw r31,0(r24)
	PPC_STORE_U32(ctx.r24.u32 + 0, ctx.r31.u32);
loc_823F71A4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82241d18
	ctx.lr = 0x823F71AC;
	sub_82241D18(ctx, base);
loc_823F71AC:
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823f71bc
	if (ctx.cr6.eq) goto loc_823F71BC;
	// bl 0x82241d18
	ctx.lr = 0x823F71BC;
	sub_82241D18(ctx, base);
loc_823F71BC:
	// lwz r3,4(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823f71cc
	if (ctx.cr6.eq) goto loc_823F71CC;
	// bl 0x82241d18
	ctx.lr = 0x823F71CC;
	sub_82241D18(ctx, base);
loc_823F71CC:
	// lwz r3,4(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823f71dc
	if (ctx.cr6.eq) goto loc_823F71DC;
	// bl 0x82241d18
	ctx.lr = 0x823F71DC;
	sub_82241D18(ctx, base);
loc_823F71DC:
	// lwz r3,4(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823f71ec
	if (ctx.cr6.eq) goto loc_823F71EC;
	// bl 0x82241d18
	ctx.lr = 0x823F71EC;
	sub_82241D18(ctx, base);
loc_823F71EC:
	// lwz r3,4(r23)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r23.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823f71fc
	if (ctx.cr6.eq) goto loc_823F71FC;
	// bl 0x82241d18
	ctx.lr = 0x823F71FC;
	sub_82241D18(ctx, base);
loc_823F71FC:
	// lwz r3,4(r22)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r22.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823f720c
	if (ctx.cr6.eq) goto loc_823F720C;
	// bl 0x82241d18
	ctx.lr = 0x823F720C;
	sub_82241D18(ctx, base);
loc_823F720C:
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82fa76b0
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823F7218"))) PPC_WEAK_FUNC(sub_823F7218);
PPC_FUNC_IMPL(__imp__sub_823F7218) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7668
	ctx.lr = 0x823F7220;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r3,68
	ctx.r3.s64 = 68;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// mr r24,r7
	ctx.r24.u64 = ctx.r7.u64;
	// bl 0x82691500
	ctx.lr = 0x823F7240;
	sub_82691500(ctx, base);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x823f7268
	if (ctx.cr0.eq) goto loc_823F7268;
	// mr r7,r24
	ctx.r7.u64 = ctx.r24.u64;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x823ffa90
	ctx.lr = 0x823F7260;
	sub_823FFA90(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x823f726c
	goto loc_823F726C;
loc_823F7268:
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
loc_823F726C:
	// li r11,48
	ctx.r11.s64 = 48;
	// stw r29,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r29.u32);
	// li r10,56
	ctx.r10.s64 = 56;
	// stw r29,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r29.u32);
	// li r9,88
	ctx.r9.s64 = 88;
	// stw r29,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r29.u32);
	// addi r31,r30,12
	ctx.r31.s64 = ctx.r30.s64 + 12;
	// stw r11,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r11.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// stw r10,28(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28, ctx.r10.u32);
	// stw r9,32(r30)
	PPC_STORE_U32(ctx.r30.u32 + 32, ctx.r9.u32);
	// beq cr6,0x823f72cc
	if (ctx.cr6.eq) goto loc_823F72CC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x826abc90
	ctx.lr = 0x823F72A4;
	sub_826ABC90(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823f72c4
	if (ctx.cr0.eq) goto loc_823F72C4;
	// lwz r3,4(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823f72bc
	if (ctx.cr6.eq) goto loc_823F72BC;
	// bl 0x82241d18
	ctx.lr = 0x823F72BC;
	sub_82241D18(ctx, base);
loc_823F72BC:
	// stw r30,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r30.u32);
	// stw r31,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r31.u32);
loc_823F72C4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82241d18
	ctx.lr = 0x823F72CC;
	sub_82241D18(ctx, base);
loc_823F72CC:
	// lwz r3,4(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823f72dc
	if (ctx.cr6.eq) goto loc_823F72DC;
	// bl 0x82241d18
	ctx.lr = 0x823F72DC;
	sub_82241D18(ctx, base);
loc_823F72DC:
	// lwz r3,4(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823f72ec
	if (ctx.cr6.eq) goto loc_823F72EC;
	// bl 0x82241d18
	ctx.lr = 0x823F72EC;
	sub_82241D18(ctx, base);
loc_823F72EC:
	// lwz r3,4(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823f72fc
	if (ctx.cr6.eq) goto loc_823F72FC;
	// bl 0x82241d18
	ctx.lr = 0x823F72FC;
	sub_82241D18(ctx, base);
loc_823F72FC:
	// lwz r3,4(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823f730c
	if (ctx.cr6.eq) goto loc_823F730C;
	// bl 0x82241d18
	ctx.lr = 0x823F730C;
	sub_82241D18(ctx, base);
loc_823F730C:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82fa76b8
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823F7318"))) PPC_WEAK_FUNC(sub_823F7318);
PPC_FUNC_IMPL(__imp__sub_823F7318) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7654
	ctx.lr = 0x823F7320;
	__savegprlr_19(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// li r3,80
	ctx.r3.s64 = 80;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// mr r24,r7
	ctx.r24.u64 = ctx.r7.u64;
	// mr r23,r8
	ctx.r23.u64 = ctx.r8.u64;
	// bl 0x82691500
	ctx.lr = 0x823F7344;
	sub_82691500(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// li r29,0
	ctx.r29.s64 = 0;
	// beq 0x823f73dc
	if (ctx.cr0.eq) goto loc_823F73DC;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r10,r10,-16484
	ctx.r10.s64 = ctx.r10.s64 + -16484;
	// addic. r30,r31,12
	ctx.xer.ca = ctx.r31.u32 > 4294967283;
	ctx.r30.s64 = ctx.r31.s64 + 12;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// beq 0x823f73e0
	if (ctx.cr0.eq) goto loc_823F73E0;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823f62d0
	ctx.lr = 0x823F737C;
	sub_823F62D0(ctx, base);
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x823f62d0
	ctx.lr = 0x823F738C;
	sub_823F62D0(ctx, base);
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x823f62d0
	ctx.lr = 0x823F739C;
	sub_823F62D0(ctx, base);
	// mr r20,r3
	ctx.r20.u64 = ctx.r3.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x823f62d0
	ctx.lr = 0x823F73AC;
	sub_823F62D0(ctx, base);
	// mr r19,r3
	ctx.r19.u64 = ctx.r3.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x823f62d0
	ctx.lr = 0x823F73BC;
	sub_823F62D0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r5,r19
	ctx.r5.u64 = ctx.r19.u64;
	// mr r6,r20
	ctx.r6.u64 = ctx.r20.u64;
	// mr r7,r21
	ctx.r7.u64 = ctx.r21.u64;
	// mr r8,r22
	ctx.r8.u64 = ctx.r22.u64;
	// bl 0x82400a78
	ctx.lr = 0x823F73D8;
	sub_82400A78(ctx, base);
	// b 0x823f73e0
	goto loc_823F73E0;
loc_823F73DC:
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
loc_823F73E0:
	// li r11,32
	ctx.r11.s64 = 32;
	// stw r29,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r29.u32);
	// li r10,64
	ctx.r10.s64 = 64;
	// stw r29,4(r27)
	PPC_STORE_U32(ctx.r27.u32 + 4, ctx.r29.u32);
	// li r9,68
	ctx.r9.s64 = 68;
	// stw r29,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r29.u32);
	// li r8,72
	ctx.r8.s64 = 72;
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// addi r30,r31,12
	ctx.r30.s64 = ctx.r31.s64 + 12;
	// stw r10,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r10.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// stw r9,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r9.u32);
	// stw r8,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r8.u32);
	// beq cr6,0x823f7448
	if (ctx.cr6.eq) goto loc_823F7448;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826abc90
	ctx.lr = 0x823F7420;
	sub_826ABC90(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823f7440
	if (ctx.cr0.eq) goto loc_823F7440;
	// lwz r3,4(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823f7438
	if (ctx.cr6.eq) goto loc_823F7438;
	// bl 0x82241d18
	ctx.lr = 0x823F7438;
	sub_82241D18(ctx, base);
loc_823F7438:
	// stw r31,4(r27)
	PPC_STORE_U32(ctx.r27.u32 + 4, ctx.r31.u32);
	// stw r30,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r30.u32);
loc_823F7440:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82241d18
	ctx.lr = 0x823F7448;
	sub_82241D18(ctx, base);
loc_823F7448:
	// lwz r3,4(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823f7458
	if (ctx.cr6.eq) goto loc_823F7458;
	// bl 0x82241d18
	ctx.lr = 0x823F7458;
	sub_82241D18(ctx, base);
loc_823F7458:
	// lwz r3,4(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823f7468
	if (ctx.cr6.eq) goto loc_823F7468;
	// bl 0x82241d18
	ctx.lr = 0x823F7468;
	sub_82241D18(ctx, base);
loc_823F7468:
	// lwz r3,4(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823f7478
	if (ctx.cr6.eq) goto loc_823F7478;
	// bl 0x82241d18
	ctx.lr = 0x823F7478;
	sub_82241D18(ctx, base);
loc_823F7478:
	// lwz r3,4(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823f7488
	if (ctx.cr6.eq) goto loc_823F7488;
	// bl 0x82241d18
	ctx.lr = 0x823F7488;
	sub_82241D18(ctx, base);
loc_823F7488:
	// lwz r3,4(r23)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r23.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823f7498
	if (ctx.cr6.eq) goto loc_823F7498;
	// bl 0x82241d18
	ctx.lr = 0x823F7498;
	sub_82241D18(ctx, base);
loc_823F7498:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x82fa76a4
	__restgprlr_19(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823F74A4"))) PPC_WEAK_FUNC(sub_823F74A4);
PPC_FUNC_IMPL(__imp__sub_823F74A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823F74A8"))) PPC_WEAK_FUNC(sub_823F74A8);
PPC_FUNC_IMPL(__imp__sub_823F74A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7654
	ctx.lr = 0x823F74B0;
	__savegprlr_19(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// li r3,80
	ctx.r3.s64 = 80;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// mr r24,r7
	ctx.r24.u64 = ctx.r7.u64;
	// mr r23,r8
	ctx.r23.u64 = ctx.r8.u64;
	// bl 0x82691500
	ctx.lr = 0x823F74D4;
	sub_82691500(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// li r29,0
	ctx.r29.s64 = 0;
	// beq 0x823f756c
	if (ctx.cr0.eq) goto loc_823F756C;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r10,r10,-16484
	ctx.r10.s64 = ctx.r10.s64 + -16484;
	// addic. r30,r31,12
	ctx.xer.ca = ctx.r31.u32 > 4294967283;
	ctx.r30.s64 = ctx.r31.s64 + 12;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// beq 0x823f7570
	if (ctx.cr0.eq) goto loc_823F7570;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823f62d0
	ctx.lr = 0x823F750C;
	sub_823F62D0(ctx, base);
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x823f62d0
	ctx.lr = 0x823F751C;
	sub_823F62D0(ctx, base);
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x823f62d0
	ctx.lr = 0x823F752C;
	sub_823F62D0(ctx, base);
	// mr r20,r3
	ctx.r20.u64 = ctx.r3.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x823f62d0
	ctx.lr = 0x823F753C;
	sub_823F62D0(ctx, base);
	// mr r19,r3
	ctx.r19.u64 = ctx.r3.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x823f62d0
	ctx.lr = 0x823F754C;
	sub_823F62D0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r5,r19
	ctx.r5.u64 = ctx.r19.u64;
	// mr r6,r20
	ctx.r6.u64 = ctx.r20.u64;
	// mr r7,r21
	ctx.r7.u64 = ctx.r21.u64;
	// mr r8,r22
	ctx.r8.u64 = ctx.r22.u64;
	// bl 0x82400b48
	ctx.lr = 0x823F7568;
	sub_82400B48(ctx, base);
	// b 0x823f7570
	goto loc_823F7570;
loc_823F756C:
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
loc_823F7570:
	// li r11,80
	ctx.r11.s64 = 80;
	// stw r29,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r29.u32);
	// li r10,96
	ctx.r10.s64 = 96;
	// stw r29,4(r27)
	PPC_STORE_U32(ctx.r27.u32 + 4, ctx.r29.u32);
	// li r9,112
	ctx.r9.s64 = 112;
	// stw r29,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r29.u32);
	// li r8,128
	ctx.r8.s64 = 128;
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// addi r30,r31,12
	ctx.r30.s64 = ctx.r31.s64 + 12;
	// stw r10,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r10.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// stw r9,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r9.u32);
	// stw r8,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r8.u32);
	// beq cr6,0x823f75d8
	if (ctx.cr6.eq) goto loc_823F75D8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826abc90
	ctx.lr = 0x823F75B0;
	sub_826ABC90(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823f75d0
	if (ctx.cr0.eq) goto loc_823F75D0;
	// lwz r3,4(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823f75c8
	if (ctx.cr6.eq) goto loc_823F75C8;
	// bl 0x82241d18
	ctx.lr = 0x823F75C8;
	sub_82241D18(ctx, base);
loc_823F75C8:
	// stw r31,4(r27)
	PPC_STORE_U32(ctx.r27.u32 + 4, ctx.r31.u32);
	// stw r30,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r30.u32);
loc_823F75D0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82241d18
	ctx.lr = 0x823F75D8;
	sub_82241D18(ctx, base);
loc_823F75D8:
	// lwz r3,4(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823f75e8
	if (ctx.cr6.eq) goto loc_823F75E8;
	// bl 0x82241d18
	ctx.lr = 0x823F75E8;
	sub_82241D18(ctx, base);
loc_823F75E8:
	// lwz r3,4(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823f75f8
	if (ctx.cr6.eq) goto loc_823F75F8;
	// bl 0x82241d18
	ctx.lr = 0x823F75F8;
	sub_82241D18(ctx, base);
loc_823F75F8:
	// lwz r3,4(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823f7608
	if (ctx.cr6.eq) goto loc_823F7608;
	// bl 0x82241d18
	ctx.lr = 0x823F7608;
	sub_82241D18(ctx, base);
loc_823F7608:
	// lwz r3,4(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823f7618
	if (ctx.cr6.eq) goto loc_823F7618;
	// bl 0x82241d18
	ctx.lr = 0x823F7618;
	sub_82241D18(ctx, base);
loc_823F7618:
	// lwz r3,4(r23)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r23.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823f7628
	if (ctx.cr6.eq) goto loc_823F7628;
	// bl 0x82241d18
	ctx.lr = 0x823F7628;
	sub_82241D18(ctx, base);
loc_823F7628:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x82fa76a4
	__restgprlr_19(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823F7634"))) PPC_WEAK_FUNC(sub_823F7634);
PPC_FUNC_IMPL(__imp__sub_823F7634) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823F7638"))) PPC_WEAK_FUNC(sub_823F7638);
PPC_FUNC_IMPL(__imp__sub_823F7638) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7654
	ctx.lr = 0x823F7640;
	__savegprlr_19(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// li r3,80
	ctx.r3.s64 = 80;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// mr r24,r7
	ctx.r24.u64 = ctx.r7.u64;
	// mr r23,r8
	ctx.r23.u64 = ctx.r8.u64;
	// bl 0x82691500
	ctx.lr = 0x823F7664;
	sub_82691500(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// li r29,0
	ctx.r29.s64 = 0;
	// beq 0x823f76fc
	if (ctx.cr0.eq) goto loc_823F76FC;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r10,r10,-16484
	ctx.r10.s64 = ctx.r10.s64 + -16484;
	// addic. r30,r31,12
	ctx.xer.ca = ctx.r31.u32 > 4294967283;
	ctx.r30.s64 = ctx.r31.s64 + 12;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// beq 0x823f7700
	if (ctx.cr0.eq) goto loc_823F7700;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x823f62d0
	ctx.lr = 0x823F769C;
	sub_823F62D0(ctx, base);
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x823f62d0
	ctx.lr = 0x823F76AC;
	sub_823F62D0(ctx, base);
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x823f62d0
	ctx.lr = 0x823F76BC;
	sub_823F62D0(ctx, base);
	// mr r20,r3
	ctx.r20.u64 = ctx.r3.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x823f62d0
	ctx.lr = 0x823F76CC;
	sub_823F62D0(ctx, base);
	// mr r19,r3
	ctx.r19.u64 = ctx.r3.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x823f62d0
	ctx.lr = 0x823F76DC;
	sub_823F62D0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r5,r19
	ctx.r5.u64 = ctx.r19.u64;
	// mr r6,r20
	ctx.r6.u64 = ctx.r20.u64;
	// mr r7,r21
	ctx.r7.u64 = ctx.r21.u64;
	// mr r8,r22
	ctx.r8.u64 = ctx.r22.u64;
	// bl 0x82400c18
	ctx.lr = 0x823F76F8;
	sub_82400C18(ctx, base);
	// b 0x823f7700
	goto loc_823F7700;
loc_823F76FC:
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
loc_823F7700:
	// li r11,80
	ctx.r11.s64 = 80;
	// stw r29,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r29.u32);
	// li r10,96
	ctx.r10.s64 = 96;
	// stw r29,4(r27)
	PPC_STORE_U32(ctx.r27.u32 + 4, ctx.r29.u32);
	// li r9,112
	ctx.r9.s64 = 112;
	// stw r29,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r29.u32);
	// li r8,116
	ctx.r8.s64 = 116;
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// addi r30,r31,12
	ctx.r30.s64 = ctx.r31.s64 + 12;
	// stw r10,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r10.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// stw r9,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r9.u32);
	// stw r8,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r8.u32);
	// beq cr6,0x823f7768
	if (ctx.cr6.eq) goto loc_823F7768;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x826abc90
	ctx.lr = 0x823F7740;
	sub_826ABC90(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823f7760
	if (ctx.cr0.eq) goto loc_823F7760;
	// lwz r3,4(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823f7758
	if (ctx.cr6.eq) goto loc_823F7758;
	// bl 0x82241d18
	ctx.lr = 0x823F7758;
	sub_82241D18(ctx, base);
loc_823F7758:
	// stw r31,4(r27)
	PPC_STORE_U32(ctx.r27.u32 + 4, ctx.r31.u32);
	// stw r30,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r30.u32);
loc_823F7760:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82241d18
	ctx.lr = 0x823F7768;
	sub_82241D18(ctx, base);
loc_823F7768:
	// lwz r3,4(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823f7778
	if (ctx.cr6.eq) goto loc_823F7778;
	// bl 0x82241d18
	ctx.lr = 0x823F7778;
	sub_82241D18(ctx, base);
loc_823F7778:
	// lwz r3,4(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823f7788
	if (ctx.cr6.eq) goto loc_823F7788;
	// bl 0x82241d18
	ctx.lr = 0x823F7788;
	sub_82241D18(ctx, base);
loc_823F7788:
	// lwz r3,4(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823f7798
	if (ctx.cr6.eq) goto loc_823F7798;
	// bl 0x82241d18
	ctx.lr = 0x823F7798;
	sub_82241D18(ctx, base);
loc_823F7798:
	// lwz r3,4(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823f77a8
	if (ctx.cr6.eq) goto loc_823F77A8;
	// bl 0x82241d18
	ctx.lr = 0x823F77A8;
	sub_82241D18(ctx, base);
loc_823F77A8:
	// lwz r3,4(r23)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r23.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823f77b8
	if (ctx.cr6.eq) goto loc_823F77B8;
	// bl 0x82241d18
	ctx.lr = 0x823F77B8;
	sub_82241D18(ctx, base);
loc_823F77B8:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x82fa76a4
	__restgprlr_19(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823F77C4"))) PPC_WEAK_FUNC(sub_823F77C4);
PPC_FUNC_IMPL(__imp__sub_823F77C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823F77C8"))) PPC_WEAK_FUNC(sub_823F77C8);
PPC_FUNC_IMPL(__imp__sub_823F77C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7650
	ctx.lr = 0x823F77D0;
	__savegprlr_18(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// li r3,140
	ctx.r3.s64 = 140;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// mr r25,r8
	ctx.r25.u64 = ctx.r8.u64;
	// mr r23,r9
	ctx.r23.u64 = ctx.r9.u64;
	// mr r22,r10
	ctx.r22.u64 = ctx.r10.u64;
	// bl 0x82691500
	ctx.lr = 0x823F77FC;
	sub_82691500(ctx, base);
	// lwz r18,324(r1)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r1.u32 + 324);
	// li r24,0
	ctx.r24.s64 = 0;
	// lwz r19,316(r1)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r1.u32 + 316);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// lwz r20,308(r1)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r1.u32 + 308);
	// beq 0x823f7848
	if (ctx.cr0.eq) goto loc_823F7848;
	// mr r10,r22
	ctx.r10.u64 = ctx.r22.u64;
	// stw r18,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r18.u32);
	// mr r9,r23
	ctx.r9.u64 = ctx.r23.u64;
	// stw r19,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r19.u32);
	// mr r8,r25
	ctx.r8.u64 = ctx.r25.u64;
	// stw r20,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r20.u32);
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x823ffb50
	ctx.lr = 0x823F7840;
	sub_823FFB50(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x823f784c
	goto loc_823F784C;
loc_823F7848:
	// mr r30,r24
	ctx.r30.u64 = ctx.r24.u64;
loc_823F784C:
	// li r11,16
	ctx.r11.s64 = 16;
	// stw r24,0(r21)
	PPC_STORE_U32(ctx.r21.u32 + 0, ctx.r24.u32);
	// li r10,32
	ctx.r10.s64 = 32;
	// stw r24,4(r21)
	PPC_STORE_U32(ctx.r21.u32 + 4, ctx.r24.u32);
	// stw r11,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r11.u32);
	// li r9,36
	ctx.r9.s64 = 36;
	// li r8,40
	ctx.r8.s64 = 40;
	// stw r10,28(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28, ctx.r10.u32);
	// li r11,44
	ctx.r11.s64 = 44;
	// stw r9,32(r30)
	PPC_STORE_U32(ctx.r30.u32 + 32, ctx.r9.u32);
	// stw r8,36(r30)
	PPC_STORE_U32(ctx.r30.u32 + 36, ctx.r8.u32);
	// li r10,48
	ctx.r10.s64 = 48;
	// stw r11,40(r30)
	PPC_STORE_U32(ctx.r30.u32 + 40, ctx.r11.u32);
	// li r9,64
	ctx.r9.s64 = 64;
	// li r8,80
	ctx.r8.s64 = 80;
	// stw r24,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r24.u32);
	// li r11,112
	ctx.r11.s64 = 112;
	// stw r10,44(r30)
	PPC_STORE_U32(ctx.r30.u32 + 44, ctx.r10.u32);
	// addi r31,r30,12
	ctx.r31.s64 = ctx.r30.s64 + 12;
	// stw r9,48(r30)
	PPC_STORE_U32(ctx.r30.u32 + 48, ctx.r9.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// stw r8,52(r30)
	PPC_STORE_U32(ctx.r30.u32 + 52, ctx.r8.u32);
	// stw r11,56(r30)
	PPC_STORE_U32(ctx.r30.u32 + 56, ctx.r11.u32);
	// beq cr6,0x823f78dc
	if (ctx.cr6.eq) goto loc_823F78DC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x826abc90
	ctx.lr = 0x823F78B4;
	sub_826ABC90(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823f78d4
	if (ctx.cr0.eq) goto loc_823F78D4;
	// lwz r3,4(r21)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r21.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823f78cc
	if (ctx.cr6.eq) goto loc_823F78CC;
	// bl 0x82241d18
	ctx.lr = 0x823F78CC;
	sub_82241D18(ctx, base);
loc_823F78CC:
	// stw r30,4(r21)
	PPC_STORE_U32(ctx.r21.u32 + 4, ctx.r30.u32);
	// stw r31,0(r21)
	PPC_STORE_U32(ctx.r21.u32 + 0, ctx.r31.u32);
loc_823F78D4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82241d18
	ctx.lr = 0x823F78DC;
	sub_82241D18(ctx, base);
loc_823F78DC:
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823f78ec
	if (ctx.cr6.eq) goto loc_823F78EC;
	// bl 0x82241d18
	ctx.lr = 0x823F78EC;
	sub_82241D18(ctx, base);
loc_823F78EC:
	// lwz r3,4(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823f78fc
	if (ctx.cr6.eq) goto loc_823F78FC;
	// bl 0x82241d18
	ctx.lr = 0x823F78FC;
	sub_82241D18(ctx, base);
loc_823F78FC:
	// lwz r3,4(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823f790c
	if (ctx.cr6.eq) goto loc_823F790C;
	// bl 0x82241d18
	ctx.lr = 0x823F790C;
	sub_82241D18(ctx, base);
loc_823F790C:
	// lwz r3,4(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823f791c
	if (ctx.cr6.eq) goto loc_823F791C;
	// bl 0x82241d18
	ctx.lr = 0x823F791C;
	sub_82241D18(ctx, base);
loc_823F791C:
	// lwz r3,4(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823f792c
	if (ctx.cr6.eq) goto loc_823F792C;
	// bl 0x82241d18
	ctx.lr = 0x823F792C;
	sub_82241D18(ctx, base);
loc_823F792C:
	// lwz r3,4(r23)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r23.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823f793c
	if (ctx.cr6.eq) goto loc_823F793C;
	// bl 0x82241d18
	ctx.lr = 0x823F793C;
	sub_82241D18(ctx, base);
loc_823F793C:
	// lwz r3,4(r22)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r22.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823f794c
	if (ctx.cr6.eq) goto loc_823F794C;
	// bl 0x82241d18
	ctx.lr = 0x823F794C;
	sub_82241D18(ctx, base);
loc_823F794C:
	// lwz r3,4(r20)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r20.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823f795c
	if (ctx.cr6.eq) goto loc_823F795C;
	// bl 0x82241d18
	ctx.lr = 0x823F795C;
	sub_82241D18(ctx, base);
loc_823F795C:
	// lwz r3,4(r19)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r19.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823f796c
	if (ctx.cr6.eq) goto loc_823F796C;
	// bl 0x82241d18
	ctx.lr = 0x823F796C;
	sub_82241D18(ctx, base);
loc_823F796C:
	// lwz r3,4(r18)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r18.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823f797c
	if (ctx.cr6.eq) goto loc_823F797C;
	// bl 0x82241d18
	ctx.lr = 0x823F797C;
	sub_82241D18(ctx, base);
loc_823F797C:
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x82fa76a0
	__restgprlr_18(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823F7988"))) PPC_WEAK_FUNC(sub_823F7988);
PPC_FUNC_IMPL(__imp__sub_823F7988) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7650
	ctx.lr = 0x823F7990;
	__savegprlr_18(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// li r3,140
	ctx.r3.s64 = 140;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// mr r25,r8
	ctx.r25.u64 = ctx.r8.u64;
	// mr r23,r9
	ctx.r23.u64 = ctx.r9.u64;
	// mr r22,r10
	ctx.r22.u64 = ctx.r10.u64;
	// bl 0x82691500
	ctx.lr = 0x823F79BC;
	sub_82691500(ctx, base);
	// lwz r18,324(r1)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r1.u32 + 324);
	// li r24,0
	ctx.r24.s64 = 0;
	// lwz r19,316(r1)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r1.u32 + 316);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// lwz r20,308(r1)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r1.u32 + 308);
	// beq 0x823f7a08
	if (ctx.cr0.eq) goto loc_823F7A08;
	// mr r10,r22
	ctx.r10.u64 = ctx.r22.u64;
	// stw r18,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r18.u32);
	// mr r9,r23
	ctx.r9.u64 = ctx.r23.u64;
	// stw r19,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r19.u32);
	// mr r8,r25
	ctx.r8.u64 = ctx.r25.u64;
	// stw r20,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r20.u32);
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x823ffc78
	ctx.lr = 0x823F7A00;
	sub_823FFC78(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x823f7a0c
	goto loc_823F7A0C;
loc_823F7A08:
	// mr r30,r24
	ctx.r30.u64 = ctx.r24.u64;
loc_823F7A0C:
	// li r11,16
	ctx.r11.s64 = 16;
	// stw r24,0(r21)
	PPC_STORE_U32(ctx.r21.u32 + 0, ctx.r24.u32);
	// li r10,32
	ctx.r10.s64 = 32;
	// stw r24,4(r21)
	PPC_STORE_U32(ctx.r21.u32 + 4, ctx.r24.u32);
	// stw r11,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r11.u32);
	// li r9,36
	ctx.r9.s64 = 36;
	// li r8,40
	ctx.r8.s64 = 40;
	// stw r10,28(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28, ctx.r10.u32);
	// li r11,44
	ctx.r11.s64 = 44;
	// stw r9,32(r30)
	PPC_STORE_U32(ctx.r30.u32 + 32, ctx.r9.u32);
	// stw r8,36(r30)
	PPC_STORE_U32(ctx.r30.u32 + 36, ctx.r8.u32);
	// li r10,48
	ctx.r10.s64 = 48;
	// stw r11,40(r30)
	PPC_STORE_U32(ctx.r30.u32 + 40, ctx.r11.u32);
	// li r9,64
	ctx.r9.s64 = 64;
	// li r8,80
	ctx.r8.s64 = 80;
	// stw r24,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r24.u32);
	// li r11,112
	ctx.r11.s64 = 112;
	// stw r10,44(r30)
	PPC_STORE_U32(ctx.r30.u32 + 44, ctx.r10.u32);
	// addi r31,r30,12
	ctx.r31.s64 = ctx.r30.s64 + 12;
	// stw r9,48(r30)
	PPC_STORE_U32(ctx.r30.u32 + 48, ctx.r9.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// stw r8,52(r30)
	PPC_STORE_U32(ctx.r30.u32 + 52, ctx.r8.u32);
	// stw r11,56(r30)
	PPC_STORE_U32(ctx.r30.u32 + 56, ctx.r11.u32);
	// beq cr6,0x823f7a9c
	if (ctx.cr6.eq) goto loc_823F7A9C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x826abc90
	ctx.lr = 0x823F7A74;
	sub_826ABC90(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823f7a94
	if (ctx.cr0.eq) goto loc_823F7A94;
	// lwz r3,4(r21)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r21.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823f7a8c
	if (ctx.cr6.eq) goto loc_823F7A8C;
	// bl 0x82241d18
	ctx.lr = 0x823F7A8C;
	sub_82241D18(ctx, base);
loc_823F7A8C:
	// stw r30,4(r21)
	PPC_STORE_U32(ctx.r21.u32 + 4, ctx.r30.u32);
	// stw r31,0(r21)
	PPC_STORE_U32(ctx.r21.u32 + 0, ctx.r31.u32);
loc_823F7A94:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82241d18
	ctx.lr = 0x823F7A9C;
	sub_82241D18(ctx, base);
loc_823F7A9C:
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823f7aac
	if (ctx.cr6.eq) goto loc_823F7AAC;
	// bl 0x82241d18
	ctx.lr = 0x823F7AAC;
	sub_82241D18(ctx, base);
loc_823F7AAC:
	// lwz r3,4(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823f7abc
	if (ctx.cr6.eq) goto loc_823F7ABC;
	// bl 0x82241d18
	ctx.lr = 0x823F7ABC;
	sub_82241D18(ctx, base);
loc_823F7ABC:
	// lwz r3,4(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823f7acc
	if (ctx.cr6.eq) goto loc_823F7ACC;
	// bl 0x82241d18
	ctx.lr = 0x823F7ACC;
	sub_82241D18(ctx, base);
loc_823F7ACC:
	// lwz r3,4(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823f7adc
	if (ctx.cr6.eq) goto loc_823F7ADC;
	// bl 0x82241d18
	ctx.lr = 0x823F7ADC;
	sub_82241D18(ctx, base);
loc_823F7ADC:
	// lwz r3,4(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823f7aec
	if (ctx.cr6.eq) goto loc_823F7AEC;
	// bl 0x82241d18
	ctx.lr = 0x823F7AEC;
	sub_82241D18(ctx, base);
loc_823F7AEC:
	// lwz r3,4(r23)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r23.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823f7afc
	if (ctx.cr6.eq) goto loc_823F7AFC;
	// bl 0x82241d18
	ctx.lr = 0x823F7AFC;
	sub_82241D18(ctx, base);
loc_823F7AFC:
	// lwz r3,4(r22)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r22.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823f7b0c
	if (ctx.cr6.eq) goto loc_823F7B0C;
	// bl 0x82241d18
	ctx.lr = 0x823F7B0C;
	sub_82241D18(ctx, base);
loc_823F7B0C:
	// lwz r3,4(r20)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r20.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823f7b1c
	if (ctx.cr6.eq) goto loc_823F7B1C;
	// bl 0x82241d18
	ctx.lr = 0x823F7B1C;
	sub_82241D18(ctx, base);
loc_823F7B1C:
	// lwz r3,4(r19)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r19.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823f7b2c
	if (ctx.cr6.eq) goto loc_823F7B2C;
	// bl 0x82241d18
	ctx.lr = 0x823F7B2C;
	sub_82241D18(ctx, base);
loc_823F7B2C:
	// lwz r3,4(r18)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r18.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823f7b3c
	if (ctx.cr6.eq) goto loc_823F7B3C;
	// bl 0x82241d18
	ctx.lr = 0x823F7B3C;
	sub_82241D18(ctx, base);
loc_823F7B3C:
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x82fa76a0
	__restgprlr_18(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823F7B48"))) PPC_WEAK_FUNC(sub_823F7B48);
PPC_FUNC_IMPL(__imp__sub_823F7B48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7658
	ctx.lr = 0x823F7B50;
	__savegprlr_20(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// li r3,116
	ctx.r3.s64 = 116;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r25,r7
	ctx.r25.u64 = ctx.r7.u64;
	// mr r24,r8
	ctx.r24.u64 = ctx.r8.u64;
	// mr r23,r9
	ctx.r23.u64 = ctx.r9.u64;
	// mr r22,r10
	ctx.r22.u64 = ctx.r10.u64;
	// bl 0x82691500
	ctx.lr = 0x823F7B7C;
	sub_82691500(ctx, base);
	// lwz r20,276(r1)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r1.u32 + 276);
	// li r26,0
	ctx.r26.s64 = 0;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x823f7bb8
	if (ctx.cr0.eq) goto loc_823F7BB8;
	// mr r10,r22
	ctx.r10.u64 = ctx.r22.u64;
	// stw r20,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r20.u32);
	// mr r9,r23
	ctx.r9.u64 = ctx.r23.u64;
	// mr r8,r24
	ctx.r8.u64 = ctx.r24.u64;
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x823ffda0
	ctx.lr = 0x823F7BB0;
	sub_823FFDA0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x823f7bbc
	goto loc_823F7BBC;
loc_823F7BB8:
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
loc_823F7BBC:
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r26,0(r21)
	PPC_STORE_U32(ctx.r21.u32 + 0, ctx.r26.u32);
	// li r10,8
	ctx.r10.s64 = 8;
	// stw r26,4(r21)
	PPC_STORE_U32(ctx.r21.u32 + 4, ctx.r26.u32);
	// li r9,12
	ctx.r9.s64 = 12;
	// stw r11,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r11.u32);
	// stw r10,28(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28, ctx.r10.u32);
	// li r8,16
	ctx.r8.s64 = 16;
	// stw r9,32(r30)
	PPC_STORE_U32(ctx.r30.u32 + 32, ctx.r9.u32);
	// li r11,20
	ctx.r11.s64 = 20;
	// li r10,21
	ctx.r10.s64 = 21;
	// stw r26,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r26.u32);
	// li r9,32
	ctx.r9.s64 = 32;
	// stw r8,36(r30)
	PPC_STORE_U32(ctx.r30.u32 + 36, ctx.r8.u32);
	// addi r31,r30,12
	ctx.r31.s64 = ctx.r30.s64 + 12;
	// stw r11,40(r30)
	PPC_STORE_U32(ctx.r30.u32 + 40, ctx.r11.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// stw r10,44(r30)
	PPC_STORE_U32(ctx.r30.u32 + 44, ctx.r10.u32);
	// stw r9,48(r30)
	PPC_STORE_U32(ctx.r30.u32 + 48, ctx.r9.u32);
	// beq cr6,0x823f7c3c
	if (ctx.cr6.eq) goto loc_823F7C3C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x826abc90
	ctx.lr = 0x823F7C14;
	sub_826ABC90(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823f7c34
	if (ctx.cr0.eq) goto loc_823F7C34;
	// lwz r3,4(r21)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r21.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823f7c2c
	if (ctx.cr6.eq) goto loc_823F7C2C;
	// bl 0x82241d18
	ctx.lr = 0x823F7C2C;
	sub_82241D18(ctx, base);
loc_823F7C2C:
	// stw r30,4(r21)
	PPC_STORE_U32(ctx.r21.u32 + 4, ctx.r30.u32);
	// stw r31,0(r21)
	PPC_STORE_U32(ctx.r21.u32 + 0, ctx.r31.u32);
loc_823F7C34:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82241d18
	ctx.lr = 0x823F7C3C;
	sub_82241D18(ctx, base);
loc_823F7C3C:
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823f7c4c
	if (ctx.cr6.eq) goto loc_823F7C4C;
	// bl 0x82241d18
	ctx.lr = 0x823F7C4C;
	sub_82241D18(ctx, base);
loc_823F7C4C:
	// lwz r3,4(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823f7c5c
	if (ctx.cr6.eq) goto loc_823F7C5C;
	// bl 0x82241d18
	ctx.lr = 0x823F7C5C;
	sub_82241D18(ctx, base);
loc_823F7C5C:
	// lwz r3,4(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823f7c6c
	if (ctx.cr6.eq) goto loc_823F7C6C;
	// bl 0x82241d18
	ctx.lr = 0x823F7C6C;
	sub_82241D18(ctx, base);
loc_823F7C6C:
	// lwz r3,4(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823f7c7c
	if (ctx.cr6.eq) goto loc_823F7C7C;
	// bl 0x82241d18
	ctx.lr = 0x823F7C7C;
	sub_82241D18(ctx, base);
loc_823F7C7C:
	// lwz r3,4(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823f7c8c
	if (ctx.cr6.eq) goto loc_823F7C8C;
	// bl 0x82241d18
	ctx.lr = 0x823F7C8C;
	sub_82241D18(ctx, base);
loc_823F7C8C:
	// lwz r3,4(r23)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r23.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823f7c9c
	if (ctx.cr6.eq) goto loc_823F7C9C;
	// bl 0x82241d18
	ctx.lr = 0x823F7C9C;
	sub_82241D18(ctx, base);
loc_823F7C9C:
	// lwz r3,4(r22)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r22.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823f7cac
	if (ctx.cr6.eq) goto loc_823F7CAC;
	// bl 0x82241d18
	ctx.lr = 0x823F7CAC;
	sub_82241D18(ctx, base);
loc_823F7CAC:
	// lwz r3,4(r20)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r20.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823f7cbc
	if (ctx.cr6.eq) goto loc_823F7CBC;
	// bl 0x82241d18
	ctx.lr = 0x823F7CBC;
	sub_82241D18(ctx, base);
loc_823F7CBC:
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82fa76a8
	__restgprlr_20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823F7CC8"))) PPC_WEAK_FUNC(sub_823F7CC8);
PPC_FUNC_IMPL(__imp__sub_823F7CC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7650
	ctx.lr = 0x823F7CD0;
	__savegprlr_18(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// li r3,140
	ctx.r3.s64 = 140;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// mr r25,r8
	ctx.r25.u64 = ctx.r8.u64;
	// mr r23,r9
	ctx.r23.u64 = ctx.r9.u64;
	// mr r22,r10
	ctx.r22.u64 = ctx.r10.u64;
	// bl 0x82691500
	ctx.lr = 0x823F7CFC;
	sub_82691500(ctx, base);
	// lwz r18,324(r1)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r1.u32 + 324);
	// li r24,0
	ctx.r24.s64 = 0;
	// lwz r19,316(r1)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r1.u32 + 316);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// lwz r20,308(r1)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r1.u32 + 308);
	// beq 0x823f7d48
	if (ctx.cr0.eq) goto loc_823F7D48;
	// mr r10,r22
	ctx.r10.u64 = ctx.r22.u64;
	// stw r18,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r18.u32);
	// mr r9,r23
	ctx.r9.u64 = ctx.r23.u64;
	// stw r19,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r19.u32);
	// mr r8,r25
	ctx.r8.u64 = ctx.r25.u64;
	// stw r20,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r20.u32);
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x823ffec0
	ctx.lr = 0x823F7D40;
	sub_823FFEC0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x823f7d4c
	goto loc_823F7D4C;
loc_823F7D48:
	// mr r30,r24
	ctx.r30.u64 = ctx.r24.u64;
loc_823F7D4C:
	// li r11,16
	ctx.r11.s64 = 16;
	// stw r24,0(r21)
	PPC_STORE_U32(ctx.r21.u32 + 0, ctx.r24.u32);
	// li r10,32
	ctx.r10.s64 = 32;
	// stw r24,4(r21)
	PPC_STORE_U32(ctx.r21.u32 + 4, ctx.r24.u32);
	// stw r11,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r11.u32);
	// li r9,36
	ctx.r9.s64 = 36;
	// li r8,40
	ctx.r8.s64 = 40;
	// stw r10,28(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28, ctx.r10.u32);
	// li r11,44
	ctx.r11.s64 = 44;
	// stw r9,32(r30)
	PPC_STORE_U32(ctx.r30.u32 + 32, ctx.r9.u32);
	// stw r8,36(r30)
	PPC_STORE_U32(ctx.r30.u32 + 36, ctx.r8.u32);
	// li r10,48
	ctx.r10.s64 = 48;
	// stw r11,40(r30)
	PPC_STORE_U32(ctx.r30.u32 + 40, ctx.r11.u32);
	// li r9,64
	ctx.r9.s64 = 64;
	// li r8,80
	ctx.r8.s64 = 80;
	// stw r24,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r24.u32);
	// li r11,112
	ctx.r11.s64 = 112;
	// stw r10,44(r30)
	PPC_STORE_U32(ctx.r30.u32 + 44, ctx.r10.u32);
	// addi r31,r30,12
	ctx.r31.s64 = ctx.r30.s64 + 12;
	// stw r9,48(r30)
	PPC_STORE_U32(ctx.r30.u32 + 48, ctx.r9.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// stw r8,52(r30)
	PPC_STORE_U32(ctx.r30.u32 + 52, ctx.r8.u32);
	// stw r11,56(r30)
	PPC_STORE_U32(ctx.r30.u32 + 56, ctx.r11.u32);
	// beq cr6,0x823f7ddc
	if (ctx.cr6.eq) goto loc_823F7DDC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x826abc90
	ctx.lr = 0x823F7DB4;
	sub_826ABC90(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823f7dd4
	if (ctx.cr0.eq) goto loc_823F7DD4;
	// lwz r3,4(r21)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r21.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823f7dcc
	if (ctx.cr6.eq) goto loc_823F7DCC;
	// bl 0x82241d18
	ctx.lr = 0x823F7DCC;
	sub_82241D18(ctx, base);
loc_823F7DCC:
	// stw r30,4(r21)
	PPC_STORE_U32(ctx.r21.u32 + 4, ctx.r30.u32);
	// stw r31,0(r21)
	PPC_STORE_U32(ctx.r21.u32 + 0, ctx.r31.u32);
loc_823F7DD4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82241d18
	ctx.lr = 0x823F7DDC;
	sub_82241D18(ctx, base);
loc_823F7DDC:
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823f7dec
	if (ctx.cr6.eq) goto loc_823F7DEC;
	// bl 0x82241d18
	ctx.lr = 0x823F7DEC;
	sub_82241D18(ctx, base);
loc_823F7DEC:
	// lwz r3,4(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823f7dfc
	if (ctx.cr6.eq) goto loc_823F7DFC;
	// bl 0x82241d18
	ctx.lr = 0x823F7DFC;
	sub_82241D18(ctx, base);
loc_823F7DFC:
	// lwz r3,4(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823f7e0c
	if (ctx.cr6.eq) goto loc_823F7E0C;
	// bl 0x82241d18
	ctx.lr = 0x823F7E0C;
	sub_82241D18(ctx, base);
loc_823F7E0C:
	// lwz r3,4(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823f7e1c
	if (ctx.cr6.eq) goto loc_823F7E1C;
	// bl 0x82241d18
	ctx.lr = 0x823F7E1C;
	sub_82241D18(ctx, base);
loc_823F7E1C:
	// lwz r3,4(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823f7e2c
	if (ctx.cr6.eq) goto loc_823F7E2C;
	// bl 0x82241d18
	ctx.lr = 0x823F7E2C;
	sub_82241D18(ctx, base);
loc_823F7E2C:
	// lwz r3,4(r23)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r23.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823f7e3c
	if (ctx.cr6.eq) goto loc_823F7E3C;
	// bl 0x82241d18
	ctx.lr = 0x823F7E3C;
	sub_82241D18(ctx, base);
loc_823F7E3C:
	// lwz r3,4(r22)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r22.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823f7e4c
	if (ctx.cr6.eq) goto loc_823F7E4C;
	// bl 0x82241d18
	ctx.lr = 0x823F7E4C;
	sub_82241D18(ctx, base);
loc_823F7E4C:
	// lwz r3,4(r20)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r20.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823f7e5c
	if (ctx.cr6.eq) goto loc_823F7E5C;
	// bl 0x82241d18
	ctx.lr = 0x823F7E5C;
	sub_82241D18(ctx, base);
loc_823F7E5C:
	// lwz r3,4(r19)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r19.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823f7e6c
	if (ctx.cr6.eq) goto loc_823F7E6C;
	// bl 0x82241d18
	ctx.lr = 0x823F7E6C;
	sub_82241D18(ctx, base);
loc_823F7E6C:
	// lwz r3,4(r18)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r18.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823f7e7c
	if (ctx.cr6.eq) goto loc_823F7E7C;
	// bl 0x82241d18
	ctx.lr = 0x823F7E7C;
	sub_82241D18(ctx, base);
loc_823F7E7C:
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x82fa76a0
	__restgprlr_18(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823F7E88"))) PPC_WEAK_FUNC(sub_823F7E88);
PPC_FUNC_IMPL(__imp__sub_823F7E88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7668
	ctx.lr = 0x823F7E90;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r3,68
	ctx.r3.s64 = 68;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// mr r24,r7
	ctx.r24.u64 = ctx.r7.u64;
	// bl 0x82691500
	ctx.lr = 0x823F7EB0;
	sub_82691500(ctx, base);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x823f7ed8
	if (ctx.cr0.eq) goto loc_823F7ED8;
	// mr r7,r24
	ctx.r7.u64 = ctx.r24.u64;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x823fffe8
	ctx.lr = 0x823F7ED0;
	sub_823FFFE8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x823f7edc
	goto loc_823F7EDC;
loc_823F7ED8:
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
loc_823F7EDC:
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r29,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r29.u32);
	// li r10,8
	ctx.r10.s64 = 8;
	// stw r29,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r29.u32);
	// li r9,20
	ctx.r9.s64 = 20;
	// stw r29,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r29.u32);
	// addi r31,r30,12
	ctx.r31.s64 = ctx.r30.s64 + 12;
	// stw r11,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r11.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// stw r10,28(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28, ctx.r10.u32);
	// stw r9,32(r30)
	PPC_STORE_U32(ctx.r30.u32 + 32, ctx.r9.u32);
	// beq cr6,0x823f7f3c
	if (ctx.cr6.eq) goto loc_823F7F3C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x826abc90
	ctx.lr = 0x823F7F14;
	sub_826ABC90(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823f7f34
	if (ctx.cr0.eq) goto loc_823F7F34;
	// lwz r3,4(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823f7f2c
	if (ctx.cr6.eq) goto loc_823F7F2C;
	// bl 0x82241d18
	ctx.lr = 0x823F7F2C;
	sub_82241D18(ctx, base);
loc_823F7F2C:
	// stw r30,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r30.u32);
	// stw r31,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r31.u32);
loc_823F7F34:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82241d18
	ctx.lr = 0x823F7F3C;
	sub_82241D18(ctx, base);
loc_823F7F3C:
	// lwz r3,4(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823f7f4c
	if (ctx.cr6.eq) goto loc_823F7F4C;
	// bl 0x82241d18
	ctx.lr = 0x823F7F4C;
	sub_82241D18(ctx, base);
loc_823F7F4C:
	// lwz r3,4(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823f7f5c
	if (ctx.cr6.eq) goto loc_823F7F5C;
	// bl 0x82241d18
	ctx.lr = 0x823F7F5C;
	sub_82241D18(ctx, base);
loc_823F7F5C:
	// lwz r3,4(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823f7f6c
	if (ctx.cr6.eq) goto loc_823F7F6C;
	// bl 0x82241d18
	ctx.lr = 0x823F7F6C;
	sub_82241D18(ctx, base);
loc_823F7F6C:
	// lwz r3,4(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823f7f7c
	if (ctx.cr6.eq) goto loc_823F7F7C;
	// bl 0x82241d18
	ctx.lr = 0x823F7F7C;
	sub_82241D18(ctx, base);
loc_823F7F7C:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82fa76b8
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823F7F88"))) PPC_WEAK_FUNC(sub_823F7F88);
PPC_FUNC_IMPL(__imp__sub_823F7F88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x823F7F90;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x823f7ff0
	if (ctx.cr6.eq) goto loc_823F7FF0;
	// lwz r3,0(r5)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823f7fc8
	if (ctx.cr6.eq) goto loc_823F7FC8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823F7FC4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x823f7fd0
	goto loc_823F7FD0;
loc_823F7FC8:
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// addi r3,r11,-29104
	ctx.r3.s64 = ctx.r11.s64 + -29104;
loc_823F7FD0:
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// addi r4,r11,-6032
	ctx.r4.s64 = ctx.r11.s64 + -6032;
	// bl 0x82fa2af0
	ctx.lr = 0x823F7FDC;
	sub_82FA2AF0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823f7ff0
	if (ctx.cr0.eq) goto loc_823F7FF0;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// b 0x823f7ff4
	goto loc_823F7FF4;
loc_823F7FF0:
	// li r11,0
	ctx.r11.s64 = 0;
loc_823F7FF4:
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lwz r11,16(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823F8018;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823F8020"))) PPC_WEAK_FUNC(sub_823F8020);
PPC_FUNC_IMPL(__imp__sub_823F8020) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x823F8028;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x823f8088
	if (ctx.cr6.eq) goto loc_823F8088;
	// lwz r3,0(r5)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823f8060
	if (ctx.cr6.eq) goto loc_823F8060;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823F805C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x823f8068
	goto loc_823F8068;
loc_823F8060:
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// addi r3,r11,-29104
	ctx.r3.s64 = ctx.r11.s64 + -29104;
loc_823F8068:
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// addi r4,r11,-6032
	ctx.r4.s64 = ctx.r11.s64 + -6032;
	// bl 0x82fa2af0
	ctx.lr = 0x823F8074;
	sub_82FA2AF0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823f8088
	if (ctx.cr0.eq) goto loc_823F8088;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r5,r11,4
	ctx.r5.s64 = ctx.r11.s64 + 4;
	// b 0x823f808c
	goto loc_823F808C;
loc_823F8088:
	// li r5,0
	ctx.r5.s64 = 0;
loc_823F808C:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// beq cr6,0x823f80b0
	if (ctx.cr6.eq) goto loc_823F80B0;
	// bctrl 
	ctx.lr = 0x823F80AC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x823f810c
	goto loc_823F810C;
loc_823F80B0:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bctrl 
	ctx.lr = 0x823F80B8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x82691500
	ctx.lr = 0x823F80C0;
	sub_82691500(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x823f80e4
	if (ctx.cr0.eq) goto loc_823F80E4;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r10,r10,-29840
	ctx.r10.s64 = ctx.r10.s64 + -29840;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// b 0x823f80e8
	goto loc_823F80E8;
loc_823F80E4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_823F80E8:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823f810c
	if (ctx.cr6.eq) goto loc_823F810C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823F810C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_823F810C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823F8114"))) PPC_WEAK_FUNC(sub_823F8114);
PPC_FUNC_IMPL(__imp__sub_823F8114) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823F8118"))) PPC_WEAK_FUNC(sub_823F8118);
PPC_FUNC_IMPL(__imp__sub_823F8118) {
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
	// lwz r10,0(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823F8148;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823F8158"))) PPC_WEAK_FUNC(sub_823F8158);
PPC_FUNC_IMPL(__imp__sub_823F8158) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x823F8160;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x823f81c0
	if (ctx.cr6.eq) goto loc_823F81C0;
	// lwz r3,0(r5)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823f8198
	if (ctx.cr6.eq) goto loc_823F8198;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823F8194;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x823f81a0
	goto loc_823F81A0;
loc_823F8198:
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// addi r3,r11,-29104
	ctx.r3.s64 = ctx.r11.s64 + -29104;
loc_823F81A0:
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// addi r4,r11,-5964
	ctx.r4.s64 = ctx.r11.s64 + -5964;
	// bl 0x82fa2af0
	ctx.lr = 0x823F81AC;
	sub_82FA2AF0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823f81c0
	if (ctx.cr0.eq) goto loc_823F81C0;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// b 0x823f81c4
	goto loc_823F81C4;
loc_823F81C0:
	// li r11,0
	ctx.r11.s64 = 0;
loc_823F81C4:
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lwz r11,16(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823F81E8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823F81F0"))) PPC_WEAK_FUNC(sub_823F81F0);
PPC_FUNC_IMPL(__imp__sub_823F81F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x823F81F8;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x823f8258
	if (ctx.cr6.eq) goto loc_823F8258;
	// lwz r3,0(r5)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823f8230
	if (ctx.cr6.eq) goto loc_823F8230;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823F822C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x823f8238
	goto loc_823F8238;
loc_823F8230:
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// addi r3,r11,-29104
	ctx.r3.s64 = ctx.r11.s64 + -29104;
loc_823F8238:
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// addi r4,r11,-5964
	ctx.r4.s64 = ctx.r11.s64 + -5964;
	// bl 0x82fa2af0
	ctx.lr = 0x823F8244;
	sub_82FA2AF0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823f8258
	if (ctx.cr0.eq) goto loc_823F8258;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r5,r11,4
	ctx.r5.s64 = ctx.r11.s64 + 4;
	// b 0x823f825c
	goto loc_823F825C;
loc_823F8258:
	// li r5,0
	ctx.r5.s64 = 0;
loc_823F825C:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// beq cr6,0x823f8280
	if (ctx.cr6.eq) goto loc_823F8280;
	// bctrl 
	ctx.lr = 0x823F827C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x823f82dc
	goto loc_823F82DC;
loc_823F8280:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bctrl 
	ctx.lr = 0x823F8288;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x82691500
	ctx.lr = 0x823F8290;
	sub_82691500(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x823f82b4
	if (ctx.cr0.eq) goto loc_823F82B4;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r10,r10,-29828
	ctx.r10.s64 = ctx.r10.s64 + -29828;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// b 0x823f82b8
	goto loc_823F82B8;
loc_823F82B4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_823F82B8:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823f82dc
	if (ctx.cr6.eq) goto loc_823F82DC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823F82DC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_823F82DC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823F82E4"))) PPC_WEAK_FUNC(sub_823F82E4);
PPC_FUNC_IMPL(__imp__sub_823F82E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823F82E8"))) PPC_WEAK_FUNC(sub_823F82E8);
PPC_FUNC_IMPL(__imp__sub_823F82E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x823F82F0;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x823f8350
	if (ctx.cr6.eq) goto loc_823F8350;
	// lwz r3,0(r5)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823f8328
	if (ctx.cr6.eq) goto loc_823F8328;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823F8324;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x823f8330
	goto loc_823F8330;
loc_823F8328:
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// addi r3,r11,-29104
	ctx.r3.s64 = ctx.r11.s64 + -29104;
loc_823F8330:
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// addi r4,r11,-5904
	ctx.r4.s64 = ctx.r11.s64 + -5904;
	// bl 0x82fa2af0
	ctx.lr = 0x823F833C;
	sub_82FA2AF0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823f8350
	if (ctx.cr0.eq) goto loc_823F8350;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// b 0x823f8354
	goto loc_823F8354;
loc_823F8350:
	// li r11,0
	ctx.r11.s64 = 0;
loc_823F8354:
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lwz r11,16(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823F8378;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823F8380"))) PPC_WEAK_FUNC(sub_823F8380);
PPC_FUNC_IMPL(__imp__sub_823F8380) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x823F8388;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x823f83e8
	if (ctx.cr6.eq) goto loc_823F83E8;
	// lwz r3,0(r5)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823f83c0
	if (ctx.cr6.eq) goto loc_823F83C0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823F83BC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x823f83c8
	goto loc_823F83C8;
loc_823F83C0:
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// addi r3,r11,-29104
	ctx.r3.s64 = ctx.r11.s64 + -29104;
loc_823F83C8:
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// addi r4,r11,-5904
	ctx.r4.s64 = ctx.r11.s64 + -5904;
	// bl 0x82fa2af0
	ctx.lr = 0x823F83D4;
	sub_82FA2AF0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823f83e8
	if (ctx.cr0.eq) goto loc_823F83E8;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r5,r11,4
	ctx.r5.s64 = ctx.r11.s64 + 4;
	// b 0x823f83ec
	goto loc_823F83EC;
loc_823F83E8:
	// li r5,0
	ctx.r5.s64 = 0;
loc_823F83EC:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// beq cr6,0x823f8410
	if (ctx.cr6.eq) goto loc_823F8410;
	// bctrl 
	ctx.lr = 0x823F840C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x823f846c
	goto loc_823F846C;
loc_823F8410:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bctrl 
	ctx.lr = 0x823F8418;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x82691500
	ctx.lr = 0x823F8420;
	sub_82691500(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x823f8444
	if (ctx.cr0.eq) goto loc_823F8444;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r10,r10,-29816
	ctx.r10.s64 = ctx.r10.s64 + -29816;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// b 0x823f8448
	goto loc_823F8448;
loc_823F8444:
	// li r11,0
	ctx.r11.s64 = 0;
loc_823F8448:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823f846c
	if (ctx.cr6.eq) goto loc_823F846C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823F846C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_823F846C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823F8474"))) PPC_WEAK_FUNC(sub_823F8474);
PPC_FUNC_IMPL(__imp__sub_823F8474) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823F8478"))) PPC_WEAK_FUNC(sub_823F8478);
PPC_FUNC_IMPL(__imp__sub_823F8478) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x823F8480;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x823f84e0
	if (ctx.cr6.eq) goto loc_823F84E0;
	// lwz r3,0(r5)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823f84b8
	if (ctx.cr6.eq) goto loc_823F84B8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823F84B4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x823f84c0
	goto loc_823F84C0;
loc_823F84B8:
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// addi r3,r11,-29104
	ctx.r3.s64 = ctx.r11.s64 + -29104;
loc_823F84C0:
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// addi r4,r11,-5848
	ctx.r4.s64 = ctx.r11.s64 + -5848;
	// bl 0x82fa2af0
	ctx.lr = 0x823F84CC;
	sub_82FA2AF0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823f84e0
	if (ctx.cr0.eq) goto loc_823F84E0;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// b 0x823f84e4
	goto loc_823F84E4;
loc_823F84E0:
	// li r11,0
	ctx.r11.s64 = 0;
loc_823F84E4:
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lwz r11,16(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823F8508;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823F8510"))) PPC_WEAK_FUNC(sub_823F8510);
PPC_FUNC_IMPL(__imp__sub_823F8510) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x823F8518;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x823f8578
	if (ctx.cr6.eq) goto loc_823F8578;
	// lwz r3,0(r5)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823f8550
	if (ctx.cr6.eq) goto loc_823F8550;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823F854C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x823f8558
	goto loc_823F8558;
loc_823F8550:
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// addi r3,r11,-29104
	ctx.r3.s64 = ctx.r11.s64 + -29104;
loc_823F8558:
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// addi r4,r11,-5848
	ctx.r4.s64 = ctx.r11.s64 + -5848;
	// bl 0x82fa2af0
	ctx.lr = 0x823F8564;
	sub_82FA2AF0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823f8578
	if (ctx.cr0.eq) goto loc_823F8578;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r5,r11,4
	ctx.r5.s64 = ctx.r11.s64 + 4;
	// b 0x823f857c
	goto loc_823F857C;
loc_823F8578:
	// li r5,0
	ctx.r5.s64 = 0;
loc_823F857C:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// beq cr6,0x823f85a0
	if (ctx.cr6.eq) goto loc_823F85A0;
	// bctrl 
	ctx.lr = 0x823F859C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x823f85fc
	goto loc_823F85FC;
loc_823F85A0:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bctrl 
	ctx.lr = 0x823F85A8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x82691500
	ctx.lr = 0x823F85B0;
	sub_82691500(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x823f85d4
	if (ctx.cr0.eq) goto loc_823F85D4;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r10,r10,-29804
	ctx.r10.s64 = ctx.r10.s64 + -29804;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// b 0x823f85d8
	goto loc_823F85D8;
loc_823F85D4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_823F85D8:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823f85fc
	if (ctx.cr6.eq) goto loc_823F85FC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823F85FC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_823F85FC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823F8604"))) PPC_WEAK_FUNC(sub_823F8604);
PPC_FUNC_IMPL(__imp__sub_823F8604) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823F8608"))) PPC_WEAK_FUNC(sub_823F8608);
PPC_FUNC_IMPL(__imp__sub_823F8608) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x823F8610;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// bl 0x8291fc80
	ctx.lr = 0x823F8628;
	sub_8291FC80(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823F8648;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8291fc80
	ctx.lr = 0x823F8650;
	sub_8291FC80(ctx, base);
	// clrlwi. r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// subf r29,r30,r3
	ctx.r29.s64 = ctx.r3.s64 - ctx.r30.s64;
	// beq 0x823f8668
	if (ctx.cr0.eq) goto loc_823F8668;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8291fc50
	ctx.lr = 0x823F8668;
	sub_8291FC50(ctx, base);
loc_823F8668:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823F8674"))) PPC_WEAK_FUNC(sub_823F8674);
PPC_FUNC_IMPL(__imp__sub_823F8674) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823F8678"))) PPC_WEAK_FUNC(sub_823F8678);
PPC_FUNC_IMPL(__imp__sub_823F8678) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x823F8680;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x823f86e0
	if (ctx.cr6.eq) goto loc_823F86E0;
	// lwz r3,0(r5)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823f86b8
	if (ctx.cr6.eq) goto loc_823F86B8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823F86B4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x823f86c0
	goto loc_823F86C0;
loc_823F86B8:
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// addi r3,r11,-29104
	ctx.r3.s64 = ctx.r11.s64 + -29104;
loc_823F86C0:
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// addi r4,r11,-5792
	ctx.r4.s64 = ctx.r11.s64 + -5792;
	// bl 0x82fa2af0
	ctx.lr = 0x823F86CC;
	sub_82FA2AF0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823f86e0
	if (ctx.cr0.eq) goto loc_823F86E0;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// b 0x823f86e4
	goto loc_823F86E4;
loc_823F86E0:
	// li r11,0
	ctx.r11.s64 = 0;
loc_823F86E4:
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lwz r11,16(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823F8708;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823F8710"))) PPC_WEAK_FUNC(sub_823F8710);
PPC_FUNC_IMPL(__imp__sub_823F8710) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x823F8718;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x823f8778
	if (ctx.cr6.eq) goto loc_823F8778;
	// lwz r3,0(r5)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823f8750
	if (ctx.cr6.eq) goto loc_823F8750;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823F874C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x823f8758
	goto loc_823F8758;
loc_823F8750:
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// addi r3,r11,-29104
	ctx.r3.s64 = ctx.r11.s64 + -29104;
loc_823F8758:
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// addi r4,r11,-5792
	ctx.r4.s64 = ctx.r11.s64 + -5792;
	// bl 0x82fa2af0
	ctx.lr = 0x823F8764;
	sub_82FA2AF0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823f8778
	if (ctx.cr0.eq) goto loc_823F8778;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r5,r11,4
	ctx.r5.s64 = ctx.r11.s64 + 4;
	// b 0x823f877c
	goto loc_823F877C;
loc_823F8778:
	// li r5,0
	ctx.r5.s64 = 0;
loc_823F877C:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// beq cr6,0x823f87a0
	if (ctx.cr6.eq) goto loc_823F87A0;
	// bctrl 
	ctx.lr = 0x823F879C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x823f87fc
	goto loc_823F87FC;
loc_823F87A0:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bctrl 
	ctx.lr = 0x823F87A8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x82691500
	ctx.lr = 0x823F87B0;
	sub_82691500(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x823f87d4
	if (ctx.cr0.eq) goto loc_823F87D4;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r10,r10,-29792
	ctx.r10.s64 = ctx.r10.s64 + -29792;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// b 0x823f87d8
	goto loc_823F87D8;
loc_823F87D4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_823F87D8:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823f87fc
	if (ctx.cr6.eq) goto loc_823F87FC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823F87FC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_823F87FC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823F8804"))) PPC_WEAK_FUNC(sub_823F8804);
PPC_FUNC_IMPL(__imp__sub_823F8804) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823F8808"))) PPC_WEAK_FUNC(sub_823F8808);
PPC_FUNC_IMPL(__imp__sub_823F8808) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x823F8810;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x823f8870
	if (ctx.cr6.eq) goto loc_823F8870;
	// lwz r3,0(r5)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823f8848
	if (ctx.cr6.eq) goto loc_823F8848;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823F8844;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x823f8850
	goto loc_823F8850;
loc_823F8848:
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// addi r3,r11,-29104
	ctx.r3.s64 = ctx.r11.s64 + -29104;
loc_823F8850:
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// addi r4,r11,-5740
	ctx.r4.s64 = ctx.r11.s64 + -5740;
	// bl 0x82fa2af0
	ctx.lr = 0x823F885C;
	sub_82FA2AF0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823f8870
	if (ctx.cr0.eq) goto loc_823F8870;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// b 0x823f8874
	goto loc_823F8874;
loc_823F8870:
	// li r11,0
	ctx.r11.s64 = 0;
loc_823F8874:
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lwz r11,16(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823F8898;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823F88A0"))) PPC_WEAK_FUNC(sub_823F88A0);
PPC_FUNC_IMPL(__imp__sub_823F88A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x823F88A8;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x823f8908
	if (ctx.cr6.eq) goto loc_823F8908;
	// lwz r3,0(r5)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823f88e0
	if (ctx.cr6.eq) goto loc_823F88E0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823F88DC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x823f88e8
	goto loc_823F88E8;
loc_823F88E0:
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// addi r3,r11,-29104
	ctx.r3.s64 = ctx.r11.s64 + -29104;
loc_823F88E8:
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// addi r4,r11,-5740
	ctx.r4.s64 = ctx.r11.s64 + -5740;
	// bl 0x82fa2af0
	ctx.lr = 0x823F88F4;
	sub_82FA2AF0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823f8908
	if (ctx.cr0.eq) goto loc_823F8908;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r5,r11,4
	ctx.r5.s64 = ctx.r11.s64 + 4;
	// b 0x823f890c
	goto loc_823F890C;
loc_823F8908:
	// li r5,0
	ctx.r5.s64 = 0;
loc_823F890C:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// beq cr6,0x823f8930
	if (ctx.cr6.eq) goto loc_823F8930;
	// bctrl 
	ctx.lr = 0x823F892C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x823f898c
	goto loc_823F898C;
loc_823F8930:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bctrl 
	ctx.lr = 0x823F8938;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x82691500
	ctx.lr = 0x823F8940;
	sub_82691500(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x823f8964
	if (ctx.cr0.eq) goto loc_823F8964;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r10,r10,-29780
	ctx.r10.s64 = ctx.r10.s64 + -29780;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// b 0x823f8968
	goto loc_823F8968;
loc_823F8964:
	// li r11,0
	ctx.r11.s64 = 0;
loc_823F8968:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823f898c
	if (ctx.cr6.eq) goto loc_823F898C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823F898C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_823F898C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823F8994"))) PPC_WEAK_FUNC(sub_823F8994);
PPC_FUNC_IMPL(__imp__sub_823F8994) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823F8998"))) PPC_WEAK_FUNC(sub_823F8998);
PPC_FUNC_IMPL(__imp__sub_823F8998) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x823F89A0;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x823f8a00
	if (ctx.cr6.eq) goto loc_823F8A00;
	// lwz r3,0(r5)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823f89d8
	if (ctx.cr6.eq) goto loc_823F89D8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823F89D4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x823f89e0
	goto loc_823F89E0;
loc_823F89D8:
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// addi r3,r11,-29104
	ctx.r3.s64 = ctx.r11.s64 + -29104;
loc_823F89E0:
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// addi r4,r11,-5684
	ctx.r4.s64 = ctx.r11.s64 + -5684;
	// bl 0x82fa2af0
	ctx.lr = 0x823F89EC;
	sub_82FA2AF0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823f8a00
	if (ctx.cr0.eq) goto loc_823F8A00;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// b 0x823f8a04
	goto loc_823F8A04;
loc_823F8A00:
	// li r11,0
	ctx.r11.s64 = 0;
loc_823F8A04:
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lwz r11,16(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823F8A28;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823F8A30"))) PPC_WEAK_FUNC(sub_823F8A30);
PPC_FUNC_IMPL(__imp__sub_823F8A30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x823F8A38;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x823f8a98
	if (ctx.cr6.eq) goto loc_823F8A98;
	// lwz r3,0(r5)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823f8a70
	if (ctx.cr6.eq) goto loc_823F8A70;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823F8A6C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x823f8a78
	goto loc_823F8A78;
loc_823F8A70:
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// addi r3,r11,-29104
	ctx.r3.s64 = ctx.r11.s64 + -29104;
loc_823F8A78:
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// addi r4,r11,-5684
	ctx.r4.s64 = ctx.r11.s64 + -5684;
	// bl 0x82fa2af0
	ctx.lr = 0x823F8A84;
	sub_82FA2AF0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823f8a98
	if (ctx.cr0.eq) goto loc_823F8A98;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r5,r11,4
	ctx.r5.s64 = ctx.r11.s64 + 4;
	// b 0x823f8a9c
	goto loc_823F8A9C;
loc_823F8A98:
	// li r5,0
	ctx.r5.s64 = 0;
loc_823F8A9C:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// beq cr6,0x823f8ac0
	if (ctx.cr6.eq) goto loc_823F8AC0;
	// bctrl 
	ctx.lr = 0x823F8ABC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x823f8b1c
	goto loc_823F8B1C;
loc_823F8AC0:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bctrl 
	ctx.lr = 0x823F8AC8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x82691500
	ctx.lr = 0x823F8AD0;
	sub_82691500(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x823f8af4
	if (ctx.cr0.eq) goto loc_823F8AF4;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r10,r10,-29768
	ctx.r10.s64 = ctx.r10.s64 + -29768;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// b 0x823f8af8
	goto loc_823F8AF8;
loc_823F8AF4:
	// li r11,0
	ctx.r11.s64 = 0;
loc_823F8AF8:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823f8b1c
	if (ctx.cr6.eq) goto loc_823F8B1C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823F8B1C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_823F8B1C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823F8B24"))) PPC_WEAK_FUNC(sub_823F8B24);
PPC_FUNC_IMPL(__imp__sub_823F8B24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823F8B28"))) PPC_WEAK_FUNC(sub_823F8B28);
PPC_FUNC_IMPL(__imp__sub_823F8B28) {
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
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823F8B54;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x823f8b64
	if (ctx.cr6.eq) goto loc_823F8B64;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_823F8B64:
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

__attribute__((alias("__imp__sub_823F8B78"))) PPC_WEAK_FUNC(sub_823F8B78);
PPC_FUNC_IMPL(__imp__sub_823F8B78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa766c
	ctx.lr = 0x823F8B80;
	__savegprlr_25(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// li r3,80
	ctx.r3.s64 = 80;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// bl 0x82691500
	ctx.lr = 0x823F8B9C;
	sub_82691500(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x823f8c20
	if (ctx.cr0.eq) goto loc_823F8C20;
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// li r10,0
	ctx.r10.s64 = 0;
	// addic. r11,r31,16
	ctx.xer.ca = ctx.r31.u32 > 4294967279;
	ctx.r11.s64 = ctx.r31.s64 + 16;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r9,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// stb r10,72(r31)
	PPC_STORE_U8(ctx.r31.u32 + 72, ctx.r10.u8);
	// stb r10,73(r31)
	PPC_STORE_U8(ctx.r31.u32 + 73, ctx.r10.u8);
	// beq 0x823f8c00
	if (ctx.cr0.eq) goto loc_823F8C00;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r27,r11,8
	ctx.r27.s64 = ctx.r11.s64 + 8;
	// addi r28,r29,8
	ctx.r28.s64 = ctx.r29.s64 + 8;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// bl 0x8234e650
	ctx.lr = 0x823F8BF4;
	sub_8234E650(ctx, base);
	// addi r4,r28,24
	ctx.r4.s64 = ctx.r28.s64 + 24;
	// addi r3,r27,24
	ctx.r3.s64 = ctx.r27.s64 + 24;
	// bl 0x8234e650
	ctx.lr = 0x823F8C00;
	sub_8234E650(ctx, base);
loc_823F8C00:
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x823fadc0
	ctx.lr = 0x823F8C14;
	sub_823FADC0(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82fa76bc
	__restgprlr_25(ctx, base);
	return;
loc_823F8C20:
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
	ctx.lr = 0x823F8C3C;
	sub_82240040(ctx, base);
}

__attribute__((alias("__imp__sub_823F8C3C"))) PPC_WEAK_FUNC(sub_823F8C3C);
PPC_FUNC_IMPL(__imp__sub_823F8C3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823F8C40"))) PPC_WEAK_FUNC(sub_823F8C40);
PPC_FUNC_IMPL(__imp__sub_823F8C40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7670
	ctx.lr = 0x823F8C48;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// li r3,80
	ctx.r3.s64 = 80;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// bl 0x82691500
	ctx.lr = 0x823F8C64;
	sub_82691500(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x823f8ce0
	if (ctx.cr0.eq) goto loc_823F8CE0;
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// li r10,0
	ctx.r10.s64 = 0;
	// addic. r11,r31,16
	ctx.xer.ca = ctx.r31.u32 > 4294967279;
	ctx.r11.s64 = ctx.r31.s64 + 16;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r9,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// stb r10,72(r31)
	PPC_STORE_U8(ctx.r31.u32 + 72, ctx.r10.u8);
	// stb r10,73(r31)
	PPC_STORE_U8(ctx.r31.u32 + 73, ctx.r10.u8);
	// beq 0x823f8cc0
	if (ctx.cr0.eq) goto loc_823F8CC0;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r28,r11,8
	ctx.r28.s64 = ctx.r11.s64 + 8;
	// addi r29,r29,8
	ctx.r29.s64 = ctx.r29.s64 + 8;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// bl 0x8234e650
	ctx.lr = 0x823F8CB4;
	sub_8234E650(ctx, base);
	// addi r4,r29,24
	ctx.r4.s64 = ctx.r29.s64 + 24;
	// addi r3,r28,24
	ctx.r3.s64 = ctx.r28.s64 + 24;
	// bl 0x8234e650
	ctx.lr = 0x823F8CC0;
	sub_8234E650(ctx, base);
loc_823F8CC0:
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x823fb028
	ctx.lr = 0x823F8CD4;
	sub_823FB028(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82fa76c0
	__restgprlr_26(ctx, base);
	return;
loc_823F8CE0:
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
	ctx.lr = 0x823F8CFC;
	sub_82240040(ctx, base);
}

__attribute__((alias("__imp__sub_823F8CFC"))) PPC_WEAK_FUNC(sub_823F8CFC);
PPC_FUNC_IMPL(__imp__sub_823F8CFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823F8D00"))) PPC_WEAK_FUNC(sub_823F8D00);
PPC_FUNC_IMPL(__imp__sub_823F8D00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x823F8D08;
	__savegprlr_29(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x823f8d68
	if (ctx.cr6.eq) goto loc_823F8D68;
	// lwz r3,0(r5)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823f8d40
	if (ctx.cr6.eq) goto loc_823F8D40;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823F8D3C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x823f8d48
	goto loc_823F8D48;
loc_823F8D40:
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// addi r3,r11,-29104
	ctx.r3.s64 = ctx.r11.s64 + -29104;
loc_823F8D48:
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// addi r4,r11,-5624
	ctx.r4.s64 = ctx.r11.s64 + -5624;
	// bl 0x82fa2af0
	ctx.lr = 0x823F8D54;
	sub_82FA2AF0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823f8d68
	if (ctx.cr0.eq) goto loc_823F8D68;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r11,4
	ctx.r4.s64 = ctx.r11.s64 + 4;
	// b 0x823f8d6c
	goto loc_823F8D6C;
loc_823F8D68:
	// li r4,0
	ctx.r4.s64 = 0;
loc_823F8D6C:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// li r5,24
	ctx.r5.s64 = 24;
	// bl 0x82fa77c0
	ctx.lr = 0x823F8D78;
	sub_82FA77C0(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823F8D94;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823F8D9C"))) PPC_WEAK_FUNC(sub_823F8D9C);
PPC_FUNC_IMPL(__imp__sub_823F8D9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823F8DA0"))) PPC_WEAK_FUNC(sub_823F8DA0);
PPC_FUNC_IMPL(__imp__sub_823F8DA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x823F8DA8;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x823f8e0c
	if (ctx.cr6.eq) goto loc_823F8E0C;
	// lwz r3,0(r5)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823f8de4
	if (ctx.cr6.eq) goto loc_823F8DE4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823F8DE0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x823f8dec
	goto loc_823F8DEC;
loc_823F8DE4:
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// addi r3,r11,-29104
	ctx.r3.s64 = ctx.r11.s64 + -29104;
loc_823F8DEC:
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// addi r4,r11,-5624
	ctx.r4.s64 = ctx.r11.s64 + -5624;
	// bl 0x82fa2af0
	ctx.lr = 0x823F8DF8;
	sub_82FA2AF0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823f8e0c
	if (ctx.cr0.eq) goto loc_823F8E0C;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r5,r11,4
	ctx.r5.s64 = ctx.r11.s64 + 4;
	// b 0x823f8e10
	goto loc_823F8E10;
loc_823F8E0C:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
loc_823F8E10:
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// beq cr6,0x823f8e34
	if (ctx.cr6.eq) goto loc_823F8E34;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823F8E30;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x823f8ec4
	goto loc_823F8EC4;
loc_823F8E34:
	// addi r11,r1,88
	ctx.r11.s64 = ctx.r1.s64 + 88;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// li r10,-1
	ctx.r10.s64 = -1;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r30,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r30.u32);
	// stw r30,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r30.u32);
	// stw r30,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r30.u32);
	// stb r30,100(r1)
	PPC_STORE_U8(ctx.r1.u32 + 100, ctx.r30.u8);
	// lwz r11,20(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823F8E6C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,28
	ctx.r3.s64 = 28;
	// bl 0x82691500
	ctx.lr = 0x823F8E74;
	sub_82691500(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x823f8e9c
	if (ctx.cr0.eq) goto loc_823F8E9C;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// addi r11,r11,-29756
	ctx.r11.s64 = ctx.r11.s64 + -29756;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// li r5,24
	ctx.r5.s64 = 24;
	// bl 0x82fa77c0
	ctx.lr = 0x823F8E98;
	sub_82FA77C0(ctx, base);
	// b 0x823f8ea0
	goto loc_823F8EA0;
loc_823F8E9C:
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
loc_823F8EA0:
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// stw r31,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r31.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823f8ec4
	if (ctx.cr6.eq) goto loc_823F8EC4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823F8EC4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_823F8EC4:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823F8ECC"))) PPC_WEAK_FUNC(sub_823F8ECC);
PPC_FUNC_IMPL(__imp__sub_823F8ECC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823F8ED0"))) PPC_WEAK_FUNC(sub_823F8ED0);
PPC_FUNC_IMPL(__imp__sub_823F8ED0) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,192
	ctx.r4.s64 = 192;
	// bl 0x8224e2d0
	ctx.lr = 0x823F8EFC;
	sub_8224E2D0(ctx, base);
	// li r5,24
	ctx.r5.s64 = 24;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829201c8
	ctx.lr = 0x823F8F0C;
	sub_829201C8(ctx, base);
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

__attribute__((alias("__imp__sub_823F8F24"))) PPC_WEAK_FUNC(sub_823F8F24);
PPC_FUNC_IMPL(__imp__sub_823F8F24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823F8F28"))) PPC_WEAK_FUNC(sub_823F8F28);
PPC_FUNC_IMPL(__imp__sub_823F8F28) {
	PPC_FUNC_PROLOGUE();
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
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,24
	ctx.r5.s64 = 24;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x8224c838
	ctx.lr = 0x823F8F54;
	sub_8224C838(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x823f8f6c
	if (ctx.cr6.eq) goto loc_823F8F6C;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r5,24
	ctx.r5.s64 = 24;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82fa77c0
	ctx.lr = 0x823F8F6C;
	sub_82FA77C0(ctx, base);
loc_823F8F6C:
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

__attribute__((alias("__imp__sub_823F8F80"))) PPC_WEAK_FUNC(sub_823F8F80);
PPC_FUNC_IMPL(__imp__sub_823F8F80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x823F8F88;
	__savegprlr_29(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x823f8fe8
	if (ctx.cr6.eq) goto loc_823F8FE8;
	// lwz r3,0(r5)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823f8fc0
	if (ctx.cr6.eq) goto loc_823F8FC0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823F8FBC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x823f8fc8
	goto loc_823F8FC8;
loc_823F8FC0:
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// addi r3,r11,-29104
	ctx.r3.s64 = ctx.r11.s64 + -29104;
loc_823F8FC8:
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// addi r4,r11,-5544
	ctx.r4.s64 = ctx.r11.s64 + -5544;
	// bl 0x82fa2af0
	ctx.lr = 0x823F8FD4;
	sub_82FA2AF0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823f8fe8
	if (ctx.cr0.eq) goto loc_823F8FE8;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r11,16
	ctx.r4.s64 = ctx.r11.s64 + 16;
	// b 0x823f8fec
	goto loc_823F8FEC;
loc_823F8FE8:
	// li r4,0
	ctx.r4.s64 = 0;
loc_823F8FEC:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// li r5,144
	ctx.r5.s64 = 144;
	// bl 0x82fa77c0
	ctx.lr = 0x823F8FF8;
	sub_82FA77C0(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823F9014;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823F901C"))) PPC_WEAK_FUNC(sub_823F901C);
PPC_FUNC_IMPL(__imp__sub_823F901C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823F9020"))) PPC_WEAK_FUNC(sub_823F9020);
PPC_FUNC_IMPL(__imp__sub_823F9020) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x823F9028;
	__savegprlr_29(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x823f9088
	if (ctx.cr6.eq) goto loc_823F9088;
	// lwz r3,0(r5)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823f9060
	if (ctx.cr6.eq) goto loc_823F9060;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823F905C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x823f9068
	goto loc_823F9068;
loc_823F9060:
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// addi r3,r11,-29104
	ctx.r3.s64 = ctx.r11.s64 + -29104;
loc_823F9068:
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// addi r4,r11,-5544
	ctx.r4.s64 = ctx.r11.s64 + -5544;
	// bl 0x82fa2af0
	ctx.lr = 0x823F9074;
	sub_82FA2AF0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823f9088
	if (ctx.cr0.eq) goto loc_823F9088;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r5,r11,16
	ctx.r5.s64 = ctx.r11.s64 + 16;
	// b 0x823f908c
	goto loc_823F908C;
loc_823F9088:
	// li r5,0
	ctx.r5.s64 = 0;
loc_823F908C:
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x823f90b0
	if (ctx.cr6.eq) goto loc_823F90B0;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823F90AC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x823f912c
	goto loc_823F912C;
loc_823F90B0:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82255e08
	ctx.lr = 0x823F90B8;
	sub_82255E08(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823F90D4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,160
	ctx.r3.s64 = 160;
	// bl 0x82691500
	ctx.lr = 0x823F90DC;
	sub_82691500(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x823f9104
	if (ctx.cr0.eq) goto loc_823F9104;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// addi r11,r11,-29744
	ctx.r11.s64 = ctx.r11.s64 + -29744;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// li r5,144
	ctx.r5.s64 = 144;
	// bl 0x82fa77c0
	ctx.lr = 0x823F9100;
	sub_82FA77C0(ctx, base);
	// b 0x823f9108
	goto loc_823F9108;
loc_823F9104:
	// li r31,0
	ctx.r31.s64 = 0;
loc_823F9108:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r31,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r31.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823f912c
	if (ctx.cr6.eq) goto loc_823F912C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823F912C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_823F912C:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823F9134"))) PPC_WEAK_FUNC(sub_823F9134);
PPC_FUNC_IMPL(__imp__sub_823F9134) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823F9138"))) PPC_WEAK_FUNC(sub_823F9138);
PPC_FUNC_IMPL(__imp__sub_823F9138) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x823F9140;
	__savegprlr_29(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x823f91a0
	if (ctx.cr6.eq) goto loc_823F91A0;
	// lwz r3,0(r5)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823f9178
	if (ctx.cr6.eq) goto loc_823F9178;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823F9174;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x823f9180
	goto loc_823F9180;
loc_823F9178:
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// addi r3,r11,-29104
	ctx.r3.s64 = ctx.r11.s64 + -29104;
loc_823F9180:
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// addi r4,r11,-5472
	ctx.r4.s64 = ctx.r11.s64 + -5472;
	// bl 0x82fa2af0
	ctx.lr = 0x823F918C;
	sub_82FA2AF0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823f91a0
	if (ctx.cr0.eq) goto loc_823F91A0;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r11,16
	ctx.r4.s64 = ctx.r11.s64 + 16;
	// b 0x823f91a4
	goto loc_823F91A4;
loc_823F91A0:
	// li r4,0
	ctx.r4.s64 = 0;
loc_823F91A4:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// li r5,144
	ctx.r5.s64 = 144;
	// bl 0x82fa77c0
	ctx.lr = 0x823F91B0;
	sub_82FA77C0(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823F91CC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823F91D4"))) PPC_WEAK_FUNC(sub_823F91D4);
PPC_FUNC_IMPL(__imp__sub_823F91D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823F91D8"))) PPC_WEAK_FUNC(sub_823F91D8);
PPC_FUNC_IMPL(__imp__sub_823F91D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x823F91E0;
	__savegprlr_29(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x823f9240
	if (ctx.cr6.eq) goto loc_823F9240;
	// lwz r3,0(r5)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823f9218
	if (ctx.cr6.eq) goto loc_823F9218;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823F9214;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x823f9220
	goto loc_823F9220;
loc_823F9218:
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// addi r3,r11,-29104
	ctx.r3.s64 = ctx.r11.s64 + -29104;
loc_823F9220:
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// addi r4,r11,-5472
	ctx.r4.s64 = ctx.r11.s64 + -5472;
	// bl 0x82fa2af0
	ctx.lr = 0x823F922C;
	sub_82FA2AF0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823f9240
	if (ctx.cr0.eq) goto loc_823F9240;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r5,r11,16
	ctx.r5.s64 = ctx.r11.s64 + 16;
	// b 0x823f9244
	goto loc_823F9244;
loc_823F9240:
	// li r5,0
	ctx.r5.s64 = 0;
loc_823F9244:
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x823f9268
	if (ctx.cr6.eq) goto loc_823F9268;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823F9264;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x823f92e4
	goto loc_823F92E4;
loc_823F9268:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82255e08
	ctx.lr = 0x823F9270;
	sub_82255E08(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823F928C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,160
	ctx.r3.s64 = 160;
	// bl 0x82691500
	ctx.lr = 0x823F9294;
	sub_82691500(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x823f92bc
	if (ctx.cr0.eq) goto loc_823F92BC;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// addi r11,r11,-29732
	ctx.r11.s64 = ctx.r11.s64 + -29732;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// li r5,144
	ctx.r5.s64 = 144;
	// bl 0x82fa77c0
	ctx.lr = 0x823F92B8;
	sub_82FA77C0(ctx, base);
	// b 0x823f92c0
	goto loc_823F92C0;
loc_823F92BC:
	// li r31,0
	ctx.r31.s64 = 0;
loc_823F92C0:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r31,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r31.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823f92e4
	if (ctx.cr6.eq) goto loc_823F92E4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823F92E4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_823F92E4:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823F92EC"))) PPC_WEAK_FUNC(sub_823F92EC);
PPC_FUNC_IMPL(__imp__sub_823F92EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823F92F0"))) PPC_WEAK_FUNC(sub_823F92F0);
PPC_FUNC_IMPL(__imp__sub_823F92F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x823F92F8;
	__savegprlr_29(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x823f9358
	if (ctx.cr6.eq) goto loc_823F9358;
	// lwz r3,0(r5)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823f9330
	if (ctx.cr6.eq) goto loc_823F9330;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823F932C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x823f9338
	goto loc_823F9338;
loc_823F9330:
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// addi r3,r11,-29104
	ctx.r3.s64 = ctx.r11.s64 + -29104;
loc_823F9338:
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// addi r4,r11,-5392
	ctx.r4.s64 = ctx.r11.s64 + -5392;
	// bl 0x82fa2af0
	ctx.lr = 0x823F9344;
	sub_82FA2AF0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823f9358
	if (ctx.cr0.eq) goto loc_823F9358;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r11,16
	ctx.r4.s64 = ctx.r11.s64 + 16;
	// b 0x823f935c
	goto loc_823F935C;
loc_823F9358:
	// li r4,0
	ctx.r4.s64 = 0;
loc_823F935C:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// li r5,144
	ctx.r5.s64 = 144;
	// bl 0x82fa77c0
	ctx.lr = 0x823F9368;
	sub_82FA77C0(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823F9384;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823F938C"))) PPC_WEAK_FUNC(sub_823F938C);
PPC_FUNC_IMPL(__imp__sub_823F938C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823F9390"))) PPC_WEAK_FUNC(sub_823F9390);
PPC_FUNC_IMPL(__imp__sub_823F9390) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x823F9398;
	__savegprlr_29(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x823f93f8
	if (ctx.cr6.eq) goto loc_823F93F8;
	// lwz r3,0(r5)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823f93d0
	if (ctx.cr6.eq) goto loc_823F93D0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823F93CC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x823f93d8
	goto loc_823F93D8;
loc_823F93D0:
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// addi r3,r11,-29104
	ctx.r3.s64 = ctx.r11.s64 + -29104;
loc_823F93D8:
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// addi r4,r11,-5392
	ctx.r4.s64 = ctx.r11.s64 + -5392;
	// bl 0x82fa2af0
	ctx.lr = 0x823F93E4;
	sub_82FA2AF0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823f93f8
	if (ctx.cr0.eq) goto loc_823F93F8;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r5,r11,16
	ctx.r5.s64 = ctx.r11.s64 + 16;
	// b 0x823f93fc
	goto loc_823F93FC;
loc_823F93F8:
	// li r5,0
	ctx.r5.s64 = 0;
loc_823F93FC:
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x823f9420
	if (ctx.cr6.eq) goto loc_823F9420;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823F941C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x823f949c
	goto loc_823F949C;
loc_823F9420:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82255e08
	ctx.lr = 0x823F9428;
	sub_82255E08(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823F9444;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,160
	ctx.r3.s64 = 160;
	// bl 0x82691500
	ctx.lr = 0x823F944C;
	sub_82691500(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x823f9474
	if (ctx.cr0.eq) goto loc_823F9474;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// addi r11,r11,-29720
	ctx.r11.s64 = ctx.r11.s64 + -29720;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// li r5,144
	ctx.r5.s64 = 144;
	// bl 0x82fa77c0
	ctx.lr = 0x823F9470;
	sub_82FA77C0(ctx, base);
	// b 0x823f9478
	goto loc_823F9478;
loc_823F9474:
	// li r31,0
	ctx.r31.s64 = 0;
loc_823F9478:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r31,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r31.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823f949c
	if (ctx.cr6.eq) goto loc_823F949C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823F949C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_823F949C:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823F94A4"))) PPC_WEAK_FUNC(sub_823F94A4);
PPC_FUNC_IMPL(__imp__sub_823F94A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823F94A8"))) PPC_WEAK_FUNC(sub_823F94A8);
PPC_FUNC_IMPL(__imp__sub_823F94A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x823F94B0;
	__savegprlr_29(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x823f9510
	if (ctx.cr6.eq) goto loc_823F9510;
	// lwz r3,0(r5)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823f94e8
	if (ctx.cr6.eq) goto loc_823F94E8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823F94E4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x823f94f0
	goto loc_823F94F0;
loc_823F94E8:
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// addi r3,r11,-29104
	ctx.r3.s64 = ctx.r11.s64 + -29104;
loc_823F94F0:
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// addi r4,r11,-5320
	ctx.r4.s64 = ctx.r11.s64 + -5320;
	// bl 0x82fa2af0
	ctx.lr = 0x823F94FC;
	sub_82FA2AF0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823f9510
	if (ctx.cr0.eq) goto loc_823F9510;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r11,4
	ctx.r4.s64 = ctx.r11.s64 + 4;
	// b 0x823f9514
	goto loc_823F9514;
loc_823F9510:
	// li r4,0
	ctx.r4.s64 = 0;
loc_823F9514:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// li r5,76
	ctx.r5.s64 = 76;
	// bl 0x82fa77c0
	ctx.lr = 0x823F9520;
	sub_82FA77C0(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823F953C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823F9544"))) PPC_WEAK_FUNC(sub_823F9544);
PPC_FUNC_IMPL(__imp__sub_823F9544) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823F9548"))) PPC_WEAK_FUNC(sub_823F9548);
PPC_FUNC_IMPL(__imp__sub_823F9548) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x823F9550;
	__savegprlr_29(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x823f95b0
	if (ctx.cr6.eq) goto loc_823F95B0;
	// lwz r3,0(r5)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823f9588
	if (ctx.cr6.eq) goto loc_823F9588;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823F9584;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x823f9590
	goto loc_823F9590;
loc_823F9588:
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// addi r3,r11,-29104
	ctx.r3.s64 = ctx.r11.s64 + -29104;
loc_823F9590:
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// addi r4,r11,-5320
	ctx.r4.s64 = ctx.r11.s64 + -5320;
	// bl 0x82fa2af0
	ctx.lr = 0x823F959C;
	sub_82FA2AF0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823f95b0
	if (ctx.cr0.eq) goto loc_823F95B0;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r5,r11,4
	ctx.r5.s64 = ctx.r11.s64 + 4;
	// b 0x823f95b4
	goto loc_823F95B4;
loc_823F95B0:
	// li r5,0
	ctx.r5.s64 = 0;
loc_823F95B4:
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x823f95d8
	if (ctx.cr6.eq) goto loc_823F95D8;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823F95D4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x823f9654
	goto loc_823F9654;
loc_823F95D8:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82255da0
	ctx.lr = 0x823F95E0;
	sub_82255DA0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823F95FC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,80
	ctx.r3.s64 = 80;
	// bl 0x82691500
	ctx.lr = 0x823F9604;
	sub_82691500(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x823f962c
	if (ctx.cr0.eq) goto loc_823F962C;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// addi r11,r11,-29708
	ctx.r11.s64 = ctx.r11.s64 + -29708;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// li r5,76
	ctx.r5.s64 = 76;
	// bl 0x82fa77c0
	ctx.lr = 0x823F9628;
	sub_82FA77C0(ctx, base);
	// b 0x823f9630
	goto loc_823F9630;
loc_823F962C:
	// li r31,0
	ctx.r31.s64 = 0;
loc_823F9630:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r31,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r31.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823f9654
	if (ctx.cr6.eq) goto loc_823F9654;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823F9654;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_823F9654:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823F965C"))) PPC_WEAK_FUNC(sub_823F965C);
PPC_FUNC_IMPL(__imp__sub_823F965C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823F9660"))) PPC_WEAK_FUNC(sub_823F9660);
PPC_FUNC_IMPL(__imp__sub_823F9660) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,608
	ctx.r4.s64 = 608;
	// bl 0x8224e2d0
	ctx.lr = 0x823F968C;
	sub_8224E2D0(ctx, base);
	// li r5,76
	ctx.r5.s64 = 76;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829201c8
	ctx.lr = 0x823F969C;
	sub_829201C8(ctx, base);
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

__attribute__((alias("__imp__sub_823F96B4"))) PPC_WEAK_FUNC(sub_823F96B4);
PPC_FUNC_IMPL(__imp__sub_823F96B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823F96B8"))) PPC_WEAK_FUNC(sub_823F96B8);
PPC_FUNC_IMPL(__imp__sub_823F96B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,76
	ctx.r5.s64 = 76;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x8224c838
	ctx.lr = 0x823F96E4;
	sub_8224C838(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x823f96fc
	if (ctx.cr6.eq) goto loc_823F96FC;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r5,76
	ctx.r5.s64 = 76;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82fa77c0
	ctx.lr = 0x823F96FC;
	sub_82FA77C0(ctx, base);
loc_823F96FC:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823F9710"))) PPC_WEAK_FUNC(sub_823F9710);
PPC_FUNC_IMPL(__imp__sub_823F9710) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x823F9718;
	__savegprlr_29(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x823f9778
	if (ctx.cr6.eq) goto loc_823F9778;
	// lwz r3,0(r5)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823f9750
	if (ctx.cr6.eq) goto loc_823F9750;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823F974C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x823f9758
	goto loc_823F9758;
loc_823F9750:
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// addi r3,r11,-29104
	ctx.r3.s64 = ctx.r11.s64 + -29104;
loc_823F9758:
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// addi r4,r11,-5248
	ctx.r4.s64 = ctx.r11.s64 + -5248;
	// bl 0x82fa2af0
	ctx.lr = 0x823F9764;
	sub_82FA2AF0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823f9778
	if (ctx.cr0.eq) goto loc_823F9778;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r11,16
	ctx.r4.s64 = ctx.r11.s64 + 16;
	// b 0x823f977c
	goto loc_823F977C;
loc_823F9778:
	// li r4,0
	ctx.r4.s64 = 0;
loc_823F977C:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// li r5,128
	ctx.r5.s64 = 128;
	// bl 0x82fa77c0
	ctx.lr = 0x823F9788;
	sub_82FA77C0(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823F97A4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823F97AC"))) PPC_WEAK_FUNC(sub_823F97AC);
PPC_FUNC_IMPL(__imp__sub_823F97AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823F97B0"))) PPC_WEAK_FUNC(sub_823F97B0);
PPC_FUNC_IMPL(__imp__sub_823F97B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x823F97B8;
	__savegprlr_29(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x823f9818
	if (ctx.cr6.eq) goto loc_823F9818;
	// lwz r3,0(r5)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823f97f0
	if (ctx.cr6.eq) goto loc_823F97F0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823F97EC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x823f97f8
	goto loc_823F97F8;
loc_823F97F0:
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// addi r3,r11,-29104
	ctx.r3.s64 = ctx.r11.s64 + -29104;
loc_823F97F8:
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// addi r4,r11,-5248
	ctx.r4.s64 = ctx.r11.s64 + -5248;
	// bl 0x82fa2af0
	ctx.lr = 0x823F9804;
	sub_82FA2AF0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823f9818
	if (ctx.cr0.eq) goto loc_823F9818;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r5,r11,16
	ctx.r5.s64 = ctx.r11.s64 + 16;
	// b 0x823f981c
	goto loc_823F981C;
loc_823F9818:
	// li r5,0
	ctx.r5.s64 = 0;
loc_823F981C:
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x823f9840
	if (ctx.cr6.eq) goto loc_823F9840;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823F983C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x823f98bc
	goto loc_823F98BC;
loc_823F9840:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82255ce8
	ctx.lr = 0x823F9848;
	sub_82255CE8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823F9864;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,144
	ctx.r3.s64 = 144;
	// bl 0x82691500
	ctx.lr = 0x823F986C;
	sub_82691500(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x823f9894
	if (ctx.cr0.eq) goto loc_823F9894;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// addi r11,r11,-29696
	ctx.r11.s64 = ctx.r11.s64 + -29696;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// li r5,128
	ctx.r5.s64 = 128;
	// bl 0x82fa77c0
	ctx.lr = 0x823F9890;
	sub_82FA77C0(ctx, base);
	// b 0x823f9898
	goto loc_823F9898;
loc_823F9894:
	// li r31,0
	ctx.r31.s64 = 0;
loc_823F9898:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r31,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r31.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823f98bc
	if (ctx.cr6.eq) goto loc_823F98BC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823F98BC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_823F98BC:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823F98C4"))) PPC_WEAK_FUNC(sub_823F98C4);
PPC_FUNC_IMPL(__imp__sub_823F98C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823F98C8"))) PPC_WEAK_FUNC(sub_823F98C8);
PPC_FUNC_IMPL(__imp__sub_823F98C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,128
	ctx.r5.s64 = 128;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x8224c838
	ctx.lr = 0x823F98F4;
	sub_8224C838(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x823f990c
	if (ctx.cr6.eq) goto loc_823F990C;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r5,128
	ctx.r5.s64 = 128;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82fa77c0
	ctx.lr = 0x823F990C;
	sub_82FA77C0(ctx, base);
loc_823F990C:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823F9920"))) PPC_WEAK_FUNC(sub_823F9920);
PPC_FUNC_IMPL(__imp__sub_823F9920) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x823F9928;
	__savegprlr_29(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x823f9988
	if (ctx.cr6.eq) goto loc_823F9988;
	// lwz r3,0(r5)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823f9960
	if (ctx.cr6.eq) goto loc_823F9960;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823F995C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x823f9968
	goto loc_823F9968;
loc_823F9960:
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// addi r3,r11,-29104
	ctx.r3.s64 = ctx.r11.s64 + -29104;
loc_823F9968:
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// addi r4,r11,-5176
	ctx.r4.s64 = ctx.r11.s64 + -5176;
	// bl 0x82fa2af0
	ctx.lr = 0x823F9974;
	sub_82FA2AF0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823f9988
	if (ctx.cr0.eq) goto loc_823F9988;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// b 0x823f998c
	goto loc_823F998C;
loc_823F9988:
	// li r11,0
	ctx.r11.s64 = 0;
loc_823F998C:
	// ld r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// lwz r8,0(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// std r10,0(r9)
	PPC_STORE_U64(ctx.r9.u32 + 0, ctx.r10.u64);
	// ld r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r11.u32 + 8);
	// std r10,8(r9)
	PPC_STORE_U64(ctx.r9.u32 + 8, ctx.r10.u64);
	// ld r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r11.u32 + 16);
	// std r10,16(r9)
	PPC_STORE_U64(ctx.r9.u32 + 16, ctx.r10.u64);
	// ld r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 24);
	// std r11,24(r9)
	PPC_STORE_U64(ctx.r9.u32 + 24, ctx.r11.u64);
	// lwz r11,16(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823F99CC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823F99D4"))) PPC_WEAK_FUNC(sub_823F99D4);
PPC_FUNC_IMPL(__imp__sub_823F99D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823F99D8"))) PPC_WEAK_FUNC(sub_823F99D8);
PPC_FUNC_IMPL(__imp__sub_823F99D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x823F99E0;
	__savegprlr_28(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x823f9a44
	if (ctx.cr6.eq) goto loc_823F9A44;
	// lwz r3,0(r5)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823f9a1c
	if (ctx.cr6.eq) goto loc_823F9A1C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823F9A18;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x823f9a24
	goto loc_823F9A24;
loc_823F9A1C:
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// addi r3,r11,-29104
	ctx.r3.s64 = ctx.r11.s64 + -29104;
loc_823F9A24:
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// addi r4,r11,-5176
	ctx.r4.s64 = ctx.r11.s64 + -5176;
	// bl 0x82fa2af0
	ctx.lr = 0x823F9A30;
	sub_82FA2AF0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823f9a44
	if (ctx.cr0.eq) goto loc_823F9A44;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r5,r11,16
	ctx.r5.s64 = ctx.r11.s64 + 16;
	// b 0x823f9a48
	goto loc_823F9A48;
loc_823F9A44:
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
loc_823F9A48:
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// beq cr6,0x823f9a6c
	if (ctx.cr6.eq) goto loc_823F9A6C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823F9A68;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x823f9afc
	goto loc_823F9AFC;
loc_823F9A6C:
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r9,-1
	ctx.r9.s64 = -1;
	// li r8,-1
	ctx.r8.s64 = -1;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stvx128 v77,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v77.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stw r28,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r28.u32);
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// stw r8,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r8.u32);
	// stw r28,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r28.u32);
	// lwz r11,20(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823F9AA4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,48
	ctx.r3.s64 = 48;
	// bl 0x82691500
	ctx.lr = 0x823F9AAC;
	sub_82691500(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x823f9ad4
	if (ctx.cr0.eq) goto loc_823F9AD4;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// addi r11,r11,-29684
	ctx.r11.s64 = ctx.r11.s64 + -29684;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// li r5,32
	ctx.r5.s64 = 32;
	// bl 0x82fa77c0
	ctx.lr = 0x823F9AD0;
	sub_82FA77C0(ctx, base);
	// b 0x823f9ad8
	goto loc_823F9AD8;
loc_823F9AD4:
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
loc_823F9AD8:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r31,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r31.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823f9afc
	if (ctx.cr6.eq) goto loc_823F9AFC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823F9AFC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_823F9AFC:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823F9B04"))) PPC_WEAK_FUNC(sub_823F9B04);
PPC_FUNC_IMPL(__imp__sub_823F9B04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823F9B08"))) PPC_WEAK_FUNC(sub_823F9B08);
PPC_FUNC_IMPL(__imp__sub_823F9B08) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,256
	ctx.r4.s64 = 256;
	// bl 0x8224e2d0
	ctx.lr = 0x823F9B34;
	sub_8224E2D0(ctx, base);
	// li r5,32
	ctx.r5.s64 = 32;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829201c8
	ctx.lr = 0x823F9B44;
	sub_829201C8(ctx, base);
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

__attribute__((alias("__imp__sub_823F9B5C"))) PPC_WEAK_FUNC(sub_823F9B5C);
PPC_FUNC_IMPL(__imp__sub_823F9B5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823F9B60"))) PPC_WEAK_FUNC(sub_823F9B60);
PPC_FUNC_IMPL(__imp__sub_823F9B60) {
	PPC_FUNC_PROLOGUE();
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
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,32
	ctx.r5.s64 = 32;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x8224c838
	ctx.lr = 0x823F9B8C;
	sub_8224C838(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x823f9ba4
	if (ctx.cr6.eq) goto loc_823F9BA4;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r5,32
	ctx.r5.s64 = 32;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82fa77c0
	ctx.lr = 0x823F9BA4;
	sub_82FA77C0(ctx, base);
loc_823F9BA4:
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

__attribute__((alias("__imp__sub_823F9BB8"))) PPC_WEAK_FUNC(sub_823F9BB8);
PPC_FUNC_IMPL(__imp__sub_823F9BB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x823F9BC0;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x823f9c20
	if (ctx.cr6.eq) goto loc_823F9C20;
	// lwz r3,0(r5)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823f9bf8
	if (ctx.cr6.eq) goto loc_823F9BF8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823F9BF4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x823f9c00
	goto loc_823F9C00;
loc_823F9BF8:
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// addi r3,r11,-29104
	ctx.r3.s64 = ctx.r11.s64 + -29104;
loc_823F9C00:
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// addi r4,r11,-5128
	ctx.r4.s64 = ctx.r11.s64 + -5128;
	// bl 0x82fa2af0
	ctx.lr = 0x823F9C0C;
	sub_82FA2AF0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823f9c20
	if (ctx.cr0.eq) goto loc_823F9C20;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// b 0x823f9c24
	goto loc_823F9C24;
loc_823F9C20:
	// li r11,0
	ctx.r11.s64 = 0;
loc_823F9C24:
	// lhz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// sth r11,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r11.u16);
	// lwz r11,16(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823F9C48;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823F9C50"))) PPC_WEAK_FUNC(sub_823F9C50);
PPC_FUNC_IMPL(__imp__sub_823F9C50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x823F9C58;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x823f9cbc
	if (ctx.cr6.eq) goto loc_823F9CBC;
	// lwz r3,0(r5)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823f9c94
	if (ctx.cr6.eq) goto loc_823F9C94;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823F9C90;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x823f9c9c
	goto loc_823F9C9C;
loc_823F9C94:
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// addi r3,r11,-29104
	ctx.r3.s64 = ctx.r11.s64 + -29104;
loc_823F9C9C:
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// addi r4,r11,-5128
	ctx.r4.s64 = ctx.r11.s64 + -5128;
	// bl 0x82fa2af0
	ctx.lr = 0x823F9CA8;
	sub_82FA2AF0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823f9cbc
	if (ctx.cr0.eq) goto loc_823F9CBC;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r5,r11,4
	ctx.r5.s64 = ctx.r11.s64 + 4;
	// b 0x823f9cc0
	goto loc_823F9CC0;
loc_823F9CBC:
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
loc_823F9CC0:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// beq cr6,0x823f9ce4
	if (ctx.cr6.eq) goto loc_823F9CE4;
	// bctrl 
	ctx.lr = 0x823F9CE0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x823f9d48
	goto loc_823F9D48;
loc_823F9CE4:
	// stb r28,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r28.u8);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stb r28,81(r1)
	PPC_STORE_U8(ctx.r1.u32 + 81, ctx.r28.u8);
	// bctrl 
	ctx.lr = 0x823F9CF4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x82691500
	ctx.lr = 0x823F9CFC;
	sub_82691500(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x823f9d20
	if (ctx.cr0.eq) goto loc_823F9D20;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r10,r10,-29672
	ctx.r10.s64 = ctx.r10.s64 + -29672;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// lhz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// sth r10,4(r3)
	PPC_STORE_U16(ctx.r3.u32 + 4, ctx.r10.u16);
	// b 0x823f9d24
	goto loc_823F9D24;
loc_823F9D20:
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_823F9D24:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823f9d48
	if (ctx.cr6.eq) goto loc_823F9D48;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823F9D48;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_823F9D48:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823F9D50"))) PPC_WEAK_FUNC(sub_823F9D50);
PPC_FUNC_IMPL(__imp__sub_823F9D50) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,16
	ctx.r4.s64 = 16;
	// bl 0x8224e2d0
	ctx.lr = 0x823F9D7C;
	sub_8224E2D0(ctx, base);
	// li r5,2
	ctx.r5.s64 = 2;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829201c8
	ctx.lr = 0x823F9D8C;
	sub_829201C8(ctx, base);
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

__attribute__((alias("__imp__sub_823F9DA4"))) PPC_WEAK_FUNC(sub_823F9DA4);
PPC_FUNC_IMPL(__imp__sub_823F9DA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823F9DA8"))) PPC_WEAK_FUNC(sub_823F9DA8);
PPC_FUNC_IMPL(__imp__sub_823F9DA8) {
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
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x8224c838
	ctx.lr = 0x823F9DD4;
	sub_8224C838(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x823f9de4
	if (ctx.cr6.eq) goto loc_823F9DE4;
	// lhz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// sth r11,0(r31)
	PPC_STORE_U16(ctx.r31.u32 + 0, ctx.r11.u16);
loc_823F9DE4:
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

__attribute__((alias("__imp__sub_823F9DF8"))) PPC_WEAK_FUNC(sub_823F9DF8);
PPC_FUNC_IMPL(__imp__sub_823F9DF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x823F9E00;
	__savegprlr_29(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x823f9e60
	if (ctx.cr6.eq) goto loc_823F9E60;
	// lwz r3,0(r5)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823f9e38
	if (ctx.cr6.eq) goto loc_823F9E38;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823F9E34;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x823f9e40
	goto loc_823F9E40;
loc_823F9E38:
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// addi r3,r11,-29104
	ctx.r3.s64 = ctx.r11.s64 + -29104;
loc_823F9E40:
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// addi r4,r11,-5080
	ctx.r4.s64 = ctx.r11.s64 + -5080;
	// bl 0x82fa2af0
	ctx.lr = 0x823F9E4C;
	sub_82FA2AF0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823f9e60
	if (ctx.cr0.eq) goto loc_823F9E60;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r11,4
	ctx.r4.s64 = ctx.r11.s64 + 4;
	// b 0x823f9e64
	goto loc_823F9E64;
loc_823F9E60:
	// li r4,0
	ctx.r4.s64 = 0;
loc_823F9E64:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// li r5,96
	ctx.r5.s64 = 96;
	// bl 0x82fa77c0
	ctx.lr = 0x823F9E70;
	sub_82FA77C0(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823F9E8C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823F9E94"))) PPC_WEAK_FUNC(sub_823F9E94);
PPC_FUNC_IMPL(__imp__sub_823F9E94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823F9E98"))) PPC_WEAK_FUNC(sub_823F9E98);
PPC_FUNC_IMPL(__imp__sub_823F9E98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x823F9EA0;
	__savegprlr_29(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x823f9f00
	if (ctx.cr6.eq) goto loc_823F9F00;
	// lwz r3,0(r5)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823f9ed8
	if (ctx.cr6.eq) goto loc_823F9ED8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823F9ED4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x823f9ee0
	goto loc_823F9EE0;
loc_823F9ED8:
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// addi r3,r11,-29104
	ctx.r3.s64 = ctx.r11.s64 + -29104;
loc_823F9EE0:
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// addi r4,r11,-5080
	ctx.r4.s64 = ctx.r11.s64 + -5080;
	// bl 0x82fa2af0
	ctx.lr = 0x823F9EEC;
	sub_82FA2AF0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823f9f00
	if (ctx.cr0.eq) goto loc_823F9F00;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r5,r11,4
	ctx.r5.s64 = ctx.r11.s64 + 4;
	// b 0x823f9f04
	goto loc_823F9F04;
loc_823F9F00:
	// li r5,0
	ctx.r5.s64 = 0;
loc_823F9F04:
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x823f9f28
	if (ctx.cr6.eq) goto loc_823F9F28;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823F9F24;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x823f9fa4
	goto loc_823F9FA4;
loc_823F9F28:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82255c60
	ctx.lr = 0x823F9F30;
	sub_82255C60(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823F9F4C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,100
	ctx.r3.s64 = 100;
	// bl 0x82691500
	ctx.lr = 0x823F9F54;
	sub_82691500(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x823f9f7c
	if (ctx.cr0.eq) goto loc_823F9F7C;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// addi r11,r11,-29660
	ctx.r11.s64 = ctx.r11.s64 + -29660;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// li r5,96
	ctx.r5.s64 = 96;
	// bl 0x82fa77c0
	ctx.lr = 0x823F9F78;
	sub_82FA77C0(ctx, base);
	// b 0x823f9f80
	goto loc_823F9F80;
loc_823F9F7C:
	// li r31,0
	ctx.r31.s64 = 0;
loc_823F9F80:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r31,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r31.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823f9fa4
	if (ctx.cr6.eq) goto loc_823F9FA4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823F9FA4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_823F9FA4:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823F9FAC"))) PPC_WEAK_FUNC(sub_823F9FAC);
PPC_FUNC_IMPL(__imp__sub_823F9FAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823F9FB0"))) PPC_WEAK_FUNC(sub_823F9FB0);
PPC_FUNC_IMPL(__imp__sub_823F9FB0) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,768
	ctx.r4.s64 = 768;
	// bl 0x8224e2d0
	ctx.lr = 0x823F9FDC;
	sub_8224E2D0(ctx, base);
	// li r5,96
	ctx.r5.s64 = 96;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829201c8
	ctx.lr = 0x823F9FEC;
	sub_829201C8(ctx, base);
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

__attribute__((alias("__imp__sub_823FA004"))) PPC_WEAK_FUNC(sub_823FA004);
PPC_FUNC_IMPL(__imp__sub_823FA004) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823FA008"))) PPC_WEAK_FUNC(sub_823FA008);
PPC_FUNC_IMPL(__imp__sub_823FA008) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,96
	ctx.r5.s64 = 96;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x8224c838
	ctx.lr = 0x823FA034;
	sub_8224C838(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x823fa04c
	if (ctx.cr6.eq) goto loc_823FA04C;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r5,96
	ctx.r5.s64 = 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82fa77c0
	ctx.lr = 0x823FA04C;
	sub_82FA77C0(ctx, base);
loc_823FA04C:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823FA060"))) PPC_WEAK_FUNC(sub_823FA060);
PPC_FUNC_IMPL(__imp__sub_823FA060) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x823FA068;
	__savegprlr_29(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x823fa0c8
	if (ctx.cr6.eq) goto loc_823FA0C8;
	// lwz r3,0(r5)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823fa0a0
	if (ctx.cr6.eq) goto loc_823FA0A0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823FA09C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x823fa0a8
	goto loc_823FA0A8;
loc_823FA0A0:
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// addi r3,r11,-29104
	ctx.r3.s64 = ctx.r11.s64 + -29104;
loc_823FA0A8:
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// addi r4,r11,-5016
	ctx.r4.s64 = ctx.r11.s64 + -5016;
	// bl 0x82fa2af0
	ctx.lr = 0x823FA0B4;
	sub_82FA2AF0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823fa0c8
	if (ctx.cr0.eq) goto loc_823FA0C8;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r9,r11,16
	ctx.r9.s64 = ctx.r11.s64 + 16;
	// b 0x823fa0cc
	goto loc_823FA0CC;
loc_823FA0C8:
	// li r9,0
	ctx.r9.s64 = 0;
loc_823FA0CC:
	// li r11,8
	ctx.r11.s64 = 8;
	// addi r10,r1,72
	ctx.r10.s64 = ctx.r1.s64 + 72;
	// addi r9,r9,-8
	ctx.r9.s64 = ctx.r9.s64 + -8;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_823FA0DC:
	// ldu r11,8(r9)
	ea = 8 + ctx.r9.u32;
	ctx.r11.u64 = PPC_LOAD_U64(ea);
	ctx.r9.u32 = ea;
	// stdu r11,8(r10)
	ea = 8 + ctx.r10.u32;
	PPC_STORE_U64(ea, ctx.r11.u64);
	ctx.r10.u32 = ea;
	// bdnz 0x823fa0dc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823FA0DC;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823FA104;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823FA10C"))) PPC_WEAK_FUNC(sub_823FA10C);
PPC_FUNC_IMPL(__imp__sub_823FA10C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823FA110"))) PPC_WEAK_FUNC(sub_823FA110);
PPC_FUNC_IMPL(__imp__sub_823FA110) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x823FA118;
	__savegprlr_28(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x823fa17c
	if (ctx.cr6.eq) goto loc_823FA17C;
	// lwz r3,0(r5)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823fa154
	if (ctx.cr6.eq) goto loc_823FA154;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823FA150;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x823fa15c
	goto loc_823FA15C;
loc_823FA154:
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// addi r3,r11,-29104
	ctx.r3.s64 = ctx.r11.s64 + -29104;
loc_823FA15C:
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// addi r4,r11,-5016
	ctx.r4.s64 = ctx.r11.s64 + -5016;
	// bl 0x82fa2af0
	ctx.lr = 0x823FA168;
	sub_82FA2AF0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823fa17c
	if (ctx.cr0.eq) goto loc_823FA17C;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r5,r11,16
	ctx.r5.s64 = ctx.r11.s64 + 16;
	// b 0x823fa180
	goto loc_823FA180;
loc_823FA17C:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
loc_823FA180:
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// beq cr6,0x823fa1a4
	if (ctx.cr6.eq) goto loc_823FA1A4;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823FA1A0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x823fa250
	goto loc_823FA250;
loc_823FA1A4:
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// addi r8,r1,112
	ctx.r8.s64 = ctx.r1.s64 + 112;
	// lis r7,-32254
	ctx.r7.s64 = -2113798144;
	// li r6,3
	ctx.r6.s64 = 3;
	// stvx128 v77,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v77.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lwz r11,20(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// stvx128 v77,r0,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v77.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stvx128 v77,r0,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v77.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stb r30,132(r1)
	PPC_STORE_U8(ctx.r1.u32 + 132, ctx.r30.u8);
	// lfs f0,-2340(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -2340);
	ctx.f0.f64 = double(temp.f32);
	// stb r30,133(r1)
	PPC_STORE_U8(ctx.r1.u32 + 133, ctx.r30.u8);
	// stfs f0,128(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stb r30,134(r1)
	PPC_STORE_U8(ctx.r1.u32 + 134, ctx.r30.u8);
	// stw r30,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r6,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r6.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823FA1F8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,80
	ctx.r3.s64 = 80;
	// bl 0x82691500
	ctx.lr = 0x823FA200;
	sub_82691500(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x823fa228
	if (ctx.cr0.eq) goto loc_823FA228;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// addi r11,r11,-29648
	ctx.r11.s64 = ctx.r11.s64 + -29648;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// li r5,64
	ctx.r5.s64 = 64;
	// bl 0x82fa77c0
	ctx.lr = 0x823FA224;
	sub_82FA77C0(ctx, base);
	// b 0x823fa22c
	goto loc_823FA22C;
loc_823FA228:
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
loc_823FA22C:
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// stw r31,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r31.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823fa250
	if (ctx.cr6.eq) goto loc_823FA250;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823FA250;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_823FA250:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823FA258"))) PPC_WEAK_FUNC(sub_823FA258);
PPC_FUNC_IMPL(__imp__sub_823FA258) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,512
	ctx.r4.s64 = 512;
	// bl 0x8224e2d0
	ctx.lr = 0x823FA284;
	sub_8224E2D0(ctx, base);
	// li r5,64
	ctx.r5.s64 = 64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829201c8
	ctx.lr = 0x823FA294;
	sub_829201C8(ctx, base);
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

__attribute__((alias("__imp__sub_823FA2AC"))) PPC_WEAK_FUNC(sub_823FA2AC);
PPC_FUNC_IMPL(__imp__sub_823FA2AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823FA2B0"))) PPC_WEAK_FUNC(sub_823FA2B0);
PPC_FUNC_IMPL(__imp__sub_823FA2B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,64
	ctx.r5.s64 = 64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x8224c838
	ctx.lr = 0x823FA2DC;
	sub_8224C838(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x823fa2f4
	if (ctx.cr6.eq) goto loc_823FA2F4;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r5,64
	ctx.r5.s64 = 64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82fa77c0
	ctx.lr = 0x823FA2F4;
	sub_82FA77C0(ctx, base);
loc_823FA2F4:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823FA308"))) PPC_WEAK_FUNC(sub_823FA308);
PPC_FUNC_IMPL(__imp__sub_823FA308) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x823FA310;
	__savegprlr_29(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x823fa370
	if (ctx.cr6.eq) goto loc_823FA370;
	// lwz r3,0(r5)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823fa348
	if (ctx.cr6.eq) goto loc_823FA348;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823FA344;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x823fa350
	goto loc_823FA350;
loc_823FA348:
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// addi r3,r11,-29104
	ctx.r3.s64 = ctx.r11.s64 + -29104;
loc_823FA350:
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// addi r4,r11,-4968
	ctx.r4.s64 = ctx.r11.s64 + -4968;
	// bl 0x82fa2af0
	ctx.lr = 0x823FA35C;
	sub_82FA2AF0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823fa370
	if (ctx.cr0.eq) goto loc_823FA370;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r11,4
	ctx.r4.s64 = ctx.r11.s64 + 4;
	// b 0x823fa374
	goto loc_823FA374;
loc_823FA370:
	// li r4,0
	ctx.r4.s64 = 0;
loc_823FA374:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// li r5,72
	ctx.r5.s64 = 72;
	// bl 0x82fa77c0
	ctx.lr = 0x823FA380;
	sub_82FA77C0(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823FA39C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823FA3A4"))) PPC_WEAK_FUNC(sub_823FA3A4);
PPC_FUNC_IMPL(__imp__sub_823FA3A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823FA3A8"))) PPC_WEAK_FUNC(sub_823FA3A8);
PPC_FUNC_IMPL(__imp__sub_823FA3A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x823FA3B0;
	__savegprlr_28(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x823fa414
	if (ctx.cr6.eq) goto loc_823FA414;
	// lwz r3,0(r5)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823fa3ec
	if (ctx.cr6.eq) goto loc_823FA3EC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823FA3E8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x823fa3f4
	goto loc_823FA3F4;
loc_823FA3EC:
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// addi r3,r11,-29104
	ctx.r3.s64 = ctx.r11.s64 + -29104;
loc_823FA3F4:
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// addi r4,r11,-4968
	ctx.r4.s64 = ctx.r11.s64 + -4968;
	// bl 0x82fa2af0
	ctx.lr = 0x823FA400;
	sub_82FA2AF0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823fa414
	if (ctx.cr0.eq) goto loc_823FA414;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r5,r11,4
	ctx.r5.s64 = ctx.r11.s64 + 4;
	// b 0x823fa418
	goto loc_823FA418;
loc_823FA414:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
loc_823FA418:
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x823fa43c
	if (ctx.cr6.eq) goto loc_823FA43C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823FA438;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x823fa4f0
	goto loc_823FA4F0;
loc_823FA43C:
	// li r10,7
	ctx.r10.s64 = 7;
	// li r11,-1
	ctx.r11.s64 = -1;
	// li r8,-1
	ctx.r8.s64 = -1;
	// addi r9,r1,88
	ctx.r9.s64 = ctx.r1.s64 + 88;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r30.u32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_823FA45C:
	// stwu r11,4(r9)
	ea = 4 + ctx.r9.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r9.u32 = ea;
	// bdnz 0x823fa45c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823FA45C;
	// li r10,7
	ctx.r10.s64 = 7;
	// addi r9,r1,120
	ctx.r9.s64 = ctx.r1.s64 + 120;
	// stw r30,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r30.u32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_823FA474:
	// stwu r11,4(r9)
	ea = 4 + ctx.r9.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r9.u32 = ea;
	// bdnz 0x823fa474
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823FA474;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823FA498;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,76
	ctx.r3.s64 = 76;
	// bl 0x82691500
	ctx.lr = 0x823FA4A0;
	sub_82691500(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x823fa4c8
	if (ctx.cr0.eq) goto loc_823FA4C8;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// addi r11,r11,-29636
	ctx.r11.s64 = ctx.r11.s64 + -29636;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// li r5,72
	ctx.r5.s64 = 72;
	// bl 0x82fa77c0
	ctx.lr = 0x823FA4C4;
	sub_82FA77C0(ctx, base);
	// b 0x823fa4cc
	goto loc_823FA4CC;
loc_823FA4C8:
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
loc_823FA4CC:
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// stw r31,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r31.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823fa4f0
	if (ctx.cr6.eq) goto loc_823FA4F0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823FA4F0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_823FA4F0:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823FA4F8"))) PPC_WEAK_FUNC(sub_823FA4F8);
PPC_FUNC_IMPL(__imp__sub_823FA4F8) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,576
	ctx.r4.s64 = 576;
	// bl 0x8224e2d0
	ctx.lr = 0x823FA524;
	sub_8224E2D0(ctx, base);
	// li r5,72
	ctx.r5.s64 = 72;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829201c8
	ctx.lr = 0x823FA534;
	sub_829201C8(ctx, base);
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

__attribute__((alias("__imp__sub_823FA54C"))) PPC_WEAK_FUNC(sub_823FA54C);
PPC_FUNC_IMPL(__imp__sub_823FA54C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823FA550"))) PPC_WEAK_FUNC(sub_823FA550);
PPC_FUNC_IMPL(__imp__sub_823FA550) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,72
	ctx.r5.s64 = 72;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x8224c838
	ctx.lr = 0x823FA57C;
	sub_8224C838(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x823fa594
	if (ctx.cr6.eq) goto loc_823FA594;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r5,72
	ctx.r5.s64 = 72;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82fa77c0
	ctx.lr = 0x823FA594;
	sub_82FA77C0(ctx, base);
loc_823FA594:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823FA5A8"))) PPC_WEAK_FUNC(sub_823FA5A8);
PPC_FUNC_IMPL(__imp__sub_823FA5A8) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,32
	ctx.r4.s64 = 32;
	// bl 0x8224e2d0
	ctx.lr = 0x823FA5D4;
	sub_8224E2D0(ctx, base);
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829201c8
	ctx.lr = 0x823FA5E4;
	sub_829201C8(ctx, base);
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

__attribute__((alias("__imp__sub_823FA5FC"))) PPC_WEAK_FUNC(sub_823FA5FC);
PPC_FUNC_IMPL(__imp__sub_823FA5FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823FA600"))) PPC_WEAK_FUNC(sub_823FA600);
PPC_FUNC_IMPL(__imp__sub_823FA600) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x823FA608;
	__savegprlr_29(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x823fa668
	if (ctx.cr6.eq) goto loc_823FA668;
	// lwz r3,0(r5)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823fa640
	if (ctx.cr6.eq) goto loc_823FA640;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823FA63C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x823fa648
	goto loc_823FA648;
loc_823FA640:
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// addi r3,r11,-29104
	ctx.r3.s64 = ctx.r11.s64 + -29104;
loc_823FA648:
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// addi r4,r11,-4900
	ctx.r4.s64 = ctx.r11.s64 + -4900;
	// bl 0x82fa2af0
	ctx.lr = 0x823FA654;
	sub_82FA2AF0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823fa668
	if (ctx.cr0.eq) goto loc_823FA668;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r9,r11,16
	ctx.r9.s64 = ctx.r11.s64 + 16;
	// b 0x823fa66c
	goto loc_823FA66C;
loc_823FA668:
	// li r9,0
	ctx.r9.s64 = 0;
loc_823FA66C:
	// li r11,6
	ctx.r11.s64 = 6;
	// addi r10,r1,72
	ctx.r10.s64 = ctx.r1.s64 + 72;
	// addi r9,r9,-8
	ctx.r9.s64 = ctx.r9.s64 + -8;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_823FA67C:
	// ldu r11,8(r9)
	ea = 8 + ctx.r9.u32;
	ctx.r11.u64 = PPC_LOAD_U64(ea);
	ctx.r9.u32 = ea;
	// stdu r11,8(r10)
	ea = 8 + ctx.r10.u32;
	PPC_STORE_U64(ea, ctx.r11.u64);
	ctx.r10.u32 = ea;
	// bdnz 0x823fa67c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_823FA67C;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823FA6A4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823FA6AC"))) PPC_WEAK_FUNC(sub_823FA6AC);
PPC_FUNC_IMPL(__imp__sub_823FA6AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823FA6B0"))) PPC_WEAK_FUNC(sub_823FA6B0);
PPC_FUNC_IMPL(__imp__sub_823FA6B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x823FA6B8;
	__savegprlr_28(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x823fa71c
	if (ctx.cr6.eq) goto loc_823FA71C;
	// lwz r3,0(r5)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823fa6f4
	if (ctx.cr6.eq) goto loc_823FA6F4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823FA6F0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x823fa6fc
	goto loc_823FA6FC;
loc_823FA6F4:
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// addi r3,r11,-29104
	ctx.r3.s64 = ctx.r11.s64 + -29104;
loc_823FA6FC:
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// addi r4,r11,-4900
	ctx.r4.s64 = ctx.r11.s64 + -4900;
	// bl 0x82fa2af0
	ctx.lr = 0x823FA708;
	sub_82FA2AF0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823fa71c
	if (ctx.cr0.eq) goto loc_823FA71C;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r5,r11,16
	ctx.r5.s64 = ctx.r11.s64 + 16;
	// b 0x823fa720
	goto loc_823FA720;
loc_823FA71C:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
loc_823FA720:
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// beq cr6,0x823fa744
	if (ctx.cr6.eq) goto loc_823FA744;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823FA740;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x823fa7e4
	goto loc_823FA7E4;
loc_823FA744:
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r11,-1
	ctx.r11.s64 = -1;
	// li r10,-1
	ctx.r10.s64 = -1;
	// li r7,1
	ctx.r7.s64 = 1;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stvx128 v77,r0,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v77.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r29,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r29.u32);
	// stb r29,100(r1)
	PPC_STORE_U8(ctx.r1.u32 + 100, ctx.r29.u8);
	// stb r7,101(r1)
	PPC_STORE_U8(ctx.r1.u32 + 101, ctx.r7.u8);
	// lwz r11,20(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823FA78C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,64
	ctx.r3.s64 = 64;
	// bl 0x82691500
	ctx.lr = 0x823FA794;
	sub_82691500(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x823fa7bc
	if (ctx.cr0.eq) goto loc_823FA7BC;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// addi r11,r11,-29624
	ctx.r11.s64 = ctx.r11.s64 + -29624;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// li r5,48
	ctx.r5.s64 = 48;
	// bl 0x82fa77c0
	ctx.lr = 0x823FA7B8;
	sub_82FA77C0(ctx, base);
	// b 0x823fa7c0
	goto loc_823FA7C0;
loc_823FA7BC:
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
loc_823FA7C0:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r31,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r31.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823fa7e4
	if (ctx.cr6.eq) goto loc_823FA7E4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823FA7E4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_823FA7E4:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823FA7EC"))) PPC_WEAK_FUNC(sub_823FA7EC);
PPC_FUNC_IMPL(__imp__sub_823FA7EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823FA7F0"))) PPC_WEAK_FUNC(sub_823FA7F0);
PPC_FUNC_IMPL(__imp__sub_823FA7F0) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,384
	ctx.r4.s64 = 384;
	// bl 0x8224e2d0
	ctx.lr = 0x823FA81C;
	sub_8224E2D0(ctx, base);
	// li r5,48
	ctx.r5.s64 = 48;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829201c8
	ctx.lr = 0x823FA82C;
	sub_829201C8(ctx, base);
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

__attribute__((alias("__imp__sub_823FA844"))) PPC_WEAK_FUNC(sub_823FA844);
PPC_FUNC_IMPL(__imp__sub_823FA844) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823FA848"))) PPC_WEAK_FUNC(sub_823FA848);
PPC_FUNC_IMPL(__imp__sub_823FA848) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,48
	ctx.r5.s64 = 48;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x8224c838
	ctx.lr = 0x823FA874;
	sub_8224C838(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x823fa88c
	if (ctx.cr6.eq) goto loc_823FA88C;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r5,48
	ctx.r5.s64 = 48;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82fa77c0
	ctx.lr = 0x823FA88C;
	sub_82FA77C0(ctx, base);
loc_823FA88C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823FA8A0"))) PPC_WEAK_FUNC(sub_823FA8A0);
PPC_FUNC_IMPL(__imp__sub_823FA8A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x823FA8A8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r3,16
	ctx.r3.s64 = 16;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// bl 0x82691500
	ctx.lr = 0x823FA8C8;
	sub_82691500(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x823fa8f0
	if (ctx.cr0.eq) goto loc_823FA8F0;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// stw r29,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r29.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r10,r10,-27204
	ctx.r10.s64 = ctx.r10.s64 + -27204;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
loc_823FA8F0:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823fa900
	if (ctx.cr6.eq) goto loc_823FA900;
	// bl 0x82241d18
	ctx.lr = 0x823FA900;
	sub_82241D18(ctx, base);
loc_823FA900:
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823FA914"))) PPC_WEAK_FUNC(sub_823FA914);
PPC_FUNC_IMPL(__imp__sub_823FA914) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823FA918"))) PPC_WEAK_FUNC(sub_823FA918);
PPC_FUNC_IMPL(__imp__sub_823FA918) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x823FA920;
	__savegprlr_29(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x823fa980
	if (ctx.cr6.eq) goto loc_823FA980;
	// lwz r3,0(r5)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823fa958
	if (ctx.cr6.eq) goto loc_823FA958;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823FA954;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x823fa960
	goto loc_823FA960;
loc_823FA958:
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// addi r3,r11,-29104
	ctx.r3.s64 = ctx.r11.s64 + -29104;
loc_823FA960:
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// addi r4,r11,-4840
	ctx.r4.s64 = ctx.r11.s64 + -4840;
	// bl 0x82fa2af0
	ctx.lr = 0x823FA96C;
	sub_82FA2AF0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823fa980
	if (ctx.cr0.eq) goto loc_823FA980;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r11,16
	ctx.r4.s64 = ctx.r11.s64 + 16;
	// b 0x823fa984
	goto loc_823FA984;
loc_823FA980:
	// li r4,0
	ctx.r4.s64 = 0;
loc_823FA984:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// li r5,144
	ctx.r5.s64 = 144;
	// bl 0x82fa77c0
	ctx.lr = 0x823FA990;
	sub_82FA77C0(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823FA9AC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823FA9B4"))) PPC_WEAK_FUNC(sub_823FA9B4);
PPC_FUNC_IMPL(__imp__sub_823FA9B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823FA9B8"))) PPC_WEAK_FUNC(sub_823FA9B8);
PPC_FUNC_IMPL(__imp__sub_823FA9B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x823FA9C0;
	__savegprlr_29(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x823faa20
	if (ctx.cr6.eq) goto loc_823FAA20;
	// lwz r3,0(r5)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823fa9f8
	if (ctx.cr6.eq) goto loc_823FA9F8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823FA9F4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x823faa00
	goto loc_823FAA00;
loc_823FA9F8:
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// addi r3,r11,-29104
	ctx.r3.s64 = ctx.r11.s64 + -29104;
loc_823FAA00:
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// addi r4,r11,-4840
	ctx.r4.s64 = ctx.r11.s64 + -4840;
	// bl 0x82fa2af0
	ctx.lr = 0x823FAA0C;
	sub_82FA2AF0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823faa20
	if (ctx.cr0.eq) goto loc_823FAA20;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r5,r11,16
	ctx.r5.s64 = ctx.r11.s64 + 16;
	// b 0x823faa24
	goto loc_823FAA24;
loc_823FAA20:
	// li r5,0
	ctx.r5.s64 = 0;
loc_823FAA24:
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x823faa48
	if (ctx.cr6.eq) goto loc_823FAA48;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823FAA44;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x823faadc
	goto loc_823FAADC;
loc_823FAA48:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82255da0
	ctx.lr = 0x823FAA50;
	sub_82255DA0(ctx, base);
	// addi r11,r1,160
	ctx.r11.s64 = ctx.r1.s64 + 160;
	// addi r10,r1,176
	ctx.r10.s64 = ctx.r1.s64 + 176;
	// addi r9,r1,192
	ctx.r9.s64 = ctx.r1.s64 + 192;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// stvx128 v77,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v77.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stvx128 v77,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v77.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v77,r0,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v77.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823FAA84;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,160
	ctx.r3.s64 = 160;
	// bl 0x82691500
	ctx.lr = 0x823FAA8C;
	sub_82691500(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x823faab4
	if (ctx.cr0.eq) goto loc_823FAAB4;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// addi r11,r11,-29612
	ctx.r11.s64 = ctx.r11.s64 + -29612;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// li r5,144
	ctx.r5.s64 = 144;
	// bl 0x82fa77c0
	ctx.lr = 0x823FAAB0;
	sub_82FA77C0(ctx, base);
	// b 0x823faab8
	goto loc_823FAAB8;
loc_823FAAB4:
	// li r31,0
	ctx.r31.s64 = 0;
loc_823FAAB8:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r31,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r31.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823faadc
	if (ctx.cr6.eq) goto loc_823FAADC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823FAADC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_823FAADC:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823FAAE4"))) PPC_WEAK_FUNC(sub_823FAAE4);
PPC_FUNC_IMPL(__imp__sub_823FAAE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823FAAE8"))) PPC_WEAK_FUNC(sub_823FAAE8);
PPC_FUNC_IMPL(__imp__sub_823FAAE8) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1152
	ctx.r4.s64 = 1152;
	// bl 0x8224e2d0
	ctx.lr = 0x823FAB14;
	sub_8224E2D0(ctx, base);
	// li r5,144
	ctx.r5.s64 = 144;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829201c8
	ctx.lr = 0x823FAB24;
	sub_829201C8(ctx, base);
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

__attribute__((alias("__imp__sub_823FAB3C"))) PPC_WEAK_FUNC(sub_823FAB3C);
PPC_FUNC_IMPL(__imp__sub_823FAB3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823FAB40"))) PPC_WEAK_FUNC(sub_823FAB40);
PPC_FUNC_IMPL(__imp__sub_823FAB40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,144
	ctx.r5.s64 = 144;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x8224c838
	ctx.lr = 0x823FAB6C;
	sub_8224C838(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x823fab84
	if (ctx.cr6.eq) goto loc_823FAB84;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r5,144
	ctx.r5.s64 = 144;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82fa77c0
	ctx.lr = 0x823FAB84;
	sub_82FA77C0(ctx, base);
loc_823FAB84:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_823FAB98"))) PPC_WEAK_FUNC(sub_823FAB98);
PPC_FUNC_IMPL(__imp__sub_823FAB98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x823FABA0;
	__savegprlr_29(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x823fac00
	if (ctx.cr6.eq) goto loc_823FAC00;
	// lwz r3,0(r5)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823fabd8
	if (ctx.cr6.eq) goto loc_823FABD8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823FABD4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x823fabe0
	goto loc_823FABE0;
loc_823FABD8:
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// addi r3,r11,-29104
	ctx.r3.s64 = ctx.r11.s64 + -29104;
loc_823FABE0:
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// addi r4,r11,-4768
	ctx.r4.s64 = ctx.r11.s64 + -4768;
	// bl 0x82fa2af0
	ctx.lr = 0x823FABEC;
	sub_82FA2AF0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823fac00
	if (ctx.cr0.eq) goto loc_823FAC00;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r11,16
	ctx.r4.s64 = ctx.r11.s64 + 16;
	// b 0x823fac04
	goto loc_823FAC04;
loc_823FAC00:
	// li r4,0
	ctx.r4.s64 = 0;
loc_823FAC04:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// li r5,128
	ctx.r5.s64 = 128;
	// bl 0x82fa77c0
	ctx.lr = 0x823FAC10;
	sub_82FA77C0(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823FAC2C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823FAC34"))) PPC_WEAK_FUNC(sub_823FAC34);
PPC_FUNC_IMPL(__imp__sub_823FAC34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823FAC38"))) PPC_WEAK_FUNC(sub_823FAC38);
PPC_FUNC_IMPL(__imp__sub_823FAC38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x823FAC40;
	__savegprlr_29(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x823faca0
	if (ctx.cr6.eq) goto loc_823FACA0;
	// lwz r3,0(r5)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823fac78
	if (ctx.cr6.eq) goto loc_823FAC78;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823FAC74;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x823fac80
	goto loc_823FAC80;
loc_823FAC78:
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// addi r3,r11,-29104
	ctx.r3.s64 = ctx.r11.s64 + -29104;
loc_823FAC80:
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// addi r4,r11,-4768
	ctx.r4.s64 = ctx.r11.s64 + -4768;
	// bl 0x82fa2af0
	ctx.lr = 0x823FAC8C;
	sub_82FA2AF0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823faca0
	if (ctx.cr0.eq) goto loc_823FACA0;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r5,r11,16
	ctx.r5.s64 = ctx.r11.s64 + 16;
	// b 0x823faca4
	goto loc_823FACA4;
loc_823FACA0:
	// li r5,0
	ctx.r5.s64 = 0;
loc_823FACA4:
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x823facc8
	if (ctx.cr6.eq) goto loc_823FACC8;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823FACC4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x823fad5c
	goto loc_823FAD5C;
loc_823FACC8:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82255da0
	ctx.lr = 0x823FACD0;
	sub_82255DA0(ctx, base);
	// addi r11,r1,160
	ctx.r11.s64 = ctx.r1.s64 + 160;
	// addi r10,r1,176
	ctx.r10.s64 = ctx.r1.s64 + 176;
	// li r9,-1
	ctx.r9.s64 = -1;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// stvx128 v77,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v77.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stvx128 v77,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v77.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stw r9,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r9.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823FAD04;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,144
	ctx.r3.s64 = 144;
	// bl 0x82691500
	ctx.lr = 0x823FAD0C;
	sub_82691500(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x823fad34
	if (ctx.cr0.eq) goto loc_823FAD34;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// addi r11,r11,-29600
	ctx.r11.s64 = ctx.r11.s64 + -29600;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// li r5,128
	ctx.r5.s64 = 128;
	// bl 0x82fa77c0
	ctx.lr = 0x823FAD30;
	sub_82FA77C0(ctx, base);
	// b 0x823fad38
	goto loc_823FAD38;
loc_823FAD34:
	// li r31,0
	ctx.r31.s64 = 0;
loc_823FAD38:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r31,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r31.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x823fad5c
	if (ctx.cr6.eq) goto loc_823FAD5C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823FAD5C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_823FAD5C:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823FAD64"))) PPC_WEAK_FUNC(sub_823FAD64);
PPC_FUNC_IMPL(__imp__sub_823FAD64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823FAD68"))) PPC_WEAK_FUNC(sub_823FAD68);
PPC_FUNC_IMPL(__imp__sub_823FAD68) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1024
	ctx.r4.s64 = 1024;
	// bl 0x8224e2d0
	ctx.lr = 0x823FAD94;
	sub_8224E2D0(ctx, base);
	// li r5,128
	ctx.r5.s64 = 128;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829201c8
	ctx.lr = 0x823FADA4;
	sub_829201C8(ctx, base);
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

__attribute__((alias("__imp__sub_823FADBC"))) PPC_WEAK_FUNC(sub_823FADBC);
PPC_FUNC_IMPL(__imp__sub_823FADBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823FADC0"))) PPC_WEAK_FUNC(sub_823FADC0);
PPC_FUNC_IMPL(__imp__sub_823FADC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7670
	ctx.lr = 0x823FADC8;
	__savegprlr_26(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823fae0c
	if (!ctx.cr6.eq) goto loc_823FAE0C;
	// lwz r6,4(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
loc_823FADF4:
	// li r5,1
	ctx.r5.s64 = 1;
loc_823FADF8:
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
loc_823FAE04:
	// bl 0x823fcca0
	ctx.lr = 0x823FAE08;
	sub_823FCCA0(ctx, base);
	// b 0x823fb01c
	goto loc_823FB01C;
loc_823FAE0C:
	// lwz r27,4(r26)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x823fae5c
	if (!ctx.cr6.eq) goto loc_823FAE5C;
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x823fae48
	if (ctx.cr6.gt) goto loc_823FAE48;
	// blt cr6,0x823fae40
	if (ctx.cr6.lt) goto loc_823FAE40;
	// lwz r11,20(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x823fae48
	if (ctx.cr6.lt) goto loc_823FAE48;
loc_823FAE40:
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x823fae4c
	goto loc_823FAE4C;
loc_823FAE48:
	// li r11,1
	ctx.r11.s64 = 1;
loc_823FAE4C:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823fb000
	if (ctx.cr0.eq) goto loc_823FB000;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// b 0x823fadf4
	goto loc_823FADF4;
loc_823FAE5C:
	// cmplw cr6,r31,r27
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r27.u32, ctx.xer);
	// bne cr6,0x823faea8
	if (!ctx.cr6.eq) goto loc_823FAEA8;
	// lwz r6,8(r27)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// lwz r10,16(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 16);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x823fae94
	if (ctx.cr6.gt) goto loc_823FAE94;
	// blt cr6,0x823fae8c
	if (ctx.cr6.lt) goto loc_823FAE8C;
	// lwz r11,20(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 20);
	// lwz r10,20(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x823fae94
	if (ctx.cr6.lt) goto loc_823FAE94;
loc_823FAE8C:
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x823fae98
	goto loc_823FAE98;
loc_823FAE94:
	// li r11,1
	ctx.r11.s64 = 1;
loc_823FAE98:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823fb000
	if (ctx.cr0.eq) goto loc_823FB000;
	// li r5,0
	ctx.r5.s64 = 0;
	// b 0x823fadf8
	goto loc_823FADF8;
loc_823FAEA8:
	// lwz r30,16(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// bgt cr6,0x823faed4
	if (ctx.cr6.gt) goto loc_823FAED4;
	// blt cr6,0x823faecc
	if (ctx.cr6.lt) goto loc_823FAECC;
	// lwz r11,20(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x823faed4
	if (ctx.cr6.lt) goto loc_823FAED4;
loc_823FAECC:
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x823faed8
	goto loc_823FAED8;
loc_823FAED4:
	// li r11,1
	ctx.r11.s64 = 1;
loc_823FAED8:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823faf58
	if (ctx.cr0.eq) goto loc_823FAF58;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8254eaf8
	ctx.lr = 0x823FAEEC;
	sub_8254EAF8(ctx, base);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x823faf18
	if (ctx.cr6.gt) goto loc_823FAF18;
	// blt cr6,0x823faf10
	if (ctx.cr6.lt) goto loc_823FAF10;
	// lwz r11,20(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// lwz r10,20(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x823faf18
	if (ctx.cr6.lt) goto loc_823FAF18;
loc_823FAF10:
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x823faf1c
	goto loc_823FAF1C;
loc_823FAF18:
	// li r11,1
	ctx.r11.s64 = 1;
loc_823FAF1C:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823faf58
	if (ctx.cr0.eq) goto loc_823FAF58;
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r11,8(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// lbz r11,73(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 73);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x823faf4c
	if (ctx.cr0.eq) goto loc_823FAF4C;
loc_823FAF44:
	// li r5,0
	ctx.r5.s64 = 0;
	// b 0x823fae04
	goto loc_823FAE04;
loc_823FAF4C:
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
loc_823FAF50:
	// li r5,1
	ctx.r5.s64 = 1;
	// b 0x823fae04
	goto loc_823FAE04;
loc_823FAF58:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x823faf80
	if (ctx.cr6.gt) goto loc_823FAF80;
	// blt cr6,0x823faf78
	if (ctx.cr6.lt) goto loc_823FAF78;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r10,20(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x823faf80
	if (ctx.cr6.lt) goto loc_823FAF80;
loc_823FAF78:
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x823faf84
	goto loc_823FAF84;
loc_823FAF80:
	// li r11,1
	ctx.r11.s64 = 1;
loc_823FAF84:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823fb000
	if (ctx.cr0.eq) goto loc_823FB000;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82f95e18
	ctx.lr = 0x823FAF98;
	sub_82F95E18(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r11,r27
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r27.u32, ctx.xer);
	// beq cr6,0x823fafdc
	if (ctx.cr6.eq) goto loc_823FAFDC;
	// lwz r11,16(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 16);
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// bgt cr6,0x823fafd0
	if (ctx.cr6.gt) goto loc_823FAFD0;
	// blt cr6,0x823fafc8
	if (ctx.cr6.lt) goto loc_823FAFC8;
	// lwz r11,20(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// lwz r10,20(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 20);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x823fafd0
	if (ctx.cr6.lt) goto loc_823FAFD0;
loc_823FAFC8:
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x823fafd4
	goto loc_823FAFD4;
loc_823FAFD0:
	// li r11,1
	ctx.r11.s64 = 1;
loc_823FAFD4:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x823fb000
	if (ctx.cr0.eq) goto loc_823FB000;
loc_823FAFDC:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lbz r11,73(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 73);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x823faf50
	if (ctx.cr0.eq) goto loc_823FAF50;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// b 0x823faf44
	goto loc_823FAF44;
loc_823FB000:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x823fca30
	ctx.lr = 0x823FB010;
	sub_823FCA30(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
loc_823FB01C:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82fa76c0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823FB028"))) PPC_WEAK_FUNC(sub_823FB028);
PPC_FUNC_IMPL(__imp__sub_823FB028) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa766c
	ctx.lr = 0x823FB030;
	__savegprlr_25(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x823fb074
	if (!ctx.cr6.eq) goto loc_823FB074;
	// lwz r6,4(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
loc_823FB05C:
	// li r5,1
	ctx.r5.s64 = 1;
loc_823FB060:
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_823FB06C:
	// bl 0x823fcca0
	ctx.lr = 0x823FB070;
	sub_823FCCA0(ctx, base);
	// b 0x823fb190
	goto loc_823FB190;
loc_823FB074:
	// lwz r25,4(r28)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x823fb09c
	if (!ctx.cr6.eq) goto loc_823FB09C;
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// lwz r10,16(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x823fb174
	if (!ctx.cr6.lt) goto loc_823FB174;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// b 0x823fb05c
	goto loc_823FB05C;
loc_823FB09C:
	// cmplw cr6,r30,r25
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r25.u32, ctx.xer);
	// bne cr6,0x823fb0c0
	if (!ctx.cr6.eq) goto loc_823FB0C0;
	// lwz r6,8(r25)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r25.u32 + 8);
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// lwz r10,16(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 16);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x823fb174
	if (!ctx.cr6.lt) goto loc_823FB174;
	// li r5,0
	ctx.r5.s64 = 0;
	// b 0x823fb060
	goto loc_823FB060;
loc_823FB0C0:
	// lwz r27,16(r29)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// lwz r26,16(r30)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// cmpw cr6,r26,r27
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r27.s32, ctx.xer);
	// ble cr6,0x823fb124
	if (!ctx.cr6.gt) goto loc_823FB124;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8254eaf8
	ctx.lr = 0x823FB0DC;
	sub_8254EAF8(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmpw cr6,r11,r27
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r27.s32, ctx.xer);
	// bge cr6,0x823fb120
	if (!ctx.cr6.lt) goto loc_823FB120;
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,8(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// lbz r11,73(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 73);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x823fb114
	if (ctx.cr0.eq) goto loc_823FB114;
loc_823FB10C:
	// li r5,0
	ctx.r5.s64 = 0;
	// b 0x823fb06c
	goto loc_823FB06C;
loc_823FB114:
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
loc_823FB118:
	// li r5,1
	ctx.r5.s64 = 1;
	// b 0x823fb06c
	goto loc_823FB06C;
loc_823FB120:
	// cmpw cr6,r26,r27
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r27.s32, ctx.xer);
loc_823FB124:
	// bge cr6,0x823fb174
	if (!ctx.cr6.lt) goto loc_823FB174;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82f95e18
	ctx.lr = 0x823FB134;
	sub_82F95E18(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r11,r25
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r25.u32, ctx.xer);
	// beq cr6,0x823fb150
	if (ctx.cr6.eq) goto loc_823FB150;
	// lwz r11,16(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 16);
	// cmpw cr6,r27,r11
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x823fb174
	if (!ctx.cr6.lt) goto loc_823FB174;
loc_823FB150:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lbz r11,73(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 73);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x823fb118
	if (ctx.cr0.eq) goto loc_823FB118;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// b 0x823fb10c
	goto loc_823FB10C;
loc_823FB174:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x823fcb88
	ctx.lr = 0x823FB184;
	sub_823FCB88(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_823FB190:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82fa76bc
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823FB19C"))) PPC_WEAK_FUNC(sub_823FB19C);
PPC_FUNC_IMPL(__imp__sub_823FB19C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823FB1A0"))) PPC_WEAK_FUNC(sub_823FB1A0);
PPC_FUNC_IMPL(__imp__sub_823FB1A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x823FB1A8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// li r31,7
	ctx.r31.s64 = 7;
loc_823FB1BC:
	// lwz r3,8(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823FB1D8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// bne 0x823fb1bc
	if (!ctx.cr0.eq) goto loc_823FB1BC;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823FB1EC"))) PPC_WEAK_FUNC(sub_823FB1EC);
PPC_FUNC_IMPL(__imp__sub_823FB1EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823FB1F0"))) PPC_WEAK_FUNC(sub_823FB1F0);
PPC_FUNC_IMPL(__imp__sub_823FB1F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7674
	ctx.lr = 0x823FB1F8;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// li r30,7
	ctx.r30.s64 = 7;
loc_823FB210:
	// lwz r3,8(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823FB22C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x823fb23c
	if (ctx.cr6.eq) goto loc_823FB23C;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
loc_823FB23C:
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// bne 0x823fb210
	if (!ctx.cr0.eq) goto loc_823FB210;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82fa76c4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823FB250"))) PPC_WEAK_FUNC(sub_823FB250);
PPC_FUNC_IMPL(__imp__sub_823FB250) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x823FB258;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// li r31,3
	ctx.r31.s64 = 3;
loc_823FB26C:
	// lwz r3,8(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823FB288;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// bne 0x823fb26c
	if (!ctx.cr0.eq) goto loc_823FB26C;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823FB29C"))) PPC_WEAK_FUNC(sub_823FB29C);
PPC_FUNC_IMPL(__imp__sub_823FB29C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823FB2A0"))) PPC_WEAK_FUNC(sub_823FB2A0);
PPC_FUNC_IMPL(__imp__sub_823FB2A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x823FB2A8;
	__savegprlr_29(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,44(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823FB2D0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,52(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823FB2EC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,60(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823FB308;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,68(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823FB324;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,76(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823FB340;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,84(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r5,r1,81
	ctx.r5.s64 = ctx.r1.s64 + 81;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823FB35C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,92(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r5,r1,82
	ctx.r5.s64 = ctx.r1.s64 + 82;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823FB378;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,100(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823FB394;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,108(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823FB3B0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x823fb430
	if (ctx.cr6.eq) goto loc_823FB430;
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// addi r8,r1,128
	ctx.r8.s64 = ctx.r1.s64 + 128;
	// lvx128 v0,r0,r11
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// stvx128 v0,r10,r30
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32 + ctx.r30.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lvx128 v0,r0,r9
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// stvx128 v0,r11,r30
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r30.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lvx128 v0,r0,r8
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r8.u32) & ~0xF), VectorMaskL));
	// stvx128 v0,r11,r30
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r30.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lfs f0,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// stfsx f0,r11,r30
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + ctx.r30.u32, temp.u32);
	// lbz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// stbx r11,r10,r30
	PPC_STORE_U8(ctx.r10.u32 + ctx.r30.u32, ctx.r11.u8);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lbz r10,81(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// stbx r10,r11,r30
	PPC_STORE_U8(ctx.r11.u32 + ctx.r30.u32, ctx.r10.u8);
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lbz r10,82(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 82);
	// stbx r10,r11,r30
	PPC_STORE_U8(ctx.r11.u32 + ctx.r30.u32, ctx.r10.u8);
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stwx r10,r11,r30
	PPC_STORE_U32(ctx.r11.u32 + ctx.r30.u32, ctx.r10.u32);
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// lwz r10,92(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// stwx r10,r11,r30
	PPC_STORE_U32(ctx.r11.u32 + ctx.r30.u32, ctx.r10.u32);
loc_823FB430:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823FB438"))) PPC_WEAK_FUNC(sub_823FB438);
PPC_FUNC_IMPL(__imp__sub_823FB438) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x823FB440;
	__savegprlr_29(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,28(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823FB468;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823FB484;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823FB4A0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,52(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823FB4BC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,60(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823FB4D8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x823fb520
	if (ctx.cr6.eq) goto loc_823FB520;
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lvx128 v0,r0,r11
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// stvx128 v0,r10,r30
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32 + ctx.r30.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stwx r10,r11,r30
	PPC_STORE_U32(ctx.r11.u32 + ctx.r30.u32, ctx.r10.u32);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stwx r10,r11,r30
	PPC_STORE_U32(ctx.r11.u32 + ctx.r30.u32, ctx.r10.u32);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stwx r10,r11,r30
	PPC_STORE_U32(ctx.r11.u32 + ctx.r30.u32, ctx.r10.u32);
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r10,92(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// stwx r10,r11,r30
	PPC_STORE_U32(ctx.r11.u32 + ctx.r30.u32, ctx.r10.u32);
loc_823FB520:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823FB528"))) PPC_WEAK_FUNC(sub_823FB528);
PPC_FUNC_IMPL(__imp__sub_823FB528) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x823FB530;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// add r5,r11,r5
	ctx.r5.u64 = ctx.r11.u64 + ctx.r5.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823FB55C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,24(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// add r5,r11,r31
	ctx.r5.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823FB57C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823FB584"))) PPC_WEAK_FUNC(sub_823FB584);
PPC_FUNC_IMPL(__imp__sub_823FB584) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823FB588"))) PPC_WEAK_FUNC(sub_823FB588);
PPC_FUNC_IMPL(__imp__sub_823FB588) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x823FB590;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823FB5B8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// addi r5,r1,81
	ctx.r5.s64 = ctx.r1.s64 + 81;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823FB5D4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x823fb5f4
	if (ctx.cr6.eq) goto loc_823FB5F4;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lbz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// stbx r10,r11,r30
	PPC_STORE_U8(ctx.r11.u32 + ctx.r30.u32, ctx.r10.u8);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lbz r10,81(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 81);
	// stbx r10,r11,r30
	PPC_STORE_U8(ctx.r11.u32 + ctx.r30.u32, ctx.r10.u8);
loc_823FB5F4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823FB5FC"))) PPC_WEAK_FUNC(sub_823FB5FC);
PPC_FUNC_IMPL(__imp__sub_823FB5FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823FB600"))) PPC_WEAK_FUNC(sub_823FB600);
PPC_FUNC_IMPL(__imp__sub_823FB600) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x823FB608;
	__savegprlr_29(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,28(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823FB630;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823FB64C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823FB668;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,52(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823FB684;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,60(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823FB6A0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x823fb6e8
	if (ctx.cr6.eq) goto loc_823FB6E8;
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lvx128 v0,r0,r11
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// stvx128 v0,r10,r30
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32 + ctx.r30.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// stwx r11,r10,r30
	PPC_STORE_U32(ctx.r10.u32 + ctx.r30.u32, ctx.r11.u32);
	// lbz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// stbx r11,r10,r30
	PPC_STORE_U8(ctx.r10.u32 + ctx.r30.u32, ctx.r11.u8);
	// lfs f0,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// stfsx f0,r10,r30
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + ctx.r30.u32, temp.u32);
	// lwz r10,92(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// stwx r10,r11,r30
	PPC_STORE_U32(ctx.r11.u32 + ctx.r30.u32, ctx.r10.u32);
loc_823FB6E8:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823FB6F0"))) PPC_WEAK_FUNC(sub_823FB6F0);
PPC_FUNC_IMPL(__imp__sub_823FB6F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x823FB6F8;
	__savegprlr_29(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823FB720;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823FB73C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x823fb764
	if (ctx.cr6.eq) goto loc_823FB764;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r5,28
	ctx.r5.s64 = 28;
	// stwx r10,r11,r30
	PPC_STORE_U32(ctx.r11.u32 + ctx.r30.u32, ctx.r10.u32);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// add r3,r11,r30
	ctx.r3.u64 = ctx.r11.u64 + ctx.r30.u64;
	// bl 0x82fa77c0
	ctx.lr = 0x823FB764;
	sub_82FA77C0(ctx, base);
loc_823FB764:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823FB76C"))) PPC_WEAK_FUNC(sub_823FB76C);
PPC_FUNC_IMPL(__imp__sub_823FB76C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823FB770"))) PPC_WEAK_FUNC(sub_823FB770);
PPC_FUNC_IMPL(__imp__sub_823FB770) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x823FB778;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823FB7A0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823FB7BC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x823fb7dc
	if (ctx.cr6.eq) goto loc_823FB7DC;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stwx r10,r11,r30
	PPC_STORE_U32(ctx.r11.u32 + ctx.r30.u32, ctx.r10.u32);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stwx r10,r11,r30
	PPC_STORE_U32(ctx.r11.u32 + ctx.r30.u32, ctx.r10.u32);
loc_823FB7DC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823FB7E4"))) PPC_WEAK_FUNC(sub_823FB7E4);
PPC_FUNC_IMPL(__imp__sub_823FB7E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_823FB7E8"))) PPC_WEAK_FUNC(sub_823FB7E8);
PPC_FUNC_IMPL(__imp__sub_823FB7E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x823FB7F0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,24(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// add r5,r11,r5
	ctx.r5.u64 = ctx.r11.u64 + ctx.r5.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823FB81C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,32(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// add r5,r11,r31
	ctx.r5.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823FB83C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,40(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// add r5,r11,r31
	ctx.r5.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823FB85C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,48(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// add r5,r11,r31
	ctx.r5.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x823FB87C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_823FB884"))) PPC_WEAK_FUNC(sub_823FB884);
PPC_FUNC_IMPL(__imp__sub_823FB884) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

