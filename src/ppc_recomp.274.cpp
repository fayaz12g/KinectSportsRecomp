#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_82F18410"))) PPC_WEAK_FUNC(sub_82F18410);
PPC_FUNC_IMPL(__imp__sub_82F18410) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x82F18418;
	__savegprlr_28(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r9,19120(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 19120);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x82f185ac
	if (!ctx.cr6.gt) goto loc_82F185AC;
	// lwz r10,19124(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 19124);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x82f185ac
	if (!ctx.cr6.gt) goto loc_82F185AC;
	// lwz r5,19160(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 19160);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// ble cr6,0x82f185ac
	if (!ctx.cr6.gt) goto loc_82F185AC;
	// lwz r6,19164(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 19164);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// ble cr6,0x82f185ac
	if (!ctx.cr6.gt) goto loc_82F185AC;
	// lwz r3,19200(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 19200);
	// addi r29,r31,19200
	ctx.r29.s64 = ctx.r31.s64 + 19200;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82f184f8
	if (!ctx.cr6.eq) goto loc_82F184F8;
	// lwz r11,30624(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 30624);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82f184a0
	if (ctx.cr6.eq) goto loc_82F184A0;
	// stw r4,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r4.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r6,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r6.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// stw r5,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r5.u32);
	// addi r3,r31,19116
	ctx.r3.s64 = ctx.r31.s64 + 19116;
	// stw r30,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r30.u32);
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// bl 0x82f1ad60
	ctx.lr = 0x82F1849C;
	sub_82F1AD60(ctx, base);
	// b 0x82f184e0
	goto loc_82F184E0;
loc_82F184A0:
	// lwz r11,30628(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 30628);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82f184e0
	if (ctx.cr6.eq) goto loc_82F184E0;
	// lwz r3,19112(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 19112);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r4,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r4.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// stw r6,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r6.u32);
	// stw r5,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r5.u32);
	// stw r30,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r30.u32);
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// bl 0x82f1ad60
	ctx.lr = 0x82F184E0;
	sub_82F1AD60(ctx, base);
loc_82F184E0:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82f1850c
	if (!ctx.cr6.eq) goto loc_82F1850C;
	// li r3,-100
	ctx.r3.s64 = -100;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
loc_82F184F8:
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r5,r10
	ctx.r5.u64 = ctx.r10.u64;
	// mr r4,r9
	ctx.r4.u64 = ctx.r9.u64;
	// bl 0x82f1a9f0
	ctx.lr = 0x82F1850C;
	sub_82F1A9F0(ctx, base);
loc_82F1850C:
	// lwz r11,19204(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 19204);
	// lis r10,9356
	ctx.r10.s64 = 613154816;
	// ori r28,r10,32768
	ctx.r28.u64 = ctx.r10.u64 | 32768;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82f18554
	if (!ctx.cr6.eq) goto loc_82F18554;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r3,19176(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 19176);
	// bl 0x82691410
	ctx.lr = 0x82F1852C;
	sub_82691410(ctx, base);
	// stw r3,19204(r31)
	PPC_STORE_U32(ctx.r31.u32 + 19204, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82f18554
	if (!ctx.cr6.eq) goto loc_82F18554;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82f18548
	if (ctx.cr6.eq) goto loc_82F18548;
	// bl 0x82f19638
	ctx.lr = 0x82F18548;
	sub_82F19638(ctx, base);
loc_82F18548:
	// li r3,-100
	ctx.r3.s64 = -100;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
loc_82F18554:
	// lwz r11,19208(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 19208);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82f185ac
	if (!ctx.cr6.eq) goto loc_82F185AC;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r3,19136(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 19136);
	// bl 0x82691410
	ctx.lr = 0x82F1856C;
	sub_82691410(ctx, base);
	// stw r3,19208(r31)
	PPC_STORE_U32(ctx.r31.u32 + 19208, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82f185ac
	if (!ctx.cr6.eq) goto loc_82F185AC;
	// lwz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82f18588
	if (ctx.cr6.eq) goto loc_82F18588;
	// bl 0x82f19638
	ctx.lr = 0x82F18588;
	sub_82F19638(ctx, base);
loc_82F18588:
	// lwz r3,19204(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 19204);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82f185a0
	if (ctx.cr6.eq) goto loc_82F185A0;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x82691460
	ctx.lr = 0x82F1859C;
	sub_82691460(ctx, base);
	// stw r30,19204(r31)
	PPC_STORE_U32(ctx.r31.u32 + 19204, ctx.r30.u32);
loc_82F185A0:
	// li r3,-100
	ctx.r3.s64 = -100;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
loc_82F185AC:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F185B8"))) PPC_WEAK_FUNC(sub_82F185B8);
PPC_FUNC_IMPL(__imp__sub_82F185B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7658
	ctx.lr = 0x82F185C0;
	__savegprlr_20(ctx, base);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,1372(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1372);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r27,1364(r3)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1364);
	// lwz r9,1360(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1360);
	// lwz r10,1352(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 1352);
	// mullw r26,r27,r11
	ctx.r26.s64 = int64_t(ctx.r27.s32) * int64_t(ctx.r11.s32);
	// lwz r8,30752(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 30752);
	// mullw r25,r10,r9
	ctx.r25.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r9.s32);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x82f1877c
	if (!ctx.cr6.eq) goto loc_82F1877C;
	// lwz r8,30756(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 30756);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x82f1877c
	if (!ctx.cr6.eq) goto loc_82F1877C;
	// lwz r8,30624(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 30624);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x82f18610
	if (!ctx.cr6.eq) goto loc_82F18610;
	// lwz r8,30628(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 30628);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x82f18634
	if (ctx.cr6.eq) goto loc_82F18634;
loc_82F18610:
	// lwz r8,19112(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 19112);
	// lwz r7,19120(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 19120);
	// lwz r6,4(r8)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// cmpw cr6,r7,r6
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r6.s32, ctx.xer);
	// bne cr6,0x82f1877c
	if (!ctx.cr6.eq) goto loc_82F1877C;
	// lwz r7,19124(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 19124);
	// lwz r6,8(r8)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// cmpw cr6,r7,r6
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r6.s32, ctx.xer);
	// bne cr6,0x82f1877c
	if (!ctx.cr6.eq) goto loc_82F1877C;
loc_82F18634:
	// lwz r8,19212(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 19212);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x82f1877c
	if (!ctx.cr6.eq) goto loc_82F1877C;
	// lwz r8,1388(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1388);
	// li r3,1
	ctx.r3.s64 = 1;
	// lwz r6,1380(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1380);
	// li r4,40
	ctx.r4.s64 = 40;
	// sth r3,156(r1)
	PPC_STORE_U16(ctx.r1.u32 + 156, ctx.r3.u16);
	// lis r7,22101
	ctx.r7.s64 = 1448411136;
	// mullw r11,r6,r8
	ctx.r11.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r8.s32);
	// lwz r5,19196(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 19196);
	// stw r4,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r4.u32);
	// stw r8,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r8.u32);
	// stw r6,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r6.u32);
	// rlwinm r8,r11,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// ori r7,r7,22857
	ctx.r7.u64 = ctx.r7.u64 | 22857;
	// add r6,r11,r8
	ctx.r6.u64 = ctx.r11.u64 + ctx.r8.u64;
	// li r4,12
	ctx.r4.s64 = 12;
	// stw r7,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r7.u32);
	// srawi r3,r6,1
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x1) != 0);
	ctx.r3.s64 = ctx.r6.s32 >> 1;
	// sth r4,158(r1)
	PPC_STORE_U16(ctx.r1.u32 + 158, ctx.r4.u16);
	// addze r11,r3
	temp.s64 = ctx.r3.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r3.u32;
	ctx.r11.s64 = temp.s64;
	// stw r11,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r11.u32);
	// lwz r8,4(r5)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// srawi r7,r8,31
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7FFFFFFF) != 0);
	ctx.r7.s64 = ctx.r8.s32 >> 31;
	// xor r6,r8,r7
	ctx.r6.u64 = ctx.r8.u64 ^ ctx.r7.u64;
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// subf r11,r7,r6
	ctx.r11.s64 = ctx.r6.s64 - ctx.r7.s64;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82f186b0
	if (ctx.cr6.lt) goto loc_82F186B0;
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
loc_82F186B0:
	// lwz r11,8(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// srawi r10,r11,31
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFFFFFF) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 31;
	// xor r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 ^ ctx.r10.u64;
	// subf r7,r10,r7
	ctx.r7.s64 = ctx.r7.s64 - ctx.r10.s64;
	// cmpw cr6,r9,r7
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x82f186cc
	if (ctx.cr6.lt) goto loc_82F186CC;
	// mr r9,r7
	ctx.r9.u64 = ctx.r7.u64;
loc_82F186CC:
	// lwz r11,2124(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2124);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82f18730
	if (ctx.cr6.eq) goto loc_82F18730;
	// ld r11,736(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 736);
	// cmpdi cr6,r11,1
	ctx.cr6.compare<int64_t>(ctx.r11.s64, 1, ctx.xer);
	// beq cr6,0x82f18730
	if (ctx.cr6.eq) goto loc_82F18730;
	// lwz r7,2800(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2800);
	// cmpwi cr6,r7,2
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 2, ctx.xer);
	// beq cr6,0x82f18730
	if (ctx.cr6.eq) goto loc_82F18730;
	// cmpwi cr6,r7,4
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 4, ctx.xer);
	// beq cr6,0x82f18730
	if (ctx.cr6.eq) goto loc_82F18730;
	// lwz r3,24(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// li r7,32
	ctx.r7.s64 = 32;
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// li r6,32
	ctx.r6.s64 = 32;
	// lwz r30,19108(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 19108);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// lwz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// stw r3,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r3.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// bl 0x82f13030
	ctx.lr = 0x82F18728;
	sub_82F13030(ctx, base);
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x82fa76a8
	__restgprlr_20(ctx, base);
	return;
loc_82F18730:
	// lwz r11,19108(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 19108);
	// li r7,32
	ctx.r7.s64 = 32;
	// lwz r10,1400(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1400);
	// li r6,32
	ctx.r6.s64 = 32;
	// lwz r4,19100(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 19100);
	// lwz r3,19096(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 19096);
	// subf r29,r10,r4
	ctx.r29.s64 = ctx.r4.s64 - ctx.r10.s64;
	// lwz r30,19092(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 19092);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// subf r11,r10,r3
	ctx.r11.s64 = ctx.r3.s64 - ctx.r10.s64;
	// lwz r10,1396(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1396);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r29,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r29.u32);
	// subf r10,r10,r30
	ctx.r10.s64 = ctx.r30.s64 - ctx.r10.s64;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// bl 0x82f13030
	ctx.lr = 0x82F18774;
	sub_82F13030(ctx, base);
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x82fa76a8
	__restgprlr_20(ctx, base);
	return;
loc_82F1877C:
	// lwz r8,2124(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2124);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x82f18884
	if (ctx.cr6.eq) goto loc_82F18884;
	// ld r8,736(r31)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r31.u32 + 736);
	// cmpdi cr6,r8,1
	ctx.cr6.compare<int64_t>(ctx.r8.s64, 1, ctx.xer);
	// beq cr6,0x82f18884
	if (ctx.cr6.eq) goto loc_82F18884;
	// lwz r11,2800(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2800);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x82f18820
	if (ctx.cr6.eq) goto loc_82F18820;
	// cmpwi cr6,r11,4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4, ctx.xer);
	// beq cr6,0x82f18820
	if (ctx.cr6.eq) goto loc_82F18820;
	// lwz r11,1400(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1400);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r9,7808(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7808);
	// lwz r8,7812(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7812);
	// lwz r24,19212(r31)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r31.u32 + 19212);
	// add r30,r9,r11
	ctx.r30.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lwz r23,1392(r31)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1392);
	// add r28,r8,r11
	ctx.r28.u64 = ctx.r8.u64 + ctx.r11.u64;
	// lwz r22,1384(r31)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1384);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r21,1388(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1388);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// lwz r20,1380(r31)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1380);
	// lwz r29,7816(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7816);
	// lwz r9,28(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r8,24(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lwz r7,784(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 784);
	// add r8,r8,r11
	ctx.r8.u64 = ctx.r8.u64 + ctx.r11.u64;
	// stw r24,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r24.u32);
	// stw r23,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r23.u32);
	// stw r22,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r22.u32);
	// stw r21,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r21.u32);
	// stw r20,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r20.u32);
	// stw r26,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r26.u32);
	// stw r27,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r27.u32);
	// stw r25,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r25.u32);
	// bl 0x82f13188
	ctx.lr = 0x82F1881C;
	sub_82F13188(ctx, base);
	// b 0x82f188e8
	goto loc_82F188E8;
loc_82F18820:
	// lwz r22,1380(r31)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1380);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r27,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r27.u32);
	// stw r25,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r25.u32);
	// lwz r4,1392(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1392);
	// lwz r11,19212(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 19212);
	// stw r22,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r22.u32);
	// lwz r24,1384(r31)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1384);
	// lwz r23,1388(r31)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1388);
	// lwz r7,19092(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 19092);
	// lwz r8,19096(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 19096);
	// lwz r9,19100(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 19100);
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// stw r4,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r4.u32);
	// mr r5,r8
	ctx.r5.u64 = ctx.r8.u64;
	// mr r6,r9
	ctx.r6.u64 = ctx.r9.u64;
	// stw r11,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r11.u32);
	// mr r4,r7
	ctx.r4.u64 = ctx.r7.u64;
	// stw r24,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r24.u32);
	// mr r30,r8
	ctx.r30.u64 = ctx.r8.u64;
	// stw r23,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r23.u32);
	// mr r28,r9
	ctx.r28.u64 = ctx.r9.u64;
	// stw r26,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r26.u32);
	// bl 0x82f13188
	ctx.lr = 0x82F18880;
	sub_82F13188(ctx, base);
	// b 0x82f188e8
	goto loc_82F188E8;
loc_82F18884:
	// lwz r24,1384(r31)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1384);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r23,1380(r31)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1380);
	// stw r9,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r9.u32);
	// stw r11,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r11.u32);
	// stw r25,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r25.u32);
	// stw r26,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r26.u32);
	// stw r24,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r24.u32);
	// stw r23,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r23.u32);
	// stw r27,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r27.u32);
	// lwz r8,19212(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 19212);
	// lwz r11,1400(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1400);
	// lwz r9,28(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r29,784(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 784);
	// add r28,r9,r11
	ctx.r28.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lwz r9,19100(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 19100);
	// stw r8,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r8.u32);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r8,24(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// lwz r7,19092(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 19092);
	// add r30,r8,r11
	ctx.r30.u64 = ctx.r8.u64 + ctx.r11.u64;
	// lwz r8,19096(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 19096);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x82f13188
	ctx.lr = 0x82F188E8;
	sub_82F13188(ctx, base);
loc_82F188E8:
	// lwz r11,30752(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 30752);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82f18900
	if (!ctx.cr6.eq) goto loc_82F18900;
	// lwz r11,30756(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 30756);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82f1891c
	if (ctx.cr6.eq) goto loc_82F1891C;
loc_82F18900:
	// mr r8,r26
	ctx.r8.u64 = ctx.r26.u64;
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f3dfd0
	ctx.lr = 0x82F1891C;
	sub_82F3DFD0(ctx, base);
loc_82F1891C:
	// lwz r11,30624(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 30624);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82f18934
	if (!ctx.cr6.eq) goto loc_82F18934;
	// lwz r11,30628(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 30628);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82f18958
	if (ctx.cr6.eq) goto loc_82F18958;
loc_82F18934:
	// lwz r11,19112(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 19112);
	// lwz r10,19120(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 19120);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x82f18a04
	if (!ctx.cr6.eq) goto loc_82F18A04;
	// lwz r10,19124(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 19124);
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x82f18a04
	if (!ctx.cr6.eq) goto loc_82F18A04;
loc_82F18958:
	// lwz r4,19112(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 19112);
	// lis r11,22101
	ctx.r11.s64 = 1448411136;
	// ori r10,r11,22857
	ctx.r10.u64 = ctx.r11.u64 | 22857;
	// lwz r11,16(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82f189cc
	if (ctx.cr6.eq) goto loc_82F189CC;
	// lis r10,12338
	ctx.r10.s64 = 808583168;
	// ori r9,r10,13385
	ctx.r9.u64 = ctx.r10.u64 | 13385;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82f189cc
	if (ctx.cr6.eq) goto loc_82F189CC;
	// lis r10,12593
	ctx.r10.s64 = 825294848;
	// ori r9,r10,13392
	ctx.r9.u64 = ctx.r10.u64 | 13392;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82f189cc
	if (ctx.cr6.eq) goto loc_82F189CC;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// lwz r11,19108(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 19108);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r9,1360(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1360);
	// addi r4,r31,8132
	ctx.r4.s64 = ctx.r31.s64 + 8132;
	// lwz r8,1352(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1352);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,19196(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 19196);
	// stw r28,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r28.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x82f13030
	ctx.lr = 0x82F189C4;
	sub_82F13030(ctx, base);
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x82fa76a8
	__restgprlr_20(ctx, base);
	return;
loc_82F189CC:
	// stw r28,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r28.u32);
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// lwz r11,19108(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 19108);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r9,1360(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1360);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r8,1352(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1352);
	// lwz r5,19196(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 19196);
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x82f13030
	ctx.lr = 0x82F189FC;
	sub_82F13030(ctx, base);
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x82fa76a8
	__restgprlr_20(ctx, base);
	return;
loc_82F18A04:
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// lwz r7,19204(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 19204);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f13350
	ctx.lr = 0x82F18A1C;
	sub_82F13350(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r5,19196(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 19196);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// addi r4,r31,19156
	ctx.r4.s64 = ctx.r31.s64 + 19156;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,19204(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 19204);
	// lwz r9,8(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// lwz r8,4(r5)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// lwz r11,19108(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 19108);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x82f13030
	ctx.lr = 0x82F18A54;
	sub_82F13030(ctx, base);
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x82fa76a8
	__restgprlr_20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F18A5C"))) PPC_WEAK_FUNC(sub_82F18A5C);
PPC_FUNC_IMPL(__imp__sub_82F18A5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F18A60"))) PPC_WEAK_FUNC(sub_82F18A60);
PPC_FUNC_IMPL(__imp__sub_82F18A60) {
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
	// addi r3,r3,64
	ctx.r3.s64 = ctx.r3.s64 + 64;
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
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
	// stw r30,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r30.u32);
	// stw r30,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r30.u32);
	// stw r30,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r30.u32);
	// stw r30,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r30.u32);
	// stw r30,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r30.u32);
	// stw r30,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r30.u32);
	// bl 0x82f6a4f8
	ctx.lr = 0x82F18AC0;
	sub_82F6A4F8(ctx, base);
	// addi r3,r31,204
	ctx.r3.s64 = ctx.r31.s64 + 204;
	// bl 0x82f6a438
	ctx.lr = 0x82F18AC8;
	sub_82F6A438(ctx, base);
	// stw r30,340(r31)
	PPC_STORE_U32(ctx.r31.u32 + 340, ctx.r30.u32);
	// stw r30,344(r31)
	PPC_STORE_U32(ctx.r31.u32 + 344, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r30,348(r31)
	PPC_STORE_U32(ctx.r31.u32 + 348, ctx.r30.u32);
	// stw r30,352(r31)
	PPC_STORE_U32(ctx.r31.u32 + 352, ctx.r30.u32);
	// stw r30,356(r31)
	PPC_STORE_U32(ctx.r31.u32 + 356, ctx.r30.u32);
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
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

__attribute__((alias("__imp__sub_82F18AFC"))) PPC_WEAK_FUNC(sub_82F18AFC);
PPC_FUNC_IMPL(__imp__sub_82F18AFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F18B00"))) PPC_WEAK_FUNC(sub_82F18B00);
PPC_FUNC_IMPL(__imp__sub_82F18B00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x82F18B08;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,352(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 352);
	// lis r11,9356
	ctx.r11.s64 = 613154816;
	// li r30,0
	ctx.r30.s64 = 0;
	// ori r29,r11,32768
	ctx.r29.u64 = ctx.r11.u64 | 32768;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82f18b34
	if (ctx.cr6.eq) goto loc_82F18B34;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82691460
	ctx.lr = 0x82F18B30;
	sub_82691460(ctx, base);
	// stw r30,352(r31)
	PPC_STORE_U32(ctx.r31.u32 + 352, ctx.r30.u32);
loc_82F18B34:
	// lwz r3,356(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 356);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82f18b4c
	if (ctx.cr6.eq) goto loc_82F18B4C;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82691460
	ctx.lr = 0x82F18B48;
	sub_82691460(ctx, base);
	// stw r30,356(r31)
	PPC_STORE_U32(ctx.r31.u32 + 356, ctx.r30.u32);
loc_82F18B4C:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82f18b64
	if (ctx.cr6.eq) goto loc_82F18B64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82691460
	ctx.lr = 0x82F18B60;
	sub_82691460(ctx, base);
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
loc_82F18B64:
	// addi r3,r31,204
	ctx.r3.s64 = ctx.r31.s64 + 204;
	// bl 0x82f6a488
	ctx.lr = 0x82F18B6C;
	sub_82F6A488(ctx, base);
	// addi r3,r31,64
	ctx.r3.s64 = ctx.r31.s64 + 64;
	// bl 0x82f6a548
	ctx.lr = 0x82F18B74;
	sub_82F6A548(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F18B7C"))) PPC_WEAK_FUNC(sub_82F18B7C);
PPC_FUNC_IMPL(__imp__sub_82F18B7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F18B80"))) PPC_WEAK_FUNC(sub_82F18B80);
PPC_FUNC_IMPL(__imp__sub_82F18B80) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x82F18B88;
	__savegprlr_29(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82f18e90
	if (ctx.cr6.eq) goto loc_82F18E90;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f18e90
	if (ctx.cr6.eq) goto loc_82F18E90;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82f18e90
	if (ctx.cr6.eq) goto loc_82F18E90;
	// lwz r11,344(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 344);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// beq cr6,0x82f18bc8
	if (ctx.cr6.eq) goto loc_82F18BC8;
	// srawi r7,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r7.s64 = ctx.r11.s32 >> 1;
	// addze r11,r7
	temp.s64 = ctx.r7.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r7.u32;
	ctx.r11.s64 = temp.s64;
loc_82F18BC8:
	// lwz r7,4(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lis r31,22101
	ctx.r31.s64 = 1448411136;
	// ori r31,r31,22857
	ctx.r31.u64 = ctx.r31.u64 | 22857;
	// lwz r7,16(r7)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + 16);
	// cmplw cr6,r7,r31
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x82f18c64
	if (ctx.cr6.eq) goto loc_82F18C64;
	// lis r31,12338
	ctx.r31.s64 = 808583168;
	// ori r31,r31,13385
	ctx.r31.u64 = ctx.r31.u64 | 13385;
	// cmplw cr6,r7,r31
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x82f18c64
	if (ctx.cr6.eq) goto loc_82F18C64;
	// lis r31,12849
	ctx.r31.s64 = 842072064;
	// ori r31,r31,22105
	ctx.r31.u64 = ctx.r31.u64 | 22105;
	// cmplw cr6,r7,r31
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x82f18c64
	if (ctx.cr6.eq) goto loc_82F18C64;
	// lwz r7,4(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lhz r31,14(r7)
	ctx.r31.u64 = PPC_LOAD_U16(ctx.r7.u32 + 14);
	// lwz r30,4(r7)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// lwz r29,8(r7)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// mullw r7,r31,r30
	ctx.r7.s64 = int64_t(ctx.r31.s32) * int64_t(ctx.r30.s32);
	// srawi r7,r7,3
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7) != 0);
	ctx.r7.s64 = ctx.r7.s32 >> 3;
	// addze r7,r7
	temp.s64 = ctx.r7.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r7.u32;
	ctx.r7.s64 = temp.s64;
	// addi r7,r7,3
	ctx.r7.s64 = ctx.r7.s64 + 3;
	// srawi r7,r7,2
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x3) != 0);
	ctx.r7.s64 = ctx.r7.s32 >> 2;
	// addze r7,r7
	temp.s64 = ctx.r7.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r7.u32;
	ctx.r7.s64 = temp.s64;
	// mullw r7,r7,r29
	ctx.r7.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r29.s32);
	// rlwinm r7,r7,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r7,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r7.u32);
	// lwz r7,4(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r31,32(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lhz r7,14(r7)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r7.u32 + 14);
	// mullw r7,r7,r31
	ctx.r7.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r31.s32);
	// srawi r7,r7,3
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7) != 0);
	ctx.r7.s64 = ctx.r7.s32 >> 3;
	// addze r7,r7
	temp.s64 = ctx.r7.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r7.u32;
	ctx.r7.s64 = temp.s64;
	// addi r7,r7,3
	ctx.r7.s64 = ctx.r7.s64 + 3;
	// srawi r7,r7,2
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x3) != 0);
	ctx.r7.s64 = ctx.r7.s32 >> 2;
	// addze r7,r7
	temp.s64 = ctx.r7.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r7.u32;
	ctx.r7.s64 = temp.s64;
	// mullw r7,r7,r11
	ctx.r7.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r11.s32);
	// rlwinm r7,r7,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// b 0x82f18ca0
	goto loc_82F18CA0;
loc_82F18C64:
	// lwz r7,4(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r31,8(r7)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r7.u32 + 8);
	// lwz r7,4(r7)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// mullw r7,r31,r7
	ctx.r7.s64 = int64_t(ctx.r31.s32) * int64_t(ctx.r7.s32);
	// rlwinm r31,r7,1,0,30
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// add r7,r7,r31
	ctx.r7.u64 = ctx.r7.u64 + ctx.r31.u64;
	// srawi r7,r7,1
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x1) != 0);
	ctx.r7.s64 = ctx.r7.s32 >> 1;
	// addze r7,r7
	temp.s64 = ctx.r7.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r7.u32;
	ctx.r7.s64 = temp.s64;
	// stw r7,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r7.u32);
	// lwz r7,32(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// mullw r7,r7,r11
	ctx.r7.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r11.s32);
	// rlwinm r31,r7,1,0,30
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// add r7,r7,r31
	ctx.r7.u64 = ctx.r7.u64 + ctx.r31.u64;
	// srawi r7,r7,1
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x1) != 0);
	ctx.r7.s64 = ctx.r7.s32 >> 1;
	// addze r7,r7
	temp.s64 = ctx.r7.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r7.u32;
	ctx.r7.s64 = temp.s64;
loc_82F18CA0:
	// stw r7,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r7.u32);
	// rotlwi r7,r7,0
	ctx.r7.u64 = __builtin_rotateleft32(ctx.r7.u32, 0);
	// cmplw cr6,r8,r7
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, ctx.xer);
	// blt cr6,0x82f18e74
	if (ctx.cr6.lt) goto loc_82F18E74;
	// lwz r8,0(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// cmplw cr6,r5,r8
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x82f18e74
	if (ctx.cr6.lt) goto loc_82F18E74;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82f18e90
	if (ctx.cr6.eq) goto loc_82F18E90;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x82f18e90
	if (ctx.cr6.eq) goto loc_82F18E90;
	// lwz r9,340(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 340);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82f18e44
	if (ctx.cr6.eq) goto loc_82F18E44;
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lis r8,20532
	ctx.r8.s64 = 1345585152;
	// lis r4,-32256
	ctx.r4.s64 = -2113929216;
	// ori r7,r8,12850
	ctx.r7.u64 = ctx.r8.u64 | 12850;
	// extsw r8,r11
	ctx.r8.s64 = ctx.r11.s32;
	// lwz r5,16(r9)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	// lfd f4,22472(r4)
	ctx.fpscr.disableFlushMode();
	ctx.f4.u64 = PPC_LOAD_U64(ctx.r4.u32 + 22472);
	// lwz r31,4(r9)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// cmplw cr6,r5,r7
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r7.u32, ctx.xer);
	// lwz r5,32(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// lwz r4,16(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// mullw r11,r5,r11
	ctx.r11.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r11.s32);
	// fmr f2,f4
	ctx.f2.f64 = ctx.f4.f64;
	// bne cr6,0x82f18dac
	if (!ctx.cr6.eq) goto loc_82F18DAC;
	// std r8,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r8.u64);
	// extsw r8,r5
	ctx.r8.s64 = ctx.r5.s32;
	// lwz r5,8(r9)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// lfd f0,112(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// std r8,120(r1)
	PPC_STORE_U64(ctx.r1.u32 + 120, ctx.r8.u64);
	// extsw r8,r31
	ctx.r8.s64 = ctx.r31.s32;
	// extsw r9,r5
	ctx.r9.s64 = ctx.r5.s32;
	// std r9,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.r9.u64);
	// std r8,136(r1)
	PPC_STORE_U64(ctx.r1.u32 + 136, ctx.r8.u64);
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r4,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r4.u32);
	// mullw r5,r31,r5
	ctx.r5.s64 = int64_t(ctx.r31.s32) * int64_t(ctx.r5.s32);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// add r4,r11,r9
	ctx.r4.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lfd f12,120(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// rlwinm r9,r5,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// lfd f10,128(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// srawi r8,r4,1
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x1) != 0);
	ctx.r8.s64 = ctx.r4.s32 >> 1;
	// lfd f9,136(r1)
	ctx.f9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 136);
	// add r4,r5,r9
	ctx.r4.u64 = ctx.r5.u64 + ctx.r9.u64;
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// fcfid f8,f10
	ctx.f8.f64 = double(ctx.f10.s64);
	// addze r9,r8
	temp.s64 = ctx.r8.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r9.s64 = temp.s64;
	// fcfid f7,f9
	ctx.f7.f64 = double(ctx.f9.s64);
	// srawi r8,r4,1
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x1) != 0);
	ctx.r8.s64 = ctx.r4.s32 >> 1;
	// add r9,r9,r6
	ctx.r9.u64 = ctx.r9.u64 + ctx.r6.u64;
	// addze r4,r8
	temp.s64 = ctx.r8.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r4.s64 = temp.s64;
	// add r8,r11,r6
	ctx.r8.u64 = ctx.r11.u64 + ctx.r6.u64;
	// add r6,r4,r10
	ctx.r6.u64 = ctx.r4.u64 + ctx.r10.u64;
	// add r5,r5,r10
	ctx.r5.u64 = ctx.r5.u64 + ctx.r10.u64;
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
	// addi r3,r3,204
	ctx.r3.s64 = ctx.r3.s64 + 204;
	// fdiv f3,f8,f13
	ctx.f3.f64 = ctx.f8.f64 / ctx.f13.f64;
	// fdiv f1,f7,f11
	ctx.f1.f64 = ctx.f7.f64 / ctx.f11.f64;
	// bl 0x82f71230
	ctx.lr = 0x82F18DA0;
	sub_82F71230(ctx, base);
loc_82F18DA0:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
loc_82F18DAC:
	// std r8,136(r1)
	PPC_STORE_U64(ctx.r1.u32 + 136, ctx.r8.u64);
	// extsw r8,r5
	ctx.r8.s64 = ctx.r5.s32;
	// lwz r5,8(r9)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// addi r3,r3,204
	ctx.r3.s64 = ctx.r3.s64 + 204;
	// std r8,128(r1)
	PPC_STORE_U64(ctx.r1.u32 + 128, ctx.r8.u64);
	// extsw r8,r31
	ctx.r8.s64 = ctx.r31.s32;
	// extsw r9,r5
	ctx.r9.s64 = ctx.r5.s32;
	// stw r4,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r4.u32);
	// std r8,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r8.u64);
	// lfd f9,112(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// std r9,120(r1)
	PPC_STORE_U64(ctx.r1.u32 + 120, ctx.r9.u64);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mullw r5,r31,r5
	ctx.r5.s64 = int64_t(ctx.r31.s32) * int64_t(ctx.r5.s32);
	// lfd f12,128(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// fcfid f11,f12
	ctx.f11.f64 = double(ctx.f12.s64);
	// add r4,r11,r9
	ctx.r4.u64 = ctx.r11.u64 + ctx.r9.u64;
	// lfd f0,136(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 136);
	// rlwinm r9,r5,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// lfd f10,120(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// srawi r8,r4,2
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r4.s32 >> 2;
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// add r4,r5,r9
	ctx.r4.u64 = ctx.r5.u64 + ctx.r9.u64;
	// fcfid f8,f10
	ctx.f8.f64 = double(ctx.f10.s64);
	// fcfid f7,f9
	ctx.f7.f64 = double(ctx.f9.s64);
	// addze r9,r8
	temp.s64 = ctx.r8.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r9.s64 = temp.s64;
	// srawi r8,r4,2
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r4.s32 >> 2;
	// add r9,r9,r6
	ctx.r9.u64 = ctx.r9.u64 + ctx.r6.u64;
	// addze r31,r8
	temp.s64 = ctx.r8.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r31.s64 = temp.s64;
	// add r8,r11,r6
	ctx.r8.u64 = ctx.r11.u64 + ctx.r6.u64;
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
	// add r6,r31,r10
	ctx.r6.u64 = ctx.r31.u64 + ctx.r10.u64;
	// add r5,r5,r10
	ctx.r5.u64 = ctx.r5.u64 + ctx.r10.u64;
	// fdiv f3,f8,f13
	ctx.f3.f64 = ctx.f8.f64 / ctx.f13.f64;
	// fdiv f1,f7,f11
	ctx.f1.f64 = ctx.f7.f64 / ctx.f11.f64;
	// bl 0x82f71230
	ctx.lr = 0x82F18E38;
	sub_82F71230(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
loc_82F18E44:
	// lwz r7,32(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// lwz r4,4(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r5,r10
	ctx.r5.u64 = ctx.r10.u64;
	// addi r3,r3,64
	ctx.r3.s64 = ctx.r3.s64 + 64;
	// bl 0x82f6c920
	ctx.lr = 0x82F18E5C;
	sub_82F6C920(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82f18da0
	if (!ctx.cr6.eq) goto loc_82F18DA0;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
loc_82F18E74:
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// stw r11,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r11.u32);
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
loc_82F18E90:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F18E9C"))) PPC_WEAK_FUNC(sub_82F18E9C);
PPC_FUNC_IMPL(__imp__sub_82F18E9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F18EA0"))) PPC_WEAK_FUNC(sub_82F18EA0);
PPC_FUNC_IMPL(__imp__sub_82F18EA0) {
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
	// bne cr6,0x82f18ed4
	if (!ctx.cr6.eq) goto loc_82F18ED4;
	// li r3,1
	ctx.r3.s64 = 1;
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
loc_82F18ED4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f18b00
	ctx.lr = 0x82F18EDC;
	sub_82F18B00(ctx, base);
	// lis r4,9356
	ctx.r4.s64 = 613154816;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r4,r4,32768
	ctx.r4.u64 = ctx.r4.u64 | 32768;
	// bl 0x82691460
	ctx.lr = 0x82F18EEC;
	sub_82691460(ctx, base);
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

__attribute__((alias("__imp__sub_82F18F04"))) PPC_WEAK_FUNC(sub_82F18F04);
PPC_FUNC_IMPL(__imp__sub_82F18F04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F18F08"))) PPC_WEAK_FUNC(sub_82F18F08);
PPC_FUNC_IMPL(__imp__sub_82F18F08) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7644
	ctx.lr = 0x82F18F10;
	__savegprlr_15(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r21,r8
	ctx.r21.u64 = ctx.r8.u64;
	// lwz r8,364(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 364);
	// lwz r19,348(r1)
	ctx.r19.u64 = PPC_LOAD_U32(ctx.r1.u32 + 348);
	// mr r24,r6
	ctx.r24.u64 = ctx.r6.u64;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x82f18f3c
	if (!ctx.cr6.eq) goto loc_82F18F3C;
	// cmplwi cr6,r19,0
	ctx.cr6.compare<uint32_t>(ctx.r19.u32, 0, ctx.xer);
	// beq cr6,0x82f18f48
	if (ctx.cr6.eq) goto loc_82F18F48;
	// cmplwi cr6,r19,3
	ctx.cr6.compare<uint32_t>(ctx.r19.u32, 3, ctx.xer);
	// beq cr6,0x82f18f48
	if (ctx.cr6.eq) goto loc_82F18F48;
loc_82F18F3C:
	// srawi r11,r7,31
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7FFFFFFF) != 0);
	ctx.r11.s64 = ctx.r7.s32 >> 31;
	// xor r7,r7,r11
	ctx.r7.u64 = ctx.r7.u64 ^ ctx.r11.u64;
	// subf r7,r11,r7
	ctx.r7.s64 = ctx.r7.s64 - ctx.r11.s64;
loc_82F18F48:
	// lwz r31,372(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 372);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne cr6,0x82f18f64
	if (!ctx.cr6.eq) goto loc_82F18F64;
	// cmplwi cr6,r19,0
	ctx.cr6.compare<uint32_t>(ctx.r19.u32, 0, ctx.xer);
	// beq cr6,0x82f18f70
	if (ctx.cr6.eq) goto loc_82F18F70;
	// cmplwi cr6,r19,3
	ctx.cr6.compare<uint32_t>(ctx.r19.u32, 3, ctx.xer);
	// beq cr6,0x82f18f70
	if (ctx.cr6.eq) goto loc_82F18F70;
loc_82F18F64:
	// srawi r11,r9,31
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7FFFFFFF) != 0);
	ctx.r11.s64 = ctx.r9.s32 >> 31;
	// xor r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 ^ ctx.r11.u64;
	// subf r9,r11,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r11.s64;
loc_82F18F70:
	// lis r11,20529
	ctx.r11.s64 = 1345388544;
	// lis r6,12849
	ctx.r6.s64 = 842072064;
	// ori r11,r11,13401
	ctx.r11.u64 = ctx.r11.u64 | 13401;
	// ori r20,r6,22105
	ctx.r20.u64 = ctx.r6.u64 | 22105;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplw cr6,r19,r11
	ctx.cr6.compare<uint32_t>(ctx.r19.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82f19234
	if (ctx.cr6.gt) goto loc_82F19234;
	// beq cr6,0x82f192f0
	if (ctx.cr6.eq) goto loc_82F192F0;
	// cmplw cr6,r19,r20
	ctx.cr6.compare<uint32_t>(ctx.r19.u32, ctx.r20.u32, ctx.xer);
	// bgt cr6,0x82f19170
	if (ctx.cr6.gt) goto loc_82F19170;
	// beq cr6,0x82f18fc0
	if (ctx.cr6.eq) goto loc_82F18FC0;
	// cmplwi cr6,r19,0
	ctx.cr6.compare<uint32_t>(ctx.r19.u32, 0, ctx.xer);
	// beq cr6,0x82f19120
	if (ctx.cr6.eq) goto loc_82F19120;
	// cmplwi cr6,r19,3
	ctx.cr6.compare<uint32_t>(ctx.r19.u32, 3, ctx.xer);
	// beq cr6,0x82f19120
	if (ctx.cr6.eq) goto loc_82F19120;
	// lis r11,12338
	ctx.r11.s64 = 808583168;
	// ori r11,r11,13385
	ctx.r11.u64 = ctx.r11.u64 | 13385;
	// cmplw cr6,r19,r11
	ctx.cr6.compare<uint32_t>(ctx.r19.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82f191a0
	if (!ctx.cr6.eq) goto loc_82F191A0;
loc_82F18FC0:
	// srawi r8,r24,1
	ctx.xer.ca = (ctx.r24.s32 < 0) & ((ctx.r24.u32 & 0x1) != 0);
	ctx.r8.s64 = ctx.r24.s32 >> 1;
	// lwz r17,332(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + 332);
	// lwz r16,340(r1)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r1.u32 + 340);
	// li r11,20
	ctx.r11.s64 = 20;
	// addze r31,r8
	temp.s64 = ctx.r8.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r31.s64 = temp.s64;
	// lwz r29,316(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 316);
	// srawi r6,r21,1
	ctx.xer.ca = (ctx.r21.s32 < 0) & ((ctx.r21.u32 & 0x1) != 0);
	ctx.r6.s64 = ctx.r21.s32 >> 1;
	// lwz r28,308(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 308);
	// lwz r26,324(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 324);
	// addze r30,r6
	temp.s64 = ctx.r6.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r6.u32;
	ctx.r30.s64 = temp.s64;
	// srawi r3,r17,1
	ctx.xer.ca = (ctx.r17.s32 < 0) & ((ctx.r17.u32 & 0x1) != 0);
	ctx.r3.s64 = ctx.r17.s32 >> 1;
	// addze r18,r3
	temp.s64 = ctx.r3.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r3.u32;
	ctx.r18.s64 = temp.s64;
	// srawi r8,r16,1
	ctx.xer.ca = (ctx.r16.s32 < 0) & ((ctx.r16.u32 & 0x1) != 0);
	ctx.r8.s64 = ctx.r16.s32 >> 1;
	// addze r15,r8
	temp.s64 = ctx.r8.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r15.s64 = temp.s64;
	// srawi r6,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r6.s64 = ctx.r10.s32 >> 1;
	// addze r8,r6
	temp.s64 = ctx.r6.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r6.u32;
	ctx.r8.s64 = temp.s64;
	// srawi r3,r29,1
	ctx.xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0x1) != 0);
	ctx.r3.s64 = ctx.r29.s32 >> 1;
	// addze r6,r3
	temp.s64 = ctx.r3.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r3.u32;
	ctx.r6.s64 = temp.s64;
	// srawi r3,r28,1
	ctx.xer.ca = (ctx.r28.s32 < 0) & ((ctx.r28.u32 & 0x1) != 0);
	ctx.r3.s64 = ctx.r28.s32 >> 1;
	// addze r27,r3
	temp.s64 = ctx.r3.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r3.u32;
	ctx.r27.s64 = temp.s64;
	// srawi r3,r26,1
	ctx.xer.ca = (ctx.r26.s32 < 0) & ((ctx.r26.u32 & 0x1) != 0);
	ctx.r3.s64 = ctx.r26.s32 >> 1;
loc_82F19014:
	// addze r25,r3
	temp.s64 = ctx.r3.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r3.u32;
	ctx.r25.s64 = temp.s64;
loc_82F19018:
	// mullw r7,r24,r7
	ctx.r7.s64 = int64_t(ctx.r24.s32) * int64_t(ctx.r7.s32);
	// mullw r23,r11,r7
	ctx.r23.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// mullw r3,r21,r9
	ctx.r3.s64 = int64_t(ctx.r21.s32) * int64_t(ctx.r9.s32);
	// srawi r9,r23,4
	ctx.xer.ca = (ctx.r23.s32 < 0) & ((ctx.r23.u32 & 0xF) != 0);
	ctx.r9.s64 = ctx.r23.s32 >> 4;
	// mullw r11,r11,r3
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r3.s32);
	// addze r22,r9
	temp.s64 = ctx.r9.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r22.s64 = temp.s64;
	// mullw r9,r27,r31
	ctx.r9.s64 = int64_t(ctx.r27.s32) * int64_t(ctx.r31.s32);
	// srawi r27,r11,4
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xF) != 0);
	ctx.r27.s64 = ctx.r11.s32 >> 4;
	// mullw r11,r25,r30
	ctx.r11.s64 = int64_t(ctx.r25.s32) * int64_t(ctx.r30.s32);
	// add r25,r9,r7
	ctx.r25.u64 = ctx.r9.u64 + ctx.r7.u64;
	// addze r23,r27
	temp.s64 = ctx.r27.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r27.u32;
	ctx.r23.s64 = temp.s64;
	// add r7,r22,r9
	ctx.r7.u64 = ctx.r22.u64 + ctx.r9.u64;
	// add r9,r11,r3
	ctx.r9.u64 = ctx.r11.u64 + ctx.r3.u64;
	// mullw r27,r21,r26
	ctx.r27.s64 = int64_t(ctx.r21.s32) * int64_t(ctx.r26.s32);
	// mullw r28,r24,r28
	ctx.r28.s64 = int64_t(ctx.r24.s32) * int64_t(ctx.r28.s32);
	// add r11,r23,r11
	ctx.r11.u64 = ctx.r23.u64 + ctx.r11.u64;
	// add r3,r25,r8
	ctx.r3.u64 = ctx.r25.u64 + ctx.r8.u64;
	// add r7,r7,r8
	ctx.r7.u64 = ctx.r7.u64 + ctx.r8.u64;
	// add r28,r28,r5
	ctx.r28.u64 = ctx.r28.u64 + ctx.r5.u64;
	// add r8,r27,r4
	ctx.r8.u64 = ctx.r27.u64 + ctx.r4.u64;
	// add r9,r9,r6
	ctx.r9.u64 = ctx.r9.u64 + ctx.r6.u64;
	// add r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 + ctx.r6.u64;
	// add r25,r28,r10
	ctx.r25.u64 = ctx.r28.u64 + ctx.r10.u64;
	// add r23,r8,r29
	ctx.r23.u64 = ctx.r8.u64 + ctx.r29.u64;
	// add r28,r3,r5
	ctx.r28.u64 = ctx.r3.u64 + ctx.r5.u64;
	// add r27,r7,r5
	ctx.r27.u64 = ctx.r7.u64 + ctx.r5.u64;
	// add r29,r9,r4
	ctx.r29.u64 = ctx.r9.u64 + ctx.r4.u64;
	// add r26,r11,r4
	ctx.r26.u64 = ctx.r11.u64 + ctx.r4.u64;
	// cmplw cr6,r19,r20
	ctx.cr6.compare<uint32_t>(ctx.r19.u32, ctx.r20.u32, ctx.xer);
	// bne cr6,0x82f190a8
	if (!ctx.cr6.eq) goto loc_82F190A8;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// mr r28,r27
	ctx.r28.u64 = ctx.r27.u64;
	// mr r29,r26
	ctx.r29.u64 = ctx.r26.u64;
	// mr r27,r11
	ctx.r27.u64 = ctx.r11.u64;
	// mr r26,r10
	ctx.r26.u64 = ctx.r10.u64;
loc_82F190A8:
	// cmpwi cr6,r16,0
	ctx.cr6.compare<int32_t>(ctx.r16.s32, 0, ctx.xer);
	// ble cr6,0x82f190d4
	if (!ctx.cr6.gt) goto loc_82F190D4;
	// mr r22,r16
	ctx.r22.u64 = ctx.r16.u64;
loc_82F190B4:
	// mr r5,r17
	ctx.r5.u64 = ctx.r17.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82fa77c0
	ctx.lr = 0x82F190C4;
	sub_82FA77C0(ctx, base);
	// addic. r22,r22,-1
	ctx.xer.ca = ctx.r22.u32 > 0;
	ctx.r22.s64 = ctx.r22.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// add r25,r25,r24
	ctx.r25.u64 = ctx.r25.u64 + ctx.r24.u64;
	// add r23,r23,r21
	ctx.r23.u64 = ctx.r23.u64 + ctx.r21.u64;
	// bne 0x82f190b4
	if (!ctx.cr0.eq) goto loc_82F190B4;
loc_82F190D4:
	// cmpwi cr6,r15,0
	ctx.cr6.compare<int32_t>(ctx.r15.s32, 0, ctx.xer);
	// ble cr6,0x82f19428
	if (!ctx.cr6.gt) goto loc_82F19428;
	// mr r25,r15
	ctx.r25.u64 = ctx.r15.u64;
loc_82F190E0:
	// mr r5,r18
	ctx.r5.u64 = ctx.r18.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82fa77c0
	ctx.lr = 0x82F190F0;
	sub_82FA77C0(ctx, base);
	// mr r5,r18
	ctx.r5.u64 = ctx.r18.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// add r28,r31,r28
	ctx.r28.u64 = ctx.r31.u64 + ctx.r28.u64;
	// add r29,r30,r29
	ctx.r29.u64 = ctx.r30.u64 + ctx.r29.u64;
	// bl 0x82fa77c0
	ctx.lr = 0x82F19108;
	sub_82FA77C0(ctx, base);
	// addic. r25,r25,-1
	ctx.xer.ca = ctx.r25.u32 > 0;
	ctx.r25.s64 = ctx.r25.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// add r27,r31,r27
	ctx.r27.u64 = ctx.r31.u64 + ctx.r27.u64;
	// add r26,r30,r26
	ctx.r26.u64 = ctx.r30.u64 + ctx.r26.u64;
	// bne 0x82f190e0
	if (!ctx.cr0.eq) goto loc_82F190E0;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x82fa7694
	__restgprlr_15(ctx, base);
	return;
loc_82F19120:
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x82f19138
	if (ctx.cr6.eq) goto loc_82F19138;
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// bgt cr6,0x82f19144
	if (ctx.cr6.gt) goto loc_82F19144;
	// li r6,-1
	ctx.r6.s64 = -1;
	// b 0x82f19148
	goto loc_82F19148;
loc_82F19138:
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// li r6,-1
	ctx.r6.s64 = -1;
	// bgt cr6,0x82f19148
	if (ctx.cr6.gt) goto loc_82F19148;
loc_82F19144:
	// li r6,1
	ctx.r6.s64 = 1;
loc_82F19148:
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq cr6,0x82f19160
	if (ctx.cr6.eq) goto loc_82F19160;
	// cmpwi cr6,r21,0
	ctx.cr6.compare<int32_t>(ctx.r21.s32, 0, ctx.xer);
	// ble cr6,0x82f19168
	if (!ctx.cr6.gt) goto loc_82F19168;
loc_82F19158:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82f191a0
	goto loc_82F191A0;
loc_82F19160:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// ble cr6,0x82f19158
	if (!ctx.cr6.gt) goto loc_82F19158;
loc_82F19168:
	// li r3,-1
	ctx.r3.s64 = -1;
	// b 0x82f191a0
	goto loc_82F191A0;
loc_82F19170:
	// lis r11,12889
	ctx.r11.s64 = 844693504;
	// ori r11,r11,21849
	ctx.r11.u64 = ctx.r11.u64 | 21849;
	// cmplw cr6,r19,r11
	ctx.cr6.compare<uint32_t>(ctx.r19.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82f192f0
	if (ctx.cr6.eq) goto loc_82F192F0;
	// lis r11,14677
	ctx.r11.s64 = 961871872;
	// ori r11,r11,22105
	ctx.r11.u64 = ctx.r11.u64 | 22105;
	// cmplw cr6,r19,r11
	ctx.cr6.compare<uint32_t>(ctx.r19.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82f191dc
	if (ctx.cr6.eq) goto loc_82F191DC;
	// lis r11,16729
	ctx.r11.s64 = 1096351744;
	// ori r11,r11,21846
	ctx.r11.u64 = ctx.r11.u64 | 21846;
loc_82F19198:
	// cmplw cr6,r19,r11
	ctx.cr6.compare<uint32_t>(ctx.r19.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82f192f0
	if (ctx.cr6.eq) goto loc_82F192F0;
loc_82F191A0:
	// srawi r30,r24,31
	ctx.xer.ca = (ctx.r24.s32 < 0) & ((ctx.r24.u32 & 0x7FFFFFFF) != 0);
	ctx.r30.s64 = ctx.r24.s32 >> 31;
	// lwz r11,356(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 356);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// xor r8,r24,r30
	ctx.r8.u64 = ctx.r24.u64 ^ ctx.r30.u64;
	// subf r8,r30,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r30.s64;
	// mullw r8,r8,r11
	ctx.r8.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r11.s32);
	// addi r8,r8,31
	ctx.r8.s64 = ctx.r8.s64 + 31;
	// rlwinm r8,r8,0,0,26
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFE0;
	// srawi r8,r8,3
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7) != 0);
	ctx.r8.s64 = ctx.r8.s32 >> 3;
	// addze r8,r8
	temp.s64 = ctx.r8.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r8.s64 = temp.s64;
	// mullw r26,r8,r6
	ctx.r26.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r6.s32);
	// lwz r8,308(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 308);
	// beq cr6,0x82f19320
	if (ctx.cr6.eq) goto loc_82F19320;
	// mullw r8,r26,r8
	ctx.r8.s64 = int64_t(ctx.r26.s32) * int64_t(ctx.r8.s32);
	// b 0x82f19354
	goto loc_82F19354;
loc_82F191DC:
	// srawi r8,r24,2
	ctx.xer.ca = (ctx.r24.s32 < 0) & ((ctx.r24.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r24.s32 >> 2;
	// lwz r17,332(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + 332);
	// lwz r16,340(r1)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r1.u32 + 340);
	// li r11,17
	ctx.r11.s64 = 17;
	// addze r31,r8
	temp.s64 = ctx.r8.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r31.s64 = temp.s64;
	// lwz r29,316(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 316);
	// srawi r6,r21,2
	ctx.xer.ca = (ctx.r21.s32 < 0) & ((ctx.r21.u32 & 0x3) != 0);
	ctx.r6.s64 = ctx.r21.s32 >> 2;
	// lwz r28,308(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 308);
	// lwz r26,324(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 324);
	// addze r30,r6
	temp.s64 = ctx.r6.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r6.u32;
	ctx.r30.s64 = temp.s64;
	// srawi r3,r17,2
	ctx.xer.ca = (ctx.r17.s32 < 0) & ((ctx.r17.u32 & 0x3) != 0);
	ctx.r3.s64 = ctx.r17.s32 >> 2;
	// addze r18,r3
	temp.s64 = ctx.r3.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r3.u32;
	ctx.r18.s64 = temp.s64;
	// srawi r8,r16,2
	ctx.xer.ca = (ctx.r16.s32 < 0) & ((ctx.r16.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r16.s32 >> 2;
	// addze r15,r8
	temp.s64 = ctx.r8.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r15.s64 = temp.s64;
	// srawi r6,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r6.s64 = ctx.r10.s32 >> 2;
	// addze r8,r6
	temp.s64 = ctx.r6.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r6.u32;
	ctx.r8.s64 = temp.s64;
	// srawi r3,r29,2
	ctx.xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0x3) != 0);
	ctx.r3.s64 = ctx.r29.s32 >> 2;
	// addze r6,r3
	temp.s64 = ctx.r3.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r3.u32;
	ctx.r6.s64 = temp.s64;
	// srawi r3,r28,2
	ctx.xer.ca = (ctx.r28.s32 < 0) & ((ctx.r28.u32 & 0x3) != 0);
	ctx.r3.s64 = ctx.r28.s32 >> 2;
	// addze r27,r3
	temp.s64 = ctx.r3.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r3.u32;
	ctx.r27.s64 = temp.s64;
	// srawi r3,r26,2
	ctx.xer.ca = (ctx.r26.s32 < 0) & ((ctx.r26.u32 & 0x3) != 0);
	ctx.r3.s64 = ctx.r26.s32 >> 2;
	// b 0x82f19014
	goto loc_82F19014;
loc_82F19234:
	// lis r11,21849
	ctx.r11.s64 = 1431896064;
	// ori r11,r11,22105
	ctx.r11.u64 = ctx.r11.u64 | 22105;
	// cmplw cr6,r19,r11
	ctx.cr6.compare<uint32_t>(ctx.r19.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82f192c4
	if (ctx.cr6.gt) goto loc_82F192C4;
	// beq cr6,0x82f192f0
	if (ctx.cr6.eq) goto loc_82F192F0;
	// lis r11,20532
	ctx.r11.s64 = 1345585152;
	// ori r11,r11,12850
	ctx.r11.u64 = ctx.r11.u64 | 12850;
	// cmplw cr6,r19,r11
	ctx.cr6.compare<uint32_t>(ctx.r19.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82f19274
	if (ctx.cr6.eq) goto loc_82F19274;
	// lis r11,21553
	ctx.r11.s64 = 1412497408;
	// ori r11,r11,13401
	ctx.r11.u64 = ctx.r11.u64 | 13401;
	// cmplw cr6,r19,r11
	ctx.cr6.compare<uint32_t>(ctx.r19.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82f192f0
	if (ctx.cr6.eq) goto loc_82F192F0;
	// lis r11,21554
	ctx.r11.s64 = 1412562944;
	// ori r11,r11,13401
	ctx.r11.u64 = ctx.r11.u64 | 13401;
	// b 0x82f19198
	goto loc_82F19198;
loc_82F19274:
	// srawi r8,r24,1
	ctx.xer.ca = (ctx.r24.s32 < 0) & ((ctx.r24.u32 & 0x1) != 0);
	ctx.r8.s64 = ctx.r24.s32 >> 1;
	// lwz r17,332(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + 332);
	// lwz r29,316(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 316);
	// li r11,24
	ctx.r11.s64 = 24;
	// addze r31,r8
	temp.s64 = ctx.r8.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r31.s64 = temp.s64;
	// lwz r16,340(r1)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r1.u32 + 340);
	// srawi r6,r21,1
	ctx.xer.ca = (ctx.r21.s32 < 0) & ((ctx.r21.u32 & 0x1) != 0);
	ctx.r6.s64 = ctx.r21.s32 >> 1;
	// lwz r28,308(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 308);
	// lwz r26,324(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 324);
	// mr r15,r16
	ctx.r15.u64 = ctx.r16.u64;
	// addze r30,r6
	temp.s64 = ctx.r6.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r6.u32;
	ctx.r30.s64 = temp.s64;
	// srawi r3,r17,1
	ctx.xer.ca = (ctx.r17.s32 < 0) & ((ctx.r17.u32 & 0x1) != 0);
	ctx.r3.s64 = ctx.r17.s32 >> 1;
	// mr r27,r28
	ctx.r27.u64 = ctx.r28.u64;
	// addze r18,r3
	temp.s64 = ctx.r3.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r3.u32;
	ctx.r18.s64 = temp.s64;
	// srawi r8,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r8.s64 = ctx.r10.s32 >> 1;
	// mr r25,r26
	ctx.r25.u64 = ctx.r26.u64;
	// addze r8,r8
	temp.s64 = ctx.r8.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r8.s64 = temp.s64;
	// srawi r6,r29,1
	ctx.xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0x1) != 0);
	ctx.r6.s64 = ctx.r29.s32 >> 1;
	// addze r6,r6
	temp.s64 = ctx.r6.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r6.u32;
	ctx.r6.s64 = temp.s64;
	// b 0x82f19018
	goto loc_82F19018;
loc_82F192C4:
	// lis r11,22066
	ctx.r11.s64 = 1446117376;
	// ori r11,r11,12598
	ctx.r11.u64 = ctx.r11.u64 | 12598;
	// cmplw cr6,r19,r11
	ctx.cr6.compare<uint32_t>(ctx.r19.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82f192f0
	if (ctx.cr6.eq) goto loc_82F192F0;
	// lis r11,22101
	ctx.r11.s64 = 1448411136;
	// ori r11,r11,22857
	ctx.r11.u64 = ctx.r11.u64 | 22857;
	// cmplw cr6,r19,r11
	ctx.cr6.compare<uint32_t>(ctx.r19.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82f18fc0
	if (ctx.cr6.eq) goto loc_82F18FC0;
	// lis r11,22870
	ctx.r11.s64 = 1498808320;
	// ori r11,r11,22869
	ctx.r11.u64 = ctx.r11.u64 | 22869;
	// b 0x82f19198
	goto loc_82F19198;
loc_82F192F0:
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x82f19304
	if (ctx.cr6.eq) goto loc_82F19304;
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// li r6,-1
	ctx.r6.s64 = -1;
	// ble cr6,0x82f19308
	if (!ctx.cr6.gt) goto loc_82F19308;
loc_82F19304:
	// li r6,1
	ctx.r6.s64 = 1;
loc_82F19308:
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq cr6,0x82f19158
	if (ctx.cr6.eq) goto loc_82F19158;
	// cmpwi cr6,r21,0
	ctx.cr6.compare<int32_t>(ctx.r21.s32, 0, ctx.xer);
	// ble cr6,0x82f19168
	if (!ctx.cr6.gt) goto loc_82F19168;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82f191a0
	goto loc_82F191A0;
loc_82F19320:
	// cmpwi cr6,r6,1
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 1, ctx.xer);
	// bne cr6,0x82f19330
	if (!ctx.cr6.eq) goto loc_82F19330;
	// mullw r8,r26,r8
	ctx.r8.s64 = int64_t(ctx.r26.s32) * int64_t(ctx.r8.s32);
	// b 0x82f19354
	goto loc_82F19354;
loc_82F19330:
	// srawi r30,r7,31
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7FFFFFFF) != 0);
	ctx.r30.s64 = ctx.r7.s32 >> 31;
	// subfic r6,r8,-1
	ctx.xer.ca = ctx.r8.u32 <= 4294967295;
	ctx.r6.s64 = -1 - ctx.r8.s64;
	// srawi r29,r26,31
	ctx.xer.ca = (ctx.r26.s32 < 0) & ((ctx.r26.u32 & 0x7FFFFFFF) != 0);
	ctx.r29.s64 = ctx.r26.s32 >> 31;
	// xor r7,r7,r30
	ctx.r7.u64 = ctx.r7.u64 ^ ctx.r30.u64;
	// xor r28,r26,r29
	ctx.r28.u64 = ctx.r26.u64 ^ ctx.r29.u64;
	// subf r8,r30,r7
	ctx.r8.s64 = ctx.r7.s64 - ctx.r30.s64;
	// subf r7,r29,r28
	ctx.r7.s64 = ctx.r28.s64 - ctx.r29.s64;
	// add r6,r8,r6
	ctx.r6.u64 = ctx.r8.u64 + ctx.r6.u64;
	// mullw r8,r6,r7
	ctx.r8.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r7.s32);
loc_82F19354:
	// mullw r10,r10,r11
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// srawi r10,r10,3
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 3;
	// srawi r7,r21,31
	ctx.xer.ca = (ctx.r21.s32 < 0) & ((ctx.r21.u32 & 0x7FFFFFFF) != 0);
	ctx.r7.s64 = ctx.r21.s32 >> 31;
	// add r8,r10,r8
	ctx.r8.u64 = ctx.r10.u64 + ctx.r8.u64;
	// xor r6,r21,r7
	ctx.r6.u64 = ctx.r21.u64 ^ ctx.r7.u64;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// subf r10,r7,r6
	ctx.r10.s64 = ctx.r6.s64 - ctx.r7.s64;
	// mullw r10,r10,r11
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// addi r7,r10,31
	ctx.r7.s64 = ctx.r10.s64 + 31;
	// rlwinm r6,r7,0,0,26
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFE0;
	// srawi r10,r6,3
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x7) != 0);
	ctx.r10.s64 = ctx.r6.s32 >> 3;
	// addze r7,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r7.s64 = temp.s64;
	// lwz r10,324(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 324);
	// mullw r27,r7,r3
	ctx.r27.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r3.s32);
	// beq cr6,0x82f19398
	if (ctx.cr6.eq) goto loc_82F19398;
	// mullw r9,r27,r10
	ctx.r9.s64 = int64_t(ctx.r27.s32) * int64_t(ctx.r10.s32);
	// b 0x82f193cc
	goto loc_82F193CC;
loc_82F19398:
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x82f193a8
	if (!ctx.cr6.eq) goto loc_82F193A8;
	// mullw r9,r27,r10
	ctx.r9.s64 = int64_t(ctx.r27.s32) * int64_t(ctx.r10.s32);
	// b 0x82f193cc
	goto loc_82F193CC;
loc_82F193A8:
	// srawi r6,r9,31
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7FFFFFFF) != 0);
	ctx.r6.s64 = ctx.r9.s32 >> 31;
	// subfic r7,r10,-1
	ctx.xer.ca = ctx.r10.u32 <= 4294967295;
	ctx.r7.s64 = -1 - ctx.r10.s64;
	// srawi r3,r27,31
	ctx.xer.ca = (ctx.r27.s32 < 0) & ((ctx.r27.u32 & 0x7FFFFFFF) != 0);
	ctx.r3.s64 = ctx.r27.s32 >> 31;
	// xor r10,r9,r6
	ctx.r10.u64 = ctx.r9.u64 ^ ctx.r6.u64;
	// xor r9,r27,r3
	ctx.r9.u64 = ctx.r27.u64 ^ ctx.r3.u64;
	// subf r10,r6,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r6.s64;
	// subf r6,r3,r9
	ctx.r6.s64 = ctx.r9.s64 - ctx.r3.s64;
	// add r3,r10,r7
	ctx.r3.u64 = ctx.r10.u64 + ctx.r7.u64;
	// mullw r9,r3,r6
	ctx.r9.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r6.s32);
loc_82F193CC:
	// lwz r10,332(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 332);
	// add r31,r8,r5
	ctx.r31.u64 = ctx.r8.u64 + ctx.r5.u64;
	// lwz r8,316(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 316);
	// mullw r10,r10,r11
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// lwz r29,340(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 340);
	// mullw r7,r8,r11
	ctx.r7.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r11.s32);
	// addi r6,r10,31
	ctx.r6.s64 = ctx.r10.s64 + 31;
	// srawi r11,r7,3
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r7.s32 >> 3;
	// rlwinm r5,r6,0,0,26
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFFFFE0;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// srawi r3,r5,3
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x7) != 0);
	ctx.r3.s64 = ctx.r5.s32 >> 3;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// add r30,r11,r4
	ctx.r30.u64 = ctx.r11.u64 + ctx.r4.u64;
	// addze r28,r3
	temp.s64 = ctx.r3.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r3.u32;
	ctx.r28.s64 = temp.s64;
	// ble cr6,0x82f19428
	if (!ctx.cr6.gt) goto loc_82F19428;
loc_82F19408:
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82fa77c0
	ctx.lr = 0x82F19418;
	sub_82FA77C0(ctx, base);
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// add r31,r26,r31
	ctx.r31.u64 = ctx.r26.u64 + ctx.r31.u64;
	// add r30,r27,r30
	ctx.r30.u64 = ctx.r27.u64 + ctx.r30.u64;
	// bne 0x82f19408
	if (!ctx.cr0.eq) goto loc_82F19408;
loc_82F19428:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x82fa7694
	__restgprlr_15(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F19430"))) PPC_WEAK_FUNC(sub_82F19430);
PPC_FUNC_IMPL(__imp__sub_82F19430) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bne cr6,0x82f19530
	if (!ctx.cr6.eq) goto loc_82F19530;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82f19520
	if (ctx.cr6.eq) goto loc_82F19520;
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// beq cr6,0x82f19520
	if (ctx.cr6.eq) goto loc_82F19520;
	// lis r11,16729
	ctx.r11.s64 = 1096351744;
	// ori r10,r11,21846
	ctx.r10.u64 = ctx.r11.u64 | 21846;
	// cmplw cr6,r3,r10
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82f19520
	if (ctx.cr6.eq) goto loc_82F19520;
	// lis r11,12889
	ctx.r11.s64 = 844693504;
	// ori r10,r11,21849
	ctx.r10.u64 = ctx.r11.u64 | 21849;
	// cmpw cr6,r3,r10
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x82f19528
	if (ctx.cr6.eq) goto loc_82F19528;
	// lis r11,22870
	ctx.r11.s64 = 1498808320;
	// ori r10,r11,22869
	ctx.r10.u64 = ctx.r11.u64 | 22869;
	// cmpw cr6,r3,r10
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x82f19528
	if (ctx.cr6.eq) goto loc_82F19528;
	// lis r11,20532
	ctx.r11.s64 = 1345585152;
	// ori r10,r11,12850
	ctx.r10.u64 = ctx.r11.u64 | 12850;
	// cmplw cr6,r3,r10
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82f19528
	if (ctx.cr6.eq) goto loc_82F19528;
	// lis r11,22066
	ctx.r11.s64 = 1446117376;
	// ori r10,r11,12598
	ctx.r10.u64 = ctx.r11.u64 | 12598;
	// cmplw cr6,r3,r10
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82f19528
	if (ctx.cr6.eq) goto loc_82F19528;
	// lis r11,22101
	ctx.r11.s64 = 1448411136;
	// ori r10,r11,22857
	ctx.r10.u64 = ctx.r11.u64 | 22857;
	// cmpw cr6,r3,r10
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x82f19508
	if (ctx.cr6.eq) goto loc_82F19508;
	// lis r11,12849
	ctx.r11.s64 = 842072064;
	// ori r10,r11,22105
	ctx.r10.u64 = ctx.r11.u64 | 22105;
	// cmpw cr6,r3,r10
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x82f19508
	if (ctx.cr6.eq) goto loc_82F19508;
	// lis r11,12338
	ctx.r11.s64 = 808583168;
	// ori r10,r11,13385
	ctx.r10.u64 = ctx.r11.u64 | 13385;
	// cmpw cr6,r3,r10
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x82f19508
	if (ctx.cr6.eq) goto loc_82F19508;
	// lis r11,14677
	ctx.r11.s64 = 961871872;
	// ori r10,r11,22105
	ctx.r10.u64 = ctx.r11.u64 | 22105;
	// cmpw cr6,r3,r10
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x82f19520
	if (!ctx.cr6.eq) goto loc_82F19520;
	// srawi r11,r4,2
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r4.s32 >> 2;
	// addze r10,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r10.s64 = temp.s64;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// subf. r8,r9,r4
	ctx.r8.s64 = ctx.r4.s64 - ctx.r9.s64;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x82f19500
	if (!ctx.cr0.eq) goto loc_82F19500;
	// srawi r11,r5,2
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r5.s32 >> 2;
	// addze r10,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r10.s64 = temp.s64;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// subf. r8,r9,r5
	ctx.r8.s64 = ctx.r5.s64 - ctx.r9.s64;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x82f19520
	if (ctx.cr0.eq) goto loc_82F19520;
loc_82F19500:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_82F19508:
	// clrlwi r11,r4,31
	ctx.r11.u64 = ctx.r4.u32 & 0x1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82f19500
	if (!ctx.cr6.eq) goto loc_82F19500;
	// clrlwi r11,r5,31
	ctx.r11.u64 = ctx.r5.u32 & 0x1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82f19500
	if (!ctx.cr6.eq) goto loc_82F19500;
loc_82F19520:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82F19528:
	// clrlwi r3,r4,31
	ctx.r3.u64 = ctx.r4.u32 & 0x1;
	// blr 
	return;
loc_82F19530:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82f1962c
	if (ctx.cr6.eq) goto loc_82F1962C;
	// cmpwi cr6,r3,3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 3, ctx.xer);
	// beq cr6,0x82f1962c
	if (ctx.cr6.eq) goto loc_82F1962C;
	// lis r11,16729
	ctx.r11.s64 = 1096351744;
	// ori r10,r11,21846
	ctx.r10.u64 = ctx.r11.u64 | 21846;
	// cmplw cr6,r3,r10
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82f1962c
	if (ctx.cr6.eq) goto loc_82F1962C;
	// lis r11,12889
	ctx.r11.s64 = 844693504;
	// ori r10,r11,21849
	ctx.r10.u64 = ctx.r11.u64 | 21849;
	// cmpw cr6,r3,r10
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x82f19608
	if (ctx.cr6.eq) goto loc_82F19608;
	// lis r11,22870
	ctx.r11.s64 = 1498808320;
	// ori r10,r11,22869
	ctx.r10.u64 = ctx.r11.u64 | 22869;
	// cmpw cr6,r3,r10
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x82f19608
	if (ctx.cr6.eq) goto loc_82F19608;
	// lis r11,22066
	ctx.r11.s64 = 1446117376;
	// ori r10,r11,12598
	ctx.r10.u64 = ctx.r11.u64 | 12598;
	// cmplw cr6,r3,r10
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82f19608
	if (ctx.cr6.eq) goto loc_82F19608;
	// lis r11,22101
	ctx.r11.s64 = 1448411136;
	// ori r10,r11,22857
	ctx.r10.u64 = ctx.r11.u64 | 22857;
	// cmpw cr6,r3,r10
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x82f195e4
	if (ctx.cr6.eq) goto loc_82F195E4;
	// lis r11,12338
	ctx.r11.s64 = 808583168;
	// ori r10,r11,13385
	ctx.r10.u64 = ctx.r11.u64 | 13385;
	// cmpw cr6,r3,r10
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x82f195e4
	if (ctx.cr6.eq) goto loc_82F195E4;
	// lis r11,12849
	ctx.r11.s64 = 842072064;
	// ori r10,r11,22105
	ctx.r10.u64 = ctx.r11.u64 | 22105;
	// cmpw cr6,r3,r10
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x82f195e4
	if (ctx.cr6.eq) goto loc_82F195E4;
	// lis r11,14677
	ctx.r11.s64 = 961871872;
	// ori r10,r11,22105
	ctx.r10.u64 = ctx.r11.u64 | 22105;
	// cmpw cr6,r3,r10
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x82f19520
	if (!ctx.cr6.eq) goto loc_82F19520;
	// clrlwi r11,r4,30
	ctx.r11.u64 = ctx.r4.u32 & 0x3;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82f195dc
	if (!ctx.cr6.eq) goto loc_82F195DC;
	// clrlwi r11,r5,29
	ctx.r11.u64 = ctx.r5.u32 & 0x7;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
loc_82F195DC:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_82F195E4:
	// clrlwi r11,r4,31
	ctx.r11.u64 = ctx.r4.u32 & 0x1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82f19600
	if (!ctx.cr6.eq) goto loc_82F19600;
	// clrlwi r11,r5,30
	ctx.r11.u64 = ctx.r5.u32 & 0x3;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
loc_82F19600:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_82F19608:
	// clrlwi r11,r4,31
	ctx.r11.u64 = ctx.r4.u32 & 0x1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82f19624
	if (!ctx.cr6.eq) goto loc_82F19624;
	// clrlwi r11,r5,31
	ctx.r11.u64 = ctx.r5.u32 & 0x1;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
loc_82F19624:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_82F1962C:
	// clrlwi r3,r5,31
	ctx.r3.u64 = ctx.r5.u32 & 0x1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F19634"))) PPC_WEAK_FUNC(sub_82F19634);
PPC_FUNC_IMPL(__imp__sub_82F19634) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F19638"))) PPC_WEAK_FUNC(sub_82F19638);
PPC_FUNC_IMPL(__imp__sub_82F19638) {
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
	// bne cr6,0x82f1966c
	if (!ctx.cr6.eq) goto loc_82F1966C;
	// li r3,1
	ctx.r3.s64 = 1;
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
loc_82F1966C:
	// lwz r11,344(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 344);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82f19694
	if (!ctx.cr6.eq) goto loc_82F19694;
	// bl 0x82f18ea0
	ctx.lr = 0x82F19680;
	sub_82F18EA0(ctx, base);
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
loc_82F19694:
	// bl 0x82f18b00
	ctx.lr = 0x82F19698;
	sub_82F18B00(ctx, base);
	// lis r4,9356
	ctx.r4.s64 = 613154816;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r4,r4,32768
	ctx.r4.u64 = ctx.r4.u64 | 32768;
	// bl 0x82691460
	ctx.lr = 0x82F196A8;
	sub_82691460(ctx, base);
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

__attribute__((alias("__imp__sub_82F196C0"))) PPC_WEAK_FUNC(sub_82F196C0);
PPC_FUNC_IMPL(__imp__sub_82F196C0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82f196d4
	if (!ctx.cr6.eq) goto loc_82F196D4;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82F196D4:
	// lis r10,22101
	ctx.r10.s64 = 1448411136;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// ori r9,r10,22857
	ctx.r9.u64 = ctx.r10.u64 | 22857;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82f19748
	if (ctx.cr6.eq) goto loc_82F19748;
	// lis r10,12338
	ctx.r10.s64 = 808583168;
	// ori r9,r10,13385
	ctx.r9.u64 = ctx.r10.u64 | 13385;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82f19748
	if (ctx.cr6.eq) goto loc_82F19748;
	// lis r10,12849
	ctx.r10.s64 = 842072064;
	// ori r9,r10,22105
	ctx.r9.u64 = ctx.r10.u64 | 22105;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82f19748
	if (ctx.cr6.eq) goto loc_82F19748;
	// lis r10,14677
	ctx.r10.s64 = 961871872;
	// ori r9,r10,22105
	ctx.r9.u64 = ctx.r10.u64 | 22105;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82f19748
	if (ctx.cr6.eq) goto loc_82F19748;
	// lis r10,12849
	ctx.r10.s64 = 842072064;
	// ori r9,r10,22094
	ctx.r9.u64 = ctx.r10.u64 | 22094;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82f19740
	if (ctx.cr6.eq) goto loc_82F19740;
	// lis r10,12593
	ctx.r10.s64 = 825294848;
	// ori r9,r10,22094
	ctx.r9.u64 = ctx.r10.u64 | 22094;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82f19740
	if (ctx.cr6.eq) goto loc_82F19740;
	// li r3,2
	ctx.r3.s64 = 2;
	// blr 
	return;
loc_82F19740:
	// li r3,3
	ctx.r3.s64 = 3;
	// blr 
	return;
loc_82F19748:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F19750"))) PPC_WEAK_FUNC(sub_82F19750);
PPC_FUNC_IMPL(__imp__sub_82F19750) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lis r9,22101
	ctx.r9.s64 = 1448411136;
	// ori r8,r9,22857
	ctx.r8.u64 = ctx.r9.u64 | 22857;
	// lwz r11,16(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// lhz r10,14(r10)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r10.u32 + 14);
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// beq cr6,0x82f197ac
	if (ctx.cr6.eq) goto loc_82F197AC;
	// lis r9,12338
	ctx.r9.s64 = 808583168;
	// ori r8,r9,13385
	ctx.r8.u64 = ctx.r9.u64 | 13385;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// beq cr6,0x82f197ac
	if (ctx.cr6.eq) goto loc_82F197AC;
	// lis r9,12849
	ctx.r9.s64 = 842072064;
	// ori r8,r9,22105
	ctx.r8.u64 = ctx.r9.u64 | 22105;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// beq cr6,0x82f197ac
	if (ctx.cr6.eq) goto loc_82F197AC;
	// lis r9,12849
	ctx.r9.s64 = 842072064;
	// ori r8,r9,22094
	ctx.r8.u64 = ctx.r9.u64 | 22094;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// beq cr6,0x82f197ac
	if (ctx.cr6.eq) goto loc_82F197AC;
	// lis r9,12593
	ctx.r9.s64 = 825294848;
	// ori r8,r9,22094
	ctx.r8.u64 = ctx.r9.u64 | 22094;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x82f197cc
	if (!ctx.cr6.eq) goto loc_82F197CC;
loc_82F197AC:
	// mullw r11,r10,r4
	ctx.r11.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r4.s32);
	// mullw r10,r11,r5
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r5.s32);
	// srawi r9,r10,3
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7) != 0);
	ctx.r9.s64 = ctx.r10.s32 >> 3;
	// addze r11,r9
	temp.s64 = ctx.r9.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r11.s64 = temp.s64;
	// srawi r10,r11,31
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFFFFFF) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 31;
	// xor r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 ^ ctx.r10.u64;
	// subf r3,r10,r9
	ctx.r3.s64 = ctx.r9.s64 - ctx.r10.s64;
	// blr 
	return;
loc_82F197CC:
	// mullw r11,r10,r4
	ctx.r11.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r4.s32);
	// srawi r10,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 3;
	// addze r11,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r11.s64 = temp.s64;
	// addi r9,r11,3
	ctx.r9.s64 = ctx.r11.s64 + 3;
	// srawi r8,r9,2
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 2;
	// addze r7,r8
	temp.s64 = ctx.r8.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r7.s64 = temp.s64;
	// mullw r6,r7,r5
	ctx.r6.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r5.s32);
	// rlwinm r11,r6,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// srawi r10,r11,31
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFFFFFF) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 31;
	// xor r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 ^ ctx.r10.u64;
	// subf r3,r10,r9
	ctx.r3.s64 = ctx.r9.s64 - ctx.r10.s64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F197FC"))) PPC_WEAK_FUNC(sub_82F197FC);
PPC_FUNC_IMPL(__imp__sub_82F197FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F19800"))) PPC_WEAK_FUNC(sub_82F19800);
PPC_FUNC_IMPL(__imp__sub_82F19800) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x82F19808;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,36(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r9,344(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 344);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// stw r10,348(r3)
	PPC_STORE_U32(ctx.r3.u32 + 348, ctx.r10.u32);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x82f1988c
	if (!ctx.cr6.eq) goto loc_82F1988C;
	// lwz r10,16(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// lwz r9,40(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x82f1984c
	if (!ctx.cr6.eq) goto loc_82F1984C;
	// lwz r10,20(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// lwz r9,44(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// beq cr6,0x82f19854
	if (ctx.cr6.eq) goto loc_82F19854;
loc_82F1984C:
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r10,348(r31)
	PPC_STORE_U32(ctx.r31.u32 + 348, ctx.r10.u32);
loc_82F19854:
	// lwz r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r9,48(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x82f19870
	if (!ctx.cr6.eq) goto loc_82F19870;
	// lwz r10,52(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x82f1987c
	if (ctx.cr6.eq) goto loc_82F1987C;
loc_82F19870:
	// lwz r11,348(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 348);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// stw r11,348(r31)
	PPC_STORE_U32(ctx.r31.u32 + 348, ctx.r11.u32);
loc_82F1987C:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r11,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r11.u32);
	// b 0x82f198b0
	goto loc_82F198B0;
loc_82F1988C:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// li r10,3
	ctx.r10.s64 = 3;
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// srawi r8,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r8.s64 = ctx.r11.s32 >> 1;
	// stw r10,348(r31)
	PPC_STORE_U32(ctx.r31.u32 + 348, ctx.r10.u32);
	// addze r7,r8
	temp.s64 = ctx.r8.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r7.s64 = temp.s64;
	// srawi r6,r30,1
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0x1) != 0);
	ctx.r6.s64 = ctx.r30.s32 >> 1;
	// stw r7,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r7.u32);
	// addze r30,r6
	temp.s64 = ctx.r6.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r6.u32;
	ctx.r30.s64 = temp.s64;
loc_82F198B0:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r29,4(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r5,8(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// lwz r4,4(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// bl 0x82f19750
	ctx.lr = 0x82F198D0;
	sub_82F19750(ctx, base);
	// stw r3,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r3.u32);
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r9,340(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 340);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// lwz r6,32(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// lwz r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r5,8(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// beq cr6,0x82f19908
	if (ctx.cr6.eq) goto loc_82F19908;
	// addi r3,r31,204
	ctx.r3.s64 = ctx.r31.s64 + 204;
	// bl 0x82d0d6f0
	ctx.lr = 0x82F198FC;
	sub_82D0D6F0(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
loc_82F19908:
	// addi r3,r31,64
	ctx.r3.s64 = ctx.r31.s64 + 64;
	// bl 0x82f6a680
	ctx.lr = 0x82F19910;
	sub_82F6A680(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F1991C"))) PPC_WEAK_FUNC(sub_82F1991C);
PPC_FUNC_IMPL(__imp__sub_82F1991C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F19920"))) PPC_WEAK_FUNC(sub_82F19920);
PPC_FUNC_IMPL(__imp__sub_82F19920) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7664
	ctx.lr = 0x82F19928;
	__savegprlr_23(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// mr r24,r5
	ctx.r24.u64 = ctx.r5.u64;
	// mr r23,r6
	ctx.r23.u64 = ctx.r6.u64;
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82f19954
	if (!ctx.cr6.eq) goto loc_82F19954;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82fa76b4
	__restgprlr_23(ctx, base);
	return;
loc_82F19954:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x82f19998
	if (ctx.cr6.eq) goto loc_82F19998;
	// lwz r29,16(r27)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r27.u32 + 16);
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// lhz r28,14(r27)
	ctx.r28.u64 = PPC_LOAD_U16(ctx.r27.u32 + 14);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82f19430
	ctx.lr = 0x82F19978;
	sub_82F19430(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82f19998
	if (!ctx.cr6.eq) goto loc_82F19998;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// beq cr6,0x82f19b24
	if (ctx.cr6.eq) goto loc_82F19B24;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne cr6,0x82f199ac
	if (!ctx.cr6.eq) goto loc_82F199AC;
	// cmplwi cr6,r28,32
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 32, ctx.xer);
	// beq cr6,0x82f19a1c
	if (ctx.cr6.eq) goto loc_82F19A1C;
loc_82F19998:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r11.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82fa76b4
	__restgprlr_23(ctx, base);
	return;
loc_82F199AC:
	// lis r11,22870
	ctx.r11.s64 = 1498808320;
	// ori r10,r11,22869
	ctx.r10.u64 = ctx.r11.u64 | 22869;
	// cmpw cr6,r29,r10
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x82f19a1c
	if (ctx.cr6.eq) goto loc_82F19A1C;
	// lis r11,12889
	ctx.r11.s64 = 844693504;
	// ori r10,r11,21849
	ctx.r10.u64 = ctx.r11.u64 | 21849;
	// cmpw cr6,r29,r10
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x82f19a1c
	if (ctx.cr6.eq) goto loc_82F19A1C;
	// lis r11,22101
	ctx.r11.s64 = 1448411136;
	// ori r10,r11,22857
	ctx.r10.u64 = ctx.r11.u64 | 22857;
	// cmpw cr6,r29,r10
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x82f19a1c
	if (ctx.cr6.eq) goto loc_82F19A1C;
	// lis r11,12338
	ctx.r11.s64 = 808583168;
	// ori r10,r11,13385
	ctx.r10.u64 = ctx.r11.u64 | 13385;
	// cmpw cr6,r29,r10
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x82f19a1c
	if (ctx.cr6.eq) goto loc_82F19A1C;
	// lis r11,12849
	ctx.r11.s64 = 842072064;
	// ori r10,r11,22105
	ctx.r10.u64 = ctx.r11.u64 | 22105;
	// cmpw cr6,r29,r10
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x82f19a1c
	if (ctx.cr6.eq) goto loc_82F19A1C;
	// lis r11,16729
	ctx.r11.s64 = 1096351744;
	// ori r10,r11,21846
	ctx.r10.u64 = ctx.r11.u64 | 21846;
	// cmplw cr6,r29,r10
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82f19a1c
	if (ctx.cr6.eq) goto loc_82F19A1C;
	// lis r11,20532
	ctx.r11.s64 = 1345585152;
	// ori r10,r11,12850
	ctx.r10.u64 = ctx.r11.u64 | 12850;
	// cmplw cr6,r29,r10
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82f19a78
	if (!ctx.cr6.eq) goto loc_82F19A78;
loc_82F19A1C:
	// lis r11,9356
	ctx.r11.s64 = 613154816;
	// li r3,360
	ctx.r3.s64 = 360;
	// ori r30,r11,32768
	ctx.r30.u64 = ctx.r11.u64 | 32768;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82691410
	ctx.lr = 0x82F19A30;
	sub_82691410(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82f19998
	if (ctx.cr6.eq) goto loc_82F19998;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82f18a60
	ctx.lr = 0x82F19A40;
	sub_82F18A60(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82f19998
	if (ctx.cr6.eq) goto loc_82F19998;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r3,40
	ctx.r3.s64 = 40;
	// bl 0x82691410
	ctx.lr = 0x82F19A58;
	sub_82691410(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// bne cr6,0x82f19a8c
	if (!ctx.cr6.eq) goto loc_82F19A8C;
loc_82F19A64:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f18b00
	ctx.lr = 0x82F19A6C;
	sub_82F18B00(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82691460
	ctx.lr = 0x82F19A78;
	sub_82691460(ctx, base);
loc_82F19A78:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r11.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82fa76b4
	__restgprlr_23(ctx, base);
	return;
loc_82F19A8C:
	// li r9,10
	ctx.r9.s64 = 10;
	// addi r11,r27,-4
	ctx.r11.s64 = ctx.r27.s64 + -4;
	// addi r10,r3,-4
	ctx.r10.s64 = ctx.r3.s64 + -4;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82F19A9C:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x82f19a9c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82F19A9C;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,8(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x82f19abc
	if (ctx.cr6.gt) goto loc_82F19ABC;
	// neg r11,r11
	ctx.r11.s64 = -ctx.r11.s64;
loc_82F19ABC:
	// stw r11,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r11.u32);
	// lwz r30,4(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82f19ae4
	if (!ctx.cr6.eq) goto loc_82F19AE4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,8(r27)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// lwz r4,4(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// bl 0x82f19750
	ctx.lr = 0x82F19AE0;
	sub_82F19750(ctx, base);
	// stw r3,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r3.u32);
loc_82F19AE4:
	// mr r7,r23
	ctx.r7.u64 = ctx.r23.u64;
	// lwz r5,8(r27)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// lwz r4,4(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// addi r3,r31,204
	ctx.r3.s64 = ctx.r31.s64 + 204;
	// bl 0x82d0d6f0
	ctx.lr = 0x82F19AFC;
	sub_82D0D6F0(ctx, base);
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r24,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r24.u32);
	// stw r23,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r23.u32);
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// stw r26,340(r31)
	PPC_STORE_U32(ctx.r31.u32 + 340, ctx.r26.u32);
	// stw r31,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r31.u32);
loc_82F19B18:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82fa76b4
	__restgprlr_23(ctx, base);
	return;
loc_82F19B24:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq cr6,0x82f19bfc
	if (ctx.cr6.eq) goto loc_82F19BFC;
	// cmpwi cr6,r29,3
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 3, ctx.xer);
	// bne cr6,0x82f19b58
	if (!ctx.cr6.eq) goto loc_82F19B58;
	// cmpwi cr6,r28,15
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 15, ctx.xer);
	// beq cr6,0x82f19c1c
	if (ctx.cr6.eq) goto loc_82F19C1C;
	// cmpwi cr6,r28,16
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 16, ctx.xer);
	// beq cr6,0x82f19c1c
	if (ctx.cr6.eq) goto loc_82F19C1C;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r11.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82fa76b4
	__restgprlr_23(ctx, base);
	return;
loc_82F19B58:
	// lis r11,12889
	ctx.r11.s64 = 844693504;
	// ori r10,r11,21849
	ctx.r10.u64 = ctx.r11.u64 | 21849;
	// cmpw cr6,r29,r10
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x82f19c1c
	if (ctx.cr6.eq) goto loc_82F19C1C;
	// lis r11,22870
	ctx.r11.s64 = 1498808320;
	// ori r10,r11,22869
	ctx.r10.u64 = ctx.r11.u64 | 22869;
	// cmpw cr6,r29,r10
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x82f19c1c
	if (ctx.cr6.eq) goto loc_82F19C1C;
	// lis r11,14677
	ctx.r11.s64 = 961871872;
	// ori r10,r11,22105
	ctx.r10.u64 = ctx.r11.u64 | 22105;
	// cmpw cr6,r29,r10
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x82f19c1c
	if (ctx.cr6.eq) goto loc_82F19C1C;
	// lis r11,22101
	ctx.r11.s64 = 1448411136;
	// ori r10,r11,22857
	ctx.r10.u64 = ctx.r11.u64 | 22857;
	// cmpw cr6,r29,r10
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x82f19c1c
	if (ctx.cr6.eq) goto loc_82F19C1C;
	// lis r11,12849
	ctx.r11.s64 = 842072064;
	// ori r10,r11,22105
	ctx.r10.u64 = ctx.r11.u64 | 22105;
	// cmpw cr6,r29,r10
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x82f19c1c
	if (ctx.cr6.eq) goto loc_82F19C1C;
	// lis r11,12338
	ctx.r11.s64 = 808583168;
	// ori r10,r11,13385
	ctx.r10.u64 = ctx.r11.u64 | 13385;
	// cmpw cr6,r29,r10
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x82f19c1c
	if (ctx.cr6.eq) goto loc_82F19C1C;
	// lis r11,16729
	ctx.r11.s64 = 1096351744;
	// ori r10,r11,21846
	ctx.r10.u64 = ctx.r11.u64 | 21846;
	// cmplw cr6,r29,r10
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82f19c1c
	if (ctx.cr6.eq) goto loc_82F19C1C;
	// lis r11,20532
	ctx.r11.s64 = 1345585152;
	// ori r10,r11,12850
	ctx.r10.u64 = ctx.r11.u64 | 12850;
	// cmplw cr6,r29,r10
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82f19c1c
	if (ctx.cr6.eq) goto loc_82F19C1C;
	// lis r11,22066
	ctx.r11.s64 = 1446117376;
	// ori r10,r11,12598
	ctx.r10.u64 = ctx.r11.u64 | 12598;
	// cmplw cr6,r29,r10
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82f19c1c
	if (ctx.cr6.eq) goto loc_82F19C1C;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r11.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82fa76b4
	__restgprlr_23(ctx, base);
	return;
loc_82F19BFC:
	// cmpwi cr6,r28,8
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 8, ctx.xer);
	// beq cr6,0x82f19c1c
	if (ctx.cr6.eq) goto loc_82F19C1C;
	// cmpwi cr6,r28,16
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 16, ctx.xer);
	// beq cr6,0x82f19c1c
	if (ctx.cr6.eq) goto loc_82F19C1C;
	// cmpwi cr6,r28,24
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 24, ctx.xer);
	// beq cr6,0x82f19c1c
	if (ctx.cr6.eq) goto loc_82F19C1C;
	// cmpwi cr6,r28,32
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 32, ctx.xer);
	// bne cr6,0x82f19998
	if (!ctx.cr6.eq) goto loc_82F19998;
loc_82F19C1C:
	// lis r11,9356
	ctx.r11.s64 = 613154816;
	// li r3,360
	ctx.r3.s64 = 360;
	// ori r30,r11,32768
	ctx.r30.u64 = ctx.r11.u64 | 32768;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82691410
	ctx.lr = 0x82F19C30;
	sub_82691410(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82f19998
	if (ctx.cr6.eq) goto loc_82F19998;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82f18a60
	ctx.lr = 0x82F19C40;
	sub_82F18A60(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82f19998
	if (ctx.cr6.eq) goto loc_82F19998;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne cr6,0x82f19c84
	if (!ctx.cr6.eq) goto loc_82F19C84;
	// cmpwi cr6,r28,8
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 8, ctx.xer);
	// bne cr6,0x82f19cb4
	if (!ctx.cr6.eq) goto loc_82F19CB4;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r3,1064
	ctx.r3.s64 = 1064;
	// bl 0x82691410
	ctx.lr = 0x82F19C68;
	sub_82691410(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// beq cr6,0x82f19a64
	if (ctx.cr6.eq) goto loc_82F19A64;
	// li r5,1064
	ctx.r5.s64 = 1064;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x82fa77c0
	ctx.lr = 0x82F19C80;
	sub_82FA77C0(ctx, base);
	// b 0x82f19ce8
	goto loc_82F19CE8;
loc_82F19C84:
	// cmpwi cr6,r29,3
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 3, ctx.xer);
	// bne cr6,0x82f19cb4
	if (!ctx.cr6.eq) goto loc_82F19CB4;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r3,52
	ctx.r3.s64 = 52;
	// bl 0x82691410
	ctx.lr = 0x82F19C98;
	sub_82691410(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// beq cr6,0x82f19a64
	if (ctx.cr6.eq) goto loc_82F19A64;
	// li r5,52
	ctx.r5.s64 = 52;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x82fa77c0
	ctx.lr = 0x82F19CB0;
	sub_82FA77C0(ctx, base);
	// b 0x82f19ce8
	goto loc_82F19CE8;
loc_82F19CB4:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r3,40
	ctx.r3.s64 = 40;
	// bl 0x82691410
	ctx.lr = 0x82F19CC0;
	sub_82691410(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// beq cr6,0x82f19a64
	if (ctx.cr6.eq) goto loc_82F19A64;
	// li r9,10
	ctx.r9.s64 = 10;
	// addi r11,r27,-4
	ctx.r11.s64 = ctx.r27.s64 + -4;
	// addi r10,r3,-4
	ctx.r10.s64 = ctx.r3.s64 + -4;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82F19CDC:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x82f19cdc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82F19CDC;
loc_82F19CE8:
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,8(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x82f19cfc
	if (ctx.cr6.gt) goto loc_82F19CFC;
	// neg r11,r11
	ctx.r11.s64 = -ctx.r11.s64;
loc_82F19CFC:
	// stw r11,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r11.u32);
	// lwz r30,4(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82f19d24
	if (!ctx.cr6.eq) goto loc_82F19D24;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,8(r27)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// lwz r4,4(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// bl 0x82f19750
	ctx.lr = 0x82F19D20;
	sub_82F19750(ctx, base);
	// stw r3,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r3.u32);
loc_82F19D24:
	// mr r7,r23
	ctx.r7.u64 = ctx.r23.u64;
	// lwz r5,8(r27)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// lwz r4,4(r27)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + 4);
	// addi r3,r31,64
	ctx.r3.s64 = ctx.r31.s64 + 64;
	// bl 0x82f6a5b8
	ctx.lr = 0x82F19D3C;
	sub_82F6A5B8(ctx, base);
	// li r11,-1
	ctx.r11.s64 = -1;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r24,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r24.u32);
	// stw r23,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r23.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// stw r10,340(r31)
	PPC_STORE_U32(ctx.r31.u32 + 340, ctx.r10.u32);
	// stw r31,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r31.u32);
	// bne cr6,0x82f19b18
	if (!ctx.cr6.eq) goto loc_82F19B18;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82fa76b4
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F19D74"))) PPC_WEAK_FUNC(sub_82F19D74);
PPC_FUNC_IMPL(__imp__sub_82F19D74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F19D78"))) PPC_WEAK_FUNC(sub_82F19D78);
PPC_FUNC_IMPL(__imp__sub_82F19D78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa765c
	ctx.lr = 0x82F19D80;
	__savegprlr_21(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,348(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 348);
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// mr r25,r7
	ctx.r25.u64 = ctx.r7.u64;
	// mr r24,r8
	ctx.r24.u64 = ctx.r8.u64;
	// lwz r28,16(r10)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// mr r23,r9
	ctx.r23.u64 = ctx.r9.u64;
	// lhz r27,14(r10)
	ctx.r27.u64 = PPC_LOAD_U16(ctx.r10.u32 + 14);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82f19dc0
	if (!ctx.cr6.eq) goto loc_82F19DC0;
	// bl 0x82f18b80
	ctx.lr = 0x82F19DB8;
	sub_82F18B80(ctx, base);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x82fa76ac
	__restgprlr_21(ctx, base);
	return;
loc_82F19DC0:
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82f19e6c
	if (!ctx.cr6.eq) goto loc_82F19E6C;
	// lwz r8,352(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 352);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82f1a028
	if (ctx.cr6.eq) goto loc_82F1A028;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// bgt cr6,0x82f19df0
	if (ctx.cr6.gt) goto loc_82F19DF0;
	// neg r11,r9
	ctx.r11.s64 = -ctx.r9.s64;
	// neg r9,r9
	ctx.r9.s64 = -ctx.r9.s64;
loc_82F19DF0:
	// lwz r6,4(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// mr r4,r8
	ctx.r4.u64 = ctx.r8.u64;
	// lwz r22,56(r31)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lwz r21,12(r31)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r7,44(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// lwz r8,4(r6)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// lwz r6,40(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// stw r30,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r30.u32);
	// stw r22,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r22.u32);
	// stw r27,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r27.u32);
	// stw r8,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r8.u32);
	// stw r28,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r28.u32);
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// stw r30,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r30.u32);
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// stw r21,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r21.u32);
	// bl 0x82f18f08
	ctx.lr = 0x82F19E44;
	sub_82F18F08(ctx, base);
	// mr r9,r23
	ctx.r9.u64 = ctx.r23.u64;
	// lwz r4,352(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 352);
	// mr r8,r24
	ctx.r8.u64 = ctx.r24.u64;
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f18b80
	ctx.lr = 0x82F19E64;
	sub_82F18B80(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// b 0x82f1a010
	goto loc_82F1A010;
loc_82F19E6C:
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x82f19f08
	if (!ctx.cr6.eq) goto loc_82F19F08;
	// lwz r7,356(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 356);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x82f19e90
	if (!ctx.cr6.eq) goto loc_82F19E90;
loc_82F19E80:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x82fa76ac
	__restgprlr_21(ctx, base);
	return;
loc_82F19E90:
	// mr r9,r23
	ctx.r9.u64 = ctx.r23.u64;
	// mr r8,r24
	ctx.r8.u64 = ctx.r24.u64;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f18b80
	ctx.lr = 0x82F19EA8;
	sub_82F18B80(ctx, base);
	// lwz r7,36(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// lwz r6,32(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r24,28(r31)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r23,24(r31)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r9,52(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// lwz r8,48(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// lwz r5,356(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 356);
	// stw r7,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r7.u32);
	// stw r6,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r6.u32);
	// stw r11,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r11.u32);
	// stw r30,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r30.u32);
	// stw r27,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r27.u32);
	// stw r28,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r28.u32);
	// stw r24,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r24.u32);
	// stw r23,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r23.u32);
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// bl 0x82f18f08
	ctx.lr = 0x82F19F04;
	sub_82F18F08(ctx, base);
	// b 0x82f1a010
	goto loc_82F1A010;
loc_82F19F08:
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// bne cr6,0x82f1a028
	if (!ctx.cr6.eq) goto loc_82F1A028;
	// lwz r11,356(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 356);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82f19e80
	if (ctx.cr6.eq) goto loc_82F19E80;
	// lwz r10,352(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 352);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82f19e80
	if (ctx.cr6.eq) goto loc_82F19E80;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// bgt cr6,0x82f19f44
	if (ctx.cr6.gt) goto loc_82F19F44;
	// neg r11,r9
	ctx.r11.s64 = -ctx.r9.s64;
	// neg r9,r9
	ctx.r9.s64 = -ctx.r9.s64;
loc_82F19F44:
	// lwz r8,4(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r6,12(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
	// stw r30,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r30.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r7,56(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// lwz r8,4(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// stw r6,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r6.u32);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r6,40(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// stw r7,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r7.u32);
	// stw r8,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r8.u32);
	// lwz r7,44(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// stw r27,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r27.u32);
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// stw r28,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r28.u32);
	// stw r30,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r30.u32);
	// bl 0x82f18f08
	ctx.lr = 0x82F19F98;
	sub_82F18F08(ctx, base);
	// mr r9,r23
	ctx.r9.u64 = ctx.r23.u64;
	// mr r8,r24
	ctx.r8.u64 = ctx.r24.u64;
	// lwz r7,356(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 356);
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// lwz r4,352(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 352);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f18b80
	ctx.lr = 0x82F19FB8;
	sub_82F18B80(ctx, base);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// lwz r7,36(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r6,32(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r24,28(r31)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r25,24(r31)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// lwz r9,52(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// lwz r8,48(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// lwz r5,356(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 356);
	// stw r7,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r7.u32);
	// stw r6,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r6.u32);
	// stw r11,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r11.u32);
	// stw r30,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r30.u32);
	// stw r27,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r27.u32);
	// stw r28,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r28.u32);
	// stw r24,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r24.u32);
	// stw r25,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r25.u32);
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// bl 0x82f18f08
	ctx.lr = 0x82F1A010;
	sub_82F18F08(ctx, base);
loc_82F1A010:
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82f19e80
	if (ctx.cr6.eq) goto loc_82F19E80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x82fa76ac
	__restgprlr_21(ctx, base);
	return;
loc_82F1A028:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x82fa76ac
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F1A034"))) PPC_WEAK_FUNC(sub_82F1A034);
PPC_FUNC_IMPL(__imp__sub_82F1A034) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F1A038"))) PPC_WEAK_FUNC(sub_82F1A038);
PPC_FUNC_IMPL(__imp__sub_82F1A038) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7658
	ctx.lr = 0x82F1A040;
	__savegprlr_20(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82f1a3d8
	if (ctx.cr6.eq) goto loc_82F1A3D8;
	// lwz r31,352(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 352);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82f1a3d8
	if (ctx.cr6.eq) goto loc_82F1A3D8;
	// bl 0x82f196c0
	ctx.lr = 0x82F1A060;
	sub_82F196C0(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x82f1a244
	if (!ctx.cr6.eq) goto loc_82F1A244;
	// lwz r9,4(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// lis r7,22101
	ctx.r7.s64 = 1448411136;
	// li r11,0
	ctx.r11.s64 = 0;
	// ori r30,r7,22857
	ctx.r30.u64 = ctx.r7.u64 | 22857;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r24,0
	ctx.r24.s64 = 0;
	// lwz r3,16(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	// li r23,0
	ctx.r23.s64 = 0;
	// li r21,0
	ctx.r21.s64 = 0;
	// li r29,0
	ctx.r29.s64 = 0;
	// li r22,0
	ctx.r22.s64 = 0;
	// li r20,0
	ctx.r20.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// cmpw cr6,r3,r30
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r30.s32, ctx.xer);
	// beq cr6,0x82f1a0cc
	if (ctx.cr6.eq) goto loc_82F1A0CC;
	// lis r30,12338
	ctx.r30.s64 = 808583168;
	// ori r30,r30,13385
	ctx.r30.u64 = ctx.r30.u64 | 13385;
	// cmpw cr6,r3,r30
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r30.s32, ctx.xer);
	// beq cr6,0x82f1a0cc
	if (ctx.cr6.eq) goto loc_82F1A0CC;
	// lis r30,12849
	ctx.r30.s64 = 842072064;
	// ori r30,r30,22105
	ctx.r30.u64 = ctx.r30.u64 | 22105;
	// cmpw cr6,r3,r30
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r30.s32, ctx.xer);
	// bne cr6,0x82f1a1a4
	if (!ctx.cr6.eq) goto loc_82F1A1A4;
loc_82F1A0CC:
	// lwz r11,40(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 40);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// lwz r7,16(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 16);
	// srawi r10,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 1;
	// lwz r6,20(r8)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + 20);
	// mr r24,r7
	ctx.r24.u64 = ctx.r7.u64;
	// lwz r9,44(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 44);
	// addze r10,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r10.s64 = temp.s64;
	// srawi r5,r7,1
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x1) != 0);
	ctx.r5.s64 = ctx.r7.s32 >> 1;
	// mullw r9,r9,r11
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r11.s32);
	// addze r23,r5
	temp.s64 = ctx.r5.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r5.u32;
	ctx.r23.s64 = temp.s64;
	// lwz r5,12(r8)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// srawi r3,r6,1
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x1) != 0);
	ctx.r3.s64 = ctx.r6.s32 >> 1;
	// mr r21,r23
	ctx.r21.u64 = ctx.r23.u64;
	// addze r29,r3
	temp.s64 = ctx.r3.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r3.u32;
	ctx.r29.s64 = temp.s64;
	// srawi r7,r29,1
	ctx.xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0x1) != 0);
	ctx.r7.s64 = ctx.r29.s32 >> 1;
	// addze r22,r7
	temp.s64 = ctx.r7.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r7.u32;
	ctx.r22.s64 = temp.s64;
	// mr r20,r22
	ctx.r20.u64 = ctx.r22.u64;
	// bne cr6,0x82f1a15c
	if (!ctx.cr6.eq) goto loc_82F1A15C;
	// mullw r3,r5,r10
	ctx.r3.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r10.s32);
	// lwz r6,8(r8)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// srawi r8,r3,1
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1) != 0);
	ctx.r8.s64 = ctx.r3.s32 >> 1;
	// rlwinm r7,r9,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// addze r8,r8
	temp.s64 = ctx.r8.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r8.s64 = temp.s64;
	// srawi r3,r6,1
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x1) != 0);
	ctx.r3.s64 = ctx.r6.s32 >> 1;
	// add r30,r9,r7
	ctx.r30.u64 = ctx.r9.u64 + ctx.r7.u64;
	// addze r7,r3
	temp.s64 = ctx.r3.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r3.u32;
	ctx.r7.s64 = temp.s64;
	// srawi r30,r30,2
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0x3) != 0);
	ctx.r30.s64 = ctx.r30.s32 >> 2;
	// mullw r3,r5,r11
	ctx.r3.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r11.s32);
	// addze r5,r30
	temp.s64 = ctx.r30.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r30.u32;
	ctx.r5.s64 = temp.s64;
	// add r9,r7,r9
	ctx.r9.u64 = ctx.r7.u64 + ctx.r9.u64;
	// add r5,r5,r7
	ctx.r5.u64 = ctx.r5.u64 + ctx.r7.u64;
	// add r7,r3,r6
	ctx.r7.u64 = ctx.r3.u64 + ctx.r6.u64;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// add r6,r5,r8
	ctx.r6.u64 = ctx.r5.u64 + ctx.r8.u64;
	// b 0x82f1a1a4
	goto loc_82F1A1A4;
loc_82F1A15C:
	// srawi r6,r5,1
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x1) != 0);
	ctx.r6.s64 = ctx.r5.s32 >> 1;
	// lwz r7,8(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// addze r6,r6
	temp.s64 = ctx.r6.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r6.u32;
	ctx.r6.s64 = temp.s64;
	// srawi r3,r7,1
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x1) != 0);
	ctx.r3.s64 = ctx.r7.s32 >> 1;
	// add r30,r9,r8
	ctx.r30.u64 = ctx.r9.u64 + ctx.r8.u64;
	// addze r8,r3
	temp.s64 = ctx.r3.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r3.u32;
	ctx.r8.s64 = temp.s64;
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// srawi r3,r30,2
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0x3) != 0);
	ctx.r3.s64 = ctx.r30.s32 >> 2;
	// mullw r6,r6,r10
	ctx.r6.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r10.s32);
	// addi r28,r5,1
	ctx.r28.s64 = ctx.r5.s64 + 1;
	// addze r30,r3
	temp.s64 = ctx.r3.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r3.u32;
	ctx.r30.s64 = temp.s64;
	// add r5,r8,r6
	ctx.r5.u64 = ctx.r8.u64 + ctx.r6.u64;
	// mullw r3,r28,r11
	ctx.r3.s64 = int64_t(ctx.r28.s32) * int64_t(ctx.r11.s32);
	// add r8,r30,r8
	ctx.r8.u64 = ctx.r30.u64 + ctx.r8.u64;
	// add r7,r3,r7
	ctx.r7.u64 = ctx.r3.u64 + ctx.r7.u64;
	// add r9,r5,r9
	ctx.r9.u64 = ctx.r5.u64 + ctx.r9.u64;
	// add r6,r8,r6
	ctx.r6.u64 = ctx.r8.u64 + ctx.r6.u64;
loc_82F1A1A4:
	// add r30,r7,r4
	ctx.r30.u64 = ctx.r7.u64 + ctx.r4.u64;
	// add r28,r9,r4
	ctx.r28.u64 = ctx.r9.u64 + ctx.r4.u64;
	// add r26,r6,r4
	ctx.r26.u64 = ctx.r6.u64 + ctx.r4.u64;
	// rlwinm r27,r11,1,0,30
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r25,r10,1,0,30
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// ble cr6,0x82f1a1e0
	if (!ctx.cr6.gt) goto loc_82F1A1E0;
loc_82F1A1C0:
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82fa77c0
	ctx.lr = 0x82F1A1D0;
	sub_82FA77C0(ctx, base);
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// add r30,r27,r30
	ctx.r30.u64 = ctx.r27.u64 + ctx.r30.u64;
	// add r31,r24,r31
	ctx.r31.u64 = ctx.r24.u64 + ctx.r31.u64;
	// bne 0x82f1a1c0
	if (!ctx.cr0.eq) goto loc_82F1A1C0;
loc_82F1A1E0:
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// ble cr6,0x82f1a20c
	if (!ctx.cr6.gt) goto loc_82F1A20C;
	// mr r30,r22
	ctx.r30.u64 = ctx.r22.u64;
loc_82F1A1EC:
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82fa77c0
	ctx.lr = 0x82F1A1FC;
	sub_82FA77C0(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// add r28,r25,r28
	ctx.r28.u64 = ctx.r25.u64 + ctx.r28.u64;
	// add r31,r23,r31
	ctx.r31.u64 = ctx.r23.u64 + ctx.r31.u64;
	// bne 0x82f1a1ec
	if (!ctx.cr0.eq) goto loc_82F1A1EC;
loc_82F1A20C:
	// cmpwi cr6,r20,0
	ctx.cr6.compare<int32_t>(ctx.r20.s32, 0, ctx.xer);
	// ble cr6,0x82f1a3cc
	if (!ctx.cr6.gt) goto loc_82F1A3CC;
	// mr r30,r20
	ctx.r30.u64 = ctx.r20.u64;
loc_82F1A218:
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82fa77c0
	ctx.lr = 0x82F1A228;
	sub_82FA77C0(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// add r26,r25,r26
	ctx.r26.u64 = ctx.r25.u64 + ctx.r26.u64;
	// add r31,r21,r31
	ctx.r31.u64 = ctx.r21.u64 + ctx.r31.u64;
	// bne 0x82f1a218
	if (!ctx.cr0.eq) goto loc_82F1A218;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82fa76a8
	__restgprlr_20(ctx, base);
	return;
loc_82F1A244:
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// bne cr6,0x82f1a3d8
	if (!ctx.cr6.eq) goto loc_82F1A3D8;
	// lwz r29,4(r8)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// lwz r9,40(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 40);
	// lhz r10,14(r29)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r29.u32 + 14);
	// mullw. r11,r9,r10
	ctx.r11.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r10.s32);
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt 0x82f1a264
	if (ctx.cr0.gt) goto loc_82F1A264;
	// neg r11,r11
	ctx.r11.s64 = -ctx.r11.s64;
loc_82F1A264:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// li r7,1
	ctx.r7.s64 = 1;
	// bgt cr6,0x82f1a274
	if (ctx.cr6.gt) goto loc_82F1A274;
	// li r7,-1
	ctx.r7.s64 = -1;
loc_82F1A274:
	// lwz r30,16(r8)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r8.u32 + 16);
	// addi r28,r11,31
	ctx.r28.s64 = ctx.r11.s64 + 31;
	// lwz r9,20(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 20);
	// li r3,0
	ctx.r3.s64 = 0;
	// mullw r11,r30,r10
	ctx.r11.s64 = int64_t(ctx.r30.s32) * int64_t(ctx.r10.s32);
	// rlwinm r30,r28,0,0,26
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 0) & 0xFFFFFFE0;
	// addi r11,r11,31
	ctx.r11.s64 = ctx.r11.s64 + 31;
	// srawi r30,r30,3
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0x7) != 0);
	ctx.r30.s64 = ctx.r30.s32 >> 3;
	// rlwinm r11,r11,0,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFE0;
	// addze r30,r30
	temp.s64 = ctx.r30.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r30.u32;
	ctx.r30.s64 = temp.s64;
	// srawi r28,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r28.s64 = ctx.r11.s32 >> 3;
	// mullw r11,r30,r7
	ctx.r11.s64 = int64_t(ctx.r30.s32) * int64_t(ctx.r7.s32);
	// addze r27,r28
	temp.s64 = ctx.r28.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r28.u32;
	ctx.r27.s64 = temp.s64;
	// srawi r7,r9,1
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r7.s64 = ctx.r9.s32 >> 1;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// addze r30,r7
	temp.s64 = ctx.r7.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r7.u32;
	ctx.r30.s64 = temp.s64;
	// bne cr6,0x82f1a2d4
	if (!ctx.cr6.eq) goto loc_82F1A2D4;
	// lwz r7,16(r29)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// cmplwi cr6,r7,3
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 3, ctx.xer);
	// bgt cr6,0x82f1a2d4
	if (ctx.cr6.gt) goto loc_82F1A2D4;
	// lwz r7,8(r29)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// ble cr6,0x82f1a2d4
	if (!ctx.cr6.gt) goto loc_82F1A2D4;
	// li r3,1
	ctx.r3.s64 = 1;
loc_82F1A2D4:
	// mr r28,r31
	ctx.r28.u64 = ctx.r31.u64;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bne cr6,0x82f1a33c
	if (!ctx.cr6.eq) goto loc_82F1A33C;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82f1a304
	if (!ctx.cr6.eq) goto loc_82F1A304;
	// lwz r9,8(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// lwz r8,12(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// mullw r7,r9,r10
	ctx.r7.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r10.s32);
	// srawi r6,r7,3
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7) != 0);
	ctx.r6.s64 = ctx.r7.s32 >> 3;
	// mullw r9,r8,r11
	ctx.r9.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r11.s32);
	// addze r10,r6
	temp.s64 = ctx.r6.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r6.u32;
	ctx.r10.s64 = temp.s64;
	// b 0x82f1a398
	goto loc_82F1A398;
loc_82F1A304:
	// lwz r7,44(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 44);
	// lwz r3,8(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// srawi r5,r7,31
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7FFFFFFF) != 0);
	ctx.r5.s64 = ctx.r7.s32 >> 31;
	// lwz r6,12(r8)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// xor r8,r7,r5
	ctx.r8.u64 = ctx.r7.u64 ^ ctx.r5.u64;
	// mullw r7,r3,r10
	ctx.r7.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r10.s32);
	// subf r5,r5,r8
	ctx.r5.s64 = ctx.r8.s64 - ctx.r5.s64;
	// srawi r3,r7,3
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7) != 0);
	ctx.r3.s64 = ctx.r7.s32 >> 3;
	// subf r10,r6,r5
	ctx.r10.s64 = ctx.r5.s64 - ctx.r6.s64;
	// addze r8,r3
	temp.s64 = ctx.r3.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r3.u32;
	ctx.r8.s64 = temp.s64;
	// subf r9,r9,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r9.s64;
	// mullw r10,r9,r11
	ctx.r10.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r11.s32);
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// b 0x82f1a39c
	goto loc_82F1A39C;
loc_82F1A33C:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82f1a364
	if (!ctx.cr6.eq) goto loc_82F1A364;
	// lwz r7,8(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// lwz r9,12(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// mullw r6,r7,r10
	ctx.r6.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r10.s32);
	// addi r5,r9,1
	ctx.r5.s64 = ctx.r9.s64 + 1;
	// srawi r3,r6,3
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x7) != 0);
	ctx.r3.s64 = ctx.r6.s32 >> 3;
	// mullw r10,r5,r11
	ctx.r10.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r11.s32);
	// addze r9,r3
	temp.s64 = ctx.r3.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r3.u32;
	ctx.r9.s64 = temp.s64;
	// b 0x82f1a398
	goto loc_82F1A398;
loc_82F1A364:
	// lwz r7,44(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 44);
	// lwz r6,12(r8)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// srawi r5,r7,31
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7FFFFFFF) != 0);
	ctx.r5.s64 = ctx.r7.s32 >> 31;
	// lwz r3,8(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// subfic r8,r6,1
	ctx.xer.ca = ctx.r6.u32 <= 1;
	ctx.r8.s64 = 1 - ctx.r6.s64;
	// xor r7,r7,r5
	ctx.r7.u64 = ctx.r7.u64 ^ ctx.r5.u64;
	// subf r8,r9,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r9.s64;
	// mullw r6,r3,r10
	ctx.r6.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r10.s32);
	// subf r9,r5,r7
	ctx.r9.s64 = ctx.r7.s64 - ctx.r5.s64;
	// srawi r5,r6,3
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x7) != 0);
	ctx.r5.s64 = ctx.r6.s32 >> 3;
	// add r3,r9,r8
	ctx.r3.u64 = ctx.r9.u64 + ctx.r8.u64;
	// addze r9,r5
	temp.s64 = ctx.r5.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r5.u32;
	ctx.r9.s64 = temp.s64;
	// mullw r10,r3,r11
	ctx.r10.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r11.s32);
loc_82F1A398:
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
loc_82F1A39C:
	// add r31,r10,r4
	ctx.r31.u64 = ctx.r10.u64 + ctx.r4.u64;
	// rlwinm r29,r11,1,0,30
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// ble cr6,0x82f1a3cc
	if (!ctx.cr6.gt) goto loc_82F1A3CC;
loc_82F1A3AC:
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82fa77c0
	ctx.lr = 0x82F1A3BC;
	sub_82FA77C0(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// add r31,r29,r31
	ctx.r31.u64 = ctx.r29.u64 + ctx.r31.u64;
	// add r28,r28,r27
	ctx.r28.u64 = ctx.r28.u64 + ctx.r27.u64;
	// bne 0x82f1a3ac
	if (!ctx.cr0.eq) goto loc_82F1A3AC;
loc_82F1A3CC:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82fa76a8
	__restgprlr_20(ctx, base);
	return;
loc_82F1A3D8:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82fa76a8
	__restgprlr_20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F1A3E4"))) PPC_WEAK_FUNC(sub_82F1A3E4);
PPC_FUNC_IMPL(__imp__sub_82F1A3E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F1A3E8"))) PPC_WEAK_FUNC(sub_82F1A3E8);
PPC_FUNC_IMPL(__imp__sub_82F1A3E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7658
	ctx.lr = 0x82F1A3F0;
	__savegprlr_20(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82f1a794
	if (ctx.cr6.eq) goto loc_82F1A794;
	// lwz r11,352(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 352);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82f1a794
	if (ctx.cr6.eq) goto loc_82F1A794;
	// bl 0x82f196c0
	ctx.lr = 0x82F1A410;
	sub_82F196C0(ctx, base);
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x82f1a5f8
	if (!ctx.cr6.eq) goto loc_82F1A5F8;
	// lwz r11,4(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// lis r10,22101
	ctx.r10.s64 = 1448411136;
	// li r24,0
	ctx.r24.s64 = 0;
	// ori r31,r10,22857
	ctx.r31.u64 = ctx.r10.u64 | 22857;
	// li r23,0
	ctx.r23.s64 = 0;
	// li r21,0
	ctx.r21.s64 = 0;
	// lwz r3,16(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// li r29,0
	ctx.r29.s64 = 0;
	// li r22,0
	ctx.r22.s64 = 0;
	// li r20,0
	ctx.r20.s64 = 0;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// cmpw cr6,r3,r31
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r31.s32, ctx.xer);
	// beq cr6,0x82f1a47c
	if (ctx.cr6.eq) goto loc_82F1A47C;
	// lis r31,12338
	ctx.r31.s64 = 808583168;
	// ori r31,r31,13385
	ctx.r31.u64 = ctx.r31.u64 | 13385;
	// cmpw cr6,r3,r31
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r31.s32, ctx.xer);
	// beq cr6,0x82f1a47c
	if (ctx.cr6.eq) goto loc_82F1A47C;
	// lis r31,12849
	ctx.r31.s64 = 842072064;
	// ori r31,r31,22105
	ctx.r31.u64 = ctx.r31.u64 | 22105;
	// cmpw cr6,r3,r31
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r31.s32, ctx.xer);
	// bne cr6,0x82f1a554
	if (!ctx.cr6.eq) goto loc_82F1A554;
loc_82F1A47C:
	// lwz r24,32(r8)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r8.u32 + 32);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// lwz r9,36(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 36);
	// srawi r7,r24,1
	ctx.xer.ca = (ctx.r24.s32 < 0) & ((ctx.r24.u32 & 0x1) != 0);
	ctx.r7.s64 = ctx.r24.s32 >> 1;
	// lwz r11,48(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 48);
	// lwz r10,52(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 52);
	// addze r23,r7
	temp.s64 = ctx.r7.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r7.u32;
	ctx.r23.s64 = temp.s64;
	// srawi r6,r9,1
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r6.s64 = ctx.r9.s32 >> 1;
	// mr r21,r23
	ctx.r21.u64 = ctx.r23.u64;
	// addze r29,r6
	temp.s64 = ctx.r6.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r6.u32;
	ctx.r29.s64 = temp.s64;
	// mullw r10,r10,r11
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// srawi r5,r29,1
	ctx.xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0x1) != 0);
	ctx.r5.s64 = ctx.r29.s32 >> 1;
	// addze r22,r5
	temp.s64 = ctx.r5.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r5.u32;
	ctx.r22.s64 = temp.s64;
	// srawi r3,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r3.s64 = ctx.r11.s32 >> 1;
	// mr r20,r22
	ctx.r20.u64 = ctx.r22.u64;
	// addze r9,r3
	temp.s64 = ctx.r3.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r3.u32;
	ctx.r9.s64 = temp.s64;
	// bne cr6,0x82f1a508
	if (!ctx.cr6.eq) goto loc_82F1A508;
	// lwz r31,28(r8)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r8.u32 + 28);
	// lwz r5,24(r8)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r8.u32 + 24);
	// mullw r7,r31,r9
	ctx.r7.s64 = int64_t(ctx.r31.s32) * int64_t(ctx.r9.s32);
	// srawi r6,r7,1
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x1) != 0);
	ctx.r6.s64 = ctx.r7.s32 >> 1;
	// rlwinm r7,r10,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addze r6,r6
	temp.s64 = ctx.r6.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r6.u32;
	ctx.r6.s64 = temp.s64;
	// srawi r3,r5,1
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x1) != 0);
	ctx.r3.s64 = ctx.r5.s32 >> 1;
	// add r30,r10,r7
	ctx.r30.u64 = ctx.r10.u64 + ctx.r7.u64;
	// addze r7,r3
	temp.s64 = ctx.r3.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r3.u32;
	ctx.r7.s64 = temp.s64;
	// srawi r3,r30,2
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0x3) != 0);
	ctx.r3.s64 = ctx.r30.s32 >> 2;
	// add r10,r7,r10
	ctx.r10.u64 = ctx.r7.u64 + ctx.r10.u64;
	// addze r3,r3
	temp.s64 = ctx.r3.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r3.u32;
	ctx.r3.s64 = temp.s64;
	// mullw r31,r31,r11
	ctx.r31.s64 = int64_t(ctx.r31.s32) * int64_t(ctx.r11.s32);
	// add r3,r3,r7
	ctx.r3.u64 = ctx.r3.u64 + ctx.r7.u64;
	// add r10,r10,r6
	ctx.r10.u64 = ctx.r10.u64 + ctx.r6.u64;
	// add r7,r31,r5
	ctx.r7.u64 = ctx.r31.u64 + ctx.r5.u64;
	// add r6,r3,r6
	ctx.r6.u64 = ctx.r3.u64 + ctx.r6.u64;
	// b 0x82f1a554
	goto loc_82F1A554;
loc_82F1A508:
	// lwz r3,28(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + 28);
	// rlwinm r7,r10,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r6,24(r8)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + 24);
	// srawi r5,r3,1
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1) != 0);
	ctx.r5.s64 = ctx.r3.s32 >> 1;
	// add r30,r10,r7
	ctx.r30.u64 = ctx.r10.u64 + ctx.r7.u64;
	// addze r5,r5
	temp.s64 = ctx.r5.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r5.u32;
	ctx.r5.s64 = temp.s64;
	// srawi r31,r6,1
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x1) != 0);
	ctx.r31.s64 = ctx.r6.s32 >> 1;
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// addze r7,r31
	temp.s64 = ctx.r31.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r31.u32;
	ctx.r7.s64 = temp.s64;
	// srawi r31,r30,2
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0x3) != 0);
	ctx.r31.s64 = ctx.r30.s32 >> 2;
	// addi r30,r3,1
	ctx.r30.s64 = ctx.r3.s64 + 1;
	// mullw r5,r5,r9
	ctx.r5.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r9.s32);
	// addze r3,r31
	temp.s64 = ctx.r31.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r31.u32;
	ctx.r3.s64 = temp.s64;
	// mullw r30,r30,r11
	ctx.r30.s64 = int64_t(ctx.r30.s32) * int64_t(ctx.r11.s32);
	// add r31,r7,r5
	ctx.r31.u64 = ctx.r7.u64 + ctx.r5.u64;
	// add r3,r3,r7
	ctx.r3.u64 = ctx.r3.u64 + ctx.r7.u64;
	// add r7,r30,r6
	ctx.r7.u64 = ctx.r30.u64 + ctx.r6.u64;
	// add r10,r31,r10
	ctx.r10.u64 = ctx.r31.u64 + ctx.r10.u64;
	// add r6,r3,r5
	ctx.r6.u64 = ctx.r3.u64 + ctx.r5.u64;
loc_82F1A554:
	// lwz r31,356(r8)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r8.u32 + 356);
	// add r30,r7,r4
	ctx.r30.u64 = ctx.r7.u64 + ctx.r4.u64;
	// add r28,r10,r4
	ctx.r28.u64 = ctx.r10.u64 + ctx.r4.u64;
	// add r26,r6,r4
	ctx.r26.u64 = ctx.r6.u64 + ctx.r4.u64;
	// rlwinm r27,r11,1,0,30
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r25,r9,1,0,30
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// ble cr6,0x82f1a594
	if (!ctx.cr6.gt) goto loc_82F1A594;
loc_82F1A574:
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82fa77c0
	ctx.lr = 0x82F1A584;
	sub_82FA77C0(ctx, base);
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// add r30,r27,r30
	ctx.r30.u64 = ctx.r27.u64 + ctx.r30.u64;
	// add r31,r24,r31
	ctx.r31.u64 = ctx.r24.u64 + ctx.r31.u64;
	// bne 0x82f1a574
	if (!ctx.cr0.eq) goto loc_82F1A574;
loc_82F1A594:
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// ble cr6,0x82f1a5c0
	if (!ctx.cr6.gt) goto loc_82F1A5C0;
	// mr r30,r22
	ctx.r30.u64 = ctx.r22.u64;
loc_82F1A5A0:
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82fa77c0
	ctx.lr = 0x82F1A5B0;
	sub_82FA77C0(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// add r28,r25,r28
	ctx.r28.u64 = ctx.r25.u64 + ctx.r28.u64;
	// add r31,r23,r31
	ctx.r31.u64 = ctx.r23.u64 + ctx.r31.u64;
	// bne 0x82f1a5a0
	if (!ctx.cr0.eq) goto loc_82F1A5A0;
loc_82F1A5C0:
	// cmpwi cr6,r20,0
	ctx.cr6.compare<int32_t>(ctx.r20.s32, 0, ctx.xer);
	// ble cr6,0x82f1a788
	if (!ctx.cr6.gt) goto loc_82F1A788;
	// mr r30,r20
	ctx.r30.u64 = ctx.r20.u64;
loc_82F1A5CC:
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82fa77c0
	ctx.lr = 0x82F1A5DC;
	sub_82FA77C0(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// add r26,r25,r26
	ctx.r26.u64 = ctx.r25.u64 + ctx.r26.u64;
	// add r31,r21,r31
	ctx.r31.u64 = ctx.r21.u64 + ctx.r31.u64;
	// bne 0x82f1a5cc
	if (!ctx.cr0.eq) goto loc_82F1A5CC;
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82fa76a8
	__restgprlr_20(ctx, base);
	return;
loc_82F1A5F8:
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// bne cr6,0x82f1a794
	if (!ctx.cr6.eq) goto loc_82F1A794;
	// lwz r31,4(r8)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// lwz r9,32(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 32);
	// lwz r11,48(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 48);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lhz r10,14(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 14);
	// mullw r9,r9,r10
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r10.s32);
	// addi r7,r9,31
	ctx.r7.s64 = ctx.r9.s64 + 31;
	// rlwinm r3,r7,0,0,26
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFE0;
	// srawi r9,r3,3
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x7) != 0);
	ctx.r9.s64 = ctx.r3.s32 >> 3;
	// addze r27,r9
	temp.s64 = ctx.r9.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r27.s64 = temp.s64;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// bgt cr6,0x82f1a638
	if (ctx.cr6.gt) goto loc_82F1A638;
	// neg r9,r11
	ctx.r9.s64 = -ctx.r11.s64;
	// ble cr6,0x82f1a640
	if (!ctx.cr6.gt) goto loc_82F1A640;
loc_82F1A638:
	// li r7,1
	ctx.r7.s64 = 1;
	// b 0x82f1a644
	goto loc_82F1A644;
loc_82F1A640:
	// li r7,-1
	ctx.r7.s64 = -1;
loc_82F1A644:
	// mullw r11,r9,r10
	ctx.r11.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r10.s32);
	// lwz r9,36(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 36);
	// addi r11,r11,31
	ctx.r11.s64 = ctx.r11.s64 + 31;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// rlwinm r11,r11,0,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFE0;
	// li r3,0
	ctx.r3.s64 = 0;
	// srawi r6,r11,3
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7) != 0);
	ctx.r6.s64 = ctx.r11.s32 >> 3;
	// addze r11,r6
	temp.s64 = ctx.r6.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r6.u32;
	ctx.r11.s64 = temp.s64;
	// srawi r6,r9,1
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r6.s64 = ctx.r9.s32 >> 1;
	// mullw r11,r11,r7
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r7.s32);
	// addze r30,r6
	temp.s64 = ctx.r6.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r6.u32;
	ctx.r30.s64 = temp.s64;
	// bne cr6,0x82f1a690
	if (!ctx.cr6.eq) goto loc_82F1A690;
	// lwz r7,16(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r7,3
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 3, ctx.xer);
	// bgt cr6,0x82f1a690
	if (ctx.cr6.gt) goto loc_82F1A690;
	// lwz r7,8(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// ble cr6,0x82f1a690
	if (!ctx.cr6.gt) goto loc_82F1A690;
	// li r3,1
	ctx.r3.s64 = 1;
loc_82F1A690:
	// lwz r28,356(r8)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r8.u32 + 356);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bne cr6,0x82f1a6f8
	if (!ctx.cr6.eq) goto loc_82F1A6F8;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82f1a6c0
	if (!ctx.cr6.eq) goto loc_82F1A6C0;
	// lwz r9,24(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 24);
	// lwz r8,28(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 28);
	// mullw r7,r9,r10
	ctx.r7.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r10.s32);
	// srawi r6,r7,3
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7) != 0);
	ctx.r6.s64 = ctx.r7.s32 >> 3;
	// mullw r9,r8,r11
	ctx.r9.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r11.s32);
	// addze r10,r6
	temp.s64 = ctx.r6.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r6.u32;
	ctx.r10.s64 = temp.s64;
	// b 0x82f1a754
	goto loc_82F1A754;
loc_82F1A6C0:
	// lwz r7,52(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 52);
	// lwz r3,24(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + 24);
	// srawi r5,r7,31
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7FFFFFFF) != 0);
	ctx.r5.s64 = ctx.r7.s32 >> 31;
	// lwz r6,28(r8)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + 28);
	// xor r8,r7,r5
	ctx.r8.u64 = ctx.r7.u64 ^ ctx.r5.u64;
	// mullw r7,r3,r10
	ctx.r7.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r10.s32);
	// subf r5,r5,r8
	ctx.r5.s64 = ctx.r8.s64 - ctx.r5.s64;
	// srawi r3,r7,3
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7) != 0);
	ctx.r3.s64 = ctx.r7.s32 >> 3;
	// subf r10,r6,r5
	ctx.r10.s64 = ctx.r5.s64 - ctx.r6.s64;
	// addze r8,r3
	temp.s64 = ctx.r3.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r3.u32;
	ctx.r8.s64 = temp.s64;
	// subf r9,r9,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r9.s64;
	// mullw r10,r9,r11
	ctx.r10.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r11.s32);
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// b 0x82f1a758
	goto loc_82F1A758;
loc_82F1A6F8:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82f1a720
	if (!ctx.cr6.eq) goto loc_82F1A720;
	// lwz r7,24(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 24);
	// lwz r9,28(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 28);
	// mullw r6,r7,r10
	ctx.r6.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r10.s32);
	// addi r5,r9,1
	ctx.r5.s64 = ctx.r9.s64 + 1;
	// srawi r3,r6,3
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x7) != 0);
	ctx.r3.s64 = ctx.r6.s32 >> 3;
	// mullw r10,r5,r11
	ctx.r10.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r11.s32);
	// addze r9,r3
	temp.s64 = ctx.r3.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r3.u32;
	ctx.r9.s64 = temp.s64;
	// b 0x82f1a754
	goto loc_82F1A754;
loc_82F1A720:
	// lwz r7,52(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + 52);
	// lwz r6,28(r8)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + 28);
	// srawi r5,r7,31
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7FFFFFFF) != 0);
	ctx.r5.s64 = ctx.r7.s32 >> 31;
	// lwz r3,24(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + 24);
	// subfic r8,r6,1
	ctx.xer.ca = ctx.r6.u32 <= 1;
	ctx.r8.s64 = 1 - ctx.r6.s64;
	// xor r7,r7,r5
	ctx.r7.u64 = ctx.r7.u64 ^ ctx.r5.u64;
	// subf r8,r9,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r9.s64;
	// mullw r6,r3,r10
	ctx.r6.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r10.s32);
	// subf r9,r5,r7
	ctx.r9.s64 = ctx.r7.s64 - ctx.r5.s64;
	// srawi r5,r6,3
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x7) != 0);
	ctx.r5.s64 = ctx.r6.s32 >> 3;
	// add r3,r9,r8
	ctx.r3.u64 = ctx.r9.u64 + ctx.r8.u64;
	// addze r9,r5
	temp.s64 = ctx.r5.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r5.u32;
	ctx.r9.s64 = temp.s64;
	// mullw r10,r3,r11
	ctx.r10.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r11.s32);
loc_82F1A754:
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
loc_82F1A758:
	// add r31,r10,r4
	ctx.r31.u64 = ctx.r10.u64 + ctx.r4.u64;
	// rlwinm r29,r11,1,0,30
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// ble cr6,0x82f1a788
	if (!ctx.cr6.gt) goto loc_82F1A788;
loc_82F1A768:
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82fa77c0
	ctx.lr = 0x82F1A778;
	sub_82FA77C0(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// add r31,r29,r31
	ctx.r31.u64 = ctx.r29.u64 + ctx.r31.u64;
	// add r28,r28,r27
	ctx.r28.u64 = ctx.r28.u64 + ctx.r27.u64;
	// bne 0x82f1a768
	if (!ctx.cr0.eq) goto loc_82F1A768;
loc_82F1A788:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82fa76a8
	__restgprlr_20(ctx, base);
	return;
loc_82F1A794:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82fa76a8
	__restgprlr_20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F1A7A0"))) PPC_WEAK_FUNC(sub_82F1A7A0);
PPC_FUNC_IMPL(__imp__sub_82F1A7A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x82F1A7A8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,352(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 352);
	// lis r11,9356
	ctx.r11.s64 = 613154816;
	// li r29,0
	ctx.r29.s64 = 0;
	// ori r30,r11,32768
	ctx.r30.u64 = ctx.r11.u64 | 32768;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82f1a7d4
	if (ctx.cr6.eq) goto loc_82F1A7D4;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82691460
	ctx.lr = 0x82F1A7D0;
	sub_82691460(ctx, base);
	// stw r29,352(r31)
	PPC_STORE_U32(ctx.r31.u32 + 352, ctx.r29.u32);
loc_82F1A7D4:
	// lwz r3,356(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 356);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82f1a7ec
	if (ctx.cr6.eq) goto loc_82F1A7EC;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82691460
	ctx.lr = 0x82F1A7E8;
	sub_82691460(ctx, base);
	// stw r29,356(r31)
	PPC_STORE_U32(ctx.r31.u32 + 356, ctx.r29.u32);
loc_82F1A7EC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,44(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// lwz r4,40(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// bl 0x82f19750
	ctx.lr = 0x82F1A7FC;
	sub_82F19750(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,52(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// lwz r4,48(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// bl 0x82f19750
	ctx.lr = 0x82F1A810;
	sub_82F19750(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82691410
	ctx.lr = 0x82F1A820;
	sub_82691410(ctx, base);
	// stw r3,352(r31)
	PPC_STORE_U32(ctx.r31.u32 + 352, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82f1a834
	if (!ctx.cr6.eq) goto loc_82F1A834;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
loc_82F1A834:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82691410
	ctx.lr = 0x82F1A840;
	sub_82691410(ctx, base);
	// addic r11,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// stw r3,356(r31)
	PPC_STORE_U32(ctx.r31.u32 + 356, ctx.r3.u32);
	// subfe r3,r11,r3
	temp.u8 = (~ctx.r11.u32 + ctx.r3.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r3.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r11.u64 + ctx.r3.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F1A854"))) PPC_WEAK_FUNC(sub_82F1A854);
PPC_FUNC_IMPL(__imp__sub_82F1A854) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F1A858"))) PPC_WEAK_FUNC(sub_82F1A858);
PPC_FUNC_IMPL(__imp__sub_82F1A858) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7664
	ctx.lr = 0x82F1A860;
	__savegprlr_23(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,0(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r26,r8
	ctx.r26.u64 = ctx.r8.u64;
	// mr r25,r9
	ctx.r25.u64 = ctx.r9.u64;
	// mr r24,r10
	ctx.r24.u64 = ctx.r10.u64;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// blt cr6,0x82f1a9e4
	if (ctx.cr6.lt) goto loc_82F1A9E4;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// blt cr6,0x82f1a9e4
	if (ctx.cr6.lt) goto loc_82F1A9E4;
	// cmpwi cr6,r6,1
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 1, ctx.xer);
	// blt cr6,0x82f1a9e4
	if (ctx.cr6.lt) goto loc_82F1A9E4;
	// cmpwi cr6,r7,1
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 1, ctx.xer);
	// blt cr6,0x82f1a9e4
	if (ctx.cr6.lt) goto loc_82F1A9E4;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// blt cr6,0x82f1a9e4
	if (ctx.cr6.lt) goto loc_82F1A9E4;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// blt cr6,0x82f1a9e4
	if (ctx.cr6.lt) goto loc_82F1A9E4;
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// blt cr6,0x82f1a9e4
	if (ctx.cr6.lt) goto loc_82F1A9E4;
	// lwz r23,244(r1)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r1.u32 + 244);
	// cmpwi cr6,r23,1
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 1, ctx.xer);
	// blt cr6,0x82f1a9e4
	if (ctx.cr6.lt) goto loc_82F1A9E4;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x82f1a8d4
	if (ctx.cr6.gt) goto loc_82F1A8D4;
	// neg r11,r11
	ctx.r11.s64 = -ctx.r11.s64;
loc_82F1A8D4:
	// add r10,r29,r28
	ctx.r10.u64 = ctx.r29.u64 + ctx.r28.u64;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bgt cr6,0x82f1a9e4
	if (ctx.cr6.gt) goto loc_82F1A9E4;
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x82f1a8f0
	if (ctx.cr6.gt) goto loc_82F1A8F0;
	// neg r11,r11
	ctx.r11.s64 = -ctx.r11.s64;
loc_82F1A8F0:
	// add r10,r27,r7
	ctx.r10.u64 = ctx.r27.u64 + ctx.r7.u64;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bgt cr6,0x82f1a9e4
	if (ctx.cr6.gt) goto loc_82F1A9E4;
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x82f1a90c
	if (ctx.cr6.gt) goto loc_82F1A90C;
	// neg r11,r11
	ctx.r11.s64 = -ctx.r11.s64;
loc_82F1A90C:
	// add r10,r26,r24
	ctx.r10.u64 = ctx.r26.u64 + ctx.r24.u64;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bgt cr6,0x82f1a9e4
	if (ctx.cr6.gt) goto loc_82F1A9E4;
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bgt cr6,0x82f1a928
	if (ctx.cr6.gt) goto loc_82F1A928;
	// neg r11,r11
	ctx.r11.s64 = -ctx.r11.s64;
loc_82F1A928:
	// add r10,r25,r23
	ctx.r10.u64 = ctx.r25.u64 + ctx.r23.u64;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bgt cr6,0x82f1a9e4
	if (ctx.cr6.gt) goto loc_82F1A9E4;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r5,r7
	ctx.r5.u64 = ctx.r7.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r6,344(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 344);
	// lwz r30,16(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82f19430
	ctx.lr = 0x82F1A950;
	sub_82F19430(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82f1a9e4
	if (!ctx.cr6.eq) goto loc_82F1A9E4;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82f19430
	ctx.lr = 0x82F1A968;
	sub_82F19430(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82f1a9e4
	if (!ctx.cr6.eq) goto loc_82F1A9E4;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82f19430
	ctx.lr = 0x82F1A980;
	sub_82F19430(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82f1a9e4
	if (!ctx.cr6.eq) goto loc_82F1A9E4;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82f19430
	ctx.lr = 0x82F1A998;
	sub_82F19430(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82f1a9e4
	if (!ctx.cr6.eq) goto loc_82F1A9E4;
	// stw r29,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r29.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r27,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r27.u32);
	// stw r26,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r26.u32);
	// stw r25,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r25.u32);
	// stw r28,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r28.u32);
	// stw r7,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r7.u32);
	// stw r24,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r24.u32);
	// stw r23,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r23.u32);
	// bl 0x82f19800
	ctx.lr = 0x82F1A9C8;
	sub_82F19800(ctx, base);
	// addic r11,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// lis r9,-32768
	ctx.r9.s64 = -2147483648;
	// subfe r8,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// ori r7,r9,16389
	ctx.r7.u64 = ctx.r9.u64 | 16389;
	// and r3,r8,r7
	ctx.r3.u64 = ctx.r8.u64 & ctx.r7.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82fa76b4
	__restgprlr_23(ctx, base);
	return;
loc_82F1A9E4:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82fa76b4
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F1A9F0"))) PPC_WEAK_FUNC(sub_82F1A9F0);
PPC_FUNC_IMPL(__imp__sub_82F1A9F0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x82F1A9F8;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r6,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r6.u32);
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// stw r4,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r4.u32);
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// stw r5,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r5.u32);
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// stw r4,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r4.u32);
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// stw r3,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r3.u32);
	// stw r6,48(r11)
	PPC_STORE_U32(ctx.r11.u32 + 48, ctx.r6.u32);
	// mr r6,r10
	ctx.r6.u64 = ctx.r10.u64;
	// stw r31,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r31.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r29,36(r11)
	PPC_STORE_U32(ctx.r11.u32 + 36, ctx.r29.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r29,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r29.u32);
	// addi r3,r1,148
	ctx.r3.s64 = ctx.r1.s64 + 148;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// bl 0x82f1a858
	ctx.lr = 0x82F1AA5C;
	sub_82F1A858(ctx, base);
	// addic r9,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r9.s64 = ctx.r3.s64 + -1;
	// subfe r3,r9,r3
	temp.u8 = (~ctx.r9.u32 + ctx.r3.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r3.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r9.u64 + ctx.r3.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F1AA6C"))) PPC_WEAK_FUNC(sub_82F1AA6C);
PPC_FUNC_IMPL(__imp__sub_82F1AA6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F1AA70"))) PPC_WEAK_FUNC(sub_82F1AA70);
PPC_FUNC_IMPL(__imp__sub_82F1AA70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa766c
	ctx.lr = 0x82F1AA78;
	__savegprlr_25(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// mr r29,r8
	ctx.r29.u64 = ctx.r8.u64;
	// mr r25,r9
	ctx.r25.u64 = ctx.r9.u64;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x82f1abf4
	if (ctx.cr6.eq) goto loc_82F1ABF4;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f1abf4
	if (ctx.cr6.eq) goto loc_82F1ABF4;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82f1abf4
	if (ctx.cr6.eq) goto loc_82F1ABF4;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82f1abf4
	if (ctx.cr6.eq) goto loc_82F1ABF4;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82f1abf4
	if (ctx.cr6.eq) goto loc_82F1ABF4;
	// lwz r11,344(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 344);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82f1aadc
	if (!ctx.cr6.eq) goto loc_82F1AADC;
	// bl 0x82f19d78
	ctx.lr = 0x82F1AAD0;
	sub_82F19D78(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82fa76bc
	__restgprlr_25(ctx, base);
	return;
loc_82F1AADC:
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r6,56(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 168, ctx.r11.u32);
	// stw r11,300(r31)
	PPC_STORE_U32(ctx.r31.u32 + 300, ctx.r11.u32);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// bl 0x82f1a038
	ctx.lr = 0x82F1AB04;
	sub_82F1A038(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82f1abf4
	if (ctx.cr6.eq) goto loc_82F1ABF4;
	// rlwinm r29,r29,31,1,31
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 31) & 0x7FFFFFFF;
	// lwz r7,356(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 356);
	// rlwinm r30,r30,31,1,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 31) & 0x7FFFFFFF;
	// lwz r4,352(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 352);
	// addi r9,r1,88
	ctx.r9.s64 = ctx.r1.s64 + 88;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f18b80
	ctx.lr = 0x82F1AB34;
	sub_82F18B80(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82f1abf8
	if (!ctx.cr6.eq) goto loc_82F1ABF8;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r6,60(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f1a3e8
	ctx.lr = 0x82F1AB50;
	sub_82F1A3E8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82f1abf4
	if (ctx.cr6.eq) goto loc_82F1ABF4;
	// li r11,1
	ctx.r11.s64 = 1;
	// lwz r6,56(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// li r5,1
	ctx.r5.s64 = 1;
	// stw r11,168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 168, ctx.r11.u32);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// stw r11,300(r31)
	PPC_STORE_U32(ctx.r31.u32 + 300, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f1a038
	ctx.lr = 0x82F1AB78;
	sub_82F1A038(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82f1abf4
	if (ctx.cr6.eq) goto loc_82F1ABF4;
	// addi r9,r1,92
	ctx.r9.s64 = ctx.r1.s64 + 92;
	// lwz r7,356(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 356);
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// lwz r4,352(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 352);
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f18b80
	ctx.lr = 0x82F1ABA0;
	sub_82F18B80(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82f1abe8
	if (!ctx.cr6.eq) goto loc_82F1ABE8;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r6,60(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f1a3e8
	ctx.lr = 0x82F1ABC0;
	sub_82F1A3E8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82f1abf4
	if (ctx.cr6.eq) goto loc_82F1ABF4;
	// lwz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r9,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r9.u32);
	// stw r8,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r8.u32);
loc_82F1ABE8:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82fa76bc
	__restgprlr_25(ctx, base);
	return;
loc_82F1ABF4:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82F1ABF8:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82fa76bc
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F1AC00"))) PPC_WEAK_FUNC(sub_82F1AC00);
PPC_FUNC_IMPL(__imp__sub_82F1AC00) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa766c
	ctx.lr = 0x82F1AC08;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// mr r25,r8
	ctx.r25.u64 = ctx.r8.u64;
	// mr r29,r9
	ctx.r29.u64 = ctx.r9.u64;
	// mr r6,r10
	ctx.r6.u64 = ctx.r10.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82f1ac90
	if (ctx.cr6.eq) goto loc_82F1AC90;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82f1ac90
	if (ctx.cr6.eq) goto loc_82F1AC90;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82f1ac90
	if (ctx.cr6.eq) goto loc_82F1AC90;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82f1ac90
	if (ctx.cr6.eq) goto loc_82F1AC90;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82f1ac90
	if (ctx.cr6.eq) goto loc_82F1AC90;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x82f1ad34
	if (ctx.cr6.lt) goto loc_82F1AD34;
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bgt cr6,0x82f1ad34
	if (ctx.cr6.gt) goto loc_82F1AD34;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r5,44(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// lwz r4,40(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// lwz r7,16(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// stw r10,344(r3)
	PPC_STORE_U32(ctx.r3.u32 + 344, ctx.r10.u32);
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// bl 0x82f19430
	ctx.lr = 0x82F1AC80;
	sub_82F19430(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82f1ac9c
	if (ctx.cr6.eq) goto loc_82F1AC9C;
loc_82F1AC88:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
loc_82F1AC90:
	// li r3,1
	ctx.r3.s64 = 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82fa76bc
	__restgprlr_25(ctx, base);
	return;
loc_82F1AC9C:
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// lwz r5,52(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// lwz r4,48(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// bl 0x82f19430
	ctx.lr = 0x82F1ACAC;
	sub_82F19430(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82f1ac88
	if (!ctx.cr6.eq) goto loc_82F1AC88;
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// lwz r5,20(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// lwz r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x82f19430
	ctx.lr = 0x82F1ACC4;
	sub_82F19430(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82f1ac88
	if (!ctx.cr6.eq) goto loc_82F1AC88;
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// lwz r5,36(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// lwz r4,32(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// bl 0x82f19430
	ctx.lr = 0x82F1ACDC;
	sub_82F19430(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82f1ac88
	if (!ctx.cr6.eq) goto loc_82F1AC88;
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// lwz r5,12(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x82f19430
	ctx.lr = 0x82F1ACF4;
	sub_82F19430(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82f1ac88
	if (!ctx.cr6.eq) goto loc_82F1AC88;
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// lwz r5,28(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// lwz r4,24(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// bl 0x82f19430
	ctx.lr = 0x82F1AD0C;
	sub_82F19430(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82f1ac88
	if (!ctx.cr6.eq) goto loc_82F1AC88;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f19800
	ctx.lr = 0x82F1AD1C;
	sub_82F19800(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82f1ad34
	if (!ctx.cr6.eq) goto loc_82F1AD34;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82fa76bc
	__restgprlr_25(ctx, base);
	return;
loc_82F1AD34:
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
	// mr r8,r25
	ctx.r8.u64 = ctx.r25.u64;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f1aa70
	ctx.lr = 0x82F1AD54;
	sub_82F1AA70(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82fa76bc
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F1AD5C"))) PPC_WEAK_FUNC(sub_82F1AD5C);
PPC_FUNC_IMPL(__imp__sub_82F1AD5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F1AD60"))) PPC_WEAK_FUNC(sub_82F1AD60);
PPC_FUNC_IMPL(__imp__sub_82F1AD60) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7640
	ctx.lr = 0x82F1AD68;
	__savegprlr_14(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r14,r7
	ctx.r14.u64 = ctx.r7.u64;
	// lwz r7,16(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r8,300(r1)
	PPC_STORE_U32(ctx.r1.u32 + 300, ctx.r8.u32);
	// mr r17,r4
	ctx.r17.u64 = ctx.r4.u64;
	// stw r9,308(r1)
	PPC_STORE_U32(ctx.r1.u32 + 308, ctx.r9.u32);
	// mr r23,r5
	ctx.r23.u64 = ctx.r5.u64;
	// stw r10,316(r1)
	PPC_STORE_U32(ctx.r1.u32 + 316, ctx.r10.u32);
	// mr r21,r6
	ctx.r21.u64 = ctx.r6.u64;
	// cmplwi cr6,r7,3
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 3, ctx.xer);
	// ble cr6,0x82f1ada4
	if (!ctx.cr6.gt) goto loc_82F1ADA4;
	// srawi r11,r6,31
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x7FFFFFFF) != 0);
	ctx.r11.s64 = ctx.r6.s32 >> 31;
	// xor r6,r6,r11
	ctx.r6.u64 = ctx.r6.u64 ^ ctx.r11.u64;
	// subf r21,r11,r6
	ctx.r21.s64 = ctx.r6.s64 - ctx.r11.s64;
loc_82F1ADA4:
	// lis r11,16729
	ctx.r11.s64 = 1096351744;
	// lis r6,22870
	ctx.r6.s64 = 1498808320;
	// lis r5,12889
	ctx.r5.s64 = 844693504;
	// lis r4,22101
	ctx.r4.s64 = 1448411136;
	// lis r3,12338
	ctx.r3.s64 = 808583168;
	// lis r31,12849
	ctx.r31.s64 = 842072064;
	// lis r30,20532
	ctx.r30.s64 = 1345585152;
	// ori r16,r11,21846
	ctx.r16.u64 = ctx.r11.u64 | 21846;
	// ori r19,r6,22869
	ctx.r19.u64 = ctx.r6.u64 | 22869;
	// ori r18,r5,21849
	ctx.r18.u64 = ctx.r5.u64 | 21849;
	// ori r25,r4,22857
	ctx.r25.u64 = ctx.r4.u64 | 22857;
	// ori r22,r3,13385
	ctx.r22.u64 = ctx.r3.u64 | 13385;
	// ori r20,r31,22105
	ctx.r20.u64 = ctx.r31.u64 | 22105;
	// ori r15,r30,12850
	ctx.r15.u64 = ctx.r30.u64 | 12850;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x82f1ae34
	if (ctx.cr6.eq) goto loc_82F1AE34;
	// cmpwi cr6,r7,3
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 3, ctx.xer);
	// beq cr6,0x82f1ae34
	if (ctx.cr6.eq) goto loc_82F1AE34;
	// cmplw cr6,r7,r16
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r16.u32, ctx.xer);
	// beq cr6,0x82f1ae34
	if (ctx.cr6.eq) goto loc_82F1AE34;
	// cmpw cr6,r7,r19
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r19.s32, ctx.xer);
	// beq cr6,0x82f1ae34
	if (ctx.cr6.eq) goto loc_82F1AE34;
	// cmpw cr6,r7,r18
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r18.s32, ctx.xer);
	// beq cr6,0x82f1ae34
	if (ctx.cr6.eq) goto loc_82F1AE34;
	// lis r11,22066
	ctx.r11.s64 = 1446117376;
	// ori r6,r11,12598
	ctx.r6.u64 = ctx.r11.u64 | 12598;
	// cmplw cr6,r7,r6
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x82f1ae34
	if (ctx.cr6.eq) goto loc_82F1AE34;
	// cmpw cr6,r7,r25
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r25.s32, ctx.xer);
	// beq cr6,0x82f1ae34
	if (ctx.cr6.eq) goto loc_82F1AE34;
	// cmpw cr6,r7,r22
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r22.s32, ctx.xer);
	// beq cr6,0x82f1ae34
	if (ctx.cr6.eq) goto loc_82F1AE34;
	// cmpw cr6,r7,r20
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r20.s32, ctx.xer);
	// beq cr6,0x82f1ae34
	if (ctx.cr6.eq) goto loc_82F1AE34;
	// cmplw cr6,r7,r15
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r15.u32, ctx.xer);
	// bne cr6,0x82f1b0c0
	if (!ctx.cr6.eq) goto loc_82F1B0C0;
loc_82F1AE34:
	// cmplwi cr6,r17,0
	ctx.cr6.compare<uint32_t>(ctx.r17.u32, 0, ctx.xer);
	// beq cr6,0x82f1b0c8
	if (ctx.cr6.eq) goto loc_82F1B0C8;
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// blt cr6,0x82f1b0c0
	if (ctx.cr6.lt) goto loc_82F1B0C0;
	// cmpwi cr6,r14,0
	ctx.cr6.compare<int32_t>(ctx.r14.s32, 0, ctx.xer);
	// blt cr6,0x82f1b0c0
	if (ctx.cr6.lt) goto loc_82F1B0C0;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// blt cr6,0x82f1b0c0
	if (ctx.cr6.lt) goto loc_82F1B0C0;
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// blt cr6,0x82f1b0c0
	if (ctx.cr6.lt) goto loc_82F1B0C0;
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// blt cr6,0x82f1b0c0
	if (ctx.cr6.lt) goto loc_82F1B0C0;
	// lwz r24,324(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 324);
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// blt cr6,0x82f1b0c0
	if (ctx.cr6.lt) goto loc_82F1B0C0;
	// lwz r26,332(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 332);
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// blt cr6,0x82f1b0c0
	if (ctx.cr6.lt) goto loc_82F1B0C0;
	// lwz r27,340(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 340);
	// cmpwi cr6,r27,1
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 1, ctx.xer);
	// blt cr6,0x82f1b0c0
	if (ctx.cr6.lt) goto loc_82F1B0C0;
	// lwz r28,348(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 348);
	// cmpwi cr6,r28,1
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 1, ctx.xer);
	// blt cr6,0x82f1b0c0
	if (ctx.cr6.lt) goto loc_82F1B0C0;
	// lwz r4,4(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// bgt cr6,0x82f1aea8
	if (ctx.cr6.gt) goto loc_82F1AEA8;
	// neg r11,r4
	ctx.r11.s64 = -ctx.r4.s64;
loc_82F1AEA8:
	// add r9,r14,r9
	ctx.r9.u64 = ctx.r14.u64 + ctx.r9.u64;
	// cmpw cr6,r9,r11
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r11.s32, ctx.xer);
	// bgt cr6,0x82f1b0c0
	if (ctx.cr6.gt) goto loc_82F1B0C0;
	// lwz r5,8(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// bgt cr6,0x82f1aec8
	if (ctx.cr6.gt) goto loc_82F1AEC8;
	// neg r11,r5
	ctx.r11.s64 = -ctx.r5.s64;
loc_82F1AEC8:
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bgt cr6,0x82f1b0c0
	if (ctx.cr6.gt) goto loc_82F1B0C0;
	// add r11,r24,r27
	ctx.r11.u64 = ctx.r24.u64 + ctx.r27.u64;
	// cmpw cr6,r11,r23
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r23.s32, ctx.xer);
	// bgt cr6,0x82f1b0c0
	if (ctx.cr6.gt) goto loc_82F1B0C0;
	// srawi r11,r21,31
	ctx.xer.ca = (ctx.r21.s32 < 0) & ((ctx.r21.u32 & 0x7FFFFFFF) != 0);
	ctx.r11.s64 = ctx.r21.s32 >> 31;
	// add r10,r26,r28
	ctx.r10.u64 = ctx.r26.u64 + ctx.r28.u64;
	// xor r9,r21,r11
	ctx.r9.u64 = ctx.r21.u64 ^ ctx.r11.u64;
	// subf r8,r11,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r11.s64;
	// cmpw cr6,r10,r8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, ctx.xer);
	// bgt cr6,0x82f1b0c0
	if (ctx.cr6.gt) goto loc_82F1B0C0;
	// lwz r30,364(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 364);
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// lhz r31,14(r29)
	ctx.r31.u64 = PPC_LOAD_U16(ctx.r29.u32 + 14);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// bl 0x82f19430
	ctx.lr = 0x82F1AF0C;
	sub_82F19430(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82f1b0c0
	if (!ctx.cr6.eq) goto loc_82F1B0C0;
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// bl 0x82f19430
	ctx.lr = 0x82F1AF24;
	sub_82F19430(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82f1b0c0
	if (!ctx.cr6.eq) goto loc_82F1B0C0;
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// lwz r5,316(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 316);
	// lwz r4,308(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 308);
	// bl 0x82f19430
	ctx.lr = 0x82F1AF3C;
	sub_82F19430(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82f1b0c0
	if (!ctx.cr6.eq) goto loc_82F1B0C0;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// bl 0x82f19430
	ctx.lr = 0x82F1AF54;
	sub_82F19430(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82f1b0c0
	if (!ctx.cr6.eq) goto loc_82F1B0C0;
	// mr r4,r14
	ctx.r4.u64 = ctx.r14.u64;
	// lwz r5,300(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 300);
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// bl 0x82f19430
	ctx.lr = 0x82F1AF6C;
	sub_82F19430(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82f1b0c0
	if (!ctx.cr6.eq) goto loc_82F1B0C0;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// bl 0x82f19430
	ctx.lr = 0x82F1AF84;
	sub_82F19430(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82f1b0c0
	if (!ctx.cr6.eq) goto loc_82F1B0C0;
	// lis r11,12593
	ctx.r11.s64 = 825294848;
	// ori r10,r11,13392
	ctx.r10.u64 = ctx.r11.u64 | 13392;
	// cmpw cr6,r7,r10
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x82f1afa4
	if (!ctx.cr6.eq) goto loc_82F1AFA4;
	// li r31,1
	ctx.r31.s64 = 1;
	// b 0x82f1aff4
	goto loc_82F1AFF4;
loc_82F1AFA4:
	// cmpw cr6,r7,r25
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r25.s32, ctx.xer);
	// beq cr6,0x82f1aff0
	if (ctx.cr6.eq) goto loc_82F1AFF0;
	// cmpw cr6,r7,r22
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r22.s32, ctx.xer);
	// beq cr6,0x82f1aff0
	if (ctx.cr6.eq) goto loc_82F1AFF0;
	// cmpw cr6,r7,r20
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r20.s32, ctx.xer);
	// beq cr6,0x82f1aff0
	if (ctx.cr6.eq) goto loc_82F1AFF0;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne cr6,0x82f1afcc
	if (!ctx.cr6.eq) goto loc_82F1AFCC;
	// cmpwi cr6,r31,32
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 32, ctx.xer);
	// b 0x82f1afe8
	goto loc_82F1AFE8;
loc_82F1AFCC:
	// cmpw cr6,r7,r19
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r19.s32, ctx.xer);
	// beq cr6,0x82f1aff0
	if (ctx.cr6.eq) goto loc_82F1AFF0;
	// cmpw cr6,r7,r18
	ctx.cr6.compare<int32_t>(ctx.r7.s32, ctx.r18.s32, ctx.xer);
	// beq cr6,0x82f1aff0
	if (ctx.cr6.eq) goto loc_82F1AFF0;
	// cmplw cr6,r7,r16
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r16.u32, ctx.xer);
	// beq cr6,0x82f1aff0
	if (ctx.cr6.eq) goto loc_82F1AFF0;
	// cmplw cr6,r7,r15
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r15.u32, ctx.xer);
loc_82F1AFE8:
	// li r31,0
	ctx.r31.s64 = 0;
	// bne cr6,0x82f1aff4
	if (!ctx.cr6.eq) goto loc_82F1AFF4;
loc_82F1AFF0:
	// lwz r31,356(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 356);
loc_82F1AFF4:
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// mr r6,r21
	ctx.r6.u64 = ctx.r21.u64;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// mr r4,r17
	ctx.r4.u64 = ctx.r17.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82f19920
	ctx.lr = 0x82F1B010;
	sub_82F19920(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82f1b0cc
	if (!ctx.cr6.eq) goto loc_82F1B0CC;
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// lwz r3,0(r17)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r17.u32 + 0);
	// srawi r10,r11,31
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFFFFFF) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 31;
	// xor r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 ^ ctx.r10.u64;
	// subf r8,r10,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r10.s64;
	// stw r8,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r8.u32);
	// lwz r7,16(r29)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// cmplwi cr6,r7,3
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 3, ctx.xer);
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// ble cr6,0x82f1b04c
	if (!ctx.cr6.gt) goto loc_82F1B04C;
	// srawi r10,r11,31
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFFFFFF) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 31;
	// xor r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 ^ ctx.r10.u64;
	// subf r11,r10,r9
	ctx.r11.s64 = ctx.r9.s64 - ctx.r10.s64;
loc_82F1B04C:
	// srawi r10,r23,31
	ctx.xer.ca = (ctx.r23.s32 < 0) & ((ctx.r23.u32 & 0x7FFFFFFF) != 0);
	ctx.r10.s64 = ctx.r23.s32 >> 31;
	// stw r11,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r11.u32);
	// stw r21,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r21.u32);
	// xor r9,r23,r10
	ctx.r9.u64 = ctx.r23.u64 ^ ctx.r10.u64;
	// stw r31,340(r3)
	PPC_STORE_U32(ctx.r3.u32 + 340, ctx.r31.u32);
	// stw r30,344(r3)
	PPC_STORE_U32(ctx.r3.u32 + 344, ctx.r30.u32);
	// subf r8,r10,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r10.s64;
	// stw r8,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r8.u32);
	// bl 0x82f1a7a0
	ctx.lr = 0x82F1B070;
	sub_82F1A7A0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82f1b088
	if (!ctx.cr6.eq) goto loc_82F1B088;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x82fa7690
	__restgprlr_14(ctx, base);
	return;
loc_82F1B088:
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// lwz r7,316(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 316);
	// mr r9,r26
	ctx.r9.u64 = ctx.r26.u64;
	// lwz r6,308(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 308);
	// mr r8,r24
	ctx.r8.u64 = ctx.r24.u64;
	// lwz r5,300(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 300);
	// mr r4,r14
	ctx.r4.u64 = ctx.r14.u64;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// mr r3,r17
	ctx.r3.u64 = ctx.r17.u64;
	// bl 0x82f1a858
	ctx.lr = 0x82F1B0B0;
	sub_82F1A858(ctx, base);
	// addic r11,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// subfe r3,r11,r3
	temp.u8 = (~ctx.r11.u32 + ctx.r3.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r3.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r11.u64 + ctx.r3.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x82fa7690
	__restgprlr_14(ctx, base);
	return;
loc_82F1B0C0:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r17)
	PPC_STORE_U32(ctx.r17.u32 + 0, ctx.r11.u32);
loc_82F1B0C8:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82F1B0CC:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x82fa7690
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F1B0D4"))) PPC_WEAK_FUNC(sub_82F1B0D4);
PPC_FUNC_IMPL(__imp__sub_82F1B0D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F1B0D8"))) PPC_WEAK_FUNC(sub_82F1B0D8);
PPC_FUNC_IMPL(__imp__sub_82F1B0D8) {
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
	// mr r31,r7
	ctx.r31.u64 = ctx.r7.u64;
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r30,r8
	ctx.r30.u64 = ctx.r8.u64;
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r6,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r6.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r5,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r5.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r30,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r30.u32);
	// stw r31,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r31.u32);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bl 0x82f1ad60
	ctx.lr = 0x82F1B124;
	sub_82F1AD60(ctx, base);
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

__attribute__((alias("__imp__sub_82F1B13C"))) PPC_WEAK_FUNC(sub_82F1B13C);
PPC_FUNC_IMPL(__imp__sub_82F1B13C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F1B140"))) PPC_WEAK_FUNC(sub_82F1B140);
PPC_FUNC_IMPL(__imp__sub_82F1B140) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7654
	ctx.lr = 0x82F1B148;
	__savegprlr_19(ctx, base);
	// stw r4,-196(r1)
	PPC_STORE_U32(ctx.r1.u32 + -196, ctx.r4.u32);
	// addi r31,r1,-208
	ctx.r31.s64 = ctx.r1.s64 + -208;
	// stw r3,-244(r1)
	PPC_STORE_U32(ctx.r1.u32 + -244, ctx.r3.u32);
	// lis r11,-31954
	ctx.r11.s64 = -2094137344;
	// lwz r10,108(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// addi r30,r1,-256
	ctx.r30.s64 = ctx.r1.s64 + -256;
	// addi r29,r1,-208
	ctx.r29.s64 = ctx.r1.s64 + -208;
	// vspltisb v0,0
	_mm_store_si128((__m128i*)ctx.v0.u8, _mm_set1_epi8(char(0x0)));
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// vspltish v22,4
	_mm_store_si128((__m128i*)ctx.v22.s16, _mm_set1_epi16(short(4)));
	// rlwinm r28,r7,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// vspltish v21,5
	_mm_store_si128((__m128i*)ctx.v21.s16, _mm_set1_epi16(short(5)));
	// lwz r11,-1536(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -1536);
	// vspltisw128 v63,2
	_mm_store_si128((__m128i*)ctx.v63.u32, _mm_set1_epi32(int(0x2)));
	// vspltisw128 v62,8
	_mm_store_si128((__m128i*)ctx.v62.u32, _mm_set1_epi32(int(0x8)));
	// rlwinm r26,r7,1,0,30
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 1) & 0xFFFFFFFE;
	// mullw r10,r10,r7
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r7.s32);
	// stw r7,-272(r1)
	PPC_STORE_U32(ctx.r1.u32 + -272, ctx.r7.u32);
	// lwz r9,100(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// vrlh v18,v22,v21
	ctx.v18.u16[0] = (ctx.v22.u16[0] << (ctx.v21.u16[0] & 0xF)) | (ctx.v22.u16[0] >> (16 - (ctx.v21.u16[0] & 0xF)));
	ctx.v18.u16[1] = (ctx.v22.u16[1] << (ctx.v21.u16[1] & 0xF)) | (ctx.v22.u16[1] >> (16 - (ctx.v21.u16[1] & 0xF)));
	ctx.v18.u16[2] = (ctx.v22.u16[2] << (ctx.v21.u16[2] & 0xF)) | (ctx.v22.u16[2] >> (16 - (ctx.v21.u16[2] & 0xF)));
	ctx.v18.u16[3] = (ctx.v22.u16[3] << (ctx.v21.u16[3] & 0xF)) | (ctx.v22.u16[3] >> (16 - (ctx.v21.u16[3] & 0xF)));
	ctx.v18.u16[4] = (ctx.v22.u16[4] << (ctx.v21.u16[4] & 0xF)) | (ctx.v22.u16[4] >> (16 - (ctx.v21.u16[4] & 0xF)));
	ctx.v18.u16[5] = (ctx.v22.u16[5] << (ctx.v21.u16[5] & 0xF)) | (ctx.v22.u16[5] >> (16 - (ctx.v21.u16[5] & 0xF)));
	ctx.v18.u16[6] = (ctx.v22.u16[6] << (ctx.v21.u16[6] & 0xF)) | (ctx.v22.u16[6] >> (16 - (ctx.v21.u16[6] & 0xF)));
	ctx.v18.u16[7] = (ctx.v22.u16[7] << (ctx.v21.u16[7] & 0xF)) | (ctx.v22.u16[7] >> (16 - (ctx.v21.u16[7] & 0xF)));
	// stw r26,-268(r1)
	PPC_STORE_U32(ctx.r1.u32 + -268, ctx.r26.u32);
	// vspltish v25,1
	_mm_store_si128((__m128i*)ctx.v25.s16, _mm_set1_epi16(short(1)));
	// lvx128 v7,r0,r11
	simd::store_shuffled(ctx.v7, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// vspltish v24,2
	_mm_store_si128((__m128i*)ctx.v24.s16, _mm_set1_epi16(short(2)));
	// vspltish v23,3
	_mm_store_si128((__m128i*)ctx.v23.s16, _mm_set1_epi16(short(3)));
	// vslw128 v15,v62,v63
	ctx.v15.u32[0] = ctx.v62.u32[0] << (ctx.v63.u8[0] & 0x1F);
	ctx.v15.u32[1] = ctx.v62.u32[1] << (ctx.v63.u8[4] & 0x1F);
	ctx.v15.u32[2] = ctx.v62.u32[2] << (ctx.v63.u8[8] & 0x1F);
	ctx.v15.u32[3] = ctx.v62.u32[3] << (ctx.v63.u8[12] & 0x1F);
	// vspltish v20,7
	_mm_store_si128((__m128i*)ctx.v20.s16, _mm_set1_epi16(short(7)));
	// stw r28,-260(r1)
	PPC_STORE_U32(ctx.r1.u32 + -260, ctx.r28.u32);
	// vspltish v19,8
	_mm_store_si128((__m128i*)ctx.v19.s16, _mm_set1_epi16(short(8)));
	// vor v17,v0,v0
	_mm_store_si128((__m128i*)ctx.v17.u8, _mm_load_si128((__m128i*)ctx.v0.u8));
	// subf r7,r7,r28
	ctx.r7.s64 = ctx.r28.s64 - ctx.r7.s64;
	// add r25,r10,r3
	ctx.r25.u64 = ctx.r10.u64 + ctx.r3.u64;
	// lvx128 v60,r0,r31
	simd::store_shuffled(ctx.v60, simd::load_and_shuffle(base + ((ctx.r31.u32) & ~0xF), VectorMaskL));
	// stw r7,-264(r1)
	PPC_STORE_U32(ctx.r1.u32 + -264, ctx.r7.u32);
	// lvx128 v61,r0,r30
	simd::store_shuffled(ctx.v61, simd::load_and_shuffle(base + ((ctx.r30.u32) & ~0xF), VectorMaskL));
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// vspltw128 v27,v60,3
	_mm_store_si128((__m128i*)ctx.v27.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v60.u32), 0x0));
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// vspltw128 v14,v61,3
	_mm_store_si128((__m128i*)ctx.v14.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v61.u32), 0x0));
	// stvx128 v27,r0,r29
	_mm_store_si128((__m128i*)(base + ((ctx.r29.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v27.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// ble cr6,0x82f1b668
	if (!ctx.cr6.gt) goto loc_82F1B668;
	// addi r10,r9,-1
	ctx.r10.s64 = ctx.r9.s64 + -1;
	// lwz r22,92(r1)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// addi r9,r1,-272
	ctx.r9.s64 = ctx.r1.s64 + -272;
	// lwz r21,84(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// subf r11,r3,r25
	ctx.r11.s64 = ctx.r25.s64 - ctx.r3.s64;
	// rlwinm r10,r10,28,4,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 28) & 0xFFFFFFF;
	// add r23,r11,r4
	ctx.r23.u64 = ctx.r11.u64 + ctx.r4.u64;
	// addi r19,r10,1
	ctx.r19.s64 = ctx.r10.s64 + 1;
	// lvx128 v16,r0,r9
	simd::store_shuffled(ctx.v16, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// subf r20,r5,r6
	ctx.r20.s64 = ctx.r6.s64 - ctx.r5.s64;
	// li r10,16
	ctx.r10.s64 = 16;
	// li r11,32
	ctx.r11.s64 = 32;
	// li r24,4
	ctx.r24.s64 = 4;
loc_82F1B220:
	// vor v13,v17,v17
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_load_si128((__m128i*)ctx.v17.u8));
	// addi r9,r1,-272
	ctx.r9.s64 = ctx.r1.s64 + -272;
	// vor v12,v16,v16
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_load_si128((__m128i*)ctx.v16.u8));
	// addi r5,r1,-224
	ctx.r5.s64 = ctx.r1.s64 + -224;
	// addi r4,r1,-240
	ctx.r4.s64 = ctx.r1.s64 + -240;
	// vaddsws v17,v17,v15
	simd::store_u32(ctx.v17.u32, simd::add_saturate_i32(simd::to_vec128i(ctx.v17), simd::to_vec128i(ctx.v15)));
	// addi r31,r1,-256
	ctx.r31.s64 = ctx.r1.s64 + -256;
	// vaddsws v16,v16,v15
	simd::store_u32(ctx.v16.u32, simd::add_saturate_i32(simd::to_vec128i(ctx.v16), simd::to_vec128i(ctx.v15)));
	// vaddsws v11,v14,v13
	simd::store_u32(ctx.v11.u32, simd::add_saturate_i32(simd::to_vec128i(ctx.v14), simd::to_vec128i(ctx.v13)));
	// mr r28,r27
	ctx.r28.u64 = ctx.r27.u64;
	// vaddsws v10,v14,v12
	simd::store_u32(ctx.v10.u32, simd::add_saturate_i32(simd::to_vec128i(ctx.v14), simd::to_vec128i(ctx.v12)));
	// add r29,r20,r27
	ctx.r29.u64 = ctx.r20.u64 + ctx.r27.u64;
	// vaddsws v9,v27,v13
	simd::store_u32(ctx.v9.u32, simd::add_saturate_i32(simd::to_vec128i(ctx.v27), simd::to_vec128i(ctx.v13)));
	// addi r27,r27,8
	ctx.r27.s64 = ctx.r27.s64 + 8;
	// vaddsws v8,v27,v12
	simd::store_u32(ctx.v8.u32, simd::add_saturate_i32(simd::to_vec128i(ctx.v27), simd::to_vec128i(ctx.v12)));
	// stvx128 v11,r0,r9
	_mm_store_si128((__m128i*)(base + ((ctx.r9.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lwz r7,-268(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + -268);
	// stvx128 v10,r0,r5
	_mm_store_si128((__m128i*)(base + ((ctx.r5.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v10.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lwz r6,-264(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + -264);
	// lwz r5,-260(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + -260);
	// stvx128 v9,r0,r4
	_mm_store_si128((__m128i*)(base + ((ctx.r4.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v9.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lwz r4,-220(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + -220);
	// stvx128 v8,r0,r31
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v8.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lwz r9,-272(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + -272);
	// lvsl v6,r0,r9
	temp.u32 = ctx.r9.u32;
	_mm_store_si128((__m128i*)ctx.v6.u8, _mm_load_si128((__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// lvx128 v62,r7,r10
	simd::store_shuffled(ctx.v62, simd::load_and_shuffle(base + ((ctx.r7.u32 + ctx.r10.u32) & ~0xF), VectorMaskL));
	// lwz r3,-228(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + -228);
	// lvx128 v59,r0,r7
	simd::store_shuffled(ctx.v59, simd::load_and_shuffle(base + ((ctx.r7.u32) & ~0xF), VectorMaskL));
	// lwz r31,-256(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + -256);
	// lvx128 v58,r7,r11
	simd::store_shuffled(ctx.v58, simd::load_and_shuffle(base + ((ctx.r7.u32 + ctx.r11.u32) & ~0xF), VectorMaskL));
	// lwz r7,-224(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + -224);
	// lvx128 v63,r9,r10
	simd::store_shuffled(ctx.v63, simd::load_and_shuffle(base + ((ctx.r9.u32 + ctx.r10.u32) & ~0xF), VectorMaskL));
	// vperm128 v60,v59,v62,v6
	_mm_store_si128((__m128i*)ctx.v60.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v59.u8), _mm_load_si128((__m128i*)ctx.v62.u8), _mm_load_si128((__m128i*)ctx.v6.u8)));
	// lvx128 v57,r9,r11
	simd::store_shuffled(ctx.v57, simd::load_and_shuffle(base + ((ctx.r9.u32 + ctx.r11.u32) & ~0xF), VectorMaskL));
	// vperm128 v56,v62,v58,v6
	_mm_store_si128((__m128i*)ctx.v56.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v62.u8), _mm_load_si128((__m128i*)ctx.v58.u8), _mm_load_si128((__m128i*)ctx.v6.u8)));
	// lvx128 v55,r0,r9
	simd::store_shuffled(ctx.v55, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// lwz r9,-240(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + -240);
	// vperm128 v54,v63,v57,v6
	_mm_store_si128((__m128i*)ctx.v54.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)ctx.v57.u8), _mm_load_si128((__m128i*)ctx.v6.u8)));
	// lvx128 v62,r5,r10
	simd::store_shuffled(ctx.v62, simd::load_and_shuffle(base + ((ctx.r5.u32 + ctx.r10.u32) & ~0xF), VectorMaskL));
	// vperm128 v61,v55,v63,v6
	_mm_store_si128((__m128i*)ctx.v61.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v55.u8), _mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)ctx.v6.u8)));
	// lvx128 v63,r6,r10
	simd::store_shuffled(ctx.v63, simd::load_and_shuffle(base + ((ctx.r6.u32 + ctx.r10.u32) & ~0xF), VectorMaskL));
	// lvx128 v53,r0,r6
	simd::store_shuffled(ctx.v53, simd::load_and_shuffle(base + ((ctx.r6.u32) & ~0xF), VectorMaskL));
	// vperm128 v4,v60,v56,v7
	_mm_store_si128((__m128i*)ctx.v4.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v60.u8), _mm_load_si128((__m128i*)ctx.v56.u8), _mm_load_si128((__m128i*)ctx.v7.u8)));
	// lvx128 v52,r6,r11
	simd::store_shuffled(ctx.v52, simd::load_and_shuffle(base + ((ctx.r6.u32 + ctx.r11.u32) & ~0xF), VectorMaskL));
	// lwz r30,-252(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + -252);
	// lvx128 v49,r0,r5
	simd::store_shuffled(ctx.v49, simd::load_and_shuffle(base + ((ctx.r5.u32) & ~0xF), VectorMaskL));
	// vperm128 v51,v53,v63,v6
	_mm_store_si128((__m128i*)ctx.v51.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v53.u8), _mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)ctx.v6.u8)));
	// lvx128 v48,r5,r11
	simd::store_shuffled(ctx.v48, simd::load_and_shuffle(base + ((ctx.r5.u32 + ctx.r11.u32) & ~0xF), VectorMaskL));
	// vperm128 v50,v63,v52,v6
	_mm_store_si128((__m128i*)ctx.v50.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)ctx.v52.u8), _mm_load_si128((__m128i*)ctx.v6.u8)));
	// vperm128 v60,v49,v62,v6
	_mm_store_si128((__m128i*)ctx.v60.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v49.u8), _mm_load_si128((__m128i*)ctx.v62.u8), _mm_load_si128((__m128i*)ctx.v6.u8)));
	// lvx128 v42,r0,r4
	simd::store_shuffled(ctx.v42, simd::load_and_shuffle(base + ((ctx.r4.u32) & ~0xF), VectorMaskL));
	// vperm128 v47,v62,v48,v6
	_mm_store_si128((__m128i*)ctx.v47.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v62.u8), _mm_load_si128((__m128i*)ctx.v48.u8), _mm_load_si128((__m128i*)ctx.v6.u8)));
	// lvx128 v62,r4,r10
	simd::store_shuffled(ctx.v62, simd::load_and_shuffle(base + ((ctx.r4.u32 + ctx.r10.u32) & ~0xF), VectorMaskL));
	// lvx128 v40,r4,r11
	simd::store_shuffled(ctx.v40, simd::load_and_shuffle(base + ((ctx.r4.u32 + ctx.r11.u32) & ~0xF), VectorMaskL));
	// lwz r4,-232(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + -232);
	// vperm128 v3,v61,v54,v7
	_mm_store_si128((__m128i*)ctx.v3.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v61.u8), _mm_load_si128((__m128i*)ctx.v54.u8), _mm_load_si128((__m128i*)ctx.v7.u8)));
	// vor128 v61,v51,v51
	_mm_store_si128((__m128i*)ctx.v61.u8, _mm_load_si128((__m128i*)ctx.v51.u8));
	// lvx128 v46,r0,r9
	simd::store_shuffled(ctx.v46, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// vperm128 v39,v62,v40,v6
	_mm_store_si128((__m128i*)ctx.v39.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v62.u8), _mm_load_si128((__m128i*)ctx.v40.u8), _mm_load_si128((__m128i*)ctx.v6.u8)));
	// lvx128 v45,r9,r11
	simd::store_shuffled(ctx.v45, simd::load_and_shuffle(base + ((ctx.r9.u32 + ctx.r11.u32) & ~0xF), VectorMaskL));
	// vperm128 v29,v60,v47,v7
	_mm_store_si128((__m128i*)ctx.v29.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v60.u8), _mm_load_si128((__m128i*)ctx.v47.u8), _mm_load_si128((__m128i*)ctx.v7.u8)));
	// lvsl v5,r0,r9
	temp.u32 = ctx.r9.u32;
	_mm_store_si128((__m128i*)ctx.v5.u8, _mm_load_si128((__m128i*)&VectorShiftTableL[(temp.u32 & 0xF) * 16]));
	// vperm128 v60,v42,v62,v6
	_mm_store_si128((__m128i*)ctx.v60.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v42.u8), _mm_load_si128((__m128i*)ctx.v62.u8), _mm_load_si128((__m128i*)ctx.v6.u8)));
	// lvx128 v63,r7,r10
	simd::store_shuffled(ctx.v63, simd::load_and_shuffle(base + ((ctx.r7.u32 + ctx.r10.u32) & ~0xF), VectorMaskL));
	// vperm128 v1,v61,v50,v7
	_mm_store_si128((__m128i*)ctx.v1.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v61.u8), _mm_load_si128((__m128i*)ctx.v50.u8), _mm_load_si128((__m128i*)ctx.v7.u8)));
	// lvx128 v44,r0,r7
	simd::store_shuffled(ctx.v44, simd::load_and_shuffle(base + ((ctx.r7.u32) & ~0xF), VectorMaskL));
	// vmrghb v31,v0,v3
	_mm_store_si128((__m128i*)ctx.v31.u8, _mm_unpackhi_epi8(_mm_load_si128((__m128i*)ctx.v3.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// lvx128 v43,r7,r11
	simd::store_shuffled(ctx.v43, simd::load_and_shuffle(base + ((ctx.r7.u32 + ctx.r11.u32) & ~0xF), VectorMaskL));
	// lwz r7,-236(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + -236);
	// vperm128 v61,v44,v63,v6
	_mm_store_si128((__m128i*)ctx.v61.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v44.u8), _mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)ctx.v6.u8)));
	// vperm128 v41,v63,v43,v6
	_mm_store_si128((__m128i*)ctx.v41.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)ctx.v43.u8), _mm_load_si128((__m128i*)ctx.v6.u8)));
	// lvx128 v63,r9,r10
	simd::store_shuffled(ctx.v63, simd::load_and_shuffle(base + ((ctx.r9.u32 + ctx.r10.u32) & ~0xF), VectorMaskL));
	// vmrghb v2,v0,v4
	_mm_store_si128((__m128i*)ctx.v2.u8, _mm_unpackhi_epi8(_mm_load_si128((__m128i*)ctx.v4.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vperm128 v35,v63,v45,v5
	_mm_store_si128((__m128i*)ctx.v35.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)ctx.v45.u8), _mm_load_si128((__m128i*)ctx.v5.u8)));
	// vperm128 v28,v61,v41,v7
	_mm_store_si128((__m128i*)ctx.v28.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v61.u8), _mm_load_si128((__m128i*)ctx.v41.u8), _mm_load_si128((__m128i*)ctx.v7.u8)));
	// lvx128 v36,r0,r4
	simd::store_shuffled(ctx.v36, simd::load_and_shuffle(base + ((ctx.r4.u32) & ~0xF), VectorMaskL));
	// vperm128 v61,v46,v63,v5
	_mm_store_si128((__m128i*)ctx.v61.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v46.u8), _mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)ctx.v5.u8)));
	// lvx128 v63,r4,r10
	simd::store_shuffled(ctx.v63, simd::load_and_shuffle(base + ((ctx.r4.u32 + ctx.r10.u32) & ~0xF), VectorMaskL));
	// lvx128 v62,r7,r10
	simd::store_shuffled(ctx.v62, simd::load_and_shuffle(base + ((ctx.r7.u32 + ctx.r10.u32) & ~0xF), VectorMaskL));
	// lvx128 v38,r0,r7
	simd::store_shuffled(ctx.v38, simd::load_and_shuffle(base + ((ctx.r7.u32) & ~0xF), VectorMaskL));
	// lvx128 v37,r7,r11
	simd::store_shuffled(ctx.v37, simd::load_and_shuffle(base + ((ctx.r7.u32 + ctx.r11.u32) & ~0xF), VectorMaskL));
	// vperm128 v34,v38,v62,v5
	_mm_store_si128((__m128i*)ctx.v34.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v38.u8), _mm_load_si128((__m128i*)ctx.v62.u8), _mm_load_si128((__m128i*)ctx.v5.u8)));
	// lvx128 v33,r0,r3
	simd::store_shuffled(ctx.v33, simd::load_and_shuffle(base + ((ctx.r3.u32) & ~0xF), VectorMaskL));
	// vperm128 v32,v62,v37,v5
	_mm_store_si128((__m128i*)ctx.v32.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v62.u8), _mm_load_si128((__m128i*)ctx.v37.u8), _mm_load_si128((__m128i*)ctx.v5.u8)));
	// lvx128 v62,r3,r10
	simd::store_shuffled(ctx.v62, simd::load_and_shuffle(base + ((ctx.r3.u32 + ctx.r10.u32) & ~0xF), VectorMaskL));
	// lvx128 v57,r3,r11
	simd::store_shuffled(ctx.v57, simd::load_and_shuffle(base + ((ctx.r3.u32 + ctx.r11.u32) & ~0xF), VectorMaskL));
	// vperm128 v58,v36,v63,v5
	_mm_store_si128((__m128i*)ctx.v58.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v36.u8), _mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)ctx.v5.u8)));
	// vperm128 v56,v33,v62,v5
	_mm_store_si128((__m128i*)ctx.v56.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v33.u8), _mm_load_si128((__m128i*)ctx.v62.u8), _mm_load_si128((__m128i*)ctx.v5.u8)));
	// lvx128 v52,r0,r30
	simd::store_shuffled(ctx.v52, simd::load_and_shuffle(base + ((ctx.r30.u32) & ~0xF), VectorMaskL));
	// vperm128 v54,v62,v57,v5
	_mm_store_si128((__m128i*)ctx.v54.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v62.u8), _mm_load_si128((__m128i*)ctx.v57.u8), _mm_load_si128((__m128i*)ctx.v5.u8)));
	// lvx128 v62,r30,r10
	simd::store_shuffled(ctx.v62, simd::load_and_shuffle(base + ((ctx.r30.u32 + ctx.r10.u32) & ~0xF), VectorMaskL));
	// lvx128 v59,r4,r11
	simd::store_shuffled(ctx.v59, simd::load_and_shuffle(base + ((ctx.r4.u32 + ctx.r11.u32) & ~0xF), VectorMaskL));
	// vperm128 v26,v60,v39,v7
	_mm_store_si128((__m128i*)ctx.v26.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v60.u8), _mm_load_si128((__m128i*)ctx.v39.u8), _mm_load_si128((__m128i*)ctx.v7.u8)));
	// vperm128 v49,v52,v62,v5
	_mm_store_si128((__m128i*)ctx.v49.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v52.u8), _mm_load_si128((__m128i*)ctx.v62.u8), _mm_load_si128((__m128i*)ctx.v5.u8)));
	// lvx128 v48,r30,r11
	simd::store_shuffled(ctx.v48, simd::load_and_shuffle(base + ((ctx.r30.u32 + ctx.r11.u32) & ~0xF), VectorMaskL));
	// vperm128 v55,v63,v59,v5
	_mm_store_si128((__m128i*)ctx.v55.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)ctx.v59.u8), _mm_load_si128((__m128i*)ctx.v5.u8)));
	// lvx128 v63,r31,r10
	simd::store_shuffled(ctx.v63, simd::load_and_shuffle(base + ((ctx.r31.u32 + ctx.r10.u32) & ~0xF), VectorMaskL));
	// lvx128 v53,r0,r31
	simd::store_shuffled(ctx.v53, simd::load_and_shuffle(base + ((ctx.r31.u32) & ~0xF), VectorMaskL));
	// vor128 v60,v34,v34
	_mm_store_si128((__m128i*)ctx.v60.u8, _mm_load_si128((__m128i*)ctx.v34.u8));
	// vperm128 v46,v62,v48,v5
	_mm_store_si128((__m128i*)ctx.v46.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v62.u8), _mm_load_si128((__m128i*)ctx.v48.u8), _mm_load_si128((__m128i*)ctx.v5.u8)));
	// lvx128 v50,r31,r11
	simd::store_shuffled(ctx.v50, simd::load_and_shuffle(base + ((ctx.r31.u32 + ctx.r11.u32) & ~0xF), VectorMaskL));
	// vperm128 v51,v53,v63,v5
	_mm_store_si128((__m128i*)ctx.v51.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v53.u8), _mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)ctx.v5.u8)));
	// vor128 v62,v49,v49
	_mm_store_si128((__m128i*)ctx.v62.u8, _mm_load_si128((__m128i*)ctx.v49.u8));
	// vperm128 v13,v61,v35,v7
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v61.u8), _mm_load_si128((__m128i*)ctx.v35.u8), _mm_load_si128((__m128i*)ctx.v7.u8)));
	// vor128 v61,v58,v58
	_mm_store_si128((__m128i*)ctx.v61.u8, _mm_load_si128((__m128i*)ctx.v58.u8));
	// vperm128 v12,v60,v32,v7
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v60.u8), _mm_load_si128((__m128i*)ctx.v32.u8), _mm_load_si128((__m128i*)ctx.v7.u8)));
	// vor128 v60,v56,v56
	_mm_store_si128((__m128i*)ctx.v60.u8, _mm_load_si128((__m128i*)ctx.v56.u8));
	// vperm128 v47,v63,v50,v5
	_mm_store_si128((__m128i*)ctx.v47.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)ctx.v50.u8), _mm_load_si128((__m128i*)ctx.v5.u8)));
	// addi r4,r1,-176
	ctx.r4.s64 = ctx.r1.s64 + -176;
	// vperm128 v11,v62,v46,v7
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v62.u8), _mm_load_si128((__m128i*)ctx.v46.u8), _mm_load_si128((__m128i*)ctx.v7.u8)));
	// vor128 v63,v51,v51
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_load_si128((__m128i*)ctx.v51.u8));
	// vperm128 v10,v61,v55,v7
	_mm_store_si128((__m128i*)ctx.v10.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v61.u8), _mm_load_si128((__m128i*)ctx.v55.u8), _mm_load_si128((__m128i*)ctx.v7.u8)));
	// lwz r5,-216(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + -216);
	// vperm128 v4,v60,v54,v7
	_mm_store_si128((__m128i*)ctx.v4.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v60.u8), _mm_load_si128((__m128i*)ctx.v54.u8), _mm_load_si128((__m128i*)ctx.v7.u8)));
	// lwz r7,-212(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + -212);
	// vmrghb v30,v0,v1
	_mm_store_si128((__m128i*)ctx.v30.u8, _mm_unpackhi_epi8(_mm_load_si128((__m128i*)ctx.v1.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// lwz r6,-248(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + -248);
	// vperm128 v3,v63,v47,v7
	_mm_store_si128((__m128i*)ctx.v3.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)ctx.v47.u8), _mm_load_si128((__m128i*)ctx.v7.u8)));
	// lwz r9,-244(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + -244);
	// vmrghb v1,v0,v29
	_mm_store_si128((__m128i*)ctx.v1.u8, _mm_unpackhi_epi8(_mm_load_si128((__m128i*)ctx.v29.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// cmpw cr6,r21,r22
	ctx.cr6.compare<int32_t>(ctx.r21.s32, ctx.r22.s32, ctx.xer);
	// vmrghb v29,v0,v26
	_mm_store_si128((__m128i*)ctx.v29.u8, _mm_unpackhi_epi8(_mm_load_si128((__m128i*)ctx.v26.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// stvx128 v11,r0,r4
	_mm_store_si128((__m128i*)(base + ((ctx.r4.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v11.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// vmrghb v8,v0,v10
	_mm_store_si128((__m128i*)ctx.v8.u8, _mm_unpackhi_epi8(_mm_load_si128((__m128i*)ctx.v10.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// lvx128 v26,r0,r4
	simd::store_shuffled(ctx.v26, simd::load_and_shuffle(base + ((ctx.r4.u32) & ~0xF), VectorMaskL));
	// vmrghb v10,v0,v4
	_mm_store_si128((__m128i*)ctx.v10.u8, _mm_unpackhi_epi8(_mm_load_si128((__m128i*)ctx.v4.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vmrghb v28,v0,v28
	_mm_store_si128((__m128i*)ctx.v28.u8, _mm_unpackhi_epi8(_mm_load_si128((__m128i*)ctx.v28.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vmrghb v9,v0,v13
	_mm_store_si128((__m128i*)ctx.v9.u8, _mm_unpackhi_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vmrghb v11,v0,v12
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_unpackhi_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vmrghb v3,v0,v3
	_mm_store_si128((__m128i*)ctx.v3.u8, _mm_unpackhi_epi8(_mm_load_si128((__m128i*)ctx.v3.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vmrghb v4,v0,v26
	_mm_store_si128((__m128i*)ctx.v4.u8, _mm_unpackhi_epi8(_mm_load_si128((__m128i*)ctx.v26.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// bge cr6,0x82f1b658
	if (!ctx.cr6.lt) goto loc_82F1B658;
	// subf r4,r21,r22
	ctx.r4.s64 = ctx.r22.s64 - ctx.r21.s64;
	// addi r4,r4,-1
	ctx.r4.s64 = ctx.r4.s64 + -1;
	// rlwinm r4,r4,31,1,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// mtctr r4
	ctx.ctr.u64 = ctx.r4.u64;
loc_82F1B444:
	// vor v27,v2,v2
	_mm_store_si128((__m128i*)ctx.v27.u8, _mm_load_si128((__m128i*)ctx.v2.u8));
	// lvx128 v63,r7,r10
	simd::store_shuffled(ctx.v63, simd::load_and_shuffle(base + ((ctx.r7.u32 + ctx.r10.u32) & ~0xF), VectorMaskL));
	// vor v26,v31,v31
	_mm_store_si128((__m128i*)ctx.v26.u8, _mm_load_si128((__m128i*)ctx.v31.u8));
	// lvx128 v45,r0,r7
	simd::store_shuffled(ctx.v45, simd::load_and_shuffle(base + ((ctx.r7.u32) & ~0xF), VectorMaskL));
	// vor v2,v1,v1
	_mm_store_si128((__m128i*)ctx.v2.u8, _mm_load_si128((__m128i*)ctx.v1.u8));
	// lvx128 v44,r7,r11
	simd::store_shuffled(ctx.v44, simd::load_and_shuffle(base + ((ctx.r7.u32 + ctx.r11.u32) & ~0xF), VectorMaskL));
	// vor v1,v29,v29
	_mm_store_si128((__m128i*)ctx.v1.u8, _mm_load_si128((__m128i*)ctx.v29.u8));
	// vperm128 v61,v45,v63,v6
	_mm_store_si128((__m128i*)ctx.v61.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v45.u8), _mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)ctx.v6.u8)));
	// vor v31,v30,v30
	_mm_store_si128((__m128i*)ctx.v31.u8, _mm_load_si128((__m128i*)ctx.v30.u8));
	// vperm128 v43,v63,v44,v6
	_mm_store_si128((__m128i*)ctx.v43.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)ctx.v44.u8), _mm_load_si128((__m128i*)ctx.v6.u8)));
	// vor v30,v28,v28
	_mm_store_si128((__m128i*)ctx.v30.u8, _mm_load_si128((__m128i*)ctx.v28.u8));
	// addi r4,r1,-144
	ctx.r4.s64 = ctx.r1.s64 + -144;
	// vor128 v39,v11,v11
	_mm_store_si128((__m128i*)ctx.v39.u8, _mm_load_si128((__m128i*)ctx.v11.u8));
	// addi r3,r1,-192
	ctx.r3.s64 = ctx.r1.s64 + -192;
	// vor128 v37,v9,v9
	_mm_store_si128((__m128i*)ctx.v37.u8, _mm_load_si128((__m128i*)ctx.v9.u8));
	// lvx128 v62,r5,r10
	simd::store_shuffled(ctx.v62, simd::load_and_shuffle(base + ((ctx.r5.u32 + ctx.r10.u32) & ~0xF), VectorMaskL));
	// vaddshs v13,v31,v1
	_mm_store_si128((__m128i*)ctx.v13.s16, _mm_adds_epi16(_mm_load_si128((__m128i*)ctx.v31.s16), _mm_load_si128((__m128i*)ctx.v1.s16)));
	// vperm128 v29,v61,v43,v7
	_mm_store_si128((__m128i*)ctx.v29.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v61.u8), _mm_load_si128((__m128i*)ctx.v43.u8), _mm_load_si128((__m128i*)ctx.v7.u8)));
	// vaddshs v12,v2,v30
	_mm_store_si128((__m128i*)ctx.v12.s16, _mm_adds_epi16(_mm_load_si128((__m128i*)ctx.v2.s16), _mm_load_si128((__m128i*)ctx.v30.s16)));
	// lvx128 v42,r0,r5
	simd::store_shuffled(ctx.v42, simd::load_and_shuffle(base + ((ctx.r5.u32) & ~0xF), VectorMaskL));
	// vor128 v38,v10,v10
	_mm_store_si128((__m128i*)ctx.v38.u8, _mm_load_si128((__m128i*)ctx.v10.u8));
	// lvx128 v41,r5,r11
	simd::store_shuffled(ctx.v41, simd::load_and_shuffle(base + ((ctx.r5.u32 + ctx.r11.u32) & ~0xF), VectorMaskL));
	// vperm128 v60,v42,v62,v6
	_mm_store_si128((__m128i*)ctx.v60.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v42.u8), _mm_load_si128((__m128i*)ctx.v62.u8), _mm_load_si128((__m128i*)ctx.v6.u8)));
	// add r7,r7,r26
	ctx.r7.u64 = ctx.r7.u64 + ctx.r26.u64;
	// vslh v11,v13,v21
	ctx.v11.u16[0] = ctx.v13.u16[0] << (ctx.v21.u16[0] & 0xF);
	ctx.v11.u16[1] = ctx.v13.u16[1] << (ctx.v21.u16[1] & 0xF);
	ctx.v11.u16[2] = ctx.v13.u16[2] << (ctx.v21.u16[2] & 0xF);
	ctx.v11.u16[3] = ctx.v13.u16[3] << (ctx.v21.u16[3] & 0xF);
	ctx.v11.u16[4] = ctx.v13.u16[4] << (ctx.v21.u16[4] & 0xF);
	ctx.v11.u16[5] = ctx.v13.u16[5] << (ctx.v21.u16[5] & 0xF);
	ctx.v11.u16[6] = ctx.v13.u16[6] << (ctx.v21.u16[6] & 0xF);
	ctx.v11.u16[7] = ctx.v13.u16[7] << (ctx.v21.u16[7] & 0xF);
	// vmrghb v29,v0,v29
	_mm_store_si128((__m128i*)ctx.v29.u8, _mm_unpackhi_epi8(_mm_load_si128((__m128i*)ctx.v29.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vslh v9,v13,v25
	ctx.v9.u16[0] = ctx.v13.u16[0] << (ctx.v25.u16[0] & 0xF);
	ctx.v9.u16[1] = ctx.v13.u16[1] << (ctx.v25.u16[1] & 0xF);
	ctx.v9.u16[2] = ctx.v13.u16[2] << (ctx.v25.u16[2] & 0xF);
	ctx.v9.u16[3] = ctx.v13.u16[3] << (ctx.v25.u16[3] & 0xF);
	ctx.v9.u16[4] = ctx.v13.u16[4] << (ctx.v25.u16[4] & 0xF);
	ctx.v9.u16[5] = ctx.v13.u16[5] << (ctx.v25.u16[5] & 0xF);
	ctx.v9.u16[6] = ctx.v13.u16[6] << (ctx.v25.u16[6] & 0xF);
	ctx.v9.u16[7] = ctx.v13.u16[7] << (ctx.v25.u16[7] & 0xF);
	// vperm128 v40,v62,v41,v6
	_mm_store_si128((__m128i*)ctx.v40.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v62.u8), _mm_load_si128((__m128i*)ctx.v41.u8), _mm_load_si128((__m128i*)ctx.v6.u8)));
	// vslh v10,v12,v20
	ctx.v10.u16[0] = ctx.v12.u16[0] << (ctx.v20.u16[0] & 0xF);
	ctx.v10.u16[1] = ctx.v12.u16[1] << (ctx.v20.u16[1] & 0xF);
	ctx.v10.u16[2] = ctx.v12.u16[2] << (ctx.v20.u16[2] & 0xF);
	ctx.v10.u16[3] = ctx.v12.u16[3] << (ctx.v20.u16[3] & 0xF);
	ctx.v10.u16[4] = ctx.v12.u16[4] << (ctx.v20.u16[4] & 0xF);
	ctx.v10.u16[5] = ctx.v12.u16[5] << (ctx.v20.u16[5] & 0xF);
	ctx.v10.u16[6] = ctx.v12.u16[6] << (ctx.v20.u16[6] & 0xF);
	ctx.v10.u16[7] = ctx.v12.u16[7] << (ctx.v20.u16[7] & 0xF);
	// add r5,r5,r26
	ctx.r5.u64 = ctx.r5.u64 + ctx.r26.u64;
	// cmplw cr6,r7,r25
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r25.u32, ctx.xer);
	// vsubshs v13,v11,v13
	_mm_store_si128((__m128i*)ctx.v13.s16, _mm_subs_epi16(_mm_load_si128((__m128i*)ctx.v11.s16), _mm_load_si128((__m128i*)ctx.v13.s16)));
	// vperm128 v28,v60,v40,v7
	_mm_store_si128((__m128i*)ctx.v28.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v60.u8), _mm_load_si128((__m128i*)ctx.v40.u8), _mm_load_si128((__m128i*)ctx.v7.u8)));
	// stvx128 v13,r0,r4
	_mm_store_si128((__m128i*)(base + ((ctx.r4.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// vaddshs v13,v26,v29
	_mm_store_si128((__m128i*)ctx.v13.s16, _mm_adds_epi16(_mm_load_si128((__m128i*)ctx.v26.s16), _mm_load_si128((__m128i*)ctx.v29.s16)));
	// vslh v26,v12,v22
	ctx.v26.u16[0] = ctx.v12.u16[0] << (ctx.v22.u16[0] & 0xF);
	ctx.v26.u16[1] = ctx.v12.u16[1] << (ctx.v22.u16[1] & 0xF);
	ctx.v26.u16[2] = ctx.v12.u16[2] << (ctx.v22.u16[2] & 0xF);
	ctx.v26.u16[3] = ctx.v12.u16[3] << (ctx.v22.u16[3] & 0xF);
	ctx.v26.u16[4] = ctx.v12.u16[4] << (ctx.v22.u16[4] & 0xF);
	ctx.v26.u16[5] = ctx.v12.u16[5] << (ctx.v22.u16[5] & 0xF);
	ctx.v26.u16[6] = ctx.v12.u16[6] << (ctx.v22.u16[6] & 0xF);
	ctx.v26.u16[7] = ctx.v12.u16[7] << (ctx.v22.u16[7] & 0xF);
	// vmrghb v28,v0,v28
	_mm_store_si128((__m128i*)ctx.v28.u8, _mm_unpackhi_epi8(_mm_load_si128((__m128i*)ctx.v28.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vsubuhm v12,v10,v12
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_sub_epi16(_mm_load_si128((__m128i*)ctx.v10.u8), _mm_load_si128((__m128i*)ctx.v12.u8)));
	// lvx128 v11,r0,r4
	simd::store_shuffled(ctx.v11, simd::load_and_shuffle(base + ((ctx.r4.u32) & ~0xF), VectorMaskL));
	// vsubshs v11,v11,v9
	_mm_store_si128((__m128i*)ctx.v11.s16, _mm_subs_epi16(_mm_load_si128((__m128i*)ctx.v11.s16), _mm_load_si128((__m128i*)ctx.v9.s16)));
	// stvx128 v12,r0,r3
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// vaddshs v12,v27,v28
	_mm_store_si128((__m128i*)ctx.v12.s16, _mm_adds_epi16(_mm_load_si128((__m128i*)ctx.v27.s16), _mm_load_si128((__m128i*)ctx.v28.s16)));
	// vslh v27,v13,v24
	ctx.v27.u16[0] = ctx.v13.u16[0] << (ctx.v24.u16[0] & 0xF);
	ctx.v27.u16[1] = ctx.v13.u16[1] << (ctx.v24.u16[1] & 0xF);
	ctx.v27.u16[2] = ctx.v13.u16[2] << (ctx.v24.u16[2] & 0xF);
	ctx.v27.u16[3] = ctx.v13.u16[3] << (ctx.v24.u16[3] & 0xF);
	ctx.v27.u16[4] = ctx.v13.u16[4] << (ctx.v24.u16[4] & 0xF);
	ctx.v27.u16[5] = ctx.v13.u16[5] << (ctx.v24.u16[5] & 0xF);
	ctx.v27.u16[6] = ctx.v13.u16[6] << (ctx.v24.u16[6] & 0xF);
	ctx.v27.u16[7] = ctx.v13.u16[7] << (ctx.v24.u16[7] & 0xF);
	// vor128 v9,v37,v37
	_mm_store_si128((__m128i*)ctx.v9.u8, _mm_load_si128((__m128i*)ctx.v37.u8));
	// vsubshs v27,v13,v27
	_mm_store_si128((__m128i*)ctx.v27.s16, _mm_subs_epi16(_mm_load_si128((__m128i*)ctx.v13.s16), _mm_load_si128((__m128i*)ctx.v27.s16)));
	// lvx128 v10,r0,r3
	simd::store_shuffled(ctx.v10, simd::load_and_shuffle(base + ((ctx.r3.u32) & ~0xF), VectorMaskL));
	// vsubuhm v26,v10,v26
	_mm_store_si128((__m128i*)ctx.v26.u8, _mm_sub_epi16(_mm_load_si128((__m128i*)ctx.v10.u8), _mm_load_si128((__m128i*)ctx.v26.u8)));
	// vslh v10,v12,v23
	ctx.v10.u16[0] = ctx.v12.u16[0] << (ctx.v23.u16[0] & 0xF);
	ctx.v10.u16[1] = ctx.v12.u16[1] << (ctx.v23.u16[1] & 0xF);
	ctx.v10.u16[2] = ctx.v12.u16[2] << (ctx.v23.u16[2] & 0xF);
	ctx.v10.u16[3] = ctx.v12.u16[3] << (ctx.v23.u16[3] & 0xF);
	ctx.v10.u16[4] = ctx.v12.u16[4] << (ctx.v23.u16[4] & 0xF);
	ctx.v10.u16[5] = ctx.v12.u16[5] << (ctx.v23.u16[5] & 0xF);
	ctx.v10.u16[6] = ctx.v12.u16[6] << (ctx.v23.u16[6] & 0xF);
	ctx.v10.u16[7] = ctx.v12.u16[7] << (ctx.v23.u16[7] & 0xF);
	// vsubshs v12,v0,v12
	_mm_store_si128((__m128i*)ctx.v12.s16, _mm_subs_epi16(_mm_load_si128((__m128i*)ctx.v0.s16), _mm_load_si128((__m128i*)ctx.v12.s16)));
	// vsubshs v13,v12,v10
	_mm_store_si128((__m128i*)ctx.v13.s16, _mm_subs_epi16(_mm_load_si128((__m128i*)ctx.v12.s16), _mm_load_si128((__m128i*)ctx.v10.s16)));
	// vaddshs v12,v0,v27
	_mm_store_si128((__m128i*)ctx.v12.s16, _mm_adds_epi16(_mm_load_si128((__m128i*)ctx.v0.s16), _mm_load_si128((__m128i*)ctx.v27.s16)));
	// vor128 v10,v38,v38
	_mm_store_si128((__m128i*)ctx.v10.u8, _mm_load_si128((__m128i*)ctx.v38.u8));
	// vaddshs v27,v12,v13
	_mm_store_si128((__m128i*)ctx.v27.s16, _mm_adds_epi16(_mm_load_si128((__m128i*)ctx.v12.s16), _mm_load_si128((__m128i*)ctx.v13.s16)));
	// vaddshs v13,v27,v11
	_mm_store_si128((__m128i*)ctx.v13.s16, _mm_adds_epi16(_mm_load_si128((__m128i*)ctx.v27.s16), _mm_load_si128((__m128i*)ctx.v11.s16)));
	// vor128 v11,v39,v39
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_load_si128((__m128i*)ctx.v39.u8));
	// vadduhm v12,v13,v26
	_mm_store_si128((__m128i*)ctx.v12.u16, _mm_add_epi16(_mm_load_si128((__m128i*)ctx.v13.u16), _mm_load_si128((__m128i*)ctx.v26.u16)));
	// vadduhm v27,v12,v18
	_mm_store_si128((__m128i*)ctx.v27.u16, _mm_add_epi16(_mm_load_si128((__m128i*)ctx.v12.u16), _mm_load_si128((__m128i*)ctx.v18.u16)));
	// vsrh v26,v27,v19
	ctx.v26.u16[0] = ctx.v27.u16[0] >> (ctx.v19.u16[0] & 0xF);
	ctx.v26.u16[1] = ctx.v27.u16[1] >> (ctx.v19.u16[1] & 0xF);
	ctx.v26.u16[2] = ctx.v27.u16[2] >> (ctx.v19.u16[2] & 0xF);
	ctx.v26.u16[3] = ctx.v27.u16[3] >> (ctx.v19.u16[3] & 0xF);
	ctx.v26.u16[4] = ctx.v27.u16[4] >> (ctx.v19.u16[4] & 0xF);
	ctx.v26.u16[5] = ctx.v27.u16[5] >> (ctx.v19.u16[5] & 0xF);
	ctx.v26.u16[6] = ctx.v27.u16[6] >> (ctx.v19.u16[6] & 0xF);
	ctx.v26.u16[7] = ctx.v27.u16[7] >> (ctx.v19.u16[7] & 0xF);
	// vpkshus128 v36,v26,v26
	_mm_store_si128((__m128i*)ctx.v36.u8, _mm_packus_epi16(_mm_load_si128((__m128i*)ctx.v26.s16), _mm_load_si128((__m128i*)ctx.v26.s16)));
	// stvewx128 v36,r0,r28
	ea = (ctx.r28.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v36.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v36,r28,r24
	ea = (ctx.r28.u32 + ctx.r24.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v36.u32[3 - ((ea & 0xF) >> 2)]);
	// add r28,r28,r8
	ctx.r28.u64 = ctx.r28.u64 + ctx.r8.u64;
	// ble cr6,0x82f1b548
	if (!ctx.cr6.gt) goto loc_82F1B548;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
loc_82F1B548:
	// vor v27,v11,v11
	_mm_store_si128((__m128i*)ctx.v27.u8, _mm_load_si128((__m128i*)ctx.v11.u8));
	// lvx128 v63,r9,r10
	simd::store_shuffled(ctx.v63, simd::load_and_shuffle(base + ((ctx.r9.u32 + ctx.r10.u32) & ~0xF), VectorMaskL));
	// vor v11,v10,v10
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_load_si128((__m128i*)ctx.v10.u8));
	// lvx128 v35,r0,r9
	simd::store_shuffled(ctx.v35, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// vor v26,v9,v9
	_mm_store_si128((__m128i*)ctx.v26.u8, _mm_load_si128((__m128i*)ctx.v9.u8));
	// lvx128 v34,r9,r11
	simd::store_shuffled(ctx.v34, simd::load_and_shuffle(base + ((ctx.r9.u32 + ctx.r11.u32) & ~0xF), VectorMaskL));
	// vor v10,v4,v4
	_mm_store_si128((__m128i*)ctx.v10.u8, _mm_load_si128((__m128i*)ctx.v4.u8));
	// vperm128 v61,v35,v63,v5
	_mm_store_si128((__m128i*)ctx.v61.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v35.u8), _mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)ctx.v5.u8)));
	// vor v9,v8,v8
	_mm_store_si128((__m128i*)ctx.v9.u8, _mm_load_si128((__m128i*)ctx.v8.u8));
	// vperm128 v33,v63,v34,v5
	_mm_store_si128((__m128i*)ctx.v33.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)ctx.v34.u8), _mm_load_si128((__m128i*)ctx.v5.u8)));
	// vor v8,v3,v3
	_mm_store_si128((__m128i*)ctx.v8.u8, _mm_load_si128((__m128i*)ctx.v3.u8));
	// lvx128 v62,r6,r10
	simd::store_shuffled(ctx.v62, simd::load_and_shuffle(base + ((ctx.r6.u32 + ctx.r10.u32) & ~0xF), VectorMaskL));
	// lvx128 v32,r0,r6
	simd::store_shuffled(ctx.v32, simd::load_and_shuffle(base + ((ctx.r6.u32) & ~0xF), VectorMaskL));
	// addi r4,r1,-160
	ctx.r4.s64 = ctx.r1.s64 + -160;
	// lvx128 v63,r6,r11
	simd::store_shuffled(ctx.v63, simd::load_and_shuffle(base + ((ctx.r6.u32 + ctx.r11.u32) & ~0xF), VectorMaskL));
	// addi r3,r1,-128
	ctx.r3.s64 = ctx.r1.s64 + -128;
	// vaddshs v13,v9,v10
	_mm_store_si128((__m128i*)ctx.v13.s16, _mm_adds_epi16(_mm_load_si128((__m128i*)ctx.v9.s16), _mm_load_si128((__m128i*)ctx.v10.s16)));
	// vperm128 v4,v61,v33,v7
	_mm_store_si128((__m128i*)ctx.v4.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v61.u8), _mm_load_si128((__m128i*)ctx.v33.u8), _mm_load_si128((__m128i*)ctx.v7.u8)));
	// vaddshs v12,v11,v8
	_mm_store_si128((__m128i*)ctx.v12.s16, _mm_adds_epi16(_mm_load_si128((__m128i*)ctx.v11.s16), _mm_load_si128((__m128i*)ctx.v8.s16)));
	// vperm128 v60,v32,v62,v5
	_mm_store_si128((__m128i*)ctx.v60.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v32.u8), _mm_load_si128((__m128i*)ctx.v62.u8), _mm_load_si128((__m128i*)ctx.v5.u8)));
	// vor128 v61,v11,v11
	_mm_store_si128((__m128i*)ctx.v61.u8, _mm_load_si128((__m128i*)ctx.v11.u8));
	// vperm128 v62,v62,v63,v5
	_mm_store_si128((__m128i*)ctx.v62.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v62.u8), _mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)ctx.v5.u8)));
	// vor128 v59,v9,v9
	_mm_store_si128((__m128i*)ctx.v59.u8, _mm_load_si128((__m128i*)ctx.v9.u8));
	// add r9,r9,r26
	ctx.r9.u64 = ctx.r9.u64 + ctx.r26.u64;
	// vslh v11,v13,v21
	ctx.v11.u16[0] = ctx.v13.u16[0] << (ctx.v21.u16[0] & 0xF);
	ctx.v11.u16[1] = ctx.v13.u16[1] << (ctx.v21.u16[1] & 0xF);
	ctx.v11.u16[2] = ctx.v13.u16[2] << (ctx.v21.u16[2] & 0xF);
	ctx.v11.u16[3] = ctx.v13.u16[3] << (ctx.v21.u16[3] & 0xF);
	ctx.v11.u16[4] = ctx.v13.u16[4] << (ctx.v21.u16[4] & 0xF);
	ctx.v11.u16[5] = ctx.v13.u16[5] << (ctx.v21.u16[5] & 0xF);
	ctx.v11.u16[6] = ctx.v13.u16[6] << (ctx.v21.u16[6] & 0xF);
	ctx.v11.u16[7] = ctx.v13.u16[7] << (ctx.v21.u16[7] & 0xF);
	// vmrghb v4,v0,v4
	_mm_store_si128((__m128i*)ctx.v4.u8, _mm_unpackhi_epi8(_mm_load_si128((__m128i*)ctx.v4.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vslh v9,v13,v25
	ctx.v9.u16[0] = ctx.v13.u16[0] << (ctx.v25.u16[0] & 0xF);
	ctx.v9.u16[1] = ctx.v13.u16[1] << (ctx.v25.u16[1] & 0xF);
	ctx.v9.u16[2] = ctx.v13.u16[2] << (ctx.v25.u16[2] & 0xF);
	ctx.v9.u16[3] = ctx.v13.u16[3] << (ctx.v25.u16[3] & 0xF);
	ctx.v9.u16[4] = ctx.v13.u16[4] << (ctx.v25.u16[4] & 0xF);
	ctx.v9.u16[5] = ctx.v13.u16[5] << (ctx.v25.u16[5] & 0xF);
	ctx.v9.u16[6] = ctx.v13.u16[6] << (ctx.v25.u16[6] & 0xF);
	ctx.v9.u16[7] = ctx.v13.u16[7] << (ctx.v25.u16[7] & 0xF);
	// add r6,r6,r26
	ctx.r6.u64 = ctx.r6.u64 + ctx.r26.u64;
	// vperm128 v3,v60,v62,v7
	_mm_store_si128((__m128i*)ctx.v3.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v60.u8), _mm_load_si128((__m128i*)ctx.v62.u8), _mm_load_si128((__m128i*)ctx.v7.u8)));
	// vor128 v60,v10,v10
	_mm_store_si128((__m128i*)ctx.v60.u8, _mm_load_si128((__m128i*)ctx.v10.u8));
	// vslh v10,v12,v20
	ctx.v10.u16[0] = ctx.v12.u16[0] << (ctx.v20.u16[0] & 0xF);
	ctx.v10.u16[1] = ctx.v12.u16[1] << (ctx.v20.u16[1] & 0xF);
	ctx.v10.u16[2] = ctx.v12.u16[2] << (ctx.v20.u16[2] & 0xF);
	ctx.v10.u16[3] = ctx.v12.u16[3] << (ctx.v20.u16[3] & 0xF);
	ctx.v10.u16[4] = ctx.v12.u16[4] << (ctx.v20.u16[4] & 0xF);
	ctx.v10.u16[5] = ctx.v12.u16[5] << (ctx.v20.u16[5] & 0xF);
	ctx.v10.u16[6] = ctx.v12.u16[6] << (ctx.v20.u16[6] & 0xF);
	ctx.v10.u16[7] = ctx.v12.u16[7] << (ctx.v20.u16[7] & 0xF);
	// cmplw cr6,r9,r23
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r23.u32, ctx.xer);
	// vsubshs v13,v11,v13
	_mm_store_si128((__m128i*)ctx.v13.s16, _mm_subs_epi16(_mm_load_si128((__m128i*)ctx.v11.s16), _mm_load_si128((__m128i*)ctx.v13.s16)));
	// vmrghb v3,v0,v3
	_mm_store_si128((__m128i*)ctx.v3.u8, _mm_unpackhi_epi8(_mm_load_si128((__m128i*)ctx.v3.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// stvx128 v13,r0,r4
	_mm_store_si128((__m128i*)(base + ((ctx.r4.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v13.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// vaddshs v13,v26,v4
	_mm_store_si128((__m128i*)ctx.v13.s16, _mm_adds_epi16(_mm_load_si128((__m128i*)ctx.v26.s16), _mm_load_si128((__m128i*)ctx.v4.s16)));
	// vslh v26,v12,v22
	ctx.v26.u16[0] = ctx.v12.u16[0] << (ctx.v22.u16[0] & 0xF);
	ctx.v26.u16[1] = ctx.v12.u16[1] << (ctx.v22.u16[1] & 0xF);
	ctx.v26.u16[2] = ctx.v12.u16[2] << (ctx.v22.u16[2] & 0xF);
	ctx.v26.u16[3] = ctx.v12.u16[3] << (ctx.v22.u16[3] & 0xF);
	ctx.v26.u16[4] = ctx.v12.u16[4] << (ctx.v22.u16[4] & 0xF);
	ctx.v26.u16[5] = ctx.v12.u16[5] << (ctx.v22.u16[5] & 0xF);
	ctx.v26.u16[6] = ctx.v12.u16[6] << (ctx.v22.u16[6] & 0xF);
	ctx.v26.u16[7] = ctx.v12.u16[7] << (ctx.v22.u16[7] & 0xF);
	// vsubuhm v12,v10,v12
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_sub_epi16(_mm_load_si128((__m128i*)ctx.v10.u8), _mm_load_si128((__m128i*)ctx.v12.u8)));
	// stvx128 v12,r0,r3
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// vaddshs v12,v27,v3
	_mm_store_si128((__m128i*)ctx.v12.s16, _mm_adds_epi16(_mm_load_si128((__m128i*)ctx.v27.s16), _mm_load_si128((__m128i*)ctx.v3.s16)));
	// vslh v27,v13,v24
	ctx.v27.u16[0] = ctx.v13.u16[0] << (ctx.v24.u16[0] & 0xF);
	ctx.v27.u16[1] = ctx.v13.u16[1] << (ctx.v24.u16[1] & 0xF);
	ctx.v27.u16[2] = ctx.v13.u16[2] << (ctx.v24.u16[2] & 0xF);
	ctx.v27.u16[3] = ctx.v13.u16[3] << (ctx.v24.u16[3] & 0xF);
	ctx.v27.u16[4] = ctx.v13.u16[4] << (ctx.v24.u16[4] & 0xF);
	ctx.v27.u16[5] = ctx.v13.u16[5] << (ctx.v24.u16[5] & 0xF);
	ctx.v27.u16[6] = ctx.v13.u16[6] << (ctx.v24.u16[6] & 0xF);
	ctx.v27.u16[7] = ctx.v13.u16[7] << (ctx.v24.u16[7] & 0xF);
	// lvx128 v10,r0,r3
	simd::store_shuffled(ctx.v10, simd::load_and_shuffle(base + ((ctx.r3.u32) & ~0xF), VectorMaskL));
	// vsubuhm v26,v10,v26
	_mm_store_si128((__m128i*)ctx.v26.u8, _mm_sub_epi16(_mm_load_si128((__m128i*)ctx.v10.u8), _mm_load_si128((__m128i*)ctx.v26.u8)));
	// vslh v10,v12,v23
	ctx.v10.u16[0] = ctx.v12.u16[0] << (ctx.v23.u16[0] & 0xF);
	ctx.v10.u16[1] = ctx.v12.u16[1] << (ctx.v23.u16[1] & 0xF);
	ctx.v10.u16[2] = ctx.v12.u16[2] << (ctx.v23.u16[2] & 0xF);
	ctx.v10.u16[3] = ctx.v12.u16[3] << (ctx.v23.u16[3] & 0xF);
	ctx.v10.u16[4] = ctx.v12.u16[4] << (ctx.v23.u16[4] & 0xF);
	ctx.v10.u16[5] = ctx.v12.u16[5] << (ctx.v23.u16[5] & 0xF);
	ctx.v10.u16[6] = ctx.v12.u16[6] << (ctx.v23.u16[6] & 0xF);
	ctx.v10.u16[7] = ctx.v12.u16[7] << (ctx.v23.u16[7] & 0xF);
	// lvx128 v11,r0,r4
	simd::store_shuffled(ctx.v11, simd::load_and_shuffle(base + ((ctx.r4.u32) & ~0xF), VectorMaskL));
	// vsubshs v12,v0,v12
	_mm_store_si128((__m128i*)ctx.v12.s16, _mm_subs_epi16(_mm_load_si128((__m128i*)ctx.v0.s16), _mm_load_si128((__m128i*)ctx.v12.s16)));
	// vsubshs v27,v13,v27
	_mm_store_si128((__m128i*)ctx.v27.s16, _mm_subs_epi16(_mm_load_si128((__m128i*)ctx.v13.s16), _mm_load_si128((__m128i*)ctx.v27.s16)));
	// vsubshs v11,v11,v9
	_mm_store_si128((__m128i*)ctx.v11.s16, _mm_subs_epi16(_mm_load_si128((__m128i*)ctx.v11.s16), _mm_load_si128((__m128i*)ctx.v9.s16)));
	// vor128 v9,v59,v59
	_mm_store_si128((__m128i*)ctx.v9.u8, _mm_load_si128((__m128i*)ctx.v59.u8));
	// vsubshs v13,v12,v10
	_mm_store_si128((__m128i*)ctx.v13.s16, _mm_subs_epi16(_mm_load_si128((__m128i*)ctx.v12.s16), _mm_load_si128((__m128i*)ctx.v10.s16)));
	// vaddshs v12,v0,v27
	_mm_store_si128((__m128i*)ctx.v12.s16, _mm_adds_epi16(_mm_load_si128((__m128i*)ctx.v0.s16), _mm_load_si128((__m128i*)ctx.v27.s16)));
	// vor128 v10,v60,v60
	_mm_store_si128((__m128i*)ctx.v10.u8, _mm_load_si128((__m128i*)ctx.v60.u8));
	// vaddshs v27,v12,v13
	_mm_store_si128((__m128i*)ctx.v27.s16, _mm_adds_epi16(_mm_load_si128((__m128i*)ctx.v12.s16), _mm_load_si128((__m128i*)ctx.v13.s16)));
	// vaddshs v13,v27,v11
	_mm_store_si128((__m128i*)ctx.v13.s16, _mm_adds_epi16(_mm_load_si128((__m128i*)ctx.v27.s16), _mm_load_si128((__m128i*)ctx.v11.s16)));
	// vor128 v11,v61,v61
	_mm_store_si128((__m128i*)ctx.v11.u8, _mm_load_si128((__m128i*)ctx.v61.u8));
	// vadduhm v12,v13,v26
	_mm_store_si128((__m128i*)ctx.v12.u16, _mm_add_epi16(_mm_load_si128((__m128i*)ctx.v13.u16), _mm_load_si128((__m128i*)ctx.v26.u16)));
	// vadduhm v27,v12,v18
	_mm_store_si128((__m128i*)ctx.v27.u16, _mm_add_epi16(_mm_load_si128((__m128i*)ctx.v12.u16), _mm_load_si128((__m128i*)ctx.v18.u16)));
	// vsrh v26,v27,v19
	ctx.v26.u16[0] = ctx.v27.u16[0] >> (ctx.v19.u16[0] & 0xF);
	ctx.v26.u16[1] = ctx.v27.u16[1] >> (ctx.v19.u16[1] & 0xF);
	ctx.v26.u16[2] = ctx.v27.u16[2] >> (ctx.v19.u16[2] & 0xF);
	ctx.v26.u16[3] = ctx.v27.u16[3] >> (ctx.v19.u16[3] & 0xF);
	ctx.v26.u16[4] = ctx.v27.u16[4] >> (ctx.v19.u16[4] & 0xF);
	ctx.v26.u16[5] = ctx.v27.u16[5] >> (ctx.v19.u16[5] & 0xF);
	ctx.v26.u16[6] = ctx.v27.u16[6] >> (ctx.v19.u16[6] & 0xF);
	ctx.v26.u16[7] = ctx.v27.u16[7] >> (ctx.v19.u16[7] & 0xF);
	// vpkshus128 v58,v26,v26
	_mm_store_si128((__m128i*)ctx.v58.u8, _mm_packus_epi16(_mm_load_si128((__m128i*)ctx.v26.s16), _mm_load_si128((__m128i*)ctx.v26.s16)));
	// stvewx128 v58,r0,r29
	ea = (ctx.r29.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v58.u32[3 - ((ea & 0xF) >> 2)]);
	// stvewx128 v58,r29,r24
	ea = (ctx.r29.u32 + ctx.r24.u32) & ~0x3;
	PPC_STORE_U32(ea, ctx.v58.u32[3 - ((ea & 0xF) >> 2)]);
	// add r29,r29,r8
	ctx.r29.u64 = ctx.r29.u64 + ctx.r8.u64;
	// ble cr6,0x82f1b64c
	if (!ctx.cr6.gt) goto loc_82F1B64C;
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// mr r9,r23
	ctx.r9.u64 = ctx.r23.u64;
loc_82F1B64C:
	// bdnz 0x82f1b444
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82F1B444;
	// addi r9,r1,-208
	ctx.r9.s64 = ctx.r1.s64 + -208;
	// lvx128 v27,r0,r9
	simd::store_shuffled(ctx.v27, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
loc_82F1B658:
	// addic. r19,r19,-1
	ctx.xer.ca = ctx.r19.u32 > 0;
	ctx.r19.s64 = ctx.r19.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r19.s32, 0, ctx.xer);
	// addi r25,r25,32
	ctx.r25.s64 = ctx.r25.s64 + 32;
	// addi r23,r23,32
	ctx.r23.s64 = ctx.r23.s64 + 32;
	// bne 0x82f1b220
	if (!ctx.cr0.eq) goto loc_82F1B220;
loc_82F1B668:
	// b 0x82fa76a4
	__restgprlr_19(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F1B66C"))) PPC_WEAK_FUNC(sub_82F1B66C);
PPC_FUNC_IMPL(__imp__sub_82F1B66C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F1B670"))) PPC_WEAK_FUNC(sub_82F1B670);
PPC_FUNC_IMPL(__imp__sub_82F1B670) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7674
	ctx.lr = 0x82F1B678;
	__savegprlr_27(ctx, base);
	// lwz r11,14464(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 14464);
	// lis r6,-19
	ctx.r6.s64 = -1245184;
	// lis r5,1
	ctx.r5.s64 = 65536;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,256
	ctx.r11.s64 = 256;
	// lis r4,0
	ctx.r4.s64 = 0;
	// lis r31,2
	ctx.r31.s64 = 131072;
	// lis r30,1
	ctx.r30.s64 = 65536;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// addi r11,r3,13432
	ctx.r11.s64 = ctx.r3.s64 + 13432;
	// bne cr6,0x82f1b71c
	if (!ctx.cr6.eq) goto loc_82F1B71C;
	// lis r7,-259
	ctx.r7.s64 = -16973824;
	// lis r8,-51
	ctx.r8.s64 = -3342336;
	// lis r9,-105
	ctx.r9.s64 = -6881280;
	// lis r10,-205
	ctx.r10.s64 = -13434880;
	// ori r6,r6,24240
	ctx.r6.u64 = ctx.r6.u64 | 24240;
	// ori r7,r7,52096
	ctx.r7.u64 = ctx.r7.u64 | 52096;
	// ori r8,r8,55936
	ctx.r8.u64 = ctx.r8.u64 | 55936;
	// ori r9,r9,61568
	ctx.r9.u64 = ctx.r9.u64 | 61568;
	// ori r10,r10,46464
	ctx.r10.u64 = ctx.r10.u64 | 46464;
	// ori r27,r5,39061
	ctx.r27.u64 = ctx.r5.u64 | 39061;
	// ori r28,r4,53279
	ctx.r28.u64 = ctx.r4.u64 | 53279;
	// ori r29,r31,1129
	ctx.r29.u64 = ctx.r31.u64 | 1129;
	// ori r30,r30,10773
	ctx.r30.u64 = ctx.r30.u64 | 10773;
loc_82F1B6D8:
	// srawi r5,r10,16
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xFFFF) != 0);
	ctx.r5.s64 = ctx.r10.s32 >> 16;
	// srawi r4,r9,16
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xFFFF) != 0);
	ctx.r4.s64 = ctx.r9.s32 >> 16;
	// srawi r31,r8,16
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xFFFF) != 0);
	ctx.r31.s64 = ctx.r8.s32 >> 16;
	// stw r5,-4092(r11)
	PPC_STORE_U32(ctx.r11.u32 + -4092, ctx.r5.u32);
	// srawi r5,r7,16
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0xFFFF) != 0);
	ctx.r5.s64 = ctx.r7.s32 >> 16;
	// stw r4,-3068(r11)
	PPC_STORE_U32(ctx.r11.u32 + -3068, ctx.r4.u32);
	// srawi r4,r6,16
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xFFFF) != 0);
	ctx.r4.s64 = ctx.r6.s32 >> 16;
	// stw r31,-2044(r11)
	PPC_STORE_U32(ctx.r11.u32 + -2044, ctx.r31.u32);
	// stw r5,-1020(r11)
	PPC_STORE_U32(ctx.r11.u32 + -1020, ctx.r5.u32);
	// add r10,r10,r27
	ctx.r10.u64 = ctx.r10.u64 + ctx.r27.u64;
	// stwu r4,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r4.u32);
	ctx.r11.u32 = ea;
	// add r9,r9,r28
	ctx.r9.u64 = ctx.r9.u64 + ctx.r28.u64;
	// addi r8,r8,25675
	ctx.r8.s64 = ctx.r8.s64 + 25675;
	// add r7,r7,r29
	ctx.r7.u64 = ctx.r7.u64 + ctx.r29.u64;
	// add r6,r6,r30
	ctx.r6.u64 = ctx.r6.u64 + ctx.r30.u64;
	// bdnz 0x82f1b6d8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82F1B6D8;
	// b 0x82f1b790
	goto loc_82F1B790;
loc_82F1B71C:
	// lis r7,-272
	ctx.r7.s64 = -17825792;
	// lis r8,-69
	ctx.r8.s64 = -4521984;
	// lis r9,-28
	ctx.r9.s64 = -1835008;
	// lis r10,-231
	ctx.r10.s64 = -15138816;
	// ori r6,r6,19456
	ctx.r6.u64 = ctx.r6.u64 | 19456;
	// ori r7,r7,36224
	ctx.r7.u64 = ctx.r7.u64 | 36224;
	// ori r8,r8,34048
	ctx.r8.u64 = ctx.r8.u64 | 34048;
	// ori r9,r9,39168
	ctx.r9.u64 = ctx.r9.u64 | 39168;
	// ori r10,r10,41216
	ctx.r10.u64 = ctx.r10.u64 | 41216;
	// ori r27,r5,52414
	ctx.r27.u64 = ctx.r5.u64 | 52414;
	// ori r28,r4,35062
	ctx.r28.u64 = ctx.r4.u64 | 35062;
	// ori r29,r31,7909
	ctx.r29.u64 = ctx.r31.u64 | 7909;
	// ori r30,r30,11072
	ctx.r30.u64 = ctx.r30.u64 | 11072;
loc_82F1B750:
	// srawi r5,r10,16
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xFFFF) != 0);
	ctx.r5.s64 = ctx.r10.s32 >> 16;
	// srawi r4,r9,16
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xFFFF) != 0);
	ctx.r4.s64 = ctx.r9.s32 >> 16;
	// srawi r31,r8,16
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xFFFF) != 0);
	ctx.r31.s64 = ctx.r8.s32 >> 16;
	// stw r5,-4092(r11)
	PPC_STORE_U32(ctx.r11.u32 + -4092, ctx.r5.u32);
	// srawi r5,r7,16
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0xFFFF) != 0);
	ctx.r5.s64 = ctx.r7.s32 >> 16;
	// stw r4,-2044(r11)
	PPC_STORE_U32(ctx.r11.u32 + -2044, ctx.r4.u32);
	// srawi r4,r6,16
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xFFFF) != 0);
	ctx.r4.s64 = ctx.r6.s32 >> 16;
	// stw r31,-3068(r11)
	PPC_STORE_U32(ctx.r11.u32 + -3068, ctx.r31.u32);
	// stw r5,-1020(r11)
	PPC_STORE_U32(ctx.r11.u32 + -1020, ctx.r5.u32);
	// add r10,r10,r27
	ctx.r10.u64 = ctx.r10.u64 + ctx.r27.u64;
	// stwu r4,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r4.u32);
	ctx.r11.u32 = ea;
	// addi r9,r9,14030
	ctx.r9.s64 = ctx.r9.s64 + 14030;
	// add r8,r8,r28
	ctx.r8.u64 = ctx.r8.u64 + ctx.r28.u64;
	// add r7,r7,r29
	ctx.r7.u64 = ctx.r7.u64 + ctx.r29.u64;
	// add r6,r6,r30
	ctx.r6.u64 = ctx.r6.u64 + ctx.r30.u64;
	// bdnz 0x82f1b750
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82F1B750;
loc_82F1B790:
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// li r11,1068
	ctx.r11.s64 = 1068;
	// addi r10,r10,-30864
	ctx.r10.s64 = ctx.r10.s64 + -30864;
	// li r9,-2136
	ctx.r9.s64 = -2136;
	// addi r8,r10,2136
	ctx.r8.s64 = ctx.r10.s64 + 2136;
	// li r10,-534
	ctx.r10.s64 = -534;
	// stw r8,14460(r3)
	PPC_STORE_U32(ctx.r3.u32 + 14460, ctx.r8.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_82F1B7B0:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bge cr6,0x82f1b7c0
	if (!ctx.cr6.lt) goto loc_82F1B7C0;
	// li r11,0
	ctx.r11.s64 = 0;
	// b 0x82f1b7d0
	goto loc_82F1B7D0;
loc_82F1B7C0:
	// cmpwi cr6,r10,255
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 255, ctx.xer);
	// li r11,255
	ctx.r11.s64 = 255;
	// bgt cr6,0x82f1b7d0
	if (ctx.cr6.gt) goto loc_82F1B7D0;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_82F1B7D0:
	// lwz r8,14460(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 14460);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwx r11,r9,r8
	PPC_STORE_U32(ctx.r9.u32 + ctx.r8.u32, ctx.r11.u32);
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// bdnz 0x82f1b7b0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82F1B7B0;
	// b 0x82fa76c4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F1B7E8"))) PPC_WEAK_FUNC(sub_82F1B7E8);
PPC_FUNC_IMPL(__imp__sub_82F1B7E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x82F1B7F0;
	__savegprlr_29(ctx, base);
	// addi r12,r1,-32
	ctx.r12.s64 = ctx.r1.s64 + -32;
	// bl 0x82fa8d24
	ctx.lr = 0x82F1B7F8;
	__savefpr_27(ctx, base);
	// li r9,256
	ctx.r9.s64 = 256;
	// lwz r11,14464(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 14464);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r11,r3,8312
	ctx.r11.s64 = ctx.r3.s64 + 8312;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bne cr6,0x82f1b940
	if (!ctx.cr6.eq) goto loc_82F1B940;
	// lis r8,-32239
	ctx.r8.s64 = -2112815104;
	// lis r7,-32239
	ctx.r7.s64 = -2112815104;
	// lis r6,-32240
	ctx.r6.s64 = -2112880640;
	// lis r9,-32240
	ctx.r9.s64 = -2112880640;
	// lis r5,-32239
	ctx.r5.s64 = -2112815104;
	// lfd f6,16040(r8)
	ctx.fpscr.disableFlushMode();
	ctx.f6.u64 = PPC_LOAD_U64(ctx.r8.u32 + 16040);
	// lis r4,-32239
	ctx.r4.s64 = -2112815104;
	// lfd f0,16032(r7)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r7.u32 + 16032);
	// lis r3,-32239
	ctx.r3.s64 = -2112815104;
	// lfd f7,-3536(r6)
	ctx.f7.u64 = PPC_LOAD_U64(ctx.r6.u32 + -3536);
	// lis r8,-32240
	ctx.r8.s64 = -2112880640;
	// lis r7,-32240
	ctx.r7.s64 = -2112880640;
	// lfd f5,-3528(r9)
	ctx.f5.u64 = PPC_LOAD_U64(ctx.r9.u32 + -3528);
	// lis r6,-32240
	ctx.r6.s64 = -2112880640;
	// lfd f8,16024(r5)
	ctx.f8.u64 = PPC_LOAD_U64(ctx.r5.u32 + 16024);
	// lfd f9,16016(r4)
	ctx.f9.u64 = PPC_LOAD_U64(ctx.r4.u32 + 16016);
	// lis r9,1
	ctx.r9.s64 = 65536;
	// lfd f10,16008(r3)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r3.u32 + 16008);
	// lfd f11,-3488(r8)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r8.u32 + -3488);
	// lfd f12,-3520(r7)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r7.u32 + -3520);
	// lfd f13,-3544(r6)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r6.u32 + -3544);
loc_82F1B868:
	// extsw r8,r10
	ctx.r8.s64 = ctx.r10.s32;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// std r8,-128(r1)
	PPC_STORE_U64(ctx.r1.u32 + -128, ctx.r8.u64);
	// lfd f4,-128(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f4.u64 = PPC_LOAD_U64(ctx.r1.u32 + -128);
	// fcfid f3,f4
	ctx.f3.f64 = double(ctx.f4.s64);
	// fmul f2,f3,f7
	ctx.f2.f64 = ctx.f3.f64 * ctx.f7.f64;
	// fmul f4,f3,f9
	ctx.f4.f64 = ctx.f3.f64 * ctx.f9.f64;
	// fmadd f1,f3,f11,f10
	ctx.f1.f64 = ctx.f3.f64 * ctx.f11.f64 + ctx.f10.f64;
	// fmul f31,f3,f8
	ctx.f31.f64 = ctx.f3.f64 * ctx.f8.f64;
	// fmul f30,f3,f6
	ctx.f30.f64 = ctx.f3.f64 * ctx.f6.f64;
	// fmul f29,f3,f13
	ctx.f29.f64 = ctx.f3.f64 * ctx.f13.f64;
	// fnmsub f28,f3,f5,f0
	ctx.f28.f64 = -(ctx.f3.f64 * ctx.f5.f64 - ctx.f0.f64);
	// fmul f3,f3,f12
	ctx.f3.f64 = ctx.f3.f64 * ctx.f12.f64;
	// fadd f27,f2,f0
	ctx.f27.f64 = ctx.f2.f64 + ctx.f0.f64;
	// fctiwz f4,f4
	ctx.f4.s64 = (ctx.f4.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f4.f64));
	// stfd f4,-112(r1)
	PPC_STORE_U64(ctx.r1.u32 + -112, ctx.f4.u64);
	// fctiwz f1,f1
	ctx.f1.s64 = (ctx.f1.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f1.f64));
	// stfd f1,-120(r1)
	PPC_STORE_U64(ctx.r1.u32 + -120, ctx.f1.u64);
	// fctiwz f4,f2
	ctx.f4.s64 = (ctx.f2.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f2.f64));
	// stfd f4,-96(r1)
	PPC_STORE_U64(ctx.r1.u32 + -96, ctx.f4.u64);
	// fctiwz f1,f31
	ctx.f1.s64 = (ctx.f31.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f31.f64));
	// stfd f1,-104(r1)
	PPC_STORE_U64(ctx.r1.u32 + -104, ctx.f1.u64);
	// fctiwz f2,f30
	ctx.f2.s64 = (ctx.f30.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f30.f64));
	// stfd f2,-88(r1)
	PPC_STORE_U64(ctx.r1.u32 + -88, ctx.f2.u64);
	// lwz r5,-100(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + -100);
	// fctiwz f1,f29
	ctx.f1.s64 = (ctx.f29.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f29.f64));
	// fctiwz f3,f3
	ctx.f3.s64 = (ctx.f3.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f3.f64));
	// lwz r6,-108(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + -108);
	// stfd f1,-80(r1)
	PPC_STORE_U64(ctx.r1.u32 + -80, ctx.f1.u64);
	// fctiwz f4,f28
	ctx.f4.s64 = (ctx.f28.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f28.f64));
	// lwz r7,-116(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + -116);
	// stfd f4,-112(r1)
	PPC_STORE_U64(ctx.r1.u32 + -112, ctx.f4.u64);
	// fctiwz f2,f27
	ctx.f2.s64 = (ctx.f27.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f27.f64));
	// stfd f2,-104(r1)
	PPC_STORE_U64(ctx.r1.u32 + -104, ctx.f2.u64);
	// lwz r4,-100(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + -100);
	// stfd f3,-104(r1)
	PPC_STORE_U64(ctx.r1.u32 + -104, ctx.f3.u64);
	// lwz r3,-92(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + -92);
	// lwz r8,-84(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + -84);
	// lwz r31,-76(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + -76);
	// lwz r29,-100(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + -100);
	// lwz r30,-108(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + -108);
	// stw r5,-4092(r11)
	PPC_STORE_U32(ctx.r11.u32 + -4092, ctx.r5.u32);
	// stw r6,-7164(r11)
	PPC_STORE_U32(ctx.r11.u32 + -7164, ctx.r6.u32);
	// stw r7,-2044(r11)
	PPC_STORE_U32(ctx.r11.u32 + -2044, ctx.r7.u32);
	// stw r4,-1020(r11)
	PPC_STORE_U32(ctx.r11.u32 + -1020, ctx.r4.u32);
	// stw r3,-6140(r11)
	PPC_STORE_U32(ctx.r11.u32 + -6140, ctx.r3.u32);
	// stw r8,-3068(r11)
	PPC_STORE_U32(ctx.r11.u32 + -3068, ctx.r8.u32);
	// stw r31,-8188(r11)
	PPC_STORE_U32(ctx.r11.u32 + -8188, ctx.r31.u32);
	// stw r29,-5116(r11)
	PPC_STORE_U32(ctx.r11.u32 + -5116, ctx.r29.u32);
	// stwu r30,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r30.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x82f1b868
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82F1B868;
	// addi r12,r1,-32
	ctx.r12.s64 = ctx.r1.s64 + -32;
	// bl 0x82fa8d70
	ctx.lr = 0x82F1B93C;
	__restfpr_27(ctx, base);
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
loc_82F1B940:
	// lis r8,-32239
	ctx.r8.s64 = -2112815104;
	// lis r7,-32253
	ctx.r7.s64 = -2113732608;
	// lis r6,-32239
	ctx.r6.s64 = -2112815104;
	// lis r9,-32239
	ctx.r9.s64 = -2112815104;
	// lis r5,-32239
	ctx.r5.s64 = -2112815104;
	// lfd f6,16000(r8)
	ctx.fpscr.disableFlushMode();
	ctx.f6.u64 = PPC_LOAD_U64(ctx.r8.u32 + 16000);
	// lis r4,-32239
	ctx.r4.s64 = -2112815104;
	// lfd f7,3640(r7)
	ctx.f7.u64 = PPC_LOAD_U64(ctx.r7.u32 + 3640);
	// lis r3,-32239
	ctx.r3.s64 = -2112815104;
	// lfd f8,15992(r6)
	ctx.f8.u64 = PPC_LOAD_U64(ctx.r6.u32 + 15992);
	// lis r8,-32239
	ctx.r8.s64 = -2112815104;
	// lis r7,-32239
	ctx.r7.s64 = -2112815104;
	// lfd f5,15984(r9)
	ctx.f5.u64 = PPC_LOAD_U64(ctx.r9.u32 + 15984);
	// lis r6,-32239
	ctx.r6.s64 = -2112815104;
	// lfd f9,15976(r5)
	ctx.f9.u64 = PPC_LOAD_U64(ctx.r5.u32 + 15976);
	// lfd f10,15968(r4)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r4.u32 + 15968);
	// lis r9,1
	ctx.r9.s64 = 65536;
	// lfd f11,15960(r3)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 15960);
	// lfd f12,15952(r8)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r8.u32 + 15952);
	// lfd f0,16032(r7)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r7.u32 + 16032);
	// lfd f13,16008(r6)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r6.u32 + 16008);
loc_82F1B994:
	// extsw r8,r10
	ctx.r8.s64 = ctx.r10.s32;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// std r8,-80(r1)
	PPC_STORE_U64(ctx.r1.u32 + -80, ctx.r8.u64);
	// lfd f4,-80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f4.u64 = PPC_LOAD_U64(ctx.r1.u32 + -80);
	// fcfid f3,f4
	ctx.f3.f64 = double(ctx.f4.s64);
	// fmul f2,f3,f7
	ctx.f2.f64 = ctx.f3.f64 * ctx.f7.f64;
	// fmul f1,f3,f8
	ctx.f1.f64 = ctx.f3.f64 * ctx.f8.f64;
	// fmul f4,f3,f12
	ctx.f4.f64 = ctx.f3.f64 * ctx.f12.f64;
	// fnmsub f30,f3,f5,f0
	ctx.f30.f64 = -(ctx.f3.f64 * ctx.f5.f64 - ctx.f0.f64);
	// fmadd f31,f3,f10,f13
	ctx.f31.f64 = ctx.f3.f64 * ctx.f10.f64 + ctx.f13.f64;
	// fmul f29,f3,f11
	ctx.f29.f64 = ctx.f3.f64 * ctx.f11.f64;
	// fmul f28,f3,f6
	ctx.f28.f64 = ctx.f3.f64 * ctx.f6.f64;
	// fmul f3,f3,f9
	ctx.f3.f64 = ctx.f3.f64 * ctx.f9.f64;
	// fadd f27,f2,f0
	ctx.f27.f64 = ctx.f2.f64 + ctx.f0.f64;
	// fctiwz f1,f1
	ctx.f1.s64 = (ctx.f1.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f1.f64));
	// stfd f1,-88(r1)
	PPC_STORE_U64(ctx.r1.u32 + -88, ctx.f1.u64);
	// fctiwz f4,f4
	ctx.f4.s64 = (ctx.f4.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f4.f64));
	// stfd f4,-104(r1)
	PPC_STORE_U64(ctx.r1.u32 + -104, ctx.f4.u64);
	// lwz r7,-84(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + -84);
	// fctiwz f4,f30
	ctx.f4.s64 = (ctx.f30.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f30.f64));
	// stfd f4,-88(r1)
	PPC_STORE_U64(ctx.r1.u32 + -88, ctx.f4.u64);
	// lwz r5,-100(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + -100);
	// fctiwz f4,f2
	ctx.f4.s64 = (ctx.f2.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f2.f64));
	// stfd f4,-104(r1)
	PPC_STORE_U64(ctx.r1.u32 + -104, ctx.f4.u64);
	// fctiwz f1,f31
	ctx.f1.s64 = (ctx.f31.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f31.f64));
	// stfd f1,-96(r1)
	PPC_STORE_U64(ctx.r1.u32 + -96, ctx.f1.u64);
	// lwz r4,-84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + -84);
	// fctiwz f1,f29
	ctx.f1.s64 = (ctx.f29.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f29.f64));
	// lwz r6,-92(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + -92);
	// stfd f1,-96(r1)
	PPC_STORE_U64(ctx.r1.u32 + -96, ctx.f1.u64);
	// fctiwz f1,f3
	ctx.f1.s64 = (ctx.f3.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f3.f64));
	// lwz r31,-100(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + -100);
	// fctiwz f4,f27
	ctx.f4.s64 = (ctx.f27.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f27.f64));
	// stfd f4,-88(r1)
	PPC_STORE_U64(ctx.r1.u32 + -88, ctx.f4.u64);
	// lwz r3,-84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + -84);
	// stfd f1,-88(r1)
	PPC_STORE_U64(ctx.r1.u32 + -88, ctx.f1.u64);
	// lwz r8,-84(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + -84);
	// fctiwz f2,f28
	ctx.f2.s64 = (ctx.f28.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f28.f64));
	// stfd f2,-112(r1)
	PPC_STORE_U64(ctx.r1.u32 + -112, ctx.f2.u64);
	// lwz r30,-108(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + -108);
	// stw r7,-4092(r11)
	PPC_STORE_U32(ctx.r11.u32 + -4092, ctx.r7.u32);
	// stw r5,-8188(r11)
	PPC_STORE_U32(ctx.r11.u32 + -8188, ctx.r5.u32);
	// stw r6,-2044(r11)
	PPC_STORE_U32(ctx.r11.u32 + -2044, ctx.r6.u32);
	// stw r31,-6140(r11)
	PPC_STORE_U32(ctx.r11.u32 + -6140, ctx.r31.u32);
	// stw r3,-1020(r11)
	PPC_STORE_U32(ctx.r11.u32 + -1020, ctx.r3.u32);
	// stw r8,-7164(r11)
	PPC_STORE_U32(ctx.r11.u32 + -7164, ctx.r8.u32);
	// lwz r8,-92(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + -92);
	// stw r8,-5116(r11)
	PPC_STORE_U32(ctx.r11.u32 + -5116, ctx.r8.u32);
	// stw r30,-3068(r11)
	PPC_STORE_U32(ctx.r11.u32 + -3068, ctx.r30.u32);
	// stwu r4,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r4.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x82f1b994
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82F1B994;
	// addi r12,r1,-32
	ctx.r12.s64 = ctx.r1.s64 + -32;
	// bl 0x82fa8d70
	ctx.lr = 0x82F1BA68;
	__restfpr_27(ctx, base);
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F1BA6C"))) PPC_WEAK_FUNC(sub_82F1BA6C);
PPC_FUNC_IMPL(__imp__sub_82F1BA6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F1BA70"))) PPC_WEAK_FUNC(sub_82F1BA70);
PPC_FUNC_IMPL(__imp__sub_82F1BA70) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7640
	ctx.lr = 0x82F1BA78;
	__savegprlr_14(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r11,r11,8000
	ctx.r11.s64 = ctx.r11.s64 + 8000;
	// lis r10,-31959
	ctx.r10.s64 = -2094465024;
	// stw r8,-168(r1)
	PPC_STORE_U32(ctx.r1.u32 + -168, ctx.r8.u32);
	// lis r9,-24416
	ctx.r9.s64 = -1600126976;
	// stw r11,-164(r1)
	PPC_STORE_U32(ctx.r1.u32 + -164, ctx.r11.u32);
	// li r6,51
	ctx.r6.s64 = 51;
	// ori r9,r9,41121
	ctx.r9.u64 = ctx.r9.u64 | 41121;
	// addi r7,r10,-26592
	ctx.r7.s64 = ctx.r10.s64 + -26592;
loc_82F1BAA0:
	// li r10,4
	ctx.r10.s64 = 4;
	// stw r11,-172(r1)
	PPC_STORE_U32(ctx.r1.u32 + -172, ctx.r11.u32);
	// stw r10,-176(r1)
	PPC_STORE_U32(ctx.r1.u32 + -176, ctx.r10.u32);
loc_82F1BAAC:
	// li r5,64
	ctx.r5.s64 = 64;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r4,r7,259
	ctx.r4.s64 = ctx.r7.s64 + 259;
	// li r10,0
	ctx.r10.s64 = 0;
	// add r24,r8,r4
	ctx.r24.u64 = ctx.r8.u64 + ctx.r4.u64;
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
loc_82F1BAC4:
	// rlwinm r4,r10,0,24,28
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xF8;
	// rlwinm r3,r10,0,24,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFC;
	// mulhw r5,r4,r9
	ctx.r5.s64 = (int64_t(ctx.r4.s32) * int64_t(ctx.r9.s32)) >> 32;
	// add r5,r5,r4
	ctx.r5.u64 = ctx.r5.u64 + ctx.r4.u64;
	// mulhw r31,r3,r9
	ctx.r31.s64 = (int64_t(ctx.r3.s32) * int64_t(ctx.r9.s32)) >> 32;
	// srawi r5,r5,5
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x1F) != 0);
	ctx.r5.s64 = ctx.r5.s32 >> 5;
	// add r29,r31,r3
	ctx.r29.u64 = ctx.r31.u64 + ctx.r3.u64;
	// rlwinm r30,r5,1,31,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0x1;
	// divw r28,r4,r6
	ctx.r28.s32 = ctx.r4.s32 / ctx.r6.s32;
	// add r31,r5,r30
	ctx.r31.u64 = ctx.r5.u64 + ctx.r30.u64;
	// addi r5,r10,2
	ctx.r5.s64 = ctx.r10.s64 + 2;
	// mulli r31,r31,51
	ctx.r31.s64 = ctx.r31.s64 * 51;
	// subf r30,r31,r4
	ctx.r30.s64 = ctx.r4.s64 - ctx.r31.s64;
	// addi r31,r5,-1
	ctx.r31.s64 = ctx.r5.s64 + -1;
	// subfc r4,r30,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r30.u32;
	ctx.r4.s64 = ctx.r11.s64 - ctx.r30.s64;
	// eqv r27,r30,r11
	ctx.r27.u64 = ~(ctx.r30.u64 ^ ctx.r11.u64);
	// eqv r26,r30,r11
	ctx.r26.u64 = ~(ctx.r30.u64 ^ ctx.r11.u64);
	// rlwinm r27,r27,1,31,31
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 1) & 0x1;
	// rlwinm r4,r31,0,24,28
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0xF8;
	// addze r25,r27
	temp.s64 = ctx.r27.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r27.u32;
	ctx.r25.s64 = temp.s64;
	// subfc r30,r30,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r30.u32;
	ctx.r30.s64 = ctx.r11.s64 - ctx.r30.s64;
	// rlwinm r31,r31,0,24,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0xFC;
	// rlwinm r30,r26,1,31,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 1) & 0x1;
	// add r26,r8,r10
	ctx.r26.u64 = ctx.r8.u64 + ctx.r10.u64;
	// addze r27,r30
	temp.s64 = ctx.r30.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r30.u32;
	ctx.r27.s64 = temp.s64;
	// srawi r30,r29,5
	ctx.xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0x1F) != 0);
	ctx.r30.s64 = ctx.r29.s32 >> 5;
	// clrlwi r29,r27,31
	ctx.r29.u64 = ctx.r27.u32 & 0x1;
	// rlwinm r27,r30,1,31,31
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0x1;
	// add r29,r29,r28
	ctx.r29.u64 = ctx.r29.u64 + ctx.r28.u64;
	// add r30,r30,r27
	ctx.r30.u64 = ctx.r30.u64 + ctx.r27.u64;
	// mulhw r27,r4,r9
	ctx.r27.s64 = (int64_t(ctx.r4.s32) * int64_t(ctx.r9.s32)) >> 32;
	// mulli r30,r30,51
	ctx.r30.s64 = ctx.r30.s64 * 51;
	// subf r23,r30,r3
	ctx.r23.s64 = ctx.r3.s64 - ctx.r30.s64;
	// rlwinm r30,r29,3,0,28
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 3) & 0xFFFFFFF8;
	// subfc r22,r23,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r23.u32;
	ctx.r22.s64 = ctx.r11.s64 - ctx.r23.s64;
	// eqv r23,r23,r11
	ctx.r23.u64 = ~(ctx.r23.u64 ^ ctx.r11.u64);
	// add r27,r27,r4
	ctx.r27.u64 = ctx.r27.u64 + ctx.r4.u64;
	// rlwinm r23,r23,1,31,31
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 1) & 0x1;
	// add r29,r29,r30
	ctx.r29.u64 = ctx.r29.u64 + ctx.r30.u64;
	// addze r23,r23
	temp.s64 = ctx.r23.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r23.u32;
	ctx.r23.s64 = temp.s64;
	// srawi r30,r27,5
	ctx.xer.ca = (ctx.r27.s32 < 0) & ((ctx.r27.u32 & 0x1F) != 0);
	ctx.r30.s64 = ctx.r27.s32 >> 5;
	// divw r3,r3,r6
	ctx.r3.s32 = ctx.r3.s32 / ctx.r6.s32;
	// rlwinm r27,r30,1,31,31
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0x1;
	// add r20,r8,r10
	ctx.r20.u64 = ctx.r8.u64 + ctx.r10.u64;
	// add r27,r30,r27
	ctx.r27.u64 = ctx.r30.u64 + ctx.r27.u64;
	// clrlwi r30,r23,31
	ctx.r30.u64 = ctx.r23.u32 & 0x1;
	// mulli r27,r27,51
	ctx.r27.s64 = ctx.r27.s64 * 51;
	// subf r23,r27,r4
	ctx.r23.s64 = ctx.r4.s64 - ctx.r27.s64;
	// add r3,r30,r3
	ctx.r3.u64 = ctx.r30.u64 + ctx.r3.u64;
	// subfc r30,r23,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r23.u32;
	ctx.r30.s64 = ctx.r11.s64 - ctx.r23.s64;
	// eqv r22,r23,r11
	ctx.r22.u64 = ~(ctx.r23.u64 ^ ctx.r11.u64);
	// rlwinm r27,r3,1,0,30
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r30,r22,1,31,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 1) & 0x1;
	// add r27,r3,r27
	ctx.r27.u64 = ctx.r3.u64 + ctx.r27.u64;
	// addze r22,r30
	temp.s64 = ctx.r30.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r30.u32;
	ctx.r22.s64 = temp.s64;
	// subfc r21,r23,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r23.u32;
	ctx.r21.s64 = ctx.r11.s64 - ctx.r23.s64;
	// eqv r23,r23,r11
	ctx.r23.u64 = ~(ctx.r23.u64 ^ ctx.r11.u64);
	// mulhw r3,r31,r9
	ctx.r3.s64 = (int64_t(ctx.r31.s32) * int64_t(ctx.r9.s32)) >> 32;
	// clrlwi r30,r25,31
	ctx.r30.u64 = ctx.r25.u32 & 0x1;
	// rlwinm r25,r23,1,31,31
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 1) & 0x1;
	// add r3,r3,r31
	ctx.r3.u64 = ctx.r3.u64 + ctx.r31.u64;
	// add r30,r30,r28
	ctx.r30.u64 = ctx.r30.u64 + ctx.r28.u64;
	// divw r28,r4,r6
	ctx.r28.s32 = ctx.r4.s32 / ctx.r6.s32;
	// addze r25,r25
	temp.s64 = ctx.r25.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r25.u32;
	ctx.r25.s64 = temp.s64;
	// stbx r30,r26,r7
	PPC_STORE_U8(ctx.r26.u32 + ctx.r7.u32, ctx.r30.u8);
	// srawi r4,r3,5
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1F) != 0);
	ctx.r4.s64 = ctx.r3.s32 >> 5;
	// addi r19,r7,256
	ctx.r19.s64 = ctx.r7.s64 + 256;
	// rlwinm r3,r4,1,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0x1;
	// rlwinm r30,r5,0,24,28
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0xF8;
	// add r4,r4,r3
	ctx.r4.u64 = ctx.r4.u64 + ctx.r3.u64;
	// rlwinm r29,r29,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// add r23,r8,r10
	ctx.r23.u64 = ctx.r8.u64 + ctx.r10.u64;
	// addi r21,r7,512
	ctx.r21.s64 = ctx.r7.s64 + 512;
	// rlwinm r27,r27,1,24,30
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 1) & 0xFE;
	// mulli r3,r4,51
	ctx.r3.s64 = ctx.r4.s64 * 51;
	// stbx r27,r20,r19
	PPC_STORE_U8(ctx.r20.u32 + ctx.r19.u32, ctx.r27.u8);
	// addi r29,r29,10
	ctx.r29.s64 = ctx.r29.s64 + 10;
	// mulhw r4,r30,r9
	ctx.r4.s64 = (int64_t(ctx.r30.s32) * int64_t(ctx.r9.s32)) >> 32;
	// stbx r29,r23,r21
	PPC_STORE_U8(ctx.r23.u32 + ctx.r21.u32, ctx.r29.u8);
	// subf r3,r3,r31
	ctx.r3.s64 = ctx.r31.s64 - ctx.r3.s64;
	// add r27,r4,r30
	ctx.r27.u64 = ctx.r4.u64 + ctx.r30.u64;
	// subfc r29,r3,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r3.u32;
	ctx.r29.s64 = ctx.r11.s64 - ctx.r3.s64;
	// std r24,-160(r1)
	PPC_STORE_U64(ctx.r1.u32 + -160, ctx.r24.u64);
	// eqv r3,r3,r11
	ctx.r3.u64 = ~(ctx.r3.u64 ^ ctx.r11.u64);
	// clrlwi r4,r25,31
	ctx.r4.u64 = ctx.r25.u32 & 0x1;
	// rlwinm r3,r3,1,31,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0x1;
	// add r29,r4,r28
	ctx.r29.u64 = ctx.r4.u64 + ctx.r28.u64;
	// addze r25,r3
	temp.s64 = ctx.r3.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r3.u32;
	ctx.r25.s64 = temp.s64;
	// srawi r4,r27,5
	ctx.xer.ca = (ctx.r27.s32 < 0) & ((ctx.r27.u32 & 0x1F) != 0);
	ctx.r4.s64 = ctx.r27.s32 >> 5;
	// rlwinm r26,r29,3,0,28
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r27,r4,1,31,31
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0x1;
	// rlwinm r3,r5,0,24,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0xFC;
	// add r27,r4,r27
	ctx.r27.u64 = ctx.r4.u64 + ctx.r27.u64;
	// add r26,r29,r26
	ctx.r26.u64 = ctx.r29.u64 + ctx.r26.u64;
	// mulli r27,r27,51
	ctx.r27.s64 = ctx.r27.s64 * 51;
	// subf r27,r27,r30
	ctx.r27.s64 = ctx.r30.s64 - ctx.r27.s64;
	// mulhw r4,r3,r9
	ctx.r4.s64 = (int64_t(ctx.r3.s32) * int64_t(ctx.r9.s32)) >> 32;
	// subfc r23,r27,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r27.u32;
	ctx.r23.s64 = ctx.r11.s64 - ctx.r27.s64;
	// eqv r21,r27,r11
	ctx.r21.u64 = ~(ctx.r27.u64 ^ ctx.r11.u64);
	// eqv r20,r27,r11
	ctx.r20.u64 = ~(ctx.r27.u64 ^ ctx.r11.u64);
	// rlwinm r23,r21,1,31,31
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 1) & 0x1;
	// add r4,r4,r3
	ctx.r4.u64 = ctx.r4.u64 + ctx.r3.u64;
	// addze r23,r23
	temp.s64 = ctx.r23.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r23.u32;
	ctx.r23.s64 = temp.s64;
	// subfc r29,r27,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r27.u32;
	ctx.r29.s64 = ctx.r11.s64 - ctx.r27.s64;
	// divw r31,r31,r6
	ctx.r31.s32 = ctx.r31.s32 / ctx.r6.s32;
	// rlwinm r29,r20,1,31,31
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r20.u32 | (ctx.r20.u64 << 32), 1) & 0x1;
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// addze r21,r29
	temp.s64 = ctx.r29.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r29.u32;
	ctx.r21.s64 = temp.s64;
	// srawi r4,r4,5
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x1F) != 0);
	ctx.r4.s64 = ctx.r4.s32 >> 5;
	// divw r27,r30,r6
	ctx.r27.s32 = ctx.r30.s32 / ctx.r6.s32;
	// rlwinm r29,r4,1,31,31
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0x1;
	// clrlwi r30,r23,31
	ctx.r30.u64 = ctx.r23.u32 & 0x1;
	// add r29,r4,r29
	ctx.r29.u64 = ctx.r4.u64 + ctx.r29.u64;
	// clrlwi r4,r25,31
	ctx.r4.u64 = ctx.r25.u32 & 0x1;
	// mulli r29,r29,51
	ctx.r29.s64 = ctx.r29.s64 * 51;
	// add r31,r4,r31
	ctx.r31.u64 = ctx.r4.u64 + ctx.r31.u64;
	// subf r29,r29,r3
	ctx.r29.s64 = ctx.r3.s64 - ctx.r29.s64;
	// rlwinm r25,r31,1,0,30
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r4,r5,0,24,28
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0xF8;
	// subfc r23,r29,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r29.u32;
	ctx.r23.s64 = ctx.r11.s64 - ctx.r29.s64;
	// add r25,r31,r25
	ctx.r25.u64 = ctx.r31.u64 + ctx.r25.u64;
	// eqv r29,r29,r11
	ctx.r29.u64 = ~(ctx.r29.u64 ^ ctx.r11.u64);
	// mulhw r31,r4,r9
	ctx.r31.s64 = (int64_t(ctx.r4.s32) * int64_t(ctx.r9.s32)) >> 32;
	// rlwinm r29,r29,1,31,31
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0x1;
	// add r31,r31,r4
	ctx.r31.u64 = ctx.r31.u64 + ctx.r4.u64;
	// addze r23,r29
	temp.s64 = ctx.r29.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r29.u32;
	ctx.r23.s64 = temp.s64;
	// srawi r31,r31,5
	ctx.xer.ca = (ctx.r31.s32 < 0) & ((ctx.r31.u32 & 0x1F) != 0);
	ctx.r31.s64 = ctx.r31.s32 >> 5;
	// add r20,r30,r27
	ctx.r20.u64 = ctx.r30.u64 + ctx.r27.u64;
	// rlwinm r30,r31,1,31,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0x1;
	// clrlwi r29,r22,31
	ctx.r29.u64 = ctx.r22.u32 & 0x1;
	// add r31,r31,r30
	ctx.r31.u64 = ctx.r31.u64 + ctx.r30.u64;
	// add r29,r29,r28
	ctx.r29.u64 = ctx.r29.u64 + ctx.r28.u64;
	// mulli r31,r31,51
	ctx.r31.s64 = ctx.r31.s64 * 51;
	// rlwinm r26,r26,2,0,29
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 2) & 0xFFFFFFFC;
	// add r28,r8,r10
	ctx.r28.u64 = ctx.r8.u64 + ctx.r10.u64;
	// addi r22,r7,1
	ctx.r22.s64 = ctx.r7.s64 + 1;
	// subf r30,r31,r4
	ctx.r30.s64 = ctx.r4.s64 - ctx.r31.s64;
	// addi r31,r26,10
	ctx.r31.s64 = ctx.r26.s64 + 10;
	// add r17,r8,r10
	ctx.r17.u64 = ctx.r8.u64 + ctx.r10.u64;
	// addi r16,r7,257
	ctx.r16.s64 = ctx.r7.s64 + 257;
	// subfc r26,r30,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r30.u32;
	ctx.r26.s64 = ctx.r11.s64 - ctx.r30.s64;
	// stbx r29,r28,r22
	PPC_STORE_U8(ctx.r28.u32 + ctx.r22.u32, ctx.r29.u8);
	// eqv r24,r30,r11
	ctx.r24.u64 = ~(ctx.r30.u64 ^ ctx.r11.u64);
	// add r19,r8,r10
	ctx.r19.u64 = ctx.r8.u64 + ctx.r10.u64;
	// addi r18,r7,513
	ctx.r18.s64 = ctx.r7.s64 + 513;
	// rlwinm r25,r25,1,24,30
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 1) & 0xFE;
	// rlwinm r29,r24,1,31,31
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 1) & 0x1;
	// rlwinm r5,r5,0,24,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 0) & 0xFC;
	// stbx r25,r17,r16
	PPC_STORE_U8(ctx.r17.u32 + ctx.r16.u32, ctx.r25.u8);
	// add r15,r8,r10
	ctx.r15.u64 = ctx.r8.u64 + ctx.r10.u64;
	// addi r14,r7,2
	ctx.r14.s64 = ctx.r7.s64 + 2;
	// stbx r31,r19,r18
	PPC_STORE_U8(ctx.r19.u32 + ctx.r18.u32, ctx.r31.u8);
	// eqv r28,r30,r11
	ctx.r28.u64 = ~(ctx.r30.u64 ^ ctx.r11.u64);
	// addze r25,r29
	temp.s64 = ctx.r29.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r29.u32;
	ctx.r25.s64 = temp.s64;
	// mulhw r31,r5,r9
	ctx.r31.s64 = (int64_t(ctx.r5.s32) * int64_t(ctx.r9.s32)) >> 32;
	// stbx r20,r15,r14
	PPC_STORE_U8(ctx.r15.u32 + ctx.r14.u32, ctx.r20.u8);
	// clrlwi r26,r21,31
	ctx.r26.u64 = ctx.r21.u32 & 0x1;
	// subfc r30,r30,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r30.u32;
	ctx.r30.s64 = ctx.r11.s64 - ctx.r30.s64;
	// divw r29,r4,r6
	ctx.r29.s32 = ctx.r4.s32 / ctx.r6.s32;
	// add r31,r31,r5
	ctx.r31.u64 = ctx.r31.u64 + ctx.r5.u64;
	// rlwinm r30,r28,1,31,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 1) & 0x1;
	// add r4,r26,r27
	ctx.r4.u64 = ctx.r26.u64 + ctx.r27.u64;
	// addze r28,r30
	temp.s64 = ctx.r30.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r30.u32;
	ctx.r28.s64 = temp.s64;
	// ld r24,-160(r1)
	ctx.r24.u64 = PPC_LOAD_U64(ctx.r1.u32 + -160);
	// srawi r30,r31,5
	ctx.xer.ca = (ctx.r31.s32 < 0) & ((ctx.r31.u32 & 0x1F) != 0);
	ctx.r30.s64 = ctx.r31.s32 >> 5;
	// clrlwi r31,r28,31
	ctx.r31.u64 = ctx.r28.u32 & 0x1;
	// rlwinm r28,r30,1,31,31
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0x1;
	// add r31,r31,r29
	ctx.r31.u64 = ctx.r31.u64 + ctx.r29.u64;
	// add r30,r30,r28
	ctx.r30.u64 = ctx.r30.u64 + ctx.r28.u64;
	// rlwinm r28,r4,3,0,28
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// mulli r30,r30,51
	ctx.r30.s64 = ctx.r30.s64 * 51;
	// subf r27,r30,r5
	ctx.r27.s64 = ctx.r5.s64 - ctx.r30.s64;
	// add r28,r4,r28
	ctx.r28.u64 = ctx.r4.u64 + ctx.r28.u64;
	// subfc r26,r27,r11
	ctx.xer.ca = ctx.r11.u32 >= ctx.r27.u32;
	ctx.r26.s64 = ctx.r11.s64 - ctx.r27.s64;
	// eqv r27,r27,r11
	ctx.r27.u64 = ~(ctx.r27.u64 ^ ctx.r11.u64);
	// rlwinm r30,r31,3,0,28
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r4,r27,1,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 1) & 0x1;
	// add r31,r31,r30
	ctx.r31.u64 = ctx.r31.u64 + ctx.r30.u64;
	// addze r27,r4
	temp.s64 = ctx.r4.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r4.u32;
	ctx.r27.s64 = temp.s64;
	// divw r4,r5,r6
	ctx.r4.s32 = ctx.r5.s32 / ctx.r6.s32;
	// divw r30,r3,r6
	ctx.r30.s32 = ctx.r3.s32 / ctx.r6.s32;
	// clrlwi r5,r27,31
	ctx.r5.u64 = ctx.r27.u32 & 0x1;
	// clrlwi r3,r23,31
	ctx.r3.u64 = ctx.r23.u32 & 0x1;
	// add r4,r5,r4
	ctx.r4.u64 = ctx.r5.u64 + ctx.r4.u64;
	// add r5,r3,r30
	ctx.r5.u64 = ctx.r3.u64 + ctx.r30.u64;
	// rlwinm r27,r28,2,0,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r28,r5,1,0,30
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r3,r4,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// clrlwi r30,r25,31
	ctx.r30.u64 = ctx.r25.u32 & 0x1;
	// add r3,r4,r3
	ctx.r3.u64 = ctx.r4.u64 + ctx.r3.u64;
	// add r5,r5,r28
	ctx.r5.u64 = ctx.r5.u64 + ctx.r28.u64;
	// add r30,r30,r29
	ctx.r30.u64 = ctx.r30.u64 + ctx.r29.u64;
	// add r4,r8,r10
	ctx.r4.u64 = ctx.r8.u64 + ctx.r10.u64;
	// add r26,r8,r10
	ctx.r26.u64 = ctx.r8.u64 + ctx.r10.u64;
	// add r25,r8,r10
	ctx.r25.u64 = ctx.r8.u64 + ctx.r10.u64;
	// add r23,r8,r10
	ctx.r23.u64 = ctx.r8.u64 + ctx.r10.u64;
	// rlwinm r31,r31,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r22,r7,514
	ctx.r22.s64 = ctx.r7.s64 + 514;
	// addi r28,r7,258
	ctx.r28.s64 = ctx.r7.s64 + 258;
	// addi r29,r7,3
	ctx.r29.s64 = ctx.r7.s64 + 3;
	// addi r21,r7,515
	ctx.r21.s64 = ctx.r7.s64 + 515;
	// rlwinm r3,r3,1,24,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFE;
	// addi r27,r27,10
	ctx.r27.s64 = ctx.r27.s64 + 10;
	// addi r31,r31,10
	ctx.r31.s64 = ctx.r31.s64 + 10;
	// stbx r3,r24,r10
	PPC_STORE_U8(ctx.r24.u32 + ctx.r10.u32, ctx.r3.u8);
	// rlwinm r5,r5,1,24,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFE;
	// stbx r27,r4,r22
	PPC_STORE_U8(ctx.r4.u32 + ctx.r22.u32, ctx.r27.u8);
	// stbx r30,r25,r29
	PPC_STORE_U8(ctx.r25.u32 + ctx.r29.u32, ctx.r30.u8);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// stbx r5,r26,r28
	PPC_STORE_U8(ctx.r26.u32 + ctx.r28.u32, ctx.r5.u8);
	// stbx r31,r23,r21
	PPC_STORE_U8(ctx.r23.u32 + ctx.r21.u32, ctx.r31.u8);
	// bdnz 0x82f1bac4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82F1BAC4;
	// lwz r11,-176(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -176);
	// addi r8,r8,3072
	ctx.r8.s64 = ctx.r8.s64 + 3072;
	// lwz r5,-172(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + -172);
	// addic. r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r11,r5,4
	ctx.r11.s64 = ctx.r5.s64 + 4;
	// stw r10,-176(r1)
	PPC_STORE_U32(ctx.r1.u32 + -176, ctx.r10.u32);
	// stw r11,-172(r1)
	PPC_STORE_U32(ctx.r1.u32 + -172, ctx.r11.u32);
	// bne 0x82f1baac
	if (!ctx.cr0.eq) goto loc_82F1BAAC;
	// lwz r10,-168(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + -168);
	// lwz r5,-164(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + -164);
	// addi r8,r10,768
	ctx.r8.s64 = ctx.r10.s64 + 768;
	// addi r4,r5,64
	ctx.r4.s64 = ctx.r5.s64 + 64;
	// stw r8,-168(r1)
	PPC_STORE_U32(ctx.r1.u32 + -168, ctx.r8.u32);
	// cmpw cr6,r11,r4
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r4.s32, ctx.xer);
	// blt cr6,0x82f1baa0
	if (ctx.cr6.lt) goto loc_82F1BAA0;
	// b 0x82fa7690
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F1BE54"))) PPC_WEAK_FUNC(sub_82F1BE54);
PPC_FUNC_IMPL(__imp__sub_82F1BE54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F1BE58"))) PPC_WEAK_FUNC(sub_82F1BE58);
PPC_FUNC_IMPL(__imp__sub_82F1BE58) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,112(r4)
	PPC_STORE_U32(ctx.r4.u32 + 112, ctx.r11.u32);
	// stw r11,120(r4)
	PPC_STORE_U32(ctx.r4.u32 + 120, ctx.r11.u32);
	// stw r11,108(r4)
	PPC_STORE_U32(ctx.r4.u32 + 108, ctx.r11.u32);
	// stw r11,116(r4)
	PPC_STORE_U32(ctx.r4.u32 + 116, ctx.r11.u32);
	// lwz r11,16(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82f1beac
	if (!ctx.cr6.eq) goto loc_82F1BEAC;
	// lhz r11,14(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 14);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// bne cr6,0x82f1bf70
	if (!ctx.cr6.eq) goto loc_82F1BF70;
loc_82F1BE84:
	// li r11,7
	ctx.r11.s64 = 7;
	// li r10,2
	ctx.r10.s64 = 2;
	// li r9,31744
	ctx.r9.s64 = 31744;
	// stw r11,112(r4)
	PPC_STORE_U32(ctx.r4.u32 + 112, ctx.r11.u32);
	// li r8,992
	ctx.r8.s64 = 992;
	// stw r10,120(r4)
	PPC_STORE_U32(ctx.r4.u32 + 120, ctx.r10.u32);
	// stw r9,108(r4)
	PPC_STORE_U32(ctx.r4.u32 + 108, ctx.r9.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r8,116(r4)
	PPC_STORE_U32(ctx.r4.u32 + 116, ctx.r8.u32);
	// blr 
	return;
loc_82F1BEAC:
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bne cr6,0x82f1bf70
	if (!ctx.cr6.eq) goto loc_82F1BF70;
	// lhz r11,14(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 14);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// bne cr6,0x82f1bf38
	if (!ctx.cr6.eq) goto loc_82F1BF38;
	// lwz r11,40(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// cmplwi cr6,r11,31744
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 31744, ctx.xer);
	// bne cr6,0x82f1bee4
	if (!ctx.cr6.eq) goto loc_82F1BEE4;
	// lwz r10,44(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// cmplwi cr6,r10,992
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 992, ctx.xer);
	// bne cr6,0x82f1bee4
	if (!ctx.cr6.eq) goto loc_82F1BEE4;
	// lwz r10,48(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// cmplwi cr6,r10,31
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 31, ctx.xer);
	// beq cr6,0x82f1be84
	if (ctx.cr6.eq) goto loc_82F1BE84;
loc_82F1BEE4:
	// cmplwi cr6,r11,63488
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 63488, ctx.xer);
	// bne cr6,0x82f1bf30
	if (!ctx.cr6.eq) goto loc_82F1BF30;
	// lwz r11,44(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// cmplwi cr6,r11,2016
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2016, ctx.xer);
	// bne cr6,0x82f1bf30
	if (!ctx.cr6.eq) goto loc_82F1BF30;
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// cmplwi cr6,r11,31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 31, ctx.xer);
	// bne cr6,0x82f1bf30
	if (!ctx.cr6.eq) goto loc_82F1BF30;
	// lis r11,0
	ctx.r11.s64 = 0;
	// li r10,8
	ctx.r10.s64 = 8;
	// li r9,3
	ctx.r9.s64 = 3;
	// ori r8,r11,63488
	ctx.r8.u64 = ctx.r11.u64 | 63488;
	// stw r10,112(r4)
	PPC_STORE_U32(ctx.r4.u32 + 112, ctx.r10.u32);
	// li r7,2016
	ctx.r7.s64 = 2016;
	// stw r9,120(r4)
	PPC_STORE_U32(ctx.r4.u32 + 120, ctx.r9.u32);
	// stw r8,108(r4)
	PPC_STORE_U32(ctx.r4.u32 + 108, ctx.r8.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r7,116(r4)
	PPC_STORE_U32(ctx.r4.u32 + 116, ctx.r7.u32);
	// blr 
	return;
loc_82F1BF30:
	// li r3,3
	ctx.r3.s64 = 3;
	// blr 
	return;
loc_82F1BF38:
	// cmplwi cr6,r11,24
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 24, ctx.xer);
	// beq cr6,0x82f1bf48
	if (ctx.cr6.eq) goto loc_82F1BF48;
	// cmplwi cr6,r11,32
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32, ctx.xer);
	// bne cr6,0x82f1bf30
	if (!ctx.cr6.eq) goto loc_82F1BF30;
loc_82F1BF48:
	// lwz r11,40(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// lis r10,255
	ctx.r10.s64 = 16711680;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82f1bf30
	if (!ctx.cr6.eq) goto loc_82F1BF30;
	// lwz r11,44(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
	// cmplwi cr6,r11,65280
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 65280, ctx.xer);
	// bne cr6,0x82f1bf30
	if (!ctx.cr6.eq) goto loc_82F1BF30;
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// cmplwi cr6,r11,255
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 255, ctx.xer);
	// bne cr6,0x82f1bf30
	if (!ctx.cr6.eq) goto loc_82F1BF30;
loc_82F1BF70:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F1BF78"))) PPC_WEAK_FUNC(sub_82F1BF78);
PPC_FUNC_IMPL(__imp__sub_82F1BF78) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7668
	ctx.lr = 0x82F1BF80;
	__savegprlr_24(ctx, base);
	// lwz r25,0(r3)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r28,4(r25)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r25.u32 + 4);
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// ble cr6,0x82f1c00c
	if (!ctx.cr6.gt) goto loc_82F1C00C;
	// lwz r9,4(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r26,4(r9)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// ble cr6,0x82f1c00c
	if (!ctx.cr6.gt) goto loc_82F1C00C;
	// lwz r8,16(r25)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r25.u32 + 16);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82f1bfb4
	if (ctx.cr6.eq) goto loc_82F1BFB4;
	// cmplwi cr6,r8,3
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 3, ctx.xer);
	// bne cr6,0x82f1bfc8
	if (!ctx.cr6.eq) goto loc_82F1BFC8;
loc_82F1BFB4:
	// lwz r11,16(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82f1c2c4
	if (ctx.cr6.eq) goto loc_82F1C2C4;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// beq cr6,0x82f1c2c4
	if (ctx.cr6.eq) goto loc_82F1C2C4;
loc_82F1BFC8:
	// lwz r11,14612(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 14612);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82f1c014
	if (ctx.cr6.eq) goto loc_82F1C014;
	// lwz r11,14604(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 14604);
	// lwz r10,14596(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 14596);
	// subf r7,r10,r11
	ctx.r7.s64 = ctx.r11.s64 - ctx.r10.s64;
	// cmpw cr6,r26,r7
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r7.s32, ctx.xer);
	// bne cr6,0x82f1c00c
	if (!ctx.cr6.eq) goto loc_82F1C00C;
	// lwz r27,8(r9)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// lwz r11,14608(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 14608);
	// srawi r10,r27,31
	ctx.xer.ca = (ctx.r27.s32 < 0) & ((ctx.r27.u32 & 0x7FFFFFFF) != 0);
	ctx.r10.s64 = ctx.r27.s32 >> 31;
	// lwz r7,14600(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 14600);
	// xor r6,r27,r10
	ctx.r6.u64 = ctx.r27.u64 ^ ctx.r10.u64;
	// subf r5,r7,r11
	ctx.r5.s64 = ctx.r11.s64 - ctx.r7.s64;
	// subf r11,r10,r6
	ctx.r11.s64 = ctx.r6.s64 - ctx.r10.s64;
	// cmpw cr6,r11,r5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r5.s32, ctx.xer);
	// beq cr6,0x82f1c044
	if (ctx.cr6.eq) goto loc_82F1C044;
loc_82F1C00C:
	// li r3,6
	ctx.r3.s64 = 6;
	// b 0x82fa76b8
	__restgprlr_24(ctx, base);
	return;
loc_82F1C014:
	// cmpw cr6,r28,r26
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r26.s32, ctx.xer);
	// bne cr6,0x82f1c00c
	if (!ctx.cr6.eq) goto loc_82F1C00C;
	// lwz r27,8(r9)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// lwz r11,8(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 8);
	// srawi r10,r27,31
	ctx.xer.ca = (ctx.r27.s32 < 0) & ((ctx.r27.u32 & 0x7FFFFFFF) != 0);
	ctx.r10.s64 = ctx.r27.s32 >> 31;
	// srawi r7,r11,31
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFFFFFF) != 0);
	ctx.r7.s64 = ctx.r11.s32 >> 31;
	// xor r6,r27,r10
	ctx.r6.u64 = ctx.r27.u64 ^ ctx.r10.u64;
	// xor r5,r11,r7
	ctx.r5.u64 = ctx.r11.u64 ^ ctx.r7.u64;
	// subf r11,r10,r6
	ctx.r11.s64 = ctx.r6.s64 - ctx.r10.s64;
	// subf r4,r7,r5
	ctx.r4.s64 = ctx.r5.s64 - ctx.r7.s64;
	// cmpw cr6,r4,r11
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x82f1c00c
	if (!ctx.cr6.eq) goto loc_82F1C00C;
loc_82F1C044:
	// lis r10,14677
	ctx.r10.s64 = 961871872;
	// ori r10,r10,22105
	ctx.r10.u64 = ctx.r10.u64 | 22105;
	// cmplw cr6,r8,r10
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82f1c08c
	if (!ctx.cr6.eq) goto loc_82F1C08C;
	// srawi r7,r28,2
	ctx.xer.ca = (ctx.r28.s32 < 0) & ((ctx.r28.u32 & 0x3) != 0);
	ctx.r7.s64 = ctx.r28.s32 >> 2;
	// addze r6,r7
	temp.s64 = ctx.r7.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r7.u32;
	ctx.r6.s64 = temp.s64;
	// rlwinm r5,r6,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// subf. r4,r5,r28
	ctx.r4.s64 = ctx.r28.s64 - ctx.r5.s64;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne 0x82f1c00c
	if (!ctx.cr0.eq) goto loc_82F1C00C;
	// lwz r7,8(r25)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r25.u32 + 8);
	// srawi r6,r7,31
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7FFFFFFF) != 0);
	ctx.r6.s64 = ctx.r7.s32 >> 31;
	// xor r5,r7,r6
	ctx.r5.u64 = ctx.r7.u64 ^ ctx.r6.u64;
	// subf r4,r6,r5
	ctx.r4.s64 = ctx.r5.s64 - ctx.r6.s64;
	// srawi r3,r4,2
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x3) != 0);
	ctx.r3.s64 = ctx.r4.s32 >> 2;
	// addze r7,r3
	temp.s64 = ctx.r3.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r3.u32;
	ctx.r7.s64 = temp.s64;
	// rlwinm r6,r7,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// subf. r5,r6,r4
	ctx.r5.s64 = ctx.r4.s64 - ctx.r6.s64;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bne 0x82f1c00c
	if (!ctx.cr0.eq) goto loc_82F1C00C;
loc_82F1C08C:
	// lwz r7,16(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 16);
	// cmplw cr6,r7,r10
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82f1c0c0
	if (!ctx.cr6.eq) goto loc_82F1C0C0;
	// srawi r10,r26,2
	ctx.xer.ca = (ctx.r26.s32 < 0) & ((ctx.r26.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r26.s32 >> 2;
	// addze r9,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r9.s64 = temp.s64;
	// rlwinm r6,r9,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// subf. r5,r6,r26
	ctx.r5.s64 = ctx.r26.s64 - ctx.r6.s64;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bne 0x82f1c00c
	if (!ctx.cr0.eq) goto loc_82F1C00C;
	// srawi r10,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 2;
	// addze r9,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r9.s64 = temp.s64;
	// rlwinm r6,r9,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// subf. r5,r6,r11
	ctx.r5.s64 = ctx.r11.s64 - ctx.r6.s64;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bne 0x82f1c00c
	if (!ctx.cr0.eq) goto loc_82F1C00C;
loc_82F1C0C0:
	// lis r11,12593
	ctx.r11.s64 = 825294848;
	// lis r10,12593
	ctx.r10.s64 = 825294848;
	// ori r11,r11,13392
	ctx.r11.u64 = ctx.r11.u64 | 13392;
	// ori r10,r10,22094
	ctx.r10.u64 = ctx.r10.u64 | 22094;
	// cmplw cr6,r8,r11
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82f1c0e0
	if (ctx.cr6.eq) goto loc_82F1C0E0;
	// cmplw cr6,r8,r10
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82f1c0f4
	if (!ctx.cr6.eq) goto loc_82F1C0F4;
loc_82F1C0E0:
	// srawi r9,r28,2
	ctx.xer.ca = (ctx.r28.s32 < 0) & ((ctx.r28.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r28.s32 >> 2;
	// addze r6,r9
	temp.s64 = ctx.r9.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r6.s64 = temp.s64;
	// rlwinm r5,r6,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// subf. r4,r5,r28
	ctx.r4.s64 = ctx.r28.s64 - ctx.r5.s64;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne 0x82f1c00c
	if (!ctx.cr0.eq) goto loc_82F1C00C;
loc_82F1C0F4:
	// cmplw cr6,r7,r11
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82f1c104
	if (ctx.cr6.eq) goto loc_82F1C104;
	// cmplw cr6,r7,r10
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82f1c118
	if (!ctx.cr6.eq) goto loc_82F1C118;
loc_82F1C104:
	// srawi r11,r26,2
	ctx.xer.ca = (ctx.r26.s32 < 0) & ((ctx.r26.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r26.s32 >> 2;
	// addze r10,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r10.s64 = temp.s64;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// subf. r6,r9,r26
	ctx.r6.s64 = ctx.r26.s64 - ctx.r9.s64;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bne 0x82f1c00c
	if (!ctx.cr0.eq) goto loc_82F1C00C;
loc_82F1C118:
	// lis r11,20529
	ctx.r11.s64 = 1345388544;
	// ori r10,r11,13401
	ctx.r10.u64 = ctx.r11.u64 | 13401;
	// cmplw cr6,r8,r10
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82f1c13c
	if (!ctx.cr6.eq) goto loc_82F1C13C;
	// srawi r11,r28,3
	ctx.xer.ca = (ctx.r28.s32 < 0) & ((ctx.r28.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r28.s32 >> 3;
	// addze r10,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r10.s64 = temp.s64;
	// rlwinm r9,r10,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// subf. r6,r9,r28
	ctx.r6.s64 = ctx.r28.s64 - ctx.r9.s64;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bne 0x82f1c00c
	if (!ctx.cr0.eq) goto loc_82F1C00C;
loc_82F1C13C:
	// lis r11,21553
	ctx.r11.s64 = 1412497408;
	// ori r10,r11,13401
	ctx.r10.u64 = ctx.r11.u64 | 13401;
	// cmplw cr6,r8,r10
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82f1c160
	if (!ctx.cr6.eq) goto loc_82F1C160;
	// srawi r11,r28,3
	ctx.xer.ca = (ctx.r28.s32 < 0) & ((ctx.r28.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r28.s32 >> 3;
	// addze r10,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r10.s64 = temp.s64;
	// rlwinm r9,r10,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// subf. r6,r9,r28
	ctx.r6.s64 = ctx.r28.s64 - ctx.r9.s64;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bne 0x82f1c00c
	if (!ctx.cr0.eq) goto loc_82F1C00C;
loc_82F1C160:
	// lis r11,12889
	ctx.r11.s64 = 844693504;
	// lis r4,22101
	ctx.r4.s64 = 1448411136;
	// lis r30,20532
	ctx.r30.s64 = 1345585152;
	// lis r10,22870
	ctx.r10.s64 = 1498808320;
	// ori r11,r11,21849
	ctx.r11.u64 = ctx.r11.u64 | 21849;
	// lis r9,21849
	ctx.r9.s64 = 1431896064;
	// lis r6,22066
	ctx.r6.s64 = 1446117376;
	// lis r5,22068
	ctx.r5.s64 = 1446248448;
	// lis r31,12338
	ctx.r31.s64 = 808583168;
	// lis r29,12849
	ctx.r29.s64 = 842072064;
	// lis r24,12849
	ctx.r24.s64 = 842072064;
	// ori r3,r4,22857
	ctx.r3.u64 = ctx.r4.u64 | 22857;
	// ori r4,r30,12850
	ctx.r4.u64 = ctx.r30.u64 | 12850;
	// ori r10,r10,22869
	ctx.r10.u64 = ctx.r10.u64 | 22869;
	// ori r9,r9,22105
	ctx.r9.u64 = ctx.r9.u64 | 22105;
	// ori r6,r6,12598
	ctx.r6.u64 = ctx.r6.u64 | 12598;
	// ori r5,r5,12592
	ctx.r5.u64 = ctx.r5.u64 | 12592;
	// ori r31,r31,13385
	ctx.r31.u64 = ctx.r31.u64 | 13385;
	// ori r29,r29,22094
	ctx.r29.u64 = ctx.r29.u64 | 22094;
	// ori r30,r24,22105
	ctx.r30.u64 = ctx.r24.u64 | 22105;
	// cmplw cr6,r8,r11
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82f1c200
	if (ctx.cr6.eq) goto loc_82F1C200;
	// cmplw cr6,r8,r10
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82f1c200
	if (ctx.cr6.eq) goto loc_82F1C200;
	// cmplw cr6,r8,r9
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82f1c200
	if (ctx.cr6.eq) goto loc_82F1C200;
	// cmplw cr6,r8,r6
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x82f1c200
	if (ctx.cr6.eq) goto loc_82F1C200;
	// cmplw cr6,r8,r5
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r5.u32, ctx.xer);
	// beq cr6,0x82f1c200
	if (ctx.cr6.eq) goto loc_82F1C200;
	// cmplw cr6,r8,r3
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x82f1c200
	if (ctx.cr6.eq) goto loc_82F1C200;
	// cmplw cr6,r8,r31
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x82f1c200
	if (ctx.cr6.eq) goto loc_82F1C200;
	// cmplw cr6,r8,r4
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x82f1c200
	if (ctx.cr6.eq) goto loc_82F1C200;
	// cmplw cr6,r8,r29
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x82f1c200
	if (ctx.cr6.eq) goto loc_82F1C200;
	// cmplw cr6,r8,r30
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x82f1c20c
	if (!ctx.cr6.eq) goto loc_82F1C20C;
loc_82F1C200:
	// clrlwi r28,r28,31
	ctx.r28.u64 = ctx.r28.u32 & 0x1;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// bne cr6,0x82f1c00c
	if (!ctx.cr6.eq) goto loc_82F1C00C;
loc_82F1C20C:
	// cmplw cr6,r7,r11
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82f1c25c
	if (ctx.cr6.eq) goto loc_82F1C25C;
	// cmplw cr6,r7,r10
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82f1c25c
	if (ctx.cr6.eq) goto loc_82F1C25C;
	// cmplw cr6,r7,r9
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82f1c25c
	if (ctx.cr6.eq) goto loc_82F1C25C;
	// cmplw cr6,r7,r6
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x82f1c25c
	if (ctx.cr6.eq) goto loc_82F1C25C;
	// cmplw cr6,r7,r5
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r5.u32, ctx.xer);
	// beq cr6,0x82f1c25c
	if (ctx.cr6.eq) goto loc_82F1C25C;
	// cmplw cr6,r7,r3
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x82f1c25c
	if (ctx.cr6.eq) goto loc_82F1C25C;
	// cmplw cr6,r7,r31
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x82f1c25c
	if (ctx.cr6.eq) goto loc_82F1C25C;
	// cmplw cr6,r7,r4
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x82f1c25c
	if (ctx.cr6.eq) goto loc_82F1C25C;
	// cmplw cr6,r7,r29
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x82f1c25c
	if (ctx.cr6.eq) goto loc_82F1C25C;
	// cmplw cr6,r7,r30
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r30.u32, ctx.xer);
	// bne cr6,0x82f1c268
	if (!ctx.cr6.eq) goto loc_82F1C268;
loc_82F1C25C:
	// clrlwi r11,r26,31
	ctx.r11.u64 = ctx.r26.u32 & 0x1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82f1c00c
	if (!ctx.cr6.eq) goto loc_82F1C00C;
loc_82F1C268:
	// cmplw cr6,r8,r3
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x82f1c288
	if (ctx.cr6.eq) goto loc_82F1C288;
	// cmplw cr6,r8,r31
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x82f1c288
	if (ctx.cr6.eq) goto loc_82F1C288;
	// cmplw cr6,r8,r30
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x82f1c288
	if (ctx.cr6.eq) goto loc_82F1C288;
	// cmplw cr6,r8,r29
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r29.u32, ctx.xer);
	// bne cr6,0x82f1c298
	if (!ctx.cr6.eq) goto loc_82F1C298;
loc_82F1C288:
	// lwz r11,8(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 8);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82f1c00c
	if (!ctx.cr6.eq) goto loc_82F1C00C;
loc_82F1C298:
	// cmplw cr6,r7,r3
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r3.u32, ctx.xer);
	// beq cr6,0x82f1c2b8
	if (ctx.cr6.eq) goto loc_82F1C2B8;
	// cmplw cr6,r7,r31
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x82f1c2b8
	if (ctx.cr6.eq) goto loc_82F1C2B8;
	// cmplw cr6,r7,r30
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x82f1c2b8
	if (ctx.cr6.eq) goto loc_82F1C2B8;
	// cmplw cr6,r7,r29
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r29.u32, ctx.xer);
	// bne cr6,0x82f1c2c4
	if (!ctx.cr6.eq) goto loc_82F1C2C4;
loc_82F1C2B8:
	// clrlwi r11,r27,31
	ctx.r11.u64 = ctx.r27.u32 & 0x1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82f1c00c
	if (!ctx.cr6.eq) goto loc_82F1C00C;
loc_82F1C2C4:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82fa76b8
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F1C2CC"))) PPC_WEAK_FUNC(sub_82F1C2CC);
PPC_FUNC_IMPL(__imp__sub_82F1C2CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F1C2D0"))) PPC_WEAK_FUNC(sub_82F1C2D0);
PPC_FUNC_IMPL(__imp__sub_82F1C2D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa765c
	ctx.lr = 0x82F1C2D8;
	__savegprlr_21(ctx, base);
	// lwz r29,0(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r10,r5
	ctx.r10.u64 = ctx.r5.u64;
	// stw r4,14620(r3)
	PPC_STORE_U32(ctx.r3.u32 + 14620, ctx.r4.u32);
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// ble cr6,0x82f1c2fc
	if (!ctx.cr6.gt) goto loc_82F1C2FC;
	// srawi r11,r5,31
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x7FFFFFFF) != 0);
	ctx.r11.s64 = ctx.r5.s32 >> 31;
	// xor r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
loc_82F1C2FC:
	// stw r10,14624(r3)
	PPC_STORE_U32(ctx.r3.u32 + 14624, ctx.r10.u32);
	// lwz r22,4(r3)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// stw r6,14628(r3)
	PPC_STORE_U32(ctx.r3.u32 + 14628, ctx.r6.u32);
	// lwz r11,16(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 16);
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bgt cr6,0x82f1c31c
	if (ctx.cr6.gt) goto loc_82F1C31C;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// b 0x82f1c328
	goto loc_82F1C328;
loc_82F1C31C:
	// srawi r11,r7,31
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x7FFFFFFF) != 0);
	ctx.r11.s64 = ctx.r7.s32 >> 31;
	// xor r9,r7,r11
	ctx.r9.u64 = ctx.r7.u64 ^ ctx.r11.u64;
	// subf r27,r11,r9
	ctx.r27.s64 = ctx.r9.s64 - ctx.r11.s64;
loc_82F1C328:
	// lwz r9,14668(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 14668);
	// li r23,1
	ctx.r23.s64 = 1;
	// stw r27,14632(r3)
	PPC_STORE_U32(ctx.r3.u32 + 14632, ctx.r27.u32);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82f1c348
	if (ctx.cr6.eq) goto loc_82F1C348;
	// stw r9,14524(r3)
	PPC_STORE_U32(ctx.r3.u32 + 14524, ctx.r9.u32);
	// stw r23,14468(r3)
	PPC_STORE_U32(ctx.r3.u32 + 14468, ctx.r23.u32);
	// b 0x82f1c36c
	goto loc_82F1C36C;
loc_82F1C348:
	// lhz r11,14(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 14);
	// lwz r8,14468(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 14468);
	// mullw r11,r11,r4
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r4.s32);
	// addi r7,r11,31
	ctx.r7.s64 = ctx.r11.s64 + 31;
	// rlwinm r5,r7,0,0,26
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFE0;
	// srawi r11,r5,3
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x7) != 0);
	ctx.r11.s64 = ctx.r5.s32 >> 3;
	// addze r7,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r7.s64 = temp.s64;
	// mullw r5,r7,r8
	ctx.r5.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r8.s32);
	// stw r5,14524(r3)
	PPC_STORE_U32(ctx.r3.u32 + 14524, ctx.r5.u32);
loc_82F1C36C:
	// lwz r5,14524(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 14524);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r28,14468(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 14468);
	// rlwinm r11,r5,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpwi cr6,r28,1
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 1, ctx.xer);
	// stw r11,14528(r3)
	PPC_STORE_U32(ctx.r3.u32 + 14528, ctx.r11.u32);
	// bne cr6,0x82f1c390
	if (!ctx.cr6.eq) goto loc_82F1C390;
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// b 0x82f1c3b0
	goto loc_82F1C3B0;
loc_82F1C390:
	// srawi r11,r10,31
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7FFFFFFF) != 0);
	ctx.r11.s64 = ctx.r10.s32 >> 31;
	// srawi r8,r5,31
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x7FFFFFFF) != 0);
	ctx.r8.s64 = ctx.r5.s32 >> 31;
	// xor r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 ^ ctx.r11.u64;
	// xor r30,r5,r8
	ctx.r30.u64 = ctx.r5.u64 ^ ctx.r8.u64;
	// subf r11,r11,r31
	ctx.r11.s64 = ctx.r31.s64 - ctx.r11.s64;
	// subf r8,r8,r30
	ctx.r8.s64 = ctx.r30.s64 - ctx.r8.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// mullw r30,r11,r8
	ctx.r30.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r8.s32);
loc_82F1C3B0:
	// lwz r11,14636(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 14636);
	// stw r30,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r30.u32);
	// lhz r8,14(r29)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r29.u32 + 14);
	// mullw r31,r8,r11
	ctx.r31.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r11.s32);
	// lwz r8,14640(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 14640);
	// srawi r30,r31,3
	ctx.xer.ca = (ctx.r31.s32 < 0) & ((ctx.r31.u32 & 0x7) != 0);
	ctx.r30.s64 = ctx.r31.s32 >> 3;
	// lwz r26,14612(r3)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r3.u32 + 14612);
	// mullw r31,r8,r5
	ctx.r31.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r5.s32);
	// addze r30,r30
	temp.s64 = ctx.r30.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r30.u32;
	ctx.r30.s64 = temp.s64;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// add r31,r30,r31
	ctx.r31.u64 = ctx.r30.u64 + ctx.r31.u64;
	// stw r31,14532(r3)
	PPC_STORE_U32(ctx.r3.u32 + 14532, ctx.r31.u32);
	// beq cr6,0x82f1c450
	if (ctx.cr6.eq) goto loc_82F1C450;
	// cmpwi cr6,r28,1
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 1, ctx.xer);
	// bne cr6,0x82f1c40c
	if (!ctx.cr6.eq) goto loc_82F1C40C;
	// lhz r31,14(r29)
	ctx.r31.u64 = PPC_LOAD_U16(ctx.r29.u32 + 14);
	// lwz r30,14596(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 14596);
	// lwz r28,14600(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 14600);
	// mullw r31,r30,r31
	ctx.r31.s64 = int64_t(ctx.r30.s32) * int64_t(ctx.r31.s32);
	// srawi r31,r31,3
	ctx.xer.ca = (ctx.r31.s32 < 0) & ((ctx.r31.u32 & 0x7) != 0);
	ctx.r31.s64 = ctx.r31.s32 >> 3;
	// mullw r5,r28,r5
	ctx.r5.s64 = int64_t(ctx.r28.s32) * int64_t(ctx.r5.s32);
	// addze r31,r31
	temp.s64 = ctx.r31.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r31.u32;
	ctx.r31.s64 = temp.s64;
	// b 0x82f1c448
	goto loc_82F1C448;
loc_82F1C40C:
	// lwz r31,14600(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 14600);
	// srawi r30,r10,31
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7FFFFFFF) != 0);
	ctx.r30.s64 = ctx.r10.s32 >> 31;
	// lhz r28,14(r29)
	ctx.r28.u64 = PPC_LOAD_U16(ctx.r29.u32 + 14);
	// subfic r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 <= 4294967295;
	ctx.r31.s64 = -1 - ctx.r31.s64;
	// lwz r26,14596(r3)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r3.u32 + 14596);
	// srawi r25,r5,31
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x7FFFFFFF) != 0);
	ctx.r25.s64 = ctx.r5.s32 >> 31;
	// xor r24,r10,r30
	ctx.r24.u64 = ctx.r10.u64 ^ ctx.r30.u64;
	// xor r21,r5,r25
	ctx.r21.u64 = ctx.r5.u64 ^ ctx.r25.u64;
	// subf r5,r30,r24
	ctx.r5.s64 = ctx.r24.s64 - ctx.r30.s64;
	// mullw r30,r26,r28
	ctx.r30.s64 = int64_t(ctx.r26.s32) * int64_t(ctx.r28.s32);
	// add r5,r5,r31
	ctx.r5.u64 = ctx.r5.u64 + ctx.r31.u64;
	// subf r31,r25,r21
	ctx.r31.s64 = ctx.r21.s64 - ctx.r25.s64;
	// srawi r30,r30,3
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0x7) != 0);
	ctx.r30.s64 = ctx.r30.s32 >> 3;
	// mullw r31,r5,r31
	ctx.r31.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r31.s32);
	// addze r5,r30
	temp.s64 = ctx.r30.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r30.u32;
	ctx.r5.s64 = temp.s64;
loc_82F1C448:
	// add r5,r31,r5
	ctx.r5.u64 = ctx.r31.u64 + ctx.r5.u64;
	// stw r5,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r5.u32);
loc_82F1C450:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x82f1c45c
	if (!ctx.cr6.eq) goto loc_82F1C45C;
	// mr r9,r4
	ctx.r9.u64 = ctx.r4.u64;
loc_82F1C45C:
	// lis r31,12849
	ctx.r31.s64 = 842072064;
	// lwz r5,16(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// lis r29,12849
	ctx.r29.s64 = 842072064;
	// ori r30,r31,22105
	ctx.r30.u64 = ctx.r31.u64 | 22105;
	// lis r31,20532
	ctx.r31.s64 = 1345585152;
	// lis r26,22101
	ctx.r26.s64 = 1448411136;
	// lis r25,12338
	ctx.r25.s64 = 808583168;
	// lis r21,12593
	ctx.r21.s64 = 825294848;
	// ori r24,r29,22094
	ctx.r24.u64 = ctx.r29.u64 | 22094;
	// ori r28,r31,12850
	ctx.r28.u64 = ctx.r31.u64 | 12850;
	// ori r26,r26,22857
	ctx.r26.u64 = ctx.r26.u64 | 22857;
	// ori r25,r25,13385
	ctx.r25.u64 = ctx.r25.u64 | 13385;
	// ori r29,r21,22094
	ctx.r29.u64 = ctx.r21.u64 | 22094;
	// cmplw cr6,r5,r30
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r30.u32, ctx.xer);
	// bgt cr6,0x82f1c5e0
	if (ctx.cr6.gt) goto loc_82F1C5E0;
	// beq cr6,0x82f1c5a0
	if (ctx.cr6.eq) goto loc_82F1C5A0;
	// cmplw cr6,r5,r29
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r29.u32, ctx.xer);
	// bgt cr6,0x82f1c558
	if (ctx.cr6.gt) goto loc_82F1C558;
	// beq cr6,0x82f1c50c
	if (ctx.cr6.eq) goto loc_82F1C50C;
	// cmplw cr6,r5,r25
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r25.u32, ctx.xer);
	// beq cr6,0x82f1c600
	if (ctx.cr6.eq) goto loc_82F1C600;
	// lis r31,12593
	ctx.r31.s64 = 825294848;
	// ori r31,r31,13392
	ctx.r31.u64 = ctx.r31.u64 | 13392;
	// cmplw cr6,r5,r31
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x82f1c6fc
	if (!ctx.cr6.eq) goto loc_82F1C6FC;
	// lwz r5,14660(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 14660);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bne cr6,0x82f1c4d4
	if (!ctx.cr6.eq) goto loc_82F1C4D4;
	// srawi r5,r9,2
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r5.s64 = ctx.r9.s32 >> 2;
	// addze r5,r5
	temp.s64 = ctx.r5.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r5.u32;
	ctx.r5.s64 = temp.s64;
loc_82F1C4D4:
	// srawi r21,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r21.s64 = ctx.r11.s32 >> 2;
	// stw r5,14676(r3)
	PPC_STORE_U32(ctx.r3.u32 + 14676, ctx.r5.u32);
	// mullw r9,r10,r9
	ctx.r9.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r9.s32);
	// stw r9,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, ctx.r9.u32);
	// mullw r31,r5,r10
	ctx.r31.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r10.s32);
	// mullw r4,r8,r4
	ctx.r4.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r4.s32);
	// mullw r8,r8,r5
	ctx.r8.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r5.s32);
	// addze r10,r21
	temp.s64 = ctx.r21.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r21.u32;
	ctx.r10.s64 = temp.s64;
	// add r9,r31,r9
	ctx.r9.u64 = ctx.r31.u64 + ctx.r9.u64;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// add r8,r4,r11
	ctx.r8.u64 = ctx.r4.u64 + ctx.r11.u64;
	// stw r9,64(r3)
	PPC_STORE_U32(ctx.r3.u32 + 64, ctx.r9.u32);
	// stw r8,14536(r3)
	PPC_STORE_U32(ctx.r3.u32 + 14536, ctx.r8.u32);
	// b 0x82f1c6f0
	goto loc_82F1C6F0;
loc_82F1C50C:
	// lwz r5,14660(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 14660);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bne cr6,0x82f1c520
	if (!ctx.cr6.eq) goto loc_82F1C520;
	// srawi r5,r9,1
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r5.s64 = ctx.r9.s32 >> 1;
	// addze r5,r5
	temp.s64 = ctx.r5.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r5.u32;
	ctx.r5.s64 = temp.s64;
loc_82F1C520:
	// srawi r31,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r31.s64 = ctx.r11.s32 >> 1;
	// stw r5,14676(r3)
	PPC_STORE_U32(ctx.r3.u32 + 14676, ctx.r5.u32);
	// mullw r4,r8,r4
	ctx.r4.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r4.s32);
	// stw r7,64(r3)
	PPC_STORE_U32(ctx.r3.u32 + 64, ctx.r7.u32);
	// stw r7,14544(r3)
	PPC_STORE_U32(ctx.r3.u32 + 14544, ctx.r7.u32);
	// mullw r5,r8,r5
	ctx.r5.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r5.s32);
	// addze r8,r31
	temp.s64 = ctx.r31.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r31.u32;
	ctx.r8.s64 = temp.s64;
	// mullw r10,r10,r9
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r9.s32);
	// stw r10,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, ctx.r10.u32);
	// add r9,r4,r11
	ctx.r9.u64 = ctx.r4.u64 + ctx.r11.u64;
	// add r8,r5,r8
	ctx.r8.u64 = ctx.r5.u64 + ctx.r8.u64;
	// stw r9,14536(r3)
	PPC_STORE_U32(ctx.r3.u32 + 14536, ctx.r9.u32);
	// stw r8,14540(r3)
	PPC_STORE_U32(ctx.r3.u32 + 14540, ctx.r8.u32);
	// b 0x82f1c6f8
	goto loc_82F1C6F8;
loc_82F1C558:
	// cmplw cr6,r5,r24
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r24.u32, ctx.xer);
	// bne cr6,0x82f1c6fc
	if (!ctx.cr6.eq) goto loc_82F1C6FC;
	// srawi r5,r10,31
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7FFFFFFF) != 0);
	ctx.r5.s64 = ctx.r10.s32 >> 31;
	// stw r9,14676(r3)
	PPC_STORE_U32(ctx.r3.u32 + 14676, ctx.r9.u32);
	// mullw r8,r8,r4
	ctx.r8.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r4.s32);
	// stw r7,64(r3)
	PPC_STORE_U32(ctx.r3.u32 + 64, ctx.r7.u32);
	// stw r7,14544(r3)
	PPC_STORE_U32(ctx.r3.u32 + 14544, ctx.r7.u32);
	// xor r4,r10,r5
	ctx.r4.u64 = ctx.r10.u64 ^ ctx.r5.u64;
	// srawi r10,r8,1
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r8.s32 >> 1;
	// subf r5,r5,r4
	ctx.r5.s64 = ctx.r4.s64 - ctx.r5.s64;
	// addze r10,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r10.s64 = temp.s64;
	// mullw r4,r5,r9
	ctx.r4.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r9.s32);
	// stw r4,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, ctx.r4.u32);
	// add r9,r11,r8
	ctx.r9.u64 = ctx.r11.u64 + ctx.r8.u64;
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r9,14536(r3)
	PPC_STORE_U32(ctx.r3.u32 + 14536, ctx.r9.u32);
	// stw r8,14540(r3)
	PPC_STORE_U32(ctx.r3.u32 + 14540, ctx.r8.u32);
	// b 0x82f1c6f8
	goto loc_82F1C6F8;
loc_82F1C5A0:
	// srawi r5,r10,31
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7FFFFFFF) != 0);
	ctx.r5.s64 = ctx.r10.s32 >> 31;
	// mullw r8,r8,r4
	ctx.r8.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r4.s32);
	// xor r10,r10,r5
	ctx.r10.u64 = ctx.r10.u64 ^ ctx.r5.u64;
	// srawi r31,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r31.s64 = ctx.r11.s32 >> 1;
	// subf r4,r5,r10
	ctx.r4.s64 = ctx.r10.s64 - ctx.r5.s64;
	// addze r5,r31
	temp.s64 = ctx.r31.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r31.u32;
	ctx.r5.s64 = temp.s64;
	// mullw r10,r4,r9
	ctx.r10.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r9.s32);
	// stw r10,64(r3)
	PPC_STORE_U32(ctx.r3.u32 + 64, ctx.r10.u32);
	// srawi r4,r8,2
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r4.s64 = ctx.r8.s32 >> 2;
	// rlwinm r31,r10,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addze r4,r4
	temp.s64 = ctx.r4.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r4.u32;
	ctx.r4.s64 = temp.s64;
	// add r31,r10,r31
	ctx.r31.u64 = ctx.r10.u64 + ctx.r31.u64;
	// add r10,r5,r4
	ctx.r10.u64 = ctx.r5.u64 + ctx.r4.u64;
	// srawi r9,r9,1
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 1;
	// rlwinm r5,r31,30,2,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 30) & 0x3FFFFFFF;
	// b 0x82f1c6dc
	goto loc_82F1C6DC;
loc_82F1C5E0:
	// lis r31,14677
	ctx.r31.s64 = 961871872;
	// ori r31,r31,22105
	ctx.r31.u64 = ctx.r31.u64 | 22105;
	// cmplw cr6,r5,r31
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r31.u32, ctx.xer);
	// beq cr6,0x82f1c6a0
	if (ctx.cr6.eq) goto loc_82F1C6A0;
	// cmplw cr6,r5,r28
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r28.u32, ctx.xer);
	// beq cr6,0x82f1c65c
	if (ctx.cr6.eq) goto loc_82F1C65C;
	// cmplw cr6,r5,r26
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r26.u32, ctx.xer);
	// bne cr6,0x82f1c6fc
	if (!ctx.cr6.eq) goto loc_82F1C6FC;
loc_82F1C600:
	// lwz r5,14660(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 14660);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bne cr6,0x82f1c614
	if (!ctx.cr6.eq) goto loc_82F1C614;
	// srawi r5,r9,1
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r5.s64 = ctx.r9.s32 >> 1;
	// addze r5,r5
	temp.s64 = ctx.r5.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r5.u32;
	ctx.r5.s64 = temp.s64;
loc_82F1C614:
	// mullw r31,r5,r10
	ctx.r31.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r10.s32);
	// stw r5,14676(r3)
	PPC_STORE_U32(ctx.r3.u32 + 14676, ctx.r5.u32);
	// srawi r31,r31,1
	ctx.xer.ca = (ctx.r31.s32 < 0) & ((ctx.r31.u32 & 0x1) != 0);
	ctx.r31.s64 = ctx.r31.s32 >> 1;
	// mullw r9,r10,r9
	ctx.r9.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r9.s32);
	// stw r9,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, ctx.r9.u32);
	// addze r31,r31
	temp.s64 = ctx.r31.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r31.u32;
	ctx.r31.s64 = temp.s64;
	// srawi r10,r8,1
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r8.s32 >> 1;
	// mullw r8,r8,r4
	ctx.r8.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r4.s32);
	// addze r4,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r4.s64 = temp.s64;
	// srawi r21,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r21.s64 = ctx.r11.s32 >> 1;
	// mullw r10,r4,r5
	ctx.r10.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r5.s32);
	// addze r5,r21
	temp.s64 = ctx.r21.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r21.u32;
	ctx.r5.s64 = temp.s64;
	// add r9,r31,r9
	ctx.r9.u64 = ctx.r31.u64 + ctx.r9.u64;
	// add r8,r8,r11
	ctx.r8.u64 = ctx.r8.u64 + ctx.r11.u64;
	// add r10,r10,r5
	ctx.r10.u64 = ctx.r10.u64 + ctx.r5.u64;
	// stw r9,64(r3)
	PPC_STORE_U32(ctx.r3.u32 + 64, ctx.r9.u32);
	// stw r8,14536(r3)
	PPC_STORE_U32(ctx.r3.u32 + 14536, ctx.r8.u32);
	// b 0x82f1c6f0
	goto loc_82F1C6F0;
loc_82F1C65C:
	// srawi r5,r10,31
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7FFFFFFF) != 0);
	ctx.r5.s64 = ctx.r10.s32 >> 31;
	// mullw r8,r8,r4
	ctx.r8.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r4.s32);
	// xor r10,r10,r5
	ctx.r10.u64 = ctx.r10.u64 ^ ctx.r5.u64;
	// srawi r31,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r31.s64 = ctx.r11.s32 >> 1;
	// subf r4,r5,r10
	ctx.r4.s64 = ctx.r10.s64 - ctx.r5.s64;
	// addze r5,r31
	temp.s64 = ctx.r31.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r31.u32;
	ctx.r5.s64 = temp.s64;
	// mullw r10,r4,r9
	ctx.r10.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r9.s32);
	// stw r10,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, ctx.r10.u32);
	// srawi r4,r8,2
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r4.s64 = ctx.r8.s32 >> 2;
	// rlwinm r31,r10,1,0,30
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// addze r4,r4
	temp.s64 = ctx.r4.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r4.u32;
	ctx.r4.s64 = temp.s64;
	// add r31,r10,r31
	ctx.r31.u64 = ctx.r10.u64 + ctx.r31.u64;
	// add r10,r5,r4
	ctx.r10.u64 = ctx.r5.u64 + ctx.r4.u64;
	// rlwinm r5,r31,31,1,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 31) & 0x7FFFFFFF;
	// srawi r9,r9,1
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 1;
	// stw r5,64(r3)
	PPC_STORE_U32(ctx.r3.u32 + 64, ctx.r5.u32);
	// b 0x82f1c6e0
	goto loc_82F1C6E0;
loc_82F1C6A0:
	// srawi r5,r10,31
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7FFFFFFF) != 0);
	ctx.r5.s64 = ctx.r10.s32 >> 31;
	// mullw r8,r8,r4
	ctx.r8.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r4.s32);
	// xor r10,r10,r5
	ctx.r10.u64 = ctx.r10.u64 ^ ctx.r5.u64;
	// srawi r31,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r31.s64 = ctx.r11.s32 >> 2;
	// subf r4,r5,r10
	ctx.r4.s64 = ctx.r10.s64 - ctx.r5.s64;
	// addze r5,r31
	temp.s64 = ctx.r31.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r31.u32;
	ctx.r5.s64 = temp.s64;
	// mullw r10,r4,r9
	ctx.r10.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r9.s32);
	// stw r10,64(r3)
	PPC_STORE_U32(ctx.r3.u32 + 64, ctx.r10.u32);
	// srawi r4,r8,4
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0xF) != 0);
	ctx.r4.s64 = ctx.r8.s32 >> 4;
	// rlwinm r31,r10,4,0,27
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xFFFFFFF0;
	// addze r4,r4
	temp.s64 = ctx.r4.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r4.u32;
	ctx.r4.s64 = temp.s64;
	// add r31,r31,r10
	ctx.r31.u64 = ctx.r31.u64 + ctx.r10.u64;
	// add r10,r5,r4
	ctx.r10.u64 = ctx.r5.u64 + ctx.r4.u64;
	// srawi r9,r9,2
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 2;
	// rlwinm r5,r31,28,4,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 28) & 0xFFFFFFF;
loc_82F1C6DC:
	// stw r5,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, ctx.r5.u32);
loc_82F1C6E0:
	// add r4,r11,r8
	ctx.r4.u64 = ctx.r11.u64 + ctx.r8.u64;
	// addze r11,r9
	temp.s64 = ctx.r9.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r11.s64 = temp.s64;
	// stw r4,14536(r3)
	PPC_STORE_U32(ctx.r3.u32 + 14536, ctx.r4.u32);
	// stw r11,14676(r3)
	PPC_STORE_U32(ctx.r3.u32 + 14676, ctx.r11.u32);
loc_82F1C6F0:
	// stw r10,14540(r3)
	PPC_STORE_U32(ctx.r3.u32 + 14540, ctx.r10.u32);
	// stw r10,14544(r3)
	PPC_STORE_U32(ctx.r3.u32 + 14544, ctx.r10.u32);
loc_82F1C6F8:
	// stw r7,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, ctx.r7.u32);
loc_82F1C6FC:
	// lwz r11,14672(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 14672);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82f1c714
	if (ctx.cr6.eq) goto loc_82F1C714;
	// stw r11,14488(r3)
	PPC_STORE_U32(ctx.r3.u32 + 14488, ctx.r11.u32);
	// stw r23,14472(r3)
	PPC_STORE_U32(ctx.r3.u32 + 14472, ctx.r23.u32);
	// b 0x82f1c738
	goto loc_82F1C738;
loc_82F1C714:
	// lhz r10,14(r22)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r22.u32 + 14);
	// lwz r9,14472(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 14472);
	// mullw r10,r10,r6
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r6.s32);
	// addi r8,r10,31
	ctx.r8.s64 = ctx.r10.s64 + 31;
	// rlwinm r5,r8,0,0,26
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFE0;
	// srawi r4,r5,3
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x7) != 0);
	ctx.r4.s64 = ctx.r5.s32 >> 3;
	// addze r10,r4
	temp.s64 = ctx.r4.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r4.u32;
	ctx.r10.s64 = temp.s64;
	// mullw r9,r10,r9
	ctx.r9.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r9.s32);
	// stw r9,14488(r3)
	PPC_STORE_U32(ctx.r3.u32 + 14488, ctx.r9.u32);
loc_82F1C738:
	// lwz r8,14488(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 14488);
	// lwz r10,14472(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 14472);
	// rlwinm r9,r8,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// stw r9,14492(r3)
	PPC_STORE_U32(ctx.r3.u32 + 14492, ctx.r9.u32);
	// bne cr6,0x82f1c758
	if (!ctx.cr6.eq) goto loc_82F1C758;
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// b 0x82f1c778
	goto loc_82F1C778;
loc_82F1C758:
	// srawi r10,r27,31
	ctx.xer.ca = (ctx.r27.s32 < 0) & ((ctx.r27.u32 & 0x7FFFFFFF) != 0);
	ctx.r10.s64 = ctx.r27.s32 >> 31;
	// srawi r9,r8,31
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x7FFFFFFF) != 0);
	ctx.r9.s64 = ctx.r8.s32 >> 31;
	// xor r5,r27,r10
	ctx.r5.u64 = ctx.r27.u64 ^ ctx.r10.u64;
	// xor r4,r8,r9
	ctx.r4.u64 = ctx.r8.u64 ^ ctx.r9.u64;
	// subf r10,r10,r5
	ctx.r10.s64 = ctx.r5.s64 - ctx.r10.s64;
	// subf r9,r9,r4
	ctx.r9.s64 = ctx.r4.s64 - ctx.r9.s64;
	// addi r5,r10,-1
	ctx.r5.s64 = ctx.r10.s64 + -1;
	// mullw r10,r5,r9
	ctx.r10.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r9.s32);
loc_82F1C778:
	// lwz r9,14648(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 14648);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r10,68(r3)
	PPC_STORE_U32(ctx.r3.u32 + 68, ctx.r10.u32);
	// lwz r10,14644(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 14644);
	// mullw r5,r9,r8
	ctx.r5.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r8.s32);
	// lhz r8,14(r22)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r22.u32 + 14);
	// mullw r4,r8,r10
	ctx.r4.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r10.s32);
	// srawi r8,r4,3
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x7) != 0);
	ctx.r8.s64 = ctx.r4.s32 >> 3;
	// addze r8,r8
	temp.s64 = ctx.r8.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r8.s64 = temp.s64;
	// add r5,r8,r5
	ctx.r5.u64 = ctx.r8.u64 + ctx.r5.u64;
	// stw r5,14496(r3)
	PPC_STORE_U32(ctx.r3.u32 + 14496, ctx.r5.u32);
	// bne cr6,0x82f1c7ac
	if (!ctx.cr6.eq) goto loc_82F1C7AC;
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
loc_82F1C7AC:
	// lwz r8,16(r22)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r22.u32 + 16);
	// cmplw cr6,r8,r30
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r30.u32, ctx.xer);
	// bgt cr6,0x82f1c8bc
	if (ctx.cr6.gt) goto loc_82F1C8BC;
	// beq cr6,0x82f1c860
	if (ctx.cr6.eq) goto loc_82F1C860;
	// cmplw cr6,r8,r25
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r25.u32, ctx.xer);
	// beq cr6,0x82f1c8cc
	if (ctx.cr6.eq) goto loc_82F1C8CC;
	// cmplw cr6,r8,r29
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x82f1c814
	if (ctx.cr6.eq) goto loc_82F1C814;
	// cmplw cr6,r8,r24
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r24.u32, ctx.xer);
	// bne cr6,0x82f1c974
	if (!ctx.cr6.eq) goto loc_82F1C974;
	// srawi r8,r27,31
	ctx.xer.ca = (ctx.r27.s32 < 0) & ((ctx.r27.u32 & 0x7FFFFFFF) != 0);
	ctx.r8.s64 = ctx.r27.s32 >> 31;
	// stw r7,76(r3)
	PPC_STORE_U32(ctx.r3.u32 + 76, ctx.r7.u32);
	// mullw r9,r9,r6
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r6.s32);
	// stw r7,14508(r3)
	PPC_STORE_U32(ctx.r3.u32 + 14508, ctx.r7.u32);
	// stw r11,14680(r3)
	PPC_STORE_U32(ctx.r3.u32 + 14680, ctx.r11.u32);
	// xor r7,r27,r8
	ctx.r7.u64 = ctx.r27.u64 ^ ctx.r8.u64;
	// srawi r6,r9,1
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r6.s64 = ctx.r9.s32 >> 1;
	// subf r5,r8,r7
	ctx.r5.s64 = ctx.r7.s64 - ctx.r8.s64;
	// addze r8,r6
	temp.s64 = ctx.r6.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r6.u32;
	ctx.r8.s64 = temp.s64;
	// mullw r4,r5,r11
	ctx.r4.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r11.s32);
	// stw r4,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r4.u32);
	// add r11,r10,r9
	ctx.r11.u64 = ctx.r10.u64 + ctx.r9.u64;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// stw r11,14500(r3)
	PPC_STORE_U32(ctx.r3.u32 + 14500, ctx.r11.u32);
	// stw r10,14504(r3)
	PPC_STORE_U32(ctx.r3.u32 + 14504, ctx.r10.u32);
	// b 0x82f1c974
	goto loc_82F1C974;
loc_82F1C814:
	// srawi r5,r27,31
	ctx.xer.ca = (ctx.r27.s32 < 0) & ((ctx.r27.u32 & 0x7FFFFFFF) != 0);
	ctx.r5.s64 = ctx.r27.s32 >> 31;
	// stw r7,76(r3)
	PPC_STORE_U32(ctx.r3.u32 + 76, ctx.r7.u32);
	// srawi r4,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r4.s64 = ctx.r10.s32 >> 1;
	// stw r7,14508(r3)
	PPC_STORE_U32(ctx.r3.u32 + 14508, ctx.r7.u32);
	// mullw r9,r9,r6
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r6.s32);
	// addze r8,r4
	temp.s64 = ctx.r4.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r4.u32;
	ctx.r8.s64 = temp.s64;
	// srawi r7,r9,1
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r7.s64 = ctx.r9.s32 >> 1;
	// xor r4,r27,r5
	ctx.r4.u64 = ctx.r27.u64 ^ ctx.r5.u64;
	// addze r6,r7
	temp.s64 = ctx.r7.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r7.u32;
	ctx.r6.s64 = temp.s64;
	// subf r7,r5,r4
	ctx.r7.s64 = ctx.r4.s64 - ctx.r5.s64;
	// srawi r5,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r5.s64 = ctx.r11.s32 >> 1;
	// mullw r4,r7,r11
	ctx.r4.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r11.s32);
	// stw r4,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r4.u32);
	// add r11,r10,r9
	ctx.r11.u64 = ctx.r10.u64 + ctx.r9.u64;
	// add r10,r8,r6
	ctx.r10.u64 = ctx.r8.u64 + ctx.r6.u64;
	// addze r9,r5
	temp.s64 = ctx.r5.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r5.u32;
	ctx.r9.s64 = temp.s64;
	// stw r11,14500(r3)
	PPC_STORE_U32(ctx.r3.u32 + 14500, ctx.r11.u32);
	// stw r10,14504(r3)
	PPC_STORE_U32(ctx.r3.u32 + 14504, ctx.r10.u32);
	// b 0x82f1c970
	goto loc_82F1C970;
loc_82F1C860:
	// srawi r7,r27,31
	ctx.xer.ca = (ctx.r27.s32 < 0) & ((ctx.r27.u32 & 0x7FFFFFFF) != 0);
	ctx.r7.s64 = ctx.r27.s32 >> 31;
	// mullw r8,r9,r6
	ctx.r8.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r6.s32);
	// xor r4,r27,r7
	ctx.r4.u64 = ctx.r27.u64 ^ ctx.r7.u64;
	// srawi r5,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r5.s64 = ctx.r10.s32 >> 1;
	// subf r9,r7,r4
	ctx.r9.s64 = ctx.r4.s64 - ctx.r7.s64;
	// addze r7,r5
	temp.s64 = ctx.r5.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r5.u32;
	ctx.r7.s64 = temp.s64;
	// mullw r9,r9,r11
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r11.s32);
	// stw r9,76(r3)
	PPC_STORE_U32(ctx.r3.u32 + 76, ctx.r9.u32);
	// srawi r6,r8,2
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r6.s64 = ctx.r8.s32 >> 2;
	// rlwinm r5,r9,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// addze r6,r6
	temp.s64 = ctx.r6.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r6.u32;
	ctx.r6.s64 = temp.s64;
	// srawi r4,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r4.s64 = ctx.r11.s32 >> 1;
	// add r9,r9,r5
	ctx.r9.u64 = ctx.r9.u64 + ctx.r5.u64;
	// add r11,r7,r6
	ctx.r11.u64 = ctx.r7.u64 + ctx.r6.u64;
	// rlwinm r7,r9,30,2,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0x3FFFFFFF;
	// add r6,r10,r8
	ctx.r6.u64 = ctx.r10.u64 + ctx.r8.u64;
	// stw r11,14508(r3)
	PPC_STORE_U32(ctx.r3.u32 + 14508, ctx.r11.u32);
	// addze r5,r4
	temp.s64 = ctx.r4.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r4.u32;
	ctx.r5.s64 = temp.s64;
	// stw r7,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r7.u32);
	// stw r6,14500(r3)
	PPC_STORE_U32(ctx.r3.u32 + 14500, ctx.r6.u32);
	// stw r11,14504(r3)
	PPC_STORE_U32(ctx.r3.u32 + 14504, ctx.r11.u32);
	// stw r5,14680(r3)
	PPC_STORE_U32(ctx.r3.u32 + 14680, ctx.r5.u32);
	// b 0x82f1c974
	goto loc_82F1C974;
loc_82F1C8BC:
	// cmplw cr6,r8,r28
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r28.u32, ctx.xer);
	// beq cr6,0x82f1c928
	if (ctx.cr6.eq) goto loc_82F1C928;
	// cmplw cr6,r8,r26
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r26.u32, ctx.xer);
	// bne cr6,0x82f1c974
	if (!ctx.cr6.eq) goto loc_82F1C974;
loc_82F1C8CC:
	// srawi r7,r27,31
	ctx.xer.ca = (ctx.r27.s32 < 0) & ((ctx.r27.u32 & 0x7FFFFFFF) != 0);
	ctx.r7.s64 = ctx.r27.s32 >> 31;
	// mullw r8,r9,r6
	ctx.r8.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r6.s32);
	// xor r4,r27,r7
	ctx.r4.u64 = ctx.r27.u64 ^ ctx.r7.u64;
	// srawi r5,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r5.s64 = ctx.r10.s32 >> 1;
	// subf r9,r7,r4
	ctx.r9.s64 = ctx.r4.s64 - ctx.r7.s64;
	// addze r7,r5
	temp.s64 = ctx.r5.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r5.u32;
	ctx.r7.s64 = temp.s64;
	// mullw r9,r9,r11
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r11.s32);
	// stw r9,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r9.u32);
	// srawi r6,r8,2
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r6.s64 = ctx.r8.s32 >> 2;
	// rlwinm r5,r9,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// addze r6,r6
	temp.s64 = ctx.r6.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r6.u32;
	ctx.r6.s64 = temp.s64;
	// srawi r4,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r4.s64 = ctx.r11.s32 >> 1;
	// add r9,r9,r5
	ctx.r9.u64 = ctx.r9.u64 + ctx.r5.u64;
	// add r11,r7,r6
	ctx.r11.u64 = ctx.r7.u64 + ctx.r6.u64;
	// rlwinm r7,r9,30,2,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0x3FFFFFFF;
	// add r6,r10,r8
	ctx.r6.u64 = ctx.r10.u64 + ctx.r8.u64;
	// stw r11,14504(r3)
	PPC_STORE_U32(ctx.r3.u32 + 14504, ctx.r11.u32);
	// addze r5,r4
	temp.s64 = ctx.r4.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r4.u32;
	ctx.r5.s64 = temp.s64;
	// stw r7,76(r3)
	PPC_STORE_U32(ctx.r3.u32 + 76, ctx.r7.u32);
	// stw r6,14500(r3)
	PPC_STORE_U32(ctx.r3.u32 + 14500, ctx.r6.u32);
	// stw r11,14508(r3)
	PPC_STORE_U32(ctx.r3.u32 + 14508, ctx.r11.u32);
	// stw r5,14680(r3)
	PPC_STORE_U32(ctx.r3.u32 + 14680, ctx.r5.u32);
	// b 0x82f1c974
	goto loc_82F1C974;
loc_82F1C928:
	// srawi r8,r27,31
	ctx.xer.ca = (ctx.r27.s32 < 0) & ((ctx.r27.u32 & 0x7FFFFFFF) != 0);
	ctx.r8.s64 = ctx.r27.s32 >> 31;
	// mullw r9,r9,r6
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r6.s32);
	// xor r7,r27,r8
	ctx.r7.u64 = ctx.r27.u64 ^ ctx.r8.u64;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// subf r6,r8,r7
	ctx.r6.s64 = ctx.r7.s64 - ctx.r8.s64;
	// srawi r5,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r5.s64 = ctx.r10.s32 >> 1;
	// stw r10,14500(r3)
	PPC_STORE_U32(ctx.r3.u32 + 14500, ctx.r10.u32);
	// mullw r10,r6,r11
	ctx.r10.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r11.s32);
	// stw r10,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r10.u32);
	// rlwinm r8,r10,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// addze r9,r5
	temp.s64 = ctx.r5.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r5.u32;
	ctx.r9.s64 = temp.s64;
	// add r4,r10,r8
	ctx.r4.u64 = ctx.r10.u64 + ctx.r8.u64;
	// srawi r11,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 1;
	// stw r9,14504(r3)
	PPC_STORE_U32(ctx.r3.u32 + 14504, ctx.r9.u32);
	// rlwinm r10,r4,31,1,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 31) & 0x7FFFFFFF;
	// stw r9,14508(r3)
	PPC_STORE_U32(ctx.r3.u32 + 14508, ctx.r9.u32);
	// addze r9,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r9.s64 = temp.s64;
	// stw r10,76(r3)
	PPC_STORE_U32(ctx.r3.u32 + 76, ctx.r10.u32);
loc_82F1C970:
	// stw r9,14680(r3)
	PPC_STORE_U32(ctx.r3.u32 + 14680, ctx.r9.u32);
loc_82F1C974:
	// lwz r9,14556(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 14556);
	// lwz r10,14480(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 14480);
	// twllei r9,0
	if (ctx.r9.u32 <= 0) __builtin_debugtrap();
	// divwu r11,r10,r9
	ctx.r11.u32 = ctx.r10.u32 / ctx.r9.u32;
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// clrlwi r8,r11,30
	ctx.r8.u64 = ctx.r11.u32 & 0x3;
	// stw r11,80(r3)
	PPC_STORE_U32(ctx.r3.u32 + 80, ctx.r11.u32);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82f1c9a0
	if (ctx.cr6.eq) goto loc_82F1C9A0;
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// stw r11,80(r3)
	PPC_STORE_U32(ctx.r3.u32 + 80, ctx.r11.u32);
loc_82F1C9A0:
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// bne cr6,0x82f1c9ac
	if (!ctx.cr6.eq) goto loc_82F1C9AC;
	// stw r10,80(r3)
	PPC_STORE_U32(ctx.r3.u32 + 80, ctx.r10.u32);
loc_82F1C9AC:
	// cmplwi cr6,r9,2
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 2, ctx.xer);
	// bne cr6,0x82f1c9bc
	if (!ctx.cr6.eq) goto loc_82F1C9BC;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// b 0x82f1c9c4
	goto loc_82F1C9C4;
loc_82F1C9BC:
	// lwz r11,80(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
loc_82F1C9C4:
	// stw r11,84(r3)
	PPC_STORE_U32(ctx.r3.u32 + 84, ctx.r11.u32);
	// cmplwi cr6,r9,4
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 4, ctx.xer);
	// beq cr6,0x82f1c9d8
	if (ctx.cr6.eq) goto loc_82F1C9D8;
	// stw r10,88(r3)
	PPC_STORE_U32(ctx.r3.u32 + 88, ctx.r10.u32);
	// b 0x82fa76ac
	__restgprlr_21(ctx, base);
	return;
loc_82F1C9D8:
	// lwz r11,80(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 80);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,88(r3)
	PPC_STORE_U32(ctx.r3.u32 + 88, ctx.r11.u32);
	// b 0x82fa76ac
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F1C9EC"))) PPC_WEAK_FUNC(sub_82F1C9EC);
PPC_FUNC_IMPL(__imp__sub_82F1C9EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F1C9F0"))) PPC_WEAK_FUNC(sub_82F1C9F0);
PPC_FUNC_IMPL(__imp__sub_82F1C9F0) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,14552(r3)
	PPC_STORE_U32(ctx.r3.u32 + 14552, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F1C9FC"))) PPC_WEAK_FUNC(sub_82F1C9FC);
PPC_FUNC_IMPL(__imp__sub_82F1C9FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F1CA00"))) PPC_WEAK_FUNC(sub_82F1CA00);
PPC_FUNC_IMPL(__imp__sub_82F1CA00) {
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
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lwz r10,16(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// bne cr6,0x82f1ca8c
	if (!ctx.cr6.eq) goto loc_82F1CA8C;
	// lwz r3,20(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82f1ca58
	if (!ctx.cr6.eq) goto loc_82F1CA58;
	// lwz r10,14704(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 14704);
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r6,80(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// lwz r4,36(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82F1CA48;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82F1CA58:
	// lwz r10,14708(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 14708);
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r8,80(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// lwz r6,48(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// lwz r5,44(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// lwz r4,40(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82F1CA7C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82F1CA8C:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82f1cacc
	if (!ctx.cr6.eq) goto loc_82F1CACC;
	// lwz r10,14716(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 14716);
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r8,80(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// lwz r6,32(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lwz r5,28(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// lwz r4,24(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// lwz r3,36(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82F1CABC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_82F1CACC:
	// lwz r4,14712(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 14712);
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r10,80(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// lwz r8,48(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 48);
	// lwz r7,44(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// lwz r6,40(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// mtctr r4
	ctx.ctr.u64 = ctx.r4.u64;
	// lwz r5,32(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// lwz r4,28(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// lwz r3,24(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bctrl 
	ctx.lr = 0x82F1CAFC;
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

__attribute__((alias("__imp__sub_82F1CB0C"))) PPC_WEAK_FUNC(sub_82F1CB0C);
PPC_FUNC_IMPL(__imp__sub_82F1CB0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F1CB10"))) PPC_WEAK_FUNC(sub_82F1CB10);
PPC_FUNC_IMPL(__imp__sub_82F1CB10) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7660
	ctx.lr = 0x82F1CB18;
	__savegprlr_22(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r31,260(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 260);
	// subf. r22,r9,r10
	ctx.r22.s64 = ctx.r10.s64 - ctx.r9.s64;
	ctx.cr0.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// lwz r11,14620(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 14620);
	// lwz r24,14628(r31)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r31.u32 + 14628);
	// mullw r10,r11,r9
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r9.s32);
	// lwz r30,14536(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 14536);
	// lwz r29,14540(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 14540);
	// lwz r27,14500(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 14500);
	// lwz r28,14544(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 14544);
	// lwz r25,14508(r31)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r31.u32 + 14508);
	// lwz r26,14504(r31)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r31.u32 + 14504);
	// srawi r11,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r10.s32 >> 2;
	// mullw r9,r24,r9
	ctx.r9.s64 = int64_t(ctx.r24.s32) * int64_t(ctx.r9.s32);
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// srawi r23,r9,2
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r23.s64 = ctx.r9.s32 >> 2;
	// add r24,r30,r10
	ctx.r24.u64 = ctx.r30.u64 + ctx.r10.u64;
	// addze r10,r23
	temp.s64 = ctx.r23.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r23.u32;
	ctx.r10.s64 = temp.s64;
	// add r23,r29,r11
	ctx.r23.u64 = ctx.r29.u64 + ctx.r11.u64;
	// add r28,r28,r11
	ctx.r28.u64 = ctx.r28.u64 + ctx.r11.u64;
	// add r30,r27,r9
	ctx.r30.u64 = ctx.r27.u64 + ctx.r9.u64;
	// add r9,r26,r10
	ctx.r9.u64 = ctx.r26.u64 + ctx.r10.u64;
	// add r11,r25,r10
	ctx.r11.u64 = ctx.r25.u64 + ctx.r10.u64;
	// add r29,r24,r3
	ctx.r29.u64 = ctx.r24.u64 + ctx.r3.u64;
	// add r24,r28,r5
	ctx.r24.u64 = ctx.r28.u64 + ctx.r5.u64;
	// add r27,r23,r4
	ctx.r27.u64 = ctx.r23.u64 + ctx.r4.u64;
	// add r30,r30,r6
	ctx.r30.u64 = ctx.r30.u64 + ctx.r6.u64;
	// add r28,r9,r7
	ctx.r28.u64 = ctx.r9.u64 + ctx.r7.u64;
	// add r25,r11,r8
	ctx.r25.u64 = ctx.r11.u64 + ctx.r8.u64;
	// ble 0x82f1cbbc
	if (!ctx.cr0.gt) goto loc_82F1CBBC;
	// mr r26,r22
	ctx.r26.u64 = ctx.r22.u64;
loc_82F1CB94:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r5,14476(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 14476);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82fa77c0
	ctx.lr = 0x82F1CBA4;
	sub_82FA77C0(ctx, base);
	// lwz r10,14628(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 14628);
	// lwz r11,14620(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 14620);
	// addic. r26,r26,-1
	ctx.xer.ca = ctx.r26.u32 > 0;
	ctx.r26.s64 = ctx.r26.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// add r30,r10,r30
	ctx.r30.u64 = ctx.r10.u64 + ctx.r30.u64;
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// bne 0x82f1cb94
	if (!ctx.cr0.eq) goto loc_82F1CB94;
loc_82F1CBBC:
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// ble cr6,0x82f1cc34
	if (!ctx.cr6.gt) goto loc_82F1CC34;
	// addi r11,r22,-1
	ctx.r11.s64 = ctx.r22.s64 + -1;
	// rlwinm r11,r11,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r30,r11,1
	ctx.r30.s64 = ctx.r11.s64 + 1;
loc_82F1CBD0:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r5,14484(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 14484);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82fa77c0
	ctx.lr = 0x82F1CBE0;
	sub_82FA77C0(ctx, base);
	// lwz r10,14680(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 14680);
	// lwz r11,14676(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 14676);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// add r28,r10,r28
	ctx.r28.u64 = ctx.r10.u64 + ctx.r28.u64;
	// add r27,r11,r27
	ctx.r27.u64 = ctx.r11.u64 + ctx.r27.u64;
	// bne 0x82f1cbd0
	if (!ctx.cr0.eq) goto loc_82F1CBD0;
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// ble cr6,0x82f1cc34
	if (!ctx.cr6.gt) goto loc_82F1CC34;
	// addi r11,r22,-1
	ctx.r11.s64 = ctx.r22.s64 + -1;
	// rlwinm r11,r11,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r30,r11,1
	ctx.r30.s64 = ctx.r11.s64 + 1;
loc_82F1CC0C:
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// lwz r5,14484(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 14484);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82fa77c0
	ctx.lr = 0x82F1CC1C;
	sub_82FA77C0(ctx, base);
	// lwz r10,14680(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 14680);
	// lwz r11,14676(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 14676);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// add r25,r10,r25
	ctx.r25.u64 = ctx.r10.u64 + ctx.r25.u64;
	// add r24,r11,r24
	ctx.r24.u64 = ctx.r11.u64 + ctx.r24.u64;
	// bne 0x82f1cc0c
	if (!ctx.cr0.eq) goto loc_82F1CC0C;
loc_82F1CC34:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82fa76b0
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F1CC3C"))) PPC_WEAK_FUNC(sub_82F1CC3C);
PPC_FUNC_IMPL(__imp__sub_82F1CC3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F1CC40"))) PPC_WEAK_FUNC(sub_82F1CC40);
PPC_FUNC_IMPL(__imp__sub_82F1CC40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7670
	ctx.lr = 0x82F1CC48;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// mr r28,r9
	ctx.r28.u64 = ctx.r9.u64;
	// cmpwi cr6,r7,1
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 1, ctx.xer);
	// bne cr6,0x82f1cca4
	if (!ctx.cr6.eq) goto loc_82F1CCA4;
	// cmpwi cr6,r8,1
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 1, ctx.xer);
	// bne cr6,0x82f1cca4
	if (!ctx.cr6.eq) goto loc_82F1CCA4;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x82f1cce0
	if (!ctx.cr6.gt) goto loc_82F1CCE0;
	// mr r29,r10
	ctx.r29.u64 = ctx.r10.u64;
loc_82F1CC7C:
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82fa77c0
	ctx.lr = 0x82F1CC8C;
	sub_82FA77C0(ctx, base);
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// add r31,r31,r27
	ctx.r31.u64 = ctx.r31.u64 + ctx.r27.u64;
	// add r30,r30,r26
	ctx.r30.u64 = ctx.r30.u64 + ctx.r26.u64;
	// bne 0x82f1cc7c
	if (!ctx.cr0.eq) goto loc_82F1CC7C;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82fa76c0
	__restgprlr_26(ctx, base);
	return;
loc_82F1CCA4:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble cr6,0x82f1cce0
	if (!ctx.cr6.gt) goto loc_82F1CCE0;
	// mr r6,r10
	ctx.r6.u64 = ctx.r10.u64;
loc_82F1CCB0:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// ble cr6,0x82f1ccd0
	if (!ctx.cr6.gt) goto loc_82F1CCD0;
	// mtctr r28
	ctx.ctr.u64 = ctx.r28.u64;
	// subf r10,r8,r30
	ctx.r10.s64 = ctx.r30.s64 - ctx.r8.s64;
	// subf r11,r7,r31
	ctx.r11.s64 = ctx.r31.s64 - ctx.r7.s64;
loc_82F1CCC4:
	// lbzux r9,r11,r7
	ea = ctx.r11.u32 + ctx.r7.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// stbux r9,r10,r8
	ea = ctx.r10.u32 + ctx.r8.u32;
	PPC_STORE_U8(ea, ctx.r9.u8);
	ctx.r10.u32 = ea;
	// bdnz 0x82f1ccc4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82F1CCC4;
loc_82F1CCD0:
	// addic. r6,r6,-1
	ctx.xer.ca = ctx.r6.u32 > 0;
	ctx.r6.s64 = ctx.r6.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// add r31,r31,r27
	ctx.r31.u64 = ctx.r31.u64 + ctx.r27.u64;
	// add r30,r30,r26
	ctx.r30.u64 = ctx.r30.u64 + ctx.r26.u64;
	// bne 0x82f1ccb0
	if (!ctx.cr0.eq) goto loc_82F1CCB0;
loc_82F1CCE0:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82fa76c0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F1CCE8"))) PPC_WEAK_FUNC(sub_82F1CCE8);
PPC_FUNC_IMPL(__imp__sub_82F1CCE8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7648
	ctx.lr = 0x82F1CCF0;
	__savegprlr_16(ctx, base);
	// lwz r21,100(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// lwz r20,108(r1)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// mr r18,r8
	ctx.r18.u64 = ctx.r8.u64;
	// li r17,0
	ctx.r17.s64 = 0;
	// li r24,0
	ctx.r24.s64 = 0;
	// li r23,0
	ctx.r23.s64 = 0;
	// cmpwi cr6,r21,1
	ctx.cr6.compare<int32_t>(ctx.r21.s32, 1, ctx.xer);
	// bne cr6,0x82f1cd2c
	if (!ctx.cr6.eq) goto loc_82F1CD2C;
	// cmpwi cr6,r20,1
	ctx.cr6.compare<int32_t>(ctx.r20.s32, 1, ctx.xer);
	// bne cr6,0x82f1cd44
	if (!ctx.cr6.eq) goto loc_82F1CD44;
	// li r24,1
	ctx.r24.s64 = 1;
	// li r23,1
	ctx.r23.s64 = 1;
	// li r17,11
	ctx.r17.s64 = 11;
	// b 0x82f1cd58
	goto loc_82F1CD58;
loc_82F1CD2C:
	// cmpwi cr6,r21,3
	ctx.cr6.compare<int32_t>(ctx.r21.s32, 3, ctx.xer);
	// bne cr6,0x82f1cd58
	if (!ctx.cr6.eq) goto loc_82F1CD58;
	// cmpwi cr6,r20,1
	ctx.cr6.compare<int32_t>(ctx.r20.s32, 1, ctx.xer);
	// bne cr6,0x82f1cd58
	if (!ctx.cr6.eq) goto loc_82F1CD58;
	// li r17,31
	ctx.r17.s64 = 31;
	// b 0x82f1cd50
	goto loc_82F1CD50;
loc_82F1CD44:
	// cmpwi cr6,r20,3
	ctx.cr6.compare<int32_t>(ctx.r20.s32, 3, ctx.xer);
	// bne cr6,0x82f1cd58
	if (!ctx.cr6.eq) goto loc_82F1CD58;
	// li r17,13
	ctx.r17.s64 = 13;
loc_82F1CD50:
	// li r23,2
	ctx.r23.s64 = 2;
	// li r24,2
	ctx.r24.s64 = 2;
loc_82F1CD58:
	// lwz r16,92(r1)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// lwz r22,84(r1)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// add r27,r3,r7
	ctx.r27.u64 = ctx.r3.u64 + ctx.r7.u64;
	// srawi. r11,r16,1
	ctx.xer.ca = (ctx.r16.s32 < 0) & ((ctx.r16.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r16.s32 >> 1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// add r25,r4,r7
	ctx.r25.u64 = ctx.r4.u64 + ctx.r7.u64;
	// mr r8,r5
	ctx.r8.u64 = ctx.r5.u64;
	// mr r26,r31
	ctx.r26.u64 = ctx.r31.u64;
	// ble 0x82f1cf5c
	if (!ctx.cr0.gt) goto loc_82F1CF5C;
	// mr r19,r11
	ctx.r19.u64 = ctx.r11.u64;
loc_82F1CD80:
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// cmpwi cr6,r17,11
	ctx.cr6.compare<int32_t>(ctx.r17.s32, 11, ctx.xer);
	// bne cr6,0x82f1cde8
	if (!ctx.cr6.eq) goto loc_82F1CDE8;
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// ble cr6,0x82f1cf3c
	if (!ctx.cr6.gt) goto loc_82F1CF3C;
	// mtctr r22
	ctx.ctr.u64 = ctx.r22.u64;
	// subf r29,r8,r26
	ctx.r29.s64 = ctx.r26.s64 - ctx.r8.s64;
	// subf r3,r6,r27
	ctx.r3.s64 = ctx.r27.s64 - ctx.r6.s64;
	// subf r31,r6,r25
	ctx.r31.s64 = ctx.r25.s64 - ctx.r6.s64;
	// subf r30,r6,r4
	ctx.r30.s64 = ctx.r4.s64 - ctx.r6.s64;
loc_82F1CDA8:
	// lbzx r4,r3,r6
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r3.u32 + ctx.r6.u32);
	// lbz r5,0(r6)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r6.u32 + 0);
	// add r5,r4,r5
	ctx.r5.u64 = ctx.r4.u64 + ctx.r5.u64;
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// srawi r4,r5,1
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x1) != 0);
	ctx.r4.s64 = ctx.r5.s32 >> 1;
	// stb r4,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r4.u8);
	// lbzx r4,r31,r6
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r31.u32 + ctx.r6.u32);
	// lbzx r5,r30,r6
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r30.u32 + ctx.r6.u32);
	// add r5,r5,r4
	ctx.r5.u64 = ctx.r5.u64 + ctx.r4.u64;
	// addi r4,r5,1
	ctx.r4.s64 = ctx.r5.s64 + 1;
	// add r6,r6,r9
	ctx.r6.u64 = ctx.r6.u64 + ctx.r9.u64;
	// srawi r5,r4,1
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x1) != 0);
	ctx.r5.s64 = ctx.r4.s32 >> 1;
	// stbx r5,r29,r11
	PPC_STORE_U8(ctx.r29.u32 + ctx.r11.u32, ctx.r5.u8);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bdnz 0x82f1cda8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82F1CDA8;
	// b 0x82f1cf3c
	goto loc_82F1CF3C;
loc_82F1CDE8:
	// cmpwi cr6,r17,31
	ctx.cr6.compare<int32_t>(ctx.r17.s32, 31, ctx.xer);
	// bne cr6,0x82f1ce60
	if (!ctx.cr6.eq) goto loc_82F1CE60;
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// ble cr6,0x82f1cf3c
	if (!ctx.cr6.gt) goto loc_82F1CF3C;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mtctr r22
	ctx.ctr.u64 = ctx.r22.u64;
	// subf r31,r27,r6
	ctx.r31.s64 = ctx.r6.s64 - ctx.r27.s64;
	// subf r30,r27,r25
	ctx.r30.s64 = ctx.r25.s64 - ctx.r27.s64;
	// subf r29,r27,r4
	ctx.r29.s64 = ctx.r4.s64 - ctx.r27.s64;
	// subf r28,r8,r26
	ctx.r28.s64 = ctx.r26.s64 - ctx.r8.s64;
loc_82F1CE10:
	// lbzx r6,r31,r5
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r31.u32 + ctx.r5.u32);
	// lbz r4,0(r5)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r5.u32 + 0);
	// rotlwi r3,r6,1
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r6.u32, 1);
	// add r6,r6,r3
	ctx.r6.u64 = ctx.r6.u64 + ctx.r3.u64;
	// add r6,r6,r4
	ctx.r6.u64 = ctx.r6.u64 + ctx.r4.u64;
	// addi r6,r6,2
	ctx.r6.s64 = ctx.r6.s64 + 2;
	// srawi r4,r6,2
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x3) != 0);
	ctx.r4.s64 = ctx.r6.s32 >> 2;
	// stb r4,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r4.u8);
	// lbzx r6,r29,r5
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r29.u32 + ctx.r5.u32);
	// rotlwi r3,r6,1
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r6.u32, 1);
	// lbzx r4,r30,r5
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r30.u32 + ctx.r5.u32);
	// add r6,r6,r3
	ctx.r6.u64 = ctx.r6.u64 + ctx.r3.u64;
	// add r5,r5,r9
	ctx.r5.u64 = ctx.r5.u64 + ctx.r9.u64;
	// add r6,r6,r4
	ctx.r6.u64 = ctx.r6.u64 + ctx.r4.u64;
	// addi r6,r6,2
	ctx.r6.s64 = ctx.r6.s64 + 2;
	// srawi r4,r6,2
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x3) != 0);
	ctx.r4.s64 = ctx.r6.s32 >> 2;
	// stbx r4,r28,r11
	PPC_STORE_U8(ctx.r28.u32 + ctx.r11.u32, ctx.r4.u8);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bdnz 0x82f1ce10
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82F1CE10;
	// b 0x82f1cf3c
	goto loc_82F1CF3C;
loc_82F1CE60:
	// cmpwi cr6,r17,13
	ctx.cr6.compare<int32_t>(ctx.r17.s32, 13, ctx.xer);
	// bne cr6,0x82f1ced4
	if (!ctx.cr6.eq) goto loc_82F1CED4;
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// ble cr6,0x82f1cf3c
	if (!ctx.cr6.gt) goto loc_82F1CF3C;
	// mtctr r22
	ctx.ctr.u64 = ctx.r22.u64;
	// subf r28,r8,r26
	ctx.r28.s64 = ctx.r26.s64 - ctx.r8.s64;
	// subf r31,r6,r27
	ctx.r31.s64 = ctx.r27.s64 - ctx.r6.s64;
	// subf r30,r6,r25
	ctx.r30.s64 = ctx.r25.s64 - ctx.r6.s64;
	// subf r29,r6,r4
	ctx.r29.s64 = ctx.r4.s64 - ctx.r6.s64;
loc_82F1CE84:
	// lbzx r5,r6,r31
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r6.u32 + ctx.r31.u32);
	// lbz r4,0(r6)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r6.u32 + 0);
	// rotlwi r3,r5,1
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r5.u32, 1);
	// add r5,r5,r3
	ctx.r5.u64 = ctx.r5.u64 + ctx.r3.u64;
	// add r5,r5,r4
	ctx.r5.u64 = ctx.r5.u64 + ctx.r4.u64;
	// addi r5,r5,2
	ctx.r5.s64 = ctx.r5.s64 + 2;
	// srawi r4,r5,2
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x3) != 0);
	ctx.r4.s64 = ctx.r5.s32 >> 2;
	// stb r4,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r4.u8);
	// lbzx r4,r6,r29
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r6.u32 + ctx.r29.u32);
	// lbzx r5,r6,r30
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r6.u32 + ctx.r30.u32);
	// rotlwi r3,r5,1
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r5.u32, 1);
	// add r5,r5,r3
	ctx.r5.u64 = ctx.r5.u64 + ctx.r3.u64;
	// add r6,r6,r9
	ctx.r6.u64 = ctx.r6.u64 + ctx.r9.u64;
	// add r5,r5,r4
	ctx.r5.u64 = ctx.r5.u64 + ctx.r4.u64;
	// addi r5,r5,2
	ctx.r5.s64 = ctx.r5.s64 + 2;
	// srawi r4,r5,2
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x3) != 0);
	ctx.r4.s64 = ctx.r5.s32 >> 2;
	// stbx r4,r28,r11
	PPC_STORE_U8(ctx.r28.u32 + ctx.r11.u32, ctx.r4.u8);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bdnz 0x82f1ce84
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82F1CE84;
	// b 0x82f1cf3c
	goto loc_82F1CF3C;
loc_82F1CED4:
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// ble cr6,0x82f1cf3c
	if (!ctx.cr6.gt) goto loc_82F1CF3C;
	// mtctr r22
	ctx.ctr.u64 = ctx.r22.u64;
	// subf r29,r8,r26
	ctx.r29.s64 = ctx.r26.s64 - ctx.r8.s64;
	// subf r3,r6,r27
	ctx.r3.s64 = ctx.r27.s64 - ctx.r6.s64;
	// subf r31,r6,r25
	ctx.r31.s64 = ctx.r25.s64 - ctx.r6.s64;
	// subf r30,r6,r4
	ctx.r30.s64 = ctx.r4.s64 - ctx.r6.s64;
loc_82F1CEF0:
	// lbzx r5,r6,r3
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r6.u32 + ctx.r3.u32);
	// lbz r4,0(r6)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r6.u32 + 0);
	// mullw r5,r5,r20
	ctx.r5.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r20.s32);
	// mullw r4,r4,r21
	ctx.r4.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r21.s32);
	// add r5,r5,r4
	ctx.r5.u64 = ctx.r5.u64 + ctx.r4.u64;
	// add r5,r5,r24
	ctx.r5.u64 = ctx.r5.u64 + ctx.r24.u64;
	// sraw r4,r5,r23
	temp.u32 = ctx.r23.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r5.s32 < 0) & (((ctx.r5.s32 >> temp.u32) << temp.u32) != ctx.r5.s32);
	ctx.r4.s64 = ctx.r5.s32 >> temp.u32;
	// stb r4,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r4.u8);
	// lbzx r5,r6,r30
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r6.u32 + ctx.r30.u32);
	// mullw r5,r5,r21
	ctx.r5.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r21.s32);
	// lbzx r4,r6,r31
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r6.u32 + ctx.r31.u32);
	// add r6,r6,r9
	ctx.r6.u64 = ctx.r6.u64 + ctx.r9.u64;
	// mullw r4,r4,r20
	ctx.r4.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r20.s32);
	// add r5,r5,r4
	ctx.r5.u64 = ctx.r5.u64 + ctx.r4.u64;
	// add r4,r5,r24
	ctx.r4.u64 = ctx.r5.u64 + ctx.r24.u64;
	// sraw r5,r4,r23
	temp.u32 = ctx.r23.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r4.s32 < 0) & (((ctx.r4.s32 >> temp.u32) << temp.u32) != ctx.r4.s32);
	ctx.r5.s64 = ctx.r4.s32 >> temp.u32;
	// stbx r5,r29,r11
	PPC_STORE_U8(ctx.r29.u32 + ctx.r11.u32, ctx.r5.u8);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bdnz 0x82f1cef0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82F1CEF0;
loc_82F1CF3C:
	// add r6,r27,r7
	ctx.r6.u64 = ctx.r27.u64 + ctx.r7.u64;
	// add r4,r25,r7
	ctx.r4.u64 = ctx.r25.u64 + ctx.r7.u64;
	// addic. r19,r19,-1
	ctx.xer.ca = ctx.r19.u32 > 0;
	ctx.r19.s64 = ctx.r19.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r19.s32, 0, ctx.xer);
	// add r27,r6,r7
	ctx.r27.u64 = ctx.r6.u64 + ctx.r7.u64;
	// add r25,r4,r7
	ctx.r25.u64 = ctx.r4.u64 + ctx.r7.u64;
	// add r8,r8,r18
	ctx.r8.u64 = ctx.r8.u64 + ctx.r18.u64;
	// add r26,r26,r18
	ctx.r26.u64 = ctx.r26.u64 + ctx.r18.u64;
	// bne 0x82f1cd80
	if (!ctx.cr0.eq) goto loc_82F1CD80;
loc_82F1CF5C:
	// clrlwi r11,r16,31
	ctx.r11.u64 = ctx.r16.u32 & 0x1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82f1cf9c
	if (ctx.cr6.eq) goto loc_82F1CF9C;
	// mr r11,r6
	ctx.r11.u64 = ctx.r6.u64;
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// ble cr6,0x82f1cf9c
	if (!ctx.cr6.gt) goto loc_82F1CF9C;
	// subf r7,r6,r4
	ctx.r7.s64 = ctx.r4.s64 - ctx.r6.s64;
	// mtctr r22
	ctx.ctr.u64 = ctx.r22.u64;
	// subf r6,r8,r26
	ctx.r6.s64 = ctx.r26.s64 - ctx.r8.s64;
loc_82F1CF80:
	// lbz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// stb r5,0(r8)
	PPC_STORE_U8(ctx.r8.u32 + 0, ctx.r5.u8);
	// lbzx r4,r7,r11
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r7.u32 + ctx.r11.u32);
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stbx r4,r6,r8
	PPC_STORE_U8(ctx.r6.u32 + ctx.r8.u32, ctx.r4.u8);
	// add r8,r8,r10
	ctx.r8.u64 = ctx.r8.u64 + ctx.r10.u64;
	// bdnz 0x82f1cf80
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82F1CF80;
loc_82F1CF9C:
	// b 0x82fa7698
	__restgprlr_16(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F1CFA0"))) PPC_WEAK_FUNC(sub_82F1CFA0);
PPC_FUNC_IMPL(__imp__sub_82F1CFA0) {
	PPC_FUNC_PROLOGUE();
	// li r9,2
	ctx.r9.s64 = 2;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r9,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r9.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r9,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r9.u32);
	// li r9,-1
	ctx.r9.s64 = -1;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// stw r11,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r11.u32);
	// stw r11,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r11.u32);
	// stw r11,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r11.u32);
	// stw r11,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r11.u32);
	// stw r11,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r11.u32);
	// stw r11,48(r3)
	PPC_STORE_U32(ctx.r3.u32 + 48, ctx.r11.u32);
	// stw r11,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r11.u32);
	// stw r11,56(r3)
	PPC_STORE_U32(ctx.r3.u32 + 56, ctx.r11.u32);
	// stw r11,60(r3)
	PPC_STORE_U32(ctx.r3.u32 + 60, ctx.r11.u32);
	// stw r11,64(r3)
	PPC_STORE_U32(ctx.r3.u32 + 64, ctx.r11.u32);
	// stw r11,68(r3)
	PPC_STORE_U32(ctx.r3.u32 + 68, ctx.r11.u32);
	// stw r11,72(r3)
	PPC_STORE_U32(ctx.r3.u32 + 72, ctx.r11.u32);
	// stw r11,76(r3)
	PPC_STORE_U32(ctx.r3.u32 + 76, ctx.r11.u32);
	// stw r11,80(r3)
	PPC_STORE_U32(ctx.r3.u32 + 80, ctx.r11.u32);
	// stw r11,84(r3)
	PPC_STORE_U32(ctx.r3.u32 + 84, ctx.r11.u32);
	// stw r11,88(r3)
	PPC_STORE_U32(ctx.r3.u32 + 88, ctx.r11.u32);
	// stw r11,14460(r3)
	PPC_STORE_U32(ctx.r3.u32 + 14460, ctx.r11.u32);
	// stw r11,14464(r3)
	PPC_STORE_U32(ctx.r3.u32 + 14464, ctx.r11.u32);
	// stw r10,14468(r3)
	PPC_STORE_U32(ctx.r3.u32 + 14468, ctx.r10.u32);
	// stw r10,14472(r3)
	PPC_STORE_U32(ctx.r3.u32 + 14472, ctx.r10.u32);
	// stw r11,14476(r3)
	PPC_STORE_U32(ctx.r3.u32 + 14476, ctx.r11.u32);
	// stw r11,14480(r3)
	PPC_STORE_U32(ctx.r3.u32 + 14480, ctx.r11.u32);
	// stw r11,14484(r3)
	PPC_STORE_U32(ctx.r3.u32 + 14484, ctx.r11.u32);
	// stw r11,14488(r3)
	PPC_STORE_U32(ctx.r3.u32 + 14488, ctx.r11.u32);
	// stw r11,14492(r3)
	PPC_STORE_U32(ctx.r3.u32 + 14492, ctx.r11.u32);
	// stw r11,14496(r3)
	PPC_STORE_U32(ctx.r3.u32 + 14496, ctx.r11.u32);
	// stw r11,14500(r3)
	PPC_STORE_U32(ctx.r3.u32 + 14500, ctx.r11.u32);
	// stw r11,14504(r3)
	PPC_STORE_U32(ctx.r3.u32 + 14504, ctx.r11.u32);
	// stw r11,14508(r3)
	PPC_STORE_U32(ctx.r3.u32 + 14508, ctx.r11.u32);
	// stw r11,14512(r3)
	PPC_STORE_U32(ctx.r3.u32 + 14512, ctx.r11.u32);
	// stw r11,14516(r3)
	PPC_STORE_U32(ctx.r3.u32 + 14516, ctx.r11.u32);
	// stw r11,14520(r3)
	PPC_STORE_U32(ctx.r3.u32 + 14520, ctx.r11.u32);
	// stw r11,14524(r3)
	PPC_STORE_U32(ctx.r3.u32 + 14524, ctx.r11.u32);
	// stw r11,14528(r3)
	PPC_STORE_U32(ctx.r3.u32 + 14528, ctx.r11.u32);
	// stw r11,14532(r3)
	PPC_STORE_U32(ctx.r3.u32 + 14532, ctx.r11.u32);
	// stw r11,14536(r3)
	PPC_STORE_U32(ctx.r3.u32 + 14536, ctx.r11.u32);
	// stw r11,14540(r3)
	PPC_STORE_U32(ctx.r3.u32 + 14540, ctx.r11.u32);
	// stw r11,14544(r3)
	PPC_STORE_U32(ctx.r3.u32 + 14544, ctx.r11.u32);
	// stw r11,14548(r3)
	PPC_STORE_U32(ctx.r3.u32 + 14548, ctx.r11.u32);
	// stw r11,14552(r3)
	PPC_STORE_U32(ctx.r3.u32 + 14552, ctx.r11.u32);
	// stw r10,14556(r3)
	PPC_STORE_U32(ctx.r3.u32 + 14556, ctx.r10.u32);
	// stw r11,14612(r3)
	PPC_STORE_U32(ctx.r3.u32 + 14612, ctx.r11.u32);
	// stw r11,14616(r3)
	PPC_STORE_U32(ctx.r3.u32 + 14616, ctx.r11.u32);
	// stw r11,14620(r3)
	PPC_STORE_U32(ctx.r3.u32 + 14620, ctx.r11.u32);
	// stw r11,14624(r3)
	PPC_STORE_U32(ctx.r3.u32 + 14624, ctx.r11.u32);
	// stw r11,14628(r3)
	PPC_STORE_U32(ctx.r3.u32 + 14628, ctx.r11.u32);
	// stw r11,14632(r3)
	PPC_STORE_U32(ctx.r3.u32 + 14632, ctx.r11.u32);
	// stw r11,14636(r3)
	PPC_STORE_U32(ctx.r3.u32 + 14636, ctx.r11.u32);
	// stw r11,14640(r3)
	PPC_STORE_U32(ctx.r3.u32 + 14640, ctx.r11.u32);
	// stw r11,14644(r3)
	PPC_STORE_U32(ctx.r3.u32 + 14644, ctx.r11.u32);
	// stw r11,14648(r3)
	PPC_STORE_U32(ctx.r3.u32 + 14648, ctx.r11.u32);
	// stw r11,14652(r3)
	PPC_STORE_U32(ctx.r3.u32 + 14652, ctx.r11.u32);
	// stw r11,14656(r3)
	PPC_STORE_U32(ctx.r3.u32 + 14656, ctx.r11.u32);
	// stw r11,14660(r3)
	PPC_STORE_U32(ctx.r3.u32 + 14660, ctx.r11.u32);
	// stw r11,14664(r3)
	PPC_STORE_U32(ctx.r3.u32 + 14664, ctx.r11.u32);
	// stw r11,14668(r3)
	PPC_STORE_U32(ctx.r3.u32 + 14668, ctx.r11.u32);
	// stw r11,14672(r3)
	PPC_STORE_U32(ctx.r3.u32 + 14672, ctx.r11.u32);
	// stw r11,14676(r3)
	PPC_STORE_U32(ctx.r3.u32 + 14676, ctx.r11.u32);
	// stw r11,14680(r3)
	PPC_STORE_U32(ctx.r3.u32 + 14680, ctx.r11.u32);
	// stw r11,14704(r3)
	PPC_STORE_U32(ctx.r3.u32 + 14704, ctx.r11.u32);
	// stw r11,14708(r3)
	PPC_STORE_U32(ctx.r3.u32 + 14708, ctx.r11.u32);
	// stw r11,14712(r3)
	PPC_STORE_U32(ctx.r3.u32 + 14712, ctx.r11.u32);
	// stw r11,14716(r3)
	PPC_STORE_U32(ctx.r3.u32 + 14716, ctx.r11.u32);
	// stw r10,14684(r3)
	PPC_STORE_U32(ctx.r3.u32 + 14684, ctx.r10.u32);
	// stw r9,14692(r3)
	PPC_STORE_U32(ctx.r3.u32 + 14692, ctx.r9.u32);
	// stw r9,14696(r3)
	PPC_STORE_U32(ctx.r3.u32 + 14696, ctx.r9.u32);
	// stw r9,14700(r3)
	PPC_STORE_U32(ctx.r3.u32 + 14700, ctx.r9.u32);
	// stw r10,14688(r3)
	PPC_STORE_U32(ctx.r3.u32 + 14688, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F1D0E0"))) PPC_WEAK_FUNC(sub_82F1D0E0);
PPC_FUNC_IMPL(__imp__sub_82F1D0E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7650
	ctx.lr = 0x82F1D0E8;
	__savegprlr_18(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r26,0(r3)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r11,16729
	ctx.r11.s64 = 1096351744;
	// lis r5,22870
	ctx.r5.s64 = 1498808320;
	// lis r28,12849
	ctx.r28.s64 = 842072064;
	// ori r9,r11,21846
	ctx.r9.u64 = ctx.r11.u64 | 21846;
	// lis r8,22068
	ctx.r8.s64 = 1446248448;
	// lis r30,12593
	ctx.r30.s64 = 825294848;
	// lwz r11,16(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 16);
	// lis r25,14677
	ctx.r25.s64 = 961871872;
	// lis r23,21849
	ctx.r23.s64 = 1431896064;
	// lis r22,20532
	ctx.r22.s64 = 1345585152;
	// lis r10,22066
	ctx.r10.s64 = 1446117376;
	// lis r29,12889
	ctx.r29.s64 = 844693504;
	// lis r20,22101
	ctx.r20.s64 = 1448411136;
	// lis r19,12338
	ctx.r19.s64 = 808583168;
	// lis r18,12593
	ctx.r18.s64 = 825294848;
	// ori r4,r5,22869
	ctx.r4.u64 = ctx.r5.u64 | 22869;
	// ori r27,r28,22094
	ctx.r27.u64 = ctx.r28.u64 | 22094;
	// ori r6,r8,12592
	ctx.r6.u64 = ctx.r8.u64 | 12592;
	// ori r24,r30,13392
	ctx.r24.u64 = ctx.r30.u64 | 13392;
	// ori r28,r25,22105
	ctx.r28.u64 = ctx.r25.u64 | 22105;
	// ori r5,r23,22105
	ctx.r5.u64 = ctx.r23.u64 | 22105;
	// ori r21,r22,12850
	ctx.r21.u64 = ctx.r22.u64 | 12850;
	// ori r7,r10,12598
	ctx.r7.u64 = ctx.r10.u64 | 12598;
	// li r31,0
	ctx.r31.s64 = 0;
	// ori r8,r29,21849
	ctx.r8.u64 = ctx.r29.u64 | 21849;
	// ori r22,r20,22857
	ctx.r22.u64 = ctx.r20.u64 | 22857;
	// li r25,1
	ctx.r25.s64 = 1;
	// ori r23,r19,13385
	ctx.r23.u64 = ctx.r19.u64 | 13385;
	// ori r30,r18,22094
	ctx.r30.u64 = ctx.r18.u64 | 22094;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bgt cr6,0x82f1d1d8
	if (ctx.cr6.gt) goto loc_82F1D1D8;
	// beq cr6,0x82f1d250
	if (ctx.cr6.eq) goto loc_82F1D250;
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// bgt cr6,0x82f1d1ac
	if (ctx.cr6.gt) goto loc_82F1D1AC;
	// beq cr6,0x82f1d1a4
	if (ctx.cr6.eq) goto loc_82F1D1A4;
	// cmplw cr6,r11,r23
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r23.u32, ctx.xer);
	// bgt cr6,0x82f1d19c
	if (ctx.cr6.gt) goto loc_82F1D19C;
	// beq cr6,0x82f1d1a4
	if (ctx.cr6.eq) goto loc_82F1D1A4;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82f1d250
	if (ctx.cr6.eq) goto loc_82F1D250;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// beq cr6,0x82f1d250
	if (ctx.cr6.eq) goto loc_82F1D250;
	// b 0x82f1d254
	goto loc_82F1D254;
loc_82F1D19C:
	// cmplw cr6,r11,r24
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r24.u32, ctx.xer);
	// bne cr6,0x82f1d254
	if (!ctx.cr6.eq) goto loc_82F1D254;
loc_82F1D1A4:
	// stw r25,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r25.u32);
	// b 0x82f1d254
	goto loc_82F1D254;
loc_82F1D1AC:
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// bgt cr6,0x82f1d1cc
	if (ctx.cr6.gt) goto loc_82F1D1CC;
	// beq cr6,0x82f1d250
	if (ctx.cr6.eq) goto loc_82F1D250;
	// subf. r11,r27,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r27.s64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f1d1a4
	if (ctx.cr0.eq) goto loc_82F1D1A4;
	// cmplwi cr6,r11,11
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 11, ctx.xer);
	// beq cr6,0x82f1d1a4
	if (ctx.cr6.eq) goto loc_82F1D1A4;
	// b 0x82f1d254
	goto loc_82F1D254;
loc_82F1D1CC:
	// cmplw cr6,r11,r28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, ctx.xer);
	// beq cr6,0x82f1d1a4
	if (ctx.cr6.eq) goto loc_82F1D1A4;
	// b 0x82f1d254
	goto loc_82F1D254;
loc_82F1D1D8:
	// cmplw cr6,r11,r5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r5.u32, ctx.xer);
	// bgt cr6,0x82f1d228
	if (ctx.cr6.gt) goto loc_82F1D228;
	// beq cr6,0x82f1d250
	if (ctx.cr6.eq) goto loc_82F1D250;
	// lis r10,21553
	ctx.r10.s64 = 1412497408;
	// ori r10,r10,13401
	ctx.r10.u64 = ctx.r10.u64 | 13401;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x82f1d214
	if (ctx.cr6.gt) goto loc_82F1D214;
	// beq cr6,0x82f1d250
	if (ctx.cr6.eq) goto loc_82F1D250;
	// lis r10,20529
	ctx.r10.s64 = 1345388544;
	// ori r10,r10,13401
	ctx.r10.u64 = ctx.r10.u64 | 13401;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82f1d250
	if (ctx.cr6.eq) goto loc_82F1D250;
	// cmplw cr6,r11,r21
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r21.u32, ctx.xer);
	// beq cr6,0x82f1d1a4
	if (ctx.cr6.eq) goto loc_82F1D1A4;
	// b 0x82f1d254
	goto loc_82F1D254;
loc_82F1D214:
	// lis r10,21554
	ctx.r10.s64 = 1412562944;
	// ori r10,r10,13401
	ctx.r10.u64 = ctx.r10.u64 | 13401;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82f1d250
	if (ctx.cr6.eq) goto loc_82F1D250;
	// b 0x82f1d254
	goto loc_82F1D254;
loc_82F1D228:
	// cmplw cr6,r11,r22
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r22.u32, ctx.xer);
	// bgt cr6,0x82f1d248
	if (ctx.cr6.gt) goto loc_82F1D248;
	// beq cr6,0x82f1d1a4
	if (ctx.cr6.eq) goto loc_82F1D1A4;
	// cmplw cr6,r11,r7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, ctx.xer);
	// beq cr6,0x82f1d250
	if (ctx.cr6.eq) goto loc_82F1D250;
	// cmplw cr6,r11,r6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x82f1d250
	if (ctx.cr6.eq) goto loc_82F1D250;
	// b 0x82f1d254
	goto loc_82F1D254;
loc_82F1D248:
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// bne cr6,0x82f1d254
	if (!ctx.cr6.eq) goto loc_82F1D254;
loc_82F1D250:
	// stw r31,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r31.u32);
loc_82F1D254:
	// lwz r29,4(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// bgt cr6,0x82f1d2b0
	if (ctx.cr6.gt) goto loc_82F1D2B0;
	// beq cr6,0x82f1d2d4
	if (ctx.cr6.eq) goto loc_82F1D2D4;
	// cmplw cr6,r11,r24
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r24.u32, ctx.xer);
	// bgt cr6,0x82f1d294
	if (ctx.cr6.gt) goto loc_82F1D294;
	// beq cr6,0x82f1d28c
	if (ctx.cr6.eq) goto loc_82F1D28C;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82f1d2d4
	if (ctx.cr6.eq) goto loc_82F1D2D4;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// beq cr6,0x82f1d2d4
	if (ctx.cr6.eq) goto loc_82F1D2D4;
	// cmplw cr6,r11,r23
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r23.u32, ctx.xer);
	// bne cr6,0x82f1d2d8
	if (!ctx.cr6.eq) goto loc_82F1D2D8;
loc_82F1D28C:
	// stw r25,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r25.u32);
	// b 0x82f1d2d8
	goto loc_82F1D2D8;
loc_82F1D294:
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// beq cr6,0x82f1d28c
	if (ctx.cr6.eq) goto loc_82F1D28C;
	// subf. r11,r27,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r27.s64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f1d28c
	if (ctx.cr0.eq) goto loc_82F1D28C;
	// cmplwi cr6,r11,11
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 11, ctx.xer);
	// beq cr6,0x82f1d28c
	if (ctx.cr6.eq) goto loc_82F1D28C;
	// b 0x82f1d2d8
	goto loc_82F1D2D8;
loc_82F1D2B0:
	// cmplw cr6,r11,r7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r7.u32, ctx.xer);
	// bgt cr6,0x82f1d2f8
	if (ctx.cr6.gt) goto loc_82F1D2F8;
	// beq cr6,0x82f1d2d4
	if (ctx.cr6.eq) goto loc_82F1D2D4;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82f1d2d4
	if (ctx.cr6.eq) goto loc_82F1D2D4;
	// cmplw cr6,r11,r21
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r21.u32, ctx.xer);
	// beq cr6,0x82f1d28c
	if (ctx.cr6.eq) goto loc_82F1D28C;
	// cmplw cr6,r11,r5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r5.u32, ctx.xer);
	// bne cr6,0x82f1d2d8
	if (!ctx.cr6.eq) goto loc_82F1D2D8;
loc_82F1D2D4:
	// stw r31,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r31.u32);
loc_82F1D2D8:
	// stw r26,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r26.u32);
	// lwz r11,16(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82f1d314
	if (ctx.cr6.eq) goto loc_82F1D314;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// beq cr6,0x82f1d314
	if (ctx.cr6.eq) goto loc_82F1D314;
	// stw r25,14468(r3)
	PPC_STORE_U32(ctx.r3.u32 + 14468, ctx.r25.u32);
	// b 0x82f1d32c
	goto loc_82F1D32C;
loc_82F1D2F8:
	// cmplw cr6,r11,r6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r6.u32, ctx.xer);
	// beq cr6,0x82f1d2d4
	if (ctx.cr6.eq) goto loc_82F1D2D4;
	// cmplw cr6,r11,r22
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r22.u32, ctx.xer);
	// beq cr6,0x82f1d28c
	if (ctx.cr6.eq) goto loc_82F1D28C;
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x82f1d2d4
	if (ctx.cr6.eq) goto loc_82F1D2D4;
	// b 0x82f1d2d8
	goto loc_82F1D2D8;
loc_82F1D314:
	// lwz r11,8(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,-1
	ctx.r11.s64 = -1;
	// bgt cr6,0x82f1d328
	if (ctx.cr6.gt) goto loc_82F1D328;
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
loc_82F1D328:
	// stw r11,14468(r3)
	PPC_STORE_U32(ctx.r3.u32 + 14468, ctx.r11.u32);
loc_82F1D32C:
	// lwz r11,4(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
	// lis r10,12849
	ctx.r10.s64 = 842072064;
	// ori r10,r10,22105
	ctx.r10.u64 = ctx.r10.u64 | 22105;
	// stw r11,14512(r3)
	PPC_STORE_U32(ctx.r3.u32 + 14512, ctx.r11.u32);
	// lwz r9,8(r26)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// srawi r8,r9,31
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7FFFFFFF) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 31;
	// xor r7,r9,r8
	ctx.r7.u64 = ctx.r9.u64 ^ ctx.r8.u64;
	// subf r6,r8,r7
	ctx.r6.s64 = ctx.r7.s64 - ctx.r8.s64;
	// stw r6,14516(r3)
	PPC_STORE_U32(ctx.r3.u32 + 14516, ctx.r6.u32);
	// lwz r11,16(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 16);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x82f1d3bc
	if (ctx.cr6.gt) goto loc_82F1D3BC;
	// beq cr6,0x82f1d3d4
	if (ctx.cr6.eq) goto loc_82F1D3D4;
	// cmplw cr6,r11,r30
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r30.u32, ctx.xer);
	// bgt cr6,0x82f1d3a8
	if (ctx.cr6.gt) goto loc_82F1D3A8;
	// beq cr6,0x82f1d3d4
	if (ctx.cr6.eq) goto loc_82F1D3D4;
	// cmplw cr6,r11,r23
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r23.u32, ctx.xer);
	// beq cr6,0x82f1d3d4
	if (ctx.cr6.eq) goto loc_82F1D3D4;
	// cmplw cr6,r11,r24
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r24.u32, ctx.xer);
	// bne cr6,0x82f1d38c
	if (!ctx.cr6.eq) goto loc_82F1D38C;
loc_82F1D37C:
	// lwz r11,14512(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 14512);
	// srawi r9,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 2;
loc_82F1D384:
	// addze r8,r9
	temp.s64 = ctx.r9.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r8.s64 = temp.s64;
	// stw r8,14520(r3)
	PPC_STORE_U32(ctx.r3.u32 + 14520, ctx.r8.u32);
loc_82F1D38C:
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82f1d3e0
	if (ctx.cr6.eq) goto loc_82F1D3E0;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// beq cr6,0x82f1d3e0
	if (ctx.cr6.eq) goto loc_82F1D3E0;
	// stw r25,14472(r3)
	PPC_STORE_U32(ctx.r3.u32 + 14472, ctx.r25.u32);
	// b 0x82f1d3f8
	goto loc_82F1D3F8;
loc_82F1D3A8:
	// cmplw cr6,r11,r27
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r27.u32, ctx.xer);
	// bne cr6,0x82f1d38c
	if (!ctx.cr6.eq) goto loc_82F1D38C;
	// lwz r11,14512(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 14512);
	// stw r11,14520(r3)
	PPC_STORE_U32(ctx.r3.u32 + 14520, ctx.r11.u32);
	// b 0x82f1d38c
	goto loc_82F1D38C;
loc_82F1D3BC:
	// cmplw cr6,r11,r28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, ctx.xer);
	// beq cr6,0x82f1d37c
	if (ctx.cr6.eq) goto loc_82F1D37C;
	// cmplw cr6,r11,r21
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r21.u32, ctx.xer);
	// beq cr6,0x82f1d3d4
	if (ctx.cr6.eq) goto loc_82F1D3D4;
	// cmplw cr6,r11,r22
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r22.u32, ctx.xer);
	// bne cr6,0x82f1d38c
	if (!ctx.cr6.eq) goto loc_82F1D38C;
loc_82F1D3D4:
	// lwz r11,14512(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 14512);
	// srawi r9,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 1;
	// b 0x82f1d384
	goto loc_82F1D384;
loc_82F1D3E0:
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,-1
	ctx.r11.s64 = -1;
	// bgt cr6,0x82f1d3f4
	if (ctx.cr6.gt) goto loc_82F1D3F4;
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
loc_82F1D3F4:
	// stw r11,14472(r3)
	PPC_STORE_U32(ctx.r3.u32 + 14472, ctx.r11.u32);
loc_82F1D3F8:
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// stw r11,14476(r3)
	PPC_STORE_U32(ctx.r3.u32 + 14476, ctx.r11.u32);
	// lwz r9,8(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// srawi r8,r9,31
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7FFFFFFF) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 31;
	// xor r7,r9,r8
	ctx.r7.u64 = ctx.r9.u64 ^ ctx.r8.u64;
	// subf r6,r8,r7
	ctx.r6.s64 = ctx.r7.s64 - ctx.r8.s64;
	// stw r6,14480(r3)
	PPC_STORE_U32(ctx.r3.u32 + 14480, ctx.r6.u32);
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// cmplw cr6,r11,r27
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r27.u32, ctx.xer);
	// bgt cr6,0x82f1d448
	if (ctx.cr6.gt) goto loc_82F1D448;
	// beq cr6,0x82f1d43c
	if (ctx.cr6.eq) goto loc_82F1D43C;
	// cmplw cr6,r11,r23
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r23.u32, ctx.xer);
	// beq cr6,0x82f1d460
	if (ctx.cr6.eq) goto loc_82F1D460;
	// subf. r11,r24,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r24.s64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f1d460
	if (ctx.cr0.eq) goto loc_82F1D460;
	// cmplwi cr6,r11,8702
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8702, ctx.xer);
	// b 0x82f1d45c
	goto loc_82F1D45C;
loc_82F1D43C:
	// lwz r11,14476(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 14476);
	// stw r11,14484(r3)
	PPC_STORE_U32(ctx.r3.u32 + 14484, ctx.r11.u32);
	// b 0x82f1d470
	goto loc_82F1D470;
loc_82F1D448:
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82f1d460
	if (ctx.cr6.eq) goto loc_82F1D460;
	// cmplw cr6,r11,r21
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r21.u32, ctx.xer);
	// beq cr6,0x82f1d460
	if (ctx.cr6.eq) goto loc_82F1D460;
	// cmplw cr6,r11,r22
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r22.u32, ctx.xer);
loc_82F1D45C:
	// bne cr6,0x82f1d470
	if (!ctx.cr6.eq) goto loc_82F1D470;
loc_82F1D460:
	// lwz r11,14476(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 14476);
	// srawi r10,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 1;
	// addze r9,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r9.s64 = temp.s64;
	// stw r9,14484(r3)
	PPC_STORE_U32(ctx.r3.u32 + 14484, ctx.r9.u32);
loc_82F1D470:
	// lwz r11,14632(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 14632);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
	// bne cr6,0x82f1d484
	if (!ctx.cr6.eq) goto loc_82F1D484;
	// lwz r7,8(r29)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
loc_82F1D484:
	// lwz r11,14628(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 14628);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// bne cr6,0x82f1d498
	if (!ctx.cr6.eq) goto loc_82F1D498;
	// lwz r6,4(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
loc_82F1D498:
	// lwz r11,14624(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 14624);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82f1d4a8
	if (!ctx.cr6.eq) goto loc_82F1D4A8;
	// lwz r11,8(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
loc_82F1D4A8:
	// lwz r4,14620(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 14620);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne cr6,0x82f1d4b8
	if (!ctx.cr6.eq) goto loc_82F1D4B8;
	// lwz r4,4(r26)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r26.u32 + 4);
loc_82F1D4B8:
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// bl 0x82f1c2d0
	ctx.lr = 0x82F1D4C0;
	sub_82F1C2D0(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82fa76a0
	__restgprlr_18(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F1D4C8"))) PPC_WEAK_FUNC(sub_82F1D4C8);
PPC_FUNC_IMPL(__imp__sub_82F1D4C8) {
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
	// lwz r11,12(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82f1d4f0
	if (!ctx.cr6.eq) goto loc_82F1D4F0;
	// lwz r11,52(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 52);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// stw r11,20(r5)
	PPC_STORE_U32(ctx.r5.u32 + 20, ctx.r11.u32);
	// b 0x82f1d53c
	goto loc_82F1D53C;
loc_82F1D4F0:
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82f1d53c
	if (!ctx.cr6.eq) goto loc_82F1D53C;
	// lwz r11,56(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 56);
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// stw r11,24(r5)
	PPC_STORE_U32(ctx.r5.u32 + 24, ctx.r11.u32);
	// beq cr6,0x82f1d514
	if (ctx.cr6.eq) goto loc_82F1D514;
	// stw r6,28(r5)
	PPC_STORE_U32(ctx.r5.u32 + 28, ctx.r6.u32);
	// b 0x82f1d520
	goto loc_82F1D520;
loc_82F1D514:
	// lwz r11,60(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 60);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// stw r11,28(r5)
	PPC_STORE_U32(ctx.r5.u32 + 28, ctx.r11.u32);
loc_82F1D520:
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82f1d530
	if (ctx.cr6.eq) goto loc_82F1D530;
	// stw r7,32(r5)
	PPC_STORE_U32(ctx.r5.u32 + 32, ctx.r7.u32);
	// b 0x82f1d53c
	goto loc_82F1D53C;
loc_82F1D530:
	// lwz r11,64(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 64);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// stw r11,32(r5)
	PPC_STORE_U32(ctx.r5.u32 + 32, ctx.r11.u32);
loc_82F1D53C:
	// lwz r11,16(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82f1d558
	if (!ctx.cr6.eq) goto loc_82F1D558;
	// lwz r11,68(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 68);
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// stw r11,36(r5)
	PPC_STORE_U32(ctx.r5.u32 + 36, ctx.r11.u32);
	// b 0x82f1d57c
	goto loc_82F1D57C;
loc_82F1D558:
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82f1d57c
	if (!ctx.cr6.eq) goto loc_82F1D57C;
	// lwz r10,72(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 72);
	// lwz r11,76(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 76);
	// add r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 + ctx.r4.u64;
	// stw r4,40(r5)
	PPC_STORE_U32(ctx.r5.u32 + 40, ctx.r4.u32);
	// add r9,r11,r4
	ctx.r9.u64 = ctx.r11.u64 + ctx.r4.u64;
	// stw r10,44(r5)
	PPC_STORE_U32(ctx.r5.u32 + 44, ctx.r10.u32);
	// stw r9,48(r5)
	PPC_STORE_U32(ctx.r5.u32 + 48, ctx.r9.u32);
loc_82F1D57C:
	// lwz r11,14556(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 14556);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x82f1d590
	if (!ctx.cr6.eq) goto loc_82F1D590;
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// bl 0x82f1ca00
	ctx.lr = 0x82F1D590;
	sub_82F1CA00(ctx, base);
loc_82F1D590:
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

__attribute__((alias("__imp__sub_82F1D5A4"))) PPC_WEAK_FUNC(sub_82F1D5A4);
PPC_FUNC_IMPL(__imp__sub_82F1D5A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F1D5A8"))) PPC_WEAK_FUNC(sub_82F1D5A8);
PPC_FUNC_IMPL(__imp__sub_82F1D5A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x82F1D5B0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r30,16(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r29,16(r10)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r10.u32 + 16);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x82f1d5d8
	if (ctx.cr6.eq) goto loc_82F1D5D8;
	// cmpwi cr6,r30,3
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 3, ctx.xer);
	// bne cr6,0x82f1d5e0
	if (!ctx.cr6.eq) goto loc_82F1D5E0;
loc_82F1D5D8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f1b7e8
	ctx.lr = 0x82F1D5E0;
	sub_82F1B7E8(ctx, base);
loc_82F1D5E0:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq cr6,0x82f1d5f0
	if (ctx.cr6.eq) goto loc_82F1D5F0;
	// cmpwi cr6,r29,3
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 3, ctx.xer);
	// bne cr6,0x82f1d5f8
	if (!ctx.cr6.eq) goto loc_82F1D5F8;
loc_82F1D5F0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f1b670
	ctx.lr = 0x82F1D5F8;
	sub_82F1B670(ctx, base);
loc_82F1D5F8:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne cr6,0x82f1d610
	if (!ctx.cr6.eq) goto loc_82F1D610;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lhz r10,14(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 14);
	// cmplwi cr6,r10,8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 8, ctx.xer);
	// beq cr6,0x82f1d628
	if (ctx.cr6.eq) goto loc_82F1D628;
loc_82F1D610:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne cr6,0x82f1d630
	if (!ctx.cr6.eq) goto loc_82F1D630;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lhz r10,14(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 14);
	// cmplwi cr6,r10,8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 8, ctx.xer);
	// bne cr6,0x82f1d630
	if (!ctx.cr6.eq) goto loc_82F1D630;
loc_82F1D628:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f1ba70
	ctx.lr = 0x82F1D630;
	sub_82F1BA70(ctx, base);
loc_82F1D630:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// bl 0x82f1be58
	ctx.lr = 0x82F1D63C;
	sub_82F1BE58(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82f1d6a0
	if (!ctx.cr6.eq) goto loc_82F1D6A0;
	// lwz r11,108(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// lwz r10,116(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// rlwinm r8,r11,16,0,15
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF0000;
	// lwz r9,112(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// lwz r7,120(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// rlwinm r6,r10,16,0,15
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xFFFF0000;
	// or r5,r8,r11
	ctx.r5.u64 = ctx.r8.u64 | ctx.r11.u64;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// or r11,r6,r10
	ctx.r11.u64 = ctx.r6.u64 | ctx.r10.u64;
	// stw r5,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r5.u32);
	// stw r9,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r9.u32);
	// stw r7,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r7.u32);
	// stw r11,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r11.u32);
	// bl 0x82f1be58
	ctx.lr = 0x82F1D67C;
	sub_82F1BE58(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82f1d6a0
	if (!ctx.cr6.eq) goto loc_82F1D6A0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f1bf78
	ctx.lr = 0x82F1D68C;
	sub_82F1BF78(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82f1d6a0
	if (!ctx.cr6.eq) goto loc_82F1D6A0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f1d0e0
	ctx.lr = 0x82F1D69C;
	sub_82F1D0E0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_82F1D6A0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F1D6A8"))) PPC_WEAK_FUNC(sub_82F1D6A8);
PPC_FUNC_IMPL(__imp__sub_82F1D6A8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// lwz r9,8(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// stw r9,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r9.u32);
	// lwz r8,12(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// stw r8,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F1D6CC"))) PPC_WEAK_FUNC(sub_82F1D6CC);
PPC_FUNC_IMPL(__imp__sub_82F1D6CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F1D6D0"))) PPC_WEAK_FUNC(sub_82F1D6D0);
PPC_FUNC_IMPL(__imp__sub_82F1D6D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x82F1D6D8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,32767
	ctx.r11.s64 = 2147418112;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// ori r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 65535;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82f1d6f8
	if (!ctx.cr6.gt) goto loc_82F1D6F8;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82f1d73c
	goto loc_82F1D73C;
loc_82F1D6F8:
	// rlwinm r30,r4,1,0,30
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r11,r30,21
	ctx.r11.s64 = ctx.r30.s64 + 21;
	// rlwinm r3,r11,0,0,27
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF0;
	// bl 0x82e8e030
	ctx.lr = 0x82F1D708;
	sub_82E8E030(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82f1d738
	if (ctx.cr0.eq) goto loc_82F1D738;
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82f1d730
	if (ctx.cr6.eq) goto loc_82F1D730;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82fa77c0
	ctx.lr = 0x82F1D730;
	sub_82FA77C0(ctx, base);
loc_82F1D730:
	// li r11,0
	ctx.r11.s64 = 0;
	// sthx r11,r30,r31
	PPC_STORE_U16(ctx.r30.u32 + ctx.r31.u32, ctx.r11.u16);
loc_82F1D738:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82F1D73C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F1D744"))) PPC_WEAK_FUNC(sub_82F1D744);
PPC_FUNC_IMPL(__imp__sub_82F1D744) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F1D748"))) PPC_WEAK_FUNC(sub_82F1D748);
PPC_FUNC_IMPL(__imp__sub_82F1D748) {
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
	// beq cr6,0x82f1d778
	if (ctx.cr6.eq) goto loc_82F1D778;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82fa3bb8
	ctx.lr = 0x82F1D76C;
	sub_82FA3BB8(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f1d6d0
	ctx.lr = 0x82F1D778;
	sub_82F1D6D0(ctx, base);
loc_82F1D778:
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

__attribute__((alias("__imp__sub_82F1D78C"))) PPC_WEAK_FUNC(sub_82F1D78C);
PPC_FUNC_IMPL(__imp__sub_82F1D78C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F1D790"))) PPC_WEAK_FUNC(sub_82F1D790);
PPC_FUNC_IMPL(__imp__sub_82F1D790) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// addi r3,r3,-4
	ctx.r3.s64 = ctx.r3.s64 + -4;
	// b 0x82e8ee18
	sub_82E8EE18(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F1D7A0"))) PPC_WEAK_FUNC(sub_82F1D7A0);
PPC_FUNC_IMPL(__imp__sub_82F1D7A0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F1D7A4"))) PPC_WEAK_FUNC(sub_82F1D7A4);
PPC_FUNC_IMPL(__imp__sub_82F1D7A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F1D7A8"))) PPC_WEAK_FUNC(sub_82F1D7A8);
PPC_FUNC_IMPL(__imp__sub_82F1D7A8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x82F1D7B0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,-6
	ctx.r11.s64 = -6;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82f1d7d0
	if (!ctx.cr6.gt) goto loc_82F1D7D0;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82f1d81c
	goto loc_82F1D81C;
loc_82F1D7D0:
	// addi r11,r30,21
	ctx.r11.s64 = ctx.r30.s64 + 21;
	// rlwinm r3,r11,0,0,27
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFF0;
	// bl 0x82e8e030
	ctx.lr = 0x82F1D7DC;
	sub_82E8E030(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82f1d818
	if (ctx.cr0.eq) goto loc_82F1D818;
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82f1d804
	if (ctx.cr6.eq) goto loc_82F1D804;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82fa77c0
	ctx.lr = 0x82F1D804;
	sub_82FA77C0(ctx, base);
loc_82F1D804:
	// addi r10,r30,1
	ctx.r10.s64 = ctx.r30.s64 + 1;
	// li r11,0
	ctx.r11.s64 = 0;
	// rlwinm r10,r10,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// stbx r11,r31,r30
	PPC_STORE_U8(ctx.r31.u32 + ctx.r30.u32, ctx.r11.u8);
	// sthx r11,r10,r31
	PPC_STORE_U16(ctx.r10.u32 + ctx.r31.u32, ctx.r11.u16);
loc_82F1D818:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82F1D81C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F1D824"))) PPC_WEAK_FUNC(sub_82F1D824);
PPC_FUNC_IMPL(__imp__sub_82F1D824) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F1D828"))) PPC_WEAK_FUNC(sub_82F1D828);
PPC_FUNC_IMPL(__imp__sub_82F1D828) {
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
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82f1d850
	if (!ctx.cr6.eq) goto loc_82F1D850;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// b 0x82f1d870
	goto loc_82F1D870;
loc_82F1D850:
	// lwz r4,-4(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
	// bl 0x82f1d7a8
	ctx.lr = 0x82F1D858;
	sub_82F1D7A8(ctx, base);
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
loc_82F1D870:
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

__attribute__((alias("__imp__sub_82F1D884"))) PPC_WEAK_FUNC(sub_82F1D884);
PPC_FUNC_IMPL(__imp__sub_82F1D884) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F1D888"))) PPC_WEAK_FUNC(sub_82F1D888);
PPC_FUNC_IMPL(__imp__sub_82F1D888) {
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
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// li r4,0
	ctx.r4.s64 = 0;
	// beq cr6,0x82f1d8ac
	if (ctx.cr6.eq) goto loc_82F1D8AC;
	// lwz r4,-4(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + -4);
loc_82F1D8AC:
	// bl 0x82f1d7a8
	ctx.lr = 0x82F1D8B0;
	sub_82F1D7A8(ctx, base);
	// addic r10,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r10.s64 = ctx.r3.s64 + -1;
	// lis r11,-32761
	ctx.r11.s64 = -2147024896;
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// ori r11,r11,14
	ctx.r11.u64 = ctx.r11.u64 | 14;
	// and r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 & ctx.r11.u64;
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

__attribute__((alias("__imp__sub_82F1D8DC"))) PPC_WEAK_FUNC(sub_82F1D8DC);
PPC_FUNC_IMPL(__imp__sub_82F1D8DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F1D8E0"))) PPC_WEAK_FUNC(sub_82F1D8E0);
PPC_FUNC_IMPL(__imp__sub_82F1D8E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x82F1D8E8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r5,r7
	ctx.r5.u64 = ctx.r7.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// lwz r11,68(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F1D910;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82f1d9fc
	if (ctx.cr0.lt) goto loc_82F1D9FC;
	// cmpwi cr6,r31,6
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 6, ctx.xer);
	// bgt cr6,0x82f1d964
	if (ctx.cr6.gt) goto loc_82F1D964;
	// beq cr6,0x82f1d954
	if (ctx.cr6.eq) goto loc_82F1D954;
	// cmplwi cr6,r31,1
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 1, ctx.xer);
	// blt cr6,0x82f1d9e4
	if (ctx.cr6.lt) goto loc_82F1D9E4;
	// beq cr6,0x82f1d9d0
	if (ctx.cr6.eq) goto loc_82F1D9D0;
	// cmplwi cr6,r31,3
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 3, ctx.xer);
	// blt cr6,0x82f1d9b0
	if (ctx.cr6.lt) goto loc_82F1D9B0;
	// beq cr6,0x82f1d9c0
	if (ctx.cr6.eq) goto loc_82F1D9C0;
	// cmplwi cr6,r31,5
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 5, ctx.xer);
	// bge cr6,0x82f1d990
	if (!ctx.cr6.lt) goto loc_82F1D990;
loc_82F1D944:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82e951b0
	ctx.lr = 0x82F1D950;
	sub_82E951B0(ctx, base);
	// b 0x82f1d9fc
	goto loc_82F1D9FC;
loc_82F1D954:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82e95128
	ctx.lr = 0x82F1D960;
	sub_82E95128(ctx, base);
	// b 0x82f1d9fc
	goto loc_82F1D9FC;
loc_82F1D964:
	// cmplwi cr6,r31,32768
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 32768, ctx.xer);
	// beq cr6,0x82f1d9e4
	if (ctx.cr6.eq) goto loc_82F1D9E4;
	// cmplwi cr6,r31,32769
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 32769, ctx.xer);
	// beq cr6,0x82f1d9d0
	if (ctx.cr6.eq) goto loc_82F1D9D0;
	// cmplwi cr6,r31,32770
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 32770, ctx.xer);
	// beq cr6,0x82f1d9b0
	if (ctx.cr6.eq) goto loc_82F1D9B0;
	// cmplwi cr6,r31,32771
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 32771, ctx.xer);
	// beq cr6,0x82f1d9c0
	if (ctx.cr6.eq) goto loc_82F1D9C0;
	// cmplwi cr6,r31,32772
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 32772, ctx.xer);
	// beq cr6,0x82f1d944
	if (ctx.cr6.eq) goto loc_82F1D944;
	// cmplwi cr6,r31,32773
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 32773, ctx.xer);
loc_82F1D990:
	// beq cr6,0x82f1d9a0
	if (ctx.cr6.eq) goto loc_82F1D9A0;
loc_82F1D994:
	// lis r3,-16371
	ctx.r3.s64 = -1072889856;
	// ori r3,r3,15002
	ctx.r3.u64 = ctx.r3.u64 | 15002;
	// b 0x82f1d9fc
	goto loc_82F1D9FC;
loc_82F1D9A0:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82e95240
	ctx.lr = 0x82F1D9AC;
	sub_82E95240(ctx, base);
	// b 0x82f1d9fc
	goto loc_82F1D9FC;
loc_82F1D9B0:
	// cmplwi cr6,r28,2
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 2, ctx.xer);
	// beq cr6,0x82f1d9a0
	if (ctx.cr6.eq) goto loc_82F1D9A0;
	// cmplwi cr6,r28,4
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 4, ctx.xer);
	// bne cr6,0x82f1d994
	if (!ctx.cr6.eq) goto loc_82F1D994;
loc_82F1D9C0:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82e97908
	ctx.lr = 0x82F1D9CC;
	sub_82E97908(ctx, base);
	// b 0x82f1d9fc
	goto loc_82F1D9FC;
loc_82F1D9D0:
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82e95328
	ctx.lr = 0x82F1D9E0;
	sub_82E95328(ctx, base);
	// b 0x82f1d9fc
	goto loc_82F1D9FC;
loc_82F1D9E4:
	// clrlwi. r11,r28,31
	ctx.r11.u64 = ctx.r28.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82f1d994
	if (!ctx.cr0.eq) goto loc_82F1D994;
	// rlwinm r5,r28,31,1,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 31) & 0x7FFFFFFF;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82e952a8
	ctx.lr = 0x82F1D9FC;
	sub_82E952A8(ctx, base);
loc_82F1D9FC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F1DA04"))) PPC_WEAK_FUNC(sub_82F1DA04);
PPC_FUNC_IMPL(__imp__sub_82F1DA04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F1DA08"))) PPC_WEAK_FUNC(sub_82F1DA08);
PPC_FUNC_IMPL(__imp__sub_82F1DA08) {
	PPC_FUNC_PROLOGUE();
	// lis r10,0
	ctx.r10.s64 = 0;
	// li r11,0
	ctx.r11.s64 = 0;
	// ori r10,r10,32769
	ctx.r10.u64 = ctx.r10.u64 | 32769;
	// cmpw cr6,r4,r10
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r10.s32, ctx.xer);
	// bgt cr6,0x82f1da5c
	if (ctx.cr6.gt) goto loc_82F1DA5C;
	// lis r10,0
	ctx.r10.s64 = 0;
	// ori r10,r10,32768
	ctx.r10.u64 = ctx.r10.u64 | 32768;
	// cmpw cr6,r4,r10
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x82f1da54
	if (!ctx.cr6.lt) goto loc_82F1DA54;
	// cmplwi cr6,r4,2
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 2, ctx.xer);
	// blt cr6,0x82f1da54
	if (ctx.cr6.lt) goto loc_82F1DA54;
	// beq cr6,0x82f1da9c
	if (ctx.cr6.eq) goto loc_82F1DA9C;
	// cmplwi cr6,r4,4
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 4, ctx.xer);
	// blt cr6,0x82f1da94
	if (ctx.cr6.lt) goto loc_82F1DA94;
	// beq cr6,0x82f1da8c
	if (ctx.cr6.eq) goto loc_82F1DA8C;
	// cmplwi cr6,r4,6
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 6, ctx.xer);
	// blt cr6,0x82f1db14
	if (ctx.cr6.lt) goto loc_82F1DB14;
	// beq cr6,0x82f1da84
	if (ctx.cr6.eq) goto loc_82F1DA84;
	// b 0x82f1db18
	goto loc_82F1DB18;
loc_82F1DA54:
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// b 0x82f1db18
	goto loc_82F1DB18;
loc_82F1DA5C:
	// cmplwi cr6,r4,32770
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 32770, ctx.xer);
	// beq cr6,0x82f1da9c
	if (ctx.cr6.eq) goto loc_82F1DA9C;
	// cmplwi cr6,r4,32771
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 32771, ctx.xer);
	// beq cr6,0x82f1da94
	if (ctx.cr6.eq) goto loc_82F1DA94;
	// cmplwi cr6,r4,32772
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 32772, ctx.xer);
	// beq cr6,0x82f1da8c
	if (ctx.cr6.eq) goto loc_82F1DA8C;
	// cmplwi cr6,r4,32773
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 32773, ctx.xer);
	// beq cr6,0x82f1db14
	if (ctx.cr6.eq) goto loc_82F1DB14;
	// cmplwi cr6,r4,32774
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 32774, ctx.xer);
	// bne cr6,0x82f1db18
	if (!ctx.cr6.eq) goto loc_82F1DB18;
loc_82F1DA84:
	// li r11,16
	ctx.r11.s64 = 16;
	// b 0x82f1db18
	goto loc_82F1DB18;
loc_82F1DA8C:
	// li r11,8
	ctx.r11.s64 = 8;
	// b 0x82f1db18
	goto loc_82F1DB18;
loc_82F1DA94:
	// li r11,4
	ctx.r11.s64 = 4;
	// b 0x82f1db18
	goto loc_82F1DB18;
loc_82F1DA9C:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r9,r3,16
	ctx.r9.s64 = ctx.r3.s64 + 16;
	// addi r11,r11,28048
	ctx.r11.s64 = ctx.r11.s64 + 28048;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// addi r8,r11,16
	ctx.r8.s64 = ctx.r11.s64 + 16;
loc_82F1DAB0:
	// lbz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r7,r6,r7
	ctx.r7.s64 = ctx.r7.s64 - ctx.r6.s64;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne 0x82f1dad0
	if (!ctx.cr0.eq) goto loc_82F1DAD0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x82f1dab0
	if (!ctx.cr6.eq) goto loc_82F1DAB0;
loc_82F1DAD0:
	// cmpwi r7,0
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq 0x82f1db14
	if (ctx.cr0.eq) goto loc_82F1DB14;
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// addi r11,r11,28064
	ctx.r11.s64 = ctx.r11.s64 + 28064;
	// addi r8,r11,16
	ctx.r8.s64 = ctx.r11.s64 + 16;
loc_82F1DAE8:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r9,r7,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r7.s64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82f1db08
	if (!ctx.cr0.eq) goto loc_82F1DB08;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x82f1dae8
	if (!ctx.cr6.eq) goto loc_82F1DAE8;
loc_82F1DB08:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// li r11,4
	ctx.r11.s64 = 4;
	// bne 0x82f1db18
	if (!ctx.cr0.eq) goto loc_82F1DB18;
loc_82F1DB14:
	// li r11,2
	ctx.r11.s64 = 2;
loc_82F1DB18:
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82f1db34
	if (ctx.cr6.eq) goto loc_82F1DB34;
	// cmplw cr6,r5,r11
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82f1db34
	if (ctx.cr6.eq) goto loc_82F1DB34;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// blr 
	return;
loc_82F1DB34:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F1DB3C"))) PPC_WEAK_FUNC(sub_82F1DB3C);
PPC_FUNC_IMPL(__imp__sub_82F1DB3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F1DB40"))) PPC_WEAK_FUNC(sub_82F1DB40);
PPC_FUNC_IMPL(__imp__sub_82F1DB40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x82F1DB48;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82f1dc1c
	if (ctx.cr6.eq) goto loc_82F1DC1C;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82f1dc1c
	if (ctx.cr6.eq) goto loc_82F1DC1C;
	// lhz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// li r28,0
	ctx.r28.s64 = 0;
	// lwz r3,12(r5)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	// mr r29,r28
	ctx.r29.u64 = ctx.r28.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// sth r11,0(r5)
	PPC_STORE_U16(ctx.r5.u32 + 0, ctx.r11.u16);
	// lhz r11,2(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 2);
	// sth r11,2(r5)
	PPC_STORE_U16(ctx.r5.u32 + 2, ctx.r11.u16);
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// stw r11,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r11.u32);
	// beq cr6,0x82f1dbc0
	if (ctx.cr6.eq) goto loc_82F1DBC0;
	// lwz r4,12(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82f1dbc0
	if (ctx.cr6.eq) goto loc_82F1DBC0;
	// lhz r5,8(r30)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r30.u32 + 8);
	// lhz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 8);
	// cmplw cr6,r11,r5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r5.u32, ctx.xer);
	// blt cr6,0x82f1dbb4
	if (ctx.cr6.lt) goto loc_82F1DBB4;
	// bl 0x82fa77c0
	ctx.lr = 0x82F1DBB0;
	sub_82FA77C0(ctx, base);
	// b 0x82f1dbc4
	goto loc_82F1DBC4;
loc_82F1DBB4:
	// lis r29,-16371
	ctx.r29.s64 = -1072889856;
	// ori r29,r29,14001
	ctx.r29.u64 = ctx.r29.u64 | 14001;
	// b 0x82f1dbc4
	goto loc_82F1DBC4;
loc_82F1DBC0:
	// stw r28,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r28.u32);
loc_82F1DBC4:
	// lhz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 8);
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// sth r11,8(r31)
	PPC_STORE_U16(ctx.r31.u32 + 8, ctx.r11.u16);
	// beq cr6,0x82f1dc08
	if (ctx.cr6.eq) goto loc_82F1DC08;
	// lwz r4,20(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82f1dc08
	if (ctx.cr6.eq) goto loc_82F1DC08;
	// lwz r5,16(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplw cr6,r11,r5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r5.u32, ctx.xer);
	// blt cr6,0x82f1dbfc
	if (ctx.cr6.lt) goto loc_82F1DBFC;
	// bl 0x82fa77c0
	ctx.lr = 0x82F1DBF8;
	sub_82FA77C0(ctx, base);
	// b 0x82f1dc0c
	goto loc_82F1DC0C;
loc_82F1DBFC:
	// lis r29,-16371
	ctx.r29.s64 = -1072889856;
	// ori r29,r29,14001
	ctx.r29.u64 = ctx.r29.u64 | 14001;
	// b 0x82f1dc0c
	goto loc_82F1DC0C;
loc_82F1DC08:
	// stw r28,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r28.u32);
loc_82F1DC0C:
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// b 0x82f1dc24
	goto loc_82F1DC24;
loc_82F1DC1C:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
loc_82F1DC24:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F1DC2C"))) PPC_WEAK_FUNC(sub_82F1DC2C);
PPC_FUNC_IMPL(__imp__sub_82F1DC2C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F1DC30"))) PPC_WEAK_FUNC(sub_82F1DC30);
PPC_FUNC_IMPL(__imp__sub_82F1DC30) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82f1dc40
	if (!ctx.cr6.eq) goto loc_82F1DC40;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82F1DC40:
	// lhz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 8);
	// lwz r10,16(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r3,r11,6
	ctx.r3.s64 = ctx.r11.s64 + 6;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F1DC54"))) PPC_WEAK_FUNC(sub_82F1DC54);
PPC_FUNC_IMPL(__imp__sub_82F1DC54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F1DC58"))) PPC_WEAK_FUNC(sub_82F1DC58);
PPC_FUNC_IMPL(__imp__sub_82F1DC58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7674
	ctx.lr = 0x82F1DC60;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r3,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r3.u32);
	// li r27,0
	ctx.r27.s64 = 0;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82f1de10
	if (ctx.cr6.eq) goto loc_82F1DE10;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82f1de10
	if (ctx.cr6.eq) goto loc_82F1DE10;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82f1de10
	if (ctx.cr6.eq) goto loc_82F1DE10;
	// stw r27,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r27.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// cmpwi cr6,r11,6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 6, ctx.xer);
	// lwz r30,16(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// lwz r10,20(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 20);
	// bgt cr6,0x82f1dd58
	if (ctx.cr6.gt) goto loc_82F1DD58;
	// beq cr6,0x82f1dd10
	if (ctx.cr6.eq) goto loc_82F1DD10;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x82f1ddd8
	if (ctx.cr6.lt) goto loc_82F1DDD8;
	// beq cr6,0x82f1ddc0
	if (ctx.cr6.eq) goto loc_82F1DDC0;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// blt cr6,0x82f1dda0
	if (ctx.cr6.lt) goto loc_82F1DDA0;
	// beq cr6,0x82f1ddb0
	if (ctx.cr6.eq) goto loc_82F1DDB0;
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// bge cr6,0x82f1dd84
	if (!ctx.cr6.lt) goto loc_82F1DD84;
loc_82F1DCCC:
	// ld r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// rlwinm r9,r11,8,24,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF;
	// rlwinm r8,r10,8,24,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFF;
	// rlwimi r9,r11,24,16,23
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r11.u32, 24) & 0xFF00) | (ctx.r9.u64 & 0xFFFFFFFFFFFF00FF);
	// rlwimi r8,r10,24,16,23
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r10.u32, 24) & 0xFF00) | (ctx.r8.u64 & 0xFFFFFFFFFFFF00FF);
	// rlwimi r9,r11,8,8,15
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r11.u32, 8) & 0xFF0000) | (ctx.r9.u64 & 0xFFFFFFFFFF00FFFF);
	// rlwimi r8,r10,8,8,15
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r10.u32, 8) & 0xFF0000) | (ctx.r8.u64 & 0xFFFFFFFFFF00FFFF);
	// rlwimi r9,r11,24,0,7
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r11.u32, 24) & 0xFF000000) | (ctx.r9.u64 & 0xFFFFFFFF00FFFFFF);
	// rlwimi r8,r10,24,0,7
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r10.u32, 24) & 0xFF000000) | (ctx.r8.u64 & 0xFFFFFFFF00FFFFFF);
	// clrldi r11,r9,32
	ctx.r11.u64 = ctx.r9.u64 & 0xFFFFFFFF;
	// rldimi r11,r8,32,0
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r8.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r11.u64 & 0xFFFFFFFF);
	// std r11,0(r31)
	PPC_STORE_U64(ctx.r31.u32 + 0, ctx.r11.u64);
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// b 0x82f1de00
	goto loc_82F1DE00;
loc_82F1DD10:
	// lhz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r10.u32 + 4);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lhz r9,6(r10)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r10.u32 + 6);
	// li r5,16
	ctx.r5.s64 = 16;
	// lwbrx r7,0,r10
	ctx.r7.u64 = __builtin_bswap32(PPC_LOAD_U32(ctx.r10.u32));
	// rlwinm r8,r11,24,24,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFF;
	// rlwinm r6,r9,24,24,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 24) & 0xFF;
	// ld r10,8(r10)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r10.u32 + 8);
	// rlwimi r8,r11,8,16,23
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r11.u32, 8) & 0xFF00) | (ctx.r8.u64 & 0xFFFFFFFFFFFF00FF);
	// rlwimi r6,r9,8,16,23
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r9.u32, 8) & 0xFF00) | (ctx.r6.u64 & 0xFFFFFFFFFFFF00FF);
	// sth r8,84(r1)
	PPC_STORE_U16(ctx.r1.u32 + 84, ctx.r8.u16);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r7,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r7.u32);
	// sth r6,86(r1)
	PPC_STORE_U16(ctx.r1.u32 + 86, ctx.r6.u16);
	// std r10,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r10.u64);
	// bl 0x82fa77c0
	ctx.lr = 0x82F1DD50;
	sub_82FA77C0(ctx, base);
	// addi r31,r31,16
	ctx.r31.s64 = ctx.r31.s64 + 16;
	// b 0x82f1de00
	goto loc_82F1DE00;
loc_82F1DD58:
	// cmplwi cr6,r11,32768
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32768, ctx.xer);
	// beq cr6,0x82f1ddd8
	if (ctx.cr6.eq) goto loc_82F1DDD8;
	// cmplwi cr6,r11,32769
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32769, ctx.xer);
	// beq cr6,0x82f1ddc0
	if (ctx.cr6.eq) goto loc_82F1DDC0;
	// cmplwi cr6,r11,32770
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32770, ctx.xer);
	// beq cr6,0x82f1dda0
	if (ctx.cr6.eq) goto loc_82F1DDA0;
	// cmplwi cr6,r11,32771
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32771, ctx.xer);
	// beq cr6,0x82f1ddb0
	if (ctx.cr6.eq) goto loc_82F1DDB0;
	// cmplwi cr6,r11,32772
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32772, ctx.xer);
	// beq cr6,0x82f1dccc
	if (ctx.cr6.eq) goto loc_82F1DCCC;
	// cmplwi cr6,r11,32773
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32773, ctx.xer);
loc_82F1DD84:
	// bne cr6,0x82f1dde0
	if (!ctx.cr6.eq) goto loc_82F1DDE0;
loc_82F1DD88:
	// lhz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// rlwinm r10,r11,24,24,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFF;
	// rlwimi r10,r11,8,16,23
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 8) & 0xFF00) | (ctx.r10.u64 & 0xFFFFFFFFFFFF00FF);
	// sth r10,0(r31)
	PPC_STORE_U16(ctx.r31.u32 + 0, ctx.r10.u16);
	// addi r31,r31,2
	ctx.r31.s64 = ctx.r31.s64 + 2;
	// b 0x82f1de00
	goto loc_82F1DE00;
loc_82F1DDA0:
	// cmplwi cr6,r30,2
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 2, ctx.xer);
	// beq cr6,0x82f1dd88
	if (ctx.cr6.eq) goto loc_82F1DD88;
	// cmplwi cr6,r30,4
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 4, ctx.xer);
	// bne cr6,0x82f1dde0
	if (!ctx.cr6.eq) goto loc_82F1DDE0;
loc_82F1DDB0:
	// lwbrx r11,0,r10
	ctx.r11.u64 = __builtin_bswap32(PPC_LOAD_U32(ctx.r10.u32));
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// b 0x82f1de00
	goto loc_82F1DE00;
loc_82F1DDC0:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82fa77c0
	ctx.lr = 0x82F1DDD0;
	sub_82FA77C0(ctx, base);
	// add r31,r30,r31
	ctx.r31.u64 = ctx.r30.u64 + ctx.r31.u64;
	// b 0x82f1de00
	goto loc_82F1DE00;
loc_82F1DDD8:
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f1ddec
	if (ctx.cr0.eq) goto loc_82F1DDEC;
loc_82F1DDE0:
	// lis r27,-16371
	ctx.r27.s64 = -1072889856;
	// ori r27,r27,15002
	ctx.r27.u64 = ctx.r27.u64 | 15002;
	// b 0x82f1de00
	goto loc_82F1DE00;
loc_82F1DDEC:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
	// addi r3,r1,164
	ctx.r3.s64 = ctx.r1.s64 + 164;
	// bl 0x82e95390
	ctx.lr = 0x82F1DDFC;
	sub_82E95390(ctx, base);
	// lwz r31,164(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
loc_82F1DE00:
	// subf r11,r28,r31
	ctx.r11.s64 = ctx.r31.s64 - ctx.r28.s64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// b 0x82f1de18
	goto loc_82F1DE18;
loc_82F1DE10:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
loc_82F1DE18:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82fa76c4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F1DE20"))) PPC_WEAK_FUNC(sub_82F1DE20);
PPC_FUNC_IMPL(__imp__sub_82F1DE20) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x82F1DE28;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82f1dedc
	if (ctx.cr6.eq) goto loc_82F1DEDC;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82f1dedc
	if (ctx.cr6.eq) goto loc_82F1DEDC;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x82f1dedc
	if (ctx.cr6.eq) goto loc_82F1DEDC;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r11,r5,2
	ctx.r11.s64 = ctx.r5.s64 + 2;
	// stw r30,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r30.u32);
	// addi r3,r1,164
	ctx.r3.s64 = ctx.r1.s64 + 164;
	// lhz r10,8(r4)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r4.u32 + 8);
	// rlwinm r9,r10,24,24,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFF;
	// rlwimi r9,r10,8,16,23
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 8) & 0xFF00) | (ctx.r9.u64 & 0xFFFFFFFFFFFF00FF);
	// stw r11,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r11.u32);
	// sth r9,0(r5)
	PPC_STORE_U16(ctx.r5.u32 + 0, ctx.r9.u16);
	// lhz r5,8(r4)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r4.u32 + 8);
	// lwz r4,12(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// bl 0x82e95390
	ctx.lr = 0x82F1DE7C;
	sub_82E95390(ctx, base);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// clrlwi r9,r9,16
	ctx.r9.u64 = ctx.r9.u32 & 0xFFFF;
	// lwz r11,164(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// lhz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 8);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// rlwinm r8,r9,24,24,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 24) & 0xFF;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// rlwimi r8,r9,8,16,23
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r9.u32, 8) & 0xFF00) | (ctx.r8.u64 & 0xFFFFFFFFFFFF00FF);
	// sth r8,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r8.u16);
	// lwz r9,16(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// clrlwi r9,r9,16
	ctx.r9.u64 = ctx.r9.u32 & 0xFFFF;
	// rlwinm r8,r9,24,24,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 24) & 0xFF;
	// addi r31,r10,6
	ctx.r31.s64 = ctx.r10.s64 + 6;
	// rlwimi r8,r9,8,16,23
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r9.u32, 8) & 0xFF00) | (ctx.r8.u64 & 0xFFFFFFFFFFFF00FF);
	// sthu r8,2(r11)
	ea = 2 + ctx.r11.u32;
	PPC_STORE_U16(ea, ctx.r8.u16);
	ctx.r11.u32 = ea;
	// addi r3,r11,2
	ctx.r3.s64 = ctx.r11.s64 + 2;
	// bl 0x82f1dc58
	ctx.lr = 0x82F1DEC4;
	sub_82F1DC58(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82f1dee4
	if (ctx.cr0.lt) goto loc_82F1DEE4;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// b 0x82f1dee4
	goto loc_82F1DEE4;
loc_82F1DEDC:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
loc_82F1DEE4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F1DEEC"))) PPC_WEAK_FUNC(sub_82F1DEEC);
PPC_FUNC_IMPL(__imp__sub_82F1DEEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F1DEF0"))) PPC_WEAK_FUNC(sub_82F1DEF0);
PPC_FUNC_IMPL(__imp__sub_82F1DEF0) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82f1df00
	if (!ctx.cr6.eq) goto loc_82F1DF00;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82F1DF00:
	// lhz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 8);
	// lwz r10,16(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 16);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r3,r11,12
	ctx.r3.s64 = ctx.r11.s64 + 12;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F1DF14"))) PPC_WEAK_FUNC(sub_82F1DF14);
PPC_FUNC_IMPL(__imp__sub_82F1DF14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F1DF18"))) PPC_WEAK_FUNC(sub_82F1DF18);
PPC_FUNC_IMPL(__imp__sub_82F1DF18) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa766c
	ctx.lr = 0x82F1DF20;
	__savegprlr_25(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82f1e02c
	if (ctx.cr6.eq) goto loc_82F1E02C;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82f1e02c
	if (ctx.cr6.eq) goto loc_82F1E02C;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x82f1e02c
	if (ctx.cr6.eq) goto loc_82F1E02C;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r11,r4,16
	ctx.r11.s64 = ctx.r4.s64 + 16;
	// stw r30,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r30.u32);
	// addi r3,r1,196
	ctx.r3.s64 = ctx.r1.s64 + 196;
	// lhz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// rlwinm r9,r10,24,24,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFF;
	// rlwimi r9,r10,8,16,23
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 8) & 0xFF00) | (ctx.r9.u64 & 0xFFFFFFFFFFFF00FF);
	// mr r28,r30
	ctx.r28.u64 = ctx.r30.u64;
	// sth r9,0(r5)
	PPC_STORE_U16(ctx.r5.u32 + 0, ctx.r9.u16);
	// lhz r10,2(r4)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r4.u32 + 2);
	// rlwinm r9,r10,24,24,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFF;
	// rlwimi r9,r10,8,16,23
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 8) & 0xFF00) | (ctx.r9.u64 & 0xFFFFFFFFFFFF00FF);
	// sthu r9,2(r5)
	ea = 2 + ctx.r5.u32;
	PPC_STORE_U16(ea, ctx.r9.u16);
	ctx.r5.u32 = ea;
	// lhz r10,8(r4)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r4.u32 + 8);
	// rlwinm r9,r10,24,24,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFF;
	// rlwimi r9,r10,8,16,23
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 8) & 0xFF00) | (ctx.r9.u64 & 0xFFFFFFFFFFFF00FF);
	// sthu r9,2(r5)
	ea = 2 + ctx.r5.u32;
	PPC_STORE_U16(ea, ctx.r9.u16);
	ctx.r5.u32 = ea;
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// rlwinm r9,r10,24,24,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFF;
	// rlwimi r9,r10,8,16,23
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 8) & 0xFF00) | (ctx.r9.u64 & 0xFFFFFFFFFFFF00FF);
	// sthu r9,2(r5)
	ea = 2 + ctx.r5.u32;
	PPC_STORE_U16(ea, ctx.r9.u16);
	ctx.r5.u32 = ea;
	// lwbrx r10,0,r11
	ctx.r10.u64 = __builtin_bswap32(PPC_LOAD_U32(ctx.r11.u32));
	// addi r11,r5,2
	ctx.r11.s64 = ctx.r5.s64 + 2;
	// addi r9,r11,4
	ctx.r9.s64 = ctx.r11.s64 + 4;
	// stw r10,2(r5)
	PPC_STORE_U32(ctx.r5.u32 + 2, ctx.r10.u32);
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
	// stw r9,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r9.u32);
	// lhz r5,8(r4)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r4.u32 + 8);
	// lwz r4,12(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// bl 0x82e95390
	ctx.lr = 0x82F1DFC4;
	sub_82E95390(ctx, base);
	// lhz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 8);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r27,r11,12
	ctx.r27.s64 = ctx.r11.s64 + 12;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// rlwinm. r11,r10,0,16,16
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x8000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f1dff8
	if (ctx.cr0.eq) goto loc_82F1DFF8;
	// lwz r11,600(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 600);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82f1dff8
	if (!ctx.cr6.eq) goto loc_82F1DFF8;
	// stb r30,0(r29)
	PPC_STORE_U8(ctx.r29.u32 + 0, ctx.r30.u8);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// stb r30,1(r29)
	PPC_STORE_U8(ctx.r29.u32 + 1, ctx.r30.u8);
	// b 0x82f1e014
	goto loc_82F1E014;
loc_82F1DFF8:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r3,196(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82f1dc58
	ctx.lr = 0x82F1E008;
	sub_82F1DC58(ctx, base);
	// mr. r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// blt 0x82f1e024
	if (ctx.cr0.lt) goto loc_82F1E024;
	// lwz r30,80(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_82F1E014:
	// add r11,r30,r27
	ctx.r11.u64 = ctx.r30.u64 + ctx.r27.u64;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// blt cr6,0x82f1e024
	if (ctx.cr6.lt) goto loc_82F1E024;
	// stw r11,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r11.u32);
loc_82F1E024:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// b 0x82f1e034
	goto loc_82F1E034;
loc_82F1E02C:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
loc_82F1E034:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82fa76bc
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F1E03C"))) PPC_WEAK_FUNC(sub_82F1E03C);
PPC_FUNC_IMPL(__imp__sub_82F1E03C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F1E040"))) PPC_WEAK_FUNC(sub_82F1E040);
PPC_FUNC_IMPL(__imp__sub_82F1E040) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x82F1E048;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// std r5,160(r1)
	PPC_STORE_U64(ctx.r1.u32 + 160, ctx.r5.u64);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// std r6,168(r1)
	PPC_STORE_U64(ctx.r1.u32 + 168, ctx.r6.u64);
	// li r29,0
	ctx.r29.s64 = 0;
	// std r7,176(r1)
	PPC_STORE_U64(ctx.r1.u32 + 176, ctx.r7.u64);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82f1e094
	if (ctx.cr6.eq) goto loc_82F1E094;
loc_82F1E06C:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82f1e094
	if (ctx.cr6.lt) goto loc_82F1E094;
	// addi r11,r11,20
	ctx.r11.s64 = ctx.r11.s64 + 20;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82f1e0ec
	if (ctx.cr6.lt) goto loc_82F1E0EC;
	// mr r29,r31
	ctx.r29.u64 = ctx.r31.u64;
	// lwz r31,520(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 520);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82f1e06c
	if (!ctx.cr6.eq) goto loc_82F1E06C;
loc_82F1E094:
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// beq cr6,0x82f1e140
	if (ctx.cr6.eq) goto loc_82F1E140;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F1E0B8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82f1e138
	if (ctx.cr0.lt) goto loc_82F1E138;
	// li r11,20
	ctx.r11.s64 = 20;
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// divwu r11,r30,r11
	ctx.r11.u32 = ctx.r30.u32 / ctx.r11.u32;
	// mulli r11,r11,20
	ctx.r11.s64 = ctx.r11.s64 * 20;
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// beq cr6,0x82f1e0e4
	if (ctx.cr6.eq) goto loc_82F1E0E4;
	// stw r11,520(r29)
	PPC_STORE_U32(ctx.r29.u32 + 520, ctx.r11.u32);
loc_82F1E0E4:
	// stw r31,520(r11)
	PPC_STORE_U32(ctx.r11.u32 + 520, ctx.r31.u32);
	// lwz r31,80(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_82F1E0EC:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lis r10,-31972
	ctx.r10.s64 = -2095316992;
	// addi r4,r1,160
	ctx.r4.s64 = ctx.r1.s64 + 160;
	// subf r9,r11,r30
	ctx.r9.s64 = ctx.r30.s64 - ctx.r11.s64;
	// addi r8,r10,-21028
	ctx.r8.s64 = ctx.r10.s64 + -21028;
	// rlwinm r11,r9,29,3,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 29) & 0x1FFFFFFF;
	// clrlwi r7,r9,29
	ctx.r7.u64 = ctx.r9.u32 & 0x7;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// mulli r10,r9,24
	ctx.r10.s64 = ctx.r9.s64 * 24;
	// lbzx r9,r7,r8
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r7.u32 + ctx.r8.u32);
	// lbz r8,36(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 36);
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + ctx.r31.u64;
	// or r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 | ctx.r8.u64;
	// addi r3,r10,40
	ctx.r3.s64 = ctx.r10.s64 + 40;
	// li r5,24
	ctx.r5.s64 = 24;
	// stb r9,36(r11)
	PPC_STORE_U8(ctx.r11.u32 + 36, ctx.r9.u8);
	// addi r11,r11,36
	ctx.r11.s64 = ctx.r11.s64 + 36;
	// bl 0x82fa77c0
	ctx.lr = 0x82F1E134;
	sub_82FA77C0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_82F1E138:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
loc_82F1E140:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,65535
	ctx.r3.u64 = ctx.r3.u64 | 65535;
	// b 0x82f1e138
	goto loc_82F1E138;
}

__attribute__((alias("__imp__sub_82F1E14C"))) PPC_WEAK_FUNC(sub_82F1E14C);
PPC_FUNC_IMPL(__imp__sub_82F1E14C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F1E150"))) PPC_WEAK_FUNC(sub_82F1E150);
PPC_FUNC_IMPL(__imp__sub_82F1E150) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82f1e164
	if (!ctx.cr6.eq) goto loc_82F1E164;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// blr 
	return;
loc_82F1E164:
	// lwz r11,596(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 596);
	// li r3,0
	ctx.r3.s64 = 0;
	// sth r11,0(r4)
	PPC_STORE_U16(ctx.r4.u32 + 0, ctx.r11.u16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F1E174"))) PPC_WEAK_FUNC(sub_82F1E174);
PPC_FUNC_IMPL(__imp__sub_82F1E174) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F1E178"))) PPC_WEAK_FUNC(sub_82F1E178);
PPC_FUNC_IMPL(__imp__sub_82F1E178) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7664
	ctx.lr = 0x82F1E180;
	__savegprlr_23(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// mr r23,r6
	ctx.r23.u64 = ctx.r6.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82f1e39c
	if (ctx.cr6.eq) goto loc_82F1E39C;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82f1e39c
	if (ctx.cr6.eq) goto loc_82F1E39C;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x82f1e39c
	if (ctx.cr6.eq) goto loc_82F1E39C;
	// li r27,0
	ctx.r27.s64 = 0;
	// stw r27,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r27.u32);
	// lwz r25,24(r5)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r5.u32 + 24);
	// cmplwi cr6,r25,6
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 6, ctx.xer);
	// bge cr6,0x82f1e1d4
	if (!ctx.cr6.lt) goto loc_82F1E1D4;
	// li r11,6
	ctx.r11.s64 = 6;
	// lis r3,-16371
	ctx.r3.s64 = -1072889856;
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// ori r3,r3,14001
	ctx.r3.u64 = ctx.r3.u64 | 14001;
	// b 0x82f1e3a4
	goto loc_82F1E3A4;
loc_82F1E1D4:
	// sth r27,2(r30)
	PPC_STORE_U16(ctx.r30.u32 + 2, ctx.r27.u16);
	// addi r29,r30,8
	ctx.r29.s64 = ctx.r30.s64 + 8;
	// sth r27,0(r30)
	PPC_STORE_U16(ctx.r30.u32 + 0, ctx.r27.u16);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82e95240
	ctx.lr = 0x82F1E1EC;
	sub_82E95240(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x82f1e348
	if (ctx.cr0.lt) goto loc_82F1E348;
	// lhz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r29.u32 + 0);
	// addi r11,r10,6
	ctx.r11.s64 = ctx.r10.s64 + 6;
	// cmplw cr6,r25,r11
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82f1e214
	if (!ctx.cr6.lt) goto loc_82F1E214;
loc_82F1E204:
	// lis r31,-16371
	ctx.r31.s64 = -1072889856;
	// stw r11,0(r23)
	PPC_STORE_U32(ctx.r23.u32 + 0, ctx.r11.u32);
	// ori r31,r31,14001
	ctx.r31.u64 = ctx.r31.u64 | 14001;
	// b 0x82f1e36c
	goto loc_82F1E36C;
loc_82F1E214:
	// clrlwi. r11,r10,31
	ctx.r11.u64 = ctx.r10.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82f1e340
	if (!ctx.cr0.eq) goto loc_82F1E340;
	// rlwinm r11,r10,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// cmplwi cr6,r11,2048
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2048, ctx.xer);
	// bgt cr6,0x82f1e340
	if (ctx.cr6.gt) goto loc_82F1E340;
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82f1e238
	if (ctx.cr6.eq) goto loc_82F1E238;
	// bl 0x82e8ee18
	ctx.lr = 0x82F1E238;
	sub_82E8EE18(ctx, base);
loc_82F1E238:
	// stw r27,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r27.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// lhz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r29.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82e8edd0
	ctx.lr = 0x82F1E254;
	sub_82E8EDD0(ctx, base);
	// stw r3,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82f1e26c
	if (!ctx.cr0.eq) goto loc_82F1E26C;
loc_82F1E260:
	// lis r31,-32761
	ctx.r31.s64 = -2147024896;
	// ori r31,r31,14
	ctx.r31.u64 = ctx.r31.u64 | 14;
	// b 0x82f1e358
	goto loc_82F1E358;
loc_82F1E26C:
	// lhz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 0);
	// addi r28,r24,40
	ctx.r28.s64 = ctx.r24.s64 + 40;
	// rlwinm r5,r11,31,1,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x82e952a8
	ctx.lr = 0x82F1E280;
	sub_82E952A8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x82f1e348
	if (ctx.cr0.lt) goto loc_82F1E348;
	// lhz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 0);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82f1e2a4
	if (ctx.cr0.eq) goto loc_82F1E2A4;
	// lwz r10,12(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// sth r27,-2(r11)
	PPC_STORE_U16(ctx.r11.u32 + -2, ctx.r27.u16);
loc_82F1E2A4:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// sth r27,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r27.u16);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e95240
	ctx.lr = 0x82F1E2B4;
	sub_82E95240(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x82f1e348
	if (ctx.cr0.lt) goto loc_82F1E348;
	// lhz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// sth r27,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r27.u16);
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
	// bl 0x82e95240
	ctx.lr = 0x82F1E2D4;
	sub_82E95240(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x82f1e348
	if (ctx.cr0.lt) goto loc_82F1E348;
	// lhz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// lhz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 0);
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r11,r11,6
	ctx.r11.s64 = ctx.r11.s64 + 6;
	// stw r3,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r3.u32);
	// cmplw cr6,r25,r11
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82f1e204
	if (ctx.cr6.lt) goto loc_82F1E204;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82e8edd0
	ctx.lr = 0x82F1E30C;
	sub_82E8EDD0(ctx, base);
	// mr. r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// stw r5,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r5.u32);
	// beq 0x82f1e260
	if (ctx.cr0.eq) goto loc_82F1E260;
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lwz r7,16(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r11,60(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F1E338;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x82f1e348
	goto loc_82F1E348;
loc_82F1E340:
	// lis r31,-16371
	ctx.r31.s64 = -1072889856;
	// ori r31,r31,15002
	ctx.r31.u64 = ctx.r31.u64 | 15002;
loc_82F1E348:
	// lis r11,-16371
	ctx.r11.s64 = -1072889856;
	// ori r11,r11,14001
	ctx.r11.u64 = ctx.r11.u64 | 14001;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x82f1e364
	if (ctx.cr6.eq) goto loc_82F1E364;
loc_82F1E358:
	// lwz r11,24(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 24);
	// subf r11,r11,r25
	ctx.r11.s64 = ctx.r25.s64 - ctx.r11.s64;
	// stw r11,0(r23)
	PPC_STORE_U32(ctx.r23.u32 + 0, ctx.r11.u32);
loc_82F1E364:
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bge cr6,0x82f1e394
	if (!ctx.cr6.lt) goto loc_82F1E394;
loc_82F1E36C:
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82f1e37c
	if (ctx.cr6.eq) goto loc_82F1E37C;
	// bl 0x82e8ee18
	ctx.lr = 0x82F1E37C;
	sub_82E8EE18(ctx, base);
loc_82F1E37C:
	// lwz r3,20(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// stw r27,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r27.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82f1e390
	if (ctx.cr6.eq) goto loc_82F1E390;
	// bl 0x82e8ee18
	ctx.lr = 0x82F1E390;
	sub_82E8EE18(ctx, base);
loc_82F1E390:
	// stw r27,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r27.u32);
loc_82F1E394:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x82f1e3a4
	goto loc_82F1E3A4;
loc_82F1E39C:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
loc_82F1E3A4:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82fa76b4
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F1E3AC"))) PPC_WEAK_FUNC(sub_82F1E3AC);
PPC_FUNC_IMPL(__imp__sub_82F1E3AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F1E3B0"))) PPC_WEAK_FUNC(sub_82F1E3B0);
PPC_FUNC_IMPL(__imp__sub_82F1E3B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7660
	ctx.lr = 0x82F1E3B8;
	__savegprlr_22(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// mr r22,r6
	ctx.r22.u64 = ctx.r6.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82f1e60c
	if (ctx.cr6.eq) goto loc_82F1E60C;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82f1e60c
	if (ctx.cr6.eq) goto loc_82F1E60C;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x82f1e60c
	if (ctx.cr6.eq) goto loc_82F1E60C;
	// li r24,0
	ctx.r24.s64 = 0;
	// stw r24,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r24.u32);
	// lwz r23,24(r5)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r5.u32 + 24);
	// cmplwi cr6,r23,12
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 12, ctx.xer);
	// bge cr6,0x82f1e400
	if (!ctx.cr6.lt) goto loc_82F1E400;
	// li r11,12
	ctx.r11.s64 = 12;
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
loc_82F1E400:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82e95240
	ctx.lr = 0x82F1E40C;
	sub_82E95240(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x82f1e5b8
	if (ctx.cr0.lt) goto loc_82F1E5B8;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r3,r30,2
	ctx.r3.s64 = ctx.r30.s64 + 2;
	// bl 0x82e95240
	ctx.lr = 0x82F1E420;
	sub_82E95240(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x82f1e5b8
	if (ctx.cr0.lt) goto loc_82F1E5B8;
	// addi r29,r30,8
	ctx.r29.s64 = ctx.r30.s64 + 8;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82e95240
	ctx.lr = 0x82F1E438;
	sub_82E95240(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x82f1e5b8
	if (ctx.cr0.lt) goto loc_82F1E5B8;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// sth r24,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r24.u16);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e95240
	ctx.lr = 0x82F1E450;
	sub_82E95240(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x82f1e5b8
	if (ctx.cr0.lt) goto loc_82F1E5B8;
	// lhz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// addi r28,r30,16
	ctx.r28.s64 = ctx.r30.s64 + 16;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stw r11,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r11.u32);
	// bl 0x82e97908
	ctx.lr = 0x82F1E470;
	sub_82E97908(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x82f1e5b8
	if (ctx.cr0.lt) goto loc_82F1E5B8;
	// lhz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r29.u32 + 0);
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// cmplw cr6,r23,r11
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82f1e4a0
	if (!ctx.cr6.lt) goto loc_82F1E4A0;
	// lis r31,-16371
	ctx.r31.s64 = -1072889856;
	// stw r11,0(r22)
	PPC_STORE_U32(ctx.r22.u32 + 0, ctx.r11.u32);
	// ori r31,r31,14001
	ctx.r31.u64 = ctx.r31.u64 | 14001;
	// b 0x82f1e5dc
	goto loc_82F1E5DC;
loc_82F1E4A0:
	// clrlwi. r11,r10,31
	ctx.r11.u64 = ctx.r10.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82f1e5b0
	if (!ctx.cr0.eq) goto loc_82F1E5B0;
	// rlwinm r11,r10,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// cmplwi cr6,r11,2048
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2048, ctx.xer);
	// bgt cr6,0x82f1e5b0
	if (ctx.cr6.gt) goto loc_82F1E5B0;
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82f1e4c4
	if (ctx.cr6.eq) goto loc_82F1E4C4;
	// bl 0x82e8ee18
	ctx.lr = 0x82F1E4C4;
	sub_82E8EE18(ctx, base);
loc_82F1E4C4:
	// stw r24,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r24.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// lhz r3,0(r29)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r29.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82e8edd0
	ctx.lr = 0x82F1E4E0;
	sub_82E8EDD0(ctx, base);
	// stw r3,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82f1e4f8
	if (!ctx.cr0.eq) goto loc_82F1E4F8;
loc_82F1E4EC:
	// lis r31,-32761
	ctx.r31.s64 = -2147024896;
	// ori r31,r31,14
	ctx.r31.u64 = ctx.r31.u64 | 14;
	// b 0x82f1e5c8
	goto loc_82F1E5C8;
loc_82F1E4F8:
	// lhz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 0);
	// addi r27,r25,40
	ctx.r27.s64 = ctx.r25.s64 + 40;
	// rlwinm r5,r11,31,1,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x82e952a8
	ctx.lr = 0x82F1E50C;
	sub_82E952A8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x82f1e5b8
	if (ctx.cr0.lt) goto loc_82F1E5B8;
	// lhz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 0);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82f1e530
	if (ctx.cr0.eq) goto loc_82F1E530;
	// lwz r10,12(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// sth r24,-2(r11)
	PPC_STORE_U16(ctx.r11.u32 + -2, ctx.r24.u16);
loc_82F1E530:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// rlwinm. r11,r11,0,16,16
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f1e564
	if (ctx.cr0.eq) goto loc_82F1E564;
	// lwz r11,600(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 600);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82f1e564
	if (!ctx.cr6.eq) goto loc_82F1E564;
	// lwz r3,20(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// stw r24,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r24.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82f1e55c
	if (ctx.cr6.eq) goto loc_82F1E55C;
	// bl 0x82e8ee18
	ctx.lr = 0x82F1E55C;
	sub_82E8EE18(ctx, base);
loc_82F1E55C:
	// stw r24,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r24.u32);
	// b 0x82f1e5b8
	goto loc_82F1E5B8;
loc_82F1E564:
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r3,0(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82e8edd0
	ctx.lr = 0x82F1E57C;
	sub_82E8EDD0(ctx, base);
	// mr. r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// stw r5,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r5.u32);
	// beq 0x82f1e4ec
	if (ctx.cr0.eq) goto loc_82F1E4EC;
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwz r7,0(r28)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r11,60(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F1E5A8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x82f1e5b8
	goto loc_82F1E5B8;
loc_82F1E5B0:
	// lis r31,-16371
	ctx.r31.s64 = -1072889856;
	// ori r31,r31,15002
	ctx.r31.u64 = ctx.r31.u64 | 15002;
loc_82F1E5B8:
	// lis r11,-16371
	ctx.r11.s64 = -1072889856;
	// ori r11,r11,14001
	ctx.r11.u64 = ctx.r11.u64 | 14001;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x82f1e5d4
	if (ctx.cr6.eq) goto loc_82F1E5D4;
loc_82F1E5C8:
	// lwz r11,24(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 24);
	// subf r11,r11,r23
	ctx.r11.s64 = ctx.r23.s64 - ctx.r11.s64;
	// stw r11,0(r22)
	PPC_STORE_U32(ctx.r22.u32 + 0, ctx.r11.u32);
loc_82F1E5D4:
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bge cr6,0x82f1e604
	if (!ctx.cr6.lt) goto loc_82F1E604;
loc_82F1E5DC:
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82f1e5ec
	if (ctx.cr6.eq) goto loc_82F1E5EC;
	// bl 0x82e8ee18
	ctx.lr = 0x82F1E5EC;
	sub_82E8EE18(ctx, base);
loc_82F1E5EC:
	// lwz r3,20(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// stw r24,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r24.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82f1e600
	if (ctx.cr6.eq) goto loc_82F1E600;
	// bl 0x82e8ee18
	ctx.lr = 0x82F1E600;
	sub_82E8EE18(ctx, base);
loc_82F1E600:
	// stw r24,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r24.u32);
loc_82F1E604:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x82f1e614
	goto loc_82F1E614;
loc_82F1E60C:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
loc_82F1E614:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82fa76b0
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F1E61C"))) PPC_WEAK_FUNC(sub_82F1E61C);
PPC_FUNC_IMPL(__imp__sub_82F1E61C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F1E620"))) PPC_WEAK_FUNC(sub_82F1E620);
PPC_FUNC_IMPL(__imp__sub_82F1E620) {
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
	// mr r11,r5
	ctx.r11.u64 = ctx.r5.u64;
	// mr r10,r6
	ctx.r10.u64 = ctx.r6.u64;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82f1e64c
	if (ctx.cr6.eq) goto loc_82F1E64C;
	// lwz r9,524(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 524);
	// stw r9,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r9.u32);
loc_82F1E64C:
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// lwz r4,524(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 524);
	// mr r6,r11
	ctx.r6.u64 = ctx.r11.u64;
	// mr r7,r10
	ctx.r7.u64 = ctx.r10.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f1e040
	ctx.lr = 0x82F1E664;
	sub_82F1E040(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82f1e678
	if (ctx.cr0.lt) goto loc_82F1E678;
	// lwz r11,524(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 524);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,524(r31)
	PPC_STORE_U32(ctx.r31.u32 + 524, ctx.r11.u32);
loc_82F1E678:
	// rlwinm r11,r3,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0x1;
	// xori r3,r11,1
	ctx.r3.u64 = ctx.r11.u64 ^ 1;
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

__attribute__((alias("__imp__sub_82F1E694"))) PPC_WEAK_FUNC(sub_82F1E694);
PPC_FUNC_IMPL(__imp__sub_82F1E694) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F1E698"))) PPC_WEAK_FUNC(sub_82F1E698);
PPC_FUNC_IMPL(__imp__sub_82F1E698) {
	PPC_FUNC_PROLOGUE();
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x82f1e6b0
	if (!ctx.cr6.eq) goto loc_82F1E6B0;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// blr 
	return;
loc_82F1E6B0:
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// b 0x82f1e6e0
	goto loc_82F1E6E0;
loc_82F1E6C4:
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82f1e6dc
	if (ctx.cr6.lt) goto loc_82F1E6DC;
	// addi r9,r11,20
	ctx.r9.s64 = ctx.r11.s64 + 20;
	// cmplw cr6,r4,r9
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82f1e6ec
	if (ctx.cr6.lt) goto loc_82F1E6EC;
loc_82F1E6DC:
	// lwz r10,520(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 520);
loc_82F1E6E0:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82f1e6c4
	if (!ctx.cr6.eq) goto loc_82F1E6C4;
	// blr 
	return;
loc_82F1E6EC:
	// subf r11,r11,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r11.s64;
	// lis r8,-31972
	ctx.r8.s64 = -2095316992;
	// rlwinm r9,r11,29,3,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
	// addi r8,r8,-21028
	ctx.r8.s64 = ctx.r8.s64 + -21028;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// clrlwi r7,r11,29
	ctx.r7.u64 = ctx.r11.u32 & 0x7;
	// lbz r9,36(r9)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + 36);
	// lbzx r8,r7,r8
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r7.u32 + ctx.r8.u32);
	// and. r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 & ctx.r8.u64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beqlr 
	if (ctx.cr0.eq) return;
	// mulli r11,r11,24
	ctx.r11.s64 = ctx.r11.s64 * 24;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r11,r11,40
	ctx.r11.s64 = ctx.r11.s64 + 40;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F1E72C"))) PPC_WEAK_FUNC(sub_82F1E72C);
PPC_FUNC_IMPL(__imp__sub_82F1E72C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F1E730"))) PPC_WEAK_FUNC(sub_82F1E730);
PPC_FUNC_IMPL(__imp__sub_82F1E730) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7664
	ctx.lr = 0x82F1E738;
	__savegprlr_23(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82f1e76c
	if (ctx.cr6.eq) goto loc_82F1E76C;
loc_82F1E750:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r11,r11,20
	ctx.r11.s64 = ctx.r11.s64 + 20;
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82f1e76c
	if (ctx.cr6.lt) goto loc_82F1E76C;
	// lwz r31,520(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 520);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82f1e750
	if (!ctx.cr6.eq) goto loc_82F1E750;
loc_82F1E76C:
	// li r24,0
	ctx.r24.s64 = 0;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82f1e8a0
	if (ctx.cr6.eq) goto loc_82F1E8A0;
	// lis r10,-31972
	ctx.r10.s64 = -2095316992;
	// lis r11,-31972
	ctx.r11.s64 = -2095316992;
	// lis r25,-31972
	ctx.r25.s64 = -2095316992;
	// addi r27,r10,-21008
	ctx.r27.s64 = ctx.r10.s64 + -21008;
	// addi r26,r11,-21020
	ctx.r26.s64 = ctx.r11.s64 + -21020;
loc_82F1E78C:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r29,0
	ctx.r29.s64 = 0;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82f1e7ac
	if (ctx.cr6.lt) goto loc_82F1E7AC;
	// li r29,1
	ctx.r29.s64 = 1;
	// subf r30,r11,r28
	ctx.r30.s64 = ctx.r28.s64 - ctx.r11.s64;
	// b 0x82f1e7dc
	goto loc_82F1E7DC;
loc_82F1E7AC:
	// lbz r10,-21028(r25)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r25.u32 + -21028);
	// lbz r9,36(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 36);
	// and. r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 & ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82f1e7dc
	if (ctx.cr0.eq) goto loc_82F1E7DC;
	// addi r4,r11,-1
	ctx.r4.s64 = ctx.r11.s64 + -1;
	// ld r5,40(r31)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r31.u32 + 40);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// ld r6,48(r31)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r31.u32 + 48);
	// ld r7,56(r31)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r31.u32 + 56);
	// bl 0x82f1e040
	ctx.lr = 0x82F1E7D4;
	sub_82F1E040(ctx, base);
	// mr. r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// blt 0x82f1e8a0
	if (ctx.cr0.lt) goto loc_82F1E8A0;
loc_82F1E7DC:
	// mulli r11,r30,24
	ctx.r11.s64 = ctx.r30.s64 * 24;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// subfic r10,r30,19
	ctx.xer.ca = ctx.r30.u32 <= 19;
	ctx.r10.s64 = 19 - ctx.r30.s64;
	// addi r4,r11,64
	ctx.r4.s64 = ctx.r11.s64 + 64;
	// mulli r5,r10,24
	ctx.r5.s64 = ctx.r10.s64 * 24;
	// addi r3,r11,40
	ctx.r3.s64 = ctx.r11.s64 + 40;
	// bl 0x82fa20f0
	ctx.lr = 0x82F1E7F8;
	sub_82FA20F0(ctx, base);
	// rlwinm r11,r30,29,3,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 29) & 0x1FFFFFFF;
	// add r10,r11,r31
	ctx.r10.u64 = ctx.r11.u64 + ctx.r31.u64;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// lbz r7,36(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 36);
	// bge cr6,0x82f1e850
	if (!ctx.cr6.lt) goto loc_82F1E850;
	// subfic r8,r11,3
	ctx.xer.ca = ctx.r11.u32 <= 3;
	ctx.r8.s64 = 3 - ctx.r11.s64;
	// addi r9,r31,36
	ctx.r9.s64 = ctx.r31.s64 + 36;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_82F1E818:
	// lbzx r8,r9,r11
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r11.u32);
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// rlwinm r8,r8,1,24,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFE;
	// stbx r8,r9,r11
	PPC_STORE_U8(ctx.r9.u32 + ctx.r11.u32, ctx.r8.u8);
	// bge cr6,0x82f1e848
	if (!ctx.cr6.lt) goto loc_82F1E848;
	// add r6,r11,r31
	ctx.r6.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lbz r6,37(r6)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r6.u32 + 37);
	// rlwinm. r6,r6,0,0,24
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFFFF80;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq 0x82f1e848
	if (ctx.cr0.eq) goto loc_82F1E848;
	// li r6,1
	ctx.r6.s64 = 1;
	// rlwimi r8,r6,0,31,23
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r6.u32, 0) & 0xFFFFFFFFFFFFFF01) | (ctx.r8.u64 & 0xFE);
	// stbx r8,r9,r11
	PPC_STORE_U8(ctx.r9.u32 + ctx.r11.u32, ctx.r8.u8);
loc_82F1E848:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x82f1e818
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82F1E818;
loc_82F1E850:
	// clrlwi r11,r30,29
	ctx.r11.u64 = ctx.r30.u32 & 0x7;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq cr6,0x82f1e894
	if (ctx.cr6.eq) goto loc_82F1E894;
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f1e894
	if (ctx.cr0.eq) goto loc_82F1E894;
	// addi r9,r26,8
	ctx.r9.s64 = ctx.r26.s64 + 8;
	// lbz r8,36(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 36);
	// clrlwi r7,r7,24
	ctx.r7.u64 = ctx.r7.u32 & 0xFF;
	// subf r9,r11,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r11.s64;
	// lbz r9,0(r9)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// and r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 & ctx.r8.u64;
	// stb r9,36(r10)
	PPC_STORE_U8(ctx.r10.u32 + 36, ctx.r9.u8);
	// clrlwi r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	// lbzx r11,r11,r27
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r27.u32);
	// and r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 & ctx.r7.u64;
	// or r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 | ctx.r9.u64;
	// stb r11,36(r10)
	PPC_STORE_U8(ctx.r10.u32 + 36, ctx.r11.u8);
loc_82F1E894:
	// lwz r31,520(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 520);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82f1e78c
	if (!ctx.cr6.eq) goto loc_82F1E78C;
loc_82F1E8A0:
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82fa76b4
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F1E8AC"))) PPC_WEAK_FUNC(sub_82F1E8AC);
PPC_FUNC_IMPL(__imp__sub_82F1E8AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F1E8B0"))) PPC_WEAK_FUNC(sub_82F1E8B0);
PPC_FUNC_IMPL(__imp__sub_82F1E8B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7674
	ctx.lr = 0x82F1E8B8;
	__savegprlr_27(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82f1e8d8
	if (!ctx.cr6.eq) goto loc_82F1E8D8;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// b 0x82f1e9fc
	goto loc_82F1E9FC;
loc_82F1E8D8:
	// lwz r11,596(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 596);
	// cmplwi cr6,r11,65535
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 65535, ctx.xer);
	// blt cr6,0x82f1e8f0
	if (ctx.cr6.lt) goto loc_82F1E8F0;
	// lis r3,-16371
	ctx.r3.s64 = -1072889856;
	// ori r3,r3,14002
	ctx.r3.u64 = ctx.r3.u64 | 14002;
	// b 0x82f1e9fc
	goto loc_82F1E9FC;
loc_82F1E8F0:
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r10,64(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 64);
	// std r11,0(r9)
	PPC_STORE_U64(ctx.r9.u32 + 0, ctx.r11.u64);
	// std r11,8(r9)
	PPC_STORE_U64(ctx.r9.u32 + 8, ctx.r11.u64);
	// std r11,16(r9)
	PPC_STORE_U64(ctx.r9.u32 + 16, ctx.r11.u64);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82F1E91C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt 0x82f1e9f8
	if (ctx.cr0.lt) goto loc_82F1E9F8;
	// li r7,0
	ctx.r7.s64 = 0;
	// lhz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r31.u32 + 8);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82e8edd0
	ctx.lr = 0x82F1E93C;
	sub_82E8EDD0(ctx, base);
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// bl 0x82e8edd0
	ctx.lr = 0x82F1E958;
	sub_82E8EDD0(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82f1e9c8
	if (ctx.cr6.eq) goto loc_82F1E9C8;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82f1e9c8
	if (ctx.cr6.eq) goto loc_82F1E9C8;
	// lhz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 8);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r27,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r27.u32);
	// sth r11,88(r1)
	PPC_STORE_U16(ctx.r1.u32 + 88, ctx.r11.u16);
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// bl 0x82f1db40
	ctx.lr = 0x82F1E994;
	sub_82F1DB40(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt 0x82f1e9d8
	if (ctx.cr0.lt) goto loc_82F1E9D8;
	// li r7,0
	ctx.r7.s64 = 0;
	// ld r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// addi r3,r29,72
	ctx.r3.s64 = ctx.r29.s64 + 72;
	// ld r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// ld r6,96(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// bl 0x82f1e620
	ctx.lr = 0x82F1E9B4;
	sub_82F1E620(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82f1e9d0
	if (!ctx.cr0.eq) goto loc_82F1E9D0;
	// lis r30,-32768
	ctx.r30.s64 = -2147483648;
	// ori r30,r30,16389
	ctx.r30.u64 = ctx.r30.u64 | 16389;
	// b 0x82f1e9d8
	goto loc_82F1E9D8;
loc_82F1E9C8:
	// lis r30,-32761
	ctx.r30.s64 = -2147024896;
	// ori r30,r30,14
	ctx.r30.u64 = ctx.r30.u64 | 14;
loc_82F1E9D0:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge cr6,0x82f1e9f8
	if (!ctx.cr6.lt) goto loc_82F1E9F8;
loc_82F1E9D8:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82f1e9e8
	if (ctx.cr6.eq) goto loc_82F1E9E8;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82e8ee18
	ctx.lr = 0x82F1E9E8;
	sub_82E8EE18(ctx, base);
loc_82F1E9E8:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x82f1e9f8
	if (ctx.cr6.eq) goto loc_82F1E9F8;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82e8ee18
	ctx.lr = 0x82F1E9F8;
	sub_82E8EE18(ctx, base);
loc_82F1E9F8:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_82F1E9FC:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82fa76c4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F1EA04"))) PPC_WEAK_FUNC(sub_82F1EA04);
PPC_FUNC_IMPL(__imp__sub_82F1EA04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F1EA08"))) PPC_WEAK_FUNC(sub_82F1EA08);
PPC_FUNC_IMPL(__imp__sub_82F1EA08) {
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
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82f1ea30
	if (!ctx.cr6.eq) goto loc_82F1EA30;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// b 0x82f1eac8
	goto loc_82F1EAC8;
loc_82F1EA30:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r5,16(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r11,68(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 68);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F1EA48;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82f1eac8
	if (ctx.cr0.lt) goto loc_82F1EAC8;
	// lhz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 8);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82f1eaac
	if (ctx.cr0.eq) goto loc_82F1EAAC;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82f1ea74
	if (!ctx.cr6.eq) goto loc_82F1EA74;
loc_82F1EA68:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// b 0x82f1eac8
	goto loc_82F1EAC8;
loc_82F1EA74:
	// li r10,1024
	ctx.r10.s64 = 1024;
	// li r9,0
	ctx.r9.s64 = 0;
loc_82F1EA7C:
	// lhz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// cmplwi r8,0
	ctx.cr0.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq 0x82f1ea94
	if (ctx.cr0.eq) goto loc_82F1EA94;
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// bne 0x82f1ea7c
	if (!ctx.cr0.eq) goto loc_82F1EA7C;
loc_82F1EA94:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82f1eaa4
	if (!ctx.cr6.eq) goto loc_82F1EAA4;
	// lis r9,-32761
	ctx.r9.s64 = -2147024896;
	// ori r9,r9,87
	ctx.r9.u64 = ctx.r9.u64 | 87;
loc_82F1EAA4:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// blt cr6,0x82f1ea68
	if (ctx.cr6.lt) goto loc_82F1EA68;
loc_82F1EAAC:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82f1eac4
	if (!ctx.cr6.gt) goto loc_82F1EAC4;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82f1ea68
	if (ctx.cr6.eq) goto loc_82F1EA68;
loc_82F1EAC4:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82F1EAC8:
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

__attribute__((alias("__imp__sub_82F1EADC"))) PPC_WEAK_FUNC(sub_82F1EADC);
PPC_FUNC_IMPL(__imp__sub_82F1EADC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F1EAE0"))) PPC_WEAK_FUNC(sub_82F1EAE0);
PPC_FUNC_IMPL(__imp__sub_82F1EAE0) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// li r11,0
	ctx.r11.s64 = 0;
	// rlwinm. r10,r10,0,16,16
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x8000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// sth r11,2(r4)
	PPC_STORE_U16(ctx.r4.u32 + 2, ctx.r11.u16);
	// sth r11,0(r4)
	PPC_STORE_U16(ctx.r4.u32 + 0, ctx.r11.u16);
	// beq 0x82f1eb04
	if (ctx.cr0.eq) goto loc_82F1EB04;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// blr 
	return;
loc_82F1EB04:
	// b 0x82f1ea08
	sub_82F1EA08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F1EB08"))) PPC_WEAK_FUNC(sub_82F1EB08);
PPC_FUNC_IMPL(__imp__sub_82F1EB08) {
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
	// bl 0x82e95af0
	ctx.lr = 0x82F1EB20;
	sub_82E95AF0(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// lis r10,-32234
	ctx.r10.s64 = -2112487424;
	// addi r9,r11,8144
	ctx.r9.s64 = ctx.r11.s64 + 8144;
	// addi r10,r10,9000
	ctx.r10.s64 = ctx.r10.s64 + 9000;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r9,-32234
	ctx.r9.s64 = -2112487424;
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// stw r11,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r11.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// addi r9,r9,8136
	ctx.r9.s64 = ctx.r9.s64 + 8136;
	// sth r11,108(r31)
	PPC_STORE_U16(ctx.r31.u32 + 108, ctx.r11.u16);
	// stb r11,110(r31)
	PPC_STORE_U8(ctx.r31.u32 + 110, ctx.r11.u8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,592(r31)
	PPC_STORE_U32(ctx.r31.u32 + 592, ctx.r11.u32);
	// stw r11,596(r31)
	PPC_STORE_U32(ctx.r31.u32 + 596, ctx.r11.u32);
	// addi r11,r31,72
	ctx.r11.s64 = ctx.r31.s64 + 72;
	// stw r9,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r9.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
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

__attribute__((alias("__imp__sub_82F1EB84"))) PPC_WEAK_FUNC(sub_82F1EB84);
PPC_FUNC_IMPL(__imp__sub_82F1EB84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F1EB88"))) PPC_WEAK_FUNC(sub_82F1EB88);
PPC_FUNC_IMPL(__imp__sub_82F1EB88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7670
	ctx.lr = 0x82F1EB90;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82f1ebb8
	if (!ctx.cr6.eq) goto loc_82F1EBB8;
	// lis r3,-16371
	ctx.r3.s64 = -1072889856;
	// ori r3,r3,14006
	ctx.r3.u64 = ctx.r3.u64 | 14006;
	// b 0x82f1ec38
	goto loc_82F1EC38;
loc_82F1EBB8:
	// lwz r11,596(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 596);
	// li r29,26
	ctx.r29.s64 = 26;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82f1ec18
	if (!ctx.cr6.gt) goto loc_82F1EC18;
	// addi r28,r31,72
	ctx.r28.s64 = ctx.r31.s64 + 72;
loc_82F1EBD0:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82f1e698
	ctx.lr = 0x82F1EBE0;
	sub_82F1E698(ctx, base);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r11,r3,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0x1;
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// lwz r10,48(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 48);
	// and r4,r11,r9
	ctx.r4.u64 = ctx.r11.u64 & ctx.r9.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82F1EC04;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,596(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 596);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// add r29,r3,r29
	ctx.r29.u64 = ctx.r3.u64 + ctx.r29.u64;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82f1ebd0
	if (ctx.cr6.lt) goto loc_82F1EBD0;
loc_82F1EC18:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x82f1ec24
	if (ctx.cr6.eq) goto loc_82F1EC24;
	// std r29,0(r27)
	PPC_STORE_U64(ctx.r27.u32 + 0, ctx.r29.u64);
loc_82F1EC24:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x82f1ec30
	if (ctx.cr6.eq) goto loc_82F1EC30;
	// std r29,0(r26)
	PPC_STORE_U64(ctx.r26.u32 + 0, ctx.r29.u64);
loc_82F1EC30:
	// std r29,32(r31)
	PPC_STORE_U64(ctx.r31.u32 + 32, ctx.r29.u64);
	// li r3,0
	ctx.r3.s64 = 0;
loc_82F1EC38:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82fa76c0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F1EC40"))) PPC_WEAK_FUNC(sub_82F1EC40);
PPC_FUNC_IMPL(__imp__sub_82F1EC40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7670
	ctx.lr = 0x82F1EC48;
	__savegprlr_26(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82f1ec74
	if (!ctx.cr6.eq) goto loc_82F1EC74;
	// lis r3,-16371
	ctx.r3.s64 = -1072889856;
	// ori r3,r3,14006
	ctx.r3.u64 = ctx.r3.u64 | 14006;
	// b 0x82f1ee10
	goto loc_82F1EE10;
loc_82F1EC74:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x82f1ee08
	if (ctx.cr6.eq) goto loc_82F1EE08;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82f1ec8c
	if (ctx.cr6.eq) goto loc_82F1EC8C;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82f1ee08
	if (ctx.cr6.eq) goto loc_82F1EE08;
loc_82F1EC8C:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F1ECA8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// ld r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// rldicr r10,r10,32,63
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// cmpld cr6,r11,r10
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, ctx.r10.u64, ctx.xer);
	// blt cr6,0x82f1ecc8
	if (ctx.cr6.lt) goto loc_82F1ECC8;
	// lis r3,-16371
	ctx.r3.s64 = -1072889856;
	// ori r3,r3,15002
	ctx.r3.u64 = ctx.r3.u64 | 15002;
	// b 0x82f1ee10
	goto loc_82F1EE10;
loc_82F1ECC8:
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// stw r11,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r11.u32);
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, ctx.xer);
	// ble cr6,0x82f1ece4
	if (!ctx.cr6.gt) goto loc_82F1ECE4;
	// lis r3,-16371
	ctx.r3.s64 = -1072889856;
	// ori r3,r3,14001
	ctx.r3.u64 = ctx.r3.u64 | 14001;
	// b 0x82f1ee10
	goto loc_82F1EE10;
loc_82F1ECE4:
	// addi r11,r31,16
	ctx.r11.s64 = ctx.r31.s64 + 16;
	// lhz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 20);
	// lhz r9,22(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + 22);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// rlwinm r8,r10,24,24,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFF;
	// ld r7,24(r31)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r31.u32 + 24);
	// rlwinm r6,r9,24,24,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 24) & 0xFF;
	// rlwimi r8,r10,8,16,23
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r10.u32, 8) & 0xFF00) | (ctx.r8.u64 & 0xFFFFFFFFFFFF00FF);
	// lwbrx r11,0,r11
	ctx.r11.u64 = __builtin_bswap32(PPC_LOAD_U32(ctx.r11.u32));
	// rlwimi r6,r9,8,16,23
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r9.u32, 8) & 0xFF00) | (ctx.r6.u64 & 0xFFFFFFFFFFFF00FF);
	// sth r8,100(r1)
	PPC_STORE_U16(ctx.r1.u32 + 100, ctx.r8.u16);
	// li r5,16
	ctx.r5.s64 = 16;
	// sth r6,102(r1)
	PPC_STORE_U16(ctx.r1.u32 + 102, ctx.r6.u16);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// std r7,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r7.u64);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// bl 0x82fa77c0
	ctx.lr = 0x82F1ED28;
	sub_82FA77C0(ctx, base);
	// ld r10,32(r31)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r31.u32 + 32);
	// addi r11,r30,16
	ctx.r11.s64 = ctx.r30.s64 + 16;
	// li r27,0
	ctx.r27.s64 = 0;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stw r27,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r27.u32);
	// std r10,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r10.u64);
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
	// lwz r9,100(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// rlwinm r8,r10,8,24,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFF;
	// rlwimi r8,r10,24,16,23
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r10.u32, 24) & 0xFF00) | (ctx.r8.u64 & 0xFFFFFFFFFFFF00FF);
	// rlwinm r7,r9,8,24,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 8) & 0xFF;
	// rlwimi r8,r10,8,8,15
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r10.u32, 8) & 0xFF0000) | (ctx.r8.u64 & 0xFFFFFFFFFF00FFFF);
	// rlwimi r7,r9,24,16,23
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r9.u32, 24) & 0xFF00) | (ctx.r7.u64 & 0xFFFFFFFFFFFF00FF);
	// rlwimi r8,r10,24,0,7
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r10.u32, 24) & 0xFF000000) | (ctx.r8.u64 & 0xFFFFFFFF00FFFFFF);
	// rlwimi r7,r9,8,8,15
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r9.u32, 8) & 0xFF0000) | (ctx.r7.u64 & 0xFFFFFFFFFF00FFFF);
	// clrldi r10,r8,32
	ctx.r10.u64 = ctx.r8.u64 & 0xFFFFFFFF;
	// rlwimi r7,r9,24,0,7
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r9.u32, 24) & 0xFF000000) | (ctx.r7.u64 & 0xFFFFFFFF00FFFFFF);
	// rldimi r10,r7,32,0
	ctx.r10.u64 = (__builtin_rotateleft64(ctx.r7.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r10.u64 & 0xFFFFFFFF);
	// std r10,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r10.u64);
	// lwz r10,596(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 596);
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// rlwinm r9,r10,24,24,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFF;
	// rlwimi r9,r10,8,16,23
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 8) & 0xFF00) | (ctx.r9.u64 & 0xFFFFFFFFFFFF00FF);
	// sthu r9,8(r11)
	ea = 8 + ctx.r11.u32;
	PPC_STORE_U16(ea, ctx.r9.u16);
	ctx.r11.u32 = ea;
	// lwz r10,596(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 596);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// addi r29,r11,2
	ctx.r29.s64 = ctx.r11.s64 + 2;
	// ble cr6,0x82f1ee10
	if (!ctx.cr6.gt) goto loc_82F1EE10;
	// addi r28,r31,72
	ctx.r28.s64 = ctx.r31.s64 + 72;
loc_82F1EDA0:
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82f1e698
	ctx.lr = 0x82F1EDB0;
	sub_82F1E698(ctx, base);
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r11,r3,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0x1;
	// lwz r9,96(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r10,56(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 56);
	// and r4,r11,r9
	ctx.r4.u64 = ctx.r11.u64 & ctx.r9.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82F1EDDC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82f1ee00
	if (ctx.cr0.lt) goto loc_82F1EE00;
	// lwz r10,596(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 596);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r30,r10
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r10.u32, ctx.xer);
	// add r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 + ctx.r29.u64;
	// blt cr6,0x82f1eda0
	if (ctx.cr6.lt) goto loc_82F1EDA0;
	// b 0x82f1ee10
	goto loc_82F1EE10;
loc_82F1EE00:
	// stw r27,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r27.u32);
	// b 0x82f1ee10
	goto loc_82F1EE10;
loc_82F1EE08:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
loc_82F1EE10:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82fa76c0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F1EE18"))) PPC_WEAK_FUNC(sub_82F1EE18);
PPC_FUNC_IMPL(__imp__sub_82F1EE18) {
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
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x82f1ee48
	if (!ctx.cr6.eq) goto loc_82F1EE48;
loc_82F1EE3C:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// b 0x82f1ee80
	goto loc_82F1EE80;
loc_82F1EE48:
	// lwz r11,596(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 596);
	// clrlwi r4,r4,16
	ctx.r4.u64 = ctx.r4.u32 & 0xFFFF;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82f1ee3c
	if (!ctx.cr6.lt) goto loc_82F1EE3C;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r31,72
	ctx.r3.s64 = ctx.r31.s64 + 72;
	// bl 0x82f1e698
	ctx.lr = 0x82F1EE64;
	sub_82F1E698(ctx, base);
	// rlwinm r11,r3,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0x1;
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// and r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 & ctx.r10.u64;
	// bl 0x82f1db40
	ctx.lr = 0x82F1EE80;
	sub_82F1DB40(ctx, base);
loc_82F1EE80:
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

__attribute__((alias("__imp__sub_82F1EE98"))) PPC_WEAK_FUNC(sub_82F1EE98);
PPC_FUNC_IMPL(__imp__sub_82F1EE98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x82F1EEA0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,596(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 596);
	// clrlwi r28,r4,16
	ctx.r28.u64 = ctx.r4.u32 & 0xFFFF;
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82f1eec0
	if (ctx.cr6.lt) goto loc_82F1EEC0;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// b 0x82f1ef84
	goto loc_82F1EF84;
loc_82F1EEC0:
	// addi r30,r3,72
	ctx.r30.s64 = ctx.r3.s64 + 72;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82f1e698
	ctx.lr = 0x82F1EED4;
	sub_82F1E698(ctx, base);
	// rlwinm r11,r3,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0x1;
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// and r31,r11,r10
	ctx.r31.u64 = ctx.r11.u64 & ctx.r10.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82f1eef8
	if (!ctx.cr6.eq) goto loc_82F1EEF8;
	// lis r3,-16371
	ctx.r3.s64 = -1072889856;
	// ori r3,r3,14011
	ctx.r3.u64 = ctx.r3.u64 | 14011;
	// b 0x82f1ef84
	goto loc_82F1EF84;
loc_82F1EEF8:
	// lwz r3,12(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82f1ef08
	if (ctx.cr6.eq) goto loc_82F1EF08;
	// bl 0x82e8ee18
	ctx.lr = 0x82F1EF08;
	sub_82E8EE18(ctx, base);
loc_82F1EF08:
	// lwz r3,20(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// li r29,0
	ctx.r29.s64 = 0;
	// stw r29,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r29.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82f1ef20
	if (ctx.cr6.eq) goto loc_82F1EF20;
	// bl 0x82e8ee18
	ctx.lr = 0x82F1EF20;
	sub_82E8EE18(ctx, base);
loc_82F1EF20:
	// addi r11,r28,1
	ctx.r11.s64 = ctx.r28.s64 + 1;
	// stw r29,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r29.u32);
	// lwz r10,524(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 524);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x82f1ef74
	if (ctx.cr6.gt) goto loc_82F1EF74;
	// mr r31,r29
	ctx.r31.u64 = ctx.r29.u64;
loc_82F1EF38:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82f1e730
	ctx.lr = 0x82F1EF44;
	sub_82F1E730(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82f1ef64
	if (ctx.cr0.lt) goto loc_82F1EF64;
	// lwz r11,524(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 524);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r31,1
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 1, ctx.xer);
	// stw r11,524(r30)
	PPC_STORE_U32(ctx.r30.u32 + 524, ctx.r11.u32);
	// blt cr6,0x82f1ef38
	if (ctx.cr6.lt) goto loc_82F1EF38;
loc_82F1EF64:
	// rlwinm r11,r3,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0x1;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82f1ef80
	if (!ctx.cr6.eq) goto loc_82F1EF80;
loc_82F1EF74:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// b 0x82f1ef84
	goto loc_82F1EF84;
loc_82F1EF80:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82F1EF84:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F1EF8C"))) PPC_WEAK_FUNC(sub_82F1EF8C);
PPC_FUNC_IMPL(__imp__sub_82F1EF8C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F1EF90"))) PPC_WEAK_FUNC(sub_82F1EF90);
PPC_FUNC_IMPL(__imp__sub_82F1EF90) {
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
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82f1efc8
	goto loc_82F1EFC8;
loc_82F1EFAC:
	// addis r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 65536;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// clrlwi r4,r11,16
	ctx.r4.u64 = ctx.r11.u32 & 0xFFFF;
	// bl 0x82f1ee98
	ctx.lr = 0x82F1EFC0;
	sub_82F1EE98(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82f1efd4
	if (ctx.cr0.lt) goto loc_82F1EFD4;
loc_82F1EFC8:
	// lwz r11,596(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 596);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82f1efac
	if (!ctx.cr6.eq) goto loc_82F1EFAC;
loc_82F1EFD4:
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

__attribute__((alias("__imp__sub_82F1EFE8"))) PPC_WEAK_FUNC(sub_82F1EFE8);
PPC_FUNC_IMPL(__imp__sub_82F1EFE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa766c
	ctx.lr = 0x82F1EFF0;
	__savegprlr_25(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,596(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 596);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// li r25,0
	ctx.r25.s64 = 0;
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82f1f080
	if (!ctx.cr6.gt) goto loc_82F1F080;
	// addi r28,r3,72
	ctx.r28.s64 = ctx.r3.s64 + 72;
	// li r30,0
	ctx.r30.s64 = 0;
loc_82F1F01C:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82f1e698
	ctx.lr = 0x82F1F02C;
	sub_82F1E698(ctx, base);
	// rlwinm r11,r3,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0x1;
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// and r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ctx.r10.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82f1f0a0
	if (ctx.cr6.eq) goto loc_82F1F0A0;
	// lhz r10,2(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 2);
	// clrlwi r9,r27,16
	ctx.r9.u64 = ctx.r27.u32 & 0xFFFF;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82f1f068
	if (!ctx.cr6.eq) goto loc_82F1F068;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r4,12(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// bl 0x82fa6640
	ctx.lr = 0x82F1F060;
	sub_82FA6640(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82f1f080
	if (ctx.cr0.eq) goto loc_82F1F080;
loc_82F1F068:
	// addi r11,r30,1
	ctx.r11.s64 = ctx.r30.s64 + 1;
	// lwz r10,596(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 596);
	// clrlwi r29,r11,16
	ctx.r29.u64 = ctx.r11.u32 & 0xFFFF;
	// mr r30,r29
	ctx.r30.u64 = ctx.r29.u64;
	// cmplw cr6,r10,r29
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r29.u32, ctx.xer);
	// bgt cr6,0x82f1f01c
	if (ctx.cr6.gt) goto loc_82F1F01C;
loc_82F1F080:
	// lwz r11,596(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 596);
	// clrlwi r10,r29,16
	ctx.r10.u64 = ctx.r29.u32 & 0xFFFF;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x82f1f094
	if (ctx.cr6.gt) goto loc_82F1F094;
	// li r25,1
	ctx.r25.s64 = 1;
loc_82F1F094:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
loc_82F1F098:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82fa76bc
	__restgprlr_25(ctx, base);
	return;
loc_82F1F0A0:
	// lis r3,-16371
	ctx.r3.s64 = -1072889856;
	// ori r3,r3,14011
	ctx.r3.u64 = ctx.r3.u64 | 14011;
	// b 0x82f1f098
	goto loc_82F1F098;
}

__attribute__((alias("__imp__sub_82F1F0AC"))) PPC_WEAK_FUNC(sub_82F1F0AC);
PPC_FUNC_IMPL(__imp__sub_82F1F0AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F1F0B0"))) PPC_WEAK_FUNC(sub_82F1F0B0);
PPC_FUNC_IMPL(__imp__sub_82F1F0B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7670
	ctx.lr = 0x82F1F0B8;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x82f1f0e0
	if (!ctx.cr6.eq) goto loc_82F1F0E0;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// b 0x82f1f170
	goto loc_82F1F170;
loc_82F1F0E0:
	// li r31,0
	ctx.r31.s64 = 0;
	// sth r31,0(r30)
	PPC_STORE_U16(ctx.r30.u32 + 0, ctx.r31.u16);
	// lwz r11,596(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 596);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82f1f16c
	if (!ctx.cr6.gt) goto loc_82F1F16C;
	// addi r28,r29,72
	ctx.r28.s64 = ctx.r29.s64 + 72;
loc_82F1F0F8:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82f1e698
	ctx.lr = 0x82F1F108;
	sub_82F1E698(ctx, base);
	// rlwinm r11,r3,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0x1;
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// and r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ctx.r10.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82f1f178
	if (ctx.cr6.eq) goto loc_82F1F178;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x82f1f138
	if (ctx.cr6.eq) goto loc_82F1F138;
	// lhz r10,2(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 2);
	// lhz r9,0(r27)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r27.u32 + 0);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82f1f15c
	if (!ctx.cr6.eq) goto loc_82F1F15C;
loc_82F1F138:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x82f1f150
	if (ctx.cr6.eq) goto loc_82F1F150;
	// lhz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// lhz r10,0(r26)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r26.u32 + 0);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82f1f15c
	if (!ctx.cr6.eq) goto loc_82F1F15C;
loc_82F1F150:
	// lhz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// sth r11,0(r30)
	PPC_STORE_U16(ctx.r30.u32 + 0, ctx.r11.u16);
loc_82F1F15C:
	// lwz r11,596(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 596);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82f1f0f8
	if (ctx.cr6.lt) goto loc_82F1F0F8;
loc_82F1F16C:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82F1F170:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82fa76c0
	__restgprlr_26(ctx, base);
	return;
loc_82F1F178:
	// lis r3,-16371
	ctx.r3.s64 = -1072889856;
	// ori r3,r3,14011
	ctx.r3.u64 = ctx.r3.u64 | 14011;
	// b 0x82f1f170
	goto loc_82F1F170;
}

__attribute__((alias("__imp__sub_82F1F184"))) PPC_WEAK_FUNC(sub_82F1F184);
PPC_FUNC_IMPL(__imp__sub_82F1F184) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F1F188"))) PPC_WEAK_FUNC(sub_82F1F188);
PPC_FUNC_IMPL(__imp__sub_82F1F188) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7668
	ctx.lr = 0x82F1F190;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// mr r24,r6
	ctx.r24.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82f1f248
	if (ctx.cr6.eq) goto loc_82F1F248;
	// lwz r11,596(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 596);
	// li r29,0
	ctx.r29.s64 = 0;
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82f1f248
	if (!ctx.cr6.gt) goto loc_82F1F248;
	// addi r28,r3,72
	ctx.r28.s64 = ctx.r3.s64 + 72;
loc_82F1F1C8:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82f1e698
	ctx.lr = 0x82F1F1D8;
	sub_82F1E698(ctx, base);
	// rlwinm r11,r3,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0x1;
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// and r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ctx.r10.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82f1f258
	if (ctx.cr6.eq) goto loc_82F1F258;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x82f1f208
	if (ctx.cr6.eq) goto loc_82F1F208;
	// lhz r10,2(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 2);
	// lhz r9,0(r26)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r26.u32 + 0);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82f1f238
	if (!ctx.cr6.eq) goto loc_82F1F238;
loc_82F1F208:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x82f1f220
	if (ctx.cr6.eq) goto loc_82F1F220;
	// lhz r10,0(r25)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r25.u32 + 0);
	// lhz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82f1f238
	if (!ctx.cr6.eq) goto loc_82F1F238;
loc_82F1F220:
	// clrlwi r11,r29,16
	ctx.r11.u64 = ctx.r29.u32 & 0xFFFF;
	// clrlwi r10,r24,16
	ctx.r10.u64 = ctx.r24.u32 & 0xFFFF;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82f1f264
	if (ctx.cr6.eq) goto loc_82F1F264;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r29,r11,16
	ctx.r29.u64 = ctx.r11.u32 & 0xFFFF;
loc_82F1F238:
	// lwz r11,596(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 596);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82f1f1c8
	if (ctx.cr6.lt) goto loc_82F1F1C8;
loc_82F1F248:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
loc_82F1F250:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82fa76b8
	__restgprlr_24(ctx, base);
	return;
loc_82F1F258:
	// lis r3,-16371
	ctx.r3.s64 = -1072889856;
	// ori r3,r3,14011
	ctx.r3.u64 = ctx.r3.u64 | 14011;
	// b 0x82f1f250
	goto loc_82F1F250;
loc_82F1F264:
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// clrlwi r4,r31,16
	ctx.r4.u64 = ctx.r31.u32 & 0xFFFF;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82f1ee18
	ctx.lr = 0x82F1F274;
	sub_82F1EE18(ctx, base);
	// b 0x82f1f250
	goto loc_82F1F250;
}

__attribute__((alias("__imp__sub_82F1F278"))) PPC_WEAK_FUNC(sub_82F1F278);
PPC_FUNC_IMPL(__imp__sub_82F1F278) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa766c
	ctx.lr = 0x82F1F280;
	__savegprlr_25(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,596(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 596);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82f1f32c
	if (!ctx.cr6.gt) goto loc_82F1F32C;
	// addi r25,r3,72
	ctx.r25.s64 = ctx.r3.s64 + 72;
loc_82F1F2AC:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82f1e698
	ctx.lr = 0x82F1F2BC;
	sub_82F1E698(ctx, base);
	// rlwinm r11,r3,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0x1;
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// and r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ctx.r10.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82f1f33c
	if (ctx.cr6.eq) goto loc_82F1F33C;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82f1f2ec
	if (ctx.cr6.eq) goto loc_82F1F2EC;
	// lhz r10,2(r11)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r11.u32 + 2);
	// lhz r9,0(r28)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r28.u32 + 0);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82f1f31c
	if (!ctx.cr6.eq) goto loc_82F1F31C;
loc_82F1F2EC:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x82f1f304
	if (ctx.cr6.eq) goto loc_82F1F304;
	// lhz r10,0(r27)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r27.u32 + 0);
	// lhz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82f1f31c
	if (!ctx.cr6.eq) goto loc_82F1F31C;
loc_82F1F304:
	// clrlwi r11,r29,16
	ctx.r11.u64 = ctx.r29.u32 & 0xFFFF;
	// clrlwi r10,r26,16
	ctx.r10.u64 = ctx.r26.u32 & 0xFFFF;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82f1f348
	if (ctx.cr6.eq) goto loc_82F1F348;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r29,r11,16
	ctx.r29.u64 = ctx.r11.u32 & 0xFFFF;
loc_82F1F31C:
	// lwz r11,596(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 596);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82f1f2ac
	if (ctx.cr6.lt) goto loc_82F1F2AC;
loc_82F1F32C:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
loc_82F1F334:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82fa76bc
	__restgprlr_25(ctx, base);
	return;
loc_82F1F33C:
	// lis r3,-16371
	ctx.r3.s64 = -1072889856;
	// ori r3,r3,14011
	ctx.r3.u64 = ctx.r3.u64 | 14011;
	// b 0x82f1f334
	goto loc_82F1F334;
loc_82F1F348:
	// clrlwi r4,r31,16
	ctx.r4.u64 = ctx.r31.u32 & 0xFFFF;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82f1ee98
	ctx.lr = 0x82F1F354;
	sub_82F1EE98(ctx, base);
	// b 0x82f1f334
	goto loc_82F1F334;
}

__attribute__((alias("__imp__sub_82F1F358"))) PPC_WEAK_FUNC(sub_82F1F358);
PPC_FUNC_IMPL(__imp__sub_82F1F358) {
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
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// lis r10,-32234
	ctx.r10.s64 = -2112487424;
	// addi r11,r11,8144
	ctx.r11.s64 = ctx.r11.s64 + 8144;
	// addi r10,r10,9000
	ctx.r10.s64 = ctx.r10.s64 + 9000;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// addi r30,r3,4
	ctx.r30.s64 = ctx.r3.s64 + 4;
	// bl 0x82f1ef90
	ctx.lr = 0x82F1F390;
	sub_82F1EF90(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82f727f8
	ctx.lr = 0x82F1F398;
	sub_82F727F8(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r3,r31,72
	ctx.r3.s64 = ctx.r31.s64 + 72;
	// addi r11,r11,8136
	ctx.r11.s64 = ctx.r11.s64 + 8136;
	// stw r11,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r11.u32);
	// lwz r11,76(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82f1f3bc
	if (!ctx.cr6.eq) goto loc_82F1F3BC;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82f30518
	ctx.lr = 0x82F1F3BC;
	sub_82F30518(ctx, base);
loc_82F1F3BC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e95e10
	ctx.lr = 0x82F1F3C4;
	sub_82E95E10(ctx, base);
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

__attribute__((alias("__imp__sub_82F1F3DC"))) PPC_WEAK_FUNC(sub_82F1F3DC);
PPC_FUNC_IMPL(__imp__sub_82F1F3DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F1F3E0"))) PPC_WEAK_FUNC(sub_82F1F3E0);
PPC_FUNC_IMPL(__imp__sub_82F1F3E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7664
	ctx.lr = 0x82F1F3E8;
	__savegprlr_23(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r23,r4
	ctx.r23.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82f1f40c
	if (!ctx.cr6.eq) goto loc_82F1F40C;
	// lis r3,-16371
	ctx.r3.s64 = -1072889856;
	// ori r3,r3,14006
	ctx.r3.u64 = ctx.r3.u64 | 14006;
	// b 0x82f1f5c0
	goto loc_82F1F5C0;
loc_82F1F40C:
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// bne cr6,0x82f1f420
	if (!ctx.cr6.eq) goto loc_82F1F420;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// b 0x82f1f5c0
	goto loc_82F1F5C0;
loc_82F1F420:
	// li r29,0
	ctx.r29.s64 = 0;
	// stw r29,0(r23)
	PPC_STORE_U32(ctx.r23.u32 + 0, ctx.r29.u32);
	// lwz r24,64(r31)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// cmplwi cr6,r24,26
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 26, ctx.xer);
	// bge cr6,0x82f1f448
	if (!ctx.cr6.lt) goto loc_82F1F448;
	// li r11,26
	ctx.r11.s64 = 26;
	// lis r30,-16371
	ctx.r30.s64 = -1072889856;
	// stw r11,0(r23)
	PPC_STORE_U32(ctx.r23.u32 + 0, ctx.r11.u32);
	// ori r30,r30,14001
	ctx.r30.u64 = ctx.r30.u64 | 14001;
	// b 0x82f1f5b4
	goto loc_82F1F5B4;
loc_82F1F448:
	// addi r28,r31,40
	ctx.r28.s64 = ctx.r31.s64 + 40;
	// addi r3,r31,16
	ctx.r3.s64 = ctx.r31.s64 + 16;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x82e95128
	ctx.lr = 0x82F1F458;
	sub_82E95128(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// bl 0x82e951b0
	ctx.lr = 0x82F1F464;
	sub_82E951B0(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// sth r29,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r29.u16);
	// bl 0x82e95240
	ctx.lr = 0x82F1F474;
	sub_82E95240(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt 0x82f1f560
	if (ctx.cr0.lt) goto loc_82F1F560;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f1ef90
	ctx.lr = 0x82F1F484;
	sub_82F1EF90(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt 0x82f1f560
	if (ctx.cr0.lt) goto loc_82F1F560;
	// lhz r25,80(r1)
	ctx.r25.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// mr r26,r29
	ctx.r26.u64 = ctx.r29.u64;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// cmplwi r25,0
	ctx.cr0.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq 0x82f1f560
	if (ctx.cr0.eq) goto loc_82F1F560;
loc_82F1F4A0:
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r9,64(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// addi r6,r1,84
	ctx.r6.s64 = ctx.r1.s64 + 84;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// std r29,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r29.u64);
	// subf r27,r9,r24
	ctx.r27.s64 = ctx.r24.s64 - ctx.r9.s64;
	// std r29,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r29.u64);
	// std r29,16(r11)
	PPC_STORE_U64(ctx.r11.u32 + 16, ctx.r29.u64);
	// lwz r11,52(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 52);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F1F4D8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt 0x82f1f538
	if (ctx.cr0.lt) goto loc_82F1F538;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,64(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F1F4F8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt 0x82f1f560
	if (ctx.cr0.lt) goto loc_82F1F560;
	// li r7,0
	ctx.r7.s64 = 0;
	// ld r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// addi r3,r31,72
	ctx.r3.s64 = ctx.r31.s64 + 72;
	// ld r5,104(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 104);
	// ld r6,112(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// bl 0x82f1e620
	ctx.lr = 0x82F1F518;
	sub_82F1E620(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82f1f558
	if (ctx.cr0.eq) goto loc_82F1F558;
	// clrlwi r11,r26,16
	ctx.r11.u64 = ctx.r26.u32 & 0xFFFF;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r26,r11,16
	ctx.r26.u64 = ctx.r11.u32 & 0xFFFF;
	// cmplw cr6,r26,r25
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r25.u32, ctx.xer);
	// blt cr6,0x82f1f4a0
	if (ctx.cr6.lt) goto loc_82F1F4A0;
	// b 0x82f1f560
	goto loc_82F1F560;
loc_82F1F538:
	// lis r11,-16371
	ctx.r11.s64 = -1072889856;
	// ori r11,r11,14001
	ctx.r11.u64 = ctx.r11.u64 | 14001;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x82f1f570
	if (!ctx.cr6.eq) goto loc_82F1F570;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// add r11,r27,r11
	ctx.r11.u64 = ctx.r27.u64 + ctx.r11.u64;
	// stw r11,0(r23)
	PPC_STORE_U32(ctx.r23.u32 + 0, ctx.r11.u32);
	// b 0x82f1f5b4
	goto loc_82F1F5B4;
loc_82F1F558:
	// lis r30,-32768
	ctx.r30.s64 = -2147483648;
	// ori r30,r30,16389
	ctx.r30.u64 = ctx.r30.u64 | 16389;
loc_82F1F560:
	// lis r11,-16371
	ctx.r11.s64 = -1072889856;
	// ori r11,r11,14001
	ctx.r11.u64 = ctx.r11.u64 | 14001;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x82f1f5ac
	if (ctx.cr6.eq) goto loc_82F1F5AC;
loc_82F1F570:
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// subf r11,r11,r24
	ctx.r11.s64 = ctx.r24.s64 - ctx.r11.s64;
	// stw r11,0(r23)
	PPC_STORE_U32(ctx.r23.u32 + 0, ctx.r11.u32);
	// blt cr6,0x82f1f5b4
	if (ctx.cr6.lt) goto loc_82F1F5B4;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,44(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F1F598;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// cmpld cr6,r3,r11
	ctx.cr6.compare<uint64_t>(ctx.r3.u64, ctx.r11.u64, ctx.xer);
	// beq cr6,0x82f1f5ac
	if (ctx.cr6.eq) goto loc_82F1F5AC;
	// lis r30,-16371
	ctx.r30.s64 = -1072889856;
	// ori r30,r30,15002
	ctx.r30.u64 = ctx.r30.u64 | 15002;
loc_82F1F5AC:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge cr6,0x82f1f5bc
	if (!ctx.cr6.lt) goto loc_82F1F5BC;
loc_82F1F5B4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f1ef90
	ctx.lr = 0x82F1F5BC;
	sub_82F1EF90(ctx, base);
loc_82F1F5BC:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_82F1F5C0:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82fa76b4
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F1F5C8"))) PPC_WEAK_FUNC(sub_82F1F5C8);
PPC_FUNC_IMPL(__imp__sub_82F1F5C8) {
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
	// bl 0x82f1eb08
	ctx.lr = 0x82F1F5E0;
	sub_82F1EB08(ctx, base);
	// lis r11,-32241
	ctx.r11.s64 = -2112946176;
	// lis r10,-32234
	ctx.r10.s64 = -2112487424;
	// lis r9,-32234
	ctx.r9.s64 = -2112487424;
	// addi r8,r11,24
	ctx.r8.s64 = ctx.r11.s64 + 24;
	// addi r10,r10,8216
	ctx.r10.s64 = ctx.r10.s64 + 8216;
	// addi r9,r9,9000
	ctx.r9.s64 = ctx.r9.s64 + 9000;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// lwz r11,4(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// lwz r11,8(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// lwz r11,12(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82F1F638"))) PPC_WEAK_FUNC(sub_82F1F638);
PPC_FUNC_IMPL(__imp__sub_82F1F638) {
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
	// bl 0x82f1eb08
	ctx.lr = 0x82F1F650;
	sub_82F1EB08(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// lis r10,-32234
	ctx.r10.s64 = -2112487424;
	// lis r9,-32234
	ctx.r9.s64 = -2112487424;
	// addi r8,r11,28048
	ctx.r8.s64 = ctx.r11.s64 + 28048;
	// addi r10,r10,8288
	ctx.r10.s64 = ctx.r10.s64 + 8288;
	// addi r9,r9,9000
	ctx.r9.s64 = ctx.r9.s64 + 9000;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r9,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,28048(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28048);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// lwz r11,4(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// lwz r11,8(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// lwz r11,12(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// stw r10,600(r31)
	PPC_STORE_U32(ctx.r31.u32 + 600, ctx.r10.u32);
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82F1F6B0"))) PPC_WEAK_FUNC(sub_82F1F6B0);
PPC_FUNC_IMPL(__imp__sub_82F1F6B0) {
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
	// bl 0x82f1f638
	ctx.lr = 0x82F1F6C8;
	sub_82F1F638(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// lis r10,-32234
	ctx.r10.s64 = -2112487424;
	// lis r9,-32234
	ctx.r9.s64 = -2112487424;
	// addi r8,r11,28064
	ctx.r8.s64 = ctx.r11.s64 + 28064;
	// addi r10,r10,8288
	ctx.r10.s64 = ctx.r10.s64 + 8288;
	// addi r9,r9,9000
	ctx.r9.s64 = ctx.r9.s64 + 9000;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
	// lwz r11,28064(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28064);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// lwz r11,4(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// lwz r11,8(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// lwz r11,12(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82F1F720"))) PPC_WEAK_FUNC(sub_82F1F720);
PPC_FUNC_IMPL(__imp__sub_82F1F720) {
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
	// bl 0x82f1f358
	ctx.lr = 0x82F1F740;
	sub_82F1F358(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f1f758
	if (ctx.cr0.eq) goto loc_82F1F758;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82f1f758
	if (ctx.cr6.eq) goto loc_82F1F758;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e8ee18
	ctx.lr = 0x82F1F758;
	sub_82E8EE18(ctx, base);
loc_82F1F758:
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

__attribute__((alias("__imp__sub_82F1F774"))) PPC_WEAK_FUNC(sub_82F1F774);
PPC_FUNC_IMPL(__imp__sub_82F1F774) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F1F778"))) PPC_WEAK_FUNC(sub_82F1F778);
PPC_FUNC_IMPL(__imp__sub_82F1F778) {
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
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// lis r10,-32234
	ctx.r10.s64 = -2112487424;
	// addi r11,r11,8216
	ctx.r11.s64 = ctx.r11.s64 + 8216;
	// addi r10,r10,9000
	ctx.r10.s64 = ctx.r10.s64 + 9000;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82f1f358
	ctx.lr = 0x82F1F7B0;
	sub_82F1F358(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f1f7c0
	if (ctx.cr0.eq) goto loc_82F1F7C0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e8ee18
	ctx.lr = 0x82F1F7C0;
	sub_82E8EE18(ctx, base);
loc_82F1F7C0:
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

__attribute__((alias("__imp__sub_82F1F7DC"))) PPC_WEAK_FUNC(sub_82F1F7DC);
PPC_FUNC_IMPL(__imp__sub_82F1F7DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F1F7E0"))) PPC_WEAK_FUNC(sub_82F1F7E0);
PPC_FUNC_IMPL(__imp__sub_82F1F7E0) {
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
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// lis r10,-32234
	ctx.r10.s64 = -2112487424;
	// addi r11,r11,8288
	ctx.r11.s64 = ctx.r11.s64 + 8288;
	// addi r10,r10,9000
	ctx.r10.s64 = ctx.r10.s64 + 9000;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r10,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r10.u32);
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// bl 0x82f1f358
	ctx.lr = 0x82F1F818;
	sub_82F1F358(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f1f828
	if (ctx.cr0.eq) goto loc_82F1F828;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e8ee18
	ctx.lr = 0x82F1F828;
	sub_82E8EE18(ctx, base);
loc_82F1F828:
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

__attribute__((alias("__imp__sub_82F1F844"))) PPC_WEAK_FUNC(sub_82F1F844);
PPC_FUNC_IMPL(__imp__sub_82F1F844) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F1F848"))) PPC_WEAK_FUNC(sub_82F1F848);
PPC_FUNC_IMPL(__imp__sub_82F1F848) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7670
	ctx.lr = 0x82F1F850;
	__savegprlr_26(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82f1f9c0
	if (ctx.cr6.eq) goto loc_82F1F9C0;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82f1f9c0
	if (ctx.cr6.eq) goto loc_82F1F9C0;
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// lwz r10,0(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// std r31,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r31.u64);
	// std r31,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r31.u64);
	// lwz r11,12(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F1F89C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt 0x82f1f9c8
	if (ctx.cr0.lt) goto loc_82F1F9C8;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82f1f9c8
	if (ctx.cr6.eq) goto loc_82F1F9C8;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r27,r11,1552
	ctx.r27.s64 = ctx.r11.s64 + 1552;
loc_82F1F8B8:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F1F8D4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt 0x82f1f9c8
	if (ctx.cr0.lt) goto loc_82F1F9C8;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// addi r8,r27,16
	ctx.r8.s64 = ctx.r27.s64 + 16;
loc_82F1F8E8:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r9,r7,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r7.s64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82f1f908
	if (!ctx.cr0.eq) goto loc_82F1F908;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x82f1f8e8
	if (!ctx.cr6.eq) goto loc_82F1F8E8;
loc_82F1F908:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x82f1f944
	if (ctx.cr0.eq) goto loc_82F1F944;
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// addi r8,r11,16
	ctx.r8.s64 = ctx.r11.s64 + 16;
loc_82F1F91C:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r9,r7,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r7.s64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82f1f93c
	if (!ctx.cr0.eq) goto loc_82F1F93C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x82f1f91c
	if (!ctx.cr6.eq) goto loc_82F1F91C;
loc_82F1F93C:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82f1f9ac
	if (!ctx.cr0.eq) goto loc_82F1F9AC;
loc_82F1F944:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F1F960;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt 0x82f1f9c8
	if (ctx.cr0.lt) goto loc_82F1F9C8;
	// lwz r11,0(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r11,24(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F1F984;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-16371
	ctx.r11.s64 = -1072889856;
	// ori r11,r11,16014
	ctx.r11.u64 = ctx.r11.u64 | 16014;
	// subf r11,r11,r3
	ctx.r11.s64 = ctx.r3.s64 - ctx.r11.s64;
	// subfic r11,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r11.s64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r30,r11,r3
	ctx.r30.u64 = ctx.r11.u64 & ctx.r3.u64;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt cr6,0x82f1f9c8
	if (ctx.cr6.lt) goto loc_82F1F9C8;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82e8e518
	ctx.lr = 0x82F1F9AC;
	sub_82E8E518(ctx, base);
loc_82F1F9AC:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82f1f8b8
	if (ctx.cr6.lt) goto loc_82F1F8B8;
	// b 0x82f1f9c8
	goto loc_82F1F9C8;
loc_82F1F9C0:
	// lis r30,-32761
	ctx.r30.s64 = -2147024896;
	// ori r30,r30,87
	ctx.r30.u64 = ctx.r30.u64 | 87;
loc_82F1F9C8:
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82e8e518
	ctx.lr = 0x82F1F9D0;
	sub_82E8E518(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82fa76c0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F1F9DC"))) PPC_WEAK_FUNC(sub_82F1F9DC);
PPC_FUNC_IMPL(__imp__sub_82F1F9DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F1F9E0"))) PPC_WEAK_FUNC(sub_82F1F9E0);
PPC_FUNC_IMPL(__imp__sub_82F1F9E0) {
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
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x82f1fa04
	if (!ctx.cr6.eq) goto loc_82F1FA04;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// b 0x82f1faf0
	goto loc_82F1FAF0;
loc_82F1FA04:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r10,r11,24884
	ctx.r10.s64 = ctx.r11.s64 + 24884;
	// stw r31,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r31.u32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// addi r9,r4,16
	ctx.r9.s64 = ctx.r4.s64 + 16;
loc_82F1FA1C:
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r8,r7,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r7.s64;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x82f1fa3c
	if (!ctx.cr0.eq) goto loc_82F1FA3C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// bne cr6,0x82f1fa1c
	if (!ctx.cr6.eq) goto loc_82F1FA1C;
loc_82F1FA3C:
	// cmpwi r8,0
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x82f1fad8
	if (ctx.cr0.eq) goto loc_82F1FAD8;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// addi r10,r10,4652
	ctx.r10.s64 = ctx.r10.s64 + 4652;
	// addi r8,r4,16
	ctx.r8.s64 = ctx.r4.s64 + 16;
loc_82F1FA54:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r9,r7,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r7.s64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82f1fa74
	if (!ctx.cr0.eq) goto loc_82F1FA74;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x82f1fa54
	if (!ctx.cr6.eq) goto loc_82F1FA54;
loc_82F1FA74:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x82f1fad8
	if (ctx.cr0.eq) goto loc_82F1FAD8;
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// addi r10,r10,24900
	ctx.r10.s64 = ctx.r10.s64 + 24900;
	// addi r8,r4,16
	ctx.r8.s64 = ctx.r4.s64 + 16;
loc_82F1FA8C:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r9,r7,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r7.s64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82f1faac
	if (!ctx.cr0.eq) goto loc_82F1FAAC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x82f1fa8c
	if (!ctx.cr6.eq) goto loc_82F1FA8C;
loc_82F1FAAC:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82f1facc
	if (!ctx.cr0.eq) goto loc_82F1FACC;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r11,r3,76
	ctx.r11.s64 = ctx.r3.s64 + 76;
	// bne cr6,0x82f1fac4
	if (!ctx.cr6.eq) goto loc_82F1FAC4;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
loc_82F1FAC4:
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// b 0x82f1fadc
	goto loc_82F1FADC;
loc_82F1FACC:
	// lis r31,-32768
	ctx.r31.s64 = -2147483648;
	// ori r31,r31,16386
	ctx.r31.u64 = ctx.r31.u64 | 16386;
	// b 0x82f1faec
	goto loc_82F1FAEC;
loc_82F1FAD8:
	// stw r3,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r3.u32);
loc_82F1FADC:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F1FAEC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82F1FAEC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82F1FAF0:
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

__attribute__((alias("__imp__sub_82F1FB04"))) PPC_WEAK_FUNC(sub_82F1FB04);
PPC_FUNC_IMPL(__imp__sub_82F1FB04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F1FB08"))) PPC_WEAK_FUNC(sub_82F1FB08);
PPC_FUNC_IMPL(__imp__sub_82F1FB08) {
	PPC_FUNC_PROLOGUE();
	// addi r11,r3,92
	ctx.r11.s64 = ctx.r3.s64 + 92;
loc_82F1FB0C:
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
	// bne 0x82f1fb0c
	if (!ctx.cr0.eq) goto loc_82F1FB0C;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F1FB30"))) PPC_WEAK_FUNC(sub_82F1FB30);
PPC_FUNC_IMPL(__imp__sub_82F1FB30) {
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
	// addi r11,r3,92
	ctx.r11.s64 = ctx.r3.s64 + 92;
loc_82F1FB44:
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
	// bne 0x82f1fb44
	if (!ctx.cr0.eq) goto loc_82F1FB44;
	// mr r31,r10
	ctx.r31.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82f1fb88
	if (!ctx.cr6.eq) goto loc_82F1FB88;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82f1fb88
	if (ctx.cr6.eq) goto loc_82F1FB88;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,140(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 140);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F1FB88;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82F1FB88:
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

__attribute__((alias("__imp__sub_82F1FBA0"))) PPC_WEAK_FUNC(sub_82F1FBA0);
PPC_FUNC_IMPL(__imp__sub_82F1FBA0) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82f1fbbc
	if (!ctx.cr6.eq) goto loc_82F1FBBC;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// blr 
	return;
loc_82F1FBBC:
	// lwz r11,100(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F1FBC8"))) PPC_WEAK_FUNC(sub_82F1FBC8);
PPC_FUNC_IMPL(__imp__sub_82F1FBC8) {
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
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82f1fbf0
	if (!ctx.cr6.eq) goto loc_82F1FBF0;
	// lis r31,-32761
	ctx.r31.s64 = -2147024896;
	// ori r31,r31,87
	ctx.r31.u64 = ctx.r31.u64 | 87;
	// b 0x82f1fc1c
	goto loc_82F1FC1C;
loc_82F1FBF0:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r3,r3,76
	ctx.r3.s64 = ctx.r3.s64 + 76;
	// bne cr6,0x82f1fc00
	if (!ctx.cr6.eq) goto loc_82F1FC00;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82F1FC00:
	// stw r3,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82f1fc1c
	if (ctx.cr6.eq) goto loc_82F1FC1C;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F1FC1C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82F1FC1C:
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

__attribute__((alias("__imp__sub_82F1FC34"))) PPC_WEAK_FUNC(sub_82F1FC34);
PPC_FUNC_IMPL(__imp__sub_82F1FC34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F1FC38"))) PPC_WEAK_FUNC(sub_82F1FC38);
PPC_FUNC_IMPL(__imp__sub_82F1FC38) {
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
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,8360
	ctx.r11.s64 = ctx.r11.s64 + 8360;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bl 0x82e901b0
	ctx.lr = 0x82F1FC5C;
	sub_82E901B0(ctx, base);
	// lwz r3,64(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82f1fc6c
	if (ctx.cr6.eq) goto loc_82F1FC6C;
	// bl 0x82e8ee18
	ctx.lr = 0x82F1FC6C;
	sub_82E8EE18(ctx, base);
loc_82F1FC6C:
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// stw r11,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r11.u32);
	// bl 0x82e8f0c8
	ctx.lr = 0x82F1FC80;
	sub_82E8F0C8(ctx, base);
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

__attribute__((alias("__imp__sub_82F1FC94"))) PPC_WEAK_FUNC(sub_82F1FC94);
PPC_FUNC_IMPL(__imp__sub_82F1FC94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F1FC98"))) PPC_WEAK_FUNC(sub_82F1FC98);
PPC_FUNC_IMPL(__imp__sub_82F1FC98) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,72(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F1FCA8"))) PPC_WEAK_FUNC(sub_82F1FCA8);
PPC_FUNC_IMPL(__imp__sub_82F1FCA8) {
	PPC_FUNC_PROLOGUE();
	// std r4,32(r1)
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.r4.u64);
	// mr r9,r6
	ctx.r9.u64 = ctx.r6.u64;
	// std r5,40(r1)
	PPC_STORE_U64(ctx.r1.u32 + 40, ctx.r5.u64);
	// li r5,0
	ctx.r5.s64 = 0;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82f1fd04
	if (ctx.cr6.eq) goto loc_82F1FD04;
loc_82F1FCC0:
	// addi r11,r1,32
	ctx.r11.s64 = ctx.r1.s64 + 32;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// addi r6,r11,16
	ctx.r6.s64 = ctx.r11.s64 + 16;
loc_82F1FCCC:
	// lbz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r4,0(r10)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r8,r4,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r4.s64;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne 0x82f1fcec
	if (!ctx.cr0.eq) goto loc_82F1FCEC;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r6
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r6.s32, ctx.xer);
	// bne cr6,0x82f1fccc
	if (!ctx.cr6.eq) goto loc_82F1FCCC;
loc_82F1FCEC:
	// cmpwi r8,0
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x82f1fd0c
	if (ctx.cr0.eq) goto loc_82F1FD0C;
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// addi r9,r9,16
	ctx.r9.s64 = ctx.r9.s64 + 16;
	// cmplw cr6,r5,r7
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r7.u32, ctx.xer);
	// blt cr6,0x82f1fcc0
	if (ctx.cr6.lt) goto loc_82F1FCC0;
loc_82F1FD04:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82F1FD0C:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F1FD14"))) PPC_WEAK_FUNC(sub_82F1FD14);
PPC_FUNC_IMPL(__imp__sub_82F1FD14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F1FD18"))) PPC_WEAK_FUNC(sub_82F1FD18);
PPC_FUNC_IMPL(__imp__sub_82F1FD18) {
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
	// bl 0x82f1fc38
	ctx.lr = 0x82F1FD38;
	sub_82F1FC38(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f1fd50
	if (ctx.cr0.eq) goto loc_82F1FD50;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82f1fd50
	if (ctx.cr6.eq) goto loc_82F1FD50;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e8ee18
	ctx.lr = 0x82F1FD50;
	sub_82E8EE18(ctx, base);
loc_82F1FD50:
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

__attribute__((alias("__imp__sub_82F1FD6C"))) PPC_WEAK_FUNC(sub_82F1FD6C);
PPC_FUNC_IMPL(__imp__sub_82F1FD6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F1FD70"))) PPC_WEAK_FUNC(sub_82F1FD70);
PPC_FUNC_IMPL(__imp__sub_82F1FD70) {
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
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// lis r10,-32234
	ctx.r10.s64 = -2112487424;
	// addi r11,r11,8544
	ctx.r11.s64 = ctx.r11.s64 + 8544;
	// addi r10,r10,8504
	ctx.r10.s64 = ctx.r10.s64 + 8504;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// addi r3,r3,76
	ctx.r3.s64 = ctx.r3.s64 + 76;
	// stw r10,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r10.u32);
	// bl 0x82f721e8
	ctx.lr = 0x82F1FDA4;
	sub_82F721E8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f1fc38
	ctx.lr = 0x82F1FDAC;
	sub_82F1FC38(ctx, base);
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

__attribute__((alias("__imp__sub_82F1FDC0"))) PPC_WEAK_FUNC(sub_82F1FDC0);
PPC_FUNC_IMPL(__imp__sub_82F1FDC0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-76
	ctx.r3.s64 = ctx.r3.s64 + -76;
	// b 0x82f1fb30
	sub_82F1FB30(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F1FDC8"))) PPC_WEAK_FUNC(sub_82F1FDC8);
PPC_FUNC_IMPL(__imp__sub_82F1FDC8) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-76
	ctx.r3.s64 = ctx.r3.s64 + -76;
	// b 0x82f1fb08
	sub_82F1FB08(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F1FDD0"))) PPC_WEAK_FUNC(sub_82F1FDD0);
PPC_FUNC_IMPL(__imp__sub_82F1FDD0) {
	PPC_FUNC_PROLOGUE();
	// addi r3,r3,-76
	ctx.r3.s64 = ctx.r3.s64 + -76;
	// b 0x82f1f9e0
	sub_82F1F9E0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F1FDD8"))) PPC_WEAK_FUNC(sub_82F1FDD8);
PPC_FUNC_IMPL(__imp__sub_82F1FDD8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7674
	ctx.lr = 0x82F1FDE0;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r28,r3,4
	ctx.r28.s64 = ctx.r3.s64 + 4;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// bl 0x82e8f128
	ctx.lr = 0x82F1FE04;
	sub_82E8F128(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e887b8
	ctx.lr = 0x82F1FE10;
	sub_82E887B8(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// beq 0x82f1fe30
	if (ctx.cr0.eq) goto loc_82F1FE30;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82f1fe38
	if (ctx.cr6.eq) goto loc_82F1FE38;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82e8e520
	ctx.lr = 0x82F1FE28;
	sub_82E8E520(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x82f1fe38
	goto loc_82F1FE38;
loc_82F1FE30:
	// lis r30,-16371
	ctx.r30.s64 = -1072889856;
	// ori r30,r30,14054
	ctx.r30.u64 = ctx.r30.u64 | 14054;
loc_82F1FE38:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82e8f250
	ctx.lr = 0x82F1FE44;
	sub_82E8F250(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F1FE50"))) PPC_WEAK_FUNC(sub_82F1FE50);
PPC_FUNC_IMPL(__imp__sub_82F1FE50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7670
	ctx.lr = 0x82F1FE58;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r26,r3,4
	ctx.r26.s64 = ctx.r3.s64 + 4;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// li r27,0
	ctx.r27.s64 = 0;
	// bl 0x82e8f128
	ctx.lr = 0x82F1FE80;
	sub_82E8F128(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e887b8
	ctx.lr = 0x82F1FE8C;
	sub_82E887B8(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x82f1ff08
	if (ctx.cr0.eq) goto loc_82F1FF08;
	// lhz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 31, ctx.xer);
	// bne cr6,0x82f1fefc
	if (!ctx.cr6.eq) goto loc_82F1FEFC;
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// bl 0x82fa3bb8
	ctx.lr = 0x82F1FEA8;
	sub_82FA3BB8(ctx, base);
	// lis r11,32767
	ctx.r11.s64 = 2147418112;
	// ori r11,r11,65534
	ctx.r11.u64 = ctx.r11.u64 | 65534;
	// cmplw cr6,r3,r11
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82f1fee0
	if (!ctx.cr6.lt) goto loc_82F1FEE0;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82f1fec4
	if (ctx.cr6.eq) goto loc_82F1FEC4;
	// stw r3,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r3.u32);
loc_82F1FEC4:
	// addi r11,r3,1
	ctx.r11.s64 = ctx.r3.s64 + 1;
	// rlwinm r31,r11,1,0,30
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e8e030
	ctx.lr = 0x82F1FED4;
	sub_82E8E030(ctx, base);
	// stw r3,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82f1feec
	if (!ctx.cr0.eq) goto loc_82F1FEEC;
loc_82F1FEE0:
	// lis r27,-32761
	ctx.r27.s64 = -2147024896;
	// ori r27,r27,14
	ctx.r27.u64 = ctx.r27.u64 | 14;
	// b 0x82f1ff10
	goto loc_82F1FF10;
loc_82F1FEEC:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// lwz r4,8(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// bl 0x82fa77c0
	ctx.lr = 0x82F1FEF8;
	sub_82FA77C0(ctx, base);
	// b 0x82f1ff10
	goto loc_82F1FF10;
loc_82F1FEFC:
	// lis r27,-16371
	ctx.r27.s64 = -1072889856;
	// ori r27,r27,14013
	ctx.r27.u64 = ctx.r27.u64 | 14013;
	// b 0x82f1ff10
	goto loc_82F1FF10;
loc_82F1FF08:
	// lis r27,-16371
	ctx.r27.s64 = -1072889856;
	// ori r27,r27,14054
	ctx.r27.u64 = ctx.r27.u64 | 14054;
loc_82F1FF10:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82e8f250
	ctx.lr = 0x82F1FF1C;
	sub_82E8F250(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82fa76c0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F1FF28"))) PPC_WEAK_FUNC(sub_82F1FF28);
PPC_FUNC_IMPL(__imp__sub_82F1FF28) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7670
	ctx.lr = 0x82F1FF30;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r27,r3,4
	ctx.r27.s64 = ctx.r3.s64 + 4;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// li r28,0
	ctx.r28.s64 = 0;
	// bl 0x82e8f128
	ctx.lr = 0x82F1FF58;
	sub_82E8F128(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e887b8
	ctx.lr = 0x82F1FF64;
	sub_82E887B8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82f1ffc4
	if (ctx.cr0.eq) goto loc_82F1FFC4;
	// lhz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,4113
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4113, ctx.xer);
	// bne cr6,0x82f1ffb8
	if (!ctx.cr6.eq) goto loc_82F1FFB8;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82f1ff88
	if (ctx.cr6.eq) goto loc_82F1FF88;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
loc_82F1FF88:
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// bl 0x82e8e030
	ctx.lr = 0x82F1FF90;
	sub_82E8E030(ctx, base);
	// stw r3,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82f1ffa8
	if (!ctx.cr0.eq) goto loc_82F1FFA8;
	// lis r28,-32761
	ctx.r28.s64 = -2147024896;
	// ori r28,r28,14
	ctx.r28.u64 = ctx.r28.u64 | 14;
	// b 0x82f1ffcc
	goto loc_82F1FFCC;
loc_82F1FFA8:
	// lwz r5,8(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// bl 0x82fa77c0
	ctx.lr = 0x82F1FFB4;
	sub_82FA77C0(ctx, base);
	// b 0x82f1ffcc
	goto loc_82F1FFCC;
loc_82F1FFB8:
	// lis r28,-16371
	ctx.r28.s64 = -1072889856;
	// ori r28,r28,14013
	ctx.r28.u64 = ctx.r28.u64 | 14013;
	// b 0x82f1ffcc
	goto loc_82F1FFCC;
loc_82F1FFC4:
	// lis r28,-16371
	ctx.r28.s64 = -1072889856;
	// ori r28,r28,14054
	ctx.r28.u64 = ctx.r28.u64 | 14054;
loc_82F1FFCC:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82e8f250
	ctx.lr = 0x82F1FFD8;
	sub_82E8F250(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82fa76c0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F1FFE4"))) PPC_WEAK_FUNC(sub_82F1FFE4);
PPC_FUNC_IMPL(__imp__sub_82F1FFE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F1FFE8"))) PPC_WEAK_FUNC(sub_82F1FFE8);
PPC_FUNC_IMPL(__imp__sub_82F1FFE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x82F1FFF0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r29,r3,4
	ctx.r29.s64 = ctx.r3.s64 + 4;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// bl 0x82e8f128
	ctx.lr = 0x82F20010;
	sub_82E8F128(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ea0d68
	ctx.lr = 0x82F2001C;
	sub_82EA0D68(ctx, base);
	// lhz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// cmpwi cr6,r11,5
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 5, ctx.xer);
	// beq cr6,0x82f20058
	if (ctx.cr6.eq) goto loc_82F20058;
	// cmpwi cr6,r11,13
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 13, ctx.xer);
	// beq cr6,0x82f20058
	if (ctx.cr6.eq) goto loc_82F20058;
	// cmpwi cr6,r11,19
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 19, ctx.xer);
	// beq cr6,0x82f20058
	if (ctx.cr6.eq) goto loc_82F20058;
	// cmpwi cr6,r11,21
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 21, ctx.xer);
	// beq cr6,0x82f20058
	if (ctx.cr6.eq) goto loc_82F20058;
	// cmpwi cr6,r11,31
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 31, ctx.xer);
	// beq cr6,0x82f20058
	if (ctx.cr6.eq) goto loc_82F20058;
	// cmpwi cr6,r11,72
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 72, ctx.xer);
	// beq cr6,0x82f20058
	if (ctx.cr6.eq) goto loc_82F20058;
	// cmpwi cr6,r11,4113
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 4113, ctx.xer);
	// bne cr6,0x82f2007c
	if (!ctx.cr6.eq) goto loc_82F2007C;
loc_82F20058:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82f2006c
	if (!ctx.cr6.eq) goto loc_82F2006C;
	// lis r31,-32761
	ctx.r31.s64 = -2147024896;
	// ori r31,r31,14
	ctx.r31.u64 = ctx.r31.u64 | 14;
	// b 0x82f20084
	goto loc_82F20084;
loc_82F2006C:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82e8e520
	ctx.lr = 0x82F20074;
	sub_82E8E520(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x82f20084
	goto loc_82F20084;
loc_82F2007C:
	// lis r31,-16371
	ctx.r31.s64 = -1072889856;
	// ori r31,r31,14013
	ctx.r31.u64 = ctx.r31.u64 | 14013;
loc_82F20084:
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82e8f250
	ctx.lr = 0x82F20090;
	sub_82E8F250(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F2009C"))) PPC_WEAK_FUNC(sub_82F2009C);
PPC_FUNC_IMPL(__imp__sub_82F2009C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F200A0"))) PPC_WEAK_FUNC(sub_82F200A0);
PPC_FUNC_IMPL(__imp__sub_82F200A0) {
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
	// bl 0x82f1fd70
	ctx.lr = 0x82F200C0;
	sub_82F1FD70(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f200d8
	if (ctx.cr0.eq) goto loc_82F200D8;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82f200d8
	if (ctx.cr6.eq) goto loc_82F200D8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e8ee18
	ctx.lr = 0x82F200D8;
	sub_82E8EE18(ctx, base);
loc_82F200D8:
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

__attribute__((alias("__imp__sub_82F200F4"))) PPC_WEAK_FUNC(sub_82F200F4);
PPC_FUNC_IMPL(__imp__sub_82F200F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F200F8"))) PPC_WEAK_FUNC(sub_82F200F8);
PPC_FUNC_IMPL(__imp__sub_82F200F8) {
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
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// addi r11,r11,8360
	ctx.r11.s64 = ctx.r11.s64 + 8360;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bl 0x82e8ee58
	ctx.lr = 0x82F20128;
	sub_82E8EE58(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r11,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r11.u32);
	// stw r11,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r11.u32);
	// bl 0x82ea0c90
	ctx.lr = 0x82F20144;
	sub_82EA0C90(ctx, base);
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

__attribute__((alias("__imp__sub_82F20160"))) PPC_WEAK_FUNC(sub_82F20160);
PPC_FUNC_IMPL(__imp__sub_82F20160) {
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
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82f200f8
	ctx.lr = 0x82F2017C;
	sub_82F200F8(ctx, base);
	// addi r3,r31,76
	ctx.r3.s64 = ctx.r31.s64 + 76;
	// bl 0x82f72368
	ctx.lr = 0x82F20184;
	sub_82F72368(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// lis r10,-32234
	ctx.r10.s64 = -2112487424;
	// addi r11,r11,8544
	ctx.r11.s64 = ctx.r11.s64 + 8544;
	// addi r10,r10,8504
	ctx.r10.s64 = ctx.r10.s64 + 8504;
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r9.u32);
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

__attribute__((alias("__imp__sub_82F201BC"))) PPC_WEAK_FUNC(sub_82F201BC);
PPC_FUNC_IMPL(__imp__sub_82F201BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F201C0"))) PPC_WEAK_FUNC(sub_82F201C0);
PPC_FUNC_IMPL(__imp__sub_82F201C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7674
	ctx.lr = 0x82F201C8;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82f20260
	if (ctx.cr6.eq) goto loc_82F20260;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82f20260
	if (ctx.cr6.eq) goto loc_82F20260;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x82f20260
	if (ctx.cr6.eq) goto loc_82F20260;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,104
	ctx.r3.s64 = 104;
	// bl 0x82e8edd0
	ctx.lr = 0x82F20210;
	sub_82E8EDD0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82f20224
	if (ctx.cr0.eq) goto loc_82F20224;
	// bl 0x82f20160
	ctx.lr = 0x82F2021C;
	sub_82F20160(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x82f20228
	goto loc_82F20228;
loc_82F20224:
	// li r31,0
	ctx.r31.s64 = 0;
loc_82F20228:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82f2023c
	if (!ctx.cr6.eq) goto loc_82F2023C;
	// lis r30,-32761
	ctx.r30.s64 = -2147024896;
	// ori r30,r30,14
	ctx.r30.u64 = ctx.r30.u64 | 14;
	// b 0x82f20284
	goto loc_82F20284;
loc_82F2023C:
	// stw r28,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r28.u32);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,76
	ctx.r3.s64 = ctx.r31.s64 + 76;
	// bl 0x82f722a8
	ctx.lr = 0x82F20250;
	sub_82F722A8(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt 0x82f20268
	if (ctx.cr0.lt) goto loc_82F20268;
	// stw r31,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r31.u32);
	// b 0x82f20284
	goto loc_82F20284;
loc_82F20260:
	// lis r30,-32761
	ctx.r30.s64 = -2147024896;
	// ori r30,r30,87
	ctx.r30.u64 = ctx.r30.u64 | 87;
loc_82F20268:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82f20284
	if (ctx.cr6.eq) goto loc_82F20284;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F20284;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82F20284:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F20290"))) PPC_WEAK_FUNC(sub_82F20290);
PPC_FUNC_IMPL(__imp__sub_82F20290) {
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
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82f201c0
	ctx.lr = 0x82F202B4;
	sub_82F201C0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82f202c4
	if (ctx.cr0.lt) goto loc_82F202C4;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_82F202C4:
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

__attribute__((alias("__imp__sub_82F202D8"))) PPC_WEAK_FUNC(sub_82F202D8);
PPC_FUNC_IMPL(__imp__sub_82F202D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x82F202E0;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x82e6a800
	ctx.lr = 0x82F20300;
	sub_82E6A800(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x82f20388
	if (ctx.cr0.lt) goto loc_82F20388;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82f20320
	if (!ctx.cr6.eq) goto loc_82F20320;
	// lis r31,-32768
	ctx.r31.s64 = -2147483648;
	// ori r31,r31,65535
	ctx.r31.u64 = ctx.r31.u64 | 65535;
	// b 0x82f203a4
	goto loc_82F203A4;
loc_82F20320:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82f2033c
	if (ctx.cr6.eq) goto loc_82F2033C;
	// lhz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 16);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r5,r11,18
	ctx.r5.s64 = ctx.r11.s64 + 18;
	// bl 0x82e64d68
	ctx.lr = 0x82F20338;
	sub_82E64D68(ctx, base);
	// b 0x82f2035c
	goto loc_82F2035C;
loc_82F2033C:
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// addi r5,r10,23328
	ctx.r5.s64 = ctx.r10.s64 + 23328;
	// addi r4,r9,22512
	ctx.r4.s64 = ctx.r9.s64 + 22512;
	// lwz r11,96(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F2035C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82F2035C:
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x82f20388
	if (ctx.cr0.lt) goto loc_82F20388;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r11,21808
	ctx.r4.s64 = ctx.r11.s64 + 21808;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F20384;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_82F20388:
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82f203a4
	if (ctx.cr6.eq) goto loc_82F203A4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F203A4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82F203A4:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F203B0"))) PPC_WEAK_FUNC(sub_82F203B0);
PPC_FUNC_IMPL(__imp__sub_82F203B0) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F203C8"))) PPC_WEAK_FUNC(sub_82F203C8);
PPC_FUNC_IMPL(__imp__sub_82F203C8) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// b 0x82e8ee18
	sub_82E8EE18(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F203D8"))) PPC_WEAK_FUNC(sub_82F203D8);
PPC_FUNC_IMPL(__imp__sub_82F203D8) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F203DC"))) PPC_WEAK_FUNC(sub_82F203DC);
PPC_FUNC_IMPL(__imp__sub_82F203DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F203E0"))) PPC_WEAK_FUNC(sub_82F203E0);
PPC_FUNC_IMPL(__imp__sub_82F203E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x82F203E8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmpwi cr6,r5,-1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, -1, ctx.xer);
	// beq cr6,0x82f20400
	if (ctx.cr6.eq) goto loc_82F20400;
	// stw r5,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r5.u32);
loc_82F20400:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x82f2042c
	if (!ctx.cr6.eq) goto loc_82F2042C;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82f20418
	if (ctx.cr6.eq) goto loc_82F20418;
	// bl 0x82e8ee18
	ctx.lr = 0x82F20418;
	sub_82E8EE18(ctx, base);
loc_82F20418:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// b 0x82f20568
	goto loc_82F20568;
loc_82F2042C:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82f2047c
	if (!ctx.cr6.eq) goto loc_82F2047C;
	// rlwinm r29,r30,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82e8edd0
	ctx.lr = 0x82F20454;
	sub_82E8EDD0(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82f20468
	if (!ctx.cr0.eq) goto loc_82F20468;
loc_82F20460:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82f2056c
	goto loc_82F2056C;
loc_82F20468:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82fa7cf0
	ctx.lr = 0x82F20474;
	sub_82FA7CF0(ctx, base);
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
	// b 0x82f20564
	goto loc_82F20564;
loc_82F2047C:
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplw cr6,r30,r9
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r9.u32, ctx.xer);
	// bgt cr6,0x82f204b0
	if (ctx.cr6.gt) goto loc_82F204B0;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82f20564
	if (!ctx.cr6.gt) goto loc_82F20564;
	// subf r9,r11,r30
	ctx.r9.s64 = ctx.r30.s64 - ctx.r11.s64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r5,r9,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// li r4,0
	ctx.r4.s64 = 0;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x82fa7cf0
	ctx.lr = 0x82F204AC;
	sub_82FA7CF0(ctx, base);
	// b 0x82f20564
	goto loc_82F20564;
loc_82F204B0:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82f204e8
	if (!ctx.cr6.eq) goto loc_82F204E8;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm r11,r11,29,3,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// blt cr6,0x82f204e4
	if (ctx.cr6.lt) goto loc_82F204E4;
	// cmplwi cr6,r11,1024
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1024, ctx.xer);
	// ble cr6,0x82f204dc
	if (!ctx.cr6.gt) goto loc_82F204DC;
	// li r11,1024
	ctx.r11.s64 = 1024;
	// b 0x82f204e8
	goto loc_82F204E8;
loc_82F204DC:
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bge cr6,0x82f204e8
	if (!ctx.cr6.lt) goto loc_82F204E8;
loc_82F204E4:
	// li r11,4
	ctx.r11.s64 = 4;
loc_82F204E8:
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
	// blt cr6,0x82f204fc
	if (ctx.cr6.lt) goto loc_82F204FC;
	// mr r28,r30
	ctx.r28.u64 = ctx.r30.u64;
loc_82F204FC:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// rlwinm r3,r28,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82e8edd0
	ctx.lr = 0x82F20514;
	sub_82E8EDD0(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq 0x82f20460
	if (ctx.cr0.eq) goto loc_82F20460;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82fa77c0
	ctx.lr = 0x82F20530;
	sub_82FA77C0(ctx, base);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r4,0
	ctx.r4.s64 = 0;
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r10,r10,r30
	ctx.r10.s64 = ctx.r30.s64 - ctx.r10.s64;
	// add r3,r11,r29
	ctx.r3.u64 = ctx.r11.u64 + ctx.r29.u64;
	// rlwinm r5,r10,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82fa7cf0
	ctx.lr = 0x82F2054C;
	sub_82FA7CF0(ctx, base);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82f2055c
	if (ctx.cr6.eq) goto loc_82F2055C;
	// bl 0x82e8ee18
	ctx.lr = 0x82F2055C;
	sub_82E8EE18(ctx, base);
loc_82F2055C:
	// stw r29,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r29.u32);
	// stw r28,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r28.u32);
loc_82F20564:
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
loc_82F20568:
	// li r3,1
	ctx.r3.s64 = 1;
loc_82F2056C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F20574"))) PPC_WEAK_FUNC(sub_82F20574);
PPC_FUNC_IMPL(__imp__sub_82F20574) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F20578"))) PPC_WEAK_FUNC(sub_82F20578);
PPC_FUNC_IMPL(__imp__sub_82F20578) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x82F20580;
	__savegprlr_29(ctx, base);
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
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82f205b0
	if (ctx.cr6.lt) goto loc_82F205B0;
	// li r5,-1
	ctx.r5.s64 = -1;
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// bl 0x82f203e0
	ctx.lr = 0x82F205A8;
	sub_82F203E0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82f205c0
	if (ctx.cr0.eq) goto loc_82F205C0;
loc_82F205B0:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// li r3,1
	ctx.r3.s64 = 1;
	// stwx r29,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r29.u32);
loc_82F205C0:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F205C8"))) PPC_WEAK_FUNC(sub_82F205C8);
PPC_FUNC_IMPL(__imp__sub_82F205C8) {
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
	// add r9,r4,r5
	ctx.r9.u64 = ctx.r4.u64 + ctx.r5.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// bgt cr6,0x82f20638
	if (ctx.cr6.gt) goto loc_82F20638;
	// cmplw cr6,r9,r4
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r4.u32, ctx.xer);
	// blt cr6,0x82f20638
	if (ctx.cr6.lt) goto loc_82F20638;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// subf. r10,r5,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r5.s64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82f20624
	if (ctx.cr0.eq) goto loc_82F20624;
	// rlwinm r8,r9,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm r9,r4,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r5,r10,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r4,r8,r11
	ctx.r4.u64 = ctx.r8.u64 + ctx.r11.u64;
	// add r3,r9,r11
	ctx.r3.u64 = ctx.r9.u64 + ctx.r11.u64;
	// bl 0x82fa20f0
	ctx.lr = 0x82F20624;
	sub_82FA20F0(ctx, base);
loc_82F20624:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r3,1
	ctx.r3.s64 = 1;
	// subf r11,r30,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r30.s64;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// b 0x82f2063c
	goto loc_82F2063C;
loc_82F20638:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82F2063C:
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

__attribute__((alias("__imp__sub_82F20654"))) PPC_WEAK_FUNC(sub_82F20654);
PPC_FUNC_IMPL(__imp__sub_82F20654) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F20658"))) PPC_WEAK_FUNC(sub_82F20658);
PPC_FUNC_IMPL(__imp__sub_82F20658) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82f20674
	if (!ctx.cr6.eq) goto loc_82F20674;
	// lis r3,-16371
	ctx.r3.s64 = -1072889856;
	// ori r3,r3,14006
	ctx.r3.u64 = ctx.r3.u64 | 14006;
	// blr 
	return;
loc_82F20674:
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82f20688
	if (!ctx.cr6.eq) goto loc_82F20688;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// blr 
	return;
loc_82F20688:
	// lwz r10,372(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 372);
	// addi r9,r11,372
	ctx.r9.s64 = ctx.r11.s64 + 372;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// lwz r10,376(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 376);
	// stw r10,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r10.u32);
	// lwz r10,380(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 380);
	// stw r10,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r10.u32);
	// lwz r11,384(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 384);
	// stw r11,12(r4)
	PPC_STORE_U32(ctx.r4.u32 + 12, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F206B4"))) PPC_WEAK_FUNC(sub_82F206B4);
PPC_FUNC_IMPL(__imp__sub_82F206B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F206B8"))) PPC_WEAK_FUNC(sub_82F206B8);
PPC_FUNC_IMPL(__imp__sub_82F206B8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82f206d4
	if (!ctx.cr6.eq) goto loc_82F206D4;
	// lis r3,-16371
	ctx.r3.s64 = -1072889856;
	// ori r3,r3,14006
	ctx.r3.u64 = ctx.r3.u64 | 14006;
	// blr 
	return;
loc_82F206D4:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// addi r11,r11,28368
	ctx.r11.s64 = ctx.r11.s64 + 28368;
	// addi r8,r11,16
	ctx.r8.s64 = ctx.r11.s64 + 16;
loc_82F206E4:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r9,r6,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r6.s64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82f20704
	if (!ctx.cr0.eq) goto loc_82F20704;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x82f206e4
	if (!ctx.cr6.eq) goto loc_82F206E4;
loc_82F20704:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x82f20718
	if (ctx.cr0.eq) goto loc_82F20718;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// blr 
	return;
loc_82F20718:
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r10,r7,372
	ctx.r10.s64 = ctx.r7.s64 + 372;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,372(r7)
	PPC_STORE_U32(ctx.r7.u32 + 372, ctx.r11.u32);
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// stw r11,376(r7)
	PPC_STORE_U32(ctx.r7.u32 + 376, ctx.r11.u32);
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// stw r11,380(r7)
	PPC_STORE_U32(ctx.r7.u32 + 380, ctx.r11.u32);
	// lwz r11,12(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// stw r11,384(r7)
	PPC_STORE_U32(ctx.r7.u32 + 384, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F20744"))) PPC_WEAK_FUNC(sub_82F20744);
PPC_FUNC_IMPL(__imp__sub_82F20744) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F20748"))) PPC_WEAK_FUNC(sub_82F20748);
PPC_FUNC_IMPL(__imp__sub_82F20748) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82f20760
	if (!ctx.cr6.eq) goto loc_82F20760;
	// lis r3,-16371
	ctx.r3.s64 = -1072889856;
	// ori r3,r3,14006
	ctx.r3.u64 = ctx.r3.u64 | 14006;
	// blr 
	return;
loc_82F20760:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16385
	ctx.r3.u64 = ctx.r3.u64 | 16385;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2076C"))) PPC_WEAK_FUNC(sub_82F2076C);
PPC_FUNC_IMPL(__imp__sub_82F2076C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F20770"))) PPC_WEAK_FUNC(sub_82F20770);
PPC_FUNC_IMPL(__imp__sub_82F20770) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82f2078c
	if (!ctx.cr6.eq) goto loc_82F2078C;
	// lis r3,-16371
	ctx.r3.s64 = -1072889856;
	// ori r3,r3,14006
	ctx.r3.u64 = ctx.r3.u64 | 14006;
	// blr 
	return;
loc_82F2078C:
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r9,r11,372
	ctx.r9.s64 = ctx.r11.s64 + 372;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r10,372(r11)
	PPC_STORE_U32(ctx.r11.u32 + 372, ctx.r10.u32);
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// stw r10,376(r11)
	PPC_STORE_U32(ctx.r11.u32 + 376, ctx.r10.u32);
	// lwz r10,8(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// stw r10,380(r11)
	PPC_STORE_U32(ctx.r11.u32 + 380, ctx.r10.u32);
	// lwz r10,12(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// stw r10,384(r11)
	PPC_STORE_U32(ctx.r11.u32 + 384, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F207B8"))) PPC_WEAK_FUNC(sub_82F207B8);
PPC_FUNC_IMPL(__imp__sub_82F207B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x82F207C0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82f20804
	if (ctx.cr6.eq) goto loc_82F20804;
loc_82F207DC:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82f20804
	if (ctx.cr6.lt) goto loc_82F20804;
	// addi r11,r11,20
	ctx.r11.s64 = ctx.r11.s64 + 20;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82f2085c
	if (ctx.cr6.lt) goto loc_82F2085C;
	// mr r29,r31
	ctx.r29.u64 = ctx.r31.u64;
	// lwz r31,100(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82f207dc
	if (!ctx.cr6.eq) goto loc_82F207DC;
loc_82F20804:
	// li r11,0
	ctx.r11.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// beq cr6,0x82f208a4
	if (ctx.cr6.eq) goto loc_82F208A4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F20828;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82f2089c
	if (ctx.cr0.lt) goto loc_82F2089C;
	// li r11,20
	ctx.r11.s64 = 20;
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// divwu r11,r30,r11
	ctx.r11.u32 = ctx.r30.u32 / ctx.r11.u32;
	// mulli r11,r11,20
	ctx.r11.s64 = ctx.r11.s64 * 20;
	// stw r11,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r11.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// beq cr6,0x82f20854
	if (ctx.cr6.eq) goto loc_82F20854;
	// stw r11,100(r29)
	PPC_STORE_U32(ctx.r29.u32 + 100, ctx.r11.u32);
loc_82F20854:
	// stw r31,100(r11)
	PPC_STORE_U32(ctx.r11.u32 + 100, ctx.r31.u32);
	// lwz r31,80(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_82F2085C:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lis r9,-31972
	ctx.r9.s64 = -2095316992;
	// li r3,0
	ctx.r3.s64 = 0;
	// subf r10,r11,r30
	ctx.r10.s64 = ctx.r30.s64 - ctx.r11.s64;
	// addi r9,r9,-19576
	ctx.r9.s64 = ctx.r9.s64 + -19576;
	// rlwinm r11,r10,29,3,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 29) & 0x1FFFFFFF;
	// clrlwi r8,r10,29
	ctx.r8.u64 = ctx.r10.u32 & 0x7;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// addi r7,r10,5
	ctx.r7.s64 = ctx.r10.s64 + 5;
	// addi r10,r11,16
	ctx.r10.s64 = ctx.r11.s64 + 16;
	// rlwinm r10,r7,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lbzx r9,r8,r9
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r8.u32 + ctx.r9.u32);
	// lbz r8,16(r11)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r11.u32 + 16);
	// or r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 | ctx.r8.u64;
	// stb r9,16(r11)
	PPC_STORE_U8(ctx.r11.u32 + 16, ctx.r9.u8);
	// stwx r28,r10,r31
	PPC_STORE_U32(ctx.r10.u32 + ctx.r31.u32, ctx.r28.u32);
loc_82F2089C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
loc_82F208A4:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,65535
	ctx.r3.u64 = ctx.r3.u64 | 65535;
	// b 0x82f2089c
	goto loc_82F2089C;
}

__attribute__((alias("__imp__sub_82F208B0"))) PPC_WEAK_FUNC(sub_82F208B0);
PPC_FUNC_IMPL(__imp__sub_82F208B0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82f208c8
	if (!ctx.cr6.eq) goto loc_82F208C8;
	// lis r3,-16371
	ctx.r3.s64 = -1072889856;
	// ori r3,r3,14006
	ctx.r3.u64 = ctx.r3.u64 | 14006;
	// blr 
	return;
loc_82F208C8:
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82f208dc
	if (!ctx.cr6.eq) goto loc_82F208DC;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// blr 
	return;
loc_82F208DC:
	// lwz r11,176(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 176);
	// li r3,0
	ctx.r3.s64 = 0;
	// sth r11,0(r4)
	PPC_STORE_U16(ctx.r4.u32 + 0, ctx.r11.u16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F208EC"))) PPC_WEAK_FUNC(sub_82F208EC);
PPC_FUNC_IMPL(__imp__sub_82F208EC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F208F0"))) PPC_WEAK_FUNC(sub_82F208F0);
PPC_FUNC_IMPL(__imp__sub_82F208F0) {
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
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82f20914
	if (ctx.cr6.eq) goto loc_82F20914;
	// lwz r11,104(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
loc_82F20914:
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// lwz r4,104(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f207b8
	ctx.lr = 0x82F20924;
	sub_82F207B8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82f20938
	if (ctx.cr0.lt) goto loc_82F20938;
	// lwz r11,104(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r11.u32);
loc_82F20938:
	// rlwinm r11,r3,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0x1;
	// xori r3,r11,1
	ctx.r3.u64 = ctx.r11.u64 ^ 1;
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

__attribute__((alias("__imp__sub_82F20954"))) PPC_WEAK_FUNC(sub_82F20954);
PPC_FUNC_IMPL(__imp__sub_82F20954) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F20958"))) PPC_WEAK_FUNC(sub_82F20958);
PPC_FUNC_IMPL(__imp__sub_82F20958) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7664
	ctx.lr = 0x82F20960;
	__savegprlr_23(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82f20994
	if (ctx.cr6.eq) goto loc_82F20994;
loc_82F20978:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r11,r11,20
	ctx.r11.s64 = ctx.r11.s64 + 20;
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82f20994
	if (ctx.cr6.lt) goto loc_82F20994;
	// lwz r31,60(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82f20978
	if (!ctx.cr6.eq) goto loc_82F20978;
loc_82F20994:
	// li r24,0
	ctx.r24.s64 = 0;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82f20ac8
	if (ctx.cr6.eq) goto loc_82F20AC8;
	// lis r10,-31972
	ctx.r10.s64 = -2095316992;
	// lis r11,-31972
	ctx.r11.s64 = -2095316992;
	// lis r25,-31972
	ctx.r25.s64 = -2095316992;
	// addi r27,r10,-19548
	ctx.r27.s64 = ctx.r10.s64 + -19548;
	// addi r26,r11,-19560
	ctx.r26.s64 = ctx.r11.s64 + -19560;
loc_82F209B4:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r29,0
	ctx.r29.s64 = 0;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82f209d4
	if (ctx.cr6.lt) goto loc_82F209D4;
	// li r29,1
	ctx.r29.s64 = 1;
	// subf r30,r11,r28
	ctx.r30.s64 = ctx.r28.s64 - ctx.r11.s64;
	// b 0x82f209fc
	goto loc_82F209FC;
loc_82F209D4:
	// lbz r10,-28744(r25)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r25.u32 + -28744);
	// lbz r9,14(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 14);
	// and. r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 & ctx.r10.u64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82f209fc
	if (ctx.cr0.eq) goto loc_82F209FC;
	// addi r4,r11,-1
	ctx.r4.s64 = ctx.r11.s64 + -1;
	// lhz r5,18(r31)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r31.u32 + 18);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82e79780
	ctx.lr = 0x82F209F4;
	sub_82E79780(ctx, base);
	// mr. r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// blt 0x82f20ac8
	if (ctx.cr0.lt) goto loc_82F20AC8;
loc_82F209FC:
	// addi r11,r30,10
	ctx.r11.s64 = ctx.r30.s64 + 10;
	// addi r9,r30,9
	ctx.r9.s64 = ctx.r30.s64 + 9;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// subfic r8,r30,19
	ctx.xer.ca = ctx.r30.u32 <= 19;
	ctx.r8.s64 = 19 - ctx.r30.s64;
	// rlwinm r11,r9,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r5,r8,1,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// add r4,r10,r31
	ctx.r4.u64 = ctx.r10.u64 + ctx.r31.u64;
	// add r3,r11,r31
	ctx.r3.u64 = ctx.r11.u64 + ctx.r31.u64;
	// bl 0x82fa20f0
	ctx.lr = 0x82F20A20;
	sub_82FA20F0(ctx, base);
	// rlwinm r11,r30,29,3,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 29) & 0x1FFFFFFF;
	// add r10,r11,r31
	ctx.r10.u64 = ctx.r11.u64 + ctx.r31.u64;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// lbz r7,14(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 14);
	// bge cr6,0x82f20a78
	if (!ctx.cr6.lt) goto loc_82F20A78;
	// subfic r8,r11,3
	ctx.xer.ca = ctx.r11.u32 <= 3;
	ctx.r8.s64 = 3 - ctx.r11.s64;
	// addi r9,r31,14
	ctx.r9.s64 = ctx.r31.s64 + 14;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
loc_82F20A40:
	// lbzx r8,r9,r11
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r11.u32);
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// rlwinm r8,r8,1,24,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFE;
	// stbx r8,r9,r11
	PPC_STORE_U8(ctx.r9.u32 + ctx.r11.u32, ctx.r8.u8);
	// bge cr6,0x82f20a70
	if (!ctx.cr6.lt) goto loc_82F20A70;
	// add r6,r11,r31
	ctx.r6.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lbz r6,15(r6)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r6.u32 + 15);
	// rlwinm. r6,r6,0,0,24
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFFFF80;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq 0x82f20a70
	if (ctx.cr0.eq) goto loc_82F20A70;
	// li r6,1
	ctx.r6.s64 = 1;
	// rlwimi r8,r6,0,31,23
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r6.u32, 0) & 0xFFFFFFFFFFFFFF01) | (ctx.r8.u64 & 0xFE);
	// stbx r8,r9,r11
	PPC_STORE_U8(ctx.r9.u32 + ctx.r11.u32, ctx.r8.u8);
loc_82F20A70:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bdnz 0x82f20a40
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82F20A40;
loc_82F20A78:
	// clrlwi r11,r30,29
	ctx.r11.u64 = ctx.r30.u32 & 0x7;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq cr6,0x82f20abc
	if (ctx.cr6.eq) goto loc_82F20ABC;
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f20abc
	if (ctx.cr0.eq) goto loc_82F20ABC;
	// addi r9,r26,8
	ctx.r9.s64 = ctx.r26.s64 + 8;
	// lbz r8,14(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 14);
	// clrlwi r7,r7,24
	ctx.r7.u64 = ctx.r7.u32 & 0xFF;
	// subf r9,r11,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r11.s64;
	// lbz r9,0(r9)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// and r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 & ctx.r8.u64;
	// stb r9,14(r10)
	PPC_STORE_U8(ctx.r10.u32 + 14, ctx.r9.u8);
	// clrlwi r9,r9,24
	ctx.r9.u64 = ctx.r9.u32 & 0xFF;
	// lbzx r11,r11,r27
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r27.u32);
	// and r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 & ctx.r7.u64;
	// or r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 | ctx.r9.u64;
	// stb r11,14(r10)
	PPC_STORE_U8(ctx.r10.u32 + 14, ctx.r11.u8);
loc_82F20ABC:
	// lwz r31,60(r31)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82f209b4
	if (!ctx.cr6.eq) goto loc_82F209B4;
loc_82F20AC8:
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82fa76b4
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F20AD4"))) PPC_WEAK_FUNC(sub_82F20AD4);
PPC_FUNC_IMPL(__imp__sub_82F20AD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F20AD8"))) PPC_WEAK_FUNC(sub_82F20AD8);
PPC_FUNC_IMPL(__imp__sub_82F20AD8) {
	PPC_FUNC_PROLOGUE();
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x82f20af0
	if (!ctx.cr6.eq) goto loc_82F20AF0;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// blr 
	return;
loc_82F20AF0:
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// b 0x82f20b20
	goto loc_82F20B20;
loc_82F20B04:
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82f20b1c
	if (ctx.cr6.lt) goto loc_82F20B1C;
	// addi r9,r11,20
	ctx.r9.s64 = ctx.r11.s64 + 20;
	// cmplw cr6,r4,r9
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82f20b2c
	if (ctx.cr6.lt) goto loc_82F20B2C;
loc_82F20B1C:
	// lwz r10,184(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 184);
loc_82F20B20:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82f20b04
	if (!ctx.cr6.eq) goto loc_82F20B04;
	// blr 
	return;
loc_82F20B2C:
	// subf r11,r11,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r11.s64;
	// lis r8,-31972
	ctx.r8.s64 = -2095316992;
	// rlwinm r9,r11,29,3,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
	// addi r8,r8,-19568
	ctx.r8.s64 = ctx.r8.s64 + -19568;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// clrlwi r7,r11,29
	ctx.r7.u64 = ctx.r11.u32 & 0x7;
	// lbz r9,20(r9)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + 20);
	// lbzx r8,r7,r8
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r7.u32 + ctx.r8.u32);
	// and. r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 & ctx.r8.u64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beqlr 
	if (ctx.cr0.eq) return;
	// addi r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 + 3;
	// li r3,0
	ctx.r3.s64 = 0;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F20B6C"))) PPC_WEAK_FUNC(sub_82F20B6C);
PPC_FUNC_IMPL(__imp__sub_82F20B6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F20B70"))) PPC_WEAK_FUNC(sub_82F20B70);
PPC_FUNC_IMPL(__imp__sub_82F20B70) {
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
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,188
	ctx.r3.s64 = 188;
	// bl 0x82e8edd0
	ctx.lr = 0x82F20B9C;
	sub_82E8EDD0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82f20bf0
	if (ctx.cr0.eq) goto loc_82F20BF0;
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// li r9,20
	ctx.r9.s64 = 20;
	// addi r10,r11,8688
	ctx.r10.s64 = ctx.r11.s64 + 8688;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// addi r10,r3,20
	ctx.r10.s64 = ctx.r3.s64 + 20;
	// sth r11,12(r3)
	PPC_STORE_U16(ctx.r3.u32 + 12, ctx.r11.u16);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82F20BC8:
	// sth r11,4(r10)
	PPC_STORE_U16(ctx.r10.u32 + 4, ctx.r11.u16);
	// stwu r11,8(r10)
	ea = 8 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x82f20bc8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82F20BC8;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// sth r11,20(r3)
	PPC_STORE_U16(ctx.r3.u32 + 20, ctx.r11.u16);
	// stb r11,22(r3)
	PPC_STORE_U8(ctx.r3.u32 + 22, ctx.r11.u8);
	// stw r11,184(r3)
	PPC_STORE_U32(ctx.r3.u32 + 184, ctx.r11.u32);
	// b 0x82f20bf4
	goto loc_82F20BF4;
loc_82F20BF0:
	// li r10,0
	ctx.r10.s64 = 0;
loc_82F20BF4:
	// addi r11,r10,0
	ctx.r11.s64 = ctx.r10.s64 + 0;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
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

__attribute__((alias("__imp__sub_82F20C24"))) PPC_WEAK_FUNC(sub_82F20C24);
PPC_FUNC_IMPL(__imp__sub_82F20C24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F20C28"))) PPC_WEAK_FUNC(sub_82F20C28);
PPC_FUNC_IMPL(__imp__sub_82F20C28) {
	PPC_FUNC_PROLOGUE();
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x82f20c40
	if (!ctx.cr6.eq) goto loc_82F20C40;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// blr 
	return;
loc_82F20C40:
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// b 0x82f20c70
	goto loc_82F20C70;
loc_82F20C54:
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82f20c6c
	if (ctx.cr6.lt) goto loc_82F20C6C;
	// addi r9,r11,20
	ctx.r9.s64 = ctx.r11.s64 + 20;
	// cmplw cr6,r4,r9
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82f20c7c
	if (ctx.cr6.lt) goto loc_82F20C7C;
loc_82F20C6C:
	// lwz r10,100(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 100);
loc_82F20C70:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82f20c54
	if (!ctx.cr6.eq) goto loc_82F20C54;
	// blr 
	return;
loc_82F20C7C:
	// subf r11,r11,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r11.s64;
	// lis r8,-31972
	ctx.r8.s64 = -2095316992;
	// rlwinm r9,r11,29,3,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
	// addi r8,r8,-19576
	ctx.r8.s64 = ctx.r8.s64 + -19576;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// clrlwi r7,r11,29
	ctx.r7.u64 = ctx.r11.u32 & 0x7;
	// lbz r9,16(r9)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + 16);
	// lbzx r8,r7,r8
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r7.u32 + ctx.r8.u32);
	// and. r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 & ctx.r8.u64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beqlr 
	if (ctx.cr0.eq) return;
	// addi r11,r11,5
	ctx.r11.s64 = ctx.r11.s64 + 5;
	// li r3,0
	ctx.r3.s64 = 0;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F20CBC"))) PPC_WEAK_FUNC(sub_82F20CBC);
PPC_FUNC_IMPL(__imp__sub_82F20CBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F20CC0"))) PPC_WEAK_FUNC(sub_82F20CC0);
PPC_FUNC_IMPL(__imp__sub_82F20CC0) {
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
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,104
	ctx.r3.s64 = 104;
	// bl 0x82e8edd0
	ctx.lr = 0x82F20CEC;
	sub_82E8EDD0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82f20d20
	if (ctx.cr0.eq) goto loc_82F20D20;
	// lis r10,-32234
	ctx.r10.s64 = -2112487424;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,20320
	ctx.r9.s64 = ctx.r10.s64 + 20320;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// sth r11,16(r3)
	PPC_STORE_U16(ctx.r3.u32 + 16, ctx.r11.u16);
	// stb r11,18(r3)
	PPC_STORE_U8(ctx.r3.u32 + 18, ctx.r11.u8);
	// stw r11,100(r3)
	PPC_STORE_U32(ctx.r3.u32 + 100, ctx.r11.u32);
	// b 0x82f20d24
	goto loc_82F20D24;
loc_82F20D20:
	// li r10,0
	ctx.r10.s64 = 0;
loc_82F20D24:
	// addi r11,r10,0
	ctx.r11.s64 = ctx.r10.s64 + 0;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
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

__attribute__((alias("__imp__sub_82F20D54"))) PPC_WEAK_FUNC(sub_82F20D54);
PPC_FUNC_IMPL(__imp__sub_82F20D54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F20D58"))) PPC_WEAK_FUNC(sub_82F20D58);
PPC_FUNC_IMPL(__imp__sub_82F20D58) {
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
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,8688
	ctx.r11.s64 = ctx.r11.s64 + 8688;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bne cr6,0x82f20d94
	if (!ctx.cr6.eq) goto loc_82F20D94;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82f23980
	ctx.lr = 0x82F20D94;
	sub_82F23980(ctx, base);
loc_82F20D94:
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f20da4
	if (ctx.cr0.eq) goto loc_82F20DA4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e8ee18
	ctx.lr = 0x82F20DA4;
	sub_82E8EE18(ctx, base);
loc_82F20DA4:
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

__attribute__((alias("__imp__sub_82F20DC0"))) PPC_WEAK_FUNC(sub_82F20DC0);
PPC_FUNC_IMPL(__imp__sub_82F20DC0) {
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
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r11,r11,20320
	ctx.r11.s64 = ctx.r11.s64 + 20320;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// bne cr6,0x82f20dfc
	if (!ctx.cr6.eq) goto loc_82F20DFC;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82e954e8
	ctx.lr = 0x82F20DFC;
	sub_82E954E8(ctx, base);
loc_82F20DFC:
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f20e0c
	if (ctx.cr0.eq) goto loc_82F20E0C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e8ee18
	ctx.lr = 0x82F20E0C;
	sub_82E8EE18(ctx, base);
loc_82F20E0C:
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

__attribute__((alias("__imp__sub_82F20E28"))) PPC_WEAK_FUNC(sub_82F20E28);
PPC_FUNC_IMPL(__imp__sub_82F20E28) {
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
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r3,r3,68
	ctx.r3.s64 = ctx.r3.s64 + 68;
	// addi r11,r11,8688
	ctx.r11.s64 = ctx.r11.s64 + 8688;
	// lwz r10,72(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// stw r11,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82f20e60
	if (!ctx.cr6.eq) goto loc_82F20E60;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82f23980
	ctx.lr = 0x82F20E60;
	sub_82F23980(ctx, base);
loc_82F20E60:
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r11,r11,21120
	ctx.r11.s64 = ctx.r11.s64 + 21120;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// bne cr6,0x82f20e84
	if (!ctx.cr6.eq) goto loc_82F20E84;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e79878
	ctx.lr = 0x82F20E84;
	sub_82E79878(ctx, base);
loc_82F20E84:
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

__attribute__((alias("__imp__sub_82F20E98"))) PPC_WEAK_FUNC(sub_82F20E98);
PPC_FUNC_IMPL(__imp__sub_82F20E98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// li r9,20
	ctx.r9.s64 = 20;
	// addi r10,r11,8688
	ctx.r10.s64 = ctx.r11.s64 + 8688;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// addi r10,r3,20
	ctx.r10.s64 = ctx.r3.s64 + 20;
	// sth r11,12(r3)
	PPC_STORE_U16(ctx.r3.u32 + 12, ctx.r11.u16);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82F20EBC:
	// sth r11,4(r10)
	PPC_STORE_U16(ctx.r10.u32 + 4, ctx.r11.u16);
	// stwu r11,8(r10)
	ea = 8 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x82f20ebc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82F20EBC;
	// lis r10,-32234
	ctx.r10.s64 = -2112487424;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// sth r11,20(r3)
	PPC_STORE_U16(ctx.r3.u32 + 20, ctx.r11.u16);
	// addi r10,r10,8688
	ctx.r10.s64 = ctx.r10.s64 + 8688;
	// stb r11,22(r3)
	PPC_STORE_U8(ctx.r3.u32 + 22, ctx.r11.u8);
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// stw r11,184(r3)
	PPC_STORE_U32(ctx.r3.u32 + 184, ctx.r11.u32);
	// stw r11,188(r3)
	PPC_STORE_U32(ctx.r3.u32 + 188, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F20EF0"))) PPC_WEAK_FUNC(sub_82F20EF0);
PPC_FUNC_IMPL(__imp__sub_82F20EF0) {
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
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82f20f14
	if (!ctx.cr6.eq) goto loc_82F20F14;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// b 0x82f20f20
	goto loc_82F20F20;
loc_82F20F14:
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82f20d58
	ctx.lr = 0x82F20F1C;
	sub_82F20D58(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_82F20F20:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F20F30"))) PPC_WEAK_FUNC(sub_82F20F30);
PPC_FUNC_IMPL(__imp__sub_82F20F30) {
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
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82f20f54
	if (!ctx.cr6.eq) goto loc_82F20F54;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// b 0x82f20f60
	goto loc_82F20F60;
loc_82F20F54:
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82f20dc0
	ctx.lr = 0x82F20F5C;
	sub_82F20DC0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_82F20F60:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F20F70"))) PPC_WEAK_FUNC(sub_82F20F70);
PPC_FUNC_IMPL(__imp__sub_82F20F70) {
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
	// bl 0x82e95af0
	ctx.lr = 0x82F20F88;
	sub_82E95AF0(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// lis r10,-32234
	ctx.r10.s64 = -2112487424;
	// addi r9,r11,8696
	ctx.r9.s64 = ctx.r11.s64 + 8696;
	// addi r10,r10,8816
	ctx.r10.s64 = ctx.r10.s64 + 8816;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r9,-32234
	ctx.r9.s64 = -2112487424;
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// stw r11,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r11.u32);
	// addi r3,r31,180
	ctx.r3.s64 = ctx.r31.s64 + 180;
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// addi r9,r9,20320
	ctx.r9.s64 = ctx.r9.s64 + 20320;
	// sth r11,88(r31)
	PPC_STORE_U16(ctx.r31.u32 + 88, ctx.r11.u16);
	// stb r11,90(r31)
	PPC_STORE_U8(ctx.r31.u32 + 90, ctx.r11.u8);
	// addi r10,r31,72
	ctx.r10.s64 = ctx.r31.s64 + 72;
	// stw r9,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r9.u32);
	// stw r11,172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 172, ctx.r11.u32);
	// stw r11,176(r31)
	PPC_STORE_U32(ctx.r31.u32 + 176, ctx.r11.u32);
	// bl 0x82f20e98
	ctx.lr = 0x82F20FD4;
	sub_82F20E98(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// addi r9,r11,28112
	ctx.r9.s64 = ctx.r11.s64 + 28112;
	// addi r8,r10,28368
	ctx.r8.s64 = ctx.r10.s64 + 28368;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,28112(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28112);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// lwz r11,4(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// lwz r11,8(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// lwz r11,12(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 12);
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// lwz r11,28368(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28368);
	// stw r11,372(r31)
	PPC_STORE_U32(ctx.r31.u32 + 372, ctx.r11.u32);
	// lwz r11,4(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// stw r11,376(r31)
	PPC_STORE_U32(ctx.r31.u32 + 376, ctx.r11.u32);
	// lwz r11,8(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// stw r11,380(r31)
	PPC_STORE_U32(ctx.r31.u32 + 380, ctx.r11.u32);
	// lwz r11,12(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// stw r11,384(r31)
	PPC_STORE_U32(ctx.r31.u32 + 384, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82F2103C"))) PPC_WEAK_FUNC(sub_82F2103C);
PPC_FUNC_IMPL(__imp__sub_82F2103C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F21040"))) PPC_WEAK_FUNC(sub_82F21040);
PPC_FUNC_IMPL(__imp__sub_82F21040) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7670
	ctx.lr = 0x82F21048;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82f21070
	if (!ctx.cr6.eq) goto loc_82F21070;
	// lis r3,-16371
	ctx.r3.s64 = -1072889856;
	// ori r3,r3,14006
	ctx.r3.u64 = ctx.r3.u64 | 14006;
	// b 0x82f210e0
	goto loc_82F210E0;
loc_82F21070:
	// lwz r11,176(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 176);
	// li r29,42
	ctx.r29.s64 = 42;
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82f210c0
	if (!ctx.cr6.gt) goto loc_82F210C0;
	// addi r28,r30,72
	ctx.r28.s64 = ctx.r30.s64 + 72;
loc_82F21088:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82f20c28
	ctx.lr = 0x82F21098;
	sub_82F20C28(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,64(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x82f210b0
	if (ctx.cr6.lt) goto loc_82F210B0;
	// addi r29,r29,2
	ctx.r29.s64 = ctx.r29.s64 + 2;
loc_82F210B0:
	// lwz r11,176(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 176);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82f21088
	if (ctx.cr6.lt) goto loc_82F21088;
loc_82F210C0:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x82f210cc
	if (ctx.cr6.eq) goto loc_82F210CC;
	// std r29,0(r27)
	PPC_STORE_U64(ctx.r27.u32 + 0, ctx.r29.u64);
loc_82F210CC:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x82f210d8
	if (ctx.cr6.eq) goto loc_82F210D8;
	// std r29,0(r26)
	PPC_STORE_U64(ctx.r26.u32 + 0, ctx.r29.u64);
loc_82F210D8:
	// std r29,32(r30)
	PPC_STORE_U64(ctx.r30.u32 + 32, ctx.r29.u64);
	// li r3,0
	ctx.r3.s64 = 0;
loc_82F210E0:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82fa76c0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F210E8"))) PPC_WEAK_FUNC(sub_82F210E8);
PPC_FUNC_IMPL(__imp__sub_82F210E8) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// addi r3,r3,68
	ctx.r3.s64 = ctx.r3.s64 + 68;
	// addi r10,r10,21120
	ctx.r10.s64 = ctx.r10.s64 + 21120;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// sth r11,14(r31)
	PPC_STORE_U16(ctx.r31.u32 + 14, ctx.r11.u16);
	// stb r11,16(r31)
	PPC_STORE_U8(ctx.r31.u32 + 16, ctx.r11.u8);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// stw r11,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r11.u32);
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// bl 0x82f20e98
	ctx.lr = 0x82F2112C;
	sub_82F20E98(ctx, base);
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

__attribute__((alias("__imp__sub_82F21144"))) PPC_WEAK_FUNC(sub_82F21144);
PPC_FUNC_IMPL(__imp__sub_82F21144) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F21148"))) PPC_WEAK_FUNC(sub_82F21148);
PPC_FUNC_IMPL(__imp__sub_82F21148) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7674
	ctx.lr = 0x82F21150;
	__savegprlr_27(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82f2117c
	if (!ctx.cr6.eq) goto loc_82F2117C;
	// lis r27,-16371
	ctx.r27.s64 = -1072889856;
	// ori r27,r27,14006
	ctx.r27.u64 = ctx.r27.u64 | 14006;
	// b 0x82f21354
	goto loc_82F21354;
loc_82F2117C:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82f2134c
	if (ctx.cr6.eq) goto loc_82F2134C;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82f21194
	if (ctx.cr6.eq) goto loc_82F21194;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82f2134c
	if (ctx.cr6.eq) goto loc_82F2134C;
loc_82F21194:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F211B0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// blt 0x82f21354
	if (ctx.cr0.lt) goto loc_82F21354;
	// li r10,1
	ctx.r10.s64 = 1;
	// ld r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// rldicr r10,r10,32,63
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// cmpld cr6,r11,r10
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, ctx.r10.u64, ctx.xer);
	// blt cr6,0x82f211d8
	if (ctx.cr6.lt) goto loc_82F211D8;
	// lis r27,-16371
	ctx.r27.s64 = -1072889856;
	// ori r27,r27,15002
	ctx.r27.u64 = ctx.r27.u64 | 15002;
	// b 0x82f21354
	goto loc_82F21354;
loc_82F211D8:
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, ctx.xer);
	// ble cr6,0x82f211f4
	if (!ctx.cr6.gt) goto loc_82F211F4;
	// lis r27,-16371
	ctx.r27.s64 = -1072889856;
	// ori r27,r27,14001
	ctx.r27.u64 = ctx.r27.u64 | 14001;
	// b 0x82f21354
	goto loc_82F21354;
loc_82F211F4:
	// addi r11,r31,16
	ctx.r11.s64 = ctx.r31.s64 + 16;
	// lhz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 20);
	// lhz r9,22(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + 22);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// rlwinm r8,r10,24,24,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFF;
	// ld r7,24(r31)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r31.u32 + 24);
	// rlwinm r6,r9,24,24,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 24) & 0xFF;
	// rlwimi r8,r10,8,16,23
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r10.u32, 8) & 0xFF00) | (ctx.r8.u64 & 0xFFFFFFFFFFFF00FF);
	// lwbrx r11,0,r11
	ctx.r11.u64 = __builtin_bswap32(PPC_LOAD_U32(ctx.r11.u32));
	// rlwimi r6,r9,8,16,23
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r9.u32, 8) & 0xFF00) | (ctx.r6.u64 & 0xFFFFFFFFFFFF00FF);
	// sth r8,100(r1)
	PPC_STORE_U16(ctx.r1.u32 + 100, ctx.r8.u16);
	// li r5,16
	ctx.r5.s64 = 16;
	// sth r6,102(r1)
	PPC_STORE_U16(ctx.r1.u32 + 102, ctx.r6.u16);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// std r7,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r7.u64);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// bl 0x82fa77c0
	ctx.lr = 0x82F21238;
	sub_82FA77C0(ctx, base);
	// ld r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 32);
	// addi r8,r31,372
	ctx.r8.s64 = ctx.r31.s64 + 372;
	// addi r9,r30,16
	ctx.r9.s64 = ctx.r30.s64 + 16;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// li r5,16
	ctx.r5.s64 = 16;
	// std r11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// rlwinm r7,r11,8,24,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF;
	// rlwimi r7,r11,24,16,23
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r11.u32, 24) & 0xFF00) | (ctx.r7.u64 & 0xFFFFFFFFFFFF00FF);
	// rlwinm r6,r10,8,24,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFF;
	// rlwimi r7,r11,8,8,15
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r11.u32, 8) & 0xFF0000) | (ctx.r7.u64 & 0xFFFFFFFFFF00FFFF);
	// rlwimi r6,r10,24,16,23
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r10.u32, 24) & 0xFF00) | (ctx.r6.u64 & 0xFFFFFFFFFFFF00FF);
	// rlwimi r7,r11,24,0,7
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r11.u32, 24) & 0xFF000000) | (ctx.r7.u64 & 0xFFFFFFFF00FFFFFF);
	// rlwimi r6,r10,8,8,15
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r10.u32, 8) & 0xFF0000) | (ctx.r6.u64 & 0xFFFFFFFFFF00FFFF);
	// clrldi r11,r7,32
	ctx.r11.u64 = ctx.r7.u64 & 0xFFFFFFFF;
	// rlwimi r6,r10,24,0,7
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r10.u32, 24) & 0xFF000000) | (ctx.r6.u64 & 0xFFFFFFFF00FFFFFF);
	// rldimi r11,r6,32,0
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r6.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r11.u64 & 0xFFFFFFFF);
	// std r11,16(r30)
	PPC_STORE_U64(ctx.r30.u32 + 16, ctx.r11.u64);
	// addi r30,r9,8
	ctx.r30.s64 = ctx.r9.s64 + 8;
	// lwbrx r10,0,r8
	ctx.r10.u64 = __builtin_bswap32(PPC_LOAD_U32(ctx.r8.u32));
	// lhz r11,378(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 378);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lhz r8,376(r31)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r31.u32 + 376);
	// ld r9,380(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 380);
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// rlwinm r6,r11,24,24,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFF;
	// rlwinm r7,r8,24,24,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 24) & 0xFF;
	// rlwimi r6,r11,8,16,23
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r11.u32, 8) & 0xFF00) | (ctx.r6.u64 & 0xFFFFFFFFFFFF00FF);
	// std r9,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r9.u64);
	// rlwimi r7,r8,8,16,23
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r8.u32, 8) & 0xFF00) | (ctx.r7.u64 & 0xFFFFFFFFFFFF00FF);
	// sth r6,102(r1)
	PPC_STORE_U16(ctx.r1.u32 + 102, ctx.r6.u16);
	// sth r7,100(r1)
	PPC_STORE_U16(ctx.r1.u32 + 100, ctx.r7.u16);
	// bl 0x82fa77c0
	ctx.lr = 0x82F212C0;
	sub_82FA77C0(ctx, base);
	// lwz r11,176(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 176);
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// rlwinm r10,r11,24,24,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFF;
	// rlwimi r10,r11,8,16,23
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 8) & 0xFF00) | (ctx.r10.u64 & 0xFFFFFFFFFFFF00FF);
	// sthu r10,16(r30)
	ea = 16 + ctx.r30.u32;
	PPC_STORE_U16(ea, ctx.r10.u16);
	ctx.r30.u32 = ea;
	// lwz r11,176(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 176);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r11,r30,2
	ctx.r11.s64 = ctx.r30.s64 + 2;
	// ble cr6,0x82f21354
	if (!ctx.cr6.gt) goto loc_82F21354;
	// addi r28,r31,72
	ctx.r28.s64 = ctx.r31.s64 + 72;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r29,r11,-2
	ctx.r29.s64 = ctx.r11.s64 + -2;
loc_82F212F0:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82f20c28
	ctx.lr = 0x82F21300;
	sub_82F20C28(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,64(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x82f21334
	if (ctx.cr6.lt) goto loc_82F21334;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82e7a0f8
	ctx.lr = 0x82F21320;
	sub_82E7A0F8(ctx, base);
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lhz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// rlwinm r10,r11,24,24,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFF;
	// rlwimi r10,r11,8,16,23
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 8) & 0xFF00) | (ctx.r10.u64 & 0xFFFFFFFFFFFF00FF);
	// sthu r10,2(r29)
	ea = 2 + ctx.r29.u32;
	PPC_STORE_U16(ea, ctx.r10.u16);
	ctx.r29.u32 = ea;
loc_82F21334:
	// addi r11,r30,1
	ctx.r11.s64 = ctx.r30.s64 + 1;
	// lwz r10,176(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 176);
	// clrlwi r30,r11,16
	ctx.r30.u64 = ctx.r11.u32 & 0xFFFF;
	// cmplw cr6,r30,r10
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82f212f0
	if (ctx.cr6.lt) goto loc_82F212F0;
	// b 0x82f21354
	goto loc_82F21354;
loc_82F2134C:
	// lis r27,-32761
	ctx.r27.s64 = -2147024896;
	// ori r27,r27,87
	ctx.r27.u64 = ctx.r27.u64 | 87;
loc_82F21354:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82fa76c4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F21360"))) PPC_WEAK_FUNC(sub_82F21360);
PPC_FUNC_IMPL(__imp__sub_82F21360) {
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
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82f2138c
	if (!ctx.cr6.eq) goto loc_82F2138C;
	// lis r3,-16371
	ctx.r3.s64 = -1072889856;
	// ori r3,r3,14006
	ctx.r3.u64 = ctx.r3.u64 | 14006;
	// b 0x82f213dc
	goto loc_82F213DC;
loc_82F2138C:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82f213a0
	if (!ctx.cr6.eq) goto loc_82F213A0;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// b 0x82f213dc
	goto loc_82F213DC;
loc_82F213A0:
	// lwz r11,176(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 176);
	// clrlwi r4,r4,16
	ctx.r4.u64 = ctx.r4.u32 & 0xFFFF;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82f213bc
	if (ctx.cr6.lt) goto loc_82F213BC;
	// lis r3,-16371
	ctx.r3.s64 = -1072889856;
	// ori r3,r3,14037
	ctx.r3.u64 = ctx.r3.u64 | 14037;
	// b 0x82f213dc
	goto loc_82F213DC;
loc_82F213BC:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r3,72
	ctx.r3.s64 = ctx.r3.s64 + 72;
	// bl 0x82f20c28
	ctx.lr = 0x82F213C8;
	sub_82F20C28(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,64(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// sth r11,0(r31)
	PPC_STORE_U16(ctx.r31.u32 + 0, ctx.r11.u16);
loc_82F213DC:
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

__attribute__((alias("__imp__sub_82F213F0"))) PPC_WEAK_FUNC(sub_82F213F0);
PPC_FUNC_IMPL(__imp__sub_82F213F0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x82F213F8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82f2141c
	if (!ctx.cr6.eq) goto loc_82F2141C;
	// lis r3,-16371
	ctx.r3.s64 = -1072889856;
	// ori r3,r3,14006
	ctx.r3.u64 = ctx.r3.u64 | 14006;
	// b 0x82f214ac
	goto loc_82F214AC;
loc_82F2141C:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// bne cr6,0x82f21430
	if (!ctx.cr6.eq) goto loc_82F21430;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// b 0x82f214ac
	goto loc_82F214AC;
loc_82F21430:
	// lwz r11,176(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 176);
	// clrlwi r31,r4,16
	ctx.r31.u64 = ctx.r4.u32 & 0xFFFF;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82f2144c
	if (ctx.cr6.lt) goto loc_82F2144C;
loc_82F21440:
	// lis r3,-16371
	ctx.r3.s64 = -1072889856;
	// ori r3,r3,14037
	ctx.r3.u64 = ctx.r3.u64 | 14037;
	// b 0x82f214ac
	goto loc_82F214AC;
loc_82F2144C:
	// addi r30,r3,72
	ctx.r30.s64 = ctx.r3.s64 + 72;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82f20c28
	ctx.lr = 0x82F21460;
	sub_82F20C28(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// clrlwi r29,r29,16
	ctx.r29.u64 = ctx.r29.u32 & 0xFFFF;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,64(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82f21440
	if (!ctx.cr6.lt) goto loc_82F21440;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82f20c28
	ctx.lr = 0x82F21488;
	sub_82F20C28(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x82e7a0f8
	ctx.lr = 0x82F2149C;
	sub_82E7A0F8(ctx, base);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// li r3,0
	ctx.r3.s64 = 0;
	// lhz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// sth r11,0(r28)
	PPC_STORE_U16(ctx.r28.u32 + 0, ctx.r11.u16);
loc_82F214AC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F214B4"))) PPC_WEAK_FUNC(sub_82F214B4);
PPC_FUNC_IMPL(__imp__sub_82F214B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F214B8"))) PPC_WEAK_FUNC(sub_82F214B8);
PPC_FUNC_IMPL(__imp__sub_82F214B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x82F214C0;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82f214e4
	if (!ctx.cr6.eq) goto loc_82F214E4;
	// lis r3,-16371
	ctx.r3.s64 = -1072889856;
	// ori r3,r3,14006
	ctx.r3.u64 = ctx.r3.u64 | 14006;
	// b 0x82f2157c
	goto loc_82F2157C;
loc_82F214E4:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x82f214f8
	if (!ctx.cr6.eq) goto loc_82F214F8;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// b 0x82f2157c
	goto loc_82F2157C;
loc_82F214F8:
	// li r11,-1
	ctx.r11.s64 = -1;
	// li r7,0
	ctx.r7.s64 = 0;
	// sth r11,0(r30)
	PPC_STORE_U16(ctx.r30.u32 + 0, ctx.r11.u16);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,260
	ctx.r3.s64 = 260;
	// bl 0x82e8edd0
	ctx.lr = 0x82F21518;
	sub_82E8EDD0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82f2152c
	if (ctx.cr0.eq) goto loc_82F2152C;
	// bl 0x82f210e8
	ctx.lr = 0x82F21524;
	sub_82F210E8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x82f21530
	goto loc_82F21530;
loc_82F2152C:
	// li r31,0
	ctx.r31.s64 = 0;
loc_82F21530:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82f21544
	if (!ctx.cr6.eq) goto loc_82F21544;
loc_82F21538:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x82f2157c
	goto loc_82F2157C;
loc_82F21544:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r29,72
	ctx.r3.s64 = ctx.r29.s64 + 72;
	// bl 0x82f208f0
	ctx.lr = 0x82F21554;
	sub_82F208F0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82f21570
	if (!ctx.cr0.eq) goto loc_82F21570;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f20e28
	ctx.lr = 0x82F21564;
	sub_82F20E28(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e8ee18
	ctx.lr = 0x82F2156C;
	sub_82E8EE18(ctx, base);
	// b 0x82f21538
	goto loc_82F21538;
loc_82F21570:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r3,0
	ctx.r3.s64 = 0;
	// sth r11,0(r30)
	PPC_STORE_U16(ctx.r30.u32 + 0, ctx.r11.u16);
loc_82F2157C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F21584"))) PPC_WEAK_FUNC(sub_82F21584);
PPC_FUNC_IMPL(__imp__sub_82F21584) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F21588"))) PPC_WEAK_FUNC(sub_82F21588);
PPC_FUNC_IMPL(__imp__sub_82F21588) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x82F21590;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82f215b0
	if (!ctx.cr6.eq) goto loc_82F215B0;
	// lis r3,-16371
	ctx.r3.s64 = -1072889856;
	// ori r3,r3,14006
	ctx.r3.u64 = ctx.r3.u64 | 14006;
	// b 0x82f21638
	goto loc_82F21638;
loc_82F215B0:
	// lwz r11,176(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 176);
	// clrlwi r31,r4,16
	ctx.r31.u64 = ctx.r4.u32 & 0xFFFF;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82f215cc
	if (ctx.cr6.lt) goto loc_82F215CC;
	// lis r3,-16371
	ctx.r3.s64 = -1072889856;
	// ori r3,r3,14037
	ctx.r3.u64 = ctx.r3.u64 | 14037;
	// b 0x82f21638
	goto loc_82F21638;
loc_82F215CC:
	// addi r30,r3,72
	ctx.r30.s64 = ctx.r3.s64 + 72;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82f20c28
	ctx.lr = 0x82F215E0;
	sub_82F20C28(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,64(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x82f21600
	if (ctx.cr6.lt) goto loc_82F21600;
	// lis r3,-16371
	ctx.r3.s64 = -1072889856;
	// ori r3,r3,15002
	ctx.r3.u64 = ctx.r3.u64 | 15002;
	// b 0x82f21638
	goto loc_82F21638;
loc_82F21600:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82f20c28
	ctx.lr = 0x82F21610;
	sub_82F20C28(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x82e7a090
	ctx.lr = 0x82F21624;
	sub_82E7A090(ctx, base);
	// addic r11,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// lis r10,-32761
	ctx.r10.s64 = -2147024896;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// ori r10,r10,14
	ctx.r10.u64 = ctx.r10.u64 | 14;
	// and r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 & ctx.r10.u64;
loc_82F21638:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F21640"))) PPC_WEAK_FUNC(sub_82F21640);
PPC_FUNC_IMPL(__imp__sub_82F21640) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa766c
	ctx.lr = 0x82F21648;
	__savegprlr_25(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82f21668
	if (!ctx.cr6.eq) goto loc_82F21668;
	// lis r3,-16371
	ctx.r3.s64 = -1072889856;
	// ori r3,r3,14006
	ctx.r3.u64 = ctx.r3.u64 | 14006;
	// b 0x82f217d4
	goto loc_82F217D4;
loc_82F21668:
	// lwz r11,176(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 176);
	// li r25,0
	ctx.r25.s64 = 0;
	// mr r27,r25
	ctx.r27.u64 = ctx.r25.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82f21748
	if (!ctx.cr6.gt) goto loc_82F21748;
	// addi r26,r28,72
	ctx.r26.s64 = ctx.r28.s64 + 72;
loc_82F21680:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82f20c28
	ctx.lr = 0x82F21690;
	sub_82F20C28(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r31,0(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82f21738
	if (ctx.cr6.eq) goto loc_82F21738;
	// lwz r11,256(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 256);
	// mr r30,r25
	ctx.r30.u64 = ctx.r25.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82f21708
	if (!ctx.cr6.gt) goto loc_82F21708;
	// addi r29,r31,68
	ctx.r29.s64 = ctx.r31.s64 + 68;
loc_82F216B4:
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82f20ad8
	ctx.lr = 0x82F216C4;
	sub_82F20AD8(ctx, base);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82f216f8
	if (ctx.cr6.eq) goto loc_82F216F8;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82f20ad8
	ctx.lr = 0x82F216E4;
	sub_82F20AD8(ctx, base);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82f216f8
	if (ctx.cr6.eq) goto loc_82F216F8;
	// bl 0x82e8ee18
	ctx.lr = 0x82F216F8;
	sub_82E8EE18(ctx, base);
loc_82F216F8:
	// lwz r11,256(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 256);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82f216b4
	if (ctx.cr6.lt) goto loc_82F216B4;
loc_82F21708:
	// addi r3,r31,68
	ctx.r3.s64 = ctx.r31.s64 + 68;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82f23980
	ctx.lr = 0x82F21714;
	sub_82F23980(ctx, base);
	// stw r25,256(r31)
	PPC_STORE_U32(ctx.r31.u32 + 256, ctx.r25.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e79878
	ctx.lr = 0x82F21724;
	sub_82E79878(ctx, base);
	// stw r25,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r25.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f20e28
	ctx.lr = 0x82F21730;
	sub_82F20E28(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e8ee18
	ctx.lr = 0x82F21738;
	sub_82E8EE18(ctx, base);
loc_82F21738:
	// lwz r11,176(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 176);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// cmplw cr6,r27,r11
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82f21680
	if (ctx.cr6.lt) goto loc_82F21680;
loc_82F21748:
	// addi r3,r28,72
	ctx.r3.s64 = ctx.r28.s64 + 72;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82e954e8
	ctx.lr = 0x82F21754;
	sub_82E954E8(ctx, base);
	// stw r25,176(r28)
	PPC_STORE_U32(ctx.r28.u32 + 176, ctx.r25.u32);
	// lwz r11,368(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 368);
	// mr r31,r25
	ctx.r31.u64 = ctx.r25.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82f217c0
	if (!ctx.cr6.gt) goto loc_82F217C0;
	// addi r30,r28,180
	ctx.r30.s64 = ctx.r28.s64 + 180;
loc_82F2176C:
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82f20ad8
	ctx.lr = 0x82F2177C;
	sub_82F20AD8(ctx, base);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82f217b0
	if (ctx.cr6.eq) goto loc_82F217B0;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82f20ad8
	ctx.lr = 0x82F2179C;
	sub_82F20AD8(ctx, base);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82f217b0
	if (ctx.cr6.eq) goto loc_82F217B0;
	// bl 0x82e8ee18
	ctx.lr = 0x82F217B0;
	sub_82E8EE18(ctx, base);
loc_82F217B0:
	// lwz r11,368(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 368);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82f2176c
	if (ctx.cr6.lt) goto loc_82F2176C;
loc_82F217C0:
	// addi r3,r28,180
	ctx.r3.s64 = ctx.r28.s64 + 180;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82f23980
	ctx.lr = 0x82F217CC;
	sub_82F23980(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r25,368(r28)
	PPC_STORE_U32(ctx.r28.u32 + 368, ctx.r25.u32);
loc_82F217D4:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82fa76bc
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F217DC"))) PPC_WEAK_FUNC(sub_82F217DC);
PPC_FUNC_IMPL(__imp__sub_82F217DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F217E0"))) PPC_WEAK_FUNC(sub_82F217E0);
PPC_FUNC_IMPL(__imp__sub_82F217E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7670
	ctx.lr = 0x82F217E8;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82f21810
	if (!ctx.cr6.eq) goto loc_82F21810;
	// lis r3,-16371
	ctx.r3.s64 = -1072889856;
	// ori r3,r3,14006
	ctx.r3.u64 = ctx.r3.u64 | 14006;
	// b 0x82f21884
	goto loc_82F21884;
loc_82F21810:
	// lwz r11,176(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 176);
	// li r30,42
	ctx.r30.s64 = 42;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82f21864
	if (!ctx.cr6.gt) goto loc_82F21864;
	// addi r28,r29,72
	ctx.r28.s64 = ctx.r29.s64 + 72;
	// li r31,0
	ctx.r31.s64 = 0;
loc_82F21828:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82f20c28
	ctx.lr = 0x82F21838;
	sub_82F20C28(ctx, base);
	// addi r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 1;
	// lwz r10,176(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 176);
	// clrlwi r31,r11,16
	ctx.r31.u64 = ctx.r11.u32 & 0xFFFF;
	// cmplw cr6,r31,r10
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, ctx.xer);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,64(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r30,r11,2
	ctx.r30.s64 = ctx.r11.s64 + 2;
	// blt cr6,0x82f21828
	if (ctx.cr6.lt) goto loc_82F21828;
loc_82F21864:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x82f21870
	if (ctx.cr6.eq) goto loc_82F21870;
	// std r30,0(r27)
	PPC_STORE_U64(ctx.r27.u32 + 0, ctx.r30.u64);
loc_82F21870:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x82f2187c
	if (ctx.cr6.eq) goto loc_82F2187C;
	// std r30,0(r26)
	PPC_STORE_U64(ctx.r26.u32 + 0, ctx.r30.u64);
loc_82F2187C:
	// std r30,32(r29)
	PPC_STORE_U64(ctx.r29.u32 + 32, ctx.r30.u64);
	// li r3,0
	ctx.r3.s64 = 0;
loc_82F21884:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82fa76c0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F2188C"))) PPC_WEAK_FUNC(sub_82F2188C);
PPC_FUNC_IMPL(__imp__sub_82F2188C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F21890"))) PPC_WEAK_FUNC(sub_82F21890);
PPC_FUNC_IMPL(__imp__sub_82F21890) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7658
	ctx.lr = 0x82F21898;
	__savegprlr_20(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r21,r4
	ctx.r21.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82f218bc
	if (!ctx.cr6.eq) goto loc_82F218BC;
	// lis r3,-16371
	ctx.r3.s64 = -1072889856;
	// ori r3,r3,14006
	ctx.r3.u64 = ctx.r3.u64 | 14006;
	// b 0x82f21afc
	goto loc_82F21AFC;
loc_82F218BC:
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, 0, ctx.xer);
	// bne cr6,0x82f218d0
	if (!ctx.cr6.eq) goto loc_82F218D0;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// b 0x82f21afc
	goto loc_82F21AFC;
loc_82F218D0:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r21)
	PPC_STORE_U32(ctx.r21.u32 + 0, ctx.r11.u32);
	// lwz r22,64(r28)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r28.u32 + 64);
	// cmplwi cr6,r22,42
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 42, ctx.xer);
	// bge cr6,0x82f218f8
	if (!ctx.cr6.lt) goto loc_82F218F8;
	// li r11,42
	ctx.r11.s64 = 42;
loc_82F218E8:
	// lis r31,-16371
	ctx.r31.s64 = -1072889856;
	// stw r11,0(r21)
	PPC_STORE_U32(ctx.r21.u32 + 0, ctx.r11.u32);
	// ori r31,r31,14001
	ctx.r31.u64 = ctx.r31.u64 | 14001;
	// b 0x82f21af8
	goto loc_82F21AF8;
loc_82F218F8:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82f21640
	ctx.lr = 0x82F21900;
	sub_82F21640(ctx, base);
	// addi r25,r28,40
	ctx.r25.s64 = ctx.r28.s64 + 40;
	// addi r3,r28,16
	ctx.r3.s64 = ctx.r28.s64 + 16;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// bl 0x82e95128
	ctx.lr = 0x82F21910;
	sub_82E95128(ctx, base);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// addi r3,r28,32
	ctx.r3.s64 = ctx.r28.s64 + 32;
	// bl 0x82e951b0
	ctx.lr = 0x82F2191C;
	sub_82E951B0(ctx, base);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// addi r3,r28,372
	ctx.r3.s64 = ctx.r28.s64 + 372;
	// bl 0x82e95128
	ctx.lr = 0x82F21928;
	sub_82E95128(ctx, base);
	// lis r11,-16371
	ctx.r11.s64 = -1072889856;
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// ori r20,r11,14001
	ctx.r20.u64 = ctx.r11.u64 | 14001;
	// blt 0x82f21ab4
	if (ctx.cr0.lt) goto loc_82F21AB4;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e95240
	ctx.lr = 0x82F21944;
	sub_82E95240(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x82f21ab4
	if (ctx.cr0.lt) goto loc_82F21AB4;
	// lhz r24,80(r1)
	ctx.r24.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// li r27,0
	ctx.r27.s64 = 0;
	// li r26,0
	ctx.r26.s64 = 0;
	// cmplwi r24,0
	ctx.cr0.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// beq 0x82f21a94
	if (ctx.cr0.eq) goto loc_82F21A94;
	// lis r11,-32761
	ctx.r11.s64 = -2147024896;
	// ori r23,r11,14
	ctx.r23.u64 = ctx.r11.u64 | 14;
loc_82F21968:
	// lwz r10,64(r28)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r28.u32 + 64);
	// subf r11,r10,r22
	ctx.r11.s64 = ctx.r22.s64 - ctx.r10.s64;
	// cmplwi cr6,r10,2
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 2, ctx.xer);
	// blt cr6,0x82f21a70
	if (ctx.cr6.lt) goto loc_82F21A70;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,260
	ctx.r3.s64 = 260;
	// bl 0x82e8edd0
	ctx.lr = 0x82F21990;
	sub_82E8EDD0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82f219a4
	if (ctx.cr0.eq) goto loc_82F219A4;
	// bl 0x82f210e8
	ctx.lr = 0x82F2199C;
	sub_82F210E8(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// b 0x82f219a8
	goto loc_82F219A8;
loc_82F219A4:
	// li r27,0
	ctx.r27.s64 = 0;
loc_82F219A8:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x82f21a78
	if (ctx.cr6.eq) goto loc_82F21A78;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e95240
	ctx.lr = 0x82F219BC;
	sub_82E95240(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x82f21a9c
	if (ctx.cr0.lt) goto loc_82F21A9C;
	// lhz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// lwz r9,64(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 64);
	// rotlwi r11,r10,1
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// mr r29,r10
	ctx.r29.u64 = ctx.r10.u64;
	// subf r10,r9,r22
	ctx.r10.s64 = ctx.r22.s64 - ctx.r9.s64;
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82f21a80
	if (ctx.cr6.lt) goto loc_82F21A80;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82f21a34
	if (ctx.cr6.eq) goto loc_82F21A34;
loc_82F219EC:
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// addi r3,r1,82
	ctx.r3.s64 = ctx.r1.s64 + 82;
	// bl 0x82e95240
	ctx.lr = 0x82F219F8;
	sub_82E95240(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x82f21a9c
	if (ctx.cr0.lt) goto loc_82F21A9C;
	// li r5,0
	ctx.r5.s64 = 0;
	// lhz r4,82(r1)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r1.u32 + 82);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82e7a090
	ctx.lr = 0x82F21A10;
	sub_82E7A090(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82f21a30
	if (ctx.cr0.eq) goto loc_82F21A30;
	// clrlwi r11,r30,16
	ctx.r11.u64 = ctx.r30.u32 & 0xFFFF;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r30,r11,16
	ctx.r30.u64 = ctx.r11.u32 & 0xFFFF;
	// cmplw cr6,r30,r29
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r29.u32, ctx.xer);
	// blt cr6,0x82f219ec
	if (ctx.cr6.lt) goto loc_82F219EC;
	// b 0x82f21a34
	goto loc_82F21A34;
loc_82F21A30:
	// mr r31,r23
	ctx.r31.u64 = ctx.r23.u64;
loc_82F21A34:
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt cr6,0x82f21a9c
	if (ctx.cr6.lt) goto loc_82F21A9C;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// addi r3,r28,72
	ctx.r3.s64 = ctx.r28.s64 + 72;
	// bl 0x82f208f0
	ctx.lr = 0x82F21A4C;
	sub_82F208F0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82f21a90
	if (ctx.cr0.eq) goto loc_82F21A90;
	// clrlwi r11,r26,16
	ctx.r11.u64 = ctx.r26.u32 & 0xFFFF;
	// li r27,0
	ctx.r27.s64 = 0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r26,r11,16
	ctx.r26.u64 = ctx.r11.u32 & 0xFFFF;
	// cmplw cr6,r26,r24
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r24.u32, ctx.xer);
	// blt cr6,0x82f21968
	if (ctx.cr6.lt) goto loc_82F21968;
	// b 0x82f21a94
	goto loc_82F21A94;
loc_82F21A70:
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// b 0x82f218e8
	goto loc_82F218E8;
loc_82F21A78:
	// mr r31,r23
	ctx.r31.u64 = ctx.r23.u64;
	// b 0x82f21abc
	goto loc_82F21ABC;
loc_82F21A80:
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r31,r20
	ctx.r31.u64 = ctx.r20.u64;
	// stw r11,0(r21)
	PPC_STORE_U32(ctx.r21.u32 + 0, ctx.r11.u32);
	// b 0x82f21a9c
	goto loc_82F21A9C;
loc_82F21A90:
	// mr r31,r23
	ctx.r31.u64 = ctx.r23.u64;
loc_82F21A94:
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bge cr6,0x82f21ab4
	if (!ctx.cr6.lt) goto loc_82F21AB4;
loc_82F21A9C:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x82f21ab4
	if (ctx.cr6.eq) goto loc_82F21AB4;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82f20e28
	ctx.lr = 0x82F21AAC;
	sub_82F20E28(ctx, base);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82e8ee18
	ctx.lr = 0x82F21AB4;
	sub_82E8EE18(ctx, base);
loc_82F21AB4:
	// cmpw cr6,r31,r20
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r20.s32, ctx.xer);
	// beq cr6,0x82f21af8
	if (ctx.cr6.eq) goto loc_82F21AF8;
loc_82F21ABC:
	// lwz r11,64(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 64);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// subf r11,r11,r22
	ctx.r11.s64 = ctx.r22.s64 - ctx.r11.s64;
	// stw r11,0(r21)
	PPC_STORE_U32(ctx.r21.u32 + 0, ctx.r11.u32);
	// blt cr6,0x82f21af8
	if (ctx.cr6.lt) goto loc_82F21AF8;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r11,44(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F21AE4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// cmpld cr6,r3,r11
	ctx.cr6.compare<uint64_t>(ctx.r3.u64, ctx.r11.u64, ctx.xer);
	// beq cr6,0x82f21af8
	if (ctx.cr6.eq) goto loc_82F21AF8;
	// lis r31,-16371
	ctx.r31.s64 = -1072889856;
	// ori r31,r31,15002
	ctx.r31.u64 = ctx.r31.u64 | 15002;
loc_82F21AF8:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82F21AFC:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82fa76a8
	__restgprlr_20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F21B04"))) PPC_WEAK_FUNC(sub_82F21B04);
PPC_FUNC_IMPL(__imp__sub_82F21B04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F21B08"))) PPC_WEAK_FUNC(sub_82F21B08);
PPC_FUNC_IMPL(__imp__sub_82F21B08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7670
	ctx.lr = 0x82F21B10;
	__savegprlr_26(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82f21b3c
	if (!ctx.cr6.eq) goto loc_82F21B3C;
	// lis r3,-16371
	ctx.r3.s64 = -1072889856;
	// ori r3,r3,14006
	ctx.r3.u64 = ctx.r3.u64 | 14006;
	// b 0x82f21d44
	goto loc_82F21D44;
loc_82F21B3C:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82f21d3c
	if (ctx.cr6.eq) goto loc_82F21D3C;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82f21b54
	if (ctx.cr6.eq) goto loc_82F21B54;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82f21d3c
	if (ctx.cr6.eq) goto loc_82F21D3C;
loc_82F21B54:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r5,0
	ctx.r5.s64 = 0;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,20(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F21B70;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// ld r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// rldicr r10,r10,32,63
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u64, 32) & 0xFFFFFFFFFFFFFFFF;
	// cmpld cr6,r11,r10
	ctx.cr6.compare<uint64_t>(ctx.r11.u64, ctx.r10.u64, ctx.xer);
	// blt cr6,0x82f21b90
	if (ctx.cr6.lt) goto loc_82F21B90;
	// lis r3,-16371
	ctx.r3.s64 = -1072889856;
	// ori r3,r3,15002
	ctx.r3.u64 = ctx.r3.u64 | 15002;
	// b 0x82f21d44
	goto loc_82F21D44;
loc_82F21B90:
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, ctx.xer);
	// ble cr6,0x82f21bac
	if (!ctx.cr6.gt) goto loc_82F21BAC;
	// lis r3,-16371
	ctx.r3.s64 = -1072889856;
	// ori r3,r3,14001
	ctx.r3.u64 = ctx.r3.u64 | 14001;
	// b 0x82f21d44
	goto loc_82F21D44;
loc_82F21BAC:
	// addi r11,r31,16
	ctx.r11.s64 = ctx.r31.s64 + 16;
	// lhz r10,20(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 20);
	// lhz r9,22(r31)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r31.u32 + 22);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// rlwinm r8,r10,24,24,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFF;
	// ld r7,24(r31)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r31.u32 + 24);
	// rlwinm r6,r9,24,24,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 24) & 0xFF;
	// rlwimi r8,r10,8,16,23
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r10.u32, 8) & 0xFF00) | (ctx.r8.u64 & 0xFFFFFFFFFFFF00FF);
	// lwbrx r11,0,r11
	ctx.r11.u64 = __builtin_bswap32(PPC_LOAD_U32(ctx.r11.u32));
	// rlwimi r6,r9,8,16,23
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r9.u32, 8) & 0xFF00) | (ctx.r6.u64 & 0xFFFFFFFFFFFF00FF);
	// sth r8,100(r1)
	PPC_STORE_U16(ctx.r1.u32 + 100, ctx.r8.u16);
	// li r5,16
	ctx.r5.s64 = 16;
	// sth r6,102(r1)
	PPC_STORE_U16(ctx.r1.u32 + 102, ctx.r6.u16);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// std r7,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r7.u64);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// bl 0x82fa77c0
	ctx.lr = 0x82F21BF0;
	sub_82FA77C0(ctx, base);
	// ld r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 32);
	// addi r8,r31,372
	ctx.r8.s64 = ctx.r31.s64 + 372;
	// addi r9,r30,16
	ctx.r9.s64 = ctx.r30.s64 + 16;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// li r5,16
	ctx.r5.s64 = 16;
	// std r11,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r11.u64);
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// rlwinm r7,r11,8,24,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFF;
	// rlwimi r7,r11,24,16,23
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r11.u32, 24) & 0xFF00) | (ctx.r7.u64 & 0xFFFFFFFFFFFF00FF);
	// rlwinm r6,r10,8,24,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFF;
	// rlwimi r7,r11,8,8,15
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r11.u32, 8) & 0xFF0000) | (ctx.r7.u64 & 0xFFFFFFFFFF00FFFF);
	// rlwimi r6,r10,24,16,23
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r10.u32, 24) & 0xFF00) | (ctx.r6.u64 & 0xFFFFFFFFFFFF00FF);
	// rlwimi r7,r11,24,0,7
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r11.u32, 24) & 0xFF000000) | (ctx.r7.u64 & 0xFFFFFFFF00FFFFFF);
	// rlwimi r6,r10,8,8,15
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r10.u32, 8) & 0xFF0000) | (ctx.r6.u64 & 0xFFFFFFFFFF00FFFF);
	// clrldi r11,r7,32
	ctx.r11.u64 = ctx.r7.u64 & 0xFFFFFFFF;
	// rlwimi r6,r10,24,0,7
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r10.u32, 24) & 0xFF000000) | (ctx.r6.u64 & 0xFFFFFFFF00FFFFFF);
	// rldimi r11,r6,32,0
	ctx.r11.u64 = (__builtin_rotateleft64(ctx.r6.u64, 32) & 0xFFFFFFFF00000000) | (ctx.r11.u64 & 0xFFFFFFFF);
	// std r11,16(r30)
	PPC_STORE_U64(ctx.r30.u32 + 16, ctx.r11.u64);
	// addi r30,r9,8
	ctx.r30.s64 = ctx.r9.s64 + 8;
	// lwbrx r10,0,r8
	ctx.r10.u64 = __builtin_bswap32(PPC_LOAD_U32(ctx.r8.u32));
	// lhz r11,378(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 378);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lhz r8,376(r31)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r31.u32 + 376);
	// ld r9,380(r31)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r31.u32 + 380);
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// rlwinm r6,r11,24,24,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFF;
	// rlwinm r7,r8,24,24,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 24) & 0xFF;
	// rlwimi r6,r11,8,16,23
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r11.u32, 8) & 0xFF00) | (ctx.r6.u64 & 0xFFFFFFFFFFFF00FF);
	// std r9,104(r1)
	PPC_STORE_U64(ctx.r1.u32 + 104, ctx.r9.u64);
	// rlwimi r7,r8,8,16,23
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r8.u32, 8) & 0xFF00) | (ctx.r7.u64 & 0xFFFFFFFFFFFF00FF);
	// sth r6,102(r1)
	PPC_STORE_U16(ctx.r1.u32 + 102, ctx.r6.u16);
	// sth r7,100(r1)
	PPC_STORE_U16(ctx.r1.u32 + 100, ctx.r7.u16);
	// bl 0x82fa77c0
	ctx.lr = 0x82F21C78;
	sub_82FA77C0(ctx, base);
	// lwz r11,176(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 176);
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// rlwinm r10,r11,24,24,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFF;
	// rlwimi r10,r11,8,16,23
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 8) & 0xFF00) | (ctx.r10.u64 & 0xFFFFFFFFFFFF00FF);
	// sthu r10,16(r30)
	ea = 16 + ctx.r30.u32;
	PPC_STORE_U16(ea, ctx.r10.u16);
	ctx.r30.u32 = ea;
	// lwz r11,176(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 176);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r11,r30,2
	ctx.r11.s64 = ctx.r30.s64 + 2;
	// ble cr6,0x82f21d34
	if (!ctx.cr6.gt) goto loc_82F21D34;
	// addi r26,r31,72
	ctx.r26.s64 = ctx.r31.s64 + 72;
	// li r27,0
	ctx.r27.s64 = 0;
	// addi r30,r11,-2
	ctx.r30.s64 = ctx.r11.s64 + -2;
loc_82F21CA8:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82f20c28
	ctx.lr = 0x82F21CB8;
	sub_82F20C28(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r29,0(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,64(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 64);
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// rlwinm r10,r11,24,24,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFF;
	// rlwimi r10,r11,8,16,23
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 8) & 0xFF00) | (ctx.r10.u64 & 0xFFFFFFFFFFFF00FF);
	// sth r10,2(r30)
	PPC_STORE_U16(ctx.r30.u32 + 2, ctx.r10.u16);
	// addi r30,r30,2
	ctx.r30.s64 = ctx.r30.s64 + 2;
	// lwz r11,64(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 64);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82f21d20
	if (!ctx.cr6.gt) goto loc_82F21D20;
	// li r28,0
	ctx.r28.s64 = 0;
loc_82F21CE8:
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82e7a0f8
	ctx.lr = 0x82F21CF8;
	sub_82E7A0F8(ctx, base);
	// addi r11,r28,1
	ctx.r11.s64 = ctx.r28.s64 + 1;
	// clrlwi r28,r11,16
	ctx.r28.u64 = ctx.r11.u32 & 0xFFFF;
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lhz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// rlwinm r10,r11,24,24,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFF;
	// rlwimi r10,r11,8,16,23
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 8) & 0xFF00) | (ctx.r10.u64 & 0xFFFFFFFFFFFF00FF);
	// sthu r10,2(r30)
	ea = 2 + ctx.r30.u32;
	PPC_STORE_U16(ea, ctx.r10.u16);
	ctx.r30.u32 = ea;
	// lwz r11,64(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 64);
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82f21ce8
	if (ctx.cr6.lt) goto loc_82F21CE8;
loc_82F21D20:
	// addi r11,r27,1
	ctx.r11.s64 = ctx.r27.s64 + 1;
	// lwz r10,176(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 176);
	// clrlwi r27,r11,16
	ctx.r27.u64 = ctx.r11.u32 & 0xFFFF;
	// cmplw cr6,r27,r10
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82f21ca8
	if (ctx.cr6.lt) goto loc_82F21CA8;
loc_82F21D34:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82f21d44
	goto loc_82F21D44;
loc_82F21D3C:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
loc_82F21D44:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82fa76c0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F21D4C"))) PPC_WEAK_FUNC(sub_82F21D4C);
PPC_FUNC_IMPL(__imp__sub_82F21D4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F21D50"))) PPC_WEAK_FUNC(sub_82F21D50);
PPC_FUNC_IMPL(__imp__sub_82F21D50) {
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
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82f21d7c
	if (!ctx.cr6.eq) goto loc_82F21D7C;
	// lis r3,-16371
	ctx.r3.s64 = -1072889856;
	// ori r3,r3,14006
	ctx.r3.u64 = ctx.r3.u64 | 14006;
	// b 0x82f21dcc
	goto loc_82F21DCC;
loc_82F21D7C:
	// lwz r11,176(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 176);
	// clrlwi r4,r4,16
	ctx.r4.u64 = ctx.r4.u32 & 0xFFFF;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82f21d98
	if (ctx.cr6.lt) goto loc_82F21D98;
	// lis r3,-16371
	ctx.r3.s64 = -1072889856;
	// ori r3,r3,14037
	ctx.r3.u64 = ctx.r3.u64 | 14037;
	// b 0x82f21dcc
	goto loc_82F21DCC;
loc_82F21D98:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r3,r3,72
	ctx.r3.s64 = ctx.r3.s64 + 72;
	// bl 0x82f20c28
	ctx.lr = 0x82F21DA4;
	sub_82F20C28(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x82e7a090
	ctx.lr = 0x82F21DB8;
	sub_82E7A090(ctx, base);
	// addic r11,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r11.s64 = ctx.r3.s64 + -1;
	// lis r10,-32761
	ctx.r10.s64 = -2147024896;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// ori r10,r10,14
	ctx.r10.u64 = ctx.r10.u64 | 14;
	// and r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 & ctx.r10.u64;
loc_82F21DCC:
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

__attribute__((alias("__imp__sub_82F21DE0"))) PPC_WEAK_FUNC(sub_82F21DE0);
PPC_FUNC_IMPL(__imp__sub_82F21DE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x82F21DE8;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82f21e08
	if (!ctx.cr6.eq) goto loc_82F21E08;
	// lis r3,-16371
	ctx.r3.s64 = -1072889856;
	// ori r3,r3,14006
	ctx.r3.u64 = ctx.r3.u64 | 14006;
	// b 0x82f21eac
	goto loc_82F21EAC;
loc_82F21E08:
	// lwz r11,176(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 176);
	// clrlwi r31,r4,16
	ctx.r31.u64 = ctx.r4.u32 & 0xFFFF;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82f21ea4
	if (!ctx.cr6.lt) goto loc_82F21EA4;
	// addi r30,r3,72
	ctx.r30.s64 = ctx.r3.s64 + 72;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// bl 0x82f20c28
	ctx.lr = 0x82F21E30;
	sub_82F20C28(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,64(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82f21ea4
	if (!ctx.cr6.gt) goto loc_82F21EA4;
	// clrlwi r28,r28,16
	ctx.r28.u64 = ctx.r28.u32 & 0xFFFF;
loc_82F21E48:
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82f20c28
	ctx.lr = 0x82F21E58;
	sub_82F20C28(ctx, base);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x82e7a0f8
	ctx.lr = 0x82F21E6C;
	sub_82E7A0F8(ctx, base);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lhz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + 0);
	// cmplw cr6,r11,r28
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r28.u32, ctx.xer);
	// beq cr6,0x82f21eb4
	if (ctx.cr6.eq) goto loc_82F21EB4;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// bl 0x82f20c28
	ctx.lr = 0x82F21E90;
	sub_82F20C28(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,64(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82f21e48
	if (ctx.cr6.lt) goto loc_82F21E48;
loc_82F21EA4:
	// lis r3,-16371
	ctx.r3.s64 = -1072889856;
	// ori r3,r3,14037
	ctx.r3.u64 = ctx.r3.u64 | 14037;
loc_82F21EAC:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
loc_82F21EB4:
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// bl 0x82f20c28
	ctx.lr = 0x82F21EBC;
	sub_82F20C28(ctx, base);
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// addi r11,r29,1
	ctx.r11.s64 = ctx.r29.s64 + 1;
	// lwz r31,0(r10)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r10,64(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x82f21f04
	if (ctx.cr6.gt) goto loc_82F21F04;
	// li r30,0
	ctx.r30.s64 = 0;
loc_82F21ED8:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f20958
	ctx.lr = 0x82F21EE4;
	sub_82F20958(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82f21f04
	if (ctx.cr0.lt) goto loc_82F21F04;
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmplwi cr6,r30,1
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 1, ctx.xer);
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// blt cr6,0x82f21ed8
	if (ctx.cr6.lt) goto loc_82F21ED8;
loc_82F21F04:
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82f21eac
	goto loc_82F21EAC;
}

__attribute__((alias("__imp__sub_82F21F0C"))) PPC_WEAK_FUNC(sub_82F21F0C);
PPC_FUNC_IMPL(__imp__sub_82F21F0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F21F10"))) PPC_WEAK_FUNC(sub_82F21F10);
PPC_FUNC_IMPL(__imp__sub_82F21F10) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7668
	ctx.lr = 0x82F21F18;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82f21f3c
	if (!ctx.cr6.eq) goto loc_82F21F3C;
	// lis r3,-16371
	ctx.r3.s64 = -1072889856;
	// ori r3,r3,14006
	ctx.r3.u64 = ctx.r3.u64 | 14006;
	// b 0x82f2210c
	goto loc_82F2210C;
loc_82F21F3C:
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// bne cr6,0x82f21f50
	if (!ctx.cr6.eq) goto loc_82F21F50;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// b 0x82f2210c
	goto loc_82F2210C;
loc_82F21F50:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r24)
	PPC_STORE_U32(ctx.r24.u32 + 0, ctx.r11.u32);
	// lwz r25,64(r29)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r29.u32 + 64);
	// cmplwi cr6,r25,42
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 42, ctx.xer);
	// bge cr6,0x82f21f78
	if (!ctx.cr6.lt) goto loc_82F21F78;
	// li r11,42
	ctx.r11.s64 = 42;
loc_82F21F68:
	// lis r31,-16371
	ctx.r31.s64 = -1072889856;
	// stw r11,0(r24)
	PPC_STORE_U32(ctx.r24.u32 + 0, ctx.r11.u32);
	// ori r31,r31,14001
	ctx.r31.u64 = ctx.r31.u64 | 14001;
	// b 0x82f22108
	goto loc_82F22108;
loc_82F21F78:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82f21640
	ctx.lr = 0x82F21F80;
	sub_82F21640(ctx, base);
	// addi r26,r29,40
	ctx.r26.s64 = ctx.r29.s64 + 40;
	// addi r3,r29,16
	ctx.r3.s64 = ctx.r29.s64 + 16;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bl 0x82e95128
	ctx.lr = 0x82F21F90;
	sub_82E95128(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r3,r29,32
	ctx.r3.s64 = ctx.r29.s64 + 32;
	// bl 0x82e951b0
	ctx.lr = 0x82F21F9C;
	sub_82E951B0(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r3,r29,372
	ctx.r3.s64 = ctx.r29.s64 + 372;
	// bl 0x82e95128
	ctx.lr = 0x82F21FA8;
	sub_82E95128(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x82f220bc
	if (ctx.cr0.lt) goto loc_82F220BC;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e95240
	ctx.lr = 0x82F21FBC;
	sub_82E95240(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x82f220bc
	if (ctx.cr0.lt) goto loc_82F220BC;
	// lhz r27,80(r1)
	ctx.r27.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// addi r11,r27,21
	ctx.r11.s64 = ctx.r27.s64 + 21;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplw cr6,r25,r11
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82f21f68
	if (ctx.cr6.lt) goto loc_82F21F68;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x82f2209c
	if (ctx.cr6.eq) goto loc_82F2209C;
loc_82F21FE8:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,260
	ctx.r3.s64 = 260;
	// bl 0x82e8edd0
	ctx.lr = 0x82F22000;
	sub_82E8EDD0(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82f22014
	if (ctx.cr0.eq) goto loc_82F22014;
	// bl 0x82f210e8
	ctx.lr = 0x82F2200C;
	sub_82F210E8(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x82f22018
	goto loc_82F22018;
loc_82F22014:
	// li r30,0
	ctx.r30.s64 = 0;
loc_82F22018:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82f2207c
	if (ctx.cr6.eq) goto loc_82F2207C;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82e95240
	ctx.lr = 0x82F2202C;
	sub_82E95240(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// blt 0x82f220a4
	if (ctx.cr0.lt) goto loc_82F220A4;
	// li r5,0
	ctx.r5.s64 = 0;
	// lhz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82e7a090
	ctx.lr = 0x82F22044;
	sub_82E7A090(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82f22088
	if (ctx.cr0.eq) goto loc_82F22088;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r29,72
	ctx.r3.s64 = ctx.r29.s64 + 72;
	// bl 0x82f208f0
	ctx.lr = 0x82F2205C;
	sub_82F208F0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq 0x82f22094
	if (ctx.cr0.eq) goto loc_82F22094;
	// clrlwi r11,r28,16
	ctx.r11.u64 = ctx.r28.u32 & 0xFFFF;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r28,r11,16
	ctx.r28.u64 = ctx.r11.u32 & 0xFFFF;
	// cmplw cr6,r28,r27
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r27.u32, ctx.xer);
	// blt cr6,0x82f21fe8
	if (ctx.cr6.lt) goto loc_82F21FE8;
	// b 0x82f2209c
	goto loc_82F2209C;
loc_82F2207C:
	// lis r31,-32761
	ctx.r31.s64 = -2147024896;
	// ori r31,r31,14
	ctx.r31.u64 = ctx.r31.u64 | 14;
	// b 0x82f220cc
	goto loc_82F220CC;
loc_82F22088:
	// lis r31,-32761
	ctx.r31.s64 = -2147024896;
	// ori r31,r31,14
	ctx.r31.u64 = ctx.r31.u64 | 14;
	// b 0x82f220a4
	goto loc_82F220A4;
loc_82F22094:
	// lis r31,-32761
	ctx.r31.s64 = -2147024896;
	// ori r31,r31,14
	ctx.r31.u64 = ctx.r31.u64 | 14;
loc_82F2209C:
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bge cr6,0x82f220bc
	if (!ctx.cr6.lt) goto loc_82F220BC;
loc_82F220A4:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82f220bc
	if (ctx.cr6.eq) goto loc_82F220BC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82f20e28
	ctx.lr = 0x82F220B4;
	sub_82F20E28(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82e8ee18
	ctx.lr = 0x82F220BC;
	sub_82E8EE18(ctx, base);
loc_82F220BC:
	// lis r11,-16371
	ctx.r11.s64 = -1072889856;
	// ori r11,r11,14001
	ctx.r11.u64 = ctx.r11.u64 | 14001;
	// cmpw cr6,r31,r11
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x82f22108
	if (ctx.cr6.eq) goto loc_82F22108;
loc_82F220CC:
	// lwz r11,64(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 64);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// subf r11,r11,r25
	ctx.r11.s64 = ctx.r25.s64 - ctx.r11.s64;
	// stw r11,0(r24)
	PPC_STORE_U32(ctx.r24.u32 + 0, ctx.r11.u32);
	// blt cr6,0x82f22108
	if (ctx.cr6.lt) goto loc_82F22108;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// lwz r11,44(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F220F4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// cmpld cr6,r3,r11
	ctx.cr6.compare<uint64_t>(ctx.r3.u64, ctx.r11.u64, ctx.xer);
	// beq cr6,0x82f22108
	if (ctx.cr6.eq) goto loc_82F22108;
	// lis r31,-16371
	ctx.r31.s64 = -1072889856;
	// ori r31,r31,15002
	ctx.r31.u64 = ctx.r31.u64 | 15002;
loc_82F22108:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
loc_82F2210C:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82fa76b8
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82F22114"))) PPC_WEAK_FUNC(sub_82F22114);
PPC_FUNC_IMPL(__imp__sub_82F22114) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F22118"))) PPC_WEAK_FUNC(sub_82F22118);
PPC_FUNC_IMPL(__imp__sub_82F22118) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82f22144
	if (!ctx.cr6.eq) goto loc_82F22144;
	// lis r3,-16371
	ctx.r3.s64 = -1072889856;
	// ori r3,r3,14006
	ctx.r3.u64 = ctx.r3.u64 | 14006;
	// b 0x82f22178
	goto loc_82F22178;
loc_82F22144:
	// addi r3,r31,-4
	ctx.r3.s64 = ctx.r31.s64 + -4;
	// bl 0x82f21640
	ctx.lr = 0x82F2214C;
	sub_82F21640(ctx, base);
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82f22170
	if (ctx.cr6.eq) goto loc_82F22170;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82F22168;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_82F22170:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82f727f8
	ctx.lr = 0x82F22178;
	sub_82F727F8(ctx, base);
loc_82F22178:
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

__attribute__((alias("__imp__sub_82F2218C"))) PPC_WEAK_FUNC(sub_82F2218C);
PPC_FUNC_IMPL(__imp__sub_82F2218C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F22190"))) PPC_WEAK_FUNC(sub_82F22190);
PPC_FUNC_IMPL(__imp__sub_82F22190) {
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
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// lis r10,-32234
	ctx.r10.s64 = -2112487424;
	// addi r11,r11,8696
	ctx.r11.s64 = ctx.r11.s64 + 8696;
	// addi r10,r10,8816
	ctx.r10.s64 = ctx.r10.s64 + 8816;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// bl 0x82f22118
	ctx.lr = 0x82F221C4;
	sub_82F22118(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// addi r3,r31,180
	ctx.r3.s64 = ctx.r31.s64 + 180;
	// addi r11,r11,8688
	ctx.r11.s64 = ctx.r11.s64 + 8688;
	// stw r11,180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 180, ctx.r11.u32);
	// lwz r11,184(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 184);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82f221e8
	if (!ctx.cr6.eq) goto loc_82F221E8;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82f23980
	ctx.lr = 0x82F221E8;
	sub_82F23980(ctx, base);
loc_82F221E8:
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// lwz r10,76(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// addi r3,r31,72
	ctx.r3.s64 = ctx.r31.s64 + 72;
	// addi r11,r11,20320
	ctx.r11.s64 = ctx.r11.s64 + 20320;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r11,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r11.u32);
	// bne cr6,0x82f2220c
	if (!ctx.cr6.eq) goto loc_82F2220C;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82e954e8
	ctx.lr = 0x82F2220C;
	sub_82E954E8(ctx, base);
loc_82F2220C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e95e10
	ctx.lr = 0x82F22214;
	sub_82E95E10(ctx, base);
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

__attribute__((alias("__imp__sub_82F22228"))) PPC_WEAK_FUNC(sub_82F22228);
PPC_FUNC_IMPL(__imp__sub_82F22228) {
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
	// bl 0x82f20f70
	ctx.lr = 0x82F22240;
	sub_82F20F70(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// lis r10,-32234
	ctx.r10.s64 = -2112487424;
	// lis r9,-32234
	ctx.r9.s64 = -2112487424;
	// addi r8,r11,28128
	ctx.r8.s64 = ctx.r11.s64 + 28128;
	// addi r10,r10,8756
	ctx.r10.s64 = ctx.r10.s64 + 8756;
	// addi r9,r9,8816
	ctx.r9.s64 = ctx.r9.s64 + 8816;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
	// lwz r11,28128(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28128);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// lwz r11,4(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// lwz r11,8(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// lwz r11,12(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82F22298"))) PPC_WEAK_FUNC(sub_82F22298);
PPC_FUNC_IMPL(__imp__sub_82F22298) {
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
	// bl 0x82f22228
	ctx.lr = 0x82F222B0;
	sub_82F22228(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// lis r10,-32234
	ctx.r10.s64 = -2112487424;
	// lis r9,-32234
	ctx.r9.s64 = -2112487424;
	// addi r8,r11,27936
	ctx.r8.s64 = ctx.r11.s64 + 27936;
	// addi r10,r10,8836
	ctx.r10.s64 = ctx.r10.s64 + 8836;
	// addi r9,r9,8816
	ctx.r9.s64 = ctx.r9.s64 + 8816;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
	// lwz r11,27936(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 27936);
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// lwz r11,4(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// lwz r11,8(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// lwz r11,12(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82F22308"))) PPC_WEAK_FUNC(sub_82F22308);
PPC_FUNC_IMPL(__imp__sub_82F22308) {
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
	// bl 0x82f22190
	ctx.lr = 0x82F22328;
	sub_82F22190(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82f22340
	if (ctx.cr0.eq) goto loc_82F22340;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82f22340
	if (ctx.cr6.eq) goto loc_82F22340;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e8ee18
	ctx.lr = 0x82F22340;
	sub_82E8EE18(ctx, base);
loc_82F22340:
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

__attribute__((alias("__imp__sub_82F2235C"))) PPC_WEAK_FUNC(sub_82F2235C);
PPC_FUNC_IMPL(__imp__sub_82F2235C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F22360"))) PPC_WEAK_FUNC(sub_82F22360);
PPC_FUNC_IMPL(__imp__sub_82F22360) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82f2237c
	if (!ctx.cr6.eq) goto loc_82F2237C;
	// lis r3,-16371
	ctx.r3.s64 = -1072889856;
	// ori r3,r3,14006
	ctx.r3.u64 = ctx.r3.u64 | 14006;
	// blr 
	return;
loc_82F2237C:
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82f22390
	if (!ctx.cr6.eq) goto loc_82F22390;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// blr 
	return;
loc_82F22390:
	// lwz r10,148(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 148);
	// addi r9,r11,148
	ctx.r9.s64 = ctx.r11.s64 + 148;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// lwz r10,152(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 152);
	// stw r10,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r10.u32);
	// lwz r10,156(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 156);
	// stw r10,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r10.u32);
	// lwz r11,160(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 160);
	// stw r11,12(r4)
	PPC_STORE_U32(ctx.r4.u32 + 12, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F223BC"))) PPC_WEAK_FUNC(sub_82F223BC);
PPC_FUNC_IMPL(__imp__sub_82F223BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F223C0"))) PPC_WEAK_FUNC(sub_82F223C0);
PPC_FUNC_IMPL(__imp__sub_82F223C0) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82f223dc
	if (!ctx.cr6.eq) goto loc_82F223DC;
	// lis r3,-16371
	ctx.r3.s64 = -1072889856;
	// ori r3,r3,14006
	ctx.r3.u64 = ctx.r3.u64 | 14006;
	// blr 
	return;
loc_82F223DC:
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82f22404
	if (ctx.cr6.eq) goto loc_82F22404;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82f22404
	if (ctx.cr6.eq) goto loc_82F22404;
	// lwz r10,140(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 140);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// lwz r11,144(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 144);
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_82F22404:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F22410"))) PPC_WEAK_FUNC(sub_82F22410);
PPC_FUNC_IMPL(__imp__sub_82F22410) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82f2242c
	if (!ctx.cr6.eq) goto loc_82F2242C;
	// lis r3,-16371
	ctx.r3.s64 = -1072889856;
	// ori r3,r3,14006
	ctx.r3.u64 = ctx.r3.u64 | 14006;
	// blr 
	return;
loc_82F2242C:
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// addi r9,r11,148
	ctx.r9.s64 = ctx.r11.s64 + 148;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r10,148(r11)
	PPC_STORE_U32(ctx.r11.u32 + 148, ctx.r10.u32);
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// stw r10,152(r11)
	PPC_STORE_U32(ctx.r11.u32 + 152, ctx.r10.u32);
	// lwz r10,8(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// stw r10,156(r11)
	PPC_STORE_U32(ctx.r11.u32 + 156, ctx.r10.u32);
	// lwz r10,12(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// stw r10,160(r11)
	PPC_STORE_U32(ctx.r11.u32 + 160, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F22458"))) PPC_WEAK_FUNC(sub_82F22458);
PPC_FUNC_IMPL(__imp__sub_82F22458) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,12(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82f22474
	if (!ctx.cr6.eq) goto loc_82F22474;
	// lis r3,-16371
	ctx.r3.s64 = -1072889856;
	// ori r3,r3,14006
	ctx.r3.u64 = ctx.r3.u64 | 14006;
	// blr 
	return;
loc_82F22474:
	// stw r4,140(r11)
	PPC_STORE_U32(ctx.r11.u32 + 140, ctx.r4.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r5,144(r11)
	PPC_STORE_U32(ctx.r11.u32 + 144, ctx.r5.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F22484"))) PPC_WEAK_FUNC(sub_82F22484);
PPC_FUNC_IMPL(__imp__sub_82F22484) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F22488"))) PPC_WEAK_FUNC(sub_82F22488);
PPC_FUNC_IMPL(__imp__sub_82F22488) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82f224a0
	if (!ctx.cr6.eq) goto loc_82F224A0;
	// lis r3,-16371
	ctx.r3.s64 = -1072889856;
	// ori r3,r3,14006
	ctx.r3.u64 = ctx.r3.u64 | 14006;
	// blr 
	return;
loc_82F224A0:
	// lwz r11,136(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 136);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r11,r11,50
	ctx.r11.s64 = ctx.r11.s64 + 50;
	// beq cr6,0x82f224b8
	if (ctx.cr6.eq) goto loc_82F224B8;
	// std r11,0(r4)
	PPC_STORE_U64(ctx.r4.u32 + 0, ctx.r11.u64);
loc_82F224B8:
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82f224c4
	if (ctx.cr6.eq) goto loc_82F224C4;
	// std r11,0(r5)
	PPC_STORE_U64(ctx.r5.u32 + 0, ctx.r11.u64);
loc_82F224C4:
	// std r11,32(r3)
	PPC_STORE_U64(ctx.r3.u32 + 32, ctx.r11.u64);
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F224D0"))) PPC_WEAK_FUNC(sub_82F224D0);
PPC_FUNC_IMPL(__imp__sub_82F224D0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82f224e8
	if (!ctx.cr6.eq) goto loc_82F224E8;
	// lis r3,-16371
	ctx.r3.s64 = -1072889856;
	// ori r3,r3,14006
	ctx.r3.u64 = ctx.r3.u64 | 14006;
	// blr 
	return;
loc_82F224E8:
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82f224fc
	if (!ctx.cr6.eq) goto loc_82F224FC;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// blr 
	return;
loc_82F224FC:
	// lwz r11,136(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 136);
	// li r3,0
	ctx.r3.s64 = 0;
	// sth r11,0(r4)
	PPC_STORE_U16(ctx.r4.u32 + 0, ctx.r11.u16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82F2250C"))) PPC_WEAK_FUNC(sub_82F2250C);
PPC_FUNC_IMPL(__imp__sub_82F2250C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F22510"))) PPC_WEAK_FUNC(sub_82F22510);
PPC_FUNC_IMPL(__imp__sub_82F22510) {
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
	// lwz r11,12(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82f2253c
	if (!ctx.cr6.eq) goto loc_82F2253C;
	// lis r3,-16371
	ctx.r3.s64 = -1072889856;
	// ori r3,r3,14006
	ctx.r3.u64 = ctx.r3.u64 | 14006;
	// b 0x82f22554
	goto loc_82F22554;
loc_82F2253C:
	// addi r3,r31,72
	ctx.r3.s64 = ctx.r31.s64 + 72;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82e79878
	ctx.lr = 0x82F22548;
	sub_82E79878(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r11.u32);
loc_82F22554:
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

__attribute__((alias("__imp__sub_82F22568"))) PPC_WEAK_FUNC(sub_82F22568);
PPC_FUNC_IMPL(__imp__sub_82F22568) {
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
	// bl 0x82e95af0
	ctx.lr = 0x82F22580;
	sub_82E95AF0(ctx, base);
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// lis r10,-32234
	ctx.r10.s64 = -2112487424;
	// addi r9,r11,8896
	ctx.r9.s64 = ctx.r11.s64 + 8896;
	// addi r10,r10,9000
	ctx.r10.s64 = ctx.r10.s64 + 9000;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// lis r10,-32235
	ctx.r10.s64 = -2112552960;
	// stw r11,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r11.u32);
	// lis r9,-32235
	ctx.r9.s64 = -2112552960;
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// addi r10,r10,21120
	ctx.r10.s64 = ctx.r10.s64 + 21120;
	// sth r11,86(r31)
	PPC_STORE_U16(ctx.r31.u32 + 86, ctx.r11.u16);
	// addi r8,r9,27856
	ctx.r8.s64 = ctx.r9.s64 + 27856;
	// stb r11,88(r31)
	PPC_STORE_U8(ctx.r31.u32 + 88, ctx.r11.u8);
	// li r7,1
	ctx.r7.s64 = 1;
	// stw r10,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r10.u32);
	// stw r11,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r11.u32);
	// lis r6,-32235
	ctx.r6.s64 = -2112552960;
	// stw r11,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r11.u32);
	// addi r10,r31,72
	ctx.r10.s64 = ctx.r31.s64 + 72;
	// stw r7,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r7.u32);
	// addi r10,r6,28416
	ctx.r10.s64 = ctx.r6.s64 + 28416;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r9,27856(r9)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + 27856);
	// stw r9,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r9.u32);
	// lwz r9,4(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// stw r9,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r9.u32);
	// lwz r9,8(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// stw r9,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r9.u32);
	// lwz r9,12(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// stw r11,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r11.u32);
	// stw r11,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r11.u32);
	// stw r9,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r9.u32);
	// lwz r11,28416(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 28416);
	// stw r11,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r11.u32);
	// lwz r11,4(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// stw r11,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r11.u32);
	// lwz r11,8(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 8);
	// stw r11,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r11.u32);
	// lwz r11,12(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 12);
	// stw r11,160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 160, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82F2263C"))) PPC_WEAK_FUNC(sub_82F2263C);
PPC_FUNC_IMPL(__imp__sub_82F2263C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82F22640"))) PPC_WEAK_FUNC(sub_82F22640);
PPC_FUNC_IMPL(__imp__sub_82F22640) {
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
	// lis r11,-32234
	ctx.r11.s64 = -2112487424;
	// lis r10,-32234
	ctx.r10.s64 = -2112487424;
	// addi r11,r11,8896
	ctx.r11.s64 = ctx.r11.s64 + 8896;
	// addi r10,r10,9000
	ctx.r10.s64 = ctx.r10.s64 + 9000;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// addi r3,r3,4
	ctx.r3.s64 = ctx.r3.s64 + 4;
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// bl 0x82f727f8
	ctx.lr = 0x82F22674;
	sub_82F727F8(ctx, base);
	// lis r11,-32235
	ctx.r11.s64 = -2112552960;
	// addi r3,r31,72
	ctx.r3.s64 = ctx.r31.s64 + 72;
	// addi r11,r11,21120
	ctx.r11.s64 = ctx.r11.s64 + 21120;
	// stw r11,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r11.u32);
	// lwz r11,76(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82f22698
	if (!ctx.cr6.eq) goto loc_82F22698;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82e79878
	ctx.lr = 0x82F22698;
	sub_82E79878(ctx, base);
loc_82F22698:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82e95e10
	ctx.lr = 0x82F226A0;
	sub_82E95E10(ctx, base);
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

__attribute__((alias("__imp__sub_82F226B4"))) PPC_WEAK_FUNC(sub_82F226B4);
PPC_FUNC_IMPL(__imp__sub_82F226B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

