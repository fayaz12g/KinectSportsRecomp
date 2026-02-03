#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_82A098A8"))) PPC_WEAK_FUNC(sub_82A098A8);
PPC_FUNC_IMPL(__imp__sub_82A098A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x82A098B0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31975
	ctx.r11.s64 = -2095513600;
	// addi r28,r11,-12452
	ctx.r28.s64 = ctx.r11.s64 + -12452;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x831791a4
	ctx.lr = 0x82A098C4;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lis r11,-31964
	ctx.r11.s64 = -2094792704;
	// addi r29,r11,29312
	ctx.r29.s64 = ctx.r11.s64 + 29312;
	// addi r30,r29,10600
	ctx.r30.s64 = ctx.r29.s64 + 10600;
loc_82A098D0:
	// lwz r31,0(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82a09904
	if (ctx.cr6.eq) goto loc_82A09904;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831792b4
	ctx.lr = 0x82A098EC;
	__imp__KeSetEvent(ctx, base);
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a09904
	if (ctx.cr6.eq) goto loc_82A09904;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x831792b4
	ctx.lr = 0x82A09904;
	__imp__KeSetEvent(ctx, base);
loc_82A09904:
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// addi r11,r29,10624
	ctx.r11.s64 = ctx.r29.s64 + 10624;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82a098d0
	if (ctx.cr6.lt) goto loc_82A098D0;
	// lwz r3,10624(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 10624);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a0992c
	if (ctx.cr6.eq) goto loc_82A0992C;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x831792b4
	ctx.lr = 0x82A0992C;
	__imp__KeSetEvent(ctx, base);
loc_82A0992C:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x831791b4
	ctx.lr = 0x82A09934;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A0993C"))) PPC_WEAK_FUNC(sub_82A0993C);
PPC_FUNC_IMPL(__imp__sub_82A0993C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A09940"))) PPC_WEAK_FUNC(sub_82A09940);
PPC_FUNC_IMPL(__imp__sub_82A09940) {
	PPC_FUNC_PROLOGUE();
	// lis r4,8348
	ctx.r4.s64 = 547094528;
	// b 0x82691410
	sub_82691410(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A09948"))) PPC_WEAK_FUNC(sub_82A09948);
PPC_FUNC_IMPL(__imp__sub_82A09948) {
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
	// bl 0x83179244
	ctx.lr = 0x82A09960;
	__imp__KeGetCurrentProcessType(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x82a09974
	if (!ctx.cr6.eq) goto loc_82A09974;
	// lis r4,8348
	ctx.r4.s64 = 547094528;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82691460
	ctx.lr = 0x82A09974;
	sub_82691460(ctx, base);
loc_82A09974:
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

__attribute__((alias("__imp__sub_82A09988"))) PPC_WEAK_FUNC(sub_82A09988);
PPC_FUNC_IMPL(__imp__sub_82A09988) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7660
	ctx.lr = 0x82A09990;
	__savegprlr_22(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31964
	ctx.r11.s64 = -2094792704;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// addi r31,r11,29312
	ctx.r31.s64 = ctx.r11.s64 + 29312;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// mr r26,r8
	ctx.r26.u64 = ctx.r8.u64;
	// mr r25,r9
	ctx.r25.u64 = ctx.r9.u64;
	// li r24,0
	ctx.r24.s64 = 0;
	// lwz r11,128(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82a099e4
	if (!ctx.cr6.eq) goto loc_82A099E4;
	// lwz r11,124(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82a099d8
	if (!ctx.cr6.eq) goto loc_82A099D8;
	// ori r3,r3,21
	ctx.r3.u64 = ctx.r3.u64 | 21;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82fa76b0
	__restgprlr_22(ctx, base);
	return;
loc_82A099D8:
	// ori r3,r3,1167
	ctx.r3.u64 = ctx.r3.u64 | 1167;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82fa76b0
	__restgprlr_22(ctx, base);
	return;
loc_82A099E4:
	// rlwinm r11,r5,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r29,r6,1,0,30
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// subfic r30,r11,639
	ctx.xer.ca = ctx.r11.u32 <= 639;
	ctx.r30.s64 = 639 - ctx.r11.s64;
	// extsh r23,r29
	ctx.r23.s64 = ctx.r29.s16;
	// extsh r22,r30
	ctx.r22.s64 = ctx.r30.s16;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// addi r3,r31,10992
	ctx.r3.s64 = ctx.r31.s64 + 10992;
	// bl 0x82a01ea8
	ctx.lr = 0x82A09A08;
	sub_82A01EA8(ctx, base);
	// lwz r11,11072(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11072);
	// rlwinm r10,r27,30,18,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 30) & 0x3FFE;
	// fctiwz f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f1.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f1.f64));
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// addi r3,r31,11032
	ctx.r3.s64 = ctx.r31.s64 + 11032;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// lhzx r8,r10,r11
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r10.u32 + ctx.r11.u32);
	// extsh r7,r8
	ctx.r7.s64 = ctx.r8.s16;
	// srawi r6,r7,4
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0xF) != 0);
	ctx.r6.s64 = ctx.r7.s32 >> 4;
	// subfic r11,r6,639
	ctx.xer.ca = ctx.r6.u32 <= 639;
	ctx.r11.s64 = 639 - ctx.r6.s64;
	// subf r10,r30,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r30.s64;
	// subf r31,r9,r10
	ctx.r31.s64 = ctx.r10.s64 - ctx.r9.s64;
	// bl 0x82a01ea8
	ctx.lr = 0x82A09A44;
	sub_82A01EA8(ctx, base);
	// fctiwz f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.s64 = (ctx.f1.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f1.f64));
	// stfd f13,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f13.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// beq cr6,0x82a09a88
	if (ctx.cr6.eq) goto loc_82A09A88;
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x82a09a88
	if (!ctx.cr6.eq) goto loc_82A09A88;
	// addi r10,r31,-160
	ctx.r10.s64 = ctx.r31.s64 + -160;
	// lwz r9,4(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// addi r8,r11,-120
	ctx.r8.s64 = ctx.r11.s64 + -120;
	// lwz r7,8(r28)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// rlwinm r6,r10,1,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r5,r8,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r31,r9,r6
	ctx.r31.s64 = ctx.r6.s64 - ctx.r9.s64;
	// subf r11,r7,r5
	ctx.r11.s64 = ctx.r5.s64 - ctx.r7.s64;
loc_82A09A88:
	// stw r31,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r31.u32);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// stw r11,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r11.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82fa76b0
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A09A9C"))) PPC_WEAK_FUNC(sub_82A09A9C);
PPC_FUNC_IMPL(__imp__sub_82A09A9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A09AA0"))) PPC_WEAK_FUNC(sub_82A09AA0);
PPC_FUNC_IMPL(__imp__sub_82A09AA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa766c
	ctx.lr = 0x82A09AA8;
	__savegprlr_25(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82a09acc
	if (!ctx.cr6.eq) goto loc_82A09ACC;
loc_82A09ABC:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82fa76bc
	__restgprlr_25(ctx, base);
	return;
loc_82A09ACC:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82a09abc
	if (ctx.cr6.eq) goto loc_82A09ABC;
	// li r29,0
	ctx.r29.s64 = 0;
	// lis r11,-31975
	ctx.r11.s64 = -2095513600;
	// stw r29,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r29.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// addi r4,r11,-12492
	ctx.r4.s64 = ctx.r11.s64 + -12492;
	// bl 0x83179404
	ctx.lr = 0x82A09AF0;
	__imp__ObReferenceObjectByHandle(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x82a09b14
	if (!ctx.cr6.lt) goto loc_82A09B14;
	// bl 0x831795c4
	ctx.lr = 0x82A09AFC;
	__imp__RtlNtStatusToDosError(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x82a09dc0
	if (!ctx.cr6.gt) goto loc_82A09DC0;
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// oris r3,r11,32775
	ctx.r3.u64 = ctx.r11.u64 | 2147942400;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82fa76bc
	__restgprlr_25(ctx, base);
	return;
loc_82A09B14:
	// lis r11,-31964
	ctx.r11.s64 = -2094792704;
	// lis r9,-31999
	ctx.r9.s64 = -2097086464;
	// addi r31,r11,29312
	ctx.r31.s64 = ctx.r11.s64 + 29312;
	// lis r8,-32768
	ctx.r8.s64 = -2147483648;
	// lis r10,-31975
	ctx.r10.s64 = -2095513600;
	// ori r26,r9,4
	ctx.r26.u64 = ctx.r9.u64 | 4;
	// ori r25,r8,10
	ctx.r25.u64 = ctx.r8.u64 | 10;
	// lwz r11,124(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// addi r27,r10,-12452
	ctx.r27.s64 = ctx.r10.s64 + -12452;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82a09d6c
	if (ctx.cr6.eq) goto loc_82A09D6C;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lis r11,1
	ctx.r11.s64 = 65536;
	// lwz r10,20(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// rlwinm r9,r10,0,15,15
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x10000;
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82a09b88
	if (ctx.cr6.eq) goto loc_82A09B88;
	// cmpwi cr6,r30,-1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, -1, ctx.xer);
	// beq cr6,0x82a09b68
	if (ctx.cr6.eq) goto loc_82A09B68;
	// cmplwi cr6,r30,8000
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 8000, ctx.xer);
	// ble cr6,0x82a09b88
	if (!ctx.cr6.gt) goto loc_82A09B88;
loc_82A09B68:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r11,r11,0,4,4
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8000000;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a09b84
	if (ctx.cr6.eq) goto loc_82A09B84;
	// lis r30,0
	ctx.r30.s64 = 0;
	// ori r30,r30,60000
	ctx.r30.u64 = ctx.r30.u64 | 60000;
	// b 0x82a09b88
	goto loc_82A09B88;
loc_82A09B84:
	// li r30,8000
	ctx.r30.s64 = 8000;
loc_82A09B88:
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// cmpwi cr6,r30,-1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, -1, ctx.xer);
	// beq cr6,0x82a09ba4
	if (ctx.cr6.eq) goto loc_82A09BA4;
	// clrldi r11,r30,32
	ctx.r11.u64 = ctx.r30.u64 & 0xFFFFFFFF;
	// addi r7,r1,88
	ctx.r7.s64 = ctx.r1.s64 + 88;
	// mulli r10,r11,-10000
	ctx.r10.s64 = ctx.r11.s64 * -10000;
	// std r10,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r10.u64);
loc_82A09BA4:
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x83179414
	ctx.lr = 0x82A09BB4;
	__imp__KeWaitForSingleObject(ctx, base);
	// cmpwi cr6,r3,258
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 258, ctx.xer);
	// beq cr6,0x82a09d64
	if (ctx.cr6.eq) goto loc_82A09D64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x831791a4
	ctx.lr = 0x82A09BC4;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,120(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 120);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82a09be8
	if (!ctx.cr6.eq) goto loc_82A09BE8;
	// lis r29,-31999
	ctx.r29.s64 = -2097086464;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// ori r29,r29,11
	ctx.r29.u64 = ctx.r29.u64 | 11;
	// bl 0x831791b4
	ctx.lr = 0x82A09BE4;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// b 0x82a09d74
	goto loc_82A09D74;
loc_82A09BE8:
	// lwz r11,32(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a09d0c
	if (ctx.cr6.eq) goto loc_82A09D0C;
	// lwz r11,24(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// lwz r9,44(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 44);
	// addi r8,r11,-2
	ctx.r8.s64 = ctx.r11.s64 + -2;
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x82a09c18
	if (!ctx.cr6.eq) goto loc_82A09C18;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mr r29,r26
	ctx.r29.u64 = ctx.r26.u64;
	// bl 0x831791b4
	ctx.lr = 0x82A09C14;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// b 0x82a09d74
	goto loc_82A09D74;
loc_82A09C18:
	// lwz r11,32(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r29,32(r10)
	PPC_STORE_U32(ctx.r10.u32 + 32, ctx.r29.u32);
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
	// addi r10,r31,10600
	ctx.r10.s64 = ctx.r31.s64 + 10600;
	// stw r8,108(r11)
	PPC_STORE_U32(ctx.r11.u32 + 108, ctx.r8.u32);
	// lwz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_82A09C34:
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r7,r8
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x82a09c54
	if (ctx.cr6.eq) goto loc_82A09C54;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// addi r7,r31,10624
	ctx.r7.s64 = ctx.r31.s64 + 10624;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmpw cr6,r10,r7
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x82a09c34
	if (ctx.cr6.lt) goto loc_82A09C34;
loc_82A09C54:
	// mftb r10
	ctx.r10.u64 = __rdtsc();
	// lwz r8,112(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 112);
	// rotlwi r7,r10,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lis r6,15
	ctx.r6.s64 = 983040;
	// subf r5,r8,r7
	ctx.r5.s64 = ctx.r7.s64 - ctx.r8.s64;
	// ori r4,r6,16960
	ctx.r4.u64 = ctx.r6.u64 | 16960;
	// clrldi r10,r5,32
	ctx.r10.u64 = ctx.r5.u64 & 0xFFFFFFFF;
	// lis r3,762
	ctx.r3.s64 = 49938432;
	// mulld r7,r10,r4
	ctx.r7.s64 = ctx.r10.s64 * ctx.r4.s64;
	// ori r8,r3,61568
	ctx.r8.u64 = ctx.r3.u64 | 61568;
	// cmplwi cr6,r9,4
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 4, ctx.xer);
	// divd r6,r7,r8
	ctx.r6.s64 = ctx.r7.s64 / ctx.r8.s64;
	// rotlwi r10,r6,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r6.u32, 0);
	// bgt cr6,0x82a09cc8
	if (ctx.cr6.gt) goto loc_82A09CC8;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x82a09cbc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_82A09CBC;
	// bdzf 4*cr6+eq,0x82a09cac
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_82A09CAC;
	// bdzf 4*cr6+eq,0x82a09cc4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_82A09CC4;
	// bne cr6,0x82a09cb4
	if (!ctx.cr6.eq) goto loc_82A09CB4;
	// stw r10,12188(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12188, ctx.r10.u32);
	// b 0x82a09cc8
	goto loc_82A09CC8;
loc_82A09CAC:
	// stw r10,12184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12184, ctx.r10.u32);
	// b 0x82a09cc8
	goto loc_82A09CC8;
loc_82A09CB4:
	// stw r10,12192(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12192, ctx.r10.u32);
	// b 0x82a09cc8
	goto loc_82A09CC8;
loc_82A09CBC:
	// stw r10,12200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12200, ctx.r10.u32);
	// b 0x82a09cc8
	goto loc_82A09CC8;
loc_82A09CC4:
	// stw r10,12196(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12196, ctx.r10.u32);
loc_82A09CC8:
	// stw r29,56(r11)
	PPC_STORE_U32(ctx.r11.u32 + 56, ctx.r29.u32);
	// addi r9,r11,8
	ctx.r9.s64 = ctx.r11.s64 + 8;
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r8,48(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// addi r10,r10,48
	ctx.r10.s64 = ctx.r10.s64 + 48;
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// stw r11,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r11.u32);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// addi r7,r10,1
	ctx.r7.s64 = ctx.r10.s64 + 1;
	// stw r7,44(r11)
	PPC_STORE_U32(ctx.r11.u32 + 44, ctx.r7.u32);
	// stw r9,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r9.u32);
	// bl 0x831791b4
	ctx.lr = 0x82A09D08;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// b 0x82a09d74
	goto loc_82A09D74;
loc_82A09D0C:
	// lwz r11,124(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82a09d2c
	if (!ctx.cr6.eq) goto loc_82A09D2C;
	// lis r29,-32761
	ctx.r29.s64 = -2147024896;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// ori r29,r29,1167
	ctx.r29.u64 = ctx.r29.u64 | 1167;
	// bl 0x831791b4
	ctx.lr = 0x82A09D28;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// b 0x82a09d74
	goto loc_82A09D74;
loc_82A09D2C:
	// lwz r11,20(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// rlwinm r10,r11,0,15,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82a09d50
	if (ctx.cr6.eq) goto loc_82A09D50;
	// lis r29,-32761
	ctx.r29.s64 = -2147024896;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// ori r29,r29,1167
	ctx.r29.u64 = ctx.r29.u64 | 1167;
	// bl 0x831791b4
	ctx.lr = 0x82A09D4C;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// b 0x82a09d74
	goto loc_82A09D74;
loc_82A09D50:
	// lis r29,-31999
	ctx.r29.s64 = -2097086464;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// ori r29,r29,1
	ctx.r29.u64 = ctx.r29.u64 | 1;
	// bl 0x831791b4
	ctx.lr = 0x82A09D60;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// b 0x82a09d74
	goto loc_82A09D74;
loc_82A09D64:
	// mr r29,r25
	ctx.r29.u64 = ctx.r25.u64;
	// b 0x82a09d74
	goto loc_82A09D74;
loc_82A09D6C:
	// lis r29,-32761
	ctx.r29.s64 = -2147024896;
	// ori r29,r29,1167
	ctx.r29.u64 = ctx.r29.u64 | 1167;
loc_82A09D74:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x831791a4
	ctx.lr = 0x82A09D7C;
	__imp__RtlEnterCriticalSection(ctx, base);
	// cmpw cr6,r29,r26
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r26.s32, ctx.xer);
	// beq cr6,0x82a09dac
	if (ctx.cr6.eq) goto loc_82A09DAC;
	// cmpw cr6,r29,r25
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r25.s32, ctx.xer);
	// beq cr6,0x82a09dac
	if (ctx.cr6.eq) goto loc_82A09DAC;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x831793b4
	ctx.lr = 0x82A09D94;
	__imp__KeResetEvent(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82a09dac
	if (ctx.cr6.eq) goto loc_82A09DAC;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// bl 0x831793b4
	ctx.lr = 0x82A09DAC;
	__imp__KeResetEvent(ctx, base);
loc_82A09DAC:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x831791b4
	ctx.lr = 0x82A09DB4;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x83179424
	ctx.lr = 0x82A09DBC;
	__imp__ObDereferenceObject(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
loc_82A09DC0:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82fa76bc
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A09DC8"))) PPC_WEAK_FUNC(sub_82A09DC8);
PPC_FUNC_IMPL(__imp__sub_82A09DC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x82A09DD0;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82a09df0
	if (!ctx.cr6.eq) goto loc_82A09DF0;
loc_82A09DE0:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
loc_82A09DF0:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82a09de0
	if (ctx.cr6.eq) goto loc_82A09DE0;
	// li r30,0
	ctx.r30.s64 = 0;
	// lis r11,-31975
	ctx.r11.s64 = -2095513600;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-12492
	ctx.r4.s64 = ctx.r11.s64 + -12492;
	// bl 0x83179404
	ctx.lr = 0x82A09E10;
	__imp__ObReferenceObjectByHandle(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x82a09e34
	if (!ctx.cr6.lt) goto loc_82A09E34;
	// bl 0x831795c4
	ctx.lr = 0x82A09E1C;
	__imp__RtlNtStatusToDosError(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x82a09f0c
	if (!ctx.cr6.gt) goto loc_82A09F0C;
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// oris r3,r11,32775
	ctx.r3.u64 = ctx.r11.u64 | 2147942400;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
loc_82A09E34:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r31,r31,-8
	ctx.r31.s64 = ctx.r31.s64 + -8;
	// li r11,120
	ctx.r11.s64 = 120;
	// lwz r10,28(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// lwz r9,24(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// subf r8,r10,r31
	ctx.r8.s64 = ctx.r31.s64 - ctx.r10.s64;
	// divw r7,r8,r11
	ctx.r7.s32 = ctx.r8.s32 / ctx.r11.s32;
	// cmplw cr6,r7,r9
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x82a09efc
	if (!ctx.cr6.lt) goto loc_82A09EFC;
	// lis r11,-31975
	ctx.r11.s64 = -2095513600;
	// addi r29,r11,-12452
	ctx.r29.s64 = ctx.r11.s64 + -12452;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x831791a4
	ctx.lr = 0x82A09E68;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r11,108(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82a09ed8
	if (!ctx.cr6.eq) goto loc_82A09ED8;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r3,r31,48
	ctx.r3.s64 = ctx.r31.s64 + 48;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// stw r30,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r30.u32);
	// bl 0x82a04180
	ctx.lr = 0x82A09E90;
	sub_82A04180(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r9,36(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// addi r11,r11,36
	ctx.r11.s64 = ctx.r11.s64 + 36;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// stw r31,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r31.u32);
	// stw r31,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r31.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// addi r8,r10,-1
	ctx.r8.s64 = ctx.r10.s64 + -1;
	// stw r8,44(r11)
	PPC_STORE_U32(ctx.r11.u32 + 44, ctx.r8.u32);
	// bl 0x831791b4
	ctx.lr = 0x82A09EC4;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x83179424
	ctx.lr = 0x82A09ECC;
	__imp__ObDereferenceObject(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
loc_82A09ED8:
	// lis r30,-32761
	ctx.r30.s64 = -2147024896;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// ori r30,r30,87
	ctx.r30.u64 = ctx.r30.u64 | 87;
	// bl 0x831791b4
	ctx.lr = 0x82A09EE8;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x83179424
	ctx.lr = 0x82A09EF0;
	__imp__ObDereferenceObject(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
loc_82A09EFC:
	// lis r30,-32761
	ctx.r30.s64 = -2147024896;
	// ori r30,r30,87
	ctx.r30.u64 = ctx.r30.u64 | 87;
	// bl 0x83179424
	ctx.lr = 0x82A09F08;
	__imp__ObDereferenceObject(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_82A09F0C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A09F14"))) PPC_WEAK_FUNC(sub_82A09F14);
PPC_FUNC_IMPL(__imp__sub_82A09F14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A09F18"))) PPC_WEAK_FUNC(sub_82A09F18);
PPC_FUNC_IMPL(__imp__sub_82A09F18) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa765c
	ctx.lr = 0x82A09F20;
	__savegprlr_21(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// mulli r10,r4,28
	ctx.r10.s64 = ctx.r4.s64 * 28;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// addi r11,r11,-25576
	ctx.r11.s64 = ctx.r11.s64 + -25576;
	// li r5,124
	ctx.r5.s64 = 124;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r24,r6
	ctx.r24.u64 = ctx.r6.u64;
	// mr r23,r7
	ctx.r23.u64 = ctx.r7.u64;
	// mr r21,r8
	ctx.r21.u64 = ctx.r8.u64;
	// li r27,0
	ctx.r27.s64 = 0;
	// add r29,r10,r11
	ctx.r29.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x82fa7cf0
	ctx.lr = 0x82A09F5C;
	sub_82FA7CF0(ctx, base);
	// stw r28,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r28.u32);
	// lis r4,8348
	ctx.r4.s64 = 547094528;
	// mulli r3,r28,120
	ctx.r3.s64 = ctx.r28.s64 * 120;
	// bl 0x82691410
	ctx.lr = 0x82A09F6C;
	sub_82691410(ctx, base);
	// cmplwi cr6,r30,3
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 3, ctx.xer);
	// stw r3,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r3.u32);
	// beq cr6,0x82a09f84
	if (ctx.cr6.eq) goto loc_82A09F84;
	// cmplwi cr6,r30,1
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 1, ctx.xer);
	// mr r22,r27
	ctx.r22.u64 = ctx.r27.u64;
	// bne cr6,0x82a09f88
	if (!ctx.cr6.eq) goto loc_82A09F88;
loc_82A09F84:
	// li r22,1
	ctx.r22.s64 = 1;
loc_82A09F88:
	// addic r11,r22,-1
	ctx.xer.ca = ctx.r22.u32 > 0;
	ctx.r11.s64 = ctx.r22.s64 + -1;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// subfe r11,r11,r22
	temp.u8 = (~ctx.r11.u32 + ctx.r22.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r22.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r22.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// add r28,r11,r28
	ctx.r28.u64 = ctx.r11.u64 + ctx.r28.u64;
	// bne cr6,0x82a09fac
	if (!ctx.cr6.eq) goto loc_82A09FAC;
loc_82A09F9C:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x82fa76ac
	__restgprlr_21(ctx, base);
	return;
loc_82A09FAC:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lis r4,-29506
	ctx.r4.s64 = -1933705216;
	// mullw r3,r28,r11
	ctx.r3.s64 = int64_t(ctx.r28.s32) * int64_t(ctx.r11.s32);
	// bl 0x82a013e0
	ctx.lr = 0x82A09FBC;
	sub_82A013E0(ctx, base);
	// stw r3,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a09f9c
	if (ctx.cr6.eq) goto loc_82A09F9C;
	// li r25,-1
	ctx.r25.s64 = -1;
	// lwz r8,16(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// addi r30,r31,64
	ctx.r30.s64 = ctx.r31.s64 + 64;
	// lwz r4,8(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r30,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r30.u32);
	// li r7,4
	ctx.r7.s64 = 4;
	// stw r27,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r27.u32);
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r27,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r27.u32);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// stw r27,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r27.u32);
	// stw r25,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r25.u32);
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// bl 0x82af4398
	ctx.lr = 0x82A0A00C;
	sub_82AF4398(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,60(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// bl 0x82af44c8
	ctx.lr = 0x82A0A018;
	sub_82AF44C8(ctx, base);
	// addi r26,r31,36
	ctx.r26.s64 = ctx.r31.s64 + 36;
	// addi r11,r31,48
	ctx.r11.s64 = ctx.r31.s64 + 48;
	// stw r26,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r26.u32);
	// stw r26,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r26.u32);
	// mr r28,r27
	ctx.r28.u64 = ctx.r27.u64;
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// stw r11,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r11.u32);
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r27,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r27.u32);
	// ble cr6,0x82a0a15c
	if (!ctx.cr6.gt) goto loc_82A0A15C;
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
loc_82A0A048:
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r27,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r27.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// stw r27,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r27.u32);
	// stw r27,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r27.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r25,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r25.u32);
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r24,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r24.u32);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// add r7,r30,r11
	ctx.r7.u64 = ctx.r30.u64 + ctx.r11.u64;
	// stw r23,24(r7)
	PPC_STORE_U32(ctx.r7.u32 + 24, ctx.r23.u32);
	// lwz r7,60(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// add r3,r30,r11
	ctx.r3.u64 = ctx.r30.u64 + ctx.r11.u64;
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mullw r11,r28,r4
	ctx.r11.s64 = int64_t(ctx.r28.s32) * int64_t(ctx.r4.s32);
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// stw r11,100(r3)
	PPC_STORE_U32(ctx.r3.u32 + 100, ctx.r11.u32);
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// add r4,r30,r11
	ctx.r4.u64 = ctx.r30.u64 + ctx.r11.u64;
	// lwz r7,12(r29)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// divwu r11,r3,r7
	ctx.r11.u32 = ctx.r3.u32 / ctx.r7.u32;
	// twllei r7,0
	if (ctx.r7.u32 <= 0) __builtin_debugtrap();
	// mullw r7,r11,r28
	ctx.r7.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r28.s32);
	// stw r7,104(r4)
	PPC_STORE_U32(ctx.r4.u32 + 104, ctx.r7.u32);
	// lwz r7,20(r29)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// lwz r4,8(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// addi r11,r11,48
	ctx.r11.s64 = ctx.r11.s64 + 48;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// bl 0x82af41e0
	ctx.lr = 0x82A0A0E0;
	sub_82AF41E0(ctx, base);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// addi r3,r11,48
	ctx.r3.s64 = ctx.r11.s64 + 48;
	// lwz r4,100(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// bl 0x82af44c8
	ctx.lr = 0x82A0A0F4;
	sub_82AF44C8(ctx, base);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// addi r10,r11,48
	ctx.r10.s64 = ctx.r11.s64 + 48;
	// stw r10,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r10.u32);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// stw r27,108(r11)
	PPC_STORE_U32(ctx.r11.u32 + 108, ctx.r27.u32);
	// addi r3,r11,48
	ctx.r3.s64 = ctx.r11.s64 + 48;
	// bl 0x82a04180
	ctx.lr = 0x82A0A118;
	sub_82A04180(ctx, base);
	// lwz r9,0(r26)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// lwz r8,28(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// stwx r9,r30,r8
	PPC_STORE_U32(ctx.r30.u32 + ctx.r8.u32, ctx.r9.u32);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// add r7,r30,r11
	ctx.r7.u64 = ctx.r30.u64 + ctx.r11.u64;
	// stw r26,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, ctx.r26.u32);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// add r6,r30,r11
	ctx.r6.u64 = ctx.r30.u64 + ctx.r11.u64;
	// stw r6,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r6.u32);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// add r5,r30,r11
	ctx.r5.u64 = ctx.r30.u64 + ctx.r11.u64;
	// stw r5,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r5.u32);
	// addi r30,r30,120
	ctx.r30.s64 = ctx.r30.s64 + 120;
	// lwz r4,24(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplw cr6,r28,r4
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r4.u32, ctx.xer);
	// blt cr6,0x82a0a048
	if (ctx.cr6.lt) goto loc_82A0A048;
loc_82A0A15C:
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// beq cr6,0x82a0a180
	if (ctx.cr6.eq) goto loc_82A0A180;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r9,12(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// mullw r8,r10,r11
	ctx.r8.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// divwu r7,r8,r9
	ctx.r7.u32 = ctx.r8.u32 / ctx.r9.u32;
	// twllei r9,0
	if (ctx.r9.u32 <= 0) __builtin_debugtrap();
	// stw r7,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r7.u32);
loc_82A0A180:
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r27,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r27.u32);
	// addi r11,r31,8
	ctx.r11.s64 = ctx.r31.s64 + 8;
	// stb r10,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r10.u8);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// stw r21,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r21.u32);
	// sync 
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x82fa76ac
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A0A1AC"))) PPC_WEAK_FUNC(sub_82A0A1AC);
PPC_FUNC_IMPL(__imp__sub_82A0A1AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A0A1B0"))) PPC_WEAK_FUNC(sub_82A0A1B0);
PPC_FUNC_IMPL(__imp__sub_82A0A1B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7674
	ctx.lr = 0x82A0A1B8;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// stw r11,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, ctx.r11.u32);
	// bl 0x82a09448
	ctx.lr = 0x82A0A1CC;
	sub_82A09448(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82a041c8
	ctx.lr = 0x82A0A1D8;
	sub_82A041C8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82a0a1e8
	if (!ctx.cr6.eq) goto loc_82A0A1E8;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq cr6,0x82a0a27c
	if (ctx.cr6.eq) goto loc_82A0A27C;
loc_82A0A1E8:
	// lis r11,-31975
	ctx.r11.s64 = -2095513600;
	// addi r29,r11,-12452
	ctx.r29.s64 = ctx.r11.s64 + -12452;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x831791b4
	ctx.lr = 0x82A0A1F8;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// lis r11,-31964
	ctx.r11.s64 = -2094792704;
	// addi r31,r11,29312
	ctx.r31.s64 = ctx.r11.s64 + 29312;
	// lwz r3,120(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// bl 0x82677460
	ctx.lr = 0x82A0A208;
	sub_82677460(ctx, base);
loc_82A0A208:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x831791a4
	ctx.lr = 0x82A0A210;
	__imp__RtlEnterCriticalSection(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82a09448
	ctx.lr = 0x82A0A218;
	sub_82A09448(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r3,r31,12272
	ctx.r3.s64 = ctx.r31.s64 + 12272;
	// bl 0x83179274
	ctx.lr = 0x82A0A224;
	__imp__KfAcquireSpinLock(ctx, base);
	// lwz r11,12264(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12264);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82a0a244
	if (!ctx.cr6.eq) goto loc_82A0A244;
	// lwz r11,12268(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12268);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a0a248
	if (ctx.cr6.eq) goto loc_82A0A248;
loc_82A0A244:
	// li r30,1
	ctx.r30.s64 = 1;
loc_82A0A248:
	// addi r3,r31,12272
	ctx.r3.s64 = ctx.r31.s64 + 12272;
	// bl 0x83179294
	ctx.lr = 0x82A0A250;
	__imp__KfReleaseSpinLock(ctx, base);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne cr6,0x82a0a260
	if (!ctx.cr6.eq) goto loc_82A0A260;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq cr6,0x82a0a27c
	if (ctx.cr6.eq) goto loc_82A0A27C;
loc_82A0A260:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x831791b4
	ctx.lr = 0x82A0A268;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r31,88
	ctx.r3.s64 = ctx.r31.s64 + 88;
	// bl 0x831792b4
	ctx.lr = 0x82A0A278;
	__imp__KeSetEvent(ctx, base);
	// b 0x82a0a208
	goto loc_82A0A208;
loc_82A0A27C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A0A284"))) PPC_WEAK_FUNC(sub_82A0A284);
PPC_FUNC_IMPL(__imp__sub_82A0A284) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A0A288"))) PPC_WEAK_FUNC(sub_82A0A288);
PPC_FUNC_IMPL(__imp__sub_82A0A288) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7674
	ctx.lr = 0x82A0A290;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31975
	ctx.r11.s64 = -2095513600;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r27,r11,-12452
	ctx.r27.s64 = ctx.r11.s64 + -12452;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x831791a4
	ctx.lr = 0x82A0A2AC;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lis r11,-31964
	ctx.r11.s64 = -2094792704;
	// rlwinm r10,r31,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r28,r11,29312
	ctx.r28.s64 = ctx.r11.s64 + 29312;
	// addi r9,r28,10600
	ctx.r9.s64 = ctx.r28.s64 + 10600;
	// lwzx r31,r10,r9
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82a0a38c
	if (ctx.cr6.eq) goto loc_82A0A38C;
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a0a310
	if (ctx.cr6.eq) goto loc_82A0A310;
	// stw r29,108(r11)
	PPC_STORE_U32(ctx.r11.u32 + 108, ctx.r29.u32);
	// addi r3,r11,48
	ctx.r3.s64 = ctx.r11.s64 + 48;
	// bl 0x82a04180
	ctx.lr = 0x82A0A2E4;
	sub_82A04180(ctx, base);
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// lwz r9,32(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// addi r11,r31,36
	ctx.r11.s64 = ctx.r31.s64 + 36;
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// lwz r8,32(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// stw r11,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r11.u32);
	// lwz r7,32(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// stw r7,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r7.u32);
	// lwz r6,32(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// stw r6,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r6.u32);
	// stw r29,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r29.u32);
loc_82A0A310:
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82a0a368
	if (!ctx.cr6.eq) goto loc_82A0A368;
	// lwz r11,132(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 132);
	// li r10,3
	ctx.r10.s64 = 3;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r11.u32);
	// stw r10,108(r30)
	PPC_STORE_U32(ctx.r30.u32 + 108, ctx.r10.u32);
	// stw r30,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r30.u32);
	// bl 0x831792b4
	ctx.lr = 0x82A0A340;
	__imp__KeSetEvent(ctx, base);
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a0a38c
	if (ctx.cr6.eq) goto loc_82A0A38C;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x831792b4
	ctx.lr = 0x82A0A358;
	__imp__KeSetEvent(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x831791b4
	ctx.lr = 0x82A0A360;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c4
	__restgprlr_27(ctx, base);
	return;
loc_82A0A368:
	// stw r29,108(r30)
	PPC_STORE_U32(ctx.r30.u32 + 108, ctx.r29.u32);
	// addi r3,r30,48
	ctx.r3.s64 = ctx.r30.s64 + 48;
	// bl 0x82a04180
	ctx.lr = 0x82A0A374;
	sub_82A04180(ctx, base);
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// addi r11,r31,36
	ctx.r11.s64 = ctx.r31.s64 + 36;
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// stw r30,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r30.u32);
	// stw r30,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r30.u32);
loc_82A0A38C:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x831791b4
	ctx.lr = 0x82A0A394;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A0A39C"))) PPC_WEAK_FUNC(sub_82A0A39C);
PPC_FUNC_IMPL(__imp__sub_82A0A39C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A0A3A0"))) PPC_WEAK_FUNC(sub_82A0A3A0);
PPC_FUNC_IMPL(__imp__sub_82A0A3A0) {
	PPC_FUNC_PROLOGUE();
	// b 0x82a0a288
	sub_82A0A288(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A0A3A4"))) PPC_WEAK_FUNC(sub_82A0A3A4);
PPC_FUNC_IMPL(__imp__sub_82A0A3A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A0A3A8"))) PPC_WEAK_FUNC(sub_82A0A3A8);
PPC_FUNC_IMPL(__imp__sub_82A0A3A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x82A0A3B0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31975
	ctx.r11.s64 = -2095513600;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r29,r11,-12452
	ctx.r29.s64 = ctx.r11.s64 + -12452;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x831791a4
	ctx.lr = 0x82A0A3CC;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lis r11,-31964
	ctx.r11.s64 = -2094792704;
	// addi r11,r11,29312
	ctx.r11.s64 = ctx.r11.s64 + 29312;
	// lwz r10,10660(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10660);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x82a0a44c
	if (!ctx.cr6.eq) goto loc_82A0A44C;
	// lwz r10,2164(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2164);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82a0a3fc
	if (!ctx.cr6.eq) goto loc_82A0A3FC;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r10,r10,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x80000000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82a0a44c
	if (!ctx.cr6.eq) goto loc_82A0A44C;
loc_82A0A3FC:
	// lwz r10,10672(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10672);
	// li r8,1
	ctx.r8.s64 = 1;
	// ld r7,8(r31)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r31.u32 + 8);
	// li r9,0
	ctx.r9.s64 = 0;
	// lis r5,2
	ctx.r5.s64 = 131072;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// ori r5,r5,53248
	ctx.r5.u64 = ctx.r5.u64 | 53248;
	// std r7,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r7.u64);
	// lwz r10,10672(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10672);
	// lwz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r6,16(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16, ctx.r6.u32);
	// lwz r10,10672(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10672);
	// stw r8,24(r10)
	PPC_STORE_U32(ctx.r10.u32 + 24, ctx.r8.u32);
	// lwz r10,10672(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10672);
	// stw r9,20(r10)
	PPC_STORE_U32(ctx.r10.u32 + 20, ctx.r9.u32);
	// lwz r10,10672(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10672);
	// stw r9,32(r10)
	PPC_STORE_U32(ctx.r10.u32 + 32, ctx.r9.u32);
	// lwz r11,10672(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10672);
	// lwz r3,100(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// bl 0x82a74f08
	ctx.lr = 0x82A0A44C;
	sub_82A74F08(ctx, base);
loc_82A0A44C:
	// sync 
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x831791b4
	ctx.lr = 0x82A0A458;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A0A460"))) PPC_WEAK_FUNC(sub_82A0A460);
PPC_FUNC_IMPL(__imp__sub_82A0A460) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7674
	ctx.lr = 0x82A0A468;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x83179244
	ctx.lr = 0x82A0A478;
	__imp__KeGetCurrentProcessType(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x82a0a570
	if (!ctx.cr6.eq) goto loc_82A0A570;
	// cmplwi cr6,r31,1
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 1, ctx.xer);
	// bne cr6,0x82a0a570
	if (!ctx.cr6.eq) goto loc_82A0A570;
	// lis r11,-31975
	ctx.r11.s64 = -2095513600;
	// addi r29,r11,-12452
	ctx.r29.s64 = ctx.r11.s64 + -12452;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x831791a4
	ctx.lr = 0x82A0A498;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lis r11,-31964
	ctx.r11.s64 = -2094792704;
	// li r28,0
	ctx.r28.s64 = 0;
	// addi r31,r11,29312
	ctx.r31.s64 = ctx.r11.s64 + 29312;
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
	// addi r11,r31,10600
	ctx.r11.s64 = ctx.r31.s64 + 10600;
loc_82A0A4AC:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r10,r27
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r27.u32, ctx.xer);
	// beq cr6,0x82a0a4cc
	if (ctx.cr6.eq) goto loc_82A0A4CC;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// addi r10,r31,10624
	ctx.r10.s64 = ctx.r31.s64 + 10624;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82a0a4ac
	if (ctx.cr6.lt) goto loc_82A0A4AC;
loc_82A0A4CC:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x831791b4
	ctx.lr = 0x82A0A4D4;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// cmpwi cr6,r30,6
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 6, ctx.xer);
	// beq cr6,0x82a0a570
	if (ctx.cr6.eq) goto loc_82A0A570;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x831791a4
	ctx.lr = 0x82A0A4E4;
	__imp__RtlEnterCriticalSection(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82a0a1b0
	ctx.lr = 0x82A0A4EC;
	sub_82A0A1B0(ctx, base);
	// cmplwi cr6,r30,4
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 4, ctx.xer);
	// bgt cr6,0x82a0a544
	if (ctx.cr6.gt) goto loc_82A0A544;
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x82a0a530
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_82A0A530;
	// bdzf 4*cr6+eq,0x82a0a518
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_82A0A518;
	// bdzf 4*cr6+eq,0x82a0a53c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_82A0A53C;
	// bne cr6,0x82a0a524
	if (!ctx.cr6.eq) goto loc_82A0A524;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// stw r28,12188(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12188, ctx.r28.u32);
	// b 0x82a0a544
	goto loc_82A0A544;
loc_82A0A518:
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// stw r28,12184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12184, ctx.r28.u32);
	// b 0x82a0a544
	goto loc_82A0A544;
loc_82A0A524:
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// stw r28,12192(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12192, ctx.r28.u32);
	// b 0x82a0a544
	goto loc_82A0A544;
loc_82A0A530:
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// stw r28,12200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12200, ctx.r28.u32);
	// b 0x82a0a544
	goto loc_82A0A544;
loc_82A0A53C:
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// stw r28,12196(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12196, ctx.r28.u32);
loc_82A0A544:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82a093b8
	ctx.lr = 0x82A0A54C;
	sub_82A093B8(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x83179424
	ctx.lr = 0x82A0A554;
	__imp__ObDereferenceObject(ctx, base);
	// rlwinm r11,r30,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r31,10600
	ctx.r10.s64 = ctx.r31.s64 + 10600;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stwx r28,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r28.u32);
	// bl 0x831791b4
	ctx.lr = 0x82A0A568;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// stw r28,12280(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12280, ctx.r28.u32);
	// sync 
loc_82A0A570:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A0A578"))) PPC_WEAK_FUNC(sub_82A0A578);
PPC_FUNC_IMPL(__imp__sub_82A0A578) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa766c
	ctx.lr = 0x82A0A580;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// mr r31,r8
	ctx.r31.u64 = ctx.r8.u64;
	// mr r29,r9
	ctx.r29.u64 = ctx.r9.u64;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82a0a618
	if (ctx.cr6.eq) goto loc_82A0A618;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82a0a618
	if (ctx.cr6.eq) goto loc_82A0A618;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// bne cr6,0x82a0a618
	if (!ctx.cr6.eq) goto loc_82A0A618;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82a0a5d0
	if (ctx.cr6.eq) goto loc_82A0A5D0;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82a0a5d0
	if (ctx.cr6.eq) goto loc_82A0A5D0;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82a0a618
	if (!ctx.cr6.eq) goto loc_82A0A618;
loc_82A0A5D0:
	// lis r11,-31975
	ctx.r11.s64 = -2095513600;
	// addi r25,r11,-12520
	ctx.r25.s64 = ctx.r11.s64 + -12520;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x831791a4
	ctx.lr = 0x82A0A5E0;
	__imp__RtlEnterCriticalSection(ctx, base);
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
	// mr r8,r31
	ctx.r8.u64 = ctx.r31.u64;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x82a09988
	ctx.lr = 0x82A0A600;
	sub_82A09988(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x831791b4
	ctx.lr = 0x82A0A60C;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82fa76bc
	__restgprlr_25(ctx, base);
	return;
loc_82A0A618:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82fa76bc
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A0A628"))) PPC_WEAK_FUNC(sub_82A0A628);
PPC_FUNC_IMPL(__imp__sub_82A0A628) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa766c
	ctx.lr = 0x82A0A630;
	__savegprlr_25(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r25,0
	ctx.r25.s64 = 0;
	// lis r11,-31975
	ctx.r11.s64 = -2095513600;
	// stw r25,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r25.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r3,r11,-12492
	ctx.r3.s64 = ctx.r11.s64 + -12492;
	// li r5,124
	ctx.r5.s64 = 124;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// mr r26,r8
	ctx.r26.u64 = ctx.r8.u64;
	// bl 0x831796d4
	ctx.lr = 0x82A0A66C;
	__imp__ObCreateObject(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x82a0a684
	if (!ctx.cr6.lt) goto loc_82A0A684;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82fa76bc
	__restgprlr_25(ctx, base);
	return;
loc_82A0A684:
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82a09f18
	ctx.lr = 0x82A0A6A0;
	sub_82A09F18(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82a0a6bc
	if (ctx.cr6.lt) goto loc_82A0A6BC;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r11.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82fa76bc
	__restgprlr_25(ctx, base);
	return;
loc_82A0A6BC:
	// stw r25,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r25.u32);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82a093b8
	ctx.lr = 0x82A0A6C8;
	sub_82A093B8(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x83179424
	ctx.lr = 0x82A0A6D0;
	__imp__ObDereferenceObject(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82fa76bc
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A0A6DC"))) PPC_WEAK_FUNC(sub_82A0A6DC);
PPC_FUNC_IMPL(__imp__sub_82A0A6DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A0A6E0"))) PPC_WEAK_FUNC(sub_82A0A6E0);
PPC_FUNC_IMPL(__imp__sub_82A0A6E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa765c
	ctx.lr = 0x82A0A6E8;
	__savegprlr_21(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r23,r7
	ctx.r23.u64 = ctx.r7.u64;
	// mr r21,r8
	ctx.r21.u64 = ctx.r8.u64;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82a0a8ec
	if (ctx.cr6.eq) goto loc_82A0A8EC;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x82a0a8ec
	if (ctx.cr6.eq) goto loc_82A0A8EC;
	// cmplwi cr6,r6,48
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 48, ctx.xer);
	// bgt cr6,0x82a0a8ec
	if (ctx.cr6.gt) goto loc_82A0A8EC;
	// cmplwi cr6,r3,9
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 9, ctx.xer);
	// bge cr6,0x82a0a8ec
	if (!ctx.cr6.lt) goto loc_82A0A8EC;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r9,-31964
	ctx.r9.s64 = -2094792704;
	// addi r11,r11,-25720
	ctx.r11.s64 = ctx.r11.s64 + -25720;
	// rlwinm r10,r3,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r8,r11,4
	ctx.r8.s64 = ctx.r11.s64 + 4;
	// addi r30,r9,29312
	ctx.r30.s64 = ctx.r9.s64 + 29312;
	// lwz r9,29312(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 29312);
	// lwzx r7,r10,r8
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	// and r6,r7,r9
	ctx.r6.u64 = ctx.r7.u64 & ctx.r9.u64;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x82a0a760
	if (!ctx.cr6.eq) goto loc_82A0A760;
	// lis r3,-31999
	ctx.r3.s64 = -2097086464;
	// ori r3,r3,5
	ctx.r3.u64 = ctx.r3.u64 | 5;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82fa76ac
	__restgprlr_21(ctx, base);
	return;
loc_82A0A760:
	// rlwinm r9,r26,0,16,14
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 0) & 0xFFFFFFFFFFFEFFFF;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82a0a8ec
	if (!ctx.cr6.eq) goto loc_82A0A8EC;
	// addi r9,r11,8
	ctx.r9.s64 = ctx.r11.s64 + 8;
	// lwzx r8,r10,r9
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// cmpw cr6,r28,r8
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x82a0a8ec
	if (!ctx.cr6.eq) goto loc_82A0A8EC;
	// lis r9,-31975
	ctx.r9.s64 = -2095513600;
	// lwzx r31,r10,r11
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// addi r22,r9,-12452
	ctx.r22.s64 = ctx.r9.s64 + -12452;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x831791a4
	ctx.lr = 0x82A0A790;
	__imp__RtlEnterCriticalSection(ctx, base);
	// rlwinm r25,r31,2,0,29
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r24,r30,10600
	ctx.r24.s64 = ctx.r30.s64 + 10600;
	// lwzx r11,r25,r24
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + ctx.r24.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82a0a8d0
	if (!ctx.cr6.eq) goto loc_82A0A8D0;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r27,2
	ctx.r4.s64 = ctx.r27.s64 + 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a0a628
	ctx.lr = 0x82A0A7C4;
	sub_82A0A628(ctx, base);
	// lwz r30,80(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82a0a8a4
	if (ctx.cr6.lt) goto loc_82A0A8A4;
	// lis r29,-32761
	ctx.r29.s64 = -2147024896;
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// beq cr6,0x82a0a814
	if (ctx.cr6.eq) goto loc_82A0A814;
	// addi r5,r30,16
	ctx.r5.s64 = ctx.r30.s64 + 16;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x83179404
	ctx.lr = 0x82A0A7F0;
	__imp__ObReferenceObjectByHandle(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x82a0a814
	if (!ctx.cr6.lt) goto loc_82A0A814;
	// bl 0x831795c4
	ctx.lr = 0x82A0A7FC;
	__imp__RtlNtStatusToDosError(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bgt cr6,0x82a0a80c
	if (ctx.cr6.gt) goto loc_82A0A80C;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x82a0a814
	goto loc_82A0A814;
loc_82A0A80C:
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// or r31,r11,r29
	ctx.r31.u64 = ctx.r11.u64 | ctx.r29.u64;
loc_82A0A814:
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt cr6,0x82a0a8a4
	if (ctx.cr6.lt) goto loc_82A0A8A4;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831796e4
	ctx.lr = 0x82A0A828;
	__imp__ObOpenObjectByPointer(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x82a0a84c
	if (!ctx.cr6.lt) goto loc_82A0A84C;
	// bl 0x831795c4
	ctx.lr = 0x82A0A834;
	__imp__RtlNtStatusToDosError(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bgt cr6,0x82a0a844
	if (ctx.cr6.gt) goto loc_82A0A844;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x82a0a84c
	goto loc_82A0A84C;
loc_82A0A844:
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// or r31,r11,r29
	ctx.r31.u64 = ctx.r11.u64 | ctx.r29.u64;
loc_82A0A84C:
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt cr6,0x82a0a8a4
	if (ctx.cr6.lt) goto loc_82A0A8A4;
	// stwx r30,r25,r24
	PPC_STORE_U32(ctx.r25.u32 + ctx.r24.u32, ctx.r30.u32);
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// rlwinm r10,r11,0,15,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82a0a8d8
	if (!ctx.cr6.eq) goto loc_82A0A8D8;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831792b4
	ctx.lr = 0x82A0A878;
	__imp__KeSetEvent(ctx, base);
	// lwz r3,16(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a0a8d8
	if (ctx.cr6.eq) goto loc_82A0A8D8;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x831792b4
	ctx.lr = 0x82A0A890;
	__imp__KeSetEvent(ctx, base);
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x831791b4
	ctx.lr = 0x82A0A898;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82fa76ac
	__restgprlr_21(ctx, base);
	return;
loc_82A0A8A4:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82a0a8d8
	if (ctx.cr6.eq) goto loc_82A0A8D8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a093b8
	ctx.lr = 0x82A0A8B4;
	sub_82A093B8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83179424
	ctx.lr = 0x82A0A8BC;
	__imp__ObDereferenceObject(ctx, base);
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x831791b4
	ctx.lr = 0x82A0A8C4;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82fa76ac
	__restgprlr_21(ctx, base);
	return;
loc_82A0A8D0:
	// lis r31,-31999
	ctx.r31.s64 = -2097086464;
	// ori r31,r31,3
	ctx.r31.u64 = ctx.r31.u64 | 3;
loc_82A0A8D8:
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x831791b4
	ctx.lr = 0x82A0A8E0;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82fa76ac
	__restgprlr_21(ctx, base);
	return;
loc_82A0A8EC:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82fa76ac
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A0A8FC"))) PPC_WEAK_FUNC(sub_82A0A8FC);
PPC_FUNC_IMPL(__imp__sub_82A0A8FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A0A900"))) PPC_WEAK_FUNC(sub_82A0A900);
PPC_FUNC_IMPL(__imp__sub_82A0A900) {
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
	// lis r11,-31975
	ctx.r11.s64 = -2095513600;
	// addi r30,r11,-12396
	ctx.r30.s64 = ctx.r11.s64 + -12396;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831791a4
	ctx.lr = 0x82A0A924;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lis r11,-31964
	ctx.r11.s64 = -2094792704;
	// addi r31,r11,29312
	ctx.r31.s64 = ctx.r11.s64 + 29312;
	// lwz r11,11248(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11248);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82a0a974
	if (!ctx.cr6.eq) goto loc_82A0A974;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,11248(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11248, ctx.r11.u32);
	// stw r10,11244(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11244, ctx.r10.u32);
	// sync 
	// lwz r3,11256(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11256);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a0a974
	if (ctx.cr6.eq) goto loc_82A0A974;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x831792b4
	ctx.lr = 0x82A0A964;
	__imp__KeSetEvent(ctx, base);
	// lwz r3,11256(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11256);
	// bl 0x83179424
	ctx.lr = 0x82A0A96C;
	__imp__ObDereferenceObject(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,11256(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11256, ctx.r11.u32);
loc_82A0A974:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831791b4
	ctx.lr = 0x82A0A97C;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
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

__attribute__((alias("__imp__sub_82A0A998"))) PPC_WEAK_FUNC(sub_82A0A998);
PPC_FUNC_IMPL(__imp__sub_82A0A998) {
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
	// lis r11,-31975
	ctx.r11.s64 = -2095513600;
	// addi r30,r11,-12396
	ctx.r30.s64 = ctx.r11.s64 + -12396;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831791a4
	ctx.lr = 0x82A0A9BC;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lis r10,-31964
	ctx.r10.s64 = -2094792704;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r31,r10,29312
	ctx.r31.s64 = ctx.r10.s64 + 29312;
	// addi r3,r31,11260
	ctx.r3.s64 = ctx.r31.s64 + 11260;
	// stw r11,11280(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11280, ctx.r11.u32);
	// bl 0x831793b4
	ctx.lr = 0x82A0A9D4;
	__imp__KeResetEvent(ctx, base);
	// lwz r3,11256(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11256);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a0a9e4
	if (ctx.cr6.eq) goto loc_82A0A9E4;
	// bl 0x831793b4
	ctx.lr = 0x82A0A9E4;
	__imp__KeResetEvent(ctx, base);
loc_82A0A9E4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831791b4
	ctx.lr = 0x82A0A9EC;
	__imp__RtlLeaveCriticalSection(ctx, base);
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

__attribute__((alias("__imp__sub_82A0AA04"))) PPC_WEAK_FUNC(sub_82A0AA04);
PPC_FUNC_IMPL(__imp__sub_82A0AA04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A0AA08"))) PPC_WEAK_FUNC(sub_82A0AA08);
PPC_FUNC_IMPL(__imp__sub_82A0AA08) {
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
	// lis r11,-31975
	ctx.r11.s64 = -2095513600;
	// addi r30,r11,-12396
	ctx.r30.s64 = ctx.r11.s64 + -12396;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831791a4
	ctx.lr = 0x82A0AA2C;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lis r11,-31964
	ctx.r11.s64 = -2094792704;
	// addi r31,r11,29312
	ctx.r31.s64 = ctx.r11.s64 + 29312;
	// lwz r11,11248(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11248);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82a0aa68
	if (!ctx.cr6.eq) goto loc_82A0AA68;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r31,11260
	ctx.r3.s64 = ctx.r31.s64 + 11260;
	// bl 0x831792b4
	ctx.lr = 0x82A0AA50;
	__imp__KeSetEvent(ctx, base);
	// lwz r3,11256(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11256);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a0aa68
	if (ctx.cr6.eq) goto loc_82A0AA68;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x831792b4
	ctx.lr = 0x82A0AA68;
	__imp__KeSetEvent(ctx, base);
loc_82A0AA68:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831791b4
	ctx.lr = 0x82A0AA70;
	__imp__RtlLeaveCriticalSection(ctx, base);
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

__attribute__((alias("__imp__sub_82A0AA88"))) PPC_WEAK_FUNC(sub_82A0AA88);
PPC_FUNC_IMPL(__imp__sub_82A0AA88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x82A0AA90;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31975
	ctx.r11.s64 = -2095513600;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r28,r11,-12396
	ctx.r28.s64 = ctx.r11.s64 + -12396;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x831791a4
	ctx.lr = 0x82A0AAAC;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lis r11,-31964
	ctx.r11.s64 = -2094792704;
	// addi r31,r11,29312
	ctx.r31.s64 = ctx.r11.s64 + 29312;
	// lwz r11,11248(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11248);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82a0ab14
	if (!ctx.cr6.eq) goto loc_82A0AB14;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x82a0aadc
	if (ctx.cr6.eq) goto loc_82A0AADC;
	// li r5,800
	ctx.r5.s64 = 800;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r31,11280
	ctx.r3.s64 = ctx.r31.s64 + 11280;
	// bl 0x82a75220
	ctx.lr = 0x82A0AAD8;
	sub_82A75220(ctx, base);
	// b 0x82a0aaec
	goto loc_82A0AAEC;
loc_82A0AADC:
	// lwz r11,11252(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11252);
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82a0ab14
	if (!ctx.cr6.eq) goto loc_82A0AB14;
loc_82A0AAEC:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r31,11260
	ctx.r3.s64 = ctx.r31.s64 + 11260;
	// bl 0x831792b4
	ctx.lr = 0x82A0AAFC;
	__imp__KeSetEvent(ctx, base);
	// lwz r3,11256(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11256);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a0ab14
	if (ctx.cr6.eq) goto loc_82A0AB14;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x831792b4
	ctx.lr = 0x82A0AB14;
	__imp__KeSetEvent(ctx, base);
loc_82A0AB14:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x831791b4
	ctx.lr = 0x82A0AB1C;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A0AB24"))) PPC_WEAK_FUNC(sub_82A0AB24);
PPC_FUNC_IMPL(__imp__sub_82A0AB24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A0AB28"))) PPC_WEAK_FUNC(sub_82A0AB28);
PPC_FUNC_IMPL(__imp__sub_82A0AB28) {
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
	// lis r11,-31975
	ctx.r11.s64 = -2095513600;
	// addi r30,r11,-12368
	ctx.r30.s64 = ctx.r11.s64 + -12368;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831791a4
	ctx.lr = 0x82A0AB4C;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lis r11,-31964
	ctx.r11.s64 = -2094792704;
	// addi r31,r11,29312
	ctx.r31.s64 = ctx.r11.s64 + 29312;
	// lwz r11,2164(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2164);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82a0abac
	if (!ctx.cr6.eq) goto loc_82A0ABAC;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,2164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2164, ctx.r11.u32);
	// stw r10,7952(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7952, ctx.r10.u32);
	// sync 
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r31,2168
	ctx.r3.s64 = ctx.r31.s64 + 2168;
	// bl 0x831792b4
	ctx.lr = 0x82A0AB84;
	__imp__KeSetEvent(ctx, base);
	// lwz r3,2184(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2184);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a0abac
	if (ctx.cr6.eq) goto loc_82A0ABAC;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x831792b4
	ctx.lr = 0x82A0AB9C;
	__imp__KeSetEvent(ctx, base);
	// lwz r3,2184(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2184);
	// bl 0x83179424
	ctx.lr = 0x82A0ABA4;
	__imp__ObDereferenceObject(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,2184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2184, ctx.r11.u32);
loc_82A0ABAC:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831791b4
	ctx.lr = 0x82A0ABB4;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,12204(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12204, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82A0ABD8"))) PPC_WEAK_FUNC(sub_82A0ABD8);
PPC_FUNC_IMPL(__imp__sub_82A0ABD8) {
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
	// lis r11,-31975
	ctx.r11.s64 = -2095513600;
	// addi r31,r11,-12368
	ctx.r31.s64 = ctx.r11.s64 + -12368;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831791a4
	ctx.lr = 0x82A0ABF8;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lis r9,-31964
	ctx.r9.s64 = -2094792704;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r9,29312
	ctx.r11.s64 = ctx.r9.s64 + 29312;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r3,r11,2168
	ctx.r3.s64 = ctx.r11.s64 + 2168;
	// stw r10,2208(r11)
	PPC_STORE_U32(ctx.r11.u32 + 2208, ctx.r10.u32);
	// stw r9,4992(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4992, ctx.r9.u32);
	// bl 0x831793b4
	ctx.lr = 0x82A0AC18;
	__imp__KeResetEvent(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831791b4
	ctx.lr = 0x82A0AC20;
	__imp__RtlLeaveCriticalSection(ctx, base);
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

__attribute__((alias("__imp__sub_82A0AC34"))) PPC_WEAK_FUNC(sub_82A0AC34);
PPC_FUNC_IMPL(__imp__sub_82A0AC34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A0AC38"))) PPC_WEAK_FUNC(sub_82A0AC38);
PPC_FUNC_IMPL(__imp__sub_82A0AC38) {
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
	// li r11,2736
	ctx.r11.s64 = 2736;
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// li r10,21076
	ctx.r10.s64 = 21076;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// mftb r9
	ctx.r9.u64 = __rdtsc();
	// lwz r8,0(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// std r9,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r9.u64);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x82a0ac74
	if (!ctx.cr6.eq) goto loc_82A0AC74;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// b 0x82a0ac78
	goto loc_82A0AC78;
loc_82A0AC74:
	// li r11,-1
	ctx.r11.s64 = -1;
loc_82A0AC78:
	// stw r4,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r4.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// li r3,5122
	ctx.r3.s64 = 5122;
	// bl 0x83178d24
	ctx.lr = 0x82A0AC8C;
	__imp__XamXStudioRequest(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A0AC9C"))) PPC_WEAK_FUNC(sub_82A0AC9C);
PPC_FUNC_IMPL(__imp__sub_82A0AC9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A0ACA0"))) PPC_WEAK_FUNC(sub_82A0ACA0);
PPC_FUNC_IMPL(__imp__sub_82A0ACA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x82A0ACA8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82a0acc8
	if (!ctx.cr6.eq) goto loc_82A0ACC8;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
loc_82A0ACC8:
	// lis r11,-31964
	ctx.r11.s64 = -2094792704;
	// addi r31,r11,29312
	ctx.r31.s64 = ctx.r11.s64 + 29312;
	// lwz r11,2164(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2164);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82a0acec
	if (!ctx.cr6.eq) goto loc_82A0ACEC;
	// lis r3,-31999
	ctx.r3.s64 = -2097086464;
	// ori r3,r3,2
	ctx.r3.u64 = ctx.r3.u64 | 2;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
loc_82A0ACEC:
	// lwz r11,7952(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7952);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82a0ad08
	if (!ctx.cr6.eq) goto loc_82A0AD08;
	// lis r3,-31999
	ctx.r3.s64 = -2097086464;
	// ori r3,r3,5
	ctx.r3.u64 = ctx.r3.u64 | 5;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
loc_82A0AD08:
	// lis r11,-31975
	ctx.r11.s64 = -2095513600;
	// addi r29,r11,-12608
	ctx.r29.s64 = ctx.r11.s64 + -12608;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x831791a4
	ctx.lr = 0x82A0AD18;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r11,132(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82a0ad88
	if (!ctx.cr6.eq) goto loc_82A0AD88;
	// lis r10,0
	ctx.r10.s64 = 0;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// ori r9,r10,59548
	ctx.r9.u64 = ctx.r10.u64 | 59548;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwzx r10,r31,r9
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// bne cr6,0x82a0ad44
	if (!ctx.cr6.eq) goto loc_82A0AD44;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82A0AD44:
	// lis r9,0
	ctx.r9.s64 = 0;
	// ori r8,r9,59556
	ctx.r8.u64 = ctx.r9.u64 | 59556;
	// stwx r11,r31,r8
	PPC_STORE_U32(ctx.r31.u32 + ctx.r8.u32, ctx.r11.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// bne cr6,0x82a0ad64
	if (!ctx.cr6.eq) goto loc_82A0AD64;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82A0AD64:
	// lis r10,0
	ctx.r10.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// ori r9,r10,59560
	ctx.r9.u64 = ctx.r10.u64 | 59560;
	// li r30,0
	ctx.r30.s64 = 0;
	// stwx r11,r31,r9
	PPC_STORE_U32(ctx.r31.u32 + ctx.r9.u32, ctx.r11.u32);
	// bl 0x831791b4
	ctx.lr = 0x82A0AD7C;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
loc_82A0AD88:
	// lis r30,-31999
	ctx.r30.s64 = -2097086464;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// ori r30,r30,11
	ctx.r30.u64 = ctx.r30.u64 | 11;
	// bl 0x831791b4
	ctx.lr = 0x82A0AD98;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A0ADA4"))) PPC_WEAK_FUNC(sub_82A0ADA4);
PPC_FUNC_IMPL(__imp__sub_82A0ADA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A0ADA8"))) PPC_WEAK_FUNC(sub_82A0ADA8);
PPC_FUNC_IMPL(__imp__sub_82A0ADA8) {
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
	// li r31,0
	ctx.r31.s64 = 0;
	// lis r30,-31963
	ctx.r30.s64 = -2094727168;
loc_82A0ADC4:
	// lwz r11,23764(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 23764);
	// add r3,r31,r11
	ctx.r3.u64 = ctx.r31.u64 + ctx.r11.u64;
	// bl 0x82a15d88
	ctx.lr = 0x82A0ADD0;
	sub_82A15D88(ctx, base);
	// addi r31,r31,1280
	ctx.r31.s64 = ctx.r31.s64 + 1280;
	// cmplwi cr6,r31,7680
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 7680, ctx.xer);
	// blt cr6,0x82a0adc4
	if (ctx.cr6.lt) goto loc_82A0ADC4;
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

__attribute__((alias("__imp__sub_82A0ADF4"))) PPC_WEAK_FUNC(sub_82A0ADF4);
PPC_FUNC_IMPL(__imp__sub_82A0ADF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A0ADF8"))) PPC_WEAK_FUNC(sub_82A0ADF8);
PPC_FUNC_IMPL(__imp__sub_82A0ADF8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r11,23764
	ctx.r7.s64 = ctx.r11.s64 + 23764;
loc_82A0AE04:
	// mfmsr r9
	ctx.r9.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r7
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r7.u32);
	ctx.r10.u64 = __builtin_bswap32(ctx.reserved.u32);
	// stwcx. r8,0,r7
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r7.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r8.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x82a0ae04
	if (!ctx.cr0.eq) goto loc_82A0AE04;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lis r4,8348
	ctx.r4.s64 = 547094528;
	// b 0x82691460
	sub_82691460(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A0AE30"))) PPC_WEAK_FUNC(sub_82A0AE30);
PPC_FUNC_IMPL(__imp__sub_82A0AE30) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A0AE34"))) PPC_WEAK_FUNC(sub_82A0AE34);
PPC_FUNC_IMPL(__imp__sub_82A0AE34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A0AE38"))) PPC_WEAK_FUNC(sub_82A0AE38);
PPC_FUNC_IMPL(__imp__sub_82A0AE38) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7674
	ctx.lr = 0x82A0AE40;
	__savegprlr_27(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31964
	ctx.r11.s64 = -2094792704;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r11,29308(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 29308);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82a0ae68
	if (!ctx.cr6.eq) goto loc_82A0AE68;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,65535
	ctx.r3.u64 = ctx.r3.u64 | 65535;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82fa76c4
	__restgprlr_27(ctx, base);
	return;
loc_82A0AE68:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lfs f0,11556(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 11556);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,-27108(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -27108);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,-25408(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -25408);
	ctx.f12.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f13,92(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// stfs f12,96(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// bne cr6,0x82a0aea4
	if (!ctx.cr6.eq) goto loc_82A0AEA4;
	// addi r30,r1,80
	ctx.r30.s64 = ctx.r1.s64 + 80;
loc_82A0AEA4:
	// lis r28,-31963
	ctx.r28.s64 = -2094727168;
	// lwz r11,23764(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 23764);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82a0aed4
	if (!ctx.cr6.eq) goto loc_82A0AED4;
	// lis r4,8348
	ctx.r4.s64 = 547094528;
	// li r3,7680
	ctx.r3.s64 = 7680;
	// bl 0x82691410
	ctx.lr = 0x82A0AEC0;
	sub_82691410(ctx, base);
	// stw r3,23764(r28)
	PPC_STORE_U32(ctx.r28.u32 + 23764, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a0aee4
	if (ctx.cr6.eq) goto loc_82A0AEE4;
	// bl 0x82a0ada8
	ctx.lr = 0x82A0AED0;
	sub_82A0ADA8(ctx, base);
	// lwz r11,23764(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 23764);
loc_82A0AED4:
	// li r27,0
	ctx.r27.s64 = 0;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r29,r29,48
	ctx.r29.s64 = ctx.r29.s64 + 48;
	// b 0x82a0aefc
	goto loc_82A0AEFC;
loc_82A0AEE4:
	// lis r27,-32761
	ctx.r27.s64 = -2147024896;
	// ori r27,r27,14
	ctx.r27.u64 = ctx.r27.u64 | 14;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82fa76c4
	__restgprlr_27(ctx, base);
	return;
loc_82A0AEF8:
	// lwz r11,23764(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 23764);
loc_82A0AEFC:
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// bne cr6,0x82a0af2c
	if (!ctx.cr6.eq) goto loc_82A0AF2C;
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
	// lfs f5,16(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	ctx.f5.f64 = double(temp.f32);
	// add r8,r31,r11
	ctx.r8.u64 = ctx.r31.u64 + ctx.r11.u64;
	// lfs f4,12(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,8(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82a15d98
	ctx.lr = 0x82A0AF28;
	sub_82A15D98(ctx, base);
	// b 0x82a0af34
	goto loc_82A0AF34;
loc_82A0AF2C:
	// add r3,r31,r11
	ctx.r3.u64 = ctx.r31.u64 + ctx.r11.u64;
	// bl 0x82a15d88
	ctx.lr = 0x82A0AF34;
	sub_82A15D88(ctx, base);
loc_82A0AF34:
	// addi r31,r31,1280
	ctx.r31.s64 = ctx.r31.s64 + 1280;
	// addi r29,r29,448
	ctx.r29.s64 = ctx.r29.s64 + 448;
	// cmplwi cr6,r31,7680
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 7680, ctx.xer);
	// blt cr6,0x82a0aef8
	if (ctx.cr6.lt) goto loc_82A0AEF8;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82fa76c4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A0AF50"))) PPC_WEAK_FUNC(sub_82A0AF50);
PPC_FUNC_IMPL(__imp__sub_82A0AF50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x82A0AF58;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31975
	ctx.r11.s64 = -2095513600;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r29,r11,-12368
	ctx.r29.s64 = ctx.r11.s64 + -12368;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x831791a4
	ctx.lr = 0x82A0AF70;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lis r11,-31964
	ctx.r11.s64 = -2094792704;
	// addi r31,r11,29312
	ctx.r31.s64 = ctx.r11.s64 + 29312;
	// lwz r11,2164(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2164);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82a0afd4
	if (!ctx.cr6.eq) goto loc_82A0AFD4;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x82a0af9c
	if (ctx.cr6.eq) goto loc_82A0AF9C;
	// lwz r11,2192(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2192);
	// stw r11,2196(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2196, ctx.r11.u32);
	// sync 
	// b 0x82a0afac
	goto loc_82A0AFAC;
loc_82A0AF9C:
	// lwz r11,2188(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2188);
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82a0afd4
	if (!ctx.cr6.eq) goto loc_82A0AFD4;
loc_82A0AFAC:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r31,2168
	ctx.r3.s64 = ctx.r31.s64 + 2168;
	// bl 0x831792b4
	ctx.lr = 0x82A0AFBC;
	__imp__KeSetEvent(ctx, base);
	// lwz r3,2184(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2184);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a0afd4
	if (ctx.cr6.eq) goto loc_82A0AFD4;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x831792b4
	ctx.lr = 0x82A0AFD4;
	__imp__KeSetEvent(ctx, base);
loc_82A0AFD4:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x831791b4
	ctx.lr = 0x82A0AFDC;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A0AFE4"))) PPC_WEAK_FUNC(sub_82A0AFE4);
PPC_FUNC_IMPL(__imp__sub_82A0AFE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A0AFE8"))) PPC_WEAK_FUNC(sub_82A0AFE8);
PPC_FUNC_IMPL(__imp__sub_82A0AFE8) {
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
	// lis r11,-31975
	ctx.r11.s64 = -2095513600;
	// addi r30,r11,-12368
	ctx.r30.s64 = ctx.r11.s64 + -12368;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831791a4
	ctx.lr = 0x82A0B00C;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lis r11,-31964
	ctx.r11.s64 = -2094792704;
	// addi r31,r11,29312
	ctx.r31.s64 = ctx.r11.s64 + 29312;
	// lwz r11,2164(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2164);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82a0b048
	if (!ctx.cr6.eq) goto loc_82A0B048;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r31,2168
	ctx.r3.s64 = ctx.r31.s64 + 2168;
	// bl 0x831792b4
	ctx.lr = 0x82A0B030;
	__imp__KeSetEvent(ctx, base);
	// lwz r3,2184(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2184);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a0b048
	if (ctx.cr6.eq) goto loc_82A0B048;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x831792b4
	ctx.lr = 0x82A0B048;
	__imp__KeSetEvent(ctx, base);
loc_82A0B048:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831791b4
	ctx.lr = 0x82A0B050;
	__imp__RtlLeaveCriticalSection(ctx, base);
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

__attribute__((alias("__imp__sub_82A0B068"))) PPC_WEAK_FUNC(sub_82A0B068);
PPC_FUNC_IMPL(__imp__sub_82A0B068) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lwz r9,23760(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 23760);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82a0b090
	if (ctx.cr6.eq) goto loc_82A0B090;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a0b090
	if (ctx.cr6.eq) goto loc_82A0B090;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// blr 
	return;
loc_82A0B090:
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r10,23760(r11)
	PPC_STORE_U32(ctx.r11.u32 + 23760, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A0B09C"))) PPC_WEAK_FUNC(sub_82A0B09C);
PPC_FUNC_IMPL(__imp__sub_82A0B09C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A0B0A0"))) PPC_WEAK_FUNC(sub_82A0B0A0);
PPC_FUNC_IMPL(__imp__sub_82A0B0A0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// lwz r11,23760(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 23760);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82A0B0B8"))) PPC_WEAK_FUNC(sub_82A0B0B8);
PPC_FUNC_IMPL(__imp__sub_82A0B0B8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A0B0BC"))) PPC_WEAK_FUNC(sub_82A0B0BC);
PPC_FUNC_IMPL(__imp__sub_82A0B0BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A0B0C0"))) PPC_WEAK_FUNC(sub_82A0B0C0);
PPC_FUNC_IMPL(__imp__sub_82A0B0C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,2736
	ctx.r11.s64 = 2736;
	// stw r3,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r3.u32);
	// li r10,21076
	ctx.r10.s64 = 21076;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// stw r10,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// mftb r9
	ctx.r9.u64 = __rdtsc();
	// lwz r8,8(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// std r9,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r9.u64);
	// stw r7,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r7.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r6,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r6.u32);
	// li r3,5121
	ctx.r3.s64 = 5121;
	// stw r8,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r8.u32);
	// bl 0x83178d24
	ctx.lr = 0x82A0B10C;
	__imp__XamXStudioRequest(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A0B11C"))) PPC_WEAK_FUNC(sub_82A0B11C);
PPC_FUNC_IMPL(__imp__sub_82A0B11C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A0B120"))) PPC_WEAK_FUNC(sub_82A0B120);
PPC_FUNC_IMPL(__imp__sub_82A0B120) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7640
	ctx.lr = 0x82A0B128;
	__savegprlr_14(ctx, base);
	// stwu r1,-528(r1)
	ea = -528 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// ld r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 8);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// stw r10,604(r1)
	PPC_STORE_U32(ctx.r1.u32 + 604, ctx.r10.u32);
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// rlwinm r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// stw r3,548(r1)
	PPC_STORE_U32(ctx.r1.u32 + 548, ctx.r3.u32);
	// stw r6,572(r1)
	PPC_STORE_U32(ctx.r1.u32 + 572, ctx.r6.u32);
	// stw r7,580(r1)
	PPC_STORE_U32(ctx.r1.u32 + 580, ctx.r7.u32);
	// cmpldi cr6,r10,0
	ctx.cr6.compare<uint64_t>(ctx.r10.u64, 0, ctx.xer);
	// stw r8,588(r1)
	PPC_STORE_U32(ctx.r1.u32 + 588, ctx.r8.u32);
	// stw r9,596(r1)
	PPC_STORE_U32(ctx.r1.u32 + 596, ctx.r9.u32);
	// beq cr6,0x82a0b2fc
	if (ctx.cr6.eq) goto loc_82A0B2FC;
	// bl 0x83178d64
	ctx.lr = 0x82A0B160;
	__imp__XamGetCurrentTitleId(ctx, base);
	// lhz r10,814(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 814);
	// lhz r11,822(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 822);
	// mr r9,r31
	ctx.r9.u64 = ctx.r31.u64;
	// extsh r4,r10
	ctx.r4.s64 = ctx.r10.s16;
	// ld r7,824(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 824);
	// lhz r5,806(r1)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r1.u32 + 806);
	// extsh r6,r11
	ctx.r6.s64 = ctx.r11.s16;
	// stw r4,356(r1)
	PPC_STORE_U32(ctx.r1.u32 + 356, ctx.r4.u32);
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// extsh r11,r5
	ctx.r11.s64 = ctx.r5.s16;
	// stw r6,352(r1)
	PPC_STORE_U32(ctx.r1.u32 + 352, ctx.r6.u32);
	// lhz r5,798(r1)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r1.u32 + 798);
	// lis r8,8274
	ctx.r8.s64 = 542244864;
	// std r7,368(r1)
	PPC_STORE_U64(ctx.r1.u32 + 368, ctx.r7.u64);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// stw r11,360(r1)
	PPC_STORE_U32(ctx.r1.u32 + 360, ctx.r11.u32);
	// extsh r11,r5
	ctx.r11.s64 = ctx.r5.s16;
	// lwz r6,836(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 836);
	// ori r8,r8,21504
	ctx.r8.u64 = ctx.r8.u64 | 21504;
	// lhz r31,766(r1)
	ctx.r31.u64 = PPC_LOAD_U16(ctx.r1.u32 + 766);
	// lhz r30,750(r1)
	ctx.r30.u64 = PPC_LOAD_U16(ctx.r1.u32 + 750);
	// lbz r29,735(r1)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r1.u32 + 735);
	// lbz r28,727(r1)
	ctx.r28.u64 = PPC_LOAD_U8(ctx.r1.u32 + 727);
	// lwz r27,756(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 756);
	// lwz r26,740(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 740);
	// lhz r4,790(r1)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r1.u32 + 790);
	// lhz r3,782(r1)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r1.u32 + 782);
	// lhz r5,774(r1)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r1.u32 + 774);
	// extsh r4,r4
	ctx.r4.s64 = ctx.r4.s16;
	// lbz r25,719(r1)
	ctx.r25.u64 = PPC_LOAD_U8(ctx.r1.u32 + 719);
	// extsh r3,r3
	ctx.r3.s64 = ctx.r3.s16;
	// lbz r24,711(r1)
	ctx.r24.u64 = PPC_LOAD_U8(ctx.r1.u32 + 711);
	// extsh r5,r5
	ctx.r5.s64 = ctx.r5.s16;
	// lbz r23,703(r1)
	ctx.r23.u64 = PPC_LOAD_U8(ctx.r1.u32 + 703);
	// stw r6,348(r1)
	PPC_STORE_U32(ctx.r1.u32 + 348, ctx.r6.u32);
	// li r6,100
	ctx.r6.s64 = 100;
	// stw r11,308(r1)
	PPC_STORE_U32(ctx.r1.u32 + 308, ctx.r11.u32);
	// lwz r19,356(r1)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r1.u32 + 356);
	// stw r9,356(r1)
	PPC_STORE_U32(ctx.r1.u32 + 356, ctx.r9.u32);
	// lwz r20,352(r1)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r1.u32 + 352);
	// ld r17,368(r1)
	ctx.r17.u64 = PPC_LOAD_U64(ctx.r1.u32 + 368);
	// lwz r16,360(r1)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r1.u32 + 360);
	// stw r10,360(r1)
	PPC_STORE_U32(ctx.r1.u32 + 360, ctx.r10.u32);
	// stw r8,352(r1)
	PPC_STORE_U32(ctx.r1.u32 + 352, ctx.r8.u32);
	// stw r7,368(r1)
	PPC_STORE_U32(ctx.r1.u32 + 368, ctx.r7.u32);
	// stw r4,300(r1)
	PPC_STORE_U32(ctx.r1.u32 + 300, ctx.r4.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r3,292(r1)
	PPC_STORE_U32(ctx.r1.u32 + 292, ctx.r3.u32);
	// stw r5,284(r1)
	PPC_STORE_U32(ctx.r1.u32 + 284, ctx.r5.u32);
	// li r5,2
	ctx.r5.s64 = 2;
	// stw r31,276(r1)
	PPC_STORE_U32(ctx.r1.u32 + 276, ctx.r31.u32);
	// stw r27,268(r1)
	PPC_STORE_U32(ctx.r1.u32 + 268, ctx.r27.u32);
	// stw r30,260(r1)
	PPC_STORE_U32(ctx.r1.u32 + 260, ctx.r30.u32);
	// stw r26,252(r1)
	PPC_STORE_U32(ctx.r1.u32 + 252, ctx.r26.u32);
	// stw r29,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r29.u32);
	// stw r28,236(r1)
	PPC_STORE_U32(ctx.r1.u32 + 236, ctx.r28.u32);
	// lbz r22,695(r1)
	ctx.r22.u64 = PPC_LOAD_U8(ctx.r1.u32 + 695);
	// lbz r21,687(r1)
	ctx.r21.u64 = PPC_LOAD_U8(ctx.r1.u32 + 687);
	// lbz r18,679(r1)
	ctx.r18.u64 = PPC_LOAD_U8(ctx.r1.u32 + 679);
	// lbz r15,671(r1)
	ctx.r15.u64 = PPC_LOAD_U8(ctx.r1.u32 + 671);
	// lbz r14,663(r1)
	ctx.r14.u64 = PPC_LOAD_U8(ctx.r1.u32 + 663);
	// lbz r10,655(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 655);
	// lbz r9,647(r1)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r1.u32 + 647);
	// lhz r8,638(r1)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r1.u32 + 638);
	// lwz r7,628(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 628);
	// lwz r11,620(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 620);
	// lwz r31,612(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 612);
	// lwz r30,604(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 604);
	// lwz r29,596(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 596);
	// lwz r28,588(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 588);
	// lwz r27,580(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 580);
	// lwz r26,572(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 572);
	// lwz r3,548(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 548);
	// std r17,336(r1)
	PPC_STORE_U64(ctx.r1.u32 + 336, ctx.r17.u64);
	// stw r20,332(r1)
	PPC_STORE_U32(ctx.r1.u32 + 332, ctx.r20.u32);
	// stw r19,324(r1)
	PPC_STORE_U32(ctx.r1.u32 + 324, ctx.r19.u32);
	// stw r16,316(r1)
	PPC_STORE_U32(ctx.r1.u32 + 316, ctx.r16.u32);
	// stw r25,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r25.u32);
	// stw r24,220(r1)
	PPC_STORE_U32(ctx.r1.u32 + 220, ctx.r24.u32);
	// stw r23,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r23.u32);
	// stw r10,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r10.u32);
	// stw r9,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r9.u32);
	// stw r8,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r8.u32);
	// stw r7,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r7.u32);
	// lwz r10,360(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 360);
	// lwz r9,356(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 356);
	// lwz r8,352(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 352);
	// lwz r7,368(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 368);
	// stw r22,204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 204, ctx.r22.u32);
	// stw r21,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r21.u32);
	// stw r18,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r18.u32);
	// stw r15,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r15.u32);
	// stw r14,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r14.u32);
	// stw r30,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r30.u32);
	// stw r29,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r29.u32);
	// stw r11,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r11.u32);
	// stw r31,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r31.u32);
	// stw r28,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r28.u32);
	// stw r27,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r27.u32);
	// stw r26,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r26.u32);
	// bl 0x83179614
	ctx.lr = 0x82A0B2F4;
	__imp__EtxProducerLog(ctx, base);
	// addi r1,r1,528
	ctx.r1.s64 = ctx.r1.s64 + 528;
	// b 0x82fa7690
	__restgprlr_14(ctx, base);
	return;
loc_82A0B2FC:
	// lis r3,16389
	ctx.r3.s64 = 1074069504;
	// ori r3,r3,2
	ctx.r3.u64 = ctx.r3.u64 | 2;
	// addi r1,r1,528
	ctx.r1.s64 = ctx.r1.s64 + 528;
	// b 0x82fa7690
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A0B30C"))) PPC_WEAK_FUNC(sub_82A0B30C);
PPC_FUNC_IMPL(__imp__sub_82A0B30C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A0B310"))) PPC_WEAK_FUNC(sub_82A0B310);
PPC_FUNC_IMPL(__imp__sub_82A0B310) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7668
	ctx.lr = 0x82A0B318;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31964
	ctx.r11.s64 = -2094792704;
	// li r25,0
	ctx.r25.s64 = 0;
	// addi r31,r11,29312
	ctx.r31.s64 = ctx.r11.s64 + 29312;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r11,29312(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 29312);
	// mr r24,r25
	ctx.r24.u64 = ctx.r25.u64;
	// mr r27,r25
	ctx.r27.u64 = ctx.r25.u64;
	// rlwinm r11,r11,0,22,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x3F8;
	// rlwinm r11,r11,0,28,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFE0F;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82a0b35c
	if (!ctx.cr6.eq) goto loc_82A0B35C;
	// lis r3,-31999
	ctx.r3.s64 = -2097086464;
	// ori r3,r3,5
	ctx.r3.u64 = ctx.r3.u64 | 5;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82fa76b8
	__restgprlr_24(ctx, base);
	return;
loc_82A0B35C:
	// rlwinm r11,r30,0,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0xFFFFFFF8;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a0b378
	if (ctx.cr6.eq) goto loc_82A0B378;
loc_82A0B368:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82fa76b8
	__restgprlr_24(ctx, base);
	return;
loc_82A0B378:
	// rlwinm r26,r30,0,29,29
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x82a0b390
	if (ctx.cr6.eq) goto loc_82A0B390;
	// bl 0x82c463a0
	ctx.lr = 0x82A0B388;
	sub_82C463A0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82a0b368
	if (ctx.cr6.eq) goto loc_82A0B368;
loc_82A0B390:
	// lis r11,-31975
	ctx.r11.s64 = -2095513600;
	// addi r28,r11,-12368
	ctx.r28.s64 = ctx.r11.s64 + -12368;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x831791a4
	ctx.lr = 0x82A0B3A0;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r11,2164(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2164);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82a0b430
	if (!ctx.cr6.eq) goto loc_82A0B430;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82a0b3dc
	if (ctx.cr6.eq) goto loc_82A0B3DC;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r5,r31,2184
	ctx.r5.s64 = ctx.r31.s64 + 2184;
	// lwz r4,2068(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2068);
	// bl 0x83179404
	ctx.lr = 0x82A0B3C8;
	__imp__ObReferenceObjectByHandle(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x82a0b3dc
	if (!ctx.cr6.lt) goto loc_82A0B3DC;
	// lis r24,-32761
	ctx.r24.s64 = -2147024896;
	// ori r24,r24,87
	ctx.r24.u64 = ctx.r24.u64 | 87;
	// b 0x82a0b438
	goto loc_82A0B438;
loc_82A0B3DC:
	// li r5,176
	ctx.r5.s64 = 176;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,7776
	ctx.r3.s64 = ctx.r31.s64 + 7776;
	// bl 0x82fa7cf0
	ctx.lr = 0x82A0B3EC;
	sub_82FA7CF0(ctx, base);
	// li r5,5568
	ctx.r5.s64 = 5568;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,2208
	ctx.r3.s64 = ctx.r31.s64 + 2208;
	// bl 0x82fa7cf0
	ctx.lr = 0x82A0B3FC;
	sub_82FA7CF0(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// rlwinm r10,r30,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x2;
	// stw r11,2164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2164, ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82a0b418
	if (ctx.cr6.eq) goto loc_82A0B418;
	// mr r27,r11
	ctx.r27.u64 = ctx.r11.u64;
	// stw r11,7952(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7952, ctx.r11.u32);
loc_82A0B418:
	// stw r30,2188(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2188, ctx.r30.u32);
	// sync 
	// stw r11,10528(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10528, ctx.r11.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82a0af50
	ctx.lr = 0x82A0B42C;
	sub_82A0AF50(ctx, base);
	// b 0x82a0b438
	goto loc_82A0B438;
loc_82A0B430:
	// lis r24,-32761
	ctx.r24.s64 = -2147024896;
	// ori r24,r24,1247
	ctx.r24.u64 = ctx.r24.u64 | 1247;
loc_82A0B438:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x831791b4
	ctx.lr = 0x82A0B440;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// beq cr6,0x82a0b46c
	if (ctx.cr6.eq) goto loc_82A0B46C;
	// lis r11,-31975
	ctx.r11.s64 = -2095513600;
	// addi r30,r11,-12608
	ctx.r30.s64 = ctx.r11.s64 + -12608;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831791a4
	ctx.lr = 0x82A0B458;
	__imp__RtlEnterCriticalSection(ctx, base);
	// addis r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 65536;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r25,-5980(r11)
	PPC_STORE_U32(ctx.r11.u32 + -5980, ctx.r25.u32);
	// stw r25,-5976(r11)
	PPC_STORE_U32(ctx.r11.u32 + -5976, ctx.r25.u32);
	// bl 0x831791b4
	ctx.lr = 0x82A0B46C;
	__imp__RtlLeaveCriticalSection(ctx, base);
loc_82A0B46C:
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// blt cr6,0x82a0b4a4
	if (ctx.cr6.lt) goto loc_82A0B4A4;
	// lwz r11,10632(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10632);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82a0b4a4
	if (ctx.cr6.eq) goto loc_82A0B4A4;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// bne cr6,0x82a0b49c
	if (!ctx.cr6.eq) goto loc_82A0B49C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r11,r11,0,22,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x200;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a0b4a0
	if (ctx.cr6.eq) goto loc_82A0B4A0;
loc_82A0B49C:
	// li r3,128
	ctx.r3.s64 = 128;
loc_82A0B4A0:
	// bl 0x82a10b68
	ctx.lr = 0x82A0B4A4;
	sub_82A10B68(ctx, base);
loc_82A0B4A4:
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82fa76b8
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A0B4B0"))) PPC_WEAK_FUNC(sub_82A0B4B0);
PPC_FUNC_IMPL(__imp__sub_82A0B4B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7670
	ctx.lr = 0x82A0B4B8;
	__savegprlr_26(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82a0b4d8
	if (!ctx.cr6.eq) goto loc_82A0B4D8;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82fa76c0
	__restgprlr_26(ctx, base);
	return;
loc_82A0B4D8:
	// lis r11,-31964
	ctx.r11.s64 = -2094792704;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r31,r11,29312
	ctx.r31.s64 = ctx.r11.s64 + 29312;
	// lis r11,-31975
	ctx.r11.s64 = -2095513600;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// lis r10,-32768
	ctx.r10.s64 = -2147483648;
	// addi r28,r11,-12368
	ctx.r28.s64 = ctx.r11.s64 + -12368;
	// ori r27,r10,10
	ctx.r27.u64 = ctx.r10.u64 | 10;
	// lwz r11,2164(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2164);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82a0b694
	if (ctx.cr6.eq) goto loc_82A0B694;
	// lwz r11,124(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82a0b688
	if (ctx.cr6.eq) goto loc_82A0B688;
	// lwz r11,2188(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2188);
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x82a0b550
	if (ctx.cr6.eq) goto loc_82A0B550;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x82a0b530
	if (ctx.cr6.eq) goto loc_82A0B530;
	// cmplwi cr6,r3,8000
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 8000, ctx.xer);
	// ble cr6,0x82a0b550
	if (!ctx.cr6.gt) goto loc_82A0B550;
loc_82A0B530:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r11,r11,0,4,4
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8000000;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a0b54c
	if (ctx.cr6.eq) goto loc_82A0B54C;
	// lis r3,0
	ctx.r3.s64 = 0;
	// ori r3,r3,60000
	ctx.r3.u64 = ctx.r3.u64 | 60000;
	// b 0x82a0b550
	goto loc_82A0B550;
loc_82A0B54C:
	// li r3,8000
	ctx.r3.s64 = 8000;
loc_82A0B550:
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x82a0b56c
	if (ctx.cr6.eq) goto loc_82A0B56C;
	// clrldi r11,r3,32
	ctx.r11.u64 = ctx.r3.u64 & 0xFFFFFFFF;
	// addi r7,r1,88
	ctx.r7.s64 = ctx.r1.s64 + 88;
	// mulli r10,r11,-10000
	ctx.r10.s64 = ctx.r11.s64 * -10000;
	// std r10,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r10.u64);
loc_82A0B56C:
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,3
	ctx.r4.s64 = 3;
	// addi r3,r31,2168
	ctx.r3.s64 = ctx.r31.s64 + 2168;
	// bl 0x83179414
	ctx.lr = 0x82A0B580;
	__imp__KeWaitForSingleObject(ctx, base);
	// cmpwi cr6,r3,258
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 258, ctx.xer);
	// beq cr6,0x82a0b680
	if (ctx.cr6.eq) goto loc_82A0B680;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x831791a4
	ctx.lr = 0x82A0B590;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r11,2196(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2196);
	// addi r10,r31,2208
	ctx.r10.s64 = ctx.r31.s64 + 2208;
	// mulli r11,r11,2784
	ctx.r11.s64 = ctx.r11.s64 * 2784;
	// add r30,r11,r10
	ctx.r30.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82a0b5fc
	if (!ctx.cr6.eq) goto loc_82A0B5FC;
	// li r5,2736
	ctx.r5.s64 = 2736;
	// addi r4,r30,32
	ctx.r4.s64 = ctx.r30.s64 + 32;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82a75220
	ctx.lr = 0x82A0B5BC;
	sub_82A75220(ctx, base);
	// stw r29,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r29.u32);
	// mftb r11
	ctx.r11.u64 = __rdtsc();
	// lwz r10,2768(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2768);
	// rotlwi r9,r11,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lis r8,15
	ctx.r8.s64 = 983040;
	// subf r7,r10,r9
	ctx.r7.s64 = ctx.r9.s64 - ctx.r10.s64;
	// ori r6,r8,16960
	ctx.r6.u64 = ctx.r8.u64 | 16960;
	// lis r5,762
	ctx.r5.s64 = 49938432;
	// clrldi r4,r7,32
	ctx.r4.u64 = ctx.r7.u64 & 0xFFFFFFFF;
	// ori r3,r5,61568
	ctx.r3.u64 = ctx.r5.u64 | 61568;
	// mulld r11,r4,r6
	ctx.r11.s64 = ctx.r4.s64 * ctx.r6.s64;
	// divd r10,r11,r3
	ctx.r10.s64 = ctx.r11.s64 / ctx.r3.s64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r10,12204(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12204, ctx.r10.u32);
	// bl 0x831791b4
	ctx.lr = 0x82A0B5F8;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// b 0x82a0b6a0
	goto loc_82A0B6A0;
loc_82A0B5FC:
	// lwz r10,124(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82a0b620
	if (!ctx.cr6.eq) goto loc_82A0B620;
	// lis r11,-32761
	ctx.r11.s64 = -2147024896;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// ori r10,r11,1167
	ctx.r10.u64 = ctx.r11.u64 | 1167;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// bl 0x831791b4
	ctx.lr = 0x82A0B61C;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// b 0x82a0b6a0
	goto loc_82A0B6A0;
loc_82A0B620:
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x82a0b640
	if (!ctx.cr6.eq) goto loc_82A0B640;
	// lis r11,-31999
	ctx.r11.s64 = -2097086464;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// ori r10,r11,11
	ctx.r10.u64 = ctx.r11.u64 | 11;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// bl 0x831791b4
	ctx.lr = 0x82A0B63C;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// b 0x82a0b6a0
	goto loc_82A0B6A0;
loc_82A0B640:
	// lwz r11,2188(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2188);
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a0b668
	if (ctx.cr6.eq) goto loc_82A0B668;
	// lis r11,-32761
	ctx.r11.s64 = -2147024896;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// ori r10,r11,1167
	ctx.r10.u64 = ctx.r11.u64 | 1167;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// bl 0x831791b4
	ctx.lr = 0x82A0B664;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// b 0x82a0b6a0
	goto loc_82A0B6A0;
loc_82A0B668:
	// lis r11,-31999
	ctx.r11.s64 = -2097086464;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// ori r10,r11,1
	ctx.r10.u64 = ctx.r11.u64 | 1;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// bl 0x831791b4
	ctx.lr = 0x82A0B67C;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// b 0x82a0b6a0
	goto loc_82A0B6A0;
loc_82A0B680:
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// b 0x82a0b6a0
	goto loc_82A0B6A0;
loc_82A0B688:
	// lis r11,-32761
	ctx.r11.s64 = -2147024896;
	// ori r10,r11,1167
	ctx.r10.u64 = ctx.r11.u64 | 1167;
	// b 0x82a0b69c
	goto loc_82A0B69C;
loc_82A0B694:
	// lis r11,-31999
	ctx.r11.s64 = -2097086464;
	// ori r10,r11,2
	ctx.r10.u64 = ctx.r11.u64 | 2;
loc_82A0B69C:
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
loc_82A0B6A0:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x831791a4
	ctx.lr = 0x82A0B6A8;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpw cr6,r11,r27
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r27.s32, ctx.xer);
	// beq cr6,0x82a0b6cc
	if (ctx.cr6.eq) goto loc_82A0B6CC;
	// lwz r3,2184(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2184);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a0b6c4
	if (ctx.cr6.eq) goto loc_82A0B6C4;
	// bl 0x831793b4
	ctx.lr = 0x82A0B6C4;
	__imp__KeResetEvent(ctx, base);
loc_82A0B6C4:
	// addi r3,r31,2168
	ctx.r3.s64 = ctx.r31.s64 + 2168;
	// bl 0x831793b4
	ctx.lr = 0x82A0B6CC;
	__imp__KeResetEvent(ctx, base);
loc_82A0B6CC:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x831791b4
	ctx.lr = 0x82A0B6D4;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x82a0b6f4
	if (ctx.cr6.lt) goto loc_82A0B6F4;
	// lwz r11,10632(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10632);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82a0b6f4
	if (ctx.cr6.eq) goto loc_82A0B6F4;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82a0d480
	ctx.lr = 0x82A0B6F4;
	sub_82A0D480(ctx, base);
loc_82A0B6F4:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82a0ac38
	ctx.lr = 0x82A0B700;
	sub_82A0AC38(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x82a0b720
	if (ctx.cr6.lt) goto loc_82A0B720;
	// lwz r11,10632(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10632);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82a0b720
	if (ctx.cr6.eq) goto loc_82A0B720;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82a129a8
	ctx.lr = 0x82A0B720;
	sub_82A129A8(ctx, base);
loc_82A0B720:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82fa76c0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A0B72C"))) PPC_WEAK_FUNC(sub_82A0B72C);
PPC_FUNC_IMPL(__imp__sub_82A0B72C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A0B730"))) PPC_WEAK_FUNC(sub_82A0B730);
PPC_FUNC_IMPL(__imp__sub_82A0B730) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7664
	ctx.lr = 0x82A0B738;
	__savegprlr_23(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// li r5,2688
	ctx.r5.s64 = 2688;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82a75988
	ctx.lr = 0x82A0B754;
	sub_82A75988(ctx, base);
	// li r11,6
	ctx.r11.s64 = 6;
	// addi r10,r31,4
	ctx.r10.s64 = ctx.r31.s64 + 4;
	// addi r7,r29,136
	ctx.r7.s64 = ctx.r29.s64 + 136;
	// addi r6,r29,16
	ctx.r6.s64 = ctx.r29.s64 + 16;
	// li r4,12
	ctx.r4.s64 = 12;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// lis r11,-31964
	ctx.r11.s64 = -2094792704;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r8,r11,29312
	ctx.r8.s64 = ctx.r11.s64 + 29312;
loc_82A0B77C:
	// lwz r11,-24(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + -24);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82a0b7dc
	if (!ctx.cr6.eq) goto loc_82A0B7DC;
	// stw r5,-4(r10)
	PPC_STORE_U32(ctx.r10.u32 + -4, ctx.r5.u32);
	// lvx128 v63,r0,r6
	simd::store_shuffled(ctx.v63, simd::load_and_shuffle(base + ((ctx.r6.u32) & ~0xF), VectorMaskL));
	// stvx128 v63,r10,r4
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32 + ctx.r4.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lwz r11,0(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a0b7b4
	if (ctx.cr6.eq) goto loc_82A0B7B4;
	// lis r9,0
	ctx.r9.s64 = 0;
	// ori r3,r9,59548
	ctx.r3.u64 = ctx.r9.u64 | 59548;
	// lwzx r9,r8,r3
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r3.u32);
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// b 0x82a0b7b8
	goto loc_82A0B7B8;
loc_82A0B7B4:
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
loc_82A0B7B8:
	// lis r3,0
	ctx.r3.s64 = 0;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// ori r9,r3,59552
	ctx.r9.u64 = ctx.r3.u64 | 59552;
	// lwzx r9,r8,r9
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82a0b7dc
	if (ctx.cr6.gt) goto loc_82A0B7DC;
	// lis r9,0
	ctx.r9.s64 = 0;
	// ori r3,r9,59552
	ctx.r3.u64 = ctx.r9.u64 | 59552;
	// stwx r11,r8,r3
	PPC_STORE_U32(ctx.r8.u32 + ctx.r3.u32, ctx.r11.u32);
loc_82A0B7DC:
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// addi r6,r6,16
	ctx.r6.s64 = ctx.r6.s64 + 16;
	// addi r10,r10,448
	ctx.r10.s64 = ctx.r10.s64 + 448;
	// bdnz 0x82a0b77c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82A0B77C;
	// li r24,2
	ctx.r24.s64 = 2;
	// addi r27,r29,208
	ctx.r27.s64 = ctx.r29.s64 + 208;
	// mr r23,r24
	ctx.r23.u64 = ctx.r24.u64;
loc_82A0B7F8:
	// lwz r11,-24(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + -24);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82a0b954
	if (!ctx.cr6.eq) goto loc_82A0B954;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mr r25,r24
	ctx.r25.u64 = ctx.r24.u64;
	// addi r29,r11,-1
	ctx.r29.s64 = ctx.r11.s64 + -1;
	// mulli r11,r29,448
	ctx.r11.s64 = ctx.r29.s64 * 448;
	// stwx r24,r11,r31
	PPC_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r24.u32);
	// add r28,r11,r31
	ctx.r28.u64 = ctx.r11.u64 + ctx.r31.u64;
loc_82A0B81C:
	// li r5,320
	ctx.r5.s64 = 320;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r3,r28,32
	ctx.r3.s64 = ctx.r28.s64 + 32;
	// bl 0x82a75220
	ctx.lr = 0x82A0B82C;
	sub_82A75220(ctx, base);
	// li r5,80
	ctx.r5.s64 = 80;
	// addi r4,r26,328
	ctx.r4.s64 = ctx.r26.s64 + 328;
	// addi r3,r28,352
	ctx.r3.s64 = ctx.r28.s64 + 352;
	// bl 0x82a75220
	ctx.lr = 0x82A0B83C;
	sub_82A75220(ctx, base);
	// lwz r11,324(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 324);
	// stw r11,432(r28)
	PPC_STORE_U32(ctx.r28.u32 + 432, ctx.r11.u32);
	// bl 0x82a3df00
	ctx.lr = 0x82A0B848;
	sub_82A3DF00(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82a0b94c
	if (ctx.cr6.eq) goto loc_82A0B94C;
	// mulli r11,r29,28
	ctx.r11.s64 = ctx.r29.s64 * 28;
	// vspltisw128 v62,0
	_mm_store_si128((__m128i*)ctx.v62.u32, _mm_set1_epi32(int(0x0)));
	// mulli r10,r29,112
	ctx.r10.s64 = ctx.r29.s64 * 112;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// addi r10,r10,88
	ctx.r10.s64 = ctx.r10.s64 + 88;
	// rlwinm r8,r11,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r6,r10,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// addi r7,r10,1
	ctx.r7.s64 = ctx.r10.s64 + 1;
	// addi r5,r11,12
	ctx.r5.s64 = ctx.r11.s64 + 12;
	// stvx128 v62,r8,r31
	_mm_store_si128((__m128i*)(base + ((ctx.r8.u32 + ctx.r31.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v62.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// rlwinm r4,r9,4,0,27
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r3,r10,12
	ctx.r3.s64 = ctx.r10.s64 + 12;
	// stwx r30,r6,r31
	PPC_STORE_U32(ctx.r6.u32 + ctx.r31.u32, ctx.r30.u32);
	// rlwinm r9,r7,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r11,13
	ctx.r8.s64 = ctx.r11.s64 + 13;
	// rlwinm r7,r5,4,0,27
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r6,r10,13
	ctx.r6.s64 = ctx.r10.s64 + 13;
	// stvx128 v62,r4,r31
	_mm_store_si128((__m128i*)(base + ((ctx.r4.u32 + ctx.r31.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v62.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// rlwinm r5,r3,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r3,r8,4,0,27
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 4) & 0xFFFFFFF0;
	// stwx r30,r9,r31
	PPC_STORE_U32(ctx.r9.u32 + ctx.r31.u32, ctx.r30.u32);
	// rlwinm r8,r6,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r4,r11,14
	ctx.r4.s64 = ctx.r11.s64 + 14;
	// stvx128 v62,r7,r31
	_mm_store_si128((__m128i*)(base + ((ctx.r7.u32 + ctx.r31.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v62.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r9,r10,14
	ctx.r9.s64 = ctx.r10.s64 + 14;
	// stwx r30,r5,r31
	PPC_STORE_U32(ctx.r5.u32 + ctx.r31.u32, ctx.r30.u32);
	// addi r7,r11,15
	ctx.r7.s64 = ctx.r11.s64 + 15;
	// stvx128 v62,r3,r31
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32 + ctx.r31.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v62.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// rlwinm r6,r4,4,0,27
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r5,r10,15
	ctx.r5.s64 = ctx.r10.s64 + 15;
	// stwx r30,r8,r31
	PPC_STORE_U32(ctx.r8.u32 + ctx.r31.u32, ctx.r30.u32);
	// rlwinm r4,r9,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r3,r11,16
	ctx.r3.s64 = ctx.r11.s64 + 16;
	// rlwinm r9,r7,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r8,r10,16
	ctx.r8.s64 = ctx.r10.s64 + 16;
	// stvx128 v62,r6,r31
	_mm_store_si128((__m128i*)(base + ((ctx.r6.u32 + ctx.r31.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v62.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// rlwinm r7,r5,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r5,r3,4,0,27
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 4) & 0xFFFFFFF0;
	// stwx r30,r4,r31
	PPC_STORE_U32(ctx.r4.u32 + ctx.r31.u32, ctx.r30.u32);
	// rlwinm r3,r8,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r6,r11,17
	ctx.r6.s64 = ctx.r11.s64 + 17;
	// stvx128 v62,r9,r31
	_mm_store_si128((__m128i*)(base + ((ctx.r9.u32 + ctx.r31.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v62.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r4,r10,17
	ctx.r4.s64 = ctx.r10.s64 + 17;
	// stwx r30,r7,r31
	PPC_STORE_U32(ctx.r7.u32 + ctx.r31.u32, ctx.r30.u32);
	// addi r9,r11,18
	ctx.r9.s64 = ctx.r11.s64 + 18;
	// stvx128 v62,r5,r31
	_mm_store_si128((__m128i*)(base + ((ctx.r5.u32 + ctx.r31.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v62.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// rlwinm r8,r6,4,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r7,r10,18
	ctx.r7.s64 = ctx.r10.s64 + 18;
	// stwx r30,r3,r31
	PPC_STORE_U32(ctx.r3.u32 + ctx.r31.u32, ctx.r30.u32);
	// rlwinm r6,r4,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r5,r11,19
	ctx.r5.s64 = ctx.r11.s64 + 19;
	// rlwinm r4,r9,4,0,27
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r3,r10,19
	ctx.r3.s64 = ctx.r10.s64 + 19;
	// stvx128 v62,r8,r31
	_mm_store_si128((__m128i*)(base + ((ctx.r8.u32 + ctx.r31.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v62.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// rlwinm r11,r7,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r5,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 4) & 0xFFFFFFF0;
	// stwx r30,r6,r31
	PPC_STORE_U32(ctx.r6.u32 + ctx.r31.u32, ctx.r30.u32);
	// rlwinm r9,r3,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// stvx128 v62,r4,r31
	_mm_store_si128((__m128i*)(base + ((ctx.r4.u32 + ctx.r31.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v62.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stwx r30,r11,r31
	PPC_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r30.u32);
	// stvx128 v62,r10,r31
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32 + ctx.r31.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v62.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stwx r30,r9,r31
	PPC_STORE_U32(ctx.r9.u32 + ctx.r31.u32, ctx.r30.u32);
loc_82A0B94C:
	// addic. r25,r25,-1
	ctx.xer.ca = ctx.r25.u32 > 0;
	ctx.r25.s64 = ctx.r25.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// bne 0x82a0b81c
	if (!ctx.cr0.eq) goto loc_82A0B81C;
loc_82A0B954:
	// addic. r23,r23,-1
	ctx.xer.ca = ctx.r23.u32 > 0;
	ctx.r23.s64 = ctx.r23.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// addi r27,r27,4
	ctx.r27.s64 = ctx.r27.s64 + 4;
	// addi r26,r26,416
	ctx.r26.s64 = ctx.r26.s64 + 416;
	// bne 0x82a0b7f8
	if (!ctx.cr0.eq) goto loc_82A0B7F8;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82fa76b4
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A0B96C"))) PPC_WEAK_FUNC(sub_82A0B96C);
PPC_FUNC_IMPL(__imp__sub_82A0B96C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A0B970"))) PPC_WEAK_FUNC(sub_82A0B970);
PPC_FUNC_IMPL(__imp__sub_82A0B970) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa764c
	ctx.lr = 0x82A0B978;
	__savegprlr_17(ctx, base);
	// stwu r1,-560(r1)
	ea = -560 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31964
	ctx.r11.s64 = -2094792704;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r31,r11,29312
	ctx.r31.s64 = ctx.r11.s64 + 29312;
	// li r19,0
	ctx.r19.s64 = 0;
	// addi r4,r4,160
	ctx.r4.s64 = ctx.r4.s64 + 160;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// mr r28,r19
	ctx.r28.u64 = ctx.r19.u64;
	// lwz r10,7872(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7872);
	// addi r8,r31,7780
	ctx.r8.s64 = ctx.r31.s64 + 7780;
	// lhz r9,7912(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + 7912);
	// addi r5,r29,48
	ctx.r5.s64 = ctx.r29.s64 + 48;
	// addi r11,r10,1
	ctx.r11.s64 = ctx.r10.s64 + 1;
	// addi r10,r9,1
	ctx.r10.s64 = ctx.r9.s64 + 1;
	// stw r11,7872(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7872, ctx.r11.u32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// sth r10,7912(r31)
	PPC_STORE_U16(ctx.r31.u32 + 7912, ctx.r10.u16);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r24,6
	ctx.r24.s64 = 6;
	// li r20,32
	ctx.r20.s64 = 32;
	// li r21,-4
	ctx.r21.s64 = -4;
	// li r22,28
	ctx.r22.s64 = 28;
	// lfs f13,5184(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5184);
	ctx.f13.f64 = double(temp.f32);
	// li r23,60
	ctx.r23.s64 = 60;
	// li r25,64
	ctx.r25.s64 = 64;
	// li r26,288
	ctx.r26.s64 = 288;
	// li r27,224
	ctx.r27.s64 = 224;
	// addi r30,r11,11556
	ctx.r30.s64 = ctx.r11.s64 + 11556;
loc_82A0B9E8:
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x82a0bc70
	if (!ctx.cr6.eq) goto loc_82A0BC70;
	// li r11,4
	ctx.r11.s64 = 4;
	// lwz r9,432(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 432);
	// lwz r7,7888(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7888);
	// addi r10,r5,356
	ctx.r10.s64 = ctx.r5.s64 + 356;
	// or r28,r9,r28
	ctx.r28.u64 = ctx.r9.u64 | ctx.r28.u64;
	// lwz r9,7892(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7892);
	// lwz r6,7884(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7884);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_82A0BA14:
	// lwz r11,-4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + -4);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x82a0ba2c
	if (!ctx.cr6.eq) goto loc_82A0BA2C;
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// stw r6,7884(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7884, ctx.r6.u32);
	// b 0x82a0ba48
	goto loc_82A0BA48;
loc_82A0BA2C:
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82a0ba40
	if (!ctx.cr6.eq) goto loc_82A0BA40;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// stw r7,7888(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7888, ctx.r7.u32);
	// b 0x82a0ba48
	goto loc_82A0BA48;
loc_82A0BA40:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stw r9,7892(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7892, ctx.r9.u32);
loc_82A0BA48:
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x82a0ba60
	if (!ctx.cr6.eq) goto loc_82A0BA60;
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// stw r6,7884(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7884, ctx.r6.u32);
	// b 0x82a0ba7c
	goto loc_82A0BA7C;
loc_82A0BA60:
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82a0ba74
	if (!ctx.cr6.eq) goto loc_82A0BA74;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// stw r7,7888(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7888, ctx.r7.u32);
	// b 0x82a0ba7c
	goto loc_82A0BA7C;
loc_82A0BA74:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stw r9,7892(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7892, ctx.r9.u32);
loc_82A0BA7C:
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x82a0ba94
	if (!ctx.cr6.eq) goto loc_82A0BA94;
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// stw r6,7884(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7884, ctx.r6.u32);
	// b 0x82a0bab0
	goto loc_82A0BAB0;
loc_82A0BA94:
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82a0baa8
	if (!ctx.cr6.eq) goto loc_82A0BAA8;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// stw r7,7888(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7888, ctx.r7.u32);
	// b 0x82a0bab0
	goto loc_82A0BAB0;
loc_82A0BAA8:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stw r9,7892(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7892, ctx.r9.u32);
loc_82A0BAB0:
	// lwz r11,8(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x82a0bac8
	if (!ctx.cr6.eq) goto loc_82A0BAC8;
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// stw r6,7884(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7884, ctx.r6.u32);
	// b 0x82a0bae4
	goto loc_82A0BAE4;
loc_82A0BAC8:
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82a0badc
	if (!ctx.cr6.eq) goto loc_82A0BADC;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// stw r7,7888(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7888, ctx.r7.u32);
	// b 0x82a0bae4
	goto loc_82A0BAE4;
loc_82A0BADC:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stw r9,7892(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7892, ctx.r9.u32);
loc_82A0BAE4:
	// lwz r11,12(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x82a0bafc
	if (!ctx.cr6.eq) goto loc_82A0BAFC;
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// stw r6,7884(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7884, ctx.r6.u32);
	// b 0x82a0bb18
	goto loc_82A0BB18;
loc_82A0BAFC:
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82a0bb10
	if (!ctx.cr6.eq) goto loc_82A0BB10;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// stw r7,7888(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7888, ctx.r7.u32);
	// b 0x82a0bb18
	goto loc_82A0BB18;
loc_82A0BB10:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stw r9,7892(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7892, ctx.r9.u32);
loc_82A0BB18:
	// addi r10,r10,20
	ctx.r10.s64 = ctx.r10.s64 + 20;
	// bdnz 0x82a0ba14
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82A0BA14;
	// addi r10,r1,416
	ctx.r10.s64 = ctx.r1.s64 + 416;
	// lhz r9,7912(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + 7912);
	// lvx128 v63,r5,r20
	simd::store_shuffled(ctx.v63, simd::load_and_shuffle(base + ((ctx.r5.u32 + ctx.r20.u32) & ~0xF), VectorMaskL));
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// stvx128 v63,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// bne cr6,0x82a0bb48
	if (!ctx.cr6.eq) goto loc_82A0BB48;
	// stvx128 v63,r8,r21
	_mm_store_si128((__m128i*)(base + ((ctx.r8.u32 + ctx.r21.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v63,r8,r22
	_mm_store_si128((__m128i*)(base + ((ctx.r8.u32 + ctx.r22.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v63,r8,r23
	_mm_store_si128((__m128i*)(base + ((ctx.r8.u32 + ctx.r23.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// b 0x82a0bbc0
	goto loc_82A0BBC0;
loc_82A0BB48:
	// lfs f12,-4(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -4);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,416(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 416);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// bge cr6,0x82a0bb5c
	if (!ctx.cr6.lt) goto loc_82A0BB5C;
	// stfs f0,-4(r8)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + -4, temp.u32);
loc_82A0BB5C:
	// lfs f12,-4(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -4);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// ble cr6,0x82a0bb6c
	if (!ctx.cr6.gt) goto loc_82A0BB6C;
	// stfs f0,28(r8)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 28, temp.u32);
loc_82A0BB6C:
	// lfs f12,0(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,420(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 420);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// bge cr6,0x82a0bb80
	if (!ctx.cr6.lt) goto loc_82A0BB80;
	// stfs f0,0(r8)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 0, temp.u32);
loc_82A0BB80:
	// lfs f12,0(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// ble cr6,0x82a0bb90
	if (!ctx.cr6.gt) goto loc_82A0BB90;
	// stfs f0,32(r8)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 32, temp.u32);
loc_82A0BB90:
	// lfs f12,4(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,424(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 424);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// bge cr6,0x82a0bba4
	if (!ctx.cr6.lt) goto loc_82A0BBA4;
	// stfs f0,4(r8)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 4, temp.u32);
loc_82A0BBA4:
	// lfs f12,4(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// ble cr6,0x82a0bbb4
	if (!ctx.cr6.gt) goto loc_82A0BBB4;
	// stfs f0,36(r8)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r8.u32 + 36, temp.u32);
loc_82A0BBB4:
	// lvx128 v62,r8,r23
	simd::store_shuffled(ctx.v62, simd::load_and_shuffle(base + ((ctx.r8.u32 + ctx.r23.u32) & ~0xF), VectorMaskL));
	// vaddfp128 v61,v62,v63
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v61.f32, _mm_add_ps(_mm_load_ps(ctx.v62.f32), _mm_load_ps(ctx.v63.f32)));
	// stvx128 v61,r8,r23
	_mm_store_si128((__m128i*)(base + ((ctx.r8.u32 + ctx.r23.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v61.u8), _mm_load_si128((__m128i*)VectorMaskL)));
loc_82A0BBC0:
	// lwz r11,4(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// lwz r10,148(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 148);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82a0bbe0
	if (ctx.cr6.eq) goto loc_82A0BBE0;
	// stfs f13,136(r8)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r8.u32 + 136, temp.u32);
	// stw r11,148(r8)
	PPC_STORE_U32(ctx.r8.u32 + 148, ctx.r11.u32);
	// stfs f13,140(r8)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r8.u32 + 140, temp.u32);
	// stw r19,144(r8)
	PPC_STORE_U32(ctx.r8.u32 + 144, ctx.r19.u32);
loc_82A0BBE0:
	// lfs f0,0(r4)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// vspltisw128 v60,1
	_mm_store_si128((__m128i*)ctx.v60.u32, _mm_set1_epi32(int(0x1)));
	// lfs f12,136(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 136);
	ctx.f12.f64 = double(temp.f32);
	// vspltisw128 v59,0
	_mm_store_si128((__m128i*)ctx.v59.u32, _mm_set1_epi32(int(0x0)));
	// fadds f11,f12,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 + ctx.f0.f64));
	// stfs f11,136(r8)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r8.u32 + 136, temp.u32);
	// lvlx128 v58,r0,r30
	temp.u32 = ctx.r30.u32;
	_mm_store_si128((__m128i*)ctx.v58.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r10,r1,400
	ctx.r10.s64 = ctx.r1.s64 + 400;
	// lvx128 v57,r5,r25
	simd::store_shuffled(ctx.v57, simd::load_and_shuffle(base + ((ctx.r5.u32 + ctx.r25.u32) & ~0xF), VectorMaskL));
	// vcsxwfp128 v10,v60,1
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v10.f32, _mm_mul_ps(_mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v60.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x3F000000)))));
	// lvx128 v56,r5,r26
	simd::store_shuffled(ctx.v56, simd::load_and_shuffle(base + ((ctx.r5.u32 + ctx.r26.u32) & ~0xF), VectorMaskL));
	// lwz r11,144(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 144);
	// lvx128 v55,r5,r27
	simd::store_shuffled(ctx.v55, simd::load_and_shuffle(base + ((ctx.r5.u32 + ctx.r27.u32) & ~0xF), VectorMaskL));
	// vaddfp128 v54,v55,v56
	_mm_store_ps(ctx.v54.f32, _mm_add_ps(_mm_load_ps(ctx.v55.f32), _mm_load_ps(ctx.v56.f32)));
	// vspltw128 v53,v58,0
	_mm_store_si128((__m128i*)ctx.v53.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v58.u32), 0xFF));
	// lfs f10,140(r8)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 140);
	ctx.f10.f64 = double(temp.f32);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// stw r9,144(r8)
	PPC_STORE_U32(ctx.r8.u32 + 144, ctx.r9.u32);
	// vmulfp128 v52,v54,v53
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v52.f32, _mm_mul_ps(_mm_load_ps(ctx.v54.f32), _mm_load_ps(ctx.v53.f32)));
	// vsubfp128 v51,v57,v52
	_mm_store_ps(ctx.v51.f32, _mm_sub_ps(_mm_load_ps(ctx.v57.f32), _mm_load_ps(ctx.v52.f32)));
	// vmsum3fp128 v50,v51,v51
	_mm_store_ps(ctx.v50.f32, _mm_dp_ps(_mm_load_ps(ctx.v51.f32), _mm_load_ps(ctx.v51.f32), 0xEF));
	// vrsqrtefp128 v0,v50
	_mm_store_ps(ctx.v0.f32, _mm_div_ps(_mm_set1_ps(1), _mm_sqrt_ps(_mm_load_ps(ctx.v50.f32))));
	// vor128 v11,v50,v50
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_load_si128((__m128i*)ctx.v50.u8));
	// vmulfp128 v13,v50,v10
	_mm_store_ps(ctx.v13.f32, _mm_mul_ps(_mm_load_ps(ctx.v50.f32), _mm_load_ps(ctx.v10.f32)));
	// vcmpeqfp128 v9,v50,v59
	_mm_store_ps(ctx.v9.f32, _mm_cmpeq_ps(_mm_load_ps(ctx.v50.f32), _mm_load_ps(ctx.v59.f32)));
	// vmulfp128 v12,v0,v0
	_mm_store_ps(ctx.v12.f32, _mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v0.f32)));
	// vnmsubfp v10,v13,v12,v10
	_mm_store_ps(ctx.v10.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v12.f32)), _mm_load_ps(ctx.v10.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// vmaddfp v0,v0,v10,v0
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v10.f32)), _mm_load_ps(ctx.v0.f32)));
	// vmulfp128 v0,v50,v0
	_mm_store_ps(ctx.v0.f32, _mm_mul_ps(_mm_load_ps(ctx.v50.f32), _mm_load_ps(ctx.v0.f32)));
	// vsel v13,v0,v11,v9
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v9.u8), _mm_load_si128((__m128i*)ctx.v0.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v9.u8), _mm_load_si128((__m128i*)ctx.v11.u8))));
	// stvx128 v13,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lfs f9,400(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 400);
	ctx.f9.f64 = double(temp.f32);
	// fadds f8,f10,f9
	ctx.f8.f64 = double(float(ctx.f10.f64 + ctx.f9.f64));
	// stfs f8,140(r8)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r8.u32 + 140, temp.u32);
	// addi r8,r8,16
	ctx.r8.s64 = ctx.r8.s64 + 16;
loc_82A0BC70:
	// addic. r24,r24,-1
	ctx.xer.ca = ctx.r24.u32 > 0;
	ctx.r24.s64 = ctx.r24.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// addi r4,r4,4
	ctx.r4.s64 = ctx.r4.s64 + 4;
	// addi r5,r5,448
	ctx.r5.s64 = ctx.r5.s64 + 448;
	// bne 0x82a0b9e8
	if (!ctx.cr0.eq) goto loc_82A0B9E8;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a0bce4
	if (ctx.cr6.eq) goto loc_82A0BCE4;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r31,7872
	ctx.r11.s64 = ctx.r31.s64 + 7872;
	// clrlwi r9,r28,30
	ctx.r9.u64 = ctx.r28.u32 & 0x3;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// lwzx r9,r10,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// addi r8,r9,1
	ctx.r8.s64 = ctx.r9.s64 + 1;
	// stwx r8,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r8.u32);
	// beq cr6,0x82a0bcb4
	if (ctx.cr6.eq) goto loc_82A0BCB4;
	// lwz r11,7896(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7896);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,7896(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7896, ctx.r11.u32);
loc_82A0BCB4:
	// rlwinm r11,r28,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a0bccc
	if (ctx.cr6.eq) goto loc_82A0BCCC;
	// lwz r11,7900(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7900);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,7900(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7900, ctx.r11.u32);
loc_82A0BCCC:
	// rlwinm r11,r28,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 0) & 0x8;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a0bce4
	if (ctx.cr6.eq) goto loc_82A0BCE4;
	// lwz r11,7904(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7904);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,7904(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7904, ctx.r11.u32);
loc_82A0BCE4:
	// addi r6,r29,16
	ctx.r6.s64 = ctx.r29.s64 + 16;
	// vspltisw128 v49,0
	_mm_store_si128((__m128i*)ctx.v49.u32, _mm_set1_epi32(int(0x0)));
	// vpermwi128 v48,v49,24
	_mm_store_si128((__m128i*)ctx.v48.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v49.u32), 0xE7));
	// lvx128 v47,r0,r6
	simd::store_shuffled(ctx.v47, simd::load_and_shuffle(base + ((ctx.r6.u32) & ~0xF), VectorMaskL));
	// vpermwi128 v46,v47,24
	_mm_store_si128((__m128i*)ctx.v46.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v47.u32), 0xE7));
	// vcmpeqfp128. v45,v46,v48
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v45.f32, _mm_cmpeq_ps(_mm_load_ps(ctx.v46.f32), _mm_load_ps(ctx.v48.f32)));
	ctx.cr6.setFromMask(_mm_load_ps(ctx.v45.f32), 0xF);
	// blt cr6,0x82a0bd0c
	if (ctx.cr6.lt) goto loc_82A0BD0C;
	// lwz r11,7908(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7908);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,7908(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7908, ctx.r11.u32);
loc_82A0BD0C:
	// lis r10,-28254
	ctx.r10.s64 = -1851654144;
	// lwz r11,7872(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7872);
	// ori r9,r10,46021
	ctx.r9.u64 = ctx.r10.u64 | 46021;
	// mulhwu r8,r11,r9
	ctx.r8.u64 = (uint64_t(ctx.r11.u32) * uint64_t(ctx.r9.u32)) >> 32;
	// rlwinm r7,r8,21,11,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 21) & 0x1FFFFF;
	// mulli r5,r7,3600
	ctx.r5.s64 = ctx.r7.s64 * 3600;
	// subf. r4,r5,r11
	ctx.r4.s64 = ctx.r11.s64 - ctx.r5.s64;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne 0x82a0c124
	if (!ctx.cr0.eq) goto loc_82A0C124;
	// lhz r5,7912(r31)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r31.u32 + 7912);
	// lis r9,-32233
	ctx.r9.s64 = -2112421888;
	// addi r4,r1,334
	ctx.r4.s64 = ctx.r1.s64 + 334;
	// sth r19,332(r1)
	PPC_STORE_U16(ctx.r1.u32 + 332, ctx.r19.u16);
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r19,336(r1)
	PPC_STORE_U32(ctx.r1.u32 + 336, ctx.r19.u32);
	// addi r7,r1,340
	ctx.r7.s64 = ctx.r1.s64 + 340;
	// lis r3,-32255
	ctx.r3.s64 = -2113863680;
	// std r5,344(r1)
	PPC_STORE_U64(ctx.r1.u32 + 344, ctx.r5.u64);
	// lfd f13,344(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 344);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// lfs f0,24436(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 24436);
	ctx.f0.f64 = double(temp.f32);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// sth r19,0(r4)
	PPC_STORE_U16(ctx.r4.u32 + 0, ctx.r19.u16);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// stw r19,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r19.u32);
	// lis r5,-32250
	ctx.r5.s64 = -2113536000;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// lis r4,-32250
	ctx.r4.s64 = -2113536000;
	// lfs f12,-9880(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + -9880);
	ctx.f12.f64 = double(temp.f32);
	// mr r10,r19
	ctx.r10.u64 = ctx.r19.u64;
	// addi r7,r1,332
	ctx.r7.s64 = ctx.r1.s64 + 332;
	// lfs f9,-8020(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -8020);
	ctx.f9.f64 = double(temp.f32);
	// addi r8,r1,336
	ctx.r8.s64 = ctx.r1.s64 + 336;
	// addi r11,r31,7840
	ctx.r11.s64 = ctx.r31.s64 + 7840;
	// fdivs f10,f0,f11
	ctx.f10.f64 = double(float(ctx.f0.f64 / ctx.f11.f64));
	// lfs f11,-25404(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + -25404);
	ctx.f11.f64 = double(temp.f32);
	// lfs f0,-24084(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + -24084);
	ctx.f0.f64 = double(temp.f32);
loc_82A0BD9C:
	// lfs f13,-64(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -64);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f12
	ctx.cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// bge cr6,0x82a0bdb0
	if (!ctx.cr6.lt) goto loc_82A0BDB0;
	// fmr f13,f12
	ctx.f13.f64 = ctx.f12.f64;
	// b 0x82a0bdbc
	goto loc_82A0BDBC;
loc_82A0BDB0:
	// fcmpu cr6,f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x82a0bdbc
	if (!ctx.cr6.gt) goto loc_82A0BDBC;
	// fmr f13,f0
	ctx.f13.f64 = ctx.f0.f64;
loc_82A0BDBC:
	// fadds f8,f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.f8.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// addi r9,r1,330
	ctx.r9.s64 = ctx.r1.s64 + 330;
	// lfs f13,-32(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -32);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f12
	ctx.cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// fmuls f7,f8,f11
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f11.f64));
	// fctidz f6,f7
	ctx.f6.s64 = (ctx.f7.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f7.f64));
	// stfd f6,344(r1)
	PPC_STORE_U64(ctx.r1.u32 + 344, ctx.f6.u64);
	// lbz r5,351(r1)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r1.u32 + 351);
	// stbx r5,r10,r9
	PPC_STORE_U8(ctx.r10.u32 + ctx.r9.u32, ctx.r5.u8);
	// bge cr6,0x82a0bdec
	if (!ctx.cr6.lt) goto loc_82A0BDEC;
	// fmr f13,f12
	ctx.f13.f64 = ctx.f12.f64;
	// b 0x82a0bdf8
	goto loc_82A0BDF8;
loc_82A0BDEC:
	// fcmpu cr6,f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x82a0bdf8
	if (!ctx.cr6.gt) goto loc_82A0BDF8;
	// fmr f13,f0
	ctx.f13.f64 = ctx.f0.f64;
loc_82A0BDF8:
	// fadds f8,f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.f8.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// lfs f7,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f13,f7,f10
	ctx.f13.f64 = double(float(ctx.f7.f64 * ctx.f10.f64));
	// addi r9,r1,328
	ctx.r9.s64 = ctx.r1.s64 + 328;
	// fmuls f6,f8,f11
	ctx.f6.f64 = double(float(ctx.f8.f64 * ctx.f11.f64));
	// fcmpu cr6,f13,f12
	ctx.cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// fctidz f5,f6
	ctx.f5.s64 = (ctx.f6.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f6.f64));
	// stfd f5,344(r1)
	PPC_STORE_U64(ctx.r1.u32 + 344, ctx.f5.u64);
	// lbz r5,351(r1)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r1.u32 + 351);
	// stbx r5,r10,r9
	PPC_STORE_U8(ctx.r10.u32 + ctx.r9.u32, ctx.r5.u8);
	// bge cr6,0x82a0be2c
	if (!ctx.cr6.lt) goto loc_82A0BE2C;
	// fmr f13,f12
	ctx.f13.f64 = ctx.f12.f64;
	// b 0x82a0be38
	goto loc_82A0BE38;
loc_82A0BE2C:
	// fcmpu cr6,f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x82a0be38
	if (!ctx.cr6.gt) goto loc_82A0BE38;
	// fmr f13,f0
	ctx.f13.f64 = ctx.f0.f64;
loc_82A0BE38:
	// fadds f8,f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.f8.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// addi r9,r1,326
	ctx.r9.s64 = ctx.r1.s64 + 326;
	// lfs f13,-56(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -56);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f12
	ctx.cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// fmuls f7,f8,f11
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f11.f64));
	// fctidz f6,f7
	ctx.f6.s64 = (ctx.f7.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f7.f64));
	// stfd f6,344(r1)
	PPC_STORE_U64(ctx.r1.u32 + 344, ctx.f6.u64);
	// lbz r5,351(r1)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r1.u32 + 351);
	// stbx r5,r10,r9
	PPC_STORE_U8(ctx.r10.u32 + ctx.r9.u32, ctx.r5.u8);
	// bge cr6,0x82a0be68
	if (!ctx.cr6.lt) goto loc_82A0BE68;
	// fmr f13,f12
	ctx.f13.f64 = ctx.f12.f64;
	// b 0x82a0be74
	goto loc_82A0BE74;
loc_82A0BE68:
	// fcmpu cr6,f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x82a0be74
	if (!ctx.cr6.gt) goto loc_82A0BE74;
	// fmr f13,f0
	ctx.f13.f64 = ctx.f0.f64;
loc_82A0BE74:
	// fadds f8,f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.f8.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// addi r9,r1,320
	ctx.r9.s64 = ctx.r1.s64 + 320;
	// lfs f13,-24(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -24);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f12
	ctx.cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// fmuls f7,f8,f11
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f11.f64));
	// fctidz f6,f7
	ctx.f6.s64 = (ctx.f7.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f7.f64));
	// stfd f6,344(r1)
	PPC_STORE_U64(ctx.r1.u32 + 344, ctx.f6.u64);
	// lbz r5,351(r1)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r1.u32 + 351);
	// stbx r5,r10,r9
	PPC_STORE_U8(ctx.r10.u32 + ctx.r9.u32, ctx.r5.u8);
	// bge cr6,0x82a0bea4
	if (!ctx.cr6.lt) goto loc_82A0BEA4;
	// fmr f13,f12
	ctx.f13.f64 = ctx.f12.f64;
	// b 0x82a0beb0
	goto loc_82A0BEB0;
loc_82A0BEA4:
	// fcmpu cr6,f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x82a0beb0
	if (!ctx.cr6.gt) goto loc_82A0BEB0;
	// fmr f13,f0
	ctx.f13.f64 = ctx.f0.f64;
loc_82A0BEB0:
	// fadds f8,f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.f8.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// lfs f7,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f13,f7,f10
	ctx.f13.f64 = double(float(ctx.f7.f64 * ctx.f10.f64));
	// addi r9,r1,324
	ctx.r9.s64 = ctx.r1.s64 + 324;
	// fmuls f6,f8,f11
	ctx.f6.f64 = double(float(ctx.f8.f64 * ctx.f11.f64));
	// fcmpu cr6,f13,f12
	ctx.cr6.compare(ctx.f13.f64, ctx.f12.f64);
	// fctidz f5,f6
	ctx.f5.s64 = (ctx.f6.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f6.f64));
	// stfd f5,344(r1)
	PPC_STORE_U64(ctx.r1.u32 + 344, ctx.f5.u64);
	// lbz r5,351(r1)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r1.u32 + 351);
	// stbx r5,r10,r9
	PPC_STORE_U8(ctx.r10.u32 + ctx.r9.u32, ctx.r5.u8);
	// bge cr6,0x82a0bee4
	if (!ctx.cr6.lt) goto loc_82A0BEE4;
	// fmr f13,f12
	ctx.f13.f64 = ctx.f12.f64;
	// b 0x82a0bef0
	goto loc_82A0BEF0;
loc_82A0BEE4:
	// fcmpu cr6,f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x82a0bef0
	if (!ctx.cr6.gt) goto loc_82A0BEF0;
	// fmr f13,f0
	ctx.f13.f64 = ctx.f0.f64;
loc_82A0BEF0:
	// fadds f13,f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f0.f64));
	// addi r5,r1,322
	ctx.r5.s64 = ctx.r1.s64 + 322;
	// lwz r9,84(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// fmuls f8,f13,f11
	ctx.f8.f64 = double(float(ctx.f13.f64 * ctx.f11.f64));
	// fctidz f7,f8
	ctx.f7.s64 = (ctx.f8.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f8.f64));
	// stfd f7,344(r1)
	PPC_STORE_U64(ctx.r1.u32 + 344, ctx.f7.u64);
	// lbz r4,351(r1)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r1.u32 + 351);
	// stbx r4,r10,r5
	PPC_STORE_U8(ctx.r10.u32 + ctx.r5.u32, ctx.r4.u8);
	// beq cr6,0x82a0bf60
	if (ctx.cr6.eq) goto loc_82A0BF60;
	// clrldi r9,r9,32
	ctx.r9.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// lfs f13,76(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	ctx.f13.f64 = double(temp.f32);
	// lfs f8,80(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	ctx.f8.f64 = double(temp.f32);
	// std r9,352(r1)
	PPC_STORE_U64(ctx.r1.u32 + 352, ctx.r9.u64);
	// lfd f6,352(r1)
	ctx.f6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 352);
	// fcfid f5,f6
	ctx.f5.f64 = double(ctx.f6.s64);
	// frsp f4,f5
	ctx.f4.f64 = double(float(ctx.f5.f64));
	// fmuls f7,f8,f9
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f9.f64));
	// fdivs f3,f13,f4
	ctx.f3.f64 = double(float(ctx.f13.f64 / ctx.f4.f64));
	// fdivs f2,f7,f4
	ctx.f2.f64 = double(float(ctx.f7.f64 / ctx.f4.f64));
	// fctidz f1,f3
	ctx.f1.s64 = (ctx.f3.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f3.f64));
	// stfd f1,344(r1)
	PPC_STORE_U64(ctx.r1.u32 + 344, ctx.f1.u64);
	// fctidz f13,f2
	ctx.f13.s64 = (ctx.f2.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f2.f64));
	// lwz r5,348(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 348);
	// stfd f13,344(r1)
	PPC_STORE_U64(ctx.r1.u32 + 344, ctx.f13.u64);
	// lhz r4,350(r1)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r1.u32 + 350);
	// sth r4,0(r7)
	PPC_STORE_U16(ctx.r7.u32 + 0, ctx.r4.u16);
	// stw r5,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r5.u32);
loc_82A0BF60:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// addi r7,r7,2
	ctx.r7.s64 = ctx.r7.s64 + 2;
	// bdnz 0x82a0bd9c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82A0BD9C;
	// addi r11,r1,424
	ctx.r11.s64 = ctx.r1.s64 + 424;
	// std r19,416(r1)
	PPC_STORE_U64(ctx.r1.u32 + 416, ctx.r19.u64);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lfs f13,20(r29)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	ctx.f13.f64 = double(temp.f32);
	// lfs f10,28(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	ctx.f10.f64 = double(temp.f32);
	// addi r3,r1,416
	ctx.r3.s64 = ctx.r1.s64 + 416;
	// lfs f12,0(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f7,f10,f9
	ctx.f7.f64 = double(float(ctx.f10.f64 * ctx.f9.f64));
	// lfs f11,24(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 24);
	ctx.f11.f64 = double(temp.f32);
	// std r19,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r19.u64);
	// lfs f0,-7576(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -7576);
	ctx.f0.f64 = double(temp.f32);
	// lfs f8,32(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	ctx.f8.f64 = double(temp.f32);
	// fmuls f5,f13,f0
	ctx.f5.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// lfs f6,36(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 36);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f3,f12,f0
	ctx.f3.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// lfs f4,40(r29)
	temp.u32 = PPC_LOAD_U32(ctx.r29.u32 + 40);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f2,f11,f0
	ctx.f2.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// fmuls f1,f8,f0
	ctx.f1.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// fmuls f13,f6,f0
	ctx.f13.f64 = double(float(ctx.f6.f64 * ctx.f0.f64));
	// fmuls f12,f4,f0
	ctx.f12.f64 = double(float(ctx.f4.f64 * ctx.f0.f64));
	// fctiwz f11,f7
	ctx.f11.s64 = (ctx.f7.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f7.f64));
	// stfd f11,352(r1)
	PPC_STORE_U64(ctx.r1.u32 + 352, ctx.f11.u64);
	// lhz r30,358(r1)
	ctx.r30.u64 = PPC_LOAD_U16(ctx.r1.u32 + 358);
	// fctiwz f10,f5
	ctx.f10.s64 = (ctx.f5.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f5.f64));
	// stfd f10,400(r1)
	PPC_STORE_U64(ctx.r1.u32 + 400, ctx.f10.u64);
	// fctiwz f9,f3
	ctx.f9.s64 = (ctx.f3.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f3.f64));
	// stfd f9,344(r1)
	PPC_STORE_U64(ctx.r1.u32 + 344, ctx.f9.u64);
	// fctiwz f8,f2
	ctx.f8.s64 = (ctx.f2.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f2.f64));
	// stfd f8,360(r1)
	PPC_STORE_U64(ctx.r1.u32 + 360, ctx.f8.u64);
	// fctiwz f7,f1
	ctx.f7.s64 = (ctx.f1.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f1.f64));
	// stfd f7,368(r1)
	PPC_STORE_U64(ctx.r1.u32 + 368, ctx.f7.u64);
	// fctiwz f6,f13
	ctx.f6.s64 = (ctx.f13.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f13.f64));
	// stfd f6,376(r1)
	PPC_STORE_U64(ctx.r1.u32 + 376, ctx.f6.u64);
	// fctiwz f5,f12
	ctx.f5.s64 = (ctx.f12.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f12.f64));
	// stfd f5,384(r1)
	PPC_STORE_U64(ctx.r1.u32 + 384, ctx.f5.u64);
	// lhz r29,350(r1)
	ctx.r29.u64 = PPC_LOAD_U16(ctx.r1.u32 + 350);
	// lhz r28,366(r1)
	ctx.r28.u64 = PPC_LOAD_U16(ctx.r1.u32 + 366);
	// lhz r27,374(r1)
	ctx.r27.u64 = PPC_LOAD_U16(ctx.r1.u32 + 374);
	// lhz r26,382(r1)
	ctx.r26.u64 = PPC_LOAD_U16(ctx.r1.u32 + 382);
	// lhz r25,390(r1)
	ctx.r25.u64 = PPC_LOAD_U16(ctx.r1.u32 + 390);
	// lhz r24,406(r1)
	ctx.r24.u64 = PPC_LOAD_U16(ctx.r1.u32 + 406);
	// bl 0x83178d74
	ctx.lr = 0x82A0C01C;
	__imp__XamGetActiveDashAppInfo(ctx, base);
	// lhz r11,334(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 334);
	// addi r3,r31,10536
	ctx.r3.s64 = ctx.r31.s64 + 10536;
	// lwz r23,340(r1)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r1.u32 + 340);
	// lhz r22,332(r1)
	ctx.r22.u64 = PPC_LOAD_U16(ctx.r1.u32 + 332);
	// lwz r21,336(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 336);
	// lbz r20,323(r1)
	ctx.r20.u64 = PPC_LOAD_U8(ctx.r1.u32 + 323);
	// sth r11,238(r1)
	PPC_STORE_U16(ctx.r1.u32 + 238, ctx.r11.u16);
	// lbz r19,325(r1)
	ctx.r19.u64 = PPC_LOAD_U8(ctx.r1.u32 + 325);
	// sth r25,294(r1)
	PPC_STORE_U16(ctx.r1.u32 + 294, ctx.r25.u16);
	// sth r26,286(r1)
	PPC_STORE_U16(ctx.r1.u32 + 286, ctx.r26.u16);
	// sth r27,278(r1)
	PPC_STORE_U16(ctx.r1.u32 + 278, ctx.r27.u16);
	// sth r30,270(r1)
	PPC_STORE_U16(ctx.r1.u32 + 270, ctx.r30.u16);
	// sth r28,262(r1)
	PPC_STORE_U16(ctx.r1.u32 + 262, ctx.r28.u16);
	// sth r29,246(r1)
	PPC_STORE_U16(ctx.r1.u32 + 246, ctx.r29.u16);
	// lwz r10,7896(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7896);
	// lwz r9,7892(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7892);
	// lwz r8,7888(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7888);
	// lwz r7,7884(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7884);
	// lwz r6,7880(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7880);
	// lwz r5,7876(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7876);
	// lhz r11,7912(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 7912);
	// lwz r4,7872(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7872);
	// lbz r18,321(r1)
	ctx.r18.u64 = PPC_LOAD_U8(ctx.r1.u32 + 321);
	// lbz r17,320(r1)
	ctx.r17.u64 = PPC_LOAD_U8(ctx.r1.u32 + 320);
	// lwz r27,424(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 424);
	// sth r11,110(r1)
	PPC_STORE_U16(ctx.r1.u32 + 110, ctx.r11.u16);
	// ld r26,416(r1)
	ctx.r26.u64 = PPC_LOAD_U64(ctx.r1.u32 + 416);
	// lwz r30,7908(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7908);
	// lwz r29,7904(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7904);
	// lwz r28,7900(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7900);
	// lbz r11,327(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 327);
	// lbz r25,329(r1)
	ctx.r25.u64 = PPC_LOAD_U8(ctx.r1.u32 + 329);
	// sth r24,254(r1)
	PPC_STORE_U16(ctx.r1.u32 + 254, ctx.r24.u16);
	// stw r23,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r23.u32);
	// sth r22,222(r1)
	PPC_STORE_U16(ctx.r1.u32 + 222, ctx.r22.u16);
	// stw r21,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r21.u32);
	// stb r20,207(r1)
	PPC_STORE_U8(ctx.r1.u32 + 207, ctx.r20.u8);
	// stb r19,199(r1)
	PPC_STORE_U8(ctx.r1.u32 + 199, ctx.r19.u8);
	// stw r29,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r29.u32);
	// lbz r24,331(r1)
	ctx.r24.u64 = PPC_LOAD_U8(ctx.r1.u32 + 331);
	// lbz r23,322(r1)
	ctx.r23.u64 = PPC_LOAD_U8(ctx.r1.u32 + 322);
	// lbz r22,324(r1)
	ctx.r22.u64 = PPC_LOAD_U8(ctx.r1.u32 + 324);
	// lbz r21,326(r1)
	ctx.r21.u64 = PPC_LOAD_U8(ctx.r1.u32 + 326);
	// lbz r20,328(r1)
	ctx.r20.u64 = PPC_LOAD_U8(ctx.r1.u32 + 328);
	// lbz r19,330(r1)
	ctx.r19.u64 = PPC_LOAD_U8(ctx.r1.u32 + 330);
	// stb r11,183(r1)
	PPC_STORE_U8(ctx.r1.u32 + 183, ctx.r11.u8);
	// stb r17,143(r1)
	PPC_STORE_U8(ctx.r1.u32 + 143, ctx.r17.u8);
	// stb r18,191(r1)
	PPC_STORE_U8(ctx.r1.u32 + 191, ctx.r18.u8);
	// stb r25,175(r1)
	PPC_STORE_U8(ctx.r1.u32 + 175, ctx.r25.u8);
	// stb r24,167(r1)
	PPC_STORE_U8(ctx.r1.u32 + 167, ctx.r24.u8);
	// stb r23,159(r1)
	PPC_STORE_U8(ctx.r1.u32 + 159, ctx.r23.u8);
	// stb r22,151(r1)
	PPC_STORE_U8(ctx.r1.u32 + 151, ctx.r22.u8);
	// stw r27,308(r1)
	PPC_STORE_U32(ctx.r1.u32 + 308, ctx.r27.u32);
	// std r26,296(r1)
	PPC_STORE_U64(ctx.r1.u32 + 296, ctx.r26.u64);
	// stb r21,135(r1)
	PPC_STORE_U8(ctx.r1.u32 + 135, ctx.r21.u8);
	// stb r20,127(r1)
	PPC_STORE_U8(ctx.r1.u32 + 127, ctx.r20.u8);
	// stb r19,119(r1)
	PPC_STORE_U8(ctx.r1.u32 + 119, ctx.r19.u8);
	// stw r30,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r30.u32);
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// bl 0x82a0b120
	ctx.lr = 0x82A0C10C;
	sub_82A0B120(ctx, base);
	// li r5,176
	ctx.r5.s64 = 176;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,7776
	ctx.r3.s64 = ctx.r31.s64 + 7776;
	// lwz r30,7872(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7872);
	// bl 0x82a75988
	ctx.lr = 0x82A0C120;
	sub_82A75988(ctx, base);
	// stw r30,7872(r31)
	PPC_STORE_U32(ctx.r31.u32 + 7872, ctx.r30.u32);
loc_82A0C124:
	// addi r1,r1,560
	ctx.r1.s64 = ctx.r1.s64 + 560;
	// b 0x82fa769c
	__restgprlr_17(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A0C12C"))) PPC_WEAK_FUNC(sub_82A0C12C);
PPC_FUNC_IMPL(__imp__sub_82A0C12C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A0C130"))) PPC_WEAK_FUNC(sub_82A0C130);
PPC_FUNC_IMPL(__imp__sub_82A0C130) {
	PPC_FUNC_PROLOGUE();
	// lis r3,-16384
	ctx.r3.s64 = -1073741824;
	// ori r3,r3,2
	ctx.r3.u64 = ctx.r3.u64 | 2;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A0C13C"))) PPC_WEAK_FUNC(sub_82A0C13C);
PPC_FUNC_IMPL(__imp__sub_82A0C13C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A0C140"))) PPC_WEAK_FUNC(sub_82A0C140);
PPC_FUNC_IMPL(__imp__sub_82A0C140) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// addi r3,r11,23768
	ctx.r3.s64 = ctx.r11.s64 + 23768;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A0C14C"))) PPC_WEAK_FUNC(sub_82A0C14C);
PPC_FUNC_IMPL(__imp__sub_82A0C14C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A0C150"))) PPC_WEAK_FUNC(sub_82A0C150);
PPC_FUNC_IMPL(__imp__sub_82A0C150) {
	PPC_FUNC_PROLOGUE();
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r3,2524
	ctx.r11.s64 = ctx.r3.s64 + 2524;
loc_82A0C158:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r9,r4
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x82a0c17c
	if (ctx.cr6.eq) goto loc_82A0C17C;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,96
	ctx.r11.s64 = ctx.r11.s64 + 96;
	// cmplwi cr6,r10,2
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 2, ctx.xer);
	// blt cr6,0x82a0c158
	if (ctx.cr6.lt) goto loc_82A0C158;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82A0C17C:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A0C184"))) PPC_WEAK_FUNC(sub_82A0C184);
PPC_FUNC_IMPL(__imp__sub_82A0C184) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A0C188"))) PPC_WEAK_FUNC(sub_82A0C188);
PPC_FUNC_IMPL(__imp__sub_82A0C188) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r3,2348
	ctx.r10.s64 = ctx.r3.s64 + 2348;
loc_82A0C190:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r9,r4
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x82a0c1b4
	if (ctx.cr6.eq) goto loc_82A0C1B4;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,88
	ctx.r10.s64 = ctx.r10.s64 + 88;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// blt cr6,0x82a0c190
	if (ctx.cr6.lt) goto loc_82A0C190;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82A0C1B4:
	// mulli r11,r11,88
	ctx.r11.s64 = ctx.r11.s64 * 88;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r3,r11,2336
	ctx.r3.s64 = ctx.r11.s64 + 2336;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A0C1C4"))) PPC_WEAK_FUNC(sub_82A0C1C4);
PPC_FUNC_IMPL(__imp__sub_82A0C1C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A0C1C8"))) PPC_WEAK_FUNC(sub_82A0C1C8);
PPC_FUNC_IMPL(__imp__sub_82A0C1C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82a0c1d8
	if (!ctx.cr6.eq) goto loc_82A0C1D8;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82A0C1D8:
	// lis r11,2
	ctx.r11.s64 = 131072;
	// ori r11,r11,19102
	ctx.r11.u64 = ctx.r11.u64 | 19102;
	// lbzx r11,r3,r11
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + ctx.r11.u32);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82a0c1f4
	if (ctx.cr0.eq) goto loc_82A0C1F4;
loc_82A0C1EC:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_82A0C1F4:
	// lis r11,2
	ctx.r11.s64 = 131072;
	// ori r11,r11,19108
	ctx.r11.u64 = ctx.r11.u64 | 19108;
	// lwzx r11,r3,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r11.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82a0c1ec
	if (!ctx.cr6.eq) goto loc_82A0C1EC;
	// addi r10,r3,2348
	ctx.r10.s64 = ctx.r3.s64 + 2348;
loc_82A0C20C:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r9,r4
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x82a0c238
	if (ctx.cr6.eq) goto loc_82A0C238;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,88
	ctx.r10.s64 = ctx.r10.s64 + 88;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// blt cr6,0x82a0c20c
	if (ctx.cr6.lt) goto loc_82A0C20C;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82A0C22C:
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r3,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// blr 
	return;
loc_82A0C238:
	// mulli r11,r11,88
	ctx.r11.s64 = ctx.r11.s64 * 88;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r11,r11,2336
	ctx.r11.s64 = ctx.r11.s64 + 2336;
	// b 0x82a0c22c
	goto loc_82A0C22C;
}

__attribute__((alias("__imp__sub_82A0C248"))) PPC_WEAK_FUNC(sub_82A0C248);
PPC_FUNC_IMPL(__imp__sub_82A0C248) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// mr r7,r4
	ctx.r7.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// li r5,28
	ctx.r5.s64 = 28;
	// lwz r11,24028(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24028);
	// addis r6,r11,9
	ctx.r6.s64 = ctx.r11.s64 + 589824;
	// addi r6,r6,-2656
	ctx.r6.s64 = ctx.r6.s64 + -2656;
	// lwz r10,0(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// mulli r9,r10,36
	ctx.r9.s64 = ctx.r10.s64 * 36;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addis r11,r11,9
	ctx.r11.s64 = ctx.r11.s64 + 589824;
	// stw r10,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r10.u32);
	// addi r11,r11,-2652
	ctx.r11.s64 = ctx.r11.s64 + -2652;
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// stw r7,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r7.u32);
	// b 0x82a75220
	sub_82A75220(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A0C294"))) PPC_WEAK_FUNC(sub_82A0C294);
PPC_FUNC_IMPL(__imp__sub_82A0C294) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A0C298"))) PPC_WEAK_FUNC(sub_82A0C298);
PPC_FUNC_IMPL(__imp__sub_82A0C298) {
	PPC_FUNC_PROLOGUE();
	// clrlwi r11,r7,16
	ctx.r11.u64 = ctx.r7.u32 & 0xFFFF;
	// cmplwi cr6,r11,6400
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 6400, ctx.xer);
	// blt cr6,0x82a0c2b4
	if (ctx.cr6.lt) goto loc_82A0C2B4;
	// cmpwi cr6,r11,32007
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 32007, ctx.xer);
	// bge cr6,0x82a0c2bc
	if (!ctx.cr6.lt) goto loc_82A0C2BC;
	// cmplwi cr6,r11,6400
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 6400, ctx.xer);
	// bge cr6,0x82a0c2c0
	if (!ctx.cr6.lt) goto loc_82A0C2C0;
loc_82A0C2B4:
	// li r11,6400
	ctx.r11.s64 = 6400;
	// b 0x82a0c2c0
	goto loc_82A0C2C0;
loc_82A0C2BC:
	// li r11,32007
	ctx.r11.s64 = 32007;
loc_82A0C2C0:
	// clrlwi r7,r11,16
	ctx.r7.u64 = ctx.r11.u32 & 0xFFFF;
	// b 0x82a09988
	sub_82A09988(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A0C2C8"))) PPC_WEAK_FUNC(sub_82A0C2C8);
PPC_FUNC_IMPL(__imp__sub_82A0C2C8) {
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
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,3
	ctx.r7.s64 = 3;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// lis r4,-32768
	ctx.r4.s64 = -2147483648;
	// li r31,0
	ctx.r31.s64 = 0;
	// bl 0x82a82d10
	ctx.lr = 0x82A0C2FC;
	sub_82A82D10(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x82a0c314
	if (!ctx.cr6.eq) goto loc_82A0C314;
	// lis r31,-31999
	ctx.r31.s64 = -2097086464;
	// ori r31,r31,15
	ctx.r31.u64 = ctx.r31.u64 | 15;
	// b 0x82a0c3a4
	goto loc_82A0C3A4;
loc_82A0C314:
	// li r5,128
	ctx.r5.s64 = 128;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82a75988
	ctx.lr = 0x82A0C324;
	sub_82A75988(ctx, base);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r5,127
	ctx.r5.s64 = 127;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a83030
	ctx.lr = 0x82A0C33C;
	sub_82A83030(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82a0c34c
	if (!ctx.cr0.eq) goto loc_82A0C34C;
	// lis r31,-31999
	ctx.r31.s64 = -2097086464;
	// ori r31,r31,15
	ctx.r31.u64 = ctx.r31.u64 | 15;
loc_82A0C34C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a756a0
	ctx.lr = 0x82A0C354;
	sub_82A756A0(ctx, base);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt cr6,0x82a0c3a4
	if (ctx.cr6.lt) goto loc_82A0C3A4;
	// li r11,-1
	ctx.r11.s64 = -1;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r7,r1,88
	ctx.r7.s64 = ctx.r1.s64 + 88;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r4,r10,-25400
	ctx.r4.s64 = ctx.r10.s64 + -25400;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82fa6b58
	ctx.lr = 0x82A0C388;
	sub_82FA6B58(ctx, base);
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// bne cr6,0x82a0c39c
	if (!ctx.cr6.eq) goto loc_82A0C39C;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82a0c3a4
	if (ctx.cr6.eq) goto loc_82A0C3A4;
loc_82A0C39C:
	// lis r31,-31999
	ctx.r31.s64 = -2097086464;
	// ori r31,r31,14
	ctx.r31.u64 = ctx.r31.u64 | 14;
loc_82A0C3A4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
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

__attribute__((alias("__imp__sub_82A0C3C0"))) PPC_WEAK_FUNC(sub_82A0C3C0);
PPC_FUNC_IMPL(__imp__sub_82A0C3C0) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a0c434
	if (ctx.cr6.eq) goto loc_82A0C434;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_82A0C3CC:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82a0c3cc
	if (!ctx.cr6.eq) goto loc_82A0C3CC;
	// subf r11,r3,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r3.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// stw r11,80(r4)
	PPC_STORE_U32(ctx.r4.u32 + 80, ctx.r11.u32);
	// cmplwi cr6,r11,20
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 20, ctx.xer);
	// bge cr6,0x82a0c434
	if (!ctx.cr6.lt) goto loc_82A0C434;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a0c434
	if (ctx.cr6.eq) goto loc_82A0C434;
	// mr r9,r4
	ctx.r9.u64 = ctx.r4.u64;
loc_82A0C400:
	// lbzx r11,r10,r3
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r3.u32);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// addi r11,r11,-48
	ctx.r11.s64 = ctx.r11.s64 + -48;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bge cr6,0x82a0c434
	if (!ctx.cr6.lt) goto loc_82A0C434;
	// lwz r11,80(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 80);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82a0c400
	if (ctx.cr6.lt) goto loc_82A0C400;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82A0C434:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A0C440"))) PPC_WEAK_FUNC(sub_82A0C440);
PPC_FUNC_IMPL(__imp__sub_82A0C440) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x82A0C448;
	__savegprlr_29(ctx, base);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r7,120
	ctx.r7.s64 = 120;
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// stw r7,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r7.u32);
	// addi r30,r4,8
	ctx.r30.s64 = ctx.r4.s64 + 8;
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// addi r29,r4,4
	ctx.r29.s64 = ctx.r4.s64 + 4;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r10,r4,20
	ctx.r10.s64 = ctx.r4.s64 + 20;
	// addi r9,r4,12
	ctx.r9.s64 = ctx.r4.s64 + 12;
	// addi r8,r4,16
	ctx.r8.s64 = ctx.r4.s64 + 16;
	// addi r4,r11,-25388
	ctx.r4.s64 = ctx.r11.s64 + -25388;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x82fa6b58
	ctx.lr = 0x82A0C48C;
	sub_82FA6B58(ctx, base);
	// cmpwi cr6,r3,7
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 7, ctx.xer);
	// beq cr6,0x82a0c4a0
	if (ctx.cr6.eq) goto loc_82A0C4A0;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// b 0x82a0c55c
	goto loc_82A0C55C;
loc_82A0C4A0:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r8,-32230
	ctx.r8.s64 = -2112225280;
	// mulli r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 * 3;
	// lwz r7,0(r29)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// mulli r11,r9,100
	ctx.r11.s64 = ctx.r9.s64 * 100;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// mulli r11,r7,100
	ctx.r11.s64 = ctx.r7.s64 * 100;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// addi r30,r8,-30056
	ctx.r30.s64 = ctx.r8.s64 + -30056;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82fa8460
	ctx.lr = 0x82A0C4E4;
	sub_82FA8460(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x82fa8460
	ctx.lr = 0x82A0C4F8;
	sub_82FA8460(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bl 0x82fa8460
	ctx.lr = 0x82A0C50C;
	sub_82FA8460(ctx, base);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// addi r4,r31,28
	ctx.r4.s64 = ctx.r31.s64 + 28;
	// lwz r7,96(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82a0c3c0
	ctx.lr = 0x82A0C520;
	sub_82A0C3C0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82a0c55c
	if (ctx.cr0.lt) goto loc_82A0C55C;
	// addi r4,r31,112
	ctx.r4.s64 = ctx.r31.s64 + 112;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a0c3c0
	ctx.lr = 0x82A0C534;
	sub_82A0C3C0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82a0c55c
	if (ctx.cr0.lt) goto loc_82A0C55C;
	// addi r4,r31,196
	ctx.r4.s64 = ctx.r31.s64 + 196;
	// mr r3,r8
	ctx.r3.u64 = ctx.r8.u64;
	// bl 0x82a0c3c0
	ctx.lr = 0x82A0C548;
	sub_82A0C3C0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82a0c55c
	if (ctx.cr0.lt) goto loc_82A0C55C;
	// addi r4,r31,280
	ctx.r4.s64 = ctx.r31.s64 + 280;
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// bl 0x82a0c3c0
	ctx.lr = 0x82A0C55C;
	sub_82A0C3C0(ctx, base);
loc_82A0C55C:
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A0C564"))) PPC_WEAK_FUNC(sub_82A0C564);
PPC_FUNC_IMPL(__imp__sub_82A0C564) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A0C568"))) PPC_WEAK_FUNC(sub_82A0C568);
PPC_FUNC_IMPL(__imp__sub_82A0C568) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x82A0C570;
	__savegprlr_29(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,120
	ctx.r11.s64 = 120;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// li r4,257
	ctx.r4.s64 = 257;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x82a842f0
	ctx.lr = 0x82A0C5A0;
	sub_82A842F0(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x82a0c5bc
	if (ctx.cr0.lt) goto loc_82A0C5BC;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82a0c440
	ctx.lr = 0x82A0C5B4;
	sub_82A0C440(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x82a0c5cc
	if (!ctx.cr0.lt) goto loc_82A0C5CC;
loc_82A0C5BC:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82a0c440
	ctx.lr = 0x82A0C5C8;
	sub_82A0C440(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_82A0C5CC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A0C5D8"))) PPC_WEAK_FUNC(sub_82A0C5D8);
PPC_FUNC_IMPL(__imp__sub_82A0C5D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7664
	ctx.lr = 0x82A0C5E0;
	__savegprlr_23(ctx, base);
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r11,120
	ctx.r11.s64 = 120;
	// li r5,120
	ctx.r5.s64 = 120;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82fa7cf0
	ctx.lr = 0x82A0C600;
	sub_82FA7CF0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// addi r5,r11,-25296
	ctx.r5.s64 = ctx.r11.s64 + -25296;
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// li r6,10
	ctx.r6.s64 = 10;
	// li r4,257
	ctx.r4.s64 = 257;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x82a842f0
	ctx.lr = 0x82A0C620;
	sub_82A842F0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r30,r31,20
	ctx.r30.s64 = ctx.r31.s64 + 20;
	// addi r25,r11,-25320
	ctx.r25.s64 = ctx.r11.s64 + -25320;
	// addi r29,r31,16
	ctx.r29.s64 = ctx.r31.s64 + 16;
	// addi r28,r31,12
	ctx.r28.s64 = ctx.r31.s64 + 12;
	// addi r27,r31,8
	ctx.r27.s64 = ctx.r31.s64 + 8;
	// addi r26,r31,4
	ctx.r26.s64 = ctx.r31.s64 + 4;
	// addi r24,r31,32
	ctx.r24.s64 = ctx.r31.s64 + 32;
	// addi r23,r31,28
	ctx.r23.s64 = ctx.r31.s64 + 28;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// stw r24,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r24.u32);
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// stw r23,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r23.u32);
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82fa6b58
	ctx.lr = 0x82A0C670;
	sub_82FA6B58(ctx, base);
	// cmpwi cr6,r3,8
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 8, ctx.xer);
	// beq cr6,0x82a0c6a8
	if (ctx.cr6.eq) goto loc_82A0C6A8;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// stw r24,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r24.u32);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// stw r23,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r23.u32);
	// addi r3,r11,-25352
	ctx.r3.s64 = ctx.r11.s64 + -25352;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x82fa6b58
	ctx.lr = 0x82A0C6A8;
	sub_82FA6B58(ctx, base);
loc_82A0C6A8:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// mulli r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 * 3;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// addi r5,r10,-25364
	ctx.r5.s64 = ctx.r10.s64 + -25364;
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// li r6,12
	ctx.r6.s64 = 12;
	// li r4,257
	ctx.r4.s64 = 257;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x82a842f0
	ctx.lr = 0x82A0C6D4;
	sub_82A842F0(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r31,r31,24
	ctx.r31.s64 = ctx.r31.s64 + 24;
	// addi r30,r11,26556
	ctx.r30.s64 = ctx.r11.s64 + 26556;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82fa6b58
	ctx.lr = 0x82A0C6F0;
	sub_82FA6B58(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x82a0c70c
	if (ctx.cr6.eq) goto loc_82A0C70C;
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r11,-23432
	ctx.r3.s64 = ctx.r11.s64 + -23432;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x82fa6b58
	ctx.lr = 0x82A0C70C;
	sub_82FA6B58(ctx, base);
loc_82A0C70C:
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x82fa76b4
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A0C714"))) PPC_WEAK_FUNC(sub_82A0C714);
PPC_FUNC_IMPL(__imp__sub_82A0C714) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A0C718"))) PPC_WEAK_FUNC(sub_82A0C718);
PPC_FUNC_IMPL(__imp__sub_82A0C718) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa766c
	ctx.lr = 0x82A0C720;
	__savegprlr_25(ctx, base);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// li r11,120
	ctx.r11.s64 = 120;
	// li r5,120
	ctx.r5.s64 = 120;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82fa7cf0
	ctx.lr = 0x82A0C748;
	sub_82FA7CF0(ctx, base);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_82A0C74C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82a0c74c
	if (!ctx.cr6.eq) goto loc_82A0C74C;
	// subf r11,r30,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r30.s64;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// li r4,257
	ctx.r4.s64 = 257;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x82a842f0
	ctx.lr = 0x82A0C784;
	sub_82A842F0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r30,r31,16
	ctx.r30.s64 = ctx.r31.s64 + 16;
	// addi r26,r11,-25284
	ctx.r26.s64 = ctx.r11.s64 + -25284;
	// addi r29,r31,12
	ctx.r29.s64 = ctx.r31.s64 + 12;
	// addi r28,r31,8
	ctx.r28.s64 = ctx.r31.s64 + 8;
	// addi r27,r31,4
	ctx.r27.s64 = ctx.r31.s64 + 4;
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82fa6b58
	ctx.lr = 0x82A0C7BC;
	sub_82FA6B58(ctx, base);
	// cmpwi cr6,r3,5
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 5, ctx.xer);
	// beq cr6,0x82a0c7e4
	if (ctx.cr6.eq) goto loc_82A0C7E4;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82fa6b58
	ctx.lr = 0x82A0C7E4;
	sub_82FA6B58(ctx, base);
loc_82A0C7E4:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r10,0(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x82a0c804
	if (ctx.cr6.gt) goto loc_82A0C804;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82a0c84c
	if (!ctx.cr6.gt) goto loc_82A0C84C;
loc_82A0C804:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82fa6b58
	ctx.lr = 0x82A0C824;
	sub_82FA6B58(ctx, base);
	// cmpwi cr6,r3,5
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 5, ctx.xer);
	// beq cr6,0x82a0c84c
	if (ctx.cr6.eq) goto loc_82A0C84C;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82fa6b58
	ctx.lr = 0x82A0C84C;
	sub_82FA6B58(ctx, base);
loc_82A0C84C:
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x82fa76bc
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A0C854"))) PPC_WEAK_FUNC(sub_82A0C854);
PPC_FUNC_IMPL(__imp__sub_82A0C854) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A0C858"))) PPC_WEAK_FUNC(sub_82A0C858);
PPC_FUNC_IMPL(__imp__sub_82A0C858) {
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
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// addi r4,r11,-25156
	ctx.r4.s64 = ctx.r11.s64 + -25156;
	// addi r3,r10,-25172
	ctx.r3.s64 = ctx.r10.s64 + -25172;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// bl 0x82a0c718
	ctx.lr = 0x82A0C884;
	sub_82A0C718(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// addi r5,r31,40
	ctx.r5.s64 = ctx.r31.s64 + 40;
	// addi r4,r11,-25188
	ctx.r4.s64 = ctx.r11.s64 + -25188;
	// addi r3,r10,-25208
	ctx.r3.s64 = ctx.r10.s64 + -25208;
	// bl 0x82a0c718
	ctx.lr = 0x82A0C89C;
	sub_82A0C718(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// addi r5,r31,60
	ctx.r5.s64 = ctx.r31.s64 + 60;
	// addi r4,r11,-25224
	ctx.r4.s64 = ctx.r11.s64 + -25224;
	// addi r3,r10,-25240
	ctx.r3.s64 = ctx.r10.s64 + -25240;
	// bl 0x82a0c718
	ctx.lr = 0x82A0C8B4;
	sub_82A0C718(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// addi r5,r31,20
	ctx.r5.s64 = ctx.r31.s64 + 20;
	// addi r4,r11,-25252
	ctx.r4.s64 = ctx.r11.s64 + -25252;
	// addi r3,r10,-25268
	ctx.r3.s64 = ctx.r10.s64 + -25268;
	// bl 0x82a0c718
	ctx.lr = 0x82A0C8CC;
	sub_82A0C718(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r9,20(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r10,40(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// or r7,r11,r9
	ctx.r7.u64 = ctx.r11.u64 | ctx.r9.u64;
	// lwz r8,60(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// and. r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 & ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// or r7,r7,r10
	ctx.r7.u64 = ctx.r7.u64 | ctx.r10.u64;
	// or r7,r7,r8
	ctx.r7.u64 = ctx.r7.u64 | ctx.r8.u64;
	// addi r7,r7,-8191
	ctx.r7.s64 = ctx.r7.s64 + -8191;
	// cntlzw r7,r7
	ctx.r7.u64 = ctx.r7.u32 == 0 ? 32 : __builtin_clz(ctx.r7.u32);
	// rlwinm r7,r7,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 27) & 0x1;
	// bne 0x82a0c928
	if (!ctx.cr0.eq) goto loc_82A0C928;
	// and. r6,r11,r8
	ctx.r6.u64 = ctx.r11.u64 & ctx.r8.u64;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bne 0x82a0c928
	if (!ctx.cr0.eq) goto loc_82A0C928;
	// and. r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 & ctx.r9.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82a0c928
	if (!ctx.cr0.eq) goto loc_82A0C928;
	// and. r11,r10,r8
	ctx.r11.u64 = ctx.r10.u64 & ctx.r8.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82a0c928
	if (!ctx.cr0.eq) goto loc_82A0C928;
	// and. r11,r9,r10
	ctx.r11.u64 = ctx.r9.u64 & ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82a0c928
	if (!ctx.cr0.eq) goto loc_82A0C928;
	// and. r11,r9,r8
	ctx.r11.u64 = ctx.r9.u64 & ctx.r8.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq 0x82a0c92c
	if (ctx.cr0.eq) goto loc_82A0C92C;
loc_82A0C928:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82A0C92C:
	// clrlwi. r10,r7,24
	ctx.r10.u64 = ctx.r7.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82a0c944
	if (ctx.cr0.eq) goto loc_82A0C944;
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82a0c944
	if (ctx.cr0.eq) goto loc_82A0C944;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82a0c94c
	goto loc_82A0C94C;
loc_82A0C944:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
loc_82A0C94C:
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

__attribute__((alias("__imp__sub_82A0C960"))) PPC_WEAK_FUNC(sub_82A0C960);
PPC_FUNC_IMPL(__imp__sub_82A0C960) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r4,224
	ctx.r11.s64 = ctx.r4.s64 + 224;
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,328
	ctx.r11.s64 = ctx.r11.s64 + 328;
loc_82A0C974:
	// lwz r8,-4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82a0c98c
	if (!ctx.cr6.eq) goto loc_82A0C98C;
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r8,2
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 2, ctx.xer);
	// beq cr6,0x82a0c9a0
	if (ctx.cr6.eq) goto loc_82A0C9A0;
loc_82A0C98C:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,352
	ctx.r11.s64 = ctx.r11.s64 + 352;
	// cmplwi cr6,r10,6
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 6, ctx.xer);
	// blt cr6,0x82a0c974
	if (ctx.cr6.lt) goto loc_82A0C974;
	// blr 
	return;
loc_82A0C9A0:
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82a0c9ac
	if (ctx.cr6.eq) goto loc_82A0C9AC;
	// stw r10,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r10.u32);
loc_82A0C9AC:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A0C9B4"))) PPC_WEAK_FUNC(sub_82A0C9B4);
PPC_FUNC_IMPL(__imp__sub_82A0C9B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A0C9B8"))) PPC_WEAK_FUNC(sub_82A0C9B8);
PPC_FUNC_IMPL(__imp__sub_82A0C9B8) {
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
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r11,24028(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24028);
	// li r4,3
	ctx.r4.s64 = 3;
	// addis r3,r11,2
	ctx.r3.s64 = ctx.r11.s64 + 131072;
	// addi r3,r3,19120
	ctx.r3.s64 = ctx.r3.s64 + 19120;
	// bl 0x83179414
	ctx.lr = 0x82A0C9F0;
	__imp__KeWaitForSingleObject(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82a0ca08
	if (!ctx.cr0.eq) goto loc_82A0CA08;
	// bl 0x82a74720
	ctx.lr = 0x82A0C9FC;
	sub_82A74720(ctx, base);
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// stw r3,24036(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24036, ctx.r3.u32);
	// b 0x82a0ca14
	goto loc_82A0CA14;
loc_82A0CA08:
	// lis r10,-31963
	ctx.r10.s64 = -2094727168;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,24036(r10)
	PPC_STORE_U32(ctx.r10.u32 + 24036, ctx.r11.u32);
loc_82A0CA14:
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

__attribute__((alias("__imp__sub_82A0CA2C"))) PPC_WEAK_FUNC(sub_82A0CA2C);
PPC_FUNC_IMPL(__imp__sub_82A0CA2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A0CA30"))) PPC_WEAK_FUNC(sub_82A0CA30);
PPC_FUNC_IMPL(__imp__sub_82A0CA30) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31963
	ctx.r10.s64 = -2094727168;
	// lis r9,-31963
	ctx.r9.s64 = -2094727168;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,24036(r10)
	PPC_STORE_U32(ctx.r10.u32 + 24036, ctx.r11.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,24028(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 24028);
	// addis r3,r11,2
	ctx.r3.s64 = ctx.r11.s64 + 131072;
	// addi r3,r3,19120
	ctx.r3.s64 = ctx.r3.s64 + 19120;
	// b 0x831796f4
	__imp__KeReleaseMutant(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A0CA5C"))) PPC_WEAK_FUNC(sub_82A0CA5C);
PPC_FUNC_IMPL(__imp__sub_82A0CA5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A0CA60"))) PPC_WEAK_FUNC(sub_82A0CA60);
PPC_FUNC_IMPL(__imp__sub_82A0CA60) {
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
	// bl 0x831791c4
	ctx.lr = 0x82A0CA78;
	__imp__RtlInitializeCriticalSection(ctx, base);
	// li r11,256
	ctx.r11.s64 = 256;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r5,2048
	ctx.r5.s64 = 2048;
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r10,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r10.u32);
	// addi r3,r31,40
	ctx.r3.s64 = ctx.r31.s64 + 40;
	// bl 0x82fa7cf0
	ctx.lr = 0x82A0CA98;
	sub_82FA7CF0(ctx, base);
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

__attribute__((alias("__imp__sub_82A0CAAC"))) PPC_WEAK_FUNC(sub_82A0CAAC);
PPC_FUNC_IMPL(__imp__sub_82A0CAAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A0CAB0"))) PPC_WEAK_FUNC(sub_82A0CAB0);
PPC_FUNC_IMPL(__imp__sub_82A0CAB0) {
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
	// beq cr6,0x82a0cae0
	if (ctx.cr6.eq) goto loc_82A0CAE0;
	// lis r4,8349
	ctx.r4.s64 = 547160064;
	// bl 0x82691460
	ctx.lr = 0x82A0CAD8;
	sub_82691460(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_82A0CAE0:
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

__attribute__((alias("__imp__sub_82A0CAF4"))) PPC_WEAK_FUNC(sub_82A0CAF4);
PPC_FUNC_IMPL(__imp__sub_82A0CAF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A0CAF8"))) PPC_WEAK_FUNC(sub_82A0CAF8);
PPC_FUNC_IMPL(__imp__sub_82A0CAF8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7640
	ctx.lr = 0x82A0CB00;
	__savegprlr_14(ctx, base);
	// stwu r1,-432(r1)
	ea = -432 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// ld r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 8);
	// stfs f1,548(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 548, temp.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// clrldi r11,r11,63
	ctx.r11.u64 = ctx.r11.u64 & 0x1;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// mr r26,r8
	ctx.r26.u64 = ctx.r8.u64;
	// mr r25,r9
	ctx.r25.u64 = ctx.r9.u64;
	// mr r24,r10
	ctx.r24.u64 = ctx.r10.u64;
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// beq cr6,0x82a0cc28
	if (ctx.cr6.eq) goto loc_82A0CC28;
	// bl 0x83178d64
	ctx.lr = 0x82A0CB3C;
	__imp__XamGetCurrentTitleId(ctx, base);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// lwz r9,676(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 676);
	// clrlwi r10,r28,16
	ctx.r10.u64 = ctx.r28.u32 & 0xFFFF;
	// ld r8,664(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 664);
	// clrlwi r24,r24,24
	ctx.r24.u64 = ctx.r24.u32 & 0xFF;
	// lwz r5,652(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 652);
	// clrlwi r26,r26,24
	ctx.r26.u64 = ctx.r26.u32 & 0xFF;
	// lwz r4,644(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 644);
	// li r6,98
	ctx.r6.s64 = 98;
	// lwz r3,636(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 636);
	// lbz r11,663(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 663);
	// stw r9,276(r1)
	PPC_STORE_U32(ctx.r1.u32 + 276, ctx.r9.u32);
	// clrlwi r9,r29,24
	ctx.r9.u64 = ctx.r29.u32 & 0xFF;
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// std r8,264(r1)
	PPC_STORE_U64(ctx.r1.u32 + 264, ctx.r8.u64);
	// stw r5,252(r1)
	PPC_STORE_U32(ctx.r1.u32 + 252, ctx.r5.u32);
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// stw r11,260(r1)
	PPC_STORE_U32(ctx.r1.u32 + 260, ctx.r11.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r4,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r4.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r3,236(r1)
	PPC_STORE_U32(ctx.r1.u32 + 236, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lbz r11,543(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 543);
	// lbz r31,535(r1)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r1.u32 + 535);
	// lbz r30,527(r1)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r1.u32 + 527);
	// lbz r29,519(r1)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r1.u32 + 519);
	// lwz r28,628(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 628);
	// lwz r23,620(r1)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r1.u32 + 620);
	// lwz r22,612(r1)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r1.u32 + 612);
	// lwz r21,604(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 604);
	// lwz r20,596(r1)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r1.u32 + 596);
	// lwz r19,588(r1)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r1.u32 + 588);
	// lwz r18,580(r1)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r1.u32 + 580);
	// lwz r17,572(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + 572);
	// lwz r16,564(r1)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r1.u32 + 564);
	// lwz r15,556(r1)
	ctx.r15.u64 = PPC_LOAD_U32(ctx.r1.u32 + 556);
	// lwz r14,548(r1)
	ctx.r14.u64 = PPC_LOAD_U32(ctx.r1.u32 + 548);
	// stw r28,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r28.u32);
	// stw r23,220(r1)
	PPC_STORE_U32(ctx.r1.u32 + 220, ctx.r23.u32);
	// stw r22,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r22.u32);
	// stw r21,204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 204, ctx.r21.u32);
	// stw r20,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r20.u32);
	// stw r19,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r19.u32);
	// stw r18,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r18.u32);
	// stw r17,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r17.u32);
	// stw r16,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r16.u32);
	// stw r15,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r15.u32);
	// stw r14,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r14.u32);
	// stw r11,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r11.u32);
	// stw r31,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r31.u32);
	// stw r30,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r30.u32);
	// stw r29,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r29.u32);
	// stw r24,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r24.u32);
	// stw r25,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r25.u32);
	// stw r26,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r26.u32);
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// bl 0x83179614
	ctx.lr = 0x82A0CC24;
	__imp__EtxProducerLog(ctx, base);
	// b 0x82a0cc30
	goto loc_82A0CC30;
loc_82A0CC28:
	// lis r3,16389
	ctx.r3.s64 = 1074069504;
	// ori r3,r3,2
	ctx.r3.u64 = ctx.r3.u64 | 2;
loc_82A0CC30:
	// addi r1,r1,432
	ctx.r1.s64 = ctx.r1.s64 + 432;
	// b 0x82fa7690
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A0CC38"))) PPC_WEAK_FUNC(sub_82A0CC38);
PPC_FUNC_IMPL(__imp__sub_82A0CC38) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7640
	ctx.lr = 0x82A0CC40;
	__savegprlr_14(ctx, base);
	// stwu r1,-560(r1)
	ea = -560 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// ld r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 8);
	// stfs f1,676(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 676, temp.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r7,612(r1)
	PPC_STORE_U32(ctx.r1.u32 + 612, ctx.r7.u32);
	// rlwinm r11,r11,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// stw r9,628(r1)
	PPC_STORE_U32(ctx.r1.u32 + 628, ctx.r9.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r27,r8
	ctx.r27.u64 = ctx.r8.u64;
	// mr r26,r10
	ctx.r26.u64 = ctx.r10.u64;
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// beq cr6,0x82a0ce54
	if (ctx.cr6.eq) goto loc_82A0CE54;
	// bl 0x83178d64
	ctx.lr = 0x82A0CC7C;
	__imp__XamGetCurrentTitleId(ctx, base);
	// lbz r11,847(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 847);
	// lbz r10,839(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 839);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// ld r9,848(r1)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 848);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lbz r8,831(r1)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r1.u32 + 831);
	// li r5,4
	ctx.r5.s64 = 4;
	// lbz r4,823(r1)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r1.u32 + 823);
	// clrlwi r26,r26,24
	ctx.r26.u64 = ctx.r26.u32 & 0xFF;
	// lbz r6,815(r1)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r1.u32 + 815);
	// clrlwi r27,r27,24
	ctx.r27.u64 = ctx.r27.u32 & 0xFF;
	// lbz r24,807(r1)
	ctx.r24.u64 = PPC_LOAD_U8(ctx.r1.u32 + 807);
	// lbz r23,791(r1)
	ctx.r23.u64 = PPC_LOAD_U8(ctx.r1.u32 + 791);
	// ld r25,792(r1)
	ctx.r25.u64 = PPC_LOAD_U64(ctx.r1.u32 + 792);
	// stw r10,340(r1)
	PPC_STORE_U32(ctx.r1.u32 + 340, ctx.r10.u32);
	// clrlwi r10,r28,16
	ctx.r10.u64 = ctx.r28.u32 & 0xFFFF;
	// stw r11,336(r1)
	PPC_STORE_U32(ctx.r1.u32 + 336, ctx.r11.u32);
	// std r9,384(r1)
	PPC_STORE_U64(ctx.r1.u32 + 384, ctx.r9.u64);
	// clrlwi r9,r29,24
	ctx.r9.u64 = ctx.r29.u32 & 0xFF;
	// stw r8,344(r1)
	PPC_STORE_U32(ctx.r1.u32 + 344, ctx.r8.u32);
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// stw r4,348(r1)
	PPC_STORE_U32(ctx.r1.u32 + 348, ctx.r4.u32);
	// li r4,2
	ctx.r4.s64 = 2;
	// stw r6,352(r1)
	PPC_STORE_U32(ctx.r1.u32 + 352, ctx.r6.u32);
	// li r6,112
	ctx.r6.s64 = 112;
	// std r25,376(r1)
	PPC_STORE_U64(ctx.r1.u32 + 376, ctx.r25.u64);
	// stw r24,356(r1)
	PPC_STORE_U32(ctx.r1.u32 + 356, ctx.r24.u32);
	// stw r23,360(r1)
	PPC_STORE_U32(ctx.r1.u32 + 360, ctx.r23.u32);
	// lbz r28,647(r1)
	ctx.r28.u64 = PPC_LOAD_U8(ctx.r1.u32 + 647);
	// lbz r30,663(r1)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r1.u32 + 663);
	// lbz r29,655(r1)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r1.u32 + 655);
	// std r8,392(r1)
	PPC_STORE_U64(ctx.r1.u32 + 392, ctx.r8.u64);
	// lwz r11,860(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 860);
	// lwz r25,780(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 780);
	// stw r7,364(r1)
	PPC_STORE_U32(ctx.r1.u32 + 364, ctx.r7.u32);
	// stw r6,368(r1)
	PPC_STORE_U32(ctx.r1.u32 + 368, ctx.r6.u32);
	// std r5,400(r1)
	PPC_STORE_U64(ctx.r1.u32 + 400, ctx.r5.u64);
	// lbz r31,671(r1)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r1.u32 + 671);
	// lwz r24,772(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 772);
	// lwz r17,340(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + 340);
	// lwz r19,336(r1)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r1.u32 + 336);
	// stw r10,340(r1)
	PPC_STORE_U32(ctx.r1.u32 + 340, ctx.r10.u32);
	// stw r9,336(r1)
	PPC_STORE_U32(ctx.r1.u32 + 336, ctx.r9.u32);
	// ld r18,384(r1)
	ctx.r18.u64 = PPC_LOAD_U64(ctx.r1.u32 + 384);
	// lwz r16,344(r1)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r1.u32 + 344);
	// lwz r15,348(r1)
	ctx.r15.u64 = PPC_LOAD_U32(ctx.r1.u32 + 348);
	// lwz r14,352(r1)
	ctx.r14.u64 = PPC_LOAD_U32(ctx.r1.u32 + 352);
	// ld r10,376(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 376);
	// lwz r9,356(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 356);
	// lwz r8,360(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 360);
	// stw r4,376(r1)
	PPC_STORE_U32(ctx.r1.u32 + 376, ctx.r4.u32);
	// stw r3,384(r1)
	PPC_STORE_U32(ctx.r1.u32 + 384, ctx.r3.u32);
	// stw r28,344(r1)
	PPC_STORE_U32(ctx.r1.u32 + 344, ctx.r28.u32);
	// stw r29,348(r1)
	PPC_STORE_U32(ctx.r1.u32 + 348, ctx.r29.u32);
	// stw r30,352(r1)
	PPC_STORE_U32(ctx.r1.u32 + 352, ctx.r30.u32);
	// lwz r23,764(r1)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r1.u32 + 764);
	// lwz r22,756(r1)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r1.u32 + 756);
	// lwz r21,748(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 748);
	// lwz r20,740(r1)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r1.u32 + 740);
	// lwz r7,732(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 732);
	// lwz r6,724(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 724);
	// lwz r5,716(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 716);
	// lwz r4,708(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 708);
	// lwz r3,700(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 700);
	// lwz r28,692(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 692);
	// lwz r29,684(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 684);
	// lwz r30,676(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 676);
	// stw r26,360(r1)
	PPC_STORE_U32(ctx.r1.u32 + 360, ctx.r26.u32);
	// stw r27,356(r1)
	PPC_STORE_U32(ctx.r1.u32 + 356, ctx.r27.u32);
	// stw r11,332(r1)
	PPC_STORE_U32(ctx.r1.u32 + 332, ctx.r11.u32);
	// std r18,320(r1)
	PPC_STORE_U64(ctx.r1.u32 + 320, ctx.r18.u64);
	// stw r19,316(r1)
	PPC_STORE_U32(ctx.r1.u32 + 316, ctx.r19.u32);
	// stw r17,308(r1)
	PPC_STORE_U32(ctx.r1.u32 + 308, ctx.r17.u32);
	// stw r16,300(r1)
	PPC_STORE_U32(ctx.r1.u32 + 300, ctx.r16.u32);
	// stw r15,292(r1)
	PPC_STORE_U32(ctx.r1.u32 + 292, ctx.r15.u32);
	// stw r14,284(r1)
	PPC_STORE_U32(ctx.r1.u32 + 284, ctx.r14.u32);
	// stw r9,276(r1)
	PPC_STORE_U32(ctx.r1.u32 + 276, ctx.r9.u32);
	// std r10,264(r1)
	PPC_STORE_U64(ctx.r1.u32 + 264, ctx.r10.u64);
	// stw r8,260(r1)
	PPC_STORE_U32(ctx.r1.u32 + 260, ctx.r8.u32);
	// stw r25,252(r1)
	PPC_STORE_U32(ctx.r1.u32 + 252, ctx.r25.u32);
	// stw r31,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r31.u32);
	// rotlwi r11,r26,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r26.u32, 0);
	// lwz r31,352(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 352);
	// stw r7,204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 204, ctx.r7.u32);
	// stw r6,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r6.u32);
	// stw r5,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r5.u32);
	// stw r4,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r4.u32);
	// stw r31,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r31.u32);
	// lwz r31,348(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 348);
	// stw r3,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r3.u32);
	// stw r24,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r24.u32);
	// stw r23,236(r1)
	PPC_STORE_U32(ctx.r1.u32 + 236, ctx.r23.u32);
	// lwz r27,628(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 628);
	// stw r31,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r31.u32);
	// lwz r26,356(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 356);
	// lwz r25,612(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 612);
	// lwz r31,344(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 344);
	// lwz r10,340(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 340);
	// lwz r9,336(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 336);
	// ld r8,392(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 392);
	// lwz r7,364(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 364);
	// lwz r6,368(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 368);
	// ld r5,400(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 400);
	// lwz r4,376(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 376);
	// lwz r3,384(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 384);
	// stw r22,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r22.u32);
	// stw r21,220(r1)
	PPC_STORE_U32(ctx.r1.u32 + 220, ctx.r21.u32);
	// stw r20,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r20.u32);
	// stw r28,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r28.u32);
	// stw r29,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r29.u32);
	// stw r30,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r30.u32);
	// stw r31,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r31.u32);
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// stw r27,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r27.u32);
	// stw r26,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r26.u32);
	// stw r25,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r25.u32);
	// bl 0x83179614
	ctx.lr = 0x82A0CE50;
	__imp__EtxProducerLog(ctx, base);
	// b 0x82a0ce5c
	goto loc_82A0CE5C;
loc_82A0CE54:
	// lis r3,16389
	ctx.r3.s64 = 1074069504;
	// ori r3,r3,2
	ctx.r3.u64 = ctx.r3.u64 | 2;
loc_82A0CE5C:
	// addi r1,r1,560
	ctx.r1.s64 = ctx.r1.s64 + 560;
	// b 0x82fa7690
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A0CE64"))) PPC_WEAK_FUNC(sub_82A0CE64);
PPC_FUNC_IMPL(__imp__sub_82A0CE64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A0CE68"))) PPC_WEAK_FUNC(sub_82A0CE68);
PPC_FUNC_IMPL(__imp__sub_82A0CE68) {
	PPC_FUNC_PROLOGUE();
	// mullw r11,r4,r4
	ctx.r11.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r4.s32);
	// stw r5,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r5.u32);
	// stw r4,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r4.u32);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r4,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r5
	ctx.r10.u64 = ctx.r11.u64 + ctx.r5.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// add r7,r9,r10
	ctx.r7.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x82a0cec8
	if (!ctx.cr6.gt) goto loc_82A0CEC8;
	// li r10,0
	ctx.r10.s64 = 0;
loc_82A0CE98:
	// lwz r9,16(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mullw r9,r11,r9
	ctx.r9.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r9.s32);
	// lwz r6,4(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// stwx r9,r6,r10
	PPC_STORE_U32(ctx.r6.u32 + ctx.r10.u32, ctx.r9.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// lwz r9,16(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x82a0ce98
	if (ctx.cr6.lt) goto loc_82A0CE98;
loc_82A0CEC8:
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// stw r7,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r7.u32);
	// add r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 + ctx.r11.u64;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A0CEDC"))) PPC_WEAK_FUNC(sub_82A0CEDC);
PPC_FUNC_IMPL(__imp__sub_82A0CEDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A0CEE0"))) PPC_WEAK_FUNC(sub_82A0CEE0);
PPC_FUNC_IMPL(__imp__sub_82A0CEE0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// li r10,16
	ctx.r10.s64 = 16;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r11,r3,68
	ctx.r11.s64 = ctx.r3.s64 + 68;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82A0CEF4:
	// li r10,1
	ctx.r10.s64 = 1;
	// slw r8,r10,r6
	ctx.r8.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r6.u8 & 0x3F));
	// and. r10,r8,r5
	ctx.r10.u64 = ctx.r8.u64 & ctx.r5.u64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82a0cf54
	if (ctx.cr0.eq) goto loc_82A0CF54;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// and. r10,r8,r4
	ctx.r10.u64 = ctx.r8.u64 & ctx.r4.u64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lwz r31,-64(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + -64);
	// rlwinm r7,r9,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r9,r31,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r7,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r7.u32);
	// stw r9,-64(r11)
	PPC_STORE_U32(ctx.r11.u32 + -64, ctx.r9.u32);
	// beq 0x82a0cf2c
	if (ctx.cr0.eq) goto loc_82A0CF2C;
	// ori r9,r9,1
	ctx.r9.u64 = ctx.r9.u64 | 1;
	// stw r9,-64(r11)
	PPC_STORE_U32(ctx.r11.u32 + -64, ctx.r9.u32);
loc_82A0CF2C:
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// and r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 & ctx.r8.u64;
	// addic r8,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r8.s64 = ctx.r9.s64 + -1;
	// subfe r9,r8,r9
	temp.u8 = (~ctx.r8.u32 + ctx.r9.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r8.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addic r8,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r8.s64 = ctx.r10.s64 + -1;
	// subfe r10,r8,r10
	temp.u8 = (~ctx.r8.u32 + ctx.r10.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r8.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82a0cf54
	if (ctx.cr6.eq) goto loc_82A0CF54;
	// ori r10,r7,1
	ctx.r10.u64 = ctx.r7.u64 | 1;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_82A0CF54:
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x82a0cef4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82A0CEF4;
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A0CF68"))) PPC_WEAK_FUNC(sub_82A0CF68);
PPC_FUNC_IMPL(__imp__sub_82A0CF68) {
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
	// bl 0x82a16660
	ctx.lr = 0x82A0CF80;
	sub_82A16660(ctx, base);
	// addis r3,r31,1
	ctx.r3.s64 = ctx.r31.s64 + 65536;
	// li r5,132
	ctx.r5.s64 = 132;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r3,7980
	ctx.r3.s64 = ctx.r3.s64 + 7980;
	// bl 0x82fa7cf0
	ctx.lr = 0x82A0CF94;
	sub_82FA7CF0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a16370
	ctx.lr = 0x82A0CF9C;
	sub_82A16370(ctx, base);
	// lis r11,1
	ctx.r11.s64 = 65536;
	// li r10,-2
	ctx.r10.s64 = -2;
	// ori r11,r11,7976
	ctx.r11.u64 = ctx.r11.u64 | 7976;
	// stwx r10,r31,r11
	PPC_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.r10.u32);
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

__attribute__((alias("__imp__sub_82A0CFC0"))) PPC_WEAK_FUNC(sub_82A0CFC0);
PPC_FUNC_IMPL(__imp__sub_82A0CFC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7670
	ctx.lr = 0x82A0CFC8;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r5,2
	ctx.r5.s64 = 131072;
	// li r4,0
	ctx.r4.s64 = 0;
	// ori r5,r5,19120
	ctx.r5.u64 = ctx.r5.u64 | 19120;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// bl 0x82fa7cf0
	ctx.lr = 0x82A0CFE0;
	sub_82FA7CF0(ctx, base);
	// addi r30,r27,2704
	ctx.r30.s64 = ctx.r27.s64 + 2704;
	// li r31,2
	ctx.r31.s64 = 2;
loc_82A0CFE8:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a0cf68
	ctx.lr = 0x82A0CFF0;
	sub_82A0CF68(ctx, base);
	// addis r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 65536;
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r30,r30,8112
	ctx.r30.s64 = ctx.r30.s64 + 8112;
	// bne 0x82a0cfe8
	if (!ctx.cr0.eq) goto loc_82A0CFE8;
	// addi r30,r27,2408
	ctx.r30.s64 = ctx.r27.s64 + 2408;
	// li r28,2
	ctx.r28.s64 = 2;
	// li r31,-2
	ctx.r31.s64 = -2;
	// li r26,254
	ctx.r26.s64 = 254;
	// li r29,-1
	ctx.r29.s64 = -1;
loc_82A0D014:
	// li r5,88
	ctx.r5.s64 = 88;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r30,-72
	ctx.r3.s64 = ctx.r30.s64 + -72;
	// bl 0x82fa7cf0
	ctx.lr = 0x82A0D024;
	sub_82FA7CF0(ctx, base);
	// stw r31,-12(r30)
	PPC_STORE_U32(ctx.r30.u32 + -12, ctx.r31.u32);
	// stw r26,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r26.u32);
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// stw r31,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r31.u32);
	// stw r31,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r31.u32);
	// stw r29,-36(r30)
	PPC_STORE_U32(ctx.r30.u32 + -36, ctx.r29.u32);
	// stw r29,-52(r30)
	PPC_STORE_U32(ctx.r30.u32 + -52, ctx.r29.u32);
	// addi r30,r30,88
	ctx.r30.s64 = ctx.r30.s64 + 88;
	// bne 0x82a0d014
	if (!ctx.cr0.eq) goto loc_82A0D014;
	// addi r30,r27,2584
	ctx.r30.s64 = ctx.r27.s64 + 2584;
	// li r28,2
	ctx.r28.s64 = 2;
loc_82A0D050:
	// li r5,88
	ctx.r5.s64 = 88;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r30,-72
	ctx.r3.s64 = ctx.r30.s64 + -72;
	// bl 0x82fa7cf0
	ctx.lr = 0x82A0D060;
	sub_82FA7CF0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r31,-12(r30)
	PPC_STORE_U32(ctx.r30.u32 + -12, ctx.r31.u32);
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// stw r26,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r26.u32);
	// stw r31,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r31.u32);
	// stw r31,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r31.u32);
	// stw r29,-36(r30)
	PPC_STORE_U32(ctx.r30.u32 + -36, ctx.r29.u32);
	// stw r29,-52(r30)
	PPC_STORE_U32(ctx.r30.u32 + -52, ctx.r29.u32);
	// stw r11,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r11.u32);
	// addi r30,r30,96
	ctx.r30.s64 = ctx.r30.s64 + 96;
	// bne 0x82a0d050
	if (!ctx.cr0.eq) goto loc_82A0D050;
	// li r10,8
	ctx.r10.s64 = 8;
	// addi r11,r27,-16
	ctx.r11.s64 = ctx.r27.s64 + -16;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82A0D098:
	// stwu r26,28(r11)
	ea = 28 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r26.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x82a0d098
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82A0D098;
	// li r10,6
	ctx.r10.s64 = 6;
	// addi r11,r27,192
	ctx.r11.s64 = ctx.r27.s64 + 192;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82A0D0AC:
	// stwu r29,352(r11)
	ea = 352 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r29.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x82a0d0ac
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82A0D0AC;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82fa76c0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A0D0BC"))) PPC_WEAK_FUNC(sub_82A0D0BC);
PPC_FUNC_IMPL(__imp__sub_82A0D0BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A0D0C0"))) PPC_WEAK_FUNC(sub_82A0D0C0);
PPC_FUNC_IMPL(__imp__sub_82A0D0C0) {
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
	// lis r31,-31963
	ctx.r31.s64 = -2094727168;
	// lwz r11,24028(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24028);
	// addis r3,r11,9
	ctx.r3.s64 = ctx.r11.s64 + 589824;
	// addi r3,r3,-2396
	ctx.r3.s64 = ctx.r3.s64 + -2396;
	// bl 0x831793b4
	ctx.lr = 0x82A0D0E4;
	__imp__KeResetEvent(ctx, base);
	// lwz r11,24028(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24028);
	// li r5,0
	ctx.r5.s64 = 0;
	// addis r3,r11,9
	ctx.r3.s64 = ctx.r11.s64 + 589824;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r3,-2412
	ctx.r3.s64 = ctx.r3.s64 + -2412;
	// bl 0x831792b4
	ctx.lr = 0x82A0D0FC;
	__imp__KeSetEvent(ctx, base);
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

__attribute__((alias("__imp__sub_82A0D110"))) PPC_WEAK_FUNC(sub_82A0D110);
PPC_FUNC_IMPL(__imp__sub_82A0D110) {
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
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// lis r10,8
	ctx.r10.s64 = 524288;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
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
	ctx.lr = 0x82A0D144;
	sub_82A81490(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
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

__attribute__((alias("__imp__sub_82A0D160"))) PPC_WEAK_FUNC(sub_82A0D160);
PPC_FUNC_IMPL(__imp__sub_82A0D160) {
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
	// lis r10,6553
	ctx.r10.s64 = 429457408;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// ori r10,r10,39321
	ctx.r10.u64 = ctx.r10.u64 | 39321;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x82a0d198
	if (ctx.cr6.gt) goto loc_82A0D198;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x82a0d1ac
	if (!ctx.cr6.eq) goto loc_82A0D1AC;
loc_82A0D198:
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
loc_82A0D1AC:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// bl 0x82a78340
	ctx.lr = 0x82A0D1C0;
	sub_82A78340(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82A0D1F0"))) PPC_WEAK_FUNC(sub_82A0D1F0);
PPC_FUNC_IMPL(__imp__sub_82A0D1F0) {
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
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// lwz r11,24032(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24032);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a0d240
	if (ctx.cr6.eq) goto loc_82A0D240;
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	// mr r8,r7
	ctx.r8.u64 = ctx.r7.u64;
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// lwz r31,0(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// mtctr r31
	ctx.ctr.u64 = ctx.r31.u64;
	// bctrl 
	ctx.lr = 0x82A0D240;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82A0D240:
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

__attribute__((alias("__imp__sub_82A0D254"))) PPC_WEAK_FUNC(sub_82A0D254);
PPC_FUNC_IMPL(__imp__sub_82A0D254) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A0D258"))) PPC_WEAK_FUNC(sub_82A0D258);
PPC_FUNC_IMPL(__imp__sub_82A0D258) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x82A0D260;
	__savegprlr_28(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r4,r7
	ctx.r4.u64 = ctx.r7.u64;
	// mr r30,r10
	ctx.r30.u64 = ctx.r10.u64;
	// lwz r11,24032(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24032);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a0d2bc
	if (ctx.cr6.eq) goto loc_82A0D2BC;
	// lwz r29,0(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// stw r30,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r30.u32);
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	// lwz r28,252(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 252);
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// mr r8,r4
	ctx.r8.u64 = ctx.r4.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// lwz r30,28(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// stw r28,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r28.u32);
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
	// bctrl 
	ctx.lr = 0x82A0D2BC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82A0D2BC:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A0D2C4"))) PPC_WEAK_FUNC(sub_82A0D2C4);
PPC_FUNC_IMPL(__imp__sub_82A0D2C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A0D2C8"))) PPC_WEAK_FUNC(sub_82A0D2C8);
PPC_FUNC_IMPL(__imp__sub_82A0D2C8) {
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
	// addis r10,r3,1
	ctx.r10.s64 = ctx.r3.s64 + 65536;
	// li r5,2004
	ctx.r5.s64 = 2004;
	// addi r10,r10,-25456
	ctx.r10.s64 = ctx.r10.s64 + -25456;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r11,20
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 20, ctx.xer);
	// bge cr6,0x82a0d330
	if (!ctx.cr6.lt) goto loc_82A0D330;
	// lis r9,0
	ctx.r9.s64 = 0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// ori r9,r9,40084
	ctx.r9.u64 = ctx.r9.u64 | 40084;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// li r8,20
	ctx.r8.s64 = 20;
	// lwzx r10,r3,r9
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r9.u32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// divwu r10,r11,r8
	ctx.r10.u32 = ctx.r11.u32 / ctx.r8.u32;
	// mulli r10,r10,20
	ctx.r10.s64 = ctx.r10.s64 * 20;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// mulli r11,r11,2004
	ctx.r11.s64 = ctx.r11.s64 * 2004;
	// add r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 + ctx.r3.u64;
	// bl 0x82fa77c0
	ctx.lr = 0x82A0D328;
	sub_82FA77C0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82a0d368
	goto loc_82A0D368;
loc_82A0D330:
	// addis r31,r3,1
	ctx.r31.s64 = ctx.r3.s64 + 65536;
	// addi r31,r31,-25452
	ctx.r31.s64 = ctx.r31.s64 + -25452;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mulli r11,r11,2004
	ctx.r11.s64 = ctx.r11.s64 * 2004;
	// add r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 + ctx.r3.u64;
	// bl 0x82fa77c0
	ctx.lr = 0x82A0D348;
	sub_82FA77C0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r10,20
	ctx.r10.s64 = 20;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// li r3,0
	ctx.r3.s64 = 0;
	// divwu r10,r11,r10
	ctx.r10.u32 = ctx.r11.u32 / ctx.r10.u32;
	// mulli r10,r10,20
	ctx.r10.s64 = ctx.r10.s64 * 20;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_82A0D368:
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

__attribute__((alias("__imp__sub_82A0D37C"))) PPC_WEAK_FUNC(sub_82A0D37C);
PPC_FUNC_IMPL(__imp__sub_82A0D37C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A0D380"))) PPC_WEAK_FUNC(sub_82A0D380);
PPC_FUNC_IMPL(__imp__sub_82A0D380) {
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
	// lwz r11,28480(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28480);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r5,1424
	ctx.r5.s64 = 1424;
	// cmplwi cr6,r11,20
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 20, ctx.xer);
	// bge cr6,0x82a0d3dc
	if (!ctx.cr6.lt) goto loc_82A0D3DC;
	// lwz r10,28496(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28496);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// li r9,20
	ctx.r9.s64 = 20;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r11,28480(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28480, ctx.r11.u32);
	// addi r11,r10,-1
	ctx.r11.s64 = ctx.r10.s64 + -1;
	// divwu r10,r11,r9
	ctx.r10.u32 = ctx.r11.u32 / ctx.r9.u32;
	// mulli r10,r10,20
	ctx.r10.s64 = ctx.r10.s64 * 20;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// mulli r11,r11,1424
	ctx.r11.s64 = ctx.r11.s64 * 1424;
	// add r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 + ctx.r3.u64;
	// bl 0x82fa77c0
	ctx.lr = 0x82A0D3D4;
	sub_82FA77C0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82a0d40c
	goto loc_82A0D40C;
loc_82A0D3DC:
	// lwz r11,28496(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28496);
	// mulli r11,r11,1424
	ctx.r11.s64 = ctx.r11.s64 * 1424;
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + ctx.r31.u64;
	// bl 0x82fa77c0
	ctx.lr = 0x82A0D3EC;
	sub_82FA77C0(ctx, base);
	// lwz r11,28496(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28496);
	// li r10,20
	ctx.r10.s64 = 20;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// li r3,0
	ctx.r3.s64 = 0;
	// divwu r10,r11,r10
	ctx.r10.u32 = ctx.r11.u32 / ctx.r10.u32;
	// mulli r10,r10,20
	ctx.r10.s64 = ctx.r10.s64 * 20;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// stw r11,28496(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28496, ctx.r11.u32);
loc_82A0D40C:
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

__attribute__((alias("__imp__sub_82A0D420"))) PPC_WEAK_FUNC(sub_82A0D420);
PPC_FUNC_IMPL(__imp__sub_82A0D420) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x82A0D428;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,0
	ctx.r11.s64 = 0;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// ori r11,r11,40080
	ctx.r11.u64 = ctx.r11.u64 | 40080;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// stwx r5,r3,r11
	PPC_STORE_U32(ctx.r3.u32 + ctx.r11.u32, ctx.r5.u32);
	// beq cr6,0x82a0d474
	if (ctx.cr6.eq) goto loc_82A0D474;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r29,r6,-4
	ctx.r29.s64 = ctx.r6.s64 + -4;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
loc_82A0D450:
	// lwzu r11,4(r29)
	ea = 4 + ctx.r29.u32;
	ctx.r11.u64 = PPC_LOAD_U32(ea);
	ctx.r29.u32 = ea;
	// li r5,2004
	ctx.r5.s64 = 2004;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mulli r11,r11,2004
	ctx.r11.s64 = ctx.r11.s64 * 2004;
	// add r4,r11,r28
	ctx.r4.u64 = ctx.r11.u64 + ctx.r28.u64;
	// bl 0x82fa77c0
	ctx.lr = 0x82A0D468;
	sub_82FA77C0(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r30,r30,2004
	ctx.r30.s64 = ctx.r30.s64 + 2004;
	// bne 0x82a0d450
	if (!ctx.cr0.eq) goto loc_82A0D450;
loc_82A0D474:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A0D47C"))) PPC_WEAK_FUNC(sub_82A0D47C);
PPC_FUNC_IMPL(__imp__sub_82A0D47C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A0D480"))) PPC_WEAK_FUNC(sub_82A0D480);
PPC_FUNC_IMPL(__imp__sub_82A0D480) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x82A0D488;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r30,-31963
	ctx.r30.s64 = -2094727168;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lwz r11,24028(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24028);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a0d530
	if (ctx.cr6.eq) goto loc_82A0D530;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82a0c9b8
	ctx.lr = 0x82A0D4A8;
	sub_82A0C9B8(ctx, base);
	// lwz r31,24028(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24028);
	// bl 0x82a74720
	ctx.lr = 0x82A0D4B0;
	sub_82A74720(ctx, base);
	// lis r29,-31963
	ctx.r29.s64 = -2094727168;
	// lwz r11,24036(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24036);
	// subf r11,r11,r3
	ctx.r11.s64 = ctx.r3.s64 - ctx.r11.s64;
	// addic r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r7,r11,r31
	ctx.r7.u64 = ctx.r11.u64 & ctx.r31.u64;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82a0d50c
	if (ctx.cr6.eq) goto loc_82A0D50C;
	// addi r6,r7,544
	ctx.r6.s64 = ctx.r7.s64 + 544;
	// addi r8,r28,56
	ctx.r8.s64 = ctx.r28.s64 + 56;
	// li r5,6
	ctx.r5.s64 = 6;
loc_82A0D4DC:
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// lwz r4,-4(r8)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + -4);
	// bl 0x82a0c1c8
	ctx.lr = 0x82A0D4E8;
	sub_82A0C1C8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,-4
	ctx.r11.s64 = -4;
	// bne 0x82a0d4f8
	if (!ctx.cr0.eq) goto loc_82A0D4F8;
	// lwz r11,0(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
loc_82A0D4F8:
	// stw r11,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r11.u32);
	// addic. r5,r5,-1
	ctx.xer.ca = ctx.r5.u32 > 0;
	ctx.r5.s64 = ctx.r5.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// addi r8,r8,448
	ctx.r8.s64 = ctx.r8.s64 + 448;
	// addi r6,r6,352
	ctx.r6.s64 = ctx.r6.s64 + 352;
	// bne 0x82a0d4dc
	if (!ctx.cr0.eq) goto loc_82A0D4DC;
loc_82A0D50C:
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r10,24028(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24028);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r11,24036(r29)
	PPC_STORE_U32(ctx.r29.u32 + 24036, ctx.r11.u32);
	// addis r3,r10,2
	ctx.r3.s64 = ctx.r10.s64 + 131072;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r3,19120
	ctx.r3.s64 = ctx.r3.s64 + 19120;
	// bl 0x831796f4
	ctx.lr = 0x82A0D530;
	__imp__KeReleaseMutant(ctx, base);
loc_82A0D530:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A0D538"))) PPC_WEAK_FUNC(sub_82A0D538);
PPC_FUNC_IMPL(__imp__sub_82A0D538) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x82A0D540;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31963
	ctx.r31.s64 = -2094727168;
	// lwz r11,24028(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24028);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a0d5e4
	if (ctx.cr6.eq) goto loc_82A0D5E4;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82a0c9b8
	ctx.lr = 0x82A0D55C;
	sub_82A0C9B8(ctx, base);
	// lwz r29,24028(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24028);
	// bl 0x82a74720
	ctx.lr = 0x82A0D564;
	sub_82A74720(ctx, base);
	// lis r30,-31963
	ctx.r30.s64 = -2094727168;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r11,24036(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24036);
	// subf r11,r11,r3
	ctx.r11.s64 = ctx.r3.s64 - ctx.r11.s64;
	// addic r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 & ctx.r29.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82a0d59c
	if (!ctx.cr6.eq) goto loc_82A0D59C;
	// lwz r10,24028(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24028);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,24036(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24036, ctx.r11.u32);
	// addis r3,r10,2
	ctx.r3.s64 = ctx.r10.s64 + 131072;
	// b 0x82a0d5d4
	goto loc_82A0D5D4;
loc_82A0D59C:
	// lis r10,2
	ctx.r10.s64 = 131072;
	// li r9,1
	ctx.r9.s64 = 1;
	// ori r10,r10,19102
	ctx.r10.u64 = ctx.r10.u64 | 19102;
	// li r4,1
	ctx.r4.s64 = 1;
	// stbx r9,r11,r10
	PPC_STORE_U8(ctx.r11.u32 + ctx.r10.u32, ctx.r9.u8);
	// lwz r11,24028(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24028);
	// addis r3,r11,9
	ctx.r3.s64 = ctx.r11.s64 + 589824;
	// addi r3,r3,-2428
	ctx.r3.s64 = ctx.r3.s64 + -2428;
	// bl 0x831792b4
	ctx.lr = 0x82A0D5C0;
	__imp__KeSetEvent(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,24036(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24036, ctx.r11.u32);
	// lwz r11,24028(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24028);
	// addis r3,r11,2
	ctx.r3.s64 = ctx.r11.s64 + 131072;
loc_82A0D5D4:
	// li r6,0
	ctx.r6.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r3,19120
	ctx.r3.s64 = ctx.r3.s64 + 19120;
	// bl 0x831796f4
	ctx.lr = 0x82A0D5E4;
	__imp__KeReleaseMutant(ctx, base);
loc_82A0D5E4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A0D5EC"))) PPC_WEAK_FUNC(sub_82A0D5EC);
PPC_FUNC_IMPL(__imp__sub_82A0D5EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A0D5F0"))) PPC_WEAK_FUNC(sub_82A0D5F0);
PPC_FUNC_IMPL(__imp__sub_82A0D5F0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// lis r10,8
	ctx.r10.s64 = 524288;
	// ori r10,r10,63164
	ctx.r10.u64 = ctx.r10.u64 | 63164;
	// lwz r11,24028(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24028);
	// lwzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// rlwinm. r11,r11,25,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82a0d630
	if (!ctx.cr0.eq) goto loc_82A0D630;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x82a0d628
	if (ctx.cr6.eq) goto loc_82A0D628;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82a0d628
	if (ctx.cr6.eq) goto loc_82A0D628;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x82a0d630
	if (!ctx.cr6.eq) goto loc_82A0D630;
loc_82A0D628:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82a0d634
	goto loc_82A0D634;
loc_82A0D630:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82A0D634:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A0D63C"))) PPC_WEAK_FUNC(sub_82A0D63C);
PPC_FUNC_IMPL(__imp__sub_82A0D63C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A0D640"))) PPC_WEAK_FUNC(sub_82A0D640);
PPC_FUNC_IMPL(__imp__sub_82A0D640) {
	PPC_FUNC_PROLOGUE();
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r3,2336
	ctx.r11.s64 = ctx.r3.s64 + 2336;
loc_82A0D648:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82a0d660
	if (ctx.cr6.eq) goto loc_82A0D660;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm. r9,r9,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82a0d678
	if (!ctx.cr0.eq) goto loc_82A0D678;
loc_82A0D660:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,88
	ctx.r11.s64 = ctx.r11.s64 + 88;
	// cmplwi cr6,r10,2
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 2, ctx.xer);
	// blt cr6,0x82a0d648
	if (ctx.cr6.lt) goto loc_82A0D648;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82A0D678:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A0D680"))) PPC_WEAK_FUNC(sub_82A0D680);
PPC_FUNC_IMPL(__imp__sub_82A0D680) {
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
	// addi r11,r3,2524
	ctx.r11.s64 = ctx.r3.s64 + 2524;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_82A0D6A8:
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r8,r30
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x82a0d6e8
	if (ctx.cr6.eq) goto loc_82A0D6E8;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r10,r10,96
	ctx.r10.s64 = ctx.r10.s64 + 96;
	// cmplwi cr6,r9,2
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 2, ctx.xer);
	// blt cr6,0x82a0d6a8
	if (ctx.cr6.lt) goto loc_82A0D6A8;
	// li r10,0
	ctx.r10.s64 = 0;
loc_82A0D6C8:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82a0d6f0
	if (ctx.cr6.eq) goto loc_82A0D6F0;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,96
	ctx.r11.s64 = ctx.r11.s64 + 96;
	// cmplwi cr6,r10,2
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 2, ctx.xer);
	// blt cr6,0x82a0d6c8
	if (ctx.cr6.lt) goto loc_82A0D6C8;
	// b 0x82a0d740
	goto loc_82A0D740;
loc_82A0D6E8:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82a0d744
	goto loc_82A0D744;
loc_82A0D6F0:
	// mulli r11,r10,96
	ctx.r11.s64 = ctx.r10.s64 * 96;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addic. r31,r11,2512
	ctx.xer.ca = ctx.r11.u32 > 4294964783;
	ctx.r31.s64 = ctx.r11.s64 + 2512;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82a0d740
	if (ctx.cr0.eq) goto loc_82A0D740;
	// li r5,88
	ctx.r5.s64 = 88;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82fa7cf0
	ctx.lr = 0x82A0D710;
	sub_82FA7CF0(ctx, base);
	// li r11,-2
	ctx.r11.s64 = -2;
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
	// li r9,254
	ctx.r9.s64 = 254;
	// stw r11,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// stw r9,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r9.u32);
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// stw r10,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r10.u32);
	// stw r10,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
	// stw r8,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r8.u32);
loc_82A0D740:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82A0D744:
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

__attribute__((alias("__imp__sub_82A0D75C"))) PPC_WEAK_FUNC(sub_82A0D75C);
PPC_FUNC_IMPL(__imp__sub_82A0D75C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A0D760"))) PPC_WEAK_FUNC(sub_82A0D760);
PPC_FUNC_IMPL(__imp__sub_82A0D760) {
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
	// addi r11,r3,2348
	ctx.r11.s64 = ctx.r3.s64 + 2348;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_82A0D788:
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r8,r30
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x82a0d7c8
	if (ctx.cr6.eq) goto loc_82A0D7C8;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r10,r10,88
	ctx.r10.s64 = ctx.r10.s64 + 88;
	// cmplwi cr6,r9,2
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 2, ctx.xer);
	// blt cr6,0x82a0d788
	if (ctx.cr6.lt) goto loc_82A0D788;
	// li r10,0
	ctx.r10.s64 = 0;
loc_82A0D7A8:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82a0d7d0
	if (ctx.cr6.eq) goto loc_82A0D7D0;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,88
	ctx.r11.s64 = ctx.r11.s64 + 88;
	// cmplwi cr6,r10,2
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 2, ctx.xer);
	// blt cr6,0x82a0d7a8
	if (ctx.cr6.lt) goto loc_82A0D7A8;
	// b 0x82a0d818
	goto loc_82A0D818;
loc_82A0D7C8:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82a0d81c
	goto loc_82A0D81C;
loc_82A0D7D0:
	// mulli r11,r10,88
	ctx.r11.s64 = ctx.r10.s64 * 88;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addic. r31,r11,2336
	ctx.xer.ca = ctx.r11.u32 > 4294964959;
	ctx.r31.s64 = ctx.r11.s64 + 2336;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82a0d818
	if (ctx.cr0.eq) goto loc_82A0D818;
	// li r5,88
	ctx.r5.s64 = 88;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82fa7cf0
	ctx.lr = 0x82A0D7F0;
	sub_82FA7CF0(ctx, base);
	// li r11,-2
	ctx.r11.s64 = -2;
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
	// li r9,254
	ctx.r9.s64 = 254;
	// stw r11,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r11.u32);
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// stw r9,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r9.u32);
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// stw r10,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r10.u32);
	// stw r10,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
loc_82A0D818:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82A0D81C:
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

__attribute__((alias("__imp__sub_82A0D834"))) PPC_WEAK_FUNC(sub_82A0D834);
PPC_FUNC_IMPL(__imp__sub_82A0D834) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A0D838"))) PPC_WEAK_FUNC(sub_82A0D838);
PPC_FUNC_IMPL(__imp__sub_82A0D838) {
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
	// beq cr6,0x82a0d884
	if (ctx.cr6.eq) goto loc_82A0D884;
	// li r5,88
	ctx.r5.s64 = 88;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82fa7cf0
	ctx.lr = 0x82A0D860;
	sub_82FA7CF0(ctx, base);
	// li r11,-2
	ctx.r11.s64 = -2;
	// li r10,-1
	ctx.r10.s64 = -1;
	// li r9,254
	ctx.r9.s64 = 254;
	// stw r11,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r11.u32);
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// stw r9,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r9.u32);
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// stw r10,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r10.u32);
	// stw r10,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r10.u32);
loc_82A0D884:
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

__attribute__((alias("__imp__sub_82A0D898"))) PPC_WEAK_FUNC(sub_82A0D898);
PPC_FUNC_IMPL(__imp__sub_82A0D898) {
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
	// addis r8,r3,2
	ctx.r8.s64 = ctx.r3.s64 + 131072;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r8,r8,18936
	ctx.r8.s64 = ctx.r8.s64 + 18936;
	// li r31,0
	ctx.r31.s64 = 0;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
loc_82A0D8C4:
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lis r9,2
	ctx.r9.s64 = 131072;
	// ori r9,r9,18928
	ctx.r9.u64 = ctx.r9.u64 | 18928;
	// cmplw cr6,r7,r4
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x82a0d8ec
	if (ctx.cr6.eq) goto loc_82A0D8EC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,28
	ctx.r10.s64 = ctx.r10.s64 + 28;
	// cmplwi cr6,r11,6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 6, ctx.xer);
	// blt cr6,0x82a0d8c4
	if (ctx.cr6.lt) goto loc_82A0D8C4;
	// b 0x82a0d8fc
	goto loc_82A0D8FC;
loc_82A0D8EC:
	// mulli r11,r11,28
	ctx.r11.s64 = ctx.r11.s64 * 28;
	// add r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 + ctx.r6.u64;
	// add. r31,r11,r9
	ctx.r31.u64 = ctx.r11.u64 + ctx.r9.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x82a0d980
	if (!ctx.cr0.eq) goto loc_82A0D980;
loc_82A0D8FC:
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
loc_82A0D904:
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82a0d924
	if (ctx.cr6.eq) goto loc_82A0D924;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,28
	ctx.r10.s64 = ctx.r10.s64 + 28;
	// cmplwi cr6,r11,6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 6, ctx.xer);
	// blt cr6,0x82a0d904
	if (ctx.cr6.lt) goto loc_82A0D904;
	// b 0x82a0d934
	goto loc_82A0D934;
loc_82A0D924:
	// mulli r11,r11,28
	ctx.r11.s64 = ctx.r11.s64 * 28;
	// add r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 + ctx.r6.u64;
	// add. r31,r11,r9
	ctx.r31.u64 = ctx.r11.u64 + ctx.r9.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x82a0d980
	if (!ctx.cr0.eq) goto loc_82A0D980;
loc_82A0D934:
	// addis r7,r6,2
	ctx.r7.s64 = ctx.r6.s64 + 131072;
	// li r30,6
	ctx.r30.s64 = 6;
	// addi r7,r7,18940
	ctx.r7.s64 = ctx.r7.s64 + 18940;
loc_82A0D940:
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,-4(r7)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + -4);
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// bl 0x82a0c960
	ctx.lr = 0x82A0D950;
	sub_82A0C960(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82a0d974
	if (!ctx.cr0.eq) goto loc_82A0D974;
	// lwz r11,0(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a0d974
	if (ctx.cr6.eq) goto loc_82A0D974;
	// li r10,-1
	ctx.r10.s64 = -1;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82a0d974
	if (!ctx.cr6.lt) goto loc_82A0D974;
	// addi r31,r7,-12
	ctx.r31.s64 = ctx.r7.s64 + -12;
loc_82A0D974:
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r7,r7,28
	ctx.r7.s64 = ctx.r7.s64 + 28;
	// bne 0x82a0d940
	if (!ctx.cr0.eq) goto loc_82A0D940;
loc_82A0D980:
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

__attribute__((alias("__imp__sub_82A0D99C"))) PPC_WEAK_FUNC(sub_82A0D99C);
PPC_FUNC_IMPL(__imp__sub_82A0D99C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A0D9A0"))) PPC_WEAK_FUNC(sub_82A0D9A0);
PPC_FUNC_IMPL(__imp__sub_82A0D9A0) {
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
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r7,r4
	ctx.r7.u64 = ctx.r4.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// rlwinm. r11,r11,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82a0d9f8
	if (ctx.cr0.eq) goto loc_82A0D9F8;
	// lis r10,-31963
	ctx.r10.s64 = -2094727168;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// lwz r10,24028(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24028);
	// addis r10,r10,9
	ctx.r10.s64 = ctx.r10.s64 + 589824;
	// addi r10,r10,-3420
	ctx.r10.s64 = ctx.r10.s64 + -3420;
	// beq cr6,0x82a0da58
	if (ctx.cr6.eq) goto loc_82A0DA58;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82a0da38
	if (ctx.cr6.eq) goto loc_82A0DA38;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x82a0da58
	if (ctx.cr6.eq) goto loc_82A0DA58;
	// b 0x82a0da64
	goto loc_82A0DA64;
loc_82A0D9F8:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r3,12(r7)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + 12);
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// bl 0x82a0c960
	ctx.lr = 0x82A0DA0C;
	sub_82A0C960(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82a0da64
	if (ctx.cr0.eq) goto loc_82A0DA64;
	// lis r10,-31963
	ctx.r10.s64 = -2094727168;
	// lwz r11,0(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// lwz r10,24028(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24028);
	// addis r10,r10,9
	ctx.r10.s64 = ctx.r10.s64 + 589824;
	// addi r10,r10,-3056
	ctx.r10.s64 = ctx.r10.s64 + -3056;
	// beq cr6,0x82a0da40
	if (ctx.cr6.eq) goto loc_82A0DA40;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x82a0da64
	if (!ctx.cr6.eq) goto loc_82A0DA64;
loc_82A0DA38:
	// lwz r31,4(r10)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// b 0x82a0da64
	goto loc_82A0DA64;
loc_82A0DA40:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mulli r11,r11,352
	ctx.r11.s64 = ctx.r11.s64 * 352;
	// add r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 + ctx.r6.u64;
	// lwz r11,568(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 568);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82a0da60
	if (ctx.cr0.eq) goto loc_82A0DA60;
loc_82A0DA58:
	// lwz r31,0(r10)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// b 0x82a0da64
	goto loc_82A0DA64;
loc_82A0DA60:
	// li r31,30000
	ctx.r31.s64 = 30000;
loc_82A0DA64:
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

__attribute__((alias("__imp__sub_82A0DA7C"))) PPC_WEAK_FUNC(sub_82A0DA7C);
PPC_FUNC_IMPL(__imp__sub_82A0DA7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A0DA80"))) PPC_WEAK_FUNC(sub_82A0DA80);
PPC_FUNC_IMPL(__imp__sub_82A0DA80) {
	PPC_FUNC_PROLOGUE();
	// rlwinm. r11,r4,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// lwz r11,24028(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24028);
	// addis r11,r11,9
	ctx.r11.s64 = ctx.r11.s64 + 589824;
	// beq 0x82a0da9c
	if (ctx.cr0.eq) goto loc_82A0DA9C;
	// addi r11,r11,-3420
	ctx.r11.s64 = ctx.r11.s64 + -3420;
	// b 0x82a0daa0
	goto loc_82A0DAA0;
loc_82A0DA9C:
	// addi r11,r11,-3056
	ctx.r11.s64 = ctx.r11.s64 + -3056;
loc_82A0DAA0:
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x82a0dae0
	if (ctx.cr6.eq) goto loc_82A0DAE0;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// beq cr6,0x82a0dad8
	if (ctx.cr6.eq) goto loc_82A0DAD8;
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// beq cr6,0x82a0dad0
	if (ctx.cr6.eq) goto loc_82A0DAD0;
	// cmpwi cr6,r3,4
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 4, ctx.xer);
	// beq cr6,0x82a0dac8
	if (ctx.cr6.eq) goto loc_82A0DAC8;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82A0DAC8:
	// addi r3,r11,196
	ctx.r3.s64 = ctx.r11.s64 + 196;
	// blr 
	return;
loc_82A0DAD0:
	// addi r3,r11,280
	ctx.r3.s64 = ctx.r11.s64 + 280;
	// blr 
	return;
loc_82A0DAD8:
	// addi r3,r11,112
	ctx.r3.s64 = ctx.r11.s64 + 112;
	// blr 
	return;
loc_82A0DAE0:
	// addi r3,r11,28
	ctx.r3.s64 = ctx.r11.s64 + 28;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A0DAE8"))) PPC_WEAK_FUNC(sub_82A0DAE8);
PPC_FUNC_IMPL(__imp__sub_82A0DAE8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// rlwinm r10,r3,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r11,24028(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24028);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addis r11,r11,9
	ctx.r11.s64 = ctx.r11.s64 + 589824;
	// addi r11,r11,-2692
	ctx.r11.s64 = ctx.r11.s64 + -2692;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82a0db14
	if (!ctx.cr6.eq) goto loc_82A0DB14;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82A0DB14:
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// twllei r10,0
	if (ctx.r10.u32 <= 0) __builtin_debugtrap();
	// mulli r11,r11,10
	ctx.r11.s64 = ctx.r11.s64 * 10;
	// divwu r11,r11,r10
	ctx.r11.u32 = ctx.r11.u32 / ctx.r10.u32;
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A0DB2C"))) PPC_WEAK_FUNC(sub_82A0DB2C);
PPC_FUNC_IMPL(__imp__sub_82A0DB2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A0DB30"))) PPC_WEAK_FUNC(sub_82A0DB30);
PPC_FUNC_IMPL(__imp__sub_82A0DB30) {
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
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82a0c9b8
	ctx.lr = 0x82A0DB4C;
	sub_82A0C9B8(ctx, base);
	// lis r31,-31963
	ctx.r31.s64 = -2094727168;
	// lwz r30,24028(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24028);
	// bl 0x82a74720
	ctx.lr = 0x82A0DB58;
	sub_82A74720(ctx, base);
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r10,24036(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24036);
	// subf r10,r10,r3
	ctx.r10.s64 = ctx.r3.s64 - ctx.r10.s64;
	// addic r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 & ctx.r30.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82a0db98
	if (!ctx.cr6.eq) goto loc_82A0DB98;
	// lwz r9,24028(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24028);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,24036(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24036, ctx.r10.u32);
	// addis r3,r9,2
	ctx.r3.s64 = ctx.r9.s64 + 131072;
	// b 0x82a0dbb4
	goto loc_82A0DBB4;
loc_82A0DB98:
	// lis r8,2
	ctx.r8.s64 = 131072;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r8,r8,19102
	ctx.r8.u64 = ctx.r8.u64 | 19102;
	// stbx r9,r10,r8
	PPC_STORE_U8(ctx.r10.u32 + ctx.r8.u32, ctx.r9.u8);
	// stw r9,24036(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24036, ctx.r9.u32);
	// lwz r11,24028(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24028);
	// addis r3,r11,2
	ctx.r3.s64 = ctx.r11.s64 + 131072;
loc_82A0DBB4:
	// addi r3,r3,19120
	ctx.r3.s64 = ctx.r3.s64 + 19120;
	// bl 0x831796f4
	ctx.lr = 0x82A0DBBC;
	__imp__KeReleaseMutant(ctx, base);
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

__attribute__((alias("__imp__sub_82A0DBD4"))) PPC_WEAK_FUNC(sub_82A0DBD4);
PPC_FUNC_IMPL(__imp__sub_82A0DBD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A0DBD8"))) PPC_WEAK_FUNC(sub_82A0DBD8);
PPC_FUNC_IMPL(__imp__sub_82A0DBD8) {
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
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82a0c9b8
	ctx.lr = 0x82A0DBF4;
	sub_82A0C9B8(ctx, base);
	// lis r31,-31963
	ctx.r31.s64 = -2094727168;
	// lwz r30,24028(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24028);
	// bl 0x82a74720
	ctx.lr = 0x82A0DC00;
	sub_82A74720(ctx, base);
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r10,24036(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24036);
	// subf r10,r10,r3
	ctx.r10.s64 = ctx.r3.s64 - ctx.r10.s64;
	// addic r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 & ctx.r30.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82a0dc40
	if (!ctx.cr6.eq) goto loc_82A0DC40;
	// lwz r9,24028(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24028);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,24036(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24036, ctx.r10.u32);
	// addis r3,r9,2
	ctx.r3.s64 = ctx.r9.s64 + 131072;
	// b 0x82a0dc5c
	goto loc_82A0DC5C;
loc_82A0DC40:
	// lis r8,2
	ctx.r8.s64 = 131072;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r8,r8,19104
	ctx.r8.u64 = ctx.r8.u64 | 19104;
	// stbx r9,r10,r8
	PPC_STORE_U8(ctx.r10.u32 + ctx.r8.u32, ctx.r9.u8);
	// stw r9,24036(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24036, ctx.r9.u32);
	// lwz r11,24028(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24028);
	// addis r3,r11,2
	ctx.r3.s64 = ctx.r11.s64 + 131072;
loc_82A0DC5C:
	// addi r3,r3,19120
	ctx.r3.s64 = ctx.r3.s64 + 19120;
	// bl 0x831796f4
	ctx.lr = 0x82A0DC64;
	__imp__KeReleaseMutant(ctx, base);
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

__attribute__((alias("__imp__sub_82A0DC7C"))) PPC_WEAK_FUNC(sub_82A0DC7C);
PPC_FUNC_IMPL(__imp__sub_82A0DC7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A0DC80"))) PPC_WEAK_FUNC(sub_82A0DC80);
PPC_FUNC_IMPL(__imp__sub_82A0DC80) {
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
	// lis r31,-31963
	ctx.r31.s64 = -2094727168;
	// lis r11,8
	ctx.r11.s64 = 524288;
	// ori r30,r11,63168
	ctx.r30.u64 = ctx.r11.u64 | 63168;
	// lwz r11,24028(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24028);
	// add r10,r11,r30
	ctx.r10.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lwzx r9,r11,r30
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82a0dcc0
	if (ctx.cr6.eq) goto loc_82A0DCC0;
	// lwz r3,0(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// bl 0x82a175b8
	ctx.lr = 0x82A0DCBC;
	sub_82A175B8(ctx, base);
	// lwz r11,24028(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24028);
loc_82A0DCC0:
	// add r3,r11,r30
	ctx.r3.u64 = ctx.r11.u64 + ctx.r30.u64;
	// bl 0x82a0cab0
	ctx.lr = 0x82A0DCC8;
	sub_82A0CAB0(ctx, base);
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

__attribute__((alias("__imp__sub_82A0DCE0"))) PPC_WEAK_FUNC(sub_82A0DCE0);
PPC_FUNC_IMPL(__imp__sub_82A0DCE0) {
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
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// lis r10,8
	ctx.r10.s64 = 524288;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// ori r10,r10,63164
	ctx.r10.u64 = ctx.r10.u64 | 63164;
	// addi r3,r3,36
	ctx.r3.s64 = ctx.r3.s64 + 36;
	// lwz r11,24028(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24028);
	// lwzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// rlwinm. r11,r11,25,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82a0dd68
	if (!ctx.cr0.eq) goto loc_82A0DD68;
	// bl 0x82a16a18
	ctx.lr = 0x82A0DD1C;
	sub_82A16A18(ctx, base);
	// addi r3,r31,136
	ctx.r3.s64 = ctx.r31.s64 + 136;
	// bl 0x82a18f38
	ctx.lr = 0x82A0DD24;
	sub_82A18F38(ctx, base);
	// addi r3,r31,172
	ctx.r3.s64 = ctx.r31.s64 + 172;
	// bl 0x82a181f0
	ctx.lr = 0x82A0DD2C;
	sub_82A181F0(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// addi r5,r11,-24872
	ctx.r5.s64 = ctx.r11.s64 + -24872;
	// addi r3,r10,-24892
	ctx.r3.s64 = ctx.r10.s64 + -24892;
	// addi r6,r31,688
	ctx.r6.s64 = ctx.r31.s64 + 688;
	// li r4,17
	ctx.r4.s64 = 17;
	// bl 0x82a0c568
	ctx.lr = 0x82A0DD48;
	sub_82A0C568(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt 0x82a0ddc0
	if (ctx.cr0.lt) goto loc_82A0DDC0;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// addi r5,r11,-24952
	ctx.r5.s64 = ctx.r11.s64 + -24952;
	// addi r3,r10,-24972
	ctx.r3.s64 = ctx.r10.s64 + -24972;
	// li r4,17
	ctx.r4.s64 = 17;
	// b 0x82a0ddb4
	goto loc_82A0DDB4;
loc_82A0DD68:
	// bl 0x82a16a50
	ctx.lr = 0x82A0DD6C;
	sub_82A16A50(ctx, base);
	// addi r3,r31,136
	ctx.r3.s64 = ctx.r31.s64 + 136;
	// bl 0x82a19068
	ctx.lr = 0x82A0DD74;
	sub_82A19068(ctx, base);
	// addi r3,r31,172
	ctx.r3.s64 = ctx.r31.s64 + 172;
	// bl 0x82a18318
	ctx.lr = 0x82A0DD7C;
	sub_82A18318(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// addi r5,r11,-25032
	ctx.r5.s64 = ctx.r11.s64 + -25032;
	// addi r3,r10,-25052
	ctx.r3.s64 = ctx.r10.s64 + -25052;
	// addi r6,r31,688
	ctx.r6.s64 = ctx.r31.s64 + 688;
	// li r4,19
	ctx.r4.s64 = 19;
	// bl 0x82a0c568
	ctx.lr = 0x82A0DD98;
	sub_82A0C568(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt 0x82a0ddc0
	if (ctx.cr0.lt) goto loc_82A0DDC0;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// addi r5,r11,-25112
	ctx.r5.s64 = ctx.r11.s64 + -25112;
	// addi r3,r10,-25132
	ctx.r3.s64 = ctx.r10.s64 + -25132;
	// li r4,19
	ctx.r4.s64 = 19;
loc_82A0DDB4:
	// addi r6,r31,324
	ctx.r6.s64 = ctx.r31.s64 + 324;
	// bl 0x82a0c568
	ctx.lr = 0x82A0DDBC;
	sub_82A0C568(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_82A0DDC0:
	// addi r3,r31,204
	ctx.r3.s64 = ctx.r31.s64 + 204;
	// bl 0x82a17c20
	ctx.lr = 0x82A0DDC8;
	sub_82A17C20(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a0c5d8
	ctx.lr = 0x82A0DDD0;
	sub_82A0C5D8(ctx, base);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt cr6,0x82a0dde4
	if (ctx.cr6.lt) goto loc_82A0DDE4;
	// addi r3,r31,244
	ctx.r3.s64 = ctx.r31.s64 + 244;
	// bl 0x82a0c858
	ctx.lr = 0x82A0DDE0;
	sub_82A0C858(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_82A0DDE4:
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

__attribute__((alias("__imp__sub_82A0DE00"))) PPC_WEAK_FUNC(sub_82A0DE00);
PPC_FUNC_IMPL(__imp__sub_82A0DE00) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x82A0DE08;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r30,-31963
	ctx.r30.s64 = -2094727168;
	// lwz r11,24028(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24028);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a0df2c
	if (ctx.cr6.eq) goto loc_82A0DF2C;
	// lis r10,8
	ctx.r10.s64 = 524288;
	// ori r31,r10,63100
	ctx.r31.u64 = ctx.r10.u64 | 63100;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82a0df2c
	if (ctx.cr6.eq) goto loc_82A0DF2C;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// lwz r4,2292(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 2292);
	// bl 0x83179404
	ctx.lr = 0x82A0DE48;
	__imp__ObReferenceObjectByHandle(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82a0de64
	if (ctx.cr0.lt) goto loc_82A0DE64;
	// li r4,17
	ctx.r4.s64 = 17;
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x831793d4
	ctx.lr = 0x82A0DE5C;
	__imp__KeSetBasePriorityThread(ctx, base);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x83179424
	ctx.lr = 0x82A0DE64;
	__imp__ObDereferenceObject(ctx, base);
loc_82A0DE64:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82a0c9b8
	ctx.lr = 0x82A0DE6C;
	sub_82A0C9B8(ctx, base);
	// lwz r28,24028(r30)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24028);
	// bl 0x82a74720
	ctx.lr = 0x82A0DE74;
	sub_82A74720(ctx, base);
	// lis r29,-31963
	ctx.r29.s64 = -2094727168;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r11,24036(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24036);
	// subf r11,r11,r3
	ctx.r11.s64 = ctx.r3.s64 - ctx.r11.s64;
	// addic r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 & ctx.r28.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82a0debc
	if (!ctx.cr6.eq) goto loc_82A0DEBC;
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r10,24028(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24028);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r11,24036(r29)
	PPC_STORE_U32(ctx.r29.u32 + 24036, ctx.r11.u32);
	// addis r3,r10,2
	ctx.r3.s64 = ctx.r10.s64 + 131072;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r3,19120
	ctx.r3.s64 = ctx.r3.s64 + 19120;
	// bl 0x831796f4
	ctx.lr = 0x82A0DEB8;
	__imp__KeReleaseMutant(ctx, base);
	// b 0x82a0df2c
	goto loc_82A0DF2C;
loc_82A0DEBC:
	// lis r10,2
	ctx.r10.s64 = 131072;
	// li r9,1
	ctx.r9.s64 = 1;
	// ori r10,r10,19100
	ctx.r10.u64 = ctx.r10.u64 | 19100;
	// li r4,1
	ctx.r4.s64 = 1;
	// stbx r9,r11,r10
	PPC_STORE_U8(ctx.r11.u32 + ctx.r10.u32, ctx.r9.u8);
	// lwz r11,24028(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24028);
	// addis r3,r11,9
	ctx.r3.s64 = ctx.r11.s64 + 589824;
	// addi r3,r3,-2428
	ctx.r3.s64 = ctx.r3.s64 + -2428;
	// bl 0x831792b4
	ctx.lr = 0x82A0DEE0;
	__imp__KeSetEvent(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r11,24036(r29)
	PPC_STORE_U32(ctx.r29.u32 + 24036, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,24028(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24028);
	// addis r3,r11,2
	ctx.r3.s64 = ctx.r11.s64 + 131072;
	// addi r3,r3,19120
	ctx.r3.s64 = ctx.r3.s64 + 19120;
	// bl 0x831796f4
	ctx.lr = 0x82A0DF04;
	__imp__KeReleaseMutant(ctx, base);
	// lwz r11,24028(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24028);
	// li r4,-1
	ctx.r4.s64 = -1;
	// lwzx r3,r11,r31
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// bl 0x82a77600
	ctx.lr = 0x82A0DF14;
	sub_82A77600(ctx, base);
	// lwz r11,24028(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24028);
	// lwzx r3,r11,r31
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// bl 0x82a756a0
	ctx.lr = 0x82A0DF20;
	sub_82A756A0(ctx, base);
	// lwz r11,24028(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24028);
	// li r10,0
	ctx.r10.s64 = 0;
	// stwx r10,r11,r31
	PPC_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r10.u32);
loc_82A0DF2C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A0DF34"))) PPC_WEAK_FUNC(sub_82A0DF34);
PPC_FUNC_IMPL(__imp__sub_82A0DF34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A0DF38"))) PPC_WEAK_FUNC(sub_82A0DF38);
PPC_FUNC_IMPL(__imp__sub_82A0DF38) {
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
	// addis r3,r3,9
	ctx.r3.s64 = ctx.r3.s64 + 589824;
	// addi r3,r3,-272
	ctx.r3.s64 = ctx.r3.s64 + -272;
	// bl 0x82a1af98
	ctx.lr = 0x82A0DF58;
	sub_82A1AF98(ctx, base);
	// lis r11,8
	ctx.r11.s64 = 524288;
	// ori r11,r11,63156
	ctx.r11.u64 = ctx.r11.u64 | 63156;
	// lwzx r3,r31,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a0df70
	if (ctx.cr6.eq) goto loc_82A0DF70;
	// bl 0x82a80070
	ctx.lr = 0x82A0DF70;
	sub_82A80070(ctx, base);
loc_82A0DF70:
	// addis r31,r31,9
	ctx.r31.s64 = ctx.r31.s64 + 589824;
	// addi r31,r31,-2376
	ctx.r31.s64 = ctx.r31.s64 + -2376;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a0df94
	if (ctx.cr6.eq) goto loc_82A0DF94;
	// lis r4,8349
	ctx.r4.s64 = 547160064;
	// bl 0x82691460
	ctx.lr = 0x82A0DF8C;
	sub_82691460(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_82A0DF94:
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

__attribute__((alias("__imp__sub_82A0DFA8"))) PPC_WEAK_FUNC(sub_82A0DFA8);
PPC_FUNC_IMPL(__imp__sub_82A0DFA8) {
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
	// bl 0x82a1b958
	ctx.lr = 0x82A0DFBC;
	sub_82A1B958(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82a09358
	ctx.lr = 0x82A0DFC4;
	sub_82A09358(ctx, base);
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// addi r31,r11,24028
	ctx.r31.s64 = ctx.r11.s64 + 24028;
	// lwz r11,24028(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24028);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a0e004
	if (ctx.cr6.eq) goto loc_82A0E004;
	// lis r10,8
	ctx.r10.s64 = 524288;
	// ori r10,r10,63168
	ctx.r10.u64 = ctx.r10.u64 | 63168;
	// lwzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a0dff0
	if (ctx.cr6.eq) goto loc_82A0DFF0;
	// bl 0x82a0dc80
	ctx.lr = 0x82A0DFF0;
	sub_82A0DC80(ctx, base);
loc_82A0DFF0:
	// bl 0x82a16070
	ctx.lr = 0x82A0DFF4;
	sub_82A16070(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82a0df38
	ctx.lr = 0x82A0DFFC;
	sub_82A0DF38(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a0cab0
	ctx.lr = 0x82A0E004;
	sub_82A0CAB0(ctx, base);
loc_82A0E004:
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

__attribute__((alias("__imp__sub_82A0E018"))) PPC_WEAK_FUNC(sub_82A0E018);
PPC_FUNC_IMPL(__imp__sub_82A0E018) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7664
	ctx.lr = 0x82A0E020;
	__savegprlr_23(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31963
	ctx.r31.s64 = -2094727168;
	// lis r11,2
	ctx.r11.s64 = 131072;
	// li r10,0
	ctx.r10.s64 = 0;
	// ori r26,r11,19152
	ctx.r26.u64 = ctx.r11.u64 | 19152;
	// lis r9,8
	ctx.r9.s64 = 524288;
	// lwz r11,24028(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24028);
	// ori r24,r9,63164
	ctx.r24.u64 = ctx.r9.u64 | 63164;
	// stwx r10,r11,r26
	PPC_STORE_U32(ctx.r11.u32 + ctx.r26.u32, ctx.r10.u32);
	// lwz r11,24028(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24028);
	// lwzx r11,r11,r24
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r24.u32);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82a0e068
	if (!ctx.cr0.eq) goto loc_82A0E068;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r11,-24812
	ctx.r3.s64 = ctx.r11.s64 + -24812;
	// bl 0x82a844b0
	ctx.lr = 0x82A0E064;
	sub_82A844B0(ctx, base);
	// b 0x82a0e22c
	goto loc_82A0E22C;
loc_82A0E068:
	// lis r4,10
	ctx.r4.s64 = 655360;
	// li r23,1
	ctx.r23.s64 = 1;
	// ori r4,r4,61440
	ctx.r4.u64 = ctx.r4.u64 | 61440;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// mr r28,r23
	ctx.r28.u64 = ctx.r23.u64;
	// bl 0x82a0d110
	ctx.lr = 0x82A0E080;
	sub_82A0D110(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r29,r11,-24812
	ctx.r29.s64 = ctx.r11.s64 + -24812;
	// lwz r30,84(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x82a0e0a0
	if (!ctx.cr6.eq) goto loc_82A0E0A0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82a844b0
	ctx.lr = 0x82A0E0A0;
	sub_82A844B0(ctx, base);
loc_82A0E0A0:
	// lwz r11,24028(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24028);
	// lis r5,10
	ctx.r5.s64 = 655360;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// ori r5,r5,61440
	ctx.r5.u64 = ctx.r5.u64 | 61440;
	// add r3,r11,r26
	ctx.r3.u64 = ctx.r11.u64 + ctx.r26.u64;
	// bl 0x82a1d158
	ctx.lr = 0x82A0E0B8;
	sub_82A1D158(ctx, base);
	// mr. r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// bge 0x82a0e0cc
	if (!ctx.cr0.lt) goto loc_82A0E0CC;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82a844b0
	ctx.lr = 0x82A0E0CC;
	sub_82A844B0(ctx, base);
loc_82A0E0CC:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82a0e0f0
	if (ctx.cr6.eq) goto loc_82A0E0F0;
	// lis r10,8
	ctx.r10.s64 = 524288;
	// lwz r11,24028(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24028);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// ori r10,r10,63156
	ctx.r10.u64 = ctx.r10.u64 | 63156;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwzx r3,r11,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// bl 0x82a81d88
	ctx.lr = 0x82A0E0F0;
	sub_82A81D88(ctx, base);
loc_82A0E0F0:
	// bl 0x83178db4
	ctx.lr = 0x82A0E0F4;
	__imp__XamNuiIdentityGetSessionId(ctx, base);
	// lis r10,2
	ctx.r10.s64 = 131072;
	// lwz r11,24028(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24028);
	// ori r10,r10,19160
	ctx.r10.u64 = ctx.r10.u64 | 19160;
	// ldx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + ctx.r10.u32);
	// cmpld cr6,r3,r11
	ctx.cr6.compare<uint64_t>(ctx.r3.u64, ctx.r11.u64, ctx.xer);
	// beq cr6,0x82a0e11c
	if (ctx.cr6.eq) goto loc_82A0E11C;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82a844b0
	ctx.lr = 0x82A0E118;
	sub_82A844B0(ctx, base);
	// li r28,0
	ctx.r28.s64 = 0;
loc_82A0E11C:
	// clrlwi. r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82a0e22c
	if (ctx.cr0.eq) goto loc_82A0E22C;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82a0c9b8
	ctx.lr = 0x82A0E12C;
	sub_82A0C9B8(ctx, base);
	// lwz r30,24028(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24028);
	// bl 0x82a74720
	ctx.lr = 0x82A0E134;
	sub_82A74720(ctx, base);
	// lis r27,-31963
	ctx.r27.s64 = -2094727168;
	// lwz r10,24028(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24028);
	// lwz r11,24036(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 24036);
	// subf r11,r11,r3
	ctx.r11.s64 = ctx.r3.s64 - ctx.r11.s64;
	// addic r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 & ctx.r30.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82a0e168
	if (!ctx.cr6.eq) goto loc_82A0E168;
	// li r11,0
	ctx.r11.s64 = 0;
	// addis r3,r10,2
	ctx.r3.s64 = ctx.r10.s64 + 131072;
	// stw r11,24036(r27)
	PPC_STORE_U32(ctx.r27.u32 + 24036, ctx.r11.u32);
	// b 0x82a0e218
	goto loc_82A0E218;
loc_82A0E168:
	// addi r30,r11,4
	ctx.r30.s64 = ctx.r11.s64 + 4;
	// addis r11,r10,2
	ctx.r11.s64 = ctx.r10.s64 + 131072;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r11,r11,19168
	ctx.r11.s64 = ctx.r11.s64 + 19168;
	// addis r28,r11,1
	ctx.r28.s64 = ctx.r11.s64 + 65536;
	// addi r28,r28,-11084
	ctx.r28.s64 = ctx.r28.s64 + -11084;
loc_82A0E180:
	// addi r4,r30,8
	ctx.r4.s64 = ctx.r30.s64 + 8;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83178da4
	ctx.lr = 0x82A0E18C;
	__imp__XamUserNuiGetUserIndex(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x82a0e1b8
	if (!ctx.cr0.lt) goto loc_82A0E1B8;
	// lwz r11,12(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82a0e1c8
	if (ctx.cr6.eq) goto loc_82A0E1C8;
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// blt cr6,0x82a0e1c8
	if (ctx.cr6.lt) goto loc_82A0E1C8;
	// lwz r11,24028(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24028);
	// lwzx r11,r11,r24
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r24.u32);
	// rlwinm. r11,r11,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82a0e1c8
	if (ctx.cr0.eq) goto loc_82A0E1C8;
loc_82A0E1B8:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r23,-4(r30)
	PPC_STORE_U32(ctx.r30.u32 + -4, ctx.r23.u32);
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
loc_82A0E1C8:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a0e1e0
	if (ctx.cr6.eq) goto loc_82A0E1E0;
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
	// bge cr6,0x82a0e1e4
	if (!ctx.cr6.lt) goto loc_82A0E1E4;
loc_82A0E1E0:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82A0E1E4:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
	// addis r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 65536;
	// addi r30,r30,28
	ctx.r30.s64 = ctx.r30.s64 + 28;
	// addi r28,r28,-11056
	ctx.r28.s64 = ctx.r28.s64 + -11056;
	// cmplwi cr6,r29,8
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 8, ctx.xer);
	// blt cr6,0x82a0e180
	if (ctx.cr6.lt) goto loc_82A0E180;
	// lwz r11,24028(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24028);
	// li r10,0
	ctx.r10.s64 = 0;
	// stwx r23,r11,r26
	PPC_STORE_U32(ctx.r11.u32 + ctx.r26.u32, ctx.r23.u32);
	// lwz r11,24028(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24028);
	// addis r3,r11,2
	ctx.r3.s64 = ctx.r11.s64 + 131072;
	// stw r10,24036(r27)
	PPC_STORE_U32(ctx.r27.u32 + 24036, ctx.r10.u32);
loc_82A0E218:
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r3,19120
	ctx.r3.s64 = ctx.r3.s64 + 19120;
	// bl 0x831796f4
	ctx.lr = 0x82A0E22C;
	__imp__KeReleaseMutant(ctx, base);
loc_82A0E22C:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82fa76b4
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A0E234"))) PPC_WEAK_FUNC(sub_82A0E234);
PPC_FUNC_IMPL(__imp__sub_82A0E234) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A0E238"))) PPC_WEAK_FUNC(sub_82A0E238);
PPC_FUNC_IMPL(__imp__sub_82A0E238) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa766c
	ctx.lr = 0x82A0E240;
	__savegprlr_25(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31963
	ctx.r31.s64 = -2094727168;
	// lis r11,8
	ctx.r11.s64 = 524288;
	// ori r10,r11,63164
	ctx.r10.u64 = ctx.r11.u64 | 63164;
	// lwz r11,24028(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24028);
	// lwzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82a0e3e0
	if (ctx.cr0.eq) goto loc_82A0E3E0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82a0c9b8
	ctx.lr = 0x82A0E268;
	sub_82A0C9B8(ctx, base);
	// lwz r30,24028(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24028);
	// bl 0x82a74720
	ctx.lr = 0x82A0E270;
	sub_82A74720(ctx, base);
	// lis r28,-31963
	ctx.r28.s64 = -2094727168;
	// lwz r11,24036(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 24036);
	// subf r11,r11,r3
	ctx.r11.s64 = ctx.r3.s64 - ctx.r11.s64;
	// addic r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 & ctx.r30.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82a0e2b8
	if (!ctx.cr6.eq) goto loc_82A0E2B8;
	// lwz r10,24028(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24028);
loc_82A0E294:
	// li r11,0
	ctx.r11.s64 = 0;
	// addis r3,r10,2
	ctx.r3.s64 = ctx.r10.s64 + 131072;
	// stw r11,24036(r28)
	PPC_STORE_U32(ctx.r28.u32 + 24036, ctx.r11.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r3,19120
	ctx.r3.s64 = ctx.r3.s64 + 19120;
	// bl 0x831796f4
	ctx.lr = 0x82A0E2B4;
	__imp__KeReleaseMutant(ctx, base);
	// b 0x82a0e3e0
	goto loc_82A0E3E0;
loc_82A0E2B8:
	// addis r25,r11,2
	ctx.r25.s64 = ctx.r11.s64 + 131072;
	// addi r25,r25,19101
	ctx.r25.s64 = ctx.r25.s64 + 19101;
	// lbz r10,0(r25)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r25.u32 + 0);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lwz r10,24028(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24028);
	// beq 0x82a0e294
	if (ctx.cr0.eq) goto loc_82A0E294;
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// addis r30,r10,2
	ctx.r30.s64 = ctx.r10.s64 + 131072;
	// lis r11,0
	ctx.r11.s64 = 0;
	// li r27,8
	ctx.r27.s64 = 8;
	// addi r30,r30,19168
	ctx.r30.s64 = ctx.r30.s64 + 19168;
	// ori r26,r11,54464
	ctx.r26.u64 = ctx.r11.u64 | 54464;
loc_82A0E2E8:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82a0e300
	if (ctx.cr6.eq) goto loc_82A0E300;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne cr6,0x82a0e304
	if (!ctx.cr6.eq) goto loc_82A0E304;
loc_82A0E300:
	// li r11,1
	ctx.r11.s64 = 1;
loc_82A0E304:
	// stwx r11,r30,r26
	PPC_STORE_U32(ctx.r30.u32 + ctx.r26.u32, ctx.r11.u32);
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82a0e324
	if (!ctx.cr6.eq) goto loc_82A0E324;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82fa7cf0
	ctx.lr = 0x82A0E324;
	sub_82FA7CF0(ctx, base);
loc_82A0E324:
	// addis r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 65536;
	// addic. r27,r27,-1
	ctx.xer.ca = ctx.r27.u32 > 0;
	ctx.r27.s64 = ctx.r27.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// addi r30,r30,-11056
	ctx.r30.s64 = ctx.r30.s64 + -11056;
	// addi r29,r29,28
	ctx.r29.s64 = ctx.r29.s64 + 28;
	// bne 0x82a0e2e8
	if (!ctx.cr0.eq) goto loc_82A0E2E8;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r11,0
	ctx.r11.s64 = 0;
	// stb r10,0(r25)
	PPC_STORE_U8(ctx.r25.u32 + 0, ctx.r10.u8);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r11,24036(r28)
	PPC_STORE_U32(ctx.r28.u32 + 24036, ctx.r11.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r11,24028(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24028);
	// addis r3,r11,2
	ctx.r3.s64 = ctx.r11.s64 + 131072;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r3,19120
	ctx.r3.s64 = ctx.r3.s64 + 19120;
	// bl 0x831796f4
	ctx.lr = 0x82A0E364;
	__imp__KeReleaseMutant(ctx, base);
	// bl 0x83178db4
	ctx.lr = 0x82A0E368;
	__imp__XamNuiIdentityGetSessionId(ctx, base);
	// lis r10,2
	ctx.r10.s64 = 131072;
	// lwz r11,24028(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24028);
	// ori r10,r10,19160
	ctx.r10.u64 = ctx.r10.u64 | 19160;
	// stdx r3,r11,r10
	PPC_STORE_U64(ctx.r11.u32 + ctx.r10.u32, ctx.r3.u64);
	// bl 0x83178d64
	ctx.lr = 0x82A0E37C;
	__imp__XamGetCurrentTitleId(ctx, base);
	// lis r10,2
	ctx.r10.s64 = 131072;
	// lwz r11,24028(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24028);
	// lis r4,10
	ctx.r4.s64 = 655360;
	// ori r10,r10,19156
	ctx.r10.u64 = ctx.r10.u64 | 19156;
	// ori r4,r4,61440
	ctx.r4.u64 = ctx.r4.u64 | 61440;
	// stwx r3,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r3.u32);
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82a0d110
	ctx.lr = 0x82A0E39C;
	sub_82A0D110(ctx, base);
	// lwz r30,84(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82a0e3e0
	if (ctx.cr6.eq) goto loc_82A0E3E0;
	// lwz r11,24028(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24028);
	// lis r5,10
	ctx.r5.s64 = 655360;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addis r3,r11,2
	ctx.r3.s64 = ctx.r11.s64 + 131072;
	// ori r5,r5,61440
	ctx.r5.u64 = ctx.r5.u64 | 61440;
	// addi r3,r3,19152
	ctx.r3.s64 = ctx.r3.s64 + 19152;
	// bl 0x82a1d080
	ctx.lr = 0x82A0E3C4;
	sub_82A1D080(ctx, base);
	// lis r10,8
	ctx.r10.s64 = 524288;
	// lwz r11,24028(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24028);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// ori r10,r10,63156
	ctx.r10.u64 = ctx.r10.u64 | 63156;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwzx r3,r11,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// bl 0x82a81d88
	ctx.lr = 0x82A0E3E0;
	sub_82A81D88(ctx, base);
loc_82A0E3E0:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82fa76bc
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A0E3E8"))) PPC_WEAK_FUNC(sub_82A0E3E8);
PPC_FUNC_IMPL(__imp__sub_82A0E3E8) {
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
	// lis r9,1
	ctx.r9.s64 = 65536;
	// addi r10,r3,2704
	ctx.r10.s64 = ctx.r3.s64 + 2704;
	// ori r7,r9,7968
	ctx.r7.u64 = ctx.r9.u64 | 7968;
	// lis r9,1
	ctx.r9.s64 = 65536;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r8,r3,224
	ctx.r8.s64 = ctx.r3.s64 + 224;
	// li r3,0
	ctx.r3.s64 = 0;
	// add r11,r10,r7
	ctx.r11.u64 = ctx.r10.u64 + ctx.r7.u64;
	// ori r6,r9,8112
	ctx.r6.u64 = ctx.r9.u64 | 8112;
loc_82A0E420:
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r9,r4
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r4.u32, ctx.xer);
	// bne cr6,0x82a0e444
	if (!ctx.cr6.eq) goto loc_82A0E444;
	// mulli r9,r4,352
	ctx.r9.s64 = ctx.r4.s64 * 352;
	// lwz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// lwz r9,324(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 324);
	// cmplw cr6,r5,r9
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82a0e4a4
	if (ctx.cr6.eq) goto loc_82A0E4A4;
loc_82A0E444:
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// add r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 + ctx.r6.u64;
	// cmplwi cr6,r3,2
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 2, ctx.xer);
	// blt cr6,0x82a0e420
	if (ctx.cr6.lt) goto loc_82A0E420;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// li r31,0
	ctx.r31.s64 = 0;
loc_82A0E45C:
	// addis r11,r3,1
	ctx.r11.s64 = ctx.r3.s64 + 65536;
	// lwzx r5,r3,r7
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r7.u32);
	// add r10,r3,r7
	ctx.r10.u64 = ctx.r3.u64 + ctx.r7.u64;
	// addi r11,r11,7972
	ctx.r11.s64 = ctx.r11.s64 + 7972;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mulli r9,r9,352
	ctx.r9.s64 = ctx.r9.s64 * 352;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// lwz r30,324(r9)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r9.u32 + 324);
	// cmplw cr6,r30,r5
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r5.u32, ctx.xer);
	// bne cr6,0x82a0e4bc
	if (!ctx.cr6.eq) goto loc_82A0E4BC;
	// lwz r9,328(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 328);
	// cmpwi cr6,r9,2
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 2, ctx.xer);
	// bne cr6,0x82a0e4bc
	if (!ctx.cr6.eq) goto loc_82A0E4BC;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// add r3,r3,r6
	ctx.r3.u64 = ctx.r3.u64 + ctx.r6.u64;
	// cmplwi cr6,r31,2
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 2, ctx.xer);
	// blt cr6,0x82a0e45c
	if (ctx.cr6.lt) goto loc_82A0E45C;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82A0E4A4:
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
loc_82A0E4BC:
	// mulli r9,r4,352
	ctx.r9.s64 = ctx.r4.s64 * 352;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// lwz r9,324(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 324);
	// stw r4,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r4.u32);
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// bl 0x82a0cf68
	ctx.lr = 0x82A0E4D4;
	sub_82A0CF68(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x82a0e4a4
	goto loc_82A0E4A4;
}

__attribute__((alias("__imp__sub_82A0E4DC"))) PPC_WEAK_FUNC(sub_82A0E4DC);
PPC_FUNC_IMPL(__imp__sub_82A0E4DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A0E4E0"))) PPC_WEAK_FUNC(sub_82A0E4E0);
PPC_FUNC_IMPL(__imp__sub_82A0E4E0) {
	PPC_FUNC_PROLOGUE();
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r30.u64);
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r31,1
	ctx.r31.s64 = 1;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
loc_82A0E4F4:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// slw r10,r31,r30
	ctx.r10.u64 = ctx.r30.u8 & 0x20 ? 0 : (ctx.r31.u32 << (ctx.r30.u8 & 0x3F));
	// and. r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82a0e5b0
	if (ctx.cr0.eq) goto loc_82A0E5B0;
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// subfic r9,r9,48
	ctx.xer.ca = ctx.r9.u32 <= 48;
	ctx.r9.s64 = 48 - ctx.r9.s64;
	// and. r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r8,r5
	ctx.r8.u64 = ctx.r5.u64;
	// lwzx r7,r9,r4
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r4.u32);
	// beq 0x82a0e56c
	if (ctx.cr0.eq) goto loc_82A0E56C;
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a0e550
	if (ctx.cr6.eq) goto loc_82A0E550;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_82A0E538:
	// slw r11,r31,r8
	ctx.r11.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r31.u32 << (ctx.r8.u8 & 0x3F));
	// and. r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 & ctx.r7.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82a0e548
	if (ctx.cr0.eq) goto loc_82A0E548;
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
loc_82A0E548:
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// bdnz 0x82a0e538
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82A0E538;
loc_82A0E550:
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmplw cr6,r6,r11
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82a0e5b0
	if (ctx.cr6.lt) goto loc_82A0E5B0;
	// stwx r5,r9,r4
	PPC_STORE_U32(ctx.r9.u32 + ctx.r4.u32, ctx.r5.u32);
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// andc r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ~ctx.r10.u64;
	// b 0x82a0e5ac
	goto loc_82A0E5AC;
loc_82A0E56C:
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a0e594
	if (ctx.cr6.eq) goto loc_82A0E594;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_82A0E57C:
	// slw r11,r31,r8
	ctx.r11.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r31.u32 << (ctx.r8.u8 & 0x3F));
	// and. r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 & ctx.r7.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82a0e58c
	if (ctx.cr0.eq) goto loc_82A0E58C;
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
loc_82A0E58C:
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// bdnz 0x82a0e57c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82A0E57C;
loc_82A0E594:
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplw cr6,r6,r11
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82a0e5b0
	if (ctx.cr6.lt) goto loc_82A0E5B0;
	// stwx r5,r9,r4
	PPC_STORE_U32(ctx.r9.u32 + ctx.r4.u32, ctx.r5.u32);
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
loc_82A0E5AC:
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
loc_82A0E5B0:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplwi cr6,r30,16
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 16, ctx.xer);
	// blt cr6,0x82a0e4f4
	if (ctx.cr6.lt) goto loc_82A0E4F4;
	// ld r30,-16(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A0E5C8"))) PPC_WEAK_FUNC(sub_82A0E5C8);
PPC_FUNC_IMPL(__imp__sub_82A0E5C8) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,122
	ctx.r11.s64 = 122;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,72(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82a166b0
	ctx.lr = 0x82A0E5F0;
	sub_82A166B0(ctx, base);
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// lwz r3,72(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// bl 0x82a18f08
	ctx.lr = 0x82A0E5FC;
	sub_82A18F08(ctx, base);
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r3,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r3.u32);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// li r9,6144
	ctx.r9.s64 = 6144;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// addi r11,r10,-4
	ctx.r11.s64 = ctx.r10.s64 + -4;
	// addi r10,r31,24
	ctx.r10.s64 = ctx.r31.s64 + 24;
loc_82A0E624:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// lwzu r8,4(r10)
	ea = 4 + ctx.r10.u32;
	ctx.r8.u64 = PPC_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// or r5,r9,r5
	ctx.r5.u64 = ctx.r9.u64 | ctx.r5.u64;
	// and r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 & ctx.r9.u64;
	// or r4,r9,r4
	ctx.r4.u64 = ctx.r9.u64 | ctx.r4.u64;
	// bdnz 0x82a0e624
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82A0E624;
	// addi r31,r31,88
	ctx.r31.s64 = ctx.r31.s64 + 88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a0cee0
	ctx.lr = 0x82A0E648;
	sub_82A0CEE0(ctx, base);
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,24028(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24028);
	// addis r30,r11,9
	ctx.r30.s64 = ctx.r11.s64 + 589824;
	// addi r30,r30,-3500
	ctx.r30.s64 = ctx.r30.s64 + -3500;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a0e4e0
	ctx.lr = 0x82A0E664;
	sub_82A0E4E0(ctx, base);
	// addi r3,r30,60
	ctx.r3.s64 = ctx.r30.s64 + 60;
	// bl 0x82a0e4e0
	ctx.lr = 0x82A0E66C;
	sub_82A0E4E0(ctx, base);
	// addi r3,r30,40
	ctx.r3.s64 = ctx.r30.s64 + 40;
	// bl 0x82a0e4e0
	ctx.lr = 0x82A0E674;
	sub_82A0E4E0(ctx, base);
	// addi r3,r30,20
	ctx.r3.s64 = ctx.r30.s64 + 20;
	// bl 0x82a0e4e0
	ctx.lr = 0x82A0E67C;
	sub_82A0E4E0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
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

__attribute__((alias("__imp__sub_82A0E694"))) PPC_WEAK_FUNC(sub_82A0E694);
PPC_FUNC_IMPL(__imp__sub_82A0E694) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A0E698"))) PPC_WEAK_FUNC(sub_82A0E698);
PPC_FUNC_IMPL(__imp__sub_82A0E698) {
	PPC_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x82A0E6A0;
	__savegprlr_29(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r6,8
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 8, ctx.xer);
	// bge cr6,0x82a0e6c0
	if (!ctx.cr6.lt) goto loc_82A0E6C0;
	// mulli r10,r6,28
	ctx.r10.s64 = ctx.r6.s64 * 28;
	// lwzx r10,r10,r3
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82a0e6c0
	if (ctx.cr6.eq) goto loc_82A0E6C0;
	// li r6,-2
	ctx.r6.s64 = -2;
loc_82A0E6C0:
	// mulli r10,r5,352
	ctx.r10.s64 = ctx.r5.s64 * 352;
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm. r10,r8,0,26,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r5,r31,224
	ctx.r5.s64 = ctx.r31.s64 + 224;
	// li r29,0
	ctx.r29.s64 = 0;
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// lwz r10,320(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 320);
	// beq 0x82a0e7d8
	if (ctx.cr0.eq) goto loc_82A0E7D8;
	// lis r9,2
	ctx.r9.s64 = 131072;
	// stw r10,80(r4)
	PPC_STORE_U32(ctx.r4.u32 + 80, ctx.r10.u32);
	// li r30,1
	ctx.r30.s64 = 1;
	// ori r9,r9,19101
	ctx.r9.u64 = ctx.r9.u64 | 19101;
	// cmplwi cr6,r7,8
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 8, ctx.xer);
	// bge cr6,0x82a0e71c
	if (!ctx.cr6.lt) goto loc_82A0E71C;
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// cmplw cr6,r7,r6
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x82a0e71c
	if (ctx.cr6.eq) goto loc_82A0E71C;
	// cmplwi cr6,r6,8
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 8, ctx.xer);
	// bge cr6,0x82a0e71c
	if (!ctx.cr6.lt) goto loc_82A0E71C;
	// mulli r10,r6,28
	ctx.r10.s64 = ctx.r6.s64 * 28;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r29,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r29.u32);
	// stbx r30,r11,r9
	PPC_STORE_U8(ctx.r11.u32 + ctx.r9.u32, ctx.r30.u8);
loc_82A0E71C:
	// lwz r10,320(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 320);
	// li r6,-1
	ctx.r6.s64 = -1;
	// cmplwi cr6,r10,8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 8, ctx.xer);
	// bge cr6,0x82a0e778
	if (!ctx.cr6.lt) goto loc_82A0E778;
	// rlwinm. r8,r8,0,25,25
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x82a0e768
	if (!ctx.cr0.eq) goto loc_82A0E768;
	// cmplwi cr6,r7,8
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 8, ctx.xer);
	// bge cr6,0x82a0e768
	if (!ctx.cr6.lt) goto loc_82A0E768;
	// cmplw cr6,r7,r10
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82a0e768
	if (ctx.cr6.eq) goto loc_82A0E768;
	// mulli r8,r7,28
	ctx.r8.s64 = ctx.r7.s64 * 28;
	// add r8,r8,r11
	ctx.r8.u64 = ctx.r8.u64 + ctx.r11.u64;
	// lwz r8,8(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x82a0e768
	if (ctx.cr6.eq) goto loc_82A0E768;
	// mulli r10,r10,28
	ctx.r10.s64 = ctx.r10.s64 * 28;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r29,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r29.u32);
	// stbx r30,r11,r9
	PPC_STORE_U8(ctx.r11.u32 + ctx.r9.u32, ctx.r30.u8);
loc_82A0E768:
	// lwz r10,544(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 544);
	// mulli r10,r10,28
	ctx.r10.s64 = ctx.r10.s64 * 28;
	// stwx r30,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r30.u32);
	// stw r6,544(r31)
	PPC_STORE_U32(ctx.r31.u32 + 544, ctx.r6.u32);
loc_82A0E778:
	// cmpwi cr6,r7,-2
	ctx.cr6.compare<int32_t>(ctx.r7.s32, -2, ctx.xer);
	// beq cr6,0x82a0e7fc
	if (ctx.cr6.eq) goto loc_82A0E7FC;
	// mulli r10,r7,28
	ctx.r10.s64 = ctx.r7.s64 * 28;
	// lwzx r10,r10,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// bne cr6,0x82a0e7fc
	if (!ctx.cr6.eq) goto loc_82A0E7FC;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// addi r9,r11,544
	ctx.r9.s64 = ctx.r11.s64 + 544;
loc_82A0E798:
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmplw cr6,r8,r7
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, ctx.xer);
	// beq cr6,0x82a0e7b8
	if (ctx.cr6.eq) goto loc_82A0E7B8;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r9,r9,352
	ctx.r9.s64 = ctx.r9.s64 + 352;
	// cmplwi cr6,r10,6
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 6, ctx.xer);
	// blt cr6,0x82a0e798
	if (ctx.cr6.lt) goto loc_82A0E798;
	// b 0x82a0e7fc
	goto loc_82A0E7FC;
loc_82A0E7B8:
	// mulli r10,r10,352
	ctx.r10.s64 = ctx.r10.s64 * 352;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r9,r10,544
	ctx.r9.s64 = ctx.r10.s64 + 544;
	// lwz r9,544(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 544);
	// mulli r9,r9,28
	ctx.r9.s64 = ctx.r9.s64 * 28;
	// stwx r30,r9,r11
	PPC_STORE_U32(ctx.r9.u32 + ctx.r11.u32, ctx.r30.u32);
	// stw r6,544(r10)
	PPC_STORE_U32(ctx.r10.u32 + 544, ctx.r6.u32);
	// b 0x82a0e7fc
	goto loc_82A0E7FC;
loc_82A0E7D8:
	// cmplwi cr6,r10,8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 8, ctx.xer);
	// bge cr6,0x82a0e7fc
	if (!ctx.cr6.lt) goto loc_82A0E7FC;
	// lwz r9,544(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 544);
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,-1
	ctx.r7.s64 = -1;
	// mulli r9,r9,28
	ctx.r9.s64 = ctx.r9.s64 * 28;
	// stwx r8,r9,r11
	PPC_STORE_U32(ctx.r9.u32 + ctx.r11.u32, ctx.r8.u32);
	// stw r7,544(r31)
	PPC_STORE_U32(ctx.r31.u32 + 544, ctx.r7.u32);
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
loc_82A0E7FC:
	// cmpwi cr6,r3,-2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -2, ctx.xer);
	// bne cr6,0x82a0e830
	if (!ctx.cr6.eq) goto loc_82A0E830;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
loc_82A0E80C:
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x82a0e82c
	if (ctx.cr6.eq) goto loc_82A0E82C;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r9,r9,28
	ctx.r9.s64 = ctx.r9.s64 + 28;
	// cmplwi cr6,r10,8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 8, ctx.xer);
	// blt cr6,0x82a0e80c
	if (ctx.cr6.lt) goto loc_82A0E80C;
	// b 0x82a0e854
	goto loc_82A0E854;
loc_82A0E82C:
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
loc_82A0E830:
	// cmplwi cr6,r3,8
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 8, ctx.xer);
	// bge cr6,0x82a0e854
	if (!ctx.cr6.lt) goto loc_82A0E854;
	// mulli r10,r3,28
	ctx.r10.s64 = ctx.r3.s64 * 28;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// li r10,3
	ctx.r10.s64 = 3;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// stw r29,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r29.u32);
	// stw r9,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r9.u32);
loc_82A0E854:
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A0E858"))) PPC_WEAK_FUNC(sub_82A0E858);
PPC_FUNC_IMPL(__imp__sub_82A0E858) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7674
	ctx.lr = 0x82A0E860;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// lwz r4,12(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// bl 0x82a0d680
	ctx.lr = 0x82A0E878;
	sub_82A0D680(ctx, base);
	// mr. r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// bne 0x82a0e88c
	if (!ctx.cr0.eq) goto loc_82A0E88C;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,170
	ctx.r3.u64 = ctx.r3.u64 | 170;
	// b 0x82a0e90c
	goto loc_82A0E90C;
loc_82A0E88C:
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// li r30,-2
	ctx.r30.s64 = -2;
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// bge cr6,0x82a0e8c4
	if (!ctx.cr6.lt) goto loc_82A0E8C4;
	// mulli r11,r11,28
	ctx.r11.s64 = ctx.r11.s64 * 28;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// bne cr6,0x82a0e8b4
	if (!ctx.cr6.eq) goto loc_82A0E8B4;
	// li r10,1
	ctx.r10.s64 = 1;
loc_82A0E8B4:
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// stw r30,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r30.u32);
loc_82A0E8C4:
	// li r5,88
	ctx.r5.s64 = 88;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82a75220
	ctx.lr = 0x82A0E8D4;
	sub_82A75220(ctx, base);
	// li r5,88
	ctx.r5.s64 = 88;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r27,88(r28)
	PPC_STORE_U32(ctx.r28.u32 + 88, ctx.r27.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82fa7cf0
	ctx.lr = 0x82A0E8E8;
	sub_82FA7CF0(ctx, base);
	// li r11,-1
	ctx.r11.s64 = -1;
	// li r10,254
	ctx.r10.s64 = 254;
	// stw r30,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r30.u32);
	// stw r30,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r30.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r10,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r10.u32);
	// stw r30,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r30.u32);
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
loc_82A0E90C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A0E914"))) PPC_WEAK_FUNC(sub_82A0E914);
PPC_FUNC_IMPL(__imp__sub_82A0E914) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A0E918"))) PPC_WEAK_FUNC(sub_82A0E918);
PPC_FUNC_IMPL(__imp__sub_82A0E918) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7670
	ctx.lr = 0x82A0E920;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// li r27,0
	ctx.r27.s64 = 0;
	// addi r31,r3,2336
	ctx.r31.s64 = ctx.r3.s64 + 2336;
	// li r29,2
	ctx.r29.s64 = 2;
loc_82A0E93C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82a0e984
	if (ctx.cr6.eq) goto loc_82A0E984;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm. r11,r11,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82a0e968
	if (ctx.cr0.eq) goto loc_82A0E968;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// bne cr6,0x82a0e968
	if (!ctx.cr6.eq) goto loc_82A0E968;
	// lis r27,-32761
	ctx.r27.s64 = -2147024896;
	// ori r27,r27,170
	ctx.r27.u64 = ctx.r27.u64 | 170;
	// b 0x82a0e984
	goto loc_82A0E984;
loc_82A0E968:
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a0e858
	ctx.lr = 0x82A0E978;
	sub_82A0E858(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x82a0e984
	if (!ctx.cr0.lt) goto loc_82A0E984;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
loc_82A0E984:
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r31,r31,88
	ctx.r31.s64 = ctx.r31.s64 + 88;
	// bne 0x82a0e93c
	if (!ctx.cr0.eq) goto loc_82A0E93C;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82fa76c0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A0E99C"))) PPC_WEAK_FUNC(sub_82A0E99C);
PPC_FUNC_IMPL(__imp__sub_82A0E99C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A0E9A0"))) PPC_WEAK_FUNC(sub_82A0E9A0);
PPC_FUNC_IMPL(__imp__sub_82A0E9A0) {
	PPC_FUNC_PROLOGUE();
	// lwz r8,0(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r7,-1
	ctx.r7.s64 = -1;
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// stw r8,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r8.u32);
	// lwz r8,60(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 60);
	// stw r8,240(r5)
	PPC_STORE_U32(ctx.r5.u32 + 240, ctx.r8.u32);
	// lwz r8,4(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// stw r8,8(r5)
	PPC_STORE_U32(ctx.r5.u32 + 8, ctx.r8.u32);
	// lwz r8,8(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// stw r8,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r8.u32);
	// lwz r8,12(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// stw r8,20(r5)
	PPC_STORE_U32(ctx.r5.u32 + 20, ctx.r8.u32);
	// stw r7,220(r5)
	PPC_STORE_U32(ctx.r5.u32 + 220, ctx.r7.u32);
	// lwz r8,20(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	// stw r8,16(r5)
	PPC_STORE_U32(ctx.r5.u32 + 16, ctx.r8.u32);
	// std r10,232(r5)
	PPC_STORE_U64(ctx.r5.u32 + 232, ctx.r10.u64);
	// ld r8,64(r4)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r4.u32 + 64);
	// std r8,256(r5)
	PPC_STORE_U64(ctx.r5.u32 + 256, ctx.r8.u64);
	// lwz r8,72(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 72);
	// stw r8,248(r5)
	PPC_STORE_U32(ctx.r5.u32 + 248, ctx.r8.u32);
	// lwz r8,24(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	// stw r8,48(r5)
	PPC_STORE_U32(ctx.r5.u32 + 48, ctx.r8.u32);
	// lwz r8,36(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 36);
	// stw r8,12(r5)
	PPC_STORE_U32(ctx.r5.u32 + 12, ctx.r8.u32);
	// stw r10,224(r5)
	PPC_STORE_U32(ctx.r5.u32 + 224, ctx.r10.u32);
	// lwz r8,16(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// stw r8,24(r5)
	PPC_STORE_U32(ctx.r5.u32 + 24, ctx.r8.u32);
	// lwz r8,84(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 84);
	// stw r8,244(r5)
	PPC_STORE_U32(ctx.r5.u32 + 244, ctx.r8.u32);
	// stw r10,52(r5)
	PPC_STORE_U32(ctx.r5.u32 + 52, ctx.r10.u32);
	// lwz r8,40(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 40);
	// stw r8,56(r5)
	PPC_STORE_U32(ctx.r5.u32 + 56, ctx.r8.u32);
	// lwz r8,48(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 48);
	// cmpwi cr6,r8,2
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 2, ctx.xer);
	// beq cr6,0x82a0ea3c
	if (ctx.cr6.eq) goto loc_82A0EA3C;
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r8,68(r5)
	PPC_STORE_U32(ctx.r5.u32 + 68, ctx.r8.u32);
loc_82A0EA3C:
	// stw r10,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r10.u32);
	// lis r8,1
	ctx.r8.s64 = 65536;
	// stw r10,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r10.u32);
	// addi r3,r11,88
	ctx.r3.s64 = ctx.r11.s64 + 88;
	// stw r10,36(r11)
	PPC_STORE_U32(ctx.r11.u32 + 36, ctx.r10.u32);
	// ori r8,r8,8112
	ctx.r8.u64 = ctx.r8.u64 | 8112;
	// stw r10,40(r11)
	PPC_STORE_U32(ctx.r11.u32 + 40, ctx.r10.u32);
	// li r5,132
	ctx.r5.s64 = 132;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mullw r11,r11,r8
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r8.s32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addis r4,r11,1
	ctx.r4.s64 = ctx.r11.s64 + 65536;
	// addi r4,r4,10684
	ctx.r4.s64 = ctx.r4.s64 + 10684;
	// b 0x82a75220
	sub_82A75220(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A0EA74"))) PPC_WEAK_FUNC(sub_82A0EA74);
PPC_FUNC_IMPL(__imp__sub_82A0EA74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A0EA78"))) PPC_WEAK_FUNC(sub_82A0EA78);
PPC_FUNC_IMPL(__imp__sub_82A0EA78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa764c
	ctx.lr = 0x82A0EA80;
	__savegprlr_17(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,2
	ctx.r11.s64 = 131072;
	// li r23,0
	ctx.r23.s64 = 0;
	// ori r11,r11,19108
	ctx.r11.u64 = ctx.r11.u64 | 19108;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r19,r5
	ctx.r19.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// lwzx r11,r4,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r11.u32);
	// mr r20,r7
	ctx.r20.u64 = ctx.r7.u64;
	// mr r22,r8
	ctx.r22.u64 = ctx.r8.u64;
	// mr r25,r9
	ctx.r25.u64 = ctx.r9.u64;
	// mr r18,r10
	ctx.r18.u64 = ctx.r10.u64;
	// mr r17,r23
	ctx.r17.u64 = ctx.r23.u64;
	// mr r31,r23
	ctx.r31.u64 = ctx.r23.u64;
	// li r27,-2
	ctx.r27.s64 = -2;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82a0eae4
	if (ctx.cr6.eq) goto loc_82A0EAE4;
loc_82A0EAC8:
	// lis r17,-32761
	ctx.r17.s64 = -2147024896;
	// ori r17,r17,170
	ctx.r17.u64 = ctx.r17.u64 | 170;
loc_82A0EAD0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a0d838
	ctx.lr = 0x82A0EAD8;
	sub_82A0D838(ctx, base);
loc_82A0EAD8:
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82fa769c
	__restgprlr_17(ctx, base);
	return;
loc_82A0EAE4:
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a0d760
	ctx.lr = 0x82A0EAF0;
	sub_82A0D760(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82a0eac8
	if (ctx.cr0.eq) goto loc_82A0EAC8;
	// lis r11,2
	ctx.r11.s64 = 131072;
	// ori r11,r11,19102
	ctx.r11.u64 = ctx.r11.u64 | 19102;
	// lbzx r11,r30,r11
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + ctx.r11.u32);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82a0eac8
	if (!ctx.cr0.eq) goto loc_82A0EAC8;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a0e3e8
	ctx.lr = 0x82A0EB18;
	sub_82A0E3E8(ctx, base);
	// lis r11,1
	ctx.r11.s64 = 65536;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// ori r11,r11,8112
	ctx.r11.u64 = ctx.r11.u64 | 8112;
	// li r5,132
	ctx.r5.s64 = 132;
	// mullw r11,r3,r11
	ctx.r11.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r11.s32);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r28,r11,2704
	ctx.r28.s64 = ctx.r11.s64 + 2704;
	// addis r3,r28,1
	ctx.r3.s64 = ctx.r28.s64 + 65536;
	// addi r3,r3,7980
	ctx.r3.s64 = ctx.r3.s64 + 7980;
	// bl 0x82fa7cf0
	ctx.lr = 0x82A0EB44;
	sub_82FA7CF0(ctx, base);
	// li r21,1
	ctx.r21.s64 = 1;
	// cmpwi cr6,r26,1
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 1, ctx.xer);
	// beq cr6,0x82a0ebc0
	if (ctx.cr6.eq) goto loc_82A0EBC0;
	// cmpwi cr6,r26,2
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 2, ctx.xer);
	// beq cr6,0x82a0eb64
	if (ctx.cr6.eq) goto loc_82A0EB64;
	// lis r17,-32768
	ctx.r17.s64 = -2147483648;
	// ori r17,r17,65535
	ctx.r17.u64 = ctx.r17.u64 | 65535;
	// b 0x82a0ead0
	goto loc_82A0EAD0;
loc_82A0EB64:
	// lis r11,1
	ctx.r11.s64 = 65536;
	// mr r8,r25
	ctx.r8.u64 = ctx.r25.u64;
	// ori r11,r11,7976
	ctx.r11.u64 = ctx.r11.u64 | 7976;
	// mr r7,r22
	ctx.r7.u64 = ctx.r22.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwzx r6,r28,r11
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r11.u32);
	// bl 0x82a0e698
	ctx.lr = 0x82A0EB88;
	sub_82A0E698(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -2, ctx.xer);
	// bne cr6,0x82a0eba0
	if (!ctx.cr6.eq) goto loc_82A0EBA0;
	// lis r17,-31999
	ctx.r17.s64 = -2097086464;
	// ori r17,r17,6
	ctx.r17.u64 = ctx.r17.u64 | 6;
	// b 0x82a0ead0
	goto loc_82A0EAD0;
loc_82A0EBA0:
	// clrlwi. r11,r25,31
	ctx.r11.u64 = ctx.r25.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82a0ead0
	if (ctx.cr0.eq) goto loc_82A0EAD0;
	// lwz r11,320(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 320);
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// bge cr6,0x82a0ebf4
	if (!ctx.cr6.lt) goto loc_82A0EBF4;
	// rlwinm. r11,r25,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 27) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82a0ead0
	if (ctx.cr0.eq) goto loc_82A0EAD0;
	// b 0x82a0ebf4
	goto loc_82A0EBF4;
loc_82A0EBC0:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82a16660
	ctx.lr = 0x82A0EBC8;
	sub_82A16660(ctx, base);
	// lwz r11,320(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 320);
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// bge cr6,0x82a0ebf4
	if (!ctx.cr6.lt) goto loc_82A0EBF4;
	// mulli r11,r29,352
	ctx.r11.s64 = ctx.r29.s64 * 352;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// li r9,-1
	ctx.r9.s64 = -1;
	// addi r10,r11,544
	ctx.r10.s64 = ctx.r11.s64 + 544;
	// lwz r10,544(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 544);
	// mulli r10,r10,28
	ctx.r10.s64 = ctx.r10.s64 * 28;
	// stwx r21,r10,r30
	PPC_STORE_U32(ctx.r10.u32 + ctx.r30.u32, ctx.r21.u32);
	// stw r9,544(r11)
	PPC_STORE_U32(ctx.r11.u32 + 544, ctx.r9.u32);
loc_82A0EBF4:
	// lis r11,2
	ctx.r11.s64 = 131072;
	// lwz r10,292(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 292);
	// stw r26,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r26.u32);
	// lis r28,-31963
	ctx.r28.s64 = -2094727168;
	// ori r11,r11,19096
	ctx.r11.u64 = ctx.r11.u64 | 19096;
	// stw r22,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r22.u32);
	// stw r27,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r27.u32);
	// lis r9,8
	ctx.r9.s64 = 524288;
	// stw r25,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r25.u32);
	// lis r17,-32768
	ctx.r17.s64 = -2147483648;
	// stw r21,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r21.u32);
	// ori r9,r9,63164
	ctx.r9.u64 = ctx.r9.u64 | 63164;
	// stw r18,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r18.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r10,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r10.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r20,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r20.u32);
	// ori r17,r17,10
	ctx.r17.u64 = ctx.r17.u64 | 10;
	// lwzx r11,r30,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// stw r23,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r23.u32);
	// lwz r11,24028(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 24028);
	// lwzx r11,r11,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// rlwinm r11,r11,28,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0x2;
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// stw r23,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r23.u32);
	// stw r23,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r23.u32);
	// stw r24,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r24.u32);
	// stw r29,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r29.u32);
	// bl 0x82a0d9a0
	ctx.lr = 0x82A0EC6C;
	sub_82A0D9A0(ctx, base);
	// stw r3,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r3.u32);
	// lwz r11,24028(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 24028);
	// addis r3,r11,9
	ctx.r3.s64 = ctx.r11.s64 + 589824;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r3,-2428
	ctx.r3.s64 = ctx.r3.s64 + -2428;
	// bl 0x831792b4
	ctx.lr = 0x82A0EC88;
	__imp__KeSetEvent(ctx, base);
	// b 0x82a0ead8
	goto loc_82A0EAD8;
}

__attribute__((alias("__imp__sub_82A0EC8C"))) PPC_WEAK_FUNC(sub_82A0EC8C);
PPC_FUNC_IMPL(__imp__sub_82A0EC8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A0EC90"))) PPC_WEAK_FUNC(sub_82A0EC90);
PPC_FUNC_IMPL(__imp__sub_82A0EC90) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa764c
	ctx.lr = 0x82A0EC98;
	__savegprlr_17(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// li r19,0
	ctx.r19.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// mr r24,r5
	ctx.r24.u64 = ctx.r5.u64;
	// mr r23,r6
	ctx.r23.u64 = ctx.r6.u64;
	// mr r21,r7
	ctx.r21.u64 = ctx.r7.u64;
	// mr r18,r19
	ctx.r18.u64 = ctx.r19.u64;
	// mr r31,r19
	ctx.r31.u64 = ctx.r19.u64;
	// bl 0x82a0c9b8
	ctx.lr = 0x82A0ECC4;
	sub_82A0C9B8(ctx, base);
	// lis r20,-31963
	ctx.r20.s64 = -2094727168;
	// lwz r30,24028(r20)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r20.u32 + 24028);
	// bl 0x82a74720
	ctx.lr = 0x82A0ECD0;
	sub_82A74720(ctx, base);
	// lis r17,-31963
	ctx.r17.s64 = -2094727168;
	// lwz r11,24036(r17)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r17.u32 + 24036);
	// subf r11,r11,r3
	ctx.r11.s64 = ctx.r3.s64 - ctx.r11.s64;
	// addic r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r30,r11,r30
	ctx.r30.u64 = ctx.r11.u64 & ctx.r30.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x82a0ed28
	if (!ctx.cr6.eq) goto loc_82A0ED28;
	// lis r31,-31999
	ctx.r31.s64 = -2097086464;
	// ori r31,r31,5
	ctx.r31.u64 = ctx.r31.u64 | 5;
loc_82A0ECF8:
	// stw r19,24036(r17)
	PPC_STORE_U32(ctx.r17.u32 + 24036, ctx.r19.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r10,24028(r20)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r20.u32 + 24028);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// addis r3,r10,2
	ctx.r3.s64 = ctx.r10.s64 + 131072;
	// mr r11,r19
	ctx.r11.u64 = ctx.r19.u64;
	// addi r3,r3,19120
	ctx.r3.s64 = ctx.r3.s64 + 19120;
	// bl 0x831796f4
	ctx.lr = 0x82A0ED1C;
	__imp__KeReleaseMutant(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x82fa769c
	__restgprlr_17(ctx, base);
	return;
loc_82A0ED28:
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// stw r19,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r19.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82a0c960
	ctx.lr = 0x82A0ED3C;
	sub_82A0C960(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82a0ed5c
	if (!ctx.cr0.eq) goto loc_82A0ED5C;
	// lis r18,-31999
	ctx.r18.s64 = -2097086464;
	// ori r18,r18,8
	ctx.r18.u64 = ctx.r18.u64 | 8;
loc_82A0ED4C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a0d838
	ctx.lr = 0x82A0ED54;
	sub_82A0D838(ctx, base);
loc_82A0ED54:
	// mr r31,r18
	ctx.r31.u64 = ctx.r18.u64;
	// b 0x82a0ecf8
	goto loc_82A0ECF8;
loc_82A0ED5C:
	// addi r29,r30,2336
	ctx.r29.s64 = ctx.r30.s64 + 2336;
	// li r28,2
	ctx.r28.s64 = 2;
loc_82A0ED64:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82a0ed98
	if (ctx.cr6.eq) goto loc_82A0ED98;
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// rlwinm. r11,r11,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82a0ed98
	if (!ctx.cr0.eq) goto loc_82A0ED98;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a0e858
	ctx.lr = 0x82A0ED8C;
	sub_82A0E858(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x82a0ed98
	if (!ctx.cr0.lt) goto loc_82A0ED98;
	// mr r18,r3
	ctx.r18.u64 = ctx.r3.u64;
loc_82A0ED98:
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// addi r29,r29,88
	ctx.r29.s64 = ctx.r29.s64 + 88;
	// bne 0x82a0ed64
	if (!ctx.cr0.eq) goto loc_82A0ED64;
	// cmpwi cr6,r18,0
	ctx.cr6.compare<int32_t>(ctx.r18.s32, 0, ctx.xer);
	// blt cr6,0x82a0ed4c
	if (ctx.cr6.lt) goto loc_82A0ED4C;
	// lis r11,2
	ctx.r11.s64 = 131072;
	// ori r11,r11,19102
	ctx.r11.u64 = ctx.r11.u64 | 19102;
	// lbzx r11,r30,r11
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + ctx.r11.u32);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82a0edc8
	if (ctx.cr0.eq) goto loc_82A0EDC8;
	// lis r18,-32761
	ctx.r18.s64 = -2147024896;
	// ori r18,r18,170
	ctx.r18.u64 = ctx.r18.u64 | 170;
loc_82A0EDC8:
	// cmpwi cr6,r18,0
	ctx.cr6.compare<int32_t>(ctx.r18.s32, 0, ctx.xer);
	// blt cr6,0x82a0ed4c
	if (ctx.cr6.lt) goto loc_82A0ED4C;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a0d760
	ctx.lr = 0x82A0EDDC;
	sub_82A0D760(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x82a0edec
	if (!ctx.cr0.eq) goto loc_82A0EDEC;
	// lis r18,-32761
	ctx.r18.s64 = -2147024896;
	// ori r18,r18,170
	ctx.r18.u64 = ctx.r18.u64 | 170;
loc_82A0EDEC:
	// cmpwi cr6,r18,0
	ctx.cr6.compare<int32_t>(ctx.r18.s32, 0, ctx.xer);
	// blt cr6,0x82a0ed4c
	if (ctx.cr6.lt) goto loc_82A0ED4C;
	// lwz r27,84(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x82a0e3e8
	ctx.lr = 0x82A0EE04;
	sub_82A0E3E8(ctx, base);
	// lis r11,1
	ctx.r11.s64 = 65536;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// ori r26,r11,8112
	ctx.r26.u64 = ctx.r11.u64 | 8112;
	// li r5,132
	ctx.r5.s64 = 132;
	// mullw r11,r3,r26
	ctx.r11.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r26.s32);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r29,r11,2704
	ctx.r29.s64 = ctx.r11.s64 + 2704;
	// addis r3,r29,1
	ctx.r3.s64 = ctx.r29.s64 + 65536;
	// addi r3,r3,7980
	ctx.r3.s64 = ctx.r3.s64 + 7980;
	// bl 0x82fa7cf0
	ctx.lr = 0x82A0EE30;
	sub_82FA7CF0(ctx, base);
	// cmpwi cr6,r22,2
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 2, ctx.xer);
	// bne cr6,0x82a0ee70
	if (!ctx.cr6.eq) goto loc_82A0EE70;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// mr r8,r23
	ctx.r8.u64 = ctx.r23.u64;
	// ori r11,r11,7976
	ctx.r11.u64 = ctx.r11.u64 | 7976;
	// mr r7,r24
	ctx.r7.u64 = ctx.r24.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwzx r6,r29,r11
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r11.u32);
	// bl 0x82a0e698
	ctx.lr = 0x82A0EE5C;
	sub_82A0E698(ctx, base);
	// stw r3,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r3.u32);
	// cmpwi cr6,r3,-2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -2, ctx.xer);
	// bne cr6,0x82a0ee70
	if (!ctx.cr6.eq) goto loc_82A0EE70;
	// lis r18,-31999
	ctx.r18.s64 = -2097086464;
	// ori r18,r18,6
	ctx.r18.u64 = ctx.r18.u64 | 6;
loc_82A0EE70:
	// cmpwi cr6,r18,0
	ctx.cr6.compare<int32_t>(ctx.r18.s32, 0, ctx.xer);
	// blt cr6,0x82a0ed4c
	if (ctx.cr6.lt) goto loc_82A0ED4C;
	// lis r11,2
	ctx.r11.s64 = 131072;
	// stw r22,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r22.u32);
	// stw r24,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r24.u32);
	// li r29,1
	ctx.r29.s64 = 1;
	// ori r11,r11,19096
	ctx.r11.u64 = ctx.r11.u64 | 19096;
	// stw r23,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r23.u32);
	// stw r25,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r25.u32);
	// lis r10,8
	ctx.r10.s64 = 524288;
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, 0, ctx.xer);
	// ori r10,r10,63164
	ctx.r10.u64 = ctx.r10.u64 | 63164;
	// lwzx r11,r30,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// stw r29,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r29.u32);
	// stw r28,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r28.u32);
	// stw r19,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r19.u32);
	// lwz r11,24028(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 24028);
	// lwzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// rlwinm r11,r11,28,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0x2;
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// stw r19,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r19.u32);
	// stw r19,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r19.u32);
	// stw r27,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r27.u32);
	// bne cr6,0x82a0eee8
	if (!ctx.cr6.eq) goto loc_82A0EEE8;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a0d9a0
	ctx.lr = 0x82A0EEE0;
	sub_82A0D9A0(ctx, base);
	// stw r3,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r3.u32);
	// b 0x82a0eeec
	goto loc_82A0EEEC;
loc_82A0EEE8:
	// stw r21,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r21.u32);
loc_82A0EEEC:
	// cmpwi cr6,r22,2
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 2, ctx.xer);
	// beq cr6,0x82a0ef10
	if (ctx.cr6.eq) goto loc_82A0EF10;
	// li r11,-2
	ctx.r11.s64 = -2;
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// stw r11,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r11.u32);
	// mullw r11,r10,r26
	ctx.r11.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r26.s32);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r3,r11,2704
	ctx.r3.s64 = ctx.r11.s64 + 2704;
	// bl 0x82a16660
	ctx.lr = 0x82A0EF10;
	sub_82A16660(ctx, base);
loc_82A0EF10:
	// cmpwi cr6,r22,1
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 1, ctx.xer);
	// beq cr6,0x82a0ef20
	if (ctx.cr6.eq) goto loc_82A0EF20;
	// cmpwi cr6,r22,2
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 2, ctx.xer);
	// bne cr6,0x82a0ef48
	if (!ctx.cr6.eq) goto loc_82A0EF48;
loc_82A0EF20:
	// mulli r11,r27,352
	ctx.r11.s64 = ctx.r27.s64 * 352;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lwz r10,544(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 544);
	// cmplwi cr6,r10,8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 8, ctx.xer);
	// bge cr6,0x82a0ef48
	if (!ctx.cr6.lt) goto loc_82A0EF48;
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// li r9,-1
	ctx.r9.s64 = -1;
	// mulli r10,r10,28
	ctx.r10.s64 = ctx.r10.s64 * 28;
	// stwx r29,r10,r30
	PPC_STORE_U32(ctx.r10.u32 + ctx.r30.u32, ctx.r29.u32);
	// stw r9,544(r11)
	PPC_STORE_U32(ctx.r11.u32 + 544, ctx.r9.u32);
loc_82A0EF48:
	// lwz r11,24028(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 24028);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addis r3,r11,9
	ctx.r3.s64 = ctx.r11.s64 + 589824;
	// addi r3,r3,-2428
	ctx.r3.s64 = ctx.r3.s64 + -2428;
	// bl 0x831792b4
	ctx.lr = 0x82A0EF60;
	__imp__KeSetEvent(ctx, base);
	// b 0x82a0ed54
	goto loc_82A0ED54;
}

__attribute__((alias("__imp__sub_82A0EF64"))) PPC_WEAK_FUNC(sub_82A0EF64);
PPC_FUNC_IMPL(__imp__sub_82A0EF64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A0EF68"))) PPC_WEAK_FUNC(sub_82A0EF68);
PPC_FUNC_IMPL(__imp__sub_82A0EF68) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x82A0EF70;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82a0c9b8
	ctx.lr = 0x82A0EF80;
	sub_82A0C9B8(ctx, base);
	// lis r30,-31963
	ctx.r30.s64 = -2094727168;
	// lwz r31,24028(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24028);
	// bl 0x82a74720
	ctx.lr = 0x82A0EF8C;
	sub_82A74720(ctx, base);
	// lis r29,-31963
	ctx.r29.s64 = -2094727168;
	// lwz r11,24036(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24036);
	// subf r11,r11,r3
	ctx.r11.s64 = ctx.r3.s64 - ctx.r11.s64;
	// addic r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r7,r11,r31
	ctx.r7.u64 = ctx.r11.u64 & ctx.r31.u64;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x82a0efe0
	if (!ctx.cr6.eq) goto loc_82A0EFE0;
	// lis r31,-31999
	ctx.r31.s64 = -2097086464;
	// ori r31,r31,5
	ctx.r31.u64 = ctx.r31.u64 | 5;
loc_82A0EFB4:
	// lwz r10,24028(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24028);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,24036(r29)
	PPC_STORE_U32(ctx.r29.u32 + 24036, ctx.r11.u32);
	// addis r3,r10,2
	ctx.r3.s64 = ctx.r10.s64 + 131072;
loc_82A0EFC4:
	// li r4,0
	ctx.r4.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r3,19120
	ctx.r3.s64 = ctx.r3.s64 + 19120;
	// bl 0x831796f4
	ctx.lr = 0x82A0EFD8;
	__imp__KeReleaseMutant(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x82a0f0ac
	goto loc_82A0F0AC;
loc_82A0EFE0:
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// mr r4,r7
	ctx.r4.u64 = ctx.r7.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82a0c960
	ctx.lr = 0x82A0EFF8;
	sub_82A0C960(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82a0f00c
	if (!ctx.cr0.eq) goto loc_82A0F00C;
	// lis r31,-31999
	ctx.r31.s64 = -2097086464;
	// ori r31,r31,8
	ctx.r31.u64 = ctx.r31.u64 | 8;
	// b 0x82a0efb4
	goto loc_82A0EFB4;
loc_82A0F00C:
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r7,2348
	ctx.r10.s64 = ctx.r7.s64 + 2348;
loc_82A0F014:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r9,r28
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r28.u32, ctx.xer);
	// beq cr6,0x82a0f070
	if (ctx.cr6.eq) goto loc_82A0F070;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,88
	ctx.r10.s64 = ctx.r10.s64 + 88;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// blt cr6,0x82a0f014
	if (ctx.cr6.lt) goto loc_82A0F014;
	// li r4,0
	ctx.r4.s64 = 0;
loc_82A0F034:
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82a0f080
	if (ctx.cr6.eq) goto loc_82A0F080;
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// rlwinm. r11,r11,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82a0f080
	if (ctx.cr0.eq) goto loc_82A0F080;
	// li r5,3
	ctx.r5.s64 = 3;
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// bl 0x82a0e858
	ctx.lr = 0x82A0F054;
	sub_82A0E858(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82a0d0c0
	ctx.lr = 0x82A0F05C;
	sub_82A0D0C0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,24036(r29)
	PPC_STORE_U32(ctx.r29.u32 + 24036, ctx.r11.u32);
	// lwz r11,24028(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24028);
	// addis r3,r11,2
	ctx.r3.s64 = ctx.r11.s64 + 131072;
	// b 0x82a0efc4
	goto loc_82A0EFC4;
loc_82A0F070:
	// mulli r11,r11,88
	ctx.r11.s64 = ctx.r11.s64 * 88;
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// addi r4,r11,2336
	ctx.r4.s64 = ctx.r11.s64 + 2336;
	// b 0x82a0f034
	goto loc_82A0F034;
loc_82A0F080:
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r10,24028(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24028);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r11,24036(r29)
	PPC_STORE_U32(ctx.r29.u32 + 24036, ctx.r11.u32);
	// addis r3,r10,2
	ctx.r3.s64 = ctx.r10.s64 + 131072;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r3,19120
	ctx.r3.s64 = ctx.r3.s64 + 19120;
	// bl 0x831796f4
	ctx.lr = 0x82A0F0A4;
	__imp__KeReleaseMutant(ctx, base);
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
loc_82A0F0AC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A0F0B4"))) PPC_WEAK_FUNC(sub_82A0F0B4);
PPC_FUNC_IMPL(__imp__sub_82A0F0B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A0F0B8"))) PPC_WEAK_FUNC(sub_82A0F0B8);
PPC_FUNC_IMPL(__imp__sub_82A0F0B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa765c
	ctx.lr = 0x82A0F0C0;
	__savegprlr_21(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82a0c9b8
	ctx.lr = 0x82A0F0D0;
	sub_82A0C9B8(ctx, base);
	// lis r23,-31963
	ctx.r23.s64 = -2094727168;
	// lwz r30,24028(r23)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r23.u32 + 24028);
	// bl 0x82a74720
	ctx.lr = 0x82A0F0DC;
	sub_82A74720(ctx, base);
	// lis r21,-31963
	ctx.r21.s64 = -2094727168;
	// lwz r11,24036(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 24036);
	// subf r11,r11,r3
	ctx.r11.s64 = ctx.r3.s64 - ctx.r11.s64;
	// addic r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r29,r11,r30
	ctx.r29.u64 = ctx.r11.u64 & ctx.r30.u64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82a0f280
	if (ctx.cr6.eq) goto loc_82A0F280;
	// lwz r9,20(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r29,2524
	ctx.r11.s64 = ctx.r29.s64 + 2524;
loc_82A0F108:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// li r22,1
	ctx.r22.s64 = 1;
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82a0f1d4
	if (ctx.cr6.eq) goto loc_82A0F1D4;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,96
	ctx.r11.s64 = ctx.r11.s64 + 96;
	// cmplwi cr6,r10,2
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 2, ctx.xer);
	// blt cr6,0x82a0f108
	if (ctx.cr6.lt) goto loc_82A0F108;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82A0F12C:
	// lwz r10,24028(r23)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r23.u32 + 24028);
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82a0f284
	if (!ctx.cr0.eq) goto loc_82A0F284;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// lwz r9,16(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lis r8,0
	ctx.r8.s64 = 0;
	// lwz r7,240(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 240);
	// ori r11,r11,8112
	ctx.r11.u64 = ctx.r11.u64 | 8112;
	// ori r8,r8,54480
	ctx.r8.u64 = ctx.r8.u64 | 54480;
	// mullw r11,r9,r11
	ctx.r11.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r11.s32);
	// mullw r9,r7,r8
	ctx.r9.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r8.s32);
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// addi r30,r11,2704
	ctx.r30.s64 = ctx.r11.s64 + 2704;
	// mulli r11,r7,28
	ctx.r11.s64 = ctx.r7.s64 * 28;
	// addis r26,r10,2
	ctx.r26.s64 = ctx.r10.s64 + 131072;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// add r27,r11,r29
	ctx.r27.u64 = ctx.r11.u64 + ctx.r29.u64;
	// addi r26,r26,19168
	ctx.r26.s64 = ctx.r26.s64 + 19168;
	// bl 0x82a16418
	ctx.lr = 0x82A0F17C;
	sub_82A16418(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a16378
	ctx.lr = 0x82A0F188;
	sub_82A16378(ctx, base);
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// lwz r10,56(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82a0f1a4
	if (!ctx.cr6.lt) goto loc_82A0F1A4;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82a0f280
	if (ctx.cr6.eq) goto loc_82A0F280;
loc_82A0F1A4:
	// lis r24,-31963
	ctx.r24.s64 = -2094727168;
	// lwz r5,20(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r3,24032(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + 24032);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a0f1dc
	if (ctx.cr6.eq) goto loc_82A0F1DC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r6,r31,220
	ctx.r6.s64 = ctx.r31.s64 + 220;
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82A0F1D0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82a0f1e0
	goto loc_82A0F1E0;
loc_82A0F1D4:
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
	// b 0x82a0f12c
	goto loc_82A0F12C;
loc_82A0F1DC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82A0F1E0:
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82a0f280
	if (!ctx.cr0.eq) goto loc_82A0F280;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// bne cr6,0x82a0f224
	if (!ctx.cr6.eq) goto loc_82A0F224;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x82a0f20c
	if (!ctx.cr6.eq) goto loc_82A0F20C;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm. r11,r11,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
	// bne 0x82a0f210
	if (!ctx.cr0.eq) goto loc_82A0F210;
loc_82A0F20C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82A0F210:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82a0f224
	if (!ctx.cr0.eq) goto loc_82A0F224;
	// li r11,-5
	ctx.r11.s64 = -5;
	// stw r11,220(r31)
	PPC_STORE_U32(ctx.r31.u32 + 220, ctx.r11.u32);
	// b 0x82a0f250
	goto loc_82A0F250;
loc_82A0F224:
	// lwz r11,240(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 240);
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// stw r11,220(r31)
	PPC_STORE_U32(ctx.r31.u32 + 220, ctx.r11.u32);
	// beq cr6,0x82a0f250
	if (ctx.cr6.eq) goto loc_82A0F250;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82a16558
	ctx.lr = 0x82A0F240;
	sub_82A16558(ctx, base);
	// lis r11,2
	ctx.r11.s64 = 131072;
	// stw r22,8(r27)
	PPC_STORE_U32(ctx.r27.u32 + 8, ctx.r22.u32);
	// ori r11,r11,19101
	ctx.r11.u64 = ctx.r11.u64 | 19101;
	// stbx r22,r29,r11
	PPC_STORE_U8(ctx.r29.u32 + ctx.r11.u32, ctx.r22.u8);
loc_82A0F250:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// lwz r3,24032(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + 24032);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a0f280
	if (ctx.cr6.eq) goto loc_82A0F280;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r5,12(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r4,240(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 240);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82A0F280;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82A0F280:
	// lwz r10,24028(r23)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r23.u32 + 24028);
loc_82A0F284:
	// li r11,0
	ctx.r11.s64 = 0;
	// addis r3,r10,2
	ctx.r3.s64 = ctx.r10.s64 + 131072;
	// stw r11,24036(r21)
	PPC_STORE_U32(ctx.r21.u32 + 24036, ctx.r11.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r3,19120
	ctx.r3.s64 = ctx.r3.s64 + 19120;
	// bl 0x831796f4
	ctx.lr = 0x82A0F2A4;
	__imp__KeReleaseMutant(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82fa76ac
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A0F2AC"))) PPC_WEAK_FUNC(sub_82A0F2AC);
PPC_FUNC_IMPL(__imp__sub_82A0F2AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A0F2B0"))) PPC_WEAK_FUNC(sub_82A0F2B0);
PPC_FUNC_IMPL(__imp__sub_82A0F2B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7640
	ctx.lr = 0x82A0F2B8;
	__savegprlr_14(ctx, base);
	// stfd f31,-160(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -160, ctx.f31.u64);
	// stwu r1,-576(r1)
	ea = -576 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82a0c9b8
	ctx.lr = 0x82A0F2CC;
	sub_82A0C9B8(ctx, base);
	// lis r14,-31963
	ctx.r14.s64 = -2094727168;
	// lwz r31,24028(r14)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r14.u32 + 24028);
	// bl 0x82a74720
	ctx.lr = 0x82A0F2D8;
	sub_82A74720(ctx, base);
	// lis r29,-31963
	ctx.r29.s64 = -2094727168;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// lwz r11,24036(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24036);
	// subf r11,r11,r3
	ctx.r11.s64 = ctx.r3.s64 - ctx.r11.s64;
	// addic r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r19,r11,r31
	ctx.r19.u64 = ctx.r11.u64 & ctx.r31.u64;
	// cmplwi cr6,r19,0
	ctx.cr6.compare<uint32_t>(ctx.r19.u32, 0, ctx.xer);
	// beq cr6,0x82a0f7dc
	if (ctx.cr6.eq) goto loc_82A0F7DC;
	// li r28,0
	ctx.r28.s64 = 0;
	// lwz r9,20(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// addi r11,r19,2524
	ctx.r11.s64 = ctx.r19.s64 + 2524;
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
loc_82A0F30C:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82a0f340
	if (ctx.cr6.eq) goto loc_82A0F340;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,96
	ctx.r11.s64 = ctx.r11.s64 + 96;
	// cmplwi cr6,r10,2
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 2, ctx.xer);
	// blt cr6,0x82a0f30c
	if (ctx.cr6.lt) goto loc_82A0F30C;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_82A0F32C:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r4,0
	ctx.r4.s64 = 0;
	// beq 0x82a0f348
	if (ctx.cr0.eq) goto loc_82A0F348;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// b 0x82a0f7e4
	goto loc_82A0F7E4;
loc_82A0F340:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82a0f32c
	goto loc_82A0F32C;
loc_82A0F348:
	// lis r11,1
	ctx.r11.s64 = 65536;
	// lwz r10,16(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// lwz r31,24028(r14)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r14.u32 + 24028);
	// ori r11,r11,8112
	ctx.r11.u64 = ctx.r11.u64 | 8112;
	// lis r8,2
	ctx.r8.s64 = 131072;
	// mullw r11,r10,r11
	ctx.r11.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// std r28,0(r9)
	PPC_STORE_U64(ctx.r9.u32 + 0, ctx.r28.u64);
	// add r11,r11,r19
	ctx.r11.u64 = ctx.r11.u64 + ctx.r19.u64;
	// ori r15,r8,19168
	ctx.r15.u64 = ctx.r8.u64 | 19168;
	// li r5,296
	ctx.r5.s64 = 296;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r17,r11,2704
	ctx.r17.s64 = ctx.r11.s64 + 2704;
	// mr r26,r19
	ctx.r26.u64 = ctx.r19.u64;
	// add r24,r31,r15
	ctx.r24.u64 = ctx.r31.u64 + ctx.r15.u64;
	// bl 0x82fa7cf0
	ctx.lr = 0x82A0F388;
	sub_82FA7CF0(ctx, base);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addis r31,r31,9
	ctx.r31.s64 = ctx.r31.s64 + 589824;
	// rlwinm. r11,r11,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82a0f3a0
	if (ctx.cr0.eq) goto loc_82A0F3A0;
	// addi r31,r31,-3420
	ctx.r31.s64 = ctx.r31.s64 + -3420;
	// b 0x82a0f3a4
	goto loc_82A0F3A4;
loc_82A0F3A0:
	// addi r31,r31,-3056
	ctx.r31.s64 = ctx.r31.s64 + -3056;
loc_82A0F3A4:
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// bl 0x82a16418
	ctx.lr = 0x82A0F3AC;
	sub_82A16418(ctx, base);
	// lis r11,2
	ctx.r11.s64 = 131072;
	// lwz r10,24(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// addi r9,r3,-1
	ctx.r9.s64 = ctx.r3.s64 + -1;
	// ori r11,r11,19096
	ctx.r11.u64 = ctx.r11.u64 | 19096;
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r7,108(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// li r6,-1
	ctx.r6.s64 = -1;
	// lwz r5,12(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cntlzw r9,r9
	ctx.r9.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// lwz r4,48(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	// mullw r7,r7,r5
	ctx.r7.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r5.s32);
	// lwzx r11,r19,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + ctx.r11.u32);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// rlwinm r21,r9,27,31,31
	ctx.r21.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// subfc r11,r11,r8
	ctx.xer.ca = ctx.r8.u32 >= ctx.r11.u32;
	ctx.r11.s64 = ctx.r8.s64 - ctx.r11.s64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// subfc r10,r7,r4
	ctx.xer.ca = ctx.r4.u32 >= ctx.r7.u32;
	ctx.r10.s64 = ctx.r4.s64 - ctx.r7.s64;
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// subfze r20,r6
	temp.u64 = ~ctx.r6.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u64 < ctx.xer.ca;
	ctx.r20.u64 = temp.u64;
	// mr r18,r11
	ctx.r18.u64 = ctx.r11.u64;
	// beq 0x82a0f410
	if (ctx.cr0.eq) goto loc_82A0F410;
	// clrlwi. r11,r21,24
	ctx.r11.u64 = ctx.r21.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82a0f410
	if (ctx.cr0.eq) goto loc_82A0F410;
	// clrlwi. r11,r20,24
	ctx.r11.u64 = ctx.r20.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82a0f420
	if (!ctx.cr0.eq) goto loc_82A0F420;
loc_82A0F410:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// rlwinm. r11,r11,31,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// beq 0x82a0f424
	if (ctx.cr0.eq) goto loc_82A0F424;
loc_82A0F420:
	// li r11,1
	ctx.r11.s64 = 1;
loc_82A0F424:
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lis r22,-31963
	ctx.r22.s64 = -2094727168;
	// clrlwi r16,r11,24
	ctx.r16.u64 = ctx.r11.u32 & 0xFF;
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x82a0f4a8
	if (!ctx.cr6.eq) goto loc_82A0F4A8;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// rlwinm. r11,r11,0,2,2
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82a0f4a8
	if (ctx.cr0.eq) goto loc_82A0F4A8;
	// li r11,-2
	ctx.r11.s64 = -2;
	// clrlwi. r10,r16,24
	ctx.r10.u64 = ctx.r16.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r6,r30,220
	ctx.r6.s64 = ctx.r30.s64 + 220;
	// stw r11,220(r30)
	PPC_STORE_U32(ctx.r30.u32 + 220, ctx.r11.u32);
	// beq 0x82a0f4a0
	if (ctx.cr0.eq) goto loc_82A0F4A0;
	// lwz r11,24032(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 24032);
	// lwz r5,20(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a0f488
	if (ctx.cr6.eq) goto loc_82A0F488;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,36(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82A0F480;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,24032(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 24032);
	// b 0x82a0f48c
	goto loc_82A0F48C;
loc_82A0F488:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
loc_82A0F48C:
	// clrlwi. r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82a0f6e8
	if (!ctx.cr0.eq) goto loc_82A0F6E8;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
loc_82A0F4A0:
	// lwz r11,24032(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 24032);
	// b 0x82a0f6e8
	goto loc_82A0F6E8;
loc_82A0F4A8:
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// bl 0x82a164b8
	ctx.lr = 0x82A0F4B0;
	sub_82A164B8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82a0f4a0
	if (ctx.cr0.eq) goto loc_82A0F4A0;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,0
	ctx.r10.s64 = 0;
	// addi r27,r1,376
	ctx.r27.s64 = ctx.r1.s64 + 376;
	// addi r31,r1,240
	ctx.r31.s64 = ctx.r1.s64 + 240;
	// li r25,4
	ctx.r25.s64 = 4;
	// lfs f31,5180(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5180);
	ctx.f31.f64 = double(temp.f32);
	// ori r23,r10,54480
	ctx.r23.u64 = ctx.r10.u64 | 54480;
loc_82A0F4D4:
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82a0f4e8
	if (ctx.cr6.eq) goto loc_82A0F4E8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82a0f668
	if (!ctx.cr6.eq) goto loc_82A0F668;
loc_82A0F4E8:
	// lwz r11,8(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82a0f668
	if (ctx.cr6.eq) goto loc_82A0F668;
	// lwz r3,24032(r22)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r22.u32 + 24032);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a0f518
	if (ctx.cr6.eq) goto loc_82A0F518;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r5,12(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82A0F518;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82A0F518:
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// add r29,r28,r11
	ctx.r29.u64 = ctx.r28.u64 + ctx.r11.u64;
	// addi r5,r31,-128
	ctx.r5.s64 = ctx.r31.s64 + -128;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// mr r4,r17
	ctx.r4.u64 = ctx.r17.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82a16078
	ctx.lr = 0x82A0F538;
	sub_82A16078(ctx, base);
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82a0f558
	if (!ctx.cr6.eq) goto loc_82A0F558;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stb r10,0(r29)
	PPC_STORE_U8(ctx.r29.u32 + 0, ctx.r10.u8);
	// stw r11,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
loc_82A0F558:
	// lwz r29,80(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_82A0F55C:
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r31,r31,16
	ctx.r31.s64 = ctx.r31.s64 + 16;
	// addi r27,r27,4
	ctx.r27.s64 = ctx.r27.s64 + 4;
	// addi r26,r26,28
	ctx.r26.s64 = ctx.r26.s64 + 28;
	// add r24,r24,r23
	ctx.r24.u64 = ctx.r24.u64 + ctx.r23.u64;
	// cmplwi cr6,r28,8
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 8, ctx.xer);
	// blt cr6,0x82a0f4d4
	if (ctx.cr6.lt) goto loc_82A0F4D4;
	// clrlwi r11,r20,24
	ctx.r11.u64 = ctx.r20.u32 & 0xFF;
	// lwz r10,20(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// clrlwi r9,r21,24
	ctx.r9.u64 = ctx.r21.u32 & 0xFF;
	// subfic r11,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r11.s64;
	// li r8,2
	ctx.r8.s64 = 2;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addic r7,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r7.s64 = ctx.r9.s64 + -1;
	// stw r10,368(r1)
	PPC_STORE_U32(ctx.r1.u32 + 368, ctx.r10.u32);
	// and r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 & ctx.r8.u64;
	// subfe r10,r7,r9
	temp.u8 = (~ctx.r7.u32 + ctx.r9.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r7.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// subfic r9,r18,0
	ctx.xer.ca = ctx.r18.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r18.s64;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// subfe r10,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r9.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// lis r9,-32768
	ctx.r9.s64 = -2147483648;
	// and r10,r10,r25
	ctx.r10.u64 = ctx.r10.u64 & ctx.r25.u64;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// lis r5,17
	ctx.r5.s64 = 1114112;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// stw r11,372(r1)
	PPC_STORE_U32(ctx.r1.u32 + 372, ctx.r11.u32);
	// ori r5,r5,4424
	ctx.r5.u64 = ctx.r5.u64 | 4424;
	// li r4,296
	ctx.r4.s64 = 296;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82a84340
	ctx.lr = 0x82A0F5D8;
	sub_82A84340(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82a0f4a0
	if (ctx.cr0.lt) goto loc_82A0F4A0;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// li r29,-2
	ctx.r29.s64 = -2;
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// bge cr6,0x82a0f614
	if (!ctx.cr6.lt) goto loc_82A0F614;
	// mulli r10,r11,28
	ctx.r10.s64 = ctx.r11.s64 * 28;
	// lwzx r10,r10,r19
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r19.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82a0f614
	if (!ctx.cr6.eq) goto loc_82A0F614;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// ori r10,r10,7976
	ctx.r10.u64 = ctx.r10.u64 | 7976;
	// stwx r11,r17,r10
	PPC_STORE_U32(ctx.r17.u32 + ctx.r10.u32, ctx.r11.u32);
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_82A0F614:
	// addi r31,r30,220
	ctx.r31.s64 = ctx.r30.s64 + 220;
	// stw r11,220(r30)
	PPC_STORE_U32(ctx.r30.u32 + 220, ctx.r11.u32);
	// cmpwi cr6,r11,-2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -2, ctx.xer);
	// beq cr6,0x82a0f734
	if (ctx.cr6.eq) goto loc_82A0F734;
	// cmpwi cr6,r11,-3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -3, ctx.xer);
	// beq cr6,0x82a0f734
	if (ctx.cr6.eq) goto loc_82A0F734;
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// bge cr6,0x82a0f7b4
	if (!ctx.cr6.lt) goto loc_82A0F7B4;
	// lwz r11,24032(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 24032);
	// lwz r5,20(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a0f68c
	if (ctx.cr6.eq) goto loc_82A0F68C;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// lwz r11,36(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82A0F660;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,24032(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 24032);
	// b 0x82a0f690
	goto loc_82A0F690;
loc_82A0F668:
	// mr r10,r25
	ctx.r10.u64 = ctx.r25.u64;
	// mtctr r25
	ctx.ctr.u64 = ctx.r25.u64;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// li r9,-128
	ctx.r9.s64 = -128;
loc_82A0F678:
	// stwx r25,r11,r9
	PPC_STORE_U32(ctx.r11.u32 + ctx.r9.u32, ctx.r25.u32);
	// stfs f31,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x82a0f678
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82A0F678;
	// b 0x82a0f55c
	goto loc_82A0F55C;
loc_82A0F68C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82A0F690:
	// clrlwi. r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82a0f6e4
	if (!ctx.cr0.eq) goto loc_82A0F6E4;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// lbzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82a0f6d4
	if (ctx.cr0.eq) goto loc_82A0F6D4;
	// lwz r11,24028(r14)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r14.u32 + 24028);
	// mullw r10,r10,r23
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r23.s32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r4,r17
	ctx.r4.u64 = ctx.r17.u64;
	// add r3,r11,r15
	ctx.r3.u64 = ctx.r11.u64 + ctx.r15.u64;
	// bl 0x82a165f0
	ctx.lr = 0x82A0F6C4;
	sub_82A165F0(ctx, base);
	// lis r11,2
	ctx.r11.s64 = 131072;
	// li r10,1
	ctx.r10.s64 = 1;
	// ori r11,r11,19101
	ctx.r11.u64 = ctx.r11.u64 | 19101;
	// stbx r10,r19,r11
	PPC_STORE_U8(ctx.r19.u32 + ctx.r11.u32, ctx.r10.u8);
loc_82A0F6D4:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
	// lwz r11,24032(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 24032);
loc_82A0F6E4:
	// lwz r29,80(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_82A0F6E8:
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// not r10,r10
	ctx.r10.u64 = ~ctx.r10.u64;
	// clrlwi. r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82a0f7dc
	if (!ctx.cr0.eq) goto loc_82A0F7DC;
	// lwz r10,52(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	// lwz r9,56(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82a0f7dc
	if (ctx.cr6.lt) goto loc_82A0F7DC;
	// lwz r5,20(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// beq cr6,0x82a0f7bc
	if (ctx.cr6.eq) goto loc_82A0F7BC;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// addi r6,r30,220
	ctx.r6.s64 = ctx.r30.s64 + 220;
	// lwz r11,36(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82A0F730;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82a0f7c0
	goto loc_82A0F7C0;
loc_82A0F734:
	// clrlwi. r11,r16,24
	ctx.r11.u64 = ctx.r16.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82a0f7b4
	if (ctx.cr0.eq) goto loc_82A0F7B4;
	// lwz r11,24032(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 24032);
	// lwz r5,20(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a0f770
	if (ctx.cr6.eq) goto loc_82A0F770;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// lwz r11,36(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82A0F768;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,24032(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 24032);
	// b 0x82a0f774
	goto loc_82A0F774;
loc_82A0F770:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82A0F774:
	// clrlwi. r10,r3,24
	ctx.r10.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82a0f6e4
	if (!ctx.cr0.eq) goto loc_82A0F6E4;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,-3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -3, ctx.xer);
	// bne cr6,0x82a0f78c
	if (!ctx.cr6.eq) goto loc_82A0F78C;
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
loc_82A0F78C:
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r4,0
	ctx.r4.s64 = 0;
	// rlwinm r10,r10,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r10,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r10.u32);
	// stw r11,24036(r9)
	PPC_STORE_U32(ctx.r9.u32 + 24036, ctx.r11.u32);
	// lwz r11,24028(r14)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r14.u32 + 24028);
	// addis r3,r11,2
	ctx.r3.s64 = ctx.r11.s64 + 131072;
	// b 0x82a0f7f0
	goto loc_82A0F7F0;
loc_82A0F7B4:
	// lwz r29,80(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// b 0x82a0f4a0
	goto loc_82A0F4A0;
loc_82A0F7BC:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82A0F7C0:
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82a0f7dc
	if (!ctx.cr0.eq) goto loc_82A0F7DC;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// li r10,-5
	ctx.r10.s64 = -5;
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r10,220(r30)
	PPC_STORE_U32(ctx.r30.u32 + 220, ctx.r10.u32);
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
loc_82A0F7DC:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
loc_82A0F7E4:
	// lwz r10,24028(r14)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r14.u32 + 24028);
	// stw r11,24036(r29)
	PPC_STORE_U32(ctx.r29.u32 + 24036, ctx.r11.u32);
	// addis r3,r10,2
	ctx.r3.s64 = ctx.r10.s64 + 131072;
loc_82A0F7F0:
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r3,19120
	ctx.r3.s64 = ctx.r3.s64 + 19120;
	// bl 0x831796f4
	ctx.lr = 0x82A0F800;
	__imp__KeReleaseMutant(ctx, base);
	// addi r1,r1,576
	ctx.r1.s64 = ctx.r1.s64 + 576;
	// lfd f31,-160(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -160);
	// b 0x82fa7690
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A0F80C"))) PPC_WEAK_FUNC(sub_82A0F80C);
PPC_FUNC_IMPL(__imp__sub_82A0F80C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A0F810"))) PPC_WEAK_FUNC(sub_82A0F810);
PPC_FUNC_IMPL(__imp__sub_82A0F810) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// rlwinm. r11,r11,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// lwz r11,24028(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24028);
	// addis r11,r11,9
	ctx.r11.s64 = ctx.r11.s64 + 589824;
	// beq 0x82a0f830
	if (ctx.cr0.eq) goto loc_82A0F830;
	// addi r11,r11,-3420
	ctx.r11.s64 = ctx.r11.s64 + -3420;
	// b 0x82a0f834
	goto loc_82A0F834;
loc_82A0F830:
	// addi r11,r11,-3056
	ctx.r11.s64 = ctx.r11.s64 + -3056;
loc_82A0F834:
	// lwz r10,48(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// lwz r11,360(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 360);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82a0f854
	if (!ctx.cr6.lt) goto loc_82A0F854;
	// lwz r11,52(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// lwz r10,56(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bltlr cr6
	if (ctx.cr6.lt) return;
loc_82A0F854:
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A0F864"))) PPC_WEAK_FUNC(sub_82A0F864);
PPC_FUNC_IMPL(__imp__sub_82A0F864) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A0F868"))) PPC_WEAK_FUNC(sub_82A0F868);
PPC_FUNC_IMPL(__imp__sub_82A0F868) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7674
	ctx.lr = 0x82A0F870;
	__savegprlr_27(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82a0c9b8
	ctx.lr = 0x82A0F880;
	sub_82A0C9B8(ctx, base);
	// lis r29,-31963
	ctx.r29.s64 = -2094727168;
	// lwz r30,24028(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24028);
	// bl 0x82a74720
	ctx.lr = 0x82A0F88C;
	sub_82A74720(ctx, base);
	// lis r28,-31963
	ctx.r28.s64 = -2094727168;
	// lwz r11,24036(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 24036);
	// subf r11,r11,r3
	ctx.r11.s64 = ctx.r3.s64 - ctx.r11.s64;
	// addic r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r30,r11,r30
	ctx.r30.u64 = ctx.r11.u64 & ctx.r30.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x82a0f8b4
	if (!ctx.cr6.eq) goto loc_82A0F8B4;
loc_82A0F8AC:
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82a0fabc
	goto loc_82A0FABC;
loc_82A0F8B4:
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// li r27,0
	ctx.r27.s64 = 0;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82a0f8cc
	if (ctx.cr6.eq) goto loc_82A0F8CC;
	// stw r27,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r27.u32);
	// b 0x82a0f90c
	goto loc_82A0F90C;
loc_82A0F8CC:
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82a0da80
	ctx.lr = 0x82A0F8D8;
	sub_82A0DA80(ctx, base);
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// lwz r9,80(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// divwu r8,r11,r9
	ctx.r8.u32 = ctx.r11.u32 / ctx.r9.u32;
	// twllei r9,0
	if (ctx.r9.u32 <= 0) __builtin_debugtrap();
	// mullw r9,r8,r9
	ctx.r9.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r9.s32);
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r3
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// stw r10,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r10.u32);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x82a0f8ac
	if (ctx.cr6.eq) goto loc_82A0F8AC;
	// stw r11,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r11.u32);
loc_82A0F90C:
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r11,72(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// mulli r10,r10,352
	ctx.r10.s64 = ctx.r10.s64 * 352;
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + ctx.r30.u64;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// addi r10,r10,224
	ctx.r10.s64 = ctx.r10.s64 + 224;
	// blt cr6,0x82a0f99c
	if (ctx.cr6.lt) goto loc_82A0F99C;
	// beq cr6,0x82a0f960
	if (ctx.cr6.eq) goto loc_82A0F960;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bge cr6,0x82a0fac8
	if (!ctx.cr6.lt) goto loc_82A0FAC8;
	// stw r27,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r27.u32);
	// stw r27,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r27.u32);
	// stw r27,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r27.u32);
	// lwz r11,24028(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24028);
	// addis r3,r11,2
	ctx.r3.s64 = ctx.r11.s64 + 131072;
	// stw r27,24036(r28)
	PPC_STORE_U32(ctx.r28.u32 + 24036, ctx.r27.u32);
	// b 0x82a0fad4
	goto loc_82A0FAD4;
loc_82A0F960:
	// li r11,16
	ctx.r11.s64 = 16;
	// lvx128 v63,r0,r10
	simd::store_shuffled(ctx.v63, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// li r9,32
	ctx.r9.s64 = 32;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// addi r8,r8,23560
	ctx.r8.s64 = ctx.r8.s64 + 23560;
	// lvx128 v62,r10,r11
	simd::store_shuffled(ctx.v62, simd::load_and_shuffle(base + ((ctx.r10.u32 + ctx.r11.u32) & ~0xF), VectorMaskL));
	// lvx128 v61,r10,r9
	simd::store_shuffled(ctx.v61, simd::load_and_shuffle(base + ((ctx.r10.u32 + ctx.r9.u32) & ~0xF), VectorMaskL));
	// vaddfp128 v62,v61,v62
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v62.f32, _mm_add_ps(_mm_load_ps(ctx.v61.f32), _mm_load_ps(ctx.v62.f32)));
	// lvlx128 v61,r0,r8
	temp.u32 = ctx.r8.u32;
	_mm_store_si128((__m128i*)ctx.v61.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw128 v61,v61,0
	_mm_store_si128((__m128i*)ctx.v61.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v61.u32), 0xFF));
	// vaddfp128 v63,v62,v63
	_mm_store_ps(ctx.v63.f32, _mm_add_ps(_mm_load_ps(ctx.v62.f32), _mm_load_ps(ctx.v63.f32)));
	// vmulfp128 v1,v63,v61
	_mm_store_ps(ctx.v1.f32, _mm_mul_ps(_mm_load_ps(ctx.v63.f32), _mm_load_ps(ctx.v61.f32)));
	// stvx128 v1,r0,r7
	_mm_store_si128((__m128i*)(base + ((ctx.r7.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v1.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// b 0x82a0f9ac
	goto loc_82A0F9AC;
loc_82A0F99C:
	// li r11,48
	ctx.r11.s64 = 48;
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// lvx128 v1,r10,r11
	simd::store_shuffled(ctx.v1, simd::load_and_shuffle(base + ((ctx.r10.u32 + ctx.r11.u32) & ~0xF), VectorMaskL));
	// stvx128 v1,r0,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v1.u8), _mm_load_si128((__m128i*)VectorMaskL)));
loc_82A0F9AC:
	// lis r10,8
	ctx.r10.s64 = 524288;
	// lwz r11,24028(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24028);
	// lfs f0,120(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f0.f64 = double(temp.f32);
	// ori r10,r10,61792
	ctx.r10.u64 = ctx.r10.u64 | 61792;
	// lfsx f13,r11,r10
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x82a0f9d8
	if (!ctx.cr6.lt) goto loc_82A0F9D8;
	// stw r27,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r27.u32);
	// stw r27,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r27.u32);
	// stw r27,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r27.u32);
	// b 0x82a0fab8
	goto loc_82A0FAB8;
loc_82A0F9D8:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8227b978
	ctx.lr = 0x82A0F9E8;
	sub_8227B978(ctx, base);
	// lhz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,6400
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 6400, ctx.xer);
	// blt cr6,0x82a0fa04
	if (ctx.cr6.lt) goto loc_82A0FA04;
	// cmpwi cr6,r11,32007
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 32007, ctx.xer);
	// bge cr6,0x82a0fa0c
	if (!ctx.cr6.lt) goto loc_82A0FA0C;
	// cmplwi cr6,r11,6400
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 6400, ctx.xer);
	// bge cr6,0x82a0fa10
	if (!ctx.cr6.lt) goto loc_82A0FA10;
loc_82A0FA04:
	// li r11,6400
	ctx.r11.s64 = 6400;
	// b 0x82a0fa10
	goto loc_82A0FA10;
loc_82A0FA0C:
	// li r11,32007
	ctx.r11.s64 = 32007;
loc_82A0FA10:
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// lwz r6,84(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r8,r1,92
	ctx.r8.s64 = ctx.r1.s64 + 92;
	// lwz r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// clrlwi r7,r11,16
	ctx.r7.u64 = ctx.r11.u32 & 0xFFFF;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x82a09988
	ctx.lr = 0x82A0FA30;
	sub_82A09988(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// lwz r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// stw r11,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r11.u32);
	// addi r10,r10,-240
	ctx.r10.s64 = ctx.r10.s64 + -240;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r10,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r10.u32);
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// addi r11,r11,-320
	ctx.r11.s64 = ctx.r11.s64 + -320;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// cmpwi cr6,r11,-320
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -320, ctx.xer);
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// bgt cr6,0x82a0fa68
	if (ctx.cr6.gt) goto loc_82A0FA68;
	// li r9,-320
	ctx.r9.s64 = -320;
loc_82A0FA68:
	// cmpwi cr6,r9,320
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 320, ctx.xer);
	// bge cr6,0x82a0fa80
	if (!ctx.cr6.lt) goto loc_82A0FA80;
	// cmpwi cr6,r11,-320
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -320, ctx.xer);
	// bgt cr6,0x82a0fa84
	if (ctx.cr6.gt) goto loc_82A0FA84;
	// li r11,-320
	ctx.r11.s64 = -320;
	// b 0x82a0fa84
	goto loc_82A0FA84;
loc_82A0FA80:
	// li r11,320
	ctx.r11.s64 = 320;
loc_82A0FA84:
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// cmpwi cr6,r10,-240
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -240, ctx.xer);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// bgt cr6,0x82a0fa98
	if (ctx.cr6.gt) goto loc_82A0FA98;
	// li r11,-240
	ctx.r11.s64 = -240;
loc_82A0FA98:
	// cmpwi cr6,r11,240
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 240, ctx.xer);
	// bge cr6,0x82a0fab0
	if (!ctx.cr6.lt) goto loc_82A0FAB0;
	// cmpwi cr6,r10,-240
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -240, ctx.xer);
	// bgt cr6,0x82a0fab4
	if (ctx.cr6.gt) goto loc_82A0FAB4;
	// li r10,-240
	ctx.r10.s64 = -240;
	// b 0x82a0fab4
	goto loc_82A0FAB4;
loc_82A0FAB0:
	// li r10,240
	ctx.r10.s64 = 240;
loc_82A0FAB4:
	// stw r10,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r10.u32);
loc_82A0FAB8:
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
loc_82A0FABC:
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
loc_82A0FAC8:
	// lwz r10,24028(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24028);
	// stw r11,24036(r28)
	PPC_STORE_U32(ctx.r28.u32 + 24036, ctx.r11.u32);
	// addis r3,r10,2
	ctx.r3.s64 = ctx.r10.s64 + 131072;
loc_82A0FAD4:
	// addi r3,r3,19120
	ctx.r3.s64 = ctx.r3.s64 + 19120;
	// bl 0x831796f4
	ctx.lr = 0x82A0FADC;
	__imp__KeReleaseMutant(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82fa76c4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A0FAE4"))) PPC_WEAK_FUNC(sub_82A0FAE4);
PPC_FUNC_IMPL(__imp__sub_82A0FAE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A0FAE8"))) PPC_WEAK_FUNC(sub_82A0FAE8);
PPC_FUNC_IMPL(__imp__sub_82A0FAE8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7650
	ctx.lr = 0x82A0FAF0;
	__savegprlr_18(ctx, base);
	// stwu r1,-400(r1)
	ea = -400 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r20,-31963
	ctx.r20.s64 = -2094727168;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// lwz r11,24028(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 24028);
	// mr r19,r7
	ctx.r19.u64 = ctx.r7.u64;
	// addis r11,r11,9
	ctx.r11.s64 = ctx.r11.s64 + 589824;
	// addi r11,r11,-2676
	ctx.r11.s64 = ctx.r11.s64 + -2676;
	// stw r11,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r11.u32);
	// bl 0x82a78340
	ctx.lr = 0x82A0FB20;
	sub_82A78340(ctx, base);
	// addi r11,r1,132
	ctx.r11.s64 = ctx.r1.s64 + 132;
	// stw r3,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r3.u32);
	// addi r10,r1,180
	ctx.r10.s64 = ctx.r1.s64 + 180;
	// lwz r3,20(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// addi r9,r1,164
	ctx.r9.s64 = ctx.r1.s64 + 164;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r5,r1,208
	ctx.r5.s64 = ctx.r1.s64 + 208;
	// stw r31,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r31.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r31,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r31.u32);
	// mr r24,r31
	ctx.r24.u64 = ctx.r31.u64;
	// stw r31,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r31.u32);
	// mr r18,r31
	ctx.r18.u64 = ctx.r31.u64;
	// stw r31,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r31.u32);
	// stw r31,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r31.u32);
	// stw r31,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r31.u32);
	// stw r31,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r31.u32);
	// stw r31,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r31.u32);
	// stw r31,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r31.u32);
	// stw r31,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r31.u32);
	// stw r31,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r31.u32);
	// stw r31,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r31.u32);
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// bl 0x82af2cc8
	ctx.lr = 0x82A0FB80;
	sub_82AF2CC8(ctx, base);
	// addi r22,r28,32
	ctx.r22.s64 = ctx.r28.s64 + 32;
	// addi r7,r1,192
	ctx.r7.s64 = ctx.r1.s64 + 192;
	// mr r8,r22
	ctx.r8.u64 = ctx.r22.u64;
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// addi r5,r30,28
	ctx.r5.s64 = ctx.r30.s64 + 28;
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82a16d50
	ctx.lr = 0x82A0FBA0;
	sub_82A16D50(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x82a0fbbc
	if (!ctx.cr0.lt) goto loc_82A0FBBC;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82a0d160
	ctx.lr = 0x82A0FBB0;
	sub_82A0D160(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_82A0FBB4:
	// addi r1,r1,400
	ctx.r1.s64 = ctx.r1.s64 + 400;
	// b 0x82fa76a0
	__restgprlr_18(ctx, base);
	return;
loc_82A0FBBC:
	// lwz r11,136(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r10,128(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// lwz r9,140(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// lwz r8,132(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// subf r27,r10,r11
	ctx.r27.s64 = ctx.r11.s64 - ctx.r10.s64;
	// lwz r11,24028(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 24028);
	// subf r26,r8,r9
	ctx.r26.s64 = ctx.r9.s64 - ctx.r8.s64;
	// addis r30,r11,9
	ctx.r30.s64 = ctx.r11.s64 + 589824;
	// mullw r4,r26,r27
	ctx.r4.s64 = int64_t(ctx.r26.s32) * int64_t(ctx.r27.s32);
	// addi r30,r30,-3744
	ctx.r30.s64 = ctx.r30.s64 + -3744;
	// bl 0x82a0d110
	ctx.lr = 0x82A0FBEC;
	sub_82A0D110(ctx, base);
	// lwz r25,96(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// bne cr6,0x82a0fc08
	if (!ctx.cr6.eq) goto loc_82A0FC08;
loc_82A0FBF8:
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82a0d160
	ctx.lr = 0x82A0FC00;
	sub_82A0D160(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x82a0fbb4
	goto loc_82A0FBB4;
loc_82A0FC08:
	// mr r9,r25
	ctx.r9.u64 = ctx.r25.u64;
	// lwz r7,228(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	// addi r8,r1,128
	ctx.r8.s64 = ctx.r1.s64 + 128;
	// lwz r6,216(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 216);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r5,212(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82a08ed8
	ctx.lr = 0x82A0FC28;
	sub_82A08ED8(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// blt 0x82a0fde4
	if (ctx.cr0.lt) goto loc_82A0FDE4;
	// mr r9,r22
	ctx.r9.u64 = ctx.r22.u64;
	// addi r8,r1,112
	ctx.r8.s64 = ctx.r1.s64 + 112;
	// addi r7,r1,176
	ctx.r7.s64 = ctx.r1.s64 + 176;
	// addi r6,r1,192
	ctx.r6.s64 = ctx.r1.s64 + 192;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82a1d230
	ctx.lr = 0x82A0FC50;
	sub_82A1D230(ctx, base);
	// lwz r11,68(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 68);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82a0fde4
	if (!ctx.cr6.eq) goto loc_82A0FDE4;
	// li r21,4
	ctx.r21.s64 = 4;
	// clrlwi. r23,r3,24
	ctx.r23.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// stw r21,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r21.u32);
	// bne 0x82a0fd00
	if (!ctx.cr0.eq) goto loc_82A0FD00;
	// clrldi r10,r26,32
	ctx.r10.u64 = ctx.r26.u64 & 0xFFFFFFFF;
	// lfs f13,28(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	ctx.f13.f64 = double(temp.f32);
	// clrldi r9,r27,32
	ctx.r9.u64 = ctx.r27.u64 & 0xFFFFFFFF;
	// lfs f12,32(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	ctx.f12.f64 = double(temp.f32);
	// std r10,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r10.u64);
	// lfd f11,104(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// std r9,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r9.u64);
	// lfd f10,104(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// lis r11,-32233
	ctx.r11.s64 = -2112421888;
	// fcfid f11,f11
	ctx.f11.f64 = double(ctx.f11.s64);
	// lfs f0,24436(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24436);
	ctx.f0.f64 = double(temp.f32);
	// fcfid f10,f10
	ctx.f10.f64 = double(ctx.f10.s64);
	// fsubs f13,f0,f13
	ctx.f13.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fsubs f12,f0,f12
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f12.f64));
	// addi r8,r1,160
	ctx.r8.s64 = ctx.r1.s64 + 160;
	// lfs f0,11556(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 11556);
	ctx.f0.f64 = double(temp.f32);
	// frsp f10,f10
	ctx.f10.f64 = double(float(ctx.f10.f64));
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fmuls f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// frsp f12,f11
	ctx.f12.f64 = double(float(ctx.f11.f64));
	// fmuls f13,f13,f10
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f10.f64));
	// fmuls f0,f0,f12
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f12.f64));
	// fctiwz f13,f13
	ctx.f13.s64 = (ctx.f13.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f13.f64));
	// stfd f13,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.f13.u64);
	// lwz r11,108(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// subf r7,r11,r27
	ctx.r7.s64 = ctx.r27.s64 - ctx.r11.s64;
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f0.f64));
	// stfd f0,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.f0.u64);
	// lwz r10,108(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// subf r9,r10,r26
	ctx.r9.s64 = ctx.r26.s64 - ctx.r10.s64;
	// stw r11,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r11.u32);
	// stw r10,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r10.u32);
	// stw r7,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r7.u32);
	// stw r9,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r9.u32);
	// b 0x82a0fd04
	goto loc_82A0FD04;
loc_82A0FD00:
	// addi r8,r1,176
	ctx.r8.s64 = ctx.r1.s64 + 176;
loc_82A0FD04:
	// addi r10,r28,60
	ctx.r10.s64 = ctx.r28.s64 + 60;
	// lfs f1,8(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f1.f64 = double(temp.f32);
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// lwz r5,112(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// stb r24,87(r1)
	PPC_STORE_U8(ctx.r1.u32 + 87, ctx.r24.u8);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82a08fa8
	ctx.lr = 0x82A0FD28;
	sub_82A08FA8(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// blt 0x82a0fde4
	if (ctx.cr0.lt) goto loc_82A0FDE4;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// lfs f2,16(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	ctx.f2.f64 = double(temp.f32);
	// li r3,1
	ctx.r3.s64 = 1;
	// lfs f1,12(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82a08f48
	ctx.lr = 0x82A0FD44;
	sub_82A08F48(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// blt 0x82a0fde4
	if (ctx.cr0.lt) goto loc_82A0FDE4;
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82a0fda0
	if (ctx.cr6.eq) goto loc_82A0FDA0;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82a09100
	ctx.lr = 0x82A0FD60;
	sub_82A09100(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82a0fd74
	if (ctx.cr0.eq) goto loc_82A0FD74;
	// lwz r11,40(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 40);
	// ori r11,r11,4096
	ctx.r11.u64 = ctx.r11.u64 | 4096;
	// stw r11,40(r28)
	PPC_STORE_U32(ctx.r28.u32 + 40, ctx.r11.u32);
loc_82A0FD74:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82a090d8
	ctx.lr = 0x82A0FD7C;
	sub_82A090D8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82a0fd90
	if (ctx.cr0.eq) goto loc_82A0FD90;
	// lwz r11,40(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 40);
	// ori r11,r11,2048
	ctx.r11.u64 = ctx.r11.u64 | 2048;
	// stw r11,40(r28)
	PPC_STORE_U32(ctx.r28.u32 + 40, ctx.r11.u32);
loc_82A0FD90:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82a08f78
	ctx.lr = 0x82A0FD98;
	sub_82A08F78(ctx, base);
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
loc_82A0FDA0:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// blt cr6,0x82a0fde4
	if (ctx.cr6.lt) goto loc_82A0FDE4;
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// beq cr6,0x82a0fde0
	if (ctx.cr6.eq) goto loc_82A0FDE0;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x82a0fdd4
	if (ctx.cr6.lt) goto loc_82A0FDD4;
	// beq cr6,0x82a0fdcc
	if (ctx.cr6.eq) goto loc_82A0FDCC;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bne cr6,0x82a0fde4
	if (!ctx.cr6.eq) goto loc_82A0FDE4;
	// stw r21,68(r28)
	PPC_STORE_U32(ctx.r28.u32 + 68, ctx.r21.u32);
	// b 0x82a0fde4
	goto loc_82A0FDE4;
loc_82A0FDCC:
	// li r11,3
	ctx.r11.s64 = 3;
	// b 0x82a0fdd8
	goto loc_82A0FDD8;
loc_82A0FDD4:
	// li r11,2
	ctx.r11.s64 = 2;
loc_82A0FDD8:
	// stw r11,68(r28)
	PPC_STORE_U32(ctx.r28.u32 + 68, ctx.r11.u32);
	// b 0x82a0fde4
	goto loc_82A0FDE4;
loc_82A0FDE0:
	// stw r31,68(r28)
	PPC_STORE_U32(ctx.r28.u32 + 68, ctx.r31.u32);
loc_82A0FDE4:
	// lwz r3,112(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a0fdf4
	if (ctx.cr6.eq) goto loc_82A0FDF4;
	// bl 0x82a1d2e0
	ctx.lr = 0x82A0FDF4;
	sub_82A1D2E0(ctx, base);
loc_82A0FDF4:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// blt cr6,0x82a0fe34
	if (ctx.cr6.lt) goto loc_82A0FE34;
	// clrlwi. r11,r24,24
	ctx.r11.u64 = ctx.r24.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82a0fe34
	if (ctx.cr0.eq) goto loc_82A0FE34;
	// lwz r11,68(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 68);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x82a0fe34
	if (!ctx.cr6.eq) goto loc_82A0FE34;
	// mr r7,r22
	ctx.r7.u64 = ctx.r22.u64;
	// mr r6,r19
	ctx.r6.u64 = ctx.r19.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82a1e598
	ctx.lr = 0x82A0FE28;
	sub_82A1E598(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82a0fe34
	if (ctx.cr0.lt) goto loc_82A0FE34;
	// li r18,1
	ctx.r18.s64 = 1;
loc_82A0FE34:
	// clrlwi r5,r18,24
	ctx.r5.u64 = ctx.r18.u32 & 0xFF;
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// subfic r10,r5,0
	ctx.xer.ca = ctx.r5.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r5.s64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// lwz r11,31372(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 31372);
	// and r30,r10,r19
	ctx.r30.u64 = ctx.r10.u64 & ctx.r19.u64;
	// beq cr6,0x82a0fe5c
	if (ctx.cr6.eq) goto loc_82A0FE5C;
	// lwz r10,56(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// b 0x82a0fe60
	goto loc_82A0FE60;
loc_82A0FE5C:
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
loc_82A0FE60:
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// addi r9,r11,60
	ctx.r9.s64 = ctx.r11.s64 + 60;
	// addi r8,r11,16
	ctx.r8.s64 = ctx.r11.s64 + 16;
	// ld r6,176(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 176);
	// ld r7,184(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 184);
	// ld r3,128(r1)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// ld r4,136(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 136);
	// bl 0x82a0d258
	ctx.lr = 0x82A0FE80;
	sub_82A0D258(ctx, base);
	// clrlwi r11,r24,24
	ctx.r11.u64 = ctx.r24.u32 & 0xFF;
	// lis r10,8
	ctx.r10.s64 = 524288;
	// stw r11,64(r28)
	PPC_STORE_U32(ctx.r28.u32 + 64, ctx.r11.u32);
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// ori r10,r10,63156
	ctx.r10.u64 = ctx.r10.u64 | 63156;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,24028(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 24028);
	// lwzx r3,r11,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// bl 0x82a81d88
	ctx.lr = 0x82A0FEA4;
	sub_82A81D88(ctx, base);
	// mr r31,r18
	ctx.r31.u64 = ctx.r18.u64;
	// b 0x82a0fbf8
	goto loc_82A0FBF8;
}

__attribute__((alias("__imp__sub_82A0FEAC"))) PPC_WEAK_FUNC(sub_82A0FEAC);
PPC_FUNC_IMPL(__imp__sub_82A0FEAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A0FEB0"))) PPC_WEAK_FUNC(sub_82A0FEB0);
PPC_FUNC_IMPL(__imp__sub_82A0FEB0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x82A0FEB8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,8
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 8, ctx.xer);
	// blt cr6,0x82a0fed4
	if (ctx.cr6.lt) goto loc_82A0FED4;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// b 0x82a10040
	goto loc_82A10040;
loc_82A0FED4:
	// lis r11,-31964
	ctx.r11.s64 = -2094792704;
	// addi r11,r11,29312
	ctx.r11.s64 = ctx.r11.s64 + 29312;
	// lwz r11,10632(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10632);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82a10038
	if (ctx.cr6.eq) goto loc_82A10038;
	// lis r30,-31963
	ctx.r30.s64 = -2094727168;
	// lwz r11,24028(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24028);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a10038
	if (ctx.cr6.eq) goto loc_82A10038;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82a0c9b8
	ctx.lr = 0x82A0FF00;
	sub_82A0C9B8(ctx, base);
	// lwz r31,24028(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24028);
	// bl 0x82a74720
	ctx.lr = 0x82A0FF08;
	sub_82A74720(ctx, base);
	// lis r29,-31963
	ctx.r29.s64 = -2094727168;
	// lwz r11,24036(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24036);
	// subf r11,r11,r3
	ctx.r11.s64 = ctx.r3.s64 - ctx.r11.s64;
	// addic r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r9,r11,r31
	ctx.r9.u64 = ctx.r11.u64 & ctx.r31.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82a0ff5c
	if (!ctx.cr6.eq) goto loc_82A0FF5C;
	// lis r31,-31999
	ctx.r31.s64 = -2097086464;
	// ori r31,r31,5
	ctx.r31.u64 = ctx.r31.u64 | 5;
loc_82A0FF30:
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r10,24028(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24028);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r11,24036(r29)
	PPC_STORE_U32(ctx.r29.u32 + 24036, ctx.r11.u32);
	// addis r3,r10,2
	ctx.r3.s64 = ctx.r10.s64 + 131072;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r3,19120
	ctx.r3.s64 = ctx.r3.s64 + 19120;
	// bl 0x831796f4
	ctx.lr = 0x82A0FF54;
	__imp__KeReleaseMutant(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x82a10040
	goto loc_82A10040;
loc_82A0FF5C:
	// mulli r11,r28,28
	ctx.r11.s64 = ctx.r28.s64 * 28;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmplwi cr6,r10,254
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 254, ctx.xer);
	// bne cr6,0x82a1002c
	if (!ctx.cr6.eq) goto loc_82A1002C;
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82a1002c
	if (!ctx.cr6.eq) goto loc_82A1002C;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// li r31,0
	ctx.r31.s64 = 0;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// bne cr6,0x82a0ffc8
	if (!ctx.cr6.eq) goto loc_82A0FFC8;
	// mr r8,r31
	ctx.r8.u64 = ctx.r31.u64;
	// addi r10,r9,224
	ctx.r10.s64 = ctx.r9.s64 + 224;
loc_82A0FF94:
	// lwz r7,320(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 320);
	// cmplw cr6,r7,r28
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r28.u32, ctx.xer);
	// beq cr6,0x82a0ffb4
	if (ctx.cr6.eq) goto loc_82A0FFB4;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r10,r10,352
	ctx.r10.s64 = ctx.r10.s64 + 352;
	// cmplwi cr6,r8,6
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 6, ctx.xer);
	// blt cr6,0x82a0ff94
	if (ctx.cr6.lt) goto loc_82A0FF94;
	// b 0x82a0ffbc
	goto loc_82A0FFBC;
loc_82A0FFB4:
	// li r8,-1
	ctx.r8.s64 = -1;
	// stw r8,320(r10)
	PPC_STORE_U32(ctx.r10.u32 + 320, ctx.r8.u32);
loc_82A0FFBC:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// beq cr6,0x82a0ffd0
	if (ctx.cr6.eq) goto loc_82A0FFD0;
loc_82A0FFC8:
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x82a10000
	if (!ctx.cr6.eq) goto loc_82A10000;
loc_82A0FFD0:
	// lis r10,2
	ctx.r10.s64 = 131072;
	// stw r31,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r31.u32);
	// stw r31,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r31.u32);
	// li r8,1
	ctx.r8.s64 = 1;
	// ori r11,r10,19101
	ctx.r11.u64 = ctx.r10.u64 | 19101;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// stbx r8,r9,r11
	PPC_STORE_U8(ctx.r9.u32 + ctx.r11.u32, ctx.r8.u8);
	// lwz r11,24028(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24028);
	// addis r3,r11,9
	ctx.r3.s64 = ctx.r11.s64 + 589824;
	// addi r3,r3,-2428
	ctx.r3.s64 = ctx.r3.s64 + -2428;
	// bl 0x831792b4
	ctx.lr = 0x82A10000;
	__imp__KeSetEvent(ctx, base);
loc_82A10000:
	// stw r31,24036(r29)
	PPC_STORE_U32(ctx.r29.u32 + 24036, ctx.r31.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r10,24028(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24028);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// addis r3,r10,2
	ctx.r3.s64 = ctx.r10.s64 + 131072;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// addi r3,r3,19120
	ctx.r3.s64 = ctx.r3.s64 + 19120;
	// bl 0x831796f4
	ctx.lr = 0x82A10024;
	__imp__KeReleaseMutant(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82a10040
	goto loc_82A10040;
loc_82A1002C:
	// lis r31,-31999
	ctx.r31.s64 = -2097086464;
	// ori r31,r31,10
	ctx.r31.u64 = ctx.r31.u64 | 10;
	// b 0x82a0ff30
	goto loc_82A0FF30;
loc_82A10038:
	// lis r3,-31999
	ctx.r3.s64 = -2097086464;
	// ori r3,r3,5
	ctx.r3.u64 = ctx.r3.u64 | 5;
loc_82A10040:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A10048"))) PPC_WEAK_FUNC(sub_82A10048);
PPC_FUNC_IMPL(__imp__sub_82A10048) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7674
	ctx.lr = 0x82A10050;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31964
	ctx.r11.s64 = -2094792704;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r11,r11,29312
	ctx.r11.s64 = ctx.r11.s64 + 29312;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// lwz r11,10632(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10632);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82a101b8
	if (ctx.cr6.eq) goto loc_82A101B8;
	// lis r28,-31963
	ctx.r28.s64 = -2094727168;
	// lwz r11,24028(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 24028);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a101b8
	if (ctx.cr6.eq) goto loc_82A101B8;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82a0c9b8
	ctx.lr = 0x82A10088;
	sub_82A0C9B8(ctx, base);
	// lwz r31,24028(r28)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r28.u32 + 24028);
	// bl 0x82a74720
	ctx.lr = 0x82A10090;
	sub_82A74720(ctx, base);
	// lis r30,-31963
	ctx.r30.s64 = -2094727168;
	// lwz r11,24036(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24036);
	// subf r11,r11,r3
	ctx.r11.s64 = ctx.r3.s64 - ctx.r11.s64;
	// addic r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r7,r11,r31
	ctx.r7.u64 = ctx.r11.u64 & ctx.r31.u64;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x82a100e4
	if (!ctx.cr6.eq) goto loc_82A100E4;
	// lis r31,-31999
	ctx.r31.s64 = -2097086464;
	// ori r31,r31,5
	ctx.r31.u64 = ctx.r31.u64 | 5;
loc_82A100B8:
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r10,24028(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 24028);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r11,24036(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24036, ctx.r11.u32);
	// addis r3,r10,2
	ctx.r3.s64 = ctx.r10.s64 + 131072;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r3,19120
	ctx.r3.s64 = ctx.r3.s64 + 19120;
	// bl 0x831796f4
	ctx.lr = 0x82A100DC;
	__imp__KeReleaseMutant(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x82a101c0
	goto loc_82A101C0;
loc_82A100E4:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r7
	ctx.r4.u64 = ctx.r7.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82a0c960
	ctx.lr = 0x82A100F4;
	sub_82A0C960(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82a10108
	if (!ctx.cr0.eq) goto loc_82A10108;
	// lis r31,-31999
	ctx.r31.s64 = -2097086464;
	// ori r31,r31,8
	ctx.r31.u64 = ctx.r31.u64 | 8;
	// b 0x82a100b8
	goto loc_82A100B8;
loc_82A10108:
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r7,2348
	ctx.r10.s64 = ctx.r7.s64 + 2348;
loc_82A10110:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r9,r29
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x82a10144
	if (ctx.cr6.eq) goto loc_82A10144;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,88
	ctx.r10.s64 = ctx.r10.s64 + 88;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// blt cr6,0x82a10110
	if (ctx.cr6.lt) goto loc_82A10110;
	// li r31,0
	ctx.r31.s64 = 0;
loc_82A10130:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82a10154
	if (!ctx.cr6.eq) goto loc_82A10154;
	// lis r31,-32761
	ctx.r31.s64 = -2147024896;
	// ori r31,r31,87
	ctx.r31.u64 = ctx.r31.u64 | 87;
	// b 0x82a100b8
	goto loc_82A100B8;
loc_82A10144:
	// mulli r11,r11,88
	ctx.r11.s64 = ctx.r11.s64 * 88;
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// addi r31,r11,2336
	ctx.r31.s64 = ctx.r11.s64 + 2336;
	// b 0x82a10130
	goto loc_82A10130;
loc_82A10154:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm. r11,r11,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82a1016c
	if (!ctx.cr0.eq) goto loc_82A1016C;
	// lis r31,-32761
	ctx.r31.s64 = -2147024896;
	// ori r31,r31,170
	ctx.r31.u64 = ctx.r31.u64 | 170;
	// b 0x82a100b8
	goto loc_82A100B8;
loc_82A1016C:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// bne cr6,0x82a10188
	if (!ctx.cr6.eq) goto loc_82A10188;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// bl 0x82a0d9a0
	ctx.lr = 0x82A10180;
	sub_82A0D9A0(ctx, base);
	// stw r3,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r3.u32);
	// b 0x82a1018c
	goto loc_82A1018C;
loc_82A10188:
	// stw r27,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r27.u32);
loc_82A1018C:
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r10,24028(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 24028);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r11,24036(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24036, ctx.r11.u32);
	// addis r3,r10,2
	ctx.r3.s64 = ctx.r10.s64 + 131072;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r3,19120
	ctx.r3.s64 = ctx.r3.s64 + 19120;
	// bl 0x831796f4
	ctx.lr = 0x82A101B0;
	__imp__KeReleaseMutant(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82a101c0
	goto loc_82A101C0;
loc_82A101B8:
	// lis r3,-31999
	ctx.r3.s64 = -2097086464;
	// ori r3,r3,5
	ctx.r3.u64 = ctx.r3.u64 | 5;
loc_82A101C0:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82fa76c4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A101C8"))) PPC_WEAK_FUNC(sub_82A101C8);
PPC_FUNC_IMPL(__imp__sub_82A101C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7664
	ctx.lr = 0x82A101D0;
	__savegprlr_23(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82a0c9b8
	ctx.lr = 0x82A101DC;
	sub_82A0C9B8(ctx, base);
	// lis r24,-31963
	ctx.r24.s64 = -2094727168;
	// lwz r31,24028(r24)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r24.u32 + 24028);
	// bl 0x82a74720
	ctx.lr = 0x82A101E8;
	sub_82A74720(ctx, base);
	// lis r23,-31963
	ctx.r23.s64 = -2094727168;
	// lwz r11,24036(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 24036);
	// subf r11,r11,r3
	ctx.r11.s64 = ctx.r3.s64 - ctx.r11.s64;
	// addic r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r30,r11,r31
	ctx.r30.u64 = ctx.r11.u64 & ctx.r31.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x82a10210
	if (!ctx.cr6.eq) goto loc_82A10210;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82a10304
	goto loc_82A10304;
loc_82A10210:
	// li r27,0
	ctx.r27.s64 = 0;
	// lis r11,2
	ctx.r11.s64 = 131072;
	// addi r31,r30,12
	ctx.r31.s64 = ctx.r30.s64 + 12;
	// mr r26,r27
	ctx.r26.u64 = ctx.r27.u64;
	// li r25,254
	ctx.r25.s64 = 254;
	// ori r29,r11,19101
	ctx.r29.u64 = ctx.r11.u64 | 19101;
	// li r28,1
	ctx.r28.s64 = 1;
loc_82A1022C:
	// stw r25,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r25.u32);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x83178da4
	ctx.lr = 0x82A1023C;
	__imp__XamUserNuiGetUserIndex(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82a10274
	if (ctx.cr0.lt) goto loc_82A10274;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82a102cc
	if (ctx.cr6.eq) goto loc_82A102CC;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stbx r28,r30,r29
	PPC_STORE_U8(ctx.r30.u32 + ctx.r29.u32, ctx.r28.u8);
	// lwz r11,-12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82a102cc
	if (!ctx.cr6.eq) goto loc_82A102CC;
	// stw r28,-12(r31)
	PPC_STORE_U32(ctx.r31.u32 + -12, ctx.r28.u32);
	// stw r27,-4(r31)
	PPC_STORE_U32(ctx.r31.u32 + -4, ctx.r27.u32);
	// b 0x82a102cc
	goto loc_82A102CC;
loc_82A10274:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,254
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 254, ctx.xer);
	// beq cr6,0x82a102cc
	if (ctx.cr6.eq) goto loc_82A102CC;
	// stw r25,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r25.u32);
	// stw r27,-4(r31)
	PPC_STORE_U32(ctx.r31.u32 + -4, ctx.r27.u32);
	// stbx r28,r30,r29
	PPC_STORE_U8(ctx.r30.u32 + ctx.r29.u32, ctx.r28.u8);
	// lwz r11,-12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -12);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x82a102c8
	if (!ctx.cr6.eq) goto loc_82A102C8;
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// addi r11,r30,224
	ctx.r11.s64 = ctx.r30.s64 + 224;
loc_82A102A0:
	// lwz r9,320(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 320);
	// cmplw cr6,r9,r26
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r26.u32, ctx.xer);
	// beq cr6,0x82a102c0
	if (ctx.cr6.eq) goto loc_82A102C0;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,352
	ctx.r11.s64 = ctx.r11.s64 + 352;
	// cmplwi cr6,r10,6
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 6, ctx.xer);
	// blt cr6,0x82a102a0
	if (ctx.cr6.lt) goto loc_82A102A0;
	// b 0x82a102c8
	goto loc_82A102C8;
loc_82A102C0:
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r10,320(r11)
	PPC_STORE_U32(ctx.r11.u32 + 320, ctx.r10.u32);
loc_82A102C8:
	// stw r27,-12(r31)
	PPC_STORE_U32(ctx.r31.u32 + -12, ctx.r27.u32);
loc_82A102CC:
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// addi r31,r31,28
	ctx.r31.s64 = ctx.r31.s64 + 28;
	// cmplwi cr6,r26,8
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 8, ctx.xer);
	// blt cr6,0x82a1022c
	if (ctx.cr6.lt) goto loc_82A1022C;
	// lbzx r11,r30,r29
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + ctx.r29.u32);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82a10300
	if (ctx.cr0.eq) goto loc_82A10300;
	// lwz r11,24028(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 24028);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addis r3,r11,9
	ctx.r3.s64 = ctx.r11.s64 + 589824;
	// addi r3,r3,-2428
	ctx.r3.s64 = ctx.r3.s64 + -2428;
	// bl 0x831792b4
	ctx.lr = 0x82A10300;
	__imp__KeSetEvent(ctx, base);
loc_82A10300:
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
loc_82A10304:
	// stw r11,24036(r23)
	PPC_STORE_U32(ctx.r23.u32 + 24036, ctx.r11.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r10,24028(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 24028);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// addis r3,r10,2
	ctx.r3.s64 = ctx.r10.s64 + 131072;
	// addi r3,r3,19120
	ctx.r3.s64 = ctx.r3.s64 + 19120;
	// bl 0x831796f4
	ctx.lr = 0x82A10324;
	__imp__KeReleaseMutant(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82fa76b4
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A1032C"))) PPC_WEAK_FUNC(sub_82A1032C);
PPC_FUNC_IMPL(__imp__sub_82A1032C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A10330"))) PPC_WEAK_FUNC(sub_82A10330);
PPC_FUNC_IMPL(__imp__sub_82A10330) {
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
	// lis r11,-31964
	ctx.r11.s64 = -2094792704;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// addi r10,r11,29312
	ctx.r10.s64 = ctx.r11.s64 + 29312;
	// lwz r11,10632(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 10632);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82a10368
	if (!ctx.cr6.eq) goto loc_82A10368;
	// lis r3,-31999
	ctx.r3.s64 = -2097086464;
	// ori r3,r3,5
	ctx.r3.u64 = ctx.r3.u64 | 5;
	// b 0x82a10604
	goto loc_82A10604;
loc_82A10368:
	// addis r11,r3,-3
	ctx.r11.s64 = ctx.r3.s64 + -196608;
	// addi r11,r11,16382
	ctx.r11.s64 = ctx.r11.s64 + 16382;
	// cmplwi cr6,r11,21
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 21, ctx.xer);
	// bgt cr6,0x82a105fc
	if (ctx.cr6.gt) goto loc_82A105FC;
	// lis r12,-32250
	ctx.r12.s64 = -2113536000;
	// addi r12,r12,-24800
	ctx.r12.s64 = ctx.r12.s64 + -24800;
	// lbzx r0,r12,r11
	ctx.r0.u64 = PPC_LOAD_U8(ctx.r12.u32 + ctx.r11.u32);
	// rlwinm r0,r0,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r0.u32 | (ctx.r0.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r12,-32095
	ctx.r12.s64 = -2103377920;
	// nop 
	// addi r12,r12,928
	ctx.r12.s64 = ctx.r12.s64 + 928;
	// add r12,r12,r0
	ctx.r12.u64 = ctx.r12.u64 + ctx.r0.u64;
	// mtctr r12
	ctx.ctr.u64 = ctx.r12.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_82A103A0;
	case 1:
		goto loc_82A105FC;
	case 2:
		goto loc_82A105FC;
	case 3:
		goto loc_82A105FC;
	case 4:
		goto loc_82A103B0;
	case 5:
		goto loc_82A103EC;
	case 6:
		goto loc_82A10414;
	case 7:
		goto loc_82A105FC;
	case 8:
		goto loc_82A1052C;
	case 9:
		goto loc_82A104E8;
	case 10:
		goto loc_82A105FC;
	case 11:
		goto loc_82A105FC;
	case 12:
		goto loc_82A10520;
	case 13:
		goto loc_82A103A8;
	case 14:
		goto loc_82A105FC;
	case 15:
		goto loc_82A1041C;
	case 16:
		goto loc_82A10484;
	case 17:
		goto loc_82A104A8;
	case 18:
		goto loc_82A10548;
	case 19:
		goto loc_82A1056C;
	case 20:
		goto loc_82A105A4;
	case 21:
		goto loc_82A105D0;
	default:
		__builtin_unreachable();
	}
loc_82A103A0:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82a10604
	goto loc_82A10604;
loc_82A103A8:
	// bl 0x82a101c8
	ctx.lr = 0x82A103AC;
	sub_82A101C8(ctx, base);
	// b 0x82a103a0
	goto loc_82A103A0;
loc_82A103B0:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82a103c0
	if (!ctx.cr0.eq) goto loc_82A103C0;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
loc_82A103C0:
	// lis r10,-31963
	ctx.r10.s64 = -2094727168;
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lis r9,8
	ctx.r9.s64 = 524288;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// oris r6,r11,32768
	ctx.r6.u64 = ctx.r11.u64 | 2147483648;
	// ori r9,r9,62120
	ctx.r9.u64 = ctx.r9.u64 | 62120;
	// lwz r11,24028(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24028);
	// lwzx r7,r11,r9
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
loc_82A103E0:
	// li r3,2
	ctx.r3.s64 = 2;
loc_82A103E4:
	// bl 0x82a0ec90
	ctx.lr = 0x82A103E8;
	sub_82A0EC90(ctx, base);
	// b 0x82a10604
	goto loc_82A10604;
loc_82A103EC:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82A103F0:
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r10,8
	ctx.r10.s64 = 524288;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r10,r10,62116
	ctx.r10.u64 = ctx.r10.u64 | 62116;
	// lis r6,-32768
	ctx.r6.s64 = -2147483648;
	// lwz r11,24028(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24028);
	// lwzx r7,r11,r10
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// b 0x82a103e4
	goto loc_82A103E4;
loc_82A10414:
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x82a103f0
	goto loc_82A103F0;
loc_82A1041C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,65535
	ctx.r3.u64 = ctx.r3.u64 | 65535;
	// cmplwi cr6,r11,24
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 24, ctx.xer);
	// blt cr6,0x82a10478
	if (ctx.cr6.lt) goto loc_82A10478;
	// lwz r30,10676(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 10676);
	// cmplwi r30,0
	ctx.cr0.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq 0x82a10478
	if (ctx.cr0.eq) goto loc_82A10478;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r30,48
	ctx.r3.s64 = ctx.r30.s64 + 48;
	// bl 0x82af2cc8
	ctx.lr = 0x82A1044C;
	sub_82AF2CC8(ctx, base);
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r10,104(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r9,112(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r8,116(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// stw r9,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r9.u32);
	// stw r8,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r8.u32);
	// lwz r11,100(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 100);
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
loc_82A10478:
	// li r11,24
	ctx.r11.s64 = 24;
loc_82A1047C:
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x82a10604
	goto loc_82A10604;
loc_82A10484:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,65535
	ctx.r3.u64 = ctx.r3.u64 | 65535;
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// blt cr6,0x82a104a0
	if (ctx.cr6.lt) goto loc_82A104A0;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82a0feb0
	ctx.lr = 0x82A104A0;
	sub_82A0FEB0(ctx, base);
loc_82A104A0:
	// li r11,8
	ctx.r11.s64 = 8;
	// b 0x82a1047c
	goto loc_82A1047C;
loc_82A104A8:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,65535
	ctx.r3.u64 = ctx.r3.u64 | 65535;
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x82a104e0
	if (ctx.cr6.lt) goto loc_82A104E0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82a141d0
	ctx.lr = 0x82A104C8;
	sub_82A141D0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82a104e0
	if (ctx.cr0.lt) goto loc_82A104E0;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// stw r10,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r10.u32);
loc_82A104E0:
	// li r11,16
	ctx.r11.s64 = 16;
	// b 0x82a1047c
	goto loc_82A1047C;
loc_82A104E8:
	// lis r10,-31963
	ctx.r10.s64 = -2094727168;
	// lis r11,8
	ctx.r11.s64 = 524288;
	// li r9,1
	ctx.r9.s64 = 1;
	// ori r8,r11,63204
	ctx.r8.u64 = ctx.r11.u64 | 63204;
	// lwz r11,24028(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24028);
	// stwx r9,r11,r8
	PPC_STORE_U32(ctx.r11.u32 + ctx.r8.u32, ctx.r9.u32);
	// sync 
	// lwz r11,24028(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24028);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addis r3,r11,9
	ctx.r3.s64 = ctx.r11.s64 + 589824;
	// addi r3,r3,-2428
	ctx.r3.s64 = ctx.r3.s64 + -2428;
	// bl 0x831792b4
	ctx.lr = 0x82A1051C;
	__imp__KeSetEvent(ctx, base);
	// b 0x82a103a0
	goto loc_82A103A0;
loc_82A10520:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82a0ef68
	ctx.lr = 0x82A10528;
	sub_82A0EF68(ctx, base);
	// b 0x82a10604
	goto loc_82A10604;
loc_82A1052C:
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// lis r10,8
	ctx.r10.s64 = 524288;
	// li r3,0
	ctx.r3.s64 = 0;
	// ori r10,r10,61816
	ctx.r10.u64 = ctx.r10.u64 | 61816;
	// lwz r11,24028(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24028);
	// lwzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// b 0x82a1047c
	goto loc_82A1047C;
loc_82A10548:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,65535
	ctx.r3.u64 = ctx.r3.u64 | 65535;
	// cmplwi cr6,r11,12
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 12, ctx.xer);
	// blt cr6,0x82a10604
	if (ctx.cr6.lt) goto loc_82A10604;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82a10048
	ctx.lr = 0x82A10568;
	sub_82A10048(ctx, base);
	// b 0x82a10604
	goto loc_82A10604;
loc_82A1056C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,65535
	ctx.r3.u64 = ctx.r3.u64 | 65535;
	// cmplwi cr6,r11,20
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 20, ctx.xer);
	// blt cr6,0x82a10604
	if (ctx.cr6.lt) goto loc_82A10604;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82a10590
	if (!ctx.cr0.eq) goto loc_82A10590;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
loc_82A10590:
	// lwz r7,16(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// oris r6,r11,32768
	ctx.r6.u64 = ctx.r11.u64 | 2147483648;
	// lwz r5,8(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// b 0x82a103e0
	goto loc_82A103E0;
loc_82A105A4:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,65535
	ctx.r3.u64 = ctx.r3.u64 | 65535;
	// cmplwi cr6,r11,12
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 12, ctx.xer);
	// blt cr6,0x82a10604
	if (ctx.cr6.lt) goto loc_82A10604;
	// lwz r7,8(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lis r6,-32768
	ctx.r6.s64 = -2147483648;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82a103e4
	goto loc_82A103E4;
loc_82A105D0:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,65535
	ctx.r3.u64 = ctx.r3.u64 | 65535;
	// cmplwi cr6,r11,12
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 12, ctx.xer);
	// blt cr6,0x82a10604
	if (ctx.cr6.lt) goto loc_82A10604;
	// lwz r7,8(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lis r6,-32768
	ctx.r6.s64 = -2147483648;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r3,3
	ctx.r3.s64 = 3;
	// b 0x82a103e4
	goto loc_82A103E4;
loc_82A105FC:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,65535
	ctx.r3.u64 = ctx.r3.u64 | 65535;
loc_82A10604:
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

__attribute__((alias("__imp__sub_82A1061C"))) PPC_WEAK_FUNC(sub_82A1061C);
PPC_FUNC_IMPL(__imp__sub_82A1061C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A10620"))) PPC_WEAK_FUNC(sub_82A10620);
PPC_FUNC_IMPL(__imp__sub_82A10620) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7660
	ctx.lr = 0x82A10628;
	__savegprlr_22(ctx, base);
	// stwu r1,-576(r1)
	ea = -576 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r23,r4
	ctx.r23.u64 = ctx.r4.u64;
	// bl 0x831791a4
	ctx.lr = 0x82A10638;
	__imp__RtlEnterCriticalSection(ctx, base);
	// addi r31,r27,40
	ctx.r31.s64 = ctx.r27.s64 + 40;
	// li r5,2048
	ctx.r5.s64 = 2048;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82fa7cf0
	ctx.lr = 0x82A1064C;
	sub_82FA7CF0(ctx, base);
	// li r11,256
	ctx.r11.s64 = 256;
	// li r25,0
	ctx.r25.s64 = 0;
	// stw r11,32(r27)
	PPC_STORE_U32(ctx.r27.u32 + 32, ctx.r11.u32);
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// stw r25,28(r27)
	PPC_STORE_U32(ctx.r27.u32 + 28, ctx.r25.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x83178dd4
	ctx.lr = 0x82A10668;
	__imp__XamProfileCreateEnumerator(ctx, base);
	// lis r22,-32761
	ctx.r22.s64 = -2147024896;
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bgt 0x82a1067c
	if (ctx.cr0.gt) goto loc_82A1067C;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x82a10684
	goto loc_82A10684;
loc_82A1067C:
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// or r30,r11,r22
	ctx.r30.u64 = ctx.r11.u64 | ctx.r22.u64;
loc_82A10684:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt cr6,0x82a107f4
	if (ctx.cr6.lt) goto loc_82A107F4;
	// mr r26,r25
	ctx.r26.u64 = ctx.r25.u64;
	// addi r24,r31,-8
	ctx.r24.s64 = ctx.r31.s64 + -8;
	// lis r29,-31963
	ctx.r29.s64 = -2094727168;
	// lis r28,-31963
	ctx.r28.s64 = -2094727168;
loc_82A1069C:
	// cmpwi cr6,r26,256
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 256, ctx.xer);
	// bge cr6,0x82a107d4
	if (!ctx.cr6.lt) goto loc_82A107D4;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x83178dc4
	ctx.lr = 0x82A106B8;
	__imp__XamProfileEnumerate(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bgt 0x82a106c8
	if (ctx.cr0.gt) goto loc_82A106C8;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x82a106d0
	goto loc_82A106D0;
loc_82A106C8:
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// or r30,r11,r22
	ctx.r30.u64 = ctx.r11.u64 | ctx.r22.u64;
loc_82A106D0:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt cr6,0x82a106ec
	if (ctx.cr6.lt) goto loc_82A106EC;
	// ld r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// beq cr6,0x82a106ec
	if (ctx.cr6.eq) goto loc_82A106EC;
	// stdu r11,8(r24)
	ea = 8 + ctx.r24.u32;
	PPC_STORE_U64(ea, ctx.r11.u64);
	ctx.r24.u32 = ea;
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
loc_82A106EC:
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// std r25,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r25.u64);
	// beq cr6,0x82a107cc
	if (ctx.cr6.eq) goto loc_82A107CC;
	// addi r7,r1,88
	ctx.r7.s64 = ctx.r1.s64 + 88;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x83179414
	ctx.lr = 0x82A10710;
	__imp__KeWaitForSingleObject(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82a107cc
	if (!ctx.cr0.eq) goto loc_82A107CC;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82a0c9b8
	ctx.lr = 0x82A10720;
	sub_82A0C9B8(ctx, base);
	// lwz r31,24028(r28)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r28.u32 + 24028);
	// bl 0x82a74720
	ctx.lr = 0x82A10728;
	sub_82A74720(ctx, base);
	// lwz r11,24036(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 24036);
	// subf r11,r11,r3
	ctx.r11.s64 = ctx.r3.s64 - ctx.r11.s64;
	// addic r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 & ctx.r31.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a10758
	if (ctx.cr6.eq) goto loc_82A10758;
	// lis r10,2
	ctx.r10.s64 = 131072;
	// ori r10,r10,19108
	ctx.r10.u64 = ctx.r10.u64 | 19108;
	// lwzx r10,r11,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// bne cr6,0x82a10764
	if (!ctx.cr6.eq) goto loc_82A10764;
loc_82A10758:
	// lis r30,-31999
	ctx.r30.s64 = -2097086464;
	// ori r30,r30,5
	ctx.r30.u64 = ctx.r30.u64 | 5;
	// b 0x82a107a8
	goto loc_82A107A8;
loc_82A10764:
	// mr r10,r25
	ctx.r10.u64 = ctx.r25.u64;
	// addi r11,r11,2336
	ctx.r11.s64 = ctx.r11.s64 + 2336;
loc_82A1076C:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82a10784
	if (ctx.cr6.eq) goto loc_82A10784;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm. r9,r9,1,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82a10808
	if (!ctx.cr0.eq) goto loc_82A10808;
loc_82A10784:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,88
	ctx.r11.s64 = ctx.r11.s64 + 88;
	// cmplwi cr6,r10,2
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 2, ctx.xer);
	// blt cr6,0x82a1076c
	if (ctx.cr6.lt) goto loc_82A1076C;
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
loc_82A10798:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82a107a8
	if (!ctx.cr0.eq) goto loc_82A107A8;
	// lis r30,-32768
	ctx.r30.s64 = -2147483648;
	// ori r30,r30,16388
	ctx.r30.u64 = ctx.r30.u64 | 16388;
loc_82A107A8:
	// stw r25,24036(r29)
	PPC_STORE_U32(ctx.r29.u32 + 24036, ctx.r25.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r10,24028(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 24028);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// addis r3,r10,2
	ctx.r3.s64 = ctx.r10.s64 + 131072;
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
	// addi r3,r3,19120
	ctx.r3.s64 = ctx.r3.s64 + 19120;
	// bl 0x831796f4
	ctx.lr = 0x82A107CC;
	__imp__KeReleaseMutant(ctx, base);
loc_82A107CC:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge cr6,0x82a1069c
	if (!ctx.cr6.lt) goto loc_82A1069C;
loc_82A107D4:
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x82a756a0
	ctx.lr = 0x82A107DC;
	sub_82A756A0(ctx, base);
	// lis r11,-32761
	ctx.r11.s64 = -2147024896;
	// ori r11,r11,18
	ctx.r11.u64 = ctx.r11.u64 | 18;
	// subf r11,r30,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r30.s64;
	// subfic r11,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r11.s64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r30,r11,r30
	ctx.r30.u64 = ctx.r11.u64 & ctx.r30.u64;
loc_82A107F4:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x831791b4
	ctx.lr = 0x82A107FC;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,576
	ctx.r1.s64 = ctx.r1.s64 + 576;
	// b 0x82fa76b0
	__restgprlr_22(ctx, base);
	return;
loc_82A10808:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82a10798
	goto loc_82A10798;
}

__attribute__((alias("__imp__sub_82A10810"))) PPC_WEAK_FUNC(sub_82A10810);
PPC_FUNC_IMPL(__imp__sub_82A10810) {
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
	// bl 0x831791a4
	ctx.lr = 0x82A10828;
	__imp__RtlEnterCriticalSection(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// bl 0x831791b4
	ctx.lr = 0x82A10838;
	__imp__RtlLeaveCriticalSection(ctx, base);
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

__attribute__((alias("__imp__sub_82A1084C"))) PPC_WEAK_FUNC(sub_82A1084C);
PPC_FUNC_IMPL(__imp__sub_82A1084C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A10850"))) PPC_WEAK_FUNC(sub_82A10850);
PPC_FUNC_IMPL(__imp__sub_82A10850) {
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
	// bl 0x831791a4
	ctx.lr = 0x82A1086C;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// cmplwi cr6,r10,256
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 256, ctx.xer);
	// blt cr6,0x82a108a0
	if (ctx.cr6.lt) goto loc_82A108A0;
loc_82A10878:
	// li r30,0
	ctx.r30.s64 = 0;
loc_82A1087C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831791b4
	ctx.lr = 0x82A10884;
	__imp__RtlLeaveCriticalSection(ctx, base);
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
loc_82A108A0:
	// addi r11,r10,5
	ctx.r11.s64 = ctx.r10.s64 + 5;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// ldx r11,r11,r31
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + ctx.r31.u32);
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// beq cr6,0x82a108c4
	if (ctx.cr6.eq) goto loc_82A108C4;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// stw r10,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r10.u32);
	// b 0x82a1087c
	goto loc_82A1087C;
loc_82A108C4:
	// li r11,256
	ctx.r11.s64 = 256;
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// b 0x82a10878
	goto loc_82A10878;
}

__attribute__((alias("__imp__sub_82A108D0"))) PPC_WEAK_FUNC(sub_82A108D0);
PPC_FUNC_IMPL(__imp__sub_82A108D0) {
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
	// sth r4,126(r1)
	PPC_STORE_U16(ctx.r1.u32 + 126, ctx.r4.u16);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r5,2
	ctx.r5.s64 = 2;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r4,r1,126
	ctx.r4.s64 = ctx.r1.s64 + 126;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x82a75220
	ctx.lr = 0x82A10900;
	sub_82A75220(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82A10920"))) PPC_WEAK_FUNC(sub_82A10920);
PPC_FUNC_IMPL(__imp__sub_82A10920) {
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
	// stw r4,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r4.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r4,r1,124
	ctx.r4.s64 = ctx.r1.s64 + 124;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x82a75220
	ctx.lr = 0x82A10950;
	sub_82A75220(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82A10970"))) PPC_WEAK_FUNC(sub_82A10970);
PPC_FUNC_IMPL(__imp__sub_82A10970) {
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
	// stfs f1,124(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r4,r1,124
	ctx.r4.s64 = ctx.r1.s64 + 124;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x82a75220
	ctx.lr = 0x82A109A0;
	sub_82A75220(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82A109C0"))) PPC_WEAK_FUNC(sub_82A109C0);
PPC_FUNC_IMPL(__imp__sub_82A109C0) {
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
	// stb r4,127(r1)
	PPC_STORE_U8(ctx.r1.u32 + 127, ctx.r4.u8);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r4,r1,127
	ctx.r4.s64 = ctx.r1.s64 + 127;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x82a75220
	ctx.lr = 0x82A109F0;
	sub_82A75220(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82A10A10"))) PPC_WEAK_FUNC(sub_82A10A10);
PPC_FUNC_IMPL(__imp__sub_82A10A10) {
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
	// std r4,120(r1)
	PPC_STORE_U64(ctx.r1.u32 + 120, ctx.r4.u64);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r5,8
	ctx.r5.s64 = 8;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r4,r1,120
	ctx.r4.s64 = ctx.r1.s64 + 120;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x82a75220
	ctx.lr = 0x82A10A40;
	sub_82A75220(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82A10A60"))) PPC_WEAK_FUNC(sub_82A10A60);
PPC_FUNC_IMPL(__imp__sub_82A10A60) {
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
	// lis r11,0
	ctx.r11.s64 = 0;
	// lis r10,0
	ctx.r10.s64 = 0;
	// ori r5,r11,40080
	ctx.r5.u64 = ctx.r11.u64 | 40080;
	// ori r11,r10,40084
	ctx.r11.u64 = ctx.r10.u64 | 40084;
	// li r31,0
	ctx.r31.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stwx r31,r3,r5
	PPC_STORE_U32(ctx.r3.u32 + ctx.r5.u32, ctx.r31.u32);
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
	// stwx r31,r3,r11
	PPC_STORE_U32(ctx.r3.u32 + ctx.r11.u32, ctx.r31.u32);
	// bl 0x82a75988
	ctx.lr = 0x82A10AA0;
	sub_82A75988(ctx, base);
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r11,r11,40088
	ctx.r11.u64 = ctx.r11.u64 | 40088;
	// stwx r31,r30,r11
	PPC_STORE_U32(ctx.r30.u32 + ctx.r11.u32, ctx.r31.u32);
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

__attribute__((alias("__imp__sub_82A10AC4"))) PPC_WEAK_FUNC(sub_82A10AC4);
PPC_FUNC_IMPL(__imp__sub_82A10AC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A10AC8"))) PPC_WEAK_FUNC(sub_82A10AC8);
PPC_FUNC_IMPL(__imp__sub_82A10AC8) {
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
	// lis r11,0
	ctx.r11.s64 = 0;
	// lis r10,0
	ctx.r10.s64 = 0;
	// ori r5,r11,40080
	ctx.r5.u64 = ctx.r11.u64 | 40080;
	// ori r10,r10,40084
	ctx.r10.u64 = ctx.r10.u64 | 40084;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stwx r11,r3,r5
	PPC_STORE_U32(ctx.r3.u32 + ctx.r5.u32, ctx.r11.u32);
	// stwx r11,r3,r10
	PPC_STORE_U32(ctx.r3.u32 + ctx.r10.u32, ctx.r11.u32);
	// bl 0x82a75988
	ctx.lr = 0x82A10B00;
	sub_82A75988(ctx, base);
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

__attribute__((alias("__imp__sub_82A10B18"))) PPC_WEAK_FUNC(sub_82A10B18);
PPC_FUNC_IMPL(__imp__sub_82A10B18) {
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
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// lwz r11,24028(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24028);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a10b50
	if (ctx.cr6.eq) goto loc_82A10B50;
	// lis r10,8
	ctx.r10.s64 = 524288;
	// ori r10,r10,63164
	ctx.r10.u64 = ctx.r10.u64 | 63164;
	// lwzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// rlwinm. r11,r11,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82a10b50
	if (!ctx.cr0.eq) goto loc_82A10B50;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82a842b8
	ctx.lr = 0x82A10B50;
	sub_82A842B8(ctx, base);
loc_82A10B50:
	// bl 0x82a0de00
	ctx.lr = 0x82A10B54;
	sub_82A0DE00(ctx, base);
	// bl 0x82a0dfa8
	ctx.lr = 0x82A10B58;
	sub_82A0DFA8(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A10B68"))) PPC_WEAK_FUNC(sub_82A10B68);
PPC_FUNC_IMPL(__imp__sub_82A10B68) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7674
	ctx.lr = 0x82A10B70;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r30,-31963
	ctx.r30.s64 = -2094727168;
	// lwz r11,24028(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24028);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82a10b90
	if (!ctx.cr6.eq) goto loc_82A10B90;
loc_82A10B84:
	// lis r3,-31999
	ctx.r3.s64 = -2097086464;
	// ori r3,r3,5
	ctx.r3.u64 = ctx.r3.u64 | 5;
	// b 0x82a10c78
	goto loc_82A10C78;
loc_82A10B90:
	// lis r10,8
	ctx.r10.s64 = 524288;
	// rlwinm. r9,r3,0,24,24
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x80;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ori r28,r10,63164
	ctx.r28.u64 = ctx.r10.u64 | 63164;
	// li r31,0
	ctx.r31.s64 = 0;
	// lwzx r11,r11,r28
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r28.u32);
	// ori r27,r11,128
	ctx.r27.u64 = ctx.r11.u64 | 128;
	// bne 0x82a10bb0
	if (!ctx.cr0.eq) goto loc_82A10BB0;
	// rlwinm r27,r11,0,25,23
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFF7F;
loc_82A10BB0:
	// cmplw cr6,r27,r11
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82a10c74
	if (ctx.cr6.eq) goto loc_82A10C74;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82a0c9b8
	ctx.lr = 0x82A10BC0;
	sub_82A0C9B8(ctx, base);
	// lwz r29,24028(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24028);
	// bl 0x82a74720
	ctx.lr = 0x82A10BC8;
	sub_82A74720(ctx, base);
	// lis r31,-31963
	ctx.r31.s64 = -2094727168;
	// lwz r11,24036(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24036);
	// subf r11,r11,r3
	ctx.r11.s64 = ctx.r3.s64 - ctx.r11.s64;
	// addic r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r3,r11,r29
	ctx.r3.u64 = ctx.r11.u64 & ctx.r29.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82a10c10
	if (!ctx.cr6.eq) goto loc_82A10C10;
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r10,24028(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24028);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r11,24036(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24036, ctx.r11.u32);
	// addis r3,r10,2
	ctx.r3.s64 = ctx.r10.s64 + 131072;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r3,19120
	ctx.r3.s64 = ctx.r3.s64 + 19120;
	// bl 0x831796f4
	ctx.lr = 0x82A10C0C;
	__imp__KeReleaseMutant(ctx, base);
	// b 0x82a10b84
	goto loc_82A10B84;
loc_82A10C10:
	// lis r11,2
	ctx.r11.s64 = 131072;
	// lis r10,2
	ctx.r10.s64 = 131072;
	// ori r9,r11,19104
	ctx.r9.u64 = ctx.r11.u64 | 19104;
	// ori r10,r10,19108
	ctx.r10.u64 = ctx.r10.u64 | 19108;
	// li r11,1
	ctx.r11.s64 = 1;
	// li r5,5
	ctx.r5.s64 = 5;
	// li r4,1
	ctx.r4.s64 = 1;
	// stbx r11,r3,r9
	PPC_STORE_U8(ctx.r3.u32 + ctx.r9.u32, ctx.r11.u8);
	// stwx r11,r3,r10
	PPC_STORE_U32(ctx.r3.u32 + ctx.r10.u32, ctx.r11.u32);
	// bl 0x82a0e918
	ctx.lr = 0x82A10C38;
	sub_82A0E918(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r10,24028(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24028);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r11,24036(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24036, ctx.r11.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addis r3,r10,2
	ctx.r3.s64 = ctx.r10.s64 + 131072;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r3,19120
	ctx.r3.s64 = ctx.r3.s64 + 19120;
	// bl 0x831796f4
	ctx.lr = 0x82A10C60;
	__imp__KeReleaseMutant(ctx, base);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt cr6,0x82a10c74
	if (ctx.cr6.lt) goto loc_82A10C74;
	// lwz r11,24028(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24028);
	// stwx r27,r11,r28
	PPC_STORE_U32(ctx.r11.u32 + ctx.r28.u32, ctx.r27.u32);
	// bl 0x82a0d0c0
	ctx.lr = 0x82A10C74;
	sub_82A0D0C0(ctx, base);
loc_82A10C74:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82A10C78:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82fa76c4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A10C80"))) PPC_WEAK_FUNC(sub_82A10C80);
PPC_FUNC_IMPL(__imp__sub_82A10C80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7660
	ctx.lr = 0x82A10C88;
	__savegprlr_22(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// addi r31,r4,48
	ctx.r31.s64 = ctx.r4.s64 + 48;
	// addi r30,r3,544
	ctx.r30.s64 = ctx.r3.s64 + 544;
	// li r26,6
	ctx.r26.s64 = 6;
	// li r25,0
	ctx.r25.s64 = 0;
	// li r22,-4
	ctx.r22.s64 = -4;
	// lis r23,-31963
	ctx.r23.s64 = -2094727168;
loc_82A10CAC:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r29,r30,-320
	ctx.r29.s64 = ctx.r30.s64 + -320;
	// mr r27,r25
	ctx.r27.u64 = ctx.r25.u64;
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// bge cr6,0x82a10cc8
	if (!ctx.cr6.lt) goto loc_82A10CC8;
	// mulli r11,r11,28
	ctx.r11.s64 = ctx.r11.s64 * 28;
	// add r27,r11,r28
	ctx.r27.u64 = ctx.r11.u64 + ctx.r28.u64;
loc_82A10CC8:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x82a10ce4
	if (!ctx.cr6.eq) goto loc_82A10CE4;
	// li r5,320
	ctx.r5.s64 = 320;
	// addi r4,r31,32
	ctx.r4.s64 = ctx.r31.s64 + 32;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82a75220
	ctx.lr = 0x82A10CE4;
	sub_82A75220(ctx, base);
loc_82A10CE4:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x82a10da0
	if (!ctx.cr6.eq) goto loc_82A10DA0;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x82a10d0c
	if (!ctx.cr6.eq) goto loc_82A10D0C;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82a10da0
	if (ctx.cr6.eq) goto loc_82A10DA0;
loc_82A10D0C:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x82a10d24
	if (ctx.cr6.eq) goto loc_82A10D24;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
	// lwz r11,8(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 8);
	// stw r11,16(r27)
	PPC_STORE_U32(ctx.r27.u32 + 16, ctx.r11.u32);
loc_82A10D24:
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
	// addi r10,r28,2348
	ctx.r10.s64 = ctx.r28.s64 + 2348;
loc_82A10D30:
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82a10dbc
	if (ctx.cr6.eq) goto loc_82A10DBC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,88
	ctx.r10.s64 = ctx.r10.s64 + 88;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// blt cr6,0x82a10d30
	if (ctx.cr6.lt) goto loc_82A10D30;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
loc_82A10D50:
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82a10d90
	if (ctx.cr6.eq) goto loc_82A10D90;
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82a0e858
	ctx.lr = 0x82A10D64;
	sub_82A0E858(ctx, base);
	// lis r11,2
	ctx.r11.s64 = 131072;
	// ori r11,r11,19103
	ctx.r11.u64 = ctx.r11.u64 | 19103;
	// lbzx r11,r28,r11
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + ctx.r11.u32);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82a10d90
	if (ctx.cr0.eq) goto loc_82A10D90;
	// lwz r11,24028(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 24028);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addis r3,r11,9
	ctx.r3.s64 = ctx.r11.s64 + 589824;
	// addi r3,r3,-2428
	ctx.r3.s64 = ctx.r3.s64 + -2428;
	// bl 0x831792b4
	ctx.lr = 0x82A10D90;
	__imp__KeSetEvent(ctx, base);
loc_82A10D90:
	// li r11,-1
	ctx.r11.s64 = -1;
	// std r25,336(r29)
	PPC_STORE_U64(ctx.r29.u32 + 336, ctx.r25.u64);
	// stw r25,344(r29)
	PPC_STORE_U32(ctx.r29.u32 + 344, ctx.r25.u32);
	// stw r11,320(r29)
	PPC_STORE_U32(ctx.r29.u32 + 320, ctx.r11.u32);
loc_82A10DA0:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82a0c1c8
	ctx.lr = 0x82A10DAC;
	sub_82A0C1C8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82a10dcc
	if (ctx.cr0.eq) goto loc_82A10DCC;
	// stw r22,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r22.u32);
	// b 0x82a10dd4
	goto loc_82A10DD4;
loc_82A10DBC:
	// mulli r11,r11,88
	ctx.r11.s64 = ctx.r11.s64 * 88;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// addi r4,r11,2336
	ctx.r4.s64 = ctx.r11.s64 + 2336;
	// b 0x82a10d50
	goto loc_82A10D50;
loc_82A10DCC:
	// lwz r11,320(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 320);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_82A10DD4:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x82a10de4
	if (ctx.cr6.eq) goto loc_82A10DE4;
	// lwz r11,12(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// b 0x82a10de8
	goto loc_82A10DE8;
loc_82A10DE4:
	// li r11,254
	ctx.r11.s64 = 254;
loc_82A10DE8:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addic. r26,r26,-1
	ctx.xer.ca = ctx.r26.u32 > 0;
	ctx.r26.s64 = ctx.r26.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// addi r30,r30,352
	ctx.r30.s64 = ctx.r30.s64 + 352;
	// stw r10,328(r29)
	PPC_STORE_U32(ctx.r29.u32 + 328, ctx.r10.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r31,r31,448
	ctx.r31.s64 = ctx.r31.s64 + 448;
	// stw r11,324(r29)
	PPC_STORE_U32(ctx.r29.u32 + 324, ctx.r11.u32);
	// bne 0x82a10cac
	if (!ctx.cr0.eq) goto loc_82A10CAC;
	// lis r11,2
	ctx.r11.s64 = 131072;
	// lwz r10,8(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 8);
	// mr r30,r25
	ctx.r30.u64 = ctx.r25.u64;
	// ori r11,r11,19096
	ctx.r11.u64 = ctx.r11.u64 | 19096;
	// addi r29,r24,56
	ctx.r29.s64 = ctx.r24.s64 + 56;
	// addi r31,r28,568
	ctx.r31.s64 = ctx.r28.s64 + 568;
	// li r26,-2
	ctx.r26.s64 = -2;
	// stwx r10,r28,r11
	PPC_STORE_U32(ctx.r28.u32 + ctx.r11.u32, ctx.r10.u32);
loc_82A10E2C:
	// lwz r11,-16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -16);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x82a10f90
	if (!ctx.cr6.eq) goto loc_82A10F90;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82a0e3e8
	ctx.lr = 0x82A10E44;
	sub_82A0E3E8(ctx, base);
	// lis r11,1
	ctx.r11.s64 = 65536;
	// lwz r10,-24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + -24);
	// ori r11,r11,8112
	ctx.r11.u64 = ctx.r11.u64 | 8112;
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// mullw r11,r3,r11
	ctx.r11.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r11.s32);
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// addi r27,r11,2704
	ctx.r27.s64 = ctx.r11.s64 + 2704;
	// bne cr6,0x82a10e94
	if (!ctx.cr6.eq) goto loc_82A10E94;
	// lwz r11,24028(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 24028);
	// addis r11,r11,9
	ctx.r11.s64 = ctx.r11.s64 + 589824;
	// addi r11,r11,-2684
	ctx.r11.s64 = ctx.r11.s64 + -2684;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// bl 0x82a78340
	ctx.lr = 0x82A10E78;
	sub_82A78340(ctx, base);
	// stw r3,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r3.u32);
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82a160f0
	ctx.lr = 0x82A10E8C;
	sub_82A160F0(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82a0d160
	ctx.lr = 0x82A10E94;
	sub_82A0D160(ctx, base);
loc_82A10E94:
	// lis r10,8
	ctx.r10.s64 = 524288;
	// lwz r11,24028(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 24028);
	// ori r10,r10,63164
	ctx.r10.u64 = ctx.r10.u64 | 63164;
	// lwzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// rlwinm. r11,r11,24,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82a10f90
	if (ctx.cr0.eq) goto loc_82A10F90;
	// bl 0x83178de4
	ctx.lr = 0x82A10EB0;
	__imp__XamIsUIActive(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82a10f90
	if (!ctx.cr0.eq) goto loc_82A10F90;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// bne cr6,0x82a10ef0
	if (!ctx.cr6.eq) goto loc_82A10EF0;
	// stw r25,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r25.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r7,-4(r29)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + -4);
	// mr r8,r26
	ctx.r8.u64 = ctx.r26.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r5,r31,-344
	ctx.r5.s64 = ctx.r31.s64 + -344;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82a0ea78
	ctx.lr = 0x82A10EEC;
	sub_82A0EA78(ctx, base);
	// b 0x82a10f7c
	goto loc_82A10F7C;
loc_82A10EF0:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x82a10f90
	if (ctx.cr0.eq) goto loc_82A10F90;
	// cmpwi cr6,r10,-2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -2, ctx.xer);
	// bne cr6,0x82a10f3c
	if (!ctx.cr6.eq) goto loc_82A10F3C;
	// ld r9,-8(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + -8);
	// cmpldi cr6,r9,0
	ctx.cr6.compare<uint64_t>(ctx.r9.u64, 0, ctx.xer);
	// beq cr6,0x82a10f3c
	if (ctx.cr6.eq) goto loc_82A10F3C;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r7,-4(r29)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + -4);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r25,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r25.u32);
	// mr r8,r26
	ctx.r8.u64 = ctx.r26.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r5,r31,-344
	ctx.r5.s64 = ctx.r31.s64 + -344;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x82a0ea78
	ctx.lr = 0x82A10F38;
	sub_82A0EA78(ctx, base);
	// b 0x82a10f7c
	goto loc_82A10F7C;
loc_82A10F3C:
	// cmpwi cr6,r10,-5
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -5, ctx.xer);
	// bne cr6,0x82a10f90
	if (!ctx.cr6.eq) goto loc_82A10F90;
	// rlwinm. r10,r11,31,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82a10f90
	if (!ctx.cr0.eq) goto loc_82A10F90;
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// stw r25,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r25.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r8,r26
	ctx.r8.u64 = ctx.r26.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r5,r31,-344
	ctx.r5.s64 = ctx.r31.s64 + -344;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r7,-4(r29)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + -4);
	// bl 0x82a0ea78
	ctx.lr = 0x82A10F7C;
	sub_82A0EA78(ctx, base);
loc_82A10F7C:
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// ori r11,r11,10
	ctx.r11.u64 = ctx.r11.u64 | 10;
	// cmpw cr6,r3,r11
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x82a10f90
	if (!ctx.cr6.eq) goto loc_82A10F90;
	// stw r22,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r22.u32);
loc_82A10F90:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r29,r29,448
	ctx.r29.s64 = ctx.r29.s64 + 448;
	// addi r31,r31,352
	ctx.r31.s64 = ctx.r31.s64 + 352;
	// cmplwi cr6,r30,6
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 6, ctx.xer);
	// blt cr6,0x82a10e2c
	if (ctx.cr6.lt) goto loc_82A10E2C;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82fa76b0
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A10FAC"))) PPC_WEAK_FUNC(sub_82A10FAC);
PPC_FUNC_IMPL(__imp__sub_82A10FAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A10FB0"))) PPC_WEAK_FUNC(sub_82A10FB0);
PPC_FUNC_IMPL(__imp__sub_82A10FB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x82A10FB8;
	__savegprlr_29(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x82a0cfc0
	ctx.lr = 0x82A10FC8;
	sub_82A0CFC0(ctx, base);
	// li r5,44
	ctx.r5.s64 = 44;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// bl 0x82fa7cf0
	ctx.lr = 0x82A10FD8;
	sub_82FA7CF0(ctx, base);
	// lis r10,17
	ctx.r10.s64 = 1114112;
	// lis r11,-32095
	ctx.r11.s64 = -2103377920;
	// ori r30,r10,32768
	ctx.r30.u64 = ctx.r10.u64 | 32768;
	// li r9,48
	ctx.r9.s64 = 48;
	// addi r11,r11,-16080
	ctx.r11.s64 = ctx.r11.s64 + -16080;
	// stw r30,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r30.u32);
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// lis r4,8349
	ctx.r4.s64 = 547160064;
	// stw r30,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r30.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// bl 0x82691410
	ctx.lr = 0x82A11008;
	sub_82691410(ctx, base);
	// lis r11,8
	ctx.r11.s64 = 524288;
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ori r11,r11,63160
	ctx.r11.u64 = ctx.r11.u64 | 63160;
	// stwx r4,r31,r11
	PPC_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.r4.u32);
	// beq 0x82a11048
	if (ctx.cr0.eq) goto loc_82A11048;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r3,4096
	ctx.r3.s64 = 4096;
	// bl 0x82a80ec0
	ctx.lr = 0x82A11034;
	sub_82A80EC0(ctx, base);
	// lis r11,8
	ctx.r11.s64 = 524288;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// ori r11,r11,63156
	ctx.r11.u64 = ctx.r11.u64 | 63156;
	// stwx r3,r31,r11
	PPC_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.r3.u32);
	// bne 0x82a11054
	if (!ctx.cr0.eq) goto loc_82A11054;
loc_82A11048:
	// lis r30,-32761
	ctx.r30.s64 = -2147024896;
	// ori r30,r30,14
	ctx.r30.u64 = ctx.r30.u64 | 14;
	// b 0x82a1106c
	goto loc_82A1106C;
loc_82A11054:
	// addis r3,r31,9
	ctx.r3.s64 = ctx.r31.s64 + 589824;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r3,-3744
	ctx.r3.s64 = ctx.r3.s64 + -3744;
	// bl 0x82a0dce0
	ctx.lr = 0x82A11064;
	sub_82A0DCE0(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge 0x82a11078
	if (!ctx.cr0.lt) goto loc_82A11078;
loc_82A1106C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a0df38
	ctx.lr = 0x82A11074;
	sub_82A0DF38(ctx, base);
	// b 0x82a11128
	goto loc_82A11128;
loc_82A11078:
	// addis r3,r31,9
	ctx.r3.s64 = ctx.r31.s64 + 589824;
	// addi r3,r3,-2360
	ctx.r3.s64 = ctx.r3.s64 + -2360;
	// bl 0x82a0ca60
	ctx.lr = 0x82A11084;
	sub_82A0CA60(ctx, base);
	// addis r3,r31,9
	ctx.r3.s64 = ctx.r31.s64 + 589824;
	// addi r3,r3,-272
	ctx.r3.s64 = ctx.r3.s64 + -272;
	// bl 0x82a1aef8
	ctx.lr = 0x82A11090;
	sub_82A1AEF8(ctx, base);
	// addis r11,r31,9
	ctx.r11.s64 = ctx.r31.s64 + 589824;
	// addis r10,r31,9
	ctx.r10.s64 = ctx.r31.s64 + 589824;
	// addi r11,r11,-2428
	ctx.r11.s64 = ctx.r11.s64 + -2428;
	// addis r9,r31,9
	ctx.r9.s64 = ctx.r31.s64 + 589824;
	// addi r10,r10,-2412
	ctx.r10.s64 = ctx.r10.s64 + -2412;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r9,r9,-2396
	ctx.r9.s64 = ctx.r9.s64 + -2396;
	// stb r5,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r5.u8);
	// addi r8,r11,8
	ctx.r8.s64 = ctx.r11.s64 + 8;
	// stw r6,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r6.u32);
	// addi r7,r10,8
	ctx.r7.s64 = ctx.r10.s64 + 8;
	// stw r8,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r8.u32);
	// addis r3,r31,2
	ctx.r3.s64 = ctx.r31.s64 + 131072;
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// addi r11,r9,8
	ctx.r11.s64 = ctx.r9.s64 + 8;
	// stb r5,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r5.u8);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r6,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r6.u32);
	// addi r3,r3,19120
	ctx.r3.s64 = ctx.r3.s64 + 19120;
	// stw r7,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r7.u32);
	// stw r7,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r7.u32);
	// stb r5,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, ctx.r5.u8);
	// stw r6,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r6.u32);
	// stw r11,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r11.u32);
	// stw r11,12(r9)
	PPC_STORE_U32(ctx.r9.u32 + 12, ctx.r11.u32);
	// bl 0x83179704
	ctx.lr = 0x82A110FC;
	__imp__KeInitializeMutant(ctx, base);
	// lis r11,8
	ctx.r11.s64 = 524288;
	// ori r11,r11,63164
	ctx.r11.u64 = ctx.r11.u64 | 63164;
	// stwx r29,r31,r11
	PPC_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.r29.u32);
	// bl 0x83178db4
	ctx.lr = 0x82A1110C;
	__imp__XamNuiIdentityGetSessionId(ctx, base);
	// lis r11,2
	ctx.r11.s64 = 131072;
	// ori r11,r11,19160
	ctx.r11.u64 = ctx.r11.u64 | 19160;
	// stdx r3,r31,r11
	PPC_STORE_U64(ctx.r31.u32 + ctx.r11.u32, ctx.r3.u64);
	// bl 0x83178d64
	ctx.lr = 0x82A1111C;
	__imp__XamGetCurrentTitleId(ctx, base);
	// lis r11,2
	ctx.r11.s64 = 131072;
	// ori r11,r11,19156
	ctx.r11.u64 = ctx.r11.u64 | 19156;
	// stwx r3,r31,r11
	PPC_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.r3.u32);
loc_82A11128:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A11134"))) PPC_WEAK_FUNC(sub_82A11134);
PPC_FUNC_IMPL(__imp__sub_82A11134) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A11138"))) PPC_WEAK_FUNC(sub_82A11138);
PPC_FUNC_IMPL(__imp__sub_82A11138) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7640
	ctx.lr = 0x82A11140;
	__savegprlr_14(ctx, base);
	// stfd f31,-160(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -160, ctx.f31.u64);
	// stwu r1,-592(r1)
	ea = -592 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r3,612(r1)
	PPC_STORE_U32(ctx.r1.u32 + 612, ctx.r3.u32);
	// addi r3,r1,305
	ctx.r3.s64 = ctx.r1.s64 + 305;
	// stw r4,620(r1)
	PPC_STORE_U32(ctx.r1.u32 + 620, ctx.r4.u32);
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// stw r5,628(r1)
	PPC_STORE_U32(ctx.r1.u32 + 628, ctx.r5.u32);
	// mr r18,r5
	ctx.r18.u64 = ctx.r5.u64;
	// bl 0x82a0c9b8
	ctx.lr = 0x82A11168;
	sub_82A0C9B8(ctx, base);
	// lis r20,-31963
	ctx.r20.s64 = -2094727168;
	// stw r20,328(r1)
	PPC_STORE_U32(ctx.r1.u32 + 328, ctx.r20.u32);
	// lwz r31,24028(r20)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r20.u32 + 24028);
	// bl 0x82a74720
	ctx.lr = 0x82A11178;
	sub_82A74720(ctx, base);
	// lis r19,-31963
	ctx.r19.s64 = -2094727168;
	// stw r19,312(r1)
	PPC_STORE_U32(ctx.r1.u32 + 312, ctx.r19.u32);
	// lwz r11,24036(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 24036);
	// subf r11,r11,r3
	ctx.r11.s64 = ctx.r3.s64 - ctx.r11.s64;
	// addic r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r29,r11,r31
	ctx.r29.u64 = ctx.r11.u64 & ctx.r31.u64;
	// stw r29,316(r1)
	PPC_STORE_U32(ctx.r1.u32 + 316, ctx.r29.u32);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x82a111a8
	if (!ctx.cr6.eq) goto loc_82A111A8;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82a11d8c
	goto loc_82A11D8C;
loc_82A111A8:
	// li r22,0
	ctx.r22.s64 = 0;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x82a11214
	if (ctx.cr6.eq) goto loc_82A11214;
	// lwz r10,12(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 12);
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
	// lwz r8,20(r26)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r26.u32 + 20);
	// addi r9,r29,2348
	ctx.r9.s64 = ctx.r29.s64 + 2348;
	// mulli r10,r10,352
	ctx.r10.s64 = ctx.r10.s64 * 352;
	// add r10,r10,r29
	ctx.r10.u64 = ctx.r10.u64 + ctx.r29.u64;
	// addi r27,r10,224
	ctx.r27.s64 = ctx.r10.s64 + 224;
	// stw r27,308(r1)
	PPC_STORE_U32(ctx.r1.u32 + 308, ctx.r27.u32);
loc_82A111D4:
	// lwz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x82a11204
	if (ctx.cr6.eq) goto loc_82A11204;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r9,r9,88
	ctx.r9.s64 = ctx.r9.s64 + 88;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// blt cr6,0x82a111d4
	if (ctx.cr6.lt) goto loc_82A111D4;
	// mr r30,r22
	ctx.r30.u64 = ctx.r22.u64;
loc_82A111F4:
	// stw r30,612(r1)
	PPC_STORE_U32(ctx.r1.u32 + 612, ctx.r30.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x82a11228
	if (!ctx.cr6.eq) goto loc_82A11228;
	// b 0x82a11d88
	goto loc_82A11D88;
loc_82A11204:
	// mulli r11,r11,88
	ctx.r11.s64 = ctx.r11.s64 * 88;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// addi r30,r11,2336
	ctx.r30.s64 = ctx.r11.s64 + 2336;
	// b 0x82a111f4
	goto loc_82A111F4;
loc_82A11214:
	// lwz r11,36(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// mulli r11,r11,352
	ctx.r11.s64 = ctx.r11.s64 * 352;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// addi r27,r11,224
	ctx.r27.s64 = ctx.r11.s64 + 224;
	// stw r27,308(r1)
	PPC_STORE_U32(ctx.r1.u32 + 308, ctx.r27.u32);
loc_82A11228:
	// lis r11,1
	ctx.r11.s64 = 65536;
	// lwz r10,20(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// ori r11,r11,8112
	ctx.r11.u64 = ctx.r11.u64 | 8112;
	// mullw r11,r10,r11
	ctx.r11.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// addi r31,r11,2704
	ctx.r31.s64 = ctx.r11.s64 + 2704;
	// stw r31,332(r1)
	PPC_STORE_U32(ctx.r1.u32 + 332, ctx.r31.u32);
	// beq cr6,0x82a11254
	if (ctx.cr6.eq) goto loc_82A11254;
	// ld r25,232(r26)
	ctx.r25.u64 = PPC_LOAD_U64(ctx.r26.u32 + 232);
	// b 0x82a11258
	goto loc_82A11258;
loc_82A11254:
	// mr r25,r22
	ctx.r25.u64 = ctx.r22.u64;
loc_82A11258:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r23,2
	ctx.r23.s64 = 2;
	// std r25,376(r1)
	PPC_STORE_U64(ctx.r1.u32 + 376, ctx.r25.u64);
	// li r21,-1
	ctx.r21.s64 = -1;
	// li r28,1
	ctx.r28.s64 = 1;
	// li r24,-2
	ctx.r24.s64 = -2;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82a11280
	if (ctx.cr6.eq) goto loc_82A11280;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82a11370
	if (!ctx.cr6.eq) goto loc_82A11370;
loc_82A11280:
	// cmpwi cr6,r18,0
	ctx.cr6.compare<int32_t>(ctx.r18.s32, 0, ctx.xer);
	// blt cr6,0x82a11314
	if (ctx.cr6.lt) goto loc_82A11314;
	// lwz r11,220(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 220);
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// bge cr6,0x82a11300
	if (!ctx.cr6.lt) goto loc_82A11300;
	// mulli r11,r11,28
	ctx.r11.s64 = ctx.r11.s64 * 28;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// stw r23,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r23.u32);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// bne cr6,0x82a11300
	if (!ctx.cr6.eq) goto loc_82A11300;
	// lis r10,2
	ctx.r10.s64 = 131072;
	// ori r10,r10,19101
	ctx.r10.u64 = ctx.r10.u64 | 19101;
	// stbx r28,r29,r10
	PPC_STORE_U8(ctx.r29.u32 + ctx.r10.u32, ctx.r28.u8);
	// lwz r10,8(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r11,60(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 60);
	// lwz r10,220(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 220);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82a11300
	if (ctx.cr6.eq) goto loc_82A11300;
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// bge cr6,0x82a11300
	if (!ctx.cr6.lt) goto loc_82A11300;
	// mulli r11,r11,28
	ctx.r11.s64 = ctx.r11.s64 * 28;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// bne cr6,0x82a112f4
	if (!ctx.cr6.eq) goto loc_82A112F4;
	// stw r28,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r28.u32);
	// b 0x82a112f8
	goto loc_82A112F8;
loc_82A112F4:
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_82A112F8:
	// stw r22,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r22.u32);
	// stw r24,60(r30)
	PPC_STORE_U32(ctx.r30.u32 + 60, ctx.r24.u32);
loc_82A11300:
	// lwz r11,220(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 220);
	// stw r11,320(r27)
	PPC_STORE_U32(ctx.r27.u32 + 320, ctx.r11.u32);
	// ld r11,232(r26)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r26.u32 + 232);
	// std r11,336(r27)
	PPC_STORE_U64(ctx.r27.u32 + 336, ctx.r11.u64);
	// b 0x82a11370
	goto loc_82A11370;
loc_82A11314:
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x82a11350
	if (!ctx.cr6.eq) goto loc_82A11350;
	// lwz r11,60(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 60);
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// bge cr6,0x82a11350
	if (!ctx.cr6.lt) goto loc_82A11350;
	// mulli r11,r11,28
	ctx.r11.s64 = ctx.r11.s64 * 28;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// bne cr6,0x82a11344
	if (!ctx.cr6.eq) goto loc_82A11344;
	// stw r28,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r28.u32);
	// b 0x82a11348
	goto loc_82A11348;
loc_82A11344:
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_82A11348:
	// stw r22,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r22.u32);
	// stw r24,60(r30)
	PPC_STORE_U32(ctx.r30.u32 + 60, ctx.r24.u32);
loc_82A11350:
	// lis r11,-31999
	ctx.r11.s64 = -2097086464;
	// ori r11,r11,8
	ctx.r11.u64 = ctx.r11.u64 | 8;
	// cmpw cr6,r18,r11
	ctx.cr6.compare<int32_t>(ctx.r18.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x82a11368
	if (!ctx.cr6.eq) goto loc_82A11368;
	// stw r21,320(r27)
	PPC_STORE_U32(ctx.r27.u32 + 320, ctx.r21.u32);
	// b 0x82a11370
	goto loc_82A11370;
loc_82A11368:
	// li r11,-5
	ctx.r11.s64 = -5;
	// stw r11,320(r27)
	PPC_STORE_U32(ctx.r27.u32 + 320, ctx.r11.u32);
loc_82A11370:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82a11870
	if (ctx.cr6.eq) goto loc_82A11870;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82a1139c
	if (ctx.cr6.eq) goto loc_82A1139C;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x82a11c24
	if (!ctx.cr6.eq) goto loc_82A11C24;
	// cmpwi cr6,r18,0
	ctx.cr6.compare<int32_t>(ctx.r18.s32, 0, ctx.xer);
	// blt cr6,0x82a11c24
	if (ctx.cr6.lt) goto loc_82A11C24;
	// bl 0x82a0dc80
	ctx.lr = 0x82A11398;
	sub_82A0DC80(ctx, base);
	// b 0x82a11c24
	goto loc_82A11C24;
loc_82A1139C:
	// li r11,8
	ctx.r11.s64 = 8;
	// stb r22,304(r1)
	PPC_STORE_U8(ctx.r1.u32 + 304, ctx.r22.u8);
	// mr r10,r22
	ctx.r10.u64 = ctx.r22.u64;
	// stb r22,305(r1)
	PPC_STORE_U8(ctx.r1.u32 + 305, ctx.r22.u8);
	// mr r9,r22
	ctx.r9.u64 = ctx.r22.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_82A113B4:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82a113c8
	if (ctx.cr6.eq) goto loc_82A113C8;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x82a113ec
	if (!ctx.cr6.eq) goto loc_82A113EC;
loc_82A113C8:
	// clrlwi r11,r10,24
	ctx.r11.u64 = ctx.r10.u32 & 0xFF;
	// lwz r10,12(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 4, ctx.xer);
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// bge cr6,0x82a113ec
	if (!ctx.cr6.lt) goto loc_82A113EC;
	// clrlwi r11,r9,24
	ctx.r11.u64 = ctx.r9.u32 & 0xFF;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r9,r11,24
	ctx.r9.u64 = ctx.r11.u32 & 0xFF;
loc_82A113EC:
	// addi r29,r29,28
	ctx.r29.s64 = ctx.r29.s64 + 28;
	// bdnz 0x82a113b4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82A113B4;
	// addi r11,r1,392
	ctx.r11.s64 = ctx.r1.s64 + 392;
	// std r22,384(r1)
	PPC_STORE_U64(ctx.r1.u32 + 384, ctx.r22.u64);
	// addi r3,r1,384
	ctx.r3.s64 = ctx.r1.s64 + 384;
	// stb r9,305(r1)
	PPC_STORE_U8(ctx.r1.u32 + 305, ctx.r9.u8);
	// stb r10,304(r1)
	PPC_STORE_U8(ctx.r1.u32 + 304, ctx.r10.u8);
	// std r22,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r22.u64);
	// bl 0x83178d74
	ctx.lr = 0x82A11410;
	__imp__XamGetActiveDashAppInfo(ctx, base);
	// lwz r11,32(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// li r10,255
	ctx.r10.s64 = 255;
	// cmplwi cr6,r11,255
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 255, ctx.xer);
	// stw r11,320(r1)
	PPC_STORE_U32(ctx.r1.u32 + 320, ctx.r11.u32);
	// blt cr6,0x82a11428
	if (ctx.cr6.lt) goto loc_82A11428;
	// stw r10,320(r1)
	PPC_STORE_U32(ctx.r1.u32 + 320, ctx.r10.u32);
loc_82A11428:
	// lwz r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// cmplwi cr6,r11,255
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 255, ctx.xer);
	// stw r11,324(r1)
	PPC_STORE_U32(ctx.r1.u32 + 324, ctx.r11.u32);
	// blt cr6,0x82a1143c
	if (ctx.cr6.lt) goto loc_82A1143C;
	// stw r10,324(r1)
	PPC_STORE_U32(ctx.r1.u32 + 324, ctx.r10.u32);
loc_82A1143C:
	// li r10,4096
	ctx.r10.s64 = 4096;
	// lwz r11,24028(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 24028);
	// li r9,2048
	ctx.r9.s64 = 2048;
	// lwz r29,320(r27)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r27.u32 + 320);
	// li r8,1024
	ctx.r8.s64 = 1024;
	// lwz r27,84(r30)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r30.u32 + 84);
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// lwz r26,80(r30)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r30.u32 + 80);
	// li r7,512
	ctx.r7.s64 = 512;
	// cntlzw r9,r9
	ctx.r9.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// cntlzw r8,r8
	ctx.r8.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// subfic r10,r10,18411
	ctx.xer.ca = ctx.r10.u32 <= 18411;
	ctx.r10.s64 = 18411 - ctx.r10.s64;
	// cntlzw r7,r7
	ctx.r7.u64 = ctx.r7.u32 == 0 ? 32 : __builtin_clz(ctx.r7.u32);
	// subfic r9,r9,18411
	ctx.xer.ca = ctx.r9.u32 <= 18411;
	ctx.r9.s64 = 18411 - ctx.r9.s64;
	// subfic r8,r8,18411
	ctx.xer.ca = ctx.r8.u32 <= 18411;
	ctx.r8.s64 = 18411 - ctx.r8.s64;
	// li r6,256
	ctx.r6.s64 = 256;
	// subfic r7,r7,18411
	ctx.xer.ca = ctx.r7.u32 <= 18411;
	ctx.r7.s64 = 18411 - ctx.r7.s64;
	// li r5,128
	ctx.r5.s64 = 128;
	// li r4,64
	ctx.r4.s64 = 64;
	// cntlzw r6,r6
	ctx.r6.u64 = ctx.r6.u32 == 0 ? 32 : __builtin_clz(ctx.r6.u32);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// li r3,32
	ctx.r3.s64 = 32;
	// cntlzw r5,r5
	ctx.r5.u64 = ctx.r5.u32 == 0 ? 32 : __builtin_clz(ctx.r5.u32);
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r7,r7,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r31
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	// li r25,16
	ctx.r25.s64 = 16;
	// lwzx r9,r9,r31
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r31.u32);
	// cntlzw r4,r4
	ctx.r4.u64 = ctx.r4.u32 == 0 ? 32 : __builtin_clz(ctx.r4.u32);
	// li r24,8
	ctx.r24.s64 = 8;
	// subfic r6,r6,18411
	ctx.xer.ca = ctx.r6.u32 <= 18411;
	ctx.r6.s64 = 18411 - ctx.r6.s64;
	// lwzx r8,r8,r31
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r31.u32);
	// cntlzw r3,r3
	ctx.r3.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// lwzx r7,r7,r31
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r31.u32);
	// li r22,4
	ctx.r22.s64 = 4;
	// stw r10,368(r1)
	PPC_STORE_U32(ctx.r1.u32 + 368, ctx.r10.u32);
	// subfic r5,r5,18411
	ctx.xer.ca = ctx.r5.u32 <= 18411;
	ctx.r5.s64 = 18411 - ctx.r5.s64;
	// stw r9,364(r1)
	PPC_STORE_U32(ctx.r1.u32 + 364, ctx.r9.u32);
	// cntlzw r25,r25
	ctx.r25.u64 = ctx.r25.u32 == 0 ? 32 : __builtin_clz(ctx.r25.u32);
	// subfic r4,r4,18411
	ctx.xer.ca = ctx.r4.u32 <= 18411;
	ctx.r4.s64 = 18411 - ctx.r4.s64;
	// stw r8,360(r1)
	PPC_STORE_U32(ctx.r1.u32 + 360, ctx.r8.u32);
	// cntlzw r24,r24
	ctx.r24.u64 = ctx.r24.u32 == 0 ? 32 : __builtin_clz(ctx.r24.u32);
	// stw r7,352(r1)
	PPC_STORE_U32(ctx.r1.u32 + 352, ctx.r7.u32);
	// subfic r3,r3,18411
	ctx.xer.ca = ctx.r3.u32 <= 18411;
	ctx.r3.s64 = 18411 - ctx.r3.s64;
	// cntlzw r22,r22
	ctx.r22.u64 = ctx.r22.u32 == 0 ? 32 : __builtin_clz(ctx.r22.u32);
	// subfic r25,r25,18411
	ctx.xer.ca = ctx.r25.u32 <= 18411;
	ctx.r25.s64 = 18411 - ctx.r25.s64;
	// cntlzw r23,r23
	ctx.r23.u64 = ctx.r23.u32 == 0 ? 32 : __builtin_clz(ctx.r23.u32);
	// subfic r24,r24,18411
	ctx.xer.ca = ctx.r24.u32 <= 18411;
	ctx.r24.s64 = 18411 - ctx.r24.s64;
	// cntlzw r28,r28
	ctx.r28.u64 = ctx.r28.u32 == 0 ? 32 : __builtin_clz(ctx.r28.u32);
	// rlwinm r6,r6,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r5,r5,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r4,r4,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// subfic r22,r22,18411
	ctx.xer.ca = ctx.r22.u32 <= 18411;
	ctx.r22.s64 = 18411 - ctx.r22.s64;
	// subfic r23,r23,18411
	ctx.xer.ca = ctx.r23.u32 <= 18411;
	ctx.r23.s64 = 18411 - ctx.r23.s64;
	// rlwinm r25,r25,2,0,29
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r6,r6,r31
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r31.u32);
	// subfic r28,r28,18411
	ctx.xer.ca = ctx.r28.u32 <= 18411;
	ctx.r28.s64 = 18411 - ctx.r28.s64;
	// lwzx r5,r5,r31
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r31.u32);
	// lis r21,8
	ctx.r21.s64 = 524288;
	// lwzx r4,r4,r31
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r31.u32);
	// rlwinm r10,r22,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r23,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r3,r3,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r6,348(r1)
	PPC_STORE_U32(ctx.r1.u32 + 348, ctx.r6.u32);
	// rlwinm r24,r24,2,0,29
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r5,344(r1)
	PPC_STORE_U32(ctx.r1.u32 + 344, ctx.r5.u32);
	// rlwinm r8,r28,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r28,r25,r31
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r25.u32 + ctx.r31.u32);
	// ori r7,r21,62876
	ctx.r7.u64 = ctx.r21.u64 | 62876;
	// lwzx r23,r10,r31
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	// lis r25,8
	ctx.r25.s64 = 524288;
	// lwzx r21,r9,r31
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r31.u32);
	// addis r22,r11,9
	ctx.r22.s64 = ctx.r11.s64 + 589824;
	// lwzx r3,r3,r31
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r31.u32);
	// lwzx r24,r24,r31
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r24.u32 + ctx.r31.u32);
	// ori r10,r25,62877
	ctx.r10.u64 = ctx.r25.u64 | 62877;
	// lwzx r31,r8,r31
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r31.u32);
	// addi r22,r22,-3744
	ctx.r22.s64 = ctx.r22.s64 + -3744;
	// lbzx r20,r11,r7
	ctx.r20.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r7.u32);
	// stw r4,340(r1)
	PPC_STORE_U32(ctx.r1.u32 + 340, ctx.r4.u32);
	// stw r3,336(r1)
	PPC_STORE_U32(ctx.r1.u32 + 336, ctx.r3.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// lbzx r19,r11,r10
	ctx.r19.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// lfs f31,76(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 76);
	ctx.f31.f64 = double(temp.f32);
	// lwz r17,392(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + 392);
	// ld r16,384(r1)
	ctx.r16.u64 = PPC_LOAD_U64(ctx.r1.u32 + 384);
	// bl 0x82a0dae8
	ctx.lr = 0x82A1159C;
	sub_82A0DAE8(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x82a0dae8
	ctx.lr = 0x82A115A8;
	sub_82A0DAE8(ctx, base);
	// mr r18,r3
	ctx.r18.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82a0dae8
	ctx.lr = 0x82A115B4;
	sub_82A0DAE8(ctx, base);
	// mr r15,r3
	ctx.r15.u64 = ctx.r3.u64;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x82a0dae8
	ctx.lr = 0x82A115C0;
	sub_82A0DAE8(ctx, base);
	// lwz r30,4(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r22,24(r22)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r22.u32 + 24);
	// mr r14,r3
	ctx.r14.u64 = ctx.r3.u64;
	// bl 0x83178db4
	ctx.lr = 0x82A115D0;
	__imp__XamNuiIdentityGetSessionId(ctx, base);
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
	// lwz r8,320(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 320);
	// lis r11,-31964
	ctx.r11.s64 = -2094792704;
	// lwz r9,336(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 336);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r26,340(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 340);
	// addi r11,r11,29312
	ctx.r11.s64 = ctx.r11.s64 + 29312;
	// stb r18,95(r1)
	PPC_STORE_U8(ctx.r1.u32 + 95, ctx.r18.u8);
	// clrlwi r6,r22,16
	ctx.r6.u64 = ctx.r22.u32 & 0xFFFF;
	// stb r25,103(r1)
	PPC_STORE_U8(ctx.r1.u32 + 103, ctx.r25.u8);
	// addi r3,r11,10536
	ctx.r3.s64 = ctx.r11.s64 + 10536;
	// stb r8,111(r1)
	PPC_STORE_U8(ctx.r1.u32 + 111, ctx.r8.u8);
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// stw r9,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r9.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r31,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r31.u32);
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
	// stw r23,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r23.u32);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// stw r24,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r24.u32);
	// stb r10,271(r1)
	PPC_STORE_U8(ctx.r1.u32 + 271, ctx.r10.u8);
	// mr r10,r14
	ctx.r10.u64 = ctx.r14.u64;
	// stw r28,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r28.u32);
	// stw r26,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r26.u32);
	// lwz r11,344(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 344);
	// lwz r9,324(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 324);
	// lwz r30,348(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 348);
	// lwz r26,352(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 352);
	// clrlwi r8,r9,24
	ctx.r8.u64 = ctx.r9.u32 & 0xFF;
	// lwz r24,360(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 360);
	// lwz r23,364(r1)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r1.u32 + 364);
	// lwz r22,368(r1)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r1.u32 + 368);
	// lbz r28,304(r1)
	ctx.r28.u64 = PPC_LOAD_U8(ctx.r1.u32 + 304);
	// ld r25,376(r1)
	ctx.r25.u64 = PPC_LOAD_U64(ctx.r1.u32 + 376);
	// lbz r29,305(r1)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r1.u32 + 305);
	// lwz r18,628(r1)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r1.u32 + 628);
	// stb r15,87(r1)
	PPC_STORE_U8(ctx.r1.u32 + 87, ctx.r15.u8);
	// mr r9,r18
	ctx.r9.u64 = ctx.r18.u64;
	// stw r21,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r21.u32);
	// stw r11,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r11.u32);
	// stw r30,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r30.u32);
	// stw r26,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r26.u32);
	// stw r24,204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 204, ctx.r24.u32);
	// stw r23,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r23.u32);
	// stw r22,220(r1)
	PPC_STORE_U32(ctx.r1.u32 + 220, ctx.r22.u32);
	// stb r28,231(r1)
	PPC_STORE_U8(ctx.r1.u32 + 231, ctx.r28.u8);
	// std r25,232(r1)
	PPC_STORE_U64(ctx.r1.u32 + 232, ctx.r25.u64);
	// stb r29,247(r1)
	PPC_STORE_U8(ctx.r1.u32 + 247, ctx.r29.u8);
	// stb r19,255(r1)
	PPC_STORE_U8(ctx.r1.u32 + 255, ctx.r19.u8);
	// stb r20,263(r1)
	PPC_STORE_U8(ctx.r1.u32 + 263, ctx.r20.u8);
	// stb r27,279(r1)
	PPC_STORE_U8(ctx.r1.u32 + 279, ctx.r27.u8);
	// stb r31,287(r1)
	PPC_STORE_U8(ctx.r1.u32 + 287, ctx.r31.u8);
	// std r16,288(r1)
	PPC_STORE_U64(ctx.r1.u32 + 288, ctx.r16.u64);
	// stw r17,300(r1)
	PPC_STORE_U32(ctx.r1.u32 + 300, ctx.r17.u32);
	// bl 0x82a0cc38
	ctx.lr = 0x82A116AC;
	sub_82A0CC38(ctx, base);
	// lwz r20,328(r1)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r1.u32 + 328);
	// lwz r27,332(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 332);
	// addis r4,r27,1
	ctx.r4.s64 = ctx.r27.s64 + 65536;
	// lwz r11,24028(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 24028);
	// addi r4,r4,-32128
	ctx.r4.s64 = ctx.r4.s64 + -32128;
	// addis r31,r11,9
	ctx.r31.s64 = ctx.r11.s64 + 589824;
	// addi r31,r31,-272
	ctx.r31.s64 = ctx.r31.s64 + -272;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a1b088
	ctx.lr = 0x82A116D0;
	sub_82A1B088(ctx, base);
	// lwz r30,612(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 612);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82a11c04
	if (ctx.cr0.lt) goto loc_82A11C04;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// clrlwi r4,r11,24
	ctx.r4.u64 = ctx.r11.u32 & 0xFF;
	// bl 0x82a109c0
	ctx.lr = 0x82A116EC;
	sub_82A109C0(ctx, base);
	// lis r10,8
	ctx.r10.s64 = 524288;
	// lwz r11,24028(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 24028);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r10,r10,61816
	ctx.r10.u64 = ctx.r10.u64 | 61816;
	// lwzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// clrlwi r4,r11,16
	ctx.r4.u64 = ctx.r11.u32 & 0xFFFF;
	// bl 0x82a108d0
	ctx.lr = 0x82A11708;
	sub_82A108D0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x82a10920
	ctx.lr = 0x82A11714;
	sub_82A10920(ctx, base);
	// lwz r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// cmplwi cr6,r11,255
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 255, ctx.xer);
	// blt cr6,0x82a11724
	if (ctx.cr6.lt) goto loc_82A11724;
	// li r11,255
	ctx.r11.s64 = 255;
loc_82A11724:
	// clrlwi r4,r11,24
	ctx.r4.u64 = ctx.r11.u32 & 0xFF;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a109c0
	ctx.lr = 0x82A11730;
	sub_82A109C0(ctx, base);
	// mr r4,r18
	ctx.r4.u64 = ctx.r18.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a10920
	ctx.lr = 0x82A1173C;
	sub_82A10920(ctx, base);
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x82a0dae8
	ctx.lr = 0x82A11744;
	sub_82A0DAE8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a109c0
	ctx.lr = 0x82A11750;
	sub_82A109C0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82a0dae8
	ctx.lr = 0x82A11758;
	sub_82A0DAE8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a109c0
	ctx.lr = 0x82A11764;
	sub_82A109C0(ctx, base);
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x82a0dae8
	ctx.lr = 0x82A1176C;
	sub_82A0DAE8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a109c0
	ctx.lr = 0x82A11778;
	sub_82A109C0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82a0dae8
	ctx.lr = 0x82A11780;
	sub_82A0DAE8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a109c0
	ctx.lr = 0x82A1178C;
	sub_82A109C0(ctx, base);
	// lwz r11,32(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// cmplwi cr6,r11,255
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 255, ctx.xer);
	// blt cr6,0x82a1179c
	if (ctx.cr6.lt) goto loc_82A1179C;
	// li r11,255
	ctx.r11.s64 = 255;
loc_82A1179C:
	// clrlwi r4,r11,24
	ctx.r4.u64 = ctx.r11.u32 & 0xFF;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a109c0
	ctx.lr = 0x82A117A8;
	sub_82A109C0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f1,76(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 76);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82a10970
	ctx.lr = 0x82A117B4;
	sub_82A10970(ctx, base);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addis r4,r27,1
	ctx.r4.s64 = ctx.r27.s64 + 65536;
	// li r5,132
	ctx.r5.s64 = 132;
	// addi r4,r4,7980
	ctx.r4.s64 = ctx.r4.s64 + 7980;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x82a75220
	ctx.lr = 0x82A117D0;
	sub_82A75220(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r11,r11,132
	ctx.r11.s64 = ctx.r11.s64 + 132;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// bl 0x82a109c0
	ctx.lr = 0x82A117E8;
	sub_82A109C0(ctx, base);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a10a10
	ctx.lr = 0x82A117F4;
	sub_82A10A10(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a109c0
	ctx.lr = 0x82A11800;
	sub_82A109C0(ctx, base);
	// lis r10,8
	ctx.r10.s64 = 524288;
	// lwz r11,24028(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 24028);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r10,r10,62877
	ctx.r10.u64 = ctx.r10.u64 | 62877;
	// lbzx r4,r11,r10
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// bl 0x82a109c0
	ctx.lr = 0x82A11818;
	sub_82A109C0(ctx, base);
	// lis r10,8
	ctx.r10.s64 = 524288;
	// lwz r11,24028(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 24028);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r10,r10,62876
	ctx.r10.u64 = ctx.r10.u64 | 62876;
	// lbzx r4,r11,r10
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// bl 0x82a109c0
	ctx.lr = 0x82A11830;
	sub_82A109C0(ctx, base);
	// lwz r11,80(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 80);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// clrlwi r4,r11,24
	ctx.r4.u64 = ctx.r11.u32 & 0xFF;
	// bl 0x82a109c0
	ctx.lr = 0x82A11840;
	sub_82A109C0(ctx, base);
	// lwz r11,84(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 84);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// clrlwi r4,r11,24
	ctx.r4.u64 = ctx.r11.u32 & 0xFF;
	// bl 0x82a109c0
	ctx.lr = 0x82A11850;
	sub_82A109C0(ctx, base);
	// lwz r27,308(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 308);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,320(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 320);
	// clrlwi r4,r11,24
	ctx.r4.u64 = ctx.r11.u32 & 0xFF;
	// bl 0x82a109c0
	ctx.lr = 0x82A11864;
	sub_82A109C0(ctx, base);
loc_82A11864:
	// li r28,1
	ctx.r28.s64 = 1;
	// stb r28,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r28.u8);
	// b 0x82a11c0c
	goto loc_82A11C0C;
loc_82A11870:
	// addi r11,r1,392
	ctx.r11.s64 = ctx.r1.s64 + 392;
	// std r22,384(r1)
	PPC_STORE_U64(ctx.r1.u32 + 384, ctx.r22.u64);
	// addi r3,r1,384
	ctx.r3.s64 = ctx.r1.s64 + 384;
	// std r22,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r22.u64);
	// bl 0x83178d74
	ctx.lr = 0x82A11884;
	__imp__XamGetActiveDashAppInfo(ctx, base);
	// lwz r11,32(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// li r10,255
	ctx.r10.s64 = 255;
	// cmplwi cr6,r11,255
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 255, ctx.xer);
	// stw r11,324(r1)
	PPC_STORE_U32(ctx.r1.u32 + 324, ctx.r11.u32);
	// blt cr6,0x82a1189c
	if (ctx.cr6.lt) goto loc_82A1189C;
	// stw r10,324(r1)
	PPC_STORE_U32(ctx.r1.u32 + 324, ctx.r10.u32);
loc_82A1189C:
	// lwz r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// cmplwi cr6,r11,255
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 255, ctx.xer);
	// stw r11,320(r1)
	PPC_STORE_U32(ctx.r1.u32 + 320, ctx.r11.u32);
	// blt cr6,0x82a118b0
	if (ctx.cr6.lt) goto loc_82A118B0;
	// stw r10,320(r1)
	PPC_STORE_U32(ctx.r1.u32 + 320, ctx.r10.u32);
loc_82A118B0:
	// lwz r9,392(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 392);
	// li r10,4096
	ctx.r10.s64 = 4096;
	// ld r7,384(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 384);
	// li r8,2048
	ctx.r8.s64 = 2048;
	// li r6,1024
	ctx.r6.s64 = 1024;
	// lwz r29,320(r27)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r27.u32 + 320);
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// lwz r11,24028(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 24028);
	// cntlzw r8,r8
	ctx.r8.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// lfs f31,76(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 76);
	ctx.f31.f64 = double(temp.f32);
	// stw r9,368(r1)
	PPC_STORE_U32(ctx.r1.u32 + 368, ctx.r9.u32);
	// li r5,512
	ctx.r5.s64 = 512;
	// std r7,352(r1)
	PPC_STORE_U64(ctx.r1.u32 + 352, ctx.r7.u64);
	// cntlzw r7,r6
	ctx.r7.u64 = ctx.r6.u32 == 0 ? 32 : __builtin_clz(ctx.r6.u32);
	// li r9,256
	ctx.r9.s64 = 256;
	// subfic r10,r10,18411
	ctx.xer.ca = ctx.r10.u32 <= 18411;
	ctx.r10.s64 = 18411 - ctx.r10.s64;
	// li r6,128
	ctx.r6.s64 = 128;
	// subfic r8,r8,18411
	ctx.xer.ca = ctx.r8.u32 <= 18411;
	ctx.r8.s64 = 18411 - ctx.r8.s64;
	// cntlzw r5,r5
	ctx.r5.u64 = ctx.r5.u32 == 0 ? 32 : __builtin_clz(ctx.r5.u32);
	// li r4,64
	ctx.r4.s64 = 64;
	// subfic r7,r7,18411
	ctx.xer.ca = ctx.r7.u32 <= 18411;
	ctx.r7.s64 = 18411 - ctx.r7.s64;
	// cntlzw r9,r9
	ctx.r9.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// li r3,32
	ctx.r3.s64 = 32;
	// cntlzw r6,r6
	ctx.r6.u64 = ctx.r6.u32 == 0 ? 32 : __builtin_clz(ctx.r6.u32);
	// li r27,16
	ctx.r27.s64 = 16;
	// subfic r5,r5,18411
	ctx.xer.ca = ctx.r5.u32 <= 18411;
	ctx.r5.s64 = 18411 - ctx.r5.s64;
	// cntlzw r4,r4
	ctx.r4.u64 = ctx.r4.u32 == 0 ? 32 : __builtin_clz(ctx.r4.u32);
	// subfic r9,r9,18411
	ctx.xer.ca = ctx.r9.u32 <= 18411;
	ctx.r9.s64 = 18411 - ctx.r9.s64;
	// cntlzw r3,r3
	ctx.r3.u64 = ctx.r3.u32 == 0 ? 32 : __builtin_clz(ctx.r3.u32);
	// rlwinm r7,r7,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// li r26,8
	ctx.r26.s64 = 8;
	// subfic r6,r6,18411
	ctx.xer.ca = ctx.r6.u32 <= 18411;
	ctx.r6.s64 = 18411 - ctx.r6.s64;
	// cntlzw r27,r27
	ctx.r27.u64 = ctx.r27.u32 == 0 ? 32 : __builtin_clz(ctx.r27.u32);
	// subfic r4,r4,18411
	ctx.xer.ca = ctx.r4.u32 <= 18411;
	ctx.r4.s64 = 18411 - ctx.r4.s64;
	// rlwinm r5,r5,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// li r25,4
	ctx.r25.s64 = 4;
	// subfic r3,r3,18411
	ctx.xer.ca = ctx.r3.u32 <= 18411;
	ctx.r3.s64 = 18411 - ctx.r3.s64;
	// cntlzw r26,r26
	ctx.r26.u64 = ctx.r26.u32 == 0 ? 32 : __builtin_clz(ctx.r26.u32);
	// subfic r27,r27,18411
	ctx.xer.ca = ctx.r27.u32 <= 18411;
	ctx.r27.s64 = 18411 - ctx.r27.s64;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// cntlzw r25,r25
	ctx.r25.u64 = ctx.r25.u32 == 0 ? 32 : __builtin_clz(ctx.r25.u32);
	// cntlzw r24,r23
	ctx.r24.u64 = ctx.r23.u32 == 0 ? 32 : __builtin_clz(ctx.r23.u32);
	// lwzx r23,r7,r31
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r31.u32);
	// subfic r26,r26,18411
	ctx.xer.ca = ctx.r26.u32 <= 18411;
	ctx.r26.s64 = 18411 - ctx.r26.s64;
	// rlwinm r6,r6,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r7,r27,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r27,r5,r31
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r31.u32);
	// subfic r25,r25,18411
	ctx.xer.ca = ctx.r25.u32 <= 18411;
	ctx.r25.s64 = 18411 - ctx.r25.s64;
	// rlwinm r4,r4,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// cntlzw r28,r28
	ctx.r28.u64 = ctx.r28.u32 == 0 ? 32 : __builtin_clz(ctx.r28.u32);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r5,r26,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r26,r9,r31
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r31.u32);
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r22,r7,r31
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r31.u32);
	// subfic r24,r24,18411
	ctx.xer.ca = ctx.r24.u32 <= 18411;
	ctx.r24.s64 = 18411 - ctx.r24.s64;
	// rlwinm r9,r25,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r25,r6,r31
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r31.u32);
	// subfic r28,r28,18411
	ctx.xer.ca = ctx.r28.u32 <= 18411;
	ctx.r28.s64 = 18411 - ctx.r28.s64;
	// lwzx r10,r10,r31
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	// rlwinm r3,r3,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r21,r5,r31
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r31.u32);
	// rlwinm r6,r24,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r24,r4,r31
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r31.u32);
	// lwzx r8,r8,r31
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r31.u32);
	// rlwinm r4,r28,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// addis r7,r11,9
	ctx.r7.s64 = ctx.r11.s64 + 589824;
	// lwzx r20,r9,r31
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r31.u32);
	// stw r10,360(r1)
	PPC_STORE_U32(ctx.r1.u32 + 360, ctx.r10.u32);
	// lwzx r28,r3,r31
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r31.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// lwzx r19,r6,r31
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r31.u32);
	// addi r7,r7,-3744
	ctx.r7.s64 = ctx.r7.s64 + -3744;
	// lwzx r31,r4,r31
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r31.u32);
	// stw r8,364(r1)
	PPC_STORE_U32(ctx.r1.u32 + 364, ctx.r8.u32);
	// bl 0x82a0dae8
	ctx.lr = 0x82A119E0;
	sub_82A0DAE8(ctx, base);
	// mr r17,r3
	ctx.r17.u64 = ctx.r3.u64;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x82a0dae8
	ctx.lr = 0x82A119EC;
	sub_82A0DAE8(ctx, base);
	// mr r16,r3
	ctx.r16.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82a0dae8
	ctx.lr = 0x82A119F8;
	sub_82A0DAE8(ctx, base);
	// mr r18,r3
	ctx.r18.u64 = ctx.r3.u64;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x82a0dae8
	ctx.lr = 0x82A11A04;
	sub_82A0DAE8(ctx, base);
	// lwz r30,4(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r15,24(r7)
	ctx.r15.u64 = PPC_LOAD_U32(ctx.r7.u32 + 24);
	// mr r14,r3
	ctx.r14.u64 = ctx.r3.u64;
	// bl 0x83178db4
	ctx.lr = 0x82A11A14;
	__imp__XamNuiIdentityGetSessionId(ctx, base);
	// lwz r8,324(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 324);
	// lwz r7,364(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 364);
	// lis r9,-31964
	ctx.r9.s64 = -2094792704;
	// lwz r10,368(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 368);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r11,r9,29312
	ctx.r11.s64 = ctx.r9.s64 + 29312;
	// stb r18,87(r1)
	PPC_STORE_U8(ctx.r1.u32 + 87, ctx.r18.u8);
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
	// stw r10,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r10.u32);
	// stb r8,111(r1)
	PPC_STORE_U8(ctx.r1.u32 + 111, ctx.r8.u8);
	// addi r3,r11,10536
	ctx.r3.s64 = ctx.r11.s64 + 10536;
	// stw r7,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r7.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// stb r9,231(r1)
	PPC_STORE_U8(ctx.r1.u32 + 231, ctx.r9.u8);
	// clrlwi r6,r15,16
	ctx.r6.u64 = ctx.r15.u32 & 0xFFFF;
	// lwz r11,360(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 360);
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// ld r29,352(r1)
	ctx.r29.u64 = PPC_LOAD_U64(ctx.r1.u32 + 352);
	// mr r10,r14
	ctx.r10.u64 = ctx.r14.u64;
	// lwz r8,320(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 320);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// lwz r18,628(r1)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r1.u32 + 628);
	// clrlwi r8,r8,24
	ctx.r8.u64 = ctx.r8.u32 & 0xFF;
	// stb r16,95(r1)
	PPC_STORE_U8(ctx.r1.u32 + 95, ctx.r16.u8);
	// mr r9,r18
	ctx.r9.u64 = ctx.r18.u64;
	// stb r17,103(r1)
	PPC_STORE_U8(ctx.r1.u32 + 103, ctx.r17.u8);
	// std r29,232(r1)
	PPC_STORE_U64(ctx.r1.u32 + 232, ctx.r29.u64);
	// stw r31,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r31.u32);
	// stw r19,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r19.u32);
	// stw r20,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r20.u32);
	// stw r21,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r21.u32);
	// stw r22,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r22.u32);
	// stw r28,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r28.u32);
	// stw r24,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r24.u32);
	// stw r25,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r25.u32);
	// stw r26,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r26.u32);
	// stw r27,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r27.u32);
	// stw r23,204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 204, ctx.r23.u32);
	// stw r11,220(r1)
	PPC_STORE_U32(ctx.r1.u32 + 220, ctx.r11.u32);
	// bl 0x82a0caf8
	ctx.lr = 0x82A11AB4;
	sub_82A0CAF8(ctx, base);
	// lwz r20,328(r1)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r1.u32 + 328);
	// lwz r29,332(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 332);
	// addis r4,r29,1
	ctx.r4.s64 = ctx.r29.s64 + 65536;
	// lwz r11,24028(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 24028);
	// addi r4,r4,-32128
	ctx.r4.s64 = ctx.r4.s64 + -32128;
	// addis r31,r11,9
	ctx.r31.s64 = ctx.r11.s64 + 589824;
	// addi r31,r31,-272
	ctx.r31.s64 = ctx.r31.s64 + -272;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a1b088
	ctx.lr = 0x82A11AD8;
	sub_82A1B088(ctx, base);
	// lwz r30,612(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 612);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82a11c00
	if (ctx.cr0.lt) goto loc_82A11C00;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// clrlwi r4,r11,24
	ctx.r4.u64 = ctx.r11.u32 & 0xFF;
	// bl 0x82a109c0
	ctx.lr = 0x82A11AF4;
	sub_82A109C0(ctx, base);
	// lis r10,8
	ctx.r10.s64 = 524288;
	// lwz r11,24028(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 24028);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r10,r10,61816
	ctx.r10.u64 = ctx.r10.u64 | 61816;
	// lwzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// clrlwi r4,r11,16
	ctx.r4.u64 = ctx.r11.u32 & 0xFFFF;
	// bl 0x82a108d0
	ctx.lr = 0x82A11B10;
	sub_82A108D0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x82a10920
	ctx.lr = 0x82A11B1C;
	sub_82A10920(ctx, base);
	// lwz r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// cmplwi cr6,r11,255
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 255, ctx.xer);
	// blt cr6,0x82a11b2c
	if (ctx.cr6.lt) goto loc_82A11B2C;
	// li r11,255
	ctx.r11.s64 = 255;
loc_82A11B2C:
	// clrlwi r4,r11,24
	ctx.r4.u64 = ctx.r11.u32 & 0xFF;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a109c0
	ctx.lr = 0x82A11B38;
	sub_82A109C0(ctx, base);
	// mr r4,r18
	ctx.r4.u64 = ctx.r18.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a10920
	ctx.lr = 0x82A11B44;
	sub_82A10920(ctx, base);
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x82a0dae8
	ctx.lr = 0x82A11B4C;
	sub_82A0DAE8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a109c0
	ctx.lr = 0x82A11B58;
	sub_82A109C0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82a0dae8
	ctx.lr = 0x82A11B60;
	sub_82A0DAE8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a109c0
	ctx.lr = 0x82A11B6C;
	sub_82A109C0(ctx, base);
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x82a0dae8
	ctx.lr = 0x82A11B74;
	sub_82A0DAE8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a109c0
	ctx.lr = 0x82A11B80;
	sub_82A109C0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82a0dae8
	ctx.lr = 0x82A11B88;
	sub_82A0DAE8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a109c0
	ctx.lr = 0x82A11B94;
	sub_82A109C0(ctx, base);
	// lwz r11,32(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// cmplwi cr6,r11,255
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 255, ctx.xer);
	// blt cr6,0x82a11ba4
	if (ctx.cr6.lt) goto loc_82A11BA4;
	// li r11,255
	ctx.r11.s64 = 255;
loc_82A11BA4:
	// clrlwi r4,r11,24
	ctx.r4.u64 = ctx.r11.u32 & 0xFF;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a109c0
	ctx.lr = 0x82A11BB0;
	sub_82A109C0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f1,76(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 76);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82a10970
	ctx.lr = 0x82A11BBC;
	sub_82A10970(ctx, base);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addis r4,r29,1
	ctx.r4.s64 = ctx.r29.s64 + 65536;
	// li r5,132
	ctx.r5.s64 = 132;
	// addi r4,r4,7980
	ctx.r4.s64 = ctx.r4.s64 + 7980;
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x82a75220
	ctx.lr = 0x82A11BD8;
	sub_82A75220(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r27,308(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 308);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,132
	ctx.r11.s64 = ctx.r11.s64 + 132;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// lwz r11,320(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 320);
	// clrlwi r4,r11,24
	ctx.r4.u64 = ctx.r11.u32 & 0xFF;
	// bl 0x82a109c0
	ctx.lr = 0x82A11BF8;
	sub_82A109C0(ctx, base);
	// ld r25,376(r1)
	ctx.r25.u64 = PPC_LOAD_U64(ctx.r1.u32 + 376);
	// b 0x82a11864
	goto loc_82A11864;
loc_82A11C00:
	// ld r25,376(r1)
	ctx.r25.u64 = PPC_LOAD_U64(ctx.r1.u32 + 376);
loc_82A11C04:
	// lwz r27,308(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 308);
	// li r28,1
	ctx.r28.s64 = 1;
loc_82A11C0C:
	// lwz r29,316(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 316);
	// li r22,0
	ctx.r22.s64 = 0;
	// lwz r26,620(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 620);
	// li r24,-2
	ctx.r24.s64 = -2;
	// lwz r19,312(r1)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r1.u32 + 312);
	// li r21,-1
	ctx.r21.s64 = -1;
loc_82A11C24:
	// addi r11,r1,400
	ctx.r11.s64 = ctx.r1.s64 + 400;
	// lis r10,2
	ctx.r10.s64 = 131072;
	// cmpldi cr6,r25,0
	ctx.cr6.compare<uint64_t>(ctx.r25.u64, 0, ctx.xer);
	// ori r10,r10,19096
	ctx.r10.u64 = ctx.r10.u64 | 19096;
	// std r22,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r22.u64);
	// std r22,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r22.u64);
	// std r22,16(r11)
	PPC_STORE_U64(ctx.r11.u32 + 16, ctx.r22.u64);
	// stw r22,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r22.u32);
	// stw r28,400(r1)
	PPC_STORE_U32(ctx.r1.u32 + 400, ctx.r28.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r11,404(r1)
	PPC_STORE_U32(ctx.r1.u32 + 404, ctx.r11.u32);
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// stw r11,408(r1)
	PPC_STORE_U32(ctx.r1.u32 + 408, ctx.r11.u32);
	// lwzx r11,r29,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r10.u32);
	// stw r11,412(r1)
	PPC_STORE_U32(ctx.r1.u32 + 412, ctx.r11.u32);
	// stw r18,416(r1)
	PPC_STORE_U32(ctx.r1.u32 + 416, ctx.r18.u32);
	// lwz r11,320(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 320);
	// stw r11,420(r1)
	PPC_STORE_U32(ctx.r1.u32 + 420, ctx.r11.u32);
	// stw r28,424(r1)
	PPC_STORE_U32(ctx.r1.u32 + 424, ctx.r28.u32);
	// bne cr6,0x82a11c78
	if (!ctx.cr6.eq) goto loc_82A11C78;
	// stw r22,424(r1)
	PPC_STORE_U32(ctx.r1.u32 + 424, ctx.r22.u32);
loc_82A11C78:
	// lwz r3,52(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a11c98
	if (ctx.cr6.eq) goto loc_82A11C98;
	// addi r5,r1,400
	ctx.r5.s64 = ctx.r1.s64 + 400;
	// lwz r4,56(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 56);
	// bl 0x82a0c248
	ctx.lr = 0x82A11C90;
	sub_82A0C248(ctx, base);
	// stw r22,52(r30)
	PPC_STORE_U32(ctx.r30.u32 + 52, ctx.r22.u32);
	// stw r22,56(r30)
	PPC_STORE_U32(ctx.r30.u32 + 56, ctx.r22.u32);
loc_82A11C98:
	// lis r11,2
	ctx.r11.s64 = 131072;
	// ori r11,r11,19112
	ctx.r11.u64 = ctx.r11.u64 | 19112;
	// lwzx r11,r29,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r11.u32);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82a11cc0
	if (!ctx.cr6.eq) goto loc_82A11CC0;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r1,400
	ctx.r4.s64 = ctx.r1.s64 + 400;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82a1bbc8
	ctx.lr = 0x82A11CC0;
	sub_82A1BBC8(ctx, base);
loc_82A11CC0:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// rlwinm. r11,r11,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82a11d34
	if (ctx.cr0.eq) goto loc_82A11D34;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x82a11cdc
	if (ctx.cr6.eq) goto loc_82A11CDC;
	// lwz r6,88(r26)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r26.u32 + 88);
	// b 0x82a11ce0
	goto loc_82A11CE0;
loc_82A11CDC:
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
loc_82A11CE0:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r5,320(r27)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r27.u32 + 320);
	// lwz r4,12(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82a11d24
	if (ctx.cr6.eq) goto loc_82A11D24;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82a11d14
	if (ctx.cr6.eq) goto loc_82A11D14;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82a11d4c
	if (!ctx.cr6.eq) goto loc_82A11D4C;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x82a84278
	ctx.lr = 0x82A11D10;
	sub_82A84278(ctx, base);
	// b 0x82a11d4c
	goto loc_82A11D4C;
loc_82A11D14:
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x82a841e8
	ctx.lr = 0x82A11D20;
	sub_82A841E8(ctx, base);
	// b 0x82a11d4c
	goto loc_82A11D4C;
loc_82A11D24:
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x82a84230
	ctx.lr = 0x82A11D30;
	sub_82A84230(ctx, base);
	// b 0x82a11d4c
	goto loc_82A11D4C;
loc_82A11D34:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r4,12(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// bl 0x82a0d898
	ctx.lr = 0x82A11D40;
	sub_82A0D898(ctx, base);
	// li r5,28
	ctx.r5.s64 = 28;
	// addi r4,r1,400
	ctx.r4.s64 = ctx.r1.s64 + 400;
	// bl 0x82a75220
	ctx.lr = 0x82A11D4C;
	sub_82A75220(ctx, base);
loc_82A11D4C:
	// li r5,88
	ctx.r5.s64 = 88;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82fa7cf0
	ctx.lr = 0x82A11D5C;
	sub_82FA7CF0(ctx, base);
	// li r11,254
	ctx.r11.s64 = 254;
	// stw r24,60(r30)
	PPC_STORE_U32(ctx.r30.u32 + 60, ctx.r24.u32);
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// stw r11,72(r30)
	PPC_STORE_U32(ctx.r30.u32 + 72, ctx.r11.u32);
	// stw r24,84(r30)
	PPC_STORE_U32(ctx.r30.u32 + 84, ctx.r24.u32);
	// stw r24,80(r30)
	PPC_STORE_U32(ctx.r30.u32 + 80, ctx.r24.u32);
	// stw r21,36(r30)
	PPC_STORE_U32(ctx.r30.u32 + 36, ctx.r21.u32);
	// stw r21,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r21.u32);
	// beq cr6,0x82a11d88
	if (ctx.cr6.eq) goto loc_82A11D88;
	// stw r22,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r22.u32);
	// stw r22,4(r26)
	PPC_STORE_U32(ctx.r26.u32 + 4, ctx.r22.u32);
loc_82A11D88:
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
loc_82A11D8C:
	// stw r11,24036(r19)
	PPC_STORE_U32(ctx.r19.u32 + 24036, ctx.r11.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r10,24028(r20)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r20.u32 + 24028);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// addis r3,r10,2
	ctx.r3.s64 = ctx.r10.s64 + 131072;
	// addi r3,r3,19120
	ctx.r3.s64 = ctx.r3.s64 + 19120;
	// bl 0x831796f4
	ctx.lr = 0x82A11DAC;
	__imp__KeReleaseMutant(ctx, base);
	// addi r1,r1,592
	ctx.r1.s64 = ctx.r1.s64 + 592;
	// lfd f31,-160(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -160);
	// b 0x82fa7690
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A11DB8"))) PPC_WEAK_FUNC(sub_82A11DB8);
PPC_FUNC_IMPL(__imp__sub_82A11DB8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7658
	ctx.lr = 0x82A11DC0;
	__savegprlr_20(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82a0c9b8
	ctx.lr = 0x82A11DD0;
	sub_82A0C9B8(ctx, base);
	// lis r21,-31963
	ctx.r21.s64 = -2094727168;
	// lwz r31,24028(r21)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r21.u32 + 24028);
	// bl 0x82a74720
	ctx.lr = 0x82A11DDC;
	sub_82A74720(ctx, base);
	// lis r20,-31963
	ctx.r20.s64 = -2094727168;
	// lwz r11,24036(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 24036);
	// subf r11,r11,r3
	ctx.r11.s64 = ctx.r3.s64 - ctx.r11.s64;
	// addic r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r30,r11,r31
	ctx.r30.u64 = ctx.r11.u64 & ctx.r31.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x82a11e04
	if (!ctx.cr6.eq) goto loc_82A11E04;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82a121bc
	goto loc_82A121BC;
loc_82A11E04:
	// lis r11,2
	ctx.r11.s64 = 131072;
	// ori r11,r11,19100
	ctx.r11.u64 = ctx.r11.u64 | 19100;
	// lbzx r11,r30,r11
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + ctx.r11.u32);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82a11e34
	if (ctx.cr0.eq) goto loc_82A11E34;
	// li r10,6
	ctx.r10.s64 = 6;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82A11E20:
	// stw r10,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r10.u32);
	// stw r11,24036(r20)
	PPC_STORE_U32(ctx.r20.u32 + 24036, ctx.r11.u32);
	// lwz r11,24028(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 24028);
	// addis r3,r11,2
	ctx.r3.s64 = ctx.r11.s64 + 131072;
	// b 0x82a121c8
	goto loc_82A121C8;
loc_82A11E34:
	// lis r11,-32761
	ctx.r11.s64 = -2147024896;
	// lis r10,2
	ctx.r10.s64 = 131072;
	// lis r9,2
	ctx.r9.s64 = 131072;
	// addi r31,r30,2512
	ctx.r31.s64 = ctx.r30.s64 + 2512;
	// li r23,2
	ctx.r23.s64 = 2;
	// li r24,0
	ctx.r24.s64 = 0;
	// ori r29,r11,170
	ctx.r29.u64 = ctx.r11.u64 | 170;
	// ori r22,r10,19096
	ctx.r22.u64 = ctx.r10.u64 | 19096;
	// ori r25,r9,19112
	ctx.r25.u64 = ctx.r9.u64 | 19112;
	// li r28,-2
	ctx.r28.s64 = -2;
	// li r27,-1
	ctx.r27.s64 = -1;
loc_82A11E60:
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x82a11fb8
	if (ctx.cr6.eq) goto loc_82A11FB8;
	// lwz r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82a11eac
	if (ctx.cr6.eq) goto loc_82A11EAC;
	// ble cr6,0x82a11f88
	if (!ctx.cr6.gt) goto loc_82A11F88;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// ble cr6,0x82a11e94
	if (!ctx.cr6.gt) goto loc_82A11E94;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x82a11ea0
	if (ctx.cr6.eq) goto loc_82A11EA0;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x82a11f88
	if (!ctx.cr6.eq) goto loc_82A11F88;
loc_82A11E94:
	// lis r5,-32768
	ctx.r5.s64 = -2147483648;
	// ori r5,r5,16388
	ctx.r5.u64 = ctx.r5.u64 | 16388;
	// b 0x82a11ee4
	goto loc_82A11EE4;
loc_82A11EA0:
	// lis r5,-31999
	ctx.r5.s64 = -2097086464;
	// ori r5,r5,8
	ctx.r5.u64 = ctx.r5.u64 | 8;
	// b 0x82a11ee4
	goto loc_82A11EE4;
loc_82A11EAC:
	// lwz r9,12(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
	// addi r10,r30,2348
	ctx.r10.s64 = ctx.r30.s64 + 2348;
loc_82A11EB8:
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r7,r9
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82a11ef4
	if (ctx.cr6.eq) goto loc_82A11EF4;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,88
	ctx.r10.s64 = ctx.r10.s64 + 88;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// blt cr6,0x82a11eb8
	if (ctx.cr6.lt) goto loc_82A11EB8;
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
loc_82A11ED8:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82a11f04
	if (!ctx.cr6.eq) goto loc_82A11F04;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
loc_82A11EE4:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a11138
	ctx.lr = 0x82A11EF0;
	sub_82A11138(ctx, base);
	// b 0x82a11f88
	goto loc_82A11F88;
loc_82A11EF4:
	// mulli r11,r11,88
	ctx.r11.s64 = ctx.r11.s64 * 88;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r11,r11,2336
	ctx.r11.s64 = ctx.r11.s64 + 2336;
	// b 0x82a11ed8
	goto loc_82A11ED8;
loc_82A11F04:
	// lwzx r11,r30,r22
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r22.u32);
	// li r10,-5
	ctx.r10.s64 = -5;
	// lwz r3,52(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// li r7,1
	ctx.r7.s64 = 1;
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
	// stw r9,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r9.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r7,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r7.u32);
	// stw r29,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r29.u32);
	// stw r10,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
	// stw r24,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r24.u32);
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// beq cr6,0x82a11f44
	if (ctx.cr6.eq) goto loc_82A11F44;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// lwz r4,56(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// bl 0x82a0c248
	ctx.lr = 0x82A11F44;
	sub_82A0C248(ctx, base);
loc_82A11F44:
	// lwzx r11,r30,r25
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r25.u32);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82a11f64
	if (!ctx.cr6.eq) goto loc_82A11F64;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a1bbc8
	ctx.lr = 0x82A11F64;
	sub_82A1BBC8(ctx, base);
loc_82A11F64:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm. r11,r11,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82a11f88
	if (!ctx.cr0.eq) goto loc_82A11F88;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x82a0d898
	ctx.lr = 0x82A11F7C;
	sub_82A0D898(ctx, base);
	// li r5,28
	ctx.r5.s64 = 28;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x82a75220
	ctx.lr = 0x82A11F88;
	sub_82A75220(ctx, base);
loc_82A11F88:
	// li r5,88
	ctx.r5.s64 = 88;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82fa7cf0
	ctx.lr = 0x82A11F98;
	sub_82FA7CF0(ctx, base);
	// li r11,254
	ctx.r11.s64 = 254;
	// stw r28,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r28.u32);
	// stw r11,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r11.u32);
	// stw r28,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r28.u32);
	// stw r28,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r28.u32);
	// stw r27,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r27.u32);
	// stw r27,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r27.u32);
	// stw r24,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r24.u32);
loc_82A11FB8:
	// addic. r23,r23,-1
	ctx.xer.ca = ctx.r23.u32 > 0;
	ctx.r23.s64 = ctx.r23.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// addi r31,r31,96
	ctx.r31.s64 = ctx.r31.s64 + 96;
	// bne 0x82a11e60
	if (!ctx.cr0.eq) goto loc_82A11E60;
	// lis r11,2
	ctx.r11.s64 = 131072;
	// ori r11,r11,19104
	ctx.r11.u64 = ctx.r11.u64 | 19104;
	// lbzx r11,r30,r11
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + ctx.r11.u32);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82a11fe8
	if (ctx.cr0.eq) goto loc_82A11FE8;
	// li r10,10
	ctx.r10.s64 = 10;
loc_82A11FDC:
	// stw r24,4(r26)
	PPC_STORE_U32(ctx.r26.u32 + 4, ctx.r24.u32);
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
	// b 0x82a11e20
	goto loc_82A11E20;
loc_82A11FE8:
	// lis r11,2
	ctx.r11.s64 = 131072;
	// ori r11,r11,19102
	ctx.r11.u64 = ctx.r11.u64 | 19102;
	// lbzx r11,r30,r11
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + ctx.r11.u32);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82a12004
	if (ctx.cr0.eq) goto loc_82A12004;
	// li r10,7
	ctx.r10.s64 = 7;
	// b 0x82a11fdc
	goto loc_82A11FDC;
loc_82A12004:
	// lis r11,8
	ctx.r11.s64 = 524288;
	// lwz r7,24028(r21)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r21.u32 + 24028);
	// ori r11,r11,63204
	ctx.r11.u64 = ctx.r11.u64 | 63204;
	// lwzx r11,r7,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r11.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82a12024
	if (ctx.cr6.eq) goto loc_82A12024;
	// li r10,8
	ctx.r10.s64 = 8;
	// b 0x82a11fdc
	goto loc_82A11FDC;
loc_82A12024:
	// lwzx r11,r30,r25
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r25.u32);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x82a12038
	if (!ctx.cr6.eq) goto loc_82A12038;
	// li r10,9
	ctx.r10.s64 = 9;
	// b 0x82a11fdc
	goto loc_82A11FDC;
loc_82A12038:
	// lwz r9,20(r26)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r26.u32 + 20);
	// lis r11,2
	ctx.r11.s64 = 131072;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// ori r5,r11,19103
	ctx.r5.u64 = ctx.r11.u64 | 19103;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r8,r24
	ctx.r8.u64 = ctx.r24.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82a120f0
	if (ctx.cr6.eq) goto loc_82A120F0;
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
	// addi r10,r30,2348
	ctx.r10.s64 = ctx.r30.s64 + 2348;
loc_82A12060:
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82a120b8
	if (ctx.cr6.eq) goto loc_82A120B8;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,88
	ctx.r10.s64 = ctx.r10.s64 + 88;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// blt cr6,0x82a12060
	if (ctx.cr6.lt) goto loc_82A12060;
	// mr r8,r24
	ctx.r8.u64 = ctx.r24.u64;
loc_82A12080:
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82a120f0
	if (ctx.cr6.eq) goto loc_82A120F0;
	// lwz r11,4(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// rlwinm. r11,r11,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82a120a4
	if (!ctx.cr0.eq) goto loc_82A120A4;
	// lbzx r11,r30,r5
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + ctx.r5.u32);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
	// bne 0x82a120a8
	if (!ctx.cr0.eq) goto loc_82A120A8;
loc_82A120A4:
	// li r11,1
	ctx.r11.s64 = 1;
loc_82A120A8:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82a120c8
	if (!ctx.cr0.eq) goto loc_82A120C8;
	// mr r8,r24
	ctx.r8.u64 = ctx.r24.u64;
	// b 0x82a120f0
	goto loc_82A120F0;
loc_82A120B8:
	// mulli r11,r11,88
	ctx.r11.s64 = ctx.r11.s64 * 88;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r8,r11,2336
	ctx.r8.s64 = ctx.r11.s64 + 2336;
	// b 0x82a12080
	goto loc_82A12080;
loc_82A120C8:
	// lis r11,8
	ctx.r11.s64 = 524288;
	// lwz r10,44(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 44);
	// lwzx r9,r30,r22
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r22.u32);
	// ori r11,r11,61812
	ctx.r11.u64 = ctx.r11.u64 | 61812;
	// subf r10,r10,r9
	ctx.r10.s64 = ctx.r9.s64 - ctx.r10.s64;
	// lwzx r11,r7,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r11.u32);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82a120f0
	if (!ctx.cr6.lt) goto loc_82A120F0;
	// mr r4,r8
	ctx.r4.u64 = ctx.r8.u64;
	// li r6,1
	ctx.r6.s64 = 1;
loc_82A120F0:
	// clrlwi. r11,r6,24
	ctx.r11.u64 = ctx.r6.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82a12160
	if (!ctx.cr0.eq) goto loc_82A12160;
	// mr r9,r24
	ctx.r9.u64 = ctx.r24.u64;
	// addi r11,r30,2336
	ctx.r11.s64 = ctx.r30.s64 + 2336;
loc_82A12100:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82a12140
	if (ctx.cr6.eq) goto loc_82A12140;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm. r10,r10,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82a1212c
	if (!ctx.cr0.eq) goto loc_82A1212C;
	// lbzx r10,r30,r5
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + ctx.r5.u32);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// mr r10,r24
	ctx.r10.u64 = ctx.r24.u64;
	// bne 0x82a12130
	if (!ctx.cr0.eq) goto loc_82A12130;
loc_82A1212C:
	// li r10,1
	ctx.r10.s64 = 1;
loc_82A12130:
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82a12140
	if (ctx.cr0.eq) goto loc_82A12140;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x82a12154
	if (!ctx.cr6.eq) goto loc_82A12154;
loc_82A12140:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,88
	ctx.r11.s64 = ctx.r11.s64 + 88;
	// cmplwi cr6,r9,2
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 2, ctx.xer);
	// blt cr6,0x82a12100
	if (ctx.cr6.lt) goto loc_82A12100;
	// b 0x82a12160
	goto loc_82A12160;
loc_82A12154:
	// lwzx r11,r30,r22
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r22.u32);
	// li r6,1
	ctx.r6.s64 = 1;
	// stw r11,44(r26)
	PPC_STORE_U32(ctx.r26.u32 + 44, ctx.r11.u32);
loc_82A12160:
	// clrlwi. r11,r6,24
	ctx.r11.u64 = ctx.r6.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82a12178
	if (!ctx.cr0.eq) goto loc_82A12178;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82a12178
	if (ctx.cr6.eq) goto loc_82A12178;
	// mr r4,r8
	ctx.r4.u64 = ctx.r8.u64;
	// li r6,1
	ctx.r6.s64 = 1;
loc_82A12178:
	// clrlwi. r11,r6,24
	ctx.r11.u64 = ctx.r6.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82a12190
	if (ctx.cr0.eq) goto loc_82A12190;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a0e9a0
	ctx.lr = 0x82A1218C;
	sub_82A0E9A0(ctx, base);
	// b 0x82a121b8
	goto loc_82A121B8;
loc_82A12190:
	// lis r11,2
	ctx.r11.s64 = 131072;
	// ori r11,r11,19101
	ctx.r11.u64 = ctx.r11.u64 | 19101;
	// lbzx r11,r30,r11
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + ctx.r11.u32);
	// stw r24,4(r26)
	PPC_STORE_U32(ctx.r26.u32 + 4, ctx.r24.u32);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82a121b4
	if (ctx.cr0.eq) goto loc_82A121B4;
	// li r11,5
	ctx.r11.s64 = 5;
	// stw r11,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r11.u32);
	// b 0x82a121b8
	goto loc_82A121B8;
loc_82A121B4:
	// stw r24,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r24.u32);
loc_82A121B8:
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
loc_82A121BC:
	// lwz r10,24028(r21)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r21.u32 + 24028);
	// stw r11,24036(r20)
	PPC_STORE_U32(ctx.r20.u32 + 24036, ctx.r11.u32);
	// addis r3,r10,2
	ctx.r3.s64 = ctx.r10.s64 + 131072;
loc_82A121C8:
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r3,19120
	ctx.r3.s64 = ctx.r3.s64 + 19120;
	// bl 0x831796f4
	ctx.lr = 0x82A121DC;
	__imp__KeReleaseMutant(ctx, base);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x82fa76a8
	__restgprlr_20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A121E4"))) PPC_WEAK_FUNC(sub_82A121E4);
PPC_FUNC_IMPL(__imp__sub_82A121E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A121E8"))) PPC_WEAK_FUNC(sub_82A121E8);
PPC_FUNC_IMPL(__imp__sub_82A121E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7668
	ctx.lr = 0x82A121F0;
	__savegprlr_24(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82a0c9b8
	ctx.lr = 0x82A12200;
	sub_82A0C9B8(ctx, base);
	// lis r25,-31963
	ctx.r25.s64 = -2094727168;
	// lwz r31,24028(r25)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r25.u32 + 24028);
	// bl 0x82a74720
	ctx.lr = 0x82A1220C;
	sub_82A74720(ctx, base);
	// lis r24,-31963
	ctx.r24.s64 = -2094727168;
	// lwz r11,24036(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 24036);
	// subf r11,r11,r3
	ctx.r11.s64 = ctx.r3.s64 - ctx.r11.s64;
	// addic r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r29,r11,r31
	ctx.r29.u64 = ctx.r11.u64 & ctx.r31.u64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x82a1225c
	if (!ctx.cr6.eq) goto loc_82A1225C;
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r10,24028(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 24028);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r11,24036(r24)
	PPC_STORE_U32(ctx.r24.u32 + 24036, ctx.r11.u32);
	// addis r3,r10,2
	ctx.r3.s64 = ctx.r10.s64 + 131072;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r3,19120
	ctx.r3.s64 = ctx.r3.s64 + 19120;
	// bl 0x831796f4
	ctx.lr = 0x82A12250;
	__imp__KeReleaseMutant(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_82A12254:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82fa76b8
	__restgprlr_24(ctx, base);
	return;
loc_82A1225C:
	// li r26,0
	ctx.r26.s64 = 0;
	// lwz r9,20(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// addi r11,r29,2524
	ctx.r11.s64 = ctx.r29.s64 + 2524;
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
loc_82A1226C:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82a122c4
	if (ctx.cr6.eq) goto loc_82A122C4;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,96
	ctx.r11.s64 = ctx.r11.s64 + 96;
	// cmplwi cr6,r10,2
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 2, ctx.xer);
	// blt cr6,0x82a1226c
	if (ctx.cr6.lt) goto loc_82A1226C;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
loc_82A1228C:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82a122cc
	if (ctx.cr0.eq) goto loc_82A122CC;
loc_82A12294:
	// mr r31,r26
	ctx.r31.u64 = ctx.r26.u64;
loc_82A12298:
	// stw r26,24036(r24)
	PPC_STORE_U32(ctx.r24.u32 + 24036, ctx.r26.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r10,24028(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 24028);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// addis r3,r10,2
	ctx.r3.s64 = ctx.r10.s64 + 131072;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// addi r3,r3,19120
	ctx.r3.s64 = ctx.r3.s64 + 19120;
	// bl 0x831796f4
	ctx.lr = 0x82A122BC;
	__imp__KeReleaseMutant(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x82a12254
	goto loc_82A12254;
loc_82A122C4:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82a1228c
	goto loc_82A1228C;
loc_82A122CC:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lis r10,2
	ctx.r10.s64 = 131072;
	// not r11,r11
	ctx.r11.u64 = ~ctx.r11.u64;
	// ori r27,r10,19112
	ctx.r27.u64 = ctx.r10.u64 | 19112;
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82a124bc
	if (!ctx.cr0.eq) goto loc_82A124BC;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// addi r10,r29,2348
	ctx.r10.s64 = ctx.r29.s64 + 2348;
loc_82A122EC:
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82a12394
	if (ctx.cr6.eq) goto loc_82A12394;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,88
	ctx.r10.s64 = ctx.r10.s64 + 88;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// blt cr6,0x82a122ec
	if (ctx.cr6.lt) goto loc_82A122EC;
	// mr r31,r26
	ctx.r31.u64 = ctx.r26.u64;
loc_82A1230C:
	// lis r11,2
	ctx.r11.s64 = 131072;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// ori r11,r11,19096
	ctx.r11.u64 = ctx.r11.u64 | 19096;
	// cmpwi cr6,r7,4
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 4, ctx.xer);
	// std r26,0(r8)
	PPC_STORE_U64(ctx.r8.u32 + 0, ctx.r26.u64);
	// lwzx r11,r29,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r11.u32);
	// std r26,8(r8)
	PPC_STORE_U64(ctx.r8.u32 + 8, ctx.r26.u64);
	// std r26,16(r8)
	PPC_STORE_U64(ctx.r8.u32 + 16, ctx.r26.u64);
	// stw r26,24(r8)
	PPC_STORE_U32(ctx.r8.u32 + 24, ctx.r26.u32);
	// stw r9,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r9.u32);
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// bne cr6,0x82a123a4
	if (!ctx.cr6.eq) goto loc_82A123A4;
	// li r9,2
	ctx.r9.s64 = 2;
	// lwz r10,24028(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 24028);
	// lis r11,8
	ctx.r11.s64 = 524288;
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// lis r9,36
	ctx.r9.s64 = 2359296;
	// ori r11,r11,63168
	ctx.r11.u64 = ctx.r11.u64 | 63168;
	// ori r9,r9,45536
	ctx.r9.u64 = ctx.r9.u64 | 45536;
	// li r8,200
	ctx.r8.s64 = 200;
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwzx r11,r11,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// mulli r11,r11,100
	ctx.r11.s64 = ctx.r11.s64 * 100;
	// divwu r11,r11,r8
	ctx.r11.u32 = ctx.r11.u32 / ctx.r8.u32;
	// cmplwi cr6,r11,100
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 100, ctx.xer);
	// blt cr6,0x82a12384
	if (ctx.cr6.lt) goto loc_82A12384;
	// li r11,100
	ctx.r11.s64 = 100;
loc_82A12384:
	// lwz r10,88(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 88);
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// stw r10,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
	// b 0x82a123b0
	goto loc_82A123B0;
loc_82A12394:
	// mulli r11,r11,88
	ctx.r11.s64 = ctx.r11.s64 * 88;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// addi r31,r11,2336
	ctx.r31.s64 = ctx.r11.s64 + 2336;
	// b 0x82a1230c
	goto loc_82A1230C;
loc_82A123A4:
	// lwz r11,88(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 88);
	// stw r26,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r26.u32);
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
loc_82A123B0:
	// lwz r3,52(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// addi r28,r30,88
	ctx.r28.s64 = ctx.r30.s64 + 88;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a123cc
	if (ctx.cr6.eq) goto loc_82A123CC;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// lwz r4,56(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// bl 0x82a0c248
	ctx.lr = 0x82A123CC;
	sub_82A0C248(ctx, base);
loc_82A123CC:
	// lwzx r11,r29,r27
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r27.u32);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82a123ec
	if (!ctx.cr6.eq) goto loc_82A123EC;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82a1bbc8
	ctx.lr = 0x82A123EC;
	sub_82A1BBC8(ctx, base);
loc_82A123EC:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm. r11,r11,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82a12410
	if (!ctx.cr0.eq) goto loc_82A12410;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r4,20(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// bl 0x82a0d898
	ctx.lr = 0x82A12404;
	sub_82A0D898(ctx, base);
	// li r5,28
	ctx.r5.s64 = 28;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// bl 0x82a75220
	ctx.lr = 0x82A12410;
	sub_82A75220(ctx, base);
loc_82A12410:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82a124f0
	if (ctx.cr6.eq) goto loc_82A124F0;
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// lwz r10,48(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	// stw r10,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r10.u32);
	// lwz r10,72(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 72);
	// stw r10,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r10.u32);
	// lwz r10,68(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 68);
	// stw r10,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r10.u32);
	// lfs f0,60(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 60);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,76(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 76, temp.u32);
	// stw r9,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r9.u32);
	// beq cr6,0x82a12478
	if (ctx.cr6.eq) goto loc_82A12478;
	// lwz r10,52(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82a12474
	if (!ctx.cr6.gt) goto loc_82A12474;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// b 0x82a12478
	goto loc_82A12478;
loc_82A12474:
	// stw r26,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r26.u32);
loc_82A12478:
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82a12490
	if (ctx.cr6.eq) goto loc_82A12490;
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
loc_82A12490:
	// lis r11,1
	ctx.r11.s64 = 65536;
	// lwz r10,16(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// li r5,132
	ctx.r5.s64 = 132;
	// ori r11,r11,8112
	ctx.r11.u64 = ctx.r11.u64 | 8112;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mullw r11,r10,r11
	ctx.r11.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// addis r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 65536;
	// addi r3,r3,10684
	ctx.r3.s64 = ctx.r3.s64 + 10684;
	// bl 0x82a75220
	ctx.lr = 0x82A124B8;
	sub_82A75220(ctx, base);
	// b 0x82a124f0
	goto loc_82A124F0;
loc_82A124BC:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82a124f0
	if (ctx.cr6.eq) goto loc_82A124F0;
	// lwz r11,220(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 220);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmpwi cr6,r11,-5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -5, ctx.xer);
	// bne cr6,0x82a124e8
	if (!ctx.cr6.eq) goto loc_82A124E8;
	// lis r5,-32768
	ctx.r5.s64 = -2147483648;
	// ori r5,r5,16388
	ctx.r5.u64 = ctx.r5.u64 | 16388;
	// b 0x82a124ec
	goto loc_82A124EC;
loc_82A124E8:
	// li r5,0
	ctx.r5.s64 = 0;
loc_82A124EC:
	// bl 0x82a11138
	ctx.lr = 0x82A124F0;
	sub_82A11138(ctx, base);
loc_82A124F0:
	// lwzx r10,r29,r27
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r27.u32);
	// li r11,-1
	ctx.r11.s64 = -1;
	// mr r9,r26
	ctx.r9.u64 = ctx.r26.u64;
	// addi r10,r10,-2
	ctx.r10.s64 = ctx.r10.s64 + -2;
	// addi r8,r29,2336
	ctx.r8.s64 = ctx.r29.s64 + 2336;
	// subfic r10,r10,0
	ctx.xer.ca = ctx.r10.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r10.s64;
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 & ctx.r11.u64;
loc_82A12510:
	// lwz r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82a12530
	if (!ctx.cr6.eq) goto loc_82A12530;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r8,r8,88
	ctx.r8.s64 = ctx.r8.s64 + 88;
	// cmplwi cr6,r9,2
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 2, ctx.xer);
	// blt cr6,0x82a12510
	if (ctx.cr6.lt) goto loc_82A12510;
	// b 0x82a12534
	goto loc_82A12534;
loc_82A12530:
	// mr r31,r26
	ctx.r31.u64 = ctx.r26.u64;
loc_82A12534:
	// cmpwi cr6,r31,-1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, -1, ctx.xer);
	// bne cr6,0x82a12298
	if (!ctx.cr6.eq) goto loc_82A12298;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// addi r10,r29,2512
	ctx.r10.s64 = ctx.r29.s64 + 2512;
loc_82A12544:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x82a12294
	if (!ctx.cr6.eq) goto loc_82A12294;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,96
	ctx.r10.s64 = ctx.r10.s64 + 96;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// blt cr6,0x82a12544
	if (ctx.cr6.lt) goto loc_82A12544;
	// b 0x82a12298
	goto loc_82A12298;
}

__attribute__((alias("__imp__sub_82A12564"))) PPC_WEAK_FUNC(sub_82A12564);
PPC_FUNC_IMPL(__imp__sub_82A12564) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A12568"))) PPC_WEAK_FUNC(sub_82A12568);
PPC_FUNC_IMPL(__imp__sub_82A12568) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa765c
	ctx.lr = 0x82A12570;
	__savegprlr_21(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31963
	ctx.r31.s64 = -2094727168;
	// lis r11,8
	ctx.r11.s64 = 524288;
	// lis r10,8
	ctx.r10.s64 = 524288;
	// ori r24,r11,62880
	ctx.r24.u64 = ctx.r11.u64 | 62880;
	// ori r21,r10,63168
	ctx.r21.u64 = ctx.r10.u64 | 63168;
	// lwz r11,24028(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24028);
	// li r22,0
	ctx.r22.s64 = 0;
	// lis r9,2
	ctx.r9.s64 = 131072;
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// ori r27,r9,19120
	ctx.r27.u64 = ctx.r9.u64 | 19120;
	// lis r28,-31963
	ctx.r28.s64 = -2094727168;
	// lwzx r10,r11,r24
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r24.u32);
	// mr r25,r22
	ctx.r25.u64 = ctx.r22.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// ble cr6,0x82a126d4
	if (!ctx.cr6.gt) goto loc_82A126D4;
	// mr r26,r22
	ctx.r26.u64 = ctx.r22.u64;
loc_82A125B4:
	// add r11,r26,r11
	ctx.r11.u64 = ctx.r26.u64 + ctx.r11.u64;
	// addis r11,r11,9
	ctx.r11.s64 = ctx.r11.s64 + 589824;
	// addi r11,r11,-2652
	ctx.r11.s64 = ctx.r11.s64 + -2652;
	// addi r4,r11,8
	ctx.r4.s64 = ctx.r11.s64 + 8;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r29,16(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r30,8(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82A125DC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82a126bc
	if (!ctx.cr0.eq) goto loc_82A126BC;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x82a12638
	if (ctx.cr6.eq) goto loc_82A12638;
	// cmpwi cr6,r30,2
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 2, ctx.xer);
	// bne cr6,0x82a126bc
	if (!ctx.cr6.eq) goto loc_82A126BC;
	// lwz r11,24028(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24028);
	// lis r10,15
	ctx.r10.s64 = 983040;
	// ori r10,r10,18960
	ctx.r10.u64 = ctx.r10.u64 | 18960;
	// lwzx r4,r11,r21
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r21.u32);
	// lwzx r11,r4,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r10.u32);
	// cmplwi cr6,r11,200
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 200, ctx.xer);
	// blt cr6,0x82a12638
	if (ctx.cr6.lt) goto loc_82A12638;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82a20170
	ctx.lr = 0x82A12618;
	sub_82A20170(ctx, base);
	// lwz r11,4(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 4);
	// li r5,0
	ctx.r5.s64 = 0;
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// stw r11,4(r23)
	PPC_STORE_U32(ctx.r23.u32 + 4, ctx.r11.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82a11138
	ctx.lr = 0x82A12634;
	sub_82A11138(ctx, base);
	// b 0x82a126bc
	goto loc_82A126BC;
loc_82A12638:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82a0c9b8
	ctx.lr = 0x82A12640;
	sub_82A0C9B8(ctx, base);
	// lwz r30,24028(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24028);
	// bl 0x82a74720
	ctx.lr = 0x82A12648;
	sub_82A74720(ctx, base);
	// lwz r11,24036(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 24036);
	// subf r11,r11,r3
	ctx.r11.s64 = ctx.r3.s64 - ctx.r11.s64;
	// addic r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r3,r11,r30
	ctx.r3.u64 = ctx.r11.u64 & ctx.r30.u64;
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a12704
	if (ctx.cr6.eq) goto loc_82A12704;
	// addi r10,r3,2348
	ctx.r10.s64 = ctx.r3.s64 + 2348;
loc_82A1266C:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r9,r29
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x82a12724
	if (ctx.cr6.eq) goto loc_82A12724;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,88
	ctx.r10.s64 = ctx.r10.s64 + 88;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// blt cr6,0x82a1266c
	if (ctx.cr6.lt) goto loc_82A1266C;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
loc_82A1268C:
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82a1269c
	if (ctx.cr6.eq) goto loc_82A1269C;
	// li r5,2
	ctx.r5.s64 = 2;
	// bl 0x82a0e858
	ctx.lr = 0x82A1269C;
	sub_82A0E858(ctx, base);
loc_82A1269C:
	// stw r22,24036(r28)
	PPC_STORE_U32(ctx.r28.u32 + 24036, ctx.r22.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r10,24028(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24028);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// add r3,r10,r27
	ctx.r3.u64 = ctx.r10.u64 + ctx.r27.u64;
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
	// bl 0x831796f4
	ctx.lr = 0x82A126BC;
	__imp__KeReleaseMutant(ctx, base);
loc_82A126BC:
	// lwz r11,24028(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24028);
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// addi r26,r26,36
	ctx.r26.s64 = ctx.r26.s64 + 36;
	// lwzx r10,r11,r24
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r24.u32);
	// cmplw cr6,r25,r10
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82a125b4
	if (ctx.cr6.lt) goto loc_82A125B4;
loc_82A126D4:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82a0c9b8
	ctx.lr = 0x82A126DC;
	sub_82A0C9B8(ctx, base);
	// lwz r30,24028(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24028);
	// bl 0x82a74720
	ctx.lr = 0x82A126E4;
	sub_82A74720(ctx, base);
	// lwz r11,24036(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 24036);
	// subf r11,r11,r3
	ctx.r11.s64 = ctx.r3.s64 - ctx.r11.s64;
	// addic r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 & ctx.r30.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82a12734
	if (!ctx.cr6.eq) goto loc_82A12734;
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
loc_82A12704:
	// stw r11,24036(r28)
	PPC_STORE_U32(ctx.r28.u32 + 24036, ctx.r11.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r10,24028(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24028);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// add r3,r10,r27
	ctx.r3.u64 = ctx.r10.u64 + ctx.r27.u64;
	// bl 0x831796f4
	ctx.lr = 0x82A12720;
	__imp__KeReleaseMutant(ctx, base);
	// b 0x82a127dc
	goto loc_82A127DC;
loc_82A12724:
	// mulli r11,r11,88
	ctx.r11.s64 = ctx.r11.s64 * 88;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r4,r11,2336
	ctx.r4.s64 = ctx.r11.s64 + 2336;
	// b 0x82a1268c
	goto loc_82A1268C;
loc_82A12734:
	// addis r30,r11,2
	ctx.r30.s64 = ctx.r11.s64 + 131072;
	// addi r30,r30,19108
	ctx.r30.s64 = ctx.r30.s64 + 19108;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82a127b4
	if (ctx.cr6.eq) goto loc_82A127B4;
	// mr r10,r22
	ctx.r10.u64 = ctx.r22.u64;
	// addi r11,r11,2564
	ctx.r11.s64 = ctx.r11.s64 + 2564;
loc_82A12750:
	// lwz r9,-52(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + -52);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82a12768
	if (ctx.cr6.eq) goto loc_82A12768;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82a127b4
	if (!ctx.cr6.eq) goto loc_82A127B4;
loc_82A12768:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,96
	ctx.r11.s64 = ctx.r11.s64 + 96;
	// cmplwi cr6,r10,2
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 2, ctx.xer);
	// blt cr6,0x82a12750
	if (ctx.cr6.lt) goto loc_82A12750;
	// lwz r11,24028(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24028);
	// add r11,r11,r21
	ctx.r11.u64 = ctx.r11.u64 + ctx.r21.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82a12798
	if (ctx.cr6.eq) goto loc_82A12798;
	// li r4,0
	ctx.r4.s64 = 0;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// bl 0x82a174d0
	ctx.lr = 0x82A12798;
	sub_82A174D0(ctx, base);
loc_82A12798:
	// stw r22,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r22.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r11,24028(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24028);
	// addis r3,r11,9
	ctx.r3.s64 = ctx.r11.s64 + 589824;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r3,-2396
	ctx.r3.s64 = ctx.r3.s64 + -2396;
	// bl 0x831792b4
	ctx.lr = 0x82A127B4;
	__imp__KeSetEvent(ctx, base);
loc_82A127B4:
	// stw r22,24036(r28)
	PPC_STORE_U32(ctx.r28.u32 + 24036, ctx.r22.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r10,24028(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24028);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// add r3,r10,r27
	ctx.r3.u64 = ctx.r10.u64 + ctx.r27.u64;
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
	// bl 0x831796f4
	ctx.lr = 0x82A127D4;
	__imp__KeReleaseMutant(ctx, base);
	// lwz r11,24028(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24028);
	// stwx r22,r11,r24
	PPC_STORE_U32(ctx.r11.u32 + ctx.r24.u32, ctx.r22.u32);
loc_82A127DC:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82fa76ac
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A127E4"))) PPC_WEAK_FUNC(sub_82A127E4);
PPC_FUNC_IMPL(__imp__sub_82A127E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A127E8"))) PPC_WEAK_FUNC(sub_82A127E8);
PPC_FUNC_IMPL(__imp__sub_82A127E8) {
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
	// li r31,0
	ctx.r31.s64 = 0;
	// li r5,28480
	ctx.r5.s64 = 28480;
	// stw r31,28496(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28496, ctx.r31.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r31,28480(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28480, ctx.r31.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82a75988
	ctx.lr = 0x82A12818;
	sub_82A75988(ctx, base);
	// stw r31,28496(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28496, ctx.r31.u32);
	// stw r31,28480(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28480, ctx.r31.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r5,28480
	ctx.r5.s64 = 28480;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82a75988
	ctx.lr = 0x82A12830;
	sub_82A75988(ctx, base);
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

__attribute__((alias("__imp__sub_82A1284C"))) PPC_WEAK_FUNC(sub_82A1284C);
PPC_FUNC_IMPL(__imp__sub_82A1284C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A12850"))) PPC_WEAK_FUNC(sub_82A12850);
PPC_FUNC_IMPL(__imp__sub_82A12850) {
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
	// bl 0x82a18d50
	ctx.lr = 0x82A1286C;
	sub_82A18D50(ctx, base);
	// addi r3,r31,4896
	ctx.r3.s64 = ctx.r31.s64 + 4896;
	// bl 0x82a127e8
	ctx.lr = 0x82A12874;
	sub_82A127E8(ctx, base);
	// addis r30,r31,1
	ctx.r30.s64 = ctx.r31.s64 + 65536;
	// addi r30,r30,-32128
	ctx.r30.s64 = ctx.r30.s64 + -32128;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a10ac8
	ctx.lr = 0x82A12884;
	sub_82A10AC8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a10a60
	ctx.lr = 0x82A1288C;
	sub_82A10A60(ctx, base);
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

__attribute__((alias("__imp__sub_82A128A8"))) PPC_WEAK_FUNC(sub_82A128A8);
PPC_FUNC_IMPL(__imp__sub_82A128A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x82A128B0;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,0
	ctx.r11.s64 = 0;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// ori r11,r11,40080
	ctx.r11.u64 = ctx.r11.u64 | 40080;
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// mr r7,r5
	ctx.r7.u64 = ctx.r5.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwzx r4,r31,r11
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// bl 0x82a203d0
	ctx.lr = 0x82A128E4;
	sub_82A203D0(ctx, base);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a0d420
	ctx.lr = 0x82A128F8;
	sub_82A0D420(ctx, base);
	// lis r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// ori r11,r11,40084
	ctx.r11.u64 = ctx.r11.u64 | 40084;
	// stwx r10,r31,r11
	PPC_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.r10.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A12910"))) PPC_WEAK_FUNC(sub_82A12910);
PPC_FUNC_IMPL(__imp__sub_82A12910) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x82A12918;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31963
	ctx.r31.s64 = -2094727168;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lwz r11,24028(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24028);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a129a0
	if (ctx.cr6.eq) goto loc_82A129A0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82a0c9b8
	ctx.lr = 0x82A12938;
	sub_82A0C9B8(ctx, base);
	// lwz r29,24028(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24028);
	// bl 0x82a74720
	ctx.lr = 0x82A12940;
	sub_82A74720(ctx, base);
	// lis r30,-31963
	ctx.r30.s64 = -2094727168;
	// lwz r11,24036(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24036);
	// subf r11,r11,r3
	ctx.r11.s64 = ctx.r3.s64 - ctx.r11.s64;
	// addic r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r3,r11,r29
	ctx.r3.u64 = ctx.r11.u64 & ctx.r29.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a1297c
	if (ctx.cr6.eq) goto loc_82A1297C;
	// lis r11,2
	ctx.r11.s64 = 131072;
	// ori r11,r11,19116
	ctx.r11.u64 = ctx.r11.u64 | 19116;
	// lwzx r11,r3,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r11.u32);
	// rlwinm. r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82a1297c
	if (!ctx.cr0.eq) goto loc_82A1297C;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x82a10c80
	ctx.lr = 0x82A1297C;
	sub_82A10C80(ctx, base);
loc_82A1297C:
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r10,24028(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24028);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r11,24036(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24036, ctx.r11.u32);
	// addis r3,r10,2
	ctx.r3.s64 = ctx.r10.s64 + 131072;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r3,19120
	ctx.r3.s64 = ctx.r3.s64 + 19120;
	// bl 0x831796f4
	ctx.lr = 0x82A129A0;
	__imp__KeReleaseMutant(ctx, base);
loc_82A129A0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A129A8"))) PPC_WEAK_FUNC(sub_82A129A8);
PPC_FUNC_IMPL(__imp__sub_82A129A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x82A129B0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31963
	ctx.r31.s64 = -2094727168;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lwz r11,24028(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24028);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a12a38
	if (ctx.cr6.eq) goto loc_82A12A38;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82a0c9b8
	ctx.lr = 0x82A129D0;
	sub_82A0C9B8(ctx, base);
	// lwz r29,24028(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24028);
	// bl 0x82a74720
	ctx.lr = 0x82A129D8;
	sub_82A74720(ctx, base);
	// lis r30,-31963
	ctx.r30.s64 = -2094727168;
	// lwz r11,24036(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24036);
	// subf r11,r11,r3
	ctx.r11.s64 = ctx.r3.s64 - ctx.r11.s64;
	// addic r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r3,r11,r29
	ctx.r3.u64 = ctx.r11.u64 & ctx.r29.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a12a14
	if (ctx.cr6.eq) goto loc_82A12A14;
	// lis r11,2
	ctx.r11.s64 = 131072;
	// ori r11,r11,19116
	ctx.r11.u64 = ctx.r11.u64 | 19116;
	// lwzx r11,r3,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r11.u32);
	// rlwinm. r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82a12a14
	if (ctx.cr0.eq) goto loc_82A12A14;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x82a10c80
	ctx.lr = 0x82A12A14;
	sub_82A10C80(ctx, base);
loc_82A12A14:
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r10,24028(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24028);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r11,24036(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24036, ctx.r11.u32);
	// addis r3,r10,2
	ctx.r3.s64 = ctx.r10.s64 + 131072;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r3,19120
	ctx.r3.s64 = ctx.r3.s64 + 19120;
	// bl 0x831796f4
	ctx.lr = 0x82A12A38;
	__imp__KeReleaseMutant(ctx, base);
loc_82A12A38:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A12A40"))) PPC_WEAK_FUNC(sub_82A12A40);
PPC_FUNC_IMPL(__imp__sub_82A12A40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7674
	ctx.lr = 0x82A12A48;
	__savegprlr_27(ctx, base);
	// addi r31,r1,-160
	ctx.r31.s64 = ctx.r1.s64 + -160;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addis r29,r3,1
	ctx.r29.s64 = ctx.r3.s64 + 65536;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r29,r29,-25456
	ctx.r29.s64 = ctx.r29.s64 + -25456;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r11,20
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 20, ctx.xer);
	// bne cr6,0x82a12ab0
	if (!ctx.cr6.eq) goto loc_82A12AB0;
	// clrlwi. r11,r5,24
	ctx.r11.u64 = ctx.r5.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82a12ab0
	if (ctx.cr0.eq) goto loc_82A12AB0;
	// lwz r11,0(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 0);
	// li r6,1780
	ctx.r6.s64 = 1780;
	// li r4,20
	ctx.r4.s64 = 20;
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// stwu r11,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 0);
	// addi r27,r1,80
	ctx.r27.s64 = ctx.r1.s64 + 80;
	// stwu r11,-1872(r1)
	ea = -1872 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r1.u32 = ea;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x82a0ce68
	ctx.lr = 0x82A12A9C;
	sub_82A0CE68(ctx, base);
	// addi r6,r31,80
	ctx.r6.s64 = ctx.r31.s64 + 80;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// li r4,13
	ctx.r4.s64 = 13;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a128a8
	ctx.lr = 0x82A12AB0;
	sub_82A128A8(ctx, base);
loc_82A12AB0:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a0d2c8
	ctx.lr = 0x82A12ABC;
	sub_82A0D2C8(ctx, base);
	// addis r10,r30,1
	ctx.r10.s64 = ctx.r30.s64 + 65536;
	// lwz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r10,r10,-25448
	ctx.r10.s64 = ctx.r10.s64 + -25448;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82a12ae0
	if (ctx.cr6.lt) goto loc_82A12AE0;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_82A12AE0:
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// addi r1,r31,160
	ctx.r1.s64 = ctx.r31.s64 + 160;
	// b 0x82fa76c4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A12AEC"))) PPC_WEAK_FUNC(sub_82A12AEC);
PPC_FUNC_IMPL(__imp__sub_82A12AEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A12AF0"))) PPC_WEAK_FUNC(sub_82A12AF0);
PPC_FUNC_IMPL(__imp__sub_82A12AF0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7664
	ctx.lr = 0x82A12AF8;
	__savegprlr_23(ctx, base);
	// stwu r1,-3776(r1)
	ea = -3776 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r29,0
	ctx.r29.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r29,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r29.u32);
	// mr r26,r29
	ctx.r26.u64 = ctx.r29.u64;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// mr r24,r29
	ctx.r24.u64 = ctx.r29.u64;
	// stw r29,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r29.u32);
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// stw r29,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r29.u32);
	// bl 0x82a78340
	ctx.lr = 0x82A12B24;
	sub_82A78340(ctx, base);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a0f868
	ctx.lr = 0x82A12B30;
	sub_82A0F868(ctx, base);
	// lis r30,-31963
	ctx.r30.s64 = -2094727168;
	// lwz r3,24032(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24032);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a12b54
	if (ctx.cr6.eq) goto loc_82A12B54;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r4,72(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// lwz r11,44(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82A12B54;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82A12B54:
	// lis r27,-31963
	ctx.r27.s64 = -2094727168;
	// addi r9,r31,76
	ctx.r9.s64 = ctx.r31.s64 + 76;
	// addi r8,r1,84
	ctx.r8.s64 = ctx.r1.s64 + 84;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r6,r1,104
	ctx.r6.s64 = ctx.r1.s64 + 104;
	// lwz r11,24028(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 24028);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r4,r1,100
	ctx.r4.s64 = ctx.r1.s64 + 100;
	// addis r3,r11,9
	ctx.r3.s64 = ctx.r11.s64 + 589824;
	// addi r3,r3,-2412
	ctx.r3.s64 = ctx.r3.s64 + -2412;
	// stw r29,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r29.u32);
	// bl 0x82a03500
	ctx.lr = 0x82A12B84;
	sub_82A03500(ctx, base);
	// mr. r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// blt 0x82a12e68
	if (ctx.cr0.lt) goto loc_82A12E68;
	// stw r29,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r29.u32);
	// addi r3,r1,108
	ctx.r3.s64 = ctx.r1.s64 + 108;
	// bl 0x82a1b6e0
	ctx.lr = 0x82A12B98;
	sub_82A1B6E0(ctx, base);
	// lwz r11,24032(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24032);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82a12bb0
	if (!ctx.cr6.eq) goto loc_82A12BB0;
	// lwz r11,108(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// rlwinm. r11,r11,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82a12c38
	if (ctx.cr0.eq) goto loc_82A12C38;
loc_82A12BB0:
	// li r5,96
	ctx.r5.s64 = 96;
	// stw r29,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r29.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,152
	ctx.r3.s64 = ctx.r1.s64 + 152;
	// bl 0x82fa7cf0
	ctx.lr = 0x82A12BC4;
	sub_82FA7CF0(ctx, base);
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x82a1b558
	ctx.lr = 0x82A12BD8;
	sub_82A1B558(ctx, base);
	// addi r11,r1,120
	ctx.r11.s64 = ctx.r1.s64 + 120;
	// std r29,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r29.u64);
	// lis r10,7664
	ctx.r10.s64 = 502267904;
	// li r9,2
	ctx.r9.s64 = 2;
	// ori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 | 1;
	// li r5,104
	ctx.r5.s64 = 104;
	// std r29,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r29.u64);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// std r29,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r29.u64);
	// stw r10,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r10.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// stw r9,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r9.u32);
	// bl 0x82a1b648
	ctx.lr = 0x82A12C18;
	sub_82A1B648(ctx, base);
	// addi r9,r1,144
	ctx.r9.s64 = ctx.r1.s64 + 144;
	// lwz r8,84(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r6,104(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r4,100(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// bl 0x82a0d1f0
	ctx.lr = 0x82A12C38;
	sub_82A0D1F0(ctx, base);
loc_82A12C38:
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// mulli r10,r10,448
	ctx.r10.s64 = ctx.r10.s64 * 448;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r30,r11,48
	ctx.r30.s64 = ctx.r11.s64 + 48;
	// lwz r11,48(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82a12c60
	if (ctx.cr6.eq) goto loc_82A12C60;
	// lis r25,-31999
	ctx.r25.s64 = -2097086464;
	// ori r25,r25,8
	ctx.r25.u64 = ctx.r25.u64 | 8;
loc_82A12C60:
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// blt cr6,0x82a12e68
	if (ctx.cr6.lt) goto loc_82A12E68;
	// stw r29,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r29.u32);
	// addi r5,r1,92
	ctx.r5.s64 = ctx.r1.s64 + 92;
	// addi r4,r31,28
	ctx.r4.s64 = ctx.r31.s64 + 28;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a17e30
	ctx.lr = 0x82A12C7C;
	sub_82A17E30(ctx, base);
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82a12c94
	if (ctx.cr0.eq) goto loc_82A12C94;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82a12cb0
	if (!ctx.cr6.eq) goto loc_82A12CB0;
loc_82A12C94:
	// addi r7,r1,1680
	ctx.r7.s64 = ctx.r1.s64 + 1680;
	// lwz r6,84(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a0fae8
	ctx.lr = 0x82A12CAC;
	sub_82A0FAE8(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
loc_82A12CB0:
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// rlwinm. r11,r11,31,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82a12d08
	if (!ctx.cr0.eq) goto loc_82A12D08;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a0d5f0
	ctx.lr = 0x82A12CC4;
	sub_82A0D5F0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82a12d08
	if (ctx.cr0.eq) goto loc_82A12D08;
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x82a12d08
	if (!ctx.cr6.eq) goto loc_82A12D08;
	// addi r10,r31,36
	ctx.r10.s64 = ctx.r31.s64 + 36;
	// lfs f1,60(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	ctx.f1.f64 = double(temp.f32);
	// addi r9,r1,256
	ctx.r9.s64 = ctx.r1.s64 + 256;
	// lwz r7,104(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r6,88(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r5,84(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82a1ad70
	ctx.lr = 0x82A12CFC;
	sub_82A1AD70(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82a12d08
	if (ctx.cr0.lt) goto loc_82A12D08;
	// li r24,1
	ctx.r24.s64 = 1;
loc_82A12D08:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82a12e68
	if (!ctx.cr6.gt) goto loc_82A12E68;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// ble cr6,0x82a12d48
	if (!ctx.cr6.gt) goto loc_82A12D48;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x82a12e68
	if (!ctx.cr6.eq) goto loc_82A12E68;
	// clrlwi. r11,r26,24
	ctx.r11.u64 = ctx.r26.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82a12e68
	if (ctx.cr0.eq) goto loc_82A12E68;
	// lis r10,8
	ctx.r10.s64 = 524288;
	// lwz r11,24028(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 24028);
	// addi r4,r1,1680
	ctx.r4.s64 = ctx.r1.s64 + 1680;
	// ori r10,r10,63168
	ctx.r10.u64 = ctx.r10.u64 | 63168;
	// lwzx r3,r11,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// bl 0x82a17b38
	ctx.lr = 0x82A12D44;
	sub_82A17B38(ctx, base);
	// b 0x82a12e68
	goto loc_82A12E68;
loc_82A12D48:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82a0c9b8
	ctx.lr = 0x82A12D50;
	sub_82A0C9B8(ctx, base);
	// lwz r30,24028(r27)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r27.u32 + 24028);
	// bl 0x82a74720
	ctx.lr = 0x82A12D58;
	sub_82A74720(ctx, base);
	// lis r28,-31963
	ctx.r28.s64 = -2094727168;
	// lwz r11,24036(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 24036);
	// subf r11,r11,r3
	ctx.r11.s64 = ctx.r3.s64 - ctx.r11.s64;
	// addic r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 & ctx.r30.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82a12da8
	if (!ctx.cr6.eq) goto loc_82A12DA8;
	// stw r29,24036(r28)
	PPC_STORE_U32(ctx.r28.u32 + 24036, ctx.r29.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r10,24028(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 24028);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// addis r3,r10,2
	ctx.r3.s64 = ctx.r10.s64 + 131072;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// addi r3,r3,19120
	ctx.r3.s64 = ctx.r3.s64 + 19120;
	// bl 0x831796f4
	ctx.lr = 0x82A12D9C;
	__imp__KeReleaseMutant(ctx, base);
	// lis r3,-31999
	ctx.r3.s64 = -2097086464;
	// ori r3,r3,5
	ctx.r3.u64 = ctx.r3.u64 | 5;
	// b 0x82a12eb0
	goto loc_82A12EB0;
loc_82A12DA8:
	// lwz r8,20(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
	// addi r10,r11,2524
	ctx.r10.s64 = ctx.r11.s64 + 2524;
loc_82A12DB4:
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r7,r8
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x82a12de8
	if (ctx.cr6.eq) goto loc_82A12DE8;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r10,r10,96
	ctx.r10.s64 = ctx.r10.s64 + 96;
	// cmplwi cr6,r9,2
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 2, ctx.xer);
	// blt cr6,0x82a12db4
	if (ctx.cr6.lt) goto loc_82A12DB4;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
loc_82A12DD4:
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82a12df0
	if (ctx.cr0.eq) goto loc_82A12DF0;
	// lis r25,-31999
	ctx.r25.s64 = -2097086464;
	// ori r25,r25,8
	ctx.r25.u64 = ctx.r25.u64 | 8;
	// b 0x82a12e44
	goto loc_82A12E44;
loc_82A12DE8:
	// li r10,1
	ctx.r10.s64 = 1;
	// b 0x82a12dd4
	goto loc_82A12DD4;
loc_82A12DF0:
	// lis r10,1
	ctx.r10.s64 = 65536;
	// lwz r9,16(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// clrlwi. r8,r26,24
	ctx.r8.u64 = ctx.r26.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ori r10,r10,8112
	ctx.r10.u64 = ctx.r10.u64 | 8112;
	// mullw r10,r9,r10
	ctx.r10.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r10.s32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r30,r11,2704
	ctx.r30.s64 = ctx.r11.s64 + 2704;
	// beq 0x82a12e30
	if (ctx.cr0.eq) goto loc_82A12E30;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addis r3,r30,1
	ctx.r3.s64 = ctx.r30.s64 + 65536;
	// addi r4,r1,1680
	ctx.r4.s64 = ctx.r1.s64 + 1680;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r3,r3,-32128
	ctx.r3.s64 = ctx.r3.s64 + -32128;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r5,r11,27,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// bl 0x82a12a40
	ctx.lr = 0x82A12E30;
	sub_82A12A40(ctx, base);
loc_82A12E30:
	// clrlwi. r11,r24,24
	ctx.r11.u64 = ctx.r24.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82a12e44
	if (ctx.cr0.eq) goto loc_82A12E44;
	// addi r4,r1,256
	ctx.r4.s64 = ctx.r1.s64 + 256;
	// addi r3,r30,4896
	ctx.r3.s64 = ctx.r30.s64 + 4896;
	// bl 0x82a0d380
	ctx.lr = 0x82A12E44;
	sub_82A0D380(ctx, base);
loc_82A12E44:
	// stw r29,24036(r28)
	PPC_STORE_U32(ctx.r28.u32 + 24036, ctx.r29.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r10,24028(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 24028);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// addis r3,r10,2
	ctx.r3.s64 = ctx.r10.s64 + 131072;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// addi r3,r3,19120
	ctx.r3.s64 = ctx.r3.s64 + 19120;
	// bl 0x831796f4
	ctx.lr = 0x82A12E68;
	__imp__KeReleaseMutant(ctx, base);
loc_82A12E68:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a0e5c8
	ctx.lr = 0x82A12E70;
	sub_82A0E5C8(ctx, base);
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// bge cr6,0x82a12e98
	if (!ctx.cr6.lt) goto loc_82A12E98;
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// ori r11,r11,16388
	ctx.r11.u64 = ctx.r11.u64 | 16388;
	// cmpw cr6,r25,r11
	ctx.cr6.compare<int32_t>(ctx.r25.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x82a12e98
	if (ctx.cr6.eq) goto loc_82A12E98;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82a11138
	ctx.lr = 0x82A12E98;
	sub_82A11138(ctx, base);
loc_82A12E98:
	// bl 0x82a78340
	ctx.lr = 0x82A12E9C;
	sub_82A78340(ctx, base);
	// subf. r11,r23,r3
	ctx.r11.s64 = ctx.r3.s64 - ctx.r23.s64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82a12ea8
	if (!ctx.cr0.eq) goto loc_82A12EA8;
	// li r11,1
	ctx.r11.s64 = 1;
loc_82A12EA8:
	// stw r11,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r11.u32);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
loc_82A12EB0:
	// addi r1,r1,3776
	ctx.r1.s64 = ctx.r1.s64 + 3776;
	// b 0x82fa76b4
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A12EB8"))) PPC_WEAK_FUNC(sub_82A12EB8);
PPC_FUNC_IMPL(__imp__sub_82A12EB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7674
	ctx.lr = 0x82A12EC0;
	__savegprlr_27(ctx, base);
	// stwu r1,-464(r1)
	ea = -464 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r27,-1
	ctx.r27.s64 = -1;
	// li r5,264
	ctx.r5.s64 = 264;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
	// bl 0x82fa7cf0
	ctx.lr = 0x82A12EDC;
	sub_82FA7CF0(ctx, base);
	// lis r31,-31963
	ctx.r31.s64 = -2094727168;
	// lis r11,8
	ctx.r11.s64 = 524288;
	// li r4,0
	ctx.r4.s64 = 0;
	// ori r28,r11,63176
	ctx.r28.u64 = ctx.r11.u64 | 63176;
	// lwz r11,24028(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24028);
	// add r3,r11,r28
	ctx.r3.u64 = ctx.r11.u64 + ctx.r28.u64;
	// bl 0x82a10620
	ctx.lr = 0x82A12EF8;
	sub_82A10620(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82a12f0c
	if (ctx.cr0.lt) goto loc_82A12F0C;
	// bl 0x82a1fa08
	ctx.lr = 0x82A12F04;
	sub_82A1FA08(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82a1fb00
	ctx.lr = 0x82A12F0C;
	sub_82A1FB00(ctx, base);
loc_82A12F0C:
	// lis r11,2
	ctx.r11.s64 = 131072;
	// lwz r10,24028(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24028);
	// ori r11,r11,19152
	ctx.r11.u64 = ctx.r11.u64 | 19152;
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82a12f28
	if (!ctx.cr6.eq) goto loc_82A12F28;
	// bl 0x82a20940
	ctx.lr = 0x82A12F28;
	sub_82A20940(ctx, base);
loc_82A12F28:
	// lis r11,8
	ctx.r11.s64 = 524288;
	// ori r29,r11,63124
	ctx.r29.u64 = ctx.r11.u64 | 63124;
loc_82A12F30:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82a12fb0
	if (ctx.cr6.eq) goto loc_82A12FB0;
	// cmpwi cr6,r30,-1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, -1, ctx.xer);
	// bne cr6,0x82a12f4c
	if (!ctx.cr6.eq) goto loc_82A12F4C;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x829fdfd0
	ctx.lr = 0x82A12F4C;
	sub_829FDFD0(ctx, base);
loc_82A12F4C:
	// lwz r11,24028(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24028);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r5,44
	ctx.r5.s64 = 44;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// stw r10,368(r1)
	PPC_STORE_U32(ctx.r1.u32 + 368, ctx.r10.u32);
	// addis r11,r11,9
	ctx.r11.s64 = ctx.r11.s64 + 589824;
	// add r10,r9,r29
	ctx.r10.u64 = ctx.r9.u64 + ctx.r29.u64;
	// addi r11,r11,-2428
	ctx.r11.s64 = ctx.r11.s64 + -2428;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r3,r1,372
	ctx.r3.s64 = ctx.r1.s64 + 372;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82fa7cf0
	ctx.lr = 0x82A12F80;
	sub_82FA7CF0(ctx, base);
	// clrldi r11,r30,32
	ctx.r11.u64 = ctx.r30.u64 & 0xFFFFFFFF;
	// addi r10,r1,368
	ctx.r10.s64 = ctx.r1.s64 + 368;
	// mulli r11,r11,-10000
	ctx.r11.s64 = ctx.r11.s64 * -10000;
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// addi r9,r1,88
	ctx.r9.s64 = ctx.r1.s64 + 88;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,3
	ctx.r6.s64 = 3;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x831795f4
	ctx.lr = 0x82A12FB0;
	__imp__KeWaitForMultipleObjects(ctx, base);
loc_82A12FB0:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82a11db8
	ctx.lr = 0x82A12FB8;
	sub_82A11DB8(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82a12568
	ctx.lr = 0x82A12FC0;
	sub_82A12568(ctx, base);
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// beq cr6,0x82a1317c
	if (ctx.cr6.eq) goto loc_82A1317C;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82a12fe0
	if (!ctx.cr6.eq) goto loc_82A12FE0;
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
	// b 0x82a12f30
	goto loc_82A12F30;
loc_82A12FE0:
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x82a12ff0
	if (!ctx.cr6.eq) goto loc_82A12FF0;
	// bl 0x82a0e238
	ctx.lr = 0x82A12FEC;
	sub_82A0E238(ctx, base);
	// b 0x82a12f30
	goto loc_82A12F30;
loc_82A12FF0:
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// bne cr6,0x82a1301c
	if (!ctx.cr6.eq) goto loc_82A1301C;
	// lis r10,8
	ctx.r10.s64 = 524288;
	// lwz r11,24028(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24028);
	// ori r10,r10,63164
	ctx.r10.u64 = ctx.r10.u64 | 63164;
	// addis r3,r11,9
	ctx.r3.s64 = ctx.r11.s64 + 589824;
	// addi r3,r3,-3744
	ctx.r3.s64 = ctx.r3.s64 + -3744;
	// lwzx r4,r11,r10
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// bl 0x82a0dce0
	ctx.lr = 0x82A13014;
	sub_82A0DCE0(ctx, base);
	// bl 0x82a0dbd8
	ctx.lr = 0x82A13018;
	sub_82A0DBD8(ctx, base);
	// b 0x82a12f30
	goto loc_82A12F30;
loc_82A1301C:
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// bne cr6,0x82a13054
	if (!ctx.cr6.eq) goto loc_82A13054;
	// li r4,1
	ctx.r4.s64 = 1;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x829fdfd0
	ctx.lr = 0x82A13030;
	sub_829FDFD0(ctx, base);
	// li r6,101
	ctx.r6.s64 = 101;
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,1
	ctx.r4.s64 = 1;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x829fe378
	ctx.lr = 0x82A13044;
	sub_829FE378(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82a08ea8
	ctx.lr = 0x82A1304C;
	sub_82A08EA8(ctx, base);
	// bl 0x82a0db30
	ctx.lr = 0x82A13050;
	sub_82A0DB30(ctx, base);
	// b 0x82a12f30
	goto loc_82A12F30;
loc_82A13054:
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// bne cr6,0x82a130b4
	if (!ctx.cr6.eq) goto loc_82A130B4;
	// lwz r11,24028(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24028);
	// add r4,r11,r29
	ctx.r4.u64 = ctx.r11.u64 + ctx.r29.u64;
	// add r3,r11,r28
	ctx.r3.u64 = ctx.r11.u64 + ctx.r28.u64;
	// bl 0x82a10620
	ctx.lr = 0x82A1306C;
	sub_82A10620(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82a1307c
	if (ctx.cr0.lt) goto loc_82A1307C;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82a1fb00
	ctx.lr = 0x82A1307C;
	sub_82A1FB00(ctx, base);
loc_82A1307C:
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// ori r11,r11,16388
	ctx.r11.u64 = ctx.r11.u64 | 16388;
	// cmpw cr6,r3,r11
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x82a12f30
	if (!ctx.cr6.eq) goto loc_82A12F30;
	// lis r10,8
	ctx.r10.s64 = 524288;
	// lwz r11,24028(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24028);
	// li r9,1
	ctx.r9.s64 = 1;
	// ori r10,r10,63204
	ctx.r10.u64 = ctx.r10.u64 | 63204;
	// stwx r9,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r9.u32);
	// sync 
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x829fdfd0
	ctx.lr = 0x82A130B0;
	sub_829FDFD0(ctx, base);
	// b 0x82a12f30
	goto loc_82A12F30;
loc_82A130B4:
	// cmpwi cr6,r11,9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 9, ctx.xer);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bne cr6,0x82a130c8
	if (!ctx.cr6.eq) goto loc_82A130C8;
	// bl 0x82a1bf10
	ctx.lr = 0x82A130C4;
	sub_82A1BF10(ctx, base);
	// b 0x82a130cc
	goto loc_82A130CC;
loc_82A130C8:
	// bl 0x82a12af0
	ctx.lr = 0x82A130CC;
	sub_82A12AF0(ctx, base);
loc_82A130CC:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82a12f30
	if (ctx.cr6.lt) goto loc_82A12F30;
	// lwz r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x82a130ec
	if (!ctx.cr6.gt) goto loc_82A130EC;
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// ble cr6,0x82a130f0
	if (!ctx.cr6.gt) goto loc_82A130F0;
loc_82A130EC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82A130F0:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82a13154
	if (ctx.cr0.eq) goto loc_82A13154;
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// beq cr6,0x82a13128
	if (ctx.cr6.eq) goto loc_82A13128;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// beq cr6,0x82a1311c
	if (ctx.cr6.eq) goto loc_82A1311C;
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// bne cr6,0x82a13148
	if (!ctx.cr6.eq) goto loc_82A13148;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82a0f810
	ctx.lr = 0x82A13118;
	sub_82A0F810(ctx, base);
	// b 0x82a13148
	goto loc_82A13148;
loc_82A1311C:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82a0f0b8
	ctx.lr = 0x82A13124;
	sub_82A0F0B8(ctx, base);
	// b 0x82a13130
	goto loc_82A13130;
loc_82A13128:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82a0f2b0
	ctx.lr = 0x82A13130;
	sub_82A0F2B0(ctx, base);
loc_82A13130:
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// not r11,r11
	ctx.r11.u64 = ~ctx.r11.u64;
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82a13148
	if (ctx.cr0.eq) goto loc_82A13148;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82a1f8d8
	ctx.lr = 0x82A13148;
	sub_82A1F8D8(ctx, base);
loc_82A13148:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82a121e8
	ctx.lr = 0x82A13150;
	sub_82A121E8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_82A13154:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82a12568
	ctx.lr = 0x82A1315C;
	sub_82A12568(ctx, base);
	// bl 0x82a0e238
	ctx.lr = 0x82A13160;
	sub_82A0E238(ctx, base);
	// lwz r11,24028(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24028);
	// addis r3,r11,9
	ctx.r3.s64 = ctx.r11.s64 + 589824;
	// addi r3,r3,-272
	ctx.r3.s64 = ctx.r3.s64 + -272;
	// bl 0x82a1b170
	ctx.lr = 0x82A13170;
	sub_82A1B170(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82a1fce8
	ctx.lr = 0x82A13178;
	sub_82A1FCE8(ctx, base);
	// b 0x82a12f30
	goto loc_82A12F30;
loc_82A1317C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,464
	ctx.r1.s64 = ctx.r1.s64 + 464;
	// b 0x82fa76c4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A13188"))) PPC_WEAK_FUNC(sub_82A13188);
PPC_FUNC_IMPL(__imp__sub_82A13188) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x82A13190;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r30,-31963
	ctx.r30.s64 = -2094727168;
	// lis r10,-32095
	ctx.r10.s64 = -2103377920;
	// lis r4,0
	ctx.r4.s64 = 0;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r7,4
	ctx.r7.s64 = 4;
	// lwz r11,24028(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24028);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r10,11960
	ctx.r5.s64 = ctx.r10.s64 + 11960;
	// addis r8,r11,9
	ctx.r8.s64 = ctx.r11.s64 + 589824;
	// ori r4,r4,32768
	ctx.r4.u64 = ctx.r4.u64 | 32768;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r8,r8,-2432
	ctx.r8.s64 = ctx.r8.s64 + -2432;
	// bl 0x82a77830
	ctx.lr = 0x82A131C8;
	sub_82A77830(ctx, base);
	// lis r10,8
	ctx.r10.s64 = 524288;
	// lwz r11,24028(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24028);
	// ori r31,r10,63100
	ctx.r31.u64 = ctx.r10.u64 | 63100;
	// stwx r3,r11,r31
	PPC_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r3.u32);
	// lwz r11,24028(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24028);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82a131f8
	if (!ctx.cr6.eq) goto loc_82A131F8;
	// lis r31,-32761
	ctx.r31.s64 = -2147024896;
	// ori r31,r31,14
	ctx.r31.u64 = ctx.r31.u64 | 14;
	// b 0x82a13228
	goto loc_82A13228;
loc_82A131F8:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x82a77a10
	ctx.lr = 0x82A13204;
	sub_82A77A10(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x82a13234
	if (!ctx.cr6.eq) goto loc_82A13234;
	// bl 0x82a78478
	ctx.lr = 0x82A13210;
	sub_82A78478(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bgt 0x82a13220
	if (ctx.cr0.gt) goto loc_82A13220;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x82a13228
	goto loc_82A13228;
loc_82A13220:
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// oris r31,r11,32775
	ctx.r31.u64 = ctx.r11.u64 | 2147942400;
loc_82A13228:
	// bl 0x82a0de00
	ctx.lr = 0x82A1322C;
	sub_82A0DE00(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x82a13244
	goto loc_82A13244;
loc_82A13234:
	// lwz r11,24028(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24028);
	// lwzx r3,r11,r31
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// bl 0x82a777b8
	ctx.lr = 0x82A13240;
	sub_82A777B8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_82A13244:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A1324C"))) PPC_WEAK_FUNC(sub_82A1324C);
PPC_FUNC_IMPL(__imp__sub_82A1324C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A13250"))) PPC_WEAK_FUNC(sub_82A13250);
PPC_FUNC_IMPL(__imp__sub_82A13250) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x82A13258;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r29,r3,2704
	ctx.r29.s64 = ctx.r3.s64 + 2704;
	// li r30,1
	ctx.r30.s64 = 1;
loc_82A13268:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82a12850
	ctx.lr = 0x82A13270;
	sub_82A12850(ctx, base);
	// addis r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 65536;
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r29,r29,8112
	ctx.r29.s64 = ctx.r29.s64 + 8112;
	// bge 0x82a13268
	if (!ctx.cr0.lt) goto loc_82A13268;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a0cfc0
	ctx.lr = 0x82A13288;
	sub_82A0CFC0(ctx, base);
	// lis r5,6
	ctx.r5.s64 = 393216;
	// addis r3,r31,2
	ctx.r3.s64 = ctx.r31.s64 + 131072;
	// li r4,0
	ctx.r4.s64 = 0;
	// ori r5,r5,42640
	ctx.r5.u64 = ctx.r5.u64 | 42640;
	// addi r3,r3,19152
	ctx.r3.s64 = ctx.r3.s64 + 19152;
	// bl 0x82fa7cf0
	ctx.lr = 0x82A132A0;
	sub_82FA7CF0(ctx, base);
	// addis r3,r31,9
	ctx.r3.s64 = ctx.r31.s64 + 589824;
	// li r5,36
	ctx.r5.s64 = 36;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r3,-2692
	ctx.r3.s64 = ctx.r3.s64 + -2692;
	// bl 0x82fa7cf0
	ctx.lr = 0x82A132B4;
	sub_82FA7CF0(ctx, base);
	// addis r3,r31,9
	ctx.r3.s64 = ctx.r31.s64 + 589824;
	// li r5,1052
	ctx.r5.s64 = 1052;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r3,-3744
	ctx.r3.s64 = ctx.r3.s64 + -3744;
	// bl 0x82fa7cf0
	ctx.lr = 0x82A132C8;
	sub_82FA7CF0(ctx, base);
	// addis r3,r31,9
	ctx.r3.s64 = ctx.r31.s64 + 589824;
	// li r5,216
	ctx.r5.s64 = 216;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r3,-2652
	ctx.r3.s64 = ctx.r3.s64 + -2652;
	// bl 0x82fa7cf0
	ctx.lr = 0x82A132DC;
	sub_82FA7CF0(ctx, base);
	// lis r11,8
	ctx.r11.s64 = 524288;
	// lis r10,8
	ctx.r10.s64 = 524288;
	// lis r9,8
	ctx.r9.s64 = 524288;
	// lis r8,8
	ctx.r8.s64 = 524288;
	// ori r7,r11,63100
	ctx.r7.u64 = ctx.r11.u64 | 63100;
	// ori r10,r10,63164
	ctx.r10.u64 = ctx.r10.u64 | 63164;
	// ori r9,r9,62880
	ctx.r9.u64 = ctx.r9.u64 | 62880;
	// ori r8,r8,63168
	ctx.r8.u64 = ctx.r8.u64 | 63168;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stwx r11,r31,r7
	PPC_STORE_U32(ctx.r31.u32 + ctx.r7.u32, ctx.r11.u32);
	// stwx r11,r31,r10
	PPC_STORE_U32(ctx.r31.u32 + ctx.r10.u32, ctx.r11.u32);
	// stwx r11,r31,r9
	PPC_STORE_U32(ctx.r31.u32 + ctx.r9.u32, ctx.r11.u32);
	// stwx r11,r31,r8
	PPC_STORE_U32(ctx.r31.u32 + ctx.r8.u32, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A1331C"))) PPC_WEAK_FUNC(sub_82A1331C);
PPC_FUNC_IMPL(__imp__sub_82A1331C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A13320"))) PPC_WEAK_FUNC(sub_82A13320);
PPC_FUNC_IMPL(__imp__sub_82A13320) {
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
	// lis r3,8
	ctx.r3.s64 = 524288;
	// lis r4,8349
	ctx.r4.s64 = 547160064;
	// ori r3,r3,65328
	ctx.r3.u64 = ctx.r3.u64 | 65328;
	// bl 0x82691410
	ctx.lr = 0x82A13340;
	sub_82691410(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82a13350
	if (ctx.cr0.eq) goto loc_82A13350;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a13250
	ctx.lr = 0x82A13350;
	sub_82A13250(ctx, base);
loc_82A13350:
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

__attribute__((alias("__imp__sub_82A13368"))) PPC_WEAK_FUNC(sub_82A13368);
PPC_FUNC_IMPL(__imp__sub_82A13368) {
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
	// bl 0x82a13320
	ctx.lr = 0x82A13384;
	sub_82A13320(ctx, base);
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,24028(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24028, ctx.r3.u32);
	// bne 0x82a133a0
	if (!ctx.cr0.eq) goto loc_82A133A0;
	// lis r31,-32761
	ctx.r31.s64 = -2147024896;
	// ori r31,r31,14
	ctx.r31.u64 = ctx.r31.u64 | 14;
	// b 0x82a133d4
	goto loc_82A133D4;
loc_82A133A0:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82a10fb0
	ctx.lr = 0x82A133A8;
	sub_82A10FB0(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x82a133d4
	if (ctx.cr0.lt) goto loc_82A133D4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a16068
	ctx.lr = 0x82A133B8;
	sub_82A16068(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x82a133d4
	if (ctx.cr0.lt) goto loc_82A133D4;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82a08d40
	ctx.lr = 0x82A133CC;
	sub_82A08D40(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bge 0x82a133dc
	if (!ctx.cr0.lt) goto loc_82A133DC;
loc_82A133D4:
	// bl 0x82a0dfa8
	ctx.lr = 0x82A133D8;
	sub_82A0DFA8(ctx, base);
	// b 0x82a133e0
	goto loc_82A133E0;
loc_82A133DC:
	// bl 0x82a1b910
	ctx.lr = 0x82A133E0;
	sub_82A1B910(ctx, base);
loc_82A133E0:
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

__attribute__((alias("__imp__sub_82A133FC"))) PPC_WEAK_FUNC(sub_82A133FC);
PPC_FUNC_IMPL(__imp__sub_82A133FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A13400"))) PPC_WEAK_FUNC(sub_82A13400);
PPC_FUNC_IMPL(__imp__sub_82A13400) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x82A13408;
	__savegprlr_29(ctx, base);
	// stwu r1,-656(r1)
	ea = -656 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r3,r11,23768
	ctx.r3.s64 = ctx.r11.s64 + 23768;
	// li r4,260
	ctx.r4.s64 = 260;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// bl 0x82fa5590
	ctx.lr = 0x82A13428;
	sub_82FA5590(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82a13498
	if (!ctx.cr0.eq) goto loc_82A13498;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,260
	ctx.r4.s64 = 260;
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// bl 0x82fa5590
	ctx.lr = 0x82A13440;
	sub_82FA5590(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82a13498
	if (!ctx.cr0.eq) goto loc_82A13498;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// li r4,260
	ctx.r4.s64 = 260;
	// addi r5,r11,-24744
	ctx.r5.s64 = ctx.r11.s64 + -24744;
	// addi r3,r1,352
	ctx.r3.s64 = ctx.r1.s64 + 352;
	// bl 0x82fa85a0
	ctx.lr = 0x82A1345C;
	sub_82FA85A0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82a13498
	if (!ctx.cr0.eq) goto loc_82A13498;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,260
	ctx.r4.s64 = 260;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82fa5590
	ctx.lr = 0x82A13474;
	sub_82FA5590(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82a13498
	if (!ctx.cr0.eq) goto loc_82A13498;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// li r4,260
	ctx.r4.s64 = 260;
	// addi r5,r11,-24772
	ctx.r5.s64 = ctx.r11.s64 + -24772;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82fa85a0
	ctx.lr = 0x82A13490;
	sub_82FA85A0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82a134a4
	if (ctx.cr0.eq) goto loc_82A134A4;
loc_82A13498:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// b 0x82a134ec
	goto loc_82A134EC;
loc_82A134A4:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82a0c2c8
	ctx.lr = 0x82A134AC;
	sub_82A0C2C8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82a134ec
	if (ctx.cr0.lt) goto loc_82A134EC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a13368
	ctx.lr = 0x82A134BC;
	sub_82A13368(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82a134ec
	if (ctx.cr0.lt) goto loc_82A134EC;
	// bl 0x82a0e018
	ctx.lr = 0x82A134C8;
	sub_82A0E018(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82a13188
	ctx.lr = 0x82A134D0;
	sub_82A13188(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82a134ec
	if (ctx.cr0.lt) goto loc_82A134EC;
	// rlwinm. r11,r30,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82a134ec
	if (!ctx.cr0.eq) goto loc_82A134EC;
	// lis r11,-32095
	ctx.r11.s64 = -2103377920;
	// addi r3,r11,816
	ctx.r3.s64 = ctx.r11.s64 + 816;
	// bl 0x82a842b8
	ctx.lr = 0x82A134EC;
	sub_82A842B8(ctx, base);
loc_82A134EC:
	// addi r1,r1,656
	ctx.r1.s64 = ctx.r1.s64 + 656;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A134F4"))) PPC_WEAK_FUNC(sub_82A134F4);
PPC_FUNC_IMPL(__imp__sub_82A134F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A134F8"))) PPC_WEAK_FUNC(sub_82A134F8);
PPC_FUNC_IMPL(__imp__sub_82A134F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x82A13500;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31975
	ctx.r11.s64 = -2095513600;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r29,r11,-12340
	ctx.r29.s64 = ctx.r11.s64 + -12340;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x831791a4
	ctx.lr = 0x82A13518;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lis r11,-31964
	ctx.r11.s64 = -2094792704;
	// addi r31,r11,29312
	ctx.r31.s64 = ctx.r11.s64 + 29312;
	// lwz r11,10912(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10912);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82a1356c
	if (!ctx.cr6.eq) goto loc_82A1356C;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne cr6,0x82a13544
	if (!ctx.cr6.eq) goto loc_82A13544;
	// lwz r11,10952(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10952);
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82a1356c
	if (!ctx.cr6.eq) goto loc_82A1356C;
loc_82A13544:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r31,10932
	ctx.r3.s64 = ctx.r31.s64 + 10932;
	// bl 0x831792b4
	ctx.lr = 0x82A13554;
	__imp__KeSetEvent(ctx, base);
	// lwz r3,10948(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10948);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a1356c
	if (ctx.cr6.eq) goto loc_82A1356C;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x831792b4
	ctx.lr = 0x82A1356C;
	__imp__KeSetEvent(ctx, base);
loc_82A1356C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x831791b4
	ctx.lr = 0x82A13574;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A1357C"))) PPC_WEAK_FUNC(sub_82A1357C);
PPC_FUNC_IMPL(__imp__sub_82A1357C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A13580"))) PPC_WEAK_FUNC(sub_82A13580);
PPC_FUNC_IMPL(__imp__sub_82A13580) {
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
	// lis r11,-31975
	ctx.r11.s64 = -2095513600;
	// addi r30,r11,-12340
	ctx.r30.s64 = ctx.r11.s64 + -12340;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831791a4
	ctx.lr = 0x82A135A4;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lis r11,-31964
	ctx.r11.s64 = -2094792704;
	// addi r31,r11,29312
	ctx.r31.s64 = ctx.r11.s64 + 29312;
	// lwz r11,10912(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10912);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82a135e0
	if (!ctx.cr6.eq) goto loc_82A135E0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r31,10932
	ctx.r3.s64 = ctx.r31.s64 + 10932;
	// bl 0x831792b4
	ctx.lr = 0x82A135C8;
	__imp__KeSetEvent(ctx, base);
	// lwz r3,10948(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10948);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a135e0
	if (ctx.cr6.eq) goto loc_82A135E0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x831792b4
	ctx.lr = 0x82A135E0;
	__imp__KeSetEvent(ctx, base);
loc_82A135E0:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831791b4
	ctx.lr = 0x82A135E8;
	__imp__RtlLeaveCriticalSection(ctx, base);
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

__attribute__((alias("__imp__sub_82A13600"))) PPC_WEAK_FUNC(sub_82A13600);
PPC_FUNC_IMPL(__imp__sub_82A13600) {
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
	// lis r11,-31975
	ctx.r11.s64 = -2095513600;
	// addi r30,r11,-12340
	ctx.r30.s64 = ctx.r11.s64 + -12340;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831791a4
	ctx.lr = 0x82A13624;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lis r11,-31964
	ctx.r11.s64 = -2094792704;
	// addi r31,r11,29312
	ctx.r31.s64 = ctx.r11.s64 + 29312;
	// lwz r11,10912(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10912);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82a13658
	if (!ctx.cr6.eq) goto loc_82A13658;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r3,r31,10932
	ctx.r3.s64 = ctx.r31.s64 + 10932;
	// stw r11,10960(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10960, ctx.r11.u32);
	// bl 0x831793b4
	ctx.lr = 0x82A13648;
	__imp__KeResetEvent(ctx, base);
	// lwz r3,10948(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10948);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a13658
	if (ctx.cr6.eq) goto loc_82A13658;
	// bl 0x831793b4
	ctx.lr = 0x82A13658;
	__imp__KeResetEvent(ctx, base);
loc_82A13658:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831791b4
	ctx.lr = 0x82A13660;
	__imp__RtlLeaveCriticalSection(ctx, base);
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

__attribute__((alias("__imp__sub_82A13678"))) PPC_WEAK_FUNC(sub_82A13678);
PPC_FUNC_IMPL(__imp__sub_82A13678) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x82A13680;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31964
	ctx.r11.s64 = -2094792704;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r31,r11,29312
	ctx.r31.s64 = ctx.r11.s64 + 29312;
	// lwz r11,10912(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10912);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82a13794
	if (ctx.cr6.eq) goto loc_82A13794;
	// lis r11,-31975
	ctx.r11.s64 = -2095513600;
	// addi r29,r11,-12340
	ctx.r29.s64 = ctx.r11.s64 + -12340;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x831791a4
	ctx.lr = 0x82A136AC;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r11,10912(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10912);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82a1378c
	if (ctx.cr6.eq) goto loc_82A1378C;
	// lwz r11,10928(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10928);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82a136f8
	if (!ctx.cr6.eq) goto loc_82A136F8;
	// lis r11,0
	ctx.r11.s64 = 0;
	// lis r10,0
	ctx.r10.s64 = 0;
	// lis r9,0
	ctx.r9.s64 = 0;
	// ori r8,r11,59556
	ctx.r8.u64 = ctx.r11.u64 | 59556;
	// ori r7,r10,59548
	ctx.r7.u64 = ctx.r10.u64 | 59548;
	// ori r6,r9,59560
	ctx.r6.u64 = ctx.r9.u64 | 59560;
	// lwzx r10,r31,r8
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r8.u32);
	// lwzx r11,r31,r7
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r7.u32);
	// lwzx r9,r31,r6
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r6.u32);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// stw r10,10920(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10920, ctx.r10.u32);
	// stw r11,10924(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10924, ctx.r11.u32);
loc_82A136F8:
	// addi r3,r31,10920
	ctx.r3.s64 = ctx.r31.s64 + 10920;
	// bl 0x82a20e10
	ctx.lr = 0x82A13700;
	sub_82A20E10(ctx, base);
	// lwz r11,132(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// lwz r6,10984(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10984);
	// addic r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// lwz r5,10980(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10980);
	// lwz r4,10956(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10956);
	// subfe r9,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r3,r9,r30
	ctx.r3.u64 = ctx.r9.u64 & ctx.r30.u64;
	// bl 0x82a20e20
	ctx.lr = 0x82A13720;
	sub_82A20E20(ctx, base);
	// lwz r10,132(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// cntlzw r8,r10
	ctx.r8.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r7,r8,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// xori r10,r7,1
	ctx.r10.u64 = ctx.r7.u64 ^ 1;
	// stw r11,10976(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10976, ctx.r11.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// ld r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r30.u32 + 0);
	// stw r10,10960(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10960, ctx.r10.u32);
	// std r11,10968(r31)
	PPC_STORE_U64(ctx.r31.u32 + 10968, ctx.r11.u64);
	// bl 0x831791a4
	ctx.lr = 0x82A13750;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r11,10912(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10912);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82a13784
	if (!ctx.cr6.eq) goto loc_82A13784;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r31,10932
	ctx.r3.s64 = ctx.r31.s64 + 10932;
	// bl 0x831792b4
	ctx.lr = 0x82A1376C;
	__imp__KeSetEvent(ctx, base);
	// lwz r3,10948(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10948);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a13784
	if (ctx.cr6.eq) goto loc_82A13784;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x831792b4
	ctx.lr = 0x82A13784;
	__imp__KeSetEvent(ctx, base);
loc_82A13784:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x831791b4
	ctx.lr = 0x82A1378C;
	__imp__RtlLeaveCriticalSection(ctx, base);
loc_82A1378C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x831791b4
	ctx.lr = 0x82A13794;
	__imp__RtlLeaveCriticalSection(ctx, base);
loc_82A13794:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A1379C"))) PPC_WEAK_FUNC(sub_82A1379C);
PPC_FUNC_IMPL(__imp__sub_82A1379C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A137A0"))) PPC_WEAK_FUNC(sub_82A137A0);
PPC_FUNC_IMPL(__imp__sub_82A137A0) {
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
	// lis r11,-31964
	ctx.r11.s64 = -2094792704;
	// addi r10,r11,29312
	ctx.r10.s64 = ctx.r11.s64 + 29312;
	// lwz r11,10912(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 10912);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82a137e0
	if (ctx.cr6.eq) goto loc_82A137E0;
	// lis r11,-31975
	ctx.r11.s64 = -2095513600;
	// addi r31,r11,-12340
	ctx.r31.s64 = ctx.r11.s64 + -12340;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831791a4
	ctx.lr = 0x82A137D4;
	__imp__RtlEnterCriticalSection(ctx, base);
	// bl 0x82a20e40
	ctx.lr = 0x82A137D8;
	sub_82A20E40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831791b4
	ctx.lr = 0x82A137E0;
	__imp__RtlLeaveCriticalSection(ctx, base);
loc_82A137E0:
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

__attribute__((alias("__imp__sub_82A137F4"))) PPC_WEAK_FUNC(sub_82A137F4);
PPC_FUNC_IMPL(__imp__sub_82A137F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A137F8"))) PPC_WEAK_FUNC(sub_82A137F8);
PPC_FUNC_IMPL(__imp__sub_82A137F8) {
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
	// lis r11,-31975
	ctx.r11.s64 = -2095513600;
	// addi r30,r11,-12340
	ctx.r30.s64 = ctx.r11.s64 + -12340;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831791a4
	ctx.lr = 0x82A1381C;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lis r11,-31964
	ctx.r11.s64 = -2094792704;
	// addi r31,r11,29312
	ctx.r31.s64 = ctx.r11.s64 + 29312;
	// lwz r11,10912(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10912);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82a1389c
	if (!ctx.cr6.eq) goto loc_82A1389C;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,10912(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10912, ctx.r11.u32);
	// sync 
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r31,10932
	ctx.r3.s64 = ctx.r31.s64 + 10932;
	// bl 0x831792b4
	ctx.lr = 0x82A1384C;
	__imp__KeSetEvent(ctx, base);
	// lwz r3,10948(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10948);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a13874
	if (ctx.cr6.eq) goto loc_82A13874;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x831792b4
	ctx.lr = 0x82A13864;
	__imp__KeSetEvent(ctx, base);
	// lwz r3,10948(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10948);
	// bl 0x83179424
	ctx.lr = 0x82A1386C;
	__imp__ObDereferenceObject(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,10948(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10948, ctx.r11.u32);
loc_82A13874:
	// bl 0x82a20e58
	ctx.lr = 0x82A13878;
	sub_82A20E58(ctx, base);
	// lis r4,8348
	ctx.r4.s64 = 547094528;
	// lwz r3,10980(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10980);
	// bl 0x82691460
	ctx.lr = 0x82A13884;
	sub_82691460(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,10980(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10980, ctx.r11.u32);
	// stw r10,10984(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10984, ctx.r10.u32);
	// stw r9,10956(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10956, ctx.r9.u32);
loc_82A1389C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831791b4
	ctx.lr = 0x82A138A4;
	__imp__RtlLeaveCriticalSection(ctx, base);
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

__attribute__((alias("__imp__sub_82A138BC"))) PPC_WEAK_FUNC(sub_82A138BC);
PPC_FUNC_IMPL(__imp__sub_82A138BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A138C0"))) PPC_WEAK_FUNC(sub_82A138C0);
PPC_FUNC_IMPL(__imp__sub_82A138C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x82A138C8;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// addi r31,r11,24040
	ctx.r31.s64 = ctx.r11.s64 + 24040;
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// bl 0x831791a4
	ctx.lr = 0x82A138DC;
	__imp__RtlEnterCriticalSection(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r11,1(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1, ctx.r11.u8);
	// addi r30,r31,76
	ctx.r30.s64 = ctx.r31.s64 + 76;
	// stb r10,2(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2, ctx.r10.u8);
	// li r29,0
	ctx.r29.s64 = 0;
loc_82A138F4:
	// li r3,2672
	ctx.r3.s64 = 2672;
	// bl 0x82a21198
	ctx.lr = 0x82A138FC;
	sub_82A21198(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82a1390c
	if (ctx.cr0.eq) goto loc_82A1390C;
	// bl 0x82a210f8
	ctx.lr = 0x82A13908;
	sub_82A210F8(ctx, base);
	// b 0x82a13910
	goto loc_82A13910;
loc_82A1390C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82A13910:
	// stw r3,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a13960
	if (ctx.cr6.eq) goto loc_82A13960;
	// addi r29,r29,44
	ctx.r29.s64 = ctx.r29.s64 + 44;
	// addi r30,r30,44
	ctx.r30.s64 = ctx.r30.s64 + 44;
	// cmplwi cr6,r29,352
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 352, ctx.xer);
	// blt cr6,0x82a138f4
	if (ctx.cr6.lt) goto loc_82A138F4;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82a21248
	ctx.lr = 0x82A1393C;
	sub_82A21248(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// blt 0x82a1397c
	if (ctx.cr0.lt) goto loc_82A1397C;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r10,1
	ctx.r10.s64 = 1;
	// addic r9,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// stb r10,1(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1, ctx.r10.u8);
	// subfe r11,r9,r11
	temp.u8 = (~ctx.r9.u32 + ctx.r11.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r9.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// stb r11,2(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2, ctx.r11.u8);
	// b 0x82a13988
	goto loc_82A13988;
loc_82A13960:
	// lis r30,-32761
	ctx.r30.s64 = -2147024896;
	// ori r30,r30,14
	ctx.r30.u64 = ctx.r30.u64 | 14;
loc_82A13968:
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// bl 0x831791b4
	ctx.lr = 0x82A13970;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
loc_82A1397C:
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r11,-24724
	ctx.r3.s64 = ctx.r11.s64 + -24724;
	// bl 0x83179504
	ctx.lr = 0x82A13988;
	__imp__DbgPrint(ctx, base);
loc_82A13988:
	// li r11,1
	ctx.r11.s64 = 1;
	// li r30,0
	ctx.r30.s64 = 0;
	// stb r11,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r11.u8);
	// b 0x82a13968
	goto loc_82A13968;
}

__attribute__((alias("__imp__sub_82A13998"))) PPC_WEAK_FUNC(sub_82A13998);
PPC_FUNC_IMPL(__imp__sub_82A13998) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7674
	ctx.lr = 0x82A139A0;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// addi r31,r11,24040
	ctx.r31.s64 = ctx.r11.s64 + 24040;
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// bl 0x831791a4
	ctx.lr = 0x82A139B4;
	__imp__RtlEnterCriticalSection(ctx, base);
	// li r27,0
	ctx.r27.s64 = 0;
	// li r29,8
	ctx.r29.s64 = 8;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// stb r27,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r27.u8);
	// addi r30,r31,32
	ctx.r30.s64 = ctx.r31.s64 + 32;
loc_82A139C8:
	// lwz r28,44(r30)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	// stb r27,4(r30)
	PPC_STORE_U8(ctx.r30.u32 + 4, ctx.r27.u8);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82a139e8
	if (ctx.cr6.eq) goto loc_82A139E8;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82a20ea8
	ctx.lr = 0x82A139E0;
	sub_82A20EA8(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82a211a8
	ctx.lr = 0x82A139E8;
	sub_82A211A8(ctx, base);
loc_82A139E8:
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// stwu r27,44(r30)
	ea = 44 + ctx.r30.u32;
	PPC_STORE_U32(ea, ctx.r27.u32);
	ctx.r30.u32 = ea;
	// bne 0x82a139c8
	if (!ctx.cr0.eq) goto loc_82A139C8;
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// bl 0x831791b4
	ctx.lr = 0x82A139FC;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// bl 0x82a212d8
	ctx.lr = 0x82A13A00;
	sub_82A212D8(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// blt 0x82a13a1c
	if (ctx.cr0.lt) goto loc_82A13A1C;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// stb r27,1(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1, ctx.r27.u8);
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// stb r27,2(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2, ctx.r27.u8);
	// b 0x82a13a28
	goto loc_82A13A28;
loc_82A13A1C:
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r11,-24696
	ctx.r3.s64 = ctx.r11.s64 + -24696;
	// bl 0x83179504
	ctx.lr = 0x82A13A28;
	__imp__DbgPrint(ctx, base);
loc_82A13A28:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A13A30"))) PPC_WEAK_FUNC(sub_82A13A30);
PPC_FUNC_IMPL(__imp__sub_82A13A30) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x82A13A38;
	__savegprlr_28(ctx, base);
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// stb r30,0(r29)
	PPC_STORE_U8(ctx.r29.u32 + 0, ctx.r30.u8);
	// stb r30,1(r29)
	PPC_STORE_U8(ctx.r29.u32 + 1, ctx.r30.u8);
	// stb r30,2(r29)
	PPC_STORE_U8(ctx.r29.u32 + 2, ctx.r30.u8);
	// stw r30,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r30.u32);
	// bl 0x831791c4
	ctx.lr = 0x82A13A60;
	__imp__RtlInitializeCriticalSection(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// addi r31,r29,36
	ctx.r31.s64 = ctx.r29.s64 + 36;
	// li r28,7
	ctx.r28.s64 = 7;
	// lfs f31,5184(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5184);
	ctx.f31.f64 = double(temp.f32);
loc_82A13A70:
	// li r11,254
	ctx.r11.s64 = 254;
	// stfs f31,16(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r30,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r30.u8);
	// li r5,16
	ctx.r5.s64 = 16;
	// stb r30,1(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1, ctx.r30.u8);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// addi r3,r31,20
	ctx.r3.s64 = ctx.r31.s64 + 20;
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// stw r10,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r10.u32);
	// stw r30,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r30.u32);
	// bl 0x82fa7cf0
	ctx.lr = 0x82A13AA8;
	sub_82FA7CF0(ctx, base);
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// addi r31,r31,44
	ctx.r31.s64 = ctx.r31.s64 + 44;
	// bge 0x82a13a70
	if (!ctx.cr0.lt) goto loc_82A13A70;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A13AC4"))) PPC_WEAK_FUNC(sub_82A13AC4);
PPC_FUNC_IMPL(__imp__sub_82A13AC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A13AC8"))) PPC_WEAK_FUNC(sub_82A13AC8);
PPC_FUNC_IMPL(__imp__sub_82A13AC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x82A13AD0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r29,r11,24040
	ctx.r29.s64 = ctx.r11.s64 + 24040;
	// addi r3,r29,8
	ctx.r3.s64 = ctx.r29.s64 + 8;
	// bl 0x831791a4
	ctx.lr = 0x82A13AE8;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lbz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 0);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82a13b10
	if (!ctx.cr0.eq) goto loc_82A13B10;
	// lis r31,-31999
	ctx.r31.s64 = -2097086464;
	// ori r31,r31,5
	ctx.r31.u64 = ctx.r31.u64 | 5;
loc_82A13AFC:
	// addi r3,r29,8
	ctx.r3.s64 = ctx.r29.s64 + 8;
	// bl 0x831791b4
	ctx.lr = 0x82A13B04;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
loc_82A13B10:
	// li r28,8
	ctx.r28.s64 = 8;
	// addi r31,r29,44
	ctx.r31.s64 = ctx.r29.s64 + 44;
loc_82A13B18:
	// lbz r11,-8(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + -8);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82a13b94
	if (ctx.cr0.eq) goto loc_82A13B94;
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82a13b94
	if (!ctx.cr6.eq) goto loc_82A13B94;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82a13b94
	if (ctx.cr6.eq) goto loc_82A13B94;
	// lwz r11,-4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	// mulli r11,r11,448
	ctx.r11.s64 = ctx.r11.s64 * 448;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82a13b88
	if (ctx.cr6.eq) goto loc_82A13B88;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r30,52
	ctx.r10.s64 = ctx.r30.s64 + 52;
loc_82A13B5C:
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82a13b7c
	if (ctx.cr6.eq) goto loc_82A13B7C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,448
	ctx.r10.s64 = ctx.r10.s64 + 448;
	// cmplwi cr6,r11,6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 6, ctx.xer);
	// blt cr6,0x82a13b5c
	if (ctx.cr6.lt) goto loc_82A13B5C;
	// b 0x82a13b94
	goto loc_82A13B94;
loc_82A13B7C:
	// stw r11,-4(r31)
	PPC_STORE_U32(ctx.r31.u32 + -4, ctx.r11.u32);
	// mulli r11,r11,448
	ctx.r11.s64 = ctx.r11.s64 * 448;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
loc_82A13B88:
	// addi r4,r11,48
	ctx.r4.s64 = ctx.r11.s64 + 48;
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// bl 0x82a211b8
	ctx.lr = 0x82A13B94;
	sub_82A211B8(ctx, base);
loc_82A13B94:
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// addi r31,r31,44
	ctx.r31.s64 = ctx.r31.s64 + 44;
	// bne 0x82a13b18
	if (!ctx.cr0.eq) goto loc_82A13B18;
	// li r31,0
	ctx.r31.s64 = 0;
	// b 0x82a13afc
	goto loc_82A13AFC;
}

__attribute__((alias("__imp__sub_82A13BA8"))) PPC_WEAK_FUNC(sub_82A13BA8);
PPC_FUNC_IMPL(__imp__sub_82A13BA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x82A13BB0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// li r5,2784
	ctx.r5.s64 = 2784;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// bl 0x82a75988
	ctx.lr = 0x82A13BD4;
	sub_82A75988(ctx, base);
	// li r11,5
	ctx.r11.s64 = 5;
	// li r10,21076
	ctx.r10.s64 = 21076;
	// std r11,0(r31)
	PPC_STORE_U64(ctx.r31.u32 + 0, ctx.r11.u64);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// std r10,8(r31)
	PPC_STORE_U64(ctx.r31.u32 + 8, ctx.r10.u64);
	// ld r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r30.u32 + 0);
	// std r9,2736(r31)
	PPC_STORE_U64(ctx.r31.u32 + 2736, ctx.r9.u64);
	// beq cr6,0x82a13c04
	if (ctx.cr6.eq) goto loc_82A13C04;
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// stw r11,2748(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2748, ctx.r11.u32);
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// stw r10,2752(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2752, ctx.r10.u32);
loc_82A13C04:
	// lwz r9,4(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// li r10,16
	ctx.r10.s64 = 16;
	// li r11,32
	ctx.r11.s64 = 32;
	// stw r9,2756(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2756, ctx.r9.u32);
	// lwz r8,0(r28)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// stw r8,2760(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2760, ctx.r8.u32);
	// lvx128 v63,r30,r10
	simd::store_shuffled(ctx.v63, simd::load_and_shuffle(base + ((ctx.r30.u32 + ctx.r10.u32) & ~0xF), VectorMaskL));
	// stvx128 v63,r31,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32 + ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v62,r30,r11
	simd::store_shuffled(ctx.v62, simd::load_and_shuffle(base + ((ctx.r30.u32 + ctx.r11.u32) & ~0xF), VectorMaskL));
	// stvx128 v62,r31,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32 + ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v62.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lwz r7,12(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// stw r7,2744(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2744, ctx.r7.u32);
	// bl 0x83178df4
	ctx.lr = 0x82A13C38;
	__imp__XamGetSystemVersion(ctx, base);
	// lis r6,54
	ctx.r6.s64 = 3538944;
	// rlwinm r5,r3,0,8,23
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFFF00;
	// ori r4,r6,45056
	ctx.r4.u64 = ctx.r6.u64 | 45056;
	// cmplw cr6,r5,r4
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r4.u32, ctx.xer);
	// bgt cr6,0x82a13c64
	if (ctx.cr6.gt) goto loc_82A13C64;
	// lwz r11,2744(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2744);
	// rlwinm r10,r11,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82a13c64
	if (ctx.cr6.eq) goto loc_82A13C64;
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
	// stw r11,2744(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2744, ctx.r11.u32);
loc_82A13C64:
	// li r5,2688
	ctx.r5.s64 = 2688;
	// addi r4,r30,48
	ctx.r4.s64 = ctx.r30.s64 + 48;
	// addi r3,r31,48
	ctx.r3.s64 = ctx.r31.s64 + 48;
	// bl 0x82a75220
	ctx.lr = 0x82A13C74;
	sub_82A75220(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A13C7C"))) PPC_WEAK_FUNC(sub_82A13C7C);
PPC_FUNC_IMPL(__imp__sub_82A13C7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A13C80"))) PPC_WEAK_FUNC(sub_82A13C80);
PPC_FUNC_IMPL(__imp__sub_82A13C80) {
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
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r8,5
	ctx.r8.s64 = 5;
	// li r7,21076
	ctx.r7.s64 = 21076;
	// std r11,0(r9)
	PPC_STORE_U64(ctx.r9.u32 + 0, ctx.r11.u64);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// std r11,8(r9)
	PPC_STORE_U64(ctx.r9.u32 + 8, ctx.r11.u64);
	// std r11,16(r9)
	PPC_STORE_U64(ctx.r9.u32 + 16, ctx.r11.u64);
	// std r8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// std r7,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r7.u64);
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// bl 0x82a775d0
	ctx.lr = 0x82A13CC0;
	sub_82A775D0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A13CD0"))) PPC_WEAK_FUNC(sub_82A13CD0);
PPC_FUNC_IMPL(__imp__sub_82A13CD0) {
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
	// stwu r1,-2912(r1)
	ea = -2912 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82a13dc0
	if (ctx.cr6.eq) goto loc_82A13DC0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a13dc0
	if (ctx.cr6.eq) goto loc_82A13DC0;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82a13dc0
	if (ctx.cr6.eq) goto loc_82A13DC0;
	// li r11,256
	ctx.r11.s64 = 256;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// li r10,768
	ctx.r10.s64 = 768;
	// stw r5,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r5.u32);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82a13ba8
	ctx.lr = 0x82A13D24;
	sub_82A13BA8(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82a775b8
	ctx.lr = 0x82A13D2C;
	sub_82A775B8(ctx, base);
	// lis r9,-31999
	ctx.r9.s64 = -2097086464;
	// lis r10,-31964
	ctx.r10.s64 = -2094792704;
	// ori r8,r9,11
	ctx.r8.u64 = ctx.r9.u64 | 11;
	// cmpw cr6,r3,r8
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x82a13db4
	if (!ctx.cr6.eq) goto loc_82A13DB4;
	// addi r31,r10,29312
	ctx.r31.s64 = ctx.r10.s64 + 29312;
	// li r11,1
	ctx.r11.s64 = 1;
	// lis r10,-31975
	ctx.r10.s64 = -2095513600;
	// addi r30,r10,-12608
	ctx.r30.s64 = ctx.r10.s64 + -12608;
	// stw r11,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r11.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831791a4
	ctx.lr = 0x82A13D5C;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lis r10,0
	ctx.r10.s64 = 0;
	// lwz r11,2860(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 2860);
	// ori r9,r10,59548
	ctx.r9.u64 = ctx.r10.u64 | 59548;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwzx r10,r31,r9
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// bne cr6,0x82a13d7c
	if (!ctx.cr6.eq) goto loc_82A13D7C;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82A13D7C:
	// lis r8,0
	ctx.r8.s64 = 0;
	// lwz r9,2864(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 2864);
	// ori r7,r8,59564
	ctx.r7.u64 = ctx.r8.u64 | 59564;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// stwx r11,r31,r7
	PPC_STORE_U32(ctx.r31.u32 + ctx.r7.u32, ctx.r11.u32);
	// subf r11,r10,r9
	ctx.r11.s64 = ctx.r9.s64 - ctx.r10.s64;
	// bne cr6,0x82a13d9c
	if (!ctx.cr6.eq) goto loc_82A13D9C;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82A13D9C:
	// lis r10,0
	ctx.r10.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// ori r9,r10,59568
	ctx.r9.u64 = ctx.r10.u64 | 59568;
	// stwx r11,r31,r9
	PPC_STORE_U32(ctx.r31.u32 + ctx.r9.u32, ctx.r11.u32);
	// bl 0x831791b4
	ctx.lr = 0x82A13DB0;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// b 0x82a13dc0
	goto loc_82A13DC0;
loc_82A13DB4:
	// addi r9,r10,29312
	ctx.r9.s64 = ctx.r10.s64 + 29312;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,132(r9)
	PPC_STORE_U32(ctx.r9.u32 + 132, ctx.r11.u32);
loc_82A13DC0:
	// addi r1,r1,2912
	ctx.r1.s64 = ctx.r1.s64 + 2912;
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

__attribute__((alias("__imp__sub_82A13DD8"))) PPC_WEAK_FUNC(sub_82A13DD8);
PPC_FUNC_IMPL(__imp__sub_82A13DD8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7664
	ctx.lr = 0x82A13DE0;
	__savegprlr_23(ctx, base);
	// stfd f31,-88(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -88, ctx.f31.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82a13e00
	if (!ctx.cr6.eq) goto loc_82A13E00;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// b 0x82a13ed8
	goto loc_82A13ED8;
loc_82A13E00:
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// lwz r11,31328(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 31328);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82a13e1c
	if (!ctx.cr6.eq) goto loc_82A13E1C;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// b 0x82a13ed8
	goto loc_82A13ED8;
loc_82A13E1C:
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r30,r11,24432
	ctx.r30.s64 = ctx.r11.s64 + 24432;
	// addi r4,r30,6528
	ctx.r4.s64 = ctx.r30.s64 + 6528;
	// bl 0x82a22158
	ctx.lr = 0x82A13E30;
	sub_82A22158(ctx, base);
	// lis r11,-31975
	ctx.r11.s64 = -2095513600;
	// addi r24,r11,-12312
	ctx.r24.s64 = ctx.r11.s64 + -12312;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x831791a4
	ctx.lr = 0x82A13E40;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lis r23,-31963
	ctx.r23.s64 = -2094727168;
	// ld r11,31336(r23)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r23.u32 + 31336);
	// cmpdi cr6,r11,0
	ctx.cr6.compare<int64_t>(ctx.r11.s64, 0, ctx.xer);
	// beq cr6,0x82a13ec4
	if (ctx.cr6.eq) goto loc_82A13EC4;
	// ld r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r28.u32 + 0);
	// addi r25,r28,32
	ctx.r25.s64 = ctx.r28.s64 + 32;
	// li r26,0
	ctx.r26.s64 = 0;
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// addi r29,r30,6528
	ctx.r29.s64 = ctx.r30.s64 + 6528;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// addi r27,r28,48
	ctx.r27.s64 = ctx.r28.s64 + 48;
	// frsp f31,f0
	ctx.f31.f64 = double(float(ctx.f0.f64));
loc_82A13E78:
	// li r31,0
	ctx.r31.s64 = 0;
loc_82A13E7C:
	// add r11,r26,r31
	ctx.r11.u64 = ctx.r26.u64 + ctx.r31.u64;
	// lvx128 v1,r0,r25
	simd::store_shuffled(ctx.v1, simd::load_and_shuffle(base + ((ctx.r25.u32) & ~0xF), VectorMaskL));
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mulli r11,r11,544
	ctx.r11.s64 = ctx.r11.s64 * 544;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// add r3,r11,r30
	ctx.r3.u64 = ctx.r11.u64 + ctx.r30.u64;
	// bl 0x82a21c38
	ctx.lr = 0x82A13EA0;
	sub_82A21C38(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpwi cr6,r31,2
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 2, ctx.xer);
	// blt cr6,0x82a13e7c
	if (ctx.cr6.lt) goto loc_82A13E7C;
	// addi r29,r29,60
	ctx.r29.s64 = ctx.r29.s64 + 60;
	// addi r11,r30,6888
	ctx.r11.s64 = ctx.r30.s64 + 6888;
	// addi r27,r27,448
	ctx.r27.s64 = ctx.r27.s64 + 448;
	// addi r26,r26,2
	ctx.r26.s64 = ctx.r26.s64 + 2;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82a13e78
	if (ctx.cr6.lt) goto loc_82A13E78;
loc_82A13EC4:
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x831791b4
	ctx.lr = 0x82A13ECC;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// ld r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r28.u32 + 0);
	// li r3,0
	ctx.r3.s64 = 0;
	// std r11,31336(r23)
	PPC_STORE_U64(ctx.r23.u32 + 31336, ctx.r11.u64);
loc_82A13ED8:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f31,-88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// b 0x82fa76b4
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A13EE4"))) PPC_WEAK_FUNC(sub_82A13EE4);
PPC_FUNC_IMPL(__imp__sub_82A13EE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A13EE8"))) PPC_WEAK_FUNC(sub_82A13EE8);
PPC_FUNC_IMPL(__imp__sub_82A13EE8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa766c
	ctx.lr = 0x82A13EF0;
	__savegprlr_25(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// rlwinm r11,r5,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0xFFFFFFFE;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// mr r25,r7
	ctx.r25.u64 = ctx.r7.u64;
	// rlwinm. r11,r11,0,27,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFF9F;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82a13f20
	if (ctx.cr0.eq) goto loc_82A13F20;
loc_82A13F14:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// b 0x82a1409c
	goto loc_82A1409C;
loc_82A13F20:
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82a13f14
	if (ctx.cr0.eq) goto loc_82A13F14;
	// rlwinm. r27,r30,0,26,26
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// beq 0x82a13f40
	if (ctx.cr0.eq) goto loc_82A13F40;
	// cmplwi cr6,r29,8
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 8, ctx.xer);
	// blt cr6,0x82a13f40
	if (ctx.cr6.lt) goto loc_82A13F40;
	// cmpwi cr6,r29,-2
	ctx.cr6.compare<int32_t>(ctx.r29.s32, -2, ctx.xer);
	// bne cr6,0x82a13f14
	if (!ctx.cr6.eq) goto loc_82A13F14;
loc_82A13F40:
	// rlwinm. r11,r30,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82a13f50
	if (ctx.cr0.eq) goto loc_82A13F50;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x82a13f14
	if (ctx.cr6.eq) goto loc_82A13F14;
loc_82A13F50:
	// rlwinm. r11,r30,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82a13f60
	if (ctx.cr0.eq) goto loc_82A13F60;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x82a13f14
	if (ctx.cr6.eq) goto loc_82A13F14;
loc_82A13F60:
	// lis r11,-31964
	ctx.r11.s64 = -2094792704;
	// addi r11,r11,29312
	ctx.r11.s64 = ctx.r11.s64 + 29312;
	// lwz r10,10632(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10632);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82a14094
	if (ctx.cr6.eq) goto loc_82A14094;
	// lis r31,-31963
	ctx.r31.s64 = -2094727168;
	// lwz r10,24028(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24028);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82a14094
	if (ctx.cr6.eq) goto loc_82A14094;
	// lwz r11,124(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82a13f9c
	if (!ctx.cr6.eq) goto loc_82A13F9C;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,1167
	ctx.r3.u64 = ctx.r3.u64 | 1167;
	// b 0x82a1409c
	goto loc_82A1409C;
loc_82A13F9C:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82a0c9b8
	ctx.lr = 0x82A13FA4;
	sub_82A0C9B8(ctx, base);
	// lwz r31,24028(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24028);
	// bl 0x82a74720
	ctx.lr = 0x82A13FAC;
	sub_82A74720(ctx, base);
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// lwz r11,24036(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24036);
	// subf r11,r11,r3
	ctx.r11.s64 = ctx.r3.s64 - ctx.r11.s64;
	// addic r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r31,r11,r31
	ctx.r31.u64 = ctx.r11.u64 & ctx.r31.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82a13fe4
	if (!ctx.cr6.eq) goto loc_82A13FE4;
	// lis r31,-31999
	ctx.r31.s64 = -2097086464;
	// ori r31,r31,5
	ctx.r31.u64 = ctx.r31.u64 | 5;
loc_82A13FD4:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82a0ca30
	ctx.lr = 0x82A13FDC;
	sub_82A0CA30(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x82a1409c
	goto loc_82A1409C;
loc_82A13FE4:
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r1,100
	ctx.r5.s64 = ctx.r1.s64 + 100;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82a0c960
	ctx.lr = 0x82A13FFC;
	sub_82A0C960(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82a14010
	if (!ctx.cr0.eq) goto loc_82A14010;
	// lis r31,-31999
	ctx.r31.s64 = -2097086464;
	// ori r31,r31,8
	ctx.r31.u64 = ctx.r31.u64 | 8;
	// b 0x82a13fd4
	goto loc_82A13FD4;
loc_82A14010:
	// lwz r6,100(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// mulli r11,r6,352
	ctx.r11.s64 = ctx.r6.s64 * 352;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r5,r11,224
	ctx.r5.s64 = ctx.r11.s64 + 224;
	// lwz r11,544(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 544);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x82a14038
	if (!ctx.cr6.eq) goto loc_82A14038;
	// lis r31,-31999
	ctx.r31.s64 = -2097086464;
	// ori r31,r31,12
	ctx.r31.u64 = ctx.r31.u64 | 12;
	// b 0x82a13fd4
	goto loc_82A13FD4;
loc_82A14038:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x82a1406c
	if (ctx.cr6.eq) goto loc_82A1406C;
	// cmplwi cr6,r29,8
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 8, ctx.xer);
	// bgt cr6,0x82a1406c
	if (ctx.cr6.gt) goto loc_82A1406C;
	// mulli r11,r29,28
	ctx.r11.s64 = ctx.r29.s64 * 28;
	// lwzx r11,r11,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82a14060
	if (ctx.cr6.eq) goto loc_82A14060;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82a1406c
	if (!ctx.cr6.eq) goto loc_82A1406C;
loc_82A14060:
	// lis r31,-32761
	ctx.r31.s64 = -2147024896;
	// ori r31,r31,87
	ctx.r31.u64 = ctx.r31.u64 | 87;
	// b 0x82a13fd4
	goto loc_82A13FD4;
loc_82A1406C:
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
	// stw r25,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r25.u32);
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x82a0ea78
	ctx.lr = 0x82A1408C;
	sub_82A0EA78(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x82a13fd4
	goto loc_82A13FD4;
loc_82A14094:
	// lis r3,-31999
	ctx.r3.s64 = -2097086464;
	// ori r3,r3,5
	ctx.r3.u64 = ctx.r3.u64 | 5;
loc_82A1409C:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82fa76bc
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A140A4"))) PPC_WEAK_FUNC(sub_82A140A4);
PPC_FUNC_IMPL(__imp__sub_82A140A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A140A8"))) PPC_WEAK_FUNC(sub_82A140A8);
PPC_FUNC_IMPL(__imp__sub_82A140A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7674
	ctx.lr = 0x82A140B0;
	__savegprlr_27(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31964
	ctx.r11.s64 = -2094792704;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r11,r11,29312
	ctx.r11.s64 = ctx.r11.s64 + 29312;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// lwz r10,124(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 124);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82a140e4
	if (!ctx.cr6.eq) goto loc_82A140E4;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,1167
	ctx.r3.u64 = ctx.r3.u64 | 1167;
	// b 0x82a141c8
	goto loc_82A141C8;
loc_82A140E4:
	// lwz r11,10632(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10632);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82a141c0
	if (ctx.cr6.eq) goto loc_82A141C0;
	// lis r31,-31963
	ctx.r31.s64 = -2094727168;
	// lwz r11,24028(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24028);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a141c0
	if (ctx.cr6.eq) goto loc_82A141C0;
	// rlwinm. r11,r29,0,3,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0xFFFFFFFFDFFFFFFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82a14114
	if (ctx.cr0.eq) goto loc_82A14114;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// b 0x82a141c8
	goto loc_82A141C8;
loc_82A14114:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82a0c9b8
	ctx.lr = 0x82A1411C;
	sub_82A0C9B8(ctx, base);
	// lwz r31,24028(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24028);
	// bl 0x82a74720
	ctx.lr = 0x82A14124;
	sub_82A74720(ctx, base);
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// lwz r11,24036(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24036);
	// subf r11,r11,r3
	ctx.r11.s64 = ctx.r3.s64 - ctx.r11.s64;
	// addic r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r31,r11,r31
	ctx.r31.u64 = ctx.r11.u64 & ctx.r31.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82a1415c
	if (!ctx.cr6.eq) goto loc_82A1415C;
	// lis r31,-31999
	ctx.r31.s64 = -2097086464;
	// ori r31,r31,5
	ctx.r31.u64 = ctx.r31.u64 | 5;
loc_82A1414C:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82a0ca30
	ctx.lr = 0x82A14154;
	sub_82A0CA30(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x82a141c8
	goto loc_82A141C8;
loc_82A1415C:
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r1,100
	ctx.r5.s64 = ctx.r1.s64 + 100;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a0c960
	ctx.lr = 0x82A14174;
	sub_82A0C960(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82a14188
	if (!ctx.cr0.eq) goto loc_82A14188;
	// lis r31,-31999
	ctx.r31.s64 = -2097086464;
	// ori r31,r31,8
	ctx.r31.u64 = ctx.r31.u64 | 8;
	// b 0x82a1414c
	goto loc_82A1414C;
loc_82A14188:
	// lwz r6,100(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// mulli r11,r6,352
	ctx.r11.s64 = ctx.r6.s64 * 352;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// addi r5,r11,224
	ctx.r5.s64 = ctx.r11.s64 + 224;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82a0ea78
	ctx.lr = 0x82A141B8;
	sub_82A0EA78(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x82a1414c
	goto loc_82A1414C;
loc_82A141C0:
	// lis r3,-31999
	ctx.r3.s64 = -2097086464;
	// ori r3,r3,5
	ctx.r3.u64 = ctx.r3.u64 | 5;
loc_82A141C8:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82fa76c4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A141D0"))) PPC_WEAK_FUNC(sub_82A141D0);
PPC_FUNC_IMPL(__imp__sub_82A141D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x82A141D8;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r3,8
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 8, ctx.xer);
	// blt cr6,0x82a141f8
	if (ctx.cr6.lt) goto loc_82A141F8;
loc_82A141EC:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// b 0x82a14264
	goto loc_82A14264;
loc_82A141F8:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82a141ec
	if (ctx.cr6.eq) goto loc_82A141EC;
	// lis r11,-31964
	ctx.r11.s64 = -2094792704;
	// addi r11,r11,29312
	ctx.r11.s64 = ctx.r11.s64 + 29312;
	// lwz r11,10632(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10632);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82a1425c
	if (ctx.cr6.eq) goto loc_82A1425C;
	// lis r30,-31963
	ctx.r30.s64 = -2094727168;
	// lwz r11,24028(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24028);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a1425c
	if (ctx.cr6.eq) goto loc_82A1425C;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82a0c9b8
	ctx.lr = 0x82A1422C;
	sub_82A0C9B8(ctx, base);
	// lwz r30,24028(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24028);
	// bl 0x82a74720
	ctx.lr = 0x82A14234;
	sub_82A74720(ctx, base);
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// lwz r11,24036(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24036);
	// subf r11,r11,r3
	ctx.r11.s64 = ctx.r3.s64 - ctx.r11.s64;
	// addic r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 & ctx.r30.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82a1426c
	if (!ctx.cr6.eq) goto loc_82A1426C;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82a0ca30
	ctx.lr = 0x82A1425C;
	sub_82A0CA30(ctx, base);
loc_82A1425C:
	// lis r3,-31999
	ctx.r3.s64 = -2097086464;
	// ori r3,r3,5
	ctx.r3.u64 = ctx.r3.u64 | 5;
loc_82A14264:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
loc_82A1426C:
	// mulli r10,r29,28
	ctx.r10.s64 = ctx.r29.s64 * 28;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,254
	ctx.r9.s64 = 254;
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82a142c0
	if (ctx.cr6.eq) goto loc_82A142C0;
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// beq cr6,0x82a142c0
	if (ctx.cr6.eq) goto loc_82A142C0;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r9,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82a142c0
	if (!ctx.cr6.eq) goto loc_82A142C0;
	// lis r11,16384
	ctx.r11.s64 = 1073741824;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
loc_82A142C0:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82a0ca30
	ctx.lr = 0x82A142C8;
	sub_82A0CA30(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82a14264
	goto loc_82A14264;
}

__attribute__((alias("__imp__sub_82A142D0"))) PPC_WEAK_FUNC(sub_82A142D0);
PPC_FUNC_IMPL(__imp__sub_82A142D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7674
	ctx.lr = 0x82A142D8;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31964
	ctx.r11.s64 = -2094792704;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// addi r11,r11,29312
	ctx.r11.s64 = ctx.r11.s64 + 29312;
	// lwz r11,10632(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10632);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82a143d4
	if (ctx.cr6.eq) goto loc_82A143D4;
	// lis r28,-31963
	ctx.r28.s64 = -2094727168;
	// lwz r11,24028(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 24028);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a143d4
	if (ctx.cr6.eq) goto loc_82A143D4;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82a0c9b8
	ctx.lr = 0x82A1430C;
	sub_82A0C9B8(ctx, base);
	// lwz r31,24028(r28)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r28.u32 + 24028);
	// bl 0x82a74720
	ctx.lr = 0x82A14314;
	sub_82A74720(ctx, base);
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// lwz r11,24036(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24036);
	// subf r11,r11,r3
	ctx.r11.s64 = ctx.r3.s64 - ctx.r11.s64;
	// addic r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r30,r11,r31
	ctx.r30.u64 = ctx.r11.u64 & ctx.r31.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x82a1434c
	if (!ctx.cr6.eq) goto loc_82A1434C;
	// lis r31,-31999
	ctx.r31.s64 = -2097086464;
	// ori r31,r31,5
	ctx.r31.u64 = ctx.r31.u64 | 5;
loc_82A1433C:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82a0ca30
	ctx.lr = 0x82A14344;
	sub_82A0CA30(ctx, base);
loc_82A14344:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x82a143dc
	goto loc_82A143DC;
loc_82A1434C:
	// addis r29,r30,2
	ctx.r29.s64 = ctx.r30.s64 + 131072;
	// addi r29,r29,19108
	ctx.r29.s64 = ctx.r29.s64 + 19108;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82a1436c
	if (ctx.cr6.eq) goto loc_82A1436C;
	// lis r31,-32761
	ctx.r31.s64 = -2147024896;
	// ori r31,r31,170
	ctx.r31.u64 = ctx.r31.u64 | 170;
	// b 0x82a1433c
	goto loc_82A1433C;
loc_82A1436C:
	// clrlwi. r31,r27,24
	ctx.r31.u64 = ctx.r27.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x82a14378
	if (!ctx.cr0.eq) goto loc_82A14378;
	// bl 0x82a74720
	ctx.lr = 0x82A14378;
	sub_82A74720(ctx, base);
loc_82A14378:
	// cntlzw r11,r31
	ctx.r11.u64 = ctx.r31.u32 == 0 ? 32 : __builtin_clz(ctx.r31.u32);
	// li r5,2
	ctx.r5.s64 = 2;
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// bl 0x82a0e918
	ctx.lr = 0x82A1439C;
	sub_82A0E918(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x82a143a8
	if (ctx.cr0.lt) goto loc_82A143A8;
	// bl 0x82a0d0c0
	ctx.lr = 0x82A143A8;
	sub_82A0D0C0(ctx, base);
loc_82A143A8:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82a0ca30
	ctx.lr = 0x82A143B0;
	sub_82A0CA30(ctx, base);
	// lwz r11,24028(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 24028);
	// li r7,0
	ctx.r7.s64 = 0;
	// addis r3,r11,9
	ctx.r3.s64 = ctx.r11.s64 + 589824;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,3
	ctx.r4.s64 = 3;
	// addi r3,r3,-2396
	ctx.r3.s64 = ctx.r3.s64 + -2396;
	// bl 0x83179414
	ctx.lr = 0x82A143D0;
	__imp__KeWaitForSingleObject(ctx, base);
	// b 0x82a14344
	goto loc_82A14344;
loc_82A143D4:
	// lis r3,-31999
	ctx.r3.s64 = -2097086464;
	// ori r3,r3,5
	ctx.r3.u64 = ctx.r3.u64 | 5;
loc_82A143DC:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82fa76c4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A143E4"))) PPC_WEAK_FUNC(sub_82A143E4);
PPC_FUNC_IMPL(__imp__sub_82A143E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A143E8"))) PPC_WEAK_FUNC(sub_82A143E8);
PPC_FUNC_IMPL(__imp__sub_82A143E8) {
	PPC_FUNC_PROLOGUE();
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82a142d0
	sub_82A142D0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A143F0"))) PPC_WEAK_FUNC(sub_82A143F0);
PPC_FUNC_IMPL(__imp__sub_82A143F0) {
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
	// beq cr6,0x82a14428
	if (ctx.cr6.eq) goto loc_82A14428;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lwz r4,-24632(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -24632);
	// bl 0x82691460
	ctx.lr = 0x82A1441C;
	sub_82691460(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
loc_82A14428:
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

__attribute__((alias("__imp__sub_82A1443C"))) PPC_WEAK_FUNC(sub_82A1443C);
PPC_FUNC_IMPL(__imp__sub_82A1443C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A14440"))) PPC_WEAK_FUNC(sub_82A14440);
PPC_FUNC_IMPL(__imp__sub_82A14440) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// stfd f29,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f29.u64);
	// stfd f30,-32(r1)
	PPC_STORE_U64(ctx.r1.u32 + -32, ctx.f30.u64);
	// stfd f31,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.f31.u64);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r31,r3,4
	ctx.r31.s64 = ctx.r3.s64 + 4;
	// fmr f31,f2
	ctx.f31.f64 = ctx.f2.f64;
	// fmr f30,f3
	ctx.f30.f64 = ctx.f3.f64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f29,f4
	ctx.f29.f64 = ctx.f4.f64;
	// bl 0x82a22330
	ctx.lr = 0x82A14474;
	sub_82A22330(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82a22340
	ctx.lr = 0x82A14480;
	sub_82A22340(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f30.f64;
	// bl 0x82a22350
	ctx.lr = 0x82A1448C;
	sub_82A22350(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f1,f29
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f29.f64;
	// bl 0x82a22360
	ctx.lr = 0x82A14498;
	sub_82A22360(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f29,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// lfd f30,-32(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -32);
	// lfd f31,-24(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -24);
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A144B8"))) PPC_WEAK_FUNC(sub_82A144B8);
PPC_FUNC_IMPL(__imp__sub_82A144B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa766c
	ctx.lr = 0x82A144C0;
	__savegprlr_25(ctx, base);
	// stfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.f31.u64);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// mr r26,r8
	ctx.r26.u64 = ctx.r8.u64;
	// mr r25,r9
	ctx.r25.u64 = ctx.r9.u64;
	// bl 0x82a231a0
	ctx.lr = 0x82A144F0;
	sub_82A231A0(ctx, base);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82a22300
	ctx.lr = 0x82A144F8;
	sub_82A22300(ctx, base);
	// addi r4,r31,116
	ctx.r4.s64 = ctx.r31.s64 + 116;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// li r5,24
	ctx.r5.s64 = 24;
	// bl 0x82fa77c0
	ctx.lr = 0x82A14508;
	sub_82FA77C0(ctx, base);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// lbz r5,359(r1)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r1.u32 + 359);
	// bl 0x82a23348
	ctx.lr = 0x82A14518;
	sub_82A23348(ctx, base);
	// lwz r5,340(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 340);
	// lwz r10,348(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 348);
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r3,144(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// addi r9,r1,128
	ctx.r9.s64 = ctx.r1.s64 + 128;
	// mr r8,r26
	ctx.r8.u64 = ctx.r26.u64;
	// stw r5,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r5.u32);
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// std r11,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r11.u64);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r10,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82a24960
	ctx.lr = 0x82A14560;
	sub_82A24960(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x828b2440
	ctx.lr = 0x82A1456C;
	sub_828B2440(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// lfd f31,-72(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -72);
	// b 0x82fa76bc
	__restgprlr_25(ctx, base);
	return;
}

