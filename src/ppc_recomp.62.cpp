#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_8252B2A8"))) PPC_WEAK_FUNC(sub_8252B2A8);
PPC_FUNC_IMPL(__imp__sub_8252B2A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x8252B2B0;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8252b3d8
	if (ctx.cr6.eq) goto loc_8252B3D8;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x826a4180
	ctx.lr = 0x8252B2CC;
	sub_826A4180(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x822c2418
	ctx.lr = 0x8252B2EC;
	sub_822C2418(ctx, base);
	// bl 0x826a4210
	ctx.lr = 0x8252B2F0;
	sub_826A4210(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r29,r11,15136
	ctx.r29.s64 = ctx.r11.s64 + 15136;
	// lwz r4,15136(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 15136);
	// bl 0x826a72e8
	ctx.lr = 0x8252B308;
	sub_826A72E8(ctx, base);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8252b318
	if (ctx.cr6.eq) goto loc_8252B318;
	// bl 0x82241d18
	ctx.lr = 0x8252B318;
	sub_82241D18(ctx, base);
loc_8252B318:
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x822c2418
	ctx.lr = 0x8252B334;
	sub_822C2418(ctx, base);
	// bl 0x826a4210
	ctx.lr = 0x8252B338;
	sub_826A4210(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r4,4(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x826a72e8
	ctx.lr = 0x8252B348;
	sub_826A72E8(ctx, base);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8252b358
	if (ctx.cr6.eq) goto loc_8252B358;
	// bl 0x82241d18
	ctx.lr = 0x8252B358;
	sub_82241D18(ctx, base);
loc_8252B358:
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x822c2418
	ctx.lr = 0x8252B374;
	sub_822C2418(ctx, base);
	// bl 0x826a4210
	ctx.lr = 0x8252B378;
	sub_826A4210(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r4,8(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x826a72e8
	ctx.lr = 0x8252B388;
	sub_826A72E8(ctx, base);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8252b398
	if (ctx.cr6.eq) goto loc_8252B398;
	// bl 0x82241d18
	ctx.lr = 0x8252B398;
	sub_82241D18(ctx, base);
loc_8252B398:
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x822c2418
	ctx.lr = 0x8252B3B4;
	sub_822C2418(ctx, base);
	// bl 0x826a4210
	ctx.lr = 0x8252B3B8;
	sub_826A4210(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// lwz r4,12(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x826a72e8
	ctx.lr = 0x8252B3C8;
	sub_826A72E8(ctx, base);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8252b3d8
	if (ctx.cr6.eq) goto loc_8252B3D8;
	// bl 0x82241d18
	ctx.lr = 0x8252B3D8;
	sub_82241D18(ctx, base);
loc_8252B3D8:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8252b3e8
	if (ctx.cr6.eq) goto loc_8252B3E8;
	// bl 0x82241d18
	ctx.lr = 0x8252B3E8;
	sub_82241D18(ctx, base);
loc_8252B3E8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8252B3F0"))) PPC_WEAK_FUNC(sub_8252B3F0);
PPC_FUNC_IMPL(__imp__sub_8252B3F0) {
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
	// li r30,1
	ctx.r30.s64 = 1;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8252b424
	if (ctx.cr6.eq) goto loc_8252B424;
	// bl 0x82920258
	ctx.lr = 0x8252B418;
	sub_82920258(ctx, base);
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x8252b428
	if (ctx.cr6.eq) goto loc_8252B428;
loc_8252B424:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8252B428:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8252b44c
	if (!ctx.cr0.eq) goto loc_8252B44C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82920518
	ctx.lr = 0x8252B438;
	sub_82920518(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8252b44c
	if (!ctx.cr0.eq) goto loc_8252B44C;
	// lbz r11,216(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 216);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8252b450
	if (ctx.cr0.eq) goto loc_8252B450;
loc_8252B44C:
	// li r30,0
	ctx.r30.s64 = 0;
loc_8252B450:
	// cntlzw r11,r30
	ctx.r11.u64 = ctx.r30.u32 == 0 ? 32 : __builtin_clz(ctx.r30.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
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

__attribute__((alias("__imp__sub_8252B470"))) PPC_WEAK_FUNC(sub_8252B470);
PPC_FUNC_IMPL(__imp__sub_8252B470) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7660
	ctx.lr = 0x8252B478;
	__savegprlr_22(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// mr r22,r5
	ctx.r22.u64 = ctx.r5.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// bl 0x82546708
	ctx.lr = 0x8252B498;
	sub_82546708(ctx, base);
	// mr. r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq 0x8252b584
	if (ctx.cr0.eq) goto loc_8252B584;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82546b30
	ctx.lr = 0x8252B4A8;
	sub_82546B30(ctx, base);
	// li r11,36
	ctx.r11.s64 = 36;
	// li r30,-1
	ctx.r30.s64 = -1;
	// divwu r26,r3,r11
	ctx.r26.u32 = ctx.r3.u32 / ctx.r11.u32;
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// li r24,0
	ctx.r24.s64 = 0;
	// addi r27,r11,21292
	ctx.r27.s64 = ctx.r11.s64 + 21292;
loc_8252B4C0:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bl 0x825562b8
	ctx.lr = 0x8252B4D0;
	sub_825562B8(ctx, base);
	// mulli r11,r3,36
	ctx.r11.s64 = ctx.r3.s64 * 36;
	// add r29,r11,r28
	ctx.r29.u64 = ctx.r11.u64 + ctx.r28.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r29,32
	ctx.r3.s64 = ctx.r29.s64 + 32;
	// bl 0x82546708
	ctx.lr = 0x8252B4EC;
	sub_82546708(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82adfe80
	ctx.lr = 0x8252B4F4;
	sub_82ADFE80(ctx, base);
	// clrlwi r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// addi r10,r11,-2
	ctx.r10.s64 = ctx.r11.s64 + -2;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// beq cr6,0x8252b514
	if (ctx.cr6.eq) goto loc_8252B514;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x8252b524
	if (!ctx.cr6.eq) goto loc_8252B524;
loc_8252B514:
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// beq cr6,0x8252b554
	if (ctx.cr6.eq) goto loc_8252B554;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8252b554
	if (!ctx.cr6.eq) goto loc_8252B554;
loc_8252B524:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8252b534
	if (ctx.cr6.eq) goto loc_8252B534;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825469e0
	ctx.lr = 0x8252B534;
	sub_825469E0(ctx, base);
loc_8252B534:
	// addi r24,r24,1
	ctx.r24.s64 = ctx.r24.s64 + 1;
	// cmplwi cr6,r24,10
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 10, ctx.xer);
	// blt cr6,0x8252b4c0
	if (ctx.cr6.lt) goto loc_8252B4C0;
	// li r5,36
	ctx.r5.s64 = 36;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82fa77c0
	ctx.lr = 0x8252B550;
	sub_82FA77C0(ctx, base);
	// b 0x8252b574
	goto loc_8252B574;
loc_8252B554:
	// li r5,36
	ctx.r5.s64 = 36;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82fa77c0
	ctx.lr = 0x8252B564;
	sub_82FA77C0(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8252b574
	if (ctx.cr6.eq) goto loc_8252B574;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825469e0
	ctx.lr = 0x8252B574;
	sub_825469E0(ctx, base);
loc_8252B574:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x825469e0
	ctx.lr = 0x8252B57C;
	sub_825469E0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x8252b588
	goto loc_8252B588;
loc_8252B584:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8252B588:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82fa76b0
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8252B590"))) PPC_WEAK_FUNC(sub_8252B590);
PPC_FUNC_IMPL(__imp__sub_8252B590) {
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
	// bne cr6,0x8252b5d8
	if (!ctx.cr6.eq) goto loc_8252B5D8;
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x82691500
	ctx.lr = 0x8252B5B4;
	sub_82691500(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne 0x8252b5d8
	if (!ctx.cr0.eq) goto loc_8252B5D8;
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
	ctx.lr = 0x8252B5D8;
	sub_82240040(ctx, base);
loc_8252B5D8:
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r11,r11,12020
	ctx.r11.s64 = ctx.r11.s64 + 12020;
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

__attribute__((alias("__imp__sub_8252B604"))) PPC_WEAK_FUNC(sub_8252B604);
PPC_FUNC_IMPL(__imp__sub_8252B604) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8252B608"))) PPC_WEAK_FUNC(sub_8252B608);
PPC_FUNC_IMPL(__imp__sub_8252B608) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31966
	ctx.r11.s64 = -2094923776;
	// addi r3,r11,-27544
	ctx.r3.s64 = ctx.r11.s64 + -27544;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8252B614"))) PPC_WEAK_FUNC(sub_8252B614);
PPC_FUNC_IMPL(__imp__sub_8252B614) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8252B618"))) PPC_WEAK_FUNC(sub_8252B618);
PPC_FUNC_IMPL(__imp__sub_8252B618) {
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
	// bne cr6,0x8252b660
	if (!ctx.cr6.eq) goto loc_8252B660;
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x82691500
	ctx.lr = 0x8252B63C;
	sub_82691500(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne 0x8252b660
	if (!ctx.cr0.eq) goto loc_8252B660;
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
	ctx.lr = 0x8252B660;
	sub_82240040(ctx, base);
loc_8252B660:
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r11,r11,12044
	ctx.r11.s64 = ctx.r11.s64 + 12044;
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

__attribute__((alias("__imp__sub_8252B68C"))) PPC_WEAK_FUNC(sub_8252B68C);
PPC_FUNC_IMPL(__imp__sub_8252B68C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8252B690"))) PPC_WEAK_FUNC(sub_8252B690);
PPC_FUNC_IMPL(__imp__sub_8252B690) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa766c
	ctx.lr = 0x8252B698;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,4(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// addi r29,r30,1704
	ctx.r29.s64 = ctx.r30.s64 + 1704;
	// li r26,1
	ctx.r26.s64 = 1;
	// addi r27,r11,21120
	ctx.r27.s64 = ctx.r11.s64 + 21120;
loc_8252B6B8:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8252b6cc
	if (ctx.cr6.eq) goto loc_8252B6CC;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8252b770
	if (!ctx.cr6.eq) goto loc_8252B770;
loc_8252B6CC:
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplw cr6,r11,r25
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r25.u32, ctx.xer);
	// bne cr6,0x8252b770
	if (!ctx.cr6.eq) goto loc_8252B770;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825291d0
	ctx.lr = 0x8252B6EC;
	sub_825291D0(ctx, base);
	// lwz r11,2000(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2000);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8252b770
	if (!ctx.cr6.eq) goto loc_8252B770;
	// lwz r11,2004(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2004);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8252b770
	if (!ctx.cr6.eq) goto loc_8252B770;
	// lbz r11,69(r27)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + 69);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8252b76c
	if (ctx.cr0.eq) goto loc_8252B76C;
	// bl 0x8226d8e8
	ctx.lr = 0x8252B714;
	sub_8226D8E8(ctx, base);
	// lwz r4,4(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x8226ecf0
	ctx.lr = 0x8252B720;
	sub_8226ECF0(ctx, base);
	// lwz r11,128(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8252b76c
	if (!ctx.cr6.eq) goto loc_8252B76C;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x8252b76c
	if (ctx.cr6.eq) goto loc_8252B76C;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// b 0x8252b754
	goto loc_8252B754;
loc_8252B744:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r3,r9
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x8252b76c
	if (ctx.cr6.eq) goto loc_8252B76C;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_8252B754:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8252b744
	if (!ctx.cr6.eq) goto loc_8252B744;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82527c88
	ctx.lr = 0x8252B768;
	sub_82527C88(ctx, base);
	// b 0x8252b770
	goto loc_8252B770;
loc_8252B76C:
	// stw r26,2004(r30)
	PPC_STORE_U32(ctx.r30.u32 + 2004, ctx.r26.u32);
loc_8252B770:
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r29,r29,64
	ctx.r29.s64 = ctx.r29.s64 + 64;
	// cmpwi cr6,r28,4
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 4, ctx.xer);
	// blt cr6,0x8252b6b8
	if (ctx.cr6.lt) goto loc_8252B6B8;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82fa76bc
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8252B788"))) PPC_WEAK_FUNC(sub_8252B788);
PPC_FUNC_IMPL(__imp__sub_8252B788) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31966
	ctx.r11.s64 = -2094923776;
	// addi r3,r11,-27504
	ctx.r3.s64 = ctx.r11.s64 + -27504;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8252B794"))) PPC_WEAK_FUNC(sub_8252B794);
PPC_FUNC_IMPL(__imp__sub_8252B794) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8252B798"))) PPC_WEAK_FUNC(sub_8252B798);
PPC_FUNC_IMPL(__imp__sub_8252B798) {
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
	// bne cr6,0x8252b7e0
	if (!ctx.cr6.eq) goto loc_8252B7E0;
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x82691500
	ctx.lr = 0x8252B7BC;
	sub_82691500(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne 0x8252b7e0
	if (!ctx.cr0.eq) goto loc_8252B7E0;
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
	ctx.lr = 0x8252B7E0;
	sub_82240040(ctx, base);
loc_8252B7E0:
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r11,r11,12068
	ctx.r11.s64 = ctx.r11.s64 + 12068;
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

__attribute__((alias("__imp__sub_8252B80C"))) PPC_WEAK_FUNC(sub_8252B80C);
PPC_FUNC_IMPL(__imp__sub_8252B80C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8252B810"))) PPC_WEAK_FUNC(sub_8252B810);
PPC_FUNC_IMPL(__imp__sub_8252B810) {
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
	// lwz r11,1536(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1536);
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// blt cr6,0x8252b840
	if (ctx.cr6.lt) goto loc_8252B840;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,1540(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1540, ctx.r11.u32);
	// b 0x8252b8cc
	goto loc_8252B8CC;
loc_8252B840:
	// lwz r11,1692(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1692);
	// lwz r10,68(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8252b8cc
	if (ctx.cr6.eq) goto loc_8252B8CC;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// beq cr6,0x8252b8cc
	if (ctx.cr6.eq) goto loc_8252B8CC;
	// lwz r10,140(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 140);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8252b8cc
	if (!ctx.cr6.eq) goto loc_8252B8CC;
	// lwz r11,108(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8252b8cc
	if (!ctx.cr6.eq) goto loc_8252B8CC;
	// li r30,1
	ctx.r30.s64 = 1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r30,1980(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1980, ctx.r30.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82528678
	ctx.lr = 0x8252B884;
	sub_82528678(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8252b898
	if (ctx.cr6.eq) goto loc_8252B898;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x826a4180
	ctx.lr = 0x8252B898;
	sub_826A4180(ctx, base);
loc_8252B898:
	// stw r30,1984(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1984, ctx.r30.u32);
loc_8252B89C:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825293c0
	ctx.lr = 0x8252B8A8;
	sub_825293C0(ctx, base);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpwi cr6,r30,4
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 4, ctx.xer);
	// blt cr6,0x8252b89c
	if (ctx.cr6.lt) goto loc_8252B89C;
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r11,1984(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1984, ctx.r11.u32);
	// beq cr6,0x8252b8cc
	if (ctx.cr6.eq) goto loc_8252B8CC;
	// bl 0x82241d18
	ctx.lr = 0x8252B8CC;
	sub_82241D18(ctx, base);
loc_8252B8CC:
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

__attribute__((alias("__imp__sub_8252B8E4"))) PPC_WEAK_FUNC(sub_8252B8E4);
PPC_FUNC_IMPL(__imp__sub_8252B8E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8252B8E8"))) PPC_WEAK_FUNC(sub_8252B8E8);
PPC_FUNC_IMPL(__imp__sub_8252B8E8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31966
	ctx.r11.s64 = -2094923776;
	// addi r3,r11,-27464
	ctx.r3.s64 = ctx.r11.s64 + -27464;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8252B8F4"))) PPC_WEAK_FUNC(sub_8252B8F4);
PPC_FUNC_IMPL(__imp__sub_8252B8F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8252B8F8"))) PPC_WEAK_FUNC(sub_8252B8F8);
PPC_FUNC_IMPL(__imp__sub_8252B8F8) {
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
	// bne cr6,0x8252b940
	if (!ctx.cr6.eq) goto loc_8252B940;
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x82691500
	ctx.lr = 0x8252B91C;
	sub_82691500(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne 0x8252b940
	if (!ctx.cr0.eq) goto loc_8252B940;
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
	ctx.lr = 0x8252B940;
	sub_82240040(ctx, base);
loc_8252B940:
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r11,r11,12092
	ctx.r11.s64 = ctx.r11.s64 + 12092;
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

__attribute__((alias("__imp__sub_8252B96C"))) PPC_WEAK_FUNC(sub_8252B96C);
PPC_FUNC_IMPL(__imp__sub_8252B96C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8252B970"))) PPC_WEAK_FUNC(sub_8252B970);
PPC_FUNC_IMPL(__imp__sub_8252B970) {
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
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r31,1556(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1556);
	// lwz r11,1576(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1576);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x8252ba04
	if (!ctx.cr6.eq) goto loc_8252BA04;
	// lwz r10,1496(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1496);
	// li r8,56
	ctx.r8.s64 = 56;
	// lwz r9,1584(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1584);
	// li r30,0
	ctx.r30.s64 = 0;
	// add r11,r9,r10
	ctx.r11.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r11,1496(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1496, ctx.r11.u32);
	// lwz r7,1772(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1772);
	// lwz r6,1768(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1768);
	// subf r7,r6,r7
	ctx.r7.s64 = ctx.r7.s64 - ctx.r6.s64;
	// divw r8,r7,r8
	ctx.r8.s32 = ctx.r7.s32 / ctx.r8.s32;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x8252b9cc
	if (ctx.cr6.lt) goto loc_8252B9CC;
	// stw r30,1496(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1496, ctx.r30.u32);
loc_8252B9CC:
	// lwz r11,1496(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1496);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8252ba04
	if (ctx.cr6.eq) goto loc_8252BA04;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8252b9fc
	if (ctx.cr6.eq) goto loc_8252B9FC;
loc_8252B9E0:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,1472(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1472);
	// bl 0x82503dd0
	ctx.lr = 0x8252B9EC;
	sub_82503DD0(ctx, base);
	// lwz r11,1584(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1584);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x8252b9e0
	if (ctx.cr6.lt) goto loc_8252B9E0;
loc_8252B9FC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825049f0
	ctx.lr = 0x8252BA04;
	sub_825049F0(ctx, base);
loc_8252BA04:
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

__attribute__((alias("__imp__sub_8252BA1C"))) PPC_WEAK_FUNC(sub_8252BA1C);
PPC_FUNC_IMPL(__imp__sub_8252BA1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8252BA20"))) PPC_WEAK_FUNC(sub_8252BA20);
PPC_FUNC_IMPL(__imp__sub_8252BA20) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31966
	ctx.r11.s64 = -2094923776;
	// addi r3,r11,-27424
	ctx.r3.s64 = ctx.r11.s64 + -27424;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8252BA2C"))) PPC_WEAK_FUNC(sub_8252BA2C);
PPC_FUNC_IMPL(__imp__sub_8252BA2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8252BA30"))) PPC_WEAK_FUNC(sub_8252BA30);
PPC_FUNC_IMPL(__imp__sub_8252BA30) {
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
	// bne cr6,0x8252ba78
	if (!ctx.cr6.eq) goto loc_8252BA78;
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x82691500
	ctx.lr = 0x8252BA54;
	sub_82691500(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne 0x8252ba78
	if (!ctx.cr0.eq) goto loc_8252BA78;
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
	ctx.lr = 0x8252BA78;
	sub_82240040(ctx, base);
loc_8252BA78:
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r11,r11,12116
	ctx.r11.s64 = ctx.r11.s64 + 12116;
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

__attribute__((alias("__imp__sub_8252BAAC"))) PPC_WEAK_FUNC(sub_8252BAAC);
PPC_FUNC_IMPL(__imp__sub_8252BAAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8252BAB0"))) PPC_WEAK_FUNC(sub_8252BAB0);
PPC_FUNC_IMPL(__imp__sub_8252BAB0) {
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
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x8252b3f0
	ctx.lr = 0x8252BAD4;
	sub_8252B3F0(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x8252bb44
	if (ctx.cr6.eq) goto loc_8252BB44;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x8252bb1c
	if (!ctx.cr6.gt) goto loc_8252BB1C;
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r11,1444
	ctx.r11.s64 = 1444;
loc_8252BAFC:
	// lwzx r6,r11,r8
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// cmplw cr6,r6,r30
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x8252bb0c
	if (!ctx.cr6.eq) goto loc_8252BB0C;
	// li r7,1
	ctx.r7.s64 = 1;
loc_8252BB0C:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x8252bafc
	if (ctx.cr6.lt) goto loc_8252BAFC;
loc_8252BB1C:
	// clrlwi. r11,r7,24
	ctx.r11.u64 = ctx.r7.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8252bb44
	if (!ctx.cr0.eq) goto loc_8252BB44;
	// addi r11,r10,361
	ctx.r11.s64 = ctx.r10.s64 + 361;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r30,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r30.u32);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
loc_8252BB44:
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

__attribute__((alias("__imp__sub_8252BB5C"))) PPC_WEAK_FUNC(sub_8252BB5C);
PPC_FUNC_IMPL(__imp__sub_8252BB5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8252BB60"))) PPC_WEAK_FUNC(sub_8252BB60);
PPC_FUNC_IMPL(__imp__sub_8252BB60) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31966
	ctx.r11.s64 = -2094923776;
	// addi r3,r11,-27384
	ctx.r3.s64 = ctx.r11.s64 + -27384;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8252BB6C"))) PPC_WEAK_FUNC(sub_8252BB6C);
PPC_FUNC_IMPL(__imp__sub_8252BB6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8252BB70"))) PPC_WEAK_FUNC(sub_8252BB70);
PPC_FUNC_IMPL(__imp__sub_8252BB70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7670
	ctx.lr = 0x8252BB78;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// li r5,28
	ctx.r5.s64 = 28;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// bl 0x82fa77c0
	ctx.lr = 0x8252BB90;
	sub_82FA77C0(ctx, base);
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// li r11,3
	ctx.r11.s64 = 3;
	// addi r9,r10,5228
	ctx.r9.s64 = ctx.r10.s64 + 5228;
	// addi r27,r31,48
	ctx.r27.s64 = ctx.r31.s64 + 48;
	// addi r30,r31,28
	ctx.r30.s64 = ctx.r31.s64 + 28;
	// stw r9,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r9.u32);
	// addi r10,r27,-8
	ctx.r10.s64 = ctx.r27.s64 + -8;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// li r26,0
	ctx.r26.s64 = 0;
loc_8252BBB4:
	// stwu r26,24(r10)
	ea = 24 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r26.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x8252bbb4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8252BBB4;
	// lis r11,-32173
	ctx.r11.s64 = -2108489728;
	// stw r29,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r29.u32);
	// lis r10,-32117
	ctx.r10.s64 = -2104819712;
	// stw r28,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r28.u32);
	// lis r9,-32117
	ctx.r9.s64 = -2104819712;
	// stw r31,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r31.u32);
	// addi r11,r11,-16224
	ctx.r11.s64 = ctx.r11.s64 + -16224;
	// addi r10,r10,9280
	ctx.r10.s64 = ctx.r10.s64 + 9280;
	// addi r9,r9,9280
	ctx.r9.s64 = ctx.r9.s64 + 9280;
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// stw r10,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r10.u32);
	// li r3,120
	ctx.r3.s64 = 120;
	// stw r9,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r9.u32);
	// bl 0x82691500
	ctx.lr = 0x8252BBF4;
	sub_82691500(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8252bc1c
	if (ctx.cr0.eq) goto loc_8252BC1C;
	// mr r9,r28
	ctx.r9.u64 = ctx.r28.u64;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// addi r7,r31,12
	ctx.r7.s64 = ctx.r31.s64 + 12;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82503ac8
	ctx.lr = 0x8252BC18;
	sub_82503AC8(ctx, base);
	// b 0x8252bc20
	goto loc_8252BC20;
loc_8252BC1C:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
loc_8252BC20:
	// stw r3,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r3.u32);
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
	// li r29,3
	ctx.r29.s64 = 3;
loc_8252BC2C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82f91940
	ctx.lr = 0x8252BC34;
	sub_82F91940(ctx, base);
	// stw r26,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r26.u32);
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r30,r30,24
	ctx.r30.s64 = ctx.r30.s64 + 24;
	// bne 0x8252bc2c
	if (!ctx.cr0.eq) goto loc_8252BC2C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82fa76c0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8252BC50"))) PPC_WEAK_FUNC(sub_8252BC50);
PPC_FUNC_IMPL(__imp__sub_8252BC50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x8252BC58;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r30,0
	ctx.r30.s64 = 0;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
	// addi r28,r11,12140
	ctx.r28.s64 = ctx.r11.s64 + 12140;
loc_8252BC70:
	// lwz r8,128(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 128);
	// lwz r10,0(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// b 0x8252bc94
	goto loc_8252BC94;
loc_8252BC80:
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r7,64(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 64);
	// cmplw cr6,r7,r31
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x8252bca0
	if (ctx.cr6.eq) goto loc_8252BCA0;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_8252BC94:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8252bc80
	if (!ctx.cr6.eq) goto loc_8252BC80;
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
loc_8252BCA0:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8252bd14
	if (ctx.cr6.eq) goto loc_8252BD14;
	// lwz r9,0(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// b 0x8252bcc8
	goto loc_8252BCC8;
loc_8252BCB4:
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r8,64(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 64);
	// cmplw cr6,r8,r31
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x8252bd54
	if (ctx.cr6.eq) goto loc_8252BD54;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_8252BCC8:
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x8252bcb4
	if (!ctx.cr6.eq) goto loc_8252BCB4;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_8252BCD4:
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r5,1324(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1324);
	// lwz r4,1320(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1320);
	// bl 0x822c2418
	ctx.lr = 0x8252BCF0;
	sub_822C2418(ctx, base);
	// bl 0x826a4210
	ctx.lr = 0x8252BCF4;
	sub_826A4210(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x826a72e8
	ctx.lr = 0x8252BD04;
	sub_826A72E8(ctx, base);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8252bd14
	if (ctx.cr6.eq) goto loc_8252BD14;
	// bl 0x82241d18
	ctx.lr = 0x8252BD14;
	sub_82241D18(ctx, base);
loc_8252BD14:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 3, ctx.xer);
	// blt cr6,0x8252bc70
	if (ctx.cr6.lt) goto loc_8252BC70;
	// lwz r3,128(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 128);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8252bd30
	if (ctx.cr6.eq) goto loc_8252BD30;
	// bl 0x82503788
	ctx.lr = 0x8252BD30;
	sub_82503788(ctx, base);
loc_8252BD30:
	// addi r31,r29,120
	ctx.r31.s64 = ctx.r29.s64 + 120;
	// li r30,2
	ctx.r30.s64 = 2;
loc_8252BD38:
	// addi r31,r31,-24
	ctx.r31.s64 = ctx.r31.s64 + -24;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f91940
	ctx.lr = 0x8252BD44;
	sub_82F91940(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge 0x8252bd38
	if (!ctx.cr0.lt) goto loc_8252BD38;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
loc_8252BD54:
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// b 0x8252bcd4
	goto loc_8252BCD4;
}

__attribute__((alias("__imp__sub_8252BD5C"))) PPC_WEAK_FUNC(sub_8252BD5C);
PPC_FUNC_IMPL(__imp__sub_8252BD5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8252BD60"))) PPC_WEAK_FUNC(sub_8252BD60);
PPC_FUNC_IMPL(__imp__sub_8252BD60) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7674
	ctx.lr = 0x8252BD68;
	__savegprlr_27(ctx, base);
	// stwu r1,-992(r1)
	ea = -992 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// vor v3,v1,v1
	_mm_store_si128((__m128i*)ctx.v3.u8, _mm_load_si128((__m128i*)ctx.v1.u8));
	// vor v2,v1,v1
	_mm_store_si128((__m128i*)ctx.v2.u8, _mm_load_si128((__m128i*)ctx.v1.u8));
	// lfs f2,24(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	ctx.f2.f64 = double(temp.f32);
	// addi r29,r11,12152
	ctx.r29.s64 = ctx.r11.s64 + 12152;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r11,r3,20
	ctx.r11.s64 = ctx.r3.s64 + 20;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r31,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r31.u32);
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// stw r31,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r31.u32);
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// addi r7,r3,16
	ctx.r7.s64 = ctx.r3.s64 + 16;
	// stw r31,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r31.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r31.u32);
	// addi r8,r1,176
	ctx.r8.s64 = ctx.r1.s64 + 176;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x82502928
	ctx.lr = 0x8252BDC4;
	sub_82502928(ctx, base);
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// stw r31,420(r1)
	PPC_STORE_U32(ctx.r1.u32 + 420, ctx.r31.u32);
	// addi r4,r1,208
	ctx.r4.s64 = ctx.r1.s64 + 208;
	// lwz r3,128(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 128);
	// stw r11,416(r1)
	PPC_STORE_U32(ctx.r1.u32 + 416, ctx.r11.u32);
	// bl 0x82503c90
	ctx.lr = 0x8252BDDC;
	sub_82503C90(ctx, base);
	// lwz r11,128(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 128);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// b 0x8252be00
	goto loc_8252BE00;
loc_8252BDEC:
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r8,64(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 64);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x8252bec8
	if (ctx.cr6.eq) goto loc_8252BEC8;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_8252BE00:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8252bdec
	if (!ctx.cr6.eq) goto loc_8252BDEC;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_8252BE0C:
	// stw r31,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r31.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r31,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r31.u32);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// lwz r5,1324(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1324);
	// lwz r4,1320(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1320);
	// bl 0x822c2418
	ctx.lr = 0x8252BE28;
	sub_822C2418(ctx, base);
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// li r5,510
	ctx.r5.s64 = 510;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,434
	ctx.r3.s64 = ctx.r1.s64 + 434;
	// lhz r11,31944(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 31944);
	// sth r11,432(r1)
	PPC_STORE_U16(ctx.r1.u32 + 432, ctx.r11.u16);
	// bl 0x82fa7cf0
	ctx.lr = 0x8252BE44;
	sub_82FA7CF0(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,124(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 124);
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,256
	ctx.r6.s64 = 256;
	// addi r5,r1,432
	ctx.r5.s64 = ctx.r1.s64 + 432;
	// bl 0x8259c8e0
	ctx.lr = 0x8252BE60;
	sub_8259C8E0(ctx, base);
	// stw r31,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r31.u32);
	// stw r31,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r31.u32);
	// li r4,5
	ctx.r4.s64 = 5;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x822e4d50
	ctx.lr = 0x8252BE74;
	sub_822E4D50(ctx, base);
	// addi r11,r1,432
	ctx.r11.s64 = ctx.r1.s64 + 432;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// lwz r3,176(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 176);
	// stw r11,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, ctx.r11.u32);
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r4,r10,12176
	ctx.r4.s64 = ctx.r10.s64 + 12176;
	// addi r5,r1,192
	ctx.r5.s64 = ctx.r1.s64 + 192;
	// bl 0x826a7620
	ctx.lr = 0x8252BE94;
	sub_826A7620(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r30,48
	ctx.r3.s64 = ctx.r30.s64 + 48;
	// bl 0x8234cb18
	ctx.lr = 0x8252BEA0;
	sub_8234CB18(ctx, base);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x822e4d00
	ctx.lr = 0x8252BEA8;
	sub_822E4D00(ctx, base);
	// lwz r3,180(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 180);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8252beb8
	if (ctx.cr6.eq) goto loc_8252BEB8;
	// bl 0x82241d18
	ctx.lr = 0x8252BEB8;
	sub_82241D18(ctx, base);
loc_8252BEB8:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82f91940
	ctx.lr = 0x8252BEC0;
	sub_82F91940(ctx, base);
	// addi r1,r1,992
	ctx.r1.s64 = ctx.r1.s64 + 992;
	// b 0x82fa76c4
	__restgprlr_27(ctx, base);
	return;
loc_8252BEC8:
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// b 0x8252be0c
	goto loc_8252BE0C;
}

__attribute__((alias("__imp__sub_8252BED0"))) PPC_WEAK_FUNC(sub_8252BED0);
PPC_FUNC_IMPL(__imp__sub_8252BED0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x8252BED8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r30,0
	ctx.r30.s64 = 0;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
	// addi r28,r11,12140
	ctx.r28.s64 = ctx.r11.s64 + 12140;
loc_8252BEF0:
	// lwz r8,128(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 128);
	// lwz r10,0(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// b 0x8252bf14
	goto loc_8252BF14;
loc_8252BF00:
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r7,64(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 64);
	// cmplw cr6,r7,r31
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x8252bf20
	if (ctx.cr6.eq) goto loc_8252BF20;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_8252BF14:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8252bf00
	if (!ctx.cr6.eq) goto loc_8252BF00;
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
loc_8252BF20:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8252bf94
	if (ctx.cr6.eq) goto loc_8252BF94;
	// lwz r9,0(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// b 0x8252bf48
	goto loc_8252BF48;
loc_8252BF34:
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r8,64(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 64);
	// cmplw cr6,r8,r31
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x8252bfcc
	if (ctx.cr6.eq) goto loc_8252BFCC;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_8252BF48:
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x8252bf34
	if (!ctx.cr6.eq) goto loc_8252BF34;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
loc_8252BF54:
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r5,1324(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1324);
	// lwz r4,1320(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1320);
	// bl 0x822c2418
	ctx.lr = 0x8252BF70;
	sub_822C2418(ctx, base);
	// bl 0x826a4210
	ctx.lr = 0x8252BF74;
	sub_826A4210(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x826a72e8
	ctx.lr = 0x8252BF84;
	sub_826A72E8(ctx, base);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8252bf94
	if (ctx.cr6.eq) goto loc_8252BF94;
	// bl 0x82241d18
	ctx.lr = 0x8252BF94;
	sub_82241D18(ctx, base);
loc_8252BF94:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 3, ctx.xer);
	// blt cr6,0x8252bef0
	if (ctx.cr6.lt) goto loc_8252BEF0;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,128(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 128);
	// bl 0x82503dd0
	ctx.lr = 0x8252BFAC;
	sub_82503DD0(ctx, base);
	// li r4,2
	ctx.r4.s64 = 2;
	// lwz r3,128(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 128);
	// bl 0x82503dd0
	ctx.lr = 0x8252BFB8;
	sub_82503DD0(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,128(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 128);
	// bl 0x82503dd0
	ctx.lr = 0x8252BFC4;
	sub_82503DD0(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
loc_8252BFCC:
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// b 0x8252bf54
	goto loc_8252BF54;
}

__attribute__((alias("__imp__sub_8252BFD4"))) PPC_WEAK_FUNC(sub_8252BFD4);
PPC_FUNC_IMPL(__imp__sub_8252BFD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8252BFD8"))) PPC_WEAK_FUNC(sub_8252BFD8);
PPC_FUNC_IMPL(__imp__sub_8252BFD8) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,128(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 128);
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// b 0x8252c014
	goto loc_8252C014;
loc_8252C000:
	// lwz r31,8(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r9,64(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8252c020
	if (ctx.cr6.eq) goto loc_8252C020;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_8252C014:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8252c000
	if (!ctx.cr6.eq) goto loc_8252C000;
	// li r31,0
	ctx.r31.s64 = 0;
loc_8252C020:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8252c088
	if (ctx.cr6.eq) goto loc_8252C088;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82502850
	ctx.lr = 0x8252C030;
	sub_82502850(ctx, base);
	// lwz r3,220(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 220);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8252c088
	if (ctx.cr6.eq) goto loc_8252C088;
	// lwz r11,1328(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1328);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x8252c050
	if (ctx.cr6.eq) goto loc_8252C050;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x8252c088
	if (!ctx.cr6.eq) goto loc_8252C088;
loc_8252C050:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// stfs f31,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lfs f0,-2340(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -2340);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stw r10,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// bl 0x825787a8
	ctx.lr = 0x8252C088;
	sub_825787A8(ctx, base);
loc_8252C088:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
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

__attribute__((alias("__imp__sub_8252C0A0"))) PPC_WEAK_FUNC(sub_8252C0A0);
PPC_FUNC_IMPL(__imp__sub_8252C0A0) {
	PPC_FUNC_PROLOGUE();
	// mulli r11,r4,24
	ctx.r11.s64 = ctx.r4.s64 * 24;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r11,64(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// addi r11,r4,2
	ctx.r11.s64 = ctx.r4.s64 + 2;
	// mulli r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 * 24;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8252c0d0
	if (!ctx.cr6.eq) goto loc_8252C0D0;
	// b 0x82fa1518
	sub_82FA1518(ctx, base);
	return;
loc_8252C0D0:
	// lwz r3,16(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
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

__attribute__((alias("__imp__sub_8252C0E4"))) PPC_WEAK_FUNC(sub_8252C0E4);
PPC_FUNC_IMPL(__imp__sub_8252C0E4) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8252C0E8"))) PPC_WEAK_FUNC(sub_8252C0E8);
PPC_FUNC_IMPL(__imp__sub_8252C0E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x8252C0F0;
	__savegprlr_29(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82519160
	ctx.lr = 0x8252C114;
	sub_82519160(ctx, base);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addic r9,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// subfe r29,r9,r10
	temp.u8 = (~ctx.r9.u32 + ctx.r10.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r29.u64 = ~ctx.r9.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// beq cr6,0x8252c134
	if (ctx.cr6.eq) goto loc_8252C134;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82241d18
	ctx.lr = 0x8252C134;
	sub_82241D18(ctx, base);
loc_8252C134:
	// clrlwi. r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8252c180
	if (ctx.cr0.eq) goto loc_8252C180;
	// li r4,5
	ctx.r4.s64 = 5;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x822e4d50
	ctx.lr = 0x8252C148;
	sub_822E4D50(ctx, base);
	// stw r30,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r30.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82519160
	ctx.lr = 0x8252C158;
	sub_82519160(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r11,-13556
	ctx.r4.s64 = ctx.r11.s64 + -13556;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// bl 0x826a7620
	ctx.lr = 0x8252C170;
	sub_826A7620(ctx, base);
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8252c180
	if (ctx.cr6.eq) goto loc_8252C180;
	// bl 0x82241d18
	ctx.lr = 0x8252C180;
	sub_82241D18(ctx, base);
loc_8252C180:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x822e4d00
	ctx.lr = 0x8252C188;
	sub_822E4D00(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8252C190"))) PPC_WEAK_FUNC(sub_8252C190);
PPC_FUNC_IMPL(__imp__sub_8252C190) {
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
	// bl 0x8252c1e0
	ctx.lr = 0x8252C1B0;
	sub_8252C1E0(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8252c1c0
	if (ctx.cr0.eq) goto loc_8252C1C0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82691540
	ctx.lr = 0x8252C1C0;
	sub_82691540(ctx, base);
loc_8252C1C0:
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

__attribute__((alias("__imp__sub_8252C1DC"))) PPC_WEAK_FUNC(sub_8252C1DC);
PPC_FUNC_IMPL(__imp__sub_8252C1DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8252C1E0"))) PPC_WEAK_FUNC(sub_8252C1E0);
PPC_FUNC_IMPL(__imp__sub_8252C1E0) {
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
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r11,r11,12424
	ctx.r11.s64 = ctx.r11.s64 + 12424;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x826a70d8
	ctx.lr = 0x8252C20C;
	sub_826A70D8(ctx, base);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8252c21c
	if (ctx.cr6.eq) goto loc_8252C21C;
	// bl 0x82241d18
	ctx.lr = 0x8252C21C;
	sub_82241D18(ctx, base);
loc_8252C21C:
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

__attribute__((alias("__imp__sub_8252C230"))) PPC_WEAK_FUNC(sub_8252C230);
PPC_FUNC_IMPL(__imp__sub_8252C230) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x8252C238;
	__savegprlr_29(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,3
	ctx.r11.s64 = 3;
	// addi r10,r1,84
	ctx.r10.s64 = ctx.r1.s64 + 84;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8252C258:
	// stw r11,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r11.u32);
	// stwu r11,16(r10)
	ea = 16 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x8252c258
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8252C258;
	// li r4,3
	ctx.r4.s64 = 3;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x822e4d50
	ctx.lr = 0x8252C270;
	sub_822E4D50(ctx, base);
	// clrldi r11,r29,32
	ctx.r11.u64 = ctx.r29.u64 & 0xFFFFFFFF;
	// li r4,5
	ctx.r4.s64 = 5;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// stfd f0,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.f0.u64);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x822e4d50
	ctx.lr = 0x8252C290;
	sub_822E4D50(ctx, base);
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r11,r11,31944
	ctx.r11.s64 = ctx.r11.s64 + 31944;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
	// bl 0x822e4d50
	ctx.lr = 0x8252C2A8;
	sub_822E4D50(ctx, base);
	// addic r11,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r11.s64 = ctx.r31.s64 + -1;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// subfe r11,r11,r31
	temp.u8 = (~ctx.r11.u32 + ctx.r31.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r31.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r31.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addi r4,r10,12300
	ctx.r4.s64 = ctx.r10.s64 + 12300;
	// stb r11,136(r1)
	PPC_STORE_U8(ctx.r1.u32 + 136, ctx.r11.u8);
	// li r6,3
	ctx.r6.s64 = 3;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// bl 0x826a7620
	ctx.lr = 0x8252C2CC;
	sub_826A7620(ctx, base);
	// addi r31,r1,144
	ctx.r31.s64 = ctx.r1.s64 + 144;
	// li r30,2
	ctx.r30.s64 = 2;
loc_8252C2D4:
	// addi r31,r31,-16
	ctx.r31.s64 = ctx.r31.s64 + -16;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822e4d00
	ctx.lr = 0x8252C2E0;
	sub_822E4D00(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge 0x8252c2d4
	if (!ctx.cr0.lt) goto loc_8252C2D4;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8252C2F0"))) PPC_WEAK_FUNC(sub_8252C2F0);
PPC_FUNC_IMPL(__imp__sub_8252C2F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7674
	ctx.lr = 0x8252C2F8;
	__savegprlr_27(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,5
	ctx.r11.s64 = 5;
	// addi r10,r1,84
	ctx.r10.s64 = ctx.r1.s64 + 84;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r31,r7
	ctx.r31.u64 = ctx.r7.u64;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8252C320:
	// stw r11,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r11.u32);
	// stwu r11,16(r10)
	ea = 16 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x8252c320
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8252C320;
	// li r4,3
	ctx.r4.s64 = 3;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x822e4d50
	ctx.lr = 0x8252C338;
	sub_822E4D50(ctx, base);
	// clrldi r11,r29,32
	ctx.r11.u64 = ctx.r29.u64 & 0xFFFFFFFF;
	// li r4,3
	ctx.r4.s64 = 3;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// stfd f0,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.f0.u64);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x822e4d50
	ctx.lr = 0x8252C358;
	sub_822E4D50(ctx, base);
	// clrldi r11,r28,32
	ctx.r11.u64 = ctx.r28.u64 & 0xFFFFFFFF;
	// li r4,3
	ctx.r4.s64 = 3;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// stfd f0,120(r1)
	PPC_STORE_U64(ctx.r1.u32 + 120, ctx.f0.u64);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x822e4d50
	ctx.lr = 0x8252C378;
	sub_822E4D50(ctx, base);
	// clrldi r11,r27,32
	ctx.r11.u64 = ctx.r27.u64 & 0xFFFFFFFF;
	// li r4,5
	ctx.r4.s64 = 5;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// stfd f0,136(r1)
	PPC_STORE_U64(ctx.r1.u32 + 136, ctx.f0.u64);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x822e4d50
	ctx.lr = 0x8252C398;
	sub_822E4D50(ctx, base);
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r11,r11,31944
	ctx.r11.s64 = ctx.r11.s64 + 31944;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// stw r11,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r11.u32);
	// bl 0x822e4d50
	ctx.lr = 0x8252C3B0;
	sub_822E4D50(ctx, base);
	// addic r11,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r11.s64 = ctx.r31.s64 + -1;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// subfe r11,r11,r31
	temp.u8 = (~ctx.r11.u32 + ctx.r31.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r31.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r31.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addi r4,r10,12340
	ctx.r4.s64 = ctx.r10.s64 + 12340;
	// stb r11,168(r1)
	PPC_STORE_U8(ctx.r1.u32 + 168, ctx.r11.u8);
	// li r6,5
	ctx.r6.s64 = 5;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// bl 0x826a7620
	ctx.lr = 0x8252C3D4;
	sub_826A7620(ctx, base);
	// addi r31,r1,176
	ctx.r31.s64 = ctx.r1.s64 + 176;
	// li r30,4
	ctx.r30.s64 = 4;
loc_8252C3DC:
	// addi r31,r31,-16
	ctx.r31.s64 = ctx.r31.s64 + -16;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822e4d00
	ctx.lr = 0x8252C3E8;
	sub_822E4D00(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge 0x8252c3dc
	if (!ctx.cr0.lt) goto loc_8252C3DC;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x82fa76c4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8252C3F8"))) PPC_WEAK_FUNC(sub_8252C3F8);
PPC_FUNC_IMPL(__imp__sub_8252C3F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x8252C400;
	__savegprlr_28(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,4
	ctx.r11.s64 = 4;
	// addi r10,r1,84
	ctx.r10.s64 = ctx.r1.s64 + 84;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8252C424:
	// stw r11,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r11.u32);
	// stwu r11,16(r10)
	ea = 16 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x8252c424
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8252C424;
	// li r4,3
	ctx.r4.s64 = 3;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x822e4d50
	ctx.lr = 0x8252C43C;
	sub_822E4D50(ctx, base);
	// clrldi r11,r29,32
	ctx.r11.u64 = ctx.r29.u64 & 0xFFFFFFFF;
	// li r4,3
	ctx.r4.s64 = 3;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// stfd f0,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.f0.u64);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x822e4d50
	ctx.lr = 0x8252C45C;
	sub_822E4D50(ctx, base);
	// clrldi r11,r28,32
	ctx.r11.u64 = ctx.r28.u64 & 0xFFFFFFFF;
	// li r4,5
	ctx.r4.s64 = 5;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// stfd f0,120(r1)
	PPC_STORE_U64(ctx.r1.u32 + 120, ctx.f0.u64);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x822e4d50
	ctx.lr = 0x8252C47C;
	sub_822E4D50(ctx, base);
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r11,r11,31944
	ctx.r11.s64 = ctx.r11.s64 + 31944;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// stw r11,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r11.u32);
	// bl 0x822e4d50
	ctx.lr = 0x8252C494;
	sub_822E4D50(ctx, base);
	// addic r11,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r11.s64 = ctx.r31.s64 + -1;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// subfe r11,r11,r31
	temp.u8 = (~ctx.r11.u32 + ctx.r31.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r31.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r31.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addi r4,r10,12380
	ctx.r4.s64 = ctx.r10.s64 + 12380;
	// stb r11,152(r1)
	PPC_STORE_U8(ctx.r1.u32 + 152, ctx.r11.u8);
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// bl 0x826a7620
	ctx.lr = 0x8252C4B8;
	sub_826A7620(ctx, base);
	// addi r31,r1,160
	ctx.r31.s64 = ctx.r1.s64 + 160;
	// li r30,3
	ctx.r30.s64 = 3;
loc_8252C4C0:
	// addi r31,r31,-16
	ctx.r31.s64 = ctx.r31.s64 + -16;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822e4d00
	ctx.lr = 0x8252C4CC;
	sub_822E4D00(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge 0x8252c4c0
	if (!ctx.cr0.lt) goto loc_8252C4C0;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8252C4DC"))) PPC_WEAK_FUNC(sub_8252C4DC);
PPC_FUNC_IMPL(__imp__sub_8252C4DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8252C4E0"))) PPC_WEAK_FUNC(sub_8252C4E0);
PPC_FUNC_IMPL(__imp__sub_8252C4E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7670
	ctx.lr = 0x8252C4E8;
	__savegprlr_26(ctx, base);
	// stwu r1,-752(r1)
	ea = -752 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32209
	ctx.r11.s64 = -2110849024;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r11,r11,29152
	ctx.r11.s64 = ctx.r11.s64 + 29152;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r30,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r30.u32);
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8252c514
	if (!ctx.cr6.eq) goto loc_8252C514;
	// stw r30,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r30.u32);
	// b 0x8252c52c
	goto loc_8252C52C;
loc_8252C514:
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// addi r10,r10,6380
	ctx.r10.s64 = ctx.r10.s64 + 6380;
	// stw r11,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
	// stw r10,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
loc_8252C52C:
	// li r27,1
	ctx.r27.s64 = 1;
	// stw r30,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r30.u32);
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// stw r30,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r30.u32);
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// stw r27,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r27.u32);
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82518b28
	ctx.lr = 0x8252C560;
	sub_82518B28(ctx, base);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// addi r11,r11,12484
	ctx.r11.s64 = ctx.r11.s64 + 12484;
	// addi r10,r10,5228
	ctx.r10.s64 = ctx.r10.s64 + 5228;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r29,r31,368
	ctx.r29.s64 = ctx.r31.s64 + 368;
	// stw r10,344(r31)
	PPC_STORE_U32(ctx.r31.u32 + 344, ctx.r10.u32);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r28,r31,344
	ctx.r28.s64 = ctx.r31.s64 + 344;
	// bl 0x8226c200
	ctx.lr = 0x8252C58C;
	sub_8226C200(ctx, base);
	// lis r11,-32173
	ctx.r11.s64 = -2108489728;
	// lis r10,-32117
	ctx.r10.s64 = -2104819712;
	// stw r30,392(r31)
	PPC_STORE_U32(ctx.r31.u32 + 392, ctx.r30.u32);
	// lis r9,-32117
	ctx.r9.s64 = -2104819712;
	// stw r30,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r30.u32);
	// addi r11,r11,-13456
	ctx.r11.s64 = ctx.r11.s64 + -13456;
	// stw r30,400(r31)
	PPC_STORE_U32(ctx.r31.u32 + 400, ctx.r30.u32);
	// addi r10,r10,9280
	ctx.r10.s64 = ctx.r10.s64 + 9280;
	// stw r27,404(r31)
	PPC_STORE_U32(ctx.r31.u32 + 404, ctx.r27.u32);
	// addi r9,r9,9280
	ctx.r9.s64 = ctx.r9.s64 + 9280;
	// stw r31,348(r31)
	PPC_STORE_U32(ctx.r31.u32 + 348, ctx.r31.u32);
	// stw r11,352(r31)
	PPC_STORE_U32(ctx.r31.u32 + 352, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,356(r31)
	PPC_STORE_U32(ctx.r31.u32 + 356, ctx.r10.u32);
	// stw r9,360(r31)
	PPC_STORE_U32(ctx.r31.u32 + 360, ctx.r9.u32);
	// stw r28,176(r31)
	PPC_STORE_U32(ctx.r31.u32 + 176, ctx.r28.u32);
	// bl 0x8252c8c0
	ctx.lr = 0x8252C5D0;
	sub_8252C8C0(ctx, base);
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// li r5,510
	ctx.r5.s64 = 510;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,178
	ctx.r3.s64 = ctx.r1.s64 + 178;
	// lhz r11,31944(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 31944);
	// sth r11,176(r1)
	PPC_STORE_U16(ctx.r1.u32 + 176, ctx.r11.u16);
	// bl 0x82fa7cf0
	ctx.lr = 0x8252C5EC;
	sub_82FA7CF0(ctx, base);
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// addi r11,r11,21076
	ctx.r11.s64 = ctx.r11.s64 + 21076;
	// addi r4,r10,-7760
	ctx.r4.s64 = ctx.r10.s64 + -7760;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,256
	ctx.r6.s64 = 256;
	// addi r5,r1,176
	ctx.r5.s64 = ctx.r1.s64 + 176;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x8259c8e0
	ctx.lr = 0x8252C614;
	sub_8259C8E0(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stw r30,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r30.u32);
	// bl 0x8226c200
	ctx.lr = 0x8252C624;
	sub_8226C200(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r6,r1,144
	ctx.r6.s64 = ctx.r1.s64 + 144;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r8,1
	ctx.r8.s64 = 1;
	// bl 0x82524730
	ctx.lr = 0x8252C640;
	sub_82524730(ctx, base);
	// stw r3,392(r31)
	PPC_STORE_U32(ctx.r31.u32 + 392, ctx.r3.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// bl 0x82519160
	ctx.lr = 0x8252C650;
	sub_82519160(ctx, base);
	// lis r11,-32172
	ctx.r11.s64 = -2108424192;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r11,256
	ctx.r4.s64 = ctx.r11.s64 + 256;
	// bl 0x826a80e0
	ctx.lr = 0x8252C664;
	sub_826A80E0(ctx, base);
	// lwz r3,140(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8252c674
	if (ctx.cr6.eq) goto loc_8252C674;
	// bl 0x82241d18
	ctx.lr = 0x8252C674;
	sub_82241D18(ctx, base);
loc_8252C674:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82f91940
	ctx.lr = 0x8252C67C;
	sub_82F91940(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,752
	ctx.r1.s64 = ctx.r1.s64 + 752;
	// b 0x82fa76c0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8252C688"))) PPC_WEAK_FUNC(sub_8252C688);
PPC_FUNC_IMPL(__imp__sub_8252C688) {
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
	// lwz r3,392(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 392);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r11,r11,12484
	ctx.r11.s64 = ctx.r11.s64 + 12484;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// beq cr6,0x8252c6c8
	if (ctx.cr6.eq) goto loc_8252C6C8;
	// bl 0x82524840
	ctx.lr = 0x8252C6C0;
	sub_82524840(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,392(r31)
	PPC_STORE_U32(ctx.r31.u32 + 392, ctx.r11.u32);
loc_8252C6C8:
	// addi r3,r31,368
	ctx.r3.s64 = ctx.r31.s64 + 368;
	// bl 0x82f91940
	ctx.lr = 0x8252C6D0;
	sub_82F91940(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82518fd0
	ctx.lr = 0x8252C6D8;
	sub_82518FD0(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8252c6e8
	if (ctx.cr0.eq) goto loc_8252C6E8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82691540
	ctx.lr = 0x8252C6E8;
	sub_82691540(ctx, base);
loc_8252C6E8:
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

__attribute__((alias("__imp__sub_8252C704"))) PPC_WEAK_FUNC(sub_8252C704);
PPC_FUNC_IMPL(__imp__sub_8252C704) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8252C708"))) PPC_WEAK_FUNC(sub_8252C708);
PPC_FUNC_IMPL(__imp__sub_8252C708) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7674
	ctx.lr = 0x8252C710;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,404(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 404);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8252c8b4
	if (ctx.cr6.eq) goto loc_8252C8B4;
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,404(r3)
	PPC_STORE_U32(ctx.r3.u32 + 404, ctx.r10.u32);
	// lwz r27,21120(r11)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + 21120);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x8252c8b4
	if (ctx.cr6.eq) goto loc_8252C8B4;
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r28,r11,14984
	ctx.r28.s64 = ctx.r11.s64 + 14984;
	// li r29,1
	ctx.r29.s64 = 1;
loc_8252C74C:
	// lwz r5,0(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r8,4(r5)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble cr6,0x8252c7a4
	if (!ctx.cr6.gt) goto loc_8252C7A4;
	// lwz r7,8(r5)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// li r10,0
	ctx.r10.s64 = 0;
loc_8252C768:
	// lwzx r11,r10,r7
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r7.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8252c794
	if (ctx.cr6.eq) goto loc_8252C794;
	// lwz r6,240(r27)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r27.u32 + 240);
	// rlwinm r4,r11,29,3,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
	// clrlwi r11,r11,29
	ctx.r11.u64 = ctx.r11.u32 & 0x7;
	// slw r11,r29,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r29.u32 << (ctx.r11.u8 & 0x3F));
	// lwz r6,8(r6)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// lbzx r4,r4,r6
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r4.u32 + ctx.r6.u32);
	// and. r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 & ctx.r4.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8252c7bc
	if (!ctx.cr0.eq) goto loc_8252C7BC;
loc_8252C794:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpw cr6,r9,r8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x8252c768
	if (ctx.cr6.lt) goto loc_8252C768;
loc_8252C7A4:
	// lwz r11,168(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8252c8a0
	if (ctx.cr6.eq) goto loc_8252C8A0;
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// b 0x8252c868
	goto loc_8252C868;
loc_8252C7BC:
	// lwz r11,168(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 168);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8252c8a0
	if (ctx.cr6.eq) goto loc_8252C8A0;
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// b 0x8252c7ec
	goto loc_8252C7EC;
loc_8252C7D4:
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r9,16(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// cmplw cr6,r9,r30
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x8252c7f8
	if (ctx.cr6.eq) goto loc_8252C7F8;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
loc_8252C7EC:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8252c7d4
	if (!ctx.cr6.eq) goto loc_8252C7D4;
	// li r10,0
	ctx.r10.s64 = 0;
loc_8252C7F8:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8252c8a0
	if (ctx.cr6.eq) goto loc_8252C8A0;
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8252c828
	if (ctx.cr6.eq) goto loc_8252C828;
	// rlwinm r10,r11,29,3,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
	// clrlwi r11,r11,29
	ctx.r11.u64 = ctx.r11.u32 & 0x7;
	// slw r11,r29,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r29.u32 << (ctx.r11.u8 & 0x3F));
	// lbzx r10,r10,r6
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r6.u32);
	// and. r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// bne 0x8252c82c
	if (!ctx.cr0.eq) goto loc_8252C82C;
loc_8252C828:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8252C82C:
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// addi r5,r11,2
	ctx.r5.s64 = ctx.r11.s64 + 2;
	// bl 0x8252ca48
	ctx.lr = 0x8252C848;
	sub_8252CA48(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// b 0x8252c890
	goto loc_8252C890;
loc_8252C850:
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r9,16(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// cmplw cr6,r9,r30
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x8252c874
	if (ctx.cr6.eq) goto loc_8252C874;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
loc_8252C868:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x8252c850
	if (!ctx.cr6.eq) goto loc_8252C850;
	// li r10,0
	ctx.r10.s64 = 0;
loc_8252C874:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8252c8a0
	if (ctx.cr6.eq) goto loc_8252C8A0;
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8252ca48
	ctx.lr = 0x8252C88C;
	sub_8252CA48(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
loc_8252C890:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82519230
	ctx.lr = 0x8252C89C;
	sub_82519230(ctx, base);
	// b 0x8252c8a4
	goto loc_8252C8A4;
loc_8252C8A0:
	// stw r29,404(r31)
	PPC_STORE_U32(ctx.r31.u32 + 404, ctx.r29.u32);
loc_8252C8A4:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// cmplwi cr6,r30,6
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 6, ctx.xer);
	// blt cr6,0x8252c74c
	if (ctx.cr6.lt) goto loc_8252C74C;
loc_8252C8B4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8252C8BC"))) PPC_WEAK_FUNC(sub_8252C8BC);
PPC_FUNC_IMPL(__imp__sub_8252C8BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8252C8C0"))) PPC_WEAK_FUNC(sub_8252C8C0);
PPC_FUNC_IMPL(__imp__sub_8252C8C0) {
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
	// stwu r1,-368(r1)
	ea = -368 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r5,62
	ctx.r5.s64 = 62;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,210
	ctx.r3.s64 = ctx.r1.s64 + 210;
	// lhz r31,31944(r11)
	ctx.r31.u64 = PPC_LOAD_U16(ctx.r11.u32 + 31944);
	// sth r31,208(r1)
	PPC_STORE_U16(ctx.r1.u32 + 208, ctx.r31.u16);
	// bl 0x82fa7cf0
	ctx.lr = 0x8252C8F4;
	sub_82FA7CF0(ctx, base);
	// li r5,62
	ctx.r5.s64 = 62;
	// sth r31,272(r1)
	PPC_STORE_U16(ctx.r1.u32 + 272, ctx.r31.u16);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,274
	ctx.r3.s64 = ctx.r1.s64 + 274;
	// bl 0x82fa7cf0
	ctx.lr = 0x8252C908;
	sub_82FA7CF0(ctx, base);
	// li r5,62
	ctx.r5.s64 = 62;
	// li r4,0
	ctx.r4.s64 = 0;
	// sth r31,144(r1)
	PPC_STORE_U16(ctx.r1.u32 + 144, ctx.r31.u16);
	// addi r3,r1,146
	ctx.r3.s64 = ctx.r1.s64 + 146;
	// bl 0x82fa7cf0
	ctx.lr = 0x8252C91C;
	sub_82FA7CF0(ctx, base);
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// addi r31,r11,21076
	ctx.r31.s64 = ctx.r11.s64 + 21076;
	// addi r4,r10,12468
	ctx.r4.s64 = ctx.r10.s64 + 12468;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,32
	ctx.r6.s64 = 32;
	// addi r5,r1,208
	ctx.r5.s64 = ctx.r1.s64 + 208;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x8259c8e0
	ctx.lr = 0x8252C944;
	sub_8259C8E0(ctx, base);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// li r8,1
	ctx.r8.s64 = 1;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r4,r11,12448
	ctx.r4.s64 = ctx.r11.s64 + 12448;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,32
	ctx.r6.s64 = 32;
	// addi r5,r1,272
	ctx.r5.s64 = ctx.r1.s64 + 272;
	// bl 0x8259c8e0
	ctx.lr = 0x8252C964;
	sub_8259C8E0(ctx, base);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// li r8,1
	ctx.r8.s64 = 1;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r4,r11,12428
	ctx.r4.s64 = ctx.r11.s64 + 12428;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,32
	ctx.r6.s64 = 32;
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// bl 0x8259c8e0
	ctx.lr = 0x8252C984;
	sub_8259C8E0(ctx, base);
	// li r11,3
	ctx.r11.s64 = 3;
	// addi r10,r1,84
	ctx.r10.s64 = ctx.r1.s64 + 84;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8252C994:
	// stw r11,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r11.u32);
	// stwu r11,16(r10)
	ea = 16 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x8252c994
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8252C994;
	// li r4,5
	ctx.r4.s64 = 5;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x822e4d50
	ctx.lr = 0x8252C9AC;
	sub_822E4D50(ctx, base);
	// addi r11,r1,144
	ctx.r11.s64 = ctx.r1.s64 + 144;
	// li r4,5
	ctx.r4.s64 = 5;
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x822e4d50
	ctx.lr = 0x8252C9C0;
	sub_822E4D50(ctx, base);
	// addi r11,r1,208
	ctx.r11.s64 = ctx.r1.s64 + 208;
	// li r4,5
	ctx.r4.s64 = 5;
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x822e4d50
	ctx.lr = 0x8252C9D4;
	sub_822E4D50(ctx, base);
	// addi r11,r1,272
	ctx.r11.s64 = ctx.r1.s64 + 272;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r11,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r11.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82519160
	ctx.lr = 0x8252C9E8;
	sub_82519160(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// li r6,3
	ctx.r6.s64 = 3;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r11,-13760
	ctx.r4.s64 = ctx.r11.s64 + -13760;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// bl 0x826a7620
	ctx.lr = 0x8252CA00;
	sub_826A7620(ctx, base);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8252ca10
	if (ctx.cr6.eq) goto loc_8252CA10;
	// bl 0x82241d18
	ctx.lr = 0x8252CA10;
	sub_82241D18(ctx, base);
loc_8252CA10:
	// addi r31,r1,144
	ctx.r31.s64 = ctx.r1.s64 + 144;
	// li r30,2
	ctx.r30.s64 = 2;
loc_8252CA18:
	// addi r31,r31,-16
	ctx.r31.s64 = ctx.r31.s64 + -16;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822e4d00
	ctx.lr = 0x8252CA24;
	sub_822E4D00(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge 0x8252ca18
	if (!ctx.cr0.lt) goto loc_8252CA18;
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
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

__attribute__((alias("__imp__sub_8252CA44"))) PPC_WEAK_FUNC(sub_8252CA44);
PPC_FUNC_IMPL(__imp__sub_8252CA44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8252CA48"))) PPC_WEAK_FUNC(sub_8252CA48);
PPC_FUNC_IMPL(__imp__sub_8252CA48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x8252CA50;
	__savegprlr_29(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,2
	ctx.r11.s64 = 2;
	// addi r10,r1,84
	ctx.r10.s64 = ctx.r1.s64 + 84;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8252CA70:
	// stw r11,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r11.u32);
	// stwu r11,16(r10)
	ea = 16 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x8252ca70
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8252CA70;
	// li r4,3
	ctx.r4.s64 = 3;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x822e4d50
	ctx.lr = 0x8252CA88;
	sub_822E4D50(ctx, base);
	// extsw r11,r30
	ctx.r11.s64 = ctx.r30.s32;
	// li r4,3
	ctx.r4.s64 = 3;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// stfd f0,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.f0.u64);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x822e4d50
	ctx.lr = 0x8252CAA8;
	sub_822E4D50(ctx, base);
	// extsw r11,r29
	ctx.r11.s64 = ctx.r29.s32;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// stfd f0,120(r1)
	PPC_STORE_U64(ctx.r1.u32 + 120, ctx.f0.u64);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82519160
	ctx.lr = 0x8252CAC8;
	sub_82519160(ctx, base);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// li r6,2
	ctx.r6.s64 = 2;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r11,6348
	ctx.r4.s64 = ctx.r11.s64 + 6348;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// bl 0x826a7620
	ctx.lr = 0x8252CAE0;
	sub_826A7620(ctx, base);
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8252caf0
	if (ctx.cr6.eq) goto loc_8252CAF0;
	// bl 0x82241d18
	ctx.lr = 0x8252CAF0;
	sub_82241D18(ctx, base);
loc_8252CAF0:
	// addi r31,r1,128
	ctx.r31.s64 = ctx.r1.s64 + 128;
	// li r30,1
	ctx.r30.s64 = 1;
loc_8252CAF8:
	// addi r31,r31,-16
	ctx.r31.s64 = ctx.r31.s64 + -16;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822e4d00
	ctx.lr = 0x8252CB04;
	sub_822E4D00(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge 0x8252caf8
	if (!ctx.cr0.lt) goto loc_8252CAF8;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8252CB14"))) PPC_WEAK_FUNC(sub_8252CB14);
PPC_FUNC_IMPL(__imp__sub_8252CB14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8252CB18"))) PPC_WEAK_FUNC(sub_8252CB18);
PPC_FUNC_IMPL(__imp__sub_8252CB18) {
	PPC_FUNC_PROLOGUE();
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// bl 0x8252c708
	ctx.lr = 0x8252CB38;
	sub_8252C708(ctx, base);
	// lwz r3,392(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 392);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8252cb4c
	if (ctx.cr6.eq) goto loc_8252CB4C;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82524a90
	ctx.lr = 0x8252CB4C;
	sub_82524A90(ctx, base);
loc_8252CB4C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82519310
	ctx.lr = 0x8252CB58;
	sub_82519310(ctx, base);
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

__attribute__((alias("__imp__sub_8252CB70"))) PPC_WEAK_FUNC(sub_8252CB70);
PPC_FUNC_IMPL(__imp__sub_8252CB70) {
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
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// lwz r3,21120(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 21120);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8252cbb8
	if (ctx.cr6.eq) goto loc_8252CBB8;
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,14984
	ctx.r11.s64 = ctx.r11.s64 + 14984;
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x8252cbb0
	if (ctx.cr6.eq) goto loc_8252CBB0;
	// bl 0x8226c3a0
	ctx.lr = 0x8252CBB0;
	sub_8226C3A0(ctx, base);
loc_8252CBB0:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,404(r6)
	PPC_STORE_U32(ctx.r6.u32 + 404, ctx.r11.u32);
loc_8252CBB8:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8252CBC8"))) PPC_WEAK_FUNC(sub_8252CBC8);
PPC_FUNC_IMPL(__imp__sub_8252CBC8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7660
	ctx.lr = 0x8252CBD0;
	__savegprlr_22(ctx, base);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32209
	ctx.r11.s64 = -2110849024;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r11,r11,29152
	ctx.r11.s64 = ctx.r11.s64 + 29152;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r30,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r30.u32);
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// mr r25,r7
	ctx.r25.u64 = ctx.r7.u64;
	// mr r22,r8
	ctx.r22.u64 = ctx.r8.u64;
	// mr r24,r9
	ctx.r24.u64 = ctx.r9.u64;
	// mr r23,r10
	ctx.r23.u64 = ctx.r10.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8252cc10
	if (!ctx.cr6.eq) goto loc_8252CC10;
	// stw r30,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r30.u32);
	// b 0x8252cc28
	goto loc_8252CC28;
loc_8252CC10:
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// stw r11,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r11.u32);
	// addi r11,r1,144
	ctx.r11.s64 = ctx.r1.s64 + 144;
	// addi r10,r10,6380
	ctx.r10.s64 = ctx.r10.s64 + 6380;
	// stw r11,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r11.u32);
	// stw r10,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r10.u32);
loc_8252CC28:
	// li r29,1
	ctx.r29.s64 = 1;
	// stw r30,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r30.u32);
	// addi r10,r1,176
	ctx.r10.s64 = ctx.r1.s64 + 176;
	// stw r30,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r30.u32);
	// addi r9,r1,144
	ctx.r9.s64 = ctx.r1.s64 + 144;
	// stw r29,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r29.u32);
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82518b28
	ctx.lr = 0x8252CC5C;
	sub_82518B28(ctx, base);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// addi r11,r11,13008
	ctx.r11.s64 = ctx.r11.s64 + 13008;
	// addi r10,r10,5228
	ctx.r10.s64 = ctx.r10.s64 + 5228;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// stw r10,344(r31)
	PPC_STORE_U32(ctx.r31.u32 + 344, ctx.r10.u32);
	// addi r3,r31,368
	ctx.r3.s64 = ctx.r31.s64 + 368;
	// stw r30,364(r31)
	PPC_STORE_U32(ctx.r31.u32 + 364, ctx.r30.u32);
	// addi r28,r31,344
	ctx.r28.s64 = ctx.r31.s64 + 344;
	// bl 0x8226c200
	ctx.lr = 0x8252CC88;
	sub_8226C200(ctx, base);
	// lis r11,-32173
	ctx.r11.s64 = -2108489728;
	// lis r10,-32117
	ctx.r10.s64 = -2104819712;
	// stw r27,408(r31)
	PPC_STORE_U32(ctx.r31.u32 + 408, ctx.r27.u32);
	// lis r9,-32117
	ctx.r9.s64 = -2104819712;
	// stw r26,412(r31)
	PPC_STORE_U32(ctx.r31.u32 + 412, ctx.r26.u32);
	// stw r30,392(r31)
	PPC_STORE_U32(ctx.r31.u32 + 392, ctx.r30.u32);
	// addi r11,r11,-10568
	ctx.r11.s64 = ctx.r11.s64 + -10568;
	// stw r30,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r30.u32);
	// addi r10,r10,9280
	ctx.r10.s64 = ctx.r10.s64 + 9280;
	// stw r29,400(r31)
	PPC_STORE_U32(ctx.r31.u32 + 400, ctx.r29.u32);
	// addi r9,r9,9280
	ctx.r9.s64 = ctx.r9.s64 + 9280;
	// stw r30,404(r31)
	PPC_STORE_U32(ctx.r31.u32 + 404, ctx.r30.u32);
	// li r4,3
	ctx.r4.s64 = 3;
	// stw r30,416(r31)
	PPC_STORE_U32(ctx.r31.u32 + 416, ctx.r30.u32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// stw r30,420(r31)
	PPC_STORE_U32(ctx.r31.u32 + 420, ctx.r30.u32);
	// stw r25,428(r31)
	PPC_STORE_U32(ctx.r31.u32 + 428, ctx.r25.u32);
	// stw r30,432(r31)
	PPC_STORE_U32(ctx.r31.u32 + 432, ctx.r30.u32);
	// stw r30,436(r31)
	PPC_STORE_U32(ctx.r31.u32 + 436, ctx.r30.u32);
	// stw r30,440(r31)
	PPC_STORE_U32(ctx.r31.u32 + 440, ctx.r30.u32);
	// stw r29,444(r31)
	PPC_STORE_U32(ctx.r31.u32 + 444, ctx.r29.u32);
	// stw r30,448(r31)
	PPC_STORE_U32(ctx.r31.u32 + 448, ctx.r30.u32);
	// stw r30,452(r31)
	PPC_STORE_U32(ctx.r31.u32 + 452, ctx.r30.u32);
	// lwz r8,0(r24)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// stw r8,424(r31)
	PPC_STORE_U32(ctx.r31.u32 + 424, ctx.r8.u32);
	// stw r31,348(r31)
	PPC_STORE_U32(ctx.r31.u32 + 348, ctx.r31.u32);
	// stw r11,352(r31)
	PPC_STORE_U32(ctx.r31.u32 + 352, ctx.r11.u32);
	// stw r10,356(r31)
	PPC_STORE_U32(ctx.r31.u32 + 356, ctx.r10.u32);
	// stw r9,360(r31)
	PPC_STORE_U32(ctx.r31.u32 + 360, ctx.r9.u32);
	// stw r30,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r30.u32);
	// stw r30,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r30.u32);
	// stw r28,176(r31)
	PPC_STORE_U32(ctx.r31.u32 + 176, ctx.r28.u32);
	// bl 0x822e4d50
	ctx.lr = 0x8252CD0C;
	sub_822E4D50(ctx, base);
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r11,r11,27984
	ctx.r11.s64 = ctx.r11.s64 + 27984;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lfd f0,112(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + 112);
	// stfd f0,136(r1)
	PPC_STORE_U64(ctx.r1.u32 + 136, ctx.f0.u64);
	// bl 0x82519160
	ctx.lr = 0x8252CD28;
	sub_82519160(ctx, base);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r11,12684
	ctx.r4.s64 = ctx.r11.s64 + 12684;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// bl 0x826a7620
	ctx.lr = 0x8252CD40;
	sub_826A7620(ctx, base);
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8252cd50
	if (ctx.cr6.eq) goto loc_8252CD50;
	// bl 0x82241d18
	ctx.lr = 0x8252CD50;
	sub_82241D18(ctx, base);
loc_8252CD50:
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x822e4d00
	ctx.lr = 0x8252CD58;
	sub_822E4D00(ctx, base);
	// lis r11,-31955
	ctx.r11.s64 = -2094202880;
	// lwz r3,30428(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 30428);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8252cd6c
	if (!ctx.cr6.eq) goto loc_8252CD6C;
	// bl 0x822599a0
	ctx.lr = 0x8252CD6C;
	sub_822599A0(ctx, base);
loc_8252CD6C:
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// stw r29,96(r3)
	PPC_STORE_U32(ctx.r3.u32 + 96, ctx.r29.u32);
	// beq cr6,0x8252cd98
	if (ctx.cr6.eq) goto loc_8252CD98;
	// lwz r11,436(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 436);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8252cd98
	if (!ctx.cr6.eq) goto loc_8252CD98;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82519230
	ctx.lr = 0x8252CD94;
	sub_82519230(ctx, base);
	// stw r29,436(r31)
	PPC_STORE_U32(ctx.r31.u32 + 436, ctx.r29.u32);
loc_8252CD98:
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82f91940
	ctx.lr = 0x8252CDA0;
	sub_82F91940(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x82fa76b0
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8252CDAC"))) PPC_WEAK_FUNC(sub_8252CDAC);
PPC_FUNC_IMPL(__imp__sub_8252CDAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8252CDB0"))) PPC_WEAK_FUNC(sub_8252CDB0);
PPC_FUNC_IMPL(__imp__sub_8252CDB0) {
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
	// bl 0x8252ce00
	ctx.lr = 0x8252CDD0;
	sub_8252CE00(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8252cde0
	if (ctx.cr0.eq) goto loc_8252CDE0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82691540
	ctx.lr = 0x8252CDE0;
	sub_82691540(ctx, base);
loc_8252CDE0:
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

__attribute__((alias("__imp__sub_8252CDFC"))) PPC_WEAK_FUNC(sub_8252CDFC);
PPC_FUNC_IMPL(__imp__sub_8252CDFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8252CE00"))) PPC_WEAK_FUNC(sub_8252CE00);
PPC_FUNC_IMPL(__imp__sub_8252CE00) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r11,r11,13008
	ctx.r11.s64 = ctx.r11.s64 + 13008;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x82519160
	ctx.lr = 0x8252CE30;
	sub_82519160(ctx, base);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addic r9,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// subfe r30,r9,r10
	temp.u8 = (~ctx.r9.u32 + ctx.r10.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r30.u64 = ~ctx.r9.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// beq cr6,0x8252ce50
	if (ctx.cr6.eq) goto loc_8252CE50;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82241d18
	ctx.lr = 0x8252CE50;
	sub_82241D18(ctx, base);
loc_8252CE50:
	// clrlwi. r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8252cec8
	if (ctx.cr0.eq) goto loc_8252CEC8;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82519160
	ctx.lr = 0x8252CE64;
	sub_82519160(ctx, base);
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x826a4210
	ctx.lr = 0x8252CE6C;
	sub_826A4210(ctx, base);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r11,12672
	ctx.r4.s64 = ctx.r11.s64 + 12672;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x826a72e8
	ctx.lr = 0x8252CE80;
	sub_826A72E8(ctx, base);
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8252ce90
	if (ctx.cr6.eq) goto loc_8252CE90;
	// bl 0x82241d18
	ctx.lr = 0x8252CE90;
	sub_82241D18(ctx, base);
loc_8252CE90:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82519160
	ctx.lr = 0x8252CE9C;
	sub_82519160(ctx, base);
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x826a4210
	ctx.lr = 0x8252CEA4;
	sub_826A4210(ctx, base);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r11,7844
	ctx.r4.s64 = ctx.r11.s64 + 7844;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x826a72e8
	ctx.lr = 0x8252CEB8;
	sub_826A72E8(ctx, base);
	// lwz r3,100(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8252cec8
	if (ctx.cr6.eq) goto loc_8252CEC8;
	// bl 0x82241d18
	ctx.lr = 0x8252CEC8;
	sub_82241D18(ctx, base);
loc_8252CEC8:
	// lwz r3,416(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 416);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8252cee8
	if (ctx.cr6.eq) goto loc_8252CEE8;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8253d820
	ctx.lr = 0x8252CEE4;
	sub_8253D820(ctx, base);
	// stw r30,416(r31)
	PPC_STORE_U32(ctx.r31.u32 + 416, ctx.r30.u32);
loc_8252CEE8:
	// stw r30,432(r31)
	PPC_STORE_U32(ctx.r31.u32 + 432, ctx.r30.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r30,440(r31)
	PPC_STORE_U32(ctx.r31.u32 + 440, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825191a8
	ctx.lr = 0x8252CEFC;
	sub_825191A8(ctx, base);
	// lwz r3,364(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 364);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8252cf10
	if (ctx.cr6.eq) goto loc_8252CF10;
	// bl 0x82524840
	ctx.lr = 0x8252CF0C;
	sub_82524840(ctx, base);
	// stw r30,364(r31)
	PPC_STORE_U32(ctx.r31.u32 + 364, ctx.r30.u32);
loc_8252CF10:
	// lwz r3,416(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 416);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8252cf2c
	if (ctx.cr6.eq) goto loc_8252CF2C;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8253d820
	ctx.lr = 0x8252CF28;
	sub_8253D820(ctx, base);
	// stw r30,416(r31)
	PPC_STORE_U32(ctx.r31.u32 + 416, ctx.r30.u32);
loc_8252CF2C:
	// lwz r3,420(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 420);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8252cf48
	if (ctx.cr6.eq) goto loc_8252CF48;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8253d820
	ctx.lr = 0x8252CF44;
	sub_8253D820(ctx, base);
	// stw r30,420(r31)
	PPC_STORE_U32(ctx.r31.u32 + 420, ctx.r30.u32);
loc_8252CF48:
	// lis r11,-31955
	ctx.r11.s64 = -2094202880;
	// lwz r11,30428(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 30428);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8252cf60
	if (!ctx.cr6.eq) goto loc_8252CF60;
	// bl 0x822599a0
	ctx.lr = 0x8252CF5C;
	sub_822599A0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_8252CF60:
	// stw r30,96(r11)
	PPC_STORE_U32(ctx.r11.u32 + 96, ctx.r30.u32);
	// addi r3,r31,368
	ctx.r3.s64 = ctx.r31.s64 + 368;
	// bl 0x82f91940
	ctx.lr = 0x8252CF6C;
	sub_82F91940(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82518fd0
	ctx.lr = 0x8252CF74;
	sub_82518FD0(ctx, base);
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

__attribute__((alias("__imp__sub_8252CF8C"))) PPC_WEAK_FUNC(sub_8252CF8C);
PPC_FUNC_IMPL(__imp__sub_8252CF8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8252CF90"))) PPC_WEAK_FUNC(sub_8252CF90);
PPC_FUNC_IMPL(__imp__sub_8252CF90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x8252CF98;
	__savegprlr_28(ctx, base);
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// bl 0x82519310
	ctx.lr = 0x8252CFAC;
	sub_82519310(ctx, base);
	// lis r11,-31955
	ctx.r11.s64 = -2094202880;
	// lwz r4,31080(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 31080);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x8252cfc4
	if (!ctx.cr6.eq) goto loc_8252CFC4;
	// bl 0x8254abe0
	ctx.lr = 0x8252CFC0;
	sub_8254ABE0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
loc_8252CFC4:
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8254c1b0
	ctx.lr = 0x8252CFD0;
	sub_8254C1B0(ctx, base);
	// li r28,0
	ctx.r28.s64 = 0;
	// lwz r29,80(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8252d0d0
	if (ctx.cr6.eq) goto loc_8252D0D0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x824261e8
	ctx.lr = 0x8252CFEC;
	sub_824261E8(ctx, base);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r10,56(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8252d028
	if (ctx.cr6.eq) goto loc_8252D028;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8252D010;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r3,408
	ctx.r3.s64 = ctx.r3.s64 + 408;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,60(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8252D024;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x8252d02c
	goto loc_8252D02C;
loc_8252D028:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
loc_8252D02C:
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r30,1
	ctx.r30.s64 = 1;
	// bne 0x8252d058
	if (!ctx.cr0.eq) goto loc_8252D058;
	// lwz r11,436(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 436);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8252d058
	if (!ctx.cr6.eq) goto loc_8252D058;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82519230
	ctx.lr = 0x8252D054;
	sub_82519230(ctx, base);
	// stw r30,436(r31)
	PPC_STORE_U32(ctx.r31.u32 + 436, ctx.r30.u32);
loc_8252D058:
	// lwz r3,8(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// bl 0x828e3b10
	ctx.lr = 0x8252D060;
	sub_828E3B10(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8252d094
	if (!ctx.cr0.eq) goto loc_8252D094;
	// lwz r11,436(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 436);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8252d088
	if (!ctx.cr6.eq) goto loc_8252D088;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82519230
	ctx.lr = 0x8252D084;
	sub_82519230(ctx, base);
	// stw r30,436(r31)
	PPC_STORE_U32(ctx.r31.u32 + 436, ctx.r30.u32);
loc_8252D088:
	// lwz r11,408(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 408);
	// stw r28,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r28.u32);
	// stw r28,404(r31)
	PPC_STORE_U32(ctx.r31.u32 + 404, ctx.r28.u32);
loc_8252D094:
	// lwz r3,8(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// bl 0x828e3b10
	ctx.lr = 0x8252D09C;
	sub_828E3B10(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8252d0c0
	if (!ctx.cr0.eq) goto loc_8252D0C0;
	// lwz r3,420(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 420);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8252d0c0
	if (ctx.cr6.eq) goto loc_8252D0C0;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8253d820
	ctx.lr = 0x8252D0BC;
	sub_8253D820(ctx, base);
	// stw r28,420(r31)
	PPC_STORE_U32(ctx.r31.u32 + 420, ctx.r28.u32);
loc_8252D0C0:
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8252d0d0
	if (ctx.cr6.eq) goto loc_8252D0D0;
	// bl 0x82241d18
	ctx.lr = 0x8252D0D0;
	sub_82241D18(ctx, base);
loc_8252D0D0:
	// bl 0x8253de00
	ctx.lr = 0x8252D0D4;
	sub_8253DE00(ctx, base);
	// bl 0x8253de00
	ctx.lr = 0x8252D0D8;
	sub_8253DE00(ctx, base);
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r11,440(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 440);
	// subf r10,r10,r9
	ctx.r10.s64 = ctx.r9.s64 - ctx.r10.s64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// bne cr6,0x8252d114
	if (!ctx.cr6.eq) goto loc_8252D114;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8252d10c
	if (ctx.cr6.eq) goto loc_8252D10C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8252e6f8
	ctx.lr = 0x8252D108;
	sub_8252E6F8(ctx, base);
	// b 0x8252d140
	goto loc_8252D140;
loc_8252D10C:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8252d140
	if (ctx.cr6.eq) goto loc_8252D140;
loc_8252D114:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x8252d140
	if (!ctx.cr6.eq) goto loc_8252D140;
	// stw r28,440(r31)
	PPC_STORE_U32(ctx.r31.u32 + 440, ctx.r28.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825191a8
	ctx.lr = 0x8252D12C;
	sub_825191A8(ctx, base);
	// lwz r3,364(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 364);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8252d140
	if (ctx.cr6.eq) goto loc_8252D140;
	// bl 0x82524840
	ctx.lr = 0x8252D13C;
	sub_82524840(ctx, base);
	// stw r28,364(r31)
	PPC_STORE_U32(ctx.r31.u32 + 364, ctx.r28.u32);
loc_8252D140:
	// lwz r11,364(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 364);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8252d180
	if (ctx.cr6.eq) goto loc_8252D180;
	// lwz r11,400(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 400);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8252d174
	if (ctx.cr6.eq) goto loc_8252D174;
	// bl 0x8250f738
	ctx.lr = 0x8252D15C;
	sub_8250F738(ctx, base);
	// lwz r11,160(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 160);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x8252d174
	if (!ctx.cr6.eq) goto loc_8252D174;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8252d510
	ctx.lr = 0x8252D170;
	sub_8252D510(ctx, base);
	// stw r28,400(r31)
	PPC_STORE_U32(ctx.r31.u32 + 400, ctx.r28.u32);
loc_8252D174:
	// lwz r3,364(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 364);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82524a90
	ctx.lr = 0x8252D180;
	sub_82524A90(ctx, base);
loc_8252D180:
	// lwz r11,436(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 436);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r5,1
	ctx.r5.s64 = 1;
	// bne cr6,0x8252d19c
	if (!ctx.cr6.eq) goto loc_8252D19C;
	// li r5,0
	ctx.r5.s64 = 0;
loc_8252D19C:
	// bl 0x82519230
	ctx.lr = 0x8252D1A0;
	sub_82519230(ctx, base);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8252d1b0
	if (ctx.cr6.eq) goto loc_8252D1B0;
	// bl 0x82241d18
	ctx.lr = 0x8252D1B0;
	sub_82241D18(ctx, base);
loc_8252D1B0:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8252D1BC"))) PPC_WEAK_FUNC(sub_8252D1BC);
PPC_FUNC_IMPL(__imp__sub_8252D1BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8252D1C0"))) PPC_WEAK_FUNC(sub_8252D1C0);
PPC_FUNC_IMPL(__imp__sub_8252D1C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7674
	ctx.lr = 0x8252D1C8;
	__savegprlr_27(ctx, base);
	// ld r12,-4096(r1)
	ctx.r12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -4096);
	// stwu r1,-5824(r1)
	ea = -5824 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// addic. r11,r3,424
	ctx.xer.ca = ctx.r3.u32 > 4294966871;
	ctx.r11.s64 = ctx.r3.s64 + 424;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8252d508
	if (ctx.cr0.eq) goto loc_8252D508;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe. r11,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8252d508
	if (ctx.cr0.eq) goto loc_8252D508;
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// addi r30,r11,21120
	ctx.r30.s64 = ctx.r11.s64 + 21120;
	// lbz r11,69(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 69);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8252d508
	if (ctx.cr0.eq) goto loc_8252D508;
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// li r5,510
	ctx.r5.s64 = 510;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,146
	ctx.r3.s64 = ctx.r1.s64 + 146;
	// lhz r31,31944(r11)
	ctx.r31.u64 = PPC_LOAD_U16(ctx.r11.u32 + 31944);
	// sth r31,144(r1)
	PPC_STORE_U16(ctx.r1.u32 + 144, ctx.r31.u16);
	// bl 0x82fa7cf0
	ctx.lr = 0x8252D21C;
	sub_82FA7CF0(ctx, base);
	// li r5,2046
	ctx.r5.s64 = 2046;
	// sth r31,1680(r1)
	PPC_STORE_U16(ctx.r1.u32 + 1680, ctx.r31.u16);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,1682
	ctx.r3.s64 = ctx.r1.s64 + 1682;
	// bl 0x82fa7cf0
	ctx.lr = 0x8252D230;
	sub_82FA7CF0(ctx, base);
	// li r5,2046
	ctx.r5.s64 = 2046;
	// li r4,0
	ctx.r4.s64 = 0;
	// sth r31,3728(r1)
	PPC_STORE_U16(ctx.r1.u32 + 3728, ctx.r31.u16);
	// addi r3,r1,3730
	ctx.r3.s64 = ctx.r1.s64 + 3730;
	// bl 0x82fa7cf0
	ctx.lr = 0x8252D244;
	sub_82FA7CF0(ctx, base);
	// li r5,510
	ctx.r5.s64 = 510;
	// li r4,0
	ctx.r4.s64 = 0;
	// sth r31,656(r1)
	PPC_STORE_U16(ctx.r1.u32 + 656, ctx.r31.u16);
	// addi r3,r1,658
	ctx.r3.s64 = ctx.r1.s64 + 658;
	// bl 0x82fa7cf0
	ctx.lr = 0x8252D258;
	sub_82FA7CF0(ctx, base);
	// li r5,510
	ctx.r5.s64 = 510;
	// li r4,0
	ctx.r4.s64 = 0;
	// sth r31,1168(r1)
	PPC_STORE_U16(ctx.r1.u32 + 1168, ctx.r31.u16);
	// addi r3,r1,1170
	ctx.r3.s64 = ctx.r1.s64 + 1170;
	// bl 0x82fa7cf0
	ctx.lr = 0x8252D26C;
	sub_82FA7CF0(ctx, base);
	// li r28,0
	ctx.r28.s64 = 0;
	// li r29,1
	ctx.r29.s64 = 1;
	// stw r28,448(r27)
	PPC_STORE_U32(ctx.r27.u32 + 448, ctx.r28.u32);
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
	// lwz r30,0(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
loc_8252D280:
	// bl 0x8226d8e8
	ctx.lr = 0x8252D284;
	sub_8226D8E8(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8226ecf0
	ctx.lr = 0x8252D28C;
	sub_8226ECF0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8252d2cc
	if (ctx.cr0.eq) goto loc_8252D2CC;
	// lbz r11,216(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 216);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x8252d2cc
	if (!ctx.cr0.eq) goto loc_8252D2CC;
	// stw r28,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r28.u32);
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// li r4,211
	ctx.r4.s64 = 211;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a74bc0
	ctx.lr = 0x8252D2B4;
	sub_82A74BC0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x8252d2c8
	if (!ctx.cr0.eq) goto loc_8252D2C8;
	// lwz r11,128(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8252d2cc
	if (!ctx.cr6.eq) goto loc_8252D2CC;
loc_8252D2C8:
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
loc_8252D2CC:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplwi cr6,r31,8
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 8, ctx.xer);
	// blt cr6,0x8252d280
	if (ctx.cr6.lt) goto loc_8252D280;
	// lbz r11,216(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 216);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x8252d448
	if (!ctx.cr0.eq) goto loc_8252D448;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82920518
	ctx.lr = 0x8252D2EC;
	sub_82920518(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8252d448
	if (!ctx.cr0.eq) goto loc_8252D448;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82920258
	ctx.lr = 0x8252D2FC;
	sub_82920258(ctx, base);
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// addi r31,r11,21076
	ctx.r31.s64 = ctx.r11.s64 + 21076;
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,256
	ctx.r6.s64 = 256;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// addi r4,r10,12492
	ctx.r4.s64 = ctx.r10.s64 + 12492;
	// bne 0x8252d388
	if (!ctx.cr0.eq) goto loc_8252D388;
	// bl 0x8259c8e0
	ctx.lr = 0x8252D32C;
	sub_8259C8E0(ctx, base);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r4,r11,12524
	ctx.r4.s64 = ctx.r11.s64 + 12524;
loc_8252D334:
	// li r8,1
	ctx.r8.s64 = 1;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1024
	ctx.r6.s64 = 1024;
	// addi r5,r1,1680
	ctx.r5.s64 = ctx.r1.s64 + 1680;
	// bl 0x8259c8e0
	ctx.lr = 0x8252D34C;
	sub_8259C8E0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82920520
	ctx.lr = 0x8252D354;
	sub_82920520(ctx, base);
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x8252d368
	if (ctx.cr6.lt) goto loc_8252D368;
	// lwz r6,0(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x8252d36c
	goto loc_8252D36C;
loc_8252D368:
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
loc_8252D36C:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r7,r1,1680
	ctx.r7.s64 = ctx.r1.s64 + 1680;
	// addi r5,r11,-27336
	ctx.r5.s64 = ctx.r11.s64 + -27336;
	// li r4,1024
	ctx.r4.s64 = 1024;
	// addi r3,r1,3728
	ctx.r3.s64 = ctx.r1.s64 + 3728;
	// bl 0x82563c28
	ctx.lr = 0x8252D384;
	sub_82563C28(ctx, base);
	// b 0x8252d490
	goto loc_8252D490;
loc_8252D388:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne cr6,0x8252d3a0
	if (!ctx.cr6.eq) goto loc_8252D3A0;
	// bl 0x8259c8e0
	ctx.lr = 0x8252D394;
	sub_8259C8E0(ctx, base);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r4,r11,12548
	ctx.r4.s64 = ctx.r11.s64 + 12548;
	// b 0x8252d334
	goto loc_8252D334;
loc_8252D3A0:
	// bl 0x8259c8e0
	ctx.lr = 0x8252D3A4;
	sub_8259C8E0(ctx, base);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// li r8,1
	ctx.r8.s64 = 1;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r4,r11,12568
	ctx.r4.s64 = ctx.r11.s64 + 12568;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1024
	ctx.r6.s64 = 1024;
	// addi r5,r1,1680
	ctx.r5.s64 = ctx.r1.s64 + 1680;
	// bl 0x8259c8e0
	ctx.lr = 0x8252D3C4;
	sub_8259C8E0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82920520
	ctx.lr = 0x8252D3CC;
	sub_82920520(ctx, base);
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x8252d3e0
	if (ctx.cr6.lt) goto loc_8252D3E0;
	// lwz r6,0(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x8252d3e4
	goto loc_8252D3E4;
loc_8252D3E0:
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
loc_8252D3E4:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r7,r1,1680
	ctx.r7.s64 = ctx.r1.s64 + 1680;
	// addi r5,r11,-27336
	ctx.r5.s64 = ctx.r11.s64 + -27336;
	// li r4,1024
	ctx.r4.s64 = 1024;
	// addi r3,r1,3728
	ctx.r3.s64 = ctx.r1.s64 + 3728;
	// bl 0x82563c28
	ctx.lr = 0x8252D3FC;
	sub_82563C28(ctx, base);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// li r8,1
	ctx.r8.s64 = 1;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r4,r11,12588
	ctx.r4.s64 = ctx.r11.s64 + 12588;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,256
	ctx.r6.s64 = 256;
	// addi r5,r1,656
	ctx.r5.s64 = ctx.r1.s64 + 656;
	// bl 0x8259c8e0
	ctx.lr = 0x8252D41C;
	sub_8259C8E0(ctx, base);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// li r8,1
	ctx.r8.s64 = 1;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r4,r11,12608
	ctx.r4.s64 = ctx.r11.s64 + 12608;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,256
	ctx.r6.s64 = 256;
	// addi r5,r1,1168
	ctx.r5.s64 = ctx.r1.s64 + 1168;
	// bl 0x8259c8e0
	ctx.lr = 0x8252D43C;
	sub_8259C8E0(ctx, base);
	// lis r11,-32173
	ctx.r11.s64 = -2108489728;
	// addi r31,r11,-7880
	ctx.r31.s64 = ctx.r11.s64 + -7880;
	// b 0x8252d4b8
	goto loc_8252D4B8;
loc_8252D448:
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// addi r31,r11,21076
	ctx.r31.s64 = ctx.r11.s64 + 21076;
	// addi r4,r10,12492
	ctx.r4.s64 = ctx.r10.s64 + 12492;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,256
	ctx.r6.s64 = 256;
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x8259c8e0
	ctx.lr = 0x8252D470;
	sub_8259C8E0(ctx, base);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// li r8,1
	ctx.r8.s64 = 1;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r4,r11,12504
	ctx.r4.s64 = ctx.r11.s64 + 12504;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1024
	ctx.r6.s64 = 1024;
	// addi r5,r1,3728
	ctx.r5.s64 = ctx.r1.s64 + 3728;
	// bl 0x8259c8e0
	ctx.lr = 0x8252D490;
	sub_8259C8E0(ctx, base);
loc_8252D490:
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,256
	ctx.r6.s64 = 256;
	// addi r5,r1,656
	ctx.r5.s64 = ctx.r1.s64 + 656;
	// addi r4,r11,12520
	ctx.r4.s64 = ctx.r11.s64 + 12520;
	// bl 0x8259c8e0
	ctx.lr = 0x8252D4B0;
	sub_8259C8E0(ctx, base);
	// lis r11,-32173
	ctx.r11.s64 = -2108489728;
	// addi r31,r11,-7400
	ctx.r31.s64 = ctx.r11.s64 + -7400;
loc_8252D4B8:
	// li r3,1076
	ctx.r3.s64 = 1076;
	// bl 0x82691500
	ctx.lr = 0x8252D4C0;
	sub_82691500(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x8252d500
	if (ctx.cr0.eq) goto loc_8252D500;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r11,r11,5228
	ctx.r11.s64 = ctx.r11.s64 + 5228;
	// mr r9,r27
	ctx.r9.u64 = ctx.r27.u64;
	// mr r8,r31
	ctx.r8.u64 = ctx.r31.u64;
	// stw r11,1052(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1052, ctx.r11.u32);
	// addi r7,r1,1168
	ctx.r7.s64 = ctx.r1.s64 + 1168;
	// addi r6,r1,656
	ctx.r6.s64 = ctx.r1.s64 + 656;
	// addi r5,r1,3728
	ctx.r5.s64 = ctx.r1.s64 + 3728;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x8253d420
	ctx.lr = 0x8252D4FC;
	sub_8253D420(ctx, base);
	// b 0x8252d504
	goto loc_8252D504;
loc_8252D500:
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
loc_8252D504:
	// stw r30,416(r27)
	PPC_STORE_U32(ctx.r27.u32 + 416, ctx.r30.u32);
loc_8252D508:
	// addi r1,r1,5824
	ctx.r1.s64 = ctx.r1.s64 + 5824;
	// b 0x82fa76c4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8252D510"))) PPC_WEAK_FUNC(sub_8252D510);
PPC_FUNC_IMPL(__imp__sub_8252D510) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x8252D518;
	__savegprlr_29(ctx, base);
	// stwu r1,-1136(r1)
	ea = -1136 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r5,510
	ctx.r5.s64 = 510;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,594
	ctx.r3.s64 = ctx.r1.s64 + 594;
	// lhz r31,31944(r11)
	ctx.r31.u64 = PPC_LOAD_U16(ctx.r11.u32 + 31944);
	// sth r31,592(r1)
	PPC_STORE_U16(ctx.r1.u32 + 592, ctx.r31.u16);
	// bl 0x82fa7cf0
	ctx.lr = 0x8252D53C;
	sub_82FA7CF0(ctx, base);
	// li r5,510
	ctx.r5.s64 = 510;
	// sth r31,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r31.u16);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,82
	ctx.r3.s64 = ctx.r1.s64 + 82;
	// bl 0x82fa7cf0
	ctx.lr = 0x8252D550;
	sub_82FA7CF0(ctx, base);
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r11,r11,21120
	ctx.r11.s64 = ctx.r11.s64 + 21120;
	// lbz r10,69(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 69);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x8252d584
	if (ctx.cr0.eq) goto loc_8252D584;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,240(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 240);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lbz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 8);
	// rlwinm r11,r11,29,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r31,r11,27,31,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
loc_8252D584:
	// lwz r10,428(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 428);
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r29,r11,21076
	ctx.r29.s64 = ctx.r11.s64 + 21076;
	// beq cr6,0x8252d5c0
	if (ctx.cr6.eq) goto loc_8252D5C0;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq cr6,0x8252d5d4
	if (ctx.cr6.eq) goto loc_8252D5D4;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r4,r11,12616
	ctx.r4.s64 = ctx.r11.s64 + 12616;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,256
	ctx.r6.s64 = 256;
	// addi r5,r1,592
	ctx.r5.s64 = ctx.r1.s64 + 592;
	// bl 0x8259c8e0
	ctx.lr = 0x8252D5C0;
	sub_8259C8E0(ctx, base);
loc_8252D5C0:
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq cr6,0x8252d5d4
	if (ctx.cr6.eq) goto loc_8252D5D4;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r4,r11,12632
	ctx.r4.s64 = ctx.r11.s64 + 12632;
	// b 0x8252d5dc
	goto loc_8252D5DC;
loc_8252D5D4:
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r4,r11,12652
	ctx.r4.s64 = ctx.r11.s64 + 12652;
loc_8252D5DC:
	// li r8,1
	ctx.r8.s64 = 1;
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,256
	ctx.r6.s64 = 256;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x8259c8e0
	ctx.lr = 0x8252D5F4;
	sub_8259C8E0(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,592
	ctx.r4.s64 = ctx.r1.s64 + 592;
	// lwz r3,364(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 364);
	// bl 0x825249c8
	ctx.lr = 0x8252D604;
	sub_825249C8(ctx, base);
	// stw r31,396(r30)
	PPC_STORE_U32(ctx.r30.u32 + 396, ctx.r31.u32);
	// addi r1,r1,1136
	ctx.r1.s64 = ctx.r1.s64 + 1136;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8252D610"))) PPC_WEAK_FUNC(sub_8252D610);
PPC_FUNC_IMPL(__imp__sub_8252D610) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x8252D618;
	__savegprlr_29(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// li r11,0
	ctx.r11.s64 = 0;
	// bl 0x82519160
	ctx.lr = 0x8252D634;
	sub_82519160(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8252d64c
	if (ctx.cr6.eq) goto loc_8252D64C;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne cr6,0x8252d650
	if (!ctx.cr6.eq) goto loc_8252D650;
loc_8252D64C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_8252D650:
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// clrlwi r31,r11,24
	ctx.r31.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8252d664
	if (ctx.cr6.eq) goto loc_8252D664;
	// bl 0x82241d18
	ctx.lr = 0x8252D664;
	sub_82241D18(ctx, base);
loc_8252D664:
	// clrlwi. r11,r31,24
	ctx.r11.u64 = ctx.r31.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8252d6ac
	if (ctx.cr0.eq) goto loc_8252D6AC;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r3,20(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8286de68
	ctx.lr = 0x8252D67C;
	sub_8286DE68(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82519160
	ctx.lr = 0x8252D688;
	sub_82519160(ctx, base);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r4,r11,7844
	ctx.r4.s64 = ctx.r11.s64 + 7844;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x826a72e8
	ctx.lr = 0x8252D69C;
	sub_826A72E8(ctx, base);
	// lwz r3,100(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8252d6ac
	if (ctx.cr6.eq) goto loc_8252D6AC;
	// bl 0x82241d18
	ctx.lr = 0x8252D6AC;
	sub_82241D18(ctx, base);
loc_8252D6AC:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8252D6B4"))) PPC_WEAK_FUNC(sub_8252D6B4);
PPC_FUNC_IMPL(__imp__sub_8252D6B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8252D6B8"))) PPC_WEAK_FUNC(sub_8252D6B8);
PPC_FUNC_IMPL(__imp__sub_8252D6B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7670
	ctx.lr = 0x8252D6C0;
	__savegprlr_26(ctx, base);
	// ld r12,-4096(r1)
	ctx.r12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -4096);
	// stwu r1,-6320(r1)
	ea = -6320 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r28,-31955
	ctx.r28.s64 = -2094202880;
	// li r26,0
	ctx.r26.s64 = 0;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
	// lwz r11,31080(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 31080);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8252d6f0
	if (!ctx.cr6.eq) goto loc_8252D6F0;
	// bl 0x8254abe0
	ctx.lr = 0x8252D6EC;
	sub_8254ABE0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_8252D6F0:
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x8254c1b0
	ctx.lr = 0x8252D700;
	sub_8254C1B0(ctx, base);
	// lwz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// li r27,1
	ctx.r27.s64 = 1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8252d724
	if (ctx.cr6.eq) goto loc_8252D724;
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// bl 0x828e3b10
	ctx.lr = 0x8252D718;
	sub_828E3B10(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8252d724
	if (ctx.cr0.eq) goto loc_8252D724;
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
loc_8252D724:
	// cmplwi cr6,r31,1
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 1, ctx.xer);
	// blt cr6,0x8252d8ec
	if (ctx.cr6.lt) goto loc_8252D8EC;
	// bne cr6,0x8252da8c
	if (!ctx.cr6.eq) goto loc_8252DA8C;
	// lis r11,-31955
	ctx.r11.s64 = -2094202880;
	// lwz r3,30428(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 30428);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8252d744
	if (!ctx.cr6.eq) goto loc_8252D744;
	// bl 0x822599a0
	ctx.lr = 0x8252D744;
	sub_822599A0(ctx, base);
loc_8252D744:
	// lbz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 4);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8252d8e4
	if (ctx.cr0.eq) goto loc_8252D8E4;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x8252d8e4
	if (ctx.cr6.eq) goto loc_8252D8E4;
	// lwz r11,404(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 404);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8252d770
	if (ctx.cr6.eq) goto loc_8252D770;
loc_8252D764:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8252daa8
	ctx.lr = 0x8252D76C;
	sub_8252DAA8(ctx, base);
	// b 0x8252da8c
	goto loc_8252DA8C;
loc_8252D770:
	// lwz r11,436(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 436);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8252d790
	if (!ctx.cr6.eq) goto loc_8252D790;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82519230
	ctx.lr = 0x8252D78C;
	sub_82519230(ctx, base);
	// stw r27,436(r29)
	PPC_STORE_U32(ctx.r29.u32 + 436, ctx.r27.u32);
loc_8252D790:
	// lwz r11,31080(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 31080);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8252d7a4
	if (!ctx.cr6.eq) goto loc_8252D7A4;
	// bl 0x8254abe0
	ctx.lr = 0x8252D7A0;
	sub_8254ABE0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_8252D7A4:
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8254c1b0
	ctx.lr = 0x8252D7B4;
	sub_8254C1B0(ctx, base);
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8252d8d8
	if (ctx.cr6.eq) goto loc_8252D8D8;
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// li r5,510
	ctx.r5.s64 = 510;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,114
	ctx.r3.s64 = ctx.r1.s64 + 114;
	// addi r30,r11,31944
	ctx.r30.s64 = ctx.r11.s64 + 31944;
	// lhz r31,31944(r11)
	ctx.r31.u64 = PPC_LOAD_U16(ctx.r11.u32 + 31944);
	// sth r31,112(r1)
	PPC_STORE_U16(ctx.r1.u32 + 112, ctx.r31.u16);
	// bl 0x82fa7cf0
	ctx.lr = 0x8252D7E0;
	sub_82FA7CF0(ctx, base);
	// li r5,2046
	ctx.r5.s64 = 2046;
	// sth r31,2160(r1)
	PPC_STORE_U16(ctx.r1.u32 + 2160, ctx.r31.u16);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,2162
	ctx.r3.s64 = ctx.r1.s64 + 2162;
	// bl 0x82fa7cf0
	ctx.lr = 0x8252D7F4;
	sub_82FA7CF0(ctx, base);
	// li r5,510
	ctx.r5.s64 = 510;
	// li r4,0
	ctx.r4.s64 = 0;
	// sth r31,1136(r1)
	PPC_STORE_U16(ctx.r1.u32 + 1136, ctx.r31.u16);
	// addi r3,r1,1138
	ctx.r3.s64 = ctx.r1.s64 + 1138;
	// bl 0x82fa7cf0
	ctx.lr = 0x8252D808;
	sub_82FA7CF0(ctx, base);
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// lis r10,-32231
	ctx.r10.s64 = -2112290816;
	// addi r31,r11,21076
	ctx.r31.s64 = ctx.r11.s64 + 21076;
	// addi r4,r10,31976
	ctx.r4.s64 = ctx.r10.s64 + 31976;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,256
	ctx.r6.s64 = 256;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x8259c8e0
	ctx.lr = 0x8252D830;
	sub_8259C8E0(ctx, base);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// li r8,1
	ctx.r8.s64 = 1;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r4,r11,12748
	ctx.r4.s64 = ctx.r11.s64 + 12748;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1024
	ctx.r6.s64 = 1024;
	// addi r5,r1,2160
	ctx.r5.s64 = ctx.r1.s64 + 2160;
	// bl 0x8259c8e0
	ctx.lr = 0x8252D850;
	sub_8259C8E0(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// li r8,1
	ctx.r8.s64 = 1;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r4,r11,10328
	ctx.r4.s64 = ctx.r11.s64 + 10328;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,256
	ctx.r6.s64 = 256;
	// addi r5,r1,1136
	ctx.r5.s64 = ctx.r1.s64 + 1136;
	// bl 0x8259c8e0
	ctx.lr = 0x8252D870;
	sub_8259C8E0(ctx, base);
	// lwz r11,420(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 420);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8252d8d8
	if (!ctx.cr6.eq) goto loc_8252D8D8;
	// li r3,1076
	ctx.r3.s64 = 1076;
	// bl 0x82691500
	ctx.lr = 0x8252D884;
	sub_82691500(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8252d8cc
	if (ctx.cr0.eq) goto loc_8252D8CC;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// stw r26,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r26.u32);
	// lis r8,-32173
	ctx.r8.s64 = -2108489728;
	// addi r11,r11,5228
	ctx.r11.s64 = ctx.r11.s64 + 5228;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,1052(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1052, ctx.r11.u32);
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
	// addi r8,r8,-6840
	ctx.r8.s64 = ctx.r8.s64 + -6840;
	// addi r6,r1,1136
	ctx.r6.s64 = ctx.r1.s64 + 1136;
	// addi r5,r1,2160
	ctx.r5.s64 = ctx.r1.s64 + 2160;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253d420
	ctx.lr = 0x8252D8C4;
	sub_8253D420(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x8252d8d0
	goto loc_8252D8D0;
loc_8252D8CC:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
loc_8252D8D0:
	// stw r3,420(r29)
	PPC_STORE_U32(ctx.r29.u32 + 420, ctx.r3.u32);
	// bl 0x8253daa0
	ctx.lr = 0x8252D8D8;
	sub_8253DAA0(ctx, base);
loc_8252D8D8:
	// lwz r11,408(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 408);
	// stw r27,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r27.u32);
	// b 0x8252da70
	goto loc_8252DA70;
loc_8252D8E4:
	// lwz r11,408(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 408);
	// b 0x8252da88
	goto loc_8252DA88;
loc_8252D8EC:
	// lis r11,-31955
	ctx.r11.s64 = -2094202880;
	// lwz r3,30428(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 30428);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8252d900
	if (!ctx.cr6.eq) goto loc_8252D900;
	// bl 0x822599a0
	ctx.lr = 0x8252D900;
	sub_822599A0(ctx, base);
loc_8252D900:
	// lbz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 4);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8252da84
	if (ctx.cr0.eq) goto loc_8252DA84;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x8252da84
	if (ctx.cr6.eq) goto loc_8252DA84;
	// lwz r11,404(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 404);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8252d764
	if (!ctx.cr6.eq) goto loc_8252D764;
	// lwz r10,412(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 412);
	// lwz r11,31080(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 31080);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r27,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r27.u32);
	// bne cr6,0x8252d93c
	if (!ctx.cr6.eq) goto loc_8252D93C;
	// bl 0x8254abe0
	ctx.lr = 0x8252D938;
	sub_8254ABE0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_8252D93C:
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8254c1b0
	ctx.lr = 0x8252D94C;
	sub_8254C1B0(ctx, base);
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8252da70
	if (ctx.cr6.eq) goto loc_8252DA70;
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// li r5,510
	ctx.r5.s64 = 510;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,626
	ctx.r3.s64 = ctx.r1.s64 + 626;
	// addi r30,r11,31944
	ctx.r30.s64 = ctx.r11.s64 + 31944;
	// lhz r31,31944(r11)
	ctx.r31.u64 = PPC_LOAD_U16(ctx.r11.u32 + 31944);
	// sth r31,624(r1)
	PPC_STORE_U16(ctx.r1.u32 + 624, ctx.r31.u16);
	// bl 0x82fa7cf0
	ctx.lr = 0x8252D978;
	sub_82FA7CF0(ctx, base);
	// li r5,2046
	ctx.r5.s64 = 2046;
	// sth r31,4208(r1)
	PPC_STORE_U16(ctx.r1.u32 + 4208, ctx.r31.u16);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,4210
	ctx.r3.s64 = ctx.r1.s64 + 4210;
	// bl 0x82fa7cf0
	ctx.lr = 0x8252D98C;
	sub_82FA7CF0(ctx, base);
	// li r5,510
	ctx.r5.s64 = 510;
	// li r4,0
	ctx.r4.s64 = 0;
	// sth r31,1648(r1)
	PPC_STORE_U16(ctx.r1.u32 + 1648, ctx.r31.u16);
	// addi r3,r1,1650
	ctx.r3.s64 = ctx.r1.s64 + 1650;
	// bl 0x82fa7cf0
	ctx.lr = 0x8252D9A0;
	sub_82FA7CF0(ctx, base);
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// lis r10,-32231
	ctx.r10.s64 = -2112290816;
	// addi r31,r11,21076
	ctx.r31.s64 = ctx.r11.s64 + 21076;
	// addi r4,r10,31976
	ctx.r4.s64 = ctx.r10.s64 + 31976;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,256
	ctx.r6.s64 = 256;
	// addi r5,r1,624
	ctx.r5.s64 = ctx.r1.s64 + 624;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x8259c8e0
	ctx.lr = 0x8252D9C8;
	sub_8259C8E0(ctx, base);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// li r8,1
	ctx.r8.s64 = 1;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r4,r11,12712
	ctx.r4.s64 = ctx.r11.s64 + 12712;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1024
	ctx.r6.s64 = 1024;
	// addi r5,r1,4208
	ctx.r5.s64 = ctx.r1.s64 + 4208;
	// bl 0x8259c8e0
	ctx.lr = 0x8252D9E8;
	sub_8259C8E0(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// li r8,1
	ctx.r8.s64 = 1;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r4,r11,10328
	ctx.r4.s64 = ctx.r11.s64 + 10328;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,256
	ctx.r6.s64 = 256;
	// addi r5,r1,1648
	ctx.r5.s64 = ctx.r1.s64 + 1648;
	// bl 0x8259c8e0
	ctx.lr = 0x8252DA08;
	sub_8259C8E0(ctx, base);
	// lwz r11,420(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 420);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8252da70
	if (!ctx.cr6.eq) goto loc_8252DA70;
	// li r3,1076
	ctx.r3.s64 = 1076;
	// bl 0x82691500
	ctx.lr = 0x8252DA1C;
	sub_82691500(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8252da64
	if (ctx.cr0.eq) goto loc_8252DA64;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// stw r26,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r26.u32);
	// lis r8,-32173
	ctx.r8.s64 = -2108489728;
	// addi r11,r11,5228
	ctx.r11.s64 = ctx.r11.s64 + 5228;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,1052(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1052, ctx.r11.u32);
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
	// addi r8,r8,-6840
	ctx.r8.s64 = ctx.r8.s64 + -6840;
	// addi r6,r1,1648
	ctx.r6.s64 = ctx.r1.s64 + 1648;
	// addi r5,r1,4208
	ctx.r5.s64 = ctx.r1.s64 + 4208;
	// addi r4,r1,624
	ctx.r4.s64 = ctx.r1.s64 + 624;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253d420
	ctx.lr = 0x8252DA5C;
	sub_8253D420(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x8252da68
	goto loc_8252DA68;
loc_8252DA64:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
loc_8252DA68:
	// stw r3,420(r29)
	PPC_STORE_U32(ctx.r29.u32 + 420, ctx.r3.u32);
	// bl 0x8253daa0
	ctx.lr = 0x8252DA70;
	sub_8253DAA0(ctx, base);
loc_8252DA70:
	// lwz r3,100(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8252da8c
	if (ctx.cr6.eq) goto loc_8252DA8C;
	// bl 0x82241d18
	ctx.lr = 0x8252DA80;
	sub_82241D18(ctx, base);
	// b 0x8252da8c
	goto loc_8252DA8C;
loc_8252DA84:
	// lwz r11,412(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 412);
loc_8252DA88:
	// stw r27,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r27.u32);
loc_8252DA8C:
	// lwz r3,108(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8252da9c
	if (ctx.cr6.eq) goto loc_8252DA9C;
	// bl 0x82241d18
	ctx.lr = 0x8252DA9C;
	sub_82241D18(ctx, base);
loc_8252DA9C:
	// addi r1,r1,6320
	ctx.r1.s64 = ctx.r1.s64 + 6320;
	// b 0x82fa76c0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8252DAA4"))) PPC_WEAK_FUNC(sub_8252DAA4);
PPC_FUNC_IMPL(__imp__sub_8252DAA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8252DAA8"))) PPC_WEAK_FUNC(sub_8252DAA8);
PPC_FUNC_IMPL(__imp__sub_8252DAA8) {
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
	// stwu r1,-3712(r1)
	ea = -3712 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,416(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 416);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8252dc0c
	if (!ctx.cr6.eq) goto loc_8252DC0C;
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// li r5,510
	ctx.r5.s64 = 510;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,610
	ctx.r3.s64 = ctx.r1.s64 + 610;
	// lhz r31,31944(r11)
	ctx.r31.u64 = PPC_LOAD_U16(ctx.r11.u32 + 31944);
	// sth r31,608(r1)
	PPC_STORE_U16(ctx.r1.u32 + 608, ctx.r31.u16);
	// bl 0x82fa7cf0
	ctx.lr = 0x8252DAE8;
	sub_82FA7CF0(ctx, base);
	// li r5,2046
	ctx.r5.s64 = 2046;
	// sth r31,1632(r1)
	PPC_STORE_U16(ctx.r1.u32 + 1632, ctx.r31.u16);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,1634
	ctx.r3.s64 = ctx.r1.s64 + 1634;
	// bl 0x82fa7cf0
	ctx.lr = 0x8252DAFC;
	sub_82FA7CF0(ctx, base);
	// li r5,510
	ctx.r5.s64 = 510;
	// li r4,0
	ctx.r4.s64 = 0;
	// sth r31,96(r1)
	PPC_STORE_U16(ctx.r1.u32 + 96, ctx.r31.u16);
	// addi r3,r1,98
	ctx.r3.s64 = ctx.r1.s64 + 98;
	// bl 0x82fa7cf0
	ctx.lr = 0x8252DB10;
	sub_82FA7CF0(ctx, base);
	// li r5,510
	ctx.r5.s64 = 510;
	// li r4,0
	ctx.r4.s64 = 0;
	// sth r31,1120(r1)
	PPC_STORE_U16(ctx.r1.u32 + 1120, ctx.r31.u16);
	// addi r3,r1,1122
	ctx.r3.s64 = ctx.r1.s64 + 1122;
	// bl 0x82fa7cf0
	ctx.lr = 0x8252DB24;
	sub_82FA7CF0(ctx, base);
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// lis r10,-32231
	ctx.r10.s64 = -2112290816;
	// addi r31,r11,21076
	ctx.r31.s64 = ctx.r11.s64 + 21076;
	// addi r4,r10,31976
	ctx.r4.s64 = ctx.r10.s64 + 31976;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,256
	ctx.r6.s64 = 256;
	// addi r5,r1,608
	ctx.r5.s64 = ctx.r1.s64 + 608;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x8259c8e0
	ctx.lr = 0x8252DB4C;
	sub_8259C8E0(ctx, base);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// li r8,1
	ctx.r8.s64 = 1;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r4,r11,12780
	ctx.r4.s64 = ctx.r11.s64 + 12780;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1024
	ctx.r6.s64 = 1024;
	// addi r5,r1,1632
	ctx.r5.s64 = ctx.r1.s64 + 1632;
	// bl 0x8259c8e0
	ctx.lr = 0x8252DB6C;
	sub_8259C8E0(ctx, base);
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// li r8,1
	ctx.r8.s64 = 1;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r4,r11,31996
	ctx.r4.s64 = ctx.r11.s64 + 31996;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,256
	ctx.r6.s64 = 256;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// bl 0x8259c8e0
	ctx.lr = 0x8252DB8C;
	sub_8259C8E0(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// li r8,1
	ctx.r8.s64 = 1;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r4,r11,10328
	ctx.r4.s64 = ctx.r11.s64 + 10328;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,256
	ctx.r6.s64 = 256;
	// addi r5,r1,1120
	ctx.r5.s64 = ctx.r1.s64 + 1120;
	// bl 0x8259c8e0
	ctx.lr = 0x8252DBAC;
	sub_8259C8E0(ctx, base);
	// li r3,1076
	ctx.r3.s64 = 1076;
	// bl 0x82691500
	ctx.lr = 0x8252DBB4;
	sub_82691500(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8252dc00
	if (ctx.cr0.eq) goto loc_8252DC00;
	// li r7,0
	ctx.r7.s64 = 0;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// lis r8,-32173
	ctx.r8.s64 = -2108489728;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// addi r11,r11,5228
	ctx.r11.s64 = ctx.r11.s64 + 5228;
	// li r10,1
	ctx.r10.s64 = 1;
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// stw r11,1052(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1052, ctx.r11.u32);
	// addi r8,r8,-7296
	ctx.r8.s64 = ctx.r8.s64 + -7296;
	// addi r7,r1,1120
	ctx.r7.s64 = ctx.r1.s64 + 1120;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// addi r5,r1,1632
	ctx.r5.s64 = ctx.r1.s64 + 1632;
	// addi r4,r1,608
	ctx.r4.s64 = ctx.r1.s64 + 608;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253d420
	ctx.lr = 0x8252DBF8;
	sub_8253D420(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x8252dc04
	goto loc_8252DC04;
loc_8252DC00:
	// li r3,0
	ctx.r3.s64 = 0;
loc_8252DC04:
	// stw r3,416(r30)
	PPC_STORE_U32(ctx.r30.u32 + 416, ctx.r3.u32);
	// bl 0x8253daa0
	ctx.lr = 0x8252DC0C;
	sub_8253DAA0(ctx, base);
loc_8252DC0C:
	// addi r1,r1,3712
	ctx.r1.s64 = ctx.r1.s64 + 3712;
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

__attribute__((alias("__imp__sub_8252DC24"))) PPC_WEAK_FUNC(sub_8252DC24);
PPC_FUNC_IMPL(__imp__sub_8252DC24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8252DC28"))) PPC_WEAK_FUNC(sub_8252DC28);
PPC_FUNC_IMPL(__imp__sub_8252DC28) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,416(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 416);
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8252dcc4
	if (ctx.cr6.eq) goto loc_8252DCC4;
	// lwz r11,1048(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1048);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8252dcc4
	if (!ctx.cr6.eq) goto loc_8252DCC4;
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// lfs f0,-24756(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -24756);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// ble cr6,0x8252dc6c
	if (!ctx.cr6.gt) goto loc_8252DC6C;
	// fmr f31,f0
	ctx.f31.f64 = ctx.f0.f64;
loc_8252DC6C:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r4,3
	ctx.r4.s64 = 3;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// bl 0x822e4d50
	ctx.lr = 0x8252DC84;
	sub_822E4D50(ctx, base);
	// stfd f31,104(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.f31.u64);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82519160
	ctx.lr = 0x8252DC94;
	sub_82519160(ctx, base);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r4,r11,19820
	ctx.r4.s64 = ctx.r11.s64 + 19820;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// bl 0x826a7620
	ctx.lr = 0x8252DCAC;
	sub_826A7620(ctx, base);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8252dcbc
	if (ctx.cr6.eq) goto loc_8252DCBC;
	// bl 0x82241d18
	ctx.lr = 0x8252DCBC;
	sub_82241D18(ctx, base);
loc_8252DCBC:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x822e4d00
	ctx.lr = 0x8252DCC4;
	sub_822E4D00(ctx, base);
loc_8252DCC4:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
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

__attribute__((alias("__imp__sub_8252DCDC"))) PPC_WEAK_FUNC(sub_8252DCDC);
PPC_FUNC_IMPL(__imp__sub_8252DCDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8252DCE0"))) PPC_WEAK_FUNC(sub_8252DCE0);
PPC_FUNC_IMPL(__imp__sub_8252DCE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7674
	ctx.lr = 0x8252DCE8;
	__savegprlr_27(ctx, base);
	// ld r12,-4096(r1)
	ctx.r12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -4096);
	// stwu r1,-5296(r1)
	ea = -5296 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lwz r3,416(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 416);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// li r27,0
	ctx.r27.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8252dd1c
	if (ctx.cr6.eq) goto loc_8252DD1C;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8253d820
	ctx.lr = 0x8252DD18;
	sub_8253D820(ctx, base);
	// stw r27,416(r28)
	PPC_STORE_U32(ctx.r28.u32 + 416, ctx.r27.u32);
loc_8252DD1C:
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// stw r27,432(r28)
	PPC_STORE_U32(ctx.r28.u32 + 432, ctx.r27.u32);
	// beq cr6,0x8252df4c
	if (ctx.cr6.eq) goto loc_8252DF4C;
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// addi r11,r11,21120
	ctx.r11.s64 = ctx.r11.s64 + 21120;
	// lbz r10,69(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 69);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x8252df4c
	if (ctx.cr0.eq) goto loc_8252DF4C;
	// lis r10,-32231
	ctx.r10.s64 = -2112290816;
	// lwz r29,0(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// li r5,510
	ctx.r5.s64 = 510;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,130
	ctx.r3.s64 = ctx.r1.s64 + 130;
	// lhz r31,31944(r10)
	ctx.r31.u64 = PPC_LOAD_U16(ctx.r10.u32 + 31944);
	// sth r31,128(r1)
	PPC_STORE_U16(ctx.r1.u32 + 128, ctx.r31.u16);
	// bl 0x82fa7cf0
	ctx.lr = 0x8252DD5C;
	sub_82FA7CF0(ctx, base);
	// li r5,2046
	ctx.r5.s64 = 2046;
	// sth r31,1152(r1)
	PPC_STORE_U16(ctx.r1.u32 + 1152, ctx.r31.u16);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,1154
	ctx.r3.s64 = ctx.r1.s64 + 1154;
	// bl 0x82fa7cf0
	ctx.lr = 0x8252DD70;
	sub_82FA7CF0(ctx, base);
	// li r5,2046
	ctx.r5.s64 = 2046;
	// li r4,0
	ctx.r4.s64 = 0;
	// sth r31,3200(r1)
	PPC_STORE_U16(ctx.r1.u32 + 3200, ctx.r31.u16);
	// addi r3,r1,3202
	ctx.r3.s64 = ctx.r1.s64 + 3202;
	// bl 0x82fa7cf0
	ctx.lr = 0x8252DD84;
	sub_82FA7CF0(ctx, base);
	// li r5,510
	ctx.r5.s64 = 510;
	// li r4,0
	ctx.r4.s64 = 0;
	// sth r31,640(r1)
	PPC_STORE_U16(ctx.r1.u32 + 640, ctx.r31.u16);
	// addi r3,r1,642
	ctx.r3.s64 = ctx.r1.s64 + 642;
	// bl 0x82fa7cf0
	ctx.lr = 0x8252DD98;
	sub_82FA7CF0(ctx, base);
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// addi r31,r11,21076
	ctx.r31.s64 = ctx.r11.s64 + 21076;
	// addi r4,r10,12492
	ctx.r4.s64 = ctx.r10.s64 + 12492;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,256
	ctx.r6.s64 = 256;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x8259c8e0
	ctx.lr = 0x8252DDC0;
	sub_8259C8E0(ctx, base);
	// cmpwi cr6,r30,1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 1, ctx.xer);
	// beq cr6,0x8252dee8
	if (ctx.cr6.eq) goto loc_8252DEE8;
	// cmpwi cr6,r30,2
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 2, ctx.xer);
	// beq cr6,0x8252dedc
	if (ctx.cr6.eq) goto loc_8252DEDC;
	// cmpwi cr6,r30,11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 11, ctx.xer);
	// beq cr6,0x8252decc
	if (ctx.cr6.eq) goto loc_8252DECC;
	// cmpwi cr6,r30,12
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 12, ctx.xer);
	// beq cr6,0x8252dec0
	if (ctx.cr6.eq) goto loc_8252DEC0;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmpwi cr6,r30,14
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 14, ctx.xer);
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1024
	ctx.r6.s64 = 1024;
	// addi r5,r1,1152
	ctx.r5.s64 = ctx.r1.s64 + 1152;
	// beq cr6,0x8252deb4
	if (ctx.cr6.eq) goto loc_8252DEB4;
	// cmpwi cr6,r30,15
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 15, ctx.xer);
	// beq cr6,0x8252de24
	if (ctx.cr6.eq) goto loc_8252DE24;
	// cmpwi cr6,r30,16
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 16, ctx.xer);
	// beq cr6,0x8252de18
	if (ctx.cr6.eq) goto loc_8252DE18;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r4,r11,12908
	ctx.r4.s64 = ctx.r11.s64 + 12908;
	// b 0x8252df04
	goto loc_8252DF04;
loc_8252DE18:
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r4,r11,12888
	ctx.r4.s64 = ctx.r11.s64 + 12888;
	// b 0x8252df04
	goto loc_8252DF04;
loc_8252DE24:
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r4,r11,12864
	ctx.r4.s64 = ctx.r11.s64 + 12864;
loc_8252DE2C:
	// bl 0x8259c8e0
	ctx.lr = 0x8252DE30;
	sub_8259C8E0(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r6,r1,1152
	ctx.r6.s64 = ctx.r1.s64 + 1152;
	// addi r5,r11,-27324
	ctx.r5.s64 = ctx.r11.s64 + -27324;
	// li r4,1024
	ctx.r4.s64 = 1024;
	// addi r3,r1,3200
	ctx.r3.s64 = ctx.r1.s64 + 3200;
	// bl 0x82563c28
	ctx.lr = 0x8252DE48;
	sub_82563C28(ctx, base);
loc_8252DE48:
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r4,r11,12520
	ctx.r4.s64 = ctx.r11.s64 + 12520;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,256
	ctx.r6.s64 = 256;
	// addi r5,r1,640
	ctx.r5.s64 = ctx.r1.s64 + 640;
	// bl 0x8259c8e0
	ctx.lr = 0x8252DE68;
	sub_8259C8E0(ctx, base);
	// li r3,1076
	ctx.r3.s64 = 1076;
	// bl 0x82691500
	ctx.lr = 0x8252DE70;
	sub_82691500(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8252df44
	if (ctx.cr0.eq) goto loc_8252DF44;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// lis r8,-32173
	ctx.r8.s64 = -2108489728;
	// addi r11,r11,5228
	ctx.r11.s64 = ctx.r11.s64 + 5228;
	// li r10,1
	ctx.r10.s64 = 1;
	// mr r9,r28
	ctx.r9.u64 = ctx.r28.u64;
	// stw r11,1052(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1052, ctx.r11.u32);
	// addi r8,r8,-7400
	ctx.r8.s64 = ctx.r8.s64 + -7400;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r1,640
	ctx.r6.s64 = ctx.r1.s64 + 640;
	// addi r5,r1,3200
	ctx.r5.s64 = ctx.r1.s64 + 3200;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253d420
	ctx.lr = 0x8252DEB0;
	sub_8253D420(ctx, base);
	// b 0x8252df48
	goto loc_8252DF48;
loc_8252DEB4:
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r4,r11,12840
	ctx.r4.s64 = ctx.r11.s64 + 12840;
	// b 0x8252de2c
	goto loc_8252DE2C;
loc_8252DEC0:
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r4,r11,12824
	ctx.r4.s64 = ctx.r11.s64 + 12824;
	// b 0x8252def0
	goto loc_8252DEF0;
loc_8252DECC:
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// stw r27,428(r28)
	PPC_STORE_U32(ctx.r28.u32 + 428, ctx.r27.u32);
	// addi r4,r11,12808
	ctx.r4.s64 = ctx.r11.s64 + 12808;
	// b 0x8252def0
	goto loc_8252DEF0;
loc_8252DEDC:
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r4,r11,12908
	ctx.r4.s64 = ctx.r11.s64 + 12908;
	// b 0x8252def0
	goto loc_8252DEF0;
loc_8252DEE8:
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r4,r11,12932
	ctx.r4.s64 = ctx.r11.s64 + 12932;
loc_8252DEF0:
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r5,r1,1152
	ctx.r5.s64 = ctx.r1.s64 + 1152;
	// li r6,1024
	ctx.r6.s64 = 1024;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r8,1
	ctx.r8.s64 = 1;
loc_8252DF04:
	// bl 0x8259c8e0
	ctx.lr = 0x8252DF08;
	sub_8259C8E0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82920520
	ctx.lr = 0x8252DF10;
	sub_82920520(ctx, base);
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x8252df24
	if (ctx.cr6.lt) goto loc_8252DF24;
	// lwz r6,0(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x8252df28
	goto loc_8252DF28;
loc_8252DF24:
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
loc_8252DF28:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r7,r1,1152
	ctx.r7.s64 = ctx.r1.s64 + 1152;
	// addi r5,r11,-27336
	ctx.r5.s64 = ctx.r11.s64 + -27336;
	// li r4,1024
	ctx.r4.s64 = 1024;
	// addi r3,r1,3200
	ctx.r3.s64 = ctx.r1.s64 + 3200;
	// bl 0x82563c28
	ctx.lr = 0x8252DF40;
	sub_82563C28(ctx, base);
	// b 0x8252de48
	goto loc_8252DE48;
loc_8252DF44:
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
loc_8252DF48:
	// stw r31,416(r28)
	PPC_STORE_U32(ctx.r28.u32 + 416, ctx.r31.u32);
loc_8252DF4C:
	// addi r1,r1,5296
	ctx.r1.s64 = ctx.r1.s64 + 5296;
	// b 0x82fa76c4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8252DF54"))) PPC_WEAK_FUNC(sub_8252DF54);
PPC_FUNC_IMPL(__imp__sub_8252DF54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8252DF58"))) PPC_WEAK_FUNC(sub_8252DF58);
PPC_FUNC_IMPL(__imp__sub_8252DF58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7674
	ctx.lr = 0x8252DF60;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r27,0
	ctx.r27.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r27,440(r3)
	PPC_STORE_U32(ctx.r3.u32 + 440, ctx.r27.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x825191a8
	ctx.lr = 0x8252DF78;
	sub_825191A8(ctx, base);
	// lwz r3,364(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 364);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8252df8c
	if (ctx.cr6.eq) goto loc_8252DF8C;
	// bl 0x82524840
	ctx.lr = 0x8252DF88;
	sub_82524840(ctx, base);
	// stw r27,364(r30)
	PPC_STORE_U32(ctx.r30.u32 + 364, ctx.r27.u32);
loc_8252DF8C:
	// lwz r11,168(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 168);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8252dfd8
	if (ctx.cr6.eq) goto loc_8252DFD8;
	// lwz r31,12(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r29,16(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplw cr6,r31,r29
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x8252dfd8
	if (ctx.cr6.eq) goto loc_8252DFD8;
	// addi r28,r11,28
	ctx.r28.s64 = ctx.r11.s64 + 28;
loc_8252DFAC:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r10,3
	ctx.r10.s64 = 3;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x82385da0
	ctx.lr = 0x8252DFCC;
	sub_82385DA0(ctx, base);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmplw cr6,r31,r29
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, ctx.xer);
	// bne cr6,0x8252dfac
	if (!ctx.cr6.eq) goto loc_8252DFAC;
loc_8252DFD8:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x82519160
	ctx.lr = 0x8252DFE4;
	sub_82519160(ctx, base);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r11,12944
	ctx.r4.s64 = ctx.r11.s64 + 12944;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x826a7620
	ctx.lr = 0x8252DFFC;
	sub_826A7620(ctx, base);
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8252e00c
	if (ctx.cr6.eq) goto loc_8252E00C;
	// bl 0x82241d18
	ctx.lr = 0x8252E00C;
	sub_82241D18(ctx, base);
loc_8252E00C:
	// stw r27,444(r30)
	PPC_STORE_U32(ctx.r30.u32 + 444, ctx.r27.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82fa76c4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8252E018"))) PPC_WEAK_FUNC(sub_8252E018);
PPC_FUNC_IMPL(__imp__sub_8252E018) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x8252E020;
	__savegprlr_29(ctx, base);
	// ld r12,-4096(r1)
	ctx.r12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -4096);
	// stwu r1,-4768(r1)
	ea = -4768 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r30,r11,21120
	ctx.r30.s64 = ctx.r11.s64 + 21120;
	// lbz r11,69(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 69);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8252e12c
	if (ctx.cr0.eq) goto loc_8252E12C;
	// lwz r11,416(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 416);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8252e12c
	if (ctx.cr6.eq) goto loc_8252E12C;
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// li r5,510
	ctx.r5.s64 = 510;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,130
	ctx.r3.s64 = ctx.r1.s64 + 130;
	// lhz r31,31944(r11)
	ctx.r31.u64 = PPC_LOAD_U16(ctx.r11.u32 + 31944);
	// sth r31,128(r1)
	PPC_STORE_U16(ctx.r1.u32 + 128, ctx.r31.u16);
	// bl 0x82fa7cf0
	ctx.lr = 0x8252E068;
	sub_82FA7CF0(ctx, base);
	// li r5,2046
	ctx.r5.s64 = 2046;
	// sth r31,640(r1)
	PPC_STORE_U16(ctx.r1.u32 + 640, ctx.r31.u16);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,642
	ctx.r3.s64 = ctx.r1.s64 + 642;
	// bl 0x82fa7cf0
	ctx.lr = 0x8252E07C;
	sub_82FA7CF0(ctx, base);
	// li r5,2046
	ctx.r5.s64 = 2046;
	// li r4,0
	ctx.r4.s64 = 0;
	// sth r31,2688(r1)
	PPC_STORE_U16(ctx.r1.u32 + 2688, ctx.r31.u16);
	// addi r3,r1,2690
	ctx.r3.s64 = ctx.r1.s64 + 2690;
	// bl 0x82fa7cf0
	ctx.lr = 0x8252E090;
	sub_82FA7CF0(ctx, base);
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// lwz r31,0(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// addi r30,r11,21076
	ctx.r30.s64 = ctx.r11.s64 + 21076;
	// addi r4,r10,12492
	ctx.r4.s64 = ctx.r10.s64 + 12492;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,256
	ctx.r6.s64 = 256;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// bl 0x8259c8e0
	ctx.lr = 0x8252E0BC;
	sub_8259C8E0(ctx, base);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// li r8,1
	ctx.r8.s64 = 1;
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r4,r11,12964
	ctx.r4.s64 = ctx.r11.s64 + 12964;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1024
	ctx.r6.s64 = 1024;
	// addi r5,r1,640
	ctx.r5.s64 = ctx.r1.s64 + 640;
	// bl 0x8259c8e0
	ctx.lr = 0x8252E0DC;
	sub_8259C8E0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82920520
	ctx.lr = 0x8252E0E4;
	sub_82920520(ctx, base);
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x8252e0f8
	if (ctx.cr6.lt) goto loc_8252E0F8;
	// lwz r6,0(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x8252e0fc
	goto loc_8252E0FC;
loc_8252E0F8:
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
loc_8252E0FC:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r7,r1,640
	ctx.r7.s64 = ctx.r1.s64 + 640;
	// addi r5,r11,-27336
	ctx.r5.s64 = ctx.r11.s64 + -27336;
	// li r4,1024
	ctx.r4.s64 = 1024;
	// addi r3,r1,2688
	ctx.r3.s64 = ctx.r1.s64 + 2688;
	// bl 0x82563c28
	ctx.lr = 0x8252E114;
	sub_82563C28(ctx, base);
	// addi r5,r1,2688
	ctx.r5.s64 = ctx.r1.s64 + 2688;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// lwz r3,416(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 416);
	// bl 0x8253d9f0
	ctx.lr = 0x8252E124;
	sub_8253D9F0(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,448(r29)
	PPC_STORE_U32(ctx.r29.u32 + 448, ctx.r11.u32);
loc_8252E12C:
	// addi r1,r1,4768
	ctx.r1.s64 = ctx.r1.s64 + 4768;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8252E134"))) PPC_WEAK_FUNC(sub_8252E134);
PPC_FUNC_IMPL(__imp__sub_8252E134) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8252E138"))) PPC_WEAK_FUNC(sub_8252E138);
PPC_FUNC_IMPL(__imp__sub_8252E138) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x8252E140;
	__savegprlr_28(ctx, base);
	// ld r12,-4096(r1)
	ctx.r12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -4096);
	// stwu r1,-5296(r1)
	ea = -5296 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// li r5,510
	ctx.r5.s64 = 510;
	// li r4,0
	ctx.r4.s64 = 0;
	// lhz r31,31944(r11)
	ctx.r31.u64 = PPC_LOAD_U16(ctx.r11.u32 + 31944);
	// addi r3,r1,130
	ctx.r3.s64 = ctx.r1.s64 + 130;
	// sth r31,128(r1)
	PPC_STORE_U16(ctx.r1.u32 + 128, ctx.r31.u16);
	// bl 0x82fa7cf0
	ctx.lr = 0x8252E16C;
	sub_82FA7CF0(ctx, base);
	// li r5,2046
	ctx.r5.s64 = 2046;
	// sth r31,1152(r1)
	PPC_STORE_U16(ctx.r1.u32 + 1152, ctx.r31.u16);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,1154
	ctx.r3.s64 = ctx.r1.s64 + 1154;
	// bl 0x82fa7cf0
	ctx.lr = 0x8252E180;
	sub_82FA7CF0(ctx, base);
	// li r5,2046
	ctx.r5.s64 = 2046;
	// li r4,0
	ctx.r4.s64 = 0;
	// sth r31,3200(r1)
	PPC_STORE_U16(ctx.r1.u32 + 3200, ctx.r31.u16);
	// addi r3,r1,3202
	ctx.r3.s64 = ctx.r1.s64 + 3202;
	// bl 0x82fa7cf0
	ctx.lr = 0x8252E194;
	sub_82FA7CF0(ctx, base);
	// li r5,510
	ctx.r5.s64 = 510;
	// li r4,0
	ctx.r4.s64 = 0;
	// sth r31,640(r1)
	PPC_STORE_U16(ctx.r1.u32 + 640, ctx.r31.u16);
	// addi r3,r1,642
	ctx.r3.s64 = ctx.r1.s64 + 642;
	// bl 0x82fa7cf0
	ctx.lr = 0x8252E1A8;
	sub_82FA7CF0(ctx, base);
	// cmplwi cr6,r30,1
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 1, ctx.xer);
	// blt cr6,0x8252e1d8
	if (ctx.cr6.lt) goto loc_8252E1D8;
	// bne cr6,0x8252e30c
	if (!ctx.cr6.eq) goto loc_8252E30C;
	// lwz r3,416(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 416);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8252e30c
	if (ctx.cr6.eq) goto loc_8252E30C;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8253d820
	ctx.lr = 0x8252E1CC;
	sub_8253D820(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,416(r29)
	PPC_STORE_U32(ctx.r29.u32 + 416, ctx.r11.u32);
	// b 0x8252e30c
	goto loc_8252E30C;
loc_8252E1D8:
	// lwz r3,416(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 416);
	// li r28,1
	ctx.r28.s64 = 1;
	// stw r28,432(r29)
	PPC_STORE_U32(ctx.r29.u32 + 432, ctx.r28.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8252e200
	if (ctx.cr6.eq) goto loc_8252E200;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8253d820
	ctx.lr = 0x8252E1F8;
	sub_8253D820(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,416(r29)
	PPC_STORE_U32(ctx.r29.u32 + 416, ctx.r11.u32);
loc_8252E200:
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// addi r10,r11,21120
	ctx.r10.s64 = ctx.r11.s64 + 21120;
	// lbz r11,69(r10)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 69);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8252e30c
	if (ctx.cr0.eq) goto loc_8252E30C;
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// lwz r30,0(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// addi r31,r11,21076
	ctx.r31.s64 = ctx.r11.s64 + 21076;
	// addi r4,r10,12492
	ctx.r4.s64 = ctx.r10.s64 + 12492;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,256
	ctx.r6.s64 = 256;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x8259c8e0
	ctx.lr = 0x8252E240;
	sub_8259C8E0(ctx, base);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// li r8,1
	ctx.r8.s64 = 1;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r4,r11,12976
	ctx.r4.s64 = ctx.r11.s64 + 12976;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1024
	ctx.r6.s64 = 1024;
	// addi r5,r1,1152
	ctx.r5.s64 = ctx.r1.s64 + 1152;
	// bl 0x8259c8e0
	ctx.lr = 0x8252E260;
	sub_8259C8E0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82920520
	ctx.lr = 0x8252E268;
	sub_82920520(ctx, base);
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x8252e27c
	if (ctx.cr6.lt) goto loc_8252E27C;
	// lwz r6,0(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// b 0x8252e280
	goto loc_8252E280;
loc_8252E27C:
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
loc_8252E280:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r7,r1,1152
	ctx.r7.s64 = ctx.r1.s64 + 1152;
	// addi r5,r11,-27336
	ctx.r5.s64 = ctx.r11.s64 + -27336;
	// li r4,1024
	ctx.r4.s64 = 1024;
	// addi r3,r1,3200
	ctx.r3.s64 = ctx.r1.s64 + 3200;
	// bl 0x82563c28
	ctx.lr = 0x8252E298;
	sub_82563C28(ctx, base);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// li r8,1
	ctx.r8.s64 = 1;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r4,r11,12992
	ctx.r4.s64 = ctx.r11.s64 + 12992;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,256
	ctx.r6.s64 = 256;
	// addi r5,r1,640
	ctx.r5.s64 = ctx.r1.s64 + 640;
	// bl 0x8259c8e0
	ctx.lr = 0x8252E2B8;
	sub_8259C8E0(ctx, base);
	// li r3,1076
	ctx.r3.s64 = 1076;
	// bl 0x82691500
	ctx.lr = 0x8252E2C0;
	sub_82691500(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8252e304
	if (ctx.cr0.eq) goto loc_8252E304;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// lis r8,-32173
	ctx.r8.s64 = -2108489728;
	// addi r11,r11,5228
	ctx.r11.s64 = ctx.r11.s64 + 5228;
	// li r10,1
	ctx.r10.s64 = 1;
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
	// stw r11,1052(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1052, ctx.r11.u32);
	// addi r8,r8,-7320
	ctx.r8.s64 = ctx.r8.s64 + -7320;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r1,640
	ctx.r6.s64 = ctx.r1.s64 + 640;
	// addi r5,r1,3200
	ctx.r5.s64 = ctx.r1.s64 + 3200;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253d420
	ctx.lr = 0x8252E300;
	sub_8253D420(ctx, base);
	// b 0x8252e308
	goto loc_8252E308;
loc_8252E304:
	// li r31,0
	ctx.r31.s64 = 0;
loc_8252E308:
	// stw r31,416(r29)
	PPC_STORE_U32(ctx.r29.u32 + 416, ctx.r31.u32);
loc_8252E30C:
	// addi r1,r1,5296
	ctx.r1.s64 = ctx.r1.s64 + 5296;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8252E314"))) PPC_WEAK_FUNC(sub_8252E314);
PPC_FUNC_IMPL(__imp__sub_8252E314) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8252E318"))) PPC_WEAK_FUNC(sub_8252E318);
PPC_FUNC_IMPL(__imp__sub_8252E318) {
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
	// cmplwi cr6,r3,2
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 2, ctx.xer);
	// bge cr6,0x8252e354
	if (!ctx.cr6.lt) goto loc_8252E354;
	// lwz r3,416(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 416);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8252e354
	if (ctx.cr6.eq) goto loc_8252E354;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8253d820
	ctx.lr = 0x8252E34C;
	sub_8253D820(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,416(r31)
	PPC_STORE_U32(ctx.r31.u32 + 416, ctx.r11.u32);
loc_8252E354:
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

__attribute__((alias("__imp__sub_8252E368"))) PPC_WEAK_FUNC(sub_8252E368);
PPC_FUNC_IMPL(__imp__sub_8252E368) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,2
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 2, ctx.xer);
	// bgelr cr6
	if (!ctx.cr6.lt) return;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,432(r4)
	PPC_STORE_U32(ctx.r4.u32 + 432, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8252E37C"))) PPC_WEAK_FUNC(sub_8252E37C);
PPC_FUNC_IMPL(__imp__sub_8252E37C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8252E380"))) PPC_WEAK_FUNC(sub_8252E380);
PPC_FUNC_IMPL(__imp__sub_8252E380) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x8252E388;
	__savegprlr_29(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// blt cr6,0x8252e520
	if (ctx.cr6.lt) goto loc_8252E520;
	// bne cr6,0x8252e540
	if (!ctx.cr6.eq) goto loc_8252E540;
	// lwz r3,416(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 416);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8252e3bc
	if (ctx.cr6.eq) goto loc_8252E3BC;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8253d820
	ctx.lr = 0x8252E3B8;
	sub_8253D820(ctx, base);
	// stw r30,416(r31)
	PPC_STORE_U32(ctx.r31.u32 + 416, ctx.r30.u32);
loc_8252E3BC:
	// lwz r11,436(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 436);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8252e3e0
	if (!ctx.cr6.eq) goto loc_8252E3E0;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82519230
	ctx.lr = 0x8252E3D8;
	sub_82519230(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,436(r31)
	PPC_STORE_U32(ctx.r31.u32 + 436, ctx.r11.u32);
loc_8252E3E0:
	// lis r29,-31955
	ctx.r29.s64 = -2094202880;
	// lwz r10,408(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 408);
	// lwz r11,31080(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 31080);
	// stw r30,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r30.u32);
	// lwz r10,412(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 412);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r30,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r30.u32);
	// bne cr6,0x8252e408
	if (!ctx.cr6.eq) goto loc_8252E408;
	// bl 0x8254abe0
	ctx.lr = 0x8252E404;
	sub_8254ABE0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_8252E408:
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8254c1b0
	ctx.lr = 0x8252E418;
	sub_8254C1B0(ctx, base);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8252e44c
	if (ctx.cr6.eq) goto loc_8252E44C;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x824261e8
	ctx.lr = 0x8252E430;
	sub_824261E8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x8225c020
	ctx.lr = 0x8252E43C;
	sub_8225C020(ctx, base);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8252e44c
	if (ctx.cr6.eq) goto loc_8252E44C;
	// bl 0x82241d18
	ctx.lr = 0x8252E44C;
	sub_82241D18(ctx, base);
loc_8252E44C:
	// lwz r11,31080(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 31080);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8252e460
	if (ctx.cr6.eq) goto loc_8252E460;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// b 0x8252e468
	goto loc_8252E468;
loc_8252E460:
	// bl 0x8254abe0
	ctx.lr = 0x8252E464;
	sub_8254ABE0(ctx, base);
	// lwz r11,31080(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 31080);
loc_8252E468:
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
loc_8252E474:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8252e484
	if (!ctx.cr6.eq) goto loc_8252E484;
	// bl 0x8254abe0
	ctx.lr = 0x8252E480;
	sub_8254ABE0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_8252E484:
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8252e50c
	if (ctx.cr6.eq) goto loc_8252E50C;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82348d20
	ctx.lr = 0x8252E4A0;
	sub_82348D20(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addic r9,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// subfe r31,r9,r11
	temp.u8 = (~ctx.r9.u32 + ctx.r11.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r31.u64 = ~ctx.r9.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// beq cr6,0x8252e4c8
	if (ctx.cr6.eq) goto loc_8252E4C8;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// bl 0x82241d18
	ctx.lr = 0x8252E4C8;
	sub_82241D18(ctx, base);
loc_8252E4C8:
	// clrlwi. r11,r31,24
	ctx.r11.u64 = ctx.r31.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8252e4fc
	if (ctx.cr0.eq) goto loc_8252E4FC;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82348d20
	ctx.lr = 0x8252E4DC;
	sub_82348D20(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// bl 0x828e4c10
	ctx.lr = 0x8252E4EC;
	sub_828E4C10(ctx, base);
	// lwz r3,108(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8252e4fc
	if (ctx.cr6.eq) goto loc_8252E4FC;
	// bl 0x82241d18
	ctx.lr = 0x8252E4FC;
	sub_82241D18(ctx, base);
loc_8252E4FC:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8241a2b0
	ctx.lr = 0x8252E504;
	sub_8241A2B0(ctx, base);
	// lwz r11,31080(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 31080);
	// b 0x8252e474
	goto loc_8252E474;
loc_8252E50C:
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8252e540
	if (ctx.cr6.eq) goto loc_8252E540;
	// bl 0x82241d18
	ctx.lr = 0x8252E51C;
	sub_82241D18(ctx, base);
	// b 0x8252e540
	goto loc_8252E540;
loc_8252E520:
	// lwz r3,416(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 416);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8252e540
	if (ctx.cr6.eq) goto loc_8252E540;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8253d820
	ctx.lr = 0x8252E538;
	sub_8253D820(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,416(r31)
	PPC_STORE_U32(ctx.r31.u32 + 416, ctx.r11.u32);
loc_8252E540:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8252E548"))) PPC_WEAK_FUNC(sub_8252E548);
PPC_FUNC_IMPL(__imp__sub_8252E548) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x8252E550;
	__savegprlr_28(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x8252e6ec
	if (!ctx.cr6.eq) goto loc_8252E6EC;
	// lwz r3,420(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 420);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8252e580
	if (ctx.cr6.eq) goto loc_8252E580;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8253d820
	ctx.lr = 0x8252E57C;
	sub_8253D820(ctx, base);
	// stw r28,420(r29)
	PPC_STORE_U32(ctx.r29.u32 + 420, ctx.r28.u32);
loc_8252E580:
	// lwz r11,452(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 452);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8252e6ec
	if (!ctx.cr6.eq) goto loc_8252E6EC;
	// lwz r11,436(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 436);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8252e5b0
	if (!ctx.cr6.eq) goto loc_8252E5B0;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82519230
	ctx.lr = 0x8252E5A8;
	sub_82519230(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,436(r29)
	PPC_STORE_U32(ctx.r29.u32 + 436, ctx.r11.u32);
loc_8252E5B0:
	// lis r30,-31955
	ctx.r30.s64 = -2094202880;
	// lwz r10,408(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 408);
	// lwz r11,31080(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 31080);
	// stw r28,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r28.u32);
	// lwz r10,412(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 412);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r28,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r28.u32);
	// bne cr6,0x8252e5d8
	if (!ctx.cr6.eq) goto loc_8252E5D8;
	// bl 0x8254abe0
	ctx.lr = 0x8252E5D4;
	sub_8254ABE0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_8252E5D8:
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8254c1b0
	ctx.lr = 0x8252E5E8;
	sub_8254C1B0(ctx, base);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8252e61c
	if (ctx.cr6.eq) goto loc_8252E61C;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x824261e8
	ctx.lr = 0x8252E600;
	sub_824261E8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x8225c020
	ctx.lr = 0x8252E60C;
	sub_8225C020(ctx, base);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8252e61c
	if (ctx.cr6.eq) goto loc_8252E61C;
	// bl 0x82241d18
	ctx.lr = 0x8252E61C;
	sub_82241D18(ctx, base);
loc_8252E61C:
	// lwz r11,31080(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 31080);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8252e630
	if (ctx.cr6.eq) goto loc_8252E630;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// b 0x8252e638
	goto loc_8252E638;
loc_8252E630:
	// bl 0x8254abe0
	ctx.lr = 0x8252E634;
	sub_8254ABE0(ctx, base);
	// lwz r11,31080(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 31080);
loc_8252E638:
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
loc_8252E644:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8252e654
	if (!ctx.cr6.eq) goto loc_8252E654;
	// bl 0x8254abe0
	ctx.lr = 0x8252E650;
	sub_8254ABE0(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_8252E654:
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8252e6dc
	if (ctx.cr6.eq) goto loc_8252E6DC;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82348d20
	ctx.lr = 0x8252E670;
	sub_82348D20(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addic r9,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// subfe r31,r9,r11
	temp.u8 = (~ctx.r9.u32 + ctx.r11.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r31.u64 = ~ctx.r9.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// beq cr6,0x8252e698
	if (ctx.cr6.eq) goto loc_8252E698;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// bl 0x82241d18
	ctx.lr = 0x8252E698;
	sub_82241D18(ctx, base);
loc_8252E698:
	// clrlwi. r11,r31,24
	ctx.r11.u64 = ctx.r31.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8252e6cc
	if (ctx.cr0.eq) goto loc_8252E6CC;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// bl 0x82348d20
	ctx.lr = 0x8252E6AC;
	sub_82348D20(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// bl 0x828e4c10
	ctx.lr = 0x8252E6BC;
	sub_828E4C10(ctx, base);
	// lwz r3,108(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8252e6cc
	if (ctx.cr6.eq) goto loc_8252E6CC;
	// bl 0x82241d18
	ctx.lr = 0x8252E6CC;
	sub_82241D18(ctx, base);
loc_8252E6CC:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8241a2b0
	ctx.lr = 0x8252E6D4;
	sub_8241A2B0(ctx, base);
	// lwz r11,31080(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 31080);
	// b 0x8252e644
	goto loc_8252E644;
loc_8252E6DC:
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8252e6ec
	if (ctx.cr6.eq) goto loc_8252E6EC;
	// bl 0x82241d18
	ctx.lr = 0x8252E6EC;
	sub_82241D18(ctx, base);
loc_8252E6EC:
	// stw r28,420(r29)
	PPC_STORE_U32(ctx.r29.u32 + 420, ctx.r28.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8252E6F8"))) PPC_WEAK_FUNC(sub_8252E6F8);
PPC_FUNC_IMPL(__imp__sub_8252E6F8) {
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
	// lwz r11,444(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 444);
	// li r30,1
	ctx.r30.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r30,440(r3)
	PPC_STORE_U32(ctx.r3.u32 + 440, ctx.r30.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8252e7a4
	if (ctx.cr6.eq) goto loc_8252E7A4;
	// lwz r11,364(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 364);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8252e774
	if (!ctx.cr6.eq) goto loc_8252E774;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// addi r11,r11,13016
	ctx.r11.s64 = ctx.r11.s64 + 13016;
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// addi r4,r3,368
	ctx.r4.s64 = ctx.r3.s64 + 368;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8226c200
	ctx.lr = 0x8252E754;
	sub_8226C200(ctx, base);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r3,0
	ctx.r3.s64 = 0;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r8,1
	ctx.r8.s64 = 1;
	// bl 0x82524730
	ctx.lr = 0x8252E770;
	sub_82524730(ctx, base);
	// stw r3,364(r31)
	PPC_STORE_U32(ctx.r31.u32 + 364, ctx.r3.u32);
loc_8252E774:
	// lwz r11,436(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 436);
	// stw r30,400(r31)
	PPC_STORE_U32(ctx.r31.u32 + 400, ctx.r30.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8252e794
	if (!ctx.cr6.eq) goto loc_8252E794;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82519230
	ctx.lr = 0x8252E794;
	sub_82519230(ctx, base);
loc_8252E794:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82519230
	ctx.lr = 0x8252E7A4;
	sub_82519230(ctx, base);
loc_8252E7A4:
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

__attribute__((alias("__imp__sub_8252E7BC"))) PPC_WEAK_FUNC(sub_8252E7BC);
PPC_FUNC_IMPL(__imp__sub_8252E7BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8252E7C0"))) PPC_WEAK_FUNC(sub_8252E7C0);
PPC_FUNC_IMPL(__imp__sub_8252E7C0) {
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
	// bne cr6,0x8252e808
	if (!ctx.cr6.eq) goto loc_8252E808;
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x82691500
	ctx.lr = 0x8252E7E4;
	sub_82691500(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne 0x8252e808
	if (!ctx.cr0.eq) goto loc_8252E808;
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
	ctx.lr = 0x8252E808;
	sub_82240040(ctx, base);
loc_8252E808:
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r11,r11,13016
	ctx.r11.s64 = ctx.r11.s64 + 13016;
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

__attribute__((alias("__imp__sub_8252E834"))) PPC_WEAK_FUNC(sub_8252E834);
PPC_FUNC_IMPL(__imp__sub_8252E834) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8252E838"))) PPC_WEAK_FUNC(sub_8252E838);
PPC_FUNC_IMPL(__imp__sub_8252E838) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// b 0x8252d1c0
	sub_8252D1C0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8252E840"))) PPC_WEAK_FUNC(sub_8252E840);
PPC_FUNC_IMPL(__imp__sub_8252E840) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31966
	ctx.r11.s64 = -2094923776;
	// addi r3,r11,-27344
	ctx.r3.s64 = ctx.r11.s64 + -27344;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8252E84C"))) PPC_WEAK_FUNC(sub_8252E84C);
PPC_FUNC_IMPL(__imp__sub_8252E84C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8252E850"))) PPC_WEAK_FUNC(sub_8252E850);
PPC_FUNC_IMPL(__imp__sub_8252E850) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// ld r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r4.u32 + 8);
	// std r11,8(r3)
	PPC_STORE_U64(ctx.r3.u32 + 8, ctx.r11.u64);
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// rlwinm. r11,r11,26,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8252e89c
	if (ctx.cr0.eq) goto loc_8252E89C;
	// lwz r3,0(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r5,8(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// bl 0x826b7560
	ctx.lr = 0x8252E89C;
	sub_826B7560(ctx, base);
loc_8252E89C:
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

__attribute__((alias("__imp__sub_8252E8B4"))) PPC_WEAK_FUNC(sub_8252E8B4);
PPC_FUNC_IMPL(__imp__sub_8252E8B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8252E8B8"))) PPC_WEAK_FUNC(sub_8252E8B8);
PPC_FUNC_IMPL(__imp__sub_8252E8B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa765c
	ctx.lr = 0x8252E8C0;
	__savegprlr_21(ctx, base);
	// stfd f31,-104(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -104, ctx.f31.u64);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// stw r4,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r4.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r11,r11,13784
	ctx.r11.s64 = ctx.r11.s64 + 13784;
	// li r25,1
	ctx.r25.s64 = 1;
	// stw r30,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r30.u32);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// addi r29,r3,20
	ctx.r29.s64 = ctx.r3.s64 + 20;
	// stw r25,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r25.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r30,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r30.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r30,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r30.u32);
	// mr r24,r5
	ctx.r24.u64 = ctx.r5.u64;
	// stw r30,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r30.u32);
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// mr r23,r8
	ctx.r23.u64 = ctx.r8.u64;
	// mr r22,r9
	ctx.r22.u64 = ctx.r9.u64;
	// bl 0x822e7a80
	ctx.lr = 0x8252E920;
	sub_822E7A80(ctx, base);
	// stw r30,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r30.u32);
	// stw r30,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r30.u32);
	// li r3,48
	ctx.r3.s64 = 48;
	// bl 0x82691500
	ctx.lr = 0x8252E930;
	sub_82691500(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8252ec44
	if (ctx.cr0.eq) goto loc_8252EC44;
	// stw r3,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r3.u32);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// stw r3,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r3.u32);
	// addi r28,r31,56
	ctx.r28.s64 = ctx.r31.s64 + 56;
	// lwz r10,40(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// addi r21,r31,32
	ctx.r21.s64 = ctx.r31.s64 + 32;
	// stw r10,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r10.u32);
	// lwz r10,40(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// lfs f0,-2340(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -2340);
	ctx.f0.f64 = double(temp.f32);
	// stw r10,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r10.u32);
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// stb r25,44(r11)
	PPC_STORE_U8(ctx.r11.u32 + 44, ctx.r25.u8);
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// stb r25,45(r11)
	PPC_STORE_U8(ctx.r11.u32 + 45, ctx.r25.u8);
	// stw r30,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r30.u32);
	// stw r30,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r30.u32);
	// stw r30,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r30.u32);
	// lwz r11,324(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 324);
	// lwz r10,340(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 340);
	// lwz r9,348(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 348);
	// lwz r8,332(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 332);
	// stw r30,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r30.u32);
	// stfs f31,72(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 72, temp.u32);
	// stfs f0,148(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 148, temp.u32);
	// stw r11,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r11.u32);
	// stw r30,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r30.u32);
	// stw r30,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r30.u32);
	// stw r10,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r10.u32);
	// stw r9,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r9.u32);
	// stw r30,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r30.u32);
	// stw r30,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r30.u32);
	// stw r30,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r30.u32);
	// stw r30,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r30.u32);
	// stw r30,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r30.u32);
	// stw r25,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r25.u32);
	// stw r8,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r8.u32);
	// stw r30,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r30.u32);
	// stw r30,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r30.u32);
	// stw r30,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r30.u32);
	// stw r30,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r30.u32);
	// stw r30,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r30.u32);
	// stw r30,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r30.u32);
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8252ea08
	if (ctx.cr6.eq) goto loc_8252EA08;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82546708
	ctx.lr = 0x8252EA04;
	sub_82546708(ctx, base);
	// stw r3,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r3.u32);
loc_8252EA08:
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82426040
	ctx.lr = 0x8252EA14;
	sub_82426040(ctx, base);
	// bl 0x826a3ae0
	ctx.lr = 0x8252EA18;
	sub_826A3AE0(ctx, base);
	// lis r10,6184
	ctx.r10.s64 = 405274624;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r8,-1
	ctx.r8.s64 = -1;
	// li r9,0
	ctx.r9.s64 = 0;
	// ori r10,r10,323
	ctx.r10.u64 = ctx.r10.u64 | 323;
	// bl 0x826a3b70
	ctx.lr = 0x8252EA40;
	sub_826A3B70(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x823f6330
	ctx.lr = 0x8252EA4C;
	sub_823F6330(ctx, base);
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8252ea5c
	if (ctx.cr6.eq) goto loc_8252EA5C;
	// bl 0x82241d18
	ctx.lr = 0x8252EA5C;
	sub_82241D18(ctx, base);
loc_8252EA5C:
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x826a41b8
	ctx.lr = 0x8252EA68;
	sub_826A41B8(ctx, base);
	// lwz r11,356(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 356);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8252ea80
	if (ctx.cr6.eq) goto loc_8252EA80;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x826a4180
	ctx.lr = 0x8252EA80;
	sub_826A4180(ctx, base);
loc_8252EA80:
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8252f1e8
	ctx.lr = 0x8252EA8C;
	sub_8252F1E8(ctx, base);
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,316(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 316);
	// lwz r4,308(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 308);
	// bl 0x8252eea8
	ctx.lr = 0x8252EAA0;
	sub_8252EEA8(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x826a41d0
	ctx.lr = 0x8252EAAC;
	sub_826A41D0(ctx, base);
	// lis r11,-32173
	ctx.r11.s64 = -2108489728;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r4,r11,-1808
	ctx.r4.s64 = ctx.r11.s64 + -1808;
	// bl 0x826a8068
	ctx.lr = 0x8252EAC0;
	sub_826A8068(ctx, base);
	// lis r11,-32172
	ctx.r11.s64 = -2108424192;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r4,r11,256
	ctx.r4.s64 = ctx.r11.s64 + 256;
	// bl 0x826a80e0
	ctx.lr = 0x8252EAD4;
	sub_826A80E0(ctx, base);
	// lis r11,-32173
	ctx.r11.s64 = -2108489728;
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r11,-1536
	ctx.r4.s64 = ctx.r11.s64 + -1536;
	// bl 0x826a8178
	ctx.lr = 0x8252EAEC;
	sub_826A8178(ctx, base);
	// lwz r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8252eb54
	if (ctx.cr6.eq) goto loc_8252EB54;
	// lwz r11,96(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8252eb54
	if (!ctx.cr6.eq) goto loc_8252EB54;
	// lwz r11,92(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8252eb50
	if (!ctx.cr6.eq) goto loc_8252EB50;
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// addi r11,r11,23144
	ctx.r11.s64 = ctx.r11.s64 + 23144;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8252eb50
	if (ctx.cr6.eq) goto loc_8252EB50;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// lis r9,-32228
	ctx.r9.s64 = -2112094208;
	// addi r7,r10,13320
	ctx.r7.s64 = ctx.r10.s64 + 13320;
	// addi r6,r9,13396
	ctx.r6.s64 = ctx.r9.s64 + 13396;
	// li r8,693
	ctx.r8.s64 = 693;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bctrl 
	ctx.lr = 0x8252EB50;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8252EB50:
	// stw r25,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r25.u32);
loc_8252EB54:
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8252ebac
	if (!ctx.cr6.eq) goto loc_8252EBAC;
	// bl 0x8254b7e0
	ctx.lr = 0x8252EB64;
	sub_8254B7E0(ctx, base);
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r30,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r30.u32);
	// addic. r11,r11,1
	ctx.xer.ca = ctx.r11.u32 > 4294967294;
	ctx.r11.s64 = ctx.r11.s64 + 1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r25,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r25.u32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// bne 0x8252eb90
	if (!ctx.cr0.eq) goto loc_8252EB90;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
loc_8252EB90:
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r29,36
	ctx.r3.s64 = ctx.r29.s64 + 36;
	// bl 0x822e9dd0
	ctx.lr = 0x8252EB9C;
	sub_822E9DD0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8254b878
	ctx.lr = 0x8252EBA4;
	sub_8254B878(ctx, base);
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// stw r11,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r11.u32);
loc_8252EBAC:
	// bl 0x82589730
	ctx.lr = 0x8252EBB0;
	sub_82589730(ctx, base);
	// lwz r11,140(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// stw r3,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r3.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8252ebd8
	if (!ctx.cr6.eq) goto loc_8252EBD8;
	// lis r11,-31955
	ctx.r11.s64 = -2094202880;
	// addi r10,r11,24448
	ctx.r10.s64 = ctx.r11.s64 + 24448;
	// lwz r11,296(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 296);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,296(r10)
	PPC_STORE_U32(ctx.r10.u32 + 296, ctx.r11.u32);
	// stw r25,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r25.u32);
loc_8252EBD8:
	// lwz r11,144(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8252ebf8
	if (!ctx.cr6.eq) goto loc_8252EBF8;
	// bl 0x826a3ae0
	ctx.lr = 0x8252EBE8;
	sub_826A3AE0(ctx, base);
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// lfs f1,6596(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 6596);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x826a3260
	ctx.lr = 0x8252EBF4;
	sub_826A3260(ctx, base);
	// stw r3,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r3.u32);
loc_8252EBF8:
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// bl 0x82589818
	ctx.lr = 0x8252EC04;
	sub_82589818(ctx, base);
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// li r10,1280
	ctx.r10.s64 = 1280;
	// li r9,720
	ctx.r9.s64 = 720;
	// addi r4,r11,28
	ctx.r4.s64 = ctx.r11.s64 + 28;
	// lwz r3,24(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// stw r30,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r30.u32);
	// stw r30,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r30.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r10,36(r11)
	PPC_STORE_U32(ctx.r11.u32 + 36, ctx.r10.u32);
	// stw r9,40(r11)
	PPC_STORE_U32(ctx.r11.u32 + 40, ctx.r9.u32);
	// beq cr6,0x8252ec34
	if (ctx.cr6.eq) goto loc_8252EC34;
	// bl 0x82c447a8
	ctx.lr = 0x8252EC34;
	sub_82C447A8(ctx, base);
loc_8252EC34:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// lfd f31,-104(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -104);
	// b 0x82fa76ac
	__restgprlr_21(ctx, base);
	return;
loc_8252EC44:
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
	ctx.lr = 0x8252EC5C;
	sub_82240040(ctx, base);
}

__attribute__((alias("__imp__sub_8252EC5C"))) PPC_WEAK_FUNC(sub_8252EC5C);
PPC_FUNC_IMPL(__imp__sub_8252EC5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8252EC60"))) PPC_WEAK_FUNC(sub_8252EC60);
PPC_FUNC_IMPL(__imp__sub_8252EC60) {
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
	// bl 0x8252ecb0
	ctx.lr = 0x8252EC80;
	sub_8252ECB0(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8252ec90
	if (ctx.cr0.eq) goto loc_8252EC90;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82691540
	ctx.lr = 0x8252EC90;
	sub_82691540(ctx, base);
loc_8252EC90:
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

__attribute__((alias("__imp__sub_8252ECAC"))) PPC_WEAK_FUNC(sub_8252ECAC);
PPC_FUNC_IMPL(__imp__sub_8252ECAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8252ECB0"))) PPC_WEAK_FUNC(sub_8252ECB0);
PPC_FUNC_IMPL(__imp__sub_8252ECB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7674
	ctx.lr = 0x8252ECB8;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,13784
	ctx.r11.s64 = ctx.r11.s64 + 13784;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x8252edf8
	ctx.lr = 0x8252ECD0;
	sub_8252EDF8(ctx, base);
	// lwz r3,100(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// li r27,0
	ctx.r27.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8252ece8
	if (ctx.cr6.eq) goto loc_8252ECE8;
	// bl 0x8254b5f8
	ctx.lr = 0x8252ECE4;
	sub_8254B5F8(ctx, base);
	// stw r27,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r27.u32);
loc_8252ECE8:
	// lwz r11,140(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8252ed0c
	if (ctx.cr6.eq) goto loc_8252ED0C;
	// lis r11,-31955
	ctx.r11.s64 = -2094202880;
	// addi r10,r11,24448
	ctx.r10.s64 = ctx.r11.s64 + 24448;
	// lwz r11,296(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 296);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,296(r10)
	PPC_STORE_U32(ctx.r10.u32 + 296, ctx.r11.u32);
	// stw r27,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r27.u32);
loc_8252ED0C:
	// lwz r30,144(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8252ed28
	if (ctx.cr6.eq) goto loc_8252ED28;
	// bl 0x826a3ae0
	ctx.lr = 0x8252ED1C;
	sub_826A3AE0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x826a2868
	ctx.lr = 0x8252ED24;
	sub_826A2868(ctx, base);
	// stw r27,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r27.u32);
loc_8252ED28:
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// addi r30,r31,36
	ctx.r30.s64 = ctx.r31.s64 + 36;
	// lwz r29,4(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r28,r29
	ctx.r28.u64 = ctx.r29.u64;
	// lbz r11,45(r29)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + 45);
	// b 0x8252ed70
	goto loc_8252ED70;
loc_8252ED40:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r4,8(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// bl 0x825306e8
	ctx.lr = 0x8252ED4C;
	sub_825306E8(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r29,12
	ctx.r3.s64 = ctx.r29.s64 + 12;
	// lwz r28,0(r28)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// bl 0x822402c8
	ctx.lr = 0x8252ED60;
	sub_822402C8(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82691540
	ctx.lr = 0x8252ED68;
	sub_82691540(ctx, base);
	// lbz r11,45(r28)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r28.u32 + 45);
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
loc_8252ED70:
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8252ed40
	if (ctx.cr0.eq) goto loc_8252ED40;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r11,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r11.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r11,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r11.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r11,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r11.u32);
	// stw r27,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r27.u32);
	// lwz r3,52(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8252eda4
	if (ctx.cr6.eq) goto loc_8252EDA4;
	// bl 0x825469e0
	ctx.lr = 0x8252EDA4;
	sub_825469E0(ctx, base);
loc_8252EDA4:
	// lwz r3,56(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8252edb4
	if (ctx.cr6.eq) goto loc_8252EDB4;
	// bl 0x82691540
	ctx.lr = 0x8252EDB4;
	sub_82691540(ctx, base);
loc_8252EDB4:
	// stw r27,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r27.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r27,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r27.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r27,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r27.u32);
	// lwz r6,4(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r5,0(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// bl 0x82499918
	ctx.lr = 0x8252EDD4;
	sub_82499918(ctx, base);
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x82691540
	ctx.lr = 0x8252EDDC;
	sub_82691540(ctx, base);
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8252edec
	if (ctx.cr6.eq) goto loc_8252EDEC;
	// bl 0x82241d18
	ctx.lr = 0x8252EDEC;
	sub_82241D18(ctx, base);
loc_8252EDEC:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82fa76c4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8252EDF4"))) PPC_WEAK_FUNC(sub_8252EDF4);
PPC_FUNC_IMPL(__imp__sub_8252EDF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8252EDF8"))) PPC_WEAK_FUNC(sub_8252EDF8);
PPC_FUNC_IMPL(__imp__sub_8252EDF8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x8252EE00;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r30,r3,20
	ctx.r30.s64 = ctx.r3.s64 + 20;
	// lwz r3,20(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8252ee3c
	if (ctx.cr6.eq) goto loc_8252EE3C;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x826a70d8
	ctx.lr = 0x8252EE24;
	sub_826A70D8(ctx, base);
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r29,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r29.u32);
	// stw r29,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r29.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8252ee3c
	if (ctx.cr6.eq) goto loc_8252EE3C;
	// bl 0x82241d18
	ctx.lr = 0x8252EE3C;
	sub_82241D18(ctx, base);
loc_8252EE3C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8252f158
	ctx.lr = 0x8252EE44;
	sub_8252F158(ctx, base);
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8252ee58
	if (ctx.cr6.eq) goto loc_8252EE58;
	// bl 0x82524840
	ctx.lr = 0x8252EE54;
	sub_82524840(ctx, base);
	// stw r29,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r29.u32);
loc_8252EE58:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8252f4d0
	ctx.lr = 0x8252EE60;
	sub_8252F4D0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8252f820
	ctx.lr = 0x8252EE6C;
	sub_8252F820(ctx, base);
	// lwz r3,100(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8252ee80
	if (ctx.cr6.eq) goto loc_8252EE80;
	// bl 0x8254b5f8
	ctx.lr = 0x8252EE7C;
	sub_8254B5F8(ctx, base);
	// stw r29,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r29.u32);
loc_8252EE80:
	// lwz r11,104(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8252eea0
	if (ctx.cr6.eq) goto loc_8252EEA0;
	// stw r29,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r29.u32);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,13136
	ctx.r4.s64 = ctx.r11.s64 + 13136;
	// bl 0x8252f560
	ctx.lr = 0x8252EEA0;
	sub_8252F560(ctx, base);
loc_8252EEA0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8252EEA8"))) PPC_WEAK_FUNC(sub_8252EEA8);
PPC_FUNC_IMPL(__imp__sub_8252EEA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7664
	ctx.lr = 0x8252EEB0;
	__savegprlr_23(ctx, base);
	// stwu r1,-1808(r1)
	ea = -1808 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// mr r23,r5
	ctx.r23.u64 = ctx.r5.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// bl 0x82546708
	ctx.lr = 0x8252EED0;
	sub_82546708(ctx, base);
	// mr. r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// li r31,0
	ctx.r31.s64 = 0;
	// beq 0x8252f008
	if (ctx.cr0.eq) goto loc_8252F008;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82546b30
	ctx.lr = 0x8252EEE4;
	sub_82546B30(ctx, base);
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// rlwinm r28,r3,27,5,31
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 27) & 0x7FFFFFF;
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r31.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// rlwinm r11,r28,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 5) & 0xFFFFFFE0;
	// rlwinm r4,r28,1,0,30
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
	// add r27,r11,r26
	ctx.r27.u64 = ctx.r11.u64 + ctx.r26.u64;
	// bl 0x82530388
	ctx.lr = 0x8252EF0C;
	sub_82530388(ctx, base);
	// stw r31,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r31.u32);
	// stw r31,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r31.u32);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// stw r31,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r31.u32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82530570
	ctx.lr = 0x8252EF24;
	sub_82530570(ctx, base);
	// cmplw cr6,r26,r27
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r27.u32, ctx.xer);
	// lwz r25,128(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// bge cr6,0x8252efa8
	if (!ctx.cr6.lt) goto loc_8252EFA8;
	// mr r28,r25
	ctx.r28.u64 = ctx.r25.u64;
loc_8252EF34:
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r3,76(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 76);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,256
	ctx.r6.s64 = 256;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8259c8e0
	ctx.lr = 0x8252EF50;
	sub_8259C8E0(ctx, base);
	// li r11,4
	ctx.r11.s64 = 4;
	// stw r30,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r30.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// bl 0x825304a0
	ctx.lr = 0x8252EF6C;
	sub_825304A0(ctx, base);
	// li r11,5
	ctx.r11.s64 = 5;
	// stw r28,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r28.u32);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// bl 0x825304a0
	ctx.lr = 0x8252EF88;
	sub_825304A0(ctx, base);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x822e4d00
	ctx.lr = 0x8252EF90;
	sub_822E4D00(ctx, base);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x822e4d00
	ctx.lr = 0x8252EF98;
	sub_822E4D00(ctx, base);
	// addi r30,r30,32
	ctx.r30.s64 = ctx.r30.s64 + 32;
	// addi r28,r28,512
	ctx.r28.s64 = ctx.r28.s64 + 512;
	// cmplw cr6,r30,r27
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r27.u32, ctx.xer);
	// blt cr6,0x8252ef34
	if (ctx.cr6.lt) goto loc_8252EF34;
loc_8252EFA8:
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r4,r11,13168
	ctx.r4.s64 = ctx.r11.s64 + 13168;
	// lwz r3,20(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// subf r11,r6,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r6.s64;
	// li r5,0
	ctx.r5.s64 = 0;
	// srawi r7,r11,4
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xF) != 0);
	ctx.r7.s64 = ctx.r11.s32 >> 4;
	// bl 0x826a7930
	ctx.lr = 0x8252EFD0;
	sub_826A7930(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8252eff0
	if (ctx.cr0.eq) goto loc_8252EFF0;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// lwz r3,20(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r11,13204
	ctx.r4.s64 = ctx.r11.s64 + 13204;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x826a7620
	ctx.lr = 0x8252EFF0;
	sub_826A7620(ctx, base);
loc_8252EFF0:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x8252f000
	if (ctx.cr6.eq) goto loc_8252F000;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82691540
	ctx.lr = 0x8252F000;
	sub_82691540(ctx, base);
loc_8252F000:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82530330
	ctx.lr = 0x8252F008;
	sub_82530330(ctx, base);
loc_8252F008:
	// li r10,3
	ctx.r10.s64 = 3;
	// addi r11,r1,132
	ctx.r11.s64 = ctx.r1.s64 + 132;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8252F014:
	// stw r31,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r31.u32);
	// stwu r31,16(r11)
	ea = 16 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r31.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x8252f014
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8252F014;
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// addi r31,r11,21076
	ctx.r31.s64 = ctx.r11.s64 + 21076;
	// addi r4,r10,13068
	ctx.r4.s64 = ctx.r10.s64 + 13068;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,256
	ctx.r6.s64 = 256;
	// addi r5,r1,704
	ctx.r5.s64 = ctx.r1.s64 + 704;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x8259c8e0
	ctx.lr = 0x8252F048;
	sub_8259C8E0(ctx, base);
	// li r4,5
	ctx.r4.s64 = 5;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x822e4d50
	ctx.lr = 0x8252F054;
	sub_822E4D50(ctx, base);
	// addi r11,r1,704
	ctx.r11.s64 = ctx.r1.s64 + 704;
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r3,76(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 76);
	// stw r11,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,256
	ctx.r6.s64 = 256;
	// addi r5,r1,192
	ctx.r5.s64 = ctx.r1.s64 + 192;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// bl 0x8259c8e0
	ctx.lr = 0x8252F078;
	sub_8259C8E0(ctx, base);
	// li r4,5
	ctx.r4.s64 = 5;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x822e4d50
	ctx.lr = 0x8252F084;
	sub_822E4D50(ctx, base);
	// addi r11,r1,192
	ctx.r11.s64 = ctx.r1.s64 + 192;
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r3,76(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 76);
	// stw r11,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,256
	ctx.r6.s64 = 256;
	// addi r5,r1,1216
	ctx.r5.s64 = ctx.r1.s64 + 1216;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// bl 0x8259c8e0
	ctx.lr = 0x8252F0A8;
	sub_8259C8E0(ctx, base);
	// li r4,5
	ctx.r4.s64 = 5;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x822e4d50
	ctx.lr = 0x8252F0B4;
	sub_822E4D50(ctx, base);
	// addi r11,r1,1216
	ctx.r11.s64 = ctx.r1.s64 + 1216;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// lwz r3,20(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// stw r11,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r11.u32);
	// li r6,3
	ctx.r6.s64 = 3;
	// addi r4,r10,13236
	ctx.r4.s64 = ctx.r10.s64 + 13236;
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// bl 0x826a7620
	ctx.lr = 0x8252F0D4;
	sub_826A7620(ctx, base);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// li r8,1
	ctx.r8.s64 = 1;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r4,r11,13040
	ctx.r4.s64 = ctx.r11.s64 + 13040;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,256
	ctx.r6.s64 = 256;
	// addi r5,r1,192
	ctx.r5.s64 = ctx.r1.s64 + 192;
	// bl 0x8259c8e0
	ctx.lr = 0x8252F0F4;
	sub_8259C8E0(ctx, base);
	// li r4,5
	ctx.r4.s64 = 5;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x822e4d50
	ctx.lr = 0x8252F100;
	sub_822E4D50(ctx, base);
	// addi r11,r1,192
	ctx.r11.s64 = ctx.r1.s64 + 192;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// lwz r3,20(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// stw r11,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r11.u32);
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r4,r10,13276
	ctx.r4.s64 = ctx.r10.s64 + 13276;
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// bl 0x826a7620
	ctx.lr = 0x8252F120;
	sub_826A7620(ctx, base);
	// addi r31,r1,192
	ctx.r31.s64 = ctx.r1.s64 + 192;
	// li r30,2
	ctx.r30.s64 = 2;
loc_8252F128:
	// addi r31,r31,-16
	ctx.r31.s64 = ctx.r31.s64 + -16;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822e4d00
	ctx.lr = 0x8252F134;
	sub_822E4D00(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge 0x8252f128
	if (!ctx.cr0.lt) goto loc_8252F128;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x8252f14c
	if (ctx.cr6.eq) goto loc_8252F14C;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x825469e0
	ctx.lr = 0x8252F14C;
	sub_825469E0(ctx, base);
loc_8252F14C:
	// addi r1,r1,1808
	ctx.r1.s64 = ctx.r1.s64 + 1808;
	// b 0x82fa76b4
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8252F154"))) PPC_WEAK_FUNC(sub_8252F154);
PPC_FUNC_IMPL(__imp__sub_8252F154) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8252F158"))) PPC_WEAK_FUNC(sub_8252F158);
PPC_FUNC_IMPL(__imp__sub_8252F158) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x8252F160;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8252f1dc
	if (ctx.cr6.eq) goto loc_8252F1DC;
	// lwz r11,140(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 140);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8252f19c
	if (ctx.cr6.eq) goto loc_8252F19C;
	// lis r11,-31955
	ctx.r11.s64 = -2094202880;
	// addi r10,r11,24448
	ctx.r10.s64 = ctx.r11.s64 + 24448;
	// lwz r11,296(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 296);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,296(r10)
	PPC_STORE_U32(ctx.r10.u32 + 296, ctx.r11.u32);
	// stw r29,140(r3)
	PPC_STORE_U32(ctx.r3.u32 + 140, ctx.r29.u32);
loc_8252F19C:
	// lwz r30,144(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8252f1b8
	if (ctx.cr6.eq) goto loc_8252F1B8;
	// bl 0x826a3ae0
	ctx.lr = 0x8252F1AC;
	sub_826A3AE0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x826a2868
	ctx.lr = 0x8252F1B4;
	sub_826A2868(ctx, base);
	// stw r29,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r29.u32);
loc_8252F1B8:
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r3,24(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8252f1d0
	if (ctx.cr6.eq) goto loc_8252F1D0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82c449e0
	ctx.lr = 0x8252F1D0;
	sub_82C449E0(ctx, base);
loc_8252F1D0:
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// bl 0x825897a0
	ctx.lr = 0x8252F1D8;
	sub_825897A0(ctx, base);
	// stw r29,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r29.u32);
loc_8252F1DC:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8252F1E4"))) PPC_WEAK_FUNC(sub_8252F1E4);
PPC_FUNC_IMPL(__imp__sub_8252F1E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8252F1E8"))) PPC_WEAK_FUNC(sub_8252F1E8);
PPC_FUNC_IMPL(__imp__sub_8252F1E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7668
	ctx.lr = 0x8252F1F0;
	__savegprlr_24(ctx, base);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82546708
	ctx.lr = 0x8252F208;
	sub_82546708(ctx, base);
	// mr. r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// beq 0x8252f32c
	if (ctx.cr0.eq) goto loc_8252F32C;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mr r29,r27
	ctx.r29.u64 = ctx.r27.u64;
	// bl 0x82546b30
	ctx.lr = 0x8252F21C;
	sub_82546B30(ctx, base);
	// li r11,36
	ctx.r11.s64 = 36;
	// divwu r11,r3,r11
	ctx.r11.u32 = ctx.r3.u32 / ctx.r11.u32;
	// mulli r11,r11,36
	ctx.r11.s64 = ctx.r11.s64 * 36;
	// add r25,r11,r27
	ctx.r25.u64 = ctx.r11.u64 + ctx.r27.u64;
	// cmplw cr6,r27,r25
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r25.u32, ctx.xer);
	// bge cr6,0x8252f324
	if (!ctx.cr6.lt) goto loc_8252F324;
	// li r26,0
	ctx.r26.s64 = 0;
loc_8252F238:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_8252F23C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x8252f23c
	if (!ctx.cr6.eq) goto loc_8252F23C;
	// subf r11,r29,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r29.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi. r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8252f318
	if (ctx.cr0.eq) goto loc_8252F318;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x822400d8
	ctx.lr = 0x8252F268;
	sub_822400D8(ctx, base);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// lwz r31,32(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 32);
	// bl 0x8224d3e0
	ctx.lr = 0x8252F278;
	sub_8224D3E0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x82251fc0
	ctx.lr = 0x8252F284;
	sub_82251FC0(ctx, base);
	// stw r31,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r31.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x822402c8
	ctx.lr = 0x8252F298;
	sub_822402C8(ctx, base);
	// li r3,48
	ctx.r3.s64 = 48;
	// addi r30,r24,36
	ctx.r30.s64 = ctx.r24.s64 + 36;
	// bl 0x82691500
	ctx.lr = 0x8252F2A4;
	sub_82691500(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x8252f334
	if (ctx.cr0.eq) goto loc_8252F334;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addic. r28,r31,12
	ctx.xer.ca = ctx.r31.u32 > 4294967283;
	ctx.r28.s64 = ctx.r31.s64 + 12;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// stb r26,44(r31)
	PPC_STORE_U8(ctx.r31.u32 + 44, ctx.r26.u8);
	// stb r26,45(r31)
	PPC_STORE_U8(ctx.r31.u32 + 45, ctx.r26.u8);
	// beq 0x8252f2e8
	if (ctx.cr0.eq) goto loc_8252F2E8;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82251fc0
	ctx.lr = 0x8252F2E0;
	sub_82251FC0(ctx, base);
	// lwz r11,188(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 188);
	// stw r11,28(r28)
	PPC_STORE_U32(ctx.r28.u32 + 28, ctx.r11.u32);
loc_8252F2E8:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x825308d8
	ctx.lr = 0x8252F2F8;
	sub_825308D8(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x822402c8
	ctx.lr = 0x8252F308;
	sub_822402C8(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x822402c8
	ctx.lr = 0x8252F318;
	sub_822402C8(ctx, base);
loc_8252F318:
	// addi r29,r29,36
	ctx.r29.s64 = ctx.r29.s64 + 36;
	// cmplw cr6,r29,r25
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r25.u32, ctx.xer);
	// blt cr6,0x8252f238
	if (ctx.cr6.lt) goto loc_8252F238;
loc_8252F324:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x825469e0
	ctx.lr = 0x8252F32C;
	sub_825469E0(ctx, base);
loc_8252F32C:
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x82fa76b8
	__restgprlr_24(ctx, base);
	return;
loc_8252F334:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stw r26,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r26.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r11,r11,11272
	ctx.r11.s64 = ctx.r11.s64 + 11272;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82240040
	ctx.lr = 0x8252F34C;
	sub_82240040(ctx, base);
}

__attribute__((alias("__imp__sub_8252F34C"))) PPC_WEAK_FUNC(sub_8252F34C);
PPC_FUNC_IMPL(__imp__sub_8252F34C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8252F350"))) PPC_WEAK_FUNC(sub_8252F350);
PPC_FUNC_IMPL(__imp__sub_8252F350) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x8252F358;
	__savegprlr_28(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x822400d8
	ctx.lr = 0x8252F368;
	sub_822400D8(ctx, base);
	// addi r29,r28,36
	ctx.r29.s64 = ctx.r28.s64 + 36;
	// lwz r30,40(r28)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r28.u32 + 40);
	// lwz r31,4(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// b 0x8252f3b8
	goto loc_8252F3B8;
loc_8252F378:
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// addi r3,r31,12
	ctx.r3.s64 = ctx.r31.s64 + 12;
	// lwz r6,96(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// bge cr6,0x8252f390
	if (!ctx.cr6.lt) goto loc_8252F390;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
loc_8252F390:
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r5,16(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// lwz r7,112(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// bl 0x82656348
	ctx.lr = 0x8252F3A0;
	sub_82656348(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x8252f3b0
	if (!ctx.cr0.lt) goto loc_8252F3B0;
	// lwz r31,8(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// b 0x8252f3b8
	goto loc_8252F3B8;
loc_8252F3B0:
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
	// lwz r31,0(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
loc_8252F3B8:
	// lbz r11,45(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 45);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x8252f378
	if (ctx.cr0.eq) goto loc_8252F378;
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8252f410
	if (ctx.cr6.eq) goto loc_8252F410;
	// lwz r10,32(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// addi r11,r30,12
	ctx.r11.s64 = ctx.r30.s64 + 12;
	// lwz r7,28(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// cmplwi cr6,r10,16
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 16, ctx.xer);
	// blt cr6,0x8252f3ec
	if (ctx.cr6.lt) goto loc_8252F3EC;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_8252F3EC:
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// lwz r5,112(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82656348
	ctx.lr = 0x8252F400;
	sub_82656348(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x8252f410
	if (ctx.cr0.lt) goto loc_8252F410;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// b 0x8252f41c
	goto loc_8252F41C;
loc_8252F410:
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// addi r11,r1,84
	ctx.r11.s64 = ctx.r1.s64 + 84;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
loc_8252F41C:
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,40(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 40);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x8252f4b4
	if (ctx.cr6.eq) goto loc_8252F4B4;
	// addic. r11,r11,40
	ctx.xer.ca = ctx.r11.u32 > 4294967255;
	ctx.r11.s64 = ctx.r11.s64 + 40;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8252f444
	if (ctx.cr0.eq) goto loc_8252F444;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addic r9,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// subfe r10,r9,r10
	temp.u8 = (~ctx.r9.u32 + ctx.r10.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r9.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// b 0x8252f448
	goto loc_8252F448;
loc_8252F444:
	// li r10,0
	ctx.r10.s64 = 0;
loc_8252F448:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8252f4b4
	if (ctx.cr6.eq) goto loc_8252F4B4;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lis r10,-31955
	ctx.r10.s64 = -2094202880;
	// lwz r9,16(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// lis r8,-31955
	ctx.r8.s64 = -2094202880;
	// addi r6,r10,26796
	ctx.r6.s64 = ctx.r10.s64 + 26796;
	// addi r5,r8,26780
	ctx.r5.s64 = ctx.r8.s64 + 26780;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// lwz r4,2124(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 2124);
	// bl 0x8256f138
	ctx.lr = 0x8252F478;
	sub_8256F138(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8252f4ac
	if (ctx.cr0.eq) goto loc_8252F4AC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8252F494;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x8252f4ac
	if (!ctx.cr0.eq) goto loc_8252F4AC;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r28,56
	ctx.r3.s64 = ctx.r28.s64 + 56;
	// bl 0x8234b5f0
	ctx.lr = 0x8252F4A8;
	sub_8234B5F0(ctx, base);
	// b 0x8252f4b4
	goto loc_8252F4B4;
loc_8252F4AC:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82570318
	ctx.lr = 0x8252F4B4;
	sub_82570318(ctx, base);
loc_8252F4B4:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x822402c8
	ctx.lr = 0x8252F4C4;
	sub_822402C8(ctx, base);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8252F4CC"))) PPC_WEAK_FUNC(sub_8252F4CC);
PPC_FUNC_IMPL(__imp__sub_8252F4CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8252F4D0"))) PPC_WEAK_FUNC(sub_8252F4D0);
PPC_FUNC_IMPL(__imp__sub_8252F4D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x8252F4D8;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,56(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r29,r3,56
	ctx.r29.s64 = ctx.r3.s64 + 56;
	// b 0x8252f518
	goto loc_8252F518;
loc_8252F4EC:
	// lwz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// stw r6,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r6.u32);
	// bl 0x825703e8
	ctx.lr = 0x8252F4FC;
	sub_825703E8(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8252f514
	if (ctx.cr0.eq) goto loc_8252F514;
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// bl 0x82570098
	ctx.lr = 0x8252F50C;
	sub_82570098(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82570318
	ctx.lr = 0x8252F514;
	sub_82570318(ctx, base);
loc_8252F514:
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
loc_8252F518:
	// lwz r11,60(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 60);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8252f4ec
	if (!ctx.cr6.eq) goto loc_8252F4EC;
	// lwz r31,0(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r4,4(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplw cr6,r31,r4
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x8252f554
	if (ctx.cr6.eq) goto loc_8252F554;
	// subf r11,r4,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r4.s64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// rlwinm r30,r11,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x82fa20f0
	ctx.lr = 0x8252F54C;
	sub_82FA20F0(ctx, base);
	// add r11,r30,r31
	ctx.r11.u64 = ctx.r30.u64 + ctx.r31.u64;
	// stw r11,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r11.u32);
loc_8252F554:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8252F55C"))) PPC_WEAK_FUNC(sub_8252F55C);
PPC_FUNC_IMPL(__imp__sub_8252F55C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8252F560"))) PPC_WEAK_FUNC(sub_8252F560);
PPC_FUNC_IMPL(__imp__sub_8252F560) {
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
	// lwz r3,52(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8252f5c0
	if (ctx.cr6.eq) goto loc_8252F5C0;
	// bl 0x8227de10
	ctx.lr = 0x8252F584;
	sub_8227DE10(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x8252f5c0
	if (ctx.cr0.eq) goto loc_8252F5C0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31955
	ctx.r10.s64 = -2094202880;
	// lwz r9,16(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
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
	// lwz r4,2124(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 2124);
	// bl 0x8256f138
	ctx.lr = 0x8252F5B4;
	sub_8256F138(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82570318
	ctx.lr = 0x8252F5C0;
	sub_82570318(ctx, base);
loc_8252F5C0:
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

__attribute__((alias("__imp__sub_8252F5D4"))) PPC_WEAK_FUNC(sub_8252F5D4);
PPC_FUNC_IMPL(__imp__sub_8252F5D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8252F5D8"))) PPC_WEAK_FUNC(sub_8252F5D8);
PPC_FUNC_IMPL(__imp__sub_8252F5D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7670
	ctx.lr = 0x8252F5E0;
	__savegprlr_26(ctx, base);
	// stwu r1,-384(r1)
	ea = -384 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r29,-32231
	ctx.r29.s64 = -2112290816;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r26,0
	ctx.r26.s64 = 0;
	// li r5,62
	ctx.r5.s64 = 62;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r26,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r26.u32);
	// lhz r30,31944(r29)
	ctx.r30.u64 = PPC_LOAD_U16(ctx.r29.u32 + 31944);
	// addi r3,r1,210
	ctx.r3.s64 = ctx.r1.s64 + 210;
	// sth r30,208(r1)
	PPC_STORE_U16(ctx.r1.u32 + 208, ctx.r30.u16);
	// bl 0x82fa7cf0
	ctx.lr = 0x8252F60C;
	sub_82FA7CF0(ctx, base);
	// lwz r10,120(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// mr r27,r26
	ctx.r27.u64 = ctx.r26.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r28,r11,21076
	ctx.r28.s64 = ctx.r11.s64 + 21076;
	// beq cr6,0x8252f66c
	if (ctx.cr6.eq) goto loc_8252F66C;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82f91940
	ctx.lr = 0x8252F62C;
	sub_82F91940(ctx, base);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// addi r11,r11,13792
	ctx.r11.s64 = ctx.r11.s64 + 13792;
	// lwz r3,4(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r4,r10,13096
	ctx.r4.s64 = ctx.r10.s64 + 13096;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,32
	ctx.r6.s64 = 32;
	// addi r5,r1,208
	ctx.r5.s64 = ctx.r1.s64 + 208;
	// bl 0x8259c8e0
	ctx.lr = 0x8252F664;
	sub_8259C8E0(ctx, base);
	// addi r27,r1,208
	ctx.r27.s64 = ctx.r1.s64 + 208;
	// lhz r30,31944(r29)
	ctx.r30.u64 = PPC_LOAD_U16(ctx.r29.u32 + 31944);
loc_8252F66C:
	// li r5,62
	ctx.r5.s64 = 62;
	// sth r30,144(r1)
	PPC_STORE_U16(ctx.r1.u32 + 144, ctx.r30.u16);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r26,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r26.u32);
	// addi r3,r1,146
	ctx.r3.s64 = ctx.r1.s64 + 146;
	// bl 0x82fa7cf0
	ctx.lr = 0x8252F684;
	sub_82FA7CF0(ctx, base);
	// lwz r11,116(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8252f6d8
	if (ctx.cr6.eq) goto loc_8252F6D8;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82f91940
	ctx.lr = 0x8252F69C;
	sub_82F91940(ctx, base);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// stw r31,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r31.u32);
	// addi r11,r11,13816
	ctx.r11.s64 = ctx.r11.s64 + 13816;
	// lwz r3,4(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// stw r10,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r10.u32);
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r4,r10,-13724
	ctx.r4.s64 = ctx.r10.s64 + -13724;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,32
	ctx.r6.s64 = 32;
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// bl 0x8259c8e0
	ctx.lr = 0x8252F6D4;
	sub_8259C8E0(ctx, base);
	// addi r30,r1,144
	ctx.r30.s64 = ctx.r1.s64 + 144;
loc_8252F6D8:
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// bl 0x8226c200
	ctx.lr = 0x8252F6E4;
	sub_8226C200(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// bl 0x8226c200
	ctx.lr = 0x8252F6F4;
	sub_8226C200(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r8,1
	ctx.r8.s64 = 1;
	// bl 0x82524730
	ctx.lr = 0x8252F710;
	sub_82524730(ctx, base);
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82f91940
	ctx.lr = 0x8252F71C;
	sub_82F91940(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82f91940
	ctx.lr = 0x8252F724;
	sub_82F91940(ctx, base);
	// addi r1,r1,384
	ctx.r1.s64 = ctx.r1.s64 + 384;
	// b 0x82fa76c0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8252F72C"))) PPC_WEAK_FUNC(sub_8252F72C);
PPC_FUNC_IMPL(__imp__sub_8252F72C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8252F730"))) PPC_WEAK_FUNC(sub_8252F730);
PPC_FUNC_IMPL(__imp__sub_8252F730) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
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
	// lwz r11,88(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8252f80c
	if (ctx.cr6.eq) goto loc_8252F80C;
	// lwz r11,96(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8252f80c
	if (!ctx.cr6.eq) goto loc_8252F80C;
	// lwz r11,92(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 92);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8252f7c4
	if (ctx.cr6.eq) goto loc_8252F7C4;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne cr6,0x8252f804
	if (!ctx.cr6.eq) goto loc_8252F804;
	// lis r11,-32173
	ctx.r11.s64 = -2108489728;
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// addi r11,r11,-1824
	ctx.r11.s64 = ctx.r11.s64 + -1824;
	// addi r10,r10,13840
	ctx.r10.s64 = ctx.r10.s64 + 13840;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// stw r9,136(r3)
	PPC_STORE_U32(ctx.r3.u32 + 136, ctx.r9.u32);
	// lis r9,-32231
	ctx.r9.s64 = -2112290816;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r10,r9,6636
	ctx.r10.s64 = ctx.r9.s64 + 6636;
	// ld r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// std r8,100(r1)
	PPC_STORE_U64(ctx.r1.u32 + 100, ctx.r8.u64);
	// lfs f2,12(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,-24756(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -24756);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x825b0e18
	ctx.lr = 0x8252F7C0;
	sub_825B0E18(ctx, base);
	// b 0x8252f804
	goto loc_8252F804;
loc_8252F7C4:
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// addi r11,r11,23144
	ctx.r11.s64 = ctx.r11.s64 + 23144;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8252f804
	if (ctx.cr6.eq) goto loc_8252F804;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// lis r9,-32228
	ctx.r9.s64 = -2112094208;
	// addi r7,r10,13320
	ctx.r7.s64 = ctx.r10.s64 + 13320;
	// addi r6,r9,13396
	ctx.r6.s64 = ctx.r9.s64 + 13396;
	// li r8,693
	ctx.r8.s64 = 693;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bctrl 
	ctx.lr = 0x8252F804;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8252F804:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
loc_8252F80C:
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

__attribute__((alias("__imp__sub_8252F820"))) PPC_WEAK_FUNC(sub_8252F820);
PPC_FUNC_IMPL(__imp__sub_8252F820) {
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
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,88(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8252f8c4
	if (ctx.cr6.eq) goto loc_8252F8C4;
	// lwz r11,96(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8252f8c4
	if (ctx.cr6.eq) goto loc_8252F8C4;
	// lwz r11,92(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 92);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8252f88c
	if (ctx.cr6.eq) goto loc_8252F88C;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x8252f8c0
	if (ctx.cr6.eq) goto loc_8252F8C0;
	// stw r30,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r30.u32);
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// addi r11,r11,6636
	ctx.r11.s64 = ctx.r11.s64 + 6636;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lfs f1,-2340(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -2340);
	ctx.f1.f64 = double(temp.f32);
	// lfs f2,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f2.f64 = double(temp.f32);
	// bl 0x825b0e18
	ctx.lr = 0x8252F888;
	sub_825B0E18(ctx, base);
	// b 0x8252f8c0
	goto loc_8252F8C0;
loc_8252F88C:
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// addi r11,r11,23144
	ctx.r11.s64 = ctx.r11.s64 + 23144;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8252f8c0
	if (ctx.cr6.eq) goto loc_8252F8C0;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// lis r9,-32228
	ctx.r9.s64 = -2112094208;
	// addi r4,r10,13320
	ctx.r4.s64 = ctx.r10.s64 + 13320;
	// addi r3,r9,13432
	ctx.r3.s64 = ctx.r9.s64 + 13432;
	// li r5,723
	ctx.r5.s64 = 723;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8252F8C0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8252F8C0:
	// stw r30,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r30.u32);
loc_8252F8C4:
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

__attribute__((alias("__imp__sub_8252F8DC"))) PPC_WEAK_FUNC(sub_8252F8DC);
PPC_FUNC_IMPL(__imp__sub_8252F8DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8252F8E0"))) PPC_WEAK_FUNC(sub_8252F8E0);
PPC_FUNC_IMPL(__imp__sub_8252F8E0) {
	PPC_FUNC_PROLOGUE();
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,136(r3)
	PPC_STORE_U32(ctx.r3.u32 + 136, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8252F8EC"))) PPC_WEAK_FUNC(sub_8252F8EC);
PPC_FUNC_IMPL(__imp__sub_8252F8EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8252F8F0"))) PPC_WEAK_FUNC(sub_8252F8F0);
PPC_FUNC_IMPL(__imp__sub_8252F8F0) {
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
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// addi r4,r11,13468
	ctx.r4.s64 = ctx.r11.s64 + 13468;
	// bl 0x82557338
	ctx.lr = 0x8252F918;
	sub_82557338(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8252f928
	if (!ctx.cr0.eq) goto loc_8252F928;
	// li r11,3
	ctx.r11.s64 = 3;
	// b 0x8252f9a8
	goto loc_8252F9A8;
loc_8252F928:
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// addi r4,r11,13480
	ctx.r4.s64 = ctx.r11.s64 + 13480;
	// bl 0x82557338
	ctx.lr = 0x8252F938;
	sub_82557338(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8252f948
	if (!ctx.cr0.eq) goto loc_8252F948;
	// li r11,5
	ctx.r11.s64 = 5;
	// b 0x8252f9a8
	goto loc_8252F9A8;
loc_8252F948:
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// addi r4,r11,13496
	ctx.r4.s64 = ctx.r11.s64 + 13496;
	// bl 0x82557338
	ctx.lr = 0x8252F958;
	sub_82557338(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8252f96c
	if (!ctx.cr0.eq) goto loc_8252F96C;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r11.u32);
	// b 0x8252f9ec
	goto loc_8252F9EC;
loc_8252F96C:
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// addi r4,r11,13512
	ctx.r4.s64 = ctx.r11.s64 + 13512;
	// bl 0x82557338
	ctx.lr = 0x8252F97C;
	sub_82557338(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8252f98c
	if (!ctx.cr0.eq) goto loc_8252F98C;
	// li r11,7
	ctx.r11.s64 = 7;
	// b 0x8252f9a8
	goto loc_8252F9A8;
loc_8252F98C:
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// addi r4,r11,13528
	ctx.r4.s64 = ctx.r11.s64 + 13528;
	// bl 0x82557338
	ctx.lr = 0x8252F99C;
	sub_82557338(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8252f9b0
	if (!ctx.cr0.eq) goto loc_8252F9B0;
	// li r11,9
	ctx.r11.s64 = 9;
loc_8252F9A8:
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// b 0x8252f9ec
	goto loc_8252F9EC;
loc_8252F9B0:
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// addi r4,r11,13548
	ctx.r4.s64 = ctx.r11.s64 + 13548;
	// bl 0x82557338
	ctx.lr = 0x8252F9C0;
	sub_82557338(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x8252f9ec
	if (!ctx.cr0.eq) goto loc_8252F9EC;
	// lwz r11,4(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// rlwinm. r11,r11,26,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8252f9e0
	if (ctx.cr0.eq) goto loc_8252F9E0;
	// lwz r11,8(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x8252f9e4
	goto loc_8252F9E4;
loc_8252F9E0:
	// lwz r4,8(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
loc_8252F9E4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8252f350
	ctx.lr = 0x8252F9EC;
	sub_8252F350(ctx, base);
loc_8252F9EC:
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

__attribute__((alias("__imp__sub_8252FA00"))) PPC_WEAK_FUNC(sub_8252FA00);
PPC_FUNC_IMPL(__imp__sub_8252FA00) {
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
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// beq cr6,0x8252fa20
	if (ctx.cr6.eq) goto loc_8252FA20;
	// cmpwi cr6,r11,9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 9, ctx.xer);
	// bne cr6,0x8252fa44
	if (!ctx.cr6.eq) goto loc_8252FA44;
loc_8252FA20:
	// lwz r3,28(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8252fa44
	if (ctx.cr6.eq) goto loc_8252FA44;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82589ba0
	ctx.lr = 0x8252FA34;
	sub_82589BA0(ctx, base);
	// lis r11,-31964
	ctx.r11.s64 = -2094792704;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,-13544(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -13544);
	// bl 0x82664ce8
	ctx.lr = 0x8252FA44;
	sub_82664CE8(ctx, base);
loc_8252FA44:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8252FA54"))) PPC_WEAK_FUNC(sub_8252FA54);
PPC_FUNC_IMPL(__imp__sub_8252FA54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_8252FA58"))) PPC_WEAK_FUNC(sub_8252FA58);
PPC_FUNC_IMPL(__imp__sub_8252FA58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x8252FA60;
	__savegprlr_28(ctx, base);
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,84(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 84);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8252fa80
	if (!ctx.cr6.eq) goto loc_8252FA80;
	// bl 0x82530080
	ctx.lr = 0x8252FA80;
	sub_82530080(ctx, base);
loc_8252FA80:
	// lwz r11,12(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8252fb20
	if (!ctx.cr6.eq) goto loc_8252FB20;
	// lwz r31,56(r28)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r28.u32 + 56);
	// addi r30,r28,56
	ctx.r30.s64 = ctx.r28.s64 + 56;
	// lwz r11,60(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 60);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8252fb0c
	if (ctx.cr6.eq) goto loc_8252FB0C;
	// addi r29,r31,4
	ctx.r29.s64 = ctx.r31.s64 + 4;
loc_8252FAA4:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8252FABC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8252faf8
	if (ctx.cr0.eq) goto loc_8252FAF8;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82570318
	ctx.lr = 0x8252FACC;
	sub_82570318(ctx, base);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// subf r11,r29,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r29.s64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82fa20f0
	ctx.lr = 0x8252FAE8;
	sub_82FA20F0(ctx, base);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
	// b 0x8252fb00
	goto loc_8252FB00;
loc_8252FAF8:
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
loc_8252FB00:
	// lwz r11,60(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 60);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8252faa4
	if (!ctx.cr6.eq) goto loc_8252FAA4;
loc_8252FB0C:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8252fb40
	ctx.lr = 0x8252FB14;
	sub_8252FB40(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x8252fc18
	ctx.lr = 0x8252FB20;
	sub_8252FC18(ctx, base);
loc_8252FB20:
	// lwz r3,80(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 80);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8252fb34
	if (ctx.cr6.eq) goto loc_8252FB34;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82524a90
	ctx.lr = 0x8252FB34;
	sub_82524A90(ctx, base);
loc_8252FB34:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8252FB40"))) PPC_WEAK_FUNC(sub_8252FB40);
PPC_FUNC_IMPL(__imp__sub_8252FB40) {
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
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x8252fc04
	if (ctx.cr6.eq) goto loc_8252FC04;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8252fbe4
	if (ctx.cr6.eq) goto loc_8252FBE4;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x8252fbd4
	if (ctx.cr6.eq) goto loc_8252FBD4;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// beq cr6,0x8252fbb8
	if (ctx.cr6.eq) goto loc_8252FBB8;
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// beq cr6,0x8252fbd4
	if (ctx.cr6.eq) goto loc_8252FBD4;
	// cmpwi cr6,r11,9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 9, ctx.xer);
	// beq cr6,0x8252fb9c
	if (ctx.cr6.eq) goto loc_8252FB9C;
	// cmpwi cr6,r11,10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 10, ctx.xer);
	// bne cr6,0x8252fbfc
	if (!ctx.cr6.eq) goto loc_8252FBFC;
	// bl 0x8252f158
	ctx.lr = 0x8252FB98;
	sub_8252F158(ctx, base);
	// b 0x8252fbfc
	goto loc_8252FBFC;
loc_8252FB9C:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f0,-2340(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -2340);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,148(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 148, temp.u32);
	// bl 0x8252f730
	ctx.lr = 0x8252FBB4;
	sub_8252F730(ctx, base);
	// b 0x8252fbfc
	goto loc_8252FBFC;
loc_8252FBB8:
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r11,13564
	ctx.r4.s64 = ctx.r11.s64 + 13564;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x826a7620
	ctx.lr = 0x8252FBD0;
	sub_826A7620(ctx, base);
	// b 0x8252fbfc
	goto loc_8252FBFC;
loc_8252FBD4:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lfs f0,-2340(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -2340);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,148(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 148, temp.u32);
	// b 0x8252fbfc
	goto loc_8252FBFC;
loc_8252FBE4:
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,13148
	ctx.r4.s64 = ctx.r11.s64 + 13148;
	// bl 0x8252f560
	ctx.lr = 0x8252FBF4;
	sub_8252F560(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r11.u32);
loc_8252FBFC:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_8252FC04:
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

__attribute__((alias("__imp__sub_8252FC18"))) PPC_WEAK_FUNC(sub_8252FC18);
PPC_FUNC_IMPL(__imp__sub_8252FC18) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x8252FC20;
	__savegprlr_29(ctx, base);
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,112(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 112);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// li r29,0
	ctx.r29.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8252fc64
	if (ctx.cr6.eq) goto loc_8252FC64;
	// bl 0x8254b7e0
	ctx.lr = 0x8252FC44;
	sub_8254B7E0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8252fc64
	if (ctx.cr6.eq) goto loc_8252FC64;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,13160
	ctx.r4.s64 = ctx.r11.s64 + 13160;
	// bl 0x8252f560
	ctx.lr = 0x8252FC60;
	sub_8252F560(ctx, base);
	// stw r29,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r29.u32);
loc_8252FC64:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8252ffe0
	if (ctx.cr6.eq) goto loc_8252FFE0;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x8252ffa4
	if (ctx.cr6.eq) goto loc_8252FFA4;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// beq cr6,0x8252fdbc
	if (ctx.cr6.eq) goto loc_8252FDBC;
	// cmpwi cr6,r11,7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 7, ctx.xer);
	// beq cr6,0x8252fd7c
	if (ctx.cr6.eq) goto loc_8252FD7C;
	// cmpwi cr6,r11,9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 9, ctx.xer);
	// bne cr6,0x82530070
	if (!ctx.cr6.eq) goto loc_82530070;
	// lwz r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8252fce0
	if (ctx.cr6.eq) goto loc_8252FCE0;
	// lwz r11,92(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8252fcb0
	if (ctx.cr6.eq) goto loc_8252FCB0;
	// lwz r11,136(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// b 0x8252fce4
	goto loc_8252FCE4;
loc_8252FCB0:
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// addi r11,r11,23144
	ctx.r11.s64 = ctx.r11.s64 + 23144;
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8252fcd8
	if (ctx.cr6.eq) goto loc_8252FCD8;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8252FCD0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// b 0x8252fce4
	goto loc_8252FCE4;
loc_8252FCD8:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// b 0x8252fce4
	goto loc_8252FCE4;
loc_8252FCE0:
	// li r11,1
	ctx.r11.s64 = 1;
loc_8252FCE4:
	// li r30,10
	ctx.r30.s64 = 10;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8252fd48
	if (ctx.cr6.eq) goto loc_8252FD48;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8252f4d0
	ctx.lr = 0x8252FCF8;
	sub_8252F4D0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8252f820
	ctx.lr = 0x8252FD04;
	sub_8252F820(ctx, base);
	// lwz r3,100(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8252fd18
	if (ctx.cr6.eq) goto loc_8252FD18;
	// bl 0x8254b5f8
	ctx.lr = 0x8252FD14;
	sub_8254B5F8(ctx, base);
	// stw r29,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r29.u32);
loc_8252FD18:
	// lwz r11,104(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8252fd38
	if (ctx.cr6.eq) goto loc_8252FD38;
	// stw r29,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r29.u32);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,13136
	ctx.r4.s64 = ctx.r11.s64 + 13136;
	// bl 0x8252f560
	ctx.lr = 0x8252FD38;
	sub_8252F560(ctx, base);
loc_8252FD38:
	// lwz r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8252fd48
	if (ctx.cr6.eq) goto loc_8252FD48;
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
loc_8252FD48:
	// lwz r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82530070
	if (!ctx.cr6.eq) goto loc_82530070;
	// lfs f0,148(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// fadds f13,f0,f31
	ctx.f13.f64 = double(float(ctx.f0.f64 + ctx.f31.f64));
	// stfs f13,148(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 148, temp.u32);
	// addi r11,r11,6636
	ctx.r11.s64 = ctx.r11.s64 + 6636;
	// lfs f0,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// blt cr6,0x82530070
	if (ctx.cr6.lt) goto loc_82530070;
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// b 0x82530070
	goto loc_82530070;
loc_8252FD7C:
	// lfs f0,148(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// fadds f13,f0,f31
	ctx.f13.f64 = double(float(ctx.f0.f64 + ctx.f31.f64));
	// stfs f13,148(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 148, temp.u32);
	// addi r11,r11,6636
	ctx.r11.s64 = ctx.r11.s64 + 6636;
	// lfs f0,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// blt cr6,0x82530070
	if (ctx.cr6.lt) goto loc_82530070;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r11,13688
	ctx.r4.s64 = ctx.r11.s64 + 13688;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x826a7620
	ctx.lr = 0x8252FDB4;
	sub_826A7620(ctx, base);
	// li r11,8
	ctx.r11.s64 = 8;
	// b 0x8253006c
	goto loc_8253006C;
loc_8252FDBC:
	// lwz r11,116(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// li r30,1
	ctx.r30.s64 = 1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8252fdd8
	if (!ctx.cr6.eq) goto loc_8252FDD8;
	// lwz r11,120(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8252fe3c
	if (ctx.cr6.eq) goto loc_8252FE3C;
loc_8252FDD8:
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8252fe3c
	if (!ctx.cr6.eq) goto loc_8252FE3C;
	// lwz r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8252fe28
	if (ctx.cr6.eq) goto loc_8252FE28;
	// lwz r11,92(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8252fe28
	if (!ctx.cr6.eq) goto loc_8252FE28;
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// addi r11,r11,23144
	ctx.r11.s64 = ctx.r11.s64 + 23144;
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8252fe20
	if (ctx.cr6.eq) goto loc_8252FE20;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8252FE1C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x8252fe2c
	goto loc_8252FE2C;
loc_8252FE20:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// b 0x8252fe2c
	goto loc_8252FE2C;
loc_8252FE28:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_8252FE2C:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x8252fe3c
	if (ctx.cr6.eq) goto loc_8252FE3C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8252f5d8
	ctx.lr = 0x8252FE3C;
	sub_8252F5D8(ctx, base);
loc_8252FE3C:
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r3,24(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8252fe54
	if (!ctx.cr6.eq) goto loc_8252FE54;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// b 0x8252fe5c
	goto loc_8252FE5C;
loc_8252FE54:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82c449f0
	ctx.lr = 0x8252FE5C;
	sub_82C449F0(ctx, base);
loc_8252FE5C:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,116(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// addi r11,r11,-7
	ctx.r11.s64 = ctx.r11.s64 + -7;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r7,r11,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// beq cr6,0x8252fe9c
	if (ctx.cr6.eq) goto loc_8252FE9C;
	// lwz r11,120(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8252fe9c
	if (!ctx.cr6.eq) goto loc_8252FE9C;
	// li r4,4096
	ctx.r4.s64 = 4096;
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x8257c698
	ctx.lr = 0x8252FE90;
	sub_8257C698(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8252fe9c
	if (ctx.cr0.eq) goto loc_8252FE9C;
	// stw r30,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r30.u32);
loc_8252FE9C:
	// lwz r11,128(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8252ff1c
	if (ctx.cr6.eq) goto loc_8252FF1C;
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8252febc
	if (ctx.cr6.eq) goto loc_8252FEBC;
	// bl 0x82524840
	ctx.lr = 0x8252FEB8;
	sub_82524840(ctx, base);
	// stw r29,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r29.u32);
loc_8252FEBC:
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// lwz r11,21120(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 21120);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x8252feec
	if (ctx.cr6.eq) goto loc_8252FEEC;
	// lwz r11,240(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 240);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lbz r10,3(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// rlwinm. r10,r10,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8252ff9c
	if (!ctx.cr0.eq) goto loc_8252FF9C;
	// lbz r10,3(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 3);
	// ori r10,r10,16
	ctx.r10.u64 = ctx.r10.u64 | 16;
	// stb r10,3(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3, ctx.r10.u8);
loc_8252FEEC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8252f158
	ctx.lr = 0x8252FEF4;
	sub_8252F158(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8252f4d0
	ctx.lr = 0x8252FEFC;
	sub_8252F4D0(ctx, base);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r4,r11,13656
	ctx.r4.s64 = ctx.r11.s64 + 13656;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x826a7620
	ctx.lr = 0x8252FF14;
	sub_826A7620(ctx, base);
	// li r11,6
	ctx.r11.s64 = 6;
	// b 0x8253006c
	goto loc_8253006C;
loc_8252FF1C:
	// lwz r11,124(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8252ff3c
	if (!ctx.cr6.eq) goto loc_8252FF3C;
	// lwz r11,132(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8252ff3c
	if (!ctx.cr6.eq) goto loc_8252FF3C;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x82530070
	if (ctx.cr6.eq) goto loc_82530070;
loc_8252FF3C:
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r3,24(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x8252ff54
	if (!ctx.cr6.eq) goto loc_8252FF54;
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r30.u32);
	// b 0x8252ff5c
	goto loc_8252FF5C;
loc_8252FF54:
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// bl 0x82c449f0
	ctx.lr = 0x8252FF5C;
	sub_82C449F0(ctx, base);
loc_8252FF5C:
	// lwz r11,108(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8252ff88
	if (!ctx.cr6.eq) goto loc_8252FF88;
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8252ff88
	if (ctx.cr6.eq) goto loc_8252FF88;
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x8252ff88
	if (!ctx.cr6.eq) goto loc_8252FF88;
	// bl 0x82589cc0
	ctx.lr = 0x8252FF84;
	sub_82589CC0(ctx, base);
	// stw r3,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r3.u32);
loc_8252FF88:
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8252ff9c
	if (ctx.cr6.eq) goto loc_8252FF9C;
	// bl 0x82524840
	ctx.lr = 0x8252FF98;
	sub_82524840(ctx, base);
	// stw r29,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r29.u32);
loc_8252FF9C:
	// li r11,9
	ctx.r11.s64 = 9;
	// b 0x8253006c
	goto loc_8253006C;
loc_8252FFA4:
	// lfs f0,148(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// fadds f13,f0,f31
	ctx.f13.f64 = double(float(ctx.f0.f64 + ctx.f31.f64));
	// stfs f13,148(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 148, temp.u32);
	// lfs f0,31396(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 31396);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// blt cr6,0x82530070
	if (ctx.cr6.lt) goto loc_82530070;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r11,13628
	ctx.r4.s64 = ctx.r11.s64 + 13628;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x826a7620
	ctx.lr = 0x8252FFD8;
	sub_826A7620(ctx, base);
	// li r11,4
	ctx.r11.s64 = 4;
	// b 0x8253006c
	goto loc_8253006C;
loc_8252FFE0:
	// lwz r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// li r30,1
	ctx.r30.s64 = 1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82530028
	if (ctx.cr6.eq) goto loc_82530028;
	// lwz r11,92(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82530034
	if (!ctx.cr6.eq) goto loc_82530034;
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// addi r11,r11,23144
	ctx.r11.s64 = ctx.r11.s64 + 23144;
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82530020
	if (ctx.cr6.eq) goto loc_82530020;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8253001C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x8253002c
	goto loc_8253002C;
loc_82530020:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// b 0x8253002c
	goto loc_8253002C;
loc_82530028:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_8253002C:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82530070
	if (ctx.cr6.eq) goto loc_82530070;
loc_82530034:
	// stw r30,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r30.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8252f820
	ctx.lr = 0x82530044;
	sub_8252F820(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// bl 0x826a4180
	ctx.lr = 0x82530050;
	sub_826A4180(ctx, base);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r4,r11,13596
	ctx.r4.s64 = ctx.r11.s64 + 13596;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x826a7620
	ctx.lr = 0x82530068;
	sub_826A7620(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
loc_8253006C:
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
loc_82530070:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8253007C"))) PPC_WEAK_FUNC(sub_8253007C);
PPC_FUNC_IMPL(__imp__sub_8253007C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82530080"))) PPC_WEAK_FUNC(sub_82530080);
PPC_FUNC_IMPL(__imp__sub_82530080) {
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
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x82530244
	if (ctx.cr6.lt) goto loc_82530244;
	// beq cr6,0x825301d0
	if (ctx.cr6.eq) goto loc_825301D0;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// blt cr6,0x8253016c
	if (ctx.cr6.lt) goto loc_8253016C;
	// bne cr6,0x825302e4
	if (!ctx.cr6.eq) goto loc_825302E4;
	// bl 0x8250f738
	ctx.lr = 0x825300B8;
	sub_8250F738(ctx, base);
	// lwz r11,160(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 160);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x825302e4
	if (!ctx.cr6.eq) goto loc_825302E4;
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// addi r11,r11,21296
	ctx.r11.s64 = ctx.r11.s64 + 21296;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// beq cr6,0x825302e4
	if (ctx.cr6.eq) goto loc_825302E4;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x825302e4
	if (!ctx.cr6.eq) goto loc_825302E4;
	// lwz r31,28(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8253013c
	if (ctx.cr6.eq) goto loc_8253013C;
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8253012c
	if (ctx.cr6.eq) goto loc_8253012C;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82c449f0
	ctx.lr = 0x82530104;
	sub_82C449F0(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x82530118
	if (!ctx.cr6.eq) goto loc_82530118;
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// bl 0x828f2e10
	ctx.lr = 0x82530118;
	sub_828F2E10(ctx, base);
loc_82530118:
	// li r11,1
	ctx.r11.s64 = 1;
	// rlwinm r10,r3,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0x1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// xori r11,r10,1
	ctx.r11.u64 = ctx.r10.u64 ^ 1;
	// b 0x82530130
	goto loc_82530130;
loc_8253012C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82530130:
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// stw r11,108(r30)
	PPC_STORE_U32(ctx.r30.u32 + 108, ctx.r11.u32);
loc_8253013C:
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r11,13108
	ctx.r4.s64 = ctx.r11.s64 + 13108;
	// bl 0x8252f560
	ctx.lr = 0x8253014C;
	sub_8252F560(ctx, base);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r3,20(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// addi r4,r11,13752
	ctx.r4.s64 = ctx.r11.s64 + 13752;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x826a7620
	ctx.lr = 0x82530164;
	sub_826A7620(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x825302e0
	goto loc_825302E0;
loc_8253016C:
	// lis r31,-31957
	ctx.r31.s64 = -2094333952;
	// lwz r11,21068(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 21068);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82530184
	if (!ctx.cr6.eq) goto loc_82530184;
	// bl 0x822e58d0
	ctx.lr = 0x82530180;
	sub_822E58D0(ctx, base);
	// lwz r11,21068(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 21068);
loc_82530184:
	// lwz r11,156(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 156);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x825302e4
	if (!ctx.cr6.eq) goto loc_825302E4;
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// addi r11,r11,21296
	ctx.r11.s64 = ctx.r11.s64 + 21296;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// beq cr6,0x825302e4
	if (ctx.cr6.eq) goto loc_825302E4;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x825302e4
	if (!ctx.cr6.eq) goto loc_825302E4;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,20(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// bl 0x826a41b8
	ctx.lr = 0x825301BC;
	sub_826A41B8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,20(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// bl 0x826a4180
	ctx.lr = 0x825301C8;
	sub_826A4180(ctx, base);
	// li r11,3
	ctx.r11.s64 = 3;
	// b 0x825302e0
	goto loc_825302E0;
loc_825301D0:
	// bl 0x8250f738
	ctx.lr = 0x825301D4;
	sub_8250F738(ctx, base);
	// lwz r11,160(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 160);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82530200
	if (ctx.cr6.eq) goto loc_82530200;
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// addi r11,r11,21296
	ctx.r11.s64 = ctx.r11.s64 + 21296;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// beq cr6,0x82530200
	if (ctx.cr6.eq) goto loc_82530200;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825302e4
	if (ctx.cr6.eq) goto loc_825302E4;
loc_82530200:
	// lis r31,-31957
	ctx.r31.s64 = -2094333952;
	// lwz r11,21068(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 21068);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82530218
	if (!ctx.cr6.eq) goto loc_82530218;
	// bl 0x822e58d0
	ctx.lr = 0x82530214;
	sub_822E58D0(ctx, base);
	// lwz r11,21068(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 21068);
loc_82530218:
	// lwz r11,156(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 156);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82530230
	if (ctx.cr6.eq) goto loc_82530230;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,20(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// bl 0x826a4180
	ctx.lr = 0x82530230;
	sub_826A4180(ctx, base);
loc_82530230:
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,20(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// bl 0x826a41b8
	ctx.lr = 0x8253023C;
	sub_826A41B8(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// b 0x825302e0
	goto loc_825302E0;
loc_82530244:
	// lis r31,-31957
	ctx.r31.s64 = -2094333952;
	// lwz r11,21068(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 21068);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8253025c
	if (!ctx.cr6.eq) goto loc_8253025C;
	// bl 0x822e58d0
	ctx.lr = 0x82530258;
	sub_822E58D0(ctx, base);
	// lwz r11,21068(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 21068);
loc_8253025C:
	// lwz r11,156(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 156);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82530288
	if (!ctx.cr6.eq) goto loc_82530288;
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// addi r11,r11,21296
	ctx.r11.s64 = ctx.r11.s64 + 21296;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// beq cr6,0x82530288
	if (ctx.cr6.eq) goto loc_82530288;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825302e4
	if (ctx.cr6.eq) goto loc_825302E4;
loc_82530288:
	// lwz r3,28(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8253029c
	if (ctx.cr6.eq) goto loc_8253029C;
	// bl 0x82589cc0
	ctx.lr = 0x82530298;
	sub_82589CC0(ctx, base);
	// stw r3,108(r30)
	PPC_STORE_U32(ctx.r30.u32 + 108, ctx.r3.u32);
loc_8253029C:
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r11,13124
	ctx.r4.s64 = ctx.r11.s64 + 13124;
	// bl 0x8252f560
	ctx.lr = 0x825302AC;
	sub_8252F560(ctx, base);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r3,20(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// addi r4,r11,13720
	ctx.r4.s64 = ctx.r11.s64 + 13720;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x826a7620
	ctx.lr = 0x825302C4;
	sub_826A7620(ctx, base);
	// lwz r3,80(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 80);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x825302dc
	if (ctx.cr6.eq) goto loc_825302DC;
	// bl 0x82524840
	ctx.lr = 0x825302D4;
	sub_82524840(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,80(r30)
	PPC_STORE_U32(ctx.r30.u32 + 80, ctx.r11.u32);
loc_825302DC:
	// li r11,1
	ctx.r11.s64 = 1;
loc_825302E0:
	// stw r11,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r11.u32);
loc_825302E4:
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x825302f8
	if (ctx.cr6.eq) goto loc_825302F8;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x82530318
	if (!ctx.cr6.eq) goto loc_82530318;
loc_825302F8:
	// lwz r3,28(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82530318
	if (ctx.cr6.eq) goto loc_82530318;
	// lwz r11,108(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 108);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82530318
	if (!ctx.cr6.eq) goto loc_82530318;
	// bl 0x82589cc0
	ctx.lr = 0x82530314;
	sub_82589CC0(ctx, base);
	// stw r3,108(r30)
	PPC_STORE_U32(ctx.r30.u32 + 108, ctx.r3.u32);
loc_82530318:
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

__attribute__((alias("__imp__sub_82530330"))) PPC_WEAK_FUNC(sub_82530330);
PPC_FUNC_IMPL(__imp__sub_82530330) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x82530338;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82530370
	if (ctx.cr6.eq) goto loc_82530370;
	// lwz r29,4(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// b 0x82530360
	goto loc_82530360;
loc_82530354:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822e4d00
	ctx.lr = 0x8253035C;
	sub_822E4D00(ctx, base);
	// addi r30,r30,16
	ctx.r30.s64 = ctx.r30.s64 + 16;
loc_82530360:
	// cmplw cr6,r30,r29
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r29.u32, ctx.xer);
	// bne cr6,0x82530354
	if (!ctx.cr6.eq) goto loc_82530354;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82691540
	ctx.lr = 0x82530370;
	sub_82691540(ctx, base);
loc_82530370:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82530388"))) PPC_WEAK_FUNC(sub_82530388);
PPC_FUNC_IMPL(__imp__sub_82530388) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7670
	ctx.lr = 0x82530390;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,4095
	ctx.r11.s64 = 268369920;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// ori r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 65535;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x825303b8
	if (!ctx.cr6.gt) goto loc_825303B8;
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// addi r3,r11,31836
	ctx.r3.s64 = ctx.r11.s64 + 31836;
	// bl 0x82fa0648
	ctx.lr = 0x825303B8;
	sub_82FA0648(ctx, base);
loc_825303B8:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi r11,r11,4
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 4;
	// cmplw cr6,r11,r26
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r26.u32, ctx.xer);
	// bge cr6,0x8253047c
	if (!ctx.cr6.lt) goto loc_8253047C;
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x825303ec
	if (ctx.cr6.eq) goto loc_825303EC;
	// rlwinm r3,r26,4,0,27
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 4) & 0xFFFFFFF0;
	// bl 0x82691500
	ctx.lr = 0x825303E4;
	sub_82691500(ctx, base);
	// mr. r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq 0x82530484
	if (ctx.cr0.eq) goto loc_82530484;
loc_825303EC:
	// lwz r30,0(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
	// lwz r27,4(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// b 0x82530418
	goto loc_82530418;
loc_825303FC:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82530410
	if (ctx.cr6.eq) goto loc_82530410;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8252e850
	ctx.lr = 0x82530410;
	sub_8252E850(ctx, base);
loc_82530410:
	// addi r30,r30,16
	ctx.r30.s64 = ctx.r30.s64 + 16;
	// addi r29,r29,16
	ctx.r29.s64 = ctx.r29.s64 + 16;
loc_82530418:
	// cmplw cr6,r30,r27
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r27.u32, ctx.xer);
	// bne cr6,0x825303fc
	if (!ctx.cr6.eq) goto loc_825303FC;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r30,4(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// subf r10,r11,r30
	ctx.r10.s64 = ctx.r30.s64 - ctx.r11.s64;
	// srawi r27,r10,4
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xF) != 0);
	ctx.r27.s64 = ctx.r10.s32 >> 4;
	// beq cr6,0x82530460
	if (ctx.cr6.eq) goto loc_82530460;
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x82530458
	if (ctx.cr6.eq) goto loc_82530458;
loc_82530444:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822e4d00
	ctx.lr = 0x8253044C;
	sub_822E4D00(ctx, base);
	// addi r29,r29,16
	ctx.r29.s64 = ctx.r29.s64 + 16;
	// cmplw cr6,r29,r30
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x82530444
	if (!ctx.cr6.eq) goto loc_82530444;
loc_82530458:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82691540
	ctx.lr = 0x82530460;
	sub_82691540(ctx, base);
loc_82530460:
	// rlwinm r11,r26,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 4) & 0xFFFFFFF0;
	// stw r28,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r28.u32);
	// rlwinm r10,r27,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 4) & 0xFFFFFFF0;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// add r10,r10,r28
	ctx.r10.u64 = ctx.r10.u64 + ctx.r28.u64;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
loc_8253047C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82fa76c0
	__restgprlr_26(ctx, base);
	return;
loc_82530484:
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
	ctx.lr = 0x825304A0;
	sub_82240040(ctx, base);
}

__attribute__((alias("__imp__sub_825304A0"))) PPC_WEAK_FUNC(sub_825304A0);
PPC_FUNC_IMPL(__imp__sub_825304A0) {
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
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x825304d8
	if (!ctx.cr6.lt) goto loc_825304D8;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplw cr6,r10,r4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r4.u32, ctx.xer);
	// li r10,1
	ctx.r10.s64 = 1;
	// ble cr6,0x825304dc
	if (!ctx.cr6.gt) goto loc_825304DC;
loc_825304D8:
	// li r10,0
	ctx.r10.s64 = 0;
loc_825304DC:
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82530520
	if (ctx.cr0.eq) goto loc_82530520;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r10,r10,r30
	ctx.r10.s64 = ctx.r30.s64 - ctx.r10.s64;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// srawi r30,r10,4
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xF) != 0);
	ctx.r30.s64 = ctx.r10.s32 >> 4;
	// bne cr6,0x82530504
	if (!ctx.cr6.eq) goto loc_82530504;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82530748
	ctx.lr = 0x82530504;
	sub_82530748(ctx, base);
loc_82530504:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82530548
	if (ctx.cr6.eq) goto loc_82530548;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r11,r30,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 4) & 0xFFFFFFF0;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x82530544
	goto loc_82530544;
loc_82530520:
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82530534
	if (!ctx.cr6.eq) goto loc_82530534;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82530748
	ctx.lr = 0x82530534;
	sub_82530748(ctx, base);
loc_82530534:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82530548
	if (ctx.cr6.eq) goto loc_82530548;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
loc_82530544:
	// bl 0x8252e850
	ctx.lr = 0x82530548;
	sub_8252E850(ctx, base);
loc_82530548:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_8253056C"))) PPC_WEAK_FUNC(sub_8253056C);
PPC_FUNC_IMPL(__imp__sub_8253056C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82530570"))) PPC_WEAK_FUNC(sub_82530570);
PPC_FUNC_IMPL(__imp__sub_82530570) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x82530578;
	__savegprlr_28(ctx, base);
	// stwu r1,-640(r1)
	ea = -640 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r31,4(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// subf r11,r10,r31
	ctx.r11.s64 = ctx.r31.s64 - ctx.r10.s64;
	// srawi r11,r11,9
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1FF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 9;
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// ble cr6,0x82530600
	if (!ctx.cr6.gt) goto loc_82530600;
	// rlwinm r11,r4,9,0,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 9) & 0xFFFFFE00;
	// add r30,r11,r10
	ctx.r30.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmplw cr6,r30,r31
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x825306dc
	if (ctx.cr6.eq) goto loc_825306DC;
	// mr r28,r31
	ctx.r28.u64 = ctx.r31.u64;
	// cmplw cr6,r31,r31
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x825305d8
	if (ctx.cr6.eq) goto loc_825305D8;
loc_825305B8:
	// li r5,512
	ctx.r5.s64 = 512;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82fa77c0
	ctx.lr = 0x825305C8;
	sub_82FA77C0(ctx, base);
	// addi r28,r28,512
	ctx.r28.s64 = ctx.r28.s64 + 512;
	// addi r30,r30,512
	ctx.r30.s64 = ctx.r30.s64 + 512;
	// cmplw cr6,r28,r31
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x825305b8
	if (!ctx.cr6.eq) goto loc_825305B8;
loc_825305D8:
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// cmplw cr6,r30,r10
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x825305f8
	if (ctx.cr6.eq) goto loc_825305F8;
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
loc_825305EC:
	// addi r11,r11,512
	ctx.r11.s64 = ctx.r11.s64 + 512;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x825305ec
	if (!ctx.cr6.eq) goto loc_825305EC;
loc_825305F8:
	// stw r30,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r30.u32);
	// b 0x825306dc
	goto loc_825306DC;
loc_82530600:
	// bge cr6,0x825306dc
	if (!ctx.cr6.lt) goto loc_825306DC;
	// lis r8,127
	ctx.r8.s64 = 8323072;
	// subf r9,r11,r28
	ctx.r9.s64 = ctx.r28.s64 - ctx.r11.s64;
	// ori r8,r8,65535
	ctx.r8.u64 = ctx.r8.u64 | 65535;
	// subf r7,r9,r8
	ctx.r7.s64 = ctx.r8.s64 - ctx.r9.s64;
	// cmplw cr6,r7,r11
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82530628
	if (!ctx.cr6.lt) goto loc_82530628;
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// addi r3,r11,31836
	ctx.r3.s64 = ctx.r11.s64 + 31836;
	// bl 0x82fa0648
	ctx.lr = 0x82530628;
	sub_82FA0648(ctx, base);
loc_82530628:
	// lwz r7,8(r29)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// subf r11,r10,r7
	ctx.r11.s64 = ctx.r7.s64 - ctx.r10.s64;
	// srawi r11,r11,9
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1FF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 9;
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x8253066c
	if (!ctx.cr6.gt) goto loc_8253066C;
	// rlwinm r10,r11,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// li r4,0
	ctx.r4.s64 = 0;
	// subf r8,r10,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r10.s64;
	// cmplw cr6,r8,r11
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82530658
	if (ctx.cr6.lt) goto loc_82530658;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_82530658:
	// cmplw cr6,r4,r9
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x82530664
	if (!ctx.cr6.lt) goto loc_82530664;
	// mr r4,r9
	ctx.r4.u64 = ctx.r9.u64;
loc_82530664:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x825307c0
	ctx.lr = 0x8253066C;
	sub_825307C0(ctx, base);
loc_8253066C:
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi r11,r11,9
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1FF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 9;
	// subf. r31,r11,r28
	ctx.r31.s64 = ctx.r28.s64 - ctx.r11.s64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x825306bc
	if (ctx.cr0.eq) goto loc_825306BC;
loc_82530688:
	// li r5,512
	ctx.r5.s64 = 512;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82fa7cf0
	ctx.lr = 0x82530698;
	sub_82FA7CF0(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x825306b0
	if (ctx.cr6.eq) goto loc_825306B0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r5,512
	ctx.r5.s64 = 512;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82fa77c0
	ctx.lr = 0x825306B0;
	sub_82FA77C0(ctx, base);
loc_825306B0:
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// addi r30,r30,512
	ctx.r30.s64 = ctx.r30.s64 + 512;
	// bne 0x82530688
	if (!ctx.cr0.eq) goto loc_82530688;
loc_825306BC:
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// subf r10,r10,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r10.s64;
	// srawi r10,r10,9
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1FF) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 9;
	// subf r10,r10,r28
	ctx.r10.s64 = ctx.r28.s64 - ctx.r10.s64;
	// rlwinm r10,r10,9,0,22
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 9) & 0xFFFFFE00;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r11,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r11.u32);
loc_825306DC:
	// addi r1,r1,640
	ctx.r1.s64 = ctx.r1.s64 + 640;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825306E4"))) PPC_WEAK_FUNC(sub_825306E4);
PPC_FUNC_IMPL(__imp__sub_825306E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825306E8"))) PPC_WEAK_FUNC(sub_825306E8);
PPC_FUNC_IMPL(__imp__sub_825306E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x825306F0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,45(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 45);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// b 0x82530738
	goto loc_82530738;
loc_82530708:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x825306e8
	ctx.lr = 0x82530714;
	sub_825306E8(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r30,12
	ctx.r3.s64 = ctx.r30.s64 + 12;
	// lwz r31,0(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x822402c8
	ctx.lr = 0x82530728;
	sub_822402C8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82691540
	ctx.lr = 0x82530730;
	sub_82691540(ctx, base);
	// lbz r11,45(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 45);
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
loc_82530738:
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82530708
	if (ctx.cr0.eq) goto loc_82530708;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82530748"))) PPC_WEAK_FUNC(sub_82530748);
PPC_FUNC_IMPL(__imp__sub_82530748) {
	PPC_FUNC_PROLOGUE();
	// lis r10,4095
	ctx.r10.s64 = 268369920;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// ori r8,r10,65534
	ctx.r8.u64 = ctx.r10.u64 | 65534;
	// subf r10,r11,r9
	ctx.r10.s64 = ctx.r9.s64 - ctx.r11.s64;
	// srawi r10,r10,4
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xF) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 4;
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// ble cr6,0x82530774
	if (!ctx.cr6.gt) goto loc_82530774;
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// addi r3,r11,31836
	ctx.r3.s64 = ctx.r11.s64 + 31836;
	// b 0x82fa0648
	sub_82FA0648(ctx, base);
	return;
loc_82530774:
	// lwz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// subf r11,r11,r9
	ctx.r11.s64 = ctx.r9.s64 - ctx.r11.s64;
	// srawi r11,r11,4
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 4;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// lis r8,4095
	ctx.r8.s64 = 268369920;
	// rlwinm r9,r11,31,1,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// ori r8,r8,65535
	ctx.r8.u64 = ctx.r8.u64 | 65535;
	// li r4,0
	ctx.r4.s64 = 0;
	// subf r8,r9,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r9.s64;
	// cmplw cr6,r8,r11
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x825307ac
	if (ctx.cr6.lt) goto loc_825307AC;
	// add r4,r9,r11
	ctx.r4.u64 = ctx.r9.u64 + ctx.r11.u64;
loc_825307AC:
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x825307b8
	if (!ctx.cr6.lt) goto loc_825307B8;
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
loc_825307B8:
	// b 0x82530388
	sub_82530388(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825307BC"))) PPC_WEAK_FUNC(sub_825307BC);
PPC_FUNC_IMPL(__imp__sub_825307BC) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_825307C0"))) PPC_WEAK_FUNC(sub_825307C0);
PPC_FUNC_IMPL(__imp__sub_825307C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7670
	ctx.lr = 0x825307C8;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,127
	ctx.r11.s64 = 8323072;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// ori r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 65535;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x825307f0
	if (!ctx.cr6.gt) goto loc_825307F0;
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// addi r3,r11,31836
	ctx.r3.s64 = ctx.r11.s64 + 31836;
	// bl 0x82fa0648
	ctx.lr = 0x825307F0;
	sub_82FA0648(ctx, base);
loc_825307F0:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// srawi r11,r11,9
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1FF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 9;
	// cmplw cr6,r11,r26
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r26.u32, ctx.xer);
	// bge cr6,0x825308b0
	if (!ctx.cr6.lt) goto loc_825308B0;
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x82530824
	if (ctx.cr6.eq) goto loc_82530824;
	// rlwinm r3,r26,9,0,22
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 9) & 0xFFFFFE00;
	// bl 0x82691500
	ctx.lr = 0x8253081C;
	sub_82691500(ctx, base);
	// mr. r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq 0x825308b8
	if (ctx.cr0.eq) goto loc_825308B8;
loc_82530824:
	// lwz r30,0(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
	// lwz r27,4(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// b 0x82530854
	goto loc_82530854;
loc_82530834:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x8253084c
	if (ctx.cr6.eq) goto loc_8253084C;
	// li r5,512
	ctx.r5.s64 = 512;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82fa77c0
	ctx.lr = 0x8253084C;
	sub_82FA77C0(ctx, base);
loc_8253084C:
	// addi r30,r30,512
	ctx.r30.s64 = ctx.r30.s64 + 512;
	// addi r29,r29,512
	ctx.r29.s64 = ctx.r29.s64 + 512;
loc_82530854:
	// cmplw cr6,r30,r27
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r27.u32, ctx.xer);
	// bne cr6,0x82530834
	if (!ctx.cr6.eq) goto loc_82530834;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// subf r10,r3,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r3.s64;
	// srawi r30,r10,9
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1FF) != 0);
	ctx.r30.s64 = ctx.r10.s32 >> 9;
	// beq cr6,0x82530894
	if (ctx.cr6.eq) goto loc_82530894;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82530890
	if (ctx.cr6.eq) goto loc_82530890;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
loc_82530884:
	// addi r10,r10,512
	ctx.r10.s64 = ctx.r10.s64 + 512;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82530884
	if (!ctx.cr6.eq) goto loc_82530884;
loc_82530890:
	// bl 0x82691540
	ctx.lr = 0x82530894;
	sub_82691540(ctx, base);
loc_82530894:
	// rlwinm r11,r26,9,0,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 9) & 0xFFFFFE00;
	// stw r28,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r28.u32);
	// rlwinm r10,r30,9,0,22
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 9) & 0xFFFFFE00;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// add r10,r10,r28
	ctx.r10.u64 = ctx.r10.u64 + ctx.r28.u64;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
loc_825308B0:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82fa76c0
	__restgprlr_26(ctx, base);
	return;
loc_825308B8:
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
	ctx.lr = 0x825308D4;
	sub_82240040(ctx, base);
}

__attribute__((alias("__imp__sub_825308D4"))) PPC_WEAK_FUNC(sub_825308D4);
PPC_FUNC_IMPL(__imp__sub_825308D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825308D8"))) PPC_WEAK_FUNC(sub_825308D8);
PPC_FUNC_IMPL(__imp__sub_825308D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7668
	ctx.lr = 0x825308E0;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,4(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// li r24,1
	ctx.r24.s64 = 1;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// addi r28,r5,12
	ctx.r28.s64 = ctx.r5.s64 + 12;
	// lwz r31,4(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r27,r24
	ctx.r27.u64 = ctx.r24.u64;
	// b 0x8253094c
	goto loc_8253094C;
loc_82530908:
	// lwz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// addi r11,r31,12
	ctx.r11.s64 = ctx.r31.s64 + 12;
	// lwz r7,28(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
	// cmplwi cr6,r10,16
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 16, ctx.xer);
	// blt cr6,0x82530924
	if (ctx.cr6.lt) goto loc_82530924;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82530924:
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// lwz r5,16(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82656348
	ctx.lr = 0x82530938;
	sub_82656348(ctx, base);
	// rlwinm. r27,r3,1,31,31
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// beq 0x82530948
	if (ctx.cr0.eq) goto loc_82530948;
	// lwz r31,0(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// b 0x8253094c
	goto loc_8253094C;
loc_82530948:
	// lwz r31,8(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
loc_8253094C:
	// lbz r11,45(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 45);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82530908
	if (ctx.cr0.eq) goto loc_82530908;
	// clrlwi. r11,r27,24
	ctx.r11.u64 = ctx.r27.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
	// beq 0x82530a20
	if (ctx.cr0.eq) goto loc_82530A20;
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x825309a0
	if (!ctx.cr6.eq) goto loc_825309A0;
	// li r5,1
	ctx.r5.s64 = 1;
loc_82530978:
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82530a90
	ctx.lr = 0x8253098C;
	sub_82530A90(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stb r24,4(r29)
	PPC_STORE_U8(ctx.r29.u32 + 4, ctx.r24.u8);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// b 0x82530a80
	goto loc_82530A80;
loc_825309A0:
	// lbz r11,45(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 45);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x825309b4
	if (ctx.cr0.eq) goto loc_825309B4;
	// lwz r31,8(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// b 0x82530a20
	goto loc_82530A20;
loc_825309B4:
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lbz r11,45(r10)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + 45);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x825309e8
	if (!ctx.cr0.eq) goto loc_825309E8;
	// lwz r11,8(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// b 0x825309d4
	goto loc_825309D4;
loc_825309CC:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
loc_825309D4:
	// lbz r9,45(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 45);
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq 0x825309cc
	if (ctx.cr0.eq) goto loc_825309CC;
	// mr r31,r10
	ctx.r31.u64 = ctx.r10.u64;
	// b 0x82530a20
	goto loc_82530A20;
loc_825309E8:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// b 0x82530a04
	goto loc_82530A04;
loc_825309F0:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r31,r10
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82530a10
	if (!ctx.cr6.eq) goto loc_82530A10;
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
loc_82530A04:
	// lbz r10,45(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 45);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x825309f0
	if (ctx.cr0.eq) goto loc_825309F0;
loc_82530A10:
	// lbz r10,45(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 45);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x82530a20
	if (!ctx.cr0.eq) goto loc_82530A20;
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
loc_82530A20:
	// lwz r11,20(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20);
	// addi r3,r31,12
	ctx.r3.s64 = ctx.r31.s64 + 12;
	// lwz r7,16(r28)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x82530a3c
	if (ctx.cr6.lt) goto loc_82530A3C;
	// lwz r6,0(r28)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// b 0x82530a40
	goto loc_82530A40;
loc_82530A3C:
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
loc_82530A40:
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r5,16(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// bl 0x82656348
	ctx.lr = 0x82530A4C;
	sub_82656348(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x82530a5c
	if (!ctx.cr0.lt) goto loc_82530A5C;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// b 0x82530978
	goto loc_82530978;
loc_82530A5C:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x822402c8
	ctx.lr = 0x82530A6C;
	sub_822402C8(ctx, base);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82691540
	ctx.lr = 0x82530A74;
	sub_82691540(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r31,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r31.u32);
	// stb r11,4(r29)
	PPC_STORE_U8(ctx.r29.u32 + 4, ctx.r11.u8);
loc_82530A80:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82fa76b8
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82530A8C"))) PPC_WEAK_FUNC(sub_82530A8C);
PPC_FUNC_IMPL(__imp__sub_82530A8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82530A90"))) PPC_WEAK_FUNC(sub_82530A90);
PPC_FUNC_IMPL(__imp__sub_82530A90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7670
	ctx.lr = 0x82530A98;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,2047
	ctx.r10.s64 = 134152192;
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// ori r10,r10,65534
	ctx.r10.u64 = ctx.r10.u64 | 65534;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82530ae0
	if (ctx.cr6.lt) goto loc_82530AE0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r7,12
	ctx.r3.s64 = ctx.r7.s64 + 12;
	// bl 0x822402c8
	ctx.lr = 0x82530ACC;
	sub_822402C8(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82691540
	ctx.lr = 0x82530AD4;
	sub_82691540(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r3,r11,-26596
	ctx.r3.s64 = ctx.r11.s64 + -26596;
	// bl 0x82fa0648
	ctx.lr = 0x82530AE0;
	sub_82FA0648(ctx, base);
loc_82530AE0:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// stw r6,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r6.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplw cr6,r6,r11
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82530b0c
	if (!ctx.cr6.eq) goto loc_82530B0C;
	// stw r28,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r28.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r28,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r28.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// b 0x82530b44
	goto loc_82530B44;
loc_82530B0C:
	// clrlwi. r11,r5,24
	ctx.r11.u64 = ctx.r5.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82530b30
	if (ctx.cr0.eq) goto loc_82530B30;
	// stw r28,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r28.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r6,r10
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82530b48
	if (!ctx.cr6.eq) goto loc_82530B48;
	// stw r28,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r28.u32);
	// b 0x82530b48
	goto loc_82530B48;
loc_82530B30:
	// stw r28,8(r6)
	PPC_STORE_U32(ctx.r6.u32 + 8, ctx.r28.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplw cr6,r6,r10
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82530b48
	if (!ctx.cr6.eq) goto loc_82530B48;
loc_82530B44:
	// stw r28,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r28.u32);
loc_82530B48:
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
	// li r29,1
	ctx.r29.s64 = 1;
	// lbz r11,44(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 44);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82530c48
	if (!ctx.cr0.eq) goto loc_82530C48;
	// li r27,0
	ctx.r27.s64 = 0;
loc_82530B64:
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82530bc8
	if (!ctx.cr6.eq) goto loc_82530BC8;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lbz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 44);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x82530bd8
	if (ctx.cr0.eq) goto loc_82530BD8;
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82530ba0
	if (!ctx.cr6.eq) goto loc_82530BA0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x82555c98
	ctx.lr = 0x82530BA0;
	sub_82555C98(ctx, base);
loc_82530BA0:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stb r29,44(r11)
	PPC_STORE_U8(ctx.r11.u32 + 44, ctx.r29.u8);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stb r27,44(r11)
	PPC_STORE_U8(ctx.r11.u32 + 44, ctx.r27.u8);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82555d00
	ctx.lr = 0x82530BC4;
	sub_82555D00(ctx, base);
	// b 0x82530c38
	goto loc_82530C38;
loc_82530BC8:
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lbz r10,44(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 44);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne 0x82530bfc
	if (!ctx.cr0.eq) goto loc_82530BFC;
loc_82530BD8:
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stb r29,44(r10)
	PPC_STORE_U8(ctx.r10.u32 + 44, ctx.r29.u8);
	// stb r29,44(r11)
	PPC_STORE_U8(ctx.r11.u32 + 44, ctx.r29.u8);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stb r27,44(r11)
	PPC_STORE_U8(ctx.r11.u32 + 44, ctx.r27.u8);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r31,4(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x82530c38
	goto loc_82530C38;
loc_82530BFC:
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82530c14
	if (!ctx.cr6.eq) goto loc_82530C14;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x82555d00
	ctx.lr = 0x82530C14;
	sub_82555D00(ctx, base);
loc_82530C14:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stb r29,44(r11)
	PPC_STORE_U8(ctx.r11.u32 + 44, ctx.r29.u8);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stb r27,44(r11)
	PPC_STORE_U8(ctx.r11.u32 + 44, ctx.r27.u8);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82555c98
	ctx.lr = 0x82530C38;
	sub_82555C98(ctx, base);
loc_82530C38:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lbz r11,44(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 44);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82530b64
	if (ctx.cr0.eq) goto loc_82530B64;
loc_82530C48:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// stw r28,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r28.u32);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stb r29,44(r11)
	PPC_STORE_U8(ctx.r11.u32 + 44, ctx.r29.u8);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82fa76c0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82530C64"))) PPC_WEAK_FUNC(sub_82530C64);
PPC_FUNC_IMPL(__imp__sub_82530C64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82530C68"))) PPC_WEAK_FUNC(sub_82530C68);
PPC_FUNC_IMPL(__imp__sub_82530C68) {
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
	// bne cr6,0x82530cb0
	if (!ctx.cr6.eq) goto loc_82530CB0;
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x82691500
	ctx.lr = 0x82530C8C;
	sub_82691500(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne 0x82530cb0
	if (!ctx.cr0.eq) goto loc_82530CB0;
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
	ctx.lr = 0x82530CB0;
	sub_82240040(ctx, base);
loc_82530CB0:
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r11,r11,13792
	ctx.r11.s64 = ctx.r11.s64 + 13792;
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

__attribute__((alias("__imp__sub_82530CDC"))) PPC_WEAK_FUNC(sub_82530CDC);
PPC_FUNC_IMPL(__imp__sub_82530CDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82530CE0"))) PPC_WEAK_FUNC(sub_82530CE0);
PPC_FUNC_IMPL(__imp__sub_82530CE0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r10,128(r11)
	PPC_STORE_U32(ctx.r11.u32 + 128, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82530CF0"))) PPC_WEAK_FUNC(sub_82530CF0);
PPC_FUNC_IMPL(__imp__sub_82530CF0) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31966
	ctx.r11.s64 = -2094923776;
	// addi r3,r11,-27304
	ctx.r3.s64 = ctx.r11.s64 + -27304;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82530CFC"))) PPC_WEAK_FUNC(sub_82530CFC);
PPC_FUNC_IMPL(__imp__sub_82530CFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82530D00"))) PPC_WEAK_FUNC(sub_82530D00);
PPC_FUNC_IMPL(__imp__sub_82530D00) {
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
	// bne cr6,0x82530d48
	if (!ctx.cr6.eq) goto loc_82530D48;
	// li r3,8
	ctx.r3.s64 = 8;
	// bl 0x82691500
	ctx.lr = 0x82530D24;
	sub_82691500(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne 0x82530d48
	if (!ctx.cr0.eq) goto loc_82530D48;
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
	ctx.lr = 0x82530D48;
	sub_82240040(ctx, base);
loc_82530D48:
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r11,r11,13816
	ctx.r11.s64 = ctx.r11.s64 + 13816;
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

__attribute__((alias("__imp__sub_82530D74"))) PPC_WEAK_FUNC(sub_82530D74);
PPC_FUNC_IMPL(__imp__sub_82530D74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82530D78"))) PPC_WEAK_FUNC(sub_82530D78);
PPC_FUNC_IMPL(__imp__sub_82530D78) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r10,124(r11)
	PPC_STORE_U32(ctx.r11.u32 + 124, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82530D88"))) PPC_WEAK_FUNC(sub_82530D88);
PPC_FUNC_IMPL(__imp__sub_82530D88) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31966
	ctx.r11.s64 = -2094923776;
	// addi r3,r11,-27264
	ctx.r3.s64 = ctx.r11.s64 + -27264;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82530D94"))) PPC_WEAK_FUNC(sub_82530D94);
PPC_FUNC_IMPL(__imp__sub_82530D94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82530D98"))) PPC_WEAK_FUNC(sub_82530D98);
PPC_FUNC_IMPL(__imp__sub_82530D98) {
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
	// bne cr6,0x82530de0
	if (!ctx.cr6.eq) goto loc_82530DE0;
	// li r3,12
	ctx.r3.s64 = 12;
	// bl 0x82691500
	ctx.lr = 0x82530DBC;
	sub_82691500(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne 0x82530de0
	if (!ctx.cr0.eq) goto loc_82530DE0;
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
	ctx.lr = 0x82530DE0;
	sub_82240040(ctx, base);
loc_82530DE0:
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r11,r11,13840
	ctx.r11.s64 = ctx.r11.s64 + 13840;
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

__attribute__((alias("__imp__sub_82530E14"))) PPC_WEAK_FUNC(sub_82530E14);
PPC_FUNC_IMPL(__imp__sub_82530E14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82530E18"))) PPC_WEAK_FUNC(sub_82530E18);
PPC_FUNC_IMPL(__imp__sub_82530E18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31966
	ctx.r11.s64 = -2094923776;
	// addi r3,r11,-27224
	ctx.r3.s64 = ctx.r11.s64 + -27224;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82530E24"))) PPC_WEAK_FUNC(sub_82530E24);
PPC_FUNC_IMPL(__imp__sub_82530E24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82530E28"))) PPC_WEAK_FUNC(sub_82530E28);
PPC_FUNC_IMPL(__imp__sub_82530E28) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7674
	ctx.lr = 0x82530E30;
	__savegprlr_27(ctx, base);
	// stwu r1,-752(r1)
	ea = -752 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32209
	ctx.r11.s64 = -2110849024;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r11,r11,29152
	ctx.r11.s64 = ctx.r11.s64 + 29152;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r30,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r30.u32);
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82530e5c
	if (!ctx.cr6.eq) goto loc_82530E5C;
	// stw r30,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r30.u32);
	// b 0x82530e74
	goto loc_82530E74;
loc_82530E5C:
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// stw r11,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r11.u32);
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
	// addi r10,r10,6380
	ctx.r10.s64 = ctx.r10.s64 + 6380;
	// stw r11,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r11.u32);
	// stw r10,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r10.u32);
loc_82530E74:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r30,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r30.u32);
	// addi r10,r1,160
	ctx.r10.s64 = ctx.r1.s64 + 160;
	// stw r30,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r30.u32);
	// addi r9,r1,128
	ctx.r9.s64 = ctx.r1.s64 + 128;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82518b28
	ctx.lr = 0x82530EA8;
	sub_82518B28(ctx, base);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// addi r11,r11,13944
	ctx.r11.s64 = ctx.r11.s64 + 13944;
	// addi r10,r10,5228
	ctx.r10.s64 = ctx.r10.s64 + 5228;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r29,r31,368
	ctx.r29.s64 = ctx.r31.s64 + 368;
	// stw r10,344(r31)
	PPC_STORE_U32(ctx.r31.u32 + 344, ctx.r10.u32);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r28,r31,344
	ctx.r28.s64 = ctx.r31.s64 + 344;
	// bl 0x8226c200
	ctx.lr = 0x82530ED4;
	sub_8226C200(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r8,-32117
	ctx.r8.s64 = -2104819712;
	// stw r30,392(r31)
	PPC_STORE_U32(ctx.r31.u32 + 392, ctx.r30.u32);
	// lis r10,-32173
	ctx.r10.s64 = -2108489728;
	// stw r30,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r30.u32);
	// lis r9,-32117
	ctx.r9.s64 = -2104819712;
	// stw r30,400(r31)
	PPC_STORE_U32(ctx.r31.u32 + 400, ctx.r30.u32);
	// addi r10,r10,4600
	ctx.r10.s64 = ctx.r10.s64 + 4600;
	// stw r30,408(r31)
	PPC_STORE_U32(ctx.r31.u32 + 408, ctx.r30.u32);
	// lfs f0,-2340(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -2340);
	ctx.f0.f64 = double(temp.f32);
	// addi r9,r9,9280
	ctx.r9.s64 = ctx.r9.s64 + 9280;
	// addi r11,r8,9280
	ctx.r11.s64 = ctx.r8.s64 + 9280;
	// stfs f0,404(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 404, temp.u32);
	// stw r31,348(r31)
	PPC_STORE_U32(ctx.r31.u32 + 348, ctx.r31.u32);
	// stw r10,352(r31)
	PPC_STORE_U32(ctx.r31.u32 + 352, ctx.r10.u32);
	// stw r9,356(r31)
	PPC_STORE_U32(ctx.r31.u32 + 356, ctx.r9.u32);
	// stw r11,360(r31)
	PPC_STORE_U32(ctx.r31.u32 + 360, ctx.r11.u32);
	// stw r28,176(r31)
	PPC_STORE_U32(ctx.r31.u32 + 176, ctx.r28.u32);
	// bl 0x8226c3f0
	ctx.lr = 0x82530F20;
	sub_8226C3F0(ctx, base);
	// lwz r11,68(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// addi r10,r10,-28112
	ctx.r10.s64 = ctx.r10.s64 + -28112;
	// addi r8,r1,128
	ctx.r8.s64 = ctx.r1.s64 + 128;
	// stw r9,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r9.u32);
	// stw r10,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r10.u32);
	// stw r8,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r8.u32);
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// bl 0x8226d8e8
	ctx.lr = 0x82530F48;
	sub_8226D8E8(ctx, base);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// bl 0x8226ee40
	ctx.lr = 0x82530F50;
	sub_8226EE40(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// bl 0x82531108
	ctx.lr = 0x82530F5C;
	sub_82531108(ctx, base);
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// li r5,510
	ctx.r5.s64 = 510;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,194
	ctx.r3.s64 = ctx.r1.s64 + 194;
	// lhz r11,31944(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 31944);
	// sth r11,192(r1)
	PPC_STORE_U16(ctx.r1.u32 + 192, ctx.r11.u16);
	// bl 0x82fa7cf0
	ctx.lr = 0x82530F78;
	sub_82FA7CF0(ctx, base);
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// addi r11,r11,21076
	ctx.r11.s64 = ctx.r11.s64 + 21076;
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r4,r10,-7760
	ctx.r4.s64 = ctx.r10.s64 + -7760;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,256
	ctx.r6.s64 = 256;
	// addi r5,r1,192
	ctx.r5.s64 = ctx.r1.s64 + 192;
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x8259c8e0
	ctx.lr = 0x82530FA0;
	sub_8259C8E0(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,152
	ctx.r3.s64 = ctx.r1.s64 + 152;
	// bl 0x82519160
	ctx.lr = 0x82530FAC;
	sub_82519160(ctx, base);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r11,-32172
	ctx.r11.s64 = -2108424192;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r11,256
	ctx.r4.s64 = ctx.r11.s64 + 256;
	// bl 0x826a80e0
	ctx.lr = 0x82530FC0;
	sub_826A80E0(ctx, base);
	// lwz r3,156(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82530fd0
	if (ctx.cr6.eq) goto loc_82530FD0;
	// bl 0x82241d18
	ctx.lr = 0x82530FD0;
	sub_82241D18(ctx, base);
loc_82530FD0:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// stw r30,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r30.u32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8226c200
	ctx.lr = 0x82530FE0;
	sub_8226C200(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r6,r1,160
	ctx.r6.s64 = ctx.r1.s64 + 160;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r8,1
	ctx.r8.s64 = 1;
	// bl 0x82524730
	ctx.lr = 0x82530FFC;
	sub_82524730(ctx, base);
	// stw r3,400(r31)
	PPC_STORE_U32(ctx.r31.u32 + 400, ctx.r3.u32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82f91940
	ctx.lr = 0x82531008;
	sub_82F91940(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,752
	ctx.r1.s64 = ctx.r1.s64 + 752;
	// b 0x82fa76c4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82531014"))) PPC_WEAK_FUNC(sub_82531014);
PPC_FUNC_IMPL(__imp__sub_82531014) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82531018"))) PPC_WEAK_FUNC(sub_82531018);
PPC_FUNC_IMPL(__imp__sub_82531018) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x82531020;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,400(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 400);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r11,r11,13944
	ctx.r11.s64 = ctx.r11.s64 + 13944;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// beq cr6,0x82531050
	if (ctx.cr6.eq) goto loc_82531050;
	// bl 0x82524840
	ctx.lr = 0x8253104C;
	sub_82524840(ctx, base);
	// stw r30,400(r31)
	PPC_STORE_U32(ctx.r31.u32 + 400, ctx.r30.u32);
loc_82531050:
	// lwz r3,396(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 396);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8253106c
	if (ctx.cr6.eq) goto loc_8253106C;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8253d820
	ctx.lr = 0x82531068;
	sub_8253D820(ctx, base);
	// stw r30,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r30.u32);
loc_8253106C:
	// addi r3,r31,368
	ctx.r3.s64 = ctx.r31.s64 + 368;
	// bl 0x82f91940
	ctx.lr = 0x82531074;
	sub_82F91940(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82518fd0
	ctx.lr = 0x8253107C;
	sub_82518FD0(ctx, base);
	// clrlwi. r11,r29,31
	ctx.r11.u64 = ctx.r29.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8253108c
	if (ctx.cr0.eq) goto loc_8253108C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82691540
	ctx.lr = 0x8253108C;
	sub_82691540(ctx, base);
loc_8253108C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82531098"))) PPC_WEAK_FUNC(sub_82531098);
PPC_FUNC_IMPL(__imp__sub_82531098) {
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
	// lfs f0,404(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 404);
	ctx.f0.f64 = double(temp.f32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fadds f0,f1,f0
	ctx.f0.f64 = double(float(ctx.f1.f64 + ctx.f0.f64));
	// stfs f0,404(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 404, temp.u32);
	// bl 0x82519310
	ctx.lr = 0x825310BC;
	sub_82519310(ctx, base);
	// lwz r11,392(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 392);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x825310f0
	if (ctx.cr6.eq) goto loc_825310F0;
	// lwz r10,384(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 384);
	// addi r11,r31,368
	ctx.r11.s64 = ctx.r31.s64 + 368;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x825310dc
	if (!ctx.cr6.eq) goto loc_825310DC;
	// bl 0x82fa1518
	ctx.lr = 0x825310DC;
	sub_82FA1518(ctx, base);
loc_825310DC:
	// lwz r3,16(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825310F0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_825310F0:
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

__attribute__((alias("__imp__sub_82531104"))) PPC_WEAK_FUNC(sub_82531104);
PPC_FUNC_IMPL(__imp__sub_82531104) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82531108"))) PPC_WEAK_FUNC(sub_82531108);
PPC_FUNC_IMPL(__imp__sub_82531108) {
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
	// li r10,3
	ctx.r10.s64 = 3;
	// addi r11,r1,84
	ctx.r11.s64 = ctx.r1.s64 + 84;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// li r10,0
	ctx.r10.s64 = 0;
loc_82531134:
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// stwu r10,16(r11)
	ea = 16 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x82531134
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82531134;
	// li r4,2
	ctx.r4.s64 = 2;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x822e4d50
	ctx.lr = 0x8253114C;
	sub_822E4D50(ctx, base);
	// cntlzw r11,r31
	ctx.r11.u64 = ctx.r31.u32 == 0 ? 32 : __builtin_clz(ctx.r31.u32);
	// li r4,2
	ctx.r4.s64 = 2;
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stb r11,104(r1)
	PPC_STORE_U8(ctx.r1.u32 + 104, ctx.r11.u8);
	// bl 0x822e4d50
	ctx.lr = 0x82531164;
	sub_822E4D50(ctx, base);
	// addi r11,r31,-1
	ctx.r11.s64 = ctx.r31.s64 + -1;
	// li r4,2
	ctx.r4.s64 = 2;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// stb r11,120(r1)
	PPC_STORE_U8(ctx.r1.u32 + 120, ctx.r11.u8);
	// bl 0x822e4d50
	ctx.lr = 0x82531180;
	sub_822E4D50(ctx, base);
	// addi r11,r31,-2
	ctx.r11.s64 = ctx.r31.s64 + -2;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// stb r11,136(r1)
	PPC_STORE_U8(ctx.r1.u32 + 136, ctx.r11.u8);
	// bl 0x82519160
	ctx.lr = 0x8253119C;
	sub_82519160(ctx, base);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// li r6,3
	ctx.r6.s64 = 3;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r11,13864
	ctx.r4.s64 = ctx.r11.s64 + 13864;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// bl 0x826a7620
	ctx.lr = 0x825311B4;
	sub_826A7620(ctx, base);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x825311c4
	if (ctx.cr6.eq) goto loc_825311C4;
	// bl 0x82241d18
	ctx.lr = 0x825311C4;
	sub_82241D18(ctx, base);
loc_825311C4:
	// addi r31,r1,144
	ctx.r31.s64 = ctx.r1.s64 + 144;
	// li r30,2
	ctx.r30.s64 = 2;
loc_825311CC:
	// addi r31,r31,-16
	ctx.r31.s64 = ctx.r31.s64 + -16;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822e4d00
	ctx.lr = 0x825311D8;
	sub_822E4D00(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge 0x825311cc
	if (!ctx.cr0.lt) goto loc_825311CC;
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

__attribute__((alias("__imp__sub_825311F8"))) PPC_WEAK_FUNC(sub_825311F8);
PPC_FUNC_IMPL(__imp__sub_825311F8) {
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
	// stwu r1,-3248(r1)
	ea = -3248 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplwi cr6,r4,1
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 1, ctx.xer);
	// blt cr6,0x82531238
	if (ctx.cr6.lt) goto loc_82531238;
	// beq cr6,0x82531230
	if (ctx.cr6.eq) goto loc_82531230;
	// cmplwi cr6,r4,3
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 3, ctx.xer);
	// bge cr6,0x8253123c
	if (!ctx.cr6.lt) goto loc_8253123C;
	// li r31,2
	ctx.r31.s64 = 2;
	// b 0x8253123c
	goto loc_8253123C;
loc_82531230:
	// li r31,1
	ctx.r31.s64 = 1;
	// b 0x8253123c
	goto loc_8253123C;
loc_82531238:
	// li r31,0
	ctx.r31.s64 = 0;
loc_8253123C:
	// bl 0x8226c3f0
	ctx.lr = 0x82531240;
	sub_8226C3F0(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// addi r11,r11,-28088
	ctx.r11.s64 = ctx.r11.s64 + -28088;
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// stw r10,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// stw r9,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r9.u32);
	// bl 0x8226d8e8
	ctx.lr = 0x82531264;
	sub_8226D8E8(ctx, base);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// bl 0x8226ee40
	ctx.lr = 0x8253126C;
	sub_8226EE40(ctx, base);
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmpw cr6,r11,r31
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r31.s32, ctx.xer);
	// bne cr6,0x825312c4
	if (!ctx.cr6.eq) goto loc_825312C4;
	// bl 0x8226c3f0
	ctx.lr = 0x8253127C;
	sub_8226C3F0(ctx, base);
	// lwz r11,68(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	// stw r31,68(r3)
	PPC_STORE_U32(ctx.r3.u32 + 68, ctx.r31.u32);
	// subf r11,r11,r31
	ctx.r11.s64 = ctx.r31.s64 - ctx.r11.s64;
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r11,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825312a0
	if (ctx.cr0.eq) goto loc_825312A0;
	// bl 0x828edab8
	ctx.lr = 0x8253129C;
	sub_828EDAB8(ctx, base);
	// bl 0x828ed528
	ctx.lr = 0x825312A0;
	sub_828ED528(ctx, base);
loc_825312A0:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82531108
	ctx.lr = 0x825312AC;
	sub_82531108(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825191a8
	ctx.lr = 0x825312B8;
	sub_825191A8(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,392(r30)
	PPC_STORE_U32(ctx.r30.u32 + 392, ctx.r11.u32);
	// b 0x825313d0
	goto loc_825313D0;
loc_825312C4:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825191a8
	ctx.lr = 0x825312D0;
	sub_825191A8(ctx, base);
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// li r5,510
	ctx.r5.s64 = 510;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,658
	ctx.r3.s64 = ctx.r1.s64 + 658;
	// lhz r31,31944(r11)
	ctx.r31.u64 = PPC_LOAD_U16(ctx.r11.u32 + 31944);
	// sth r31,656(r1)
	PPC_STORE_U16(ctx.r1.u32 + 656, ctx.r31.u16);
	// bl 0x82fa7cf0
	ctx.lr = 0x825312EC;
	sub_82FA7CF0(ctx, base);
	// li r5,2046
	ctx.r5.s64 = 2046;
	// sth r31,1168(r1)
	PPC_STORE_U16(ctx.r1.u32 + 1168, ctx.r31.u16);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,1170
	ctx.r3.s64 = ctx.r1.s64 + 1170;
	// bl 0x82fa7cf0
	ctx.lr = 0x82531300;
	sub_82FA7CF0(ctx, base);
	// li r5,510
	ctx.r5.s64 = 510;
	// li r4,0
	ctx.r4.s64 = 0;
	// sth r31,144(r1)
	PPC_STORE_U16(ctx.r1.u32 + 144, ctx.r31.u16);
	// addi r3,r1,146
	ctx.r3.s64 = ctx.r1.s64 + 146;
	// bl 0x82fa7cf0
	ctx.lr = 0x82531314;
	sub_82FA7CF0(ctx, base);
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// addi r31,r11,21076
	ctx.r31.s64 = ctx.r11.s64 + 21076;
	// addi r4,r10,13892
	ctx.r4.s64 = ctx.r10.s64 + 13892;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,256
	ctx.r6.s64 = 256;
	// addi r5,r1,656
	ctx.r5.s64 = ctx.r1.s64 + 656;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x8259c8e0
	ctx.lr = 0x8253133C;
	sub_8259C8E0(ctx, base);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// li r8,1
	ctx.r8.s64 = 1;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r4,r11,13920
	ctx.r4.s64 = ctx.r11.s64 + 13920;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,1024
	ctx.r6.s64 = 1024;
	// addi r5,r1,1168
	ctx.r5.s64 = ctx.r1.s64 + 1168;
	// bl 0x8259c8e0
	ctx.lr = 0x8253135C;
	sub_8259C8E0(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// li r8,1
	ctx.r8.s64 = 1;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r4,r11,-8476
	ctx.r4.s64 = ctx.r11.s64 + -8476;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,256
	ctx.r6.s64 = 256;
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// bl 0x8259c8e0
	ctx.lr = 0x8253137C;
	sub_8259C8E0(ctx, base);
	// li r3,1076
	ctx.r3.s64 = 1076;
	// bl 0x82691500
	ctx.lr = 0x82531384;
	sub_82691500(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x825313c8
	if (ctx.cr0.eq) goto loc_825313C8;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// lis r8,-32173
	ctx.r8.s64 = -2108489728;
	// addi r11,r11,5228
	ctx.r11.s64 = ctx.r11.s64 + 5228;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,1052(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1052, ctx.r11.u32);
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// addi r8,r8,5112
	ctx.r8.s64 = ctx.r8.s64 + 5112;
	// addi r6,r1,144
	ctx.r6.s64 = ctx.r1.s64 + 144;
	// addi r5,r1,1168
	ctx.r5.s64 = ctx.r1.s64 + 1168;
	// addi r4,r1,656
	ctx.r4.s64 = ctx.r1.s64 + 656;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253d420
	ctx.lr = 0x825313C4;
	sub_8253D420(ctx, base);
	// b 0x825313cc
	goto loc_825313CC;
loc_825313C8:
	// li r31,0
	ctx.r31.s64 = 0;
loc_825313CC:
	// stw r31,396(r30)
	PPC_STORE_U32(ctx.r30.u32 + 396, ctx.r31.u32);
loc_825313D0:
	// bl 0x825143c8
	ctx.lr = 0x825313D4;
	sub_825143C8(ctx, base);
	// lwz r11,408(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 408);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,408(r30)
	PPC_STORE_U32(ctx.r30.u32 + 408, ctx.r11.u32);
	// addi r1,r1,3248
	ctx.r1.s64 = ctx.r1.s64 + 3248;
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

__attribute__((alias("__imp__sub_825313F8"))) PPC_WEAK_FUNC(sub_825313F8);
PPC_FUNC_IMPL(__imp__sub_825313F8) {
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
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825191a8
	ctx.lr = 0x82531420;
	sub_825191A8(ctx, base);
	// lwz r3,396(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 396);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82531448
	if (ctx.cr6.eq) goto loc_82531448;
	// cmpwi cr6,r30,2
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 2, ctx.xer);
	// beq cr6,0x82531440
	if (ctx.cr6.eq) goto loc_82531440;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x8253d820
	ctx.lr = 0x82531440;
	sub_8253D820(ctx, base);
loc_82531440:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r11.u32);
loc_82531448:
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

__attribute__((alias("__imp__sub_82531460"))) PPC_WEAK_FUNC(sub_82531460);
PPC_FUNC_IMPL(__imp__sub_82531460) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7674
	ctx.lr = 0x82531468;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-31968
	ctx.r10.s64 = -2095054848;
	// fmr f11,f1
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = ctx.f1.f64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// addi r27,r10,24756
	ctx.r27.s64 = ctx.r10.s64 + 24756;
	// lfs f2,-2340(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -2340);
	ctx.f2.f64 = double(temp.f32);
	// blt cr6,0x82531554
	if (ctx.cr6.lt) goto loc_82531554;
	// beq cr6,0x82531534
	if (ctx.cr6.eq) goto loc_82531534;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// blt cr6,0x825314e4
	if (ctx.cr6.lt) goto loc_825314E4;
	// bne cr6,0x8253157c
	if (!ctx.cr6.eq) goto loc_8253157C;
	// lfs f0,20(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// lwz r9,16(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// fadds f1,f0,f1
	ctx.f1.f64 = double(float(ctx.f0.f64 + ctx.f1.f64));
	// stfs f1,20(r3)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 20, temp.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// lfs f3,12(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	ctx.f3.f64 = double(temp.f32);
	// fcmpu cr6,f1,f3
	ctx.cr6.compare(ctx.f1.f64, ctx.f3.f64);
	// bge cr6,0x825314c4
	if (!ctx.cr6.lt) goto loc_825314C4;
	// li r10,0
	ctx.r10.s64 = 0;
loc_825314C4:
	// lfs f5,4(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,8(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	ctx.f4.f64 = double(temp.f32);
	// bl 0x8255b868
	ctx.lr = 0x825314D0;
	sub_8255B868(ctx, base);
	// stfs f1,64(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 64, temp.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8253157c
	if (ctx.cr6.eq) goto loc_8253157C;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82531524
	goto loc_82531524;
loc_825314E4:
	// lfs f0,20(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// lwz r9,16(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// fadds f1,f0,f11
	ctx.f1.f64 = double(float(ctx.f0.f64 + ctx.f11.f64));
	// stfs f1,20(r31)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 20, temp.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// lfs f3,12(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	ctx.f3.f64 = double(temp.f32);
	// fcmpu cr6,f1,f3
	ctx.cr6.compare(ctx.f1.f64, ctx.f3.f64);
	// bge cr6,0x82531508
	if (!ctx.cr6.lt) goto loc_82531508;
	// li r10,0
	ctx.r10.s64 = 0;
loc_82531508:
	// lfs f5,8(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	ctx.f5.f64 = double(temp.f32);
	// lfs f4,4(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	ctx.f4.f64 = double(temp.f32);
	// bl 0x8255b868
	ctx.lr = 0x82531514;
	sub_8255B868(ctx, base);
	// stfs f1,64(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 64, temp.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x8253157c
	if (ctx.cr6.eq) goto loc_8253157C;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82531524:
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lfs f0,12(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,20(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 20, temp.u32);
	// b 0x8253157c
	goto loc_8253157C;
loc_82531534:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lfs f0,4(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,64(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 64, temp.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8253157c
	if (!ctx.cr6.eq) goto loc_8253157C;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r10,2
	ctx.r10.s64 = 2;
	// b 0x82531570
	goto loc_82531570;
loc_82531554:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lfs f0,8(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,64(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 64, temp.u32);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x8253157c
	if (!ctx.cr6.eq) goto loc_8253157C;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r10,3
	ctx.r10.s64 = 3;
loc_82531570:
	// stfs f2,20(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r31.u32 + 20, temp.u32);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
loc_8253157C:
	// lfs f0,80(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// fadds f13,f0,f11
	ctx.f13.f64 = double(float(ctx.f0.f64 + ctx.f11.f64));
	// stfs f13,80(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 80, temp.u32);
	// lfs f0,12(r27)
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x82531634
	if (!ctx.cr6.lt) goto loc_82531634;
	// lfs f12,92(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,84(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	ctx.f0.f64 = double(temp.f32);
	// fdivs f11,f0,f12
	ctx.f11.f64 = double(float(ctx.f0.f64 / ctx.f12.f64));
	// fcmpu cr6,f13,f11
	ctx.cr6.compare(ctx.f13.f64, ctx.f11.f64);
	// bge cr6,0x825315bc
	if (!ctx.cr6.lt) goto loc_825315BC;
	// fmuls f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// fsel f13,f13,f13,f2
	ctx.f13.f64 = ctx.f13.f64 >= 0.0 ? ctx.f13.f64 : ctx.f2.f64;
	// fsubs f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// fsel f0,f12,f0,f13
	ctx.f0.f64 = ctx.f12.f64 >= 0.0 ? ctx.f0.f64 : ctx.f13.f64;
	// b 0x825315dc
	goto loc_825315DC;
loc_825315BC:
	// fsubs f0,f13,f11
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f13.f64 - ctx.f11.f64));
	// lfs f13,112(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// fneg f1,f0
	ctx.f1.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// bl 0x82fa4be8
	ctx.lr = 0x825315D0;
	sub_82FA4BE8(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// lfs f13,84(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
loc_825315DC:
	// stfs f0,88(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 88, temp.u32);
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// lfs f0,116(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	ctx.f0.f64 = double(temp.f32);
	// lis r10,-31967
	ctx.r10.s64 = -2094989312;
	// lfs f13,80(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// lfs f0,21800(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 21800);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,-11544(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -11544);
	ctx.f13.f64 = double(temp.f32);
	// fmadds f1,f12,f0,f13
	ctx.f1.f64 = double(float(ctx.f12.f64 * ctx.f0.f64 + ctx.f13.f64));
	// bl 0x8283c088
	ctx.lr = 0x82531604;
	sub_8283C088(ctx, base);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// lfs f0,88(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
	// li r10,96
	ctx.r10.s64 = 96;
	// fmuls f0,f1,f0
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// addi r28,r31,128
	ctx.r28.s64 = ctx.r31.s64 + 128;
	// lvlx v0,0,r11
	temp.u32 = ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw v0,v0,0
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0xFF));
	// lvx128 v13,r31,r10
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r31.u32 + ctx.r10.u32) & ~0xF), VectorMaskL));
	// vmulfp128 v0,v13,v0
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v0.f32, _mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v0.f32)));
	// stvx128 v0,r0,r28
	_mm_store_si128((__m128i*)(base + ((ctx.r28.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// b 0x8253163c
	goto loc_8253163C;
loc_82531634:
	// addi r28,r31,128
	ctx.r28.s64 = ctx.r31.s64 + 128;
	// stvx128 v77,r0,r28
	_mm_store_si128((__m128i*)(base + ((ctx.r28.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v77.u8), _mm_load_si128((__m128i*)VectorMaskL)));
loc_8253163C:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r30,r31,32
	ctx.r30.s64 = ctx.r31.s64 + 32;
	// lwz r6,0(r27)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lfs f1,20(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f1.f64 = double(temp.f32);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// addi r29,r11,4
	ctx.r29.s64 = ctx.r11.s64 + 4;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x825b33d8
	ctx.lr = 0x82531660;
	sub_825B33D8(ctx, base);
	// addi r5,r31,48
	ctx.r5.s64 = ctx.r31.s64 + 48;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r6,0(r27)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lfs f1,20(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x825b34c0
	ctx.lr = 0x82531674;
	sub_825B34C0(ctx, base);
	// lvx128 v0,r0,r30
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r30.u32) & ~0xF), VectorMaskL));
	// lvx128 v13,r0,r28
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r28.u32) & ~0xF), VectorMaskL));
	// vaddfp v0,v0,v13
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v13.f32)));
	// stvx128 v0,r0,r30
	_mm_store_si128((__m128i*)(base + ((ctx.r30.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82fa76c4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8253168C"))) PPC_WEAK_FUNC(sub_8253168C);
PPC_FUNC_IMPL(__imp__sub_8253168C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82531690"))) PPC_WEAK_FUNC(sub_82531690);
PPC_FUNC_IMPL(__imp__sub_82531690) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7660
	ctx.lr = 0x82531698;
	__savegprlr_22(ctx, base);
	// stfd f31,-96(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -96, ctx.f31.u64);
	// li r12,-112
	ctx.r12.s64 = -112;
	// stvx128 v127,r1,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r1.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v127.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// vor128 v127,v1,v1
	_mm_store_si128((__m128i*)ctx.v127.u8, _mm_load_si128((__m128i*)ctx.v1.u8));
	// li r5,488
	ctx.r5.s64 = 488;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// mr r25,r8
	ctx.r25.u64 = ctx.r8.u64;
	// mr r24,r10
	ctx.r24.u64 = ctx.r10.u64;
	// bl 0x82fa77c0
	ctx.lr = 0x825316D0;
	sub_82FA77C0(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// stfs f31,1536(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1536, temp.u32);
	// stfs f31,92(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// lwz r9,92(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// addi r23,r11,-2340
	ctx.r23.s64 = ctx.r11.s64 + -2340;
	// lfs f13,112(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	ctx.f13.f64 = double(temp.f32);
	// li r8,1520
	ctx.r8.s64 = 1520;
	// lfs f12,116(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	ctx.f12.f64 = double(temp.f32);
	// lis r7,-31958
	ctx.r7.s64 = -2094399488;
	// fsubs f12,f12,f13
	ctx.f12.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// lfs f31,-2340(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -2340);
	ctx.f31.f64 = double(temp.f32);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// stfs f31,88(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stfs f31,96(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lis r6,25
	ctx.r6.s64 = 1638400;
	// stvx128 v127,r31,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32 + ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v127.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r30,0
	ctx.r30.s64 = 0;
	// li r10,2
	ctx.r10.s64 = 2;
	// lfs f0,-24756(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -24756);
	ctx.f0.f64 = double(temp.f32);
	// ori r6,r6,26125
	ctx.r6.u64 = ctx.r6.u64 | 26125;
	// stw r30,492(r31)
	PPC_STORE_U32(ctx.r31.u32 + 492, ctx.r30.u32);
	// stw r10,488(r31)
	PPC_STORE_U32(ctx.r31.u32 + 488, ctx.r10.u32);
	// li r8,1680
	ctx.r8.s64 = 1680;
	// stw r10,1504(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1504, ctx.r10.u32);
	// addic r10,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r10.s64 = ctx.r29.s64 + -1;
	// stw r30,1508(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1508, ctx.r30.u32);
	// li r22,1
	ctx.r22.s64 = 1;
	// subfe r10,r10,r29
	temp.u8 = (~ctx.r10.u32 + ctx.r29.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r29.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r29.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// lwz r11,21292(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 21292);
	// mullw r11,r11,r6
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r6.s32);
	// addis r11,r11,15471
	ctx.r11.s64 = ctx.r11.s64 + 1013907456;
	// addi r11,r11,-3233
	ctx.r11.s64 = ctx.r11.s64 + -3233;
	// clrlwi r6,r11,9
	ctx.r6.u64 = ctx.r11.u32 & 0x7FFFFF;
	// stw r11,21292(r7)
	PPC_STORE_U32(ctx.r7.u32 + 21292, ctx.r11.u32);
	// stfs f31,1544(r31)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1544, temp.u32);
	// stw r30,1548(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1548, ctx.r30.u32);
	// oris r11,r6,16256
	ctx.r11.u64 = ctx.r6.u64 | 1065353216;
	// stvx128 v127,r31,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32 + ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v127.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stw r30,1552(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1552, ctx.r30.u32);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lfs f11,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f0,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 - ctx.f0.f64));
	// stw r10,1556(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1556, ctx.r10.u32);
	// fmadds f0,f12,f0,f13
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f0.f64 + ctx.f13.f64));
	// stfs f0,1540(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1540, temp.u32);
	// stw r30,1560(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1560, ctx.r30.u32);
	// stw r30,1564(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1564, ctx.r30.u32);
	// stw r22,1568(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1568, ctx.r22.u32);
	// stw r30,1572(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1572, ctx.r30.u32);
	// stw r30,1576(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1576, ctx.r30.u32);
	// stw r30,1580(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1580, ctx.r30.u32);
	// stw r30,1584(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1584, ctx.r30.u32);
	// stw r30,1588(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1588, ctx.r30.u32);
	// stw r30,1596(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1596, ctx.r30.u32);
	// stw r5,1696(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1696, ctx.r5.u32);
	// stw r9,1700(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1700, ctx.r9.u32);
	// stw r4,1704(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1704, ctx.r4.u32);
	// stw r30,1708(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1708, ctx.r30.u32);
	// stw r30,1712(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1712, ctx.r30.u32);
	// bne cr6,0x825317d4
	if (!ctx.cr6.eq) goto loc_825317D4;
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// addi r28,r11,31460
	ctx.r28.s64 = ctx.r11.s64 + 31460;
loc_825317D4:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// addi r28,r31,504
	ctx.r28.s64 = ctx.r31.s64 + 504;
	// addi r27,r31,500
	ctx.r27.s64 = ctx.r31.s64 + 500;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// li r5,1000
	ctx.r5.s64 = 1000;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r11,500(r31)
	PPC_STORE_U32(ctx.r31.u32 + 500, ctx.r11.u32);
	// beq cr6,0x82531800
	if (ctx.cr6.eq) goto loc_82531800;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82a75198
	ctx.lr = 0x825317FC;
	sub_82A75198(ctx, base);
	// b 0x82531808
	goto loc_82531808;
loc_82531800:
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82a75988
	ctx.lr = 0x82531808;
	sub_82A75988(ctx, base);
loc_82531808:
	// lwz r11,1556(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1556);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8253185c
	if (ctx.cr6.eq) goto loc_8253185C;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82533068
	ctx.lr = 0x82531824;
	sub_82533068(ctx, base);
	// lis r3,3
	ctx.r3.s64 = 196608;
	// ori r3,r3,6592
	ctx.r3.u64 = ctx.r3.u64 | 6592;
	// bl 0x82691500
	ctx.lr = 0x82531830;
	sub_82691500(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82531898
	if (ctx.cr0.eq) goto loc_82531898;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,1
	ctx.r9.s64 = 1;
	// mr r8,r24
	ctx.r8.u64 = ctx.r24.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r31,1636
	ctx.r6.s64 = ctx.r31.s64 + 1636;
	// addi r5,r31,1600
	ctx.r5.s64 = ctx.r31.s64 + 1600;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x825578f8
	ctx.lr = 0x82531858;
	sub_825578F8(ctx, base);
	// b 0x8253189c
	goto loc_8253189C;
loc_8253185C:
	// li r5,72
	ctx.r5.s64 = 72;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,1600
	ctx.r3.s64 = ctx.r31.s64 + 1600;
	// bl 0x82a75988
	ctx.lr = 0x8253186C;
	sub_82A75988(ctx, base);
	// li r3,512
	ctx.r3.s64 = 512;
	// bl 0x82691500
	ctx.lr = 0x82531874;
	sub_82691500(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82531898
	if (ctx.cr0.eq) goto loc_82531898;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x8257f968
	ctx.lr = 0x82531894;
	sub_8257F968(ctx, base);
	// b 0x8253189c
	goto loc_8253189C;
loc_82531898:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_8253189C:
	// lwz r11,488(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 488);
	// stw r3,1596(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1596, ctx.r3.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x825318b0
	if (ctx.cr6.eq) goto loc_825318B0;
	// stw r30,488(r31)
	PPC_STORE_U32(ctx.r31.u32 + 488, ctx.r30.u32);
loc_825318B0:
	// stfs f31,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stfs f31,92(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// lwz r9,92(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// stfs f31,96(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// li r3,224
	ctx.r3.s64 = 224;
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// bl 0x82691500
	ctx.lr = 0x825318DC;
	sub_82691500(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82531930
	if (ctx.cr0.eq) goto loc_82531930;
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// lvlx v0,0,r23
	temp.u32 = ctx.r23.u32;
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vor v12,v0,v0
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_load_si128((__m128i*)ctx.v0.u8));
	// lis r10,-32231
	ctx.r10.s64 = -2112290816;
	// addi r11,r11,9320
	ctx.r11.s64 = ctx.r11.s64 + 9320;
	// vor v13,v0,v0
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_load_si128((__m128i*)ctx.v0.u8));
	// addi r10,r10,27984
	ctx.r10.s64 = ctx.r10.s64 + 27984;
	// lwz r6,1596(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1596);
	// addi r7,r1,88
	ctx.r7.s64 = ctx.r1.s64 + 88;
	// vrlimi128 v12,v0,4,3
	_mm_store_ps(ctx.v12.f32, _mm_blend_ps(_mm_load_ps(ctx.v12.f32), _mm_permute_ps(_mm_load_ps(ctx.v0.f32), 57), 4));
	// lvlx v0,0,r11
	temp.u32 = ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vrlimi128 v13,v0,4,3
	_mm_store_ps(ctx.v13.f32, _mm_blend_ps(_mm_load_ps(ctx.v13.f32), _mm_permute_ps(_mm_load_ps(ctx.v0.f32), 57), 4));
	// lfs f2,2484(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2484);
	ctx.f2.f64 = double(temp.f32);
	// lfs f3,2488(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 2488);
	ctx.f3.f64 = double(temp.f32);
	// fmr f1,f2
	ctx.f1.f64 = ctx.f2.f64;
	// vor v1,v13,v13
	_mm_store_si128((__m128i*)ctx.v1.u8, _mm_load_si128((__m128i*)ctx.v13.u8));
	// vrlimi128 v1,v12,3,2
	_mm_store_ps(ctx.v1.f32, _mm_blend_ps(_mm_load_ps(ctx.v1.f32), _mm_permute_ps(_mm_load_ps(ctx.v12.f32), 78), 3));
	// bl 0x82521fd8
	ctx.lr = 0x8253192C;
	sub_82521FD8(ctx, base);
	// b 0x82531934
	goto loc_82531934;
loc_82531930:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_82531934:
	// lis r10,-31957
	ctx.r10.s64 = -2094333952;
	// stw r3,1716(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1716, ctx.r3.u32);
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r22,1720(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1720, ctx.r22.u32);
	// stw r30,1724(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1724, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,1732(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1732, ctx.r11.u32);
	// stw r30,1728(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1728, ctx.r30.u32);
	// lwz r11,23016(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 23016);
	// stw r11,1592(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1592, ctx.r11.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,23016(r10)
	PPC_STORE_U32(ctx.r10.u32 + 23016, ctx.r11.u32);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// li r0,-112
	ctx.r0.s64 = -112;
	// lvx128 v127,r1,r0
	simd::store_shuffled(ctx.v127, simd::load_and_shuffle(base + ((ctx.r1.u32 + ctx.r0.u32) & ~0xF), VectorMaskL));
	// lfd f31,-96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// b 0x82fa76b0
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82531978"))) PPC_WEAK_FUNC(sub_82531978);
PPC_FUNC_IMPL(__imp__sub_82531978) {
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
	// lwz r11,1508(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1508);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x825319ac
	if (ctx.cr6.eq) goto loc_825319AC;
	// lwz r3,1596(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1596);
	// bl 0x8250f4b0
	ctx.lr = 0x825319A8;
	sub_8250F4B0(ctx, base);
	// stw r30,1508(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1508, ctx.r30.u32);
loc_825319AC:
	// lwz r3,1596(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1596);
	// lwz r4,1708(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1708);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,84(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825319C4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,1712(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1712);
	// stw r30,1708(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1708, ctx.r30.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x825319e8
	if (ctx.cr6.eq) goto loc_825319E8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825319E8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_825319E8:
	// lwz r3,1728(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1728);
	// stw r30,1712(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1712, ctx.r30.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82531a0c
	if (ctx.cr6.eq) goto loc_82531A0C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82531A0C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82531A0C:
	// stw r30,1728(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1728, ctx.r30.u32);
	// lwz r3,1596(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1596);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82531A24;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,1596(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1596);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82531a44
	if (ctx.cr6.eq) goto loc_82531A44;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82531A44;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82531A44:
	// lwz r3,1716(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1716);
	// stw r30,1596(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1596, ctx.r30.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82531a5c
	if (ctx.cr6.eq) goto loc_82531A5C;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82309b90
	ctx.lr = 0x82531A5C;
	sub_82309B90(ctx, base);
loc_82531A5C:
	// stw r30,1716(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1716, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82533930
	ctx.lr = 0x82531A68;
	sub_82533930(ctx, base);
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

__attribute__((alias("__imp__sub_82531A80"))) PPC_WEAK_FUNC(sub_82531A80);
PPC_FUNC_IMPL(__imp__sub_82531A80) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	PPCVRegister vTemp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7640
	ctx.lr = 0x82531A88;
	__savegprlr_14(ctx, base);
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x82fa8d20
	ctx.lr = 0x82531A90;
	__savefpr_26(ctx, base);
	// addi r12,r1,-208
	ctx.r12.s64 = ctx.r1.s64 + -208;
	// bl 0x82fac14c
	ctx.lr = 0x82531A98;
	__savevmx_123(ctx, base);
	// stwu r1,-528(r1)
	ea = -528 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,1596(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1596);
	// fmr f26,f1
	ctx.fpscr.disableFlushMode();
	ctx.f26.f64 = ctx.f1.f64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82531AB8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82531ad8
	if (!ctx.cr0.eq) goto loc_82531AD8;
	// lwz r3,1596(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1596);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82531AD4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82532690
	goto loc_82532690;
loc_82531AD8:
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// lwz r31,1708(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1708);
	// lis r27,-31955
	ctx.r27.s64 = -2094202880;
	// addi r21,r11,-2152
	ctx.r21.s64 = ctx.r11.s64 + -2152;
	// lis r26,-31955
	ctx.r26.s64 = -2094202880;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r10,r27,30544
	ctx.r10.s64 = ctx.r27.s64 + 30544;
	// addi r9,r26,30528
	ctx.r9.s64 = ctx.r26.s64 + 30528;
	// lis r4,-32231
	ctx.r4.s64 = -2112290816;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// lis r29,-32229
	ctx.r29.s64 = -2112159744;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// lis r28,-31955
	ctx.r28.s64 = -2094202880;
	// lfs f30,-2340(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -2340);
	ctx.f30.f64 = double(temp.f32);
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lfs f28,0(r21)
	temp.u32 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	ctx.f28.f64 = double(temp.f32);
	// lis r10,-32231
	ctx.r10.s64 = -2112290816;
	// lis r9,-32231
	ctx.r9.s64 = -2112290816;
	// lis r8,-32231
	ctx.r8.s64 = -2112290816;
	// lis r7,-32231
	ctx.r7.s64 = -2112290816;
	// lis r6,-32231
	ctx.r6.s64 = -2112290816;
	// lis r5,-32231
	ctx.r5.s64 = -2112290816;
	// lis r3,-32229
	ctx.r3.s64 = -2112159744;
	// lis r25,-31955
	ctx.r25.s64 = -2094202880;
	// lis r24,-31955
	ctx.r24.s64 = -2094202880;
	// lis r23,-31955
	ctx.r23.s64 = -2094202880;
	// addi r4,r4,31008
	ctx.r4.s64 = ctx.r4.s64 + 31008;
	// addi r29,r29,-27088
	ctx.r29.s64 = ctx.r29.s64 + -27088;
	// addi r28,r28,30560
	ctx.r28.s64 = ctx.r28.s64 + 30560;
	// stw r4,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r4.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// stw r29,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r29.u32);
	// lis r22,-31955
	ctx.r22.s64 = -2094202880;
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// addi r20,r11,31512
	ctx.r20.s64 = ctx.r11.s64 + 31512;
	// addi r19,r10,30896
	ctx.r19.s64 = ctx.r10.s64 + 30896;
	// addi r18,r9,30944
	ctx.r18.s64 = ctx.r9.s64 + 30944;
	// addi r17,r8,30880
	ctx.r17.s64 = ctx.r8.s64 + 30880;
	// addi r16,r7,30928
	ctx.r16.s64 = ctx.r7.s64 + 30928;
	// addi r15,r6,30864
	ctx.r15.s64 = ctx.r6.s64 + 30864;
	// addi r14,r5,30912
	ctx.r14.s64 = ctx.r5.s64 + 30912;
	// addi r31,r3,-27072
	ctx.r31.s64 = ctx.r3.s64 + -27072;
	// addi r25,r25,30512
	ctx.r25.s64 = ctx.r25.s64 + 30512;
	// addi r26,r24,30496
	ctx.r26.s64 = ctx.r24.s64 + 30496;
	// addi r27,r23,30480
	ctx.r27.s64 = ctx.r23.s64 + 30480;
	// bne cr6,0x82531c44
	if (!ctx.cr6.eq) goto loc_82531C44;
	// lwz r3,1596(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1596);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,76(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82531BA4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,1708(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1708, ctx.r3.u32);
	// li r3,416
	ctx.r3.s64 = 416;
	// bl 0x82827e80
	ctx.lr = 0x82531BB0;
	sub_82827E80(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82531bcc
	if (ctx.cr0.eq) goto loc_82531BCC;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,1708(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1708);
	// bl 0x825672a0
	ctx.lr = 0x82531BC4;
	sub_825672A0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82531bd0
	goto loc_82531BD0;
loc_82531BCC:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82531BD0:
	// stw r4,1712(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1712, ctx.r4.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,18
	ctx.r6.s64 = 18;
	// lwz r3,1708(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1708);
	// fmr f1,f30
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f30.f64;
	// bl 0x8282a7b0
	ctx.lr = 0x82531BE8;
	sub_8282A7B0(ctx, base);
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// fmr f2,f28
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f28.f64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// bl 0x82532cf8
	ctx.lr = 0x82531C00;
	sub_82532CF8(ctx, base);
loc_82531C00:
	// lwz r23,112(r1)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
loc_82531C04:
	// lwz r11,1720(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1720);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82532074
	if (ctx.cr6.eq) goto loc_82532074;
	// lwz r11,1724(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1724);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82531c2c
	if (!ctx.cr6.eq) goto loc_82531C2C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82533ee8
	ctx.lr = 0x82531C24;
	sub_82533EE8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82533fb0
	ctx.lr = 0x82531C2C;
	sub_82533FB0(ctx, base);
loc_82531C2C:
	// lwz r4,1732(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1732);
	// lwz r3,1716(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1716);
	// bl 0x825220e8
	ctx.lr = 0x82531C38;
	sub_825220E8(ctx, base);
	// li r24,0
	ctx.r24.s64 = 0;
	// stw r24,1720(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1720, ctx.r24.u32);
	// b 0x82532078
	goto loc_82532078;
loc_82531C44:
	// lwz r11,1504(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1504);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82531c00
	if (!ctx.cr6.gt) goto loc_82531C00;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,1504(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1504, ctx.r11.u32);
	// bgt 0x82531c00
	if (ctx.cr0.gt) goto loc_82531C00;
	// lwz r11,1508(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1508);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82531c00
	if (!ctx.cr6.eq) goto loc_82531C00;
	// lwz r11,30468(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 30468);
	// addi r10,r30,1696
	ctx.r10.s64 = ctx.r30.s64 + 1696;
	// clrlwi. r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82531ca8
	if (!ctx.cr0.eq) goto loc_82531CA8;
	// li r9,16
	ctx.r9.s64 = 16;
	// lvlx v0,0,r31
	temp.u32 = ctx.r31.u32;
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r8,r1,128
	ctx.r8.s64 = ctx.r1.s64 + 128;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stw r11,30468(r22)
	PPC_STORE_U32(ctx.r22.u32 + 30468, ctx.r11.u32);
	// lvlx v13,r31,r9
	temp.u32 = ctx.r31.u32 + ctx.r9.u32;
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vrlimi128 v0,v13,4,3
	_mm_store_ps(ctx.v0.f32, _mm_blend_ps(_mm_load_ps(ctx.v0.f32), _mm_permute_ps(_mm_load_ps(ctx.v13.f32), 57), 4));
	// vrlimi128 v0,v13,2,2
	_mm_store_ps(ctx.v0.f32, _mm_blend_ps(_mm_load_ps(ctx.v0.f32), _mm_permute_ps(_mm_load_ps(ctx.v13.f32), 78), 2));
	// vrlimi128 v0,v13,1,1
	_mm_store_ps(ctx.v0.f32, _mm_blend_ps(_mm_load_ps(ctx.v0.f32), _mm_permute_ps(_mm_load_ps(ctx.v13.f32), 147), 1));
	// stvx128 v0,r0,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v0,r0,r27
	_mm_store_si128((__m128i*)(base + ((ctx.r27.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// b 0x82531cb4
	goto loc_82531CB4;
loc_82531CA8:
	// addi r9,r1,128
	ctx.r9.s64 = ctx.r1.s64 + 128;
	// lvx128 v0,r0,r27
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r27.u32) & ~0xF), VectorMaskL));
	// stvx128 v0,r0,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
loc_82531CB4:
	// rlwinm. r9,r11,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82531cf4
	if (!ctx.cr0.eq) goto loc_82531CF4;
	// li r9,20
	ctx.r9.s64 = 20;
	// li r8,4
	ctx.r8.s64 = 4;
	// addi r7,r1,176
	ctx.r7.s64 = ctx.r1.s64 + 176;
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// lvlx v13,r31,r9
	temp.u32 = ctx.r31.u32 + ctx.r9.u32;
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// stw r11,30468(r22)
	PPC_STORE_U32(ctx.r22.u32 + 30468, ctx.r11.u32);
	// vor v0,v13,v13
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_load_si128((__m128i*)ctx.v13.u8));
	// lvlx v12,r31,r8
	temp.u32 = ctx.r31.u32 + ctx.r8.u32;
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vrlimi128 v0,v12,4,3
	_mm_store_ps(ctx.v0.f32, _mm_blend_ps(_mm_load_ps(ctx.v0.f32), _mm_permute_ps(_mm_load_ps(ctx.v12.f32), 57), 4));
	// vrlimi128 v0,v13,2,2
	_mm_store_ps(ctx.v0.f32, _mm_blend_ps(_mm_load_ps(ctx.v0.f32), _mm_permute_ps(_mm_load_ps(ctx.v13.f32), 78), 2));
	// vrlimi128 v0,v13,1,1
	_mm_store_ps(ctx.v0.f32, _mm_blend_ps(_mm_load_ps(ctx.v0.f32), _mm_permute_ps(_mm_load_ps(ctx.v13.f32), 147), 1));
	// stvx128 v0,r0,r7
	_mm_store_si128((__m128i*)(base + ((ctx.r7.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v0,r0,r26
	_mm_store_si128((__m128i*)(base + ((ctx.r26.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// b 0x82531d00
	goto loc_82531D00;
loc_82531CF4:
	// addi r9,r1,176
	ctx.r9.s64 = ctx.r1.s64 + 176;
	// lvx128 v0,r0,r26
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r26.u32) & ~0xF), VectorMaskL));
	// stvx128 v0,r0,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
loc_82531D00:
	// rlwinm. r9,r11,0,29,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82531d40
	if (!ctx.cr0.eq) goto loc_82531D40;
	// li r9,24
	ctx.r9.s64 = 24;
	// li r8,8
	ctx.r8.s64 = 8;
	// addi r7,r1,160
	ctx.r7.s64 = ctx.r1.s64 + 160;
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
	// lvlx v13,r31,r9
	temp.u32 = ctx.r31.u32 + ctx.r9.u32;
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// stw r11,30468(r22)
	PPC_STORE_U32(ctx.r22.u32 + 30468, ctx.r11.u32);
	// vor v0,v13,v13
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_load_si128((__m128i*)ctx.v13.u8));
	// lvlx v12,r31,r8
	temp.u32 = ctx.r31.u32 + ctx.r8.u32;
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vrlimi128 v0,v13,4,3
	_mm_store_ps(ctx.v0.f32, _mm_blend_ps(_mm_load_ps(ctx.v0.f32), _mm_permute_ps(_mm_load_ps(ctx.v13.f32), 57), 4));
	// vrlimi128 v0,v12,2,2
	_mm_store_ps(ctx.v0.f32, _mm_blend_ps(_mm_load_ps(ctx.v0.f32), _mm_permute_ps(_mm_load_ps(ctx.v12.f32), 78), 2));
	// vrlimi128 v0,v13,1,1
	_mm_store_ps(ctx.v0.f32, _mm_blend_ps(_mm_load_ps(ctx.v0.f32), _mm_permute_ps(_mm_load_ps(ctx.v13.f32), 147), 1));
	// stvx128 v0,r0,r7
	_mm_store_si128((__m128i*)(base + ((ctx.r7.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v0,r0,r25
	_mm_store_si128((__m128i*)(base + ((ctx.r25.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// b 0x82531d4c
	goto loc_82531D4C;
loc_82531D40:
	// addi r9,r1,160
	ctx.r9.s64 = ctx.r1.s64 + 160;
	// lvx128 v0,r0,r25
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r25.u32) & ~0xF), VectorMaskL));
	// stvx128 v0,r0,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
loc_82531D4C:
	// rlwinm. r9,r11,0,28,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bne 0x82531d88
	if (!ctx.cr0.eq) goto loc_82531D88;
	// li r8,16
	ctx.r8.s64 = 16;
	// lvlx v13,0,r31
	temp.u32 = ctx.r31.u32;
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r7,r1,144
	ctx.r7.s64 = ctx.r1.s64 + 144;
	// ori r11,r11,8
	ctx.r11.u64 = ctx.r11.u64 | 8;
	// stw r11,30468(r22)
	PPC_STORE_U32(ctx.r22.u32 + 30468, ctx.r11.u32);
	// lvlx v0,r31,r8
	temp.u32 = ctx.r31.u32 + ctx.r8.u32;
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vrlimi128 v0,v13,4,3
	_mm_store_ps(ctx.v0.f32, _mm_blend_ps(_mm_load_ps(ctx.v0.f32), _mm_permute_ps(_mm_load_ps(ctx.v13.f32), 57), 4));
	// vrlimi128 v0,v13,2,2
	_mm_store_ps(ctx.v0.f32, _mm_blend_ps(_mm_load_ps(ctx.v0.f32), _mm_permute_ps(_mm_load_ps(ctx.v13.f32), 78), 2));
	// vrlimi128 v0,v13,1,1
	_mm_store_ps(ctx.v0.f32, _mm_blend_ps(_mm_load_ps(ctx.v0.f32), _mm_permute_ps(_mm_load_ps(ctx.v13.f32), 147), 1));
	// stvx128 v0,r0,r7
	_mm_store_si128((__m128i*)(base + ((ctx.r7.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v0,r0,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// b 0x82531d94
	goto loc_82531D94;
loc_82531D88:
	// addi r8,r1,144
	ctx.r8.s64 = ctx.r1.s64 + 144;
	// lvx128 v0,r0,r9
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// stvx128 v0,r0,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
loc_82531D94:
	// rlwinm. r9,r11,0,27,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// lwz r9,92(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// bne 0x82531dd8
	if (!ctx.cr0.eq) goto loc_82531DD8;
	// li r8,4
	ctx.r8.s64 = 4;
	// li r7,20
	ctx.r7.s64 = 20;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// ori r11,r11,16
	ctx.r11.u64 = ctx.r11.u64 | 16;
	// lvlx v13,r31,r8
	temp.u32 = ctx.r31.u32 + ctx.r8.u32;
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// stw r11,30468(r22)
	PPC_STORE_U32(ctx.r22.u32 + 30468, ctx.r11.u32);
	// vor v0,v13,v13
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_load_si128((__m128i*)ctx.v13.u8));
	// lvlx v12,r31,r7
	temp.u32 = ctx.r31.u32 + ctx.r7.u32;
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vrlimi128 v0,v12,4,3
	_mm_store_ps(ctx.v0.f32, _mm_blend_ps(_mm_load_ps(ctx.v0.f32), _mm_permute_ps(_mm_load_ps(ctx.v12.f32), 57), 4));
	// vrlimi128 v0,v13,2,2
	_mm_store_ps(ctx.v0.f32, _mm_blend_ps(_mm_load_ps(ctx.v0.f32), _mm_permute_ps(_mm_load_ps(ctx.v13.f32), 78), 2));
	// vrlimi128 v0,v13,1,1
	_mm_store_ps(ctx.v0.f32, _mm_blend_ps(_mm_load_ps(ctx.v0.f32), _mm_permute_ps(_mm_load_ps(ctx.v13.f32), 147), 1));
	// stvx128 v0,r0,r6
	_mm_store_si128((__m128i*)(base + ((ctx.r6.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v0,r0,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// b 0x82531de4
	goto loc_82531DE4;
loc_82531DD8:
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// lvx128 v0,r0,r9
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// stvx128 v0,r0,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
loc_82531DE4:
	// rlwinm. r9,r11,0,26,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82531e24
	if (!ctx.cr0.eq) goto loc_82531E24;
	// li r9,8
	ctx.r9.s64 = 8;
	// li r8,24
	ctx.r8.s64 = 24;
	// ori r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 | 32;
	// stw r11,30468(r22)
	PPC_STORE_U32(ctx.r22.u32 + 30468, ctx.r11.u32);
	// lvlx v0,r31,r9
	temp.u32 = ctx.r31.u32 + ctx.r9.u32;
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// vor v13,v0,v0
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_load_si128((__m128i*)ctx.v0.u8));
	// lvlx v12,r31,r8
	temp.u32 = ctx.r31.u32 + ctx.r8.u32;
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vrlimi128 v13,v0,4,3
	_mm_store_ps(ctx.v13.f32, _mm_blend_ps(_mm_load_ps(ctx.v13.f32), _mm_permute_ps(_mm_load_ps(ctx.v0.f32), 57), 4));
	// vor v2,v13,v13
	_mm_store_si128((__m128i*)ctx.v2.u8, _mm_load_si128((__m128i*)ctx.v13.u8));
	// vrlimi128 v2,v12,2,2
	_mm_store_ps(ctx.v2.f32, _mm_blend_ps(_mm_load_ps(ctx.v2.f32), _mm_permute_ps(_mm_load_ps(ctx.v12.f32), 78), 2));
	// vrlimi128 v2,v0,1,1
	_mm_store_ps(ctx.v2.f32, _mm_blend_ps(_mm_load_ps(ctx.v2.f32), _mm_permute_ps(_mm_load_ps(ctx.v0.f32), 147), 1));
	// stvx128 v2,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v2.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// b 0x82531e2c
	goto loc_82531E2C;
loc_82531E24:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lvx128 v2,r0,r11
	simd::store_shuffled(ctx.v2, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
loc_82531E2C:
	// li r11,12
	ctx.r11.s64 = 12;
	// lvx128 v11,r0,r14
	simd::store_shuffled(ctx.v11, simd::load_and_shuffle(base + ((ctx.r14.u32) & ~0xF), VectorMaskL));
	// lvlx v9,0,r10
	temp.u32 = ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v9.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vor128 v6,v67,v67
	_mm_store_si128((__m128i*)ctx.v6.u8, _mm_load_si128((__m128i*)ctx.v67.u8));
	// vspltw v4,v11,1
	_mm_store_si128((__m128i*)ctx.v4.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v11.u32), 0xAA));
	// vor128 v8,v77,v77
	_mm_store_si128((__m128i*)ctx.v8.u8, _mm_load_si128((__m128i*)ctx.v77.u8));
	// vspltw v31,v11,2
	_mm_store_si128((__m128i*)ctx.v31.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v11.u32), 0x55));
	// lvlx v13,0,r20
	temp.u32 = ctx.r20.u32;
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw v26,v11,3
	_mm_store_si128((__m128i*)ctx.v26.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v11.u32), 0x0));
	// lwz r23,112(r1)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// lvrx v10,r11,r10
	temp.u32 = ctx.r11.u32 + ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v10.u8, temp.u32 & 0xF ? _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : _mm_setzero_si128());
	// vspltw v3,v13,0
	_mm_store_si128((__m128i*)ctx.v3.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v13.u32), 0xFF));
	// vspltisw v16,0
	_mm_store_si128((__m128i*)ctx.v16.u32, _mm_set1_epi32(int(0x0)));
	// lvx128 v0,r0,r16
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r16.u32) & ~0xF), VectorMaskL));
	// vsldoi v11,v10,v10,4
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_alignr_epi8(_mm_load_si128((__m128i*)ctx.v10.u8), _mm_load_si128((__m128i*)ctx.v10.u8), 12));
	// lvx128 v12,r0,r17
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((ctx.r17.u32) & ~0xF), VectorMaskL));
	// vspltw v23,v0,0
	_mm_store_si128((__m128i*)ctx.v23.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0xFF));
	// lvx128 v10,r0,r15
	simd::store_shuffled(ctx.v10, simd::load_and_shuffle(base + ((ctx.r15.u32) & ~0xF), VectorMaskL));
	// lvx128 v13,r0,r23
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r23.u32) & ~0xF), VectorMaskL));
	// vspltw v21,v0,1
	_mm_store_si128((__m128i*)ctx.v21.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0xAA));
	// vspltw v19,v0,2
	_mm_store_si128((__m128i*)ctx.v19.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0x55));
	// vor v9,v9,v11
	_mm_store_si128((__m128i*)ctx.v9.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v9.u8), _mm_load_si128((__m128i*)ctx.v11.u8)));
	// vspltw v25,v0,3
	_mm_store_si128((__m128i*)ctx.v25.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0x0));
	// vupkd3d128 v0,v16,4
	temp.f32 = 3.0f;
	temp.s32 += ctx.v16.s16[1];
	vTemp.f32[3] = temp.f32;
	temp.f32 = 3.0f;
	temp.s32 += ctx.v16.s16[0];
	vTemp.f32[2] = temp.f32;
	vTemp.f32[1] = 0.0f;
	vTemp.f32[0] = 1.0f;
	ctx.v0 = vTemp;
	// vspltw v17,v13,3
	_mm_store_si128((__m128i*)ctx.v17.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v13.u32), 0x0));
	// vspltw v7,v13,1
	_mm_store_si128((__m128i*)ctx.v7.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v13.u32), 0xAA));
	// lvx128 v13,r0,r18
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r18.u32) & ~0xF), VectorMaskL));
	// vsel v11,v9,v8,v6
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v6.u8), _mm_load_si128((__m128i*)ctx.v9.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v6.u8), _mm_load_si128((__m128i*)ctx.v8.u8))));
	// vspltw v28,v10,1
	_mm_store_si128((__m128i*)ctx.v28.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v10.u32), 0xAA));
	// vspltw v1,v0,3
	_mm_store_si128((__m128i*)ctx.v1.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0x0));
	// vspltw v5,v13,1
	_mm_store_si128((__m128i*)ctx.v5.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v13.u32), 0xAA));
	// vspltw v30,v13,0
	_mm_store_si128((__m128i*)ctx.v30.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v13.u32), 0xFF));
	// vmulfp128 v11,v11,v3
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v11.f32, _mm_mul_ps(_mm_load_ps(ctx.v11.f32), _mm_load_ps(ctx.v3.f32)));
	// vspltw v29,v13,2
	_mm_store_si128((__m128i*)ctx.v29.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v13.u32), 0x55));
	// vspltw v3,v13,3
	_mm_store_si128((__m128i*)ctx.v3.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v13.u32), 0x0));
	// vspltw v24,v10,2
	_mm_store_si128((__m128i*)ctx.v24.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v10.u32), 0x55));
	// vspltw v27,v12,2
	_mm_store_si128((__m128i*)ctx.v27.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v12.u32), 0x55));
	// vspltw v22,v10,3
	_mm_store_si128((__m128i*)ctx.v22.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v10.u32), 0x0));
	// vspltw v20,v12,0
	_mm_store_si128((__m128i*)ctx.v20.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v12.u32), 0xFF));
	// vspltw v18,v12,1
	_mm_store_si128((__m128i*)ctx.v18.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v12.u32), 0xAA));
	// vspltw v6,v12,3
	_mm_store_si128((__m128i*)ctx.v6.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v12.u32), 0x0));
	// vmulfp128 v0,v11,v17
	_mm_store_ps(ctx.v0.f32, _mm_mul_ps(_mm_load_ps(ctx.v11.f32), _mm_load_ps(ctx.v17.f32)));
	// vrfin v0,v0
	_mm_store_ps(ctx.v0.f32, _mm_round_ps(_mm_load_ps(ctx.v0.f32), _MM_FROUND_TO_NEAREST_INT | _MM_FROUND_NO_EXC));
	// vnmsubfp v9,v7,v0,v11
	_mm_store_ps(ctx.v9.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(ctx.v7.f32), _mm_load_ps(ctx.v0.f32)), _mm_load_ps(ctx.v11.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// vmulfp128 v0,v9,v9
	_mm_store_ps(ctx.v0.f32, _mm_mul_ps(_mm_load_ps(ctx.v9.f32), _mm_load_ps(ctx.v9.f32)));
	// vmaddfp v10,v4,v0,v1
	_mm_store_ps(ctx.v10.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v4.f32), _mm_load_ps(ctx.v0.f32)), _mm_load_ps(ctx.v1.f32)));
	// vmulfp128 v13,v0,v9
	_mm_store_ps(ctx.v13.f32, _mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v9.f32)));
	// vmulfp128 v12,v0,v0
	_mm_store_ps(ctx.v12.f32, _mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v0.f32)));
	// vmulfp128 v11,v13,v13
	_mm_store_ps(ctx.v11.f32, _mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v13.f32)));
	// vmaddfp v7,v31,v12,v10
	_mm_store_ps(ctx.v7.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v31.f32), _mm_load_ps(ctx.v12.f32)), _mm_load_ps(ctx.v10.f32)));
	// vmaddfp v4,v28,v13,v9
	_mm_store_ps(ctx.v4.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v28.f32), _mm_load_ps(ctx.v13.f32)), _mm_load_ps(ctx.v9.f32)));
	// vmulfp128 v0,v13,v0
	_mm_store_ps(ctx.v0.f32, _mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v0.f32)));
	// vmulfp128 v10,v12,v12
	_mm_store_ps(ctx.v10.f32, _mm_mul_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v12.f32)));
	// vmulfp128 v13,v12,v13
	_mm_store_ps(ctx.v13.f32, _mm_mul_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v13.f32)));
	// vmulfp128 v8,v11,v11
	_mm_store_ps(ctx.v8.f32, _mm_mul_ps(_mm_load_ps(ctx.v11.f32), _mm_load_ps(ctx.v11.f32)));
	// vmaddfp v7,v26,v11,v7
	_mm_store_ps(ctx.v7.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v26.f32), _mm_load_ps(ctx.v11.f32)), _mm_load_ps(ctx.v7.f32)));
	// vmaddfp v4,v24,v0,v4
	_mm_store_ps(ctx.v4.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v24.f32), _mm_load_ps(ctx.v0.f32)), _mm_load_ps(ctx.v4.f32)));
	// vmulfp128 v9,v0,v0
	_mm_store_ps(ctx.v9.f32, _mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v0.f32)));
	// vmulfp128 v12,v0,v12
	_mm_store_ps(ctx.v12.f32, _mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v12.f32)));
	// vmulfp128 v28,v13,v11
	_mm_store_ps(ctx.v28.f32, _mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v11.f32)));
	// vmulfp128 v0,v11,v0
	_mm_store_ps(ctx.v0.f32, _mm_mul_ps(_mm_load_ps(ctx.v11.f32), _mm_load_ps(ctx.v0.f32)));
	// vmulfp128 v11,v10,v13
	_mm_store_ps(ctx.v11.f32, _mm_mul_ps(_mm_load_ps(ctx.v10.f32), _mm_load_ps(ctx.v13.f32)));
	// vmulfp128 v26,v13,v13
	_mm_store_ps(ctx.v26.f32, _mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v13.f32)));
	// vmulfp128 v31,v10,v10
	_mm_store_ps(ctx.v31.f32, _mm_mul_ps(_mm_load_ps(ctx.v10.f32), _mm_load_ps(ctx.v10.f32)));
	// vmaddfp v24,v23,v10,v7
	_mm_store_ps(ctx.v24.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v23.f32), _mm_load_ps(ctx.v10.f32)), _mm_load_ps(ctx.v7.f32)));
	// vmaddfp v13,v22,v13,v4
	_mm_store_ps(ctx.v13.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v22.f32), _mm_load_ps(ctx.v13.f32)), _mm_load_ps(ctx.v4.f32)));
	// vmulfp128 v1,v9,v9
	_mm_store_ps(ctx.v1.f32, _mm_mul_ps(_mm_load_ps(ctx.v9.f32), _mm_load_ps(ctx.v9.f32)));
	// vmulfp128 v7,v12,v12
	_mm_store_ps(ctx.v7.f32, _mm_mul_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v12.f32)));
	// vmulfp128 v4,v0,v0
	_mm_store_ps(ctx.v4.f32, _mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v0.f32)));
	// vmaddfp v24,v21,v9,v24
	_mm_store_ps(ctx.v24.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v21.f32), _mm_load_ps(ctx.v9.f32)), _mm_load_ps(ctx.v24.f32)));
	// vmaddfp v13,v20,v12,v13
	_mm_store_ps(ctx.v13.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v20.f32), _mm_load_ps(ctx.v12.f32)), _mm_load_ps(ctx.v13.f32)));
	// vmaddfp v24,v19,v8,v24
	_mm_store_ps(ctx.v24.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v19.f32), _mm_load_ps(ctx.v8.f32)), _mm_load_ps(ctx.v24.f32)));
	// vmaddfp v23,v18,v0,v13
	_mm_store_ps(ctx.v23.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v18.f32), _mm_load_ps(ctx.v0.f32)), _mm_load_ps(ctx.v13.f32)));
	// vmaddfp v13,v25,v26,v24
	_mm_store_ps(ctx.v13.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v25.f32), _mm_load_ps(ctx.v26.f32)), _mm_load_ps(ctx.v24.f32)));
	// vmaddfp v28,v27,v28,v23
	_mm_store_ps(ctx.v28.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v27.f32), _mm_load_ps(ctx.v28.f32)), _mm_load_ps(ctx.v23.f32)));
	// vmaddfp v13,v30,v31,v13
	_mm_store_ps(ctx.v13.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v30.f32), _mm_load_ps(ctx.v31.f32)), _mm_load_ps(ctx.v13.f32)));
	// vmulfp128 v31,v12,v10
	_mm_store_ps(ctx.v31.f32, _mm_mul_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v10.f32)));
	// vmaddfp v28,v6,v11,v28
	_mm_store_ps(ctx.v28.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v6.f32), _mm_load_ps(ctx.v11.f32)), _mm_load_ps(ctx.v28.f32)));
	// vmaddfp v27,v5,v7,v13
	_mm_store_ps(ctx.v27.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v5.f32), _mm_load_ps(ctx.v7.f32)), _mm_load_ps(ctx.v13.f32)));
	// lvx128 v13,r0,r19
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r19.u32) & ~0xF), VectorMaskL));
	// vspltw v30,v13,0
	_mm_store_si128((__m128i*)ctx.v30.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v13.u32), 0xFF));
	// vmulfp128 v10,v0,v9
	_mm_store_ps(ctx.v10.f32, _mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v9.f32)));
	// vspltw v5,v13,1
	_mm_store_si128((__m128i*)ctx.v5.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v13.u32), 0xAA));
	// vmulfp128 v0,v8,v0
	_mm_store_ps(ctx.v0.f32, _mm_mul_ps(_mm_load_ps(ctx.v8.f32), _mm_load_ps(ctx.v0.f32)));
	// vspltw v7,v13,2
	_mm_store_si128((__m128i*)ctx.v7.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v13.u32), 0x55));
	// vmulfp128 v6,v9,v12
	_mm_store_ps(ctx.v6.f32, _mm_mul_ps(_mm_load_ps(ctx.v9.f32), _mm_load_ps(ctx.v12.f32)));
	// addi r9,r1,144
	ctx.r9.s64 = ctx.r1.s64 + 144;
	// vmaddfp v8,v30,v31,v28
	_mm_store_ps(ctx.v8.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v30.f32), _mm_load_ps(ctx.v31.f32)), _mm_load_ps(ctx.v28.f32)));
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// vmaddfp v29,v29,v1,v27
	_mm_store_ps(ctx.v29.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v29.f32), _mm_load_ps(ctx.v1.f32)), _mm_load_ps(ctx.v27.f32)));
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// vspltw v12,v13,3
	_mm_store_si128((__m128i*)ctx.v12.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v13.u32), 0x0));
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// vspltisw v13,1
	_mm_store_si128((__m128i*)ctx.v13.u32, _mm_set1_epi32(int(0x1)));
	// addi r8,r1,160
	ctx.r8.s64 = ctx.r1.s64 + 160;
	// lvx128 v1,r0,r9
	simd::store_shuffled(ctx.v1, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// addi r9,r1,208
	ctx.r9.s64 = ctx.r1.s64 + 208;
	// lvx128 v11,r0,r10
	simd::store_shuffled(ctx.v11, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// li r10,1680
	ctx.r10.s64 = 1680;
	// addi r7,r1,176
	ctx.r7.s64 = ctx.r1.s64 + 176;
	// lfs f1,108(r30)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 108);
	ctx.f1.f64 = double(temp.f32);
	// vcfsx v9,v13,1
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v9.f32, _mm_mul_ps(_mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v13.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x3F000000)))));
	// vor v13,v1,v1
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_load_si128((__m128i*)ctx.v1.u8));
	// lvx128 v1,r0,r6
	simd::store_shuffled(ctx.v1, simd::load_and_shuffle(base + ((ctx.r6.u32) & ~0xF), VectorMaskL));
	// lwz r3,1596(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1596);
	// stvx128 v11,r0,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v11,r0,r11
	simd::store_shuffled(ctx.v11, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// addi r11,r1,224
	ctx.r11.s64 = ctx.r1.s64 + 224;
	// lvx128 v31,r0,r8
	simd::store_shuffled(ctx.v31, simd::load_and_shuffle(base + ((ctx.r8.u32) & ~0xF), VectorMaskL));
	// vmaddfp v8,v5,v6,v8
	_mm_store_ps(ctx.v8.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v5.f32), _mm_load_ps(ctx.v6.f32)), _mm_load_ps(ctx.v8.f32)));
	// lvx128 v30,r0,r7
	simd::store_shuffled(ctx.v30, simd::load_and_shuffle(base + ((ctx.r7.u32) & ~0xF), VectorMaskL));
	// stvx128 v1,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v1.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v5,r0,r11
	simd::store_shuffled(ctx.v5, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// lvx128 v1,r30,r10
	simd::store_shuffled(ctx.v1, simd::load_and_shuffle(base + ((ctx.r30.u32 + ctx.r10.u32) & ~0xF), VectorMaskL));
	// addi r10,r1,192
	ctx.r10.s64 = ctx.r1.s64 + 192;
	// stvx128 v13,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmaddfp v13,v3,v4,v29
	_mm_store_ps(ctx.v13.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v3.f32), _mm_load_ps(ctx.v4.f32)), _mm_load_ps(ctx.v29.f32)));
	// vmaddfp v10,v7,v10,v8
	_mm_store_ps(ctx.v10.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v7.f32), _mm_load_ps(ctx.v10.f32)), _mm_load_ps(ctx.v8.f32)));
	// lvx128 v8,r0,r10
	simd::store_shuffled(ctx.v8, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// vmaddfp v0,v12,v0,v10
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v0.f32)), _mm_load_ps(ctx.v10.f32)));
	// lvx128 v10,r0,r9
	simd::store_shuffled(ctx.v10, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// vperm v12,v0,v13,v2
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)ctx.v2.u8)));
	// vperm v8,v0,v13,v8
	_mm_store_si128((__m128i*)ctx.v8.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)ctx.v8.u8)));
	// vperm v10,v0,v13,v10
	_mm_store_si128((__m128i*)ctx.v10.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)ctx.v10.u8)));
	// vperm v7,v0,v13,v31
	_mm_store_si128((__m128i*)ctx.v7.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)ctx.v31.u8)));
	// vperm v6,v0,v13,v30
	_mm_store_si128((__m128i*)ctx.v6.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)ctx.v30.u8)));
	// vmulfp128 v10,v10,v12
	_mm_store_ps(ctx.v10.f32, _mm_mul_ps(_mm_load_ps(ctx.v10.f32), _mm_load_ps(ctx.v12.f32)));
	// vperm v12,v0,v13,v5
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)ctx.v5.u8)));
	// vmulfp128 v13,v11,v8
	_mm_store_ps(ctx.v13.f32, _mm_mul_ps(_mm_load_ps(ctx.v11.f32), _mm_load_ps(ctx.v8.f32)));
	// vmulfp128 v0,v6,v7
	_mm_store_ps(ctx.v0.f32, _mm_mul_ps(_mm_load_ps(ctx.v6.f32), _mm_load_ps(ctx.v7.f32)));
	// vmulfp128 v13,v13,v10
	_mm_store_ps(ctx.v13.f32, _mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v10.f32)));
	// vmaddfp v13,v12,v0,v13
	_mm_store_ps(ctx.v13.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v0.f32)), _mm_load_ps(ctx.v13.f32)));
	// vmsum4fp128 v11,v13,v13
	_mm_store_ps(ctx.v11.f32, _mm_dp_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v13.f32), 0xFF));
	// vrsqrtefp v0,v11
	_mm_store_ps(ctx.v0.f32, _mm_div_ps(_mm_set1_ps(1), _mm_sqrt_ps(_mm_load_ps(ctx.v11.f32))));
	// vor v12,v11,v11
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_load_si128((__m128i*)ctx.v11.u8));
	// vmulfp128 v10,v11,v9
	_mm_store_ps(ctx.v10.f32, _mm_mul_ps(_mm_load_ps(ctx.v11.f32), _mm_load_ps(ctx.v9.f32)));
	// vcmpeqfp v8,v11,v16
	_mm_store_ps(ctx.v8.f32, _mm_cmpeq_ps(_mm_load_ps(ctx.v11.f32), _mm_load_ps(ctx.v16.f32)));
	// vmulfp128 v11,v0,v0
	_mm_store_ps(ctx.v11.f32, _mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v0.f32)));
	// vnmsubfp v9,v10,v11,v9
	_mm_store_ps(ctx.v9.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(ctx.v10.f32), _mm_load_ps(ctx.v11.f32)), _mm_load_ps(ctx.v9.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// vmaddfp v0,v0,v9,v0
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v9.f32)), _mm_load_ps(ctx.v0.f32)));
	// vmulfp128 v0,v13,v0
	_mm_store_ps(ctx.v0.f32, _mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v0.f32)));
	// vsel v2,v0,v12,v8
	_mm_store_si128((__m128i*)ctx.v2.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v8.u8), _mm_load_si128((__m128i*)ctx.v0.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v8.u8), _mm_load_si128((__m128i*)ctx.v12.u8))));
	// bl 0x8250f290
	ctx.lr = 0x82532068;
	sub_8250F290(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,1508(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1508, ctx.r11.u32);
	// b 0x82531c04
	goto loc_82531C04;
loc_82532074:
	// li r24,0
	ctx.r24.s64 = 0;
loc_82532078:
	// addi r28,r30,1520
	ctx.r28.s64 = ctx.r30.s64 + 1520;
	// addi r29,r30,1680
	ctx.r29.s64 = ctx.r30.s64 + 1680;
	// addi r11,r21,8532
	ctx.r11.s64 = ctx.r21.s64 + 8532;
	// li r10,4
	ctx.r10.s64 = 4;
	// lvx128 v0,r0,r28
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r28.u32) & ~0xF), VectorMaskL));
	// lvx128 v13,r0,r29
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r29.u32) & ~0xF), VectorMaskL));
	// vsubfp v0,v13,v0
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v0.f32, _mm_sub_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v0.f32)));
	// lvlx v13,r11,r10
	temp.u32 = ctx.r11.u32 + ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw v13,v13,0
	_mm_store_si128((__m128i*)ctx.v13.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v13.u32), 0xFF));
	// vrlimi128 v0,v13,1,0
	_mm_store_ps(ctx.v0.f32, _mm_blend_ps(_mm_load_ps(ctx.v0.f32), _mm_permute_ps(_mm_load_ps(ctx.v13.f32), 228), 1));
	// vcmpbfp. v0,v0,v13
	_mm_store_ps(ctx.v0.f32, _mm_vcmpbfp(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v13.f32)));
	ctx.cr6.setFromMask(_mm_load_ps(ctx.v0.f32), 0xF);
	// bne cr6,0x825320e8
	if (!ctx.cr6.eq) goto loc_825320E8;
	// lwz r11,1584(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1584);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x825320dc
	if (ctx.cr6.eq) goto loc_825320DC;
	// lwz r11,1508(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1508);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x825320cc
	if (ctx.cr6.eq) goto loc_825320CC;
	// lwz r3,1596(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1596);
	// bl 0x8250f4b0
	ctx.lr = 0x825320C8;
	sub_8250F4B0(ctx, base);
	// stw r24,1508(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1508, ctx.r24.u32);
loc_825320CC:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,1580(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1580, ctx.r11.u32);
	// stw r11,1588(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1588, ctx.r11.u32);
	// b 0x82532690
	goto loc_82532690;
loc_825320DC:
	// lwz r11,1580(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1580);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82532690
	if (!ctx.cr6.eq) goto loc_82532690;
loc_825320E8:
	// bl 0x8250f738
	ctx.lr = 0x825320EC;
	sub_8250F738(ctx, base);
	// lwz r11,1596(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1596);
	// lis r9,-31954
	ctx.r9.s64 = -2094137344;
	// fmr f1,f26
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f26.f64;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// addi r4,r9,-4400
	ctx.r4.s64 = ctx.r9.s64 + -4400;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r5,100(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 100);
	// lwz r11,16(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8253211C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// fmr f1,f26
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f26.f64;
	// bl 0x82532fa0
	ctx.lr = 0x82532128;
	sub_82532FA0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82532d90
	ctx.lr = 0x82532130;
	sub_82532D90(ctx, base);
	// lwz r11,30468(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 30468);
	// addi r24,r30,1696
	ctx.r24.s64 = ctx.r30.s64 + 1696;
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82532170
	if (!ctx.cr0.eq) goto loc_82532170;
	// li r10,16
	ctx.r10.s64 = 16;
	// lvlx v0,0,r31
	temp.u32 = ctx.r31.u32;
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r9,r1,128
	ctx.r9.s64 = ctx.r1.s64 + 128;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stw r11,30468(r22)
	PPC_STORE_U32(ctx.r22.u32 + 30468, ctx.r11.u32);
	// lvlx v13,r31,r10
	temp.u32 = ctx.r31.u32 + ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vrlimi128 v0,v13,4,3
	_mm_store_ps(ctx.v0.f32, _mm_blend_ps(_mm_load_ps(ctx.v0.f32), _mm_permute_ps(_mm_load_ps(ctx.v13.f32), 57), 4));
	// vrlimi128 v0,v13,2,2
	_mm_store_ps(ctx.v0.f32, _mm_blend_ps(_mm_load_ps(ctx.v0.f32), _mm_permute_ps(_mm_load_ps(ctx.v13.f32), 78), 2));
	// vrlimi128 v0,v13,1,1
	_mm_store_ps(ctx.v0.f32, _mm_blend_ps(_mm_load_ps(ctx.v0.f32), _mm_permute_ps(_mm_load_ps(ctx.v13.f32), 147), 1));
	// stvx128 v0,r0,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v0,r0,r27
	_mm_store_si128((__m128i*)(base + ((ctx.r27.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// b 0x8253217c
	goto loc_8253217C;
loc_82532170:
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// lvx128 v0,r0,r27
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r27.u32) & ~0xF), VectorMaskL));
	// stvx128 v0,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
loc_8253217C:
	// rlwinm. r10,r11,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x825321bc
	if (!ctx.cr0.eq) goto loc_825321BC;
	// li r10,20
	ctx.r10.s64 = 20;
	// li r9,4
	ctx.r9.s64 = 4;
	// addi r8,r1,176
	ctx.r8.s64 = ctx.r1.s64 + 176;
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// lvlx v13,r31,r10
	temp.u32 = ctx.r31.u32 + ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// stw r11,30468(r22)
	PPC_STORE_U32(ctx.r22.u32 + 30468, ctx.r11.u32);
	// vor v0,v13,v13
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_load_si128((__m128i*)ctx.v13.u8));
	// lvlx v12,r31,r9
	temp.u32 = ctx.r31.u32 + ctx.r9.u32;
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vrlimi128 v0,v12,4,3
	_mm_store_ps(ctx.v0.f32, _mm_blend_ps(_mm_load_ps(ctx.v0.f32), _mm_permute_ps(_mm_load_ps(ctx.v12.f32), 57), 4));
	// vrlimi128 v0,v13,2,2
	_mm_store_ps(ctx.v0.f32, _mm_blend_ps(_mm_load_ps(ctx.v0.f32), _mm_permute_ps(_mm_load_ps(ctx.v13.f32), 78), 2));
	// vrlimi128 v0,v13,1,1
	_mm_store_ps(ctx.v0.f32, _mm_blend_ps(_mm_load_ps(ctx.v0.f32), _mm_permute_ps(_mm_load_ps(ctx.v13.f32), 147), 1));
	// stvx128 v0,r0,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v0,r0,r26
	_mm_store_si128((__m128i*)(base + ((ctx.r26.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// b 0x825321c8
	goto loc_825321C8;
loc_825321BC:
	// addi r10,r1,176
	ctx.r10.s64 = ctx.r1.s64 + 176;
	// lvx128 v0,r0,r26
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r26.u32) & ~0xF), VectorMaskL));
	// stvx128 v0,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
loc_825321C8:
	// rlwinm. r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82532208
	if (!ctx.cr0.eq) goto loc_82532208;
	// li r10,24
	ctx.r10.s64 = 24;
	// li r9,8
	ctx.r9.s64 = 8;
	// addi r8,r1,160
	ctx.r8.s64 = ctx.r1.s64 + 160;
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
	// lvlx v13,r31,r10
	temp.u32 = ctx.r31.u32 + ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// stw r11,30468(r22)
	PPC_STORE_U32(ctx.r22.u32 + 30468, ctx.r11.u32);
	// vor v0,v13,v13
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_load_si128((__m128i*)ctx.v13.u8));
	// lvlx v12,r31,r9
	temp.u32 = ctx.r31.u32 + ctx.r9.u32;
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vrlimi128 v0,v13,4,3
	_mm_store_ps(ctx.v0.f32, _mm_blend_ps(_mm_load_ps(ctx.v0.f32), _mm_permute_ps(_mm_load_ps(ctx.v13.f32), 57), 4));
	// vrlimi128 v0,v12,2,2
	_mm_store_ps(ctx.v0.f32, _mm_blend_ps(_mm_load_ps(ctx.v0.f32), _mm_permute_ps(_mm_load_ps(ctx.v12.f32), 78), 2));
	// vrlimi128 v0,v13,1,1
	_mm_store_ps(ctx.v0.f32, _mm_blend_ps(_mm_load_ps(ctx.v0.f32), _mm_permute_ps(_mm_load_ps(ctx.v13.f32), 147), 1));
	// stvx128 v0,r0,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v0,r0,r25
	_mm_store_si128((__m128i*)(base + ((ctx.r25.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// b 0x82532214
	goto loc_82532214;
loc_82532208:
	// addi r10,r1,160
	ctx.r10.s64 = ctx.r1.s64 + 160;
	// lvx128 v0,r0,r25
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r25.u32) & ~0xF), VectorMaskL));
	// stvx128 v0,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
loc_82532214:
	// addi r9,r1,144
	ctx.r9.s64 = ctx.r1.s64 + 144;
	// rlwinm. r10,r11,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x8253224c
	if (!ctx.cr0.eq) goto loc_8253224C;
	// li r10,16
	ctx.r10.s64 = 16;
	// lvlx v13,0,r31
	temp.u32 = ctx.r31.u32;
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lwz r8,84(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// ori r11,r11,8
	ctx.r11.u64 = ctx.r11.u64 | 8;
	// stw r11,30468(r22)
	PPC_STORE_U32(ctx.r22.u32 + 30468, ctx.r11.u32);
	// lvlx v0,r31,r10
	temp.u32 = ctx.r31.u32 + ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vrlimi128 v0,v13,4,3
	_mm_store_ps(ctx.v0.f32, _mm_blend_ps(_mm_load_ps(ctx.v0.f32), _mm_permute_ps(_mm_load_ps(ctx.v13.f32), 57), 4));
	// vrlimi128 v0,v13,2,2
	_mm_store_ps(ctx.v0.f32, _mm_blend_ps(_mm_load_ps(ctx.v0.f32), _mm_permute_ps(_mm_load_ps(ctx.v13.f32), 78), 2));
	// vrlimi128 v0,v13,1,1
	_mm_store_ps(ctx.v0.f32, _mm_blend_ps(_mm_load_ps(ctx.v0.f32), _mm_permute_ps(_mm_load_ps(ctx.v13.f32), 147), 1));
	// stvx128 v0,r0,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// b 0x82532254
	goto loc_82532254;
loc_8253224C:
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lvx128 v0,r0,r10
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
loc_82532254:
	// stvx128 v0,r0,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// rlwinm. r10,r11,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82532298
	if (!ctx.cr0.eq) goto loc_82532298;
	// li r10,4
	ctx.r10.s64 = 4;
	// lwz r9,92(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// li r8,20
	ctx.r8.s64 = 20;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// ori r11,r11,16
	ctx.r11.u64 = ctx.r11.u64 | 16;
	// lvlx v13,r31,r10
	temp.u32 = ctx.r31.u32 + ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// stw r11,30468(r22)
	PPC_STORE_U32(ctx.r22.u32 + 30468, ctx.r11.u32);
	// vor v0,v13,v13
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_load_si128((__m128i*)ctx.v13.u8));
	// lvlx v12,r31,r8
	temp.u32 = ctx.r31.u32 + ctx.r8.u32;
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vrlimi128 v0,v12,4,3
	_mm_store_ps(ctx.v0.f32, _mm_blend_ps(_mm_load_ps(ctx.v0.f32), _mm_permute_ps(_mm_load_ps(ctx.v12.f32), 57), 4));
	// vrlimi128 v0,v13,2,2
	_mm_store_ps(ctx.v0.f32, _mm_blend_ps(_mm_load_ps(ctx.v0.f32), _mm_permute_ps(_mm_load_ps(ctx.v13.f32), 78), 2));
	// vrlimi128 v0,v13,1,1
	_mm_store_ps(ctx.v0.f32, _mm_blend_ps(_mm_load_ps(ctx.v0.f32), _mm_permute_ps(_mm_load_ps(ctx.v13.f32), 147), 1));
	// stvx128 v0,r0,r7
	_mm_store_si128((__m128i*)(base + ((ctx.r7.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// b 0x825322a4
	goto loc_825322A4;
loc_82532298:
	// lwz r10,92(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// lvx128 v0,r0,r10
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
loc_825322A4:
	// stvx128 v0,r0,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// rlwinm. r10,r11,0,26,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x825322e8
	if (!ctx.cr0.eq) goto loc_825322E8;
	// li r10,8
	ctx.r10.s64 = 8;
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r8,24
	ctx.r8.s64 = 24;
	// ori r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 | 32;
	// stw r11,30468(r22)
	PPC_STORE_U32(ctx.r22.u32 + 30468, ctx.r11.u32);
	// lvlx v0,r31,r10
	temp.u32 = ctx.r31.u32 + ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vor v13,v0,v0
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_load_si128((__m128i*)ctx.v0.u8));
	// lvlx v12,r31,r8
	temp.u32 = ctx.r31.u32 + ctx.r8.u32;
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vrlimi128 v13,v0,4,3
	_mm_store_ps(ctx.v13.f32, _mm_blend_ps(_mm_load_ps(ctx.v13.f32), _mm_permute_ps(_mm_load_ps(ctx.v0.f32), 57), 4));
	// vor v1,v13,v13
	_mm_store_si128((__m128i*)ctx.v1.u8, _mm_load_si128((__m128i*)ctx.v13.u8));
	// vrlimi128 v1,v12,2,2
	_mm_store_ps(ctx.v1.f32, _mm_blend_ps(_mm_load_ps(ctx.v1.f32), _mm_permute_ps(_mm_load_ps(ctx.v12.f32), 78), 2));
	// vrlimi128 v1,v0,1,1
	_mm_store_ps(ctx.v1.f32, _mm_blend_ps(_mm_load_ps(ctx.v1.f32), _mm_permute_ps(_mm_load_ps(ctx.v0.f32), 147), 1));
	// stvx128 v1,r0,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v1.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// b 0x825322f0
	goto loc_825322F0;
loc_825322E8:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lvx128 v1,r0,r11
	simd::store_shuffled(ctx.v1, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
loc_825322F0:
	// li r11,12
	ctx.r11.s64 = 12;
	// lvx128 v11,r0,r14
	simd::store_shuffled(ctx.v11, simd::load_and_shuffle(base + ((ctx.r14.u32) & ~0xF), VectorMaskL));
	// lvlx v8,0,r24
	temp.u32 = ctx.r24.u32;
	_mm_store_si128((__m128i*)ctx.v8.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vor128 v6,v67,v67
	_mm_store_si128((__m128i*)ctx.v6.u8, _mm_load_si128((__m128i*)ctx.v67.u8));
	// vspltw v19,v11,1
	_mm_store_si128((__m128i*)ctx.v19.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v11.u32), 0xAA));
	// vor128 v9,v77,v77
	_mm_store_si128((__m128i*)ctx.v9.u8, _mm_load_si128((__m128i*)ctx.v77.u8));
	// vspltw v2,v11,3
	_mm_store_si128((__m128i*)ctx.v2.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v11.u32), 0x0));
	// lvlx v12,0,r20
	temp.u32 = ctx.r20.u32;
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vspltw v28,v11,2
	_mm_store_si128((__m128i*)ctx.v28.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v11.u32), 0x55));
	// lvx128 v0,r0,r16
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r16.u32) & ~0xF), VectorMaskL));
	// lvrx v10,r11,r24
	temp.u32 = ctx.r11.u32 + ctx.r24.u32;
	_mm_store_si128((__m128i*)ctx.v10.u8, temp.u32 & 0xF ? _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : _mm_setzero_si128());
	// vspltw v5,v12,0
	_mm_store_si128((__m128i*)ctx.v5.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v12.u32), 0xFF));
	// vspltisw128 v124,0
	_mm_store_si128((__m128i*)ctx.v124.u32, _mm_set1_epi32(int(0x0)));
	// lvx128 v13,r0,r23
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r23.u32) & ~0xF), VectorMaskL));
	// vsldoi v11,v10,v10,4
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_alignr_epi8(_mm_load_si128((__m128i*)ctx.v10.u8), _mm_load_si128((__m128i*)ctx.v10.u8), 12));
	// lvx128 v12,r0,r17
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((ctx.r17.u32) & ~0xF), VectorMaskL));
	// vspltw v20,v0,0
	_mm_store_si128((__m128i*)ctx.v20.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0xFF));
	// lvx128 v10,r0,r15
	simd::store_shuffled(ctx.v10, simd::load_and_shuffle(base + ((ctx.r15.u32) & ~0xF), VectorMaskL));
	// vspltw v21,v0,1
	_mm_store_si128((__m128i*)ctx.v21.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0xAA));
	// vspltw v23,v0,2
	_mm_store_si128((__m128i*)ctx.v23.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0x55));
	// vor v7,v8,v11
	_mm_store_si128((__m128i*)ctx.v7.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v8.u8), _mm_load_si128((__m128i*)ctx.v11.u8)));
	// vspltw v25,v0,3
	_mm_store_si128((__m128i*)ctx.v25.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0x0));
	// vupkd3d128 v0,v124,4
	temp.f32 = 3.0f;
	temp.s32 += ctx.v124.s16[1];
	vTemp.f32[3] = temp.f32;
	temp.f32 = 3.0f;
	temp.s32 += ctx.v124.s16[0];
	vTemp.f32[2] = temp.f32;
	vTemp.f32[1] = 0.0f;
	vTemp.f32[0] = 1.0f;
	ctx.v0 = vTemp;
	// vspltw v18,v13,3
	_mm_store_si128((__m128i*)ctx.v18.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v13.u32), 0x0));
	// vspltw v8,v13,1
	_mm_store_si128((__m128i*)ctx.v8.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v13.u32), 0xAA));
	// lvx128 v13,r0,r18
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r18.u32) & ~0xF), VectorMaskL));
	// vsel v11,v7,v9,v6
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v6.u8), _mm_load_si128((__m128i*)ctx.v7.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v6.u8), _mm_load_si128((__m128i*)ctx.v9.u8))));
	// vspltw v6,v10,2
	_mm_store_si128((__m128i*)ctx.v6.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v10.u32), 0x55));
	// vspltw v26,v0,3
	_mm_store_si128((__m128i*)ctx.v26.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v0.u32), 0x0));
	// vspltw v3,v13,1
	_mm_store_si128((__m128i*)ctx.v3.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v13.u32), 0xAA));
	// vspltw v29,v13,0
	_mm_store_si128((__m128i*)ctx.v29.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v13.u32), 0xFF));
	// vmulfp128 v11,v11,v5
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v11.f32, _mm_mul_ps(_mm_load_ps(ctx.v11.f32), _mm_load_ps(ctx.v5.f32)));
	// vspltw v30,v13,2
	_mm_store_si128((__m128i*)ctx.v30.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v13.u32), 0x55));
	// vspltw v4,v13,3
	_mm_store_si128((__m128i*)ctx.v4.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v13.u32), 0x0));
	// vspltw v5,v10,3
	_mm_store_si128((__m128i*)ctx.v5.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v10.u32), 0x0));
	// vspltw v31,v10,1
	_mm_store_si128((__m128i*)ctx.v31.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v10.u32), 0xAA));
	// vspltw v22,v12,0
	_mm_store_si128((__m128i*)ctx.v22.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v12.u32), 0xFF));
	// vspltw v24,v12,1
	_mm_store_si128((__m128i*)ctx.v24.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v12.u32), 0xAA));
	// vspltw v27,v12,2
	_mm_store_si128((__m128i*)ctx.v27.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v12.u32), 0x55));
	// vspltw v7,v12,3
	_mm_store_si128((__m128i*)ctx.v7.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v12.u32), 0x0));
	// vmulfp128 v0,v11,v18
	_mm_store_ps(ctx.v0.f32, _mm_mul_ps(_mm_load_ps(ctx.v11.f32), _mm_load_ps(ctx.v18.f32)));
	// vrfin v0,v0
	_mm_store_ps(ctx.v0.f32, _mm_round_ps(_mm_load_ps(ctx.v0.f32), _MM_FROUND_TO_NEAREST_INT | _MM_FROUND_NO_EXC));
	// vnmsubfp v9,v8,v0,v11
	_mm_store_ps(ctx.v9.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(ctx.v8.f32), _mm_load_ps(ctx.v0.f32)), _mm_load_ps(ctx.v11.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// vmulfp128 v0,v9,v9
	_mm_store_ps(ctx.v0.f32, _mm_mul_ps(_mm_load_ps(ctx.v9.f32), _mm_load_ps(ctx.v9.f32)));
	// vmaddfp v10,v19,v0,v26
	_mm_store_ps(ctx.v10.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v19.f32), _mm_load_ps(ctx.v0.f32)), _mm_load_ps(ctx.v26.f32)));
	// vmulfp128 v13,v0,v9
	_mm_store_ps(ctx.v13.f32, _mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v9.f32)));
	// vmulfp128 v12,v0,v0
	_mm_store_ps(ctx.v12.f32, _mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v0.f32)));
	// vmulfp128 v11,v13,v13
	_mm_store_ps(ctx.v11.f32, _mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v13.f32)));
	// vmaddfp v28,v28,v12,v10
	_mm_store_ps(ctx.v28.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v28.f32), _mm_load_ps(ctx.v12.f32)), _mm_load_ps(ctx.v10.f32)));
	// vmulfp128 v0,v13,v0
	_mm_store_ps(ctx.v0.f32, _mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v0.f32)));
	// vmaddfp v31,v31,v13,v9
	_mm_store_ps(ctx.v31.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v31.f32), _mm_load_ps(ctx.v13.f32)), _mm_load_ps(ctx.v9.f32)));
	// vmulfp128 v10,v12,v12
	_mm_store_ps(ctx.v10.f32, _mm_mul_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v12.f32)));
	// vmulfp128 v13,v12,v13
	_mm_store_ps(ctx.v13.f32, _mm_mul_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v13.f32)));
	// vmulfp128 v8,v11,v11
	_mm_store_ps(ctx.v8.f32, _mm_mul_ps(_mm_load_ps(ctx.v11.f32), _mm_load_ps(ctx.v11.f32)));
	// vmaddfp v19,v2,v11,v28
	_mm_store_ps(ctx.v19.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v2.f32), _mm_load_ps(ctx.v11.f32)), _mm_load_ps(ctx.v28.f32)));
	// vmulfp128 v9,v0,v0
	_mm_store_ps(ctx.v9.f32, _mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v0.f32)));
	// vmaddfp v18,v6,v0,v31
	_mm_store_ps(ctx.v18.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v6.f32), _mm_load_ps(ctx.v0.f32)), _mm_load_ps(ctx.v31.f32)));
	// vmulfp128 v12,v0,v12
	_mm_store_ps(ctx.v12.f32, _mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v12.f32)));
	// vmulfp128 v28,v13,v11
	_mm_store_ps(ctx.v28.f32, _mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v11.f32)));
	// vmulfp128 v0,v11,v0
	_mm_store_ps(ctx.v0.f32, _mm_mul_ps(_mm_load_ps(ctx.v11.f32), _mm_load_ps(ctx.v0.f32)));
	// vmulfp128 v11,v10,v13
	_mm_store_ps(ctx.v11.f32, _mm_mul_ps(_mm_load_ps(ctx.v10.f32), _mm_load_ps(ctx.v13.f32)));
	// vmulfp128 v26,v13,v13
	_mm_store_ps(ctx.v26.f32, _mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v13.f32)));
	// vmulfp128 v2,v10,v10
	_mm_store_ps(ctx.v2.f32, _mm_mul_ps(_mm_load_ps(ctx.v10.f32), _mm_load_ps(ctx.v10.f32)));
	// vmaddfp v19,v20,v10,v19
	_mm_store_ps(ctx.v19.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v20.f32), _mm_load_ps(ctx.v10.f32)), _mm_load_ps(ctx.v19.f32)));
	// vmulfp128 v31,v9,v9
	_mm_store_ps(ctx.v31.f32, _mm_mul_ps(_mm_load_ps(ctx.v9.f32), _mm_load_ps(ctx.v9.f32)));
	// vmaddfp v20,v5,v13,v18
	_mm_store_ps(ctx.v20.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v5.f32), _mm_load_ps(ctx.v13.f32)), _mm_load_ps(ctx.v18.f32)));
	// vmulfp128 v6,v12,v12
	_mm_store_ps(ctx.v6.f32, _mm_mul_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v12.f32)));
	// vmulfp128 v5,v0,v0
	_mm_store_ps(ctx.v5.f32, _mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v0.f32)));
	// vmaddfp v13,v21,v9,v19
	_mm_store_ps(ctx.v13.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v21.f32), _mm_load_ps(ctx.v9.f32)), _mm_load_ps(ctx.v19.f32)));
	// vmaddfp v22,v22,v12,v20
	_mm_store_ps(ctx.v22.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v22.f32), _mm_load_ps(ctx.v12.f32)), _mm_load_ps(ctx.v20.f32)));
	// vmaddfp v13,v23,v8,v13
	_mm_store_ps(ctx.v13.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v23.f32), _mm_load_ps(ctx.v8.f32)), _mm_load_ps(ctx.v13.f32)));
	// vmaddfp v24,v24,v0,v22
	_mm_store_ps(ctx.v24.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v24.f32), _mm_load_ps(ctx.v0.f32)), _mm_load_ps(ctx.v22.f32)));
	// vmaddfp v13,v25,v26,v13
	_mm_store_ps(ctx.v13.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v25.f32), _mm_load_ps(ctx.v26.f32)), _mm_load_ps(ctx.v13.f32)));
	// vmaddfp v27,v27,v28,v24
	_mm_store_ps(ctx.v27.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v27.f32), _mm_load_ps(ctx.v28.f32)), _mm_load_ps(ctx.v24.f32)));
	// vmaddfp v13,v29,v2,v13
	_mm_store_ps(ctx.v13.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v29.f32), _mm_load_ps(ctx.v2.f32)), _mm_load_ps(ctx.v13.f32)));
	// vmaddfp v29,v7,v11,v27
	_mm_store_ps(ctx.v29.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v7.f32), _mm_load_ps(ctx.v11.f32)), _mm_load_ps(ctx.v27.f32)));
	// vmaddfp v28,v3,v6,v13
	_mm_store_ps(ctx.v28.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v3.f32), _mm_load_ps(ctx.v6.f32)), _mm_load_ps(ctx.v13.f32)));
	// lvx128 v13,r0,r19
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r19.u32) & ~0xF), VectorMaskL));
	// vmulfp128 v3,v12,v10
	_mm_store_ps(ctx.v3.f32, _mm_mul_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v10.f32)));
	// vspltw v2,v13,0
	_mm_store_si128((__m128i*)ctx.v2.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v13.u32), 0xFF));
	// vmulfp128 v10,v0,v9
	_mm_store_ps(ctx.v10.f32, _mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v9.f32)));
	// vmulfp128 v0,v8,v0
	_mm_store_ps(ctx.v0.f32, _mm_mul_ps(_mm_load_ps(ctx.v8.f32), _mm_load_ps(ctx.v0.f32)));
	// vspltw v6,v13,1
	_mm_store_si128((__m128i*)ctx.v6.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v13.u32), 0xAA));
	// vmulfp128 v7,v9,v12
	_mm_store_ps(ctx.v7.f32, _mm_mul_ps(_mm_load_ps(ctx.v9.f32), _mm_load_ps(ctx.v12.f32)));
	// vspltw v9,v13,2
	_mm_store_si128((__m128i*)ctx.v9.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v13.u32), 0x55));
	// vmaddfp v8,v2,v3,v29
	_mm_store_ps(ctx.v8.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v2.f32), _mm_load_ps(ctx.v3.f32)), _mm_load_ps(ctx.v29.f32)));
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// vspltw v12,v13,3
	_mm_store_si128((__m128i*)ctx.v12.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v13.u32), 0x0));
	// vmaddfp v31,v30,v31,v28
	_mm_store_ps(ctx.v31.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v30.f32), _mm_load_ps(ctx.v31.f32)), _mm_load_ps(ctx.v28.f32)));
	// vspltisw v13,1
	_mm_store_si128((__m128i*)ctx.v13.u32, _mm_set1_epi32(int(0x1)));
	// addi r8,r1,160
	ctx.r8.s64 = ctx.r1.s64 + 160;
	// lwz r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// addi r7,r1,176
	ctx.r7.s64 = ctx.r1.s64 + 176;
	// lvx128 v3,r0,r11
	simd::store_shuffled(ctx.v3, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// addi r11,r1,192
	ctx.r11.s64 = ctx.r1.s64 + 192;
	// lvx128 v2,r0,r10
	simd::store_shuffled(ctx.v2, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// vcsxwfp128 v127,v13,1
	_mm_store_ps(ctx.v127.f32, _mm_mul_ps(_mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v13.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x3F000000)))));
	// vor v13,v2,v2
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_load_si128((__m128i*)ctx.v2.u8));
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// lvx128 v30,r0,r8
	simd::store_shuffled(ctx.v30, simd::load_and_shuffle(base + ((ctx.r8.u32) & ~0xF), VectorMaskL));
	// lvx128 v29,r0,r7
	simd::store_shuffled(ctx.v29, simd::load_and_shuffle(base + ((ctx.r7.u32) & ~0xF), VectorMaskL));
	// lvx128 v11,r0,r9
	simd::store_shuffled(ctx.v11, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// stvx128 v13,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmaddfp v8,v6,v7,v8
	_mm_store_ps(ctx.v8.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v6.f32), _mm_load_ps(ctx.v7.f32)), _mm_load_ps(ctx.v8.f32)));
	// lvx128 v2,r0,r6
	simd::store_shuffled(ctx.v2, simd::load_and_shuffle(base + ((ctx.r6.u32) & ~0xF), VectorMaskL));
	// vmaddfp v13,v4,v5,v31
	_mm_store_ps(ctx.v13.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v4.f32), _mm_load_ps(ctx.v5.f32)), _mm_load_ps(ctx.v31.f32)));
	// vmaddfp v10,v9,v10,v8
	_mm_store_ps(ctx.v10.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v9.f32), _mm_load_ps(ctx.v10.f32)), _mm_load_ps(ctx.v8.f32)));
	// lvx128 v9,r0,r11
	simd::store_shuffled(ctx.v9, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// vmaddfp v0,v12,v0,v10
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v0.f32)), _mm_load_ps(ctx.v10.f32)));
	// vperm v12,v0,v13,v1
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)ctx.v1.u8)));
	// vperm v10,v0,v13,v3
	_mm_store_si128((__m128i*)ctx.v10.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)ctx.v3.u8)));
	// vperm v9,v0,v13,v9
	_mm_store_si128((__m128i*)ctx.v9.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)ctx.v9.u8)));
	// vmulfp128 v10,v10,v12
	_mm_store_ps(ctx.v10.f32, _mm_mul_ps(_mm_load_ps(ctx.v10.f32), _mm_load_ps(ctx.v12.f32)));
	// vperm v8,v0,v13,v30
	_mm_store_si128((__m128i*)ctx.v8.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)ctx.v30.u8)));
	// vperm v7,v0,v13,v29
	_mm_store_si128((__m128i*)ctx.v7.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)ctx.v29.u8)));
	// vperm v12,v0,v13,v2
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)ctx.v2.u8)));
	// vmulfp128 v13,v11,v9
	_mm_store_ps(ctx.v13.f32, _mm_mul_ps(_mm_load_ps(ctx.v11.f32), _mm_load_ps(ctx.v9.f32)));
	// vmulfp128 v125,v7,v8
	_mm_store_ps(ctx.v125.f32, _mm_mul_ps(_mm_load_ps(ctx.v7.f32), _mm_load_ps(ctx.v8.f32)));
	// vmulfp128 v13,v13,v10
	_mm_store_ps(ctx.v13.f32, _mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v10.f32)));
	// vmaddcfp128 v125,v12,v125,v13
	_mm_store_ps(ctx.v125.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v125.f32)), _mm_load_ps(ctx.v13.f32)));
	// vmsum4fp128 v123,v125,v125
	_mm_store_ps(ctx.v123.f32, _mm_dp_ps(_mm_load_ps(ctx.v125.f32), _mm_load_ps(ctx.v125.f32), 0xFF));
	// vrsqrtefp128 v126,v123
	_mm_store_ps(ctx.v126.f32, _mm_div_ps(_mm_set1_ps(1), _mm_sqrt_ps(_mm_load_ps(ctx.v123.f32))));
	// bl 0x8250f738
	ctx.lr = 0x825324E0;
	sub_8250F738(ctx, base);
	// vmulfp128 v12,v123,v127
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v12.f32, _mm_mul_ps(_mm_load_ps(ctx.v123.f32), _mm_load_ps(ctx.v127.f32)));
	// vor128 v10,v127,v127
	_mm_store_si128((__m128i*)ctx.v10.u8, _mm_load_si128((__m128i*)ctx.v127.u8));
	// vmulfp128 v13,v126,v126
	_mm_store_ps(ctx.v13.f32, _mm_mul_ps(_mm_load_ps(ctx.v126.f32), _mm_load_ps(ctx.v126.f32)));
	// vor128 v0,v123,v123
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_load_si128((__m128i*)ctx.v123.u8));
	// vcmpeqfp128 v11,v123,v124
	_mm_store_ps(ctx.v11.f32, _mm_cmpeq_ps(_mm_load_ps(ctx.v123.f32), _mm_load_ps(ctx.v124.f32)));
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lvx128 v1,r0,r29
	simd::store_shuffled(ctx.v1, simd::load_and_shuffle(base + ((ctx.r29.u32) & ~0xF), VectorMaskL));
	// lwz r3,1596(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1596);
	// lfs f1,108(r30)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 108);
	ctx.f1.f64 = double(temp.f32);
	// lwz r5,100(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// vnmsubfp128 v10,v12,v13,v10
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v10.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(ctx.v12.f32), _mm_load_ps(ctx.v13.f32)), _mm_load_ps(ctx.v10.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// vor v13,v10,v10
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_load_si128((__m128i*)ctx.v10.u8));
	// vmaddcfp128 v13,v126,v13,v126
	_mm_store_ps(ctx.v13.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v126.f32), _mm_load_ps(ctx.v13.f32)), _mm_load_ps(ctx.v126.f32)));
	// vmulfp128 v13,v125,v13
	_mm_store_ps(ctx.v13.f32, _mm_mul_ps(_mm_load_ps(ctx.v125.f32), _mm_load_ps(ctx.v13.f32)));
	// vsel v2,v13,v0,v11
	_mm_store_si128((__m128i*)ctx.v2.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)ctx.v13.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)ctx.v0.u8))));
	// bl 0x8250f3b8
	ctx.lr = 0x82532520;
	sub_8250F3B8(ctx, base);
	// lvx128 v0,r0,r29
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r29.u32) & ~0xF), VectorMaskL));
	// lvx128 v13,r0,r28
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r28.u32) & ~0xF), VectorMaskL));
	// vor128 v9,v127,v127
	_mm_store_si128((__m128i*)ctx.v9.u8, _mm_load_si128((__m128i*)ctx.v127.u8));
	// vsubfp v1,v13,v0
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v1.f32, _mm_sub_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v0.f32)));
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
	// lfs f0,8536(r21)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r21.u32 + 8536);
	ctx.f0.f64 = double(temp.f32);
	// li r31,1
	ctx.r31.s64 = 1;
	// vmsum3fp128 v8,v1,v1
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v8.f32, _mm_dp_ps(_mm_load_ps(ctx.v1.f32), _mm_load_ps(ctx.v1.f32), 0xEF));
	// lfs f27,1700(r30)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1700);
	ctx.f27.f64 = double(temp.f32);
	// vrsqrtefp v0,v8
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v0.f32, _mm_div_ps(_mm_set1_ps(1), _mm_sqrt_ps(_mm_load_ps(ctx.v8.f32))));
	// vmulfp128 v11,v8,v127
	_mm_store_ps(ctx.v11.f32, _mm_mul_ps(_mm_load_ps(ctx.v8.f32), _mm_load_ps(ctx.v127.f32)));
	// vcmpeqfp128 v10,v8,v124
	_mm_store_ps(ctx.v10.f32, _mm_cmpeq_ps(_mm_load_ps(ctx.v8.f32), _mm_load_ps(ctx.v124.f32)));
	// vmulfp128 v12,v0,v0
	_mm_store_ps(ctx.v12.f32, _mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v0.f32)));
	// vnmsubfp128 v9,v11,v12,v9
	_mm_store_ps(ctx.v9.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(ctx.v11.f32), _mm_load_ps(ctx.v12.f32)), _mm_load_ps(ctx.v9.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// vmaddfp v0,v0,v9,v0
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v9.f32)), _mm_load_ps(ctx.v0.f32)));
	// vmulfp128 v0,v8,v0
	_mm_store_ps(ctx.v0.f32, _mm_mul_ps(_mm_load_ps(ctx.v8.f32), _mm_load_ps(ctx.v0.f32)));
	// vsel v12,v0,v8,v10
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v10.u8), _mm_load_si128((__m128i*)ctx.v0.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v10.u8), _mm_load_si128((__m128i*)ctx.v8.u8))));
	// stvx128 v12,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lfs f31,128(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f31.f64 = double(temp.f32);
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// blt cr6,0x82532578
	if (ctx.cr6.lt) goto loc_82532578;
	// li r31,0
	ctx.r31.s64 = 0;
loc_82532578:
	// lfs f0,8540(r21)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r21.u32 + 8540);
	ctx.f0.f64 = double(temp.f32);
	// li r28,1
	ctx.r28.s64 = 1;
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// blt cr6,0x8253258c
	if (ctx.cr6.lt) goto loc_8253258C;
	// li r28,0
	ctx.r28.s64 = 0;
loc_8253258C:
	// bl 0x8255c250
	ctx.lr = 0x82532590;
	sub_8255C250(ctx, base);
	// lfs f0,8548(r21)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r21.u32 + 8548);
	ctx.f0.f64 = double(temp.f32);
	// fmr f29,f1
	ctx.f29.f64 = ctx.f1.f64;
	// li r29,1
	ctx.r29.s64 = 1;
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// bgt cr6,0x825325a8
	if (ctx.cr6.gt) goto loc_825325A8;
	// li r29,0
	ctx.r29.s64 = 0;
loc_825325A8:
	// lwz r11,488(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 488);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x825328ec
	if (ctx.cr6.lt) goto loc_825328EC;
	// beq cr6,0x825327f4
	if (ctx.cr6.eq) goto loc_825327F4;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// blt cr6,0x825326a8
	if (ctx.cr6.lt) goto loc_825326A8;
	// bne cr6,0x82532690
	if (!ctx.cr6.eq) goto loc_82532690;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne cr6,0x825325d4
	if (!ctx.cr6.eq) goto loc_825325D4;
loc_825325CC:
	// li r4,2
	ctx.r4.s64 = 2;
	// b 0x82532688
	goto loc_82532688;
loc_825325D4:
	// lwz r11,1712(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1712);
	// lwz r11,400(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 400);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r3,276(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 276);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x825325f4
	if (ctx.cr6.eq) goto loc_825325F4;
	// bl 0x828253a8
	ctx.lr = 0x825325F0;
	sub_828253A8(ctx, base);
	// b 0x825325f8
	goto loc_825325F8;
loc_825325F4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_825325F8:
	// lwz r11,1712(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1712);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// lwz r11,400(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 400);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r3,276(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 276);
	// bne cr6,0x82532628
	if (!ctx.cr6.eq) goto loc_82532628;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82532620
	if (!ctx.cr6.eq) goto loc_82532620;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82532644
	goto loc_82532644;
loc_82532620:
	// bl 0x8255b3a0
	ctx.lr = 0x82532624;
	sub_8255B3A0(ctx, base);
	// b 0x82532644
	goto loc_82532644;
loc_82532628:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82532640
	if (ctx.cr6.eq) goto loc_82532640;
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// lfs f1,-24756(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -24756);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8255b448
	ctx.lr = 0x8253263C;
	sub_8255B448(ctx, base);
	// b 0x82532644
	goto loc_82532644;
loc_82532640:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82532644:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82532678
	if (ctx.cr6.eq) goto loc_82532678;
	// lwz r11,1712(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1712);
	// lwz r11,400(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 400);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r3,276(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 276);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8253266c
	if (ctx.cr6.eq) goto loc_8253266C;
	// bl 0x828253a8
	ctx.lr = 0x82532668;
	sub_828253A8(ctx, base);
	// b 0x82532670
	goto loc_82532670;
loc_8253266C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82532670:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82532684
	if (!ctx.cr6.eq) goto loc_82532684;
loc_82532678:
	// lwz r11,1552(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1552);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
loc_82532680:
	// beq cr6,0x82532690
	if (ctx.cr6.eq) goto loc_82532690;
loc_82532684:
	// li r4,1
	ctx.r4.s64 = 1;
loc_82532688:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82532950
	ctx.lr = 0x82532690;
	sub_82532950(ctx, base);
loc_82532690:
	// addi r1,r1,528
	ctx.r1.s64 = ctx.r1.s64 + 528;
	// addi r12,r1,-208
	ctx.r12.s64 = ctx.r1.s64 + -208;
	// bl 0x82fac3e4
	ctx.lr = 0x8253269C;
	__restvmx_123(ctx, base);
	// addi r12,r1,-152
	ctx.r12.s64 = ctx.r1.s64 + -152;
	// bl 0x82fa8d6c
	ctx.lr = 0x825326A4;
	__restfpr_26(ctx, base);
	// b 0x82fa7690
	__restgprlr_14(ctx, base);
	return;
loc_825326A8:
	// lfs f0,8544(r21)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r21.u32 + 8544);
	ctx.f0.f64 = double(temp.f32);
	// li r31,1
	ctx.r31.s64 = 1;
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// bgt cr6,0x825326bc
	if (ctx.cr6.gt) goto loc_825326BC;
	// li r31,0
	ctx.r31.s64 = 0;
loc_825326BC:
	// lwz r11,1576(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1576);
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x825326f4
	if (ctx.cr6.eq) goto loc_825326F4;
	// cntlzw r11,r31
	ctx.r11.u64 = ctx.r31.u32 == 0 ? 32 : __builtin_clz(ctx.r31.u32);
	// lfs f2,8572(r21)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r21.u32 + 8572);
	ctx.f2.f64 = double(temp.f32);
	// li r7,0
	ctx.r7.s64 = 0;
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r11,r11,9
	ctx.r11.s64 = ctx.r11.s64 + 9;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r4,r11,r30
	ctx.r4.u64 = ctx.r11.u64 + ctx.r30.u64;
	// bl 0x82532cf8
	ctx.lr = 0x825326F0;
	sub_82532CF8(ctx, base);
	// stw r31,1576(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1576, ctx.r31.u32);
loc_825326F4:
	// lwz r11,1560(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1560);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8253270c
	if (!ctx.cr6.eq) goto loc_8253270C;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// li r7,0
	ctx.r7.s64 = 0;
	// beq cr6,0x82532710
	if (ctx.cr6.eq) goto loc_82532710;
loc_8253270C:
	// li r7,1
	ctx.r7.s64 = 1;
loc_82532710:
	// stw r7,1560(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1560, ctx.r7.u32);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq cr6,0x8253272c
	if (ctx.cr6.eq) goto loc_8253272C;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne cr6,0x8253272c
	if (!ctx.cr6.eq) goto loc_8253272C;
	// fmr f2,f29
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f29.f64;
	// b 0x82532730
	goto loc_82532730;
loc_8253272C:
	// lfs f2,1536(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1536);
	ctx.f2.f64 = double(temp.f32);
loc_82532730:
	// fsubs f0,f2,f27
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f2.f64 - ctx.f27.f64));
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// lfs f28,8552(r21)
	temp.u32 = PPC_LOAD_U32(ctx.r21.u32 + 8552);
	ctx.f28.f64 = double(temp.f32);
	// addi r11,r11,27984
	ctx.r11.s64 = ctx.r11.s64 + 27984;
	// stfs f30,96(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// lfs f31,240(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 240);
	ctx.f31.f64 = double(temp.f32);
	// lfd f29,256(r11)
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r11.u32 + 256);
	// fmuls f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// fctid f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvtsd_si64(_mm_load_sd(&ctx.f0.f64));
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fsub f0,f0,f13
	ctx.f0.f64 = ctx.f0.f64 - ctx.f13.f64;
	// fmul f0,f0,f29
	ctx.f0.f64 = ctx.f0.f64 * ctx.f29.f64;
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fabs f0,f0
	ctx.f0.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// fcmpu cr6,f0,f28
	ctx.cr6.compare(ctx.f0.f64, ctx.f28.f64);
	// bge cr6,0x8253277c
	if (!ctx.cr6.lt) goto loc_8253277C;
	// stfs f2,100(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// b 0x82532790
	goto loc_82532790;
loc_8253277C:
	// lfs f3,8556(r21)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r21.u32 + 8556);
	ctx.f3.f64 = double(temp.f32);
	// fmr f4,f26
	ctx.f4.f64 = ctx.f26.f64;
	// fmr f1,f27
	ctx.f1.f64 = ctx.f27.f64;
	// bl 0x8255c710
	ctx.lr = 0x8253278C;
	sub_8255C710(ctx, base);
	// stfs f1,100(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
loc_82532790:
	// lfs f0,1536(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1536);
	ctx.f0.f64 = double(temp.f32);
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// fsubs f0,f0,f27
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f27.f64));
	// stfs f30,104(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// lwz r9,104(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// fmuls f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f31.f64));
	// fctid f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvtsd_si64(_mm_load_sd(&ctx.f0.f64));
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fsub f0,f0,f13
	ctx.f0.f64 = ctx.f0.f64 - ctx.f13.f64;
	// fmul f0,f0,f29
	ctx.f0.f64 = ctx.f0.f64 * ctx.f29.f64;
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// fabs f0,f0
	ctx.f0.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// fcmpu cr6,f0,f28
	ctx.cr6.compare(ctx.f0.f64, ctx.f28.f64);
	// bge cr6,0x825327d8
	if (!ctx.cr6.lt) goto loc_825327D8;
	// li r8,1
	ctx.r8.s64 = 1;
loc_825327D8:
	// stw r11,0(r24)
	PPC_STORE_U32(ctx.r24.u32 + 0, ctx.r11.u32);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// stw r10,4(r24)
	PPC_STORE_U32(ctx.r24.u32 + 4, ctx.r10.u32);
	// stw r9,8(r24)
	PPC_STORE_U32(ctx.r24.u32 + 8, ctx.r9.u32);
	// beq cr6,0x82532690
	if (ctx.cr6.eq) goto loc_82532690;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// b 0x82532680
	goto loc_82532680;
loc_825327F4:
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq cr6,0x825325cc
	if (ctx.cr6.eq) goto loc_825325CC;
	// lwz r11,1540(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1540);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82532690
	if (ctx.cr6.eq) goto loc_82532690;
	// lfs f0,1540(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 1540);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f0,f26
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f26.f64));
	// fneg f13,f0
	ctx.f13.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// fsel f0,f13,f30,f0
	ctx.f0.f64 = ctx.f13.f64 >= 0.0 ? ctx.f30.f64 : ctx.f0.f64;
	// stfs f0,1540(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 1540, temp.u32);
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// bne cr6,0x82532690
	if (!ctx.cr6.eq) goto loc_82532690;
	// lwz r11,1568(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1568);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82532898
	if (ctx.cr6.eq) goto loc_82532898;
	// lwz r11,492(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 492);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x82532870
	if (ctx.cr6.lt) goto loc_82532870;
	// beq cr6,0x8253285c
	if (ctx.cr6.eq) goto loc_8253285C;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bge cr6,0x82532898
	if (!ctx.cr6.lt) goto loc_82532898;
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// li r4,5
	ctx.r4.s64 = 5;
	// addi r5,r11,14844
	ctx.r5.s64 = ctx.r11.s64 + 14844;
	// addi r3,r30,44
	ctx.r3.s64 = ctx.r30.s64 + 44;
	// b 0x82532880
	goto loc_82532880;
loc_8253285C:
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// li r4,5
	ctx.r4.s64 = 5;
	// addi r5,r11,14372
	ctx.r5.s64 = ctx.r11.s64 + 14372;
	// addi r3,r30,64
	ctx.r3.s64 = ctx.r30.s64 + 64;
	// b 0x82532880
	goto loc_82532880;
loc_82532870:
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// li r4,7
	ctx.r4.s64 = 7;
	// addi r5,r11,14848
	ctx.r5.s64 = ctx.r11.s64 + 14848;
	// addi r3,r30,8
	ctx.r3.s64 = ctx.r30.s64 + 8;
loc_82532880:
	// bl 0x82532b08
	ctx.lr = 0x82532884;
	sub_82532B08(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82532898
	if (ctx.cr6.eq) goto loc_82532898;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82532c48
	ctx.lr = 0x82532898;
	sub_82532C48(ctx, base);
loc_82532898:
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// lfs f13,112(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 112);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,25
	ctx.r11.s64 = 1638400;
	// lfs f0,116(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 116);
	ctx.f0.f64 = double(temp.f32);
	// lis r9,-32227
	ctx.r9.s64 = -2112028672;
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
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
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// lfs f11,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f11.f64 = double(temp.f32);
	// fsubs f0,f11,f0
	ctx.f0.f64 = double(float(ctx.f11.f64 - ctx.f0.f64));
	// fmadds f0,f12,f0,f13
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f0.f64 + ctx.f13.f64));
	// stfs f0,1540(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 1540, temp.u32);
	// b 0x82532690
	goto loc_82532690;
loc_825328EC:
	// lwz r11,1712(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1712);
	// lwz r11,400(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 400);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,276(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 276);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r11,r11,476
	ctx.r11.s64 = ctx.r11.s64 + 476;
	// bne cr6,0x8253290c
	if (!ctx.cr6.eq) goto loc_8253290C;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8253290C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82532924
	if (ctx.cr6.eq) goto loc_82532924;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r11,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// b 0x82532928
	goto loc_82532928;
loc_82532924:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82532928:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82532684
	if (!ctx.cr6.eq) goto loc_82532684;
	// li r7,0
	ctx.r7.s64 = 0;
	// fmr f2,f28
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f28.f64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82532cf8
	ctx.lr = 0x82532948;
	sub_82532CF8(ctx, base);
	// b 0x82532690
	goto loc_82532690;
}

__attribute__((alias("__imp__sub_8253294C"))) PPC_WEAK_FUNC(sub_8253294C);
PPC_FUNC_IMPL(__imp__sub_8253294C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82532950"))) PPC_WEAK_FUNC(sub_82532950);
PPC_FUNC_IMPL(__imp__sub_82532950) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x82532958;
	__savegprlr_29(ctx, base);
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,488(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 488);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpw cr6,r11,r4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r4.s32, ctx.xer);
	// beq cr6,0x82532af8
	if (ctx.cr6.eq) goto loc_82532AF8;
	// stw r4,488(r3)
	PPC_STORE_U32(ctx.r3.u32 + 488, ctx.r4.u32);
	// cmpwi cr6,r4,1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 1, ctx.xer);
	// beq cr6,0x82532a80
	if (ctx.cr6.eq) goto loc_82532A80;
	// cmpwi cr6,r4,2
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 2, ctx.xer);
	// beq cr6,0x825329d0
	if (ctx.cr6.eq) goto loc_825329D0;
	// cmpwi cr6,r4,3
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 3, ctx.xer);
	// bne cr6,0x82532af8
	if (!ctx.cr6.eq) goto loc_82532AF8;
	// lwz r11,1548(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1548);
	// lis r10,-32231
	ctx.r10.s64 = -2112290816;
	// addi r4,r3,496
	ctx.r4.s64 = ctx.r3.s64 + 496;
	// lfs f1,1544(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 1544);
	ctx.f1.f64 = double(temp.f32);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r7,r11,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// lfs f2,-2152(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -2152);
	ctx.f2.f64 = double(temp.f32);
	// bl 0x82532cf8
	ctx.lr = 0x825329AC;
	sub_82532CF8(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r29,0
	ctx.r29.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r29,1548(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1548, ctx.r29.u32);
	// stw r10,1572(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1572, ctx.r10.u32);
	// lfs f0,-2340(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -2340);
	ctx.f0.f64 = double(temp.f32);
	// stw r29,1552(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1552, ctx.r29.u32);
	// stfs f0,1544(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1544, temp.u32);
	// b 0x82532af8
	goto loc_82532AF8;
loc_825329D0:
	// vspltisw v0,1
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_set1_epi32(int(0x1)));
	// li r10,1680
	ctx.r10.s64 = 1680;
	// li r9,1520
	ctx.r9.s64 = 1520;
	// vspltisw v12,0
	_mm_store_si128((__m128i*)ctx.v12.u32, _mm_set1_epi32(int(0x0)));
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// vcfsx v10,v0,1
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v10.f32, _mm_mul_ps(_mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v0.u32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x3F000000)))));
	// addi r11,r11,-2152
	ctx.r11.s64 = ctx.r11.s64 + -2152;
	// lvx128 v0,r31,r10
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r31.u32 + ctx.r10.u32) & ~0xF), VectorMaskL));
	// li r29,0
	ctx.r29.s64 = 0;
	// lvx128 v13,r31,r9
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r31.u32 + ctx.r9.u32) & ~0xF), VectorMaskL));
	// li r30,1
	ctx.r30.s64 = 1;
	// vsubfp v0,v13,v0
	_mm_store_ps(ctx.v0.f32, _mm_sub_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v0.f32)));
	// lfs f0,8544(r11)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8544);
	ctx.f0.f64 = double(temp.f32);
	// vmsum3fp128 v8,v0,v0
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v8.f32, _mm_dp_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v0.f32), 0xEF));
	// vrsqrtefp v0,v8
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
	// stvx128 v13,r0,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lfs f13,80(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgt cr6,0x82532a40
	if (ctx.cr6.gt) goto loc_82532A40;
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
loc_82532A40:
	// cntlzw r10,r30
	ctx.r10.u64 = ctx.r30.u32 == 0 ? 32 : __builtin_clz(ctx.r30.u32);
	// lfs f2,8568(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8568);
	ctx.f2.f64 = double(temp.f32);
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// rlwinm r11,r10,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r11,r11,9
	ctx.r11.s64 = ctx.r11.s64 + 9;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f1,-2340(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -2340);
	ctx.f1.f64 = double(temp.f32);
	// add r4,r11,r31
	ctx.r4.u64 = ctx.r11.u64 + ctx.r31.u64;
	// bl 0x82532cf8
	ctx.lr = 0x82532A6C;
	sub_82532CF8(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r30,1576(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1576, ctx.r30.u32);
	// stw r11,1572(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1572, ctx.r11.u32);
	// stw r29,1560(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1560, ctx.r29.u32);
	// b 0x82532af8
	goto loc_82532AF8;
loc_82532A80:
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f31,-2340(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -2340);
	ctx.f31.f64 = double(temp.f32);
	// lfs f2,-2152(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -2152);
	ctx.f2.f64 = double(temp.f32);
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82532cf8
	ctx.lr = 0x82532AA4;
	sub_82532CF8(ctx, base);
	// lwz r11,1564(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1564);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r29,1572(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1572, ctx.r29.u32);
	// beq cr6,0x82532af8
	if (ctx.cr6.eq) goto loc_82532AF8;
	// li r11,1680
	ctx.r11.s64 = 1680;
	// stfs f31,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// li r10,1520
	ctx.r10.s64 = 1520;
	// lvx128 v0,r31,r11
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r31.u32 + ctx.r11.u32) & ~0xF), VectorMaskL));
	// lvx128 v13,r31,r10
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r31.u32 + ctx.r10.u32) & ~0xF), VectorMaskL));
	// vsubfp v1,v13,v0
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v1.f32, _mm_sub_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v0.f32)));
	// bl 0x8255c250
	ctx.lr = 0x82532AD4;
	sub_8255C250(ctx, base);
	// stfs f31,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// lwz r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stfs f1,84(r1)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// stw r29,1564(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1564, ctx.r29.u32);
	// stw r11,1700(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1700, ctx.r11.u32);
	// stw r9,1704(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1704, ctx.r9.u32);
	// stw r10,1696(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1696, ctx.r10.u32);
loc_82532AF8:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82532B04"))) PPC_WEAK_FUNC(sub_82532B04);
PPC_FUNC_IMPL(__imp__sub_82532B04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82532B08"))) PPC_WEAK_FUNC(sub_82532B08);
PPC_FUNC_IMPL(__imp__sub_82532B08) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x82532B10;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82532b58
	if (ctx.cr6.eq) goto loc_82532B58;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mtctr r31
	ctx.ctr.u64 = ctx.r31.u64;
loc_82532B34:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82532b50
	if (ctx.cr6.eq) goto loc_82532B50;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addic r9,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r9.s64 = ctx.r10.s64 + -1;
	// subfe. r10,r9,r10
	temp.u8 = (~ctx.r9.u32 + ctx.r10.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r9.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82532b50
	if (ctx.cr0.eq) goto loc_82532B50;
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
loc_82532B50:
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x82532b34
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82532B34;
loc_82532B58:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82532b7c
	if (ctx.cr6.eq) goto loc_82532B7C;
	// cmplwi cr6,r4,1
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 1, ctx.xer);
	// ble cr6,0x82532b7c
	if (!ctx.cr6.gt) goto loc_82532B7C;
	// lis r11,-31958
	ctx.r11.s64 = -2094399488;
	// lwz r5,0(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r3,r11,21292
	ctx.r3.s64 = ctx.r11.s64 + 21292;
	// bl 0x825562b8
	ctx.lr = 0x82532B78;
	sub_825562B8(ctx, base);
	// b 0x82532bdc
	goto loc_82532BDC;
loc_82532B7C:
	// lis r10,-31958
	ctx.r10.s64 = -2094399488;
	// lis r11,25
	ctx.r11.s64 = 1638400;
	// extsw r9,r4
	ctx.r9.s64 = ctx.r4.s32;
	// ori r8,r11,26125
	ctx.r8.u64 = ctx.r11.u64 | 26125;
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// lwz r11,21292(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 21292);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// mullw r11,r11,r8
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r8.s32);
	// frsp f13,f0
	ctx.f13.f64 = double(float(ctx.f0.f64));
	// addis r11,r11,15471
	ctx.r11.s64 = ctx.r11.s64 + 1013907456;
	// lis r9,-32227
	ctx.r9.s64 = -2112028672;
	// addi r11,r11,-3233
	ctx.r11.s64 = ctx.r11.s64 + -3233;
	// clrlwi r8,r11,9
	ctx.r8.u64 = ctx.r11.u32 & 0x7FFFFF;
	// stw r11,21292(r10)
	PPC_STORE_U32(ctx.r10.u32 + 21292, ctx.r11.u32);
	// oris r11,r8,16256
	ctx.r11.u64 = ctx.r8.u64 | 1065353216;
	// lfs f0,-24756(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -24756);
	ctx.f0.f64 = double(temp.f32);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lfs f12,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f0.f64));
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
loc_82532BDC:
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82532c1c
	if (ctx.cr6.eq) goto loc_82532C1C;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
loc_82532BEC:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82532c0c
	if (ctx.cr6.eq) goto loc_82532C0C;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addic r8,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r8.s64 = ctx.r9.s64 + -1;
	// subfe. r9,r8,r9
	temp.u8 = (~ctx.r8.u32 + ctx.r9.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r8.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x82532c0c
	if (ctx.cr0.eq) goto loc_82532C0C;
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x82532c2c
	if (ctx.cr6.eq) goto loc_82532C2C;
loc_82532C0C:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
	// blt cr6,0x82532bec
	if (ctx.cr6.lt) goto loc_82532BEC;
loc_82532C1C:
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// addi r3,r11,31460
	ctx.r3.s64 = ctx.r11.s64 + 31460;
loc_82532C24:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
loc_82532C2C:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82532c38
	if (ctx.cr6.eq) goto loc_82532C38;
	// stw r3,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r3.u32);
loc_82532C38:
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r11,r30
	ctx.r3.u64 = ctx.r11.u64 + ctx.r30.u64;
	// b 0x82532c24
	goto loc_82532C24;
}

__attribute__((alias("__imp__sub_82532C44"))) PPC_WEAK_FUNC(sub_82532C44);
PPC_FUNC_IMPL(__imp__sub_82532C44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82532C48"))) PPC_WEAK_FUNC(sub_82532C48);
PPC_FUNC_IMPL(__imp__sub_82532C48) {
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
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lfs f1,1544(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 1544);
	ctx.f1.f64 = double(temp.f32);
	// lwz r10,488(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 488);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r4,r3,496
	ctx.r4.s64 = ctx.r3.s64 + 496;
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// stw r11,496(r3)
	PPC_STORE_U32(ctx.r3.u32 + 496, ctx.r11.u32);
	// beq cr6,0x82532cb8
	if (ctx.cr6.eq) goto loc_82532CB8;
	// li r11,3
	ctx.r11.s64 = 3;
	// lwz r10,1548(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1548);
	// lis r9,-32231
	ctx.r9.s64 = -2112290816;
	// stw r11,488(r3)
	PPC_STORE_U32(ctx.r3.u32 + 488, ctx.r11.u32);
	// cntlzw r11,r10
	ctx.r11.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// rlwinm r7,r11,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// lfs f2,-2152(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -2152);
	ctx.f2.f64 = double(temp.f32);
	// bl 0x82532cf8
	ctx.lr = 0x82532C98;
	sub_82532CF8(ctx, base);
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r11,1548(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1548, ctx.r11.u32);
	// stw r9,1572(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1572, ctx.r9.u32);
	// lfs f0,-2340(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -2340);
	ctx.f0.f64 = double(temp.f32);
	// stw r11,1552(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1552, ctx.r11.u32);
	// b 0x82532ce0
	goto loc_82532CE0;
loc_82532CB8:
	// lwz r11,1548(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1548);
	// lis r10,-32231
	ctx.r10.s64 = -2112290816;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r7,r11,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// lfs f2,-2152(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -2152);
	ctx.f2.f64 = double(temp.f32);
	// bl 0x82532cf8
	ctx.lr = 0x82532CD0;
	sub_82532CF8(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,1548(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1548, ctx.r10.u32);
	// lfs f0,-2340(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -2340);
	ctx.f0.f64 = double(temp.f32);
loc_82532CE0:
	// stfs f0,1544(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1544, temp.u32);
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

__attribute__((alias("__imp__sub_82532CF8"))) PPC_WEAK_FUNC(sub_82532CF8);
PPC_FUNC_IMPL(__imp__sub_82532CF8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-32227
	ctx.r10.s64 = -2112028672;
	// stw r7,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r7.u32);
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// stfs f1,100(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// lis r8,-32231
	ctx.r8.s64 = -2112290816;
	// stfs f2,112(r1)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// lis r7,19817
	ctx.r7.s64 = 1298726912;
	// lwz r3,1712(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1712);
	// li r11,0
	ctx.r11.s64 = 0;
	// lfs f0,-24756(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -24756);
	ctx.f0.f64 = double(temp.f32);
	// ori r7,r7,30800
	ctx.r7.u64 = ctx.r7.u64 | 30800;
	// lfs f13,-2340(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -2340);
	ctx.f13.f64 = double(temp.f32);
	// li r10,32
	ctx.r10.s64 = 32;
	// li r9,64
	ctx.r9.s64 = 64;
	// lfs f12,-2152(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -2152);
	ctx.f12.f64 = double(temp.f32);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stw r7,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r7.u32);
	// stfs f13,88(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// stfs f12,96(r1)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// stw r9,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r9.u32);
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// stw r11,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// stw r11,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r11.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
	// bl 0x825678a0
	ctx.lr = 0x82532D7C;
	sub_825678A0(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82532D8C"))) PPC_WEAK_FUNC(sub_82532D8C);
PPC_FUNC_IMPL(__imp__sub_82532D8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82532D90"))) PPC_WEAK_FUNC(sub_82532D90);
PPC_FUNC_IMPL(__imp__sub_82532D90) {
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
	// addi r12,r1,-24
	ctx.r12.s64 = ctx.r1.s64 + -24;
	// bl 0x82fa8d24
	ctx.lr = 0x82532DA8;
	__savefpr_27(ctx, base);
	// li r12,-80
	ctx.r12.s64 = -80;
	// stvx128 v127,r1,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r1.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v127.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,1712(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1712);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,400(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 400);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x82822098
	ctx.lr = 0x82532DC8;
	sub_82822098(ctx, base);
	// lbz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 28);
	// rlwinm. r11,r11,0,25,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x70;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82532f74
	if (ctx.cr0.eq) goto loc_82532F74;
	// lwz r11,1572(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1572);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82532f74
	if (ctx.cr6.eq) goto loc_82532F74;
	// lwz r3,1708(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1708);
	// bl 0x82822098
	ctx.lr = 0x82532DE8;
	sub_82822098(ctx, base);
	// li r10,4
	ctx.r10.s64 = 4;
	// lvlx v0,0,r3
	temp.u32 = ctx.r3.u32;
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// li r9,12
	ctx.r9.s64 = 12;
	// li r8,8
	ctx.r8.s64 = 8;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// lvlx v13,r3,r10
	temp.u32 = ctx.r3.u32 + ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// addi r30,r11,-2340
	ctx.r30.s64 = ctx.r11.s64 + -2340;
	// vrlimi128 v0,v13,4,3
	_mm_store_ps(ctx.v0.f32, _mm_blend_ps(_mm_load_ps(ctx.v0.f32), _mm_permute_ps(_mm_load_ps(ctx.v13.f32), 57), 4));
	// lvlx v13,r3,r9
	temp.u32 = ctx.r3.u32 + ctx.r9.u32;
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx v12,r3,r8
	temp.u32 = ctx.r3.u32 + ctx.r8.u32;
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// vrlimi128 v12,v13,4,3
	_mm_store_ps(ctx.v12.f32, _mm_blend_ps(_mm_load_ps(ctx.v12.f32), _mm_permute_ps(_mm_load_ps(ctx.v13.f32), 57), 4));
	// lis r10,-32227
	ctx.r10.s64 = -2112028672;
	// li r9,20
	ctx.r9.s64 = 20;
	// lvlx v13,0,r30
	temp.u32 = ctx.r30.u32;
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// li r8,16
	ctx.r8.s64 = 16;
	// vrlimi128 v0,v12,3,2
	_mm_store_ps(ctx.v0.f32, _mm_blend_ps(_mm_load_ps(ctx.v0.f32), _mm_permute_ps(_mm_load_ps(ctx.v12.f32), 78), 3));
	// lfs f0,31396(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 31396);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,-24756(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -24756);
	ctx.f12.f64 = double(temp.f32);
	// li r11,24
	ctx.r11.s64 = 24;
	// lvlx v12,r3,r9
	temp.u32 = ctx.r3.u32 + ctx.r9.u32;
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// li r10,108
	ctx.r10.s64 = 108;
	// lvlx v11,r3,r8
	temp.u32 = ctx.r3.u32 + ctx.r8.u32;
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lis r9,-32231
	ctx.r9.s64 = -2112290816;
	// stvx128 v0,r0,r7
	_mm_store_si128((__m128i*)(base + ((ctx.r7.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// vrlimi128 v11,v12,4,3
	_mm_store_ps(ctx.v11.f32, _mm_blend_ps(_mm_load_ps(ctx.v11.f32), _mm_permute_ps(_mm_load_ps(ctx.v12.f32), 57), 4));
	// lfs f11,84(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f11.f64 = double(temp.f32);
	// lfs f7,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f7.f64 = double(temp.f32);
	// lfs f10,92(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f10.f64 = double(temp.f32);
	// lfs f13,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f9,f13,f0
	ctx.f9.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fmuls f4,f11,f0
	ctx.f4.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// lvlx v12,r3,r11
	temp.u32 = ctx.r3.u32 + ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// fmuls f5,f7,f0
	ctx.f5.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// vrlimi128 v12,v13,4,3
	_mm_store_ps(ctx.v12.f32, _mm_blend_ps(_mm_load_ps(ctx.v12.f32), _mm_permute_ps(_mm_load_ps(ctx.v13.f32), 57), 4));
	// fmuls f0,f13,f9
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f9.f64));
	// lvlx v10,r31,r10
	temp.u32 = ctx.r31.u32 + ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v10.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// fmuls f3,f10,f9
	ctx.f3.f64 = double(float(ctx.f10.f64 * ctx.f9.f64));
	// addi r11,r9,27984
	ctx.r11.s64 = ctx.r9.s64 + 27984;
	// vspltw v13,v10,0
	_mm_store_si128((__m128i*)ctx.v13.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v10.u32), 0xFF));
	// vrlimi128 v11,v12,3,2
	_mm_store_ps(ctx.v11.f32, _mm_blend_ps(_mm_load_ps(ctx.v11.f32), _mm_permute_ps(_mm_load_ps(ctx.v12.f32), 78), 3));
	// lfs f6,404(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 404);
	ctx.f6.f64 = double(temp.f32);
	// vmulfp128 v127,v11,v13
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v127.f32, _mm_mul_ps(_mm_load_ps(ctx.v11.f32), _mm_load_ps(ctx.v13.f32)));
	// fmuls f9,f11,f4
	ctx.fpscr.disableFlushModeUnconditional();
	ctx.f9.f64 = double(float(ctx.f11.f64 * ctx.f4.f64));
	// fmuls f2,f5,f13
	ctx.f2.f64 = double(float(ctx.f5.f64 * ctx.f13.f64));
	// fmuls f8,f10,f5
	ctx.f8.f64 = double(float(ctx.f10.f64 * ctx.f5.f64));
	// fmsubs f28,f5,f11,f3
	ctx.f28.f64 = double(float(ctx.f5.f64 * ctx.f11.f64 - ctx.f3.f64));
	// fmuls f13,f4,f13
	ctx.f13.f64 = double(float(ctx.f4.f64 * ctx.f13.f64));
	// fmuls f7,f7,f5
	ctx.f7.f64 = double(float(ctx.f7.f64 * ctx.f5.f64));
	// fadds f11,f9,f0
	ctx.f11.f64 = double(float(ctx.f9.f64 + ctx.f0.f64));
	// fmadds f31,f10,f4,f2
	ctx.f31.f64 = double(float(ctx.f10.f64 * ctx.f4.f64 + ctx.f2.f64));
	// fsubs f30,f12,f11
	ctx.f30.f64 = double(float(ctx.f12.f64 - ctx.f11.f64));
	// fmuls f10,f31,f31
	ctx.f10.f64 = double(float(ctx.f31.f64 * ctx.f31.f64));
	// fmadds f11,f30,f30,f10
	ctx.f11.f64 = double(float(ctx.f30.f64 * ctx.f30.f64 + ctx.f10.f64));
	// fsqrts f29,f11
	ctx.f29.f64 = double(float(sqrt(ctx.f11.f64)));
	// fcmpu cr6,f29,f6
	ctx.cr6.compare(ctx.f29.f64, ctx.f6.f64);
	// ble cr6,0x82532f04
	if (!ctx.cr6.gt) goto loc_82532F04;
	// fadds f0,f7,f0
	ctx.f0.f64 = double(float(ctx.f7.f64 + ctx.f0.f64));
	// fadds f1,f13,f8
	ctx.f1.f64 = double(float(ctx.f13.f64 + ctx.f8.f64));
	// fsubs f2,f12,f0
	ctx.f2.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
	// bl 0x8283c560
	ctx.lr = 0x82532EE0;
	sub_8283C560(ctx, base);
	// fmr f27,f1
	ctx.fpscr.disableFlushMode();
	ctx.f27.f64 = ctx.f1.f64;
	// fmr f2,f29
	ctx.f2.f64 = ctx.f29.f64;
	// fneg f1,f28
	ctx.f1.u64 = ctx.f28.u64 ^ 0x8000000000000000;
	// bl 0x8283c560
	ctx.lr = 0x82532EF0;
	sub_8283C560(ctx, base);
	// fmr f29,f1
	ctx.fpscr.disableFlushMode();
	ctx.f29.f64 = ctx.f1.f64;
	// fmr f2,f30
	ctx.f2.f64 = ctx.f30.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x8283c560
	ctx.lr = 0x82532F00;
	sub_8283C560(ctx, base);
	// b 0x82532f34
	goto loc_82532F34;
loc_82532F04:
	// fadds f0,f7,f9
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f7.f64 + ctx.f9.f64));
	// fsubs f13,f13,f8
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f8.f64));
	// fsubs f2,f12,f0
	ctx.f2.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
	// fneg f1,f13
	ctx.f1.u64 = ctx.f13.u64 ^ 0x8000000000000000;
	// bl 0x8283c560
	ctx.lr = 0x82532F18;
	sub_8283C560(ctx, base);
	// fmr f27,f1
	ctx.fpscr.disableFlushMode();
	ctx.f27.f64 = ctx.f1.f64;
	// fmr f2,f29
	ctx.f2.f64 = ctx.f29.f64;
	// fneg f1,f28
	ctx.f1.u64 = ctx.f28.u64 ^ 0x8000000000000000;
	// bl 0x8283c560
	ctx.lr = 0x82532F28;
	sub_8283C560(ctx, base);
	// lfs f0,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fmr f29,f1
	ctx.f29.f64 = ctx.f1.f64;
	// fmr f1,f0
	ctx.f1.f64 = ctx.f0.f64;
loc_82532F34:
	// lfs f0,1696(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1696);
	ctx.f0.f64 = double(temp.f32);
	// vor128 v1,v127,v127
	_mm_store_si128((__m128i*)ctx.v1.u8, _mm_load_si128((__m128i*)ctx.v127.u8));
	// lfs f13,1700(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1700);
	ctx.f13.f64 = double(temp.f32);
	// fadds f0,f29,f0
	ctx.f0.f64 = double(float(ctx.f29.f64 + ctx.f0.f64));
	// lfs f12,1704(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 1704);
	ctx.f12.f64 = double(temp.f32);
	// fadds f13,f13,f1
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f1.f64));
	// fadds f12,f12,f27
	ctx.f12.f64 = double(float(ctx.f12.f64 + ctx.f27.f64));
	// stfs f0,1696(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1696, temp.u32);
	// stfs f13,1700(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1700, temp.u32);
	// addi r3,r31,1696
	ctx.r3.s64 = ctx.r31.s64 + 1696;
	// stfs f12,1704(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 1704, temp.u32);
	// bl 0x8255ca08
	ctx.lr = 0x82532F64;
	sub_8255CA08(ctx, base);
	// addi r11,r31,1680
	ctx.r11.s64 = ctx.r31.s64 + 1680;
	// lvx128 v0,r0,r11
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// vaddfp v0,v0,v1
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v1.f32)));
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
loc_82532F74:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// li r0,-80
	ctx.r0.s64 = -80;
	// lvx128 v127,r1,r0
	simd::store_shuffled(ctx.v127, simd::load_and_shuffle(base + ((ctx.r1.u32 + ctx.r0.u32) & ~0xF), VectorMaskL));
	// addi r12,r1,-24
	ctx.r12.s64 = ctx.r1.s64 + -24;
	// bl 0x82fa8d70
	ctx.lr = 0x82532F88;
	__restfpr_27(ctx, base);
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

__attribute__((alias("__imp__sub_82532F9C"))) PPC_WEAK_FUNC(sub_82532F9C);
PPC_FUNC_IMPL(__imp__sub_82532F9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82532FA0"))) PPC_WEAK_FUNC(sub_82532FA0);
PPC_FUNC_IMPL(__imp__sub_82532FA0) {
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
	// lwz r3,1708(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1708);
	// bl 0x8282b920
	ctx.lr = 0x82532FC0;
	sub_8282B920(ctx, base);
	// lwz r3,1708(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1708);
	// bl 0x8282c0d8
	ctx.lr = 0x82532FC8;
	sub_8282C0D8(ctx, base);
	// lwz r11,1596(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1596);
	// addi r30,r11,128
	ctx.r30.s64 = ctx.r11.s64 + 128;
	// bl 0x8250f738
	ctx.lr = 0x82532FD4;
	sub_8250F738(ctx, base);
	// lwz r11,1596(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1596);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,100(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 100);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,172(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 172);
	// lwzx r30,r11,r30
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82532FFC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// lwz r3,1708(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1708);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// beq 0x82533048
	if (ctx.cr0.eq) goto loc_82533048;
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x8282c270
	ctx.lr = 0x8253301C;
	sub_8282C270(ctx, base);
	// lwz r11,1596(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1596);
	// lwz r3,436(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 436);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82533034;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r11,5056
	ctx.r4.s64 = ctx.r11.s64 + 5056;
	// bl 0x82579400
	ctx.lr = 0x82533044;
	sub_82579400(ctx, base);
	// b 0x82533050
	goto loc_82533050;
loc_82533048:
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x8282c270
	ctx.lr = 0x82533050;
	sub_8282C270(ctx, base);
loc_82533050:
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

__attribute__((alias("__imp__sub_82533068"))) PPC_WEAK_FUNC(sub_82533068);
PPC_FUNC_IMPL(__imp__sub_82533068) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa765c
	ctx.lr = 0x82533070;
	__savegprlr_21(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r26,r3,1600
	ctx.r26.s64 = ctx.r3.s64 + 1600;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// li r5,72
	ctx.r5.s64 = 72;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82a75988
	ctx.lr = 0x82533094;
	sub_82A75988(ctx, base);
	// li r24,0
	ctx.r24.s64 = 0;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// mr r22,r24
	ctx.r22.u64 = ctx.r24.u64;
	// mr r21,r24
	ctx.r21.u64 = ctx.r24.u64;
	// beq cr6,0x825330e0
	if (ctx.cr6.eq) goto loc_825330E0;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe. r11,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825330e0
	if (ctx.cr0.eq) goto loc_825330E0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82546708
	ctx.lr = 0x825330C8;
	sub_82546708(ctx, base);
	// mr. r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// beq 0x825330e0
	if (ctx.cr0.eq) goto loc_825330E0;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x82546b30
	ctx.lr = 0x825330D8;
	sub_82546B30(ctx, base);
	// rlwinm r11,r3,27,5,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 27) & 0x7FFFFFF;
	// stw r11,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r11.u32);
loc_825330E0:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82533120
	if (ctx.cr6.eq) goto loc_82533120;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe. r11,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82533120
	if (ctx.cr0.eq) goto loc_82533120;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82546708
	ctx.lr = 0x82533108;
	sub_82546708(ctx, base);
	// mr. r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r21.s32, 0, ctx.xer);
	// beq 0x82533120
	if (ctx.cr0.eq) goto loc_82533120;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x82546b30
	ctx.lr = 0x82533118;
	sub_82546B30(ctx, base);
	// rlwinm r11,r3,27,5,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 27) & 0x7FFFFFF;
	// stw r11,1636(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1636, ctx.r11.u32);
loc_82533120:
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 0, ctx.xer);
	// addi r23,r11,-22432
	ctx.r23.s64 = ctx.r11.s64 + -22432;
	// beq cr6,0x82533518
	if (ctx.cr6.eq) goto loc_82533518;
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82533518
	if (ctx.cr6.eq) goto loc_82533518;
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82547c40
	ctx.lr = 0x82533144;
	sub_82547C40(ctx, base);
	// stw r3,1604(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1604, ctx.r3.u32);
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82547c40
	ctx.lr = 0x82533154;
	sub_82547C40(ctx, base);
	// stw r3,1608(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1608, ctx.r3.u32);
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// rlwinm r3,r11,3,0,28
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// bl 0x82547c40
	ctx.lr = 0x82533164;
	sub_82547C40(ctx, base);
	// stw r3,1612(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1612, ctx.r3.u32);
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82547c40
	ctx.lr = 0x82533174;
	sub_82547C40(ctx, base);
	// stw r3,1616(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1616, ctx.r3.u32);
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82547c40
	ctx.lr = 0x82533184;
	sub_82547C40(ctx, base);
	// stw r3,1620(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1620, ctx.r3.u32);
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82547c40
	ctx.lr = 0x82533194;
	sub_82547C40(ctx, base);
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// stw r3,1624(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1624, ctx.r3.u32);
	// mr r25,r24
	ctx.r25.u64 = ctx.r24.u64;
	// stw r24,1628(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1628, ctx.r24.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r24,1632(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1632, ctx.r24.u32);
	// ble cr6,0x82533518
	if (!ctx.cr6.gt) goto loc_82533518;
	// mr r30,r24
	ctx.r30.u64 = ctx.r24.u64;
	// mr r27,r24
	ctx.r27.u64 = ctx.r24.u64;
	// addi r28,r22,4
	ctx.r28.s64 = ctx.r22.s64 + 4;
loc_825331BC:
	// lwz r11,20(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20);
	// addic. r10,r28,-4
	ctx.xer.ca = ctx.r28.u32 > 3;
	ctx.r10.s64 = ctx.r28.s64 + -4;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lwz r9,1628(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1628);
	// lwz r8,1632(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1632);
	// or r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 | ctx.r9.u64;
	// stw r11,1628(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1628, ctx.r11.u32);
	// lwz r11,24(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 24);
	// or r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 | ctx.r8.u64;
	// stw r11,1632(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1632, ctx.r11.u32);
	// beq 0x82533234
	if (ctx.cr0.eq) goto loc_82533234;
	// lwz r11,-4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + -4);
	// addi r29,r28,-4
	ctx.r29.s64 = ctx.r28.s64 + -4;
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe. r11,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82533234
	if (ctx.cr0.eq) goto loc_82533234;
	// li r3,512
	ctx.r3.s64 = 512;
	// bl 0x82691500
	ctx.lr = 0x82533200;
	sub_82691500(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82533224
	if (ctx.cr0.eq) goto loc_82533224;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x8257f968
	ctx.lr = 0x82533220;
	sub_8257F968(ctx, base);
	// b 0x82533228
	goto loc_82533228;
loc_82533224:
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
loc_82533228:
	// lwz r11,1604(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1604);
	// stwx r3,r30,r11
	PPC_STORE_U32(ctx.r30.u32 + ctx.r11.u32, ctx.r3.u32);
	// b 0x8253323c
	goto loc_8253323C;
loc_82533234:
	// lwz r11,1604(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1604);
	// stwx r24,r30,r11
	PPC_STORE_U32(ctx.r30.u32 + ctx.r11.u32, ctx.r24.u32);
loc_8253323C:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82533290
	if (ctx.cr6.eq) goto loc_82533290;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe. r11,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82533290
	if (ctx.cr0.eq) goto loc_82533290;
	// li r3,512
	ctx.r3.s64 = 512;
	// bl 0x82691500
	ctx.lr = 0x8253325C;
	sub_82691500(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82533280
	if (ctx.cr0.eq) goto loc_82533280;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x8257f968
	ctx.lr = 0x8253327C;
	sub_8257F968(ctx, base);
	// b 0x82533284
	goto loc_82533284;
loc_82533280:
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
loc_82533284:
	// lwz r11,1608(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1608);
	// stwx r3,r11,r30
	PPC_STORE_U32(ctx.r11.u32 + ctx.r30.u32, ctx.r3.u32);
	// b 0x82533298
	goto loc_82533298;
loc_82533290:
	// lwz r11,1608(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1608);
	// stwx r24,r11,r30
	PPC_STORE_U32(ctx.r11.u32 + ctx.r30.u32, ctx.r24.u32);
loc_82533298:
	// addic. r3,r28,4
	ctx.xer.ca = ctx.r28.u32 > 4294967291;
	ctx.r3.s64 = ctx.r28.s64 + 4;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x825332e4
	if (ctx.cr0.eq) goto loc_825332E4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe. r11,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825332e4
	if (ctx.cr0.eq) goto loc_825332E4;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82546708
	ctx.lr = 0x825332BC;
	sub_82546708(ctx, base);
	// lwz r11,1612(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1612);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x825332e8
	if (ctx.cr0.eq) goto loc_825332E8;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r10,r3,4
	ctx.r10.s64 = ctx.r3.s64 + 4;
	// stwx r9,r11,r27
	PPC_STORE_U32(ctx.r11.u32 + ctx.r27.u32, ctx.r9.u32);
	// lwz r11,1612(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1612);
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + ctx.r27.u64;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// b 0x825332f8
	goto loc_825332F8;
loc_825332E4:
	// lwz r11,1612(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1612);
loc_825332E8:
	// stwx r24,r11,r27
	PPC_STORE_U32(ctx.r11.u32 + ctx.r27.u32, ctx.r24.u32);
	// lwz r11,1612(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1612);
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + ctx.r27.u64;
	// stw r24,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r24.u32);
loc_825332F8:
	// addic. r3,r28,8
	ctx.xer.ca = ctx.r28.u32 > 4294967287;
	ctx.r3.s64 = ctx.r28.s64 + 8;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8253339c
	if (ctx.cr0.eq) goto loc_8253339C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe. r11,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8253339c
	if (ctx.cr0.eq) goto loc_8253339C;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82546708
	ctx.lr = 0x8253331C;
	sub_82546708(ctx, base);
	// lwz r11,1616(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1616);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,0
	ctx.r4.s64 = 0;
	// stwx r3,r30,r11
	PPC_STORE_U32(ctx.r30.u32 + ctx.r11.u32, ctx.r3.u32);
	// lwz r11,1616(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1616);
	// lwzx r11,r30,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// lwz r3,20(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// bl 0x8286de68
	ctx.lr = 0x8253333C;
	sub_8286DE68(ctx, base);
	// lwz r11,1604(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1604);
	// lwzx r10,r30,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8253336c
	if (ctx.cr6.eq) goto loc_8253336C;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82533364
	if (ctx.cr6.eq) goto loc_82533364;
	// stw r9,412(r11)
	PPC_STORE_U32(ctx.r11.u32 + 412, ctx.r9.u32);
	// b 0x8253336c
	goto loc_8253336C;
loc_82533364:
	// lwz r10,36(r23)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r23.u32 + 36);
	// stw r10,412(r11)
	PPC_STORE_U32(ctx.r11.u32 + 412, ctx.r10.u32);
loc_8253336C:
	// lwz r11,1608(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1608);
	// lwzx r10,r11,r30
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x825333a4
	if (ctx.cr6.eq) goto loc_825333A4;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82533390
	if (ctx.cr6.eq) goto loc_82533390;
	// stw r9,412(r11)
	PPC_STORE_U32(ctx.r11.u32 + 412, ctx.r9.u32);
	// b 0x825333a4
	goto loc_825333A4;
loc_82533390:
	// lwz r10,36(r23)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r23.u32 + 36);
	// stw r10,412(r11)
	PPC_STORE_U32(ctx.r11.u32 + 412, ctx.r10.u32);
	// b 0x825333a4
	goto loc_825333A4;
loc_8253339C:
	// lwz r11,1616(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1616);
	// stwx r24,r30,r11
	PPC_STORE_U32(ctx.r30.u32 + ctx.r11.u32, ctx.r24.u32);
loc_825333A4:
	// addic. r3,r28,12
	ctx.xer.ca = ctx.r28.u32 > 4294967283;
	ctx.r3.s64 = ctx.r28.s64 + 12;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82533448
	if (ctx.cr0.eq) goto loc_82533448;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe. r11,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82533448
	if (ctx.cr0.eq) goto loc_82533448;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82546708
	ctx.lr = 0x825333C8;
	sub_82546708(ctx, base);
	// lwz r11,1620(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1620);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// li r4,0
	ctx.r4.s64 = 0;
	// stwx r3,r11,r30
	PPC_STORE_U32(ctx.r11.u32 + ctx.r30.u32, ctx.r3.u32);
	// lwz r11,1620(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1620);
	// lwzx r11,r11,r30
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// lwz r3,20(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// bl 0x8286de68
	ctx.lr = 0x825333E8;
	sub_8286DE68(ctx, base);
	// lwz r11,1604(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1604);
	// lwzx r10,r30,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82533418
	if (ctx.cr6.eq) goto loc_82533418;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82533410
	if (ctx.cr6.eq) goto loc_82533410;
	// stw r9,416(r11)
	PPC_STORE_U32(ctx.r11.u32 + 416, ctx.r9.u32);
	// b 0x82533418
	goto loc_82533418;
loc_82533410:
	// lwz r10,36(r23)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r23.u32 + 36);
	// stw r10,416(r11)
	PPC_STORE_U32(ctx.r11.u32 + 416, ctx.r10.u32);
loc_82533418:
	// lwz r11,1608(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1608);
	// lwzx r10,r11,r30
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82533450
	if (ctx.cr6.eq) goto loc_82533450;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8253343c
	if (ctx.cr6.eq) goto loc_8253343C;
	// stw r9,416(r11)
	PPC_STORE_U32(ctx.r11.u32 + 416, ctx.r9.u32);
	// b 0x82533450
	goto loc_82533450;
loc_8253343C:
	// lwz r10,36(r23)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r23.u32 + 36);
	// stw r10,416(r11)
	PPC_STORE_U32(ctx.r11.u32 + 416, ctx.r10.u32);
	// b 0x82533450
	goto loc_82533450;
loc_82533448:
	// lwz r11,1620(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1620);
	// stwx r24,r11,r30
	PPC_STORE_U32(ctx.r11.u32 + ctx.r30.u32, ctx.r24.u32);
loc_82533450:
	// addic. r3,r28,16
	ctx.xer.ca = ctx.r28.u32 > 4294967279;
	ctx.r3.s64 = ctx.r28.s64 + 16;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x825334f4
	if (ctx.cr0.eq) goto loc_825334F4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe. r11,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825334f4
	if (ctx.cr0.eq) goto loc_825334F4;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82546708
	ctx.lr = 0x82533474;
	sub_82546708(ctx, base);
	// lwz r11,1624(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1624);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// li r4,0
	ctx.r4.s64 = 0;
	// stwx r3,r30,r11
	PPC_STORE_U32(ctx.r30.u32 + ctx.r11.u32, ctx.r3.u32);
	// lwz r11,1624(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1624);
	// lwzx r11,r30,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// lwz r3,20(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// bl 0x8286de68
	ctx.lr = 0x82533494;
	sub_8286DE68(ctx, base);
	// lwz r11,1604(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1604);
	// lwz r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwzx r10,r30,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x825334c4
	if (ctx.cr6.eq) goto loc_825334C4;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x825334bc
	if (ctx.cr6.eq) goto loc_825334BC;
	// stw r9,420(r11)
	PPC_STORE_U32(ctx.r11.u32 + 420, ctx.r9.u32);
	// b 0x825334c4
	goto loc_825334C4;
loc_825334BC:
	// lwz r10,36(r23)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r23.u32 + 36);
	// stw r10,420(r11)
	PPC_STORE_U32(ctx.r11.u32 + 420, ctx.r10.u32);
loc_825334C4:
	// lwz r11,1608(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1608);
	// lwzx r10,r11,r30
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x825334fc
	if (ctx.cr6.eq) goto loc_825334FC;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x825334e8
	if (ctx.cr6.eq) goto loc_825334E8;
	// stw r9,420(r11)
	PPC_STORE_U32(ctx.r11.u32 + 420, ctx.r9.u32);
	// b 0x825334fc
	goto loc_825334FC;
loc_825334E8:
	// lwz r10,36(r23)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r23.u32 + 36);
	// stw r10,420(r11)
	PPC_STORE_U32(ctx.r11.u32 + 420, ctx.r10.u32);
	// b 0x825334fc
	goto loc_825334FC;
loc_825334F4:
	// lwz r11,1624(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1624);
	// stwx r24,r30,r11
	PPC_STORE_U32(ctx.r30.u32 + ctx.r11.u32, ctx.r24.u32);
loc_825334FC:
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// addi r27,r27,8
	ctx.r27.s64 = ctx.r27.s64 + 8;
	// addi r28,r28,32
	ctx.r28.s64 = ctx.r28.s64 + 32;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmplw cr6,r25,r11
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x825331bc
	if (ctx.cr6.lt) goto loc_825331BC;
loc_82533518:
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, 0, ctx.xer);
	// beq cr6,0x82533908
	if (ctx.cr6.eq) goto loc_82533908;
	// lwz r11,1636(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1636);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82533908
	if (ctx.cr6.eq) goto loc_82533908;
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82547c40
	ctx.lr = 0x82533534;
	sub_82547C40(ctx, base);
	// stw r3,1640(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1640, ctx.r3.u32);
	// lwz r11,1636(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1636);
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82547c40
	ctx.lr = 0x82533544;
	sub_82547C40(ctx, base);
	// stw r3,1644(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1644, ctx.r3.u32);
	// lwz r11,1636(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1636);
	// rlwinm r3,r11,3,0,28
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// bl 0x82547c40
	ctx.lr = 0x82533554;
	sub_82547C40(ctx, base);
	// stw r3,1648(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1648, ctx.r3.u32);
	// lwz r11,1636(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1636);
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82547c40
	ctx.lr = 0x82533564;
	sub_82547C40(ctx, base);
	// stw r3,1652(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1652, ctx.r3.u32);
	// lwz r11,1636(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1636);
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82547c40
	ctx.lr = 0x82533574;
	sub_82547C40(ctx, base);
	// stw r3,1656(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1656, ctx.r3.u32);
	// lwz r11,1636(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1636);
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82547c40
	ctx.lr = 0x82533584;
	sub_82547C40(ctx, base);
	// lwz r11,1636(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1636);
	// stw r3,1660(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1660, ctx.r3.u32);
	// mr r26,r24
	ctx.r26.u64 = ctx.r24.u64;
	// stw r24,1664(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1664, ctx.r24.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r24,1668(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1668, ctx.r24.u32);
	// ble cr6,0x82533908
	if (!ctx.cr6.gt) goto loc_82533908;
	// mr r30,r24
	ctx.r30.u64 = ctx.r24.u64;
	// mr r27,r24
	ctx.r27.u64 = ctx.r24.u64;
	// addi r28,r21,4
	ctx.r28.s64 = ctx.r21.s64 + 4;
loc_825335AC:
	// lwz r11,20(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20);
	// addic. r10,r28,-4
	ctx.xer.ca = ctx.r28.u32 > 3;
	ctx.r10.s64 = ctx.r28.s64 + -4;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lwz r9,1664(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1664);
	// lwz r8,1668(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1668);
	// or r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 | ctx.r9.u64;
	// stw r11,1664(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1664, ctx.r11.u32);
	// lwz r11,24(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 24);
	// or r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 | ctx.r11.u64;
	// stw r11,1668(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1668, ctx.r11.u32);
	// beq 0x82533624
	if (ctx.cr0.eq) goto loc_82533624;
	// lwz r11,-4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + -4);
	// addi r29,r28,-4
	ctx.r29.s64 = ctx.r28.s64 + -4;
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe. r11,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82533624
	if (ctx.cr0.eq) goto loc_82533624;
	// li r3,512
	ctx.r3.s64 = 512;
	// bl 0x82691500
	ctx.lr = 0x825335F0;
	sub_82691500(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82533614
	if (ctx.cr0.eq) goto loc_82533614;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x8257f968
	ctx.lr = 0x82533610;
	sub_8257F968(ctx, base);
	// b 0x82533618
	goto loc_82533618;
loc_82533614:
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
loc_82533618:
	// lwz r11,1640(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1640);
	// stwx r3,r30,r11
	PPC_STORE_U32(ctx.r30.u32 + ctx.r11.u32, ctx.r3.u32);
	// b 0x8253362c
	goto loc_8253362C;
loc_82533624:
	// lwz r11,1640(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1640);
	// stwx r24,r30,r11
	PPC_STORE_U32(ctx.r30.u32 + ctx.r11.u32, ctx.r24.u32);
loc_8253362C:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82533680
	if (ctx.cr6.eq) goto loc_82533680;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe. r11,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82533680
	if (ctx.cr0.eq) goto loc_82533680;
	// li r3,512
	ctx.r3.s64 = 512;
	// bl 0x82691500
	ctx.lr = 0x8253364C;
	sub_82691500(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82533670
	if (ctx.cr0.eq) goto loc_82533670;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x8257f968
	ctx.lr = 0x8253366C;
	sub_8257F968(ctx, base);
	// b 0x82533674
	goto loc_82533674;
loc_82533670:
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
loc_82533674:
	// lwz r11,1644(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1644);
	// stwx r3,r30,r11
	PPC_STORE_U32(ctx.r30.u32 + ctx.r11.u32, ctx.r3.u32);
	// b 0x82533688
	goto loc_82533688;
loc_82533680:
	// lwz r11,1644(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1644);
	// stwx r24,r30,r11
	PPC_STORE_U32(ctx.r30.u32 + ctx.r11.u32, ctx.r24.u32);
loc_82533688:
	// addic. r3,r28,4
	ctx.xer.ca = ctx.r28.u32 > 4294967291;
	ctx.r3.s64 = ctx.r28.s64 + 4;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x825336d4
	if (ctx.cr0.eq) goto loc_825336D4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe. r11,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825336d4
	if (ctx.cr0.eq) goto loc_825336D4;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82546708
	ctx.lr = 0x825336AC;
	sub_82546708(ctx, base);
	// lwz r11,1648(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1648);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x825336d8
	if (ctx.cr0.eq) goto loc_825336D8;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r10,r3,4
	ctx.r10.s64 = ctx.r3.s64 + 4;
	// stwx r9,r27,r11
	PPC_STORE_U32(ctx.r27.u32 + ctx.r11.u32, ctx.r9.u32);
	// lwz r11,1648(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1648);
	// add r11,r27,r11
	ctx.r11.u64 = ctx.r27.u64 + ctx.r11.u64;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// b 0x825336e8
	goto loc_825336E8;
loc_825336D4:
	// lwz r11,1648(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1648);
loc_825336D8:
	// stwx r24,r27,r11
	PPC_STORE_U32(ctx.r27.u32 + ctx.r11.u32, ctx.r24.u32);
	// lwz r11,1648(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1648);
	// add r11,r27,r11
	ctx.r11.u64 = ctx.r27.u64 + ctx.r11.u64;
	// stw r24,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r24.u32);
loc_825336E8:
	// addic. r3,r28,8
	ctx.xer.ca = ctx.r28.u32 > 4294967287;
	ctx.r3.s64 = ctx.r28.s64 + 8;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8253378c
	if (ctx.cr0.eq) goto loc_8253378C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe. r11,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8253378c
	if (ctx.cr0.eq) goto loc_8253378C;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82546708
	ctx.lr = 0x8253370C;
	sub_82546708(ctx, base);
	// lwz r11,1652(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1652);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// li r4,0
	ctx.r4.s64 = 0;
	// stwx r3,r11,r30
	PPC_STORE_U32(ctx.r11.u32 + ctx.r30.u32, ctx.r3.u32);
	// lwz r11,1652(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1652);
	// lwzx r11,r11,r30
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// lwz r3,20(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// bl 0x8286de68
	ctx.lr = 0x8253372C;
	sub_8286DE68(ctx, base);
	// lwz r11,1640(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1640);
	// lwz r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwzx r10,r30,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x8253375c
	if (ctx.cr6.eq) goto loc_8253375C;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82533754
	if (ctx.cr6.eq) goto loc_82533754;
	// stw r9,412(r11)
	PPC_STORE_U32(ctx.r11.u32 + 412, ctx.r9.u32);
	// b 0x8253375c
	goto loc_8253375C;
loc_82533754:
	// lwz r10,36(r23)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r23.u32 + 36);
	// stw r10,412(r11)
	PPC_STORE_U32(ctx.r11.u32 + 412, ctx.r10.u32);
loc_8253375C:
	// lwz r11,1644(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1644);
	// lwzx r10,r30,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82533794
	if (ctx.cr6.eq) goto loc_82533794;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82533780
	if (ctx.cr6.eq) goto loc_82533780;
	// stw r9,412(r11)
	PPC_STORE_U32(ctx.r11.u32 + 412, ctx.r9.u32);
	// b 0x82533794
	goto loc_82533794;
loc_82533780:
	// lwz r10,36(r23)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r23.u32 + 36);
	// stw r10,412(r11)
	PPC_STORE_U32(ctx.r11.u32 + 412, ctx.r10.u32);
	// b 0x82533794
	goto loc_82533794;
loc_8253378C:
	// lwz r11,1652(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1652);
	// stwx r24,r11,r30
	PPC_STORE_U32(ctx.r11.u32 + ctx.r30.u32, ctx.r24.u32);
loc_82533794:
	// addic. r3,r28,12
	ctx.xer.ca = ctx.r28.u32 > 4294967283;
	ctx.r3.s64 = ctx.r28.s64 + 12;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82533838
	if (ctx.cr0.eq) goto loc_82533838;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe. r11,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82533838
	if (ctx.cr0.eq) goto loc_82533838;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82546708
	ctx.lr = 0x825337B8;
	sub_82546708(ctx, base);
	// lwz r11,1656(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1656);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// li r4,0
	ctx.r4.s64 = 0;
	// stwx r3,r30,r11
	PPC_STORE_U32(ctx.r30.u32 + ctx.r11.u32, ctx.r3.u32);
	// lwz r11,1656(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1656);
	// lwzx r11,r30,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// lwz r3,20(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// bl 0x8286de68
	ctx.lr = 0x825337D8;
	sub_8286DE68(ctx, base);
	// lwz r11,1640(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1640);
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwzx r10,r30,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82533808
	if (ctx.cr6.eq) goto loc_82533808;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82533800
	if (ctx.cr6.eq) goto loc_82533800;
	// stw r9,416(r11)
	PPC_STORE_U32(ctx.r11.u32 + 416, ctx.r9.u32);
	// b 0x82533808
	goto loc_82533808;
loc_82533800:
	// lwz r10,36(r23)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r23.u32 + 36);
	// stw r10,416(r11)
	PPC_STORE_U32(ctx.r11.u32 + 416, ctx.r10.u32);
loc_82533808:
	// lwz r11,1644(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1644);
	// lwzx r10,r30,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82533840
	if (ctx.cr6.eq) goto loc_82533840;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x8253382c
	if (ctx.cr6.eq) goto loc_8253382C;
	// stw r9,416(r11)
	PPC_STORE_U32(ctx.r11.u32 + 416, ctx.r9.u32);
	// b 0x82533840
	goto loc_82533840;
loc_8253382C:
	// lwz r10,36(r23)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r23.u32 + 36);
	// stw r10,416(r11)
	PPC_STORE_U32(ctx.r11.u32 + 416, ctx.r10.u32);
	// b 0x82533840
	goto loc_82533840;
loc_82533838:
	// lwz r11,1656(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1656);
	// stwx r24,r30,r11
	PPC_STORE_U32(ctx.r30.u32 + ctx.r11.u32, ctx.r24.u32);
loc_82533840:
	// addic. r3,r28,16
	ctx.xer.ca = ctx.r28.u32 > 4294967279;
	ctx.r3.s64 = ctx.r28.s64 + 16;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x825338e4
	if (ctx.cr0.eq) goto loc_825338E4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe. r11,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825338e4
	if (ctx.cr0.eq) goto loc_825338E4;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82546708
	ctx.lr = 0x82533864;
	sub_82546708(ctx, base);
	// lwz r11,1660(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1660);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,0
	ctx.r4.s64 = 0;
	// stwx r3,r11,r30
	PPC_STORE_U32(ctx.r11.u32 + ctx.r30.u32, ctx.r3.u32);
	// lwz r11,1660(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1660);
	// lwzx r11,r11,r30
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// lwz r3,20(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// bl 0x8286de68
	ctx.lr = 0x82533884;
	sub_8286DE68(ctx, base);
	// lwz r11,1640(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1640);
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwzx r10,r30,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x825338b4
	if (ctx.cr6.eq) goto loc_825338B4;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x825338ac
	if (ctx.cr6.eq) goto loc_825338AC;
	// stw r9,420(r11)
	PPC_STORE_U32(ctx.r11.u32 + 420, ctx.r9.u32);
	// b 0x825338b4
	goto loc_825338B4;
loc_825338AC:
	// lwz r10,36(r23)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r23.u32 + 36);
	// stw r10,420(r11)
	PPC_STORE_U32(ctx.r11.u32 + 420, ctx.r10.u32);
loc_825338B4:
	// lwz r11,1644(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1644);
	// lwzx r10,r30,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x825338ec
	if (ctx.cr6.eq) goto loc_825338EC;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x825338d8
	if (ctx.cr6.eq) goto loc_825338D8;
	// stw r9,420(r11)
	PPC_STORE_U32(ctx.r11.u32 + 420, ctx.r9.u32);
	// b 0x825338ec
	goto loc_825338EC;
loc_825338D8:
	// lwz r10,36(r23)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r23.u32 + 36);
	// stw r10,420(r11)
	PPC_STORE_U32(ctx.r11.u32 + 420, ctx.r10.u32);
	// b 0x825338ec
	goto loc_825338EC;
loc_825338E4:
	// lwz r11,1660(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1660);
	// stwx r24,r11,r30
	PPC_STORE_U32(ctx.r11.u32 + ctx.r30.u32, ctx.r24.u32);
loc_825338EC:
	// lwz r11,1636(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1636);
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// addi r27,r27,8
	ctx.r27.s64 = ctx.r27.s64 + 8;
	// addi r28,r28,32
	ctx.r28.s64 = ctx.r28.s64 + 32;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmplw cr6,r26,r11
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x825335ac
	if (ctx.cr6.lt) goto loc_825335AC;
loc_82533908:
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 0, ctx.xer);
	// beq cr6,0x82533918
	if (ctx.cr6.eq) goto loc_82533918;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x825469e0
	ctx.lr = 0x82533918;
	sub_825469E0(ctx, base);
loc_82533918:
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, 0, ctx.xer);
	// beq cr6,0x82533928
	if (ctx.cr6.eq) goto loc_82533928;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x825469e0
	ctx.lr = 0x82533928;
	sub_825469E0(ctx, base);
loc_82533928:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82fa76ac
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82533930"))) PPC_WEAK_FUNC(sub_82533930);
PPC_FUNC_IMPL(__imp__sub_82533930) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x82533938;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,1604(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1604);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825339d4
	if (ctx.cr6.eq) goto loc_825339D4;
	// lwz r11,1600(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1600);
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x825339c8
	if (!ctx.cr6.gt) goto loc_825339C8;
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
loc_82533964:
	// lwz r11,1604(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1604);
	// lwzx r10,r30,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x825339b4
	if (ctx.cr6.eq) goto loc_825339B4;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82533988;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,1604(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1604);
	// lwzx r3,r30,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x825339ac
	if (ctx.cr6.eq) goto loc_825339AC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825339AC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_825339AC:
	// lwz r11,1604(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1604);
	// stwx r28,r30,r11
	PPC_STORE_U32(ctx.r30.u32 + ctx.r11.u32, ctx.r28.u32);
loc_825339B4:
	// lwz r11,1600(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1600);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82533964
	if (ctx.cr6.lt) goto loc_82533964;
loc_825339C8:
	// lwz r3,1604(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1604);
	// bl 0x82547d80
	ctx.lr = 0x825339D0;
	sub_82547D80(ctx, base);
	// stw r28,1604(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1604, ctx.r28.u32);
loc_825339D4:
	// lwz r11,1608(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1608);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82533a64
	if (ctx.cr6.eq) goto loc_82533A64;
	// lwz r11,1600(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1600);
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82533a58
	if (!ctx.cr6.gt) goto loc_82533A58;
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
loc_825339F4:
	// lwz r11,1608(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1608);
	// lwzx r10,r11,r30
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82533a44
	if (ctx.cr6.eq) goto loc_82533A44;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82533A18;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,1608(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1608);
	// lwzx r3,r11,r30
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82533a3c
	if (ctx.cr6.eq) goto loc_82533A3C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82533A3C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82533A3C:
	// lwz r11,1608(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1608);
	// stwx r28,r11,r30
	PPC_STORE_U32(ctx.r11.u32 + ctx.r30.u32, ctx.r28.u32);
loc_82533A44:
	// lwz r11,1600(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1600);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x825339f4
	if (ctx.cr6.lt) goto loc_825339F4;
loc_82533A58:
	// lwz r3,1608(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1608);
	// bl 0x82547d80
	ctx.lr = 0x82533A60;
	sub_82547D80(ctx, base);
	// stw r28,1608(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1608, ctx.r28.u32);
loc_82533A64:
	// lwz r11,1612(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1612);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82533acc
	if (ctx.cr6.eq) goto loc_82533ACC;
	// lwz r11,1600(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1600);
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82533ac0
	if (!ctx.cr6.gt) goto loc_82533AC0;
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
loc_82533A84:
	// lwz r11,1612(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1612);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82533aac
	if (ctx.cr6.eq) goto loc_82533AAC;
	// addi r3,r11,-4
	ctx.r3.s64 = ctx.r11.s64 + -4;
	// bl 0x825469e0
	ctx.lr = 0x82533AA0;
	sub_825469E0(ctx, base);
	// lwz r11,1612(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1612);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stw r28,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r28.u32);
loc_82533AAC:
	// lwz r11,1600(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1600);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82533a84
	if (ctx.cr6.lt) goto loc_82533A84;
loc_82533AC0:
	// lwz r3,1612(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1612);
	// bl 0x82547d80
	ctx.lr = 0x82533AC8;
	sub_82547D80(ctx, base);
	// stw r28,1612(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1612, ctx.r28.u32);
loc_82533ACC:
	// lis r30,-31964
	ctx.r30.s64 = -2094792704;
	// lis r6,16
	ctx.r6.s64 = 1048576;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,11
	ctx.r4.s64 = 11;
	// lwz r3,-13544(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -13544);
	// bl 0x826631f0
	ctx.lr = 0x82533AE4;
	sub_826631F0(ctx, base);
	// lis r6,128
	ctx.r6.s64 = 8388608;
	// lwz r3,-13544(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -13544);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,8
	ctx.r4.s64 = 8;
	// bl 0x826631f0
	ctx.lr = 0x82533AF8;
	sub_826631F0(ctx, base);
	// lis r6,2
	ctx.r6.s64 = 131072;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,-13544(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -13544);
	// li r4,14
	ctx.r4.s64 = 14;
	// bl 0x826631f0
	ctx.lr = 0x82533B0C;
	sub_826631F0(ctx, base);
	// lwz r11,1616(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1616);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82533b6c
	if (ctx.cr6.eq) goto loc_82533B6C;
	// lwz r11,1600(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1600);
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82533b60
	if (!ctx.cr6.gt) goto loc_82533B60;
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
loc_82533B2C:
	// lwz r11,1616(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1616);
	// lwzx r10,r11,r30
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82533b4c
	if (ctx.cr6.eq) goto loc_82533B4C;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// bl 0x825469e0
	ctx.lr = 0x82533B44;
	sub_825469E0(ctx, base);
	// lwz r11,1616(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1616);
	// stwx r28,r11,r30
	PPC_STORE_U32(ctx.r11.u32 + ctx.r30.u32, ctx.r28.u32);
loc_82533B4C:
	// lwz r11,1600(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1600);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82533b2c
	if (ctx.cr6.lt) goto loc_82533B2C;
loc_82533B60:
	// lwz r3,1616(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1616);
	// bl 0x82547d80
	ctx.lr = 0x82533B68;
	sub_82547D80(ctx, base);
	// stw r28,1616(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1616, ctx.r28.u32);
loc_82533B6C:
	// lwz r11,1620(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1620);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82533bcc
	if (ctx.cr6.eq) goto loc_82533BCC;
	// lwz r11,1600(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1600);
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82533bc0
	if (!ctx.cr6.gt) goto loc_82533BC0;
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
loc_82533B8C:
	// lwz r11,1620(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1620);
	// lwzx r10,r30,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82533bac
	if (ctx.cr6.eq) goto loc_82533BAC;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// bl 0x825469e0
	ctx.lr = 0x82533BA4;
	sub_825469E0(ctx, base);
	// lwz r11,1620(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1620);
	// stwx r28,r30,r11
	PPC_STORE_U32(ctx.r30.u32 + ctx.r11.u32, ctx.r28.u32);
loc_82533BAC:
	// lwz r11,1600(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1600);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82533b8c
	if (ctx.cr6.lt) goto loc_82533B8C;
loc_82533BC0:
	// lwz r3,1620(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1620);
	// bl 0x82547d80
	ctx.lr = 0x82533BC8;
	sub_82547D80(ctx, base);
	// stw r28,1620(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1620, ctx.r28.u32);
loc_82533BCC:
	// lwz r11,1624(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1624);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82533c2c
	if (ctx.cr6.eq) goto loc_82533C2C;
	// lwz r11,1600(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1600);
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82533c20
	if (!ctx.cr6.gt) goto loc_82533C20;
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
loc_82533BEC:
	// lwz r11,1624(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1624);
	// lwzx r10,r11,r30
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82533c0c
	if (ctx.cr6.eq) goto loc_82533C0C;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// bl 0x825469e0
	ctx.lr = 0x82533C04;
	sub_825469E0(ctx, base);
	// lwz r11,1624(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1624);
	// stwx r28,r11,r30
	PPC_STORE_U32(ctx.r11.u32 + ctx.r30.u32, ctx.r28.u32);
loc_82533C0C:
	// lwz r11,1600(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1600);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82533bec
	if (ctx.cr6.lt) goto loc_82533BEC;
loc_82533C20:
	// lwz r3,1624(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1624);
	// bl 0x82547d80
	ctx.lr = 0x82533C28;
	sub_82547D80(ctx, base);
	// stw r28,1624(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1624, ctx.r28.u32);
loc_82533C2C:
	// lwz r11,1640(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1640);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82533cbc
	if (ctx.cr6.eq) goto loc_82533CBC;
	// lwz r11,1636(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1636);
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82533cb0
	if (!ctx.cr6.gt) goto loc_82533CB0;
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
loc_82533C4C:
	// lwz r11,1640(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1640);
	// lwzx r10,r30,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82533c9c
	if (ctx.cr6.eq) goto loc_82533C9C;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82533C70;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,1640(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1640);
	// lwzx r3,r30,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82533c94
	if (ctx.cr6.eq) goto loc_82533C94;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82533C94;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82533C94:
	// lwz r11,1640(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1640);
	// stwx r28,r30,r11
	PPC_STORE_U32(ctx.r30.u32 + ctx.r11.u32, ctx.r28.u32);
loc_82533C9C:
	// lwz r11,1636(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1636);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82533c4c
	if (ctx.cr6.lt) goto loc_82533C4C;
loc_82533CB0:
	// lwz r3,1640(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1640);
	// bl 0x82547d80
	ctx.lr = 0x82533CB8;
	sub_82547D80(ctx, base);
	// stw r28,1640(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1640, ctx.r28.u32);
loc_82533CBC:
	// lwz r11,1644(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1644);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82533d4c
	if (ctx.cr6.eq) goto loc_82533D4C;
	// lwz r11,1636(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1636);
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82533d40
	if (!ctx.cr6.gt) goto loc_82533D40;
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
loc_82533CDC:
	// lwz r11,1644(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1644);
	// lwzx r10,r30,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82533d2c
	if (ctx.cr6.eq) goto loc_82533D2C;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82533D00;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,1644(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1644);
	// lwzx r3,r30,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82533d24
	if (ctx.cr6.eq) goto loc_82533D24;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82533D24;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82533D24:
	// lwz r11,1644(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1644);
	// stwx r28,r30,r11
	PPC_STORE_U32(ctx.r30.u32 + ctx.r11.u32, ctx.r28.u32);
loc_82533D2C:
	// lwz r11,1636(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1636);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82533cdc
	if (ctx.cr6.lt) goto loc_82533CDC;
loc_82533D40:
	// lwz r3,1644(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1644);
	// bl 0x82547d80
	ctx.lr = 0x82533D48;
	sub_82547D80(ctx, base);
	// stw r28,1644(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1644, ctx.r28.u32);
loc_82533D4C:
	// lwz r11,1648(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1648);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82533db4
	if (ctx.cr6.eq) goto loc_82533DB4;
	// lwz r11,1636(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1636);
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82533da8
	if (!ctx.cr6.gt) goto loc_82533DA8;
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
loc_82533D6C:
	// lwz r11,1648(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1648);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82533d94
	if (ctx.cr6.eq) goto loc_82533D94;
	// addi r3,r11,-4
	ctx.r3.s64 = ctx.r11.s64 + -4;
	// bl 0x825469e0
	ctx.lr = 0x82533D88;
	sub_825469E0(ctx, base);
	// lwz r11,1648(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1648);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stw r28,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r28.u32);
loc_82533D94:
	// lwz r11,1636(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1636);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82533d6c
	if (ctx.cr6.lt) goto loc_82533D6C;
loc_82533DA8:
	// lwz r3,1648(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1648);
	// bl 0x82547d80
	ctx.lr = 0x82533DB0;
	sub_82547D80(ctx, base);
	// stw r28,1648(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1648, ctx.r28.u32);
loc_82533DB4:
	// lwz r11,1652(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1652);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82533e14
	if (ctx.cr6.eq) goto loc_82533E14;
	// lwz r11,1636(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1636);
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82533e08
	if (!ctx.cr6.gt) goto loc_82533E08;
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
loc_82533DD4:
	// lwz r11,1652(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1652);
	// lwzx r10,r30,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82533df4
	if (ctx.cr6.eq) goto loc_82533DF4;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// bl 0x825469e0
	ctx.lr = 0x82533DEC;
	sub_825469E0(ctx, base);
	// lwz r11,1652(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1652);
	// stwx r28,r30,r11
	PPC_STORE_U32(ctx.r30.u32 + ctx.r11.u32, ctx.r28.u32);
loc_82533DF4:
	// lwz r11,1636(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1636);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82533dd4
	if (ctx.cr6.lt) goto loc_82533DD4;
loc_82533E08:
	// lwz r3,1652(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1652);
	// bl 0x82547d80
	ctx.lr = 0x82533E10;
	sub_82547D80(ctx, base);
	// stw r28,1652(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1652, ctx.r28.u32);
loc_82533E14:
	// lwz r11,1656(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1656);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82533e74
	if (ctx.cr6.eq) goto loc_82533E74;
	// lwz r11,1636(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1636);
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82533e68
	if (!ctx.cr6.gt) goto loc_82533E68;
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
loc_82533E34:
	// lwz r11,1656(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1656);
	// lwzx r10,r11,r30
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82533e54
	if (ctx.cr6.eq) goto loc_82533E54;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// bl 0x825469e0
	ctx.lr = 0x82533E4C;
	sub_825469E0(ctx, base);
	// lwz r11,1656(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1656);
	// stwx r28,r11,r30
	PPC_STORE_U32(ctx.r11.u32 + ctx.r30.u32, ctx.r28.u32);
loc_82533E54:
	// lwz r11,1636(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1636);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82533e34
	if (ctx.cr6.lt) goto loc_82533E34;
loc_82533E68:
	// lwz r3,1656(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1656);
	// bl 0x82547d80
	ctx.lr = 0x82533E70;
	sub_82547D80(ctx, base);
	// stw r28,1656(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1656, ctx.r28.u32);
loc_82533E74:
	// lwz r11,1660(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1660);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82533ed4
	if (ctx.cr6.eq) goto loc_82533ED4;
	// lwz r11,1636(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1636);
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82533ec8
	if (!ctx.cr6.gt) goto loc_82533EC8;
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
loc_82533E94:
	// lwz r11,1660(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1660);
	// lwzx r10,r30,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82533eb4
	if (ctx.cr6.eq) goto loc_82533EB4;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// bl 0x825469e0
	ctx.lr = 0x82533EAC;
	sub_825469E0(ctx, base);
	// lwz r11,1660(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1660);
	// stwx r28,r30,r11
	PPC_STORE_U32(ctx.r30.u32 + ctx.r11.u32, ctx.r28.u32);
loc_82533EB4:
	// lwz r11,1636(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1636);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82533e94
	if (ctx.cr6.lt) goto loc_82533E94;
loc_82533EC8:
	// lwz r3,1660(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1660);
	// bl 0x82547d80
	ctx.lr = 0x82533ED0;
	sub_82547D80(ctx, base);
	// stw r28,1660(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1660, ctx.r28.u32);
loc_82533ED4:
	// stw r28,1600(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1600, ctx.r28.u32);
	// stw r28,1636(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1636, ctx.r28.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82533EE4"))) PPC_WEAK_FUNC(sub_82533EE4);
PPC_FUNC_IMPL(__imp__sub_82533EE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82533EE8"))) PPC_WEAK_FUNC(sub_82533EE8);
PPC_FUNC_IMPL(__imp__sub_82533EE8) {
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
	// lwz r11,1724(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1724);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82533f98
	if (!ctx.cr6.eq) goto loc_82533F98;
	// lwz r3,1596(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1596);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82533f98
	if (ctx.cr6.eq) goto loc_82533F98;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r30,r31,1732
	ctx.r30.s64 = ctx.r31.s64 + 1732;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82533F30;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,1724(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1724, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82533f98
	if (ctx.cr0.eq) goto loc_82533F98;
	// li r3,416
	ctx.r3.s64 = 416;
	// bl 0x82827e80
	ctx.lr = 0x82533F44;
	sub_82827E80(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82533f60
	if (ctx.cr0.eq) goto loc_82533F60;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r4,1724(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1724);
	// bl 0x825672a0
	ctx.lr = 0x82533F58;
	sub_825672A0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82533f64
	goto loc_82533F64;
loc_82533F60:
	// li r4,0
	ctx.r4.s64 = 0;
loc_82533F64:
	// stw r4,1728(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1728, ctx.r4.u32);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r3,1724(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1724);
	// li r6,18
	ctx.r6.s64 = 18;
	// lfs f1,-2340(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -2340);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x8282a7b0
	ctx.lr = 0x82533F80;
	sub_8282A7B0(ctx, base);
	// lwz r3,1596(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1596);
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,156(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 156);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82533F98;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82533F98:
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

__attribute__((alias("__imp__sub_82533FB0"))) PPC_WEAK_FUNC(sub_82533FB0);
PPC_FUNC_IMPL(__imp__sub_82533FB0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7664
	ctx.lr = 0x82533FB8;
	__savegprlr_23(ctx, base);
	// stfd f31,-88(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -88, ctx.f31.u64);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,1724(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1724);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82534274
	if (ctx.cr6.eq) goto loc_82534274;
	// lwz r11,1728(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1728);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82534274
	if (ctx.cr6.eq) goto loc_82534274;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r3,r11,-10552
	ctx.r3.s64 = ctx.r11.s64 + -10552;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82547f38
	ctx.lr = 0x82533FF0;
	sub_82547F38(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82534398
	if (ctx.cr6.eq) goto loc_82534398;
	// lis r10,-32227
	ctx.r10.s64 = -2112028672;
	// lwz r3,1728(r23)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r23.u32 + 1728);
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// lis r8,-32231
	ctx.r8.s64 = -2112290816;
	// lis r7,19817
	ctx.r7.s64 = 1298726912;
	// li r11,0
	ctx.r11.s64 = 0;
	// lfs f13,-24756(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -24756);
	ctx.f13.f64 = double(temp.f32);
	// ori r7,r7,30800
	ctx.r7.u64 = ctx.r7.u64 | 30800;
	// lfs f31,-2340(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -2340);
	ctx.f31.f64 = double(temp.f32);
	// li r10,32
	ctx.r10.s64 = 32;
	// li r9,64
	ctx.r9.s64 = 64;
	// lfs f0,-2152(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -2152);
	ctx.f0.f64 = double(temp.f32);
	// stfs f31,104(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// stw r7,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r7.u32);
	// stfs f31,116(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stw r10,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r10.u32);
	// stfs f13,100(r1)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r1.u32 + 100, temp.u32);
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stw r9,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r9.u32);
	// stfs f0,128(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// stw r11,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r11.u32);
	// stw r11,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r11.u32);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// stw r11,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r11.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r11,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r11.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r11,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r11.u32);
	// bl 0x825678a0
	ctx.lr = 0x82534074;
	sub_825678A0(ctx, base);
	// lwz r3,1724(r23)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r23.u32 + 1724);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x8282b920
	ctx.lr = 0x82534080;
	sub_8282B920(ctx, base);
	// lwz r3,1724(r23)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r23.u32 + 1724);
	// bl 0x8282c0d8
	ctx.lr = 0x82534088;
	sub_8282C0D8(ctx, base);
	// lwz r3,1596(r23)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r23.u32 + 1596);
	// lwz r4,1732(r23)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r23.u32 + 1732);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,168(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 168);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825340A0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x825340f0
	if (ctx.cr0.eq) goto loc_825340F0;
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,14852
	ctx.r11.s64 = ctx.r11.s64 + 14852;
	// li r30,5
	ctx.r30.s64 = 5;
	// subf r29,r3,r11
	ctx.r29.s64 = ctx.r11.s64 - ctx.r3.s64;
	// lis r11,-32243
	ctx.r11.s64 = -2113077248;
	// lfs f31,31512(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 31512);
	ctx.f31.f64 = double(temp.f32);
loc_825340C4:
	// lwzx r11,r29,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r31.u32);
	// lwz r3,1724(r23)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r23.u32 + 1724);
	// clrlwi r4,r11,16
	ctx.r4.u64 = ctx.r11.u32 & 0xFFFF;
	// bl 0x8282bbe0
	ctx.lr = 0x825340D4;
	sub_8282BBE0(ctx, base);
	// lfs f0,0(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f31.f64));
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// fctidz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f0.f64));
	// stfiwx f0,0,r31
	PPC_STORE_U32(ctx.r31.u32, ctx.f0.u32);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// bne 0x825340c4
	if (!ctx.cr0.eq) goto loc_825340C4;
loc_825340F0:
	// lwz r3,1596(r23)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r23.u32 + 1596);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r4,1732(r23)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r23.u32 + 1732);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,164(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 164);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8253410C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82534398
	if (ctx.cr0.eq) goto loc_82534398;
	// lwz r3,1596(r23)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r23.u32 + 1596);
	// lwz r25,0(r31)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r27,4(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lhz r28,8(r31)
	ctx.r28.u64 = PPC_LOAD_U16(ctx.r31.u32 + 8);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,172(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 172);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82534134;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// lwz r3,1724(r23)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r23.u32 + 1724);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// bne 0x82534158
	if (!ctx.cr0.eq) goto loc_82534158;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// bl 0x8282c270
	ctx.lr = 0x82534154;
	sub_8282C270(ctx, base);
	// b 0x82534188
	goto loc_82534188;
loc_82534158:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x8282c270
	ctx.lr = 0x82534160;
	sub_8282C270(ctx, base);
	// lwz r11,1596(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 1596);
	// lwz r3,436(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 436);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82534178;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,5056
	ctx.r4.s64 = ctx.r11.s64 + 5056;
	// bl 0x82579400
	ctx.lr = 0x82534188;
	sub_82579400(ctx, base);
loc_82534188:
	// li r24,1
	ctx.r24.s64 = 1;
	// lis r26,-31964
	ctx.r26.s64 = -2094792704;
loc_82534190:
	// lwz r3,1596(r23)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r23.u32 + 1596);
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// lwz r4,1732(r23)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r23.u32 + 1732);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,164(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 164);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825341AC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82534264
	if (ctx.cr0.eq) goto loc_82534264;
	// lwz r31,0(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r29,4(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82534210
	if (ctx.cr6.eq) goto loc_82534210;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x82534210
	if (ctx.cr6.eq) goto loc_82534210;
	// rlwinm r30,r28,6,0,25
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 6) & 0xFFFFFFC0;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a75038
	ctx.lr = 0x825341E0;
	sub_82A75038(ctx, base);
	// rlwinm r11,r31,0,25,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0xFFFFFFFFFFFFFF7F;
	// add r10,r30,r31
	ctx.r10.u64 = ctx.r30.u64 + ctx.r31.u64;
	// b 0x825341f4
	goto loc_825341F4;
loc_825341EC:
	// dcbf r0,r11
	// addi r11,r11,128
	ctx.r11.s64 = ctx.r11.s64 + 128;
loc_825341F4:
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x825341ec
	if (ctx.cr6.lt) goto loc_825341EC;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r3,-13544(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + -13544);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8266fc10
	ctx.lr = 0x82534210;
	sub_8266FC10(ctx, base);
loc_82534210:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82534264
	if (ctx.cr6.eq) goto loc_82534264;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x82534264
	if (ctx.cr6.eq) goto loc_82534264;
	// rlwinm r31,r28,6,0,25
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 6) & 0xFFFFFFC0;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82a75038
	ctx.lr = 0x82534234;
	sub_82A75038(ctx, base);
	// rlwinm r11,r29,0,25,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0xFFFFFFFFFFFFFF7F;
	// add r10,r31,r29
	ctx.r10.u64 = ctx.r31.u64 + ctx.r29.u64;
	// b 0x82534248
	goto loc_82534248;
loc_82534240:
	// dcbf r0,r11
	// addi r11,r11,128
	ctx.r11.s64 = ctx.r11.s64 + 128;
loc_82534248:
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82534240
	if (ctx.cr6.lt) goto loc_82534240;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r3,-13544(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + -13544);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x8266fc10
	ctx.lr = 0x82534264;
	sub_8266FC10(ctx, base);
loc_82534264:
	// addi r24,r24,1
	ctx.r24.s64 = ctx.r24.s64 + 1;
	// cmplwi cr6,r24,4
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 4, ctx.xer);
	// blt cr6,0x82534190
	if (ctx.cr6.lt) goto loc_82534190;
	// b 0x82534398
	goto loc_82534398;
loc_82534274:
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// li r26,128
	ctx.r26.s64 = 128;
	// li r27,-32
	ctx.r27.s64 = -32;
	// lis r28,-31964
	ctx.r28.s64 = -2094792704;
	// addi r29,r11,-4400
	ctx.r29.s64 = ctx.r11.s64 + -4400;
loc_82534288:
	// lwz r11,1596(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 1596);
	// lwzx r11,r26,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + ctx.r11.u32);
	// lhz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r11.u32 + 8);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r31,4(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble 0x82534324
	if (!ctx.cr0.gt) goto loc_82534324;
	// addi r10,r31,48
	ctx.r10.s64 = ctx.r31.s64 + 48;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// addi r11,r4,32
	ctx.r11.s64 = ctx.r4.s64 + 32;
	// subf r8,r4,r31
	ctx.r8.s64 = ctx.r31.s64 - ctx.r4.s64;
loc_825342B4:
	// li r7,16
	ctx.r7.s64 = 16;
	// lvx128 v0,r0,r29
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r29.u32) & ~0xF), VectorMaskL));
	// stvx128 v0,r11,r27
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r27.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r6,-16
	ctx.r6.s64 = -16;
	// li r5,32
	ctx.r5.s64 = 32;
	// li r3,48
	ctx.r3.s64 = 48;
	// li r30,16
	ctx.r30.s64 = 16;
	// lvx128 v0,r29,r7
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r29.u32 + ctx.r7.u32) & ~0xF), VectorMaskL));
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// stvx128 v0,r11,r6
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r6.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v0,r29,r5
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r29.u32 + ctx.r5.u32) & ~0xF), VectorMaskL));
	// stvx128 v0,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v0,r29,r3
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r29.u32 + ctx.r3.u32) & ~0xF), VectorMaskL));
	// stvx128 v0,r11,r30
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r30.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// beq cr6,0x82534318
	if (ctx.cr6.eq) goto loc_82534318;
	// li r7,-48
	ctx.r7.s64 = -48;
	// lvx128 v0,r0,r29
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r29.u32) & ~0xF), VectorMaskL));
	// li r6,16
	ctx.r6.s64 = 16;
	// stvx128 v0,r10,r7
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32 + ctx.r7.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v0,r29,r6
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r29.u32 + ctx.r6.u32) & ~0xF), VectorMaskL));
	// stvx128 v0,r10,r27
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32 + ctx.r27.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v0,r29,r5
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r29.u32 + ctx.r5.u32) & ~0xF), VectorMaskL));
	// stvx128 v0,r8,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r8.u32 + ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v0,r29,r3
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r29.u32 + ctx.r3.u32) & ~0xF), VectorMaskL));
	// stvx128 v0,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
loc_82534318:
	// addi r11,r11,64
	ctx.r11.s64 = ctx.r11.s64 + 64;
	// addi r10,r10,64
	ctx.r10.s64 = ctx.r10.s64 + 64;
	// bdnz 0x825342b4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_825342B4;
loc_82534324:
	// rlwinm r30,r9,6,0,25
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 6) & 0xFFFFFFC0;
	// rlwinm r11,r4,0,25,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 0) & 0xFFFFFFFFFFFFFF7F;
	// add r10,r30,r4
	ctx.r10.u64 = ctx.r30.u64 + ctx.r4.u64;
	// b 0x8253433c
	goto loc_8253433C;
loc_82534334:
	// dcbf r0,r11
	// addi r11,r11,128
	ctx.r11.s64 = ctx.r11.s64 + 128;
loc_8253433C:
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82534334
	if (ctx.cr6.lt) goto loc_82534334;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r3,-13544(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + -13544);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x8266fc10
	ctx.lr = 0x82534354;
	sub_8266FC10(ctx, base);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x8253438c
	if (ctx.cr6.eq) goto loc_8253438C;
	// rlwinm r11,r31,0,25,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0xFFFFFFFFFFFFFF7F;
	// add r10,r30,r31
	ctx.r10.u64 = ctx.r30.u64 + ctx.r31.u64;
	// b 0x82534370
	goto loc_82534370;
loc_82534368:
	// dcbf r0,r11
	// addi r11,r11,128
	ctx.r11.s64 = ctx.r11.s64 + 128;
loc_82534370:
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82534368
	if (ctx.cr6.lt) goto loc_82534368;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r3,-13544(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + -13544);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x8266fc10
	ctx.lr = 0x8253438C;
	sub_8266FC10(ctx, base);
loc_8253438C:
	// addi r26,r26,4
	ctx.r26.s64 = ctx.r26.s64 + 4;
	// cmplwi cr6,r26,144
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 144, ctx.xer);
	// blt cr6,0x82534288
	if (ctx.cr6.lt) goto loc_82534288;
loc_82534398:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// lfd f31,-88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// b 0x82fa76b4
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825343A4"))) PPC_WEAK_FUNC(sub_825343A4);
PPC_FUNC_IMPL(__imp__sub_825343A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825343A8"))) PPC_WEAK_FUNC(sub_825343A8);
PPC_FUNC_IMPL(__imp__sub_825343A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x825343B0;
	__savegprlr_28(ctx, base);
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x8253456c
	if (ctx.cr6.eq) goto loc_8253456C;
	// li r28,1
	ctx.r28.s64 = 1;
loc_825343D4:
	// lwz r10,20(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x825344b0
	if (ctx.cr6.eq) goto loc_825344B0;
	// lwz r11,44(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	// lwz r9,1588(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1588);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x825344b0
	if (!ctx.cr6.eq) goto loc_825344B0;
	// lwz r9,1584(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1584);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x825344b0
	if (!ctx.cr6.eq) goto loc_825344B0;
	// lwz r9,36(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x825344b0
	if (ctx.cr6.eq) goto loc_825344B0;
	// lwz r11,1560(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1560);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x825344b0
	if (ctx.cr6.eq) goto loc_825344B0;
	// lwz r11,40(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// cmplwi cr6,r11,20
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 20, ctx.xer);
	// bgt cr6,0x82534470
	if (ctx.cr6.gt) goto loc_82534470;
	// lis r12,-32231
	ctx.r12.s64 = -2112290816;
	// addi r12,r12,26896
	ctx.r12.s64 = ctx.r12.s64 + 26896;
	// lbzx r0,r12,r11
	ctx.r0.u64 = PPC_LOAD_U8(ctx.r12.u32 + ctx.r11.u32);
	// lis r12,-32173
	ctx.r12.s64 = -2108489728;
	// nop 
	// addi r12,r12,17480
	ctx.r12.s64 = ctx.r12.s64 + 17480;
	// nop 
	// add r12,r12,r0
	ctx.r12.u64 = ctx.r12.u64 + ctx.r0.u64;
	// mtctr r12
	ctx.ctr.u64 = ctx.r12.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_82534470;
	case 1:
		goto loc_82534448;
	case 2:
		goto loc_82534450;
	case 3:
		goto loc_82534458;
	case 4:
		goto loc_82534460;
	case 5:
		goto loc_82534470;
	case 6:
		goto loc_82534448;
	case 7:
		goto loc_82534470;
	case 8:
		goto loc_82534448;
	case 9:
		goto loc_82534470;
	case 10:
		goto loc_82534448;
	case 11:
		goto loc_82534450;
	case 12:
		goto loc_82534458;
	case 13:
		goto loc_82534460;
	case 14:
		goto loc_82534468;
	case 15:
		goto loc_82534470;
	case 16:
		goto loc_82534448;
	case 17:
		goto loc_82534450;
	case 18:
		goto loc_82534458;
	case 19:
		goto loc_82534460;
	case 20:
		goto loc_82534468;
	default:
		__builtin_unreachable();
	}
loc_82534448:
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// b 0x82534474
	goto loc_82534474;
loc_82534450:
	// li r5,2
	ctx.r5.s64 = 2;
	// b 0x82534474
	goto loc_82534474;
loc_82534458:
	// li r5,3
	ctx.r5.s64 = 3;
	// b 0x82534474
	goto loc_82534474;
loc_82534460:
	// li r5,4
	ctx.r5.s64 = 4;
	// b 0x82534474
	goto loc_82534474;
loc_82534468:
	// li r5,5
	ctx.r5.s64 = 5;
	// b 0x82534474
	goto loc_82534474;
loc_82534470:
	// li r5,0
	ctx.r5.s64 = 0;
loc_82534474:
	// mulli r11,r5,1080
	ctx.r11.s64 = ctx.r5.s64 * 1080;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r10,60(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82534490
	if (!ctx.cr6.eq) goto loc_82534490;
	// stw r28,64(r11)
	PPC_STORE_U32(ctx.r11.u32 + 64, ctx.r28.u32);
	// stw r28,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r28.u32);
loc_82534490:
	// lwz r11,44(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	// li r10,1680
	ctx.r10.s64 = 1680;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// lwz r3,20(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lvx128 v0,r11,r10
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r10.u32) & ~0xF), VectorMaskL));
	// stvx128 v0,r0,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// bl 0x82524268
	ctx.lr = 0x825344B0;
	sub_82524268(ctx, base);
loc_825344B0:
	// lwz r31,44(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	// lwz r11,1588(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1588);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82534550
	if (ctx.cr6.eq) goto loc_82534550;
	// cmplwi r31,0
	ctx.cr0.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq 0x825344d8
	if (ctx.cr0.eq) goto loc_825344D8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82531978
	ctx.lr = 0x825344D0;
	sub_82531978(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82691540
	ctx.lr = 0x825344D8;
	sub_82691540(ctx, base);
loc_825344D8:
	// addi r10,r30,36
	ctx.r10.s64 = ctx.r30.s64 + 36;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r11,r10,12
	ctx.r11.s64 = ctx.r10.s64 + 12;
	// stw r9,44(r30)
	PPC_STORE_U32(ctx.r30.u32 + 44, ctx.r9.u32);
	// lwz r6,4(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplw cr6,r11,r6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x82534524
	if (ctx.cr6.eq) goto loc_82534524;
	// addi r10,r10,-36
	ctx.r10.s64 = ctx.r10.s64 + -36;
loc_825344F8:
	// li r9,6
	ctx.r9.s64 = 6;
	// addi r8,r11,-8
	ctx.r8.s64 = ctx.r11.s64 + -8;
	// addi r7,r10,-8
	ctx.r7.s64 = ctx.r10.s64 + -8;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82534508:
	// ldu r9,8(r8)
	ea = 8 + ctx.r8.u32;
	ctx.r9.u64 = PPC_LOAD_U64(ea);
	ctx.r8.u32 = ea;
	// stdu r9,8(r7)
	ea = 8 + ctx.r7.u32;
	PPC_STORE_U64(ea, ctx.r9.u64);
	ctx.r7.u32 = ea;
	// bdnz 0x82534508
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82534508;
	// addi r11,r11,48
	ctx.r11.s64 = ctx.r11.s64 + 48;
	// addi r10,r10,48
	ctx.r10.s64 = ctx.r10.s64 + 48;
	// cmplw cr6,r11,r6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r6.u32, ctx.xer);
	// bne cr6,0x825344f8
	if (!ctx.cr6.eq) goto loc_825344F8;
loc_82534524:
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// addi r10,r11,-48
	ctx.r10.s64 = ctx.r11.s64 + -48;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82534548
	if (ctx.cr6.eq) goto loc_82534548;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
loc_8253453C:
	// addi r9,r9,48
	ctx.r9.s64 = ctx.r9.s64 + 48;
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x8253453c
	if (!ctx.cr6.eq) goto loc_8253453C;
loc_82534548:
	// stw r10,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r10.u32);
	// b 0x82534560
	goto loc_82534560;
loc_82534550:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82531a80
	ctx.lr = 0x8253455C;
	sub_82531A80(ctx, base);
	// addi r30,r30,48
	ctx.r30.s64 = ctx.r30.s64 + 48;
loc_82534560:
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x825343d4
	if (!ctx.cr6.eq) goto loc_825343D4;
loc_8253456C:
	// lwz r3,20(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82534580
	if (ctx.cr6.eq) goto loc_82534580;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82523e78
	ctx.lr = 0x82534580;
	sub_82523E78(ctx, base);
loc_82534580:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8253458C"))) PPC_WEAK_FUNC(sub_8253458C);
PPC_FUNC_IMPL(__imp__sub_8253458C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82534590"))) PPC_WEAK_FUNC(sub_82534590);
PPC_FUNC_IMPL(__imp__sub_82534590) {
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
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x825345d0
	if (ctx.cr0.eq) goto loc_825345D0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe. r11,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825345d0
	if (ctx.cr0.eq) goto loc_825345D0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82546708
	ctx.lr = 0x825345D0;
	sub_82546708(ctx, base);
loc_825345D0:
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// addic. r3,r11,4
	ctx.xer.ca = ctx.r11.u32 > 4294967291;
	ctx.r3.s64 = ctx.r11.s64 + 4;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x825345f8
	if (ctx.cr0.eq) goto loc_825345F8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe. r11,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825345f8
	if (ctx.cr0.eq) goto loc_825345F8;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82546708
	ctx.lr = 0x825345F8;
	sub_82546708(ctx, base);
loc_825345F8:
	// li r31,8
	ctx.r31.s64 = 8;
loc_825345FC:
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// add. r3,r31,r11
	ctx.r3.u64 = ctx.r31.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82534624
	if (ctx.cr0.eq) goto loc_82534624;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe. r11,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82534624
	if (ctx.cr0.eq) goto loc_82534624;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82546708
	ctx.lr = 0x82534624;
	sub_82546708(ctx, base);
loc_82534624:
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmplwi cr6,r31,36
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 36, ctx.xer);
	// blt cr6,0x825345fc
	if (ctx.cr6.lt) goto loc_825345FC;
	// li r31,36
	ctx.r31.s64 = 36;
loc_82534634:
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// add. r3,r31,r11
	ctx.r3.u64 = ctx.r31.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x8253465c
	if (ctx.cr0.eq) goto loc_8253465C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe. r11,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x8253465c
	if (ctx.cr0.eq) goto loc_8253465C;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82546708
	ctx.lr = 0x8253465C;
	sub_82546708(ctx, base);
loc_8253465C:
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmplwi cr6,r31,44
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 44, ctx.xer);
	// blt cr6,0x82534634
	if (ctx.cr6.lt) goto loc_82534634;
	// li r31,64
	ctx.r31.s64 = 64;
loc_8253466C:
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// addic. r3,r11,-20
	ctx.xer.ca = ctx.r11.u32 > 19;
	ctx.r3.s64 = ctx.r11.s64 + -20;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82534698
	if (ctx.cr0.eq) goto loc_82534698;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe. r11,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82534698
	if (ctx.cr0.eq) goto loc_82534698;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82546708
	ctx.lr = 0x82534698;
	sub_82546708(ctx, base);
loc_82534698:
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// add. r3,r31,r11
	ctx.r3.u64 = ctx.r31.u64 + ctx.r11.u64;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x825346c0
	if (ctx.cr0.eq) goto loc_825346C0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe. r11,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x825346c0
	if (ctx.cr0.eq) goto loc_825346C0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82546708
	ctx.lr = 0x825346C0;
	sub_82546708(ctx, base);
loc_825346C0:
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmplwi cr6,r31,84
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 84, ctx.xer);
	// blt cr6,0x8253466c
	if (ctx.cr6.lt) goto loc_8253466C;
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

__attribute__((alias("__imp__sub_825346E4"))) PPC_WEAK_FUNC(sub_825346E4);
PPC_FUNC_IMPL(__imp__sub_825346E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825346E8"))) PPC_WEAK_FUNC(sub_825346E8);
PPC_FUNC_IMPL(__imp__sub_825346E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7660
	ctx.lr = 0x825346F0;
	__savegprlr_22(ctx, base);
	// stfd f31,-96(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -96, ctx.f31.u64);
	// li r12,-112
	ctx.r12.s64 = -112;
	// stvx128 v127,r1,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r1.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v127.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stwu r1,-1296(r1)
	ea = -1296 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,16(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// addi r3,r1,688
	ctx.r3.s64 = ctx.r1.s64 + 688;
	// li r5,488
	ctx.r5.s64 = 488;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// mr r24,r7
	ctx.r24.u64 = ctx.r7.u64;
	// mr r23,r8
	ctx.r23.u64 = ctx.r8.u64;
	// mr r22,r9
	ctx.r22.u64 = ctx.r9.u64;
	// mr r29,r10
	ctx.r29.u64 = ctx.r10.u64;
	// bl 0x82fa77c0
	ctx.lr = 0x82534734;
	sub_82FA77C0(ctx, base);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt cr6,0x8253476c
	if (ctx.cr6.lt) goto loc_8253476C;
	// cmpwi cr6,r30,2
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 2, ctx.xer);
	// ble cr6,0x82534764
	if (!ctx.cr6.gt) goto loc_82534764;
	// cmpwi cr6,r30,4
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 4, ctx.xer);
	// ble cr6,0x8253476c
	if (!ctx.cr6.gt) goto loc_8253476C;
	// cmpwi cr6,r30,6
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 6, ctx.xer);
	// ble cr6,0x82534764
	if (!ctx.cr6.gt) goto loc_82534764;
	// cmpwi cr6,r30,8
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 8, ctx.xer);
	// ble cr6,0x8253476c
	if (!ctx.cr6.gt) goto loc_8253476C;
	// cmpwi cr6,r30,11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 11, ctx.xer);
	// bgt cr6,0x8253476c
	if (ctx.cr6.gt) goto loc_8253476C;
loc_82534764:
	// addi r11,r31,84
	ctx.r11.s64 = ctx.r31.s64 + 84;
	// b 0x82534770
	goto loc_82534770;
loc_8253476C:
	// addi r11,r31,96
	ctx.r11.s64 = ctx.r31.s64 + 96;
loc_82534770:
	// li r8,12
	ctx.r8.s64 = 12;
	// lvlx v0,0,r11
	temp.u32 = ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vor128 v13,v77,v77
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_load_si128((__m128i*)ctx.v77.u8));
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// vor128 v12,v67,v67
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_load_si128((__m128i*)ctx.v67.u8));
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// addi r7,r1,128
	ctx.r7.s64 = ctx.r1.s64 + 128;
	// addi r6,r1,144
	ctx.r6.s64 = ctx.r1.s64 + 144;
	// lvrx v11,r8,r11
	temp.u32 = ctx.r8.u32 + ctx.r11.u32;
	_mm_store_si128((__m128i*)ctx.v11.u8, temp.u32 & 0xF ? _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : _mm_setzero_si128());
	// rlwinm r11,r30,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 4) & 0xFFFFFFF0;
	// li r28,0
	ctx.r28.s64 = 0;
	// vsldoi v11,v11,v11,4
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_alignr_epi8(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)ctx.v11.u8), 12));
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// vor v0,v0,v11
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)ctx.v11.u8)));
	// lfs f31,132(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	ctx.f31.f64 = double(temp.f32);
	// vsel v12,v0,v13,v12
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)ctx.v0.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)ctx.v13.u8))));
	// vor128 v0,v77,v77
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_load_si128((__m128i*)ctx.v77.u8));
	// stvx128 v12,r0,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// vor128 v12,v67,v67
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_load_si128((__m128i*)ctx.v67.u8));
	// lvx128 v127,r0,r10
	simd::store_shuffled(ctx.v127, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// addi r10,r11,120
	ctx.r10.s64 = ctx.r11.s64 + 120;
	// lwz r9,1380(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1380);
	// stvx128 v127,r0,r7
	_mm_store_si128((__m128i*)(base + ((ctx.r7.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v127.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvrx v13,r8,r10
	temp.u32 = ctx.r8.u32 + ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v13.u8, temp.u32 & 0xF ? _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskR[(temp.u32 & 0xF) * 16])) : _mm_setzero_si128());
	// stw r30,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r30.u32);
	// lvlx v11,0,r10
	temp.u32 = ctx.r10.u32;
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// vsldoi v13,v13,v13,4
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_alignr_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)ctx.v13.u8), 12));
	// stfs f31,160(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 160, temp.u32);
	// vor v13,v11,v13
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_or_si128(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)ctx.v13.u8)));
	// vsel v12,v13,v0,v12
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)ctx.v13.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)ctx.v0.u8))));
	// stvx128 v12,r0,r6
	_mm_store_si128((__m128i*)(base + ((ctx.r6.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// beq cr6,0x82534840
	if (ctx.cr6.eq) goto loc_82534840;
	// li r10,7
	ctx.r10.s64 = 7;
	// lwz r6,4(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// mr r9,r28
	ctx.r9.u64 = ctx.r28.u64;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8253480C:
	// addi r10,r1,696
	ctx.r10.s64 = ctx.r1.s64 + 696;
	// subf r7,r8,r6
	ctx.r7.s64 = ctx.r6.s64 - ctx.r8.s64;
	// srawi r7,r7,2
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x3) != 0);
	ctx.r7.s64 = ctx.r7.s32 >> 2;
	// cmplw cr6,r9,r7
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r7.u32, ctx.xer);
	// stwx r28,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r28.u32);
	// bge cr6,0x82534834
	if (!ctx.cr6.lt) goto loc_82534834;
	// lwzx r7,r11,r8
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82534834
	if (ctx.cr6.eq) goto loc_82534834;
	// stwx r7,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r7.u32);
loc_82534834:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8253480c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8253480C;
loc_82534840:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq cr6,0x8253488c
	if (ctx.cr6.eq) goto loc_8253488C;
	// lwz r11,24(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 24);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8253488c
	if (!ctx.cr6.eq) goto loc_8253488C;
	// lwz r11,20(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 20);
	// li r31,1
	ctx.r31.s64 = 1;
	// stw r31,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r31.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8253489c
	if (!ctx.cr6.eq) goto loc_8253489C;
	// li r3,6508
	ctx.r3.s64 = 6508;
	// bl 0x82691500
	ctx.lr = 0x82534870;
	sub_82691500(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82534894
	if (ctx.cr0.eq) goto loc_82534894;
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// li r5,2
	ctx.r5.s64 = 2;
	// addi r4,r11,31460
	ctx.r4.s64 = ctx.r11.s64 + 31460;
	// bl 0x82523da8
	ctx.lr = 0x82534888;
	sub_82523DA8(ctx, base);
	// b 0x82534898
	goto loc_82534898;
loc_8253488C:
	// stw r28,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r28.u32);
	// b 0x82534990
	goto loc_82534990;
loc_82534894:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
loc_82534898:
	// stw r3,20(r27)
	PPC_STORE_U32(ctx.r27.u32 + 20, ctx.r3.u32);
loc_8253489C:
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// li r5,510
	ctx.r5.s64 = 510;
	// addi r29,r11,31944
	ctx.r29.s64 = ctx.r11.s64 + 31944;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,178
	ctx.r3.s64 = ctx.r1.s64 + 178;
	// lhz r11,31944(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 31944);
	// sth r11,176(r1)
	PPC_STORE_U16(ctx.r1.u32 + 176, ctx.r11.u16);
	// bl 0x82fa7cf0
	ctx.lr = 0x825348BC;
	sub_82FA7CF0(ctx, base);
	// cmplwi cr6,r30,20
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 20, ctx.xer);
	// bgt cr6,0x8253490c
	if (ctx.cr6.gt) goto loc_8253490C;
	// lis r12,-32231
	ctx.r12.s64 = -2112290816;
	// addi r12,r12,26800
	ctx.r12.s64 = ctx.r12.s64 + 26800;
	// lbzx r0,r12,r30
	ctx.r0.u64 = PPC_LOAD_U8(ctx.r12.u32 + ctx.r30.u32);
	// lis r12,-32173
	ctx.r12.s64 = -2108489728;
	// nop 
	// addi r12,r12,18668
	ctx.r12.s64 = ctx.r12.s64 + 18668;
	// nop 
	// add r12,r12,r0
	ctx.r12.u64 = ctx.r12.u64 + ctx.r0.u64;
	// mtctr r12
	ctx.ctr.u64 = ctx.r12.u64;
	// bctr 
	switch (ctx.r30.u64) {
	case 0:
		goto loc_8253490C;
	case 1:
		goto loc_82534910;
	case 2:
		goto loc_825348EC;
	case 3:
		goto loc_825348F4;
	case 4:
		goto loc_825348FC;
	case 5:
		goto loc_8253490C;
	case 6:
		goto loc_82534910;
	case 7:
		goto loc_8253490C;
	case 8:
		goto loc_82534910;
	case 9:
		goto loc_8253490C;
	case 10:
		goto loc_82534910;
	case 11:
		goto loc_825348EC;
	case 12:
		goto loc_825348F4;
	case 13:
		goto loc_825348FC;
	case 14:
		goto loc_82534904;
	case 15:
		goto loc_8253490C;
	case 16:
		goto loc_82534910;
	case 17:
		goto loc_825348EC;
	case 18:
		goto loc_825348F4;
	case 19:
		goto loc_825348FC;
	case 20:
		goto loc_82534904;
	default:
		__builtin_unreachable();
	}
loc_825348EC:
	// li r31,2
	ctx.r31.s64 = 2;
	// b 0x82534910
	goto loc_82534910;
loc_825348F4:
	// li r31,3
	ctx.r31.s64 = 3;
	// b 0x82534910
	goto loc_82534910;
loc_825348FC:
	// li r31,4
	ctx.r31.s64 = 4;
	// b 0x82534910
	goto loc_82534910;
loc_82534904:
	// li r31,5
	ctx.r31.s64 = 5;
	// b 0x82534910
	goto loc_82534910;
loc_8253490C:
	// mr r31,r28
	ctx.r31.u64 = ctx.r28.u64;
loc_82534910:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,256
	ctx.r4.s64 = 256;
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x822f7238
	ctx.lr = 0x82534920;
	sub_822F7238(ctx, base);
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// mulli r10,r31,28
	ctx.r10.s64 = ctx.r31.s64 * 28;
	// addi r11,r11,6424
	ctx.r11.s64 = ctx.r11.s64 + 6424;
	// lis r7,-31958
	ctx.r7.s64 = -2094399488;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// lis r9,25
	ctx.r9.s64 = 1638400;
	// lis r3,-32243
	ctx.r3.s64 = -2113077248;
	// ori r10,r9,26125
	ctx.r10.u64 = ctx.r9.u64 | 26125;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lfs f0,-24756(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -24756);
	ctx.f0.f64 = double(temp.f32);
	// li r9,1
	ctx.r9.s64 = 1;
	// mr r8,r31
	ctx.r8.u64 = ctx.r31.u64;
	// lfs f13,31512(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 31512);
	ctx.f13.f64 = double(temp.f32);
	// addi r6,r1,176
	ctx.r6.s64 = ctx.r1.s64 + 176;
	// lwz r11,21292(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 21292);
	// mullw r11,r11,r10
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// addis r11,r11,15471
	ctx.r11.s64 = ctx.r11.s64 + 1013907456;
	// addi r11,r11,-3233
	ctx.r11.s64 = ctx.r11.s64 + -3233;
	// stw r11,21292(r7)
	PPC_STORE_U32(ctx.r7.u32 + 21292, ctx.r11.u32);
	// clrlwi r11,r11,9
	ctx.r11.u64 = ctx.r11.u32 & 0x7FFFFF;
	// lwz r3,20(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 20);
	// oris r11,r11,16256
	ctx.r11.u64 = ctx.r11.u64 | 1065353216;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// lfs f12,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f12.f64 = double(temp.f32);
	// fsubs f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 - ctx.f0.f64));
	// fmuls f1,f0,f13
	ctx.f1.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// bl 0x82524160
	ctx.lr = 0x82534990;
	sub_82524160(ctx, base);
loc_82534990:
	// li r3,1744
	ctx.r3.s64 = 1744;
	// bl 0x82691500
	ctx.lr = 0x82534998;
	sub_82691500(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x825349cc
	if (ctx.cr0.eq) goto loc_825349CC;
	// vor128 v1,v127,v127
	_mm_store_si128((__m128i*)ctx.v1.u8, _mm_load_si128((__m128i*)ctx.v127.u8));
	// mr r10,r22
	ctx.r10.u64 = ctx.r22.u64;
	// mr r8,r23
	ctx.r8.u64 = ctx.r23.u64;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mr r7,r24
	ctx.r7.u64 = ctx.r24.u64;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// addi r4,r1,688
	ctx.r4.s64 = ctx.r1.s64 + 688;
	// bl 0x82531690
	ctx.lr = 0x825349C4;
	sub_82531690(ctx, base);
	// stw r3,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r3.u32);
	// b 0x825349d0
	goto loc_825349D0;
loc_825349CC:
	// stw r28,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r28.u32);
loc_825349D0:
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x825b1698
	ctx.lr = 0x825349DC;
	sub_825B1698(ctx, base);
	// addi r1,r1,1296
	ctx.r1.s64 = ctx.r1.s64 + 1296;
	// li r0,-112
	ctx.r0.s64 = -112;
	// lvx128 v127,r1,r0
	simd::store_shuffled(ctx.v127, simd::load_and_shuffle(base + ((ctx.r1.u32 + ctx.r0.u32) & ~0xF), VectorMaskL));
	// lfd f31,-96(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// b 0x82fa76b0
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825349F0"))) PPC_WEAK_FUNC(sub_825349F0);
PPC_FUNC_IMPL(__imp__sub_825349F0) {
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
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82534a64
	if (ctx.cr6.eq) goto loc_82534A64;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// li r9,1
	ctx.r9.s64 = 1;
	// lfs f0,-2340(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -2340);
	ctx.f0.f64 = double(temp.f32);
loc_82534A28:
	// lwz r11,44(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 44);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82534a54
	if (ctx.cr6.eq) goto loc_82534A54;
	// li r8,1520
	ctx.r8.s64 = 1520;
	// lvx128 v0,r0,r10
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// stfs f0,1536(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 1536, temp.u32);
	// stw r9,1580(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1580, ctx.r9.u32);
	// stw r9,1584(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1584, ctx.r9.u32);
	// stw r30,1564(r11)
	PPC_STORE_U32(ctx.r11.u32 + 1564, ctx.r30.u32);
	// stvx128 v0,r11,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stw r30,36(r10)
	PPC_STORE_U32(ctx.r10.u32 + 36, ctx.r30.u32);
loc_82534A54:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r10,r10,48
	ctx.r10.s64 = ctx.r10.s64 + 48;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82534a28
	if (!ctx.cr6.eq) goto loc_82534A28;
loc_82534A64:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82534a88
	ctx.lr = 0x82534A6C;
	sub_82534A88(ctx, base);
	// stw r30,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r30.u32);
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

__attribute__((alias("__imp__sub_82534A88"))) PPC_WEAK_FUNC(sub_82534A88);
PPC_FUNC_IMPL(__imp__sub_82534A88) {
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
	// lwz r31,20(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82534adc
	if (ctx.cr6.eq) goto loc_82534ADC;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82534abc
	if (ctx.cr6.eq) goto loc_82534ABC;
	// bl 0x82241d18
	ctx.lr = 0x82534ABC;
	sub_82241D18(ctx, base);
loc_82534ABC:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82534acc
	if (ctx.cr6.eq) goto loc_82534ACC;
	// bl 0x82241d18
	ctx.lr = 0x82534ACC;
	sub_82241D18(ctx, base);
loc_82534ACC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82691540
	ctx.lr = 0x82534AD4;
	sub_82691540(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r11.u32);
loc_82534ADC:
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

__attribute__((alias("__imp__sub_82534AF4"))) PPC_WEAK_FUNC(sub_82534AF4);
PPC_FUNC_IMPL(__imp__sub_82534AF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82534AF8"))) PPC_WEAK_FUNC(sub_82534AF8);
PPC_FUNC_IMPL(__imp__sub_82534AF8) {
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
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82534b58
	if (ctx.cr6.eq) goto loc_82534B58;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r4,5
	ctx.r4.s64 = 5;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x822e4d50
	ctx.lr = 0x82534B34;
	sub_822E4D50(ctx, base);
	// stw r31,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r31.u32);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r4,r11,-13556
	ctx.r4.s64 = ctx.r11.s64 + -13556;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x826a7620
	ctx.lr = 0x82534B50;
	sub_826A7620(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822e4d00
	ctx.lr = 0x82534B58;
	sub_822E4D00(ctx, base);
loc_82534B58:
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

__attribute__((alias("__imp__sub_82534B70"))) PPC_WEAK_FUNC(sub_82534B70);
PPC_FUNC_IMPL(__imp__sub_82534B70) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7670
	ctx.lr = 0x82534B78;
	__savegprlr_26(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// bl 0x82539b68
	ctx.lr = 0x82534B8C;
	sub_82539B68(ctx, base);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r11,r11,15388
	ctx.r11.s64 = ctx.r11.s64 + 15388;
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r29,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r29.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// li r3,704
	ctx.r3.s64 = 704;
	// stw r10,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r10.u32);
	// addi r27,r31,60
	ctx.r27.s64 = ctx.r31.s64 + 60;
	// stw r29,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r29.u32);
	// addi r30,r31,72
	ctx.r30.s64 = ctx.r31.s64 + 72;
	// stw r29,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r29.u32);
	// stw r29,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r29.u32);
	// stw r29,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r29.u32);
	// stw r29,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r29.u32);
	// bl 0x82691500
	ctx.lr = 0x82534BCC;
	sub_82691500(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82534bdc
	if (ctx.cr0.eq) goto loc_82534BDC;
	// bl 0x825412d0
	ctx.lr = 0x82534BD8;
	sub_825412D0(ctx, base);
	// b 0x82534be0
	goto loc_82534BE0;
loc_82534BDC:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
loc_82534BE0:
	// stw r3,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r3.u32);
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// stb r29,48(r3)
	PPC_STORE_U8(ctx.r3.u32 + 48, ctx.r29.u8);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r4,r11,31944
	ctx.r4.s64 = ctx.r11.s64 + 31944;
	// bl 0x82541450
	ctx.lr = 0x82534BF8;
	sub_82541450(ctx, base);
	// li r3,4656
	ctx.r3.s64 = 4656;
	// bl 0x82691500
	ctx.lr = 0x82534C00;
	sub_82691500(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82534c10
	if (ctx.cr0.eq) goto loc_82534C10;
	// bl 0x82538c08
	ctx.lr = 0x82534C0C;
	sub_82538C08(ctx, base);
	// b 0x82534c14
	goto loc_82534C14;
loc_82534C10:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
loc_82534C14:
	// stw r3,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r3.u32);
	// li r3,4656
	ctx.r3.s64 = 4656;
	// bl 0x82691500
	ctx.lr = 0x82534C20;
	sub_82691500(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82534c38
	if (ctx.cr0.eq) goto loc_82534C38;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,6
	ctx.r4.s64 = 6;
	// bl 0x82538d88
	ctx.lr = 0x82534C34;
	sub_82538D88(ctx, base);
	// b 0x82534c3c
	goto loc_82534C3C;
loc_82534C38:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
loc_82534C3C:
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// li r3,4656
	ctx.r3.s64 = 4656;
	// bl 0x82691500
	ctx.lr = 0x82534C48;
	sub_82691500(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82534c60
	if (ctx.cr0.eq) goto loc_82534C60;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,6
	ctx.r4.s64 = 6;
	// bl 0x82538d88
	ctx.lr = 0x82534C5C;
	sub_82538D88(ctx, base);
	// b 0x82534c64
	goto loc_82534C64;
loc_82534C60:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
loc_82534C64:
	// stw r3,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r3.u32);
	// li r3,4656
	ctx.r3.s64 = 4656;
	// bl 0x82691500
	ctx.lr = 0x82534C70;
	sub_82691500(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82534c88
	if (ctx.cr0.eq) goto loc_82534C88;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x82538d88
	ctx.lr = 0x82534C84;
	sub_82538D88(ctx, base);
	// b 0x82534c8c
	goto loc_82534C8C;
loc_82534C88:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
loc_82534C8C:
	// stw r3,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r3.u32);
	// li r3,4656
	ctx.r3.s64 = 4656;
	// bl 0x82691500
	ctx.lr = 0x82534C98;
	sub_82691500(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82534cb0
	if (ctx.cr0.eq) goto loc_82534CB0;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x82538d88
	ctx.lr = 0x82534CAC;
	sub_82538D88(ctx, base);
	// b 0x82534cb4
	goto loc_82534CB4;
loc_82534CB0:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
loc_82534CB4:
	// stw r3,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r3.u32);
	// li r3,4656
	ctx.r3.s64 = 4656;
	// bl 0x82691500
	ctx.lr = 0x82534CC0;
	sub_82691500(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82534cd8
	if (ctx.cr0.eq) goto loc_82534CD8;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,4
	ctx.r4.s64 = 4;
	// bl 0x82538d88
	ctx.lr = 0x82534CD4;
	sub_82538D88(ctx, base);
	// b 0x82534cdc
	goto loc_82534CDC;
loc_82534CD8:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
loc_82534CDC:
	// stw r3,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r3.u32);
	// li r3,4656
	ctx.r3.s64 = 4656;
	// bl 0x82691500
	ctx.lr = 0x82534CE8;
	sub_82691500(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82534d00
	if (ctx.cr0.eq) goto loc_82534D00;
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82538d88
	ctx.lr = 0x82534CFC;
	sub_82538D88(ctx, base);
	// b 0x82534d04
	goto loc_82534D04;
loc_82534D00:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
loc_82534D04:
	// stw r3,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r3.u32);
	// li r3,4656
	ctx.r3.s64 = 4656;
	// bl 0x82691500
	ctx.lr = 0x82534D10;
	sub_82691500(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82534d28
	if (ctx.cr0.eq) goto loc_82534D28;
	// li r5,3
	ctx.r5.s64 = 3;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82538d88
	ctx.lr = 0x82534D24;
	sub_82538D88(ctx, base);
	// b 0x82534d2c
	goto loc_82534D2C;
loc_82534D28:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
loc_82534D2C:
	// stw r3,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r3.u32);
	// li r3,4656
	ctx.r3.s64 = 4656;
	// bl 0x82691500
	ctx.lr = 0x82534D38;
	sub_82691500(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82534d50
	if (ctx.cr0.eq) goto loc_82534D50;
	// li r5,2
	ctx.r5.s64 = 2;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82538d88
	ctx.lr = 0x82534D4C;
	sub_82538D88(ctx, base);
	// b 0x82534d54
	goto loc_82534D54;
loc_82534D50:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
loc_82534D54:
	// stw r3,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r3.u32);
	// li r3,4656
	ctx.r3.s64 = 4656;
	// bl 0x82691500
	ctx.lr = 0x82534D60;
	sub_82691500(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82534d78
	if (ctx.cr0.eq) goto loc_82534D78;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82538d88
	ctx.lr = 0x82534D74;
	sub_82538D88(ctx, base);
	// b 0x82534d7c
	goto loc_82534D7C;
loc_82534D78:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
loc_82534D7C:
	// stw r3,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r3.u32);
	// li r3,4656
	ctx.r3.s64 = 4656;
	// bl 0x82691500
	ctx.lr = 0x82534D88;
	sub_82691500(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82534da0
	if (ctx.cr0.eq) goto loc_82534DA0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,7
	ctx.r4.s64 = 7;
	// bl 0x82538d88
	ctx.lr = 0x82534D9C;
	sub_82538D88(ctx, base);
	// b 0x82534da4
	goto loc_82534DA4;
loc_82534DA0:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
loc_82534DA4:
	// stw r3,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r3.u32);
	// li r3,16
	ctx.r3.s64 = 16;
	// bl 0x82691500
	ctx.lr = 0x82534DB0;
	sub_82691500(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82534dc8
	if (ctx.cr0.eq) goto loc_82534DC8;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x8253c460
	ctx.lr = 0x82534DC4;
	sub_8253C460(ctx, base);
	// b 0x82534dcc
	goto loc_82534DCC;
loc_82534DC8:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
loc_82534DCC:
	// stw r3,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r3.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8253a1e0
	ctx.lr = 0x82534DDC;
	sub_8253A1E0(ctx, base);
	// lis r11,-32173
	ctx.r11.s64 = -2108489728;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r11,22976
	ctx.r4.s64 = ctx.r11.s64 + 22976;
	// bl 0x826a8068
	ctx.lr = 0x82534DF0;
	sub_826A8068(ctx, base);
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82534e00
	if (ctx.cr6.eq) goto loc_82534E00;
	// bl 0x82241d18
	ctx.lr = 0x82534E00;
	sub_82241D18(ctx, base);
loc_82534E00:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8253a1e0
	ctx.lr = 0x82534E0C;
	sub_8253A1E0(ctx, base);
	// li r4,3
	ctx.r4.s64 = 3;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x826a4200
	ctx.lr = 0x82534E18;
	sub_826A4200(ctx, base);
	// lwz r3,100(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82534e28
	if (ctx.cr6.eq) goto loc_82534E28;
	// bl 0x82241d18
	ctx.lr = 0x82534E28;
	sub_82241D18(ctx, base);
loc_82534E28:
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82534e4c
	if (ctx.cr6.eq) goto loc_82534E4C;
	// rlwinm r11,r11,0,0,7
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFF000000;
	// lis r10,31744
	ctx.r10.s64 = 2080374784;
	// subfc r11,r10,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r10.u32;
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// b 0x82534e50
	goto loc_82534E50;
loc_82534E4C:
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_82534E50:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82534e90
	if (ctx.cr6.eq) goto loc_82534E90;
	// bl 0x826a3ae0
	ctx.lr = 0x82534E5C;
	sub_826A3AE0(ctx, base);
	// lis r8,6184
	ctx.r8.s64 = 405274624;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// ori r8,r8,323
	ctx.r8.u64 = ctx.r8.u64 | 323;
	// bl 0x826a3da0
	ctx.lr = 0x82534E7C;
	sub_826A3DA0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x823f6330
	ctx.lr = 0x82534E88;
	sub_823F6330(ctx, base);
	// lwz r3,108(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// b 0x82534eb4
	goto loc_82534EB4;
loc_82534E90:
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822e7a80
	ctx.lr = 0x82534EA4;
	sub_822E7A80(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x823f6330
	ctx.lr = 0x82534EB0;
	sub_823F6330(ctx, base);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
loc_82534EB4:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82534ec0
	if (ctx.cr6.eq) goto loc_82534EC0;
	// bl 0x82241d18
	ctx.lr = 0x82534EC0;
	sub_82241D18(ctx, base);
loc_82534EC0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82fa76c0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82534ECC"))) PPC_WEAK_FUNC(sub_82534ECC);
PPC_FUNC_IMPL(__imp__sub_82534ECC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82534ED0"))) PPC_WEAK_FUNC(sub_82534ED0);
PPC_FUNC_IMPL(__imp__sub_82534ED0) {
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
	// bl 0x82534f20
	ctx.lr = 0x82534EF0;
	sub_82534F20(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82534f00
	if (ctx.cr0.eq) goto loc_82534F00;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82691540
	ctx.lr = 0x82534F00;
	sub_82691540(ctx, base);
loc_82534F00:
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

__attribute__((alias("__imp__sub_82534F1C"))) PPC_WEAK_FUNC(sub_82534F1C);
PPC_FUNC_IMPL(__imp__sub_82534F1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82534F20"))) PPC_WEAK_FUNC(sub_82534F20);
PPC_FUNC_IMPL(__imp__sub_82534F20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x82534F28;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r11,r11,15388
	ctx.r11.s64 = ctx.r11.s64 + 15388;
	// li r31,1
	ctx.r31.s64 = 1;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// addi r29,r11,31944
	ctx.r29.s64 = ctx.r11.s64 + 31944;
loc_82534F48:
	// bl 0x826a4210
	ctx.lr = 0x82534F4C;
	sub_826A4210(ctx, base);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82535718
	ctx.lr = 0x82534F68;
	sub_82535718(ctx, base);
	// bl 0x826a4210
	ctx.lr = 0x82534F6C;
	sub_826A4210(ctx, base);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x825355a8
	ctx.lr = 0x82534F84;
	sub_825355A8(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplwi cr6,r31,3
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 3, ctx.xer);
	// ble cr6,0x82534f48
	if (!ctx.cr6.gt) goto loc_82534F48;
	// lwz r11,68(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 68);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82534ff4
	if (ctx.cr6.eq) goto loc_82534FF4;
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// li r29,4
	ctx.r29.s64 = 4;
	// addi r31,r11,6364
	ctx.r31.s64 = ctx.r11.s64 + 6364;
	// lis r11,-31957
	ctx.r11.s64 = -2094333952;
	// addi r28,r11,-22432
	ctx.r28.s64 = ctx.r11.s64 + -22432;
loc_82534FB0:
	// lwz r11,60(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 60);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82534fe8
	if (ctx.cr6.eq) goto loc_82534FE8;
	// lwz r11,68(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 68);
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r3,r11,152
	ctx.r3.s64 = ctx.r11.s64 + 152;
	// bl 0x82564eb8
	ctx.lr = 0x82534FCC;
	sub_82564EB8(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82534fe8
	if (ctx.cr0.eq) goto loc_82534FE8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82534fe8
	if (ctx.cr6.eq) goto loc_82534FE8;
	// lwz r10,36(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 36);
	// stw r10,412(r11)
	PPC_STORE_U32(ctx.r11.u32 + 412, ctx.r10.u32);
loc_82534FE8:
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// bne 0x82534fb0
	if (!ctx.cr0.eq) goto loc_82534FB0;
loc_82534FF4:
	// lwz r31,120(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 120);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82535018
	if (ctx.cr6.eq) goto loc_82535018;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82535010
	if (ctx.cr6.eq) goto loc_82535010;
	// bl 0x82241d18
	ctx.lr = 0x82535010;
	sub_82241D18(ctx, base);
loc_82535010:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82691540
	ctx.lr = 0x82535018;
	sub_82691540(ctx, base);
loc_82535018:
	// lwz r3,116(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 116);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8253502c
	if (ctx.cr6.eq) goto loc_8253502C;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x822cad90
	ctx.lr = 0x8253502C;
	sub_822CAD90(ctx, base);
loc_8253502C:
	// lwz r3,112(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 112);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82535040
	if (ctx.cr6.eq) goto loc_82535040;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x822cad90
	ctx.lr = 0x82535040;
	sub_822CAD90(ctx, base);
loc_82535040:
	// lwz r3,108(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 108);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82535054
	if (ctx.cr6.eq) goto loc_82535054;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x822cad90
	ctx.lr = 0x82535054;
	sub_822CAD90(ctx, base);
loc_82535054:
	// lwz r3,104(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 104);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82535068
	if (ctx.cr6.eq) goto loc_82535068;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x822cad90
	ctx.lr = 0x82535068;
	sub_822CAD90(ctx, base);
loc_82535068:
	// lwz r3,100(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 100);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8253507c
	if (ctx.cr6.eq) goto loc_8253507C;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x822cad90
	ctx.lr = 0x8253507C;
	sub_822CAD90(ctx, base);
loc_8253507C:
	// lwz r3,96(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 96);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82535090
	if (ctx.cr6.eq) goto loc_82535090;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x822cad90
	ctx.lr = 0x82535090;
	sub_822CAD90(ctx, base);
loc_82535090:
	// lwz r3,92(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 92);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x825350a4
	if (ctx.cr6.eq) goto loc_825350A4;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x822cad90
	ctx.lr = 0x825350A4;
	sub_822CAD90(ctx, base);
loc_825350A4:
	// lwz r3,88(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 88);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x825350b8
	if (ctx.cr6.eq) goto loc_825350B8;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x822cad90
	ctx.lr = 0x825350B8;
	sub_822CAD90(ctx, base);
loc_825350B8:
	// lwz r3,84(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x825350cc
	if (ctx.cr6.eq) goto loc_825350CC;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x822cad90
	ctx.lr = 0x825350CC;
	sub_822CAD90(ctx, base);
loc_825350CC:
	// lwz r3,80(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 80);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x825350e0
	if (ctx.cr6.eq) goto loc_825350E0;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x822cad90
	ctx.lr = 0x825350E0;
	sub_822CAD90(ctx, base);
loc_825350E0:
	// lwz r3,76(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 76);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x825350f4
	if (ctx.cr6.eq) goto loc_825350F4;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x822cad90
	ctx.lr = 0x825350F4;
	sub_822CAD90(ctx, base);
loc_825350F4:
	// addi r3,r30,72
	ctx.r3.s64 = ctx.r30.s64 + 72;
	// bl 0x82541390
	ctx.lr = 0x825350FC;
	sub_82541390(ctx, base);
	// lwz r3,64(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 64);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8253510c
	if (ctx.cr6.eq) goto loc_8253510C;
	// bl 0x82241d18
	ctx.lr = 0x8253510C;
	sub_82241D18(ctx, base);
loc_8253510C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82539db8
	ctx.lr = 0x82535114;
	sub_82539DB8(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8253511C"))) PPC_WEAK_FUNC(sub_8253511C);
PPC_FUNC_IMPL(__imp__sub_8253511C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82535120"))) PPC_WEAK_FUNC(sub_82535120);
PPC_FUNC_IMPL(__imp__sub_82535120) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa766c
	ctx.lr = 0x82535128;
	__savegprlr_25(ctx, base);
	// ld r12,-4096(r1)
	ctx.r12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -4096);
	// stwu r1,-4240(r1)
	ea = -4240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// li r5,2046
	ctx.r5.s64 = 2046;
	// lhz r30,31944(r11)
	ctx.r30.u64 = PPC_LOAD_U16(ctx.r11.u32 + 31944);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,82
	ctx.r3.s64 = ctx.r1.s64 + 82;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// mr r25,r8
	ctx.r25.u64 = ctx.r8.u64;
	// sth r30,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r30.u16);
	// bl 0x82fa7cf0
	ctx.lr = 0x82535164;
	sub_82FA7CF0(ctx, base);
	// li r5,2046
	ctx.r5.s64 = 2046;
	// sth r30,2128(r1)
	PPC_STORE_U16(ctx.r1.u32 + 2128, ctx.r30.u16);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,2130
	ctx.r3.s64 = ctx.r1.s64 + 2130;
	// bl 0x82fa7cf0
	ctx.lr = 0x82535178;
	sub_82FA7CF0(ctx, base);
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r30,r11,14640
	ctx.r30.s64 = ctx.r11.s64 + 14640;
	// beq cr6,0x825351a0
	if (ctx.cr6.eq) goto loc_825351A0;
	// rlwinm r11,r29,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// li r5,1024
	ctx.r5.s64 = 1024;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwzx r6,r11,r30
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// bl 0x8234aa60
	ctx.lr = 0x825351A0;
	sub_8234AA60(ctx, base);
loc_825351A0:
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// beq cr6,0x82535244
	if (ctx.cr6.eq) goto loc_82535244;
	// rlwinm r11,r26,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// li r5,1024
	ctx.r5.s64 = 1024;
	// addi r4,r1,2128
	ctx.r4.s64 = ctx.r1.s64 + 2128;
	// lwzx r6,r11,r30
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// bl 0x8234aa60
	ctx.lr = 0x825351C0;
	sub_8234AA60(ctx, base);
	// cmplwi cr6,r28,1
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 1, ctx.xer);
	// blt cr6,0x8253521c
	if (ctx.cr6.lt) goto loc_8253521C;
	// beq cr6,0x825351f8
	if (ctx.cr6.eq) goto loc_825351F8;
	// cmplwi cr6,r28,3
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 3, ctx.xer);
	// bge cr6,0x825352b8
	if (!ctx.cr6.lt) goto loc_825352B8;
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// addi r6,r1,2128
	ctx.r6.s64 = ctx.r1.s64 + 2128;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// beq cr6,0x825351f0
	if (ctx.cr6.eq) goto loc_825351F0;
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// b 0x8253523c
	goto loc_8253523C;
loc_825351F0:
	// lwz r3,84(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// b 0x8253523c
	goto loc_8253523C;
loc_825351F8:
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// addi r6,r1,2128
	ctx.r6.s64 = ctx.r1.s64 + 2128;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// beq cr6,0x82535214
	if (ctx.cr6.eq) goto loc_82535214;
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// b 0x8253523c
	goto loc_8253523C;
loc_82535214:
	// lwz r3,76(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// b 0x8253523c
	goto loc_8253523C;
loc_8253521C:
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// addi r6,r1,2128
	ctx.r6.s64 = ctx.r1.s64 + 2128;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// beq cr6,0x82535238
	if (ctx.cr6.eq) goto loc_82535238;
	// lwz r3,92(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// b 0x8253523c
	goto loc_8253523C;
loc_82535238:
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
loc_8253523C:
	// bl 0x825392d0
	ctx.lr = 0x82535240;
	sub_825392D0(ctx, base);
	// b 0x825352b8
	goto loc_825352B8;
loc_82535244:
	// cmplwi cr6,r28,1
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 1, ctx.xer);
	// blt cr6,0x82535298
	if (ctx.cr6.lt) goto loc_82535298;
	// beq cr6,0x82535278
	if (ctx.cr6.eq) goto loc_82535278;
	// cmplwi cr6,r28,3
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 3, ctx.xer);
	// bge cr6,0x825352b8
	if (!ctx.cr6.lt) goto loc_825352B8;
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// beq cr6,0x82535270
	if (ctx.cr6.eq) goto loc_82535270;
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// b 0x825352b4
	goto loc_825352B4;
loc_82535270:
	// lwz r3,84(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// b 0x825352b4
	goto loc_825352B4;
loc_82535278:
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// beq cr6,0x82535290
	if (ctx.cr6.eq) goto loc_82535290;
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// b 0x825352b4
	goto loc_825352B4;
loc_82535290:
	// lwz r3,76(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// b 0x825352b4
	goto loc_825352B4;
loc_82535298:
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// beq cr6,0x825352b0
	if (ctx.cr6.eq) goto loc_825352B0;
	// lwz r3,92(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// b 0x825352b4
	goto loc_825352B4;
loc_825352B0:
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
loc_825352B4:
	// bl 0x82539030
	ctx.lr = 0x825352B8;
	sub_82539030(ctx, base);
loc_825352B8:
	// addi r1,r1,4240
	ctx.r1.s64 = ctx.r1.s64 + 4240;
	// b 0x82fa76bc
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825352C0"))) PPC_WEAK_FUNC(sub_825352C0);
PPC_FUNC_IMPL(__imp__sub_825352C0) {
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
	// stwu r1,-2160(r1)
	ea = -2160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31969
	ctx.r11.s64 = -2095120384;
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,14640
	ctx.r11.s64 = ctx.r11.s64 + 14640;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// li r5,1024
	ctx.r5.s64 = 1024;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,28(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// lwzx r6,r10,r11
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// bl 0x8234aa60
	ctx.lr = 0x825352FC;
	sub_8234AA60(ctx, base);
	// cmplwi cr6,r31,1
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 1, ctx.xer);
	// blt cr6,0x82535320
	if (ctx.cr6.lt) goto loc_82535320;
	// beq cr6,0x82535318
	if (ctx.cr6.eq) goto loc_82535318;
	// cmplwi cr6,r31,3
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 3, ctx.xer);
	// bge cr6,0x8253532c
	if (!ctx.cr6.lt) goto loc_8253532C;
	// lwz r3,112(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 112);
	// b 0x82535324
	goto loc_82535324;
loc_82535318:
	// lwz r3,104(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 104);
	// b 0x82535324
	goto loc_82535324;
loc_82535320:
	// lwz r3,108(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 108);
loc_82535324:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82538f08
	ctx.lr = 0x8253532C;
	sub_82538F08(ctx, base);
loc_8253532C:
	// addi r1,r1,2160
	ctx.r1.s64 = ctx.r1.s64 + 2160;
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

__attribute__((alias("__imp__sub_82535344"))) PPC_WEAK_FUNC(sub_82535344);
PPC_FUNC_IMPL(__imp__sub_82535344) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82535348"))) PPC_WEAK_FUNC(sub_82535348);
PPC_FUNC_IMPL(__imp__sub_82535348) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r4,5
	ctx.r4.s64 = 5;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822e4d50
	ctx.lr = 0x8253537C;
	sub_822E4D50(ctx, base);
	// lwz r3,60(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r30.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x825353a0
	if (ctx.cr6.eq) goto loc_825353A0;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r4,r11,15164
	ctx.r4.s64 = ctx.r11.s64 + 15164;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x826a7620
	ctx.lr = 0x825353A0;
	sub_826A7620(ctx, base);
loc_825353A0:
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8253ec60
	ctx.lr = 0x825353B0;
	sub_8253EC60(ctx, base);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x8253ec60
	ctx.lr = 0x825353C0;
	sub_8253EC60(ctx, base);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x822e4d00
	ctx.lr = 0x825353C8;
	sub_822E4D00(ctx, base);
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

__attribute__((alias("__imp__sub_825353E0"))) PPC_WEAK_FUNC(sub_825353E0);
PPC_FUNC_IMPL(__imp__sub_825353E0) {
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
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r7,r5
	ctx.r7.u64 = ctx.r5.u64;
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// addi r5,r11,15204
	ctx.r5.s64 = ctx.r11.s64 + 15204;
	// li r4,10
	ctx.r4.s64 = 10;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82563c28
	ctx.lr = 0x82535410;
	sub_82563C28(ctx, base);
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x8253548c
	if (ctx.cr6.eq) goto loc_8253548C;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r4,5
	ctx.r4.s64 = 5;
	// stw r11,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// stw r11,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r11.u32);
	// bl 0x822e4d50
	ctx.lr = 0x82535434;
	sub_822E4D50(ctx, base);
	// addi r11,r1,144
	ctx.r11.s64 = ctx.r1.s64 + 144;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// lwz r3,60(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// stw r11,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r11.u32);
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r4,r10,15188
	ctx.r4.s64 = ctx.r10.s64 + 15188;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// bl 0x826a7620
	ctx.lr = 0x82535454;
	sub_826A7620(ctx, base);
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x822e4d50
	ctx.lr = 0x82535460;
	sub_822E4D50(ctx, base);
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// lwz r3,60(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// addi r11,r11,32570
	ctx.r11.s64 = ctx.r11.s64 + 32570;
	// addi r4,r10,15164
	ctx.r4.s64 = ctx.r10.s64 + 15164;
	// stw r11,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r11.u32);
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// bl 0x826a7620
	ctx.lr = 0x82535484;
	sub_826A7620(ctx, base);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x822e4d00
	ctx.lr = 0x8253548C;
	sub_822E4D00(ctx, base);
loc_8253548C:
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

__attribute__((alias("__imp__sub_825354A0"))) PPC_WEAK_FUNC(sub_825354A0);
PPC_FUNC_IMPL(__imp__sub_825354A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x825354A8;
	__savegprlr_29(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// li r5,32
	ctx.r5.s64 = 32;
	// addi r6,r11,19296
	ctx.r6.s64 = ctx.r11.s64 + 19296;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,28(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// bl 0x8234aa60
	ctx.lr = 0x825354D0;
	sub_8234AA60(ctx, base);
	// lwz r31,12(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x825355a0
	if (!ctx.cr6.eq) goto loc_825355A0;
	// li r10,4
	ctx.r10.s64 = 4;
	// addi r11,r1,84
	ctx.r11.s64 = ctx.r1.s64 + 84;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// li r10,0
	ctx.r10.s64 = 0;
loc_825354F0:
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// stwu r10,16(r11)
	ea = 16 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x825354f0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_825354F0;
	// li r4,3
	ctx.r4.s64 = 3;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x822e4d50
	ctx.lr = 0x82535508;
	sub_822E4D50(ctx, base);
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// li r4,3
	ctx.r4.s64 = 3;
	// addi r11,r11,27984
	ctx.r11.s64 = ctx.r11.s64 + 27984;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lfd f0,128(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + 128);
	// stfd f0,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.f0.u64);
	// bl 0x822e4d50
	ctx.lr = 0x82535524;
	sub_822E4D50(ctx, base);
	// clrldi r11,r30,32
	ctx.r11.u64 = ctx.r30.u64 & 0xFFFFFFFF;
	// li r4,3
	ctx.r4.s64 = 3;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// stfd f0,120(r1)
	PPC_STORE_U64(ctx.r1.u32 + 120, ctx.f0.u64);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x822e4d50
	ctx.lr = 0x82535544;
	sub_822E4D50(ctx, base);
	// clrldi r11,r29,32
	ctx.r11.u64 = ctx.r29.u64 & 0xFFFFFFFF;
	// li r4,5
	ctx.r4.s64 = 5;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// stfd f0,136(r1)
	PPC_STORE_U64(ctx.r1.u32 + 136, ctx.f0.u64);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x822e4d50
	ctx.lr = 0x82535564;
	sub_822E4D50(ctx, base);
	// addi r11,r1,160
	ctx.r11.s64 = ctx.r1.s64 + 160;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// stw r11,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r11.u32);
	// li r6,4
	ctx.r6.s64 = 4;
	// addi r4,r10,21096
	ctx.r4.s64 = ctx.r10.s64 + 21096;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// bl 0x826a7620
	ctx.lr = 0x82535584;
	sub_826A7620(ctx, base);
	// addi r31,r1,160
	ctx.r31.s64 = ctx.r1.s64 + 160;
	// li r30,3
	ctx.r30.s64 = 3;
loc_8253558C:
	// addi r31,r31,-16
	ctx.r31.s64 = ctx.r31.s64 + -16;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822e4d00
	ctx.lr = 0x82535598;
	sub_822E4D00(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge 0x8253558c
	if (!ctx.cr0.lt) goto loc_8253558C;
loc_825355A0:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825355A8"))) PPC_WEAK_FUNC(sub_825355A8);
PPC_FUNC_IMPL(__imp__sub_825355A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7674
	ctx.lr = 0x825355B0;
	__savegprlr_27(ctx, base);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,5
	ctx.r11.s64 = 5;
	// addi r10,r1,100
	ctx.r10.s64 = ctx.r1.s64 + 100;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r31,r7
	ctx.r31.u64 = ctx.r7.u64;
	// li r11,0
	ctx.r11.s64 = 0;
loc_825355D8:
	// stw r11,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r11.u32);
	// stwu r11,16(r10)
	ea = 16 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x825355d8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_825355D8;
	// li r4,3
	ctx.r4.s64 = 3;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x822e4d50
	ctx.lr = 0x825355F0;
	sub_822E4D50(ctx, base);
	// extsw r11,r30
	ctx.r11.s64 = ctx.r30.s32;
	// li r4,3
	ctx.r4.s64 = 3;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// stfd f0,120(r1)
	PPC_STORE_U64(ctx.r1.u32 + 120, ctx.f0.u64);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x822e4d50
	ctx.lr = 0x82535610;
	sub_822E4D50(ctx, base);
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// li r4,3
	ctx.r4.s64 = 3;
	// addi r11,r11,27984
	ctx.r11.s64 = ctx.r11.s64 + 27984;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// lfd f0,112(r11)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + 112);
	// stfd f0,152(r1)
	PPC_STORE_U64(ctx.r1.u32 + 152, ctx.f0.u64);
	// bl 0x822e4d50
	ctx.lr = 0x8253562C;
	sub_822E4D50(ctx, base);
	// extsw r11,r29
	ctx.r11.s64 = ctx.r29.s32;
	// li r4,3
	ctx.r4.s64 = 3;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// stfd f0,168(r1)
	PPC_STORE_U64(ctx.r1.u32 + 168, ctx.f0.u64);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x822e4d50
	ctx.lr = 0x8253564C;
	sub_822E4D50(ctx, base);
	// extsw r11,r28
	ctx.r11.s64 = ctx.r28.s32;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// stfd f0,184(r1)
	PPC_STORE_U64(ctx.r1.u32 + 184, ctx.f0.u64);
	// beq cr6,0x825356b0
	if (ctx.cr6.eq) goto loc_825356B0;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8253a1e0
	ctx.lr = 0x82535674;
	sub_8253A1E0(ctx, base);
	// li r6,32
	ctx.r6.s64 = 32;
	// addi r5,r1,192
	ctx.r5.s64 = ctx.r1.s64 + 192;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x826a4158
	ctx.lr = 0x82535688;
	sub_826A4158(ctx, base);
	// lwz r3,100(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82535698
	if (ctx.cr6.eq) goto loc_82535698;
	// bl 0x82241d18
	ctx.lr = 0x82535698;
	sub_82241D18(ctx, base);
loc_82535698:
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x822e4d50
	ctx.lr = 0x825356A4;
	sub_822E4D50(ctx, base);
	// addi r11,r1,192
	ctx.r11.s64 = ctx.r1.s64 + 192;
	// stw r11,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r11.u32);
	// b 0x825356bc
	goto loc_825356BC;
loc_825356B0:
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x822e4d50
	ctx.lr = 0x825356BC;
	sub_822E4D50(ctx, base);
loc_825356BC:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8253a1e0
	ctx.lr = 0x825356C8;
	sub_8253A1E0(ctx, base);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// li r6,5
	ctx.r6.s64 = 5;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r11,15248
	ctx.r4.s64 = ctx.r11.s64 + 15248;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// bl 0x826a7620
	ctx.lr = 0x825356E0;
	sub_826A7620(ctx, base);
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x825356f0
	if (ctx.cr6.eq) goto loc_825356F0;
	// bl 0x82241d18
	ctx.lr = 0x825356F0;
	sub_82241D18(ctx, base);
loc_825356F0:
	// addi r31,r1,192
	ctx.r31.s64 = ctx.r1.s64 + 192;
	// li r30,4
	ctx.r30.s64 = 4;
loc_825356F8:
	// addi r31,r31,-16
	ctx.r31.s64 = ctx.r31.s64 + -16;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822e4d00
	ctx.lr = 0x82535704;
	sub_822E4D00(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge 0x825356f8
	if (!ctx.cr0.lt) goto loc_825356F8;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x82fa76c4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82535714"))) PPC_WEAK_FUNC(sub_82535714);
PPC_FUNC_IMPL(__imp__sub_82535714) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82535718"))) PPC_WEAK_FUNC(sub_82535718);
PPC_FUNC_IMPL(__imp__sub_82535718) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7670
	ctx.lr = 0x82535720;
	__savegprlr_26(ctx, base);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,5
	ctx.r11.s64 = 5;
	// addi r10,r1,100
	ctx.r10.s64 = ctx.r1.s64 + 100;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// mr r31,r8
	ctx.r31.u64 = ctx.r8.u64;
	// li r11,0
	ctx.r11.s64 = 0;
loc_8253574C:
	// stw r11,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r11.u32);
	// stwu r11,16(r10)
	ea = 16 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x8253574c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8253574C;
	// li r4,3
	ctx.r4.s64 = 3;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x822e4d50
	ctx.lr = 0x82535764;
	sub_822E4D50(ctx, base);
	// extsw r11,r30
	ctx.r11.s64 = ctx.r30.s32;
	// li r4,3
	ctx.r4.s64 = 3;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// stfd f0,120(r1)
	PPC_STORE_U64(ctx.r1.u32 + 120, ctx.f0.u64);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x822e4d50
	ctx.lr = 0x82535784;
	sub_822E4D50(ctx, base);
	// extsw r11,r29
	ctx.r11.s64 = ctx.r29.s32;
	// li r4,3
	ctx.r4.s64 = 3;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// stfd f0,152(r1)
	PPC_STORE_U64(ctx.r1.u32 + 152, ctx.f0.u64);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x822e4d50
	ctx.lr = 0x825357A4;
	sub_822E4D50(ctx, base);
	// extsw r11,r28
	ctx.r11.s64 = ctx.r28.s32;
	// li r4,5
	ctx.r4.s64 = 5;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// stfd f0,168(r1)
	PPC_STORE_U64(ctx.r1.u32 + 168, ctx.f0.u64);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x822e4d50
	ctx.lr = 0x825357C4;
	sub_822E4D50(ctx, base);
	// stw r27,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r27.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82535818
	if (ctx.cr6.eq) goto loc_82535818;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8253a1e0
	ctx.lr = 0x825357DC;
	sub_8253A1E0(ctx, base);
	// li r6,32
	ctx.r6.s64 = 32;
	// addi r5,r1,192
	ctx.r5.s64 = ctx.r1.s64 + 192;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x826a4158
	ctx.lr = 0x825357F0;
	sub_826A4158(ctx, base);
	// lwz r3,100(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82535800
	if (ctx.cr6.eq) goto loc_82535800;
	// bl 0x82241d18
	ctx.lr = 0x82535800;
	sub_82241D18(ctx, base);
loc_82535800:
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x822e4d50
	ctx.lr = 0x8253580C;
	sub_822E4D50(ctx, base);
	// addi r11,r1,192
	ctx.r11.s64 = ctx.r1.s64 + 192;
	// stw r11,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r11.u32);
	// b 0x82535824
	goto loc_82535824;
loc_82535818:
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x822e4d50
	ctx.lr = 0x82535824;
	sub_822E4D50(ctx, base);
loc_82535824:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8253a1e0
	ctx.lr = 0x82535830;
	sub_8253A1E0(ctx, base);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// li r6,5
	ctx.r6.s64 = 5;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r11,15288
	ctx.r4.s64 = ctx.r11.s64 + 15288;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// bl 0x826a7620
	ctx.lr = 0x82535848;
	sub_826A7620(ctx, base);
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82535858
	if (ctx.cr6.eq) goto loc_82535858;
	// bl 0x82241d18
	ctx.lr = 0x82535858;
	sub_82241D18(ctx, base);
loc_82535858:
	// addi r31,r1,192
	ctx.r31.s64 = ctx.r1.s64 + 192;
	// li r30,4
	ctx.r30.s64 = 4;
loc_82535860:
	// addi r31,r31,-16
	ctx.r31.s64 = ctx.r31.s64 + -16;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822e4d00
	ctx.lr = 0x8253586C;
	sub_822E4D00(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge 0x82535860
	if (!ctx.cr0.lt) goto loc_82535860;
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x82fa76c0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8253587C"))) PPC_WEAK_FUNC(sub_8253587C);
PPC_FUNC_IMPL(__imp__sub_8253587C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82535880"))) PPC_WEAK_FUNC(sub_82535880);
PPC_FUNC_IMPL(__imp__sub_82535880) {
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
	// lwz r11,52(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x825358e8
	if (ctx.cr6.eq) goto loc_825358E8;
	// lwz r11,56(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x825358e8
	if (!ctx.cr6.eq) goto loc_825358E8;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8253a1e0
	ctx.lr = 0x825358B8;
	sub_8253A1E0(ctx, base);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r11,15360
	ctx.r4.s64 = ctx.r11.s64 + 15360;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x826a7620
	ctx.lr = 0x825358D0;
	sub_826A7620(ctx, base);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x825358e0
	if (ctx.cr6.eq) goto loc_825358E0;
	// bl 0x82241d18
	ctx.lr = 0x825358E0;
	sub_82241D18(ctx, base);
loc_825358E0:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r11.u32);
loc_825358E8:
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

__attribute__((alias("__imp__sub_825358FC"))) PPC_WEAK_FUNC(sub_825358FC);
PPC_FUNC_IMPL(__imp__sub_825358FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82535900"))) PPC_WEAK_FUNC(sub_82535900);
PPC_FUNC_IMPL(__imp__sub_82535900) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x82535908;
	__savegprlr_29(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,12(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x825359b8
	if (!ctx.cr6.eq) goto loc_825359B8;
	// li r10,2
	ctx.r10.s64 = 2;
	// addi r11,r1,84
	ctx.r11.s64 = ctx.r1.s64 + 84;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// li r10,0
	ctx.r10.s64 = 0;
loc_82535934:
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// stwu r10,16(r11)
	ea = 16 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x82535934
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82535934;
	// li r4,3
	ctx.r4.s64 = 3;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x822e4d50
	ctx.lr = 0x8253594C;
	sub_822E4D50(ctx, base);
	// addi r11,r30,1
	ctx.r11.s64 = ctx.r30.s64 + 1;
	// li r4,3
	ctx.r4.s64 = 3;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// stfd f0,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.f0.u64);
	// bl 0x822e4d50
	ctx.lr = 0x82535970;
	sub_822E4D50(ctx, base);
	// extsw r11,r29
	ctx.r11.s64 = ctx.r29.s32;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// stfd f0,120(r1)
	PPC_STORE_U64(ctx.r1.u32 + 120, ctx.f0.u64);
	// addi r4,r10,20936
	ctx.r4.s64 = ctx.r10.s64 + 20936;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r6,2
	ctx.r6.s64 = 2;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// bl 0x826a7620
	ctx.lr = 0x8253599C;
	sub_826A7620(ctx, base);
	// addi r31,r1,128
	ctx.r31.s64 = ctx.r1.s64 + 128;
	// li r30,1
	ctx.r30.s64 = 1;
loc_825359A4:
	// addi r31,r31,-16
	ctx.r31.s64 = ctx.r31.s64 + -16;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822e4d00
	ctx.lr = 0x825359B0;
	sub_822E4D00(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge 0x825359a4
	if (!ctx.cr0.lt) goto loc_825359A4;
loc_825359B8:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_825359C0"))) PPC_WEAK_FUNC(sub_825359C0);
PPC_FUNC_IMPL(__imp__sub_825359C0) {
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
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// addi r4,r11,-15476
	ctx.r4.s64 = ctx.r11.s64 + -15476;
	// bl 0x82557338
	ctx.lr = 0x825359E4;
	sub_82557338(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82535a10
	if (ctx.cr0.eq) goto loc_82535A10;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// addi r4,r11,-15452
	ctx.r4.s64 = ctx.r11.s64 + -15452;
	// bl 0x82557338
	ctx.lr = 0x825359FC;
	sub_82557338(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82535a10
	if (!ctx.cr0.eq) goto loc_82535A10;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,52(r6)
	PPC_STORE_U32(ctx.r6.u32 + 52, ctx.r11.u32);
	// stw r11,56(r6)
	PPC_STORE_U32(ctx.r6.u32 + 56, ctx.r11.u32);
loc_82535A10:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82535A20"))) PPC_WEAK_FUNC(sub_82535A20);
PPC_FUNC_IMPL(__imp__sub_82535A20) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x82535A28;
	__savegprlr_29(ctx, base);
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r29,r3,40
	ctx.r29.s64 = ctx.r3.s64 + 40;
	// stw r30,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r30.u32);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// stw r30,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r30.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// addi r4,r11,15392
	ctx.r4.s64 = ctx.r11.s64 + 15392;
	// stw r30,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r30.u32);
	// stw r30,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r30.u32);
	// stw r30,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r30.u32);
	// stw r30,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r30.u32);
	// stw r30,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r30.u32);
	// stw r30,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r30.u32);
	// stw r30,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r30.u32);
	// bl 0x82899948
	ctx.lr = 0x82535A74;
	sub_82899948(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// li r10,3
	ctx.r10.s64 = 3;
	// stb r30,76(r31)
	PPC_STORE_U8(ctx.r31.u32 + 76, ctx.r30.u8);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r30,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r30.u32);
	// stw r10,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r10.u32);
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// stw r9,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r9.u32);
	// lis r9,-32228
	ctx.r9.s64 = -2112094208;
	// lfs f0,-15356(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -15356);
	ctx.f0.f64 = double(temp.f32);
	// addi r4,r10,15416
	ctx.r4.s64 = ctx.r10.s64 + 15416;
	// stfs f0,92(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 92, temp.u32);
	// addi r3,r9,15432
	ctx.r3.s64 = ctx.r9.s64 + 15432;
	// stfs f0,88(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 88, temp.u32);
	// bl 0x82570100
	ctx.lr = 0x82535AB0;
	sub_82570100(ctx, base);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// addi r4,r11,15456
	ctx.r4.s64 = ctx.r11.s64 + 15456;
	// addi r3,r10,15468
	ctx.r3.s64 = ctx.r10.s64 + 15468;
	// bl 0x82570100
	ctx.lr = 0x82535AC4;
	sub_82570100(ctx, base);
	// lis r30,-31956
	ctx.r30.s64 = -2094268416;
	// lwz r3,-5288(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -5288);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82535adc
	if (!ctx.cr6.eq) goto loc_82535ADC;
	// bl 0x82570b38
	ctx.lr = 0x82535AD8;
	sub_82570B38(ctx, base);
	// stw r3,-5288(r30)
	PPC_STORE_U32(ctx.r30.u32 + -5288, ctx.r3.u32);
loc_82535ADC:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x822ca638
	ctx.lr = 0x82535AE4;
	sub_822CA638(ctx, base);
	// lis r29,-31956
	ctx.r29.s64 = -2094268416;
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-25360
	ctx.r4.s64 = ctx.r11.s64 + -25360;
	// lwz r11,-5332(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -5332);
	// lfs f31,88(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	ctx.f31.f64 = double(temp.f32);
	// lwz r30,0(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x82899948
	ctx.lr = 0x82535B04;
	sub_82899948(ctx, base);
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,-5332(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -5332);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82535B1C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82899858
	ctx.lr = 0x82535B24;
	sub_82899858(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82535B34"))) PPC_WEAK_FUNC(sub_82535B34);
PPC_FUNC_IMPL(__imp__sub_82535B34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82535B38"))) PPC_WEAK_FUNC(sub_82535B38);
PPC_FUNC_IMPL(__imp__sub_82535B38) {
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
	// lis r31,-31957
	ctx.r31.s64 = -2094333952;
	// lwz r3,23024(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 23024);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82535b78
	if (!ctx.cr6.eq) goto loc_82535B78;
	// li r3,100
	ctx.r3.s64 = 100;
	// bl 0x82691500
	ctx.lr = 0x82535B60;
	sub_82691500(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82535b70
	if (ctx.cr0.eq) goto loc_82535B70;
	// bl 0x82535a20
	ctx.lr = 0x82535B6C;
	sub_82535A20(ctx, base);
	// b 0x82535b74
	goto loc_82535B74;
loc_82535B70:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82535B74:
	// stw r3,23024(r31)
	PPC_STORE_U32(ctx.r31.u32 + 23024, ctx.r3.u32);
loc_82535B78:
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

__attribute__((alias("__imp__sub_82535B8C"))) PPC_WEAK_FUNC(sub_82535B8C);
PPC_FUNC_IMPL(__imp__sub_82535B8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82535B90"))) PPC_WEAK_FUNC(sub_82535B90);
PPC_FUNC_IMPL(__imp__sub_82535B90) {
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
	// bl 0x82535b38
	ctx.lr = 0x82535BA4;
	sub_82535B38(ctx, base);
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82535bf8
	if (!ctx.cr6.eq) goto loc_82535BF8;
	// bl 0x82535b38
	ctx.lr = 0x82535BB8;
	sub_82535B38(ctx, base);
	// lwz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82535bf8
	if (!ctx.cr6.eq) goto loc_82535BF8;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,15488
	ctx.r4.s64 = ctx.r11.s64 + 15488;
	// bl 0x82899948
	ctx.lr = 0x82535BD4;
	sub_82899948(ctx, base);
	// bl 0x82899798
	ctx.lr = 0x82535BD8;
	sub_82899798(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82899858
	ctx.lr = 0x82535BE4;
	sub_82899858(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82570620
	ctx.lr = 0x82535BF0;
	sub_82570620(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
loc_82535BF8:
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

__attribute__((alias("__imp__sub_82535C0C"))) PPC_WEAK_FUNC(sub_82535C0C);
PPC_FUNC_IMPL(__imp__sub_82535C0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82535C10"))) PPC_WEAK_FUNC(sub_82535C10);
PPC_FUNC_IMPL(__imp__sub_82535C10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x82535C18;
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
	// bl 0x82535b38
	ctx.lr = 0x82535C2C;
	sub_82535B38(ctx, base);
	// lwz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82535c44
	if (ctx.cr6.eq) goto loc_82535C44;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq cr6,0x82535c4c
	if (ctx.cr6.eq) goto loc_82535C4C;
	// li r31,0
	ctx.r31.s64 = 0;
loc_82535C44:
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne cr6,0x82535c60
	if (!ctx.cr6.eq) goto loc_82535C60;
loc_82535C4C:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne cr6,0x82535c60
	if (!ctx.cr6.eq) goto loc_82535C60;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x82535c64
	if (ctx.cr6.eq) goto loc_82535C64;
loc_82535C60:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82535C64:
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r31,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r31.u32);
	// stw r30,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r30.u32);
	// stw r29,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r29.u32);
	// bl 0x82536228
	ctx.lr = 0x82535C78;
	sub_82536228(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82535C80"))) PPC_WEAK_FUNC(sub_82535C80);
PPC_FUNC_IMPL(__imp__sub_82535C80) {
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
	// bl 0x82535b38
	ctx.lr = 0x82535C98;
	sub_82535B38(ctx, base);
	// lwz r11,80(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	// cmpw cr6,r11,r31
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r31.s32, ctx.xer);
	// beq cr6,0x82535d88
	if (ctx.cr6.eq) goto loc_82535D88;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x82535cbc
	if (!ctx.cr6.eq) goto loc_82535CBC;
	// cmpwi cr6,r31,3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 3, ctx.xer);
	// beq cr6,0x82535d88
	if (ctx.cr6.eq) goto loc_82535D88;
	// cmpwi cr6,r31,4
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 4, ctx.xer);
	// beq cr6,0x82535d88
	if (ctx.cr6.eq) goto loc_82535D88;
loc_82535CBC:
	// stw r31,80(r3)
	PPC_STORE_U32(ctx.r3.u32 + 80, ctx.r31.u32);
	// cmplwi cr6,r31,11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 11, ctx.xer);
	// bgt cr6,0x82535d88
	if (ctx.cr6.gt) goto loc_82535D88;
	// lis r12,-32231
	ctx.r12.s64 = -2112290816;
	// addi r12,r12,26144
	ctx.r12.s64 = ctx.r12.s64 + 26144;
	// lbzx r0,r12,r31
	ctx.r0.u64 = PPC_LOAD_U8(ctx.r12.u32 + ctx.r31.u32);
	// lis r12,-32173
	ctx.r12.s64 = -2108489728;
	// nop 
	// addi r12,r12,23792
	ctx.r12.s64 = ctx.r12.s64 + 23792;
	// nop 
	// add r12,r12,r0
	ctx.r12.u64 = ctx.r12.u64 + ctx.r0.u64;
	// mtctr r12
	ctx.ctr.u64 = ctx.r12.u64;
	// bctr 
	switch (ctx.r31.u64) {
	case 0:
		goto loc_82535CF0;
	case 1:
		goto loc_82535CFC;
	case 2:
		goto loc_82535D08;
	case 3:
		goto loc_82535D14;
	case 4:
		goto loc_82535D20;
	case 5:
		goto loc_82535D2C;
	case 6:
		goto loc_82535D38;
	case 7:
		goto loc_82535D44;
	case 8:
		goto loc_82535D50;
	case 9:
		goto loc_82535D5C;
	case 10:
		goto loc_82535D68;
	case 11:
		goto loc_82535D74;
	default:
		__builtin_unreachable();
	}
loc_82535CF0:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r4,r11,-7604
	ctx.r4.s64 = ctx.r11.s64 + -7604;
	// b 0x82535d7c
	goto loc_82535D7C;
loc_82535CFC:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r4,r11,-4028
	ctx.r4.s64 = ctx.r11.s64 + -4028;
	// b 0x82535d7c
	goto loc_82535D7C;
loc_82535D08:
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r4,r11,15536
	ctx.r4.s64 = ctx.r11.s64 + 15536;
	// b 0x82535d7c
	goto loc_82535D7C;
loc_82535D14:
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r4,r11,15552
	ctx.r4.s64 = ctx.r11.s64 + 15552;
	// b 0x82535d7c
	goto loc_82535D7C;
loc_82535D20:
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r4,r11,15568
	ctx.r4.s64 = ctx.r11.s64 + 15568;
	// b 0x82535d7c
	goto loc_82535D7C;
loc_82535D2C:
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r4,r11,15588
	ctx.r4.s64 = ctx.r11.s64 + 15588;
	// b 0x82535d7c
	goto loc_82535D7C;
loc_82535D38:
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r4,r11,15604
	ctx.r4.s64 = ctx.r11.s64 + 15604;
	// b 0x82535d7c
	goto loc_82535D7C;
loc_82535D44:
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r4,r11,15620
	ctx.r4.s64 = ctx.r11.s64 + 15620;
	// b 0x82535d7c
	goto loc_82535D7C;
loc_82535D50:
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r4,r11,15632
	ctx.r4.s64 = ctx.r11.s64 + 15632;
	// b 0x82535d7c
	goto loc_82535D7C;
loc_82535D5C:
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r4,r11,15648
	ctx.r4.s64 = ctx.r11.s64 + 15648;
	// b 0x82535d7c
	goto loc_82535D7C;
loc_82535D68:
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r4,r11,15668
	ctx.r4.s64 = ctx.r11.s64 + 15668;
	// b 0x82535d7c
	goto loc_82535D7C;
loc_82535D74:
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r4,r11,15688
	ctx.r4.s64 = ctx.r11.s64 + 15688;
loc_82535D7C:
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// addi r3,r10,15432
	ctx.r3.s64 = ctx.r10.s64 + 15432;
	// bl 0x82570100
	ctx.lr = 0x82535D88;
	sub_82570100(ctx, base);
loc_82535D88:
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

__attribute__((alias("__imp__sub_82535D9C"))) PPC_WEAK_FUNC(sub_82535D9C);
PPC_FUNC_IMPL(__imp__sub_82535D9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82535DA0"))) PPC_WEAK_FUNC(sub_82535DA0);
PPC_FUNC_IMPL(__imp__sub_82535DA0) {
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
	// bl 0x82535b38
	ctx.lr = 0x82535DB8;
	sub_82535B38(ctx, base);
	// lwz r11,84(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 84);
	// cmpw cr6,r11,r31
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r31.s32, ctx.xer);
	// beq cr6,0x82535df4
	if (ctx.cr6.eq) goto loc_82535DF4;
	// stw r31,84(r3)
	PPC_STORE_U32(ctx.r3.u32 + 84, ctx.r31.u32);
	// cmplwi cr6,r31,1
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 1, ctx.xer);
	// blt cr6,0x82535de0
	if (ctx.cr6.lt) goto loc_82535DE0;
	// bne cr6,0x82535df4
	if (!ctx.cr6.eq) goto loc_82535DF4;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r4,r11,15708
	ctx.r4.s64 = ctx.r11.s64 + 15708;
	// b 0x82535de8
	goto loc_82535DE8;
loc_82535DE0:
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r4,r11,15456
	ctx.r4.s64 = ctx.r11.s64 + 15456;
loc_82535DE8:
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// addi r3,r10,15468
	ctx.r3.s64 = ctx.r10.s64 + 15468;
	// bl 0x82570100
	ctx.lr = 0x82535DF4;
	sub_82570100(ctx, base);
loc_82535DF4:
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

__attribute__((alias("__imp__sub_82535E08"))) PPC_WEAK_FUNC(sub_82535E08);
PPC_FUNC_IMPL(__imp__sub_82535E08) {
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
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82536034
	if (!ctx.cr6.eq) goto loc_82536034;
	// bl 0x82535b38
	ctx.lr = 0x82535E30;
	sub_82535B38(ctx, base);
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82535e74
	if (ctx.cr6.eq) goto loc_82535E74;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,15512
	ctx.r4.s64 = ctx.r11.s64 + 15512;
	// bl 0x82899948
	ctx.lr = 0x82535E50;
	sub_82899948(ctx, base);
	// bl 0x82899798
	ctx.lr = 0x82535E54;
	sub_82899798(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82899858
	ctx.lr = 0x82535E60;
	sub_82899858(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82570620
	ctx.lr = 0x82535E6C;
	sub_82570620(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,32(r30)
	PPC_STORE_U32(ctx.r30.u32 + 32, ctx.r11.u32);
loc_82535E74:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82535edc
	if (ctx.cr6.eq) goto loc_82535EDC;
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82535edc
	if (!ctx.cr6.eq) goto loc_82535EDC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82536050
	ctx.lr = 0x82535E94;
	sub_82536050(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825360d8
	ctx.lr = 0x82535E9C;
	sub_825360D8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82536148
	ctx.lr = 0x82535EA4;
	sub_82536148(ctx, base);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,15720
	ctx.r4.s64 = ctx.r11.s64 + 15720;
	// bl 0x82899948
	ctx.lr = 0x82535EB4;
	sub_82899948(ctx, base);
	// bl 0x82899798
	ctx.lr = 0x82535EB8;
	sub_82899798(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82899858
	ctx.lr = 0x82535EC4;
	sub_82899858(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82570620
	ctx.lr = 0x82535ED0;
	sub_82570620(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// b 0x82536034
	goto loc_82536034;
loc_82535EDC:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82535f44
	if (ctx.cr6.eq) goto loc_82535F44;
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82535f44
	if (!ctx.cr6.eq) goto loc_82535F44;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82536050
	ctx.lr = 0x82535EFC;
	sub_82536050(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825360d8
	ctx.lr = 0x82535F04;
	sub_825360D8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825361b8
	ctx.lr = 0x82535F0C;
	sub_825361B8(ctx, base);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,15744
	ctx.r4.s64 = ctx.r11.s64 + 15744;
	// bl 0x82899948
	ctx.lr = 0x82535F1C;
	sub_82899948(ctx, base);
	// bl 0x82899798
	ctx.lr = 0x82535F20;
	sub_82899798(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82899858
	ctx.lr = 0x82535F2C;
	sub_82899858(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82570620
	ctx.lr = 0x82535F38;
	sub_82570620(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// b 0x82536034
	goto loc_82536034;
loc_82535F44:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82535fb8
	if (ctx.cr6.eq) goto loc_82535FB8;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82535fb8
	if (!ctx.cr6.eq) goto loc_82535FB8;
	// lbz r11,76(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 76);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82535fb8
	if (!ctx.cr0.eq) goto loc_82535FB8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82536050
	ctx.lr = 0x82535F70;
	sub_82536050(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82536148
	ctx.lr = 0x82535F78;
	sub_82536148(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825361b8
	ctx.lr = 0x82535F80;
	sub_825361B8(ctx, base);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,15764
	ctx.r4.s64 = ctx.r11.s64 + 15764;
	// bl 0x82899948
	ctx.lr = 0x82535F90;
	sub_82899948(ctx, base);
	// bl 0x82899798
	ctx.lr = 0x82535F94;
	sub_82899798(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82899858
	ctx.lr = 0x82535FA0;
	sub_82899858(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82570620
	ctx.lr = 0x82535FAC;
	sub_82570620(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// b 0x82536034
	goto loc_82536034;
loc_82535FB8:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82536034
	if (ctx.cr6.eq) goto loc_82536034;
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82536034
	if (!ctx.cr6.eq) goto loc_82536034;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825360d8
	ctx.lr = 0x82535FD8;
	sub_825360D8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82536148
	ctx.lr = 0x82535FE0;
	sub_82536148(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825361b8
	ctx.lr = 0x82535FE8;
	sub_825361B8(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,-19260
	ctx.r4.s64 = ctx.r11.s64 + -19260;
	// bl 0x82899948
	ctx.lr = 0x82535FF8;
	sub_82899948(ctx, base);
	// bl 0x82899798
	ctx.lr = 0x82535FFC;
	sub_82899798(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82899858
	ctx.lr = 0x82536008;
	sub_82899858(ctx, base);
	// addi r3,r31,40
	ctx.r3.s64 = ctx.r31.s64 + 40;
	// bl 0x82899798
	ctx.lr = 0x82536010;
	sub_82899798(ctx, base);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// lis r11,-31955
	ctx.r11.s64 = -2094202880;
	// lis r10,-31955
	ctx.r10.s64 = -2094202880;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r6,r11,26796
	ctx.r6.s64 = ctx.r11.s64 + 26796;
	// addi r5,r10,26780
	ctx.r5.s64 = ctx.r10.s64 + 26780;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8256f138
	ctx.lr = 0x82536030;
	sub_8256F138(ctx, base);
	// stw r3,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r3.u32);
loc_82536034:
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

__attribute__((alias("__imp__sub_8253604C"))) PPC_WEAK_FUNC(sub_8253604C);
PPC_FUNC_IMPL(__imp__sub_8253604C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82536050"))) PPC_WEAK_FUNC(sub_82536050);
PPC_FUNC_IMPL(__imp__sub_82536050) {
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
	// lwz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r31,r3,36
	ctx.r31.s64 = ctx.r3.s64 + 36;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x825360bc
	if (ctx.cr6.eq) goto loc_825360BC;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,15788
	ctx.r4.s64 = ctx.r11.s64 + 15788;
	// bl 0x82899948
	ctx.lr = 0x82536088;
	sub_82899948(ctx, base);
	// bl 0x82899798
	ctx.lr = 0x8253608C;
	sub_82899798(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82899858
	ctx.lr = 0x82536098;
	sub_82899858(ctx, base);
	// addi r3,r30,40
	ctx.r3.s64 = ctx.r30.s64 + 40;
	// bl 0x82899798
	ctx.lr = 0x825360A0;
	sub_82899798(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82570620
	ctx.lr = 0x825360AC;
	sub_82570620(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82570318
	ctx.lr = 0x825360B4;
	sub_82570318(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_825360BC:
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

__attribute__((alias("__imp__sub_825360D4"))) PPC_WEAK_FUNC(sub_825360D4);
PPC_FUNC_IMPL(__imp__sub_825360D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_825360D8"))) PPC_WEAK_FUNC(sub_825360D8);
PPC_FUNC_IMPL(__imp__sub_825360D8) {
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
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82536134
	if (ctx.cr6.eq) goto loc_82536134;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,15808
	ctx.r4.s64 = ctx.r11.s64 + 15808;
	// bl 0x82899948
	ctx.lr = 0x82536108;
	sub_82899948(ctx, base);
	// bl 0x82899798
	ctx.lr = 0x8253610C;
	sub_82899798(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82899858
	ctx.lr = 0x82536118;
	sub_82899858(ctx, base);
	// addi r3,r31,40
	ctx.r3.s64 = ctx.r31.s64 + 40;
	// bl 0x82899798
	ctx.lr = 0x82536120;
	sub_82899798(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82570620
	ctx.lr = 0x8253612C;
	sub_82570620(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
loc_82536134:
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

__attribute__((alias("__imp__sub_82536148"))) PPC_WEAK_FUNC(sub_82536148);
PPC_FUNC_IMPL(__imp__sub_82536148) {
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
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x825361a4
	if (ctx.cr6.eq) goto loc_825361A4;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,15832
	ctx.r4.s64 = ctx.r11.s64 + 15832;
	// bl 0x82899948
	ctx.lr = 0x82536178;
	sub_82899948(ctx, base);
	// bl 0x82899798
	ctx.lr = 0x8253617C;
	sub_82899798(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82899858
	ctx.lr = 0x82536188;
	sub_82899858(ctx, base);
	// addi r3,r31,40
	ctx.r3.s64 = ctx.r31.s64 + 40;
	// bl 0x82899798
	ctx.lr = 0x82536190;
	sub_82899798(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82570620
	ctx.lr = 0x8253619C;
	sub_82570620(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
loc_825361A4:
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

__attribute__((alias("__imp__sub_825361B8"))) PPC_WEAK_FUNC(sub_825361B8);
PPC_FUNC_IMPL(__imp__sub_825361B8) {
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
	// lwz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82536214
	if (ctx.cr6.eq) goto loc_82536214;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// addi r4,r11,15852
	ctx.r4.s64 = ctx.r11.s64 + 15852;
	// bl 0x82899948
	ctx.lr = 0x825361E8;
	sub_82899948(ctx, base);
	// bl 0x82899798
	ctx.lr = 0x825361EC;
	sub_82899798(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82899858
	ctx.lr = 0x825361F8;
	sub_82899858(ctx, base);
	// addi r3,r31,40
	ctx.r3.s64 = ctx.r31.s64 + 40;
	// bl 0x82899798
	ctx.lr = 0x82536200;
	sub_82899798(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82570620
	ctx.lr = 0x8253620C;
	sub_82570620(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
loc_82536214:
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

__attribute__((alias("__imp__sub_82536228"))) PPC_WEAK_FUNC(sub_82536228);
PPC_FUNC_IMPL(__imp__sub_82536228) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x82536230;
	__savegprlr_29(ctx, base);
	// stfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8253626c
	if (!ctx.cr6.eq) goto loc_8253626C;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8253626c
	if (!ctx.cr6.eq) goto loc_8253626C;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8253626c
	if (!ctx.cr6.eq) goto loc_8253626C;
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82536284
	if (ctx.cr6.eq) goto loc_82536284;
loc_8253626C:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82536284
	if (!ctx.cr6.eq) goto loc_82536284;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82535e08
	ctx.lr = 0x82536280;
	sub_82535E08(ctx, base);
	// b 0x8253629c
	goto loc_8253629C;
loc_82536284:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82536050
	ctx.lr = 0x8253628C;
	sub_82536050(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x825360d8
	ctx.lr = 0x82536294;
	sub_825360D8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82536148
	ctx.lr = 0x8253629C;
	sub_82536148(ctx, base);
loc_8253629C:
	// bl 0x82535b38
	ctx.lr = 0x825362A0;
	sub_82535B38(ctx, base);
	// lfs f31,88(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 88);
	ctx.f31.f64 = double(temp.f32);
	// lfs f0,92(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 92);
	ctx.f0.f64 = double(temp.f32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// beq cr6,0x8253632c
	if (ctx.cr6.eq) goto loc_8253632C;
	// lis r29,-31956
	ctx.r29.s64 = -2094268416;
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-25360
	ctx.r4.s64 = ctx.r11.s64 + -25360;
	// lwz r11,-5332(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -5332);
	// lwz r30,0(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x82899948
	ctx.lr = 0x825362D0;
	sub_82899948(ctx, base);
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwz r3,-5332(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -5332);
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x825362E8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82899858
	ctx.lr = 0x825362F0;
	sub_82899858(ctx, base);
	// lfs f0,88(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,92(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f1,f0,f13
	ctx.f1.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// bl 0x8283c4d0
	ctx.lr = 0x82536300;
	sub_8283C4D0(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// lfs f0,-27104(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -27104);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// lfs f0,92(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	ctx.f0.f64 = double(temp.f32);
	// blt cr6,0x82536328
	if (ctx.cr6.lt) goto loc_82536328;
	// lfs f13,88(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	ctx.f13.f64 = double(temp.f32);
	// lis r11,-31967
	ctx.r11.s64 = -2094989312;
	// fsubs f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 - ctx.f13.f64));
	// lfs f0,-12508(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -12508);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f0,f12,f0,f13
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f0.f64 + ctx.f13.f64));
loc_82536328:
	// stfs f0,88(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 88, temp.u32);
loc_8253632C:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// lfd f31,-40(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82536338"))) PPC_WEAK_FUNC(sub_82536338);
PPC_FUNC_IMPL(__imp__sub_82536338) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x82536340;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82539b68
	ctx.lr = 0x82536354;
	sub_82539B68(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r10,r10,16540
	ctx.r10.s64 = ctx.r10.s64 + 16540;
	// stw r30,6196(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6196, ctx.r30.u32);
	// li r3,4656
	ctx.r3.s64 = 4656;
	// lfs f0,-2340(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -2340);
	ctx.f0.f64 = double(temp.f32);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// stfs f0,6188(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 6188, temp.u32);
	// stw r30,6200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6200, ctx.r30.u32);
	// stfs f0,6192(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 6192, temp.u32);
	// stw r30,6204(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6204, ctx.r30.u32);
	// stw r30,6208(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6208, ctx.r30.u32);
	// bl 0x82691500
	ctx.lr = 0x8253638C;
	sub_82691500(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x825363a4
	if (ctx.cr0.eq) goto loc_825363A4;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82538d88
	ctx.lr = 0x825363A0;
	sub_82538D88(ctx, base);
	// b 0x825363a8
	goto loc_825363A8;
loc_825363A4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_825363A8:
	// stw r3,6212(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6212, ctx.r3.u32);
	// li r3,4656
	ctx.r3.s64 = 4656;
	// bl 0x82691500
	ctx.lr = 0x825363B4;
	sub_82691500(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x825363cc
	if (ctx.cr0.eq) goto loc_825363CC;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,2
	ctx.r4.s64 = 2;
	// bl 0x82538d88
	ctx.lr = 0x825363C8;
	sub_82538D88(ctx, base);
	// b 0x825363d0
	goto loc_825363D0;
loc_825363CC:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_825363D0:
	// stw r3,6216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6216, ctx.r3.u32);
	// li r3,4656
	ctx.r3.s64 = 4656;
	// bl 0x82691500
	ctx.lr = 0x825363DC;
	sub_82691500(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x825363ec
	if (ctx.cr0.eq) goto loc_825363EC;
	// bl 0x82538c08
	ctx.lr = 0x825363E8;
	sub_82538C08(ctx, base);
	// b 0x825363f0
	goto loc_825363F0;
loc_825363EC:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_825363F0:
	// stw r3,6220(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6220, ctx.r3.u32);
	// li r3,16
	ctx.r3.s64 = 16;
	// stw r30,6224(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6224, ctx.r30.u32);
	// bl 0x82691500
	ctx.lr = 0x82536400;
	sub_82691500(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82536418
	if (ctx.cr0.eq) goto loc_82536418;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x8253c460
	ctx.lr = 0x82536414;
	sub_8253C460(ctx, base);
	// b 0x8253641c
	goto loc_8253641C;
loc_82536418:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_8253641C:
	// stw r3,6228(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6228, ctx.r3.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8253a1e0
	ctx.lr = 0x8253642C;
	sub_8253A1E0(ctx, base);
	// li r4,3
	ctx.r4.s64 = 3;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x826a4200
	ctx.lr = 0x82536438;
	sub_826A4200(ctx, base);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82536448
	if (ctx.cr6.eq) goto loc_82536448;
	// bl 0x82241d18
	ctx.lr = 0x82536448;
	sub_82241D18(ctx, base);
loc_82536448:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82536454"))) PPC_WEAK_FUNC(sub_82536454);
PPC_FUNC_IMPL(__imp__sub_82536454) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82536458"))) PPC_WEAK_FUNC(sub_82536458);
PPC_FUNC_IMPL(__imp__sub_82536458) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7674
	ctx.lr = 0x82536460;
	__savegprlr_27(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,16540
	ctx.r11.s64 = ctx.r11.s64 + 16540;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r29,r11,16152
	ctx.r29.s64 = ctx.r11.s64 + 16152;
loc_82536484:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r4,32
	ctx.r4.s64 = 32;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82557418
	ctx.lr = 0x82536498;
	sub_82557418(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x8253a1e0
	ctx.lr = 0x825364A4;
	sub_8253A1E0(ctx, base);
	// lwz r27,0(r3)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// bl 0x826a4210
	ctx.lr = 0x825364AC;
	sub_826A4210(ctx, base);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x826a72e8
	ctx.lr = 0x825364BC;
	sub_826A72E8(ctx, base);
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x825364cc
	if (ctx.cr6.eq) goto loc_825364CC;
	// bl 0x82241d18
	ctx.lr = 0x825364CC;
	sub_82241D18(ctx, base);
loc_825364CC:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpwi cr6,r30,8
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 8, ctx.xer);
	// blt cr6,0x82536484
	if (ctx.cr6.lt) goto loc_82536484;
	// lwz r30,6228(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6228);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x825364fc
	if (ctx.cr6.eq) goto loc_825364FC;
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x825364f4
	if (ctx.cr6.eq) goto loc_825364F4;
	// bl 0x82241d18
	ctx.lr = 0x825364F4;
	sub_82241D18(ctx, base);
loc_825364F4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82691540
	ctx.lr = 0x825364FC;
	sub_82691540(ctx, base);
loc_825364FC:
	// lwz r3,6220(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6220);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82536510
	if (ctx.cr6.eq) goto loc_82536510;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x822cad90
	ctx.lr = 0x82536510;
	sub_822CAD90(ctx, base);
loc_82536510:
	// lwz r3,6216(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6216);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82536524
	if (ctx.cr6.eq) goto loc_82536524;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x822cad90
	ctx.lr = 0x82536524;
	sub_822CAD90(ctx, base);
loc_82536524:
	// lwz r3,6212(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6212);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82536538
	if (ctx.cr6.eq) goto loc_82536538;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x822cad90
	ctx.lr = 0x82536538;
	sub_822CAD90(ctx, base);
loc_82536538:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82539db8
	ctx.lr = 0x82536540;
	sub_82539DB8(ctx, base);
	// clrlwi. r11,r28,31
	ctx.r11.u64 = ctx.r28.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82536550
	if (ctx.cr0.eq) goto loc_82536550;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82691540
	ctx.lr = 0x82536550;
	sub_82691540(ctx, base);
loc_82536550:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82fa76c4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8253655C"))) PPC_WEAK_FUNC(sub_8253655C);
PPC_FUNC_IMPL(__imp__sub_8253655C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82536560"))) PPC_WEAK_FUNC(sub_82536560);
PPC_FUNC_IMPL(__imp__sub_82536560) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa766c
	ctx.lr = 0x82536568;
	__savegprlr_25(ctx, base);
	// stwu r1,-2352(r1)
	ea = -2352 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,5
	ctx.r11.s64 = 5;
	// addi r10,r1,148
	ctx.r10.s64 = ctx.r1.s64 + 148;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// mr r31,r8
	ctx.r31.u64 = ctx.r8.u64;
	// mr r30,r9
	ctx.r30.u64 = ctx.r9.u64;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82536598:
	// stw r11,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r11.u32);
	// stwu r11,16(r10)
	ea = 16 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x82536598
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82536598;
	// li r4,3
	ctx.r4.s64 = 3;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// bl 0x822e4d50
	ctx.lr = 0x825365B0;
	sub_822E4D50(ctx, base);
	// extsw r11,r29
	ctx.r11.s64 = ctx.r29.s32;
	// li r4,3
	ctx.r4.s64 = 3;
	// std r11,144(r1)
	PPC_STORE_U64(ctx.r1.u32 + 144, ctx.r11.u64);
	// lfd f0,144(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// stfd f0,168(r1)
	PPC_STORE_U64(ctx.r1.u32 + 168, ctx.f0.u64);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x822e4d50
	ctx.lr = 0x825365D0;
	sub_822E4D50(ctx, base);
	// extsw r11,r28
	ctx.r11.s64 = ctx.r28.s32;
	// li r4,3
	ctx.r4.s64 = 3;
	// std r11,144(r1)
	PPC_STORE_U64(ctx.r1.u32 + 144, ctx.r11.u64);
	// lfd f0,144(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// stfd f0,184(r1)
	PPC_STORE_U64(ctx.r1.u32 + 184, ctx.f0.u64);
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// bl 0x822e4d50
	ctx.lr = 0x825365F0;
	sub_822E4D50(ctx, base);
	// extsw r11,r27
	ctx.r11.s64 = ctx.r27.s32;
	// li r4,2
	ctx.r4.s64 = 2;
	// std r11,144(r1)
	PPC_STORE_U64(ctx.r1.u32 + 144, ctx.r11.u64);
	// lfd f0,144(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// stfd f0,200(r1)
	PPC_STORE_U64(ctx.r1.u32 + 200, ctx.f0.u64);
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x822e4d50
	ctx.lr = 0x82536610;
	sub_822E4D50(ctx, base);
	// addic r11,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r11.s64 = ctx.r31.s64 + -1;
	// cmplwi cr6,r30,1
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 1, ctx.xer);
	// subfe r11,r11,r31
	temp.u8 = (~ctx.r11.u32 + ctx.r31.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r31.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r31.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// stb r11,232(r1)
	PPC_STORE_U8(ctx.r1.u32 + 232, ctx.r11.u8);
	// blt cr6,0x82536660
	if (ctx.cr6.lt) goto loc_82536660;
	// beq cr6,0x82536648
	if (ctx.cr6.eq) goto loc_82536648;
	// cmplwi cr6,r30,3
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 3, ctx.xer);
	// bge cr6,0x825366ac
	if (!ctx.cr6.lt) goto loc_825366AC;
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x822e4d50
	ctx.lr = 0x8253663C;
	sub_822E4D50(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r11,r11,26548
	ctx.r11.s64 = ctx.r11.s64 + 26548;
	// b 0x825366a8
	goto loc_825366A8;
loc_82536648:
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x822e4d50
	ctx.lr = 0x82536654;
	sub_822E4D50(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r11,r11,26560
	ctx.r11.s64 = ctx.r11.s64 + 26560;
	// b 0x825366a8
	goto loc_825366A8;
loc_82536660:
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// bne cr6,0x82536680
	if (!ctx.cr6.eq) goto loc_82536680;
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x822e4d50
	ctx.lr = 0x82536674;
	sub_822E4D50(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r11,r11,26552
	ctx.r11.s64 = ctx.r11.s64 + 26552;
	// b 0x825366a8
	goto loc_825366A8;
loc_82536680:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// addi r5,r11,-10716
	ctx.r5.s64 = ctx.r11.s64 + -10716;
	// li r4,1024
	ctx.r4.s64 = 1024;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82563c28
	ctx.lr = 0x82536698;
	sub_82563C28(ctx, base);
	// li r4,5
	ctx.r4.s64 = 5;
	// addi r3,r1,208
	ctx.r3.s64 = ctx.r1.s64 + 208;
	// bl 0x822e4d50
	ctx.lr = 0x825366A4;
	sub_822E4D50(ctx, base);
	// addi r11,r1,240
	ctx.r11.s64 = ctx.r1.s64 + 240;
loc_825366A8:
	// stw r11,216(r1)
	PPC_STORE_U32(ctx.r1.u32 + 216, ctx.r11.u32);
loc_825366AC:
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// addi r3,r1,152
	ctx.r3.s64 = ctx.r1.s64 + 152;
	// bl 0x8253a1e0
	ctx.lr = 0x825366B8;
	sub_8253A1E0(ctx, base);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// li r6,5
	ctx.r6.s64 = 5;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r11,16172
	ctx.r4.s64 = ctx.r11.s64 + 16172;
	// addi r5,r1,160
	ctx.r5.s64 = ctx.r1.s64 + 160;
	// bl 0x826a7620
	ctx.lr = 0x825366D0;
	sub_826A7620(ctx, base);
	// lwz r3,156(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x825366e0
	if (ctx.cr6.eq) goto loc_825366E0;
	// bl 0x82241d18
	ctx.lr = 0x825366E0;
	sub_82241D18(ctx, base);
loc_825366E0:
	// addi r31,r1,240
	ctx.r31.s64 = ctx.r1.s64 + 240;
	// li r30,4
	ctx.r30.s64 = 4;
loc_825366E8:
	// addi r31,r31,-16
	ctx.r31.s64 = ctx.r31.s64 + -16;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822e4d00
	ctx.lr = 0x825366F4;
	sub_822E4D00(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge 0x825366e8
	if (!ctx.cr0.lt) goto loc_825366E8;
	// addi r1,r1,2352
	ctx.r1.s64 = ctx.r1.s64 + 2352;
	// b 0x82fa76bc
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82536704"))) PPC_WEAK_FUNC(sub_82536704);
PPC_FUNC_IMPL(__imp__sub_82536704) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82536708"))) PPC_WEAK_FUNC(sub_82536708);
PPC_FUNC_IMPL(__imp__sub_82536708) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x82536710;
	__savegprlr_28(ctx, base);
	// stfd f30,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f30.u64);
	// stfd f31,-48(r1)
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// ld r12,-4096(r1)
	ctx.r12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -4096);
	// stwu r1,-6480(r1)
	ea = -6480 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// fmr f30,f2
	ctx.f30.f64 = ctx.f2.f64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// cmplwi cr6,r7,1
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 1, ctx.xer);
	// blt cr6,0x825367f0
	if (ctx.cr6.lt) goto loc_825367F0;
	// beq cr6,0x825367c0
	if (ctx.cr6.eq) goto loc_825367C0;
	// cmplwi cr6,r7,3
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 3, ctx.xer);
	// bge cr6,0x82536884
	if (!ctx.cr6.lt) goto loc_82536884;
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// lwz r3,28(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// li r5,1024
	ctx.r5.s64 = 1024;
	// addi r4,r1,272
	ctx.r4.s64 = ctx.r1.s64 + 272;
	// lwz r6,6296(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 6296);
	// bl 0x8234aa60
	ctx.lr = 0x82536764;
	sub_8234AA60(ctx, base);
	// cmpwi cr6,r29,2
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 2, ctx.xer);
	// blt cr6,0x825367dc
	if (ctx.cr6.lt) goto loc_825367DC;
	// cmpwi cr6,r29,12
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 12, ctx.xer);
	// bgt cr6,0x825367dc
	if (ctx.cr6.gt) goto loc_825367DC;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// addi r6,r11,16072
	ctx.r6.s64 = ctx.r11.s64 + 16072;
	// addi r5,r10,10412
	ctx.r5.s64 = ctx.r10.s64 + 10412;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// li r4,128
	ctx.r4.s64 = 128;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82557418
	ctx.lr = 0x82536794;
	sub_82557418(ctx, base);
	// addi r6,r1,144
	ctx.r6.s64 = ctx.r1.s64 + 144;
	// li r5,1024
	ctx.r5.s64 = 1024;
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// addi r4,r1,4368
	ctx.r4.s64 = ctx.r1.s64 + 4368;
	// bl 0x8234aa60
	ctx.lr = 0x825367A8;
	sub_8234AA60(ctx, base);
	// addi r6,r1,4368
	ctx.r6.s64 = ctx.r1.s64 + 4368;
	// addi r5,r1,272
	ctx.r5.s64 = ctx.r1.s64 + 272;
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x8253cb60
	ctx.lr = 0x825367BC;
	sub_8253CB60(ctx, base);
	// b 0x82536884
	goto loc_82536884;
loc_825367C0:
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// li r5,1024
	ctx.r5.s64 = 1024;
	// addi r11,r11,6296
	ctx.r11.s64 = ctx.r11.s64 + 6296;
	// addi r4,r1,272
	ctx.r4.s64 = ctx.r1.s64 + 272;
	// lwz r6,4(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x8234aa60
	ctx.lr = 0x825367DC;
	sub_8234AA60(ctx, base);
loc_825367DC:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r5,r1,272
	ctx.r5.s64 = ctx.r1.s64 + 272;
	// bl 0x8253ca90
	ctx.lr = 0x825367EC;
	sub_8253CA90(ctx, base);
	// b 0x82536884
	goto loc_82536884;
loc_825367F0:
	// cmplwi cr6,r30,1
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 1, ctx.xer);
	// blt cr6,0x82536830
	if (ctx.cr6.lt) goto loc_82536830;
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// li r5,1024
	ctx.r5.s64 = 1024;
	// addi r4,r1,272
	ctx.r4.s64 = ctx.r1.s64 + 272;
	// addi r11,r11,6296
	ctx.r11.s64 = ctx.r11.s64 + 6296;
	// beq cr6,0x82536820
	if (ctx.cr6.eq) goto loc_82536820;
	// lwz r6,12(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// bl 0x8234aa60
	ctx.lr = 0x82536818;
	sub_8234AA60(ctx, base);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// b 0x82536858
	goto loc_82536858;
loc_82536820:
	// lwz r6,8(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// bl 0x8234aa60
	ctx.lr = 0x82536828;
	sub_8234AA60(ctx, base);
	// addi r5,r1,272
	ctx.r5.s64 = ctx.r1.s64 + 272;
	// b 0x8253686c
	goto loc_8253686C;
loc_82536830:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82536884
	if (ctx.cr6.eq) goto loc_82536884;
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// li r5,1024
	ctx.r5.s64 = 1024;
	// addi r11,r11,6296
	ctx.r11.s64 = ctx.r11.s64 + 6296;
	// addi r4,r1,272
	ctx.r4.s64 = ctx.r1.s64 + 272;
	// lwz r6,12(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// bl 0x8234aa60
	ctx.lr = 0x82536854;
	sub_8234AA60(ctx, base);
	// li r6,0
	ctx.r6.s64 = 0;
loc_82536858:
	// addi r5,r1,272
	ctx.r5.s64 = ctx.r1.s64 + 272;
	// li r4,1024
	ctx.r4.s64 = 1024;
	// addi r3,r1,2320
	ctx.r3.s64 = ctx.r1.s64 + 2320;
	// bl 0x82563c28
	ctx.lr = 0x82536868;
	sub_82563C28(ctx, base);
	// addi r5,r1,2320
	ctx.r5.s64 = ctx.r1.s64 + 2320;
loc_8253686C:
	// li r7,0
	ctx.r7.s64 = 0;
	// fmr f2,f30
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f30.f64;
	// li r6,0
	ctx.r6.s64 = 0;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82536d18
	ctx.lr = 0x82536884;
	sub_82536D18(ctx, base);
loc_82536884:
	// addi r1,r1,6480
	ctx.r1.s64 = ctx.r1.s64 + 6480;
	// lfd f30,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// lfd f31,-48(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82536894"))) PPC_WEAK_FUNC(sub_82536894);
PPC_FUNC_IMPL(__imp__sub_82536894) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82536898"))) PPC_WEAK_FUNC(sub_82536898);
PPC_FUNC_IMPL(__imp__sub_82536898) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7668
	ctx.lr = 0x825368A0;
	__savegprlr_24(ctx, base);
	// ld r12,-4096(r1)
	ctx.r12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -4096);
	// ld r12,-8192(r1)
	ctx.r12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8192);
	// stwu r1,-10640(r1)
	ea = -10640 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r26,0
	ctx.r26.s64 = 0;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// stw r26,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r26.u32);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// stw r26,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r26.u32);
	// li r4,3
	ctx.r4.s64 = 3;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x822e4d50
	ctx.lr = 0x825368D0;
	sub_822E4D50(ctx, base);
	// li r11,10
	ctx.r11.s64 = 10;
	// extsw r9,r31
	ctx.r9.s64 = ctx.r31.s32;
	// addi r10,r1,148
	ctx.r10.s64 = ctx.r1.s64 + 148;
	// std r9,144(r1)
	PPC_STORE_U64(ctx.r1.u32 + 144, ctx.r9.u64);
	// lfd f0,144(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// stfd f0,120(r1)
	PPC_STORE_U64(ctx.r1.u32 + 120, ctx.f0.u64);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_825368F0:
	// stw r26,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r26.u32);
	// stwu r26,16(r10)
	ea = 16 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r26.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x825368f0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_825368F0;
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// addi r10,r1,320
	ctx.r10.s64 = ctx.r1.s64 + 320;
	// addi r11,r11,32570
	ctx.r11.s64 = ctx.r11.s64 + 32570;
	// addi r31,r1,320
	ctx.r31.s64 = ctx.r1.s64 + 320;
	// subf r27,r10,r11
	ctx.r27.s64 = ctx.r11.s64 - ctx.r10.s64;
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r29,r1,160
	ctx.r29.s64 = ctx.r1.s64 + 160;
	// li r28,10
	ctx.r28.s64 = 10;
	// addi r25,r11,26556
	ctx.r25.s64 = ctx.r11.s64 + 26556;
loc_82536920:
	// lhz r6,0(r30)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// cmplwi cr6,r6,65535
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 65535, ctx.xer);
	// bne cr6,0x82536960
	if (!ctx.cr6.eq) goto loc_82536960;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// addi r10,r31,1024
	ctx.r10.s64 = ctx.r31.s64 + 1024;
loc_82536934:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82536954
	if (!ctx.cr6.lt) goto loc_82536954;
	// lbzx r9,r27,r11
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r27.u32 + ctx.r11.u32);
	// extsb. r8,r9
	ctx.r8.s64 = ctx.r9.s8;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// stb r9,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r9.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bne 0x82536934
	if (!ctx.cr0.eq) goto loc_82536934;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
loc_82536954:
	// bne cr6,0x82536970
	if (!ctx.cr6.eq) goto loc_82536970;
	// stb r26,-1(r11)
	PPC_STORE_U8(ctx.r11.u32 + -1, ctx.r26.u8);
	// b 0x82536970
	goto loc_82536970;
loc_82536960:
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// li r4,1024
	ctx.r4.s64 = 1024;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82557418
	ctx.lr = 0x82536970;
	sub_82557418(ctx, base);
loc_82536970:
	// li r4,4
	ctx.r4.s64 = 4;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x822e4d50
	ctx.lr = 0x8253697C;
	sub_822E4D50(ctx, base);
	// stw r31,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r31.u32);
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// addi r30,r30,2
	ctx.r30.s64 = ctx.r30.s64 + 2;
	// addi r29,r29,16
	ctx.r29.s64 = ctx.r29.s64 + 16;
	// addi r27,r27,-1024
	ctx.r27.s64 = ctx.r27.s64 + -1024;
	// addi r31,r31,1024
	ctx.r31.s64 = ctx.r31.s64 + 1024;
	// bne 0x82536920
	if (!ctx.cr0.eq) goto loc_82536920;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// addi r3,r1,136
	ctx.r3.s64 = ctx.r1.s64 + 136;
	// bl 0x8253a1e0
	ctx.lr = 0x825369A4;
	sub_8253A1E0(ctx, base);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// li r8,1
	ctx.r8.s64 = 1;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r11,16208
	ctx.r4.s64 = ctx.r11.s64 + 16208;
	// li r7,10
	ctx.r7.s64 = 10;
	// addi r6,r1,160
	ctx.r6.s64 = ctx.r1.s64 + 160;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x826a7930
	ctx.lr = 0x825369C4;
	sub_826A7930(ctx, base);
	// lwz r3,140(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x825369d4
	if (ctx.cr6.eq) goto loc_825369D4;
	// bl 0x82241d18
	ctx.lr = 0x825369D4;
	sub_82241D18(ctx, base);
loc_825369D4:
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x8253a1e0
	ctx.lr = 0x825369E0;
	sub_8253A1E0(ctx, base);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r11,16228
	ctx.r4.s64 = ctx.r11.s64 + 16228;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// bl 0x826a7620
	ctx.lr = 0x825369F8;
	sub_826A7620(ctx, base);
	// lwz r3,132(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82536a08
	if (ctx.cr6.eq) goto loc_82536A08;
	// bl 0x82241d18
	ctx.lr = 0x82536A08;
	sub_82241D18(ctx, base);
loc_82536A08:
	// addi r31,r1,320
	ctx.r31.s64 = ctx.r1.s64 + 320;
	// li r30,9
	ctx.r30.s64 = 9;
loc_82536A10:
	// addi r31,r31,-16
	ctx.r31.s64 = ctx.r31.s64 + -16;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x822e4d00
	ctx.lr = 0x82536A1C;
	sub_822E4D00(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge 0x82536a10
	if (!ctx.cr0.lt) goto loc_82536A10;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x822e4d00
	ctx.lr = 0x82536A2C;
	sub_822E4D00(ctx, base);
	// addi r1,r1,10640
	ctx.r1.s64 = ctx.r1.s64 + 10640;
	// b 0x82fa76b8
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82536A34"))) PPC_WEAK_FUNC(sub_82536A34);
PPC_FUNC_IMPL(__imp__sub_82536A34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82536A38"))) PPC_WEAK_FUNC(sub_82536A38);
PPC_FUNC_IMPL(__imp__sub_82536A38) {
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
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r4,6208(r3)
	PPC_STORE_U32(ctx.r3.u32 + 6208, ctx.r4.u32);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x82536ac8
	if (!ctx.cr6.gt) goto loc_82536AC8;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r4,3
	ctx.r4.s64 = 3;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// bl 0x822e4d50
	ctx.lr = 0x82536A78;
	sub_822E4D50(ctx, base);
	// extsw r11,r31
	ctx.r11.s64 = ctx.r31.s32;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// stfd f0,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.f0.u64);
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// bl 0x8253a1e0
	ctx.lr = 0x82536A98;
	sub_8253A1E0(ctx, base);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// li r6,1
	ctx.r6.s64 = 1;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r11,16284
	ctx.r4.s64 = ctx.r11.s64 + 16284;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// bl 0x826a7620
	ctx.lr = 0x82536AB0;
	sub_826A7620(ctx, base);
	// lwz r3,92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82536ac0
	if (ctx.cr6.eq) goto loc_82536AC0;
	// bl 0x82241d18
	ctx.lr = 0x82536AC0;
	sub_82241D18(ctx, base);
loc_82536AC0:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x822e4d00
	ctx.lr = 0x82536AC8;
	sub_822E4D00(ctx, base);
loc_82536AC8:
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

__attribute__((alias("__imp__sub_82536AE0"))) PPC_WEAK_FUNC(sub_82536AE0);
PPC_FUNC_IMPL(__imp__sub_82536AE0) {
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
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8253a1e0
	ctx.lr = 0x82536B00;
	sub_8253A1E0(ctx, base);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r11,16512
	ctx.r4.s64 = ctx.r11.s64 + 16512;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x826a7620
	ctx.lr = 0x82536B18;
	sub_826A7620(ctx, base);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82536b28
	if (ctx.cr6.eq) goto loc_82536B28;
	// bl 0x82241d18
	ctx.lr = 0x82536B28;
	sub_82241D18(ctx, base);
loc_82536B28:
	// lwz r31,12(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82536b8c
	if (!ctx.cr6.eq) goto loc_82536B8C;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r4,r11,20496
	ctx.r4.s64 = ctx.r11.s64 + 20496;
	// li r5,0
	ctx.r5.s64 = 0;
	// bl 0x826a7620
	ctx.lr = 0x82536B50;
	sub_826A7620(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r5,32
	ctx.r5.s64 = 32;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// sth r11,160(r31)
	PPC_STORE_U16(ctx.r31.u32 + 160, ctx.r11.u16);
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// bl 0x82a75988
	ctx.lr = 0x82536B6C;
	sub_82A75988(ctx, base);
	// li r5,32
	ctx.r5.s64 = 32;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,88
	ctx.r3.s64 = ctx.r31.s64 + 88;
	// bl 0x82a75988
	ctx.lr = 0x82536B7C;
	sub_82A75988(ctx, base);
	// li r5,32
	ctx.r5.s64 = 32;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,56
	ctx.r3.s64 = ctx.r31.s64 + 56;
	// bl 0x82a75988
	ctx.lr = 0x82536B8C;
	sub_82A75988(ctx, base);
loc_82536B8C:
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

__attribute__((alias("__imp__sub_82536BA0"))) PPC_WEAK_FUNC(sub_82536BA0);
PPC_FUNC_IMPL(__imp__sub_82536BA0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x82536BA8;
	__savegprlr_28(ctx, base);
	// stfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// ld r12,-4096(r1)
	ctx.r12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -4096);
	// stwu r1,-6384(r1)
	ea = -6384 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,28(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// cmplwi cr6,r4,1
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 1, ctx.xer);
	// li r5,1024
	ctx.r5.s64 = 1024;
	// addi r11,r11,6296
	ctx.r11.s64 = ctx.r11.s64 + 6296;
	// bne cr6,0x82536c10
	if (!ctx.cr6.eq) goto loc_82536C10;
	// addi r4,r1,192
	ctx.r4.s64 = ctx.r1.s64 + 192;
	// lwz r6,56(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// bl 0x8234aa60
	ctx.lr = 0x82536BEC;
	sub_8234AA60(ctx, base);
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r6,r11,31944
	ctx.r6.s64 = ctx.r11.s64 + 31944;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// addi r5,r1,192
	ctx.r5.s64 = ctx.r1.s64 + 192;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x8253cc38
	ctx.lr = 0x82536C0C;
	sub_8253CC38(ctx, base);
	// b 0x82536d0c
	goto loc_82536D0C;
loc_82536C10:
	// addi r4,r1,2240
	ctx.r4.s64 = ctx.r1.s64 + 2240;
	// lwz r6,60(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// bl 0x8234aa60
	ctx.lr = 0x82536C1C;
	sub_8234AA60(ctx, base);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r5,r1,2240
	ctx.r5.s64 = ctx.r1.s64 + 2240;
	// li r4,1024
	ctx.r4.s64 = 1024;
	// addi r3,r1,4288
	ctx.r3.s64 = ctx.r1.s64 + 4288;
	// bl 0x82563c28
	ctx.lr = 0x82536C30;
	sub_82563C28(ctx, base);
	// lwz r31,20(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82536d0c
	if (!ctx.cr6.eq) goto loc_82536D0C;
	// li r10,3
	ctx.r10.s64 = 3;
	// addi r11,r1,132
	ctx.r11.s64 = ctx.r1.s64 + 132;
	// li r30,0
	ctx.r30.s64 = 0;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82536C50:
	// stw r30,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r30.u32);
	// stwu r30,16(r11)
	ea = 16 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r30.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x82536c50
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82536C50;
	// li r4,5
	ctx.r4.s64 = 5;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x822e4d50
	ctx.lr = 0x82536C68;
	sub_822E4D50(ctx, base);
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// li r4,5
	ctx.r4.s64 = 5;
	// addi r29,r11,31944
	ctx.r29.s64 = ctx.r11.s64 + 31944;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// stw r29,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r29.u32);
	// bl 0x822e4d50
	ctx.lr = 0x82536C80;
	sub_822E4D50(ctx, base);
	// addi r11,r1,4288
	ctx.r11.s64 = ctx.r1.s64 + 4288;
	// li r4,5
	ctx.r4.s64 = 5;
	// stw r11,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r11.u32);
	// addi r3,r1,176
	ctx.r3.s64 = ctx.r1.s64 + 176;
	// bl 0x822e4d50
	ctx.lr = 0x82536C94;
	sub_822E4D50(ctx, base);
	// stw r29,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r29.u32);
	// stw r30,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r30.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r30,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r30.u32);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// lwz r5,8(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x822c2418
	ctx.lr = 0x82536CB4;
	sub_822C2418(ctx, base);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r4,r11,18972
	ctx.r4.s64 = ctx.r11.s64 + 18972;
	// lwz r3,128(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// li r6,3
	ctx.r6.s64 = 3;
	// addi r5,r1,144
	ctx.r5.s64 = ctx.r1.s64 + 144;
	// bl 0x826a7620
	ctx.lr = 0x82536CCC;
	sub_826A7620(ctx, base);
	// lwz r3,132(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82536cdc
	if (ctx.cr6.eq) goto loc_82536CDC;
	// bl 0x82241d18
	ctx.lr = 0x82536CDC;
	sub_82241D18(ctx, base);
loc_82536CDC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8253ff60
	ctx.lr = 0x82536CE4;
	sub_8253FF60(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stfs f31,16(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
	// addi r30,r1,192
	ctx.r30.s64 = ctx.r1.s64 + 192;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// li r31,2
	ctx.r31.s64 = 2;
loc_82536CF8:
	// addi r30,r30,-16
	ctx.r30.s64 = ctx.r30.s64 + -16;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x822e4d00
	ctx.lr = 0x82536D04;
	sub_822E4D00(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bge 0x82536cf8
	if (!ctx.cr0.lt) goto loc_82536CF8;
loc_82536D0C:
	// addi r1,r1,6384
	ctx.r1.s64 = ctx.r1.s64 + 6384;
	// lfd f31,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82536D18"))) PPC_WEAK_FUNC(sub_82536D18);
PPC_FUNC_IMPL(__imp__sub_82536D18) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x82536D20;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stfs f2,6192(r3)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r3.u32 + 6192, temp.u32);
	// addi r28,r3,44
	ctx.r28.s64 = ctx.r3.s64 + 44;
	// stfs f1,6188(r3)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r3.u32 + 6188, temp.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r4,1024
	ctx.r4.s64 = 1024;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// bl 0x82fa2df8
	ctx.lr = 0x82536D48;
	sub_82FA2DF8(ctx, base);
	// addic r11,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r11.s64 = ctx.r30.s64 + -1;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// subfe r11,r11,r30
	temp.u8 = (~ctx.r11.u32 + ctx.r30.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r30.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r30.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// stw r11,6196(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6196, ctx.r11.u32);
	// beq cr6,0x82536d6c
	if (ctx.cr6.eq) goto loc_82536D6C;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,1024
	ctx.r4.s64 = 1024;
	// addi r3,r31,2092
	ctx.r3.s64 = ctx.r31.s64 + 2092;
	// bl 0x82fa2df8
	ctx.lr = 0x82536D6C;
	sub_82FA2DF8(ctx, base);
loc_82536D6C:
	// addic r11,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r11.s64 = ctx.r29.s64 + -1;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// subfe r11,r11,r29
	temp.u8 = (~ctx.r11.u32 + ctx.r29.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r29.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r29.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// stw r11,6200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 6200, ctx.r11.u32);
	// beq cr6,0x82536d90
	if (ctx.cr6.eq) goto loc_82536D90;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,1024
	ctx.r4.s64 = 1024;
	// addi r3,r31,4140
	ctx.r3.s64 = ctx.r31.s64 + 4140;
	// bl 0x82fa2df8
	ctx.lr = 0x82536D90;
	sub_82FA2DF8(ctx, base);
loc_82536D90:
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lfs f13,6188(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 6188);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,-2340(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -2340);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bne cr6,0x82536df0
	if (!ctx.cr6.eq) goto loc_82536DF0;
	// lwz r11,6196(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6196);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82536de4
	if (ctx.cr6.eq) goto loc_82536DE4;
	// lwz r11,6200(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6200);
	// lwz r3,6220(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6220);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82536dd4
	if (ctx.cr6.eq) goto loc_82536DD4;
	// addi r6,r31,2092
	ctx.r6.s64 = ctx.r31.s64 + 2092;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r4,r31,4140
	ctx.r4.s64 = ctx.r31.s64 + 4140;
	// bl 0x825392d0
	ctx.lr = 0x82536DD0;
	sub_825392D0(ctx, base);
	// b 0x82536df0
	goto loc_82536DF0;
loc_82536DD4:
	// addi r5,r31,2092
	ctx.r5.s64 = ctx.r31.s64 + 2092;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x82539180
	ctx.lr = 0x82536DE0;
	sub_82539180(ctx, base);
	// b 0x82536df0
	goto loc_82536DF0;
loc_82536DE4:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r3,6216(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 6216);
	// bl 0x82538f08
	ctx.lr = 0x82536DF0;
	sub_82538F08(ctx, base);
loc_82536DF0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82536DF8"))) PPC_WEAK_FUNC(sub_82536DF8);
PPC_FUNC_IMPL(__imp__sub_82536DF8) {
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
	// bl 0x82539910
	ctx.lr = 0x82536E14;
	sub_82539910(ctx, base);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r11,r11,16840
	ctx.r11.s64 = ctx.r11.s64 + 16840;
	// stw r30,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r30.u32);
	// addi r3,r31,104
	ctx.r3.s64 = ctx.r31.s64 + 104;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x82538c08
	ctx.lr = 0x82536E30;
	sub_82538C08(ctx, base);
	// stw r30,4760(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4760, ctx.r30.u32);
	// li r3,4656
	ctx.r3.s64 = 4656;
	// bl 0x82691500
	ctx.lr = 0x82536E3C;
	sub_82691500(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82536e54
	if (ctx.cr0.eq) goto loc_82536E54;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82538d88
	ctx.lr = 0x82536E50;
	sub_82538D88(ctx, base);
	// b 0x82536e58
	goto loc_82536E58;
loc_82536E54:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_82536E58:
	// stw r3,4764(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4764, ctx.r3.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r31,4768
	ctx.r3.s64 = ctx.r31.s64 + 4768;
	// bl 0x82538d88
	ctx.lr = 0x82536E6C;
	sub_82538D88(ctx, base);
	// li r11,-1
	ctx.r11.s64 = -1;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// stw r11,9424(r31)
	PPC_STORE_U32(ctx.r31.u32 + 9424, ctx.r11.u32);
	// bl 0x8253eab0
	ctx.lr = 0x82536E80;
	sub_8253EAB0(ctx, base);
	// li r5,56
	ctx.r5.s64 = 56;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,44
	ctx.r3.s64 = ctx.r31.s64 + 44;
	// bl 0x82a75988
	ctx.lr = 0x82536E90;
	sub_82A75988(ctx, base);
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

__attribute__((alias("__imp__sub_82536EAC"))) PPC_WEAK_FUNC(sub_82536EAC);
PPC_FUNC_IMPL(__imp__sub_82536EAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82536EB0"))) PPC_WEAK_FUNC(sub_82536EB0);
PPC_FUNC_IMPL(__imp__sub_82536EB0) {
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
	// bl 0x82536f00
	ctx.lr = 0x82536ED0;
	sub_82536F00(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82536ee0
	if (ctx.cr0.eq) goto loc_82536EE0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82691540
	ctx.lr = 0x82536EE0;
	sub_82691540(ctx, base);
loc_82536EE0:
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

__attribute__((alias("__imp__sub_82536EFC"))) PPC_WEAK_FUNC(sub_82536EFC);
PPC_FUNC_IMPL(__imp__sub_82536EFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82536F00"))) PPC_WEAK_FUNC(sub_82536F00);
PPC_FUNC_IMPL(__imp__sub_82536F00) {
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
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r30,r3,4768
	ctx.r30.s64 = ctx.r3.s64 + 4768;
	// addi r11,r11,16840
	ctx.r11.s64 = ctx.r11.s64 + 16840;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,4768(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4768);
	// bl 0x826a70d8
	ctx.lr = 0x82536F34;
	sub_826A70D8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82539670
	ctx.lr = 0x82536F3C;
	sub_82539670(ctx, base);
	// lwz r3,4772(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4772);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82536f4c
	if (ctx.cr6.eq) goto loc_82536F4C;
	// bl 0x82241d18
	ctx.lr = 0x82536F4C;
	sub_82241D18(ctx, base);
loc_82536F4C:
	// lwz r3,4764(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4764);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82536f60
	if (ctx.cr6.eq) goto loc_82536F60;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x822cad90
	ctx.lr = 0x82536F60;
	sub_822CAD90(ctx, base);
loc_82536F60:
	// addi r30,r31,104
	ctx.r30.s64 = ctx.r31.s64 + 104;
	// lwz r3,104(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x826a70d8
	ctx.lr = 0x82536F70;
	sub_826A70D8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82539670
	ctx.lr = 0x82536F78;
	sub_82539670(ctx, base);
	// lwz r3,108(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82536f88
	if (ctx.cr6.eq) goto loc_82536F88;
	// bl 0x82241d18
	ctx.lr = 0x82536F88;
	sub_82241D18(ctx, base);
loc_82536F88:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82539db8
	ctx.lr = 0x82536F90;
	sub_82539DB8(ctx, base);
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

