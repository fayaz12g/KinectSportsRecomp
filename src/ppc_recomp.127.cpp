#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_827FF180"))) PPC_WEAK_FUNC(sub_827FF180);
PPC_FUNC_IMPL(__imp__sub_827FF180) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x827FF188;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r29,396(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 396);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// mr r30,r8
	ctx.r30.u64 = ctx.r8.u64;
	// subf r9,r11,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r11.s64;
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x827ff1b4
	if (!ctx.cr6.gt) goto loc_827FF1B4;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
loc_827FF1B4:
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r10,416(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 416);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r7,12(r29)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827FF1D8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r10,424(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 424);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r4,12(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 12);
	// add r5,r11,r28
	ctx.r5.u64 = ctx.r11.u64 + ctx.r28.u64;
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x827FF200;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827FF218"))) PPC_WEAK_FUNC(sub_827FF218);
PPC_FUNC_IMPL(__imp__sub_827FF218) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7668
	ctx.lr = 0x827FF220;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,396(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 396);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// mr r24,r6
	ctx.r24.u64 = ctx.r6.u64;
	// mr r26,r8
	ctx.r26.u64 = ctx.r8.u64;
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// addi r28,r31,24
	ctx.r28.s64 = ctx.r31.s64 + 24;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x827ff270
	if (!ctx.cr6.eq) goto loc_827FF270;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r7,1
	ctx.r7.s64 = 1;
	// lwz r6,16(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r5,20(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827FF26C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r3.u32);
loc_827FF270:
	// lwz r11,416(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 416);
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// lwz r29,0(r28)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// lwz r9,16(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r7,12(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827FF2A0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, ctx.xer);
	// ble cr6,0x827ff2e4
	if (!ctx.cr6.gt) goto loc_827FF2E4;
	// lwz r9,424(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 424);
	// subf r27,r29,r11
	ctx.r27.s64 = ctx.r11.s64 - ctx.r29.s64;
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// rlwinm r11,r29,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827FF2D8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + ctx.r27.u64;
	// stw r11,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r11.u32);
loc_827FF2E4:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x827ff308
	if (ctx.cr6.lt) goto loc_827FF308;
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// li r9,0
	ctx.r9.s64 = 0;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r9,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r9.u32);
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
loc_827FF308:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82fa76b8
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827FF310"))) PPC_WEAK_FUNC(sub_827FF310);
PPC_FUNC_IMPL(__imp__sub_827FF310) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7674
	ctx.lr = 0x827FF318;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,396(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 396);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// mr r28,r8
	ctx.r28.u64 = ctx.r8.u64;
	// mr r30,r9
	ctx.r30.u64 = ctx.r9.u64;
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x827ff360
	if (!ctx.cr6.eq) goto loc_827FF360;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r6,16(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r5,20(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827FF35C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r3.u32);
loc_827FF360:
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r8,16(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// subf r9,r10,r30
	ctx.r9.s64 = ctx.r30.s64 - ctx.r10.s64;
	// subf r30,r11,r8
	ctx.r30.s64 = ctx.r8.s64 - ctx.r11.s64;
	// cmplw cr6,r30,r9
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r9.u32, ctx.xer);
	// ble cr6,0x827ff380
	if (!ctx.cr6.gt) goto loc_827FF380;
	// mr r30,r9
	ctx.r30.u64 = ctx.r9.u64;
loc_827FF380:
	// lwz r9,96(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 96);
	// lwz r8,20(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// cmplw cr6,r30,r9
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r9.u32, ctx.xer);
	// ble cr6,0x827ff398
	if (!ctx.cr6.gt) goto loc_827FF398;
	// mr r30,r9
	ctx.r30.u64 = ctx.r9.u64;
loc_827FF398:
	// lwz r8,424(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 424);
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r5,r9,r27
	ctx.r5.u64 = ctx.r9.u64 + ctx.r27.u64;
	// lwz r11,4(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827FF3C4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x827ff3fc
	if (ctx.cr6.lt) goto loc_827FF3FC;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// li r9,0
	ctx.r9.s64 = 0;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r9,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r9.u32);
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
loc_827FF3FC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827FF404"))) PPC_WEAK_FUNC(sub_827FF404);
PPC_FUNC_IMPL(__imp__sub_827FF404) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827FF408"))) PPC_WEAK_FUNC(sub_827FF408);
PPC_FUNC_IMPL(__imp__sub_827FF408) {
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
	// lwz r31,396(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 396);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x827ff4bc
	if (ctx.cr6.eq) goto loc_827FF4BC;
	// cmpwi cr6,r4,2
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 2, ctx.xer);
	// beq cr6,0x827ff488
	if (ctx.cr6.eq) goto loc_827FF488;
	// cmpwi cr6,r4,3
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 3, ctx.xer);
	// beq cr6,0x827ff454
	if (ctx.cr6.eq) goto loc_827FF454;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r10,4
	ctx.r10.s64 = 4;
	// stw r10,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827FF450;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x827ff514
	goto loc_827FF514;
loc_827FF454:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x827ff47c
	if (!ctx.cr6.eq) goto loc_827FF47C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r10,4
	ctx.r10.s64 = 4;
	// stw r10,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827FF47C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_827FF47C:
	// lis r11,-32128
	ctx.r11.s64 = -2105540608;
	// addi r11,r11,-3560
	ctx.r11.s64 = ctx.r11.s64 + -3560;
	// b 0x827ff510
	goto loc_827FF510;
loc_827FF488:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x827ff4b0
	if (!ctx.cr6.eq) goto loc_827FF4B0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r10,4
	ctx.r10.s64 = 4;
	// stw r10,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827FF4B0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_827FF4B0:
	// lis r11,-32128
	ctx.r11.s64 = -2105540608;
	// addi r11,r11,-3312
	ctx.r11.s64 = ctx.r11.s64 + -3312;
	// b 0x827ff510
	goto loc_827FF510;
loc_827FF4BC:
	// lbz r11,74(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 74);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x827ff508
	if (ctx.cr0.eq) goto loc_827FF508;
	// lis r11,-32128
	ctx.r11.s64 = -2105540608;
	// lwz r10,12(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r11,r11,-3712
	ctx.r11.s64 = ctx.r11.s64 + -3712;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// bne cr6,0x827ff514
	if (!ctx.cr6.eq) goto loc_827FF514;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r7,1
	ctx.r7.s64 = 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r6,16(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r11,28(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827FF500;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r3.u32);
	// b 0x827ff514
	goto loc_827FF514;
loc_827FF508:
	// lwz r11,416(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 416);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
loc_827FF510:
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
loc_827FF514:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_827FF534"))) PPC_WEAK_FUNC(sub_827FF534);
PPC_FUNC_IMPL(__imp__sub_827FF534) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827FF538"))) PPC_WEAK_FUNC(sub_827FF538);
PPC_FUNC_IMPL(__imp__sub_827FF538) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x827FF540;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// li r5,28
	ctx.r5.s64 = 28;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827FF564;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r10,-32128
	ctx.r10.s64 = -2105540608;
	// stw r3,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r3.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r10,-3064
	ctx.r10.s64 = ctx.r10.s64 + -3064;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// lbz r11,74(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 74);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x827ff610
	if (ctx.cr0.eq) goto loc_827FF610;
	// lwz r29,276(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 276);
	// clrlwi. r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r29,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r29.u32);
	// beq 0x827ff5e4
	if (ctx.cr0.eq) goto loc_827FF5E4;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r28,4(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// bl 0x827f6ff8
	ctx.lr = 0x827FF5B0;
	sub_827F6FF8(ctx, base);
	// lwz r11,16(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// lwz r10,100(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// lwz r9,92(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mullw r6,r10,r9
	ctx.r6.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r9.s32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// bctrl 
	ctx.lr = 0x827FF5DC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r3.u32);
	// b 0x827ff610
	goto loc_827FF610;
loc_827FF5E4:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// lwz r10,100(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r9,92(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mullw r5,r10,r9
	ctx.r5.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r9.s32);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827FF60C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r3.u32);
loc_827FF610:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827FF618"))) PPC_WEAK_FUNC(sub_827FF618);
PPC_FUNC_IMPL(__imp__sub_827FF618) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,276(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 276);
	// lwz r11,416(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 416);
	// stw r10,92(r11)
	PPC_STORE_U32(ctx.r11.u32 + 92, ctx.r10.u32);
	// lwz r10,96(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// stw r10,96(r11)
	PPC_STORE_U32(ctx.r11.u32 + 96, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827FF630"))) PPC_WEAK_FUNC(sub_827FF630);
PPC_FUNC_IMPL(__imp__sub_827FF630) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7660
	ctx.lr = 0x827FF638;
	__savegprlr_22(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,416(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 416);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,276(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 276);
	// mr r22,r5
	ctx.r22.u64 = ctx.r5.u64;
	// mr r23,r7
	ctx.r23.u64 = ctx.r7.u64;
	// mr r25,r8
	ctx.r25.u64 = ctx.r8.u64;
	// mr r24,r9
	ctx.r24.u64 = ctx.r9.u64;
	// lwz r10,92(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 92);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x827ff6d0
	if (ctx.cr6.lt) goto loc_827FF6D0;
	// lwz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// li r28,0
	ctx.r28.s64 = 0;
	// lwz r27,196(r3)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r3.u32 + 196);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x827ff6c8
	if (!ctx.cr6.gt) goto loc_827FF6C8;
	// addi r26,r4,-4
	ctx.r26.s64 = ctx.r4.s64 + -4;
	// addi r29,r30,12
	ctx.r29.s64 = ctx.r30.s64 + 12;
loc_827FF680:
	// lwz r11,88(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 88);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// lwz r10,0(r22)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r9,40(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 40);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mullw r10,r11,r10
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// lwzu r11,4(r26)
	ea = 4 + ctx.r26.u32;
	ctx.r11.u64 = PPC_LOAD_U32(ea);
	ctx.r26.u32 = ea;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r5,r10,r11
	ctx.r5.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827FF6B0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// addi r27,r27,84
	ctx.r27.s64 = ctx.r27.s64 + 84;
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x827ff680
	if (ctx.cr6.lt) goto loc_827FF680;
loc_827FF6C8:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,92(r30)
	PPC_STORE_U32(ctx.r30.u32 + 92, ctx.r11.u32);
loc_827FF6D0:
	// lwz r5,92(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 92);
	// lwz r10,276(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 276);
	// lwz r11,96(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 96);
	// subf r29,r5,r10
	ctx.r29.s64 = ctx.r10.s64 - ctx.r5.s64;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x827ff6ec
	if (!ctx.cr6.gt) goto loc_827FF6EC;
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
loc_827FF6EC:
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// subf r10,r11,r24
	ctx.r10.s64 = ctx.r24.s64 - ctx.r11.s64;
	// cmplw cr6,r29,r10
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x827ff700
	if (!ctx.cr6.gt) goto loc_827FF700;
	// mr r29,r10
	ctx.r29.u64 = ctx.r10.u64;
loc_827FF700:
	// lwz r10,420(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 420);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// add r6,r11,r23
	ctx.r6.u64 = ctx.r11.u64 + ctx.r23.u64;
	// addi r4,r30,12
	ctx.r4.s64 = ctx.r30.s64 + 12;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827FF724;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// stw r11,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r11.u32);
	// lwz r10,96(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 96);
	// subf r10,r29,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r29.s64;
	// lwz r11,92(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 92);
	// add r11,r29,r11
	ctx.r11.u64 = ctx.r29.u64 + ctx.r11.u64;
	// stw r11,92(r30)
	PPC_STORE_U32(ctx.r30.u32 + 92, ctx.r11.u32);
	// stw r10,96(r30)
	PPC_STORE_U32(ctx.r30.u32 + 96, ctx.r10.u32);
	// lwz r10,276(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 276);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x827ff760
	if (ctx.cr6.lt) goto loc_827FF760;
	// lwz r11,0(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r22)
	PPC_STORE_U32(ctx.r22.u32 + 0, ctx.r11.u32);
loc_827FF760:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82fa76b0
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827FF768"))) PPC_WEAK_FUNC(sub_827FF768);
PPC_FUNC_IMPL(__imp__sub_827FF768) {
	PPC_FUNC_PROLOGUE();
	// stw r5,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r5.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827FF770"))) PPC_WEAK_FUNC(sub_827FF770);
PPC_FUNC_IMPL(__imp__sub_827FF770) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827FF77C"))) PPC_WEAK_FUNC(sub_827FF77C);
PPC_FUNC_IMPL(__imp__sub_827FF77C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827FF780"))) PPC_WEAK_FUNC(sub_827FF780);
PPC_FUNC_IMPL(__imp__sub_827FF780) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7668
	ctx.lr = 0x827FF788;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,416(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 416);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r9,276(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 276);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r26,0(r6)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// lbz r25,140(r11)
	ctx.r25.u64 = PPC_LOAD_U8(ctx.r11.u32 + 140);
	// lbz r27,150(r11)
	ctx.r27.u64 = PPC_LOAD_U8(ctx.r11.u32 + 150);
	// ble cr6,0x827ff84c
	if (!ctx.cr6.gt) goto loc_827FF84C;
	// rlwinm r24,r27,2,0,29
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r28,r26
	ctx.r28.u64 = ctx.r26.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
loc_827FF7C4:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r10,92(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// lwz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// bge cr6,0x827ff810
	if (!ctx.cr6.lt) goto loc_827FF810;
	// addi r7,r9,-1
	ctx.r7.s64 = ctx.r9.s64 + -1;
loc_827FF7E0:
	// lbzu r9,1(r7)
	ea = 1 + ctx.r7.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r7.u32 = ea;
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// ble cr6,0x827ff808
	if (!ctx.cr6.gt) goto loc_827FF808;
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// cmplwi r25,0
	ctx.cr0.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq 0x827ff804
	if (ctx.cr0.eq) goto loc_827FF804;
	// mtctr r25
	ctx.ctr.u64 = ctx.r25.u64;
loc_827FF7FC:
	// stbu r9,1(r10)
	ea = 1 + ctx.r10.u32;
	PPC_STORE_U8(ea, ctx.r9.u8);
	ctx.r10.u32 = ea;
	// bdnz 0x827ff7fc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_827FF7FC;
loc_827FF804:
	// add r11,r11,r25
	ctx.r11.u64 = ctx.r11.u64 + ctx.r25.u64;
loc_827FF808:
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x827ff7e0
	if (ctx.cr6.lt) goto loc_827FF7E0;
loc_827FF810:
	// cmpwi cr6,r27,1
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 1, ctx.xer);
	// ble cr6,0x827ff834
	if (!ctx.cr6.gt) goto loc_827FF834;
	// addi r7,r27,-1
	ctx.r7.s64 = ctx.r27.s64 + -1;
	// lwz r8,92(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// addi r6,r30,1
	ctx.r6.s64 = ctx.r30.s64 + 1;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x827f7028
	ctx.lr = 0x827FF834;
	sub_827F7028(ctx, base);
loc_827FF834:
	// lwz r11,276(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 276);
	// add r30,r30,r27
	ctx.r30.u64 = ctx.r30.u64 + ctx.r27.u64;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// add r28,r24,r28
	ctx.r28.u64 = ctx.r24.u64 + ctx.r28.u64;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x827ff7c4
	if (ctx.cr6.lt) goto loc_827FF7C4;
loc_827FF84C:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82fa76b8
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827FF854"))) PPC_WEAK_FUNC(sub_827FF854);
PPC_FUNC_IMPL(__imp__sub_827FF854) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827FF858"))) PPC_WEAK_FUNC(sub_827FF858);
PPC_FUNC_IMPL(__imp__sub_827FF858) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r11,276(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 276);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r10,0(r6)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// subf r6,r10,r5
	ctx.r6.s64 = ctx.r5.s64 - ctx.r10.s64;
loc_827FF870:
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r9,92(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 92);
	// lwzx r8,r6,r10
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r10.u32);
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x827ff8a4
	if (!ctx.cr6.lt) goto loc_827FF8A4;
	// addi r7,r8,-1
	ctx.r7.s64 = ctx.r8.s64 + -1;
loc_827FF88C:
	// lbzu r8,1(r7)
	ea = 1 + ctx.r7.u32;
	ctx.r8.u64 = PPC_LOAD_U8(ea);
	ctx.r7.u32 = ea;
	// stb r8,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r8.u8);
	// stbu r8,1(r11)
	ea = 1 + ctx.r11.u32;
	PPC_STORE_U8(ea, ctx.r8.u8);
	ctx.r11.u32 = ea;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x827ff88c
	if (ctx.cr6.lt) goto loc_827FF88C;
loc_827FF8A4:
	// lwz r11,276(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 276);
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpw cr6,r4,r11
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x827ff870
	if (ctx.cr6.lt) goto loc_827FF870;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827FF8BC"))) PPC_WEAK_FUNC(sub_827FF8BC);
PPC_FUNC_IMPL(__imp__sub_827FF8BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827FF8C0"))) PPC_WEAK_FUNC(sub_827FF8C0);
PPC_FUNC_IMPL(__imp__sub_827FF8C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7674
	ctx.lr = 0x827FF8C8;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,276(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 276);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r27,0(r6)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// li r28,0
	ctx.r28.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x827ff954
	if (!ctx.cr6.gt) goto loc_827FF954;
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
loc_827FF8EC:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r10,92(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 92);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x827ff920
	if (!ctx.cr6.lt) goto loc_827FF920;
	// addi r8,r9,-1
	ctx.r8.s64 = ctx.r9.s64 + -1;
loc_827FF908:
	// lbzu r9,1(r8)
	ea = 1 + ctx.r8.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r8.u32 = ea;
	// stb r9,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r9.u8);
	// stbu r9,1(r11)
	ea = 1 + ctx.r11.u32;
	PPC_STORE_U8(ea, ctx.r9.u8);
	ctx.r11.u32 = ea;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x827ff908
	if (ctx.cr6.lt) goto loc_827FF908;
loc_827FF920:
	// li r7,1
	ctx.r7.s64 = 1;
	// lwz r8,92(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 92);
	// addi r6,r28,1
	ctx.r6.s64 = ctx.r28.s64 + 1;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x827f7028
	ctx.lr = 0x827FF93C;
	sub_827F7028(ctx, base);
	// lwz r11,276(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 276);
	// addi r28,r28,2
	ctx.r28.s64 = ctx.r28.s64 + 2;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x827ff8ec
	if (ctx.cr6.lt) goto loc_827FF8EC;
loc_827FF954:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827FF95C"))) PPC_WEAK_FUNC(sub_827FF95C);
PPC_FUNC_IMPL(__imp__sub_827FF95C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827FF960"))) PPC_WEAK_FUNC(sub_827FF960);
PPC_FUNC_IMPL(__imp__sub_827FF960) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// lwz r11,276(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 276);
	// lwz r9,0(r6)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x827ffa28
	if (!ctx.cr6.gt) goto loc_827FFA28;
	// subf r5,r9,r5
	ctx.r5.s64 = ctx.r5.s64 - ctx.r9.s64;
loc_827FF97C:
	// lwzx r11,r5,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r9.u32);
	// lwz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// mulli r7,r8,3
	ctx.r7.s64 = ctx.r8.s64 * 3;
	// stb r8,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r8.u8);
	// lbzu r8,1(r11)
	ea = 1 + ctx.r11.u32;
	ctx.r8.u64 = PPC_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// add r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 + ctx.r8.u64;
	// addi r8,r8,2
	ctx.r8.s64 = ctx.r8.s64 + 2;
	// srawi r8,r8,2
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r8.s32 >> 2;
	// stbu r8,1(r10)
	ea = 1 + ctx.r10.u32;
	PPC_STORE_U8(ea, ctx.r8.u8);
	ctx.r10.u32 = ea;
	// lwz r8,40(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 40);
	// addic. r8,r8,-2
	ctx.xer.ca = ctx.r8.u32 > 1;
	ctx.r8.s64 = ctx.r8.s64 + -2;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// beq 0x827ff9f4
	if (ctx.cr0.eq) goto loc_827FF9F4;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_827FF9B8:
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// mulli r8,r8,3
	ctx.r8.s64 = ctx.r8.s64 * 3;
	// lbz r7,-2(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + -2);
	// add r7,r7,r8
	ctx.r7.u64 = ctx.r7.u64 + ctx.r8.u64;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// srawi r7,r7,2
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x3) != 0);
	ctx.r7.s64 = ctx.r7.s32 >> 2;
	// stb r7,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r7.u8);
	// lbz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// add r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 + ctx.r8.u64;
	// addi r8,r8,2
	ctx.r8.s64 = ctx.r8.s64 + 2;
	// srawi r8,r8,2
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r8.s32 >> 2;
	// stbu r8,1(r10)
	ea = 1 + ctx.r10.u32;
	PPC_STORE_U8(ea, ctx.r8.u8);
	ctx.r10.u32 = ea;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// bdnz 0x827ff9b8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_827FF9B8;
loc_827FF9F4:
	// lbz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// lbz r11,-1(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + -1);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// mulli r8,r7,3
	ctx.r8.s64 = ctx.r7.s64 * 3;
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// stb r11,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r11.u8);
	// stb r7,1(r10)
	PPC_STORE_U8(ctx.r10.u32 + 1, ctx.r7.u8);
	// lwz r11,276(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 276);
	// cmpw cr6,r6,r11
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x827ff97c
	if (ctx.cr6.lt) goto loc_827FF97C;
loc_827FFA28:
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_827FFA30"))) PPC_WEAK_FUNC(sub_827FFA30);
PPC_FUNC_IMPL(__imp__sub_827FFA30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7670
	ctx.lr = 0x827FFA38;
	__savegprlr_26(ctx, base);
	// lwz r11,276(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 276);
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r26,0(r6)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x827ffb70
	if (!ctx.cr6.gt) goto loc_827FFB70;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
loc_827FFA50:
	// rlwinm r11,r30,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// li r28,0
	ctx.r28.s64 = 0;
	// add r11,r11,r26
	ctx.r11.u64 = ctx.r11.u64 + ctx.r26.u64;
	// addi r29,r11,-4
	ctx.r29.s64 = ctx.r11.s64 + -4;
loc_827FFA60:
	// lwz r7,0(r27)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// bne cr6,0x827ffa74
	if (!ctx.cr6.eq) goto loc_827FFA74;
	// lwz r9,-4(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + -4);
	// b 0x827ffa78
	goto loc_827FFA78;
loc_827FFA74:
	// lwz r9,4(r27)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
loc_827FFA78:
	// lbz r11,0(r7)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r7.u32 + 0);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// lbz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// mulli r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 * 3;
	// lbzu r5,1(r7)
	ea = 1 + ctx.r7.u32;
	ctx.r5.u64 = PPC_LOAD_U8(ea);
	ctx.r7.u32 = ea;
	// lbzu r6,1(r9)
	ea = 1 + ctx.r9.u32;
	ctx.r6.u64 = PPC_LOAD_U8(ea);
	ctx.r9.u32 = ea;
	// lwzu r10,4(r29)
	ea = 4 + ctx.r29.u32;
	ctx.r10.u64 = PPC_LOAD_U32(ea);
	ctx.r29.u32 = ea;
	// add r8,r11,r8
	ctx.r8.u64 = ctx.r11.u64 + ctx.r8.u64;
	// mulli r11,r5,3
	ctx.r11.s64 = ctx.r5.s64 * 3;
	// add r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 + ctx.r6.u64;
	// mulli r6,r8,3
	ctx.r6.s64 = ctx.r8.s64 * 3;
	// addi r5,r8,2
	ctx.r5.s64 = ctx.r8.s64 + 2;
	// add r6,r6,r11
	ctx.r6.u64 = ctx.r6.u64 + ctx.r11.u64;
	// rlwinm r5,r5,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r6,r6,7
	ctx.r6.s64 = ctx.r6.s64 + 7;
	// srawi r5,r5,4
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0xF) != 0);
	ctx.r5.s64 = ctx.r5.s32 >> 4;
	// srawi r6,r6,4
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xF) != 0);
	ctx.r6.s64 = ctx.r6.s32 >> 4;
	// stb r5,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r5.u8);
	// addi r5,r9,1
	ctx.r5.s64 = ctx.r9.s64 + 1;
	// stbu r6,1(r10)
	ea = 1 + ctx.r10.u32;
	PPC_STORE_U8(ea, ctx.r6.u8);
	ctx.r10.u32 = ea;
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// lwz r9,40(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 40);
	// addic. r6,r9,-2
	ctx.xer.ca = ctx.r9.u32 > 1;
	ctx.r6.s64 = ctx.r9.s64 + -2;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// beq 0x827ffb30
	if (ctx.cr0.eq) goto loc_827FFB30;
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// addi r5,r5,-1
	ctx.r5.s64 = ctx.r5.s64 + -1;
	// addi r6,r7,-1
	ctx.r6.s64 = ctx.r7.s64 + -1;
loc_827FFAEC:
	// lbzu r11,1(r6)
	ea = 1 + ctx.r6.u32;
	ctx.r11.u64 = PPC_LOAD_U8(ea);
	ctx.r6.u32 = ea;
	// mulli r7,r9,3
	ctx.r7.s64 = ctx.r9.s64 * 3;
	// lbzu r31,1(r5)
	ea = 1 + ctx.r5.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r5.u32 = ea;
	// mulli r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 * 3;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// add r31,r7,r8
	ctx.r31.u64 = ctx.r7.u64 + ctx.r8.u64;
	// add r8,r7,r11
	ctx.r8.u64 = ctx.r7.u64 + ctx.r11.u64;
	// addi r7,r31,8
	ctx.r7.s64 = ctx.r31.s64 + 8;
	// addi r8,r8,7
	ctx.r8.s64 = ctx.r8.s64 + 7;
	// srawi r7,r7,4
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0xF) != 0);
	ctx.r7.s64 = ctx.r7.s32 >> 4;
	// srawi r31,r8,4
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xF) != 0);
	ctx.r31.s64 = ctx.r8.s32 >> 4;
	// stb r7,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r7.u8);
	// mr r8,r9
	ctx.r8.u64 = ctx.r9.u64;
	// stbu r31,1(r10)
	ea = 1 + ctx.r10.u32;
	PPC_STORE_U8(ea, ctx.r31.u8);
	ctx.r10.u32 = ea;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// bdnz 0x827ffaec
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_827FFAEC;
loc_827FFB30:
	// mulli r9,r11,3
	ctx.r9.s64 = ctx.r11.s64 * 3;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r9,8
	ctx.r9.s64 = ctx.r9.s64 + 8;
	// addi r11,r11,7
	ctx.r11.s64 = ctx.r11.s64 + 7;
	// srawi r9,r9,4
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xF) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 4;
	// srawi r11,r11,4
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 4;
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// stb r9,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r9.u8);
	// stb r11,1(r10)
	PPC_STORE_U8(ctx.r10.u32 + 1, ctx.r11.u8);
	// cmpwi cr6,r28,2
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 2, ctx.xer);
	// blt cr6,0x827ffa60
	if (ctx.cr6.lt) goto loc_827FFA60;
	// lwz r11,276(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 276);
	// addi r27,r27,4
	ctx.r27.s64 = ctx.r27.s64 + 4;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x827ffa50
	if (ctx.cr6.lt) goto loc_827FFA50;
loc_827FFB70:
	// b 0x82fa76c0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827FFB74"))) PPC_WEAK_FUNC(sub_827FFB74);
PPC_FUNC_IMPL(__imp__sub_827FFB74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_827FFB78"))) PPC_WEAK_FUNC(sub_827FFB78);
PPC_FUNC_IMPL(__imp__sub_827FFB78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7668
	ctx.lr = 0x827FFB80;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r5,160
	ctx.r5.s64 = 160;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827FFBA0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32128
	ctx.r11.s64 = -2105540608;
	// stw r3,416(r31)
	PPC_STORE_U32(ctx.r31.u32 + 416, ctx.r3.u32);
	// lis r10,-32128
	ctx.r10.s64 = -2105540608;
	// addi r11,r11,-2536
	ctx.r11.s64 = ctx.r11.s64 + -2536;
	// addi r10,r10,-2512
	ctx.r10.s64 = ctx.r10.s64 + -2512;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// stb r9,8(r3)
	PPC_STORE_U8(ctx.r3.u32 + 8, ctx.r9.u8);
	// lbz r11,266(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 266);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x827ffbf4
	if (ctx.cr0.eq) goto loc_827FFBF4;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r10,25
	ctx.r10.s64 = 25;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827FFBF4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_827FFBF4:
	// lbz r11,72(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 72);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x827ffc10
	if (ctx.cr0.eq) goto loc_827FFC10;
	// lwz r11,280(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 280);
	// li r25,1
	ctx.r25.s64 = 1;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bgt cr6,0x827ffc14
	if (ctx.cr6.gt) goto loc_827FFC14;
loc_827FFC10:
	// li r25,0
	ctx.r25.s64 = 0;
loc_827FFC14:
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// li r27,0
	ctx.r27.s64 = 0;
	// lwz r11,196(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 196);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x827ffe60
	if (!ctx.cr6.gt) goto loc_827FFE60;
	// addi r29,r11,36
	ctx.r29.s64 = ctx.r11.s64 + 36;
	// addi r30,r26,52
	ctx.r30.s64 = ctx.r26.s64 + 52;
loc_827FFC30:
	// lwz r8,0(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// li r28,1
	ctx.r28.s64 = 1;
	// lwz r11,-24(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -24);
	// lwz r6,280(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 280);
	// mullw r7,r11,r8
	ctx.r7.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r8.s32);
	// lwz r5,-28(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + -28);
	// lwz r10,272(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 272);
	// lwz r9,276(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 276);
	// divw r11,r7,r6
	ctx.r11.s32 = ctx.r7.s32 / ctx.r6.s32;
	// rotlwi r7,r7,1
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r7.u32, 1);
	// stw r11,48(r30)
	PPC_STORE_U32(ctx.r30.u32 + 48, ctx.r11.u32);
	// mullw r5,r5,r8
	ctx.r5.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r8.s32);
	// addi r7,r7,-1
	ctx.r7.s64 = ctx.r7.s64 + -1;
	// rotlwi r8,r5,1
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r5.u32, 1);
	// andc r7,r6,r7
	ctx.r7.u64 = ctx.r6.u64 & ~ctx.r7.u64;
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// twlgei r7,-1
	if (ctx.r7.u32 >= 4294967295) __builtin_debugtrap();
	// andc r4,r6,r8
	ctx.r4.u64 = ctx.r6.u64 & ~ctx.r8.u64;
	// twllei r6,0
	if (ctx.r6.u32 <= 0) __builtin_debugtrap();
	// divw r8,r5,r6
	ctx.r8.s32 = ctx.r5.s32 / ctx.r6.s32;
	// twllei r6,0
	if (ctx.r6.u32 <= 0) __builtin_debugtrap();
	// twlgei r4,-1
	if (ctx.r4.u32 >= 4294967295) __builtin_debugtrap();
	// lbz r7,12(r29)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r29.u32 + 12);
	// cmplwi r7,0
	ctx.cr0.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne 0x827ffca4
	if (!ctx.cr0.eq) goto loc_827FFCA4;
	// lis r11,-32128
	ctx.r11.s64 = -2105540608;
	// li r28,0
	ctx.r28.s64 = 0;
	// addi r11,r11,-2192
	ctx.r11.s64 = ctx.r11.s64 + -2192;
	// b 0x827ffd4c
	goto loc_827FFD4C;
loc_827FFCA4:
	// cmpw cr6,r8,r10
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x827ffcc4
	if (!ctx.cr6.eq) goto loc_827FFCC4;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x827ffcc4
	if (!ctx.cr6.eq) goto loc_827FFCC4;
	// lis r11,-32128
	ctx.r11.s64 = -2105540608;
	// li r28,0
	ctx.r28.s64 = 0;
	// addi r11,r11,-2200
	ctx.r11.s64 = ctx.r11.s64 + -2200;
	// b 0x827ffd4c
	goto loc_827FFD4C;
loc_827FFCC4:
	// rlwinm r7,r8,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpw cr6,r7,r10
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x827ffd54
	if (!ctx.cr6.eq) goto loc_827FFD54;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x827ffd04
	if (!ctx.cr6.eq) goto loc_827FFD04;
	// clrlwi. r11,r25,24
	ctx.r11.u64 = ctx.r25.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x827ffcf8
	if (ctx.cr0.eq) goto loc_827FFCF8;
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// ble cr6,0x827ffcf8
	if (!ctx.cr6.gt) goto loc_827FFCF8;
	// lis r11,-32128
	ctx.r11.s64 = -2105540608;
	// addi r11,r11,-1696
	ctx.r11.s64 = ctx.r11.s64 + -1696;
	// b 0x827ffd4c
	goto loc_827FFD4C;
loc_827FFCF8:
	// lis r11,-32128
	ctx.r11.s64 = -2105540608;
	// addi r11,r11,-1960
	ctx.r11.s64 = ctx.r11.s64 + -1960;
	// b 0x827ffd4c
	goto loc_827FFD4C;
loc_827FFD04:
	// cmpw cr6,r7,r10
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x827ffd54
	if (!ctx.cr6.eq) goto loc_827FFD54;
	// rlwinm r7,r11,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpw cr6,r7,r9
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x827ffd54
	if (!ctx.cr6.eq) goto loc_827FFD54;
	// clrlwi. r11,r25,24
	ctx.r11.u64 = ctx.r25.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x827ffd44
	if (ctx.cr0.eq) goto loc_827FFD44;
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// ble cr6,0x827ffd44
	if (!ctx.cr6.gt) goto loc_827FFD44;
	// lis r11,-32128
	ctx.r11.s64 = -2105540608;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r11,r11,-1488
	ctx.r11.s64 = ctx.r11.s64 + -1488;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// stb r10,8(r26)
	PPC_STORE_U8(ctx.r26.u32 + 8, ctx.r10.u8);
	// b 0x827ffe0c
	goto loc_827FFE0C;
loc_827FFD44:
	// lis r11,-32128
	ctx.r11.s64 = -2105540608;
	// addi r11,r11,-1856
	ctx.r11.s64 = ctx.r11.s64 + -1856;
loc_827FFD4C:
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// b 0x827ffe0c
	goto loc_827FFE0C;
loc_827FFD54:
	// rotlwi r7,r10,1
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// divw r6,r10,r8
	ctx.r6.s32 = ctx.r10.s32 / ctx.r8.s32;
	// addi r7,r7,-1
	ctx.r7.s64 = ctx.r7.s64 + -1;
	// mullw r6,r6,r8
	ctx.r6.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r8.s32);
	// andc r7,r8,r7
	ctx.r7.u64 = ctx.r8.u64 & ~ctx.r7.u64;
	// twllei r8,0
	if (ctx.r8.u32 <= 0) __builtin_debugtrap();
	// subf. r6,r6,r10
	ctx.r6.s64 = ctx.r10.s64 - ctx.r6.s64;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// twlgei r7,-1
	if (ctx.r7.u32 >= 4294967295) __builtin_debugtrap();
	// bne 0x827ffdec
	if (!ctx.cr0.eq) goto loc_827FFDEC;
	// rotlwi r7,r9,1
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r9.u32, 1);
	// divw r6,r9,r11
	ctx.r6.s32 = ctx.r9.s32 / ctx.r11.s32;
	// addi r7,r7,-1
	ctx.r7.s64 = ctx.r7.s64 + -1;
	// mullw r6,r6,r11
	ctx.r6.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r11.s32);
	// andc r7,r11,r7
	ctx.r7.u64 = ctx.r11.u64 & ~ctx.r7.u64;
	// twllei r11,0
	if (ctx.r11.u32 <= 0) __builtin_debugtrap();
	// subf. r6,r6,r9
	ctx.r6.s64 = ctx.r9.s64 - ctx.r6.s64;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// twlgei r7,-1
	if (ctx.r7.u32 >= 4294967295) __builtin_debugtrap();
	// bne 0x827ffdec
	if (!ctx.cr0.eq) goto loc_827FFDEC;
	// rotlwi r7,r10,1
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// rotlwi r6,r9,1
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r9.u32, 1);
	// lis r5,-32128
	ctx.r5.s64 = -2105540608;
	// addi r7,r7,-1
	ctx.r7.s64 = ctx.r7.s64 + -1;
	// add r4,r27,r26
	ctx.r4.u64 = ctx.r27.u64 + ctx.r26.u64;
	// addi r6,r6,-1
	ctx.r6.s64 = ctx.r6.s64 + -1;
	// add r3,r27,r26
	ctx.r3.u64 = ctx.r27.u64 + ctx.r26.u64;
	// divw r10,r10,r8
	ctx.r10.s32 = ctx.r10.s32 / ctx.r8.s32;
	// divw r9,r9,r11
	ctx.r9.s32 = ctx.r9.s32 / ctx.r11.s32;
	// twllei r8,0
	if (ctx.r8.u32 <= 0) __builtin_debugtrap();
	// twllei r11,0
	if (ctx.r11.u32 <= 0) __builtin_debugtrap();
	// addi r5,r5,-2176
	ctx.r5.s64 = ctx.r5.s64 + -2176;
	// andc r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 & ~ctx.r7.u64;
	// andc r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 & ~ctx.r6.u64;
	// stw r5,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r5.u32);
	// stb r10,140(r4)
	PPC_STORE_U8(ctx.r4.u32 + 140, ctx.r10.u8);
	// twlgei r8,-1
	if (ctx.r8.u32 >= 4294967295) __builtin_debugtrap();
	// twlgei r11,-1
	if (ctx.r11.u32 >= 4294967295) __builtin_debugtrap();
	// stb r9,150(r3)
	PPC_STORE_U8(ctx.r3.u32 + 150, ctx.r9.u8);
	// b 0x827ffe0c
	goto loc_827FFE0C;
loc_827FFDEC:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r10,38
	ctx.r10.s64 = 38;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827FFE0C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_827FFE0C:
	// clrlwi. r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x827ffe48
	if (ctx.cr0.eq) goto loc_827FFE48;
	// lwz r28,4(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r24,276(r31)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r31.u32 + 276);
	// lwz r4,272(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 272);
	// lwz r3,92(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// bl 0x827f6ff8
	ctx.lr = 0x827FFE28;
	sub_827F6FF8(ctx, base);
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827FFE44;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,-40(r30)
	PPC_STORE_U32(ctx.r30.u32 + -40, ctx.r3.u32);
loc_827FFE48:
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// addi r29,r29,84
	ctx.r29.s64 = ctx.r29.s64 + 84;
	// cmpw cr6,r27,r11
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x827ffc30
	if (ctx.cr6.lt) goto loc_827FFC30;
loc_827FFE60:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82fa76b8
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_827FFE68"))) PPC_WEAK_FUNC(sub_827FFE68);
PPC_FUNC_IMPL(__imp__sub_827FFE68) {
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
	// li r5,1024
	ctx.r5.s64 = 1024;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r31,420(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 420);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827FFE9C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// li r5,1024
	ctx.r5.s64 = 1024;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827FFEBC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r3.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r5,1024
	ctx.r5.s64 = 1024;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827FFEDC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r3.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// li r5,1024
	ctx.r5.s64 = 1024;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x827FFEFC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r6,256
	ctx.r6.s64 = 256;
	// lis r8,91
	ctx.r8.s64 = 5963776;
	// stw r3,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r3.u32);
	// lis r9,-227
	ctx.r9.s64 = -14876672;
	// lis r10,-179
	ctx.r10.s64 = -11730944;
	// lis r7,44
	ctx.r7.s64 = 2883584;
	// li r11,0
	ctx.r11.s64 = 0;
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// ori r8,r8,26880
	ctx.r8.u64 = ctx.r8.u64 | 26880;
	// ori r9,r9,44800
	ctx.r9.u64 = ctx.r9.u64 | 44800;
	// ori r10,r10,2944
	ctx.r10.u64 = ctx.r10.u64 | 2944;
	// ori r7,r7,36096
	ctx.r7.u64 = ctx.r7.u64 | 36096;
loc_827FFF2C:
	// lwz r6,8(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// srawi r5,r10,16
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xFFFF) != 0);
	ctx.r5.s64 = ctx.r10.s32 >> 16;
	// srawi r4,r9,16
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xFFFF) != 0);
	ctx.r4.s64 = ctx.r9.s32 >> 16;
	// addis r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 65536;
	// addis r9,r9,2
	ctx.r9.s64 = ctx.r9.s64 + 131072;
	// addi r10,r10,26345
	ctx.r10.s64 = ctx.r10.s64 + 26345;
	// stwx r5,r11,r6
	PPC_STORE_U32(ctx.r11.u32 + ctx.r6.u32, ctx.r5.u32);
	// addi r9,r9,-14942
	ctx.r9.s64 = ctx.r9.s64 + -14942;
	// lwz r6,12(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// stwx r4,r6,r11
	PPC_STORE_U32(ctx.r6.u32 + ctx.r11.u32, ctx.r4.u32);
	// lwz r6,16(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// stwx r8,r11,r6
	PPC_STORE_U32(ctx.r11.u32 + ctx.r6.u32, ctx.r8.u32);
	// addis r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -65536;
	// lwz r6,20(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// addi r8,r8,18734
	ctx.r8.s64 = ctx.r8.s64 + 18734;
	// stwx r7,r6,r11
	PPC_STORE_U32(ctx.r6.u32 + ctx.r11.u32, ctx.r7.u32);
	// addi r7,r7,-22554
	ctx.r7.s64 = ctx.r7.s64 + -22554;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x827fff2c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_827FFF2C;
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

__attribute__((alias("__imp__sub_827FFF90"))) PPC_WEAK_FUNC(sub_827FFF90);
PPC_FUNC_IMPL(__imp__sub_827FFF90) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7664
	ctx.lr = 0x827FFF98;
	__savegprlr_23(ctx, base);
	// lwz r11,420(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 420);
	// addic. r24,r7,-1
	ctx.xer.ca = ctx.r7.u32 > 0;
	ctx.r24.s64 = ctx.r7.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// lwz r30,92(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 92);
	// lwz r8,288(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 288);
	// lwz r29,8(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r28,12(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r27,16(r11)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r26,20(r11)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// blt 0x8280005c
	if (ctx.cr0.lt) goto loc_8280005C;
	// rlwinm r31,r5,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r25,r6,-4
	ctx.r25.s64 = ctx.r6.s64 + -4;
loc_827FFFC4:
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// lwz r7,4(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r6,8(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// lwzu r10,4(r25)
	ea = 4 + ctx.r25.u32;
	ctx.r10.u64 = PPC_LOAD_U32(ea);
	ctx.r25.u32 = ea;
	// lwzx r9,r11,r31
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// lwzx r11,r31,r7
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r7.u32);
	// lwzx r7,r6,r31
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r31.u32);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// beq cr6,0x82800054
	if (ctx.cr6.eq) goto loc_82800054;
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// subf r5,r11,r9
	ctx.r5.s64 = ctx.r9.s64 - ctx.r11.s64;
	// subf r3,r11,r7
	ctx.r3.s64 = ctx.r7.s64 - ctx.r11.s64;
loc_827FFFFC:
	// lbzx r7,r3,r11
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r3.u32 + ctx.r11.u32);
	// lbzx r9,r5,r11
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r5.u32 + ctx.r11.u32);
	// rotlwi r6,r7,2
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r7.u32, 2);
	// lbz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rotlwi r23,r7,2
	ctx.r23.u64 = __builtin_rotateleft32(ctx.r7.u32, 2);
	// lwzx r7,r6,r29
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r29.u32);
	// add r7,r7,r9
	ctx.r7.u64 = ctx.r7.u64 + ctx.r9.u64;
	// lbzx r7,r7,r8
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r7.u32 + ctx.r8.u32);
	// stb r7,1(r10)
	PPC_STORE_U8(ctx.r10.u32 + 1, ctx.r7.u8);
	// lwzx r7,r6,r27
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r27.u32);
	// lwzx r6,r23,r26
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r23.u32 + ctx.r26.u32);
	// add r7,r6,r7
	ctx.r7.u64 = ctx.r6.u64 + ctx.r7.u64;
	// srawi r7,r7,16
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0xFFFF) != 0);
	ctx.r7.s64 = ctx.r7.s32 >> 16;
	// add r7,r7,r9
	ctx.r7.u64 = ctx.r7.u64 + ctx.r9.u64;
	// lbzx r7,r7,r8
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r7.u32 + ctx.r8.u32);
	// stb r7,2(r10)
	PPC_STORE_U8(ctx.r10.u32 + 2, ctx.r7.u8);
	// lwzx r7,r23,r28
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r23.u32 + ctx.r28.u32);
	// add r9,r7,r9
	ctx.r9.u64 = ctx.r7.u64 + ctx.r9.u64;
	// lbzx r9,r9,r8
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r8.u32);
	// stbu r9,3(r10)
	ea = 3 + ctx.r10.u32;
	PPC_STORE_U8(ea, ctx.r9.u8);
	ctx.r10.u32 = ea;
	// bdnz 0x827ffffc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_827FFFFC;
loc_82800054:
	// addic. r24,r24,-1
	ctx.xer.ca = ctx.r24.u32 > 0;
	ctx.r24.s64 = ctx.r24.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// bge 0x827fffc4
	if (!ctx.cr0.lt) goto loc_827FFFC4;
loc_8280005C:
	// b 0x82fa76b4
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82800060"))) PPC_WEAK_FUNC(sub_82800060);
PPC_FUNC_IMPL(__imp__sub_82800060) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r30.u64);
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r3,36(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// addic. r30,r7,-1
	ctx.xer.ca = ctx.r7.u32 > 0;
	ctx.r30.s64 = ctx.r7.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// lwz r8,92(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// blt 0x828000e0
	if (ctx.cr0.lt) goto loc_828000E0;
	// rlwinm r31,r5,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
loc_82800080:
	// li r7,0
	ctx.r7.s64 = 0;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x828000d0
	if (!ctx.cr6.gt) goto loc_828000D0;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
loc_82800090:
	// lwz r10,0(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// lwz r11,0(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// lwzx r9,r10,r31
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r31.u32);
	// beq cr6,0x828000c0
	if (ctx.cr6.eq) goto loc_828000C0;
	// subf r10,r3,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r3.s64;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// addi r11,r9,-1
	ctx.r11.s64 = ctx.r9.s64 + -1;
loc_828000B4:
	// lbzu r9,1(r11)
	ea = 1 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// stbux r9,r10,r3
	ea = ctx.r10.u32 + ctx.r3.u32;
	PPC_STORE_U8(ea, ctx.r9.u8);
	ctx.r10.u32 = ea;
	// bdnz 0x828000b4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_828000B4;
loc_828000C0:
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addi r5,r5,4
	ctx.r5.s64 = ctx.r5.s64 + 4;
	// cmpw cr6,r7,r3
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r3.s32, ctx.xer);
	// blt cr6,0x82800090
	if (ctx.cr6.lt) goto loc_82800090;
loc_828000D0:
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// bge 0x82800080
	if (!ctx.cr0.lt) goto loc_82800080;
loc_828000E0:
	// ld r30,-16(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828000EC"))) PPC_WEAK_FUNC(sub_828000EC);
PPC_FUNC_IMPL(__imp__sub_828000EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_828000F0"))) PPC_WEAK_FUNC(sub_828000F0);
PPC_FUNC_IMPL(__imp__sub_828000F0) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// lwz r8,92(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 92);
	// lwz r3,0(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// b 0x827f7028
	sub_827F7028(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8280010C"))) PPC_WEAK_FUNC(sub_8280010C);
PPC_FUNC_IMPL(__imp__sub_8280010C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82800110"))) PPC_WEAK_FUNC(sub_82800110);
PPC_FUNC_IMPL(__imp__sub_82800110) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// addic. r31,r7,-1
	ctx.xer.ca = ctx.r7.u32 > 0;
	ctx.r31.s64 = ctx.r7.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// lwz r7,92(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 92);
	// blt 0x8280016c
	if (ctx.cr0.lt) goto loc_8280016C;
	// rlwinm r11,r5,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r6,-4
	ctx.r8.s64 = ctx.r6.s64 + -4;
loc_82800128:
	// lwz r6,0(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwzu r10,4(r8)
	ea = 4 + ctx.r8.u32;
	ctx.r10.u64 = PPC_LOAD_U32(ea);
	ctx.r8.u32 = ea;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// lwzx r6,r6,r11
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r11.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// beq cr6,0x82800164
	if (ctx.cr6.eq) goto loc_82800164;
	// addi r10,r10,-3
	ctx.r10.s64 = ctx.r10.s64 + -3;
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
loc_8280014C:
	// lbzx r5,r9,r6
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r6.u32);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stb r5,5(r10)
	PPC_STORE_U8(ctx.r10.u32 + 5, ctx.r5.u8);
	// stb r5,4(r10)
	PPC_STORE_U8(ctx.r10.u32 + 4, ctx.r5.u8);
	// stbu r5,3(r10)
	ea = 3 + ctx.r10.u32;
	PPC_STORE_U8(ea, ctx.r5.u8);
	ctx.r10.u32 = ea;
	// bdnz 0x8280014c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8280014C;
loc_82800164:
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bge 0x82800128
	if (!ctx.cr0.lt) goto loc_82800128;
loc_8280016C:
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82800174"))) PPC_WEAK_FUNC(sub_82800174);
PPC_FUNC_IMPL(__imp__sub_82800174) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82800178"))) PPC_WEAK_FUNC(sub_82800178);
PPC_FUNC_IMPL(__imp__sub_82800178) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7660
	ctx.lr = 0x82800180;
	__savegprlr_22(ctx, base);
	// lwz r11,420(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 420);
	// addic. r24,r7,-1
	ctx.xer.ca = ctx.r7.u32 > 0;
	ctx.r24.s64 = ctx.r7.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// lwz r30,92(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 92);
	// lwz r31,288(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 288);
	// lwz r28,8(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r27,12(r11)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// lwz r26,16(r11)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r25,20(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// blt 0x82800264
	if (ctx.cr0.lt) goto loc_82800264;
	// rlwinm r9,r5,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r29,r6,-4
	ctx.r29.s64 = ctx.r6.s64 + -4;
loc_828001AC:
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// lwz r7,4(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r6,8(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// lwz r5,12(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// lwzu r10,4(r29)
	ea = 4 + ctx.r29.u32;
	ctx.r10.u64 = PPC_LOAD_U32(ea);
	ctx.r29.u32 = ea;
	// lwzx r8,r11,r9
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// lwzx r11,r9,r7
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r7.u32);
	// lwzx r7,r6,r9
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r9.u32);
	// lwzx r3,r9,r5
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r5.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// beq cr6,0x8280025c
	if (ctx.cr6.eq) goto loc_8280025C;
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// subf r6,r11,r8
	ctx.r6.s64 = ctx.r8.s64 - ctx.r11.s64;
	// subf r5,r11,r7
	ctx.r5.s64 = ctx.r7.s64 - ctx.r11.s64;
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
loc_828001F0:
	// lbzx r8,r5,r11
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r5.u32 + ctx.r11.u32);
	// lbz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// rotlwi r8,r8,2
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r8.u32, 2);
	// lbzx r23,r6,r11
	ctx.r23.u64 = PPC_LOAD_U8(ctx.r6.u32 + ctx.r11.u32);
	// rotlwi r22,r7,2
	ctx.r22.u64 = __builtin_rotateleft32(ctx.r7.u32, 2);
	// lwzx r7,r8,r28
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r28.u32);
	// subf r7,r7,r31
	ctx.r7.s64 = ctx.r31.s64 - ctx.r7.s64;
	// subf r7,r23,r7
	ctx.r7.s64 = ctx.r7.s64 - ctx.r23.s64;
	// lbz r7,255(r7)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r7.u32 + 255);
	// stb r7,1(r10)
	PPC_STORE_U8(ctx.r10.u32 + 1, ctx.r7.u8);
	// lwzx r8,r8,r26
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r26.u32);
	// lwzx r7,r22,r25
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r22.u32 + ctx.r25.u32);
	// add r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 + ctx.r8.u64;
	// srawi r8,r8,16
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xFFFF) != 0);
	ctx.r8.s64 = ctx.r8.s32 >> 16;
	// subf r8,r8,r31
	ctx.r8.s64 = ctx.r31.s64 - ctx.r8.s64;
	// subf r8,r23,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r23.s64;
	// lbz r8,255(r8)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r8.u32 + 255);
	// stb r8,2(r10)
	PPC_STORE_U8(ctx.r10.u32 + 2, ctx.r8.u8);
	// lwzx r8,r22,r27
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r22.u32 + ctx.r27.u32);
	// subf r8,r8,r31
	ctx.r8.s64 = ctx.r31.s64 - ctx.r8.s64;
	// subf r8,r23,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r23.s64;
	// lbz r8,255(r8)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r8.u32 + 255);
	// stb r8,3(r10)
	PPC_STORE_U8(ctx.r10.u32 + 3, ctx.r8.u8);
	// lbzx r8,r3,r11
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r3.u32 + ctx.r11.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stbu r8,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U8(ea, ctx.r8.u8);
	ctx.r10.u32 = ea;
	// bdnz 0x828001f0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_828001F0;
loc_8280025C:
	// addic. r24,r24,-1
	ctx.xer.ca = ctx.r24.u32 > 0;
	ctx.r24.s64 = ctx.r24.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// bge 0x828001ac
	if (!ctx.cr0.lt) goto loc_828001AC;
loc_82800264:
	// b 0x82fa76b0
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82800268"))) PPC_WEAK_FUNC(sub_82800268);
PPC_FUNC_IMPL(__imp__sub_82800268) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8280026C"))) PPC_WEAK_FUNC(sub_8280026C);
PPC_FUNC_IMPL(__imp__sub_8280026C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82800270"))) PPC_WEAK_FUNC(sub_82800270);
PPC_FUNC_IMPL(__imp__sub_82800270) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x82800278;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r5,24
	ctx.r5.s64 = 24;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82800298;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32128
	ctx.r11.s64 = -2105540608;
	// stw r3,420(r31)
	PPC_STORE_U32(ctx.r31.u32 + 420, ctx.r3.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r11,r11,616
	ctx.r11.s64 = ctx.r11.s64 + 616;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x828002f4
	if (ctx.cr6.eq) goto loc_828002F4;
	// ble cr6,0x828002e4
	if (!ctx.cr6.gt) goto loc_828002E4;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// ble cr6,0x828002d8
	if (!ctx.cr6.gt) goto loc_828002D8;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bgt cr6,0x828002e4
	if (ctx.cr6.gt) goto loc_828002E4;
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// b 0x828002fc
	goto loc_828002FC;
loc_828002D8:
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// b 0x828002fc
	goto loc_828002FC;
loc_828002E4:
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bge cr6,0x82800320
	if (!ctx.cr6.lt) goto loc_82800320;
	// b 0x82800300
	goto loc_82800300;
loc_828002F4:
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
loc_828002FC:
	// beq cr6,0x82800320
	if (ctx.cr6.eq) goto loc_82800320;
loc_82800300:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r10,10
	ctx.r10.s64 = 10;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82800320;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82800320:
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// li r29,1
	ctx.r29.s64 = 1;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x828003e4
	if (ctx.cr6.eq) goto loc_828003E4;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x828003a8
	if (ctx.cr6.eq) goto loc_828003A8;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x82800364
	if (ctx.cr6.eq) goto loc_82800364;
	// lwz r10,40(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x828003fc
	if (!ctx.cr6.eq) goto loc_828003FC;
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// lis r10,-32128
	ctx.r10.s64 = -2105540608;
	// addi r10,r10,96
	ctx.r10.s64 = ctx.r10.s64 + 96;
	// stw r11,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r11.u32);
	// stw r10,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r10.u32);
	// b 0x82800464
	goto loc_82800464;
loc_82800364:
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// li r10,4
	ctx.r10.s64 = 4;
	// stw r10,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r10.u32);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bne cr6,0x82800390
	if (!ctx.cr6.eq) goto loc_82800390;
	// lis r11,-32128
	ctx.r11.s64 = -2105540608;
	// addi r11,r11,376
	ctx.r11.s64 = ctx.r11.s64 + 376;
loc_82800380:
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827ffe68
	ctx.lr = 0x8280038C;
	sub_827FFE68(ctx, base);
	// b 0x82800464
	goto loc_82800464;
loc_82800390:
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
loc_82800394:
	// bne cr6,0x828003fc
	if (!ctx.cr6.eq) goto loc_828003FC;
	// lis r11,-32128
	ctx.r11.s64 = -2105540608;
	// addi r11,r11,96
	ctx.r11.s64 = ctx.r11.s64 + 96;
loc_828003A0:
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
	// b 0x82800464
	goto loc_82800464;
loc_828003A8:
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// li r10,3
	ctx.r10.s64 = 3;
	// stw r10,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r10.u32);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x828003c8
	if (!ctx.cr6.eq) goto loc_828003C8;
	// lis r11,-32128
	ctx.r11.s64 = -2105540608;
	// addi r11,r11,-112
	ctx.r11.s64 = ctx.r11.s64 + -112;
	// b 0x82800380
	goto loc_82800380;
loc_828003C8:
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x828003dc
	if (!ctx.cr6.eq) goto loc_828003DC;
	// lis r11,-32128
	ctx.r11.s64 = -2105540608;
	// addi r11,r11,272
	ctx.r11.s64 = ctx.r11.s64 + 272;
	// b 0x828003a0
	goto loc_828003A0;
loc_828003DC:
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// b 0x82800394
	goto loc_82800394;
loc_828003E4:
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// stw r29,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r29.u32);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82800420
	if (ctx.cr6.eq) goto loc_82800420;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x82800420
	if (ctx.cr6.eq) goto loc_82800420;
loc_828003FC:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r10,27
	ctx.r10.s64 = 27;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8280041C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82800464
	goto loc_82800464;
loc_82800420:
	// lis r10,-32128
	ctx.r10.s64 = -2105540608;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// addi r10,r10,240
	ctx.r10.s64 = ctx.r10.s64 + 240;
	// stw r10,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r10.u32);
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// ble cr6,0x82800464
	if (!ctx.cr6.gt) goto loc_82800464;
	// li r10,84
	ctx.r10.s64 = 84;
loc_82800440:
	// lwz r9,196(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 196);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// addi r10,r10,84
	ctx.r10.s64 = ctx.r10.s64 + 84;
	// stb r8,48(r9)
	PPC_STORE_U8(ctx.r9.u32 + 48, ctx.r8.u8);
	// lwz r9,36(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x82800440
	if (ctx.cr6.lt) goto loc_82800440;
loc_82800464:
	// lbz r11,74(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 74);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82800478
	if (ctx.cr0.eq) goto loc_82800478;
	// stw r29,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r29.u32);
	// b 0x82800480
	goto loc_82800480;
loc_82800478:
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// stw r11,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r11.u32);
loc_82800480:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82800488"))) PPC_WEAK_FUNC(sub_82800488);
PPC_FUNC_IMPL(__imp__sub_82800488) {
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
	// li r5,1024
	ctx.r5.s64 = 1024;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r31,416(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 416);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828004BC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r3.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// li r5,1024
	ctx.r5.s64 = 1024;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828004DC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r3.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r5,1024
	ctx.r5.s64 = 1024;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828004FC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r3.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// li r5,1024
	ctx.r5.s64 = 1024;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8280051C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r6,256
	ctx.r6.s64 = 256;
	// lis r8,91
	ctx.r8.s64 = 5963776;
	// stw r3,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r3.u32);
	// lis r9,-227
	ctx.r9.s64 = -14876672;
	// lis r10,-179
	ctx.r10.s64 = -11730944;
	// lis r7,44
	ctx.r7.s64 = 2883584;
	// li r11,0
	ctx.r11.s64 = 0;
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// ori r8,r8,26880
	ctx.r8.u64 = ctx.r8.u64 | 26880;
	// ori r9,r9,44800
	ctx.r9.u64 = ctx.r9.u64 | 44800;
	// ori r10,r10,2944
	ctx.r10.u64 = ctx.r10.u64 | 2944;
	// ori r7,r7,36096
	ctx.r7.u64 = ctx.r7.u64 | 36096;
loc_8280054C:
	// lwz r6,16(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// srawi r5,r10,16
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xFFFF) != 0);
	ctx.r5.s64 = ctx.r10.s32 >> 16;
	// srawi r4,r9,16
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xFFFF) != 0);
	ctx.r4.s64 = ctx.r9.s32 >> 16;
	// addis r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 65536;
	// addis r9,r9,2
	ctx.r9.s64 = ctx.r9.s64 + 131072;
	// addi r10,r10,26345
	ctx.r10.s64 = ctx.r10.s64 + 26345;
	// stwx r5,r11,r6
	PPC_STORE_U32(ctx.r11.u32 + ctx.r6.u32, ctx.r5.u32);
	// addi r9,r9,-14942
	ctx.r9.s64 = ctx.r9.s64 + -14942;
	// lwz r6,20(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// stwx r4,r6,r11
	PPC_STORE_U32(ctx.r6.u32 + ctx.r11.u32, ctx.r4.u32);
	// lwz r6,24(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// stwx r8,r11,r6
	PPC_STORE_U32(ctx.r11.u32 + ctx.r6.u32, ctx.r8.u32);
	// addis r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -65536;
	// lwz r6,28(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// addi r8,r8,18734
	ctx.r8.s64 = ctx.r8.s64 + 18734;
	// stwx r7,r6,r11
	PPC_STORE_U32(ctx.r6.u32 + ctx.r11.u32, ctx.r7.u32);
	// addi r7,r7,-22554
	ctx.r7.s64 = ctx.r7.s64 + -22554;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x8280054c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8280054C;
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

__attribute__((alias("__imp__sub_828005B0"))) PPC_WEAK_FUNC(sub_828005B0);
PPC_FUNC_IMPL(__imp__sub_828005B0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,416(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 416);
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,36(r11)
	PPC_STORE_U8(ctx.r11.u32 + 36, ctx.r10.u8);
	// lwz r10,96(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 96);
	// stw r10,44(r11)
	PPC_STORE_U32(ctx.r11.u32 + 44, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828005C8"))) PPC_WEAK_FUNC(sub_828005C8);
PPC_FUNC_IMPL(__imp__sub_828005C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x828005D0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,416(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 416);
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r5,r7
	ctx.r5.u64 = ctx.r7.u64;
	// mr r29,r8
	ctx.r29.u64 = ctx.r8.u64;
	// lbz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 36);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82800624
	if (ctx.cr0.eq) goto loc_82800624;
	// lwz r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// li r7,1
	ctx.r7.s64 = 1;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r8,40(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// li r4,0
	ctx.r4.s64 = 0;
	// add r5,r11,r5
	ctx.r5.u64 = ctx.r11.u64 + ctx.r5.u64;
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// bl 0x827f7028
	ctx.lr = 0x82800614;
	sub_827F7028(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r30,1
	ctx.r30.s64 = 1;
	// stb r11,36(r31)
	PPC_STORE_U8(ctx.r31.u32 + 36, ctx.r11.u8);
	// b 0x82800694
	goto loc_82800694;
loc_82800624:
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// li r30,2
	ctx.r30.s64 = 2;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bge cr6,0x82800638
	if (!ctx.cr6.lt) goto loc_82800638;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
loc_82800638:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// subf r10,r11,r9
	ctx.r10.s64 = ctx.r9.s64 - ctx.r11.s64;
	// cmplw cr6,r30,r10
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x8280064c
	if (!ctx.cr6.gt) goto loc_8280064C;
	// mr r30,r10
	ctx.r30.u64 = ctx.r10.u64;
loc_8280064C:
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplwi cr6,r30,1
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 1, ctx.xer);
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// ble cr6,0x82800670
	if (!ctx.cr6.gt) goto loc_82800670;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// b 0x82800680
	goto loc_82800680;
loc_82800670:
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// stb r10,36(r31)
	PPC_STORE_U8(ctx.r31.u32 + 36, ctx.r10.u8);
loc_82800680:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lwz r5,0(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82800694;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82800694:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// lbz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 36);
	// lwz r10,44(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// subf r10,r30,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r30.s64;
	// stw r10,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r10.u32);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x828006c4
	if (!ctx.cr0.eq) goto loc_828006C4;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
loc_828006C4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828006CC"))) PPC_WEAK_FUNC(sub_828006CC);
PPC_FUNC_IMPL(__imp__sub_828006CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_828006D0"))) PPC_WEAK_FUNC(sub_828006D0);
PPC_FUNC_IMPL(__imp__sub_828006D0) {
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
	// lwz r10,416(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 416);
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// lwz r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// mr r30,r8
	ctx.r30.u64 = ctx.r8.u64;
	// lwz r5,0(r5)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,12(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// add r6,r11,r7
	ctx.r6.u64 = ctx.r11.u64 + ctx.r7.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8280070C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_8280073C"))) PPC_WEAK_FUNC(sub_8280073C);
PPC_FUNC_IMPL(__imp__sub_8280073C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82800740"))) PPC_WEAK_FUNC(sub_82800740);
PPC_FUNC_IMPL(__imp__sub_82800740) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7668
	ctx.lr = 0x82800748;
	__savegprlr_24(ctx, base);
	// lwz r11,416(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 416);
	// rlwinm r8,r5,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,0(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r7,4(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r4,8(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// lwz r5,92(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 92);
	// lwz r30,16(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r29,20(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// rlwinm. r5,r5,31,1,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 31) & 0x7FFFFFFF;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// lwz r28,24(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// lwz r27,28(r11)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// lwzx r9,r9,r8
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// lwzx r7,r7,r8
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r8.u32);
	// lwz r10,288(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 288);
	// lwzx r8,r4,r8
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r8.u32);
	// lwz r11,0(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// beq 0x8280081c
	if (ctx.cr0.eq) goto loc_8280081C;
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
loc_82800790:
	// lbz r6,0(r8)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r8.u32 + 0);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// lbz r5,0(r7)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r7.u32 + 0);
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// rotlwi r31,r6,2
	ctx.r31.u64 = __builtin_rotateleft32(ctx.r6.u32, 2);
	// lbz r6,0(r9)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// rotlwi r25,r5,2
	ctx.r25.u64 = __builtin_rotateleft32(ctx.r5.u32, 2);
	// lwzx r4,r31,r30
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r30.u32);
	// lwzx r26,r25,r27
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r25.u32 + ctx.r27.u32);
	// lwzx r5,r31,r28
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r28.u32);
	// add r24,r6,r4
	ctx.r24.u64 = ctx.r6.u64 + ctx.r4.u64;
	// lwzx r31,r25,r29
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r25.u32 + ctx.r29.u32);
	// add r5,r26,r5
	ctx.r5.u64 = ctx.r26.u64 + ctx.r5.u64;
	// add r26,r6,r31
	ctx.r26.u64 = ctx.r6.u64 + ctx.r31.u64;
	// srawi r5,r5,16
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0xFFFF) != 0);
	ctx.r5.s64 = ctx.r5.s32 >> 16;
	// lbzx r25,r24,r10
	ctx.r25.u64 = PPC_LOAD_U8(ctx.r24.u32 + ctx.r10.u32);
	// add r6,r6,r5
	ctx.r6.u64 = ctx.r6.u64 + ctx.r5.u64;
	// stb r25,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r25.u8);
	// lbzx r6,r6,r10
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r6.u32 + ctx.r10.u32);
	// stb r6,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r6.u8);
	// lbzx r6,r26,r10
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r26.u32 + ctx.r10.u32);
	// stb r6,2(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2, ctx.r6.u8);
	// lbzu r6,1(r9)
	ea = 1 + ctx.r9.u32;
	ctx.r6.u64 = PPC_LOAD_U8(ea);
	ctx.r9.u32 = ea;
	// add r4,r6,r4
	ctx.r4.u64 = ctx.r6.u64 + ctx.r4.u64;
	// lbzx r4,r4,r10
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r4.u32 + ctx.r10.u32);
	// add r5,r6,r5
	ctx.r5.u64 = ctx.r6.u64 + ctx.r5.u64;
	// stbu r4,3(r11)
	ea = 3 + ctx.r11.u32;
	PPC_STORE_U8(ea, ctx.r4.u8);
	ctx.r11.u32 = ea;
	// add r6,r6,r31
	ctx.r6.u64 = ctx.r6.u64 + ctx.r31.u64;
	// lbzx r5,r5,r10
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r5.u32 + ctx.r10.u32);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stb r5,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r5.u8);
	// lbzx r6,r6,r10
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r6.u32 + ctx.r10.u32);
	// stb r6,2(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2, ctx.r6.u8);
	// addi r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 + 3;
	// bdnz 0x82800790
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82800790;
loc_8280081C:
	// lwz r6,92(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 92);
	// clrlwi. r6,r6,31
	ctx.r6.u64 = ctx.r6.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq 0x82800878
	if (ctx.cr0.eq) goto loc_82800878;
	// lbz r8,0(r8)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r8.u32 + 0);
	// lbz r7,0(r7)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r7.u32 + 0);
	// rotlwi r5,r8,2
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r8.u32, 2);
	// lbz r9,0(r9)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// rotlwi r4,r7,2
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r7.u32, 2);
	// lwzx r8,r5,r30
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r30.u32);
	// lwzx r6,r4,r27
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r27.u32);
	// lwzx r7,r5,r28
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r28.u32);
	// add r5,r8,r9
	ctx.r5.u64 = ctx.r8.u64 + ctx.r9.u64;
	// lwzx r8,r4,r29
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r29.u32);
	// add r7,r6,r7
	ctx.r7.u64 = ctx.r6.u64 + ctx.r7.u64;
	// add r6,r9,r8
	ctx.r6.u64 = ctx.r9.u64 + ctx.r8.u64;
	// srawi r8,r7,16
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0xFFFF) != 0);
	ctx.r8.s64 = ctx.r7.s32 >> 16;
	// lbzx r7,r5,r10
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r5.u32 + ctx.r10.u32);
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// stb r7,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r7.u8);
	// lbzx r9,r9,r10
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r10.u32);
	// stb r9,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r9.u8);
	// lbzx r10,r6,r10
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r6.u32 + ctx.r10.u32);
	// stb r10,2(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2, ctx.r10.u8);
loc_82800878:
	// b 0x82fa76b8
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8280087C"))) PPC_WEAK_FUNC(sub_8280087C);
PPC_FUNC_IMPL(__imp__sub_8280087C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82800880"))) PPC_WEAK_FUNC(sub_82800880);
PPC_FUNC_IMPL(__imp__sub_82800880) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7664
	ctx.lr = 0x82800888;
	__savegprlr_23(ctx, base);
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// rlwinm r10,r5,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r31,416(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 416);
	// mr r9,r6
	ctx.r9.u64 = ctx.r6.u64;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r30,4(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r8,92(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 92);
	// rlwinm r5,r5,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r4,8(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// rlwinm. r6,r8,31,1,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 31) & 0x7FFFFFFF;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// lwz r11,288(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 288);
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r7,4(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// lwz r28,16(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r27,20(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r26,24(r31)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r25,28(r31)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lwzx r30,r30,r5
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r5.u32);
	// lwzx r31,r4,r5
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r5.u32);
	// lwz r9,4(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// beq 0x828009c8
	if (ctx.cr0.eq) goto loc_828009C8;
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
loc_828008E4:
	// lbz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// lbz r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// rotlwi r6,r6,2
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r6.u32, 2);
	// lbz r29,0(r8)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r8.u32 + 0);
	// rotlwi r4,r5,2
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r5.u32, 2);
	// lwzx r5,r6,r28
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r28.u32);
	// lwzx r6,r6,r26
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r26.u32);
	// lwzx r24,r4,r25
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r25.u32);
	// add r23,r29,r5
	ctx.r23.u64 = ctx.r29.u64 + ctx.r5.u64;
	// lwzx r4,r4,r27
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r27.u32);
	// add r6,r24,r6
	ctx.r6.u64 = ctx.r24.u64 + ctx.r6.u64;
	// add r24,r29,r4
	ctx.r24.u64 = ctx.r29.u64 + ctx.r4.u64;
	// srawi r6,r6,16
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xFFFF) != 0);
	ctx.r6.s64 = ctx.r6.s32 >> 16;
	// lbzx r23,r23,r11
	ctx.r23.u64 = PPC_LOAD_U8(ctx.r23.u32 + ctx.r11.u32);
	// add r29,r29,r6
	ctx.r29.u64 = ctx.r29.u64 + ctx.r6.u64;
	// stb r23,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r23.u8);
	// lbzx r29,r29,r11
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r29.u32 + ctx.r11.u32);
	// stb r29,1(r10)
	PPC_STORE_U8(ctx.r10.u32 + 1, ctx.r29.u8);
	// lbzx r29,r24,r11
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r24.u32 + ctx.r11.u32);
	// stb r29,2(r10)
	PPC_STORE_U8(ctx.r10.u32 + 2, ctx.r29.u8);
	// lbzu r29,1(r8)
	ea = 1 + ctx.r8.u32;
	ctx.r29.u64 = PPC_LOAD_U8(ea);
	ctx.r8.u32 = ea;
	// add r24,r29,r5
	ctx.r24.u64 = ctx.r29.u64 + ctx.r5.u64;
	// lbzx r24,r24,r11
	ctx.r24.u64 = PPC_LOAD_U8(ctx.r24.u32 + ctx.r11.u32);
	// add r23,r29,r6
	ctx.r23.u64 = ctx.r29.u64 + ctx.r6.u64;
	// stbu r24,3(r10)
	ea = 3 + ctx.r10.u32;
	PPC_STORE_U8(ea, ctx.r24.u8);
	ctx.r10.u32 = ea;
	// add r29,r29,r4
	ctx.r29.u64 = ctx.r29.u64 + ctx.r4.u64;
	// lbzx r24,r23,r11
	ctx.r24.u64 = PPC_LOAD_U8(ctx.r23.u32 + ctx.r11.u32);
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// stb r24,1(r10)
	PPC_STORE_U8(ctx.r10.u32 + 1, ctx.r24.u8);
	// lbzx r29,r29,r11
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r29.u32 + ctx.r11.u32);
	// stb r29,2(r10)
	PPC_STORE_U8(ctx.r10.u32 + 2, ctx.r29.u8);
	// addi r10,r10,3
	ctx.r10.s64 = ctx.r10.s64 + 3;
	// lbz r29,0(r7)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r7.u32 + 0);
	// add r24,r29,r5
	ctx.r24.u64 = ctx.r29.u64 + ctx.r5.u64;
	// add r23,r29,r6
	ctx.r23.u64 = ctx.r29.u64 + ctx.r6.u64;
	// lbzx r24,r24,r11
	ctx.r24.u64 = PPC_LOAD_U8(ctx.r24.u32 + ctx.r11.u32);
	// add r29,r29,r4
	ctx.r29.u64 = ctx.r29.u64 + ctx.r4.u64;
	// stb r24,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, ctx.r24.u8);
	// lbzx r24,r23,r11
	ctx.r24.u64 = PPC_LOAD_U8(ctx.r23.u32 + ctx.r11.u32);
	// stb r24,1(r9)
	PPC_STORE_U8(ctx.r9.u32 + 1, ctx.r24.u8);
	// lbzx r29,r29,r11
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r29.u32 + ctx.r11.u32);
	// stb r29,2(r9)
	PPC_STORE_U8(ctx.r9.u32 + 2, ctx.r29.u8);
	// lbzu r29,1(r7)
	ea = 1 + ctx.r7.u32;
	ctx.r29.u64 = PPC_LOAD_U8(ea);
	ctx.r7.u32 = ea;
	// add r5,r29,r5
	ctx.r5.u64 = ctx.r29.u64 + ctx.r5.u64;
	// lbzx r5,r5,r11
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r5.u32 + ctx.r11.u32);
	// add r6,r29,r6
	ctx.r6.u64 = ctx.r29.u64 + ctx.r6.u64;
	// stbu r5,3(r9)
	ea = 3 + ctx.r9.u32;
	PPC_STORE_U8(ea, ctx.r5.u8);
	ctx.r9.u32 = ea;
	// add r5,r29,r4
	ctx.r5.u64 = ctx.r29.u64 + ctx.r4.u64;
	// lbzx r6,r6,r11
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r6.u32 + ctx.r11.u32);
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// stb r6,1(r9)
	PPC_STORE_U8(ctx.r9.u32 + 1, ctx.r6.u8);
	// lbzx r6,r5,r11
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r5.u32 + ctx.r11.u32);
	// stb r6,2(r9)
	PPC_STORE_U8(ctx.r9.u32 + 2, ctx.r6.u8);
	// addi r9,r9,3
	ctx.r9.s64 = ctx.r9.s64 + 3;
	// bdnz 0x828008e4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_828008E4;
loc_828009C8:
	// lwz r6,92(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 92);
	// clrlwi. r6,r6,31
	ctx.r6.u64 = ctx.r6.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq 0x82800a4c
	if (ctx.cr0.eq) goto loc_82800A4C;
	// lbz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// lbz r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// rotlwi r6,r6,2
	ctx.r6.u64 = __builtin_rotateleft32(ctx.r6.u32, 2);
	// lbz r8,0(r8)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r8.u32 + 0);
	// rotlwi r4,r5,2
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r5.u32, 2);
	// lwzx r5,r6,r28
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r28.u32);
	// lwzx r3,r4,r25
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r25.u32);
	// lwzx r6,r6,r26
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r26.u32);
	// add r31,r8,r5
	ctx.r31.u64 = ctx.r8.u64 + ctx.r5.u64;
	// lwzx r4,r4,r27
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r27.u32);
	// add r6,r3,r6
	ctx.r6.u64 = ctx.r3.u64 + ctx.r6.u64;
	// add r3,r8,r4
	ctx.r3.u64 = ctx.r8.u64 + ctx.r4.u64;
	// srawi r6,r6,16
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xFFFF) != 0);
	ctx.r6.s64 = ctx.r6.s32 >> 16;
	// lbzx r31,r31,r11
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r31.u32 + ctx.r11.u32);
	// add r8,r8,r6
	ctx.r8.u64 = ctx.r8.u64 + ctx.r6.u64;
	// stb r31,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r31.u8);
	// lbzx r8,r8,r11
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r8.u32 + ctx.r11.u32);
	// stb r8,1(r10)
	PPC_STORE_U8(ctx.r10.u32 + 1, ctx.r8.u8);
	// lbzx r8,r3,r11
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r3.u32 + ctx.r11.u32);
	// stb r8,2(r10)
	PPC_STORE_U8(ctx.r10.u32 + 2, ctx.r8.u8);
	// lbz r10,0(r7)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r7.u32 + 0);
	// add r8,r10,r5
	ctx.r8.u64 = ctx.r10.u64 + ctx.r5.u64;
	// lbzx r8,r8,r11
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r8.u32 + ctx.r11.u32);
	// add r7,r10,r6
	ctx.r7.u64 = ctx.r10.u64 + ctx.r6.u64;
	// add r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 + ctx.r4.u64;
	// stb r8,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, ctx.r8.u8);
	// lbzx r8,r7,r11
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r7.u32 + ctx.r11.u32);
	// stb r8,1(r9)
	PPC_STORE_U8(ctx.r9.u32 + 1, ctx.r8.u8);
	// lbzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r11.u32);
	// stb r11,2(r9)
	PPC_STORE_U8(ctx.r9.u32 + 2, ctx.r11.u8);
loc_82800A4C:
	// b 0x82fa76b4
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82800A50"))) PPC_WEAK_FUNC(sub_82800A50);
PPC_FUNC_IMPL(__imp__sub_82800A50) {
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
	// li r5,48
	ctx.r5.s64 = 48;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82800A80;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r10,-32128
	ctx.r10.s64 = -2105540608;
	// stw r3,416(r30)
	PPC_STORE_U32(ctx.r30.u32 + 416, ctx.r3.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r10,1456
	ctx.r10.s64 = ctx.r10.s64 + 1456;
	// stb r11,8(r3)
	PPC_STORE_U8(ctx.r3.u32 + 8, ctx.r11.u8);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// lwz r10,100(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 100);
	// lwz r9,92(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 92);
	// mullw r10,r10,r9
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r9.s32);
	// stw r10,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r10.u32);
	// lwz r10,276(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 276);
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// bne cr6,0x82800af4
	if (!ctx.cr6.eq) goto loc_82800AF4;
	// lis r11,-32128
	ctx.r11.s64 = -2105540608;
	// lwz r5,40(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// lis r10,-32128
	ctx.r10.s64 = -2105540608;
	// addi r11,r11,1480
	ctx.r11.s64 = ctx.r11.s64 + 1480;
	// addi r10,r10,2176
	ctx.r10.s64 = ctx.r10.s64 + 2176;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r10,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r10.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82800AEC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r3.u32);
	// b 0x82800b10
	goto loc_82800B10;
loc_82800AF4:
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// lis r10,-32128
	ctx.r10.s64 = -2105540608;
	// lis r11,-32128
	ctx.r11.s64 = -2105540608;
	// addi r10,r10,1744
	ctx.r10.s64 = ctx.r10.s64 + 1744;
	// addi r11,r11,1856
	ctx.r11.s64 = ctx.r11.s64 + 1856;
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
loc_82800B10:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82800488
	ctx.lr = 0x82800B18;
	sub_82800488(ctx, base);
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

__attribute__((alias("__imp__sub_82800B30"))) PPC_WEAK_FUNC(sub_82800B30);
PPC_FUNC_IMPL(__imp__sub_82800B30) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,424(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 424);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// lwz r5,92(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 92);
	// lwz r7,24(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// blelr cr6
	if (!ctx.cr6.gt) return;
loc_82800B44:
	// lwz r8,0(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82800ba0
	if (ctx.cr6.eq) goto loc_82800BA0;
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
loc_82800B54:
	// lbz r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r8.u32 + 0);
	// lbz r10,2(r8)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r8.u32 + 2);
	// lbz r9,1(r8)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r8.u32 + 1);
	// rlwinm r3,r11,31,1,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFC;
	// rlwinm r11,r10,29,3,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x1FFFFFFF;
	// rlwinm r10,r9,3,21,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0x7E0;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwzx r10,r3,r7
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r7.u32);
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r11,r9,r10
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r9.u32 + ctx.r10.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi. r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// sthx r11,r9,r10
	PPC_STORE_U16(ctx.r9.u32 + ctx.r10.u32, ctx.r11.u16);
	// bne 0x82800b98
	if (!ctx.cr0.eq) goto loc_82800B98;
	// addis r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 65536;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// sthx r11,r9,r10
	PPC_STORE_U16(ctx.r9.u32 + ctx.r10.u32, ctx.r11.u16);
loc_82800B98:
	// addi r8,r8,3
	ctx.r8.s64 = ctx.r8.s64 + 3;
	// bdnz 0x82800b54
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82800B54;
loc_82800BA0:
	// addic. r6,r6,-1
	ctx.xer.ca = ctx.r6.u32 > 0;
	ctx.r6.s64 = ctx.r6.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// addi r4,r4,4
	ctx.r4.s64 = ctx.r4.s64 + 4;
	// bne 0x82800b44
	if (!ctx.cr0.eq) goto loc_82800B44;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82800BB0"))) PPC_WEAK_FUNC(sub_82800BB0);
PPC_FUNC_IMPL(__imp__sub_82800BB0) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// addi r11,r11,28
	ctx.r11.s64 = ctx.r11.s64 + 28;
	// mtctr r4
	ctx.ctr.u64 = ctx.r4.u64;
loc_82800BCC:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// ble cr6,0x82800bec
	if (!ctx.cr6.gt) goto loc_82800BEC;
	// lwz r8,-4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble cr6,0x82800bec
	if (!ctx.cr6.gt) goto loc_82800BEC;
	// addi r3,r11,-28
	ctx.r3.s64 = ctx.r11.s64 + -28;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
loc_82800BEC:
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// bdnz 0x82800bcc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82800BCC;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82800BF8"))) PPC_WEAK_FUNC(sub_82800BF8);
PPC_FUNC_IMPL(__imp__sub_82800BF8) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// addi r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 + 24;
	// mtctr r4
	ctx.ctr.u64 = ctx.r4.u64;
loc_82800C14:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// ble cr6,0x82800c28
	if (!ctx.cr6.gt) goto loc_82800C28;
	// addi r3,r11,-24
	ctx.r3.s64 = ctx.r11.s64 + -24;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
loc_82800C28:
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// bdnz 0x82800c14
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82800C14;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82800C34"))) PPC_WEAK_FUNC(sub_82800C34);
PPC_FUNC_IMPL(__imp__sub_82800C34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82800C38"))) PPC_WEAK_FUNC(sub_82800C38);
PPC_FUNC_IMPL(__imp__sub_82800C38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7668
	ctx.lr = 0x82800C40;
	__savegprlr_24(ctx, base);
	// lwz r11,424(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 424);
	// lwz r30,0(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// lwz r27,4(r4)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r29,8(r4)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// lwz r26,12(r4)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// cmpw cr6,r27,r30
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r30.s32, ctx.xer);
	// lwz r24,24(r11)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// lwz r28,16(r4)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// lwz r25,20(r4)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	// ble cr6,0x82800d70
	if (!ctx.cr6.gt) goto loc_82800D70;
	// rlwinm r11,r30,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// add r6,r11,r24
	ctx.r6.u64 = ctx.r11.u64 + ctx.r24.u64;
loc_82800C74:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// cmpw cr6,r29,r26
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r26.s32, ctx.xer);
	// bgt cr6,0x82800ccc
	if (ctx.cr6.gt) goto loc_82800CCC;
	// rlwinm r11,r29,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 5) & 0xFFFFFFE0;
	// lwz r7,0(r6)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
loc_82800C90:
	// add r9,r7,r11
	ctx.r9.u64 = ctx.r7.u64 + ctx.r11.u64;
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// cmpw cr6,r28,r25
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r25.s32, ctx.xer);
	// bgt cr6,0x82800cbc
	if (ctx.cr6.gt) goto loc_82800CBC;
	// addi r8,r9,-2
	ctx.r8.s64 = ctx.r9.s64 + -2;
loc_82800CA4:
	// lhzu r9,2(r8)
	ea = 2 + ctx.r8.u32;
	ctx.r9.u64 = PPC_LOAD_U16(ea);
	ctx.r8.u32 = ea;
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne 0x82800ce0
	if (!ctx.cr0.eq) goto loc_82800CE0;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r10,r25
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r25.s32, ctx.xer);
	// ble cr6,0x82800ca4
	if (!ctx.cr6.gt) goto loc_82800CA4;
loc_82800CBC:
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// addi r11,r11,64
	ctx.r11.s64 = ctx.r11.s64 + 64;
	// cmpw cr6,r5,r26
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r26.s32, ctx.xer);
	// ble cr6,0x82800c90
	if (!ctx.cr6.gt) goto loc_82800C90;
loc_82800CCC:
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// cmpw cr6,r3,r27
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r27.s32, ctx.xer);
	// ble cr6,0x82800c74
	if (!ctx.cr6.gt) goto loc_82800C74;
	// b 0x82800ce8
	goto loc_82800CE8;
loc_82800CE0:
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r3,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r3.u32);
loc_82800CE8:
	// cmpw cr6,r27,r30
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r30.s32, ctx.xer);
	// ble cr6,0x82800d70
	if (!ctx.cr6.gt) goto loc_82800D70;
	// rlwinm r11,r27,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// add r6,r11,r24
	ctx.r6.u64 = ctx.r11.u64 + ctx.r24.u64;
loc_82800CFC:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// cmpw cr6,r29,r26
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r26.s32, ctx.xer);
	// bgt cr6,0x82800d54
	if (ctx.cr6.gt) goto loc_82800D54;
	// rlwinm r11,r29,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 5) & 0xFFFFFFE0;
	// lwz r7,0(r6)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
loc_82800D18:
	// add r9,r7,r11
	ctx.r9.u64 = ctx.r7.u64 + ctx.r11.u64;
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// cmpw cr6,r28,r25
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r25.s32, ctx.xer);
	// bgt cr6,0x82800d44
	if (ctx.cr6.gt) goto loc_82800D44;
	// addi r8,r9,-2
	ctx.r8.s64 = ctx.r9.s64 + -2;
loc_82800D2C:
	// lhzu r9,2(r8)
	ea = 2 + ctx.r8.u32;
	ctx.r9.u64 = PPC_LOAD_U16(ea);
	ctx.r8.u32 = ea;
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne 0x82800d68
	if (!ctx.cr0.eq) goto loc_82800D68;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r10,r25
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r25.s32, ctx.xer);
	// ble cr6,0x82800d2c
	if (!ctx.cr6.gt) goto loc_82800D2C;
loc_82800D44:
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
	// addi r11,r11,64
	ctx.r11.s64 = ctx.r11.s64 + 64;
	// cmpw cr6,r3,r26
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r26.s32, ctx.xer);
	// ble cr6,0x82800d18
	if (!ctx.cr6.gt) goto loc_82800D18;
loc_82800D54:
	// addi r5,r5,-1
	ctx.r5.s64 = ctx.r5.s64 + -1;
	// addi r6,r6,-4
	ctx.r6.s64 = ctx.r6.s64 + -4;
	// cmpw cr6,r5,r30
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r30.s32, ctx.xer);
	// bge cr6,0x82800cfc
	if (!ctx.cr6.lt) goto loc_82800CFC;
	// b 0x82800d70
	goto loc_82800D70;
loc_82800D68:
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// stw r5,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r5.u32);
loc_82800D70:
	// cmpw cr6,r29,r26
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r26.s32, ctx.xer);
	// bge cr6,0x82800e80
	if (!ctx.cr6.lt) goto loc_82800E80;
	// rlwinm r11,r29,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 5) & 0xFFFFFFE0;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// rlwinm r7,r11,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
loc_82800D88:
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// cmpw cr6,r30,r27
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r27.s32, ctx.xer);
	// bgt cr6,0x82800ddc
	if (ctx.cr6.gt) goto loc_82800DDC;
	// rlwinm r11,r30,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r24
	ctx.r10.u64 = ctx.r11.u64 + ctx.r24.u64;
loc_82800D9C:
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mr r9,r28
	ctx.r9.u64 = ctx.r28.u64;
	// cmpw cr6,r28,r25
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r25.s32, ctx.xer);
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// bgt cr6,0x82800dcc
	if (ctx.cr6.gt) goto loc_82800DCC;
	// addi r8,r11,-2
	ctx.r8.s64 = ctx.r11.s64 + -2;
loc_82800DB4:
	// lhzu r11,2(r8)
	ea = 2 + ctx.r8.u32;
	ctx.r11.u64 = PPC_LOAD_U16(ea);
	ctx.r8.u32 = ea;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82800df0
	if (!ctx.cr0.eq) goto loc_82800DF0;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmpw cr6,r9,r25
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r25.s32, ctx.xer);
	// ble cr6,0x82800db4
	if (!ctx.cr6.gt) goto loc_82800DB4;
loc_82800DCC:
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpw cr6,r6,r27
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r27.s32, ctx.xer);
	// ble cr6,0x82800d9c
	if (!ctx.cr6.gt) goto loc_82800D9C;
loc_82800DDC:
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// addi r7,r7,64
	ctx.r7.s64 = ctx.r7.s64 + 64;
	// cmpw cr6,r5,r26
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r26.s32, ctx.xer);
	// ble cr6,0x82800d88
	if (!ctx.cr6.gt) goto loc_82800D88;
	// b 0x82800df8
	goto loc_82800DF8;
loc_82800DF0:
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// stw r5,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r5.u32);
loc_82800DF8:
	// cmpw cr6,r26,r29
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r29.s32, ctx.xer);
	// ble cr6,0x82800e80
	if (!ctx.cr6.gt) goto loc_82800E80;
	// rlwinm r11,r26,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 5) & 0xFFFFFFE0;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// rlwinm r7,r11,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
loc_82800E10:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// cmpw cr6,r30,r27
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r27.s32, ctx.xer);
	// bgt cr6,0x82800e64
	if (ctx.cr6.gt) goto loc_82800E64;
	// rlwinm r11,r30,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r24
	ctx.r10.u64 = ctx.r11.u64 + ctx.r24.u64;
loc_82800E24:
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// mr r9,r28
	ctx.r9.u64 = ctx.r28.u64;
	// cmpw cr6,r28,r25
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r25.s32, ctx.xer);
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// bgt cr6,0x82800e54
	if (ctx.cr6.gt) goto loc_82800E54;
	// addi r8,r11,-2
	ctx.r8.s64 = ctx.r11.s64 + -2;
loc_82800E3C:
	// lhzu r11,2(r8)
	ea = 2 + ctx.r8.u32;
	ctx.r11.u64 = PPC_LOAD_U16(ea);
	ctx.r8.u32 = ea;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82800e78
	if (!ctx.cr0.eq) goto loc_82800E78;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// cmpw cr6,r9,r25
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r25.s32, ctx.xer);
	// ble cr6,0x82800e3c
	if (!ctx.cr6.gt) goto loc_82800E3C;
loc_82800E54:
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpw cr6,r5,r27
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r27.s32, ctx.xer);
	// ble cr6,0x82800e24
	if (!ctx.cr6.gt) goto loc_82800E24;
loc_82800E64:
	// addi r6,r6,-1
	ctx.r6.s64 = ctx.r6.s64 + -1;
	// addi r7,r7,-64
	ctx.r7.s64 = ctx.r7.s64 + -64;
	// cmpw cr6,r6,r29
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r29.s32, ctx.xer);
	// bge cr6,0x82800e10
	if (!ctx.cr6.lt) goto loc_82800E10;
	// b 0x82800e80
	goto loc_82800E80;
loc_82800E78:
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// stw r6,12(r4)
	PPC_STORE_U32(ctx.r4.u32 + 12, ctx.r6.u32);
loc_82800E80:
	// cmpw cr6,r28,r25
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r25.s32, ctx.xer);
	// bge cr6,0x82800f88
	if (!ctx.cr6.lt) goto loc_82800F88;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
loc_82800E8C:
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// cmpw cr6,r30,r27
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r27.s32, ctx.xer);
	// bgt cr6,0x82800eec
	if (ctx.cr6.gt) goto loc_82800EEC;
	// rlwinm r11,r29,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 5) & 0xFFFFFFE0;
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r11,r7
	ctx.r9.u64 = ctx.r11.u64 + ctx.r7.u64;
	// add r11,r10,r24
	ctx.r11.u64 = ctx.r10.u64 + ctx.r24.u64;
	// rlwinm r8,r9,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
loc_82800EAC:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// cmpw cr6,r29,r26
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r26.s32, ctx.xer);
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// bgt cr6,0x82800edc
	if (ctx.cr6.gt) goto loc_82800EDC;
loc_82800EC0:
	// lhz r5,0(r9)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r9.u32 + 0);
	// cmplwi r5,0
	ctx.cr0.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne 0x82800efc
	if (!ctx.cr0.eq) goto loc_82800EFC;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r9,r9,64
	ctx.r9.s64 = ctx.r9.s64 + 64;
	// cmpw cr6,r10,r26
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r26.s32, ctx.xer);
	// ble cr6,0x82800ec0
	if (!ctx.cr6.gt) goto loc_82800EC0;
loc_82800EDC:
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpw cr6,r6,r27
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r27.s32, ctx.xer);
	// ble cr6,0x82800eac
	if (!ctx.cr6.gt) goto loc_82800EAC;
loc_82800EEC:
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// cmpw cr6,r7,r25
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r25.s32, ctx.xer);
	// ble cr6,0x82800e8c
	if (!ctx.cr6.gt) goto loc_82800E8C;
	// b 0x82800f04
	goto loc_82800F04;
loc_82800EFC:
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// stw r7,16(r4)
	PPC_STORE_U32(ctx.r4.u32 + 16, ctx.r7.u32);
loc_82800F04:
	// cmpw cr6,r25,r28
	ctx.cr6.compare<int32_t>(ctx.r25.s32, ctx.r28.s32, ctx.xer);
	// ble cr6,0x82800f88
	if (!ctx.cr6.gt) goto loc_82800F88;
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
loc_82800F10:
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// cmpw cr6,r30,r27
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r27.s32, ctx.xer);
	// bgt cr6,0x82800f70
	if (ctx.cr6.gt) goto loc_82800F70;
	// rlwinm r10,r29,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 5) & 0xFFFFFFE0;
	// rlwinm r11,r30,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 + ctx.r7.u64;
	// add r11,r11,r24
	ctx.r11.u64 = ctx.r11.u64 + ctx.r24.u64;
	// rlwinm r8,r10,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
loc_82800F30:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// cmpw cr6,r29,r26
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r26.s32, ctx.xer);
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// bgt cr6,0x82800f60
	if (ctx.cr6.gt) goto loc_82800F60;
loc_82800F44:
	// lhz r5,0(r9)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r9.u32 + 0);
	// cmplwi r5,0
	ctx.cr0.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne 0x82800f80
	if (!ctx.cr0.eq) goto loc_82800F80;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r9,r9,64
	ctx.r9.s64 = ctx.r9.s64 + 64;
	// cmpw cr6,r10,r26
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r26.s32, ctx.xer);
	// ble cr6,0x82800f44
	if (!ctx.cr6.gt) goto loc_82800F44;
loc_82800F60:
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpw cr6,r6,r27
	ctx.cr6.compare<int32_t>(ctx.r6.s32, ctx.r27.s32, ctx.xer);
	// ble cr6,0x82800f30
	if (!ctx.cr6.gt) goto loc_82800F30;
loc_82800F70:
	// addi r7,r7,-1
	ctx.r7.s64 = ctx.r7.s64 + -1;
	// cmpw cr6,r7,r28
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r28.s32, ctx.xer);
	// bge cr6,0x82800f10
	if (!ctx.cr6.lt) goto loc_82800F10;
	// b 0x82800f88
	goto loc_82800F88;
loc_82800F80:
	// mr r25,r7
	ctx.r25.u64 = ctx.r7.u64;
	// stw r7,20(r4)
	PPC_STORE_U32(ctx.r4.u32 + 20, ctx.r7.u32);
loc_82800F88:
	// subf r8,r29,r26
	ctx.r8.s64 = ctx.r26.s64 - ctx.r29.s64;
	// subf r5,r28,r25
	ctx.r5.s64 = ctx.r25.s64 - ctx.r28.s64;
	// mulli r10,r8,12
	ctx.r10.s64 = ctx.r8.s64 * 12;
	// rlwinm r7,r5,3,0,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 3) & 0xFFFFFFF8;
	// subf r11,r30,r27
	ctx.r11.s64 = ctx.r27.s64 - ctx.r30.s64;
	// mullw r9,r10,r10
	ctx.r9.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r10.s32);
	// mullw r10,r7,r7
	ctx.r10.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r7.s32);
	// rlwinm r7,r11,4,0,27
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// mullw r9,r7,r7
	ctx.r9.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r7.s32);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// stw r10,24(r4)
	PPC_STORE_U32(ctx.r4.u32 + 24, ctx.r10.u32);
	// cmpw cr6,r30,r27
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r27.s32, ctx.xer);
	// bgt cr6,0x82801034
	if (ctx.cr6.gt) goto loc_82801034;
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r3,r11,1
	ctx.r3.s64 = ctx.r11.s64 + 1;
	// add r9,r10,r24
	ctx.r9.u64 = ctx.r10.u64 + ctx.r24.u64;
loc_82800FD0:
	// cmpw cr6,r29,r26
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r26.s32, ctx.xer);
	// bgt cr6,0x82801028
	if (ctx.cr6.gt) goto loc_82801028;
	// rlwinm r11,r29,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 5) & 0xFFFFFFE0;
	// lwz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// addi r7,r8,1
	ctx.r7.s64 = ctx.r8.s64 + 1;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_82800FF0:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// cmpw cr6,r28,r25
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r25.s32, ctx.xer);
	// bgt cr6,0x8280101c
	if (ctx.cr6.gt) goto loc_8280101C;
	// addi r6,r5,1
	ctx.r6.s64 = ctx.r5.s64 + 1;
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
loc_82801004:
	// lhz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// cmplwi r6,0
	ctx.cr0.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq 0x82801014
	if (ctx.cr0.eq) goto loc_82801014;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
loc_82801014:
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// bdnz 0x82801004
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82801004;
loc_8280101C:
	// addic. r7,r7,-1
	ctx.xer.ca = ctx.r7.u32 > 0;
	ctx.r7.s64 = ctx.r7.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// addi r11,r11,64
	ctx.r11.s64 = ctx.r11.s64 + 64;
	// bne 0x82800ff0
	if (!ctx.cr0.eq) goto loc_82800FF0;
loc_82801028:
	// addic. r3,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r3.s64 = ctx.r3.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bne 0x82800fd0
	if (!ctx.cr0.eq) goto loc_82800FD0;
loc_82801034:
	// stw r31,28(r4)
	PPC_STORE_U32(ctx.r4.u32 + 28, ctx.r31.u32);
	// b 0x82fa76b8
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8280103C"))) PPC_WEAK_FUNC(sub_8280103C);
PPC_FUNC_IMPL(__imp__sub_8280103C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82801040"))) PPC_WEAK_FUNC(sub_82801040);
PPC_FUNC_IMPL(__imp__sub_82801040) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7660
	ctx.lr = 0x82801048;
	__savegprlr_22(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r24,r6
	ctx.r24.u64 = ctx.r6.u64;
	// cmpw cr6,r5,r6
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r6.s32, ctx.xer);
	// bge cr6,0x828011dc
	if (!ctx.cr6.lt) goto loc_828011DC;
	// rlwinm r11,r5,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 5) & 0xFFFFFFE0;
	// rlwinm r26,r5,1,0,30
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// addi r31,r11,12
	ctx.r31.s64 = ctx.r11.s64 + 12;
loc_82801074:
	// cmpw cr6,r26,r24
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r24.s32, ctx.xer);
	// bgt cr6,0x82801090
	if (ctx.cr6.gt) goto loc_82801090;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82800bb0
	ctx.lr = 0x82801088;
	sub_82800BB0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// b 0x828010c4
	goto loc_828010C4;
loc_82801090:
	// li r9,0
	ctx.r9.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// ble cr6,0x828010c4
	if (!ctx.cr6.gt) goto loc_828010C4;
	// addi r11,r25,24
	ctx.r11.s64 = ctx.r25.s64 + 24;
	// mtctr r27
	ctx.ctr.u64 = ctx.r27.u64;
loc_828010A8:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// ble cr6,0x828010bc
	if (!ctx.cr6.gt) goto loc_828010BC;
	// addi r4,r11,-24
	ctx.r4.s64 = ctx.r11.s64 + -24;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
loc_828010BC:
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// bdnz 0x828010a8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_828010A8;
loc_828010C4:
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x828011dc
	if (ctx.cr6.eq) goto loc_828011DC;
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// addi r29,r31,-12
	ctx.r29.s64 = ctx.r31.s64 + -12;
	// li r30,1
	ctx.r30.s64 = 1;
	// stw r11,-8(r31)
	PPC_STORE_U32(ctx.r31.u32 + -8, ctx.r11.u32);
	// lwz r11,12(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// lwz r11,20(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// stw r11,-12(r31)
	PPC_STORE_U32(ctx.r31.u32 + -12, ctx.r11.u32);
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// stw r11,-4(r31)
	PPC_STORE_U32(ctx.r31.u32 + -4, ctx.r11.u32);
	// lwz r11,16(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// lwz r7,12(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// lwz r6,8(r4)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// lwz r5,20(r4)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	// lwz r3,16(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// lwz r9,4(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lwz r8,0(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// subf r11,r8,r9
	ctx.r11.s64 = ctx.r9.s64 - ctx.r8.s64;
	// subf r28,r6,r7
	ctx.r28.s64 = ctx.r7.s64 - ctx.r6.s64;
	// rlwinm r10,r11,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// mulli r11,r28,12
	ctx.r11.s64 = ctx.r28.s64 * 12;
	// subf r22,r3,r5
	ctx.r22.s64 = ctx.r5.s64 - ctx.r3.s64;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// rlwinm r28,r22,3,0,28
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 3) & 0xFFFFFFF8;
	// ble cr6,0x82801144
	if (!ctx.cr6.gt) goto loc_82801144;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// li r30,0
	ctx.r30.s64 = 0;
loc_82801144:
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x82801150
	if (!ctx.cr6.gt) goto loc_82801150;
	// li r30,2
	ctx.r30.s64 = 2;
loc_82801150:
	// cmplwi cr6,r30,1
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 1, ctx.xer);
	// blt cr6,0x8280119c
	if (ctx.cr6.lt) goto loc_8280119C;
	// beq cr6,0x82801180
	if (ctx.cr6.eq) goto loc_82801180;
	// cmplwi cr6,r30,3
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 3, ctx.xer);
	// bge cr6,0x828011b4
	if (!ctx.cr6.lt) goto loc_828011B4;
	// add r11,r3,r5
	ctx.r11.u64 = ctx.r3.u64 + ctx.r5.u64;
	// srawi r11,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 1;
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// stw r11,20(r4)
	PPC_STORE_U32(ctx.r4.u32 + 20, ctx.r11.u32);
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// b 0x828011b4
	goto loc_828011B4;
loc_82801180:
	// add r11,r6,r7
	ctx.r11.u64 = ctx.r6.u64 + ctx.r7.u64;
	// srawi r11,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 1;
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// stw r11,12(r4)
	PPC_STORE_U32(ctx.r4.u32 + 12, ctx.r11.u32);
	// stw r10,-4(r31)
	PPC_STORE_U32(ctx.r31.u32 + -4, ctx.r10.u32);
	// b 0x828011b4
	goto loc_828011B4;
loc_8280119C:
	// add r11,r8,r9
	ctx.r11.u64 = ctx.r8.u64 + ctx.r9.u64;
	// srawi r11,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 1;
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// stw r11,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r11.u32);
	// stw r10,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r10.u32);
loc_828011B4:
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82800c38
	ctx.lr = 0x828011BC;
	sub_82800C38(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82800c38
	ctx.lr = 0x828011C8;
	sub_82800C38(ctx, base);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r26,r26,2
	ctx.r26.s64 = ctx.r26.s64 + 2;
	// addi r31,r31,32
	ctx.r31.s64 = ctx.r31.s64 + 32;
	// cmpw cr6,r27,r24
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r24.s32, ctx.xer);
	// blt cr6,0x82801074
	if (ctx.cr6.lt) goto loc_82801074;
loc_828011DC:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82fa76b0
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828011E8"))) PPC_WEAK_FUNC(sub_828011E8);
PPC_FUNC_IMPL(__imp__sub_828011E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7654
	ctx.lr = 0x828011F0;
	__savegprlr_19(ctx, base);
	// lwz r8,424(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 424);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r9,4(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// li r28,0
	ctx.r28.s64 = 0;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r27,0
	ctx.r27.s64 = 0;
	// lwz r31,8(r4)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// li r26,0
	ctx.r26.s64 = 0;
	// lwz r21,12(r4)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// lwz r8,24(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 24);
	// lwz r30,16(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// lwz r20,20(r4)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	// bgt cr6,0x828012dc
	if (ctx.cr6.gt) goto loc_828012DC;
	// rlwinm r7,r10,3,0,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r6,r10,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r10,r10,r9
	ctx.r10.s64 = ctx.r9.s64 - ctx.r10.s64;
	// addi r22,r7,4
	ctx.r22.s64 = ctx.r7.s64 + 4;
	// add r24,r6,r8
	ctx.r24.u64 = ctx.r6.u64 + ctx.r8.u64;
	// addi r19,r10,1
	ctx.r19.s64 = ctx.r10.s64 + 1;
loc_82801240:
	// cmpw cr6,r31,r21
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r21.s32, ctx.xer);
	// bgt cr6,0x828012cc
	if (ctx.cr6.gt) goto loc_828012CC;
	// rlwinm r10,r31,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 5) & 0xFFFFFFE0;
	// lwz r8,0(r24)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// rlwinm r9,r31,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + ctx.r30.u64;
	// subf r7,r31,r21
	ctx.r7.s64 = ctx.r21.s64 - ctx.r31.s64;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r4,r9,2
	ctx.r4.s64 = ctx.r9.s64 + 2;
	// add r29,r10,r8
	ctx.r29.u64 = ctx.r10.u64 + ctx.r8.u64;
	// addi r23,r7,1
	ctx.r23.s64 = ctx.r7.s64 + 1;
loc_8280126C:
	// cmpw cr6,r30,r20
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r20.s32, ctx.xer);
	// bgt cr6,0x828012bc
	if (ctx.cr6.gt) goto loc_828012BC;
	// subf r10,r30,r20
	ctx.r10.s64 = ctx.r20.s64 - ctx.r30.s64;
	// rlwinm r9,r30,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r6,r9,4
	ctx.r6.s64 = ctx.r9.s64 + 4;
	// addi r25,r29,-2
	ctx.r25.s64 = ctx.r29.s64 + -2;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8280128C:
	// lhzu r10,2(r25)
	ea = 2 + ctx.r25.u32;
	ctx.r10.u64 = PPC_LOAD_U16(ea);
	ctx.r25.u32 = ea;
	// cmpwi r10,0
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x828012b4
	if (ctx.cr0.eq) goto loc_828012B4;
	// mullw r7,r22,r10
	ctx.r7.s64 = int64_t(ctx.r22.s32) * int64_t(ctx.r10.s32);
	// mullw r8,r4,r10
	ctx.r8.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r10.s32);
	// mullw r9,r6,r10
	ctx.r9.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r10.s32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r28,r7,r28
	ctx.r28.u64 = ctx.r7.u64 + ctx.r28.u64;
	// add r27,r8,r27
	ctx.r27.u64 = ctx.r8.u64 + ctx.r27.u64;
	// add r26,r9,r26
	ctx.r26.u64 = ctx.r9.u64 + ctx.r26.u64;
loc_828012B4:
	// addi r6,r6,8
	ctx.r6.s64 = ctx.r6.s64 + 8;
	// bdnz 0x8280128c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8280128C;
loc_828012BC:
	// addic. r23,r23,-1
	ctx.xer.ca = ctx.r23.u32 > 0;
	ctx.r23.s64 = ctx.r23.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// addi r29,r29,64
	ctx.r29.s64 = ctx.r29.s64 + 64;
	// addi r4,r4,4
	ctx.r4.s64 = ctx.r4.s64 + 4;
	// bne 0x8280126c
	if (!ctx.cr0.eq) goto loc_8280126C;
loc_828012CC:
	// addic. r19,r19,-1
	ctx.xer.ca = ctx.r19.u32 > 0;
	ctx.r19.s64 = ctx.r19.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r19.s32, 0, ctx.xer);
	// addi r24,r24,4
	ctx.r24.s64 = ctx.r24.s64 + 4;
	// addi r22,r22,8
	ctx.r22.s64 = ctx.r22.s64 + 8;
	// bne 0x82801240
	if (!ctx.cr0.eq) goto loc_82801240;
loc_828012DC:
	// lwz r9,116(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// srawi r10,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 1;
	// twllei r11,0
	if (ctx.r11.u32 <= 0) __builtin_debugtrap();
	// add r8,r10,r28
	ctx.r8.u64 = ctx.r10.u64 + ctx.r28.u64;
	// add r7,r10,r27
	ctx.r7.u64 = ctx.r10.u64 + ctx.r27.u64;
	// add r6,r10,r26
	ctx.r6.u64 = ctx.r10.u64 + ctx.r26.u64;
	// lwz r4,0(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// divw r31,r8,r11
	ctx.r31.s32 = ctx.r8.s32 / ctx.r11.s32;
	// rotlwi r9,r7,1
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r7.u32, 1);
	// rotlwi r8,r8,1
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r8.u32, 1);
	// rotlwi r10,r6,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r6.u32, 1);
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// stbx r31,r4,r5
	PPC_STORE_U8(ctx.r4.u32 + ctx.r5.u32, ctx.r31.u8);
	// divw r30,r7,r11
	ctx.r30.s32 = ctx.r7.s32 / ctx.r11.s32;
	// lwz r7,116(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// lwz r7,4(r7)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// divw r6,r6,r11
	ctx.r6.s32 = ctx.r6.s32 / ctx.r11.s32;
	// stbx r30,r7,r5
	PPC_STORE_U8(ctx.r7.u32 + ctx.r5.u32, ctx.r30.u8);
	// andc r8,r11,r8
	ctx.r8.u64 = ctx.r11.u64 & ~ctx.r8.u64;
	// lwz r7,116(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// andc r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 & ~ctx.r9.u64;
	// lwz r7,8(r7)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// twllei r11,0
	if (ctx.r11.u32 <= 0) __builtin_debugtrap();
	// stbx r6,r7,r5
	PPC_STORE_U8(ctx.r7.u32 + ctx.r5.u32, ctx.r6.u8);
	// twllei r11,0
	if (ctx.r11.u32 <= 0) __builtin_debugtrap();
	// andc r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ~ctx.r10.u64;
	// twlgei r8,-1
	if (ctx.r8.u32 >= 4294967295) __builtin_debugtrap();
	// twlgei r9,-1
	if (ctx.r9.u32 >= 4294967295) __builtin_debugtrap();
	// twlgei r11,-1
	if (ctx.r11.u32 >= 4294967295) __builtin_debugtrap();
	// b 0x82fa76a4
	__restgprlr_19(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8280135C"))) PPC_WEAK_FUNC(sub_8280135C);
PPC_FUNC_IMPL(__imp__sub_8280135C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82801360"))) PPC_WEAK_FUNC(sub_82801360);
PPC_FUNC_IMPL(__imp__sub_82801360) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x82801368;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// rlwinm r5,r4,5,0,26
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 5) & 0xFFFFFFE0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8280138C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// li r11,31
	ctx.r11.s64 = 31;
	// li r10,63
	ctx.r10.s64 = 63;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r28,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r28.u32);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r28,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r28.u32);
	// stw r28,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r28.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r10,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r10.u32);
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// bl 0x82800c38
	ctx.lr = 0x828013C0;
	sub_82800C38(ctx, base);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82801040
	ctx.lr = 0x828013D0;
	sub_82801040(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// ble 0x828013f8
	if (!ctx.cr0.gt) goto loc_828013F8;
loc_828013DC:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x828011e8
	ctx.lr = 0x828013E8;
	sub_828011E8(ctx, base);
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// addi r31,r31,32
	ctx.r31.s64 = ctx.r31.s64 + 32;
	// cmpw cr6,r5,r29
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r29.s32, ctx.xer);
	// blt cr6,0x828013dc
	if (ctx.cr6.lt) goto loc_828013DC;
loc_828013F8:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r10,96
	ctx.r10.s64 = 96;
	// stw r29,112(r30)
	PPC_STORE_U32(ctx.r30.u32 + 112, ctx.r29.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r10,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r29,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r29.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82801428;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82801430"))) PPC_WEAK_FUNC(sub_82801430);
PPC_FUNC_IMPL(__imp__sub_82801430) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7658
	ctx.lr = 0x82801438;
	__savegprlr_20(ctx, base);
	// stwu r1,-1152(r1)
	ea = -1152 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r29,r4,24
	ctx.r29.s64 = ctx.r4.s64 + 24;
	// lwz r28,112(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 112);
	// addi r31,r5,28
	ctx.r31.s64 = ctx.r5.s64 + 28;
	// addi r30,r6,24
	ctx.r30.s64 = ctx.r6.s64 + 24;
	// add r11,r29,r4
	ctx.r11.u64 = ctx.r29.u64 + ctx.r4.u64;
	// add r10,r31,r5
	ctx.r10.u64 = ctx.r31.u64 + ctx.r5.u64;
	// add r9,r30,r6
	ctx.r9.u64 = ctx.r30.u64 + ctx.r6.u64;
	// lis r22,32767
	ctx.r22.s64 = 2147418112;
	// srawi r25,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r25.s64 = ctx.r11.s32 >> 1;
	// srawi r24,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r24.s64 = ctx.r10.s32 >> 1;
	// srawi r23,r9,1
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r23.s64 = ctx.r9.s32 >> 1;
	// ori r22,r22,65535
	ctx.r22.u64 = ctx.r22.u64 | 65535;
	// li r27,0
	ctx.r27.s64 = 0;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// ble cr6,0x828015bc
	if (!ctx.cr6.gt) goto loc_828015BC;
	// lwz r3,116(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// addi r26,r1,16
	ctx.r26.s64 = ctx.r1.s64 + 16;
	// mtctr r28
	ctx.ctr.u64 = ctx.r28.u64;
	// lwz r21,8(r3)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
loc_82801488:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lbzx r11,r11,r27
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r27.u32);
	// cmpw cr6,r11,r4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r4.s32, ctx.xer);
	// bge cr6,0x828014ac
	if (!ctx.cr6.lt) goto loc_828014AC;
	// subf r10,r4,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r4.s64;
	// subf r11,r29,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r29.s64;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// mullw r9,r10,r10
	ctx.r9.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r10.s32);
	// b 0x828014c4
	goto loc_828014C4;
loc_828014AC:
	// cmpw cr6,r11,r29
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r29.s32, ctx.xer);
	// ble cr6,0x828014e8
	if (!ctx.cr6.gt) goto loc_828014E8;
	// subf r10,r29,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r29.s64;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// mullw r9,r10,r10
	ctx.r9.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r10.s32);
loc_828014C0:
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
loc_828014C4:
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// mullw r10,r11,r11
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r11.s32);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lbzx r11,r11,r27
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r27.u32);
	// cmpw cr6,r11,r5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r5.s32, ctx.xer);
	// bge cr6,0x828014fc
	if (!ctx.cr6.lt) goto loc_828014FC;
	// subf r8,r5,r11
	ctx.r8.s64 = ctx.r11.s64 - ctx.r5.s64;
	// subf r11,r31,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r31.s64;
	// b 0x8280150c
	goto loc_8280150C;
loc_828014E8:
	// li r9,0
	ctx.r9.s64 = 0;
	// cmpw cr6,r11,r25
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r25.s32, ctx.xer);
	// bgt cr6,0x828014c0
	if (ctx.cr6.gt) goto loc_828014C0;
	// subf r11,r29,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r29.s64;
	// b 0x828014c4
	goto loc_828014C4;
loc_828014FC:
	// cmpw cr6,r11,r31
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r31.s32, ctx.xer);
	// ble cr6,0x82801528
	if (!ctx.cr6.gt) goto loc_82801528;
	// subf r8,r31,r11
	ctx.r8.s64 = ctx.r11.s64 - ctx.r31.s64;
	// subf r11,r5,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r5.s64;
loc_8280150C:
	// mulli r8,r8,3
	ctx.r8.s64 = ctx.r8.s64 * 3;
	// mulli r20,r11,3
	ctx.r20.s64 = ctx.r11.s64 * 3;
	// mullw r11,r8,r8
	ctx.r11.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r8.s32);
	// mullw r8,r20,r20
	ctx.r8.s64 = int64_t(ctx.r20.s32) * int64_t(ctx.r20.s32);
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// b 0x82801548
	goto loc_82801548;
loc_82801528:
	// cmpw cr6,r11,r24
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r24.s32, ctx.xer);
	// bgt cr6,0x82801538
	if (ctx.cr6.gt) goto loc_82801538;
	// subf r11,r31,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r31.s64;
	// b 0x8280153c
	goto loc_8280153C;
loc_82801538:
	// subf r11,r5,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r5.s64;
loc_8280153C:
	// mulli r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 * 3;
	// mullw r11,r11,r11
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r11.s32);
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_82801548:
	// lbzx r11,r21,r27
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r21.u32 + ctx.r27.u32);
	// cmpw cr6,r11,r6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r6.s32, ctx.xer);
	// bge cr6,0x82801560
	if (!ctx.cr6.lt) goto loc_82801560;
	// subf r8,r6,r11
	ctx.r8.s64 = ctx.r11.s64 - ctx.r6.s64;
	// subf r20,r30,r11
	ctx.r20.s64 = ctx.r11.s64 - ctx.r30.s64;
	// b 0x82801570
	goto loc_82801570;
loc_82801560:
	// cmpw cr6,r11,r30
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r30.s32, ctx.xer);
	// ble cr6,0x82801584
	if (!ctx.cr6.gt) goto loc_82801584;
	// subf r8,r30,r11
	ctx.r8.s64 = ctx.r11.s64 - ctx.r30.s64;
	// subf r20,r6,r11
	ctx.r20.s64 = ctx.r11.s64 - ctx.r6.s64;
loc_82801570:
	// mullw r11,r8,r8
	ctx.r11.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r8.s32);
	// mullw r8,r20,r20
	ctx.r8.s64 = int64_t(ctx.r20.s32) * int64_t(ctx.r20.s32);
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r11,r8,r10
	ctx.r11.u64 = ctx.r8.u64 + ctx.r10.u64;
	// b 0x828015a0
	goto loc_828015A0;
loc_82801584:
	// cmpw cr6,r11,r23
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r23.s32, ctx.xer);
	// bgt cr6,0x82801594
	if (ctx.cr6.gt) goto loc_82801594;
	// subf r11,r30,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r30.s64;
	// b 0x82801598
	goto loc_82801598;
loc_82801594:
	// subf r11,r6,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r6.s64;
loc_82801598:
	// mullw r11,r11,r11
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r11.s32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_828015A0:
	// stw r9,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r9.u32);
	// cmpw cr6,r11,r22
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r22.s32, ctx.xer);
	// bge cr6,0x828015b0
	if (!ctx.cr6.lt) goto loc_828015B0;
	// mr r22,r11
	ctx.r22.u64 = ctx.r11.u64;
loc_828015B0:
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r26,r26,4
	ctx.r26.s64 = ctx.r26.s64 + 4;
	// bdnz 0x82801488
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82801488;
loc_828015BC:
	// li r3,0
	ctx.r3.s64 = 0;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// ble cr6,0x828015f4
	if (!ctx.cr6.gt) goto loc_828015F4;
	// addi r10,r1,16
	ctx.r10.s64 = ctx.r1.s64 + 16;
	// mtctr r28
	ctx.ctr.u64 = ctx.r28.u64;
loc_828015D4:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpw cr6,r9,r22
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r22.s32, ctx.xer);
	// bgt cr6,0x828015e8
	if (ctx.cr6.gt) goto loc_828015E8;
	// stbx r11,r3,r7
	PPC_STORE_U8(ctx.r3.u32 + ctx.r7.u32, ctx.r11.u8);
	// addi r3,r3,1
	ctx.r3.s64 = ctx.r3.s64 + 1;
loc_828015E8:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x828015d4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_828015D4;
loc_828015F4:
	// addi r1,r1,1152
	ctx.r1.s64 = ctx.r1.s64 + 1152;
	// b 0x82fa76a8
	__restgprlr_20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828015FC"))) PPC_WEAK_FUNC(sub_828015FC);
PPC_FUNC_IMPL(__imp__sub_828015FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82801600"))) PPC_WEAK_FUNC(sub_82801600);
PPC_FUNC_IMPL(__imp__sub_82801600) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7654
	ctx.lr = 0x82801608;
	__savegprlr_19(ctx, base);
	// stwu r1,-640(r1)
	ea = -640 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,128
	ctx.r11.s64 = 128;
	// addi r10,r1,12
	ctx.r10.s64 = ctx.r1.s64 + 12;
	// lis r31,32767
	ctx.r31.s64 = 2147418112;
	// ori r31,r31,65535
	ctx.r31.u64 = ctx.r31.u64 | 65535;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_82801620:
	// stwu r31,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r31.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x82801620
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82801620;
	// li r21,0
	ctx.r21.s64 = 0;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// ble cr6,0x82801710
	if (!ctx.cr6.gt) goto loc_82801710;
loc_82801634:
	// lwz r11,116(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// addi r27,r1,16
	ctx.r27.s64 = ctx.r1.s64 + 16;
	// lbzx r30,r21,r8
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r21.u32 + ctx.r8.u32);
	// mr r26,r9
	ctx.r26.u64 = ctx.r9.u64;
	// li r25,3
	ctx.r25.s64 = 3;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r31,8(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lbzx r10,r10,r30
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r30.u32);
	// lbzx r31,r31,r30
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r31.u32 + ctx.r30.u32);
	// subf r29,r10,r5
	ctx.r29.s64 = ctx.r5.s64 - ctx.r10.s64;
	// lbzx r28,r30,r11
	ctx.r28.u64 = PPC_LOAD_U8(ctx.r30.u32 + ctx.r11.u32);
	// subf r10,r31,r6
	ctx.r10.s64 = ctx.r6.s64 - ctx.r31.s64;
	// mulli r11,r29,3
	ctx.r11.s64 = ctx.r29.s64 * 3;
	// subf r31,r28,r4
	ctx.r31.s64 = ctx.r4.s64 - ctx.r28.s64;
	// mullw r28,r10,r10
	ctx.r28.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r10.s32);
	// mullw r29,r11,r11
	ctx.r29.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r11.s32);
	// rlwinm r31,r31,1,0,30
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// add r29,r28,r29
	ctx.r29.u64 = ctx.r28.u64 + ctx.r29.u64;
	// mullw r28,r31,r31
	ctx.r28.s64 = int64_t(ctx.r31.s32) * int64_t(ctx.r31.s32);
	// addi r24,r10,4
	ctx.r24.s64 = ctx.r10.s64 + 4;
	// addi r11,r11,6
	ctx.r11.s64 = ctx.r11.s64 + 6;
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// add r10,r29,r28
	ctx.r10.u64 = ctx.r29.u64 + ctx.r28.u64;
	// mulli r23,r11,24
	ctx.r23.s64 = ctx.r11.s64 * 24;
	// rlwinm r22,r24,4,0,27
	ctx.r22.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r28,r31,5,0,26
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 5) & 0xFFFFFFE0;
loc_828016A0:
	// mr r24,r10
	ctx.r24.u64 = ctx.r10.u64;
	// mr r19,r23
	ctx.r19.u64 = ctx.r23.u64;
	// li r20,7
	ctx.r20.s64 = 7;
loc_828016AC:
	// li r29,4
	ctx.r29.s64 = 4;
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
	// mr r31,r22
	ctx.r31.u64 = ctx.r22.u64;
	// mtctr r29
	ctx.ctr.u64 = ctx.r29.u64;
loc_828016BC:
	// lwz r29,0(r27)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// cmpw cr6,r11,r29
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r29.s32, ctx.xer);
	// bge cr6,0x828016d0
	if (!ctx.cr6.lt) goto loc_828016D0;
	// stw r11,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
	// stb r30,0(r26)
	PPC_STORE_U8(ctx.r26.u32 + 0, ctx.r30.u8);
loc_828016D0:
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// addi r31,r31,128
	ctx.r31.s64 = ctx.r31.s64 + 128;
	// addi r27,r27,4
	ctx.r27.s64 = ctx.r27.s64 + 4;
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// bdnz 0x828016bc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_828016BC;
	// add r24,r19,r24
	ctx.r24.u64 = ctx.r19.u64 + ctx.r24.u64;
	// addic. r20,r20,-1
	ctx.xer.ca = ctx.r20.u32 > 0;
	ctx.r20.s64 = ctx.r20.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r20.s32, 0, ctx.xer);
	// addi r19,r19,288
	ctx.r19.s64 = ctx.r19.s64 + 288;
	// bge 0x828016ac
	if (!ctx.cr0.lt) goto loc_828016AC;
	// add r10,r28,r10
	ctx.r10.u64 = ctx.r28.u64 + ctx.r10.u64;
	// addic. r25,r25,-1
	ctx.xer.ca = ctx.r25.u32 > 0;
	ctx.r25.s64 = ctx.r25.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// addi r28,r28,512
	ctx.r28.s64 = ctx.r28.s64 + 512;
	// bge 0x828016a0
	if (!ctx.cr0.lt) goto loc_828016A0;
	// addi r21,r21,1
	ctx.r21.s64 = ctx.r21.s64 + 1;
	// cmpw cr6,r21,r7
	ctx.cr6.compare<int32_t>(ctx.r21.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x82801634
	if (ctx.cr6.lt) goto loc_82801634;
loc_82801710:
	// addi r1,r1,640
	ctx.r1.s64 = ctx.r1.s64 + 640;
	// b 0x82fa76a4
	__restgprlr_19(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82801718"))) PPC_WEAK_FUNC(sub_82801718);
PPC_FUNC_IMPL(__imp__sub_82801718) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7674
	ctx.lr = 0x82801720;
	__savegprlr_27(ctx, base);
	// stwu r1,-512(r1)
	ea = -512 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// srawi r31,r4,2
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x3) != 0);
	ctx.r31.s64 = ctx.r4.s32 >> 2;
	// lwz r8,424(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 424);
	// srawi r30,r5,3
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x7) != 0);
	ctx.r30.s64 = ctx.r5.s32 >> 3;
	// srawi r29,r6,2
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x3) != 0);
	ctx.r29.s64 = ctx.r6.s32 >> 2;
	// rlwinm r11,r31,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 5) & 0xFFFFFFE0;
	// rlwinm r10,r30,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 5) & 0xFFFFFFE0;
	// rlwinm r9,r29,5,0,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 5) & 0xFFFFFFE0;
	// lwz r28,24(r8)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r8.u32 + 24);
	// addi r4,r11,4
	ctx.r4.s64 = ctx.r11.s64 + 4;
	// addi r5,r10,2
	ctx.r5.s64 = ctx.r10.s64 + 2;
	// addi r6,r9,4
	ctx.r6.s64 = ctx.r9.s64 + 4;
	// addi r7,r1,208
	ctx.r7.s64 = ctx.r1.s64 + 208;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// bl 0x82801430
	ctx.lr = 0x8280175C;
	sub_82801430(ctx, base);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// addi r8,r1,208
	ctx.r8.s64 = ctx.r1.s64 + 208;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82801600
	ctx.lr = 0x82801770;
	sub_82801600(ctx, base);
	// rlwinm r11,r29,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r30,8,0,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 8) & 0xFFFFFF00;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r11,r31,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r8,r9,-1
	ctx.r8.s64 = ctx.r9.s64 + -1;
	// rlwinm r5,r10,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// li r6,4
	ctx.r6.s64 = 4;
loc_82801794:
	// mr r7,r5
	ctx.r7.u64 = ctx.r5.u64;
	// li r4,8
	ctx.r4.s64 = 8;
loc_8280179C:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// li r9,4
	ctx.r9.s64 = 4;
	// add r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 + ctx.r7.u64;
	// addi r10,r10,-2
	ctx.r10.s64 = ctx.r10.s64 + -2;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_828017B0:
	// lbzu r9,1(r8)
	ea = 1 + ctx.r8.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r8.u32 = ea;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// sthu r9,2(r10)
	ea = 2 + ctx.r10.u32;
	PPC_STORE_U16(ea, ctx.r9.u16);
	ctx.r10.u32 = ea;
	// bdnz 0x828017b0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_828017B0;
	// addic. r4,r4,-1
	ctx.xer.ca = ctx.r4.u32 > 0;
	ctx.r4.s64 = ctx.r4.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// addi r7,r7,64
	ctx.r7.s64 = ctx.r7.s64 + 64;
	// bne 0x8280179c
	if (!ctx.cr0.eq) goto loc_8280179C;
	// addic. r6,r6,-1
	ctx.xer.ca = ctx.r6.u32 > 0;
	ctx.r6.s64 = ctx.r6.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bne 0x82801794
	if (!ctx.cr0.eq) goto loc_82801794;
	// addi r1,r1,512
	ctx.r1.s64 = ctx.r1.s64 + 512;
	// b 0x82fa76c4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828017E0"))) PPC_WEAK_FUNC(sub_828017E0);
PPC_FUNC_IMPL(__imp__sub_828017E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa765c
	ctx.lr = 0x828017E8;
	__savegprlr_21(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,424(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 424);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// lwz r22,92(r3)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r3.u32 + 92);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// lwz r24,24(r11)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// ble cr6,0x8280188c
	if (!ctx.cr6.gt) goto loc_8280188C;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// subf r23,r5,r4
	ctx.r23.s64 = ctx.r4.s64 - ctx.r5.s64;
	// mr r21,r6
	ctx.r21.u64 = ctx.r6.u64;
loc_82801810:
	// lwzx r31,r23,r27
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r23.u32 + ctx.r27.u32);
	// mr r28,r22
	ctx.r28.u64 = ctx.r22.u64;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 0, ctx.xer);
	// beq cr6,0x82801880
	if (ctx.cr6.eq) goto loc_82801880;
	// addi r26,r11,-1
	ctx.r26.s64 = ctx.r11.s64 + -1;
loc_82801828:
	// lbz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// lbzu r11,1(r31)
	ea = 1 + ctx.r31.u32;
	ctx.r11.u64 = PPC_LOAD_U8(ea);
	ctx.r31.u32 = ea;
	// rlwinm r8,r10,31,1,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFC;
	// rlwinm r4,r10,29,3,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x1FFFFFFF;
	// rlwinm r9,r11,3,21,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0x7E0;
	// rlwinm r5,r11,30,2,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFF;
	// lbzu r10,1(r31)
	ea = 1 + ctx.r31.u32;
	ctx.r10.u64 = PPC_LOAD_U8(ea);
	ctx.r31.u32 = ea;
	// lwzx r29,r8,r24
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r24.u32);
	// rlwinm r6,r10,29,3,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x1FFFFFFF;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// add r11,r9,r6
	ctx.r11.u64 = ctx.r9.u64 + ctx.r6.u64;
	// rlwinm r30,r11,1,0,30
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lhzx r11,r30,r29
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + ctx.r29.u32);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x8280186c
	if (!ctx.cr0.eq) goto loc_8280186C;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82801718
	ctx.lr = 0x8280186C;
	sub_82801718(ctx, base);
loc_8280186C:
	// lhzx r11,r30,r29
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + ctx.r29.u32);
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// addi r11,r11,255
	ctx.r11.s64 = ctx.r11.s64 + 255;
	// stbu r11,1(r26)
	ea = 1 + ctx.r26.u32;
	PPC_STORE_U8(ea, ctx.r11.u8);
	ctx.r26.u32 = ea;
	// bne 0x82801828
	if (!ctx.cr0.eq) goto loc_82801828;
loc_82801880:
	// addic. r21,r21,-1
	ctx.xer.ca = ctx.r21.u32 > 0;
	ctx.r21.s64 = ctx.r21.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r21.s32, 0, ctx.xer);
	// addi r27,r27,4
	ctx.r27.s64 = ctx.r27.s64 + 4;
	// bne 0x82801810
	if (!ctx.cr0.eq) goto loc_82801810;
loc_8280188C:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82fa76ac
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82801894"))) PPC_WEAK_FUNC(sub_82801894);
PPC_FUNC_IMPL(__imp__sub_82801894) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82801898"))) PPC_WEAK_FUNC(sub_82801898);
PPC_FUNC_IMPL(__imp__sub_82801898) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7640
	ctx.lr = 0x828018A0;
	__savegprlr_14(ctx, base);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,116(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// lwz r7,424(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 424);
	// lwz r23,92(r3)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r3.u32 + 92);
	// lwz r26,288(r3)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r3.u32 + 288);
	// stw r3,308(r1)
	PPC_STORE_U32(ctx.r1.u32 + 308, ctx.r3.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r8,4(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,24(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 24);
	// lwz r28,40(r7)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r7.u32 + 40);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r7,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r7.u32);
	// stw r23,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r23.u32);
	// stw r26,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r26.u32);
	// stw r10,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
	// stw r9,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r9.u32);
	// stw r28,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r28.u32);
	// stw r8,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r8.u32);
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// ble cr6,0x82801b5c
	if (!ctx.cr6.gt) goto loc_82801B5C;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// stw r6,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r6.u32);
	// subf r5,r5,r4
	ctx.r5.s64 = ctx.r4.s64 - ctx.r5.s64;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// stw r5,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r5.u32);
	// b 0x82801910
	goto loc_82801910;
loc_8280190C:
	// lwz r29,84(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
loc_82801910:
	// lbz r11,36(r7)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r7.u32 + 36);
	// lwzx r30,r5,r29
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r29.u32);
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82801960
	if (ctx.cr0.eq) goto loc_82801960;
	// mulli r11,r23,3
	ctx.r11.s64 = ctx.r23.s64 * 3;
	// lwz r9,32(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 32);
	// addi r8,r23,1
	ctx.r8.s64 = ctx.r23.s64 + 1;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// add r10,r10,r23
	ctx.r10.u64 = ctx.r10.u64 + ctx.r23.u64;
	// mulli r8,r8,6
	ctx.r8.s64 = ctx.r8.s64 * 6;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r3,-1
	ctx.r3.s64 = -1;
	// addi r30,r11,-3
	ctx.r30.s64 = ctx.r11.s64 + -3;
	// stb r6,36(r7)
	PPC_STORE_U8(ctx.r7.u32 + 36, ctx.r6.u8);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// li r14,-3
	ctx.r14.s64 = -3;
	// add r31,r8,r9
	ctx.r31.u64 = ctx.r8.u64 + ctx.r9.u64;
	// b 0x82801978
	goto loc_82801978;
loc_82801960:
	// li r11,1
	ctx.r11.s64 = 1;
	// lwz r31,32(r7)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r7.u32 + 32);
	// li r14,3
	ctx.r14.s64 = 3;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// stb r11,36(r7)
	PPC_STORE_U8(ctx.r7.u32 + 36, ctx.r11.u8);
loc_82801978:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r16,0
	ctx.r16.s64 = 0;
	// li r17,0
	ctx.r17.s64 = 0;
	// li r18,0
	ctx.r18.s64 = 0;
	// li r20,0
	ctx.r20.s64 = 0;
	// li r21,0
	ctx.r21.s64 = 0;
	// li r22,0
	ctx.r22.s64 = 0;
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// beq cr6,0x82801b38
	if (ctx.cr6.eq) goto loc_82801B38;
	// addi r7,r14,2
	ctx.r7.s64 = ctx.r14.s64 + 2;
	// rlwinm r15,r14,1,0,30
	ctx.r15.u64 = __builtin_rotateleft64(ctx.r14.u32 | (ctx.r14.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r7,r7,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r19,r3,r10
	ctx.r19.s64 = ctx.r10.s64 - ctx.r3.s64;
	// stw r7,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r7.u32);
	// b 0x828019c0
	goto loc_828019C0;
loc_828019BC:
	// lwz r7,100(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
loc_828019C0:
	// add r4,r15,r31
	ctx.r4.u64 = ctx.r15.u64 + ctx.r31.u64;
	// lhax r5,r7,r31
	ctx.r5.s64 = int16_t(PPC_LOAD_U16(ctx.r7.u32 + ctx.r31.u32));
	// lhax r27,r15,r31
	ctx.r27.s64 = int16_t(PPC_LOAD_U16(ctx.r15.u32 + ctx.r31.u32));
	// add r11,r5,r11
	ctx.r11.u64 = ctx.r5.u64 + ctx.r11.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// lha r4,2(r4)
	ctx.r4.s64 = int16_t(PPC_LOAD_U16(ctx.r4.u32 + 2));
	// addi r27,r11,8
	ctx.r27.s64 = ctx.r11.s64 + 8;
	// lbz r6,1(r30)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r30.u32 + 1);
	// add r8,r5,r8
	ctx.r8.u64 = ctx.r5.u64 + ctx.r8.u64;
	// lbz r7,2(r30)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r30.u32 + 2);
	// add r11,r4,r9
	ctx.r11.u64 = ctx.r4.u64 + ctx.r9.u64;
	// lbz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// addi r9,r8,8
	ctx.r9.s64 = ctx.r8.s64 + 8;
	// lwz r24,104(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// srawi r9,r9,4
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xF) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 4;
	// srawi r11,r11,4
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 4;
	// srawi r8,r27,4
	ctx.xer.ca = (ctx.r27.s32 < 0) & ((ctx.r27.u32 & 0xF) != 0);
	ctx.r8.s64 = ctx.r27.s32 >> 4;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r5,r8,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r4,r9,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r29,r15,r31
	ctx.r29.u64 = ctx.r15.u64 + ctx.r31.u64;
	// lwzx r8,r11,r28
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r28.u32);
	// lwzx r9,r5,r28
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r28.u32);
	// lwzx r11,r4,r28
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r28.u32);
	// add r8,r8,r6
	ctx.r8.u64 = ctx.r8.u64 + ctx.r6.u64;
	// add r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 + ctx.r7.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lbzx r28,r8,r26
	ctx.r28.u64 = PPC_LOAD_U8(ctx.r8.u32 + ctx.r26.u32);
	// lbzx r27,r9,r26
	ctx.r27.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r26.u32);
	// lbzx r26,r11,r26
	ctx.r26.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r26.u32);
	// srawi r5,r28,2
	ctx.xer.ca = (ctx.r28.s32 < 0) & ((ctx.r28.u32 & 0x3) != 0);
	ctx.r5.s64 = ctx.r28.s32 >> 2;
	// srawi r6,r27,3
	ctx.xer.ca = (ctx.r27.s32 < 0) & ((ctx.r27.u32 & 0x7) != 0);
	ctx.r6.s64 = ctx.r27.s32 >> 3;
	// srawi r4,r26,3
	ctx.xer.ca = (ctx.r26.s32 < 0) & ((ctx.r26.u32 & 0x7) != 0);
	ctx.r4.s64 = ctx.r26.s32 >> 3;
	// rlwinm r11,r5,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 5) & 0xFFFFFFE0;
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 + ctx.r6.u64;
	// rlwinm r25,r11,1,0,30
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwzx r24,r10,r24
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r24.u32);
	// lhzx r11,r25,r24
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r25.u32 + ctx.r24.u32);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82801a74
	if (!ctx.cr0.eq) goto loc_82801A74;
	// lwz r3,308(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 308);
	// bl 0x82801718
	ctx.lr = 0x82801A70;
	sub_82801718(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_82801A74:
	// lhzx r11,r25,r24
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r25.u32 + ctx.r24.u32);
	// addic. r23,r23,-1
	ctx.xer.ca = ctx.r23.u32 > 0;
	ctx.r23.s64 = ctx.r23.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// lwz r10,108(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// add r30,r14,r30
	ctx.r30.u64 = ctx.r14.u64 + ctx.r30.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// lwz r9,112(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r8,116(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// stbux r11,r19,r3
	ea = ctx.r19.u32 + ctx.r3.u32;
	PPC_STORE_U8(ea, ctx.r11.u8);
	ctx.r19.u32 = ea;
	// lbzx r7,r11,r10
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r10.u32);
	// lbzx r4,r11,r9
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r9.u32);
	// lbzx r11,r11,r8
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r8.u32);
	// subf r11,r11,r26
	ctx.r11.s64 = ctx.r26.s64 - ctx.r11.s64;
	// rlwinm r8,r11,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r26,92(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// add r10,r8,r11
	ctx.r10.u64 = ctx.r8.u64 + ctx.r11.u64;
	// subf r11,r7,r28
	ctx.r11.s64 = ctx.r28.s64 - ctx.r7.s64;
	// add r7,r8,r10
	ctx.r7.u64 = ctx.r8.u64 + ctx.r10.u64;
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r28,r22,r10
	ctx.r28.u64 = ctx.r22.u64 + ctx.r10.u64;
	// add r10,r9,r11
	ctx.r10.u64 = ctx.r9.u64 + ctx.r11.u64;
	// add r22,r18,r7
	ctx.r22.u64 = ctx.r18.u64 + ctx.r7.u64;
	// sth r28,0(r31)
	PPC_STORE_U16(ctx.r31.u32 + 0, ctx.r28.u16);
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// lwz r28,88(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// mr r18,r6
	ctx.r18.u64 = ctx.r6.u64;
	// subf r11,r4,r27
	ctx.r11.s64 = ctx.r27.s64 - ctx.r4.s64;
	// add r6,r9,r10
	ctx.r6.u64 = ctx.r9.u64 + ctx.r10.u64;
	// add r4,r21,r10
	ctx.r4.u64 = ctx.r21.u64 + ctx.r10.u64;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r21,r17,r6
	ctx.r21.u64 = ctx.r17.u64 + ctx.r6.u64;
	// sth r4,2(r31)
	PPC_STORE_U16(ctx.r31.u32 + 2, ctx.r4.u16);
	// mr r17,r5
	ctx.r17.u64 = ctx.r5.u64;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// add r27,r20,r11
	ctx.r27.u64 = ctx.r20.u64 + ctx.r11.u64;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// sth r27,4(r31)
	PPC_STORE_U16(ctx.r31.u32 + 4, ctx.r27.u16);
	// add r9,r9,r6
	ctx.r9.u64 = ctx.r9.u64 + ctx.r6.u64;
	// add r20,r16,r11
	ctx.r20.u64 = ctx.r16.u64 + ctx.r11.u64;
	// mr r16,r5
	ctx.r16.u64 = ctx.r5.u64;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
	// bne 0x828019bc
	if (!ctx.cr0.eq) goto loc_828019BC;
	// lwz r5,120(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// lwz r29,84(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r23,124(r1)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// lwz r7,128(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
loc_82801B38:
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r9,r29,4
	ctx.r9.s64 = ctx.r29.s64 + 4;
	// sth r22,0(r31)
	PPC_STORE_U16(ctx.r31.u32 + 0, ctx.r22.u16);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// sth r21,2(r31)
	PPC_STORE_U16(ctx.r31.u32 + 2, ctx.r21.u16);
	// sth r20,4(r31)
	PPC_STORE_U16(ctx.r31.u32 + 4, ctx.r20.u16);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// bne 0x8280190c
	if (!ctx.cr0.eq) goto loc_8280190C;
loc_82801B5C:
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x82fa7690
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82801B64"))) PPC_WEAK_FUNC(sub_82801B64);
PPC_FUNC_IMPL(__imp__sub_82801B64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82801B68"))) PPC_WEAK_FUNC(sub_82801B68);
PPC_FUNC_IMPL(__imp__sub_82801B68) {
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
	// li r5,2044
	ctx.r5.s64 = 2044;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r31,424(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 424);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82801B94;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r9,16
	ctx.r9.s64 = 16;
	// addi r11,r3,1020
	ctx.r11.s64 = ctx.r3.s64 + 1020;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r11,-4
	ctx.r7.s64 = ctx.r11.s64 + -4;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// addi r6,r11,4
	ctx.r6.s64 = ctx.r11.s64 + 4;
loc_82801BB4:
	// stwu r10,4(r7)
	ea = 4 + ctx.r7.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r7.u32 = ea;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwu r8,-4(r6)
	ea = -4 + ctx.r6.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r6.u32 = ea;
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// bdnz 0x82801bb4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82801BB4;
	// li r6,32
	ctx.r6.s64 = 32;
	// addi r8,r11,60
	ctx.r8.s64 = ctx.r11.s64 + 60;
	// addi r7,r11,-60
	ctx.r7.s64 = ctx.r11.s64 + -60;
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
loc_82801BD8:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stwu r10,4(r8)
	ea = 4 + ctx.r8.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r8.u32 = ea;
	// neg r6,r10
	ctx.r6.s64 = -ctx.r10.s64;
	// not r5,r9
	ctx.r5.u64 = ~ctx.r9.u64;
	// stwu r6,-4(r7)
	ea = -4 + ctx.r7.u32;
	PPC_STORE_U32(ea, ctx.r6.u32);
	ctx.r7.u32 = ea;
	// clrlwi r6,r5,31
	ctx.r6.u64 = ctx.r5.u32 & 0x1;
	// add r10,r6,r10
	ctx.r10.u64 = ctx.r6.u64 + ctx.r10.u64;
	// bdnz 0x82801bd8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82801BD8;
	// cmpwi cr6,r9,255
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 255, ctx.xer);
	// bgt cr6,0x82801c2c
	if (ctx.cr6.gt) goto loc_82801C2C;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// subfic r9,r9,256
	ctx.xer.ca = ctx.r9.u32 <= 256;
	ctx.r9.s64 = 256 - ctx.r9.s64;
	// add r7,r8,r11
	ctx.r7.u64 = ctx.r8.u64 + ctx.r11.u64;
	// subf r11,r8,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r8.s64;
	// neg r6,r10
	ctx.r6.s64 = -ctx.r10.s64;
	// addi r8,r7,-4
	ctx.r8.s64 = ctx.r7.s64 + -4;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82801C20:
	// stwu r10,4(r8)
	ea = 4 + ctx.r8.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r8.u32 = ea;
	// stwu r6,-4(r11)
	ea = -4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r6.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x82801c20
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82801C20;
loc_82801C2C:
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

__attribute__((alias("__imp__sub_82801C40"))) PPC_WEAK_FUNC(sub_82801C40);
PPC_FUNC_IMPL(__imp__sub_82801C40) {
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
	// lwz r31,424(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 424);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// stw r11,116(r3)
	PPC_STORE_U32(ctx.r3.u32 + 116, ctx.r11.u32);
	// lwz r4,20(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// bl 0x82801360
	ctx.lr = 0x82801C64;
	sub_82801360(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,28(r31)
	PPC_STORE_U8(ctx.r31.u32 + 28, ctx.r11.u8);
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

__attribute__((alias("__imp__sub_82801C80"))) PPC_WEAK_FUNC(sub_82801C80);
PPC_FUNC_IMPL(__imp__sub_82801C80) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82801C84"))) PPC_WEAK_FUNC(sub_82801C84);
PPC_FUNC_IMPL(__imp__sub_82801C84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82801C88"))) PPC_WEAK_FUNC(sub_82801C88);
PPC_FUNC_IMPL(__imp__sub_82801C88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7674
	ctx.lr = 0x82801C90;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,424(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 424);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,76(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 76);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r28,24(r30)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// beq cr6,0x82801cb4
	if (ctx.cr6.eq) goto loc_82801CB4;
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,76(r3)
	PPC_STORE_U32(ctx.r3.u32 + 76, ctx.r11.u32);
loc_82801CB4:
	// clrlwi. r11,r4,24
	ctx.r11.u64 = ctx.r4.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r27,0
	ctx.r27.s64 = 0;
	// beq 0x82801ce4
	if (ctx.cr0.eq) goto loc_82801CE4;
	// lis r11,-32128
	ctx.r11.s64 = -2105540608;
	// lis r10,-32128
	ctx.r10.s64 = -2105540608;
	// addi r11,r11,2864
	ctx.r11.s64 = ctx.r11.s64 + 2864;
	// addi r10,r10,7232
	ctx.r10.s64 = ctx.r10.s64 + 7232;
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
	// stw r10,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r10.u32);
	// stb r9,28(r30)
	PPC_STORE_U8(ctx.r30.u32 + 28, ctx.r9.u8);
	// b 0x82801de8
	goto loc_82801DE8;
loc_82801CE4:
	// lwz r11,76(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x82801cfc
	if (!ctx.cr6.eq) goto loc_82801CFC;
	// lis r11,-32128
	ctx.r11.s64 = -2105540608;
	// addi r11,r11,6296
	ctx.r11.s64 = ctx.r11.s64 + 6296;
	// b 0x82801d04
	goto loc_82801D04;
loc_82801CFC:
	// lis r11,-32128
	ctx.r11.s64 = -2105540608;
	// addi r11,r11,6112
	ctx.r11.s64 = ctx.r11.s64 + 6112;
loc_82801D04:
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
	// lis r11,-32128
	ctx.r11.s64 = -2105540608;
	// addi r11,r11,7296
	ctx.r11.s64 = ctx.r11.s64 + 7296;
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// lwz r29,112(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// cmpwi cr6,r29,1
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 1, ctx.xer);
	// bge cr6,0x82801d4c
	if (!ctx.cr6.lt) goto loc_82801D4C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r10,56
	ctx.r10.s64 = 56;
	// li r9,1
	ctx.r9.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r9,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r9.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82801D4C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82801D4C:
	// cmpwi cr6,r29,256
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 256, ctx.xer);
	// ble cr6,0x82801d80
	if (!ctx.cr6.gt) goto loc_82801D80;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r10,57
	ctx.r10.s64 = 57;
	// li r9,256
	ctx.r9.s64 = 256;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r9,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r9.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82801D80;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82801D80:
	// lwz r11,76(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x82801de8
	if (!ctx.cr6.eq) goto loc_82801DE8;
	// lwz r11,92(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// lwz r10,32(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// mulli r29,r11,6
	ctx.r29.s64 = ctx.r11.s64 * 6;
	// bne cr6,0x82801dc4
	if (!ctx.cr6.eq) goto loc_82801DC4;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82801DC0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,32(r30)
	PPC_STORE_U32(ctx.r30.u32 + 32, ctx.r3.u32);
loc_82801DC4:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,32(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// bl 0x827f7098
	ctx.lr = 0x82801DD0;
	sub_827F7098(ctx, base);
	// lwz r11,40(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82801de4
	if (!ctx.cr6.eq) goto loc_82801DE4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82801b68
	ctx.lr = 0x82801DE4;
	sub_82801B68(ctx, base);
loc_82801DE4:
	// stb r27,36(r30)
	PPC_STORE_U8(ctx.r30.u32 + 36, ctx.r27.u8);
loc_82801DE8:
	// lbz r11,28(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 28);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82801e14
	if (ctx.cr0.eq) goto loc_82801E14;
	// addi r29,r28,-4
	ctx.r29.s64 = ctx.r28.s64 + -4;
	// li r31,32
	ctx.r31.s64 = 32;
loc_82801DFC:
	// li r4,4096
	ctx.r4.s64 = 4096;
	// lwzu r3,4(r29)
	ea = 4 + ctx.r29.u32;
	ctx.r3.u64 = PPC_LOAD_U32(ea);
	ctx.r29.u32 = ea;
	// bl 0x827f7098
	ctx.lr = 0x82801E08;
	sub_827F7098(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x82801dfc
	if (!ctx.cr0.eq) goto loc_82801DFC;
	// stb r27,28(r30)
	PPC_STORE_U8(ctx.r30.u32 + 28, ctx.r27.u8);
loc_82801E14:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82801E1C"))) PPC_WEAK_FUNC(sub_82801E1C);
PPC_FUNC_IMPL(__imp__sub_82801E1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82801E20"))) PPC_WEAK_FUNC(sub_82801E20);
PPC_FUNC_IMPL(__imp__sub_82801E20) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,424(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 424);
	// li r10,1
	ctx.r10.s64 = 1;
	// stb r10,28(r11)
	PPC_STORE_U8(ctx.r11.u32 + 28, ctx.r10.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82801E30"))) PPC_WEAK_FUNC(sub_82801E30);
PPC_FUNC_IMPL(__imp__sub_82801E30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x82801E38;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r5,44
	ctx.r5.s64 = 44;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82801E58;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32128
	ctx.r11.s64 = -2105540608;
	// stw r3,424(r31)
	PPC_STORE_U32(ctx.r31.u32 + 424, ctx.r3.u32);
	// lis r10,-32128
	ctx.r10.s64 = -2105540608;
	// li r28,0
	ctx.r28.s64 = 0;
	// addi r11,r11,7304
	ctx.r11.s64 = ctx.r11.s64 + 7304;
	// addi r10,r10,7712
	ctx.r10.s64 = ctx.r10.s64 + 7712;
	// stw r28,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r28.u32);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r10,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r10.u32);
	// stw r28,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r28.u32);
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x82801eb0
	if (ctx.cr6.eq) goto loc_82801EB0;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r10,47
	ctx.r10.s64 = 47;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82801EB0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82801EB0:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r5,128
	ctx.r5.s64 = 128;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82801ECC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r3.u32);
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
loc_82801ED4:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r5,4096
	ctx.r5.s64 = 4096;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82801EF0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// stwx r3,r29,r11
	PPC_STORE_U32(ctx.r29.u32 + ctx.r11.u32, ctx.r3.u32);
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmpwi cr6,r29,128
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 128, ctx.xer);
	// blt cr6,0x82801ed4
	if (ctx.cr6.lt) goto loc_82801ED4;
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,28(r30)
	PPC_STORE_U8(ctx.r30.u32 + 28, ctx.r11.u8);
	// lbz r11,90(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 90);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82801fb0
	if (ctx.cr0.eq) goto loc_82801FB0;
	// lwz r29,84(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// cmpwi cr6,r29,8
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 8, ctx.xer);
	// bge cr6,0x82801f50
	if (!ctx.cr6.lt) goto loc_82801F50;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r10,56
	ctx.r10.s64 = 56;
	// li r9,8
	ctx.r9.s64 = 8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r9,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r9.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82801F50;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82801F50:
	// cmpwi cr6,r29,256
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 256, ctx.xer);
	// ble cr6,0x82801f84
	if (!ctx.cr6.gt) goto loc_82801F84;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r10,57
	ctx.r10.s64 = 57;
	// li r9,256
	ctx.r9.s64 = 256;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r9,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r9.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82801F84;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82801F84:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r6,3
	ctx.r6.s64 = 3;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82801FA4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r3.u32);
	// stw r29,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r29.u32);
	// b 0x82801fb4
	goto loc_82801FB4;
loc_82801FB0:
	// stw r28,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r28.u32);
loc_82801FB4:
	// lwz r11,76(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82801fc8
	if (ctx.cr6.eq) goto loc_82801FC8;
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r11.u32);
loc_82801FC8:
	// lwz r11,76(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x82802004
	if (!ctx.cr6.eq) goto loc_82802004;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,92(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mulli r5,r11,6
	ctx.r5.s64 = ctx.r11.s64 * 6;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82801FF8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,32(r30)
	PPC_STORE_U32(ctx.r30.u32 + 32, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82801b68
	ctx.lr = 0x82802004;
	sub_82801B68(ctx, base);
loc_82802004:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8280200C"))) PPC_WEAK_FUNC(sub_8280200C);
PPC_FUNC_IMPL(__imp__sub_8280200C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82802010"))) PPC_WEAK_FUNC(sub_82802010);
PPC_FUNC_IMPL(__imp__sub_82802010) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7674
	ctx.lr = 0x82802018;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,100(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lwz r27,84(r3)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r3.u32 + 84);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// li r11,1
	ctx.r11.s64 = 1;
loc_82802030:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpwi cr6,r31,1
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 1, ctx.xer);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// ble cr6,0x82802050
	if (!ctx.cr6.gt) goto loc_82802050;
	// addi r9,r31,-1
	ctx.r9.s64 = ctx.r31.s64 + -1;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82802048:
	// mullw r10,r10,r11
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// bdnz 0x82802048
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82802048;
loc_82802050:
	// cmpw cr6,r10,r27
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r27.s32, ctx.xer);
	// ble cr6,0x82802030
	if (!ctx.cr6.gt) goto loc_82802030;
	// addi r30,r11,-1
	ctx.r30.s64 = ctx.r11.s64 + -1;
	// cmpwi cr6,r30,2
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 2, ctx.xer);
	// bge cr6,0x8280208c
	if (!ctx.cr6.lt) goto loc_8280208C;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// li r9,56
	ctx.r9.s64 = 56;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r9,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r9.u32);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// stw r10,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r10.u32);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8280208C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8280208C:
	// li r3,1
	ctx.r3.s64 = 1;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// ble cr6,0x828020c0
	if (!ctx.cr6.gt) goto loc_828020C0;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// addi r10,r29,-4
	ctx.r10.s64 = ctx.r29.s64 + -4;
	// cmplwi r31,0
	ctx.cr0.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq 0x828020b4
	if (ctx.cr0.eq) goto loc_828020B4;
	// mtctr r31
	ctx.ctr.u64 = ctx.r31.u64;
loc_828020AC:
	// stwu r30,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r30.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x828020ac
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_828020AC;
loc_828020B4:
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mullw r3,r3,r30
	ctx.r3.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r30.s32);
	// bne 0x828020b4
	if (!ctx.cr0.eq) goto loc_828020B4;
loc_828020C0:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r5,r11,32336
	ctx.r5.s64 = ctx.r11.s64 + 32336;
loc_828020C8:
	// li r6,0
	ctx.r6.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// ble cr6,0x82802140
	if (!ctx.cr6.gt) goto loc_82802140;
	// mr r7,r5
	ctx.r7.u64 = ctx.r5.u64;
loc_828020DC:
	// lwz r11,44(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 44);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x828020f0
	if (!ctx.cr6.eq) goto loc_828020F0;
	// lwz r11,0(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// b 0x828020f4
	goto loc_828020F4;
loc_828020F0:
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_828020F4:
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rotlwi r11,r3,1
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r3.u32, 1);
	// addi r4,r11,-1
	ctx.r4.s64 = ctx.r11.s64 + -1;
	// lwzx r11,r9,r29
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r29.u32);
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// divw r30,r3,r11
	ctx.r30.s32 = ctx.r3.s32 / ctx.r11.s32;
	// andc r4,r11,r4
	ctx.r4.u64 = ctx.r11.u64 & ~ctx.r4.u64;
	// twllei r11,0
	if (ctx.r11.u32 <= 0) __builtin_debugtrap();
	// mullw r11,r30,r10
	ctx.r11.s64 = int64_t(ctx.r30.s32) * int64_t(ctx.r10.s32);
	// twlgei r4,-1
	if (ctx.r4.u32 >= 4294967295) __builtin_debugtrap();
	// cmpw cr6,r11,r27
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r27.s32, ctx.xer);
	// bgt cr6,0x82802140
	if (ctx.cr6.gt) goto loc_82802140;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// stwx r10,r9,r29
	PPC_STORE_U32(ctx.r9.u32 + ctx.r29.u32, ctx.r10.u32);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// li r6,1
	ctx.r6.s64 = 1;
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// cmpw cr6,r8,r31
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r31.s32, ctx.xer);
	// blt cr6,0x828020dc
	if (ctx.cr6.lt) goto loc_828020DC;
loc_82802140:
	// clrlwi. r11,r6,24
	ctx.r11.u64 = ctx.r6.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x828020c8
	if (!ctx.cr0.eq) goto loc_828020C8;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82802150"))) PPC_WEAK_FUNC(sub_82802150);
PPC_FUNC_IMPL(__imp__sub_82802150) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// srawi r11,r4,1
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r4.s32 >> 1;
	// mulli r10,r3,255
	ctx.r10.s64 = ctx.r3.s64 * 255;
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// twllei r4,0
	if (ctx.r4.u32 <= 0) __builtin_debugtrap();
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rotlwi r11,r10,1
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// divw r3,r10,r4
	ctx.r3.s32 = ctx.r10.s32 / ctx.r4.s32;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// andc r11,r4,r11
	ctx.r11.u64 = ctx.r4.u64 & ~ctx.r11.u64;
	// twlgei r11,-1
	if (ctx.r11.u32 >= 4294967295) __builtin_debugtrap();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8280217C"))) PPC_WEAK_FUNC(sub_8280217C);
PPC_FUNC_IMPL(__imp__sub_8280217C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82802180"))) PPC_WEAK_FUNC(sub_82802180);
PPC_FUNC_IMPL(__imp__sub_82802180) {
	PPC_FUNC_PROLOGUE();
	// mulli r11,r3,510
	ctx.r11.s64 = ctx.r3.s64 * 510;
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// rlwinm r10,r4,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r9,r11,255
	ctx.r9.s64 = ctx.r11.s64 + 255;
	// twllei r10,0
	if (ctx.r10.u32 <= 0) __builtin_debugtrap();
	// rotlwi r11,r9,1
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 1);
	// divw r3,r9,r10
	ctx.r3.s32 = ctx.r9.s32 / ctx.r10.s32;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// andc r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ~ctx.r11.u64;
	// twlgei r11,-1
	if (ctx.r11.u32 >= 4294967295) __builtin_debugtrap();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828021AC"))) PPC_WEAK_FUNC(sub_828021AC);
PPC_FUNC_IMPL(__imp__sub_828021AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_828021B0"))) PPC_WEAK_FUNC(sub_828021B0);
PPC_FUNC_IMPL(__imp__sub_828021B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7660
	ctx.lr = 0x828021B8;
	__savegprlr_22(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r22,424(r3)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r3.u32 + 424);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r30,r22,32
	ctx.r30.s64 = ctx.r22.s64 + 32;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82802010
	ctx.lr = 0x828021D0;
	sub_82802010(ctx, base);
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bne cr6,0x82802218
	if (!ctx.cr6.eq) goto loc_82802218;
	// stw r27,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r27.u32);
	// li r10,94
	ctx.r10.s64 = 94;
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r9,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r9.u32);
	// lwz r9,36(r22)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r22.u32 + 36);
	// stw r9,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r9.u32);
	// lwz r9,40(r22)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r22.u32 + 40);
	// stw r9,36(r11)
	PPC_STORE_U32(ctx.r11.u32 + 36, ctx.r9.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r10,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// b 0x82802228
	goto loc_82802228;
loc_82802218:
	// li r10,95
	ctx.r10.s64 = 95;
	// stw r10,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r27,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r27.u32);
loc_82802228:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82802238;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r6,100(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82802258;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// mr r25,r27
	ctx.r25.u64 = ctx.r27.u64;
	// li r23,0
	ctx.r23.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82802330
	if (!ctx.cr6.gt) goto loc_82802330;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
loc_82802270:
	// rotlwi r10,r25,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r25.u32, 1);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// divw r29,r25,r11
	ctx.r29.s32 = ctx.r25.s32 / ctx.r11.s32;
	// andc r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 & ~ctx.r10.u64;
	// twllei r11,0
	if (ctx.r11.u32 <= 0) __builtin_debugtrap();
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// twlgei r10,-1
	if (ctx.r10.u32 >= 4294967295) __builtin_debugtrap();
	// ble cr6,0x82802314
	if (!ctx.cr6.gt) goto loc_82802314;
	// addi r7,r11,-1
	ctx.r7.s64 = ctx.r11.s64 + -1;
	// li r10,0
	ctx.r10.s64 = 0;
	// srawi r9,r7,1
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r7.s32 >> 1;
	// li r5,0
	ctx.r5.s64 = 0;
	// addze r26,r9
	temp.s64 = ctx.r9.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r26.s64 = temp.s64;
loc_828022A8:
	// add r6,r5,r26
	ctx.r6.u64 = ctx.r5.u64 + ctx.r26.u64;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// rotlwi r8,r6,1
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r6.u32, 1);
	// divw r28,r6,r7
	ctx.r28.s32 = ctx.r6.s32 / ctx.r7.s32;
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// twllei r7,0
	if (ctx.r7.u32 <= 0) __builtin_debugtrap();
	// andc r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 & ~ctx.r8.u64;
	// cmpw cr6,r10,r27
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r27.s32, ctx.xer);
	// twlgei r8,-1
	if (ctx.r8.u32 >= 4294967295) __builtin_debugtrap();
	// bge cr6,0x82802304
	if (!ctx.cr6.lt) goto loc_82802304;
loc_828022D0:
	// li r8,0
	ctx.r8.s64 = 0;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// ble cr6,0x828022f8
	if (!ctx.cr6.gt) goto loc_828022F8;
	// clrlwi r4,r28,24
	ctx.r4.u64 = ctx.r28.u32 & 0xFF;
	// mtctr r29
	ctx.ctr.u64 = ctx.r29.u64;
loc_828022E4:
	// lwz r6,0(r24)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// add r6,r6,r8
	ctx.r6.u64 = ctx.r6.u64 + ctx.r8.u64;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// stbx r4,r6,r9
	PPC_STORE_U8(ctx.r6.u32 + ctx.r9.u32, ctx.r4.u8);
	// bdnz 0x828022e4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_828022E4;
loc_828022F8:
	// add r9,r9,r25
	ctx.r9.u64 = ctx.r9.u64 + ctx.r25.u64;
	// cmpw cr6,r9,r27
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r27.s32, ctx.xer);
	// blt cr6,0x828022d0
	if (ctx.cr6.lt) goto loc_828022D0;
loc_82802304:
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r5,r5,255
	ctx.r5.s64 = ctx.r5.s64 + 255;
	// add r10,r10,r29
	ctx.r10.u64 = ctx.r10.u64 + ctx.r29.u64;
	// bne 0x828022a8
	if (!ctx.cr0.eq) goto loc_828022A8;
loc_82802314:
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// addi r23,r23,1
	ctx.r23.s64 = ctx.r23.s64 + 1;
	// mr r25,r29
	ctx.r25.u64 = ctx.r29.u64;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// addi r24,r24,4
	ctx.r24.s64 = ctx.r24.s64 + 4;
	// cmpw cr6,r23,r11
	ctx.cr6.compare<int32_t>(ctx.r23.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82802270
	if (ctx.cr6.lt) goto loc_82802270;
loc_82802330:
	// stw r3,16(r22)
	PPC_STORE_U32(ctx.r22.u32 + 16, ctx.r3.u32);
	// stw r27,20(r22)
	PPC_STORE_U32(ctx.r22.u32 + 20, ctx.r27.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82fa76b0
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82802340"))) PPC_WEAK_FUNC(sub_82802340);
PPC_FUNC_IMPL(__imp__sub_82802340) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7670
	ctx.lr = 0x82802348;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,76(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 76);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r31,424(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 424);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82802368
	if (!ctx.cr6.eq) goto loc_82802368;
	// li r28,510
	ctx.r28.s64 = 510;
	// b 0x82802370
	goto loc_82802370;
loc_82802368:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r28,0
	ctx.r28.s64 = 0;
loc_82802370:
	// stb r11,28(r31)
	PPC_STORE_U8(ctx.r31.u32 + 28, ctx.r11.u8);
	// addi r5,r28,256
	ctx.r5.s64 = ctx.r28.s64 + 256;
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r6,100(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + 100);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82802394;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r3.u32);
	// lwz r11,100(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 100);
	// li r26,0
	ctx.r26.s64 = 0;
	// lwz r30,20(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x828024b4
	if (!ctx.cr6.gt) goto loc_828024B4;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r27,r31,32
	ctx.r27.s64 = ctx.r31.s64 + 32;
loc_828023B4:
	// rotlwi r10,r30,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r30.u32, 1);
	// lwzx r11,r27,r3
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r3.u32);
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// divw r30,r30,r11
	ctx.r30.s32 = ctx.r30.s32 / ctx.r11.s32;
	// andc r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 & ~ctx.r10.u64;
	// twllei r11,0
	if (ctx.r11.u32 <= 0) __builtin_debugtrap();
	// twlgei r10,-1
	if (ctx.r10.u32 >= 4294967295) __builtin_debugtrap();
	// beq cr6,0x828023e8
	if (ctx.cr6.eq) goto loc_828023E8;
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwzx r9,r10,r3
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r3.u32);
	// addi r9,r9,255
	ctx.r9.s64 = ctx.r9.s64 + 255;
	// stwx r9,r10,r3
	PPC_STORE_U32(ctx.r10.u32 + ctx.r3.u32, ctx.r9.u32);
loc_828023E8:
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// lwz r7,24(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r6,r9,255
	ctx.r6.s64 = ctx.r9.s64 + 255;
	// rlwinm r11,r9,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// rotlwi r10,r6,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r6.u32, 1);
	// lwzx r5,r7,r3
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r3.u32);
	// divw r6,r6,r11
	ctx.r6.s32 = ctx.r6.s32 / ctx.r11.s32;
	// addi r7,r10,-1
	ctx.r7.s64 = ctx.r10.s64 + -1;
	// twllei r11,0
	if (ctx.r11.u32 <= 0) __builtin_debugtrap();
	// andc r7,r11,r7
	ctx.r7.u64 = ctx.r11.u64 & ~ctx.r7.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// twlgei r7,-1
	if (ctx.r7.u32 >= 4294967295) __builtin_debugtrap();
loc_8280241C:
	// cmpw cr6,r10,r6
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r6.s32, ctx.xer);
	// ble cr6,0x82802458
	if (!ctx.cr6.gt) goto loc_82802458;
	// mulli r7,r8,510
	ctx.r7.s64 = ctx.r8.s64 * 510;
loc_82802428:
	// addi r7,r7,510
	ctx.r7.s64 = ctx.r7.s64 + 510;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// add r6,r7,r9
	ctx.r6.u64 = ctx.r7.u64 + ctx.r9.u64;
	// twllei r11,0
	if (ctx.r11.u32 <= 0) __builtin_debugtrap();
	// addi r6,r6,255
	ctx.r6.s64 = ctx.r6.s64 + 255;
	// rotlwi r4,r6,1
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r6.u32, 1);
	// divw r6,r6,r11
	ctx.r6.s32 = ctx.r6.s32 / ctx.r11.s32;
	// addi r4,r4,-1
	ctx.r4.s64 = ctx.r4.s64 + -1;
	// cmpw cr6,r10,r6
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r6.s32, ctx.xer);
	// andc r4,r11,r4
	ctx.r4.u64 = ctx.r11.u64 & ~ctx.r4.u64;
	// twlgei r4,-1
	if (ctx.r4.u32 >= 4294967295) __builtin_debugtrap();
	// bgt cr6,0x82802428
	if (ctx.cr6.gt) goto loc_82802428;
loc_82802458:
	// mullw r7,r8,r30
	ctx.r7.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r30.s32);
	// stbx r7,r10,r5
	PPC_STORE_U8(ctx.r10.u32 + ctx.r5.u32, ctx.r7.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r10,255
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 255, ctx.xer);
	// ble cr6,0x8280241c
	if (!ctx.cr6.gt) goto loc_8280241C;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq cr6,0x828024a0
	if (ctx.cr6.eq) goto loc_828024A0;
	// li r8,255
	ctx.r8.s64 = 255;
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r9,r5,255
	ctx.r9.s64 = ctx.r5.s64 + 255;
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_82802488:
	// lbz r8,0(r5)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r5.u32 + 0);
	// stbu r8,-1(r10)
	ea = -1 + ctx.r10.u32;
	PPC_STORE_U8(ea, ctx.r8.u8);
	ctx.r10.u32 = ea;
	// lbz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// stbx r8,r9,r11
	PPC_STORE_U8(ctx.r9.u32 + ctx.r11.u32, ctx.r8.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x82802488
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82802488;
loc_828024A0:
	// lwz r11,100(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 100);
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// cmpw cr6,r26,r11
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x828023b4
	if (ctx.cr6.lt) goto loc_828023B4;
loc_828024B4:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82fa76c0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828024BC"))) PPC_WEAK_FUNC(sub_828024BC);
PPC_FUNC_IMPL(__imp__sub_828024BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_828024C0"))) PPC_WEAK_FUNC(sub_828024C0);
PPC_FUNC_IMPL(__imp__sub_828024C0) {
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
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// li r5,1024
	ctx.r5.s64 = 1024;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828024EC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// rlwinm r11,r31,9,0,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 9) & 0xFFFFFE00;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r8,r11,-512
	ctx.r8.s64 = ctx.r11.s64 + -512;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r6,r11,32080
	ctx.r6.s64 = ctx.r11.s64 + 32080;
loc_82802500:
	// li r11,16
	ctx.r11.s64 = 16;
	// li r10,0
	ctx.r10.s64 = 0;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_8280250C:
	// add r11,r7,r10
	ctx.r11.u64 = ctx.r7.u64 + ctx.r10.u64;
	// lis r9,0
	ctx.r9.s64 = 0;
	// twllei r8,0
	if (ctx.r8.u32 <= 0) __builtin_debugtrap();
	// ori r9,r9,65025
	ctx.r9.u64 = ctx.r9.u64 | 65025;
	// lbzx r11,r11,r6
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r6.u32);
	// mulli r11,r11,510
	ctx.r11.s64 = ctx.r11.s64 * 510;
	// subf. r11,r11,r9
	ctx.r11.s64 = ctx.r9.s64 - ctx.r11.s64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// rotlwi r9,r11,1
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// divw r11,r11,r8
	ctx.r11.s32 = ctx.r11.s32 / ctx.r8.s32;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// andc r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 & ~ctx.r9.u64;
	// twlgei r9,-1
	if (ctx.r9.u32 >= 4294967295) __builtin_debugtrap();
	// add r9,r7,r10
	ctx.r9.u64 = ctx.r7.u64 + ctx.r10.u64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r11,r9,r3
	PPC_STORE_U32(ctx.r9.u32 + ctx.r3.u32, ctx.r11.u32);
	// bdnz 0x8280250c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8280250C;
	// addi r7,r7,16
	ctx.r7.s64 = ctx.r7.s64 + 16;
	// cmpwi cr6,r7,256
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 256, ctx.xer);
	// blt cr6,0x82802500
	if (ctx.cr6.lt) goto loc_82802500;
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

__attribute__((alias("__imp__sub_82802570"))) PPC_WEAK_FUNC(sub_82802570);
PPC_FUNC_IMPL(__imp__sub_82802570) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x82802578;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,100(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r28,424(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 424);
	// li r31,0
	ctx.r31.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x828025fc
	if (!ctx.cr6.gt) goto loc_828025FC;
	// addi r30,r28,48
	ctx.r30.s64 = ctx.r28.s64 + 48;
loc_82802598:
	// lwz r4,-16(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + -16);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// ble cr6,0x828025e0
	if (!ctx.cr6.gt) goto loc_828025E0;
	// addi r10,r28,32
	ctx.r10.s64 = ctx.r28.s64 + 32;
loc_828025AC:
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpw cr6,r4,r9
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r9.s32, ctx.xer);
	// beq cr6,0x828025cc
	if (ctx.cr6.eq) goto loc_828025CC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpw cr6,r11,r31
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r31.s32, ctx.xer);
	// blt cr6,0x828025ac
	if (ctx.cr6.lt) goto loc_828025AC;
	// b 0x828025e0
	goto loc_828025E0;
loc_828025CC:
	// addi r11,r11,13
	ctx.r11.s64 = ctx.r11.s64 + 13;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r28
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r28.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x828025e8
	if (!ctx.cr6.eq) goto loc_828025E8;
loc_828025E0:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x828024c0
	ctx.lr = 0x828025E8;
	sub_828024C0(ctx, base);
loc_828025E8:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// stwu r3,4(r30)
	ea = 4 + ctx.r30.u32;
	PPC_STORE_U32(ea, ctx.r3.u32);
	ctx.r30.u32 = ea;
	// lwz r11,100(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 100);
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82802598
	if (ctx.cr6.lt) goto loc_82802598;
loc_828025FC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82802604"))) PPC_WEAK_FUNC(sub_82802604);
PPC_FUNC_IMPL(__imp__sub_82802604) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82802608"))) PPC_WEAK_FUNC(sub_82802608);
PPC_FUNC_IMPL(__imp__sub_82802608) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x82802610;
	__savegprlr_28(ctx, base);
	// lwz r11,424(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 424);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// lwz r30,92(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 92);
	// lwz r29,100(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// lwz r28,24(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// ble cr6,0x82802688
	if (!ctx.cr6.gt) goto loc_82802688;
	// subf r31,r5,r4
	ctx.r31.s64 = ctx.r4.s64 - ctx.r5.s64;
loc_8280262C:
	// lwzx r11,r31,r5
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r5.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r10,0(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x8280267c
	if (ctx.cr6.eq) goto loc_8280267C;
	// addi r3,r10,-1
	ctx.r3.s64 = ctx.r10.s64 + -1;
	// addi r7,r11,-1
	ctx.r7.s64 = ctx.r11.s64 + -1;
loc_82802648:
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// ble cr6,0x82802670
	if (!ctx.cr6.gt) goto loc_82802670;
	// addi r11,r28,-4
	ctx.r11.s64 = ctx.r28.s64 + -4;
	// mtctr r29
	ctx.ctr.u64 = ctx.r29.u64;
loc_8280265C:
	// lbzu r9,1(r7)
	ea = 1 + ctx.r7.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r7.u32 = ea;
	// lwzu r8,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r8.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// lbzx r9,r9,r8
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r8.u32);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// bdnz 0x8280265c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8280265C;
loc_82802670:
	// addic. r4,r4,-1
	ctx.xer.ca = ctx.r4.u32 > 0;
	ctx.r4.s64 = ctx.r4.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// stbu r10,1(r3)
	ea = 1 + ctx.r3.u32;
	PPC_STORE_U8(ea, ctx.r10.u8);
	ctx.r3.u32 = ea;
	// bne 0x82802648
	if (!ctx.cr0.eq) goto loc_82802648;
loc_8280267C:
	// addic. r6,r6,-1
	ctx.xer.ca = ctx.r6.u32 > 0;
	ctx.r6.s64 = ctx.r6.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// addi r5,r5,4
	ctx.r5.s64 = ctx.r5.s64 + 4;
	// bne 0x8280262c
	if (!ctx.cr0.eq) goto loc_8280262C;
loc_82802688:
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8280268C"))) PPC_WEAK_FUNC(sub_8280268C);
PPC_FUNC_IMPL(__imp__sub_8280268C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82802690"))) PPC_WEAK_FUNC(sub_82802690);
PPC_FUNC_IMPL(__imp__sub_82802690) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x82802698;
	__savegprlr_28(ctx, base);
	// lwz r11,424(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 424);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// lwz r29,92(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 92);
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r31,4(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r30,8(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// ble cr6,0x82802710
	if (!ctx.cr6.gt) goto loc_82802710;
	// subf r4,r5,r4
	ctx.r4.s64 = ctx.r4.s64 - ctx.r5.s64;
loc_828026BC:
	// lwzx r11,r4,r5
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r5.u32);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// lwz r10,0(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// beq cr6,0x82802704
	if (ctx.cr6.eq) goto loc_82802704;
	// mtctr r29
	ctx.ctr.u64 = ctx.r29.u64;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
loc_828026D4:
	// lbz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbzu r28,1(r11)
	ea = 1 + ctx.r11.u32;
	ctx.r28.u64 = PPC_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// lbzx r9,r7,r3
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r7.u32 + ctx.r3.u32);
	// lbzu r8,1(r11)
	ea = 1 + ctx.r11.u32;
	ctx.r8.u64 = PPC_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// mr r7,r8
	ctx.r7.u64 = ctx.r8.u64;
	// lbzx r8,r28,r31
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r28.u32 + ctx.r31.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// lbzx r7,r7,r30
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r7.u32 + ctx.r30.u32);
	// add r9,r7,r9
	ctx.r9.u64 = ctx.r7.u64 + ctx.r9.u64;
	// stbu r9,1(r10)
	ea = 1 + ctx.r10.u32;
	PPC_STORE_U8(ea, ctx.r9.u8);
	ctx.r10.u32 = ea;
	// bdnz 0x828026d4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_828026D4;
loc_82802704:
	// addic. r6,r6,-1
	ctx.xer.ca = ctx.r6.u32 > 0;
	ctx.r6.s64 = ctx.r6.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// addi r5,r5,4
	ctx.r5.s64 = ctx.r5.s64 + 4;
	// bne 0x828026bc
	if (!ctx.cr0.eq) goto loc_828026BC;
loc_82802710:
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82802714"))) PPC_WEAK_FUNC(sub_82802714);
PPC_FUNC_IMPL(__imp__sub_82802714) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82802718"))) PPC_WEAK_FUNC(sub_82802718);
PPC_FUNC_IMPL(__imp__sub_82802718) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa765c
	ctx.lr = 0x82802720;
	__savegprlr_21(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,424(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 424);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// lwz r25,100(r3)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// lwz r29,92(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 92);
	// ble cr6,0x828027f4
	if (!ctx.cr6.gt) goto loc_828027F4;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// subf r24,r5,r4
	ctx.r24.s64 = ctx.r4.s64 - ctx.r5.s64;
	// mr r22,r6
	ctx.r22.u64 = ctx.r6.u64;
loc_82802744:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x827f7098
	ctx.lr = 0x82802750;
	sub_827F7098(ctx, base);
	// li r28,0
	ctx.r28.s64 = 0;
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// lwz r23,48(r30)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	// ble cr6,0x828027dc
	if (!ctx.cr6.gt) goto loc_828027DC;
	// rlwinm r27,r23,6,0,25
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 6) & 0xFFFFFFC0;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r26,r30,52
	ctx.r26.s64 = ctx.r30.s64 + 52;
loc_8280276C:
	// lwz r5,24(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwzx r10,r24,r31
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r24.u32 + ctx.r31.u32);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// lwzx r9,r26,r8
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r26.u32 + ctx.r8.u32);
	// lwz r7,0(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// add r6,r28,r10
	ctx.r6.u64 = ctx.r28.u64 + ctx.r10.u64;
	// add r4,r9,r27
	ctx.r4.u64 = ctx.r9.u64 + ctx.r27.u64;
	// lwzx r3,r5,r8
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r8.u32);
	// beq cr6,0x828027cc
	if (ctx.cr6.eq) goto loc_828027CC;
	// mtctr r29
	ctx.ctr.u64 = ctx.r29.u64;
	// addi r10,r7,-1
	ctx.r10.s64 = ctx.r7.s64 + -1;
	// subf r9,r25,r6
	ctx.r9.s64 = ctx.r6.s64 - ctx.r25.s64;
loc_828027A0:
	// rlwinm r21,r11,2,0,29
	ctx.r21.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lbzux r5,r9,r25
	ea = ctx.r9.u32 + ctx.r25.u32;
	ctx.r5.u64 = PPC_LOAD_U8(ea);
	ctx.r9.u32 = ea;
	// lbz r6,1(r10)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r10.u32 + 1);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r11,r11,28
	ctx.r11.u64 = ctx.r11.u32 & 0xF;
	// lwzx r7,r21,r4
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r21.u32 + ctx.r4.u32);
	// add r7,r7,r5
	ctx.r7.u64 = ctx.r7.u64 + ctx.r5.u64;
	// lbzx r7,r7,r3
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r7.u32 + ctx.r3.u32);
	// add r7,r7,r6
	ctx.r7.u64 = ctx.r7.u64 + ctx.r6.u64;
	// stbu r7,1(r10)
	ea = 1 + ctx.r10.u32;
	PPC_STORE_U8(ea, ctx.r7.u8);
	ctx.r10.u32 = ea;
	// bdnz 0x828027a0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_828027A0;
loc_828027CC:
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// cmpw cr6,r28,r25
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r25.s32, ctx.xer);
	// blt cr6,0x8280276c
	if (ctx.cr6.lt) goto loc_8280276C;
loc_828027DC:
	// addi r11,r23,1
	ctx.r11.s64 = ctx.r23.s64 + 1;
	// addic. r22,r22,-1
	ctx.xer.ca = ctx.r22.u32 > 0;
	ctx.r22.s64 = ctx.r22.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// clrlwi r11,r11,28
	ctx.r11.u64 = ctx.r11.u32 & 0xF;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// stw r11,48(r30)
	PPC_STORE_U32(ctx.r30.u32 + 48, ctx.r11.u32);
	// bne 0x82802744
	if (!ctx.cr0.eq) goto loc_82802744;
loc_828027F4:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82fa76ac
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828027FC"))) PPC_WEAK_FUNC(sub_828027FC);
PPC_FUNC_IMPL(__imp__sub_828027FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82802800"))) PPC_WEAK_FUNC(sub_82802800);
PPC_FUNC_IMPL(__imp__sub_82802800) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7650
	ctx.lr = 0x82802808;
	__savegprlr_18(ctx, base);
	// lwz r8,424(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 424);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// lwz r22,92(r3)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r3.u32 + 92);
	// lwz r11,24(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 24);
	// lwz r25,0(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r24,4(r11)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r23,8(r11)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// ble cr6,0x828028d8
	if (!ctx.cr6.gt) goto loc_828028D8;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// subf r21,r5,r4
	ctx.r21.s64 = ctx.r4.s64 - ctx.r5.s64;
	// mr r20,r6
	ctx.r20.u64 = ctx.r6.u64;
loc_82802834:
	// lwz r26,48(r8)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r8.u32 + 48);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r7,52(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 52);
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 0, ctx.xer);
	// rlwinm r9,r26,6,0,25
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 6) & 0xFFFFFFC0;
	// lwz r6,56(r8)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + 56);
	// lwz r5,60(r8)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r8.u32 + 60);
	// add r30,r7,r9
	ctx.r30.u64 = ctx.r7.u64 + ctx.r9.u64;
	// lwzx r11,r21,r27
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + ctx.r27.u32);
	// lwz r7,0(r27)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// add r29,r6,r9
	ctx.r29.u64 = ctx.r6.u64 + ctx.r9.u64;
	// add r28,r5,r9
	ctx.r28.u64 = ctx.r5.u64 + ctx.r9.u64;
	// beq cr6,0x828028c0
	if (ctx.cr6.eq) goto loc_828028C0;
	// mtctr r22
	ctx.ctr.u64 = ctx.r22.u64;
	// addi r9,r7,-1
	ctx.r9.s64 = ctx.r7.s64 + -1;
loc_82802870:
	// rlwinm r19,r10,2,0,29
	ctx.r19.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lbz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbzu r31,1(r11)
	ea = 1 + ctx.r11.u32;
	ctx.r31.u64 = PPC_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// addi r18,r10,1
	ctx.r18.s64 = ctx.r10.s64 + 1;
	// clrlwi r10,r18,28
	ctx.r10.u64 = ctx.r18.u32 & 0xF;
	// lwzx r5,r19,r29
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r19.u32 + ctx.r29.u32);
	// lwzx r3,r19,r30
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r19.u32 + ctx.r30.u32);
	// add r5,r5,r31
	ctx.r5.u64 = ctx.r5.u64 + ctx.r31.u64;
	// lbzu r6,1(r11)
	ea = 1 + ctx.r11.u32;
	ctx.r6.u64 = PPC_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// lwzx r7,r19,r28
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r19.u32 + ctx.r28.u32);
	// add r4,r3,r4
	ctx.r4.u64 = ctx.r3.u64 + ctx.r4.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// add r6,r7,r6
	ctx.r6.u64 = ctx.r7.u64 + ctx.r6.u64;
	// lbzx r7,r5,r24
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r5.u32 + ctx.r24.u32);
	// lbzx r5,r4,r25
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r4.u32 + ctx.r25.u32);
	// lbzx r6,r6,r23
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r6.u32 + ctx.r23.u32);
	// add r7,r7,r5
	ctx.r7.u64 = ctx.r7.u64 + ctx.r5.u64;
	// add r7,r6,r7
	ctx.r7.u64 = ctx.r6.u64 + ctx.r7.u64;
	// stbu r7,1(r9)
	ea = 1 + ctx.r9.u32;
	PPC_STORE_U8(ea, ctx.r7.u8);
	ctx.r9.u32 = ea;
	// bdnz 0x82802870
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82802870;
loc_828028C0:
	// addi r11,r26,1
	ctx.r11.s64 = ctx.r26.s64 + 1;
	// addic. r20,r20,-1
	ctx.xer.ca = ctx.r20.u32 > 0;
	ctx.r20.s64 = ctx.r20.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r20.s32, 0, ctx.xer);
	// clrlwi r11,r11,28
	ctx.r11.u64 = ctx.r11.u32 & 0xF;
	// addi r27,r27,4
	ctx.r27.s64 = ctx.r27.s64 + 4;
	// stw r11,48(r8)
	PPC_STORE_U32(ctx.r8.u32 + 48, ctx.r11.u32);
	// bne 0x82802834
	if (!ctx.cr0.eq) goto loc_82802834;
loc_828028D8:
	// b 0x82fa76a0
	__restgprlr_18(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828028DC"))) PPC_WEAK_FUNC(sub_828028DC);
PPC_FUNC_IMPL(__imp__sub_828028DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_828028E0"))) PPC_WEAK_FUNC(sub_828028E0);
PPC_FUNC_IMPL(__imp__sub_828028E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7648
	ctx.lr = 0x828028E8;
	__savegprlr_16(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r22,424(r3)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r3.u32 + 424);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// lwz r23,100(r3)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// lwz r24,92(r3)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r3.u32 + 92);
	// lwz r20,288(r3)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r3.u32 + 288);
	// ble cr6,0x82802a48
	if (!ctx.cr6.gt) goto loc_82802A48;
	// mr r18,r5
	ctx.r18.u64 = ctx.r5.u64;
	// subf r17,r5,r4
	ctx.r17.s64 = ctx.r4.s64 - ctx.r5.s64;
	// mr r16,r6
	ctx.r16.u64 = ctx.r6.u64;
loc_82802910:
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// lwz r3,0(r18)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r18.u32 + 0);
	// bl 0x827f7098
	ctx.lr = 0x8280291C;
	sub_827F7098(ctx, base);
	// li r19,0
	ctx.r19.s64 = 0;
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// ble cr6,0x82802a2c
	if (!ctx.cr6.gt) goto loc_82802A2C;
	// li r25,0
	ctx.r25.s64 = 0;
	// addi r21,r22,68
	ctx.r21.s64 = ctx.r22.s64 + 68;
loc_82802930:
	// lwzx r10,r17,r18
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r17.u32 + ctx.r18.u32);
	// lbz r9,84(r22)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r22.u32 + 84);
	// lwz r11,0(r18)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r18.u32 + 0);
	// add r6,r10,r19
	ctx.r6.u64 = ctx.r10.u64 + ctx.r19.u64;
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq 0x82802974
	if (ctx.cr0.eq) goto loc_82802974;
	// addi r10,r24,-1
	ctx.r10.s64 = ctx.r24.s64 + -1;
	// lwzx r7,r21,r25
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r21.u32 + ctx.r25.u32);
	// addi r8,r24,1
	ctx.r8.s64 = ctx.r24.s64 + 1;
	// mullw r9,r10,r23
	ctx.r9.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r23.s32);
	// rlwinm r8,r8,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r6,r9,r6
	ctx.r6.u64 = ctx.r9.u64 + ctx.r6.u64;
	// li r29,-1
	ctx.r29.s64 = -1;
	// neg r28,r23
	ctx.r28.s64 = -ctx.r23.s64;
	// add r10,r7,r8
	ctx.r10.u64 = ctx.r7.u64 + ctx.r8.u64;
	// b 0x82802980
	goto loc_82802980;
loc_82802974:
	// lwzx r10,r21,r25
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r21.u32 + ctx.r25.u32);
	// li r29,1
	ctx.r29.s64 = 1;
	// mr r28,r23
	ctx.r28.u64 = ctx.r23.u64;
loc_82802980:
	// lwz r8,24(r22)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r22.u32 + 24);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r5,16(r22)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r22.u32 + 16);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// lwzx r27,r8,r25
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r25.u32);
	// lwzx r26,r25,r5
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r25.u32 + ctx.r5.u32);
	// beq cr6,0x82802a18
	if (ctx.cr6.eq) goto loc_82802A18;
	// rlwinm r5,r29,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0xFFFFFFFE;
	// mtctr r24
	ctx.ctr.u64 = ctx.r24.u64;
	// subf r6,r28,r6
	ctx.r6.s64 = ctx.r6.s64 - ctx.r28.s64;
loc_828029B0:
	// lhax r30,r5,r10
	ctx.r30.s64 = int16_t(PPC_LOAD_U16(ctx.r5.u32 + ctx.r10.u32));
	// add r3,r5,r10
	ctx.r3.u64 = ctx.r5.u64 + ctx.r10.u64;
	// add r9,r30,r9
	ctx.r9.u64 = ctx.r30.u64 + ctx.r9.u64;
	// lbzux r8,r6,r28
	ea = ctx.r6.u32 + ctx.r28.u32;
	ctx.r8.u64 = PPC_LOAD_U8(ea);
	ctx.r6.u32 = ea;
	// lbz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r9,r9,8
	ctx.r9.s64 = ctx.r9.s64 + 8;
	// srawi r9,r9,4
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xF) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 4;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// lbzx r8,r9,r20
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r20.u32);
	// lbzx r9,r8,r27
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r8.u32 + ctx.r27.u32);
	// add r31,r31,r9
	ctx.r31.u64 = ctx.r31.u64 + ctx.r9.u64;
	// stb r31,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r31.u8);
	// add r11,r29,r11
	ctx.r11.u64 = ctx.r29.u64 + ctx.r11.u64;
	// lbzx r9,r9,r26
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r26.u32);
	// subf r9,r9,r8
	ctx.r9.s64 = ctx.r8.s64 - ctx.r9.s64;
	// rlwinm r8,r9,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r31,r9
	ctx.r31.u64 = ctx.r9.u64;
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// add r30,r7,r9
	ctx.r30.u64 = ctx.r7.u64 + ctx.r9.u64;
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// sth r30,0(r10)
	PPC_STORE_U16(ctx.r10.u32 + 0, ctx.r30.u16);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// add r7,r4,r9
	ctx.r7.u64 = ctx.r4.u64 + ctx.r9.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// bdnz 0x828029b0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_828029B0;
loc_82802A18:
	// addi r19,r19,1
	ctx.r19.s64 = ctx.r19.s64 + 1;
	// sth r7,0(r10)
	PPC_STORE_U16(ctx.r10.u32 + 0, ctx.r7.u16);
	// addi r25,r25,4
	ctx.r25.s64 = ctx.r25.s64 + 4;
	// cmpw cr6,r19,r23
	ctx.cr6.compare<int32_t>(ctx.r19.s32, ctx.r23.s32, ctx.xer);
	// blt cr6,0x82802930
	if (ctx.cr6.lt) goto loc_82802930;
loc_82802A2C:
	// lbz r11,84(r22)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r22.u32 + 84);
	// addic. r16,r16,-1
	ctx.xer.ca = ctx.r16.u32 > 0;
	ctx.r16.s64 = ctx.r16.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r16.s32, 0, ctx.xer);
	// addi r18,r18,4
	ctx.r18.s64 = ctx.r18.s64 + 4;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// stb r11,84(r22)
	PPC_STORE_U8(ctx.r22.u32 + 84, ctx.r11.u8);
	// bne 0x82802910
	if (!ctx.cr0.eq) goto loc_82802910;
loc_82802A48:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x82fa7698
	__restgprlr_16(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82802A50"))) PPC_WEAK_FUNC(sub_82802A50);
PPC_FUNC_IMPL(__imp__sub_82802A50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x82802A58;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,92(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 92);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r9,100(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 100);
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// lwz r10,424(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 424);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// rlwinm r28,r11,1,0,30
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// ble cr6,0x82802ab4
	if (!ctx.cr6.gt) goto loc_82802AB4;
	// addi r29,r10,64
	ctx.r29.s64 = ctx.r10.s64 + 64;
loc_82802A84:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82802AA0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// stwu r3,4(r29)
	ea = 4 + ctx.r29.u32;
	PPC_STORE_U32(ea, ctx.r3.u32);
	ctx.r29.u32 = ea;
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82802a84
	if (ctx.cr6.lt) goto loc_82802A84;
loc_82802AB4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82802ABC"))) PPC_WEAK_FUNC(sub_82802ABC);
PPC_FUNC_IMPL(__imp__sub_82802ABC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82802AC0"))) PPC_WEAK_FUNC(sub_82802AC0);
PPC_FUNC_IMPL(__imp__sub_82802AC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x82802AC8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,424(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 424);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,76(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 76);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// lwz r10,16(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// stw r10,116(r3)
	PPC_STORE_U32(ctx.r3.u32 + 116, ctx.r10.u32);
	// lwz r10,20(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// stw r10,112(r3)
	PPC_STORE_U32(ctx.r3.u32 + 112, ctx.r10.u32);
	// blt cr6,0x82802be0
	if (ctx.cr6.lt) goto loc_82802BE0;
	// beq cr6,0x82802b88
	if (ctx.cr6.eq) goto loc_82802B88;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// blt cr6,0x82802b1c
	if (ctx.cr6.lt) goto loc_82802B1C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r10,48
	ctx.r10.s64 = 48;
	// stw r10,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82802B18;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82802c04
	goto loc_82802C04;
loc_82802B1C:
	// lis r11,-32128
	ctx.r11.s64 = -2105540608;
	// lwz r10,68(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 68);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r11,r11,10464
	ctx.r11.s64 = ctx.r11.s64 + 10464;
	// addi r29,r30,68
	ctx.r29.s64 = ctx.r30.s64 + 68;
	// stb r9,84(r30)
	PPC_STORE_U8(ctx.r30.u32 + 84, ctx.r9.u8);
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82802b48
	if (!ctx.cr6.eq) goto loc_82802B48;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82802a50
	ctx.lr = 0x82802B48;
	sub_82802A50(ctx, base);
loc_82802B48:
	// lwz r11,92(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r10,100(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// rlwinm r28,r11,1,0,30
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// ble cr6,0x82802c04
	if (!ctx.cr6.gt) goto loc_82802C04;
	// addi r29,r29,-4
	ctx.r29.s64 = ctx.r29.s64 + -4;
loc_82802B68:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwzu r3,4(r29)
	ea = 4 + ctx.r29.u32;
	ctx.r3.u64 = PPC_LOAD_U32(ea);
	ctx.r29.u32 = ea;
	// bl 0x827f7098
	ctx.lr = 0x82802B74;
	sub_827F7098(ctx, base);
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82802b68
	if (ctx.cr6.lt) goto loc_82802B68;
	// b 0x82802c04
	goto loc_82802C04;
loc_82802B88:
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82802ba0
	if (!ctx.cr6.eq) goto loc_82802BA0;
	// lis r11,-32128
	ctx.r11.s64 = -2105540608;
	// addi r11,r11,10240
	ctx.r11.s64 = ctx.r11.s64 + 10240;
	// b 0x82802ba8
	goto loc_82802BA8;
loc_82802BA0:
	// lis r11,-32128
	ctx.r11.s64 = -2105540608;
	// addi r11,r11,10008
	ctx.r11.s64 = ctx.r11.s64 + 10008;
loc_82802BA8:
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// lbz r11,28(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 28);
	// stw r10,48(r30)
	PPC_STORE_U32(ctx.r30.u32 + 48, ctx.r10.u32);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82802bc8
	if (!ctx.cr0.eq) goto loc_82802BC8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82802340
	ctx.lr = 0x82802BC8;
	sub_82802340(ctx, base);
loc_82802BC8:
	// lwz r11,52(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82802c04
	if (!ctx.cr6.eq) goto loc_82802C04;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82802570
	ctx.lr = 0x82802BDC;
	sub_82802570(ctx, base);
	// b 0x82802c04
	goto loc_82802C04;
loc_82802BE0:
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82802bf8
	if (!ctx.cr6.eq) goto loc_82802BF8;
	// lis r11,-32128
	ctx.r11.s64 = -2105540608;
	// addi r11,r11,9872
	ctx.r11.s64 = ctx.r11.s64 + 9872;
	// b 0x82802c00
	goto loc_82802C00;
loc_82802BF8:
	// lis r11,-32128
	ctx.r11.s64 = -2105540608;
	// addi r11,r11,9736
	ctx.r11.s64 = ctx.r11.s64 + 9736;
loc_82802C00:
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
loc_82802C04:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82802C0C"))) PPC_WEAK_FUNC(sub_82802C0C);
PPC_FUNC_IMPL(__imp__sub_82802C0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82802C10"))) PPC_WEAK_FUNC(sub_82802C10);
PPC_FUNC_IMPL(__imp__sub_82802C10) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82802C14"))) PPC_WEAK_FUNC(sub_82802C14);
PPC_FUNC_IMPL(__imp__sub_82802C14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82802C18"))) PPC_WEAK_FUNC(sub_82802C18);
PPC_FUNC_IMPL(__imp__sub_82802C18) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r10,46
	ctx.r10.s64 = 46;
	// stw r10,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82802C34"))) PPC_WEAK_FUNC(sub_82802C34);
PPC_FUNC_IMPL(__imp__sub_82802C34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82802C38"))) PPC_WEAK_FUNC(sub_82802C38);
PPC_FUNC_IMPL(__imp__sub_82802C38) {
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
	// li r5,88
	ctx.r5.s64 = 88;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82802C64;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r10,-32128
	ctx.r10.s64 = -2105540608;
	// stw r3,424(r31)
	PPC_STORE_U32(ctx.r31.u32 + 424, ctx.r3.u32);
	// lis r9,-32128
	ctx.r9.s64 = -2105540608;
	// lis r8,-32128
	ctx.r8.s64 = -2105540608;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r10,10944
	ctx.r10.s64 = ctx.r10.s64 + 10944;
	// addi r9,r9,11280
	ctx.r9.s64 = ctx.r9.s64 + 11280;
	// stw r11,68(r3)
	PPC_STORE_U32(ctx.r3.u32 + 68, ctx.r11.u32);
	// addi r8,r8,11288
	ctx.r8.s64 = ctx.r8.s64 + 11288;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r9,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
	// stw r8,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r8.u32);
	// stw r11,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r11.u32);
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// ble cr6,0x82802cd0
	if (!ctx.cr6.gt) goto loc_82802CD0;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r10,55
	ctx.r10.s64 = 55;
	// li r9,4
	ctx.r9.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r9,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r9.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82802CD0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82802CD0:
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// cmpwi cr6,r11,256
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 256, ctx.xer);
	// ble cr6,0x82802d08
	if (!ctx.cr6.gt) goto loc_82802D08;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r10,57
	ctx.r10.s64 = 57;
	// li r9,256
	ctx.r9.s64 = 256;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stw r9,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r9.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82802D08;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82802D08:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x828021b0
	ctx.lr = 0x82802D10;
	sub_828021B0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82802340
	ctx.lr = 0x82802D18;
	sub_82802340(ctx, base);
	// lwz r11,76(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x82802d2c
	if (!ctx.cr6.eq) goto loc_82802D2C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82802a50
	ctx.lr = 0x82802D2C;
	sub_82802A50(ctx, base);
loc_82802D2C:
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

__attribute__((alias("__imp__sub_82802D40"))) PPC_WEAK_FUNC(sub_82802D40);
PPC_FUNC_IMPL(__imp__sub_82802D40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa766c
	ctx.lr = 0x82802D48;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,320(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 320);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,224(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 224);
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82802e38
	if (!ctx.cr6.lt) goto loc_82802E38;
	// addi r28,r31,12
	ctx.r28.s64 = ctx.r31.s64 + 12;
	// li r27,0
	ctx.r27.s64 = 0;
loc_82802D78:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// bge cr6,0x82802db0
	if (!ctx.cr6.lt) goto loc_82802DB0;
	// lwz r11,324(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 324);
	// li r9,8
	ctx.r9.s64 = 8;
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// addi r7,r31,24
	ctx.r7.s64 = ctx.r31.s64 + 24;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82802DB0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82802DB0:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmplwi cr6,r11,8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8, ctx.xer);
	// bne cr6,0x82802e38
	if (!ctx.cr6.eq) goto loc_82802E38;
	// lwz r11,328(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 328);
	// addi r4,r31,24
	ctx.r4.s64 = ctx.r31.s64 + 24;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82802DD4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lbz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 16);
	// beq 0x82802e1c
	if (ctx.cr0.eq) goto loc_82802E1C;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82802df8
	if (ctx.cr0.eq) goto loc_82802DF8;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// stb r27,16(r31)
	PPC_STORE_U8(ctx.r31.u32 + 16, ctx.r27.u8);
loc_82802DF8:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r27,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r27.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r10,224(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 224);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82802d78
	if (ctx.cr6.lt) goto loc_82802D78;
	// b 0x82802e38
	goto loc_82802E38;
loc_82802E1C:
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82802e38
	if (!ctx.cr0.eq) goto loc_82802E38;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// stb r10,16(r31)
	PPC_STORE_U8(ctx.r31.u32 + 16, ctx.r10.u8);
loc_82802E38:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82fa76bc
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82802E40"))) PPC_WEAK_FUNC(sub_82802E40);
PPC_FUNC_IMPL(__imp__sub_82802E40) {
	PPC_FUNC_PROLOGUE();
	// lbz r10,176(r3)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r3.u32 + 176);
	// lwz r11,320(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 320);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bnelr 
	if (!ctx.cr0.eq) return;
	// stw r4,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r4.u32);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// stb r10,16(r11)
	PPC_STORE_U8(ctx.r11.u32 + 16, ctx.r10.u8);
	// beq cr6,0x82802e84
	if (ctx.cr6.eq) goto loc_82802E84;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r10,4
	ctx.r10.s64 = 4;
	// stw r10,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
loc_82802E84:
	// lis r10,-32128
	ctx.r10.s64 = -2105540608;
	// addi r10,r10,11584
	ctx.r10.s64 = ctx.r10.s64 + 11584;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82802E94"))) PPC_WEAK_FUNC(sub_82802E94);
PPC_FUNC_IMPL(__imp__sub_82802E94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82802E98"))) PPC_WEAK_FUNC(sub_82802E98);
PPC_FUNC_IMPL(__imp__sub_82802E98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x82802EA0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r5,64
	ctx.r5.s64 = 64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82802EC4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32128
	ctx.r11.s64 = -2105540608;
	// stw r3,320(r31)
	PPC_STORE_U32(ctx.r31.u32 + 320, ctx.r3.u32);
	// addi r11,r11,11840
	ctx.r11.s64 = ctx.r11.s64 + 11840;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lbz r11,176(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 176);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82802f64
	if (!ctx.cr0.eq) goto loc_82802F64;
	// clrlwi. r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82802f0c
	if (ctx.cr0.eq) goto loc_82802F0C;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r10,4
	ctx.r10.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82802F08;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82802f64
	goto loc_82802F64;
loc_82802F0C:
	// lwz r10,60(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x82802f64
	if (!ctx.cr6.gt) goto loc_82802F64;
	// addi r30,r11,-72
	ctx.r30.s64 = ctx.r11.s64 + -72;
	// addi r28,r3,20
	ctx.r28.s64 = ctx.r3.s64 + 20;
loc_82802F28:
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r9,100(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 100);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwzu r11,84(r30)
	ea = 84 + ctx.r30.u32;
	ctx.r11.u64 = PPC_LOAD_U32(ea);
	ctx.r30.u32 = ea;
	// rlwinm r5,r9,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r6,r11,3,0,28
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r11,8(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82802F50;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stwu r3,4(r28)
	ea = 4 + ctx.r28.u32;
	PPC_STORE_U32(ea, ctx.r3.u32);
	ctx.r28.u32 = ea;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82802f28
	if (ctx.cr6.lt) goto loc_82802F28;
loc_82802F64:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82802F6C"))) PPC_WEAK_FUNC(sub_82802F6C);
PPC_FUNC_IMPL(__imp__sub_82802F6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82802F70"))) PPC_WEAK_FUNC(sub_82802F70);
PPC_FUNC_IMPL(__imp__sub_82802F70) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,228(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 228);
	// lwz r11,328(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 328);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// ble cr6,0x82802f88
	if (!ctx.cr6.gt) goto loc_82802F88;
	// li r10,1
	ctx.r10.s64 = 1;
	// b 0x82802fac
	goto loc_82802FAC;
loc_82802F88:
	// lwz r10,224(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 224);
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// lwz r10,232(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 232);
	// bge cr6,0x82802fa8
	if (!ctx.cr6.lt) goto loc_82802FA8;
	// lwz r10,12(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// b 0x82802fac
	goto loc_82802FAC;
loc_82802FA8:
	// lwz r10,72(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 72);
loc_82802FAC:
	// stw r10,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r10.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82802FC0"))) PPC_WEAK_FUNC(sub_82802FC0);
PPC_FUNC_IMPL(__imp__sub_82802FC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7640
	ctx.lr = 0x82802FC8;
	__savegprlr_14(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,328(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 328);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// lwz r11,248(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 248);
	// mr r17,r4
	ctx.r17.u64 = ctx.r4.u64;
	// lwz r10,224(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 224);
	// addi r16,r11,-1
	ctx.r16.s64 = ctx.r11.s64 + -1;
	// addi r14,r10,-1
	ctx.r14.s64 = ctx.r10.s64 + -1;
	// lwz r21,16(r30)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// b 0x828031d4
	goto loc_828031D4;
loc_82802FF0:
	// lwz r22,12(r30)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// cmplw cr6,r22,r16
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, ctx.r16.u32, ctx.xer);
	// bgt cr6,0x828031c8
	if (ctx.cr6.gt) goto loc_828031C8;
	// addi r15,r30,24
	ctx.r15.s64 = ctx.r30.s64 + 24;
loc_82803000:
	// lwz r11,228(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 228);
	// li r26,0
	ctx.r26.s64 = 0;
	// li r18,0
	ctx.r18.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8280319c
	if (!ctx.cr6.gt) goto loc_8280319C;
	// rlwinm r19,r21,3,0,28
	ctx.r19.u64 = __builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r20,r27,232
	ctx.r20.s64 = ctx.r27.s64 + 232;
loc_8280301C:
	// lwz r31,0(r20)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r20.u32 + 0);
	// cmplw cr6,r22,r16
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, ctx.r16.u32, ctx.xer);
	// bge cr6,0x82803030
	if (!ctx.cr6.lt) goto loc_82803030;
	// lwz r28,52(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// b 0x82803034
	goto loc_82803034;
loc_82803030:
	// lwz r28,68(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
loc_82803034:
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// mr r25,r19
	ctx.r25.u64 = ctx.r19.u64;
	// lwz r10,56(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// li r24,0
	ctx.r24.s64 = 0;
	// mullw r23,r11,r22
	ctx.r23.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r22.s32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x82803188
	if (!ctx.cr6.gt) goto loc_82803188;
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
loc_82803054:
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmplw cr6,r10,r14
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r14.u32, ctx.xer);
	// blt cr6,0x828030c8
	if (ctx.cr6.lt) goto loc_828030C8;
	// lwz r10,72(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// add r9,r24,r21
	ctx.r9.u64 = ctx.r24.u64 + ctx.r21.u64;
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x828030c8
	if (ctx.cr6.lt) goto loc_828030C8;
	// addi r29,r26,6
	ctx.r29.s64 = ctx.r26.s64 + 6;
	// rlwinm r4,r11,7,0,24
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 7) & 0xFFFFFF80;
	// rlwinm r11,r29,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r30
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// bl 0x827f7098
	ctx.lr = 0x82803084;
	sub_827F7098(ctx, base);
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82803170
	if (!ctx.cr6.gt) goto loc_82803170;
	// addi r11,r26,5
	ctx.r11.s64 = ctx.r26.s64 + 5;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
loc_8280309C:
	// add r11,r29,r10
	ctx.r11.u64 = ctx.r29.u64 + ctx.r10.u64;
	// lwzx r8,r9,r30
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r30.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lhz r8,0(r8)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r8.u32 + 0);
	// lwzx r11,r11,r30
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// sth r8,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r8.u16);
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8280309c
	if (ctx.cr6.lt) goto loc_8280309C;
	// b 0x82803170
	goto loc_82803170;
loc_828030C8:
	// lwz r11,344(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 344);
	// addi r29,r26,6
	ctx.r29.s64 = ctx.r26.s64 + 6;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r9,r28
	ctx.r9.u64 = ctx.r28.u64;
	// rlwinm r6,r29,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r8,r23
	ctx.r8.u64 = ctx.r23.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwzx r6,r6,r30
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r30.u32);
	// lwzx r5,r10,r17
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r17.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82803104;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x82803170
	if (!ctx.cr6.lt) goto loc_82803170;
	// add r10,r28,r26
	ctx.r10.u64 = ctx.r28.u64 + ctx.r26.u64;
	// subf r11,r28,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r28.s64;
	// addi r10,r10,6
	ctx.r10.s64 = ctx.r10.s64 + 6;
	// rlwinm r4,r11,7,0,24
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 7) & 0xFFFFFF80;
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r11,r30
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// bl 0x827f7098
	ctx.lr = 0x8280312C;
	sub_827F7098(ctx, base);
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x82803170
	if (!ctx.cr6.lt) goto loc_82803170;
	// addi r9,r26,5
	ctx.r9.s64 = ctx.r26.s64 + 5;
loc_82803140:
	// add r11,r9,r10
	ctx.r11.u64 = ctx.r9.u64 + ctx.r10.u64;
	// add r8,r29,r10
	ctx.r8.u64 = ctx.r29.u64 + ctx.r10.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// lwzx r11,r11,r30
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// lwzx r8,r8,r30
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r30.u32);
	// lhz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// sth r11,0(r8)
	PPC_STORE_U16(ctx.r8.u32 + 0, ctx.r11.u16);
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82803140
	if (ctx.cr6.lt) goto loc_82803140;
loc_82803170:
	// lwz r10,56(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// addi r24,r24,1
	ctx.r24.s64 = ctx.r24.s64 + 1;
	// add r26,r11,r26
	ctx.r26.u64 = ctx.r11.u64 + ctx.r26.u64;
	// addi r25,r25,8
	ctx.r25.s64 = ctx.r25.s64 + 8;
	// cmpw cr6,r24,r10
	ctx.cr6.compare<int32_t>(ctx.r24.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82803054
	if (ctx.cr6.lt) goto loc_82803054;
loc_82803188:
	// lwz r11,228(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 228);
	// addi r18,r18,1
	ctx.r18.s64 = ctx.r18.s64 + 1;
	// addi r20,r20,4
	ctx.r20.s64 = ctx.r20.s64 + 4;
	// cmpw cr6,r18,r11
	ctx.cr6.compare<int32_t>(ctx.r18.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8280301c
	if (ctx.cr6.lt) goto loc_8280301C;
loc_8280319C:
	// lwz r11,348(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 348);
	// mr r4,r15
	ctx.r4.u64 = ctx.r15.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828031B4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82803200
	if (ctx.cr0.eq) goto loc_82803200;
	// addi r22,r22,1
	ctx.r22.s64 = ctx.r22.s64 + 1;
	// cmplw cr6,r22,r16
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, ctx.r16.u32, ctx.xer);
	// ble cr6,0x82803000
	if (!ctx.cr6.gt) goto loc_82803000;
loc_828031C8:
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r21,r21,1
	ctx.r21.s64 = ctx.r21.s64 + 1;
	// stw r11,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r11.u32);
loc_828031D4:
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// cmpw cr6,r21,r11
	ctx.cr6.compare<int32_t>(ctx.r21.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82802ff0
	if (ctx.cr6.lt) goto loc_82802FF0;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// bl 0x82802f70
	ctx.lr = 0x828031F4;
	sub_82802F70(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
loc_828031F8:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x82fa7690
	__restgprlr_14(ctx, base);
	return;
loc_82803200:
	// stw r21,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r21.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r22,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r22.u32);
	// b 0x828031f8
	goto loc_828031F8;
}

__attribute__((alias("__imp__sub_82803210"))) PPC_WEAK_FUNC(sub_82803210);
PPC_FUNC_IMPL(__imp__sub_82803210) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7664
	ctx.lr = 0x82803218;
	__savegprlr_23(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,228(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 228);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lwz r27,328(r3)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r3.u32 + 328);
	// li r31,0
	ctx.r31.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82803290
	if (!ctx.cr6.gt) goto loc_82803290;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r30,r3,228
	ctx.r30.s64 = ctx.r3.s64 + 228;
	// addi r29,r11,-4
	ctx.r29.s64 = ctx.r11.s64 + -4;
loc_82803240:
	// lwzu r11,4(r30)
	ea = 4 + ctx.r30.u32;
	ctx.r11.u64 = PPC_LOAD_U32(ea);
	ctx.r30.u32 = ea;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r9,4(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r8,8(r27)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,32(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 32);
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// mullw r5,r8,r11
	ctx.r5.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r11.s32);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// lwzx r4,r10,r27
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r27.u32);
	// bctrl 
	ctx.lr = 0x8280327C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,228(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 228);
	// stwu r3,4(r29)
	ea = 4 + ctx.r29.u32;
	PPC_STORE_U32(ea, ctx.r3.u32);
	ctx.r29.u32 = ea;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82803240
	if (ctx.cr6.lt) goto loc_82803240;
loc_82803290:
	// lwz r24,16(r27)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// lwz r11,20(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 20);
	// cmpw cr6,r24,r11
	ctx.cr6.compare<int32_t>(ctx.r24.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x828033b0
	if (!ctx.cr6.lt) goto loc_828033B0;
	// rlwinm r25,r24,2,0,29
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 2) & 0xFFFFFFFC;
loc_828032A4:
	// lwz r29,12(r27)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// lwz r11,248(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 248);
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82803394
	if (!ctx.cr6.lt) goto loc_82803394;
	// addi r23,r27,24
	ctx.r23.s64 = ctx.r27.s64 + 24;
loc_828032B8:
	// lwz r11,228(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 228);
	// li r30,0
	ctx.r30.s64 = 0;
	// li r26,0
	ctx.r26.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82803364
	if (!ctx.cr6.gt) goto loc_82803364;
	// addi r31,r1,80
	ctx.r31.s64 = ctx.r1.s64 + 80;
	// addi r3,r28,232
	ctx.r3.s64 = ctx.r28.s64 + 232;
loc_828032D4:
	// lwz r7,0(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,52(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 52);
	// lwz r9,56(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 56);
	// mullw r10,r11,r29
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r29.s32);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x8280334c
	if (!ctx.cr6.gt) goto loc_8280334C;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r5,r10,7,0,24
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 7) & 0xFFFFFF80;
	// add r6,r25,r9
	ctx.r6.u64 = ctx.r25.u64 + ctx.r9.u64;
loc_828032FC:
	// lwz r9,0(r6)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// add r9,r9,r5
	ctx.r9.u64 = ctx.r9.u64 + ctx.r5.u64;
	// ble cr6,0x82803338
	if (!ctx.cr6.gt) goto loc_82803338;
	// addi r11,r30,5
	ctx.r11.s64 = ctx.r30.s64 + 5;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r8,r11,r27
	ctx.r8.u64 = ctx.r11.u64 + ctx.r27.u64;
loc_8280331C:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwu r9,4(r8)
	ea = 4 + ctx.r8.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r8.u32 = ea;
	// lwz r11,52(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 52);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r9,r9,128
	ctx.r9.s64 = ctx.r9.s64 + 128;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8280331c
	if (ctx.cr6.lt) goto loc_8280331C;
loc_82803338:
	// lwz r10,56(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 56);
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// cmpw cr6,r4,r10
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x828032fc
	if (ctx.cr6.lt) goto loc_828032FC;
loc_8280334C:
	// lwz r11,228(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 228);
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmpw cr6,r26,r11
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x828032d4
	if (ctx.cr6.lt) goto loc_828032D4;
loc_82803364:
	// lwz r11,348(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 348);
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8280337C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x828033d0
	if (ctx.cr0.eq) goto loc_828033D0;
	// lwz r11,248(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 248);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x828032b8
	if (ctx.cr6.lt) goto loc_828032B8;
loc_82803394:
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r24,r24,1
	ctx.r24.s64 = ctx.r24.s64 + 1;
	// stw r11,12(r27)
	PPC_STORE_U32(ctx.r27.u32 + 12, ctx.r11.u32);
	// addi r25,r25,4
	ctx.r25.s64 = ctx.r25.s64 + 4;
	// lwz r11,20(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 20);
	// cmpw cr6,r24,r11
	ctx.cr6.compare<int32_t>(ctx.r24.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x828032a4
	if (ctx.cr6.lt) goto loc_828032A4;
loc_828033B0:
	// lwz r11,8(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,8(r27)
	PPC_STORE_U32(ctx.r27.u32 + 8, ctx.r11.u32);
	// bl 0x82802f70
	ctx.lr = 0x828033C4;
	sub_82802F70(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
loc_828033C8:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82fa76b4
	__restgprlr_23(ctx, base);
	return;
loc_828033D0:
	// stw r24,16(r27)
	PPC_STORE_U32(ctx.r27.u32 + 16, ctx.r24.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r29,12(r27)
	PPC_STORE_U32(ctx.r27.u32 + 12, ctx.r29.u32);
	// b 0x828033c8
	goto loc_828033C8;
}

__attribute__((alias("__imp__sub_828033E0"))) PPC_WEAK_FUNC(sub_828033E0);
PPC_FUNC_IMPL(__imp__sub_828033E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7648
	ctx.lr = 0x828033E8;
	__savegprlr_16(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,224(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 224);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// lwz r10,60(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// mr r16,r4
	ctx.r16.u64 = ctx.r4.u64;
	// lwz r20,328(r3)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r3.u32 + 328);
	// li r18,0
	ctx.r18.s64 = 0;
	// lwz r25,68(r3)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	// addi r17,r11,-1
	ctx.r17.s64 = ctx.r11.s64 + -1;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x828035e4
	if (!ctx.cr6.gt) goto loc_828035E4;
	// mr r21,r4
	ctx.r21.u64 = ctx.r4.u64;
	// addi r19,r20,64
	ctx.r19.s64 = ctx.r20.s64 + 64;
loc_8280341C:
	// lwz r11,4(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 4);
	// li r7,1
	ctx.r7.s64 = 1;
	// lwz r10,12(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 12);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lwz r9,8(r20)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r20.u32 + 8);
	// mr r6,r10
	ctx.r6.u64 = ctx.r10.u64;
	// lwz r4,0(r19)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r19.u32 + 0);
	// mullw r5,r10,r9
	ctx.r5.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r9.s32);
	// lwz r11,32(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82803448;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,8(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 8);
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// cmplw cr6,r11,r17
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r17.u32, ctx.xer);
	// bge cr6,0x82803460
	if (!ctx.cr6.lt) goto loc_82803460;
	// lwz r28,12(r25)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r25.u32 + 12);
	// b 0x82803480
	goto loc_82803480;
loc_82803460:
	// lwz r11,12(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 12);
	// lwz r10,32(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 32);
	// twllei r11,0
	if (ctx.r11.u32 <= 0) __builtin_debugtrap();
	// divwu r9,r10,r11
	ctx.r9.u32 = ctx.r10.u32 / ctx.r11.u32;
	// mullw r9,r9,r11
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r11.s32);
	// subf. r28,r9,r10
	ctx.r28.s64 = ctx.r10.s64 - ctx.r9.s64;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// bne 0x82803480
	if (!ctx.cr0.eq) goto loc_82803480;
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
loc_82803480:
	// lwz r23,8(r25)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r25.u32 + 8);
	// lwz r29,28(r25)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r25.u32 + 28);
	// twllei r23,0
	if (ctx.r23.u32 <= 0) __builtin_debugtrap();
	// divwu r11,r29,r23
	ctx.r11.u32 = ctx.r29.u32 / ctx.r23.u32;
	// mullw r11,r11,r23
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r23.s32);
	// subf. r31,r11,r29
	ctx.r31.s64 = ctx.r29.s64 - ctx.r11.s64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// ble 0x828034a0
	if (!ctx.cr0.gt) goto loc_828034A0;
	// subf r31,r31,r23
	ctx.r31.s64 = ctx.r23.s64 - ctx.r31.s64;
loc_828034A0:
	// li r27,0
	ctx.r27.s64 = 0;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// ble cr6,0x82803528
	if (!ctx.cr6.gt) goto loc_82803528;
	// mr r26,r22
	ctx.r26.u64 = ctx.r22.u64;
loc_828034B0:
	// lwz r11,344(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 344);
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
	// lwz r30,0(r26)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// li r8,0
	ctx.r8.s64 = 0;
	// rlwinm r7,r27,3,0,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r5,0(r21)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828034E0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// ble cr6,0x82803518
	if (!ctx.cr6.gt) goto loc_82803518;
	// rlwinm r11,r29,7,0,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 7) & 0xFFFFFF80;
	// rlwinm r4,r31,7,0,24
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 7) & 0xFFFFFF80;
	// add r30,r11,r30
	ctx.r30.u64 = ctx.r11.u64 + ctx.r30.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x827f7098
	ctx.lr = 0x828034FC;
	sub_827F7098(ctx, base);
	// lhz r10,-128(r30)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r30.u32 + -128);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// ble cr6,0x82803518
	if (!ctx.cr6.gt) goto loc_82803518;
	// addi r11,r30,-128
	ctx.r11.s64 = ctx.r30.s64 + -128;
	// mtctr r31
	ctx.ctr.u64 = ctx.r31.u64;
loc_82803510:
	// sthu r10,128(r11)
	ea = 128 + ctx.r11.u32;
	PPC_STORE_U16(ea, ctx.r10.u16);
	ctx.r11.u32 = ea;
	// bdnz 0x82803510
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82803510;
loc_82803518:
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r26,r26,4
	ctx.r26.s64 = ctx.r26.s64 + 4;
	// cmpw cr6,r27,r28
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r28.s32, ctx.xer);
	// blt cr6,0x828034b0
	if (ctx.cr6.lt) goto loc_828034B0;
loc_82803528:
	// lwz r11,8(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 8);
	// cmplw cr6,r11,r17
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r17.u32, ctx.xer);
	// bne cr6,0x828035c8
	if (!ctx.cr6.eq) goto loc_828035C8;
	// lwz r10,12(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 12);
	// add r11,r31,r29
	ctx.r11.u64 = ctx.r31.u64 + ctx.r29.u64;
	// mr r26,r28
	ctx.r26.u64 = ctx.r28.u64;
	// divwu r27,r11,r23
	ctx.r27.u32 = ctx.r11.u32 / ctx.r23.u32;
	// twllei r23,0
	if (ctx.r23.u32 <= 0) __builtin_debugtrap();
	// cmpw cr6,r28,r10
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x828035c8
	if (!ctx.cr6.lt) goto loc_828035C8;
	// rlwinm r10,r28,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r28,r11,7,0,24
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 7) & 0xFFFFFF80;
	// add r29,r10,r22
	ctx.r29.u64 = ctx.r10.u64 + ctx.r22.u64;
loc_8280355C:
	// lwz r31,0(r29)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r30,-4(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + -4);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x827f7098
	ctx.lr = 0x82803570;
	sub_827F7098(ctx, base);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x828035b4
	if (ctx.cr6.eq) goto loc_828035B4;
	// rlwinm r11,r23,7,0,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 7) & 0xFFFFFF80;
	// subf r8,r31,r30
	ctx.r8.s64 = ctx.r30.s64 - ctx.r31.s64;
	// addi r7,r11,-128
	ctx.r7.s64 = ctx.r11.s64 + -128;
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
loc_82803588:
	// add r9,r8,r7
	ctx.r9.u64 = ctx.r8.u64 + ctx.r7.u64;
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// lhzx r6,r9,r31
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r9.u32 + ctx.r31.u32);
	// ble cr6,0x828035a8
	if (!ctx.cr6.gt) goto loc_828035A8;
	// addi r9,r31,-128
	ctx.r9.s64 = ctx.r31.s64 + -128;
	// mtctr r23
	ctx.ctr.u64 = ctx.r23.u64;
loc_828035A0:
	// sthu r6,128(r9)
	ea = 128 + ctx.r9.u32;
	PPC_STORE_U16(ea, ctx.r6.u16);
	ctx.r9.u32 = ea;
	// bdnz 0x828035a0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_828035A0;
loc_828035A8:
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// add r31,r11,r31
	ctx.r31.u64 = ctx.r11.u64 + ctx.r31.u64;
	// bne 0x82803588
	if (!ctx.cr0.eq) goto loc_82803588;
loc_828035B4:
	// lwz r11,12(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 12);
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmpw cr6,r26,r11
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8280355c
	if (ctx.cr6.lt) goto loc_8280355C;
loc_828035C8:
	// lwz r11,60(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 60);
	// addi r18,r18,1
	ctx.r18.s64 = ctx.r18.s64 + 1;
	// addi r19,r19,4
	ctx.r19.s64 = ctx.r19.s64 + 4;
	// addi r21,r21,4
	ctx.r21.s64 = ctx.r21.s64 + 4;
	// addi r25,r25,84
	ctx.r25.s64 = ctx.r25.s64 + 84;
	// cmpw cr6,r18,r11
	ctx.cr6.compare<int32_t>(ctx.r18.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8280341c
	if (ctx.cr6.lt) goto loc_8280341C;
loc_828035E4:
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82803210
	ctx.lr = 0x828035F0;
	sub_82803210(ctx, base);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x82fa7698
	__restgprlr_16(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828035F8"))) PPC_WEAK_FUNC(sub_828035F8);
PPC_FUNC_IMPL(__imp__sub_828035F8) {
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
	// lwz r31,328(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 328);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// bl 0x82802f70
	ctx.lr = 0x82803618;
	sub_82802F70(ctx, base);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x828036b8
	if (ctx.cr6.eq) goto loc_828036B8;
	// cmpwi cr6,r4,2
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 2, ctx.xer);
	// beq cr6,0x82803684
	if (ctx.cr6.eq) goto loc_82803684;
	// cmpwi cr6,r4,3
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 3, ctx.xer);
	// beq cr6,0x82803650
	if (ctx.cr6.eq) goto loc_82803650;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r10,4
	ctx.r10.s64 = 4;
	// stw r10,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8280364C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x828036ec
	goto loc_828036EC;
loc_82803650:
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82803678
	if (!ctx.cr6.eq) goto loc_82803678;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r10,4
	ctx.r10.s64 = 4;
	// stw r10,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82803678;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82803678:
	// lis r11,-32128
	ctx.r11.s64 = -2105540608;
	// addi r11,r11,13280
	ctx.r11.s64 = ctx.r11.s64 + 13280;
	// b 0x828036e8
	goto loc_828036E8;
loc_82803684:
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x828036ac
	if (!ctx.cr6.eq) goto loc_828036AC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r10,4
	ctx.r10.s64 = 4;
	// stw r10,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828036AC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_828036AC:
	// lis r11,-32128
	ctx.r11.s64 = -2105540608;
	// addi r11,r11,12816
	ctx.r11.s64 = ctx.r11.s64 + 12816;
	// b 0x828036e8
	goto loc_828036E8;
loc_828036B8:
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x828036e0
	if (ctx.cr6.eq) goto loc_828036E0;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r10,4
	ctx.r10.s64 = 4;
	// stw r10,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828036E0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_828036E0:
	// lis r11,-32128
	ctx.r11.s64 = -2105540608;
	// addi r11,r11,12224
	ctx.r11.s64 = ctx.r11.s64 + 12224;
loc_828036E8:
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
loc_828036EC:
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

__attribute__((alias("__imp__sub_82803700"))) PPC_WEAK_FUNC(sub_82803700);
PPC_FUNC_IMPL(__imp__sub_82803700) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7664
	ctx.lr = 0x82803708;
	__savegprlr_23(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r5,104
	ctx.r5.s64 = 104;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8280372C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32128
	ctx.r11.s64 = -2105540608;
	// stw r3,328(r31)
	PPC_STORE_U32(ctx.r31.u32 + 328, ctx.r3.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// addi r11,r11,13816
	ctx.r11.s64 = ctx.r11.s64 + 13816;
	// clrlwi. r10,r30,24
	ctx.r10.u64 = ctx.r30.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// beq 0x828037cc
	if (ctx.cr0.eq) goto loc_828037CC;
	// lwz r10,60(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x8280380c
	if (!ctx.cr6.gt) goto loc_8280380C;
	// addi r30,r11,-52
	ctx.r30.s64 = ctx.r11.s64 + -52;
	// addi r28,r28,60
	ctx.r28.s64 = ctx.r28.s64 + 60;
loc_82803764:
	// lwz r26,64(r30)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r30.u32 + 64);
	// lwz r25,80(r30)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r30.u32 + 80);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// lwz r24,60(r30)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r30.u32 + 60);
	// lwzu r3,84(r30)
	ea = 84 + ctx.r30.u32;
	ctx.r3.u64 = PPC_LOAD_U32(ea);
	ctx.r30.u32 = ea;
	// lwz r27,4(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x827f6ff8
	ctx.lr = 0x82803780;
	sub_827F6FF8(ctx, base);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x827f6ff8
	ctx.lr = 0x82803790;
	sub_827F6FF8(ctx, base);
	// lwz r11,20(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 20);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r7,r23
	ctx.r7.u64 = ctx.r23.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// mr r8,r26
	ctx.r8.u64 = ctx.r26.u64;
	// bctrl 
	ctx.lr = 0x828037B4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// stwu r3,4(r28)
	ea = 4 + ctx.r28.u32;
	PPC_STORE_U32(ea, ctx.r3.u32);
	ctx.r28.u32 = ea;
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82803764
	if (ctx.cr6.lt) goto loc_82803764;
	// b 0x8280380c
	goto loc_8280380C;
loc_828037CC:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r5,1280
	ctx.r5.s64 = 1280;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828037E8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r10,10
	ctx.r10.s64 = 10;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r9,r28,20
	ctx.r9.s64 = ctx.r28.s64 + 20;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_828037F8:
	// stwu r11,4(r9)
	ea = 4 + ctx.r9.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r9.u32 = ea;
	// addi r11,r11,128
	ctx.r11.s64 = ctx.r11.s64 + 128;
	// bdnz 0x828037f8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_828037F8;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,64(r28)
	PPC_STORE_U32(ctx.r28.u32 + 64, ctx.r11.u32);
loc_8280380C:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82fa76b4
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82803814"))) PPC_WEAK_FUNC(sub_82803814);
PPC_FUNC_IMPL(__imp__sub_82803814) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82803818"))) PPC_WEAK_FUNC(sub_82803818);
PPC_FUNC_IMPL(__imp__sub_82803818) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7668
	ctx.lr = 0x82803820;
	__savegprlr_24(ctx, base);
	// stfd f30,-88(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -88, ctx.f30.u64);
	// stfd f31,-80(r1)
	PPC_STORE_U64(ctx.r1.u32 + -80, ctx.f31.u64);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,60(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lwz r29,344(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 344);
	// li r24,0
	ctx.r24.s64 = 0;
	// lwz r11,68(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x82803a84
	if (!ctx.cr6.gt) goto loc_82803A84;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// addi r25,r11,16
	ctx.r25.s64 = ctx.r11.s64 + 16;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lfd f30,22528(r9)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r9.u32 + 22528);
	// addi r27,r11,32480
	ctx.r27.s64 = ctx.r11.s64 + 32480;
	// lfd f31,32544(r8)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r8.u32 + 32544);
	// addi r26,r10,32352
	ctx.r26.s64 = ctx.r10.s64 + 32352;
loc_8280386C:
	// lwz r31,0(r25)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt cr6,0x82803894
	if (ctx.cr6.lt) goto loc_82803894;
	// cmpwi cr6,r31,4
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 4, ctx.xer);
	// bge cr6,0x82803894
	if (!ctx.cr6.lt) goto loc_82803894;
	// addi r11,r31,18
	ctx.r11.s64 = ctx.r31.s64 + 18;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r11,r28
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r28.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x828038bc
	if (!ctx.cr6.eq) goto loc_828038BC;
loc_82803894:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// li r10,52
	ctx.r10.s64 = 52;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r10,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// stw r31,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r31.u32);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828038BC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_828038BC:
	// addi r10,r31,18
	ctx.r10.s64 = ctx.r31.s64 + 18;
	// lwz r11,184(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 184);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// lwzx r30,r10,r28
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r28.u32);
	// blt cr6,0x82803a18
	if (ctx.cr6.lt) goto loc_82803A18;
	// beq cr6,0x828039a8
	if (ctx.cr6.eq) goto loc_828039A8;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// blt cr6,0x82803904
	if (ctx.cr6.lt) goto loc_82803904;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// li r10,48
	ctx.r10.s64 = 48;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r10,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82803900;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82803a70
	goto loc_82803A70;
loc_82803904:
	// addi r11,r31,8
	ctx.r11.s64 = ctx.r31.s64 + 8;
	// rlwinm r31,r11,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r31,r29
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r29.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82803938
	if (!ctx.cr6.eq) goto loc_82803938;
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// li r5,256
	ctx.r5.s64 = 256;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82803934;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stwx r3,r31,r29
	PPC_STORE_U32(ctx.r31.u32 + ctx.r29.u32, ctx.r3.u32);
loc_82803938:
	// lwzx r11,r31,r29
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r29.u32);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
loc_82803944:
	// li r6,8
	ctx.r6.s64 = 8;
	// addi r7,r11,-4
	ctx.r7.s64 = ctx.r11.s64 + -4;
	// addi r9,r10,-2
	ctx.r9.s64 = ctx.r10.s64 + -2;
	// addi r8,r27,-8
	ctx.r8.s64 = ctx.r27.s64 + -8;
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// addi r10,r10,16
	ctx.r10.s64 = ctx.r10.s64 + 16;
loc_82803960:
	// lhzu r6,2(r9)
	ea = 2 + ctx.r9.u32;
	ctx.r6.u64 = PPC_LOAD_U16(ea);
	ctx.r9.u32 = ea;
	// lfd f13,0(r5)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r5.u32 + 0);
	// lfdu f0,8(r8)
	ea = 8 + ctx.r8.u32;
	ctx.r0.u64 = PPC_LOAD_U64(ea);
	ctx.r8.u32 = ea;
	// std r6,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r6.u64);
	// lfd f12,80(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// fmul f13,f12,f13
	ctx.f13.f64 = ctx.f12.f64 * ctx.f13.f64;
	// fmul f0,f13,f0
	ctx.f0.f64 = ctx.f13.f64 * ctx.f0.f64;
	// fmul f0,f0,f31
	ctx.f0.f64 = ctx.f0.f64 * ctx.f31.f64;
	// fdiv f0,f30,f0
	ctx.f0.f64 = ctx.f30.f64 / ctx.f0.f64;
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// stfsu f0,4(r7)
	temp.f32 = float(ctx.f0.f64);
	ea = 4 + ctx.r7.u32;
	PPC_STORE_U32(ea, temp.u32);
	ctx.r7.u32 = ea;
	// bdnz 0x82803960
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82803960;
	// addi r5,r5,8
	ctx.r5.s64 = ctx.r5.s64 + 8;
	// addi r9,r27,64
	ctx.r9.s64 = ctx.r27.s64 + 64;
	// cmpw cr6,r5,r9
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r9.s32, ctx.xer);
	// blt cr6,0x82803944
	if (ctx.cr6.lt) goto loc_82803944;
	// b 0x82803a70
	goto loc_82803A70;
loc_828039A8:
	// addi r11,r31,3
	ctx.r11.s64 = ctx.r31.s64 + 3;
	// rlwinm r31,r11,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r31,r29
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r29.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x828039dc
	if (!ctx.cr6.eq) goto loc_828039DC;
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// li r5,256
	ctx.r5.s64 = 256;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828039D8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stwx r3,r31,r29
	PPC_STORE_U32(ctx.r31.u32 + ctx.r29.u32, ctx.r3.u32);
loc_828039DC:
	// li r9,64
	ctx.r9.s64 = 64;
	// lwzx r10,r31,r29
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r29.u32);
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// subf r8,r26,r30
	ctx.r8.s64 = ctx.r30.s64 - ctx.r26.s64;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_828039F4:
	// lha r9,0(r11)
	ctx.r9.s64 = int16_t(PPC_LOAD_U16(ctx.r11.u32 + 0));
	// lhzx r7,r8,r11
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r8.u32 + ctx.r11.u32);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// mullw r9,r7,r9
	ctx.r9.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r9.s32);
	// addi r9,r9,1024
	ctx.r9.s64 = ctx.r9.s64 + 1024;
	// srawi r9,r9,11
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7FF) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 11;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x828039f4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_828039F4;
	// b 0x82803a70
	goto loc_82803A70;
loc_82803A18:
	// addi r11,r31,3
	ctx.r11.s64 = ctx.r31.s64 + 3;
	// rlwinm r31,r11,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r11,r31,r29
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r29.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82803a4c
	if (!ctx.cr6.eq) goto loc_82803A4C;
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// li r5,256
	ctx.r5.s64 = 256;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82803A48;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stwx r3,r31,r29
	PPC_STORE_U32(ctx.r31.u32 + ctx.r29.u32, ctx.r3.u32);
loc_82803A4C:
	// li r11,64
	ctx.r11.s64 = 64;
	// lwzx r10,r31,r29
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r29.u32);
	// addi r9,r30,-2
	ctx.r9.s64 = ctx.r30.s64 + -2;
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_82803A60:
	// lhzu r11,2(r9)
	ea = 2 + ctx.r9.u32;
	ctx.r11.u64 = PPC_LOAD_U16(ea);
	ctx.r9.u32 = ea;
	// rotlwi r11,r11,3
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 3);
	// stwu r11,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x82803a60
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82803A60;
loc_82803A70:
	// lwz r11,60(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 60);
	// addi r24,r24,1
	ctx.r24.s64 = ctx.r24.s64 + 1;
	// addi r25,r25,84
	ctx.r25.s64 = ctx.r25.s64 + 84;
	// cmpw cr6,r24,r11
	ctx.cr6.compare<int32_t>(ctx.r24.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8280386c
	if (ctx.cr6.lt) goto loc_8280386C;
loc_82803A84:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// lfd f30,-88(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -88);
	// lfd f31,-80(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// b 0x82fa76b8
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82803A94"))) PPC_WEAK_FUNC(sub_82803A94);
PPC_FUNC_IMPL(__imp__sub_82803A94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82803A98"))) PPC_WEAK_FUNC(sub_82803A98);
PPC_FUNC_IMPL(__imp__sub_82803A98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7670
	ctx.lr = 0x82803AA0;
	__savegprlr_26(ctx, base);
	// stwu r1,-400(r1)
	ea = -400 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,16(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// mr r31,r8
	ctx.r31.u64 = ctx.r8.u64;
	// lwz r8,344(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 344);
	// rlwinm r10,r7,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 + 3;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r26,r10,r5
	ctx.r26.u64 = ctx.r10.u64 + ctx.r5.u64;
	// lwz r27,8(r8)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// lwzx r11,r11,r8
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// beq cr6,0x82803c10
	if (ctx.cr6.eq) goto loc_82803C10;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// subf r28,r10,r11
	ctx.r28.s64 = ctx.r11.s64 - ctx.r10.s64;
	// mr r29,r9
	ctx.r29.u64 = ctx.r9.u64;
loc_82803AE0:
	// li r10,8
	ctx.r10.s64 = 8;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r8,r26,-4
	ctx.r8.s64 = ctx.r26.s64 + -4;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82803AF0:
	// lwzu r9,4(r8)
	ea = 4 + ctx.r8.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r8.u32 = ea;
	// add r10,r9,r31
	ctx.r10.u64 = ctx.r9.u64 + ctx.r31.u64;
	// lbzx r9,r9,r31
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r31.u32);
	// addi r9,r9,-128
	ctx.r9.s64 = ctx.r9.s64 + -128;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// lbzu r9,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// addi r9,r9,-128
	ctx.r9.s64 = ctx.r9.s64 + -128;
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// lbzu r9,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// addi r9,r9,-128
	ctx.r9.s64 = ctx.r9.s64 + -128;
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// lbzu r9,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// addi r9,r9,-128
	ctx.r9.s64 = ctx.r9.s64 + -128;
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// lbzu r9,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// addi r9,r9,-128
	ctx.r9.s64 = ctx.r9.s64 + -128;
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// lbzu r9,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// addi r9,r9,-128
	ctx.r9.s64 = ctx.r9.s64 + -128;
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// lbzu r9,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// addi r9,r9,-128
	ctx.r9.s64 = ctx.r9.s64 + -128;
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// lbz r10,1(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 1);
	// addi r10,r10,-128
	ctx.r10.s64 = ctx.r10.s64 + -128;
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x82803af0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82803AF0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mtctr r27
	ctx.ctr.u64 = ctx.r27.u64;
	// bctrl 
	ctx.lr = 0x82803B6C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,64
	ctx.r11.s64 = 64;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_82803B7C:
	// lwz r10,0(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// lwzx r11,r28,r8
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r8.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// srawi r9,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 1;
	// bge cr6,0x82803bc4
	if (!ctx.cr6.lt) goto loc_82803BC4;
	// subf r10,r10,r9
	ctx.r10.s64 = ctx.r9.s64 - ctx.r10.s64;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82803bb8
	if (ctx.cr6.lt) goto loc_82803BB8;
	// rotlwi r9,r10,1
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// divw r10,r10,r11
	ctx.r10.s32 = ctx.r10.s32 / ctx.r11.s32;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// twllei r11,0
	if (ctx.r11.u32 <= 0) __builtin_debugtrap();
	// andc r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 & ~ctx.r9.u64;
	// twlgei r11,-1
	if (ctx.r11.u32 >= 4294967295) __builtin_debugtrap();
	// b 0x82803bbc
	goto loc_82803BBC;
loc_82803BB8:
	// li r10,0
	ctx.r10.s64 = 0;
loc_82803BBC:
	// neg r10,r10
	ctx.r10.s64 = -ctx.r10.s64;
	// b 0x82803bf0
	goto loc_82803BF0;
loc_82803BC4:
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82803bec
	if (ctx.cr6.lt) goto loc_82803BEC;
	// rotlwi r9,r10,1
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// divw r10,r10,r11
	ctx.r10.s32 = ctx.r10.s32 / ctx.r11.s32;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// twllei r11,0
	if (ctx.r11.u32 <= 0) __builtin_debugtrap();
	// andc r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 & ~ctx.r9.u64;
	// twlgei r11,-1
	if (ctx.r11.u32 >= 4294967295) __builtin_debugtrap();
	// b 0x82803bf0
	goto loc_82803BF0;
loc_82803BEC:
	// li r10,0
	ctx.r10.s64 = 0;
loc_82803BF0:
	// sth r10,0(r7)
	PPC_STORE_U16(ctx.r7.u32 + 0, ctx.r10.u16);
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// addi r7,r7,2
	ctx.r7.s64 = ctx.r7.s64 + 2;
	// bdnz 0x82803b7c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82803B7C;
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// bne 0x82803ae0
	if (!ctx.cr0.eq) goto loc_82803AE0;
loc_82803C10:
	// addi r1,r1,400
	ctx.r1.s64 = ctx.r1.s64 + 400;
	// b 0x82fa76c0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82803C18"))) PPC_WEAK_FUNC(sub_82803C18);
PPC_FUNC_IMPL(__imp__sub_82803C18) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7670
	ctx.lr = 0x82803C20;
	__savegprlr_26(ctx, base);
	// stfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f31.u64);
	// stwu r1,-480(r1)
	ea = -480 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,16(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// mr r31,r8
	ctx.r31.u64 = ctx.r8.u64;
	// lwz r8,344(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 344);
	// rlwinm r10,r7,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r26,r10,r5
	ctx.r26.u64 = ctx.r10.u64 + ctx.r5.u64;
	// lwz r27,28(r8)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r8.u32 + 28);
	// lwzx r11,r11,r8
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// beq cr6,0x82803de8
	if (ctx.cr6.eq) goto loc_82803DE8;
	// addi r10,r1,160
	ctx.r10.s64 = ctx.r1.s64 + 160;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// subf r28,r10,r11
	ctx.r28.s64 = ctx.r11.s64 - ctx.r10.s64;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r29,r9
	ctx.r29.u64 = ctx.r9.u64;
	// lfs f31,32552(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 32552);
	ctx.f31.f64 = double(temp.f32);
loc_82803C6C:
	// li r10,8
	ctx.r10.s64 = 8;
	// addi r11,r1,160
	ctx.r11.s64 = ctx.r1.s64 + 160;
	// addi r8,r26,-4
	ctx.r8.s64 = ctx.r26.s64 + -4;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82803C7C:
	// lwzu r9,4(r8)
	ea = 4 + ctx.r8.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r8.u32 = ea;
	// add r10,r9,r31
	ctx.r10.u64 = ctx.r9.u64 + ctx.r31.u64;
	// lbzx r9,r9,r31
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r31.u32);
	// addi r9,r9,-128
	ctx.r9.s64 = ctx.r9.s64 + -128;
	// extsw r9,r9
	ctx.r9.s64 = ctx.r9.s32;
	// std r9,144(r1)
	PPC_STORE_U64(ctx.r1.u32 + 144, ctx.r9.u64);
	// lfd f0,144(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// stfs f0,0(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 0, temp.u32);
	// lbzu r9,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// addi r9,r9,-128
	ctx.r9.s64 = ctx.r9.s64 + -128;
	// extsw r9,r9
	ctx.r9.s64 = ctx.r9.s32;
	// std r9,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r9.u64);
	// lfd f0,96(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// stfsu f0,4(r11)
	temp.f32 = float(ctx.f0.f64);
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
	// lbzu r9,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// addi r9,r9,-128
	ctx.r9.s64 = ctx.r9.s64 + -128;
	// extsw r9,r9
	ctx.r9.s64 = ctx.r9.s32;
	// std r9,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.r9.u64);
	// lfd f0,128(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// stfsu f0,4(r11)
	temp.f32 = float(ctx.f0.f64);
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
	// lbzu r9,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// addi r9,r9,-128
	ctx.r9.s64 = ctx.r9.s64 + -128;
	// extsw r9,r9
	ctx.r9.s64 = ctx.r9.s32;
	// std r9,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r9.u64);
	// lfd f0,112(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// stfsu f0,4(r11)
	temp.f32 = float(ctx.f0.f64);
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
	// lbzu r9,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// addi r9,r9,-128
	ctx.r9.s64 = ctx.r9.s64 + -128;
	// extsw r9,r9
	ctx.r9.s64 = ctx.r9.s32;
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f0,80(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// stfsu f0,4(r11)
	temp.f32 = float(ctx.f0.f64);
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
	// lbzu r9,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// addi r9,r9,-128
	ctx.r9.s64 = ctx.r9.s64 + -128;
	// extsw r9,r9
	ctx.r9.s64 = ctx.r9.s32;
	// std r9,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r9.u64);
	// lfd f0,88(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// stfsu f0,4(r11)
	temp.f32 = float(ctx.f0.f64);
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
	// lbzu r9,1(r10)
	ea = 1 + ctx.r10.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// addi r9,r9,-128
	ctx.r9.s64 = ctx.r9.s64 + -128;
	// extsw r9,r9
	ctx.r9.s64 = ctx.r9.s32;
	// std r9,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r9.u64);
	// lfd f0,104(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// stfsu f0,4(r11)
	temp.f32 = float(ctx.f0.f64);
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
	// lbz r10,1(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 1);
	// addi r10,r10,-128
	ctx.r10.s64 = ctx.r10.s64 + -128;
	// extsw r10,r10
	ctx.r10.s64 = ctx.r10.s32;
	// std r10,120(r1)
	PPC_STORE_U64(ctx.r1.u32 + 120, ctx.r10.u64);
	// lfd f0,120(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// stfsu f0,4(r11)
	temp.f32 = float(ctx.f0.f64);
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x82803c7c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82803C7C;
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// mtctr r27
	ctx.ctr.u64 = ctx.r27.u64;
	// bctrl 
	ctx.lr = 0x82803D98;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r9,64
	ctx.r9.s64 = 64;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// addi r11,r1,160
	ctx.r11.s64 = ctx.r1.s64 + 160;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82803DA8:
	// lfsx f0,r28,r11
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r11.u32);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,0(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// fadds f0,f0,f31
	ctx.f0.f64 = double(float(ctx.f0.f64 + ctx.f31.f64));
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f0.f64));
	// stfd f0,136(r1)
	PPC_STORE_U64(ctx.r1.u32 + 136, ctx.f0.u64);
	// lwz r9,140(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// addi r9,r9,-16384
	ctx.r9.s64 = ctx.r9.s64 + -16384;
	// sth r9,0(r10)
	PPC_STORE_U16(ctx.r10.u32 + 0, ctx.r9.u16);
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// bdnz 0x82803da8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82803DA8;
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// mr r30,r10
	ctx.r30.u64 = ctx.r10.u64;
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// bne 0x82803c6c
	if (!ctx.cr0.eq) goto loc_82803C6C;
loc_82803DE8:
	// addi r1,r1,480
	ctx.r1.s64 = ctx.r1.s64 + 480;
	// lfd f31,-64(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// b 0x82fa76c0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82803DF4"))) PPC_WEAK_FUNC(sub_82803DF4);
PPC_FUNC_IMPL(__imp__sub_82803DF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82803DF8"))) PPC_WEAK_FUNC(sub_82803DF8);
PPC_FUNC_IMPL(__imp__sub_82803DF8) {
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
	// li r5,48
	ctx.r5.s64 = 48;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82803E28;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32128
	ctx.r11.s64 = -2105540608;
	// stw r3,344(r31)
	PPC_STORE_U32(ctx.r31.u32 + 344, ctx.r3.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r11,r11,14360
	ctx.r11.s64 = ctx.r11.s64 + 14360;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lwz r11,184(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 184);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x82803e9c
	if (ctx.cr6.lt) goto loc_82803E9C;
	// beq cr6,0x82803e90
	if (ctx.cr6.eq) goto loc_82803E90;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// blt cr6,0x82803e78
	if (ctx.cr6.lt) goto loc_82803E78;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r10,48
	ctx.r10.s64 = 48;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82803E74;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82803eb4
	goto loc_82803EB4;
loc_82803E78:
	// lis r10,-32128
	ctx.r10.s64 = -2105540608;
	// lis r11,-32128
	ctx.r11.s64 = -2105540608;
	// addi r10,r10,28320
	ctx.r10.s64 = ctx.r10.s64 + 28320;
	// addi r11,r11,15384
	ctx.r11.s64 = ctx.r11.s64 + 15384;
	// stw r10,28(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28, ctx.r10.u32);
	// b 0x82803eb0
	goto loc_82803EB0;
loc_82803E90:
	// lis r10,-32128
	ctx.r10.s64 = -2105540608;
	// addi r10,r10,27832
	ctx.r10.s64 = ctx.r10.s64 + 27832;
	// b 0x82803ea4
	goto loc_82803EA4;
loc_82803E9C:
	// lis r10,-32128
	ctx.r10.s64 = -2105540608;
	// addi r10,r10,27184
	ctx.r10.s64 = ctx.r10.s64 + 27184;
loc_82803EA4:
	// lis r11,-32128
	ctx.r11.s64 = -2105540608;
	// stw r10,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r10.u32);
	// addi r11,r11,15000
	ctx.r11.s64 = ctx.r11.s64 + 15000;
loc_82803EB0:
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
loc_82803EB4:
	// li r10,4
	ctx.r10.s64 = 4;
	// addi r11,r30,28
	ctx.r11.s64 = ctx.r30.s64 + 28;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// li r10,0
	ctx.r10.s64 = 0;
loc_82803EC4:
	// stw r10,-16(r11)
	PPC_STORE_U32(ctx.r11.u32 + -16, ctx.r10.u32);
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x82803ec4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82803EC4;
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

__attribute__((alias("__imp__sub_82803EE8"))) PPC_WEAK_FUNC(sub_82803EE8);
PPC_FUNC_IMPL(__imp__sub_82803EE8) {
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
	// lwz r30,324(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 324);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq cr6,0x82803f28
	if (ctx.cr6.eq) goto loc_82803F28;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r10,4
	ctx.r10.s64 = 4;
	// stw r10,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82803F28;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82803F28:
	// lwz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,52(r30)
	PPC_STORE_U32(ctx.r30.u32 + 52, ctx.r11.u32);
	// stw r11,56(r30)
	PPC_STORE_U32(ctx.r30.u32 + 56, ctx.r11.u32);
	// stw r10,48(r30)
	PPC_STORE_U32(ctx.r30.u32 + 48, ctx.r10.u32);
	// lwz r11,220(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 220);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r11,60(r30)
	PPC_STORE_U32(ctx.r30.u32 + 60, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82803F60"))) PPC_WEAK_FUNC(sub_82803F60);
PPC_FUNC_IMPL(__imp__sub_82803F60) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7674
	ctx.lr = 0x82803F68;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// cmpw cr6,r5,r6
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r6.s32, ctx.xer);
	// bge cr6,0x82803fb0
	if (!ctx.cr6.lt) goto loc_82803FB0;
	// addi r27,r5,-1
	ctx.r27.s64 = ctx.r5.s64 + -1;
loc_82803F88:
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// li r7,1
	ctx.r7.s64 = 1;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x827f7028
	ctx.lr = 0x82803FA4;
	sub_827F7028(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmpw cr6,r31,r29
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r29.s32, ctx.xer);
	// blt cr6,0x82803f88
	if (ctx.cr6.lt) goto loc_82803F88;
loc_82803FB0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82803FB8"))) PPC_WEAK_FUNC(sub_82803FB8);
PPC_FUNC_IMPL(__imp__sub_82803FB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa765c
	ctx.lr = 0x82803FC0;
	__savegprlr_21(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,324(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 324);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r23,r4
	ctx.r23.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r24,r6
	ctx.r24.u64 = ctx.r6.u64;
	// mr r22,r7
	ctx.r22.u64 = ctx.r7.u64;
	// mr r25,r8
	ctx.r25.u64 = ctx.r8.u64;
	// mr r21,r9
	ctx.r21.u64 = ctx.r9.u64;
	// b 0x82804110
	goto loc_82804110;
loc_82803FE8:
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// cmplw cr6,r11,r21
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r21.u32, ctx.xer);
	// bge cr6,0x82804170
	if (!ctx.cr6.lt) goto loc_82804170;
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lwz r9,220(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 220);
	// lwz r6,52(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	// subf r10,r11,r24
	ctx.r10.s64 = ctx.r24.s64 - ctx.r11.s64;
	// subf r29,r6,r9
	ctx.r29.s64 = ctx.r9.s64 - ctx.r6.s64;
	// cmplw cr6,r29,r10
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82804014
	if (ctx.cr6.lt) goto loc_82804014;
	// mr r29,r10
	ctx.r29.u64 = ctx.r10.u64;
loc_82804014:
	// lwz r10,336(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 336);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r28,r30,8
	ctx.r28.s64 = ctx.r30.s64 + 8;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// add r4,r11,r23
	ctx.r4.u64 = ctx.r11.u64 + ctx.r23.u64;
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8280403C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// stw r11,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
	// lwz r10,48(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	// subf. r10,r29,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r29.s64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lwz r11,52(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// stw r11,52(r30)
	PPC_STORE_U32(ctx.r30.u32 + 52, ctx.r11.u32);
	// stw r10,48(r30)
	PPC_STORE_U32(ctx.r30.u32 + 48, ctx.r10.u32);
	// bne 0x828040b0
	if (!ctx.cr0.eq) goto loc_828040B0;
	// lwz r10,220(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 220);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x828040b0
	if (!ctx.cr6.lt) goto loc_828040B0;
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x828040a8
	if (!ctx.cr6.gt) goto loc_828040A8;
	// addi r26,r28,-4
	ctx.r26.s64 = ctx.r28.s64 + -4;
loc_82804084:
	// lwzu r3,4(r26)
	ea = 4 + ctx.r26.u32;
	ctx.r3.u64 = PPC_LOAD_U32(ea);
	ctx.r26.u32 = ea;
	// lwz r6,220(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 220);
	// lwz r5,52(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	// lwz r4,28(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// bl 0x82803f60
	ctx.lr = 0x82804098;
	sub_82803F60(ctx, base);
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82804084
	if (ctx.cr6.lt) goto loc_82804084;
loc_828040A8:
	// lwz r11,220(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 220);
	// stw r11,52(r30)
	PPC_STORE_U32(ctx.r30.u32 + 52, ctx.r11.u32);
loc_828040B0:
	// lwz r11,52(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	// lwz r10,220(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 220);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x828040f8
	if (!ctx.cr6.eq) goto loc_828040F8;
	// lwz r11,340(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 340);
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r7,0(r25)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828040E4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,52(r30)
	PPC_STORE_U32(ctx.r30.u32 + 52, ctx.r11.u32);
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r11.u32);
loc_828040F8:
	// lwz r11,48(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82804110
	if (!ctx.cr6.eq) goto loc_82804110;
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// cmplw cr6,r11,r21
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r21.u32, ctx.xer);
	// blt cr6,0x82804120
	if (ctx.cr6.lt) goto loc_82804120;
loc_82804110:
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// cmplw cr6,r11,r24
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r24.u32, ctx.xer);
	// blt cr6,0x82803fe8
	if (ctx.cr6.lt) goto loc_82803FE8;
	// b 0x82804170
	goto loc_82804170;
loc_82804120:
	// lwz r10,60(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// li r29,0
	ctx.r29.s64 = 0;
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x8280416c
	if (!ctx.cr6.gt) goto loc_8280416C;
	// addi r30,r11,-56
	ctx.r30.s64 = ctx.r11.s64 + -56;
	// addi r28,r22,-4
	ctx.r28.s64 = ctx.r22.s64 + -4;
loc_8280413C:
	// lwz r10,68(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 68);
	// lwzu r11,84(r30)
	ea = 84 + ctx.r30.u32;
	ctx.r11.u64 = PPC_LOAD_U32(ea);
	ctx.r30.u32 = ea;
	// lwz r9,0(r25)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// mullw r6,r10,r21
	ctx.r6.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r21.s32);
	// lwzu r3,4(r28)
	ea = 4 + ctx.r28.u32;
	ctx.r3.u64 = PPC_LOAD_U32(ea);
	ctx.r28.u32 = ea;
	// mullw r5,r10,r9
	ctx.r5.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r9.s32);
	// rlwinm r4,r11,3,0,28
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// bl 0x82803f60
	ctx.lr = 0x8280415C;
	sub_82803F60(ctx, base);
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8280413c
	if (ctx.cr6.lt) goto loc_8280413C;
loc_8280416C:
	// stw r21,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r21.u32);
loc_82804170:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82fa76ac
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82804178"))) PPC_WEAK_FUNC(sub_82804178);
PPC_FUNC_IMPL(__imp__sub_82804178) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa764c
	ctx.lr = 0x82804180;
	__savegprlr_17(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r10,220(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 220);
	// mr r19,r4
	ctx.r19.u64 = ctx.r4.u64;
	// lwz r31,324(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 324);
	// mr r22,r5
	ctx.r22.u64 = ctx.r5.u64;
	// mr r21,r6
	ctx.r21.u64 = ctx.r6.u64;
	// mr r20,r7
	ctx.r20.u64 = ctx.r7.u64;
	// mr r24,r8
	ctx.r24.u64 = ctx.r8.u64;
	// mr r18,r9
	ctx.r18.u64 = ctx.r9.u64;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// mulli r23,r10,3
	ctx.r23.s64 = ctx.r10.s64 * 3;
	// bge cr6,0x8280438c
	if (!ctx.cr6.lt) goto loc_8280438C;
	// li r17,0
	ctx.r17.s64 = 0;
loc_828041BC:
	// lwz r11,0(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// cmplw cr6,r11,r21
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r21.u32, ctx.xer);
	// bge cr6,0x828042a8
	if (!ctx.cr6.lt) goto loc_828042A8;
	// lwz r9,60(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// subf r10,r11,r21
	ctx.r10.s64 = ctx.r21.s64 - ctx.r11.s64;
	// lwz r6,52(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// subf r29,r6,r9
	ctx.r29.s64 = ctx.r9.s64 - ctx.r6.s64;
	// cmplw cr6,r29,r10
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x828041e4
	if (ctx.cr6.lt) goto loc_828041E4;
	// mr r29,r10
	ctx.r29.u64 = ctx.r10.u64;
loc_828041E4:
	// lwz r10,336(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 336);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r28,r31,8
	ctx.r28.s64 = ctx.r31.s64 + 8;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// add r4,r11,r19
	ctx.r4.u64 = ctx.r11.u64 + ctx.r19.u64;
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x8280420C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// lwz r10,32(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82804284
	if (!ctx.cr6.eq) goto loc_82804284;
	// lwz r11,60(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 60);
	// mr r25,r17
	ctx.r25.u64 = ctx.r17.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82804284
	if (!ctx.cr6.gt) goto loc_82804284;
	// lwz r11,220(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 220);
loc_82804230:
	// li r27,1
	ctx.r27.s64 = 1;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// blt cr6,0x82804270
	if (ctx.cr6.lt) goto loc_82804270;
	// li r26,-1
	ctx.r26.s64 = -1;
loc_82804240:
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// li r7,1
	ctx.r7.s64 = 1;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// lwz r8,28(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x827f7028
	ctx.lr = 0x8280425C;
	sub_827F7028(ctx, base);
	// lwz r11,220(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 220);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r26,r26,-1
	ctx.r26.s64 = ctx.r26.s64 + -1;
	// cmpw cr6,r27,r11
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x82804240
	if (!ctx.cr6.gt) goto loc_82804240;
loc_82804270:
	// lwz r10,60(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 60);
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// cmpw cr6,r25,r10
	ctx.cr6.compare<int32_t>(ctx.r25.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82804230
	if (ctx.cr6.lt) goto loc_82804230;
loc_82804284:
	// lwz r11,0(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// stw r11,0(r22)
	PPC_STORE_U32(ctx.r22.u32 + 0, ctx.r11.u32);
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// lwz r10,48(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// subf r10,r29,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r29.s64;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// stw r10,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r10.u32);
	// b 0x82804300
	goto loc_82804300;
loc_828042A8:
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x8280438c
	if (!ctx.cr6.eq) goto loc_8280438C;
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// lwz r10,52(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x82804304
	if (!ctx.cr6.lt) goto loc_82804304;
	// lwz r11,60(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 60);
	// mr r29,r17
	ctx.r29.u64 = ctx.r17.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x828042fc
	if (!ctx.cr6.gt) goto loc_828042FC;
	// addi r28,r31,4
	ctx.r28.s64 = ctx.r31.s64 + 4;
loc_828042D8:
	// lwzu r3,4(r28)
	ea = 4 + ctx.r28.u32;
	ctx.r3.u64 = PPC_LOAD_U32(ea);
	ctx.r28.u32 = ea;
	// lwz r6,60(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// lwz r5,52(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// lwz r4,28(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// bl 0x82803f60
	ctx.lr = 0x828042EC;
	sub_82803F60(ctx, base);
	// lwz r11,60(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 60);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x828042d8
	if (ctx.cr6.lt) goto loc_828042D8;
loc_828042FC:
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
loc_82804300:
	// stw r11,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r11.u32);
loc_82804304:
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// lwz r10,60(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x82804380
	if (!ctx.cr6.eq) goto loc_82804380;
	// lwz r11,340(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 340);
	// mr r6,r20
	ctx.r6.u64 = ctx.r20.u64;
	// addi r4,r31,8
	ctx.r4.s64 = ctx.r31.s64 + 8;
	// lwz r7,0(r24)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r5,56(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82804338;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,0(r24)
	PPC_STORE_U32(ctx.r24.u32 + 0, ctx.r11.u32);
	// lwz r10,56(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lwz r11,220(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 220);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r11.u32);
	// cmpw cr6,r11,r23
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r23.s32, ctx.xer);
	// blt cr6,0x82804360
	if (ctx.cr6.lt) goto loc_82804360;
	// stw r17,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r17.u32);
loc_82804360:
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// cmpw cr6,r11,r23
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r23.s32, ctx.xer);
	// blt cr6,0x82804370
	if (ctx.cr6.lt) goto loc_82804370;
	// stw r17,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r17.u32);
loc_82804370:
	// lwz r11,220(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 220);
	// lwz r10,52(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r11.u32);
loc_82804380:
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// cmplw cr6,r11,r18
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r18.u32, ctx.xer);
	// blt cr6,0x828041bc
	if (ctx.cr6.lt) goto loc_828041BC;
loc_8280438C:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82fa769c
	__restgprlr_17(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82804394"))) PPC_WEAK_FUNC(sub_82804394);
PPC_FUNC_IMPL(__imp__sub_82804394) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82804398"))) PPC_WEAK_FUNC(sub_82804398);
PPC_FUNC_IMPL(__imp__sub_82804398) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7658
	ctx.lr = 0x828043A0;
	__savegprlr_20(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r30,220(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 220);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r10,60(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// lwz r29,324(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 324);
	// mullw r10,r10,r30
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r30.s32);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// mulli r5,r10,20
	ctx.r5.s64 = ctx.r10.s64 * 20;
	// bctrl 
	ctx.lr = 0x828043D0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r10,60(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// li r21,0
	ctx.r21.s64 = 0;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x828044c4
	if (!ctx.cr6.gt) goto loc_828044C4;
	// mulli r24,r30,3
	ctx.r24.s64 = ctx.r30.s64 * 3;
	// mulli r23,r30,12
	ctx.r23.s64 = ctx.r30.s64 * 12;
	// rlwinm r25,r30,2,0,29
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// mulli r20,r30,20
	ctx.r20.s64 = ctx.r30.s64 * 20;
	// addi r27,r11,8
	ctx.r27.s64 = ctx.r11.s64 + 8;
	// addi r22,r29,4
	ctx.r22.s64 = ctx.r29.s64 + 4;
loc_82804400:
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// lwz r10,216(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 216);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,20(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 20);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mullw r11,r10,r11
	ctx.r11.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// lwz r10,0(r27)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// lwz r9,8(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// rlwinm r9,r11,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// twllei r10,0
	if (ctx.r10.u32 <= 0) __builtin_debugtrap();
	// rotlwi r11,r9,1
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 1);
	// divw r5,r9,r10
	ctx.r5.s32 = ctx.r9.s32 / ctx.r10.s32;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// andc r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ~ctx.r11.u64;
	// twlgei r11,-1
	if (ctx.r11.u32 >= 4294967295) __builtin_debugtrap();
	// bctrl 
	ctx.lr = 0x82804448;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// add r26,r25,r28
	ctx.r26.u64 = ctx.r25.u64 + ctx.r28.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82fa77c0
	ctx.lr = 0x82804460;
	sub_82FA77C0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// ble cr6,0x828044a8
	if (!ctx.cr6.gt) goto loc_828044A8;
	// rlwinm r9,r30,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// subf r8,r29,r28
	ctx.r8.s64 = ctx.r28.s64 - ctx.r29.s64;
loc_8280447C:
	// add r7,r9,r11
	ctx.r7.u64 = ctx.r9.u64 + ctx.r11.u64;
	// add r6,r25,r11
	ctx.r6.u64 = ctx.r25.u64 + ctx.r11.u64;
	// rlwinm r7,r7,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r6,r6,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lwzx r7,r7,r29
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r29.u32);
	// stwx r7,r8,r10
	PPC_STORE_U32(ctx.r8.u32 + ctx.r10.u32, ctx.r7.u32);
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// stwx r7,r6,r28
	PPC_STORE_U32(ctx.r6.u32 + ctx.r28.u32, ctx.r7.u32);
	// bdnz 0x8280447c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8280447C;
loc_828044A8:
	// addi r21,r21,1
	ctx.r21.s64 = ctx.r21.s64 + 1;
	// stwu r26,4(r22)
	ea = 4 + ctx.r22.u32;
	PPC_STORE_U32(ea, ctx.r26.u32);
	ctx.r22.u32 = ea;
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// add r28,r20,r28
	ctx.r28.u64 = ctx.r20.u64 + ctx.r28.u64;
	// addi r27,r27,84
	ctx.r27.s64 = ctx.r27.s64 + 84;
	// cmpw cr6,r21,r11
	ctx.cr6.compare<int32_t>(ctx.r21.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82804400
	if (ctx.cr6.lt) goto loc_82804400;
loc_828044C4:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82fa76a8
	__restgprlr_20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828044CC"))) PPC_WEAK_FUNC(sub_828044CC);
PPC_FUNC_IMPL(__imp__sub_828044CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_828044D0"))) PPC_WEAK_FUNC(sub_828044D0);
PPC_FUNC_IMPL(__imp__sub_828044D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x828044D8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// clrlwi. r11,r4,24
	ctx.r11.u64 = ctx.r4.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82804504
	if (ctx.cr0.eq) goto loc_82804504;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r10,4
	ctx.r10.s64 = 4;
	// stw r10,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82804504;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82804504:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r5,64
	ctx.r5.s64 = 64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82804520;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r10,-32128
	ctx.r10.s64 = -2105540608;
	// stw r3,324(r31)
	PPC_STORE_U32(ctx.r31.u32 + 324, ctx.r3.u32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r10,r10,16104
	ctx.r10.s64 = ctx.r10.s64 + 16104;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// lwz r10,340(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 340);
	// lbz r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + 8);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x8280455c
	if (ctx.cr0.eq) goto loc_8280455C;
	// lis r10,-32128
	ctx.r10.s64 = -2105540608;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r10,r10,16760
	ctx.r10.s64 = ctx.r10.s64 + 16760;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// bl 0x82804398
	ctx.lr = 0x82804558;
	sub_82804398(ctx, base);
	// b 0x828045e0
	goto loc_828045E0;
loc_8280455C:
	// lis r10,-32128
	ctx.r10.s64 = -2105540608;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r10,r10,16312
	ctx.r10.s64 = ctx.r10.s64 + 16312;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r10,60(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lwz r10,68(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// ble cr6,0x828045e0
	if (!ctx.cr6.gt) goto loc_828045E0;
	// addi r30,r10,-56
	ctx.r30.s64 = ctx.r10.s64 + -56;
	// addi r28,r11,4
	ctx.r28.s64 = ctx.r11.s64 + 4;
loc_82804584:
	// lwz r8,4(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r10,64(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 64);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r9,216(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 216);
	// lwzu r11,84(r30)
	ea = 84 + ctx.r30.u32;
	ctx.r11.u64 = PPC_LOAD_U32(ea);
	ctx.r30.u32 = ea;
	// twllei r10,0
	if (ctx.r10.u32 <= 0) __builtin_debugtrap();
	// lwz r6,220(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 220);
	// mullw r11,r9,r11
	ctx.r11.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r11.s32);
	// lwz r9,8(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// rlwinm r9,r11,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// rotlwi r11,r9,1
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 1);
	// divw r5,r9,r10
	ctx.r5.s32 = ctx.r9.s32 / ctx.r10.s32;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// andc r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ~ctx.r11.u64;
	// twlgei r11,-1
	if (ctx.r11.u32 >= 4294967295) __builtin_debugtrap();
	// bctrl 
	ctx.lr = 0x828045CC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// stwu r3,4(r28)
	ea = 4 + ctx.r28.u32;
	PPC_STORE_U32(ea, ctx.r3.u32);
	ctx.r28.u32 = ea;
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82804584
	if (ctx.cr6.lt) goto loc_82804584;
loc_828045E0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828045E8"))) PPC_WEAK_FUNC(sub_828045E8);
PPC_FUNC_IMPL(__imp__sub_828045E8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828045EC"))) PPC_WEAK_FUNC(sub_828045EC);
PPC_FUNC_IMPL(__imp__sub_828045EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_828045F0"))) PPC_WEAK_FUNC(sub_828045F0);
PPC_FUNC_IMPL(__imp__sub_828045F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// subf. r8,r5,r6
	ctx.r8.s64 = ctx.r6.s64 - ctx.r5.s64;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// blelr 
	if (!ctx.cr0.gt) return;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// addi r10,r3,-4
	ctx.r10.s64 = ctx.r3.s64 + -4;
loc_82804604:
	// lwzu r11,4(r10)
	ea = 4 + ctx.r10.u32;
	ctx.r11.u64 = PPC_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// cmplwi r8,0
	ctx.cr0.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// lbz r11,-1(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + -1);
	// beq 0x82804628
	if (ctx.cr0.eq) goto loc_82804628;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_82804620:
	// stbu r11,1(r9)
	ea = 1 + ctx.r9.u32;
	PPC_STORE_U8(ea, ctx.r11.u8);
	ctx.r9.u32 = ea;
	// bdnz 0x82804620
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82804620;
loc_82804628:
	// addic. r4,r4,-1
	ctx.xer.ca = ctx.r4.u32 > 0;
	ctx.r4.s64 = ctx.r4.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne 0x82804604
	if (!ctx.cr0.eq) goto loc_82804604;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82804634"))) PPC_WEAK_FUNC(sub_82804634);
PPC_FUNC_IMPL(__imp__sub_82804634) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82804638"))) PPC_WEAK_FUNC(sub_82804638);
PPC_FUNC_IMPL(__imp__sub_82804638) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7668
	ctx.lr = 0x82804640;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,60(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r11,340(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 340);
	// mr r24,r7
	ctx.r24.u64 = ctx.r7.u64;
	// lwz r30,68(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	// li r28,0
	ctx.r28.s64 = 0;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x828046bc
	if (!ctx.cr6.gt) goto loc_828046BC;
	// rlwinm r26,r5,2,0,29
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// addi r27,r11,8
	ctx.r27.s64 = ctx.r11.s64 + 8;
	// subf r25,r4,r6
	ctx.r25.s64 = ctx.r6.s64 - ctx.r4.s64;
loc_82804674:
	// lwzu r11,4(r27)
	ea = 4 + ctx.r27.u32;
	ctx.r11.u64 = PPC_LOAD_U32(ea);
	ctx.r27.u32 = ea;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r9,12(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwzx r10,r25,r31
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + ctx.r31.u32);
	// mullw r8,r9,r24
	ctx.r8.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r24.s32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// rlwinm r11,r8,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// add r5,r9,r26
	ctx.r5.u64 = ctx.r9.u64 + ctx.r26.u64;
	// add r6,r11,r10
	ctx.r6.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x828046A4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,60(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 60);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// addi r30,r30,84
	ctx.r30.s64 = ctx.r30.s64 + 84;
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82804674
	if (ctx.cr6.lt) goto loc_82804674;
loc_828046BC:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82fa76b8
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828046C4"))) PPC_WEAK_FUNC(sub_828046C4);
PPC_FUNC_IMPL(__imp__sub_828046C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_828046C8"))) PPC_WEAK_FUNC(sub_828046C8);
PPC_FUNC_IMPL(__imp__sub_828046C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7664
	ctx.lr = 0x828046D0;
	__savegprlr_23(ctx, base);
	// lwz r11,220(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 220);
	// lwz r8,216(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 216);
	// lwz r30,12(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// rotlwi r9,r11,1
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// lwz r7,8(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// rotlwi r10,r8,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r8.u32, 1);
	// lwz r29,28(r4)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// divw r28,r11,r30
	ctx.r28.s32 = ctx.r11.s32 / ctx.r30.s32;
	// divw r31,r8,r7
	ctx.r31.s32 = ctx.r8.s32 / ctx.r7.s32;
	// lwz r8,28(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// rlwinm r26,r29,3,0,28
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 3) & 0xFFFFFFF8;
	// mullw r27,r28,r31
	ctx.r27.s64 = int64_t(ctx.r28.s32) * int64_t(ctx.r31.s32);
	// andc r9,r30,r9
	ctx.r9.u64 = ctx.r30.u64 & ~ctx.r9.u64;
	// twllei r7,0
	if (ctx.r7.u32 <= 0) __builtin_debugtrap();
	// twllei r30,0
	if (ctx.r30.u32 <= 0) __builtin_debugtrap();
	// andc r7,r7,r10
	ctx.r7.u64 = ctx.r7.u64 & ~ctx.r10.u64;
	// mullw r3,r31,r26
	ctx.r3.s64 = int64_t(ctx.r31.s32) * int64_t(ctx.r26.s32);
	// srawi r30,r27,1
	ctx.xer.ca = (ctx.r27.s32 < 0) & ((ctx.r27.u32 & 0x1) != 0);
	ctx.r30.s64 = ctx.r27.s32 >> 1;
	// subf. r10,r8,r3
	ctx.r10.s64 = ctx.r3.s64 - ctx.r8.s64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// twlgei r7,-1
	if (ctx.r7.u32 >= 4294967295) __builtin_debugtrap();
	// twlgei r9,-1
	if (ctx.r9.u32 >= 4294967295) __builtin_debugtrap();
	// addze r23,r30
	temp.s64 = ctx.r30.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r30.u32;
	ctx.r23.s64 = temp.s64;
	// ble 0x8280476c
	if (!ctx.cr0.gt) goto loc_8280476C;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x8280476c
	if (!ctx.cr6.gt) goto loc_8280476C;
	// addi r7,r5,-4
	ctx.r7.s64 = ctx.r5.s64 + -4;
loc_82804740:
	// lwzu r9,4(r7)
	ea = 4 + ctx.r7.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r7.u32 = ea;
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// addi r3,r9,-1
	ctx.r3.s64 = ctx.r9.s64 + -1;
	// lbz r9,-1(r9)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + -1);
	// beq 0x82804764
	if (ctx.cr0.eq) goto loc_82804764;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_8280475C:
	// stbu r9,1(r3)
	ea = 1 + ctx.r3.u32;
	PPC_STORE_U8(ea, ctx.r9.u8);
	ctx.r3.u32 = ea;
	// bdnz 0x8280475c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8280475C;
loc_82804764:
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82804740
	if (!ctx.cr0.eq) goto loc_82804740;
loc_8280476C:
	// lwz r11,12(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// li r25,0
	ctx.r25.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82804824
	if (!ctx.cr6.gt) goto loc_82804824;
	// rlwinm r24,r28,2,0,29
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
loc_82804784:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// li r8,0
	ctx.r8.s64 = 0;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x8280480c
	if (ctx.cr6.eq) goto loc_8280480C;
	// mr r9,r26
	ctx.r9.u64 = ctx.r26.u64;
	// addi r3,r11,-1
	ctx.r3.s64 = ctx.r11.s64 + -1;
loc_8280479C:
	// li r6,0
	ctx.r6.s64 = 0;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// ble cr6,0x828047e0
	if (!ctx.cr6.gt) goto loc_828047E0;
	// mr r7,r5
	ctx.r7.u64 = ctx.r5.u64;
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
loc_828047B0:
	// lwz r11,0(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// ble cr6,0x828047d4
	if (!ctx.cr6.gt) goto loc_828047D4;
	// mtctr r31
	ctx.ctr.u64 = ctx.r31.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
loc_828047C8:
	// lbzu r10,1(r11)
	ea = 1 + ctx.r11.u32;
	ctx.r10.u64 = PPC_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// add r6,r10,r6
	ctx.r6.u64 = ctx.r10.u64 + ctx.r6.u64;
	// bdnz 0x828047c8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_828047C8;
loc_828047D4:
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// bne 0x828047b0
	if (!ctx.cr0.eq) goto loc_828047B0;
loc_828047E0:
	// add r10,r6,r23
	ctx.r10.u64 = ctx.r6.u64 + ctx.r23.u64;
	// addic. r9,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// rotlwi r11,r10,1
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// divw r10,r10,r27
	ctx.r10.s32 = ctx.r10.s32 / ctx.r27.s32;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// twllei r27,0
	if (ctx.r27.u32 <= 0) __builtin_debugtrap();
	// stbu r10,1(r3)
	ea = 1 + ctx.r3.u32;
	PPC_STORE_U8(ea, ctx.r10.u8);
	ctx.r3.u32 = ea;
	// andc r11,r27,r11
	ctx.r11.u64 = ctx.r27.u64 & ~ctx.r11.u64;
	// add r8,r8,r31
	ctx.r8.u64 = ctx.r8.u64 + ctx.r31.u64;
	// twlgei r11,-1
	if (ctx.r11.u32 >= 4294967295) __builtin_debugtrap();
	// bne 0x8280479c
	if (!ctx.cr0.eq) goto loc_8280479C;
loc_8280480C:
	// lwz r11,12(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// add r5,r24,r5
	ctx.r5.u64 = ctx.r24.u64 + ctx.r5.u64;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmpw cr6,r25,r11
	ctx.cr6.compare<int32_t>(ctx.r25.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82804784
	if (ctx.cr6.lt) goto loc_82804784;
loc_82804824:
	// b 0x82fa76b4
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82804828"))) PPC_WEAK_FUNC(sub_82804828);
PPC_FUNC_IMPL(__imp__sub_82804828) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x82804830;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lwz r8,28(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r7,220(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 220);
	// bl 0x827f7028
	ctx.lr = 0x8280485C;
	sub_827F7028(ctx, base);
	// lwz r10,28(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28);
	// lwz r7,28(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r11,220(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 220);
	// subf. r8,r7,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r7.s64;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble 0x828048b0
	if (!ctx.cr0.gt) goto loc_828048B0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x828048b0
	if (!ctx.cr6.gt) goto loc_828048B0;
	// addi r10,r31,-4
	ctx.r10.s64 = ctx.r31.s64 + -4;
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
loc_82804884:
	// lwzu r11,4(r10)
	ea = 4 + ctx.r10.u32;
	ctx.r11.u64 = PPC_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// cmplwi r8,0
	ctx.cr0.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// lbz r11,-1(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + -1);
	// beq 0x828048a8
	if (ctx.cr0.eq) goto loc_828048A8;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_828048A0:
	// stbu r11,1(r9)
	ea = 1 + ctx.r9.u32;
	PPC_STORE_U8(ea, ctx.r11.u8);
	ctx.r9.u32 = ea;
	// bdnz 0x828048a0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_828048A0;
loc_828048A8:
	// addic. r6,r6,-1
	ctx.xer.ca = ctx.r6.u32 > 0;
	ctx.r6.s64 = ctx.r6.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bne 0x82804884
	if (!ctx.cr0.eq) goto loc_82804884;
loc_828048B0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828048B8"))) PPC_WEAK_FUNC(sub_828048B8);
PPC_FUNC_IMPL(__imp__sub_828048B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// lwz r10,28(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r8,28(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// rlwinm r3,r10,3,0,28
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r10,r3,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r11,220(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 220);
	// subf. r9,r8,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r8.s64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble 0x82804918
	if (!ctx.cr0.gt) goto loc_82804918;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82804918
	if (!ctx.cr6.gt) goto loc_82804918;
	// addi r10,r5,-4
	ctx.r10.s64 = ctx.r5.s64 + -4;
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
loc_828048EC:
	// lwzu r11,4(r10)
	ea = 4 + ctx.r10.u32;
	ctx.r11.u64 = PPC_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// addi r7,r11,-1
	ctx.r7.s64 = ctx.r11.s64 + -1;
	// lbz r11,-1(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + -1);
	// beq 0x82804910
	if (ctx.cr0.eq) goto loc_82804910;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82804908:
	// stbu r11,1(r7)
	ea = 1 + ctx.r7.u32;
	PPC_STORE_U8(ea, ctx.r11.u8);
	ctx.r7.u32 = ea;
	// bdnz 0x82804908
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82804908;
loc_82804910:
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x828048ec
	if (!ctx.cr0.eq) goto loc_828048EC;
loc_82804918:
	// lwz r11,12(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// li r31,0
	ctx.r31.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82804980
	if (!ctx.cr6.gt) goto loc_82804980;
	// subf r6,r5,r6
	ctx.r6.s64 = ctx.r6.s64 - ctx.r5.s64;
loc_8280492C:
	// lwzx r9,r6,r5
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r5.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x8280496c
	if (ctx.cr6.eq) goto loc_8280496C;
	// mtctr r3
	ctx.ctr.u64 = ctx.r3.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
loc_8280494C:
	// lbz r7,1(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// lbzu r8,2(r11)
	ea = 2 + ctx.r11.u32;
	ctx.r8.u64 = PPC_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// add r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 + ctx.r8.u64;
	// add r8,r8,r10
	ctx.r8.u64 = ctx.r8.u64 + ctx.r10.u64;
	// xori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 ^ 1;
	// srawi r8,r8,1
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1) != 0);
	ctx.r8.s64 = ctx.r8.s32 >> 1;
	// stbu r8,1(r9)
	ea = 1 + ctx.r9.u32;
	PPC_STORE_U8(ea, ctx.r8.u8);
	ctx.r9.u32 = ea;
	// bdnz 0x8280494c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8280494C;
loc_8280496C:
	// lwz r11,12(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r5,r5,4
	ctx.r5.s64 = ctx.r5.s64 + 4;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x8280492c
	if (ctx.cr6.lt) goto loc_8280492C;
loc_82804980:
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82804988"))) PPC_WEAK_FUNC(sub_82804988);
PPC_FUNC_IMPL(__imp__sub_82804988) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x82804990;
	__savegprlr_28(ctx, base);
	// lwz r11,28(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// lwz r8,28(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// rlwinm r29,r11,3,0,28
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r11,220(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 220);
	// rlwinm r10,r29,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0xFFFFFFFE;
	// subf. r9,r8,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r8.s64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble 0x828049e8
	if (!ctx.cr0.gt) goto loc_828049E8;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x828049e8
	if (!ctx.cr6.gt) goto loc_828049E8;
	// addi r10,r5,-4
	ctx.r10.s64 = ctx.r5.s64 + -4;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
loc_828049BC:
	// lwzu r11,4(r10)
	ea = 4 + ctx.r10.u32;
	ctx.r11.u64 = PPC_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// cmplwi r9,0
	ctx.cr0.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// add r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 + ctx.r8.u64;
	// addi r7,r11,-1
	ctx.r7.s64 = ctx.r11.s64 + -1;
	// lbz r11,-1(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + -1);
	// beq 0x828049e0
	if (ctx.cr0.eq) goto loc_828049E0;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_828049D8:
	// stbu r11,1(r7)
	ea = 1 + ctx.r7.u32;
	PPC_STORE_U8(ea, ctx.r11.u8);
	ctx.r7.u32 = ea;
	// bdnz 0x828049d8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_828049D8;
loc_828049E0:
	// addic. r3,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r3.s64 = ctx.r3.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x828049bc
	if (!ctx.cr0.eq) goto loc_828049BC;
loc_828049E8:
	// lwz r11,12(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// li r28,0
	ctx.r28.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82804a74
	if (!ctx.cr6.gt) goto loc_82804A74;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
loc_82804A00:
	// lwz r8,0(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r9,1
	ctx.r9.s64 = 1;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// beq cr6,0x82804a5c
	if (ctx.cr6.eq) goto loc_82804A5C;
	// mtctr r29
	ctx.ctr.u64 = ctx.r29.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
loc_82804A28:
	// lbz r5,1(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// lbzu r6,2(r11)
	ea = 2 + ctx.r11.u32;
	ctx.r6.u64 = PPC_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// lbz r3,1(r10)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r10.u32 + 1);
	// lbzu r7,2(r10)
	ea = 2 + ctx.r10.u32;
	ctx.r7.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// add r5,r5,r6
	ctx.r5.u64 = ctx.r5.u64 + ctx.r6.u64;
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// add r7,r5,r3
	ctx.r7.u64 = ctx.r5.u64 + ctx.r3.u64;
	// add r7,r7,r6
	ctx.r7.u64 = ctx.r7.u64 + ctx.r6.u64;
	// add r7,r7,r9
	ctx.r7.u64 = ctx.r7.u64 + ctx.r9.u64;
	// xori r9,r9,3
	ctx.r9.u64 = ctx.r9.u64 ^ 3;
	// srawi r7,r7,2
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x3) != 0);
	ctx.r7.s64 = ctx.r7.s32 >> 2;
	// stbu r7,1(r8)
	ea = 1 + ctx.r8.u32;
	PPC_STORE_U8(ea, ctx.r7.u8);
	ctx.r8.u32 = ea;
	// bdnz 0x82804a28
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82804A28;
loc_82804A5C:
	// lwz r11,12(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82804a00
	if (ctx.cr6.lt) goto loc_82804A00;
loc_82804A74:
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82804A78"))) PPC_WEAK_FUNC(sub_82804A78);
PPC_FUNC_IMPL(__imp__sub_82804A78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7648
	ctx.lr = 0x82804A80;
	__savegprlr_16(ctx, base);
	// lwz r11,28(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// lwz r9,28(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// rlwinm r31,r11,3,0,28
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r11,220(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 220);
	// rlwinm r10,r31,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// subf. r10,r9,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r9.s64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble 0x82804adc
	if (!ctx.cr0.gt) goto loc_82804ADC;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82804adc
	if (!ctx.cr6.gt) goto loc_82804ADC;
	// addi r8,r5,-8
	ctx.r8.s64 = ctx.r5.s64 + -8;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
loc_82804AB0:
	// lwzu r11,4(r8)
	ea = 4 + ctx.r8.u32;
	ctx.r11.u64 = PPC_LOAD_U32(ea);
	ctx.r8.u32 = ea;
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r7,r11,-1
	ctx.r7.s64 = ctx.r11.s64 + -1;
	// lbz r11,-1(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + -1);
	// beq 0x82804ad4
	if (ctx.cr0.eq) goto loc_82804AD4;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82804ACC:
	// stbu r11,1(r7)
	ea = 1 + ctx.r7.u32;
	PPC_STORE_U8(ea, ctx.r11.u8);
	ctx.r7.u32 = ea;
	// bdnz 0x82804acc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82804ACC;
loc_82804AD4:
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne 0x82804ab0
	if (!ctx.cr0.eq) goto loc_82804AB0;
loc_82804ADC:
	// lwz r11,180(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 180);
	// li r17,0
	ctx.r17.s64 = 0;
	// lwz r10,12(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// mulli r9,r11,80
	ctx.r9.s64 = ctx.r11.s64 * 80;
	// subfic r26,r9,16384
	ctx.xer.ca = ctx.r9.u32 <= 16384;
	ctx.r26.s64 = 16384 - ctx.r9.s64;
	// rlwinm r25,r11,4,0,27
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x82804d24
	if (!ctx.cr6.gt) goto loc_82804D24;
	// lis r11,0
	ctx.r11.s64 = 0;
	// mr r20,r6
	ctx.r20.u64 = ctx.r6.u64;
	// addi r16,r31,-2
	ctx.r16.s64 = ctx.r31.s64 + -2;
	// addi r6,r5,-4
	ctx.r6.s64 = ctx.r5.s64 + -4;
	// ori r7,r11,32768
	ctx.r7.u64 = ctx.r11.u64 | 32768;
loc_82804B10:
	// addi r21,r6,8
	ctx.r21.s64 = ctx.r6.s64 + 8;
	// lwz r3,4(r6)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// lwz r5,0(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// cmplwi cr6,r16,0
	ctx.cr6.compare<uint32_t>(ctx.r16.u32, 0, ctx.xer);
	// lwz r6,12(r6)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r6.u32 + 12);
	// addi r8,r3,2
	ctx.r8.s64 = ctx.r3.s64 + 2;
	// addi r10,r5,2
	ctx.r10.s64 = ctx.r5.s64 + 2;
	// lwz r30,0(r20)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r20.u32 + 0);
	// addi r11,r6,2
	ctx.r11.s64 = ctx.r6.s64 + 2;
	// lwz r31,0(r21)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// lbz r29,1(r5)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r5.u32 + 1);
	// lbz r28,1(r6)
	ctx.r28.u64 = PPC_LOAD_U8(ctx.r6.u32 + 1);
	// addi r9,r31,2
	ctx.r9.s64 = ctx.r31.s64 + 2;
	// lbz r24,2(r3)
	ctx.r24.u64 = PPC_LOAD_U8(ctx.r3.u32 + 2);
	// add r29,r28,r29
	ctx.r29.u64 = ctx.r28.u64 + ctx.r29.u64;
	// lbz r28,0(r3)
	ctx.r28.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// lbz r27,0(r31)
	ctx.r27.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// add r23,r29,r24
	ctx.r23.u64 = ctx.r29.u64 + ctx.r24.u64;
	// lbz r22,1(r31)
	ctx.r22.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// lbz r24,0(r9)
	ctx.r24.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// lbz r29,0(r5)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r5.u32 + 0);
	// addi r5,r30,1
	ctx.r5.s64 = ctx.r30.s64 + 1;
	// add r24,r23,r24
	ctx.r24.u64 = ctx.r23.u64 + ctx.r24.u64;
	// lbz r6,0(r6)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r6.u32 + 0);
	// lbz r23,0(r10)
	ctx.r23.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// add r31,r24,r28
	ctx.r31.u64 = ctx.r24.u64 + ctx.r28.u64;
	// lbz r3,1(r3)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + 1);
	// lbz r24,0(r11)
	ctx.r24.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// add r31,r31,r27
	ctx.r31.u64 = ctx.r31.u64 + ctx.r27.u64;
	// add r3,r22,r3
	ctx.r3.u64 = ctx.r22.u64 + ctx.r3.u64;
	// add r31,r31,r29
	ctx.r31.u64 = ctx.r31.u64 + ctx.r29.u64;
	// add r3,r3,r28
	ctx.r3.u64 = ctx.r3.u64 + ctx.r28.u64;
	// add r31,r31,r6
	ctx.r31.u64 = ctx.r31.u64 + ctx.r6.u64;
	// add r3,r3,r27
	ctx.r3.u64 = ctx.r3.u64 + ctx.r27.u64;
	// rlwinm r31,r31,1,0,30
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// mullw r3,r3,r26
	ctx.r3.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r26.s32);
	// add r31,r31,r23
	ctx.r31.u64 = ctx.r31.u64 + ctx.r23.u64;
	// add r31,r31,r24
	ctx.r31.u64 = ctx.r31.u64 + ctx.r24.u64;
	// add r31,r31,r29
	ctx.r31.u64 = ctx.r31.u64 + ctx.r29.u64;
	// add r6,r31,r6
	ctx.r6.u64 = ctx.r31.u64 + ctx.r6.u64;
	// mullw r6,r6,r25
	ctx.r6.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r25.s32);
	// add r6,r6,r3
	ctx.r6.u64 = ctx.r6.u64 + ctx.r3.u64;
	// add r6,r6,r7
	ctx.r6.u64 = ctx.r6.u64 + ctx.r7.u64;
	// srawi r6,r6,16
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xFFFF) != 0);
	ctx.r6.s64 = ctx.r6.s32 >> 16;
	// stb r6,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r6.u8);
	// beq cr6,0x82804c88
	if (ctx.cr6.eq) goto loc_82804C88;
	// mtctr r16
	ctx.ctr.u64 = ctx.r16.u64;
loc_82804BCC:
	// lbz r30,1(r11)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// addi r3,r9,2
	ctx.r3.s64 = ctx.r9.s64 + 2;
	// lbz r29,1(r10)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r10.u32 + 1);
	// addi r6,r8,2
	ctx.r6.s64 = ctx.r8.s64 + 2;
	// lbz r24,-1(r9)
	ctx.r24.u64 = PPC_LOAD_U8(ctx.r9.u32 + -1);
	// addi r31,r10,2
	ctx.r31.s64 = ctx.r10.s64 + 2;
	// add r29,r30,r29
	ctx.r29.u64 = ctx.r30.u64 + ctx.r29.u64;
	// lbz r27,-1(r8)
	ctx.r27.u64 = PPC_LOAD_U8(ctx.r8.u32 + -1);
	// lbz r28,0(r11)
	ctx.r28.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r30,r11,2
	ctx.r30.s64 = ctx.r11.s64 + 2;
	// add r29,r29,r24
	ctx.r29.u64 = ctx.r29.u64 + ctx.r24.u64;
	// lbz r23,0(r10)
	ctx.r23.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// lbz r22,2(r8)
	ctx.r22.u64 = PPC_LOAD_U8(ctx.r8.u32 + 2);
	// add r29,r29,r27
	ctx.r29.u64 = ctx.r29.u64 + ctx.r27.u64;
	// lbz r18,1(r8)
	ctx.r18.u64 = PPC_LOAD_U8(ctx.r8.u32 + 1);
	// lbz r24,1(r9)
	ctx.r24.u64 = PPC_LOAD_U8(ctx.r9.u32 + 1);
	// add r29,r29,r28
	ctx.r29.u64 = ctx.r29.u64 + ctx.r28.u64;
	// lbz r19,2(r9)
	ctx.r19.u64 = PPC_LOAD_U8(ctx.r9.u32 + 2);
	// lbz r27,-1(r11)
	ctx.r27.u64 = PPC_LOAD_U8(ctx.r11.u32 + -1);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// add r29,r29,r23
	ctx.r29.u64 = ctx.r29.u64 + ctx.r23.u64;
	// lbz r23,0(r9)
	ctx.r23.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// lbz r28,-1(r10)
	ctx.r28.u64 = PPC_LOAD_U8(ctx.r10.u32 + -1);
	// add r22,r29,r22
	ctx.r22.u64 = ctx.r29.u64 + ctx.r22.u64;
	// lbz r29,0(r31)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// add r3,r24,r18
	ctx.r3.u64 = ctx.r24.u64 + ctx.r18.u64;
	// lbz r24,0(r8)
	ctx.r24.u64 = PPC_LOAD_U8(ctx.r8.u32 + 0);
	// add r8,r22,r19
	ctx.r8.u64 = ctx.r22.u64 + ctx.r19.u64;
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// lbz r31,0(r30)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r30.u32 + 0);
	// rlwinm r8,r8,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// add r3,r3,r23
	ctx.r3.u64 = ctx.r3.u64 + ctx.r23.u64;
	// add r8,r8,r27
	ctx.r8.u64 = ctx.r8.u64 + ctx.r27.u64;
	// add r3,r3,r24
	ctx.r3.u64 = ctx.r3.u64 + ctx.r24.u64;
	// add r30,r8,r28
	ctx.r30.u64 = ctx.r8.u64 + ctx.r28.u64;
	// mr r8,r6
	ctx.r8.u64 = ctx.r6.u64;
	// add r6,r30,r29
	ctx.r6.u64 = ctx.r30.u64 + ctx.r29.u64;
	// mullw r3,r3,r26
	ctx.r3.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r26.s32);
	// add r6,r6,r31
	ctx.r6.u64 = ctx.r6.u64 + ctx.r31.u64;
	// mullw r6,r6,r25
	ctx.r6.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r25.s32);
	// add r6,r6,r3
	ctx.r6.u64 = ctx.r6.u64 + ctx.r3.u64;
	// add r6,r6,r7
	ctx.r6.u64 = ctx.r6.u64 + ctx.r7.u64;
	// srawi r6,r6,16
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xFFFF) != 0);
	ctx.r6.s64 = ctx.r6.s32 >> 16;
	// stb r6,0(r5)
	PPC_STORE_U8(ctx.r5.u32 + 0, ctx.r6.u8);
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// bdnz 0x82804bcc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82804BCC;
loc_82804C88:
	// lbz r3,-1(r9)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r9.u32 + -1);
	// addi r17,r17,1
	ctx.r17.s64 = ctx.r17.s64 + 1;
	// lbz r30,-1(r8)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r8.u32 + -1);
	// mr r6,r21
	ctx.r6.u64 = ctx.r21.u64;
	// lbz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r20,r20,4
	ctx.r20.s64 = ctx.r20.s64 + 4;
	// add r3,r3,r30
	ctx.r3.u64 = ctx.r3.u64 + ctx.r30.u64;
	// lbz r28,0(r10)
	ctx.r28.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// lbz r29,1(r8)
	ctx.r29.u64 = PPC_LOAD_U8(ctx.r8.u32 + 1);
	// add r3,r3,r31
	ctx.r3.u64 = ctx.r3.u64 + ctx.r31.u64;
	// lbz r30,1(r9)
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r9.u32 + 1);
	// lbz r31,1(r10)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r10.u32 + 1);
	// add r28,r3,r28
	ctx.r28.u64 = ctx.r3.u64 + ctx.r28.u64;
	// lbz r3,1(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r27,-1(r11)
	ctx.r27.u64 = PPC_LOAD_U8(ctx.r11.u32 + -1);
	// add r24,r28,r29
	ctx.r24.u64 = ctx.r28.u64 + ctx.r29.u64;
	// lbz r28,-1(r10)
	ctx.r28.u64 = PPC_LOAD_U8(ctx.r10.u32 + -1);
	// lbz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// add r10,r24,r30
	ctx.r10.u64 = ctx.r24.u64 + ctx.r30.u64;
	// lbz r9,0(r8)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r8.u32 + 0);
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + ctx.r31.u64;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r9,r10,r3
	ctx.r9.u64 = ctx.r10.u64 + ctx.r3.u64;
	// add r10,r11,r29
	ctx.r10.u64 = ctx.r11.u64 + ctx.r29.u64;
	// rlwinm r11,r9,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + ctx.r30.u64;
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + ctx.r27.u64;
	// mullw r10,r10,r26
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r26.s32);
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// mullw r11,r11,r25
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r25.s32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// srawi r11,r11,16
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFFFF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 16;
	// stb r11,0(r5)
	PPC_STORE_U8(ctx.r5.u32 + 0, ctx.r11.u8);
	// lwz r11,12(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// cmpw cr6,r17,r11
	ctx.cr6.compare<int32_t>(ctx.r17.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82804b10
	if (ctx.cr6.lt) goto loc_82804B10;
loc_82804D24:
	// b 0x82fa7698
	__restgprlr_16(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82804D28"))) PPC_WEAK_FUNC(sub_82804D28);
PPC_FUNC_IMPL(__imp__sub_82804D28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7660
	ctx.lr = 0x82804D30;
	__savegprlr_22(ctx, base);
	// lwz r11,28(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 28);
	// lwz r9,28(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// rlwinm r31,r11,3,0,28
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r11,220(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 220);
	// subf. r10,r9,r31
	ctx.r10.s64 = ctx.r31.s64 - ctx.r9.s64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// ble 0x82804d88
	if (!ctx.cr0.gt) goto loc_82804D88;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82804d88
	if (!ctx.cr6.gt) goto loc_82804D88;
	// addi r8,r5,-8
	ctx.r8.s64 = ctx.r5.s64 + -8;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
loc_82804D5C:
	// lwzu r11,4(r8)
	ea = 4 + ctx.r8.u32;
	ctx.r11.u64 = PPC_LOAD_U32(ea);
	ctx.r8.u32 = ea;
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// addi r7,r11,-1
	ctx.r7.s64 = ctx.r11.s64 + -1;
	// lbz r11,-1(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + -1);
	// beq 0x82804d80
	if (ctx.cr0.eq) goto loc_82804D80;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82804D78:
	// stbu r11,1(r7)
	ea = 1 + ctx.r7.u32;
	PPC_STORE_U8(ea, ctx.r11.u8);
	ctx.r7.u32 = ea;
	// bdnz 0x82804d78
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82804D78;
loc_82804D80:
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne 0x82804d5c
	if (!ctx.cr0.eq) goto loc_82804D5C;
loc_82804D88:
	// lwz r11,180(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 180);
	// li r22,0
	ctx.r22.s64 = 0;
	// lwz r10,12(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// subfic r9,r11,128
	ctx.xer.ca = ctx.r11.u32 <= 128;
	ctx.r9.s64 = 128 - ctx.r11.s64;
	// rlwinm r29,r11,6,0,25
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0xFFFFFFC0;
	// rlwinm r28,r9,9,0,22
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 9) & 0xFFFFFE00;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x82804eb8
	if (!ctx.cr6.gt) goto loc_82804EB8;
	// lis r11,0
	ctx.r11.s64 = 0;
	// addi r23,r31,-2
	ctx.r23.s64 = ctx.r31.s64 + -2;
	// mr r24,r6
	ctx.r24.u64 = ctx.r6.u64;
	// addi r3,r5,4
	ctx.r3.s64 = ctx.r5.s64 + 4;
	// ori r7,r11,32768
	ctx.r7.u64 = ctx.r11.u64 | 32768;
loc_82804DBC:
	// lwz r8,-8(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + -8);
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,-4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// lwz r30,0(r24)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// lbz r10,0(r8)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r8.u32 + 0);
	// addi r5,r30,1
	ctx.r5.s64 = ctx.r30.s64 + 1;
	// lbz r31,0(r9)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// lbz r6,0(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// add r31,r31,r10
	ctx.r31.u64 = ctx.r31.u64 + ctx.r10.u64;
	// lbzu r25,1(r8)
	ea = 1 + ctx.r8.u32;
	ctx.r25.u64 = PPC_LOAD_U8(ea);
	ctx.r8.u32 = ea;
	// lbzu r10,1(r9)
	ea = 1 + ctx.r9.u32;
	ctx.r10.u64 = PPC_LOAD_U8(ea);
	ctx.r9.u32 = ea;
	// mullw r26,r6,r28
	ctx.r26.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r28.s32);
	// lbzu r27,1(r11)
	ea = 1 + ctx.r11.u32;
	ctx.r27.u64 = PPC_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// add r31,r31,r6
	ctx.r31.u64 = ctx.r31.u64 + ctx.r6.u64;
	// add r10,r10,r25
	ctx.r10.u64 = ctx.r10.u64 + ctx.r25.u64;
	// rlwinm r25,r31,1,0,30
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r10,r27
	ctx.r10.u64 = ctx.r10.u64 + ctx.r27.u64;
	// subf r6,r6,r25
	ctx.r6.s64 = ctx.r25.s64 - ctx.r6.s64;
	// add r27,r6,r10
	ctx.r27.u64 = ctx.r6.u64 + ctx.r10.u64;
	// mr r6,r10
	ctx.r6.u64 = ctx.r10.u64;
	// mullw r27,r27,r29
	ctx.r27.s64 = int64_t(ctx.r27.s32) * int64_t(ctx.r29.s32);
	// add r27,r27,r26
	ctx.r27.u64 = ctx.r27.u64 + ctx.r26.u64;
	// add r27,r27,r7
	ctx.r27.u64 = ctx.r27.u64 + ctx.r7.u64;
	// srawi r27,r27,16
	ctx.xer.ca = (ctx.r27.s32 < 0) & ((ctx.r27.u32 & 0xFFFF) != 0);
	ctx.r27.s64 = ctx.r27.s32 >> 16;
	// stb r27,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r27.u8);
	// beq cr6,0x82804e78
	if (ctx.cr6.eq) goto loc_82804E78;
	// mtctr r23
	ctx.ctr.u64 = ctx.r23.u64;
loc_82804E2C:
	// lbzu r27,1(r8)
	ea = 1 + ctx.r8.u32;
	ctx.r27.u64 = PPC_LOAD_U8(ea);
	ctx.r8.u32 = ea;
	// lbzu r10,1(r9)
	ea = 1 + ctx.r9.u32;
	ctx.r10.u64 = PPC_LOAD_U8(ea);
	ctx.r9.u32 = ea;
	// lbz r25,0(r11)
	ctx.r25.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbzu r26,1(r11)
	ea = 1 + ctx.r11.u32;
	ctx.r26.u64 = PPC_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// add r10,r10,r27
	ctx.r10.u64 = ctx.r10.u64 + ctx.r27.u64;
	// subf r30,r25,r31
	ctx.r30.s64 = ctx.r31.s64 - ctx.r25.s64;
	// add r10,r10,r26
	ctx.r10.u64 = ctx.r10.u64 + ctx.r26.u64;
	// mullw r27,r25,r28
	ctx.r27.s64 = int64_t(ctx.r25.s32) * int64_t(ctx.r28.s32);
	// add r30,r30,r10
	ctx.r30.u64 = ctx.r30.u64 + ctx.r10.u64;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// add r30,r30,r6
	ctx.r30.u64 = ctx.r30.u64 + ctx.r6.u64;
	// mr r6,r10
	ctx.r6.u64 = ctx.r10.u64;
	// mullw r30,r30,r29
	ctx.r30.s64 = int64_t(ctx.r30.s32) * int64_t(ctx.r29.s32);
	// add r30,r30,r27
	ctx.r30.u64 = ctx.r30.u64 + ctx.r27.u64;
	// add r30,r30,r7
	ctx.r30.u64 = ctx.r30.u64 + ctx.r7.u64;
	// srawi r30,r30,16
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0xFFFF) != 0);
	ctx.r30.s64 = ctx.r30.s32 >> 16;
	// stb r30,0(r5)
	PPC_STORE_U8(ctx.r5.u32 + 0, ctx.r30.u8);
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// bdnz 0x82804e2c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82804E2C;
loc_82804E78:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// rlwinm r11,r10,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r22,r22,1
	ctx.r22.s64 = ctx.r22.s64 + 1;
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// mullw r10,r9,r28
	ctx.r10.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r28.s32);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r24,r24,4
	ctx.r24.s64 = ctx.r24.s64 + 4;
	// mullw r11,r11,r29
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r29.s32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// srawi r11,r11,16
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xFFFF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 16;
	// stb r11,0(r5)
	PPC_STORE_U8(ctx.r5.u32 + 0, ctx.r11.u8);
	// lwz r11,12(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// cmpw cr6,r22,r11
	ctx.cr6.compare<int32_t>(ctx.r22.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82804dbc
	if (ctx.cr6.lt) goto loc_82804DBC;
loc_82804EB8:
	// b 0x82fa76b0
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82804EBC"))) PPC_WEAK_FUNC(sub_82804EBC);
PPC_FUNC_IMPL(__imp__sub_82804EBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82804EC0"))) PPC_WEAK_FUNC(sub_82804EC0);
PPC_FUNC_IMPL(__imp__sub_82804EC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa766c
	ctx.lr = 0x82804EC8;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r25,1
	ctx.r25.s64 = 1;
	// li r5,52
	ctx.r5.s64 = 52;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r26,r25
	ctx.r26.u64 = ctx.r25.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82804EF0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32128
	ctx.r11.s64 = -2105540608;
	// stw r3,340(r31)
	PPC_STORE_U32(ctx.r31.u32 + 340, ctx.r3.u32);
	// lis r10,-32128
	ctx.r10.s64 = -2105540608;
	// addi r11,r11,17896
	ctx.r11.s64 = ctx.r11.s64 + 17896;
	// addi r10,r10,17976
	ctx.r10.s64 = ctx.r10.s64 + 17976;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stb r9,8(r3)
	PPC_STORE_U8(ctx.r3.u32 + 8, ctx.r9.u8);
	// lbz r11,179(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 179);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82804f44
	if (ctx.cr0.eq) goto loc_82804F44;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r10,25
	ctx.r10.s64 = 25;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82804F44;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82804F44:
	// lwz r10,60(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// li r27,0
	ctx.r27.s64 = 0;
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x828050b0
	if (!ctx.cr6.gt) goto loc_828050B0;
	// addi r29,r11,12
	ctx.r29.s64 = ctx.r11.s64 + 12;
	// addi r30,r28,12
	ctx.r30.s64 = ctx.r28.s64 + 12;
loc_82804F60:
	// lwz r10,-4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + -4);
	// lwz r11,216(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 216);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x82804fac
	if (!ctx.cr6.eq) goto loc_82804FAC;
	// lwz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r8,220(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 220);
	// cmpw cr6,r9,r8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x82804fac
	if (!ctx.cr6.eq) goto loc_82804FAC;
	// lwz r11,180(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82804fa0
	if (ctx.cr6.eq) goto loc_82804FA0;
	// lis r11,-32128
	ctx.r11.s64 = -2105540608;
	// addi r11,r11,19752
	ctx.r11.s64 = ctx.r11.s64 + 19752;
loc_82804F94:
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// stb r25,8(r28)
	PPC_STORE_U8(ctx.r28.u32 + 8, ctx.r25.u8);
	// b 0x82805098
	goto loc_82805098;
loc_82804FA0:
	// lis r11,-32128
	ctx.r11.s64 = -2105540608;
	// addi r11,r11,18472
	ctx.r11.s64 = ctx.r11.s64 + 18472;
	// b 0x82805070
	goto loc_82805070;
loc_82804FAC:
	// rlwinm r9,r10,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpw cr6,r9,r11
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x82805014
	if (!ctx.cr6.eq) goto loc_82805014;
	// lwz r8,0(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r7,220(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 220);
	// cmpw cr6,r8,r7
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r7.s32, ctx.xer);
	// bne cr6,0x82804fd4
	if (!ctx.cr6.eq) goto loc_82804FD4;
	// lis r11,-32128
	ctx.r11.s64 = -2105540608;
	// addi r11,r11,18616
	ctx.r11.s64 = ctx.r11.s64 + 18616;
	// b 0x8280506c
	goto loc_8280506C;
loc_82804FD4:
	// cmpw cr6,r9,r11
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x82805014
	if (!ctx.cr6.eq) goto loc_82805014;
	// lwz r9,0(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r8,220(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 220);
	// rlwinm r9,r9,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpw cr6,r9,r8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x82805014
	if (!ctx.cr6.eq) goto loc_82805014;
	// lwz r11,180(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82805008
	if (ctx.cr6.eq) goto loc_82805008;
	// lis r11,-32128
	ctx.r11.s64 = -2105540608;
	// addi r11,r11,19064
	ctx.r11.s64 = ctx.r11.s64 + 19064;
	// b 0x82804f94
	goto loc_82804F94;
loc_82805008:
	// lis r11,-32128
	ctx.r11.s64 = -2105540608;
	// addi r11,r11,18824
	ctx.r11.s64 = ctx.r11.s64 + 18824;
	// b 0x82805070
	goto loc_82805070;
loc_82805014:
	// rotlwi r9,r11,1
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r11.u32, 1);
	// divw r8,r11,r10
	ctx.r8.s32 = ctx.r11.s32 / ctx.r10.s32;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// mullw r8,r8,r10
	ctx.r8.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r10.s32);
	// twllei r10,0
	if (ctx.r10.u32 <= 0) __builtin_debugtrap();
	// andc r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 & ~ctx.r9.u64;
	// subf. r11,r8,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r8.s64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// twlgei r10,-1
	if (ctx.r10.u32 >= 4294967295) __builtin_debugtrap();
	// bne 0x82805078
	if (!ctx.cr0.eq) goto loc_82805078;
	// lwz r9,220(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 220);
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// rotlwi r11,r9,1
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r9.u32, 1);
	// divw r8,r9,r10
	ctx.r8.s32 = ctx.r9.s32 / ctx.r10.s32;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// mullw r8,r8,r10
	ctx.r8.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r10.s32);
	// andc r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ~ctx.r11.u64;
	// twllei r10,0
	if (ctx.r10.u32 <= 0) __builtin_debugtrap();
	// subf. r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// twlgei r11,-1
	if (ctx.r11.u32 >= 4294967295) __builtin_debugtrap();
	// bne 0x82805078
	if (!ctx.cr0.eq) goto loc_82805078;
	// lis r11,-32128
	ctx.r11.s64 = -2105540608;
	// addi r11,r11,18120
	ctx.r11.s64 = ctx.r11.s64 + 18120;
loc_8280506C:
	// li r26,0
	ctx.r26.s64 = 0;
loc_82805070:
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// b 0x82805098
	goto loc_82805098;
loc_82805078:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r10,38
	ctx.r10.s64 = 38;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82805098;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82805098:
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// addi r29,r29,84
	ctx.r29.s64 = ctx.r29.s64 + 84;
	// cmpw cr6,r27,r11
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82804f60
	if (ctx.cr6.lt) goto loc_82804F60;
loc_828050B0:
	// lwz r11,180(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x828050e8
	if (ctx.cr6.eq) goto loc_828050E8;
	// clrlwi. r11,r26,24
	ctx.r11.u64 = ctx.r26.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x828050e8
	if (!ctx.cr0.eq) goto loc_828050E8;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r10,99
	ctx.r10.s64 = 99;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828050E8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_828050E8:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82fa76bc
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828050F0"))) PPC_WEAK_FUNC(sub_828050F0);
PPC_FUNC_IMPL(__imp__sub_828050F0) {
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
	// li r5,8192
	ctx.r5.s64 = 8192;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r31,336(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 336);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82805120;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,256
	ctx.r11.s64 = 256;
	// stw r3,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// lis r10,0
	ctx.r10.s64 = 0;
	// lis r5,128
	ctx.r5.s64 = 8388608;
	// ori r30,r10,32768
	ctx.r30.u64 = ctx.r10.u64 | 32768;
	// li r31,0
	ctx.r31.s64 = 0;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// ori r5,r5,32767
	ctx.r5.u64 = ctx.r5.u64 | 32767;
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// addi r11,r3,7164
	ctx.r11.s64 = ctx.r3.s64 + 7164;
loc_8280515C:
	// stw r9,-6140(r11)
	PPC_STORE_U32(ctx.r11.u32 + -6140, ctx.r9.u32);
	// addis r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 65536;
	// stw r10,-7164(r11)
	PPC_STORE_U32(ctx.r11.u32 + -7164, ctx.r10.u32);
	// addi r10,r10,19595
	ctx.r10.s64 = ctx.r10.s64 + 19595;
	// stw r8,-5116(r11)
	PPC_STORE_U32(ctx.r11.u32 + -5116, ctx.r8.u32);
	// addi r9,r9,-27066
	ctx.r9.s64 = ctx.r9.s64 + -27066;
	// stw r7,-4092(r11)
	PPC_STORE_U32(ctx.r11.u32 + -4092, ctx.r7.u32);
	// addi r8,r8,7471
	ctx.r8.s64 = ctx.r8.s64 + 7471;
	// stw r6,-3068(r11)
	PPC_STORE_U32(ctx.r11.u32 + -3068, ctx.r6.u32);
	// addi r7,r7,-11059
	ctx.r7.s64 = ctx.r7.s64 + -11059;
	// stw r5,-2044(r11)
	PPC_STORE_U32(ctx.r11.u32 + -2044, ctx.r5.u32);
	// addi r6,r6,-21709
	ctx.r6.s64 = ctx.r6.s64 + -21709;
	// stw r4,-1020(r11)
	PPC_STORE_U32(ctx.r11.u32 + -1020, ctx.r4.u32);
	// add r5,r5,r30
	ctx.r5.u64 = ctx.r5.u64 + ctx.r30.u64;
	// stwu r31,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r31.u32);
	ctx.r11.u32 = ea;
	// addi r4,r4,-27439
	ctx.r4.s64 = ctx.r4.s64 + -27439;
	// addi r31,r31,-5329
	ctx.r31.s64 = ctx.r31.s64 + -5329;
	// bdnz 0x8280515c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8280515C;
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

__attribute__((alias("__imp__sub_828051BC"))) PPC_WEAK_FUNC(sub_828051BC);
PPC_FUNC_IMPL(__imp__sub_828051BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_828051C0"))) PPC_WEAK_FUNC(sub_828051C0);
PPC_FUNC_IMPL(__imp__sub_828051C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7660
	ctx.lr = 0x828051C8;
	__savegprlr_22(ctx, base);
	// lwz r11,336(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 336);
	// addic. r25,r7,-1
	ctx.xer.ca = ctx.r7.u32 > 0;
	ctx.r25.s64 = ctx.r7.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// lwz r27,28(r3)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// blt 0x828052d0
	if (ctx.cr0.lt) goto loc_828052D0;
	// rlwinm r28,r6,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r26,r4,-4
	ctx.r26.s64 = ctx.r4.s64 + -4;
loc_828051E4:
	// lwz r10,0(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// lwz r7,4(r5)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// lwz r6,8(r5)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// lwzu r9,4(r26)
	ea = 4 + ctx.r26.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r26.u32 = ea;
	// lwzx r8,r28,r10
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r10.u32);
	// lwzx r10,r28,r7
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r7.u32);
	// lwzx r7,r6,r28
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r28.u32);
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// beq cr6,0x828052c8
	if (ctx.cr6.eq) goto loc_828052C8;
	// mtctr r27
	ctx.ctr.u64 = ctx.r27.u64;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// subf r30,r10,r8
	ctx.r30.s64 = ctx.r8.s64 - ctx.r10.s64;
	// subf r29,r10,r7
	ctx.r29.s64 = ctx.r7.s64 - ctx.r10.s64;
loc_8280521C:
	// lbz r6,1(r9)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r9.u32 + 1);
	// lbz r8,2(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 2);
	// lbzu r7,3(r9)
	ea = 3 + ctx.r9.u32;
	ctx.r7.u64 = PPC_LOAD_U8(ea);
	ctx.r9.u32 = ea;
	// rotlwi r4,r6,2
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r6.u32, 2);
	// addi r3,r8,256
	ctx.r3.s64 = ctx.r8.s64 + 256;
	// addi r24,r7,512
	ctx.r24.s64 = ctx.r7.s64 + 512;
	// rlwinm r3,r3,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r24,r24,2,0,29
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r31,r4,r11
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r11.u32);
	// addi r22,r6,768
	ctx.r22.s64 = ctx.r6.s64 + 768;
	// addi r23,r7,1280
	ctx.r23.s64 = ctx.r7.s64 + 1280;
	// addi r7,r7,1792
	ctx.r7.s64 = ctx.r7.s64 + 1792;
	// lwzx r4,r3,r11
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r11.u32);
	// addi r6,r6,1280
	ctx.r6.s64 = ctx.r6.s64 + 1280;
	// lwzx r3,r24,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + ctx.r11.u32);
	// rlwinm r24,r22,2,0,29
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r22,r8,1024
	ctx.r22.s64 = ctx.r8.s64 + 1024;
	// add r4,r3,r4
	ctx.r4.u64 = ctx.r3.u64 + ctx.r4.u64;
	// rlwinm r3,r23,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 2) & 0xFFFFFFFC;
	// add r4,r4,r31
	ctx.r4.u64 = ctx.r4.u64 + ctx.r31.u64;
	// rlwinm r31,r22,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 2) & 0xFFFFFFFC;
	// srawi r4,r4,16
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xFFFF) != 0);
	ctx.r4.s64 = ctx.r4.s32 >> 16;
	// addi r8,r8,1536
	ctx.r8.s64 = ctx.r8.s64 + 1536;
	// stbx r4,r30,r10
	PPC_STORE_U8(ctx.r30.u32 + ctx.r10.u32, ctx.r4.u8);
	// rlwinm r4,r7,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r24,r11
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r24.u32 + ctx.r11.u32);
	// rlwinm r24,r6,2,0,29
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r6,r31,r11
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// rlwinm r31,r8,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r3,r11
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r11.u32);
	// add r8,r8,r6
	ctx.r8.u64 = ctx.r8.u64 + ctx.r6.u64;
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// srawi r8,r8,16
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xFFFF) != 0);
	ctx.r8.s64 = ctx.r8.s32 >> 16;
	// stb r8,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r8.u8);
	// lwzx r7,r24,r11
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r24.u32 + ctx.r11.u32);
	// lwzx r8,r4,r11
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r11.u32);
	// lwzx r6,r31,r11
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// add r8,r8,r6
	ctx.r8.u64 = ctx.r8.u64 + ctx.r6.u64;
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// srawi r8,r8,16
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xFFFF) != 0);
	ctx.r8.s64 = ctx.r8.s32 >> 16;
	// stbx r8,r29,r10
	PPC_STORE_U8(ctx.r29.u32 + ctx.r10.u32, ctx.r8.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// bdnz 0x8280521c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_8280521C;
loc_828052C8:
	// addic. r25,r25,-1
	ctx.xer.ca = ctx.r25.u32 > 0;
	ctx.r25.s64 = ctx.r25.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// bge 0x828051e4
	if (!ctx.cr0.lt) goto loc_828051E4;
loc_828052D0:
	// b 0x82fa76b0
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828052D4"))) PPC_WEAK_FUNC(sub_828052D4);
PPC_FUNC_IMPL(__imp__sub_828052D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_828052D8"))) PPC_WEAK_FUNC(sub_828052D8);
PPC_FUNC_IMPL(__imp__sub_828052D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x828052E0;
	__savegprlr_28(ctx, base);
	// lwz r11,336(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 336);
	// addic. r29,r7,-1
	ctx.xer.ca = ctx.r7.u32 > 0;
	ctx.r29.s64 = ctx.r7.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// lwz r30,28(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// blt 0x82805370
	if (ctx.cr0.lt) goto loc_82805370;
	// rlwinm r3,r6,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r31,r4,-4
	ctx.r31.s64 = ctx.r4.s64 + -4;
loc_828052FC:
	// lwz r8,0(r5)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwzu r11,4(r31)
	ea = 4 + ctx.r31.u32;
	ctx.r11.u64 = PPC_LOAD_U32(ea);
	ctx.r31.u32 = ea;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// lwzx r4,r8,r3
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r3.u32);
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// beq cr6,0x82805368
	if (ctx.cr6.eq) goto loc_82805368;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
loc_82805320:
	// lbz r7,1(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 1);
	// lbz r6,2(r11)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r11.u32 + 2);
	// rotlwi r28,r7,2
	ctx.r28.u64 = __builtin_rotateleft32(ctx.r7.u32, 2);
	// lbzu r8,3(r11)
	ea = 3 + ctx.r11.u32;
	ctx.r8.u64 = PPC_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// addi r8,r8,512
	ctx.r8.s64 = ctx.r8.s64 + 512;
	// addi r7,r7,256
	ctx.r7.s64 = ctx.r7.s64 + 256;
	// lwzx r6,r28,r9
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r9.u32);
	// rlwinm r7,r7,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r28,r8,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r7,r9
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r9.u32);
	// lwzx r7,r28,r9
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r9.u32);
	// add r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 + ctx.r8.u64;
	// add r8,r8,r6
	ctx.r8.u64 = ctx.r8.u64 + ctx.r6.u64;
	// srawi r8,r8,16
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xFFFF) != 0);
	ctx.r8.s64 = ctx.r8.s32 >> 16;
	// stbx r8,r10,r4
	PPC_STORE_U8(ctx.r10.u32 + ctx.r4.u32, ctx.r8.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// bdnz 0x82805320
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82805320;
loc_82805368:
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bge 0x828052fc
	if (!ctx.cr0.lt) goto loc_828052FC;
loc_82805370:
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82805374"))) PPC_WEAK_FUNC(sub_82805374);
PPC_FUNC_IMPL(__imp__sub_82805374) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82805378"))) PPC_WEAK_FUNC(sub_82805378);
PPC_FUNC_IMPL(__imp__sub_82805378) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7650
	ctx.lr = 0x82805380;
	__savegprlr_18(ctx, base);
	// lwz r11,336(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 336);
	// addic. r24,r7,-1
	ctx.xer.ca = ctx.r7.u32 > 0;
	ctx.r24.s64 = ctx.r7.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// lwz r26,28(r3)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// blt 0x828054a8
	if (ctx.cr0.lt) goto loc_828054A8;
	// rlwinm r27,r6,2,0,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r25,r4,-4
	ctx.r25.s64 = ctx.r4.s64 + -4;
loc_8280539C:
	// lwz r10,0(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// lwz r8,4(r5)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// lwz r7,8(r5)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// lwz r6,12(r5)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	// lwzu r9,4(r25)
	ea = 4 + ctx.r25.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r25.u32 = ea;
	// lwzx r10,r27,r10
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r10.u32);
	// lwzx r8,r27,r8
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r8.u32);
	// lwzx r7,r7,r27
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r27.u32);
	// lwzx r6,r27,r6
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r6.u32);
	// addi r27,r27,4
	ctx.r27.s64 = ctx.r27.s64 + 4;
	// beq cr6,0x828054a0
	if (ctx.cr6.eq) goto loc_828054A0;
	// mtctr r26
	ctx.ctr.u64 = ctx.r26.u64;
	// addi r9,r9,-1
	ctx.r9.s64 = ctx.r9.s64 + -1;
	// subf r30,r10,r6
	ctx.r30.s64 = ctx.r6.s64 - ctx.r10.s64;
	// subf r29,r10,r8
	ctx.r29.s64 = ctx.r8.s64 - ctx.r10.s64;
	// subf r28,r10,r7
	ctx.r28.s64 = ctx.r7.s64 - ctx.r10.s64;
loc_828053E0:
	// lbz r8,1(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 1);
	// lbz r7,2(r9)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r9.u32 + 2);
	// subfic r8,r8,255
	ctx.xer.ca = ctx.r8.u32 <= 255;
	ctx.r8.s64 = 255 - ctx.r8.s64;
	// lbz r6,3(r9)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r9.u32 + 3);
	// lbzu r4,4(r9)
	ea = 4 + ctx.r9.u32;
	ctx.r4.u64 = PPC_LOAD_U8(ea);
	ctx.r9.u32 = ea;
	// subfic r7,r7,255
	ctx.xer.ca = ctx.r7.u32 <= 255;
	ctx.r7.s64 = 255 - ctx.r7.s64;
	// rlwinm r31,r8,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// subfic r6,r6,255
	ctx.xer.ca = ctx.r6.u32 <= 255;
	ctx.r6.s64 = 255 - ctx.r6.s64;
	// addi r23,r8,768
	ctx.r23.s64 = ctx.r8.s64 + 768;
	// addi r3,r6,512
	ctx.r3.s64 = ctx.r6.s64 + 512;
	// stbx r4,r30,r10
	PPC_STORE_U8(ctx.r30.u32 + ctx.r10.u32, ctx.r4.u8);
	// addi r4,r7,256
	ctx.r4.s64 = ctx.r7.s64 + 256;
	// lwzx r31,r31,r11
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r11.u32);
	// rlwinm r3,r3,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r4,r4,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r8,1280
	ctx.r8.s64 = ctx.r8.s64 + 1280;
	// rlwinm r23,r23,2,0,29
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r20,r8,2,0,29
	ctx.r20.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r3,r3,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r11.u32);
	// addi r22,r7,1024
	ctx.r22.s64 = ctx.r7.s64 + 1024;
	// lwzx r4,r4,r11
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r11.u32);
	// add r4,r3,r4
	ctx.r4.u64 = ctx.r3.u64 + ctx.r4.u64;
	// add r8,r4,r31
	ctx.r8.u64 = ctx.r4.u64 + ctx.r31.u64;
	// addi r7,r7,1536
	ctx.r7.s64 = ctx.r7.s64 + 1536;
	// srawi r8,r8,16
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xFFFF) != 0);
	ctx.r8.s64 = ctx.r8.s32 >> 16;
	// rlwinm r18,r7,2,0,29
	ctx.r18.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// stb r8,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r8.u8);
	// addi r21,r6,1280
	ctx.r21.s64 = ctx.r6.s64 + 1280;
	// lwzx r7,r23,r11
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r23.u32 + ctx.r11.u32);
	// rlwinm r22,r22,2,0,29
	ctx.r22.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r21,r21,2,0,29
	ctx.r21.u64 = __builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r6,r6,1792
	ctx.r6.s64 = ctx.r6.s64 + 1792;
	// rlwinm r19,r6,2,0,29
	ctx.r19.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r6,r22,r11
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r22.u32 + ctx.r11.u32);
	// lwzx r8,r21,r11
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r21.u32 + ctx.r11.u32);
	// add r8,r8,r6
	ctx.r8.u64 = ctx.r8.u64 + ctx.r6.u64;
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// srawi r8,r8,16
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xFFFF) != 0);
	ctx.r8.s64 = ctx.r8.s32 >> 16;
	// stbx r8,r29,r10
	PPC_STORE_U8(ctx.r29.u32 + ctx.r10.u32, ctx.r8.u8);
	// lwzx r7,r20,r11
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r20.u32 + ctx.r11.u32);
	// lwzx r8,r19,r11
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r19.u32 + ctx.r11.u32);
	// lwzx r6,r18,r11
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r18.u32 + ctx.r11.u32);
	// add r8,r8,r6
	ctx.r8.u64 = ctx.r8.u64 + ctx.r6.u64;
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// srawi r8,r8,16
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xFFFF) != 0);
	ctx.r8.s64 = ctx.r8.s32 >> 16;
	// stbx r8,r28,r10
	PPC_STORE_U8(ctx.r28.u32 + ctx.r10.u32, ctx.r8.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// bdnz 0x828053e0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_828053E0;
loc_828054A0:
	// addic. r24,r24,-1
	ctx.xer.ca = ctx.r24.u32 > 0;
	ctx.r24.s64 = ctx.r24.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// bge 0x8280539c
	if (!ctx.cr0.lt) goto loc_8280539C;
loc_828054A8:
	// b 0x82fa76a0
	__restgprlr_18(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828054AC"))) PPC_WEAK_FUNC(sub_828054AC);
PPC_FUNC_IMPL(__imp__sub_828054AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_828054B0"))) PPC_WEAK_FUNC(sub_828054B0);
PPC_FUNC_IMPL(__imp__sub_828054B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// lwz r8,28(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// addic. r31,r7,-1
	ctx.xer.ca = ctx.r7.u32 > 0;
	ctx.r31.s64 = ctx.r7.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// lwz r3,36(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// blt 0x82805508
	if (ctx.cr0.lt) goto loc_82805508;
	// rlwinm r10,r6,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r6,r4,-4
	ctx.r6.s64 = ctx.r4.s64 + -4;
loc_828054CC:
	// lwz r7,0(r5)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwzu r9,4(r6)
	ea = 4 + ctx.r6.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r6.u32 = ea;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// lwzx r4,r7,r10
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r10.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// beq cr6,0x82805500
	if (ctx.cr6.eq) goto loc_82805500;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// subf r9,r3,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r3.s64;
loc_828054F0:
	// lbzux r7,r9,r3
	ea = ctx.r9.u32 + ctx.r3.u32;
	ctx.r7.u64 = PPC_LOAD_U8(ea);
	ctx.r9.u32 = ea;
	// stbx r7,r11,r4
	PPC_STORE_U8(ctx.r11.u32 + ctx.r4.u32, ctx.r7.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x828054f0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_828054F0;
loc_82805500:
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bge 0x828054cc
	if (!ctx.cr0.lt) goto loc_828054CC;
loc_82805508:
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82805510"))) PPC_WEAK_FUNC(sub_82805510);
PPC_FUNC_IMPL(__imp__sub_82805510) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x82805518;
	__savegprlr_29(ctx, base);
	// addic. r29,r7,-1
	ctx.xer.ca = ctx.r7.u32 > 0;
	ctx.r29.s64 = ctx.r7.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// lwz r7,60(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// lwz r3,28(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// blt 0x82805590
	if (ctx.cr0.lt) goto loc_82805590;
	// rlwinm r30,r6,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
loc_8280552C:
	// li r31,0
	ctx.r31.s64 = 0;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// ble cr6,0x82805580
	if (!ctx.cr6.gt) goto loc_82805580;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
loc_8280553C:
	// lwz r9,0(r6)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// lwzx r8,r9,r30
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r30.u32);
	// beq cr6,0x82805570
	if (ctx.cr6.eq) goto loc_82805570;
	// subf r10,r7,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r7.s64;
	// mtctr r3
	ctx.ctr.u64 = ctx.r3.u64;
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + ctx.r31.u64;
loc_82805560:
	// lbzux r9,r10,r7
	ea = ctx.r10.u32 + ctx.r7.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r10.u32 = ea;
	// stbx r9,r11,r8
	PPC_STORE_U8(ctx.r11.u32 + ctx.r8.u32, ctx.r9.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x82805560
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82805560;
loc_82805570:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r6,r6,4
	ctx.r6.s64 = ctx.r6.s64 + 4;
	// cmpw cr6,r31,r7
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x8280553c
	if (ctx.cr6.lt) goto loc_8280553C;
loc_82805580:
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r4,r4,4
	ctx.r4.s64 = ctx.r4.s64 + 4;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// bge 0x8280552c
	if (!ctx.cr0.lt) goto loc_8280552C;
loc_82805590:
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82805594"))) PPC_WEAK_FUNC(sub_82805594);
PPC_FUNC_IMPL(__imp__sub_82805594) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82805598"))) PPC_WEAK_FUNC(sub_82805598);
PPC_FUNC_IMPL(__imp__sub_82805598) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8280559C"))) PPC_WEAK_FUNC(sub_8280559C);
PPC_FUNC_IMPL(__imp__sub_8280559C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_828055A0"))) PPC_WEAK_FUNC(sub_828055A0);
PPC_FUNC_IMPL(__imp__sub_828055A0) {
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
	// li r5,12
	ctx.r5.s64 = 12;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828055D0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32128
	ctx.r11.s64 = -2105540608;
	// stw r3,336(r31)
	PPC_STORE_U32(ctx.r31.u32 + 336, ctx.r3.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r11,r11,21912
	ctx.r11.s64 = ctx.r11.s64 + 21912;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8280562c
	if (ctx.cr6.eq) goto loc_8280562C;
	// ble cr6,0x8280561c
	if (!ctx.cr6.gt) goto loc_8280561C;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// ble cr6,0x82805610
	if (!ctx.cr6.gt) goto loc_82805610;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// bgt cr6,0x8280561c
	if (ctx.cr6.gt) goto loc_8280561C;
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// b 0x82805634
	goto loc_82805634;
loc_82805610:
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// b 0x82805634
	goto loc_82805634;
loc_8280561C:
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bge cr6,0x82805658
	if (!ctx.cr6.lt) goto loc_82805658;
	// b 0x82805638
	goto loc_82805638;
loc_8280562C:
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
loc_82805634:
	// beq cr6,0x82805658
	if (ctx.cr6.eq) goto loc_82805658;
loc_82805638:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r10,9
	ctx.r10.s64 = 9;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82805658;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82805658:
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x828057d8
	if (ctx.cr6.eq) goto loc_828057D8;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x828057a0
	if (ctx.cr6.eq) goto loc_828057A0;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x82805754
	if (ctx.cr6.eq) goto loc_82805754;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x8280571c
	if (ctx.cr6.eq) goto loc_8280571C;
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// beq cr6,0x828056c4
	if (ctx.cr6.eq) goto loc_828056C4;
	// lwz r10,40(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x828056a0
	if (!ctx.cr6.eq) goto loc_828056A0;
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// lwz r10,36(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x82805710
	if (ctx.cr6.eq) goto loc_82805710;
loc_828056A0:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r10,27
	ctx.r10.s64 = 27;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828056C0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82805710
	goto loc_82805710;
loc_828056C4:
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x828056f0
	if (ctx.cr6.eq) goto loc_828056F0;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r10,10
	ctx.r10.s64 = 10;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828056F0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_828056F0:
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// bne cr6,0x82805708
	if (!ctx.cr6.eq) goto loc_82805708;
	// lis r10,-32128
	ctx.r10.s64 = -2105540608;
	// addi r10,r10,21368
	ctx.r10.s64 = ctx.r10.s64 + 21368;
	// b 0x82805820
	goto loc_82805820;
loc_82805708:
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
loc_8280570C:
	// bne cr6,0x8280584c
	if (!ctx.cr6.eq) goto loc_8280584C;
loc_82805710:
	// lis r11,-32128
	ctx.r11.s64 = -2105540608;
	// addi r11,r11,21776
	ctx.r11.s64 = ctx.r11.s64 + 21776;
	// b 0x82805844
	goto loc_82805844;
loc_8280571C:
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x82805748
	if (ctx.cr6.eq) goto loc_82805748;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r10,10
	ctx.r10.s64 = 10;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82805748;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82805748:
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// b 0x8280570c
	goto loc_8280570C;
loc_82805754:
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x82805780
	if (ctx.cr6.eq) goto loc_82805780;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r10,10
	ctx.r10.s64 = 10;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82805780;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82805780:
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x82805798
	if (!ctx.cr6.eq) goto loc_82805798;
	// lis r10,-32128
	ctx.r10.s64 = -2105540608;
	// addi r10,r10,20928
	ctx.r10.s64 = ctx.r10.s64 + 20928;
	// b 0x82805820
	goto loc_82805820;
loc_82805798:
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// b 0x8280570c
	goto loc_8280570C;
loc_828057A0:
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x828057cc
	if (ctx.cr6.eq) goto loc_828057CC;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r10,10
	ctx.r10.s64 = 10;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828057CC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_828057CC:
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// b 0x8280570c
	goto loc_8280570C;
loc_828057D8:
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82805804
	if (ctx.cr6.eq) goto loc_82805804;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r10,10
	ctx.r10.s64 = 10;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82805804;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82805804:
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x8280583c
	if (ctx.cr6.eq) goto loc_8280583C;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x82805834
	if (!ctx.cr6.eq) goto loc_82805834;
	// lis r10,-32128
	ctx.r10.s64 = -2105540608;
	// addi r10,r10,21208
	ctx.r10.s64 = ctx.r10.s64 + 21208;
loc_82805820:
	// lis r11,-32128
	ctx.r11.s64 = -2105540608;
	// stw r10,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r10.u32);
	// addi r11,r11,20720
	ctx.r11.s64 = ctx.r11.s64 + 20720;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// b 0x8280586c
	goto loc_8280586C;
loc_82805834:
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x8280584c
	if (!ctx.cr6.eq) goto loc_8280584C;
loc_8280583C:
	// lis r11,-32128
	ctx.r11.s64 = -2105540608;
	// addi r11,r11,21680
	ctx.r11.s64 = ctx.r11.s64 + 21680;
loc_82805844:
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
	// b 0x8280586c
	goto loc_8280586C;
loc_8280584C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r10,27
	ctx.r10.s64 = 27;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r10,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8280586C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_8280586C:
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

__attribute__((alias("__imp__sub_82805884"))) PPC_WEAK_FUNC(sub_82805884);
PPC_FUNC_IMPL(__imp__sub_82805884) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82805888"))) PPC_WEAK_FUNC(sub_82805888);
PPC_FUNC_IMPL(__imp__sub_82805888) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7658
	ctx.lr = 0x82805890;
	__savegprlr_20(ctx, base);
	// li r10,8
	ctx.r10.s64 = 8;
	// lwz r11,80(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 80);
	// lwz r9,288(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 288);
	// addi r8,r1,-208
	ctx.r8.s64 = ctx.r1.s64 + -208;
	// subf r4,r11,r11
	ctx.r4.s64 = ctx.r11.s64 - ctx.r11.s64;
	// addi r29,r9,128
	ctx.r29.s64 = ctx.r9.s64 + 128;
	// li r30,8
	ctx.r30.s64 = 8;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// addi r10,r5,96
	ctx.r10.s64 = ctx.r5.s64 + 96;
	// add r9,r4,r8
	ctx.r9.u64 = ctx.r4.u64 + ctx.r8.u64;
loc_828058B8:
	// cmpwi cr6,r30,4
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 4, ctx.xer);
	// beq cr6,0x82805a10
	if (ctx.cr6.eq) goto loc_82805A10;
	// lha r8,-80(r10)
	ctx.r8.s64 = int16_t(PPC_LOAD_U16(ctx.r10.u32 + -80));
	// cmpwi r8,0
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x82805928
	if (!ctx.cr0.eq) goto loc_82805928;
	// lhz r5,-64(r10)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r10.u32 + -64);
	// cmplwi r5,0
	ctx.cr0.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne 0x82805928
	if (!ctx.cr0.eq) goto loc_82805928;
	// lhz r5,-48(r10)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r10.u32 + -48);
	// cmplwi r5,0
	ctx.cr0.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne 0x82805928
	if (!ctx.cr0.eq) goto loc_82805928;
	// lhz r5,-16(r10)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r10.u32 + -16);
	// cmplwi r5,0
	ctx.cr0.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne 0x82805928
	if (!ctx.cr0.eq) goto loc_82805928;
	// lhz r5,0(r10)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// cmplwi r5,0
	ctx.cr0.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne 0x82805928
	if (!ctx.cr0.eq) goto loc_82805928;
	// lhz r5,16(r10)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r10.u32 + 16);
	// cmplwi r5,0
	ctx.cr0.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne 0x82805928
	if (!ctx.cr0.eq) goto loc_82805928;
	// lha r8,-96(r10)
	ctx.r8.s64 = int16_t(PPC_LOAD_U16(ctx.r10.u32 + -96));
	// lwz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mullw r8,r8,r5
	ctx.r8.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r5.s32);
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r8,-32(r9)
	PPC_STORE_U32(ctx.r9.u32 + -32, ctx.r8.u32);
	// stw r8,32(r9)
	PPC_STORE_U32(ctx.r9.u32 + 32, ctx.r8.u32);
	// stw r8,64(r9)
	PPC_STORE_U32(ctx.r9.u32 + 64, ctx.r8.u32);
	// b 0x82805a0c
	goto loc_82805A0C;
loc_82805928:
	// lha r5,-48(r10)
	ctx.r5.s64 = int16_t(PPC_LOAD_U16(ctx.r10.u32 + -48));
	// lwz r28,96(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// lwz r27,32(r11)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// mullw r28,r5,r28
	ctx.r28.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r28.s32);
	// lwz r26,160(r11)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r11.u32 + 160);
	// lha r4,-16(r10)
	ctx.r4.s64 = int16_t(PPC_LOAD_U16(ctx.r10.u32 + -16));
	// mullw r27,r27,r8
	ctx.r27.s64 = int64_t(ctx.r27.s32) * int64_t(ctx.r8.s32);
	// lha r25,-96(r10)
	ctx.r25.s64 = int16_t(PPC_LOAD_U16(ctx.r10.u32 + -96));
	// lwz r24,192(r11)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r11.u32 + 192);
	// mullw r4,r4,r26
	ctx.r4.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r26.s32);
	// lwz r23,64(r11)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// lha r3,0(r10)
	ctx.r3.s64 = int16_t(PPC_LOAD_U16(ctx.r10.u32 + 0));
	// lha r31,-64(r10)
	ctx.r31.s64 = int16_t(PPC_LOAD_U16(ctx.r10.u32 + -64));
	// mulli r8,r28,7373
	ctx.r8.s64 = ctx.r28.s64 * 7373;
	// lha r22,16(r10)
	ctx.r22.s64 = int16_t(PPC_LOAD_U16(ctx.r10.u32 + 16));
	// mulli r5,r27,20995
	ctx.r5.s64 = ctx.r27.s64 * 20995;
	// lwz r21,0(r11)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mr r26,r25
	ctx.r26.u64 = ctx.r25.u64;
	// mullw r31,r31,r23
	ctx.r31.s64 = int64_t(ctx.r31.s32) * int64_t(ctx.r23.s32);
	// lwz r20,224(r11)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r11.u32 + 224);
	// mullw r3,r3,r24
	ctx.r3.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r24.s32);
	// add r23,r5,r8
	ctx.r23.u64 = ctx.r5.u64 + ctx.r8.u64;
	// mr r25,r22
	ctx.r25.u64 = ctx.r22.u64;
	// mullw r5,r26,r21
	ctx.r5.s64 = int64_t(ctx.r26.s32) * int64_t(ctx.r21.s32);
	// mulli r24,r4,11893
	ctx.r24.s64 = ctx.r4.s64 * 11893;
	// mulli r31,r31,15137
	ctx.r31.s64 = ctx.r31.s64 * 15137;
	// mulli r26,r3,6270
	ctx.r26.s64 = ctx.r3.s64 * 6270;
	// mulli r28,r28,17799
	ctx.r28.s64 = ctx.r28.s64 * 17799;
	// mulli r22,r4,4926
	ctx.r22.s64 = ctx.r4.s64 * 4926;
	// mullw r25,r25,r20
	ctx.r25.s64 = int64_t(ctx.r25.s32) * int64_t(ctx.r20.s32);
	// subf r4,r26,r31
	ctx.r4.s64 = ctx.r31.s64 - ctx.r26.s64;
	// subf r3,r28,r24
	ctx.r3.s64 = ctx.r24.s64 - ctx.r28.s64;
	// mulli r8,r27,8697
	ctx.r8.s64 = ctx.r27.s64 * 8697;
	// subf r31,r22,r23
	ctx.r31.s64 = ctx.r23.s64 - ctx.r22.s64;
	// mulli r28,r25,4176
	ctx.r28.s64 = ctx.r25.s64 * 4176;
	// rlwinm r5,r5,14,0,17
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 14) & 0xFFFFC000;
	// add r27,r3,r8
	ctx.r27.u64 = ctx.r3.u64 + ctx.r8.u64;
	// subf r3,r28,r31
	ctx.r3.s64 = ctx.r31.s64 - ctx.r28.s64;
	// add r8,r4,r5
	ctx.r8.u64 = ctx.r4.u64 + ctx.r5.u64;
	// mulli r28,r25,1730
	ctx.r28.s64 = ctx.r25.s64 * 1730;
	// subf r4,r4,r5
	ctx.r4.s64 = ctx.r5.s64 - ctx.r4.s64;
	// add r31,r8,r3
	ctx.r31.u64 = ctx.r8.u64 + ctx.r3.u64;
	// subf r5,r28,r27
	ctx.r5.s64 = ctx.r27.s64 - ctx.r28.s64;
	// subf r8,r3,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r3.s64;
	// add r3,r4,r5
	ctx.r3.u64 = ctx.r4.u64 + ctx.r5.u64;
	// addi r31,r31,2048
	ctx.r31.s64 = ctx.r31.s64 + 2048;
	// subf r5,r5,r4
	ctx.r5.s64 = ctx.r4.s64 - ctx.r5.s64;
	// addi r4,r8,2048
	ctx.r4.s64 = ctx.r8.s64 + 2048;
	// srawi r8,r31,12
	ctx.xer.ca = (ctx.r31.s32 < 0) & ((ctx.r31.u32 & 0xFFF) != 0);
	ctx.r8.s64 = ctx.r31.s32 >> 12;
	// addi r3,r3,2048
	ctx.r3.s64 = ctx.r3.s64 + 2048;
	// addi r31,r5,2048
	ctx.r31.s64 = ctx.r5.s64 + 2048;
	// stw r8,-32(r9)
	PPC_STORE_U32(ctx.r9.u32 + -32, ctx.r8.u32);
	// srawi r5,r4,12
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xFFF) != 0);
	ctx.r5.s64 = ctx.r4.s32 >> 12;
	// srawi r8,r3,12
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xFFF) != 0);
	ctx.r8.s64 = ctx.r3.s32 >> 12;
	// srawi r4,r31,12
	ctx.xer.ca = (ctx.r31.s32 < 0) & ((ctx.r31.u32 & 0xFFF) != 0);
	ctx.r4.s64 = ctx.r31.s32 >> 12;
	// stw r5,64(r9)
	PPC_STORE_U32(ctx.r9.u32 + 64, ctx.r5.u32);
	// stw r4,32(r9)
	PPC_STORE_U32(ctx.r9.u32 + 32, ctx.r4.u32);
loc_82805A0C:
	// stw r8,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
loc_82805A10:
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// addi r30,r30,-1
	ctx.r30.s64 = ctx.r30.s64 + -1;
	// bdnz 0x828058b8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_828058B8;
	// li r10,4
	ctx.r10.s64 = 4;
	// addi r11,r1,-260
	ctx.r11.s64 = ctx.r1.s64 + -260;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// lis r3,4
	ctx.r3.s64 = 262144;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82805A38:
	// lwz r10,0(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r31,24(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// add r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 + ctx.r7.u64;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne cr6,0x82805ab0
	if (!ctx.cr6.eq) goto loc_82805AB0;
	// lwz r9,28(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x82805ab0
	if (!ctx.cr6.eq) goto loc_82805AB0;
	// lwz r9,32(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x82805ab0
	if (!ctx.cr6.eq) goto loc_82805AB0;
	// lwz r9,40(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x82805ab0
	if (!ctx.cr6.eq) goto loc_82805AB0;
	// lwz r9,44(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x82805ab0
	if (!ctx.cr6.eq) goto loc_82805AB0;
	// lwz r9,48(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x82805ab0
	if (!ctx.cr6.eq) goto loc_82805AB0;
	// lwz r9,20(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// addi r9,r9,16
	ctx.r9.s64 = ctx.r9.s64 + 16;
	// srawi r9,r9,5
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1F) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 5;
	// clrlwi r9,r9,22
	ctx.r9.u64 = ctx.r9.u32 & 0x3FF;
	// lbzx r9,r9,r29
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r29.u32);
	// stb r9,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r9.u8);
	// stb r9,1(r10)
	PPC_STORE_U8(ctx.r10.u32 + 1, ctx.r9.u8);
	// stb r9,3(r10)
	PPC_STORE_U8(ctx.r10.u32 + 3, ctx.r9.u8);
	// b 0x82805b74
	goto loc_82805B74;
loc_82805AB0:
	// lwz r27,48(r11)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// mulli r6,r31,20995
	ctx.r6.s64 = ctx.r31.s64 * 20995;
	// lwz r30,40(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// lwz r5,20(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// lwz r4,44(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// lwz r26,28(r11)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// lwzu r9,32(r11)
	ea = 32 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// mulli r8,r9,7373
	ctx.r8.s64 = ctx.r9.s64 * 7373;
	// mulli r4,r4,6270
	ctx.r4.s64 = ctx.r4.s64 * 6270;
	// mulli r26,r26,15137
	ctx.r26.s64 = ctx.r26.s64 * 15137;
	// add r8,r6,r8
	ctx.r8.u64 = ctx.r6.u64 + ctx.r8.u64;
	// mulli r25,r30,4926
	ctx.r25.s64 = ctx.r30.s64 * 4926;
	// rlwinm r6,r5,14,0,17
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 14) & 0xFFFFC000;
	// subf r5,r4,r26
	ctx.r5.s64 = ctx.r26.s64 - ctx.r4.s64;
	// subf r4,r25,r8
	ctx.r4.s64 = ctx.r8.s64 - ctx.r25.s64;
	// mulli r26,r27,4176
	ctx.r26.s64 = ctx.r27.s64 * 4176;
	// add r8,r5,r6
	ctx.r8.u64 = ctx.r5.u64 + ctx.r6.u64;
	// subf r4,r26,r4
	ctx.r4.s64 = ctx.r4.s64 - ctx.r26.s64;
	// mulli r25,r9,17799
	ctx.r25.s64 = ctx.r9.s64 * 17799;
	// add r26,r8,r4
	ctx.r26.u64 = ctx.r8.u64 + ctx.r4.u64;
	// mulli r9,r31,8697
	ctx.r9.s64 = ctx.r31.s64 * 8697;
	// add r31,r26,r3
	ctx.r31.u64 = ctx.r26.u64 + ctx.r3.u64;
	// subf r4,r4,r8
	ctx.r4.s64 = ctx.r8.s64 - ctx.r4.s64;
	// srawi r31,r31,19
	ctx.xer.ca = (ctx.r31.s32 < 0) & ((ctx.r31.u32 & 0x7FFFF) != 0);
	ctx.r31.s64 = ctx.r31.s32 >> 19;
	// subf r8,r5,r6
	ctx.r8.s64 = ctx.r6.s64 - ctx.r5.s64;
	// clrlwi r6,r31,22
	ctx.r6.u64 = ctx.r31.u32 & 0x3FF;
	// mulli r30,r30,11893
	ctx.r30.s64 = ctx.r30.s64 * 11893;
	// lbzx r6,r6,r29
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r6.u32 + ctx.r29.u32);
	// subf r30,r25,r30
	ctx.r30.s64 = ctx.r30.s64 - ctx.r25.s64;
	// stb r6,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r6.u8);
	// add r4,r4,r3
	ctx.r4.u64 = ctx.r4.u64 + ctx.r3.u64;
	// add r9,r30,r9
	ctx.r9.u64 = ctx.r30.u64 + ctx.r9.u64;
	// mulli r30,r27,1730
	ctx.r30.s64 = ctx.r27.s64 * 1730;
	// subf r9,r30,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r30.s64;
	// add r5,r8,r9
	ctx.r5.u64 = ctx.r8.u64 + ctx.r9.u64;
	// subf r9,r9,r8
	ctx.r9.s64 = ctx.r8.s64 - ctx.r9.s64;
	// add r8,r5,r3
	ctx.r8.u64 = ctx.r5.u64 + ctx.r3.u64;
	// srawi r5,r4,19
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x7FFFF) != 0);
	ctx.r5.s64 = ctx.r4.s32 >> 19;
	// add r9,r9,r3
	ctx.r9.u64 = ctx.r9.u64 + ctx.r3.u64;
	// clrlwi r5,r5,22
	ctx.r5.u64 = ctx.r5.u32 & 0x3FF;
	// srawi r8,r8,19
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7FFFF) != 0);
	ctx.r8.s64 = ctx.r8.s32 >> 19;
	// srawi r9,r9,19
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7FFFF) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 19;
	// clrlwi r8,r8,22
	ctx.r8.u64 = ctx.r8.u32 & 0x3FF;
	// clrlwi r9,r9,22
	ctx.r9.u64 = ctx.r9.u32 & 0x3FF;
	// lbzx r6,r5,r29
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r5.u32 + ctx.r29.u32);
	// stb r6,3(r10)
	PPC_STORE_U8(ctx.r10.u32 + 3, ctx.r6.u8);
	// lbzx r8,r8,r29
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r8.u32 + ctx.r29.u32);
	// stb r8,1(r10)
	PPC_STORE_U8(ctx.r10.u32 + 1, ctx.r8.u8);
	// lbzx r9,r9,r29
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r29.u32);
loc_82805B74:
	// stb r9,2(r10)
	PPC_STORE_U8(ctx.r10.u32 + 2, ctx.r9.u8);
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// bdnz 0x82805a38
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82805A38;
	// b 0x82fa76a8
	__restgprlr_20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82805B84"))) PPC_WEAK_FUNC(sub_82805B84);
PPC_FUNC_IMPL(__imp__sub_82805B84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82805B88"))) PPC_WEAK_FUNC(sub_82805B88);
PPC_FUNC_IMPL(__imp__sub_82805B88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa766c
	ctx.lr = 0x82805B90;
	__savegprlr_25(ctx, base);
	// li r10,8
	ctx.r10.s64 = 8;
	// lwz r11,80(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 80);
	// lwz r9,288(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 288);
	// addi r8,r1,-128
	ctx.r8.s64 = ctx.r1.s64 + -128;
	// subf r4,r11,r11
	ctx.r4.s64 = ctx.r11.s64 - ctx.r11.s64;
	// addi r31,r9,128
	ctx.r31.s64 = ctx.r9.s64 + 128;
	// li r3,8
	ctx.r3.s64 = 8;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// add r9,r4,r8
	ctx.r9.u64 = ctx.r4.u64 + ctx.r8.u64;
	// addi r10,r5,48
	ctx.r10.s64 = ctx.r5.s64 + 48;
loc_82805BB8:
	// cmpwi cr6,r3,6
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 6, ctx.xer);
	// beq cr6,0x82805c90
	if (ctx.cr6.eq) goto loc_82805C90;
	// cmpwi cr6,r3,4
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 4, ctx.xer);
	// beq cr6,0x82805c90
	if (ctx.cr6.eq) goto loc_82805C90;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// beq cr6,0x82805c90
	if (ctx.cr6.eq) goto loc_82805C90;
	// lha r8,-32(r10)
	ctx.r8.s64 = int16_t(PPC_LOAD_U16(ctx.r10.u32 + -32));
	// cmpwi r8,0
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x82805c18
	if (!ctx.cr0.eq) goto loc_82805C18;
	// lhz r5,0(r10)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// cmplwi r5,0
	ctx.cr0.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne 0x82805c18
	if (!ctx.cr0.eq) goto loc_82805C18;
	// lhz r5,32(r10)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r10.u32 + 32);
	// cmplwi r5,0
	ctx.cr0.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne 0x82805c18
	if (!ctx.cr0.eq) goto loc_82805C18;
	// lhz r5,64(r10)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r10.u32 + 64);
	// cmplwi r5,0
	ctx.cr0.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne 0x82805c18
	if (!ctx.cr0.eq) goto loc_82805C18;
	// lha r8,-48(r10)
	ctx.r8.s64 = int16_t(PPC_LOAD_U16(ctx.r10.u32 + -48));
	// lwz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mullw r8,r8,r5
	ctx.r8.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r5.s32);
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r8,32(r9)
	PPC_STORE_U32(ctx.r9.u32 + 32, ctx.r8.u32);
	// b 0x82805c8c
	goto loc_82805C8C;
loc_82805C18:
	// lwz r29,96(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// lha r5,0(r10)
	ctx.r5.s64 = int16_t(PPC_LOAD_U16(ctx.r10.u32 + 0));
	// lha r4,32(r10)
	ctx.r4.s64 = int16_t(PPC_LOAD_U16(ctx.r10.u32 + 32));
	// mullw r5,r5,r29
	ctx.r5.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r29.s32);
	// lwz r28,160(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 160);
	// mulli r5,r5,10426
	ctx.r5.s64 = ctx.r5.s64 * 10426;
	// lha r30,64(r10)
	ctx.r30.s64 = int16_t(PPC_LOAD_U16(ctx.r10.u32 + 64));
	// mullw r4,r4,r28
	ctx.r4.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r28.s32);
	// lwz r27,224(r11)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + 224);
	// lwz r26,32(r11)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lha r29,-48(r10)
	ctx.r29.s64 = int16_t(PPC_LOAD_U16(ctx.r10.u32 + -48));
	// mulli r4,r4,6967
	ctx.r4.s64 = ctx.r4.s64 * 6967;
	// lwz r25,0(r11)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mullw r30,r30,r27
	ctx.r30.s64 = int64_t(ctx.r30.s32) * int64_t(ctx.r27.s32);
	// subf r5,r5,r4
	ctx.r5.s64 = ctx.r4.s64 - ctx.r5.s64;
	// mulli r4,r30,5906
	ctx.r4.s64 = ctx.r30.s64 * 5906;
	// mullw r8,r26,r8
	ctx.r8.s64 = int64_t(ctx.r26.s32) * int64_t(ctx.r8.s32);
	// subf r4,r4,r5
	ctx.r4.s64 = ctx.r5.s64 - ctx.r4.s64;
	// mulli r8,r8,29692
	ctx.r8.s64 = ctx.r8.s64 * 29692;
	// mullw r5,r29,r25
	ctx.r5.s64 = int64_t(ctx.r29.s32) * int64_t(ctx.r25.s32);
	// rlwinm r5,r5,15,0,16
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 15) & 0xFFFF8000;
	// add r8,r4,r8
	ctx.r8.u64 = ctx.r4.u64 + ctx.r8.u64;
	// add r4,r8,r5
	ctx.r4.u64 = ctx.r8.u64 + ctx.r5.u64;
	// subf r8,r8,r5
	ctx.r8.s64 = ctx.r5.s64 - ctx.r8.s64;
	// addi r5,r4,4096
	ctx.r5.s64 = ctx.r4.s64 + 4096;
	// addi r4,r8,4096
	ctx.r4.s64 = ctx.r8.s64 + 4096;
	// srawi r8,r5,13
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x1FFF) != 0);
	ctx.r8.s64 = ctx.r5.s32 >> 13;
	// srawi r5,r4,13
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x1FFF) != 0);
	ctx.r5.s64 = ctx.r4.s32 >> 13;
	// stw r5,32(r9)
	PPC_STORE_U32(ctx.r9.u32 + 32, ctx.r5.u32);
loc_82805C8C:
	// stw r8,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r8.u32);
loc_82805C90:
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// addi r3,r3,-1
	ctx.r3.s64 = ctx.r3.s64 + -1;
	// bdnz 0x82805bb8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82805BB8;
	// li r10,2
	ctx.r10.s64 = 2;
	// addi r11,r1,-148
	ctx.r11.s64 = ctx.r1.s64 + -148;
	// mr r5,r6
	ctx.r5.u64 = ctx.r6.u64;
	// lis r6,8
	ctx.r6.s64 = 524288;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82805CB8:
	// lwz r10,0(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// lwz r9,24(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// add r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 + ctx.r7.u64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x82805d10
	if (!ctx.cr6.eq) goto loc_82805D10;
	// lwz r8,32(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x82805d10
	if (!ctx.cr6.eq) goto loc_82805D10;
	// lwz r8,40(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x82805d10
	if (!ctx.cr6.eq) goto loc_82805D10;
	// lwz r8,48(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x82805d10
	if (!ctx.cr6.eq) goto loc_82805D10;
	// lwz r9,20(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// addi r9,r9,16
	ctx.r9.s64 = ctx.r9.s64 + 16;
	// srawi r9,r9,5
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1F) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 5;
	// clrlwi r9,r9,22
	ctx.r9.u64 = ctx.r9.u32 & 0x3FF;
	// lbzx r9,r9,r31
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r31.u32);
	// stb r9,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r9.u8);
	// b 0x82805d6c
	goto loc_82805D6C;
loc_82805D10:
	// mulli r8,r9,29692
	ctx.r8.s64 = ctx.r9.s64 * 29692;
	// lwz r4,20(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// lwz r3,48(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// lwz r30,40(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// lwzu r9,32(r11)
	ea = 32 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// mulli r9,r9,10426
	ctx.r9.s64 = ctx.r9.s64 * 10426;
	// subf r8,r9,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r9.s64;
	// mulli r9,r30,6967
	ctx.r9.s64 = ctx.r30.s64 * 6967;
	// add r8,r8,r9
	ctx.r8.u64 = ctx.r8.u64 + ctx.r9.u64;
	// mulli r3,r3,5906
	ctx.r3.s64 = ctx.r3.s64 * 5906;
	// subf r8,r3,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r3.s64;
	// rlwinm r9,r4,15,0,16
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 15) & 0xFFFF8000;
	// add r4,r8,r9
	ctx.r4.u64 = ctx.r8.u64 + ctx.r9.u64;
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// add r8,r4,r6
	ctx.r8.u64 = ctx.r4.u64 + ctx.r6.u64;
	// add r9,r9,r6
	ctx.r9.u64 = ctx.r9.u64 + ctx.r6.u64;
	// srawi r8,r8,20
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xFFFFF) != 0);
	ctx.r8.s64 = ctx.r8.s32 >> 20;
	// srawi r9,r9,20
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xFFFFF) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 20;
	// clrlwi r8,r8,22
	ctx.r8.u64 = ctx.r8.u32 & 0x3FF;
	// clrlwi r9,r9,22
	ctx.r9.u64 = ctx.r9.u32 & 0x3FF;
	// lbzx r8,r8,r31
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r8.u32 + ctx.r31.u32);
	// stb r8,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r8.u8);
	// lbzx r9,r9,r31
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r31.u32);
loc_82805D6C:
	// stb r9,1(r10)
	PPC_STORE_U8(ctx.r10.u32 + 1, ctx.r9.u8);
	// addi r5,r5,4
	ctx.r5.s64 = ctx.r5.s64 + 4;
	// bdnz 0x82805cb8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82805CB8;
	// b 0x82fa76bc
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82805D7C"))) PPC_WEAK_FUNC(sub_82805D7C);
PPC_FUNC_IMPL(__imp__sub_82805D7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82805D80"))) PPC_WEAK_FUNC(sub_82805D80);
PPC_FUNC_IMPL(__imp__sub_82805D80) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,80(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 80);
	// lha r9,0(r5)
	ctx.r9.s64 = int16_t(PPC_LOAD_U16(ctx.r5.u32 + 0));
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,288(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 288);
	// mullw r11,r11,r9
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r9.s32);
	// lwz r8,0(r6)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// srawi r11,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 3;
	// clrlwi r11,r11,22
	ctx.r11.u64 = ctx.r11.u32 & 0x3FF;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lbz r11,128(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 128);
	// stbx r11,r8,r7
	PPC_STORE_U8(ctx.r8.u32 + ctx.r7.u32, ctx.r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82805DB4"))) PPC_WEAK_FUNC(sub_82805DB4);
PPC_FUNC_IMPL(__imp__sub_82805DB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82805DB8"))) PPC_WEAK_FUNC(sub_82805DB8);
PPC_FUNC_IMPL(__imp__sub_82805DB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7648
	ctx.lr = 0x82805DC0;
	__savegprlr_16(ctx, base);
	// li r31,8
	ctx.r31.s64 = 8;
	// lwz r11,288(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 288);
	// lwz r10,80(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 80);
	// addi r9,r5,46
	ctx.r9.s64 = ctx.r5.s64 + 46;
	// addi r8,r11,128
	ctx.r8.s64 = ctx.r11.s64 + 128;
	// addi r10,r10,28
	ctx.r10.s64 = ctx.r10.s64 + 28;
	// addi r11,r1,-276
	ctx.r11.s64 = ctx.r1.s64 + -276;
	// mtctr r31
	ctx.ctr.u64 = ctx.r31.u64;
loc_82805DE0:
	// lha r30,-30(r9)
	ctx.r30.s64 = int16_t(PPC_LOAD_U16(ctx.r9.u32 + -30));
	// cmpwi r30,0
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne 0x82805e74
	if (!ctx.cr0.eq) goto loc_82805E74;
	// lhz r5,-14(r9)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r9.u32 + -14);
	// cmplwi r5,0
	ctx.cr0.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne 0x82805e74
	if (!ctx.cr0.eq) goto loc_82805E74;
	// lhz r5,2(r9)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r9.u32 + 2);
	// cmplwi r5,0
	ctx.cr0.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne 0x82805e74
	if (!ctx.cr0.eq) goto loc_82805E74;
	// lhz r5,18(r9)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r9.u32 + 18);
	// cmplwi r5,0
	ctx.cr0.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne 0x82805e74
	if (!ctx.cr0.eq) goto loc_82805E74;
	// lhz r5,34(r9)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r9.u32 + 34);
	// cmplwi r5,0
	ctx.cr0.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne 0x82805e74
	if (!ctx.cr0.eq) goto loc_82805E74;
	// lhz r5,50(r9)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r9.u32 + 50);
	// cmplwi r5,0
	ctx.cr0.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne 0x82805e74
	if (!ctx.cr0.eq) goto loc_82805E74;
	// lhz r5,66(r9)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r9.u32 + 66);
	// cmplwi r5,0
	ctx.cr0.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne 0x82805e74
	if (!ctx.cr0.eq) goto loc_82805E74;
	// lha r5,-46(r9)
	ctx.r5.s64 = int16_t(PPC_LOAD_U16(ctx.r9.u32 + -46));
	// addi r9,r9,2
	ctx.r9.s64 = ctx.r9.s64 + 2;
	// lwz r4,-28(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + -28);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// mullw r5,r5,r4
	ctx.r5.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r4.s32);
	// rlwinm r5,r5,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r5,-124(r11)
	PPC_STORE_U32(ctx.r11.u32 + -124, ctx.r5.u32);
	// stw r5,-92(r11)
	PPC_STORE_U32(ctx.r11.u32 + -92, ctx.r5.u32);
	// stw r5,-60(r11)
	PPC_STORE_U32(ctx.r11.u32 + -60, ctx.r5.u32);
	// stw r5,-28(r11)
	PPC_STORE_U32(ctx.r11.u32 + -28, ctx.r5.u32);
	// stw r5,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r5.u32);
	// stw r5,36(r11)
	PPC_STORE_U32(ctx.r11.u32 + 36, ctx.r5.u32);
	// stw r5,68(r11)
	PPC_STORE_U32(ctx.r11.u32 + 68, ctx.r5.u32);
	// stw r5,100(r11)
	PPC_STORE_U32(ctx.r11.u32 + 100, ctx.r5.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// b 0x82805fe8
	goto loc_82805FE8;
loc_82805E74:
	// lha r31,-14(r9)
	ctx.r31.s64 = int16_t(PPC_LOAD_U16(ctx.r9.u32 + -14));
	// lwz r29,36(r10)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	// lha r24,34(r9)
	ctx.r24.s64 = int16_t(PPC_LOAD_U16(ctx.r9.u32 + 34));
	// mullw r28,r31,r29
	ctx.r28.s64 = int64_t(ctx.r31.s32) * int64_t(ctx.r29.s32);
	// lwz r23,164(r10)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r10.u32 + 164);
	// lwz r22,-28(r10)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + -28);
	// lwz r21,100(r10)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r10.u32 + 100);
	// lwz r31,196(r10)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + 196);
	// lwz r29,132(r10)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r10.u32 + 132);
	// lwz r20,68(r10)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r10.u32 + 68);
	// lha r27,50(r9)
	ctx.r27.s64 = int16_t(PPC_LOAD_U16(ctx.r9.u32 + 50));
	// lha r26,-46(r9)
	ctx.r26.s64 = int16_t(PPC_LOAD_U16(ctx.r9.u32 + -46));
	// mullw r27,r27,r23
	ctx.r27.s64 = int64_t(ctx.r27.s32) * int64_t(ctx.r23.s32);
	// lha r25,18(r9)
	ctx.r25.s64 = int16_t(PPC_LOAD_U16(ctx.r9.u32 + 18));
	// mullw r26,r26,r22
	ctx.r26.s64 = int64_t(ctx.r26.s32) * int64_t(ctx.r22.s32);
	// lha r4,66(r9)
	ctx.r4.s64 = int16_t(PPC_LOAD_U16(ctx.r9.u32 + 66));
	// mullw r25,r25,r21
	ctx.r25.s64 = int64_t(ctx.r25.s32) * int64_t(ctx.r21.s32);
	// lhau r5,2(r9)
	ea = 2 + ctx.r9.u32;	ctx.r5.s64 = int16_t(PPC_LOAD_U16(ea));	ctx.r9.u32 = ea;	// mullw r4,r4,r31
	ctx.r4.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r31.s32);
	// lwzu r3,4(r10)
	ea = 4 + ctx.r10.u32;
	ctx.r3.u64 = PPC_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// mullw r5,r5,r20
	ctx.r5.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r20.s32);
	// mullw r3,r30,r3
	ctx.r3.s64 = int64_t(ctx.r30.s32) * int64_t(ctx.r3.s32);
	// mullw r31,r24,r29
	ctx.r31.s64 = int64_t(ctx.r24.s32) * int64_t(ctx.r29.s32);
	// add r30,r4,r5
	ctx.r30.u64 = ctx.r4.u64 + ctx.r5.u64;
	// add r29,r31,r3
	ctx.r29.u64 = ctx.r31.u64 + ctx.r3.u64;
	// add r20,r27,r28
	ctx.r20.u64 = ctx.r27.u64 + ctx.r28.u64;
	// add r24,r29,r30
	ctx.r24.u64 = ctx.r29.u64 + ctx.r30.u64;
	// mulli r21,r29,3196
	ctx.r21.s64 = ctx.r29.s64 * 3196;
	// mulli r19,r24,9633
	ctx.r19.s64 = ctx.r24.s64 * 9633;
	// mulli r23,r28,6270
	ctx.r23.s64 = ctx.r28.s64 * 6270;
	// mulli r29,r20,4433
	ctx.r29.s64 = ctx.r20.s64 * 4433;
	// add r18,r25,r26
	ctx.r18.u64 = ctx.r25.u64 + ctx.r26.u64;
	// add r28,r4,r3
	ctx.r28.u64 = ctx.r4.u64 + ctx.r3.u64;
	// mulli r22,r3,12299
	ctx.r22.s64 = ctx.r3.s64 * 12299;
	// subf r24,r21,r19
	ctx.r24.s64 = ctx.r19.s64 - ctx.r21.s64;
	// mulli r17,r30,16069
	ctx.r17.s64 = ctx.r30.s64 * 16069;
	// add r3,r23,r29
	ctx.r3.u64 = ctx.r23.u64 + ctx.r29.u64;
	// subf r16,r25,r26
	ctx.r16.s64 = ctx.r26.s64 - ctx.r25.s64;
	// rlwinm r30,r18,13,0,18
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r18.u32 | (ctx.r18.u64 << 32), 13) & 0xFFFFE000;
	// mulli r26,r28,-7373
	ctx.r26.s64 = ctx.r28.s64 * -7373;
	// add r20,r22,r24
	ctx.r20.u64 = ctx.r22.u64 + ctx.r24.u64;
	// add r25,r31,r5
	ctx.r25.u64 = ctx.r31.u64 + ctx.r5.u64;
	// mulli r21,r5,25172
	ctx.r21.s64 = ctx.r5.s64 * 25172;
	// mulli r28,r27,15137
	ctx.r28.s64 = ctx.r27.s64 * 15137;
	// add r5,r30,r3
	ctx.r5.u64 = ctx.r30.u64 + ctx.r3.u64;
	// subf r22,r3,r30
	ctx.r22.s64 = ctx.r30.s64 - ctx.r3.s64;
	// subf r23,r17,r19
	ctx.r23.s64 = ctx.r19.s64 - ctx.r17.s64;
	// add r30,r20,r26
	ctx.r30.u64 = ctx.r20.u64 + ctx.r26.u64;
	// subf r28,r28,r29
	ctx.r28.s64 = ctx.r29.s64 - ctx.r28.s64;
	// add r29,r21,r23
	ctx.r29.u64 = ctx.r21.u64 + ctx.r23.u64;
	// rlwinm r27,r16,13,0,18
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r16.u32 | (ctx.r16.u64 << 32), 13) & 0xFFFFE000;
	// mulli r25,r25,-20995
	ctx.r25.s64 = ctx.r25.s64 * -20995;
	// add r21,r5,r30
	ctx.r21.u64 = ctx.r5.u64 + ctx.r30.u64;
	// subf r5,r30,r5
	ctx.r5.s64 = ctx.r5.s64 - ctx.r30.s64;
	// add r3,r27,r28
	ctx.r3.u64 = ctx.r27.u64 + ctx.r28.u64;
	// add r29,r29,r25
	ctx.r29.u64 = ctx.r29.u64 + ctx.r25.u64;
	// addi r20,r21,1024
	ctx.r20.s64 = ctx.r21.s64 + 1024;
	// addi r19,r5,1024
	ctx.r19.s64 = ctx.r5.s64 + 1024;
	// add r30,r3,r29
	ctx.r30.u64 = ctx.r3.u64 + ctx.r29.u64;
	// mulli r21,r4,2446
	ctx.r21.s64 = ctx.r4.s64 * 2446;
	// srawi r5,r20,11
	ctx.xer.ca = (ctx.r20.s32 < 0) & ((ctx.r20.u32 & 0x7FF) != 0);
	ctx.r5.s64 = ctx.r20.s32 >> 11;
	// srawi r4,r19,11
	ctx.xer.ca = (ctx.r19.s32 < 0) & ((ctx.r19.u32 & 0x7FF) != 0);
	ctx.r4.s64 = ctx.r19.s32 >> 11;
	// addi r20,r30,1024
	ctx.r20.s64 = ctx.r30.s64 + 1024;
	// stw r5,-124(r11)
	PPC_STORE_U32(ctx.r11.u32 + -124, ctx.r5.u32);
	// mulli r31,r31,16819
	ctx.r31.s64 = ctx.r31.s64 * 16819;
	// stw r4,100(r11)
	PPC_STORE_U32(ctx.r11.u32 + 100, ctx.r4.u32);
	// add r30,r21,r26
	ctx.r30.u64 = ctx.r21.u64 + ctx.r26.u64;
	// srawi r4,r20,11
	ctx.xer.ca = (ctx.r20.s32 < 0) & ((ctx.r20.u32 & 0x7FF) != 0);
	ctx.r4.s64 = ctx.r20.s32 >> 11;
	// add r26,r31,r24
	ctx.r26.u64 = ctx.r31.u64 + ctx.r24.u64;
	// stw r4,-92(r11)
	PPC_STORE_U32(ctx.r11.u32 + -92, ctx.r4.u32);
	// subf r31,r28,r27
	ctx.r31.s64 = ctx.r27.s64 - ctx.r28.s64;
	// add r4,r26,r25
	ctx.r4.u64 = ctx.r26.u64 + ctx.r25.u64;
	// add r5,r30,r23
	ctx.r5.u64 = ctx.r30.u64 + ctx.r23.u64;
	// add r30,r31,r4
	ctx.r30.u64 = ctx.r31.u64 + ctx.r4.u64;
	// subf r3,r29,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r29.s64;
	// subf r4,r4,r31
	ctx.r4.s64 = ctx.r31.s64 - ctx.r4.s64;
	// addi r29,r3,1024
	ctx.r29.s64 = ctx.r3.s64 + 1024;
	// addi r30,r30,1024
	ctx.r30.s64 = ctx.r30.s64 + 1024;
	// add r3,r22,r5
	ctx.r3.u64 = ctx.r22.u64 + ctx.r5.u64;
	// subf r31,r5,r22
	ctx.r31.s64 = ctx.r22.s64 - ctx.r5.s64;
	// addi r28,r4,1024
	ctx.r28.s64 = ctx.r4.s64 + 1024;
	// srawi r5,r29,11
	ctx.xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0x7FF) != 0);
	ctx.r5.s64 = ctx.r29.s32 >> 11;
	// srawi r4,r30,11
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0x7FF) != 0);
	ctx.r4.s64 = ctx.r30.s32 >> 11;
	// addi r3,r3,1024
	ctx.r3.s64 = ctx.r3.s64 + 1024;
	// stw r5,68(r11)
	PPC_STORE_U32(ctx.r11.u32 + 68, ctx.r5.u32);
	// addi r31,r31,1024
	ctx.r31.s64 = ctx.r31.s64 + 1024;
	// stw r4,-60(r11)
	PPC_STORE_U32(ctx.r11.u32 + -60, ctx.r4.u32);
	// srawi r5,r28,11
	ctx.xer.ca = (ctx.r28.s32 < 0) & ((ctx.r28.u32 & 0x7FF) != 0);
	ctx.r5.s64 = ctx.r28.s32 >> 11;
	// srawi r4,r3,11
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x7FF) != 0);
	ctx.r4.s64 = ctx.r3.s32 >> 11;
	// srawi r3,r31,11
	ctx.xer.ca = (ctx.r31.s32 < 0) & ((ctx.r31.u32 & 0x7FF) != 0);
	ctx.r3.s64 = ctx.r31.s32 >> 11;
	// stw r5,36(r11)
	PPC_STORE_U32(ctx.r11.u32 + 36, ctx.r5.u32);
	// stw r4,-28(r11)
	PPC_STORE_U32(ctx.r11.u32 + -28, ctx.r4.u32);
	// stwu r3,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r3.u32);
	ctx.r11.u32 = ea;
loc_82805FE8:
	// bdnz 0x82805de0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82805DE0;
	// li r11,8
	ctx.r11.s64 = 8;
	// addi r10,r1,-420
	ctx.r10.s64 = ctx.r1.s64 + -420;
	// mr r20,r6
	ctx.r20.u64 = ctx.r6.u64;
	// lis r9,2
	ctx.r9.s64 = 131072;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_82806000:
	// lwz r11,0(r20)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r20.u32 + 0);
	// lwz r3,24(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82806094
	if (!ctx.cr6.eq) goto loc_82806094;
	// lwz r6,28(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bne cr6,0x82806094
	if (!ctx.cr6.eq) goto loc_82806094;
	// lwz r6,32(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 32);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bne cr6,0x82806094
	if (!ctx.cr6.eq) goto loc_82806094;
	// lwz r6,36(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bne cr6,0x82806094
	if (!ctx.cr6.eq) goto loc_82806094;
	// lwz r6,40(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 40);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bne cr6,0x82806094
	if (!ctx.cr6.eq) goto loc_82806094;
	// lwz r6,44(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 44);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bne cr6,0x82806094
	if (!ctx.cr6.eq) goto loc_82806094;
	// lwz r6,48(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bne cr6,0x82806094
	if (!ctx.cr6.eq) goto loc_82806094;
	// lwz r6,20(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// addi r10,r10,32
	ctx.r10.s64 = ctx.r10.s64 + 32;
	// addi r6,r6,16
	ctx.r6.s64 = ctx.r6.s64 + 16;
	// srawi r6,r6,5
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x1F) != 0);
	ctx.r6.s64 = ctx.r6.s32 >> 5;
	// clrlwi r6,r6,22
	ctx.r6.u64 = ctx.r6.u32 & 0x3FF;
	// lbzx r6,r6,r8
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r6.u32 + ctx.r8.u32);
	// stb r6,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r6.u8);
	// stb r6,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r6.u8);
	// stb r6,2(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2, ctx.r6.u8);
	// stb r6,3(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3, ctx.r6.u8);
	// stb r6,5(r11)
	PPC_STORE_U8(ctx.r11.u32 + 5, ctx.r6.u8);
	// stb r6,6(r11)
	PPC_STORE_U8(ctx.r11.u32 + 6, ctx.r6.u8);
	// stb r6,7(r11)
	PPC_STORE_U8(ctx.r11.u32 + 7, ctx.r6.u8);
	// b 0x82806204
	goto loc_82806204;
loc_82806094:
	// lwz r4,48(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// mulli r22,r3,12299
	ctx.r22.s64 = ctx.r3.s64 * 12299;
	// lwz r5,40(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 40);
	// lwz r28,44(r10)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r10.u32 + 44);
	// lwz r27,36(r10)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r10.u32 + 36);
	// lwz r29,28(r10)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28);
	// lwz r26,20(r10)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// lwzu r6,32(r10)
	ea = 32 + ctx.r10.u32;
	ctx.r6.u64 = PPC_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// add r31,r5,r3
	ctx.r31.u64 = ctx.r5.u64 + ctx.r3.u64;
	// add r30,r4,r6
	ctx.r30.u64 = ctx.r4.u64 + ctx.r6.u64;
	// add r25,r28,r29
	ctx.r25.u64 = ctx.r28.u64 + ctx.r29.u64;
	// add r24,r31,r30
	ctx.r24.u64 = ctx.r31.u64 + ctx.r30.u64;
	// mulli r23,r31,3196
	ctx.r23.s64 = ctx.r31.s64 * 3196;
	// mulli r19,r24,9633
	ctx.r19.s64 = ctx.r24.s64 * 9633;
	// mulli r29,r29,6270
	ctx.r29.s64 = ctx.r29.s64 * 6270;
	// mulli r25,r25,4433
	ctx.r25.s64 = ctx.r25.s64 * 4433;
	// add r21,r26,r27
	ctx.r21.u64 = ctx.r26.u64 + ctx.r27.u64;
	// add r31,r4,r3
	ctx.r31.u64 = ctx.r4.u64 + ctx.r3.u64;
	// subf r24,r23,r19
	ctx.r24.s64 = ctx.r19.s64 - ctx.r23.s64;
	// add r3,r29,r25
	ctx.r3.u64 = ctx.r29.u64 + ctx.r25.u64;
	// rlwinm r29,r21,13,0,18
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 13) & 0xFFFFE000;
	// mulli r23,r31,-7373
	ctx.r23.s64 = ctx.r31.s64 * -7373;
	// add r21,r22,r24
	ctx.r21.u64 = ctx.r22.u64 + ctx.r24.u64;
	// add r31,r29,r3
	ctx.r31.u64 = ctx.r29.u64 + ctx.r3.u64;
	// subf r22,r3,r29
	ctx.r22.s64 = ctx.r29.s64 - ctx.r3.s64;
	// add r3,r21,r23
	ctx.r3.u64 = ctx.r21.u64 + ctx.r23.u64;
	// mulli r30,r30,16069
	ctx.r30.s64 = ctx.r30.s64 * 16069;
	// add r29,r31,r3
	ctx.r29.u64 = ctx.r31.u64 + ctx.r3.u64;
	// subf r3,r3,r31
	ctx.r3.s64 = ctx.r31.s64 - ctx.r3.s64;
	// add r31,r29,r9
	ctx.r31.u64 = ctx.r29.u64 + ctx.r9.u64;
	// add r3,r3,r9
	ctx.r3.u64 = ctx.r3.u64 + ctx.r9.u64;
	// srawi r31,r31,18
	ctx.xer.ca = (ctx.r31.s32 < 0) & ((ctx.r31.u32 & 0x3FFFF) != 0);
	ctx.r31.s64 = ctx.r31.s32 >> 18;
	// srawi r3,r3,18
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x3FFFF) != 0);
	ctx.r3.s64 = ctx.r3.s32 >> 18;
	// clrlwi r31,r31,22
	ctx.r31.u64 = ctx.r31.u32 & 0x3FF;
	// clrlwi r21,r3,22
	ctx.r21.u64 = ctx.r3.u32 & 0x3FF;
	// subf r29,r30,r19
	ctx.r29.s64 = ctx.r19.s64 - ctx.r30.s64;
	// subf r30,r27,r26
	ctx.r30.s64 = ctx.r26.s64 - ctx.r27.s64;
	// add r3,r5,r6
	ctx.r3.u64 = ctx.r5.u64 + ctx.r6.u64;
	// lbzx r31,r31,r8
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r31.u32 + ctx.r8.u32);
	// mulli r6,r6,25172
	ctx.r6.s64 = ctx.r6.s64 * 25172;
	// stb r31,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r31.u8);
	// mulli r31,r28,15137
	ctx.r31.s64 = ctx.r28.s64 * 15137;
	// mulli r28,r3,-20995
	ctx.r28.s64 = ctx.r3.s64 * -20995;
	// add r3,r6,r29
	ctx.r3.u64 = ctx.r6.u64 + ctx.r29.u64;
	// lbzx r27,r21,r8
	ctx.r27.u64 = PPC_LOAD_U8(ctx.r21.u32 + ctx.r8.u32);
	// rlwinm r30,r30,13,0,18
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 13) & 0xFFFFE000;
	// subf r31,r31,r25
	ctx.r31.s64 = ctx.r25.s64 - ctx.r31.s64;
	// add r3,r3,r28
	ctx.r3.u64 = ctx.r3.u64 + ctx.r28.u64;
	// add r6,r30,r31
	ctx.r6.u64 = ctx.r30.u64 + ctx.r31.u64;
	// subf r31,r31,r30
	ctx.r31.s64 = ctx.r30.s64 - ctx.r31.s64;
	// stb r27,7(r11)
	PPC_STORE_U8(ctx.r11.u32 + 7, ctx.r27.u8);
	// add r27,r6,r3
	ctx.r27.u64 = ctx.r6.u64 + ctx.r3.u64;
	// mulli r5,r5,16819
	ctx.r5.s64 = ctx.r5.s64 * 16819;
	// add r27,r27,r9
	ctx.r27.u64 = ctx.r27.u64 + ctx.r9.u64;
	// subf r6,r3,r6
	ctx.r6.s64 = ctx.r6.s64 - ctx.r3.s64;
	// srawi r30,r27,18
	ctx.xer.ca = (ctx.r27.s32 < 0) & ((ctx.r27.u32 & 0x3FFFF) != 0);
	ctx.r30.s64 = ctx.r27.s32 >> 18;
	// add r5,r5,r24
	ctx.r5.u64 = ctx.r5.u64 + ctx.r24.u64;
	// clrlwi r3,r30,22
	ctx.r3.u64 = ctx.r30.u32 & 0x3FF;
	// add r6,r6,r9
	ctx.r6.u64 = ctx.r6.u64 + ctx.r9.u64;
	// add r5,r5,r28
	ctx.r5.u64 = ctx.r5.u64 + ctx.r28.u64;
	// srawi r6,r6,18
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x3FFFF) != 0);
	ctx.r6.s64 = ctx.r6.s32 >> 18;
	// add r30,r31,r5
	ctx.r30.u64 = ctx.r31.u64 + ctx.r5.u64;
	// clrlwi r28,r6,22
	ctx.r28.u64 = ctx.r6.u32 & 0x3FF;
	// add r30,r30,r9
	ctx.r30.u64 = ctx.r30.u64 + ctx.r9.u64;
	// lbzx r3,r3,r8
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r3.u32 + ctx.r8.u32);
	// mulli r6,r4,2446
	ctx.r6.s64 = ctx.r4.s64 * 2446;
	// stb r3,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r3.u8);
	// lbzx r4,r28,r8
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r28.u32 + ctx.r8.u32);
	// stb r4,6(r11)
	PPC_STORE_U8(ctx.r11.u32 + 6, ctx.r4.u8);
	// srawi r30,r30,18
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0x3FFFF) != 0);
	ctx.r30.s64 = ctx.r30.s32 >> 18;
	// subf r5,r5,r31
	ctx.r5.s64 = ctx.r31.s64 - ctx.r5.s64;
	// add r6,r6,r23
	ctx.r6.u64 = ctx.r6.u64 + ctx.r23.u64;
	// clrlwi r4,r30,22
	ctx.r4.u64 = ctx.r30.u32 & 0x3FF;
	// add r5,r5,r9
	ctx.r5.u64 = ctx.r5.u64 + ctx.r9.u64;
	// add r6,r6,r29
	ctx.r6.u64 = ctx.r6.u64 + ctx.r29.u64;
	// srawi r5,r5,18
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x3FFFF) != 0);
	ctx.r5.s64 = ctx.r5.s32 >> 18;
	// add r3,r22,r6
	ctx.r3.u64 = ctx.r22.u64 + ctx.r6.u64;
	// lbzx r4,r4,r8
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r4.u32 + ctx.r8.u32);
	// subf r6,r6,r22
	ctx.r6.s64 = ctx.r22.s64 - ctx.r6.s64;
	// stb r4,2(r11)
	PPC_STORE_U8(ctx.r11.u32 + 2, ctx.r4.u8);
	// clrlwi r5,r5,22
	ctx.r5.u64 = ctx.r5.u32 & 0x3FF;
	// add r4,r3,r9
	ctx.r4.u64 = ctx.r3.u64 + ctx.r9.u64;
	// lbzx r5,r5,r8
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r5.u32 + ctx.r8.u32);
	// add r6,r6,r9
	ctx.r6.u64 = ctx.r6.u64 + ctx.r9.u64;
	// srawi r4,r4,18
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x3FFFF) != 0);
	ctx.r4.s64 = ctx.r4.s32 >> 18;
	// srawi r6,r6,18
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x3FFFF) != 0);
	ctx.r6.s64 = ctx.r6.s32 >> 18;
	// clrlwi r4,r4,22
	ctx.r4.u64 = ctx.r4.u32 & 0x3FF;
	// clrlwi r6,r6,22
	ctx.r6.u64 = ctx.r6.u32 & 0x3FF;
	// stb r5,5(r11)
	PPC_STORE_U8(ctx.r11.u32 + 5, ctx.r5.u8);
	// lbzx r5,r4,r8
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r4.u32 + ctx.r8.u32);
	// stb r5,3(r11)
	PPC_STORE_U8(ctx.r11.u32 + 3, ctx.r5.u8);
	// lbzx r6,r6,r8
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r6.u32 + ctx.r8.u32);
loc_82806204:
	// stb r6,4(r11)
	PPC_STORE_U8(ctx.r11.u32 + 4, ctx.r6.u8);
	// addi r20,r20,4
	ctx.r20.s64 = ctx.r20.s64 + 4;
	// bdnz 0x82806000
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82806000;
	// b 0x82fa7698
	__restgprlr_16(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82806214"))) PPC_WEAK_FUNC(sub_82806214);
PPC_FUNC_IMPL(__imp__sub_82806214) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82806218"))) PPC_WEAK_FUNC(sub_82806218);
PPC_FUNC_IMPL(__imp__sub_82806218) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7654
	ctx.lr = 0x82806220;
	__savegprlr_19(ctx, base);
	// li r31,8
	ctx.r31.s64 = 8;
	// lwz r11,288(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 288);
	// lwz r10,80(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 80);
	// addi r9,r5,110
	ctx.r9.s64 = ctx.r5.s64 + 110;
	// addi r8,r11,128
	ctx.r8.s64 = ctx.r11.s64 + 128;
	// addi r10,r10,220
	ctx.r10.s64 = ctx.r10.s64 + 220;
	// addi r11,r1,-276
	ctx.r11.s64 = ctx.r1.s64 + -276;
	// mtctr r31
	ctx.ctr.u64 = ctx.r31.u64;
loc_82806240:
	// lha r4,-94(r9)
	ctx.r4.s64 = int16_t(PPC_LOAD_U16(ctx.r9.u32 + -94));
	// cmpwi r4,0
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne 0x828062d0
	if (!ctx.cr0.eq) goto loc_828062D0;
	// lhz r5,-78(r9)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r9.u32 + -78);
	// cmplwi r5,0
	ctx.cr0.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne 0x828062d0
	if (!ctx.cr0.eq) goto loc_828062D0;
	// lhz r5,-62(r9)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r9.u32 + -62);
	// cmplwi r5,0
	ctx.cr0.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne 0x828062d0
	if (!ctx.cr0.eq) goto loc_828062D0;
	// lhz r5,-46(r9)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r9.u32 + -46);
	// cmplwi r5,0
	ctx.cr0.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne 0x828062d0
	if (!ctx.cr0.eq) goto loc_828062D0;
	// lhz r5,-30(r9)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r9.u32 + -30);
	// cmplwi r5,0
	ctx.cr0.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne 0x828062d0
	if (!ctx.cr0.eq) goto loc_828062D0;
	// lhz r5,-14(r9)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r9.u32 + -14);
	// cmplwi r5,0
	ctx.cr0.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne 0x828062d0
	if (!ctx.cr0.eq) goto loc_828062D0;
	// lhz r5,2(r9)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r9.u32 + 2);
	// cmplwi r5,0
	ctx.cr0.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne 0x828062d0
	if (!ctx.cr0.eq) goto loc_828062D0;
	// lha r5,-110(r9)
	ctx.r5.s64 = int16_t(PPC_LOAD_U16(ctx.r9.u32 + -110));
	// addi r9,r9,2
	ctx.r9.s64 = ctx.r9.s64 + 2;
	// lwz r4,-220(r10)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + -220);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// mullw r5,r5,r4
	ctx.r5.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r4.s32);
	// stw r5,-92(r11)
	PPC_STORE_U32(ctx.r11.u32 + -92, ctx.r5.u32);
	// stw r5,-60(r11)
	PPC_STORE_U32(ctx.r11.u32 + -60, ctx.r5.u32);
	// stw r5,-28(r11)
	PPC_STORE_U32(ctx.r11.u32 + -28, ctx.r5.u32);
	// stw r5,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r5.u32);
	// stw r5,36(r11)
	PPC_STORE_U32(ctx.r11.u32 + 36, ctx.r5.u32);
	// stw r5,68(r11)
	PPC_STORE_U32(ctx.r11.u32 + 68, ctx.r5.u32);
	// stw r5,100(r11)
	PPC_STORE_U32(ctx.r11.u32 + 100, ctx.r5.u32);
	// stw r5,132(r11)
	PPC_STORE_U32(ctx.r11.u32 + 132, ctx.r5.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// b 0x828063e8
	goto loc_828063E8;
loc_828062D0:
	// lha r30,-110(r9)
	ctx.r30.s64 = int16_t(PPC_LOAD_U16(ctx.r9.u32 + -110));
	// lwz r3,-220(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + -220);
	// lha r25,-46(r9)
	ctx.r25.s64 = int16_t(PPC_LOAD_U16(ctx.r9.u32 + -46));
	// mullw r26,r30,r3
	ctx.r26.s64 = int64_t(ctx.r30.s32) * int64_t(ctx.r3.s32);
	// lha r24,-62(r9)
	ctx.r24.s64 = int16_t(PPC_LOAD_U16(ctx.r9.u32 + -62));
	// lha r31,-30(r9)
	ctx.r31.s64 = int16_t(PPC_LOAD_U16(ctx.r9.u32 + -30));
	// lwz r23,-156(r10)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r10.u32 + -156);
	// lha r28,-78(r9)
	ctx.r28.s64 = int16_t(PPC_LOAD_U16(ctx.r9.u32 + -78));
	// lha r27,-14(r9)
	ctx.r27.s64 = int16_t(PPC_LOAD_U16(ctx.r9.u32 + -14));
	// mullw r28,r28,r23
	ctx.r28.s64 = int64_t(ctx.r28.s32) * int64_t(ctx.r23.s32);
	// lwz r22,-92(r10)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + -92);
	// lwz r21,-28(r10)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r10.u32 + -28);
	// lwz r30,-188(r10)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + -188);
	// lwz r20,-124(r10)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r10.u32 + -124);
	// mullw r27,r27,r21
	ctx.r27.s64 = int64_t(ctx.r27.s32) * int64_t(ctx.r21.s32);
	// lwz r19,-60(r10)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r10.u32 + -60);
	// lhau r5,2(r9)
	ea = 2 + ctx.r9.u32;	ctx.r5.s64 = int16_t(PPC_LOAD_U16(ea));	ctx.r9.u32 = ea;	// lwzu r3,4(r10)
	ea = 4 + ctx.r10.u32;
	ctx.r3.u64 = PPC_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// mullw r30,r4,r30
	ctx.r30.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r30.s32);
	// mullw r29,r5,r3
	ctx.r29.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r3.s32);
	// mullw r4,r31,r19
	ctx.r4.s64 = int64_t(ctx.r31.s32) * int64_t(ctx.r19.s32);
	// mullw r5,r24,r20
	ctx.r5.s64 = int64_t(ctx.r24.s32) * int64_t(ctx.r20.s32);
	// subf r3,r5,r4
	ctx.r3.s64 = ctx.r4.s64 - ctx.r5.s64;
	// subf r31,r29,r30
	ctx.r31.s64 = ctx.r30.s64 - ctx.r29.s64;
	// add r5,r4,r5
	ctx.r5.u64 = ctx.r4.u64 + ctx.r5.u64;
	// add r4,r29,r30
	ctx.r4.u64 = ctx.r29.u64 + ctx.r30.u64;
	// subf r24,r27,r28
	ctx.r24.s64 = ctx.r28.s64 - ctx.r27.s64;
	// add r30,r31,r3
	ctx.r30.u64 = ctx.r31.u64 + ctx.r3.u64;
	// mulli r29,r24,362
	ctx.r29.s64 = ctx.r24.s64 * 362;
	// subf r24,r5,r4
	ctx.r24.s64 = ctx.r4.s64 - ctx.r5.s64;
	// mulli r30,r30,473
	ctx.r30.s64 = ctx.r30.s64 * 473;
	// mulli r3,r3,-669
	ctx.r3.s64 = ctx.r3.s64 * -669;
	// srawi r23,r29,8
	ctx.xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0xFF) != 0);
	ctx.r23.s64 = ctx.r29.s32 >> 8;
	// add r5,r4,r5
	ctx.r5.u64 = ctx.r4.u64 + ctx.r5.u64;
	// srawi r30,r30,8
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0xFF) != 0);
	ctx.r30.s64 = ctx.r30.s32 >> 8;
	// mulli r29,r24,362
	ctx.r29.s64 = ctx.r24.s64 * 362;
	// add r4,r27,r28
	ctx.r4.u64 = ctx.r27.u64 + ctx.r28.u64;
	// srawi r3,r3,8
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xFF) != 0);
	ctx.r3.s64 = ctx.r3.s32 >> 8;
	// mulli r31,r31,277
	ctx.r31.s64 = ctx.r31.s64 * 277;
	// mullw r28,r25,r22
	ctx.r28.s64 = int64_t(ctx.r25.s32) * int64_t(ctx.r22.s32);
	// srawi r24,r29,8
	ctx.xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0xFF) != 0);
	ctx.r24.s64 = ctx.r29.s32 >> 8;
	// subf r3,r5,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r5.s64;
	// srawi r31,r31,8
	ctx.xer.ca = (ctx.r31.s32 < 0) & ((ctx.r31.u32 & 0xFF) != 0);
	ctx.r31.s64 = ctx.r31.s32 >> 8;
	// add r29,r28,r26
	ctx.r29.u64 = ctx.r28.u64 + ctx.r26.u64;
	// subf r27,r4,r23
	ctx.r27.s64 = ctx.r23.s64 - ctx.r4.s64;
	// subf r28,r28,r26
	ctx.r28.s64 = ctx.r26.s64 - ctx.r28.s64;
	// add r3,r3,r30
	ctx.r3.u64 = ctx.r3.u64 + ctx.r30.u64;
	// subf r25,r30,r31
	ctx.r25.s64 = ctx.r31.s64 - ctx.r30.s64;
	// add r30,r4,r29
	ctx.r30.u64 = ctx.r4.u64 + ctx.r29.u64;
	// subf r26,r4,r29
	ctx.r26.s64 = ctx.r29.s64 - ctx.r4.s64;
	// add r4,r27,r28
	ctx.r4.u64 = ctx.r27.u64 + ctx.r28.u64;
	// subf r28,r27,r28
	ctx.r28.s64 = ctx.r28.s64 - ctx.r27.s64;
	// add r27,r5,r30
	ctx.r27.u64 = ctx.r5.u64 + ctx.r30.u64;
	// subf r31,r3,r24
	ctx.r31.s64 = ctx.r24.s64 - ctx.r3.s64;
	// subf r30,r5,r30
	ctx.r30.s64 = ctx.r30.s64 - ctx.r5.s64;
	// stw r27,-92(r11)
	PPC_STORE_U32(ctx.r11.u32 + -92, ctx.r27.u32);
	// add r5,r3,r4
	ctx.r5.u64 = ctx.r3.u64 + ctx.r4.u64;
	// subf r3,r3,r4
	ctx.r3.s64 = ctx.r4.s64 - ctx.r3.s64;
	// stw r30,132(r11)
	PPC_STORE_U32(ctx.r11.u32 + 132, ctx.r30.u32);
	// add r29,r25,r31
	ctx.r29.u64 = ctx.r25.u64 + ctx.r31.u64;
	// stw r5,-60(r11)
	PPC_STORE_U32(ctx.r11.u32 + -60, ctx.r5.u32);
	// add r4,r31,r28
	ctx.r4.u64 = ctx.r31.u64 + ctx.r28.u64;
	// stw r3,100(r11)
	PPC_STORE_U32(ctx.r11.u32 + 100, ctx.r3.u32);
	// subf r31,r31,r28
	ctx.r31.s64 = ctx.r28.s64 - ctx.r31.s64;
	// stw r4,-28(r11)
	PPC_STORE_U32(ctx.r11.u32 + -28, ctx.r4.u32);
	// add r5,r29,r26
	ctx.r5.u64 = ctx.r29.u64 + ctx.r26.u64;
	// subf r4,r29,r26
	ctx.r4.s64 = ctx.r26.s64 - ctx.r29.s64;
	// stw r31,68(r11)
	PPC_STORE_U32(ctx.r11.u32 + 68, ctx.r31.u32);
	// stw r5,36(r11)
	PPC_STORE_U32(ctx.r11.u32 + 36, ctx.r5.u32);
	// stwu r4,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r4.u32);
	ctx.r11.u32 = ea;
loc_828063E8:
	// bdnz 0x82806240
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82806240;
	// li r10,8
	ctx.r10.s64 = 8;
	// addi r11,r1,-372
	ctx.r11.s64 = ctx.r1.s64 + -372;
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_828063FC:
	// lwz r10,0(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// lwz r26,8(r11)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// add r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 + ctx.r7.u64;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// bne cr6,0x8280648c
	if (!ctx.cr6.eq) goto loc_8280648C;
	// lwz r9,12(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x8280648c
	if (!ctx.cr6.eq) goto loc_8280648C;
	// lwz r9,16(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x8280648c
	if (!ctx.cr6.eq) goto loc_8280648C;
	// lwz r9,20(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x8280648c
	if (!ctx.cr6.eq) goto loc_8280648C;
	// lwz r9,24(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x8280648c
	if (!ctx.cr6.eq) goto loc_8280648C;
	// lwz r9,28(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x8280648c
	if (!ctx.cr6.eq) goto loc_8280648C;
	// lwz r9,32(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x8280648c
	if (!ctx.cr6.eq) goto loc_8280648C;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// srawi r9,r9,5
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1F) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 5;
	// clrlwi r9,r9,22
	ctx.r9.u64 = ctx.r9.u32 & 0x3FF;
	// lbzx r9,r9,r8
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r8.u32);
	// stb r9,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r9.u8);
	// stb r9,1(r10)
	PPC_STORE_U8(ctx.r10.u32 + 1, ctx.r9.u8);
	// stb r9,2(r10)
	PPC_STORE_U8(ctx.r10.u32 + 2, ctx.r9.u8);
	// stb r9,4(r10)
	PPC_STORE_U8(ctx.r10.u32 + 4, ctx.r9.u8);
	// stb r9,5(r10)
	PPC_STORE_U8(ctx.r10.u32 + 5, ctx.r9.u8);
	// stb r9,6(r10)
	PPC_STORE_U8(ctx.r10.u32 + 6, ctx.r9.u8);
	// stb r9,7(r10)
	PPC_STORE_U8(ctx.r10.u32 + 7, ctx.r9.u8);
	// b 0x828065c0
	goto loc_828065C0;
loc_8280648C:
	// lwz r9,20(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// lwz r6,4(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r5,12(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// add r4,r6,r9
	ctx.r4.u64 = ctx.r6.u64 + ctx.r9.u64;
	// lwz r30,24(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// subf r27,r9,r6
	ctx.r27.s64 = ctx.r6.s64 - ctx.r9.s64;
	// lwz r31,16(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r3,28(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// lwzu r6,32(r11)
	ea = 32 + ctx.r11.u32;
	ctx.r6.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// subf r29,r31,r30
	ctx.r29.s64 = ctx.r30.s64 - ctx.r31.s64;
	// add r9,r3,r5
	ctx.r9.u64 = ctx.r3.u64 + ctx.r5.u64;
	// subf r28,r6,r26
	ctx.r28.s64 = ctx.r26.s64 - ctx.r6.s64;
	// subf r3,r3,r5
	ctx.r3.s64 = ctx.r5.s64 - ctx.r3.s64;
	// add r5,r30,r31
	ctx.r5.u64 = ctx.r30.u64 + ctx.r31.u64;
	// add r6,r6,r26
	ctx.r6.u64 = ctx.r6.u64 + ctx.r26.u64;
	// add r31,r28,r29
	ctx.r31.u64 = ctx.r28.u64 + ctx.r29.u64;
	// subf r30,r5,r6
	ctx.r30.s64 = ctx.r6.s64 - ctx.r5.s64;
	// mulli r26,r3,362
	ctx.r26.s64 = ctx.r3.s64 * 362;
	// add r6,r6,r5
	ctx.r6.u64 = ctx.r6.u64 + ctx.r5.u64;
	// mulli r31,r31,473
	ctx.r31.s64 = ctx.r31.s64 * 473;
	// add r3,r9,r4
	ctx.r3.u64 = ctx.r9.u64 + ctx.r4.u64;
	// mulli r5,r29,-669
	ctx.r5.s64 = ctx.r29.s64 * -669;
	// srawi r29,r26,8
	ctx.xer.ca = (ctx.r26.s32 < 0) & ((ctx.r26.u32 & 0xFF) != 0);
	ctx.r29.s64 = ctx.r26.s32 >> 8;
	// mulli r30,r30,362
	ctx.r30.s64 = ctx.r30.s64 * 362;
	// srawi r31,r31,8
	ctx.xer.ca = (ctx.r31.s32 < 0) & ((ctx.r31.u32 & 0xFF) != 0);
	ctx.r31.s64 = ctx.r31.s32 >> 8;
	// mulli r28,r28,277
	ctx.r28.s64 = ctx.r28.s64 * 277;
	// add r26,r6,r3
	ctx.r26.u64 = ctx.r6.u64 + ctx.r3.u64;
	// srawi r5,r5,8
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0xFF) != 0);
	ctx.r5.s64 = ctx.r5.s32 >> 8;
	// srawi r24,r30,8
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0xFF) != 0);
	ctx.r24.s64 = ctx.r30.s32 >> 8;
	// srawi r28,r28,8
	ctx.xer.ca = (ctx.r28.s32 < 0) & ((ctx.r28.u32 & 0xFF) != 0);
	ctx.r28.s64 = ctx.r28.s32 >> 8;
	// srawi r26,r26,5
	ctx.xer.ca = (ctx.r26.s32 < 0) & ((ctx.r26.u32 & 0x1F) != 0);
	ctx.r26.s64 = ctx.r26.s32 >> 5;
	// subf r5,r6,r5
	ctx.r5.s64 = ctx.r5.s64 - ctx.r6.s64;
	// subf r29,r9,r29
	ctx.r29.s64 = ctx.r29.s64 - ctx.r9.s64;
	// clrlwi r26,r26,22
	ctx.r26.u64 = ctx.r26.u32 & 0x3FF;
	// subf r23,r6,r3
	ctx.r23.s64 = ctx.r3.s64 - ctx.r6.s64;
	// add r5,r5,r31
	ctx.r5.u64 = ctx.r5.u64 + ctx.r31.u64;
	// add r30,r29,r27
	ctx.r30.u64 = ctx.r29.u64 + ctx.r27.u64;
	// subf r3,r29,r27
	ctx.r3.s64 = ctx.r27.s64 - ctx.r29.s64;
	// add r22,r5,r30
	ctx.r22.u64 = ctx.r5.u64 + ctx.r30.u64;
	// lbzx r27,r26,r8
	ctx.r27.u64 = PPC_LOAD_U8(ctx.r26.u32 + ctx.r8.u32);
	// srawi r29,r23,5
	ctx.xer.ca = (ctx.r23.s32 < 0) & ((ctx.r23.u32 & 0x1F) != 0);
	ctx.r29.s64 = ctx.r23.s32 >> 5;
	// subf r6,r5,r24
	ctx.r6.s64 = ctx.r24.s64 - ctx.r5.s64;
	// subf r30,r5,r30
	ctx.r30.s64 = ctx.r30.s64 - ctx.r5.s64;
	// subf r5,r9,r4
	ctx.r5.s64 = ctx.r4.s64 - ctx.r9.s64;
	// clrlwi r4,r29,22
	ctx.r4.u64 = ctx.r29.u32 & 0x3FF;
	// stb r27,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r27.u8);
	// subf r31,r31,r28
	ctx.r31.s64 = ctx.r28.s64 - ctx.r31.s64;
	// srawi r28,r22,5
	ctx.xer.ca = (ctx.r22.s32 < 0) & ((ctx.r22.u32 & 0x1F) != 0);
	ctx.r28.s64 = ctx.r22.s32 >> 5;
	// add r9,r31,r6
	ctx.r9.u64 = ctx.r31.u64 + ctx.r6.u64;
	// add r29,r6,r3
	ctx.r29.u64 = ctx.r6.u64 + ctx.r3.u64;
	// srawi r31,r30,5
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0x1F) != 0);
	ctx.r31.s64 = ctx.r30.s32 >> 5;
	// lbzx r4,r4,r8
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r4.u32 + ctx.r8.u32);
	// clrlwi r30,r28,22
	ctx.r30.u64 = ctx.r28.u32 & 0x3FF;
	// stb r4,7(r10)
	PPC_STORE_U8(ctx.r10.u32 + 7, ctx.r4.u8);
	// subf r6,r6,r3
	ctx.r6.s64 = ctx.r3.s64 - ctx.r6.s64;
	// srawi r3,r29,5
	ctx.xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0x1F) != 0);
	ctx.r3.s64 = ctx.r29.s32 >> 5;
	// clrlwi r4,r31,22
	ctx.r4.u64 = ctx.r31.u32 & 0x3FF;
	// lbzx r31,r30,r8
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r30.u32 + ctx.r8.u32);
	// clrlwi r3,r3,22
	ctx.r3.u64 = ctx.r3.u32 & 0x3FF;
	// stb r31,1(r10)
	PPC_STORE_U8(ctx.r10.u32 + 1, ctx.r31.u8);
	// add r30,r9,r5
	ctx.r30.u64 = ctx.r9.u64 + ctx.r5.u64;
	// lbzx r4,r4,r8
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r4.u32 + ctx.r8.u32);
	// srawi r6,r6,5
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x1F) != 0);
	ctx.r6.s64 = ctx.r6.s32 >> 5;
	// stb r4,6(r10)
	PPC_STORE_U8(ctx.r10.u32 + 6, ctx.r4.u8);
	// subf r9,r9,r5
	ctx.r9.s64 = ctx.r5.s64 - ctx.r9.s64;
	// lbzx r5,r3,r8
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r3.u32 + ctx.r8.u32);
	// srawi r4,r30,5
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0x1F) != 0);
	ctx.r4.s64 = ctx.r30.s32 >> 5;
	// stb r5,2(r10)
	PPC_STORE_U8(ctx.r10.u32 + 2, ctx.r5.u8);
	// clrlwi r6,r6,22
	ctx.r6.u64 = ctx.r6.u32 & 0x3FF;
	// srawi r9,r9,5
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1F) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 5;
	// clrlwi r5,r4,22
	ctx.r5.u64 = ctx.r4.u32 & 0x3FF;
	// clrlwi r9,r9,22
	ctx.r9.u64 = ctx.r9.u32 & 0x3FF;
	// lbzx r6,r6,r8
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r6.u32 + ctx.r8.u32);
	// stb r6,5(r10)
	PPC_STORE_U8(ctx.r10.u32 + 5, ctx.r6.u8);
	// lbzx r6,r5,r8
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r5.u32 + ctx.r8.u32);
	// stb r6,4(r10)
	PPC_STORE_U8(ctx.r10.u32 + 4, ctx.r6.u8);
	// lbzx r9,r9,r8
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r8.u32);
loc_828065C0:
	// stb r9,3(r10)
	PPC_STORE_U8(ctx.r10.u32 + 3, ctx.r9.u8);
	// addi r25,r25,4
	ctx.r25.s64 = ctx.r25.s64 + 4;
	// bdnz 0x828063fc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_828063FC;
	// b 0x82fa76a4
	__restgprlr_19(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828065D0"))) PPC_WEAK_FUNC(sub_828065D0);
PPC_FUNC_IMPL(__imp__sub_828065D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x828065D8;
	__savegprlr_28(ctx, base);
	// addi r12,r1,-40
	ctx.r12.s64 = ctx.r1.s64 + -40;
	// bl 0x82fa8d20
	ctx.lr = 0x828065E0;
	__savefpr_26(ctx, base);
	// li r31,8
	ctx.r31.s64 = 8;
	// lwz r11,288(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 288);
	// lwz r8,80(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 80);
	// addi r10,r5,110
	ctx.r10.s64 = ctx.r5.s64 + 110;
	// lis r5,-32255
	ctx.r5.s64 = -2113863680;
	// lis r4,-32255
	ctx.r4.s64 = -2113863680;
	// lis r3,-32255
	ctx.r3.s64 = -2113863680;
	// mtctr r31
	ctx.ctr.u64 = ctx.r31.u64;
	// lis r31,-32233
	ctx.r31.s64 = -2112421888;
	// addi r9,r11,128
	ctx.r9.s64 = ctx.r11.s64 + 128;
	// lfs f10,32564(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 32564);
	ctx.f10.f64 = double(temp.f32);
	// addi r8,r8,220
	ctx.r8.s64 = ctx.r8.s64 + 220;
	// lfs f11,32560(r4)
	temp.u32 = PPC_LOAD_U32(ctx.r4.u32 + 32560);
	ctx.f11.f64 = double(temp.f32);
	// addi r11,r1,-260
	ctx.r11.s64 = ctx.r1.s64 + -260;
	// lfs f12,32556(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 32556);
	ctx.f12.f64 = double(temp.f32);
	// lfs f0,24432(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 24432);
	ctx.f0.f64 = double(temp.f32);
loc_82806620:
	// lha r5,-94(r10)
	ctx.r5.s64 = int16_t(PPC_LOAD_U16(ctx.r10.u32 + -94));
	// cmpwi r5,0
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bne 0x828066c0
	if (!ctx.cr0.eq) goto loc_828066C0;
	// lhz r4,-78(r10)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r10.u32 + -78);
	// cmplwi r4,0
	ctx.cr0.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne 0x828066c0
	if (!ctx.cr0.eq) goto loc_828066C0;
	// lhz r4,-62(r10)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r10.u32 + -62);
	// cmplwi r4,0
	ctx.cr0.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne 0x828066c0
	if (!ctx.cr0.eq) goto loc_828066C0;
	// lhz r4,-46(r10)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r10.u32 + -46);
	// cmplwi r4,0
	ctx.cr0.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne 0x828066c0
	if (!ctx.cr0.eq) goto loc_828066C0;
	// lhz r4,-30(r10)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r10.u32 + -30);
	// cmplwi r4,0
	ctx.cr0.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne 0x828066c0
	if (!ctx.cr0.eq) goto loc_828066C0;
	// lhz r4,-14(r10)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r10.u32 + -14);
	// cmplwi r4,0
	ctx.cr0.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne 0x828066c0
	if (!ctx.cr0.eq) goto loc_828066C0;
	// lhz r4,2(r10)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r10.u32 + 2);
	// cmplwi r4,0
	ctx.cr0.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne 0x828066c0
	if (!ctx.cr0.eq) goto loc_828066C0;
	// lha r5,-110(r10)
	ctx.r5.s64 = int16_t(PPC_LOAD_U16(ctx.r10.u32 + -110));
	// lfs f13,-220(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -220);
	ctx.f13.f64 = double(temp.f32);
	// std r5,-368(r1)
	PPC_STORE_U64(ctx.r1.u32 + -368, ctx.r5.u64);
	// lfd f9,-368(r1)
	ctx.f9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -368);
	// fcfid f9,f9
	ctx.f9.f64 = double(ctx.f9.s64);
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// frsp f9,f9
	ctx.f9.f64 = double(float(ctx.f9.f64));
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// fmuls f13,f9,f13
	ctx.f13.f64 = double(float(ctx.f9.f64 * ctx.f13.f64));
	// stfs f13,-92(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + -92, temp.u32);
	// stfs f13,-60(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + -60, temp.u32);
	// stfs f13,-28(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + -28, temp.u32);
	// stfs f13,4(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stfs f13,36(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 36, temp.u32);
	// stfs f13,68(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 68, temp.u32);
	// stfs f13,100(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 100, temp.u32);
	// stfs f13,132(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 132, temp.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// b 0x8280685c
	goto loc_8280685C;
loc_828066C0:
	// lha r4,-14(r10)
	ctx.r4.s64 = int16_t(PPC_LOAD_U16(ctx.r10.u32 + -14));
	// extsw r5,r5
	ctx.r5.s64 = ctx.r5.s32;
	// lha r28,-78(r10)
	ctx.r28.s64 = int16_t(PPC_LOAD_U16(ctx.r10.u32 + -78));
	// lfs f4,-28(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -28);
	ctx.f4.f64 = double(temp.f32);
	// std r4,-400(r1)
	PPC_STORE_U64(ctx.r1.u32 + -400, ctx.r4.u64);
	// lfs f9,-156(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -156);
	ctx.f9.f64 = double(temp.f32);
	// std r28,-416(r1)
	PPC_STORE_U64(ctx.r1.u32 + -416, ctx.r28.u64);
	// lfs f3,-220(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -220);
	ctx.f3.f64 = double(temp.f32);
	// lha r3,-110(r10)
	ctx.r3.s64 = int16_t(PPC_LOAD_U16(ctx.r10.u32 + -110));
	// lfs f2,-92(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -92);
	ctx.f2.f64 = double(temp.f32);
	// lha r31,-46(r10)
	ctx.r31.s64 = int16_t(PPC_LOAD_U16(ctx.r10.u32 + -46));
	// lfs f30,-124(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -124);
	ctx.f30.f64 = double(temp.f32);
	// lha r30,-62(r10)
	ctx.r30.s64 = int16_t(PPC_LOAD_U16(ctx.r10.u32 + -62));
	// lfd f8,-400(r1)
	ctx.f8.u64 = PPC_LOAD_U64(ctx.r1.u32 + -400);
	// std r5,-392(r1)
	PPC_STORE_U64(ctx.r1.u32 + -392, ctx.r5.u64);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// std r3,-376(r1)
	PPC_STORE_U64(ctx.r1.u32 + -376, ctx.r3.u64);
	// lfd f27,-416(r1)
	ctx.f27.u64 = PPC_LOAD_U64(ctx.r1.u32 + -416);
	// std r31,-408(r1)
	PPC_STORE_U64(ctx.r1.u32 + -408, ctx.r31.u64);
	// fcfid f8,f8
	ctx.f8.f64 = double(ctx.f8.s64);
	// lha r29,-30(r10)
	ctx.r29.s64 = int16_t(PPC_LOAD_U16(ctx.r10.u32 + -30));
	// fcfid f27,f27
	ctx.f27.f64 = double(ctx.f27.s64);
	// lhau r5,2(r10)
	ea = 2 + ctx.r10.u32;	ctx.r5.s64 = int16_t(PPC_LOAD_U16(ea));	ctx.r10.u32 = ea;	// frsp f8,f8
	ctx.f8.f64 = double(float(ctx.f8.f64));
	// std r30,-384(r1)
	PPC_STORE_U64(ctx.r1.u32 + -384, ctx.r30.u64);
	// lfd f1,-384(r1)
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r1.u32 + -384);
	// std r5,-432(r1)
	PPC_STORE_U64(ctx.r1.u32 + -432, ctx.r5.u64);
	// lfd f26,-432(r1)
	ctx.f26.u64 = PPC_LOAD_U64(ctx.r1.u32 + -432);
	// lfd f6,-376(r1)
	ctx.f6.u64 = PPC_LOAD_U64(ctx.r1.u32 + -376);
	// frsp f27,f27
	ctx.f27.f64 = double(float(ctx.f27.f64));
	// lfd f5,-408(r1)
	ctx.f5.u64 = PPC_LOAD_U64(ctx.r1.u32 + -408);
	// fcfid f6,f6
	ctx.f6.f64 = double(ctx.f6.s64);
	// fcfid f5,f5
	ctx.f5.f64 = double(ctx.f5.s64);
	// std r29,-424(r1)
	PPC_STORE_U64(ctx.r1.u32 + -424, ctx.r29.u64);
	// fmuls f8,f8,f4
	ctx.f8.f64 = double(float(ctx.f8.f64 * ctx.f4.f64));
	// lfd f7,-392(r1)
	ctx.f7.u64 = PPC_LOAD_U64(ctx.r1.u32 + -392);
	// lfd f31,-424(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -424);
	// fcfid f31,f31
	ctx.f31.f64 = double(ctx.f31.s64);
	// frsp f6,f6
	ctx.f6.f64 = double(float(ctx.f6.f64));
	// lfs f29,-60(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -60);
	ctx.f29.f64 = double(temp.f32);
	// frsp f5,f5
	ctx.f5.f64 = double(float(ctx.f5.f64));
	// lfs f28,-188(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -188);
	ctx.f28.f64 = double(temp.f32);
	// fmuls f9,f27,f9
	ctx.f9.f64 = double(float(ctx.f27.f64 * ctx.f9.f64));
	// lfsu f13,4(r8)
	ea = 4 + ctx.r8.u32;
	temp.u32 = PPC_LOAD_U32(ea);
	ctx.r8.u32 = ea;
	ctx.f13.f64 = double(temp.f32);
	// fcfid f1,f1
	ctx.f1.f64 = double(ctx.f1.s64);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// fcfid f7,f7
	ctx.f7.f64 = double(ctx.f7.s64);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// fcfid f26,f26
	ctx.f26.f64 = double(ctx.f26.s64);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// frsp f31,f31
	ctx.f31.f64 = double(float(ctx.f31.f64));
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// fmuls f6,f6,f3
	ctx.f6.f64 = double(float(ctx.f6.f64 * ctx.f3.f64));
	// fmuls f5,f5,f2
	ctx.f5.f64 = double(float(ctx.f5.f64 * ctx.f2.f64));
	// fsubs f2,f9,f8
	ctx.f2.f64 = double(float(ctx.f9.f64 - ctx.f8.f64));
	// fadds f9,f8,f9
	ctx.f9.f64 = double(float(ctx.f8.f64 + ctx.f9.f64));
	// frsp f1,f1
	ctx.f1.f64 = double(float(ctx.f1.f64));
	// frsp f7,f7
	ctx.f7.f64 = double(float(ctx.f7.f64));
	// frsp f27,f26
	ctx.f27.f64 = double(float(ctx.f26.f64));
	// fmuls f3,f31,f29
	ctx.f3.f64 = double(float(ctx.f31.f64 * ctx.f29.f64));
	// fadds f8,f5,f6
	ctx.f8.f64 = double(float(ctx.f5.f64 + ctx.f6.f64));
	// fmuls f2,f2,f0
	ctx.f2.f64 = double(float(ctx.f2.f64 * ctx.f0.f64));
	// fsubs f6,f6,f5
	ctx.f6.f64 = double(float(ctx.f6.f64 - ctx.f5.f64));
	// fmuls f4,f1,f30
	ctx.f4.f64 = double(float(ctx.f1.f64 * ctx.f30.f64));
	// fmuls f7,f7,f28
	ctx.f7.f64 = double(float(ctx.f7.f64 * ctx.f28.f64));
	// fmuls f13,f27,f13
	ctx.f13.f64 = double(float(ctx.f27.f64 * ctx.f13.f64));
	// fadds f1,f9,f8
	ctx.f1.f64 = double(float(ctx.f9.f64 + ctx.f8.f64));
	// fsubs f8,f8,f9
	ctx.f8.f64 = double(float(ctx.f8.f64 - ctx.f9.f64));
	// fsubs f9,f2,f9
	ctx.f9.f64 = double(float(ctx.f2.f64 - ctx.f9.f64));
	// fadds f5,f3,f4
	ctx.f5.f64 = double(float(ctx.f3.f64 + ctx.f4.f64));
	// fadds f2,f9,f6
	ctx.f2.f64 = double(float(ctx.f9.f64 + ctx.f6.f64));
	// fsubs f9,f6,f9
	ctx.f9.f64 = double(float(ctx.f6.f64 - ctx.f9.f64));
	// fsubs f6,f3,f4
	ctx.f6.f64 = double(float(ctx.f3.f64 - ctx.f4.f64));
	// fsubs f4,f7,f13
	ctx.f4.f64 = double(float(ctx.f7.f64 - ctx.f13.f64));
	// fadds f13,f13,f7
	ctx.f13.f64 = double(float(ctx.f13.f64 + ctx.f7.f64));
	// fmuls f7,f6,f11
	ctx.f7.f64 = double(float(ctx.f6.f64 * ctx.f11.f64));
	// fadds f6,f4,f6
	ctx.f6.f64 = double(float(ctx.f4.f64 + ctx.f6.f64));
	// fadds f3,f13,f5
	ctx.f3.f64 = double(float(ctx.f13.f64 + ctx.f5.f64));
	// fsubs f13,f13,f5
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f5.f64));
	// fmuls f5,f4,f10
	ctx.f5.f64 = double(float(ctx.f4.f64 * ctx.f10.f64));
	// fmuls f6,f6,f12
	ctx.f6.f64 = double(float(ctx.f6.f64 * ctx.f12.f64));
	// fsubs f7,f6,f7
	ctx.f7.f64 = double(float(ctx.f6.f64 - ctx.f7.f64));
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fsubs f6,f5,f6
	ctx.f6.f64 = double(float(ctx.f5.f64 - ctx.f6.f64));
	// fadds f4,f3,f1
	ctx.f4.f64 = double(float(ctx.f3.f64 + ctx.f1.f64));
	// stfs f4,-92(r11)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r11.u32 + -92, temp.u32);
	// fsubs f4,f1,f3
	ctx.f4.f64 = double(float(ctx.f1.f64 - ctx.f3.f64));
	// stfs f4,132(r11)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r11.u32 + 132, temp.u32);
	// fsubs f7,f7,f3
	ctx.f7.f64 = double(float(ctx.f7.f64 - ctx.f3.f64));
	// fsubs f13,f13,f7
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f7.f64));
	// fadds f5,f7,f2
	ctx.f5.f64 = double(float(ctx.f7.f64 + ctx.f2.f64));
	// stfs f5,-60(r11)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r11.u32 + -60, temp.u32);
	// fsubs f7,f2,f7
	ctx.f7.f64 = double(float(ctx.f2.f64 - ctx.f7.f64));
	// stfs f7,100(r11)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r11.u32 + 100, temp.u32);
	// fadds f7,f6,f13
	ctx.f7.f64 = double(float(ctx.f6.f64 + ctx.f13.f64));
	// fadds f6,f13,f9
	ctx.f6.f64 = double(float(ctx.f13.f64 + ctx.f9.f64));
	// stfs f6,-28(r11)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r11.u32 + -28, temp.u32);
	// fsubs f13,f9,f13
	ctx.f13.f64 = double(float(ctx.f9.f64 - ctx.f13.f64));
	// stfs f13,68(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 68, temp.u32);
	// fadds f13,f7,f8
	ctx.f13.f64 = double(float(ctx.f7.f64 + ctx.f8.f64));
	// stfs f13,36(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 36, temp.u32);
	// fsubs f13,f8,f7
	ctx.f13.f64 = double(float(ctx.f8.f64 - ctx.f7.f64));
	// stfsu f13,4(r11)
	temp.f32 = float(ctx.f13.f64);
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
loc_8280685C:
	// bdnz 0x82806620
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82806620;
	// li r10,8
	ctx.r10.s64 = 8;
	// addi r11,r1,-380
	ctx.r11.s64 = ctx.r1.s64 + -380;
	// addi r6,r6,-4
	ctx.r6.s64 = ctx.r6.s64 + -4;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82806870:
	// lfs f6,36(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	ctx.f6.f64 = double(temp.f32);
	// lwzu r8,4(r6)
	ea = 4 + ctx.r6.u32;
	ctx.r8.u64 = PPC_LOAD_U32(ea);
	ctx.r6.u32 = ea;
	// lfs f8,52(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	ctx.f8.f64 = double(temp.f32);
	// lfs f13,44(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	ctx.f13.f64 = double(temp.f32);
	// fadds f4,f8,f6
	ctx.f4.f64 = double(float(ctx.f8.f64 + ctx.f6.f64));
	// lfs f9,28(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f8,f6,f8
	ctx.f8.f64 = double(float(ctx.f6.f64 - ctx.f8.f64));
	// fadds f7,f9,f13
	ctx.f7.f64 = double(float(ctx.f9.f64 + ctx.f13.f64));
	// lfs f3,40(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	ctx.f3.f64 = double(temp.f32);
	// lfs f5,48(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	ctx.f5.f64 = double(temp.f32);
	// fsubs f9,f9,f13
	ctx.f9.f64 = double(float(ctx.f9.f64 - ctx.f13.f64));
	// lfs f6,56(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	ctx.f6.f64 = double(temp.f32);
	// fsubs f2,f5,f3
	ctx.f2.f64 = double(float(ctx.f5.f64 - ctx.f3.f64));
	// lfsu f13,32(r11)
	ea = 32 + ctx.r11.u32;
	temp.u32 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	ctx.f13.f64 = double(temp.f32);
	// fadds f5,f3,f5
	ctx.f5.f64 = double(float(ctx.f3.f64 + ctx.f5.f64));
	// fsubs f3,f13,f6
	ctx.f3.f64 = double(float(ctx.f13.f64 - ctx.f6.f64));
	// add r10,r8,r7
	ctx.r10.u64 = ctx.r8.u64 + ctx.r7.u64;
	// fadds f13,f6,f13
	ctx.f13.f64 = double(float(ctx.f6.f64 + ctx.f13.f64));
	// fmuls f8,f8,f0
	ctx.f8.f64 = double(float(ctx.f8.f64 * ctx.f0.f64));
	// fadds f6,f4,f7
	ctx.f6.f64 = double(float(ctx.f4.f64 + ctx.f7.f64));
	// fsubs f7,f7,f4
	ctx.f7.f64 = double(float(ctx.f7.f64 - ctx.f4.f64));
	// fmuls f1,f2,f11
	ctx.f1.f64 = double(float(ctx.f2.f64 * ctx.f11.f64));
	// fadds f2,f3,f2
	ctx.f2.f64 = double(float(ctx.f3.f64 + ctx.f2.f64));
	// fadds f31,f13,f5
	ctx.f31.f64 = double(float(ctx.f13.f64 + ctx.f5.f64));
	// fsubs f13,f13,f5
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f5.f64));
	// fmuls f5,f3,f10
	ctx.f5.f64 = double(float(ctx.f3.f64 * ctx.f10.f64));
	// fsubs f8,f8,f4
	ctx.f8.f64 = double(float(ctx.f8.f64 - ctx.f4.f64));
	// fmuls f4,f2,f12
	ctx.f4.f64 = double(float(ctx.f2.f64 * ctx.f12.f64));
	// fadds f3,f31,f6
	ctx.f3.f64 = double(float(ctx.f31.f64 + ctx.f6.f64));
	// fsubs f6,f6,f31
	ctx.f6.f64 = double(float(ctx.f6.f64 - ctx.f31.f64));
	// fmuls f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fadds f2,f8,f9
	ctx.f2.f64 = double(float(ctx.f8.f64 + ctx.f9.f64));
	// fsubs f9,f9,f8
	ctx.f9.f64 = double(float(ctx.f9.f64 - ctx.f8.f64));
	// fsubs f8,f4,f1
	ctx.f8.f64 = double(float(ctx.f4.f64 - ctx.f1.f64));
	// fctiwz f3,f3
	ctx.f3.s64 = (ctx.f3.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f3.f64));
	// stfd f3,-432(r1)
	PPC_STORE_U64(ctx.r1.u32 + -432, ctx.f3.u64);
	// lwz r5,-428(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + -428);
	// addi r5,r5,4
	ctx.r5.s64 = ctx.r5.s64 + 4;
	// fsubs f8,f8,f31
	ctx.f8.f64 = double(float(ctx.f8.f64 - ctx.f31.f64));
	// srawi r4,r5,3
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x7) != 0);
	ctx.r4.s64 = ctx.r5.s32 >> 3;
	// fctiwz f6,f6
	ctx.f6.s64 = (ctx.f6.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f6.f64));
	// stfd f6,-432(r1)
	PPC_STORE_U64(ctx.r1.u32 + -432, ctx.f6.u64);
	// lwz r5,-428(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + -428);
	// clrlwi r4,r4,22
	ctx.r4.u64 = ctx.r4.u32 & 0x3FF;
	// addi r5,r5,4
	ctx.r5.s64 = ctx.r5.s64 + 4;
	// fsubs f6,f5,f4
	ctx.f6.f64 = double(float(ctx.f5.f64 - ctx.f4.f64));
	// fadds f5,f8,f2
	ctx.f5.f64 = double(float(ctx.f8.f64 + ctx.f2.f64));
	// srawi r5,r5,3
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x7) != 0);
	ctx.r5.s64 = ctx.r5.s32 >> 3;
	// fsubs f4,f2,f8
	ctx.f4.f64 = double(float(ctx.f2.f64 - ctx.f8.f64));
	// lbzx r4,r4,r9
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r4.u32 + ctx.r9.u32);
	// clrlwi r5,r5,22
	ctx.r5.u64 = ctx.r5.u32 & 0x3FF;
	// fsubs f13,f13,f8
	ctx.f13.f64 = double(float(ctx.f13.f64 - ctx.f8.f64));
	// stbx r4,r8,r7
	PPC_STORE_U8(ctx.r8.u32 + ctx.r7.u32, ctx.r4.u8);
	// lbzx r8,r5,r9
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r5.u32 + ctx.r9.u32);
	// stb r8,7(r10)
	PPC_STORE_U8(ctx.r10.u32 + 7, ctx.r8.u8);
	// fctiwz f8,f5
	ctx.f8.s64 = (ctx.f5.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f5.f64));
	// stfd f8,-432(r1)
	PPC_STORE_U64(ctx.r1.u32 + -432, ctx.f8.u64);
	// lwz r8,-428(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + -428);
	// fctiwz f8,f4
	ctx.f8.s64 = (ctx.f4.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f4.f64));
	// stfd f8,-432(r1)
	PPC_STORE_U64(ctx.r1.u32 + -432, ctx.f8.u64);
	// lwz r5,-428(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + -428);
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// fadds f8,f13,f9
	ctx.f8.f64 = double(float(ctx.f13.f64 + ctx.f9.f64));
	// addi r5,r5,4
	ctx.r5.s64 = ctx.r5.s64 + 4;
	// fctiwz f8,f8
	ctx.f8.s64 = (ctx.f8.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f8.f64));
	// srawi r8,r8,3
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7) != 0);
	ctx.r8.s64 = ctx.r8.s32 >> 3;
	// stfd f8,-432(r1)
	PPC_STORE_U64(ctx.r1.u32 + -432, ctx.f8.u64);
	// srawi r5,r5,3
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x7) != 0);
	ctx.r5.s64 = ctx.r5.s32 >> 3;
	// fadds f6,f6,f13
	ctx.f6.f64 = double(float(ctx.f6.f64 + ctx.f13.f64));
	// clrlwi r8,r8,22
	ctx.r8.u64 = ctx.r8.u32 & 0x3FF;
	// clrlwi r5,r5,22
	ctx.r5.u64 = ctx.r5.u32 & 0x3FF;
	// lbzx r4,r8,r9
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r8.u32 + ctx.r9.u32);
	// stb r4,1(r10)
	PPC_STORE_U8(ctx.r10.u32 + 1, ctx.r4.u8);
	// lbzx r5,r5,r9
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r5.u32 + ctx.r9.u32);
	// stb r5,6(r10)
	PPC_STORE_U8(ctx.r10.u32 + 6, ctx.r5.u8);
	// lwz r8,-428(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + -428);
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// srawi r8,r8,3
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7) != 0);
	ctx.r8.s64 = ctx.r8.s32 >> 3;
	// clrlwi r8,r8,22
	ctx.r8.u64 = ctx.r8.u32 & 0x3FF;
	// lbzx r8,r8,r9
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r8.u32 + ctx.r9.u32);
	// stb r8,2(r10)
	PPC_STORE_U8(ctx.r10.u32 + 2, ctx.r8.u8);
	// fsubs f13,f9,f13
	ctx.f13.f64 = double(float(ctx.f9.f64 - ctx.f13.f64));
	// fsubs f9,f7,f6
	ctx.f9.f64 = double(float(ctx.f7.f64 - ctx.f6.f64));
	// fadds f8,f6,f7
	ctx.f8.f64 = double(float(ctx.f6.f64 + ctx.f7.f64));
	// fctiwz f13,f13
	ctx.f13.s64 = (ctx.f13.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f13.f64));
	// stfd f13,-416(r1)
	PPC_STORE_U64(ctx.r1.u32 + -416, ctx.f13.u64);
	// fctiwz f13,f9
	ctx.f13.s64 = (ctx.f9.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f9.f64));
	// stfd f13,-424(r1)
	PPC_STORE_U64(ctx.r1.u32 + -424, ctx.f13.u64);
	// fctiwz f13,f8
	ctx.f13.s64 = (ctx.f8.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f8.f64));
	// stfd f13,-432(r1)
	PPC_STORE_U64(ctx.r1.u32 + -432, ctx.f13.u64);
	// lwz r5,-428(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + -428);
	// lwz r8,-412(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + -412);
	// addi r4,r8,4
	ctx.r4.s64 = ctx.r8.s64 + 4;
	// srawi r4,r4,3
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x7) != 0);
	ctx.r4.s64 = ctx.r4.s32 >> 3;
	// lwz r8,-420(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + -420);
	// addi r5,r5,4
	ctx.r5.s64 = ctx.r5.s64 + 4;
	// clrlwi r4,r4,22
	ctx.r4.u64 = ctx.r4.u32 & 0x3FF;
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// srawi r5,r5,3
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x7) != 0);
	ctx.r5.s64 = ctx.r5.s32 >> 3;
	// lbzx r4,r4,r9
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r4.u32 + ctx.r9.u32);
	// srawi r8,r8,3
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7) != 0);
	ctx.r8.s64 = ctx.r8.s32 >> 3;
	// clrlwi r5,r5,22
	ctx.r5.u64 = ctx.r5.u32 & 0x3FF;
	// clrlwi r8,r8,22
	ctx.r8.u64 = ctx.r8.u32 & 0x3FF;
	// stb r4,5(r10)
	PPC_STORE_U8(ctx.r10.u32 + 5, ctx.r4.u8);
	// lbzx r5,r5,r9
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r5.u32 + ctx.r9.u32);
	// stb r5,4(r10)
	PPC_STORE_U8(ctx.r10.u32 + 4, ctx.r5.u8);
	// lbzx r8,r8,r9
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r8.u32 + ctx.r9.u32);
	// stb r8,3(r10)
	PPC_STORE_U8(ctx.r10.u32 + 3, ctx.r8.u8);
	// bdnz 0x82806870
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82806870;
	// addi r12,r1,-40
	ctx.r12.s64 = ctx.r1.s64 + -40;
	// bl 0x82fa8d6c
	ctx.lr = 0x82806A2C;
	__restfpr_26(ctx, base);
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82806A30"))) PPC_WEAK_FUNC(sub_82806A30);
PPC_FUNC_IMPL(__imp__sub_82806A30) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7658
	ctx.lr = 0x82806A38;
	__savegprlr_20(ctx, base);
	// li r10,8
	ctx.r10.s64 = 8;
	// addi r11,r3,-28
	ctx.r11.s64 = ctx.r3.s64 + -28;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82806A44:
	// lwz r10,56(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// lwz r9,28(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// lwz r28,48(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// lwz r31,36(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// subf r8,r10,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r10.s64;
	// lwz r27,44(r11)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// add r6,r9,r10
	ctx.r6.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lwz r26,40(r11)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// subf r7,r28,r31
	ctx.r7.s64 = ctx.r31.s64 - ctx.r28.s64;
	// lwz r5,52(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// mulli r25,r8,12299
	ctx.r25.s64 = ctx.r8.s64 * 12299;
	// lwz r4,32(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// subf r9,r27,r26
	ctx.r9.s64 = ctx.r26.s64 - ctx.r27.s64;
	// subf r10,r5,r4
	ctx.r10.s64 = ctx.r4.s64 - ctx.r5.s64;
	// add r5,r4,r5
	ctx.r5.u64 = ctx.r4.u64 + ctx.r5.u64;
	// add r30,r9,r10
	ctx.r30.u64 = ctx.r9.u64 + ctx.r10.u64;
	// add r29,r7,r8
	ctx.r29.u64 = ctx.r7.u64 + ctx.r8.u64;
	// add r4,r28,r31
	ctx.r4.u64 = ctx.r28.u64 + ctx.r31.u64;
	// add r31,r26,r27
	ctx.r31.u64 = ctx.r26.u64 + ctx.r27.u64;
	// add r26,r29,r30
	ctx.r26.u64 = ctx.r29.u64 + ctx.r30.u64;
	// subf r27,r4,r5
	ctx.r27.s64 = ctx.r5.s64 - ctx.r4.s64;
	// subf r28,r31,r6
	ctx.r28.s64 = ctx.r6.s64 - ctx.r31.s64;
	// mulli r24,r26,9633
	ctx.r24.s64 = ctx.r26.s64 * 9633;
	// add r26,r27,r28
	ctx.r26.u64 = ctx.r27.u64 + ctx.r28.u64;
	// mulli r23,r29,3196
	ctx.r23.s64 = ctx.r29.s64 * 3196;
	// add r22,r9,r8
	ctx.r22.u64 = ctx.r9.u64 + ctx.r8.u64;
	// mulli r29,r9,2446
	ctx.r29.s64 = ctx.r9.s64 * 2446;
	// mulli r30,r30,16069
	ctx.r30.s64 = ctx.r30.s64 * 16069;
	// mulli r9,r26,4433
	ctx.r9.s64 = ctx.r26.s64 * 4433;
	// mulli r28,r28,6270
	ctx.r28.s64 = ctx.r28.s64 * 6270;
	// mulli r26,r7,16819
	ctx.r26.s64 = ctx.r7.s64 * 16819;
	// subf r8,r23,r24
	ctx.r8.s64 = ctx.r24.s64 - ctx.r23.s64;
	// subf r30,r30,r24
	ctx.r30.s64 = ctx.r24.s64 - ctx.r30.s64;
	// mulli r20,r27,15137
	ctx.r20.s64 = ctx.r27.s64 * 15137;
	// add r28,r28,r9
	ctx.r28.u64 = ctx.r28.u64 + ctx.r9.u64;
	// add r21,r7,r10
	ctx.r21.u64 = ctx.r7.u64 + ctx.r10.u64;
	// add r26,r26,r8
	ctx.r26.u64 = ctx.r26.u64 + ctx.r8.u64;
	// subf r24,r20,r9
	ctx.r24.s64 = ctx.r9.s64 - ctx.r20.s64;
	// add r8,r25,r8
	ctx.r8.u64 = ctx.r25.u64 + ctx.r8.u64;
	// add r27,r29,r30
	ctx.r27.u64 = ctx.r29.u64 + ctx.r30.u64;
	// mulli r7,r22,-7373
	ctx.r7.s64 = ctx.r22.s64 * -7373;
	// mulli r10,r10,25172
	ctx.r10.s64 = ctx.r10.s64 * 25172;
	// addi r25,r28,1024
	ctx.r25.s64 = ctx.r28.s64 + 1024;
	// add r9,r4,r5
	ctx.r9.u64 = ctx.r4.u64 + ctx.r5.u64;
	// add r5,r8,r7
	ctx.r5.u64 = ctx.r8.u64 + ctx.r7.u64;
	// add r27,r27,r7
	ctx.r27.u64 = ctx.r27.u64 + ctx.r7.u64;
	// mulli r29,r21,-20995
	ctx.r29.s64 = ctx.r21.s64 * -20995;
	// addi r4,r24,1024
	ctx.r4.s64 = ctx.r24.s64 + 1024;
	// add r30,r10,r30
	ctx.r30.u64 = ctx.r10.u64 + ctx.r30.u64;
	// srawi r8,r25,11
	ctx.xer.ca = (ctx.r25.s32 < 0) & ((ctx.r25.u32 & 0x7FF) != 0);
	ctx.r8.s64 = ctx.r25.s32 >> 11;
	// add r10,r31,r6
	ctx.r10.u64 = ctx.r31.u64 + ctx.r6.u64;
	// srawi r7,r4,11
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x7FF) != 0);
	ctx.r7.s64 = ctx.r4.s32 >> 11;
	// stw r8,36(r11)
	PPC_STORE_U32(ctx.r11.u32 + 36, ctx.r8.u32);
	// add r28,r26,r29
	ctx.r28.u64 = ctx.r26.u64 + ctx.r29.u64;
	// addi r31,r27,1024
	ctx.r31.s64 = ctx.r27.s64 + 1024;
	// stw r7,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r7.u32);
	// add r6,r30,r29
	ctx.r6.u64 = ctx.r30.u64 + ctx.r29.u64;
	// subf r8,r9,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r9.s64;
	// add r30,r9,r10
	ctx.r30.u64 = ctx.r9.u64 + ctx.r10.u64;
	// srawi r10,r31,11
	ctx.xer.ca = (ctx.r31.s32 < 0) & ((ctx.r31.u32 & 0x7FF) != 0);
	ctx.r10.s64 = ctx.r31.s32 >> 11;
	// addi r9,r28,1024
	ctx.r9.s64 = ctx.r28.s64 + 1024;
	// addi r7,r6,1024
	ctx.r7.s64 = ctx.r6.s64 + 1024;
	// stw r10,56(r11)
	PPC_STORE_U32(ctx.r11.u32 + 56, ctx.r10.u32);
	// srawi r9,r9,11
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7FF) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 11;
	// srawi r10,r7,11
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7FF) != 0);
	ctx.r10.s64 = ctx.r7.s32 >> 11;
	// addi r7,r5,1024
	ctx.r7.s64 = ctx.r5.s64 + 1024;
	// stw r9,48(r11)
	PPC_STORE_U32(ctx.r11.u32 + 48, ctx.r9.u32);
	// stw r10,40(r11)
	PPC_STORE_U32(ctx.r11.u32 + 40, ctx.r10.u32);
	// rlwinm r9,r30,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// srawi r10,r7,11
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7FF) != 0);
	ctx.r10.s64 = ctx.r7.s32 >> 11;
	// stw r9,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r9.u32);
	// stw r8,44(r11)
	PPC_STORE_U32(ctx.r11.u32 + 44, ctx.r8.u32);
	// stwu r10,32(r11)
	ea = 32 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x82806a44
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82806A44;
	// li r10,8
	ctx.r10.s64 = 8;
	// addi r11,r3,28
	ctx.r11.s64 = ctx.r3.s64 + 28;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82806B7C:
	// lwz r10,196(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 196);
	// lwz r8,-28(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + -28);
	// lwz r29,132(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 132);
	// lwz r3,36(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// subf r9,r10,r8
	ctx.r9.s64 = ctx.r8.s64 - ctx.r10.s64;
	// lwz r28,100(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// add r6,r8,r10
	ctx.r6.u64 = ctx.r8.u64 + ctx.r10.u64;
	// lwz r27,68(r11)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// subf r10,r29,r3
	ctx.r10.s64 = ctx.r3.s64 - ctx.r29.s64;
	// lwz r5,164(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 164);
	// mulli r26,r9,12299
	ctx.r26.s64 = ctx.r9.s64 * 12299;
	// lwz r4,4(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// subf r7,r5,r4
	ctx.r7.s64 = ctx.r4.s64 - ctx.r5.s64;
	// subf r8,r28,r27
	ctx.r8.s64 = ctx.r27.s64 - ctx.r28.s64;
	// add r30,r10,r9
	ctx.r30.u64 = ctx.r10.u64 + ctx.r9.u64;
	// add r31,r8,r7
	ctx.r31.u64 = ctx.r8.u64 + ctx.r7.u64;
	// add r5,r4,r5
	ctx.r5.u64 = ctx.r4.u64 + ctx.r5.u64;
	// add r4,r29,r3
	ctx.r4.u64 = ctx.r29.u64 + ctx.r3.u64;
	// add r29,r30,r31
	ctx.r29.u64 = ctx.r30.u64 + ctx.r31.u64;
	// add r3,r27,r28
	ctx.r3.u64 = ctx.r27.u64 + ctx.r28.u64;
	// mulli r25,r29,9633
	ctx.r25.s64 = ctx.r29.s64 * 9633;
	// mulli r27,r31,16069
	ctx.r27.s64 = ctx.r31.s64 * 16069;
	// subf r28,r3,r6
	ctx.r28.s64 = ctx.r6.s64 - ctx.r3.s64;
	// subf r29,r4,r5
	ctx.r29.s64 = ctx.r5.s64 - ctx.r4.s64;
	// add r6,r3,r6
	ctx.r6.u64 = ctx.r3.u64 + ctx.r6.u64;
	// add r5,r4,r5
	ctx.r5.u64 = ctx.r4.u64 + ctx.r5.u64;
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// mulli r31,r8,2446
	ctx.r31.s64 = ctx.r8.s64 * 2446;
	// subf r4,r27,r25
	ctx.r4.s64 = ctx.r25.s64 - ctx.r27.s64;
	// add r24,r10,r7
	ctx.r24.u64 = ctx.r10.u64 + ctx.r7.u64;
	// mulli r3,r30,3196
	ctx.r3.s64 = ctx.r30.s64 * 3196;
	// add r23,r29,r28
	ctx.r23.u64 = ctx.r29.u64 + ctx.r28.u64;
	// mulli r22,r29,15137
	ctx.r22.s64 = ctx.r29.s64 * 15137;
	// add r29,r5,r6
	ctx.r29.u64 = ctx.r5.u64 + ctx.r6.u64;
	// subf r30,r5,r6
	ctx.r30.s64 = ctx.r6.s64 - ctx.r5.s64;
	// mulli r7,r7,25172
	ctx.r7.s64 = ctx.r7.s64 * 25172;
	// mulli r9,r9,-7373
	ctx.r9.s64 = ctx.r9.s64 * -7373;
	// add r5,r31,r4
	ctx.r5.u64 = ctx.r31.u64 + ctx.r4.u64;
	// mulli r27,r28,6270
	ctx.r27.s64 = ctx.r28.s64 * 6270;
	// mulli r28,r10,16819
	ctx.r28.s64 = ctx.r10.s64 * 16819;
	// subf r8,r3,r25
	ctx.r8.s64 = ctx.r25.s64 - ctx.r3.s64;
	// add r7,r7,r4
	ctx.r7.u64 = ctx.r7.u64 + ctx.r4.u64;
	// addi r29,r29,2
	ctx.r29.s64 = ctx.r29.s64 + 2;
	// add r4,r5,r9
	ctx.r4.u64 = ctx.r5.u64 + ctx.r9.u64;
	// mulli r3,r23,4433
	ctx.r3.s64 = ctx.r23.s64 * 4433;
	// add r6,r28,r8
	ctx.r6.u64 = ctx.r28.u64 + ctx.r8.u64;
	// add r5,r26,r8
	ctx.r5.u64 = ctx.r26.u64 + ctx.r8.u64;
	// mulli r10,r24,-20995
	ctx.r10.s64 = ctx.r24.s64 * -20995;
	// srawi r8,r29,2
	ctx.xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r29.s32 >> 2;
	// addi r30,r30,2
	ctx.r30.s64 = ctx.r30.s64 + 2;
	// add r31,r27,r3
	ctx.r31.u64 = ctx.r27.u64 + ctx.r3.u64;
	// stw r8,-28(r11)
	PPC_STORE_U32(ctx.r11.u32 + -28, ctx.r8.u32);
	// add r6,r6,r10
	ctx.r6.u64 = ctx.r6.u64 + ctx.r10.u64;
	// add r7,r7,r10
	ctx.r7.u64 = ctx.r7.u64 + ctx.r10.u64;
	// srawi r10,r30,2
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r30.s32 >> 2;
	// addi r8,r31,16384
	ctx.r8.s64 = ctx.r31.s64 + 16384;
	// subf r3,r22,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r22.s64;
	// stw r10,100(r11)
	PPC_STORE_U32(ctx.r11.u32 + 100, ctx.r10.u32);
	// srawi r10,r8,15
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7FFF) != 0);
	ctx.r10.s64 = ctx.r8.s32 >> 15;
	// addi r3,r3,16384
	ctx.r3.s64 = ctx.r3.s64 + 16384;
	// addi r4,r4,16384
	ctx.r4.s64 = ctx.r4.s64 + 16384;
	// stw r10,36(r11)
	PPC_STORE_U32(ctx.r11.u32 + 36, ctx.r10.u32);
	// add r8,r5,r9
	ctx.r8.u64 = ctx.r5.u64 + ctx.r9.u64;
	// srawi r9,r3,15
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x7FFF) != 0);
	ctx.r9.s64 = ctx.r3.s32 >> 15;
	// srawi r10,r4,15
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x7FFF) != 0);
	ctx.r10.s64 = ctx.r4.s32 >> 15;
	// addi r6,r6,16384
	ctx.r6.s64 = ctx.r6.s64 + 16384;
	// stw r9,164(r11)
	PPC_STORE_U32(ctx.r11.u32 + 164, ctx.r9.u32);
	// addi r7,r7,16384
	ctx.r7.s64 = ctx.r7.s64 + 16384;
	// stw r10,196(r11)
	PPC_STORE_U32(ctx.r11.u32 + 196, ctx.r10.u32);
	// addi r8,r8,16384
	ctx.r8.s64 = ctx.r8.s64 + 16384;
	// srawi r9,r6,15
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x7FFF) != 0);
	ctx.r9.s64 = ctx.r6.s32 >> 15;
	// srawi r10,r7,15
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7FFF) != 0);
	ctx.r10.s64 = ctx.r7.s32 >> 15;
	// srawi r8,r8,15
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7FFF) != 0);
	ctx.r8.s64 = ctx.r8.s32 >> 15;
	// stw r9,132(r11)
	PPC_STORE_U32(ctx.r11.u32 + 132, ctx.r9.u32);
	// stw r10,68(r11)
	PPC_STORE_U32(ctx.r11.u32 + 68, ctx.r10.u32);
	// stwu r8,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x82806b7c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82806B7C;
	// b 0x82fa76a8
	__restgprlr_20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82806CB4"))) PPC_WEAK_FUNC(sub_82806CB4);
PPC_FUNC_IMPL(__imp__sub_82806CB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82806CB8"))) PPC_WEAK_FUNC(sub_82806CB8);
PPC_FUNC_IMPL(__imp__sub_82806CB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7674
	ctx.lr = 0x82806CC0;
	__savegprlr_27(ctx, base);
	// li r10,8
	ctx.r10.s64 = 8;
	// addi r11,r3,-4
	ctx.r11.s64 = ctx.r3.s64 + -4;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82806CCC:
	// lwz r10,28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r5,24(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// lwz r6,12(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// add r8,r9,r10
	ctx.r8.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lwz r4,20(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// subf r27,r10,r9
	ctx.r27.s64 = ctx.r9.s64 - ctx.r10.s64;
	// lwz r29,4(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r7,r5,r6
	ctx.r7.u64 = ctx.r5.u64 + ctx.r6.u64;
	// lwz r31,16(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// subf r28,r5,r6
	ctx.r28.s64 = ctx.r6.s64 - ctx.r5.s64;
	// lwz r30,32(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// add r6,r7,r8
	ctx.r6.u64 = ctx.r7.u64 + ctx.r8.u64;
	// add r10,r31,r4
	ctx.r10.u64 = ctx.r31.u64 + ctx.r4.u64;
	// add r9,r29,r30
	ctx.r9.u64 = ctx.r29.u64 + ctx.r30.u64;
	// subf r31,r4,r31
	ctx.r31.s64 = ctx.r31.s64 - ctx.r4.s64;
	// add r5,r10,r9
	ctx.r5.u64 = ctx.r10.u64 + ctx.r9.u64;
	// subf r9,r10,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r10.s64;
	// subf r10,r30,r29
	ctx.r10.s64 = ctx.r29.s64 - ctx.r30.s64;
	// add r4,r6,r5
	ctx.r4.u64 = ctx.r6.u64 + ctx.r5.u64;
	// subf r30,r6,r5
	ctx.r30.s64 = ctx.r5.s64 - ctx.r6.s64;
	// subf r5,r7,r9
	ctx.r5.s64 = ctx.r9.s64 - ctx.r7.s64;
	// stw r4,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r4.u32);
	// add r6,r27,r10
	ctx.r6.u64 = ctx.r27.u64 + ctx.r10.u64;
	// stw r30,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r30.u32);
	// add r7,r31,r28
	ctx.r7.u64 = ctx.r31.u64 + ctx.r28.u64;
	// add r8,r5,r8
	ctx.r8.u64 = ctx.r5.u64 + ctx.r8.u64;
	// subf r5,r6,r7
	ctx.r5.s64 = ctx.r7.s64 - ctx.r6.s64;
	// mulli r8,r8,181
	ctx.r8.s64 = ctx.r8.s64 * 181;
	// mulli r5,r5,98
	ctx.r5.s64 = ctx.r5.s64 * 98;
	// add r4,r28,r27
	ctx.r4.u64 = ctx.r28.u64 + ctx.r27.u64;
	// mulli r31,r7,139
	ctx.r31.s64 = ctx.r7.s64 * 139;
	// mulli r6,r6,334
	ctx.r6.s64 = ctx.r6.s64 * 334;
	// srawi r8,r8,8
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xFF) != 0);
	ctx.r8.s64 = ctx.r8.s32 >> 8;
	// srawi r7,r5,8
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0xFF) != 0);
	ctx.r7.s64 = ctx.r5.s32 >> 8;
	// mulli r30,r4,181
	ctx.r30.s64 = ctx.r4.s64 * 181;
	// srawi r5,r31,8
	ctx.xer.ca = (ctx.r31.s32 < 0) & ((ctx.r31.u32 & 0xFF) != 0);
	ctx.r5.s64 = ctx.r31.s32 >> 8;
	// srawi r4,r6,8
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xFF) != 0);
	ctx.r4.s64 = ctx.r6.s32 >> 8;
	// srawi r6,r30,8
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0xFF) != 0);
	ctx.r6.s64 = ctx.r30.s32 >> 8;
	// add r5,r5,r7
	ctx.r5.u64 = ctx.r5.u64 + ctx.r7.u64;
	// add r7,r4,r7
	ctx.r7.u64 = ctx.r4.u64 + ctx.r7.u64;
	// add r4,r6,r10
	ctx.r4.u64 = ctx.r6.u64 + ctx.r10.u64;
	// subf r10,r6,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r6.s64;
	// add r6,r8,r9
	ctx.r6.u64 = ctx.r8.u64 + ctx.r9.u64;
	// subf r8,r8,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r8.s64;
	// add r9,r10,r5
	ctx.r9.u64 = ctx.r10.u64 + ctx.r5.u64;
	// stw r6,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r6.u32);
	// subf r6,r5,r10
	ctx.r6.s64 = ctx.r10.s64 - ctx.r5.s64;
	// stw r8,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r8.u32);
	// stw r9,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r9.u32);
	// add r10,r4,r7
	ctx.r10.u64 = ctx.r4.u64 + ctx.r7.u64;
	// subf r9,r7,r4
	ctx.r9.s64 = ctx.r4.s64 - ctx.r7.s64;
	// stw r6,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r6.u32);
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// stwu r9,32(r11)
	ea = 32 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x82806ccc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82806CCC;
	// li r10,8
	ctx.r10.s64 = 8;
	// addi r11,r3,220
	ctx.r11.s64 = ctx.r3.s64 + 220;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82806DB8:
	// lwz r10,-28(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -28);
	// lwz r9,-188(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + -188);
	// lwz r5,-60(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + -60);
	// lwz r6,-156(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + -156);
	// add r8,r9,r10
	ctx.r8.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lwz r4,-92(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + -92);
	// subf r28,r10,r9
	ctx.r28.s64 = ctx.r9.s64 - ctx.r10.s64;
	// lwz r30,-220(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + -220);
	// add r7,r5,r6
	ctx.r7.u64 = ctx.r5.u64 + ctx.r6.u64;
	// lwz r3,-124(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + -124);
	// subf r29,r5,r6
	ctx.r29.s64 = ctx.r6.s64 - ctx.r5.s64;
	// lwz r31,4(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// add r6,r7,r8
	ctx.r6.u64 = ctx.r7.u64 + ctx.r8.u64;
	// add r10,r3,r4
	ctx.r10.u64 = ctx.r3.u64 + ctx.r4.u64;
	// add r9,r30,r31
	ctx.r9.u64 = ctx.r30.u64 + ctx.r31.u64;
	// subf r3,r4,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r4.s64;
	// add r5,r10,r9
	ctx.r5.u64 = ctx.r10.u64 + ctx.r9.u64;
	// subf r9,r10,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r10.s64;
	// subf r10,r31,r30
	ctx.r10.s64 = ctx.r30.s64 - ctx.r31.s64;
	// add r4,r6,r5
	ctx.r4.u64 = ctx.r6.u64 + ctx.r5.u64;
	// subf r31,r6,r5
	ctx.r31.s64 = ctx.r5.s64 - ctx.r6.s64;
	// subf r5,r7,r9
	ctx.r5.s64 = ctx.r9.s64 - ctx.r7.s64;
	// stw r4,-220(r11)
	PPC_STORE_U32(ctx.r11.u32 + -220, ctx.r4.u32);
	// add r6,r28,r10
	ctx.r6.u64 = ctx.r28.u64 + ctx.r10.u64;
	// stw r31,-92(r11)
	PPC_STORE_U32(ctx.r11.u32 + -92, ctx.r31.u32);
	// add r7,r3,r29
	ctx.r7.u64 = ctx.r3.u64 + ctx.r29.u64;
	// add r8,r5,r8
	ctx.r8.u64 = ctx.r5.u64 + ctx.r8.u64;
	// subf r5,r6,r7
	ctx.r5.s64 = ctx.r7.s64 - ctx.r6.s64;
	// mulli r8,r8,181
	ctx.r8.s64 = ctx.r8.s64 * 181;
	// mulli r5,r5,98
	ctx.r5.s64 = ctx.r5.s64 * 98;
	// add r4,r29,r28
	ctx.r4.u64 = ctx.r29.u64 + ctx.r28.u64;
	// mulli r3,r7,139
	ctx.r3.s64 = ctx.r7.s64 * 139;
	// mulli r6,r6,334
	ctx.r6.s64 = ctx.r6.s64 * 334;
	// srawi r8,r8,8
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xFF) != 0);
	ctx.r8.s64 = ctx.r8.s32 >> 8;
	// srawi r7,r5,8
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0xFF) != 0);
	ctx.r7.s64 = ctx.r5.s32 >> 8;
	// mulli r31,r4,181
	ctx.r31.s64 = ctx.r4.s64 * 181;
	// srawi r5,r3,8
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xFF) != 0);
	ctx.r5.s64 = ctx.r3.s32 >> 8;
	// srawi r4,r6,8
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xFF) != 0);
	ctx.r4.s64 = ctx.r6.s32 >> 8;
	// srawi r6,r31,8
	ctx.xer.ca = (ctx.r31.s32 < 0) & ((ctx.r31.u32 & 0xFF) != 0);
	ctx.r6.s64 = ctx.r31.s32 >> 8;
	// add r5,r5,r7
	ctx.r5.u64 = ctx.r5.u64 + ctx.r7.u64;
	// add r7,r4,r7
	ctx.r7.u64 = ctx.r4.u64 + ctx.r7.u64;
	// add r4,r6,r10
	ctx.r4.u64 = ctx.r6.u64 + ctx.r10.u64;
	// subf r10,r6,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r6.s64;
	// add r6,r8,r9
	ctx.r6.u64 = ctx.r8.u64 + ctx.r9.u64;
	// subf r8,r8,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r8.s64;
	// add r9,r10,r5
	ctx.r9.u64 = ctx.r10.u64 + ctx.r5.u64;
	// stw r6,-156(r11)
	PPC_STORE_U32(ctx.r11.u32 + -156, ctx.r6.u32);
	// subf r6,r5,r10
	ctx.r6.s64 = ctx.r10.s64 - ctx.r5.s64;
	// stw r8,-28(r11)
	PPC_STORE_U32(ctx.r11.u32 + -28, ctx.r8.u32);
	// stw r9,-60(r11)
	PPC_STORE_U32(ctx.r11.u32 + -60, ctx.r9.u32);
	// add r10,r4,r7
	ctx.r10.u64 = ctx.r4.u64 + ctx.r7.u64;
	// subf r9,r7,r4
	ctx.r9.s64 = ctx.r4.s64 - ctx.r7.s64;
	// stw r6,-124(r11)
	PPC_STORE_U32(ctx.r11.u32 + -124, ctx.r6.u32);
	// stw r10,-188(r11)
	PPC_STORE_U32(ctx.r11.u32 + -188, ctx.r10.u32);
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x82806db8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82806DB8;
	// b 0x82fa76c4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82806E9C"))) PPC_WEAK_FUNC(sub_82806E9C);
PPC_FUNC_IMPL(__imp__sub_82806E9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82806EA0"))) PPC_WEAK_FUNC(sub_82806EA0);
PPC_FUNC_IMPL(__imp__sub_82806EA0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// li r10,8
	ctx.r10.s64 = 8;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lis r8,-32255
	ctx.r8.s64 = -2113863680;
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// addi r11,r3,-4
	ctx.r11.s64 = ctx.r3.s64 + -4;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lfs f12,32576(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 32576);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,32572(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 32572);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,-9864(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -9864);
	ctx.f0.f64 = double(temp.f32);
	// lfs f11,32568(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 32568);
	ctx.f11.f64 = double(temp.f32);
loc_82806ECC:
	// lfs f8,8(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f8.f64 = double(temp.f32);
	// lfs f9,28(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	ctx.f9.f64 = double(temp.f32);
	// lfs f5,12(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	ctx.f5.f64 = double(temp.f32);
	// fsubs f6,f8,f9
	ctx.f6.f64 = double(float(ctx.f8.f64 - ctx.f9.f64));
	// lfs f7,24(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	ctx.f7.f64 = double(temp.f32);
	// fadds f9,f8,f9
	ctx.f9.f64 = double(float(ctx.f8.f64 + ctx.f9.f64));
	// fsubs f4,f5,f7
	ctx.f4.f64 = double(float(ctx.f5.f64 - ctx.f7.f64));
	// lfs f3,16(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	ctx.f3.f64 = double(temp.f32);
	// fadds f7,f7,f5
	ctx.f7.f64 = double(float(ctx.f7.f64 + ctx.f5.f64));
	// lfs f8,20(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	ctx.f8.f64 = double(temp.f32);
	// lfs f10,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f2,f3,f8
	ctx.f2.f64 = double(float(ctx.f3.f64 - ctx.f8.f64));
	// lfs f5,32(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	ctx.f5.f64 = double(temp.f32);
	// fadds f8,f3,f8
	ctx.f8.f64 = double(float(ctx.f3.f64 + ctx.f8.f64));
	// fsubs f1,f10,f5
	ctx.f1.f64 = double(float(ctx.f10.f64 - ctx.f5.f64));
	// fadds f10,f10,f5
	ctx.f10.f64 = double(float(ctx.f10.f64 + ctx.f5.f64));
	// fadds f5,f4,f6
	ctx.f5.f64 = double(float(ctx.f4.f64 + ctx.f6.f64));
	// fsubs f3,f9,f7
	ctx.f3.f64 = double(float(ctx.f9.f64 - ctx.f7.f64));
	// fadds f4,f2,f4
	ctx.f4.f64 = double(float(ctx.f2.f64 + ctx.f4.f64));
	// fadds f9,f7,f9
	ctx.f9.f64 = double(float(ctx.f7.f64 + ctx.f9.f64));
	// fadds f6,f6,f1
	ctx.f6.f64 = double(float(ctx.f6.f64 + ctx.f1.f64));
	// fsubs f7,f10,f8
	ctx.f7.f64 = double(float(ctx.f10.f64 - ctx.f8.f64));
	// fadds f10,f8,f10
	ctx.f10.f64 = double(float(ctx.f8.f64 + ctx.f10.f64));
	// fmuls f8,f5,f0
	ctx.f8.f64 = double(float(ctx.f5.f64 * ctx.f0.f64));
	// fmuls f5,f4,f12
	ctx.f5.f64 = double(float(ctx.f4.f64 * ctx.f12.f64));
	// fsubs f4,f4,f6
	ctx.f4.f64 = double(float(ctx.f4.f64 - ctx.f6.f64));
	// fadds f3,f3,f7
	ctx.f3.f64 = double(float(ctx.f3.f64 + ctx.f7.f64));
	// fadds f2,f9,f10
	ctx.f2.f64 = double(float(ctx.f9.f64 + ctx.f10.f64));
	// stfs f2,4(r11)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// fsubs f10,f10,f9
	ctx.f10.f64 = double(float(ctx.f10.f64 - ctx.f9.f64));
	// stfs f10,20(r11)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// fmuls f6,f6,f11
	ctx.f6.f64 = double(float(ctx.f6.f64 * ctx.f11.f64));
	// fadds f10,f8,f1
	ctx.f10.f64 = double(float(ctx.f8.f64 + ctx.f1.f64));
	// fsubs f9,f1,f8
	ctx.f9.f64 = double(float(ctx.f1.f64 - ctx.f8.f64));
	// fmuls f8,f4,f13
	ctx.f8.f64 = double(float(ctx.f4.f64 * ctx.f13.f64));
	// fmuls f4,f3,f0
	ctx.f4.f64 = double(float(ctx.f3.f64 * ctx.f0.f64));
	// fadds f5,f5,f8
	ctx.f5.f64 = double(float(ctx.f5.f64 + ctx.f8.f64));
	// fadds f8,f6,f8
	ctx.f8.f64 = double(float(ctx.f6.f64 + ctx.f8.f64));
	// fadds f6,f4,f7
	ctx.f6.f64 = double(float(ctx.f4.f64 + ctx.f7.f64));
	// stfs f6,12(r11)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// fsubs f7,f7,f4
	ctx.f7.f64 = double(float(ctx.f7.f64 - ctx.f4.f64));
	// stfs f7,28(r11)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r11.u32 + 28, temp.u32);
	// fadds f7,f9,f5
	ctx.f7.f64 = double(float(ctx.f9.f64 + ctx.f5.f64));
	// stfs f7,24(r11)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r11.u32 + 24, temp.u32);
	// fsubs f9,f9,f5
	ctx.f9.f64 = double(float(ctx.f9.f64 - ctx.f5.f64));
	// stfs f9,16(r11)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// fadds f9,f10,f8
	ctx.f9.f64 = double(float(ctx.f10.f64 + ctx.f8.f64));
	// stfs f9,8(r11)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// fsubs f10,f10,f8
	ctx.f10.f64 = double(float(ctx.f10.f64 - ctx.f8.f64));
	// stfsu f10,32(r11)
	temp.f32 = float(ctx.f10.f64);
	ea = 32 + ctx.r11.u32;
	PPC_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x82806ecc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82806ECC;
	// li r10,8
	ctx.r10.s64 = 8;
	// addi r11,r3,220
	ctx.r11.s64 = ctx.r3.s64 + 220;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82806FA4:
	// lfs f8,-188(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -188);
	ctx.f8.f64 = double(temp.f32);
	// lfs f9,-28(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -28);
	ctx.f9.f64 = double(temp.f32);
	// lfs f5,-156(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -156);
	ctx.f5.f64 = double(temp.f32);
	// fsubs f6,f8,f9
	ctx.f6.f64 = double(float(ctx.f8.f64 - ctx.f9.f64));
	// lfs f7,-60(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -60);
	ctx.f7.f64 = double(temp.f32);
	// fadds f9,f8,f9
	ctx.f9.f64 = double(float(ctx.f8.f64 + ctx.f9.f64));
	// fsubs f4,f5,f7
	ctx.f4.f64 = double(float(ctx.f5.f64 - ctx.f7.f64));
	// lfs f3,-124(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -124);
	ctx.f3.f64 = double(temp.f32);
	// fadds f7,f7,f5
	ctx.f7.f64 = double(float(ctx.f7.f64 + ctx.f5.f64));
	// lfs f8,-92(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -92);
	ctx.f8.f64 = double(temp.f32);
	// lfs f10,-220(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -220);
	ctx.f10.f64 = double(temp.f32);
	// fsubs f2,f3,f8
	ctx.f2.f64 = double(float(ctx.f3.f64 - ctx.f8.f64));
	// lfs f5,4(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	ctx.f5.f64 = double(temp.f32);
	// fadds f8,f3,f8
	ctx.f8.f64 = double(float(ctx.f3.f64 + ctx.f8.f64));
	// fsubs f1,f10,f5
	ctx.f1.f64 = double(float(ctx.f10.f64 - ctx.f5.f64));
	// fadds f10,f10,f5
	ctx.f10.f64 = double(float(ctx.f10.f64 + ctx.f5.f64));
	// fadds f5,f4,f6
	ctx.f5.f64 = double(float(ctx.f4.f64 + ctx.f6.f64));
	// fsubs f3,f9,f7
	ctx.f3.f64 = double(float(ctx.f9.f64 - ctx.f7.f64));
	// fadds f4,f2,f4
	ctx.f4.f64 = double(float(ctx.f2.f64 + ctx.f4.f64));
	// fadds f9,f7,f9
	ctx.f9.f64 = double(float(ctx.f7.f64 + ctx.f9.f64));
	// fadds f6,f6,f1
	ctx.f6.f64 = double(float(ctx.f6.f64 + ctx.f1.f64));
	// fsubs f7,f10,f8
	ctx.f7.f64 = double(float(ctx.f10.f64 - ctx.f8.f64));
	// fadds f10,f8,f10
	ctx.f10.f64 = double(float(ctx.f8.f64 + ctx.f10.f64));
	// fmuls f8,f5,f0
	ctx.f8.f64 = double(float(ctx.f5.f64 * ctx.f0.f64));
	// fmuls f5,f4,f12
	ctx.f5.f64 = double(float(ctx.f4.f64 * ctx.f12.f64));
	// fsubs f4,f4,f6
	ctx.f4.f64 = double(float(ctx.f4.f64 - ctx.f6.f64));
	// fadds f3,f3,f7
	ctx.f3.f64 = double(float(ctx.f3.f64 + ctx.f7.f64));
	// fadds f2,f9,f10
	ctx.f2.f64 = double(float(ctx.f9.f64 + ctx.f10.f64));
	// stfs f2,-220(r11)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r11.u32 + -220, temp.u32);
	// fsubs f10,f10,f9
	ctx.f10.f64 = double(float(ctx.f10.f64 - ctx.f9.f64));
	// stfs f10,-92(r11)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r11.u32 + -92, temp.u32);
	// fmuls f6,f6,f11
	ctx.f6.f64 = double(float(ctx.f6.f64 * ctx.f11.f64));
	// fadds f10,f8,f1
	ctx.f10.f64 = double(float(ctx.f8.f64 + ctx.f1.f64));
	// fsubs f9,f1,f8
	ctx.f9.f64 = double(float(ctx.f1.f64 - ctx.f8.f64));
	// fmuls f8,f4,f13
	ctx.f8.f64 = double(float(ctx.f4.f64 * ctx.f13.f64));
	// fmuls f4,f3,f0
	ctx.f4.f64 = double(float(ctx.f3.f64 * ctx.f0.f64));
	// fadds f5,f5,f8
	ctx.f5.f64 = double(float(ctx.f5.f64 + ctx.f8.f64));
	// fadds f8,f6,f8
	ctx.f8.f64 = double(float(ctx.f6.f64 + ctx.f8.f64));
	// fadds f6,f4,f7
	ctx.f6.f64 = double(float(ctx.f4.f64 + ctx.f7.f64));
	// stfs f6,-156(r11)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r11.u32 + -156, temp.u32);
	// fsubs f7,f7,f4
	ctx.f7.f64 = double(float(ctx.f7.f64 - ctx.f4.f64));
	// stfs f7,-28(r11)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r11.u32 + -28, temp.u32);
	// fadds f7,f9,f5
	ctx.f7.f64 = double(float(ctx.f9.f64 + ctx.f5.f64));
	// stfs f7,-60(r11)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r11.u32 + -60, temp.u32);
	// fsubs f9,f9,f5
	ctx.f9.f64 = double(float(ctx.f9.f64 - ctx.f5.f64));
	// stfs f9,-124(r11)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r11.u32 + -124, temp.u32);
	// fadds f9,f10,f8
	ctx.f9.f64 = double(float(ctx.f10.f64 + ctx.f8.f64));
	// stfs f9,-188(r11)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r11.u32 + -188, temp.u32);
	// fsubs f10,f10,f8
	ctx.f10.f64 = double(float(ctx.f10.f64 - ctx.f8.f64));
	// stfsu f10,4(r11)
	temp.f32 = float(ctx.f10.f64);
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x82806fa4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82806FA4;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82807074"))) PPC_WEAK_FUNC(sub_82807074);
PPC_FUNC_IMPL(__imp__sub_82807074) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82807078"))) PPC_WEAK_FUNC(sub_82807078);
PPC_FUNC_IMPL(__imp__sub_82807078) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x82807080;
	__savegprlr_29(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r29,-31976
	ctx.r29.s64 = -2095579136;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r11,28424(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28424);
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x8283b938
	ctx.lr = 0x828070A0;
	sub_8283B938(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,28424(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28424);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828070B8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828070C0"))) PPC_WEAK_FUNC(sub_828070C0);
PPC_FUNC_IMPL(__imp__sub_828070C0) {
	PPC_FUNC_PROLOGUE();
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828070C8"))) PPC_WEAK_FUNC(sub_828070C8);
PPC_FUNC_IMPL(__imp__sub_828070C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x828070D0;
	__savegprlr_29(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r29,-31976
	ctx.r29.s64 = -2095579136;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r11,28424(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28424);
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x8283b938
	ctx.lr = 0x828070F0;
	sub_8283B938(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,28424(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28424);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82807108;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82807110"))) PPC_WEAK_FUNC(sub_82807110);
PPC_FUNC_IMPL(__imp__sub_82807110) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x82807118;
	__savegprlr_29(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r29,-31976
	ctx.r29.s64 = -2095579136;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r11,28424(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28424);
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x8283b938
	ctx.lr = 0x82807138;
	sub_8283B938(ctx, base);
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,28424(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28424);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82807150;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82807158"))) PPC_WEAK_FUNC(sub_82807158);
PPC_FUNC_IMPL(__imp__sub_82807158) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8280715C"))) PPC_WEAK_FUNC(sub_8280715C);
PPC_FUNC_IMPL(__imp__sub_8280715C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82807160"))) PPC_WEAK_FUNC(sub_82807160);
PPC_FUNC_IMPL(__imp__sub_82807160) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x82807168;
	__savegprlr_29(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r29,-31976
	ctx.r29.s64 = -2095579136;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r11,28424(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28424);
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x8283b938
	ctx.lr = 0x82807188;
	sub_8283B938(ctx, base);
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,28424(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28424);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828071A0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828071A8"))) PPC_WEAK_FUNC(sub_828071A8);
PPC_FUNC_IMPL(__imp__sub_828071A8) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,996
	ctx.r10.s64 = 996;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r10,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r10.u32);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828071CC"))) PPC_WEAK_FUNC(sub_828071CC);
PPC_FUNC_IMPL(__imp__sub_828071CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_828071D0"))) PPC_WEAK_FUNC(sub_828071D0);
PPC_FUNC_IMPL(__imp__sub_828071D0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828071D4"))) PPC_WEAK_FUNC(sub_828071D4);
PPC_FUNC_IMPL(__imp__sub_828071D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_828071D8"))) PPC_WEAK_FUNC(sub_828071D8);
PPC_FUNC_IMPL(__imp__sub_828071D8) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828071E0"))) PPC_WEAK_FUNC(sub_828071E0);
PPC_FUNC_IMPL(__imp__sub_828071E0) {
	PPC_FUNC_PROLOGUE();
	// lwsync 
	// stw r4,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828071EC"))) PPC_WEAK_FUNC(sub_828071EC);
PPC_FUNC_IMPL(__imp__sub_828071EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_828071F0"))) PPC_WEAK_FUNC(sub_828071F0);
PPC_FUNC_IMPL(__imp__sub_828071F0) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828071F8"))) PPC_WEAK_FUNC(sub_828071F8);
PPC_FUNC_IMPL(__imp__sub_828071F8) {
	PPC_FUNC_PROLOGUE();
	// lwsync 
	// stw r4,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82807204"))) PPC_WEAK_FUNC(sub_82807204);
PPC_FUNC_IMPL(__imp__sub_82807204) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82807208"))) PPC_WEAK_FUNC(sub_82807208);
PPC_FUNC_IMPL(__imp__sub_82807208) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82807210"))) PPC_WEAK_FUNC(sub_82807210);
PPC_FUNC_IMPL(__imp__sub_82807210) {
	PPC_FUNC_PROLOGUE();
	// lwsync 
	// stw r4,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8280721C"))) PPC_WEAK_FUNC(sub_8280721C);
PPC_FUNC_IMPL(__imp__sub_8280721C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82807220"))) PPC_WEAK_FUNC(sub_82807220);
PPC_FUNC_IMPL(__imp__sub_82807220) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,12(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82807228"))) PPC_WEAK_FUNC(sub_82807228);
PPC_FUNC_IMPL(__imp__sub_82807228) {
	PPC_FUNC_PROLOGUE();
	// lwsync 
	// stw r4,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82807234"))) PPC_WEAK_FUNC(sub_82807234);
PPC_FUNC_IMPL(__imp__sub_82807234) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82807238"))) PPC_WEAK_FUNC(sub_82807238);
PPC_FUNC_IMPL(__imp__sub_82807238) {
	PPC_FUNC_PROLOGUE();
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r8,r3,20
	ctx.r8.s64 = ctx.r3.s64 + 20;
loc_82807240:
	// mfmsr r9
	ctx.r9.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r8
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r8.u32);
	ctx.r10.u64 = __builtin_bswap32(ctx.reserved.u32);
	// stwcx. r11,0,r8
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r8.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r11.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x82807240
	if (!ctx.cr0.eq) goto loc_82807240;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8280725C"))) PPC_WEAK_FUNC(sub_8280725C);
PPC_FUNC_IMPL(__imp__sub_8280725C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82807260"))) PPC_WEAK_FUNC(sub_82807260);
PPC_FUNC_IMPL(__imp__sub_82807260) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,20(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82807268"))) PPC_WEAK_FUNC(sub_82807268);
PPC_FUNC_IMPL(__imp__sub_82807268) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82807270"))) PPC_WEAK_FUNC(sub_82807270);
PPC_FUNC_IMPL(__imp__sub_82807270) {
	PPC_FUNC_PROLOGUE();
	// lwsync 
	// stw r4,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8280727C"))) PPC_WEAK_FUNC(sub_8280727C);
PPC_FUNC_IMPL(__imp__sub_8280727C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82807280"))) PPC_WEAK_FUNC(sub_82807280);
PPC_FUNC_IMPL(__imp__sub_82807280) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x828072b4
	if (ctx.cr6.eq) goto loc_828072B4;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x828072b4
	if (ctx.cr6.eq) goto loc_828072B4;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x828072b4
	if (ctx.cr6.eq) goto loc_828072B4;
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmpwi cr6,r11,997
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 997, ctx.xer);
	// beq cr6,0x828072b4
	if (ctx.cr6.eq) goto loc_828072B4;
	// cmpwi cr6,r11,996
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 996, ctx.xer);
	// li r3,1
	ctx.r3.s64 = 1;
	// bnelr cr6
	if (!ctx.cr6.eq) return;
loc_828072B4:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828072BC"))) PPC_WEAK_FUNC(sub_828072BC);
PPC_FUNC_IMPL(__imp__sub_828072BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_828072C0"))) PPC_WEAK_FUNC(sub_828072C0);
PPC_FUNC_IMPL(__imp__sub_828072C0) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x8280a9c0
	ctx.lr = 0x828072DC;
	sub_8280A9C0(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82807460
	ctx.lr = 0x828072E8;
	sub_82807460(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
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

__attribute__((alias("__imp__sub_82807300"))) PPC_WEAK_FUNC(sub_82807300);
PPC_FUNC_IMPL(__imp__sub_82807300) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r23,32728(r26)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r26.u32 + 32728);
	// lwz r16,32608(r1)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r1.u32 + 32608);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x82807310;
	__savegprlr_28(ctx, base);
	// addi r31,r1,-128
	ctx.r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r3,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r3.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r11,r3,36
	ctx.r11.s64 = ctx.r3.s64 + 36;
	// addi r10,r10,32580
	ctx.r10.s64 = ctx.r10.s64 + 32580;
	// addi r29,r11,4
	ctx.r29.s64 = ctx.r11.s64 + 4;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8283b938
	ctx.lr = 0x82807350;
	sub_8283B938(ctx, base);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// li r5,24
	ctx.r5.s64 = 24;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r28,4
	ctx.r4.s64 = ctx.r28.s64 + 4;
	// stw r11,36(r30)
	PPC_STORE_U32(ctx.r30.u32 + 36, ctx.r11.u32);
	// bl 0x82fa77c0
	ctx.lr = 0x82807368;
	sub_82FA77C0(ctx, base);
	// addic. r11,r30,12
	ctx.xer.ca = ctx.r30.u32 > 4294967283;
	ctx.r11.s64 = ctx.r30.s64 + 12;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82807390
	if (ctx.cr0.eq) goto loc_82807390;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,996
	ctx.r9.s64 = 996;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// stw r9,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r9.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// stw r10,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
loc_82807390:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r31,128
	ctx.r1.s64 = ctx.r31.s64 + 128;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82807308"))) PPC_WEAK_FUNC(sub_82807308);
PPC_FUNC_IMPL(__imp__sub_82807308) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x82807310;
	__savegprlr_28(ctx, base);
	// addi r31,r1,-128
	ctx.r31.s64 = ctx.r1.s64 + -128;
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r3,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r3.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// addi r11,r3,36
	ctx.r11.s64 = ctx.r3.s64 + 36;
	// addi r10,r10,32580
	ctx.r10.s64 = ctx.r10.s64 + 32580;
	// addi r29,r11,4
	ctx.r29.s64 = ctx.r11.s64 + 4;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// li r4,16
	ctx.r4.s64 = 16;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x8283b938
	ctx.lr = 0x82807350;
	sub_8283B938(ctx, base);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// li r5,24
	ctx.r5.s64 = 24;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r4,r28,4
	ctx.r4.s64 = ctx.r28.s64 + 4;
	// stw r11,36(r30)
	PPC_STORE_U32(ctx.r30.u32 + 36, ctx.r11.u32);
	// bl 0x82fa77c0
	ctx.lr = 0x82807368;
	sub_82FA77C0(ctx, base);
	// addic. r11,r30,12
	ctx.xer.ca = ctx.r30.u32 > 4294967283;
	ctx.r11.s64 = ctx.r30.s64 + 12;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82807390
	if (ctx.cr0.eq) goto loc_82807390;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,996
	ctx.r9.s64 = 996;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// stw r9,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r9.u32);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// stw r10,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r10.u32);
loc_82807390:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r31,128
	ctx.r1.s64 = ctx.r31.s64 + 128;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_8280739C"))) PPC_WEAK_FUNC(sub_8280739C);
PPC_FUNC_IMPL(__imp__sub_8280739C) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-128
	ctx.r31.s64 = ctx.r12.s64 + -128;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,148(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	// bl 0x82241cb0
	ctx.lr = 0x828073B4;
	sub_82241CB0(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828073C4"))) PPC_WEAK_FUNC(sub_828073C4);
PPC_FUNC_IMPL(__imp__sub_828073C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_828073C8"))) PPC_WEAK_FUNC(sub_828073C8);
PPC_FUNC_IMPL(__imp__sub_828073C8) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// li r4,16
	ctx.r4.s64 = 16;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// addi r30,r31,36
	ctx.r30.s64 = ctx.r31.s64 + 36;
	// bl 0x8283b938
	ctx.lr = 0x828073F0;
	sub_8283B938(ctx, base);
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// addi r4,r30,4
	ctx.r4.s64 = ctx.r30.s64 + 4;
	// addi r3,r1,84
	ctx.r3.s64 = ctx.r1.s64 + 84;
	// li r5,24
	ctx.r5.s64 = 24;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82fa77c0
	ctx.lr = 0x82807408;
	sub_82FA77C0(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82807420;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8280743C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
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

__attribute__((alias("__imp__sub_82807454"))) PPC_WEAK_FUNC(sub_82807454);
PPC_FUNC_IMPL(__imp__sub_82807454) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82807458"))) PPC_WEAK_FUNC(sub_82807458);
PPC_FUNC_IMPL(__imp__sub_82807458) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r23,32728(r26)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r26.u32 + 32728);
	// lwz r16,32724(r1)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r1.u32 + 32724);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// li r0,0
	ctx.r0.s64 = 0;
	// stw r0,4(r1)
	PPC_STORE_U32(ctx.r1.u32 + 4, ctx.r0.u32);
	// bl 0x82fa7674
	ctx.lr = 0x82807470;
	__savegprlr_27(ctx, base);
	// addi r31,r1,-208
	ctx.r31.s64 = ctx.r1.s64 + -208;
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// stw r3,228(r31)
	PPC_STORE_U32(ctx.r31.u32 + 228, ctx.r3.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r28,r4,4
	ctx.r28.s64 = ctx.r4.s64 + 4;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r3,r31,100
	ctx.r3.s64 = ctx.r31.s64 + 100;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r5,24
	ctx.r5.s64 = 24;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// bl 0x82fa77c0
	ctx.lr = 0x828074A8;
	sub_82FA77C0(ctx, base);
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// addi r5,r31,100
	ctx.r5.s64 = ctx.r31.s64 + 100;
	// li r4,64
	ctx.r4.s64 = 64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828074C4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// stw r3,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82807500
	if (ctx.cr6.eq) goto loc_82807500;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r3,r31,132
	ctx.r3.s64 = ctx.r31.s64 + 132;
	// li r5,24
	ctx.r5.s64 = 24;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// stw r11,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r11.u32);
	// bl 0x82fa77c0
	ctx.lr = 0x828074F0;
	sub_82FA77C0(ctx, base);
	// addi r4,r31,128
	ctx.r4.s64 = ctx.r31.s64 + 128;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82807308
	ctx.lr = 0x828074FC;
	sub_82807308(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
loc_82807500:
	// addi r11,r29,12
	ctx.r11.s64 = ctx.r29.s64 + 12;
	// stw r29,4(r27)
	PPC_STORE_U32(ctx.r27.u32 + 4, ctx.r29.u32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stw r11,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
	// addi r1,r31,208
	ctx.r1.s64 = ctx.r31.s64 + 208;
	// b 0x82fa76c4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82807460"))) PPC_WEAK_FUNC(sub_82807460);
PPC_FUNC_IMPL(__imp__sub_82807460) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// li r0,0
	ctx.r0.s64 = 0;
	// stw r0,4(r1)
	PPC_STORE_U32(ctx.r1.u32 + 4, ctx.r0.u32);
	// bl 0x82fa7674
	ctx.lr = 0x82807470;
	__savegprlr_27(ctx, base);
	// addi r31,r1,-208
	ctx.r31.s64 = ctx.r1.s64 + -208;
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// stw r3,228(r31)
	PPC_STORE_U32(ctx.r31.u32 + 228, ctx.r3.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r28,r4,4
	ctx.r28.s64 = ctx.r4.s64 + 4;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// addi r3,r31,100
	ctx.r3.s64 = ctx.r31.s64 + 100;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r5,24
	ctx.r5.s64 = 24;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// bl 0x82fa77c0
	ctx.lr = 0x828074A8;
	sub_82FA77C0(ctx, base);
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// addi r5,r31,100
	ctx.r5.s64 = ctx.r31.s64 + 100;
	// li r4,64
	ctx.r4.s64 = 64;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828074C4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// stw r3,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82807500
	if (ctx.cr6.eq) goto loc_82807500;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r3,r31,132
	ctx.r3.s64 = ctx.r31.s64 + 132;
	// li r5,24
	ctx.r5.s64 = 24;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// stw r11,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r11.u32);
	// bl 0x82fa77c0
	ctx.lr = 0x828074F0;
	sub_82FA77C0(ctx, base);
	// addi r4,r31,128
	ctx.r4.s64 = ctx.r31.s64 + 128;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82807308
	ctx.lr = 0x828074FC;
	sub_82807308(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
loc_82807500:
	// addi r11,r29,12
	ctx.r11.s64 = ctx.r29.s64 + 12;
	// stw r29,4(r27)
	PPC_STORE_U32(ctx.r27.u32 + 4, ctx.r29.u32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stw r11,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r11.u32);
	// addi r1,r31,208
	ctx.r1.s64 = ctx.r31.s64 + 208;
	// b 0x82fa76c4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82807518"))) PPC_WEAK_FUNC(sub_82807518);
PPC_FUNC_IMPL(__imp__sub_82807518) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r23,32728(r26)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r26.u32 + 32728);
	// lwz r16,32724(r1)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r1.u32 + 32724);
	// addi r31,r12,-208
	ctx.r31.s64 = ctx.r12.s64 + -208;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// addi r5,r31,100
	ctx.r5.s64 = ctx.r31.s64 + 100;
	// lwz r4,80(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8280754C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82fa7d90
	ctx.lr = 0x82807558;
	sub_82FA7D90(ctx, base);
	// addi r31,r12,-208
	ctx.r31.s64 = ctx.r12.s64 + -208;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r4,80(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// bl 0x828b2440
	ctx.lr = 0x82807574;
	sub_828B2440(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82807520"))) PPC_WEAK_FUNC(sub_82807520);
PPC_FUNC_IMPL(__imp__sub_82807520) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-208
	ctx.r31.s64 = ctx.r12.s64 + -208;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r3,96(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// addi r5,r31,100
	ctx.r5.s64 = ctx.r31.s64 + 100;
	// lwz r4,80(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x8280754C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82fa7d90
	ctx.lr = 0x82807558;
	sub_82FA7D90(ctx, base);
}

__attribute__((alias("__imp__sub_82807558"))) PPC_WEAK_FUNC(sub_82807558);
PPC_FUNC_IMPL(__imp__sub_82807558) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-208
	ctx.r31.s64 = ctx.r12.s64 + -208;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r4,80(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// lwz r3,88(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// bl 0x828b2440
	ctx.lr = 0x82807574;
	sub_828B2440(ctx, base);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82807584"))) PPC_WEAK_FUNC(sub_82807584);
PPC_FUNC_IMPL(__imp__sub_82807584) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// addi r31,r12,-208
	ctx.r31.s64 = ctx.r12.s64 + -208;
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// clrlwi. r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x828075b4
	if (ctx.cr0.eq) goto loc_828075B4;
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// lwz r3,228(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 228);
	// bl 0x82635760
	ctx.lr = 0x828075B4;
	sub_82635760(ctx, base);
loc_828075B4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828075C4"))) PPC_WEAK_FUNC(sub_828075C4);
PPC_FUNC_IMPL(__imp__sub_828075C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_828075C8"))) PPC_WEAK_FUNC(sub_828075C8);
PPC_FUNC_IMPL(__imp__sub_828075C8) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x828075d4
	if (!ctx.cr6.eq) goto loc_828075D4;
	// blr 
	return;
loc_828075D4:
	// b 0x82fabb90
	sub_82FABB90(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828075D8"))) PPC_WEAK_FUNC(sub_828075D8);
PPC_FUNC_IMPL(__imp__sub_828075D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x828075E0;
	__savegprlr_29(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r29,-31976
	ctx.r29.s64 = -2095579136;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r4,8
	ctx.r4.s64 = 8;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r11,28424(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28424);
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x8283b938
	ctx.lr = 0x82807600;
	sub_8283B938(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,28424(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28424);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82807618;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82807620"))) PPC_WEAK_FUNC(sub_82807620);
PPC_FUNC_IMPL(__imp__sub_82807620) {
	PPC_FUNC_PROLOGUE();
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82807628"))) PPC_WEAK_FUNC(sub_82807628);
PPC_FUNC_IMPL(__imp__sub_82807628) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x82807630;
	__savegprlr_29(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r29,-31976
	ctx.r29.s64 = -2095579136;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r4,8
	ctx.r4.s64 = 8;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r11,28424(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28424);
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x8283b938
	ctx.lr = 0x82807650;
	sub_8283B938(ctx, base);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,28424(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28424);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82807668;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82807670"))) PPC_WEAK_FUNC(sub_82807670);
PPC_FUNC_IMPL(__imp__sub_82807670) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x82807678;
	__savegprlr_29(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r29,-31976
	ctx.r29.s64 = -2095579136;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r4,8
	ctx.r4.s64 = 8;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r11,28424(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28424);
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x8283b938
	ctx.lr = 0x82807698;
	sub_8283B938(ctx, base);
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,28424(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28424);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x828076B0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828076B8"))) PPC_WEAK_FUNC(sub_828076B8);
PPC_FUNC_IMPL(__imp__sub_828076B8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828076BC"))) PPC_WEAK_FUNC(sub_828076BC);
PPC_FUNC_IMPL(__imp__sub_828076BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_828076C0"))) PPC_WEAK_FUNC(sub_828076C0);
PPC_FUNC_IMPL(__imp__sub_828076C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x828076C8;
	__savegprlr_29(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r29,-31976
	ctx.r29.s64 = -2095579136;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// li r4,8
	ctx.r4.s64 = 8;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r11,28424(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28424);
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x8283b938
	ctx.lr = 0x828076E8;
	sub_8283B938(ctx, base);
	// lwz r11,24(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// mr r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,28424(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 28424);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82807700;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82807708"))) PPC_WEAK_FUNC(sub_82807708);
PPC_FUNC_IMPL(__imp__sub_82807708) {
	PPC_FUNC_PROLOGUE();
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r3,r3,272
	ctx.r3.s64 = ctx.r3.s64 + 272;
	// b 0x828126e0
	sub_828126E0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82807714"))) PPC_WEAK_FUNC(sub_82807714);
PPC_FUNC_IMPL(__imp__sub_82807714) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82807718"))) PPC_WEAK_FUNC(sub_82807718);
PPC_FUNC_IMPL(__imp__sub_82807718) {
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
	// addi r3,r3,272
	ctx.r3.s64 = ctx.r3.s64 + 272;
	// bl 0x82812680
	ctx.lr = 0x8280772C;
	sub_82812680(ctx, base);
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

__attribute__((alias("__imp__sub_82807740"))) PPC_WEAK_FUNC(sub_82807740);
PPC_FUNC_IMPL(__imp__sub_82807740) {
	PPC_FUNC_PROLOGUE();
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82807760"))) PPC_WEAK_FUNC(sub_82807760);
PPC_FUNC_IMPL(__imp__sub_82807760) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82807764"))) PPC_WEAK_FUNC(sub_82807764);
PPC_FUNC_IMPL(__imp__sub_82807764) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82807768"))) PPC_WEAK_FUNC(sub_82807768);
PPC_FUNC_IMPL(__imp__sub_82807768) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,272
	ctx.r3.s64 = ctx.r3.s64 + 272;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82807770"))) PPC_WEAK_FUNC(sub_82807770);
PPC_FUNC_IMPL(__imp__sub_82807770) {
	PPC_FUNC_PROLOGUE();
	// stw r4,716(r3)
	PPC_STORE_U32(ctx.r3.u32 + 716, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82807778"))) PPC_WEAK_FUNC(sub_82807778);
PPC_FUNC_IMPL(__imp__sub_82807778) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,712(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 712);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x8280778c
	if (!ctx.cr6.eq) goto loc_8280778C;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r10,716(r3)
	PPC_STORE_U32(ctx.r3.u32 + 716, ctx.r10.u32);
loc_8280778C:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,712(r3)
	PPC_STORE_U32(ctx.r3.u32 + 712, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82807798"))) PPC_WEAK_FUNC(sub_82807798);
PPC_FUNC_IMPL(__imp__sub_82807798) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,712(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 712);
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,712(r3)
	PPC_STORE_U32(ctx.r3.u32 + 712, ctx.r11.u32);
	// bnelr 
	if (!ctx.cr0.eq) return;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,716(r3)
	PPC_STORE_U32(ctx.r3.u32 + 716, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_828077B4"))) PPC_WEAK_FUNC(sub_828077B4);
PPC_FUNC_IMPL(__imp__sub_828077B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_828077B8"))) PPC_WEAK_FUNC(sub_828077B8);
PPC_FUNC_IMPL(__imp__sub_828077B8) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_828077CC"))) PPC_WEAK_FUNC(sub_828077CC);
PPC_FUNC_IMPL(__imp__sub_828077CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_828077D0"))) PPC_WEAK_FUNC(sub_828077D0);
PPC_FUNC_IMPL(__imp__sub_828077D0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,272
	ctx.r3.s64 = ctx.r3.s64 + 272;
	// b 0x82811828
	sub_82811828(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828077D8"))) PPC_WEAK_FUNC(sub_828077D8);
PPC_FUNC_IMPL(__imp__sub_828077D8) {
	PPC_FUNC_PROLOGUE();
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r3,272
	ctx.r3.s64 = ctx.r3.s64 + 272;
	// b 0x82811ee8
	sub_82811EE8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828077E8"))) PPC_WEAK_FUNC(sub_828077E8);
PPC_FUNC_IMPL(__imp__sub_828077E8) {
	PPC_FUNC_PROLOGUE();
	// mr r8,r7
	ctx.r8.u64 = ctx.r7.u64;
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r3,272
	ctx.r3.s64 = ctx.r3.s64 + 272;
	// b 0x82811938
	sub_82811938(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82807804"))) PPC_WEAK_FUNC(sub_82807804);
PPC_FUNC_IMPL(__imp__sub_82807804) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82807808"))) PPC_WEAK_FUNC(sub_82807808);
PPC_FUNC_IMPL(__imp__sub_82807808) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x82807810;
	__savegprlr_28(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// lwz r6,708(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 708);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r10,-32718
	ctx.r4.s64 = ctx.r10.s64 + -32718;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x8280ba68
	ctx.lr = 0x82807844;
	sub_8280BA68(ctx, base);
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,272
	ctx.r3.s64 = ctx.r31.s64 + 272;
	// bl 0x82811938
	ctx.lr = 0x82807860;
	sub_82811938(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82807868"))) PPC_WEAK_FUNC(sub_82807868);
PPC_FUNC_IMPL(__imp__sub_82807868) {
	PPC_FUNC_PROLOGUE();
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r3,272
	ctx.r3.s64 = ctx.r3.s64 + 272;
	// b 0x82811500
	sub_82811500(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82807874"))) PPC_WEAK_FUNC(sub_82807874);
PPC_FUNC_IMPL(__imp__sub_82807874) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82807878"))) PPC_WEAK_FUNC(sub_82807878);
PPC_FUNC_IMPL(__imp__sub_82807878) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,840(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 840);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82807880"))) PPC_WEAK_FUNC(sub_82807880);
PPC_FUNC_IMPL(__imp__sub_82807880) {
	PPC_FUNC_PROLOGUE();
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,840(r3)
	PPC_STORE_U32(ctx.r3.u32 + 840, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8280788C"))) PPC_WEAK_FUNC(sub_8280788C);
PPC_FUNC_IMPL(__imp__sub_8280788C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82807890"))) PPC_WEAK_FUNC(sub_82807890);
PPC_FUNC_IMPL(__imp__sub_82807890) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,840(r3)
	PPC_STORE_U32(ctx.r3.u32 + 840, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_8280789C"))) PPC_WEAK_FUNC(sub_8280789C);
PPC_FUNC_IMPL(__imp__sub_8280789C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_828078A0"))) PPC_WEAK_FUNC(sub_828078A0);
PPC_FUNC_IMPL(__imp__sub_828078A0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,272
	ctx.r3.s64 = ctx.r3.s64 + 272;
	// b 0x82811ab8
	sub_82811AB8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_828078A8"))) PPC_WEAK_FUNC(sub_828078A8);
PPC_FUNC_IMPL(__imp__sub_828078A8) {
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
	// addi r31,r3,136
	ctx.r31.s64 = ctx.r3.s64 + 136;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831791a4
	ctx.lr = 0x828078CC;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r31,r11,27,31,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// bl 0x831791b4
	ctx.lr = 0x828078E0;
	__imp__RtlLeaveCriticalSection(ctx, base);
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

__attribute__((alias("__imp__sub_828078FC"))) PPC_WEAK_FUNC(sub_828078FC);
PPC_FUNC_IMPL(__imp__sub_828078FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82807900"))) PPC_WEAK_FUNC(sub_82807900);
PPC_FUNC_IMPL(__imp__sub_82807900) {
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
	// addi r31,r3,136
	ctx.r31.s64 = ctx.r3.s64 + 136;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831791a4
	ctx.lr = 0x82807924;
	__imp__RtlEnterCriticalSection(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r31,8(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// bl 0x831791b4
	ctx.lr = 0x82807930;
	__imp__RtlLeaveCriticalSection(ctx, base);
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

__attribute__((alias("__imp__sub_8280794C"))) PPC_WEAK_FUNC(sub_8280794C);
PPC_FUNC_IMPL(__imp__sub_8280794C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82807950"))) PPC_WEAK_FUNC(sub_82807950);
PPC_FUNC_IMPL(__imp__sub_82807950) {
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
	// addi r30,r3,108
	ctx.r30.s64 = ctx.r3.s64 + 108;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831791a4
	ctx.lr = 0x82807974;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r11,204(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 204);
	// lwz r10,208(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 208);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r31,r11,27,31,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// bl 0x831791b4
	ctx.lr = 0x82807990;
	__imp__RtlLeaveCriticalSection(ctx, base);
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

__attribute__((alias("__imp__sub_828079AC"))) PPC_WEAK_FUNC(sub_828079AC);
PPC_FUNC_IMPL(__imp__sub_828079AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

