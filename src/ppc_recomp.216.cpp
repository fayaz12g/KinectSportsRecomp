#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_82C32608"))) PPC_WEAK_FUNC(sub_82C32608);
PPC_FUNC_IMPL(__imp__sub_82C32608) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7674
	ctx.lr = 0x82C32610;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r11,52(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82C32630;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82c32788
	if (!ctx.cr0.eq) goto loc_82C32788;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c32298
	ctx.lr = 0x82C32644;
	sub_82C32298(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// addi r28,r11,-28036
	ctx.r28.s64 = ctx.r11.s64 + -28036;
	// addi r27,r10,-5624
	ctx.r27.s64 = ctx.r10.s64 + -5624;
	// bne cr6,0x82c3267c
	if (!ctx.cr6.eq) goto loc_82C3267C;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// addi r5,r11,-5488
	ctx.r5.s64 = ctx.r11.s64 + -5488;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r7,202
	ctx.r7.s64 = 202;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82b102f0
	ctx.lr = 0x82C3267C;
	sub_82B102F0(ctx, base);
loc_82C3267C:
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82c32694
	if (!ctx.cr6.eq) goto loc_82C32694;
	// lbz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// stb r11,8(r29)
	PPC_STORE_U8(ctx.r29.u32 + 8, ctx.r11.u8);
	// b 0x82c326c8
	goto loc_82C326C8;
loc_82C32694:
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq cr6,0x82c326c8
	if (ctx.cr6.eq) goto loc_82C326C8;
	// lbz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lbz r10,8(r29)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r29.u32 + 8);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82c326c8
	if (ctx.cr6.eq) goto loc_82C326C8;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// addi r5,r11,-5468
	ctx.r5.s64 = ctx.r11.s64 + -5468;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r7,207
	ctx.r7.s64 = 207;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82b102f0
	ctx.lr = 0x82C326C8;
	sub_82B102F0(ctx, base);
loc_82C326C8:
	// lwz r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// lis r10,-31974
	ctx.r10.s64 = -2095448064;
	// mulli r11,r11,52
	ctx.r11.s64 = ctx.r11.s64 * 52;
	// addi r10,r10,3936
	ctx.r10.s64 = ctx.r10.s64 + 3936;
	// lwzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// rlwinm. r11,r11,30,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82c32718
	if (ctx.cr0.eq) goto loc_82C32718;
	// cmpwi cr6,r31,4
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 4, ctx.xer);
	// ble cr6,0x82c32708
	if (!ctx.cr6.gt) goto loc_82C32708;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// addi r5,r11,-5508
	ctx.r5.s64 = ctx.r11.s64 + -5508;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r7,211
	ctx.r7.s64 = 211;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82b102f0
	ctx.lr = 0x82C32708;
	sub_82B102F0(ctx, base);
loc_82C32708:
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// mulli r11,r11,5
	ctx.r11.s64 = ctx.r11.s64 * 5;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// b 0x82c3274c
	goto loc_82C3274C;
loc_82C32718:
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// ble cr6,0x82c32740
	if (!ctx.cr6.gt) goto loc_82C32740;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// addi r5,r11,-5528
	ctx.r5.s64 = ctx.r11.s64 + -5528;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r7,214
	ctx.r7.s64 = 214;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82b102f0
	ctx.lr = 0x82C32740;
	sub_82B102F0(ctx, base);
loc_82C32740:
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// mulli r10,r31,5
	ctx.r10.s64 = ctx.r31.s64 * 5;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_82C3274C:
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r10,-5880
	ctx.r10.s64 = ctx.r10.s64 + -5880;
	// lwzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// stw r11,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r11.u32);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// bne cr6,0x82c32788
	if (!ctx.cr6.eq) goto loc_82C32788;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// addi r5,r11,-5640
	ctx.r5.s64 = ctx.r11.s64 + -5640;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r7,218
	ctx.r7.s64 = 218;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82b102f0
	ctx.lr = 0x82C32788;
	sub_82B102F0(ctx, base);
loc_82C32788:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82fa76c4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C32790"))) PPC_WEAK_FUNC(sub_82C32790);
PPC_FUNC_IMPL(__imp__sub_82C32790) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,228(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 228);
	// lis r11,-31974
	ctx.r11.s64 = -2095448064;
	// rlwinm. r10,r10,31,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r11,r11,3936
	ctx.r11.s64 = ctx.r11.s64 + 3936;
	// beq 0x82c327ac
	if (ctx.cr0.eq) goto loc_82C327AC;
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x82c327bc
	goto loc_82C327BC;
loc_82C327AC:
	// lwz r10,24(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	// mulli r10,r10,52
	ctx.r10.s64 = ctx.r10.s64 * 52;
	// lwzx r10,r10,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// rlwinm r10,r10,29,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x1;
loc_82C327BC:
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82c327d4
	if (!ctx.cr0.eq) goto loc_82C327D4;
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// blr 
	return;
loc_82C327D4:
	// lwz r10,24(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	// mulli r10,r10,52
	ctx.r10.s64 = ctx.r10.s64 * 52;
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// rlwinm. r10,r11,30,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82c327f8
	if (ctx.cr0.eq) goto loc_82C327F8;
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// blr 
	return;
loc_82C327F8:
	// rlwinm. r11,r11,31,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beqlr 
	if (ctx.cr0.eq) return;
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C32810"))) PPC_WEAK_FUNC(sub_82C32810);
PPC_FUNC_IMPL(__imp__sub_82C32810) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,228(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 228);
	// lis r11,-31974
	ctx.r11.s64 = -2095448064;
	// rlwinm. r10,r10,31,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r11,r11,3936
	ctx.r11.s64 = ctx.r11.s64 + 3936;
	// beq 0x82c3282c
	if (ctx.cr0.eq) goto loc_82C3282C;
	// li r10,0
	ctx.r10.s64 = 0;
	// b 0x82c3283c
	goto loc_82C3283C;
loc_82C3282C:
	// lwz r10,24(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	// mulli r10,r10,52
	ctx.r10.s64 = ctx.r10.s64 * 52;
	// lwzx r10,r10,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// rlwinm r10,r10,29,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x1;
loc_82C3283C:
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82c32854
	if (!ctx.cr0.eq) goto loc_82C32854;
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// blr 
	return;
loc_82C32854:
	// lwz r10,24(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 24);
	// mulli r10,r10,52
	ctx.r10.s64 = ctx.r10.s64 * 52;
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// rlwinm. r10,r11,30,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82c32878
	if (ctx.cr0.eq) goto loc_82C32878;
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// blr 
	return;
loc_82C32878:
	// rlwinm. r11,r11,31,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beqlr 
	if (ctx.cr0.eq) return;
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C32890"))) PPC_WEAK_FUNC(sub_82C32890);
PPC_FUNC_IMPL(__imp__sub_82C32890) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82c328bc
	if (!ctx.cr6.gt) goto loc_82C328BC;
	// lwz r11,228(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 228);
	// rlwinm. r11,r11,26,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82c328b4
	if (!ctx.cr0.eq) goto loc_82C328B4;
	// lwz r11,80(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	// cmpwi cr6,r11,31
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 31, ctx.xer);
	// bne cr6,0x82c328bc
	if (!ctx.cr6.eq) goto loc_82C328BC;
loc_82C328B4:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_82C328BC:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C328C4"))) PPC_WEAK_FUNC(sub_82C328C4);
PPC_FUNC_IMPL(__imp__sub_82C328C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C328C8"))) PPC_WEAK_FUNC(sub_82C328C8);
PPC_FUNC_IMPL(__imp__sub_82C328C8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmpwi cr6,r11,104
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 104, ctx.xer);
	// beq cr6,0x82c32918
	if (ctx.cr6.eq) goto loc_82C32918;
	// cmpwi cr6,r11,105
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 105, ctx.xer);
	// beq cr6,0x82c32918
	if (ctx.cr6.eq) goto loc_82C32918;
	// cmpwi cr6,r11,106
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 106, ctx.xer);
	// beq cr6,0x82c32918
	if (ctx.cr6.eq) goto loc_82C32918;
	// cmpwi cr6,r11,107
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 107, ctx.xer);
	// beq cr6,0x82c32918
	if (ctx.cr6.eq) goto loc_82C32918;
	// cmpwi cr6,r11,108
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 108, ctx.xer);
	// beq cr6,0x82c32918
	if (ctx.cr6.eq) goto loc_82C32918;
	// cmpwi cr6,r11,109
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 109, ctx.xer);
	// beq cr6,0x82c32918
	if (ctx.cr6.eq) goto loc_82C32918;
	// cmpwi cr6,r11,110
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 110, ctx.xer);
	// beq cr6,0x82c32918
	if (ctx.cr6.eq) goto loc_82C32918;
	// cmpwi cr6,r11,111
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 111, ctx.xer);
	// beq cr6,0x82c32918
	if (ctx.cr6.eq) goto loc_82C32918;
	// cmpwi cr6,r11,112
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 112, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne cr6,0x82c3291c
	if (!ctx.cr6.eq) goto loc_82C3291C;
loc_82C32918:
	// li r11,1
	ctx.r11.s64 = 1;
loc_82C3291C:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C32924"))) PPC_WEAK_FUNC(sub_82C32924);
PPC_FUNC_IMPL(__imp__sub_82C32924) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C32928"))) PPC_WEAK_FUNC(sub_82C32928);
PPC_FUNC_IMPL(__imp__sub_82C32928) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmpwi cr6,r11,113
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 113, ctx.xer);
	// beq cr6,0x82c32950
	if (ctx.cr6.eq) goto loc_82C32950;
	// cmpwi cr6,r11,114
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 114, ctx.xer);
	// beq cr6,0x82c32950
	if (ctx.cr6.eq) goto loc_82C32950;
	// cmpwi cr6,r11,115
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 115, ctx.xer);
	// beq cr6,0x82c32950
	if (ctx.cr6.eq) goto loc_82C32950;
	// cmpwi cr6,r11,116
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 116, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne cr6,0x82c32954
	if (!ctx.cr6.eq) goto loc_82C32954;
loc_82C32950:
	// li r11,1
	ctx.r11.s64 = 1;
loc_82C32954:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C3295C"))) PPC_WEAK_FUNC(sub_82C3295C);
PPC_FUNC_IMPL(__imp__sub_82C3295C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C32960"))) PPC_WEAK_FUNC(sub_82C32960);
PPC_FUNC_IMPL(__imp__sub_82C32960) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmpwi cr6,r11,43
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 43, ctx.xer);
	// beq cr6,0x82c32990
	if (ctx.cr6.eq) goto loc_82C32990;
	// cmpwi cr6,r11,99
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 99, ctx.xer);
	// beq cr6,0x82c32990
	if (ctx.cr6.eq) goto loc_82C32990;
	// cmpwi cr6,r11,100
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 100, ctx.xer);
	// beq cr6,0x82c32990
	if (ctx.cr6.eq) goto loc_82C32990;
	// cmpwi cr6,r11,142
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 142, ctx.xer);
	// beq cr6,0x82c32990
	if (ctx.cr6.eq) goto loc_82C32990;
	// cmpwi cr6,r11,143
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 143, ctx.xer);
	// li r11,0
	ctx.r11.s64 = 0;
	// bne cr6,0x82c32994
	if (!ctx.cr6.eq) goto loc_82C32994;
loc_82C32990:
	// li r11,1
	ctx.r11.s64 = 1;
loc_82C32994:
	// clrlwi r3,r11,24
	ctx.r3.u64 = ctx.r11.u32 & 0xFF;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C3299C"))) PPC_WEAK_FUNC(sub_82C3299C);
PPC_FUNC_IMPL(__imp__sub_82C3299C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C329A0"))) PPC_WEAK_FUNC(sub_82C329A0);
PPC_FUNC_IMPL(__imp__sub_82C329A0) {
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
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne cr6,0x82c32a80
	if (!ctx.cr6.eq) goto loc_82C32A80;
	// lwz r11,228(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 228);
	// rlwinm. r11,r11,23,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 23) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82c329f0
	if (ctx.cr0.eq) goto loc_82C329F0;
	// lwz r11,20(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	// cmpw cr6,r6,r11
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x82c329f0
	if (!ctx.cr6.eq) goto loc_82C329F0;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c21a30
	ctx.lr = 0x82C329E8;
	sub_82C21A30(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82c32a8c
	if (!ctx.cr0.eq) goto loc_82C32A8C;
loc_82C329F0:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,72(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82C32A04;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82c32a78
	if (ctx.cr0.eq) goto loc_82C32A78;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,68(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82C32A20;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82c32a34
	if (ctx.cr0.eq) goto loc_82C32A34;
	// lwz r11,172(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 172);
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x82c32a8c
	if (ctx.cr6.eq) goto loc_82C32A8C;
loc_82C32A34:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82C32A48;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82c32a78
	if (ctx.cr0.eq) goto loc_82C32A78;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82C32A64;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82c32a78
	if (ctx.cr0.eq) goto loc_82C32A78;
	// lwz r11,180(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x82c32a8c
	if (ctx.cr6.eq) goto loc_82C32A8C;
loc_82C32A78:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82c32a90
	goto loc_82C32A90;
loc_82C32A80:
	// cmpwi cr6,r7,1
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 1, ctx.xer);
	// li r3,1
	ctx.r3.s64 = 1;
	// beq cr6,0x82c32a90
	if (ctx.cr6.eq) goto loc_82C32A90;
loc_82C32A8C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82C32A90:
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

__attribute__((alias("__imp__sub_82C32AA8"))) PPC_WEAK_FUNC(sub_82C32AA8);
PPC_FUNC_IMPL(__imp__sub_82C32AA8) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// add r9,r10,r4
	ctx.r9.u64 = ctx.r10.u64 + ctx.r4.u64;
	// lwzx r10,r10,r4
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r4.u32);
	// cmpw cr6,r10,r3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r3.s32, ctx.xer);
	// beq cr6,0x82c32ad8
	if (ctx.cr6.eq) goto loc_82C32AD8;
loc_82C32AC0:
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r4
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r4.u32);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r10,r4
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r4.u32);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x82c32ac0
	if (!ctx.cr6.eq) goto loc_82C32AC0;
loc_82C32AD8:
	// cmpw cr6,r3,r11
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x82c32afc
	if (ctx.cr6.eq) goto loc_82C32AFC;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
loc_82C32AE4:
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r10,r8,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// cmpw cr6,r8,r11
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r11.s32, ctx.xer);
	// add r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 + ctx.r4.u64;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// bne cr6,0x82c32ae4
	if (!ctx.cr6.eq) goto loc_82C32AE4;
loc_82C32AFC:
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C32B08"))) PPC_WEAK_FUNC(sub_82C32B08);
PPC_FUNC_IMPL(__imp__sub_82C32B08) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r3,r11,r5
	PPC_STORE_U32(ctx.r11.u32 + ctx.r5.u32, ctx.r3.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C32B14"))) PPC_WEAK_FUNC(sub_82C32B14);
PPC_FUNC_IMPL(__imp__sub_82C32B14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C32B18"))) PPC_WEAK_FUNC(sub_82C32B18);
PPC_FUNC_IMPL(__imp__sub_82C32B18) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm. r11,r11,0,9,9
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x400000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82c32b6c
	if (ctx.cr0.eq) goto loc_82C32B6C;
	// cmplwi cr6,r4,1
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 1, ctx.xer);
	// blt cr6,0x82c32b60
	if (ctx.cr6.lt) goto loc_82C32B60;
	// beq cr6,0x82c32b54
	if (ctx.cr6.eq) goto loc_82C32B54;
	// cmplwi cr6,r4,3
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 3, ctx.xer);
	// blt cr6,0x82c32b48
	if (ctx.cr6.lt) goto loc_82C32B48;
	// bne cr6,0x82c32b6c
	if (!ctx.cr6.eq) goto loc_82C32B6C;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r3,r11,26,30,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0x3;
	// blr 
	return;
loc_82C32B48:
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r3,r11,28,30,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0x3;
	// blr 
	return;
loc_82C32B54:
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r3,r11,30,30,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3;
	// blr 
	return;
loc_82C32B60:
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// clrlwi r3,r11,30
	ctx.r3.u64 = ctx.r11.u32 & 0x3;
	// blr 
	return;
loc_82C32B6C:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C32B74"))) PPC_WEAK_FUNC(sub_82C32B74);
PPC_FUNC_IMPL(__imp__sub_82C32B74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C32B78"))) PPC_WEAK_FUNC(sub_82C32B78);
PPC_FUNC_IMPL(__imp__sub_82C32B78) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r4,1
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 1, ctx.xer);
	// rlwinm. r11,r11,0,9,9
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x400000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82c32bd0
	if (ctx.cr0.eq) goto loc_82C32BD0;
	// blt cr6,0x82c32bc4
	if (ctx.cr6.lt) goto loc_82C32BC4;
	// cmplwi cr6,r4,1
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 1, ctx.xer);
	// beq cr6,0x82c32bb8
	if (ctx.cr6.eq) goto loc_82C32BB8;
	// cmplwi cr6,r4,3
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 3, ctx.xer);
	// blt cr6,0x82c32bac
	if (ctx.cr6.lt) goto loc_82C32BAC;
	// bne cr6,0x82c32be8
	if (!ctx.cr6.eq) goto loc_82C32BE8;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r3,r11,20,29,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 20) & 0x7;
	// blr 
	return;
loc_82C32BAC:
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r3,r11,24,29,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0x7;
	// blr 
	return;
loc_82C32BB8:
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r3,r11,28,29,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0x7;
	// blr 
	return;
loc_82C32BC4:
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// clrlwi r3,r11,29
	ctx.r3.u64 = ctx.r11.u32 & 0x7;
	// blr 
	return;
loc_82C32BD0:
	// blt cr6,0x82c32c08
	if (ctx.cr6.lt) goto loc_82C32C08;
	// cmplwi cr6,r4,1
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 1, ctx.xer);
	// beq cr6,0x82c32c00
	if (ctx.cr6.eq) goto loc_82C32C00;
	// cmplwi cr6,r4,3
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 3, ctx.xer);
	// blt cr6,0x82c32bf8
	if (ctx.cr6.lt) goto loc_82C32BF8;
	// beq cr6,0x82c32bf0
	if (ctx.cr6.eq) goto loc_82C32BF0;
loc_82C32BE8:
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
loc_82C32BF0:
	// li r3,3
	ctx.r3.s64 = 3;
	// blr 
	return;
loc_82C32BF8:
	// li r3,2
	ctx.r3.s64 = 2;
	// blr 
	return;
loc_82C32C00:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_82C32C08:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C32C10"))) PPC_WEAK_FUNC(sub_82C32C10);
PPC_FUNC_IMPL(__imp__sub_82C32C10) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm. r11,r11,0,9,9
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x400000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82c32c28
	if (ctx.cr0.eq) goto loc_82C32C28;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// andi. r3,r11,34952
	ctx.r3.u64 = ctx.r11.u64 & 34952;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blr 
	return;
loc_82C32C28:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C32C30"))) PPC_WEAK_FUNC(sub_82C32C30);
PPC_FUNC_IMPL(__imp__sub_82C32C30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7674
	ctx.lr = 0x82C32C38;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// rlwinm. r11,r11,0,9,9
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x400000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82c32ce4
	if (ctx.cr0.eq) goto loc_82C32CE4;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// lis r10,-32230
	ctx.r10.s64 = -2112225280;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// li r27,0
	ctx.r27.s64 = 0;
	// addi r31,r9,-28036
	ctx.r31.s64 = ctx.r9.s64 + -28036;
	// addi r30,r10,-30212
	ctx.r30.s64 = ctx.r10.s64 + -30212;
	// addi r29,r11,-5256
	ctx.r29.s64 = ctx.r11.s64 + -5256;
loc_82C32C68:
	// cmplwi cr6,r27,1
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 1, ctx.xer);
	// blt cr6,0x82c32cc0
	if (ctx.cr6.lt) goto loc_82C32CC0;
	// beq cr6,0x82c32cb4
	if (ctx.cr6.eq) goto loc_82C32CB4;
	// cmplwi cr6,r27,3
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 3, ctx.xer);
	// blt cr6,0x82c32ca8
	if (ctx.cr6.lt) goto loc_82C32CA8;
	// beq cr6,0x82c32c9c
	if (ctx.cr6.eq) goto loc_82C32C9C;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r7,166
	ctx.r7.s64 = 166;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82b102f0
	ctx.lr = 0x82C32C98;
	sub_82B102F0(ctx, base);
	// b 0x82c32cd8
	goto loc_82C32CD8;
loc_82C32C9C:
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// rlwinm r11,r11,26,30,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 26) & 0x3;
	// b 0x82c32cc8
	goto loc_82C32CC8;
loc_82C32CA8:
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// rlwinm r11,r11,28,30,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0x3;
	// b 0x82c32cc8
	goto loc_82C32CC8;
loc_82C32CB4:
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// rlwinm r11,r11,30,30,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3;
	// b 0x82c32cc8
	goto loc_82C32CC8;
loc_82C32CC0:
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// clrlwi r11,r11,30
	ctx.r11.u64 = ctx.r11.u32 & 0x3;
loc_82C32CC8:
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// beq cr6,0x82c32cf0
	if (ctx.cr6.eq) goto loc_82C32CF0;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// beq cr6,0x82c32cf0
	if (ctx.cr6.eq) goto loc_82C32CF0;
loc_82C32CD8:
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// cmpwi cr6,r27,4
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 4, ctx.xer);
	// blt cr6,0x82c32c68
	if (ctx.cr6.lt) goto loc_82C32C68;
loc_82C32CE4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82C32CE8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c4
	__restgprlr_27(ctx, base);
	return;
loc_82C32CF0:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82c32ce8
	goto loc_82C32CE8;
}

__attribute__((alias("__imp__sub_82C32CF8"))) PPC_WEAK_FUNC(sub_82C32CF8);
PPC_FUNC_IMPL(__imp__sub_82C32CF8) {
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
	// addi r11,r4,7
	ctx.r11.s64 = ctx.r4.s64 + 7;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r31,r11,r3
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82C32D28;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82c32d38
	if (ctx.cr0.eq) goto loc_82C32D38;
	// lwz r3,48(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// b 0x82c32d3c
	goto loc_82C32D3C;
loc_82C32D38:
	// li r3,-1
	ctx.r3.s64 = -1;
loc_82C32D3C:
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

__attribute__((alias("__imp__sub_82C32D50"))) PPC_WEAK_FUNC(sub_82C32D50);
PPC_FUNC_IMPL(__imp__sub_82C32D50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x82C32D58;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// li r28,0
	ctx.r28.s64 = 0;
	// addi r11,r11,-3072
	ctx.r11.s64 = ctx.r11.s64 + -3072;
	// li r29,84
	ctx.r29.s64 = 84;
	// addi r31,r11,16
	ctx.r31.s64 = ctx.r11.s64 + 16;
	// lis r30,-31961
	ctx.r30.s64 = -2094596096;
loc_82C32D74:
	// lwz r11,-23308(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -23308);
	// addi r3,r11,244
	ctx.r3.s64 = ctx.r11.s64 + 244;
	// bl 0x831791a4
	ctx.lr = 0x82C32D80;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r11,-23308(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -23308);
	// lwzx r3,r29,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r11.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82c32dc4
	if (ctx.cr6.eq) goto loc_82C32DC4;
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r6,r31,-12
	ctx.r6.s64 = ctx.r31.s64 + -12;
	// stw r11,-16(r31)
	PPC_STORE_U32(ctx.r31.u32 + -16, ctx.r11.u32);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r31,-8
	ctx.r4.s64 = ctx.r31.s64 + -8;
	// bl 0x82c36548
	ctx.lr = 0x82C32DA8;
	sub_82C36548(ctx, base);
	// lwz r11,-23308(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -23308);
	// addi r3,r11,244
	ctx.r3.s64 = ctx.r11.s64 + 244;
	// bl 0x831791b4
	ctx.lr = 0x82C32DB4;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r3,-23308(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -23308);
	// bl 0x82c34078
	ctx.lr = 0x82C32DC0;
	sub_82C34078(ctx, base);
	// b 0x82c32dd4
	goto loc_82C32DD4;
loc_82C32DC4:
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r3,r11,244
	ctx.r3.s64 = ctx.r11.s64 + 244;
	// stw r10,-16(r31)
	PPC_STORE_U32(ctx.r31.u32 + -16, ctx.r10.u32);
	// bl 0x831791b4
	ctx.lr = 0x82C32DD4;
	__imp__RtlLeaveCriticalSection(ctx, base);
loc_82C32DD4:
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r31,r31,24
	ctx.r31.s64 = ctx.r31.s64 + 24;
	// cmplwi cr6,r29,100
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 100, ctx.xer);
	// blt cr6,0x82c32d74
	if (ctx.cr6.lt) goto loc_82C32D74;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C32DF0"))) PPC_WEAK_FUNC(sub_82C32DF0);
PPC_FUNC_IMPL(__imp__sub_82C32DF0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x82C32DF8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// li r28,0
	ctx.r28.s64 = 0;
	// addi r11,r11,-3072
	ctx.r11.s64 = ctx.r11.s64 + -3072;
	// li r29,84
	ctx.r29.s64 = 84;
	// addi r31,r11,4
	ctx.r31.s64 = ctx.r11.s64 + 4;
	// lis r30,-31961
	ctx.r30.s64 = -2094596096;
loc_82C32E14:
	// lwz r11,-4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82c32e64
	if (ctx.cr6.eq) goto loc_82C32E64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r3,-23308(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + -23308);
	// bl 0x82c33fd8
	ctx.lr = 0x82C32E2C;
	sub_82C33FD8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82c32e64
	if (ctx.cr0.lt) goto loc_82C32E64;
	// lwz r11,-23308(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -23308);
	// addi r3,r11,244
	ctx.r3.s64 = ctx.r11.s64 + 244;
	// bl 0x831791a4
	ctx.lr = 0x82C32E40;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r11,-23308(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -23308);
	// addi r5,r31,12
	ctx.r5.s64 = ctx.r31.s64 + 12;
	// lwz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r31,4
	ctx.r4.s64 = ctx.r31.s64 + 4;
	// lwzx r3,r29,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r11.u32);
	// bl 0x82c36430
	ctx.lr = 0x82C32E58;
	sub_82C36430(ctx, base);
	// lwz r11,-23308(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + -23308);
	// addi r3,r11,244
	ctx.r3.s64 = ctx.r11.s64 + 244;
	// bl 0x831791b4
	ctx.lr = 0x82C32E64;
	__imp__RtlLeaveCriticalSection(ctx, base);
loc_82C32E64:
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r31,r31,24
	ctx.r31.s64 = ctx.r31.s64 + 24;
	// cmplwi cr6,r29,100
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 100, ctx.xer);
	// blt cr6,0x82c32e14
	if (ctx.cr6.lt) goto loc_82C32E14;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C32E80"))) PPC_WEAK_FUNC(sub_82C32E80);
PPC_FUNC_IMPL(__imp__sub_82C32E80) {
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
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r10,-26196
	ctx.r3.s64 = ctx.r10.s64 + -26196;
	// bl 0x831798a4
	ctx.lr = 0x82C32EB4;
	__imp__XexGetModuleHandle(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82c32ecc
	if (ctx.cr0.lt) goto loc_82C32ECC;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x83179894
	ctx.lr = 0x82C32ECC;
	__imp__XexGetProcedureAddress(ctx, base);
loc_82C32ECC:
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

__attribute__((alias("__imp__sub_82C32EE4"))) PPC_WEAK_FUNC(sub_82C32EE4);
PPC_FUNC_IMPL(__imp__sub_82C32EE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C32EE8"))) PPC_WEAK_FUNC(sub_82C32EE8);
PPC_FUNC_IMPL(__imp__sub_82C32EE8) {
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
	// lis r11,-31961
	ctx.r11.s64 = -2094596096;
	// addi r31,r11,-23436
	ctx.r31.s64 = ctx.r11.s64 + -23436;
	// lwz r11,-23436(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -23436);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82c32f24
	if (!ctx.cr6.eq) goto loc_82C32F24;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,792
	ctx.r3.s64 = 792;
	// bl 0x82c32e80
	ctx.lr = 0x82C32F18;
	sub_82C32E80(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82c32f34
	if (ctx.cr6.eq) goto loc_82C32F34;
loc_82C32F24:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82C32F30;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82c32f38
	goto loc_82C32F38;
loc_82C32F34:
	// li r3,2
	ctx.r3.s64 = 2;
loc_82C32F38:
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

__attribute__((alias("__imp__sub_82C32F4C"))) PPC_WEAK_FUNC(sub_82C32F4C);
PPC_FUNC_IMPL(__imp__sub_82C32F4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C32F50"))) PPC_WEAK_FUNC(sub_82C32F50);
PPC_FUNC_IMPL(__imp__sub_82C32F50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x82C32F58;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31961
	ctx.r11.s64 = -2094596096;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r31,r11,-23432
	ctx.r31.s64 = ctx.r11.s64 + -23432;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lwz r11,-23432(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -23432);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82c32f90
	if (!ctx.cr6.eq) goto loc_82C32F90;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,794
	ctx.r3.s64 = 794;
	// bl 0x82c32e80
	ctx.lr = 0x82C32F84;
	sub_82C32E80(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82c32fa8
	if (ctx.cr6.eq) goto loc_82C32FA8;
loc_82C32F90:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82C32FA4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82c32fb0
	goto loc_82C32FB0;
loc_82C32FA8:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,1167
	ctx.r3.u64 = ctx.r3.u64 | 1167;
loc_82C32FB0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C32FB8"))) PPC_WEAK_FUNC(sub_82C32FB8);
PPC_FUNC_IMPL(__imp__sub_82C32FB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x82C32FC0;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// li r5,12
	ctx.r5.s64 = 12;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// bl 0x82a75988
	ctx.lr = 0x82C32FE4;
	sub_82A75988(ctx, base);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r28,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r28.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82c357b0
	ctx.lr = 0x82C32FFC;
	sub_82C357B0(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge 0x82c3302c
	if (!ctx.cr0.lt) goto loc_82C3302C;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82c3304c
	if (ctx.cr6.eq) goto loc_82C3304C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82C33020;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x82c3304c
	goto loc_82C3304C;
loc_82C3302C:
	// lis r9,-31961
	ctx.r9.s64 = -2094596096;
	// lis r11,-32061
	ctx.r11.s64 = -2101149696;
	// lis r10,-32061
	ctx.r10.s64 = -2101149696;
	// addi r8,r9,-23444
	ctx.r8.s64 = ctx.r9.s64 + -23444;
	// addi r11,r11,11600
	ctx.r11.s64 = ctx.r11.s64 + 11600;
	// addi r10,r10,11760
	ctx.r10.s64 = ctx.r10.s64 + 11760;
	// stw r11,-23444(r9)
	PPC_STORE_U32(ctx.r9.u32 + -23444, ctx.r11.u32);
	// stw r10,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r10.u32);
loc_82C3304C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C33058"))) PPC_WEAK_FUNC(sub_82C33058);
PPC_FUNC_IMPL(__imp__sub_82C33058) {
	PPC_FUNC_PROLOGUE();
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// b 0x82c32fb8
	sub_82C32FB8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C33064"))) PPC_WEAK_FUNC(sub_82C33064);
PPC_FUNC_IMPL(__imp__sub_82C33064) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C33068"))) PPC_WEAK_FUNC(sub_82C33068);
PPC_FUNC_IMPL(__imp__sub_82C33068) {
	PPC_FUNC_PROLOGUE();
	// li r11,10
	ctx.r11.s64 = 10;
	// stw r11,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r11.u32);
	// lwz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82c33088
	if (!ctx.cr6.eq) goto loc_82C33088;
	// lis r11,-31974
	ctx.r11.s64 = -2095448064;
	// addi r11,r11,11828
	ctx.r11.s64 = ctx.r11.s64 + 11828;
	// b 0x82c33090
	goto loc_82C33090;
loc_82C33088:
	// lis r11,-31974
	ctx.r11.s64 = -2095448064;
	// addi r11,r11,11796
	ctx.r11.s64 = ctx.r11.s64 + 11796;
loc_82C33090:
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C33098"))) PPC_WEAK_FUNC(sub_82C33098);
PPC_FUNC_IMPL(__imp__sub_82C33098) {
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
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// bl 0x82a75988
	ctx.lr = 0x82C330C8;
	sub_82A75988(ctx, base);
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r4,12(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// bl 0x82c373b0
	ctx.lr = 0x82C330D8;
	sub_82C373B0(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x82c330f8
	if (!ctx.cr0.lt) goto loc_82C330F8;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
loc_82C330F8:
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// addi r11,r30,44
	ctx.r11.s64 = ctx.r30.s64 + 44;
	// lwz r10,48(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82c33114
	if (ctx.cr6.eq) goto loc_82C33114;
	// stw r31,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r31.u32);
	// b 0x82c33118
	goto loc_82C33118;
loc_82C33114:
	// stw r31,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r31.u32);
loc_82C33118:
	// stw r31,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r31.u32);
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

__attribute__((alias("__imp__sub_82C33134"))) PPC_WEAK_FUNC(sub_82C33134);
PPC_FUNC_IMPL(__imp__sub_82C33134) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C33138"))) PPC_WEAK_FUNC(sub_82C33138);
PPC_FUNC_IMPL(__imp__sub_82C33138) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x82C33140;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r4,52(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r30,r3,52
	ctx.r30.s64 = ctx.r3.s64 + 52;
	// li r28,0
	ctx.r28.s64 = 0;
loc_82C33154:
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82c331a4
	if (ctx.cr6.eq) goto loc_82C331A4;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r11,259
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 259, ctx.xer);
	// beq cr6,0x82c331a4
	if (ctx.cr6.eq) goto loc_82C331A4;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82c33194
	if (ctx.cr6.eq) goto loc_82C33194;
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82c33188
	if (!ctx.cr6.eq) goto loc_82C33188;
	// stw r28,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r28.u32);
loc_82C33188:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// stw r28,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r28.u32);
loc_82C33194:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c33098
	ctx.lr = 0x82C3319C;
	sub_82C33098(ctx, base);
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// b 0x82c33154
	goto loc_82C33154;
loc_82C331A4:
	// lwz r4,44(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// addi r29,r31,44
	ctx.r29.s64 = ctx.r31.s64 + 44;
loc_82C331AC:
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82c332e8
	if (ctx.cr6.eq) goto loc_82C332E8;
	// lwz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmpwi cr6,r11,259
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 259, ctx.xer);
	// beq cr6,0x82c332e8
	if (ctx.cr6.eq) goto loc_82C332E8;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r11,8(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82c331f0
	if (ctx.cr6.eq) goto loc_82C331F0;
	// lwz r8,4(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x82c331e4
	if (!ctx.cr6.eq) goto loc_82C331E4;
	// stw r28,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r28.u32);
loc_82C331E4:
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r8,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r8.u32);
	// stw r28,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r28.u32);
loc_82C331F0:
	// lwz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82c332d8
	if (!ctx.cr6.eq) goto loc_82C332D8;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lbz r9,60(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 60);
	// lwz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lbz r10,140(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 140);
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82c3321c
	if (ctx.cr6.eq) goto loc_82C3321C;
	// stb r10,60(r31)
	PPC_STORE_U8(ctx.r31.u32 + 60, ctx.r10.u8);
loc_82C3321C:
	// lhz r10,62(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 62);
	// cmplwi cr6,r10,2048
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 2048, ctx.xer);
	// blt cr6,0x82c3322c
	if (ctx.cr6.lt) goto loc_82C3322C;
	// sth r28,62(r31)
	PPC_STORE_U16(ctx.r31.u32 + 62, ctx.r28.u16);
loc_82C3322C:
	// lhz r10,-2(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + -2);
	// lis r9,1
	ctx.r9.s64 = 65536;
	// lbz r8,60(r31)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r31.u32 + 60);
	// li r7,259
	ctx.r7.s64 = 259;
	// rlwimi r10,r8,12,0,19
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r8.u32, 12) & 0xFFFFF000) | (ctx.r10.u64 & 0xFFFFFFFF00000FFF);
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// sth r10,-2(r11)
	PPC_STORE_U16(ctx.r11.u32 + -2, ctx.r10.u16);
	// lhz r10,62(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 62);
	// rlwimi r8,r10,1,20,30
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r10.u32, 1) & 0xFFE) | (ctx.r8.u64 & 0xFFFFFFFFFFFFF001);
	// sth r8,-2(r11)
	PPC_STORE_U16(ctx.r11.u32 + -2, ctx.r8.u16);
	// lwz r8,4(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lhz r10,62(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 62);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// sth r10,62(r31)
	PPC_STORE_U16(ctx.r31.u32 + 62, ctx.r10.u16);
	// lhz r10,-2(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + -2);
	// lwz r8,212(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 212);
	// rlwinm r8,r8,0,12,15
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xF0000;
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// cntlzw r9,r9
	ctx.r9.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwimi r10,r9,27,31,31
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r9.u32, 27) & 0x1) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFFFE);
	// sth r10,-2(r11)
	PPC_STORE_U16(ctx.r11.u32 + -2, ctx.r10.u16);
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// stw r7,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r7.u32);
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// stw r28,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r28.u32);
	// stw r28,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r28.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82c332ac
	if (ctx.cr6.eq) goto loc_82C332AC;
	// stw r4,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r4.u32);
	// b 0x82c332b0
	goto loc_82C332B0;
loc_82C332AC:
	// stw r4,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r4.u32);
loc_82C332B0:
	// stw r4,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r4.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r8,240(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 240);
	// lwz r9,0(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// slw r10,r10,r9
	ctx.r10.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r9.u8 & 0x3F));
	// or r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 | ctx.r8.u64;
	// stw r10,240(r11)
	PPC_STORE_U32(ctx.r11.u32 + 240, ctx.r10.u32);
	// b 0x82c332e0
	goto loc_82C332E0;
loc_82C332D8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c33098
	ctx.lr = 0x82C332E0;
	sub_82C33098(ctx, base);
loc_82C332E0:
	// lwz r4,0(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// b 0x82c331ac
	goto loc_82C331AC;
loc_82C332E8:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C332F4"))) PPC_WEAK_FUNC(sub_82C332F4);
PPC_FUNC_IMPL(__imp__sub_82C332F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C332F8"))) PPC_WEAK_FUNC(sub_82C332F8);
PPC_FUNC_IMPL(__imp__sub_82C332F8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7658
	ctx.lr = 0x82C33300;
	__savegprlr_20(ctx, base);
	// stfd f31,-112(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -112, ctx.f31.u64);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r26,0
	ctx.r26.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r5,32
	ctx.r5.s64 = 32;
	// stw r26,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r26.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// mr r23,r26
	ctx.r23.u64 = ctx.r26.u64;
	// mr r21,r26
	ctx.r21.u64 = ctx.r26.u64;
	// bl 0x82fa7cf0
	ctx.lr = 0x82C3332C;
	sub_82FA7CF0(ctx, base);
	// lwz r3,76(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// lwz r20,68(r31)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// lwz r24,72(r31)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// bl 0x82c38238
	ctx.lr = 0x82C3333C;
	sub_82C38238(ctx, base);
	// lwz r4,52(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// addi r27,r31,52
	ctx.r27.s64 = ctx.r31.s64 + 52;
	// b 0x82c3338c
	goto loc_82C3338C;
loc_82C33348:
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r11,259
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 259, ctx.xer);
	// beq cr6,0x82c33394
	if (ctx.cr6.eq) goto loc_82C33394;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82c33380
	if (ctx.cr6.eq) goto loc_82C33380;
	// lwz r10,4(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82c33374
	if (!ctx.cr6.eq) goto loc_82C33374;
	// stw r26,4(r27)
	PPC_STORE_U32(ctx.r27.u32 + 4, ctx.r26.u32);
loc_82C33374:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r10.u32);
	// stw r26,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r26.u32);
loc_82C33380:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c33098
	ctx.lr = 0x82C33388;
	sub_82C33098(ctx, base);
	// lwz r4,0(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
loc_82C3338C:
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82c33348
	if (!ctx.cr6.eq) goto loc_82C33348;
loc_82C33394:
	// lwz r28,44(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// addi r25,r31,44
	ctx.r25.s64 = ctx.r31.s64 + 44;
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82c333ac
	if (ctx.cr6.eq) goto loc_82C333AC;
	// lwz r30,0(r28)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
loc_82C333AC:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82c377c0
	ctx.lr = 0x82C333B4;
	sub_82C377C0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r22,1
	ctx.r22.s64 = 1;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82c333d0
	if (ctx.cr6.eq) goto loc_82C333D0;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpwi cr6,r11,259
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 259, ctx.xer);
	// bne cr6,0x82c33424
	if (!ctx.cr6.eq) goto loc_82C33424;
loc_82C333D0:
	// cmplwi cr6,r29,1
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 1, ctx.xer);
	// bgt cr6,0x82c33424
	if (ctx.cr6.gt) goto loc_82C33424;
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82c33424
	if (!ctx.cr6.eq) goto loc_82C33424;
	// lwz r3,60(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// stw r22,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r22.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,92(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82C333FC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,60(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82C33418;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// blt 0x82c33424
	if (ctx.cr0.lt) goto loc_82C33424;
	// stw r26,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r26.u32);
loc_82C33424:
	// lis r11,-32233
	ctx.r11.s64 = -2112421888;
	// lwz r10,68(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lfs f31,24436(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24436);
	ctx.f31.f64 = double(temp.f32);
	// bne cr6,0x82c33498
	if (!ctx.cr6.eq) goto loc_82C33498;
	// cmplwi cr6,r29,2
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 2, ctx.xer);
	// bgt cr6,0x82c33450
	if (ctx.cr6.gt) goto loc_82C33450;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// stw r26,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r26.u32);
	// lfs f1,-23072(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -23072);
	ctx.f1.f64 = double(temp.f32);
	// b 0x82c33474
	goto loc_82C33474;
loc_82C33450:
	// cmplwi cr6,r29,9
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 9, ctx.xer);
	// blt cr6,0x82c3346c
	if (ctx.cr6.lt) goto loc_82C3346C;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r10,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r10.u32);
	// lfs f1,5020(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5020);
	ctx.f1.f64 = double(temp.f32);
	// b 0x82c33474
	goto loc_82C33474;
loc_82C3346C:
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// stw r22,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r22.u32);
loc_82C33474:
	// lwz r11,72(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// cmpw cr6,r24,r11
	ctx.cr6.compare<int32_t>(ctx.r24.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x82c33498
	if (ctx.cr6.eq) goto loc_82C33498;
	// lwz r3,60(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,104(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 104);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82C33498;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82C33498:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82c33578
	if (ctx.cr6.eq) goto loc_82C33578;
loc_82C334A0:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpwi cr6,r11,259
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 259, ctx.xer);
	// beq cr6,0x82c33578
	if (ctx.cr6.eq) goto loc_82C33578;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplw cr6,r21,r11
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82c33578
	if (!ctx.cr6.lt) goto loc_82C33578;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82c377c0
	ctx.lr = 0x82C334C0;
	sub_82C377C0(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82c33578
	if (!ctx.cr6.lt) goto loc_82C33578;
	// li r11,259
	ctx.r11.s64 = 259;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// stw r26,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r26.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// lwz r3,60(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// stw r28,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r28.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,84(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 84);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82C33508;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// blt 0x82c33570
	if (ctx.cr0.lt) goto loc_82C33570;
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82c33538
	if (ctx.cr6.eq) goto loc_82C33538;
	// lwz r10,4(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82c3352c
	if (!ctx.cr6.eq) goto loc_82C3352C;
	// stw r26,4(r25)
	PPC_STORE_U32(ctx.r25.u32 + 4, ctx.r26.u32);
loc_82C3352C:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r10.u32);
	// stw r26,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r26.u32);
loc_82C33538:
	// stw r26,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r26.u32);
	// lwz r11,4(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82c33550
	if (ctx.cr6.eq) goto loc_82C33550;
	// stw r28,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r28.u32);
	// b 0x82c33554
	goto loc_82C33554;
loc_82C33550:
	// stw r28,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r28.u32);
loc_82C33554:
	// stw r28,4(r27)
	PPC_STORE_U32(ctx.r27.u32 + 4, ctx.r28.u32);
	// addi r21,r21,1
	ctx.r21.s64 = ctx.r21.s64 + 1;
	// lwz r28,0(r25)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82c33578
	if (ctx.cr6.eq) goto loc_82C33578;
	// lwz r30,0(r28)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// b 0x82c334a0
	goto loc_82C334A0;
loc_82C33570:
	// mr r23,r26
	ctx.r23.u64 = ctx.r26.u64;
	// stw r26,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r26.u32);
loc_82C33578:
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82c335fc
	if (!ctx.cr6.eq) goto loc_82C335FC;
	// cmpwi cr6,r20,1
	ctx.cr6.compare<int32_t>(ctx.r20.s32, 1, ctx.xer);
	// bne cr6,0x82c335fc
	if (!ctx.cr6.eq) goto loc_82C335FC;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82c377c0
	ctx.lr = 0x82C33594;
	sub_82C377C0(ctx, base);
	// cmplwi cr6,r3,3
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 3, ctx.xer);
	// blt cr6,0x82c335fc
	if (ctx.cr6.lt) goto loc_82C335FC;
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82c335f8
	if (!ctx.cr6.eq) goto loc_82C335F8;
	// lwz r3,60(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// li r5,0
	ctx.r5.s64 = 0;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,104(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 104);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82C335C4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// blt 0x82c335f8
	if (ctx.cr0.lt) goto loc_82C335F8;
	// lwz r3,60(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r22,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r22.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,76(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82C335EC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// blt 0x82c335f8
	if (ctx.cr0.lt) goto loc_82C335F8;
	// stw r22,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r22.u32);
loc_82C335F8:
	// stw r26,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r26.u32);
loc_82C335FC:
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// lfd f31,-112(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -112);
	// b 0x82fa76a8
	__restgprlr_20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C3360C"))) PPC_WEAK_FUNC(sub_82C3360C);
PPC_FUNC_IMPL(__imp__sub_82C3360C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C33610"))) PPC_WEAK_FUNC(sub_82C33610);
PPC_FUNC_IMPL(__imp__sub_82C33610) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82c33620
	if (!ctx.cr6.eq) goto loc_82C33620;
	// b 0x82c332f8
	sub_82C332F8(ctx, base);
	return;
loc_82C33620:
	// b 0x82c33138
	sub_82C33138(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C33624"))) PPC_WEAK_FUNC(sub_82C33624);
PPC_FUNC_IMPL(__imp__sub_82C33624) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C33628"))) PPC_WEAK_FUNC(sub_82C33628);
PPC_FUNC_IMPL(__imp__sub_82C33628) {
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
	// bl 0x82c36eb0
	ctx.lr = 0x82C33644;
	sub_82C36EB0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82c336d8
	if (ctx.cr0.lt) goto loc_82C336D8;
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82c33684
	if (!ctx.cr6.eq) goto loc_82C33684;
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// b 0x82c3367c
	goto loc_82C3367C;
loc_82C33664:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r30,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r30.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// stw r9,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
loc_82C3367C:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82c33664
	if (!ctx.cr6.eq) goto loc_82C33664;
loc_82C33684:
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82c336d8
	if (!ctx.cr6.eq) goto loc_82C336D8;
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82c336d8
	if (ctx.cr6.eq) goto loc_82C336D8;
	// lwz r10,64(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r9,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r9.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82c336d8
	if (ctx.cr6.eq) goto loc_82C336D8;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,80(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 80);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82C336CC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82c336d8
	if (ctx.cr0.lt) goto loc_82C336D8;
	// stw r30,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r30.u32);
loc_82C336D8:
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

__attribute__((alias("__imp__sub_82C336F0"))) PPC_WEAK_FUNC(sub_82C336F0);
PPC_FUNC_IMPL(__imp__sub_82C336F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7674
	ctx.lr = 0x82C336F8;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r6,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r6.u32);
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r5,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r5.u32);
	// addi r28,r3,16
	ctx.r28.s64 = ctx.r3.s64 + 16;
	// lwz r9,24(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 24);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// li r4,24
	ctx.r4.s64 = 24;
	// lwz r5,20(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// subfic r11,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r11.s64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 & ctx.r10.u64;
	// lwz r10,28(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 28);
	// add r3,r10,r6
	ctx.r3.u64 = ctx.r10.u64 + ctx.r6.u64;
	// bl 0x82c37aa8
	ctx.lr = 0x82C33740;
	sub_82C37AA8(ctx, base);
	// mr. r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// blt 0x82c337b8
	if (ctx.cr0.lt) goto loc_82C337B8;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82c3379c
	if (!ctx.cr6.gt) goto loc_82C3379C;
	// li r30,0
	ctx.r30.s64 = 0;
loc_82C3375C:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r9,40(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mullw r10,r10,r29
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r29.s32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stwx r11,r30,r9
	PPC_STORE_U32(ctx.r30.u32 + ctx.r9.u32, ctx.r11.u32);
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// add r4,r30,r11
	ctx.r4.u64 = ctx.r30.u64 + ctx.r11.u64;
	// bl 0x82c33098
	ctx.lr = 0x82C33788;
	sub_82C33098(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82c3375c
	if (ctx.cr6.lt) goto loc_82C3375C;
loc_82C3379C:
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82c337b8
	if (!ctx.cr6.eq) goto loc_82C337B8;
	// addi r4,r31,76
	ctx.r4.s64 = ctx.r31.s64 + 76;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x82c386f8
	ctx.lr = 0x82C337B4;
	sub_82C386F8(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
loc_82C337B8:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C337C4"))) PPC_WEAK_FUNC(sub_82C337C4);
PPC_FUNC_IMPL(__imp__sub_82C337C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C337C8"))) PPC_WEAK_FUNC(sub_82C337C8);
PPC_FUNC_IMPL(__imp__sub_82C337C8) {
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
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82c33854
	if (ctx.cr6.eq) goto loc_82C33854;
	// lwz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82c33820
	if (!ctx.cr6.eq) goto loc_82C33820;
	// lwz r3,60(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82c33818
	if (ctx.cr6.eq) goto loc_82C33818;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,72(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82C33814;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r30,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r30.u32);
loc_82C33818:
	// lwz r3,76(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// bl 0x82c381c0
	ctx.lr = 0x82C33820;
	sub_82C381C0(ctx, base);
loc_82C33820:
	// lwz r3,40(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82c3383c
	if (ctx.cr6.eq) goto loc_82C3383C;
	// lis r4,24970
	ctx.r4.s64 = 1636433920;
	// ori r4,r4,3
	ctx.r4.u64 = ctx.r4.u64 | 3;
	// bl 0x82691460
	ctx.lr = 0x82C33838;
	sub_82691460(ctx, base);
	// stw r30,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r30.u32);
loc_82C3383C:
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x82c37960
	ctx.lr = 0x82C33844;
	sub_82C37960(ctx, base);
	// lis r4,24970
	ctx.r4.s64 = 1636433920;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r4,r4,32785
	ctx.r4.u64 = ctx.r4.u64 | 32785;
	// bl 0x82691460
	ctx.lr = 0x82C33854;
	sub_82691460(ctx, base);
loc_82C33854:
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

__attribute__((alias("__imp__sub_82C3386C"))) PPC_WEAK_FUNC(sub_82C3386C);
PPC_FUNC_IMPL(__imp__sub_82C3386C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C33870"))) PPC_WEAK_FUNC(sub_82C33870);
PPC_FUNC_IMPL(__imp__sub_82C33870) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7668
	ctx.lr = 0x82C33878;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// li r26,0
	ctx.r26.s64 = 0;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r30,r26
	ctx.r30.u64 = ctx.r26.u64;
	// ori r3,r3,10
	ctx.r3.u64 = ctx.r3.u64 | 10;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x82c338a8
	if (ctx.cr6.eq) goto loc_82C338A8;
	// stw r26,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r26.u32);
loc_82C338A8:
	// lwz r29,52(r24)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r24.u32 + 52);
	// b 0x82c33950
	goto loc_82C33950;
loc_82C338B0:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82c3394c
	if (ctx.cr6.eq) goto loc_82C3394C;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r8,0(r25)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// subf r9,r10,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r10.s64;
	// subf r8,r30,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r30.s64;
	// addi r31,r9,2
	ctx.r31.s64 = ctx.r9.s64 + 2;
	// cmplw cr6,r31,r8
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r8.u32, ctx.xer);
	// bgt cr6,0x82c33984
	if (ctx.cr6.gt) goto loc_82C33984;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// add r3,r30,r27
	ctx.r3.u64 = ctx.r30.u64 + ctx.r27.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r4,r11,-2
	ctx.r4.s64 = ctx.r11.s64 + -2;
	// bl 0x82fa77c0
	ctx.lr = 0x82C338F8;
	sub_82FA77C0(ctx, base);
	// add r30,r31,r30
	ctx.r30.u64 = ctx.r31.u64 + ctx.r30.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82c33914
	if (ctx.cr6.eq) goto loc_82C33914;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
loc_82C33914:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r9,r31,-2
	ctx.r9.s64 = ctx.r31.s64 + -2;
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82c33934
	if (!ctx.cr6.lt) goto loc_82C33934;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
loc_82C33934:
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82c33950
	if (!ctx.cr6.eq) goto loc_82C33950;
	// stw r26,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r26.u32);
loc_82C3394C:
	// lwz r29,4(r29)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
loc_82C33950:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x82c338b0
	if (!ctx.cr6.eq) goto loc_82C338B0;
	// lwz r10,4(r24)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + 4);
	// li r9,1
	ctx.r9.s64 = 1;
	// lwz r11,32(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 32);
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r8,240(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 240);
	// slw r10,r9,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r10.u8 & 0x3F));
	// andc r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 & ~ctx.r10.u64;
	// stw r10,240(r11)
	PPC_STORE_U32(ctx.r11.u32 + 240, ctx.r10.u32);
loc_82C33978:
	// stw r30,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r30.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82fa76b8
	__restgprlr_24(ctx, base);
	return;
loc_82C33984:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x82c33978
	if (!ctx.cr6.eq) goto loc_82C33978;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// mr r30,r31
	ctx.r30.u64 = ctx.r31.u64;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x82c33978
	goto loc_82C33978;
}

__attribute__((alias("__imp__sub_82C3399C"))) PPC_WEAK_FUNC(sub_82C3399C);
PPC_FUNC_IMPL(__imp__sub_82C3399C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C339A0"))) PPC_WEAK_FUNC(sub_82C339A0);
PPC_FUNC_IMPL(__imp__sub_82C339A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7674
	ctx.lr = 0x82C339A8;
	__savegprlr_27(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r10,r1,84
	ctx.r10.s64 = ctx.r1.s64 + 84;
	// lwz r9,36(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// lis r8,-32768
	ctx.r8.s64 = -2147483648;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// ori r3,r8,16385
	ctx.r3.u64 = ctx.r8.u64 | 16385;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r30,1
	ctx.r30.s64 = 1;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// stw r30,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r30.u32);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// beq cr6,0x82c33a98
	if (ctx.cr6.eq) goto loc_82C33A98;
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// addi r29,r31,60
	ctx.r29.s64 = ctx.r31.s64 + 60;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82c33a1c
	if (ctx.cr6.eq) goto loc_82C33A1C;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82c33a94
	if (ctx.cr6.eq) goto loc_82C33A94;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82C33A18;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82c33a94
	goto loc_82C33A94;
loc_82C33A1C:
	// li r5,16
	ctx.r5.s64 = 16;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,98
	ctx.r3.s64 = ctx.r1.s64 + 98;
	// bl 0x82fa7cf0
	ctx.lr = 0x82C33A2C;
	sub_82FA7CF0(ctx, base);
	// li r10,16000
	ctx.r10.s64 = 16000;
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// li r9,16
	ctx.r9.s64 = 16;
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// li r8,2
	ctx.r8.s64 = 2;
	// li r10,32000
	ctx.r10.s64 = 32000;
	// sth r30,96(r1)
	PPC_STORE_U16(ctx.r1.u32 + 96, ctx.r30.u16);
	// sth r30,98(r1)
	PPC_STORE_U16(ctx.r1.u32 + 98, ctx.r30.u16);
	// sth r9,110(r1)
	PPC_STORE_U16(ctx.r1.u32 + 110, ctx.r9.u16);
	// sth r8,108(r1)
	PPC_STORE_U16(ctx.r1.u32 + 108, ctx.r8.u16);
	// stw r10,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// lwz r27,60(r11)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// lwz r28,0(r27)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// bl 0x82c38878
	ctx.lr = 0x82C33A64;
	sub_82C38878(ctx, base);
	// lwz r7,32(r28)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r28.u32 + 32);
	// lis r11,-32249
	ctx.r11.s64 = -2113470464;
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lfs f1,27164(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 27164);
	ctx.f1.f64 = double(temp.f32);
	// addi r9,r1,88
	ctx.r9.s64 = ctx.r1.s64 + 88;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// bctrl 
	ctx.lr = 0x82C33A94;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82C33A94:
	// stw r30,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r30.u32);
loc_82C33A98:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82fa76c4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C33AA0"))) PPC_WEAK_FUNC(sub_82C33AA0);
PPC_FUNC_IMPL(__imp__sub_82C33AA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7670
	ctx.lr = 0x82C33AA8;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// li r29,0
	ctx.r29.s64 = 0;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82c33ad4
	if (!ctx.cr6.eq) goto loc_82C33AD4;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16385
	ctx.r3.u64 = ctx.r3.u64 | 16385;
	// b 0x82c33b38
	goto loc_82C33B38;
loc_82C33AD4:
	// lwz r11,8(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// stw r29,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r29.u32);
	// addi r31,r11,2
	ctx.r31.s64 = ctx.r11.s64 + 2;
	// divwu. r27,r10,r31
	ctx.r27.u32 = ctx.r10.u32 / ctx.r31.u32;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// twllei r31,0
	if (ctx.r31.u32 <= 0) __builtin_debugtrap();
	// beq 0x82c33b38
	if (ctx.cr0.eq) goto loc_82C33B38;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
loc_82C33AFC:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lwz r3,76(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 76);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x82c384b0
	ctx.lr = 0x82C33B0C;
	sub_82C384B0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82c33b38
	if (ctx.cr0.lt) goto loc_82C33B38;
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// beq cr6,0x82c33b38
	if (ctx.cr6.eq) goto loc_82C33B38;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// add r28,r28,r31
	ctx.r28.u64 = ctx.r28.u64 + ctx.r31.u64;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// cmplw cr6,r29,r27
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r27.u32, ctx.xer);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// blt cr6,0x82c33afc
	if (ctx.cr6.lt) goto loc_82C33AFC;
loc_82C33B38:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82fa76c0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C33B40"))) PPC_WEAK_FUNC(sub_82C33B40);
PPC_FUNC_IMPL(__imp__sub_82C33B40) {
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
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82c33b78
	if (!ctx.cr6.eq) goto loc_82C33B78;
	// lwz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82c33b78
	if (!ctx.cr6.eq) goto loc_82C33B78;
	// lwz r3,76(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 76);
	// bl 0x82c38640
	ctx.lr = 0x82C33B78;
	sub_82C38640(ctx, base);
loc_82C33B78:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c36e88
	ctx.lr = 0x82C33B80;
	sub_82C36E88(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge 0x82c33b90
	if (!ctx.cr0.lt) goto loc_82C33B90;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c33628
	ctx.lr = 0x82C33B90;
	sub_82C33628(ctx, base);
loc_82C33B90:
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

__attribute__((alias("__imp__sub_82C33BAC"))) PPC_WEAK_FUNC(sub_82C33BAC);
PPC_FUNC_IMPL(__imp__sub_82C33BAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C33BB0"))) PPC_WEAK_FUNC(sub_82C33BB0);
PPC_FUNC_IMPL(__imp__sub_82C33BB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa766c
	ctx.lr = 0x82C33BB8;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// lis r4,24970
	ctx.r4.s64 = 1636433920;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r27,0
	ctx.r27.s64 = 0;
	// ori r4,r4,32785
	ctx.r4.u64 = ctx.r4.u64 | 32785;
	// li r3,80
	ctx.r3.s64 = 80;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// mr r26,r27
	ctx.r26.u64 = ctx.r27.u64;
	// bl 0x82691410
	ctx.lr = 0x82C33BE4;
	sub_82691410(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82c33c6c
	if (ctx.cr0.eq) goto loc_82C33C6C;
	// lis r11,-31974
	ctx.r11.s64 = -2095448064;
	// stw r29,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r29.u32);
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r30,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r30.u32);
	// addi r11,r11,11740
	ctx.r11.s64 = ctx.r11.s64 + 11740;
	// stw r27,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r27.u32);
	// li r9,10
	ctx.r9.s64 = 10;
	// stw r10,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r10.u32);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// cmpwi cr6,r30,1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 1, ctx.xer);
	// stw r9,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r9.u32);
	// stw r27,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r27.u32);
	// stw r28,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r28.u32);
	// bne cr6,0x82c33c44
	if (!ctx.cr6.eq) goto loc_82C33C44;
	// lwz r4,72(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 72);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82c33c4c
	if (ctx.cr6.eq) goto loc_82C33C4C;
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82C33C40;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82c33c4c
	goto loc_82C33C4C;
loc_82C33C44:
	// li r11,255
	ctx.r11.s64 = 255;
	// stb r11,60(r31)
	PPC_STORE_U8(ctx.r31.u32 + 60, ctx.r11.u8);
loc_82C33C4C:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lis r4,24970
	ctx.r4.s64 = 1636433920;
	// ori r4,r4,3
	ctx.r4.u64 = ctx.r4.u64 | 3;
	// rlwinm r3,r11,3,0,28
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// bl 0x82691410
	ctx.lr = 0x82C33C60;
	sub_82691410(ctx, base);
	// stw r3,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82c33c80
	if (!ctx.cr0.eq) goto loc_82C33C80;
loc_82C33C6C:
	// lis r26,-32761
	ctx.r26.s64 = -2147024896;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r26,r26,14
	ctx.r26.u64 = ctx.r26.u64 | 14;
	// bl 0x82c337c8
	ctx.lr = 0x82C33C7C;
	sub_82C337C8(ctx, base);
	// mr r31,r27
	ctx.r31.u64 = ctx.r27.u64;
loc_82C33C80:
	// stw r31,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r31.u32);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82fa76bc
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C33C90"))) PPC_WEAK_FUNC(sub_82C33C90);
PPC_FUNC_IMPL(__imp__sub_82C33C90) {
	PPC_FUNC_PROLOGUE();
	// clrlwi. r5,r5,24
	ctx.r5.u64 = ctx.r5.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bne 0x82c33ca0
	if (!ctx.cr0.eq) goto loc_82C33CA0;
	// li r5,0
	ctx.r5.s64 = 0;
	// b 0x82c33bb0
	sub_82C33BB0(ctx, base);
	return;
loc_82C33CA0:
	// b 0x82c33bb0
	sub_82C33BB0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C33CA4"))) PPC_WEAK_FUNC(sub_82C33CA4);
PPC_FUNC_IMPL(__imp__sub_82C33CA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C33CA8"))) PPC_WEAK_FUNC(sub_82C33CA8);
PPC_FUNC_IMPL(__imp__sub_82C33CA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32061
	ctx.r11.s64 = -2101149696;
	// addi r3,r11,15504
	ctx.r3.s64 = ctx.r11.s64 + 15504;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C33CB4"))) PPC_WEAK_FUNC(sub_82C33CB4);
PPC_FUNC_IMPL(__imp__sub_82C33CB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C33CB8"))) PPC_WEAK_FUNC(sub_82C33CB8);
PPC_FUNC_IMPL(__imp__sub_82C33CB8) {
	PPC_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7674
	ctx.lr = 0x82C33CC0;
	__savegprlr_27(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmpwi cr6,r4,1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 1, ctx.xer);
	// bne cr6,0x82c33d40
	if (!ctx.cr6.eq) goto loc_82C33D40;
	// li r9,4
	ctx.r9.s64 = 4;
	// lwz r31,292(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 292);
	// addi r10,r5,87
	ctx.r10.s64 = ctx.r5.s64 + 87;
	// addi r7,r11,300
	ctx.r7.s64 = ctx.r11.s64 + 300;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r29,r11,348
	ctx.r29.s64 = ctx.r11.s64 + 348;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// addi r9,r11,84
	ctx.r9.s64 = ctx.r11.s64 + 84;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r10,4
	ctx.r10.s64 = 4;
	// add r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 + ctx.r11.u64;
loc_82C33CFC:
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82c33d18
	if (ctx.cr6.eq) goto loc_82C33D18;
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82c33d18
	if (ctx.cr6.eq) goto loc_82C33D18;
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
loc_82C33D18:
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// bdnz 0x82c33cfc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82C33CFC;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82c33d50
	if (ctx.cr6.eq) goto loc_82C33D50;
	// divwu r11,r31,r4
	ctx.r11.u32 = ctx.r31.u32 / ctx.r4.u32;
	// twllei r4,0
	if (ctx.r4.u32 <= 0) __builtin_debugtrap();
	// mullw r11,r11,r4
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r4.s32);
	// subf r31,r11,r31
	ctx.r31.s64 = ctx.r31.s64 - ctx.r11.s64;
	// b 0x82c33d50
	goto loc_82C33D50;
loc_82C33D40:
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r7,r11,396
	ctx.r7.s64 = ctx.r11.s64 + 396;
	// addi r29,r11,804
	ctx.r29.s64 = ctx.r11.s64 + 804;
	// li r10,34
	ctx.r10.s64 = 34;
loc_82C33D50:
	// mulli r11,r10,12
	ctx.r11.s64 = ctx.r10.s64 * 12;
	// add r28,r11,r7
	ctx.r28.u64 = ctx.r11.u64 + ctx.r7.u64;
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// cmplw cr6,r7,r28
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r28.u32, ctx.xer);
	// bge cr6,0x82c33d84
	if (!ctx.cr6.lt) goto loc_82C33D84;
	// rlwinm r8,r5,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
loc_82C33D68:
	// add r9,r8,r11
	ctx.r9.u64 = ctx.r8.u64 + ctx.r11.u64;
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// cmplw cr6,r11,r28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, ctx.xer);
	// lwz r4,0(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// neg r4,r4
	ctx.r4.s64 = -ctx.r4.s64;
	// stw r4,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r4.u32);
	// blt cr6,0x82c33d68
	if (ctx.cr6.lt) goto loc_82C33D68;
loc_82C33D84:
	// li r30,0
	ctx.r30.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82c33e08
	if (ctx.cr6.eq) goto loc_82C33E08;
loc_82C33D94:
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x82c33df8
	if (ctx.cr6.eq) goto loc_82C33DF8;
	// add r11,r4,r31
	ctx.r11.u64 = ctx.r4.u64 + ctx.r31.u64;
	// rlwinm r8,r5,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// divwu r9,r11,r10
	ctx.r9.u32 = ctx.r11.u32 / ctx.r10.u32;
	// twllei r10,0
	if (ctx.r10.u32 <= 0) __builtin_debugtrap();
	// mullw r9,r9,r10
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r10.s32);
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// mulli r9,r11,3
	ctx.r9.s64 = ctx.r11.s64 * 3;
	// add r9,r9,r5
	ctx.r9.u64 = ctx.r9.u64 + ctx.r5.u64;
	// mulli r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 * 12;
	// rlwinm r27,r9,2,0,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// lwzx r27,r27,r29
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r29.u32);
	// lwzx r9,r8,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r11.u32);
	// cmpw cr6,r9,r27
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r27.s32, ctx.xer);
	// bge cr6,0x82c33dec
	if (!ctx.cr6.lt) goto loc_82C33DEC;
	// addic. r9,r9,1
	ctx.xer.ca = ctx.r9.u32 > 4294967294;
	ctx.r9.s64 = ctx.r9.s64 + 1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// stwx r9,r8,r11
	PPC_STORE_U32(ctx.r8.u32 + ctx.r11.u32, ctx.r9.u32);
	// ble 0x82c33dec
	if (!ctx.cr0.gt) goto loc_82C33DEC;
	// addi r6,r6,-1
	ctx.r6.s64 = ctx.r6.s64 + -1;
loc_82C33DEC:
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// cmplw cr6,r4,r10
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82c33d94
	if (ctx.cr6.lt) goto loc_82C33D94;
loc_82C33DF8:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82c33e08
	if (ctx.cr6.eq) goto loc_82C33E08;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x82c33d84
	if (!ctx.cr6.eq) goto loc_82C33D84;
loc_82C33E08:
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// cmplw cr6,r7,r28
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r28.u32, ctx.xer);
	// bge cr6,0x82c33e40
	if (!ctx.cr6.lt) goto loc_82C33E40;
	// rlwinm r10,r5,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
loc_82C33E18:
	// lwzx r9,r10,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bge cr6,0x82c33e2c
	if (!ctx.cr6.lt) goto loc_82C33E2C;
	// li r9,0
	ctx.r9.s64 = 0;
	// stwx r9,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u32);
loc_82C33E2C:
	// lwzx r9,r10,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// add r3,r3,r9
	ctx.r3.u64 = ctx.r3.u64 + ctx.r9.u64;
	// cmplw cr6,r11,r28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, ctx.xer);
	// blt cr6,0x82c33e18
	if (ctx.cr6.lt) goto loc_82C33E18;
loc_82C33E40:
	// b 0x82fa76c4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C33E44"))) PPC_WEAK_FUNC(sub_82C33E44);
PPC_FUNC_IMPL(__imp__sub_82C33E44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C33E48"))) PPC_WEAK_FUNC(sub_82C33E48);
PPC_FUNC_IMPL(__imp__sub_82C33E48) {
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
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplwi cr6,r4,1
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 1, ctx.xer);
	// blt cr6,0x82c33eac
	if (ctx.cr6.lt) goto loc_82C33EAC;
	// beq cr6,0x82c33e88
	if (ctx.cr6.eq) goto loc_82C33E88;
	// cmplwi cr6,r4,3
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 3, ctx.xer);
	// blt cr6,0x82c33e7c
	if (ctx.cr6.lt) goto loc_82C33E7C;
	// lis r31,-32761
	ctx.r31.s64 = -2147024896;
	// ori r31,r31,87
	ctx.r31.u64 = ctx.r31.u64 | 87;
	// b 0x82c33eb4
	goto loc_82C33EB4;
loc_82C33E7C:
	// addi r3,r3,244
	ctx.r3.s64 = ctx.r3.s64 + 244;
	// bl 0x831791b4
	ctx.lr = 0x82C33E84;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// b 0x82c33eb4
	goto loc_82C33EB4;
loc_82C33E88:
	// addi r3,r3,244
	ctx.r3.s64 = ctx.r3.s64 + 244;
	// bl 0x83179214
	ctx.lr = 0x82C33E90;
	__imp__RtlTryEnterCriticalSection(ctx, base);
	// addi r11,r3,-1
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// lis r10,-32768
	ctx.r10.s64 = -2147483648;
	// subfic r11,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r11.s64;
	// ori r10,r10,16388
	ctx.r10.u64 = ctx.r10.u64 | 16388;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r31,r11,r10
	ctx.r31.u64 = ctx.r11.u64 & ctx.r10.u64;
	// b 0x82c33eb4
	goto loc_82C33EB4;
loc_82C33EAC:
	// addi r3,r3,244
	ctx.r3.s64 = ctx.r3.s64 + 244;
	// bl 0x831791a4
	ctx.lr = 0x82C33EB4;
	__imp__RtlEnterCriticalSection(ctx, base);
loc_82C33EB4:
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

__attribute__((alias("__imp__sub_82C33ECC"))) PPC_WEAK_FUNC(sub_82C33ECC);
PPC_FUNC_IMPL(__imp__sub_82C33ECC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C33ED0"))) PPC_WEAK_FUNC(sub_82C33ED0);
PPC_FUNC_IMPL(__imp__sub_82C33ED0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7674
	ctx.lr = 0x82C33ED8;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r27,r3,244
	ctx.r27.s64 = ctx.r3.s64 + 244;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// bl 0x831791a4
	ctx.lr = 0x82C33EF8;
	__imp__RtlEnterCriticalSection(ctx, base);
	// addi r11,r30,21
	ctx.r11.s64 = ctx.r30.s64 + 21;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r31
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82c33f18
	if (!ctx.cr6.eq) goto loc_82C33F18;
	// lis r31,-32761
	ctx.r31.s64 = -2147024896;
	// ori r31,r31,87
	ctx.r31.u64 = ctx.r31.u64 | 87;
	// b 0x82c33f28
	goto loc_82C33F28;
loc_82C33F18:
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82c36398
	ctx.lr = 0x82C33F24;
	sub_82C36398(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_82C33F28:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x831791b4
	ctx.lr = 0x82C33F30;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C33F3C"))) PPC_WEAK_FUNC(sub_82C33F3C);
PPC_FUNC_IMPL(__imp__sub_82C33F3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C33F40"))) PPC_WEAK_FUNC(sub_82C33F40);
PPC_FUNC_IMPL(__imp__sub_82C33F40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7674
	ctx.lr = 0x82C33F48;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r27,r3,244
	ctx.r27.s64 = ctx.r3.s64 + 244;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// bl 0x831791a4
	ctx.lr = 0x82C33F68;
	__imp__RtlEnterCriticalSection(ctx, base);
	// addi r11,r30,21
	ctx.r11.s64 = ctx.r30.s64 + 21;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r31
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82c33f88
	if (!ctx.cr6.eq) goto loc_82C33F88;
	// lis r31,-32761
	ctx.r31.s64 = -2147024896;
	// ori r31,r31,87
	ctx.r31.u64 = ctx.r31.u64 | 87;
	// b 0x82c33f98
	goto loc_82C33F98;
loc_82C33F88:
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82c364b0
	ctx.lr = 0x82C33F94;
	sub_82C364B0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_82C33F98:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x831791b4
	ctx.lr = 0x82C33FA0;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C33FAC"))) PPC_WEAK_FUNC(sub_82C33FAC);
PPC_FUNC_IMPL(__imp__sub_82C33FAC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C33FB0"))) PPC_WEAK_FUNC(sub_82C33FB0);
PPC_FUNC_IMPL(__imp__sub_82C33FB0) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r3,296
	ctx.r11.s64 = ctx.r3.s64 + 296;
loc_82C33FB4:
	// mfmsr r9
	ctx.r9.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r11
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r11.u32);
	ctx.r10.u64 = __builtin_bswap32(ctx.reserved.u32);
	// stwcx. r4,0,r11
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r11.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r4.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x82c33fb4
	if (!ctx.cr0.eq) goto loc_82C33FB4;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C33FD4"))) PPC_WEAK_FUNC(sub_82C33FD4);
PPC_FUNC_IMPL(__imp__sub_82C33FD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C33FD8"))) PPC_WEAK_FUNC(sub_82C33FD8);
PPC_FUNC_IMPL(__imp__sub_82C33FD8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x82C33FE0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r28,r3,244
	ctx.r28.s64 = ctx.r3.s64 + 244;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// bl 0x831791a4
	ctx.lr = 0x82C33FFC;
	__imp__RtlEnterCriticalSection(ctx, base);
	// li r11,4
	ctx.r11.s64 = 4;
	// addi r10,r31,84
	ctx.r10.s64 = ctx.r31.s64 + 84;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_82C34008:
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82c3401c
	if (!ctx.cr6.eq) goto loc_82C3401C;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
loc_82C3401C:
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x82c34008
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82C34008;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82c3403c
	if (!ctx.cr6.gt) goto loc_82C3403C;
	// lis r30,-32768
	ctx.r30.s64 = -2147483648;
	// ori r30,r30,16389
	ctx.r30.u64 = ctx.r30.u64 | 16389;
	// b 0x82c34060
	goto loc_82C34060;
loc_82C3403C:
	// addi r11,r29,21
	ctx.r11.s64 = ctx.r29.s64 + 21;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r31
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// bl 0x82c36a38
	ctx.lr = 0x82C34050;
	sub_82C36A38(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt 0x82c34060
	if (ctx.cr0.lt) goto loc_82C34060;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,288(r31)
	PPC_STORE_U32(ctx.r31.u32 + 288, ctx.r11.u32);
loc_82C34060:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x831791b4
	ctx.lr = 0x82C34068;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C34074"))) PPC_WEAK_FUNC(sub_82C34074);
PPC_FUNC_IMPL(__imp__sub_82C34074) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C34078"))) PPC_WEAK_FUNC(sub_82C34078);
PPC_FUNC_IMPL(__imp__sub_82C34078) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x82C34080;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r31,r3,244
	ctx.r31.s64 = ctx.r3.s64 + 244;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x831791a4
	ctx.lr = 0x82C34098;
	__imp__RtlEnterCriticalSection(ctx, base);
	// addi r11,r29,21
	ctx.r11.s64 = ctx.r29.s64 + 21;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r30
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// bl 0x82c36258
	ctx.lr = 0x82C340A8;
	sub_82C36258(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831791b4
	ctx.lr = 0x82C340B0;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C340BC"))) PPC_WEAK_FUNC(sub_82C340BC);
PPC_FUNC_IMPL(__imp__sub_82C340BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C340C0"))) PPC_WEAK_FUNC(sub_82C340C0);
PPC_FUNC_IMPL(__imp__sub_82C340C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x82C340C8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r30,r3,244
	ctx.r30.s64 = ctx.r3.s64 + 244;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// bl 0x831791a4
	ctx.lr = 0x82C340E4;
	__imp__RtlEnterCriticalSection(ctx, base);
	// addi r11,r29,21
	ctx.r11.s64 = ctx.r29.s64 + 21;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r31
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82c34100
	if (ctx.cr6.eq) goto loc_82C34100;
	// bl 0x82c35b50
	ctx.lr = 0x82C340FC;
	sub_82C35B50(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
loc_82C34100:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831791b4
	ctx.lr = 0x82C34108;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C34114"))) PPC_WEAK_FUNC(sub_82C34114);
PPC_FUNC_IMPL(__imp__sub_82C34114) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C34118"))) PPC_WEAK_FUNC(sub_82C34118);
PPC_FUNC_IMPL(__imp__sub_82C34118) {
	PPC_FUNC_PROLOGUE();
	// stw r4,1216(r3)
	PPC_STORE_U32(ctx.r3.u32 + 1216, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C34120"))) PPC_WEAK_FUNC(sub_82C34120);
PPC_FUNC_IMPL(__imp__sub_82C34120) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,1216(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1216);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C34128"))) PPC_WEAK_FUNC(sub_82C34128);
PPC_FUNC_IMPL(__imp__sub_82C34128) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r4,21
	ctx.r11.s64 = ctx.r4.s64 + 21;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r3
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82c34150
	if (ctx.cr6.eq) goto loc_82C34150;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82c34150
	if (ctx.cr6.eq) goto loc_82C34150;
	// lwz r3,144(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 144);
	// blr 
	return;
loc_82C34150:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C34158"))) PPC_WEAK_FUNC(sub_82C34158);
PPC_FUNC_IMPL(__imp__sub_82C34158) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7670
	ctx.lr = 0x82C34160;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r26,r3,244
	ctx.r26.s64 = ctx.r3.s64 + 244;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// bl 0x831791a4
	ctx.lr = 0x82C34184;
	__imp__RtlEnterCriticalSection(ctx, base);
	// addi r11,r30,21
	ctx.r11.s64 = ctx.r30.s64 + 21;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r31
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82c341a4
	if (!ctx.cr6.eq) goto loc_82C341A4;
	// lis r31,-32761
	ctx.r31.s64 = -2147024896;
	// ori r31,r31,87
	ctx.r31.u64 = ctx.r31.u64 | 87;
	// b 0x82c341c0
	goto loc_82C341C0;
loc_82C341A4:
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r4,-5148(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -5148);
	// bl 0x82c36840
	ctx.lr = 0x82C341BC;
	sub_82C36840(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_82C341C0:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x831791b4
	ctx.lr = 0x82C341C8;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82fa76c0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C341D4"))) PPC_WEAK_FUNC(sub_82C341D4);
PPC_FUNC_IMPL(__imp__sub_82C341D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C341D8"))) PPC_WEAK_FUNC(sub_82C341D8);
PPC_FUNC_IMPL(__imp__sub_82C341D8) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// bl 0x8317a204
	ctx.lr = 0x82C341F0;
	__imp__XAudioGetDuckerLevel(ctx, base);
	// stfs f1,0(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// li r3,0
	ctx.r3.s64 = 0;
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

__attribute__((alias("__imp__sub_82C3420C"))) PPC_WEAK_FUNC(sub_82C3420C);
PPC_FUNC_IMPL(__imp__sub_82C3420C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C34210"))) PPC_WEAK_FUNC(sub_82C34210);
PPC_FUNC_IMPL(__imp__sub_82C34210) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x82C34218;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r28,r3,244
	ctx.r28.s64 = ctx.r3.s64 + 244;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// bl 0x831791a4
	ctx.lr = 0x82C34234;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82c34288
	if (ctx.cr6.eq) goto loc_82C34288;
	// cmplwi cr6,r29,4
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 4, ctx.xer);
	// bge cr6,0x82c34288
	if (!ctx.cr6.lt) goto loc_82C34288;
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,4
	ctx.r4.s64 = 4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,60(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82C34264;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// rlwinm r11,r29,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// li r30,1
	ctx.r30.s64 = 1;
	// lfsx f13,r11,r10
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,5184(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 5184);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bgt cr6,0x82c34288
	if (ctx.cr6.gt) goto loc_82C34288;
	// li r30,0
	ctx.r30.s64 = 0;
loc_82C34288:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x831791b4
	ctx.lr = 0x82C34290;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C3429C"))) PPC_WEAK_FUNC(sub_82C3429C);
PPC_FUNC_IMPL(__imp__sub_82C3429C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C342A0"))) PPC_WEAK_FUNC(sub_82C342A0);
PPC_FUNC_IMPL(__imp__sub_82C342A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7668
	ctx.lr = 0x82C342A8;
	__savegprlr_24(ctx, base);
	// stwu r1,-304(r1)
	ea = -304 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// li r5,92
	ctx.r5.s64 = 92;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,132
	ctx.r3.s64 = ctx.r1.s64 + 132;
	// lfs f0,5184(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5184);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,128(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 128, temp.u32);
	// bl 0x82fa7cf0
	ctx.lr = 0x82C342D0;
	sub_82FA7CF0(ctx, base);
	// lis r11,-32233
	ctx.r11.s64 = -2112421888;
	// lwz r3,48(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 48);
	// li r24,0
	ctx.r24.s64 = 0;
	// stw r24,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r24.u32);
	// lfs f0,24436(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24436);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stw r3,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r3.u32);
	// stfs f0,116(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f0,120(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stfs f0,124(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82C34308;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82c390e8
	ctx.lr = 0x82C34314;
	sub_82C390E8(ctx, base);
	// mr. r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// blt 0x82c3444c
	if (ctx.cr0.lt) goto loc_82C3444C;
	// lwz r11,44(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 44);
	// li r25,1
	ctx.r25.s64 = 1;
	// mr r26,r25
	ctx.r26.u64 = ctx.r25.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82c34338
	if (ctx.cr6.eq) goto loc_82C34338;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r26,r11,1
	ctx.r26.s64 = ctx.r11.s64 + 1;
loc_82C34338:
	// mulli r29,r26,12
	ctx.r29.s64 = ctx.r26.s64 * 12;
	// lis r4,24714
	ctx.r4.s64 = 1619656704;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// ori r4,r4,8194
	ctx.r4.u64 = ctx.r4.u64 | 8194;
	// bl 0x82691410
	ctx.lr = 0x82C3434C;
	sub_82691410(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x82c34394
	if (ctx.cr0.eq) goto loc_82C34394;
	// lwz r11,44(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 44);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82c34378
	if (ctx.cr6.eq) goto loc_82C34378;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mulli r5,r10,12
	ctx.r5.s64 = ctx.r10.s64 * 12;
	// bl 0x82fa77c0
	ctx.lr = 0x82C34378;
	sub_82FA77C0(ctx, base);
loc_82C34378:
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// add r11,r29,r30
	ctx.r11.u64 = ctx.r29.u64 + ctx.r30.u64;
	// li r9,4
	ctx.r9.s64 = 4;
	// stw r10,-12(r11)
	PPC_STORE_U32(ctx.r11.u32 + -12, ctx.r10.u32);
	// stw r9,-4(r11)
	PPC_STORE_U32(ctx.r11.u32 + -4, ctx.r9.u32);
	// stw r25,-8(r11)
	PPC_STORE_U32(ctx.r11.u32 + -8, ctx.r25.u32);
	// b 0x82c3439c
	goto loc_82C3439C;
loc_82C34394:
	// lis r28,-32761
	ctx.r28.s64 = -2147024896;
	// ori r28,r28,14
	ctx.r28.u64 = ctx.r28.u64 | 14;
loc_82C3439C:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// blt cr6,0x82c3444c
	if (ctx.cr6.lt) goto loc_82C3444C;
	// lwz r3,60(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// addi r29,r31,68
	ctx.r29.s64 = ctx.r31.s64 + 68;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,3
	ctx.r8.s64 = 3;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r6,16125
	ctx.r6.s64 = 16125;
	// li r5,6
	ctx.r5.s64 = 6;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82C343D8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// blt 0x82c3443c
	if (ctx.cr0.lt) goto loc_82C3443C;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// lwz r3,60(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// stw r5,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r5.u32);
	// addi r9,r1,104
	ctx.r9.s64 = ctx.r1.s64 + 104;
	// stw r26,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r26.u32);
	// li r8,2
	ctx.r8.s64 = 2;
	// stw r25,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r25.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r24,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r24.u32);
	// li r6,16125
	ctx.r6.s64 = 16125;
	// stw r24,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r24.u32);
	// li r5,4
	ctx.r5.s64 = 4;
	// stw r25,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r25.u32);
	// addi r4,r31,64
	ctx.r4.s64 = ctx.r31.s64 + 64;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// stw r30,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r30.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82C34438;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
loc_82C3443C:
	// lis r4,24714
	ctx.r4.s64 = 1619656704;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// ori r4,r4,8194
	ctx.r4.u64 = ctx.r4.u64 | 8194;
	// bl 0x82691460
	ctx.lr = 0x82C3444C;
	sub_82691460(ctx, base);
loc_82C3444C:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82c3445c
	if (ctx.cr6.eq) goto loc_82C3445C;
	// bl 0x82c38898
	ctx.lr = 0x82C3445C;
	sub_82C38898(ctx, base);
loc_82C3445C:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// blt cr6,0x82c344d0
	if (ctx.cr6.lt) goto loc_82C344D0;
	// addi r10,r1,160
	ctx.r10.s64 = ctx.r1.s64 + 160;
	// lwz r3,64(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// lis r11,16256
	ctx.r11.s64 = 1065353216;
	// lwz r4,68(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r1,128
	ctx.r7.s64 = ctx.r1.s64 + 128;
	// li r6,6
	ctx.r6.s64 = 6;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// li r5,4
	ctx.r5.s64 = 4;
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// stw r11,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r11.u32);
	// stw r11,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r11.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,64(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82C344A4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// blt 0x82c344d0
	if (ctx.cr0.lt) goto loc_82C344D0;
	// lwz r3,64(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// li r4,4
	ctx.r4.s64 = 4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,56(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82C344CC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
loc_82C344D0:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,304
	ctx.r1.s64 = ctx.r1.s64 + 304;
	// b 0x82fa76b8
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C344DC"))) PPC_WEAK_FUNC(sub_82C344DC);
PPC_FUNC_IMPL(__imp__sub_82C344DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C344E0"))) PPC_WEAK_FUNC(sub_82C344E0);
PPC_FUNC_IMPL(__imp__sub_82C344E0) {
	PPC_FUNC_PROLOGUE();
	// lwz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82c34514
	if (ctx.cr6.eq) goto loc_82C34514;
	// addi r10,r3,100
	ctx.r10.s64 = ctx.r3.s64 + 100;
loc_82C344F4:
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// ld r8,0(r8)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r8.u32 + 0);
	// cmpld cr6,r4,r8
	ctx.cr6.compare<uint64_t>(ctx.r4.u64, ctx.r8.u64, ctx.xer);
	// beq cr6,0x82c34514
	if (ctx.cr6.eq) goto loc_82C34514;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82c344f4
	if (ctx.cr6.lt) goto loc_82C344F4;
loc_82C34514:
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x82c3452c
	if (!ctx.cr6.lt) goto loc_82C3452C;
	// addi r11,r11,25
	ctx.r11.s64 = ctx.r11.s64 + 25;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r3
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// blr 
	return;
loc_82C3452C:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C34534"))) PPC_WEAK_FUNC(sub_82C34534);
PPC_FUNC_IMPL(__imp__sub_82C34534) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C34538"))) PPC_WEAK_FUNC(sub_82C34538);
PPC_FUNC_IMPL(__imp__sub_82C34538) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa765c
	ctx.lr = 0x82C34540;
	__savegprlr_21(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r24,r3,348
	ctx.r24.s64 = ctx.r3.s64 + 348;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r22,0
	ctx.r22.s64 = 0;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// li r5,48
	ctx.r5.s64 = 48;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r21,r22
	ctx.r21.u64 = ctx.r22.u64;
	// bl 0x82a75988
	ctx.lr = 0x82C34564;
	sub_82A75988(ctx, base);
	// addi r25,r28,84
	ctx.r25.s64 = ctx.r28.s64 + 84;
	// mr r31,r24
	ctx.r31.u64 = ctx.r24.u64;
	// mr r30,r25
	ctx.r30.u64 = ctx.r25.u64;
	// li r29,4
	ctx.r29.s64 = 4;
loc_82C34574:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82c34588
	if (ctx.cr6.eq) goto loc_82C34588;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82c36898
	ctx.lr = 0x82C34588;
	sub_82C36898(ctx, base);
loc_82C34588:
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r31,r31,12
	ctx.r31.s64 = ctx.r31.s64 + 12;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// bne 0x82c34574
	if (!ctx.cr0.eq) goto loc_82C34574;
	// addi r23,r28,804
	ctx.r23.s64 = ctx.r28.s64 + 804;
	// li r5,408
	ctx.r5.s64 = 408;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82a75988
	ctx.lr = 0x82C345AC;
	sub_82A75988(ctx, base);
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// mr r29,r22
	ctx.r29.u64 = ctx.r22.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82c346f4
	if (!ctx.cr6.gt) goto loc_82C346F4;
	// addi r31,r28,100
	ctx.r31.s64 = ctx.r28.s64 + 100;
	// mr r26,r23
	ctx.r26.u64 = ctx.r23.u64;
	// li r27,-1
	ctx.r27.s64 = -1;
loc_82C345C8:
	// lwz r11,280(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 280);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82c346c4
	if (!ctx.cr6.eq) goto loc_82C346C4;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// ld r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// beq cr6,0x82c34618
	if (ctx.cr6.eq) goto loc_82C34618;
	// li r10,4
	ctx.r10.s64 = 4;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// addi r9,r3,36
	ctx.r9.s64 = ctx.r3.s64 + 36;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82C345F8:
	// lwz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82c34608
	if (ctx.cr6.lt) goto loc_82C34608;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_82C34608:
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bdnz 0x82c345f8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82C345F8;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// b 0x82c3461c
	goto loc_82C3461C;
loc_82C34618:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
loc_82C3461C:
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// addi r6,r29,1
	ctx.r6.s64 = ctx.r29.s64 + 1;
	// cmplw cr6,r6,r11
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82c346c4
	if (!ctx.cr6.lt) goto loc_82C346C4;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// addi r7,r31,4
	ctx.r7.s64 = ctx.r31.s64 + 4;
loc_82C34634:
	// li r9,4
	ctx.r9.s64 = 4;
	// lwz r10,0(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// addi r8,r10,36
	ctx.r8.s64 = ctx.r10.s64 + 36;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82C34648:
	// lwz r9,0(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82c34658
	if (ctx.cr6.lt) goto loc_82C34658;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_82C34658:
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// bdnz 0x82c34648
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82C34648;
	// ld r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// cmpldi cr6,r10,0
	ctx.cr6.compare<uint64_t>(ctx.r10.u64, 0, ctx.xer);
	// beq cr6,0x82c3467c
	if (ctx.cr6.eq) goto loc_82C3467C;
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// bge cr6,0x82c3467c
	if (!ctx.cr6.lt) goto loc_82C3467C;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
loc_82C3467C:
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// cmplw cr6,r6,r5
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r5.u32, ctx.xer);
	// blt cr6,0x82c34634
	if (ctx.cr6.lt) goto loc_82C34634;
	// cmplw cr6,r30,r29
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x82c346c4
	if (ctx.cr6.eq) goto loc_82C346C4;
	// addi r11,r30,25
	ctx.r11.s64 = ctx.r30.s64 + 25;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r11,r28
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r28.u32);
	// xor r10,r10,r3
	ctx.r10.u64 = ctx.r10.u64 ^ ctx.r3.u64;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// lwzx r10,r11,r28
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r28.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// xor r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 ^ ctx.r9.u64;
	// stwx r10,r11,r28
	PPC_STORE_U32(ctx.r11.u32 + ctx.r28.u32, ctx.r10.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// xor r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r10.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_82C346C4:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// ld r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// beq cr6,0x82c346dc
	if (ctx.cr6.eq) goto loc_82C346DC;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bl 0x82c3a1b0
	ctx.lr = 0x82C346DC;
	sub_82C3A1B0(ctx, base);
loc_82C346DC:
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r26,r26,12
	ctx.r26.s64 = ctx.r26.s64 + 12;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82c345c8
	if (ctx.cr6.lt) goto loc_82C345C8;
loc_82C346F4:
	// lis r11,-31974
	ctx.r11.s64 = -2095448064;
	// stw r22,280(r28)
	PPC_STORE_U32(ctx.r28.u32 + 280, ctx.r22.u32);
	// addi r6,r28,300
	ctx.r6.s64 = ctx.r28.s64 + 300;
	// addi r10,r11,13516
	ctx.r10.s64 = ctx.r11.s64 + 13516;
	// addi r8,r6,48
	ctx.r8.s64 = ctx.r6.s64 + 48;
	// mr r9,r22
	ctx.r9.u64 = ctx.r22.u64;
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// cmplw cr6,r6,r8
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r8.u32, ctx.xer);
	// lwz r7,12(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// bge cr6,0x82c34758
	if (!ctx.cr6.lt) goto loc_82C34758;
	// addi r5,r24,48
	ctx.r5.s64 = ctx.r24.s64 + 48;
	// subf r4,r6,r24
	ctx.r4.s64 = ctx.r24.s64 - ctx.r6.s64;
loc_82C34724:
	// add r10,r4,r11
	ctx.r10.u64 = ctx.r4.u64 + ctx.r11.u64;
	// cmplw cr6,r10,r5
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r5.u32, ctx.xer);
	// bge cr6,0x82c3474c
	if (!ctx.cr6.lt) goto loc_82C3474C;
	// rlwinm r3,r7,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r3,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r10.u32);
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stwx r10,r3,r11
	PPC_STORE_U32(ctx.r3.u32 + ctx.r11.u32, ctx.r10.u32);
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x82c34724
	if (ctx.cr6.lt) goto loc_82C34724;
loc_82C3474C:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82c34758
	if (ctx.cr6.eq) goto loc_82C34758;
	// mr r21,r9
	ctx.r21.u64 = ctx.r9.u64;
loc_82C34758:
	// lis r10,-31974
	ctx.r10.s64 = -2095448064;
	// lwz r5,292(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 292);
	// li r11,4
	ctx.r11.s64 = 4;
	// addi r8,r10,11796
	ctx.r8.s64 = ctx.r10.s64 + 11796;
	// li r31,2
	ctx.r31.s64 = 2;
	// mr r30,r22
	ctx.r30.u64 = ctx.r22.u64;
	// mr r9,r22
	ctx.r9.u64 = ctx.r22.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// mr r10,r25
	ctx.r10.u64 = ctx.r25.u64;
	// lwz r8,12(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// addi r11,r8,87
	ctx.r11.s64 = ctx.r8.s64 + 87;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
loc_82C3478C:
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82c347a8
	if (ctx.cr6.eq) goto loc_82C347A8;
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82c347a8
	if (ctx.cr6.eq) goto loc_82C347A8;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
loc_82C347A8:
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// bdnz 0x82c3478c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82C3478C;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82c347cc
	if (ctx.cr6.eq) goto loc_82C347CC;
	// divwu r11,r5,r9
	ctx.r11.u32 = ctx.r5.u32 / ctx.r9.u32;
	// twllei r9,0
	if (ctx.r9.u32 <= 0) __builtin_debugtrap();
	// mullw r11,r11,r9
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r9.s32);
	// subf r5,r11,r5
	ctx.r5.s64 = ctx.r5.s64 - ctx.r11.s64;
loc_82C347CC:
	// addi r3,r6,48
	ctx.r3.s64 = ctx.r6.s64 + 48;
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// cmplw cr6,r6,r3
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r3.u32, ctx.xer);
	// bge cr6,0x82c347fc
	if (!ctx.cr6.lt) goto loc_82C347FC;
	// rlwinm r9,r8,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
loc_82C347E0:
	// add r10,r9,r11
	ctx.r10.u64 = ctx.r9.u64 + ctx.r11.u64;
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// neg r7,r7
	ctx.r7.s64 = -ctx.r7.s64;
	// stw r7,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r7.u32);
	// blt cr6,0x82c347e0
	if (ctx.cr6.lt) goto loc_82C347E0;
loc_82C347FC:
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r7,r22
	ctx.r7.u64 = ctx.r22.u64;
loc_82C34804:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82c3485c
	if (ctx.cr6.eq) goto loc_82C3485C;
	// add r11,r7,r5
	ctx.r11.u64 = ctx.r7.u64 + ctx.r5.u64;
	// rlwinm r9,r8,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// clrlwi r11,r11,30
	ctx.r11.u64 = ctx.r11.u32 & 0x3;
	// mulli r10,r11,3
	ctx.r10.s64 = ctx.r11.s64 * 3;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// mulli r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 * 12;
	// rlwinm r29,r10,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 + ctx.r6.u64;
	// lwzx r29,r29,r24
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r24.u32);
	// lwzx r10,r9,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// cmpw cr6,r10,r29
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r29.s32, ctx.xer);
	// bge cr6,0x82c34850
	if (!ctx.cr6.lt) goto loc_82C34850;
	// addic. r10,r10,1
	ctx.xer.ca = ctx.r10.u32 > 4294967294;
	ctx.r10.s64 = ctx.r10.s64 + 1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// stwx r10,r9,r11
	PPC_STORE_U32(ctx.r9.u32 + ctx.r11.u32, ctx.r10.u32);
	// ble 0x82c34850
	if (!ctx.cr0.gt) goto loc_82C34850;
	// addi r31,r31,-1
	ctx.r31.s64 = ctx.r31.s64 + -1;
loc_82C34850:
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// cmplwi cr6,r7,4
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 4, ctx.xer);
	// blt cr6,0x82c34804
	if (ctx.cr6.lt) goto loc_82C34804;
loc_82C3485C:
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82c3486c
	if (ctx.cr6.eq) goto loc_82C3486C;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82c347fc
	if (!ctx.cr6.eq) goto loc_82C347FC;
loc_82C3486C:
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// cmplw cr6,r6,r3
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r3.u32, ctx.xer);
	// bge cr6,0x82c348ac
	if (!ctx.cr6.lt) goto loc_82C348AC;
	// rlwinm r10,r8,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
loc_82C3487C:
	// lwzx r9,r10,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bge cr6,0x82c3488c
	if (!ctx.cr6.lt) goto loc_82C3488C;
	// stwx r22,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r22.u32);
loc_82C3488C:
	// lwzx r9,r10,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// add r30,r9,r30
	ctx.r30.u64 = ctx.r9.u64 + ctx.r30.u64;
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// blt cr6,0x82c3487c
	if (ctx.cr6.lt) goto loc_82C3487C;
	// cmplw cr6,r30,r21
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r21.u32, ctx.xer);
	// ble cr6,0x82c348ac
	if (!ctx.cr6.gt) goto loc_82C348AC;
	// mr r21,r30
	ctx.r21.u64 = ctx.r30.u64;
loc_82C348AC:
	// lwz r11,296(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 296);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82c348c0
	if (!ctx.cr6.eq) goto loc_82C348C0;
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,296(r28)
	PPC_STORE_U32(ctx.r28.u32 + 296, ctx.r11.u32);
loc_82C348C0:
	// lis r11,-31974
	ctx.r11.s64 = -2095448064;
	// lwz r6,296(r28)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r28.u32 + 296);
	// addi r30,r23,408
	ctx.r30.s64 = ctx.r23.s64 + 408;
	// addi r10,r11,11828
	ctx.r10.s64 = ctx.r11.s64 + 11828;
	// addi r31,r28,396
	ctx.r31.s64 = ctx.r28.s64 + 396;
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
	// cmplw cr6,r23,r30
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, ctx.r30.u32, ctx.xer);
	// lwz r5,12(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// bge cr6,0x82c34908
	if (!ctx.cr6.lt) goto loc_82C34908;
	// rlwinm r10,r5,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
loc_82C348E8:
	// lwzx r9,r10,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// ble cr6,0x82c348fc
	if (!ctx.cr6.gt) goto loc_82C348FC;
	// li r9,1
	ctx.r9.s64 = 1;
	// stwx r9,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u32);
loc_82C348FC:
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// blt cr6,0x82c348e8
	if (ctx.cr6.lt) goto loc_82C348E8;
loc_82C34908:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82c33cb8
	ctx.lr = 0x82C34914;
	sub_82C33CB8(ctx, base);
	// addi r10,r31,408
	ctx.r10.s64 = ctx.r31.s64 + 408;
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
	// cmplw cr6,r31,r10
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82c34950
	if (!ctx.cr6.lt) goto loc_82C34950;
	// subf r8,r23,r31
	ctx.r8.s64 = ctx.r31.s64 - ctx.r23.s64;
loc_82C34928:
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// bge cr6,0x82c34950
	if (!ctx.cr6.lt) goto loc_82C34950;
	// rlwinm r9,r5,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// add r7,r9,r8
	ctx.r7.u64 = ctx.r9.u64 + ctx.r8.u64;
	// lwzx r7,r7,r11
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r11.u32);
	// stwx r7,r9,r11
	PPC_STORE_U32(ctx.r9.u32 + ctx.r11.u32, ctx.r7.u32);
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// add r9,r8,r11
	ctx.r9.u64 = ctx.r8.u64 + ctx.r11.u64;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82c34928
	if (ctx.cr6.lt) goto loc_82C34928;
loc_82C34950:
	// cmplw cr6,r3,r21
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r21.u32, ctx.xer);
	// ble cr6,0x82c3495c
	if (!ctx.cr6.gt) goto loc_82C3495C;
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
loc_82C3495C:
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, 0, ctx.xer);
	// beq cr6,0x82c34970
	if (ctx.cr6.eq) goto loc_82C34970;
	// lwz r11,292(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 292);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,292(r28)
	PPC_STORE_U32(ctx.r28.u32 + 292, ctx.r11.u32);
loc_82C34970:
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82fa76ac
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C3497C"))) PPC_WEAK_FUNC(sub_82C3497C);
PPC_FUNC_IMPL(__imp__sub_82C3497C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C34980"))) PPC_WEAK_FUNC(sub_82C34980);
PPC_FUNC_IMPL(__imp__sub_82C34980) {
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
	// lwz r11,64(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82c34a30
	if (ctx.cr6.eq) goto loc_82C34A30;
	// li r11,4
	ctx.r11.s64 = 4;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r10,r3,84
	ctx.r10.s64 = ctx.r3.s64 + 84;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_82C349B4:
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82c349d0
	if (ctx.cr6.eq) goto loc_82C349D0;
	// lwz r11,212(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 212);
	// rlwinm. r11,r11,0,12,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xF0000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82c349d0
	if (!ctx.cr0.eq) goto loc_82C349D0;
	// li r31,1
	ctx.r31.s64 = 1;
loc_82C349D0:
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x82c349b4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82C349B4;
	// lwz r11,212(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 212);
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82c34a08
	if (!ctx.cr0.eq) goto loc_82C34A08;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c35b58
	ctx.lr = 0x82C349EC;
	sub_82C35B58(ctx, base);
	// lis r11,28672
	ctx.r11.s64 = 1879048192;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82c34a08
	if (ctx.cr6.eq) goto loc_82C34A08;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c35b50
	ctx.lr = 0x82C34A00;
	sub_82C35B50(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82c34a24
	if (!ctx.cr0.eq) goto loc_82C34A24;
loc_82C34A08:
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne cr6,0x82c34a24
	if (!ctx.cr6.eq) goto loc_82C34A24;
	// bl 0x83179db4
	ctx.lr = 0x82C34A14;
	__imp__XamVoiceIsActiveProcess(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82c34a24
	if (ctx.cr0.eq) goto loc_82C34A24;
	// lfs f0,196(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 196);
	ctx.f0.f64 = double(temp.f32);
	// b 0x82c34a2c
	goto loc_82C34A2C;
loc_82C34A24:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,5184(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5184);
	ctx.f0.f64 = double(temp.f32);
loc_82C34A2C:
	// stfs f0,208(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 208, temp.u32);
loc_82C34A30:
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

__attribute__((alias("__imp__sub_82C34A48"))) PPC_WEAK_FUNC(sub_82C34A48);
PPC_FUNC_IMPL(__imp__sub_82C34A48) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82c34a7c
	if (ctx.cr6.eq) goto loc_82C34A7C;
	// addi r9,r3,100
	ctx.r9.s64 = ctx.r3.s64 + 100;
loc_82C34A5C:
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// ld r8,0(r8)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r8.u32 + 0);
	// cmpld cr6,r4,r8
	ctx.cr6.compare<uint64_t>(ctx.r4.u64, ctx.r8.u64, ctx.xer);
	// beq cr6,0x82c34a7c
	if (ctx.cr6.eq) goto loc_82C34A7C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82c34a5c
	if (ctx.cr6.lt) goto loc_82C34A5C;
loc_82C34A7C:
	// addi r9,r11,67
	ctx.r9.s64 = ctx.r11.s64 + 67;
	// lwz r10,12(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	// addi r8,r11,33
	ctx.r8.s64 = ctx.r11.s64 + 33;
	// mulli r11,r9,3
	ctx.r11.s64 = ctx.r9.s64 * 3;
	// add r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mulli r11,r8,3
	ctx.r11.s64 = ctx.r8.s64 * 3;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r9,r3
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r3.u32);
	// stw r10,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r10.u32);
	// lwzx r11,r11,r3
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// stw r11,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C34AB4"))) PPC_WEAK_FUNC(sub_82C34AB4);
PPC_FUNC_IMPL(__imp__sub_82C34AB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C34AB8"))) PPC_WEAK_FUNC(sub_82C34AB8);
PPC_FUNC_IMPL(__imp__sub_82C34AB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x82C34AC0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r9,-31961
	ctx.r9.s64 = -2094596096;
	// li r28,0
	ctx.r28.s64 = 0;
	// addi r8,r9,-23444
	ctx.r8.s64 = ctx.r9.s64 + -23444;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// stw r28,-23444(r9)
	PPC_STORE_U32(ctx.r9.u32 + -23444, ctx.r28.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r28,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r28.u32);
	// beq cr6,0x82c34c48
	if (ctx.cr6.eq) goto loc_82C34C48;
	// lwz r11,236(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 236);
	// li r30,-1
	ctx.r30.s64 = -1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82c34b30
	if (ctx.cr6.eq) goto loc_82C34B30;
	// cmpwi cr6,r11,-1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -1, ctx.xer);
	// beq cr6,0x82c34b30
	if (ctx.cr6.eq) goto loc_82C34B30;
	// lwz r3,276(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 276);
	// bl 0x82a77b58
	ctx.lr = 0x82C34B0C;
	sub_82A77B58(ctx, base);
	// li r11,3
	ctx.r11.s64 = 3;
	// lwz r3,236(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 236);
	// li r4,-1
	ctx.r4.s64 = -1;
	// stw r11,272(r31)
	PPC_STORE_U32(ctx.r31.u32 + 272, ctx.r11.u32);
	// bl 0x82a77600
	ctx.lr = 0x82C34B20;
	sub_82A77600(ctx, base);
	// stw r28,272(r31)
	PPC_STORE_U32(ctx.r31.u32 + 272, ctx.r28.u32);
	// lwz r3,236(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 236);
	// bl 0x82a756a0
	ctx.lr = 0x82C34B2C;
	sub_82A756A0(ctx, base);
	// stw r30,236(r31)
	PPC_STORE_U32(ctx.r31.u32 + 236, ctx.r30.u32);
loc_82C34B30:
	// lwz r3,276(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 276);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82c34b4c
	if (ctx.cr6.eq) goto loc_82C34B4C;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x82c34b4c
	if (ctx.cr6.eq) goto loc_82C34B4C;
	// bl 0x82a756a0
	ctx.lr = 0x82C34B48;
	sub_82A756A0(ctx, base);
	// stw r30,276(r31)
	PPC_STORE_U32(ctx.r31.u32 + 276, ctx.r30.u32);
loc_82C34B4C:
	// lwz r3,284(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 284);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82c34b68
	if (ctx.cr6.eq) goto loc_82C34B68;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x82c34b68
	if (ctx.cr6.eq) goto loc_82C34B68;
	// bl 0x82a756a0
	ctx.lr = 0x82C34B64;
	sub_82A756A0(ctx, base);
	// stw r30,284(r31)
	PPC_STORE_U32(ctx.r31.u32 + 284, ctx.r30.u32);
loc_82C34B68:
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82c34b8c
	if (ctx.cr6.eq) goto loc_82C34B8C;
	// stw r28,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r28.u32);
	// b 0x82c34b80
	goto loc_82C34B80;
loc_82C34B7C:
	// db16cyc 
loc_82C34B80:
	// lwz r11,76(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82c34b7c
	if (!ctx.cr6.eq) goto loc_82C34B7C;
loc_82C34B8C:
	// addi r29,r31,80
	ctx.r29.s64 = ctx.r31.s64 + 80;
	// li r30,4
	ctx.r30.s64 = 4;
loc_82C34B94:
	// lwz r3,4(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// bl 0x82c36948
	ctx.lr = 0x82C34B9C;
	sub_82C36948(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// stwu r28,4(r29)
	ea = 4 + ctx.r29.u32;
	PPC_STORE_U32(ea, ctx.r28.u32);
	ctx.r29.u32 = ea;
	// bne 0x82c34b94
	if (!ctx.cr0.eq) goto loc_82C34B94;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82c34bd8
	if (!ctx.cr6.gt) goto loc_82C34BD8;
	// addi r30,r31,96
	ctx.r30.s64 = ctx.r31.s64 + 96;
loc_82C34BBC:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x82c39b70
	ctx.lr = 0x82C34BC4;
	sub_82C39B70(ctx, base);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// stwu r28,4(r30)
	ea = 4 + ctx.r30.u32;
	PPC_STORE_U32(ea, ctx.r28.u32);
	ctx.r30.u32 = ea;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82c34bbc
	if (ctx.cr6.lt) goto loc_82C34BBC;
loc_82C34BD8:
	// lwz r3,64(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82c34bf8
	if (ctx.cr6.eq) goto loc_82C34BF8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,72(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82C34BF4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r28,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r28.u32);
loc_82C34BF8:
	// lwz r3,68(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82c34c18
	if (ctx.cr6.eq) goto loc_82C34C18;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,72(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82C34C14;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r28,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r28.u32);
loc_82C34C18:
	// lwz r3,60(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82c34c38
	if (ctx.cr6.eq) goto loc_82C34C38;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82C34C34;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r28,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r28.u32);
loc_82C34C38:
	// lis r4,24970
	ctx.r4.s64 = 1636433920;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r4,r4,32780
	ctx.r4.u64 = ctx.r4.u64 | 32780;
	// bl 0x82691460
	ctx.lr = 0x82C34C48;
	sub_82691460(ctx, base);
loc_82C34C48:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C34C50"))) PPC_WEAK_FUNC(sub_82C34C50);
PPC_FUNC_IMPL(__imp__sub_82C34C50) {
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
	// addi r11,r3,4
	ctx.r11.s64 = ctx.r3.s64 + 4;
loc_82C34C64:
	// mfmsr r9
	ctx.r9.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r11
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r11.u32);
	ctx.r10.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stwcx. r10,0,r11
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r11.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r10.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x82c34c64
	if (!ctx.cr0.eq) goto loc_82C34C64;
	// mr r31,r10
	ctx.r31.u64 = ctx.r10.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82c34cb4
	if (!ctx.cr6.eq) goto loc_82C34CB4;
	// bl 0x82c34ab8
	ctx.lr = 0x82C34C90;
	sub_82C34AB8(ctx, base);
	// lis r11,-31961
	ctx.r11.s64 = -2094596096;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r11,r11,-23308
	ctx.r11.s64 = ctx.r11.s64 + -23308;
loc_82C34C9C:
	// mfmsr r9
	ctx.r9.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r11
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r11.u32);
	ctx.r10.u64 = __builtin_bswap32(ctx.reserved.u32);
	// stwcx. r8,0,r11
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r11.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r8.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x82c34c9c
	if (!ctx.cr0.eq) goto loc_82C34C9C;
loc_82C34CB4:
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

__attribute__((alias("__imp__sub_82C34CCC"))) PPC_WEAK_FUNC(sub_82C34CCC);
PPC_FUNC_IMPL(__imp__sub_82C34CCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C34CD0"))) PPC_WEAK_FUNC(sub_82C34CD0);
PPC_FUNC_IMPL(__imp__sub_82C34CD0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7670
	ctx.lr = 0x82C34CD8;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r26,r3,244
	ctx.r26.s64 = ctx.r3.s64 + 244;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// li r27,0
	ctx.r27.s64 = 0;
	// bl 0x831791a4
	ctx.lr = 0x82C34CF4;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r11,272(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 272);
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// beq cr6,0x82c34e08
	if (ctx.cr6.eq) goto loc_82C34E08;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// lwz r3,284(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 284);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x83178cc4
	ctx.lr = 0x82C34D14;
	__imp__XNotifyGetNext(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82c34d70
	if (ctx.cr0.eq) goto loc_82C34D70;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 10, ctx.xer);
	// beq cr6,0x82c34d68
	if (ctx.cr6.eq) goto loc_82C34D68;
	// cmplwi cr6,r11,14
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 14, ctx.xer);
	// beq cr6,0x82c34d68
	if (ctx.cr6.eq) goto loc_82C34D68;
	// lis r10,8
	ctx.r10.s64 = 524288;
	// ori r10,r10,31
	ctx.r10.u64 = ctx.r10.u64 | 31;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82c34d64
	if (ctx.cr6.eq) goto loc_82C34D64;
	// lis r10,1024
	ctx.r10.s64 = 67108864;
	// ori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 | 1;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82c34d70
	if (!ctx.cr6.gt) goto loc_82C34D70;
	// lis r10,1024
	ctx.r10.s64 = 67108864;
	// ori r10,r10,3
	ctx.r10.u64 = ctx.r10.u64 | 3;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82c34d68
	if (!ctx.cr6.gt) goto loc_82C34D68;
	// b 0x82c34d70
	goto loc_82C34D70;
loc_82C34D64:
	// li r27,1
	ctx.r27.s64 = 1;
loc_82C34D68:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,288(r31)
	PPC_STORE_U32(ctx.r31.u32 + 288, ctx.r11.u32);
loc_82C34D70:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c34538
	ctx.lr = 0x82C34D78;
	sub_82C34538(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r30,r31,80
	ctx.r30.s64 = ctx.r31.s64 + 80;
	// li r29,4
	ctx.r29.s64 = 4;
loc_82C34D84:
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// beq cr6,0x82c34dac
	if (ctx.cr6.eq) goto loc_82C34DAC;
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x82c35b50
	ctx.lr = 0x82C34D94;
	sub_82C35B50(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82c34dac
	if (ctx.cr0.eq) goto loc_82C34DAC;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r10,212(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 212);
	// ori r10,r10,8
	ctx.r10.u64 = ctx.r10.u64 | 8;
	// stw r10,212(r11)
	PPC_STORE_U32(ctx.r11.u32 + 212, ctx.r10.u32);
loc_82C34DAC:
	// lwzu r3,4(r30)
	ea = 4 + ctx.r30.u32;
	ctx.r3.u64 = PPC_LOAD_U32(ea);
	ctx.r30.u32 = ea;
	// bl 0x82c365e8
	ctx.lr = 0x82C34DB4;
	sub_82C365E8(ctx, base);
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne 0x82c34d84
	if (!ctx.cr0.eq) goto loc_82C34D84;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82c34e00
	if (!ctx.cr6.gt) goto loc_82C34E00;
	// addi r30,r31,100
	ctx.r30.s64 = ctx.r31.s64 + 100;
loc_82C34DD0:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82c34dec
	if (ctx.cr6.eq) goto loc_82C34DEC;
	// ld r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// beq cr6,0x82c34dec
	if (ctx.cr6.eq) goto loc_82C34DEC;
	// bl 0x82c39ce0
	ctx.lr = 0x82C34DEC;
	sub_82C39CE0(ctx, base);
loc_82C34DEC:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82c34dd0
	if (ctx.cr6.lt) goto loc_82C34DD0;
loc_82C34E00:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,288(r31)
	PPC_STORE_U32(ctx.r31.u32 + 288, ctx.r11.u32);
loc_82C34E08:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x831791b4
	ctx.lr = 0x82C34E10;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// cntlzw r11,r28
	ctx.r11.u64 = ctx.r28.u32 == 0 ? 32 : __builtin_clz(ctx.r28.u32);
	// rlwinm r3,r11,27,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82fa76c0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C34E20"))) PPC_WEAK_FUNC(sub_82C34E20);
PPC_FUNC_IMPL(__imp__sub_82C34E20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7674
	ctx.lr = 0x82C34E28;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r28,r3,244
	ctx.r28.s64 = ctx.r3.s64 + 244;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// bl 0x831791a4
	ctx.lr = 0x82C34E48;
	__imp__RtlEnterCriticalSection(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c344e0
	ctx.lr = 0x82C34E54;
	sub_82C344E0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82c34e68
	if (!ctx.cr0.eq) goto loc_82C34E68;
	// lis r31,-32761
	ctx.r31.s64 = -2147024896;
	// ori r31,r31,87
	ctx.r31.u64 = ctx.r31.u64 | 87;
	// b 0x82c34e78
	goto loc_82C34E78;
loc_82C34E68:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82c39d88
	ctx.lr = 0x82C34E74;
	sub_82C39D88(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_82C34E78:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x831791b4
	ctx.lr = 0x82C34E80;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C34E8C"))) PPC_WEAK_FUNC(sub_82C34E8C);
PPC_FUNC_IMPL(__imp__sub_82C34E8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C34E90"))) PPC_WEAK_FUNC(sub_82C34E90);
PPC_FUNC_IMPL(__imp__sub_82C34E90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7674
	ctx.lr = 0x82C34E98;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r28,r3,244
	ctx.r28.s64 = ctx.r3.s64 + 244;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// bl 0x831791a4
	ctx.lr = 0x82C34EB8;
	__imp__RtlEnterCriticalSection(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c344e0
	ctx.lr = 0x82C34EC4;
	sub_82C344E0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82c34ed8
	if (!ctx.cr0.eq) goto loc_82C34ED8;
	// lis r31,-32761
	ctx.r31.s64 = -2147024896;
	// ori r31,r31,87
	ctx.r31.u64 = ctx.r31.u64 | 87;
	// b 0x82c34ee8
	goto loc_82C34EE8;
loc_82C34ED8:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82c39e00
	ctx.lr = 0x82C34EE4;
	sub_82C39E00(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_82C34EE8:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x831791b4
	ctx.lr = 0x82C34EF0;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C34EFC"))) PPC_WEAK_FUNC(sub_82C34EFC);
PPC_FUNC_IMPL(__imp__sub_82C34EFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C34F00"))) PPC_WEAK_FUNC(sub_82C34F00);
PPC_FUNC_IMPL(__imp__sub_82C34F00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7670
	ctx.lr = 0x82C34F08;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r26,r3,244
	ctx.r26.s64 = ctx.r3.s64 + 244;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// bl 0x831791a4
	ctx.lr = 0x82C34F2C;
	__imp__RtlEnterCriticalSection(ctx, base);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82a75988
	ctx.lr = 0x82C34F3C;
	sub_82A75988(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// bl 0x82c344e0
	ctx.lr = 0x82C34F48;
	sub_82C344E0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82c34f5c
	if (!ctx.cr0.eq) goto loc_82C34F5C;
	// lis r29,-32768
	ctx.r29.s64 = -2147483648;
	// ori r29,r29,16389
	ctx.r29.u64 = ctx.r29.u64 | 16389;
	// b 0x82c34ff4
	goto loc_82C34FF4;
loc_82C34F5C:
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82c39e78
	ctx.lr = 0x82C34F74;
	sub_82C39E78(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// blt 0x82c34ff4
	if (ctx.cr0.lt) goto loc_82C34FF4;
	// lis r12,-1057
	ctx.r12.s64 = -69271552;
	// lis r11,-5413
	ctx.r11.s64 = -354746368;
	// ori r12,r12,221
	ctx.r12.u64 = ctx.r12.u64 | 221;
	// lis r10,-1057
	ctx.r10.s64 = -69271552;
	// rldicr r12,r12,32,31
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 32) & 0xFFFFFFFF00000000;
	// ori r11,r11,61168
	ctx.r11.u64 = ctx.r11.u64 | 61168;
	// oris r12,r12,60123
	ctx.r12.u64 = ctx.r12.u64 | 3940220928;
	// ori r10,r10,221
	ctx.r10.u64 = ctx.r10.u64 | 221;
	// ori r12,r12,61168
	ctx.r12.u64 = ctx.r12.u64 | 61168;
	// rldimi r11,r10,32,0
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r11.u64 & 0xFFFFFFFF);
	// and r9,r31,r12
	ctx.r9.u64 = ctx.r31.u64 & ctx.r12.u64;
	// cmpld cr6,r9,r11
	ctx.cr6.compare<uint64_t>(ctx.r9.u64, ctx.r11.u64, ctx.xer);
	// beq cr6,0x82c34ff4
	if (ctx.cr6.eq) goto loc_82C34FF4;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r30,84
	ctx.r11.s64 = ctx.r30.s64 + 84;
loc_82C34FB8:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82c34fd8
	if (ctx.cr6.eq) goto loc_82C34FD8;
	// lwz r9,212(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 212);
	// lis r8,1
	ctx.r8.s64 = 65536;
	// rlwinm r9,r9,0,12,15
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xF0000;
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x82c34fec
	if (ctx.cr6.eq) goto loc_82C34FEC;
loc_82C34FD8:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplwi cr6,r10,4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 4, ctx.xer);
	// blt cr6,0x82c34fb8
	if (ctx.cr6.lt) goto loc_82C34FB8;
	// b 0x82c34ff4
	goto loc_82C34FF4;
loc_82C34FEC:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,288(r30)
	PPC_STORE_U32(ctx.r30.u32 + 288, ctx.r11.u32);
loc_82C34FF4:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x831791b4
	ctx.lr = 0x82C34FFC;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82fa76c0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C35008"))) PPC_WEAK_FUNC(sub_82C35008);
PPC_FUNC_IMPL(__imp__sub_82C35008) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x82C35010;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r30,r3,244
	ctx.r30.s64 = ctx.r3.s64 + 244;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x831791a4
	ctx.lr = 0x82C35028;
	__imp__RtlEnterCriticalSection(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c344e0
	ctx.lr = 0x82C35034;
	sub_82C344E0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82c35048
	if (!ctx.cr0.eq) goto loc_82C35048;
	// lis r31,-32761
	ctx.r31.s64 = -2147024896;
	// ori r31,r31,87
	ctx.r31.u64 = ctx.r31.u64 | 87;
	// b 0x82c35050
	goto loc_82C35050;
loc_82C35048:
	// bl 0x82c39f40
	ctx.lr = 0x82C3504C;
	sub_82C39F40(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_82C35050:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831791b4
	ctx.lr = 0x82C35058;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C35064"))) PPC_WEAK_FUNC(sub_82C35064);
PPC_FUNC_IMPL(__imp__sub_82C35064) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C35068"))) PPC_WEAK_FUNC(sub_82C35068);
PPC_FUNC_IMPL(__imp__sub_82C35068) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x82C35070;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r28,r3,244
	ctx.r28.s64 = ctx.r3.s64 + 244;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// bl 0x831791a4
	ctx.lr = 0x82C3508C;
	__imp__RtlEnterCriticalSection(ctx, base);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r8,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r8.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82c35110
	if (!ctx.cr6.gt) goto loc_82C35110;
	// addi r10,r31,100
	ctx.r10.s64 = ctx.r31.s64 + 100;
	// addi r9,r29,-8
	ctx.r9.s64 = ctx.r29.s64 + -8;
loc_82C350A8:
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// ld r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// beq cr6,0x82c350fc
	if (ctx.cr6.eq) goto loc_82C350FC;
	// lis r12,-1057
	ctx.r12.s64 = -69271552;
	// lis r7,-5413
	ctx.r7.s64 = -354746368;
	// ori r12,r12,221
	ctx.r12.u64 = ctx.r12.u64 | 221;
	// lis r6,-1057
	ctx.r6.s64 = -69271552;
	// rldicr r12,r12,32,31
	ctx.r12.u64 = __builtin_rotateleft64(ctx.r12.u64, 32) & 0xFFFFFFFF00000000;
	// ori r7,r7,61168
	ctx.r7.u64 = ctx.r7.u64 | 61168;
	// oris r12,r12,60123
	ctx.r12.u64 = ctx.r12.u64 | 3940220928;
	// ori r6,r6,221
	ctx.r6.u64 = ctx.r6.u64 | 221;
	// ori r12,r12,61168
	ctx.r12.u64 = ctx.r12.u64 | 61168;
	// rldimi r7,r6,32,0
	ctx.r7.u64 = (__builtin_rotateleft64(ctx.r6.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r7.u64 & 0xFFFFFFFF);
	// and r5,r11,r12
	ctx.r5.u64 = ctx.r11.u64 & ctx.r12.u64;
	// cmpld cr6,r5,r7
	ctx.cr6.compare<uint64_t>(ctx.r5.u64, ctx.r7.u64, ctx.xer);
	// beq cr6,0x82c350fc
	if (ctx.cr6.eq) goto loc_82C350FC;
	// stdu r11,8(r9)
	ea = 8 + ctx.r9.u32;
	PPC_STORE_U64(ea, ctx.r11.u64);
	ctx.r9.u32 = ea;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
loc_82C350FC:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplw cr6,r8,r11
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82c350a8
	if (ctx.cr6.lt) goto loc_82C350A8;
loc_82C35110:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x831791b4
	ctx.lr = 0x82C35118;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C35124"))) PPC_WEAK_FUNC(sub_82C35124);
PPC_FUNC_IMPL(__imp__sub_82C35124) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C35128"))) PPC_WEAK_FUNC(sub_82C35128);
PPC_FUNC_IMPL(__imp__sub_82C35128) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x82C35130;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r28,r3,244
	ctx.r28.s64 = ctx.r3.s64 + 244;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// bl 0x831791a4
	ctx.lr = 0x82C3514C;
	__imp__RtlEnterCriticalSection(ctx, base);
	// addi r11,r30,21
	ctx.r11.s64 = ctx.r30.s64 + 21;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r31,r11,r31
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82c3518c
	if (ctx.cr6.eq) goto loc_82C3518C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c35b50
	ctx.lr = 0x82C35168;
	sub_82C35B50(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82c35188
	if (ctx.cr0.eq) goto loc_82C35188;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c35b58
	ctx.lr = 0x82C35178;
	sub_82C35B58(ctx, base);
	// lis r11,28672
	ctx.r11.s64 = 1879048192;
	// li r29,1
	ctx.r29.s64 = 1;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82c3518c
	if (ctx.cr6.eq) goto loc_82C3518C;
loc_82C35188:
	// li r29,0
	ctx.r29.s64 = 0;
loc_82C3518C:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x831791b4
	ctx.lr = 0x82C35194;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C351A0"))) PPC_WEAK_FUNC(sub_82C351A0);
PPC_FUNC_IMPL(__imp__sub_82C351A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x82C351A8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r29,r3,244
	ctx.r29.s64 = ctx.r3.s64 + 244;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// bl 0x831791a4
	ctx.lr = 0x82C351C4;
	__imp__RtlEnterCriticalSection(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c344e0
	ctx.lr = 0x82C351D0;
	sub_82C344E0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82c351e0
	if (ctx.cr0.eq) goto loc_82C351E0;
	// bl 0x82c3a0f0
	ctx.lr = 0x82C351DC;
	sub_82C3A0F0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_82C351E0:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x831791b4
	ctx.lr = 0x82C351E8;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C351F4"))) PPC_WEAK_FUNC(sub_82C351F4);
PPC_FUNC_IMPL(__imp__sub_82C351F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C351F8"))) PPC_WEAK_FUNC(sub_82C351F8);
PPC_FUNC_IMPL(__imp__sub_82C351F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x82C35200;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r29,r3,244
	ctx.r29.s64 = ctx.r3.s64 + 244;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x831791a4
	ctx.lr = 0x82C3521C;
	__imp__RtlEnterCriticalSection(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c344e0
	ctx.lr = 0x82C35228;
	sub_82C344E0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82c3523c
	if (!ctx.cr0.eq) goto loc_82C3523C;
	// lis r31,-32761
	ctx.r31.s64 = -2147024896;
	// ori r31,r31,87
	ctx.r31.u64 = ctx.r31.u64 | 87;
	// b 0x82c35248
	goto loc_82C35248;
loc_82C3523C:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82c393c0
	ctx.lr = 0x82C35244;
	sub_82C393C0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_82C35248:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x831791b4
	ctx.lr = 0x82C35250;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C3525C"))) PPC_WEAK_FUNC(sub_82C3525C);
PPC_FUNC_IMPL(__imp__sub_82C3525C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C35260"))) PPC_WEAK_FUNC(sub_82C35260);
PPC_FUNC_IMPL(__imp__sub_82C35260) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa766c
	ctx.lr = 0x82C35268;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r26,r3,244
	ctx.r26.s64 = ctx.r3.s64 + 244;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// mr r27,r8
	ctx.r27.u64 = ctx.r8.u64;
	// bl 0x831791a4
	ctx.lr = 0x82C35290;
	__imp__RtlEnterCriticalSection(ctx, base);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c344e0
	ctx.lr = 0x82C3529C;
	sub_82C344E0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82c352b0
	if (!ctx.cr0.eq) goto loc_82C352B0;
	// lis r31,-32761
	ctx.r31.s64 = -2147024896;
	// ori r31,r31,87
	ctx.r31.u64 = ctx.r31.u64 | 87;
	// b 0x82c352c8
	goto loc_82C352C8;
loc_82C352B0:
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82c394e0
	ctx.lr = 0x82C352C4;
	sub_82C394E0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_82C352C8:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x831791b4
	ctx.lr = 0x82C352D0;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82fa76bc
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C352DC"))) PPC_WEAK_FUNC(sub_82C352DC);
PPC_FUNC_IMPL(__imp__sub_82C352DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C352E0"))) PPC_WEAK_FUNC(sub_82C352E0);
PPC_FUNC_IMPL(__imp__sub_82C352E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa765c
	ctx.lr = 0x82C352E8;
	__savegprlr_21(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32761
	ctx.r11.s64 = -2147024896;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// mr r22,r6
	ctx.r22.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// mr r30,r8
	ctx.r30.u64 = ctx.r8.u64;
	// ori r28,r11,1167
	ctx.r28.u64 = ctx.r11.u64 | 1167;
	// bl 0x82c32ee8
	ctx.lr = 0x82C35310;
	sub_82C32EE8(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x82c35430
	if (!ctx.cr6.eq) goto loc_82C35430;
	// addi r21,r31,244
	ctx.r21.s64 = ctx.r31.s64 + 244;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x831791a4
	ctx.lr = 0x82C35324;
	__imp__RtlEnterCriticalSection(ctx, base);
	// li r23,0
	ctx.r23.s64 = 0;
	// addi r31,r31,84
	ctx.r31.s64 = ctx.r31.s64 + 84;
	// mr r29,r23
	ctx.r29.u64 = ctx.r23.u64;
loc_82C35330:
	// lwz r26,0(r31)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x82c3535c
	if (ctx.cr6.eq) goto loc_82C3535C;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82c35b58
	ctx.lr = 0x82C35344;
	sub_82C35B58(ctx, base);
	// lis r11,28672
	ctx.r11.s64 = 1879048192;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82c3535c
	if (!ctx.cr6.eq) goto loc_82C3535C;
	// lwz r3,12(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 12);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82c35370
	if (!ctx.cr6.eq) goto loc_82C35370;
loc_82C3535C:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmplwi cr6,r29,4
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 4, ctx.xer);
	// blt cr6,0x82c35330
	if (ctx.cr6.lt) goto loc_82C35330;
	// b 0x82c35428
	goto loc_82C35428;
loc_82C35370:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x82c353dc
	if (ctx.cr6.eq) goto loc_82C353DC;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82c353dc
	if (ctx.cr6.eq) goto loc_82C353DC;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82c32f50
	ctx.lr = 0x82C3538C;
	sub_82C32F50(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// ble cr6,0x82c353a4
	if (!ctx.cr6.gt) goto loc_82C353A4;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
loc_82C353A4:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r10,r23
	ctx.r10.u64 = ctx.r23.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82c353e4
	if (!ctx.cr6.gt) goto loc_82C353E4;
	// addi r11,r1,76
	ctx.r11.s64 = ctx.r1.s64 + 76;
loc_82C353B8:
	// lfs f13,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f13.f64 = double(temp.f32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lfsu f0,8(r11)
	ea = 8 + ctx.r11.u32;
	temp.u32 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	ctx.f0.f64 = double(temp.f32);
	// stfs f13,0(r27)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r27.u32 + 0, temp.u32);
	// stfs f0,4(r27)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r27.u32 + 4, temp.u32);
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82c353b8
	if (ctx.cr6.lt) goto loc_82C353B8;
	// b 0x82c353e4
	goto loc_82C353E4;
loc_82C353DC:
	// mr r28,r23
	ctx.r28.u64 = ctx.r23.u64;
	// stw r23,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r23.u32);
loc_82C353E4:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// blt cr6,0x82c35428
	if (ctx.cr6.lt) goto loc_82C35428;
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// beq cr6,0x82c35424
	if (ctx.cr6.eq) goto loc_82C35424;
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82c35424
	if (ctx.cr6.eq) goto loc_82C35424;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r7,r22
	ctx.r7.u64 = ctx.r22.u64;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r4,-5148(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -5148);
	// bl 0x82c36840
	ctx.lr = 0x82C3541C;
	sub_82C36840(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// b 0x82c35428
	goto loc_82C35428;
loc_82C35424:
	// stw r23,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r23.u32);
loc_82C35428:
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x831791b4
	ctx.lr = 0x82C35430;
	__imp__RtlLeaveCriticalSection(ctx, base);
loc_82C35430:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82fa76ac
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C3543C"))) PPC_WEAK_FUNC(sub_82C3543C);
PPC_FUNC_IMPL(__imp__sub_82C3543C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C35440"))) PPC_WEAK_FUNC(sub_82C35440);
PPC_FUNC_IMPL(__imp__sub_82C35440) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7674
	ctx.lr = 0x82C35448;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r28,r3,244
	ctx.r28.s64 = ctx.r3.s64 + 244;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// bl 0x831791a4
	ctx.lr = 0x82C35468;
	__imp__RtlEnterCriticalSection(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c344e0
	ctx.lr = 0x82C35474;
	sub_82C344E0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82c35488
	if (!ctx.cr0.eq) goto loc_82C35488;
	// lis r31,-32761
	ctx.r31.s64 = -2147024896;
	// ori r31,r31,87
	ctx.r31.u64 = ctx.r31.u64 | 87;
	// b 0x82c35498
	goto loc_82C35498;
loc_82C35488:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82c3a0c8
	ctx.lr = 0x82C35494;
	sub_82C3A0C8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_82C35498:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x831791b4
	ctx.lr = 0x82C354A0;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C354AC"))) PPC_WEAK_FUNC(sub_82C354AC);
PPC_FUNC_IMPL(__imp__sub_82C354AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C354B0"))) PPC_WEAK_FUNC(sub_82C354B0);
PPC_FUNC_IMPL(__imp__sub_82C354B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7674
	ctx.lr = 0x82C354B8;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r28,r3,244
	ctx.r28.s64 = ctx.r3.s64 + 244;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// bl 0x831791a4
	ctx.lr = 0x82C354D8;
	__imp__RtlEnterCriticalSection(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c344e0
	ctx.lr = 0x82C354E4;
	sub_82C344E0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82c354f8
	if (!ctx.cr0.eq) goto loc_82C354F8;
	// lis r31,-32761
	ctx.r31.s64 = -2147024896;
	// ori r31,r31,87
	ctx.r31.u64 = ctx.r31.u64 | 87;
	// b 0x82c35508
	goto loc_82C35508;
loc_82C354F8:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82c3a050
	ctx.lr = 0x82C35504;
	sub_82C3A050(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_82C35508:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x831791b4
	ctx.lr = 0x82C35510;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C3551C"))) PPC_WEAK_FUNC(sub_82C3551C);
PPC_FUNC_IMPL(__imp__sub_82C3551C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C35520"))) PPC_WEAK_FUNC(sub_82C35520);
PPC_FUNC_IMPL(__imp__sub_82C35520) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7674
	ctx.lr = 0x82C35528;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r29,r3,244
	ctx.r29.s64 = ctx.r3.s64 + 244;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// li r27,0
	ctx.r27.s64 = 0;
	// bl 0x831791a4
	ctx.lr = 0x82C35548;
	__imp__RtlEnterCriticalSection(ctx, base);
	// addi r11,r30,21
	ctx.r11.s64 = ctx.r30.s64 + 21;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82c35568
	if (!ctx.cr6.eq) goto loc_82C35568;
	// lis r27,-32761
	ctx.r27.s64 = -2147024896;
	// ori r27,r27,87
	ctx.r27.u64 = ctx.r27.u64 | 87;
	// b 0x82c35570
	goto loc_82C35570;
loc_82C35568:
	// lfs f0,196(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 196);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r28)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r28.u32 + 0, temp.u32);
loc_82C35570:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x831791b4
	ctx.lr = 0x82C35578;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C35584"))) PPC_WEAK_FUNC(sub_82C35584);
PPC_FUNC_IMPL(__imp__sub_82C35584) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C35588"))) PPC_WEAK_FUNC(sub_82C35588);
PPC_FUNC_IMPL(__imp__sub_82C35588) {
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
	// lis r11,-2
	ctx.r11.s64 = -131072;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// ori r11,r11,31072
	ctx.r11.u64 = ctx.r11.u64 | 31072;
	// li r5,0
	ctx.r5.s64 = 0;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8309de10
	ctx.lr = 0x82C355BC;
	sub_8309DE10(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x82c355cc
	if (!ctx.cr0.eq) goto loc_82C355CC;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x8309dde8
	ctx.lr = 0x82C355CC;
	sub_8309DDE8(ctx, base);
loc_82C355CC:
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,10
	ctx.r5.s64 = 10;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8309dd78
	ctx.lr = 0x82C355E8;
	sub_8309DD78(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82c355f8
	if (!ctx.cr0.eq) goto loc_82C355F8;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x8309dde8
	ctx.lr = 0x82C355F8;
	sub_8309DDE8(ctx, base);
loc_82C355F8:
	// lwz r3,276(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 276);
	// bl 0x82a776a8
	ctx.lr = 0x82C35600;
	sub_82A776A8(ctx, base);
	// b 0x82c35614
	goto loc_82C35614;
loc_82C35604:
	// li r4,-1
	ctx.r4.s64 = -1;
	// bl 0x82a77600
	ctx.lr = 0x82C3560C;
	sub_82A77600(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c34cd0
	ctx.lr = 0x82C35614;
	sub_82C34CD0(ctx, base);
loc_82C35614:
	// lwz r11,272(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 272);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bne cr6,0x82c35604
	if (!ctx.cr6.eq) goto loc_82C35604;
	// bl 0x8309dd38
	ctx.lr = 0x82C35628;
	sub_8309DD38(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a756a0
	ctx.lr = 0x82C35630;
	sub_82A756A0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x8309dde8
	ctx.lr = 0x82C35638;
	sub_8309DDE8(ctx, base);
}

__attribute__((alias("__imp__sub_82C35638"))) PPC_WEAK_FUNC(sub_82C35638);
PPC_FUNC_IMPL(__imp__sub_82C35638) {
	PPC_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7640
	ctx.lr = 0x82C35640;
	__savegprlr_14(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82c357a8
	if (!ctx.cr6.eq) goto loc_82C357A8;
	// lis r11,-32025
	ctx.r11.s64 = -2098790400;
	// lis r10,-32061
	ctx.r10.s64 = -2101149696;
	// lis r9,-32061
	ctx.r9.s64 = -2101149696;
	// addi r11,r11,30936
	ctx.r11.s64 = ctx.r11.s64 + 30936;
	// addi r10,r10,19536
	ctx.r10.s64 = ctx.r10.s64 + 19536;
	// addi r9,r9,15944
	ctx.r9.s64 = ctx.r9.s64 + 15944;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lis r8,-32061
	ctx.r8.s64 = -2101149696;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// lis r7,-32061
	ctx.r7.s64 = -2101149696;
	// stw r9,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
	// lis r6,-32061
	ctx.r6.s64 = -2101149696;
	// addi r11,r8,16080
	ctx.r11.s64 = ctx.r8.s64 + 16080;
	// addi r10,r7,16192
	ctx.r10.s64 = ctx.r7.s64 + 16192;
	// addi r9,r6,20000
	ctx.r9.s64 = ctx.r6.s64 + 20000;
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// lis r5,-32061
	ctx.r5.s64 = -2101149696;
	// stw r10,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r10.u32);
	// lis r4,-32061
	ctx.r4.s64 = -2101149696;
	// stw r9,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r9.u32);
	// lis r31,-32061
	ctx.r31.s64 = -2101149696;
	// addi r11,r5,20112
	ctx.r11.s64 = ctx.r5.s64 + 20112;
	// addi r10,r4,16304
	ctx.r10.s64 = ctx.r4.s64 + 16304;
	// addi r9,r31,16344
	ctx.r9.s64 = ctx.r31.s64 + 16344;
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// lis r30,-32061
	ctx.r30.s64 = -2101149696;
	// stw r10,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r10.u32);
	// lis r29,-32061
	ctx.r29.s64 = -2101149696;
	// stw r9,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r9.u32);
	// lis r28,-32061
	ctx.r28.s64 = -2101149696;
	// addi r11,r30,16504
	ctx.r11.s64 = ctx.r30.s64 + 16504;
	// addi r10,r29,20224
	ctx.r10.s64 = ctx.r29.s64 + 20224;
	// addi r9,r28,20488
	ctx.r9.s64 = ctx.r28.s64 + 20488;
	// stw r11,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r11.u32);
	// lis r27,-32061
	ctx.r27.s64 = -2101149696;
	// stw r10,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r10.u32);
	// lis r26,-32061
	ctx.r26.s64 = -2101149696;
	// stw r9,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r9.u32);
	// lis r25,-32061
	ctx.r25.s64 = -2101149696;
	// addi r11,r27,20584
	ctx.r11.s64 = ctx.r27.s64 + 20584;
	// addi r10,r26,16576
	ctx.r10.s64 = ctx.r26.s64 + 16576;
	// addi r9,r25,16680
	ctx.r9.s64 = ctx.r25.s64 + 16680;
	// stw r11,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r11.u32);
	// lis r24,-32061
	ctx.r24.s64 = -2101149696;
	// stw r10,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r10.u32);
	// lis r23,-32061
	ctx.r23.s64 = -2101149696;
	// stw r9,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, ctx.r9.u32);
	// lis r22,-32061
	ctx.r22.s64 = -2101149696;
	// addi r11,r24,20896
	ctx.r11.s64 = ctx.r24.s64 + 20896;
	// addi r10,r23,20984
	ctx.r10.s64 = ctx.r23.s64 + 20984;
	// addi r9,r22,21088
	ctx.r9.s64 = ctx.r22.s64 + 21088;
	// stw r11,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, ctx.r11.u32);
	// lis r21,-32150
	ctx.r21.s64 = -2106982400;
	// stw r10,64(r3)
	PPC_STORE_U32(ctx.r3.u32 + 64, ctx.r10.u32);
	// lis r20,-32061
	ctx.r20.s64 = -2101149696;
	// stw r9,68(r3)
	PPC_STORE_U32(ctx.r3.u32 + 68, ctx.r9.u32);
	// lis r19,-32061
	ctx.r19.s64 = -2101149696;
	// addi r11,r21,16856
	ctx.r11.s64 = ctx.r21.s64 + 16856;
	// addi r10,r20,16728
	ctx.r10.s64 = ctx.r20.s64 + 16728;
	// addi r9,r19,21568
	ctx.r9.s64 = ctx.r19.s64 + 21568;
	// stw r11,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r11.u32);
	// lis r18,-32061
	ctx.r18.s64 = -2101149696;
	// stw r10,76(r3)
	PPC_STORE_U32(ctx.r3.u32 + 76, ctx.r10.u32);
	// lis r17,-32061
	ctx.r17.s64 = -2101149696;
	// stw r9,84(r3)
	PPC_STORE_U32(ctx.r3.u32 + 84, ctx.r9.u32);
	// lis r16,-32061
	ctx.r16.s64 = -2101149696;
	// addi r11,r18,21680
	ctx.r11.s64 = ctx.r18.s64 + 21680;
	// addi r10,r17,21216
	ctx.r10.s64 = ctx.r17.s64 + 21216;
	// addi r9,r16,20776
	ctx.r9.s64 = ctx.r16.s64 + 20776;
	// stw r11,88(r3)
	PPC_STORE_U32(ctx.r3.u32 + 88, ctx.r11.u32);
	// lis r15,-32061
	ctx.r15.s64 = -2101149696;
	// stw r10,80(r3)
	PPC_STORE_U32(ctx.r3.u32 + 80, ctx.r10.u32);
	// lis r14,-32061
	ctx.r14.s64 = -2101149696;
	// stw r9,92(r3)
	PPC_STORE_U32(ctx.r3.u32 + 92, ctx.r9.u32);
	// addi r11,r15,16856
	ctx.r11.s64 = ctx.r15.s64 + 16856;
	// addi r10,r14,21792
	ctx.r10.s64 = ctx.r14.s64 + 21792;
	// lis r9,-32061
	ctx.r9.s64 = -2101149696;
	// stw r11,100(r3)
	PPC_STORE_U32(ctx.r3.u32 + 100, ctx.r11.u32);
	// stw r10,96(r3)
	PPC_STORE_U32(ctx.r3.u32 + 96, ctx.r10.u32);
	// lis r10,-32061
	ctx.r10.s64 = -2101149696;
	// addi r11,r9,16912
	ctx.r11.s64 = ctx.r9.s64 + 16912;
	// stw r11,104(r3)
	PPC_STORE_U32(ctx.r3.u32 + 104, ctx.r11.u32);
	// lis r11,-32061
	ctx.r11.s64 = -2101149696;
	// addi r10,r10,16664
	ctx.r10.s64 = ctx.r10.s64 + 16664;
	// addi r11,r11,16672
	ctx.r11.s64 = ctx.r11.s64 + 16672;
	// stw r10,108(r3)
	PPC_STORE_U32(ctx.r3.u32 + 108, ctx.r10.u32);
	// stw r11,112(r3)
	PPC_STORE_U32(ctx.r3.u32 + 112, ctx.r11.u32);
loc_82C357A8:
	// b 0x82fa7690
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C357AC"))) PPC_WEAK_FUNC(sub_82C357AC);
PPC_FUNC_IMPL(__imp__sub_82C357AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C357B0"))) PPC_WEAK_FUNC(sub_82C357B0);
PPC_FUNC_IMPL(__imp__sub_82C357B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7664
	ctx.lr = 0x82C357B8;
	__savegprlr_23(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,0(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r23,r4
	ctx.r23.u64 = ctx.r4.u64;
	// lwz r11,36(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82c357f0
	if (ctx.cr6.eq) goto loc_82C357F0;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82c357f0
	if (ctx.cr6.eq) goto loc_82C357F0;
loc_82C357E4:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82c357e4
	if (ctx.cr6.lt) goto loc_82C357E4;
loc_82C357F0:
	// lwz r11,40(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82c35818
	if (ctx.cr6.eq) goto loc_82C35818;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82c35818
	if (ctx.cr6.eq) goto loc_82C35818;
loc_82C3580C:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82c3580c
	if (ctx.cr6.lt) goto loc_82C3580C;
loc_82C35818:
	// lis r4,24970
	ctx.r4.s64 = 1636433920;
	// li r3,1224
	ctx.r3.s64 = 1224;
	// ori r4,r4,32780
	ctx.r4.u64 = ctx.r4.u64 | 32780;
	// bl 0x82691410
	ctx.lr = 0x82C35828;
	sub_82691410(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x82c3583c
	if (!ctx.cr0.eq) goto loc_82C3583C;
	// lis r29,-32761
	ctx.r29.s64 = -2147024896;
	// ori r29,r29,14
	ctx.r29.u64 = ctx.r29.u64 | 14;
	// b 0x82c35a88
	goto loc_82C35A88;
loc_82C3583C:
	// lis r11,-31961
	ctx.r11.s64 = -2094596096;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r11,-23308
	ctx.r7.s64 = ctx.r11.s64 + -23308;
loc_82C35848:
	// mfmsr r9
	ctx.r9.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r7
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r7.u32);
	ctx.r10.u64 = __builtin_bswap32(ctx.reserved.u32);
	// cmpw cr6,r10,r8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x82c3586c
	if (!ctx.cr6.eq) goto loc_82C3586C;
	// stwcx. r31,0,r7
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r7.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r31.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x82c35848
	if (!ctx.cr0.eq) goto loc_82C35848;
	// b 0x82c35874
	goto loc_82C35874;
loc_82C3586C:
	// stwcx. r10,0,r7
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r7.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r10.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
loc_82C35874:
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82c3589c
	if (ctx.cr6.eq) goto loc_82C3589C;
	// lis r4,24970
	ctx.r4.s64 = 1636433920;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r4,r4,32780
	ctx.r4.u64 = ctx.r4.u64 | 32780;
	// bl 0x82691460
	ctx.lr = 0x82C35890;
	sub_82691460(ctx, base);
	// lis r29,-32768
	ctx.r29.s64 = -2147483648;
	// ori r29,r29,16389
	ctx.r29.u64 = ctx.r29.u64 | 16389;
	// b 0x82c35a84
	goto loc_82C35A84;
loc_82C3589C:
	// lis r11,-31961
	ctx.r11.s64 = -2094596096;
	// addi r29,r11,-23424
	ctx.r29.s64 = ctx.r11.s64 + -23424;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82c35638
	ctx.lr = 0x82C358AC;
	sub_82C35638(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r25,1
	ctx.r25.s64 = 1;
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// stw r25,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r25.u32);
	// li r5,52
	ctx.r5.s64 = 52;
	// stw r25,1216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1216, ctx.r25.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,2200(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2200);
	// lhz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 4);
	// subfic r11,r11,13300
	ctx.xer.ca = ctx.r11.u32 <= 13300;
	ctx.r11.s64 = 13300 - ctx.r11.s64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// stw r11,1220(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1220, ctx.r11.u32);
	// bl 0x82fa77c0
	ctx.lr = 0x82C358E8;
	sub_82FA77C0(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c342a0
	ctx.lr = 0x82C358F4;
	sub_82C342A0(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// blt 0x82c35a7c
	if (ctx.cr0.lt) goto loc_82C35A7C;
	// li r28,0
	ctx.r28.s64 = 0;
	// addi r27,r31,84
	ctx.r27.s64 = ctx.r31.s64 + 84;
loc_82C35904:
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// lwz r5,12(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// lwz r4,8(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c36af8
	ctx.lr = 0x82C3591C;
	sub_82C36AF8(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// blt 0x82c35a7c
	if (ctx.cr0.lt) goto loc_82C35A7C;
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r27,r27,4
	ctx.r27.s64 = ctx.r27.s64 + 4;
	// cmplwi cr6,r28,4
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 4, ctx.xer);
	// blt cr6,0x82c35904
	if (ctx.cr6.lt) goto loc_82C35904;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r26,0
	ctx.r26.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82c359a4
	if (!ctx.cr6.gt) goto loc_82C359A4;
	// li r28,0
	ctx.r28.s64 = 0;
	// addi r27,r31,100
	ctx.r27.s64 = ctx.r31.s64 + 100;
loc_82C3594C:
	// lwz r11,36(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82c35964
	if (ctx.cr6.eq) goto loc_82C35964;
	// lwzx r6,r28,r11
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r11.u32);
loc_82C35964:
	// lwz r11,40(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82c35974
	if (ctx.cr6.eq) goto loc_82C35974;
	// lwzx r7,r28,r11
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r11.u32);
loc_82C35974:
	// add r8,r27,r28
	ctx.r8.u64 = ctx.r27.u64 + ctx.r28.u64;
	// lwz r5,20(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,16(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// bl 0x82c3a260
	ctx.lr = 0x82C35988;
	sub_82C3A260(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// blt 0x82c35a7c
	if (ctx.cr0.lt) goto loc_82C35A7C;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// cmplw cr6,r26,r11
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82c3594c
	if (ctx.cr6.lt) goto loc_82C3594C;
loc_82C359A4:
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82a77608
	ctx.lr = 0x82C359B8;
	sub_82A77608(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,276(r31)
	PPC_STORE_U32(ctx.r31.u32 + 276, ctx.r3.u32);
	// bne 0x82c359d0
	if (!ctx.cr0.eq) goto loc_82C359D0;
loc_82C359C4:
	// lis r29,-32768
	ctx.r29.s64 = -2147483648;
	// ori r29,r29,16389
	ctx.r29.u64 = ctx.r29.u64 | 16389;
	// b 0x82c35a7c
	goto loc_82C35A7C;
loc_82C359D0:
	// li r4,9
	ctx.r4.s64 = 9;
	// li r3,5
	ctx.r3.s64 = 5;
	// bl 0x83179154
	ctx.lr = 0x82C359DC;
	__imp__XamNotifyCreateListener(ctx, base);
	// stw r3,284(r31)
	PPC_STORE_U32(ctx.r31.u32 + 284, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82c359c4
	if (ctx.cr0.eq) goto loc_82C359C4;
	// stw r25,288(r31)
	PPC_STORE_U32(ctx.r31.u32 + 288, ctx.r25.u32);
	// addi r3,r31,244
	ctx.r3.s64 = ctx.r31.s64 + 244;
	// bl 0x831791c4
	ctx.lr = 0x82C359F4;
	__imp__RtlInitializeCriticalSection(ctx, base);
	// lwz r11,8(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82c35a74
	if (!ctx.cr6.eq) goto loc_82C35A74;
	// lis r11,-32061
	ctx.r11.s64 = -2101149696;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// addi r5,r11,21896
	ctx.r5.s64 = ctx.r11.s64 + 21896;
	// lis r4,1
	ctx.r4.s64 = 65536;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82a8cc98
	ctx.lr = 0x82C35A24;
	sub_82A8CC98(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,236(r31)
	PPC_STORE_U32(ctx.r31.u32 + 236, ctx.r3.u32);
	// beq 0x82c359c4
	if (ctx.cr0.eq) goto loc_82C359C4;
	// li r4,-1
	ctx.r4.s64 = -1;
	// lwz r3,276(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 276);
	// bl 0x82a77600
	ctx.lr = 0x82C35A3C;
	sub_82A77600(ctx, base);
	// lwz r6,4(r24)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r24.u32 + 4);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x82c35a74
	if (ctx.cr6.eq) goto loc_82C35A74;
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r4,236(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 236);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82a7f488
	ctx.lr = 0x82C35A64;
	sub_82A7F488(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82c35a74
	if (!ctx.cr0.eq) goto loc_82C35A74;
	// lis r29,-32768
	ctx.r29.s64 = -2147483648;
	// ori r29,r29,16389
	ctx.r29.u64 = ctx.r29.u64 | 16389;
loc_82C35A74:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bge cr6,0x82c35a88
	if (!ctx.cr6.lt) goto loc_82C35A88;
loc_82C35A7C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c34c50
	ctx.lr = 0x82C35A84;
	sub_82C34C50(ctx, base);
loc_82C35A84:
	// li r31,0
	ctx.r31.s64 = 0;
loc_82C35A88:
	// stw r31,0(r23)
	PPC_STORE_U32(ctx.r23.u32 + 0, ctx.r31.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82fa76b4
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C35A98"))) PPC_WEAK_FUNC(sub_82C35A98);
PPC_FUNC_IMPL(__imp__sub_82C35A98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x82C35AA0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31961
	ctx.r11.s64 = -2094596096;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r31,r11,-23304
	ctx.r31.s64 = ctx.r11.s64 + -23304;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lwz r11,-23304(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -23304);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82c35ad8
	if (!ctx.cr6.eq) goto loc_82C35AD8;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// li r3,1164
	ctx.r3.s64 = 1164;
	// bl 0x82c32e80
	ctx.lr = 0x82C35ACC;
	sub_82C32E80(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82c35af0
	if (ctx.cr6.eq) goto loc_82C35AF0;
loc_82C35AD8:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82C35AEC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82c35af8
	goto loc_82C35AF8;
loc_82C35AF0:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
loc_82C35AF8:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C35B00"))) PPC_WEAK_FUNC(sub_82C35B00);
PPC_FUNC_IMPL(__imp__sub_82C35B00) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// li r11,4
	ctx.r11.s64 = 4;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r10,r10,84
	ctx.r10.s64 = ctx.r10.s64 + 84;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_82C35B18:
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82c35b38
	if (ctx.cr6.eq) goto loc_82C35B38;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addic r8,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// subfe r11,r8,r11
	temp.u8 = (~ctx.r8.u32 + ctx.r11.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r8.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// slw r11,r11,r9
	ctx.r11.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r9.u8 & 0x3F));
	// or r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 | ctx.r3.u64;
loc_82C35B38:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x82c35b18
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82C35B18;
	// li r4,1
	ctx.r4.s64 = 1;
	// b 0x82c35a98
	sub_82C35A98(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C35B4C"))) PPC_WEAK_FUNC(sub_82C35B4C);
PPC_FUNC_IMPL(__imp__sub_82C35B4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C35B50"))) PPC_WEAK_FUNC(sub_82C35B50);
PPC_FUNC_IMPL(__imp__sub_82C35B50) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,204(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 204);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C35B58"))) PPC_WEAK_FUNC(sub_82C35B58);
PPC_FUNC_IMPL(__imp__sub_82C35B58) {
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
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x83179dc4
	ctx.lr = 0x82C35B74;
	__imp__XamUserGetDeviceContext(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x82c35b84
	if (!ctx.cr0.lt) goto loc_82C35B84;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82c35b8c
	goto loc_82C35B8C;
loc_82C35B84:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// rlwinm r3,r11,0,0,3
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xF0000000;
loc_82C35B8C:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C35B9C"))) PPC_WEAK_FUNC(sub_82C35B9C);
PPC_FUNC_IMPL(__imp__sub_82C35B9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C35BA0"))) PPC_WEAK_FUNC(sub_82C35BA0);
PPC_FUNC_IMPL(__imp__sub_82C35BA0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x82C35BA8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,44(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82c35bf8
	if (!ctx.cr6.gt) goto loc_82C35BF8;
	// addi r29,r3,16
	ctx.r29.s64 = ctx.r3.s64 + 16;
loc_82C35BC8:
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82C35BDC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplw cr6,r28,r3
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x82c35c04
	if (ctx.cr6.eq) goto loc_82C35C04;
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82c35bc8
	if (ctx.cr6.lt) goto loc_82C35BC8;
loc_82C35BF8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82C35BFC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
loc_82C35C04:
	// addi r11,r30,4
	ctx.r11.s64 = ctx.r30.s64 + 4;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r31
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// b 0x82c35bfc
	goto loc_82C35BFC;
}

__attribute__((alias("__imp__sub_82C35C14"))) PPC_WEAK_FUNC(sub_82C35C14);
PPC_FUNC_IMPL(__imp__sub_82C35C14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C35C18"))) PPC_WEAK_FUNC(sub_82C35C18);
PPC_FUNC_IMPL(__imp__sub_82C35C18) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7670
	ctx.lr = 0x82C35C20;
	__savegprlr_26(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// li r26,0
	ctx.r26.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// mr r28,r26
	ctx.r28.u64 = ctx.r26.u64;
	// mr r27,r26
	ctx.r27.u64 = ctx.r26.u64;
	// beq cr6,0x82c35c74
	if (ctx.cr6.eq) goto loc_82C35C74;
	// bl 0x83179de4
	ctx.lr = 0x82C35C44;
	__imp__XamVoiceHeadsetPresent(ctx, base);
	// lwz r11,204(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 204);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82c35c60
	if (ctx.cr6.eq) goto loc_82C35C60;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82c35c68
	if (ctx.cr6.eq) goto loc_82C35C68;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82c35c70
	if (!ctx.cr6.eq) goto loc_82C35C70;
loc_82C35C60:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82c35c70
	if (ctx.cr6.eq) goto loc_82C35C70;
loc_82C35C68:
	// li r28,1
	ctx.r28.s64 = 1;
	// li r27,1
	ctx.r27.s64 = 1;
loc_82C35C70:
	// stw r3,204(r31)
	PPC_STORE_U32(ctx.r31.u32 + 204, ctx.r3.u32);
loc_82C35C74:
	// bl 0x83179db4
	ctx.lr = 0x82C35C78;
	__imp__XamVoiceIsActiveProcess(ctx, base);
	// lis r11,-31974
	ctx.r11.s64 = -2095448064;
	// addi r30,r11,11780
	ctx.r30.s64 = ctx.r11.s64 + 11780;
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// cmpw cr6,r11,r3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r3.s32, ctx.xer);
	// beq cr6,0x82c35ca0
	if (ctx.cr6.eq) goto loc_82C35CA0;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// li r28,1
	ctx.r28.s64 = 1;
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// li r27,1
	ctx.r27.s64 = 1;
	// stw r11,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r11.u32);
loc_82C35CA0:
	// lwz r11,156(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 156);
	// lwz r11,288(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 288);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82c35cbc
	if (!ctx.cr6.eq) goto loc_82C35CBC;
	// lwz r11,200(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 200);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82c35e3c
	if (ctx.cr6.eq) goto loc_82C35E3C;
loc_82C35CBC:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x83178ef4
	ctx.lr = 0x82C35CC4;
	__imp__XamUserGetSigninState(ctx, base);
	// lwz r11,200(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 200);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82c35ec8
	if (ctx.cr6.eq) goto loc_82C35EC8;
	// addi r30,r31,160
	ctx.r30.s64 = ctx.r31.s64 + 160;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a75860
	ctx.lr = 0x82C35CE8;
	sub_82A75860(ctx, base);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq cr6,0x82c35e10
	if (ctx.cr6.eq) goto loc_82C35E10;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82c35e10
	if (!ctx.cr6.eq) goto loc_82C35E10;
	// lwz r11,188(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 188);
	// mr r8,r26
	ctx.r8.u64 = ctx.r26.u64;
	// stw r26,200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 200, ctx.r26.u32);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82c35e3c
	if (!ctx.cr6.gt) goto loc_82C35E3C;
	// mr r9,r26
	ctx.r9.u64 = ctx.r26.u64;
loc_82C35D14:
	// lwz r11,188(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 188);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lwz r10,16(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// addis r10,r10,-4100
	ctx.r10.s64 = ctx.r10.s64 + -268697600;
	// addic. r10,r10,-12
	ctx.xer.ca = ctx.r10.u32 > 11;
	ctx.r10.s64 = ctx.r10.s64 + -12;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82c35dd4
	if (ctx.cr0.eq) goto loc_82C35DD4;
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// beq cr6,0x82c35d90
	if (ctx.cr6.eq) goto loc_82C35D90;
	// cmplwi cr6,r10,2
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 2, ctx.xer);
	// bne cr6,0x82c35df4
	if (!ctx.cr6.eq) goto loc_82C35DF4;
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// cmpwi cr6,r10,100
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 100, ctx.xer);
	// ble cr6,0x82c35d54
	if (!ctx.cr6.gt) goto loc_82C35D54;
	// li r10,100
	ctx.r10.s64 = 100;
	// stw r10,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r10.u32);
loc_82C35D54:
	// lwa r10,32(r11)
	ctx.r10.s64 = int32_t(PPC_LOAD_U32(ctx.r11.u32 + 32));
	// lfs f0,196(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 196);
	ctx.f0.f64 = double(temp.f32);
	// std r10,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r10.u64);
	// lfd f13,104(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// beq cr6,0x82c35df4
	if (ctx.cr6.eq) goto loc_82C35DF4;
	// stb r26,214(r31)
	PPC_STORE_U8(ctx.r31.u32 + 214, ctx.r26.u8);
	// li r28,1
	ctx.r28.s64 = 1;
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// rlwinm r11,r11,8,0,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFFFFFF00;
	// lwz r10,212(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 212);
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// b 0x82c35df0
	goto loc_82C35DF0;
loc_82C35D90:
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lwz r10,212(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 212);
	// beq cr6,0x82c35da8
	if (ctx.cr6.eq) goto loc_82C35DA8;
	// ori r10,r10,2
	ctx.r10.u64 = ctx.r10.u64 | 2;
	// b 0x82c35dac
	goto loc_82C35DAC;
loc_82C35DA8:
	// rlwinm r10,r10,0,31,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
loc_82C35DAC:
	// stw r10,212(r31)
	PPC_STORE_U32(ctx.r31.u32 + 212, ctx.r10.u32);
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// beq cr6,0x82c35dc8
	if (ctx.cr6.eq) goto loc_82C35DC8;
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
	// b 0x82c35dcc
	goto loc_82C35DCC;
loc_82C35DC8:
	// rlwinm r11,r11,0,30,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
loc_82C35DCC:
	// li r27,1
	ctx.r27.s64 = 1;
	// b 0x82c35df0
	goto loc_82C35DF0;
loc_82C35DD4:
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,212(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 212);
	// beq cr6,0x82c35dec
	if (ctx.cr6.eq) goto loc_82C35DEC;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// b 0x82c35df0
	goto loc_82C35DF0;
loc_82C35DEC:
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
loc_82C35DF0:
	// stw r11,212(r31)
	PPC_STORE_U32(ctx.r31.u32 + 212, ctx.r11.u32);
loc_82C35DF4:
	// lwz r11,188(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 188);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r9,r9,40
	ctx.r9.s64 = ctx.r9.s64 + 40;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r8,r11
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82c35d14
	if (ctx.cr6.lt) goto loc_82C35D14;
	// b 0x82c35e3c
	goto loc_82C35E3C;
loc_82C35E10:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,997
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 997, ctx.xer);
	// beq cr6,0x82c35e3c
	if (ctx.cr6.eq) goto loc_82C35E3C;
	// stw r26,200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 200, ctx.r26.u32);
loc_82C35E20:
	// lis r11,2
	ctx.r11.s64 = 131072;
	// lwz r10,212(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 212);
	// ori r11,r11,25604
	ctx.r11.u64 = ctx.r11.u64 | 25604;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82c35e3c
	if (ctx.cr6.eq) goto loc_82C35E3C;
	// stw r11,212(r31)
	PPC_STORE_U32(ctx.r31.u32 + 212, ctx.r11.u32);
	// li r28,1
	ctx.r28.s64 = 1;
loc_82C35E3C:
	// cmpwi cr6,r27,1
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 1, ctx.xer);
	// bne cr6,0x82c35e7c
	if (!ctx.cr6.eq) goto loc_82C35E7C;
loc_82C35E44:
	// li r30,100
	ctx.r30.s64 = 100;
loc_82C35E48:
	// lwz r11,156(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 156);
	// lwzx r10,r30,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82c35e6c
	if (ctx.cr6.eq) goto loc_82C35E6C;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// ld r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 0);
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// beq cr6,0x82c35e6c
	if (ctx.cr6.eq) goto loc_82C35E6C;
	// bl 0x82c398c0
	ctx.lr = 0x82C35E6C;
	sub_82C398C0(ctx, base);
loc_82C35E6C:
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmplwi cr6,r30,236
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 236, ctx.xer);
	// blt cr6,0x82c35e48
	if (ctx.cr6.lt) goto loc_82C35E48;
	// li r28,1
	ctx.r28.s64 = 1;
loc_82C35E7C:
	// cmpwi cr6,r28,1
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 1, ctx.xer);
	// bne cr6,0x82c35ec0
	if (!ctx.cr6.eq) goto loc_82C35EC0;
	// lwz r11,212(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 212);
	// lis r10,-32232
	ctx.r10.s64 = -2112356352;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,156(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 156);
	// rlwinm r11,r11,0,29,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF7;
	// stw r11,212(r31)
	PPC_STORE_U32(ctx.r31.u32 + 212, ctx.r11.u32);
	// lbz r11,214(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 214);
	// lfs f0,-14924(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -14924);
	ctx.f0.f64 = double(temp.f32);
	// std r11,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r11.u64);
	// lfd f13,104(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f0,196(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 196, temp.u32);
	// bl 0x82c34980
	ctx.lr = 0x82C35EC0;
	sub_82C34980(ctx, base);
loc_82C35EC0:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82fa76c0
	__restgprlr_26(ctx, base);
	return;
loc_82C35EC8:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq cr6,0x82c35e20
	if (ctx.cr6.eq) goto loc_82C35E20;
	// lis r3,-2
	ctx.r3.s64 = -131072;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r11,r31,160
	ctx.r11.s64 = ctx.r31.s64 + 160;
	// lwz r10,188(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 188);
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// addi r9,r31,192
	ctx.r9.s64 = ctx.r31.s64 + 192;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r7,3
	ctx.r7.s64 = 3;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// ori r3,r3,2001
	ctx.r3.u64 = ctx.r3.u64 | 2001;
	// bl 0x83179dd4
	ctx.lr = 0x82C35F00;
	__imp__XamUserReadProfileSettings(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82c35f2c
	if (ctx.cr0.eq) goto loc_82C35F2C;
	// cmplwi cr6,r3,997
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 997, ctx.xer);
	// beq cr6,0x82c35f2c
	if (ctx.cr6.eq) goto loc_82C35F2C;
	// lis r11,2
	ctx.r11.s64 = 131072;
	// lwz r10,212(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 212);
	// ori r11,r11,25604
	ctx.r11.u64 = ctx.r11.u64 | 25604;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82c35f34
	if (ctx.cr6.eq) goto loc_82C35F34;
	// stw r11,212(r31)
	PPC_STORE_U32(ctx.r31.u32 + 212, ctx.r11.u32);
	// b 0x82c35f34
	goto loc_82C35F34;
loc_82C35F2C:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 200, ctx.r11.u32);
loc_82C35F34:
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,252
	ctx.r4.s64 = 252;
	// bl 0x83178f14
	ctx.lr = 0x82C35F44;
	__imp__XamUserCheckPrivilege(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82c35f8c
	if (!ctx.cr0.eq) goto loc_82C35F8C;
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82c35f8c
	if (ctx.cr6.eq) goto loc_82C35F8C;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,251
	ctx.r4.s64 = 251;
	// bl 0x83178f14
	ctx.lr = 0x82C35F68;
	__imp__XamUserCheckPrivilege(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82c35f84
	if (!ctx.cr0.eq) goto loc_82C35F84;
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82c35f84
	if (!ctx.cr6.eq) goto loc_82C35F84;
	// lis r11,1
	ctx.r11.s64 = 65536;
	// b 0x82c35f90
	goto loc_82C35F90;
loc_82C35F84:
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// b 0x82c35f90
	goto loc_82C35F90;
loc_82C35F8C:
	// lis r11,2
	ctx.r11.s64 = 131072;
loc_82C35F90:
	// lwz r10,156(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 156);
	// lwz r10,36(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82c35fa4
	if (ctx.cr6.eq) goto loc_82C35FA4;
	// lis r11,2
	ctx.r11.s64 = 131072;
loc_82C35FA4:
	// lwz r10,212(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 212);
	// rlwinm r10,r10,0,16,11
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFF0FFFF;
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// stw r11,212(r31)
	PPC_STORE_U32(ctx.r31.u32 + 212, ctx.r11.u32);
	// b 0x82c35e44
	goto loc_82C35E44;
}

__attribute__((alias("__imp__sub_82C35FB8"))) PPC_WEAK_FUNC(sub_82C35FB8);
PPC_FUNC_IMPL(__imp__sub_82C35FB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7658
	ctx.lr = 0x82C35FC0;
	__savegprlr_20(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r22,0
	ctx.r22.s64 = 0;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// li r20,1
	ctx.r20.s64 = 1;
	// li r21,2
	ctx.r21.s64 = 2;
	// mr r29,r22
	ctx.r29.u64 = ctx.r22.u64;
	// addi r23,r3,84
	ctx.r23.s64 = ctx.r3.s64 + 84;
loc_82C35FE4:
	// mfmsr r10
	ctx.r10.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r23
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r23.u32);
	ctx.r11.u64 = __builtin_bswap32(ctx.reserved.u32);
	// cmpw cr6,r11,r20
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r20.s32, ctx.xer);
	// bne cr6,0x82c36008
	if (!ctx.cr6.eq) goto loc_82C36008;
	// stwcx. r21,0,r23
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r23.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r21.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r10,1
	ctx.msr = (ctx.r10.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x82c35fe4
	if (!ctx.cr0.eq) goto loc_82C35FE4;
	// b 0x82c36010
	goto loc_82C36010;
loc_82C36008:
	// stwcx. r11,0,r23
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r23.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r11.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r10,1
	ctx.msr = (ctx.r10.u32 & 0x8020) | (ctx.msr & ~0x8020);
loc_82C36010:
	// mr r11,r11
	ctx.r11.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82c36194
	if (!ctx.cr6.eq) goto loc_82C36194;
	// lwz r11,12(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82c36190
	if (ctx.cr6.eq) goto loc_82C36190;
	// lwz r11,212(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 212);
	// rlwinm. r11,r11,0,12,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xF0000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82c36190
	if (ctx.cr0.eq) goto loc_82C36190;
	// addi r26,r27,80
	ctx.r26.s64 = ctx.r27.s64 + 80;
	// mr r29,r22
	ctx.r29.u64 = ctx.r22.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// mr r31,r22
	ctx.r31.u64 = ctx.r22.u64;
	// bl 0x83179274
	ctx.lr = 0x82C36048;
	__imp__KfAcquireSpinLock(ctx, base);
	// lwz r11,64(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 64);
	// addi r28,r27,64
	ctx.r28.s64 = ctx.r27.s64 + 64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x82c36078
	goto loc_82C36078;
loc_82C36058:
	// cmplw cr6,r31,r25
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r25.u32, ctx.xer);
	// bge cr6,0x82c36080
	if (!ctx.cr6.lt) goto loc_82C36080;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,12(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// subf r10,r10,r9
	ctx.r10.s64 = ctx.r9.s64 - ctx.r10.s64;
	// add r31,r10,r31
	ctx.r31.u64 = ctx.r10.u64 + ctx.r31.u64;
loc_82C36078:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82c36058
	if (!ctx.cr6.eq) goto loc_82C36058;
loc_82C36080:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x83179294
	ctx.lr = 0x82C36088;
	__imp__KfReleaseSpinLock(ctx, base);
	// cmplw cr6,r31,r25
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r25.u32, ctx.xer);
	// blt cr6,0x82c36194
	if (ctx.cr6.lt) goto loc_82C36194;
	// lwz r31,0(r28)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// b 0x82c36184
	goto loc_82C36184;
loc_82C36098:
	// cmplw cr6,r29,r25
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r25.u32, ctx.xer);
	// bge cr6,0x82c36194
	if (!ctx.cr6.lt) goto loc_82C36194;
	// lwz r11,0(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x82c36194
	if (ctx.cr6.eq) goto loc_82C36194;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// subf r9,r29,r25
	ctx.r9.s64 = ctx.r25.s64 - ctx.r29.s64;
	// mr r30,r9
	ctx.r30.u64 = ctx.r9.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// subf r8,r10,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r10.s64;
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x82c360d0
	if (ctx.cr6.lt) goto loc_82C360D0;
	// mr r30,r8
	ctx.r30.u64 = ctx.r8.u64;
loc_82C360D0:
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// add r4,r29,r24
	ctx.r4.u64 = ctx.r29.u64 + ctx.r24.u64;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x82fa77c0
	ctx.lr = 0x82C360E4;
	sub_82FA77C0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// add r9,r9,r30
	ctx.r9.u64 = ctx.r9.u64 + ctx.r30.u64;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82c36100
	if (!ctx.cr6.lt) goto loc_82C36100;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
loc_82C36100:
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82c36180
	if (!ctx.cr6.eq) goto loc_82C36180;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x83179274
	ctx.lr = 0x82C3611C;
	__imp__KfAcquireSpinLock(ctx, base);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82c36148
	if (ctx.cr6.eq) goto loc_82C36148;
	// lwz r10,4(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82c3613c
	if (!ctx.cr6.eq) goto loc_82C3613C;
	// stw r22,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r22.u32);
loc_82C3613C:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r10.u32);
	// stw r22,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r22.u32);
loc_82C36148:
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82c36174
	if (!ctx.cr6.eq) goto loc_82C36174;
	// stw r22,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r22.u32);
	// addi r11,r27,72
	ctx.r11.s64 = ctx.r27.s64 + 72;
	// lwz r10,76(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 76);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82c3616c
	if (ctx.cr6.eq) goto loc_82C3616C;
	// stw r31,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r31.u32);
	// b 0x82c36170
	goto loc_82C36170;
loc_82C3616C:
	// stw r31,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r31.u32);
loc_82C36170:
	// stw r31,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r31.u32);
loc_82C36174:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x83179294
	ctx.lr = 0x82C3617C;
	__imp__KfReleaseSpinLock(ctx, base);
	// lwz r31,0(r28)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
loc_82C36180:
	// add r29,r30,r29
	ctx.r29.u64 = ctx.r30.u64 + ctx.r29.u64;
loc_82C36184:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82c36098
	if (!ctx.cr6.eq) goto loc_82C36098;
	// b 0x82c36194
	goto loc_82C36194;
loc_82C36190:
	// mr r29,r25
	ctx.r29.u64 = ctx.r25.u64;
loc_82C36194:
	// li r10,3
	ctx.r10.s64 = 3;
loc_82C36198:
	// mfmsr r9
	ctx.r9.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r23
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r23.u32);
	ctx.r11.u64 = __builtin_bswap32(ctx.reserved.u32);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x82c361bc
	if (!ctx.cr6.eq) goto loc_82C361BC;
	// stwcx. r22,0,r23
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r23.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r22.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x82c36198
	if (!ctx.cr0.eq) goto loc_82C36198;
	// b 0x82c3623c
	goto loc_82C3623C;
loc_82C361BC:
	// stwcx. r11,0,r23
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r23.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r11.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// b 0x82c3623c
	goto loc_82C3623C;
loc_82C361C8:
	// mfmsr r9
	ctx.r9.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r23
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r23.u32);
	ctx.r11.u64 = __builtin_bswap32(ctx.reserved.u32);
	// cmpw cr6,r11,r21
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r21.s32, ctx.xer);
	// bne cr6,0x82c361ec
	if (!ctx.cr6.eq) goto loc_82C361EC;
	// stwcx. r20,0,r23
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r23.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r20.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x82c361c8
	if (!ctx.cr0.eq) goto loc_82C361C8;
	// b 0x82c361f4
	goto loc_82C361F4;
loc_82C361EC:
	// stwcx. r11,0,r23
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r23.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r11.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
loc_82C361F4:
	// mr r11,r11
	ctx.r11.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82c36248
	if (ctx.cr6.eq) goto loc_82C36248;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82c36248
	if (ctx.cr6.eq) goto loc_82C36248;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82c36248
	if (ctx.cr6.eq) goto loc_82C36248;
loc_82C36210:
	// mfmsr r9
	ctx.r9.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r23
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r23.u32);
	ctx.r11.u64 = __builtin_bswap32(ctx.reserved.u32);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x82c36234
	if (!ctx.cr6.eq) goto loc_82C36234;
	// stwcx. r22,0,r23
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r23.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r22.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x82c36210
	if (!ctx.cr0.eq) goto loc_82C36210;
	// b 0x82c3623c
	goto loc_82C3623C;
loc_82C36234:
	// stwcx. r11,0,r23
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r23.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r11.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
loc_82C3623C:
	// mr r11,r11
	ctx.r11.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82c361c8
	if (!ctx.cr6.eq) goto loc_82C361C8;
loc_82C36248:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82fa76a8
	__restgprlr_20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C36254"))) PPC_WEAK_FUNC(sub_82C36254);
PPC_FUNC_IMPL(__imp__sub_82C36254) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C36258"))) PPC_WEAK_FUNC(sub_82C36258);
PPC_FUNC_IMPL(__imp__sub_82C36258) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x82C36260;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r3,160
	ctx.r3.s64 = ctx.r3.s64 + 160;
	// addi r30,r31,84
	ctx.r30.s64 = ctx.r31.s64 + 84;
	// bl 0x83178fe4
	ctx.lr = 0x82C36278;
	__imp__XMsgCancelIORequest(ctx, base);
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// li r29,1
	ctx.r29.s64 = 1;
	// li r28,0
	ctx.r28.s64 = 0;
	// b 0x82c362f8
	goto loc_82C362F8;
loc_82C36288:
	// li r11,2
	ctx.r11.s64 = 2;
	// li r8,3
	ctx.r8.s64 = 3;
loc_82C36290:
	// mfmsr r9
	ctx.r9.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r30
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r30.u32);
	ctx.r10.u64 = __builtin_bswap32(ctx.reserved.u32);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x82c362b4
	if (!ctx.cr6.eq) goto loc_82C362B4;
	// stwcx. r8,0,r30
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r30.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r8.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x82c36290
	if (!ctx.cr0.eq) goto loc_82C36290;
	// b 0x82c362bc
	goto loc_82C362BC;
loc_82C362B4:
	// stwcx. r10,0,r30
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r30.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r10.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
loc_82C362BC:
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmplwi cr6,r10,2
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 2, ctx.xer);
	// beq cr6,0x82c36304
	if (ctx.cr6.eq) goto loc_82C36304;
loc_82C362C8:
	// mfmsr r10
	ctx.r10.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r30
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r30.u32);
	ctx.r11.u64 = __builtin_bswap32(ctx.reserved.u32);
	// cmpw cr6,r11,r29
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r29.s32, ctx.xer);
	// bne cr6,0x82c362ec
	if (!ctx.cr6.eq) goto loc_82C362EC;
	// stwcx. r28,0,r30
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r30.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r28.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r10,1
	ctx.msr = (ctx.r10.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x82c362c8
	if (!ctx.cr0.eq) goto loc_82C362C8;
	// b 0x82c362f4
	goto loc_82C362F4;
loc_82C362EC:
	// stwcx. r11,0,r30
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r30.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r11.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r10,1
	ctx.msr = (ctx.r10.u32 & 0x8020) | (ctx.msr & ~0x8020);
loc_82C362F4:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
loc_82C362F8:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82c36288
	if (!ctx.cr6.eq) goto loc_82C36288;
	// b 0x82c36310
	goto loc_82C36310;
loc_82C36304:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82c36304
	if (!ctx.cr6.eq) goto loc_82C36304;
loc_82C36310:
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82c36324
	if (ctx.cr6.eq) goto loc_82C36324;
	// bl 0x83179df4
	ctx.lr = 0x82C36320;
	__imp__XamVoiceClose(ctx, base);
	// stw r28,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r28.u32);
loc_82C36324:
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x82c3be38
	ctx.lr = 0x82C3632C;
	sub_82C3BE38(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r3,156(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 156);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lfs f0,5184(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5184);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,196(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 196, temp.u32);
	// bl 0x82c34980
	ctx.lr = 0x82C36344;
	sub_82C34980(ctx, base);
	// stw r29,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r29.u32);
	// lwz r3,156(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 156);
	// bl 0x82c35b00
	ctx.lr = 0x82C36350;
	sub_82C35B00(ctx, base);
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82c3638c
	if (!ctx.cr6.gt) goto loc_82C3638C;
	// addi r29,r31,32
	ctx.r29.s64 = ctx.r31.s64 + 32;
loc_82C36364:
	// lwz r3,-16(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + -16);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82C36378;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// stwu r28,4(r29)
	ea = 4 + ctx.r29.u32;
	PPC_STORE_U32(ea, ctx.r28.u32);
	ctx.r29.u32 = ea;
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82c36364
	if (ctx.cr6.lt) goto loc_82C36364;
loc_82C3638C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C36394"))) PPC_WEAK_FUNC(sub_82C36394);
PPC_FUNC_IMPL(__imp__sub_82C36394) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C36398"))) PPC_WEAK_FUNC(sub_82C36398);
PPC_FUNC_IMPL(__imp__sub_82C36398) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7670
	ctx.lr = 0x82C363A0;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r26,-32761
	ctx.r26.s64 = -2147024896;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// ori r26,r26,87
	ctx.r26.u64 = ctx.r26.u64 | 87;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82c36424
	if (ctx.cr6.eq) goto loc_82C36424;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// addi r30,r3,36
	ctx.r30.s64 = ctx.r3.s64 + 36;
loc_82C363C8:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82c35ba0
	ctx.lr = 0x82C363D4;
	sub_82C35BA0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82c36424
	if (ctx.cr0.eq) goto loc_82C36424;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82C363EC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// mr. r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// blt 0x82c36414
	if (ctx.cr0.lt) goto loc_82C36414;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmplw cr6,r29,r27
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r27.u32, ctx.xer);
	// blt cr6,0x82c363c8
	if (ctx.cr6.lt) goto loc_82C363C8;
	// b 0x82c36424
	goto loc_82C36424;
loc_82C36414:
	// addi r11,r29,9
	ctx.r11.s64 = ctx.r29.s64 + 9;
	// li r10,0
	ctx.r10.s64 = 0;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r10,r11,r28
	PPC_STORE_U32(ctx.r11.u32 + ctx.r28.u32, ctx.r10.u32);
loc_82C36424:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82fa76c0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C36430"))) PPC_WEAK_FUNC(sub_82C36430);
PPC_FUNC_IMPL(__imp__sub_82C36430) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7674
	ctx.lr = 0x82C36438;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x82c364a8
	if (ctx.cr6.eq) goto loc_82C364A8;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// addi r30,r3,36
	ctx.r30.s64 = ctx.r3.s64 + 36;
	// subf r27,r5,r4
	ctx.r27.s64 = ctx.r4.s64 - ctx.r5.s64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
loc_82C36458:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwzx r4,r27,r31
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r31.u32);
	// bl 0x82c35ba0
	ctx.lr = 0x82C36464;
	sub_82C35BA0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82c36490
	if (ctx.cr0.eq) goto loc_82C36490;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82c36490
	if (ctx.cr6.eq) goto loc_82C36490;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82C36488;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82c36494
	goto loc_82C36494;
loc_82C36490:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82C36494:
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// bne 0x82c36458
	if (!ctx.cr0.eq) goto loc_82C36458;
loc_82C364A8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C364B0"))) PPC_WEAK_FUNC(sub_82C364B0);
PPC_FUNC_IMPL(__imp__sub_82C364B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7670
	ctx.lr = 0x82C364B8;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r26,-32761
	ctx.r26.s64 = -2147024896;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// ori r26,r26,87
	ctx.r26.u64 = ctx.r26.u64 | 87;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82c3653c
	if (ctx.cr6.eq) goto loc_82C3653C;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r31,r3,36
	ctx.r31.s64 = ctx.r3.s64 + 36;
loc_82C364E0:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x82c35ba0
	ctx.lr = 0x82C364EC;
	sub_82C35BA0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82c3653c
	if (ctx.cr0.eq) goto loc_82C3653C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82C36504;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr. r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// blt 0x82c3652c
	if (ctx.cr0.lt) goto loc_82C3652C;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmplw cr6,r29,r27
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r27.u32, ctx.xer);
	// blt cr6,0x82c364e0
	if (ctx.cr6.lt) goto loc_82C364E0;
	// b 0x82c3653c
	goto loc_82C3653C;
loc_82C3652C:
	// addi r11,r29,9
	ctx.r11.s64 = ctx.r29.s64 + 9;
	// li r10,1
	ctx.r10.s64 = 1;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r10,r11,r28
	PPC_STORE_U32(ctx.r11.u32 + ctx.r28.u32, ctx.r10.u32);
loc_82C3653C:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82fa76c0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C36548"))) PPC_WEAK_FUNC(sub_82C36548);
PPC_FUNC_IMPL(__imp__sub_82C36548) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa766c
	ctx.lr = 0x82C36550;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,44(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// li r25,0
	ctx.r25.s64 = 0;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// mr r28,r25
	ctx.r28.u64 = ctx.r25.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// beq cr6,0x82c365e0
	if (ctx.cr6.eq) goto loc_82C365E0;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// addi r31,r3,36
	ctx.r31.s64 = ctx.r3.s64 + 36;
	// subf r27,r5,r4
	ctx.r27.s64 = ctx.r4.s64 - ctx.r5.s64;
loc_82C3657C:
	// lwz r29,-20(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + -20);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82C36594;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stwx r3,r27,r30
	PPC_STORE_U32(ctx.r27.u32 + ctx.r30.u32, ctx.r3.u32);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82c365c4
	if (ctx.cr6.eq) goto loc_82C365C4;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82C365BC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r25,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r25.u32);
	// b 0x82c365c8
	goto loc_82C365C8;
loc_82C365C4:
	// stw r25,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r25.u32);
loc_82C365C8:
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82c3657c
	if (ctx.cr6.lt) goto loc_82C3657C;
loc_82C365E0:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82fa76bc
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C365E8"))) PPC_WEAK_FUNC(sub_82C365E8);
PPC_FUNC_IMPL(__imp__sub_82C365E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa766c
	ctx.lr = 0x82C365F0;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// bl 0x82c35c18
	ctx.lr = 0x82C365FC;
	sub_82C35C18(ctx, base);
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82c36610
	if (!ctx.cr6.eq) goto loc_82C36610;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82c36838
	goto loc_82C36838;
loc_82C36610:
	// lwz r31,88(r26)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r26.u32 + 88);
	// addi r29,r26,88
	ctx.r29.s64 = ctx.r26.s64 + 88;
	// li r25,0
	ctx.r25.s64 = 0;
	// b 0x82c366c4
	goto loc_82C366C4;
loc_82C36620:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r11,259
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 259, ctx.xer);
	// beq cr6,0x82c366cc
	if (ctx.cr6.eq) goto loc_82C366CC;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82c36658
	if (ctx.cr6.eq) goto loc_82C36658;
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82c3664c
	if (!ctx.cr6.eq) goto loc_82C3664C;
	// stw r25,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r25.u32);
loc_82C3664C:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r10.u32);
	// stw r25,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r25.u32);
loc_82C36658:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,20(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x82c3667c
	if (!ctx.cr6.eq) goto loc_82C3667C;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r25,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r25.u32);
loc_82C3667C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r30,r26,80
	ctx.r30.s64 = ctx.r26.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r25,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r25.u32);
	// bl 0x83179274
	ctx.lr = 0x82C36690;
	__imp__KfAcquireSpinLock(ctx, base);
	// stw r25,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r25.u32);
	// lwz r10,68(r26)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r26.u32 + 68);
	// addi r11,r26,64
	ctx.r11.s64 = ctx.r26.s64 + 64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82c366b0
	if (ctx.cr6.eq) goto loc_82C366B0;
	// stw r31,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r31.u32);
	// b 0x82c366b4
	goto loc_82C366B4;
loc_82C366B0:
	// stw r31,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r31.u32);
loc_82C366B4:
	// stw r31,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r31.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83179294
	ctx.lr = 0x82C366C0;
	__imp__KfReleaseSpinLock(ctx, base);
	// lwz r31,0(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
loc_82C366C4:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82c36620
	if (!ctx.cr6.eq) goto loc_82C36620;
loc_82C366CC:
	// lwz r31,72(r26)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r26.u32 + 72);
	// addi r27,r26,72
	ctx.r27.s64 = ctx.r26.s64 + 72;
	// b 0x82c367c8
	goto loc_82C367C8;
loc_82C366D8:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// subf. r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82c367ec
	if (!ctx.cr0.eq) goto loc_82C367EC;
	// addi r30,r26,80
	ctx.r30.s64 = ctx.r26.s64 + 80;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83179274
	ctx.lr = 0x82C366F8;
	__imp__KfAcquireSpinLock(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82c377c0
	ctx.lr = 0x82C36704;
	sub_82C377C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82c3671c
	if (!ctx.cr0.eq) goto loc_82C3671C;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82c377c0
	ctx.lr = 0x82C36714;
	sub_82C377C0(ctx, base);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// ble cr6,0x82c367d4
	if (!ctx.cr6.gt) goto loc_82C367D4;
loc_82C3671C:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82c36744
	if (ctx.cr6.eq) goto loc_82C36744;
	// lwz r10,4(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82c36738
	if (!ctx.cr6.eq) goto loc_82C36738;
	// stw r25,4(r27)
	PPC_STORE_U32(ctx.r27.u32 + 4, ctx.r25.u32);
loc_82C36738:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r10.u32);
	// stw r25,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r25.u32);
loc_82C36744:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83179294
	ctx.lr = 0x82C36750;
	__imp__KfReleaseSpinLock(ctx, base);
	// stw r25,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r25.u32);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82c36768
	if (ctx.cr6.eq) goto loc_82C36768;
	// stw r31,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r31.u32);
	// b 0x82c3676c
	goto loc_82C3676C;
loc_82C36768:
	// stw r31,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r31.u32);
loc_82C3676C:
	// stw r31,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r31.u32);
	// addi r7,r26,96
	ctx.r7.s64 = ctx.r26.s64 + 96;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r4,8(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// rlwinm r6,r11,31,1,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// bl 0x82c3a4c8
	ctx.lr = 0x82C36790;
	sub_82C3A4C8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r10,1
	ctx.r10.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// rlwinm r9,r9,30,2,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0x3FFFFFFF;
	// stw r9,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r9.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r10,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// lwz r5,0(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r3,12(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 12);
	// bl 0x83179e04
	ctx.lr = 0x82C367BC;
	__imp__XamVoiceSubmitPacket(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82c367e4
	if (ctx.cr0.lt) goto loc_82C367E4;
	// lwz r31,0(r27)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
loc_82C367C8:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82c366d8
	if (!ctx.cr6.eq) goto loc_82C366D8;
	// b 0x82c367ec
	goto loc_82C367EC;
loc_82C367D4:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83179294
	ctx.lr = 0x82C367E0;
	__imp__KfReleaseSpinLock(ctx, base);
	// b 0x82c367ec
	goto loc_82C367EC;
loc_82C367E4:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r25,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r25.u32);
loc_82C367EC:
	// lwz r3,8(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// bl 0x82c3bef8
	ctx.lr = 0x82C367F4;
	sub_82C3BEF8(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// blt 0x82c36834
	if (ctx.cr0.lt) goto loc_82C36834;
	// lwz r11,44(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 44);
	// mr r31,r25
	ctx.r31.u64 = ctx.r25.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82c36834
	if (!ctx.cr6.gt) goto loc_82C36834;
	// addi r30,r26,12
	ctx.r30.s64 = ctx.r26.s64 + 12;
loc_82C36810:
	// lwzu r3,4(r30)
	ea = 4 + ctx.r30.u32;
	ctx.r3.u64 = PPC_LOAD_U32(ea);
	ctx.r30.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82C36824;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,44(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 44);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82c36810
	if (ctx.cr6.lt) goto loc_82C36810;
loc_82C36834:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
loc_82C36838:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82fa76bc
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C36840"))) PPC_WEAK_FUNC(sub_82C36840);
PPC_FUNC_IMPL(__imp__sub_82C36840) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x82C36848;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-32761
	ctx.r31.s64 = -2147024896;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// ori r31,r31,87
	ctx.r31.u64 = ctx.r31.u64 | 87;
	// bl 0x82c35ba0
	ctx.lr = 0x82C36864;
	sub_82C35BA0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82c3688c
	if (ctx.cr0.eq) goto loc_82C3688C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82C36888;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_82C3688C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C36898"))) PPC_WEAK_FUNC(sub_82C36898);
PPC_FUNC_IMPL(__imp__sub_82C36898) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7674
	ctx.lr = 0x82C368A0;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r5,12
	ctx.r5.s64 = 12;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82a75988
	ctx.lr = 0x82C368BC;
	sub_82A75988(ctx, base);
	// lwz r11,56(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 56);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82c3692c
	if (!ctx.cr6.gt) goto loc_82C3692C;
	// addi r31,r28,48
	ctx.r31.s64 = ctx.r28.s64 + 48;
loc_82C368D0:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r10,r11,16
	ctx.r10.s64 = ctx.r11.s64 + 16;
	// lwz r8,24(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// lwz r29,12(r8)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
loc_82C368E4:
	// lwz r8,-8(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + -8);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82c368fc
	if (ctx.cr6.eq) goto loc_82C368FC;
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r8,1
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 1, ctx.xer);
	// beq cr6,0x82c36934
	if (ctx.cr6.eq) goto loc_82C36934;
loc_82C368FC:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplwi cr6,r9,2
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 2, ctx.xer);
	// blt cr6,0x82c368e4
	if (ctx.cr6.lt) goto loc_82C368E4;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82C36910:
	// rlwinm r11,r29,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// stwx r3,r11,r27
	PPC_STORE_U32(ctx.r11.u32 + ctx.r27.u32, ctx.r3.u32);
	// lwz r11,56(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 56);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82c368d0
	if (ctx.cr6.lt) goto loc_82C368D0;
loc_82C3692C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c4
	__restgprlr_27(ctx, base);
	return;
loc_82C36934:
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// bl 0x82c377c0
	ctx.lr = 0x82C36940;
	sub_82C377C0(ctx, base);
	// b 0x82c36910
	goto loc_82C36910;
}

__attribute__((alias("__imp__sub_82C36944"))) PPC_WEAK_FUNC(sub_82C36944);
PPC_FUNC_IMPL(__imp__sub_82C36944) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C36948"))) PPC_WEAK_FUNC(sub_82C36948);
PPC_FUNC_IMPL(__imp__sub_82C36948) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x82C36950;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82c36a30
	if (ctx.cr6.eq) goto loc_82C36A30;
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82c36978
	if (ctx.cr6.eq) goto loc_82C36978;
	// bl 0x83179df4
	ctx.lr = 0x82C36974;
	__imp__XamVoiceClose(ctx, base);
	// stw r28,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r28.u32);
loc_82C36978:
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x82c3c390
	ctx.lr = 0x82C36980;
	sub_82C3C390(ctx, base);
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
	// stw r28,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r28.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82c369b4
	if (!ctx.cr6.gt) goto loc_82C369B4;
	// addi r30,r31,44
	ctx.r30.s64 = ctx.r31.s64 + 44;
loc_82C36998:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x82c37630
	ctx.lr = 0x82C369A0;
	sub_82C37630(ctx, base);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// stwu r28,4(r30)
	ea = 4 + ctx.r30.u32;
	PPC_STORE_U32(ea, ctx.r28.u32);
	ctx.r30.u32 = ea;
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82c36998
	if (ctx.cr6.lt) goto loc_82C36998;
loc_82C369B4:
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82c369f0
	if (!ctx.cr6.gt) goto loc_82C369F0;
	// addi r30,r31,12
	ctx.r30.s64 = ctx.r31.s64 + 12;
loc_82C369C8:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82C369DC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// stwu r28,4(r30)
	ea = 4 + ctx.r30.u32;
	PPC_STORE_U32(ea, ctx.r28.u32);
	ctx.r30.u32 = ea;
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82c369c8
	if (ctx.cr6.lt) goto loc_82C369C8;
loc_82C369F0:
	// lwz r3,60(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// bl 0x82c37960
	ctx.lr = 0x82C369F8;
	sub_82C37960(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r31,160
	ctx.r3.s64 = ctx.r31.s64 + 160;
	// bl 0x83178fe4
	ctx.lr = 0x82C36A04;
	__imp__XMsgCancelIORequest(ctx, base);
	// lwz r3,188(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 188);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82c36a20
	if (ctx.cr6.eq) goto loc_82C36A20;
	// lis r4,24714
	ctx.r4.s64 = 1619656704;
	// ori r4,r4,8194
	ctx.r4.u64 = ctx.r4.u64 | 8194;
	// bl 0x82691460
	ctx.lr = 0x82C36A1C;
	sub_82691460(ctx, base);
	// stw r28,188(r31)
	PPC_STORE_U32(ctx.r31.u32 + 188, ctx.r28.u32);
loc_82C36A20:
	// lis r4,24970
	ctx.r4.s64 = 1636433920;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r4,r4,32779
	ctx.r4.u64 = ctx.r4.u64 | 32779;
	// bl 0x82691460
	ctx.lr = 0x82C36A30;
	sub_82691460(ctx, base);
loc_82C36A30:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C36A38"))) PPC_WEAK_FUNC(sub_82C36A38);
PPC_FUNC_IMPL(__imp__sub_82C36A38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7674
	ctx.lr = 0x82C36A40;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82c36258
	ctx.lr = 0x82C36A50;
	sub_82C36258(ctx, base);
	// addi r28,r31,12
	ctx.r28.s64 = ctx.r31.s64 + 12;
	// li r4,15
	ctx.r4.s64 = 15;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x83179e14
	ctx.lr = 0x82C36A64;
	__imp__XamVoiceCreate(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// li r27,0
	ctx.r27.s64 = 0;
	// blt 0x82c36ad8
	if (ctx.cr0.lt) goto loc_82C36AD8;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x82c3c490
	ctx.lr = 0x82C36A7C;
	sub_82C3C490(ctx, base);
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// stw r27,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r27.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r3,156(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 156);
	// bl 0x82c35b00
	ctx.lr = 0x82C36A90;
	sub_82C35B00(ctx, base);
	// lis r11,2
	ctx.r11.s64 = 131072;
	// li r8,1
	ctx.r8.s64 = 1;
	// ori r11,r11,25604
	ctx.r11.u64 = ctx.r11.u64 | 25604;
	// addi r7,r31,84
	ctx.r7.s64 = ctx.r31.s64 + 84;
	// stw r11,212(r31)
	PPC_STORE_U32(ctx.r31.u32 + 212, ctx.r11.u32);
loc_82C36AA4:
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
	// bne 0x82c36aa4
	if (!ctx.cr0.eq) goto loc_82C36AA4;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// addi r4,r11,-4952
	ctx.r4.s64 = ctx.r11.s64 + -4952;
	// li r5,54
	ctx.r5.s64 = 54;
	// bl 0x82fa77c0
	ctx.lr = 0x82C36AD0;
	sub_82FA77C0(ctx, base);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bge cr6,0x82c36aec
	if (!ctx.cr6.lt) goto loc_82C36AEC;
loc_82C36AD8:
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82c36aec
	if (ctx.cr6.eq) goto loc_82C36AEC;
	// bl 0x83179df4
	ctx.lr = 0x82C36AE8;
	__imp__XamVoiceClose(ctx, base);
	// stw r27,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r27.u32);
loc_82C36AEC:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C36AF8"))) PPC_WEAK_FUNC(sub_82C36AF8);
PPC_FUNC_IMPL(__imp__sub_82C36AF8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7654
	ctx.lr = 0x82C36B00;
	__savegprlr_19(ctx, base);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// lis r4,24970
	ctx.r4.s64 = 1636433920;
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// li r3,480
	ctx.r3.s64 = 480;
	// ori r4,r4,32779
	ctx.r4.u64 = ctx.r4.u64 | 32779;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r20,r6
	ctx.r20.u64 = ctx.r6.u64;
	// mr r19,r7
	ctx.r19.u64 = ctx.r7.u64;
	// bl 0x82691410
	ctx.lr = 0x82C36B28;
	sub_82691410(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// li r21,0
	ctx.r21.s64 = 0;
	// bne 0x82c36b40
	if (!ctx.cr0.eq) goto loc_82C36B40;
loc_82C36B34:
	// lis r24,-32761
	ctx.r24.s64 = -2147024896;
	// ori r24,r24,14
	ctx.r24.u64 = ctx.r24.u64 | 14;
	// b 0x82c36e6c
	goto loc_82C36E6C;
loc_82C36B40:
	// lis r11,2
	ctx.r11.s64 = 131072;
	// stw r22,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r22.u32);
	// lis r10,-32232
	ctx.r10.s64 = -2112356352;
	// stw r21,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r21.u32);
	// ori r11,r11,25604
	ctx.r11.u64 = ctx.r11.u64 | 25604;
	// stw r21,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r21.u32);
	// addi r30,r31,192
	ctx.r30.s64 = ctx.r31.s64 + 192;
	// stw r11,212(r31)
	PPC_STORE_U32(ctx.r31.u32 + 212, ctx.r11.u32);
	// lis r11,-31974
	ctx.r11.s64 = -2095448064;
	// lbz r9,214(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 214);
	// lis r3,-2
	ctx.r3.s64 = -131072;
	// std r9,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r9.u64);
	// lfd f0,104(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// addi r8,r11,11780
	ctx.r8.s64 = ctx.r11.s64 + 11780;
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// li r7,3
	ctx.r7.s64 = 3;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,255
	ctx.r4.s64 = 255;
	// ori r3,r3,2001
	ctx.r3.u64 = ctx.r3.u64 | 2001;
	// frsp f13,f0
	ctx.f13.f64 = double(float(ctx.f0.f64));
	// lfs f0,-14924(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -14924);
	ctx.f0.f64 = double(temp.f32);
	// li r10,0
	ctx.r10.s64 = 0;
	// fmuls f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f0,196(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 196, temp.u32);
	// bl 0x83179dd4
	ctx.lr = 0x82C36BAC;
	__imp__XamUserReadProfileSettings(ctx, base);
	// cmplwi cr6,r3,122
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 122, ctx.xer);
	// beq cr6,0x82c36bc0
	if (ctx.cr6.eq) goto loc_82C36BC0;
	// lis r24,-32768
	ctx.r24.s64 = -2147483648;
	// ori r24,r24,16389
	ctx.r24.u64 = ctx.r24.u64 | 16389;
	// b 0x82c36e6c
	goto loc_82C36E6C;
loc_82C36BC0:
	// lis r4,24714
	ctx.r4.s64 = 1619656704;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// ori r4,r4,8194
	ctx.r4.u64 = ctx.r4.u64 | 8194;
	// bl 0x82691410
	ctx.lr = 0x82C36BD0;
	sub_82691410(ctx, base);
	// stw r3,188(r31)
	PPC_STORE_U32(ctx.r31.u32 + 188, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82c36b34
	if (ctx.cr0.eq) goto loc_82C36B34;
	// addi r30,r31,60
	ctx.r30.s64 = ctx.r31.s64 + 60;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// li r5,5
	ctx.r5.s64 = 5;
	// li r4,32
	ctx.r4.s64 = 32;
	// li r3,256
	ctx.r3.s64 = 256;
	// bl 0x82c37aa8
	ctx.lr = 0x82C36BF8;
	sub_82C37AA8(ctx, base);
	// mr. r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// blt 0x82c36e6c
	if (ctx.cr0.lt) goto loc_82C36E6C;
	// li r11,5
	ctx.r11.s64 = 5;
	// addi r9,r31,64
	ctx.r9.s64 = ctx.r31.s64 + 64;
	// mr r8,r21
	ctx.r8.u64 = ctx.r21.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_82C36C10:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mullw r10,r10,r8
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r8.s32);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r11,r10,24
	ctx.r11.s64 = ctx.r10.s64 + 24;
	// stw r10,24(r10)
	PPC_STORE_U32(ctx.r10.u32 + 24, ctx.r10.u32);
	// stw r21,28(r10)
	PPC_STORE_U32(ctx.r10.u32 + 28, ctx.r21.u32);
	// lwz r10,4(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82c36c44
	if (ctx.cr6.eq) goto loc_82C36C44;
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// b 0x82c36c48
	goto loc_82C36C48;
loc_82C36C44:
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
loc_82C36C48:
	// stw r11,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r11.u32);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// bdnz 0x82c36c10
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82C36C10;
	// li r5,24
	ctx.r5.s64 = 24;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82a75988
	ctx.lr = 0x82C36C64;
	sub_82A75988(ctx, base);
	// li r5,12
	ctx.r5.s64 = 12;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82a75988
	ctx.lr = 0x82C36C74;
	sub_82A75988(ctx, base);
	// mr r29,r21
	ctx.r29.u64 = ctx.r21.u64;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x82c36d08
	if (ctx.cr6.eq) goto loc_82C36D08;
	// addi r30,r31,16
	ctx.r30.s64 = ctx.r31.s64 + 16;
loc_82C36C84:
	// cmplwi cr6,r29,2
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 2, ctx.xer);
	// bge cr6,0x82c36d08
	if (!ctx.cr6.lt) goto loc_82C36D08;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82C36CA8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// blt 0x82c36d08
	if (ctx.cr0.lt) goto loc_82C36D08;
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82C36CC8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// addi r8,r1,128
	ctx.r8.s64 = ctx.r1.s64 + 128;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// rlwinm r7,r10,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r10,r29
	ctx.r10.u64 = ctx.r10.u64 + ctx.r29.u64;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// stwx r11,r7,r9
	PPC_STORE_U32(ctx.r7.u32 + ctx.r9.u32, ctx.r11.u32);
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplw cr6,r29,r27
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r27.u32, ctx.xer);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// stwx r10,r11,r8
	PPC_STORE_U32(ctx.r11.u32 + ctx.r8.u32, ctx.r10.u32);
	// blt cr6,0x82c36c84
	if (ctx.cr6.lt) goto loc_82C36C84;
loc_82C36D08:
	// addi r11,r31,44
	ctx.r11.s64 = ctx.r31.s64 + 44;
	// stw r29,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r29.u32);
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// blt cr6,0x82c36e6c
	if (ctx.cr6.lt) goto loc_82C36E6C;
	// mr r26,r21
	ctx.r26.u64 = ctx.r21.u64;
	// mr r25,r21
	ctx.r25.u64 = ctx.r21.u64;
	// addi r23,r1,112
	ctx.r23.s64 = ctx.r1.s64 + 112;
	// mr r27,r11
	ctx.r27.u64 = ctx.r11.u64;
loc_82C36D28:
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,104
	ctx.r3.s64 = ctx.r1.s64 + 104;
	// mr r29,r21
	ctx.r29.u64 = ctx.r21.u64;
	// bl 0x82a75988
	ctx.lr = 0x82C36D3C;
	sub_82A75988(ctx, base);
	// addi r11,r1,104
	ctx.r11.s64 = ctx.r1.s64 + 104;
	// mr r30,r21
	ctx.r30.u64 = ctx.r21.u64;
	// addi r28,r11,-4
	ctx.r28.s64 = ctx.r11.s64 + -4;
loc_82C36D48:
	// add r11,r25,r30
	ctx.r11.u64 = ctx.r25.u64 + ctx.r30.u64;
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82c36d80
	if (ctx.cr6.eq) goto loc_82C36D80;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82C36D74;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// stwu r11,4(r28)
	ea = 4 + ctx.r28.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r28.u32 = ea;
loc_82C36D80:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplwi cr6,r30,2
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 2, ctx.xer);
	// blt cr6,0x82c36d48
	if (ctx.cr6.lt) goto loc_82C36D48;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82c36e10
	if (ctx.cr6.eq) goto loc_82C36E10;
	// addi r7,r27,4
	ctx.r7.s64 = ctx.r27.s64 + 4;
	// lwz r4,0(r23)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// addi r6,r1,104
	ctx.r6.s64 = ctx.r1.s64 + 104;
	// li r5,10
	ctx.r5.s64 = 10;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x82c376d8
	ctx.lr = 0x82C36DAC;
	sub_82C376D8(ctx, base);
	// mr. r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// blt 0x82c36e20
	if (ctx.cr0.lt) goto loc_82C36E20;
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// addi r27,r27,4
	ctx.r27.s64 = ctx.r27.s64 + 4;
	// mr r30,r21
	ctx.r30.u64 = ctx.r21.u64;
	// mr r29,r21
	ctx.r29.u64 = ctx.r21.u64;
loc_82C36DC4:
	// add r11,r25,r29
	ctx.r11.u64 = ctx.r25.u64 + ctx.r29.u64;
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82c36e04
	if (ctx.cr6.eq) goto loc_82C36E04;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// lwz r5,0(r27)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82C36DF8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// blt 0x82c36e20
	if (ctx.cr0.lt) goto loc_82C36E20;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
loc_82C36E04:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmplwi cr6,r29,2
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 2, ctx.xer);
	// blt cr6,0x82c36dc4
	if (ctx.cr6.lt) goto loc_82C36DC4;
loc_82C36E10:
	// addi r25,r25,2
	ctx.r25.s64 = ctx.r25.s64 + 2;
	// addi r23,r23,4
	ctx.r23.s64 = ctx.r23.s64 + 4;
	// cmplwi cr6,r25,6
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 6, ctx.xer);
	// blt cr6,0x82c36d28
	if (ctx.cr6.lt) goto loc_82C36D28;
loc_82C36E20:
	// stw r26,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r26.u32);
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// blt cr6,0x82c36e6c
	if (ctx.cr6.lt) goto loc_82C36E6C;
	// addi r8,r31,8
	ctx.r8.s64 = ctx.r31.s64 + 8;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// addi r6,r31,48
	ctx.r6.s64 = ctx.r31.s64 + 48;
	// li r5,10
	ctx.r5.s64 = 10;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x82c3c520
	ctx.lr = 0x82C36E48;
	sub_82C3C520(ctx, base);
	// li r30,1
	ctx.r30.s64 = 1;
	// stw r20,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r20.u32);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x82c35b00
	ctx.lr = 0x82C36E60;
	sub_82C35B00(ctx, base);
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// stw r30,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r30.u32);
	// bge cr6,0x82c36e78
	if (!ctx.cr6.lt) goto loc_82C36E78;
loc_82C36E6C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c36948
	ctx.lr = 0x82C36E74;
	sub_82C36948(ctx, base);
	// mr r31,r21
	ctx.r31.u64 = ctx.r21.u64;
loc_82C36E78:
	// stw r31,0(r19)
	PPC_STORE_U32(ctx.r19.u32 + 0, ctx.r31.u32);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x82fa76a4
	__restgprlr_19(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C36E88"))) PPC_WEAK_FUNC(sub_82C36E88);
PPC_FUNC_IMPL(__imp__sub_82C36E88) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// lwz r8,8(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// li r3,0
	ctx.r3.s64 = 0;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r10,r11,r8
	PPC_STORE_U32(ctx.r11.u32 + ctx.r8.u32, ctx.r10.u32);
	// stw r10,24(r9)
	PPC_STORE_U32(ctx.r9.u32 + 24, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C36EB0"))) PPC_WEAK_FUNC(sub_82C36EB0);
PPC_FUNC_IMPL(__imp__sub_82C36EB0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// lwz r8,8(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// li r3,0
	ctx.r3.s64 = 0;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r10,24(r9)
	PPC_STORE_U32(ctx.r9.u32 + 24, ctx.r10.u32);
	// stwx r10,r11,r8
	PPC_STORE_U32(ctx.r11.u32 + ctx.r8.u32, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C36ED8"))) PPC_WEAK_FUNC(sub_82C36ED8);
PPC_FUNC_IMPL(__imp__sub_82C36ED8) {
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
	// lwz r11,24(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82c36f50
	if (!ctx.cr6.eq) goto loc_82C36F50;
	// lwz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82c36f50
	if (ctx.cr6.eq) goto loc_82C36F50;
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r9,16
	ctx.r11.s64 = ctx.r9.s64 + 16;
loc_82C36F04:
	// lwz r8,-8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82c36f1c
	if (ctx.cr6.eq) goto loc_82C36F1C;
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r8,1
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 1, ctx.xer);
	// beq cr6,0x82c36f40
	if (ctx.cr6.eq) goto loc_82C36F40;
loc_82C36F1C:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplwi cr6,r10,2
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 2, ctx.xer);
	// blt cr6,0x82c36f04
	if (ctx.cr6.lt) goto loc_82C36F04;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82C36F30:
	// addi r11,r3,0
	ctx.r11.s64 = ctx.r3.s64 + 0;
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r3,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// b 0x82c36f54
	goto loc_82C36F54;
loc_82C36F40:
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// bl 0x82c377c0
	ctx.lr = 0x82C36F4C;
	sub_82C377C0(ctx, base);
	// b 0x82c36f30
	goto loc_82C36F30;
loc_82C36F50:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82C36F54:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C36F64"))) PPC_WEAK_FUNC(sub_82C36F64);
PPC_FUNC_IMPL(__imp__sub_82C36F64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C36F68"))) PPC_WEAK_FUNC(sub_82C36F68);
PPC_FUNC_IMPL(__imp__sub_82C36F68) {
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
	// addi r3,r3,64
	ctx.r3.s64 = ctx.r3.s64 + 64;
	// bl 0x82c3c648
	ctx.lr = 0x82C36F7C;
	sub_82C3C648(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C36F90"))) PPC_WEAK_FUNC(sub_82C36F90);
PPC_FUNC_IMPL(__imp__sub_82C36F90) {
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
	// addi r3,r3,32
	ctx.r3.s64 = ctx.r3.s64 + 32;
	// bl 0x82c3c678
	ctx.lr = 0x82C36FA4;
	sub_82C3C678(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C36FB8"))) PPC_WEAK_FUNC(sub_82C36FB8);
PPC_FUNC_IMPL(__imp__sub_82C36FB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7658
	ctx.lr = 0x82C36FC0;
	__savegprlr_20(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r11,2
	ctx.r11.s64 = 2;
	// li r21,0
	ctx.r21.s64 = 0;
	// addi r24,r3,8
	ctx.r24.s64 = ctx.r3.s64 + 8;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r22,r4
	ctx.r22.u64 = ctx.r4.u64;
	// lwz r25,8(r10)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// mr r20,r21
	ctx.r20.u64 = ctx.r21.u64;
	// li r23,1
	ctx.r23.s64 = 1;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// mr r9,r24
	ctx.r9.u64 = ctx.r24.u64;
loc_82C36FF4:
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82c37030
	if (ctx.cr6.eq) goto loc_82C37030;
	// lwz r8,8(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// cmpwi cr6,r8,1
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 1, ctx.xer);
	// bne cr6,0x82c37018
	if (!ctx.cr6.eq) goto loc_82C37018;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// b 0x82c3701c
	goto loc_82C3701C;
loc_82C37018:
	// stw r21,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r21.u32);
loc_82C3701C:
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82c37034
	if (ctx.cr6.eq) goto loc_82C37034;
	// addi r20,r20,1
	ctx.r20.s64 = ctx.r20.s64 + 1;
	// b 0x82c37034
	goto loc_82C37034;
loc_82C37030:
	// stw r21,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r21.u32);
loc_82C37034:
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x82c36ff4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82C36FF4;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x82c3718c
	if (ctx.cr6.eq) goto loc_82C3718C;
	// cmplwi cr6,r20,0
	ctx.cr6.compare<uint32_t>(ctx.r20.u32, 0, ctx.xer);
	// beq cr6,0x82c3718c
	if (ctx.cr6.eq) goto loc_82C3718C;
	// mr r23,r21
	ctx.r23.u64 = ctx.r21.u64;
	// b 0x82c37184
	goto loc_82C37184;
loc_82C37058:
	// addi r22,r22,-1
	ctx.r22.s64 = ctx.r22.s64 + -1;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x82c3718c
	if (ctx.cr6.eq) goto loc_82C3718C;
	// cmplwi cr6,r20,0
	ctx.cr6.compare<uint32_t>(ctx.r20.u32, 0, ctx.xer);
	// beq cr6,0x82c3718c
	if (ctx.cr6.eq) goto loc_82C3718C;
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// addi r30,r31,1408
	ctx.r30.s64 = ctx.r31.s64 + 1408;
	// lwz r9,24(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r5,24(r9)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + 24);
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x82fa77c0
	ctx.lr = 0x82C37090;
	sub_82FA77C0(ctx, base);
	// addi r29,r31,2048
	ctx.r29.s64 = ctx.r31.s64 + 2048;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,64
	ctx.r3.s64 = ctx.r31.s64 + 64;
	// bl 0x82c3c6b8
	ctx.lr = 0x82C370A8;
	sub_82C3C6B8(ctx, base);
	// mr r23,r21
	ctx.r23.u64 = ctx.r21.u64;
	// addi r28,r1,96
	ctx.r28.s64 = ctx.r1.s64 + 96;
	// mr r27,r24
	ctx.r27.u64 = ctx.r24.u64;
	// li r26,2
	ctx.r26.s64 = 2;
loc_82C370B8:
	// lwz r30,0(r28)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82c3712c
	if (ctx.cr6.eq) goto loc_82C3712C;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r5,40
	ctx.r5.s64 = 40;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x82fa77c0
	ctx.lr = 0x82C370E0;
	sub_82FA77C0(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// addi r9,r9,40
	ctx.r9.s64 = ctx.r9.s64 + 40;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82c370fc
	if (!ctx.cr6.lt) goto loc_82C370FC;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
loc_82C370FC:
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82c3712c
	if (!ctx.cr6.eq) goto loc_82C3712C;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,0(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// bl 0x82c377e0
	ctx.lr = 0x82C3711C;
	sub_82C377E0(ctx, base);
	// stw r3,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82c3712c
	if (!ctx.cr0.eq) goto loc_82C3712C;
	// addi r20,r20,-1
	ctx.r20.s64 = ctx.r20.s64 + -1;
loc_82C3712C:
	// addic. r26,r26,-1
	ctx.xer.ca = ctx.r26.u32 > 0;
	ctx.r26.s64 = ctx.r26.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// addi r27,r27,4
	ctx.r27.s64 = ctx.r27.s64 + 4;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// bne 0x82c370b8
	if (!ctx.cr0.eq) goto loc_82C370B8;
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,24(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82c37160
	if (!ctx.cr6.lt) goto loc_82C37160;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
loc_82C37160:
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82c37184
	if (!ctx.cr6.eq) goto loc_82C37184;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82c377e0
	ctx.lr = 0x82C37180;
	sub_82C377E0(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
loc_82C37184:
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 0, ctx.xer);
	// bne cr6,0x82c37058
	if (!ctx.cr6.eq) goto loc_82C37058;
loc_82C3718C:
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82fa76a8
	__restgprlr_20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C37198"))) PPC_WEAK_FUNC(sub_82C37198);
PPC_FUNC_IMPL(__imp__sub_82C37198) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7658
	ctx.lr = 0x82C371A0;
	__savegprlr_20(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r11,2
	ctx.r11.s64 = 2;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r23,r3,8
	ctx.r23.s64 = ctx.r3.s64 + 8;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r22,r4
	ctx.r22.u64 = ctx.r4.u64;
	// lwz r24,8(r10)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// mr r21,r8
	ctx.r21.u64 = ctx.r8.u64;
	// li r20,1
	ctx.r20.s64 = 1;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// mr r9,r23
	ctx.r9.u64 = ctx.r23.u64;
loc_82C371D4:
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82c37210
	if (ctx.cr6.eq) goto loc_82C37210;
	// lwz r7,8(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// cmpwi cr6,r7,1
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 1, ctx.xer);
	// bne cr6,0x82c371f8
	if (!ctx.cr6.eq) goto loc_82C371F8;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// b 0x82c371fc
	goto loc_82C371FC;
loc_82C371F8:
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
loc_82C371FC:
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82c37214
	if (ctx.cr6.eq) goto loc_82C37214;
	// addi r21,r21,1
	ctx.r21.s64 = ctx.r21.s64 + 1;
	// b 0x82c37214
	goto loc_82C37214;
loc_82C37210:
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
loc_82C37214:
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x82c371d4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82C371D4;
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// beq cr6,0x82c373a4
	if (ctx.cr6.eq) goto loc_82C373A4;
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, 0, ctx.xer);
	// beq cr6,0x82c373a4
	if (ctx.cr6.eq) goto loc_82C373A4;
	// mr r20,r8
	ctx.r20.u64 = ctx.r8.u64;
	// b 0x82c3739c
	goto loc_82C3739C;
loc_82C37238:
	// addi r22,r22,-1
	ctx.r22.s64 = ctx.r22.s64 + -1;
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// beq cr6,0x82c373a4
	if (ctx.cr6.eq) goto loc_82C373A4;
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, 0, ctx.xer);
	// beq cr6,0x82c373a4
	if (ctx.cr6.eq) goto loc_82C373A4;
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// addi r31,r26,1664
	ctx.r31.s64 = ctx.r26.s64 + 1664;
	// lwz r9,24(r26)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r26.u32 + 24);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r5,24(r9)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + 24);
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x82fa77c0
	ctx.lr = 0x82C37270;
	sub_82FA77C0(ctx, base);
	// addi r29,r26,1024
	ctx.r29.s64 = ctx.r26.s64 + 1024;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r26,32
	ctx.r3.s64 = ctx.r26.s64 + 32;
	// bl 0x82c3cd88
	ctx.lr = 0x82C37288;
	sub_82C3CD88(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82c372a0
	if (ctx.cr0.eq) goto loc_82C372A0;
	// li r5,640
	ctx.r5.s64 = 640;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82fa7cf0
	ctx.lr = 0x82C372A0;
	sub_82FA7CF0(ctx, base);
loc_82C372A0:
	// addi r28,r1,80
	ctx.r28.s64 = ctx.r1.s64 + 80;
	// mr r27,r23
	ctx.r27.u64 = ctx.r23.u64;
	// li r25,2
	ctx.r25.s64 = 2;
loc_82C372AC:
	// lwz r31,0(r28)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82c3734c
	if (ctx.cr6.eq) goto loc_82C3734C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r30,640
	ctx.r30.s64 = 640;
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// cmplwi cr6,r11,640
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 640, ctx.xer);
	// bgt cr6,0x82c372e4
	if (ctx.cr6.gt) goto loc_82C372E4;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// subf r30,r11,r10
	ctx.r30.s64 = ctx.r10.s64 - ctx.r11.s64;
loc_82C372E4:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x82fa77c0
	ctx.lr = 0x82C37300;
	sub_82FA77C0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// add r9,r9,r30
	ctx.r9.u64 = ctx.r9.u64 + ctx.r30.u64;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82c3731c
	if (!ctx.cr6.lt) goto loc_82C3731C;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
loc_82C3731C:
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82c3734c
	if (!ctx.cr6.eq) goto loc_82C3734C;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,0(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// bl 0x82c377e0
	ctx.lr = 0x82C3733C;
	sub_82C377E0(ctx, base);
	// stw r3,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82c3734c
	if (!ctx.cr0.eq) goto loc_82C3734C;
	// addi r21,r21,-1
	ctx.r21.s64 = ctx.r21.s64 + -1;
loc_82C3734C:
	// addic. r25,r25,-1
	ctx.xer.ca = ctx.r25.u32 > 0;
	ctx.r25.s64 = ctx.r25.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// addi r27,r27,4
	ctx.r27.s64 = ctx.r27.s64 + 4;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// bne 0x82c372ac
	if (!ctx.cr0.eq) goto loc_82C372AC;
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// addi r9,r9,640
	ctx.r9.s64 = ctx.r9.s64 + 640;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82c37378
	if (!ctx.cr6.lt) goto loc_82C37378;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
loc_82C37378:
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82c3739c
	if (!ctx.cr6.eq) goto loc_82C3739C;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// lwz r3,4(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// bl 0x82c377e0
	ctx.lr = 0x82C37398;
	sub_82C377E0(ctx, base);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
loc_82C3739C:
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 0, ctx.xer);
	// bne cr6,0x82c37238
	if (!ctx.cr6.eq) goto loc_82C37238;
loc_82C373A4:
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82fa76a8
	__restgprlr_20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C373B0"))) PPC_WEAK_FUNC(sub_82C373B0);
PPC_FUNC_IMPL(__imp__sub_82C373B0) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,2
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 2, ctx.xer);
	// bne cr6,0x82c373c4
	if (!ctx.cr6.eq) goto loc_82C373C4;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// b 0x82c373d0
	goto loc_82C373D0;
loc_82C373C4:
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r3
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
loc_82C373D0:
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// b 0x82c37860
	sub_82C37860(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C373D8"))) PPC_WEAK_FUNC(sub_82C373D8);
PPC_FUNC_IMPL(__imp__sub_82C373D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7674
	ctx.lr = 0x82C373E0;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r27,0
	ctx.r27.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// addi r11,r3,16
	ctx.r11.s64 = ctx.r3.s64 + 16;
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
loc_82C373F8:
	// lwz r9,-8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82c37410
	if (ctx.cr6.eq) goto loc_82C37410;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// beq cr6,0x82c3743c
	if (ctx.cr6.eq) goto loc_82C3743C;
loc_82C37410:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplwi cr6,r10,2
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 2, ctx.xer);
	// blt cr6,0x82c373f8
	if (ctx.cr6.lt) goto loc_82C373F8;
	// mr r28,r27
	ctx.r28.u64 = ctx.r27.u64;
loc_82C37424:
	// subf r30,r29,r4
	ctx.r30.s64 = ctx.r4.s64 - ctx.r29.s64;
	// cmpwi cr6,r29,-1
	ctx.cr6.compare<int32_t>(ctx.r29.s32, -1, ctx.xer);
	// beq cr6,0x82c37478
	if (ctx.cr6.eq) goto loc_82C37478;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r4,8(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x82c37470
	goto loc_82C37470;
loc_82C3743C:
	// li r28,1
	ctx.r28.s64 = 1;
	// b 0x82c37424
	goto loc_82C37424;
loc_82C37444:
	// addi r30,r30,-1
	ctx.r30.s64 = ctx.r30.s64 + -1;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82c37478
	if (ctx.cr6.eq) goto loc_82C37478;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// stw r27,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r27.u32);
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82c377e0
	ctx.lr = 0x82C3746C;
	sub_82C377E0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
loc_82C37470:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x82c37444
	if (!ctx.cr6.eq) goto loc_82C37444;
loc_82C37478:
	// cmpwi cr6,r28,1
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 1, ctx.xer);
	// bne cr6,0x82c374b0
	if (!ctx.cr6.eq) goto loc_82C374B0;
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82c374a8
	if (ctx.cr6.eq) goto loc_82C374A8;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bctrl 
	ctx.lr = 0x82C374A0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// b 0x82c374f0
	goto loc_82C374F0;
loc_82C374A8:
	// li r27,1
	ctx.r27.s64 = 1;
	// b 0x82c374f0
	goto loc_82C374F0;
loc_82C374B0:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r4,8(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// b 0x82c374e8
	goto loc_82C374E8;
loc_82C374BC:
	// addi r29,r29,-1
	ctx.r29.s64 = ctx.r29.s64 + -1;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82c374f0
	if (ctx.cr6.eq) goto loc_82C374F0;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// stw r27,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r27.u32);
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82c377e0
	ctx.lr = 0x82C374E4;
	sub_82C377E0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
loc_82C374E8:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x82c374bc
	if (!ctx.cr6.eq) goto loc_82C374BC;
loc_82C374F0:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C374FC"))) PPC_WEAK_FUNC(sub_82C374FC);
PPC_FUNC_IMPL(__imp__sub_82C374FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C37500"))) PPC_WEAK_FUNC(sub_82C37500);
PPC_FUNC_IMPL(__imp__sub_82C37500) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7670
	ctx.lr = 0x82C37508;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82c3752c
	if (ctx.cr6.eq) goto loc_82C3752C;
	// stw r30,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r30.u32);
loc_82C3752C:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x82c37538
	if (ctx.cr6.eq) goto loc_82C37538;
	// stw r30,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r30.u32);
loc_82C37538:
	// lwz r10,4(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// lis r9,-16384
	ctx.r9.s64 = -1073741824;
	// ori r31,r9,1
	ctx.r31.u64 = ctx.r9.u64 | 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82c3759c
	if (ctx.cr6.eq) goto loc_82C3759C;
	// lwz r4,8(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82c3757c
	if (ctx.cr6.eq) goto loc_82C3757C;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82c3759c
	if (ctx.cr6.eq) goto loc_82C3759C;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// stw r31,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r31.u32);
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r3,4(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// bl 0x82c377e0
	ctx.lr = 0x82C37578;
	sub_82C377E0(ctx, base);
	// b 0x82c3759c
	goto loc_82C3759C;
loc_82C3757C:
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82c3759c
	if (ctx.cr6.eq) goto loc_82C3759C;
loc_82C37584:
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// stw r31,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r31.u32);
	// lwz r3,4(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// bl 0x82c377e0
	ctx.lr = 0x82C37594;
	sub_82C377E0(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne 0x82c37584
	if (!ctx.cr0.eq) goto loc_82C37584;
loc_82C3759C:
	// addi r29,r28,8
	ctx.r29.s64 = ctx.r28.s64 + 8;
loc_82C375A0:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82c375e8
	if (ctx.cr6.eq) goto loc_82C375E8;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x82c375bc
	if (ctx.cr6.eq) goto loc_82C375BC;
	// cmplw cr6,r30,r26
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r26.u32, ctx.xer);
	// bne cr6,0x82c375e8
	if (!ctx.cr6.eq) goto loc_82C375E8;
loc_82C375BC:
	// lwz r4,8(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// bne cr6,0x82c375fc
	if (!ctx.cr6.eq) goto loc_82C375FC;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82c375e8
	if (ctx.cr6.eq) goto loc_82C375E8;
loc_82C375D0:
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// stw r31,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r31.u32);
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// bl 0x82c377e0
	ctx.lr = 0x82C375E0;
	sub_82C377E0(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne 0x82c375d0
	if (!ctx.cr0.eq) goto loc_82C375D0;
loc_82C375E8:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmplwi cr6,r30,2
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 2, ctx.xer);
	// blt cr6,0x82c375a0
	if (ctx.cr6.lt) goto loc_82C375A0;
	// b 0x82c37624
	goto loc_82C37624;
loc_82C375FC:
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82c37624
	if (ctx.cr6.eq) goto loc_82C37624;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r10,r30,2
	ctx.r10.s64 = ctx.r30.s64 + 2;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r31,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r31.u32);
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// stw r11,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
	// lwzx r3,r10,r28
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r28.u32);
	// bl 0x82c377e0
	ctx.lr = 0x82C37624;
	sub_82C377E0(ctx, base);
loc_82C37624:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82fa76c0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C37630"))) PPC_WEAK_FUNC(sub_82C37630);
PPC_FUNC_IMPL(__imp__sub_82C37630) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x82C37638;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82c376d0
	if (ctx.cr6.eq) goto loc_82C376D0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82c37500
	ctx.lr = 0x82C37658;
	sub_82C37500(ctx, base);
	// lwz r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82c37684
	if (ctx.cr6.eq) goto loc_82C37684;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82c37680
	if (ctx.cr6.eq) goto loc_82C37680;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82C37680;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82C37680:
	// stw r28,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r28.u32);
loc_82C37684:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82c37698
	if (ctx.cr6.eq) goto loc_82C37698;
	// bl 0x82c37900
	ctx.lr = 0x82C37694;
	sub_82C37900(ctx, base);
	// stw r28,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r28.u32);
loc_82C37698:
	// addi r31,r30,8
	ctx.r31.s64 = ctx.r30.s64 + 8;
	// li r29,2
	ctx.r29.s64 = 2;
loc_82C376A0:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82c376b4
	if (ctx.cr6.eq) goto loc_82C376B4;
	// bl 0x82c37900
	ctx.lr = 0x82C376B0;
	sub_82C37900(ctx, base);
	// stw r28,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r28.u32);
loc_82C376B4:
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// bne 0x82c376a0
	if (!ctx.cr0.eq) goto loc_82C376A0;
	// lis r4,25738
	ctx.r4.s64 = 1686765568;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// ori r4,r4,8
	ctx.r4.u64 = ctx.r4.u64 | 8;
	// bl 0x82691460
	ctx.lr = 0x82C376D0;
	sub_82691460(ctx, base);
loc_82C376D0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C376D8"))) PPC_WEAK_FUNC(sub_82C376D8);
PPC_FUNC_IMPL(__imp__sub_82C376D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa766c
	ctx.lr = 0x82C376E0;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// lis r4,25738
	ctx.r4.s64 = 1686765568;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// ori r4,r4,8
	ctx.r4.u64 = ctx.r4.u64 | 8;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// lwz r3,16(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 16);
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r25,r7
	ctx.r25.u64 = ctx.r7.u64;
	// bl 0x82691410
	ctx.lr = 0x82C37708;
	sub_82691410(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x82c3771c
	if (!ctx.cr0.eq) goto loc_82C3771C;
	// lis r30,-32761
	ctx.r30.s64 = -2147024896;
	// ori r30,r30,14
	ctx.r30.u64 = ctx.r30.u64 | 14;
	// b 0x82c377a0
	goto loc_82C377A0;
loc_82C3771C:
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// addi r4,r31,4
	ctx.r4.s64 = ctx.r31.s64 + 4;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82c379e8
	ctx.lr = 0x82C3772C;
	sub_82C379E8(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt 0x82c377a0
	if (ctx.cr0.lt) goto loc_82C377A0;
	// li r27,0
	ctx.r27.s64 = 0;
	// addi r29,r31,8
	ctx.r29.s64 = ctx.r31.s64 + 8;
loc_82C3773C:
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82c37758
	if (ctx.cr6.eq) goto loc_82C37758;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82c379e8
	ctx.lr = 0x82C37750;
	sub_82C379E8(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt 0x82c377a0
	if (ctx.cr0.lt) goto loc_82C377A0;
loc_82C37758:
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// cmplwi cr6,r27,2
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 2, ctx.xer);
	// blt cr6,0x82c3773c
	if (ctx.cr6.lt) goto loc_82C3773C;
	// stw r26,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r26.u32);
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82c37794
	if (ctx.cr6.eq) goto loc_82C37794;
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82C3778C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x82c37798
	goto loc_82C37798;
loc_82C37794:
	// li r30,1
	ctx.r30.s64 = 1;
loc_82C37798:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge cr6,0x82c377ac
	if (!ctx.cr6.lt) goto loc_82C377AC;
loc_82C377A0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c37630
	ctx.lr = 0x82C377A8;
	sub_82C37630(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
loc_82C377AC:
	// stw r31,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r31.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82fa76bc
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C377BC"))) PPC_WEAK_FUNC(sub_82C377BC);
PPC_FUNC_IMPL(__imp__sub_82C377BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C377C0"))) PPC_WEAK_FUNC(sub_82C377C0);
PPC_FUNC_IMPL(__imp__sub_82C377C0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82c377d4
	goto loc_82C377D4;
loc_82C377CC:
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
loc_82C377D4:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82c377cc
	if (!ctx.cr6.eq) goto loc_82C377CC;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C377E0"))) PPC_WEAK_FUNC(sub_82C377E0);
PPC_FUNC_IMPL(__imp__sub_82C377E0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r9,259
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 259, ctx.xer);
	// bne cr6,0x82c377fc
	if (!ctx.cr6.eq) goto loc_82C377FC;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_82C377FC:
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// addi r11,r8,8
	ctx.r11.s64 = ctx.r8.s64 + 8;
	// lwz r9,8(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// cmplw cr6,r4,r9
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82c37838
	if (!ctx.cr6.eq) goto loc_82C37838;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82c37838
	if (ctx.cr6.eq) goto loc_82C37838;
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r9,r7
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r7.u32, ctx.xer);
	// bne cr6,0x82c3782c
	if (!ctx.cr6.eq) goto loc_82C3782C;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
loc_82C3782C:
	// lwz r7,4(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stw r7,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r7.u32);
	// stw r10,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r10.u32);
loc_82C37838:
	// stw r10,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r10.u32);
	// lwz r10,4(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82c37850
	if (ctx.cr6.eq) goto loc_82C37850;
	// stw r4,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r4.u32);
	// b 0x82c37854
	goto loc_82C37854;
loc_82C37850:
	// stw r4,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r4.u32);
loc_82C37854:
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r4,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C37860"))) PPC_WEAK_FUNC(sub_82C37860);
PPC_FUNC_IMPL(__imp__sub_82C37860) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x82C37868;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,0(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82c378dc
	if (ctx.cr6.eq) goto loc_82C378DC;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82c37894
	if (!ctx.cr6.eq) goto loc_82C37894;
	// stw r28,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r28.u32);
loc_82C37894:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// stw r28,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r28.u32);
	// bl 0x82a75988
	ctx.lr = 0x82C378B0;
	sub_82A75988(ctx, base);
	// li r10,259
	ctx.r10.s64 = 259;
	// stw r28,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r28.u32);
	// addi r11,r30,8
	ctx.r11.s64 = ctx.r30.s64 + 8;
	// stw r10,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r10.u32);
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
	// stw r28,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r28.u32);
	// lwz r10,12(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82c378e8
	if (ctx.cr6.eq) goto loc_82C378E8;
	// stw r31,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r31.u32);
	// b 0x82c378ec
	goto loc_82C378EC;
loc_82C378DC:
	// lis r28,-32761
	ctx.r28.s64 = -2147024896;
	// ori r28,r28,122
	ctx.r28.u64 = ctx.r28.u64 | 122;
	// b 0x82c378f0
	goto loc_82C378F0;
loc_82C378E8:
	// stw r31,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r31.u32);
loc_82C378EC:
	// stw r31,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r31.u32);
loc_82C378F0:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C378FC"))) PPC_WEAK_FUNC(sub_82C378FC);
PPC_FUNC_IMPL(__imp__sub_82C378FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C37900"))) PPC_WEAK_FUNC(sub_82C37900);
PPC_FUNC_IMPL(__imp__sub_82C37900) {
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
	// beq cr6,0x82c3794c
	if (ctx.cr6.eq) goto loc_82C3794C;
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82c3793c
	if (ctx.cr6.eq) goto loc_82C3793C;
	// lis r4,24970
	ctx.r4.s64 = 1636433920;
	// ori r4,r4,3
	ctx.r4.u64 = ctx.r4.u64 | 3;
	// bl 0x82691460
	ctx.lr = 0x82C37934;
	sub_82691460(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
loc_82C3793C:
	// lis r4,24970
	ctx.r4.s64 = 1636433920;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r4,r4,32773
	ctx.r4.u64 = ctx.r4.u64 | 32773;
	// bl 0x82691460
	ctx.lr = 0x82C3794C;
	sub_82691460(ctx, base);
loc_82C3794C:
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

__attribute__((alias("__imp__sub_82C37960"))) PPC_WEAK_FUNC(sub_82C37960);
PPC_FUNC_IMPL(__imp__sub_82C37960) {
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
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82c379cc
	if (ctx.cr6.eq) goto loc_82C379CC;
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82c379a0
	if (ctx.cr6.eq) goto loc_82C379A0;
	// lis r4,24714
	ctx.r4.s64 = 1619656704;
	// ori r4,r4,8194
	ctx.r4.u64 = ctx.r4.u64 | 8194;
	// bl 0x82691460
	ctx.lr = 0x82C3799C;
	sub_82691460(ctx, base);
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
loc_82C379A0:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82c379bc
	if (ctx.cr6.eq) goto loc_82C379BC;
	// lis r4,24970
	ctx.r4.s64 = 1636433920;
	// ori r4,r4,9
	ctx.r4.u64 = ctx.r4.u64 | 9;
	// bl 0x82691460
	ctx.lr = 0x82C379B8;
	sub_82691460(ctx, base);
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
loc_82C379BC:
	// lis r4,24970
	ctx.r4.s64 = 1636433920;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r4,r4,32774
	ctx.r4.u64 = ctx.r4.u64 | 32774;
	// bl 0x82691460
	ctx.lr = 0x82C379CC;
	sub_82691460(ctx, base);
loc_82C379CC:
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

__attribute__((alias("__imp__sub_82C379E4"))) PPC_WEAK_FUNC(sub_82C379E4);
PPC_FUNC_IMPL(__imp__sub_82C379E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C379E8"))) PPC_WEAK_FUNC(sub_82C379E8);
PPC_FUNC_IMPL(__imp__sub_82C379E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7674
	ctx.lr = 0x82C379F0;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// lis r4,24970
	ctx.r4.s64 = 1636433920;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,20
	ctx.r3.s64 = 20;
	// ori r4,r4,32773
	ctx.r4.u64 = ctx.r4.u64 | 32773;
	// li r28,0
	ctx.r28.s64 = 0;
	// bl 0x82691410
	ctx.lr = 0x82C37A10;
	sub_82691410(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x82c37a3c
	if (!ctx.cr0.eq) goto loc_82C37A3C;
loc_82C37A18:
	// lis r28,-32761
	ctx.r28.s64 = -2147024896;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r28,r28,14
	ctx.r28.u64 = ctx.r28.u64 | 14;
	// bl 0x82c37900
	ctx.lr = 0x82C37A28;
	sub_82C37900(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
loc_82C37A2C:
	// stw r31,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r31.u32);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c4
	__restgprlr_27(ctx, base);
	return;
loc_82C37A3C:
	// rlwinm r29,r30,3,0,28
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 3) & 0xFFFFFFF8;
	// lis r4,24970
	ctx.r4.s64 = 1636433920;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// ori r4,r4,3
	ctx.r4.u64 = ctx.r4.u64 | 3;
	// bl 0x82691410
	ctx.lr = 0x82C37A50;
	sub_82691410(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r3.u32);
	// beq 0x82c37a18
	if (ctx.cr0.eq) goto loc_82C37A18;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82c37a2c
	if (ctx.cr6.eq) goto loc_82C37A2C;
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
loc_82C37A6C:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// addi r10,r10,-8
	ctx.r10.s64 = ctx.r10.s64 + -8;
	// li r9,0
	ctx.r9.s64 = 0;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82c37a94
	if (ctx.cr6.eq) goto loc_82C37A94;
	// stw r11,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r11.u32);
	// b 0x82c37a98
	goto loc_82C37A98;
loc_82C37A94:
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_82C37A98:
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// bdnz 0x82c37a6c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82C37A6C;
	// b 0x82c37a2c
	goto loc_82C37A2C;
}

__attribute__((alias("__imp__sub_82C37AA4"))) PPC_WEAK_FUNC(sub_82C37AA4);
PPC_FUNC_IMPL(__imp__sub_82C37AA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C37AA8"))) PPC_WEAK_FUNC(sub_82C37AA8);
PPC_FUNC_IMPL(__imp__sub_82C37AA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7668
	ctx.lr = 0x82C37AB0;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// lis r4,24970
	ctx.r4.s64 = 1636433920;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r3,12
	ctx.r3.s64 = 12;
	// ori r4,r4,32774
	ctx.r4.u64 = ctx.r4.u64 | 32774;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r24,r7
	ctx.r24.u64 = ctx.r7.u64;
	// li r25,0
	ctx.r25.s64 = 0;
	// bl 0x82691410
	ctx.lr = 0x82C37ADC;
	sub_82691410(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82c37b70
	if (ctx.cr0.eq) goto loc_82C37B70;
	// stw r28,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r28.u32);
	// mullw r26,r29,r30
	ctx.r26.s64 = int64_t(ctx.r29.s32) * int64_t(ctx.r30.s32);
	// lis r4,24714
	ctx.r4.s64 = 1619656704;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// ori r4,r4,8194
	ctx.r4.u64 = ctx.r4.u64 | 8194;
	// bl 0x82691410
	ctx.lr = 0x82C37AFC;
	sub_82691410(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// lis r4,24970
	ctx.r4.s64 = 1636433920;
	// mullw r3,r28,r30
	ctx.r3.s64 = int64_t(ctx.r28.s32) * int64_t(ctx.r30.s32);
	// ori r4,r4,9
	ctx.r4.u64 = ctx.r4.u64 | 9;
	// bl 0x82691410
	ctx.lr = 0x82C37B10;
	sub_82691410(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82c37b70
	if (ctx.cr6.eq) goto loc_82C37B70;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82c37b70
	if (ctx.cr6.eq) goto loc_82C37B70;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82c37b84
	if (ctx.cr6.eq) goto loc_82C37B84;
	// subf r8,r27,r29
	ctx.r8.s64 = ctx.r29.s64 - ctx.r27.s64;
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
loc_82C37B3C:
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r30,r30,-1
	ctx.r30.s64 = ctx.r30.s64 + -1;
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// subf r11,r29,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r29.s64;
	// mullw r10,r10,r30
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r30.s32);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r8,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r8.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// add r9,r9,r27
	ctx.r9.u64 = ctx.r9.u64 + ctx.r27.u64;
	// stw r9,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r9.u32);
	// bdnz 0x82c37b3c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82C37B3C;
	// b 0x82c37b84
	goto loc_82C37B84;
loc_82C37B70:
	// lis r25,-32761
	ctx.r25.s64 = -2147024896;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r25,r25,14
	ctx.r25.u64 = ctx.r25.u64 | 14;
	// bl 0x82c37960
	ctx.lr = 0x82C37B80;
	sub_82C37960(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
loc_82C37B84:
	// stw r31,0(r24)
	PPC_STORE_U32(ctx.r24.u32 + 0, ctx.r31.u32);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82fa76b8
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C37B94"))) PPC_WEAK_FUNC(sub_82C37B94);
PPC_FUNC_IMPL(__imp__sub_82C37B94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C37B98"))) PPC_WEAK_FUNC(sub_82C37B98);
PPC_FUNC_IMPL(__imp__sub_82C37B98) {
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
	// lwz r11,76(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 76);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82c37c08
	if (ctx.cr6.eq) goto loc_82C37C08;
	// bl 0x82a78340
	ctx.lr = 0x82C37BC4;
	sub_82A78340(ctx, base);
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// li r9,40
	ctx.r9.s64 = 40;
	// ld r8,24(r31)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r31.u32 + 24);
	// subfic r11,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r11.s64;
	// ld r6,16(r31)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r31.u32 + 16);
	// clrldi r10,r3,32
	ctx.r10.u64 = ctx.r3.u64 & 0xFFFFFFFF;
	// ld r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 40);
	// subfe r7,r7,r7
	temp.u8 = (~ctx.r7.u32 + ctx.r7.u32 < ~ctx.r7.u32) | (~ctx.r7.u32 + ctx.r7.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r7.u64 = ~ctx.r7.u64 + ctx.r7.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r9,r7,r9
	ctx.r9.u64 = ctx.r7.u64 & ctx.r9.u64;
	// extsw r9,r9
	ctx.r9.s64 = ctx.r9.s32;
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// subf r9,r6,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r6.s64;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// cmpld cr6,r10,r11
	ctx.cr6.compare<uint64_t>(ctx.r10.u64, ctx.r11.u64, ctx.xer);
	// blt cr6,0x82c37c08
	if (ctx.cr6.lt) goto loc_82C37C08;
	// li r30,1
	ctx.r30.s64 = 1;
	// std r11,56(r31)
	PPC_STORE_U64(ctx.r31.u32 + 56, ctx.r11.u64);
loc_82C37C08:
	// stw r30,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r30.u32);
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

__attribute__((alias("__imp__sub_82C37C28"))) PPC_WEAK_FUNC(sub_82C37C28);
PPC_FUNC_IMPL(__imp__sub_82C37C28) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// ld r10,16(r3)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// li r9,20
	ctx.r9.s64 = 20;
	// lhz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 32);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// divdu r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 / ctx.r9.u64;
	// lhz r9,70(r3)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r3.u32 + 70);
	// li r6,0
	ctx.r6.s64 = 0;
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// std r6,0(r5)
	PPC_STORE_U64(ctx.r5.u32 + 0, ctx.r6.u64);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// srawi r10,r11,11
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FF) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 11;
	// addze r10,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r10.s64 = temp.s64;
	// rlwinm r10,r10,11,0,20
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 11) & 0xFFFFF800;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// addi r10,r11,2048
	ctx.r10.s64 = ctx.r11.s64 + 2048;
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// subf r7,r9,r10
	ctx.r7.s64 = ctx.r10.s64 - ctx.r9.s64;
	// add r9,r10,r9
	ctx.r9.u64 = ctx.r10.u64 + ctx.r9.u64;
	// srawi r10,r7,11
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7FF) != 0);
	ctx.r10.s64 = ctx.r7.s32 >> 11;
	// addze r10,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r10.s64 = temp.s64;
	// srawi r3,r9,11
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7FF) != 0);
	ctx.r3.s64 = ctx.r9.s32 >> 11;
	// rlwinm r10,r10,11,0,20
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 11) & 0xFFFFF800;
	// addze r3,r3
	temp.s64 = ctx.r3.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r3.u32;
	ctx.r3.s64 = temp.s64;
	// subf r10,r10,r7
	ctx.r10.s64 = ctx.r7.s64 - ctx.r10.s64;
	// rlwinm r7,r3,11,0,20
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 11) & 0xFFFFF800;
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// subf r9,r7,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r7.s64;
	// mr r7,r10
	ctx.r7.u64 = ctx.r10.u64;
	// clrlwi r9,r9,16
	ctx.r9.u64 = ctx.r9.u32 & 0xFFFF;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// clrlwi r10,r4,16
	ctx.r10.u64 = ctx.r4.u32 & 0xFFFF;
	// bge cr6,0x82c37cd4
	if (!ctx.cr6.lt) goto loc_82C37CD4;
	// cmplw cr6,r10,r7
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r7.u32, ctx.xer);
	// blt cr6,0x82c37cc0
	if (ctx.cr6.lt) goto loc_82C37CC0;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// ble cr6,0x82c37d10
	if (!ctx.cr6.gt) goto loc_82C37D10;
loc_82C37CC0:
	// lwz r11,376(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 376);
	// li r3,2
	ctx.r3.s64 = 2;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,376(r8)
	PPC_STORE_U32(ctx.r8.u32 + 376, ctx.r11.u32);
	// blr 
	return;
loc_82C37CD4:
	// cmplw cr6,r10,r7
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r7.u32, ctx.xer);
	// bge cr6,0x82c37ce4
	if (!ctx.cr6.lt) goto loc_82C37CE4;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bgt cr6,0x82c37cc0
	if (ctx.cr6.gt) goto loc_82C37CC0;
loc_82C37CE4:
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x82c37d08
	if (!ctx.cr6.lt) goto loc_82C37D08;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x82c37cfc
	if (ctx.cr6.gt) goto loc_82C37CFC;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// ble cr6,0x82c37d18
	if (!ctx.cr6.gt) goto loc_82C37D18;
loc_82C37CFC:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82C37D00:
	// stw r6,376(r8)
	PPC_STORE_U32(ctx.r8.u32 + 376, ctx.r6.u32);
	// blr 
	return;
loc_82C37D08:
	// cmplw cr6,r7,r10
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x82c37d18
	if (ctx.cr6.gt) goto loc_82C37D18;
loc_82C37D10:
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82c37cfc
	if (ctx.cr6.lt) goto loc_82C37CFC;
loc_82C37D18:
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// ld r10,16(r8)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r8.u32 + 16);
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// addi r11,r11,2048
	ctx.r11.s64 = ctx.r11.s64 + 2048;
	// srawi r9,r11,11
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FF) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 11;
	// addze r9,r9
	temp.s64 = ctx.r9.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r9.s64 = temp.s64;
	// rlwinm r9,r9,11,0,20
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 11) & 0xFFFFF800;
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// mulli r11,r11,20
	ctx.r11.s64 = ctx.r11.s64 * 20;
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// std r11,0(r5)
	PPC_STORE_U64(ctx.r5.u32 + 0, ctx.r11.u64);
	// b 0x82c37d00
	goto loc_82C37D00;
}

__attribute__((alias("__imp__sub_82C37D50"))) PPC_WEAK_FUNC(sub_82C37D50);
PPC_FUNC_IMPL(__imp__sub_82C37D50) {
	PPC_FUNC_PROLOGUE();
	// addi r10,r3,392
	ctx.r10.s64 = ctx.r3.s64 + 392;
	// lwz r8,0(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r3,0
	ctx.r3.s64 = 0;
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82c37db0
	if (ctx.cr6.eq) goto loc_82C37DB0;
	// ld r7,24(r8)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r8.u32 + 24);
loc_82C37D70:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// ld r8,24(r8)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r8.u32 + 24);
	// cmpld cr6,r7,r8
	ctx.cr6.compare<uint64_t>(ctx.r7.u64, ctx.r8.u64, ctx.xer);
	// blt cr6,0x82c37d90
	if (ctx.cr6.lt) goto loc_82C37D90;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82c37d70
	if (!ctx.cr6.eq) goto loc_82C37D70;
loc_82C37D90:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82c37dd4
	if (!ctx.cr6.eq) goto loc_82C37DD4;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82c37db0
	if (ctx.cr6.eq) goto loc_82C37DB0;
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// ld r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 24);
	// cmpld cr6,r11,r7
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, ctx.r7.u64, ctx.xer);
	// beq cr6,0x82c37e10
	if (ctx.cr6.eq) goto loc_82C37E10;
loc_82C37DB0:
	// stw r3,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r3.u32);
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82c37dc8
	if (ctx.cr6.eq) goto loc_82C37DC8;
	// stw r4,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r4.u32);
	// b 0x82c37dcc
	goto loc_82C37DCC;
loc_82C37DC8:
	// stw r4,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r4.u32);
loc_82C37DCC:
	// stw r4,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r4.u32);
	// blr 
	return;
loc_82C37DD4:
	// cmpld cr6,r8,r7
	ctx.cr6.compare<uint64_t>(ctx.r8.u64, ctx.r7.u64, ctx.xer);
	// beq cr6,0x82c37e10
	if (ctx.cr6.eq) goto loc_82C37E10;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82c37e00
	if (!ctx.cr6.eq) goto loc_82C37E00;
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stw r11,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r11.u32);
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r4,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r4.u32);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// b 0x82c37dcc
	goto loc_82C37DCC;
loc_82C37E00:
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stw r11,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r11.u32);
	// stw r4,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r4.u32);
	// blr 
	return;
loc_82C37E10:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C37E1C"))) PPC_WEAK_FUNC(sub_82C37E1C);
PPC_FUNC_IMPL(__imp__sub_82C37E1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C37E20"))) PPC_WEAK_FUNC(sub_82C37E20);
PPC_FUNC_IMPL(__imp__sub_82C37E20) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lhz r10,68(r3)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r3.u32 + 68);
	// clrlwi r8,r4,16
	ctx.r8.u64 = ctx.r4.u32 & 0xFFFF;
	// ld r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16);
	// li r9,0
	ctx.r9.s64 = 0;
	// subf r7,r10,r8
	ctx.r7.s64 = ctx.r8.s64 - ctx.r10.s64;
	// ld r8,24(r3)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r3.u32 + 24);
	// std r9,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r9.u64);
	// addi r10,r3,392
	ctx.r10.s64 = ctx.r3.s64 + 392;
	// addi r7,r7,2048
	ctx.r7.s64 = ctx.r7.s64 + 2048;
	// stw r9,312(r3)
	PPC_STORE_U32(ctx.r3.u32 + 312, ctx.r9.u32);
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// stw r9,304(r3)
	PPC_STORE_U32(ctx.r3.u32 + 304, ctx.r9.u32);
	// srawi r8,r7,11
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7FF) != 0);
	ctx.r8.s64 = ctx.r7.s32 >> 11;
	// std r11,24(r3)
	PPC_STORE_U64(ctx.r3.u32 + 24, ctx.r11.u64);
	// addze r11,r8
	temp.s64 = ctx.r8.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r11.s64 = temp.s64;
	// rlwinm r11,r11,11,0,20
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 11) & 0xFFFFF800;
	// subf r11,r11,r7
	ctx.r11.s64 = ctx.r7.s64 - ctx.r11.s64;
	// sth r11,32(r3)
	PPC_STORE_U16(ctx.r3.u32 + 32, ctx.r11.u16);
	// lwz r11,392(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 392);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x82c37e84
	if (!ctx.cr6.eq) goto loc_82C37E84;
	// stw r9,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
loc_82C37E84:
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// addi r7,r3,384
	ctx.r7.s64 = ctx.r3.s64 + 384;
loc_82C37E9C:
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// lwz r8,4(r7)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82c37eb4
	if (ctx.cr6.eq) goto loc_82C37EB4;
	// stw r11,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r11.u32);
	// b 0x82c37eb8
	goto loc_82C37EB8;
loc_82C37EB4:
	// stw r11,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r11.u32);
loc_82C37EB8:
	// stw r11,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, ctx.r11.u32);
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r8,4(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// bne cr6,0x82c37ed8
	if (!ctx.cr6.eq) goto loc_82C37ED8;
	// stw r9,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
loc_82C37ED8:
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// bne cr6,0x82c37e9c
	if (!ctx.cr6.eq) goto loc_82C37E9C;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C37EF0"))) PPC_WEAK_FUNC(sub_82C37EF0);
PPC_FUNC_IMPL(__imp__sub_82C37EF0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7670
	ctx.lr = 0x82C37EF8;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,304(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 304);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r9,312(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 312);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lhz r8,72(r3)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r3.u32 + 72);
	// lhz r7,68(r3)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r3.u32 + 68);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// lfd f13,22528(r10)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r10.u32 + 22528);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// subf r10,r8,r7
	ctx.r10.s64 = ctx.r7.s64 - ctx.r8.s64;
	// fdiv f11,f12,f0
	ctx.f11.f64 = ctx.f12.f64 / ctx.f0.f64;
	// fcmpu cr6,f11,f13
	ctx.cr6.compare(ctx.f11.f64, ctx.f13.f64);
	// bge cr6,0x82c37f48
	if (!ctx.cr6.lt) goto loc_82C37F48;
	// fdiv f12,f12,f0
	ctx.f12.f64 = ctx.f12.f64 / ctx.f0.f64;
	// b 0x82c37f4c
	goto loc_82C37F4C;
loc_82C37F48:
	// fmr f12,f13
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = ctx.f13.f64;
loc_82C37F4C:
	// lfd f11,288(r31)
	ctx.fpscr.disableFlushMode();
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 288);
	// fmul f0,f11,f0
	ctx.f0.f64 = ctx.f11.f64 * ctx.f0.f64;
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x82c37f60
	if (ctx.cr6.lt) goto loc_82C37F60;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
loc_82C37F60:
	// fsub f13,f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = ctx.f13.f64 - ctx.f0.f64;
	// addi r11,r10,10
	ctx.r11.s64 = ctx.r10.s64 + 10;
	// fmul f12,f0,f12
	ctx.f12.f64 = ctx.f0.f64 * ctx.f12.f64;
	// stfd f0,296(r31)
	PPC_STORE_U64(ctx.r31.u32 + 296, ctx.f0.u64);
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// li r26,0
	ctx.r26.s64 = 0;
	// lfdx f0,r11,r31
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + ctx.r31.u32);
	// fmadd f0,f13,f0,f12
	ctx.f0.f64 = ctx.f13.f64 * ctx.f0.f64 + ctx.f12.f64;
	// stfdx f0,r11,r31
	PPC_STORE_U64(ctx.r11.u32 + ctx.r31.u32, ctx.f0.u64);
	// lfd f0,280(r31)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r31.u32 + 280);
	// stw r26,304(r31)
	PPC_STORE_U32(ctx.r31.u32 + 304, ctx.r26.u32);
	// stw r26,312(r31)
	PPC_STORE_U32(ctx.r31.u32 + 312, ctx.r26.u32);
	// lfdx f13,r11,r31
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r11.u32 + ctx.r31.u32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x82c380c0
	if (!ctx.cr6.lt) goto loc_82C380C0;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82c3811c
	if (ctx.cr6.eq) goto loc_82C3811C;
	// addi r11,r10,9
	ctx.r11.s64 = ctx.r10.s64 + 9;
	// fsub f13,f13,f0
	ctx.f13.f64 = ctx.f13.f64 - ctx.f0.f64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lfdx f12,r11,r31
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r11.u32 + ctx.r31.u32);
	// fsub f0,f12,f0
	ctx.f0.f64 = ctx.f12.f64 - ctx.f0.f64;
	// fabs f13,f13
	ctx.f13.u64 = ctx.f13.u64 & ~0x8000000000000000;
	// fabs f0,f0
	ctx.f0.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x82c3811c
	if (!ctx.cr6.lt) goto loc_82C3811C;
	// ld r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 40);
	// li r10,20
	ctx.r10.s64 = 20;
	// lwz r28,392(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 392);
	// addi r30,r31,392
	ctx.r30.s64 = ctx.r31.s64 + 392;
	// addi r11,r11,-20
	ctx.r11.s64 = ctx.r11.s64 + -20;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// divdu r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 / ctx.r10.u64;
	// std r11,40(r31)
	PPC_STORE_U64(ctx.r31.u32 + 40, ctx.r11.u64);
	// sth r10,68(r31)
	PPC_STORE_U16(ctx.r31.u32 + 68, ctx.r10.u16);
	// beq cr6,0x82c3811c
	if (ctx.cr6.eq) goto loc_82C3811C;
	// lwz r27,0(r28)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// ld r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 16);
	// addi r11,r11,20
	ctx.r11.s64 = ctx.r11.s64 + 20;
	// ld r29,24(r27)
	ctx.r29.u64 = PPC_LOAD_U64(ctx.r27.u32 + 24);
	// std r11,16(r31)
	PPC_STORE_U64(ctx.r31.u32 + 16, ctx.r11.u64);
	// bl 0x82c377c0
	ctx.lr = 0x82C3800C;
	sub_82C377C0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82c3811c
	if (ctx.cr0.eq) goto loc_82C3811C;
	// ld r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 16);
	// cmpld cr6,r11,r29
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, ctx.r29.u64, ctx.xer);
	// ble cr6,0x82c3811c
	if (!ctx.cr6.gt) goto loc_82C3811C;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r10,r29,20
	ctx.r10.s64 = ctx.r29.s64 + 20;
	// mr r8,r26
	ctx.r8.u64 = ctx.r26.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82c380b0
	if (ctx.cr6.eq) goto loc_82C380B0;
loc_82C38034:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// ld r9,24(r9)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r9.u32 + 24);
	// cmpld cr6,r9,r10
	ctx.cr6.compare<uint64_t>(ctx.r9.u64, ctx.r10.u64, ctx.xer);
	// bgt cr6,0x82c38058
	if (ctx.cr6.gt) goto loc_82C38058;
	// bne cr6,0x82c3804c
	if (!ctx.cr6.eq) goto loc_82C3804C;
	// li r8,1
	ctx.r8.s64 = 1;
loc_82C3804C:
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82c38034
	if (!ctx.cr6.eq) goto loc_82C38034;
loc_82C38058:
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x82c380b0
	if (ctx.cr6.eq) goto loc_82C380B0;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82c38088
	if (ctx.cr6.eq) goto loc_82C38088;
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82c3807c
	if (!ctx.cr6.eq) goto loc_82C3807C;
	// stw r26,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r26.u32);
loc_82C3807C:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// stw r26,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r26.u32);
loc_82C38088:
	// stw r26,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r26.u32);
	// addi r11,r31,384
	ctx.r11.s64 = ctx.r31.s64 + 384;
	// lwz r10,388(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 388);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82c380a4
	if (ctx.cr6.eq) goto loc_82C380A4;
	// stw r28,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r28.u32);
	// b 0x82c380a8
	goto loc_82C380A8;
loc_82C380A4:
	// stw r28,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r28.u32);
loc_82C380A8:
	// stw r28,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r28.u32);
	// b 0x82c3811c
	goto loc_82C3811C;
loc_82C380B0:
	// ld r11,24(r27)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r27.u32 + 24);
	// addi r11,r11,20
	ctx.r11.s64 = ctx.r11.s64 + 20;
	// std r11,24(r27)
	PPC_STORE_U64(ctx.r27.u32 + 24, ctx.r11.u64);
	// b 0x82c3811c
	goto loc_82C3811C;
loc_82C380C0:
	// addi r11,r10,1
	ctx.r11.s64 = ctx.r10.s64 + 1;
	// cmplwi cr6,r11,25
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 25, ctx.xer);
	// bge cr6,0x82c3811c
	if (!ctx.cr6.lt) goto loc_82C3811C;
	// addi r11,r10,11
	ctx.r11.s64 = ctx.r10.s64 + 11;
	// fsub f13,f13,f0
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = ctx.f13.f64 - ctx.f0.f64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lfdx f12,r11,r31
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r11.u32 + ctx.r31.u32);
	// fsub f0,f12,f0
	ctx.f0.f64 = ctx.f12.f64 - ctx.f0.f64;
	// fabs f13,f13
	ctx.f13.u64 = ctx.f13.u64 & ~0x8000000000000000;
	// fabs f0,f0
	ctx.f0.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x82c3811c
	if (!ctx.cr6.lt) goto loc_82C3811C;
	// ld r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 16);
	// cmpldi cr6,r11,0
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, 0, ctx.xer);
	// beq cr6,0x82c3811c
	if (ctx.cr6.eq) goto loc_82C3811C;
	// addi r10,r11,-20
	ctx.r10.s64 = ctx.r11.s64 + -20;
	// ld r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 40);
	// li r9,20
	ctx.r9.s64 = 20;
	// addi r11,r11,20
	ctx.r11.s64 = ctx.r11.s64 + 20;
	// std r10,16(r31)
	PPC_STORE_U64(ctx.r31.u32 + 16, ctx.r10.u64);
	// divdu r10,r11,r9
	ctx.r10.u64 = ctx.r11.u64 / ctx.r9.u64;
	// std r11,40(r31)
	PPC_STORE_U64(ctx.r31.u32 + 40, ctx.r11.u64);
	// sth r10,68(r31)
	PPC_STORE_U16(ctx.r31.u32 + 68, ctx.r10.u16);
loc_82C3811C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82fa76c0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C38124"))) PPC_WEAK_FUNC(sub_82C38124);
PPC_FUNC_IMPL(__imp__sub_82C38124) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C38128"))) PPC_WEAK_FUNC(sub_82C38128);
PPC_FUNC_IMPL(__imp__sub_82C38128) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x82C38130;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,0(r4)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// lwz r3,412(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 412);
	// bl 0x82c373b0
	ctx.lr = 0x82C38168;
	sub_82C373B0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x82c3818c
	if (!ctx.cr0.lt) goto loc_82C3818C;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r10,r10,-2
	ctx.r10.s64 = ctx.r10.s64 + -2;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// b 0x82c381b4
	goto loc_82C381B4;
loc_82C3818C:
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r29,400
	ctx.r11.s64 = ctx.r29.s64 + 400;
	// stw r10,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r10.u32);
	// lwz r10,404(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 404);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82c381ac
	if (ctx.cr6.eq) goto loc_82C381AC;
	// stw r30,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r30.u32);
	// b 0x82c381b0
	goto loc_82C381B0;
loc_82C381AC:
	// stw r30,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r30.u32);
loc_82C381B0:
	// stw r30,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r30.u32);
loc_82C381B4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C381BC"))) PPC_WEAK_FUNC(sub_82C381BC);
PPC_FUNC_IMPL(__imp__sub_82C381BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C381C0"))) PPC_WEAK_FUNC(sub_82C381C0);
PPC_FUNC_IMPL(__imp__sub_82C381C0) {
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
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82c3821c
	if (ctx.cr6.eq) goto loc_82C3821C;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82c38200
	if (ctx.cr6.eq) goto loc_82C38200;
	// lis r4,24970
	ctx.r4.s64 = 1636433920;
	// ori r4,r4,3
	ctx.r4.u64 = ctx.r4.u64 | 3;
	// bl 0x82691460
	ctx.lr = 0x82C381FC;
	sub_82691460(ctx, base);
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
loc_82C38200:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82c37960
	ctx.lr = 0x82C38208;
	sub_82C37960(ctx, base);
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// lis r4,24970
	ctx.r4.s64 = 1636433920;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r4,r4,32787
	ctx.r4.u64 = ctx.r4.u64 | 32787;
	// bl 0x82691460
	ctx.lr = 0x82C3821C;
	sub_82691460(ctx, base);
loc_82C3821C:
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

__attribute__((alias("__imp__sub_82C38234"))) PPC_WEAK_FUNC(sub_82C38234);
PPC_FUNC_IMPL(__imp__sub_82C38234) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C38238"))) PPC_WEAK_FUNC(sub_82C38238);
PPC_FUNC_IMPL(__imp__sub_82C38238) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7674
	ctx.lr = 0x82C38240;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r28,-32768
	ctx.r28.s64 = -2147483648;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// ori r28,r28,16389
	ctx.r28.u64 = ctx.r28.u64 | 16389;
	// bl 0x82c37b98
	ctx.lr = 0x82C38254;
	sub_82C37B98(ctx, base);
	// li r27,0
	ctx.r27.s64 = 0;
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82c383ac
	if (ctx.cr0.eq) goto loc_82C383AC;
	// lwz r29,392(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 392);
	// addi r31,r30,392
	ctx.r31.s64 = ctx.r30.s64 + 392;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82c383a8
	if (ctx.cr6.eq) goto loc_82C383A8;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// ld r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r30.u32 + 16);
	// ld r9,24(r10)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r10.u32 + 24);
	// cmpld cr6,r9,r11
	ctx.cr6.compare<uint64_t>(ctx.r9.u64, ctx.r11.u64, ctx.xer);
	// beq cr6,0x82c38324
	if (ctx.cr6.eq) goto loc_82C38324;
	// lwz r11,316(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 316);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,316(r30)
	PPC_STORE_U32(ctx.r30.u32 + 316, ctx.r11.u32);
	// lwz r11,372(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 372);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82c383a0
	if (ctx.cr6.eq) goto loc_82C383A0;
	// lwz r31,384(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 384);
	// addi r29,r30,384
	ctx.r29.s64 = ctx.r30.s64 + 384;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82c383e0
	if (ctx.cr6.eq) goto loc_82C383E0;
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82c382bc
	if (!ctx.cr6.eq) goto loc_82C382BC;
	// stw r27,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r27.u32);
loc_82C382BC:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r4,r30,328
	ctx.r4.s64 = ctx.r30.s64 + 328;
	// li r5,42
	ctx.r5.s64 = 42;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// stw r27,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r27.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// bl 0x82fa77c0
	ctx.lr = 0x82C382DC;
	sub_82FA77C0(ctx, base);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r11,42
	ctx.r11.s64 = 42;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c38128
	ctx.lr = 0x82C382F4;
	sub_82C38128(ctx, base);
	// mr. r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// bge 0x82c38398
	if (!ctx.cr0.lt) goto loc_82C38398;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r27,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r27.u32);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r31,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r31.u32);
	// bne cr6,0x82c383c0
	if (!ctx.cr6.eq) goto loc_82C383C0;
	// stw r31,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r31.u32);
	// b 0x82c383c0
	goto loc_82C383C0;
loc_82C38324:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82c3834c
	if (ctx.cr6.eq) goto loc_82C3834C;
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82c38340
	if (!ctx.cr6.eq) goto loc_82C38340;
	// stw r27,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r27.u32);
loc_82C38340:
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// stw r27,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r27.u32);
loc_82C3834C:
	// addi r3,r30,328
	ctx.r3.s64 = ctx.r30.s64 + 328;
	// lwz r5,12(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// lwz r4,8(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// bl 0x82fa77c0
	ctx.lr = 0x82C3835C;
	sub_82FA77C0(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// stw r11,372(r30)
	PPC_STORE_U32(ctx.r30.u32 + 372, ctx.r11.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c38128
	ctx.lr = 0x82C38370;
	sub_82C38128(ctx, base);
	// mr. r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// bge 0x82c383b4
	if (!ctx.cr0.lt) goto loc_82C383B4;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r11,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r11.u32);
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82c383c0
	if (!ctx.cr6.eq) goto loc_82C383C0;
	// stw r29,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r29.u32);
	// b 0x82c383c0
	goto loc_82C383C0;
loc_82C38398:
	// stw r27,372(r30)
	PPC_STORE_U32(ctx.r30.u32 + 372, ctx.r27.u32);
	// b 0x82c383c0
	goto loc_82C383C0;
loc_82C383A0:
	// mr r28,r27
	ctx.r28.u64 = ctx.r27.u64;
	// b 0x82c383c0
	goto loc_82C383C0;
loc_82C383A8:
	// stw r27,76(r30)
	PPC_STORE_U32(ctx.r30.u32 + 76, ctx.r27.u32);
loc_82C383AC:
	// std r27,56(r30)
	PPC_STORE_U64(ctx.r30.u32 + 56, ctx.r27.u64);
	// b 0x82c383c0
	goto loc_82C383C0;
loc_82C383B4:
	// ld r11,56(r30)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r30.u32 + 56);
	// addi r11,r11,20
	ctx.r11.s64 = ctx.r11.s64 + 20;
	// std r11,56(r30)
	PPC_STORE_U64(ctx.r30.u32 + 56, ctx.r11.u64);
loc_82C383C0:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// blt cr6,0x82c383e0
	if (ctx.cr6.lt) goto loc_82C383E0;
	// ld r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r30.u32 + 16);
	// lwz r10,320(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 320);
	// addi r11,r11,20
	ctx.r11.s64 = ctx.r11.s64 + 20;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// std r11,16(r30)
	PPC_STORE_U64(ctx.r30.u32 + 16, ctx.r11.u64);
	// stw r10,320(r30)
	PPC_STORE_U32(ctx.r30.u32 + 320, ctx.r10.u32);
loc_82C383E0:
	// ld r11,56(r30)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r30.u32 + 56);
	// cmpdi cr6,r11,0
	ctx.cr6.compare<int64_t>(ctx.r11.s64, 0, ctx.xer);
	// ble cr6,0x82c383f4
	if (!ctx.cr6.gt) goto loc_82C383F4;
	// addi r11,r11,-20
	ctx.r11.s64 = ctx.r11.s64 + -20;
	// std r11,56(r30)
	PPC_STORE_U64(ctx.r30.u32 + 56, ctx.r11.u64);
loc_82C383F4:
	// lwz r31,400(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 400);
	// addi r29,r30,400
	ctx.r29.s64 = ctx.r30.s64 + 400;
	// b 0x82c3849c
	goto loc_82C3849C;
loc_82C38400:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r11,259
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 259, ctx.xer);
	// beq cr6,0x82c384a4
	if (ctx.cr6.eq) goto loc_82C384A4;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82c38438
	if (ctx.cr6.eq) goto loc_82C38438;
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82c3842c
	if (!ctx.cr6.eq) goto loc_82C3842C;
	// stw r27,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r27.u32);
loc_82C3842C:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r10.u32);
	// stw r27,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r27.u32);
loc_82C38438:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r10,r10,-2
	ctx.r10.s64 = ctx.r10.s64 + -2;
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r27,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r27.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r5,12(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// bl 0x82a75988
	ctx.lr = 0x82C38474;
	sub_82A75988(ctx, base);
	// stw r27,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r27.u32);
	// addi r11,r30,384
	ctx.r11.s64 = ctx.r30.s64 + 384;
	// lwz r10,388(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 388);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82c38490
	if (ctx.cr6.eq) goto loc_82C38490;
	// stw r31,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r31.u32);
	// b 0x82c38494
	goto loc_82C38494;
loc_82C38490:
	// stw r31,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r31.u32);
loc_82C38494:
	// stw r31,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r31.u32);
	// lwz r31,0(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
loc_82C3849C:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82c38400
	if (!ctx.cr6.eq) goto loc_82C38400;
loc_82C384A4:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C384B0"))) PPC_WEAK_FUNC(sub_82C384B0);
PPC_FUNC_IMPL(__imp__sub_82C384B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7668
	ctx.lr = 0x82C384B8;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lhz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// li r25,0
	ctx.r25.s64 = 0;
	// lwz r10,76(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 76);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r24,r5
	ctx.r24.u64 = ctx.r5.u64;
	// mr r28,r25
	ctx.r28.u64 = ctx.r25.u64;
	// rlwinm r29,r11,31,21,31
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FF;
	// rlwinm r30,r11,20,12,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 20) & 0xFFFFF;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82c3850c
	if (!ctx.cr6.eq) goto loc_82C3850C;
	// lwz r11,324(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 324);
	// bl 0x82a78340
	ctx.lr = 0x82C384F0;
	sub_82A78340(ctx, base);
	// clrldi r11,r3,32
	ctx.r11.u64 = ctx.r3.u64 & 0xFFFFFFFF;
	// stb r30,308(r31)
	PPC_STORE_U8(ctx.r31.u32 + 308, ctx.r30.u8);
	// sth r29,32(r31)
	PPC_STORE_U16(ctx.r31.u32 + 32, ctx.r29.u16);
	// std r11,24(r31)
	PPC_STORE_U64(ctx.r31.u32 + 24, ctx.r11.u64);
	// li r11,1
	ctx.r11.s64 = 1;
	// std r25,16(r31)
	PPC_STORE_U64(ctx.r31.u32 + 16, ctx.r25.u64);
	// stw r11,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r11.u32);
loc_82C3850C:
	// lbz r11,308(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 308);
	// clrlwi r27,r30,24
	ctx.r27.u64 = ctx.r30.u32 & 0xFF;
	// cmplw cr6,r27,r11
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82c38528
	if (ctx.cr6.eq) goto loc_82C38528;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c37ef0
	ctx.lr = 0x82C38524;
	sub_82C37EF0(ctx, base);
	// stb r30,308(r31)
	PPC_STORE_U8(ctx.r31.u32 + 308, ctx.r30.u8);
loc_82C38528:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c37c28
	ctx.lr = 0x82C38538;
	sub_82C37C28(ctx, base);
	// lwz r11,304(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 304);
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,304(r31)
	PPC_STORE_U32(ctx.r31.u32 + 304, ctx.r11.u32);
	// blt cr6,0x82c38578
	if (ctx.cr6.lt) goto loc_82C38578;
	// beq cr6,0x82c385f8
	if (ctx.cr6.eq) goto loc_82C385F8;
	// cmplwi cr6,r3,3
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 3, ctx.xer);
	// bge cr6,0x82c38630
	if (!ctx.cr6.lt) goto loc_82C38630;
	// lwz r11,380(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 380);
	// lwz r10,376(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 376);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82c3862c
	if (!ctx.cr6.lt) goto loc_82C3862C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c37e20
	ctx.lr = 0x82C38570;
	sub_82C37E20(ctx, base);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// bl 0x82c37c28
	ctx.lr = 0x82C38578;
	sub_82C37C28(ctx, base);
loc_82C38578:
	// lwz r30,384(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 384);
	// addi r29,r31,384
	ctx.r29.s64 = ctx.r31.s64 + 384;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82c3862c
	if (ctx.cr6.eq) goto loc_82C3862C;
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82c38598
	if (!ctx.cr6.eq) goto loc_82C38598;
	// stw r25,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r25.u32);
loc_82C38598:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// ld r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r25,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r25.u32);
	// std r10,24(r11)
	PPC_STORE_U64(ctx.r11.u32 + 24, ctx.r10.u64);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r3,8(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// bl 0x82fa77c0
	ctx.lr = 0x82C385C4;
	sub_82FA77C0(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r24,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r24.u32);
	// bl 0x82c37d50
	ctx.lr = 0x82C385D8;
	sub_82C37D50(ctx, base);
	// mr. r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// bge 0x82c38630
	if (!ctx.cr0.lt) goto loc_82C38630;
	// stw r25,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r25.u32);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82c38618
	if (ctx.cr6.eq) goto loc_82C38618;
	// stw r30,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r30.u32);
	// b 0x82c3861c
	goto loc_82C3861C;
loc_82C385F8:
	// lbz r11,308(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 308);
	// li r28,1
	ctx.r28.s64 = 1;
	// cmplw cr6,r27,r11
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82c38630
	if (!ctx.cr6.eq) goto loc_82C38630;
	// lwz r11,312(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 312);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,312(r31)
	PPC_STORE_U32(ctx.r31.u32 + 312, ctx.r11.u32);
	// b 0x82c38630
	goto loc_82C38630;
loc_82C38618:
	// stw r30,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r30.u32);
loc_82C3861C:
	// stw r30,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r30.u32);
	// lwz r11,304(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 304);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,304(r31)
	PPC_STORE_U32(ctx.r31.u32 + 304, ctx.r11.u32);
loc_82C3862C:
	// li r28,1
	ctx.r28.s64 = 1;
loc_82C38630:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82fa76b8
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C3863C"))) PPC_WEAK_FUNC(sub_82C3863C);
PPC_FUNC_IMPL(__imp__sub_82C3863C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C38640"))) PPC_WEAK_FUNC(sub_82C38640);
PPC_FUNC_IMPL(__imp__sub_82C38640) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// ld r9,40(r3)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r3.u32 + 40);
	// li r8,20
	ctx.r8.s64 = 20;
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r10,392(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 392);
	// divdu r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 / ctx.r8.u64;
	// addi r8,r3,392
	ctx.r8.s64 = ctx.r3.s64 + 392;
	// std r11,16(r3)
	PPC_STORE_U64(ctx.r3.u32 + 16, ctx.r11.u64);
	// std r11,24(r3)
	PPC_STORE_U64(ctx.r3.u32 + 24, ctx.r11.u64);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r11,76(r3)
	PPC_STORE_U32(ctx.r3.u32 + 76, ctx.r11.u32);
	// sth r9,68(r3)
	PPC_STORE_U16(ctx.r3.u32 + 68, ctx.r9.u16);
	// std r11,296(r3)
	PPC_STORE_U64(ctx.r3.u32 + 296, ctx.r11.u64);
	// stw r11,304(r3)
	PPC_STORE_U32(ctx.r3.u32 + 304, ctx.r11.u32);
	// stb r11,308(r3)
	PPC_STORE_U8(ctx.r3.u32 + 308, ctx.r11.u8);
	// stw r11,312(r3)
	PPC_STORE_U32(ctx.r3.u32 + 312, ctx.r11.u32);
	// beq cr6,0x82c386d8
	if (ctx.cr6.eq) goto loc_82C386D8;
	// addi r7,r3,384
	ctx.r7.s64 = ctx.r3.s64 + 384;
loc_82C38684:
	// lwz r9,0(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82c386ac
	if (ctx.cr6.eq) goto loc_82C386AC;
	// lwz r6,4(r8)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// cmplw cr6,r9,r6
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r6.u32, ctx.xer);
	// bne cr6,0x82c386a0
	if (!ctx.cr6.eq) goto loc_82C386A0;
	// stw r11,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r11.u32);
loc_82C386A0:
	// lwz r6,4(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stw r6,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r6.u32);
	// stw r11,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r11.u32);
loc_82C386AC:
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// lwz r9,4(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82c386c4
	if (ctx.cr6.eq) goto loc_82C386C4;
	// stw r10,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r10.u32);
	// b 0x82c386c8
	goto loc_82C386C8;
loc_82C386C4:
	// stw r10,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r10.u32);
loc_82C386C8:
	// stw r10,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, ctx.r10.u32);
	// lwz r10,0(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82c38684
	if (!ctx.cr6.eq) goto loc_82C38684;
loc_82C386D8:
	// li r10,25
	ctx.r10.s64 = 25;
	// addi r11,r3,72
	ctx.r11.s64 = ctx.r3.s64 + 72;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82C386E4:
	// ld r10,280(r3)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r3.u32 + 280);
	// stdu r10,8(r11)
	ea = 8 + ctx.r11.u32;
	PPC_STORE_U64(ea, ctx.r10.u64);
	ctx.r11.u32 = ea;
	// bdnz 0x82c386e4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82C386E4;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C386F4"))) PPC_WEAK_FUNC(sub_82C386F4);
PPC_FUNC_IMPL(__imp__sub_82C386F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C386F8"))) PPC_WEAK_FUNC(sub_82C386F8);
PPC_FUNC_IMPL(__imp__sub_82C386F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x82C38700;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// lis r4,24970
	ctx.r4.s64 = 1636433920;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r3,416
	ctx.r3.s64 = 416;
	// ori r4,r4,32787
	ctx.r4.u64 = ctx.r4.u64 | 32787;
	// bl 0x82691410
	ctx.lr = 0x82C3871C;
	sub_82691410(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// li r29,0
	ctx.r29.s64 = 0;
	// bne 0x82c3874c
	if (!ctx.cr0.eq) goto loc_82C3874C;
loc_82C38728:
	// lis r30,-32761
	ctx.r30.s64 = -2147024896;
	// ori r30,r30,14
	ctx.r30.u64 = ctx.r30.u64 | 14;
loc_82C38730:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c381c0
	ctx.lr = 0x82C38738;
	sub_82C381C0(ctx, base);
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
loc_82C3873C:
	// stw r31,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r31.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
loc_82C3874C:
	// lis r8,-32241
	ctx.r8.s64 = -2112946176;
	// stw r30,412(r31)
	PPC_STORE_U32(ctx.r31.u32 + 412, ctx.r30.u32);
	// lis r7,-32241
	ctx.r7.s64 = -2112946176;
	// stw r29,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r29.u32);
	// li r11,25
	ctx.r11.s64 = 25;
	// li r10,240
	ctx.r10.s64 = 240;
	// li r9,28
	ctx.r9.s64 = 28;
	// lfd f0,-5072(r8)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r8.u32 + -5072);
	// li r6,12
	ctx.r6.s64 = 12;
	// lfd f13,-5080(r7)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r7.u32 + -5080);
	// li r8,4
	ctx.r8.s64 = 4;
	// li r7,10
	ctx.r7.s64 = 10;
	// std r10,48(r31)
	PPC_STORE_U64(ctx.r31.u32 + 48, ctx.r10.u64);
	// li r5,1
	ctx.r5.s64 = 1;
	// std r10,40(r31)
	PPC_STORE_U64(ctx.r31.u32 + 40, ctx.r10.u64);
	// stfd f0,288(r31)
	PPC_STORE_U64(ctx.r31.u32 + 288, ctx.f0.u64);
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// stfd f13,280(r31)
	PPC_STORE_U64(ctx.r31.u32 + 280, ctx.f13.u64);
	// sth r6,68(r31)
	PPC_STORE_U16(ctx.r31.u32 + 68, ctx.r6.u16);
	// sth r8,72(r31)
	PPC_STORE_U16(ctx.r31.u32 + 72, ctx.r8.u16);
	// addi r10,r31,72
	ctx.r10.s64 = ctx.r31.s64 + 72;
	// sth r9,70(r31)
	PPC_STORE_U16(ctx.r31.u32 + 70, ctx.r9.u16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// stw r7,380(r31)
	PPC_STORE_U32(ctx.r31.u32 + 380, ctx.r7.u32);
	// stw r5,324(r31)
	PPC_STORE_U32(ctx.r31.u32 + 324, ctx.r5.u32);
loc_82C387B0:
	// lfd f0,280(r31)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r31.u32 + 280);
	// stfdu f0,8(r10)
	ea = 8 + ctx.r10.u32;
	PPC_STORE_U64(ea, ctx.r0.u64);
	ctx.r10.u32 = ea;
	// bdnz 0x82c387b0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82C387B0;
	// lwz r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r5,8(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r4,32
	ctx.r4.s64 = 32;
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// addi r3,r11,2
	ctx.r3.s64 = ctx.r11.s64 + 2;
	// bl 0x82c37aa8
	ctx.lr = 0x82C387DC;
	sub_82C37AA8(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt 0x82c38730
	if (ctx.cr0.lt) goto loc_82C38730;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lis r4,24970
	ctx.r4.s64 = 1636433920;
	// ori r4,r4,3
	ctx.r4.u64 = ctx.r4.u64 | 3;
	// rlwinm r3,r11,3,0,28
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// bl 0x82691410
	ctx.lr = 0x82C387F8;
	sub_82691410(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// beq 0x82c38728
	if (ctx.cr0.eq) goto loc_82C38728;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82c3873c
	if (!ctx.cr6.gt) goto loc_82C3873C;
	// addi r7,r31,384
	ctx.r7.s64 = ctx.r31.s64 + 384;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_82C3881C:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r6,4(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r9,8(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mullw r9,r9,r8
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r8.s32);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stwx r10,r6,r11
	PPC_STORE_U32(ctx.r6.u32 + ctx.r11.u32, ctx.r10.u32);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r29,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r29.u32);
	// lwz r9,4(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82c38858
	if (ctx.cr6.eq) goto loc_82C38858;
	// stw r10,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r10.u32);
	// b 0x82c3885c
	goto loc_82C3885C;
loc_82C38858:
	// stw r10,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r10.u32);
loc_82C3885C:
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// stw r10,4(r7)
	PPC_STORE_U32(ctx.r7.u32 + 4, ctx.r10.u32);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// cmplw cr6,r8,r10
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82c3881c
	if (ctx.cr6.lt) goto loc_82C3881C;
	// b 0x82c3873c
	goto loc_82C3873C;
}

__attribute__((alias("__imp__sub_82C38878"))) PPC_WEAK_FUNC(sub_82C38878);
PPC_FUNC_IMPL(__imp__sub_82C38878) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31974
	ctx.r11.s64 = -2095448064;
	// addi r3,r11,11860
	ctx.r3.s64 = ctx.r11.s64 + 11860;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C38884"))) PPC_WEAK_FUNC(sub_82C38884);
PPC_FUNC_IMPL(__imp__sub_82C38884) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C38888"))) PPC_WEAK_FUNC(sub_82C38888);
PPC_FUNC_IMPL(__imp__sub_82C38888) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C38898"))) PPC_WEAK_FUNC(sub_82C38898);
PPC_FUNC_IMPL(__imp__sub_82C38898) {
	PPC_FUNC_PROLOGUE();
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

__attribute__((alias("__imp__sub_82C388A8"))) PPC_WEAK_FUNC(sub_82C388A8);
PPC_FUNC_IMPL(__imp__sub_82C388A8) {
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
	// lis r11,-31974
	ctx.r11.s64 = -2095448064;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r4,r11,12448
	ctx.r4.s64 = ctx.r11.s64 + 12448;
	// bl 0x82aba248
	ctx.lr = 0x82C388CC;
	sub_82ABA248(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r11,r11,-5024
	ctx.r11.s64 = ctx.r11.s64 + -5024;
	// stw r30,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r30.u32);
	// addi r3,r31,36
	ctx.r3.s64 = ctx.r31.s64 + 36;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// li r5,2064
	ctx.r5.s64 = 2064;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82a75988
	ctx.lr = 0x82C388F0;
	sub_82A75988(ctx, base);
	// addi r3,r31,2100
	ctx.r3.s64 = ctx.r31.s64 + 2100;
	// li r5,16
	ctx.r5.s64 = 16;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82a75988
	ctx.lr = 0x82C38900;
	sub_82A75988(ctx, base);
	// lis r11,-32233
	ctx.r11.s64 = -2112421888;
	// stw r30,2120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2120, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r30,2124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2124, ctx.r30.u32);
	// stw r30,2128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2128, ctx.r30.u32);
	// lfs f0,24436(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24436);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,2116(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 2116, temp.u32);
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

__attribute__((alias("__imp__sub_82C38934"))) PPC_WEAK_FUNC(sub_82C38934);
PPC_FUNC_IMPL(__imp__sub_82C38934) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C38938"))) PPC_WEAK_FUNC(sub_82C38938);
PPC_FUNC_IMPL(__imp__sub_82C38938) {
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
	// addi r11,r3,28
	ctx.r11.s64 = ctx.r3.s64 + 28;
loc_82C3894C:
	// mfmsr r9
	ctx.r9.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r11
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r11.u32);
	ctx.r10.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stwcx. r10,0,r11
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r11.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r10.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x82c3894c
	if (!ctx.cr0.eq) goto loc_82C3894C;
	// mr r31,r10
	ctx.r31.u64 = ctx.r10.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82c38990
	if (!ctx.cr6.eq) goto loc_82C38990;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82c38990
	if (ctx.cr6.eq) goto loc_82C38990;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,56(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82C38990;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82C38990:
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

__attribute__((alias("__imp__sub_82C389A8"))) PPC_WEAK_FUNC(sub_82C389A8);
PPC_FUNC_IMPL(__imp__sub_82C389A8) {
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
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// bl 0x82ab9f08
	ctx.lr = 0x82C389C8;
	sub_82AB9F08(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82c38a40
	if (ctx.cr0.lt) goto loc_82C38A40;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r11,-30569
	ctx.r11.s64 = -2003369984;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// lhz r9,2(r10)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r10.u32 + 2);
	// cmplwi cr6,r9,4
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 4, ctx.xer);
	// bne cr6,0x82c389f8
	if (!ctx.cr6.eq) goto loc_82C389F8;
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lhz r9,2(r9)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r9.u32 + 2);
	// cmplwi cr6,r9,4
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 4, ctx.xer);
	// beq cr6,0x82c389fc
	if (ctx.cr6.eq) goto loc_82C389FC;
loc_82C389F8:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
loc_82C389FC:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82c38a40
	if (ctx.cr6.lt) goto loc_82C38A40;
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r8,4(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// beq cr6,0x82c38a18
	if (ctx.cr6.eq) goto loc_82C38A18;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
loc_82C38A18:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82c38a40
	if (ctx.cr6.lt) goto loc_82C38A40;
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplwi cr6,r10,16125
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 16125, ctx.xer);
	// bne cr6,0x82c38a3c
	if (!ctx.cr6.eq) goto loc_82C38A3C;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplwi cr6,r10,16125
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 16125, ctx.xer);
	// beq cr6,0x82c38a40
	if (ctx.cr6.eq) goto loc_82C38A40;
loc_82C38A3C:
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
loc_82C38A40:
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

__attribute__((alias("__imp__sub_82C38A58"))) PPC_WEAK_FUNC(sub_82C38A58);
PPC_FUNC_IMPL(__imp__sub_82C38A58) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7650
	ctx.lr = 0x82C38A60;
	__savegprlr_18(ctx, base);
	// addi r12,r1,-120
	ctx.r12.s64 = ctx.r1.s64 + -120;
	// bl 0x82fa8d24
	ctx.lr = 0x82C38A68;
	__savefpr_27(ctx, base);
	// li r12,-176
	ctx.r12.s64 = -176;
	// stvx128 v127,r1,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r1.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v127.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lis r10,-32227
	ctx.r10.s64 = -2112028672;
	// li r22,0
	ctx.r22.s64 = 0;
	// addi r10,r10,15312
	ctx.r10.s64 = ctx.r10.s64 + 15312;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r23,r5
	ctx.r23.u64 = ctx.r5.u64;
	// lwz r9,1220(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1220);
	// mr r20,r7
	ctx.r20.u64 = ctx.r7.u64;
	// li r19,1
	ctx.r19.s64 = 1;
	// lvx128 v127,r0,r10
	simd::store_shuffled(ctx.v127, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// mr r21,r22
	ctx.r21.u64 = ctx.r22.u64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82c38ab8
	if (ctx.cr6.eq) goto loc_82C38AB8;
	// lwz r10,1216(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1216);
	// mr r24,r19
	ctx.r24.u64 = ctx.r19.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82c38abc
	if (!ctx.cr6.eq) goto loc_82C38ABC;
loc_82C38AB8:
	// mr r24,r22
	ctx.r24.u64 = ctx.r22.u64;
loc_82C38ABC:
	// lwz r10,72(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mr r18,r22
	ctx.r18.u64 = ctx.r22.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82c39094
	if (ctx.cr6.eq) goto loc_82C39094;
	// stw r19,76(r11)
	PPC_STORE_U32(ctx.r11.u32 + 76, ctx.r19.u32);
	// lwz r11,4(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 4);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82c38fb4
	if (!ctx.cr6.eq) goto loc_82C38FB4;
	// lis r11,-32247
	ctx.r11.s64 = -2113339392;
	// lwz r26,0(r23)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// mr r27,r22
	ctx.r27.u64 = ctx.r22.u64;
	// addi r31,r28,2100
	ctx.r31.s64 = ctx.r28.s64 + 2100;
	// addi r29,r28,40
	ctx.r29.s64 = ctx.r28.s64 + 40;
	// subfic r25,r28,-2016
	ctx.xer.ca = ctx.r28.u32 <= 4294965280;
	ctx.r25.s64 = -2016 - ctx.r28.s64;
	// lfs f31,14240(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 14240);
	ctx.f31.f64 = double(temp.f32);
loc_82C38AF8:
	// lwz r11,32(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 32);
	// add r10,r25,r31
	ctx.r10.u64 = ctx.r25.u64 + ctx.r31.u64;
	// lwzx r30,r10,r11
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82c38bf0
	if (ctx.cr6.eq) goto loc_82C38BF0;
	// lwz r11,212(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 212);
	// rlwinm. r11,r11,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82c38bf0
	if (ctx.cr0.eq) goto loc_82C38BF0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c35b58
	ctx.lr = 0x82C38B20;
	sub_82C35B58(ctx, base);
	// lis r11,28672
	ctx.r11.s64 = 1879048192;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82c38bf0
	if (ctx.cr6.eq) goto loc_82C38BF0;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lfs f0,196(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 196);
	ctx.f0.f64 = double(temp.f32);
	// lwz r9,8(r23)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r23.u32 + 8);
	// mr r10,r22
	ctx.r10.u64 = ctx.r22.u64;
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + ctx.r27.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// mulli r11,r11,172
	ctx.r11.s64 = ctx.r11.s64 * 172;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// addi r11,r11,36
	ctx.r11.s64 = ctx.r11.s64 + 36;
	// ble cr6,0x82c38ba8
	if (!ctx.cr6.gt) goto loc_82C38BA8;
	// mr r9,r26
	ctx.r9.u64 = ctx.r26.u64;
loc_82C38B58:
	// lfs f13,0(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fmuls f13,f13,f31
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f31.f64));
	// fctiwz f13,f13
	ctx.f13.s64 = (ctx.f13.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f13.f64));
	// stfd f13,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f13.u64);
	// lwz r8,84(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r8,32767
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 32767, ctx.xer);
	// blt cr6,0x82c38b80
	if (ctx.cr6.lt) goto loc_82C38B80;
	// li r8,32767
	ctx.r8.s64 = 32767;
	// b 0x82c38b8c
	goto loc_82C38B8C;
loc_82C38B80:
	// cmpwi cr6,r8,-32768
	ctx.cr6.compare<int32_t>(ctx.r8.s32, -32768, ctx.xer);
	// bgt cr6,0x82c38b8c
	if (ctx.cr6.gt) goto loc_82C38B8C;
	// li r8,-32738
	ctx.r8.s64 = -32738;
loc_82C38B8C:
	// sth r8,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r8.u16);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// addi r9,r9,16
	ctx.r9.s64 = ctx.r9.s64 + 16;
	// lwz r8,8(r23)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r23.u32 + 8);
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x82c38b58
	if (ctx.cr6.lt) goto loc_82C38B58;
loc_82C38BA8:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// blt cr6,0x82c38bf4
	if (ctx.cr6.lt) goto loc_82C38BF4;
	// li r11,128
	ctx.r11.s64 = 128;
	// stw r22,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r22.u32);
	// addi r4,r29,-4
	ctx.r4.s64 = ctx.r29.s64 + -4;
	// addi r9,r29,-4
	ctx.r9.s64 = ctx.r29.s64 + -4;
	// addi r10,r29,-4
	ctx.r10.s64 = ctx.r29.s64 + -4;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_82C38BD4:
	// lhzu r11,4(r10)
	ea = 4 + ctx.r10.u32;
	ctx.r11.u64 = PPC_LOAD_U16(ea);
	ctx.r10.u32 = ea;
	// sthu r11,2(r9)
	ea = 2 + ctx.r9.u32;
	PPC_STORE_U16(ea, ctx.r11.u16);
	ctx.r9.u32 = ea;
	// bdnz 0x82c38bd4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82C38BD4;
	// li r5,258
	ctx.r5.s64 = 258;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82c35fb8
	ctx.lr = 0x82C38BEC;
	sub_82C35FB8(ctx, base);
	// b 0x82c38bf4
	goto loc_82C38BF4;
loc_82C38BF0:
	// stw r22,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r22.u32);
loc_82C38BF4:
	// addi r27,r27,3
	ctx.r27.s64 = ctx.r27.s64 + 3;
	// addi r26,r26,4
	ctx.r26.s64 = ctx.r26.s64 + 4;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// addi r29,r29,516
	ctx.r29.s64 = ctx.r29.s64 + 516;
	// cmplwi cr6,r27,12
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 12, ctx.xer);
	// blt cr6,0x82c38af8
	if (ctx.cr6.lt) goto loc_82C38AF8;
	// li r11,4
	ctx.r11.s64 = 4;
	// lwz r9,32(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 32);
	// addi r7,r1,128
	ctx.r7.s64 = ctx.r1.s64 + 128;
	// addi r8,r1,128
	ctx.r8.s64 = ctx.r1.s64 + 128;
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// subfic r8,r8,84
	ctx.xer.ca = ctx.r8.u32 <= 84;
	ctx.r8.s64 = 84 - ctx.r8.s64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// stvx128 v127,r0,r7
	_mm_store_si128((__m128i*)(base + ((ctx.r7.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v127.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lfs f27,5184(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5184);
	ctx.f27.f64 = double(temp.f32);
loc_82C38C34:
	// add r11,r9,r8
	ctx.r11.u64 = ctx.r9.u64 + ctx.r8.u64;
	// lwzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82c38c58
	if (ctx.cr6.eq) goto loc_82C38C58;
	// lfs f0,208(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 208);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f27
	ctx.cr6.compare(ctx.f0.f64, ctx.f27.f64);
	// ble cr6,0x82c38c54
	if (!ctx.cr6.gt) goto loc_82C38C54;
	// mr r18,r19
	ctx.r18.u64 = ctx.r19.u64;
loc_82C38C54:
	// stfs f0,0(r10)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r10.u32 + 0, temp.u32);
loc_82C38C58:
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x82c38c34
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82C38C34;
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// li r9,1376
	ctx.r9.s64 = 1376;
	// beq cr6,0x82c38f64
	if (ctx.cr6.eq) goto loc_82C38F64;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// vor128 v13,v127,v127
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_load_si128((__m128i*)ctx.v127.u8));
	// lwz r11,0(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// stvx128 v13,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// dcbt r9,r11
	// lwz r10,8(r23)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r23.u32 + 8);
	// mr r9,r22
	ctx.r9.u64 = ctx.r22.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82c38cb0
	if (ctx.cr6.eq) goto loc_82C38CB0;
loc_82C38C90:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// lvx128 v0,r0,r11
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// vmaddfp v13,v0,v0,v13
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v13.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v0.f32)), _mm_load_ps(ctx.v13.f32)));
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82c38c90
	if (ctx.cr6.lt) goto loc_82C38C90;
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// stvx128 v13,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
loc_82C38CB0:
	// clrldi r11,r10,32
	ctx.r11.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// lis r10,-32233
	ctx.r10.s64 = -2112421888;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// lfs f29,24436(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 24436);
	ctx.f29.f64 = double(temp.f32);
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// fdivs f0,f29,f0
	ctx.f0.f64 = double(float(ctx.f29.f64 / ctx.f0.f64));
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f0,84(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stfs f0,92(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// lvx128 v63,r0,r11
	simd::store_shuffled(ctx.v63, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// vmulfp128 v63,v13,v63
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v63.f32, _mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v63.f32)));
	// stvx128 v63,r0,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// bl 0x8317a254
	ctx.lr = 0x82C38CF8;
	__imp__XAudioGetDuckerThreshold(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lfs f0,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f1
	ctx.cr6.compare(ctx.f0.f64, ctx.f1.f64);
	// lfs f28,-4956(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -4956);
	ctx.f28.f64 = double(temp.f32);
	// bge cr6,0x82c38d3c
	if (!ctx.cr6.lt) goto loc_82C38D3C;
	// bl 0x8317a254
	ctx.lr = 0x82C38D10;
	__imp__XAudioGetDuckerThreshold(ctx, base);
	// lfs f0,100(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f1
	ctx.cr6.compare(ctx.f0.f64, ctx.f1.f64);
	// bge cr6,0x82c38d3c
	if (!ctx.cr6.lt) goto loc_82C38D3C;
	// bl 0x8317a254
	ctx.lr = 0x82C38D20;
	__imp__XAudioGetDuckerThreshold(ctx, base);
	// lfs f0,104(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f1
	ctx.cr6.compare(ctx.f0.f64, ctx.f1.f64);
	// bge cr6,0x82c38d3c
	if (!ctx.cr6.lt) goto loc_82C38D3C;
	// bl 0x8317a254
	ctx.lr = 0x82C38D30;
	__imp__XAudioGetDuckerThreshold(ctx, base);
	// lfs f0,108(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f1
	ctx.cr6.compare(ctx.f0.f64, ctx.f1.f64);
	// blt cr6,0x82c38d6c
	if (ctx.cr6.lt) goto loc_82C38D6C;
loc_82C38D3C:
	// bl 0x8317a244
	ctx.lr = 0x82C38D40;
	__imp__XAudioGetDuckerHoldTime(ctx, base);
	// lwz r11,8(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 8);
	// fmuls f0,f1,f28
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f28.f64));
	// li r10,2120
	ctx.r10.s64 = 2120;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// fdivs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// fctidz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f0.f64));
	// stfiwx f0,r28,r10
	PPC_STORE_U32(ctx.r28.u32 + ctx.r10.u32, ctx.f0.u32);
	// b 0x82c38d80
	goto loc_82C38D80;
loc_82C38D6C:
	// lwz r11,2120(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 2120);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82c38d84
	if (!ctx.cr6.gt) goto loc_82C38D84;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,2120(r28)
	PPC_STORE_U32(ctx.r28.u32 + 2120, ctx.r11.u32);
loc_82C38D80:
	// mr r21,r19
	ctx.r21.u64 = ctx.r19.u64;
loc_82C38D84:
	// lwz r11,2128(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 2128);
	// cmpw cr6,r21,r11
	ctx.cr6.compare<int32_t>(ctx.r21.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x82c38dd0
	if (ctx.cr6.eq) goto loc_82C38DD0;
	// lwz r11,2124(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 2124);
	// cmpwi cr6,r21,0
	ctx.cr6.compare<int32_t>(ctx.r21.s32, 0, ctx.xer);
	// stw r21,2128(r28)
	PPC_STORE_U32(ctx.r28.u32 + 2128, ctx.r21.u32);
	// beq cr6,0x82c38db8
	if (ctx.cr6.eq) goto loc_82C38DB8;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x82c38db0
	if (ctx.cr6.eq) goto loc_82C38DB0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82c38dd0
	if (!ctx.cr6.eq) goto loc_82C38DD0;
loc_82C38DB0:
	// stw r19,2124(r28)
	PPC_STORE_U32(ctx.r28.u32 + 2124, ctx.r19.u32);
	// b 0x82c38dd0
	goto loc_82C38DD0;
loc_82C38DB8:
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82c38dc8
	if (ctx.cr6.eq) goto loc_82C38DC8;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x82c38dd0
	if (!ctx.cr6.eq) goto loc_82C38DD0;
loc_82C38DC8:
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r11,2124(r28)
	PPC_STORE_U32(ctx.r28.u32 + 2124, ctx.r11.u32);
loc_82C38DD0:
	// lwz r11,2124(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 2124);
	// fmr f31,f29
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = ctx.f29.f64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82c38de8
	if (!ctx.cr6.eq) goto loc_82C38DE8;
	// fmr f30,f29
	ctx.f30.f64 = ctx.f29.f64;
	// b 0x82c38e1c
	goto loc_82C38E1C;
loc_82C38DE8:
	// bl 0x8317a204
	ctx.lr = 0x82C38DEC;
	__imp__XAudioGetDuckerLevel(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lfs f0,-4960(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -4960);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bge cr6,0x82c38e08
	if (!ctx.cr6.lt) goto loc_82C38E08;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lfs f31,-4964(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -4964);
	ctx.f31.f64 = double(temp.f32);
	// b 0x82c38e0c
	goto loc_82C38E0C;
loc_82C38E08:
	// fdivs f31,f29,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = double(float(ctx.f29.f64 / ctx.f1.f64));
loc_82C38E0C:
	// lwz r11,2124(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 2124);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x82c38e28
	if (!ctx.cr6.eq) goto loc_82C38E28;
	// fmr f30,f31
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f31.f64;
loc_82C38E1C:
	// mr r31,r22
	ctx.r31.u64 = ctx.r22.u64;
	// fmr f0,f27
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = ctx.f27.f64;
	// b 0x82c38e54
	goto loc_82C38E54;
loc_82C38E28:
	// lfs f30,2116(r28)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 2116);
	ctx.f30.f64 = double(temp.f32);
	// mr r31,r19
	ctx.r31.u64 = ctx.r19.u64;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82c38e44
	if (!ctx.cr6.eq) goto loc_82C38E44;
	// bl 0x8317a234
	ctx.lr = 0x82C38E3C;
	__imp__XAudioGetDuckerAttackTime(ctx, base);
	// fsubs f13,f31,f29
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f31.f64 - ctx.f29.f64));
	// b 0x82c38e4c
	goto loc_82C38E4C;
loc_82C38E44:
	// bl 0x8317a224
	ctx.lr = 0x82C38E48;
	__imp__XAudioGetDuckerReleaseTime(ctx, base);
	// fsubs f13,f29,f31
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f29.f64 - ctx.f31.f64));
loc_82C38E4C:
	// fmuls f0,f1,f28
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f28.f64));
	// fdivs f0,f13,f0
	ctx.f0.f64 = double(float(ctx.f13.f64 / ctx.f0.f64));
loc_82C38E54:
	// addi r9,r1,128
	ctx.r9.s64 = ctx.r1.s64 + 128;
	// stfs f30,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// stfs f30,84(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f30,88(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// stfs f30,92(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// lwz r10,0(r23)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// lwz r11,0(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 0);
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// lvx128 v62,r0,r9
	simd::store_shuffled(ctx.v62, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// li r9,1376
	ctx.r9.s64 = 1376;
	// lvx128 v63,r0,r8
	simd::store_shuffled(ctx.v63, simd::load_and_shuffle(base + ((ctx.r8.u32) & ~0xF), VectorMaskL));
	// vmulfp128 v63,v63,v62
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v63.f32, _mm_mul_ps(_mm_load_ps(ctx.v63.f32), _mm_load_ps(ctx.v62.f32)));
	// stfs f0,116(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 116, temp.u32);
	// stfs f0,120(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 120, temp.u32);
	// stfs f0,124(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// stvx128 v63,r0,r7
	_mm_store_si128((__m128i*)(base + ((ctx.r7.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// dcbt r9,r10
	// dcbt r9,r11
	// mr r9,r22
	ctx.r9.u64 = ctx.r22.u64;
	// lwz r8,8(r23)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r23.u32 + 8);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// ble cr6,0x82c38f58
	if (!ctx.cr6.gt) goto loc_82C38F58;
	// subf r8,r11,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r11.s64;
	// lis r10,-32227
	ctx.r10.s64 = -2112028672;
	// addi r10,r10,15600
	ctx.r10.s64 = ctx.r10.s64 + 15600;
loc_82C38EC0:
	// lvx128 v61,r8,r11
	simd::store_shuffled(ctx.v61, simd::load_and_shuffle(base + ((ctx.r8.u32 + ctx.r11.u32) & ~0xF), VectorMaskL));
	// clrlwi. r7,r31,24
	ctx.r7.u64 = ctx.r31.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// vmulfp128 v61,v61,v63
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v61.f32, _mm_mul_ps(_mm_load_ps(ctx.v61.f32), _mm_load_ps(ctx.v63.f32)));
	// stvx128 v61,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v61.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// beq 0x82c38f44
	if (ctx.cr0.eq) goto loc_82C38F44;
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lvx128 v61,r0,r7
	simd::store_shuffled(ctx.v61, simd::load_and_shuffle(base + ((ctx.r7.u32) & ~0xF), VectorMaskL));
	// vaddfp128 v63,v63,v61
	_mm_store_ps(ctx.v63.f32, _mm_add_ps(_mm_load_ps(ctx.v63.f32), _mm_load_ps(ctx.v61.f32)));
	// stvx128 v63,r0,r6
	_mm_store_si128((__m128i*)(base + ((ctx.r6.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// ble cr6,0x82c38f10
	if (!ctx.cr6.gt) goto loc_82C38F10;
	// li r7,2
	ctx.r7.s64 = 2;
	// stfs f31,80(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
	// stfs f31,84(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// stfs f31,88(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// stw r7,2124(r28)
	PPC_STORE_U32(ctx.r28.u32 + 2124, ctx.r7.u32);
	// stfs f31,92(r1)
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// b 0x82c38f2c
	goto loc_82C38F2C;
loc_82C38F10:
	// lfs f0,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f29
	ctx.cr6.compare(ctx.f0.f64, ctx.f29.f64);
	// bge cr6,0x82c38f30
	if (!ctx.cr6.lt) goto loc_82C38F30;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// lvx128 v63,r0,r10
	simd::store_shuffled(ctx.v63, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// stw r22,2124(r28)
	PPC_STORE_U32(ctx.r28.u32 + 2124, ctx.r22.u32);
	// stvx128 v63,r0,r7
	_mm_store_si128((__m128i*)(base + ((ctx.r7.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
loc_82C38F2C:
	// mr r31,r22
	ctx.r31.u64 = ctx.r22.u64;
loc_82C38F30:
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// lvx128 v63,r0,r7
	simd::store_shuffled(ctx.v63, simd::load_and_shuffle(base + ((ctx.r7.u32) & ~0xF), VectorMaskL));
	// vmulfp128 v63,v63,v62
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v63.f32, _mm_mul_ps(_mm_load_ps(ctx.v63.f32), _mm_load_ps(ctx.v62.f32)));
	// stvx128 v63,r0,r6
	_mm_store_si128((__m128i*)(base + ((ctx.r6.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
loc_82C38F44:
	// lwz r7,8(r23)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r23.u32 + 8);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// cmplw cr6,r9,r7
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r7.u32, ctx.xer);
	// blt cr6,0x82c38ec0
	if (ctx.cr6.lt) goto loc_82C38EC0;
loc_82C38F58:
	// lfs f0,80(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,2116(r28)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r28.u32 + 2116, temp.u32);
	// b 0x82c3908c
	goto loc_82C3908C;
loc_82C38F64:
	// lwz r10,0(r23)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// lwz r11,0(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 0);
	// dcbt r9,r10
	// li r9,1376
	ctx.r9.s64 = 1376;
	// dcbt r9,r11
	// mr r9,r22
	ctx.r9.u64 = ctx.r22.u64;
	// lwz r8,8(r23)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r23.u32 + 8);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82c3908c
	if (ctx.cr6.eq) goto loc_82C3908C;
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
loc_82C38F8C:
	// addi r7,r1,128
	ctx.r7.s64 = ctx.r1.s64 + 128;
	// lvx128 v63,r11,r10
	simd::store_shuffled(ctx.v63, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r10.u32) & ~0xF), VectorMaskL));
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// lvx128 v62,r0,r7
	simd::store_shuffled(ctx.v62, simd::load_and_shuffle(base + ((ctx.r7.u32) & ~0xF), VectorMaskL));
	// vmulfp128 v63,v63,v62
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v63.f32, _mm_mul_ps(_mm_load_ps(ctx.v63.f32), _mm_load_ps(ctx.v62.f32)));
	// stvx128 v63,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// blt cr6,0x82c38f8c
	if (ctx.cr6.lt) goto loc_82C38F8C;
	// b 0x82c3908c
	goto loc_82C3908C;
loc_82C38FB4:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82c3908c
	if (!ctx.cr6.eq) goto loc_82C3908C;
	// mr r30,r22
	ctx.r30.u64 = ctx.r22.u64;
	// addi r31,r28,2100
	ctx.r31.s64 = ctx.r28.s64 + 2100;
	// addi r27,r28,36
	ctx.r27.s64 = ctx.r28.s64 + 36;
	// subfic r26,r28,-2016
	ctx.xer.ca = ctx.r28.u32 <= 4294965280;
	ctx.r26.s64 = -2016 - ctx.r28.s64;
loc_82C38FCC:
	// lwz r11,32(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 32);
	// add r10,r31,r26
	ctx.r10.u64 = ctx.r31.u64 + ctx.r26.u64;
	// lwzx r29,r10,r11
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82c3905c
	if (ctx.cr6.eq) goto loc_82C3905C;
	// lwz r11,212(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 212);
	// rlwinm. r11,r11,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82c3905c
	if (ctx.cr0.eq) goto loc_82C3905C;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82c35b58
	ctx.lr = 0x82C38FF4;
	sub_82C35B58(ctx, base);
	// lis r11,28672
	ctx.r11.s64 = 1879048192;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82c3905c
	if (ctx.cr6.eq) goto loc_82C3905C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r5,172
	ctx.r5.s64 = 172;
	// li r4,0
	ctx.r4.s64 = 0;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// mulli r11,r11,172
	ctx.r11.s64 = ctx.r11.s64 * 172;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// addi r3,r11,36
	ctx.r3.s64 = ctx.r11.s64 + 36;
	// bl 0x82a75988
	ctx.lr = 0x82C39020;
	sub_82A75988(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// blt cr6,0x82c39060
	if (ctx.cr6.lt) goto loc_82C39060;
	// stw r22,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r22.u32);
	// li r5,256
	ctx.r5.s64 = 256;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r27,2
	ctx.r3.s64 = ctx.r27.s64 + 2;
	// bl 0x82a75988
	ctx.lr = 0x82C39048;
	sub_82A75988(ctx, base);
	// li r5,258
	ctx.r5.s64 = 258;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82c35fb8
	ctx.lr = 0x82C39058;
	sub_82C35FB8(ctx, base);
	// b 0x82c39060
	goto loc_82C39060;
loc_82C3905C:
	// stw r22,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r22.u32);
loc_82C39060:
	// addi r30,r30,3
	ctx.r30.s64 = ctx.r30.s64 + 3;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// addi r27,r27,516
	ctx.r27.s64 = ctx.r27.s64 + 516;
	// cmplwi cr6,r30,12
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 12, ctx.xer);
	// blt cr6,0x82c38fcc
	if (ctx.cr6.lt) goto loc_82C38FCC;
	// lwz r11,2120(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 2120);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82c3908c
	if (!ctx.cr6.gt) goto loc_82C3908C;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// mr r21,r19
	ctx.r21.u64 = ctx.r19.u64;
	// stw r11,2120(r28)
	PPC_STORE_U32(ctx.r28.u32 + 2120, ctx.r11.u32);
loc_82C3908C:
	// lwz r11,32(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 32);
	// stw r22,76(r11)
	PPC_STORE_U32(ctx.r11.u32 + 76, ctx.r22.u32);
loc_82C39094:
	// lwz r11,32(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 32);
	// lwz r11,1220(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1220);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82c390c0
	if (ctx.cr6.eq) goto loc_82C390C0;
	// cmpwi cr6,r21,0
	ctx.cr6.compare<int32_t>(ctx.r21.s32, 0, ctx.xer);
	// beq cr6,0x82c390b8
	if (ctx.cr6.eq) goto loc_82C390B8;
	// clrlwi. r11,r18,24
	ctx.r11.u64 = ctx.r18.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// bne 0x82c390bc
	if (!ctx.cr0.eq) goto loc_82C390BC;
loc_82C390B8:
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
loc_82C390BC:
	// bl 0x8317a214
	ctx.lr = 0x82C390C0;
	__imp__XAudioEnableDucker(ctx, base);
loc_82C390C0:
	// lwz r11,8(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 8);
	// stw r11,8(r20)
	PPC_STORE_U32(ctx.r20.u32 + 8, ctx.r11.u32);
	// lwz r11,4(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 4);
	// stw r11,4(r20)
	PPC_STORE_U32(ctx.r20.u32 + 4, ctx.r11.u32);
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// li r0,-176
	ctx.r0.s64 = -176;
	// lvx128 v127,r1,r0
	simd::store_shuffled(ctx.v127, simd::load_and_shuffle(base + ((ctx.r1.u32 + ctx.r0.u32) & ~0xF), VectorMaskL));
	// addi r12,r1,-120
	ctx.r12.s64 = ctx.r1.s64 + -120;
	// bl 0x82fa8d70
	ctx.lr = 0x82C390E4;
	__restfpr_27(ctx, base);
	// b 0x82fa76a0
	__restgprlr_18(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C390E8"))) PPC_WEAK_FUNC(sub_82C390E8);
PPC_FUNC_IMPL(__imp__sub_82C390E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x82C390F0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
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
	// bne cr6,0x82c39114
	if (!ctx.cr6.eq) goto loc_82C39114;
	// lis r29,-32768
	ctx.r29.s64 = -2147483648;
	// ori r29,r29,16387
	ctx.r29.u64 = ctx.r29.u64 | 16387;
	// b 0x82c39154
	goto loc_82C39154;
loc_82C39114:
	// lis r4,24714
	ctx.r4.s64 = 1619656704;
	// li r3,2132
	ctx.r3.s64 = 2132;
	// ori r4,r4,8194
	ctx.r4.u64 = ctx.r4.u64 | 8194;
	// bl 0x82691410
	ctx.lr = 0x82C39124;
	sub_82691410(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82c39134
	if (ctx.cr0.eq) goto loc_82C39134;
	// bl 0x82c388a8
	ctx.lr = 0x82C39130;
	sub_82C388A8(ctx, base);
	// b 0x82c39138
	goto loc_82C39138;
loc_82C39134:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82C39138:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82c3914c
	if (ctx.cr6.eq) goto loc_82C3914C;
	// stw r30,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r30.u32);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// b 0x82c39154
	goto loc_82C39154;
loc_82C3914C:
	// lis r29,-32761
	ctx.r29.s64 = -2147024896;
	// ori r29,r29,14
	ctx.r29.u64 = ctx.r29.u64 | 14;
loc_82C39154:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C39160"))) PPC_WEAK_FUNC(sub_82C39160);
PPC_FUNC_IMPL(__imp__sub_82C39160) {
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
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,-5024
	ctx.r11.s64 = ctx.r11.s64 + -5024;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x82ab89f8
	ctx.lr = 0x82C3918C;
	sub_82AB89F8(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82c391a4
	if (ctx.cr0.eq) goto loc_82C391A4;
	// lis r4,24714
	ctx.r4.s64 = 1619656704;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r4,r4,8194
	ctx.r4.u64 = ctx.r4.u64 | 8194;
	// bl 0x82691460
	ctx.lr = 0x82C391A4;
	sub_82691460(ctx, base);
loc_82C391A4:
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

__attribute__((alias("__imp__sub_82C391C0"))) PPC_WEAK_FUNC(sub_82C391C0);
PPC_FUNC_IMPL(__imp__sub_82C391C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa765c
	ctx.lr = 0x82C391C8;
	__savegprlr_21(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r11,2
	ctx.r11.s64 = 2;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r24,r3,8
	ctx.r24.s64 = ctx.r3.s64 + 8;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r23,r4
	ctx.r23.u64 = ctx.r4.u64;
	// lwz r27,8(r10)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// mr r22,r8
	ctx.r22.u64 = ctx.r8.u64;
	// li r21,1
	ctx.r21.s64 = 1;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// mr r9,r24
	ctx.r9.u64 = ctx.r24.u64;
loc_82C391FC:
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82c39238
	if (ctx.cr6.eq) goto loc_82C39238;
	// lwz r7,8(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// cmpwi cr6,r7,1
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 1, ctx.xer);
	// bne cr6,0x82c39220
	if (!ctx.cr6.eq) goto loc_82C39220;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// b 0x82c39224
	goto loc_82C39224;
loc_82C39220:
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
loc_82C39224:
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82c3923c
	if (ctx.cr6.eq) goto loc_82C3923C;
	// addi r22,r22,1
	ctx.r22.s64 = ctx.r22.s64 + 1;
	// b 0x82c3923c
	goto loc_82C3923C;
loc_82C39238:
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
loc_82C3923C:
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x82c391fc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82C391FC;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x82c393b0
	if (ctx.cr6.eq) goto loc_82C393B0;
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 0, ctx.xer);
	// beq cr6,0x82c393b0
	if (ctx.cr6.eq) goto loc_82C393B0;
	// mr r21,r8
	ctx.r21.u64 = ctx.r8.u64;
	// b 0x82c393a8
	goto loc_82C393A8;
loc_82C39260:
	// addi r23,r23,-1
	ctx.r23.s64 = ctx.r23.s64 + -1;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x82c393b0
	if (ctx.cr6.eq) goto loc_82C393B0;
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 0, ctx.xer);
	// beq cr6,0x82c393b0
	if (ctx.cr6.eq) goto loc_82C393B0;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r9,0(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// lwz r8,12(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// subf r30,r11,r8
	ctx.r30.s64 = ctx.r8.s64 - ctx.r11.s64;
loc_82C39290:
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82c392c4
	if (ctx.cr6.eq) goto loc_82C392C4;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r8,12(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// lwz r9,4(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// subf r9,r9,r8
	ctx.r9.s64 = ctx.r8.s64 - ctx.r9.s64;
	// cmplw cr6,r30,r9
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82c392c4
	if (ctx.cr6.lt) goto loc_82C392C4;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// subf r30,r11,r9
	ctx.r30.s64 = ctx.r9.s64 - ctx.r11.s64;
loc_82C392C4:
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x82c39290
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82C39290;
	// addi r29,r1,80
	ctx.r29.s64 = ctx.r1.s64 + 80;
	// mr r28,r24
	ctx.r28.u64 = ctx.r24.u64;
	// li r26,2
	ctx.r26.s64 = 2;
loc_82C392D8:
	// lwz r31,0(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82c39358
	if (ctx.cr6.eq) goto loc_82C39358;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r8,8(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,4(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r3,r8,r9
	ctx.r3.u64 = ctx.r8.u64 + ctx.r9.u64;
	// bl 0x82fa77c0
	ctx.lr = 0x82C3930C;
	sub_82FA77C0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// add r9,r9,r30
	ctx.r9.u64 = ctx.r9.u64 + ctx.r30.u64;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82c39328
	if (!ctx.cr6.lt) goto loc_82C39328;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
loc_82C39328:
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82c39358
	if (!ctx.cr6.eq) goto loc_82C39358;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// bl 0x82c377e0
	ctx.lr = 0x82C39348;
	sub_82C377E0(ctx, base);
	// stw r3,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82c39358
	if (!ctx.cr0.eq) goto loc_82C39358;
	// addi r22,r22,-1
	ctx.r22.s64 = ctx.r22.s64 + -1;
loc_82C39358:
	// addic. r26,r26,-1
	ctx.xer.ca = ctx.r26.u32 > 0;
	ctx.r26.s64 = ctx.r26.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// bne 0x82c392d8
	if (!ctx.cr0.eq) goto loc_82C392D8;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// add r9,r9,r30
	ctx.r9.u64 = ctx.r9.u64 + ctx.r30.u64;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82c39384
	if (!ctx.cr6.lt) goto loc_82C39384;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
loc_82C39384:
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82c393a8
	if (!ctx.cr6.eq) goto loc_82C393A8;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r3,4(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// bl 0x82c377e0
	ctx.lr = 0x82C393A4;
	sub_82C377E0(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
loc_82C393A8:
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// bne cr6,0x82c39260
	if (!ctx.cr6.eq) goto loc_82C39260;
loc_82C393B0:
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82fa76ac
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C393BC"))) PPC_WEAK_FUNC(sub_82C393BC);
PPC_FUNC_IMPL(__imp__sub_82C393BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C393C0"))) PPC_WEAK_FUNC(sub_82C393C0);
PPC_FUNC_IMPL(__imp__sub_82C393C0) {
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
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r10,r1,84
	ctx.r10.s64 = ctx.r1.s64 + 84;
	// lwz r9,76(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 76);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplw cr6,r4,r9
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r9.u32, ctx.xer);
	// stw r3,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r3.u32);
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// beq cr6,0x82c394c8
	if (ctx.cr6.eq) goto loc_82C394C8;
	// li r10,4
	ctx.r10.s64 = 4;
	// stw r11,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r11.u32);
	// lis r7,-32233
	ctx.r7.s64 = -2112421888;
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// addi r8,r31,36
	ctx.r8.s64 = ctx.r31.s64 + 36;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,24436(r7)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 24436);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,5184(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5184);
	ctx.f13.f64 = double(temp.f32);
loc_82C3942C:
	// lwz r10,0(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// cmplwi cr6,r10,65535
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 65535, ctx.xer);
	// bgt cr6,0x82c39450
	if (ctx.cr6.gt) goto loc_82C39450;
	// lbz r10,64(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 64);
	// slw r7,r3,r11
	ctx.r7.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r3.u32 << (ctx.r11.u8 & 0x3F));
	// and. r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 & ctx.r7.u64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82c39450
	if (!ctx.cr0.eq) goto loc_82C39450;
	// stfs f0,0(r9)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + 0, temp.u32);
	// b 0x82c39454
	goto loc_82C39454;
loc_82C39450:
	// stfs f13,0(r9)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r9.u32 + 0, temp.u32);
loc_82C39454:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bdnz 0x82c3942c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82C3942C;
	// stw r30,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r30.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x82c39478
	if (!ctx.cr6.eq) goto loc_82C39478;
	// lwz r30,80(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// b 0x82c3947c
	goto loc_82C3947C;
loc_82C39478:
	// stfs f0,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
loc_82C3947C:
	// lwz r3,72(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82C39498;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82c394c8
	if (ctx.cr0.lt) goto loc_82C394C8;
	// lwz r3,72(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,64(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82C394C8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82C394C8:
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

__attribute__((alias("__imp__sub_82C394E0"))) PPC_WEAK_FUNC(sub_82C394E0);
PPC_FUNC_IMPL(__imp__sub_82C394E0) {
	PPC_FUNC_PROLOGUE();
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82c39504
	if (ctx.cr6.eq) goto loc_82C39504;
	// lwz r3,80(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	// b 0x82c39508
	goto loc_82C39508;
loc_82C39504:
	// lwz r3,72(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
loc_82C39508:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82c39518
	if (ctx.cr6.eq) goto loc_82C39518;
	// lwz r11,80(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// b 0x82c3951c
	goto loc_82C3951C;
loc_82C39518:
	// lwz r11,72(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
loc_82C3951C:
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82C39530"))) PPC_WEAK_FUNC(sub_82C39530);
PPC_FUNC_IMPL(__imp__sub_82C39530) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x82C39538;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82c39588
	if (!ctx.cr6.gt) goto loc_82C39588;
	// addi r29,r3,12
	ctx.r29.s64 = ctx.r3.s64 + 12;
loc_82C39558:
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82C3956C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplw cr6,r28,r3
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x82c39594
	if (ctx.cr6.eq) goto loc_82C39594;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82c39558
	if (ctx.cr6.lt) goto loc_82C39558;
loc_82C39588:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82C3958C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
loc_82C39594:
	// addi r11,r30,3
	ctx.r11.s64 = ctx.r30.s64 + 3;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r31
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// b 0x82c3958c
	goto loc_82C3958C;
}

__attribute__((alias("__imp__sub_82C395A4"))) PPC_WEAK_FUNC(sub_82C395A4);
PPC_FUNC_IMPL(__imp__sub_82C395A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C395A8"))) PPC_WEAK_FUNC(sub_82C395A8);
PPC_FUNC_IMPL(__imp__sub_82C395A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7660
	ctx.lr = 0x82C395B0;
	__savegprlr_22(ctx, base);
	// stfd f30,-104(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -104, ctx.f30.u64);
	// stfd f31,-96(r1)
	PPC_STORE_U64(ctx.r1.u32 + -96, ctx.f31.u64);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r1,92
	ctx.r11.s64 = ctx.r1.s64 + 92;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r23,0
	ctx.r23.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r22,r4
	ctx.r22.u64 = ctx.r4.u64;
	// stw r23,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r23.u32);
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// stw r23,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r23.u32);
	// addi r9,r1,88
	ctx.r9.s64 = ctx.r1.s64 + 88;
	// lfs f30,5184(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5184);
	ctx.f30.f64 = double(temp.f32);
	// li r26,1
	ctx.r26.s64 = 1;
	// stfs f30,96(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// li r5,60
	ctx.r5.s64 = 60;
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r26,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r26.u32);
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// bl 0x82fa7cf0
	ctx.lr = 0x82C39608;
	sub_82FA7CF0(ctx, base);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r3,80(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 80);
	// addi r24,r30,80
	ctx.r24.s64 = ctx.r30.s64 + 80;
	// stw r23,76(r30)
	PPC_STORE_U32(ctx.r30.u32 + 76, ctx.r23.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// lwz r29,64(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// lwz r27,60(r11)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// stw r29,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r29.u32);
	// bne cr6,0x82c39660
	if (!ctx.cr6.eq) goto loc_82C39660;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,16125
	ctx.r6.s64 = 16125;
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82C3965C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82c39674
	goto loc_82C39674;
loc_82C39660:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82C39674;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82C39674:
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82c39868
	if (ctx.cr6.lt) goto loc_82C39868;
	// lwz r3,0(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82C39698;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x82c39868
	if (ctx.cr0.lt) goto loc_82C39868;
	// li r11,4
	ctx.r11.s64 = 4;
	// addi r10,r1,76
	ctx.r10.s64 = ctx.r1.s64 + 76;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// lis r11,-32233
	ctx.r11.s64 = -2112421888;
	// lfs f31,24436(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24436);
	ctx.f31.f64 = double(temp.f32);
loc_82C396B4:
	// stfsu f31,20(r10)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	ea = 20 + ctx.r10.u32;
	PPC_STORE_U32(ea, temp.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x82c396b4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82C396B4;
	// lwz r3,0(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,4
	ctx.r5.s64 = 4;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,64(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82C396E4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x82c39868
	if (ctx.cr0.lt) goto loc_82C39868;
	// li r11,4
	ctx.r11.s64 = 4;
	// mr r10,r23
	ctx.r10.u64 = ctx.r23.u64;
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// addi r8,r30,36
	ctx.r8.s64 = ctx.r30.s64 + 36;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_82C39700:
	// lwz r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// cmplwi cr6,r11,65535
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 65535, ctx.xer);
	// bgt cr6,0x82c39724
	if (ctx.cr6.gt) goto loc_82C39724;
	// lbz r11,64(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 64);
	// slw r7,r26,r10
	ctx.r7.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r26.u32 << (ctx.r10.u8 & 0x3F));
	// and. r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 & ctx.r7.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82c39724
	if (!ctx.cr0.eq) goto loc_82C39724;
	// stfs f31,0(r9)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r9.u32 + 0, temp.u32);
	// b 0x82c39728
	goto loc_82C39728;
loc_82C39724:
	// stfs f30,0(r9)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r9.u32 + 0, temp.u32);
loc_82C39728:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bdnz 0x82c39700
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82C39700;
	// stw r25,76(r30)
	PPC_STORE_U32(ctx.r30.u32 + 76, ctx.r25.u32);
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// bne cr6,0x82c3974c
	if (!ctx.cr6.eq) goto loc_82C3974C;
	// lwz r25,0(r24)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// b 0x82c39750
	goto loc_82C39750;
loc_82C3974C:
	// stfs f31,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
loc_82C39750:
	// lwz r3,72(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 72);
	// addi r28,r30,72
	ctx.r28.s64 = ctx.r30.s64 + 72;
	// stw r25,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r25.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82c39798
	if (!ctx.cr6.eq) goto loc_82C39798;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,16125
	ctx.r6.s64 = 16125;
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82C39794;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82c397ac
	goto loc_82C397AC;
loc_82C39798:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82C397AC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82C397AC:
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82c39868
	if (ctx.cr6.lt) goto loc_82C39868;
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82C397D0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x82c39868
	if (ctx.cr0.lt) goto loc_82C39868;
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,64(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82C39800;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x82c39868
	if (ctx.cr0.lt) goto loc_82C39868;
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// mr r27,r23
	ctx.r27.u64 = ctx.r23.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82c39860
	if (!ctx.cr6.gt) goto loc_82C39860;
	// addi r29,r30,12
	ctx.r29.s64 = ctx.r30.s64 + 12;
loc_82C3981C:
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r4,0(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82C39834;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bge 0x82c3984c
	if (!ctx.cr0.lt) goto loc_82C3984C;
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// ori r11,r11,16385
	ctx.r11.u64 = ctx.r11.u64 | 16385;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x82c39860
	if (!ctx.cr6.eq) goto loc_82C39860;
loc_82C3984C:
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmplw cr6,r27,r11
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82c3981c
	if (ctx.cr6.lt) goto loc_82C3981C;
loc_82C39860:
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bge cr6,0x82c398a8
	if (!ctx.cr6.lt) goto loc_82C398A8;
loc_82C39868:
	// lwz r3,72(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 72);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82c39888
	if (ctx.cr6.eq) goto loc_82C39888;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,72(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82C39884;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r23,72(r30)
	PPC_STORE_U32(ctx.r30.u32 + 72, ctx.r23.u32);
loc_82C39888:
	// lwz r3,0(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82c398a8
	if (ctx.cr6.eq) goto loc_82C398A8;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,72(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82C398A4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r23,0(r24)
	PPC_STORE_U32(ctx.r24.u32 + 0, ctx.r23.u32);
loc_82C398A8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// lfd f30,-104(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -104);
	// lfd f31,-96(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -96);
	// b 0x82fa76b0
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C398BC"))) PPC_WEAK_FUNC(sub_82C398BC);
PPC_FUNC_IMPL(__imp__sub_82C398BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C398C0"))) PPC_WEAK_FUNC(sub_82C398C0);
PPC_FUNC_IMPL(__imp__sub_82C398C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7658
	ctx.lr = 0x82C398C8;
	__savegprlr_20(ctx, base);
	// stfd f30,-120(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -120, ctx.f30.u64);
	// stfd f31,-112(r1)
	PPC_STORE_U64(ctx.r1.u32 + -112, ctx.f31.u64);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r10,76(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 76);
	// addi r9,r1,116
	ctx.r9.s64 = ctx.r1.s64 + 116;
	// li r25,0
	ctx.r25.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lfs f30,5184(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5184);
	ctx.f30.f64 = double(temp.f32);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// stfs f30,112(r1)
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// stw r25,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r25.u32);
	// stw r25,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r25.u32);
	// mr r20,r25
	ctx.r20.u64 = ctx.r25.u64;
	// stw r25,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r25.u32);
	// mr r21,r25
	ctx.r21.u64 = ctx.r25.u64;
	// bne cr6,0x82c39b60
	if (!ctx.cr6.eq) goto loc_82C39B60;
	// li r27,1
	ctx.r27.s64 = 1;
	// lwz r29,68(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 68);
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// stw r27,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r27.u32);
	// mr r22,r27
	ctx.r22.u64 = ctx.r27.u64;
	// stw r27,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r27.u32);
	// li r31,84
	ctx.r31.s64 = 84;
	// stw r27,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r27.u32);
	// addi r23,r30,-48
	ctx.r23.s64 = ctx.r30.s64 + -48;
	// stw r27,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r27.u32);
	// addi r24,r11,-84
	ctx.r24.s64 = ctx.r11.s64 + -84;
loc_82C3993C:
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lwzx r11,r31,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82c399d8
	if (ctx.cr6.eq) goto loc_82C399D8;
	// rotlwi r9,r11,0
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwzx r11,r23,r31
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + ctx.r31.u32);
	// lis r8,1
	ctx.r8.s64 = 65536;
	// cmplwi cr6,r11,65535
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 65535, ctx.xer);
	// lwz r11,212(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 212);
	// rlwinm r11,r11,0,12,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xF0000;
	// subf r8,r11,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r11.s64;
	// cntlzw r8,r8
	ctx.r8.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// rlwinm r8,r8,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// ble cr6,0x82c39978
	if (!ctx.cr6.gt) goto loc_82C39978;
	// mr r20,r27
	ctx.r20.u64 = ctx.r27.u64;
loc_82C39978:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82c39988
	if (!ctx.cr6.eq) goto loc_82C39988;
	// mr r21,r27
	ctx.r21.u64 = ctx.r27.u64;
	// b 0x82c399d4
	goto loc_82C399D4;
loc_82C39988:
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x82c399a4
	if (!ctx.cr6.eq) goto loc_82C399A4;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq cr6,0x82c399d8
	if (ctx.cr6.eq) goto loc_82C399D8;
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82c399d8
	if (!ctx.cr6.eq) goto loc_82C399D8;
loc_82C399A4:
	// stw r25,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r25.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwzx r11,r31,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x83178f04
	ctx.lr = 0x82C399C4;
	__imp__XamUserAreUsersFriends(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82c399d8
	if (!ctx.cr6.eq) goto loc_82C399D8;
	// mr r22,r25
	ctx.r22.u64 = ctx.r25.u64;
loc_82C399D4:
	// stwx r25,r24,r31
	PPC_STORE_U32(ctx.r24.u32 + ctx.r31.u32, ctx.r25.u32);
loc_82C399D8:
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmplwi cr6,r31,100
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 100, ctx.xer);
	// blt cr6,0x82c3993c
	if (ctx.cr6.lt) goto loc_82C3993C;
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// li r31,84
	ctx.r31.s64 = 84;
	// addi r28,r11,-84
	ctx.r28.s64 = ctx.r11.s64 + -84;
	// lis r11,-32233
	ctx.r11.s64 = -2112421888;
	// lis r26,28672
	ctx.r26.s64 = 1879048192;
	// lfs f31,24436(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24436);
	ctx.f31.f64 = double(temp.f32);
loc_82C399FC:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lwzx r10,r31,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82c39a2c
	if (ctx.cr6.eq) goto loc_82C39A2C;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82c39a2c
	if (!ctx.cr6.eq) goto loc_82C39A2C;
	// lwz r11,204(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 204);
	// mr r29,r27
	ctx.r29.u64 = ctx.r27.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82c39a30
	if (!ctx.cr6.eq) goto loc_82C39A30;
loc_82C39A2C:
	// mr r29,r25
	ctx.r29.u64 = ctx.r25.u64;
loc_82C39A30:
	// cmpwi cr6,r21,0
	ctx.cr6.compare<int32_t>(ctx.r21.s32, 0, ctx.xer);
	// beq cr6,0x82c39a58
	if (ctx.cr6.eq) goto loc_82C39A58;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lwzx r11,r31,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// lwz r10,212(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 212);
	// rlwinm r10,r10,0,31,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// stw r10,212(r11)
	PPC_STORE_U32(ctx.r11.u32 + 212, ctx.r10.u32);
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lwzx r4,r31,r3
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r3.u32);
	// bl 0x82c34980
	ctx.lr = 0x82C39A58;
	sub_82C34980(ctx, base);
loc_82C39A58:
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// bne cr6,0x82c39aa4
	if (!ctx.cr6.eq) goto loc_82C39AA4;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lwzx r10,r31,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82c39aa4
	if (ctx.cr6.eq) goto loc_82C39AA4;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82c39aa4
	if (!ctx.cr6.eq) goto loc_82C39AA4;
	// lwz r11,212(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 212);
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82c39aa0
	if (!ctx.cr0.eq) goto loc_82C39AA0;
	// bl 0x82c35b58
	ctx.lr = 0x82C39A90;
	sub_82C35B58(ctx, base);
	// cmplw cr6,r3,r26
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r26.u32, ctx.xer);
	// beq cr6,0x82c39aa0
	if (ctx.cr6.eq) goto loc_82C39AA0;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne cr6,0x82c39aa4
	if (!ctx.cr6.eq) goto loc_82C39AA4;
loc_82C39AA0:
	// stwx r25,r31,r24
	PPC_STORE_U32(ctx.r31.u32 + ctx.r24.u32, ctx.r25.u32);
loc_82C39AA4:
	// bl 0x83179db4
	ctx.lr = 0x82C39AA8;
	__imp__XamVoiceIsActiveProcess(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82c39b2c
	if (ctx.cr0.eq) goto loc_82C39B2C;
	// lwzx r11,r31,r24
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r24.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82c39aec
	if (ctx.cr6.eq) goto loc_82C39AEC;
	// lwzx r11,r31,r23
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r23.u32);
	// cmplwi cr6,r11,65535
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 65535, ctx.xer);
	// bgt cr6,0x82c39aec
	if (ctx.cr6.gt) goto loc_82C39AEC;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lwzx r10,r31,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82c39ae8
	if (ctx.cr6.eq) goto loc_82C39AE8;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82c39aec
	if (!ctx.cr6.eq) goto loc_82C39AEC;
loc_82C39AE8:
	// stfsx f31,r28,r31
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r28.u32 + ctx.r31.u32, temp.u32);
loc_82C39AEC:
	// cmpwi cr6,r20,0
	ctx.cr6.compare<int32_t>(ctx.r20.s32, 0, ctx.xer);
	// beq cr6,0x82c39b2c
	if (ctx.cr6.eq) goto loc_82C39B2C;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lwzx r10,r31,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82c39b2c
	if (ctx.cr6.eq) goto loc_82C39B2C;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r11,212(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 212);
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82c39b28
	if (!ctx.cr0.eq) goto loc_82C39B28;
	// bl 0x82c35b58
	ctx.lr = 0x82C39B18;
	sub_82C35B58(ctx, base);
	// cmplw cr6,r3,r26
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r26.u32, ctx.xer);
	// beq cr6,0x82c39b28
	if (ctx.cr6.eq) goto loc_82C39B28;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne cr6,0x82c39b2c
	if (!ctx.cr6.eq) goto loc_82C39B2C;
loc_82C39B28:
	// stfsx f30,r28,r31
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f30.f64);
	PPC_STORE_U32(ctx.r28.u32 + ctx.r31.u32, temp.u32);
loc_82C39B2C:
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmplwi cr6,r31,100
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 100, ctx.xer);
	// blt cr6,0x82c399fc
	if (ctx.cr6.lt) goto loc_82C399FC;
	// lwz r3,72(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 72);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// lwz r4,80(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 80);
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,64(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82C39B60;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82C39B60:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// lfd f30,-120(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -120);
	// lfd f31,-112(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -112);
	// b 0x82fa76a8
	__restgprlr_20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C39B70"))) PPC_WEAK_FUNC(sub_82C39B70);
PPC_FUNC_IMPL(__imp__sub_82C39B70) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x82C39B78;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r1,84
	ctx.r11.s64 = ctx.r1.s64 + 84;
	// li r28,0
	ctx.r28.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// stw r28,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r28.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// beq cr6,0x82c39cd4
	if (ctx.cr6.eq) goto loc_82C39CD4;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82c39bd8
	if (!ctx.cr6.gt) goto loc_82C39BD8;
	// addi r30,r3,20
	ctx.r30.s64 = ctx.r3.s64 + 20;
loc_82C39BBC:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x82c37630
	ctx.lr = 0x82C39BC4;
	sub_82C37630(ctx, base);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// stwu r28,4(r30)
	ea = 4 + ctx.r30.u32;
	PPC_STORE_U32(ea, ctx.r28.u32);
	ctx.r30.u32 = ea;
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82c39bbc
	if (ctx.cr6.lt) goto loc_82C39BBC;
loc_82C39BD8:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82c39c14
	if (!ctx.cr6.gt) goto loc_82C39C14;
	// addi r30,r31,8
	ctx.r30.s64 = ctx.r31.s64 + 8;
loc_82C39BEC:
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82C39C00;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// stwu r28,4(r30)
	ea = 4 + ctx.r30.u32;
	PPC_STORE_U32(ea, ctx.r28.u32);
	ctx.r30.u32 = ea;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82c39bec
	if (ctx.cr6.lt) goto loc_82C39BEC;
loc_82C39C14:
	// lwz r11,76(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82c39c84
	if (ctx.cr6.eq) goto loc_82C39C84;
	// lwz r3,72(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82c39c80
	if (ctx.cr6.eq) goto loc_82C39C80;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r11,48(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// lfs f1,5184(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5184);
	ctx.f1.f64 = double(temp.f32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82C39C48;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,72(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82C39C60;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// lwz r3,72(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82C39C80;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82C39C80:
	// stw r28,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r28.u32);
loc_82C39C84:
	// lwz r3,72(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82c39ca4
	if (ctx.cr6.eq) goto loc_82C39CA4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,72(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82C39CA0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r28,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r28.u32);
loc_82C39CA4:
	// lwz r3,80(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82c39cc4
	if (ctx.cr6.eq) goto loc_82C39CC4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,72(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82C39CC0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r28,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r28.u32);
loc_82C39CC4:
	// lis r4,24970
	ctx.r4.s64 = 1636433920;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r4,r4,32784
	ctx.r4.u64 = ctx.r4.u64 | 32784;
	// bl 0x82691460
	ctx.lr = 0x82C39CD4;
	sub_82691460(ctx, base);
loc_82C39CD4:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C39CDC"))) PPC_WEAK_FUNC(sub_82C39CDC);
PPC_FUNC_IMPL(__imp__sub_82C39CDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C39CE0"))) PPC_WEAK_FUNC(sub_82C39CE0);
PPC_FUNC_IMPL(__imp__sub_82C39CE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x82C39CE8;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,32(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82c39d40
	if (!ctx.cr6.gt) goto loc_82C39D40;
	// addi r30,r3,20
	ctx.r30.s64 = ctx.r3.s64 + 20;
loc_82C39D04:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// ld r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r5,24(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// bl 0x82c34a48
	ctx.lr = 0x82C39D20;
	sub_82C34A48(ctx, base);
	// lwzu r3,4(r30)
	ea = 4 + ctx.r30.u32;
	ctx.r3.u64 = PPC_LOAD_U32(ea);
	ctx.r30.u32 = ea;
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x82c373d8
	ctx.lr = 0x82C39D30;
	sub_82C373D8(ctx, base);
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82c39d04
	if (ctx.cr6.lt) goto loc_82C39D04;
loc_82C39D40:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82c39d78
	if (!ctx.cr6.gt) goto loc_82C39D78;
	// addi r29,r31,8
	ctx.r29.s64 = ctx.r31.s64 + 8;
loc_82C39D54:
	// lwzu r3,4(r29)
	ea = 4 + ctx.r29.u32;
	ctx.r3.u64 = PPC_LOAD_U32(ea);
	ctx.r29.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82C39D68;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82c39d54
	if (ctx.cr6.lt) goto loc_82C39D54;
loc_82C39D78:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C39D84"))) PPC_WEAK_FUNC(sub_82C39D84);
PPC_FUNC_IMPL(__imp__sub_82C39D84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C39D88"))) PPC_WEAK_FUNC(sub_82C39D88);
PPC_FUNC_IMPL(__imp__sub_82C39D88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7674
	ctx.lr = 0x82C39D90;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r28,-32761
	ctx.r28.s64 = -2147024896;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// ori r28,r28,87
	ctx.r28.u64 = ctx.r28.u64 | 87;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82c39df0
	if (ctx.cr6.eq) goto loc_82C39DF0;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
loc_82C39DB4:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82c39530
	ctx.lr = 0x82C39DC0;
	sub_82C39530(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82c39df0
	if (ctx.cr0.eq) goto loc_82C39DF0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82C39DD8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// blt 0x82c39df0
	if (ctx.cr0.lt) goto loc_82C39DF0;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmplw cr6,r30,r29
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r29.u32, ctx.xer);
	// blt cr6,0x82c39db4
	if (ctx.cr6.lt) goto loc_82C39DB4;
loc_82C39DF0:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C39DFC"))) PPC_WEAK_FUNC(sub_82C39DFC);
PPC_FUNC_IMPL(__imp__sub_82C39DFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C39E00"))) PPC_WEAK_FUNC(sub_82C39E00);
PPC_FUNC_IMPL(__imp__sub_82C39E00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7674
	ctx.lr = 0x82C39E08;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r28,-32761
	ctx.r28.s64 = -2147024896;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// ori r28,r28,87
	ctx.r28.u64 = ctx.r28.u64 | 87;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82c39e68
	if (ctx.cr6.eq) goto loc_82C39E68;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
loc_82C39E2C:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82c39530
	ctx.lr = 0x82C39E38;
	sub_82C39530(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82c39e68
	if (ctx.cr0.eq) goto loc_82C39E68;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82C39E50;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// blt 0x82c39e68
	if (ctx.cr0.lt) goto loc_82C39E68;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmplw cr6,r30,r29
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r29.u32, ctx.xer);
	// blt cr6,0x82c39e2c
	if (ctx.cr6.lt) goto loc_82C39E2C;
loc_82C39E68:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C39E74"))) PPC_WEAK_FUNC(sub_82C39E74);
PPC_FUNC_IMPL(__imp__sub_82C39E74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C39E78"))) PPC_WEAK_FUNC(sub_82C39E78);
PPC_FUNC_IMPL(__imp__sub_82C39E78) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7670
	ctx.lr = 0x82C39E80;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// li r5,16
	ctx.r5.s64 = 16;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r3,36
	ctx.r3.s64 = ctx.r3.s64 + 36;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// mr r26,r8
	ctx.r26.u64 = ctx.r8.u64;
	// bl 0x82a75988
	ctx.lr = 0x82C39EAC;
	sub_82A75988(ctx, base);
	// std r27,0(r31)
	PPC_STORE_U64(ctx.r31.u32 + 0, ctx.r27.u64);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// stb r26,64(r31)
	PPC_STORE_U8(ctx.r31.u32 + 64, ctx.r26.u8);
	// bne cr6,0x82c39ee4
	if (!ctx.cr6.eq) goto loc_82C39EE4;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x82c39ee4
	if (!ctx.cr6.eq) goto loc_82C39EE4;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c393c0
	ctx.lr = 0x82C39ED0;
	sub_82C393C0(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x82c39f00
	if (!ctx.cr6.eq) goto loc_82C39F00;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c398c0
	ctx.lr = 0x82C39EE0;
	sub_82C398C0(ctx, base);
	// b 0x82c39f00
	goto loc_82C39F00;
loc_82C39EE4:
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c395a8
	ctx.lr = 0x82C39EF8;
	sub_82C395A8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82c39f34
	if (ctx.cr0.lt) goto loc_82C39F34;
loc_82C39F00:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82c39f28
	if (ctx.cr6.lt) goto loc_82C39F28;
	// lwz r3,72(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// lis r11,-32233
	ctx.r11.s64 = -2112421888;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lfs f1,24436(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24436);
	ctx.f1.f64 = double(temp.f32);
	// lwz r11,48(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82C39F28;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82C39F28:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r10,280(r11)
	PPC_STORE_U32(ctx.r11.u32 + 280, ctx.r10.u32);
loc_82C39F34:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82fa76c0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C39F3C"))) PPC_WEAK_FUNC(sub_82C39F3C);
PPC_FUNC_IMPL(__imp__sub_82C39F3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C39F40"))) PPC_WEAK_FUNC(sub_82C39F40);
PPC_FUNC_IMPL(__imp__sub_82C39F40) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7670
	ctx.lr = 0x82C39F48;
	__savegprlr_26(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r1,84
	ctx.r11.s64 = ctx.r1.s64 + 84;
	// li r27,0
	ctx.r27.s64 = 0;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// li r26,1
	ctx.r26.s64 = 1;
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// stw r27,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r27.u32);
	// stw r26,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r26.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r27
	ctx.r28.u64 = ctx.r27.u64;
	// bl 0x82a75988
	ctx.lr = 0x82C39F80;
	sub_82A75988(ctx, base);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82c39fb8
	if (!ctx.cr6.gt) goto loc_82C39FB8;
	// addi r29,r31,8
	ctx.r29.s64 = ctx.r31.s64 + 8;
loc_82C39F94:
	// lwzu r3,4(r29)
	ea = 4 + ctx.r29.u32;
	ctx.r3.u64 = PPC_LOAD_U32(ea);
	ctx.r29.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82C39FA8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82c39f94
	if (ctx.cr6.lt) goto loc_82C39F94;
loc_82C39FB8:
	// lwz r11,76(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82c3a03c
	if (ctx.cr6.eq) goto loc_82C3A03C;
	// lwz r3,72(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82c3a038
	if (ctx.cr6.eq) goto loc_82C3A038;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r11,48(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// lfs f1,5184(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5184);
	ctx.f1.f64 = double(temp.f32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82C39FEC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// blt 0x82c3a038
	if (ctx.cr0.lt) goto loc_82C3A038;
	// lwz r3,72(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82C3A00C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// blt 0x82c3a038
	if (ctx.cr0.lt) goto loc_82C3A038;
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// lwz r3,72(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82C3A034;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
loc_82C3A038:
	// stw r27,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r27.u32);
loc_82C3A03C:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r26,280(r11)
	PPC_STORE_U32(ctx.r11.u32 + 280, ctx.r26.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82fa76c0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C3A050"))) PPC_WEAK_FUNC(sub_82C3A050);
PPC_FUNC_IMPL(__imp__sub_82C3A050) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7674
	ctx.lr = 0x82C3A058;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r30,-32768
	ctx.r30.s64 = -2147483648;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// lwz r4,-5148(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -5148);
	// ori r30,r30,16389
	ctx.r30.u64 = ctx.r30.u64 | 16389;
	// bl 0x82c39530
	ctx.lr = 0x82C3A07C;
	sub_82C39530(ctx, base);
	// mr. r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq 0x82c3a0b8
	if (ctx.cr0.eq) goto loc_82C3A0B8;
	// lhz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 0);
	// lwz r10,68(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x82c3a0a4
	if (ctx.cr6.eq) goto loc_82C3A0A4;
	// stw r11,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c398c0
	ctx.lr = 0x82C3A0A4;
	sub_82C398C0(ctx, base);
loc_82C3A0A4:
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82c33aa0
	ctx.lr = 0x82C3A0B4;
	sub_82C33AA0(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
loc_82C3A0B8:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C3A0C4"))) PPC_WEAK_FUNC(sub_82C3A0C4);
PPC_FUNC_IMPL(__imp__sub_82C3A0C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C3A0C8"))) PPC_WEAK_FUNC(sub_82C3A0C8);
PPC_FUNC_IMPL(__imp__sub_82C3A0C8) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r4,9
	ctx.r11.s64 = ctx.r4.s64 + 9;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r11,r3
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// cmplw cr6,r5,r10
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82c3a0ec
	if (ctx.cr6.eq) goto loc_82C3A0EC;
	// li r10,1
	ctx.r10.s64 = 1;
	// stwx r5,r11,r3
	PPC_STORE_U32(ctx.r11.u32 + ctx.r3.u32, ctx.r5.u32);
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stw r10,280(r11)
	PPC_STORE_U32(ctx.r11.u32 + 280, ctx.r10.u32);
loc_82C3A0EC:
	// b 0x82c398c0
	sub_82C398C0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C3A0F0"))) PPC_WEAK_FUNC(sub_82C3A0F0);
PPC_FUNC_IMPL(__imp__sub_82C3A0F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x82C3A0F8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r28,1
	ctx.r28.s64 = 1;
	// stw r30,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r30.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82c3a150
	if (!ctx.cr6.gt) goto loc_82C3A150;
	// addi r29,r3,12
	ctx.r29.s64 = ctx.r3.s64 + 12;
loc_82C3A11C:
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,36(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82C3A130;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x82c3a13c
	if (!ctx.cr6.eq) goto loc_82C3A13C;
	// stw r28,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r28.u32);
loc_82C3A13C:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82c3a11c
	if (ctx.cr6.lt) goto loc_82C3A11C;
loc_82C3A150:
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82c3a168
	if (ctx.cr6.eq) goto loc_82C3A168;
	// li r11,200
	ctx.r11.s64 = 200;
	// stw r11,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r11.u32);
	// b 0x82c3a19c
	goto loc_82C3A19C;
loc_82C3A168:
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82c3a19c
	if (!ctx.cr6.gt) goto loc_82C3A19C;
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82c3a198
	if (ctx.cr6.eq) goto loc_82C3A198;
	// bl 0x82a78340
	ctx.lr = 0x82C3A184;
	sub_82A78340(ctx, base);
	// lwz r10,60(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// subf r10,r3,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r3.s64;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r11,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r11.u32);
loc_82C3A198:
	// stw r28,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r28.u32);
loc_82C3A19C:
	// bl 0x82a78340
	ctx.lr = 0x82C3A1A0;
	sub_82A78340(ctx, base);
	// stw r3,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r3.u32);
	// lwz r3,52(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C3A1B0"))) PPC_WEAK_FUNC(sub_82C3A1B0);
PPC_FUNC_IMPL(__imp__sub_82C3A1B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7674
	ctx.lr = 0x82C3A1B8;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r5,12
	ctx.r5.s64 = 12;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82a75988
	ctx.lr = 0x82C3A1D4;
	sub_82A75988(ctx, base);
	// lwz r11,32(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 32);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82c3a244
	if (!ctx.cr6.gt) goto loc_82C3A244;
	// addi r31,r28,24
	ctx.r31.s64 = ctx.r28.s64 + 24;
loc_82C3A1E8:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r10,r11,16
	ctx.r10.s64 = ctx.r11.s64 + 16;
	// lwz r8,24(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// lwz r29,12(r8)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
loc_82C3A1FC:
	// lwz r8,-8(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + -8);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82c3a214
	if (ctx.cr6.eq) goto loc_82C3A214;
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpwi cr6,r8,1
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 1, ctx.xer);
	// beq cr6,0x82c3a24c
	if (ctx.cr6.eq) goto loc_82C3A24C;
loc_82C3A214:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplwi cr6,r9,2
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 2, ctx.xer);
	// blt cr6,0x82c3a1fc
	if (ctx.cr6.lt) goto loc_82C3A1FC;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82C3A228:
	// rlwinm r11,r29,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// stwx r3,r11,r27
	PPC_STORE_U32(ctx.r11.u32 + ctx.r27.u32, ctx.r3.u32);
	// lwz r11,32(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 32);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82c3a1e8
	if (ctx.cr6.lt) goto loc_82C3A1E8;
loc_82C3A244:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c4
	__restgprlr_27(ctx, base);
	return;
loc_82C3A24C:
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r3,r11,8
	ctx.r3.s64 = ctx.r11.s64 + 8;
	// bl 0x82c377c0
	ctx.lr = 0x82C3A258;
	sub_82C377C0(ctx, base);
	// b 0x82c3a228
	goto loc_82C3A228;
}

__attribute__((alias("__imp__sub_82C3A25C"))) PPC_WEAK_FUNC(sub_82C3A25C);
PPC_FUNC_IMPL(__imp__sub_82C3A25C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C3A260"))) PPC_WEAK_FUNC(sub_82C3A260);
PPC_FUNC_IMPL(__imp__sub_82C3A260) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7654
	ctx.lr = 0x82C3A268;
	__savegprlr_19(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lis r4,24970
	ctx.r4.s64 = 1636433920;
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// li r3,88
	ctx.r3.s64 = 88;
	// ori r4,r4,32784
	ctx.r4.u64 = ctx.r4.u64 | 32784;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r21,r6
	ctx.r21.u64 = ctx.r6.u64;
	// mr r20,r7
	ctx.r20.u64 = ctx.r7.u64;
	// mr r19,r8
	ctx.r19.u64 = ctx.r8.u64;
	// li r26,0
	ctx.r26.s64 = 0;
	// bl 0x82691410
	ctx.lr = 0x82C3A298;
	sub_82691410(ctx, base);
	// mr. r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// bne 0x82c3a2ac
	if (!ctx.cr0.eq) goto loc_82C3A2AC;
	// lis r26,-32761
	ctx.r26.s64 = -2147024896;
	// ori r26,r26,14
	ctx.r26.u64 = ctx.r26.u64 | 14;
	// b 0x82c3a4ac
	goto loc_82C3A4AC;
loc_82C3A2AC:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r22,8(r27)
	PPC_STORE_U32(ctx.r27.u32 + 8, ctx.r22.u32);
	// li r5,24
	ctx.r5.s64 = 24;
	// stw r11,68(r27)
	PPC_STORE_U32(ctx.r27.u32 + 68, ctx.r11.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82a75988
	ctx.lr = 0x82C3A2C8;
	sub_82A75988(ctx, base);
	// li r5,12
	ctx.r5.s64 = 12;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82a75988
	ctx.lr = 0x82C3A2D8;
	sub_82A75988(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82c3a36c
	if (ctx.cr6.eq) goto loc_82C3A36C;
	// addi r31,r27,12
	ctx.r31.s64 = ctx.r27.s64 + 12;
loc_82C3A2E8:
	// cmplwi cr6,r30,2
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 2, ctx.xer);
	// bge cr6,0x82c3a36c
	if (!ctx.cr6.lt) goto loc_82C3A36C;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82C3A30C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// blt 0x82c3a36c
	if (ctx.cr0.lt) goto loc_82C3A36C;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82C3A32C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// addi r8,r1,112
	ctx.r8.s64 = ctx.r1.s64 + 112;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// lwz r7,12(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// rlwinm r10,r7,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r7,r7,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + ctx.r30.u64;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplw cr6,r30,r28
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r28.u32, ctx.xer);
	// stwx r11,r7,r9
	PPC_STORE_U32(ctx.r7.u32 + ctx.r9.u32, ctx.r11.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// stwx r11,r10,r8
	PPC_STORE_U32(ctx.r10.u32 + ctx.r8.u32, ctx.r11.u32);
	// blt cr6,0x82c3a2e8
	if (ctx.cr6.lt) goto loc_82C3A2E8;
loc_82C3A36C:
	// addi r11,r27,20
	ctx.r11.s64 = ctx.r27.s64 + 20;
	// stw r30,20(r27)
	PPC_STORE_U32(ctx.r27.u32 + 20, ctx.r30.u32);
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// blt cr6,0x82c3a4ac
	if (ctx.cr6.lt) goto loc_82C3A4AC;
	// li r24,0
	ctx.r24.s64 = 0;
	// li r25,0
	ctx.r25.s64 = 0;
	// addi r23,r1,96
	ctx.r23.s64 = ctx.r1.s64 + 96;
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
loc_82C3A38C:
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,88
	ctx.r3.s64 = ctx.r1.s64 + 88;
	// li r30,0
	ctx.r30.s64 = 0;
	// bl 0x82a75988
	ctx.lr = 0x82C3A3A0;
	sub_82A75988(ctx, base);
	// addi r11,r1,88
	ctx.r11.s64 = ctx.r1.s64 + 88;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r29,r11,-4
	ctx.r29.s64 = ctx.r11.s64 + -4;
loc_82C3A3AC:
	// add r11,r25,r31
	ctx.r11.u64 = ctx.r25.u64 + ctx.r31.u64;
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82c3a3e4
	if (ctx.cr6.eq) goto loc_82C3A3E4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82C3A3D8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// stwu r11,4(r29)
	ea = 4 + ctx.r29.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r29.u32 = ea;
loc_82C3A3E4:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplwi cr6,r31,2
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 2, ctx.xer);
	// blt cr6,0x82c3a3ac
	if (ctx.cr6.lt) goto loc_82C3A3AC;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82c3a474
	if (ctx.cr6.eq) goto loc_82C3A474;
	// addi r7,r28,4
	ctx.r7.s64 = ctx.r28.s64 + 4;
	// lwz r4,0(r23)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// li r5,10
	ctx.r5.s64 = 10;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x82c376d8
	ctx.lr = 0x82C3A410;
	sub_82C376D8(ctx, base);
	// mr. r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// blt 0x82c3a484
	if (ctx.cr0.lt) goto loc_82C3A484;
	// addi r24,r24,1
	ctx.r24.s64 = ctx.r24.s64 + 1;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// li r31,0
	ctx.r31.s64 = 0;
	// li r30,0
	ctx.r30.s64 = 0;
loc_82C3A428:
	// add r11,r25,r30
	ctx.r11.u64 = ctx.r25.u64 + ctx.r30.u64;
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82c3a468
	if (ctx.cr6.eq) goto loc_82C3A468;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// lwz r5,0(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82C3A45C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// blt 0x82c3a484
	if (ctx.cr0.lt) goto loc_82C3A484;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
loc_82C3A468:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplwi cr6,r30,2
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 2, ctx.xer);
	// blt cr6,0x82c3a428
	if (ctx.cr6.lt) goto loc_82C3A428;
loc_82C3A474:
	// addi r25,r25,2
	ctx.r25.s64 = ctx.r25.s64 + 2;
	// addi r23,r23,4
	ctx.r23.s64 = ctx.r23.s64 + 4;
	// cmplwi cr6,r25,6
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 6, ctx.xer);
	// blt cr6,0x82c3a38c
	if (ctx.cr6.lt) goto loc_82C3A38C;
loc_82C3A484:
	// stw r24,32(r27)
	PPC_STORE_U32(ctx.r27.u32 + 32, ctx.r24.u32);
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// blt cr6,0x82c3a4ac
	if (ctx.cr6.lt) goto loc_82C3A4AC;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r20
	ctx.r5.u64 = ctx.r20.u64;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82c395a8
	ctx.lr = 0x82C3A4A4;
	sub_82C395A8(ctx, base);
	// mr. r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// bge 0x82c3a4b8
	if (!ctx.cr0.lt) goto loc_82C3A4B8;
loc_82C3A4AC:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82c39b70
	ctx.lr = 0x82C3A4B4;
	sub_82C39B70(ctx, base);
	// li r27,0
	ctx.r27.s64 = 0;
loc_82C3A4B8:
	// stw r27,0(r19)
	PPC_STORE_U32(ctx.r19.u32 + 0, ctx.r27.u32);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x82fa76a4
	__restgprlr_19(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C3A4C8"))) PPC_WEAK_FUNC(sub_82C3A4C8);
PPC_FUNC_IMPL(__imp__sub_82C3A4C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7640
	ctx.lr = 0x82C3A4D0;
	__savegprlr_14(ctx, base);
	// li r14,0
	ctx.r14.s64 = 0;
	// stw r4,28(r1)
	PPC_STORE_U32(ctx.r1.u32 + 28, ctx.r4.u32);
	// mr r8,r4
	ctx.r8.u64 = ctx.r4.u64;
	// stw r5,36(r1)
	PPC_STORE_U32(ctx.r1.u32 + 36, ctx.r5.u32);
	// stw r6,44(r1)
	PPC_STORE_U32(ctx.r1.u32 + 44, ctx.r6.u32);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// stb r14,-160(r1)
	PPC_STORE_U8(ctx.r1.u32 + -160, ctx.r14.u8);
	// ble cr6,0x82c3b864
	if (!ctx.cr6.gt) goto loc_82C3B864;
	// xori r11,r3,1
	ctx.r11.u64 = ctx.r3.u64 ^ 1;
	// lis r10,-31974
	ctx.r10.s64 = -2095448064;
	// addi r6,r11,-1
	ctx.r6.s64 = ctx.r11.s64 + -1;
	// lis r11,-31974
	ctx.r11.s64 = -2095448064;
	// lis r9,-31974
	ctx.r9.s64 = -2095448064;
	// not r5,r6
	ctx.r5.u64 = ~ctx.r6.u64;
	// addi r19,r11,13596
	ctx.r19.s64 = ctx.r11.s64 + 13596;
	// addi r15,r10,13612
	ctx.r15.s64 = ctx.r10.s64 + 13612;
	// addi r18,r9,13564
	ctx.r18.s64 = ctx.r9.s64 + 13564;
	// li r17,-1024
	ctx.r17.s64 = -1024;
	// li r16,128
	ctx.r16.s64 = 128;
	// li r4,512
	ctx.r4.s64 = 512;
	// b 0x82c3a528
	goto loc_82C3A528;
loc_82C3A524:
	// lwz r8,28(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 28);
loc_82C3A528:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82c3a550
	if (ctx.cr6.eq) goto loc_82C3A550;
	// rlwinm r11,r14,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r14.u32 | (ctx.r14.u64 << 32), 31) & 0x7FFFFFFF;
	// rlwinm r10,r14,2,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r14.u32 | (ctx.r14.u64 << 32), 2) & 0x4;
	// lbzx r8,r11,r8
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r8.u32);
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// extsb r10,r8
	ctx.r10.s64 = ctx.r8.s8;
	// sraw r9,r10,r11
	temp.u32 = ctx.r11.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r10.s32 < 0) & (((ctx.r10.s32 >> temp.u32) << temp.u32) != ctx.r10.s32);
	ctx.r9.s64 = ctx.r10.s32 >> temp.u32;
	// clrlwi r24,r9,28
	ctx.r24.u64 = ctx.r9.u32 & 0xF;
	// b 0x82c3a594
	goto loc_82C3A594;
loc_82C3A550:
	// rlwinm r11,r14,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r14.u32 | (ctx.r14.u64 << 32), 1) & 0xFFFFFFFE;
	// li r12,7880
	ctx.r12.s64 = 7880;
	// lhzx r10,r11,r8
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r8.u32);
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// addi r9,r10,-7880
	ctx.r9.s64 = ctx.r10.s64 + -7880;
	// srawi r11,r9,16
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xFFFF) != 0);
	ctx.r11.s64 = ctx.r9.s32 >> 16;
	// not r8,r11
	ctx.r8.u64 = ~ctx.r11.u64;
	// and r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ctx.r10.u64;
	// and r10,r8,r12
	ctx.r10.u64 = ctx.r8.u64 & ctx.r12.u64;
	// li r12,-7880
	ctx.r12.s64 = -7880;
	// or r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 | ctx.r11.u64;
	// addi r9,r10,7880
	ctx.r9.s64 = ctx.r10.s64 + 7880;
	// srawi r11,r9,16
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xFFFF) != 0);
	ctx.r11.s64 = ctx.r9.s32 >> 16;
	// and r8,r11,r12
	ctx.r8.u64 = ctx.r11.u64 & ctx.r12.u64;
	// andc r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ~ctx.r11.u64;
	// or r10,r11,r8
	ctx.r10.u64 = ctx.r11.u64 | ctx.r8.u64;
	// extsh r24,r10
	ctx.r24.s64 = ctx.r10.s16;
loc_82C3A594:
	// lhz r11,8(r7)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r7.u32 + 8);
	// lhz r9,26(r7)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r7.u32 + 26);
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// extsh r11,r9
	ctx.r11.s64 = ctx.r9.s16;
	// srawi r8,r10,15
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7FFF) != 0);
	ctx.r8.s64 = ctx.r10.s32 >> 15;
	// srawi r10,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 2;
	// clrlwi r8,r8,31
	ctx.r8.u64 = ctx.r8.u32 & 0x1;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x82c3a5c0
	if (ctx.cr6.eq) goto loc_82C3A5C0;
	// neg r9,r10
	ctx.r9.s64 = -ctx.r10.s64;
	// clrlwi r10,r9,19
	ctx.r10.u64 = ctx.r9.u32 & 0x1FFF;
loc_82C3A5C0:
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// subfic r9,r9,32
	ctx.xer.ca = ctx.r9.u32 <= 32;
	ctx.r9.s64 = 32 - ctx.r9.s64;
	// bne cr6,0x82c3a5d8
	if (!ctx.cr6.eq) goto loc_82C3A5D8;
	// li r10,32
	ctx.r10.s64 = 32;
	// b 0x82c3a5e0
	goto loc_82C3A5E0;
loc_82C3A5D8:
	// rlwinm r10,r10,6,0,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 6) & 0xFFFFFFC0;
	// sraw r10,r10,r9
	temp.u32 = ctx.r9.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r10.s32 < 0) & (((ctx.r10.s32 >> temp.u32) << temp.u32) != ctx.r10.s32);
	ctx.r10.s64 = ctx.r10.s32 >> temp.u32;
loc_82C3A5E0:
	// srawi r31,r11,10
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3FF) != 0);
	ctx.r31.s64 = ctx.r11.s32 >> 10;
	// clrlwi r30,r11,26
	ctx.r30.u64 = ctx.r11.u32 & 0x3F;
	// srawi r11,r11,6
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3F) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 6;
	// mullw r10,r30,r10
	ctx.r10.s64 = int64_t(ctx.r30.s32) * int64_t(ctx.r10.s32);
	// clrlwi r11,r11,28
	ctx.r11.u64 = ctx.r11.u32 & 0xF;
	// clrlwi r31,r31,31
	ctx.r31.u64 = ctx.r31.u32 & 0x1;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r10,r10,48
	ctx.r10.s64 = ctx.r10.s64 + 48;
	// xor r9,r31,r8
	ctx.r9.u64 = ctx.r31.u64 ^ ctx.r8.u64;
	// rlwinm r10,r10,3,0,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFF80;
	// cmpwi cr6,r11,26
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 26, ctx.xer);
	// bgt cr6,0x82c3a61c
	if (ctx.cr6.gt) goto loc_82C3A61C;
	// subfic r11,r11,26
	ctx.xer.ca = ctx.r11.u32 <= 26;
	ctx.r11.s64 = 26 - ctx.r11.s64;
	// sraw r10,r10,r11
	temp.u32 = ctx.r11.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r10.s32 < 0) & (((ctx.r10.s32 >> temp.u32) << temp.u32) != ctx.r10.s32);
	ctx.r10.s64 = ctx.r10.s32 >> temp.u32;
	// b 0x82c3a628
	goto loc_82C3A628;
loc_82C3A61C:
	// addi r11,r11,-26
	ctx.r11.s64 = ctx.r11.s64 + -26;
	// slw r10,r10,r11
	ctx.r10.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r11.u8 & 0x3F));
	// clrlwi r10,r10,17
	ctx.r10.u64 = ctx.r10.u32 & 0x7FFF;
loc_82C3A628:
	// xori r11,r9,1
	ctx.r11.u64 = ctx.r9.u64 ^ 1;
	// lhz r8,10(r7)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r7.u32 + 10);
	// neg r31,r10
	ctx.r31.s64 = -ctx.r10.s64;
	// lhz r30,28(r7)
	ctx.r30.u64 = PPC_LOAD_U16(ctx.r7.u32 + 28);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// extsh r9,r8
	ctx.r9.s64 = ctx.r8.s16;
	// and r8,r31,r11
	ctx.r8.u64 = ctx.r31.u64 & ctx.r11.u64;
	// andc r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ~ctx.r11.u64;
	// srawi r10,r9,15
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7FFF) != 0);
	ctx.r10.s64 = ctx.r9.s32 >> 15;
	// or r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 | ctx.r8.u64;
	// clrlwi r8,r10,31
	ctx.r8.u64 = ctx.r10.u32 & 0x1;
	// extsh r25,r11
	ctx.r25.s64 = ctx.r11.s16;
	// extsh r11,r30
	ctx.r11.s64 = ctx.r30.s16;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// srawi r10,r9,2
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r9.s32 >> 2;
	// beq cr6,0x82c3a670
	if (ctx.cr6.eq) goto loc_82C3A670;
	// neg r9,r10
	ctx.r9.s64 = -ctx.r10.s64;
	// clrlwi r10,r9,19
	ctx.r10.u64 = ctx.r9.u32 & 0x1FFF;
loc_82C3A670:
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// subfic r9,r9,32
	ctx.xer.ca = ctx.r9.u32 <= 32;
	ctx.r9.s64 = 32 - ctx.r9.s64;
	// bne cr6,0x82c3a688
	if (!ctx.cr6.eq) goto loc_82C3A688;
	// li r10,32
	ctx.r10.s64 = 32;
	// b 0x82c3a690
	goto loc_82C3A690;
loc_82C3A688:
	// rlwinm r10,r10,6,0,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 6) & 0xFFFFFFC0;
	// sraw r10,r10,r9
	temp.u32 = ctx.r9.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r10.s32 < 0) & (((ctx.r10.s32 >> temp.u32) << temp.u32) != ctx.r10.s32);
	ctx.r10.s64 = ctx.r10.s32 >> temp.u32;
loc_82C3A690:
	// srawi r31,r11,10
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3FF) != 0);
	ctx.r31.s64 = ctx.r11.s32 >> 10;
	// clrlwi r30,r11,26
	ctx.r30.u64 = ctx.r11.u32 & 0x3F;
	// srawi r11,r11,6
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3F) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 6;
	// mullw r10,r30,r10
	ctx.r10.s64 = int64_t(ctx.r30.s32) * int64_t(ctx.r10.s32);
	// clrlwi r11,r11,28
	ctx.r11.u64 = ctx.r11.u32 & 0xF;
	// clrlwi r31,r31,31
	ctx.r31.u64 = ctx.r31.u32 & 0x1;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r10,r10,48
	ctx.r10.s64 = ctx.r10.s64 + 48;
	// xor r9,r31,r8
	ctx.r9.u64 = ctx.r31.u64 ^ ctx.r8.u64;
	// rlwinm r10,r10,3,0,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFF80;
	// cmpwi cr6,r11,26
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 26, ctx.xer);
	// bgt cr6,0x82c3a6cc
	if (ctx.cr6.gt) goto loc_82C3A6CC;
	// subfic r11,r11,26
	ctx.xer.ca = ctx.r11.u32 <= 26;
	ctx.r11.s64 = 26 - ctx.r11.s64;
	// sraw r10,r10,r11
	temp.u32 = ctx.r11.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r10.s32 < 0) & (((ctx.r10.s32 >> temp.u32) << temp.u32) != ctx.r10.s32);
	ctx.r10.s64 = ctx.r10.s32 >> temp.u32;
	// b 0x82c3a6d8
	goto loc_82C3A6D8;
loc_82C3A6CC:
	// addi r11,r11,-26
	ctx.r11.s64 = ctx.r11.s64 + -26;
	// slw r10,r10,r11
	ctx.r10.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r11.u8 & 0x3F));
	// clrlwi r10,r10,17
	ctx.r10.u64 = ctx.r10.u32 & 0x7FFF;
loc_82C3A6D8:
	// xori r11,r9,1
	ctx.r11.u64 = ctx.r9.u64 ^ 1;
	// lhz r8,12(r7)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r7.u32 + 12);
	// neg r31,r10
	ctx.r31.s64 = -ctx.r10.s64;
	// lhz r30,30(r7)
	ctx.r30.u64 = PPC_LOAD_U16(ctx.r7.u32 + 30);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// extsh r9,r8
	ctx.r9.s64 = ctx.r8.s16;
	// and r8,r31,r11
	ctx.r8.u64 = ctx.r31.u64 & ctx.r11.u64;
	// andc r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ~ctx.r11.u64;
	// srawi r10,r9,15
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7FFF) != 0);
	ctx.r10.s64 = ctx.r9.s32 >> 15;
	// or r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 | ctx.r11.u64;
	// clrlwi r8,r10,31
	ctx.r8.u64 = ctx.r10.u32 & 0x1;
	// extsh r27,r11
	ctx.r27.s64 = ctx.r11.s16;
	// extsh r11,r30
	ctx.r11.s64 = ctx.r30.s16;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// srawi r10,r9,2
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r9.s32 >> 2;
	// beq cr6,0x82c3a720
	if (ctx.cr6.eq) goto loc_82C3A720;
	// neg r9,r10
	ctx.r9.s64 = -ctx.r10.s64;
	// clrlwi r10,r9,19
	ctx.r10.u64 = ctx.r9.u32 & 0x1FFF;
loc_82C3A720:
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// subfic r9,r9,32
	ctx.xer.ca = ctx.r9.u32 <= 32;
	ctx.r9.s64 = 32 - ctx.r9.s64;
	// bne cr6,0x82c3a738
	if (!ctx.cr6.eq) goto loc_82C3A738;
	// li r10,32
	ctx.r10.s64 = 32;
	// b 0x82c3a740
	goto loc_82C3A740;
loc_82C3A738:
	// rlwinm r10,r10,6,0,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 6) & 0xFFFFFFC0;
	// sraw r10,r10,r9
	temp.u32 = ctx.r9.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r10.s32 < 0) & (((ctx.r10.s32 >> temp.u32) << temp.u32) != ctx.r10.s32);
	ctx.r10.s64 = ctx.r10.s32 >> temp.u32;
loc_82C3A740:
	// srawi r31,r11,10
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3FF) != 0);
	ctx.r31.s64 = ctx.r11.s32 >> 10;
	// clrlwi r30,r11,26
	ctx.r30.u64 = ctx.r11.u32 & 0x3F;
	// srawi r11,r11,6
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3F) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 6;
	// mullw r10,r30,r10
	ctx.r10.s64 = int64_t(ctx.r30.s32) * int64_t(ctx.r10.s32);
	// clrlwi r11,r11,28
	ctx.r11.u64 = ctx.r11.u32 & 0xF;
	// clrlwi r31,r31,31
	ctx.r31.u64 = ctx.r31.u32 & 0x1;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r10,r10,48
	ctx.r10.s64 = ctx.r10.s64 + 48;
	// xor r9,r31,r8
	ctx.r9.u64 = ctx.r31.u64 ^ ctx.r8.u64;
	// rlwinm r10,r10,3,0,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFF80;
	// cmpwi cr6,r11,26
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 26, ctx.xer);
	// bgt cr6,0x82c3a77c
	if (ctx.cr6.gt) goto loc_82C3A77C;
	// subfic r11,r11,26
	ctx.xer.ca = ctx.r11.u32 <= 26;
	ctx.r11.s64 = 26 - ctx.r11.s64;
	// sraw r10,r10,r11
	temp.u32 = ctx.r11.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r10.s32 < 0) & (((ctx.r10.s32 >> temp.u32) << temp.u32) != ctx.r10.s32);
	ctx.r10.s64 = ctx.r10.s32 >> temp.u32;
	// b 0x82c3a788
	goto loc_82C3A788;
loc_82C3A77C:
	// addi r11,r11,-26
	ctx.r11.s64 = ctx.r11.s64 + -26;
	// slw r10,r10,r11
	ctx.r10.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r11.u8 & 0x3F));
	// clrlwi r10,r10,17
	ctx.r10.u64 = ctx.r10.u32 & 0x7FFF;
loc_82C3A788:
	// xori r11,r9,1
	ctx.r11.u64 = ctx.r9.u64 ^ 1;
	// lhz r8,14(r7)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r7.u32 + 14);
	// neg r31,r10
	ctx.r31.s64 = -ctx.r10.s64;
	// lhz r30,32(r7)
	ctx.r30.u64 = PPC_LOAD_U16(ctx.r7.u32 + 32);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// extsh r9,r8
	ctx.r9.s64 = ctx.r8.s16;
	// and r8,r31,r11
	ctx.r8.u64 = ctx.r31.u64 & ctx.r11.u64;
	// andc r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ~ctx.r11.u64;
	// srawi r10,r9,15
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7FFF) != 0);
	ctx.r10.s64 = ctx.r9.s32 >> 15;
	// or r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 | ctx.r11.u64;
	// clrlwi r8,r10,31
	ctx.r8.u64 = ctx.r10.u32 & 0x1;
	// extsh r28,r11
	ctx.r28.s64 = ctx.r11.s16;
	// extsh r11,r30
	ctx.r11.s64 = ctx.r30.s16;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// srawi r10,r9,2
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r9.s32 >> 2;
	// beq cr6,0x82c3a7d0
	if (ctx.cr6.eq) goto loc_82C3A7D0;
	// neg r9,r10
	ctx.r9.s64 = -ctx.r10.s64;
	// clrlwi r10,r9,19
	ctx.r10.u64 = ctx.r9.u32 & 0x1FFF;
loc_82C3A7D0:
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// subfic r9,r9,32
	ctx.xer.ca = ctx.r9.u32 <= 32;
	ctx.r9.s64 = 32 - ctx.r9.s64;
	// bne cr6,0x82c3a7e8
	if (!ctx.cr6.eq) goto loc_82C3A7E8;
	// li r10,32
	ctx.r10.s64 = 32;
	// b 0x82c3a7f0
	goto loc_82C3A7F0;
loc_82C3A7E8:
	// rlwinm r10,r10,6,0,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 6) & 0xFFFFFFC0;
	// sraw r10,r10,r9
	temp.u32 = ctx.r9.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r10.s32 < 0) & (((ctx.r10.s32 >> temp.u32) << temp.u32) != ctx.r10.s32);
	ctx.r10.s64 = ctx.r10.s32 >> temp.u32;
loc_82C3A7F0:
	// srawi r31,r11,10
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3FF) != 0);
	ctx.r31.s64 = ctx.r11.s32 >> 10;
	// clrlwi r30,r11,26
	ctx.r30.u64 = ctx.r11.u32 & 0x3F;
	// srawi r11,r11,6
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3F) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 6;
	// mullw r10,r30,r10
	ctx.r10.s64 = int64_t(ctx.r30.s32) * int64_t(ctx.r10.s32);
	// clrlwi r11,r11,28
	ctx.r11.u64 = ctx.r11.u32 & 0xF;
	// clrlwi r31,r31,31
	ctx.r31.u64 = ctx.r31.u32 & 0x1;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r10,r10,48
	ctx.r10.s64 = ctx.r10.s64 + 48;
	// xor r9,r31,r8
	ctx.r9.u64 = ctx.r31.u64 ^ ctx.r8.u64;
	// rlwinm r10,r10,3,0,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFF80;
	// cmpwi cr6,r11,26
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 26, ctx.xer);
	// bgt cr6,0x82c3a82c
	if (ctx.cr6.gt) goto loc_82C3A82C;
	// subfic r11,r11,26
	ctx.xer.ca = ctx.r11.u32 <= 26;
	ctx.r11.s64 = 26 - ctx.r11.s64;
	// sraw r10,r10,r11
	temp.u32 = ctx.r11.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r10.s32 < 0) & (((ctx.r10.s32 >> temp.u32) << temp.u32) != ctx.r10.s32);
	ctx.r10.s64 = ctx.r10.s32 >> temp.u32;
	// b 0x82c3a838
	goto loc_82C3A838;
loc_82C3A82C:
	// addi r11,r11,-26
	ctx.r11.s64 = ctx.r11.s64 + -26;
	// slw r10,r10,r11
	ctx.r10.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r11.u8 & 0x3F));
	// clrlwi r10,r10,17
	ctx.r10.u64 = ctx.r10.u32 & 0x7FFF;
loc_82C3A838:
	// xori r11,r9,1
	ctx.r11.u64 = ctx.r9.u64 ^ 1;
	// lhz r8,16(r7)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r7.u32 + 16);
	// neg r31,r10
	ctx.r31.s64 = -ctx.r10.s64;
	// lhz r30,34(r7)
	ctx.r30.u64 = PPC_LOAD_U16(ctx.r7.u32 + 34);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// extsh r9,r8
	ctx.r9.s64 = ctx.r8.s16;
	// and r8,r31,r11
	ctx.r8.u64 = ctx.r31.u64 & ctx.r11.u64;
	// andc r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ~ctx.r11.u64;
	// srawi r10,r9,15
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7FFF) != 0);
	ctx.r10.s64 = ctx.r9.s32 >> 15;
	// or r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 | ctx.r11.u64;
	// clrlwi r8,r10,31
	ctx.r8.u64 = ctx.r10.u32 & 0x1;
	// extsh r29,r11
	ctx.r29.s64 = ctx.r11.s16;
	// extsh r11,r30
	ctx.r11.s64 = ctx.r30.s16;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// srawi r10,r9,2
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r9.s32 >> 2;
	// beq cr6,0x82c3a880
	if (ctx.cr6.eq) goto loc_82C3A880;
	// neg r9,r10
	ctx.r9.s64 = -ctx.r10.s64;
	// clrlwi r10,r9,19
	ctx.r10.u64 = ctx.r9.u32 & 0x1FFF;
loc_82C3A880:
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// subfic r9,r9,32
	ctx.xer.ca = ctx.r9.u32 <= 32;
	ctx.r9.s64 = 32 - ctx.r9.s64;
	// bne cr6,0x82c3a898
	if (!ctx.cr6.eq) goto loc_82C3A898;
	// li r10,32
	ctx.r10.s64 = 32;
	// b 0x82c3a8a0
	goto loc_82C3A8A0;
loc_82C3A898:
	// rlwinm r10,r10,6,0,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 6) & 0xFFFFFFC0;
	// sraw r10,r10,r9
	temp.u32 = ctx.r9.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r10.s32 < 0) & (((ctx.r10.s32 >> temp.u32) << temp.u32) != ctx.r10.s32);
	ctx.r10.s64 = ctx.r10.s32 >> temp.u32;
loc_82C3A8A0:
	// srawi r31,r11,10
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3FF) != 0);
	ctx.r31.s64 = ctx.r11.s32 >> 10;
	// clrlwi r30,r11,26
	ctx.r30.u64 = ctx.r11.u32 & 0x3F;
	// srawi r11,r11,6
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3F) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 6;
	// mullw r10,r30,r10
	ctx.r10.s64 = int64_t(ctx.r30.s32) * int64_t(ctx.r10.s32);
	// clrlwi r11,r11,28
	ctx.r11.u64 = ctx.r11.u32 & 0xF;
	// clrlwi r31,r31,31
	ctx.r31.u64 = ctx.r31.u32 & 0x1;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r10,r10,48
	ctx.r10.s64 = ctx.r10.s64 + 48;
	// xor r9,r31,r8
	ctx.r9.u64 = ctx.r31.u64 ^ ctx.r8.u64;
	// rlwinm r10,r10,3,0,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFF80;
	// cmpwi cr6,r11,26
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 26, ctx.xer);
	// bgt cr6,0x82c3a8dc
	if (ctx.cr6.gt) goto loc_82C3A8DC;
	// subfic r11,r11,26
	ctx.xer.ca = ctx.r11.u32 <= 26;
	ctx.r11.s64 = 26 - ctx.r11.s64;
	// sraw r10,r10,r11
	temp.u32 = ctx.r11.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r10.s32 < 0) & (((ctx.r10.s32 >> temp.u32) << temp.u32) != ctx.r10.s32);
	ctx.r10.s64 = ctx.r10.s32 >> temp.u32;
	// b 0x82c3a8e8
	goto loc_82C3A8E8;
loc_82C3A8DC:
	// addi r11,r11,-26
	ctx.r11.s64 = ctx.r11.s64 + -26;
	// slw r10,r10,r11
	ctx.r10.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r11.u8 & 0x3F));
	// clrlwi r10,r10,17
	ctx.r10.u64 = ctx.r10.u32 & 0x7FFF;
loc_82C3A8E8:
	// xori r11,r9,1
	ctx.r11.u64 = ctx.r9.u64 ^ 1;
	// lhz r8,18(r7)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r7.u32 + 18);
	// neg r31,r10
	ctx.r31.s64 = -ctx.r10.s64;
	// lhz r26,36(r7)
	ctx.r26.u64 = PPC_LOAD_U16(ctx.r7.u32 + 36);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// extsh r9,r8
	ctx.r9.s64 = ctx.r8.s16;
	// and r8,r31,r11
	ctx.r8.u64 = ctx.r31.u64 & ctx.r11.u64;
	// andc r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ~ctx.r11.u64;
	// srawi r10,r9,15
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7FFF) != 0);
	ctx.r10.s64 = ctx.r9.s32 >> 15;
	// or r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 | ctx.r11.u64;
	// clrlwi r8,r10,31
	ctx.r8.u64 = ctx.r10.u32 & 0x1;
	// extsh r30,r11
	ctx.r30.s64 = ctx.r11.s16;
	// extsh r11,r26
	ctx.r11.s64 = ctx.r26.s16;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// srawi r10,r9,2
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r9.s32 >> 2;
	// beq cr6,0x82c3a930
	if (ctx.cr6.eq) goto loc_82C3A930;
	// neg r9,r10
	ctx.r9.s64 = -ctx.r10.s64;
	// clrlwi r10,r9,19
	ctx.r10.u64 = ctx.r9.u32 & 0x1FFF;
loc_82C3A930:
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// subfic r31,r9,32
	ctx.xer.ca = ctx.r9.u32 <= 32;
	ctx.r31.s64 = 32 - ctx.r9.s64;
	// bne cr6,0x82c3a948
	if (!ctx.cr6.eq) goto loc_82C3A948;
	// li r10,32
	ctx.r10.s64 = 32;
	// b 0x82c3a950
	goto loc_82C3A950;
loc_82C3A948:
	// rlwinm r10,r10,6,0,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 6) & 0xFFFFFFC0;
	// sraw r10,r10,r31
	temp.u32 = ctx.r31.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r10.s32 < 0) & (((ctx.r10.s32 >> temp.u32) << temp.u32) != ctx.r10.s32);
	ctx.r10.s64 = ctx.r10.s32 >> temp.u32;
loc_82C3A950:
	// srawi r26,r11,10
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3FF) != 0);
	ctx.r26.s64 = ctx.r11.s32 >> 10;
	// clrlwi r9,r11,26
	ctx.r9.u64 = ctx.r11.u32 & 0x3F;
	// srawi r11,r11,6
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3F) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 6;
	// mullw r9,r9,r10
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r10.s32);
	// clrlwi r11,r11,28
	ctx.r11.u64 = ctx.r11.u32 & 0xF;
	// clrlwi r26,r26,31
	ctx.r26.u64 = ctx.r26.u32 & 0x1;
	// add r10,r11,r31
	ctx.r10.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r9,r9,48
	ctx.r9.s64 = ctx.r9.s64 + 48;
	// xor r11,r26,r8
	ctx.r11.u64 = ctx.r26.u64 ^ ctx.r8.u64;
	// rlwinm r9,r9,3,0,24
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFF80;
	// cmpwi cr6,r10,26
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 26, ctx.xer);
	// bgt cr6,0x82c3a98c
	if (ctx.cr6.gt) goto loc_82C3A98C;
	// subfic r10,r10,26
	ctx.xer.ca = ctx.r10.u32 <= 26;
	ctx.r10.s64 = 26 - ctx.r10.s64;
	// sraw r10,r9,r10
	temp.u32 = ctx.r10.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r9.s32 < 0) & (((ctx.r9.s32 >> temp.u32) << temp.u32) != ctx.r9.s32);
	ctx.r10.s64 = ctx.r9.s32 >> temp.u32;
	// b 0x82c3a998
	goto loc_82C3A998;
loc_82C3A98C:
	// addi r10,r10,-26
	ctx.r10.s64 = ctx.r10.s64 + -26;
	// slw r9,r9,r10
	ctx.r9.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r10.u8 & 0x3F));
	// clrlwi r10,r9,17
	ctx.r10.u64 = ctx.r9.u32 & 0x7FFF;
loc_82C3A998:
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// lhz r23,0(r7)
	ctx.r23.u64 = PPC_LOAD_U16(ctx.r7.u32 + 0);
	// neg r8,r10
	ctx.r8.s64 = -ctx.r10.s64;
	// lhz r26,42(r7)
	ctx.r26.u64 = PPC_LOAD_U16(ctx.r7.u32 + 42);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// extsh r9,r30
	ctx.r9.s64 = ctx.r30.s16;
	// andc r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 & ~ctx.r11.u64;
	// and r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 & ctx.r11.u64;
	// extsh r8,r29
	ctx.r8.s64 = ctx.r29.s16;
	// or r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 | ctx.r11.u64;
	// extsh r31,r28
	ctx.r31.s64 = ctx.r28.s16;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// extsh r30,r27
	ctx.r30.s64 = ctx.r27.s16;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// extsh r11,r23
	ctx.r11.s64 = ctx.r23.s16;
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + ctx.r31.u64;
	// srawi r9,r11,15
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFF) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 15;
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + ctx.r30.u64;
	// clrlwi r28,r9,31
	ctx.r28.u64 = ctx.r9.u32 & 0x1;
	// add r8,r10,r25
	ctx.r8.u64 = ctx.r10.u64 + ctx.r25.u64;
	// extsh r27,r26
	ctx.r27.s64 = ctx.r26.s16;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// extsh r30,r8
	ctx.r30.s64 = ctx.r8.s16;
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// beq cr6,0x82c3aa04
	if (ctx.cr6.eq) goto loc_82C3AA04;
	// neg r10,r11
	ctx.r10.s64 = -ctx.r11.s64;
	// clrlwi r11,r10,19
	ctx.r11.u64 = ctx.r10.u32 & 0x1FFF;
loc_82C3AA04:
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// subfic r9,r10,32
	ctx.xer.ca = ctx.r10.u32 <= 32;
	ctx.r9.s64 = 32 - ctx.r10.s64;
	// bne cr6,0x82c3aa1c
	if (!ctx.cr6.eq) goto loc_82C3AA1C;
	// li r10,32
	ctx.r10.s64 = 32;
	// b 0x82c3aa24
	goto loc_82C3AA24;
loc_82C3AA1C:
	// rlwinm r11,r11,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0xFFFFFFC0;
	// sraw r10,r11,r9
	temp.u32 = ctx.r9.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r11.s32 < 0) & (((ctx.r11.s32 >> temp.u32) << temp.u32) != ctx.r11.s32);
	ctx.r10.s64 = ctx.r11.s32 >> temp.u32;
loc_82C3AA24:
	// srawi r8,r27,10
	ctx.xer.ca = (ctx.r27.s32 < 0) & ((ctx.r27.u32 & 0x3FF) != 0);
	ctx.r8.s64 = ctx.r27.s32 >> 10;
	// srawi r11,r27,6
	ctx.xer.ca = (ctx.r27.s32 < 0) & ((ctx.r27.u32 & 0x3F) != 0);
	ctx.r11.s64 = ctx.r27.s32 >> 6;
	// clrlwi r31,r27,26
	ctx.r31.u64 = ctx.r27.u32 & 0x3F;
	// clrlwi r11,r11,28
	ctx.r11.u64 = ctx.r11.u32 & 0xF;
	// mullw r10,r31,r10
	ctx.r10.s64 = int64_t(ctx.r31.s32) * int64_t(ctx.r10.s32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// clrlwi r9,r8,31
	ctx.r9.u64 = ctx.r8.u32 & 0x1;
	// addi r8,r10,48
	ctx.r8.s64 = ctx.r10.s64 + 48;
	// xor r9,r9,r28
	ctx.r9.u64 = ctx.r9.u64 ^ ctx.r28.u64;
	// rlwinm r10,r8,3,0,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFF80;
	// cmpwi cr6,r11,26
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 26, ctx.xer);
	// bgt cr6,0x82c3aa60
	if (ctx.cr6.gt) goto loc_82C3AA60;
	// subfic r11,r11,26
	ctx.xer.ca = ctx.r11.u32 <= 26;
	ctx.r11.s64 = 26 - ctx.r11.s64;
	// sraw r10,r10,r11
	temp.u32 = ctx.r11.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r10.s32 < 0) & (((ctx.r10.s32 >> temp.u32) << temp.u32) != ctx.r10.s32);
	ctx.r10.s64 = ctx.r10.s32 >> temp.u32;
	// b 0x82c3aa6c
	goto loc_82C3AA6C;
loc_82C3AA60:
	// addi r11,r11,-26
	ctx.r11.s64 = ctx.r11.s64 + -26;
	// slw r10,r10,r11
	ctx.r10.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r11.u8 & 0x3F));
	// clrlwi r10,r10,17
	ctx.r10.u64 = ctx.r10.u32 & 0x7FFF;
loc_82C3AA6C:
	// xori r11,r9,1
	ctx.r11.u64 = ctx.r9.u64 ^ 1;
	// lhz r8,2(r7)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r7.u32 + 2);
	// neg r31,r10
	ctx.r31.s64 = -ctx.r10.s64;
	// lhz r29,44(r7)
	ctx.r29.u64 = PPC_LOAD_U16(ctx.r7.u32 + 44);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// extsh r9,r8
	ctx.r9.s64 = ctx.r8.s16;
	// and r8,r31,r11
	ctx.r8.u64 = ctx.r31.u64 & ctx.r11.u64;
	// andc r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ~ctx.r11.u64;
	// srawi r10,r9,15
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7FFF) != 0);
	ctx.r10.s64 = ctx.r9.s32 >> 15;
	// or r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 | ctx.r8.u64;
	// clrlwi r8,r10,31
	ctx.r8.u64 = ctx.r10.u32 & 0x1;
	// extsh r31,r11
	ctx.r31.s64 = ctx.r11.s16;
	// extsh r11,r29
	ctx.r11.s64 = ctx.r29.s16;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// srawi r10,r9,2
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r9.s32 >> 2;
	// beq cr6,0x82c3aab4
	if (ctx.cr6.eq) goto loc_82C3AAB4;
	// neg r9,r10
	ctx.r9.s64 = -ctx.r10.s64;
	// clrlwi r10,r9,19
	ctx.r10.u64 = ctx.r9.u32 & 0x1FFF;
loc_82C3AAB4:
	// cntlzw r9,r10
	ctx.r9.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// subfic r9,r9,32
	ctx.xer.ca = ctx.r9.u32 <= 32;
	ctx.r9.s64 = 32 - ctx.r9.s64;
	// bne cr6,0x82c3aacc
	if (!ctx.cr6.eq) goto loc_82C3AACC;
	// li r10,32
	ctx.r10.s64 = 32;
	// b 0x82c3aad4
	goto loc_82C3AAD4;
loc_82C3AACC:
	// rlwinm r10,r10,6,0,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 6) & 0xFFFFFFC0;
	// sraw r10,r10,r9
	temp.u32 = ctx.r9.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r10.s32 < 0) & (((ctx.r10.s32 >> temp.u32) << temp.u32) != ctx.r10.s32);
	ctx.r10.s64 = ctx.r10.s32 >> temp.u32;
loc_82C3AAD4:
	// srawi r29,r11,10
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3FF) != 0);
	ctx.r29.s64 = ctx.r11.s32 >> 10;
	// clrlwi r28,r11,26
	ctx.r28.u64 = ctx.r11.u32 & 0x3F;
	// srawi r11,r11,6
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3F) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 6;
	// mullw r10,r28,r10
	ctx.r10.s64 = int64_t(ctx.r28.s32) * int64_t(ctx.r10.s32);
	// clrlwi r11,r11,28
	ctx.r11.u64 = ctx.r11.u32 & 0xF;
	// clrlwi r29,r29,31
	ctx.r29.u64 = ctx.r29.u32 & 0x1;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r10,r10,48
	ctx.r10.s64 = ctx.r10.s64 + 48;
	// xor r9,r29,r8
	ctx.r9.u64 = ctx.r29.u64 ^ ctx.r8.u64;
	// rlwinm r10,r10,3,0,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFF80;
	// cmpwi cr6,r11,26
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 26, ctx.xer);
	// bgt cr6,0x82c3ab10
	if (ctx.cr6.gt) goto loc_82C3AB10;
	// subfic r11,r11,26
	ctx.xer.ca = ctx.r11.u32 <= 26;
	ctx.r11.s64 = 26 - ctx.r11.s64;
	// sraw r10,r10,r11
	temp.u32 = ctx.r11.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r10.s32 < 0) & (((ctx.r10.s32 >> temp.u32) << temp.u32) != ctx.r10.s32);
	ctx.r10.s64 = ctx.r10.s32 >> temp.u32;
	// b 0x82c3ab1c
	goto loc_82C3AB1C;
loc_82C3AB10:
	// addi r11,r11,-26
	ctx.r11.s64 = ctx.r11.s64 + -26;
	// slw r10,r10,r11
	ctx.r10.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r11.u8 & 0x3F));
	// clrlwi r10,r10,17
	ctx.r10.u64 = ctx.r10.u32 & 0x7FFF;
loc_82C3AB1C:
	// xori r11,r9,1
	ctx.r11.u64 = ctx.r9.u64 ^ 1;
	// lhz r9,4(r7)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r7.u32 + 4);
	// neg r29,r10
	ctx.r29.s64 = -ctx.r10.s64;
	// sth r26,44(r7)
	PPC_STORE_U16(ctx.r7.u32 + 44, ctx.r26.u16);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// extsh r8,r31
	ctx.r8.s64 = ctx.r31.s16;
	// andc r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 & ~ctx.r11.u64;
	// and r11,r29,r11
	ctx.r11.u64 = ctx.r29.u64 & ctx.r11.u64;
	// or r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 | ctx.r11.u64;
	// extsh r31,r30
	ctx.r31.s64 = ctx.r30.s16;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// srawi r22,r31,1
	ctx.xer.ca = (ctx.r31.s32 < 0) & ((ctx.r31.u32 & 0x1) != 0);
	ctx.r22.s64 = ctx.r31.s32 >> 1;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// cmpwi cr6,r8,256
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 256, ctx.xer);
	// srawi r23,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r23.s64 = ctx.r10.s32 >> 1;
	// bge cr6,0x82c3ab70
	if (!ctx.cr6.lt) goto loc_82C3AB70;
	// extsh r11,r9
	ctx.r11.s64 = ctx.r9.s16;
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// b 0x82c3ab74
	goto loc_82C3AB74;
loc_82C3AB70:
	// li r11,64
	ctx.r11.s64 = 64;
loc_82C3AB74:
	// lhz r10,52(r7)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r7.u32 + 52);
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// lhz r27,50(r7)
	ctx.r27.u64 = PPC_LOAD_U16(ctx.r7.u32 + 50);
	// subf r8,r27,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r27.s64;
	// extsh r11,r8
	ctx.r11.s64 = ctx.r8.s16;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// srawi r11,r11,15
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 15;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// xor r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// mullw r11,r8,r9
	ctx.r11.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r9.s32);
	// srawi r11,r11,6
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3F) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 6;
	// bge cr6,0x82c3abbc
	if (!ctx.cr6.lt) goto loc_82C3ABBC;
	// subf r9,r11,r27
	ctx.r9.s64 = ctx.r27.s64 - ctx.r11.s64;
	// extsh r29,r9
	ctx.r29.s64 = ctx.r9.s16;
	// b 0x82c3abc4
	goto loc_82C3ABC4;
loc_82C3ABBC:
	// add r11,r27,r11
	ctx.r11.u64 = ctx.r27.u64 + ctx.r11.u64;
	// extsh r29,r11
	ctx.r29.s64 = ctx.r11.s16;
loc_82C3ABC4:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82c3abd4
	if (ctx.cr6.eq) goto loc_82C3ABD4;
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
	// b 0x82c3ae4c
	goto loc_82C3AE4C;
loc_82C3ABD4:
	// subf r9,r23,r24
	ctx.r9.s64 = ctx.r24.s64 - ctx.r23.s64;
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// srawi r11,r8,15
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7FFF) != 0);
	ctx.r11.s64 = ctx.r8.s32 >> 15;
	// mr r30,r8
	ctx.r30.u64 = ctx.r8.u64;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// add r10,r8,r11
	ctx.r10.u64 = ctx.r8.u64 + ctx.r11.u64;
	// xor r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// ori r11,r8,1
	ctx.r11.u64 = ctx.r8.u64 | 1;
	// mr r31,r8
	ctx.r31.u64 = ctx.r8.u64;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// rlwinm r11,r10,17,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 17) & 0x1;
	// rlwinm r9,r10,18,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 18) & 0x1;
	// xor r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 ^ ctx.r11.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82c3ac1c
	if (ctx.cr6.eq) goto loc_82C3AC1C;
	// li r11,15
	ctx.r11.s64 = 15;
	// b 0x82c3ad64
	goto loc_82C3AD64;
loc_82C3AC1C:
	// rlwinm r9,r10,19,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 19) & 0x1;
	// xor r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 ^ ctx.r11.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82c3ac34
	if (ctx.cr6.eq) goto loc_82C3AC34;
	// li r11,14
	ctx.r11.s64 = 14;
	// b 0x82c3ad64
	goto loc_82C3AD64;
loc_82C3AC34:
	// rlwinm r9,r10,20,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 20) & 0x1;
	// xor r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 ^ ctx.r11.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82c3ac4c
	if (ctx.cr6.eq) goto loc_82C3AC4C;
	// li r11,13
	ctx.r11.s64 = 13;
	// b 0x82c3ad64
	goto loc_82C3AD64;
loc_82C3AC4C:
	// rlwinm r9,r10,21,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 21) & 0x1;
	// xor r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 ^ ctx.r11.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82c3ac64
	if (ctx.cr6.eq) goto loc_82C3AC64;
	// li r11,12
	ctx.r11.s64 = 12;
	// b 0x82c3ad64
	goto loc_82C3AD64;
loc_82C3AC64:
	// rlwinm r9,r10,22,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 22) & 0x1;
	// xor r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 ^ ctx.r11.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82c3ac7c
	if (ctx.cr6.eq) goto loc_82C3AC7C;
	// li r11,11
	ctx.r11.s64 = 11;
	// b 0x82c3ad64
	goto loc_82C3AD64;
loc_82C3AC7C:
	// rlwinm r9,r10,23,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 23) & 0x1;
	// xor r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 ^ ctx.r11.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82c3ac94
	if (ctx.cr6.eq) goto loc_82C3AC94;
	// li r11,10
	ctx.r11.s64 = 10;
	// b 0x82c3ad64
	goto loc_82C3AD64;
loc_82C3AC94:
	// rlwinm r9,r10,24,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0x1;
	// xor r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 ^ ctx.r11.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82c3acac
	if (ctx.cr6.eq) goto loc_82C3ACAC;
	// li r11,9
	ctx.r11.s64 = 9;
	// b 0x82c3ad64
	goto loc_82C3AD64;
loc_82C3ACAC:
	// rlwinm r9,r10,25,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 25) & 0x1;
	// xor r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 ^ ctx.r11.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82c3acc4
	if (ctx.cr6.eq) goto loc_82C3ACC4;
	// li r11,8
	ctx.r11.s64 = 8;
	// b 0x82c3ad64
	goto loc_82C3AD64;
loc_82C3ACC4:
	// rlwinm r9,r10,26,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 26) & 0x1;
	// xor r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 ^ ctx.r11.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82c3acdc
	if (ctx.cr6.eq) goto loc_82C3ACDC;
	// li r11,7
	ctx.r11.s64 = 7;
	// b 0x82c3ad64
	goto loc_82C3AD64;
loc_82C3ACDC:
	// rlwinm r9,r10,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// xor r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 ^ ctx.r11.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82c3acf4
	if (ctx.cr6.eq) goto loc_82C3ACF4;
	// li r11,6
	ctx.r11.s64 = 6;
	// b 0x82c3ad64
	goto loc_82C3AD64;
loc_82C3ACF4:
	// rlwinm r9,r10,28,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 28) & 0x1;
	// xor r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 ^ ctx.r11.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82c3ad0c
	if (ctx.cr6.eq) goto loc_82C3AD0C;
	// li r11,5
	ctx.r11.s64 = 5;
	// b 0x82c3ad64
	goto loc_82C3AD64;
loc_82C3AD0C:
	// rlwinm r9,r10,29,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x1;
	// xor r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 ^ ctx.r11.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82c3ad24
	if (ctx.cr6.eq) goto loc_82C3AD24;
	// li r11,4
	ctx.r11.s64 = 4;
	// b 0x82c3ad64
	goto loc_82C3AD64;
loc_82C3AD24:
	// rlwinm r9,r10,30,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x1;
	// xor r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 ^ ctx.r11.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82c3ad3c
	if (ctx.cr6.eq) goto loc_82C3AD3C;
	// li r11,3
	ctx.r11.s64 = 3;
	// b 0x82c3ad64
	goto loc_82C3AD64;
loc_82C3AD3C:
	// rlwinm r9,r10,31,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x1;
	// xor r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 ^ ctx.r11.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82c3ad54
	if (ctx.cr6.eq) goto loc_82C3AD54;
	// li r11,2
	ctx.r11.s64 = 2;
	// b 0x82c3ad64
	goto loc_82C3AD64;
loc_82C3AD54:
	// clrlwi r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	// xor r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// addic r11,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r11.s64 = ctx.r9.s64 + -1;
	// subfe r11,r11,r9
	temp.u8 = (~ctx.r11.u32 + ctx.r9.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
loc_82C3AD64:
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// subfic r11,r9,7
	ctx.xer.ca = ctx.r9.u32 <= 7;
	ctx.r11.s64 = 7 - ctx.r9.s64;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge cr6,0x82c3ad90
	if (!ctx.cr6.lt) goto loc_82C3AD90;
	// neg r11,r11
	ctx.r11.s64 = -ctx.r11.s64;
	// extsh r10,r8
	ctx.r10.s64 = ctx.r8.s16;
	// extsh r8,r11
	ctx.r8.s64 = ctx.r11.s16;
	// sraw r11,r10,r8
	temp.u32 = ctx.r8.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r10.s32 < 0) & (((ctx.r10.s32 >> temp.u32) << temp.u32) != ctx.r10.s32);
	ctx.r11.s64 = ctx.r10.s32 >> temp.u32;
	// b 0x82c3ad98
	goto loc_82C3AD98;
loc_82C3AD90:
	// slw r11,r31,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r31.u32 << (ctx.r11.u8 & 0x3F));
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
loc_82C3AD98:
	// rlwinm r10,r9,7,0,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 7) & 0xFFFFFF80;
	// extsh r9,r29
	ctx.r9.s64 = ctx.r29.s16;
	// extsh r8,r10
	ctx.r8.s64 = ctx.r10.s16;
	// srawi r9,r9,2
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 2;
	// clrlwi r10,r11,25
	ctx.r10.u64 = ctx.r11.u32 & 0x7F;
	// subf r11,r9,r8
	ctx.r11.s64 = ctx.r8.s64 - ctx.r9.s64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// cmpwi cr6,r11,-124
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -124, ctx.xer);
	// bge cr6,0x82c3adc8
	if (!ctx.cr6.lt) goto loc_82C3ADC8;
	// li r11,15
	ctx.r11.s64 = 15;
	// b 0x82c3ae30
	goto loc_82C3AE30;
loc_82C3ADC8:
	// cmpwi cr6,r11,80
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 80, ctx.xer);
	// blt cr6,0x82c3ae2c
	if (ctx.cr6.lt) goto loc_82C3AE2C;
	// cmpwi cr6,r11,178
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 178, ctx.xer);
	// bge cr6,0x82c3ade0
	if (!ctx.cr6.lt) goto loc_82C3ADE0;
	// li r11,2
	ctx.r11.s64 = 2;
	// b 0x82c3ae30
	goto loc_82C3AE30;
loc_82C3ADE0:
	// cmpwi cr6,r11,246
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 246, ctx.xer);
	// bge cr6,0x82c3adf0
	if (!ctx.cr6.lt) goto loc_82C3ADF0;
	// li r11,3
	ctx.r11.s64 = 3;
	// b 0x82c3ae30
	goto loc_82C3AE30;
loc_82C3ADF0:
	// cmpwi cr6,r11,300
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 300, ctx.xer);
	// bge cr6,0x82c3ae00
	if (!ctx.cr6.lt) goto loc_82C3AE00;
	// li r11,4
	ctx.r11.s64 = 4;
	// b 0x82c3ae30
	goto loc_82C3AE30;
loc_82C3AE00:
	// cmpwi cr6,r11,349
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 349, ctx.xer);
	// bge cr6,0x82c3ae10
	if (!ctx.cr6.lt) goto loc_82C3AE10;
	// li r11,5
	ctx.r11.s64 = 5;
	// b 0x82c3ae30
	goto loc_82C3AE30;
loc_82C3AE10:
	// cmpwi cr6,r11,400
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 400, ctx.xer);
	// bge cr6,0x82c3ae20
	if (!ctx.cr6.lt) goto loc_82C3AE20;
	// li r11,6
	ctx.r11.s64 = 6;
	// b 0x82c3ae30
	goto loc_82C3AE30;
loc_82C3AE20:
	// cmpwi cr6,r11,2048
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2048, ctx.xer);
	// li r11,7
	ctx.r11.s64 = 7;
	// blt cr6,0x82c3ae30
	if (ctx.cr6.lt) goto loc_82C3AE30;
loc_82C3AE2C:
	// li r11,1
	ctx.r11.s64 = 1;
loc_82C3AE30:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge cr6,0x82c3ae4c
	if (!ctx.cr6.lt) goto loc_82C3AE4C;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// cmpwi cr6,r10,15
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 15, ctx.xer);
	// beq cr6,0x82c3ae4c
	if (ctx.cr6.eq) goto loc_82C3AE4C;
	// not r11,r10
	ctx.r11.u64 = ~ctx.r10.u64;
	// clrlwi r11,r11,28
	ctx.r11.u64 = ctx.r11.u32 & 0xF;
loc_82C3AE4C:
	// extsh r26,r11
	ctx.r26.s64 = ctx.r11.s16;
	// srawi. r25,r26,3
	ctx.xer.ca = (ctx.r26.s32 < 0) & ((ctx.r26.u32 & 0x7) != 0);
	ctx.r25.s64 = ctx.r26.s32 >> 3;
	ctx.cr0.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// beq 0x82c3ae60
	if (ctx.cr0.eq) goto loc_82C3AE60;
	// xori r11,r26,15
	ctx.r11.u64 = ctx.r26.u64 ^ 15;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
loc_82C3AE60:
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// extsh r10,r29
	ctx.r10.s64 = ctx.r29.s16;
	// rlwinm r21,r11,1,0,30
	ctx.r21.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// srawi r10,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 2;
	// lhzx r11,r21,r18
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r21.u32 + ctx.r18.u32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r8,r11,0,21,24
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x780;
	// clrlwi r10,r11,25
	ctx.r10.u64 = ctx.r11.u32 & 0x7F;
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// srawi r11,r8,7
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7F) != 0);
	ctx.r11.s64 = ctx.r8.s32 >> 7;
	// addi r10,r10,128
	ctx.r10.s64 = ctx.r10.s64 + 128;
	// addi r11,r11,-7
	ctx.r11.s64 = ctx.r11.s64 + -7;
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge cr6,0x82c3aeb4
	if (!ctx.cr6.lt) goto loc_82C3AEB4;
	// neg r11,r11
	ctx.r11.s64 = -ctx.r11.s64;
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// extsh r8,r11
	ctx.r8.s64 = ctx.r11.s16;
	// sraw r8,r10,r8
	temp.u32 = ctx.r8.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r10.s32 < 0) & (((ctx.r10.s32 >> temp.u32) << temp.u32) != ctx.r10.s32);
	ctx.r8.s64 = ctx.r10.s32 >> temp.u32;
	// b 0x82c3aec0
	goto loc_82C3AEC0;
loc_82C3AEB4:
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// slw r8,r10,r11
	ctx.r8.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r11.u8 & 0x3F));
	// extsh r8,r8
	ctx.r8.s64 = ctx.r8.s16;
loc_82C3AEC0:
	// rlwinm r31,r27,0,23,27
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 0) & 0x1F0;
	// extsh r11,r27
	ctx.r11.s64 = ctx.r27.s16;
	// rlwinm r10,r9,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x1;
	// srawi r11,r11,9
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1FF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 9;
	// mr r9,r31
	ctx.r9.u64 = ctx.r31.u64;
	// addi r31,r10,-1
	ctx.r31.s64 = ctx.r10.s64 + -1;
	// srawi r10,r9,4
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xF) != 0);
	ctx.r10.s64 = ctx.r9.s32 >> 4;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// and r30,r31,r8
	ctx.r30.u64 = ctx.r31.u64 & ctx.r8.u64;
	// addi r10,r10,32
	ctx.r10.s64 = ctx.r10.s64 + 32;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge cr6,0x82c3af04
	if (!ctx.cr6.lt) goto loc_82C3AF04;
	// neg r9,r11
	ctx.r9.s64 = -ctx.r11.s64;
	// extsh r8,r10
	ctx.r8.s64 = ctx.r10.s16;
	// extsh r10,r9
	ctx.r10.s64 = ctx.r9.s16;
	// sraw r10,r8,r10
	temp.u32 = ctx.r10.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r8.s32 < 0) & (((ctx.r8.s32 >> temp.u32) << temp.u32) != ctx.r8.s32);
	ctx.r10.s64 = ctx.r8.s32 >> temp.u32;
	// b 0x82c3af10
	goto loc_82C3AF10;
loc_82C3AF04:
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// slw r9,r10,r11
	ctx.r9.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r11.u8 & 0x3F));
	// extsh r10,r9
	ctx.r10.s64 = ctx.r9.s16;
loc_82C3AF10:
	// cmpwi cr6,r11,8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 8, ctx.xer);
	// li r11,15872
	ctx.r11.s64 = 15872;
	// bgt cr6,0x82c3af20
	if (ctx.cr6.gt) goto loc_82C3AF20;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_82C3AF20:
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// extsh r28,r30
	ctx.r28.s64 = ctx.r30.s16;
	// srawi r10,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 1;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// srawi r10,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 1;
	// extsh r8,r10
	ctx.r8.s64 = ctx.r10.s16;
	// cmpw cr6,r28,r8
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r8.s32, ctx.xer);
	// ble cr6,0x82c3af50
	if (!ctx.cr6.gt) goto loc_82C3AF50;
	// lhz r11,46(r7)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r7.u32 + 46);
	// li r24,-1
	ctx.r24.s64 = -1;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x82c3af54
	if (ctx.cr6.eq) goto loc_82C3AF54;
loc_82C3AF50:
	// li r24,0
	ctx.r24.s64 = 0;
loc_82C3AF54:
	// lhzx r11,r21,r15
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r21.u32 + ctx.r15.u32);
	// extsh r20,r29
	ctx.r20.s64 = ctx.r29.s16;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// rlwinm r9,r10,5,0,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 5) & 0xFFFFFFE0;
	// subf r8,r20,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r20.s64;
	// srawi r11,r8,5
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1F) != 0);
	ctx.r11.s64 = ctx.r8.s32 >> 5;
	// add r11,r11,r20
	ctx.r11.u64 = ctx.r11.u64 + ctx.r20.u64;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,544
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 544, ctx.xer);
	// bge cr6,0x82c3af88
	if (!ctx.cr6.lt) goto loc_82C3AF88;
	// li r11,544
	ctx.r11.s64 = 544;
	// b 0x82c3af94
	goto loc_82C3AF94;
loc_82C3AF88:
	// cmpwi cr6,r10,5120
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 5120, ctx.xer);
	// blt cr6,0x82c3af94
	if (ctx.cr6.lt) goto loc_82C3AF94;
	// li r11,5120
	ctx.r11.s64 = 5120;
loc_82C3AF94:
	// lhz r10,48(r7)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r7.u32 + 48);
	// extsh r9,r27
	ctx.r9.s64 = ctx.r27.s16;
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// sth r11,52(r7)
	PPC_STORE_U16(ctx.r7.u32 + 52, ctx.r11.u16);
	// rlwinm r9,r9,6,0,25
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 6) & 0xFFFFFFC0;
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// rlwinm r11,r30,17,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 17) & 0x1;
	// add r8,r10,r9
	ctx.r8.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r29,r28,18,31,31
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 18) & 0x1;
	// neg r8,r8
	ctx.r8.s64 = -ctx.r8.s64;
	// xor r29,r29,r11
	ctx.r29.u64 = ctx.r29.u64 ^ ctx.r11.u64;
	// srawi r8,r8,6
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3F) != 0);
	ctx.r8.s64 = ctx.r8.s32 >> 6;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// add r8,r8,r31
	ctx.r8.u64 = ctx.r8.u64 + ctx.r31.u64;
	// extsh r8,r8
	ctx.r8.s64 = ctx.r8.s16;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// srawi r9,r10,6
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3F) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 6;
	// clrlwi r8,r10,26
	ctx.r8.u64 = ctx.r10.u32 & 0x3F;
	// sth r9,50(r7)
	PPC_STORE_U16(ctx.r7.u32 + 50, ctx.r9.u16);
	// sth r8,48(r7)
	PPC_STORE_U16(ctx.r7.u32 + 48, ctx.r8.u16);
	// beq cr6,0x82c3aff4
	if (ctx.cr6.eq) goto loc_82C3AFF4;
	// li r11,15
	ctx.r11.s64 = 15;
	// b 0x82c3b13c
	goto loc_82C3B13C;
loc_82C3AFF4:
	// rlwinm r10,r28,19,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 19) & 0x1;
	// xor r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82c3b00c
	if (ctx.cr6.eq) goto loc_82C3B00C;
	// li r11,14
	ctx.r11.s64 = 14;
	// b 0x82c3b13c
	goto loc_82C3B13C;
loc_82C3B00C:
	// rlwinm r10,r28,20,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 20) & 0x1;
	// xor r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82c3b024
	if (ctx.cr6.eq) goto loc_82C3B024;
	// li r11,13
	ctx.r11.s64 = 13;
	// b 0x82c3b13c
	goto loc_82C3B13C;
loc_82C3B024:
	// rlwinm r10,r28,21,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 21) & 0x1;
	// xor r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82c3b03c
	if (ctx.cr6.eq) goto loc_82C3B03C;
	// li r11,12
	ctx.r11.s64 = 12;
	// b 0x82c3b13c
	goto loc_82C3B13C;
loc_82C3B03C:
	// rlwinm r10,r28,22,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 22) & 0x1;
	// xor r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82c3b054
	if (ctx.cr6.eq) goto loc_82C3B054;
	// li r11,11
	ctx.r11.s64 = 11;
	// b 0x82c3b13c
	goto loc_82C3B13C;
loc_82C3B054:
	// rlwinm r10,r28,23,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 23) & 0x1;
	// xor r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82c3b06c
	if (ctx.cr6.eq) goto loc_82C3B06C;
	// li r11,10
	ctx.r11.s64 = 10;
	// b 0x82c3b13c
	goto loc_82C3B13C;
loc_82C3B06C:
	// rlwinm r10,r28,24,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 24) & 0x1;
	// xor r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82c3b084
	if (ctx.cr6.eq) goto loc_82C3B084;
	// li r11,9
	ctx.r11.s64 = 9;
	// b 0x82c3b13c
	goto loc_82C3B13C;
loc_82C3B084:
	// rlwinm r10,r28,25,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 25) & 0x1;
	// xor r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82c3b09c
	if (ctx.cr6.eq) goto loc_82C3B09C;
	// li r11,8
	ctx.r11.s64 = 8;
	// b 0x82c3b13c
	goto loc_82C3B13C;
loc_82C3B09C:
	// rlwinm r10,r28,26,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 26) & 0x1;
	// xor r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82c3b0b4
	if (ctx.cr6.eq) goto loc_82C3B0B4;
	// li r11,7
	ctx.r11.s64 = 7;
	// b 0x82c3b13c
	goto loc_82C3B13C;
loc_82C3B0B4:
	// rlwinm r10,r28,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 27) & 0x1;
	// xor r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82c3b0cc
	if (ctx.cr6.eq) goto loc_82C3B0CC;
	// li r11,6
	ctx.r11.s64 = 6;
	// b 0x82c3b13c
	goto loc_82C3B13C;
loc_82C3B0CC:
	// rlwinm r10,r28,28,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 28) & 0x1;
	// xor r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82c3b0e4
	if (ctx.cr6.eq) goto loc_82C3B0E4;
	// li r11,5
	ctx.r11.s64 = 5;
	// b 0x82c3b13c
	goto loc_82C3B13C;
loc_82C3B0E4:
	// rlwinm r10,r28,29,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 29) & 0x1;
	// xor r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82c3b0fc
	if (ctx.cr6.eq) goto loc_82C3B0FC;
	// li r11,4
	ctx.r11.s64 = 4;
	// b 0x82c3b13c
	goto loc_82C3B13C;
loc_82C3B0FC:
	// rlwinm r10,r28,30,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 30) & 0x1;
	// xor r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82c3b114
	if (ctx.cr6.eq) goto loc_82C3B114;
	// li r11,3
	ctx.r11.s64 = 3;
	// b 0x82c3b13c
	goto loc_82C3B13C;
loc_82C3B114:
	// rlwinm r10,r28,31,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 31) & 0x1;
	// xor r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82c3b12c
	if (ctx.cr6.eq) goto loc_82C3B12C;
	// li r11,2
	ctx.r11.s64 = 2;
	// b 0x82c3b13c
	goto loc_82C3B13C;
loc_82C3B12C:
	// clrlwi r10,r28,31
	ctx.r10.u64 = ctx.r28.u32 & 0x1;
	// xor r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// addic r8,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r8.s64 = ctx.r9.s64 + -1;
	// subfe r11,r8,r9
	temp.u8 = (~ctx.r8.u32 + ctx.r9.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r8.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
loc_82C3B13C:
	// extsh r8,r11
	ctx.r8.s64 = ctx.r11.s16;
	// subfic r11,r8,6
	ctx.xer.ca = ctx.r8.u32 <= 6;
	ctx.r11.s64 = 6 - ctx.r8.s64;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge cr6,0x82c3b164
	if (!ctx.cr6.lt) goto loc_82C3B164;
	// neg r11,r11
	ctx.r11.s64 = -ctx.r11.s64;
	// extsh r10,r30
	ctx.r10.s64 = ctx.r30.s16;
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// sraw r11,r10,r9
	temp.u32 = ctx.r9.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r10.s32 < 0) & (((ctx.r10.s32 >> temp.u32) << temp.u32) != ctx.r10.s32);
	ctx.r11.s64 = ctx.r10.s32 >> temp.u32;
	// b 0x82c3b16c
	goto loc_82C3B16C;
loc_82C3B164:
	// slw r11,r28,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r28.u32 << (ctx.r11.u8 & 0x3F));
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
loc_82C3B16C:
	// ori r10,r11,32
	ctx.r10.u64 = ctx.r11.u64 | 32;
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// extsh r9,r10
	ctx.r9.s64 = ctx.r10.s16;
	// beq cr6,0x82c3b194
	if (ctx.cr6.eq) goto loc_82C3B194;
	// subf r11,r28,r22
	ctx.r11.s64 = ctx.r22.s64 - ctx.r28.s64;
	// subf r31,r28,r23
	ctx.r31.s64 = ctx.r23.s64 - ctx.r28.s64;
	// extsh r27,r11
	ctx.r27.s64 = ctx.r11.s16;
	// mr r10,r17
	ctx.r10.u64 = ctx.r17.u64;
	// extsh r11,r31
	ctx.r11.s64 = ctx.r31.s16;
	// b 0x82c3b1a8
	goto loc_82C3B1A8;
loc_82C3B194:
	// add r31,r22,r28
	ctx.r31.u64 = ctx.r22.u64 + ctx.r28.u64;
	// add r11,r23,r28
	ctx.r11.u64 = ctx.r23.u64 + ctx.r28.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// extsh r27,r31
	ctx.r27.s64 = ctx.r31.s16;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
loc_82C3B1A8:
	// extsh r30,r11
	ctx.r30.s64 = ctx.r11.s16;
	// extsh r25,r11
	ctx.r25.s64 = ctx.r11.s16;
	// addi r11,r30,-8191
	ctx.r11.s64 = ctx.r30.s64 + -8191;
	// extsh r29,r10
	ctx.r29.s64 = ctx.r10.s16;
	// srawi r11,r11,16
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFFFF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 16;
	// extsh r31,r9
	ctx.r31.s64 = ctx.r9.s16;
	// not r10,r11
	ctx.r10.u64 = ~ctx.r11.u64;
	// and r9,r11,r30
	ctx.r9.u64 = ctx.r11.u64 & ctx.r30.u64;
	// clrlwi r11,r10,19
	ctx.r11.u64 = ctx.r10.u32 & 0x1FFF;
	// rlwinm r8,r8,6,0,25
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 6) & 0xFFFFFFC0;
	// or r10,r9,r11
	ctx.r10.u64 = ctx.r9.u64 | ctx.r11.u64;
	// and r26,r5,r26
	ctx.r26.u64 = ctx.r5.u64 & ctx.r26.u64;
	// addi r9,r10,8192
	ctx.r9.s64 = ctx.r10.s64 + 8192;
	// srawi r11,r9,16
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xFFFF) != 0);
	ctx.r11.s64 = ctx.r9.s32 >> 16;
	// srawi r9,r25,15
	ctx.xer.ca = (ctx.r25.s32 < 0) & ((ctx.r25.u32 & 0x7FFF) != 0);
	ctx.r9.s64 = ctx.r25.s32 >> 15;
	// andc r25,r10,r11
	ctx.r25.u64 = ctx.r10.u64 & ~ctx.r11.u64;
	// extsh r10,r9
	ctx.r10.s64 = ctx.r9.s16;
	// rlwinm r11,r11,0,0,18
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFE000;
	// add r9,r10,r30
	ctx.r9.u64 = ctx.r10.u64 + ctx.r30.u64;
	// or r11,r25,r11
	ctx.r11.u64 = ctx.r25.u64 | ctx.r11.u64;
	// xor r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 ^ ctx.r10.u64;
	// add r10,r8,r31
	ctx.r10.u64 = ctx.r8.u64 + ctx.r31.u64;
	// extsh r9,r9
	ctx.r9.s64 = ctx.r9.s16;
	// and r8,r11,r6
	ctx.r8.u64 = ctx.r11.u64 & ctx.r6.u64;
	// rlwinm r31,r9,18,31,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 18) & 0x1;
	// rlwinm r11,r9,17,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 17) & 0x1;
	// add r25,r10,r29
	ctx.r25.u64 = ctx.r10.u64 + ctx.r29.u64;
	// xor r23,r31,r11
	ctx.r23.u64 = ctx.r31.u64 ^ ctx.r11.u64;
	// or r8,r8,r26
	ctx.r8.u64 = ctx.r8.u64 | ctx.r26.u64;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// extsh r31,r25
	ctx.r31.s64 = ctx.r25.s16;
	// extsh r26,r8
	ctx.r26.s64 = ctx.r8.s16;
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// beq cr6,0x82c3b238
	if (ctx.cr6.eq) goto loc_82C3B238;
	// li r11,15
	ctx.r11.s64 = 15;
	// b 0x82c3b380
	goto loc_82C3B380;
loc_82C3B238:
	// rlwinm r8,r10,19,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 19) & 0x1;
	// xor r8,r8,r11
	ctx.r8.u64 = ctx.r8.u64 ^ ctx.r11.u64;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82c3b250
	if (ctx.cr6.eq) goto loc_82C3B250;
	// li r11,14
	ctx.r11.s64 = 14;
	// b 0x82c3b380
	goto loc_82C3B380;
loc_82C3B250:
	// rlwinm r8,r10,20,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 20) & 0x1;
	// xor r8,r8,r11
	ctx.r8.u64 = ctx.r8.u64 ^ ctx.r11.u64;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82c3b268
	if (ctx.cr6.eq) goto loc_82C3B268;
	// li r11,13
	ctx.r11.s64 = 13;
	// b 0x82c3b380
	goto loc_82C3B380;
loc_82C3B268:
	// rlwinm r8,r10,21,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 21) & 0x1;
	// xor r8,r8,r11
	ctx.r8.u64 = ctx.r8.u64 ^ ctx.r11.u64;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82c3b280
	if (ctx.cr6.eq) goto loc_82C3B280;
	// li r11,12
	ctx.r11.s64 = 12;
	// b 0x82c3b380
	goto loc_82C3B380;
loc_82C3B280:
	// rlwinm r8,r10,22,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 22) & 0x1;
	// xor r8,r8,r11
	ctx.r8.u64 = ctx.r8.u64 ^ ctx.r11.u64;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82c3b298
	if (ctx.cr6.eq) goto loc_82C3B298;
	// li r11,11
	ctx.r11.s64 = 11;
	// b 0x82c3b380
	goto loc_82C3B380;
loc_82C3B298:
	// rlwinm r8,r10,23,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 23) & 0x1;
	// xor r8,r8,r11
	ctx.r8.u64 = ctx.r8.u64 ^ ctx.r11.u64;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82c3b2b0
	if (ctx.cr6.eq) goto loc_82C3B2B0;
	// li r11,10
	ctx.r11.s64 = 10;
	// b 0x82c3b380
	goto loc_82C3B380;
loc_82C3B2B0:
	// rlwinm r8,r10,24,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0x1;
	// xor r8,r8,r11
	ctx.r8.u64 = ctx.r8.u64 ^ ctx.r11.u64;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82c3b2c8
	if (ctx.cr6.eq) goto loc_82C3B2C8;
	// li r11,9
	ctx.r11.s64 = 9;
	// b 0x82c3b380
	goto loc_82C3B380;
loc_82C3B2C8:
	// rlwinm r8,r10,25,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 25) & 0x1;
	// xor r8,r8,r11
	ctx.r8.u64 = ctx.r8.u64 ^ ctx.r11.u64;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82c3b2e0
	if (ctx.cr6.eq) goto loc_82C3B2E0;
	// li r11,8
	ctx.r11.s64 = 8;
	// b 0x82c3b380
	goto loc_82C3B380;
loc_82C3B2E0:
	// rlwinm r8,r10,26,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 26) & 0x1;
	// xor r8,r8,r11
	ctx.r8.u64 = ctx.r8.u64 ^ ctx.r11.u64;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82c3b2f8
	if (ctx.cr6.eq) goto loc_82C3B2F8;
	// li r11,7
	ctx.r11.s64 = 7;
	// b 0x82c3b380
	goto loc_82C3B380;
loc_82C3B2F8:
	// rlwinm r8,r10,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// xor r8,r8,r11
	ctx.r8.u64 = ctx.r8.u64 ^ ctx.r11.u64;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82c3b310
	if (ctx.cr6.eq) goto loc_82C3B310;
	// li r11,6
	ctx.r11.s64 = 6;
	// b 0x82c3b380
	goto loc_82C3B380;
loc_82C3B310:
	// rlwinm r8,r10,28,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 28) & 0x1;
	// xor r8,r8,r11
	ctx.r8.u64 = ctx.r8.u64 ^ ctx.r11.u64;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82c3b328
	if (ctx.cr6.eq) goto loc_82C3B328;
	// li r11,5
	ctx.r11.s64 = 5;
	// b 0x82c3b380
	goto loc_82C3B380;
loc_82C3B328:
	// rlwinm r8,r10,29,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x1;
	// xor r8,r8,r11
	ctx.r8.u64 = ctx.r8.u64 ^ ctx.r11.u64;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82c3b340
	if (ctx.cr6.eq) goto loc_82C3B340;
	// li r11,4
	ctx.r11.s64 = 4;
	// b 0x82c3b380
	goto loc_82C3B380;
loc_82C3B340:
	// rlwinm r8,r10,30,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 30) & 0x1;
	// xor r8,r8,r11
	ctx.r8.u64 = ctx.r8.u64 ^ ctx.r11.u64;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82c3b358
	if (ctx.cr6.eq) goto loc_82C3B358;
	// li r11,3
	ctx.r11.s64 = 3;
	// b 0x82c3b380
	goto loc_82C3B380;
loc_82C3B358:
	// rlwinm r8,r10,31,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x1;
	// xor r8,r8,r11
	ctx.r8.u64 = ctx.r8.u64 ^ ctx.r11.u64;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82c3b370
	if (ctx.cr6.eq) goto loc_82C3B370;
	// li r11,2
	ctx.r11.s64 = 2;
	// b 0x82c3b380
	goto loc_82C3B380;
loc_82C3B370:
	// clrlwi r8,r10,31
	ctx.r8.u64 = ctx.r10.u32 & 0x1;
	// xor r11,r8,r11
	ctx.r11.u64 = ctx.r8.u64 ^ ctx.r11.u64;
	// addic r8,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// subfe r11,r8,r11
	temp.u8 = (~ctx.r8.u32 + ctx.r11.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r8.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
loc_82C3B380:
	// extsh r8,r11
	ctx.r8.s64 = ctx.r11.s16;
	// subfic r11,r8,6
	ctx.xer.ca = ctx.r8.u32 <= 6;
	ctx.r11.s64 = 6 - ctx.r8.s64;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge cr6,0x82c3b3a8
	if (!ctx.cr6.lt) goto loc_82C3B3A8;
	// neg r11,r11
	ctx.r11.s64 = -ctx.r11.s64;
	// extsh r10,r9
	ctx.r10.s64 = ctx.r9.s16;
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// sraw r11,r10,r9
	temp.u32 = ctx.r9.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r10.s32 < 0) & (((ctx.r10.s32 >> temp.u32) << temp.u32) != ctx.r10.s32);
	ctx.r11.s64 = ctx.r10.s32 >> temp.u32;
	// b 0x82c3b3b0
	goto loc_82C3B3B0;
loc_82C3B3A8:
	// slw r11,r10,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r11.u8 & 0x3F));
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
loc_82C3B3B0:
	// ori r9,r11,32
	ctx.r9.u64 = ctx.r11.u64 | 32;
	// rlwinm r10,r8,6,0,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 6) & 0xFFFFFFC0;
	// extsh r11,r9
	ctx.r11.s64 = ctx.r9.s16;
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// srawi r8,r30,31
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0x7FFFFFFF) != 0);
	ctx.r8.s64 = ctx.r30.s32 >> 31;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// and r10,r8,r17
	ctx.r10.u64 = ctx.r8.u64 & ctx.r17.u64;
	// subfic r9,r28,0
	ctx.xer.ca = ctx.r28.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r28.s64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// extsh r10,r24
	ctx.r10.s64 = ctx.r24.s16;
	// sth r11,42(r7)
	PPC_STORE_U16(ctx.r7.u32 + 42, ctx.r11.u16);
	// subfe r9,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r8.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// lhz r11,8(r7)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r7.u32 + 8);
	// not r8,r10
	ctx.r8.u64 = ~ctx.r10.u64;
	// lhz r10,26(r7)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r7.u32 + 26);
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// xor r25,r10,r29
	ctx.r25.u64 = ctx.r10.u64 ^ ctx.r29.u64;
	// and r10,r9,r16
	ctx.r10.u64 = ctx.r9.u64 & ctx.r16.u64;
	// extsh r30,r11
	ctx.r30.s64 = ctx.r11.s16;
	// extsh r28,r8
	ctx.r28.s64 = ctx.r8.s16;
	// srawi r9,r30,8
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0xFF) != 0);
	ctx.r9.s64 = ctx.r30.s32 >> 8;
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// bge cr6,0x82c3b41c
	if (!ctx.cr6.lt) goto loc_82C3B41C;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// extsh r9,r9
	ctx.r9.s64 = ctx.r9.s16;
	// b 0x82c3b424
	goto loc_82C3B424;
loc_82C3B41C:
	// subf r8,r10,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r10.s64;
	// extsh r9,r8
	ctx.r9.s64 = ctx.r8.s16;
loc_82C3B424:
	// extsh r9,r9
	ctx.r9.s64 = ctx.r9.s16;
	// lhz r25,28(r7)
	ctx.r25.u64 = PPC_LOAD_U16(ctx.r7.u32 + 28);
	// extsh r8,r11
	ctx.r8.s64 = ctx.r11.s16;
	// lhz r11,10(r7)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r7.u32 + 10);
	// extsh r30,r28
	ctx.r30.s64 = ctx.r28.s16;
	// subf r8,r9,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r9.s64;
	// extsh r9,r25
	ctx.r9.s64 = ctx.r25.s16;
	// and r8,r8,r30
	ctx.r8.u64 = ctx.r8.u64 & ctx.r30.u64;
	// xor r24,r9,r29
	ctx.r24.u64 = ctx.r9.u64 ^ ctx.r29.u64;
	// extsh r25,r11
	ctx.r25.s64 = ctx.r11.s16;
	// sth r8,8(r7)
	PPC_STORE_U16(ctx.r7.u32 + 8, ctx.r8.u16);
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// srawi r9,r25,8
	ctx.xer.ca = (ctx.r25.s32 < 0) & ((ctx.r25.u32 & 0xFF) != 0);
	ctx.r9.s64 = ctx.r25.s32 >> 8;
	// bge cr6,0x82c3b468
	if (!ctx.cr6.lt) goto loc_82C3B468;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// extsh r9,r9
	ctx.r9.s64 = ctx.r9.s16;
	// b 0x82c3b470
	goto loc_82C3B470;
loc_82C3B468:
	// subf r8,r10,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r10.s64;
	// extsh r9,r8
	ctx.r9.s64 = ctx.r8.s16;
loc_82C3B470:
	// lhz r8,30(r7)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r7.u32 + 30);
	// extsh r25,r9
	ctx.r25.s64 = ctx.r9.s16;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// lhz r9,12(r7)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r7.u32 + 12);
	// extsh r8,r8
	ctx.r8.s64 = ctx.r8.s16;
	// subf r11,r25,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r25.s64;
	// extsh r25,r9
	ctx.r25.s64 = ctx.r9.s16;
	// and r24,r11,r30
	ctx.r24.u64 = ctx.r11.u64 & ctx.r30.u64;
	// xor r8,r8,r29
	ctx.r8.u64 = ctx.r8.u64 ^ ctx.r29.u64;
	// srawi r11,r25,8
	ctx.xer.ca = (ctx.r25.s32 < 0) & ((ctx.r25.u32 & 0xFF) != 0);
	ctx.r11.s64 = ctx.r25.s32 >> 8;
	// sth r24,10(r7)
	PPC_STORE_U16(ctx.r7.u32 + 10, ctx.r24.u16);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bge cr6,0x82c3b4b0
	if (!ctx.cr6.lt) goto loc_82C3B4B0;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// b 0x82c3b4b8
	goto loc_82C3B4B8;
loc_82C3B4B0:
	// subf r8,r10,r11
	ctx.r8.s64 = ctx.r11.s64 - ctx.r10.s64;
	// extsh r11,r8
	ctx.r11.s64 = ctx.r8.s16;
loc_82C3B4B8:
	// lhz r25,32(r7)
	ctx.r25.u64 = PPC_LOAD_U16(ctx.r7.u32 + 32);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// lhz r9,14(r7)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r7.u32 + 14);
	// extsh r25,r25
	ctx.r25.s64 = ctx.r25.s16;
	// subf r8,r11,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r11.s64;
	// extsh r11,r9
	ctx.r11.s64 = ctx.r9.s16;
	// and r8,r8,r30
	ctx.r8.u64 = ctx.r8.u64 & ctx.r30.u64;
	// xor r25,r25,r29
	ctx.r25.u64 = ctx.r25.u64 ^ ctx.r29.u64;
	// srawi r11,r11,8
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 8;
	// sth r8,12(r7)
	PPC_STORE_U16(ctx.r7.u32 + 12, ctx.r8.u16);
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// bge cr6,0x82c3b4f8
	if (!ctx.cr6.lt) goto loc_82C3B4F8;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// b 0x82c3b500
	goto loc_82C3B500;
loc_82C3B4F8:
	// subf r8,r10,r11
	ctx.r8.s64 = ctx.r11.s64 - ctx.r10.s64;
	// extsh r11,r8
	ctx.r11.s64 = ctx.r8.s16;
loc_82C3B500:
	// lhz r25,34(r7)
	ctx.r25.u64 = PPC_LOAD_U16(ctx.r7.u32 + 34);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// lhz r9,16(r7)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r7.u32 + 16);
	// extsh r25,r25
	ctx.r25.s64 = ctx.r25.s16;
	// subf r8,r11,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r11.s64;
	// extsh r11,r9
	ctx.r11.s64 = ctx.r9.s16;
	// and r8,r8,r30
	ctx.r8.u64 = ctx.r8.u64 & ctx.r30.u64;
	// xor r25,r25,r29
	ctx.r25.u64 = ctx.r25.u64 ^ ctx.r29.u64;
	// srawi r11,r11,8
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 8;
	// sth r8,14(r7)
	PPC_STORE_U16(ctx.r7.u32 + 14, ctx.r8.u16);
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// bge cr6,0x82c3b540
	if (!ctx.cr6.lt) goto loc_82C3B540;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// b 0x82c3b548
	goto loc_82C3B548;
loc_82C3B540:
	// subf r8,r10,r11
	ctx.r8.s64 = ctx.r11.s64 - ctx.r10.s64;
	// extsh r11,r8
	ctx.r11.s64 = ctx.r8.s16;
loc_82C3B548:
	// lhz r25,36(r7)
	ctx.r25.u64 = PPC_LOAD_U16(ctx.r7.u32 + 36);
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// extsh r8,r9
	ctx.r8.s64 = ctx.r9.s16;
	// lhz r9,18(r7)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r7.u32 + 18);
	// extsh r25,r25
	ctx.r25.s64 = ctx.r25.s16;
	// subf r8,r11,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r11.s64;
	// extsh r11,r9
	ctx.r11.s64 = ctx.r9.s16;
	// and r8,r8,r30
	ctx.r8.u64 = ctx.r8.u64 & ctx.r30.u64;
	// xor r29,r25,r29
	ctx.r29.u64 = ctx.r25.u64 ^ ctx.r29.u64;
	// srawi r11,r11,8
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 8;
	// sth r8,16(r7)
	PPC_STORE_U16(ctx.r7.u32 + 16, ctx.r8.u16);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bge cr6,0x82c3b588
	if (!ctx.cr6.lt) goto loc_82C3B588;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// b 0x82c3b590
	goto loc_82C3B590;
loc_82C3B588:
	// subf r10,r10,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r10.s64;
	// extsh r11,r10
	ctx.r11.s64 = ctx.r10.s16;
loc_82C3B590:
	// extsh r10,r9
	ctx.r10.s64 = ctx.r9.s16;
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// extsh r8,r27
	ctx.r8.s64 = ctx.r27.s16;
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// and r9,r10,r30
	ctx.r9.u64 = ctx.r10.u64 & ctx.r30.u64;
	// sth r9,18(r7)
	PPC_STORE_U16(ctx.r7.u32 + 18, ctx.r9.u16);
	// lhz r9,26(r7)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r7.u32 + 26);
	// lhz r10,38(r7)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r7.u32 + 38);
	// lhz r29,28(r7)
	ctx.r29.u64 = PPC_LOAD_U16(ctx.r7.u32 + 28);
	// lhz r25,30(r7)
	ctx.r25.u64 = PPC_LOAD_U16(ctx.r7.u32 + 30);
	// lhz r24,32(r7)
	ctx.r24.u64 = PPC_LOAD_U16(ctx.r7.u32 + 32);
	// lhz r23,34(r7)
	ctx.r23.u64 = PPC_LOAD_U16(ctx.r7.u32 + 34);
	// lhz r22,40(r7)
	ctx.r22.u64 = PPC_LOAD_U16(ctx.r7.u32 + 40);
	// xor r11,r22,r27
	ctx.r11.u64 = ctx.r22.u64 ^ ctx.r27.u64;
	// sth r9,28(r7)
	PPC_STORE_U16(ctx.r7.u32 + 28, ctx.r9.u16);
	// xor r9,r10,r8
	ctx.r9.u64 = ctx.r10.u64 ^ ctx.r8.u64;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// sth r10,40(r7)
	PPC_STORE_U16(ctx.r7.u32 + 40, ctx.r10.u16);
	// sth r29,30(r7)
	PPC_STORE_U16(ctx.r7.u32 + 30, ctx.r29.u16);
	// extsh r9,r9
	ctx.r9.s64 = ctx.r9.s16;
	// sth r25,32(r7)
	PPC_STORE_U16(ctx.r7.u32 + 32, ctx.r25.u16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// sth r24,34(r7)
	PPC_STORE_U16(ctx.r7.u32 + 34, ctx.r24.u16);
	// li r10,-4096
	ctx.r10.s64 = -4096;
	// sth r23,36(r7)
	PPC_STORE_U16(ctx.r7.u32 + 36, ctx.r23.u16);
	// sth r31,26(r7)
	PPC_STORE_U16(ctx.r7.u32 + 26, ctx.r31.u16);
	// sth r27,38(r7)
	PPC_STORE_U16(ctx.r7.u32 + 38, ctx.r27.u16);
	// blt cr6,0x82c3b604
	if (ctx.cr6.lt) goto loc_82C3B604;
	// li r10,4096
	ctx.r10.s64 = 4096;
loc_82C3B604:
	// lhz r29,0(r7)
	ctx.r29.u64 = PPC_LOAD_U16(ctx.r7.u32 + 0);
	// extsh r11,r29
	ctx.r11.s64 = ctx.r29.s16;
	// cmpwi cr6,r11,-8191
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -8191, ctx.xer);
	// li r11,-8191
	ctx.r11.s64 = -8191;
	// blt cr6,0x82c3b61c
	if (ctx.cr6.lt) goto loc_82C3B61C;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
loc_82C3B61C:
	// extsh r31,r11
	ctx.r31.s64 = ctx.r11.s16;
	// cmpwi cr6,r31,8191
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 8191, ctx.xer);
	// blt cr6,0x82c3b62c
	if (ctx.cr6.lt) goto loc_82C3B62C;
	// li r11,8191
	ctx.r11.s64 = 8191;
loc_82C3B62C:
	// extsh r31,r9
	ctx.r31.s64 = ctx.r9.s16;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bge cr6,0x82c3b644
	if (!ctx.cr6.lt) goto loc_82C3B644;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// b 0x82c3b64c
	goto loc_82C3B64C;
loc_82C3B644:
	// subf r9,r11,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// extsh r11,r9
	ctx.r11.s64 = ctx.r9.s16;
loc_82C3B64C:
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x82c3b660
	if (!ctx.cr6.eq) goto loc_82C3B660;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// b 0x82c3b66c
	goto loc_82C3B66C;
loc_82C3B660:
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// li r9,192
	ctx.r9.s64 = 192;
	// srawi r11,r11,5
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1F) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 5;
loc_82C3B66C:
	// lhz r10,2(r7)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r7.u32 + 2);
	// extsh r8,r10
	ctx.r8.s64 = ctx.r10.s16;
	// srawi r8,r8,7
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7F) != 0);
	ctx.r8.s64 = ctx.r8.s32 >> 7;
	// subf r10,r8,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r8.s64;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// cmpwi cr6,r10,-12288
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -12288, ctx.xer);
	// bge cr6,0x82c3b690
	if (!ctx.cr6.lt) goto loc_82C3B690;
	// li r11,-12288
	ctx.r11.s64 = -12288;
loc_82C3B690:
	// extsh r10,r11
	ctx.r10.s64 = ctx.r11.s16;
	// cmpwi cr6,r10,12288
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 12288, ctx.xer);
	// blt cr6,0x82c3b6a0
	if (ctx.cr6.lt) goto loc_82C3B6A0;
	// li r11,12288
	ctx.r11.s64 = 12288;
loc_82C3B6A0:
	// extsh r8,r11
	ctx.r8.s64 = ctx.r11.s16;
	// extsh r11,r29
	ctx.r11.s64 = ctx.r29.s16;
	// and r10,r30,r8
	ctx.r10.u64 = ctx.r30.u64 & ctx.r8.u64;
	// srawi r11,r11,8
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 8;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// sth r10,2(r7)
	PPC_STORE_U16(ctx.r7.u32 + 2, ctx.r10.u16);
	// bge cr6,0x82c3b6c8
	if (!ctx.cr6.lt) goto loc_82C3B6C8;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// b 0x82c3b6d0
	goto loc_82C3B6D0;
loc_82C3B6C8:
	// subf r9,r9,r11
	ctx.r9.s64 = ctx.r11.s64 - ctx.r9.s64;
	// extsh r11,r9
	ctx.r11.s64 = ctx.r9.s16;
loc_82C3B6D0:
	// subfic r10,r8,15360
	ctx.xer.ca = ctx.r8.u32 <= 15360;
	ctx.r10.s64 = 15360 - ctx.r8.s64;
	// subf r9,r11,r29
	ctx.r9.s64 = ctx.r29.s64 - ctx.r11.s64;
	// extsh r10,r10
	ctx.r10.s64 = ctx.r10.s16;
	// extsh r11,r9
	ctx.r11.s64 = ctx.r9.s16;
	// neg r29,r10
	ctx.r29.s64 = -ctx.r10.s64;
	// mr r31,r10
	ctx.r31.u64 = ctx.r10.u64;
	// extsh r9,r29
	ctx.r9.s64 = ctx.r29.s16;
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// mr r27,r9
	ctx.r27.u64 = ctx.r9.u64;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x82c3b700
	if (!ctx.cr6.lt) goto loc_82C3B700;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_82C3B700:
	// extsh r9,r11
	ctx.r9.s64 = ctx.r11.s16;
	// cmpw cr6,r9,r31
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r31.s32, ctx.xer);
	// bge cr6,0x82c3b710
	if (!ctx.cr6.lt) goto loc_82C3B710;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
loc_82C3B710:
	// li r11,-11776
	ctx.r11.s64 = -11776;
	// lhz r9,22(r7)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r7.u32 + 22);
	// mr r31,r10
	ctx.r31.u64 = ctx.r10.u64;
	// lhz r10,20(r7)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r7.u32 + 20);
	// subfc r29,r11,r8
	ctx.xer.ca = ctx.r8.u32 >= ctx.r11.u32;
	ctx.r29.s64 = ctx.r8.s64 - ctx.r11.s64;
	// eqv r11,r11,r8
	ctx.r11.u64 = ~(ctx.r11.u64 ^ ctx.r8.u64);
	// and r8,r31,r30
	ctx.r8.u64 = ctx.r31.u64 & ctx.r30.u64;
	// rlwinm r11,r11,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// sth r8,0(r7)
	PPC_STORE_U16(ctx.r7.u32 + 0, ctx.r8.u16);
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// clrlwi r8,r11,31
	ctx.r8.u64 = ctx.r11.u32 & 0x1;
	// and r29,r8,r30
	ctx.r29.u64 = ctx.r8.u64 & ctx.r30.u64;
	// sth r29,46(r7)
	PPC_STORE_U16(ctx.r7.u32 + 46, ctx.r29.u16);
	// lhzx r29,r21,r19
	ctx.r29.u64 = PPC_LOAD_U16(ctx.r21.u32 + ctx.r19.u32);
	// extsh r29,r29
	ctx.r29.s64 = ctx.r29.s16;
	// subf r31,r9,r29
	ctx.r31.s64 = ctx.r29.s64 - ctx.r9.s64;
	// rlwinm r29,r29,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// extsh r31,r31
	ctx.r31.s64 = ctx.r31.s16;
	// subf r29,r10,r29
	ctx.r29.s64 = ctx.r29.s64 - ctx.r10.s64;
	// srawi r11,r31,5
	ctx.xer.ca = (ctx.r31.s32 < 0) & ((ctx.r31.u32 & 0x1F) != 0);
	ctx.r11.s64 = ctx.r31.s32 >> 5;
	// extsh r31,r29
	ctx.r31.s64 = ctx.r29.s16;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// srawi r9,r31,7
	ctx.xer.ca = (ctx.r31.s32 < 0) & ((ctx.r31.u32 & 0x7F) != 0);
	ctx.r9.s64 = ctx.r31.s32 >> 7;
	// extsh r31,r11
	ctx.r31.s64 = ctx.r11.s16;
	// sth r11,22(r7)
	PPC_STORE_U16(ctx.r7.u32 + 22, ctx.r11.u16);
	// add r11,r9,r10
	ctx.r11.u64 = ctx.r9.u64 + ctx.r10.u64;
	// rlwinm r10,r31,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// sth r11,20(r7)
	PPC_STORE_U16(ctx.r7.u32 + 20, ctx.r11.u16);
	// rlwinm r11,r11,29,19,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFF;
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// extsh r11,r10
	ctx.r11.s64 = ctx.r10.s16;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// srawi r11,r11,15
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 15;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// xor r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x82c3b7bc
	if (ctx.cr6.lt) goto loc_82C3B7BC;
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// b 0x82c3b7d8
	goto loc_82C3B7D8;
loc_82C3B7BC:
	// cmpwi cr6,r20,1536
	ctx.cr6.compare<int32_t>(ctx.r20.s32, 1536, ctx.xer);
	// bge cr6,0x82c3b7cc
	if (!ctx.cr6.lt) goto loc_82C3B7CC;
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// b 0x82c3b7d8
	goto loc_82C3B7D8;
loc_82C3B7CC:
	// subfic r11,r8,0
	ctx.xer.ca = ctx.r8.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r8.s64;
	// subfe r9,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r10,r9,r4
	ctx.r10.u64 = ctx.r9.u64 & ctx.r4.u64;
loc_82C3B7D8:
	// lhz r11,4(r7)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r7.u32 + 4);
	// not r9,r30
	ctx.r9.u64 = ~ctx.r30.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// subf r8,r11,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r11.s64;
	// rlwinm r9,r9,0,23,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x100;
	// extsh r10,r8
	ctx.r10.s64 = ctx.r8.s16;
	// srawi r10,r10,4
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xF) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 4;
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// and r11,r8,r28
	ctx.r11.u64 = ctx.r8.u64 & ctx.r28.u64;
	// or r10,r11,r9
	ctx.r10.u64 = ctx.r11.u64 | ctx.r9.u64;
	// sth r10,4(r7)
	PPC_STORE_U16(ctx.r7.u32 + 4, ctx.r10.u16);
	// beq cr6,0x82c3b820
	if (ctx.cr6.eq) goto loc_82C3B820;
	// lwz r10,36(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 36);
	// extsh r11,r26
	ctx.r11.s64 = ctx.r26.s16;
	// rlwinm r9,r14,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r14.u32 | (ctx.r14.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// sthx r8,r9,r10
	PPC_STORE_U16(ctx.r9.u32 + ctx.r10.u32, ctx.r8.u16);
	// b 0x82c3b854
	goto loc_82C3B854;
loc_82C3B820:
	// clrlwi r11,r14,31
	ctx.r11.u64 = ctx.r14.u32 & 0x1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82c3b838
	if (!ctx.cr6.eq) goto loc_82C3B838;
	// clrlwi r11,r26,28
	ctx.r11.u64 = ctx.r26.u32 & 0xF;
	// stb r11,-160(r1)
	PPC_STORE_U8(ctx.r1.u32 + -160, ctx.r11.u8);
	// b 0x82c3b854
	goto loc_82C3B854;
loc_82C3B838:
	// extsh r10,r26
	ctx.r10.s64 = ctx.r26.s16;
	// lbz r11,-160(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + -160);
	// lwz r9,36(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 36);
	// rlwinm r8,r14,31,1,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r14.u32 | (ctx.r14.u64 << 32), 31) & 0x7FFFFFFF;
	// rlwinm r10,r10,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// stbx r11,r8,r9
	PPC_STORE_U8(ctx.r8.u32 + ctx.r9.u32, ctx.r11.u8);
loc_82C3B854:
	// lwz r11,44(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 44);
	// addi r14,r14,1
	ctx.r14.s64 = ctx.r14.s64 + 1;
	// cmpw cr6,r14,r11
	ctx.cr6.compare<int32_t>(ctx.r14.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82c3a524
	if (ctx.cr6.lt) goto loc_82C3A524;
loc_82C3B864:
	// b 0x82fa7690
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C3B868"))) PPC_WEAK_FUNC(sub_82C3B868);
PPC_FUNC_IMPL(__imp__sub_82C3B868) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa766c
	ctx.lr = 0x82C3B870;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r8,136(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 136);
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r27,12(r3)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r26,r30
	ctx.r26.u64 = ctx.r30.u64;
	// mr r25,r30
	ctx.r25.u64 = ctx.r30.u64;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82c3b8cc
	if (ctx.cr6.eq) goto loc_82C3B8CC;
	// rotlwi r7,r8,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r8.u32, 0);
	// addi r10,r3,80
	ctx.r10.s64 = ctx.r3.s64 + 80;
loc_82C3B8A0:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r9,24(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 24);
	// lwz r9,24(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 24);
	// cmplw cr6,r26,r9
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r9.u32, ctx.xer);
	// ble cr6,0x82c3b8b8
	if (!ctx.cr6.gt) goto loc_82C3B8B8;
	// mr r9,r26
	ctx.r9.u64 = ctx.r26.u64;
loc_82C3B8B8:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// mr r26,r9
	ctx.r26.u64 = ctx.r9.u64;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplw cr6,r11,r7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, ctx.xer);
	// blt cr6,0x82c3b8a0
	if (ctx.cr6.lt) goto loc_82C3B8A0;
loc_82C3B8CC:
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82c3b914
	if (ctx.cr6.eq) goto loc_82C3B914;
	// lwz r8,136(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// addi r10,r31,80
	ctx.r10.s64 = ctx.r31.s64 + 80;
loc_82C3B8E0:
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// divwu r7,r26,r11
	ctx.r7.u32 = ctx.r26.u32 / ctx.r11.u32;
	// twllei r11,0
	if (ctx.r11.u32 <= 0) __builtin_debugtrap();
	// mullw r7,r7,r11
	ctx.r7.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r11.s32);
	// subf. r7,r7,r26
	ctx.r7.s64 = ctx.r26.s64 - ctx.r7.s64;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq 0x82c3b904
	if (ctx.cr0.eq) goto loc_82C3B904;
	// mullw r26,r11,r26
	ctx.r26.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r26.s32);
loc_82C3B904:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x82c3b8e0
	if (ctx.cr6.lt) goto loc_82C3B8E0;
loc_82C3B914:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mullw r28,r26,r27
	ctx.r28.s64 = int64_t(ctx.r26.s32) * int64_t(ctx.r27.s32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82c3b9e8
	if (!ctx.cr6.eq) goto loc_82C3B9E8;
	// lis r4,24714
	ctx.r4.s64 = 1619656704;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// ori r4,r4,8194
	ctx.r4.u64 = ctx.r4.u64 | 8194;
	// bl 0x82691410
	ctx.lr = 0x82C3B934;
	sub_82691410(ctx, base);
	// stw r3,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// lis r4,24970
	ctx.r4.s64 = 1636433920;
	// mulli r3,r27,28
	ctx.r3.s64 = ctx.r27.s64 * 28;
	// ori r4,r4,9
	ctx.r4.u64 = ctx.r4.u64 | 9;
	// bl 0x82691410
	ctx.lr = 0x82C3B948;
	sub_82691410(ctx, base);
	// stw r3,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r3.u32);
	// lis r4,24970
	ctx.r4.s64 = 1636433920;
	// rlwinm r3,r27,3,0,28
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 3) & 0xFFFFFFF8;
	// ori r4,r4,3
	ctx.r4.u64 = ctx.r4.u64 | 3;
	// bl 0x82691410
	ctx.lr = 0x82C3B95C;
	sub_82691410(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r3,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r3.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82c3b980
	if (ctx.cr6.eq) goto loc_82C3B980;
	// lwz r10,132(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82c3b980
	if (ctx.cr6.eq) goto loc_82C3B980;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82c3b9e8
	if (!ctx.cr6.eq) goto loc_82C3B9E8;
loc_82C3B980:
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// lis r25,-32761
	ctx.r25.s64 = -2147024896;
	// ori r25,r25,14
	ctx.r25.u64 = ctx.r25.u64 | 14;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82c3b9a4
	if (ctx.cr6.eq) goto loc_82C3B9A4;
	// lis r4,24970
	ctx.r4.s64 = 1636433920;
	// ori r4,r4,3
	ctx.r4.u64 = ctx.r4.u64 | 3;
	// bl 0x82691460
	ctx.lr = 0x82C3B9A0;
	sub_82691460(ctx, base);
	// stw r30,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r30.u32);
loc_82C3B9A4:
	// lwz r3,132(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82c3b9c0
	if (ctx.cr6.eq) goto loc_82C3B9C0;
	// lis r4,24970
	ctx.r4.s64 = 1636433920;
	// ori r4,r4,9
	ctx.r4.u64 = ctx.r4.u64 | 9;
	// bl 0x82691460
	ctx.lr = 0x82C3B9BC;
	sub_82691460(ctx, base);
	// stw r30,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r30.u32);
loc_82C3B9C0:
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82c3b9dc
	if (ctx.cr6.eq) goto loc_82C3B9DC;
	// lis r4,24714
	ctx.r4.s64 = 1619656704;
	// ori r4,r4,8194
	ctx.r4.u64 = ctx.r4.u64 | 8194;
	// bl 0x82691460
	ctx.lr = 0x82C3B9D8;
	sub_82691460(ctx, base);
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
loc_82C3B9DC:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82fa76bc
	__restgprlr_25(ctx, base);
	return;
loc_82C3B9E8:
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82a75988
	ctx.lr = 0x82C3B9F8;
	sub_82A75988(ctx, base);
	// mulli r30,r27,28
	ctx.r30.s64 = ctx.r27.s64 * 28;
	// lwz r3,132(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82a75988
	ctx.lr = 0x82C3BA0C;
	sub_82A75988(ctx, base);
	// rlwinm r29,r27,3,0,28
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 3) & 0xFFFFFFF8;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// bl 0x82a75988
	ctx.lr = 0x82C3BA20;
	sub_82A75988(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r9,132(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// lwz r10,96(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// add r8,r11,r28
	ctx.r8.u64 = ctx.r11.u64 + ctx.r28.u64;
	// add r11,r9,r30
	ctx.r11.u64 = ctx.r9.u64 + ctx.r30.u64;
	// add r10,r10,r29
	ctx.r10.u64 = ctx.r10.u64 + ctx.r29.u64;
	// beq cr6,0x82c3b9dc
	if (ctx.cr6.eq) goto loc_82C3B9DC;
	// mtctr r27
	ctx.ctr.u64 = ctx.r27.u64;
loc_82C3BA44:
	// addi r11,r11,-28
	ctx.r11.s64 = ctx.r11.s64 + -28;
	// subf r8,r26,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r26.s64;
	// stw r8,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r8.u32);
	// stw r26,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r26.u32);
	// stwu r11,-8(r10)
	ea = -8 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x82c3ba44
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82C3BA44;
	// b 0x82c3b9dc
	goto loc_82C3B9DC;
}

__attribute__((alias("__imp__sub_82C3BA60"))) PPC_WEAK_FUNC(sub_82C3BA60);
PPC_FUNC_IMPL(__imp__sub_82C3BA60) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7674
	ctx.lr = 0x82C3BA68;
	__savegprlr_27(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// lwz r29,1212(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1212);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x82c3ba8c
	if (!ctx.cr6.eq) goto loc_82C3BA8C;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82c3bb00
	goto loc_82C3BB00;
loc_82C3BA8C:
	// lwz r31,4(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x82c32f50
	ctx.lr = 0x82C3BA9C;
	sub_82C32F50(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82c3bab0
	if (ctx.cr0.lt) goto loc_82C3BAB0;
	// lfs f0,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f0.f64 = double(temp.f32);
	// addi r28,r1,80
	ctx.r28.s64 = ctx.r1.s64 + 80;
	// stfs f0,80(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 80, temp.u32);
loc_82C3BAB0:
	// lwz r11,212(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 212);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82c3bacc
	if (ctx.cr0.eq) goto loc_82C3BACC;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r5,12(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// bl 0x82a75988
	ctx.lr = 0x82C3BACC;
	sub_82A75988(ctx, base);
loc_82C3BACC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r27,12(r30)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// lwz r31,0(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r30,8(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// bl 0x82c35b58
	ctx.lr = 0x82C3BAE0;
	sub_82C35B58(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mtctr r29
	ctx.ctr.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// bctrl 
	ctx.lr = 0x82C3BAFC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,1
	ctx.r3.s64 = 1;
loc_82C3BB00:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82fa76c4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C3BB08"))) PPC_WEAK_FUNC(sub_82C3BB08);
PPC_FUNC_IMPL(__imp__sub_82C3BB08) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7660
	ctx.lr = 0x82C3BB10;
	__savegprlr_22(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r22,0
	ctx.r22.s64 = 0;
	// lwz r11,12(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r27,8(r4)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r23,144(r3)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r3.u32 + 144);
	// addi r29,r3,144
	ctx.r29.s64 = ctx.r3.s64 + 144;
	// lwz r25,148(r3)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + 148);
	// mr r28,r22
	ctx.r28.u64 = ctx.r22.u64;
	// lwz r10,40(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 40);
	// rlwinm r26,r11,31,1,31
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82c3bb94
	if (ctx.cr6.eq) goto loc_82C3BB94;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r10,212(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 212);
	// clrlwi. r10,r10,31
	ctx.r10.u64 = ctx.r10.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82c3bb6c
	if (ctx.cr0.eq) goto loc_82C3BB6C;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82a75988
	ctx.lr = 0x82C3BB6C;
	sub_82A75988(ctx, base);
loc_82C3BB6C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r5,12(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// lwz r4,8(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// lwz r3,0(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82C3BB90;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
loc_82C3BB94:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r24,16000
	ctx.r24.s64 = 16000;
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82c3bc7c
	if (!ctx.cr6.eq) goto loc_82C3BC7C;
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// lis r10,16384
	ctx.r10.s64 = 1073741824;
	// rlwinm r9,r11,0,0,3
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xF0000000;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82c3bbcc
	if (!ctx.cr6.eq) goto loc_82C3BBCC;
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmplwi cr6,r11,9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 9, ctx.xer);
	// blt cr6,0x82c3bbcc
	if (ctx.cr6.lt) goto loc_82C3BBCC;
	// addi r25,r25,200
	ctx.r25.s64 = ctx.r25.s64 + 200;
loc_82C3BBCC:
	// cmpwi cr6,r5,1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 1, ctx.xer);
	// beq cr6,0x82c3bc28
	if (ctx.cr6.eq) goto loc_82C3BC28;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,212(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 212);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82c3bc28
	if (!ctx.cr0.eq) goto loc_82C3BC28;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x82c3bc0c
	if (ctx.cr6.eq) goto loc_82C3BC0C;
	// addi r11,r27,-2
	ctx.r11.s64 = ctx.r27.s64 + -2;
	// mtctr r26
	ctx.ctr.u64 = ctx.r26.u64;
loc_82C3BBF4:
	// lhau r10,2(r11)
	ea = 2 + ctx.r11.u32;	ctx.r10.s64 = int16_t(PPC_LOAD_U16(ea));	ctx.r11.u32 = ea;	// srawi r9,r10,31
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7FFFFFFF) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 31;
	// xor r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 ^ ctx.r9.u64;
	// subf r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	// add r28,r10,r28
	ctx.r28.u64 = ctx.r10.u64 + ctx.r28.u64;
	// bdnz 0x82c3bbf4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82C3BBF4;
loc_82C3BC0C:
	// divwu r11,r28,r26
	ctx.r11.u32 = ctx.r28.u32 / ctx.r26.u32;
	// twllei r26,0
	if (ctx.r26.u32 <= 0) __builtin_debugtrap();
	// subfc r11,r11,r25
	ctx.xer.ca = ctx.r25.u32 >= ctx.r11.u32;
	ctx.r11.s64 = ctx.r25.s64 - ctx.r11.s64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// b 0x82c3bc2c
	goto loc_82C3BC2C;
loc_82C3BC28:
	// stw r22,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r22.u32);
loc_82C3BC2C:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82c3bc4c
	if (!ctx.cr6.eq) goto loc_82C3BC4C;
	// li r11,500
	ctx.r11.s64 = 500;
	// li r10,300
	ctx.r10.s64 = 300;
	// stw r11,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r11.u32);
	// stw r10,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r10.u32);
	// b 0x82c3bc7c
	goto loc_82C3BC7C;
loc_82C3BC4C:
	// lwz r11,152(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 152);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82c3bc74
	if (!ctx.cr6.gt) goto loc_82C3BC74;
	// mulli r10,r26,1000
	ctx.r10.s64 = ctx.r26.s64 * 1000;
	// divwu r10,r10,r24
	ctx.r10.u32 = ctx.r10.u32 / ctx.r24.u32;
	// li r9,1
	ctx.r9.s64 = 1;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// stw r9,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r9.u32);
	// stw r11,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r11.u32);
	// b 0x82c3bc7c
	goto loc_82C3BC7C;
loc_82C3BC74:
	// li r11,600
	ctx.r11.s64 = 600;
	// stw r11,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r11.u32);
loc_82C3BC7C:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82c3bc90
	if (!ctx.cr6.eq) goto loc_82C3BC90;
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// beq cr6,0x82c3bc9c
	if (ctx.cr6.eq) goto loc_82C3BC9C;
loc_82C3BC90:
	// lwz r11,156(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 156);
	// cmplwi cr6,r11,30000
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 30000, ctx.xer);
	// ble cr6,0x82c3bcc0
	if (!ctx.cr6.gt) goto loc_82C3BCC0;
loc_82C3BC9C:
	// lbz r11,140(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 140);
	// lis r10,-32241
	ctx.r10.s64 = -2112946176;
	// stw r22,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r22.u32);
	// addi r3,r31,24
	ctx.r3.s64 = ctx.r31.s64 + 24;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r4,r10,-4952
	ctx.r4.s64 = ctx.r10.s64 + -4952;
	// stb r11,140(r31)
	PPC_STORE_U8(ctx.r31.u32 + 140, ctx.r11.u8);
	// li r5,54
	ctx.r5.s64 = 54;
	// bl 0x82fa77c0
	ctx.lr = 0x82C3BCC0;
	sub_82FA77C0(ctx, base);
loc_82C3BCC0:
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x82c3bce0
	if (!ctx.cr6.eq) goto loc_82C3BCE0;
	// mulli r11,r26,1000
	ctx.r11.s64 = ctx.r26.s64 * 1000;
	// lwz r10,156(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 156);
	// divwu r11,r11,r24
	ctx.r11.u32 = ctx.r11.u32 / ctx.r24.u32;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r11.u32);
loc_82C3BCE0:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82fa76b0
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C3BCE8"))) PPC_WEAK_FUNC(sub_82C3BCE8);
PPC_FUNC_IMPL(__imp__sub_82C3BCE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x82C3BCF0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,0(r4)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82c3bd20
	if (!ctx.cr6.eq) goto loc_82C3BD20;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// rlwinm r11,r11,30,2,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFF;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
loc_82C3BD20:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r11,152(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 152);
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82c3bd5c
	if (ctx.cr6.eq) goto loc_82C3BD5C;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r10,212(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 212);
	// rlwinm. r10,r10,0,12,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xF0000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82c3bd5c
	if (ctx.cr0.eq) goto loc_82C3BD5C;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lwz r3,12(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x83179e04
	ctx.lr = 0x82C3BD5C;
	__imp__XamVoiceSubmitPacket(ctx, base);
loc_82C3BD5C:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82c3bd74
	if (ctx.cr6.eq) goto loc_82C3BD74;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x82c3bd88
	if (!ctx.cr6.lt) goto loc_82C3BD88;
loc_82C3BD74:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lis r10,-16384
	ctx.r10.s64 = -1073741824;
	// ori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 | 1;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
loc_82C3BD88:
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r11,r30,116
	ctx.r11.s64 = ctx.r30.s64 + 116;
	// stw r10,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r10.u32);
	// lwz r10,120(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 120);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82c3bda8
	if (ctx.cr6.eq) goto loc_82C3BDA8;
	// stw r29,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r29.u32);
	// b 0x82c3bdac
	goto loc_82C3BDAC;
loc_82C3BDA8:
	// stw r29,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r29.u32);
loc_82C3BDAC:
	// stw r29,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r29.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C3BDB8"))) PPC_WEAK_FUNC(sub_82C3BDB8);
PPC_FUNC_IMPL(__imp__sub_82C3BDB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x82C3BDC0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r11,r4,20
	ctx.r11.s64 = ctx.r4.s64 + 20;
	// lwz r28,0(r5)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwzx r3,r11,r3
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r3.u32);
	// bl 0x82c373b0
	ctx.lr = 0x82C3BDEC;
	sub_82C373B0(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x82c3be04
	if (!ctx.cr0.lt) goto loc_82C3BE04;
	// lwz r11,12(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// stw r10,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r10.u32);
	// stw r11,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r11.u32);
loc_82C3BE04:
	// rlwinm r11,r29,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 3) & 0xFFFFFFF8;
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r11,r11,100
	ctx.r11.s64 = ctx.r11.s64 + 100;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82c3be28
	if (ctx.cr6.eq) goto loc_82C3BE28;
	// stw r31,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r31.u32);
	// b 0x82c3be2c
	goto loc_82C3BE2C;
loc_82C3BE28:
	// stw r31,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r31.u32);
loc_82C3BE2C:
	// stw r31,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r31.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C3BE38"))) PPC_WEAK_FUNC(sub_82C3BE38);
PPC_FUNC_IMPL(__imp__sub_82C3BE38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7674
	ctx.lr = 0x82C3BE40;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,136(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 136);
	// li r27,0
	ctx.r27.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r28,r27
	ctx.r28.u64 = ctx.r27.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82c3bebc
	if (!ctx.cr6.gt) goto loc_82C3BEBC;
	// addi r31,r3,100
	ctx.r31.s64 = ctx.r3.s64 + 100;
	// addi r29,r3,80
	ctx.r29.s64 = ctx.r3.s64 + 80;
loc_82C3BE64:
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82c37500
	ctx.lr = 0x82C3BE78;
	sub_82C37500(ctx, base);
loc_82C3BE78:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82c3bea4
	if (ctx.cr6.eq) goto loc_82C3BEA4;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82c3be94
	if (!ctx.cr6.eq) goto loc_82C3BE94;
	// stw r27,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r27.u32);
loc_82C3BE94:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// stw r27,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r27.u32);
	// b 0x82c3be78
	goto loc_82C3BE78;
loc_82C3BEA4:
	// lwz r11,136(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 136);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82c3be64
	if (ctx.cr6.lt) goto loc_82C3BE64;
loc_82C3BEBC:
	// addi r11,r30,116
	ctx.r11.s64 = ctx.r30.s64 + 116;
loc_82C3BEC0:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82c3beec
	if (ctx.cr6.eq) goto loc_82C3BEEC;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82c3bedc
	if (!ctx.cr6.eq) goto loc_82C3BEDC;
	// stw r27,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r27.u32);
loc_82C3BEDC:
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// stw r27,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r27.u32);
	// b 0x82c3bec0
	goto loc_82C3BEC0;
loc_82C3BEEC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C3BEF4"))) PPC_WEAK_FUNC(sub_82C3BEF4);
PPC_FUNC_IMPL(__imp__sub_82C3BEF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C3BEF8"))) PPC_WEAK_FUNC(sub_82C3BEF8);
PPC_FUNC_IMPL(__imp__sub_82C3BEF8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7644
	ctx.lr = 0x82C3BF00;
	__savegprlr_15(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r18,0
	ctx.r18.s64 = 0;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r16,r18
	ctx.r16.u64 = ctx.r18.u64;
	// mr r19,r18
	ctx.r19.u64 = ctx.r18.u64;
	// mr r21,r18
	ctx.r21.u64 = ctx.r18.u64;
	// bl 0x82a78340
	ctx.lr = 0x82C3BF1C;
	sub_82A78340(ctx, base);
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// lwz r10,20(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// li r17,28
	ctx.r17.s64 = 28;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// lwz r24,116(r29)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r29.u32 + 116);
	// subf r11,r11,r3
	ctx.r11.s64 = ctx.r3.s64 - ctx.r11.s64;
	// addi r23,r29,116
	ctx.r23.s64 = ctx.r29.s64 + 116;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// stw r11,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r11.u32);
	// beq cr6,0x82c3c1e4
	if (ctx.cr6.eq) goto loc_82C3C1E4;
	// lis r11,-31974
	ctx.r11.s64 = -2095448064;
	// addi r20,r11,11872
	ctx.r20.s64 = ctx.r11.s64 + 11872;
loc_82C3BF54:
	// lwz r31,0(r24)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r11,259
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 259, ctx.xer);
	// beq cr6,0x82c3c1e4
	if (ctx.cr6.eq) goto loc_82C3C1E4;
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82c3c1e4
	if (!ctx.cr6.eq) goto loc_82C3C1E4;
	// lwz r10,12(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// cmplw cr6,r19,r10
	ctx.cr6.compare<uint32_t>(ctx.r19.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82c3c1e4
	if (!ctx.cr6.lt) goto loc_82C3C1E4;
	// lwz r10,20(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// cmpwi cr6,r10,20
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 20, ctx.xer);
	// blt cr6,0x82c3c1e4
	if (ctx.cr6.lt) goto loc_82C3C1E4;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// beq cr6,0x82c3bfd4
	if (ctx.cr6.eq) goto loc_82C3BFD4;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82c3bfa4
	if (ctx.cr6.eq) goto loc_82C3BFA4;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x82c3bfb4
	if (!ctx.cr6.eq) goto loc_82C3BFB4;
loc_82C3BFA4:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// stw r18,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r18.u32);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
loc_82C3BFB4:
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r5,12(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x82a75988
	ctx.lr = 0x82C3BFC4;
	sub_82A75988(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r21,1
	ctx.r21.s64 = 1;
	// stw r18,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r18.u32);
	// b 0x82c3c0b0
	goto loc_82C3C0B0;
loc_82C3BFD4:
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82c3c060
	if (!ctx.cr6.eq) goto loc_82C3C060;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r27,r29,24
	ctx.r27.s64 = ctx.r29.s64 + 24;
	// lwz r28,8(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// addze r30,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r30.s64 = temp.s64;
	// mulli r11,r30,3
	ctx.r11.s64 = ctx.r30.s64 * 3;
	// add r26,r11,r28
	ctx.r26.u64 = ctx.r11.u64 + ctx.r28.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82fa77c0
	ctx.lr = 0x82C3C00C;
	sub_82FA77C0(ctx, base);
	// mulli r11,r30,7
	ctx.r11.s64 = ctx.r30.s64 * 7;
	// add r25,r11,r28
	ctx.r25.u64 = ctx.r11.u64 + ctx.r28.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// add r4,r30,r28
	ctx.r4.u64 = ctx.r30.u64 + ctx.r28.u64;
	// bl 0x82fa77c0
	ctx.lr = 0x82C3C024;
	sub_82FA77C0(ctx, base);
	// rlwinm r15,r30,1,0,30
	ctx.r15.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// mr r6,r15
	ctx.r6.u64 = ctx.r15.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82c3a4c8
	ctx.lr = 0x82C3C040;
	sub_82C3A4C8(ctx, base);
	// rlwinm r11,r30,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// mr r6,r15
	ctx.r6.u64 = ctx.r15.u64;
	// add r5,r11,r28
	ctx.r5.u64 = ctx.r11.u64 + ctx.r28.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82c3a4c8
	ctx.lr = 0x82C3C05C;
	sub_82C3A4C8(ctx, base);
	// b 0x82c3c0a0
	goto loc_82C3C0A0;
loc_82C3C060:
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x82c3c0b4
	if (!ctx.cr6.eq) goto loc_82C3C0B4;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r8,r11,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82c3c0a0
	if (ctx.cr6.eq) goto loc_82C3C0A0;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_82C3C088:
	// lbzu r11,-1(r9)
	ea = -1 + ctx.r9.u32;
	ctx.r11.u64 = PPC_LOAD_U8(ea);
	ctx.r9.u32 = ea;
	// rotlwi r11,r11,1
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// lhzx r11,r11,r20
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r20.u32);
	// sthu r11,-2(r10)
	ea = -2 + ctx.r10.u32;
	PPC_STORE_U16(ea, ctx.r11.u16);
	ctx.r10.u32 = ea;
	// sthu r11,-2(r10)
	ea = -2 + ctx.r10.u32;
	PPC_STORE_U16(ea, ctx.r11.u16);
	ctx.r10.u32 = ea;
	// bdnz 0x82c3c088
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82C3C088;
loc_82C3C0A0:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// stw r18,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r18.u32);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
loc_82C3C0B0:
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
loc_82C3C0B4:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82c3ba60
	ctx.lr = 0x82C3C0C0;
	sub_82C3BA60(ctx, base);
	// addic r11,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// and r21,r11,r21
	ctx.r21.u64 = ctx.r11.u64 & ctx.r21.u64;
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// bl 0x82c3bb08
	ctx.lr = 0x82C3C0DC;
	sub_82C3BB08(ctx, base);
	// lwz r11,144(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 144);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82c3c17c
	if (!ctx.cr6.eq) goto loc_82C3C17C;
	// lwz r11,136(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 136);
	// mr r28,r18
	ctx.r28.u64 = ctx.r18.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82c3c17c
	if (!ctx.cr6.gt) goto loc_82C3C17C;
	// addi r27,r29,88
	ctx.r27.s64 = ctx.r29.s64 + 88;
loc_82C3C0FC:
	// lwz r11,132(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 132);
	// lwz r10,12(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// subf r11,r11,r31
	ctx.r11.s64 = ctx.r31.s64 - ctx.r11.s64;
	// divw r11,r11,r17
	ctx.r11.s32 = ctx.r11.s32 / ctx.r17.s32;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82c3c11c
	if (ctx.cr6.lt) goto loc_82C3C11C;
	// mr r30,r18
	ctx.r30.u64 = ctx.r18.u64;
	// b 0x82c3c128
	goto loc_82C3C128;
loc_82C3C11C:
	// lwz r10,0(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r30,r11,r10
	ctx.r30.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_82C3C128:
	// lwz r26,0(r30)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r5,24
	ctx.r5.s64 = 24;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82a75988
	ctx.lr = 0x82C3C13C;
	sub_82A75988(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,8(r26)
	PPC_STORE_U32(ctx.r26.u32 + 8, ctx.r11.u32);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// stw r11,12(r26)
	PPC_STORE_U32(ctx.r26.u32 + 12, ctx.r11.u32);
	// bl 0x82c3bdb8
	ctx.lr = 0x82C3C15C;
	sub_82C3BDB8(ctx, base);
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r27,r27,4
	ctx.r27.s64 = ctx.r27.s64 + 4;
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// lwz r11,136(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 136);
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82c3c0fc
	if (ctx.cr6.lt) goto loc_82C3C0FC;
loc_82C3C17C:
	// lwz r11,0(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82c3c1a4
	if (ctx.cr6.eq) goto loc_82C3C1A4;
	// lwz r10,4(r23)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r23.u32 + 4);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82c3c198
	if (!ctx.cr6.eq) goto loc_82C3C198;
	// stw r18,4(r23)
	PPC_STORE_U32(ctx.r23.u32 + 4, ctx.r18.u32);
loc_82C3C198:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r10,0(r23)
	PPC_STORE_U32(ctx.r23.u32 + 0, ctx.r10.u32);
	// stw r18,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r18.u32);
loc_82C3C1A4:
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82c3c1bc
	if (!ctx.cr6.eq) goto loc_82C3C1BC;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82c3bce8
	ctx.lr = 0x82C3C1BC;
	sub_82C3BCE8(ctx, base);
loc_82C3C1BC:
	// lwz r11,20(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// addi r19,r19,1
	ctx.r19.s64 = ctx.r19.s64 + 1;
	// stw r22,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r22.u32);
	// addic. r11,r11,-20
	ctx.xer.ca = ctx.r11.u32 > 19;
	ctx.r11.s64 = ctx.r11.s64 + -20;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r11.u32);
	// bge 0x82c3c1d8
	if (!ctx.cr0.lt) goto loc_82C3C1D8;
	// stw r18,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r18.u32);
loc_82C3C1D8:
	// lwz r24,0(r23)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// bne cr6,0x82c3bf54
	if (!ctx.cr6.eq) goto loc_82C3BF54;
loc_82C3C1E4:
	// lwz r11,136(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 136);
	// mr r30,r18
	ctx.r30.u64 = ctx.r18.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82c3c294
	if (!ctx.cr6.gt) goto loc_82C3C294;
	// addi r31,r29,80
	ctx.r31.s64 = ctx.r29.s64 + 80;
loc_82C3C1F8:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lwz r8,0(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r10,24(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r9,r11,29
	ctx.r9.s64 = ctx.r11.s64 + 29;
	// addi r7,r11,25
	ctx.r7.s64 = ctx.r11.s64 + 25;
	// lwz r11,12(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mulli r10,r9,3
	ctx.r10.s64 = ctx.r9.s64 * 3;
	// mulli r9,r7,3
	ctx.r9.s64 = ctx.r7.s64 * 3;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r10,r8
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	// lwzx r5,r11,r8
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// bl 0x82c373d8
	ctx.lr = 0x82C3C23C;
	sub_82C373D8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r16,r3
	ctx.r16.u64 = ctx.r3.u64;
	// mr r10,r18
	ctx.r10.u64 = ctx.r18.u64;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
loc_82C3C24C:
	// lwz r9,-8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + -8);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82c3c264
	if (ctx.cr6.eq) goto loc_82C3C264;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// beq cr6,0x82c3c278
	if (ctx.cr6.eq) goto loc_82C3C278;
loc_82C3C264:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplwi cr6,r10,2
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 2, ctx.xer);
	// blt cr6,0x82c3c24c
	if (ctx.cr6.lt) goto loc_82C3C24C;
	// stw r18,144(r29)
	PPC_STORE_U32(ctx.r29.u32 + 144, ctx.r18.u32);
loc_82C3C278:
	// lwz r11,136(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 136);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82c3c1f8
	if (ctx.cr6.lt) goto loc_82C3C1F8;
	// cmpwi cr6,r16,0
	ctx.cr6.compare<int32_t>(ctx.r16.s32, 0, ctx.xer);
	// blt cr6,0x82c3c384
	if (ctx.cr6.lt) goto loc_82C3C384;
loc_82C3C294:
	// lwz r11,136(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 136);
	// mr r31,r18
	ctx.r31.u64 = ctx.r18.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82c3c384
	if (!ctx.cr6.gt) goto loc_82C3C384;
	// li r28,24
	ctx.r28.s64 = 24;
loc_82C3C2A8:
	// rlwinm r11,r31,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// addi r30,r11,100
	ctx.r30.s64 = ctx.r11.s64 + 100;
	// lwz r11,100(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
loc_82C3C2B8:
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82c3c374
	if (ctx.cr6.eq) goto loc_82C3C374;
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r31,2
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 2, ctx.xer);
	// bne cr6,0x82c3c2dc
	if (!ctx.cr6.eq) goto loc_82C3C2DC;
	// lwz r11,132(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 132);
	// subf r11,r11,r9
	ctx.r11.s64 = ctx.r9.s64 - ctx.r11.s64;
	// divw r11,r11,r17
	ctx.r11.s32 = ctx.r11.s32 / ctx.r17.s32;
	// b 0x82c3c2f0
	goto loc_82C3C2F0;
loc_82C3C2DC:
	// addi r11,r31,31
	ctx.r11.s64 = ctx.r31.s64 + 31;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r29
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	// subf r11,r11,r9
	ctx.r11.s64 = ctx.r9.s64 - ctx.r11.s64;
	// divw r11,r11,r28
	ctx.r11.s32 = ctx.r11.s32 / ctx.r28.s32;
loc_82C3C2F0:
	// lwz r10,12(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82c3c304
	if (ctx.cr6.lt) goto loc_82C3C304;
	// mr r4,r18
	ctx.r4.u64 = ctx.r18.u64;
	// b 0x82c3c310
	goto loc_82C3C310;
loc_82C3C304:
	// lwz r10,96(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 96);
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_82C3C310:
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// cmpwi cr6,r11,259
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 259, ctx.xer);
	// beq cr6,0x82c3c374
	if (ctx.cr6.eq) goto loc_82C3C374;
	// lwz r11,24(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82c3c374
	if (ctx.cr6.eq) goto loc_82C3C374;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82c3c354
	if (ctx.cr6.eq) goto loc_82C3C354;
	// lwz r9,4(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bne cr6,0x82c3c348
	if (!ctx.cr6.eq) goto loc_82C3C348;
	// stw r18,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r18.u32);
loc_82C3C348:
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r9,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r9.u32);
	// stw r18,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r18.u32);
loc_82C3C354:
	// lwz r11,24(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,24(r10)
	PPC_STORE_U32(ctx.r10.u32 + 24, ctx.r11.u32);
	// bne 0x82c3c36c
	if (!ctx.cr0.eq) goto loc_82C3C36C;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82c3bce8
	ctx.lr = 0x82C3C36C;
	sub_82C3BCE8(ctx, base);
loc_82C3C36C:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// b 0x82c3c2b8
	goto loc_82C3C2B8;
loc_82C3C374:
	// lwz r11,136(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 136);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82c3c2a8
	if (ctx.cr6.lt) goto loc_82C3C2A8;
loc_82C3C384:
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x82fa7694
	__restgprlr_15(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C3C390"))) PPC_WEAK_FUNC(sub_82C3C390);
PPC_FUNC_IMPL(__imp__sub_82C3C390) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x82C3C398;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82c3c484
	if (ctx.cr6.eq) goto loc_82C3C484;
	// lwz r11,136(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 136);
	// li r29,0
	ctx.r29.s64 = 0;
	// mr r28,r29
	ctx.r28.u64 = ctx.r29.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82c3c420
	if (!ctx.cr6.gt) goto loc_82C3C420;
	// addi r31,r3,124
	ctx.r31.s64 = ctx.r3.s64 + 124;
loc_82C3C3C0:
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r3,-44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -44);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82c37500
	ctx.lr = 0x82C3C3D4;
	sub_82C37500(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82c3c3f0
	if (ctx.cr6.eq) goto loc_82C3C3F0;
	// lis r4,24970
	ctx.r4.s64 = 1636433920;
	// ori r4,r4,9
	ctx.r4.u64 = ctx.r4.u64 | 9;
	// bl 0x82691460
	ctx.lr = 0x82C3C3EC;
	sub_82691460(ctx, base);
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
loc_82C3C3F0:
	// lwz r3,-36(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -36);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82c3c40c
	if (ctx.cr6.eq) goto loc_82C3C40C;
	// lis r4,24970
	ctx.r4.s64 = 1636433920;
	// ori r4,r4,3
	ctx.r4.u64 = ctx.r4.u64 | 3;
	// bl 0x82691460
	ctx.lr = 0x82C3C408;
	sub_82691460(ctx, base);
	// stw r29,-36(r31)
	PPC_STORE_U32(ctx.r31.u32 + -36, ctx.r29.u32);
loc_82C3C40C:
	// lwz r11,136(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 136);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82c3c3c0
	if (ctx.cr6.lt) goto loc_82C3C3C0;
loc_82C3C420:
	// lwz r3,96(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 96);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82c3c43c
	if (ctx.cr6.eq) goto loc_82C3C43C;
	// lis r4,24970
	ctx.r4.s64 = 1636433920;
	// ori r4,r4,3
	ctx.r4.u64 = ctx.r4.u64 | 3;
	// bl 0x82691460
	ctx.lr = 0x82C3C438;
	sub_82691460(ctx, base);
	// stw r29,96(r30)
	PPC_STORE_U32(ctx.r30.u32 + 96, ctx.r29.u32);
loc_82C3C43C:
	// lwz r3,132(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 132);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82c3c458
	if (ctx.cr6.eq) goto loc_82C3C458;
	// lis r4,24970
	ctx.r4.s64 = 1636433920;
	// ori r4,r4,9
	ctx.r4.u64 = ctx.r4.u64 | 9;
	// bl 0x82691460
	ctx.lr = 0x82C3C454;
	sub_82691460(ctx, base);
	// stw r29,132(r30)
	PPC_STORE_U32(ctx.r30.u32 + 132, ctx.r29.u32);
loc_82C3C458:
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82c3c474
	if (ctx.cr6.eq) goto loc_82C3C474;
	// lis r4,24714
	ctx.r4.s64 = 1619656704;
	// ori r4,r4,8194
	ctx.r4.u64 = ctx.r4.u64 | 8194;
	// bl 0x82691460
	ctx.lr = 0x82C3C470;
	sub_82691460(ctx, base);
	// stw r29,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r29.u32);
loc_82C3C474:
	// lis r4,24970
	ctx.r4.s64 = 1636433920;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// ori r4,r4,32781
	ctx.r4.u64 = ctx.r4.u64 | 32781;
	// bl 0x82691460
	ctx.lr = 0x82C3C484;
	sub_82691460(ctx, base);
loc_82C3C484:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C3C48C"))) PPC_WEAK_FUNC(sub_82C3C48C);
PPC_FUNC_IMPL(__imp__sub_82C3C48C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C3C490"))) PPC_WEAK_FUNC(sub_82C3C490);
PPC_FUNC_IMPL(__imp__sub_82C3C490) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x82C3C498;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,12(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82c3be38
	ctx.lr = 0x82C3C4A8;
	sub_82C3BE38(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c3b868
	ctx.lr = 0x82C3C4B0;
	sub_82C3B868(ctx, base);
	// li r29,0
	ctx.r29.s64 = 0;
	// b 0x82c3c4ec
	goto loc_82C3C4EC;
loc_82C3C4B8:
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r30,r30,-1
	ctx.r30.s64 = ctx.r30.s64 + -1;
	// subf r11,r30,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r30.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82c3c4d8
	if (ctx.cr6.lt) goto loc_82C3C4D8;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// b 0x82c3c4e4
	goto loc_82C3C4E4;
loc_82C3C4D8:
	// lwz r10,96(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_82C3C4E4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c3bce8
	ctx.lr = 0x82C3C4EC;
	sub_82C3BCE8(ctx, base);
loc_82C3C4EC:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x82c3c4b8
	if (!ctx.cr6.eq) goto loc_82C3C4B8;
	// li r11,600
	ctx.r11.s64 = 600;
	// stb r29,140(r31)
	PPC_STORE_U8(ctx.r31.u32 + 140, ctx.r29.u8);
	// stw r29,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r29.u32);
	// stw r11,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r11.u32);
	// stw r29,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r29.u32);
	// stw r29,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r29.u32);
	// bl 0x82a78340
	ctx.lr = 0x82C3C510;
	sub_82A78340(ctx, base);
	// stw r3,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r3.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C3C520"))) PPC_WEAK_FUNC(sub_82C3C520);
PPC_FUNC_IMPL(__imp__sub_82C3C520) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa766c
	ctx.lr = 0x82C3C528;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// lis r4,24970
	ctx.r4.s64 = 1636433920;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r3,160
	ctx.r3.s64 = 160;
	// ori r4,r4,32781
	ctx.r4.u64 = ctx.r4.u64 | 32781;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// mr r25,r8
	ctx.r25.u64 = ctx.r8.u64;
	// bl 0x82691410
	ctx.lr = 0x82C3C554;
	sub_82691410(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82c3c638
	if (ctx.cr0.eq) goto loc_82C3C638;
	// stw r28,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r28.u32);
	// rlwinm r5,r30,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r30,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r30.u32);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
	// addi r3,r31,80
	ctx.r3.s64 = ctx.r31.s64 + 80;
	// stw r27,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r27.u32);
	// bl 0x82fa77c0
	ctx.lr = 0x82C3C57C;
	sub_82FA77C0(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82c3c60c
	if (ctx.cr6.eq) goto loc_82C3C60C;
	// addi r11,r30,22
	ctx.r11.s64 = ctx.r30.s64 + 22;
	// mulli r27,r28,24
	ctx.r27.s64 = ctx.r28.s64 * 24;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r29,r11,r31
	ctx.r29.u64 = ctx.r11.u64 + ctx.r31.u64;
loc_82C3C594:
	// lis r4,24970
	ctx.r4.s64 = 1636433920;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// ori r4,r4,9
	ctx.r4.u64 = ctx.r4.u64 | 9;
	// addi r30,r30,-1
	ctx.r30.s64 = ctx.r30.s64 + -1;
	// addi r29,r29,-4
	ctx.r29.s64 = ctx.r29.s64 + -4;
	// bl 0x82691410
	ctx.lr = 0x82C3C5AC;
	sub_82691410(ctx, base);
	// stw r3,36(r29)
	PPC_STORE_U32(ctx.r29.u32 + 36, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82c3c638
	if (ctx.cr0.eq) goto loc_82C3C638;
	// lis r4,24970
	ctx.r4.s64 = 1636433920;
	// rlwinm r3,r28,3,0,28
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 3) & 0xFFFFFFF8;
	// ori r4,r4,3
	ctx.r4.u64 = ctx.r4.u64 | 3;
	// bl 0x82691410
	ctx.lr = 0x82C3C5C8;
	sub_82691410(ctx, base);
	// stw r3,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82c3c638
	if (ctx.cr0.eq) goto loc_82C3C638;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82c3c604
	if (ctx.cr6.eq) goto loc_82C3C604;
	// li r10,0
	ctx.r10.s64 = 0;
	// mtctr r28
	ctx.ctr.u64 = ctx.r28.u64;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82C3C5E8:
	// lwz r9,36(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 36);
	// lwz r8,0(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
	// stwx r9,r8,r10
	PPC_STORE_U32(ctx.r8.u32 + ctx.r10.u32, ctx.r9.u32);
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// bdnz 0x82c3c5e8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82C3C5E8;
loc_82C3C604:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x82c3c594
	if (!ctx.cr6.eq) goto loc_82C3C594;
loc_82C3C60C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c3b868
	ctx.lr = 0x82C3C614;
	sub_82C3B868(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge 0x82c3c628
	if (!ctx.cr0.lt) goto loc_82C3C628;
loc_82C3C61C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82c3c390
	ctx.lr = 0x82C3C624;
	sub_82C3C390(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
loc_82C3C628:
	// stw r31,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r31.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82fa76bc
	__restgprlr_25(ctx, base);
	return;
loc_82C3C638:
	// lis r30,-32761
	ctx.r30.s64 = -2147024896;
	// ori r30,r30,14
	ctx.r30.u64 = ctx.r30.u64 | 14;
	// b 0x82c3c61c
	goto loc_82C3C61C;
}

__attribute__((alias("__imp__sub_82C3C644"))) PPC_WEAK_FUNC(sub_82C3C644);
PPC_FUNC_IMPL(__imp__sub_82C3C644) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C3C648"))) PPC_WEAK_FUNC(sub_82C3C648);
PPC_FUNC_IMPL(__imp__sub_82C3C648) {
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
	// li r4,160
	ctx.r4.s64 = 160;
	// bl 0x82c3d4b0
	ctx.lr = 0x82C3C65C;
	sub_82C3D4B0(ctx, base);
	// bl 0x82c3d450
	ctx.lr = 0x82C3C660;
	sub_82C3D450(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C3C674"))) PPC_WEAK_FUNC(sub_82C3C674);
PPC_FUNC_IMPL(__imp__sub_82C3C674) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C3C678"))) PPC_WEAK_FUNC(sub_82C3C678);
PPC_FUNC_IMPL(__imp__sub_82C3C678) {
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
	// li r4,160
	ctx.r4.s64 = 160;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82c3d4b0
	ctx.lr = 0x82C3C694;
	sub_82C3D4B0(ctx, base);
	// addi r3,r31,640
	ctx.r3.s64 = ctx.r31.s64 + 640;
	// bl 0x82c3d468
	ctx.lr = 0x82C3C69C;
	sub_82C3D468(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
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

__attribute__((alias("__imp__sub_82C3C6B4"))) PPC_WEAK_FUNC(sub_82C3C6B4);
PPC_FUNC_IMPL(__imp__sub_82C3C6B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C3C6B8"))) PPC_WEAK_FUNC(sub_82C3C6B8);
PPC_FUNC_IMPL(__imp__sub_82C3C6B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7648
	ctx.lr = 0x82C3C6C0;
	__savegprlr_16(ctx, base);
	// ld r12,-4096(r1)
	ctx.r12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -4096);
	// stwu r1,-7904(r1)
	ea = -7904 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// cmplwi cr6,r4,1
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 1, ctx.xer);
	// blt cr6,0x82c3c700
	if (ctx.cr6.lt) goto loc_82C3C700;
	// beq cr6,0x82c3c6f8
	if (ctx.cr6.eq) goto loc_82C3C6F8;
	// cmplwi cr6,r4,3
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 3, ctx.xer);
	// blt cr6,0x82c3c6f0
	if (ctx.cr6.lt) goto loc_82C3C6F0;
	// li r3,3
	ctx.r3.s64 = 3;
	// addi r1,r1,7904
	ctx.r1.s64 = ctx.r1.s64 + 7904;
	// b 0x82fa7698
	__restgprlr_16(ctx, base);
	return;
loc_82C3C6F0:
	// li r30,32000
	ctx.r30.s64 = 32000;
	// b 0x82c3c704
	goto loc_82C3C704;
loc_82C3C6F8:
	// li r30,24000
	ctx.r30.s64 = 24000;
	// b 0x82c3c704
	goto loc_82C3C704;
loc_82C3C700:
	// li r30,16000
	ctx.r30.s64 = 16000;
loc_82C3C704:
	// li r11,16
	ctx.r11.s64 = 16;
	// lvx128 v63,r0,r5
	simd::store_shuffled(ctx.v63, simd::load_and_shuffle(base + ((ctx.r5.u32) & ~0xF), VectorMaskL));
	// li r10,32
	ctx.r10.s64 = 32;
	// li r9,48
	ctx.r9.s64 = 48;
	// vupkhsb128 v62,v63,v96
	_mm_store_si128((__m128i*)ctx.v62.s32, _mm_cvtepi16_epi32(_mm_unpackhi_epi64(_mm_load_si128((__m128i*)ctx.v63.s16), _mm_load_si128((__m128i*)ctx.v63.s16))));
	// li r8,64
	ctx.r8.s64 = 64;
	// vupklsb128 v61,v63,v96
	_mm_store_si128((__m128i*)ctx.v61.s32, _mm_cvtepi16_epi32(_mm_load_si128((__m128i*)ctx.v63.s16)));
	// li r7,80
	ctx.r7.s64 = 80;
	// lvx128 v60,r5,r11
	simd::store_shuffled(ctx.v60, simd::load_and_shuffle(base + ((ctx.r5.u32 + ctx.r11.u32) & ~0xF), VectorMaskL));
	// li r6,96
	ctx.r6.s64 = 96;
	// lvx128 v59,r5,r10
	simd::store_shuffled(ctx.v59, simd::load_and_shuffle(base + ((ctx.r5.u32 + ctx.r10.u32) & ~0xF), VectorMaskL));
	// vcsxwfp128 v58,v62,0
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v58.f32, _mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v62.u32)));
	// lvx128 v57,r5,r9
	simd::store_shuffled(ctx.v57, simd::load_and_shuffle(base + ((ctx.r5.u32 + ctx.r9.u32) & ~0xF), VectorMaskL));
	// vupkhsb128 v56,v60,v96
	_mm_store_si128((__m128i*)ctx.v56.s32, _mm_cvtepi16_epi32(_mm_unpackhi_epi64(_mm_load_si128((__m128i*)ctx.v60.s16), _mm_load_si128((__m128i*)ctx.v60.s16))));
	// lvx128 v55,r5,r8
	simd::store_shuffled(ctx.v55, simd::load_and_shuffle(base + ((ctx.r5.u32 + ctx.r8.u32) & ~0xF), VectorMaskL));
	// vupklsb128 v54,v60,v96
	_mm_store_si128((__m128i*)ctx.v54.s32, _mm_cvtepi16_epi32(_mm_load_si128((__m128i*)ctx.v60.s16)));
	// vupkhsb128 v53,v59,v96
	_mm_store_si128((__m128i*)ctx.v53.s32, _mm_cvtepi16_epi32(_mm_unpackhi_epi64(_mm_load_si128((__m128i*)ctx.v59.s16), _mm_load_si128((__m128i*)ctx.v59.s16))));
	// lvx128 v40,r5,r7
	simd::store_shuffled(ctx.v40, simd::load_and_shuffle(base + ((ctx.r5.u32 + ctx.r7.u32) & ~0xF), VectorMaskL));
	// vupklsb128 v51,v59,v96
	_mm_store_si128((__m128i*)ctx.v51.s32, _mm_cvtepi16_epi32(_mm_load_si128((__m128i*)ctx.v59.s16)));
	// vcsxwfp128 v52,v61,0
	_mm_store_ps(ctx.v52.f32, _mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v61.u32)));
	// vupkhsb128 v50,v57,v96
	_mm_store_si128((__m128i*)ctx.v50.s32, _mm_cvtepi16_epi32(_mm_unpackhi_epi64(_mm_load_si128((__m128i*)ctx.v57.s16), _mm_load_si128((__m128i*)ctx.v57.s16))));
	// vcsxwfp128 v49,v56,0
	_mm_store_ps(ctx.v49.f32, _mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v56.u32)));
	// vupklsb128 v48,v57,v96
	_mm_store_si128((__m128i*)ctx.v48.s32, _mm_cvtepi16_epi32(_mm_load_si128((__m128i*)ctx.v57.s16)));
	// vcsxwfp128 v47,v54,0
	_mm_store_ps(ctx.v47.f32, _mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v54.u32)));
	// vupkhsb128 v46,v55,v96
	_mm_store_si128((__m128i*)ctx.v46.s32, _mm_cvtepi16_epi32(_mm_unpackhi_epi64(_mm_load_si128((__m128i*)ctx.v55.s16), _mm_load_si128((__m128i*)ctx.v55.s16))));
	// li r4,112
	ctx.r4.s64 = 112;
	// li r3,128
	ctx.r3.s64 = 128;
	// vcsxwfp128 v45,v53,0
	_mm_store_ps(ctx.v45.f32, _mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v53.u32)));
	// li r11,144
	ctx.r11.s64 = 144;
	// vcsxwfp128 v44,v51,0
	_mm_store_ps(ctx.v44.f32, _mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v51.u32)));
	// vcsxwfp128 v43,v50,0
	_mm_store_ps(ctx.v43.f32, _mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v50.u32)));
	// li r10,160
	ctx.r10.s64 = 160;
	// vcsxwfp128 v42,v48,0
	_mm_store_ps(ctx.v42.f32, _mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v48.u32)));
	// li r9,176
	ctx.r9.s64 = 176;
	// vcsxwfp128 v41,v46,0
	_mm_store_ps(ctx.v41.f32, _mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v46.u32)));
	// li r8,192
	ctx.r8.s64 = 192;
	// li r7,208
	ctx.r7.s64 = 208;
	// lvx128 v39,r5,r6
	simd::store_shuffled(ctx.v39, simd::load_and_shuffle(base + ((ctx.r5.u32 + ctx.r6.u32) & ~0xF), VectorMaskL));
	// lvx128 v38,r5,r4
	simd::store_shuffled(ctx.v38, simd::load_and_shuffle(base + ((ctx.r5.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lvx128 v37,r5,r3
	simd::store_shuffled(ctx.v37, simd::load_and_shuffle(base + ((ctx.r5.u32 + ctx.r3.u32) & ~0xF), VectorMaskL));
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lvx128 v36,r5,r11
	simd::store_shuffled(ctx.v36, simd::load_and_shuffle(base + ((ctx.r5.u32 + ctx.r11.u32) & ~0xF), VectorMaskL));
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
	// lvx128 v35,r5,r10
	simd::store_shuffled(ctx.v35, simd::load_and_shuffle(base + ((ctx.r5.u32 + ctx.r10.u32) & ~0xF), VectorMaskL));
	// lvx128 v34,r5,r9
	simd::store_shuffled(ctx.v34, simd::load_and_shuffle(base + ((ctx.r5.u32 + ctx.r9.u32) & ~0xF), VectorMaskL));
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// lvx128 v33,r5,r8
	simd::store_shuffled(ctx.v33, simd::load_and_shuffle(base + ((ctx.r5.u32 + ctx.r8.u32) & ~0xF), VectorMaskL));
	// addi r9,r1,160
	ctx.r9.s64 = ctx.r1.s64 + 160;
	// lvx128 v32,r5,r7
	simd::store_shuffled(ctx.v32, simd::load_and_shuffle(base + ((ctx.r5.u32 + ctx.r7.u32) & ~0xF), VectorMaskL));
	// addi r8,r1,176
	ctx.r8.s64 = ctx.r1.s64 + 176;
	// addi r7,r1,192
	ctx.r7.s64 = ctx.r1.s64 + 192;
	// vupklsb128 v63,v55,v96
	_mm_store_si128((__m128i*)ctx.v63.s32, _mm_cvtepi16_epi32(_mm_load_si128((__m128i*)ctx.v55.s16)));
	// addi r28,r1,208
	ctx.r28.s64 = ctx.r1.s64 + 208;
	// stvx128 v58,r0,r6
	_mm_store_si128((__m128i*)(base + ((ctx.r6.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v58.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v52,r0,r4
	_mm_store_si128((__m128i*)(base + ((ctx.r4.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v52.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// vupkhsb128 v62,v40,v96
	_mm_store_si128((__m128i*)ctx.v62.s32, _mm_cvtepi16_epi32(_mm_unpackhi_epi64(_mm_load_si128((__m128i*)ctx.v40.s16), _mm_load_si128((__m128i*)ctx.v40.s16))));
	// stvx128 v49,r0,r3
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v49.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// vupklsb128 v61,v40,v96
	_mm_store_si128((__m128i*)ctx.v61.s32, _mm_cvtepi16_epi32(_mm_load_si128((__m128i*)ctx.v40.s16)));
	// stvx128 v47,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v47.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// vupkhsb128 v60,v39,v96
	_mm_store_si128((__m128i*)ctx.v60.s32, _mm_cvtepi16_epi32(_mm_unpackhi_epi64(_mm_load_si128((__m128i*)ctx.v39.s16), _mm_load_si128((__m128i*)ctx.v39.s16))));
	// vupklsb128 v59,v39,v96
	_mm_store_si128((__m128i*)ctx.v59.s32, _mm_cvtepi16_epi32(_mm_load_si128((__m128i*)ctx.v39.s16)));
	// stvx128 v45,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v45.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// vupkhsb128 v58,v38,v96
	_mm_store_si128((__m128i*)ctx.v58.s32, _mm_cvtepi16_epi32(_mm_unpackhi_epi64(_mm_load_si128((__m128i*)ctx.v38.s16), _mm_load_si128((__m128i*)ctx.v38.s16))));
	// stvx128 v44,r0,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v44.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// vupklsb128 v57,v38,v96
	_mm_store_si128((__m128i*)ctx.v57.s32, _mm_cvtepi16_epi32(_mm_load_si128((__m128i*)ctx.v38.s16)));
	// stvx128 v43,r0,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v43.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// vupkhsb128 v56,v37,v96
	_mm_store_si128((__m128i*)ctx.v56.s32, _mm_cvtepi16_epi32(_mm_unpackhi_epi64(_mm_load_si128((__m128i*)ctx.v37.s16), _mm_load_si128((__m128i*)ctx.v37.s16))));
	// stvx128 v42,r0,r7
	_mm_store_si128((__m128i*)(base + ((ctx.r7.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v42.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// vupklsb128 v55,v37,v96
	_mm_store_si128((__m128i*)ctx.v55.s32, _mm_cvtepi16_epi32(_mm_load_si128((__m128i*)ctx.v37.s16)));
	// stvx128 v41,r0,r28
	_mm_store_si128((__m128i*)(base + ((ctx.r28.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v41.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// vupkhsb128 v54,v36,v96
	_mm_store_si128((__m128i*)ctx.v54.s32, _mm_cvtepi16_epi32(_mm_unpackhi_epi64(_mm_load_si128((__m128i*)ctx.v36.s16), _mm_load_si128((__m128i*)ctx.v36.s16))));
	// vupklsb128 v53,v36,v96
	_mm_store_si128((__m128i*)ctx.v53.s32, _mm_cvtepi16_epi32(_mm_load_si128((__m128i*)ctx.v36.s16)));
	// vupkhsb128 v52,v35,v96
	_mm_store_si128((__m128i*)ctx.v52.s32, _mm_cvtepi16_epi32(_mm_unpackhi_epi64(_mm_load_si128((__m128i*)ctx.v35.s16), _mm_load_si128((__m128i*)ctx.v35.s16))));
	// vupklsb128 v51,v35,v96
	_mm_store_si128((__m128i*)ctx.v51.s32, _mm_cvtepi16_epi32(_mm_load_si128((__m128i*)ctx.v35.s16)));
	// vupkhsb128 v50,v34,v96
	_mm_store_si128((__m128i*)ctx.v50.s32, _mm_cvtepi16_epi32(_mm_unpackhi_epi64(_mm_load_si128((__m128i*)ctx.v34.s16), _mm_load_si128((__m128i*)ctx.v34.s16))));
	// vupklsb128 v49,v34,v96
	_mm_store_si128((__m128i*)ctx.v49.s32, _mm_cvtepi16_epi32(_mm_load_si128((__m128i*)ctx.v34.s16)));
	// vupkhsb128 v48,v33,v96
	_mm_store_si128((__m128i*)ctx.v48.s32, _mm_cvtepi16_epi32(_mm_unpackhi_epi64(_mm_load_si128((__m128i*)ctx.v33.s16), _mm_load_si128((__m128i*)ctx.v33.s16))));
	// vupklsb128 v47,v33,v96
	_mm_store_si128((__m128i*)ctx.v47.s32, _mm_cvtepi16_epi32(_mm_load_si128((__m128i*)ctx.v33.s16)));
	// vupkhsb128 v46,v32,v96
	_mm_store_si128((__m128i*)ctx.v46.s32, _mm_cvtepi16_epi32(_mm_unpackhi_epi64(_mm_load_si128((__m128i*)ctx.v32.s16), _mm_load_si128((__m128i*)ctx.v32.s16))));
	// vcsxwfp128 v44,v63,0
	_mm_store_ps(ctx.v44.f32, _mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v63.u32)));
	// vupklsb128 v45,v32,v96
	_mm_store_si128((__m128i*)ctx.v45.s32, _mm_cvtepi16_epi32(_mm_load_si128((__m128i*)ctx.v32.s16)));
	// li r6,224
	ctx.r6.s64 = 224;
	// vcsxwfp128 v43,v62,0
	_mm_store_ps(ctx.v43.f32, _mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v62.u32)));
	// li r4,240
	ctx.r4.s64 = 240;
	// vcsxwfp128 v42,v61,0
	_mm_store_ps(ctx.v42.f32, _mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v61.u32)));
	// li r3,256
	ctx.r3.s64 = 256;
	// vcsxwfp128 v41,v60,0
	_mm_store_ps(ctx.v41.f32, _mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v60.u32)));
	// li r11,272
	ctx.r11.s64 = 272;
	// vcsxwfp128 v40,v59,0
	_mm_store_ps(ctx.v40.f32, _mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v59.u32)));
	// addi r10,r1,224
	ctx.r10.s64 = ctx.r1.s64 + 224;
	// vcsxwfp128 v39,v58,0
	_mm_store_ps(ctx.v39.f32, _mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v58.u32)));
	// vcsxwfp128 v38,v57,0
	_mm_store_ps(ctx.v38.f32, _mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v57.u32)));
	// lvx128 v57,r5,r6
	simd::store_shuffled(ctx.v57, simd::load_and_shuffle(base + ((ctx.r5.u32 + ctx.r6.u32) & ~0xF), VectorMaskL));
	// vcsxwfp128 v37,v56,0
	_mm_store_ps(ctx.v37.f32, _mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v56.u32)));
	// lvx128 v56,r5,r4
	simd::store_shuffled(ctx.v56, simd::load_and_shuffle(base + ((ctx.r5.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// vcsxwfp128 v36,v55,0
	_mm_store_ps(ctx.v36.f32, _mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v55.u32)));
	// lvx128 v55,r5,r3
	simd::store_shuffled(ctx.v55, simd::load_and_shuffle(base + ((ctx.r5.u32 + ctx.r3.u32) & ~0xF), VectorMaskL));
	// vcsxwfp128 v35,v54,0
	_mm_store_ps(ctx.v35.f32, _mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v54.u32)));
	// lvx128 v54,r5,r11
	simd::store_shuffled(ctx.v54, simd::load_and_shuffle(base + ((ctx.r5.u32 + ctx.r11.u32) & ~0xF), VectorMaskL));
	// vcsxwfp128 v34,v53,0
	_mm_store_ps(ctx.v34.f32, _mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v53.u32)));
	// addi r9,r1,240
	ctx.r9.s64 = ctx.r1.s64 + 240;
	// vcsxwfp128 v33,v52,0
	_mm_store_ps(ctx.v33.f32, _mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v52.u32)));
	// addi r8,r1,256
	ctx.r8.s64 = ctx.r1.s64 + 256;
	// vcsxwfp128 v32,v51,0
	_mm_store_ps(ctx.v32.f32, _mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v51.u32)));
	// addi r7,r1,272
	ctx.r7.s64 = ctx.r1.s64 + 272;
	// vcsxwfp128 v63,v50,0
	_mm_store_ps(ctx.v63.f32, _mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v50.u32)));
	// addi r28,r1,288
	ctx.r28.s64 = ctx.r1.s64 + 288;
	// vcsxwfp128 v62,v49,0
	_mm_store_ps(ctx.v62.f32, _mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v49.u32)));
	// addi r27,r1,304
	ctx.r27.s64 = ctx.r1.s64 + 304;
	// vcsxwfp128 v61,v48,0
	_mm_store_ps(ctx.v61.f32, _mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v48.u32)));
	// addi r26,r1,320
	ctx.r26.s64 = ctx.r1.s64 + 320;
	// vcsxwfp128 v60,v47,0
	_mm_store_ps(ctx.v60.f32, _mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v47.u32)));
	// addi r25,r1,336
	ctx.r25.s64 = ctx.r1.s64 + 336;
	// vcsxwfp128 v59,v46,0
	_mm_store_ps(ctx.v59.f32, _mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v46.u32)));
	// addi r24,r1,352
	ctx.r24.s64 = ctx.r1.s64 + 352;
	// vcsxwfp128 v58,v45,0
	_mm_store_ps(ctx.v58.f32, _mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v45.u32)));
	// addi r23,r1,368
	ctx.r23.s64 = ctx.r1.s64 + 368;
	// addi r22,r1,384
	ctx.r22.s64 = ctx.r1.s64 + 384;
	// vupkhsb128 v53,v57,v96
	_mm_store_si128((__m128i*)ctx.v53.s32, _mm_cvtepi16_epi32(_mm_unpackhi_epi64(_mm_load_si128((__m128i*)ctx.v57.s16), _mm_load_si128((__m128i*)ctx.v57.s16))));
	// addi r21,r1,400
	ctx.r21.s64 = ctx.r1.s64 + 400;
	// vupklsb128 v51,v57,v96
	_mm_store_si128((__m128i*)ctx.v51.s32, _mm_cvtepi16_epi32(_mm_load_si128((__m128i*)ctx.v57.s16)));
	// addi r20,r1,416
	ctx.r20.s64 = ctx.r1.s64 + 416;
	// vupkhsb128 v50,v56,v96
	_mm_store_si128((__m128i*)ctx.v50.s32, _mm_cvtepi16_epi32(_mm_unpackhi_epi64(_mm_load_si128((__m128i*)ctx.v56.s16), _mm_load_si128((__m128i*)ctx.v56.s16))));
	// addi r19,r1,432
	ctx.r19.s64 = ctx.r1.s64 + 432;
	// vupklsb128 v49,v56,v96
	_mm_store_si128((__m128i*)ctx.v49.s32, _mm_cvtepi16_epi32(_mm_load_si128((__m128i*)ctx.v56.s16)));
	// addi r18,r1,448
	ctx.r18.s64 = ctx.r1.s64 + 448;
	// vupkhsb128 v48,v55,v96
	_mm_store_si128((__m128i*)ctx.v48.s32, _mm_cvtepi16_epi32(_mm_unpackhi_epi64(_mm_load_si128((__m128i*)ctx.v55.s16), _mm_load_si128((__m128i*)ctx.v55.s16))));
	// addi r6,r1,464
	ctx.r6.s64 = ctx.r1.s64 + 464;
	// vupklsb128 v47,v55,v96
	_mm_store_si128((__m128i*)ctx.v47.s32, _mm_cvtepi16_epi32(_mm_load_si128((__m128i*)ctx.v55.s16)));
	// addi r4,r1,480
	ctx.r4.s64 = ctx.r1.s64 + 480;
	// vupkhsb128 v46,v54,v96
	_mm_store_si128((__m128i*)ctx.v46.s32, _mm_cvtepi16_epi32(_mm_unpackhi_epi64(_mm_load_si128((__m128i*)ctx.v54.s16), _mm_load_si128((__m128i*)ctx.v54.s16))));
	// addi r3,r1,496
	ctx.r3.s64 = ctx.r1.s64 + 496;
	// addi r11,r1,512
	ctx.r11.s64 = ctx.r1.s64 + 512;
	// stvx128 v44,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v44.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r10,288
	ctx.r10.s64 = 288;
	// stvx128 v43,r0,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v43.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v42,r0,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v42.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r9,304
	ctx.r9.s64 = 304;
	// stvx128 v41,r0,r7
	_mm_store_si128((__m128i*)(base + ((ctx.r7.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v41.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r8,320
	ctx.r8.s64 = 320;
	// stvx128 v40,r0,r28
	_mm_store_si128((__m128i*)(base + ((ctx.r28.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v40.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r7,336
	ctx.r7.s64 = 336;
	// stvx128 v39,r0,r27
	_mm_store_si128((__m128i*)(base + ((ctx.r27.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v39.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r28,368
	ctx.r28.s64 = 368;
	// lvx128 v52,r5,r10
	simd::store_shuffled(ctx.v52, simd::load_and_shuffle(base + ((ctx.r5.u32 + ctx.r10.u32) & ~0xF), VectorMaskL));
	// li r10,352
	ctx.r10.s64 = 352;
	// stvx128 v38,r0,r26
	_mm_store_si128((__m128i*)(base + ((ctx.r26.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v38.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r27,384
	ctx.r27.s64 = 384;
	// stvx128 v37,r0,r25
	_mm_store_si128((__m128i*)(base + ((ctx.r25.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v37.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v36,r0,r24
	_mm_store_si128((__m128i*)(base + ((ctx.r24.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v36.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v35,r0,r23
	_mm_store_si128((__m128i*)(base + ((ctx.r23.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v35.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v34,r0,r22
	_mm_store_si128((__m128i*)(base + ((ctx.r22.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v34.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v33,r0,r21
	_mm_store_si128((__m128i*)(base + ((ctx.r21.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v33.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v32,r0,r20
	_mm_store_si128((__m128i*)(base + ((ctx.r20.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v32.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r19
	_mm_store_si128((__m128i*)(base + ((ctx.r19.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v62,r0,r18
	_mm_store_si128((__m128i*)(base + ((ctx.r18.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v62.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v61,r0,r6
	_mm_store_si128((__m128i*)(base + ((ctx.r6.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v61.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v60,r0,r4
	_mm_store_si128((__m128i*)(base + ((ctx.r4.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v60.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v59,r0,r3
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v59.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v58,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v58.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// vcsxwfp128 v38,v53,0
	_mm_store_ps(ctx.v38.f32, _mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v53.u32)));
	// lvx128 v45,r5,r9
	simd::store_shuffled(ctx.v45, simd::load_and_shuffle(base + ((ctx.r5.u32 + ctx.r9.u32) & ~0xF), VectorMaskL));
	// lvx128 v43,r5,r8
	simd::store_shuffled(ctx.v43, simd::load_and_shuffle(base + ((ctx.r5.u32 + ctx.r8.u32) & ~0xF), VectorMaskL));
	// vcsxwfp128 v36,v51,0
	_mm_store_ps(ctx.v36.f32, _mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v51.u32)));
	// lvx128 v41,r5,r7
	simd::store_shuffled(ctx.v41, simd::load_and_shuffle(base + ((ctx.r5.u32 + ctx.r7.u32) & ~0xF), VectorMaskL));
	// vupklsb128 v44,v54,v96
	_mm_store_si128((__m128i*)ctx.v44.s32, _mm_cvtepi16_epi32(_mm_load_si128((__m128i*)ctx.v54.s16)));
	// vupkhsb128 v42,v52,v96
	_mm_store_si128((__m128i*)ctx.v42.s32, _mm_cvtepi16_epi32(_mm_unpackhi_epi64(_mm_load_si128((__m128i*)ctx.v52.s16), _mm_load_si128((__m128i*)ctx.v52.s16))));
	// li r9,400
	ctx.r9.s64 = 400;
	// vupklsb128 v40,v52,v96
	_mm_store_si128((__m128i*)ctx.v40.s32, _mm_cvtepi16_epi32(_mm_load_si128((__m128i*)ctx.v52.s16)));
	// li r8,416
	ctx.r8.s64 = 416;
	// vupkhsb128 v39,v45,v96
	_mm_store_si128((__m128i*)ctx.v39.s32, _mm_cvtepi16_epi32(_mm_unpackhi_epi64(_mm_load_si128((__m128i*)ctx.v45.s16), _mm_load_si128((__m128i*)ctx.v45.s16))));
	// addi r7,r1,528
	ctx.r7.s64 = ctx.r1.s64 + 528;
	// vupklsb128 v37,v45,v96
	_mm_store_si128((__m128i*)ctx.v37.s32, _mm_cvtepi16_epi32(_mm_load_si128((__m128i*)ctx.v45.s16)));
	// vcsxwfp128 v34,v50,0
	_mm_store_ps(ctx.v34.f32, _mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v50.u32)));
	// vupkhsb128 v35,v43,v96
	_mm_store_si128((__m128i*)ctx.v35.s32, _mm_cvtepi16_epi32(_mm_unpackhi_epi64(_mm_load_si128((__m128i*)ctx.v43.s16), _mm_load_si128((__m128i*)ctx.v43.s16))));
	// vcsxwfp128 v32,v49,0
	_mm_store_ps(ctx.v32.f32, _mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v49.u32)));
	// vupklsb128 v33,v43,v96
	_mm_store_si128((__m128i*)ctx.v33.s32, _mm_cvtepi16_epi32(_mm_load_si128((__m128i*)ctx.v43.s16)));
	// addi r6,r1,544
	ctx.r6.s64 = ctx.r1.s64 + 544;
	// vupkhsb128 v63,v41,v96
	_mm_store_si128((__m128i*)ctx.v63.s32, _mm_cvtepi16_epi32(_mm_unpackhi_epi64(_mm_load_si128((__m128i*)ctx.v41.s16), _mm_load_si128((__m128i*)ctx.v41.s16))));
	// vcsxwfp128 v62,v48,0
	_mm_store_ps(ctx.v62.f32, _mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v48.u32)));
	// vupklsb128 v61,v41,v96
	_mm_store_si128((__m128i*)ctx.v61.s32, _mm_cvtepi16_epi32(_mm_load_si128((__m128i*)ctx.v41.s16)));
	// vcsxwfp128 v60,v47,0
	_mm_store_ps(ctx.v60.f32, _mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v47.u32)));
	// vcsxwfp128 v59,v46,0
	_mm_store_ps(ctx.v59.f32, _mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v46.u32)));
	// lvx128 v56,r5,r10
	simd::store_shuffled(ctx.v56, simd::load_and_shuffle(base + ((ctx.r5.u32 + ctx.r10.u32) & ~0xF), VectorMaskL));
	// vcsxwfp128 v58,v44,0
	_mm_store_ps(ctx.v58.f32, _mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v44.u32)));
	// lvx128 v47,r5,r28
	simd::store_shuffled(ctx.v47, simd::load_and_shuffle(base + ((ctx.r5.u32 + ctx.r28.u32) & ~0xF), VectorMaskL));
	// vcsxwfp128 v57,v42,0
	_mm_store_ps(ctx.v57.f32, _mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v42.u32)));
	// lvx128 v46,r5,r27
	simd::store_shuffled(ctx.v46, simd::load_and_shuffle(base + ((ctx.r5.u32 + ctx.r27.u32) & ~0xF), VectorMaskL));
	// vcsxwfp128 v55,v40,0
	_mm_store_ps(ctx.v55.f32, _mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v40.u32)));
	// lvx128 v45,r5,r9
	simd::store_shuffled(ctx.v45, simd::load_and_shuffle(base + ((ctx.r5.u32 + ctx.r9.u32) & ~0xF), VectorMaskL));
	// vcsxwfp128 v54,v39,0
	_mm_store_ps(ctx.v54.f32, _mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v39.u32)));
	// lvx128 v44,r5,r8
	simd::store_shuffled(ctx.v44, simd::load_and_shuffle(base + ((ctx.r5.u32 + ctx.r8.u32) & ~0xF), VectorMaskL));
	// vcsxwfp128 v53,v37,0
	_mm_store_ps(ctx.v53.f32, _mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v37.u32)));
	// addi r4,r1,560
	ctx.r4.s64 = ctx.r1.s64 + 560;
	// vcsxwfp128 v52,v35,0
	_mm_store_ps(ctx.v52.f32, _mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v35.u32)));
	// addi r3,r1,576
	ctx.r3.s64 = ctx.r1.s64 + 576;
	// vcsxwfp128 v51,v33,0
	_mm_store_ps(ctx.v51.f32, _mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v33.u32)));
	// addi r11,r1,592
	ctx.r11.s64 = ctx.r1.s64 + 592;
	// vcsxwfp128 v50,v63,0
	_mm_store_ps(ctx.v50.f32, _mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v63.u32)));
	// addi r10,r1,608
	ctx.r10.s64 = ctx.r1.s64 + 608;
	// vcsxwfp128 v49,v61,0
	_mm_store_ps(ctx.v49.f32, _mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v61.u32)));
	// addi r26,r1,624
	ctx.r26.s64 = ctx.r1.s64 + 624;
	// addi r25,r1,640
	ctx.r25.s64 = ctx.r1.s64 + 640;
	// vupkhsb128 v48,v56,v96
	_mm_store_si128((__m128i*)ctx.v48.s32, _mm_cvtepi16_epi32(_mm_unpackhi_epi64(_mm_load_si128((__m128i*)ctx.v56.s16), _mm_load_si128((__m128i*)ctx.v56.s16))));
	// addi r24,r1,656
	ctx.r24.s64 = ctx.r1.s64 + 656;
	// vupklsb128 v43,v56,v96
	_mm_store_si128((__m128i*)ctx.v43.s32, _mm_cvtepi16_epi32(_mm_load_si128((__m128i*)ctx.v56.s16)));
	// addi r28,r1,672
	ctx.r28.s64 = ctx.r1.s64 + 672;
	// vupkhsb128 v42,v47,v96
	_mm_store_si128((__m128i*)ctx.v42.s32, _mm_cvtepi16_epi32(_mm_unpackhi_epi64(_mm_load_si128((__m128i*)ctx.v47.s16), _mm_load_si128((__m128i*)ctx.v47.s16))));
	// addi r27,r1,688
	ctx.r27.s64 = ctx.r1.s64 + 688;
	// vupklsb128 v41,v47,v96
	_mm_store_si128((__m128i*)ctx.v41.s32, _mm_cvtepi16_epi32(_mm_load_si128((__m128i*)ctx.v47.s16)));
	// addi r9,r1,704
	ctx.r9.s64 = ctx.r1.s64 + 704;
	// vupkhsb128 v40,v46,v96
	_mm_store_si128((__m128i*)ctx.v40.s32, _mm_cvtepi16_epi32(_mm_unpackhi_epi64(_mm_load_si128((__m128i*)ctx.v46.s16), _mm_load_si128((__m128i*)ctx.v46.s16))));
	// addi r8,r1,720
	ctx.r8.s64 = ctx.r1.s64 + 720;
	// stvx128 v38,r0,r7
	_mm_store_si128((__m128i*)(base + ((ctx.r7.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v38.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r7,r1,736
	ctx.r7.s64 = ctx.r1.s64 + 736;
	// stvx128 v36,r0,r6
	_mm_store_si128((__m128i*)(base + ((ctx.r6.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v36.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r6,r1,752
	ctx.r6.s64 = ctx.r1.s64 + 752;
	// vupklsb128 v39,v46,v96
	_mm_store_si128((__m128i*)ctx.v39.s32, _mm_cvtepi16_epi32(_mm_load_si128((__m128i*)ctx.v46.s16)));
	// addi r23,r1,768
	ctx.r23.s64 = ctx.r1.s64 + 768;
	// stvx128 v34,r0,r4
	_mm_store_si128((__m128i*)(base + ((ctx.r4.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v34.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r22,432
	ctx.r22.s64 = 432;
	// vupkhsb128 v38,v45,v96
	_mm_store_si128((__m128i*)ctx.v38.s32, _mm_cvtepi16_epi32(_mm_unpackhi_epi64(_mm_load_si128((__m128i*)ctx.v45.s16), _mm_load_si128((__m128i*)ctx.v45.s16))));
	// addi r4,r1,784
	ctx.r4.s64 = ctx.r1.s64 + 784;
	// stvx128 v32,r0,r3
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v32.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v62,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v62.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// vupklsb128 v36,v45,v96
	_mm_store_si128((__m128i*)ctx.v36.s32, _mm_cvtepi16_epi32(_mm_load_si128((__m128i*)ctx.v45.s16)));
	// stvx128 v60,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v60.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// vupkhsb128 v35,v44,v96
	_mm_store_si128((__m128i*)ctx.v35.s32, _mm_cvtepi16_epi32(_mm_unpackhi_epi64(_mm_load_si128((__m128i*)ctx.v44.s16), _mm_load_si128((__m128i*)ctx.v44.s16))));
	// stvx128 v59,r0,r26
	_mm_store_si128((__m128i*)(base + ((ctx.r26.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v59.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// vupklsb128 v34,v44,v96
	_mm_store_si128((__m128i*)ctx.v34.s32, _mm_cvtepi16_epi32(_mm_load_si128((__m128i*)ctx.v44.s16)));
	// lvx128 v37,r5,r22
	simd::store_shuffled(ctx.v37, simd::load_and_shuffle(base + ((ctx.r5.u32 + ctx.r22.u32) & ~0xF), VectorMaskL));
	// vcsxwfp128 v33,v48,0
	_mm_store_ps(ctx.v33.f32, _mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v48.u32)));
	// stvx128 v58,r0,r25
	_mm_store_si128((__m128i*)(base + ((ctx.r25.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v58.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v57,r0,r24
	_mm_store_si128((__m128i*)(base + ((ctx.r24.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v57.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v55,r0,r28
	_mm_store_si128((__m128i*)(base + ((ctx.r28.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v55.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v54,r0,r27
	_mm_store_si128((__m128i*)(base + ((ctx.r27.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v54.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v53,r0,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v53.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v52,r0,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v52.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v51,r0,r7
	_mm_store_si128((__m128i*)(base + ((ctx.r7.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v51.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v50,r0,r6
	_mm_store_si128((__m128i*)(base + ((ctx.r6.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v50.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v49,r0,r23
	_mm_store_si128((__m128i*)(base + ((ctx.r23.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v49.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r3,448
	ctx.r3.s64 = 448;
	// vcsxwfp128 v62,v43,0
	_mm_store_ps(ctx.v62.f32, _mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v43.u32)));
	// vcsxwfp128 v61,v42,0
	_mm_store_ps(ctx.v61.f32, _mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v42.u32)));
	// li r11,464
	ctx.r11.s64 = 464;
	// li r10,480
	ctx.r10.s64 = 480;
	// vcsxwfp128 v60,v41,0
	_mm_store_ps(ctx.v60.f32, _mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v41.u32)));
	// li r9,496
	ctx.r9.s64 = 496;
	// vupkhsb128 v32,v37,v96
	_mm_store_si128((__m128i*)ctx.v32.s32, _mm_cvtepi16_epi32(_mm_unpackhi_epi64(_mm_load_si128((__m128i*)ctx.v37.s16), _mm_load_si128((__m128i*)ctx.v37.s16))));
	// li r8,512
	ctx.r8.s64 = 512;
	// vupklsb128 v63,v37,v96
	_mm_store_si128((__m128i*)ctx.v63.s32, _mm_cvtepi16_epi32(_mm_load_si128((__m128i*)ctx.v37.s16)));
	// lvx128 v58,r5,r3
	simd::store_shuffled(ctx.v58, simd::load_and_shuffle(base + ((ctx.r5.u32 + ctx.r3.u32) & ~0xF), VectorMaskL));
	// li r7,528
	ctx.r7.s64 = 528;
	// li r6,544
	ctx.r6.s64 = 544;
	// vcsxwfp128 v59,v40,0
	_mm_store_ps(ctx.v59.f32, _mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v40.u32)));
	// li r3,560
	ctx.r3.s64 = 560;
	// vupkhsb128 v55,v58,v96
	_mm_store_si128((__m128i*)ctx.v55.s32, _mm_cvtepi16_epi32(_mm_unpackhi_epi64(_mm_load_si128((__m128i*)ctx.v58.s16), _mm_load_si128((__m128i*)ctx.v58.s16))));
	// li r28,576
	ctx.r28.s64 = 576;
	// vupklsb128 v53,v58,v96
	_mm_store_si128((__m128i*)ctx.v53.s32, _mm_cvtepi16_epi32(_mm_load_si128((__m128i*)ctx.v58.s16)));
	// addi r27,r1,800
	ctx.r27.s64 = ctx.r1.s64 + 800;
	// vcsxwfp128 v57,v39,0
	_mm_store_ps(ctx.v57.f32, _mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v39.u32)));
	// addi r26,r1,816
	ctx.r26.s64 = ctx.r1.s64 + 816;
	// lvx128 v46,r5,r11
	simd::store_shuffled(ctx.v46, simd::load_and_shuffle(base + ((ctx.r5.u32 + ctx.r11.u32) & ~0xF), VectorMaskL));
	// lvx128 v45,r5,r10
	simd::store_shuffled(ctx.v45, simd::load_and_shuffle(base + ((ctx.r5.u32 + ctx.r10.u32) & ~0xF), VectorMaskL));
	// addi r11,r1,832
	ctx.r11.s64 = ctx.r1.s64 + 832;
	// lvx128 v44,r5,r9
	simd::store_shuffled(ctx.v44, simd::load_and_shuffle(base + ((ctx.r5.u32 + ctx.r9.u32) & ~0xF), VectorMaskL));
	// addi r10,r1,848
	ctx.r10.s64 = ctx.r1.s64 + 848;
	// lvx128 v43,r5,r8
	simd::store_shuffled(ctx.v43, simd::load_and_shuffle(base + ((ctx.r5.u32 + ctx.r8.u32) & ~0xF), VectorMaskL));
	// addi r9,r1,864
	ctx.r9.s64 = ctx.r1.s64 + 864;
	// lvx128 v42,r5,r7
	simd::store_shuffled(ctx.v42, simd::load_and_shuffle(base + ((ctx.r5.u32 + ctx.r7.u32) & ~0xF), VectorMaskL));
	// addi r8,r1,880
	ctx.r8.s64 = ctx.r1.s64 + 880;
	// lvx128 v41,r5,r6
	simd::store_shuffled(ctx.v41, simd::load_and_shuffle(base + ((ctx.r5.u32 + ctx.r6.u32) & ~0xF), VectorMaskL));
	// addi r7,r1,896
	ctx.r7.s64 = ctx.r1.s64 + 896;
	// lvx128 v40,r5,r3
	simd::store_shuffled(ctx.v40, simd::load_and_shuffle(base + ((ctx.r5.u32 + ctx.r3.u32) & ~0xF), VectorMaskL));
	// addi r6,r1,912
	ctx.r6.s64 = ctx.r1.s64 + 912;
	// lvx128 v39,r5,r28
	simd::store_shuffled(ctx.v39, simd::load_and_shuffle(base + ((ctx.r5.u32 + ctx.r28.u32) & ~0xF), VectorMaskL));
	// addi r3,r1,928
	ctx.r3.s64 = ctx.r1.s64 + 928;
	// addi r28,r1,944
	ctx.r28.s64 = ctx.r1.s64 + 944;
	// vcsxwfp128 v56,v38,0
	_mm_store_ps(ctx.v56.f32, _mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v38.u32)));
	// vcsxwfp128 v54,v36,0
	_mm_store_ps(ctx.v54.f32, _mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v36.u32)));
	// stvx128 v33,r0,r4
	_mm_store_si128((__m128i*)(base + ((ctx.r4.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v33.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// vcsxwfp128 v52,v35,0
	_mm_store_ps(ctx.v52.f32, _mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v35.u32)));
	// addi r4,r1,960
	ctx.r4.s64 = ctx.r1.s64 + 960;
	// vcsxwfp128 v51,v34,0
	_mm_store_ps(ctx.v51.f32, _mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v34.u32)));
	// stvx128 v62,r0,r27
	_mm_store_si128((__m128i*)(base + ((ctx.r27.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v62.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// vcsxwfp128 v50,v32,0
	_mm_store_ps(ctx.v50.f32, _mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v32.u32)));
	// addi r27,r1,976
	ctx.r27.s64 = ctx.r1.s64 + 976;
	// vcsxwfp128 v49,v63,0
	_mm_store_ps(ctx.v49.f32, _mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v63.u32)));
	// stvx128 v61,r0,r26
	_mm_store_si128((__m128i*)(base + ((ctx.r26.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v61.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// vcsxwfp128 v48,v55,0
	_mm_store_ps(ctx.v48.f32, _mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v55.u32)));
	// addi r26,r1,992
	ctx.r26.s64 = ctx.r1.s64 + 992;
	// vcsxwfp128 v47,v53,0
	_mm_store_ps(ctx.v47.f32, _mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v53.u32)));
	// stvx128 v60,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v60.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,592
	ctx.r11.s64 = 592;
	// stvx128 v59,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v59.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v57,r0,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v57.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// vupkhsb128 v38,v46,v96
	_mm_store_si128((__m128i*)ctx.v38.s32, _mm_cvtepi16_epi32(_mm_unpackhi_epi64(_mm_load_si128((__m128i*)ctx.v46.s16), _mm_load_si128((__m128i*)ctx.v46.s16))));
	// vupklsb128 v37,v46,v96
	_mm_store_si128((__m128i*)ctx.v37.s32, _mm_cvtepi16_epi32(_mm_load_si128((__m128i*)ctx.v46.s16)));
	// li r10,608
	ctx.r10.s64 = 608;
	// vupkhsb128 v36,v45,v96
	_mm_store_si128((__m128i*)ctx.v36.s32, _mm_cvtepi16_epi32(_mm_unpackhi_epi64(_mm_load_si128((__m128i*)ctx.v45.s16), _mm_load_si128((__m128i*)ctx.v45.s16))));
	// li r9,624
	ctx.r9.s64 = 624;
	// stvx128 v56,r0,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v56.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// vupklsb128 v35,v45,v96
	_mm_store_si128((__m128i*)ctx.v35.s32, _mm_cvtepi16_epi32(_mm_load_si128((__m128i*)ctx.v45.s16)));
	// lvx128 v34,r5,r11
	simd::store_shuffled(ctx.v34, simd::load_and_shuffle(base + ((ctx.r5.u32 + ctx.r11.u32) & ~0xF), VectorMaskL));
	// vupkhsb128 v33,v44,v96
	_mm_store_si128((__m128i*)ctx.v33.s32, _mm_cvtepi16_epi32(_mm_unpackhi_epi64(_mm_load_si128((__m128i*)ctx.v44.s16), _mm_load_si128((__m128i*)ctx.v44.s16))));
	// stvx128 v54,r0,r7
	_mm_store_si128((__m128i*)(base + ((ctx.r7.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v54.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// vupklsb128 v32,v44,v96
	_mm_store_si128((__m128i*)ctx.v32.s32, _mm_cvtepi16_epi32(_mm_load_si128((__m128i*)ctx.v44.s16)));
	// stvx128 v52,r0,r6
	_mm_store_si128((__m128i*)(base + ((ctx.r6.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v52.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// vupkhsb128 v63,v43,v96
	_mm_store_si128((__m128i*)ctx.v63.s32, _mm_cvtepi16_epi32(_mm_unpackhi_epi64(_mm_load_si128((__m128i*)ctx.v43.s16), _mm_load_si128((__m128i*)ctx.v43.s16))));
	// stvx128 v51,r0,r3
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v51.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// vupklsb128 v62,v43,v96
	_mm_store_si128((__m128i*)ctx.v62.s32, _mm_cvtepi16_epi32(_mm_load_si128((__m128i*)ctx.v43.s16)));
	// stvx128 v50,r0,r28
	_mm_store_si128((__m128i*)(base + ((ctx.r28.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v50.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// vupkhsb128 v61,v42,v96
	_mm_store_si128((__m128i*)ctx.v61.s32, _mm_cvtepi16_epi32(_mm_unpackhi_epi64(_mm_load_si128((__m128i*)ctx.v42.s16), _mm_load_si128((__m128i*)ctx.v42.s16))));
	// stvx128 v49,r0,r4
	_mm_store_si128((__m128i*)(base + ((ctx.r4.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v49.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// vupklsb128 v60,v42,v96
	_mm_store_si128((__m128i*)ctx.v60.s32, _mm_cvtepi16_epi32(_mm_load_si128((__m128i*)ctx.v42.s16)));
	// stvx128 v48,r0,r27
	_mm_store_si128((__m128i*)(base + ((ctx.r27.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v48.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// vupkhsb128 v59,v41,v96
	_mm_store_si128((__m128i*)ctx.v59.s32, _mm_cvtepi16_epi32(_mm_unpackhi_epi64(_mm_load_si128((__m128i*)ctx.v41.s16), _mm_load_si128((__m128i*)ctx.v41.s16))));
	// stvx128 v47,r0,r26
	_mm_store_si128((__m128i*)(base + ((ctx.r26.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v47.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// vupklsb128 v58,v41,v96
	_mm_store_si128((__m128i*)ctx.v58.s32, _mm_cvtepi16_epi32(_mm_load_si128((__m128i*)ctx.v41.s16)));
	// vupkhsb128 v57,v40,v96
	_mm_store_si128((__m128i*)ctx.v57.s32, _mm_cvtepi16_epi32(_mm_unpackhi_epi64(_mm_load_si128((__m128i*)ctx.v40.s16), _mm_load_si128((__m128i*)ctx.v40.s16))));
	// vupklsb128 v56,v40,v96
	_mm_store_si128((__m128i*)ctx.v56.s32, _mm_cvtepi16_epi32(_mm_load_si128((__m128i*)ctx.v40.s16)));
	// vupkhsb128 v55,v39,v96
	_mm_store_si128((__m128i*)ctx.v55.s32, _mm_cvtepi16_epi32(_mm_unpackhi_epi64(_mm_load_si128((__m128i*)ctx.v39.s16), _mm_load_si128((__m128i*)ctx.v39.s16))));
	// lvx128 v54,r5,r10
	simd::store_shuffled(ctx.v54, simd::load_and_shuffle(base + ((ctx.r5.u32 + ctx.r10.u32) & ~0xF), VectorMaskL));
	// vupklsb128 v53,v39,v96
	_mm_store_si128((__m128i*)ctx.v53.s32, _mm_cvtepi16_epi32(_mm_load_si128((__m128i*)ctx.v39.s16)));
	// lvx128 v52,r5,r9
	simd::store_shuffled(ctx.v52, simd::load_and_shuffle(base + ((ctx.r5.u32 + ctx.r9.u32) & ~0xF), VectorMaskL));
	// vupkhsb128 v51,v34,v96
	_mm_store_si128((__m128i*)ctx.v51.s32, _mm_cvtepi16_epi32(_mm_unpackhi_epi64(_mm_load_si128((__m128i*)ctx.v34.s16), _mm_load_si128((__m128i*)ctx.v34.s16))));
	// vupklsb128 v50,v34,v96
	_mm_store_si128((__m128i*)ctx.v50.s32, _mm_cvtepi16_epi32(_mm_load_si128((__m128i*)ctx.v34.s16)));
	// vcsxwfp128 v49,v38,0
	_mm_store_ps(ctx.v49.f32, _mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v38.u32)));
	// vupkhsb128 v48,v54,v96
	_mm_store_si128((__m128i*)ctx.v48.s32, _mm_cvtepi16_epi32(_mm_unpackhi_epi64(_mm_load_si128((__m128i*)ctx.v54.s16), _mm_load_si128((__m128i*)ctx.v54.s16))));
	// vcsxwfp128 v47,v37,0
	_mm_store_ps(ctx.v47.f32, _mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v37.u32)));
	// vupklsb128 v46,v54,v96
	_mm_store_si128((__m128i*)ctx.v46.s32, _mm_cvtepi16_epi32(_mm_load_si128((__m128i*)ctx.v54.s16)));
	// vcsxwfp128 v45,v36,0
	_mm_store_ps(ctx.v45.f32, _mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v36.u32)));
	// vupkhsb128 v44,v52,v96
	_mm_store_si128((__m128i*)ctx.v44.s32, _mm_cvtepi16_epi32(_mm_unpackhi_epi64(_mm_load_si128((__m128i*)ctx.v52.s16), _mm_load_si128((__m128i*)ctx.v52.s16))));
	// vcsxwfp128 v43,v35,0
	_mm_store_ps(ctx.v43.f32, _mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v35.u32)));
	// vupklsb128 v42,v52,v96
	_mm_store_si128((__m128i*)ctx.v42.s32, _mm_cvtepi16_epi32(_mm_load_si128((__m128i*)ctx.v52.s16)));
	// vcsxwfp128 v41,v33,0
	_mm_store_ps(ctx.v41.f32, _mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v33.u32)));
	// vcsxwfp128 v40,v32,0
	_mm_store_ps(ctx.v40.f32, _mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v32.u32)));
	// addi r8,r1,1008
	ctx.r8.s64 = ctx.r1.s64 + 1008;
	// vcsxwfp128 v39,v63,0
	_mm_store_ps(ctx.v39.f32, _mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v63.u32)));
	// addi r7,r1,1024
	ctx.r7.s64 = ctx.r1.s64 + 1024;
	// vcsxwfp128 v38,v62,0
	_mm_store_ps(ctx.v38.f32, _mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v62.u32)));
	// addi r6,r1,1040
	ctx.r6.s64 = ctx.r1.s64 + 1040;
	// vcsxwfp128 v37,v61,0
	_mm_store_ps(ctx.v37.f32, _mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v61.u32)));
	// addi r5,r1,1056
	ctx.r5.s64 = ctx.r1.s64 + 1056;
	// vcsxwfp128 v36,v60,0
	_mm_store_ps(ctx.v36.f32, _mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v60.u32)));
	// addi r4,r1,1072
	ctx.r4.s64 = ctx.r1.s64 + 1072;
	// vcsxwfp128 v35,v59,0
	_mm_store_ps(ctx.v35.f32, _mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v59.u32)));
	// addi r3,r1,1088
	ctx.r3.s64 = ctx.r1.s64 + 1088;
	// vcsxwfp128 v34,v58,0
	_mm_store_ps(ctx.v34.f32, _mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v58.u32)));
	// addi r11,r1,1104
	ctx.r11.s64 = ctx.r1.s64 + 1104;
	// vcsxwfp128 v33,v57,0
	_mm_store_ps(ctx.v33.f32, _mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v57.u32)));
	// addi r10,r1,1120
	ctx.r10.s64 = ctx.r1.s64 + 1120;
	// vcsxwfp128 v32,v56,0
	_mm_store_ps(ctx.v32.f32, _mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v56.u32)));
	// addi r9,r1,1136
	ctx.r9.s64 = ctx.r1.s64 + 1136;
	// vcsxwfp128 v63,v55,0
	_mm_store_ps(ctx.v63.f32, _mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v55.u32)));
	// addi r28,r1,1152
	ctx.r28.s64 = ctx.r1.s64 + 1152;
	// vcsxwfp128 v62,v53,0
	_mm_store_ps(ctx.v62.f32, _mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v53.u32)));
	// addi r27,r1,1168
	ctx.r27.s64 = ctx.r1.s64 + 1168;
	// vcsxwfp128 v61,v51,0
	_mm_store_ps(ctx.v61.f32, _mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v51.u32)));
	// addi r26,r1,1184
	ctx.r26.s64 = ctx.r1.s64 + 1184;
	// vcsxwfp128 v60,v50,0
	_mm_store_ps(ctx.v60.f32, _mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v50.u32)));
	// addi r25,r1,1200
	ctx.r25.s64 = ctx.r1.s64 + 1200;
	// vcsxwfp128 v59,v48,0
	_mm_store_ps(ctx.v59.f32, _mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v48.u32)));
	// addi r24,r1,1216
	ctx.r24.s64 = ctx.r1.s64 + 1216;
	// vcsxwfp128 v58,v46,0
	_mm_store_ps(ctx.v58.f32, _mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v46.u32)));
	// addi r23,r1,1232
	ctx.r23.s64 = ctx.r1.s64 + 1232;
	// vcsxwfp128 v57,v44,0
	_mm_store_ps(ctx.v57.f32, _mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v44.u32)));
	// addi r22,r1,1248
	ctx.r22.s64 = ctx.r1.s64 + 1248;
	// vcsxwfp128 v56,v42,0
	_mm_store_ps(ctx.v56.f32, _mm_cvtepi32_ps(_mm_load_si128((__m128i*)ctx.v42.u32)));
	// addi r21,r1,1264
	ctx.r21.s64 = ctx.r1.s64 + 1264;
	// addi r20,r1,1280
	ctx.r20.s64 = ctx.r1.s64 + 1280;
	// stvx128 v49,r0,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v49.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r19,r1,1296
	ctx.r19.s64 = ctx.r1.s64 + 1296;
	// stvx128 v47,r0,r7
	_mm_store_si128((__m128i*)(base + ((ctx.r7.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v47.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r18,r1,1312
	ctx.r18.s64 = ctx.r1.s64 + 1312;
	// stvx128 v45,r0,r6
	_mm_store_si128((__m128i*)(base + ((ctx.r6.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v45.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r17,r1,1328
	ctx.r17.s64 = ctx.r1.s64 + 1328;
	// stvx128 v43,r0,r5
	_mm_store_si128((__m128i*)(base + ((ctx.r5.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v43.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r16,r1,1344
	ctx.r16.s64 = ctx.r1.s64 + 1344;
	// stvx128 v41,r0,r4
	_mm_store_si128((__m128i*)(base + ((ctx.r4.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v41.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v40,r0,r3
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v40.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r8,r1,1360
	ctx.r8.s64 = ctx.r1.s64 + 1360;
	// stvx128 v39,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v39.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r7,320
	ctx.r7.s64 = 320;
	// stvx128 v38,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v38.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// stvx128 v37,r0,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v37.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stvx128 v36,r0,r28
	_mm_store_si128((__m128i*)(base + ((ctx.r28.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v36.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r4,r1,2640
	ctx.r4.s64 = ctx.r1.s64 + 2640;
	// stvx128 v35,r0,r27
	_mm_store_si128((__m128i*)(base + ((ctx.r27.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v35.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r3,r1,5200
	ctx.r3.s64 = ctx.r1.s64 + 5200;
	// stvx128 v34,r0,r26
	_mm_store_si128((__m128i*)(base + ((ctx.r26.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v34.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v33,r0,r25
	_mm_store_si128((__m128i*)(base + ((ctx.r25.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v33.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v32,r0,r24
	_mm_store_si128((__m128i*)(base + ((ctx.r24.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v32.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v63,r0,r23
	_mm_store_si128((__m128i*)(base + ((ctx.r23.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v62,r0,r22
	_mm_store_si128((__m128i*)(base + ((ctx.r22.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v62.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v61,r0,r21
	_mm_store_si128((__m128i*)(base + ((ctx.r21.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v61.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v60,r0,r20
	_mm_store_si128((__m128i*)(base + ((ctx.r20.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v60.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v59,r0,r19
	_mm_store_si128((__m128i*)(base + ((ctx.r19.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v59.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v58,r0,r18
	_mm_store_si128((__m128i*)(base + ((ctx.r18.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v58.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v57,r0,r17
	_mm_store_si128((__m128i*)(base + ((ctx.r17.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v57.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v56,r0,r16
	_mm_store_si128((__m128i*)(base + ((ctx.r16.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v56.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// bl 0x82c3d4f0
	ctx.lr = 0x82C3CD5C;
	sub_82C3D4F0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82c3cd7c
	if (!ctx.cr6.eq) goto loc_82C3CD7C;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// addi r6,r1,1360
	ctx.r6.s64 = ctx.r1.s64 + 1360;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r31,640
	ctx.r3.s64 = ctx.r31.s64 + 640;
	// bl 0x82c3e260
	ctx.lr = 0x82C3CD7C;
	sub_82C3E260(ctx, base);
loc_82C3CD7C:
	// addi r1,r1,7904
	ctx.r1.s64 = ctx.r1.s64 + 7904;
	// b 0x82fa7698
	__restgprlr_16(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C3CD84"))) PPC_WEAK_FUNC(sub_82C3CD84);
PPC_FUNC_IMPL(__imp__sub_82C3CD84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C3CD88"))) PPC_WEAK_FUNC(sub_82C3CD88);
PPC_FUNC_IMPL(__imp__sub_82C3CD88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7654
	ctx.lr = 0x82C3CD90;
	__savegprlr_19(ctx, base);
	// ld r12,-4096(r1)
	ctx.r12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -4096);
	// stwu r1,-7872(r1)
	ea = -7872 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// cmplwi cr6,r4,1
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 1, ctx.xer);
	// blt cr6,0x82c3cdd0
	if (ctx.cr6.lt) goto loc_82C3CDD0;
	// beq cr6,0x82c3cdc8
	if (ctx.cr6.eq) goto loc_82C3CDC8;
	// cmplwi cr6,r4,3
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 3, ctx.xer);
	// blt cr6,0x82c3cdc0
	if (ctx.cr6.lt) goto loc_82C3CDC0;
	// li r3,3
	ctx.r3.s64 = 3;
	// addi r1,r1,7872
	ctx.r1.s64 = ctx.r1.s64 + 7872;
	// b 0x82fa76a4
	__restgprlr_19(ctx, base);
	return;
loc_82C3CDC0:
	// li r11,32000
	ctx.r11.s64 = 32000;
	// b 0x82c3cdd4
	goto loc_82C3CDD4;
loc_82C3CDC8:
	// li r11,24000
	ctx.r11.s64 = 24000;
	// b 0x82c3cdd4
	goto loc_82C3CDD4;
loc_82C3CDD0:
	// li r11,16000
	ctx.r11.s64 = 16000;
loc_82C3CDD4:
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// addi r7,r1,1360
	ctx.r7.s64 = ctx.r1.s64 + 1360;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r30,640
	ctx.r3.s64 = ctx.r30.s64 + 640;
	// bl 0x82c3f5a0
	ctx.lr = 0x82C3CDEC;
	sub_82C3F5A0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82c3d3ac
	if (!ctx.cr6.eq) goto loc_82C3D3AC;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// li r7,320
	ctx.r7.s64 = 320;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r5,r1,1360
	ctx.r5.s64 = ctx.r1.s64 + 1360;
	// addi r4,r1,2640
	ctx.r4.s64 = ctx.r1.s64 + 2640;
	// addi r3,r1,5200
	ctx.r3.s64 = ctx.r1.s64 + 5200;
	// bl 0x82c3d718
	ctx.lr = 0x82C3CE10;
	sub_82C3D718(ctx, base);
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// addi r9,r1,128
	ctx.r9.s64 = ctx.r1.s64 + 128;
	// addi r8,r1,112
	ctx.r8.s64 = ctx.r1.s64 + 112;
	// addi r7,r1,160
	ctx.r7.s64 = ctx.r1.s64 + 160;
	// addi r6,r1,144
	ctx.r6.s64 = ctx.r1.s64 + 144;
	// lvx128 v63,r0,r11
	simd::store_shuffled(ctx.v63, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// lvx128 v62,r0,r10
	simd::store_shuffled(ctx.v62, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// addi r5,r1,192
	ctx.r5.s64 = ctx.r1.s64 + 192;
	// lvx128 v60,r0,r9
	simd::store_shuffled(ctx.v60, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// lvx128 v58,r0,r8
	simd::store_shuffled(ctx.v58, simd::load_and_shuffle(base + ((ctx.r8.u32) & ~0xF), VectorMaskL));
	// addi r11,r1,224
	ctx.r11.s64 = ctx.r1.s64 + 224;
	// lvx128 v56,r0,r7
	simd::store_shuffled(ctx.v56, simd::load_and_shuffle(base + ((ctx.r7.u32) & ~0xF), VectorMaskL));
	// addi r10,r1,208
	ctx.r10.s64 = ctx.r1.s64 + 208;
	// lvx128 v54,r0,r6
	simd::store_shuffled(ctx.v54, simd::load_and_shuffle(base + ((ctx.r6.u32) & ~0xF), VectorMaskL));
	// addi r9,r1,256
	ctx.r9.s64 = ctx.r1.s64 + 256;
	// vcfpsxws128 v61,v63,0
	ctx.fpscr.enableFlushMode();
	_mm_store_si128((__m128i*)ctx.v61.s32, _mm_vctsxs(_mm_load_ps(ctx.v63.f32)));
	// lvx128 v51,r0,r5
	simd::store_shuffled(ctx.v51, simd::load_and_shuffle(base + ((ctx.r5.u32) & ~0xF), VectorMaskL));
	// vcfpsxws128 v59,v62,0
	_mm_store_si128((__m128i*)ctx.v59.s32, _mm_vctsxs(_mm_load_ps(ctx.v62.f32)));
	// lvx128 v50,r0,r4
	simd::store_shuffled(ctx.v50, simd::load_and_shuffle(base + ((ctx.r4.u32) & ~0xF), VectorMaskL));
	// vcfpsxws128 v57,v60,0
	_mm_store_si128((__m128i*)ctx.v57.s32, _mm_vctsxs(_mm_load_ps(ctx.v60.f32)));
	// lvx128 v49,r0,r11
	simd::store_shuffled(ctx.v49, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// vcfpsxws128 v55,v58,0
	_mm_store_si128((__m128i*)ctx.v55.s32, _mm_vctsxs(_mm_load_ps(ctx.v58.f32)));
	// lvx128 v48,r0,r10
	simd::store_shuffled(ctx.v48, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// vcfpsxws128 v53,v56,0
	_mm_store_si128((__m128i*)ctx.v53.s32, _mm_vctsxs(_mm_load_ps(ctx.v56.f32)));
	// lvx128 v47,r0,r9
	simd::store_shuffled(ctx.v47, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// vcfpsxws128 v52,v54,0
	_mm_store_si128((__m128i*)ctx.v52.s32, _mm_vctsxs(_mm_load_ps(ctx.v54.f32)));
	// addi r8,r1,240
	ctx.r8.s64 = ctx.r1.s64 + 240;
	// addi r7,r1,288
	ctx.r7.s64 = ctx.r1.s64 + 288;
	// vcfpsxws128 v38,v51,0
	_mm_store_si128((__m128i*)ctx.v38.s32, _mm_vctsxs(_mm_load_ps(ctx.v51.f32)));
	// addi r6,r1,272
	ctx.r6.s64 = ctx.r1.s64 + 272;
	// vcfpsxws128 v37,v50,0
	_mm_store_si128((__m128i*)ctx.v37.s32, _mm_vctsxs(_mm_load_ps(ctx.v50.f32)));
	// addi r5,r1,320
	ctx.r5.s64 = ctx.r1.s64 + 320;
	// vcfpsxws128 v36,v49,0
	_mm_store_si128((__m128i*)ctx.v36.s32, _mm_vctsxs(_mm_load_ps(ctx.v49.f32)));
	// addi r4,r1,304
	ctx.r4.s64 = ctx.r1.s64 + 304;
	// vcfpsxws128 v35,v48,0
	_mm_store_si128((__m128i*)ctx.v35.s32, _mm_vctsxs(_mm_load_ps(ctx.v48.f32)));
	// addi r11,r1,352
	ctx.r11.s64 = ctx.r1.s64 + 352;
	// lvx128 v46,r0,r8
	simd::store_shuffled(ctx.v46, simd::load_and_shuffle(base + ((ctx.r8.u32) & ~0xF), VectorMaskL));
	// addi r10,r1,336
	ctx.r10.s64 = ctx.r1.s64 + 336;
	// lvx128 v45,r0,r7
	simd::store_shuffled(ctx.v45, simd::load_and_shuffle(base + ((ctx.r7.u32) & ~0xF), VectorMaskL));
	// addi r9,r1,384
	ctx.r9.s64 = ctx.r1.s64 + 384;
	// lvx128 v44,r0,r6
	simd::store_shuffled(ctx.v44, simd::load_and_shuffle(base + ((ctx.r6.u32) & ~0xF), VectorMaskL));
	// lvx128 v43,r0,r5
	simd::store_shuffled(ctx.v43, simd::load_and_shuffle(base + ((ctx.r5.u32) & ~0xF), VectorMaskL));
	// vpkswss128 v62,v59,v61
	_mm_store_si128((__m128i*)ctx.v62.s16, _mm_packs_epi32(_mm_load_si128((__m128i*)ctx.v61.s32), _mm_load_si128((__m128i*)ctx.v59.s32)));
	// lvx128 v42,r0,r4
	simd::store_shuffled(ctx.v42, simd::load_and_shuffle(base + ((ctx.r4.u32) & ~0xF), VectorMaskL));
	// li r8,16
	ctx.r8.s64 = 16;
	// lvx128 v41,r0,r11
	simd::store_shuffled(ctx.v41, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// vpkswss128 v59,v55,v57
	_mm_store_si128((__m128i*)ctx.v59.s16, _mm_packs_epi32(_mm_load_si128((__m128i*)ctx.v57.s32), _mm_load_si128((__m128i*)ctx.v55.s32)));
	// lvx128 v40,r0,r10
	simd::store_shuffled(ctx.v40, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// li r7,32
	ctx.r7.s64 = 32;
	// lvx128 v39,r0,r9
	simd::store_shuffled(ctx.v39, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// li r6,48
	ctx.r6.s64 = 48;
	// li r5,64
	ctx.r5.s64 = 64;
	// vcfpsxws128 v34,v47,0
	_mm_store_si128((__m128i*)ctx.v34.s32, _mm_vctsxs(_mm_load_ps(ctx.v47.f32)));
	// li r4,80
	ctx.r4.s64 = 80;
	// vcfpsxws128 v33,v46,0
	_mm_store_si128((__m128i*)ctx.v33.s32, _mm_vctsxs(_mm_load_ps(ctx.v46.f32)));
	// li r11,96
	ctx.r11.s64 = 96;
	// vcfpsxws128 v32,v45,0
	_mm_store_si128((__m128i*)ctx.v32.s32, _mm_vctsxs(_mm_load_ps(ctx.v45.f32)));
	// li r10,112
	ctx.r10.s64 = 112;
	// vcfpsxws128 v63,v44,0
	_mm_store_si128((__m128i*)ctx.v63.s32, _mm_vctsxs(_mm_load_ps(ctx.v44.f32)));
	// li r9,128
	ctx.r9.s64 = 128;
	// vcfpsxws128 v61,v43,0
	_mm_store_si128((__m128i*)ctx.v61.s32, _mm_vctsxs(_mm_load_ps(ctx.v43.f32)));
	// li r30,144
	ctx.r30.s64 = 144;
	// vcfpsxws128 v60,v42,0
	_mm_store_si128((__m128i*)ctx.v60.s32, _mm_vctsxs(_mm_load_ps(ctx.v42.f32)));
	// li r29,160
	ctx.r29.s64 = 160;
	// vcfpsxws128 v58,v41,0
	_mm_store_si128((__m128i*)ctx.v58.s32, _mm_vctsxs(_mm_load_ps(ctx.v41.f32)));
	// li r28,176
	ctx.r28.s64 = 176;
	// vpkswss128 v57,v52,v53
	_mm_store_si128((__m128i*)ctx.v57.s16, _mm_packs_epi32(_mm_load_si128((__m128i*)ctx.v53.s32), _mm_load_si128((__m128i*)ctx.v52.s32)));
	// li r27,192
	ctx.r27.s64 = 192;
	// vcfpsxws128 v56,v40,0
	_mm_store_si128((__m128i*)ctx.v56.s32, _mm_vctsxs(_mm_load_ps(ctx.v40.f32)));
	// li r26,208
	ctx.r26.s64 = 208;
	// vcfpsxws128 v55,v39,0
	_mm_store_si128((__m128i*)ctx.v55.s32, _mm_vctsxs(_mm_load_ps(ctx.v39.f32)));
	// li r25,224
	ctx.r25.s64 = 224;
	// addi r24,r1,368
	ctx.r24.s64 = ctx.r1.s64 + 368;
	// vpkswss128 v54,v37,v38
	_mm_store_si128((__m128i*)ctx.v54.s16, _mm_packs_epi32(_mm_load_si128((__m128i*)ctx.v38.s32), _mm_load_si128((__m128i*)ctx.v37.s32)));
	// addi r23,r1,416
	ctx.r23.s64 = ctx.r1.s64 + 416;
	// vpkswss128 v53,v35,v36
	_mm_store_si128((__m128i*)ctx.v53.s16, _mm_packs_epi32(_mm_load_si128((__m128i*)ctx.v36.s32), _mm_load_si128((__m128i*)ctx.v35.s32)));
	// addi r22,r1,400
	ctx.r22.s64 = ctx.r1.s64 + 400;
	// vpkswss128 v52,v33,v34
	_mm_store_si128((__m128i*)ctx.v52.s16, _mm_packs_epi32(_mm_load_si128((__m128i*)ctx.v34.s32), _mm_load_si128((__m128i*)ctx.v33.s32)));
	// addi r21,r1,448
	ctx.r21.s64 = ctx.r1.s64 + 448;
	// vpkswss128 v51,v63,v32
	_mm_store_si128((__m128i*)ctx.v51.s16, _mm_packs_epi32(_mm_load_si128((__m128i*)ctx.v32.s32), _mm_load_si128((__m128i*)ctx.v63.s32)));
	// addi r20,r1,432
	ctx.r20.s64 = ctx.r1.s64 + 432;
	// vpkswss128 v50,v60,v61
	_mm_store_si128((__m128i*)ctx.v50.s16, _mm_packs_epi32(_mm_load_si128((__m128i*)ctx.v61.s32), _mm_load_si128((__m128i*)ctx.v60.s32)));
	// lvx128 v49,r0,r24
	simd::store_shuffled(ctx.v49, simd::load_and_shuffle(base + ((ctx.r24.u32) & ~0xF), VectorMaskL));
	// addi r19,r1,480
	ctx.r19.s64 = ctx.r1.s64 + 480;
	// lvx128 v48,r0,r23
	simd::store_shuffled(ctx.v48, simd::load_and_shuffle(base + ((ctx.r23.u32) & ~0xF), VectorMaskL));
	// addi r24,r1,464
	ctx.r24.s64 = ctx.r1.s64 + 464;
	// lvx128 v47,r0,r22
	simd::store_shuffled(ctx.v47, simd::load_and_shuffle(base + ((ctx.r22.u32) & ~0xF), VectorMaskL));
	// addi r23,r1,512
	ctx.r23.s64 = ctx.r1.s64 + 512;
	// addi r22,r1,496
	ctx.r22.s64 = ctx.r1.s64 + 496;
	// lvx128 v46,r0,r21
	simd::store_shuffled(ctx.v46, simd::load_and_shuffle(base + ((ctx.r21.u32) & ~0xF), VectorMaskL));
	// lvx128 v45,r0,r20
	simd::store_shuffled(ctx.v45, simd::load_and_shuffle(base + ((ctx.r20.u32) & ~0xF), VectorMaskL));
	// vcfpsxws128 v42,v49,0
	_mm_store_si128((__m128i*)ctx.v42.s32, _mm_vctsxs(_mm_load_ps(ctx.v49.f32)));
	// lvx128 v44,r0,r19
	simd::store_shuffled(ctx.v44, simd::load_and_shuffle(base + ((ctx.r19.u32) & ~0xF), VectorMaskL));
	// vcfpsxws128 v37,v46,0
	_mm_store_si128((__m128i*)ctx.v37.s32, _mm_vctsxs(_mm_load_ps(ctx.v46.f32)));
	// lvx128 v43,r0,r24
	simd::store_shuffled(ctx.v43, simd::load_and_shuffle(base + ((ctx.r24.u32) & ~0xF), VectorMaskL));
	// vcfpsxws128 v35,v45,0
	_mm_store_si128((__m128i*)ctx.v35.s32, _mm_vctsxs(_mm_load_ps(ctx.v45.f32)));
	// lvx128 v41,r0,r23
	simd::store_shuffled(ctx.v41, simd::load_and_shuffle(base + ((ctx.r23.u32) & ~0xF), VectorMaskL));
	// addi r21,r1,544
	ctx.r21.s64 = ctx.r1.s64 + 544;
	// lvx128 v39,r0,r22
	simd::store_shuffled(ctx.v39, simd::load_and_shuffle(base + ((ctx.r22.u32) & ~0xF), VectorMaskL));
	// addi r20,r1,528
	ctx.r20.s64 = ctx.r1.s64 + 528;
	// vcfpsxws128 v40,v48,0
	_mm_store_si128((__m128i*)ctx.v40.s32, _mm_vctsxs(_mm_load_ps(ctx.v48.f32)));
	// addi r24,r1,576
	ctx.r24.s64 = ctx.r1.s64 + 576;
	// vcfpsxws128 v38,v47,0
	_mm_store_si128((__m128i*)ctx.v38.s32, _mm_vctsxs(_mm_load_ps(ctx.v47.f32)));
	// addi r23,r1,560
	ctx.r23.s64 = ctx.r1.s64 + 560;
	// vcfpsxws128 v33,v44,0
	_mm_store_si128((__m128i*)ctx.v33.s32, _mm_vctsxs(_mm_load_ps(ctx.v44.f32)));
	// addi r22,r1,608
	ctx.r22.s64 = ctx.r1.s64 + 608;
	// vcfpsxws128 v32,v43,0
	_mm_store_si128((__m128i*)ctx.v32.s32, _mm_vctsxs(_mm_load_ps(ctx.v43.f32)));
	// lvx128 v36,r0,r21
	simd::store_shuffled(ctx.v36, simd::load_and_shuffle(base + ((ctx.r21.u32) & ~0xF), VectorMaskL));
	// vcfpsxws128 v63,v41,0
	_mm_store_si128((__m128i*)ctx.v63.s32, _mm_vctsxs(_mm_load_ps(ctx.v41.f32)));
	// lvx128 v34,r0,r20
	simd::store_shuffled(ctx.v34, simd::load_and_shuffle(base + ((ctx.r20.u32) & ~0xF), VectorMaskL));
	// vcfpsxws128 v61,v39,0
	_mm_store_si128((__m128i*)ctx.v61.s32, _mm_vctsxs(_mm_load_ps(ctx.v39.f32)));
	// addi r21,r1,592
	ctx.r21.s64 = ctx.r1.s64 + 592;
	// vcfpsxws128 v60,v36,0
	_mm_store_si128((__m128i*)ctx.v60.s32, _mm_vctsxs(_mm_load_ps(ctx.v36.f32)));
	// addi r20,r1,640
	ctx.r20.s64 = ctx.r1.s64 + 640;
	// vcfpsxws128 v49,v34,0
	_mm_store_si128((__m128i*)ctx.v49.s32, _mm_vctsxs(_mm_load_ps(ctx.v34.f32)));
	// vpkswss128 v46,v42,v55
	_mm_store_si128((__m128i*)ctx.v46.s16, _mm_packs_epi32(_mm_load_si128((__m128i*)ctx.v55.s32), _mm_load_si128((__m128i*)ctx.v42.s32)));
	// vpkswss128 v48,v56,v58
	_mm_store_si128((__m128i*)ctx.v48.s16, _mm_packs_epi32(_mm_load_si128((__m128i*)ctx.v58.s32), _mm_load_si128((__m128i*)ctx.v56.s32)));
	// addi r19,r1,624
	ctx.r19.s64 = ctx.r1.s64 + 624;
	// vpkswss128 v39,v35,v37
	_mm_store_si128((__m128i*)ctx.v39.s16, _mm_packs_epi32(_mm_load_si128((__m128i*)ctx.v37.s32), _mm_load_si128((__m128i*)ctx.v35.s32)));
	// lvx128 v47,r0,r24
	simd::store_shuffled(ctx.v47, simd::load_and_shuffle(base + ((ctx.r24.u32) & ~0xF), VectorMaskL));
	// lvx128 v45,r0,r23
	simd::store_shuffled(ctx.v45, simd::load_and_shuffle(base + ((ctx.r23.u32) & ~0xF), VectorMaskL));
	// vcfpsxws128 v43,v47,0
	_mm_store_si128((__m128i*)ctx.v43.s32, _mm_vctsxs(_mm_load_ps(ctx.v47.f32)));
	// lvx128 v44,r0,r22
	simd::store_shuffled(ctx.v44, simd::load_and_shuffle(base + ((ctx.r22.u32) & ~0xF), VectorMaskL));
	// li r24,240
	ctx.r24.s64 = 240;
	// lvx128 v41,r0,r21
	simd::store_shuffled(ctx.v41, simd::load_and_shuffle(base + ((ctx.r21.u32) & ~0xF), VectorMaskL));
	// vcfpsxws128 v37,v45,0
	_mm_store_si128((__m128i*)ctx.v37.s32, _mm_vctsxs(_mm_load_ps(ctx.v45.f32)));
	// vpkswss128 v42,v38,v40
	_mm_store_si128((__m128i*)ctx.v42.s16, _mm_packs_epi32(_mm_load_si128((__m128i*)ctx.v40.s32), _mm_load_si128((__m128i*)ctx.v38.s32)));
	// lvx128 v40,r0,r20
	simd::store_shuffled(ctx.v40, simd::load_and_shuffle(base + ((ctx.r20.u32) & ~0xF), VectorMaskL));
	// stvx128 v59,r31,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32 + ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v59.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r8,256
	ctx.r8.s64 = 256;
	// vpkswss128 v36,v32,v33
	_mm_store_si128((__m128i*)ctx.v36.s16, _mm_packs_epi32(_mm_load_si128((__m128i*)ctx.v33.s32), _mm_load_si128((__m128i*)ctx.v32.s32)));
	// stvx128 v57,r31,r7
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32 + ctx.r7.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v57.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v54,r31,r6
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32 + ctx.r6.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v54.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// vcfpsxws128 v34,v44,0
	_mm_store_si128((__m128i*)ctx.v34.s32, _mm_vctsxs(_mm_load_ps(ctx.v44.f32)));
	// vpkswss128 v35,v61,v63
	_mm_store_si128((__m128i*)ctx.v35.s16, _mm_packs_epi32(_mm_load_si128((__m128i*)ctx.v63.s32), _mm_load_si128((__m128i*)ctx.v61.s32)));
	// stvx128 v53,r31,r5
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32 + ctx.r5.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v53.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v38,r0,r19
	simd::store_shuffled(ctx.v38, simd::load_and_shuffle(base + ((ctx.r19.u32) & ~0xF), VectorMaskL));
	// li r7,272
	ctx.r7.s64 = 272;
	// stvx128 v62,r0,r31
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v62.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// vpkswss128 v33,v49,v60
	_mm_store_si128((__m128i*)ctx.v33.s16, _mm_packs_epi32(_mm_load_si128((__m128i*)ctx.v60.s32), _mm_load_si128((__m128i*)ctx.v49.s32)));
	// stvx128 v52,r31,r4
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32 + ctx.r4.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v52.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// vcfpsxws128 v32,v41,0
	_mm_store_si128((__m128i*)ctx.v32.s32, _mm_vctsxs(_mm_load_ps(ctx.v41.f32)));
	// stvx128 v51,r31,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32 + ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v51.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r6,288
	ctx.r6.s64 = 288;
	// stvx128 v50,r31,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32 + ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v50.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// vcfpsxws128 v63,v40,0
	_mm_store_si128((__m128i*)ctx.v63.s32, _mm_vctsxs(_mm_load_ps(ctx.v40.f32)));
	// stvx128 v48,r31,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32 + ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v48.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r5,304
	ctx.r5.s64 = 304;
	// stvx128 v46,r31,r30
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32 + ctx.r30.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v46.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v42,r31,r29
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32 + ctx.r29.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v42.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v39,r31,r28
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32 + ctx.r28.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v39.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v36,r31,r27
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32 + ctx.r27.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v36.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v35,r31,r26
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32 + ctx.r26.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v35.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r4,r1,672
	ctx.r4.s64 = ctx.r1.s64 + 672;
	// vpkswss128 v60,v32,v34
	_mm_store_si128((__m128i*)ctx.v60.s16, _mm_packs_epi32(_mm_load_si128((__m128i*)ctx.v34.s32), _mm_load_si128((__m128i*)ctx.v32.s32)));
	// addi r11,r1,656
	ctx.r11.s64 = ctx.r1.s64 + 656;
	// vcfpsxws128 v62,v38,0
	_mm_store_si128((__m128i*)ctx.v62.s32, _mm_vctsxs(_mm_load_ps(ctx.v38.f32)));
	// addi r10,r1,704
	ctx.r10.s64 = ctx.r1.s64 + 704;
	// vpkswss128 v61,v37,v43
	_mm_store_si128((__m128i*)ctx.v61.s16, _mm_packs_epi32(_mm_load_si128((__m128i*)ctx.v43.s32), _mm_load_si128((__m128i*)ctx.v37.s32)));
	// addi r9,r1,688
	ctx.r9.s64 = ctx.r1.s64 + 688;
	// stvx128 v33,r31,r25
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32 + ctx.r25.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v33.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r30,r1,736
	ctx.r30.s64 = ctx.r1.s64 + 736;
	// lvx128 v59,r0,r4
	simd::store_shuffled(ctx.v59, simd::load_and_shuffle(base + ((ctx.r4.u32) & ~0xF), VectorMaskL));
	// addi r29,r1,720
	ctx.r29.s64 = ctx.r1.s64 + 720;
	// lvx128 v58,r0,r11
	simd::store_shuffled(ctx.v58, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// addi r4,r1,768
	ctx.r4.s64 = ctx.r1.s64 + 768;
	// addi r11,r1,752
	ctx.r11.s64 = ctx.r1.s64 + 752;
	// lvx128 v56,r0,r10
	simd::store_shuffled(ctx.v56, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// lvx128 v54,r0,r9
	simd::store_shuffled(ctx.v54, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// vcfpsxws128 v55,v58,0
	_mm_store_si128((__m128i*)ctx.v55.s32, _mm_vctsxs(_mm_load_ps(ctx.v58.f32)));
	// lvx128 v52,r0,r30
	simd::store_shuffled(ctx.v52, simd::load_and_shuffle(base + ((ctx.r30.u32) & ~0xF), VectorMaskL));
	// vcfpsxws128 v57,v59,0
	_mm_store_si128((__m128i*)ctx.v57.s32, _mm_vctsxs(_mm_load_ps(ctx.v59.f32)));
	// lvx128 v50,r0,r29
	simd::store_shuffled(ctx.v50, simd::load_and_shuffle(base + ((ctx.r29.u32) & ~0xF), VectorMaskL));
	// addi r10,r1,800
	ctx.r10.s64 = ctx.r1.s64 + 800;
	// lvx128 v46,r0,r4
	simd::store_shuffled(ctx.v46, simd::load_and_shuffle(base + ((ctx.r4.u32) & ~0xF), VectorMaskL));
	// addi r9,r1,784
	ctx.r9.s64 = ctx.r1.s64 + 784;
	// lvx128 v45,r0,r11
	simd::store_shuffled(ctx.v45, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// addi r30,r1,816
	ctx.r30.s64 = ctx.r1.s64 + 816;
	// stvx128 v60,r31,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32 + ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v60.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r8,r1,832
	ctx.r8.s64 = ctx.r1.s64 + 832;
	// addi r4,r1,864
	ctx.r4.s64 = ctx.r1.s64 + 864;
	// vcfpsxws128 v53,v56,0
	_mm_store_si128((__m128i*)ctx.v53.s32, _mm_vctsxs(_mm_load_ps(ctx.v56.f32)));
	// addi r11,r1,848
	ctx.r11.s64 = ctx.r1.s64 + 848;
	// vcfpsxws128 v51,v54,0
	_mm_store_si128((__m128i*)ctx.v51.s32, _mm_vctsxs(_mm_load_ps(ctx.v54.f32)));
	// vcfpsxws128 v49,v52,0
	_mm_store_si128((__m128i*)ctx.v49.s32, _mm_vctsxs(_mm_load_ps(ctx.v52.f32)));
	// lvx128 v44,r0,r10
	simd::store_shuffled(ctx.v44, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// vcfpsxws128 v48,v50,0
	_mm_store_si128((__m128i*)ctx.v48.s32, _mm_vctsxs(_mm_load_ps(ctx.v50.f32)));
	// lvx128 v43,r0,r9
	simd::store_shuffled(ctx.v43, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// lvx128 v42,r0,r8
	simd::store_shuffled(ctx.v42, simd::load_and_shuffle(base + ((ctx.r8.u32) & ~0xF), VectorMaskL));
	// addi r10,r1,896
	ctx.r10.s64 = ctx.r1.s64 + 896;
	// lvx128 v41,r0,r30
	simd::store_shuffled(ctx.v41, simd::load_and_shuffle(base + ((ctx.r30.u32) & ~0xF), VectorMaskL));
	// addi r9,r1,880
	ctx.r9.s64 = ctx.r1.s64 + 880;
	// lvx128 v40,r0,r4
	simd::store_shuffled(ctx.v40, simd::load_and_shuffle(base + ((ctx.r4.u32) & ~0xF), VectorMaskL));
	// addi r8,r1,928
	ctx.r8.s64 = ctx.r1.s64 + 928;
	// lvx128 v39,r0,r11
	simd::store_shuffled(ctx.v39, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// addi r30,r1,912
	ctx.r30.s64 = ctx.r1.s64 + 912;
	// addi r4,r1,960
	ctx.r4.s64 = ctx.r1.s64 + 960;
	// vpkswss128 v57,v55,v57
	_mm_store_si128((__m128i*)ctx.v57.s16, _mm_packs_epi32(_mm_load_si128((__m128i*)ctx.v57.s32), _mm_load_si128((__m128i*)ctx.v55.s32)));
	// addi r11,r1,944
	ctx.r11.s64 = ctx.r1.s64 + 944;
	// lvx128 v38,r0,r10
	simd::store_shuffled(ctx.v38, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// lvx128 v37,r0,r9
	simd::store_shuffled(ctx.v37, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// vpkswss128 v47,v62,v63
	_mm_store_si128((__m128i*)ctx.v47.s16, _mm_packs_epi32(_mm_load_si128((__m128i*)ctx.v63.s32), _mm_load_si128((__m128i*)ctx.v62.s32)));
	// lvx128 v36,r0,r8
	simd::store_shuffled(ctx.v36, simd::load_and_shuffle(base + ((ctx.r8.u32) & ~0xF), VectorMaskL));
	// li r10,320
	ctx.r10.s64 = 320;
	// lvx128 v35,r0,r30
	simd::store_shuffled(ctx.v35, simd::load_and_shuffle(base + ((ctx.r30.u32) & ~0xF), VectorMaskL));
	// li r9,336
	ctx.r9.s64 = 336;
	// lvx128 v34,r0,r4
	simd::store_shuffled(ctx.v34, simd::load_and_shuffle(base + ((ctx.r4.u32) & ~0xF), VectorMaskL));
	// vpkswss128 v55,v51,v53
	_mm_store_si128((__m128i*)ctx.v55.s16, _mm_packs_epi32(_mm_load_si128((__m128i*)ctx.v53.s32), _mm_load_si128((__m128i*)ctx.v51.s32)));
	// lvx128 v33,r0,r11
	simd::store_shuffled(ctx.v33, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// li r8,352
	ctx.r8.s64 = 352;
	// vpkswss128 v53,v48,v49
	_mm_store_si128((__m128i*)ctx.v53.s16, _mm_packs_epi32(_mm_load_si128((__m128i*)ctx.v49.s32), _mm_load_si128((__m128i*)ctx.v48.s32)));
	// stvx128 v61,r31,r24
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32 + ctx.r24.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v61.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r4,368
	ctx.r4.s64 = 368;
	// vcfpsxws128 v32,v46,0
	_mm_store_si128((__m128i*)ctx.v32.s32, _mm_vctsxs(_mm_load_ps(ctx.v46.f32)));
	// li r11,384
	ctx.r11.s64 = 384;
	// vcfpsxws128 v63,v45,0
	_mm_store_si128((__m128i*)ctx.v63.s32, _mm_vctsxs(_mm_load_ps(ctx.v45.f32)));
	// li r30,400
	ctx.r30.s64 = 400;
	// vcfpsxws128 v62,v44,0
	_mm_store_si128((__m128i*)ctx.v62.s32, _mm_vctsxs(_mm_load_ps(ctx.v44.f32)));
	// li r29,416
	ctx.r29.s64 = 416;
	// vcfpsxws128 v61,v43,0
	_mm_store_si128((__m128i*)ctx.v61.s32, _mm_vctsxs(_mm_load_ps(ctx.v43.f32)));
	// li r28,432
	ctx.r28.s64 = 432;
	// vcfpsxws128 v60,v42,0
	_mm_store_si128((__m128i*)ctx.v60.s32, _mm_vctsxs(_mm_load_ps(ctx.v42.f32)));
	// li r27,448
	ctx.r27.s64 = 448;
	// vcfpsxws128 v59,v41,0
	_mm_store_si128((__m128i*)ctx.v59.s32, _mm_vctsxs(_mm_load_ps(ctx.v41.f32)));
	// li r26,464
	ctx.r26.s64 = 464;
	// vcfpsxws128 v58,v40,0
	_mm_store_si128((__m128i*)ctx.v58.s32, _mm_vctsxs(_mm_load_ps(ctx.v40.f32)));
	// li r25,480
	ctx.r25.s64 = 480;
	// vcfpsxws128 v56,v39,0
	_mm_store_si128((__m128i*)ctx.v56.s32, _mm_vctsxs(_mm_load_ps(ctx.v39.f32)));
	// vcfpsxws128 v54,v38,0
	_mm_store_si128((__m128i*)ctx.v54.s32, _mm_vctsxs(_mm_load_ps(ctx.v38.f32)));
	// vcfpsxws128 v52,v37,0
	_mm_store_si128((__m128i*)ctx.v52.s32, _mm_vctsxs(_mm_load_ps(ctx.v37.f32)));
	// vcfpsxws128 v51,v36,0
	_mm_store_si128((__m128i*)ctx.v51.s32, _mm_vctsxs(_mm_load_ps(ctx.v36.f32)));
	// vcfpsxws128 v50,v35,0
	_mm_store_si128((__m128i*)ctx.v50.s32, _mm_vctsxs(_mm_load_ps(ctx.v35.f32)));
	// vcfpsxws128 v49,v34,0
	_mm_store_si128((__m128i*)ctx.v49.s32, _mm_vctsxs(_mm_load_ps(ctx.v34.f32)));
	// vcfpsxws128 v48,v33,0
	_mm_store_si128((__m128i*)ctx.v48.s32, _mm_vctsxs(_mm_load_ps(ctx.v33.f32)));
	// addi r24,r1,992
	ctx.r24.s64 = ctx.r1.s64 + 992;
	// vpkswss128 v46,v63,v32
	_mm_store_si128((__m128i*)ctx.v46.s16, _mm_packs_epi32(_mm_load_si128((__m128i*)ctx.v32.s32), _mm_load_si128((__m128i*)ctx.v63.s32)));
	// addi r23,r1,976
	ctx.r23.s64 = ctx.r1.s64 + 976;
	// vpkswss128 v45,v61,v62
	_mm_store_si128((__m128i*)ctx.v45.s16, _mm_packs_epi32(_mm_load_si128((__m128i*)ctx.v62.s32), _mm_load_si128((__m128i*)ctx.v61.s32)));
	// addi r22,r1,1024
	ctx.r22.s64 = ctx.r1.s64 + 1024;
	// vpkswss128 v44,v59,v60
	_mm_store_si128((__m128i*)ctx.v44.s16, _mm_packs_epi32(_mm_load_si128((__m128i*)ctx.v60.s32), _mm_load_si128((__m128i*)ctx.v59.s32)));
	// addi r21,r1,1008
	ctx.r21.s64 = ctx.r1.s64 + 1008;
	// vpkswss128 v43,v56,v58
	_mm_store_si128((__m128i*)ctx.v43.s16, _mm_packs_epi32(_mm_load_si128((__m128i*)ctx.v58.s32), _mm_load_si128((__m128i*)ctx.v56.s32)));
	// addi r20,r1,1056
	ctx.r20.s64 = ctx.r1.s64 + 1056;
	// stvx128 v57,r31,r6
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32 + ctx.r6.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v57.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r19,r1,1040
	ctx.r19.s64 = ctx.r1.s64 + 1040;
	// lvx128 v41,r0,r24
	simd::store_shuffled(ctx.v41, simd::load_and_shuffle(base + ((ctx.r24.u32) & ~0xF), VectorMaskL));
	// lvx128 v40,r0,r23
	simd::store_shuffled(ctx.v40, simd::load_and_shuffle(base + ((ctx.r23.u32) & ~0xF), VectorMaskL));
	// vcfpsxws128 v39,v41,0
	_mm_store_si128((__m128i*)ctx.v39.s32, _mm_vctsxs(_mm_load_ps(ctx.v41.f32)));
	// lvx128 v38,r0,r22
	simd::store_shuffled(ctx.v38, simd::load_and_shuffle(base + ((ctx.r22.u32) & ~0xF), VectorMaskL));
	// vcfpsxws128 v37,v40,0
	_mm_store_si128((__m128i*)ctx.v37.s32, _mm_vctsxs(_mm_load_ps(ctx.v40.f32)));
	// lvx128 v36,r0,r21
	simd::store_shuffled(ctx.v36, simd::load_and_shuffle(base + ((ctx.r21.u32) & ~0xF), VectorMaskL));
	// vcfpsxws128 v35,v38,0
	_mm_store_si128((__m128i*)ctx.v35.s32, _mm_vctsxs(_mm_load_ps(ctx.v38.f32)));
	// lvx128 v34,r0,r20
	simd::store_shuffled(ctx.v34, simd::load_and_shuffle(base + ((ctx.r20.u32) & ~0xF), VectorMaskL));
	// vcfpsxws128 v33,v36,0
	_mm_store_si128((__m128i*)ctx.v33.s32, _mm_vctsxs(_mm_load_ps(ctx.v36.f32)));
	// lvx128 v32,r0,r19
	simd::store_shuffled(ctx.v32, simd::load_and_shuffle(base + ((ctx.r19.u32) & ~0xF), VectorMaskL));
	// vcfpsxws128 v63,v34,0
	_mm_store_si128((__m128i*)ctx.v63.s32, _mm_vctsxs(_mm_load_ps(ctx.v34.f32)));
	// vcfpsxws128 v62,v32,0
	_mm_store_si128((__m128i*)ctx.v62.s32, _mm_vctsxs(_mm_load_ps(ctx.v32.f32)));
	// addi r24,r1,1088
	ctx.r24.s64 = ctx.r1.s64 + 1088;
	// addi r23,r1,1072
	ctx.r23.s64 = ctx.r1.s64 + 1072;
	// vpkswss128 v42,v52,v54
	_mm_store_si128((__m128i*)ctx.v42.s16, _mm_packs_epi32(_mm_load_si128((__m128i*)ctx.v54.s32), _mm_load_si128((__m128i*)ctx.v52.s32)));
	// addi r22,r1,1120
	ctx.r22.s64 = ctx.r1.s64 + 1120;
	// vpkswss128 v60,v48,v49
	_mm_store_si128((__m128i*)ctx.v60.s16, _mm_packs_epi32(_mm_load_si128((__m128i*)ctx.v49.s32), _mm_load_si128((__m128i*)ctx.v48.s32)));
	// stvx128 v47,r31,r7
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32 + ctx.r7.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v47.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r7,r1,1152
	ctx.r7.s64 = ctx.r1.s64 + 1152;
	// addi r6,r1,1136
	ctx.r6.s64 = ctx.r1.s64 + 1136;
	// vpkswss128 v61,v50,v51
	_mm_store_si128((__m128i*)ctx.v61.s16, _mm_packs_epi32(_mm_load_si128((__m128i*)ctx.v51.s32), _mm_load_si128((__m128i*)ctx.v50.s32)));
	// lvx128 v59,r0,r24
	simd::store_shuffled(ctx.v59, simd::load_and_shuffle(base + ((ctx.r24.u32) & ~0xF), VectorMaskL));
	// addi r21,r1,1104
	ctx.r21.s64 = ctx.r1.s64 + 1104;
	// lvx128 v58,r0,r23
	simd::store_shuffled(ctx.v58, simd::load_and_shuffle(base + ((ctx.r23.u32) & ~0xF), VectorMaskL));
	// addi r24,r1,1184
	ctx.r24.s64 = ctx.r1.s64 + 1184;
	// lvx128 v57,r0,r22
	simd::store_shuffled(ctx.v57, simd::load_and_shuffle(base + ((ctx.r22.u32) & ~0xF), VectorMaskL));
	// addi r23,r1,1168
	ctx.r23.s64 = ctx.r1.s64 + 1168;
	// addi r22,r1,1216
	ctx.r22.s64 = ctx.r1.s64 + 1216;
	// vpkswss128 v56,v37,v39
	_mm_store_si128((__m128i*)ctx.v56.s16, _mm_packs_epi32(_mm_load_si128((__m128i*)ctx.v39.s32), _mm_load_si128((__m128i*)ctx.v37.s32)));
	// addi r20,r1,1200
	ctx.r20.s64 = ctx.r1.s64 + 1200;
	// lvx128 v51,r0,r7
	simd::store_shuffled(ctx.v51, simd::load_and_shuffle(base + ((ctx.r7.u32) & ~0xF), VectorMaskL));
	// vpkswss128 v52,v33,v35
	_mm_store_si128((__m128i*)ctx.v52.s16, _mm_packs_epi32(_mm_load_si128((__m128i*)ctx.v35.s32), _mm_load_si128((__m128i*)ctx.v33.s32)));
	// lvx128 v50,r0,r6
	simd::store_shuffled(ctx.v50, simd::load_and_shuffle(base + ((ctx.r6.u32) & ~0xF), VectorMaskL));
	// lvx128 v54,r0,r21
	simd::store_shuffled(ctx.v54, simd::load_and_shuffle(base + ((ctx.r21.u32) & ~0xF), VectorMaskL));
	// vcfpsxws128 v49,v59,0
	_mm_store_si128((__m128i*)ctx.v49.s32, _mm_vctsxs(_mm_load_ps(ctx.v59.f32)));
	// vpkswss128 v48,v62,v63
	_mm_store_si128((__m128i*)ctx.v48.s16, _mm_packs_epi32(_mm_load_si128((__m128i*)ctx.v63.s32), _mm_load_si128((__m128i*)ctx.v62.s32)));
	// lvx128 v47,r0,r24
	simd::store_shuffled(ctx.v47, simd::load_and_shuffle(base + ((ctx.r24.u32) & ~0xF), VectorMaskL));
	// lvx128 v41,r0,r23
	simd::store_shuffled(ctx.v41, simd::load_and_shuffle(base + ((ctx.r23.u32) & ~0xF), VectorMaskL));
	// li r7,496
	ctx.r7.s64 = 496;
	// lvx128 v40,r0,r22
	simd::store_shuffled(ctx.v40, simd::load_and_shuffle(base + ((ctx.r22.u32) & ~0xF), VectorMaskL));
	// vcfpsxws128 v39,v58,0
	_mm_store_si128((__m128i*)ctx.v39.s32, _mm_vctsxs(_mm_load_ps(ctx.v58.f32)));
	// lvx128 v38,r0,r20
	simd::store_shuffled(ctx.v38, simd::load_and_shuffle(base + ((ctx.r20.u32) & ~0xF), VectorMaskL));
	// li r6,512
	ctx.r6.s64 = 512;
	// stvx128 v55,r31,r5
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32 + ctx.r5.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v55.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// vcfpsxws128 v37,v57,0
	_mm_store_si128((__m128i*)ctx.v37.s32, _mm_vctsxs(_mm_load_ps(ctx.v57.f32)));
	// stvx128 v53,r31,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32 + ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v53.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r5,528
	ctx.r5.s64 = 528;
	// stvx128 v46,r31,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32 + ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v46.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// vcfpsxws128 v36,v54,0
	_mm_store_si128((__m128i*)ctx.v36.s32, _mm_vctsxs(_mm_load_ps(ctx.v54.f32)));
	// stvx128 v45,r31,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32 + ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v45.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r10,544
	ctx.r10.s64 = 544;
	// stvx128 v44,r31,r4
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32 + ctx.r4.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v44.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// vcfpsxws128 v35,v51,0
	_mm_store_si128((__m128i*)ctx.v35.s32, _mm_vctsxs(_mm_load_ps(ctx.v51.f32)));
	// stvx128 v43,r31,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32 + ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v43.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r9,560
	ctx.r9.s64 = 560;
	// stvx128 v42,r31,r30
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32 + ctx.r30.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v42.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// vcfpsxws128 v34,v50,0
	_mm_store_si128((__m128i*)ctx.v34.s32, _mm_vctsxs(_mm_load_ps(ctx.v50.f32)));
	// stvx128 v61,r31,r29
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32 + ctx.r29.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v61.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r8,576
	ctx.r8.s64 = 576;
	// stvx128 v60,r31,r28
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32 + ctx.r28.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v60.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// vcfpsxws128 v33,v47,0
	_mm_store_si128((__m128i*)ctx.v33.s32, _mm_vctsxs(_mm_load_ps(ctx.v47.f32)));
	// stvx128 v56,r31,r27
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32 + ctx.r27.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v56.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r4,592
	ctx.r4.s64 = 592;
	// stvx128 v52,r31,r26
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32 + ctx.r26.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v52.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// vcfpsxws128 v32,v41,0
	_mm_store_si128((__m128i*)ctx.v32.s32, _mm_vctsxs(_mm_load_ps(ctx.v41.f32)));
	// stvx128 v48,r31,r25
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32 + ctx.r25.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v48.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r11,608
	ctx.r11.s64 = 608;
	// vcfpsxws128 v63,v40,0
	_mm_store_si128((__m128i*)ctx.v63.s32, _mm_vctsxs(_mm_load_ps(ctx.v40.f32)));
	// li r30,624
	ctx.r30.s64 = 624;
	// vcfpsxws128 v62,v38,0
	_mm_store_si128((__m128i*)ctx.v62.s32, _mm_vctsxs(_mm_load_ps(ctx.v38.f32)));
	// addi r29,r1,1248
	ctx.r29.s64 = ctx.r1.s64 + 1248;
	// vpkswss128 v61,v39,v49
	_mm_store_si128((__m128i*)ctx.v61.s16, _mm_packs_epi32(_mm_load_si128((__m128i*)ctx.v49.s32), _mm_load_si128((__m128i*)ctx.v39.s32)));
	// addi r28,r1,1232
	ctx.r28.s64 = ctx.r1.s64 + 1232;
	// vpkswss128 v60,v36,v37
	_mm_store_si128((__m128i*)ctx.v60.s16, _mm_packs_epi32(_mm_load_si128((__m128i*)ctx.v37.s32), _mm_load_si128((__m128i*)ctx.v36.s32)));
	// addi r27,r1,1280
	ctx.r27.s64 = ctx.r1.s64 + 1280;
	// vpkswss128 v59,v34,v35
	_mm_store_si128((__m128i*)ctx.v59.s16, _mm_packs_epi32(_mm_load_si128((__m128i*)ctx.v35.s32), _mm_load_si128((__m128i*)ctx.v34.s32)));
	// addi r26,r1,1264
	ctx.r26.s64 = ctx.r1.s64 + 1264;
	// vpkswss128 v58,v32,v33
	_mm_store_si128((__m128i*)ctx.v58.s16, _mm_packs_epi32(_mm_load_si128((__m128i*)ctx.v33.s32), _mm_load_si128((__m128i*)ctx.v32.s32)));
	// addi r25,r1,1312
	ctx.r25.s64 = ctx.r1.s64 + 1312;
	// vpkswss128 v57,v62,v63
	_mm_store_si128((__m128i*)ctx.v57.s16, _mm_packs_epi32(_mm_load_si128((__m128i*)ctx.v63.s32), _mm_load_si128((__m128i*)ctx.v62.s32)));
	// lvx128 v56,r0,r29
	simd::store_shuffled(ctx.v56, simd::load_and_shuffle(base + ((ctx.r29.u32) & ~0xF), VectorMaskL));
	// addi r24,r1,1296
	ctx.r24.s64 = ctx.r1.s64 + 1296;
	// lvx128 v55,r0,r28
	simd::store_shuffled(ctx.v55, simd::load_and_shuffle(base + ((ctx.r28.u32) & ~0xF), VectorMaskL));
	// addi r29,r1,1344
	ctx.r29.s64 = ctx.r1.s64 + 1344;
	// addi r28,r1,1328
	ctx.r28.s64 = ctx.r1.s64 + 1328;
	// lvx128 v54,r0,r27
	simd::store_shuffled(ctx.v54, simd::load_and_shuffle(base + ((ctx.r27.u32) & ~0xF), VectorMaskL));
	// lvx128 v53,r0,r26
	simd::store_shuffled(ctx.v53, simd::load_and_shuffle(base + ((ctx.r26.u32) & ~0xF), VectorMaskL));
	// vcfpsxws128 v52,v56,0
	_mm_store_si128((__m128i*)ctx.v52.s32, _mm_vctsxs(_mm_load_ps(ctx.v56.f32)));
	// lvx128 v51,r0,r25
	simd::store_shuffled(ctx.v51, simd::load_and_shuffle(base + ((ctx.r25.u32) & ~0xF), VectorMaskL));
	// vcfpsxws128 v50,v55,0
	_mm_store_si128((__m128i*)ctx.v50.s32, _mm_vctsxs(_mm_load_ps(ctx.v55.f32)));
	// lvx128 v49,r0,r24
	simd::store_shuffled(ctx.v49, simd::load_and_shuffle(base + ((ctx.r24.u32) & ~0xF), VectorMaskL));
	// vcfpsxws128 v48,v54,0
	_mm_store_si128((__m128i*)ctx.v48.s32, _mm_vctsxs(_mm_load_ps(ctx.v54.f32)));
	// lvx128 v47,r0,r29
	simd::store_shuffled(ctx.v47, simd::load_and_shuffle(base + ((ctx.r29.u32) & ~0xF), VectorMaskL));
	// vcfpsxws128 v46,v53,0
	_mm_store_si128((__m128i*)ctx.v46.s32, _mm_vctsxs(_mm_load_ps(ctx.v53.f32)));
	// lvx128 v45,r0,r28
	simd::store_shuffled(ctx.v45, simd::load_and_shuffle(base + ((ctx.r28.u32) & ~0xF), VectorMaskL));
	// vcfpsxws128 v44,v51,0
	_mm_store_si128((__m128i*)ctx.v44.s32, _mm_vctsxs(_mm_load_ps(ctx.v51.f32)));
	// vcfpsxws128 v43,v49,0
	_mm_store_si128((__m128i*)ctx.v43.s32, _mm_vctsxs(_mm_load_ps(ctx.v49.f32)));
	// stvx128 v61,r31,r7
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32 + ctx.r7.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v61.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// vcfpsxws128 v42,v47,0
	_mm_store_si128((__m128i*)ctx.v42.s32, _mm_vctsxs(_mm_load_ps(ctx.v47.f32)));
	// stvx128 v60,r31,r6
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32 + ctx.r6.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v60.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// vcfpsxws128 v41,v45,0
	_mm_store_si128((__m128i*)ctx.v41.s32, _mm_vctsxs(_mm_load_ps(ctx.v45.f32)));
	// stvx128 v59,r31,r5
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32 + ctx.r5.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v59.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v58,r31,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32 + ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v58.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v57,r31,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32 + ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v57.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// vpkswss128 v40,v50,v52
	_mm_store_si128((__m128i*)ctx.v40.s16, _mm_packs_epi32(_mm_load_si128((__m128i*)ctx.v52.s32), _mm_load_si128((__m128i*)ctx.v50.s32)));
	// vpkswss128 v39,v46,v48
	_mm_store_si128((__m128i*)ctx.v39.s16, _mm_packs_epi32(_mm_load_si128((__m128i*)ctx.v48.s32), _mm_load_si128((__m128i*)ctx.v46.s32)));
	// vpkswss128 v38,v43,v44
	_mm_store_si128((__m128i*)ctx.v38.s16, _mm_packs_epi32(_mm_load_si128((__m128i*)ctx.v44.s32), _mm_load_si128((__m128i*)ctx.v43.s32)));
	// vpkswss128 v37,v41,v42
	_mm_store_si128((__m128i*)ctx.v37.s16, _mm_packs_epi32(_mm_load_si128((__m128i*)ctx.v42.s32), _mm_load_si128((__m128i*)ctx.v41.s32)));
	// stvx128 v40,r31,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32 + ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v40.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v39,r31,r4
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32 + ctx.r4.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v39.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v38,r31,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32 + ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v38.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v37,r31,r30
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32 + ctx.r30.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v37.u8), _mm_load_si128((__m128i*)VectorMaskL)));
loc_82C3D3AC:
	// addi r1,r1,7872
	ctx.r1.s64 = ctx.r1.s64 + 7872;
	// b 0x82fa76a4
	__restgprlr_19(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C3D3B4"))) PPC_WEAK_FUNC(sub_82C3D3B4);
PPC_FUNC_IMPL(__imp__sub_82C3D3B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C3D3B8"))) PPC_WEAK_FUNC(sub_82C3D3B8);
PPC_FUNC_IMPL(__imp__sub_82C3D3B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x82C3D3C0;
	__savegprlr_29(ctx, base);
	// stfd f30,-48(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f30.u64);
	// stfd f31,-40(r1)
	PPC_STORE_U64(ctx.r1.u32 + -40, ctx.f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31961
	ctx.r11.s64 = -2094596096;
	// lis r10,-31961
	ctx.r10.s64 = -2094596096;
	// addi r29,r11,-23296
	ctx.r29.s64 = ctx.r11.s64 + -23296;
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r11,-22016(r10)
	PPC_STORE_U32(ctx.r10.u32 + -22016, ctx.r11.u32);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfd f30,-4704(r11)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r11.u32 + -4704);
	// lfd f31,22496(r10)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r10.u32 + 22496);
loc_82C3D3F8:
	// extsw r11,r30
	ctx.r11.s64 = ctx.r30.s32;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// fadd f0,f0,f31
	ctx.f0.f64 = ctx.f0.f64 + ctx.f31.f64;
	// fmul f0,f0,f30
	ctx.f0.f64 = ctx.f0.f64 * ctx.f30.f64;
	// frsp f1,f0
	ctx.f1.f64 = double(float(ctx.f0.f64));
	// bl 0x82fa28d0
	ctx.lr = 0x82C3D418;
	sub_82FA28D0(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// stfs f0,0(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// addi r11,r29,1280
	ctx.r11.s64 = ctx.r29.s64 + 1280;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82c3d3f8
	if (ctx.cr6.lt) goto loc_82C3D3F8;
	// bl 0x82c40cb8
	ctx.lr = 0x82C3D438;
	sub_82C40CB8(ctx, base);
	// bl 0x82c402b0
	ctx.lr = 0x82C3D43C;
	sub_82C402B0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f30,-48(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// lfd f31,-40(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -40);
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C3D44C"))) PPC_WEAK_FUNC(sub_82C3D44C);
PPC_FUNC_IMPL(__imp__sub_82C3D44C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C3D450"))) PPC_WEAK_FUNC(sub_82C3D450);
PPC_FUNC_IMPL(__imp__sub_82C3D450) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31961
	ctx.r11.s64 = -2094596096;
	// lwz r11,-22016(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -22016);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// b 0x82c3d3b8
	sub_82C3D3B8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82C3D464"))) PPC_WEAK_FUNC(sub_82C3D464);
PPC_FUNC_IMPL(__imp__sub_82C3D464) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82C3D468"))) PPC_WEAK_FUNC(sub_82C3D468);
PPC_FUNC_IMPL(__imp__sub_82C3D468) {
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
	// lis r11,-31961
	ctx.r11.s64 = -2094596096;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,-22016(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -22016);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82c3d490
	if (!ctx.cr6.eq) goto loc_82C3D490;
	// bl 0x82c3d3b8
	ctx.lr = 0x82C3D490;
	sub_82C3D3B8(ctx, base);
loc_82C3D490:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,332(r31)
	PPC_STORE_U32(ctx.r31.u32 + 332, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82C3D4AC"))) PPC_WEAK_FUNC(sub_82C3D4AC);
PPC_FUNC_IMPL(__imp__sub_82C3D4AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82C3D4B0"))) PPC_WEAK_FUNC(sub_82C3D4B0);
PPC_FUNC_IMPL(__imp__sub_82C3D4B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// rlwinm. r10,r4,29,3,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 29) & 0x1FFFFFFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blelr 
	if (!ctx.cr0.gt) return;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r11,r3,-4
	ctx.r11.s64 = ctx.r3.s64 + -4;
	// lfs f0,5184(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5184);
	ctx.f0.f64 = double(temp.f32);
loc_82C3D4C8:
	// stfs f0,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stfs f0,8(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// stfs f0,12(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// stfs f0,16(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// stfs f0,20(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// stfs f0,24(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 24, temp.u32);
	// stfs f0,28(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 28, temp.u32);
	// stfsu f0,32(r11)
	temp.f32 = float(ctx.f0.f64);
	ea = 32 + ctx.r11.u32;
	PPC_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x82c3d4c8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82C3D4C8;
	// blr 
	return;
}

