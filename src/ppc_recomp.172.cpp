#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_829FCA08"))) PPC_WEAK_FUNC(sub_829FCA08);
PPC_FUNC_IMPL(__imp__sub_829FCA08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7670
	ctx.lr = 0x829FCA10;
	__savegprlr_26(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,32(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 32);
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,19
	ctx.r4.s64 = 19;
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,40(r7)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + 40);
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// mr r31,r7
	ctx.r31.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x829FCA48;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne 0x829fca58
	if (!ctx.cr0.eq) goto loc_829FCA58;
	// li r3,-4
	ctx.r3.s64 = -4;
	// b 0x829fcadc
	goto loc_829FCADC;
loc_829FCA58:
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// stw r29,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r29.u32);
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
	// mr r9,r28
	ctx.r9.u64 = ctx.r28.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,19
	ctx.r5.s64 = 19;
	// li r4,19
	ctx.r4.s64 = 19;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x829fc568
	ctx.lr = 0x829FCA88;
	sub_829FC568(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,-3
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -3, ctx.xer);
	// bne cr6,0x829fcaa0
	if (!ctx.cr6.eq) goto loc_829FCAA0;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r11,r11,-28324
	ctx.r11.s64 = ctx.r11.s64 + -28324;
	// b 0x829fcac0
	goto loc_829FCAC0;
loc_829FCAA0:
	// cmpwi cr6,r30,-5
	ctx.cr6.compare<int32_t>(ctx.r30.s32, -5, ctx.xer);
	// beq cr6,0x829fcab4
	if (ctx.cr6.eq) goto loc_829FCAB4;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x829fcac4
	if (!ctx.cr6.eq) goto loc_829FCAC4;
loc_829FCAB4:
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// li r30,-3
	ctx.r30.s64 = -3;
	// addi r11,r11,-28360
	ctx.r11.s64 = ctx.r11.s64 + -28360;
loc_829FCAC0:
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
loc_829FCAC4:
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r3,40(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x829FCAD8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_829FCADC:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82fa76c0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_829FCAE4"))) PPC_WEAK_FUNC(sub_829FCAE4);
PPC_FUNC_IMPL(__imp__sub_829FCAE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_829FCAE8"))) PPC_WEAK_FUNC(sub_829FCAE8);
PPC_FUNC_IMPL(__imp__sub_829FCAE8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa765c
	ctx.lr = 0x829FCAF0;
	__savegprlr_21(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r24,292(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 292);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r22,r4
	ctx.r22.u64 = ctx.r4.u64;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,288
	ctx.r4.s64 = 288;
	// lwz r11,32(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r3,40(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + 40);
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// mr r23,r7
	ctx.r23.u64 = ctx.r7.u64;
	// mr r26,r8
	ctx.r26.u64 = ctx.r8.u64;
	// mr r21,r9
	ctx.r21.u64 = ctx.r9.u64;
	// mr r27,r10
	ctx.r27.u64 = ctx.r10.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x829FCB38;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne 0x829fcb48
	if (!ctx.cr0.eq) goto loc_829FCB48;
	// li r3,-4
	ctx.r3.s64 = -4;
	// b 0x829fcca0
	goto loc_829FCCA0;
loc_829FCB48:
	// lis r11,-32251
	ctx.r11.s64 = -2113601536;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// addi r31,r11,32328
	ctx.r31.s64 = ctx.r11.s64 + 32328;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// addi r7,r31,128
	ctx.r7.s64 = ctx.r31.s64 + 128;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r9,r25
	ctx.r9.u64 = ctx.r25.u64;
	// mr r8,r26
	ctx.r8.u64 = ctx.r26.u64;
	// li r5,257
	ctx.r5.s64 = 257;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x829fc568
	ctx.lr = 0x829FCB80;
	sub_829FC568(ctx, base);
	// mr. r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// bne 0x829fcc5c
	if (!ctx.cr0.eq) goto loc_829FCC5C;
	// lwz r11,0(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x829fcc78
	if (ctx.cr6.eq) goto loc_829FCC78;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// rlwinm r11,r29,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r7,r31,376
	ctx.r7.s64 = ctx.r31.s64 + 376;
	// addi r6,r31,256
	ctx.r6.s64 = ctx.r31.s64 + 256;
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// mr r9,r23
	ctx.r9.u64 = ctx.r23.u64;
	// mr r8,r21
	ctx.r8.u64 = ctx.r21.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// add r3,r11,r28
	ctx.r3.u64 = ctx.r11.u64 + ctx.r28.u64;
	// bl 0x829fc568
	ctx.lr = 0x829FCBC8;
	sub_829FC568(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x829fcc00
	if (!ctx.cr0.eq) goto loc_829FCC00;
	// lwz r11,0(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x829fcbe4
	if (!ctx.cr6.eq) goto loc_829FCBE4;
	// cmplwi cr6,r29,257
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 257, ctx.xer);
	// bgt cr6,0x829fcc30
	if (ctx.cr6.gt) goto loc_829FCC30;
loc_829FCBE4:
	// lwz r11,36(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 36);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,40(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x829FCBF8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x829fcca0
	goto loc_829FCCA0;
loc_829FCC00:
	// cmpwi cr6,r31,-3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, -3, ctx.xer);
	// bne cr6,0x829fcc14
	if (!ctx.cr6.eq) goto loc_829FCC14;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r11,r11,-28152
	ctx.r11.s64 = ctx.r11.s64 + -28152;
	// b 0x829fcc3c
	goto loc_829FCC3C;
loc_829FCC14:
	// cmpwi cr6,r31,-5
	ctx.cr6.compare<int32_t>(ctx.r31.s32, -5, ctx.xer);
	// bne cr6,0x829fcc28
	if (!ctx.cr6.eq) goto loc_829FCC28;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r11,r11,-28180
	ctx.r11.s64 = ctx.r11.s64 + -28180;
	// b 0x829fcc38
	goto loc_829FCC38;
loc_829FCC28:
	// cmpwi cr6,r31,-4
	ctx.cr6.compare<int32_t>(ctx.r31.s32, -4, ctx.xer);
	// beq cr6,0x829fcc40
	if (ctx.cr6.eq) goto loc_829FCC40;
loc_829FCC30:
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r11,r11,-28216
	ctx.r11.s64 = ctx.r11.s64 + -28216;
loc_829FCC38:
	// li r31,-3
	ctx.r31.s64 = -3;
loc_829FCC3C:
	// stw r11,24(r24)
	PPC_STORE_U32(ctx.r24.u32 + 24, ctx.r11.u32);
loc_829FCC40:
	// lwz r11,36(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 36);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,40(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x829FCC54;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x829fcca0
	goto loc_829FCCA0;
loc_829FCC5C:
	// cmpwi cr6,r26,-3
	ctx.cr6.compare<int32_t>(ctx.r26.s32, -3, ctx.xer);
	// bne cr6,0x829fcc70
	if (!ctx.cr6.eq) goto loc_829FCC70;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r11,r11,-28252
	ctx.r11.s64 = ctx.r11.s64 + -28252;
	// b 0x829fcc84
	goto loc_829FCC84;
loc_829FCC70:
	// cmpwi cr6,r26,-4
	ctx.cr6.compare<int32_t>(ctx.r26.s32, -4, ctx.xer);
	// beq cr6,0x829fcc88
	if (ctx.cr6.eq) goto loc_829FCC88;
loc_829FCC78:
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// li r26,-3
	ctx.r26.s64 = -3;
	// addi r11,r11,-28284
	ctx.r11.s64 = ctx.r11.s64 + -28284;
loc_829FCC84:
	// stw r11,24(r24)
	PPC_STORE_U32(ctx.r24.u32 + 24, ctx.r11.u32);
loc_829FCC88:
	// lwz r11,36(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 36);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r3,40(r24)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r24.u32 + 40);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x829FCC9C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
loc_829FCCA0:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82fa76ac
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_829FCCA8"))) PPC_WEAK_FUNC(sub_829FCCA8);
PPC_FUNC_IMPL(__imp__sub_829FCCA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// li r10,9
	ctx.r10.s64 = 9;
	// addi r11,r11,-28616
	ctx.r11.s64 = ctx.r11.s64 + -28616;
	// stw r10,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r10.u32);
	// li r9,5
	ctx.r9.s64 = 5;
	// addi r10,r11,-4096
	ctx.r10.s64 = ctx.r11.s64 + -4096;
	// stw r9,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r9.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r10,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r10.u32);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_829FCCD4"))) PPC_WEAK_FUNC(sub_829FCCD4);
PPC_FUNC_IMPL(__imp__sub_829FCCD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_829FCCD8"))) PPC_WEAK_FUNC(sub_829FCCD8);
PPC_FUNC_IMPL(__imp__sub_829FCCD8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7670
	ctx.lr = 0x829FCCE0;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r28,48(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,52(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// lwz r27,12(r4)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x829fcd08
	if (!ctx.cr6.gt) goto loc_829FCD08;
	// lwz r11,44(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 44);
loc_829FCD08:
	// subf r30,r28,r11
	ctx.r30.s64 = ctx.r11.s64 - ctx.r28.s64;
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x829fcd1c
	if (!ctx.cr6.gt) goto loc_829FCD1C;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
loc_829FCD1C:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x829fcd34
	if (ctx.cr6.eq) goto loc_829FCD34;
	// addi r10,r26,5
	ctx.r10.s64 = ctx.r26.s64 + 5;
	// subfic r10,r10,0
	ctx.xer.ca = ctx.r10.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r10.s64;
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r26,r10,r26
	ctx.r26.u64 = ctx.r10.u64 & ctx.r26.u64;
loc_829FCD34:
	// subf r10,r30,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r30.s64;
	// lwz r11,20(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// stw r10,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r10.u32);
	// stw r11,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r11.u32);
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x829fcd70
	if (ctx.cr6.eq) goto loc_829FCD70;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r3,60(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x829FCD68;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r3.u32);
	// stw r3,48(r29)
	PPC_STORE_U32(ctx.r29.u32 + 48, ctx.r3.u32);
loc_829FCD70:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82fa77c0
	ctx.lr = 0x829FCD80;
	sub_82FA77C0(ctx, base);
	// lwz r10,44(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// add r11,r30,r28
	ctx.r11.u64 = ctx.r30.u64 + ctx.r28.u64;
	// add r27,r30,r27
	ctx.r27.u64 = ctx.r30.u64 + ctx.r27.u64;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x829fce2c
	if (!ctx.cr6.eq) goto loc_829FCE2C;
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// lwz r28,40(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x829fcda8
	if (!ctx.cr6.eq) goto loc_829FCDA8;
	// stw r28,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r28.u32);
loc_829FCDA8:
	// lwz r10,52(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// lwz r11,16(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// subf r30,r28,r10
	ctx.r30.s64 = ctx.r10.s64 - ctx.r28.s64;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x829fcdc0
	if (!ctx.cr6.gt) goto loc_829FCDC0;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
loc_829FCDC0:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x829fcdd8
	if (ctx.cr6.eq) goto loc_829FCDD8;
	// addi r10,r26,5
	ctx.r10.s64 = ctx.r26.s64 + 5;
	// subfic r10,r10,0
	ctx.xer.ca = ctx.r10.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r10.s64;
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r26,r10,r26
	ctx.r26.u64 = ctx.r10.u64 & ctx.r26.u64;
loc_829FCDD8:
	// lwz r10,20(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 20);
	// subf r11,r30,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r30.s64;
	// add r10,r10,r30
	ctx.r10.u64 = ctx.r10.u64 + ctx.r30.u64;
	// stw r11,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r11.u32);
	// stw r10,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r10.u32);
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x829fce14
	if (ctx.cr6.eq) goto loc_829FCE14;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// lwz r3,60(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x829FCE0C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r3,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r3.u32);
	// stw r3,48(r29)
	PPC_STORE_U32(ctx.r29.u32 + 48, ctx.r3.u32);
loc_829FCE14:
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82fa77c0
	ctx.lr = 0x829FCE24;
	sub_82FA77C0(ctx, base);
	// add r27,r30,r27
	ctx.r27.u64 = ctx.r30.u64 + ctx.r27.u64;
	// add r11,r30,r28
	ctx.r11.u64 = ctx.r30.u64 + ctx.r28.u64;
loc_829FCE2C:
	// stw r27,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r27.u32);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82fa76c0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_829FCE40"))) PPC_WEAK_FUNC(sub_829FCE40);
PPC_FUNC_IMPL(__imp__sub_829FCE40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa765c
	ctx.lr = 0x829FCE48;
	__savegprlr_21(ctx, base);
	// lwz r11,48(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 48);
	// lwz r9,52(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 52);
	// lwz r24,0(r8)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// lwz r25,4(r8)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// cmplw cr6,r9,r11
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r11.u32, ctx.xer);
	// lwz r29,32(r7)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r7.u32 + 32);
	// lwz r30,28(r7)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r7.u32 + 28);
	// bge cr6,0x829fce74
	if (!ctx.cr6.lt) goto loc_829FCE74;
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// addi r26,r11,-1
	ctx.r26.s64 = ctx.r11.s64 + -1;
	// b 0x829fce7c
	goto loc_829FCE7C;
loc_829FCE74:
	// lwz r11,44(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 44);
	// subf r26,r9,r11
	ctx.r26.s64 = ctx.r11.s64 - ctx.r9.s64;
loc_829FCE7C:
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// rlwinm r10,r3,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r27,r11,-28120
	ctx.r27.s64 = ctx.r11.s64 + -28120;
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r22,r10,r27
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r27.u32);
	// lwzx r23,r11,r27
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r27.u32);
loc_829FCE94:
	// cmplwi cr6,r30,20
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 20, ctx.xer);
	// bge cr6,0x829fcec8
	if (!ctx.cr6.lt) goto loc_829FCEC8;
	// subfic r11,r30,19
	ctx.xer.ca = ctx.r30.u32 <= 19;
	ctx.r11.s64 = 19 - ctx.r30.s64;
	// rlwinm r11,r11,29,3,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_829FCEAC:
	// lbz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r24.u32 + 0);
	// addi r25,r25,-1
	ctx.r25.s64 = ctx.r25.s64 + -1;
	// addi r24,r24,1
	ctx.r24.s64 = ctx.r24.s64 + 1;
	// slw r11,r11,r30
	ctx.r11.u64 = ctx.r30.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r30.u8 & 0x3F));
	// or r29,r11,r29
	ctx.r29.u64 = ctx.r11.u64 | ctx.r29.u64;
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// bdnz 0x829fceac
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_829FCEAC;
loc_829FCEC8:
	// and r11,r22,r29
	ctx.r11.u64 = ctx.r22.u64 & ctx.r29.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r4,r11,r5
	ctx.r4.u64 = ctx.r11.u64 + ctx.r5.u64;
	// lbzx r3,r11,r5
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r5.u32);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x829fcef8
	if (!ctx.cr0.eq) goto loc_829FCEF8;
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lbz r10,1(r4)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r4.u32 + 1);
	// srw r29,r29,r10
	ctx.r29.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r29.u32 >> (ctx.r10.u8 & 0x3F));
	// stb r11,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, ctx.r11.u8);
	// subf r30,r10,r30
	ctx.r30.s64 = ctx.r30.s64 - ctx.r10.s64;
	// b 0x829fd12c
	goto loc_829FD12C;
loc_829FCEF8:
	// lbz r11,1(r4)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r4.u32 + 1);
	// rlwinm. r31,r3,0,27,27
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// srw r10,r29,r11
	ctx.r10.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r29.u32 >> (ctx.r11.u8 & 0x3F));
	// subf r11,r11,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r11.s64;
	// bne 0x829fcf4c
	if (!ctx.cr0.eq) goto loc_829FCF4C;
loc_829FCF0C:
	// rlwinm. r31,r3,0,25,25
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x829fd1f4
	if (!ctx.cr0.eq) goto loc_829FD1F4;
	// rlwinm r31,r3,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r3,4(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lwzx r31,r31,r27
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r27.u32);
	// and r31,r31,r10
	ctx.r31.u64 = ctx.r31.u64 & ctx.r10.u64;
	// add r3,r31,r3
	ctx.r3.u64 = ctx.r31.u64 + ctx.r3.u64;
	// rlwinm r3,r3,3,0,28
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// lbzux r3,r4,r3
	ea = ctx.r4.u32 + ctx.r3.u32;
	ctx.r3.u64 = PPC_LOAD_U8(ea);
	ctx.r4.u32 = ea;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x829fd118
	if (ctx.cr0.eq) goto loc_829FD118;
	// lbz r31,1(r4)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r4.u32 + 1);
	// rlwinm. r30,r3,0,27,27
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// srw r10,r10,r31
	ctx.r10.u64 = ctx.r31.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r31.u8 & 0x3F));
	// subf r11,r31,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r31.s64;
	// beq 0x829fcf0c
	if (ctx.cr0.eq) goto loc_829FCF0C;
loc_829FCF4C:
	// clrlwi r31,r3,28
	ctx.r31.u64 = ctx.r3.u32 & 0xF;
	// lwz r4,4(r4)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// rlwinm r3,r31,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r11,r31,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r31.s64;
	// cmplwi cr6,r11,15
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 15, ctx.xer);
	// lwzx r3,r3,r27
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r27.u32);
	// and r3,r3,r10
	ctx.r3.u64 = ctx.r3.u64 & ctx.r10.u64;
	// srw r10,r10,r31
	ctx.r10.u64 = ctx.r31.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r31.u8 & 0x3F));
	// add r28,r3,r4
	ctx.r28.u64 = ctx.r3.u64 + ctx.r4.u64;
	// bge cr6,0x829fcfa0
	if (!ctx.cr6.lt) goto loc_829FCFA0;
	// subfic r4,r11,14
	ctx.xer.ca = ctx.r11.u32 <= 14;
	ctx.r4.s64 = 14 - ctx.r11.s64;
	// rlwinm r4,r4,29,3,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 29) & 0x1FFFFFFF;
	// addi r4,r4,1
	ctx.r4.s64 = ctx.r4.s64 + 1;
	// mtctr r4
	ctx.ctr.u64 = ctx.r4.u64;
loc_829FCF84:
	// lbz r4,0(r24)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r24.u32 + 0);
	// addi r25,r25,-1
	ctx.r25.s64 = ctx.r25.s64 + -1;
	// addi r24,r24,1
	ctx.r24.s64 = ctx.r24.s64 + 1;
	// slw r4,r4,r11
	ctx.r4.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r4.u32 << (ctx.r11.u8 & 0x3F));
	// or r10,r4,r10
	ctx.r10.u64 = ctx.r4.u64 | ctx.r10.u64;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// bdnz 0x829fcf84
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_829FCF84;
loc_829FCFA0:
	// and r4,r23,r10
	ctx.r4.u64 = ctx.r23.u64 & ctx.r10.u64;
	// rlwinm r4,r4,3,0,28
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0xFFFFFFF8;
	// add r4,r4,r6
	ctx.r4.u64 = ctx.r4.u64 + ctx.r6.u64;
	// lbz r3,0(r4)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r4.u32 + 0);
	// rlwinm. r30,r3,0,27,27
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// b 0x829fcfe0
	goto loc_829FCFE0;
loc_829FCFB8:
	// rlwinm. r31,r3,0,25,25
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x829fd194
	if (!ctx.cr0.eq) goto loc_829FD194;
	// rlwinm r31,r3,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r3,4(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lwzx r31,r31,r27
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r27.u32);
	// and r31,r31,r10
	ctx.r31.u64 = ctx.r31.u64 & ctx.r10.u64;
	// add r3,r31,r3
	ctx.r3.u64 = ctx.r31.u64 + ctx.r3.u64;
	// rlwinm r3,r3,3,0,28
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 3) & 0xFFFFFFF8;
	// lbzux r3,r4,r3
	ea = ctx.r4.u32 + ctx.r3.u32;
	ctx.r3.u64 = PPC_LOAD_U8(ea);
	ctx.r4.u32 = ea;
	// rlwinm. r31,r3,0,27,27
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
loc_829FCFE0:
	// lbz r31,1(r4)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r4.u32 + 1);
	// subf r11,r31,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r31.s64;
	// srw r10,r10,r31
	ctx.r10.u64 = ctx.r31.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r31.u8 & 0x3F));
	// beq 0x829fcfb8
	if (ctx.cr0.eq) goto loc_829FCFB8;
	// clrlwi r3,r3,28
	ctx.r3.u64 = ctx.r3.u32 & 0xF;
	// cmplw cr6,r11,r3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r3.u32, ctx.xer);
	// bge cr6,0x829fd02c
	if (!ctx.cr6.lt) goto loc_829FD02C;
	// subf r31,r11,r3
	ctx.r31.s64 = ctx.r3.s64 - ctx.r11.s64;
	// addi r31,r31,-1
	ctx.r31.s64 = ctx.r31.s64 + -1;
	// rlwinm r31,r31,29,3,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 29) & 0x1FFFFFFF;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// mtctr r31
	ctx.ctr.u64 = ctx.r31.u64;
loc_829FD010:
	// lbz r31,0(r24)
	ctx.r31.u64 = PPC_LOAD_U8(ctx.r24.u32 + 0);
	// addi r25,r25,-1
	ctx.r25.s64 = ctx.r25.s64 + -1;
	// addi r24,r24,1
	ctx.r24.s64 = ctx.r24.s64 + 1;
	// slw r31,r31,r11
	ctx.r31.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r31.u32 << (ctx.r11.u8 & 0x3F));
	// or r10,r31,r10
	ctx.r10.u64 = ctx.r31.u64 | ctx.r10.u64;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// bdnz 0x829fd010
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_829FD010;
loc_829FD02C:
	// rlwinm r21,r3,2,0,29
	ctx.r21.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r31,4(r4)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// subf r30,r3,r11
	ctx.r30.s64 = ctx.r11.s64 - ctx.r3.s64;
	// lwz r4,40(r7)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r7.u32 + 40);
	// subf r26,r28,r26
	ctx.r26.s64 = ctx.r26.s64 - ctx.r28.s64;
	// srw r29,r10,r3
	ctx.r29.u64 = ctx.r3.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r3.u8 & 0x3F));
	// lwzx r11,r21,r27
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + ctx.r27.u32);
	// and r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 & ctx.r10.u64;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// subf r11,r11,r9
	ctx.r11.s64 = ctx.r9.s64 - ctx.r11.s64;
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// bge cr6,0x829fd0e8
	if (!ctx.cr6.lt) goto loc_829FD0E8;
	// lwz r10,44(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 44);
loc_829FD060:
	// subf r3,r4,r10
	ctx.r3.s64 = ctx.r10.s64 - ctx.r4.s64;
	// add r11,r3,r11
	ctx.r11.u64 = ctx.r3.u64 + ctx.r11.u64;
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// blt cr6,0x829fd060
	if (ctx.cr6.lt) goto loc_829FD060;
	// subf r10,r11,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r11.s64;
	// cmplw cr6,r28,r10
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x829fd0b8
	if (!ctx.cr6.gt) goto loc_829FD0B8;
	// subf r4,r10,r28
	ctx.r4.s64 = ctx.r28.s64 - ctx.r10.s64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
loc_829FD084:
	// lbzu r3,1(r11)
	ea = 1 + ctx.r11.u32;
	ctx.r3.u64 = PPC_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stb r3,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, ctx.r3.u8);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// bne 0x829fd084
	if (!ctx.cr0.eq) goto loc_829FD084;
	// lwz r11,40(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 40);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
loc_829FD0A0:
	// lbzu r10,1(r11)
	ea = 1 + ctx.r11.u32;
	ctx.r10.u64 = PPC_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// addic. r4,r4,-1
	ctx.xer.ca = ctx.r4.u32 > 0;
	ctx.r4.s64 = ctx.r4.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// stb r10,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, ctx.r10.u8);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// bne 0x829fd0a0
	if (!ctx.cr0.eq) goto loc_829FD0A0;
	// b 0x829fd134
	goto loc_829FD134;
loc_829FD0B8:
	// lbz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r10,r28,-2
	ctx.r10.s64 = ctx.r28.s64 + -2;
	// stb r4,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, ctx.r4.u8);
	// lbzu r4,1(r11)
	ea = 1 + ctx.r11.u32;
	ctx.r4.u64 = PPC_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// stbu r4,1(r9)
	ea = 1 + ctx.r9.u32;
	PPC_STORE_U8(ea, ctx.r4.u8);
	ctx.r9.u32 = ea;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
loc_829FD0D0:
	// lbzu r4,1(r11)
	ea = 1 + ctx.r11.u32;
	ctx.r4.u64 = PPC_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stb r4,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, ctx.r4.u8);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// bne 0x829fd0d0
	if (!ctx.cr0.eq) goto loc_829FD0D0;
	// b 0x829fd134
	goto loc_829FD134;
loc_829FD0E8:
	// lbz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r10,r28,-2
	ctx.r10.s64 = ctx.r28.s64 + -2;
	// stb r4,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, ctx.r4.u8);
	// lbzu r4,1(r11)
	ea = 1 + ctx.r11.u32;
	ctx.r4.u64 = PPC_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// stbu r4,1(r9)
	ea = 1 + ctx.r9.u32;
	PPC_STORE_U8(ea, ctx.r4.u8);
	ctx.r9.u32 = ea;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
loc_829FD100:
	// lbzu r4,1(r11)
	ea = 1 + ctx.r11.u32;
	ctx.r4.u64 = PPC_LOAD_U8(ea);
	ctx.r11.u32 = ea;
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stb r4,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, ctx.r4.u8);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// bne 0x829fd100
	if (!ctx.cr0.eq) goto loc_829FD100;
	// b 0x829fd134
	goto loc_829FD134;
loc_829FD118:
	// lwz r3,4(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// lbz r4,1(r4)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r4.u32 + 1);
	// srw r29,r10,r4
	ctx.r29.u64 = ctx.r4.u8 & 0x20 ? 0 : (ctx.r10.u32 >> (ctx.r4.u8 & 0x3F));
	// stb r3,0(r9)
	PPC_STORE_U8(ctx.r9.u32 + 0, ctx.r3.u8);
	// subf r30,r4,r11
	ctx.r30.s64 = ctx.r11.s64 - ctx.r4.s64;
loc_829FD12C:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r26,r26,-1
	ctx.r26.s64 = ctx.r26.s64 + -1;
loc_829FD134:
	// cmplwi cr6,r26,258
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 258, ctx.xer);
	// blt cr6,0x829fd144
	if (ctx.cr6.lt) goto loc_829FD144;
	// cmplwi cr6,r25,10
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 10, ctx.xer);
	// bge cr6,0x829fce94
	if (!ctx.cr6.lt) goto loc_829FCE94;
loc_829FD144:
	// lwz r11,4(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// rlwinm r10,r30,29,3,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 29) & 0x1FFFFFFF;
	// subf r11,r25,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r25.s64;
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x829fd15c
	if (!ctx.cr6.lt) goto loc_829FD15C;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_829FD15C:
	// rlwinm r6,r11,3,0,28
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// stw r29,32(r7)
	PPC_STORE_U32(ctx.r7.u32 + 32, ctx.r29.u32);
	// subf r10,r11,r24
	ctx.r10.s64 = ctx.r24.s64 - ctx.r11.s64;
	// subf r6,r6,r30
	ctx.r6.s64 = ctx.r30.s64 - ctx.r6.s64;
	// add r11,r11,r25
	ctx.r11.u64 = ctx.r11.u64 + ctx.r25.u64;
	// stw r6,28(r7)
	PPC_STORE_U32(ctx.r7.u32 + 28, ctx.r6.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r11.u32);
	// lwz r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// lwz r6,8(r8)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// subf r11,r11,r6
	ctx.r11.s64 = ctx.r6.s64 - ctx.r11.s64;
	// stw r10,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r10.u32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// b 0x829fd264
	goto loc_829FD264;
loc_829FD194:
	// lwz r6,4(r8)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// lis r4,-32251
	ctx.r4.s64 = -2113601536;
	// rlwinm r5,r11,29,3,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
	// addi r4,r4,32304
	ctx.r4.s64 = ctx.r4.s64 + 32304;
	// subf r6,r25,r6
	ctx.r6.s64 = ctx.r6.s64 - ctx.r25.s64;
	// stw r4,24(r8)
	PPC_STORE_U32(ctx.r8.u32 + 24, ctx.r4.u32);
	// cmplw cr6,r5,r6
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r6.u32, ctx.xer);
	// bge cr6,0x829fd1b8
	if (!ctx.cr6.lt) goto loc_829FD1B8;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
loc_829FD1B8:
	// li r3,-3
	ctx.r3.s64 = -3;
loc_829FD1BC:
	// rlwinm r5,r6,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// stw r10,32(r7)
	PPC_STORE_U32(ctx.r7.u32 + 32, ctx.r10.u32);
	// add r4,r6,r25
	ctx.r4.u64 = ctx.r6.u64 + ctx.r25.u64;
	// subf r10,r5,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r5.s64;
	// subf r11,r6,r24
	ctx.r11.s64 = ctx.r24.s64 - ctx.r6.s64;
	// stw r10,28(r7)
	PPC_STORE_U32(ctx.r7.u32 + 28, ctx.r10.u32);
	// stw r4,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r4.u32);
	// lwz r10,0(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// stw r11,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r11.u32);
	// lwz r6,8(r8)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// subf r10,r10,r6
	ctx.r10.s64 = ctx.r6.s64 - ctx.r10.s64;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r10,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r10.u32);
	// b 0x829fd268
	goto loc_829FD268;
loc_829FD1F4:
	// rlwinm. r6,r3,0,26,26
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// lwz r6,4(r8)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// rlwinm r5,r11,29,3,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
	// subf r6,r25,r6
	ctx.r6.s64 = ctx.r6.s64 - ctx.r25.s64;
	// cmplw cr6,r5,r6
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r6.u32, ctx.xer);
	// beq 0x829fd21c
	if (ctx.cr0.eq) goto loc_829FD21C;
	// bge cr6,0x829fd214
	if (!ctx.cr6.lt) goto loc_829FD214;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
loc_829FD214:
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x829fd1bc
	goto loc_829FD1BC;
loc_829FD21C:
	// lis r4,-32251
	ctx.r4.s64 = -2113601536;
	// addi r4,r4,32276
	ctx.r4.s64 = ctx.r4.s64 + 32276;
	// stw r4,24(r8)
	PPC_STORE_U32(ctx.r8.u32 + 24, ctx.r4.u32);
	// bge cr6,0x829fd230
	if (!ctx.cr6.lt) goto loc_829FD230;
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
loc_829FD230:
	// stw r10,32(r7)
	PPC_STORE_U32(ctx.r7.u32 + 32, ctx.r10.u32);
	// rlwinm r5,r6,3,0,28
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 3) & 0xFFFFFFF8;
	// add r10,r6,r25
	ctx.r10.u64 = ctx.r6.u64 + ctx.r25.u64;
	// subf r5,r5,r11
	ctx.r5.s64 = ctx.r11.s64 - ctx.r5.s64;
	// subf r11,r6,r24
	ctx.r11.s64 = ctx.r24.s64 - ctx.r6.s64;
	// stw r5,28(r7)
	PPC_STORE_U32(ctx.r7.u32 + 28, ctx.r5.u32);
	// li r3,-3
	ctx.r3.s64 = -3;
	// stw r10,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r10.u32);
	// lwz r10,8(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// lwz r6,0(r8)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// subf r10,r6,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r6.s64;
	// stw r11,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r11.u32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_829FD264:
	// stw r11,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r11.u32);
loc_829FD268:
	// stw r9,52(r7)
	PPC_STORE_U32(ctx.r7.u32 + 52, ctx.r9.u32);
	// b 0x82fa76ac
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_829FD270"))) PPC_WEAK_FUNC(sub_829FD270);
PPC_FUNC_IMPL(__imp__sub_829FD270) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x829FD278;
	__savegprlr_29(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// li r5,92
	ctx.r5.s64 = 92;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82fa7cf0
	ctx.lr = 0x829FD298;
	sub_82FA7CF0(ctx, base);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// bne cr6,0x829fd2a8
	if (!ctx.cr6.eq) goto loc_829FD2A8;
	// lis r11,16384
	ctx.r11.s64 = 1073741824;
loc_829FD2A8:
	// rlwinm r10,r30,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x40;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// li r9,0
	ctx.r9.s64 = 0;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x829fd2d0
	if (ctx.cr6.eq) goto loc_829FD2D0;
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// b 0x829fd2d8
	goto loc_829FD2D8;
loc_829FD2D0:
	// stw r7,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r7.u32);
	// stw r9,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r9.u32);
loc_829FD2D8:
	// lis r11,0
	ctx.r11.s64 = 0;
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// lis r10,1
	ctx.r10.s64 = 65536;
	// stw r9,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r9.u32);
	// li r8,6553
	ctx.r8.s64 = 6553;
	// stw r7,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r7.u32);
	// ori r11,r11,52428
	ctx.r11.u64 = ctx.r11.u64 | 52428;
	// stw r10,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r10.u32);
	// stw r8,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r8.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r8,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r8.u32);
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// stw r10,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r10.u32);
	// stw r10,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r10.u32);
	// bl 0x83178ca4
	ctx.lr = 0x829FD318;
	__imp__XGetVideoMode(ctx, base);
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lfs f13,100(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f13.f64 = double(temp.f32);
	// li r9,68
	ctx.r9.s64 = 68;
	// lfd f0,-28048(r10)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r10.u32 + -28048);
	// fmul f12,f13,f0
	ctx.f12.f64 = ctx.f13.f64 * ctx.f0.f64;
	// fctiwz f11,f12
	ctx.f11.s64 = (ctx.f12.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f12.f64));
	// stfiwx f11,r31,r9
	PPC_STORE_U32(ctx.r31.u32 + ctx.r9.u32, ctx.f11.u32);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_829FD33C"))) PPC_WEAK_FUNC(sub_829FD33C);
PPC_FUNC_IMPL(__imp__sub_829FD33C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_829FD340"))) PPC_WEAK_FUNC(sub_829FD340);
PPC_FUNC_IMPL(__imp__sub_829FD340) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31964
	ctx.r11.s64 = -2094792704;
	// lwz r11,29308(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 29308);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x829fd35c
	if (!ctx.cr6.eq) goto loc_829FD35C;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,65535
	ctx.r3.u64 = ctx.r3.u64 | 65535;
	// blr 
	return;
loc_829FD35C:
	// cmpwi cr6,r4,2
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 2, ctx.xer);
	// blt cr6,0x829fd370
	if (ctx.cr6.lt) goto loc_829FD370;
loc_829FD364:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// blr 
	return;
loc_829FD370:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x829fd364
	if (!ctx.cr6.eq) goto loc_829FD364;
	// rlwinm r11,r4,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// lis r7,-31964
	ctx.r7.s64 = -2094792704;
	// add r6,r4,r11
	ctx.r6.u64 = ctx.r4.u64 + ctx.r11.u64;
	// addi r10,r7,29312
	ctx.r10.s64 = ctx.r7.s64 + 29312;
	// rlwinm r11,r6,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 6) & 0xFFFFFFC0;
	// addi r10,r10,1652
	ctx.r10.s64 = ctx.r10.s64 + 1652;
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_829FD394:
	// mfmsr r8
	ctx.r8.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r9,0,r5
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r5.u32);
	ctx.r9.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// stwcx. r9,0,r5
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r5.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r9.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r8,1
	ctx.msr = (ctx.r8.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x829fd394
	if (!ctx.cr0.eq) goto loc_829FD394;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_829FD3B8"))) PPC_WEAK_FUNC(sub_829FD3B8);
PPC_FUNC_IMPL(__imp__sub_829FD3B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r10,24(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// li r8,0
	ctx.r8.s64 = 0;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x829fd3f0
	if (!ctx.cr6.eq) goto loc_829FD3F0;
	// lwz r11,28(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x829fd428
	if (ctx.cr6.eq) goto loc_829FD428;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x829fd43c
	if (ctx.cr6.eq) goto loc_829FD43C;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x829fd454
	if (ctx.cr6.eq) goto loc_829FD454;
loc_829FD3E8:
	// li r11,1000
	ctx.r11.s64 = 1000;
	// b 0x829fd460
	goto loc_829FD460;
loc_829FD3F0:
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// clrlwi r9,r10,31
	ctx.r9.u64 = ctx.r10.u32 & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x829fd45c
	if (ctx.cr6.eq) goto loc_829FD45C;
	// lwz r11,68(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	// li r9,125
	ctx.r9.s64 = 125;
	// lwz r10,60(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// extsw r6,r11
	ctx.r6.s64 = ctx.r11.s32;
	// rldicr r7,r9,36,27
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u64, 36) & 0xFFFFFFF000000000;
	// tdllei r6,0
	if (ctx.r6.u64 <= 0) __builtin_debugtrap();
	// divd r5,r7,r6
	ctx.r5.s64 = ctx.r7.s64 / ctx.r6.s64;
	// extsw r11,r5
	ctx.r11.s64 = ctx.r5.s32;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x829fd430
	if (!ctx.cr6.lt) goto loc_829FD430;
loc_829FD428:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x829fd460
	goto loc_829FD460;
loc_829FD430:
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x829fd444
	if (!ctx.cr6.lt) goto loc_829FD444;
loc_829FD43C:
	// li r11,2
	ctx.r11.s64 = 2;
	// b 0x829fd460
	goto loc_829FD460;
loc_829FD444:
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x829fd3e8
	if (!ctx.cr6.lt) goto loc_829FD3E8;
loc_829FD454:
	// li r11,3
	ctx.r11.s64 = 3;
	// b 0x829fd460
	goto loc_829FD460;
loc_829FD45C:
	// li r8,1
	ctx.r8.s64 = 1;
loc_829FD460:
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// subfc r9,r11,r10
	ctx.xer.ca = ctx.r10.u32 >= ctx.r11.u32;
	ctx.r9.s64 = ctx.r10.s64 - ctx.r11.s64;
	// addze r8,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r8.s64 = temp.s64;
	// subf r7,r8,r11
	ctx.r7.s64 = ctx.r11.s64 - ctx.r8.s64;
	// and r11,r7,r10
	ctx.r11.u64 = ctx.r7.u64 & ctx.r10.u64;
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// lis r10,25
	ctx.r10.s64 = 1638400;
	// ori r9,r10,28266
	ctx.r9.u64 = ctx.r10.u64 | 28266;
	// mullw r3,r11,r9
	ctx.r3.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r9.s32);
	// b 0x82a065d8
	sub_82A065D8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_829FD48C"))) PPC_WEAK_FUNC(sub_829FD48C);
PPC_FUNC_IMPL(__imp__sub_829FD48C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_829FD490"))) PPC_WEAK_FUNC(sub_829FD490);
PPC_FUNC_IMPL(__imp__sub_829FD490) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x829FD498;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31964
	ctx.r11.s64 = -2094792704;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r31,r11,29312
	ctx.r31.s64 = ctx.r11.s64 + 29312;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// addi r3,r31,144
	ctx.r3.s64 = ctx.r31.s64 + 144;
	// bl 0x83179274
	ctx.lr = 0x829FD4B4;
	__imp__KfAcquireSpinLock(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stw r11,2036(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2036, ctx.r11.u32);
	// stw r10,2040(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2040, ctx.r10.u32);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// blt cr6,0x829fd504
	if (ctx.cr6.lt) goto loc_829FD504;
	// lwz r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// addi r3,r30,28
	ctx.r3.s64 = ctx.r30.s64 + 28;
	// lwz r10,1604(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1604);
	// lwz r9,1640(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1640);
	// lwz r8,1644(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1644);
	// lwz r7,1648(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1648);
	// stw r11,1592(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1592, ctx.r11.u32);
	// stw r10,1600(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1600, ctx.r10.u32);
	// stw r9,1628(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1628, ctx.r9.u32);
	// stw r8,1632(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1632, ctx.r8.u32);
	// stw r7,1636(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1636, ctx.r7.u32);
	// bl 0x829fd3b8
	ctx.lr = 0x829FD500;
	sub_829FD3B8(ctx, base);
	// b 0x829fd50c
	goto loc_829FD50C;
loc_829FD504:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,1612(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1612, ctx.r11.u32);
loc_829FD50C:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r31,144
	ctx.r3.s64 = ctx.r31.s64 + 144;
	// bl 0x83179294
	ctx.lr = 0x829FD518;
	__imp__KfReleaseSpinLock(ctx, base);
	// lis r11,-16384
	ctx.r11.s64 = -1073741824;
	// ori r10,r11,388
	ctx.r10.u64 = ctx.r11.u64 | 388;
	// cmpw cr6,r29,r10
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x829fd54c
	if (ctx.cr6.eq) goto loc_829FD54C;
	// lis r11,-16384
	ctx.r11.s64 = -1073741824;
	// ori r10,r11,163
	ctx.r10.u64 = ctx.r11.u64 | 163;
	// cmpw cr6,r29,r10
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x829fd54c
	if (ctx.cr6.eq) goto loc_829FD54C;
	// lis r11,-16384
	ctx.r11.s64 = -1073741824;
	// ori r10,r11,157
	ctx.r10.u64 = ctx.r11.u64 | 157;
	// cmpw cr6,r29,r10
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r10.s32, ctx.xer);
	// beq cr6,0x829fd54c
	if (ctx.cr6.eq) goto loc_829FD54C;
	// bl 0x829fd558
	ctx.lr = 0x829FD54C;
	sub_829FD558(ctx, base);
loc_829FD54C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_829FD554"))) PPC_WEAK_FUNC(sub_829FD554);
PPC_FUNC_IMPL(__imp__sub_829FD554) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_829FD558"))) PPC_WEAK_FUNC(sub_829FD558);
PPC_FUNC_IMPL(__imp__sub_829FD558) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x829FD560;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31964
	ctx.r11.s64 = -2094792704;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r31,r11,29312
	ctx.r31.s64 = ctx.r11.s64 + 29312;
	// addi r3,r31,144
	ctx.r3.s64 = ctx.r31.s64 + 144;
	// bl 0x83179274
	ctx.lr = 0x829FD578;
	__imp__KfAcquireSpinLock(ctx, base);
	// lwz r11,2036(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2036);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x829fd618
	if (!ctx.cr6.eq) goto loc_829FD618;
	// lwz r11,1612(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1612);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x829fd618
	if (ctx.cr6.eq) goto loc_829FD618;
	// lwz r11,1608(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1608);
	// addi r8,r31,1664
	ctx.r8.s64 = ctx.r31.s64 + 1664;
	// lis r9,-32096
	ctx.r9.s64 = -2103443456;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r9,r9,-11120
	ctx.r9.s64 = ctx.r9.s64 + -11120;
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,1604(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1604, ctx.r11.u32);
	// li r10,35
	ctx.r10.s64 = 35;
	// rlwinm r11,r7,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 6) & 0xFFFFFFC0;
	// addi r3,r31,2072
	ctx.r3.s64 = ctx.r31.s64 + 2072;
	// add r6,r11,r8
	ctx.r6.u64 = ctx.r11.u64 + ctx.r8.u64;
	// addi r8,r31,1656
	ctx.r8.s64 = ctx.r31.s64 + 1656;
	// li r5,92
	ctx.r5.s64 = 92;
	// add r4,r11,r8
	ctx.r4.u64 = ctx.r11.u64 + ctx.r8.u64;
	// lwz r11,0(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// stw r11,1640(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1640, ctx.r11.u32);
	// lwz r8,4(r6)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// stw r8,1644(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1644, ctx.r8.u32);
	// lwz r7,8(r6)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r6.u32 + 8);
	// stw r7,1648(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1648, ctx.r7.u32);
	// stw r10,2044(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2044, ctx.r10.u32);
	// stw r9,2064(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2064, ctx.r9.u32);
	// bl 0x82fa77c0
	ctx.lr = 0x829FD5F0;
	sub_82FA77C0(ctx, base);
	// li r11,-1
	ctx.r11.s64 = -1;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,1592(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1592, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r10,2036(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2036, ctx.r10.u32);
	// li r30,1
	ctx.r30.s64 = 1;
	// stw r9,1612(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1612, ctx.r9.u32);
	// lwz r11,2084(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2084);
	// neg r11,r11
	ctx.r11.s64 = -ctx.r11.s64;
	// stw r11,2084(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2084, ctx.r11.u32);
loc_829FD618:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r31,144
	ctx.r3.s64 = ctx.r31.s64 + 144;
	// bl 0x83179294
	ctx.lr = 0x829FD624;
	__imp__KfReleaseSpinLock(ctx, base);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x829fd660
	if (ctx.cr6.eq) goto loc_829FD660;
	// addi r3,r31,2044
	ctx.r3.s64 = ctx.r31.s64 + 2044;
	// bl 0x82a02210
	ctx.lr = 0x829FD634;
	sub_82A02210(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x829fd660
	if (!ctx.cr6.lt) goto loc_829FD660;
	// addi r3,r31,144
	ctx.r3.s64 = ctx.r31.s64 + 144;
	// bl 0x83179274
	ctx.lr = 0x829FD644;
	__imp__KfAcquireSpinLock(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,1612(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1612, ctx.r11.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r10,2036(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2036, ctx.r10.u32);
	// addi r3,r31,144
	ctx.r3.s64 = ctx.r31.s64 + 144;
	// bl 0x83179294
	ctx.lr = 0x829FD660;
	__imp__KfReleaseSpinLock(ctx, base);
loc_829FD660:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_829FD668"))) PPC_WEAK_FUNC(sub_829FD668);
PPC_FUNC_IMPL(__imp__sub_829FD668) {
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
	// addi r31,r11,29312
	ctx.r31.s64 = ctx.r11.s64 + 29312;
	// addi r3,r31,144
	ctx.r3.s64 = ctx.r31.s64 + 144;
	// bl 0x83179274
	ctx.lr = 0x829FD688;
	__imp__KfAcquireSpinLock(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r11,1612(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1612, ctx.r11.u32);
	// addi r3,r31,144
	ctx.r3.s64 = ctx.r31.s64 + 144;
	// bl 0x83179294
	ctx.lr = 0x829FD69C;
	__imp__KfReleaseSpinLock(ctx, base);
	// bl 0x829fd558
	ctx.lr = 0x829FD6A0;
	sub_829FD558(ctx, base);
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

__attribute__((alias("__imp__sub_829FD6B4"))) PPC_WEAK_FUNC(sub_829FD6B4);
PPC_FUNC_IMPL(__imp__sub_829FD6B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_829FD6B8"))) PPC_WEAK_FUNC(sub_829FD6B8);
PPC_FUNC_IMPL(__imp__sub_829FD6B8) {
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
	// li r11,36
	ctx.r11.s64 = 36;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82a02220
	ctx.lr = 0x829FD6E4;
	sub_82A02220(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x829fd768
	if (ctx.cr6.lt) goto loc_829FD768;
	// rlwinm r11,r31,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r4,108(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// lis r10,-31964
	ctx.r10.s64 = -2094792704;
	// lwz r8,156(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// add r9,r31,r11
	ctx.r9.u64 = ctx.r31.u64 + ctx.r11.u64;
	// lwz r7,160(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// addi r11,r10,29312
	ctx.r11.s64 = ctx.r10.s64 + 29312;
	// lwz r6,164(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 164);
	// rlwinm r9,r9,6,0,25
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 6) & 0xFFFFFFC0;
	// lwz r5,168(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 168);
	// addi r10,r11,1656
	ctx.r10.s64 = ctx.r11.s64 + 1656;
	// addi r11,r11,1748
	ctx.r11.s64 = ctx.r11.s64 + 1748;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// clrlwi r4,r4,28
	ctx.r4.u64 = ctx.r4.u32 & 0xF;
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r9,r9,0,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFF0;
	// or r9,r9,r4
	ctx.r9.u64 = ctx.r9.u64 | ctx.r4.u64;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// stw r8,48(r10)
	PPC_STORE_U32(ctx.r10.u32 + 48, ctx.r8.u32);
	// stw r7,52(r10)
	PPC_STORE_U32(ctx.r10.u32 + 52, ctx.r7.u32);
	// stw r6,56(r10)
	PPC_STORE_U32(ctx.r10.u32 + 56, ctx.r6.u32);
	// stw r5,60(r10)
	PPC_STORE_U32(ctx.r10.u32 + 60, ctx.r5.u32);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r9,r10,0,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFF0;
	// or r4,r9,r4
	ctx.r4.u64 = ctx.r9.u64 | ctx.r4.u64;
	// stw r4,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r4.u32);
	// stw r8,48(r11)
	PPC_STORE_U32(ctx.r11.u32 + 48, ctx.r8.u32);
	// stw r7,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r7.u32);
	// stw r6,56(r11)
	PPC_STORE_U32(ctx.r11.u32 + 56, ctx.r6.u32);
	// stw r5,60(r11)
	PPC_STORE_U32(ctx.r11.u32 + 60, ctx.r5.u32);
loc_829FD768:
	// bl 0x831795c4
	ctx.lr = 0x829FD76C;
	__imp__RtlNtStatusToDosError(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x829fd77c
	if (!ctx.cr6.gt) goto loc_829FD77C;
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// oris r3,r11,32775
	ctx.r3.u64 = ctx.r11.u64 | 2147942400;
loc_829FD77C:
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

__attribute__((alias("__imp__sub_829FD790"))) PPC_WEAK_FUNC(sub_829FD790);
PPC_FUNC_IMPL(__imp__sub_829FD790) {
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
	// li r11,36
	ctx.r11.s64 = 36;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82a02220
	ctx.lr = 0x829FD7BC;
	sub_82A02220(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x829fd7cc
	if (ctx.cr6.lt) goto loc_829FD7CC;
	// lwz r11,172(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 172);
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
loc_829FD7CC:
	// bl 0x831795c4
	ctx.lr = 0x829FD7D0;
	__imp__RtlNtStatusToDosError(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x829fd7e0
	if (!ctx.cr6.gt) goto loc_829FD7E0;
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// oris r3,r11,32775
	ctx.r3.u64 = ctx.r11.u64 | 2147942400;
loc_829FD7E0:
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

__attribute__((alias("__imp__sub_829FD7F4"))) PPC_WEAK_FUNC(sub_829FD7F4);
PPC_FUNC_IMPL(__imp__sub_829FD7F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_829FD7F8"))) PPC_WEAK_FUNC(sub_829FD7F8);
PPC_FUNC_IMPL(__imp__sub_829FD7F8) {
	PPC_FUNC_PROLOGUE();
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x829fd810
	if (!ctx.cr6.eq) goto loc_829FD810;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// blr 
	return;
loc_829FD810:
	// lis r11,-31964
	ctx.r11.s64 = -2094792704;
	// lwz r11,29308(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 29308);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x829fd82c
	if (!ctx.cr6.eq) goto loc_829FD82C;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,65535
	ctx.r3.u64 = ctx.r3.u64 | 65535;
	// blr 
	return;
loc_829FD82C:
	// lis r11,-31964
	ctx.r11.s64 = -2094792704;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r11,r11,29312
	ctx.r11.s64 = ctx.r11.s64 + 29312;
	// lwz r10,1756(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1756);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// bne cr6,0x829fd85c
	if (!ctx.cr6.eq) goto loc_829FD85C;
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// lwz r10,1760(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1760);
	// stw r10,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r10.u32);
	// lwz r11,1764(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1764);
	// stw r11,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r11.u32);
	// blr 
	return;
loc_829FD85C:
	// stw r3,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r3.u32);
	// lwz r10,1760(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1760);
	// stw r10,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r10.u32);
	// lwz r11,1764(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 1764);
	// stw r11,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_829FD874"))) PPC_WEAK_FUNC(sub_829FD874);
PPC_FUNC_IMPL(__imp__sub_829FD874) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_829FD878"))) PPC_WEAK_FUNC(sub_829FD878);
PPC_FUNC_IMPL(__imp__sub_829FD878) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// stfd f31,-16(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.f31.u64);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// extsw r11,r3
	ctx.r11.s64 = ctx.r3.s32;
	// lis r10,-32232
	ctx.r10.s64 = -2112356352;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// lfs f0,-6880(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -6880);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f1,f12,f0
	ctx.f1.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// bl 0x82fa3ed0
	ctx.lr = 0x829FD8AC;
	sub_82FA3ED0(ctx, base);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// frsp f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = double(float(ctx.f1.f64));
	// lfd f1,11528(r9)
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r9.u32 + 11528);
	// bl 0x82fa3ed0
	ctx.lr = 0x829FD8BC;
	sub_82FA3ED0(ctx, base);
	// frsp f11,f1
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(float(ctx.f1.f64));
	// fdivs f1,f31,f11
	ctx.f1.f64 = double(float(ctx.f31.f64 / ctx.f11.f64));
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// lfd f31,-16(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_829FD8D8"))) PPC_WEAK_FUNC(sub_829FD8D8);
PPC_FUNC_IMPL(__imp__sub_829FD8D8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x829FD8E0;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// cmpwi cr6,r4,2
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 2, ctx.xer);
	// blt cr6,0x829fd908
	if (ctx.cr6.lt) goto loc_829FD908;
loc_829FD8F8:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
loc_829FD908:
	// lis r11,-31964
	ctx.r11.s64 = -2094792704;
	// lwz r11,29308(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 29308);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x829fd928
	if (!ctx.cr6.eq) goto loc_829FD928;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,65535
	ctx.r3.u64 = ctx.r3.u64 | 65535;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
loc_829FD928:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x829fd8f8
	if (ctx.cr6.eq) goto loc_829FD8F8;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// stw r29,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r29.u32);
	// bne cr6,0x829fdbcc
	if (!ctx.cr6.eq) goto loc_829FDBCC;
	// cmplwi cr6,r5,6
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 6, ctx.xer);
	// bgt cr6,0x829fdbcc
	if (ctx.cr6.gt) goto loc_829FDBCC;
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x829fda10
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_829FDA10;
	// bdzf 4*cr6+eq,0x829fd9c4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_829FD9C4;
	// bdzf 4*cr6+eq,0x829fdb08
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_829FDB08;
	// bdzf 4*cr6+eq,0x829fda58
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_829FDA58;
	// bdzf 4*cr6+eq,0x829fdb1c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_829FDB1C;
	// bne cr6,0x829fdb6c
	if (!ctx.cr6.eq) goto loc_829FDB6C;
	// rlwinm r10,r31,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// lis r11,-31964
	ctx.r11.s64 = -2094792704;
	// add r10,r31,r10
	ctx.r10.u64 = ctx.r31.u64 + ctx.r10.u64;
	// addi r11,r11,29312
	ctx.r11.s64 = ctx.r11.s64 + 29312;
	// rlwinm r10,r10,6,0,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 6) & 0xFFFFFFC0;
	// addi r9,r11,1840
	ctx.r9.s64 = ctx.r11.s64 + 1840;
	// lwzx r8,r10,r9
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// cmpwi cr6,r8,1
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 1, ctx.xer);
	// bne cr6,0x829fd99c
	if (!ctx.cr6.eq) goto loc_829FD99C;
loc_829FD988:
	// li r11,2
	ctx.r11.s64 = 2;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
loc_829FD99C:
	// addi r11,r11,1772
	ctx.r11.s64 = ctx.r11.s64 + 1772;
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x829fdbbc
	if (ctx.cr6.lt) goto loc_829FDBBC;
	// beq cr6,0x829fd9fc
	if (ctx.cr6.eq) goto loc_829FD9FC;
loc_829FD9B0:
	// lis r29,-32768
	ctx.r29.s64 = -2147483648;
	// ori r29,r29,65535
	ctx.r29.u64 = ctx.r29.u64 | 65535;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
loc_829FD9C4:
	// rlwinm r11,r31,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// lis r10,-31964
	ctx.r10.s64 = -2094792704;
	// add r9,r31,r11
	ctx.r9.u64 = ctx.r31.u64 + ctx.r11.u64;
	// addi r11,r10,29312
	ctx.r11.s64 = ctx.r10.s64 + 29312;
	// rlwinm r8,r9,6,0,25
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 6) & 0xFFFFFFC0;
	// addi r7,r11,1776
	ctx.r7.s64 = ctx.r11.s64 + 1776;
	// lwzx r11,r8,r7
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r7.u32);
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bgt cr6,0x829fd9b0
	if (ctx.cr6.gt) goto loc_829FD9B0;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x829fdbbc
	if (ctx.cr6.eq) goto loc_829FDBBC;
	// bdz 0x829fdaa4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_829FDAA4;
	// bdnz 0x829fd988
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_829FD988;
loc_829FD9FC:
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
loc_829FDA10:
	// rlwinm r11,r31,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// lis r10,-31964
	ctx.r10.s64 = -2094792704;
	// add r9,r31,r11
	ctx.r9.u64 = ctx.r31.u64 + ctx.r11.u64;
	// addi r11,r10,29312
	ctx.r11.s64 = ctx.r10.s64 + 29312;
	// rlwinm r8,r9,6,0,25
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 6) & 0xFFFFFFC0;
	// addi r7,r11,1752
	ctx.r7.s64 = ctx.r11.s64 + 1752;
	// lwzx r11,r8,r7
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r7.u32);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x829fdbbc
	if (ctx.cr6.eq) goto loc_829FDBBC;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// beq cr6,0x829fd9fc
	if (ctx.cr6.eq) goto loc_829FD9FC;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x829fd988
	if (ctx.cr6.eq) goto loc_829FD988;
	// lis r29,-32768
	ctx.r29.s64 = -2147483648;
	// ori r29,r29,65535
	ctx.r29.u64 = ctx.r29.u64 | 65535;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
loc_829FDA58:
	// rlwinm r11,r31,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// lis r10,-31964
	ctx.r10.s64 = -2094792704;
	// add r9,r31,r11
	ctx.r9.u64 = ctx.r31.u64 + ctx.r11.u64;
	// addi r11,r10,29312
	ctx.r11.s64 = ctx.r10.s64 + 29312;
	// rlwinm r8,r9,6,0,25
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 6) & 0xFFFFFFC0;
	// addi r7,r11,1820
	ctx.r7.s64 = ctx.r11.s64 + 1820;
	// lwzx r11,r8,r7
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r7.u32);
	// cmplwi cr6,r11,7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 7, ctx.xer);
	// bgt cr6,0x829fdbd4
	if (ctx.cr6.gt) goto loc_829FDBD4;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x829fdbbc
	if (ctx.cr6.eq) goto loc_829FDBBC;
	// bdz 0x829fd9fc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_829FD9FC;
	// bdz 0x829fd988
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_829FD988;
	// bdz 0x829fdaa4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_829FDAA4;
	// bdz 0x829fdab8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_829FDAB8;
	// bdz 0x829fdacc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_829FDACC;
	// bdz 0x829fdaf4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_829FDAF4;
	// b 0x829fdae0
	goto loc_829FDAE0;
loc_829FDAA4:
	// li r11,3
	ctx.r11.s64 = 3;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
loc_829FDAB8:
	// li r11,4
	ctx.r11.s64 = 4;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
loc_829FDACC:
	// li r11,5
	ctx.r11.s64 = 5;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
loc_829FDAE0:
	// li r11,100
	ctx.r11.s64 = 100;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
loc_829FDAF4:
	// li r11,101
	ctx.r11.s64 = 101;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
loc_829FDB08:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x829fd790
	ctx.lr = 0x829FDB10;
	sub_829FD790(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
loc_829FDB1C:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a09140
	ctx.lr = 0x829FDB28;
	sub_82A09140(ctx, base);
	// rlwinm r11,r31,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// lis r10,-31964
	ctx.r10.s64 = -2094792704;
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// add r9,r31,r11
	ctx.r9.u64 = ctx.r31.u64 + ctx.r11.u64;
	// addi r11,r10,29312
	ctx.r11.s64 = ctx.r10.s64 + 29312;
	// rlwinm r8,r9,6,0,25
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 6) & 0xFFFFFFC0;
	// addi r7,r11,1840
	ctx.r7.s64 = ctx.r11.s64 + 1840;
	// stw r6,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r6.u32);
	// lwzx r5,r8,r7
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r7.u32);
	// cmpwi cr6,r5,1
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 1, ctx.xer);
	// beq cr6,0x829fdbd4
	if (ctx.cr6.eq) goto loc_829FDBD4;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r11,-28040
	ctx.r3.s64 = ctx.r11.s64 + -28040;
	// bl 0x83179504
	ctx.lr = 0x829FDB60;
	__imp__DbgPrint(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
loc_829FDB6C:
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a08e48
	ctx.lr = 0x829FDB78;
	sub_82A08E48(ctx, base);
	// rlwinm r11,r31,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// lis r10,-31964
	ctx.r10.s64 = -2094792704;
	// add r9,r31,r11
	ctx.r9.u64 = ctx.r31.u64 + ctx.r11.u64;
	// addi r11,r10,29312
	ctx.r11.s64 = ctx.r10.s64 + 29312;
	// rlwinm r8,r9,6,0,25
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 6) & 0xFFFFFFC0;
	// addi r7,r11,1840
	ctx.r7.s64 = ctx.r11.s64 + 1840;
	// lwzx r6,r8,r7
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r7.u32);
	// cmpwi cr6,r6,1
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 1, ctx.xer);
	// bne cr6,0x829fdbb0
	if (!ctx.cr6.eq) goto loc_829FDBB0;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
loc_829FDBB0:
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r11,-28040
	ctx.r3.s64 = ctx.r11.s64 + -28040;
	// bl 0x83179504
	ctx.lr = 0x829FDBBC;
	__imp__DbgPrint(ctx, base);
loc_829FDBBC:
	// stw r29,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r29.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
loc_829FDBCC:
	// lis r29,-32761
	ctx.r29.s64 = -2147024896;
	// ori r29,r29,87
	ctx.r29.u64 = ctx.r29.u64 | 87;
loc_829FDBD4:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_829FDBE0"))) PPC_WEAK_FUNC(sub_829FDBE0);
PPC_FUNC_IMPL(__imp__sub_829FDBE0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x829FDBE8;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// cmpwi cr6,r4,2
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 2, ctx.xer);
	// bge cr6,0x829fde44
	if (!ctx.cr6.lt) goto loc_829FDE44;
	// lis r11,-31964
	ctx.r11.s64 = -2094792704;
	// lwz r11,29308(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 29308);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x829fdc20
	if (!ctx.cr6.eq) goto loc_829FDC20;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,65535
	ctx.r3.u64 = ctx.r3.u64 | 65535;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
loc_829FDC20:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x829fde44
	if (ctx.cr6.eq) goto loc_829FDE44;
	// lis r11,-31964
	ctx.r11.s64 = -2094792704;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r31,r11,29312
	ctx.r31.s64 = ctx.r11.s64 + 29312;
	// lfs f0,5184(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 5184);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r29)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r29.u32 + 0, temp.u32);
	// lwz r11,132(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x829fdc60
	if (ctx.cr6.eq) goto loc_829FDC60;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x829fdc60
	if (!ctx.cr6.eq) goto loc_829FDC60;
	// lis r3,-31999
	ctx.r3.s64 = -2097086464;
	// ori r3,r3,11
	ctx.r3.u64 = ctx.r3.u64 | 11;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
loc_829FDC60:
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// bge cr6,0x829fde44
	if (!ctx.cr6.lt) goto loc_829FDE44;
	// cmplwi cr6,r5,9
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 9, ctx.xer);
	// bgt cr6,0x829fde44
	if (ctx.cr6.gt) goto loc_829FDE44;
	// lis r12,-32096
	ctx.r12.s64 = -2103443456;
	// rlwinm r0,r5,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-9080
	ctx.r12.s64 = ctx.r12.s64 + -9080;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r5.u64) {
	case 0:
		goto loc_829FDCB0;
	case 1:
		goto loc_829FDE44;
	case 2:
		goto loc_829FDE44;
	case 3:
		goto loc_829FDE44;
	case 4:
		goto loc_829FDE44;
	case 5:
		goto loc_829FDD14;
	case 6:
		goto loc_829FDD58;
	case 7:
		goto loc_829FDDA0;
	case 8:
		goto loc_829FDDE8;
	case 9:
		goto loc_829FDE30;
	default:
		__builtin_unreachable();
	}
	// lwz r20,-9040(r31)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r31.u32 + -9040);
	// lwz r20,-8636(r31)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8636);
	// lwz r20,-8636(r31)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8636);
	// lwz r20,-8636(r31)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8636);
	// lwz r20,-8636(r31)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8636);
	// lwz r20,-8940(r31)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8940);
	// lwz r20,-8872(r31)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8872);
	// lwz r20,-8800(r31)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8800);
	// lwz r20,-8728(r31)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8728);
	// lwz r20,-8656(r31)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8656);
loc_829FDCB0:
	// rlwinm r11,r3,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r10,r31,1748
	ctx.r10.s64 = ctx.r31.s64 + 1748;
	// add r9,r3,r11
	ctx.r9.u64 = ctx.r3.u64 + ctx.r11.u64;
	// rlwinm r30,r9,6,0,25
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 6) & 0xFFFFFFC0;
	// lwzx r8,r30,r10
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r10.u32);
	// clrlwi r7,r8,31
	ctx.r7.u64 = ctx.r8.u32 & 0x1;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x829fdcdc
	if (!ctx.cr6.eq) goto loc_829FDCDC;
	// bl 0x829fd6b8
	ctx.lr = 0x829FDCD4;
	sub_829FD6B8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x829fde4c
	if (ctx.cr6.lt) goto loc_829FDE4C;
loc_829FDCDC:
	// addi r11,r31,1808
	ctx.r11.s64 = ctx.r31.s64 + 1808;
	// lis r10,-32232
	ctx.r10.s64 = -2112356352;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwzx r9,r30,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// lfs f0,-6880(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -6880);
	ctx.f0.f64 = double(temp.f32);
	// extsw r8,r9
	ctx.r8.s64 = ctx.r9.s32;
	// std r8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fmuls f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfs f10,0(r29)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r29.u32 + 0, temp.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
loc_829FDD14:
	// rlwinm r11,r3,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r10,r31,1768
	ctx.r10.s64 = ctx.r31.s64 + 1768;
	// add r9,r3,r11
	ctx.r9.u64 = ctx.r3.u64 + ctx.r11.u64;
	// lis r8,-32232
	ctx.r8.s64 = -2112356352;
	// rlwinm r7,r9,6,0,25
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 6) & 0xFFFFFFC0;
	// li r3,0
	ctx.r3.s64 = 0;
	// lfs f0,-6880(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -6880);
	ctx.f0.f64 = double(temp.f32);
	// lwzx r6,r7,r10
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r10.u32);
	// extsw r5,r6
	ctx.r5.s64 = ctx.r6.s32;
	// std r5,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r5.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// frsp f11,f12
	ctx.f11.f64 = double(float(ctx.f12.f64));
	// fmuls f10,f11,f0
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f0.f64));
	// stfs f10,0(r29)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r29.u32 + 0, temp.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
loc_829FDD58:
	// rlwinm r11,r3,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r10,r31,1748
	ctx.r10.s64 = ctx.r31.s64 + 1748;
	// add r9,r3,r11
	ctx.r9.u64 = ctx.r3.u64 + ctx.r11.u64;
	// rlwinm r30,r9,6,0,25
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 6) & 0xFFFFFFC0;
	// lwzx r8,r30,r10
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r10.u32);
	// rlwinm r7,r8,0,30,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x829fdd84
	if (!ctx.cr6.eq) goto loc_829FDD84;
	// bl 0x829fd6b8
	ctx.lr = 0x829FDD7C;
	sub_829FD6B8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x829fde4c
	if (ctx.cr6.lt) goto loc_829FDE4C;
loc_829FDD84:
	// addi r11,r31,1796
	ctx.r11.s64 = ctx.r31.s64 + 1796;
	// lwzx r3,r30,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// bl 0x829fd878
	ctx.lr = 0x829FDD90;
	sub_829FD878(ctx, base);
	// stfs f1,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r29.u32 + 0, temp.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
loc_829FDDA0:
	// rlwinm r11,r3,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r10,r31,1748
	ctx.r10.s64 = ctx.r31.s64 + 1748;
	// add r9,r3,r11
	ctx.r9.u64 = ctx.r3.u64 + ctx.r11.u64;
	// rlwinm r30,r9,6,0,25
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 6) & 0xFFFFFFC0;
	// lwzx r8,r30,r10
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r10.u32);
	// rlwinm r7,r8,0,29,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x829fddcc
	if (!ctx.cr6.eq) goto loc_829FDDCC;
	// bl 0x829fd6b8
	ctx.lr = 0x829FDDC4;
	sub_829FD6B8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x829fde4c
	if (ctx.cr6.lt) goto loc_829FDE4C;
loc_829FDDCC:
	// addi r11,r31,1800
	ctx.r11.s64 = ctx.r31.s64 + 1800;
	// lwzx r3,r30,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// bl 0x829fd878
	ctx.lr = 0x829FDDD8;
	sub_829FD878(ctx, base);
	// stfs f1,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r29.u32 + 0, temp.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
loc_829FDDE8:
	// rlwinm r11,r3,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r10,r31,1748
	ctx.r10.s64 = ctx.r31.s64 + 1748;
	// add r9,r3,r11
	ctx.r9.u64 = ctx.r3.u64 + ctx.r11.u64;
	// rlwinm r30,r9,6,0,25
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 6) & 0xFFFFFFC0;
	// lwzx r8,r30,r10
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r10.u32);
	// rlwinm r7,r8,0,28,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x8;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x829fde14
	if (!ctx.cr6.eq) goto loc_829FDE14;
	// bl 0x829fd6b8
	ctx.lr = 0x829FDE0C;
	sub_829FD6B8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x829fde4c
	if (ctx.cr6.lt) goto loc_829FDE4C;
loc_829FDE14:
	// addi r11,r31,1804
	ctx.r11.s64 = ctx.r31.s64 + 1804;
	// lwzx r3,r30,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// bl 0x829fd878
	ctx.lr = 0x829FDE20;
	sub_829FD878(ctx, base);
	// stfs f1,0(r29)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r29.u32 + 0, temp.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
loc_829FDE30:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82a091a8
	ctx.lr = 0x829FDE38;
	sub_82A091A8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
loc_829FDE44:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
loc_829FDE4C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_829FDE54"))) PPC_WEAK_FUNC(sub_829FDE54);
PPC_FUNC_IMPL(__imp__sub_829FDE54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_829FDE58"))) PPC_WEAK_FUNC(sub_829FDE58);
PPC_FUNC_IMPL(__imp__sub_829FDE58) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x829FDE60;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31964
	ctx.r11.s64 = -2094792704;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// lwz r11,29308(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 29308);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x829fde88
	if (!ctx.cr6.eq) goto loc_829FDE88;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,65535
	ctx.r3.u64 = ctx.r3.u64 | 65535;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
loc_829FDE88:
	// cmpwi cr6,r30,2
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 2, ctx.xer);
	// blt cr6,0x829fdea0
	if (ctx.cr6.lt) goto loc_829FDEA0;
loc_829FDE90:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
loc_829FDEA0:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x829fde90
	if (!ctx.cr6.eq) goto loc_829FDE90;
	// lis r11,-31964
	ctx.r11.s64 = -2094792704;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r31,r11,29312
	ctx.r31.s64 = ctx.r11.s64 + 29312;
	// addi r3,r31,144
	ctx.r3.s64 = ctx.r31.s64 + 144;
	// bl 0x83179274
	ctx.lr = 0x829FDEBC;
	__imp__KfAcquireSpinLock(ctx, base);
	// rlwinm r11,r30,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r9,r31,1652
	ctx.r9.s64 = ctx.r31.s64 + 1652;
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// rlwinm r11,r11,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0xFFFFFFC0;
	// lwzx r10,r11,r9
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stwx r10,r11,r9
	PPC_STORE_U32(ctx.r11.u32 + ctx.r9.u32, ctx.r10.u32);
	// bne 0x829fdf10
	if (!ctx.cr0.eq) goto loc_829FDF10;
	// addi r9,r31,1748
	ctx.r9.s64 = ctx.r31.s64 + 1748;
	// addi r10,r31,1656
	ctx.r10.s64 = ctx.r31.s64 + 1656;
	// add r4,r11,r9
	ctx.r4.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// li r5,92
	ctx.r5.s64 = 92;
	// bl 0x82fa77c0
	ctx.lr = 0x829FDEF8;
	sub_82FA77C0(ctx, base);
	// lwz r11,1608(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1608);
	// cmpw cr6,r11,r30
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r30.s32, ctx.xer);
	// bne cr6,0x829fdf10
	if (!ctx.cr6.eq) goto loc_829FDF10;
	// li r11,1
	ctx.r11.s64 = 1;
	// li r29,1
	ctx.r29.s64 = 1;
	// stw r11,1612(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1612, ctx.r11.u32);
loc_829FDF10:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r31,144
	ctx.r3.s64 = ctx.r31.s64 + 144;
	// bl 0x83179294
	ctx.lr = 0x829FDF1C;
	__imp__KfReleaseSpinLock(ctx, base);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq cr6,0x829fdf28
	if (ctx.cr6.eq) goto loc_829FDF28;
	// bl 0x829fd558
	ctx.lr = 0x829FDF28;
	sub_829FD558(ctx, base);
loc_829FDF28:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_829FDF34"))) PPC_WEAK_FUNC(sub_829FDF34);
PPC_FUNC_IMPL(__imp__sub_829FDF34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_829FDF38"))) PPC_WEAK_FUNC(sub_829FDF38);
PPC_FUNC_IMPL(__imp__sub_829FDF38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x829FDF40;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31964
	ctx.r11.s64 = -2094792704;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r31,r11,29312
	ctx.r31.s64 = ctx.r11.s64 + 29312;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r3,r31,144
	ctx.r3.s64 = ctx.r31.s64 + 144;
	// bl 0x83179274
	ctx.lr = 0x829FDF5C;
	__imp__KfAcquireSpinLock(ctx, base);
	// rlwinm r11,r30,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r10,r31,1652
	ctx.r10.s64 = ctx.r31.s64 + 1652;
	// add r9,r30,r11
	ctx.r9.u64 = ctx.r30.u64 + ctx.r11.u64;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// rlwinm r11,r9,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 6) & 0xFFFFFFC0;
	// lwzx r8,r11,r10
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x829fdfac
	if (!ctx.cr6.eq) goto loc_829FDFAC;
	// addi r9,r31,1748
	ctx.r9.s64 = ctx.r31.s64 + 1748;
	// addi r10,r31,1656
	ctx.r10.s64 = ctx.r31.s64 + 1656;
	// add r4,r11,r9
	ctx.r4.u64 = ctx.r11.u64 + ctx.r9.u64;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// li r5,92
	ctx.r5.s64 = 92;
	// bl 0x82fa77c0
	ctx.lr = 0x829FDF94;
	sub_82FA77C0(ctx, base);
	// lwz r11,1608(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1608);
	// cmpw cr6,r11,r30
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r30.s32, ctx.xer);
	// bne cr6,0x829fdfac
	if (!ctx.cr6.eq) goto loc_829FDFAC;
	// li r11,1
	ctx.r11.s64 = 1;
	// li r29,1
	ctx.r29.s64 = 1;
	// stw r11,1612(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1612, ctx.r11.u32);
loc_829FDFAC:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r31,144
	ctx.r3.s64 = ctx.r31.s64 + 144;
	// bl 0x83179294
	ctx.lr = 0x829FDFB8;
	__imp__KfReleaseSpinLock(ctx, base);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq cr6,0x829fdfc4
	if (ctx.cr6.eq) goto loc_829FDFC4;
	// bl 0x829fd558
	ctx.lr = 0x829FDFC4;
	sub_829FD558(ctx, base);
loc_829FDFC4:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_829FDFCC"))) PPC_WEAK_FUNC(sub_829FDFCC);
PPC_FUNC_IMPL(__imp__sub_829FDFCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_829FDFD0"))) PPC_WEAK_FUNC(sub_829FDFD0);
PPC_FUNC_IMPL(__imp__sub_829FDFD0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x829FDFD8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// cmpwi cr6,r3,1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 1, ctx.xer);
	// bne cr6,0x829fdff8
	if (!ctx.cr6.eq) goto loc_829FDFF8;
loc_829FDFE8:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
loc_829FDFF8:
	// cmpwi cr6,r29,2
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 2, ctx.xer);
	// bge cr6,0x829fdfe8
	if (!ctx.cr6.lt) goto loc_829FDFE8;
	// lis r11,-31964
	ctx.r11.s64 = -2094792704;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r31,r11,29312
	ctx.r31.s64 = ctx.r11.s64 + 29312;
	// addi r3,r31,144
	ctx.r3.s64 = ctx.r31.s64 + 144;
	// bl 0x83179274
	ctx.lr = 0x829FE014;
	__imp__KfAcquireSpinLock(ctx, base);
	// lwz r11,1608(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1608);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpw cr6,r11,r29
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r29.s32, ctx.xer);
	// beq cr6,0x829fe034
	if (ctx.cr6.eq) goto loc_829FE034;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r29,1608(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1608, ctx.r29.u32);
	// li r30,1
	ctx.r30.s64 = 1;
	// stw r11,1612(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1612, ctx.r11.u32);
loc_829FE034:
	// addi r3,r31,144
	ctx.r3.s64 = ctx.r31.s64 + 144;
	// bl 0x83179294
	ctx.lr = 0x829FE03C;
	__imp__KfReleaseSpinLock(ctx, base);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x829fe048
	if (ctx.cr6.eq) goto loc_829FE048;
	// bl 0x829fd558
	ctx.lr = 0x829FE048;
	sub_829FD558(ctx, base);
loc_829FE048:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_829FE054"))) PPC_WEAK_FUNC(sub_829FE054);
PPC_FUNC_IMPL(__imp__sub_829FE054) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_829FE058"))) PPC_WEAK_FUNC(sub_829FE058);
PPC_FUNC_IMPL(__imp__sub_829FE058) {
	PPC_FUNC_PROLOGUE();
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x829fd8d8
	sub_829FD8D8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_829FE068"))) PPC_WEAK_FUNC(sub_829FE068);
PPC_FUNC_IMPL(__imp__sub_829FE068) {
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
	// lis r11,-31964
	ctx.r11.s64 = -2094792704;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// lwz r11,29308(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 29308);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x829fe09c
	if (!ctx.cr6.eq) goto loc_829FE09C;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,65535
	ctx.r3.u64 = ctx.r3.u64 | 65535;
	// b 0x829fe258
	goto loc_829FE258;
loc_829FE09C:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x829fe250
	if (ctx.cr6.eq) goto loc_829FE250;
	// lis r11,-31964
	ctx.r11.s64 = -2094792704;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r31,r11,29312
	ctx.r31.s64 = ctx.r11.s64 + 29312;
	// lfs f0,5184(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5184);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r30)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// lwz r11,132(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x829fe0d0
	if (ctx.cr6.eq) goto loc_829FE0D0;
	// lis r3,-31999
	ctx.r3.s64 = -2097086464;
	// ori r3,r3,11
	ctx.r3.u64 = ctx.r3.u64 | 11;
	// b 0x829fe258
	goto loc_829FE258;
loc_829FE0D0:
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// bge cr6,0x829fe250
	if (!ctx.cr6.lt) goto loc_829FE250;
	// cmplwi cr6,r4,9
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 9, ctx.xer);
	// bgt cr6,0x829fe250
	if (ctx.cr6.gt) goto loc_829FE250;
	// lis r12,-32096
	ctx.r12.s64 = -2103443456;
	// rlwinm r0,r4,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-7944
	ctx.r12.s64 = ctx.r12.s64 + -7944;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r4.u64) {
	case 0:
		goto loc_829FE120;
	case 1:
		goto loc_829FE250;
	case 2:
		goto loc_829FE250;
	case 3:
		goto loc_829FE250;
	case 4:
		goto loc_829FE250;
	case 5:
		goto loc_829FE170;
	case 6:
		goto loc_829FE1A0;
	case 7:
		goto loc_829FE1D4;
	case 8:
		goto loc_829FE208;
	case 9:
		goto loc_829FE23C;
	default:
		__builtin_unreachable();
	}
	// lwz r20,-7904(r31)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r31.u32 + -7904);
	// lwz r20,-7600(r31)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r31.u32 + -7600);
	// lwz r20,-7600(r31)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r31.u32 + -7600);
	// lwz r20,-7600(r31)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r31.u32 + -7600);
	// lwz r20,-7600(r31)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r31.u32 + -7600);
	// lwz r20,-7824(r31)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r31.u32 + -7824);
	// lwz r20,-7776(r31)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r31.u32 + -7776);
	// lwz r20,-7724(r31)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r31.u32 + -7724);
	// lwz r20,-7672(r31)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r31.u32 + -7672);
	// lwz r20,-7620(r31)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r31.u32 + -7620);
loc_829FE120:
	// lwz r11,1748(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1748);
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x829fe140
	if (!ctx.cr6.eq) goto loc_829FE140;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x829fd6b8
	ctx.lr = 0x829FE138;
	sub_829FD6B8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x829fe258
	if (ctx.cr6.lt) goto loc_829FE258;
loc_829FE140:
	// lwz r11,1808(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1808);
	// lis r10,-32232
	ctx.r10.s64 = -2112356352;
	// li r3,0
	ctx.r3.s64 = 0;
	// extsw r9,r11
	ctx.r9.s64 = ctx.r11.s32;
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// lfs f0,-6880(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -6880);
	ctx.f0.f64 = double(temp.f32);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fmuls f11,f12,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stfs f11,0(r30)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// b 0x829fe258
	goto loc_829FE258;
loc_829FE170:
	// lwz r11,1768(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1768);
	// lis r10,-32232
	ctx.r10.s64 = -2112356352;
	// li r3,0
	ctx.r3.s64 = 0;
	// extsw r9,r11
	ctx.r9.s64 = ctx.r11.s32;
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// lfs f0,-6880(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -6880);
	ctx.f0.f64 = double(temp.f32);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// fmuls f11,f12,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stfs f11,0(r30)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// b 0x829fe258
	goto loc_829FE258;
loc_829FE1A0:
	// lwz r11,1748(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1748);
	// rlwinm r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x829fe1c0
	if (!ctx.cr6.eq) goto loc_829FE1C0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x829fd6b8
	ctx.lr = 0x829FE1B8;
	sub_829FD6B8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x829fe258
	if (ctx.cr6.lt) goto loc_829FE258;
loc_829FE1C0:
	// lwz r3,1796(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1796);
	// bl 0x829fd878
	ctx.lr = 0x829FE1C8;
	sub_829FD878(ctx, base);
	// stfs f1,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x829fe258
	goto loc_829FE258;
loc_829FE1D4:
	// lwz r11,1748(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1748);
	// rlwinm r11,r11,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x829fe1f4
	if (!ctx.cr6.eq) goto loc_829FE1F4;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x829fd6b8
	ctx.lr = 0x829FE1EC;
	sub_829FD6B8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x829fe258
	if (ctx.cr6.lt) goto loc_829FE258;
loc_829FE1F4:
	// lwz r3,1800(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1800);
	// bl 0x829fd878
	ctx.lr = 0x829FE1FC;
	sub_829FD878(ctx, base);
	// stfs f1,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x829fe258
	goto loc_829FE258;
loc_829FE208:
	// lwz r11,1748(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1748);
	// rlwinm r11,r11,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x829fe228
	if (!ctx.cr6.eq) goto loc_829FE228;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x829fd6b8
	ctx.lr = 0x829FE220;
	sub_829FD6B8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x829fe258
	if (ctx.cr6.lt) goto loc_829FE258;
loc_829FE228:
	// lwz r3,1804(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1804);
	// bl 0x829fd878
	ctx.lr = 0x829FE230;
	sub_829FD878(ctx, base);
	// stfs f1,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r30.u32 + 0, temp.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x829fe258
	goto loc_829FE258;
loc_829FE23C:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82a091a8
	ctx.lr = 0x829FE248;
	sub_82A091A8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x829fe258
	goto loc_829FE258;
loc_829FE250:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
loc_829FE258:
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

__attribute__((alias("__imp__sub_829FE270"))) PPC_WEAK_FUNC(sub_829FE270);
PPC_FUNC_IMPL(__imp__sub_829FE270) {
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
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x829fe35c
	if (ctx.cr6.eq) goto loc_829FE35C;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// bge cr6,0x829fe35c
	if (!ctx.cr6.lt) goto loc_829FE35C;
	// lis r11,-31964
	ctx.r11.s64 = -2094792704;
	// lwz r11,29308(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 29308);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x829fe2b4
	if (!ctx.cr6.eq) goto loc_829FE2B4;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,65535
	ctx.r3.u64 = ctx.r3.u64 | 65535;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_829FE2B4:
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x829fe2f4
	if (ctx.cr6.lt) goto loc_829FE2F4;
	// bne cr6,0x829fe35c
	if (!ctx.cr6.eq) goto loc_829FE35C;
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// cmpwi cr6,r11,320
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 320, ctx.xer);
	// bgt cr6,0x829fe35c
	if (ctx.cr6.gt) goto loc_829FE35C;
	// cmpwi cr6,r11,-320
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -320, ctx.xer);
	// blt cr6,0x829fe35c
	if (ctx.cr6.lt) goto loc_829FE35C;
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// cmpwi cr6,r11,240
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 240, ctx.xer);
	// bgt cr6,0x829fe35c
	if (ctx.cr6.gt) goto loc_829FE35C;
	// cmpwi cr6,r11,-240
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -240, ctx.xer);
	// blt cr6,0x829fe35c
	if (ctx.cr6.lt) goto loc_829FE35C;
	// li r10,1
	ctx.r10.s64 = 1;
	// b 0x829fe310
	goto loc_829FE310;
loc_829FE2F4:
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x829fe35c
	if (!ctx.cr6.eq) goto loc_829FE35C;
	// lwz r11,8(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x829fe35c
	if (!ctx.cr6.eq) goto loc_829FE35C;
	// li r10,0
	ctx.r10.s64 = 0;
loc_829FE310:
	// rlwinm r11,r3,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// lis r9,-31964
	ctx.r9.s64 = -2094792704;
	// add r8,r3,r11
	ctx.r8.u64 = ctx.r3.u64 + ctx.r11.u64;
	// addi r11,r9,29312
	ctx.r11.s64 = ctx.r9.s64 + 29312;
	// rlwinm r7,r8,6,0,25
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 6) & 0xFFFFFFC0;
	// addi r6,r11,1756
	ctx.r6.s64 = ctx.r11.s64 + 1756;
	// addi r5,r11,1760
	ctx.r5.s64 = ctx.r11.s64 + 1760;
	// addi r11,r11,1764
	ctx.r11.s64 = ctx.r11.s64 + 1764;
	// stwx r10,r7,r6
	PPC_STORE_U32(ctx.r7.u32 + ctx.r6.u32, ctx.r10.u32);
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// stwx r10,r7,r5
	PPC_STORE_U32(ctx.r7.u32 + ctx.r5.u32, ctx.r10.u32);
	// lwz r9,8(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// stwx r9,r7,r11
	PPC_STORE_U32(ctx.r7.u32 + ctx.r11.u32, ctx.r9.u32);
	// bl 0x829fdf38
	ctx.lr = 0x829FE348;
	sub_829FDF38(ctx, base);
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
loc_829FE35C:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_829FE374"))) PPC_WEAK_FUNC(sub_829FE374);
PPC_FUNC_IMPL(__imp__sub_829FE374) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_829FE378"))) PPC_WEAK_FUNC(sub_829FE378);
PPC_FUNC_IMPL(__imp__sub_829FE378) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7674
	ctx.lr = 0x829FE380;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// cmpwi cr6,r4,2
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 2, ctx.xer);
	// bge cr6,0x829fe964
	if (!ctx.cr6.lt) goto loc_829FE964;
	// lis r11,-31964
	ctx.r11.s64 = -2094792704;
	// lwz r11,29308(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 29308);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x829fe3b4
	if (!ctx.cr6.eq) goto loc_829FE3B4;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,65535
	ctx.r3.u64 = ctx.r3.u64 | 65535;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82fa76c4
	__restgprlr_27(ctx, base);
	return;
loc_829FE3B4:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x829fe964
	if (!ctx.cr6.eq) goto loc_829FE964;
	// cmplwi cr6,r5,5
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 5, ctx.xer);
	// bgt cr6,0x829fe964
	if (ctx.cr6.gt) goto loc_829FE964;
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x829fe6ac
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_829FE6AC;
	// bdzf 4*cr6+eq,0x829fe5e0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_829FE5E0;
	// bdzf 4*cr6+eq,0x829fe964
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_829FE964;
	// bdzf 4*cr6+eq,0x829fe76c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_829FE76C;
	// bne cr6,0x829fe944
	if (!ctx.cr6.eq) goto loc_829FE944;
	// cmplwi cr6,r28,1
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 1, ctx.xer);
	// blt cr6,0x829fe560
	if (ctx.cr6.lt) goto loc_829FE560;
	// beq cr6,0x829fe50c
	if (ctx.cr6.eq) goto loc_829FE50C;
	// cmplwi cr6,r28,3
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 3, ctx.xer);
	// bge cr6,0x829fe964
	if (!ctx.cr6.lt) goto loc_829FE964;
	// lis r11,-31964
	ctx.r11.s64 = -2094792704;
	// addi r29,r11,29312
	ctx.r29.s64 = ctx.r11.s64 + 29312;
	// lwz r11,8(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x829fe418
	if (!ctx.cr6.eq) goto loc_829FE418;
	// lis r3,-31999
	ctx.r3.s64 = -2097086464;
	// ori r3,r3,5
	ctx.r3.u64 = ctx.r3.u64 | 5;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82fa76c4
	__restgprlr_27(ctx, base);
	return;
loc_829FE418:
	// lwz r11,2164(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 2164);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x829fe430
	if (!ctx.cr6.eq) goto loc_829FE430;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r11,-27976
	ctx.r3.s64 = ctx.r11.s64 + -27976;
	// bl 0x83179504
	ctx.lr = 0x829FE430;
	__imp__DbgPrint(ctx, base);
loc_829FE430:
	// rlwinm r11,r31,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r10,r29,1680
	ctx.r10.s64 = ctx.r29.s64 + 1680;
	// add r9,r31,r11
	ctx.r9.u64 = ctx.r31.u64 + ctx.r11.u64;
	// addi r28,r29,1840
	ctx.r28.s64 = ctx.r29.s64 + 1840;
	// rlwinm r30,r9,6,0,25
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 6) & 0xFFFFFFC0;
	// lwzx r8,r30,r10
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r10.u32);
	// lwzx r11,r30,r28
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r28.u32);
	// cmpwi cr6,r8,1
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 1, ctx.xer);
	// bne cr6,0x829fe4c8
	if (!ctx.cr6.eq) goto loc_829FE4C8;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x829fe490
	if (ctx.cr6.eq) goto loc_829FE490;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a08d40
	ctx.lr = 0x829FE468;
	sub_82A08D40(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x829fe96c
	if (ctx.cr6.lt) goto loc_829FE96C;
	// sync 
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stwx r11,r30,r28
	PPC_STORE_U32(ctx.r30.u32 + ctx.r28.u32, ctx.r11.u32);
	// bl 0x829fdf38
	ctx.lr = 0x829FE484;
	sub_829FDF38(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82fa76c4
	__restgprlr_27(ctx, base);
	return;
loc_829FE490:
	// li r28,0
	ctx.r28.s64 = 0;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r28,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r28.u32);
	// bl 0x829fd790
	ctx.lr = 0x829FE4A0;
	sub_829FD790(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,80(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82a08d10
	ctx.lr = 0x829FE4AC;
	sub_82A08D10(ctx, base);
	// addi r11,r29,1772
	ctx.r11.s64 = ctx.r29.s64 + 1772;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stwx r28,r30,r11
	PPC_STORE_U32(ctx.r30.u32 + ctx.r11.u32, ctx.r28.u32);
	// bl 0x829fdf38
	ctx.lr = 0x829FE4BC;
	sub_829FDF38(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82fa76c4
	__restgprlr_27(ctx, base);
	return;
loc_829FE4C8:
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x829fe950
	if (ctx.cr6.eq) goto loc_829FE950;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a08d40
	ctx.lr = 0x829FE4DC;
	sub_82A08D40(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x829fe96c
	if (ctx.cr6.lt) goto loc_829FE96C;
	// addi r10,r29,1772
	ctx.r10.s64 = ctx.r29.s64 + 1772;
	// li r11,1
	ctx.r11.s64 = 1;
	// stwx r11,r30,r10
	PPC_STORE_U32(ctx.r30.u32 + ctx.r10.u32, ctx.r11.u32);
	// sync 
	// stwx r11,r30,r28
	PPC_STORE_U32(ctx.r30.u32 + ctx.r28.u32, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829fdf38
	ctx.lr = 0x829FE500;
	sub_829FDF38(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82fa76c4
	__restgprlr_27(ctx, base);
	return;
loc_829FE50C:
	// rlwinm r10,r31,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// lis r11,-31964
	ctx.r11.s64 = -2094792704;
	// add r10,r31,r10
	ctx.r10.u64 = ctx.r31.u64 + ctx.r10.u64;
	// addi r29,r11,29312
	ctx.r29.s64 = ctx.r11.s64 + 29312;
	// rlwinm r30,r10,6,0,25
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 6) & 0xFFFFFFC0;
	// addi r28,r29,1840
	ctx.r28.s64 = ctx.r29.s64 + 1840;
	// lwzx r9,r30,r28
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r28.u32);
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// bne cr6,0x829fe538
	if (!ctx.cr6.eq) goto loc_829FE538;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a08db8
	ctx.lr = 0x829FE538;
	sub_82A08DB8(ctx, base);
loc_829FE538:
	// addi r11,r29,1772
	ctx.r11.s64 = ctx.r29.s64 + 1772;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,1
	ctx.r9.s64 = 1;
	// stwx r10,r30,r28
	PPC_STORE_U32(ctx.r30.u32 + ctx.r28.u32, ctx.r10.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stwx r9,r30,r11
	PPC_STORE_U32(ctx.r30.u32 + ctx.r11.u32, ctx.r9.u32);
	// bl 0x829fdf38
	ctx.lr = 0x829FE554;
	sub_829FDF38(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82fa76c4
	__restgprlr_27(ctx, base);
	return;
loc_829FE560:
	// rlwinm r10,r31,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// lis r11,-31964
	ctx.r11.s64 = -2094792704;
	// add r10,r31,r10
	ctx.r10.u64 = ctx.r31.u64 + ctx.r10.u64;
	// addi r29,r11,29312
	ctx.r29.s64 = ctx.r11.s64 + 29312;
	// rlwinm r30,r10,6,0,25
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 6) & 0xFFFFFFC0;
	// addi r27,r29,1840
	ctx.r27.s64 = ctx.r29.s64 + 1840;
	// lwzx r9,r30,r27
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r27.u32);
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// bne cr6,0x829fe58c
	if (!ctx.cr6.eq) goto loc_829FE58C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a08db8
	ctx.lr = 0x829FE58C;
	sub_82A08DB8(ctx, base);
loc_829FE58C:
	// addi r11,r29,1680
	ctx.r11.s64 = ctx.r29.s64 + 1680;
	// addi r10,r29,1772
	ctx.r10.s64 = ctx.r29.s64 + 1772;
	// li r28,0
	ctx.r28.s64 = 0;
	// stwx r28,r30,r27
	PPC_STORE_U32(ctx.r30.u32 + ctx.r27.u32, ctx.r28.u32);
	// lwzx r9,r30,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// stwx r28,r30,r10
	PPC_STORE_U32(ctx.r30.u32 + ctx.r10.u32, ctx.r28.u32);
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// bne cr6,0x829fe950
	if (!ctx.cr6.eq) goto loc_829FE950;
	// addi r11,r29,1656
	ctx.r11.s64 = ctx.r29.s64 + 1656;
	// addi r10,r29,1748
	ctx.r10.s64 = ctx.r29.s64 + 1748;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwzx r9,r30,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// lwzx r8,r30,r10
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r10.u32);
	// rlwinm r7,r9,0,0,27
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFF0;
	// rlwinm r6,r8,0,0,27
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFF0;
	// stwx r7,r30,r11
	PPC_STORE_U32(ctx.r30.u32 + ctx.r11.u32, ctx.r7.u32);
	// stwx r6,r30,r10
	PPC_STORE_U32(ctx.r30.u32 + ctx.r10.u32, ctx.r6.u32);
	// bl 0x829fdf38
	ctx.lr = 0x829FE5D4;
	sub_829FDF38(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82fa76c4
	__restgprlr_27(ctx, base);
	return;
loc_829FE5E0:
	// lis r10,-31964
	ctx.r10.s64 = -2094792704;
	// rlwinm r11,r31,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r30,r10,29312
	ctx.r30.s64 = ctx.r10.s64 + 29312;
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// addi r10,r30,1840
	ctx.r10.s64 = ctx.r30.s64 + 1840;
	// rlwinm r29,r11,6,0,25
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0xFFFFFFC0;
	// lwzx r9,r29,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r10.u32);
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// bne cr6,0x829fe610
	if (!ctx.cr6.eq) goto loc_829FE610;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a091c8
	ctx.lr = 0x829FE610;
	sub_82A091C8(ctx, base);
loc_829FE610:
	// cmplwi cr6,r28,3
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 3, ctx.xer);
	// bgt cr6,0x829fe964
	if (ctx.cr6.gt) goto loc_829FE964;
	// mtctr r28
	ctx.ctr.u64 = ctx.r28.u64;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x829fe64c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_829FE64C;
	// bdzf 4*cr6+eq,0x829fe66c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_829FE66C;
	// bne cr6,0x829fe68c
	if (!ctx.cr6.eq) goto loc_829FE68C;
	// addi r11,r30,1776
	ctx.r11.s64 = ctx.r30.s64 + 1776;
	// li r10,0
	ctx.r10.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stwx r10,r29,r11
	PPC_STORE_U32(ctx.r29.u32 + ctx.r11.u32, ctx.r10.u32);
	// bl 0x829fdf38
	ctx.lr = 0x829FE640;
	sub_829FDF38(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82fa76c4
	__restgprlr_27(ctx, base);
	return;
loc_829FE64C:
	// addi r11,r30,1776
	ctx.r11.s64 = ctx.r30.s64 + 1776;
	// li r10,2
	ctx.r10.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stwx r10,r29,r11
	PPC_STORE_U32(ctx.r29.u32 + ctx.r11.u32, ctx.r10.u32);
	// bl 0x829fdf38
	ctx.lr = 0x829FE660;
	sub_829FDF38(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82fa76c4
	__restgprlr_27(ctx, base);
	return;
loc_829FE66C:
	// addi r11,r30,1776
	ctx.r11.s64 = ctx.r30.s64 + 1776;
	// li r10,3
	ctx.r10.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stwx r10,r29,r11
	PPC_STORE_U32(ctx.r29.u32 + ctx.r11.u32, ctx.r10.u32);
	// bl 0x829fdf38
	ctx.lr = 0x829FE680;
	sub_829FDF38(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82fa76c4
	__restgprlr_27(ctx, base);
	return;
loc_829FE68C:
	// addi r11,r30,1776
	ctx.r11.s64 = ctx.r30.s64 + 1776;
	// li r10,1
	ctx.r10.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stwx r10,r29,r11
	PPC_STORE_U32(ctx.r29.u32 + ctx.r11.u32, ctx.r10.u32);
	// bl 0x829fdf38
	ctx.lr = 0x829FE6A0;
	sub_829FDF38(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82fa76c4
	__restgprlr_27(ctx, base);
	return;
loc_829FE6AC:
	// cmplwi cr6,r28,1
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 1, ctx.xer);
	// blt cr6,0x829fe728
	if (ctx.cr6.lt) goto loc_829FE728;
	// beq cr6,0x829fe6f4
	if (ctx.cr6.eq) goto loc_829FE6F4;
	// cmplwi cr6,r28,3
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 3, ctx.xer);
	// bge cr6,0x829fe964
	if (!ctx.cr6.lt) goto loc_829FE964;
	// rlwinm r11,r31,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// lis r10,-31964
	ctx.r10.s64 = -2094792704;
	// add r9,r31,r11
	ctx.r9.u64 = ctx.r31.u64 + ctx.r11.u64;
	// addi r11,r10,29312
	ctx.r11.s64 = ctx.r10.s64 + 29312;
	// rlwinm r8,r9,6,0,25
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 6) & 0xFFFFFFC0;
	// addi r7,r11,1752
	ctx.r7.s64 = ctx.r11.s64 + 1752;
	// li r6,3
	ctx.r6.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stwx r6,r8,r7
	PPC_STORE_U32(ctx.r8.u32 + ctx.r7.u32, ctx.r6.u32);
	// bl 0x829fdf38
	ctx.lr = 0x829FE6E8;
	sub_829FDF38(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82fa76c4
	__restgprlr_27(ctx, base);
	return;
loc_829FE6F4:
	// rlwinm r11,r31,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// lis r10,-31964
	ctx.r10.s64 = -2094792704;
	// add r9,r31,r11
	ctx.r9.u64 = ctx.r31.u64 + ctx.r11.u64;
	// addi r11,r10,29312
	ctx.r11.s64 = ctx.r10.s64 + 29312;
	// rlwinm r8,r9,6,0,25
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 6) & 0xFFFFFFC0;
	// addi r7,r11,1752
	ctx.r7.s64 = ctx.r11.s64 + 1752;
	// li r6,2
	ctx.r6.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stwx r6,r8,r7
	PPC_STORE_U32(ctx.r8.u32 + ctx.r7.u32, ctx.r6.u32);
	// bl 0x829fdf38
	ctx.lr = 0x829FE71C;
	sub_829FDF38(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82fa76c4
	__restgprlr_27(ctx, base);
	return;
loc_829FE728:
	// lis r11,-31964
	ctx.r11.s64 = -2094792704;
	// addi r11,r11,29312
	ctx.r11.s64 = ctx.r11.s64 + 29312;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r10,r10,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x40;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x829fe964
	if (!ctx.cr6.eq) goto loc_829FE964;
	// rlwinm r10,r31,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r11,r11,1752
	ctx.r11.s64 = ctx.r11.s64 + 1752;
	// add r10,r31,r10
	ctx.r10.u64 = ctx.r31.u64 + ctx.r10.u64;
	// li r9,1
	ctx.r9.s64 = 1;
	// rlwinm r8,r10,6,0,25
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 6) & 0xFFFFFFC0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stwx r9,r8,r11
	PPC_STORE_U32(ctx.r8.u32 + ctx.r11.u32, ctx.r9.u32);
	// bl 0x829fdf38
	ctx.lr = 0x829FE760;
	sub_829FDF38(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82fa76c4
	__restgprlr_27(ctx, base);
	return;
loc_829FE76C:
	// cmpwi cr6,r28,100
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 100, ctx.xer);
	// bgt cr6,0x829fe908
	if (ctx.cr6.gt) goto loc_829FE908;
	// beq cr6,0x829fe8d4
	if (ctx.cr6.eq) goto loc_829FE8D4;
	// cmplwi cr6,r28,5
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 5, ctx.xer);
	// bgt cr6,0x829fe964
	if (ctx.cr6.gt) goto loc_829FE964;
	// mtctr r28
	ctx.ctr.u64 = ctx.r28.u64;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// bdzf 4*cr6+eq,0x829fe7d0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_829FE7D0;
	// bdzf 4*cr6+eq,0x829fe804
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_829FE804;
	// bdzf 4*cr6+eq,0x829fe838
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_829FE838;
	// bdzf 4*cr6+eq,0x829fe86c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0 && !ctx.cr6.eq) goto loc_829FE86C;
	// bne cr6,0x829fe8a0
	if (!ctx.cr6.eq) goto loc_829FE8A0;
	// rlwinm r11,r31,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// lis r10,-31964
	ctx.r10.s64 = -2094792704;
	// add r9,r31,r11
	ctx.r9.u64 = ctx.r31.u64 + ctx.r11.u64;
	// addi r11,r10,29312
	ctx.r11.s64 = ctx.r10.s64 + 29312;
	// rlwinm r8,r9,6,0,25
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 6) & 0xFFFFFFC0;
	// addi r7,r11,1820
	ctx.r7.s64 = ctx.r11.s64 + 1820;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stwx r6,r8,r7
	PPC_STORE_U32(ctx.r8.u32 + ctx.r7.u32, ctx.r6.u32);
	// bl 0x829fdf38
	ctx.lr = 0x829FE7C4;
	sub_829FDF38(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82fa76c4
	__restgprlr_27(ctx, base);
	return;
loc_829FE7D0:
	// rlwinm r11,r31,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// lis r10,-31964
	ctx.r10.s64 = -2094792704;
	// add r9,r31,r11
	ctx.r9.u64 = ctx.r31.u64 + ctx.r11.u64;
	// addi r11,r10,29312
	ctx.r11.s64 = ctx.r10.s64 + 29312;
	// rlwinm r8,r9,6,0,25
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 6) & 0xFFFFFFC0;
	// addi r7,r11,1820
	ctx.r7.s64 = ctx.r11.s64 + 1820;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stwx r6,r8,r7
	PPC_STORE_U32(ctx.r8.u32 + ctx.r7.u32, ctx.r6.u32);
	// bl 0x829fdf38
	ctx.lr = 0x829FE7F8;
	sub_829FDF38(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82fa76c4
	__restgprlr_27(ctx, base);
	return;
loc_829FE804:
	// rlwinm r11,r31,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// lis r10,-31964
	ctx.r10.s64 = -2094792704;
	// add r9,r31,r11
	ctx.r9.u64 = ctx.r31.u64 + ctx.r11.u64;
	// addi r11,r10,29312
	ctx.r11.s64 = ctx.r10.s64 + 29312;
	// rlwinm r8,r9,6,0,25
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 6) & 0xFFFFFFC0;
	// addi r7,r11,1820
	ctx.r7.s64 = ctx.r11.s64 + 1820;
	// li r6,2
	ctx.r6.s64 = 2;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stwx r6,r8,r7
	PPC_STORE_U32(ctx.r8.u32 + ctx.r7.u32, ctx.r6.u32);
	// bl 0x829fdf38
	ctx.lr = 0x829FE82C;
	sub_829FDF38(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82fa76c4
	__restgprlr_27(ctx, base);
	return;
loc_829FE838:
	// rlwinm r11,r31,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// lis r10,-31964
	ctx.r10.s64 = -2094792704;
	// add r9,r31,r11
	ctx.r9.u64 = ctx.r31.u64 + ctx.r11.u64;
	// addi r11,r10,29312
	ctx.r11.s64 = ctx.r10.s64 + 29312;
	// rlwinm r8,r9,6,0,25
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 6) & 0xFFFFFFC0;
	// addi r7,r11,1820
	ctx.r7.s64 = ctx.r11.s64 + 1820;
	// li r6,3
	ctx.r6.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stwx r6,r8,r7
	PPC_STORE_U32(ctx.r8.u32 + ctx.r7.u32, ctx.r6.u32);
	// bl 0x829fdf38
	ctx.lr = 0x829FE860;
	sub_829FDF38(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82fa76c4
	__restgprlr_27(ctx, base);
	return;
loc_829FE86C:
	// rlwinm r11,r31,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// lis r10,-31964
	ctx.r10.s64 = -2094792704;
	// add r9,r31,r11
	ctx.r9.u64 = ctx.r31.u64 + ctx.r11.u64;
	// addi r11,r10,29312
	ctx.r11.s64 = ctx.r10.s64 + 29312;
	// rlwinm r8,r9,6,0,25
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 6) & 0xFFFFFFC0;
	// addi r7,r11,1820
	ctx.r7.s64 = ctx.r11.s64 + 1820;
	// li r6,4
	ctx.r6.s64 = 4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stwx r6,r8,r7
	PPC_STORE_U32(ctx.r8.u32 + ctx.r7.u32, ctx.r6.u32);
	// bl 0x829fdf38
	ctx.lr = 0x829FE894;
	sub_829FDF38(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82fa76c4
	__restgprlr_27(ctx, base);
	return;
loc_829FE8A0:
	// rlwinm r11,r31,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// lis r10,-31964
	ctx.r10.s64 = -2094792704;
	// add r9,r31,r11
	ctx.r9.u64 = ctx.r31.u64 + ctx.r11.u64;
	// addi r11,r10,29312
	ctx.r11.s64 = ctx.r10.s64 + 29312;
	// rlwinm r8,r9,6,0,25
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 6) & 0xFFFFFFC0;
	// addi r7,r11,1820
	ctx.r7.s64 = ctx.r11.s64 + 1820;
	// li r6,5
	ctx.r6.s64 = 5;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stwx r6,r8,r7
	PPC_STORE_U32(ctx.r8.u32 + ctx.r7.u32, ctx.r6.u32);
	// bl 0x829fdf38
	ctx.lr = 0x829FE8C8;
	sub_829FDF38(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82fa76c4
	__restgprlr_27(ctx, base);
	return;
loc_829FE8D4:
	// rlwinm r11,r31,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// lis r10,-31964
	ctx.r10.s64 = -2094792704;
	// add r9,r31,r11
	ctx.r9.u64 = ctx.r31.u64 + ctx.r11.u64;
	// addi r11,r10,29312
	ctx.r11.s64 = ctx.r10.s64 + 29312;
	// rlwinm r8,r9,6,0,25
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 6) & 0xFFFFFFC0;
	// addi r7,r11,1820
	ctx.r7.s64 = ctx.r11.s64 + 1820;
	// li r6,7
	ctx.r6.s64 = 7;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stwx r6,r8,r7
	PPC_STORE_U32(ctx.r8.u32 + ctx.r7.u32, ctx.r6.u32);
	// bl 0x829fdf38
	ctx.lr = 0x829FE8FC;
	sub_829FDF38(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82fa76c4
	__restgprlr_27(ctx, base);
	return;
loc_829FE908:
	// cmpwi cr6,r28,101
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 101, ctx.xer);
	// bne cr6,0x829fe964
	if (!ctx.cr6.eq) goto loc_829FE964;
	// rlwinm r11,r31,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// lis r10,-31964
	ctx.r10.s64 = -2094792704;
	// add r9,r31,r11
	ctx.r9.u64 = ctx.r31.u64 + ctx.r11.u64;
	// addi r11,r10,29312
	ctx.r11.s64 = ctx.r10.s64 + 29312;
	// rlwinm r8,r9,6,0,25
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 6) & 0xFFFFFFC0;
	// addi r7,r11,1820
	ctx.r7.s64 = ctx.r11.s64 + 1820;
	// li r6,6
	ctx.r6.s64 = 6;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stwx r6,r8,r7
	PPC_STORE_U32(ctx.r8.u32 + ctx.r7.u32, ctx.r6.u32);
	// bl 0x829fdf38
	ctx.lr = 0x829FE938;
	sub_829FDF38(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82fa76c4
	__restgprlr_27(ctx, base);
	return;
loc_829FE944:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a09128
	ctx.lr = 0x829FE950;
	sub_82A09128(ctx, base);
loc_829FE950:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829fdf38
	ctx.lr = 0x829FE958;
	sub_829FDF38(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82fa76c4
	__restgprlr_27(ctx, base);
	return;
loc_829FE964:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
loc_829FE96C:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82fa76c4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_829FE974"))) PPC_WEAK_FUNC(sub_829FE974);
PPC_FUNC_IMPL(__imp__sub_829FE974) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_829FE978"))) PPC_WEAK_FUNC(sub_829FE978);
PPC_FUNC_IMPL(__imp__sub_829FE978) {
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
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// bge cr6,0x829fea28
	if (!ctx.cr6.lt) goto loc_829FEA28;
	// lis r11,-31964
	ctx.r11.s64 = -2094792704;
	// lwz r11,29308(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 29308);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x829fe9b4
	if (!ctx.cr6.eq) goto loc_829FE9B4;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,65535
	ctx.r3.u64 = ctx.r3.u64 | 65535;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_829FE9B4:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f0,-9888(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -9888);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bgt cr6,0x829fea28
	if (ctx.cr6.gt) goto loc_829FEA28;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,5184(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5184);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// blt cr6,0x829fea28
	if (ctx.cr6.lt) goto loc_829FEA28;
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// rlwinm r11,r3,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// lis r8,-31964
	ctx.r8.s64 = -2094792704;
	// add r7,r3,r11
	ctx.r7.u64 = ctx.r3.u64 + ctx.r11.u64;
	// addi r10,r8,29312
	ctx.r10.s64 = ctx.r8.s64 + 29312;
	// lfs f0,-28052(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -28052);
	ctx.f0.f64 = double(temp.f32);
	// rlwinm r11,r7,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 6) & 0xFFFFFFC0;
	// addi r9,r10,1748
	ctx.r9.s64 = ctx.r10.s64 + 1748;
	// fmuls f0,f1,f0
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// addi r6,r10,1808
	ctx.r6.s64 = ctx.r10.s64 + 1808;
	// lwzx r5,r11,r9
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// ori r4,r5,1
	ctx.r4.u64 = ctx.r5.u64 | 1;
	// stwx r4,r11,r9
	PPC_STORE_U32(ctx.r11.u32 + ctx.r9.u32, ctx.r4.u32);
	// fctiwz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f0.f64));
	// stfiwx f13,r11,r6
	PPC_STORE_U32(ctx.r11.u32 + ctx.r6.u32, ctx.f13.u32);
	// bl 0x829fdf38
	ctx.lr = 0x829FEA14;
	sub_829FDF38(ctx, base);
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
loc_829FEA28:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_829FEA40"))) PPC_WEAK_FUNC(sub_829FEA40);
PPC_FUNC_IMPL(__imp__sub_829FEA40) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x829FEA48;
	__savegprlr_28(ctx, base);
	// stfd f29,-64(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f29.u64);
	// stfd f30,-56(r1)
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f30.u64);
	// stfd f31,-48(r1)
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// fmr f30,f2
	ctx.f30.f64 = ctx.f2.f64;
	// fmr f29,f3
	ctx.f29.f64 = ctx.f3.f64;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// bge cr6,0x829feba4
	if (!ctx.cr6.lt) goto loc_829FEBA4;
	// lis r11,-31964
	ctx.r11.s64 = -2094792704;
	// lwz r11,29308(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 29308);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x829fea98
	if (!ctx.cr6.eq) goto loc_829FEA98;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,65535
	ctx.r3.u64 = ctx.r3.u64 | 65535;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f29,-64(r1)
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// lfd f30,-56(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// lfd f31,-48(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
loc_829FEA98:
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lfs f13,-27880(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -27880);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f1,f13
	ctx.cr6.compare(ctx.f1.f64, ctx.f13.f64);
	// blt cr6,0x829feba4
	if (ctx.cr6.lt) goto loc_829FEBA4;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lfs f0,-23728(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -23728);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bgt cr6,0x829feba4
	if (ctx.cr6.gt) goto loc_829FEBA4;
	// fcmpu cr6,f30,f13
	ctx.cr6.compare(ctx.f30.f64, ctx.f13.f64);
	// blt cr6,0x829feba4
	if (ctx.cr6.lt) goto loc_829FEBA4;
	// fcmpu cr6,f30,f0
	ctx.cr6.compare(ctx.f30.f64, ctx.f0.f64);
	// bgt cr6,0x829feba4
	if (ctx.cr6.gt) goto loc_829FEBA4;
	// fcmpu cr6,f29,f13
	ctx.cr6.compare(ctx.f29.f64, ctx.f13.f64);
	// blt cr6,0x829feba4
	if (ctx.cr6.lt) goto loc_829FEBA4;
	// fcmpu cr6,f29,f0
	ctx.cr6.compare(ctx.f29.f64, ctx.f0.f64);
	// bgt cr6,0x829feba4
	if (ctx.cr6.gt) goto loc_829FEBA4;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// fmr f2,f1
	ctx.f2.f64 = ctx.f1.f64;
	// rlwinm r11,r28,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 1) & 0xFFFFFFFE;
	// add r9,r28,r11
	ctx.r9.u64 = ctx.r28.u64 + ctx.r11.u64;
	// lfd f31,11528(r10)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r10.u32 + 11528);
	// rlwinm r31,r9,6,0,25
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 6) & 0xFFFFFFC0;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x82fa30a8
	ctx.lr = 0x829FEAF8;
	sub_82FA30A8(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// lis r8,-32250
	ctx.r8.s64 = -2113536000;
	// lis r7,-31964
	ctx.r7.s64 = -2094792704;
	// fmr f2,f30
	ctx.f2.f64 = ctx.f30.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// addi r29,r7,29312
	ctx.r29.s64 = ctx.r7.s64 + 29312;
	// lfs f30,-28052(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -28052);
	ctx.f30.f64 = double(temp.f32);
	// addi r30,r29,1748
	ctx.r30.s64 = ctx.r29.s64 + 1748;
	// addi r6,r29,1796
	ctx.r6.s64 = ctx.r29.s64 + 1796;
	// fmuls f13,f0,f30
	ctx.f13.f64 = double(float(ctx.f0.f64 * ctx.f30.f64));
	// lwzx r5,r31,r30
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r30.u32);
	// ori r4,r5,2
	ctx.r4.u64 = ctx.r5.u64 | 2;
	// stwx r4,r31,r30
	PPC_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r4.u32);
	// fctiwz f12,f13
	ctx.f12.s64 = (ctx.f13.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f13.f64));
	// stfiwx f12,r31,r6
	PPC_STORE_U32(ctx.r31.u32 + ctx.r6.u32, ctx.f12.u32);
	// bl 0x82fa30a8
	ctx.lr = 0x829FEB38;
	sub_82FA30A8(ctx, base);
	// frsp f11,f1
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(float(ctx.f1.f64));
	// lwzx r3,r31,r30
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r30.u32);
	// addi r11,r29,1800
	ctx.r11.s64 = ctx.r29.s64 + 1800;
	// fmr f2,f29
	ctx.f2.f64 = ctx.f29.f64;
	// ori r10,r3,4
	ctx.r10.u64 = ctx.r3.u64 | 4;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// stwx r10,r31,r30
	PPC_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r10.u32);
	// fmuls f10,f11,f30
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f30.f64));
	// fctiwz f9,f10
	ctx.f9.s64 = (ctx.f10.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f10.f64));
	// stfiwx f9,r31,r11
	PPC_STORE_U32(ctx.r31.u32 + ctx.r11.u32, ctx.f9.u32);
	// bl 0x82fa30a8
	ctx.lr = 0x829FEB64;
	sub_82FA30A8(ctx, base);
	// frsp f8,f1
	ctx.fpscr.disableFlushMode();
	ctx.f8.f64 = double(float(ctx.f1.f64));
	// lwzx r9,r31,r30
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r30.u32);
	// addi r8,r29,1804
	ctx.r8.s64 = ctx.r29.s64 + 1804;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// ori r7,r9,8
	ctx.r7.u64 = ctx.r9.u64 | 8;
	// stwx r7,r31,r30
	PPC_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r7.u32);
	// fmuls f7,f8,f30
	ctx.f7.f64 = double(float(ctx.f8.f64 * ctx.f30.f64));
	// fctiwz f6,f7
	ctx.f6.s64 = (ctx.f7.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f7.f64));
	// stfiwx f6,r31,r8
	PPC_STORE_U32(ctx.r31.u32 + ctx.r8.u32, ctx.f6.u32);
	// bl 0x829fdf38
	ctx.lr = 0x829FEB8C;
	sub_829FDF38(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f29,-64(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// lfd f30,-56(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// lfd f31,-48(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
loc_829FEBA4:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f29,-64(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// lfd f30,-56(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// lfd f31,-48(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_829FEBC0"))) PPC_WEAK_FUNC(sub_829FEBC0);
PPC_FUNC_IMPL(__imp__sub_829FEBC0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x829FEBC8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// cmpwi cr6,r4,2
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 2, ctx.xer);
	// bge cr6,0x829fee10
	if (!ctx.cr6.lt) goto loc_829FEE10;
	// lis r11,-31964
	ctx.r11.s64 = -2094792704;
	// lwz r11,29308(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 29308);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x829febfc
	if (!ctx.cr6.eq) goto loc_829FEBFC;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,65535
	ctx.r3.u64 = ctx.r3.u64 | 65535;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
loc_829FEBFC:
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// bge cr6,0x829fee10
	if (!ctx.cr6.lt) goto loc_829FEE10;
	// cmplwi cr6,r28,9
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 9, ctx.xer);
	// bgt cr6,0x829fee10
	if (ctx.cr6.gt) goto loc_829FEE10;
	// lis r12,-32096
	ctx.r12.s64 = -2103443456;
	// rlwinm r0,r28,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r12,r12,-5084
	ctx.r12.s64 = ctx.r12.s64 + -5084;
	// lwzx r0,r12,r0
	ctx.r0.u64 = PPC_LOAD_U32(ctx.r12.u32 + ctx.r0.u32);
	// mtctr r0
	ctx.ctr.u64 = ctx.r0.u64;
	// bctr 
	switch (ctx.r28.u64) {
	case 0:
		goto loc_829FEC4C;
	case 1:
		goto loc_829FEE10;
	case 2:
		goto loc_829FEE10;
	case 3:
		goto loc_829FEE10;
	case 4:
		goto loc_829FEE10;
	case 5:
		goto loc_829FECDC;
	case 6:
		goto loc_829FED3C;
	case 7:
		goto loc_829FED3C;
	case 8:
		goto loc_829FED3C;
	case 9:
		goto loc_829FEE00;
	default:
		__builtin_unreachable();
	}
	// lwz r20,-5044(r31)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r31.u32 + -5044);
	// lwz r20,-4592(r31)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4592);
	// lwz r20,-4592(r31)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4592);
	// lwz r20,-4592(r31)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4592);
	// lwz r20,-4592(r31)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4592);
	// lwz r20,-4900(r31)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4900);
	// lwz r20,-4804(r31)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4804);
	// lwz r20,-4804(r31)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4804);
	// lwz r20,-4804(r31)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4804);
	// lwz r20,-4608(r31)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r31.u32 + -4608);
loc_829FEC4C:
	// rlwinm r10,r31,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// lis r11,-31964
	ctx.r11.s64 = -2094792704;
	// add r9,r31,r10
	ctx.r9.u64 = ctx.r31.u64 + ctx.r10.u64;
	// addi r10,r11,29312
	ctx.r10.s64 = ctx.r11.s64 + 29312;
	// rlwinm r11,r9,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 6) & 0xFFFFFFC0;
	// addi r8,r10,1772
	ctx.r8.s64 = ctx.r10.s64 + 1772;
	// lwzx r7,r11,r8
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// cmpwi cr6,r7,1
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 1, ctx.xer);
	// beq cr6,0x829fee10
	if (ctx.cr6.eq) goto loc_829FEE10;
	// addi r9,r10,1840
	ctx.r9.s64 = ctx.r10.s64 + 1840;
	// lwzx r8,r11,r9
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// cmpwi cr6,r8,1
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 1, ctx.xer);
	// beq cr6,0x829fee10
	if (ctx.cr6.eq) goto loc_829FEE10;
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// lfs f0,-9888(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -9888);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bgt cr6,0x829fee10
	if (ctx.cr6.gt) goto loc_829FEE10;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfs f0,5184(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 5184);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// blt cr6,0x829fee10
	if (ctx.cr6.lt) goto loc_829FEE10;
	// lis r8,-32250
	ctx.r8.s64 = -2113536000;
	// addi r9,r10,1748
	ctx.r9.s64 = ctx.r10.s64 + 1748;
	// addi r7,r10,1808
	ctx.r7.s64 = ctx.r10.s64 + 1808;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f0,-28052(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -28052);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f1,f0
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// lwzx r6,r11,r9
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// ori r5,r6,1
	ctx.r5.u64 = ctx.r6.u64 | 1;
	// stwx r5,r11,r9
	PPC_STORE_U32(ctx.r11.u32 + ctx.r9.u32, ctx.r5.u32);
	// fctiwz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f0.f64));
	// stfiwx f13,r11,r7
	PPC_STORE_U32(ctx.r11.u32 + ctx.r7.u32, ctx.f13.u32);
	// bl 0x829fdf38
	ctx.lr = 0x829FECD0;
	sub_829FDF38(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
loc_829FECDC:
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lfs f0,-27872(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -27872);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// blt cr6,0x829fee10
	if (ctx.cr6.lt) goto loc_829FEE10;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lfs f0,-27876(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -27876);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bgt cr6,0x829fee10
	if (ctx.cr6.gt) goto loc_829FEE10;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// rlwinm r11,r31,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// lis r9,-31964
	ctx.r9.s64 = -2094792704;
	// add r8,r31,r11
	ctx.r8.u64 = ctx.r31.u64 + ctx.r11.u64;
	// addi r11,r9,29312
	ctx.r11.s64 = ctx.r9.s64 + 29312;
	// lfs f0,-28052(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -28052);
	ctx.f0.f64 = double(temp.f32);
	// rlwinm r7,r8,6,0,25
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 6) & 0xFFFFFFC0;
	// fmuls f0,f1,f0
	ctx.f0.f64 = double(float(ctx.f1.f64 * ctx.f0.f64));
	// addi r6,r11,1768
	ctx.r6.s64 = ctx.r11.s64 + 1768;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fctiwz f13,f0
	ctx.f13.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f0.f64));
	// stfiwx f13,r7,r6
	PPC_STORE_U32(ctx.r7.u32 + ctx.r6.u32, ctx.f13.u32);
	// bl 0x829fdf38
	ctx.lr = 0x829FED30;
	sub_829FDF38(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
loc_829FED3C:
	// rlwinm r10,r31,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// lis r11,-31964
	ctx.r11.s64 = -2094792704;
	// add r10,r31,r10
	ctx.r10.u64 = ctx.r31.u64 + ctx.r10.u64;
	// addi r30,r11,29312
	ctx.r30.s64 = ctx.r11.s64 + 29312;
	// rlwinm r29,r10,6,0,25
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 6) & 0xFFFFFFC0;
	// addi r9,r30,1772
	ctx.r9.s64 = ctx.r30.s64 + 1772;
	// lwzx r8,r29,r9
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r9.u32);
	// cmpwi cr6,r8,1
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 1, ctx.xer);
	// beq cr6,0x829fee10
	if (ctx.cr6.eq) goto loc_829FEE10;
	// addi r11,r30,1840
	ctx.r11.s64 = ctx.r30.s64 + 1840;
	// lwzx r10,r29,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r11.u32);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// beq cr6,0x829fee10
	if (ctx.cr6.eq) goto loc_829FEE10;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lfs f0,-27880(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -27880);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// blt cr6,0x829fee10
	if (ctx.cr6.lt) goto loc_829FEE10;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lfs f0,-23728(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -23728);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bgt cr6,0x829fee10
	if (ctx.cr6.gt) goto loc_829FEE10;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// fmr f2,f1
	ctx.f2.f64 = ctx.f1.f64;
	// lfd f1,11528(r11)
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r11.u32 + 11528);
	// bl 0x82fa30a8
	ctx.lr = 0x829FEDA0;
	sub_82FA30A8(ctx, base);
	// frsp f13,f1
	ctx.fpscr.disableFlushMode();
	ctx.f13.f64 = double(float(ctx.f1.f64));
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// rlwinm r10,r31,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 1) & 0xFFFFFFFE;
	// addi r8,r30,1772
	ctx.r8.s64 = ctx.r30.s64 + 1772;
	// add r7,r31,r10
	ctx.r7.u64 = ctx.r31.u64 + ctx.r10.u64;
	// addi r11,r30,1748
	ctx.r11.s64 = ctx.r30.s64 + 1748;
	// lfs f0,-28052(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -28052);
	ctx.f0.f64 = double(temp.f32);
	// rlwinm r10,r7,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r6,r28,-6
	ctx.r6.s64 = ctx.r28.s64 + -6;
	// add r5,r10,r28
	ctx.r5.u64 = ctx.r10.u64 + ctx.r28.u64;
	// li r4,2
	ctx.r4.s64 = 2;
	// rlwinm r3,r5,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// fmuls f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// slw r10,r4,r6
	ctx.r10.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r4.u32 << (ctx.r6.u8 & 0x3F));
	// fctiwz f11,f12
	ctx.f11.s64 = (ctx.f12.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f12.f64));
	// stfiwx f11,r3,r8
	PPC_STORE_U32(ctx.r3.u32 + ctx.r8.u32, ctx.f11.u32);
	// lwzx r9,r29,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r11.u32);
	// or r8,r10,r9
	ctx.r8.u64 = ctx.r10.u64 | ctx.r9.u64;
	// stwx r8,r29,r11
	PPC_STORE_U32(ctx.r29.u32 + ctx.r11.u32, ctx.r8.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x829fdf38
	ctx.lr = 0x829FEDF4;
	sub_829FDF38(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
loc_829FEE00:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a09160
	ctx.lr = 0x829FEE08;
	sub_82A09160(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
loc_829FEE10:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_829FEE20"))) PPC_WEAK_FUNC(sub_829FEE20);
PPC_FUNC_IMPL(__imp__sub_829FEE20) {
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
	// cmpwi cr6,r4,2
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 2, ctx.xer);
	// bge cr6,0x829fef2c
	if (!ctx.cr6.lt) goto loc_829FEF2C;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x829fef2c
	if (!ctx.cr6.eq) goto loc_829FEF2C;
	// lis r11,-31964
	ctx.r11.s64 = -2094792704;
	// lwz r11,29308(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 29308);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x829fee64
	if (!ctx.cr6.eq) goto loc_829FEE64;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,65535
	ctx.r3.u64 = ctx.r3.u64 | 65535;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_829FEE64:
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x829fef2c
	if (ctx.cr6.eq) goto loc_829FEF2C;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lfs f0,8(r5)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,-23500(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -23500);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// blt cr6,0x829fef2c
	if (ctx.cr6.lt) goto loc_829FEF2C;
	// lis r11,-32233
	ctx.r11.s64 = -2112421888;
	// lfs f13,24436(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 24436);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x829fef2c
	if (ctx.cr6.gt) goto loc_829FEF2C;
	// lfs f0,12(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f12
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// blt cr6,0x829fef2c
	if (ctx.cr6.lt) goto loc_829FEF2C;
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x829fef2c
	if (ctx.cr6.gt) goto loc_829FEF2C;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lfs f13,0(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// rlwinm r11,r4,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 1) & 0xFFFFFFFE;
	// lis r9,-31964
	ctx.r9.s64 = -2094792704;
	// add r8,r4,r11
	ctx.r8.u64 = ctx.r4.u64 + ctx.r11.u64;
	// addi r11,r9,29312
	ctx.r11.s64 = ctx.r9.s64 + 29312;
	// lfs f0,-28052(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -28052);
	ctx.f0.f64 = double(temp.f32);
	// rlwinm r7,r8,6,0,25
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 6) & 0xFFFFFFC0;
	// fmuls f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// addi r6,r11,1780
	ctx.r6.s64 = ctx.r11.s64 + 1780;
	// addi r10,r11,1784
	ctx.r10.s64 = ctx.r11.s64 + 1784;
	// addi r9,r11,1788
	ctx.r9.s64 = ctx.r11.s64 + 1788;
	// addi r8,r11,1792
	ctx.r8.s64 = ctx.r11.s64 + 1792;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// fctiwz f11,f12
	ctx.f11.s64 = (ctx.f12.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f12.f64));
	// stfiwx f11,r7,r6
	PPC_STORE_U32(ctx.r7.u32 + ctx.r6.u32, ctx.f11.u32);
	// lfs f10,4(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	ctx.f10.f64 = double(temp.f32);
	// fmuls f9,f10,f0
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f0.f64));
	// fctiwz f8,f9
	ctx.f8.s64 = (ctx.f9.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f9.f64));
	// stfiwx f8,r7,r10
	PPC_STORE_U32(ctx.r7.u32 + ctx.r10.u32, ctx.f8.u32);
	// lfs f7,8(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f6,f7,f0
	ctx.f6.f64 = double(float(ctx.f7.f64 * ctx.f0.f64));
	// fctiwz f5,f6
	ctx.f5.s64 = (ctx.f6.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f6.f64));
	// stfiwx f5,r7,r9
	PPC_STORE_U32(ctx.r7.u32 + ctx.r9.u32, ctx.f5.u32);
	// lfs f4,12(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 12);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f3,f4,f0
	ctx.f3.f64 = double(float(ctx.f4.f64 * ctx.f0.f64));
	// fctiwz f2,f3
	ctx.f2.s64 = (ctx.f3.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f3.f64));
	// stfiwx f2,r7,r8
	PPC_STORE_U32(ctx.r7.u32 + ctx.r8.u32, ctx.f2.u32);
	// bl 0x829fdf38
	ctx.lr = 0x829FEF18;
	sub_829FDF38(ctx, base);
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
loc_829FEF2C:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_829FEF44"))) PPC_WEAK_FUNC(sub_829FEF44);
PPC_FUNC_IMPL(__imp__sub_829FEF44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_829FEF48"))) PPC_WEAK_FUNC(sub_829FEF48);
PPC_FUNC_IMPL(__imp__sub_829FEF48) {
	PPC_FUNC_PROLOGUE();
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x829fe378
	sub_829FE378(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_829FEF58"))) PPC_WEAK_FUNC(sub_829FEF58);
PPC_FUNC_IMPL(__imp__sub_829FEF58) {
	PPC_FUNC_PROLOGUE();
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x829febc0
	sub_829FEBC0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_829FEF64"))) PPC_WEAK_FUNC(sub_829FEF64);
PPC_FUNC_IMPL(__imp__sub_829FEF64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_829FEF68"))) PPC_WEAK_FUNC(sub_829FEF68);
PPC_FUNC_IMPL(__imp__sub_829FEF68) {
	PPC_FUNC_PROLOGUE();
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x829fee20
	sub_829FEE20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_829FEF74"))) PPC_WEAK_FUNC(sub_829FEF74);
PPC_FUNC_IMPL(__imp__sub_829FEF74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_829FEF78"))) PPC_WEAK_FUNC(sub_829FEF78);
PPC_FUNC_IMPL(__imp__sub_829FEF78) {
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
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// extsw r9,r11
	ctx.r9.s64 = ctx.r11.s32;
	// extsw r8,r10
	ctx.r8.s64 = ctx.r10.s32;
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f1,f0
	ctx.f1.f64 = double(ctx.f0.s64);
	// fcfid f2,f13
	ctx.f2.f64 = double(ctx.f13.s64);
	// bl 0x82fa3a88
	ctx.lr = 0x829FEFB0;
	sub_82FA3A88(ctx, base);
	// frsp f1,f1
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f1.f64));
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_829FEFC4"))) PPC_WEAK_FUNC(sub_829FEFC4);
PPC_FUNC_IMPL(__imp__sub_829FEFC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_829FEFC8"))) PPC_WEAK_FUNC(sub_829FEFC8);
PPC_FUNC_IMPL(__imp__sub_829FEFC8) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31964
	ctx.r10.s64 = -2094792704;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r5,r10,28720
	ctx.r5.s64 = ctx.r10.s64 + 28720;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,1
	ctx.r9.s64 = 1;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r11,44(r5)
	PPC_STORE_U32(ctx.r5.u32 + 44, ctx.r11.u32);
	// stw r10,40(r5)
	PPC_STORE_U32(ctx.r5.u32 + 40, ctx.r10.u32);
	// stw r9,68(r5)
	PPC_STORE_U32(ctx.r5.u32 + 68, ctx.r9.u32);
	// stw r8,420(r5)
	PPC_STORE_U32(ctx.r5.u32 + 420, ctx.r8.u32);
	// stw r7,424(r5)
	PPC_STORE_U32(ctx.r5.u32 + 424, ctx.r7.u32);
	// stw r6,428(r5)
	PPC_STORE_U32(ctx.r5.u32 + 428, ctx.r6.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_829FF004"))) PPC_WEAK_FUNC(sub_829FF004);
PPC_FUNC_IMPL(__imp__sub_829FF004) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_829FF008"))) PPC_WEAK_FUNC(sub_829FF008);
PPC_FUNC_IMPL(__imp__sub_829FF008) {
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
	// cmplwi cr6,r3,25
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 25, ctx.xer);
	// bgt cr6,0x829ff05c
	if (ctx.cr6.gt) goto loc_829FF05C;
	// beq cr6,0x829ff054
	if (ctx.cr6.eq) goto loc_829FF054;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x829ff04c
	if (ctx.cr6.eq) goto loc_829FF04C;
	// cmplwi cr6,r3,5
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 5, ctx.xer);
	// beq cr6,0x829ff044
	if (ctx.cr6.eq) goto loc_829FF044;
	// cmplwi cr6,r3,21
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 21, ctx.xer);
	// bne cr6,0x829ff06c
	if (!ctx.cr6.eq) goto loc_829FF06C;
	// li r31,2
	ctx.r31.s64 = 2;
	// b 0x829ff07c
	goto loc_829FF07C;
loc_829FF044:
	// li r31,8
	ctx.r31.s64 = 8;
	// b 0x829ff07c
	goto loc_829FF07C;
loc_829FF04C:
	// li r31,0
	ctx.r31.s64 = 0;
	// b 0x829ff07c
	goto loc_829FF07C;
loc_829FF054:
	// li r31,4
	ctx.r31.s64 = 4;
	// b 0x829ff078
	goto loc_829FF078;
loc_829FF05C:
	// cmplwi cr6,r3,31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 31, ctx.xer);
	// beq cr6,0x829ff0b0
	if (ctx.cr6.eq) goto loc_829FF0B0;
	// cmplwi cr6,r3,995
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 995, ctx.xer);
	// beq cr6,0x829ff0a8
	if (ctx.cr6.eq) goto loc_829FF0A8;
loc_829FF06C:
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,4
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 4, ctx.xer);
	// bne cr6,0x829ff07c
	if (!ctx.cr6.eq) goto loc_829FF07C;
loc_829FF078:
	// bl 0x83178cf4
	ctx.lr = 0x829FF07C;
	__imp__XamNuiCameraElevationStopMovement(ctx, base);
loc_829FF07C:
	// lis r11,-31964
	ctx.r11.s64 = -2094792704;
	// addi r11,r11,28720
	ctx.r11.s64 = ctx.r11.s64 + 28720;
	// lwz r10,416(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 416);
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// bgt cr6,0x829ff110
	if (ctx.cr6.gt) goto loc_829FF110;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x829ff0e0
	if (ctx.cr6.eq) goto loc_829FF0E0;
	// bdz 0x829ff0b8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_829FF0B8;
	// bdz 0x829ff0e8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_829FF0E8;
	// b 0x829ff0e8
	goto loc_829FF0E8;
loc_829FF0A8:
	// li r31,7
	ctx.r31.s64 = 7;
	// b 0x829ff07c
	goto loc_829FF07C;
loc_829FF0B0:
	// li r31,5
	ctx.r31.s64 = 5;
	// b 0x829ff07c
	goto loc_829FF07C;
loc_829FF0B8:
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// lfs f0,396(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 396);
	ctx.f0.f64 = double(temp.f32);
	// lis r3,2
	ctx.r3.s64 = 131072;
	// stw r31,112(r11)
	PPC_STORE_U32(ctx.r11.u32 + 112, ctx.r31.u32);
	// addi r4,r11,112
	ctx.r4.s64 = ctx.r11.s64 + 112;
	// ori r3,r3,45068
	ctx.r3.u64 = ctx.r3.u64 | 45068;
	// lfs f13,-23580(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -23580);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfs f0,128(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 128, temp.u32);
	// b 0x829ff10c
	goto loc_829FF10C;
loc_829FF0E0:
	// cmplwi cr6,r31,3
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 3, ctx.xer);
	// bne cr6,0x829ff110
	if (!ctx.cr6.eq) goto loc_829FF110;
loc_829FF0E8:
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// lfs f0,396(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 396);
	ctx.f0.f64 = double(temp.f32);
	// lis r3,2
	ctx.r3.s64 = 131072;
	// stw r31,96(r11)
	PPC_STORE_U32(ctx.r11.u32 + 96, ctx.r31.u32);
	// addi r4,r11,96
	ctx.r4.s64 = ctx.r11.s64 + 96;
	// ori r3,r3,45062
	ctx.r3.u64 = ctx.r3.u64 | 45062;
	// lfs f13,-23580(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -23580);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfs f0,108(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 108, temp.u32);
loc_829FF10C:
	// bl 0x83178ce4
	ctx.lr = 0x829FF110;
	__imp__XamNuiCameraTiltReportStatus(ctx, base);
loc_829FF110:
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

__attribute__((alias("__imp__sub_829FF124"))) PPC_WEAK_FUNC(sub_829FF124);
PPC_FUNC_IMPL(__imp__sub_829FF124) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_829FF128"))) PPC_WEAK_FUNC(sub_829FF128);
PPC_FUNC_IMPL(__imp__sub_829FF128) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x829FF130;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31964
	ctx.r11.s64 = -2094792704;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r31,r11,28720
	ctx.r31.s64 = ctx.r11.s64 + 28720;
	// addi r3,r31,36
	ctx.r3.s64 = ctx.r31.s64 + 36;
	// bl 0x83179274
	ctx.lr = 0x829FF148;
	__imp__KfAcquireSpinLock(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// lwz r30,496(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 496);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r11,496(r31)
	PPC_STORE_U32(ctx.r31.u32 + 496, ctx.r11.u32);
	// addi r3,r31,36
	ctx.r3.s64 = ctx.r31.s64 + 36;
	// bl 0x83179294
	ctx.lr = 0x829FF160;
	__imp__KfReleaseSpinLock(ctx, base);
	// lwz r11,92(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// lwz r10,408(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 408);
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// extsw r10,r10
	ctx.r10.s64 = ctx.r10.s32;
	// stw r11,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r11.u32);
	// std r10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r10.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f2,f0
	ctx.f2.f64 = double(ctx.f0.s64);
	// lwz r10,412(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 412);
	// extsw r9,r10
	ctx.r9.s64 = ctx.r10.s32;
	// std r9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r9.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f1,f13
	ctx.f1.f64 = double(ctx.f13.s64);
	// bl 0x82fa3a88
	ctx.lr = 0x829FF19C;
	sub_82FA3A88(ctx, base);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// frsp f1,f1
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = double(float(ctx.f1.f64));
	// addi r5,r31,384
	ctx.r5.s64 = ctx.r31.s64 + 384;
	// addi r4,r31,384
	ctx.r4.s64 = ctx.r31.s64 + 384;
	// li r3,0
	ctx.r3.s64 = 0;
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// lfs f2,5184(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 5184);
	ctx.f2.f64 = double(temp.f32);
	// bl 0x82a3de08
	ctx.lr = 0x829FF1C0;
	sub_82A3DE08(ctx, base);
	// lwz r11,464(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 464);
	// rlwinm r6,r11,0,26,26
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// bne cr6,0x829ff1e0
	if (!ctx.cr6.eq) goto loc_829FF1E0;
	// bl 0x82a78340
	ctx.lr = 0x829FF1D4;
	sub_82A78340(ctx, base);
	// lfs f0,28(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,32(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 32, temp.u32);
	// stw r3,424(r31)
	PPC_STORE_U32(ctx.r31.u32 + 424, ctx.r3.u32);
loc_829FF1E0:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x829ff23c
	if (ctx.cr6.eq) goto loc_829FF23C;
	// cmplwi cr6,r29,1223
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 1223, ctx.xer);
	// beq cr6,0x829ff1f8
	if (ctx.cr6.eq) goto loc_829FF1F8;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
loc_829FF1F8:
	// lwz r3,12(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// lwz r31,16(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// stw r29,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r29.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x829ff218
	if (ctx.cr6.eq) goto loc_829FF218;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x829ff218
	if (ctx.cr6.eq) goto loc_829FF218;
	// bl 0x82a776a8
	ctx.lr = 0x829FF218;
	sub_82A776A8(ctx, base);
loc_829FF218:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x829ff234
	if (ctx.cr6.eq) goto loc_829FF234;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mtctr r31
	ctx.ctr.u64 = ctx.r31.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bctrl 
	ctx.lr = 0x829FF234;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_829FF234:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x829ff008
	ctx.lr = 0x829FF23C;
	sub_829FF008(ctx, base);
loc_829FF23C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_829FF244"))) PPC_WEAK_FUNC(sub_829FF244);
PPC_FUNC_IMPL(__imp__sub_829FF244) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_829FF248"))) PPC_WEAK_FUNC(sub_829FF248);
PPC_FUNC_IMPL(__imp__sub_829FF248) {
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
	// addi r31,r11,28720
	ctx.r31.s64 = ctx.r11.s64 + 28720;
	// addi r3,r31,36
	ctx.r3.s64 = ctx.r31.s64 + 36;
	// bl 0x83179274
	ctx.lr = 0x829FF268;
	__imp__KfAcquireSpinLock(ctx, base);
	// li r11,7
	ctx.r11.s64 = 7;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r10,380(r31)
	PPC_STORE_U32(ctx.r31.u32 + 380, ctx.r10.u32);
	// addi r3,r31,36
	ctx.r3.s64 = ctx.r31.s64 + 36;
	// bl 0x83179294
	ctx.lr = 0x829FF284;
	__imp__KfReleaseSpinLock(ctx, base);
	// li r3,1223
	ctx.r3.s64 = 1223;
	// bl 0x829ff128
	ctx.lr = 0x829FF28C;
	sub_829FF128(ctx, base);
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

__attribute__((alias("__imp__sub_829FF2A0"))) PPC_WEAK_FUNC(sub_829FF2A0);
PPC_FUNC_IMPL(__imp__sub_829FF2A0) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31964
	ctx.r10.s64 = -2094792704;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,28720
	ctx.r9.s64 = ctx.r10.s64 + 28720;
	// li r3,1223
	ctx.r3.s64 = 1223;
	// stw r11,80(r9)
	PPC_STORE_U32(ctx.r9.u32 + 80, ctx.r11.u32);
	// b 0x829ff128
	sub_829FF128(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_829FF2B8"))) PPC_WEAK_FUNC(sub_829FF2B8);
PPC_FUNC_IMPL(__imp__sub_829FF2B8) {
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
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x829ff2e4
	if (!ctx.cr6.eq) goto loc_829FF2E4;
loc_829FF2CC:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
loc_829FF2E4:
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x829ff2cc
	if (ctx.cr6.eq) goto loc_829FF2CC;
	// bl 0x83178d04
	ctx.lr = 0x829FF2F0;
	__imp__XamNuiCameraElevationGetAngle(ctx, base);
	// lis r11,4096
	ctx.r11.s64 = 268435456;
	// subf r10,r3,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r3.s64;
	// subfic r9,r10,0
	ctx.xer.ca = ctx.r10.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r10.s64;
	// subfe r7,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r7.u64 = ~ctx.r8.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r3,r7,r3
	ctx.r3.u64 = ctx.r7.u64 & ctx.r3.u64;
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_829FF314"))) PPC_WEAK_FUNC(sub_829FF314);
PPC_FUNC_IMPL(__imp__sub_829FF314) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_829FF318"))) PPC_WEAK_FUNC(sub_829FF318);
PPC_FUNC_IMPL(__imp__sub_829FF318) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,27
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 27, ctx.xer);
	// bgt cr6,0x829ff380
	if (ctx.cr6.gt) goto loc_829FF380;
	// cmpwi cr6,r3,-27
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -27, ctx.xer);
	// blt cr6,0x829ff380
	if (ctx.cr6.lt) goto loc_829FF380;
	// bl 0x82a78340
	ctx.lr = 0x829FF340;
	sub_82A78340(ctx, base);
	// lis r10,-31964
	ctx.r10.s64 = -2094792704;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// addi r9,r10,28720
	ctx.r9.s64 = ctx.r10.s64 + 28720;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,420(r9)
	PPC_STORE_U32(ctx.r9.u32 + 420, ctx.r11.u32);
	// bl 0x83178d14
	ctx.lr = 0x829FF358;
	__imp__XamNuiCameraElevationSetAngle(ctx, base);
	// lis r8,4096
	ctx.r8.s64 = 268435456;
	// subf r7,r3,r8
	ctx.r7.s64 = ctx.r8.s64 - ctx.r3.s64;
	// subfic r6,r7,0
	ctx.xer.ca = ctx.r7.u32 <= 0;
	ctx.r6.s64 = 0 - ctx.r7.s64;
	// subfe r4,r5,r5
	temp.u8 = (~ctx.r5.u32 + ctx.r5.u32 < ~ctx.r5.u32) | (~ctx.r5.u32 + ctx.r5.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r4.u64 = ~ctx.r5.u64 + ctx.r5.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r3,r4,r3
	ctx.r3.u64 = ctx.r4.u64 & ctx.r3.u64;
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
loc_829FF380:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
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

__attribute__((alias("__imp__sub_829FF39C"))) PPC_WEAK_FUNC(sub_829FF39C);
PPC_FUNC_IMPL(__imp__sub_829FF39C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_829FF3A0"))) PPC_WEAK_FUNC(sub_829FF3A0);
PPC_FUNC_IMPL(__imp__sub_829FF3A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-31964
	ctx.r11.s64 = -2094792704;
	// addi r10,r11,28720
	ctx.r10.s64 = ctx.r11.s64 + 28720;
	// lwz r11,380(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 380);
	// clrlwi r9,r11,30
	ctx.r9.u64 = ctx.r11.u32 & 0x3;
	// addic r8,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r8.s64 = ctx.r9.s64 + -1;
	// subfe r3,r8,r9
	temp.u8 = (~ctx.r8.u32 + ctx.r9.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r8.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_829FF3BC"))) PPC_WEAK_FUNC(sub_829FF3BC);
PPC_FUNC_IMPL(__imp__sub_829FF3BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_829FF3C0"))) PPC_WEAK_FUNC(sub_829FF3C0);
PPC_FUNC_IMPL(__imp__sub_829FF3C0) {
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
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r3,4101
	ctx.r3.s64 = 4101;
	// bl 0x83178d24
	ctx.lr = 0x829FF3E0;
	__imp__XamXStudioRequest(ctx, base);
	// lis r11,-32761
	ctx.r11.s64 = -2147024896;
	// ori r10,r11,87
	ctx.r10.u64 = ctx.r11.u64 | 87;
	// cmpw cr6,r3,r10
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r10.s32, ctx.xer);
	// bne cr6,0x829ff3f8
	if (!ctx.cr6.eq) goto loc_829FF3F8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83178cd4
	ctx.lr = 0x829FF3F8;
	__imp__XamNuiCameraTiltGetStatus(ctx, base);
loc_829FF3F8:
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

__attribute__((alias("__imp__sub_829FF40C"))) PPC_WEAK_FUNC(sub_829FF40C);
PPC_FUNC_IMPL(__imp__sub_829FF40C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_829FF410"))) PPC_WEAK_FUNC(sub_829FF410);
PPC_FUNC_IMPL(__imp__sub_829FF410) {
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
	// lis r11,-31964
	ctx.r11.s64 = -2094792704;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r31,r11,28720
	ctx.r31.s64 = ctx.r11.s64 + 28720;
	// lfs f0,5184(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5184);
	ctx.f0.f64 = double(temp.f32);
	// lfs f12,396(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 396);
	ctx.f12.f64 = double(temp.f32);
	// fcmpu cr6,f12,f0
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// beq cr6,0x829ff510
	if (ctx.cr6.eq) goto loc_829FF510;
	// lwz r11,416(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 416);
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// beq cr6,0x829ff4c0
	if (ctx.cr6.eq) goto loc_829FF4C0;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lfs f13,440(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 440);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,18796(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 18796);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x829ff46c
	if (!ctx.cr6.lt) goto loc_829FF46C;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lfs f13,-27844(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -27844);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,440(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 440, temp.u32);
loc_829FF46C:
	// lfs f0,28(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// fadds f13,f0,f13
	ctx.f13.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// lfs f0,-27848(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -27848);
	ctx.f0.f64 = double(temp.f32);
	// fsubs f12,f13,f12
	ctx.f12.f64 = double(float(ctx.f13.f64 - ctx.f12.f64));
	// fmuls f1,f12,f0
	ctx.f1.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// bl 0x82fa39a0
	ctx.lr = 0x829FF488;
	sub_82FA39A0(ctx, base);
	// frsp f11,f1
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = double(float(ctx.f1.f64));
	// lis r10,-32254
	ctx.r10.s64 = -2113798144;
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// lis r8,-32256
	ctx.r8.s64 = -2113929216;
	// lfs f0,-3432(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -3432);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,-27852(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -27852);
	ctx.f13.f64 = double(temp.f32);
	// lfd f12,22496(r8)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r8.u32 + 22496);
	// fmsubs f10,f11,f0,f13
	ctx.f10.f64 = double(float(ctx.f11.f64 * ctx.f0.f64 - ctx.f13.f64));
	// fadd f1,f10,f12
	ctx.f1.f64 = ctx.f10.f64 + ctx.f12.f64;
	// bl 0x82fa7560
	ctx.lr = 0x829FF4B0;
	sub_82FA7560(ctx, base);
	// fctiwz f9,f1
	ctx.fpscr.disableFlushMode();
	ctx.f9.s64 = (ctx.f1.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f1.f64));
	// stfd f9,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f9.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// b 0x829ff550
	goto loc_829FF550;
loc_829FF4C0:
	// lwz r11,444(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 444);
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lis r9,-32254
	ctx.r9.s64 = -2113798144;
	// extsw r8,r11
	ctx.r8.s64 = ctx.r11.s32;
	// std r8,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r8.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// lfs f0,-27852(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -27852);
	ctx.f0.f64 = double(temp.f32);
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// lfs f13,-19520(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -19520);
	ctx.f13.f64 = double(temp.f32);
	// fadds f11,f12,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 + ctx.f0.f64));
	// fmuls f1,f11,f13
	ctx.f1.f64 = double(float(ctx.f11.f64 * ctx.f13.f64));
	// bl 0x82fa7118
	ctx.lr = 0x829FF4F4;
	sub_82FA7118(ctx, base);
	// frsp f10,f1
	ctx.fpscr.disableFlushMode();
	ctx.f10.f64 = double(float(ctx.f1.f64));
	// lis r7,-32250
	ctx.r7.s64 = -2113536000;
	// lfs f13,396(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 396);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,-27856(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -27856);
	ctx.f0.f64 = double(temp.f32);
	// fmadds f0,f10,f0,f13
	ctx.f0.f64 = double(float(ctx.f10.f64 * ctx.f0.f64 + ctx.f13.f64));
	// stfs f0,104(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 104, temp.u32);
	// b 0x829ff570
	goto loc_829FF570;
loc_829FF510:
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lfs f1,28(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	ctx.f1.f64 = double(temp.f32);
	// lwz r30,444(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 444);
	// lfd f2,-27864(r11)
	ctx.f2.u64 = PPC_LOAD_U64(ctx.r11.u32 + -27864);
	// bl 0x82fa3a88
	ctx.lr = 0x829FF524;
	sub_82FA3A88(ctx, base);
	// frsp f12,f1
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f1.f64));
	// lis r10,-32255
	ctx.r10.s64 = -2113863680;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lfd f0,9440(r10)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r10.u32 + 9440);
	// lfd f13,22496(r9)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r9.u32 + 22496);
	// fmadd f1,f12,f0,f13
	ctx.f1.f64 = ctx.f12.f64 * ctx.f0.f64 + ctx.f13.f64;
	// bl 0x82fa7560
	ctx.lr = 0x829FF540;
	sub_82FA7560(ctx, base);
	// fctiwz f11,f1
	ctx.fpscr.disableFlushMode();
	ctx.f11.s64 = (ctx.f1.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f1.f64));
	// stfd f11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f11.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
loc_829FF550:
	// cmpwi cr6,r11,27
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 27, ctx.xer);
	// blt cr6,0x829ff560
	if (ctx.cr6.lt) goto loc_829FF560;
	// li r11,27
	ctx.r11.s64 = 27;
	// b 0x829ff56c
	goto loc_829FF56C;
loc_829FF560:
	// cmpwi cr6,r11,-27
	ctx.cr6.compare<int32_t>(ctx.r11.s32, -27, ctx.xer);
	// bgt cr6,0x829ff56c
	if (ctx.cr6.gt) goto loc_829FF56C;
	// li r11,-27
	ctx.r11.s64 = -27;
loc_829FF56C:
	// stw r11,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r11.u32);
loc_829FF570:
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

__attribute__((alias("__imp__sub_829FF588"))) PPC_WEAK_FUNC(sub_829FF588);
PPC_FUNC_IMPL(__imp__sub_829FF588) {
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
	// lis r11,-31964
	ctx.r11.s64 = -2094792704;
	// li r10,7
	ctx.r10.s64 = 7;
	// addi r31,r11,28720
	ctx.r31.s64 = ctx.r11.s64 + 28720;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r11,r31,432
	ctx.r11.s64 = ctx.r31.s64 + 432;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_829FF5B0:
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x829ff5b0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_829FF5B0;
	// sth r9,80(r1)
	PPC_STORE_U16(ctx.r1.u32 + 80, ctx.r9.u16);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// li r6,28
	ctx.r6.s64 = 28;
	// addi r5,r31,436
	ctx.r5.s64 = ctx.r31.s64 + 436;
	// li r4,9
	ctx.r4.s64 = 9;
	// li r3,7
	ctx.r3.s64 = 7;
	// bl 0x831794b4
	ctx.lr = 0x829FF5D4;
	__imp__ExGetXConfigSetting(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x829ff600
	if (!ctx.cr6.eq) goto loc_829FF600;
	// lwz r11,464(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 464);
	// rlwinm r11,r11,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x829ff600
	if (!ctx.cr6.eq) goto loc_829FF600;
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lfs f0,440(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 440);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,18796(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 18796);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x829ff60c
	if (!ctx.cr6.lt) goto loc_829FF60C;
loc_829FF600:
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lfs f0,-27844(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -27844);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,440(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 440, temp.u32);
loc_829FF60C:
	// stfs f0,104(r31)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 104, temp.u32);
	// bl 0x829ff410
	ctx.lr = 0x829FF614;
	sub_829FF410(ctx, base);
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

__attribute__((alias("__imp__sub_829FF628"))) PPC_WEAK_FUNC(sub_829FF628);
PPC_FUNC_IMPL(__imp__sub_829FF628) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r9,0(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// extsw r8,r11
	ctx.r8.s64 = ctx.r11.s32;
	// lwz r7,4(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// extsw r6,r9
	ctx.r6.s64 = ctx.r9.s32;
	// std r8,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r8.u64);
	// lfd f13,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// std r6,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r6.u64);
	// lfd f12,-16(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// extsw r5,r7
	ctx.r5.s64 = ctx.r7.s32;
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// std r5,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r5.u64);
	// lfd f11,-16(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f0,f11
	ctx.f0.f64 = double(ctx.f11.s64);
	// lfd f10,22472(r10)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r10.u32 + 22472);
	// fmul f9,f0,f0
	ctx.f9.f64 = ctx.f0.f64 * ctx.f0.f64;
	// fcfid f12,f12
	ctx.f12.f64 = double(ctx.f12.s64);
	// fmadd f8,f13,f13,f9
	ctx.f8.f64 = ctx.f13.f64 * ctx.f13.f64 + ctx.f9.f64;
	// fmadd f7,f12,f12,f8
	ctx.f7.f64 = ctx.f12.f64 * ctx.f12.f64 + ctx.f8.f64;
	// fsqrt f11,f7
	ctx.f11.f64 = sqrt(ctx.f7.f64);
	// fcmpu cr6,f11,f10
	ctx.cr6.compare(ctx.f11.f64, ctx.f10.f64);
	// beq cr6,0x829ff6d0
	if (ctx.cr6.eq) goto loc_829FF6D0;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// addi r9,r1,-16
	ctx.r9.s64 = ctx.r1.s64 + -16;
	// lfd f10,22528(r11)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r11.u32 + 22528);
	// fdiv f10,f10,f11
	ctx.f10.f64 = ctx.f10.f64 / ctx.f11.f64;
	// lfs f11,5184(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5184);
	ctx.f11.f64 = double(temp.f32);
	// stfs f11,-4(r1)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r1.u32 + -4, temp.u32);
	// fmul f9,f10,f12
	ctx.f9.f64 = ctx.f10.f64 * ctx.f12.f64;
	// fmul f8,f10,f0
	ctx.f8.f64 = ctx.f10.f64 * ctx.f0.f64;
	// fmul f7,f10,f13
	ctx.f7.f64 = ctx.f10.f64 * ctx.f13.f64;
	// frsp f6,f9
	ctx.f6.f64 = double(float(ctx.f9.f64));
	// frsp f5,f8
	ctx.f5.f64 = double(float(ctx.f8.f64));
	// stfs f5,-12(r1)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r1.u32 + -12, temp.u32);
	// frsp f4,f7
	ctx.f4.f64 = double(float(ctx.f7.f64));
	// stfs f4,-8(r1)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r1.u32 + -8, temp.u32);
	// fneg f3,f6
	ctx.f3.u64 = ctx.f6.u64 ^ 0x8000000000000000;
	// stfs f3,-16(r1)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r1.u32 + -16, temp.u32);
	// lvx128 v1,r0,r9
	simd::store_shuffled(ctx.v1, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// blr 
	return;
loc_829FF6D0:
	// vspltisw v1,0
	_mm_store_si128((__m128i*)ctx.v1.u32, _mm_set1_epi32(int(0x0)));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_829FF6D8"))) PPC_WEAK_FUNC(sub_829FF6D8);
PPC_FUNC_IMPL(__imp__sub_829FF6D8) {
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
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,12(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f13.f64 = double(temp.f32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lfs f0,5184(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5184);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// beq cr6,0x829ff734
	if (ctx.cr6.eq) goto loc_829FF734;
	// lis r11,-31964
	ctx.r11.s64 = -2094792704;
	// addi r11,r11,28720
	ctx.r11.s64 = ctx.r11.s64 + 28720;
	// addi r3,r11,368
	ctx.r3.s64 = ctx.r11.s64 + 368;
	// bl 0x829ff628
	ctx.lr = 0x829FF70C;
	sub_829FF628(ctx, base);
	// lvx128 v63,r0,r4
	simd::store_shuffled(ctx.v63, simd::load_and_shuffle(base + ((ctx.r4.u32) & ~0xF), VectorMaskL));
	// vmsum3fp128 v62,v63,v1
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v62.f32, _mm_dp_ps(_mm_load_ps(ctx.v63.f32), _mm_load_ps(ctx.v1.f32), 0xEF));
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// li r3,1
	ctx.r3.s64 = 1;
	// lfs f0,-27840(r9)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -27840);
	ctx.f0.f64 = double(temp.f32);
	// stvx128 v62,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v62.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lfs f13,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// bge cr6,0x829ff738
	if (!ctx.cr6.lt) goto loc_829FF738;
loc_829FF734:
	// li r3,0
	ctx.r3.s64 = 0;
loc_829FF738:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_829FF748"))) PPC_WEAK_FUNC(sub_829FF748);
PPC_FUNC_IMPL(__imp__sub_829FF748) {
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
	// lis r11,-31964
	ctx.r11.s64 = -2094792704;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r31,r11,28720
	ctx.r31.s64 = ctx.r11.s64 + 28720;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,60
	ctx.r8.s64 = 60;
	// lwz r11,380(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 380);
	// stw r10,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r10.u32);
	// rlwinm r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	// stw r9,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r9.u32);
	// stw r8,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r8.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x829ff7a8
	if (!ctx.cr6.eq) goto loc_829FF7A8;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,396(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 396);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,5184(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5184);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bne cr6,0x829ff7c4
	if (!ctx.cr6.eq) goto loc_829FF7C4;
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x829ff7c4
	if (!ctx.cr6.eq) goto loc_829FF7C4;
loc_829FF7A8:
	// bl 0x82a78340
	ctx.lr = 0x829FF7AC;
	sub_82A78340(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r3,-25
	ctx.r3.s64 = -25;
	// stw r11,420(r31)
	PPC_STORE_U32(ctx.r31.u32 + 420, ctx.r11.u32);
	// bl 0x83178d14
	ctx.lr = 0x829FF7BC;
	__imp__XamNuiCameraElevationSetAngle(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
loc_829FF7C4:
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

__attribute__((alias("__imp__sub_829FF7D8"))) PPC_WEAK_FUNC(sub_829FF7D8);
PPC_FUNC_IMPL(__imp__sub_829FF7D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x829FF7E0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31964
	ctx.r10.s64 = -2094792704;
	// lis r11,-31964
	ctx.r11.s64 = -2094792704;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r29,r11,29248
	ctx.r29.s64 = ctx.r11.s64 + 29248;
	// lwz r11,29264(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 29264);
	// clrlwi r9,r11,31
	ctx.r9.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x829ff818
	if (!ctx.cr6.eq) goto loc_829FF818;
	// vspltisw128 v61,0
	_mm_store_si128((__m128i*)ctx.v61.u32, _mm_set1_epi32(int(0x0)));
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stw r11,29264(r10)
	PPC_STORE_U32(ctx.r10.u32 + 29264, ctx.r11.u32);
	// stvx128 v61,r0,r29
	_mm_store_si128((__m128i*)(base + ((ctx.r29.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v61.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// b 0x829ff81c
	goto loc_829FF81C;
loc_829FF818:
	// lvx128 v61,r0,r29
	simd::store_shuffled(ctx.v61, simd::load_and_shuffle(base + ((ctx.r29.u32) & ~0xF), VectorMaskL));
loc_829FF81C:
	// lis r11,-31964
	ctx.r11.s64 = -2094792704;
	// addi r31,r11,28720
	ctx.r31.s64 = ctx.r11.s64 + 28720;
	// lwz r11,380(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 380);
	// clrlwi r10,r11,30
	ctx.r10.u64 = ctx.r11.u32 & 0x3;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x829ff8e4
	if (ctx.cr6.eq) goto loc_829FF8E4;
	// rlwinm r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x829ff9a4
	if (ctx.cr6.eq) goto loc_829FF9A4;
	// lwz r11,416(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 416);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r10,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r10.u32);
	// stw r9,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r9.u32);
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// stw r8,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r8.u32);
	// bgt cr6,0x829ff9a4
	if (ctx.cr6.gt) goto loc_829FF9A4;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x829ff8b0
	if (ctx.cr6.eq) goto loc_829FF8B0;
	// bdz 0x829ff87c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_829FF87C;
	// bdz 0x829ff8b0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_829FF8B0;
	// b 0x829ff8b0
	goto loc_829FF8B0;
loc_829FF87C:
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// lfs f0,396(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 396);
	ctx.f0.f64 = double(temp.f32);
	// li r11,3
	ctx.r11.s64 = 3;
	// lis r3,2
	ctx.r3.s64 = 131072;
	// stw r11,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r11.u32);
	// addi r4,r31,112
	ctx.r4.s64 = ctx.r31.s64 + 112;
	// ori r3,r3,45068
	ctx.r3.u64 = ctx.r3.u64 | 45068;
	// lfs f13,-23580(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -23580);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfs f0,128(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 128, temp.u32);
	// bl 0x83178ce4
	ctx.lr = 0x829FF8A8;
	__imp__XamNuiCameraTiltReportStatus(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
loc_829FF8B0:
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// lfs f0,396(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 396);
	ctx.f0.f64 = double(temp.f32);
	// li r11,3
	ctx.r11.s64 = 3;
	// lis r3,2
	ctx.r3.s64 = 131072;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// addi r4,r31,96
	ctx.r4.s64 = ctx.r31.s64 + 96;
	// ori r3,r3,45062
	ctx.r3.u64 = ctx.r3.u64 | 45062;
	// lfs f13,-23580(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -23580);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfs f0,108(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 108, temp.u32);
	// bl 0x83178ce4
	ctx.lr = 0x829FF8DC;
	__imp__XamNuiCameraTiltReportStatus(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
loc_829FF8E4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x829ff6d8
	ctx.lr = 0x829FF8EC;
	sub_829FF6D8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x829ff990
	if (ctx.cr6.eq) goto loc_829FF990;
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x829ff920
	if (!ctx.cr6.eq) goto loc_829FF920;
	// lwz r5,48(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// ld r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r30.u32 + 0);
	// ld r4,8(r30)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r30.u32 + 8);
	// bl 0x83178d34
	ctx.lr = 0x829FF910;
	__imp__XamNuiCameraRememberFloor(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
loc_829FF920:
	// lvx128 v63,r0,r30
	simd::store_shuffled(ctx.v63, simd::load_and_shuffle(base + ((ctx.r30.u32) & ~0xF), VectorMaskL));
	// li r11,0
	ctx.r11.s64 = 0;
	// vcmpeqfp128. v62,v63,v61
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v62.f32, _mm_cmpeq_ps(_mm_load_ps(ctx.v63.f32), _mm_load_ps(ctx.v61.f32)));
	ctx.cr6.setFromMask(_mm_load_ps(ctx.v62.f32), 0xF);
	// lis r10,-31964
	ctx.r10.s64 = -2094792704;
	// blt cr6,0x829ff944
	if (ctx.cr6.lt) goto loc_829FF944;
	// stw r11,29232(r10)
	PPC_STORE_U32(ctx.r10.u32 + 29232, ctx.r11.u32);
	// stvx128 v63,r0,r29
	_mm_store_si128((__m128i*)(base + ((ctx.r29.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
loc_829FF944:
	// lwz r11,29232(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 29232);
	// cmplwi cr6,r11,60
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 60, ctx.xer);
	// bge cr6,0x829ff968
	if (!ctx.cr6.lt) goto loc_829FF968;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// lvx128 v63,r0,r30
	simd::store_shuffled(ctx.v63, simd::load_and_shuffle(base + ((ctx.r30.u32) & ~0xF), VectorMaskL));
	// stvx128 v63,r0,r29
	_mm_store_si128((__m128i*)(base + ((ctx.r29.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stw r11,29232(r10)
	PPC_STORE_U32(ctx.r10.u32 + 29232, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
loc_829FF968:
	// lwz r5,48(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// ld r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U64(ctx.r30.u32 + 0);
	// ld r4,8(r30)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r30.u32 + 8);
	// bl 0x83178d34
	ctx.lr = 0x829FF978;
	__imp__XamNuiCameraRememberFloor(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// lvx128 v63,r0,r30
	simd::store_shuffled(ctx.v63, simd::load_and_shuffle(base + ((ctx.r30.u32) & ~0xF), VectorMaskL));
	// stvx128 v63,r0,r29
	_mm_store_si128((__m128i*)(base + ((ctx.r29.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
loc_829FF990:
	// vspltisw128 v63,0
	_mm_store_si128((__m128i*)ctx.v63.u32, _mm_set1_epi32(int(0x0)));
	// lis r10,-31964
	ctx.r10.s64 = -2094792704;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,29232(r10)
	PPC_STORE_U32(ctx.r10.u32 + 29232, ctx.r11.u32);
	// stvx128 v63,r0,r29
	_mm_store_si128((__m128i*)(base + ((ctx.r29.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
loc_829FF9A4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_829FF9AC"))) PPC_WEAK_FUNC(sub_829FF9AC);
PPC_FUNC_IMPL(__imp__sub_829FF9AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_829FF9B0"))) PPC_WEAK_FUNC(sub_829FF9B0);
PPC_FUNC_IMPL(__imp__sub_829FF9B0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7670
	ctx.lr = 0x829FF9B8;
	__savegprlr_26(ctx, base);
	// addi r12,r1,-56
	ctx.r12.s64 = ctx.r1.s64 + -56;
	// bl 0x82fa8d28
	ctx.lr = 0x829FF9C0;
	__savefpr_28(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// fmr f30,f1
	ctx.fpscr.disableFlushMode();
	ctx.f30.f64 = ctx.f1.f64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// fmr f29,f3
	ctx.f29.f64 = ctx.f3.f64;
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// mr r27,r8
	ctx.r27.u64 = ctx.r8.u64;
	// lfs f31,-8020(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -8020);
	ctx.f31.f64 = double(temp.f32);
	// fmuls f28,f2,f31
	ctx.f28.f64 = double(float(ctx.f2.f64 * ctx.f31.f64));
	// bl 0x82a78340
	ctx.lr = 0x829FF9E8;
	sub_82A78340(ctx, base);
	// li r10,6
	ctx.r10.s64 = 6;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_829FFA00:
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x829ffa00
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_829FFA00;
	// lis r11,-31964
	ctx.r11.s64 = -2094792704;
	// addi r31,r11,28720
	ctx.r31.s64 = ctx.r11.s64 + 28720;
	// lwz r11,400(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 400);
	// clrlwi r11,r11,31
	ctx.r11.u64 = ctx.r11.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x829ffa34
	if (ctx.cr6.eq) goto loc_829FFA34;
	// li r3,5
	ctx.r3.s64 = 5;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// addi r12,r1,-56
	ctx.r12.s64 = ctx.r1.s64 + -56;
	// bl 0x82fa8d74
	ctx.lr = 0x829FFA30;
	__restfpr_28(ctx, base);
	// b 0x82fa76c0
	__restgprlr_26(ctx, base);
	return;
loc_829FFA34:
	// addi r4,r1,84
	ctx.r4.s64 = ctx.r1.s64 + 84;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83178d04
	ctx.lr = 0x829FFA40;
	__imp__XamNuiCameraElevationGetAngle(ctx, base);
	// addi r3,r31,36
	ctx.r3.s64 = ctx.r31.s64 + 36;
	// bl 0x83179274
	ctx.lr = 0x829FFA48;
	__imp__KfAcquireSpinLock(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// bne cr6,0x829ffa78
	if (!ctx.cr6.eq) goto loc_829FFA78;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82a77608
	ctx.lr = 0x829FFA68;
	sub_82A77608(ctx, base);
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// stw r3,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r3.u32);
	// stw r11,496(r31)
	PPC_STORE_U32(ctx.r31.u32 + 496, ctx.r11.u32);
	// b 0x829ffa9c
	goto loc_829FFA9C;
loc_829FFA78:
	// stw r27,496(r31)
	PPC_STORE_U32(ctx.r31.u32 + 496, ctx.r27.u32);
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// lwz r3,12(r27)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r27.u32 + 12);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x829ffa9c
	if (ctx.cr6.eq) goto loc_829FFA9C;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x829ffa9c
	if (ctx.cr6.eq) goto loc_829FFA9C;
	// bl 0x82a77b58
	ctx.lr = 0x829FFA98;
	sub_82A77B58(ctx, base);
	// lwz r11,496(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 496);
loc_829FFA9C:
	// fmuls f0,f29,f31
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f29.f64 * ctx.f31.f64));
	// stfs f0,24(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 24, temp.u32);
	// stw r30,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r30.u32);
	// li r11,1
	ctx.r11.s64 = 1;
	// rlwinm r9,r29,0,26,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0x20;
	// fmuls f0,f30,f31
	ctx.f0.f64 = double(float(ctx.f30.f64 * ctx.f31.f64));
	// li r8,997
	ctx.r8.s64 = 997;
	// lwz r10,496(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 496);
	// stfs f28,20(r31)
	temp.f32 = float(ctx.f28.f64);
	PPC_STORE_U32(ctx.r31.u32 + 20, temp.u32);
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// stfs f0,28(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 28, temp.u32);
	// li r30,997
	ctx.r30.s64 = 997;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// stw r8,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r8.u32);
	// beq cr6,0x829ffae0
	if (ctx.cr6.eq) goto loc_829FFAE0;
	// li r11,5
	ctx.r11.s64 = 5;
	// b 0x829ffbc0
	goto loc_829FFBC0;
loc_829FFAE0:
	// lwz r11,380(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 380);
	// lwz r10,436(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 436);
	// rlwinm r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x829ffb14
	if (ctx.cr6.eq) goto loc_829FFB14;
	// rlwinm r11,r10,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x829ffb14
	if (!ctx.cr6.eq) goto loc_829FFB14;
	// stw r28,424(r31)
	PPC_STORE_U32(ctx.r31.u32 + 424, ctx.r28.u32);
	// bl 0x82a78340
	ctx.lr = 0x829FFB08;
	sub_82A78340(ctx, base);
	// stw r3,420(r31)
	PPC_STORE_U32(ctx.r31.u32 + 420, ctx.r3.u32);
loc_829FFB0C:
	// bl 0x829ff748
	ctx.lr = 0x829FFB10;
	sub_829FF748(ctx, base);
	// b 0x829ffbc4
	goto loc_829FFBC4;
loc_829FFB14:
	// rlwinm r11,r29,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0x8;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x829ffb7c
	if (ctx.cr6.eq) goto loc_829FFB7C;
	// stw r29,464(r31)
	PPC_STORE_U32(ctx.r31.u32 + 464, ctx.r29.u32);
	// bl 0x829ff410
	ctx.lr = 0x829FFB28;
	sub_829FF410(ctx, base);
	// lfs f0,28(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,32(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	ctx.f13.f64 = double(temp.f32);
	// lwz r3,100(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bne cr6,0x829ffb70
	if (!ctx.cr6.eq) goto loc_829FFB70;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// subf r9,r11,r3
	ctx.r9.s64 = ctx.r3.s64 - ctx.r11.s64;
	// srawi r8,r9,31
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x7FFFFFFF) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 31;
	// lfd f0,11528(r10)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r10.u32 + 11528);
	// xor r7,r9,r8
	ctx.r7.u64 = ctx.r9.u64 ^ ctx.r8.u64;
	// subf r6,r8,r7
	ctx.r6.s64 = ctx.r7.s64 - ctx.r8.s64;
	// extsw r5,r6
	ctx.r5.s64 = ctx.r6.s32;
	// std r5,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r5.u64);
	// lfd f13,88(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 88);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// fcmpu cr6,f12,f0
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// ble cr6,0x829ffb74
	if (!ctx.cr6.gt) goto loc_829FFB74;
loc_829FFB70:
	// bl 0x829ff318
	ctx.lr = 0x829FFB74;
	sub_829FF318(ctx, base);
loc_829FFB74:
	// li r11,5
	ctx.r11.s64 = 5;
	// b 0x829ffbc0
	goto loc_829FFBC0;
loc_829FFB7C:
	// lwz r11,60(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x829ffbb8
	if (!ctx.cr6.eq) goto loc_829FFBB8;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,396(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 396);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,5184(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5184);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bne cr6,0x829ffbb8
	if (!ctx.cr6.eq) goto loc_829FFBB8;
	// rlwinm r11,r10,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2;
	// stw r28,424(r31)
	PPC_STORE_U32(ctx.r31.u32 + 424, ctx.r28.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x829ffb0c
	if (ctx.cr6.eq) goto loc_829FFB0C;
	// lwz r3,100(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// bl 0x829ff318
	ctx.lr = 0x829FFBB4;
	sub_829FF318(ctx, base);
	// b 0x829ffbbc
	goto loc_829FFBBC;
loc_829FFBB8:
	// stw r28,424(r31)
	PPC_STORE_U32(ctx.r31.u32 + 424, ctx.r28.u32);
loc_829FFBBC:
	// li r11,3
	ctx.r11.s64 = 3;
loc_829FFBC0:
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
loc_829FFBC4:
	// vspltisw128 v63,0
	_mm_store_si128((__m128i*)ctx.v63.u32, _mm_set1_epi32(int(0x0)));
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,5
	ctx.r10.s64 = 5;
	// stw r29,464(r31)
	PPC_STORE_U32(ctx.r31.u32 + 464, ctx.r29.u32);
	// stw r11,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r11.u32);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// stw r10,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r10.u32);
	// addi r3,r31,36
	ctx.r3.s64 = ctx.r31.s64 + 36;
	// stvx128 v63,r0,r31
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// bl 0x83179294
	ctx.lr = 0x829FFBEC;
	__imp__KfReleaseSpinLock(ctx, base);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// bne cr6,0x829ffc40
	if (!ctx.cr6.eq) goto loc_829FFC40;
	// li r31,-1
	ctx.r31.s64 = -1;
loc_829FFBF8:
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,108(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// bl 0x82a84140
	ctx.lr = 0x829FFC08;
	sub_82A84140(ctx, base);
	// cmplwi cr6,r3,192
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 192, ctx.xer);
	// beq cr6,0x829ffbf8
	if (ctx.cr6.eq) goto loc_829FFBF8;
	// lwz r3,108(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r31,96(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x829ffc2c
	if (ctx.cr6.eq) goto loc_829FFC2C;
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// beq cr6,0x829ffc2c
	if (ctx.cr6.eq) goto loc_829FFC2C;
	// bl 0x82a756a0
	ctx.lr = 0x829FFC2C;
	sub_82A756A0(ctx, base);
loc_829FFC2C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// addi r12,r1,-56
	ctx.r12.s64 = ctx.r1.s64 + -56;
	// bl 0x82fa8d74
	ctx.lr = 0x829FFC3C;
	__restfpr_28(ctx, base);
	// b 0x82fa76c0
	__restgprlr_26(ctx, base);
	return;
loc_829FFC40:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// addi r12,r1,-56
	ctx.r12.s64 = ctx.r1.s64 + -56;
	// bl 0x82fa8d74
	ctx.lr = 0x829FFC50;
	__restfpr_28(ctx, base);
	// b 0x82fa76c0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_829FFC54"))) PPC_WEAK_FUNC(sub_829FFC54);
PPC_FUNC_IMPL(__imp__sub_829FFC54) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_829FFC58"))) PPC_WEAK_FUNC(sub_829FFC58);
PPC_FUNC_IMPL(__imp__sub_829FFC58) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x829FFC60;
	__savegprlr_28(ctx, base);
	// stfd f29,-64(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -64, ctx.f29.u64);
	// stfd f30,-56(r1)
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f30.u64);
	// stfd f31,-48(r1)
	PPC_STORE_U64(ctx.r1.u32 + -48, ctx.f31.u64);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// fmr f30,f2
	ctx.f30.f64 = ctx.f2.f64;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// fmr f29,f3
	ctx.f29.f64 = ctx.f3.f64;
	// mr r28,r8
	ctx.r28.u64 = ctx.r8.u64;
	// bl 0x82a78340
	ctx.lr = 0x829FFC8C;
	sub_82A78340(ctx, base);
	// rlwinm r11,r30,0,27,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x18;
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,24
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 24, ctx.xer);
	// beq cr6,0x829ffcdc
	if (ctx.cr6.eq) goto loc_829FFCDC;
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,-23580(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -23580);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f31,f0
	ctx.f0.f64 = double(float(ctx.f31.f64 * ctx.f0.f64));
	// lfs f13,11556(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 11556);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bgt cr6,0x829ffcdc
	if (ctx.cr6.gt) goto loc_829FFCDC;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lfd f13,-27832(r11)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r11.u32 + -27832);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x829ffcdc
	if (ctx.cr6.lt) goto loc_829FFCDC;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x829ffd34
	if (ctx.cr6.eq) goto loc_829FFD34;
	// lwz r9,4(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// cmplwi cr6,r9,6
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 6, ctx.xer);
	// ble cr6,0x829ffcf4
	if (!ctx.cr6.gt) goto loc_829FFCF4;
loc_829FFCDC:
	// li r3,87
	ctx.r3.s64 = 87;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f29,-64(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// lfd f30,-56(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// lfd f31,-48(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
loc_829FFCF4:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x829ffd34
	if (ctx.cr6.eq) goto loc_829FFD34;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r29,32
	ctx.r10.s64 = ctx.r29.s64 + 32;
loc_829FFD08:
	// lwz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r5,r6,0,1,1
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x40000000;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x829ffd24
	if (ctx.cr6.eq) goto loc_829FFD24;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// cmplwi cr6,r8,1
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 1, ctx.xer);
	// bgt cr6,0x829ffcdc
	if (ctx.cr6.gt) goto loc_829FFCDC;
loc_829FFD24:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,32
	ctx.r10.s64 = ctx.r10.s64 + 32;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x829ffd08
	if (ctx.cr6.lt) goto loc_829FFD08;
loc_829FFD34:
	// lis r11,-31964
	ctx.r11.s64 = -2094792704;
	// addi r31,r11,28720
	ctx.r31.s64 = ctx.r11.s64 + 28720;
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x829ffe24
	if (!ctx.cr6.eq) goto loc_829FFE24;
	// lwz r11,424(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 424);
	// subf r9,r11,r7
	ctx.r9.s64 = ctx.r7.s64 - ctx.r11.s64;
	// cmplwi cr6,r9,20000
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 20000, ctx.xer);
	// ble cr6,0x829ffd64
	if (!ctx.cr6.gt) goto loc_829FFD64;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,428(r31)
	PPC_STORE_U32(ctx.r31.u32 + 428, ctx.r10.u32);
	// b 0x829ffd68
	goto loc_829FFD68;
loc_829FFD64:
	// lwz r10,428(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 428);
loc_829FFD68:
	// lis r11,-31964
	ctx.r11.s64 = -2094792704;
	// addi r8,r11,29312
	ctx.r8.s64 = ctx.r11.s64 + 29312;
	// lwz r11,132(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 132);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x829ffe0c
	if (!ctx.cr6.eq) goto loc_829FFE0C;
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x829ffe0c
	if (ctx.cr6.eq) goto loc_829FFE0C;
	// cmplwi cr6,r9,1000
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1000, ctx.xer);
	// bge cr6,0x829ffd9c
	if (!ctx.cr6.lt) goto loc_829FFD9C;
	// rlwinm r11,r30,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x20;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x829ffe0c
	if (ctx.cr6.eq) goto loc_829FFE0C;
loc_829FFD9C:
	// cmplwi cr6,r10,15
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 15, ctx.xer);
	// ble cr6,0x829ffdcc
	if (!ctx.cr6.gt) goto loc_829FFDCC;
	// rlwinm r11,r30,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x20;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x829ffdcc
	if (!ctx.cr6.eq) goto loc_829FFDCC;
	// li r3,56
	ctx.r3.s64 = 56;
	// stw r7,424(r31)
	PPC_STORE_U32(ctx.r31.u32 + 424, ctx.r7.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f29,-64(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// lfd f30,-56(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// lfd f31,-48(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
loc_829FFDCC:
	// stw r30,464(r31)
	PPC_STORE_U32(ctx.r31.u32 + 464, ctx.r30.u32);
	// bl 0x829ff588
	ctx.lr = 0x829FFDD4;
	sub_829FF588(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// fmr f3,f29
	ctx.fpscr.disableFlushMode();
	ctx.f3.f64 = ctx.f29.f64;
	// stw r11,416(r31)
	PPC_STORE_U32(ctx.r31.u32 + 416, ctx.r11.u32);
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// fmr f2,f30
	ctx.f2.f64 = ctx.f30.f64;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x829ff9b0
	ctx.lr = 0x829FFDF8;
	sub_829FF9B0(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f29,-64(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// lfd f30,-56(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// lfd f31,-48(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
loc_829FFE0C:
	// li r3,1237
	ctx.r3.s64 = 1237;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f29,-64(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// lfd f30,-56(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// lfd f31,-48(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
loc_829FFE24:
	// li r3,170
	ctx.r3.s64 = 170;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// lfd f29,-64(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r1.u32 + -64);
	// lfd f30,-56(r1)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// lfd f31,-48(r1)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -48);
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_829FFE3C"))) PPC_WEAK_FUNC(sub_829FFE3C);
PPC_FUNC_IMPL(__imp__sub_829FFE3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_829FFE40"))) PPC_WEAK_FUNC(sub_829FFE40);
PPC_FUNC_IMPL(__imp__sub_829FFE40) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x829FFE48;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addis r11,r3,-3
	ctx.r11.s64 = ctx.r3.s64 + -196608;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r11,r11,20475
	ctx.r11.s64 = ctx.r11.s64 + 20475;
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r11,6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 6, ctx.xer);
	// bgt cr6,0x82a0013c
	if (ctx.cr6.gt) goto loc_82A0013C;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x829fff84
	if (ctx.cr6.eq) goto loc_829FFF84;
	// bdz 0x82a0013c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_82A0013C;
	// bdz 0x82a0013c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_82A0013C;
	// bdz 0x82a0013c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_82A0013C;
	// bdz 0x82a00120
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_82A00120;
	// bdnz 0x82a0000c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82A0000C;
	// lis r11,-31964
	ctx.r11.s64 = -2094792704;
	// li r9,7
	ctx.r9.s64 = 7;
	// addi r11,r11,28720
	ctx.r11.s64 = ctx.r11.s64 + 28720;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r10,r11,464
	ctx.r10.s64 = ctx.r11.s64 + 464;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_829FFE9C:
	// stwu r8,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x829ffe9c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_829FFE9C;
	// lwz r10,80(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x829fff4c
	if (ctx.cr6.eq) goto loc_829FFF4C;
	// lwz r10,416(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 416);
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// bgt cr6,0x829fff3c
	if (ctx.cr6.gt) goto loc_829FFF3C;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x829fff3c
	if (ctx.cr6.eq) goto loc_829FFF3C;
	// bdz 0x829ffed4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_829FFED4;
	// bdz 0x829fff10
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_829FFF10;
	// b 0x829fff10
	goto loc_829FFF10;
loc_829FFED4:
	// lis r9,-32228
	ctx.r9.s64 = -2112094208;
	// lfs f0,396(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 396);
	ctx.f0.f64 = double(temp.f32);
	// li r10,6
	ctx.r10.s64 = 6;
	// lis r3,2
	ctx.r3.s64 = 131072;
	// stw r10,112(r11)
	PPC_STORE_U32(ctx.r11.u32 + 112, ctx.r10.u32);
	// addi r4,r11,112
	ctx.r4.s64 = ctx.r11.s64 + 112;
	// ori r3,r3,45068
	ctx.r3.u64 = ctx.r3.u64 | 45068;
	// lfs f13,-23580(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -23580);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfs f0,128(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 128, temp.u32);
	// bl 0x83178ce4
	ctx.lr = 0x829FFF00;
	__imp__XamNuiCameraTiltReportStatus(ctx, base);
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
loc_829FFF10:
	// lis r9,-32228
	ctx.r9.s64 = -2112094208;
	// lfs f0,396(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 396);
	ctx.f0.f64 = double(temp.f32);
	// li r10,6
	ctx.r10.s64 = 6;
	// lis r3,2
	ctx.r3.s64 = 131072;
	// stw r10,96(r11)
	PPC_STORE_U32(ctx.r11.u32 + 96, ctx.r10.u32);
	// addi r4,r11,96
	ctx.r4.s64 = ctx.r11.s64 + 96;
	// ori r3,r3,45062
	ctx.r3.u64 = ctx.r3.u64 | 45062;
	// lfs f13,-23580(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -23580);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfs f0,108(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 108, temp.u32);
	// bl 0x83178ce4
	ctx.lr = 0x829FFF3C;
	__imp__XamNuiCameraTiltReportStatus(ctx, base);
loc_829FFF3C:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
loc_829FFF4C:
	// li r10,8
	ctx.r10.s64 = 8;
	// addi r9,r11,468
	ctx.r9.s64 = ctx.r11.s64 + 468;
	// stw r10,464(r11)
	PPC_STORE_U32(ctx.r11.u32 + 464, ctx.r10.u32);
	// li r8,3
	ctx.r8.s64 = 3;
	// stw r9,496(r11)
	PPC_STORE_U32(ctx.r11.u32 + 496, ctx.r9.u32);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r10,444(r11)
	PPC_STORE_U32(ctx.r11.u32 + 444, ctx.r10.u32);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r8,416(r11)
	PPC_STORE_U32(ctx.r11.u32 + 416, ctx.r8.u32);
	// stw r10,100(r11)
	PPC_STORE_U32(ctx.r11.u32 + 100, ctx.r10.u32);
	// bl 0x829ff748
	ctx.lr = 0x829FFF78;
	sub_829FF748(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
loc_829FFF84:
	// lis r11,-31964
	ctx.r11.s64 = -2094792704;
	// li r9,7
	ctx.r9.s64 = 7;
	// addi r11,r11,28720
	ctx.r11.s64 = ctx.r11.s64 + 28720;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r10,r11,464
	ctx.r10.s64 = ctx.r11.s64 + 464;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_829FFF9C:
	// stwu r8,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x829fff9c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_829FFF9C;
	// lwz r10,80(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 80);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x829fffd4
	if (ctx.cr6.eq) goto loc_829FFFD4;
	// lwz r10,416(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 416);
	// cmplwi cr6,r10,3
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 3, ctx.xer);
	// bgt cr6,0x829fff3c
	if (ctx.cr6.gt) goto loc_829FFF3C;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x829fff3c
	if (ctx.cr6.eq) goto loc_829FFF3C;
	// bdz 0x829ffed4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_829FFED4;
	// bdz 0x829fff10
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_829FFF10;
	// b 0x829fff10
	goto loc_829FFF10;
loc_829FFFD4:
	// li r10,8
	ctx.r10.s64 = 8;
	// addi r9,r11,468
	ctx.r9.s64 = ctx.r11.s64 + 468;
	// stw r10,464(r11)
	PPC_STORE_U32(ctx.r11.u32 + 464, ctx.r10.u32);
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r9,496(r11)
	PPC_STORE_U32(ctx.r11.u32 + 496, ctx.r9.u32);
	// lfs f0,0(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,440(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 440, temp.u32);
	// lfs f0,0(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// stw r10,416(r11)
	PPC_STORE_U32(ctx.r11.u32 + 416, ctx.r10.u32);
	// stfs f0,104(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 104, temp.u32);
	// bl 0x829ff748
	ctx.lr = 0x82A00000;
	sub_829FF748(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
loc_82A0000C:
	// lis r11,-31964
	ctx.r11.s64 = -2094792704;
	// li r10,7
	ctx.r10.s64 = 7;
	// addi r31,r11,28720
	ctx.r31.s64 = ctx.r11.s64 + 28720;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r11,r31,464
	ctx.r11.s64 = ctx.r31.s64 + 464;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82A00024:
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x82a00024
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82A00024;
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a000d4
	if (ctx.cr6.eq) goto loc_82A000D4;
	// lwz r11,416(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 416);
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bgt cr6,0x82a000c4
	if (ctx.cr6.gt) goto loc_82A000C4;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82a000c4
	if (ctx.cr6.eq) goto loc_82A000C4;
	// bdz 0x82a0005c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_82A0005C;
	// bdz 0x82a00098
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_82A00098;
	// b 0x82a00098
	goto loc_82A00098;
loc_82A0005C:
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// lfs f0,396(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 396);
	ctx.f0.f64 = double(temp.f32);
	// li r11,6
	ctx.r11.s64 = 6;
	// lis r3,2
	ctx.r3.s64 = 131072;
	// stw r11,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r11.u32);
	// addi r4,r31,112
	ctx.r4.s64 = ctx.r31.s64 + 112;
	// ori r3,r3,45068
	ctx.r3.u64 = ctx.r3.u64 | 45068;
	// lfs f13,-23580(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -23580);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfs f0,128(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 128, temp.u32);
	// bl 0x83178ce4
	ctx.lr = 0x82A00088;
	__imp__XamNuiCameraTiltReportStatus(ctx, base);
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
loc_82A00098:
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// lfs f0,396(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 396);
	ctx.f0.f64 = double(temp.f32);
	// li r11,6
	ctx.r11.s64 = 6;
	// lis r3,2
	ctx.r3.s64 = 131072;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// addi r4,r31,96
	ctx.r4.s64 = ctx.r31.s64 + 96;
	// ori r3,r3,45062
	ctx.r3.u64 = ctx.r3.u64 | 45062;
	// lfs f13,-23580(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -23580);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfs f0,108(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 108, temp.u32);
	// bl 0x83178ce4
	ctx.lr = 0x82A000C4;
	__imp__XamNuiCameraTiltReportStatus(ctx, base);
loc_82A000C4:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
loc_82A000D4:
	// bl 0x829ff588
	ctx.lr = 0x82A000D8;
	sub_829FF588(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// lis r10,-31975
	ctx.r10.s64 = -2095513600;
	// stw r11,416(r31)
	PPC_STORE_U32(ctx.r31.u32 + 416, ctx.r11.u32);
	// lis r9,-32228
	ctx.r9.s64 = -2112094208;
	// addi r6,r10,-13020
	ctx.r6.s64 = ctx.r10.s64 + -13020;
	// lfs f3,8(r30)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	ctx.f3.f64 = double(temp.f32);
	// addi r8,r31,468
	ctx.r8.s64 = ctx.r31.s64 + 468;
	// lfs f2,4(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	ctx.f2.f64 = double(temp.f32);
	// addi r7,r31,128
	ctx.r7.s64 = ctx.r31.s64 + 128;
	// lfs f0,-23580(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -23580);
	ctx.f0.f64 = double(temp.f32);
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm r5,r3,2,28,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xC;
	// lfsx f13,r5,r6
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r6.u32);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// bl 0x829ff9b0
	ctx.lr = 0x82A00114;
	sub_829FF9B0(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
loc_82A00120:
	// lis r10,-31964
	ctx.r10.s64 = -2094792704;
	// li r11,6
	ctx.r11.s64 = 6;
	// addi r9,r10,28720
	ctx.r9.s64 = ctx.r10.s64 + 28720;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,80(r9)
	PPC_STORE_U32(ctx.r9.u32 + 80, ctx.r11.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
loc_82A0013C:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,65535
	ctx.r3.u64 = ctx.r3.u64 | 65535;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A0014C"))) PPC_WEAK_FUNC(sub_82A0014C);
PPC_FUNC_IMPL(__imp__sub_82A0014C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A00150"))) PPC_WEAK_FUNC(sub_82A00150);
PPC_FUNC_IMPL(__imp__sub_82A00150) {
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
	// lis r11,-31964
	ctx.r11.s64 = -2094792704;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lis r8,-32233
	ctx.r8.s64 = -2112421888;
	// addi r30,r11,28720
	ctx.r30.s64 = ctx.r11.s64 + 28720;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lis r11,22644
	ctx.r11.s64 = 1483997184;
	// li r10,80
	ctx.r10.s64 = 80;
	// lfs f0,5184(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 5184);
	ctx.f0.f64 = double(temp.f32);
	// ori r11,r11,21363
	ctx.r11.u64 = ctx.r11.u64 | 21363;
	// lfs f13,24436(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 24436);
	ctx.f13.f64 = double(temp.f32);
	// stfs f0,0(r3)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r3.u32 + 0, temp.u32);
	// lis r7,-31975
	ctx.r7.s64 = -2095513600;
	// stfs f13,4(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 4, temp.u32);
	// addi r3,r30,336
	ctx.r3.s64 = ctx.r30.s64 + 336;
	// stfs f0,8(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 8, temp.u32);
	// stfs f0,12(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 12, temp.u32);
	// stw r11,340(r30)
	PPC_STORE_U32(ctx.r30.u32 + 340, ctx.r11.u32);
	// stw r10,336(r30)
	PPC_STORE_U32(ctx.r30.u32 + 336, ctx.r10.u32);
	// lwz r6,-13024(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + -13024);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x82A001B8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r5,4096
	ctx.r5.s64 = 268435456;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpw cr6,r3,r5
	ctx.cr6.compare<int32_t>(ctx.r3.s32, ctx.r5.s32, ctx.xer);
	// bne cr6,0x82a001d0
	if (!ctx.cr6.eq) goto loc_82A001D0;
	// li r4,0
	ctx.r4.s64 = 0;
	// b 0x82a001d8
	goto loc_82A001D8;
loc_82A001D0:
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// blt cr6,0x82a001e4
	if (ctx.cr6.lt) goto loc_82A001E4;
loc_82A001D8:
	// addi r3,r30,368
	ctx.r3.s64 = ctx.r30.s64 + 368;
	// bl 0x829ff628
	ctx.lr = 0x82A001E0;
	sub_829FF628(ctx, base);
	// stvx128 v1,r0,r31
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v1.u8), _mm_load_si128((__m128i*)VectorMaskL)));
loc_82A001E4:
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
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

__attribute__((alias("__imp__sub_82A00200"))) PPC_WEAK_FUNC(sub_82A00200);
PPC_FUNC_IMPL(__imp__sub_82A00200) {
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
	// lis r11,-31964
	ctx.r11.s64 = -2094792704;
	// li r5,512
	ctx.r5.s64 = 512;
	// addi r31,r11,28720
	ctx.r31.s64 = ctx.r11.s64 + 28720;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82fa7cf0
	ctx.lr = 0x82A00228;
	sub_82FA7CF0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-32096
	ctx.r10.s64 = -2103443456;
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// addi r3,r10,-448
	ctx.r3.s64 = ctx.r10.s64 + -448;
	// bl 0x83178d44
	ctx.lr = 0x82A0023C;
	__imp__XamNuiCameraTiltSetCallback(ctx, base);
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x83178d24
	ctx.lr = 0x82A00250;
	__imp__XamXStudioRequest(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82a00280
	if (ctx.cr6.lt) goto loc_82A00280;
	// lis r11,-32096
	ctx.r11.s64 = -2103443456;
	// lis r8,-31975
	ctx.r8.s64 = -2095513600;
	// addi r7,r11,-3136
	ctx.r7.s64 = ctx.r11.s64 + -3136;
	// addi r6,r8,-13024
	ctx.r6.s64 = ctx.r8.s64 + -13024;
loc_82A00268:
	// mfmsr r9
	ctx.r9.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r6
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r6.u32);
	ctx.r10.u64 = __builtin_bswap32(ctx.reserved.u32);
	// stwcx. r7,0,r6
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r6.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r7.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x82a00268
	if (!ctx.cr0.eq) goto loc_82A00268;
loc_82A00280:
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

__attribute__((alias("__imp__sub_82A00294"))) PPC_WEAK_FUNC(sub_82A00294);
PPC_FUNC_IMPL(__imp__sub_82A00294) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A00298"))) PPC_WEAK_FUNC(sub_82A00298);
PPC_FUNC_IMPL(__imp__sub_82A00298) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// li r12,-64
	ctx.r12.s64 = -64;
	// stvx128 v125,r1,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r1.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v125.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r12,-48
	ctx.r12.s64 = -48;
	// stvx128 v126,r1,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r1.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v126.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r12,-32
	ctx.r12.s64 = -32;
	// stvx128 v127,r1,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r1.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v127.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31964
	ctx.r11.s64 = -2094792704;
	// vspltisw v1,0
	_mm_store_si128((__m128i*)ctx.v1.u32, _mm_set1_epi32(int(0x0)));
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// addi r31,r11,28720
	ctx.r31.s64 = ctx.r11.s64 + 28720;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// vpermwi128 v63,v1,24
	_mm_store_si128((__m128i*)ctx.v63.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v1.u32), 0xE7));
	// addi r8,r31,384
	ctx.r8.s64 = ctx.r31.s64 + 384;
	// ld r7,384(r31)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r31.u32 + 384);
	// ld r6,392(r31)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r31.u32 + 392);
	// std r7,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r7.u64);
	// std r6,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r6.u64);
	// lvx128 v127,r0,r9
	simd::store_shuffled(ctx.v127, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// vpermwi128 v62,v127,24
	_mm_store_si128((__m128i*)ctx.v62.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v127.u32), 0xE7));
	// vcmpeqfp128. v61,v62,v63
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v61.f32, _mm_cmpeq_ps(_mm_load_ps(ctx.v62.f32), _mm_load_ps(ctx.v63.f32)));
	ctx.cr6.setFromMask(_mm_load_ps(ctx.v61.f32), 0xF);
	// blt cr6,0x82a00398
	if (ctx.cr6.lt) goto loc_82A00398;
	// addi r3,r31,368
	ctx.r3.s64 = ctx.r31.s64 + 368;
	// bl 0x829ff628
	ctx.lr = 0x82A00304;
	sub_829FF628(ctx, base);
	// addi r3,r31,404
	ctx.r3.s64 = ctx.r31.s64 + 404;
	// vor128 v126,v1,v1
	_mm_store_si128((__m128i*)ctx.v126.u8, _mm_load_si128((__m128i*)ctx.v1.u8));
	// bl 0x829ff628
	ctx.lr = 0x82A00310;
	sub_829FF628(ctx, base);
	// vor128 v125,v1,v1
	_mm_store_si128((__m128i*)ctx.v125.u8, _mm_load_si128((__m128i*)ctx.v1.u8));
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// vmsum3fp128 v60,v126,v125
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v60.f32, _mm_dp_ps(_mm_load_ps(ctx.v126.f32), _mm_load_ps(ctx.v125.f32), 0xEF));
	// stvx128 v60,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v60.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lfs f1,108(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82fa3ec8
	ctx.lr = 0x82A00328;
	sub_82FA3EC8(ctx, base);
	// vpermwi128 v59,v125,135
	_mm_store_si128((__m128i*)ctx.v59.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v125.u32), 0x78));
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// vpermwi128 v58,v126,99
	_mm_store_si128((__m128i*)ctx.v58.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v126.u32), 0x9C));
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// vpermwi128 v13,v125,99
	_mm_store_si128((__m128i*)ctx.v13.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v125.u32), 0x9C));
	// vpermwi128 v0,v126,135
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v126.u32), 0x78));
	// vmulfp128 v12,v58,v59
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v12.f32, _mm_mul_ps(_mm_load_ps(ctx.v58.f32), _mm_load_ps(ctx.v59.f32)));
	// fneg f1,f0
	ctx.fpscr.disableFlushModeUnconditional();
	ctx.f1.u64 = ctx.f0.u64 ^ 0x8000000000000000;
	// vnmsubfp v1,v0,v13,v12
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v1.f32, _mm_xor_ps(_mm_sub_ps(_mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v13.f32)), _mm_load_ps(ctx.v12.f32)), _mm_castsi128_ps(_mm_set1_epi32(int(0x80000000)))));
	// bl 0x8247a400
	ctx.lr = 0x82A00350;
	sub_8247A400(ctx, base);
	// addi r10,r1,144
	ctx.r10.s64 = ctx.r1.s64 + 144;
	// vspltw128 v57,v127,2
	_mm_store_si128((__m128i*)ctx.v57.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v127.u32), 0x55));
	// addi r9,r1,128
	ctx.r9.s64 = ctx.r1.s64 + 128;
	// vspltw128 v10,v127,1
	_mm_store_si128((__m128i*)ctx.v10.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v127.u32), 0xAA));
	// addi r8,r1,112
	ctx.r8.s64 = ctx.r1.s64 + 112;
	// vspltw128 v13,v127,0
	_mm_store_si128((__m128i*)ctx.v13.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v127.u32), 0xFF));
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// lfs f0,396(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 396);
	ctx.f0.f64 = double(temp.f32);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// lvx128 v56,r0,r10
	simd::store_shuffled(ctx.v56, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// vmulfp128 v11,v57,v56
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v11.f32, _mm_mul_ps(_mm_load_ps(ctx.v57.f32), _mm_load_ps(ctx.v56.f32)));
	// lvx128 v12,r0,r9
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// lvx128 v0,r0,r8
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r8.u32) & ~0xF), VectorMaskL));
	// vmaddfp v12,v10,v12,v11
	_mm_store_ps(ctx.v12.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v10.f32), _mm_load_ps(ctx.v12.f32)), _mm_load_ps(ctx.v11.f32)));
	// vmaddfp v0,v13,v0,v12
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v0.f32)), _mm_load_ps(ctx.v12.f32)));
	// stvx128 v0,r0,r7
	_mm_store_si128((__m128i*)(base + ((ctx.r7.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stfs f0,92(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 92, temp.u32);
	// lvx128 v1,r0,r6
	simd::store_shuffled(ctx.v1, simd::load_and_shuffle(base + ((ctx.r6.u32) & ~0xF), VectorMaskL));
loc_82A00398:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// li r0,-64
	ctx.r0.s64 = -64;
	// lvx128 v125,r1,r0
	simd::store_shuffled(ctx.v125, simd::load_and_shuffle(base + ((ctx.r1.u32 + ctx.r0.u32) & ~0xF), VectorMaskL));
	// li r0,-48
	ctx.r0.s64 = -48;
	// lvx128 v126,r1,r0
	simd::store_shuffled(ctx.v126, simd::load_and_shuffle(base + ((ctx.r1.u32 + ctx.r0.u32) & ~0xF), VectorMaskL));
	// li r0,-32
	ctx.r0.s64 = -32;
	// lvx128 v127,r1,r0
	simd::store_shuffled(ctx.v127, simd::load_and_shuffle(base + ((ctx.r1.u32 + ctx.r0.u32) & ~0xF), VectorMaskL));
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A003C4"))) PPC_WEAK_FUNC(sub_82A003C4);
PPC_FUNC_IMPL(__imp__sub_82A003C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A003C8"))) PPC_WEAK_FUNC(sub_82A003C8);
PPC_FUNC_IMPL(__imp__sub_82A003C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x82A003D0;
	__savegprlr_28(ctx, base);
	// lis r11,-31964
	ctx.r11.s64 = -2094792704;
	// vspltisw128 v62,0
	_mm_store_si128((__m128i*)ctx.v62.u32, _mm_set1_epi32(int(0x0)));
	// addi r8,r1,-64
	ctx.r8.s64 = ctx.r1.s64 + -64;
	// addi r9,r11,28720
	ctx.r9.s64 = ctx.r11.s64 + 28720;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lwz r11,496(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 496);
	// stvx128 v62,r0,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v62.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lfs f11,23856(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 23856);
	ctx.f11.f64 = double(temp.f32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a00720
	if (ctx.cr6.eq) goto loc_82A00720;
	// lwz r5,8(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82a00720
	if (ctx.cr6.eq) goto loc_82A00720;
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lwz r8,4(r5)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// li r30,0
	ctx.r30.s64 = 0;
	// li r6,-16
	ctx.r6.s64 = -16;
	// li r4,16
	ctx.r4.s64 = 16;
	// li r29,48
	ctx.r29.s64 = 48;
	// lfs f0,-8020(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -8020);
	ctx.f0.f64 = double(temp.f32);
	// li r31,80
	ctx.r31.s64 = 80;
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// cmpwi cr6,r8,4
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 4, ctx.xer);
	// blt cr6,0x82a00548
	if (ctx.cr6.lt) goto loc_82A00548;
	// addi r7,r8,-3
	ctx.r7.s64 = ctx.r8.s64 + -3;
	// addi r11,r5,32
	ctx.r11.s64 = ctx.r5.s64 + 32;
loc_82A00438:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r28,r10,0,0,1
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xC0000000;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82a00478
	if (ctx.cr6.eq) goto loc_82A00478;
	// rlwinm r10,r10,0,1,1
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x40000000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82a00478
	if (ctx.cr6.eq) goto loc_82A00478;
	// addi r10,r1,-64
	ctx.r10.s64 = ctx.r1.s64 + -64;
	// lvx128 v63,r11,r6
	simd::store_shuffled(ctx.v63, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r6.u32) & ~0xF), VectorMaskL));
	// stvx128 v63,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lfs f12,-64(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -64);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,-56(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -56);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f9,f13,f0
	ctx.f9.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fmuls f10,f12,f0
	ctx.f10.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stfs f10,-64(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + -64, temp.u32);
	// stfs f9,-56(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + -56, temp.u32);
loc_82A00478:
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// rlwinm r28,r10,0,0,1
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xC0000000;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82a004b8
	if (ctx.cr6.eq) goto loc_82A004B8;
	// rlwinm r10,r10,0,1,1
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x40000000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82a004b8
	if (ctx.cr6.eq) goto loc_82A004B8;
	// addi r10,r1,-64
	ctx.r10.s64 = ctx.r1.s64 + -64;
	// lvx128 v61,r11,r4
	simd::store_shuffled(ctx.v61, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r4.u32) & ~0xF), VectorMaskL));
	// stvx128 v61,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v61.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lfs f13,-64(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -64);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,-56(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -56);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f10,f13,f0
	ctx.f10.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fmuls f9,f12,f0
	ctx.f9.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stfs f10,-64(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + -64, temp.u32);
	// stfs f9,-56(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + -56, temp.u32);
loc_82A004B8:
	// lwz r10,64(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 64);
	// rlwinm r28,r10,0,0,1
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xC0000000;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82a004f8
	if (ctx.cr6.eq) goto loc_82A004F8;
	// rlwinm r10,r10,0,1,1
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x40000000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82a004f8
	if (ctx.cr6.eq) goto loc_82A004F8;
	// addi r10,r1,-64
	ctx.r10.s64 = ctx.r1.s64 + -64;
	// lvx128 v60,r11,r29
	simd::store_shuffled(ctx.v60, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r29.u32) & ~0xF), VectorMaskL));
	// stvx128 v60,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v60.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lfs f13,-64(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -64);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,-56(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -56);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f10,f13,f0
	ctx.f10.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fmuls f9,f12,f0
	ctx.f9.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stfs f10,-64(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + -64, temp.u32);
	// stfs f9,-56(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + -56, temp.u32);
loc_82A004F8:
	// lwz r10,96(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 96);
	// rlwinm r28,r10,0,0,1
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xC0000000;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82a00538
	if (ctx.cr6.eq) goto loc_82A00538;
	// rlwinm r10,r10,0,1,1
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x40000000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82a00538
	if (ctx.cr6.eq) goto loc_82A00538;
	// addi r10,r1,-64
	ctx.r10.s64 = ctx.r1.s64 + -64;
	// lvx128 v59,r11,r31
	simd::store_shuffled(ctx.v59, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r31.u32) & ~0xF), VectorMaskL));
	// stvx128 v59,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v59.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lfs f13,-64(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -64);
	ctx.f13.f64 = double(temp.f32);
	// lfs f12,-56(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -56);
	ctx.f12.f64 = double(temp.f32);
	// fmuls f10,f13,f0
	ctx.f10.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fmuls f9,f12,f0
	ctx.f9.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stfs f10,-64(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + -64, temp.u32);
	// stfs f9,-56(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + -56, temp.u32);
loc_82A00538:
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// addi r11,r11,128
	ctx.r11.s64 = ctx.r11.s64 + 128;
	// cmplw cr6,r9,r7
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r7.u32, ctx.xer);
	// blt cr6,0x82a00438
	if (ctx.cr6.lt) goto loc_82A00438;
loc_82A00548:
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// bge cr6,0x82a005ac
	if (!ctx.cr6.lt) goto loc_82A005AC;
	// addi r11,r9,1
	ctx.r11.s64 = ctx.r9.s64 + 1;
	// subf r10,r9,r8
	ctx.r10.s64 = ctx.r8.s64 - ctx.r9.s64;
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82A00564:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r9,r10,0,0,1
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xC0000000;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82a005a4
	if (ctx.cr6.eq) goto loc_82A005A4;
	// rlwinm r10,r10,0,1,1
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x40000000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82a005a4
	if (ctx.cr6.eq) goto loc_82A005A4;
	// addi r10,r1,-64
	ctx.r10.s64 = ctx.r1.s64 + -64;
	// lvx128 v58,r11,r6
	simd::store_shuffled(ctx.v58, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r6.u32) & ~0xF), VectorMaskL));
	// stvx128 v58,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v58.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lfs f12,-56(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -56);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,-64(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -64);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f10,f13,f0
	ctx.f10.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// fmuls f9,f12,f0
	ctx.f9.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stfs f10,-64(r1)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + -64, temp.u32);
	// stfs f9,-56(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + -56, temp.u32);
loc_82A005A4:
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// bdnz 0x82a00564
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82A00564;
loc_82A005AC:
	// addi r11,r1,-64
	ctx.r11.s64 = ctx.r1.s64 + -64;
	// lfs f10,-64(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -64);
	ctx.f10.f64 = double(temp.f32);
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lfs f9,-56(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -56);
	ctx.f9.f64 = double(temp.f32);
	// addi r6,r3,32
	ctx.r6.s64 = ctx.r3.s64 + 32;
	// vpermwi128 v63,v62,24
	_mm_store_si128((__m128i*)ctx.v63.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v62.u32), 0xE7));
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// mr r8,r6
	ctx.r8.u64 = ctx.r6.u64;
	// lvx128 v61,r0,r11
	simd::store_shuffled(ctx.v61, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// lfs f12,-27824(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -27824);
	ctx.f12.f64 = double(temp.f32);
loc_82A005D4:
	// lvx128 v57,r0,r8
	simd::store_shuffled(ctx.v57, simd::load_and_shuffle(base + ((ctx.r8.u32) & ~0xF), VectorMaskL));
	// vpermwi128 v56,v57,24
	_mm_store_si128((__m128i*)ctx.v56.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v57.u32), 0xE7));
	// vcmpeqfp128. v55,v56,v63
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v55.f32, _mm_cmpeq_ps(_mm_load_ps(ctx.v56.f32), _mm_load_ps(ctx.v63.f32)));
	ctx.cr6.setFromMask(_mm_load_ps(ctx.v55.f32), 0xF);
	// blt cr6,0x82a00694
	if (ctx.cr6.lt) goto loc_82A00694;
	// lwz r9,4(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82a00640
	if (ctx.cr6.eq) goto loc_82A00640;
	// addi r11,r5,16
	ctx.r11.s64 = ctx.r5.s64 + 16;
loc_82A005F8:
	// lwz r28,16(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// rlwinm r28,r28,0,0,0
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 0) & 0x80000000;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82a00630
	if (ctx.cr6.eq) goto loc_82A00630;
	// lfs f13,0(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f8,0(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f8.f64 = double(temp.f32);
	// fmsubs f7,f13,f0,f8
	ctx.f7.f64 = double(float(ctx.f13.f64 * ctx.f0.f64 - ctx.f8.f64));
	// lfs f6,8(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	ctx.f6.f64 = double(temp.f32);
	// lfs f5,8(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	ctx.f5.f64 = double(temp.f32);
	// fmsubs f4,f6,f0,f5
	ctx.f4.f64 = double(float(ctx.f6.f64 * ctx.f0.f64 - ctx.f5.f64));
	// fmuls f3,f7,f7
	ctx.f3.f64 = double(float(ctx.f7.f64 * ctx.f7.f64));
	// fmadds f2,f4,f4,f3
	ctx.f2.f64 = double(float(ctx.f4.f64 * ctx.f4.f64 + ctx.f3.f64));
	// fcmpu cr6,f2,f12
	ctx.cr6.compare(ctx.f2.f64, ctx.f12.f64);
	// blt cr6,0x82a00724
	if (ctx.cr6.lt) goto loc_82A00724;
loc_82A00630:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// blt cr6,0x82a005f8
	if (ctx.cr6.lt) goto loc_82A005F8;
loc_82A00640:
	// vpermwi128 v54,v61,24
	_mm_store_si128((__m128i*)ctx.v54.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v61.u32), 0xE7));
	// vcmpeqfp128. v53,v54,v63
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v53.f32, _mm_cmpeq_ps(_mm_load_ps(ctx.v54.f32), _mm_load_ps(ctx.v63.f32)));
	ctx.cr6.setFromMask(_mm_load_ps(ctx.v53.f32), 0xF);
	// blt cr6,0x82a00694
	if (ctx.cr6.lt) goto loc_82A00694;
	// lfs f13,0(r8)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f8,f10,f13
	ctx.f8.f64 = double(float(ctx.f10.f64 - ctx.f13.f64));
	// lfs f7,8(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f6,f9,f7
	ctx.f6.f64 = double(float(ctx.f9.f64 - ctx.f7.f64));
	// fmuls f5,f8,f8
	ctx.f5.f64 = double(float(ctx.f8.f64 * ctx.f8.f64));
	// fmadds f13,f6,f6,f5
	ctx.f13.f64 = double(float(ctx.f6.f64 * ctx.f6.f64 + ctx.f5.f64));
	// fcmpu cr6,f13,f11
	ctx.cr6.compare(ctx.f13.f64, ctx.f11.f64);
	// bge cr6,0x82a00694
	if (!ctx.cr6.lt) goto loc_82A00694;
	// fmr f11,f13
	ctx.f11.f64 = ctx.f13.f64;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82a00694
	if (ctx.cr6.eq) goto loc_82A00694;
	// li r9,10
	ctx.r9.s64 = 10;
	// addi r11,r8,-40
	ctx.r11.s64 = ctx.r8.s64 + -40;
	// addi r10,r3,-8
	ctx.r10.s64 = ctx.r3.s64 + -8;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82A00688:
	// ldu r9,8(r11)
	ea = 8 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U64(ea);
	ctx.r11.u32 = ea;
	// stdu r9,8(r10)
	ea = 8 + ctx.r10.u32;
	PPC_STORE_U64(ea, ctx.r9.u64);
	ctx.r10.u32 = ea;
	// bdnz 0x82a00688
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82A00688;
loc_82A00694:
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// addi r8,r8,80
	ctx.r8.s64 = ctx.r8.s64 + 80;
	// cmplwi cr6,r7,20
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 20, ctx.xer);
	// blt cr6,0x82a005d4
	if (ctx.cr6.lt) goto loc_82A005D4;
	// lvx128 v52,r0,r6
	simd::store_shuffled(ctx.v52, simd::load_and_shuffle(base + ((ctx.r6.u32) & ~0xF), VectorMaskL));
	// vpermwi128 v51,v52,24
	_mm_store_si128((__m128i*)ctx.v51.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v52.u32), 0xE7));
	// vcmpeqfp128. v50,v51,v63
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v50.f32, _mm_cmpeq_ps(_mm_load_ps(ctx.v51.f32), _mm_load_ps(ctx.v63.f32)));
	ctx.cr6.setFromMask(_mm_load_ps(ctx.v50.f32), 0xF);
	// bge cr6,0x82a00720
	if (!ctx.cr6.lt) goto loc_82A00720;
	// mr r8,r31
	ctx.r8.u64 = ctx.r31.u64;
	// li r7,19
	ctx.r7.s64 = 19;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
loc_82A006C0:
	// add r11,r8,r3
	ctx.r11.u64 = ctx.r8.u64 + ctx.r3.u64;
	// lvx128 v49,r11,r10
	simd::store_shuffled(ctx.v49, simd::load_and_shuffle(base + ((ctx.r11.u32 + ctx.r10.u32) & ~0xF), VectorMaskL));
	// vpermwi128 v48,v49,24
	_mm_store_si128((__m128i*)ctx.v48.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v49.u32), 0xE7));
	// vcmpeqfp128. v47,v48,v63
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v47.f32, _mm_cmpeq_ps(_mm_load_ps(ctx.v48.f32), _mm_load_ps(ctx.v63.f32)));
	ctx.cr6.setFromMask(_mm_load_ps(ctx.v47.f32), 0xF);
	// blt cr6,0x82a00710
	if (ctx.cr6.lt) goto loc_82A00710;
	// lvx128 v46,r3,r29
	simd::store_shuffled(ctx.v46, simd::load_and_shuffle(base + ((ctx.r3.u32 + ctx.r29.u32) & ~0xF), VectorMaskL));
	// vpermwi128 v45,v46,24
	_mm_store_si128((__m128i*)ctx.v45.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v46.u32), 0xE7));
	// vcmpeqfp128. v44,v45,v63
	_mm_store_ps(ctx.v44.f32, _mm_cmpeq_ps(_mm_load_ps(ctx.v45.f32), _mm_load_ps(ctx.v63.f32)));
	ctx.cr6.setFromMask(_mm_load_ps(ctx.v44.f32), 0xF);
	// blt cr6,0x82a006f4
	if (ctx.cr6.lt) goto loc_82A006F4;
	// lfs f0,40(r11)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,40(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bge cr6,0x82a00710
	if (!ctx.cr6.lt) goto loc_82A00710;
loc_82A006F4:
	// li r9,10
	ctx.r9.s64 = 10;
	// addi r11,r11,-8
	ctx.r11.s64 = ctx.r11.s64 + -8;
	// addi r10,r3,-8
	ctx.r10.s64 = ctx.r3.s64 + -8;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82A00704:
	// ldu r9,8(r11)
	ea = 8 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U64(ea);
	ctx.r11.u32 = ea;
	// stdu r9,8(r10)
	ea = 8 + ctx.r10.u32;
	PPC_STORE_U64(ea, ctx.r9.u64);
	ctx.r10.u32 = ea;
	// bdnz 0x82a00704
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82A00704;
loc_82A00710:
	// addic. r7,r7,-1
	ctx.xer.ca = ctx.r7.u32 > 0;
	ctx.r7.s64 = ctx.r7.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// addi r8,r8,80
	ctx.r8.s64 = ctx.r8.s64 + 80;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// bne 0x82a006c0
	if (!ctx.cr0.eq) goto loc_82A006C0;
loc_82A00720:
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
loc_82A00724:
	// stvx128 v62,r0,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v62.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v62,r8,r4
	_mm_store_si128((__m128i*)(base + ((ctx.r8.u32 + ctx.r4.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v62.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// b 0x82a00694
	goto loc_82A00694;
}

__attribute__((alias("__imp__sub_82A00730"))) PPC_WEAK_FUNC(sub_82A00730);
PPC_FUNC_IMPL(__imp__sub_82A00730) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7670
	ctx.lr = 0x82A00738;
	__savegprlr_26(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31964
	ctx.r11.s64 = -2094792704;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r27,r11,28720
	ctx.r27.s64 = ctx.r11.s64 + 28720;
	// lwz r11,496(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 496);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a00a3c
	if (ctx.cr6.eq) goto loc_82A00A3C;
	// lwz r31,8(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82a00a3c
	if (ctx.cr6.eq) goto loc_82A00A3C;
	// lwz r11,64(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 64);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82a00a3c
	if (ctx.cr6.eq) goto loc_82A00A3C;
	// bl 0x82a003c8
	ctx.lr = 0x82A00770;
	sub_82A003C8(ctx, base);
	// li r5,208
	ctx.r5.s64 = 208;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82fa7cf0
	ctx.lr = 0x82A00780;
	sub_82FA7CF0(ctx, base);
	// lis r11,-32228
	ctx.r11.s64 = -2112094208;
	// addi r28,r30,32
	ctx.r28.s64 = ctx.r30.s64 + 32;
	// lfs f0,396(r27)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r27.u32 + 396);
	ctx.f0.f64 = double(temp.f32);
	// vspltisw128 v61,0
	_mm_store_si128((__m128i*)ctx.v61.u32, _mm_set1_epi32(int(0x0)));
	// li r4,0
	ctx.r4.s64 = 0;
	// lfs f7,-23580(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -23580);
	ctx.f7.f64 = double(temp.f32);
	// fmuls f0,f0,f7
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f7.f64));
	// stfs f0,0(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 0, temp.u32);
	// lvx128 v63,r0,r28
	simd::store_shuffled(ctx.v63, simd::load_and_shuffle(base + ((ctx.r28.u32) & ~0xF), VectorMaskL));
	// vpermwi128 v60,v61,24
	_mm_store_si128((__m128i*)ctx.v60.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v61.u32), 0xE7));
	// vpermwi128 v62,v63,24
	_mm_store_si128((__m128i*)ctx.v62.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v63.u32), 0xE7));
	// vcmpeqfp128. v59,v62,v60
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v59.f32, _mm_cmpeq_ps(_mm_load_ps(ctx.v62.f32), _mm_load_ps(ctx.v60.f32)));
	ctx.cr6.setFromMask(_mm_load_ps(ctx.v59.f32), 0xF);
	// blt cr6,0x82a009a4
	if (ctx.cr6.lt) goto loc_82A009A4;
	// lfs f0,0(r28)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	ctx.f0.f64 = double(temp.f32);
	// addi r7,r31,24
	ctx.r7.s64 = ctx.r31.s64 + 24;
	// stfs f0,16(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
	// lfs f13,40(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	ctx.f13.f64 = double(temp.f32);
	// stfs f13,24(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 24, temp.u32);
	// lwz r11,72(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 72);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82a007e0
	if (ctx.cr6.eq) goto loc_82A007E0;
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// ori r10,r11,1
	ctx.r10.u64 = ctx.r11.u64 | 1;
	// stw r10,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r10.u32);
loc_82A007E0:
	// li r11,19
	ctx.r11.s64 = 19;
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r3,r30,112
	ctx.r3.s64 = ctx.r30.s64 + 112;
	// stw r9,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r9.u32);
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lfs f8,5184(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 5184);
	ctx.f8.f64 = double(temp.f32);
	// lfs f10,-27824(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -27824);
	ctx.f10.f64 = double(temp.f32);
loc_82A00808:
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// lvx128 v63,r0,r10
	simd::store_shuffled(ctx.v63, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// stvx128 v63,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stfs f8,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lvx128 v58,r0,r9
	simd::store_shuffled(ctx.v58, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// vpermwi128 v57,v58,24
	_mm_store_si128((__m128i*)ctx.v57.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v58.u32), 0xE7));
	// vcmpeqfp128. v56,v57,v60
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v56.f32, _mm_cmpeq_ps(_mm_load_ps(ctx.v57.f32), _mm_load_ps(ctx.v60.f32)));
	ctx.cr6.setFromMask(_mm_load_ps(ctx.v56.f32), 0xF);
	// blt cr6,0x82a00868
	if (ctx.cr6.lt) goto loc_82A00868;
	// lvx128 v55,r0,r28
	simd::store_shuffled(ctx.v55, simd::load_and_shuffle(base + ((ctx.r28.u32) & ~0xF), VectorMaskL));
	// vpermwi128 v54,v63,24
	_mm_store_si128((__m128i*)ctx.v54.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v63.u32), 0xE7));
	// vpermwi128 v53,v55,24
	_mm_store_si128((__m128i*)ctx.v53.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v55.u32), 0xE7));
	// vcmpeqfp128. v52,v53,v54
	_mm_store_ps(ctx.v52.f32, _mm_cmpeq_ps(_mm_load_ps(ctx.v53.f32), _mm_load_ps(ctx.v54.f32)));
	ctx.cr6.setFromMask(_mm_load_ps(ctx.v52.f32), 0xF);
	// blt cr6,0x82a00868
	if (ctx.cr6.lt) goto loc_82A00868;
	// lfs f0,16(r31)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f13.f64 = double(temp.f32);
	// fsubs f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 - ctx.f0.f64));
	// lfs f11,0(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	ctx.f11.f64 = double(temp.f32);
	// lfs f9,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f9.f64 = double(temp.f32);
	// fsubs f6,f9,f11
	ctx.f6.f64 = double(float(ctx.f9.f64 - ctx.f11.f64));
	// fmuls f5,f12,f12
	ctx.f5.f64 = double(float(ctx.f12.f64 * ctx.f12.f64));
	// fmadds f4,f6,f6,f5
	ctx.f4.f64 = double(float(ctx.f6.f64 * ctx.f6.f64 + ctx.f5.f64));
	// fcmpu cr6,f4,f10
	ctx.cr6.compare(ctx.f4.f64, ctx.f10.f64);
	// bge cr6,0x82a0086c
	if (!ctx.cr6.lt) goto loc_82A0086C;
loc_82A00868:
	// stvx128 v61,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v61.u8), _mm_load_si128((__m128i*)VectorMaskL)));
loc_82A0086C:
	// addi r10,r10,80
	ctx.r10.s64 = ctx.r10.s64 + 80;
	// bdnz 0x82a00808
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82A00808;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r6,24
	ctx.r6.s64 = 24;
	// li r29,32
	ctx.r29.s64 = 32;
	// lfs f9,23856(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 23856);
	ctx.f9.f64 = double(temp.f32);
loc_82A00888:
	// addi r26,r1,96
	ctx.r26.s64 = ctx.r1.s64 + 96;
	// fmr f11,f9
	ctx.fpscr.disableFlushMode();
	ctx.f11.f64 = ctx.f9.f64;
	// li r11,19
	ctx.r11.s64 = 19;
	// mr r9,r4
	ctx.r9.u64 = ctx.r4.u64;
	// li r10,1
	ctx.r10.s64 = 1;
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// stvx128 v61,r0,r26
	_mm_store_si128((__m128i*)(base + ((ctx.r26.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v61.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stfs f9,104(r1)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + 104, temp.u32);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_82A008AC:
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// lvx128 v63,r0,r8
	simd::store_shuffled(ctx.v63, simd::load_and_shuffle(base + ((ctx.r8.u32) & ~0xF), VectorMaskL));
	// addi r26,r1,80
	ctx.r26.s64 = ctx.r1.s64 + 80;
	// stvx128 v63,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stfs f8,84(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r1.u32 + 84, temp.u32);
	// lvx128 v62,r0,r26
	simd::store_shuffled(ctx.v62, simd::load_and_shuffle(base + ((ctx.r26.u32) & ~0xF), VectorMaskL));
	// vpermwi128 v51,v62,24
	_mm_store_si128((__m128i*)ctx.v51.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v62.u32), 0xE7));
	// vcmpeqfp128. v50,v51,v60
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v50.f32, _mm_cmpeq_ps(_mm_load_ps(ctx.v51.f32), _mm_load_ps(ctx.v60.f32)));
	ctx.cr6.setFromMask(_mm_load_ps(ctx.v50.f32), 0xF);
	// blt cr6,0x82a00938
	if (ctx.cr6.lt) goto loc_82A00938;
	// lvx128 v49,r0,r28
	simd::store_shuffled(ctx.v49, simd::load_and_shuffle(base + ((ctx.r28.u32) & ~0xF), VectorMaskL));
	// vpermwi128 v48,v63,24
	_mm_store_si128((__m128i*)ctx.v48.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v63.u32), 0xE7));
	// vpermwi128 v47,v49,24
	_mm_store_si128((__m128i*)ctx.v47.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v49.u32), 0xE7));
	// vcmpeqfp128. v46,v47,v48
	_mm_store_ps(ctx.v46.f32, _mm_cmpeq_ps(_mm_load_ps(ctx.v47.f32), _mm_load_ps(ctx.v48.f32)));
	ctx.cr6.setFromMask(_mm_load_ps(ctx.v46.f32), 0xF);
	// blt cr6,0x82a00938
	if (ctx.cr6.lt) goto loc_82A00938;
	// lfs f0,-8(r7)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -8);
	ctx.f0.f64 = double(temp.f32);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// lfs f12,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f12.f64 = double(temp.f32);
	// lfs f13,0(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	ctx.f13.f64 = double(temp.f32);
	// lfs f6,80(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	ctx.f6.f64 = double(temp.f32);
	// fsubs f13,f12,f13
	ctx.f13.f64 = double(float(ctx.f12.f64 - ctx.f13.f64));
	// fsubs f0,f6,f0
	ctx.f0.f64 = double(float(ctx.f6.f64 - ctx.f0.f64));
	// ble cr6,0x82a00914
	if (!ctx.cr6.gt) goto loc_82A00914;
	// fmuls f0,f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64 * ctx.f0.f64));
	// fmadds f13,f13,f13,f0
	ctx.f13.f64 = double(float(ctx.f13.f64 * ctx.f13.f64 + ctx.f0.f64));
	// fcmpu cr6,f13,f10
	ctx.cr6.compare(ctx.f13.f64, ctx.f10.f64);
	// blt cr6,0x82a00938
	if (ctx.cr6.lt) goto loc_82A00938;
loc_82A00914:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82a00924
	if (ctx.cr6.eq) goto loc_82A00924;
	// fcmpu cr6,f12,f11
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f12.f64, ctx.f11.f64);
	// bge cr6,0x82a0093c
	if (!ctx.cr6.lt) goto loc_82A0093C;
loc_82A00924:
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// stvx128 v62,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v62.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lfs f11,104(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f11.f64 = double(temp.f32);
	// b 0x82a0093c
	goto loc_82A0093C;
loc_82A00938:
	// stvx128 v61,r0,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v61.u8), _mm_load_si128((__m128i*)VectorMaskL)));
loc_82A0093C:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r8,r8,80
	ctx.r8.s64 = ctx.r8.s64 + 80;
	// bdnz 0x82a008ac
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82A008AC;
	// fcmpu cr6,f11,f9
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f11.f64, ctx.f9.f64);
	// beq cr6,0x82a009a4
	if (ctx.cr6.eq) goto loc_82A009A4;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// rlwinm r11,r9,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// lvx128 v45,r0,r8
	simd::store_shuffled(ctx.v45, simd::load_and_shuffle(base + ((ctx.r8.u32) & ~0xF), VectorMaskL));
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// stvx128 v45,r7,r6
	_mm_store_si128((__m128i*)(base + ((ctx.r7.u32 + ctx.r6.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v45.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lwz r9,72(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82a00990
	if (ctx.cr6.eq) goto loc_82A00990;
	// lwz r10,40(r7)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r7.u32 + 40);
	// ori r9,r10,1
	ctx.r9.u64 = ctx.r10.u64 | 1;
	// stw r9,40(r7)
	PPC_STORE_U32(ctx.r7.u32 + 40, ctx.r9.u32);
loc_82A00990:
	// addi r5,r5,1
	ctx.r5.s64 = ctx.r5.s64 + 1;
	// stvx128 v61,r11,r29
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32 + ctx.r29.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v61.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r7,r7,32
	ctx.r7.s64 = ctx.r7.s64 + 32;
	// cmplwi cr6,r5,6
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 6, ctx.xer);
	// blt cr6,0x82a00888
	if (ctx.cr6.lt) goto loc_82A00888;
loc_82A009A4:
	// lfs f0,48(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	ctx.f0.f64 = double(temp.f32);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// lfs f11,80(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f12,f0,f7
	ctx.f12.f64 = double(float(ctx.f0.f64 * ctx.f7.f64));
	// lfs f13,56(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f8,f11,f7
	ctx.f8.f64 = double(float(ctx.f11.f64 * ctx.f7.f64));
	// lfs f6,112(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f10,f13,f7
	ctx.f10.f64 = double(float(ctx.f13.f64 * ctx.f7.f64));
	// lfs f9,88(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	ctx.f9.f64 = double(temp.f32);
	// fmuls f3,f6,f7
	ctx.f3.f64 = double(float(ctx.f6.f64 * ctx.f7.f64));
	// lfs f4,16(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	ctx.f4.f64 = double(temp.f32);
	// fmuls f5,f9,f7
	ctx.f5.f64 = double(float(ctx.f9.f64 * ctx.f7.f64));
	// lfs f2,24(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	ctx.f2.f64 = double(temp.f32);
	// fmuls f1,f4,f7
	ctx.f1.f64 = double(float(ctx.f4.f64 * ctx.f7.f64));
	// lfs f0,120(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f13,f2,f7
	ctx.f13.f64 = double(float(ctx.f2.f64 * ctx.f7.f64));
	// lfs f11,144(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f9,f0,f7
	ctx.f9.f64 = double(float(ctx.f0.f64 * ctx.f7.f64));
	// lfs f6,152(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 152);
	ctx.f6.f64 = double(temp.f32);
	// fmuls f4,f11,f7
	ctx.f4.f64 = double(float(ctx.f11.f64 * ctx.f7.f64));
	// lfs f2,176(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 176);
	ctx.f2.f64 = double(temp.f32);
	// fmuls f0,f6,f7
	ctx.f0.f64 = double(float(ctx.f6.f64 * ctx.f7.f64));
	// lfs f11,184(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 184);
	ctx.f11.f64 = double(temp.f32);
	// fmuls f6,f2,f7
	ctx.f6.f64 = double(float(ctx.f2.f64 * ctx.f7.f64));
	// fmuls f2,f11,f7
	ctx.f2.f64 = double(float(ctx.f11.f64 * ctx.f7.f64));
	// stfs f1,16(r31)
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
	// stfs f13,24(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 24, temp.u32);
	// stfs f12,48(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 48, temp.u32);
	// stfs f10,56(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 56, temp.u32);
	// stfs f8,80(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 80, temp.u32);
	// stfs f5,88(r31)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r31.u32 + 88, temp.u32);
	// stfs f3,112(r31)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r31.u32 + 112, temp.u32);
	// stfs f9,120(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 120, temp.u32);
	// stfs f4,144(r31)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r31.u32 + 144, temp.u32);
	// stfs f0,152(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 152, temp.u32);
	// stfs f6,176(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r31.u32 + 176, temp.u32);
	// stfs f2,184(r31)
	temp.f32 = float(ctx.f2.f64);
	PPC_STORE_U32(ctx.r31.u32 + 184, temp.u32);
	// stw r4,64(r27)
	PPC_STORE_U32(ctx.r27.u32 + 64, ctx.r4.u32);
loc_82A00A3C:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82fa76c0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A00A44"))) PPC_WEAK_FUNC(sub_82A00A44);
PPC_FUNC_IMPL(__imp__sub_82A00A44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A00A48"))) PPC_WEAK_FUNC(sub_82A00A48);
PPC_FUNC_IMPL(__imp__sub_82A00A48) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa766c
	ctx.lr = 0x82A00A50;
	__savegprlr_25(ctx, base);
	// stfd f29,-88(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -88, ctx.f29.u64);
	// stfd f30,-80(r1)
	PPC_STORE_U64(ctx.r1.u32 + -80, ctx.f30.u64);
	// stfd f31,-72(r1)
	PPC_STORE_U64(ctx.r1.u32 + -72, ctx.f31.u64);
	// li r12,-128
	ctx.r12.s64 = -128;
	// stvx128 v126,r1,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r1.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v126.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// li r12,-112
	ctx.r12.s64 = -112;
	// stvx128 v127,r1,r12
	_mm_store_si128((__m128i*)(base + ((ctx.r1.u32 + ctx.r12.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v127.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stwu r1,-1984(r1)
	ea = -1984 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31964
	ctx.r10.s64 = -2094792704;
	// lis r11,22644
	ctx.r11.s64 = 1483997184;
	// addi r31,r10,28720
	ctx.r31.s64 = ctx.r10.s64 + 28720;
	// ori r11,r11,21363
	ctx.r11.u64 = ctx.r11.u64 | 21363;
	// li r10,80
	ctx.r10.s64 = 80;
	// lis r9,-31975
	ctx.r9.s64 = -2095513600;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r11,340(r31)
	PPC_STORE_U32(ctx.r31.u32 + 340, ctx.r11.u32);
	// addi r3,r31,336
	ctx.r3.s64 = ctx.r31.s64 + 336;
	// stw r10,336(r31)
	PPC_STORE_U32(ctx.r31.u32 + 336, ctx.r10.u32);
	// lwz r8,-13024(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + -13024);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82A00AA4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,376(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 376);
	// lwz r10,372(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 372);
	// lis r6,4096
	ctx.r6.s64 = 268435456;
	// extsw r7,r11
	ctx.r7.s64 = ctx.r11.s32;
	// extsw r4,r10
	ctx.r4.s64 = ctx.r10.s32;
	// std r7,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r7.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// std r4,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r4.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// subf r5,r3,r6
	ctx.r5.s64 = ctx.r6.s64 - ctx.r3.s64;
	// fcfid f1,f0
	ctx.f1.f64 = double(ctx.f0.s64);
	// subfic r11,r5,0
	ctx.xer.ca = ctx.r5.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r5.s64;
	// fcfid f2,f13
	ctx.f2.f64 = double(ctx.f13.s64);
	// subfe r9,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r28,r9,r3
	ctx.r28.u64 = ctx.r9.u64 & ctx.r3.u64;
	// bl 0x82fa3a88
	ctx.lr = 0x82A00AE4;
	sub_82FA3A88(ctx, base);
	// frsp f12,f1
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f1.f64));
	// lis r8,-32254
	ctx.r8.s64 = -2113798144;
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lfs f0,-3432(r8)
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -3432);
	ctx.f0.f64 = double(temp.f32);
	// lfd f13,22496(r7)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r7.u32 + 22496);
	// fmuls f11,f12,f0
	ctx.f11.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// fadd f1,f11,f13
	ctx.f1.f64 = ctx.f11.f64 + ctx.f13.f64;
	// bl 0x82fa7560
	ctx.lr = 0x82A00B04;
	sub_82FA7560(ctx, base);
	// lwz r10,380(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 380);
	// fctiwz f10,f1
	ctx.fpscr.disableFlushMode();
	ctx.f10.s64 = (ctx.f1.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f1.f64));
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// stfd f10,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f10.u64);
	// clrlwi r6,r10,30
	ctx.r6.u64 = ctx.r10.u32 & 0x3;
	// lwz r26,84(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addic r5,r6,-1
	ctx.xer.ca = ctx.r6.u32 > 0;
	ctx.r5.s64 = ctx.r6.s64 + -1;
	// subfe r27,r5,r6
	temp.u8 = (~ctx.r5.u32 + ctx.r6.u32 < ~ctx.r5.u32) | (~ctx.r5.u32 + ctx.r6.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r27.u64 = ~ctx.r5.u64 + ctx.r6.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// beq cr6,0x82a00b54
	if (ctx.cr6.eq) goto loc_82A00B54;
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// beq cr6,0x82a00b54
	if (ctx.cr6.eq) goto loc_82A00B54;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// blt cr6,0x82a00b48
	if (ctx.cr6.lt) goto loc_82A00B48;
	// rlwinm r11,r10,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x8;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a00b54
	if (ctx.cr6.eq) goto loc_82A00B54;
loc_82A00B48:
	// li r3,31
	ctx.r3.s64 = 31;
	// bl 0x829ff128
	ctx.lr = 0x82A00B50;
	sub_829FF128(ctx, base);
	// b 0x82a013a8
	goto loc_82A013A8;
loc_82A00B54:
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// bne cr6,0x82a00b9c
	if (!ctx.cr6.eq) goto loc_82A00B9C;
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82a00b9c
	if (!ctx.cr6.eq) goto loc_82A00B9C;
	// addi r3,r31,36
	ctx.r3.s64 = ctx.r31.s64 + 36;
	// bl 0x83179274
	ctx.lr = 0x82A00B70;
	__imp__KfAcquireSpinLock(ctx, base);
	// lis r11,-31964
	ctx.r11.s64 = -2094792704;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r11,29312(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 29312);
	// rlwinm r10,r11,0,5,5
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4000000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82a00bd8
	if (ctx.cr6.eq) goto loc_82A00BD8;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
loc_82A00B90:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,36
	ctx.r3.s64 = ctx.r31.s64 + 36;
	// bl 0x83179294
	ctx.lr = 0x82A00B9C;
	__imp__KfReleaseSpinLock(ctx, base);
loc_82A00B9C:
	// addi r30,r29,15392
	ctx.r30.s64 = ctx.r29.s64 + 15392;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x829ff7d8
	ctx.lr = 0x82A00BA8;
	sub_829FF7D8(ctx, base);
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// cmplwi cr6,r11,6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 6, ctx.xer);
	// bgt cr6,0x82a013a0
	if (ctx.cr6.gt) goto loc_82A013A0;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82a013a8
	if (ctx.cr6.eq) goto loc_82A013A8;
	// bdz 0x82a00c40
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_82A00C40;
	// bdz 0x82a00eb4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_82A00EB4;
	// bdz 0x82a00e5c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_82A00E5C;
	// bdz 0x82a00e9c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_82A00E9C;
	// bdz 0x82a01304
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_82A01304;
	// b 0x82a00c2c
	goto loc_82A00C2C;
loc_82A00BD8:
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82a00b90
	if (!ctx.cr6.eq) goto loc_82A00B90;
	// li r10,7
	ctx.r10.s64 = 7;
	// li r9,1
	ctx.r9.s64 = 1;
	// addi r11,r31,464
	ctx.r11.s64 = ctx.r31.s64 + 464;
	// stw r9,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r9.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82A00BFC:
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x82a00bfc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82A00BFC;
	// li r11,8
	ctx.r11.s64 = 8;
	// addi r10,r31,468
	ctx.r10.s64 = ctx.r31.s64 + 468;
	// stw r11,464(r31)
	PPC_STORE_U32(ctx.r31.u32 + 464, ctx.r11.u32);
	// stw r10,496(r31)
	PPC_STORE_U32(ctx.r31.u32 + 496, ctx.r10.u32);
	// bl 0x829ff748
	ctx.lr = 0x82A00C18;
	sub_829FF748(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,36
	ctx.r3.s64 = ctx.r31.s64 + 36;
	// bl 0x83179294
	ctx.lr = 0x82A00C24;
	__imp__KfReleaseSpinLock(ctx, base);
	// bl 0x829ff588
	ctx.lr = 0x82A00C28;
	sub_829FF588(ctx, base);
	// b 0x82a00b9c
	goto loc_82A00B9C;
loc_82A00C2C:
	// li r11,0
	ctx.r11.s64 = 0;
	// li r3,995
	ctx.r3.s64 = 995;
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// bl 0x829ff128
	ctx.lr = 0x82A00C3C;
	sub_829FF128(ctx, base);
	// b 0x82a013a8
	goto loc_82A013A8;
loc_82A00C40:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// blt cr6,0x82a00e50
	if (ctx.cr6.lt) goto loc_82A00E50;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// bne cr6,0x82a00e90
	if (!ctx.cr6.eq) goto loc_82A00E90;
	// lwz r11,380(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 380);
	// rlwinm r11,r11,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a00c6c
	if (ctx.cr6.eq) goto loc_82A00C6C;
loc_82A00C60:
	// li r3,25
	ctx.r3.s64 = 25;
	// bl 0x829ff128
	ctx.lr = 0x82A00C68;
	sub_829FF128(ctx, base);
	// b 0x82a013a8
	goto loc_82A013A8;
loc_82A00C6C:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f0,396(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 396);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,5184(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5184);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// beq cr6,0x82a00d38
	if (ctx.cr6.eq) goto loc_82A00D38;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82a00ca4
	if (!ctx.cr6.eq) goto loc_82A00CA4;
	// li r11,15
	ctx.r11.s64 = 15;
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r10,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r10.u32);
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// b 0x82a013a8
	goto loc_82A013A8;
loc_82A00CA4:
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a00cbc
	if (ctx.cr6.eq) goto loc_82A00CBC;
loc_82A00CB0:
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// b 0x82a013a8
	goto loc_82A013A8;
loc_82A00CBC:
	// bl 0x829ff410
	ctx.lr = 0x82A00CC0;
	sub_829FF410(ctx, base);
	// lfs f0,28(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,32(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	ctx.f13.f64 = double(temp.f32);
	// lwz r3,100(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bne cr6,0x82a00d04
	if (!ctx.cr6.eq) goto loc_82A00D04;
	// subf r11,r26,r3
	ctx.r11.s64 = ctx.r3.s64 - ctx.r26.s64;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// srawi r9,r11,31
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFFFFFF) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 31;
	// xor r8,r11,r9
	ctx.r8.u64 = ctx.r11.u64 ^ ctx.r9.u64;
	// subf r7,r9,r8
	ctx.r7.s64 = ctx.r8.s64 - ctx.r9.s64;
	// lfd f0,11528(r10)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r10.u32 + 11528);
	// extsw r6,r7
	ctx.r6.s64 = ctx.r7.s32;
	// std r6,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r6.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// fcmpu cr6,f12,f0
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// ble cr6,0x82a00d08
	if (!ctx.cr6.gt) goto loc_82A00D08;
loc_82A00D04:
	// bl 0x829ff318
	ctx.lr = 0x82A00D08;
	sub_829FF318(ctx, base);
loc_82A00D08:
	// lwz r11,464(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 464);
	// rlwinm r11,r11,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82a00e0c
	if (!ctx.cr6.eq) goto loc_82A00E0C;
	// lwz r11,428(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 428);
	// li r10,3
	ctx.r10.s64 = 3;
	// li r9,5
	ctx.r9.s64 = 5;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r10,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r10.u32);
	// stw r9,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r9.u32);
	// stw r11,428(r31)
	PPC_STORE_U32(ctx.r31.u32 + 428, ctx.r11.u32);
	// b 0x82a013a8
	goto loc_82A013A8;
loc_82A00D38:
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82a00cb0
	if (!ctx.cr6.eq) goto loc_82A00CB0;
	// lwz r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a00d80
	if (ctx.cr6.eq) goto loc_82A00D80;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// bge cr6,0x82a00d80
	if (!ctx.cr6.lt) goto loc_82A00D80;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// subfic r3,r10,23
	ctx.xer.ca = ctx.r10.u32 <= 23;
	ctx.r3.s64 = 23 - ctx.r10.s64;
	// bl 0x829ff318
	ctx.lr = 0x82A00D74;
	sub_829FF318(ctx, base);
	// li r11,60
	ctx.r11.s64 = 60;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// b 0x82a013a8
	goto loc_82A013A8;
loc_82A00D80:
	// lwz r8,428(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 428);
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r11,416(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 416);
	// li r9,5
	ctx.r9.s64 = 5;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// stw r10,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r10.u32);
	// stw r9,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r9.u32);
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// stw r8,428(r31)
	PPC_STORE_U32(ctx.r31.u32 + 428, ctx.r8.u32);
	// beq cr6,0x82a00e2c
	if (ctx.cr6.eq) goto loc_82A00E2C;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// beq cr6,0x82a00e2c
	if (ctx.cr6.eq) goto loc_82A00E2C;
	// bl 0x829ff410
	ctx.lr = 0x82A00DB4;
	sub_829FF410(ctx, base);
	// lfs f0,28(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,32(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	ctx.f13.f64 = double(temp.f32);
	// lwz r3,100(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bne cr6,0x82a00df8
	if (!ctx.cr6.eq) goto loc_82A00DF8;
	// subf r11,r26,r3
	ctx.r11.s64 = ctx.r3.s64 - ctx.r26.s64;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// srawi r9,r11,31
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFFFFFF) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 31;
	// xor r8,r11,r9
	ctx.r8.u64 = ctx.r11.u64 ^ ctx.r9.u64;
	// subf r7,r9,r8
	ctx.r7.s64 = ctx.r8.s64 - ctx.r9.s64;
	// lfd f0,11528(r10)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r10.u32 + 11528);
	// extsw r6,r7
	ctx.r6.s64 = ctx.r7.s32;
	// std r6,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r6.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// fcmpu cr6,f12,f0
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// ble cr6,0x82a00dfc
	if (!ctx.cr6.gt) goto loc_82A00DFC;
loc_82A00DF8:
	// bl 0x829ff318
	ctx.lr = 0x82A00DFC;
	sub_829FF318(ctx, base);
loc_82A00DFC:
	// lwz r11,464(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 464);
	// rlwinm r11,r11,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a00e20
	if (ctx.cr6.eq) goto loc_82A00E20;
loc_82A00E0C:
	// li r11,5
	ctx.r11.s64 = 5;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// stw r10,432(r31)
	PPC_STORE_U32(ctx.r31.u32 + 432, ctx.r10.u32);
	// b 0x82a013a8
	goto loc_82A013A8;
loc_82A00E20:
	// li r11,3
	ctx.r11.s64 = 3;
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// b 0x82a013a8
	goto loc_82A013A8;
loc_82A00E2C:
	// bl 0x829ff588
	ctx.lr = 0x82A00E30;
	sub_829FF588(ctx, base);
	// lwz r3,444(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 444);
	// stw r3,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r3.u32);
	// bl 0x829ff318
	ctx.lr = 0x82A00E3C;
	sub_829FF318(ctx, base);
	// li r11,5
	ctx.r11.s64 = 5;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// stw r10,432(r31)
	PPC_STORE_U32(ctx.r31.u32 + 432, ctx.r10.u32);
	// b 0x82a013a8
	goto loc_82A013A8;
loc_82A00E50:
	// li r3,21
	ctx.r3.s64 = 21;
	// bl 0x829ff128
	ctx.lr = 0x82A00E58;
	sub_829FF128(ctx, base);
	// b 0x82a013a8
	goto loc_82A013A8;
loc_82A00E5C:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// blt cr6,0x82a00e50
	if (ctx.cr6.lt) goto loc_82A00E50;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// bne cr6,0x82a00e90
	if (!ctx.cr6.eq) goto loc_82A00E90;
	// lwz r11,380(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 380);
	// rlwinm r11,r11,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82a00c60
	if (!ctx.cr6.eq) goto loc_82A00C60;
	// li r11,4
	ctx.r11.s64 = 4;
	// li r10,15
	ctx.r10.s64 = 15;
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// stw r10,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r10.u32);
	// b 0x82a013a8
	goto loc_82A013A8;
loc_82A00E90:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r11.u32);
	// b 0x82a013a8
	goto loc_82A013A8;
loc_82A00E9C:
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82a00cb0
	if (!ctx.cr6.eq) goto loc_82A00CB0;
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// b 0x82a013a8
	goto loc_82A013A8;
loc_82A00EB4:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82a013a8
	if (ctx.cr6.eq) goto loc_82A013A8;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82a00150
	ctx.lr = 0x82A00EC4;
	sub_82A00150(ctx, base);
	// lwz r11,92(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// mr r25,r11
	ctx.r25.u64 = ctx.r11.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r11.u32);
	// lfs f31,100(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f31.f64 = double(temp.f32);
	// lfs f30,104(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f30.f64 = double(temp.f32);
	// fmr f2,f31
	ctx.f2.f64 = ctx.f31.f64;
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// bl 0x82fa3a88
	ctx.lr = 0x82A00EE8;
	sub_82FA3A88(ctx, base);
	// addi r3,r31,404
	ctx.r3.s64 = ctx.r31.s64 + 404;
	// frsp f29,f1
	ctx.fpscr.disableFlushMode();
	ctx.f29.f64 = double(float(ctx.f1.f64));
	// bl 0x829fef78
	ctx.lr = 0x82A00EF4;
	sub_829FEF78(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// fmr f2,f29
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f29.f64;
	// addi r4,r31,384
	ctx.r4.s64 = ctx.r31.s64 + 384;
	// mr r8,r25
	ctx.r8.u64 = ctx.r25.u64;
	// addi r9,r1,256
	ctx.r9.s64 = ctx.r1.s64 + 256;
	// bl 0x82a3de08
	ctx.lr = 0x82A00F10;
	sub_82A3DE08(ctx, base);
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x82a003c8
	ctx.lr = 0x82A00F18;
	sub_82A003C8(ctx, base);
	// addi r11,r1,304
	ctx.r11.s64 = ctx.r1.s64 + 304;
	// vspltisw128 v63,0
	_mm_store_si128((__m128i*)ctx.v63.u32, _mm_set1_epi32(int(0x0)));
	// li r10,0
	ctx.r10.s64 = 0;
	// vpermwi128 v62,v63,24
	_mm_store_si128((__m128i*)ctx.v62.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v63.u32), 0xE7));
	// lvx128 v127,r0,r11
	simd::store_shuffled(ctx.v127, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// vpermwi128 v61,v127,24
	_mm_store_si128((__m128i*)ctx.v61.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v127.u32), 0xE7));
	// vcmpeqfp128. v60,v61,v62
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v60.f32, _mm_cmpeq_ps(_mm_load_ps(ctx.v61.f32), _mm_load_ps(ctx.v62.f32)));
	ctx.cr6.setFromMask(_mm_load_ps(ctx.v60.f32), 0xF);
	// blt cr6,0x82a01290
	if (ctx.cr6.lt) goto loc_82A01290;
	// lfs f0,272(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 272);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,256(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 256);
	ctx.f13.f64 = double(temp.f32);
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// fadds f12,f0,f13
	ctx.f12.f64 = double(float(ctx.f0.f64 + ctx.f13.f64));
	// lfs f0,11556(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 11556);
	ctx.f0.f64 = double(temp.f32);
	// fmuls f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 * ctx.f0.f64));
	// stfs f0,16(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 16, temp.u32);
	// blt cr6,0x82a013a8
	if (ctx.cr6.lt) goto loc_82A013A8;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// bne cr6,0x82a013a8
	if (!ctx.cr6.eq) goto loc_82A013A8;
	// lfs f0,20(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,296(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 296);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// ble cr6,0x82a00fec
	if (!ctx.cr6.gt) goto loc_82A00FEC;
	// lwz r11,464(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 464);
	// rlwinm r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82a00fec
	if (!ctx.cr6.eq) goto loc_82A00FEC;
	// bl 0x829ff410
	ctx.lr = 0x82A00F88;
	sub_829FF410(ctx, base);
	// lfs f0,28(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,32(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	ctx.f13.f64 = double(temp.f32);
	// lwz r3,100(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bne cr6,0x82a00fcc
	if (!ctx.cr6.eq) goto loc_82A00FCC;
	// subf r11,r26,r3
	ctx.r11.s64 = ctx.r3.s64 - ctx.r26.s64;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// srawi r9,r11,31
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFFFFFF) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 31;
	// xor r8,r11,r9
	ctx.r8.u64 = ctx.r11.u64 ^ ctx.r9.u64;
	// subf r7,r9,r8
	ctx.r7.s64 = ctx.r8.s64 - ctx.r9.s64;
	// lfd f0,11528(r10)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r10.u32 + 11528);
	// extsw r6,r7
	ctx.r6.s64 = ctx.r7.s32;
	// std r6,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r6.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// fcmpu cr6,f12,f0
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// ble cr6,0x82a00fd0
	if (!ctx.cr6.gt) goto loc_82A00FD0;
loc_82A00FCC:
	// bl 0x829ff318
	ctx.lr = 0x82A00FD0;
	sub_829FF318(ctx, base);
loc_82A00FD0:
	// li r11,5
	ctx.r11.s64 = 5;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// stw r10,432(r31)
	PPC_STORE_U32(ctx.r31.u32 + 432, ctx.r10.u32);
	// bl 0x82a00730
	ctx.lr = 0x82A00FE8;
	sub_82A00730(ctx, base);
	// b 0x82a013a8
	goto loc_82A013A8;
loc_82A00FEC:
	// lwz r11,328(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 328);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82a01068
	if (ctx.cr6.eq) goto loc_82A01068;
	// cmpwi cr6,r26,27
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 27, ctx.xer);
	// bge cr6,0x82a01274
	if (!ctx.cr6.lt) goto loc_82A01274;
	// lwz r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a01274
	if (ctx.cr6.eq) goto loc_82A01274;
	// extsw r11,r26
	ctx.r11.s64 = ctx.r26.s32;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f13,f0
	ctx.f13.f64 = double(ctx.f0.s64);
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// frsp f12,f13
	ctx.f12.f64 = double(float(ctx.f13.f64));
	// lfs f0,-27800(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -27800);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,-27804(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + -27804);
	ctx.f13.f64 = double(temp.f32);
	// fadds f0,f12,f0
	ctx.f0.f64 = double(float(ctx.f12.f64 + ctx.f0.f64));
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// blt cr6,0x82a01040
	if (ctx.cr6.lt) goto loc_82A01040;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
loc_82A01040:
	// fctiwz f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f0.f64));
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x829ff318
	ctx.lr = 0x82A01050;
	sub_829FF318(ctx, base);
	// lwz r11,88(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// li r10,3
	ctx.r10.s64 = 3;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r10,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r10.u32);
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// b 0x82a013a8
	goto loc_82A013A8;
loc_82A01068:
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// stvx128 v127,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v127.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// bl 0x82fa3a88
	ctx.lr = 0x82A0107C;
	sub_82FA3A88(ctx, base);
	// frsp f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = double(float(ctx.f1.f64));
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// bl 0x8257a450
	ctx.lr = 0x82A0108C;
	sub_8257A450(ctx, base);
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// lfs f0,24(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	ctx.f0.f64 = double(temp.f32);
	// lfs f30,5184(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5184);
	ctx.f30.f64 = double(temp.f32);
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// beq cr6,0x82a01180
	if (ctx.cr6.eq) goto loc_82A01180;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// addi r3,r1,192
	ctx.r3.s64 = ctx.r1.s64 + 192;
	// stvx128 v127,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v127.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stfs f0,88(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// bl 0x8257a450
	ctx.lr = 0x82A010B8;
	sub_8257A450(ctx, base);
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lvx128 v0,r0,r3
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r3.u32) & ~0xF), VectorMaskL));
	// li r9,32
	ctx.r9.s64 = 32;
	// lfs f0,20(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	ctx.f0.f64 = double(temp.f32);
	// li r8,48
	ctx.r8.s64 = 48;
	// fcmpu cr6,f0,f30
	ctx.cr6.compare(ctx.f0.f64, ctx.f30.f64);
	// li r7,16
	ctx.r7.s64 = 16;
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// lvx128 v63,r0,r10
	simd::store_shuffled(ctx.v63, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// lvx128 v13,r3,r9
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r3.u32 + ctx.r9.u32) & ~0xF), VectorMaskL));
	// vspltw128 v10,v63,2
	_mm_store_si128((__m128i*)ctx.v10.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v63.u32), 0x55));
	// lvx128 v12,r3,r8
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((ctx.r3.u32 + ctx.r8.u32) & ~0xF), VectorMaskL));
	// vspltw128 v9,v63,1
	_mm_store_si128((__m128i*)ctx.v9.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v63.u32), 0xAA));
	// lvx128 v11,r3,r7
	simd::store_shuffled(ctx.v11, simd::load_and_shuffle(base + ((ctx.r3.u32 + ctx.r7.u32) & ~0xF), VectorMaskL));
	// vspltw128 v8,v63,0
	_mm_store_si128((__m128i*)ctx.v8.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v63.u32), 0xFF));
	// vmaddfp v10,v13,v10,v12
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v10.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v10.f32)), _mm_load_ps(ctx.v12.f32)));
	// vmaddfp v10,v9,v11,v10
	_mm_store_ps(ctx.v10.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v9.f32), _mm_load_ps(ctx.v11.f32)), _mm_load_ps(ctx.v10.f32)));
	// vmaddfp v10,v8,v0,v10
	_mm_store_ps(ctx.v10.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v8.f32), _mm_load_ps(ctx.v0.f32)), _mm_load_ps(ctx.v10.f32)));
	// vor128 v126,v10,v10
	_mm_store_si128((__m128i*)ctx.v126.u8, _mm_load_si128((__m128i*)ctx.v10.u8));
	// stvx128 v126,r0,r6
	_mm_store_si128((__m128i*)(base + ((ctx.r6.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v126.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// bne cr6,0x82a01114
	if (!ctx.cr6.eq) goto loc_82A01114;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lfs f0,-27808(r11)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -27808);
	ctx.f0.f64 = double(temp.f32);
loc_82A01114:
	// stfs f0,88(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 88, temp.u32);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lvx128 v63,r0,r11
	simd::store_shuffled(ctx.v63, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// vspltw128 v10,v63,2
	_mm_store_si128((__m128i*)ctx.v10.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v63.u32), 0x55));
	// vspltw128 v9,v63,1
	_mm_store_si128((__m128i*)ctx.v9.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v63.u32), 0xAA));
	// vspltw128 v8,v63,0
	_mm_store_si128((__m128i*)ctx.v8.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v63.u32), 0xFF));
	// vmaddfp v13,v13,v10,v12
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v13.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v13.f32), _mm_load_ps(ctx.v10.f32)), _mm_load_ps(ctx.v12.f32)));
	// vmaddfp v13,v9,v11,v13
	_mm_store_ps(ctx.v13.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v9.f32), _mm_load_ps(ctx.v11.f32)), _mm_load_ps(ctx.v13.f32)));
	// vmaddfp v0,v8,v0,v13
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v8.f32), _mm_load_ps(ctx.v0.f32)), _mm_load_ps(ctx.v13.f32)));
	// vor128 v127,v0,v0
	_mm_store_si128((__m128i*)ctx.v127.u8, _mm_load_si128((__m128i*)ctx.v0.u8));
	// stvx128 v127,r0,r10
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v127.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lfs f1,84(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	ctx.f1.f64 = double(temp.f32);
	// lfs f2,88(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	ctx.f2.f64 = double(temp.f32);
	// bl 0x82fa3a88
	ctx.lr = 0x82A01150;
	sub_82FA3A88(ctx, base);
	// frsp f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = double(float(ctx.f1.f64));
	// lfs f2,120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f2.f64 = double(temp.f32);
	// lfs f1,116(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82fa3a88
	ctx.lr = 0x82A01160;
	sub_82FA3A88(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// fcmpu cr6,f31,f0
	ctx.cr6.compare(ctx.f31.f64, ctx.f0.f64);
	// ble cr6,0x82a01178
	if (!ctx.cr6.gt) goto loc_82A01178;
	// stvx128 v127,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v127.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// b 0x82a011c0
	goto loc_82A011C0;
loc_82A01178:
	// stvx128 v126,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v126.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// b 0x82a011c0
	goto loc_82A011C0;
loc_82A01180:
	// addi r11,r1,176
	ctx.r11.s64 = ctx.r1.s64 + 176;
	// vspltw128 v12,v127,2
	_mm_store_si128((__m128i*)ctx.v12.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v127.u32), 0x55));
	// addi r10,r1,160
	ctx.r10.s64 = ctx.r1.s64 + 160;
	// vspltw128 v11,v127,1
	_mm_store_si128((__m128i*)ctx.v11.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v127.u32), 0xAA));
	// addi r9,r1,144
	ctx.r9.s64 = ctx.r1.s64 + 144;
	// vspltw128 v10,v127,0
	_mm_store_si128((__m128i*)ctx.v10.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v127.u32), 0xFF));
	// addi r8,r1,128
	ctx.r8.s64 = ctx.r1.s64 + 128;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// lvx128 v13,r0,r11
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// lvx128 v0,r0,r10
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// vmaddfp v0,v0,v12,v13
	ctx.fpscr.enableFlushMode();
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v0.f32), _mm_load_ps(ctx.v12.f32)), _mm_load_ps(ctx.v13.f32)));
	// lvx128 v13,r0,r9
	simd::store_shuffled(ctx.v13, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// lvx128 v12,r0,r8
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((ctx.r8.u32) & ~0xF), VectorMaskL));
	// vmaddfp v0,v11,v13,v0
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v11.f32), _mm_load_ps(ctx.v13.f32)), _mm_load_ps(ctx.v0.f32)));
	// vmaddfp v0,v10,v12,v0
	_mm_store_ps(ctx.v0.f32, _mm_add_ps(_mm_mul_ps(_mm_load_ps(ctx.v10.f32), _mm_load_ps(ctx.v12.f32)), _mm_load_ps(ctx.v0.f32)));
	// stvx128 v0,r0,r7
	_mm_store_si128((__m128i*)(base + ((ctx.r7.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
loc_82A011C0:
	// lfs f30,104(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f30.f64 = double(temp.f32);
	// lfs f31,28(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	ctx.f31.f64 = double(temp.f32);
	// fmr f2,f30
	ctx.f2.f64 = ctx.f30.f64;
	// lfs f1,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82fa3a88
	ctx.lr = 0x82A011D4;
	sub_82FA3A88(ctx, base);
	// frsp f0,f1
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f1.f64));
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// fmr f2,f30
	ctx.f2.f64 = ctx.f30.f64;
	// lfd f31,9440(r11)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r11.u32 + 9440);
	// fmul f13,f0,f31
	ctx.f13.f64 = ctx.f0.f64 * ctx.f31.f64;
	// frsp f30,f13
	ctx.f30.f64 = double(float(ctx.f13.f64));
	// bl 0x82fa3a88
	ctx.lr = 0x82A011F4;
	sub_82FA3A88(ctx, base);
	// frsp f12,f1
	ctx.fpscr.disableFlushMode();
	ctx.f12.f64 = double(float(ctx.f1.f64));
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lfs f0,28(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,32(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// lfd f0,-27816(r10)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r10.u32 + -27816);
	// fsub f11,f0,f30
	ctx.f11.f64 = ctx.f0.f64 - ctx.f30.f64;
	// fmul f10,f12,f31
	ctx.f10.f64 = ctx.f12.f64 * ctx.f31.f64;
	// frsp f9,f10
	ctx.f9.f64 = double(float(ctx.f10.f64));
	// fsub f8,f11,f9
	ctx.f8.f64 = ctx.f11.f64 - ctx.f9.f64;
	// frsp f0,f8
	ctx.f0.f64 = double(float(ctx.f8.f64));
	// bne cr6,0x82a01238
	if (!ctx.cr6.eq) goto loc_82A01238;
	// fabs f12,f0
	ctx.f12.u64 = ctx.f0.u64 & ~0x8000000000000000;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lfs f13,21500(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 21500);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f12,f13
	ctx.cr6.compare(ctx.f12.f64, ctx.f13.f64);
	// ble cr6,0x82a01274
	if (!ctx.cr6.gt) goto loc_82A01274;
loc_82A01238:
	// fctiwz f0,f0
	ctx.fpscr.disableFlushMode();
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f0.f64));
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// subf r3,r11,r26
	ctx.r3.s64 = ctx.r26.s64 - ctx.r11.s64;
	// cmpwi cr6,r3,27
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 27, ctx.xer);
	// blt cr6,0x82a01258
	if (ctx.cr6.lt) goto loc_82A01258;
	// li r3,27
	ctx.r3.s64 = 27;
	// b 0x82a01264
	goto loc_82A01264;
loc_82A01258:
	// cmpwi cr6,r3,-27
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -27, ctx.xer);
	// bgt cr6,0x82a01264
	if (ctx.cr6.gt) goto loc_82A01264;
	// li r3,-27
	ctx.r3.s64 = -27;
loc_82A01264:
	// lwz r11,428(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 428);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,428(r31)
	PPC_STORE_U32(ctx.r31.u32 + 428, ctx.r11.u32);
	// bl 0x829ff318
	ctx.lr = 0x82A01274;
	sub_829FF318(ctx, base);
loc_82A01274:
	// li r11,5
	ctx.r11.s64 = 5;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// stw r10,432(r31)
	PPC_STORE_U32(ctx.r31.u32 + 432, ctx.r10.u32);
	// bl 0x82a00730
	ctx.lr = 0x82A0128C;
	sub_82A00730(ctx, base);
	// b 0x82a013a8
	goto loc_82A013A8;
loc_82A01290:
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x82a00730
	ctx.lr = 0x82A01298;
	sub_82A00730(ctx, base);
	// li r11,5
	ctx.r11.s64 = 5;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// stw r10,432(r31)
	PPC_STORE_U32(ctx.r31.u32 + 432, ctx.r10.u32);
	// lwz r11,428(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 428);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,428(r31)
	PPC_STORE_U32(ctx.r31.u32 + 428, ctx.r11.u32);
	// bl 0x829ff410
	ctx.lr = 0x82A012B8;
	sub_829FF410(ctx, base);
	// lfs f0,28(r31)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,32(r31)
	temp.u32 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	ctx.f13.f64 = double(temp.f32);
	// lwz r3,100(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// bne cr6,0x82a012fc
	if (!ctx.cr6.eq) goto loc_82A012FC;
	// subf r11,r26,r3
	ctx.r11.s64 = ctx.r3.s64 - ctx.r26.s64;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// srawi r9,r11,31
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFFFFFF) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 31;
	// xor r8,r11,r9
	ctx.r8.u64 = ctx.r11.u64 ^ ctx.r9.u64;
	// subf r7,r9,r8
	ctx.r7.s64 = ctx.r8.s64 - ctx.r9.s64;
	// lfd f0,11528(r10)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r10.u32 + 11528);
	// extsw r6,r7
	ctx.r6.s64 = ctx.r7.s32;
	// std r6,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r6.u64);
	// lfd f13,80(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 80);
	// fcfid f12,f13
	ctx.f12.f64 = double(ctx.f13.s64);
	// fcmpu cr6,f12,f0
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// ble cr6,0x82a013a8
	if (!ctx.cr6.gt) goto loc_82A013A8;
loc_82A012FC:
	// bl 0x829ff318
	ctx.lr = 0x82A01300;
	sub_829FF318(ctx, base);
	// b 0x82a013a8
	goto loc_82A013A8;
loc_82A01304:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// blt cr6,0x82a00e50
	if (ctx.cr6.lt) goto loc_82A00E50;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// bne cr6,0x82a013a8
	if (!ctx.cr6.eq) goto loc_82A013A8;
	// lwz r11,380(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 380);
	// rlwinm r11,r11,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a01338
	if (ctx.cr6.eq) goto loc_82A01338;
	// lwz r11,464(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 464);
	// rlwinm r11,r11,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a00c60
	if (ctx.cr6.eq) goto loc_82A00C60;
	// bl 0x83178cf4
	ctx.lr = 0x82A01338;
	__imp__XamNuiCameraElevationStopMovement(ctx, base);
loc_82A01338:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82a013a8
	if (ctx.cr6.eq) goto loc_82A013A8;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82a00150
	ctx.lr = 0x82A01348;
	sub_82A00150(ctx, base);
	// lwz r11,92(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// lfs f2,116(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f2.f64 = double(temp.f32);
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
	// lfs f1,120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f1.f64 = double(temp.f32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r11.u32);
	// bl 0x82fa3a88
	ctx.lr = 0x82A01364;
	sub_82FA3A88(ctx, base);
	// addi r3,r31,404
	ctx.r3.s64 = ctx.r31.s64 + 404;
	// frsp f31,f1
	ctx.fpscr.disableFlushMode();
	ctx.f31.f64 = double(float(ctx.f1.f64));
	// bl 0x829fef78
	ctx.lr = 0x82A01370;
	sub_829FEF78(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// fmr f2,f31
	ctx.fpscr.disableFlushMode();
	ctx.f2.f64 = ctx.f31.f64;
	// addi r4,r31,384
	ctx.r4.s64 = ctx.r31.s64 + 384;
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// addi r9,r1,256
	ctx.r9.s64 = ctx.r1.s64 + 256;
	// bl 0x82a3de08
	ctx.lr = 0x82A0138C;
	sub_82A3DE08(ctx, base);
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x82a00730
	ctx.lr = 0x82A01394;
	sub_82A00730(ctx, base);
	// lwz r3,432(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 432);
	// bl 0x829ff128
	ctx.lr = 0x82A0139C;
	sub_829FF128(ctx, base);
	// b 0x82a013a8
	goto loc_82A013A8;
loc_82A013A0:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,380(r31)
	PPC_STORE_U32(ctx.r31.u32 + 380, ctx.r11.u32);
loc_82A013A8:
	// addi r1,r1,1984
	ctx.r1.s64 = ctx.r1.s64 + 1984;
	// li r0,-128
	ctx.r0.s64 = -128;
	// lvx128 v126,r1,r0
	simd::store_shuffled(ctx.v126, simd::load_and_shuffle(base + ((ctx.r1.u32 + ctx.r0.u32) & ~0xF), VectorMaskL));
	// li r0,-112
	ctx.r0.s64 = -112;
	// lvx128 v127,r1,r0
	simd::store_shuffled(ctx.v127, simd::load_and_shuffle(base + ((ctx.r1.u32 + ctx.r0.u32) & ~0xF), VectorMaskL));
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

__attribute__((alias("__imp__sub_82A013CC"))) PPC_WEAK_FUNC(sub_82A013CC);
PPC_FUNC_IMPL(__imp__sub_82A013CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A013D0"))) PPC_WEAK_FUNC(sub_82A013D0);
PPC_FUNC_IMPL(__imp__sub_82A013D0) {
	PPC_FUNC_PROLOGUE();
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,255
	ctx.r3.s64 = 255;
	// b 0x83178d54
	__imp__XamShowNuiTroubleshooterUI(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A013E0"))) PPC_WEAK_FUNC(sub_82A013E0);
PPC_FUNC_IMPL(__imp__sub_82A013E0) {
	PPC_FUNC_PROLOGUE();
	// b 0x82a3df10
	sub_82A3DF10(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A013E4"))) PPC_WEAK_FUNC(sub_82A013E4);
PPC_FUNC_IMPL(__imp__sub_82A013E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A013E8"))) PPC_WEAK_FUNC(sub_82A013E8);
PPC_FUNC_IMPL(__imp__sub_82A013E8) {
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
	// addi r31,r11,29312
	ctx.r31.s64 = ctx.r11.s64 + 29312;
	// lwz r11,12080(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12080);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a01444
	if (ctx.cr6.eq) goto loc_82A01444;
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a01430
	if (ctx.cr6.eq) goto loc_82A01430;
	// lis r4,-21348
	ctx.r4.s64 = -1399062528;
	// bl 0x82691460
	ctx.lr = 0x82A01420;
	sub_82691460(ctx, base);
	// lwz r11,12080(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12080);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r11,12080(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12080);
loc_82A01430:
	// lis r4,8348
	ctx.r4.s64 = 547094528;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82691460
	ctx.lr = 0x82A0143C;
	sub_82691460(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,12080(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12080, ctx.r11.u32);
loc_82A01444:
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

__attribute__((alias("__imp__sub_82A01458"))) PPC_WEAK_FUNC(sub_82A01458);
PPC_FUNC_IMPL(__imp__sub_82A01458) {
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
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r3,4099
	ctx.r3.s64 = 4099;
	// bl 0x83178d24
	ctx.lr = 0x82A0147C;
	__imp__XamXStudioRequest(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82a0149c
	if (ctx.cr6.lt) goto loc_82A0149C;
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
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
loc_82A0149C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831795e4
	ctx.lr = 0x82A014A4;
	__imp__PsCamDeviceRequest(ctx, base);
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

__attribute__((alias("__imp__sub_82A014B8"))) PPC_WEAK_FUNC(sub_82A014B8);
PPC_FUNC_IMPL(__imp__sub_82A014B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x82A014C0;
	__savegprlr_28(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31964
	ctx.r11.s64 = -2094792704;
	// addi r11,r11,29312
	ctx.r11.s64 = ctx.r11.s64 + 29312;
	// addi r8,r11,1488
	ctx.r8.s64 = ctx.r11.s64 + 1488;
	// lwz r10,136(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 136);
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// subfic r7,r10,0
	ctx.xer.ca = ctx.r10.u32 <= 0;
	ctx.r7.s64 = 0 - ctx.r10.s64;
	// lwz r5,11240(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 11240);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subfe r4,r6,r6
	temp.u8 = (~ctx.r6.u32 + ctx.r6.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r6.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r4.u64 = ~ctx.r6.u64 + ctx.r6.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r4,r4,r8
	ctx.r4.u64 = ctx.r4.u64 & ctx.r8.u64;
	// addi r8,r5,172
	ctx.r8.s64 = ctx.r5.s64 + 172;
	// bne cr6,0x82a014f8
	if (!ctx.cr6.eq) goto loc_82A014F8;
	// li r8,0
	ctx.r8.s64 = 0;
loc_82A014F8:
	// lwz r10,10632(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10632);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82a01510
	if (ctx.cr6.eq) goto loc_82A01510;
	// lwz r10,10676(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10676);
	// addi r3,r10,48
	ctx.r3.s64 = ctx.r10.s64 + 48;
	// b 0x82a01514
	goto loc_82A01514;
loc_82A01510:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82A01514:
	// lwz r10,10680(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 10680);
	// addi r9,r11,10716
	ctx.r9.s64 = ctx.r11.s64 + 10716;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// subfic r7,r10,0
	ctx.xer.ca = ctx.r10.u32 <= 0;
	ctx.r7.s64 = 0 - ctx.r10.s64;
	// subfe r10,r6,r6
	temp.u8 = (~ctx.r6.u32 + ctx.r6.u32 < ~ctx.r6.u32) | (~ctx.r6.u32 + ctx.r6.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r6.u64 + ctx.r6.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r6,r10,r9
	ctx.r6.u64 = ctx.r10.u64 & ctx.r9.u64;
	// beq cr6,0x82a0153c
	if (ctx.cr6.eq) goto loc_82A0153C;
	// addi r7,r5,116
	ctx.r7.s64 = ctx.r5.s64 + 116;
	// addi r9,r5,60
	ctx.r9.s64 = ctx.r5.s64 + 60;
	// b 0x82a01544
	goto loc_82A01544;
loc_82A0153C:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
loc_82A01544:
	// stw r3,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r3.u32);
	// lis r10,0
	ctx.r10.s64 = 0;
	// stw r6,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r6.u32);
	// lis r5,0
	ctx.r5.s64 = 0;
	// stw r7,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r7.u32);
	// ori r7,r10,59824
	ctx.r7.u64 = ctx.r10.u64 | 59824;
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// lis r3,0
	ctx.r3.s64 = 0;
	// lis r9,0
	ctx.r9.s64 = 0;
	// lis r6,0
	ctx.r6.s64 = 0;
	// ori r5,r5,59820
	ctx.r5.u64 = ctx.r5.u64 | 59820;
	// ori r29,r3,59816
	ctx.r29.u64 = ctx.r3.u64 | 59816;
	// lwzx r3,r11,r7
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r7.u32);
	// ori r6,r6,59828
	ctx.r6.u64 = ctx.r6.u64 | 59828;
	// ori r28,r9,59812
	ctx.r28.u64 = ctx.r9.u64 | 59812;
	// addis r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 65536;
	// lwzx r30,r11,r5
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r5.u32);
	// addi r9,r11,10992
	ctx.r9.s64 = ctx.r11.s64 + 10992;
	// lwzx r29,r11,r29
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	// addi r5,r10,-5684
	ctx.r5.s64 = ctx.r10.s64 + -5684;
	// lwzx r31,r11,r6
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r6.u32);
	// addi r10,r11,11032
	ctx.r10.s64 = ctx.r11.s64 + 11032;
	// lwzx r28,r11,r28
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r28.u32);
	// addi r7,r11,11076
	ctx.r7.s64 = ctx.r11.s64 + 11076;
	// stw r3,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r3.u32);
	// addi r6,r11,11132
	ctx.r6.s64 = ctx.r11.s64 + 11132;
	// stw r5,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r5.u32);
	// addi r5,r11,11188
	ctx.r5.s64 = ctx.r11.s64 + 11188;
	// addi r3,r11,1540
	ctx.r3.s64 = ctx.r11.s64 + 1540;
	// stw r30,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r30.u32);
	// stw r31,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r31.u32);
	// stw r29,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r29.u32);
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// bl 0x82a3e090
	ctx.lr = 0x82A015CC;
	sub_82A3E090(ctx, base);
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A015D4"))) PPC_WEAK_FUNC(sub_82A015D4);
PPC_FUNC_IMPL(__imp__sub_82A015D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A015D8"))) PPC_WEAK_FUNC(sub_82A015D8);
PPC_FUNC_IMPL(__imp__sub_82A015D8) {
	PPC_FUNC_PROLOGUE();
	// lwz r9,52(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// lis r8,15
	ctx.r8.s64 = 983040;
	// lis r7,762
	ctx.r7.s64 = 49938432;
	// ori r10,r8,16960
	ctx.r10.u64 = ctx.r8.u64 | 16960;
	// ori r11,r7,61568
	ctx.r11.u64 = ctx.r7.u64 | 61568;
	// lwz r6,15632(r9)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r9.u32 + 15632);
	// lwz r5,15636(r9)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + 15636);
	// lis r9,-31964
	ctx.r9.s64 = -2094792704;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// addi r9,r9,29312
	ctx.r9.s64 = ctx.r9.s64 + 29312;
	// lwz r8,92(r6)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r6.u32 + 92);
	// beq cr6,0x82a0162c
	if (ctx.cr6.eq) goto loc_82A0162C;
	// lwz r7,52(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// lwz r6,15636(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + 15636);
	// lwz r5,92(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + 92);
	// subf r4,r8,r5
	ctx.r4.s64 = ctx.r5.s64 - ctx.r8.s64;
	// extsw r7,r4
	ctx.r7.s64 = ctx.r4.s32;
	// mulld r6,r7,r10
	ctx.r6.s64 = ctx.r7.s64 * ctx.r10.s64;
	// divd r5,r6,r11
	ctx.r5.s64 = ctx.r6.s64 / ctx.r11.s64;
	// stw r5,12148(r9)
	PPC_STORE_U32(ctx.r9.u32 + 12148, ctx.r5.u32);
	// b 0x82a01634
	goto loc_82A01634;
loc_82A0162C:
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r7,12148(r9)
	PPC_STORE_U32(ctx.r9.u32 + 12148, ctx.r7.u32);
loc_82A01634:
	// lwz r6,52(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// lwz r7,1128(r9)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r9.u32 + 1128);
	// subf r5,r8,r7
	ctx.r5.s64 = ctx.r7.s64 - ctx.r8.s64;
	// lwz r4,15644(r6)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r6.u32 + 15644);
	// clrldi r7,r5,32
	ctx.r7.u64 = ctx.r5.u64 & 0xFFFFFFFF;
	// subf r6,r8,r4
	ctx.r6.s64 = ctx.r4.s64 - ctx.r8.s64;
	// mulld r5,r7,r10
	ctx.r5.s64 = ctx.r7.s64 * ctx.r10.s64;
	// clrldi r4,r6,32
	ctx.r4.u64 = ctx.r6.u64 & 0xFFFFFFFF;
	// divd r7,r5,r11
	ctx.r7.s64 = ctx.r5.s64 / ctx.r11.s64;
	// mulld r6,r4,r10
	ctx.r6.s64 = ctx.r4.s64 * ctx.r10.s64;
	// divd r5,r6,r11
	ctx.r5.s64 = ctx.r6.s64 / ctx.r11.s64;
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// stw r5,12152(r9)
	PPC_STORE_U32(ctx.r9.u32 + 12152, ctx.r5.u32);
	// lwz r4,52(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 52);
	// lwz r7,15648(r4)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + 15648);
	// subf r5,r8,r7
	ctx.r5.s64 = ctx.r7.s64 - ctx.r8.s64;
	// clrldi r4,r5,32
	ctx.r4.u64 = ctx.r5.u64 & 0xFFFFFFFF;
	// stw r6,12160(r9)
	PPC_STORE_U32(ctx.r9.u32 + 12160, ctx.r6.u32);
	// mulld r7,r4,r10
	ctx.r7.s64 = ctx.r4.s64 * ctx.r10.s64;
	// divd r6,r7,r11
	ctx.r6.s64 = ctx.r7.s64 / ctx.r11.s64;
	// stw r6,12156(r9)
	PPC_STORE_U32(ctx.r9.u32 + 12156, ctx.r6.u32);
	// lwz r5,56(r3)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r3.u32 + 56);
	// subf r4,r8,r5
	ctx.r4.s64 = ctx.r5.s64 - ctx.r8.s64;
	// clrldi r7,r4,32
	ctx.r7.u64 = ctx.r4.u64 & 0xFFFFFFFF;
	// mulld r6,r7,r10
	ctx.r6.s64 = ctx.r7.s64 * ctx.r10.s64;
	// divd r5,r6,r11
	ctx.r5.s64 = ctx.r6.s64 / ctx.r11.s64;
	// stw r5,12164(r9)
	PPC_STORE_U32(ctx.r9.u32 + 12164, ctx.r5.u32);
	// lwz r4,60(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 60);
	// subf r7,r8,r4
	ctx.r7.s64 = ctx.r4.s64 - ctx.r8.s64;
	// clrldi r6,r7,32
	ctx.r6.u64 = ctx.r7.u64 & 0xFFFFFFFF;
	// mulld r5,r6,r10
	ctx.r5.s64 = ctx.r6.s64 * ctx.r10.s64;
	// divd r4,r5,r11
	ctx.r4.s64 = ctx.r5.s64 / ctx.r11.s64;
	// stw r4,12168(r9)
	PPC_STORE_U32(ctx.r9.u32 + 12168, ctx.r4.u32);
	// lwz r7,64(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 64);
	// subf r6,r8,r7
	ctx.r6.s64 = ctx.r7.s64 - ctx.r8.s64;
	// clrldi r5,r6,32
	ctx.r5.u64 = ctx.r6.u64 & 0xFFFFFFFF;
	// mulld r4,r5,r10
	ctx.r4.s64 = ctx.r5.s64 * ctx.r10.s64;
	// divd r7,r4,r11
	ctx.r7.s64 = ctx.r4.s64 / ctx.r11.s64;
	// stw r7,12172(r9)
	PPC_STORE_U32(ctx.r9.u32 + 12172, ctx.r7.u32);
	// lwz r6,68(r3)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r3.u32 + 68);
	// subf r5,r8,r6
	ctx.r5.s64 = ctx.r6.s64 - ctx.r8.s64;
	// clrldi r4,r5,32
	ctx.r4.u64 = ctx.r5.u64 & 0xFFFFFFFF;
	// mulld r7,r4,r10
	ctx.r7.s64 = ctx.r4.s64 * ctx.r10.s64;
	// divd r6,r7,r11
	ctx.r6.s64 = ctx.r7.s64 / ctx.r11.s64;
	// stw r6,12176(r9)
	PPC_STORE_U32(ctx.r9.u32 + 12176, ctx.r6.u32);
	// lwz r7,72(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82a0170c
	if (ctx.cr6.eq) goto loc_82A0170C;
	// subf r8,r8,r7
	ctx.r8.s64 = ctx.r7.s64 - ctx.r8.s64;
	// clrldi r7,r8,32
	ctx.r7.u64 = ctx.r8.u64 & 0xFFFFFFFF;
	// mulld r6,r7,r10
	ctx.r6.s64 = ctx.r7.s64 * ctx.r10.s64;
	// divd r5,r6,r11
	ctx.r5.s64 = ctx.r6.s64 / ctx.r11.s64;
	// stw r5,12180(r9)
	PPC_STORE_U32(ctx.r9.u32 + 12180, ctx.r5.u32);
	// blr 
	return;
loc_82A0170C:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,12180(r9)
	PPC_STORE_U32(ctx.r9.u32 + 12180, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A01718"))) PPC_WEAK_FUNC(sub_82A01718);
PPC_FUNC_IMPL(__imp__sub_82A01718) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31964
	ctx.r11.s64 = -2094792704;
	// addi r11,r11,29312
	ctx.r11.s64 = ctx.r11.s64 + 29312;
	// addi r9,r11,12264
	ctx.r9.s64 = ctx.r11.s64 + 12264;
	// lwz r10,12288(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12288);
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r8,r9
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r10,52(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 52);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r11,72
	ctx.r3.s64 = ctx.r11.s64 + 72;
	// b 0x831792b4
	__imp__KeSetEvent(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A01754"))) PPC_WEAK_FUNC(sub_82A01754);
PPC_FUNC_IMPL(__imp__sub_82A01754) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A01758"))) PPC_WEAK_FUNC(sub_82A01758);
PPC_FUNC_IMPL(__imp__sub_82A01758) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31964
	ctx.r11.s64 = -2094792704;
	// addi r11,r11,29312
	ctx.r11.s64 = ctx.r11.s64 + 29312;
	// addi r9,r11,12264
	ctx.r9.s64 = ctx.r11.s64 + 12264;
	// lwz r10,12288(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12288);
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r8,r9
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82a017a0
	if (ctx.cr6.eq) goto loc_82A017A0;
	// mftb r9
	ctx.r9.u64 = __rdtsc();
	// stw r9,60(r10)
	PPC_STORE_U32(ctx.r10.u32 + 60, ctx.r9.u32);
	// sync 
	// lwz r7,52(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 52);
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82a017a0
	if (ctx.cr6.eq) goto loc_82A017A0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r11,88
	ctx.r3.s64 = ctx.r11.s64 + 88;
	// b 0x831792b4
	__imp__KeSetEvent(ctx, base);
	return;
loc_82A017A0:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r11,104
	ctx.r3.s64 = ctx.r11.s64 + 104;
	// b 0x831792b4
	__imp__KeSetEvent(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A017B0"))) PPC_WEAK_FUNC(sub_82A017B0);
PPC_FUNC_IMPL(__imp__sub_82A017B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7670
	ctx.lr = 0x82A017B8;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// sync 
	// addi r11,r3,44
	ctx.r11.s64 = ctx.r3.s64 + 44;
loc_82A017C8:
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
	// bne 0x82a017c8
	if (!ctx.cr0.eq) goto loc_82A017C8;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmplwi cr6,r10,2
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 2, ctx.xer);
	// bne cr6,0x82a018d0
	if (!ctx.cr6.eq) goto loc_82A018D0;
	// lis r11,-31964
	ctx.r11.s64 = -2094792704;
	// lwz r6,8(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r5,4(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r28,r11,29312
	ctx.r28.s64 = ctx.r11.s64 + 29312;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r3,44(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 44);
	// bl 0x8267ce68
	ctx.lr = 0x82A0180C;
	sub_8267CE68(ctx, base);
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// li r26,0
	ctx.r26.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a018a4
	if (ctx.cr6.eq) goto loc_82A018A4;
	// lwz r11,28(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a01834
	if (ctx.cr6.eq) goto loc_82A01834;
	// lwz r11,28(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// lwz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// b 0x82a01838
	goto loc_82A01838;
loc_82A01834:
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
loc_82A01838:
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r3,44(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 44);
	// lwz r4,12(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// bl 0x8267ce68
	ctx.lr = 0x82A01848;
	sub_8267CE68(ctx, base);
	// li r29,1
	ctx.r29.s64 = 1;
	// mr r31,r26
	ctx.r31.u64 = ctx.r26.u64;
	// addi r27,r30,16
	ctx.r27.s64 = ctx.r30.s64 + 16;
loc_82A01854:
	// lwz r11,28(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a01880
	if (ctx.cr6.eq) goto loc_82A01880;
	// lwz r11,32(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// and r10,r11,r29
	ctx.r10.u64 = ctx.r11.u64 & ctx.r29.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82a01880
	if (ctx.cr6.eq) goto loc_82A01880;
	// lwz r11,28(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lwz r5,4(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x82a01884
	goto loc_82A01884;
loc_82A01880:
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
loc_82A01884:
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r3,44(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 44);
	// lwzx r4,r27,r31
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r31.u32);
	// bl 0x8267ce68
	ctx.lr = 0x82A01894;
	sub_8267CE68(ctx, base);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// rotlwi r29,r29,1
	ctx.r29.u64 = __builtin_rotateleft32(ctx.r29.u32, 1);
	// cmplwi cr6,r31,12
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 12, ctx.xer);
	// blt cr6,0x82a01854
	if (ctx.cr6.lt) goto loc_82A01854;
loc_82A018A4:
	// lwz r11,36(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a018c4
	if (ctx.cr6.eq) goto loc_82A018C4;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r5,40(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// lwz r3,44(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 44);
	// lwz r4,36(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// bl 0x8267ce68
	ctx.lr = 0x82A018C4;
	sub_8267CE68(ctx, base);
loc_82A018C4:
	// stw r26,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r26.u32);
	// stw r26,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r26.u32);
	// stw r26,36(r30)
	PPC_STORE_U32(ctx.r30.u32 + 36, ctx.r26.u32);
loc_82A018D0:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82fa76c0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A018D8"))) PPC_WEAK_FUNC(sub_82A018D8);
PPC_FUNC_IMPL(__imp__sub_82A018D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x82A018E0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r10,10
	ctx.r10.s64 = 10;
	// li r28,0
	ctx.r28.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// stw r28,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r28.u32);
	// addi r11,r4,-4
	ctx.r11.s64 = ctx.r4.s64 + -4;
	// mr r9,r28
	ctx.r9.u64 = ctx.r28.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82A01904:
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x82a01904
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82A01904;
	// lis r11,-31964
	ctx.r11.s64 = -2094792704;
	// addi r30,r11,29312
	ctx.r30.s64 = ctx.r11.s64 + 29312;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82a019b0
	if (!ctx.cr6.eq) goto loc_82A019B0;
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82a019b0
	if (!ctx.cr6.eq) goto loc_82A019B0;
	// lwz r11,11244(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 11244);
	// li r3,0
	ctx.r3.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82a0196c
	if (ctx.cr6.eq) goto loc_82A0196C;
	// bl 0x82a09660
	ctx.lr = 0x82A01940;
	sub_82A09660(ctx, base);
	// stw r3,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r3.u32);
	// lwz r11,12080(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12080);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// lwz r11,12080(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12080);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r10,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r10.u32);
	// stw r28,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r28.u32);
	// lwz r9,28(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// ori r8,r9,128
	ctx.r8.u64 = ctx.r9.u64 | 128;
	// b 0x82a019e0
	goto loc_82A019E0;
loc_82A0196C:
	// bl 0x82a09660
	ctx.lr = 0x82A01970;
	sub_82A09660(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r3.u32);
	// beq cr6,0x82a019e4
	if (ctx.cr6.eq) goto loc_82A019E4;
	// lwz r11,10600(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 10600);
	// addi r11,r11,64
	ctx.r11.s64 = ctx.r11.s64 + 64;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// lwz r11,10600(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 10600);
	// lwz r10,60(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// stw r10,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r10.u32);
	// lwz r9,16(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r8,104(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 104);
	// stw r8,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r8.u32);
	// lwz r7,28(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// ori r6,r7,128
	ctx.r6.u64 = ctx.r7.u64 | 128;
	// stw r6,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r6.u32);
	// b 0x82a019e4
	goto loc_82A019E4;
loc_82A019B0:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82a09550
	ctx.lr = 0x82A019B8;
	sub_82A09550(ctx, base);
	// stw r3,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r3.u32);
	// lwz r11,11240(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 11240);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// lwz r11,11240(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 11240);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r10,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r10.u32);
	// stw r28,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r28.u32);
	// lwz r9,28(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// ori r8,r9,32
	ctx.r8.u64 = ctx.r9.u64 | 32;
loc_82A019E0:
	// stw r8,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r8.u32);
loc_82A019E4:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82a09660
	ctx.lr = 0x82A019EC;
	sub_82A09660(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r3.u32);
	// beq cr6,0x82a01a64
	if (ctx.cr6.eq) goto loc_82A01A64;
	// lwz r11,10604(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 10604);
	// addi r11,r11,64
	ctx.r11.s64 = ctx.r11.s64 + 64;
	// stw r11,12(r29)
	PPC_STORE_U32(ctx.r29.u32 + 12, ctx.r11.u32);
	// lwz r11,10604(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 10604);
	// lwz r10,60(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// stw r10,32(r29)
	PPC_STORE_U32(ctx.r29.u32 + 32, ctx.r10.u32);
	// lwz r9,12(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r8,104(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 104);
	// stw r8,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r8.u32);
	// lwz r7,28(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// ori r6,r7,8
	ctx.r6.u64 = ctx.r7.u64 | 8;
	// stw r6,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r6.u32);
	// lwz r5,0(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x82a01a64
	if (!ctx.cr6.eq) goto loc_82A01A64;
	// lwz r11,10604(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 10604);
	// addi r11,r11,64
	ctx.r11.s64 = ctx.r11.s64 + 64;
	// stw r11,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r11.u32);
	// lwz r11,10604(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 10604);
	// addi r10,r11,60
	ctx.r10.s64 = ctx.r11.s64 + 60;
	// stw r10,20(r29)
	PPC_STORE_U32(ctx.r29.u32 + 20, ctx.r10.u32);
	// lwz r11,10604(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 10604);
	// lwz r9,116(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 116);
	// stw r9,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r9.u32);
	// lwz r8,28(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// ori r7,r8,128
	ctx.r7.u64 = ctx.r8.u64 | 128;
	// stw r7,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r7.u32);
loc_82A01A64:
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x82a09660
	ctx.lr = 0x82A01A6C;
	sub_82A09660(ctx, base);
	// stw r3,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r3.u32);
	// lwz r11,136(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 136);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a01b84
	if (ctx.cr6.eq) goto loc_82A01B84;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x82a09660
	ctx.lr = 0x82A01A84;
	sub_82A09660(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x82a09660
	ctx.lr = 0x82A01A90;
	sub_82A09660(ctx, base);
	// stw r3,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r3.u32);
	// li r3,5
	ctx.r3.s64 = 5;
	// bl 0x82a09660
	ctx.lr = 0x82A01A9C;
	sub_82A09660(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r3,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a01adc
	if (ctx.cr6.eq) goto loc_82A01ADC;
	// lwz r11,10608(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 10608);
	// addi r11,r11,64
	ctx.r11.s64 = ctx.r11.s64 + 64;
	// stw r11,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r11.u32);
	// lwz r11,10608(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 10608);
	// lwz r10,60(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// stw r10,24(r29)
	PPC_STORE_U32(ctx.r29.u32 + 24, ctx.r10.u32);
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r8,104(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 104);
	// stw r8,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r8.u32);
	// lwz r7,28(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// ori r6,r7,2
	ctx.r6.u64 = ctx.r7.u64 | 2;
	// stw r6,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r6.u32);
loc_82A01ADC:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a01b18
	if (ctx.cr6.eq) goto loc_82A01B18;
	// lwz r11,10620(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 10620);
	// addi r11,r11,64
	ctx.r11.s64 = ctx.r11.s64 + 64;
	// stw r11,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r11.u32);
	// lwz r11,10620(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 10620);
	// lwz r10,60(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// stw r10,28(r29)
	PPC_STORE_U32(ctx.r29.u32 + 28, ctx.r10.u32);
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r8,104(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 104);
	// stw r8,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r8.u32);
	// lwz r7,28(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// ori r6,r7,256
	ctx.r6.u64 = ctx.r7.u64 | 256;
	// stw r6,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r6.u32);
loc_82A01B18:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a01b84
	if (ctx.cr6.eq) goto loc_82A01B84;
	// lwz r11,10612(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 10612);
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// addi r9,r11,64
	ctx.r9.s64 = ctx.r11.s64 + 64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r9,16(r29)
	PPC_STORE_U32(ctx.r29.u32 + 16, ctx.r9.u32);
	// lwz r11,10612(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 10612);
	// addi r8,r11,60
	ctx.r8.s64 = ctx.r11.s64 + 60;
	// stw r8,36(r29)
	PPC_STORE_U32(ctx.r29.u32 + 36, ctx.r8.u32);
	// bne cr6,0x82a01b6c
	if (!ctx.cr6.eq) goto loc_82A01B6C;
	// lwz r11,10612(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 10612);
	// addi r11,r11,64
	ctx.r11.s64 = ctx.r11.s64 + 64;
	// stw r11,4(r29)
	PPC_STORE_U32(ctx.r29.u32 + 4, ctx.r11.u32);
	// lwz r11,10612(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 10612);
	// lwz r10,60(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 60);
	// stw r10,24(r29)
	PPC_STORE_U32(ctx.r29.u32 + 24, ctx.r10.u32);
	// lwz r11,10612(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 10612);
	// lwz r9,116(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 116);
	// stw r9,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r9.u32);
loc_82A01B6C:
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// ori r10,r11,6
	ctx.r10.u64 = ctx.r11.u64 | 6;
	// stw r10,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r10.u32);
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r8,104(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 104);
	// stw r8,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r8.u32);
loc_82A01B84:
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r3,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A01B98"))) PPC_WEAK_FUNC(sub_82A01B98);
PPC_FUNC_IMPL(__imp__sub_82A01B98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x82A01BA0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31964
	ctx.r11.s64 = -2094792704;
	// li r31,0
	ctx.r31.s64 = 0;
	// addi r30,r11,29312
	ctx.r30.s64 = ctx.r11.s64 + 29312;
	// addis r11,r30,1
	ctx.r11.s64 = ctx.r30.s64 + 65536;
	// addi r11,r11,-6000
	ctx.r11.s64 = ctx.r11.s64 + -6000;
loc_82A01BB8:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82a01be0
	if (ctx.cr6.eq) goto loc_82A01BE0;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplwi cr6,r31,3
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 3, ctx.xer);
	// blt cr6,0x82a01bb8
	if (ctx.cr6.lt) goto loc_82A01BB8;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
loc_82A01BE0:
	// addis r9,r30,1
	ctx.r9.s64 = ctx.r30.s64 + 65536;
	// mulli r11,r31,15664
	ctx.r11.s64 = ctx.r31.s64 * 15664;
	// addi r10,r30,12544
	ctx.r10.s64 = ctx.r30.s64 + 12544;
	// addi r9,r9,-6000
	ctx.r9.s64 = ctx.r9.s64 + -6000;
	// rlwinm r8,r31,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// add r29,r11,r10
	ctx.r29.u64 = ctx.r11.u64 + ctx.r10.u64;
	// li r7,1
	ctx.r7.s64 = 1;
	// li r5,15664
	ctx.r5.s64 = 15664;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stwx r7,r8,r9
	PPC_STORE_U32(ctx.r8.u32 + ctx.r9.u32, ctx.r7.u32);
	// bl 0x82fa7cf0
	ctx.lr = 0x82A01C10;
	sub_82FA7CF0(ctx, base);
	// lwz r11,11240(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 11240);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a01c2c
	if (ctx.cr6.eq) goto loc_82A01C2C;
	// addi r10,r31,56
	ctx.r10.s64 = ctx.r31.s64 + 56;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r9,r11
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// stw r8,15640(r29)
	PPC_STORE_U32(ctx.r29.u32 + 15640, ctx.r8.u32);
loc_82A01C2C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A01C38"))) PPC_WEAK_FUNC(sub_82A01C38);
PPC_FUNC_IMPL(__imp__sub_82A01C38) {
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
	// lis r10,-31964
	ctx.r10.s64 = -2094792704;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r10,29312
	ctx.r10.s64 = ctx.r10.s64 + 29312;
	// addis r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 65536;
	// addi r9,r9,-5736
	ctx.r9.s64 = ctx.r9.s64 + -5736;
loc_82A01C5C:
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x82a01c90
	if (ctx.cr6.eq) goto loc_82A01C90;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// blt cr6,0x82a01c5c
	if (ctx.cr6.lt) goto loc_82A01C5C;
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
loc_82A01C90:
	// addis r9,r10,1
	ctx.r9.s64 = ctx.r10.s64 + 65536;
	// addis r8,r10,1
	ctx.r8.s64 = ctx.r10.s64 + 65536;
	// mulli r10,r11,76
	ctx.r10.s64 = ctx.r11.s64 * 76;
	// addi r9,r9,-5964
	ctx.r9.s64 = ctx.r9.s64 + -5964;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r8,-5736
	ctx.r8.s64 = ctx.r8.s64 + -5736;
	// add r31,r10,r9
	ctx.r31.u64 = ctx.r10.u64 + ctx.r9.u64;
	// li r7,1
	ctx.r7.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r5,76
	ctx.r5.s64 = 76;
	// li r4,0
	ctx.r4.s64 = 0;
	// stwx r7,r11,r8
	PPC_STORE_U32(ctx.r11.u32 + ctx.r8.u32, ctx.r7.u32);
	// bl 0x82fa7cf0
	ctx.lr = 0x82A01CC4;
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

__attribute__((alias("__imp__sub_82A01CDC"))) PPC_WEAK_FUNC(sub_82A01CDC);
PPC_FUNC_IMPL(__imp__sub_82A01CDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A01CE0"))) PPC_WEAK_FUNC(sub_82A01CE0);
PPC_FUNC_IMPL(__imp__sub_82A01CE0) {
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
	// lwz r4,20(r3)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82a01d10
	if (ctx.cr6.eq) goto loc_82A01D10;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82a095e8
	ctx.lr = 0x82A01D08;
	sub_82A095E8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82a096c0
	ctx.lr = 0x82A01D10;
	sub_82A096C0(ctx, base);
loc_82A01D10:
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82a01d2c
	if (ctx.cr6.eq) goto loc_82A01D2C;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82a095e8
	ctx.lr = 0x82A01D24;
	sub_82A095E8(ctx, base);
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82a096c0
	ctx.lr = 0x82A01D2C;
	sub_82A096C0(ctx, base);
loc_82A01D2C:
	// lwz r4,16(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82a01d48
	if (ctx.cr6.eq) goto loc_82A01D48;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82a095e8
	ctx.lr = 0x82A01D40;
	sub_82A095E8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82a096c0
	ctx.lr = 0x82A01D48;
	sub_82A096C0(ctx, base);
loc_82A01D48:
	// lwz r4,4(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82a01d64
	if (ctx.cr6.eq) goto loc_82A01D64;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x82a095e8
	ctx.lr = 0x82A01D5C;
	sub_82A095E8(ctx, base);
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x82a096c0
	ctx.lr = 0x82A01D64;
	sub_82A096C0(ctx, base);
loc_82A01D64:
	// lwz r4,8(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82a01d80
	if (ctx.cr6.eq) goto loc_82A01D80;
	// li r3,5
	ctx.r3.s64 = 5;
	// bl 0x82a095e8
	ctx.lr = 0x82A01D78;
	sub_82A095E8(ctx, base);
	// li r3,5
	ctx.r3.s64 = 5;
	// bl 0x82a096c0
	ctx.lr = 0x82A01D80;
	sub_82A096C0(ctx, base);
loc_82A01D80:
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82a01d9c
	if (ctx.cr6.eq) goto loc_82A01D9C;
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x82a095e8
	ctx.lr = 0x82A01D94;
	sub_82A095E8(ctx, base);
	// li r3,3
	ctx.r3.s64 = 3;
	// bl 0x82a096c0
	ctx.lr = 0x82A01D9C;
	sub_82A096C0(ctx, base);
loc_82A01D9C:
	// lwz r4,24(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82a01db8
	if (ctx.cr6.eq) goto loc_82A01DB8;
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x82a095e8
	ctx.lr = 0x82A01DB0;
	sub_82A095E8(ctx, base);
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x82a096c0
	ctx.lr = 0x82A01DB8;
	sub_82A096C0(ctx, base);
loc_82A01DB8:
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82a01dd8
	if (!ctx.cr6.eq) goto loc_82A01DD8;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82a0af50
	ctx.lr = 0x82A01DCC;
	sub_82A0AF50(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82a0aa88
	ctx.lr = 0x82A01DD8;
	sub_82A0AA88(ctx, base);
loc_82A01DD8:
	// lis r11,-31964
	ctx.r11.s64 = -2094792704;
	// li r9,76
	ctx.r9.s64 = 76;
	// addi r8,r11,29312
	ctx.r8.s64 = ctx.r11.s64 + 29312;
	// li r7,0
	ctx.r7.s64 = 0;
	// addis r10,r8,1
	ctx.r10.s64 = ctx.r8.s64 + 65536;
	// addis r11,r8,1
	ctx.r11.s64 = ctx.r8.s64 + 65536;
	// addi r6,r10,-5964
	ctx.r6.s64 = ctx.r10.s64 + -5964;
	// addi r5,r11,-5736
	ctx.r5.s64 = ctx.r11.s64 + -5736;
	// subf r4,r6,r31
	ctx.r4.s64 = ctx.r31.s64 - ctx.r6.s64;
	// divw r3,r4,r9
	ctx.r3.s32 = ctx.r4.s32 / ctx.r9.s32;
	// rlwinm r11,r3,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r7,r11,r5
	PPC_STORE_U32(ctx.r11.u32 + ctx.r5.u32, ctx.r7.u32);
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

__attribute__((alias("__imp__sub_82A01E1C"))) PPC_WEAK_FUNC(sub_82A01E1C);
PPC_FUNC_IMPL(__imp__sub_82A01E1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A01E20"))) PPC_WEAK_FUNC(sub_82A01E20);
PPC_FUNC_IMPL(__imp__sub_82A01E20) {
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
	// addi r31,r11,29312
	ctx.r31.s64 = ctx.r11.s64 + 29312;
	// lwz r3,140(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a01e54
	if (ctx.cr6.eq) goto loc_82A01E54;
	// lis r4,-29506
	ctx.r4.s64 = -1933705216;
	// bl 0x82691460
	ctx.lr = 0x82A01E4C;
	sub_82691460(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r11.u32);
loc_82A01E54:
	// lwz r3,136(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a01e70
	if (ctx.cr6.eq) goto loc_82A01E70;
	// lis r4,-29506
	ctx.r4.s64 = -1933705216;
	// bl 0x82691460
	ctx.lr = 0x82A01E68;
	sub_82691460(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r11.u32);
loc_82A01E70:
	// li r5,512
	ctx.r5.s64 = 512;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,168
	ctx.r3.s64 = ctx.r31.s64 + 168;
	// bl 0x82fa7cf0
	ctx.lr = 0x82A01E80;
	sub_82FA7CF0(ctx, base);
	// li r5,384
	ctx.r5.s64 = 384;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,688
	ctx.r3.s64 = ctx.r31.s64 + 688;
	// bl 0x82fa7cf0
	ctx.lr = 0x82A01E90;
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

__attribute__((alias("__imp__sub_82A01EA4"))) PPC_WEAK_FUNC(sub_82A01EA4);
PPC_FUNC_IMPL(__imp__sub_82A01EA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A01EA8"))) PPC_WEAK_FUNC(sub_82A01EA8);
PPC_FUNC_IMPL(__imp__sub_82A01EA8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// extsh r9,r5
	ctx.r9.s64 = ctx.r5.s16;
	// lfs f12,12(r3)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 12);
	ctx.f12.f64 = double(temp.f32);
	// extsh r8,r4
	ctx.r8.s64 = ctx.r4.s16;
	// lfs f11,8(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	ctx.f11.f64 = double(temp.f32);
	// std r9,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r9.u64);
	// lfd f10,-16(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// std r8,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r8.u64);
	// lfd f9,-16(r1)
	ctx.f9.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f7,f10
	ctx.f7.f64 = double(ctx.f10.s64);
	// lis r7,-32250
	ctx.r7.s64 = -2113536000;
	// fcfid f8,f9
	ctx.f8.f64 = double(ctx.f9.s64);
	// lfs f0,-26764(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -26764);
	ctx.f0.f64 = double(temp.f32);
	// lis r6,-32255
	ctx.r6.s64 = -2113863680;
	// lfs f4,0(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	ctx.f4.f64 = double(temp.f32);
	// lfs f3,16(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	ctx.f3.f64 = double(temp.f32);
	// lfs f2,24(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	ctx.f2.f64 = double(temp.f32);
	// lfs f5,4(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	ctx.f5.f64 = double(temp.f32);
	// lfs f1,20(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	ctx.f1.f64 = double(temp.f32);
	// lfs f13,17284(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + 17284);
	ctx.f13.f64 = double(temp.f32);
	// lfs f10,28(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,32(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	ctx.f9.f64 = double(temp.f32);
	// frsp f6,f8
	ctx.f6.f64 = double(float(ctx.f8.f64));
	// frsp f8,f7
	ctx.f8.f64 = double(float(ctx.f7.f64));
	// lfs f7,36(r3)
	temp.u32 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	ctx.f7.f64 = double(temp.f32);
	// fsubs f6,f6,f0
	ctx.f6.f64 = double(float(ctx.f6.f64 - ctx.f0.f64));
	// fsubs f0,f8,f13
	ctx.f0.f64 = double(float(ctx.f8.f64 - ctx.f13.f64));
	// fmuls f13,f12,f6
	ctx.f13.f64 = double(float(ctx.f12.f64 * ctx.f6.f64));
	// fmuls f12,f11,f6
	ctx.f12.f64 = double(float(ctx.f11.f64 * ctx.f6.f64));
	// fmadds f11,f4,f6,f3
	ctx.f11.f64 = double(float(ctx.f4.f64 * ctx.f6.f64 + ctx.f3.f64));
	// fmuls f8,f2,f0
	ctx.f8.f64 = double(float(ctx.f2.f64 * ctx.f0.f64));
	// fmadds f5,f5,f0,f13
	ctx.f5.f64 = double(float(ctx.f5.f64 * ctx.f0.f64 + ctx.f13.f64));
	// fmuls f4,f12,f6
	ctx.f4.f64 = double(float(ctx.f12.f64 * ctx.f6.f64));
	// fmadds f3,f11,f6,f8
	ctx.f3.f64 = double(float(ctx.f11.f64 * ctx.f6.f64 + ctx.f8.f64));
	// fmadds f2,f5,f0,f4
	ctx.f2.f64 = double(float(ctx.f5.f64 * ctx.f0.f64 + ctx.f4.f64));
	// fadds f13,f3,f10
	ctx.f13.f64 = double(float(ctx.f3.f64 + ctx.f10.f64));
	// fmadds f12,f1,f0,f2
	ctx.f12.f64 = double(float(ctx.f1.f64 * ctx.f0.f64 + ctx.f2.f64));
	// fmuls f11,f13,f6
	ctx.f11.f64 = double(float(ctx.f13.f64 * ctx.f6.f64));
	// fadds f10,f12,f9
	ctx.f10.f64 = double(float(ctx.f12.f64 + ctx.f9.f64));
	// fmadds f9,f10,f0,f11
	ctx.f9.f64 = double(float(ctx.f10.f64 * ctx.f0.f64 + ctx.f11.f64));
	// fadds f1,f9,f7
	ctx.f1.f64 = double(float(ctx.f9.f64 + ctx.f7.f64));
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A01F4C"))) PPC_WEAK_FUNC(sub_82A01F4C);
PPC_FUNC_IMPL(__imp__sub_82A01F4C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A01F50"))) PPC_WEAK_FUNC(sub_82A01F50);
PPC_FUNC_IMPL(__imp__sub_82A01F50) {
	PPC_FUNC_PROLOGUE();
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// addi r12,r1,-16
	ctx.r12.s64 = ctx.r1.s64 + -16;
	// bl 0x82fa8d28
	ctx.lr = 0x82A01F64;
	__savefpr_28(ctx, base);
	// lis r6,-32250
	ctx.r6.s64 = -2113536000;
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lis r5,-32250
	ctx.r5.s64 = -2113536000;
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lis r4,-32250
	ctx.r4.s64 = -2113536000;
	// lwz r9,108(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// lis r3,-32250
	ctx.r3.s64 = -2113536000;
	// lwz r8,124(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// lis r31,-32250
	ctx.r31.s64 = -2113536000;
	// lwz r7,132(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lfd f0,-26616(r6)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r6.u32 + -26616);
	// lis r6,-32250
	ctx.r6.s64 = -2113536000;
	// fnmsub f5,f1,f0,f5
	ctx.f5.f64 = -(ctx.f1.f64 * ctx.f0.f64 - ctx.f5.f64);
	// lfd f13,-26624(r5)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r5.u32 + -26624);
	// fnmsub f31,f2,f13,f7
	ctx.f31.f64 = -(ctx.f2.f64 * ctx.f13.f64 - ctx.f7.f64);
	// lfd f12,-26632(r4)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r4.u32 + -26632);
	// lfd f0,-26640(r3)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r3.u32 + -26640);
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// lfd f7,-26648(r31)
	ctx.f7.u64 = PPC_LOAD_U64(ctx.r31.u32 + -26648);
	// fnmsub f30,f3,f0,f6
	ctx.f30.f64 = -(ctx.f3.f64 * ctx.f0.f64 - ctx.f6.f64);
	// lis r4,-32250
	ctx.r4.s64 = -2113536000;
	// lfd f13,-26656(r6)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r6.u32 + -26656);
	// fnmsub f29,f1,f13,f8
	ctx.f29.f64 = -(ctx.f1.f64 * ctx.f13.f64 - ctx.f8.f64);
	// lis r3,-32250
	ctx.r3.s64 = -2113536000;
	// lis r6,-32250
	ctx.r6.s64 = -2113536000;
	// lfd f11,22496(r5)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r5.u32 + 22496);
	// lis r5,-32250
	ctx.r5.s64 = -2113536000;
	// lis r31,-32250
	ctx.r31.s64 = -2113536000;
	// lfd f13,-26664(r4)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r4.u32 + -26664);
	// lis r4,-32250
	ctx.r4.s64 = -2113536000;
	// fnmsub f5,f3,f12,f5
	ctx.f5.f64 = -(ctx.f3.f64 * ctx.f12.f64 - ctx.f5.f64);
	// lfd f6,-26672(r3)
	ctx.f6.u64 = PPC_LOAD_U64(ctx.r3.u32 + -26672);
	// fnmsub f31,f4,f7,f31
	ctx.f31.f64 = -(ctx.f4.f64 * ctx.f7.f64 - ctx.f31.f64);
	// lfd f8,-26680(r6)
	ctx.f8.u64 = PPC_LOAD_U64(ctx.r6.u32 + -26680);
	// lfd f12,-26688(r5)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r5.u32 + -26688);
	// lis r6,-32250
	ctx.r6.s64 = -2113536000;
	// fnmsub f30,f4,f13,f30
	ctx.f30.f64 = -(ctx.f4.f64 * ctx.f13.f64 - ctx.f30.f64);
	// lfd f7,-26696(r31)
	ctx.f7.u64 = PPC_LOAD_U64(ctx.r31.u32 + -26696);
	// fnmsub f28,f2,f12,f9
	ctx.f28.f64 = -(ctx.f2.f64 * ctx.f12.f64 - ctx.f9.f64);
	// lfd f12,-26704(r4)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r4.u32 + -26704);
	// fnmsub f6,f3,f6,f29
	ctx.f6.f64 = -(ctx.f3.f64 * ctx.f6.f64 - ctx.f29.f64);
	// lis r3,-32250
	ctx.r3.s64 = -2113536000;
	// lis r5,-32250
	ctx.r5.s64 = -2113536000;
	// lis r4,-32250
	ctx.r4.s64 = -2113536000;
	// lis r31,-32250
	ctx.r31.s64 = -2113536000;
	// fmul f5,f5,f11
	ctx.f5.f64 = ctx.f5.f64 * ctx.f11.f64;
	// stfd f5,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.f5.u64);
	// stfd f30,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.f30.u64);
	// fmul f11,f31,f11
	ctx.f11.f64 = ctx.f31.f64 * ctx.f11.f64;
	// stfd f11,0(r9)
	PPC_STORE_U64(ctx.r9.u32 + 0, ctx.f11.u64);
	// lfd f31,0(r11)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// fnmsub f29,f3,f12,f28
	ctx.f29.f64 = -(ctx.f3.f64 * ctx.f12.f64 - ctx.f28.f64);
	// lfd f30,0(r10)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// fnmsub f28,f4,f8,f6
	ctx.f28.f64 = -(ctx.f4.f64 * ctx.f8.f64 - ctx.f6.f64);
	// lfd f11,-26712(r6)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r6.u32 + -26712);
	// lfd f9,-26720(r3)
	ctx.f9.u64 = PPC_LOAD_U64(ctx.r3.u32 + -26720);
	// fnmsub f1,f1,f11,f10
	ctx.f1.f64 = -(ctx.f1.f64 * ctx.f11.f64 - ctx.f10.f64);
	// lfd f10,-26728(r5)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r5.u32 + -26728);
	// lis r3,-32250
	ctx.r3.s64 = -2113536000;
	// lfd f11,-26736(r4)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r4.u32 + -26736);
	// lfd f5,-26744(r31)
	ctx.f5.u64 = PPC_LOAD_U64(ctx.r31.u32 + -26744);
	// lfd f6,-26752(r3)
	ctx.f6.u64 = PPC_LOAD_U64(ctx.r3.u32 + -26752);
	// fnmsub f9,f4,f9,f29
	ctx.f9.f64 = -(ctx.f4.f64 * ctx.f9.f64 - ctx.f29.f64);
	// fnmsub f0,f30,f0,f28
	ctx.f0.f64 = -(ctx.f30.f64 * ctx.f0.f64 - ctx.f28.f64);
	// fnmsub f0,f31,f7,f0
	ctx.f0.f64 = -(ctx.f31.f64 * ctx.f7.f64 - ctx.f0.f64);
	// stfd f0,0(r8)
	PPC_STORE_U64(ctx.r8.u32 + 0, ctx.f0.u64);
	// lfd f0,0(r11)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// fnmsub f10,f2,f10,f1
	ctx.f10.f64 = -(ctx.f2.f64 * ctx.f10.f64 - ctx.f1.f64);
	// lfd f2,0(r9)
	ctx.f2.u64 = PPC_LOAD_U64(ctx.r9.u32 + 0);
	// fnmsub f1,f2,f13,f9
	ctx.f1.f64 = -(ctx.f2.f64 * ctx.f13.f64 - ctx.f9.f64);
	// fnmsub f0,f0,f11,f1
	ctx.f0.f64 = -(ctx.f0.f64 * ctx.f11.f64 - ctx.f1.f64);
	// stfd f0,0(r7)
	PPC_STORE_U64(ctx.r7.u32 + 0, ctx.f0.u64);
	// lfd f13,0(r9)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r9.u32 + 0);
	// fnmsub f10,f3,f6,f10
	ctx.f10.f64 = -(ctx.f3.f64 * ctx.f6.f64 - ctx.f10.f64);
	// lfd f9,0(r10)
	ctx.f9.u64 = PPC_LOAD_U64(ctx.r10.u32 + 0);
	// lfd f6,0(r11)
	ctx.f6.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// lfd f3,0(r8)
	ctx.f3.u64 = PPC_LOAD_U64(ctx.r8.u32 + 0);
	// fmr f2,f0
	ctx.f2.f64 = ctx.f0.f64;
	// fnmsub f1,f4,f5,f10
	ctx.f1.f64 = -(ctx.f4.f64 * ctx.f5.f64 - ctx.f10.f64);
	// fnmsub f0,f9,f12,f1
	ctx.f0.f64 = -(ctx.f9.f64 * ctx.f12.f64 - ctx.f1.f64);
	// fnmsub f13,f13,f8,f0
	ctx.f13.f64 = -(ctx.f13.f64 * ctx.f8.f64 - ctx.f0.f64);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lwz r10,140(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// lfd f0,-26760(r11)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + -26760);
	// fnmsub f12,f6,f0,f13
	ctx.f12.f64 = -(ctx.f6.f64 * ctx.f0.f64 - ctx.f13.f64);
	// fnmsub f11,f3,f11,f12
	ctx.f11.f64 = -(ctx.f3.f64 * ctx.f11.f64 - ctx.f12.f64);
	// fnmsub f10,f2,f7,f11
	ctx.f10.f64 = -(ctx.f2.f64 * ctx.f7.f64 - ctx.f11.f64);
	// stfd f10,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.f10.u64);
	// addi r12,r1,-16
	ctx.r12.s64 = ctx.r1.s64 + -16;
	// bl 0x82fa8d74
	ctx.lr = 0x82A020CC;
	__restfpr_28(ctx, base);
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A020DC"))) PPC_WEAK_FUNC(sub_82A020DC);
PPC_FUNC_IMPL(__imp__sub_82A020DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A020E0"))) PPC_WEAK_FUNC(sub_82A020E0);
PPC_FUNC_IMPL(__imp__sub_82A020E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa766c
	ctx.lr = 0x82A020E8;
	__savegprlr_25(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82a02108
	if (!ctx.cr6.eq) goto loc_82A02108;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82fa76bc
	__restgprlr_25(ctx, base);
	return;
loc_82A02108:
	// li r9,7
	ctx.r9.s64 = 7;
	// addi r11,r1,72
	ctx.r11.s64 = ctx.r1.s64 + 72;
	// li r10,0
	ctx.r10.s64 = 0;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82A02118:
	// stdu r10,8(r11)
	ea = 8 + ctx.r11.u32;
	PPC_STORE_U64(ea, ctx.r10.u64);
	ctx.r11.u32 = ea;
	// bdnz 0x82a02118
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82A02118;
	// li r9,25
	ctx.r9.s64 = 25;
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// lis r8,-31975
	ctx.r8.s64 = -2095513600;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r7,-12524(r8)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + -12524);
	// mtctr r7
	ctx.ctr.u64 = ctx.r7.u64;
	// bctrl 
	ctx.lr = 0x82A02140;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82a021f0
	if (ctx.cr6.lt) goto loc_82A021F0;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r7,96(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// mulli r8,r11,50
	ctx.r8.s64 = ctx.r11.s64 * 50;
	// lwz r6,100(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r5,104(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r10,88(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r9,92(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// stw r8,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r8.u32);
	// lwz r4,108(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r30,116(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// mulli r8,r7,50
	ctx.r8.s64 = ctx.r7.s64 * 50;
	// lwz r29,120(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// lwz r28,124(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// lwz r27,128(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// lwz r26,132(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r25,136(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// stw r8,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r8.u32);
	// mulli r7,r6,50
	ctx.r7.s64 = ctx.r6.s64 * 50;
	// stw r7,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r7.u32);
	// mulli r6,r5,50
	ctx.r6.s64 = ctx.r5.s64 * 50;
	// stw r6,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r6.u32);
	// mulli r10,r10,50
	ctx.r10.s64 = ctx.r10.s64 * 50;
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// mulli r9,r9,50
	ctx.r9.s64 = ctx.r9.s64 * 50;
	// stw r9,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r9.u32);
	// mulli r5,r4,50
	ctx.r5.s64 = ctx.r4.s64 * 50;
	// stw r5,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r5.u32);
	// mulli r4,r11,50
	ctx.r4.s64 = ctx.r11.s64 * 50;
	// stw r4,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r4.u32);
	// mulli r11,r30,50
	ctx.r11.s64 = ctx.r30.s64 * 50;
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// mulli r10,r29,50
	ctx.r10.s64 = ctx.r29.s64 * 50;
	// stw r10,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r10.u32);
	// mulli r9,r28,50
	ctx.r9.s64 = ctx.r28.s64 * 50;
	// stw r9,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r9.u32);
	// mulli r8,r27,50
	ctx.r8.s64 = ctx.r27.s64 * 50;
	// stw r8,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r8.u32);
	// mulli r7,r26,50
	ctx.r7.s64 = ctx.r26.s64 * 50;
	// stw r7,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r7.u32);
	// mulli r6,r25,50
	ctx.r6.s64 = ctx.r25.s64 * 50;
	// stw r6,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r6.u32);
loc_82A021F0:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82fa76bc
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A021F8"))) PPC_WEAK_FUNC(sub_82A021F8);
PPC_FUNC_IMPL(__imp__sub_82A021F8) {
	PPC_FUNC_PROLOGUE();
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// b 0x831792b4
	__imp__KeSetEvent(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A02210"))) PPC_WEAK_FUNC(sub_82A02210);
PPC_FUNC_IMPL(__imp__sub_82A02210) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31975
	ctx.r11.s64 = -2095513600;
	// lwz r10,-12524(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -12524);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82A02220"))) PPC_WEAK_FUNC(sub_82A02220);
PPC_FUNC_IMPL(__imp__sub_82A02220) {
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
	// lis r10,-32096
	ctx.r10.s64 = -2103443456;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// addi r8,r10,8696
	ctx.r8.s64 = ctx.r10.s64 + 8696;
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// addi r7,r1,88
	ctx.r7.s64 = ctx.r1.s64 + 88;
	// stw r9,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r9.u32);
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// stw r8,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r8.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// lis r5,-31975
	ctx.r5.s64 = -2095513600;
	// stw r7,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r7.u32);
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// lwz r4,-12524(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + -12524);
	// mtctr r4
	ctx.ctr.u64 = ctx.r4.u64;
	// bctrl 
	ctx.lr = 0x82A0226C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,259
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 259, ctx.xer);
	// bne cr6,0x82a02290
	if (!ctx.cr6.eq) goto loc_82A02290;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,3
	ctx.r4.s64 = 3;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x83179414
	ctx.lr = 0x82A0228C;
	__imp__KeWaitForSingleObject(ctx, base);
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
loc_82A02290:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A022A0"))) PPC_WEAK_FUNC(sub_82A022A0);
PPC_FUNC_IMPL(__imp__sub_82A022A0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x82A022A8;
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
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82a02374
	if (!ctx.cr6.eq) goto loc_82A02374;
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r8,r31,148
	ctx.r8.s64 = ctx.r31.s64 + 148;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
loc_82A022D0:
	// mfmsr r9
	ctx.r9.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r8
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r8.u32);
	ctx.r10.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwcx. r10,0,r8
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r8.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r10.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x82a022d0
	if (!ctx.cr0.eq) goto loc_82A022D0;
	// lis r7,-31975
	ctx.r7.s64 = -2095513600;
	// addi r3,r30,8
	ctx.r3.s64 = ctx.r30.s64 + 8;
	// lwz r6,-12524(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + -12524);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x82A02300;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,259
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 259, ctx.xer);
	// bne cr6,0x82a02318
	if (!ctx.cr6.eq) goto loc_82A02318;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
loc_82A02318:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq cr6,0x82a02368
	if (ctx.cr6.eq) goto loc_82A02368;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r8,r31,148
	ctx.r8.s64 = ctx.r31.s64 + 148;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
loc_82A0232C:
	// mfmsr r9
	ctx.r9.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r8
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r8.u32);
	ctx.r10.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stwcx. r10,0,r8
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r8.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r10.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x82a0232c
	if (!ctx.cr0.eq) goto loc_82A0232C;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82a02368
	if (!ctx.cr6.eq) goto loc_82A02368;
	// sync 
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r31,1472
	ctx.r3.s64 = ctx.r31.s64 + 1472;
	// bl 0x831792b4
	ctx.lr = 0x82A02368;
	__imp__KeSetEvent(ctx, base);
loc_82A02368:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
loc_82A02374:
	// lis r3,-16384
	ctx.r3.s64 = -1073741824;
	// ori r3,r3,75
	ctx.r3.u64 = ctx.r3.u64 | 75;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A02384"))) PPC_WEAK_FUNC(sub_82A02384);
PPC_FUNC_IMPL(__imp__sub_82A02384) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A02388"))) PPC_WEAK_FUNC(sub_82A02388);
PPC_FUNC_IMPL(__imp__sub_82A02388) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa766c
	ctx.lr = 0x82A02390;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31964
	ctx.r10.s64 = -2094792704;
	// li r25,0
	ctx.r25.s64 = 0;
	// addi r30,r10,29312
	ctx.r30.s64 = ctx.r10.s64 + 29312;
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
	// mr r27,r25
	ctx.r27.u64 = ctx.r25.u64;
	// addi r31,r30,168
	ctx.r31.s64 = ctx.r30.s64 + 168;
	// lis r28,-31975
	ctx.r28.s64 = -2095513600;
	// stw r25,160(r30)
	PPC_STORE_U32(ctx.r30.u32 + 160, ctx.r25.u32);
	// li r26,1
	ctx.r26.s64 = 1;
loc_82A023B8:
	// lwz r11,36(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82a02478
	if (!ctx.cr6.eq) goto loc_82A02478;
	// addi r9,r30,148
	ctx.r9.s64 = ctx.r30.s64 + 148;
	// stw r26,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r26.u32);
loc_82A023CC:
	// mfmsr r10
	ctx.r10.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r9
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r9.u32);
	ctx.r11.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stwcx. r11,0,r9
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r9.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r11.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r10,1
	ctx.msr = (ctx.r10.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x82a023cc
	if (!ctx.cr0.eq) goto loc_82A023CC;
	// lwz r8,-12524(r28)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r28.u32 + -12524);
	// addi r3,r31,8
	ctx.r3.s64 = ctx.r31.s64 + 8;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82A023F8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,259
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 259, ctx.xer);
	// bne cr6,0x82a0240c
	if (!ctx.cr6.eq) goto loc_82A0240C;
	// mr r29,r25
	ctx.r29.u64 = ctx.r25.u64;
	// b 0x82a0245c
	goto loc_82A0245C;
loc_82A0240C:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq cr6,0x82a0245c
	if (ctx.cr6.eq) goto loc_82A0245C;
	// addi r9,r30,148
	ctx.r9.s64 = ctx.r30.s64 + 148;
	// stw r25,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r25.u32);
loc_82A0241C:
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
	// bne 0x82a0241c
	if (!ctx.cr0.eq) goto loc_82A0241C;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82a02454
	if (!ctx.cr6.eq) goto loc_82A02454;
	// sync 
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r30,1472
	ctx.r3.s64 = ctx.r30.s64 + 1472;
	// bl 0x831792b4
	ctx.lr = 0x82A02454;
	__imp__KeSetEvent(ctx, base);
loc_82A02454:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// blt cr6,0x82a0246c
	if (ctx.cr6.lt) goto loc_82A0246C;
loc_82A0245C:
	// addi r27,r27,128
	ctx.r27.s64 = ctx.r27.s64 + 128;
	// addi r31,r31,128
	ctx.r31.s64 = ctx.r31.s64 + 128;
	// cmplwi cr6,r27,512
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 512, ctx.xer);
	// blt cr6,0x82a023b8
	if (ctx.cr6.lt) goto loc_82A023B8;
loc_82A0246C:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82fa76bc
	__restgprlr_25(ctx, base);
	return;
loc_82A02478:
	// lis r3,-16384
	ctx.r3.s64 = -1073741824;
	// ori r3,r3,75
	ctx.r3.u64 = ctx.r3.u64 | 75;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82fa76bc
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A02488"))) PPC_WEAK_FUNC(sub_82A02488);
PPC_FUNC_IMPL(__imp__sub_82A02488) {
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
	// lis r11,-31964
	ctx.r11.s64 = -2094792704;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r31,r11,29312
	ctx.r31.s64 = ctx.r11.s64 + 29312;
	// addi r3,r31,144
	ctx.r3.s64 = ctx.r31.s64 + 144;
	// bl 0x83179274
	ctx.lr = 0x82A024B0;
	__imp__KfAcquireSpinLock(ctx, base);
	// lwz r11,684(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 684);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a024dc
	if (ctx.cr6.eq) goto loc_82A024DC;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,1
	ctx.r10.s64 = 1;
	// stw r11,684(r31)
	PPC_STORE_U32(ctx.r31.u32 + 684, ctx.r11.u32);
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// rlwimi r9,r10,1,29,30
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 1) & 0x6) | (ctx.r9.u64 & 0xFFFFFFFFFFFFFFF9);
	// stw r9,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r9.u32);
loc_82A024DC:
	// addi r3,r31,144
	ctx.r3.s64 = ctx.r31.s64 + 144;
	// bl 0x83179294
	ctx.lr = 0x82A024E4;
	__imp__KfReleaseSpinLock(ctx, base);
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

__attribute__((alias("__imp__sub_82A02500"))) PPC_WEAK_FUNC(sub_82A02500);
PPC_FUNC_IMPL(__imp__sub_82A02500) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x82A02508;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31964
	ctx.r11.s64 = -2094792704;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r30,r11,29312
	ctx.r30.s64 = ctx.r11.s64 + 29312;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r3,r30,144
	ctx.r3.s64 = ctx.r30.s64 + 144;
	// bl 0x83179274
	ctx.lr = 0x82A02524;
	__imp__KfAcquireSpinLock(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// rlwinm r10,r11,0,31,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// rlwinm r9,r10,0,29,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x4;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82a0254c
	if (!ctx.cr6.eq) goto loc_82A0254C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a022a0
	ctx.lr = 0x82A02548;
	sub_82A022A0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
loc_82A0254C:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r30,144
	ctx.r3.s64 = ctx.r30.s64 + 144;
	// bl 0x83179294
	ctx.lr = 0x82A02558;
	__imp__KfReleaseSpinLock(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A02564"))) PPC_WEAK_FUNC(sub_82A02564);
PPC_FUNC_IMPL(__imp__sub_82A02564) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A02568"))) PPC_WEAK_FUNC(sub_82A02568);
PPC_FUNC_IMPL(__imp__sub_82A02568) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x82A02570;
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
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82a0263c
	if (!ctx.cr6.eq) goto loc_82A0263C;
	// li r11,1
	ctx.r11.s64 = 1;
	// addi r8,r31,680
	ctx.r8.s64 = ctx.r31.s64 + 680;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
loc_82A02598:
	// mfmsr r9
	ctx.r9.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r8
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r8.u32);
	ctx.r10.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwcx. r10,0,r8
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r8.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r10.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x82a02598
	if (!ctx.cr0.eq) goto loc_82A02598;
	// lis r7,-31975
	ctx.r7.s64 = -2095513600;
	// addi r3,r30,8
	ctx.r3.s64 = ctx.r30.s64 + 8;
	// lwz r6,-12524(r7)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r7.u32 + -12524);
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// bctrl 
	ctx.lr = 0x82A025C8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,259
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 259, ctx.xer);
	// bne cr6,0x82a025e0
	if (!ctx.cr6.eq) goto loc_82A025E0;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
loc_82A025E0:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq cr6,0x82a02630
	if (ctx.cr6.eq) goto loc_82A02630;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r8,r31,680
	ctx.r8.s64 = ctx.r31.s64 + 680;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
loc_82A025F4:
	// mfmsr r9
	ctx.r9.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r8
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r8.u32);
	ctx.r10.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stwcx. r10,0,r8
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r8.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r10.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x82a025f4
	if (!ctx.cr0.eq) goto loc_82A025F4;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82a02630
	if (!ctx.cr6.eq) goto loc_82A02630;
	// sync 
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r31,1472
	ctx.r3.s64 = ctx.r31.s64 + 1472;
	// bl 0x831792b4
	ctx.lr = 0x82A02630;
	__imp__KeSetEvent(ctx, base);
loc_82A02630:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
loc_82A0263C:
	// lis r3,-16384
	ctx.r3.s64 = -1073741824;
	// ori r3,r3,75
	ctx.r3.u64 = ctx.r3.u64 | 75;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A0264C"))) PPC_WEAK_FUNC(sub_82A0264C);
PPC_FUNC_IMPL(__imp__sub_82A0264C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A02650"))) PPC_WEAK_FUNC(sub_82A02650);
PPC_FUNC_IMPL(__imp__sub_82A02650) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa766c
	ctx.lr = 0x82A02658;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31964
	ctx.r11.s64 = -2094792704;
	// li r25,0
	ctx.r25.s64 = 0;
	// addi r31,r11,29312
	ctx.r31.s64 = ctx.r11.s64 + 29312;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwz r11,136(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a02754
	if (ctx.cr6.eq) goto loc_82A02754;
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
	// stw r25,684(r31)
	PPC_STORE_U32(ctx.r31.u32 + 684, ctx.r25.u32);
	// mr r26,r25
	ctx.r26.u64 = ctx.r25.u64;
	// addi r30,r31,688
	ctx.r30.s64 = ctx.r31.s64 + 688;
	// li r27,1
	ctx.r27.s64 = 1;
	// lis r28,-31975
	ctx.r28.s64 = -2095513600;
loc_82A02690:
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82a02730
	if (!ctx.cr6.eq) goto loc_82A02730;
	// addi r9,r31,680
	ctx.r9.s64 = ctx.r31.s64 + 680;
	// stw r27,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r27.u32);
loc_82A026A4:
	// mfmsr r10
	ctx.r10.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r9
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r9.u32);
	ctx.r11.u64 = __builtin_bswap32(ctx.reserved.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stwcx. r11,0,r9
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r9.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r11.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r10,1
	ctx.msr = (ctx.r10.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x82a026a4
	if (!ctx.cr0.eq) goto loc_82A026A4;
	// lwz r8,-12524(r28)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r28.u32 + -12524);
	// addi r3,r30,8
	ctx.r3.s64 = ctx.r30.s64 + 8;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82A026D0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,259
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 259, ctx.xer);
	// bne cr6,0x82a026e4
	if (!ctx.cr6.eq) goto loc_82A026E4;
	// mr r29,r25
	ctx.r29.u64 = ctx.r25.u64;
	// b 0x82a02738
	goto loc_82A02738;
loc_82A026E4:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq cr6,0x82a02740
	if (ctx.cr6.eq) goto loc_82A02740;
	// addi r9,r31,680
	ctx.r9.s64 = ctx.r31.s64 + 680;
	// stw r25,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r25.u32);
loc_82A026F4:
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
	// bne 0x82a026f4
	if (!ctx.cr0.eq) goto loc_82A026F4;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82a02738
	if (!ctx.cr6.eq) goto loc_82A02738;
	// sync 
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r31,1472
	ctx.r3.s64 = ctx.r31.s64 + 1472;
	// bl 0x831792b4
	ctx.lr = 0x82A0272C;
	__imp__KeSetEvent(ctx, base);
	// b 0x82a02738
	goto loc_82A02738;
loc_82A02730:
	// lis r29,-16384
	ctx.r29.s64 = -1073741824;
	// ori r29,r29,75
	ctx.r29.u64 = ctx.r29.u64 | 75;
loc_82A02738:
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// blt cr6,0x82a02750
	if (ctx.cr6.lt) goto loc_82A02750;
loc_82A02740:
	// addi r26,r26,128
	ctx.r26.s64 = ctx.r26.s64 + 128;
	// addi r30,r30,128
	ctx.r30.s64 = ctx.r30.s64 + 128;
	// cmplwi cr6,r26,384
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 384, ctx.xer);
	// blt cr6,0x82a02690
	if (ctx.cr6.lt) goto loc_82A02690;
loc_82A02750:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
loc_82A02754:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82fa76bc
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A0275C"))) PPC_WEAK_FUNC(sub_82A0275C);
PPC_FUNC_IMPL(__imp__sub_82A0275C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A02760"))) PPC_WEAK_FUNC(sub_82A02760);
PPC_FUNC_IMPL(__imp__sub_82A02760) {
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
	// lwz r31,16(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// blt cr6,0x82a027d4
	if (ctx.cr6.lt) goto loc_82A027D4;
	// lwz r11,236(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 236);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a02798
	if (ctx.cr6.eq) goto loc_82A02798;
	// stw r30,308(r31)
	PPC_STORE_U32(ctx.r31.u32 + 308, ctx.r30.u32);
	// stw r30,236(r31)
	PPC_STORE_U32(ctx.r31.u32 + 236, ctx.r30.u32);
loc_82A02798:
	// lwz r11,288(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 288);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a027ac
	if (ctx.cr6.eq) goto loc_82A027AC;
	// stw r30,312(r31)
	PPC_STORE_U32(ctx.r31.u32 + 312, ctx.r30.u32);
	// stw r30,288(r31)
	PPC_STORE_U32(ctx.r31.u32 + 288, ctx.r30.u32);
loc_82A027AC:
	// addi r4,r31,188
	ctx.r4.s64 = ctx.r31.s64 + 188;
	// addi r3,r31,84
	ctx.r3.s64 = ctx.r31.s64 + 84;
	// li r5,52
	ctx.r5.s64 = 52;
	// bl 0x82fa77c0
	ctx.lr = 0x82A027BC;
	sub_82FA77C0(ctx, base);
	// addi r4,r31,240
	ctx.r4.s64 = ctx.r31.s64 + 240;
	// addi r3,r31,136
	ctx.r3.s64 = ctx.r31.s64 + 136;
	// li r5,52
	ctx.r5.s64 = 52;
	// bl 0x82fa77c0
	ctx.lr = 0x82A027CC;
	sub_82FA77C0(ctx, base);
	// stw r30,292(r31)
	PPC_STORE_U32(ctx.r31.u32 + 292, ctx.r30.u32);
	// b 0x82a027dc
	goto loc_82A027DC;
loc_82A027D4:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,292(r31)
	PPC_STORE_U32(ctx.r31.u32 + 292, ctx.r11.u32);
loc_82A027DC:
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

__attribute__((alias("__imp__sub_82A027F4"))) PPC_WEAK_FUNC(sub_82A027F4);
PPC_FUNC_IMPL(__imp__sub_82A027F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A027F8"))) PPC_WEAK_FUNC(sub_82A027F8);
PPC_FUNC_IMPL(__imp__sub_82A027F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa766c
	ctx.lr = 0x82A02800;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,292(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 292);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// mr r25,r7
	ctx.r25.u64 = ctx.r7.u64;
	// mr r31,r8
	ctx.r31.u64 = ctx.r8.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a02838
	if (ctx.cr6.eq) goto loc_82A02838;
	// lis r3,-16384
	ctx.r3.s64 = -1073741824;
	// ori r3,r3,1
	ctx.r3.u64 = ctx.r3.u64 | 1;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82fa76bc
	__restgprlr_25(ctx, base);
	return;
loc_82A02838:
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,292(r31)
	PPC_STORE_U32(ctx.r31.u32 + 292, ctx.r11.u32);
	// sync 
	// addi r30,r31,356
	ctx.r30.s64 = ctx.r31.s64 + 356;
	// li r5,44
	ctx.r5.s64 = 44;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82fa7cf0
	ctx.lr = 0x82A02858;
	sub_82FA7CF0(ctx, base);
	// lis r10,15
	ctx.r10.s64 = 983040;
	// clrldi r9,r28,32
	ctx.r9.u64 = ctx.r28.u64 & 0xFFFFFFFF;
	// stw r31,372(r31)
	PPC_STORE_U32(ctx.r31.u32 + 372, ctx.r31.u32);
	// ori r10,r10,16960
	ctx.r10.u64 = ctx.r10.u64 | 16960;
	// sth r29,380(r31)
	PPC_STORE_U16(ctx.r31.u32 + 380, ctx.r29.u16);
	// lis r8,762
	ctx.r8.s64 = 49938432;
	// sth r27,388(r31)
	PPC_STORE_U16(ctx.r31.u32 + 388, ctx.r27.u16);
	// clrldi r7,r26,32
	ctx.r7.u64 = ctx.r26.u64 & 0xFFFFFFFF;
	// sth r25,396(r31)
	PPC_STORE_U16(ctx.r31.u32 + 396, ctx.r25.u16);
	// mulld r6,r9,r10
	ctx.r6.s64 = ctx.r9.s64 * ctx.r10.s64;
	// ori r11,r8,61568
	ctx.r11.u64 = ctx.r8.u64 | 61568;
	// mulld r5,r7,r10
	ctx.r5.s64 = ctx.r7.s64 * ctx.r10.s64;
	// divd r3,r5,r11
	ctx.r3.s64 = ctx.r5.s64 / ctx.r11.s64;
	// divd r4,r6,r11
	ctx.r4.s64 = ctx.r6.s64 / ctx.r11.s64;
	// lis r11,-32096
	ctx.r11.s64 = -2103443456;
	// stw r3,392(r31)
	PPC_STORE_U32(ctx.r31.u32 + 392, ctx.r3.u32);
	// li r10,15
	ctx.r10.s64 = 15;
	// stw r4,384(r31)
	PPC_STORE_U32(ctx.r31.u32 + 384, ctx.r4.u32);
	// addi r9,r11,10080
	ctx.r9.s64 = ctx.r11.s64 + 10080;
	// stw r10,356(r31)
	PPC_STORE_U32(ctx.r31.u32 + 356, ctx.r10.u32);
	// lis r6,-31975
	ctx.r6.s64 = -2095513600;
	// stw r9,376(r31)
	PPC_STORE_U32(ctx.r31.u32 + 376, ctx.r9.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r5,-12524(r6)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r6.u32 + -12524);
	// mtctr r5
	ctx.ctr.u64 = ctx.r5.u64;
	// bctrl 
	ctx.lr = 0x82A028C0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x82a028d0
	if (!ctx.cr6.lt) goto loc_82A028D0;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,292(r31)
	PPC_STORE_U32(ctx.r31.u32 + 292, ctx.r11.u32);
loc_82A028D0:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82fa76bc
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A028D8"))) PPC_WEAK_FUNC(sub_82A028D8);
PPC_FUNC_IMPL(__imp__sub_82A028D8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7640
	ctx.lr = 0x82A028E0;
	__savegprlr_14(ctx, base);
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31964
	ctx.r11.s64 = -2094792704;
	// stw r4,348(r1)
	PPC_STORE_U32(ctx.r1.u32 + 348, ctx.r4.u32);
	// li r24,0
	ctx.r24.s64 = 0;
	// addi r19,r11,29312
	ctx.r19.s64 = ctx.r11.s64 + 29312;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r24,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r24.u32);
	// mr r23,r24
	ctx.r23.u64 = ctx.r24.u64;
	// stw r24,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r24.u32);
	// stw r24,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r24.u32);
	// stw r24,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r24.u32);
	// lwz r10,1112(r19)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r19.u32 + 1112);
	// lwz r9,1116(r19)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r19.u32 + 1116);
	// lwz r8,1120(r19)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r19.u32 + 1120);
	// lwz r7,1124(r19)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r19.u32 + 1124);
	// lwz r11,1104(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 1104);
	// stw r10,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r10.u32);
	// stw r9,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r9.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r8,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r8.u32);
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// stw r24,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r24.u32);
	// beq cr6,0x82a03394
	if (ctx.cr6.eq) goto loc_82A03394;
	// lwz r11,1364(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 1364);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82a03394
	if (!ctx.cr6.eq) goto loc_82A03394;
	// mftb r11
	ctx.r11.u64 = __rdtsc();
	// addi r3,r19,1260
	ctx.r3.s64 = ctx.r19.s64 + 1260;
	// addi r4,r19,1156
	ctx.r4.s64 = ctx.r19.s64 + 1156;
	// stw r11,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r11.u32);
	// li r5,52
	ctx.r5.s64 = 52;
	// bl 0x82fa77c0
	ctx.lr = 0x82A02960;
	sub_82FA77C0(ctx, base);
	// li r9,13
	ctx.r9.s64 = 13;
	// addi r10,r19,1308
	ctx.r10.s64 = ctx.r19.s64 + 1308;
	// addi r11,r19,1204
	ctx.r11.s64 = ctx.r19.s64 + 1204;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82A02970:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x82a02970
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82A02970;
	// mr r29,r31
	ctx.r29.u64 = ctx.r31.u64;
	// stw r31,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r31.u32);
	// addi r25,r19,1156
	ctx.r25.s64 = ctx.r19.s64 + 1156;
	// lwz r14,1076(r19)
	ctx.r14.u64 = PPC_LOAD_U32(ctx.r19.u32 + 1076);
	// addi r20,r1,132
	ctx.r20.s64 = ctx.r1.s64 + 132;
	// lwz r9,1380(r19)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r19.u32 + 1380);
	// addi r21,r1,136
	ctx.r21.s64 = ctx.r1.s64 + 136;
	// lwz r4,1072(r19)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r19.u32 + 1072);
	// addi r8,r19,12100
	ctx.r8.s64 = ctx.r19.s64 + 12100;
	// lwz r7,1080(r19)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r19.u32 + 1080);
	// li r22,1
	ctx.r22.s64 = 1;
	// lwz r6,1084(r19)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r19.u32 + 1084);
	// lis r10,15
	ctx.r10.s64 = 983040;
	// stw r25,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r25.u32);
	// lis r5,762
	ctx.r5.s64 = 49938432;
	// stw r20,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r20.u32);
	// lis r3,1144
	ctx.r3.s64 = 74973184;
	// stw r21,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r21.u32);
	// lis r31,25
	ctx.r31.s64 = 1638400;
	// stw r8,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r8.u32);
	// mr r30,r24
	ctx.r30.u64 = ctx.r24.u64;
	// stw r24,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r24.u32);
	// addi r11,r19,1260
	ctx.r11.s64 = ctx.r19.s64 + 1260;
	// stw r22,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r22.u32);
	// ori r27,r10,16960
	ctx.r27.u64 = ctx.r10.u64 | 16960;
	// ori r26,r5,61568
	ctx.r26.u64 = ctx.r5.u64 | 61568;
	// ori r28,r3,26816
	ctx.r28.u64 = ctx.r3.u64 | 26816;
	// ori r17,r31,28266
	ctx.r17.u64 = ctx.r31.u64 | 28266;
loc_82A029EC:
	// lwz r10,36(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// addic r5,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r5.s64 = ctx.r10.s64 + -1;
	// subfe. r15,r5,r10
	temp.u8 = (~ctx.r5.u32 + ctx.r10.u32 < ~ctx.r5.u32) | (~ctx.r5.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r15.u64 = ~ctx.r5.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	ctx.cr0.compare<int32_t>(ctx.r15.s32, 0, ctx.xer);
	// beq 0x82a02a58
	if (ctx.cr0.eq) goto loc_82A02A58;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82a02a58
	if (ctx.cr6.eq) goto loc_82A02A58;
	// lwz r5,28(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// lwz r3,148(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// lwz r31,32(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// subf r5,r5,r3
	ctx.r5.s64 = ctx.r3.s64 - ctx.r5.s64;
	// cmplw cr6,r5,r31
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r31.u32, ctx.xer);
	// blt cr6,0x82a02a58
	if (ctx.cr6.lt) goto loc_82A02A58;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// stw r10,36(r11)
	PPC_STORE_U32(ctx.r11.u32 + 36, ctx.r10.u32);
	// lwz r5,36(r25)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r25.u32 + 36);
	// addic. r10,r5,-1
	ctx.xer.ca = ctx.r5.u32 > 0;
	ctx.r10.s64 = ctx.r5.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r10,36(r25)
	PPC_STORE_U32(ctx.r25.u32 + 36, ctx.r10.u32);
	// bne 0x82a02a58
	if (!ctx.cr0.eq) goto loc_82A02A58;
	// stw r24,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r24.u32);
	// stw r24,32(r25)
	PPC_STORE_U32(ctx.r25.u32 + 32, ctx.r24.u32);
	// stw r24,40(r11)
	PPC_STORE_U32(ctx.r11.u32 + 40, ctx.r24.u32);
	// lwz r10,8(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 8);
	// mulld r5,r10,r27
	ctx.r5.s64 = ctx.r10.s64 * ctx.r27.s64;
	// divd r3,r5,r26
	ctx.r3.s64 = ctx.r5.s64 / ctx.r26.s64;
	// stw r24,40(r25)
	PPC_STORE_U32(ctx.r25.u32 + 40, ctx.r24.u32);
	// stw r24,20(r8)
	PPC_STORE_U32(ctx.r8.u32 + 20, ctx.r24.u32);
	// stw r3,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r3.u32);
loc_82A02A58:
	// lwz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// bne cr6,0x82a02a6c
	if (!ctx.cr6.eq) goto loc_82A02A6C;
	// cmpwi cr6,r15,0
	ctx.cr6.compare<int32_t>(ctx.r15.s32, 0, ctx.xer);
	// bne cr6,0x82a03190
	if (!ctx.cr6.eq) goto loc_82A03190;
loc_82A02A6C:
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82a02afc
	if (ctx.cr6.eq) goto loc_82A02AFC;
	// lwz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// li r7,3
	ctx.r7.s64 = 3;
	// lwz r6,84(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// lwz r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwz r3,4(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r4,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r4.u32);
	// stw r4,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r4.u32);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r7,40(r11)
	PPC_STORE_U32(ctx.r11.u32 + 40, ctx.r7.u32);
	// stw r3,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r3.u32);
	// add r10,r10,r6
	ctx.r10.u64 = ctx.r10.u64 + ctx.r6.u64;
	// add r10,r10,r5
	ctx.r10.u64 = ctx.r10.u64 + ctx.r5.u64;
	// stw r10,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r10.u32);
	// beq cr6,0x82a02ac4
	if (ctx.cr6.eq) goto loc_82A02AC4;
	// lwz r10,96(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 96);
	// b 0x82a02ac8
	goto loc_82A02AC8;
loc_82A02AC4:
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
loc_82A02AC8:
	// subf r10,r28,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r28.s64;
	// stw r4,0(r20)
	PPC_STORE_U32(ctx.r20.u32 + 0, ctx.r4.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r24,0(r21)
	PPC_STORE_U32(ctx.r21.u32 + 0, ctx.r24.u32);
	// or r23,r22,r23
	ctx.r23.u64 = ctx.r22.u64 | ctx.r23.u64;
	// stw r10,44(r11)
	PPC_STORE_U32(ctx.r11.u32 + 44, ctx.r10.u32);
	// stw r9,48(r11)
	PPC_STORE_U32(ctx.r11.u32 + 48, ctx.r9.u32);
	// stw r24,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r24.u32);
	// stw r24,8(r8)
	PPC_STORE_U32(ctx.r8.u32 + 8, ctx.r24.u32);
	// stw r23,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r23.u32);
	// stw r24,12(r8)
	PPC_STORE_U32(ctx.r8.u32 + 12, ctx.r24.u32);
	// stw r24,16(r8)
	PPC_STORE_U32(ctx.r8.u32 + 16, ctx.r24.u32);
	// b 0x82a03190
	goto loc_82A03190;
loc_82A02AFC:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82a031f4
	if (ctx.cr6.eq) goto loc_82A031F4;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82a03190
	if (ctx.cr6.eq) goto loc_82A03190;
	// lwz r5,16(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// lwz r8,88(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 88);
	// lwz r9,92(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 92);
	// lwz r3,96(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 96);
	// subf. r8,r5,r8
	ctx.r8.s64 = ctx.r8.s64 - ctx.r5.s64;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// lwz r31,4(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// subf r5,r3,r9
	ctx.r5.s64 = ctx.r9.s64 - ctx.r3.s64;
	// beq 0x82a03190
	if (ctx.cr0.eq) goto loc_82A03190;
	// lwz r3,20(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 20);
	// lis r18,12
	ctx.r18.s64 = 786432;
	// twllei r8,0
	if (ctx.r8.u32 <= 0) __builtin_debugtrap();
	// subf r9,r3,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r3.s64;
	// ori r16,r18,13568
	ctx.r16.u64 = ctx.r18.u64 | 13568;
	// divwu r18,r9,r8
	ctx.r18.u32 = ctx.r9.u32 / ctx.r8.u32;
	// cmplw cr6,r18,r16
	ctx.cr6.compare<uint32_t>(ctx.r18.u32, ctx.r16.u32, ctx.xer);
	// blt cr6,0x82a03190
	if (ctx.cr6.lt) goto loc_82A03190;
	// cmplw cr6,r18,r10
	ctx.cr6.compare<uint32_t>(ctx.r18.u32, ctx.r10.u32, ctx.xer);
	// subf r30,r10,r18
	ctx.r30.s64 = ctx.r18.s64 - ctx.r10.s64;
	// bge cr6,0x82a02b60
	if (!ctx.cr6.lt) goto loc_82A02B60;
	// subf r30,r18,r10
	ctx.r30.s64 = ctx.r10.s64 - ctx.r18.s64;
loc_82A02B60:
	// addis r9,r5,25
	ctx.r9.s64 = ctx.r5.s64 + 1638400;
	// stw r30,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r30.u32);
	// addi r9,r9,28265
	ctx.r9.s64 = ctx.r9.s64 + 28265;
	// divwu r8,r9,r17
	ctx.r8.u32 = ctx.r9.u32 / ctx.r17.u32;
	// mullw r9,r8,r17
	ctx.r9.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r17.s32);
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// subf r9,r9,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r9.s64;
	// add r16,r9,r5
	ctx.r16.u64 = ctx.r9.u64 + ctx.r5.u64;
	// cmplw cr6,r16,r31
	ctx.cr6.compare<uint32_t>(ctx.r16.u32, ctx.r31.u32, ctx.xer);
	// subf r9,r16,r31
	ctx.r9.s64 = ctx.r31.s64 - ctx.r16.s64;
	// ble cr6,0x82a02b98
	if (!ctx.cr6.gt) goto loc_82A02B98;
	// subf r17,r31,r16
	ctx.r17.s64 = ctx.r16.s64 - ctx.r31.s64;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// b 0x82a02ba0
	goto loc_82A02BA0;
loc_82A02B98:
	// subf r8,r31,r10
	ctx.r8.s64 = ctx.r10.s64 - ctx.r31.s64;
	// add r17,r8,r16
	ctx.r17.u64 = ctx.r8.u64 + ctx.r16.u64;
loc_82A02BA0:
	// cmplw cr6,r17,r9
	ctx.cr6.compare<uint32_t>(ctx.r17.u32, ctx.r9.u32, ctx.xer);
	// stw r17,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r17.u32);
	// blt cr6,0x82a02bb0
	if (ctx.cr6.lt) goto loc_82A02BB0;
	// stw r9,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r9.u32);
loc_82A02BB0:
	// lwz r8,108(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// rlwinm r8,r8,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// cmplw cr6,r30,r8
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r8.u32, ctx.xer);
	// ble cr6,0x82a02c48
	if (!ctx.cr6.gt) goto loc_82A02C48;
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplw cr6,r18,r10
	ctx.cr6.compare<uint32_t>(ctx.r18.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82a02bdc
	if (!ctx.cr6.gt) goto loc_82A02BDC;
	// add r8,r30,r14
	ctx.r8.u64 = ctx.r30.u64 + ctx.r14.u64;
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// bge cr6,0x82a02bf0
	if (!ctx.cr6.lt) goto loc_82A02BF0;
	// b 0x82a030e8
	goto loc_82A030E8;
loc_82A02BDC:
	// add r8,r9,r30
	ctx.r8.u64 = ctx.r9.u64 + ctx.r30.u64;
	// cmplw cr6,r8,r7
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, ctx.xer);
	// bgt cr6,0x82a030e8
	if (ctx.cr6.gt) goto loc_82A030E8;
	// lwz r23,80(r1)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r24,0
	ctx.r24.s64 = 0;
loc_82A02BF0:
	// cmplw cr6,r18,r10
	ctx.cr6.compare<uint32_t>(ctx.r18.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82a02c00
	if (!ctx.cr6.gt) goto loc_82A02C00;
	// subf r9,r30,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r30.s64;
	// b 0x82a02c04
	goto loc_82A02C04;
loc_82A02C00:
	// add r9,r9,r30
	ctx.r9.u64 = ctx.r9.u64 + ctx.r30.u64;
loc_82A02C04:
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// li r7,1
	ctx.r7.s64 = 1;
	// add r10,r10,r18
	ctx.r10.u64 = ctx.r10.u64 + ctx.r18.u64;
	// lwz r6,88(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// or r5,r22,r23
	ctx.r5.u64 = ctx.r22.u64 | ctx.r23.u64;
	// stw r7,40(r11)
	PPC_STORE_U32(ctx.r11.u32 + 40, ctx.r7.u32);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stw r24,0(r21)
	PPC_STORE_U32(ctx.r21.u32 + 0, ctx.r24.u32);
	// stw r5,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r5.u32);
	// add r4,r10,r6
	ctx.r4.u64 = ctx.r10.u64 + ctx.r6.u64;
	// stw r4,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r4.u32);
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// stw r8,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r8.u32);
	// stw r8,0(r20)
	PPC_STORE_U32(ctx.r20.u32 + 0, ctx.r8.u32);
	// b 0x82a030e8
	goto loc_82A030E8;
loc_82A02C48:
	// lwz r8,24(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// lis r5,25
	ctx.r5.s64 = 1638400;
	// lwz r30,12(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// twllei r10,0
	if (ctx.r10.u32 <= 0) __builtin_debugtrap();
	// subf r3,r8,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r8.s64;
	// lwz r20,44(r11)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// ori r27,r5,28266
	ctx.r27.u64 = ctx.r5.u64 | 28266;
	// divwu r8,r3,r10
	ctx.r8.u32 = ctx.r3.u32 / ctx.r10.u32;
	// divwu r5,r30,r27
	ctx.r5.u32 = ctx.r30.u32 / ctx.r27.u32;
	// mullw r8,r8,r10
	ctx.r8.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r10.s32);
	// subf r28,r8,r3
	ctx.r28.s64 = ctx.r3.s64 - ctx.r8.s64;
	// mullw r8,r5,r27
	ctx.r8.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r27.s32);
	// add r22,r8,r4
	ctx.r22.u64 = ctx.r8.u64 + ctx.r4.u64;
	// cmplw cr6,r28,r31
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r31.u32, ctx.xer);
	// subf r8,r28,r31
	ctx.r8.s64 = ctx.r31.s64 - ctx.r28.s64;
	// subf r5,r31,r28
	ctx.r5.s64 = ctx.r28.s64 - ctx.r31.s64;
	// ble cr6,0x82a02c94
	if (!ctx.cr6.gt) goto loc_82A02C94;
	// add r8,r8,r10
	ctx.r8.u64 = ctx.r8.u64 + ctx.r10.u64;
	// b 0x82a02c98
	goto loc_82A02C98;
loc_82A02C94:
	// add r5,r5,r10
	ctx.r5.u64 = ctx.r5.u64 + ctx.r10.u64;
loc_82A02C98:
	// cmplw cr6,r5,r8
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r8.u32, ctx.xer);
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// blt cr6,0x82a02ca8
	if (ctx.cr6.lt) goto loc_82A02CA8;
	// mr r30,r8
	ctx.r30.u64 = ctx.r8.u64;
loc_82A02CA8:
	// cmplw cr6,r16,r28
	ctx.cr6.compare<uint32_t>(ctx.r16.u32, ctx.r28.u32, ctx.xer);
	// subf r8,r16,r28
	ctx.r8.s64 = ctx.r28.s64 - ctx.r16.s64;
	// ble cr6,0x82a02cc0
	if (!ctx.cr6.gt) goto loc_82A02CC0;
	// subf r5,r28,r16
	ctx.r5.s64 = ctx.r16.s64 - ctx.r28.s64;
	// add r8,r8,r10
	ctx.r8.u64 = ctx.r8.u64 + ctx.r10.u64;
	// b 0x82a02cc8
	goto loc_82A02CC8;
loc_82A02CC0:
	// subf r5,r28,r10
	ctx.r5.s64 = ctx.r10.s64 - ctx.r28.s64;
	// add r5,r5,r16
	ctx.r5.u64 = ctx.r5.u64 + ctx.r16.u64;
loc_82A02CC8:
	// cmplw cr6,r5,r8
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r8.u32, ctx.xer);
	// bge cr6,0x82a02cd4
	if (!ctx.cr6.lt) goto loc_82A02CD4;
	// mr r8,r5
	ctx.r8.u64 = ctx.r5.u64;
loc_82A02CD4:
	// rlwinm r5,r10,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// li r4,10
	ctx.r4.s64 = 10;
	// divwu r3,r5,r4
	ctx.r3.u32 = ctx.r5.u32 / ctx.r4.u32;
	// cmplw cr6,r8,r3
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r3.u32, ctx.xer);
	// ble cr6,0x82a02d00
	if (!ctx.cr6.gt) goto loc_82A02D00;
	// cmplw cr6,r10,r27
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r27.u32, ctx.xer);
	// bne cr6,0x82a02d00
	if (!ctx.cr6.eq) goto loc_82A02D00;
	// lwz r8,96(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 96);
	// stw r8,44(r11)
	PPC_STORE_U32(ctx.r11.u32 + 44, ctx.r8.u32);
	// lwz r5,96(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 96);
	// stw r5,44(r25)
	PPC_STORE_U32(ctx.r25.u32 + 44, ctx.r5.u32);
loc_82A02D00:
	// lwz r8,12(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// subf r8,r8,r18
	ctx.r8.s64 = ctx.r18.s64 - ctx.r8.s64;
	// add r8,r8,r22
	ctx.r8.u64 = ctx.r8.u64 + ctx.r22.u64;
	// cmplw cr6,r8,r10
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r10.u32, ctx.xer);
	// subf r21,r10,r8
	ctx.r21.s64 = ctx.r8.s64 - ctx.r10.s64;
	// bge cr6,0x82a02d1c
	if (!ctx.cr6.lt) goto loc_82A02D1C;
	// subf r21,r8,r10
	ctx.r21.s64 = ctx.r10.s64 - ctx.r8.s64;
loc_82A02D1C:
	// lwz r5,108(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// rlwinm r8,r10,31,1,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// lwz r3,104(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// rlwinm r23,r5,1,0,30
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 1) & 0xFFFFFFFE;
	// subf r5,r23,r8
	ctx.r5.s64 = ctx.r8.s64 - ctx.r23.s64;
	// add r4,r23,r8
	ctx.r4.u64 = ctx.r23.u64 + ctx.r8.u64;
	// cmplw cr6,r3,r5
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r5.u32, ctx.xer);
	// ble cr6,0x82a02d48
	if (!ctx.cr6.gt) goto loc_82A02D48;
	// cmplw cr6,r3,r4
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r4.u32, ctx.xer);
	// mr r3,r8
	ctx.r3.u64 = ctx.r8.u64;
	// blt cr6,0x82a02d4c
	if (ctx.cr6.lt) goto loc_82A02D4C;
loc_82A02D48:
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
loc_82A02D4C:
	// cmplw cr6,r30,r5
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r5.u32, ctx.xer);
	// ble cr6,0x82a02d5c
	if (!ctx.cr6.gt) goto loc_82A02D5C;
	// cmplw cr6,r30,r4
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r4.u32, ctx.xer);
	// blt cr6,0x82a02d60
	if (ctx.cr6.lt) goto loc_82A02D60;
loc_82A02D5C:
	// mr r8,r24
	ctx.r8.u64 = ctx.r24.u64;
loc_82A02D60:
	// add r5,r3,r31
	ctx.r5.u64 = ctx.r3.u64 + ctx.r31.u64;
	// add r4,r8,r31
	ctx.r4.u64 = ctx.r8.u64 + ctx.r31.u64;
	// divwu r3,r5,r10
	ctx.r3.u32 = ctx.r5.u32 / ctx.r10.u32;
	// divwu r31,r4,r10
	ctx.r31.u32 = ctx.r4.u32 / ctx.r10.u32;
	// mullw r8,r3,r10
	ctx.r8.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r10.s32);
	// subf r8,r8,r5
	ctx.r8.s64 = ctx.r5.s64 - ctx.r8.s64;
	// mullw r5,r31,r10
	ctx.r5.s64 = int64_t(ctx.r31.s32) * int64_t(ctx.r10.s32);
	// twllei r10,0
	if (ctx.r10.u32 <= 0) __builtin_debugtrap();
	// twllei r10,0
	if (ctx.r10.u32 <= 0) __builtin_debugtrap();
	// subf r27,r5,r4
	ctx.r27.s64 = ctx.r4.s64 - ctx.r5.s64;
	// cmplw cr6,r16,r8
	ctx.cr6.compare<uint32_t>(ctx.r16.u32, ctx.r8.u32, ctx.xer);
	// subf r29,r16,r8
	ctx.r29.s64 = ctx.r8.s64 - ctx.r16.s64;
	// ble cr6,0x82a02da0
	if (!ctx.cr6.gt) goto loc_82A02DA0;
	// subf r25,r8,r16
	ctx.r25.s64 = ctx.r16.s64 - ctx.r8.s64;
	// add r24,r29,r10
	ctx.r24.u64 = ctx.r29.u64 + ctx.r10.u64;
	// b 0x82a02dac
	goto loc_82A02DAC;
loc_82A02DA0:
	// subf r5,r8,r10
	ctx.r5.s64 = ctx.r10.s64 - ctx.r8.s64;
	// mr r24,r29
	ctx.r24.u64 = ctx.r29.u64;
	// add r25,r5,r16
	ctx.r25.u64 = ctx.r5.u64 + ctx.r16.u64;
loc_82A02DAC:
	// cmplw cr6,r25,r24
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, ctx.r24.u32, ctx.xer);
	// mr r26,r25
	ctx.r26.u64 = ctx.r25.u64;
	// blt cr6,0x82a02dbc
	if (ctx.cr6.lt) goto loc_82A02DBC;
	// mr r26,r24
	ctx.r26.u64 = ctx.r24.u64;
loc_82A02DBC:
	// cmplw cr6,r28,r27
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r27.u32, ctx.xer);
	// subf r30,r27,r28
	ctx.r30.s64 = ctx.r28.s64 - ctx.r27.s64;
	// subf r31,r28,r27
	ctx.r31.s64 = ctx.r27.s64 - ctx.r28.s64;
	// ble cr6,0x82a02dd8
	if (!ctx.cr6.gt) goto loc_82A02DD8;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// add r4,r31,r10
	ctx.r4.u64 = ctx.r31.u64 + ctx.r10.u64;
	// b 0x82a02de0
	goto loc_82A02DE0;
loc_82A02DD8:
	// add r5,r30,r10
	ctx.r5.u64 = ctx.r30.u64 + ctx.r10.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
loc_82A02DE0:
	// cmplw cr6,r5,r4
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, ctx.r4.u32, ctx.xer);
	// blt cr6,0x82a02dec
	if (ctx.cr6.lt) goto loc_82A02DEC;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
loc_82A02DEC:
	// cmplw cr6,r16,r8
	ctx.cr6.compare<uint32_t>(ctx.r16.u32, ctx.r8.u32, ctx.xer);
	// ble cr6,0x82a02e00
	if (!ctx.cr6.gt) goto loc_82A02E00;
	// subf r3,r8,r16
	ctx.r3.s64 = ctx.r16.s64 - ctx.r8.s64;
	// add r8,r29,r10
	ctx.r8.u64 = ctx.r29.u64 + ctx.r10.u64;
	// b 0x82a02e0c
	goto loc_82A02E0C;
loc_82A02E00:
	// subf r3,r8,r10
	ctx.r3.s64 = ctx.r10.s64 - ctx.r8.s64;
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// add r3,r3,r16
	ctx.r3.u64 = ctx.r3.u64 + ctx.r16.u64;
loc_82A02E0C:
	// cmplw cr6,r3,r8
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r8.u32, ctx.xer);
	// ble cr6,0x82a02e18
	if (!ctx.cr6.gt) goto loc_82A02E18;
	// neg r3,r8
	ctx.r3.s64 = -ctx.r8.s64;
loc_82A02E18:
	// cmplw cr6,r28,r27
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r27.u32, ctx.xer);
	// ble cr6,0x82a02e2c
	if (!ctx.cr6.gt) goto loc_82A02E2C;
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// add r31,r31,r10
	ctx.r31.u64 = ctx.r31.u64 + ctx.r10.u64;
	// b 0x82a02e30
	goto loc_82A02E30;
loc_82A02E2C:
	// add r8,r30,r10
	ctx.r8.u64 = ctx.r30.u64 + ctx.r10.u64;
loc_82A02E30:
	// cmplw cr6,r8,r31
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r31.u32, ctx.xer);
	// mr r29,r8
	ctx.r29.u64 = ctx.r8.u64;
	// ble cr6,0x82a02e40
	if (!ctx.cr6.gt) goto loc_82A02E40;
	// neg r29,r31
	ctx.r29.s64 = -ctx.r31.s64;
loc_82A02E40:
	// lis r31,1144
	ctx.r31.s64 = 74973184;
	// lwz r8,112(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r4,108(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// li r30,-1
	ctx.r30.s64 = -1;
	// ori r28,r31,26816
	ctx.r28.u64 = ctx.r31.u64 | 26816;
	// lwz r31,104(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// cmplw cr6,r31,r4
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r4.u32, ctx.xer);
	// lwz r31,96(r8)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r8.u32 + 96);
	// subf r8,r20,r31
	ctx.r8.s64 = ctx.r31.s64 - ctx.r20.s64;
	// subfc r8,r28,r8
	ctx.xer.ca = ctx.r8.u32 >= ctx.r28.u32;
	ctx.r8.s64 = ctx.r8.s64 - ctx.r28.s64;
	// subfze r8,r30
	temp.u64 = ~ctx.r30.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u64 < ctx.xer.ca;
	ctx.r8.u64 = temp.u64;
	// ble cr6,0x82a02f08
	if (!ctx.cr6.gt) goto loc_82A02F08;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x82a02f08
	if (ctx.cr6.eq) goto loc_82A02F08;
	// li r30,1
	ctx.r30.s64 = 1;
	// li r28,0
	ctx.r28.s64 = 0;
loc_82A02E80:
	// lwz r6,44(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// cmplw cr6,r6,r31
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x82a02e98
	if (!ctx.cr6.eq) goto loc_82A02E98;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// li r8,1
	ctx.r8.s64 = 1;
	// bne cr6,0x82a02e9c
	if (!ctx.cr6.eq) goto loc_82A02E9C;
loc_82A02E98:
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
loc_82A02E9C:
	// lwz r6,8(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplw cr6,r6,r22
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r22.u32, ctx.xer);
	// beq cr6,0x82a0305c
	if (ctx.cr6.eq) goto loc_82A0305C;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x82a0305c
	if (!ctx.cr6.eq) goto loc_82A0305C;
	// clrlwi r8,r4,1
	ctx.r8.u64 = ctx.r4.u32 & 0x7FFFFFFF;
	// cmplw cr6,r21,r8
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, ctx.r8.u32, ctx.xer);
	// bgt cr6,0x82a0305c
	if (ctx.cr6.gt) goto loc_82A0305C;
	// rlwinm r10,r18,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r18.u32 | (ctx.r18.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r7,3
	ctx.r7.s64 = 3;
	// add r10,r18,r10
	ctx.r10.u64 = ctx.r18.u64 + ctx.r10.u64;
	// lwz r4,92(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r6,96(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r5,100(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// or r9,r4,r8
	ctx.r9.u64 = ctx.r4.u64 | ctx.r8.u64;
	// stw r22,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r22.u32);
	// add r8,r10,r3
	ctx.r8.u64 = ctx.r10.u64 + ctx.r3.u64;
	// stw r7,40(r11)
	PPC_STORE_U32(ctx.r11.u32 + 40, ctx.r7.u32);
	// stw r22,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r22.u32);
	// stw r28,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r28.u32);
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// stw r8,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r8.u32);
	// b 0x82a030e8
	goto loc_82A030E8;
loc_82A02F08:
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplw cr6,r26,r4
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r4.u32, ctx.xer);
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
	// ble cr6,0x82a02f20
	if (!ctx.cr6.gt) goto loc_82A02F20;
	// cmplw cr6,r26,r23
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r23.u32, ctx.xer);
	// blt cr6,0x82a02e80
	if (ctx.cr6.lt) goto loc_82A02E80;
loc_82A02F20:
	// lwz r10,152(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// cmplw cr6,r26,r10
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82a02fe0
	if (!ctx.cr6.gt) goto loc_82A02FE0;
	// cmpwi cr6,r15,0
	ctx.cr6.compare<int32_t>(ctx.r15.s32, 0, ctx.xer);
	// bne cr6,0x82a02fe0
	if (!ctx.cr6.eq) goto loc_82A02FE0;
	// cmplw cr6,r26,r5
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r5.u32, ctx.xer);
	// blt cr6,0x82a030e8
	if (ctx.cr6.lt) goto loc_82A030E8;
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplw cr6,r25,r24
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, ctx.r24.u32, ctx.xer);
	// bge cr6,0x82a02f58
	if (!ctx.cr6.lt) goto loc_82A02F58;
	// add r10,r6,r14
	ctx.r10.u64 = ctx.r6.u64 + ctx.r14.u64;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82a02f64
	if (!ctx.cr6.lt) goto loc_82A02F64;
	// b 0x82a030e8
	goto loc_82A030E8;
loc_82A02F58:
	// add r10,r9,r6
	ctx.r10.u64 = ctx.r9.u64 + ctx.r6.u64;
	// cmplw cr6,r10,r7
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r7.u32, ctx.xer);
	// bgt cr6,0x82a030e8
	if (ctx.cr6.gt) goto loc_82A030E8;
loc_82A02F64:
	// rlwinm r10,r18,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r18.u32 | (ctx.r18.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r8,84(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r7,88(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// li r5,2
	ctx.r5.s64 = 2;
	// add r10,r18,r10
	ctx.r10.u64 = ctx.r18.u64 + ctx.r10.u64;
	// stw r5,40(r11)
	PPC_STORE_U32(ctx.r11.u32 + 40, ctx.r5.u32);
	// cmplw cr6,r25,r24
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, ctx.r24.u32, ctx.xer);
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// rlwinm r8,r6,1,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 1) & 0xFFFFFFFE;
	// add r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 + ctx.r7.u64;
	// stw r10,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r10.u32);
	// bge cr6,0x82a02fa8
	if (!ctx.cr6.lt) goto loc_82A02FA8;
	// subf r7,r6,r9
	ctx.r7.s64 = ctx.r9.s64 - ctx.r6.s64;
	// subf r6,r8,r10
	ctx.r6.s64 = ctx.r10.s64 - ctx.r8.s64;
	// stw r7,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r7.u32);
	// stw r6,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r6.u32);
	// b 0x82a02fb8
	goto loc_82A02FB8;
loc_82A02FA8:
	// add r9,r9,r6
	ctx.r9.u64 = ctx.r9.u64 + ctx.r6.u64;
	// add r8,r8,r10
	ctx.r8.u64 = ctx.r8.u64 + ctx.r10.u64;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// stw r8,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r8.u32);
loc_82A02FB8:
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r8,92(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r7,100(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r6,96(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// or r5,r8,r10
	ctx.r5.u64 = ctx.r8.u64 | ctx.r10.u64;
	// stw r5,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r5.u32);
	// stw r28,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r28.u32);
	// stw r9,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r9.u32);
	// b 0x82a030e8
	goto loc_82A030E8;
loc_82A02FE0:
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplw cr6,r10,r22
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r22.u32, ctx.xer);
	// beq cr6,0x82a030e8
	if (ctx.cr6.eq) goto loc_82A030E8;
	// clrlwi r10,r4,1
	ctx.r10.u64 = ctx.r4.u32 & 0x7FFFFFFF;
	// cmplw cr6,r21,r10
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, ctx.r10.u32, ctx.xer);
	// bgt cr6,0x82a030e8
	if (ctx.cr6.gt) goto loc_82A030E8;
	// xor r10,r29,r3
	ctx.r10.u64 = ctx.r29.u64 ^ ctx.r3.u64;
	// rlwinm r9,r10,0,0,0
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x80000000;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82a030e8
	if (ctx.cr6.eq) goto loc_82A030E8;
	// cmpwi cr6,r15,0
	ctx.cr6.compare<int32_t>(ctx.r15.s32, 0, ctx.xer);
	// bne cr6,0x82a030e8
	if (!ctx.cr6.eq) goto loc_82A030E8;
	// rlwinm r10,r18,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r18.u32 | (ctx.r18.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r8,80(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// li r7,3
	ctx.r7.s64 = 3;
	// add r10,r18,r10
	ctx.r10.u64 = ctx.r18.u64 + ctx.r10.u64;
	// lwz r4,92(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r6,96(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r5,100(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// or r9,r4,r8
	ctx.r9.u64 = ctx.r4.u64 | ctx.r8.u64;
	// stw r22,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r22.u32);
	// add r8,r10,r3
	ctx.r8.u64 = ctx.r10.u64 + ctx.r3.u64;
	// stw r7,40(r11)
	PPC_STORE_U32(ctx.r11.u32 + 40, ctx.r7.u32);
	// stw r22,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r22.u32);
	// stw r28,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r28.u32);
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// stw r8,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r8.u32);
	// b 0x82a030e8
	goto loc_82A030E8;
loc_82A0305C:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne cr6,0x82a0306c
	if (!ctx.cr6.eq) goto loc_82A0306C;
	// mr r17,r25
	ctx.r17.u64 = ctx.r25.u64;
	// mr r9,r24
	ctx.r9.u64 = ctx.r24.u64;
loc_82A0306C:
	// cmplw cr6,r17,r9
	ctx.cr6.compare<uint32_t>(ctx.r17.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x82a0308c
	if (!ctx.cr6.lt) goto loc_82A0308C;
	// rlwinm r9,r17,31,1,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r17.u32 | (ctx.r17.u64 << 32), 31) & 0x7FFFFFFF;
	// add r9,r9,r14
	ctx.r9.u64 = ctx.r9.u64 + ctx.r14.u64;
	// cmplw cr6,r6,r9
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, ctx.r9.u32, ctx.xer);
	// subf r9,r17,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r17.s64;
	// blt cr6,0x82a0308c
	if (ctx.cr6.lt) goto loc_82A0308C;
	// neg r9,r17
	ctx.r9.s64 = -ctx.r17.s64;
loc_82A0308C:
	// srawi r10,r9,1
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r9.s32 >> 1;
	// addze r10,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r10.s64 = temp.s64;
	// add r8,r10,r6
	ctx.r8.u64 = ctx.r10.u64 + ctx.r6.u64;
	// cmplw cr6,r8,r7
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, ctx.xer);
	// bgt cr6,0x82a030e8
	if (ctx.cr6.gt) goto loc_82A030E8;
	// rlwinm r10,r18,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r18.u32 | (ctx.r18.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r7,84(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lwz r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lwz r3,100(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// li r9,2
	ctx.r9.s64 = 2;
	// add r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 + ctx.r7.u64;
	// lwz r31,92(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r7,88(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stw r5,40(r11)
	PPC_STORE_U32(ctx.r11.u32 + 40, ctx.r5.u32);
	// or r6,r31,r6
	ctx.r6.u64 = ctx.r31.u64 | ctx.r6.u64;
	// add r5,r10,r7
	ctx.r5.u64 = ctx.r10.u64 + ctx.r7.u64;
	// stw r8,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r8.u32);
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// stw r6,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r6.u32);
	// stw r5,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r5.u32);
loc_82A030E8:
	// lis r10,15
	ctx.r10.s64 = 983040;
	// lwz r9,116(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// clrldi r7,r18,32
	ctx.r7.u64 = ctx.r18.u64 & 0xFFFFFFFF;
	// lwz r8,104(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// ori r10,r10,16960
	ctx.r10.u64 = ctx.r10.u64 | 16960;
	// lwz r29,112(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// lis r31,762
	ctx.r31.s64 = 49938432;
	// lwz r25,124(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// lwz r23,80(r1)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// clrldi r6,r16,32
	ctx.r6.u64 = ctx.r16.u64 & 0xFFFFFFFF;
	// lwz r22,92(r1)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// mulld r7,r7,r10
	ctx.r7.s64 = ctx.r7.s64 * ctx.r10.s64;
	// lwz r30,120(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// mr r5,r10
	ctx.r5.u64 = ctx.r10.u64;
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
	// ori r10,r31,61568
	ctx.r10.u64 = ctx.r31.u64 | 61568;
	// mulld r5,r9,r3
	ctx.r5.s64 = ctx.r9.s64 * ctx.r3.s64;
	// mulld r4,r8,r3
	ctx.r4.s64 = ctx.r8.s64 * ctx.r3.s64;
	// mulld r6,r6,r3
	ctx.r6.s64 = ctx.r6.s64 * ctx.r3.s64;
	// divd r3,r7,r10
	ctx.r3.s64 = ctx.r7.s64 / ctx.r10.s64;
	// divd r9,r6,r10
	ctx.r9.s64 = ctx.r6.s64 / ctx.r10.s64;
	// divd r8,r5,r10
	ctx.r8.s64 = ctx.r5.s64 / ctx.r10.s64;
	// divd r7,r4,r10
	ctx.r7.s64 = ctx.r4.s64 / ctx.r10.s64;
	// lwz r10,128(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// mr r5,r9
	ctx.r5.u64 = ctx.r9.u64;
	// mr r4,r8
	ctx.r4.u64 = ctx.r8.u64;
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// stw r6,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r6.u32);
	// lis r9,762
	ctx.r9.s64 = 49938432;
	// lis r8,15
	ctx.r8.s64 = 983040;
	// stw r5,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r5.u32);
	// lis r7,1144
	ctx.r7.s64 = 74973184;
	// stw r4,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r4.u32);
	// lis r6,25
	ctx.r6.s64 = 1638400;
	// stw r3,16(r10)
	PPC_STORE_U32(ctx.r10.u32 + 16, ctx.r3.u32);
	// ori r26,r9,61568
	ctx.r26.u64 = ctx.r9.u64 | 61568;
	// ori r27,r8,16960
	ctx.r27.u64 = ctx.r8.u64 | 16960;
	// li r24,0
	ctx.r24.s64 = 0;
	// ori r28,r7,26816
	ctx.r28.u64 = ctx.r7.u64 | 26816;
	// ori r17,r6,28266
	ctx.r17.u64 = ctx.r6.u64 | 28266;
loc_82A03190:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82a031f4
	if (ctx.cr6.eq) goto loc_82A031F4;
	// lwz r10,88(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 88);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// lwz r9,88(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 88);
	// stw r9,16(r25)
	PPC_STORE_U32(ctx.r25.u32 + 16, ctx.r9.u32);
	// lwz r8,92(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 92);
	// stw r8,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r8.u32);
	// lwz r7,92(r29)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + 92);
	// stw r7,20(r25)
	PPC_STORE_U32(ctx.r25.u32 + 20, ctx.r7.u32);
	// lwz r6,96(r29)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r29.u32 + 96);
	// stw r6,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r6.u32);
	// lwz r5,96(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 96);
	// stw r5,24(r25)
	PPC_STORE_U32(ctx.r25.u32 + 24, ctx.r5.u32);
	// lwz r4,96(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 96);
	// lwz r3,44(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// subf r10,r3,r4
	ctx.r10.s64 = ctx.r4.s64 - ctx.r3.s64;
	// cmplw cr6,r10,r28
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r28.u32, ctx.xer);
	// blt cr6,0x82a031f4
	if (ctx.cr6.lt) goto loc_82A031F4;
	// rotlwi r10,r4,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r4.u32, 0);
	// subf r9,r28,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r28.s64;
	// stw r9,44(r11)
	PPC_STORE_U32(ctx.r11.u32 + 44, ctx.r9.u32);
	// lwz r8,96(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 96);
	// subf r7,r28,r8
	ctx.r7.s64 = ctx.r8.s64 - ctx.r28.s64;
	// stw r7,44(r25)
	PPC_STORE_U32(ctx.r25.u32 + 44, ctx.r7.u32);
loc_82A031F4:
	// lwz r29,348(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 348);
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r25,r19,1208
	ctx.r25.s64 = ctx.r19.s64 + 1208;
	// lwz r9,1384(r19)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r19.u32 + 1384);
	// addi r20,r1,140
	ctx.r20.s64 = ctx.r1.s64 + 140;
	// lwz r4,1092(r19)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r19.u32 + 1092);
	// addi r21,r1,144
	ctx.r21.s64 = ctx.r1.s64 + 144;
	// lwz r14,1096(r19)
	ctx.r14.u64 = PPC_LOAD_U32(ctx.r19.u32 + 1096);
	// addi r8,r19,12124
	ctx.r8.s64 = ctx.r19.s64 + 12124;
	// lwz r7,1100(r19)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r19.u32 + 1100);
	// rotlwi r22,r22,1
	ctx.r22.u64 = __builtin_rotateleft32(ctx.r22.u32, 1);
	// lwz r6,1104(r19)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r19.u32 + 1104);
	// stw r30,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r30.u32);
	// addi r11,r19,1312
	ctx.r11.s64 = ctx.r19.s64 + 1312;
	// stw r25,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r25.u32);
	// cmplwi cr6,r30,2
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 2, ctx.xer);
	// stw r29,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r29.u32);
	// stw r20,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r20.u32);
	// stw r21,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r21.u32);
	// stw r8,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r8.u32);
	// stw r22,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r22.u32);
	// blt cr6,0x82a029ec
	if (ctx.cr6.lt) goto loc_82A029EC;
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// beq cr6,0x82a03394
	if (ctx.cr6.eq) goto loc_82A03394;
	// lwz r11,128(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 128);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82a03394
	if (ctx.cr6.eq) goto loc_82A03394;
	// mftb r11
	ctx.r11.u64 = __rdtsc();
	// clrlwi r28,r23,31
	ctx.r28.u64 = ctx.r23.u32 & 0x1;
	// lwz r30,132(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// rotlwi r10,r11,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// lwz r5,136(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82a03294
	if (ctx.cr6.eq) goto loc_82A03294;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// bne cr6,0x82a03288
	if (!ctx.cr6.eq) goto loc_82A03288;
	// stw r30,1268(r19)
	PPC_STORE_U32(ctx.r19.u32 + 1268, ctx.r30.u32);
loc_82A03288:
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r10,1288(r19)
	PPC_STORE_U32(ctx.r19.u32 + 1288, ctx.r10.u32);
	// stw r11,1296(r19)
	PPC_STORE_U32(ctx.r19.u32 + 1296, ctx.r11.u32);
loc_82A03294:
	// rlwinm r29,r23,0,30,30
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 0) & 0x2;
	// lwz r31,140(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// lwz r9,144(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82a032c0
	if (ctx.cr6.eq) goto loc_82A032C0;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82a032b4
	if (!ctx.cr6.eq) goto loc_82A032B4;
	// stw r31,1320(r19)
	PPC_STORE_U32(ctx.r19.u32 + 1320, ctx.r31.u32);
loc_82A032B4:
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r10,1340(r19)
	PPC_STORE_U32(ctx.r19.u32 + 1340, ctx.r10.u32);
	// stw r11,1348(r19)
	PPC_STORE_U32(ctx.r19.u32 + 1348, ctx.r11.u32);
loc_82A032C0:
	// lis r11,-31964
	ctx.r11.s64 = -2094792704;
	// lwz r11,29300(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 29300);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82a032f8
	if (!ctx.cr6.eq) goto loc_82A032F8;
	// addis r11,r23,1
	ctx.r11.s64 = ctx.r23.s64 + 65536;
	// addi r8,r19,1072
	ctx.r8.s64 = ctx.r19.s64 + 1072;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// clrlwi r7,r9,16
	ctx.r7.u64 = ctx.r9.u32 & 0xFFFF;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// clrlwi r5,r5,16
	ctx.r5.u64 = ctx.r5.u32 & 0xFFFF;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// clrlwi r3,r11,16
	ctx.r3.u64 = ctx.r11.u32 & 0xFFFF;
	// bl 0x82a027f8
	ctx.lr = 0x82A032F4;
	sub_82A027F8(ctx, base);
	// b 0x82a03300
	goto loc_82A03300;
loc_82A032F8:
	// lis r3,-16384
	ctx.r3.s64 = -1073741824;
	// ori r3,r3,34
	ctx.r3.u64 = ctx.r3.u64 | 34;
loc_82A03300:
	// sync 
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82a03364
	if (ctx.cr6.lt) goto loc_82A03364;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// bne cr6,0x82a0331c
	if (!ctx.cr6.eq) goto loc_82A0331C;
	// lwz r10,1164(r19)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r19.u32 + 1164);
loc_82A0331C:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// bne cr6,0x82a0332c
	if (!ctx.cr6.eq) goto loc_82A0332C;
	// lwz r11,1216(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 1216);
loc_82A0332C:
	// clrldi r10,r10,32
	ctx.r10.u64 = ctx.r10.u64 & 0xFFFFFFFF;
	// lwz r9,1300(r19)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r19.u32 + 1300);
	// clrldi r7,r11,32
	ctx.r7.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// lwz r8,1352(r19)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r19.u32 + 1352);
	// mulld r6,r10,r27
	ctx.r6.s64 = ctx.r10.s64 * ctx.r27.s64;
	// stw r9,12120(r19)
	PPC_STORE_U32(ctx.r19.u32 + 12120, ctx.r9.u32);
	// stw r8,12144(r19)
	PPC_STORE_U32(ctx.r19.u32 + 12144, ctx.r8.u32);
	// mulld r5,r7,r27
	ctx.r5.s64 = ctx.r7.s64 * ctx.r27.s64;
	// divd r4,r6,r26
	ctx.r4.s64 = ctx.r6.s64 / ctx.r26.s64;
	// divd r3,r5,r26
	ctx.r3.s64 = ctx.r5.s64 / ctx.r26.s64;
	// stw r4,12100(r19)
	PPC_STORE_U32(ctx.r19.u32 + 12100, ctx.r4.u32);
	// stw r3,12124(r19)
	PPC_STORE_U32(ctx.r19.u32 + 12124, ctx.r3.u32);
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x82fa7690
	__restgprlr_14(ctx, base);
	return;
loc_82A03364:
	// lwz r11,1164(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 1164);
	// mr r9,r24
	ctx.r9.u64 = ctx.r24.u64;
	// lwz r10,1216(r19)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r19.u32 + 1216);
	// mulld r9,r11,r27
	ctx.r9.s64 = ctx.r11.s64 * ctx.r27.s64;
	// stw r24,12120(r19)
	PPC_STORE_U32(ctx.r19.u32 + 12120, ctx.r24.u32);
	// stw r24,12144(r19)
	PPC_STORE_U32(ctx.r19.u32 + 12144, ctx.r24.u32);
	// mulld r7,r10,r27
	ctx.r7.s64 = ctx.r10.s64 * ctx.r27.s64;
	// divd r8,r9,r26
	ctx.r8.s64 = ctx.r9.s64 / ctx.r26.s64;
	// divd r6,r7,r26
	ctx.r6.s64 = ctx.r7.s64 / ctx.r26.s64;
	// stw r8,12100(r19)
	PPC_STORE_U32(ctx.r19.u32 + 12100, ctx.r8.u32);
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
	// stw r6,12124(r19)
	PPC_STORE_U32(ctx.r19.u32 + 12124, ctx.r6.u32);
loc_82A03394:
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x82fa7690
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A0339C"))) PPC_WEAK_FUNC(sub_82A0339C);
PPC_FUNC_IMPL(__imp__sub_82A0339C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A033A0"))) PPC_WEAK_FUNC(sub_82A033A0);
PPC_FUNC_IMPL(__imp__sub_82A033A0) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82a033e0
	if (ctx.cr6.eq) goto loc_82A033E0;
	// lwz r11,300(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 300);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82a033c8
	if (!ctx.cr6.eq) goto loc_82A033C8;
	// lwz r11,348(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 348);
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r10,r11,316
	ctx.r10.s64 = ctx.r11.s64 + 316;
	// stw r10,300(r3)
	PPC_STORE_U32(ctx.r3.u32 + 300, ctx.r10.u32);
loc_82A033C8:
	// lwz r11,300(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 300);
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r9,300(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 300);
	// lwz r8,4(r4)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// stw r8,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r8.u32);
loc_82A033E0:
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// lwz r11,304(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 304);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82a03408
	if (!ctx.cr6.eq) goto loc_82A03408;
	// lwz r11,352(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 352);
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r10,r11,332
	ctx.r10.s64 = ctx.r11.s64 + 332;
	// stw r10,304(r3)
	PPC_STORE_U32(ctx.r3.u32 + 304, ctx.r10.u32);
loc_82A03408:
	// lwz r11,304(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 304);
	// lwz r10,0(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r9,304(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 304);
	// lwz r8,4(r5)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// stw r8,4(r9)
	PPC_STORE_U32(ctx.r9.u32 + 4, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A03424"))) PPC_WEAK_FUNC(sub_82A03424);
PPC_FUNC_IMPL(__imp__sub_82A03424) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A03428"))) PPC_WEAK_FUNC(sub_82A03428);
PPC_FUNC_IMPL(__imp__sub_82A03428) {
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
	// addi r30,r11,-12452
	ctx.r30.s64 = ctx.r11.s64 + -12452;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831791a4
	ctx.lr = 0x82A0344C;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lis r11,-31964
	ctx.r11.s64 = -2094792704;
	// addi r31,r11,29312
	ctx.r31.s64 = ctx.r11.s64 + 29312;
	// lwz r3,10668(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10668);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a03470
	if (ctx.cr6.eq) goto loc_82A03470;
	// lis r4,8348
	ctx.r4.s64 = 547094528;
	// bl 0x82691460
	ctx.lr = 0x82A03468;
	sub_82691460(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,10668(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10668, ctx.r11.u32);
loc_82A03470:
	// lwz r11,10672(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10672);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a0349c
	if (ctx.cr6.eq) goto loc_82A0349C;
	// lis r4,-21348
	ctx.r4.s64 = -1399062528;
	// lwz r3,100(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// bl 0x82691460
	ctx.lr = 0x82A03488;
	sub_82691460(ctx, base);
	// lis r4,8348
	ctx.r4.s64 = 547094528;
	// lwz r3,10672(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10672);
	// bl 0x82691460
	ctx.lr = 0x82A03494;
	sub_82691460(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,10672(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10672, ctx.r11.u32);
loc_82A0349C:
	// lwz r11,10676(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10676);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a034c8
	if (ctx.cr6.eq) goto loc_82A034C8;
	// lis r4,-21348
	ctx.r4.s64 = -1399062528;
	// lwz r3,100(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// bl 0x82691460
	ctx.lr = 0x82A034B4;
	sub_82691460(ctx, base);
	// lis r4,8348
	ctx.r4.s64 = 547094528;
	// lwz r3,10676(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10676);
	// bl 0x82691460
	ctx.lr = 0x82A034C0;
	sub_82691460(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,10676(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10676, ctx.r11.u32);
loc_82A034C8:
	// li r10,7
	ctx.r10.s64 = 7;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r11,r31,10648
	ctx.r11.s64 = ctx.r31.s64 + 10648;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82A034D8:
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x82a034d8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82A034D8;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831791b4
	ctx.lr = 0x82A034E8;
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

__attribute__((alias("__imp__sub_82A03500"))) PPC_WEAK_FUNC(sub_82A03500);
PPC_FUNC_IMPL(__imp__sub_82A03500) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7668
	ctx.lr = 0x82A03508;
	__savegprlr_24(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// mr r25,r7
	ctx.r25.u64 = ctx.r7.u64;
	// mr r24,r8
	ctx.r24.u64 = ctx.r8.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82a036f8
	if (ctx.cr6.eq) goto loc_82A036F8;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82a036f8
	if (ctx.cr6.eq) goto loc_82A036F8;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82a036f8
	if (ctx.cr6.eq) goto loc_82A036F8;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x82a036f8
	if (ctx.cr6.eq) goto loc_82A036F8;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82a036f8
	if (ctx.cr6.eq) goto loc_82A036F8;
	// lis r11,-31964
	ctx.r11.s64 = -2094792704;
	// addi r31,r11,29312
	ctx.r31.s64 = ctx.r11.s64 + 29312;
	// lwz r11,10632(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10632);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82a03570
	if (!ctx.cr6.eq) goto loc_82A03570;
	// lis r3,-31999
	ctx.r3.s64 = -2097086464;
	// ori r3,r3,5
	ctx.r3.u64 = ctx.r3.u64 | 5;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x82fa76b8
	__restgprlr_24(ctx, base);
	return;
loc_82A03570:
	// mr r4,r9
	ctx.r4.u64 = ctx.r9.u64;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x829fe270
	ctx.lr = 0x82A0357C;
	sub_829FE270(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x829fdfd0
	ctx.lr = 0x82A03588;
	sub_829FDFD0(ctx, base);
	// lis r11,-31975
	ctx.r11.s64 = -2095513600;
	// addi r30,r11,-12580
	ctx.r30.s64 = ctx.r11.s64 + -12580;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831791a4
	ctx.lr = 0x82A03598;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// li r10,1
	ctx.r10.s64 = 1;
	// ori r11,r11,16389
	ctx.r11.u64 = ctx.r11.u64 | 16389;
	// stw r10,10656(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10656, ctx.r10.u32);
	// addi r3,r31,10636
	ctx.r3.s64 = ctx.r31.s64 + 10636;
	// stw r11,10664(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10664, ctx.r11.u32);
	// bl 0x831793b4
	ctx.lr = 0x82A035B4;
	__imp__KeResetEvent(ctx, base);
	// addi r11,r31,10636
	ctx.r11.s64 = ctx.r31.s64 + 10636;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,10652(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10652, ctx.r11.u32);
	// bl 0x831791b4
	ctx.lr = 0x82A035C4;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// addi r11,r31,10636
	ctx.r11.s64 = ctx.r31.s64 + 10636;
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// li r5,44
	ctx.r5.s64 = 44;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// bl 0x82fa7cf0
	ctx.lr = 0x82A035E8;
	sub_82FA7CF0(ctx, base);
	// lis r9,-153
	ctx.r9.s64 = -10027008;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// ori r8,r9,27008
	ctx.r8.u64 = ctx.r9.u64 | 27008;
	// addi r9,r1,88
	ctx.r9.s64 = ctx.r1.s64 + 88;
	// std r8,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.r8.u64);
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
	ctx.lr = 0x82A03618;
	__imp__KeWaitForMultipleObjects(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bne cr6,0x82a03684
	if (!ctx.cr6.eq) goto loc_82A03684;
	// lwz r11,10672(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10672);
	// lwz r11,100(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// stw r11,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r11.u32);
	// lwz r11,10676(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10676);
	// lwz r10,100(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// stw r10,0(r24)
	PPC_STORE_U32(ctx.r24.u32 + 0, ctx.r10.u32);
	// lwz r11,10672(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10672);
	// addi r9,r11,8
	ctx.r9.s64 = ctx.r11.s64 + 8;
	// stw r9,0(r27)
	PPC_STORE_U32(ctx.r27.u32 + 0, ctx.r9.u32);
	// lwz r11,10676(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10676);
	// addi r8,r11,8
	ctx.r8.s64 = ctx.r11.s64 + 8;
	// stw r8,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r8.u32);
	// lwz r11,10668(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10668);
	// stw r11,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r11.u32);
	// lwz r29,10664(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10664);
	// bl 0x831791a4
	ctx.lr = 0x82A03668;
	__imp__RtlEnterCriticalSection(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,10656(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10656, ctx.r11.u32);
	// bl 0x831791b4
	ctx.lr = 0x82A03678;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x82fa76b8
	__restgprlr_24(ctx, base);
	return;
loc_82A03684:
	// bl 0x831791a4
	ctx.lr = 0x82A03688;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// li r10,0
	ctx.r10.s64 = 0;
	// ori r11,r11,16389
	ctx.r11.u64 = ctx.r11.u64 | 16389;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r10,10656(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10656, ctx.r10.u32);
	// stw r11,10664(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10664, ctx.r11.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r9,10652(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10652, ctx.r9.u32);
	// bl 0x831791b4
	ctx.lr = 0x82A036AC;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// cmpwi cr6,r29,1
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 1, ctx.xer);
	// beq cr6,0x82a036e4
	if (ctx.cr6.eq) goto loc_82A036E4;
	// cmpwi cr6,r29,258
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 258, ctx.xer);
	// beq cr6,0x82a036d0
	if (ctx.cr6.eq) goto loc_82A036D0;
	// lis r29,-32768
	ctx.r29.s64 = -2147483648;
	// ori r29,r29,65535
	ctx.r29.u64 = ctx.r29.u64 | 65535;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x82fa76b8
	__restgprlr_24(ctx, base);
	return;
loc_82A036D0:
	// lis r29,-32761
	ctx.r29.s64 = -2147024896;
	// ori r29,r29,21
	ctx.r29.u64 = ctx.r29.u64 | 21;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x82fa76b8
	__restgprlr_24(ctx, base);
	return;
loc_82A036E4:
	// lis r29,-32768
	ctx.r29.s64 = -2147483648;
	// ori r29,r29,16388
	ctx.r29.u64 = ctx.r29.u64 | 16388;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x82fa76b8
	__restgprlr_24(ctx, base);
	return;
loc_82A036F8:
	// lis r29,-32761
	ctx.r29.s64 = -2147024896;
	// ori r29,r29,87
	ctx.r29.u64 = ctx.r29.u64 | 87;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x82fa76b8
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A0370C"))) PPC_WEAK_FUNC(sub_82A0370C);
PPC_FUNC_IMPL(__imp__sub_82A0370C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A03710"))) PPC_WEAK_FUNC(sub_82A03710);
PPC_FUNC_IMPL(__imp__sub_82A03710) {
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
	// lis r10,-31964
	ctx.r10.s64 = -2094792704;
	// lis r11,-31975
	ctx.r11.s64 = -2095513600;
	// addi r31,r10,29312
	ctx.r31.s64 = ctx.r10.s64 + 29312;
	// addi r30,r11,-12452
	ctx.r30.s64 = ctx.r11.s64 + -12452;
	// lwz r11,10768(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10768);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a03764
	if (ctx.cr6.eq) goto loc_82A03764;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831791a4
	ctx.lr = 0x82A03748;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lis r4,-29506
	ctx.r4.s64 = -1933705216;
	// lwz r3,10768(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10768);
	// bl 0x82691460
	ctx.lr = 0x82A03754;
	sub_82691460(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,10768(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10768, ctx.r11.u32);
	// bl 0x831791b4
	ctx.lr = 0x82A03764;
	__imp__RtlLeaveCriticalSection(ctx, base);
loc_82A03764:
	// lwz r11,10876(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10876);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a03794
	if (ctx.cr6.eq) goto loc_82A03794;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831791a4
	ctx.lr = 0x82A03778;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lis r4,-29506
	ctx.r4.s64 = -1933705216;
	// lwz r3,10876(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10876);
	// bl 0x82691460
	ctx.lr = 0x82A03784;
	sub_82691460(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,10876(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10876, ctx.r11.u32);
	// bl 0x831791b4
	ctx.lr = 0x82A03794;
	__imp__RtlLeaveCriticalSection(ctx, base);
loc_82A03794:
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

__attribute__((alias("__imp__sub_82A037AC"))) PPC_WEAK_FUNC(sub_82A037AC);
PPC_FUNC_IMPL(__imp__sub_82A037AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A037B0"))) PPC_WEAK_FUNC(sub_82A037B0);
PPC_FUNC_IMPL(__imp__sub_82A037B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7668
	ctx.lr = 0x82A037B8;
	__savegprlr_24(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// ld r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r3.u32 + 8);
	// mr r24,r10
	ctx.r24.u64 = ctx.r10.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// rlwinm r10,r11,0,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8;
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
	// cmpldi cr6,r10,0
	ctx.cr6.compare<uint64_t>(ctx.r10.u64, 0, ctx.xer);
	// beq cr6,0x82a03834
	if (ctx.cr6.eq) goto loc_82A03834;
	// bl 0x83178d64
	ctx.lr = 0x82A037F0;
	__imp__XamGetCurrentTitleId(ctx, base);
	// lis r8,8274
	ctx.r8.s64 = 542244864;
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// stw r24,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r24.u32);
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// stw r25,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r25.u32);
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// stw r26,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r26.u32);
	// ori r8,r8,21504
	ctx.r8.u64 = ctx.r8.u64 | 21504;
	// stw r27,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r27.u32);
	// li r6,40
	ctx.r6.s64 = 40;
	// stw r28,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r28.u32);
	// li r5,8
	ctx.r5.s64 = 8;
	// li r4,3
	ctx.r4.s64 = 3;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x83179614
	ctx.lr = 0x82A0382C;
	__imp__EtxProducerLog(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82fa76b8
	__restgprlr_24(ctx, base);
	return;
loc_82A03834:
	// lis r3,16389
	ctx.r3.s64 = 1074069504;
	// ori r3,r3,2
	ctx.r3.u64 = ctx.r3.u64 | 2;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82fa76b8
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A03844"))) PPC_WEAK_FUNC(sub_82A03844);
PPC_FUNC_IMPL(__imp__sub_82A03844) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A03848"))) PPC_WEAK_FUNC(sub_82A03848);
PPC_FUNC_IMPL(__imp__sub_82A03848) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x82A03850;
	__savegprlr_28(ctx, base);
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// li r31,-1
	ctx.r31.s64 = -1;
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r31,-96(r1)
	PPC_STORE_U32(ctx.r1.u32 + -96, ctx.r31.u32);
	// addi r7,r3,136
	ctx.r7.s64 = ctx.r3.s64 + 136;
	// lfs f0,23856(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 23856);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// lfs f10,5184(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5184);
	ctx.f10.f64 = double(temp.f32);
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// fmr f12,f0
	ctx.f12.f64 = ctx.f0.f64;
	// stw r31,-92(r1)
	PPC_STORE_U32(ctx.r1.u32 + -92, ctx.r31.u32);
	// fmr f11,f0
	ctx.f11.f64 = ctx.f0.f64;
	// addi r5,r3,16
	ctx.r5.s64 = ctx.r3.s64 + 16;
	// lfs f9,21420(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 21420);
	ctx.f9.f64 = double(temp.f32);
loc_82A0388C:
	// lwz r11,-24(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + -24);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82a03938
	if (!ctx.cr6.eq) goto loc_82A03938;
	// addi r11,r1,-80
	ctx.r11.s64 = ctx.r1.s64 + -80;
	// lvx128 v63,r0,r5
	simd::store_shuffled(ctx.v63, simd::load_and_shuffle(base + ((ctx.r5.u32) & ~0xF), VectorMaskL));
	// addi r29,r1,-80
	ctx.r29.s64 = ctx.r1.s64 + -80;
	// vspltisw128 v62,0
	_mm_store_si128((__m128i*)ctx.v62.u32, _mm_set1_epi32(int(0x0)));
	// addi r28,r1,-64
	ctx.r28.s64 = ctx.r1.s64 + -64;
	// lwz r8,0(r7)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// mr r6,r9
	ctx.r6.u64 = ctx.r9.u64;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// stvx128 v63,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r11,r3,196
	ctx.r11.s64 = ctx.r3.s64 + 196;
	// stfs f10,-76(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r1.u32 + -76, temp.u32);
	// lvx128 v63,r0,r29
	simd::store_shuffled(ctx.v63, simd::load_and_shuffle(base + ((ctx.r29.u32) & ~0xF), VectorMaskL));
	// vmsum3fp128 v61,v63,v63
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v61.f32, _mm_dp_ps(_mm_load_ps(ctx.v63.f32), _mm_load_ps(ctx.v63.f32), 0xEF));
	// vrsqrtefp128 v60,v61
	_mm_store_ps(ctx.v60.f32, _mm_div_ps(_mm_set1_ps(1), _mm_sqrt_ps(_mm_load_ps(ctx.v61.f32))));
	// vor128 v13,v61,v61
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_load_si128((__m128i*)ctx.v61.u8));
	// vcmpeqfp128 v12,v61,v62
	_mm_store_ps(ctx.v12.f32, _mm_cmpeq_ps(_mm_load_ps(ctx.v61.f32), _mm_load_ps(ctx.v62.f32)));
	// vmulfp128 v0,v61,v60
	_mm_store_ps(ctx.v0.f32, _mm_mul_ps(_mm_load_ps(ctx.v61.f32), _mm_load_ps(ctx.v60.f32)));
	// vsel v12,v0,v13,v12
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)ctx.v0.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)ctx.v13.u8))));
	// stvx128 v12,r0,r28
	_mm_store_si128((__m128i*)(base + ((ctx.r28.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lfs f0,-64(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -64);
	ctx.f0.f64 = double(temp.f32);
loc_82A038E8:
	// lwz r29,0(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r8,r29
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x82a03908
	if (ctx.cr6.eq) goto loc_82A03908;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplwi cr6,r10,2
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 2, ctx.xer);
	// blt cr6,0x82a038e8
	if (ctx.cr6.lt) goto loc_82A038E8;
	// b 0x82a0390c
	goto loc_82A0390C;
loc_82A03908:
	// fsubs f0,f0,f9
	ctx.fpscr.disableFlushMode();
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f9.f64));
loc_82A0390C:
	// fcmpu cr6,f0,f12
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// bge cr6,0x82a03928
	if (!ctx.cr6.lt) goto loc_82A03928;
	// fmr f13,f12
	ctx.f13.f64 = ctx.f12.f64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// fmr f12,f0
	ctx.f12.f64 = ctx.f0.f64;
	// mr r31,r9
	ctx.r31.u64 = ctx.r9.u64;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
loc_82A03928:
	// fcmpu cr6,f0,f11
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f11.f64);
	// bge cr6,0x82a03938
	if (!ctx.cr6.lt) goto loc_82A03938;
	// stw r6,-92(r1)
	PPC_STORE_U32(ctx.r1.u32 + -92, ctx.r6.u32);
	// fmr f11,f0
	ctx.f11.f64 = ctx.f0.f64;
loc_82A03938:
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// addi r7,r7,4
	ctx.r7.s64 = ctx.r7.s64 + 4;
	// addi r5,r5,16
	ctx.r5.s64 = ctx.r5.s64 + 16;
	// cmplwi cr6,r9,6
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 6, ctx.xer);
	// blt cr6,0x82a0388c
	if (ctx.cr6.lt) goto loc_82A0388C;
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r31,-96(r1)
	PPC_STORE_U32(ctx.r1.u32 + -96, ctx.r31.u32);
	// addi r9,r1,-96
	ctx.r9.s64 = ctx.r1.s64 + -96;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// subf r9,r4,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r4.s64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82A03964:
	// lwzx r10,r9,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r11.u32);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// beq cr6,0x82a03984
	if (ctx.cr6.eq) goto loc_82A03984;
	// addi r10,r10,34
	ctx.r10.s64 = ctx.r10.s64 + 34;
	// rlwinm r8,r10,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r7,r8,r3
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r3.u32);
	// stw r7,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r7.u32);
	// b 0x82a03988
	goto loc_82A03988;
loc_82A03984:
	// stw r30,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r30.u32);
loc_82A03988:
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x82a03964
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82A03964;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A03994"))) PPC_WEAK_FUNC(sub_82A03994);
PPC_FUNC_IMPL(__imp__sub_82A03994) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A03998"))) PPC_WEAK_FUNC(sub_82A03998);
PPC_FUNC_IMPL(__imp__sub_82A03998) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa766c
	ctx.lr = 0x82A039A0;
	__savegprlr_25(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r28,0
	ctx.r28.s64 = 0;
	// lis r4,8348
	ctx.r4.s64 = 547094528;
	// li r3,252
	ctx.r3.s64 = 252;
	// mr r26,r28
	ctx.r26.u64 = ctx.r28.u64;
	// bl 0x82691410
	ctx.lr = 0x82A039B8;
	sub_82691410(ctx, base);
	// lis r11,-31964
	ctx.r11.s64 = -2094792704;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r30,r11,29312
	ctx.r30.s64 = ctx.r11.s64 + 29312;
	// lis r11,-32761
	ctx.r11.s64 = -2147024896;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// ori r25,r11,14
	ctx.r25.u64 = ctx.r11.u64 | 14;
	// stw r3,11240(r30)
	PPC_STORE_U32(ctx.r30.u32 + 11240, ctx.r3.u32);
	// bne cr6,0x82a039e0
	if (!ctx.cr6.eq) goto loc_82A039E0;
	// mr r26,r25
	ctx.r26.u64 = ctx.r25.u64;
	// b 0x82a03bc8
	goto loc_82A03BC8;
loc_82A039E0:
	// li r5,252
	ctx.r5.s64 = 252;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82fa7cf0
	ctx.lr = 0x82A039F0;
	sub_82FA7CF0(ctx, base);
	// lwz r11,11240(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 11240);
	// lis r7,6690
	ctx.r7.s64 = 438435840;
	// stw r28,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r28.u32);
	// addi r11,r11,60
	ctx.r11.s64 = ctx.r11.s64 + 60;
	// stw r28,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r28.u32);
	// li r29,-1
	ctx.r29.s64 = -1;
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// ori r7,r7,344
	ctx.r7.u64 = ctx.r7.u64 | 344;
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,240
	ctx.r4.s64 = 240;
	// li r3,320
	ctx.r3.s64 = 320;
	// bl 0x82af41e0
	ctx.lr = 0x82A03A38;
	sub_82AF41E0(ctx, base);
	// lis r4,-29506
	ctx.r4.s64 = -1933705216;
	// ori r4,r4,1
	ctx.r4.u64 = ctx.r4.u64 | 1;
	// bl 0x82a3df10
	ctx.lr = 0x82A03A44;
	sub_82A3DF10(ctx, base);
	// lwz r11,11240(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 11240);
	// stw r3,56(r11)
	PPC_STORE_U32(ctx.r11.u32 + 56, ctx.r3.u32);
	// lwz r31,11240(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 11240);
	// lwz r4,56(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82a03a64
	if (!ctx.cr6.eq) goto loc_82A03A64;
	// mr r26,r25
	ctx.r26.u64 = ctx.r25.u64;
	// b 0x82a03bc8
	goto loc_82A03BC8;
loc_82A03A64:
	// addi r3,r31,60
	ctx.r3.s64 = ctx.r31.s64 + 60;
	// bl 0x82af44c8
	ctx.lr = 0x82A03A6C;
	sub_82AF44C8(ctx, base);
	// lwz r11,11240(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 11240);
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// lis r7,6688
	ctx.r7.s64 = 438304768;
	// addi r11,r11,116
	ctx.r11.s64 = ctx.r11.s64 + 116;
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// stw r28,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r28.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r28,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r28.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// ori r7,r7,381
	ctx.r7.u64 = ctx.r7.u64 | 381;
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,120
	ctx.r4.s64 = 120;
	// li r3,160
	ctx.r3.s64 = 160;
	// bl 0x82af41e0
	ctx.lr = 0x82A03AB0;
	sub_82AF41E0(ctx, base);
	// lis r4,-29506
	ctx.r4.s64 = -1933705216;
	// ori r4,r4,1
	ctx.r4.u64 = ctx.r4.u64 | 1;
	// bl 0x82a3df10
	ctx.lr = 0x82A03ABC;
	sub_82A3DF10(ctx, base);
	// lwz r11,11240(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 11240);
	// stw r3,112(r11)
	PPC_STORE_U32(ctx.r11.u32 + 112, ctx.r3.u32);
	// lwz r31,11240(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 11240);
	// lwz r4,112(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82a03adc
	if (!ctx.cr6.eq) goto loc_82A03ADC;
	// mr r26,r25
	ctx.r26.u64 = ctx.r25.u64;
	// b 0x82a03bc8
	goto loc_82A03BC8;
loc_82A03ADC:
	// addi r3,r31,116
	ctx.r3.s64 = ctx.r31.s64 + 116;
	// bl 0x82af44c8
	ctx.lr = 0x82A03AE4;
	sub_82AF44C8(ctx, base);
	// lwz r11,11240(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 11240);
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// lis r6,9250
	ctx.r6.s64 = 606208000;
	// addi r11,r11,172
	ctx.r11.s64 = ctx.r11.s64 + 172;
	// stw r28,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r28.u32);
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// ori r6,r6,89
	ctx.r6.u64 = ctx.r6.u64 | 89;
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,1
	ctx.r4.s64 = 1;
	// li r3,14400
	ctx.r3.s64 = 14400;
	// bl 0x82af4258
	ctx.lr = 0x82A03B20;
	sub_82AF4258(ctx, base);
	// lis r4,-21348
	ctx.r4.s64 = -1399062528;
	// bl 0x82a3df10
	ctx.lr = 0x82A03B28;
	sub_82A3DF10(ctx, base);
	// lwz r11,11240(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 11240);
	// stw r3,168(r11)
	PPC_STORE_U32(ctx.r11.u32 + 168, ctx.r3.u32);
	// lwz r31,11240(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 11240);
	// lwz r4,168(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 168);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82a03b48
	if (!ctx.cr6.eq) goto loc_82A03B48;
	// mr r26,r25
	ctx.r26.u64 = ctx.r25.u64;
	// b 0x82a03bc8
	goto loc_82A03BC8;
loc_82A03B48:
	// addi r3,r31,172
	ctx.r3.s64 = ctx.r31.s64 + 172;
	// bl 0x82af44c8
	ctx.lr = 0x82A03B50;
	sub_82AF44C8(ctx, base);
	// lwz r11,11240(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 11240);
	// lis r7,6690
	ctx.r7.s64 = 438435840;
	// stw r28,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r28.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r28,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r28.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r28,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r28.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// ori r7,r7,88
	ctx.r7.u64 = ctx.r7.u64 | 88;
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,240
	ctx.r4.s64 = 240;
	// li r3,320
	ctx.r3.s64 = 320;
	// bl 0x82af41e0
	ctx.lr = 0x82A03B94;
	sub_82AF41E0(ctx, base);
	// lis r4,-21348
	ctx.r4.s64 = -1399062528;
	// bl 0x82a3df10
	ctx.lr = 0x82A03B9C;
	sub_82A3DF10(ctx, base);
	// lwz r11,11240(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 11240);
	// stw r3,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
	// lwz r31,11240(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 11240);
	// lwz r4,0(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82a03bbc
	if (!ctx.cr6.eq) goto loc_82A03BBC;
	// mr r26,r25
	ctx.r26.u64 = ctx.r25.u64;
	// b 0x82a03bc8
	goto loc_82A03BC8;
loc_82A03BBC:
	// addi r3,r31,4
	ctx.r3.s64 = ctx.r31.s64 + 4;
	// bl 0x82af44c8
	ctx.lr = 0x82A03BC4;
	sub_82AF44C8(ctx, base);
	// lwz r31,11240(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 11240);
loc_82A03BC8:
	// mr r27,r28
	ctx.r27.u64 = ctx.r28.u64;
loc_82A03BCC:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// lis r3,0
	ctx.r3.s64 = 0;
	// beq cr6,0x82a03be0
	if (ctx.cr6.eq) goto loc_82A03BE0;
	// ori r3,r3,49152
	ctx.r3.u64 = ctx.r3.u64 | 49152;
	// b 0x82a03be4
	goto loc_82A03BE4;
loc_82A03BE0:
	// ori r3,r3,32768
	ctx.r3.u64 = ctx.r3.u64 | 32768;
loc_82A03BE4:
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// blt cr6,0x82a03c10
	if (ctx.cr6.lt) goto loc_82A03C10;
	// addi r11,r27,59
	ctx.r11.s64 = ctx.r27.s64 + 59;
	// li r4,0
	ctx.r4.s64 = 0;
	// rlwinm r29,r11,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x8267b400
	ctx.lr = 0x82A03BFC;
	sub_8267B400(ctx, base);
	// addic r10,r3,-1
	ctx.xer.ca = ctx.r3.u32 > 0;
	ctx.r10.s64 = ctx.r3.s64 + -1;
	// stwx r3,r29,r31
	PPC_STORE_U32(ctx.r29.u32 + ctx.r31.u32, ctx.r3.u32);
	// subfe r8,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ~ctx.r9.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// lwz r31,11240(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 11240);
	// and r26,r8,r25
	ctx.r26.u64 = ctx.r8.u64 & ctx.r25.u64;
loc_82A03C10:
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// cmplwi cr6,r27,4
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 4, ctx.xer);
	// blt cr6,0x82a03bcc
	if (ctx.cr6.lt) goto loc_82A03BCC;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// blt cr6,0x82a03c48
	if (ctx.cr6.lt) goto loc_82A03C48;
	// stw r28,224(r31)
	PPC_STORE_U32(ctx.r31.u32 + 224, ctx.r28.u32);
	// li r10,19200
	ctx.r10.s64 = 19200;
	// lwz r11,11240(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 11240);
	// lis r9,0
	ctx.r9.s64 = 0;
	// stw r10,228(r11)
	PPC_STORE_U32(ctx.r11.u32 + 228, ctx.r10.u32);
	// lwz r11,11240(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 11240);
	// ori r8,r9,38400
	ctx.r8.u64 = ctx.r9.u64 | 38400;
	// stw r8,232(r11)
	PPC_STORE_U32(ctx.r11.u32 + 232, ctx.r8.u32);
loc_82A03C48:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82fa76bc
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A03C50"))) PPC_WEAK_FUNC(sub_82A03C50);
PPC_FUNC_IMPL(__imp__sub_82A03C50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x82A03C58;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31964
	ctx.r11.s64 = -2094792704;
	// addi r31,r11,29312
	ctx.r31.s64 = ctx.r11.s64 + 29312;
	// lwz r11,11240(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11240);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a03d3c
	if (ctx.cr6.eq) goto loc_82A03D3C;
	// lwz r3,56(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a03c98
	if (ctx.cr6.eq) goto loc_82A03C98;
	// lis r4,-29506
	ctx.r4.s64 = -1933705216;
	// ori r4,r4,1
	ctx.r4.u64 = ctx.r4.u64 | 1;
	// bl 0x82691460
	ctx.lr = 0x82A03C8C;
	sub_82691460(ctx, base);
	// lwz r11,11240(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11240);
	// stw r29,56(r11)
	PPC_STORE_U32(ctx.r11.u32 + 56, ctx.r29.u32);
	// lwz r11,11240(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11240);
loc_82A03C98:
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a03cb8
	if (ctx.cr6.eq) goto loc_82A03CB8;
	// lis r4,-21348
	ctx.r4.s64 = -1399062528;
	// bl 0x82691460
	ctx.lr = 0x82A03CAC;
	sub_82691460(ctx, base);
	// lwz r11,11240(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11240);
	// stw r29,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r29.u32);
	// lwz r11,11240(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11240);
loc_82A03CB8:
	// lwz r3,112(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 112);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a03cdc
	if (ctx.cr6.eq) goto loc_82A03CDC;
	// lis r4,-29506
	ctx.r4.s64 = -1933705216;
	// ori r4,r4,1
	ctx.r4.u64 = ctx.r4.u64 | 1;
	// bl 0x82691460
	ctx.lr = 0x82A03CD0;
	sub_82691460(ctx, base);
	// lwz r11,11240(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11240);
	// stw r29,112(r11)
	PPC_STORE_U32(ctx.r11.u32 + 112, ctx.r29.u32);
	// lwz r11,11240(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11240);
loc_82A03CDC:
	// lwz r3,168(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 168);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a03cfc
	if (ctx.cr6.eq) goto loc_82A03CFC;
	// lis r4,-21348
	ctx.r4.s64 = -1399062528;
	// bl 0x82691460
	ctx.lr = 0x82A03CF0;
	sub_82691460(ctx, base);
	// lwz r11,11240(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11240);
	// stw r29,168(r11)
	PPC_STORE_U32(ctx.r11.u32 + 168, ctx.r29.u32);
	// lwz r11,11240(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11240);
loc_82A03CFC:
	// li r30,236
	ctx.r30.s64 = 236;
loc_82A03D00:
	// lwzx r10,r30,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82a03d20
	if (ctx.cr6.eq) goto loc_82A03D20;
	// rotlwi r3,r10,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// bl 0x8266eed8
	ctx.lr = 0x82A03D14;
	sub_8266EED8(ctx, base);
	// lwz r11,11240(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11240);
	// stwx r29,r30,r11
	PPC_STORE_U32(ctx.r30.u32 + ctx.r11.u32, ctx.r29.u32);
	// lwz r11,11240(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11240);
loc_82A03D20:
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// cmplwi cr6,r30,252
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 252, ctx.xer);
	// blt cr6,0x82a03d00
	if (ctx.cr6.lt) goto loc_82A03D00;
	// lis r4,8348
	ctx.r4.s64 = 547094528;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82691460
	ctx.lr = 0x82A03D38;
	sub_82691460(ctx, base);
	// stw r29,11240(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11240, ctx.r29.u32);
loc_82A03D3C:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A03D44"))) PPC_WEAK_FUNC(sub_82A03D44);
PPC_FUNC_IMPL(__imp__sub_82A03D44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A03D48"))) PPC_WEAK_FUNC(sub_82A03D48);
PPC_FUNC_IMPL(__imp__sub_82A03D48) {
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
	// lis r4,8348
	ctx.r4.s64 = 547094528;
	// li r3,56
	ctx.r3.s64 = 56;
	// li r30,0
	ctx.r30.s64 = 0;
	// bl 0x82691410
	ctx.lr = 0x82A03D6C;
	sub_82691410(ctx, base);
	// lis r11,-31964
	ctx.r11.s64 = -2094792704;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r31,r11,29312
	ctx.r31.s64 = ctx.r11.s64 + 29312;
	// stw r3,12080(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12080, ctx.r3.u32);
	// beq cr6,0x82a03df4
	if (ctx.cr6.eq) goto loc_82A03DF4;
	// li r5,56
	ctx.r5.s64 = 56;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82fa7cf0
	ctx.lr = 0x82A03D8C;
	sub_82FA7CF0(ctx, base);
	// lwz r11,12080(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12080);
	// li r8,-1
	ctx.r8.s64 = -1;
	// stw r30,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r30.u32);
	// lis r7,6690
	ctx.r7.s64 = 438435840;
	// stw r30,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r30.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// ori r7,r7,88
	ctx.r7.u64 = ctx.r7.u64 | 88;
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,240
	ctx.r4.s64 = 240;
	// li r3,320
	ctx.r3.s64 = 320;
	// bl 0x82af41e0
	ctx.lr = 0x82A03DD4;
	sub_82AF41E0(ctx, base);
	// lis r4,-21348
	ctx.r4.s64 = -1399062528;
	// bl 0x82a3df10
	ctx.lr = 0x82A03DDC;
	sub_82A3DF10(ctx, base);
	// lwz r11,12080(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12080);
	// stw r3,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r3.u32);
	// lwz r11,12080(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12080);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82a03e00
	if (!ctx.cr6.eq) goto loc_82A03E00;
loc_82A03DF4:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x82a03e0c
	goto loc_82A03E0C;
loc_82A03E00:
	// addi r3,r11,4
	ctx.r3.s64 = ctx.r11.s64 + 4;
	// bl 0x82af44c8
	ctx.lr = 0x82A03E08;
	sub_82AF44C8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_82A03E0C:
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

__attribute__((alias("__imp__sub_82A03E24"))) PPC_WEAK_FUNC(sub_82A03E24);
PPC_FUNC_IMPL(__imp__sub_82A03E24) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A03E28"))) PPC_WEAK_FUNC(sub_82A03E28);
PPC_FUNC_IMPL(__imp__sub_82A03E28) {
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
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x83178d24
	ctx.lr = 0x82A03E48;
	__imp__XamXStudioRequest(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82a03e78
	if (ctx.cr6.lt) goto loc_82A03E78;
	// lis r11,-32096
	ctx.r11.s64 = -2103443456;
	// lis r8,-31975
	ctx.r8.s64 = -2095513600;
	// addi r7,r11,5208
	ctx.r7.s64 = ctx.r11.s64 + 5208;
	// addi r6,r8,-12524
	ctx.r6.s64 = ctx.r8.s64 + -12524;
loc_82A03E60:
	// mfmsr r9
	ctx.r9.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r6
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r6.u32);
	ctx.r10.u64 = __builtin_bswap32(ctx.reserved.u32);
	// stwcx. r7,0,r6
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r6.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r7.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x82a03e60
	if (!ctx.cr0.eq) goto loc_82A03E60;
loc_82A03E78:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A03E88"))) PPC_WEAK_FUNC(sub_82A03E88);
PPC_FUNC_IMPL(__imp__sub_82A03E88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7674
	ctx.lr = 0x82A03E90;
	__savegprlr_27(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,770
	ctx.r3.s64 = 770;
	// bl 0x83178d24
	ctx.lr = 0x82A03EA0;
	__imp__XamXStudioRequest(ctx, base);
	// bl 0x82a775e8
	ctx.lr = 0x82A03EA4;
	sub_82A775E8(ctx, base);
	// bl 0x82a0ab28
	ctx.lr = 0x82A03EA8;
	sub_82A0AB28(ctx, base);
	// bl 0x82a0a900
	ctx.lr = 0x82A03EAC;
	sub_82A0A900(ctx, base);
	// lis r11,-31964
	ctx.r11.s64 = -2094792704;
	// li r27,0
	ctx.r27.s64 = 0;
	// addi r31,r11,29312
	ctx.r31.s64 = ctx.r11.s64 + 29312;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82a03ed0
	if (ctx.cr6.eq) goto loc_82A03ED0;
	// bl 0x82a13998
	ctx.lr = 0x82A03EC8;
	sub_82A13998(ctx, base);
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// stw r27,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r27.u32);
loc_82A03ED0:
	// lwz r11,10912(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10912);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82a03ee8
	if (ctx.cr6.eq) goto loc_82A03EE8;
	// bl 0x82a137f8
	ctx.lr = 0x82A03EE0;
	sub_82A137F8(ctx, base);
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// stw r27,10912(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10912, ctx.r27.u32);
loc_82A03EE8:
	// lwz r11,28(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a03fb4
	if (ctx.cr6.eq) goto loc_82A03FB4;
	// lis r11,-31975
	ctx.r11.s64 = -2095513600;
	// addi r30,r11,-12452
	ctx.r30.s64 = ctx.r11.s64 + -12452;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831791a4
	ctx.lr = 0x82A03F04;
	__imp__RtlEnterCriticalSection(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
	// sync 
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// bl 0x83179644
	ctx.lr = 0x82A03F1C;
	__imp__NtSetEvent(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r31,72
	ctx.r3.s64 = ctx.r31.s64 + 72;
	// bl 0x831792b4
	ctx.lr = 0x82A03F2C;
	__imp__KeSetEvent(ctx, base);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r31,88
	ctx.r3.s64 = ctx.r31.s64 + 88;
	// bl 0x831792b4
	ctx.lr = 0x82A03F3C;
	__imp__KeSetEvent(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831791b4
	ctx.lr = 0x82A03F44;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r10,r11,0,4,4
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8000000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82a03f68
	if (ctx.cr6.eq) goto loc_82A03F68;
	// lis r11,-90
	ctx.r11.s64 = -5898240;
	// ori r10,r11,38865
	ctx.r10.u64 = ctx.r11.u64 | 38865;
	// rldicr r9,r10,10,53
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u64, 10) & 0xFFFFFFFFFFFFFC00;
	// std r9,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r9.u64);
	// b 0x82a03f74
	goto loc_82A03F74;
loc_82A03F68:
	// lis r11,-153
	ctx.r11.s64 = -10027008;
	// ori r10,r11,27008
	ctx.r10.u64 = ctx.r11.u64 | 27008;
	// std r10,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r10.u64);
loc_82A03F74:
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,3
	ctx.r4.s64 = 3;
	// bl 0x83179414
	ctx.lr = 0x82A03F8C;
	__imp__KeWaitForSingleObject(ctx, base);
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// bl 0x83179424
	ctx.lr = 0x82A03F94;
	__imp__ObDereferenceObject(ctx, base);
	// stw r27,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r27.u32);
	// stw r27,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r27.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// bl 0x831791a4
	ctx.lr = 0x82A03FAC;
	__imp__RtlEnterCriticalSection(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831791b4
	ctx.lr = 0x82A03FB4;
	__imp__RtlLeaveCriticalSection(ctx, base);
loc_82A03FB4:
	// bl 0x82a10b18
	ctx.lr = 0x82A03FB8;
	sub_82A10B18(ctx, base);
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a03fcc
	if (ctx.cr6.eq) goto loc_82A03FCC;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// stw r27,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r27.u32);
loc_82A03FCC:
	// bl 0x82a03710
	ctx.lr = 0x82A03FD0;
	sub_82A03710(ctx, base);
	// bl 0x82a03428
	ctx.lr = 0x82A03FD4;
	sub_82A03428(ctx, base);
	// bl 0x82a01e20
	ctx.lr = 0x82A03FD8;
	sub_82A01E20(ctx, base);
	// lwz r3,11072(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11072);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a03ff4
	if (ctx.cr6.eq) goto loc_82A03FF4;
	// lis r4,-21348
	ctx.r4.s64 = -1399062528;
	// bl 0x82691460
	ctx.lr = 0x82A03FEC;
	sub_82691460(ctx, base);
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// stw r27,11072(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11072, ctx.r27.u32);
loc_82A03FF4:
	// lwz r3,11128(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11128);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a04010
	if (ctx.cr6.eq) goto loc_82A04010;
	// lis r4,-21348
	ctx.r4.s64 = -1399062528;
	// bl 0x82691460
	ctx.lr = 0x82A04008;
	sub_82691460(ctx, base);
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// stw r27,11128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11128, ctx.r27.u32);
loc_82A04010:
	// lwz r3,11184(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11184);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a0402c
	if (ctx.cr6.eq) goto loc_82A0402C;
	// lis r4,-21348
	ctx.r4.s64 = -1399062528;
	// bl 0x82691460
	ctx.lr = 0x82A04024;
	sub_82691460(ctx, base);
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// stw r27,11184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11184, ctx.r27.u32);
loc_82A0402C:
	// li r29,6
	ctx.r29.s64 = 6;
	// addi r30,r31,10600
	ctx.r30.s64 = ctx.r31.s64 + 10600;
loc_82A04034:
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a04050
	if (ctx.cr6.eq) goto loc_82A04050;
	// bl 0x82a093b8
	ctx.lr = 0x82A04044;
	sub_82A093B8(ctx, base);
	// lwz r3,0(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x83179424
	ctx.lr = 0x82A0404C;
	__imp__ObDereferenceObject(ctx, base);
	// stw r27,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r27.u32);
loc_82A04050:
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// bne 0x82a04034
	if (!ctx.cr0.eq) goto loc_82A04034;
	// lwz r3,10624(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10624);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a04074
	if (ctx.cr6.eq) goto loc_82A04074;
	// bl 0x83179424
	ctx.lr = 0x82A0406C;
	__imp__ObDereferenceObject(ctx, base);
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// stw r27,10624(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10624, ctx.r27.u32);
loc_82A04074:
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// bl 0x83179634
	ctx.lr = 0x82A0407C;
	__imp__NtClose(ctx, base);
	// addi r10,r1,104
	ctx.r10.s64 = ctx.r1.s64 + 104;
	// std r27,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r27.u64);
	// stw r27,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r27.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// std r27,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r27.u64);
	// bl 0x83178d74
	ctx.lr = 0x82A04098;
	__imp__XamGetActiveDashAppInfo(ctx, base);
	// ld r11,10544(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 10544);
	// lis r9,-31963
	ctx.r9.s64 = -2094727168;
	// rlwinm r8,r11,0,27,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	// cmpldi cr6,r8,0
	ctx.cr6.compare<uint64_t>(ctx.r8.u64, 0, ctx.xer);
	// lwz r30,23632(r9)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r9.u32 + 23632);
	// lwz r29,104(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// ld r28,96(r1)
	ctx.r28.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
	// beq cr6,0x82a040e8
	if (ctx.cr6.eq) goto loc_82A040E8;
	// bl 0x83178d64
	ctx.lr = 0x82A040BC;
	__imp__XamGetCurrentTitleId(ctx, base);
	// lis r8,8274
	ctx.r8.s64 = 542244864;
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// mr r9,r28
	ctx.r9.u64 = ctx.r28.u64;
	// ori r8,r8,21504
	ctx.r8.u64 = ctx.r8.u64 | 21504;
	// li r6,24
	ctx.r6.s64 = 24;
	// li r5,16
	ctx.r5.s64 = 16;
	// li r4,4
	ctx.r4.s64 = 4;
	// addi r3,r31,10536
	ctx.r3.s64 = ctx.r31.s64 + 10536;
	// bl 0x83179614
	ctx.lr = 0x82A040E8;
	__imp__EtxProducerLog(ctx, base);
loc_82A040E8:
	// addi r3,r31,10536
	ctx.r3.s64 = ctx.r31.s64 + 10536;
	// bl 0x83179624
	ctx.lr = 0x82A040F0;
	__imp__EtxProducerUnregister(ctx, base);
	// bl 0x82a0adf8
	ctx.lr = 0x82A040F4;
	sub_82A0ADF8(ctx, base);
	// lis r10,-31964
	ctx.r10.s64 = -2094792704;
	// lis r5,0
	ctx.r5.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r5,r5,59856
	ctx.r5.u64 = ctx.r5.u64 | 59856;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// stw r27,29308(r10)
	PPC_STORE_U32(ctx.r10.u32 + 29308, ctx.r27.u32);
	// bl 0x82fa7cf0
	ctx.lr = 0x82A04114;
	sub_82FA7CF0(ctx, base);
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82fa76c4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A0411C"))) PPC_WEAK_FUNC(sub_82A0411C);
PPC_FUNC_IMPL(__imp__sub_82A0411C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A04120"))) PPC_WEAK_FUNC(sub_82A04120);
PPC_FUNC_IMPL(__imp__sub_82A04120) {
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
	// add r10,r4,r5
	ctx.r10.u64 = ctx.r4.u64 + ctx.r5.u64;
	// stw r4,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r4.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r10,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// li r7,4096
	ctx.r7.s64 = 4096;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82662c60
	ctx.lr = 0x82A04160;
	sub_82662C60(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82662d30
	ctx.lr = 0x82A0416C;
	sub_82662D30(ctx, base);
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

__attribute__((alias("__imp__sub_82A04180"))) PPC_WEAK_FUNC(sub_82A04180);
PPC_FUNC_IMPL(__imp__sub_82A04180) {
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
	// li r7,16
	ctx.r7.s64 = 16;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82662c60
	ctx.lr = 0x82A041A8;
	sub_82662C60(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82662d30
	ctx.lr = 0x82A041B4;
	sub_82662D30(ctx, base);
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

__attribute__((alias("__imp__sub_82A041C8"))) PPC_WEAK_FUNC(sub_82A041C8);
PPC_FUNC_IMPL(__imp__sub_82A041C8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x82A041D0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31964
	ctx.r11.s64 = -2094792704;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r30,r11,29312
	ctx.r30.s64 = ctx.r11.s64 + 29312;
	// addi r3,r30,12272
	ctx.r3.s64 = ctx.r30.s64 + 12272;
	// bl 0x83179274
	ctx.lr = 0x82A041E8;
	__imp__KfAcquireSpinLock(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// li r31,1
	ctx.r31.s64 = 1;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq cr6,0x82a041fc
	if (ctx.cr6.eq) goto loc_82A041FC;
	// stw r31,12280(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12280, ctx.r31.u32);
loc_82A041FC:
	// li r11,2
	ctx.r11.s64 = 2;
	// addi r10,r30,12264
	ctx.r10.s64 = ctx.r30.s64 + 12264;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_82A04208:
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a04224
	if (ctx.cr6.eq) goto loc_82A04224;
	// lwz r9,52(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82a04224
	if (!ctx.cr6.eq) goto loc_82A04224;
	// stw r31,52(r11)
	PPC_STORE_U32(ctx.r11.u32 + 52, ctx.r31.u32);
loc_82A04224:
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x82a04208
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82A04208;
	// sync 
	// lwz r11,12264(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12264);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82a0424c
	if (!ctx.cr6.eq) goto loc_82A0424C;
	// lwz r11,12268(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12268);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82a0424c
	if (!ctx.cr6.eq) goto loc_82A0424C;
	// li r31,0
	ctx.r31.s64 = 0;
loc_82A0424C:
	// addi r3,r30,12272
	ctx.r3.s64 = ctx.r30.s64 + 12272;
	// bl 0x83179294
	ctx.lr = 0x82A04254;
	__imp__KfReleaseSpinLock(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A04260"))) PPC_WEAK_FUNC(sub_82A04260);
PPC_FUNC_IMPL(__imp__sub_82A04260) {
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
	// lis r11,-31964
	ctx.r11.s64 = -2094792704;
	// addi r31,r11,29312
	ctx.r31.s64 = ctx.r11.s64 + 29312;
	// addi r10,r31,12264
	ctx.r10.s64 = ctx.r31.s64 + 12264;
	// lwz r11,12292(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12292);
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r8,r9,r10
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// bne cr6,0x82a0437c
	if (!ctx.cr6.eq) goto loc_82A0437C;
	// bl 0x82a01c38
	ctx.lr = 0x82A04298;
	sub_82A01C38(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a0437c
	if (ctx.cr6.eq) goto loc_82A0437C;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82a018d8
	ctx.lr = 0x82A042AC;
	sub_82A018D8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82a0436c
	if (ctx.cr6.eq) goto loc_82A0436C;
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addis r10,r31,1
	ctx.r10.s64 = ctx.r31.s64 + 65536;
	// addi r8,r11,40
	ctx.r8.s64 = ctx.r11.s64 + 40;
	// addi r10,r10,-5724
	ctx.r10.s64 = ctx.r10.s64 + -5724;
loc_82A042C4:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// subf. r9,r7,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r7.s64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82a042e4
	if (!ctx.cr0.eq) goto loc_82A042E4;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpw cr6,r11,r8
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r8.s32, ctx.xer);
	// bne cr6,0x82a042c4
	if (!ctx.cr6.eq) goto loc_82A042C4;
loc_82A042E4:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82a04318
	if (ctx.cr6.eq) goto loc_82A04318;
	// li r9,10
	ctx.r9.s64 = 10;
	// addi r11,r1,76
	ctx.r11.s64 = ctx.r1.s64 + 76;
	// addis r10,r31,1
	ctx.r10.s64 = ctx.r31.s64 + 65536;
	// addi r10,r10,-5728
	ctx.r10.s64 = ctx.r10.s64 + -5728;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82A04300:
	// lwzu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// stwu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r10.u32 = ea;
	// bdnz 0x82a04300
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82A04300;
	// bl 0x82a014b8
	ctx.lr = 0x82A04310;
	sub_82A014B8(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82a041c8
	ctx.lr = 0x82A04318;
	sub_82A041C8(ctx, base);
loc_82A04318:
	// addi r3,r31,12272
	ctx.r3.s64 = ctx.r31.s64 + 12272;
	// bl 0x83179274
	ctx.lr = 0x82A04320;
	__imp__KfAcquireSpinLock(ctx, base);
	// lwz r11,12284(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12284);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82a04364
	if (ctx.cr6.eq) goto loc_82A04364;
	// lwz r11,12280(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12280);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82a04364
	if (!ctx.cr6.eq) goto loc_82A04364;
	// lwz r11,12292(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12292);
	// addi r10,r31,12264
	ctx.r10.s64 = ctx.r31.s64 + 12264;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r30,r9,r10
	PPC_STORE_U32(ctx.r9.u32 + ctx.r10.u32, ctx.r30.u32);
	// lwz r11,12292(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12292);
	// addi r8,r11,-1
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// clrlwi r11,r8,31
	ctx.r11.u64 = ctx.r8.u32 & 0x1;
	// stw r11,12292(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12292, ctx.r11.u32);
	// sync 
	// li r30,0
	ctx.r30.s64 = 0;
loc_82A04364:
	// addi r3,r31,12272
	ctx.r3.s64 = ctx.r31.s64 + 12272;
	// bl 0x83179294
	ctx.lr = 0x82A0436C;
	__imp__KfReleaseSpinLock(ctx, base);
loc_82A0436C:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82a0437c
	if (ctx.cr6.eq) goto loc_82A0437C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a01ce0
	ctx.lr = 0x82A0437C;
	sub_82A01CE0(ctx, base);
loc_82A0437C:
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

__attribute__((alias("__imp__sub_82A04394"))) PPC_WEAK_FUNC(sub_82A04394);
PPC_FUNC_IMPL(__imp__sub_82A04394) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A04398"))) PPC_WEAK_FUNC(sub_82A04398);
PPC_FUNC_IMPL(__imp__sub_82A04398) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31964
	ctx.r11.s64 = -2094792704;
	// addi r11,r11,29312
	ctx.r11.s64 = ctx.r11.s64 + 29312;
	// lwz r10,2164(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2164);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82a043bc
	if (!ctx.cr6.eq) goto loc_82A043BC;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r10,r10,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x80000000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
loc_82A043BC:
	// lis r10,0
	ctx.r10.s64 = 0;
	// ori r9,r10,59552
	ctx.r9.u64 = ctx.r10.u64 | 59552;
	// lis r10,0
	ctx.r10.s64 = 0;
	// lwzx r9,r11,r9
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r9.u32);
	// rlwinm r8,r9,0,0,0
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x80000000;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82a043f0
	if (ctx.cr6.eq) goto loc_82A043F0;
	// lis r9,0
	ctx.r9.s64 = 0;
	// ori r8,r10,59548
	ctx.r8.u64 = ctx.r10.u64 | 59548;
	// ori r7,r9,59552
	ctx.r7.u64 = ctx.r9.u64 | 59552;
	// li r9,0
	ctx.r9.s64 = 0;
	// stwx r9,r11,r7
	PPC_STORE_U32(ctx.r11.u32 + ctx.r7.u32, ctx.r9.u32);
	// b 0x82a0442c
	goto loc_82A0442C;
loc_82A043F0:
	// ori r7,r10,59548
	ctx.r7.u64 = ctx.r10.u64 | 59548;
	// lis r8,0
	ctx.r8.s64 = 0;
	// ori r6,r8,59548
	ctx.r6.u64 = ctx.r8.u64 | 59548;
	// lwzx r10,r11,r7
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r7.u32);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r5,r10,0,0,0
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x80000000;
	// stwx r10,r11,r6
	PPC_STORE_U32(ctx.r11.u32 + ctx.r6.u32, ctx.r10.u32);
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82a04424
	if (ctx.cr6.eq) goto loc_82A04424;
	// lis r9,0
	ctx.r9.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// ori r8,r9,59548
	ctx.r8.u64 = ctx.r9.u64 | 59548;
	// stwx r10,r11,r8
	PPC_STORE_U32(ctx.r11.u32 + ctx.r8.u32, ctx.r10.u32);
loc_82A04424:
	// lis r9,0
	ctx.r9.s64 = 0;
	// ori r8,r9,59552
	ctx.r8.u64 = ctx.r9.u64 | 59552;
loc_82A0442C:
	// li r10,0
	ctx.r10.s64 = 0;
	// stwx r10,r11,r8
	PPC_STORE_U32(ctx.r11.u32 + ctx.r8.u32, ctx.r10.u32);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// b 0x82a3dc40
	sub_82A3DC40(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A04444"))) PPC_WEAK_FUNC(sub_82A04444);
PPC_FUNC_IMPL(__imp__sub_82A04444) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A04448"))) PPC_WEAK_FUNC(sub_82A04448);
PPC_FUNC_IMPL(__imp__sub_82A04448) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x82A04450;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31964
	ctx.r11.s64 = -2094792704;
	// lis r10,0
	ctx.r10.s64 = 0;
	// addi r31,r11,29312
	ctx.r31.s64 = ctx.r11.s64 + 29312;
	// ori r9,r10,59552
	ctx.r9.u64 = ctx.r10.u64 | 59552;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// lwz r8,10528(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10528);
	// lwzx r11,r31,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// rlwinm r28,r11,0,0,0
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	// beq cr6,0x82a044cc
	if (ctx.cr6.eq) goto loc_82A044CC;
	// lwz r11,2188(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2188);
	// rlwinm r11,r11,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a044a4
	if (ctx.cr6.eq) goto loc_82A044A4;
	// bl 0x82a3df00
	ctx.lr = 0x82A04494;
	sub_82A3DF00(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82a044bc
	if (!ctx.cr6.eq) goto loc_82A044BC;
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82a044b4
	goto loc_82A044B4;
loc_82A044A4:
	// bl 0x82a3df00
	ctx.lr = 0x82A044A8;
	sub_82A3DF00(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82a044bc
	if (ctx.cr6.eq) goto loc_82A044BC;
	// li r3,0
	ctx.r3.s64 = 0;
loc_82A044B4:
	// bl 0x82a3def0
	ctx.lr = 0x82A044B8;
	sub_82A3DEF0(ctx, base);
	// li r30,1
	ctx.r30.s64 = 1;
loc_82A044BC:
	// bl 0x82a3df00
	ctx.lr = 0x82A044C0;
	sub_82A3DF00(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r3,11244(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11244, ctx.r3.u32);
	// stw r11,10528(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10528, ctx.r11.u32);
loc_82A044CC:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// rlwinm r10,r11,0,26,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	// cmplwi cr6,r10,32
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 32, ctx.xer);
	// beq cr6,0x82a044f8
	if (ctx.cr6.eq) goto loc_82A044F8;
	// bl 0x829ff3a0
	ctx.lr = 0x82A044E0;
	sub_829FF3A0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82a044f8
	if (!ctx.cr6.eq) goto loc_82A044F8;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// bne cr6,0x82a044f8
	if (!ctx.cr6.eq) goto loc_82A044F8;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x82a044fc
	if (ctx.cr6.eq) goto loc_82A044FC;
loc_82A044F8:
	// bl 0x82a04398
	ctx.lr = 0x82A044FC;
	sub_82A04398(ctx, base);
loc_82A044FC:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// rlwinm r10,r11,0,26,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	// cmplwi cr6,r10,32
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 32, ctx.xer);
	// beq cr6,0x82a04518
	if (ctx.cr6.eq) goto loc_82A04518;
	// bl 0x829ff3a0
	ctx.lr = 0x82A04510;
	sub_829FF3A0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82a0451c
	if (ctx.cr6.eq) goto loc_82A0451C;
loc_82A04518:
	// bl 0x82a137a0
	ctx.lr = 0x82A0451C;
	sub_82A137A0(ctx, base);
loc_82A0451C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A04524"))) PPC_WEAK_FUNC(sub_82A04524);
PPC_FUNC_IMPL(__imp__sub_82A04524) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A04528"))) PPC_WEAK_FUNC(sub_82A04528);
PPC_FUNC_IMPL(__imp__sub_82A04528) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// li r10,6
	ctx.r10.s64 = 6;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r7,-48(r1)
	PPC_STORE_U32(ctx.r1.u32 + -48, ctx.r7.u32);
	// lfs f12,23856(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 23856);
	ctx.f12.f64 = double(temp.f32);
	// lis r9,-32255
	ctx.r9.s64 = -2113863680;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// lis r10,-32256
	ctx.r10.s64 = -2113929216;
	// stw r7,-44(r1)
	PPC_STORE_U32(ctx.r1.u32 + -44, ctx.r7.u32);
	// fmr f11,f12
	ctx.f11.f64 = ctx.f12.f64;
	// lfs f10,21420(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 21420);
	ctx.f10.f64 = double(temp.f32);
	// lfs f9,5184(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 5184);
	ctx.f9.f64 = double(temp.f32);
loc_82A0455C:
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x82a045ec
	if (ctx.cr6.eq) goto loc_82A045EC;
	// addi r9,r11,16
	ctx.r9.s64 = ctx.r11.s64 + 16;
	// vspltisw128 v62,0
	_mm_store_si128((__m128i*)ctx.v62.u32, _mm_set1_epi32(int(0x0)));
	// addi r6,r1,-32
	ctx.r6.s64 = ctx.r1.s64 + -32;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r5,r1,-32
	ctx.r5.s64 = ctx.r1.s64 + -32;
	// addi r3,r1,-16
	ctx.r3.s64 = ctx.r1.s64 + -16;
	// cmpwi cr6,r8,2
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 2, ctx.xer);
	// lvx128 v61,r0,r9
	simd::store_shuffled(ctx.v61, simd::load_and_shuffle(base + ((ctx.r9.u32) & ~0xF), VectorMaskL));
	// stvx128 v61,r0,r6
	_mm_store_si128((__m128i*)(base + ((ctx.r6.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v61.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stfs f9,-28(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r1.u32 + -28, temp.u32);
	// lvx128 v63,r0,r5
	simd::store_shuffled(ctx.v63, simd::load_and_shuffle(base + ((ctx.r5.u32) & ~0xF), VectorMaskL));
	// vmsum3fp128 v60,v63,v63
	ctx.fpscr.enableFlushModeUnconditional();
	_mm_store_ps(ctx.v60.f32, _mm_dp_ps(_mm_load_ps(ctx.v63.f32), _mm_load_ps(ctx.v63.f32), 0xEF));
	// vrsqrtefp128 v59,v60
	_mm_store_ps(ctx.v59.f32, _mm_div_ps(_mm_set1_ps(1), _mm_sqrt_ps(_mm_load_ps(ctx.v60.f32))));
	// vor128 v13,v60,v60
	_mm_store_si128((__m128i*)ctx.v13.u8, _mm_load_si128((__m128i*)ctx.v60.u8));
	// vcmpeqfp128 v12,v60,v62
	_mm_store_ps(ctx.v12.f32, _mm_cmpeq_ps(_mm_load_ps(ctx.v60.f32), _mm_load_ps(ctx.v62.f32)));
	// vmulfp128 v0,v60,v59
	_mm_store_ps(ctx.v0.f32, _mm_mul_ps(_mm_load_ps(ctx.v60.f32), _mm_load_ps(ctx.v59.f32)));
	// vsel v12,v0,v13,v12
	_mm_store_si128((__m128i*)ctx.v12.u8, _mm_or_si128(_mm_andnot_si128(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)ctx.v0.u8)), _mm_and_si128(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)ctx.v13.u8))));
	// stvx128 v12,r0,r3
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v12.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lfs f0,-16(r1)
	ctx.fpscr.disableFlushModeUnconditional();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + -16);
	ctx.f0.f64 = double(temp.f32);
	// bne cr6,0x82a045bc
	if (!ctx.cr6.eq) goto loc_82A045BC;
	// fsubs f0,f0,f10
	ctx.f0.f64 = double(float(ctx.f0.f64 - ctx.f10.f64));
loc_82A045BC:
	// fcmpu cr6,f0,f12
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f12.f64);
	// bge cr6,0x82a045dc
	if (!ctx.cr6.lt) goto loc_82A045DC;
	// fmr f13,f12
	ctx.f13.f64 = ctx.f12.f64;
	// mr r9,r7
	ctx.r9.u64 = ctx.r7.u64;
	// mr r7,r10
	ctx.r7.u64 = ctx.r10.u64;
	// fmr f12,f0
	ctx.f12.f64 = ctx.f0.f64;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// fmr f0,f13
	ctx.f0.f64 = ctx.f13.f64;
loc_82A045DC:
	// fcmpu cr6,f0,f11
	ctx.fpscr.disableFlushMode();
	ctx.cr6.compare(ctx.f0.f64, ctx.f11.f64);
	// bge cr6,0x82a045ec
	if (!ctx.cr6.lt) goto loc_82A045EC;
	// stw r10,-44(r1)
	PPC_STORE_U32(ctx.r1.u32 + -44, ctx.r10.u32);
	// fmr f11,f0
	ctx.f11.f64 = ctx.f0.f64;
loc_82A045EC:
	// addi r11,r11,448
	ctx.r11.s64 = ctx.r11.s64 + 448;
	// bdnz 0x82a0455c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82A0455C;
	// addi r11,r1,-48
	ctx.r11.s64 = ctx.r1.s64 + -48;
	// stw r7,-48(r1)
	PPC_STORE_U32(ctx.r1.u32 + -48, ctx.r7.u32);
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// stw r10,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r10.u32);
	// stw r9,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A04610"))) PPC_WEAK_FUNC(sub_82A04610);
PPC_FUNC_IMPL(__imp__sub_82A04610) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa766c
	ctx.lr = 0x82A04618;
	__savegprlr_25(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,15636(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 15636);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// li r26,0
	ctx.r26.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a0463c
	if (ctx.cr6.eq) goto loc_82A0463C;
	// lwz r27,120(r11)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r11.u32 + 120);
	// b 0x82a04640
	goto loc_82A04640;
loc_82A0463C:
	// mr r27,r26
	ctx.r27.u64 = ctx.r26.u64;
loc_82A04640:
	// lis r11,-31975
	ctx.r11.s64 = -2095513600;
	// addi r28,r11,-12580
	ctx.r28.s64 = ctx.r11.s64 + -12580;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x831791a4
	ctx.lr = 0x82A04650;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lis r11,-31964
	ctx.r11.s64 = -2094792704;
	// li r25,1
	ctx.r25.s64 = 1;
	// addi r31,r11,29312
	ctx.r31.s64 = ctx.r11.s64 + 29312;
	// lwz r11,10652(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10652);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a0469c
	if (ctx.cr6.eq) goto loc_82A0469C;
	// cmpwi cr6,r27,1
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 1, ctx.xer);
	// bne cr6,0x82a0469c
	if (!ctx.cr6.eq) goto loc_82A0469C;
	// lwz r11,15636(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 15636);
	// li r5,12
	ctx.r5.s64 = 12;
	// addi r4,r31,1856
	ctx.r4.s64 = ctx.r31.s64 + 1856;
	// addi r3,r11,108
	ctx.r3.s64 = ctx.r11.s64 + 108;
	// bl 0x83179654
	ctx.lr = 0x82A04684;
	__imp__RtlCompareMemory(ctx, base);
	// cmplwi cr6,r3,12
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 12, ctx.xer);
	// bne cr6,0x82a0469c
	if (!ctx.cr6.eq) goto loc_82A0469C;
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
	// stw r25,10660(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10660, ctx.r25.u32);
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
	// stw r26,10656(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10656, ctx.r26.u32);
loc_82A0469C:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x831791b4
	ctx.lr = 0x82A046A4;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mftb r11
	ctx.r11.u64 = __rdtsc();
	// stw r11,64(r30)
	PPC_STORE_U32(ctx.r30.u32 + 64, ctx.r11.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82a046e4
	if (ctx.cr6.eq) goto loc_82A046E4;
	// lwz r11,11240(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11240);
	// li r7,16
	ctx.r7.s64 = 16;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r28,r11,4
	ctx.r28.s64 = ctx.r11.s64 + 4;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82662c60
	ctx.lr = 0x82A046D8;
	sub_82662C60(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82662d30
	ctx.lr = 0x82A046E4;
	sub_82662D30(ctx, base);
loc_82A046E4:
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// lis r10,2
	ctx.r10.s64 = 131072;
	// ori r27,r10,53248
	ctx.r27.u64 = ctx.r10.u64 | 53248;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a04790
	if (ctx.cr6.eq) goto loc_82A04790;
	// lwz r10,15632(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 15632);
	// ld r9,80(r10)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r10.u32 + 80);
	// std r9,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r9.u64);
	// lwz r8,15632(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 15632);
	// lwz r6,72(r8)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + 72);
	// lwz r7,20(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// stw r6,16(r7)
	PPC_STORE_U32(ctx.r7.u32 + 16, ctx.r6.u32);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82a0472c
	if (!ctx.cr6.eq) goto loc_82A0472C;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82a04770
	if (ctx.cr6.eq) goto loc_82A04770;
loc_82A0472C:
	// lwz r10,20(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// lwz r11,11240(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11240);
	// lwz r3,100(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 100);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x82a74f08
	ctx.lr = 0x82A04744;
	sub_82A74F08(ctx, base);
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// li r7,16
	ctx.r7.s64 = 16;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r28,r11,48
	ctx.r28.s64 = ctx.r11.s64 + 48;
	// addi r5,r1,88
	ctx.r5.s64 = ctx.r1.s64 + 88;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82662c60
	ctx.lr = 0x82A04764;
	sub_82662C60(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82662d30
	ctx.lr = 0x82A04770;
	sub_82662D30(ctx, base);
loc_82A04770:
	// lwz r11,15632(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 15632);
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r10,20(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// lwz r9,92(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// stw r9,112(r10)
	PPC_STORE_U32(ctx.r10.u32 + 112, ctx.r9.u32);
	// lwz r4,20(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// bl 0x82a0a3a0
	ctx.lr = 0x82A0478C;
	sub_82A0A3A0(ctx, base);
	// stw r26,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r26.u32);
loc_82A04790:
	// lwz r10,16(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82a04854
	if (ctx.cr6.eq) goto loc_82A04854;
	// lwz r11,11244(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11244);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82a04814
	if (ctx.cr6.eq) goto loc_82A04814;
	// lwz r11,12080(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12080);
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// lwz r3,100(r10)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + 100);
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x82a74f08
	ctx.lr = 0x82A047BC;
	sub_82A74F08(ctx, base);
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// li r7,16
	ctx.r7.s64 = 16;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r28,r11,48
	ctx.r28.s64 = ctx.r11.s64 + 48;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82662c60
	ctx.lr = 0x82A047DC;
	sub_82662C60(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82662d30
	ctx.lr = 0x82A047E8;
	sub_82662D30(ctx, base);
	// lwz r11,12080(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12080);
	// li r7,16
	ctx.r7.s64 = 16;
	// addi r28,r11,4
	ctx.r28.s64 = ctx.r11.s64 + 4;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r5,r1,104
	ctx.r5.s64 = ctx.r1.s64 + 104;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82662c60
	ctx.lr = 0x82A04808;
	sub_82662C60(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82662d30
	ctx.lr = 0x82A04814;
	sub_82662D30(ctx, base);
loc_82A04814:
	// lwz r11,15632(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 15632);
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r10,16(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// ld r9,80(r11)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r11.u32 + 80);
	// std r9,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r9.u64);
	// lwz r8,15632(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 15632);
	// lwz r7,16(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// lwz r6,72(r8)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + 72);
	// stw r6,16(r7)
	PPC_STORE_U32(ctx.r7.u32 + 16, ctx.r6.u32);
	// lwz r5,15632(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 15632);
	// lwz r4,16(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// lwz r11,92(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 92);
	// stw r11,112(r4)
	PPC_STORE_U32(ctx.r4.u32 + 112, ctx.r11.u32);
	// lwz r4,16(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// bl 0x82a0a3a0
	ctx.lr = 0x82A04850;
	sub_82A0A3A0(ctx, base);
	// stw r26,16(r30)
	PPC_STORE_U32(ctx.r30.u32 + 16, ctx.r26.u32);
loc_82A04854:
	// lwz r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a048dc
	if (ctx.cr6.eq) goto loc_82A048DC;
	// lwz r10,15632(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 15632);
	// li r5,15360
	ctx.r5.s64 = 15360;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// lwz r9,92(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 92);
	// stw r9,112(r11)
	PPC_STORE_U32(ctx.r11.u32 + 112, ctx.r9.u32);
	// lwz r8,15632(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 15632);
	// lwz r7,24(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// ld r6,80(r8)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r8.u32 + 80);
	// std r6,8(r7)
	PPC_STORE_U64(ctx.r7.u32 + 8, ctx.r6.u64);
	// lwz r3,15632(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 15632);
	// lwz r10,72(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// lwz r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// stw r10,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r10.u32);
	// lwz r9,24(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// lwz r3,100(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 100);
	// bl 0x82a74f08
	ctx.lr = 0x82A048A0;
	sub_82A74F08(ctx, base);
	// lwz r11,24(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// li r7,16
	ctx.r7.s64 = 16;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r28,r11,48
	ctx.r28.s64 = ctx.r11.s64 + 48;
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82662c60
	ctx.lr = 0x82A048C0;
	sub_82662C60(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82662d30
	ctx.lr = 0x82A048CC;
	sub_82662D30(ctx, base);
	// li r3,4
	ctx.r3.s64 = 4;
	// lwz r4,24(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 24);
	// bl 0x82a0a3a0
	ctx.lr = 0x82A048D8;
	sub_82A0A3A0(ctx, base);
	// stw r26,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r26.u32);
loc_82A048DC:
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a04924
	if (ctx.cr6.eq) goto loc_82A04924;
	// lwz r10,15632(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 15632);
	// li r3,1
	ctx.r3.s64 = 1;
	// ld r9,80(r10)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r10.u32 + 80);
	// std r9,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r9.u64);
	// lwz r8,15632(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 15632);
	// lwz r7,12(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// lwz r6,72(r8)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + 72);
	// stw r6,16(r7)
	PPC_STORE_U32(ctx.r7.u32 + 16, ctx.r6.u32);
	// lwz r5,15632(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 15632);
	// lwz r4,12(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// lwz r11,92(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 92);
	// stw r11,112(r4)
	PPC_STORE_U32(ctx.r4.u32 + 112, ctx.r11.u32);
	// lwz r4,12(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// bl 0x82a0a3a0
	ctx.lr = 0x82A04920;
	sub_82A0A3A0(ctx, base);
	// stw r26,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r26.u32);
loc_82A04924:
	// lwz r11,15636(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 15636);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a04c60
	if (ctx.cr6.eq) goto loc_82A04C60;
	// lwz r10,15632(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 15632);
	// lwz r9,72(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 72);
	// stw r9,72(r11)
	PPC_STORE_U32(ctx.r11.u32 + 72, ctx.r9.u32);
	// lwz r11,10660(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10660);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82a049bc
	if (!ctx.cr6.eq) goto loc_82A049BC;
	// lwz r10,15636(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 15636);
	// li r7,16
	ctx.r7.s64 = 16;
	// lwz r11,10676(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10676);
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r1,120
	ctx.r5.s64 = ctx.r1.s64 + 120;
	// li r4,0
	ctx.r4.s64 = 0;
	// ld r9,80(r10)
	ctx.r9.u64 = PPC_LOAD_U64(ctx.r10.u32 + 80);
	// std r9,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r9.u64);
	// lwz r8,15636(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 15636);
	// lwz r11,10676(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10676);
	// lwz r3,72(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + 72);
	// stw r3,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r3.u32);
	// lwz r11,10676(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10676);
	// lwz r10,15636(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 15636);
	// addi r9,r10,108
	ctx.r9.s64 = ctx.r10.s64 + 108;
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// addi r10,r11,36
	ctx.r10.s64 = ctx.r11.s64 + 36;
	// stw r8,36(r11)
	PPC_STORE_U32(ctx.r11.u32 + 36, ctx.r8.u32);
	// lwz r3,4(r9)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4);
	// stw r3,40(r11)
	PPC_STORE_U32(ctx.r11.u32 + 40, ctx.r3.u32);
	// lwz r10,8(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 8);
	// stw r10,44(r11)
	PPC_STORE_U32(ctx.r11.u32 + 44, ctx.r10.u32);
	// lwz r11,10676(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10676);
	// addi r28,r11,48
	ctx.r28.s64 = ctx.r11.s64 + 48;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82662c60
	ctx.lr = 0x82A049B0;
	sub_82662C60(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82662d30
	ctx.lr = 0x82A049BC;
	sub_82662D30(ctx, base);
loc_82A049BC:
	// addi r9,r31,10908
	ctx.r9.s64 = ctx.r31.s64 + 10908;
loc_82A049C0:
	// mfmsr r10
	ctx.r10.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r9
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r9.u32);
	ctx.r11.u64 = __builtin_bswap32(ctx.reserved.u32);
	// cmpw cr6,r11,r25
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r25.s32, ctx.xer);
	// bne cr6,0x82a049e4
	if (!ctx.cr6.eq) goto loc_82A049E4;
	// stwcx. r26,0,r9
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r9.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r26.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r10,1
	ctx.msr = (ctx.r10.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x82a049c0
	if (!ctx.cr0.eq) goto loc_82A049C0;
	// b 0x82a049ec
	goto loc_82A049EC;
loc_82A049E4:
	// stwcx. r11,0,r9
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r9.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r11.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r10,1
	ctx.msr = (ctx.r10.u32 & 0x8020) | (ctx.msr & ~0x8020);
loc_82A049EC:
	// mr r11,r11
	ctx.r11.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82a04ab8
	if (!ctx.cr6.eq) goto loc_82A04AB8;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82a04a24
	if (!ctx.cr6.eq) goto loc_82A04A24;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82a04a24
	if (!ctx.cr6.eq) goto loc_82A04A24;
	// lwz r11,11248(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11248);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82a04a38
	if (ctx.cr6.eq) goto loc_82A04A38;
	// lwz r11,12080(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12080);
	// b 0x82a04a28
	goto loc_82A04A28;
loc_82A04A24:
	// lwz r11,11240(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11240);
loc_82A04A28:
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r3,10876(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10876);
	// bl 0x82a74f08
	ctx.lr = 0x82A04A38;
	sub_82A74F08(ctx, base);
loc_82A04A38:
	// lis r11,-31975
	ctx.r11.s64 = -2095513600;
	// addi r28,r11,-12552
	ctx.r28.s64 = ctx.r11.s64 + -12552;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x831791a4
	ctx.lr = 0x82A04A48;
	__imp__RtlEnterCriticalSection(ctx, base);
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// stw r26,10904(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10904, ctx.r26.u32);
	// lwz r11,10900(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10900);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a04ab0
	if (ctx.cr6.eq) goto loc_82A04AB0;
	// lwz r8,15636(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 15636);
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
	// mr r9,r26
	ctx.r9.u64 = ctx.r26.u64;
	// ld r11,80(r8)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r8.u32 + 80);
	// std r11,10688(r31)
	PPC_STORE_U64(ctx.r31.u32 + 10688, ctx.r11.u64);
	// lwz r7,15636(r29)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r29.u32 + 15636);
	// lwz r11,72(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 72);
	// stw r11,10696(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10696, ctx.r11.u32);
	// lwz r11,15636(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 15636);
	// lwz r6,108(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 108);
	// stw r6,10704(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10704, ctx.r6.u32);
	// lwz r8,112(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 112);
	// stw r8,10708(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10708, ctx.r8.u32);
	// lwz r7,116(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 116);
	// stw r26,10896(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10896, ctx.r26.u32);
	// stw r26,10900(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10900, ctx.r26.u32);
	// stw r7,10712(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10712, ctx.r7.u32);
	// bl 0x831792b4
	ctx.lr = 0x82A04AB0;
	__imp__KeSetEvent(ctx, base);
loc_82A04AB0:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x831791b4
	ctx.lr = 0x82A04AB8;
	__imp__RtlLeaveCriticalSection(ctx, base);
loc_82A04AB8:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a04b88
	if (ctx.cr6.eq) goto loc_82A04B88;
	// lwz r10,28(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// rlwinm r9,r10,0,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82a04b88
	if (ctx.cr6.eq) goto loc_82A04B88;
	// lwz r10,15636(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 15636);
	// lwz r9,92(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 92);
	// stw r9,112(r11)
	PPC_STORE_U32(ctx.r11.u32 + 112, ctx.r9.u32);
	// lwz r8,15636(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 15636);
	// lwz r7,4(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// ld r6,80(r8)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r8.u32 + 80);
	// std r6,8(r7)
	PPC_STORE_U64(ctx.r7.u32 + 8, ctx.r6.u64);
	// lwz r5,15632(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 15632);
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r3,72(r5)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r5.u32 + 72);
	// stw r3,16(r4)
	PPC_STORE_U32(ctx.r4.u32 + 16, ctx.r3.u32);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r26,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r26.u32);
	// lwz r10,15636(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 15636);
	// lwz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r8,r9,0,23,23
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x100;
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82a04b2c
	if (ctx.cr6.eq) goto loc_82A04B2C;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// ori r9,r10,1
	ctx.r9.u64 = ctx.r10.u64 | 1;
	// stw r9,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r9.u32);
loc_82A04B2C:
	// lwz r10,15636(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 15636);
	// li r3,2
	ctx.r3.s64 = 2;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r9,108(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 108);
	// stw r9,36(r11)
	PPC_STORE_U32(ctx.r11.u32 + 36, ctx.r9.u32);
	// lwz r8,112(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 112);
	// stw r8,40(r11)
	PPC_STORE_U32(ctx.r11.u32 + 40, ctx.r8.u32);
	// lwz r7,116(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 116);
	// stw r7,44(r11)
	PPC_STORE_U32(ctx.r11.u32 + 44, ctx.r7.u32);
	// lwz r4,4(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// bl 0x82a0a3a0
	ctx.lr = 0x82A04B58;
	sub_82A0A3A0(ctx, base);
	// lwz r3,1596(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1596);
	// addi r6,r31,1840
	ctx.r6.s64 = ctx.r31.s64 + 1840;
	// rlwinm r11,r3,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// add r5,r3,r11
	ctx.r5.u64 = ctx.r3.u64 + ctx.r11.u64;
	// rlwinm r4,r5,6,0,25
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 6) & 0xFFFFFFC0;
	// lwzx r11,r4,r6
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r6.u32);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82a04b84
	if (!ctx.cr6.eq) goto loc_82A04B84;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// addi r4,r11,8
	ctx.r4.s64 = ctx.r11.s64 + 8;
	// bl 0x82a08e18
	ctx.lr = 0x82A04B84;
	sub_82A08E18(ctx, base);
loc_82A04B84:
	// stw r26,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r26.u32);
loc_82A04B88:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a04c08
	if (ctx.cr6.eq) goto loc_82A04C08;
	// lwz r10,28(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// rlwinm r9,r10,0,29,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x4;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82a04c08
	if (ctx.cr6.eq) goto loc_82A04C08;
	// lwz r10,15632(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 15632);
	// li r3,3
	ctx.r3.s64 = 3;
	// lwz r9,92(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 92);
	// stw r9,112(r11)
	PPC_STORE_U32(ctx.r11.u32 + 112, ctx.r9.u32);
	// lwz r8,15636(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 15636);
	// lwz r7,0(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// ld r6,80(r8)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r8.u32 + 80);
	// std r6,8(r7)
	PPC_STORE_U64(ctx.r7.u32 + 8, ctx.r6.u64);
	// lwz r5,15632(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 15632);
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,72(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 72);
	// stw r11,16(r4)
	PPC_STORE_U32(ctx.r4.u32 + 16, ctx.r11.u32);
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r26,32(r10)
	PPC_STORE_U32(ctx.r10.u32 + 32, ctx.r26.u32);
	// lwz r10,15636(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 15636);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r9,108(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 108);
	// stw r9,36(r11)
	PPC_STORE_U32(ctx.r11.u32 + 36, ctx.r9.u32);
	// lwz r8,112(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 112);
	// stw r8,40(r11)
	PPC_STORE_U32(ctx.r11.u32 + 40, ctx.r8.u32);
	// lwz r7,116(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 116);
	// stw r7,44(r11)
	PPC_STORE_U32(ctx.r11.u32 + 44, ctx.r7.u32);
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x82a0a3a0
	ctx.lr = 0x82A04C04;
	sub_82A0A3A0(ctx, base);
	// stw r26,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r26.u32);
loc_82A04C08:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a04c60
	if (ctx.cr6.eq) goto loc_82A04C60;
	// lwz r10,28(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// rlwinm r9,r10,0,23,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x100;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82a04c60
	if (ctx.cr6.eq) goto loc_82A04C60;
	// lwz r10,15636(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 15636);
	// li r3,5
	ctx.r3.s64 = 5;
	// lwz r9,92(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 92);
	// stw r9,112(r11)
	PPC_STORE_U32(ctx.r11.u32 + 112, ctx.r9.u32);
	// lwz r8,15636(r29)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r29.u32 + 15636);
	// lwz r7,8(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// ld r6,80(r8)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r8.u32 + 80);
	// std r6,8(r7)
	PPC_STORE_U64(ctx.r7.u32 + 8, ctx.r6.u64);
	// lwz r5,15636(r29)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r29.u32 + 15636);
	// lwz r4,8(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r11,72(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 72);
	// stw r11,16(r4)
	PPC_STORE_U32(ctx.r4.u32 + 16, ctx.r11.u32);
	// lwz r4,8(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// bl 0x82a0a3a0
	ctx.lr = 0x82A04C5C;
	sub_82A0A3A0(ctx, base);
	// stw r26,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r26.u32);
loc_82A04C60:
	// lwz r11,1148(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1148);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82a04c84
	if (!ctx.cr6.eq) goto loc_82A04C84;
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// cmplwi cr6,r11,50
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 50, ctx.xer);
	// beq cr6,0x82a04c84
	if (ctx.cr6.eq) goto loc_82A04C84;
	// lwz r4,15632(r29)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + 15632);
	// lwz r3,15636(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 15636);
	// bl 0x82a028d8
	ctx.lr = 0x82A04C84;
	sub_82A028D8(ctx, base);
loc_82A04C84:
	// mftb r11
	ctx.r11.u64 = __rdtsc();
	// stw r11,68(r30)
	PPC_STORE_U32(ctx.r30.u32 + 68, ctx.r11.u32);
	// lwz r9,15632(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 15632);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// beq cr6,0x82a04d10
	if (ctx.cr6.eq) goto loc_82A04D10;
	// lwz r11,11240(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11240);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a04d10
	if (ctx.cr6.eq) goto loc_82A04D10;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a04d10
	if (ctx.cr6.eq) goto loc_82A04D10;
	// rotlwi r10,r9,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r9.u32, 0);
	// stw r11,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r11.u32);
	// li r9,56
	ctx.r9.s64 = 56;
	// stw r26,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r26.u32);
	// li r8,21076
	ctx.r8.s64 = 21076;
	// stw r25,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r25.u32);
	// li r7,768
	ctx.r7.s64 = 768;
	// stw r9,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r9.u32);
	// stw r8,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r8.u32);
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// ld r6,80(r10)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r10.u32 + 80);
	// li r3,5136
	ctx.r3.s64 = 5136;
	// lwz r5,72(r10)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + 72);
	// lwz r11,112(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 112);
	// lwz r10,116(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 116);
	// stw r26,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r26.u32);
	// stw r26,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r26.u32);
	// stw r5,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r5.u32);
	// stw r11,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r11.u32);
	// std r6,136(r1)
	PPC_STORE_U64(ctx.r1.u32 + 136, ctx.r6.u64);
	// stw r10,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r10.u32);
	// stw r27,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r27.u32);
	// stw r7,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r7.u32);
	// bl 0x83178d24
	ctx.lr = 0x82A04D10;
	__imp__XamXStudioRequest(ctx, base);
loc_82A04D10:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x82fa76bc
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A04D18"))) PPC_WEAK_FUNC(sub_82A04D18);
PPC_FUNC_IMPL(__imp__sub_82A04D18) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7674
	ctx.lr = 0x82A04D20;
	__savegprlr_27(ctx, base);
	// stfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -56, ctx.f31.u64);
	// stwu r1,-1760(r1)
	ea = -1760 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31964
	ctx.r11.s64 = -2094792704;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r31,r11,29312
	ctx.r31.s64 = ctx.r11.s64 + 29312;
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// lwz r11,2196(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2196);
	// lwz r10,11244(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11244);
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,2192(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2192, ctx.r11.u32);
	// beq cr6,0x82a04d60
	if (ctx.cr6.eq) goto loc_82A04D60;
	// bl 0x82a437d0
	ctx.lr = 0x82A04D54;
	sub_82A437D0(ctx, base);
	// li r4,16
	ctx.r4.s64 = 16;
	// addi r3,r1,928
	ctx.r3.s64 = ctx.r1.s64 + 928;
	// bl 0x82a42778
	ctx.lr = 0x82A04D60;
	sub_82A42778(ctx, base);
loc_82A04D60:
	// lwz r11,11248(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11248);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82a04dc4
	if (ctx.cr6.eq) goto loc_82A04DC4;
	// li r5,800
	ctx.r5.s64 = 800;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// bl 0x82fa7cf0
	ctx.lr = 0x82A04D7C;
	sub_82FA7CF0(ctx, base);
	// lwz r11,15632(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 15632);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// addi r4,r1,928
	ctx.r4.s64 = ctx.r1.s64 + 928;
	// li r5,768
	ctx.r5.s64 = 768;
	// ld r10,80(r11)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r11.u32 + 80);
	// std r10,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r10.u64);
	// lwz r9,72(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// stw r9,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r9.u32);
	// bl 0x82fa77c0
	ctx.lr = 0x82A04DA0;
	sub_82FA77C0(ctx, base);
	// lwz r11,132(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// li r3,1
	ctx.r3.s64 = 1;
	// cntlzw r8,r11
	ctx.r8.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r7,r8,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 27) & 0x1;
	// xori r11,r7,1
	ctx.r11.u64 = ctx.r7.u64 ^ 1;
	// addi r6,r11,1
	ctx.r6.s64 = ctx.r11.s64 + 1;
	// stw r6,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r6.u32);
	// bl 0x82a0aa88
	ctx.lr = 0x82A04DC4;
	sub_82A0AA88(ctx, base);
loc_82A04DC4:
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// beq cr6,0x82a04ddc
	if (ctx.cr6.eq) goto loc_82A04DDC;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82a05144
	if (!ctx.cr6.eq) goto loc_82A05144;
loc_82A04DDC:
	// lwz r11,2192(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2192);
	// vspltisw128 v63,0
	_mm_store_si128((__m128i*)ctx.v63.u32, _mm_set1_epi32(int(0x0)));
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// mulli r10,r11,2784
	ctx.r10.s64 = ctx.r11.s64 * 2784;
	// stvx128 v63,r0,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r11,r31,2208
	ctx.r11.s64 = ctx.r31.s64 + 2208;
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// add r28,r10,r11
	ctx.r28.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r30,r28,32
	ctx.r30.s64 = ctx.r28.s64 + 32;
	// bne cr6,0x82a04e28
	if (!ctx.cr6.eq) goto loc_82A04E28;
	// lwz r11,11240(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11240);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// addi r6,r1,928
	ctx.r6.s64 = ctx.r1.s64 + 928;
	// addi r5,r11,4
	ctx.r5.s64 = ctx.r11.s64 + 4;
	// addi r4,r11,60
	ctx.r4.s64 = ctx.r11.s64 + 60;
	// addi r3,r29,15392
	ctx.r3.s64 = ctx.r29.s64 + 15392;
	// bl 0x82a3dd08
	ctx.lr = 0x82A04E24;
	sub_82A3DD08(ctx, base);
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
loc_82A04E28:
	// lwz r11,7952(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 7952);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82a04e64
	if (!ctx.cr6.eq) goto loc_82A04E64;
	// lwz r11,132(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82a04e64
	if (!ctx.cr6.eq) goto loc_82A04E64;
	// addis r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 65536;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// addi r4,r11,-5980
	ctx.r4.s64 = ctx.r11.s64 + -5980;
	// beq cr6,0x82a04e5c
	if (ctx.cr6.eq) goto loc_82A04E5C;
	// addi r3,r29,15392
	ctx.r3.s64 = ctx.r29.s64 + 15392;
	// bl 0x82a03848
	ctx.lr = 0x82A04E58;
	sub_82A03848(ctx, base);
	// b 0x82a04e64
	goto loc_82A04E64;
loc_82A04E5C:
	// addi r3,r30,48
	ctx.r3.s64 = ctx.r30.s64 + 48;
	// bl 0x82a04528
	ctx.lr = 0x82A04E64;
	sub_82A04528(ctx, base);
loc_82A04E64:
	// lwz r11,11240(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11240);
	// lwz r10,15632(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 15632);
	// addi r3,r10,72
	ctx.r3.s64 = ctx.r10.s64 + 72;
	// lwz r4,0(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// bl 0x82a0a3a8
	ctx.lr = 0x82A04E78;
	sub_82A0A3A8(ctx, base);
	// lwz r11,2164(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2164);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82a04e94
	if (!ctx.cr6.eq) goto loc_82A04E94;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82a05144
	if (!ctx.cr6.eq) goto loc_82A05144;
loc_82A04E94:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// lwz r10,12(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// lfs f0,92(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f0.f64 = double(temp.f32);
	// rlwinm r9,r10,0,31,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// stw r9,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r9.u32);
	// lfs f31,5184(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5184);
	ctx.f31.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// bne cr6,0x82a04ef4
	if (!ctx.cr6.eq) goto loc_82A04EF4;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r11,r11,0,20,20
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x800;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a04ef4
	if (ctx.cr6.eq) goto loc_82A04EF4;
	// bl 0x82a00298
	ctx.lr = 0x82A04EC8;
	sub_82A00298(ctx, base);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// stvx128 v1,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v1.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lfs f0,92(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f0,f31
	ctx.cr6.compare(ctx.f0.f64, ctx.f31.f64);
	// beq cr6,0x82a04efc
	if (ctx.cr6.eq) goto loc_82A04EFC;
	// li r11,48
	ctx.r11.s64 = 48;
	// stvx128 v1,r28,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r28.u32 + ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v1.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lwz r10,12(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// ori r9,r10,2
	ctx.r9.u64 = ctx.r10.u64 | 2;
	// stw r9,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r9.u32);
	// b 0x82a04efc
	goto loc_82A04EFC;
loc_82A04EF4:
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// lvx128 v1,r0,r11
	simd::store_shuffled(ctx.v1, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
loc_82A04EFC:
	// li r11,16
	ctx.r11.s64 = 16;
	// lis r10,-32228
	ctx.r10.s64 = -2112094208;
	// addi r3,r30,32
	ctx.r3.s64 = ctx.r30.s64 + 32;
	// stvx128 v1,r30,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r30.u32 + ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v1.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lfs f0,-23580(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -23580);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,28(r30)
	temp.u32 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	ctx.f13.f64 = double(temp.f32);
	// fmuls f12,f13,f0
	ctx.f12.f64 = double(float(ctx.f13.f64 * ctx.f0.f64));
	// stfs f12,28(r30)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r30.u32 + 28, temp.u32);
	// bl 0x82a00150
	ctx.lr = 0x82A04F20;
	sub_82A00150(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82a04f40
	if (ctx.cr6.eq) goto loc_82A04F40;
	// addi r5,r29,15392
	ctx.r5.s64 = ctx.r29.s64 + 15392;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// addi r3,r30,48
	ctx.r3.s64 = ctx.r30.s64 + 48;
	// bl 0x82a0b730
	ctx.lr = 0x82A04F3C;
	sub_82A0B730(ctx, base);
	// b 0x82a05018
	goto loc_82A05018;
loc_82A04F40:
	// lwz r11,48(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82a04f64
	if (ctx.cr6.eq) goto loc_82A04F64;
	// lis r11,0
	ctx.r11.s64 = 0;
	// lwz r10,52(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	// ori r9,r11,59548
	ctx.r9.u64 = ctx.r11.u64 | 59548;
	// lwzx r11,r31,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r8,52(r30)
	PPC_STORE_U32(ctx.r30.u32 + 52, ctx.r8.u32);
loc_82A04F64:
	// lwz r11,496(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 496);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82a04f88
	if (ctx.cr6.eq) goto loc_82A04F88;
	// lis r11,0
	ctx.r11.s64 = 0;
	// lwz r10,500(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 500);
	// ori r9,r11,59548
	ctx.r9.u64 = ctx.r11.u64 | 59548;
	// lwzx r11,r31,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r8,500(r30)
	PPC_STORE_U32(ctx.r30.u32 + 500, ctx.r8.u32);
loc_82A04F88:
	// lwz r11,944(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 944);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82a04fac
	if (ctx.cr6.eq) goto loc_82A04FAC;
	// lis r11,0
	ctx.r11.s64 = 0;
	// lwz r10,948(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 948);
	// ori r9,r11,59548
	ctx.r9.u64 = ctx.r11.u64 | 59548;
	// lwzx r11,r31,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r8,948(r30)
	PPC_STORE_U32(ctx.r30.u32 + 948, ctx.r8.u32);
loc_82A04FAC:
	// lwz r11,1392(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1392);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82a04fd0
	if (ctx.cr6.eq) goto loc_82A04FD0;
	// lis r11,0
	ctx.r11.s64 = 0;
	// lwz r10,1396(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1396);
	// ori r9,r11,59548
	ctx.r9.u64 = ctx.r11.u64 | 59548;
	// lwzx r11,r31,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r8,1396(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1396, ctx.r8.u32);
loc_82A04FD0:
	// lwz r11,1840(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1840);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82a04ff4
	if (ctx.cr6.eq) goto loc_82A04FF4;
	// lis r11,0
	ctx.r11.s64 = 0;
	// lwz r10,1844(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 1844);
	// ori r9,r11,59548
	ctx.r9.u64 = ctx.r11.u64 | 59548;
	// lwzx r11,r31,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r8,1844(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1844, ctx.r8.u32);
loc_82A04FF4:
	// lwz r11,2288(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2288);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82a05018
	if (ctx.cr6.eq) goto loc_82A05018;
	// lis r11,0
	ctx.r11.s64 = 0;
	// lwz r10,2292(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 2292);
	// ori r9,r11,59548
	ctx.r9.u64 = ctx.r11.u64 | 59548;
	// lwzx r11,r31,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r9.u32);
	// add r8,r10,r11
	ctx.r8.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r8,2292(r30)
	PPC_STORE_U32(ctx.r30.u32 + 2292, ctx.r8.u32);
loc_82A05018:
	// lwz r11,15632(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 15632);
	// ld r10,80(r11)
	ctx.r10.u64 = PPC_LOAD_U64(ctx.r11.u32 + 80);
	// std r10,0(r30)
	PPC_STORE_U64(ctx.r30.u32 + 0, ctx.r10.u64);
	// lwz r9,15632(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 15632);
	// lwz r8,72(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 72);
	// stw r8,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r8.u32);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82a05048
	if (ctx.cr6.eq) goto loc_82A05048;
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// ori r10,r11,4
	ctx.r10.u64 = ctx.r11.u64 | 4;
	// b 0x82a0505c
	goto loc_82A0505C;
loc_82A05048:
	// bl 0x82a3df00
	ctx.lr = 0x82A0504C;
	sub_82A3DF00(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82a05060
	if (ctx.cr6.eq) goto loc_82A05060;
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// ori r10,r11,8
	ctx.r10.u64 = ctx.r11.u64 | 8;
loc_82A0505C:
	// stw r10,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r10.u32);
loc_82A05060:
	// lwz r11,132(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r10,r11,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// xori r11,r10,1
	ctx.r11.u64 = ctx.r10.u64 ^ 1;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// stw r9,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r9.u32);
	// lwz r11,10632(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10632);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82a0508c
	if (ctx.cr6.eq) goto loc_82A0508C;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a12910
	ctx.lr = 0x82A0508C;
	sub_82A12910(ctx, base);
loc_82A0508C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a0b0c0
	ctx.lr = 0x82A05094;
	sub_82A0B0C0(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a0b0a0
	ctx.lr = 0x82A0509C;
	sub_82A0B0A0(ctx, base);
	// lwz r3,1596(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1596);
	// addi r10,r31,1840
	ctx.r10.s64 = ctx.r31.s64 + 1840;
	// rlwinm r11,r3,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// add r9,r3,r11
	ctx.r9.u64 = ctx.r3.u64 + ctx.r11.u64;
	// rlwinm r8,r9,6,0,25
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 6) & 0xFFFFFFC0;
	// lwzx r7,r8,r10
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// cmpwi cr6,r7,1
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 1, ctx.xer);
	// bne cr6,0x82a050d0
	if (!ctx.cr6.eq) goto loc_82A050D0;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82a050d0
	if (!ctx.cr6.eq) goto loc_82A050D0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82a08e80
	ctx.lr = 0x82A050D0;
	sub_82A08E80(ctx, base);
loc_82A050D0:
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82a050e4
	if (ctx.cr6.eq) goto loc_82A050E4;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a13ac8
	ctx.lr = 0x82A050E4;
	sub_82A13AC8(ctx, base);
loc_82A050E4:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82a050fc
	if (ctx.cr6.eq) goto loc_82A050FC;
	// addi r4,r29,15392
	ctx.r4.s64 = ctx.r29.s64 + 15392;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a0b970
	ctx.lr = 0x82A050FC;
	sub_82A0B970(ctx, base);
loc_82A050FC:
	// lwz r11,15632(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 15632);
	// lwz r10,92(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 92);
	// stw r10,2768(r28)
	PPC_STORE_U32(ctx.r28.u32 + 2768, ctx.r10.u32);
	// mftb r9
	ctx.r9.u64 = __rdtsc();
	// stw r9,72(r27)
	PPC_STORE_U32(ctx.r27.u32 + 72, ctx.r9.u32);
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82a0af50
	ctx.lr = 0x82A05118;
	sub_82A0AF50(ctx, base);
	// lwz r11,10660(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10660);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82a05134
	if (!ctx.cr6.eq) goto loc_82A05134;
	// li r5,2736
	ctx.r5.s64 = 2736;
	// lwz r3,10668(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10668);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82a75220
	ctx.lr = 0x82A05134;
	sub_82A75220(ctx, base);
loc_82A05134:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a13dd8
	ctx.lr = 0x82A0513C;
	sub_82A13DD8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a13678
	ctx.lr = 0x82A05144;
	sub_82A13678(ctx, base);
loc_82A05144:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82a05174
	if (!ctx.cr6.eq) goto loc_82A05174;
	// lwz r10,2192(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2192);
	// addi r9,r31,2240
	ctx.r9.s64 = ctx.r31.s64 + 2240;
	// lwz r11,11240(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11240);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mulli r10,r10,2784
	ctx.r10.s64 = ctx.r10.s64 * 2784;
	// lwz r5,0(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// add r3,r10,r9
	ctx.r3.u64 = ctx.r10.u64 + ctx.r9.u64;
	// bl 0x82a13cd0
	ctx.lr = 0x82A05174;
	sub_82A13CD0(ctx, base);
loc_82A05174:
	// lis r11,-31975
	ctx.r11.s64 = -2095513600;
	// addi r30,r11,-12580
	ctx.r30.s64 = ctx.r11.s64 + -12580;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831791a4
	ctx.lr = 0x82A05184;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r3,10652(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10652);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a051b8
	if (ctx.cr6.eq) goto loc_82A051B8;
	// lwz r11,10660(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10660);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82a051b8
	if (!ctx.cr6.eq) goto loc_82A051B8;
	// li r11,0
	ctx.r11.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r11,10664(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10664, ctx.r11.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x831792b4
	ctx.lr = 0x82A051B0;
	__imp__KeSetEvent(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,10652(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10652, ctx.r11.u32);
loc_82A051B8:
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,10660(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10660, ctx.r11.u32);
	// bl 0x831791b4
	ctx.lr = 0x82A051C8;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// addi r1,r1,1760
	ctx.r1.s64 = ctx.r1.s64 + 1760;
	// lfd f31,-56(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -56);
	// b 0x82fa76c4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A051D4"))) PPC_WEAK_FUNC(sub_82A051D4);
PPC_FUNC_IMPL(__imp__sub_82A051D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A051D8"))) PPC_WEAK_FUNC(sub_82A051D8);
PPC_FUNC_IMPL(__imp__sub_82A051D8) {
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
	// stwu r1,-4352(r1)
	ea = -4352 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,11
	ctx.r11.s64 = 11;
	// lis r10,-31975
	ctx.r10.s64 = -2095513600;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lwz r9,-12524(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + -12524);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82A0520C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82a053e4
	if (ctx.cr6.lt) goto loc_82A053E4;
	// lis r11,-31964
	ctx.r11.s64 = -2094792704;
	// li r5,40
	ctx.r5.s64 = 40;
	// addi r31,r11,29312
	ctx.r31.s64 = ctx.r11.s64 + 29312;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,10992
	ctx.r3.s64 = ctx.r31.s64 + 10992;
	// bl 0x82a75988
	ctx.lr = 0x82A0522C;
	sub_82A75988(ctx, base);
	// li r5,40
	ctx.r5.s64 = 40;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,11032
	ctx.r3.s64 = ctx.r31.s64 + 11032;
	// bl 0x82a75988
	ctx.lr = 0x82A0523C;
	sub_82A75988(ctx, base);
	// lfd f0,120(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 120);
	// lfd f13,128(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 128);
	// frsp f0,f0
	ctx.f0.f64 = double(float(ctx.f0.f64));
	// lfd f12,136(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 136);
	// frsp f13,f13
	ctx.f13.f64 = double(float(ctx.f13.f64));
	// lfd f11,144(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// frsp f12,f12
	ctx.f12.f64 = double(float(ctx.f12.f64));
	// lfd f10,152(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 152);
	// frsp f11,f11
	ctx.f11.f64 = double(float(ctx.f11.f64));
	// lfd f9,160(r1)
	ctx.f9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 160);
	// frsp f10,f10
	ctx.f10.f64 = double(float(ctx.f10.f64));
	// lfd f8,168(r1)
	ctx.f8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 168);
	// frsp f9,f9
	ctx.f9.f64 = double(float(ctx.f9.f64));
	// lfd f7,176(r1)
	ctx.f7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 176);
	// frsp f8,f8
	ctx.f8.f64 = double(float(ctx.f8.f64));
	// lfd f6,184(r1)
	ctx.f6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 184);
	// frsp f7,f7
	ctx.f7.f64 = double(float(ctx.f7.f64));
	// lfd f5,192(r1)
	ctx.f5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 192);
	// frsp f6,f6
	ctx.f6.f64 = double(float(ctx.f6.f64));
	// lfd f4,200(r1)
	ctx.f4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 200);
	// frsp f5,f5
	ctx.f5.f64 = double(float(ctx.f5.f64));
	// lfd f3,208(r1)
	ctx.f3.u64 = PPC_LOAD_U64(ctx.r1.u32 + 208);
	// frsp f4,f4
	ctx.f4.f64 = double(float(ctx.f4.f64));
	// frsp f3,f3
	ctx.f3.f64 = double(float(ctx.f3.f64));
	// stfs f0,11008(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 11008, temp.u32);
	// stfs f13,11012(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 11012, temp.u32);
	// li r5,16384
	ctx.r5.s64 = 16384;
	// stfs f12,11016(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 11016, temp.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// stfs f11,11020(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 11020, temp.u32);
	// lwz r3,11072(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11072);
	// stfs f10,11024(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 11024, temp.u32);
	// stfs f9,11028(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 11028, temp.u32);
	// stfs f8,11048(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 11048, temp.u32);
	// stfs f7,11052(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r31.u32 + 11052, temp.u32);
	// stfs f6,11056(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r31.u32 + 11056, temp.u32);
	// stfs f5,11060(r31)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r31.u32 + 11060, temp.u32);
	// stfs f4,11064(r31)
	temp.f32 = float(ctx.f4.f64);
	PPC_STORE_U32(ctx.r31.u32 + 11064, temp.u32);
	// stfs f3,11068(r31)
	temp.f32 = float(ctx.f3.f64);
	PPC_STORE_U32(ctx.r31.u32 + 11068, temp.u32);
	// bl 0x82a75988
	ctx.lr = 0x82A052DC;
	sub_82A75988(ctx, base);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lfd f2,216(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f2.u64 = PPC_LOAD_U64(ctx.r1.u32 + 216);
	// lhz r7,4324(r1)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r1.u32 + 4324);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r6,r1,224
	ctx.r6.s64 = ctx.r1.s64 + 224;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// lfd f0,-26608(r11)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r11.u32 + -26608);
	// mr r9,r3
	ctx.r9.u64 = ctx.r3.u64;
	// fmul f1,f2,f0
	ctx.f1.f64 = ctx.f2.f64 * ctx.f0.f64;
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// rldicr r5,r7,22,63
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r7.u64, 22) & 0xFFFFFFFFFFFFFFFF;
	// fctidz f0,f1
	ctx.f0.s64 = (ctx.f1.f64 > double(LLONG_MAX)) ? LLONG_MAX : _mm_cvttsd_si64(_mm_load_sd(&ctx.f1.f64));
	// stfd f0,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.f0.u64);
	// ld r4,96(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 96);
loc_82A05314:
	// lhz r7,0(r6)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r6.u32 + 0);
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82a05370
	if (ctx.cr6.eq) goto loc_82A05370;
	// cmplwi cr6,r7,8192
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 8192, ctx.xer);
	// bge cr6,0x82a05370
	if (!ctx.cr6.lt) goto loc_82A05370;
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// cmplw cr6,r10,r7
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r7.u32, ctx.xer);
	// bge cr6,0x82a05354
	if (!ctx.cr6.lt) goto loc_82A05354;
	// subf r30,r10,r7
	ctx.r30.s64 = ctx.r7.s64 - ctx.r10.s64;
	// rlwinm r11,r10,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// mtctr r30
	ctx.ctr.u64 = ctx.r30.u64;
loc_82A05344:
	// lwz r10,11072(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11072);
	// sthx r9,r11,r10
	PPC_STORE_U16(ctx.r11.u32 + ctx.r10.u32, ctx.r9.u16);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// bdnz 0x82a05344
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82A05344;
loc_82A05354:
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// rldicl r7,r8,20,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u64, 20) & 0xFFFFFFFFF;
	// rldicr r7,r7,0,41
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u64, 0) & 0xFFFFFFFFFFC00000;
	// subf r11,r5,r7
	ctx.r11.s64 = ctx.r7.s64 - ctx.r5.s64;
	// mulld r9,r11,r4
	ctx.r9.s64 = ctx.r11.s64 * ctx.r4.s64;
	// sradi r7,r9,40
	ctx.xer.ca = (ctx.r9.s64 < 0) & ((ctx.r9.u64 & 0xFFFFFFFFFF) != 0);
	ctx.r7.s64 = ctx.r9.s64 >> 40;
	// extsh r9,r7
	ctx.r9.s64 = ctx.r7.s16;
loc_82A05370:
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// addi r6,r6,2
	ctx.r6.s64 = ctx.r6.s64 + 2;
	// cmplwi cr6,r8,2048
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 2048, ctx.xer);
	// blt cr6,0x82a05314
	if (ctx.cr6.lt) goto loc_82A05314;
	// clrlwi r11,r10,16
	ctx.r11.u64 = ctx.r10.u32 & 0xFFFF;
	// cmplwi cr6,r11,2048
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2048, ctx.xer);
	// bge cr6,0x82a053a8
	if (!ctx.cr6.lt) goto loc_82A053A8;
	// subfic r10,r11,2048
	ctx.xer.ca = ctx.r11.u32 <= 2048;
	ctx.r10.s64 = 2048 - ctx.r11.s64;
	// rlwinm r11,r11,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82A05398:
	// lwz r10,11072(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11072);
	// sthx r9,r11,r10
	PPC_STORE_U16(ctx.r11.u32 + ctx.r10.u32, ctx.r9.u16);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// bdnz 0x82a05398
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82A05398;
loc_82A053A8:
	// li r11,8192
	ctx.r11.s64 = 8192;
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// li r7,4096
	ctx.r7.s64 = 4096;
	// stw r3,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r3.u32);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// addi r5,r1,104
	ctx.r5.s64 = ctx.r1.s64 + 104;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,11076
	ctx.r3.s64 = ctx.r31.s64 + 11076;
	// bl 0x82662c60
	ctx.lr = 0x82A053D4;
	sub_82662C60(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,11076
	ctx.r3.s64 = ctx.r31.s64 + 11076;
	// bl 0x82662d30
	ctx.lr = 0x82A053E0;
	sub_82662D30(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_82A053E4:
	// addi r1,r1,4352
	ctx.r1.s64 = ctx.r1.s64 + 4352;
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

__attribute__((alias("__imp__sub_82A053FC"))) PPC_WEAK_FUNC(sub_82A053FC);
PPC_FUNC_IMPL(__imp__sub_82A053FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A05400"))) PPC_WEAK_FUNC(sub_82A05400);
PPC_FUNC_IMPL(__imp__sub_82A05400) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x82A05408;
	__savegprlr_29(ctx, base);
	// addi r12,r1,-32
	ctx.r12.s64 = ctx.r1.s64 + -32;
	// bl 0x82fa8d08
	ctx.lr = 0x82A05410;
	__savefpr_20(ctx, base);
	// ld r12,-4096(r1)
	ctx.r12.u64 = PPC_LOAD_U64(ctx.r1.u32 + -4096);
	// stwu r1,-4704(r1)
	ea = -4704 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,14
	ctx.r11.s64 = 14;
	// lis r10,-31975
	ctx.r10.s64 = -2095513600;
	// stw r11,304(r1)
	PPC_STORE_U32(ctx.r1.u32 + 304, ctx.r11.u32);
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// lwz r9,-12524(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + -12524);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// bctrl 
	ctx.lr = 0x82A05434;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82a059e4
	if (ctx.cr6.lt) goto loc_82A059E4;
	// lis r11,-31964
	ctx.r11.s64 = -2094792704;
	// li r5,16384
	ctx.r5.s64 = 16384;
	// addi r31,r11,29312
	ctx.r31.s64 = ctx.r11.s64 + 29312;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,11072(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11072);
	// bl 0x82a75988
	ctx.lr = 0x82A05454;
	sub_82A75988(ctx, base);
	// li r29,8192
	ctx.r29.s64 = 8192;
	// lhz r4,4552(r1)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r1.u32 + 4552);
	// li r8,640
	ctx.r8.s64 = 640;
	// lhz r3,4554(r1)
	ctx.r3.u64 = PPC_LOAD_U16(ctx.r1.u32 + 4554);
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
	// lfd f0,4544(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 4544);
	// divwu r9,r4,r8
	ctx.r9.u32 = ctx.r4.u32 / ctx.r8.u32;
	// lfd f12,4568(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 4568);
	// lis r7,-32256
	ctx.r7.s64 = -2113929216;
	// lfd f11,4536(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 4536);
	// extsw r8,r9
	ctx.r8.s64 = ctx.r9.s32;
	// lfd f13,4560(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 4560);
	// std r3,160(r1)
	PPC_STORE_U64(ctx.r1.u32 + 160, ctx.r3.u64);
	// lfd f10,160(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 160);
	// std r8,160(r1)
	PPC_STORE_U64(ctx.r1.u32 + 160, ctx.r8.u64);
	// lfd f8,160(r1)
	ctx.f8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 160);
	// fcfid f9,f10
	ctx.f9.f64 = double(ctx.f10.s64);
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// fcfid f7,f8
	ctx.f7.f64 = double(ctx.f8.s64);
	// lfd f26,22528(r7)
	ctx.f26.u64 = PPC_LOAD_U64(ctx.r7.u32 + 22528);
	// li r30,0
	ctx.r30.s64 = 0;
	// lfd f10,-26568(r9)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r9.u32 + -26568);
	// mtctr r29
	ctx.ctr.u64 = ctx.r29.u64;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// fmul f6,f7,f9
	ctx.f6.f64 = ctx.f7.f64 * ctx.f9.f64;
	// fmul f5,f6,f0
	ctx.f5.f64 = ctx.f6.f64 * ctx.f0.f64;
	// fdiv f0,f26,f5
	ctx.f0.f64 = ctx.f26.f64 / ctx.f5.f64;
	// fmul f4,f0,f9
	ctx.f4.f64 = ctx.f0.f64 * ctx.f9.f64;
	// fmul f3,f0,f9
	ctx.f3.f64 = ctx.f0.f64 * ctx.f9.f64;
	// fmul f12,f4,f12
	ctx.f12.f64 = ctx.f4.f64 * ctx.f12.f64;
	// fmul f11,f3,f11
	ctx.f11.f64 = ctx.f3.f64 * ctx.f11.f64;
loc_82A054D4:
	// clrldi r8,r11,32
	ctx.r8.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// lwz r9,11072(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11072);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// std r8,160(r1)
	PPC_STORE_U64(ctx.r1.u32 + 160, ctx.r8.u64);
	// lfd f9,160(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 160);
	// fcfid f8,f9
	ctx.f8.f64 = double(ctx.f9.s64);
	// fmul f7,f8,f0
	ctx.f7.f64 = ctx.f8.f64 * ctx.f0.f64;
	// fsub f6,f7,f11
	ctx.f6.f64 = ctx.f7.f64 - ctx.f11.f64;
	// fdiv f5,f6,f7
	ctx.f5.f64 = ctx.f6.f64 / ctx.f7.f64;
	// fmadd f4,f5,f12,f13
	ctx.f4.f64 = ctx.f5.f64 * ctx.f12.f64 + ctx.f13.f64;
	// fmul f3,f4,f10
	ctx.f3.f64 = ctx.f4.f64 * ctx.f10.f64;
	// fctiwz f2,f3
	ctx.f2.s64 = (ctx.f3.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f3.f64));
	// stfd f2,152(r1)
	PPC_STORE_U64(ctx.r1.u32 + 152, ctx.f2.u64);
	// lhz r7,158(r1)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r1.u32 + 158);
	// sthx r7,r10,r9
	PPC_STORE_U16(ctx.r10.u32 + ctx.r9.u32, ctx.r7.u16);
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// bdnz 0x82a054d4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82A054D4;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// mtctr r29
	ctx.ctr.u64 = ctx.r29.u64;
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// li r8,-32768
	ctx.r8.s64 = -32768;
loc_82A05528:
	// lwz r11,11184(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11184);
	// lhzx r11,r9,r11
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r9.u32 + ctx.r11.u32);
	// cmplwi cr6,r11,8191
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8191, ctx.xer);
	// ble cr6,0x82a0553c
	if (!ctx.cr6.gt) goto loc_82A0553C;
	// li r11,8191
	ctx.r11.s64 = 8191;
loc_82A0553C:
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,4000
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4000, ctx.xer);
	// bge cr6,0x82a0556c
	if (!ctx.cr6.lt) goto loc_82A0556C;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a0556c
	if (ctx.cr6.eq) goto loc_82A0556C;
	// lwz r11,11072(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11072);
	// rlwinm r7,r10,1,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r10,11128(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11128);
	// lhzx r6,r7,r11
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r7.u32 + ctx.r11.u32);
	// sthx r6,r9,r10
	PPC_STORE_U16(ctx.r9.u32 + ctx.r10.u32, ctx.r6.u16);
	// b 0x82a05574
	goto loc_82A05574;
loc_82A0556C:
	// lwz r11,11128(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11128);
	// sthx r8,r9,r11
	PPC_STORE_U16(ctx.r9.u32 + ctx.r11.u32, ctx.r8.u16);
loc_82A05574:
	// addi r9,r9,2
	ctx.r9.s64 = ctx.r9.s64 + 2;
	// bdnz 0x82a05528
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82A05528;
	// stw r30,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r30.u32);
	// li r7,4096
	ctx.r7.s64 = 4096;
	// stw r30,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r30.u32);
	// addi r6,r1,208
	ctx.r6.s64 = ctx.r1.s64 + 208;
	// stw r29,216(r1)
	PPC_STORE_U32(ctx.r1.u32 + 216, ctx.r29.u32);
	// addi r5,r1,240
	ctx.r5.s64 = ctx.r1.s64 + 240;
	// stw r30,220(r1)
	PPC_STORE_U32(ctx.r1.u32 + 220, ctx.r30.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,11076
	ctx.r3.s64 = ctx.r31.s64 + 11076;
	// bl 0x82662c60
	ctx.lr = 0x82A055A4;
	sub_82662C60(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,11076
	ctx.r3.s64 = ctx.r31.s64 + 11076;
	// bl 0x82662d30
	ctx.lr = 0x82A055B0;
	sub_82662D30(ctx, base);
	// stw r30,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r30.u32);
	// stw r30,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r30.u32);
	// li r7,4096
	ctx.r7.s64 = 4096;
	// stw r29,232(r1)
	PPC_STORE_U32(ctx.r1.u32 + 232, ctx.r29.u32);
	// addi r6,r1,224
	ctx.r6.s64 = ctx.r1.s64 + 224;
	// stw r30,236(r1)
	PPC_STORE_U32(ctx.r1.u32 + 236, ctx.r30.u32);
	// addi r5,r1,256
	ctx.r5.s64 = ctx.r1.s64 + 256;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,11132
	ctx.r3.s64 = ctx.r31.s64 + 11132;
	// bl 0x82662c60
	ctx.lr = 0x82A055D8;
	sub_82662C60(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,11132
	ctx.r3.s64 = ctx.r31.s64 + 11132;
	// bl 0x82662d30
	ctx.lr = 0x82A055E4;
	sub_82662D30(ctx, base);
	// stw r30,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r30.u32);
	// stw r30,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r30.u32);
	// li r7,4096
	ctx.r7.s64 = 4096;
	// stw r29,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, ctx.r29.u32);
	// addi r6,r1,192
	ctx.r6.s64 = ctx.r1.s64 + 192;
	// stw r30,204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 204, ctx.r30.u32);
	// addi r5,r1,248
	ctx.r5.s64 = ctx.r1.s64 + 248;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,11188
	ctx.r3.s64 = ctx.r31.s64 + 11188;
	// bl 0x82662c60
	ctx.lr = 0x82A0560C;
	sub_82662C60(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,11188
	ctx.r3.s64 = ctx.r31.s64 + 11188;
	// bl 0x82662d30
	ctx.lr = 0x82A05618;
	sub_82662D30(ctx, base);
	// addi r11,r1,272
	ctx.r11.s64 = ctx.r1.s64 + 272;
	// lwz r5,328(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 328);
	// addi r10,r1,224
	ctx.r10.s64 = ctx.r1.s64 + 224;
	// addi r8,r1,280
	ctx.r8.s64 = ctx.r1.s64 + 280;
	// lwz r4,316(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 316);
	// lwz r3,320(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 320);
	// addi r9,r1,192
	ctx.r9.s64 = ctx.r1.s64 + 192;
	// stw r11,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r11.u32);
	// extsw r11,r5
	ctx.r11.s64 = ctx.r5.s32;
	// stw r10,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r10.u32);
	// extsw r10,r4
	ctx.r10.s64 = ctx.r4.s32;
	// stw r8,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r8.u32);
	// extsw r8,r3
	ctx.r8.s64 = ctx.r3.s32;
	// std r11,152(r1)
	PPC_STORE_U64(ctx.r1.u32 + 152, ctx.r11.u64);
	// lfd f0,152(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 152);
	// std r10,160(r1)
	PPC_STORE_U64(ctx.r1.u32 + 160, ctx.r10.u64);
	// lfd f13,160(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 160);
	// std r8,152(r1)
	PPC_STORE_U64(ctx.r1.u32 + 152, ctx.r8.u64);
	// lfd f12,152(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 152);
	// stw r9,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r9.u32);
	// addi r7,r1,264
	ctx.r7.s64 = ctx.r1.s64 + 264;
	// addi r6,r1,288
	ctx.r6.s64 = ctx.r1.s64 + 288;
	// fcfid f7,f0
	ctx.f7.f64 = double(ctx.f0.s64);
	// lwz r9,324(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 324);
	// fcfid f8,f13
	ctx.f8.f64 = double(ctx.f13.s64);
	// lwz r5,332(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 332);
	// fcfid f9,f12
	ctx.f9.f64 = double(ctx.f12.s64);
	// extsw r4,r9
	ctx.r4.s64 = ctx.r9.s32;
	// lwz r3,388(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 388);
	// lwz r11,380(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 380);
	// rlwinm r10,r5,13,0,18
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 13) & 0xFFFFE000;
	// std r4,152(r1)
	PPC_STORE_U64(ctx.r1.u32 + 152, ctx.r4.u64);
	// rlwinm r4,r3,11,0,20
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 11) & 0xFFFFF800;
	// lwz r9,416(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 416);
	// rlwinm r3,r11,11,0,20
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 11) & 0xFFFFF800;
	// lfd f11,152(r1)
	ctx.f11.u64 = PPC_LOAD_U64(ctx.r1.u32 + 152);
	// srawi r11,r10,13
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1FFF) != 0);
	ctx.r11.s64 = ctx.r10.s32 >> 13;
	// lwz r8,400(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 400);
	// fcfid f10,f11
	ctx.f10.f64 = double(ctx.f11.s64);
	// lwz r5,396(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 396);
	// rlwinm r10,r9,5,0,26
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 5) & 0xFFFFFFE0;
	// stw r7,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r7.u32);
	// srawi r9,r4,11
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x7FF) != 0);
	ctx.r9.s64 = ctx.r4.s32 >> 11;
	// stw r6,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r6.u32);
	// rlwinm r8,r8,5,0,26
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 5) & 0xFFFFFFE0;
	// srawi r7,r3,11
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x7FF) != 0);
	ctx.r7.s64 = ctx.r3.s32 >> 11;
	// rlwinm r6,r5,5,0,26
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 5) & 0xFFFFFFE0;
	// srawi r5,r10,5
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1F) != 0);
	ctx.r5.s64 = ctx.r10.s32 >> 5;
	// srawi r4,r8,5
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1F) != 0);
	ctx.r4.s64 = ctx.r8.s32 >> 5;
	// srawi r3,r6,5
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x1F) != 0);
	ctx.r3.s64 = ctx.r6.s32 >> 5;
	// extsw r10,r4
	ctx.r10.s64 = ctx.r4.s32;
	// extsw r8,r3
	ctx.r8.s64 = ctx.r3.s32;
	// extsw r4,r11
	ctx.r4.s64 = ctx.r11.s32;
	// std r10,152(r1)
	PPC_STORE_U64(ctx.r1.u32 + 152, ctx.r10.u64);
	// std r8,160(r1)
	PPC_STORE_U64(ctx.r1.u32 + 160, ctx.r8.u64);
	// lfd f5,160(r1)
	ctx.f5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 160);
	// std r4,168(r1)
	PPC_STORE_U64(ctx.r1.u32 + 168, ctx.r4.u64);
	// lfd f4,168(r1)
	ctx.f4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 168);
	// extsw r6,r9
	ctx.r6.s64 = ctx.r9.s32;
	// lfd f6,152(r1)
	ctx.f6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 152);
	// extsw r3,r7
	ctx.r3.s64 = ctx.r7.s32;
	// fcfid f6,f6
	ctx.f6.f64 = double(ctx.f6.s64);
	// std r6,144(r1)
	PPC_STORE_U64(ctx.r1.u32 + 144, ctx.r6.u64);
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// std r3,152(r1)
	PPC_STORE_U64(ctx.r1.u32 + 152, ctx.r3.u64);
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// extsw r9,r5
	ctx.r9.s64 = ctx.r5.s32;
	// fcfid f12,f4
	ctx.f12.f64 = double(ctx.f4.s64);
	// fcfid f5,f5
	ctx.f5.f64 = double(ctx.f5.s64);
	// lis r8,-32251
	ctx.r8.s64 = -2113601536;
	// lis r7,-32250
	ctx.r7.s64 = -2113536000;
	// lfd f30,-26576(r11)
	ctx.f30.u64 = PPC_LOAD_U64(ctx.r11.u32 + -26576);
	// lis r6,-32250
	ctx.r6.s64 = -2113536000;
	// lfd f29,-26584(r10)
	ctx.f29.u64 = PPC_LOAD_U64(ctx.r10.u32 + -26584);
	// fmul f25,f8,f30
	ctx.f25.f64 = ctx.f8.f64 * ctx.f30.f64;
	// fmul f24,f9,f30
	ctx.f24.f64 = ctx.f9.f64 * ctx.f30.f64;
	// fmul f23,f10,f29
	ctx.f23.f64 = ctx.f10.f64 * ctx.f29.f64;
	// lfd f27,17864(r8)
	ctx.f27.u64 = PPC_LOAD_U64(ctx.r8.u32 + 17864);
	// fmul f22,f7,f29
	ctx.f22.f64 = ctx.f7.f64 * ctx.f29.f64;
	// lfd f28,-26592(r7)
	ctx.f28.u64 = PPC_LOAD_U64(ctx.r7.u32 + -26592);
	// lfd f31,-26600(r6)
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r6.u32 + -26600);
	// fmul f6,f6,f31
	ctx.f6.f64 = ctx.f6.f64 * ctx.f31.f64;
	// fmul f10,f12,f27
	ctx.f10.f64 = ctx.f12.f64 * ctx.f27.f64;
	// fmul f5,f5,f31
	ctx.f5.f64 = ctx.f5.f64 * ctx.f31.f64;
	// fmr f4,f22
	ctx.f4.f64 = ctx.f22.f64;
	// lfd f3,144(r1)
	ctx.f3.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// std r9,144(r1)
	PPC_STORE_U64(ctx.r1.u32 + 144, ctx.r9.u64);
	// lfd f2,152(r1)
	ctx.f2.u64 = PPC_LOAD_U64(ctx.r1.u32 + 152);
	// fcfid f11,f3
	ctx.f11.f64 = double(ctx.f3.s64);
	// lfd f1,144(r1)
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// fcfid f0,f1
	ctx.f0.f64 = double(ctx.f1.s64);
	// fcfid f13,f2
	ctx.f13.f64 = double(ctx.f2.s64);
	// fmul f7,f0,f31
	ctx.f7.f64 = ctx.f0.f64 * ctx.f31.f64;
	// fmr f1,f25
	ctx.f1.f64 = ctx.f25.f64;
	// fmr f2,f24
	ctx.f2.f64 = ctx.f24.f64;
	// fmr f3,f23
	ctx.f3.f64 = ctx.f23.f64;
	// fmul f9,f11,f28
	ctx.f9.f64 = ctx.f11.f64 * ctx.f28.f64;
	// fmul f8,f13,f28
	ctx.f8.f64 = ctx.f13.f64 * ctx.f28.f64;
	// bl 0x82a01f50
	ctx.lr = 0x82A057A4;
	sub_82A01F50(ctx, base);
	// lwz r5,340(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 340);
	// lwz r4,344(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 344);
	// extsw r11,r5
	ctx.r11.s64 = ctx.r5.s32;
	// lwz r3,348(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 348);
	// lwz r10,352(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 352);
	// extsw r9,r4
	ctx.r9.s64 = ctx.r4.s32;
	// lwz r7,392(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 392);
	// extsw r8,r3
	ctx.r8.s64 = ctx.r3.s32;
	// std r11,144(r1)
	PPC_STORE_U64(ctx.r1.u32 + 144, ctx.r11.u64);
	// lfd f4,144(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// lwz r6,384(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 384);
	// rlwinm r5,r10,13,0,18
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 13) & 0xFFFFE000;
	// std r9,144(r1)
	PPC_STORE_U64(ctx.r1.u32 + 144, ctx.r9.u64);
	// lfd f3,144(r1)
	ctx.f3.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// rlwinm r3,r7,11,0,20
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 11) & 0xFFFFF800;
	// std r8,144(r1)
	PPC_STORE_U64(ctx.r1.u32 + 144, ctx.r8.u64);
	// rlwinm r10,r6,11,0,20
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 11) & 0xFFFFF800;
	// lfd f2,144(r1)
	ctx.f2.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// srawi r8,r5,13
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x1FFF) != 0);
	ctx.r8.s64 = ctx.r5.s32 >> 13;
	// lwz r4,424(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 424);
	// lwz r11,408(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 408);
	// srawi r7,r3,11
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x7FF) != 0);
	ctx.r7.s64 = ctx.r3.s32 >> 11;
	// lwz r9,404(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 404);
	// lwz r6,336(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 336);
	// extsw r5,r8
	ctx.r5.s64 = ctx.r8.s32;
	// fcfid f0,f3
	ctx.f0.f64 = double(ctx.f3.s64);
	// extsw r3,r7
	ctx.r3.s64 = ctx.r7.s32;
	// fcfid f1,f4
	ctx.f1.f64 = double(ctx.f4.s64);
	// std r5,144(r1)
	PPC_STORE_U64(ctx.r1.u32 + 144, ctx.r5.u64);
	// extsw r8,r6
	ctx.r8.s64 = ctx.r6.s32;
	// rlwinm r7,r4,5,0,26
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 5) & 0xFFFFFFE0;
	// lfd f13,144(r1)
	ctx.f13.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// rlwinm r6,r11,5,0,26
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// std r3,144(r1)
	PPC_STORE_U64(ctx.r1.u32 + 144, ctx.r3.u64);
	// srawi r5,r10,11
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7FF) != 0);
	ctx.r5.s64 = ctx.r10.s32 >> 11;
	// std r8,168(r1)
	PPC_STORE_U64(ctx.r1.u32 + 168, ctx.r8.u64);
	// srawi r3,r7,5
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x1F) != 0);
	ctx.r3.s64 = ctx.r7.s32 >> 5;
	// lfd f9,168(r1)
	ctx.f9.u64 = PPC_LOAD_U64(ctx.r1.u32 + 168);
	// srawi r11,r6,5
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x1F) != 0);
	ctx.r11.s64 = ctx.r6.s32 >> 5;
	// lfd f12,144(r1)
	ctx.f12.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// rlwinm r4,r9,5,0,26
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 5) & 0xFFFFFFE0;
	// fcfid f11,f2
	ctx.f11.f64 = double(ctx.f2.s64);
	// extsw r8,r11
	ctx.r8.s64 = ctx.r11.s32;
	// fcfid f13,f13
	ctx.f13.f64 = double(ctx.f13.s64);
	// srawi r10,r4,5
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x1F) != 0);
	ctx.r10.s64 = ctx.r4.s32 >> 5;
	// std r8,160(r1)
	PPC_STORE_U64(ctx.r1.u32 + 160, ctx.r8.u64);
	// extsw r9,r5
	ctx.r9.s64 = ctx.r5.s32;
	// fmul f20,f0,f29
	ctx.f20.f64 = ctx.f0.f64 * ctx.f29.f64;
	// extsw r8,r3
	ctx.r8.s64 = ctx.r3.s32;
	// fcfid f6,f9
	ctx.f6.f64 = double(ctx.f9.s64);
	// extsw r7,r10
	ctx.r7.s64 = ctx.r10.s32;
	// std r9,152(r1)
	PPC_STORE_U64(ctx.r1.u32 + 152, ctx.r9.u64);
	// std r8,144(r1)
	PPC_STORE_U64(ctx.r1.u32 + 144, ctx.r8.u64);
	// lfd f10,144(r1)
	ctx.f10.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// lfd f5,152(r1)
	ctx.f5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 152);
	// std r7,176(r1)
	PPC_STORE_U64(ctx.r1.u32 + 176, ctx.r7.u64);
	// lfd f0,176(r1)
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + 176);
	// addi r5,r1,240
	ctx.r5.s64 = ctx.r1.s64 + 240;
	// addi r9,r1,144
	ctx.r9.s64 = ctx.r1.s64 + 144;
	// fmul f21,f1,f30
	ctx.f21.f64 = ctx.f1.f64 * ctx.f30.f64;
	// addi r6,r1,176
	ctx.r6.s64 = ctx.r1.s64 + 176;
	// stw r6,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r6.u32);
	// addi r4,r1,256
	ctx.r4.s64 = ctx.r1.s64 + 256;
	// stw r5,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r5.u32);
	// stw r4,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r4.u32);
	// fcfid f1,f12
	ctx.f1.f64 = double(ctx.f12.s64);
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// lfd f4,160(r1)
	ctx.f4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 160);
	// fmul f29,f11,f29
	ctx.f29.f64 = ctx.f11.f64 * ctx.f29.f64;
	// addi r11,r1,248
	ctx.r11.s64 = ctx.r1.s64 + 248;
	// fcfid f11,f4
	ctx.f11.f64 = double(ctx.f4.s64);
	// addi r10,r1,208
	ctx.r10.s64 = ctx.r1.s64 + 208;
	// fcfid f8,f10
	ctx.f8.f64 = double(ctx.f10.s64);
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// fcfid f12,f5
	ctx.f12.f64 = double(ctx.f5.s64);
	// stw r10,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r10.u32);
	// fmul f30,f6,f30
	ctx.f30.f64 = ctx.f6.f64 * ctx.f30.f64;
	// fcfid f5,f0
	ctx.f5.f64 = double(ctx.f0.s64);
	// fmul f9,f1,f28
	ctx.f9.f64 = ctx.f1.f64 * ctx.f28.f64;
	// fmr f4,f29
	ctx.f4.f64 = ctx.f29.f64;
	// fmr f3,f20
	ctx.f3.f64 = ctx.f20.f64;
	// fmr f2,f21
	ctx.f2.f64 = ctx.f21.f64;
	// fmul f10,f13,f27
	ctx.f10.f64 = ctx.f13.f64 * ctx.f27.f64;
	// fmul f6,f11,f31
	ctx.f6.f64 = ctx.f11.f64 * ctx.f31.f64;
	// fmul f7,f8,f31
	ctx.f7.f64 = ctx.f8.f64 * ctx.f31.f64;
	// fmul f8,f12,f28
	ctx.f8.f64 = ctx.f12.f64 * ctx.f28.f64;
	// fmr f1,f30
	ctx.f1.f64 = ctx.f30.f64;
	// fmul f5,f5,f31
	ctx.f5.f64 = ctx.f5.f64 * ctx.f31.f64;
	// bl 0x82a01f50
	ctx.lr = 0x82A05908;
	sub_82A01F50(ctx, base);
	// lfd f4,272(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 272);
	// frsp f0,f25
	ctx.f0.f64 = double(float(ctx.f25.f64));
	// lfd f3,288(r1)
	ctx.f3.u64 = PPC_LOAD_U64(ctx.r1.u32 + 288);
	// fadd f2,f4,f26
	ctx.f2.f64 = ctx.f4.f64 + ctx.f26.f64;
	// lfd f5,176(r1)
	ctx.f5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 176);
	// frsp f13,f24
	ctx.f13.f64 = double(float(ctx.f24.f64));
	// lfd f1,264(r1)
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r1.u32 + 264);
	// frsp f12,f23
	ctx.f12.f64 = double(float(ctx.f23.f64));
	// lfd f8,280(r1)
	ctx.f8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 280);
	// frsp f11,f22
	ctx.f11.f64 = double(float(ctx.f22.f64));
	// lfd f7,192(r1)
	ctx.f7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 192);
	// fadd f31,f5,f26
	ctx.f31.f64 = ctx.f5.f64 + ctx.f26.f64;
	// lfd f6,224(r1)
	ctx.f6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 224);
	// frsp f10,f3
	ctx.f10.f64 = double(float(ctx.f3.f64));
	// lfd f4,144(r1)
	ctx.f4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 144);
	// lfd f28,208(r1)
	ctx.f28.u64 = PPC_LOAD_U64(ctx.r1.u32 + 208);
	// frsp f9,f1
	ctx.f9.f64 = double(float(ctx.f1.f64));
	// lfd f3,248(r1)
	ctx.f3.u64 = PPC_LOAD_U64(ctx.r1.u32 + 248);
	// lfd f1,256(r1)
	ctx.f1.u64 = PPC_LOAD_U64(ctx.r1.u32 + 256);
	// frsp f8,f8
	ctx.f8.f64 = double(float(ctx.f8.f64));
	// lfd f27,240(r1)
	ctx.f27.u64 = PPC_LOAD_U64(ctx.r1.u32 + 240);
	// frsp f7,f7
	ctx.f7.f64 = double(float(ctx.f7.f64));
	// frsp f6,f6
	ctx.f6.f64 = double(float(ctx.f6.f64));
	// stfs f0,10992(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 10992, temp.u32);
	// frsp f5,f30
	ctx.f5.f64 = double(float(ctx.f30.f64));
	// stfs f13,10996(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 10996, temp.u32);
	// stfs f12,11000(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 11000, temp.u32);
	// frsp f0,f21
	ctx.f0.f64 = double(float(ctx.f21.f64));
	// stfs f11,11004(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 11004, temp.u32);
	// frsp f13,f20
	ctx.f13.f64 = double(float(ctx.f20.f64));
	// stfs f10,11008(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 11008, temp.u32);
	// frsp f12,f29
	ctx.f12.f64 = double(float(ctx.f29.f64));
	// stfs f9,11012(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 11012, temp.u32);
	// frsp f11,f2
	ctx.f11.f64 = double(float(ctx.f2.f64));
	// stfs f8,11016(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 11016, temp.u32);
	// frsp f10,f4
	ctx.f10.f64 = double(float(ctx.f4.f64));
	// stfs f7,11020(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r31.u32 + 11020, temp.u32);
	// frsp f9,f28
	ctx.f9.f64 = double(float(ctx.f28.f64));
	// stfs f6,11024(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r31.u32 + 11024, temp.u32);
	// frsp f8,f3
	ctx.f8.f64 = double(float(ctx.f3.f64));
	// stfs f5,11032(r31)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r31.u32 + 11032, temp.u32);
	// frsp f7,f1
	ctx.f7.f64 = double(float(ctx.f1.f64));
	// frsp f6,f27
	ctx.f6.f64 = double(float(ctx.f27.f64));
	// stfs f0,11036(r31)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r31.u32 + 11036, temp.u32);
	// frsp f5,f31
	ctx.f5.f64 = double(float(ctx.f31.f64));
	// stfs f13,11040(r31)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r31.u32 + 11040, temp.u32);
	// stfs f12,11044(r31)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r31.u32 + 11044, temp.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stfs f11,11028(r31)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r31.u32 + 11028, temp.u32);
	// stfs f10,11048(r31)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r31.u32 + 11048, temp.u32);
	// stfs f9,11052(r31)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r31.u32 + 11052, temp.u32);
	// stfs f8,11056(r31)
	temp.f32 = float(ctx.f8.f64);
	PPC_STORE_U32(ctx.r31.u32 + 11056, temp.u32);
	// stfs f7,11060(r31)
	temp.f32 = float(ctx.f7.f64);
	PPC_STORE_U32(ctx.r31.u32 + 11060, temp.u32);
	// stfs f6,11064(r31)
	temp.f32 = float(ctx.f6.f64);
	PPC_STORE_U32(ctx.r31.u32 + 11064, temp.u32);
	// stfs f5,11068(r31)
	temp.f32 = float(ctx.f5.f64);
	PPC_STORE_U32(ctx.r31.u32 + 11068, temp.u32);
loc_82A059E4:
	// addi r1,r1,4704
	ctx.r1.s64 = ctx.r1.s64 + 4704;
	// addi r12,r1,-32
	ctx.r12.s64 = ctx.r1.s64 + -32;
	// bl 0x82fa8d54
	ctx.lr = 0x82A059F0;
	__restfpr_20(ctx, base);
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A059F4"))) PPC_WEAK_FUNC(sub_82A059F4);
PPC_FUNC_IMPL(__imp__sub_82A059F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A059F8"))) PPC_WEAK_FUNC(sub_82A059F8);
PPC_FUNC_IMPL(__imp__sub_82A059F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7674
	ctx.lr = 0x82A05A00;
	__savegprlr_27(ctx, base);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31964
	ctx.r11.s64 = -2094792704;
	// li r27,1
	ctx.r27.s64 = 1;
	// addi r31,r11,29312
	ctx.r31.s64 = ctx.r11.s64 + 29312;
	// li r11,24
	ctx.r11.s64 = 24;
	// stw r27,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r27.u32);
	// li r28,8192
	ctx.r28.s64 = 8192;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// lis r30,-31975
	ctx.r30.s64 = -2095513600;
	// stw r28,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r28.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// lwz r11,11184(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11184);
	// lwz r10,-12524(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + -12524);
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82A05A40;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x82a05a78
	if (!ctx.cr6.lt) goto loc_82A05A78;
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// rlwinm r9,r29,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0xFFFFFFFE;
loc_82A05A58:
	// lwz r8,11184(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11184);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// sthx r11,r9,r8
	PPC_STORE_U16(ctx.r9.u32 + ctx.r8.u32, ctx.r11.u16);
	// clrlwi r11,r10,16
	ctx.r11.u64 = ctx.r10.u32 & 0xFFFF;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,8192
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8192, ctx.xer);
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// blt cr6,0x82a05a58
	if (ctx.cr6.lt) goto loc_82A05A58;
loc_82A05A78:
	// stw r29,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r29.u32);
	// li r7,4096
	ctx.r7.s64 = 4096;
	// stw r29,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r29.u32);
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// stw r28,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r28.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// stw r29,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r29.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,11188
	ctx.r3.s64 = ctx.r31.s64 + 11188;
	// bl 0x82662c60
	ctx.lr = 0x82A05AA0;
	sub_82662C60(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,11188
	ctx.r3.s64 = ctx.r31.s64 + 11188;
	// bl 0x82662d30
	ctx.lr = 0x82A05AAC;
	sub_82662D30(ctx, base);
	// li r11,33
	ctx.r11.s64 = 33;
	// stw r27,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r27.u32);
	// addi r3,r1,160
	ctx.r3.s64 = ctx.r1.s64 + 160;
	// stw r11,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r11.u32);
	// lwz r10,-12524(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + -12524);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82A05AC8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r9,13
	ctx.r9.s64 = 13;
	// lwz r8,-12524(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + -12524);
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// stw r9,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r9.u32);
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// bctrl 
	ctx.lr = 0x82A05AE0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82a05b08
	if (ctx.cr6.lt) goto loc_82A05B08;
	// lbz r10,132(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 132);
	// cmplwi cr6,r10,5
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 5, ctx.xer);
	// blt cr6,0x82a05b08
	if (ctx.cr6.lt) goto loc_82A05B08;
	// lbz r10,133(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 133);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// blt cr6,0x82a05b08
	if (ctx.cr6.lt) goto loc_82A05B08;
	// bl 0x82a05400
	ctx.lr = 0x82A05B04;
	sub_82A05400(ctx, base);
	// b 0x82a05b0c
	goto loc_82A05B0C;
loc_82A05B08:
	// bl 0x82a051d8
	ctx.lr = 0x82A05B0C;
	sub_82A051D8(ctx, base);
loc_82A05B0C:
	// li r10,10
	ctx.r10.s64 = 10;
	// addis r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 65536;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
	// addi r11,r11,-5728
	ctx.r11.s64 = ctx.r11.s64 + -5728;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82A05B24:
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x82a05b24
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82A05B24;
	// bl 0x82a04398
	ctx.lr = 0x82A05B30;
	sub_82A04398(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x82fa76c4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A05B3C"))) PPC_WEAK_FUNC(sub_82A05B3C);
PPC_FUNC_IMPL(__imp__sub_82A05B3C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A05B40"))) PPC_WEAK_FUNC(sub_82A05B40);
PPC_FUNC_IMPL(__imp__sub_82A05B40) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7674
	ctx.lr = 0x82A05B48;
	__savegprlr_27(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r30,0
	ctx.r30.s64 = 0;
	// lis r11,-31975
	ctx.r11.s64 = -2095513600;
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r28,r30
	ctx.r28.u64 = ctx.r30.u64;
	// lwz r10,-12524(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -12524);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82A05B74;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-31964
	ctx.r11.s64 = -2094792704;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// addi r31,r11,29312
	ctx.r31.s64 = ctx.r11.s64 + 29312;
	// blt cr6,0x82a05dbc
	if (ctx.cr6.lt) goto loc_82A05DBC;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82a05dbc
	if (ctx.cr6.eq) goto loc_82A05DBC;
	// bdz 0x82a05dbc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_82A05DBC;
	// bdz 0x82a05bb4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_82A05BB4;
	// bdz 0x82a05dd4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_82A05DD4;
	// bdz 0x82a05bbc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_82A05BBC;
	// bdz 0x82a05dd4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_82A05DD4;
	// bdz 0x82a05ddc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_82A05DDC;
	// bdz 0x82a05ddc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_82A05DDC;
	// b 0x82a05dbc
	goto loc_82A05DBC;
loc_82A05BB4:
	// li r28,1
	ctx.r28.s64 = 1;
	// b 0x82a05db8
	goto loc_82A05DB8;
loc_82A05BBC:
	// li r28,1
	ctx.r28.s64 = 1;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq cr6,0x82a05dbc
	if (ctx.cr6.eq) goto loc_82A05DBC;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r10,27
	ctx.r10.s64 = 27;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// rlwinm r9,r11,27,30,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x2;
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// ori r8,r9,1
	ctx.r8.u64 = ctx.r9.u64 | 1;
	// stw r8,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r8.u32);
	// bl 0x82a02220
	ctx.lr = 0x82A05BE8;
	sub_82A02220(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x829fd668
	ctx.lr = 0x82A05BF0;
	sub_829FD668(ctx, base);
	// bl 0x829fefc8
	ctx.lr = 0x82A05BF4;
	sub_829FEFC8(ctx, base);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// blt cr6,0x82a05dbc
	if (ctx.cr6.lt) goto loc_82A05DBC;
	// bl 0x82a059f8
	ctx.lr = 0x82A05C00;
	sub_82A059F8(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82a05dbc
	if (ctx.cr6.lt) goto loc_82A05DBC;
	// stw r30,1368(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1368, ctx.r30.u32);
	// addi r3,r31,1368
	ctx.r3.s64 = ctx.r31.s64 + 1368;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// bl 0x83179274
	ctx.lr = 0x82A05C18;
	__imp__KfAcquireSpinLock(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r3,r31,1072
	ctx.r3.s64 = ctx.r31.s64 + 1072;
	// bl 0x82a020e0
	ctx.lr = 0x82A05C24;
	sub_82A020E0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82a05dac
	if (ctx.cr6.lt) goto loc_82A05DAC;
	// lwz r11,1104(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1104);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a05dac
	if (ctx.cr6.eq) goto loc_82A05DAC;
	// lis r5,-31964
	ctx.r5.s64 = -2094792704;
	// lwz r11,1120(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1120);
	// lis r4,25
	ctx.r4.s64 = 1638400;
	// lwz r9,1124(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1124);
	// lis r3,21
	ctx.r3.s64 = 1376256;
	// lwz r6,1112(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1112);
	// ori r10,r4,28266
	ctx.r10.u64 = ctx.r4.u64 | 28266;
	// lwz r8,1072(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1072);
	// ori r4,r3,15410
	ctx.r4.u64 = ctx.r3.u64 | 15410;
	// stw r30,1204(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1204, ctx.r30.u32);
	// lwz r5,29300(r5)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r5.u32 + 29300);
	// add r3,r11,r9
	ctx.r3.u64 = ctx.r11.u64 + ctx.r9.u64;
	// subf r11,r6,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r6.s64;
	// stw r10,1156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1156, ctx.r10.u32);
	// addis r9,r3,127
	ctx.r9.s64 = ctx.r3.s64 + 8323072;
	// lwz r7,1092(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1092);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// stw r8,1164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1164, ctx.r8.u32);
	// addi r9,r9,10258
	ctx.r9.s64 = ctx.r9.s64 + 10258;
	// stw r8,1168(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1168, ctx.r8.u32);
	// stw r5,1152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1152, ctx.r5.u32);
	// mr r5,r10
	ctx.r5.u64 = ctx.r10.u64;
	// lis r5,-1119
	ctx.r5.s64 = -73334784;
	// stw r9,1188(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1188, ctx.r9.u32);
	// li r6,3
	ctx.r6.s64 = 3;
	// stw r11,1160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1160, ctx.r11.u32);
	// ori r5,r5,1450
	ctx.r5.u64 = ctx.r5.u64 | 1450;
	// stw r7,1216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1216, ctx.r7.u32);
	// stw r6,1196(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1196, ctx.r6.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// stw r5,1200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1200, ctx.r5.u32);
	// addi r3,r31,1156
	ctx.r3.s64 = ctx.r31.s64 + 1156;
	// stw r7,1220(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1220, ctx.r7.u32);
	// lis r7,-1119
	ctx.r7.s64 = -73334784;
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// stw r4,1148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1148, ctx.r4.u32);
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// stw r9,1240(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1240, ctx.r9.u32);
	// addi r27,r31,1260
	ctx.r27.s64 = ctx.r31.s64 + 1260;
	// stw r30,1364(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1364, ctx.r30.u32);
	// ori r7,r7,1450
	ctx.r7.u64 = ctx.r7.u64 | 1450;
	// stw r30,1136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1136, ctx.r30.u32);
	// li r8,3
	ctx.r8.s64 = 3;
	// stw r10,1128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1128, ctx.r10.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// stw r7,1252(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1252, ctx.r7.u32);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// stw r8,1248(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1248, ctx.r8.u32);
	// li r5,52
	ctx.r5.s64 = 52;
	// stw r30,1420(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1420, ctx.r30.u32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stw r10,1208(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1208, ctx.r10.u32);
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// stw r10,1396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1396, ctx.r10.u32);
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// stw r30,1256(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1256, ctx.r30.u32);
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// stw r30,1380(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1380, ctx.r30.u32);
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// stw r30,1372(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1372, ctx.r30.u32);
	// stw r11,1400(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1400, ctx.r11.u32);
	// stw r11,1212(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1212, ctx.r11.u32);
	// stw r30,1376(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1376, ctx.r30.u32);
	// stw r30,1384(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1384, ctx.r30.u32);
	// stw r30,1424(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1424, ctx.r30.u32);
	// stw r10,1412(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1412, ctx.r10.u32);
	// stw r11,1416(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1416, ctx.r11.u32);
	// bl 0x82fa77c0
	ctx.lr = 0x82A05D48;
	sub_82FA77C0(ctx, base);
	// li r11,13
	ctx.r11.s64 = 13;
	// addi r9,r31,1308
	ctx.r9.s64 = ctx.r31.s64 + 1308;
	// addi r10,r31,1204
	ctx.r10.s64 = ctx.r31.s64 + 1204;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_82A05D58:
	// lwzu r11,4(r10)
	ea = 4 + ctx.r10.u32;
	ctx.r11.u64 = PPC_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// stwu r11,4(r9)
	ea = 4 + ctx.r9.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r9.u32 = ea;
	// bdnz 0x82a05d58
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82A05D58;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r6,1092(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1092);
	// addi r8,r31,1072
	ctx.r8.s64 = ctx.r31.s64 + 1072;
	// lwz r4,1072(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1072);
	// li r5,0
	ctx.r5.s64 = 0;
	// li r3,2
	ctx.r3.s64 = 2;
	// bl 0x82a027f8
	ctx.lr = 0x82A05D80;
	sub_82A027F8(ctx, base);
	// sync 
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82a05dac
	if (ctx.cr6.lt) goto loc_82A05DAC;
	// mftb r11
	ctx.r11.u64 = __rdtsc();
	// rotlwi r11,r11,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// li r10,2
	ctx.r10.s64 = 2;
	// li r9,2
	ctx.r9.s64 = 2;
	// stw r11,1184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1184, ctx.r11.u32);
	// stw r10,1192(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1192, ctx.r10.u32);
	// stw r9,1244(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1244, ctx.r9.u32);
	// stw r11,1236(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1236, ctx.r11.u32);
loc_82A05DAC:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r31,1368
	ctx.r3.s64 = ctx.r31.s64 + 1368;
	// bl 0x83179294
	ctx.lr = 0x82A05DB8;
	__imp__KfReleaseSpinLock(ctx, base);
loc_82A05DB8:
	// li r30,1
	ctx.r30.s64 = 1;
loc_82A05DBC:
	// stw r28,124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 124, ctx.r28.u32);
	// stw r30,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r30.u32);
	// sync 
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82fa76c4
	__restgprlr_27(ctx, base);
	return;
loc_82A05DD4:
	// li r28,1
	ctx.r28.s64 = 1;
	// b 0x82a05dbc
	goto loc_82A05DBC;
}

__attribute__((alias("__imp__sub_82A05DDC"))) PPC_WEAK_FUNC(sub_82A05DDC);
PPC_FUNC_IMPL(__imp__sub_82A05DDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A05DE0"))) PPC_WEAK_FUNC(sub_82A05DE0);
PPC_FUNC_IMPL(__imp__sub_82A05DE0) {
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
	// li r31,0
	ctx.r31.s64 = 0;
	// lis r11,-31975
	ctx.r11.s64 = -2095513600;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// lwz r10,-12524(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -12524);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// bctrl 
	ctx.lr = 0x82A05E10;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82a05e64
	if (ctx.cr6.lt) goto loc_82A05E64;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82a05e64
	if (ctx.cr6.eq) goto loc_82A05E64;
	// bdz 0x82a05e64
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_82A05E64;
	// bdz 0x82a05e44
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_82A05E44;
	// bdz 0x82a05e44
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_82A05E44;
	// bdz 0x82a05e64
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_82A05E64;
	// bdz 0x82a05e64
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_82A05E64;
	// bdz 0x82a05e44
	--ctx.ctr.u64;
	if (ctx.ctr.u32 == 0) goto loc_82A05E44;
	// bdnz 0x82a05e64
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82A05E64;
loc_82A05E44:
	// lis r10,-31964
	ctx.r10.s64 = -2094792704;
	// li r8,2
	ctx.r8.s64 = 2;
	// addi r9,r10,29312
	ctx.r9.s64 = ctx.r10.s64 + 29312;
	// stw r8,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r8.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// stw r31,128(r9)
	PPC_STORE_U32(ctx.r9.u32 + 128, ctx.r31.u32);
	// bl 0x82a02220
	ctx.lr = 0x82A05E64;
	sub_82A02220(ctx, base);
loc_82A05E64:
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

__attribute__((alias("__imp__sub_82A05E78"))) PPC_WEAK_FUNC(sub_82A05E78);
PPC_FUNC_IMPL(__imp__sub_82A05E78) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7660
	ctx.lr = 0x82A05E80;
	__savegprlr_22(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31964
	ctx.r11.s64 = -2094792704;
	// li r27,0
	ctx.r27.s64 = 0;
	// addi r31,r11,29312
	ctx.r31.s64 = ctx.r11.s64 + 29312;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r22,r4
	ctx.r22.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r24,r27
	ctx.r24.u64 = ctx.r27.u64;
	// lwz r11,12212(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12212);
	// lwz r26,1128(r31)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1128);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,12212(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12212, ctx.r11.u32);
	// mftb r11
	ctx.r11.u64 = __rdtsc();
	// addi r3,r31,144
	ctx.r3.s64 = ctx.r31.s64 + 144;
	// rotlwi r25,r11,0
	ctx.r25.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x83179274
	ctx.lr = 0x82A05EC0;
	__imp__KfAcquireSpinLock(ctx, base);
	// lwz r30,16(r29)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r29.u32 + 16);
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// stw r27,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r27.u32);
	// stw r22,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r22.u32);
	// blt cr6,0x82a05f10
	if (ctx.cr6.lt) goto loc_82A05F10;
	// lis r11,9
	ctx.r11.s64 = 589824;
	// ori r10,r11,24576
	ctx.r10.u64 = ctx.r11.u64 | 24576;
	// cmplw cr6,r28,r10
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82a05f10
	if (ctx.cr6.eq) goto loc_82A05F10;
	// lis r11,6
	ctx.r11.s64 = 393216;
	// ori r10,r11,29184
	ctx.r10.u64 = ctx.r11.u64 | 29184;
	// cmplw cr6,r28,r10
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82a05f04
	if (!ctx.cr6.eq) goto loc_82A05F04;
	// li r11,128
	ctx.r11.s64 = 128;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// b 0x82a05f10
	goto loc_82A05F10;
loc_82A05F04:
	// lis r11,-16384
	ctx.r11.s64 = -1073741824;
	// ori r10,r11,518
	ctx.r10.u64 = ctx.r11.u64 | 518;
	// stw r10,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r10.u32);
loc_82A05F10:
	// lwz r11,72(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 72);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r25,92(r30)
	PPC_STORE_U32(ctx.r30.u32 + 92, ctx.r25.u32);
	// stw r26,96(r30)
	PPC_STORE_U32(ctx.r30.u32 + 96, ctx.r26.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,88(r30)
	PPC_STORE_U32(ctx.r30.u32 + 88, ctx.r11.u32);
	// blt cr6,0x82a06030
	if (ctx.cr6.lt) goto loc_82A06030;
	// stw r29,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r29.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// li r3,4100
	ctx.r3.s64 = 4100;
	// bl 0x83178d24
	ctx.lr = 0x82A05F40;
	__imp__XamXStudioRequest(ctx, base);
	// rlwinm r10,r3,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0x1;
	// lwz r11,160(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 160);
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r8,r10,-1
	ctx.r8.s64 = ctx.r10.s64 + -1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// and r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 & ctx.r9.u64;
	// beq cr6,0x82a05f9c
	if (ctx.cr6.eq) goto loc_82A05F9C;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r8,r10,0,30,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// lwz r11,160(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 160);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r7,r10,0,26,26
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x20;
	// cmplwi cr6,r7,32
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 32, ctx.xer);
	// bne cr6,0x82a05f80
	if (!ctx.cr6.eq) goto loc_82A05F80;
	// li r27,1
	ctx.r27.s64 = 1;
loc_82A05F80:
	// rlwinm r10,r10,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82a05f90
	if (!ctx.cr6.eq) goto loc_82A05F90;
	// mr r24,r11
	ctx.r24.u64 = ctx.r11.u64;
loc_82A05F90:
	// lwz r11,12208(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12208);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,12208(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12208, ctx.r11.u32);
loc_82A05F9C:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm r10,r9,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x4;
	// ori r11,r11,4
	ctx.r11.u64 = ctx.r11.u64 | 4;
	// cmplwi cr6,r10,4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 4, ctx.xer);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// bne cr6,0x82a05fbc
	if (!ctx.cr6.eq) goto loc_82A05FBC;
	// ori r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 | 32;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
loc_82A05FBC:
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// beq cr6,0x82a05fd0
	if (ctx.cr6.eq) goto loc_82A05FD0;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// ori r10,r11,32
	ctx.r10.u64 = ctx.r11.u64 | 32;
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
loc_82A05FD0:
	// clrlwi r11,r9,30
	ctx.r11.u64 = ctx.r9.u32 & 0x3;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a05fe8
	if (ctx.cr6.eq) goto loc_82A05FE8;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// ori r10,r11,64
	ctx.r10.u64 = ctx.r11.u64 | 64;
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
loc_82A05FE8:
	// lwz r10,12224(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12224);
	// stw r30,160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 160, ctx.r30.u32);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// beq cr6,0x82a06010
	if (ctx.cr6.eq) goto loc_82A06010;
	// lwz r9,72(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 72);
	// lwz r11,12220(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12220);
	// subf r10,r10,r9
	ctx.r10.s64 = ctx.r9.s64 - ctx.r10.s64;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,12220(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12220, ctx.r11.u32);
loc_82A06010:
	// lwz r11,72(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 72);
	// stw r11,12224(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12224, ctx.r11.u32);
	// sync 
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r31,56
	ctx.r3.s64 = ctx.r31.s64 + 56;
	// bl 0x831792b4
	ctx.lr = 0x82A0602C;
	__imp__KeSetEvent(ctx, base);
	// b 0x82a06050
	goto loc_82A06050;
loc_82A06030:
	// lwz r11,12216(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12216);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,12216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12216, ctx.r11.u32);
	// bl 0x82a05b40
	ctx.lr = 0x82A06044;
	sub_82A05B40(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82a06050
	if (ctx.cr6.eq) goto loc_82A06050;
	// mr r24,r30
	ctx.r24.u64 = ctx.r30.u64;
loc_82A06050:
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// addi r3,r31,144
	ctx.r3.s64 = ctx.r31.s64 + 144;
	// bl 0x83179294
	ctx.lr = 0x82A0605C;
	__imp__KfReleaseSpinLock(ctx, base);
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// beq cr6,0x82a0606c
	if (ctx.cr6.eq) goto loc_82A0606C;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82a022a0
	ctx.lr = 0x82A0606C;
	sub_82A022A0(ctx, base);
loc_82A0606C:
	// addi r9,r31,148
	ctx.r9.s64 = ctx.r31.s64 + 148;
loc_82A06070:
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
	// bne 0x82a06070
	if (!ctx.cr0.eq) goto loc_82A06070;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82a060a8
	if (!ctx.cr6.eq) goto loc_82A060A8;
	// sync 
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r31,1472
	ctx.r3.s64 = ctx.r31.s64 + 1472;
	// bl 0x831792b4
	ctx.lr = 0x82A060A8;
	__imp__KeSetEvent(ctx, base);
loc_82A060A8:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82fa76b0
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A060B0"))) PPC_WEAK_FUNC(sub_82A060B0);
PPC_FUNC_IMPL(__imp__sub_82A060B0) {
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
	// lis r11,-31964
	ctx.r11.s64 = -2094792704;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r31,r11,29312
	ctx.r31.s64 = ctx.r11.s64 + 29312;
	// addi r3,r31,144
	ctx.r3.s64 = ctx.r31.s64 + 144;
	// bl 0x83179274
	ctx.lr = 0x82A060D8;
	__imp__KfAcquireSpinLock(ctx, base);
	// lwz r11,160(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 160);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a06104
	if (ctx.cr6.eq) goto loc_82A06104;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// li r9,1
	ctx.r9.s64 = 1;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// rlwimi r10,r9,1,29,30
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r9.u32, 1) & 0x6) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFFF9);
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 160, ctx.r11.u32);
loc_82A06104:
	// addi r3,r31,144
	ctx.r3.s64 = ctx.r31.s64 + 144;
	// bl 0x83179294
	ctx.lr = 0x82A0610C;
	__imp__KfReleaseSpinLock(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82a0618c
	if (ctx.cr6.eq) goto loc_82A0618C;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm r10,r11,0,24,24
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82a0618c
	if (ctx.cr6.eq) goto loc_82A0618C;
	// lwz r11,100(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 100);
	// lis r10,9
	ctx.r10.s64 = 589824;
	// lis r9,6
	ctx.r9.s64 = 393216;
	// ori r31,r10,24576
	ctx.r31.u64 = ctx.r10.u64 | 24576;
	// li r8,30
	ctx.r8.s64 = 30;
	// ori r7,r9,29184
	ctx.r7.u64 = ctx.r9.u64 | 29184;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// stw r8,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r8.u32);
	// stw r7,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r7.u32);
	// lis r5,-31975
	ctx.r5.s64 = -2095513600;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// stw r6,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r6.u32);
	// lwz r4,-12524(r5)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r5.u32 + -12524);
	// mtctr r4
	ctx.ctr.u64 = ctx.r4.u64;
	// bctrl 
	ctx.lr = 0x82A0616C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82a061a8
	if (ctx.cr6.lt) goto loc_82A061A8;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x82a061a8
	if (!ctx.cr6.eq) goto loc_82A061A8;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm r10,r11,0,25,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFF7F;
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
loc_82A0618C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_82A06190:
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
loc_82A061A8:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a02500
	ctx.lr = 0x82A061B0;
	sub_82A02500(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82a06190
	goto loc_82A06190;
}

__attribute__((alias("__imp__sub_82A061B8"))) PPC_WEAK_FUNC(sub_82A061B8);
PPC_FUNC_IMPL(__imp__sub_82A061B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x82A061C0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31964
	ctx.r11.s64 = -2094792704;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r30,r11,29312
	ctx.r30.s64 = ctx.r11.s64 + 29312;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r3,r30,144
	ctx.r3.s64 = ctx.r30.s64 + 144;
	// bl 0x83179274
	ctx.lr = 0x82A061DC;
	__imp__KfAcquireSpinLock(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// rlwinm r10,r11,0,31,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// rlwinm r9,r10,0,29,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x4;
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82a06204
	if (!ctx.cr6.eq) goto loc_82A06204;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a02568
	ctx.lr = 0x82A06200;
	sub_82A02568(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
loc_82A06204:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r30,144
	ctx.r3.s64 = ctx.r30.s64 + 144;
	// bl 0x83179294
	ctx.lr = 0x82A06210;
	__imp__KfReleaseSpinLock(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A0621C"))) PPC_WEAK_FUNC(sub_82A0621C);
PPC_FUNC_IMPL(__imp__sub_82A0621C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A06220"))) PPC_WEAK_FUNC(sub_82A06220);
PPC_FUNC_IMPL(__imp__sub_82A06220) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7658
	ctx.lr = 0x82A06228;
	__savegprlr_20(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31964
	ctx.r11.s64 = -2094792704;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r31,r11,29312
	ctx.r31.s64 = ctx.r11.s64 + 29312;
	// mr r20,r4
	ctx.r20.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// li r22,0
	ctx.r22.s64 = 0;
	// lwz r11,12232(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12232);
	// lwz r28,1128(r31)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1128);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,12232(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12232, ctx.r11.u32);
	// mftb r11
	ctx.r11.u64 = __rdtsc();
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// li r3,4100
	ctx.r3.s64 = 4100;
	// rotlwi r27,r11,0
	ctx.r27.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bl 0x83178d24
	ctx.lr = 0x82A06274;
	__imp__XamXStudioRequest(ctx, base);
	// rlwinm r11,r3,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0x1;
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r3,r31,144
	ctx.r3.s64 = ctx.r31.s64 + 144;
	// addi r8,r11,-1
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// li r25,0
	ctx.r25.s64 = 0;
	// and r7,r8,r9
	ctx.r7.u64 = ctx.r8.u64 & ctx.r9.u64;
	// li r24,0
	ctx.r24.s64 = 0;
	// clrlwi r23,r7,31
	ctx.r23.u64 = ctx.r7.u32 & 0x1;
	// li r26,0
	ctx.r26.s64 = 0;
	// bl 0x83179274
	ctx.lr = 0x82A0629C;
	__imp__KfAcquireSpinLock(ctx, base);
	// lwz r30,16(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// lis r4,-31964
	ctx.r4.s64 = -2094792704;
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// cmpwi cr6,r20,0
	ctx.cr6.compare<int32_t>(ctx.r20.s32, 0, ctx.xer);
	// lwz r6,0(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// stw r20,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r20.u32);
	// rlwinm r5,r6,0,0,30
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r5,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r5.u32);
	// blt cr6,0x82a062d8
	if (ctx.cr6.lt) goto loc_82A062D8;
	// lwz r11,29284(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 29284);
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// beq cr6,0x82a062d8
	if (ctx.cr6.eq) goto loc_82A062D8;
	// lis r11,-16384
	ctx.r11.s64 = -1073741824;
	// ori r10,r11,518
	ctx.r10.u64 = ctx.r11.u64 | 518;
	// stw r10,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r10.u32);
loc_82A062D8:
	// lwz r11,72(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 72);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// stw r27,92(r30)
	PPC_STORE_U32(ctx.r30.u32 + 92, ctx.r27.u32);
	// stw r28,96(r30)
	PPC_STORE_U32(ctx.r30.u32 + 96, ctx.r28.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,88(r30)
	PPC_STORE_U32(ctx.r30.u32 + 88, ctx.r11.u32);
	// blt cr6,0x82a06454
	if (ctx.cr6.lt) goto loc_82A06454;
	// lwz r11,2036(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2036);
	// lwz r6,1592(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1592);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82a0630c
	if (!ctx.cr6.eq) goto loc_82A0630C;
	// cmpwi cr6,r6,-1
	ctx.cr6.compare<int32_t>(ctx.r6.s32, -1, ctx.xer);
	// beq cr6,0x82a0642c
	if (ctx.cr6.eq) goto loc_82A0642C;
loc_82A0630C:
	// lwz r11,1604(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1604);
	// li r26,1
	ctx.r26.s64 = 1;
	// lwz r10,1596(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1596);
	// lwz r7,1600(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1600);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x82a06388
	if (!ctx.cr6.eq) goto loc_82A06388;
	// rotlwi r11,r10,0
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// cmpw cr6,r11,r7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r7.s32, ctx.xer);
	// bne cr6,0x82a06388
	if (!ctx.cr6.eq) goto loc_82A06388;
	// lwz r8,1616(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1616);
	// lwz r11,1640(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1640);
	// cmplw cr6,r8,r11
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82a0638c
	if (!ctx.cr6.eq) goto loc_82A0638C;
	// lwz r9,1620(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1620);
	// lwz r11,1644(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1644);
	// cmpw cr6,r9,r11
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x82a0638c
	if (!ctx.cr6.eq) goto loc_82A0638C;
	// lwz r10,1624(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1624);
	// lwz r11,1648(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1648);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x82a0638c
	if (!ctx.cr6.eq) goto loc_82A0638C;
	// lwz r11,1628(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1628);
	// cmplw cr6,r8,r11
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82a0638c
	if (!ctx.cr6.eq) goto loc_82A0638C;
	// lwz r11,1632(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1632);
	// cmpw cr6,r9,r11
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x82a0638c
	if (!ctx.cr6.eq) goto loc_82A0638C;
	// lwz r11,1636(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1636);
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x82a06390
	if (ctx.cr6.eq) goto loc_82A06390;
	// b 0x82a0638c
	goto loc_82A0638C;
loc_82A06388:
	// li r25,1
	ctx.r25.s64 = 1;
loc_82A0638C:
	// li r24,1
	ctx.r24.s64 = 1;
loc_82A06390:
	// cmpwi cr6,r6,-1
	ctx.cr6.compare<int32_t>(ctx.r6.s32, -1, ctx.xer);
	// beq cr6,0x82a0642c
	if (ctx.cr6.eq) goto loc_82A0642C;
	// lwz r11,2040(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2040);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,2040(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2040, ctx.r11.u32);
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// bge cr6,0x82a063f0
	if (!ctx.cr6.lt) goto loc_82A063F0;
	// lbz r10,52(r30)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r30.u32 + 52);
	// subf r9,r6,r10
	ctx.r9.s64 = ctx.r10.s64 - ctx.r6.s64;
	// extsb r6,r9
	ctx.r6.s64 = ctx.r9.s8;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// bge cr6,0x82a063c8
	if (!ctx.cr6.lt) goto loc_82A063C8;
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// beq cr6,0x82a06434
	if (ctx.cr6.eq) goto loc_82A06434;
loc_82A063C8:
	// lwz r10,1628(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1628);
	// li r11,-1
	ctx.r11.s64 = -1;
	// lwz r9,1632(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1632);
	// lwz r8,1636(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1636);
	// stw r11,1592(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1592, ctx.r11.u32);
	// stw r7,1596(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1596, ctx.r7.u32);
	// stw r10,1616(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1616, ctx.r10.u32);
	// stw r9,1620(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1620, ctx.r9.u32);
	// stw r8,1624(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1624, ctx.r8.u32);
	// b 0x82a0642c
	goto loc_82A0642C;
loc_82A063F0:
	// lwz r9,1628(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1628);
	// li r11,-1
	ctx.r11.s64 = -1;
	// lwz r8,1632(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1632);
	// lwz r6,1636(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1636);
	// lwz r10,2036(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2036);
	// stw r11,1592(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1592, ctx.r11.u32);
	// stw r7,1596(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1596, ctx.r7.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r9,1616(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1616, ctx.r9.u32);
	// stw r8,1620(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1620, ctx.r8.u32);
	// stw r6,1624(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1624, ctx.r6.u32);
	// bne cr6,0x82a0642c
	if (!ctx.cr6.eq) goto loc_82A0642C;
	// li r26,0
	ctx.r26.s64 = 0;
	// li r25,0
	ctx.r25.s64 = 0;
	// li r24,0
	ctx.r24.s64 = 0;
loc_82A0642C:
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// bne cr6,0x82a06454
	if (!ctx.cr6.eq) goto loc_82A06454;
loc_82A06434:
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// bne cr6,0x82a06450
	if (!ctx.cr6.eq) goto loc_82A06450;
	// lwz r11,1596(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1596);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82a06454
	if (!ctx.cr6.eq) goto loc_82A06454;
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// beq cr6,0x82a06454
	if (ctx.cr6.eq) goto loc_82A06454;
loc_82A06450:
	// mr r22,r30
	ctx.r22.u64 = ctx.r30.u64;
loc_82A06454:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x82a06548
	if (ctx.cr6.lt) goto loc_82A06548;
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 0, ctx.xer);
	// bne cr6,0x82a06538
	if (!ctx.cr6.eq) goto loc_82A06538;
	// lwz r11,1616(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1616);
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// stw r11,108(r30)
	PPC_STORE_U32(ctx.r30.u32 + 108, ctx.r11.u32);
	// lwz r10,1620(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1620);
	// stw r10,112(r30)
	PPC_STORE_U32(ctx.r30.u32 + 112, ctx.r10.u32);
	// lwz r9,1624(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1624);
	// stw r9,116(r30)
	PPC_STORE_U32(ctx.r30.u32 + 116, ctx.r9.u32);
	// lwz r11,1596(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1596);
	// stw r11,120(r30)
	PPC_STORE_U32(ctx.r30.u32 + 120, ctx.r11.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// ori r10,r11,256
	ctx.r10.u64 = ctx.r11.u64 | 256;
	// bne cr6,0x82a0649c
	if (!ctx.cr6.eq) goto loc_82A0649C;
	// rlwinm r10,r11,0,24,22
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFEFF;
loc_82A0649C:
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// lwz r11,684(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 684);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a064dc
	if (ctx.cr6.eq) goto loc_82A064DC;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r9,r10,0,30,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFB;
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// lwz r11,684(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 684);
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r7,r8,0,30,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x2;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x82a064d0
	if (!ctx.cr6.eq) goto loc_82A064D0;
	// mr r22,r11
	ctx.r22.u64 = ctx.r11.u64;
loc_82A064D0:
	// lwz r11,12228(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12228);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,12228(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12228, ctx.r11.u32);
loc_82A064DC:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// ori r10,r11,4
	ctx.r10.u64 = ctx.r11.u64 | 4;
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// stw r30,684(r31)
	PPC_STORE_U32(ctx.r31.u32 + 684, ctx.r30.u32);
	// lwz r10,12244(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12244);
	// cmpwi cr6,r10,-1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, -1, ctx.xer);
	// beq cr6,0x82a06510
	if (ctx.cr6.eq) goto loc_82A06510;
	// lwz r9,72(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 72);
	// lwz r11,12240(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12240);
	// subf r10,r10,r9
	ctx.r10.s64 = ctx.r9.s64 - ctx.r10.s64;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,12240(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12240, ctx.r11.u32);
loc_82A06510:
	// lwz r11,72(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 72);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r10,136(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// lwz r9,29284(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 29284);
	// stw r11,12244(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12244, ctx.r11.u32);
	// lwz r11,104(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 104);
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r4,r3,r9
	ctx.r4.u64 = ctx.r3.u64 + ctx.r9.u64;
	// bl 0x82680e48
	ctx.lr = 0x82A06534;
	sub_82680E48(ctx, base);
	// b 0x82a06574
	goto loc_82A06574;
loc_82A06538:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x82a06548
	if (ctx.cr6.lt) goto loc_82A06548;
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 0, ctx.xer);
	// beq cr6,0x82a06574
	if (ctx.cr6.eq) goto loc_82A06574;
loc_82A06548:
	// lwz r11,12236(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12236);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,12236(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12236, ctx.r11.u32);
	// bl 0x82a05b40
	ctx.lr = 0x82A0655C;
	sub_82A05B40(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82a0656c
	if (ctx.cr6.eq) goto loc_82A0656C;
	// mr r22,r30
	ctx.r22.u64 = ctx.r30.u64;
	// b 0x82a06574
	goto loc_82A06574;
loc_82A0656C:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 128, ctx.r11.u32);
loc_82A06574:
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// addi r3,r31,144
	ctx.r3.s64 = ctx.r31.s64 + 144;
	// bl 0x83179294
	ctx.lr = 0x82A06580;
	__imp__KfReleaseSpinLock(ctx, base);
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 0, ctx.xer);
	// beq cr6,0x82a06590
	if (ctx.cr6.eq) goto loc_82A06590;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x82a02568
	ctx.lr = 0x82A06590;
	sub_82A02568(ctx, base);
loc_82A06590:
	// addi r9,r31,680
	ctx.r9.s64 = ctx.r31.s64 + 680;
loc_82A06594:
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
	// bne 0x82a06594
	if (!ctx.cr0.eq) goto loc_82A06594;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82a065cc
	if (!ctx.cr6.eq) goto loc_82A065CC;
	// sync 
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r31,1472
	ctx.r3.s64 = ctx.r31.s64 + 1472;
	// bl 0x831792b4
	ctx.lr = 0x82A065CC;
	__imp__KeSetEvent(ctx, base);
loc_82A065CC:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82fa76a8
	__restgprlr_20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A065D4"))) PPC_WEAK_FUNC(sub_82A065D4);
PPC_FUNC_IMPL(__imp__sub_82A065D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A065D8"))) PPC_WEAK_FUNC(sub_82A065D8);
PPC_FUNC_IMPL(__imp__sub_82A065D8) {
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
	// lis r11,-31964
	ctx.r11.s64 = -2094792704;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r31,r11,29312
	ctx.r31.s64 = ctx.r11.s64 + 29312;
	// lwz r11,1104(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1104);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a06674
	if (ctx.cr6.eq) goto loc_82A06674;
	// addi r3,r31,1368
	ctx.r3.s64 = ctx.r31.s64 + 1368;
	// bl 0x83179274
	ctx.lr = 0x82A0660C;
	__imp__KfAcquireSpinLock(ctx, base);
	// lwz r11,1112(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1112);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82a0662c
	if (ctx.cr6.eq) goto loc_82A0662C;
	// subf r11,r11,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r11.s64;
	// addis r9,r11,-4
	ctx.r9.s64 = ctx.r11.s64 + -262144;
	// addi r9,r9,-12856
	ctx.r9.s64 = ctx.r9.s64 + -12856;
	// b 0x82a06638
	goto loc_82A06638;
loc_82A0662C:
	// lis r10,21
	ctx.r10.s64 = 1376256;
	// ori r9,r10,15410
	ctx.r9.u64 = ctx.r10.u64 | 15410;
	// subf r9,r11,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r11.s64;
loc_82A06638:
	// lwz r11,1372(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1372);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82a06658
	if (!ctx.cr6.eq) goto loc_82A06658;
	// lwz r11,1420(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1420);
	// addi r10,r31,1388
	ctx.r10.s64 = ctx.r31.s64 + 1388;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,1372(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1372, ctx.r11.u32);
loc_82A06658:
	// stw r30,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r30.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r11,1372(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1372);
	// addi r3,r31,1368
	ctx.r3.s64 = ctx.r31.s64 + 1368;
	// stw r9,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r9.u32);
	// stw r10,1148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1148, ctx.r10.u32);
	// bl 0x83179294
	ctx.lr = 0x82A06674;
	__imp__KfReleaseSpinLock(ctx, base);
loc_82A06674:
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

__attribute__((alias("__imp__sub_82A0668C"))) PPC_WEAK_FUNC(sub_82A0668C);
PPC_FUNC_IMPL(__imp__sub_82A0668C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A06690"))) PPC_WEAK_FUNC(sub_82A06690);
PPC_FUNC_IMPL(__imp__sub_82A06690) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7668
	ctx.lr = 0x82A06698;
	__savegprlr_24(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31964
	ctx.r11.s64 = -2094792704;
	// addi r31,r11,29312
	ctx.r31.s64 = ctx.r11.s64 + 29312;
	// lwz r11,10668(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10668);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82a068ac
	if (!ctx.cr6.eq) goto loc_82A068AC;
	// lwz r11,10672(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10672);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82a068ac
	if (!ctx.cr6.eq) goto loc_82A068AC;
	// lwz r11,10676(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10676);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82a068ac
	if (!ctx.cr6.eq) goto loc_82A068AC;
	// lis r11,-31975
	ctx.r11.s64 = -2095513600;
	// addi r24,r11,-12452
	ctx.r24.s64 = ctx.r11.s64 + -12452;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x831791a4
	ctx.lr = 0x82A066D8;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lis r4,8348
	ctx.r4.s64 = 547094528;
	// li r3,2736
	ctx.r3.s64 = 2736;
	// bl 0x82691410
	ctx.lr = 0x82A066E4;
	sub_82691410(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a06890
	if (ctx.cr6.eq) goto loc_82A06890;
	// stw r3,10668(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10668, ctx.r3.u32);
	// lis r4,8348
	ctx.r4.s64 = 547094528;
	// li r3,120
	ctx.r3.s64 = 120;
	// bl 0x82691410
	ctx.lr = 0x82A06700;
	sub_82691410(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a06890
	if (ctx.cr6.eq) goto loc_82A06890;
	// lis r4,8348
	ctx.r4.s64 = 547094528;
	// li r3,120
	ctx.r3.s64 = 120;
	// bl 0x82691410
	ctx.lr = 0x82A06718;
	sub_82691410(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a06890
	if (ctx.cr6.eq) goto loc_82A06890;
	// li r5,2736
	ctx.r5.s64 = 2736;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82fa7cf0
	ctx.lr = 0x82A06734;
	sub_82FA7CF0(ctx, base);
	// li r5,120
	ctx.r5.s64 = 120;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82fa7cf0
	ctx.lr = 0x82A06744;
	sub_82FA7CF0(ctx, base);
	// li r5,120
	ctx.r5.s64 = 120;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82fa7cf0
	ctx.lr = 0x82A06754;
	sub_82FA7CF0(ctx, base);
	// lis r3,2
	ctx.r3.s64 = 131072;
	// lis r4,-21348
	ctx.r4.s64 = -1399062528;
	// ori r3,r3,53248
	ctx.r3.u64 = ctx.r3.u64 | 53248;
	// bl 0x82a3df10
	ctx.lr = 0x82A06764;
	sub_82A3DF10(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,100(r28)
	PPC_STORE_U32(ctx.r28.u32 + 100, ctx.r3.u32);
	// beq cr6,0x82a06890
	if (ctx.cr6.eq) goto loc_82A06890;
	// lis r7,6690
	ctx.r7.s64 = 438435840;
	// li r29,0
	ctx.r29.s64 = 0;
	// li r25,1
	ctx.r25.s64 = 1;
	// li r27,-1
	ctx.r27.s64 = -1;
	// stw r29,20(r28)
	PPC_STORE_U32(ctx.r28.u32 + 20, ctx.r29.u32);
	// addi r26,r28,48
	ctx.r26.s64 = ctx.r28.s64 + 48;
	// stw r25,24(r28)
	PPC_STORE_U32(ctx.r28.u32 + 24, ctx.r25.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r29,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r29.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r26,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r26.u32);
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r29,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r29.u32);
	// ori r7,r7,88
	ctx.r7.u64 = ctx.r7.u64 | 88;
	// stw r29,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r29.u32);
	// li r6,4
	ctx.r6.s64 = 4;
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,240
	ctx.r4.s64 = 240;
	// li r3,320
	ctx.r3.s64 = 320;
	// bl 0x82af41e0
	ctx.lr = 0x82A067C4;
	sub_82AF41E0(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// lwz r4,100(r28)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + 100);
	// bl 0x82af44c8
	ctx.lr = 0x82A067D0;
	sub_82AF44C8(ctx, base);
	// stw r26,28(r28)
	PPC_STORE_U32(ctx.r28.u32 + 28, ctx.r26.u32);
	// stw r28,10672(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10672, ctx.r28.u32);
	// lis r3,18
	ctx.r3.s64 = 1179648;
	// lis r4,-21348
	ctx.r4.s64 = -1399062528;
	// ori r3,r3,49152
	ctx.r3.u64 = ctx.r3.u64 | 49152;
	// bl 0x82a3df10
	ctx.lr = 0x82A067E8;
	sub_82A3DF10(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,100(r30)
	PPC_STORE_U32(ctx.r30.u32 + 100, ctx.r3.u32);
	// beq cr6,0x82a06890
	if (ctx.cr6.eq) goto loc_82A06890;
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r25,20(r30)
	PPC_STORE_U32(ctx.r30.u32 + 20, ctx.r25.u32);
	// lis r3,-31964
	ctx.r3.s64 = -2094792704;
	// stw r29,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r29.u32);
	// stw r11,24(r30)
	PPC_STORE_U32(ctx.r30.u32 + 24, ctx.r11.u32);
	// lis r11,-31964
	ctx.r11.s64 = -2094792704;
	// lis r7,10280
	ctx.r7.s64 = 673710080;
	// stw r29,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r29.u32);
	// addi r28,r30,48
	ctx.r28.s64 = ctx.r30.s64 + 48;
	// stw r29,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r29.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r28,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r28.u32);
	// lwz r4,29292(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 29292);
	// li r8,0
	ctx.r8.s64 = 0;
	// ori r7,r7,32434
	ctx.r7.u64 = ctx.r7.u64 | 32434;
	// li r6,4
	ctx.r6.s64 = 4;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,29296(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 29296);
	// bl 0x82af41e0
	ctx.lr = 0x82A06848;
	sub_82AF41E0(ctx, base);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r4,100(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 100);
	// bl 0x82af44c8
	ctx.lr = 0x82A06854;
	sub_82AF44C8(ctx, base);
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
	// addi r9,r31,10644
	ctx.r9.s64 = ctx.r31.s64 + 10644;
	// stw r28,28(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28, ctx.r28.u32);
	// addi r11,r31,10644
	ctx.r11.s64 = ctx.r31.s64 + 10644;
	// stb r25,10636(r31)
	PPC_STORE_U8(ctx.r31.u32 + 10636, ctx.r25.u8);
	// stw r30,10676(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10676, ctx.r30.u32);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// stw r29,10640(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10640, ctx.r29.u32);
	// mr r10,r29
	ctx.r10.u64 = ctx.r29.u64;
	// stw r9,10644(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10644, ctx.r9.u32);
	// stw r11,10648(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10648, ctx.r11.u32);
	// bl 0x831791b4
	ctx.lr = 0x82A06884;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82fa76b8
	__restgprlr_24(ctx, base);
	return;
loc_82A06890:
	// lis r29,-32761
	ctx.r29.s64 = -2147024896;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// ori r29,r29,14
	ctx.r29.u64 = ctx.r29.u64 | 14;
	// bl 0x831791b4
	ctx.lr = 0x82A068A0;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82fa76b8
	__restgprlr_24(ctx, base);
	return;
loc_82A068AC:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,1247
	ctx.r3.u64 = ctx.r3.u64 | 1247;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82fa76b8
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A068BC"))) PPC_WEAK_FUNC(sub_82A068BC);
PPC_FUNC_IMPL(__imp__sub_82A068BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A068C0"))) PPC_WEAK_FUNC(sub_82A068C0);
PPC_FUNC_IMPL(__imp__sub_82A068C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7648
	ctx.lr = 0x82A068C8;
	__savegprlr_16(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31964
	ctx.r11.s64 = -2094792704;
	// li r17,0
	ctx.r17.s64 = 0;
	// addi r30,r11,29312
	ctx.r30.s64 = ctx.r11.s64 + 29312;
	// mr r18,r3
	ctx.r18.u64 = ctx.r3.u64;
	// mr r23,r17
	ctx.r23.u64 = ctx.r17.u64;
	// mr r24,r17
	ctx.r24.u64 = ctx.r17.u64;
	// li r16,1
	ctx.r16.s64 = 1;
	// lwz r11,12276(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12276);
	// mr r29,r17
	ctx.r29.u64 = ctx.r17.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82a0696c
	if (!ctx.cr6.eq) goto loc_82A0696C;
	// addi r3,r30,12272
	ctx.r3.s64 = ctx.r30.s64 + 12272;
	// bl 0x83179274
	ctx.lr = 0x82A06900;
	__imp__KfAcquireSpinLock(ctx, base);
	// lwz r11,12288(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12288);
	// addi r10,r30,12264
	ctx.r10.s64 = ctx.r30.s64 + 12264;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lwzx r24,r9,r10
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// beq cr6,0x82a06964
	if (ctx.cr6.eq) goto loc_82A06964;
	// lwz r11,52(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 52);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82a06964
	if (!ctx.cr6.eq) goto loc_82A06964;
	// addi r9,r30,12256
	ctx.r9.s64 = ctx.r30.s64 + 12256;
loc_82A0692C:
	// mfmsr r10
	ctx.r10.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r9
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r9.u32);
	ctx.r11.u64 = __builtin_bswap32(ctx.reserved.u32);
	// stwcx. r17,0,r9
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r9.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r17.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r10,1
	ctx.msr = (ctx.r10.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x82a0692c
	if (!ctx.cr0.eq) goto loc_82A0692C;
	// mr r23,r11
	ctx.r23.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a06964
	if (ctx.cr6.eq) goto loc_82A06964;
	// mftb r11
	ctx.r11.u64 = __rdtsc();
	// stw r11,1136(r30)
	PPC_STORE_U32(ctx.r30.u32 + 1136, ctx.r11.u32);
	// lwz r29,28(r24)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r24.u32 + 28);
	// stw r23,52(r24)
	PPC_STORE_U32(ctx.r24.u32 + 52, ctx.r23.u32);
	// stw r16,12276(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12276, ctx.r16.u32);
loc_82A06964:
	// addi r3,r30,12272
	ctx.r3.s64 = ctx.r30.s64 + 12272;
	// bl 0x83179294
	ctx.lr = 0x82A0696C;
	__imp__KfReleaseSpinLock(ctx, base);
loc_82A0696C:
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// li r5,8
	ctx.r5.s64 = 8;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// li r3,10
	ctx.r3.s64 = 10;
	// std r17,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r17.u64);
	// stw r17,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r17.u32);
	// stw r24,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r24.u32);
	// bl 0x82a3de38
	ctx.lr = 0x82A0698C;
	sub_82A3DE38(ctx, base);
	// mr r19,r17
	ctx.r19.u64 = ctx.r17.u64;
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82a06ac4
	if (ctx.cr6.eq) goto loc_82A06AC4;
	// bl 0x82a02488
	ctx.lr = 0x82A0699C;
	sub_82A02488(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,15636(r23)
	PPC_STORE_U32(ctx.r23.u32 + 15636, ctx.r3.u32);
	// beq cr6,0x82a06a08
	if (ctx.cr6.eq) goto loc_82A06A08;
	// lwz r11,120(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 120);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82a069dc
	if (!ctx.cr6.eq) goto loc_82A069DC;
	// lwz r11,10656(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 10656);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82a069cc
	if (!ctx.cr6.eq) goto loc_82A069CC;
	// bl 0x82a061b8
	ctx.lr = 0x82A069C4;
	sub_82A061B8(ctx, base);
	// stw r17,15636(r23)
	PPC_STORE_U32(ctx.r23.u32 + 15636, ctx.r17.u32);
	// b 0x82a06a08
	goto loc_82A06A08;
loc_82A069CC:
	// rlwinm r11,r29,0,31,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF9;
	// rlwinm r11,r11,0,24,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFEFF;
	// ori r29,r11,512
	ctx.r29.u64 = ctx.r11.u64 | 512;
	// b 0x82a06a08
	goto loc_82A06A08;
loc_82A069DC:
	// lwz r11,10904(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 10904);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82a06a08
	if (ctx.cr6.eq) goto loc_82A06A08;
	// ori r29,r29,1024
	ctx.r29.u64 = ctx.r29.u64 | 1024;
	// addi r9,r30,10908
	ctx.r9.s64 = ctx.r30.s64 + 10908;
loc_82A069F0:
	// mfmsr r10
	ctx.r10.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r9
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r9.u32);
	ctx.r11.u64 = __builtin_bswap32(ctx.reserved.u32);
	// stwcx. r16,0,r9
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r9.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r16.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r10,1
	ctx.msr = (ctx.r10.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x82a069f0
	if (!ctx.cr0.eq) goto loc_82A069F0;
loc_82A06A08:
	// lwz r10,15632(r23)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r23.u32 + 15632);
	// addi r22,r23,15360
	ctx.r22.s64 = ctx.r23.s64 + 15360;
	// lwz r9,15640(r23)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r23.u32 + 15640);
	// lwz r11,15636(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 15636);
	// rlwinm r21,r9,30,2,31
	ctx.r21.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 30) & 0x3FFFFFFF;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r8,104(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 104);
	// rlwinm r20,r8,29,3,31
	ctx.r20.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 29) & 0x1FFFFFFF;
	// beq cr6,0x82a06a44
	if (ctx.cr6.eq) goto loc_82A06A44;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,104(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 104);
	// rlwinm r10,r10,0,25,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x40;
	// rlwinm r19,r11,30,2,31
	ctx.r19.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// b 0x82a06a4c
	goto loc_82A06A4C;
loc_82A06A44:
	// rlwinm r29,r29,0,31,28
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF9;
	// rlwinm r29,r29,0,24,22
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0xFFFFFFFFFFFFFEFF;
loc_82A06A4C:
	// rlwinm r11,r29,0,22,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0x200;
	// lwz r25,32(r24)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r24.u32 + 32);
	// mr r26,r17
	ctx.r26.u64 = ctx.r17.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82a06a64
	if (!ctx.cr6.eq) goto loc_82A06A64;
	// lwz r26,36(r24)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r24.u32 + 36);
loc_82A06A64:
	// rlwinm r11,r29,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0x20;
	// lwz r31,40(r24)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r24.u32 + 40);
	// lwz r28,44(r24)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r24.u32 + 44);
	// lwz r27,48(r24)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r24.u32 + 48);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a06a98
	if (ctx.cr6.eq) goto loc_82A06A98;
	// bl 0x83179674
	ctx.lr = 0x82A06A80;
	__imp__KeSaveFloatingPointState(ctx, base);
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82a06a94
	if (!ctx.cr6.eq) goto loc_82A06A94;
	// addi r3,r23,15392
	ctx.r3.s64 = ctx.r23.s64 + 15392;
	// bl 0x82a3dda8
	ctx.lr = 0x82A06A94;
	sub_82A3DDA8(ctx, base);
loc_82A06A94:
	// bl 0x83179664
	ctx.lr = 0x82A06A98;
	__imp__KeRestoreFloatingPointState(ctx, base);
loc_82A06A98:
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// stw r27,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r27.u32);
	// mr r9,r31
	ctx.r9.u64 = ctx.r31.u64;
	// mr r8,r26
	ctx.r8.u64 = ctx.r26.u64;
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// mr r6,r19
	ctx.r6.u64 = ctx.r19.u64;
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x82a3e148
	ctx.lr = 0x82A06AC0;
	sub_82A3E148(ctx, base);
	// stw r29,28(r24)
	PPC_STORE_U32(ctx.r24.u32 + 28, ctx.r29.u32);
loc_82A06AC4:
	// mr r8,r17
	ctx.r8.u64 = ctx.r17.u64;
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// beq cr6,0x82a06b00
	if (ctx.cr6.eq) goto loc_82A06B00;
	// lwz r11,15576(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 15576);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82a06ae0
	if (ctx.cr6.eq) goto loc_82A06AE0;
	// mr r8,r16
	ctx.r8.u64 = ctx.r16.u64;
loc_82A06AE0:
	// lwz r11,15580(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 15580);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82a06af0
	if (ctx.cr6.eq) goto loc_82A06AF0;
	// ori r8,r8,2
	ctx.r8.u64 = ctx.r8.u64 | 2;
loc_82A06AF0:
	// lwz r11,15584(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 15584);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82a06b00
	if (ctx.cr6.eq) goto loc_82A06B00;
	// ori r8,r8,4
	ctx.r8.u64 = ctx.r8.u64 | 4;
loc_82A06B00:
	// rlwinm r11,r18,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r18.u32 | (ctx.r18.u64 << 32), 1) & 0xFFFFFFFE;
	// lis r10,0
	ctx.r10.s64 = 0;
	// add r9,r18,r11
	ctx.r9.u64 = ctx.r18.u64 + ctx.r11.u64;
	// ori r7,r10,59852
	ctx.r7.u64 = ctx.r10.u64 | 59852;
	// subfic r6,r29,0
	ctx.xer.ca = ctx.r29.u32 <= 0;
	ctx.r6.s64 = 0 - ctx.r29.s64;
	// rlwinm r9,r9,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 4) & 0xFFFFFFF0;
	// addi r10,r30,12296
	ctx.r10.s64 = ctx.r30.s64 + 12296;
	// subfe r4,r5,r5
	temp.u8 = (~ctx.r5.u32 + ctx.r5.u32 < ~ctx.r5.u32) | (~ctx.r5.u32 + ctx.r5.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r4.u64 = ~ctx.r5.u64 + ctx.r5.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// lwzx r11,r30,r7
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r7.u32);
	// add r31,r9,r10
	ctx.r31.u64 = ctx.r9.u64 + ctx.r10.u64;
	// rlwinm r3,r29,0,26,26
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0x20;
	// and r11,r4,r11
	ctx.r11.u64 = ctx.r4.u64 & ctx.r11.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r29,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r29.u32);
	// beq cr6,0x82a06b4c
	if (ctx.cr6.eq) goto loc_82A06B4C;
	// lwz r11,11240(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 11240);
	// addi r11,r11,236
	ctx.r11.s64 = ctx.r11.s64 + 236;
	// b 0x82a06b50
	goto loc_82A06B50;
loc_82A06B4C:
	// mr r11,r17
	ctx.r11.u64 = ctx.r17.u64;
loc_82A06B50:
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// subfic r10,r29,0
	ctx.xer.ca = ctx.r29.u32 <= 0;
	ctx.r10.s64 = 0 - ctx.r29.s64;
	// subfe r7,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r7.u64 = ~ctx.r9.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// lwz r11,12084(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12084);
	// and r6,r7,r11
	ctx.r6.u64 = ctx.r7.u64 & ctx.r11.u64;
	// stw r6,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r6.u32);
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r11,r16
	ctx.r11.u64 = ctx.r16.u64;
	// bne cr6,0x82a06b7c
	if (!ctx.cr6.eq) goto loc_82A06B7C;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
loc_82A06B7C:
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a017b0
	ctx.lr = 0x82A06B88;
	sub_82A017B0(ctx, base);
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// beq cr6,0x82a06b98
	if (ctx.cr6.eq) goto loc_82A06B98;
	// mftb r11
	ctx.r11.u64 = __rdtsc();
	// stw r11,56(r24)
	PPC_STORE_U32(ctx.r24.u32 + 56, ctx.r11.u32);
loc_82A06B98:
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// li r5,12
	ctx.r5.s64 = 12;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// li r3,11
	ctx.r3.s64 = 11;
	// std r17,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r17.u64);
	// stw r17,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r17.u32);
	// stw r17,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r17.u32);
	// stw r24,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r24.u32);
	// stw r31,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r31.u32);
	// bl 0x82a3de38
	ctx.lr = 0x82A06BC0;
	sub_82A3DE38(ctx, base);
	// sync 
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x82fa7698
	__restgprlr_16(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A06BCC"))) PPC_WEAK_FUNC(sub_82A06BCC);
PPC_FUNC_IMPL(__imp__sub_82A06BCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A06BD0"))) PPC_WEAK_FUNC(sub_82A06BD0);
PPC_FUNC_IMPL(__imp__sub_82A06BD0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7674
	ctx.lr = 0x82A06BD8;
	__savegprlr_27(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31964
	ctx.r11.s64 = -2094792704;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r31,r11,29312
	ctx.r31.s64 = ctx.r11.s64 + 29312;
	// addi r9,r31,12296
	ctx.r9.s64 = ctx.r31.s64 + 12296;
	// lwz r11,12536(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12536);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r11,r11,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// add r29,r11,r9
	ctx.r29.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stw r30,44(r29)
	PPC_STORE_U32(ctx.r29.u32 + 44, ctx.r30.u32);
	// sync 
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// li r5,12
	ctx.r5.s64 = 12;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// li r3,8
	ctx.r3.s64 = 8;
	// std r30,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r30.u64);
	// stw r30,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r30.u32);
	// stw r29,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r29.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// bl 0x82a3de38
	ctx.lr = 0x82A06C34;
	sub_82A3DE38(ctx, base);
	// lwz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// bl 0x8266edf8
	ctx.lr = 0x82A06C3C;
	sub_8266EDF8(ctx, base);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// bl 0x826792f8
	ctx.lr = 0x82A06C48;
	sub_826792F8(ctx, base);
	// lis r9,-32096
	ctx.r9.s64 = -2103443456;
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r6,12536(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12536);
	// addi r5,r9,26816
	ctx.r5.s64 = ctx.r9.s64 + 26816;
	// lwz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// bl 0x826775c0
	ctx.lr = 0x82A06C60;
	sub_826775C0(ctx, base);
	// li r6,112
	ctx.r6.s64 = 112;
	// li r5,16
	ctx.r5.s64 = 16;
	// lwz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82668e90
	ctx.lr = 0x82A06C74;
	sub_82668E90(ctx, base);
	// addi r8,r1,152
	ctx.r8.s64 = ctx.r1.s64 + 152;
	// addi r11,r1,104
	ctx.r11.s64 = ctx.r1.s64 + 104;
	// std r30,144(r1)
	PPC_STORE_U64(ctx.r1.u32 + 144, ctx.r30.u64);
	// std r30,96(r1)
	PPC_STORE_U64(ctx.r1.u32 + 96, ctx.r30.u64);
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// lis r6,24576
	ctx.r6.s64 = 1610612736;
	// lwz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// std r30,0(r8)
	PPC_STORE_U64(ctx.r8.u32 + 0, ctx.r30.u64);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// std r30,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r30.u64);
	// std r30,8(r8)
	PPC_STORE_U64(ctx.r8.u32 + 8, ctx.r30.u64);
	// std r30,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r30.u64);
	// std r30,16(r8)
	PPC_STORE_U64(ctx.r8.u32 + 16, ctx.r30.u64);
	// std r30,16(r11)
	PPC_STORE_U64(ctx.r11.u32 + 16, ctx.r30.u64);
	// std r30,24(r8)
	PPC_STORE_U64(ctx.r8.u32 + 24, ctx.r30.u64);
	// std r30,24(r11)
	PPC_STORE_U64(ctx.r11.u32 + 24, ctx.r30.u64);
	// bl 0x8267c7c0
	ctx.lr = 0x82A06CBC;
	sub_8267C7C0(ctx, base);
	// lis r10,-32096
	ctx.r10.s64 = -2103443456;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// addi r5,r10,5912
	ctx.r5.s64 = ctx.r10.s64 + 5912;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x826775c0
	ctx.lr = 0x82A06CD4;
	sub_826775C0(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82a06cec
	if (!ctx.cr6.eq) goto loc_82A06CEC;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82a06d30
	if (ctx.cr6.eq) goto loc_82A06D30;
loc_82A06CEC:
	// addi r7,r29,12
	ctx.r7.s64 = ctx.r29.s64 + 12;
	// lwz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// lis r6,24576
	ctx.r6.s64 = 1610612736;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// bl 0x8267c7c0
	ctx.lr = 0x82A06D04;
	sub_8267C7C0(ctx, base);
	// addi r27,r29,16
	ctx.r27.s64 = ctx.r29.s64 + 16;
	// li r28,3
	ctx.r28.s64 = 3;
loc_82A06D0C:
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// lwz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// lis r6,24576
	ctx.r6.s64 = 1610612736;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// bl 0x8267c7c0
	ctx.lr = 0x82A06D24;
	sub_8267C7C0(ctx, base);
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// addi r27,r27,4
	ctx.r27.s64 = ctx.r27.s64 + 4;
	// bne 0x82a06d0c
	if (!ctx.cr0.eq) goto loc_82A06D0C;
loc_82A06D30:
	// lwz r11,11244(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11244);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82a06d54
	if (ctx.cr6.eq) goto loc_82A06D54;
	// addi r7,r29,36
	ctx.r7.s64 = ctx.r29.s64 + 36;
	// lwz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// lis r6,24576
	ctx.r6.s64 = 1610612736;
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// bl 0x8267c7c0
	ctx.lr = 0x82A06D54;
	sub_8267C7C0(ctx, base);
loc_82A06D54:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82a017b0
	ctx.lr = 0x82A06D5C;
	sub_82A017B0(ctx, base);
	// lwz r11,12536(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12536);
	// lis r10,-13108
	ctx.r10.s64 = -859045888;
	// lwz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// ori r9,r10,52429
	ctx.r9.u64 = ctx.r10.u64 | 52429;
	// li r6,0
	ctx.r6.s64 = 0;
	// mulhwu r8,r11,r9
	ctx.r8.u64 = (uint64_t(ctx.r11.u32) * uint64_t(ctx.r9.u32)) >> 32;
	// rlwinm r10,r8,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 30) & 0x3FFFFFFF;
	// li r5,0
	ctx.r5.s64 = 0;
	// rlwinm r9,r10,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// li r4,0
	ctx.r4.s64 = 0;
	// add r7,r10,r9
	ctx.r7.u64 = ctx.r10.u64 + ctx.r9.u64;
	// subf r11,r7,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r7.s64;
	// stw r11,12536(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12536, ctx.r11.u32);
	// bl 0x82668e90
	ctx.lr = 0x82A06D98;
	sub_82668E90(ctx, base);
	// lis r5,-32096
	ctx.r5.s64 = -2103443456;
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// addi r5,r5,5976
	ctx.r5.s64 = ctx.r5.s64 + 5976;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x826775c0
	ctx.lr = 0x82A06DB0;
	sub_826775C0(ctx, base);
	// lwz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// bl 0x82677428
	ctx.lr = 0x82A06DB8;
	sub_82677428(ctx, base);
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// li r5,12
	ctx.r5.s64 = 12;
	// lwz r10,12536(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12536);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r3,120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 120, ctx.r3.u32);
	// li r3,9
	ctx.r3.s64 = 9;
	// std r30,0(r9)
	PPC_STORE_U64(ctx.r9.u32 + 0, ctx.r30.u64);
	// stw r30,8(r9)
	PPC_STORE_U32(ctx.r9.u32 + 8, ctx.r30.u32);
	// stw r30,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r30.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// bl 0x82a3de38
	ctx.lr = 0x82A06DEC;
	sub_82A3DE38(ctx, base);
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x82fa76c4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A06DF4"))) PPC_WEAK_FUNC(sub_82A06DF4);
PPC_FUNC_IMPL(__imp__sub_82A06DF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A06DF8"))) PPC_WEAK_FUNC(sub_82A06DF8);
PPC_FUNC_IMPL(__imp__sub_82A06DF8) {
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
	// lwz r3,15632(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 15632);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a06e28
	if (ctx.cr6.eq) goto loc_82A06E28;
	// bl 0x82a02500
	ctx.lr = 0x82A06E24;
	sub_82A02500(ctx, base);
	// stw r30,15632(r31)
	PPC_STORE_U32(ctx.r31.u32 + 15632, ctx.r30.u32);
loc_82A06E28:
	// lwz r3,15636(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 15636);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a06e3c
	if (ctx.cr6.eq) goto loc_82A06E3C;
	// bl 0x82a061b8
	ctx.lr = 0x82A06E38;
	sub_82A061B8(ctx, base);
	// stw r30,15636(r31)
	PPC_STORE_U32(ctx.r31.u32 + 15636, ctx.r30.u32);
loc_82A06E3C:
	// lis r11,-31964
	ctx.r11.s64 = -2094792704;
	// li r10,15664
	ctx.r10.s64 = 15664;
	// addi r11,r11,29312
	ctx.r11.s64 = ctx.r11.s64 + 29312;
	// addi r9,r11,12544
	ctx.r9.s64 = ctx.r11.s64 + 12544;
	// addis r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 65536;
	// subf r8,r9,r31
	ctx.r8.s64 = ctx.r31.s64 - ctx.r9.s64;
	// addi r7,r11,-6000
	ctx.r7.s64 = ctx.r11.s64 + -6000;
	// divw r6,r8,r10
	ctx.r6.s32 = ctx.r8.s32 / ctx.r10.s32;
	// rlwinm r5,r6,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r30,r5,r7
	PPC_STORE_U32(ctx.r5.u32 + ctx.r7.u32, ctx.r30.u32);
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

__attribute__((alias("__imp__sub_82A06E7C"))) PPC_WEAK_FUNC(sub_82A06E7C);
PPC_FUNC_IMPL(__imp__sub_82A06E7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A06E80"))) PPC_WEAK_FUNC(sub_82A06E80);
PPC_FUNC_IMPL(__imp__sub_82A06E80) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x82A06E88;
	__savegprlr_28(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31964
	ctx.r11.s64 = -2094792704;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r31,r11,29312
	ctx.r31.s64 = ctx.r11.s64 + 29312;
	// li r5,512
	ctx.r5.s64 = 512;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,168
	ctx.r3.s64 = ctx.r31.s64 + 168;
	// bl 0x82fa7cf0
	ctx.lr = 0x82A06EA8;
	sub_82FA7CF0(ctx, base);
	// li r5,384
	ctx.r5.s64 = 384;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,688
	ctx.r3.s64 = ctx.r31.s64 + 688;
	// bl 0x82fa7cf0
	ctx.lr = 0x82A06EB8;
	sub_82FA7CF0(ctx, base);
	// lis r3,37
	ctx.r3.s64 = 2424832;
	// lis r4,-29506
	ctx.r4.s64 = -1933705216;
	// ori r3,r3,32768
	ctx.r3.u64 = ctx.r3.u64 | 32768;
	// bl 0x82a3df10
	ctx.lr = 0x82A06EC8;
	sub_82A3DF10(ctx, base);
	// stw r3,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82a06ee4
	if (!ctx.cr6.eq) goto loc_82A06EE4;
loc_82A06ED4:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
loc_82A06EE4:
	// lis r11,4
	ctx.r11.s64 = 262144;
	// addi r7,r31,1540
	ctx.r7.s64 = ctx.r31.s64 + 1540;
	// ori r28,r11,45056
	ctx.r28.u64 = ctx.r11.u64 | 45056;
	// lis r6,6690
	ctx.r6.s64 = 438435840;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// li r30,0
	ctx.r30.s64 = 0;
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r30,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r30.u32);
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// ori r6,r6,90
	ctx.r6.u64 = ctx.r6.u64 | 90;
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82af4258
	ctx.lr = 0x82A06F28;
	sub_82AF4258(ctx, base);
	// addi r3,r31,1540
	ctx.r3.s64 = ctx.r31.s64 + 1540;
	// lwz r4,140(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// bl 0x82af44c8
	ctx.lr = 0x82A06F34;
	sub_82AF44C8(ctx, base);
	// li r8,5
	ctx.r8.s64 = 5;
	// lis r5,-32096
	ctx.r5.s64 = -2103443456;
	// stw r8,176(r31)
	PPC_STORE_U32(ctx.r31.u32 + 176, ctx.r8.u32);
	// lis r6,9
	ctx.r6.s64 = 589824;
	// stw r30,272(r31)
	PPC_STORE_U32(ctx.r31.u32 + 272, ctx.r30.u32);
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// addi r8,r5,24184
	ctx.r8.s64 = ctx.r5.s64 + 24184;
	// li r7,4
	ctx.r7.s64 = 4;
	// addi r9,r31,168
	ctx.r9.s64 = ctx.r31.s64 + 168;
	// stw r8,196(r31)
	PPC_STORE_U32(ctx.r31.u32 + 196, ctx.r8.u32);
	// ori r11,r6,24576
	ctx.r11.u64 = ctx.r6.u64 | 24576;
	// stw r7,200(r31)
	PPC_STORE_U32(ctx.r31.u32 + 200, ctx.r7.u32);
	// stw r9,192(r31)
	PPC_STORE_U32(ctx.r31.u32 + 192, ctx.r9.u32);
	// lis r10,18
	ctx.r10.s64 = 1179648;
	// addi r9,r31,240
	ctx.r9.s64 = ctx.r31.s64 + 240;
	// stw r11,208(r31)
	PPC_STORE_U32(ctx.r31.u32 + 208, ctx.r11.u32);
	// li r7,5
	ctx.r7.s64 = 5;
	// stw r11,400(r31)
	PPC_STORE_U32(ctx.r31.u32 + 400, ctx.r11.u32);
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// stw r9,216(r31)
	PPC_STORE_U32(ctx.r31.u32 + 216, ctx.r9.u32);
	// lis r4,-32096
	ctx.r4.s64 = -2103443456;
	// stw r7,304(r31)
	PPC_STORE_U32(ctx.r31.u32 + 304, ctx.r7.u32);
	// addi r8,r31,296
	ctx.r8.s64 = ctx.r31.s64 + 296;
	// stw r11,336(r31)
	PPC_STORE_U32(ctx.r31.u32 + 336, ctx.r11.u32);
	// ori r10,r10,49152
	ctx.r10.u64 = ctx.r10.u64 | 49152;
	// stw r11,464(r31)
	PPC_STORE_U32(ctx.r31.u32 + 464, ctx.r11.u32);
	// addi r7,r4,24184
	ctx.r7.s64 = ctx.r4.s64 + 24184;
	// stw r8,320(r31)
	PPC_STORE_U32(ctx.r31.u32 + 320, ctx.r8.u32);
	// li r9,4
	ctx.r9.s64 = 4;
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// stw r7,324(r31)
	PPC_STORE_U32(ctx.r31.u32 + 324, ctx.r7.u32);
	// mr r5,r10
	ctx.r5.u64 = ctx.r10.u64;
	// lwz r10,140(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// lis r4,28
	ctx.r4.s64 = 1835008;
	// stw r9,328(r31)
	PPC_STORE_U32(ctx.r31.u32 + 328, ctx.r9.u32);
	// addi r9,r31,368
	ctx.r9.s64 = ctx.r31.s64 + 368;
	// stw r8,528(r31)
	PPC_STORE_U32(ctx.r31.u32 + 528, ctx.r8.u32);
	// li r7,5
	ctx.r7.s64 = 5;
	// ori r6,r4,8192
	ctx.r6.u64 = ctx.r4.u64 | 8192;
	// stw r9,344(r31)
	PPC_STORE_U32(ctx.r31.u32 + 344, ctx.r9.u32);
	// stw r7,432(r31)
	PPC_STORE_U32(ctx.r31.u32 + 432, ctx.r7.u32);
	// add r9,r10,r11
	ctx.r9.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r8,r10,r8
	ctx.r8.u64 = ctx.r10.u64 + ctx.r8.u64;
	// stw r10,268(r31)
	PPC_STORE_U32(ctx.r31.u32 + 268, ctx.r10.u32);
	// add r7,r10,r6
	ctx.r7.u64 = ctx.r10.u64 + ctx.r6.u64;
	// stw r10,204(r31)
	PPC_STORE_U32(ctx.r31.u32 + 204, ctx.r10.u32);
	// addi r10,r31,424
	ctx.r10.s64 = ctx.r31.s64 + 424;
	// stw r9,396(r31)
	PPC_STORE_U32(ctx.r31.u32 + 396, ctx.r9.u32);
	// lis r4,-32096
	ctx.r4.s64 = -2103443456;
	// stw r9,332(r31)
	PPC_STORE_U32(ctx.r31.u32 + 332, ctx.r9.u32);
	// stw r10,448(r31)
	PPC_STORE_U32(ctx.r31.u32 + 448, ctx.r10.u32);
	// li r5,4
	ctx.r5.s64 = 4;
	// addi r9,r4,24184
	ctx.r9.s64 = ctx.r4.s64 + 24184;
	// stw r8,524(r31)
	PPC_STORE_U32(ctx.r31.u32 + 524, ctx.r8.u32);
	// addi r10,r31,496
	ctx.r10.s64 = ctx.r31.s64 + 496;
	// stw r7,652(r31)
	PPC_STORE_U32(ctx.r31.u32 + 652, ctx.r7.u32);
	// stw r9,452(r31)
	PPC_STORE_U32(ctx.r31.u32 + 452, ctx.r9.u32);
	// lis r3,-32096
	ctx.r3.s64 = -2103443456;
	// stw r5,456(r31)
	PPC_STORE_U32(ctx.r31.u32 + 456, ctx.r5.u32);
	// li r9,5
	ctx.r9.s64 = 5;
	// stw r10,472(r31)
	PPC_STORE_U32(ctx.r31.u32 + 472, ctx.r10.u32);
	// li r10,4
	ctx.r10.s64 = 4;
	// stw r9,560(r31)
	PPC_STORE_U32(ctx.r31.u32 + 560, ctx.r9.u32);
	// stw r11,592(r31)
	PPC_STORE_U32(ctx.r31.u32 + 592, ctx.r11.u32);
	// addi r9,r3,24184
	ctx.r9.s64 = ctx.r3.s64 + 24184;
	// stw r10,584(r31)
	PPC_STORE_U32(ctx.r31.u32 + 584, ctx.r10.u32);
	// addi r10,r31,624
	ctx.r10.s64 = ctx.r31.s64 + 624;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// stw r8,460(r31)
	PPC_STORE_U32(ctx.r31.u32 + 460, ctx.r8.u32);
	// stw r10,600(r31)
	PPC_STORE_U32(ctx.r31.u32 + 600, ctx.r10.u32);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r8,r31,552
	ctx.r8.s64 = ctx.r31.s64 + 552;
	// stw r9,580(r31)
	PPC_STORE_U32(ctx.r31.u32 + 580, ctx.r9.u32);
	// stb r10,1472(r31)
	PPC_STORE_U8(ctx.r31.u32 + 1472, ctx.r10.u8);
	// addi r11,r31,1480
	ctx.r11.s64 = ctx.r31.s64 + 1480;
	// addi r10,r31,1480
	ctx.r10.s64 = ctx.r31.s64 + 1480;
	// stw r30,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r30.u32);
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// stw r30,680(r31)
	PPC_STORE_U32(ctx.r31.u32 + 680, ctx.r30.u32);
	// stw r30,1476(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1476, ctx.r30.u32);
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// stw r6,656(r31)
	PPC_STORE_U32(ctx.r31.u32 + 656, ctx.r6.u32);
	// stw r8,576(r31)
	PPC_STORE_U32(ctx.r31.u32 + 576, ctx.r8.u32);
	// stw r7,588(r31)
	PPC_STORE_U32(ctx.r31.u32 + 588, ctx.r7.u32);
	// stw r11,1480(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1480, ctx.r11.u32);
	// stw r10,1484(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1484, ctx.r10.u32);
	// stw r30,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r30.u32);
	// beq cr6,0x82a0723c
	if (ctx.cr6.eq) goto loc_82A0723C;
	// lis r8,-31964
	ctx.r8.s64 = -2094792704;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r9,-31964
	ctx.r9.s64 = -2094792704;
	// li r10,480
	ctx.r10.s64 = 480;
	// rlwinm r7,r11,0,25,25
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	// li r11,640
	ctx.r11.s64 = 640;
	// stw r10,29292(r8)
	PPC_STORE_U32(ctx.r8.u32 + 29292, ctx.r10.u32);
	// lis r8,-31964
	ctx.r8.s64 = -2094792704;
	// stw r11,29296(r9)
	PPC_STORE_U32(ctx.r9.u32 + 29296, ctx.r11.u32);
	// lis r11,-31964
	ctx.r11.s64 = -2094792704;
	// li r9,4
	ctx.r9.s64 = 4;
	// addi r10,r11,29288
	ctx.r10.s64 = ctx.r11.s64 + 29288;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// stw r9,29280(r8)
	PPC_STORE_U32(ctx.r8.u32 + 29280, ctx.r9.u32);
	// li r11,2
	ctx.r11.s64 = 2;
	// bne cr6,0x82a070d8
	if (!ctx.cr6.eq) goto loc_82A070D8;
	// li r11,1
	ctx.r11.s64 = 1;
loc_82A070D8:
	// lis r29,-31964
	ctx.r29.s64 = -2094792704;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// mullw r11,r11,r28
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r28.s32);
	// stw r11,29284(r29)
	PPC_STORE_U32(ctx.r29.u32 + 29284, ctx.r11.u32);
	// rlwinm r10,r11,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lis r4,-29506
	ctx.r4.s64 = -1933705216;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x82a3df10
	ctx.lr = 0x82A070F8;
	sub_82A3DF10(ctx, base);
	// stw r3,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a06ed4
	if (ctx.cr6.eq) goto loc_82A06ED4;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r11,r11,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a07120
	if (ctx.cr6.eq) goto loc_82A07120;
	// lis r11,2
	ctx.r11.s64 = 131072;
	// ori r11,r11,22528
	ctx.r11.u64 = ctx.r11.u64 | 22528;
	// b 0x82a07128
	goto loc_82A07128;
loc_82A07120:
	// lis r11,1
	ctx.r11.s64 = 65536;
	// ori r11,r11,11264
	ctx.r11.u64 = ctx.r11.u64 | 11264;
loc_82A07128:
	// addi r8,r31,1488
	ctx.r8.s64 = ctx.r31.s64 + 1488;
	// stw r30,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r30.u32);
	// rlwinm r3,r11,1,0,30
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
	// lis r6,6690
	ctx.r6.s64 = 438435840;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// li r10,0
	ctx.r10.s64 = 0;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// ori r6,r6,134
	ctx.r6.u64 = ctx.r6.u64 | 134;
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,1
	ctx.r4.s64 = 1;
	// add r3,r11,r3
	ctx.r3.u64 = ctx.r11.u64 + ctx.r3.u64;
	// bl 0x82af4258
	ctx.lr = 0x82A07164;
	sub_82AF4258(ctx, base);
	// addi r3,r31,1488
	ctx.r3.s64 = ctx.r31.s64 + 1488;
	// lwz r4,136(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// bl 0x82af44c8
	ctx.lr = 0x82A07170;
	sub_82AF44C8(ctx, base);
	// li r10,5
	ctx.r10.s64 = 5;
	// li r9,2
	ctx.r9.s64 = 2;
	// stw r10,696(r31)
	PPC_STORE_U32(ctx.r31.u32 + 696, ctx.r10.u32);
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// stw r30,792(r31)
	PPC_STORE_U32(ctx.r31.u32 + 792, ctx.r30.u32);
	// lis r8,-32096
	ctx.r8.s64 = -2103443456;
	// stw r9,720(r31)
	PPC_STORE_U32(ctx.r31.u32 + 720, ctx.r9.u32);
	// addi r11,r31,688
	ctx.r11.s64 = ctx.r31.s64 + 688;
	// addi r10,r8,25120
	ctx.r10.s64 = ctx.r8.s64 + 25120;
	// stw r11,712(r31)
	PPC_STORE_U32(ctx.r31.u32 + 712, ctx.r11.u32);
	// addi r9,r31,760
	ctx.r9.s64 = ctx.r31.s64 + 760;
	// li r11,5
	ctx.r11.s64 = 5;
	// stw r10,716(r31)
	PPC_STORE_U32(ctx.r31.u32 + 716, ctx.r10.u32);
	// lis r7,-32096
	ctx.r7.s64 = -2103443456;
	// stw r9,736(r31)
	PPC_STORE_U32(ctx.r31.u32 + 736, ctx.r9.u32);
	// stw r11,824(r31)
	PPC_STORE_U32(ctx.r31.u32 + 824, ctx.r11.u32);
	// li r10,2
	ctx.r10.s64 = 2;
	// addi r9,r31,816
	ctx.r9.s64 = ctx.r31.s64 + 816;
	// addi r11,r7,25120
	ctx.r11.s64 = ctx.r7.s64 + 25120;
	// stw r10,848(r31)
	PPC_STORE_U32(ctx.r31.u32 + 848, ctx.r10.u32);
	// stw r9,840(r31)
	PPC_STORE_U32(ctx.r31.u32 + 840, ctx.r9.u32);
	// addi r10,r31,888
	ctx.r10.s64 = ctx.r31.s64 + 888;
	// li r9,5
	ctx.r9.s64 = 5;
	// stw r11,844(r31)
	PPC_STORE_U32(ctx.r31.u32 + 844, ctx.r11.u32);
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r10,864(r31)
	PPC_STORE_U32(ctx.r31.u32 + 864, ctx.r10.u32);
	// lis r6,-32096
	ctx.r6.s64 = -2103443456;
	// stw r9,952(r31)
	PPC_STORE_U32(ctx.r31.u32 + 952, ctx.r9.u32);
	// addi r10,r31,944
	ctx.r10.s64 = ctx.r31.s64 + 944;
	// stw r11,976(r31)
	PPC_STORE_U32(ctx.r31.u32 + 976, ctx.r11.u32);
	// addi r9,r6,25120
	ctx.r9.s64 = ctx.r6.s64 + 25120;
	// lwz r11,29284(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 29284);
	// addi r8,r31,1016
	ctx.r8.s64 = ctx.r31.s64 + 1016;
	// stw r10,968(r31)
	PPC_STORE_U32(ctx.r31.u32 + 968, ctx.r10.u32);
	// stw r9,972(r31)
	PPC_STORE_U32(ctx.r31.u32 + 972, ctx.r9.u32);
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// lwz r10,136(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// stw r8,992(r31)
	PPC_STORE_U32(ctx.r31.u32 + 992, ctx.r8.u32);
	// add r8,r11,r10
	ctx.r8.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r9,1048(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1048, ctx.r9.u32);
	// add r7,r9,r10
	ctx.r7.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r11,728(r31)
	PPC_STORE_U32(ctx.r31.u32 + 728, ctx.r11.u32);
	// stw r8,916(r31)
	PPC_STORE_U32(ctx.r31.u32 + 916, ctx.r8.u32);
	// stw r7,1044(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1044, ctx.r7.u32);
	// stw r10,788(r31)
	PPC_STORE_U32(ctx.r31.u32 + 788, ctx.r10.u32);
	// stw r10,724(r31)
	PPC_STORE_U32(ctx.r31.u32 + 724, ctx.r10.u32);
	// stw r11,920(r31)
	PPC_STORE_U32(ctx.r31.u32 + 920, ctx.r11.u32);
	// stw r11,856(r31)
	PPC_STORE_U32(ctx.r31.u32 + 856, ctx.r11.u32);
	// stw r11,984(r31)
	PPC_STORE_U32(ctx.r31.u32 + 984, ctx.r11.u32);
	// stw r8,852(r31)
	PPC_STORE_U32(ctx.r31.u32 + 852, ctx.r8.u32);
	// stw r7,980(r31)
	PPC_STORE_U32(ctx.r31.u32 + 980, ctx.r7.u32);
loc_82A0723C:
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r30,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r30.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A0724C"))) PPC_WEAK_FUNC(sub_82A0724C);
PPC_FUNC_IMPL(__imp__sub_82A0724C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A07250"))) PPC_WEAK_FUNC(sub_82A07250);
PPC_FUNC_IMPL(__imp__sub_82A07250) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7660
	ctx.lr = 0x82A07258;
	__savegprlr_22(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31964
	ctx.r11.s64 = -2094792704;
	// li r23,0
	ctx.r23.s64 = 0;
	// addi r31,r11,29312
	ctx.r31.s64 = ctx.r11.s64 + 29312;
	// lis r24,-31964
	ctx.r24.s64 = -2094792704;
	// lwz r11,1152(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1152);
	// lwz r25,1136(r31)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1136);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82a0728c
	if (ctx.cr6.eq) goto loc_82A0728C;
	// lwz r11,29300(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 29300);
	// li r28,1
	ctx.r28.s64 = 1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82a07290
	if (ctx.cr6.eq) goto loc_82A07290;
loc_82A0728C:
	// mr r28,r23
	ctx.r28.u64 = ctx.r23.u64;
loc_82A07290:
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82a072c8
	if (!ctx.cr6.eq) goto loc_82A072C8;
	// addi r11,r1,84
	ctx.r11.s64 = ctx.r1.s64 + 84;
	// stw r23,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r23.u32);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// li r4,0
	ctx.r4.s64 = 0;
	// stw r23,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r23.u32);
	// stw r23,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r23.u32);
	// stw r23,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r23.u32);
	// bl 0x8267db00
	ctx.lr = 0x82A072C0;
	sub_8267DB00(ctx, base);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
loc_82A072C8:
	// lwz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// bl 0x8267b0b8
	ctx.lr = 0x82A072D0;
	sub_8267B0B8(ctx, base);
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82665330
	ctx.lr = 0x82A072E0;
	sub_82665330(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// stw r3,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r3.u32);
	// sync 
	// lis r26,-32768
	ctx.r26.s64 = -2147483648;
	// cmplw cr6,r3,r26
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r26.u32, ctx.xer);
	// beq cr6,0x82a07308
	if (ctx.cr6.eq) goto loc_82A07308;
	// lwz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// bl 0x8267b0c0
	ctx.lr = 0x82A07300;
	sub_8267B0C0(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// b 0x82a0730c
	goto loc_82A0730C;
loc_82A07308:
	// mr r29,r30
	ctx.r29.u64 = ctx.r30.u64;
loc_82A0730C:
	// lwz r11,1104(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1104);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a0759c
	if (ctx.cr6.eq) goto loc_82A0759C;
	// addi r3,r31,1368
	ctx.r3.s64 = ctx.r31.s64 + 1368;
	// bl 0x83179274
	ctx.lr = 0x82A07320;
	__imp__KfAcquireSpinLock(ctx, base);
	// lwz r10,1208(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1208);
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq cr6,0x82a0733c
	if (ctx.cr6.eq) goto loc_82A0733C;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,1148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1148, ctx.r11.u32);
	// b 0x82a07348
	goto loc_82A07348;
loc_82A0733C:
	// lwz r11,1148(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1148);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82a0740c
	if (ctx.cr6.eq) goto loc_82A0740C;
loc_82A07348:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x82a07590
	if (ctx.cr6.eq) goto loc_82A07590;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82a07590
	if (ctx.cr6.eq) goto loc_82A07590;
	// subf r11,r29,r25
	ctx.r11.s64 = ctx.r25.s64 - ctx.r29.s64;
	// subf r9,r25,r29
	ctx.r9.s64 = ctx.r29.s64 - ctx.r25.s64;
	// cmplw cr6,r11,r9
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r9.u32, ctx.xer);
	// bge cr6,0x82a0736c
	if (!ctx.cr6.lt) goto loc_82A0736C;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
loc_82A0736C:
	// divwu r11,r9,r10
	ctx.r11.u32 = ctx.r9.u32 / ctx.r10.u32;
	// twllei r10,0
	if (ctx.r10.u32 <= 0) __builtin_debugtrap();
	// mullw r8,r11,r10
	ctx.r8.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// subf r11,r8,r9
	ctx.r11.s64 = ctx.r9.s64 - ctx.r8.s64;
	// cmplwi cr6,r11,50000
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 50000, ctx.xer);
	// blt cr6,0x82a07394
	if (ctx.cr6.lt) goto loc_82A07394;
	// addis r8,r10,-1
	ctx.r8.s64 = ctx.r10.s64 + -65536;
	// addi r8,r8,15536
	ctx.r8.s64 = ctx.r8.s64 + 15536;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// ble cr6,0x82a073b4
	if (!ctx.cr6.gt) goto loc_82A073B4;
loc_82A07394:
	// rlwinm r11,r10,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// stw r29,1140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1140, ctx.r29.u32);
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
	// stw r23,1148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1148, ctx.r23.u32);
	// subf r11,r11,r29
	ctx.r11.s64 = ctx.r29.s64 - ctx.r11.s64;
	// stw r11,1144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1144, ctx.r11.u32);
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
	// b 0x82a07410
	goto loc_82A07410;
loc_82A073B4:
	// rlwinm r11,r10,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// twllei r10,0
	if (ctx.r10.u32 <= 0) __builtin_debugtrap();
	// add r9,r11,r9
	ctx.r9.u64 = ctx.r11.u64 + ctx.r9.u64;
	// divwu r7,r9,r10
	ctx.r7.u32 = ctx.r9.u32 / ctx.r10.u32;
	// mullw r6,r7,r10
	ctx.r6.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r10.s32);
	// subf r9,r6,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r6.s64;
	// cmplwi cr6,r9,50000
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 50000, ctx.xer);
	// blt cr6,0x82a073dc
	if (ctx.cr6.lt) goto loc_82A073DC;
	// cmplw cr6,r9,r8
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r8.u32, ctx.xer);
	// ble cr6,0x82a073f4
	if (!ctx.cr6.gt) goto loc_82A073F4;
loc_82A073DC:
	// subf r9,r11,r29
	ctx.r9.s64 = ctx.r29.s64 - ctx.r11.s64;
	// stw r29,1144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1144, ctx.r29.u32);
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
	// stw r23,1148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1148, ctx.r23.u32);
	// stw r9,1140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1140, ctx.r9.u32);
	// b 0x82a07410
	goto loc_82A07410;
loc_82A073F4:
	// subf r11,r11,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r11.s64;
	// lwz r9,1140(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1140);
	// stw r23,1148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1148, ctx.r23.u32);
	// stw r11,1144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1144, ctx.r11.u32);
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
	// b 0x82a07410
	goto loc_82A07410;
loc_82A0740C:
	// lwz r9,1140(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1140);
loc_82A07410:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq cr6,0x82a07468
	if (ctx.cr6.eq) goto loc_82A07468;
	// lwz r11,1372(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1372);
	// addi r10,r31,1388
	ctx.r10.s64 = ctx.r31.s64 + 1388;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r11,1420(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1420);
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// bne cr6,0x82a07434
	if (!ctx.cr6.eq) goto loc_82A07434;
	// xori r11,r11,8
	ctx.r11.u64 = ctx.r11.u64 ^ 8;
loc_82A07434:
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r11,1376(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1376);
	// addi r10,r31,1404
	ctx.r10.s64 = ctx.r31.s64 + 1404;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r11,1424(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1424);
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// bne cr6,0x82a07454
	if (!ctx.cr6.eq) goto loc_82A07454;
	// xori r11,r11,8
	ctx.r11.u64 = ctx.r11.u64 ^ 8;
loc_82A07454:
	// add r5,r11,r10
	ctx.r5.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r3,r31,1072
	ctx.r3.s64 = ctx.r31.s64 + 1072;
	// bl 0x82a033a0
	ctx.lr = 0x82A07460;
	sub_82A033A0(ctx, base);
	// lwz r10,1208(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1208);
	// lwz r9,1140(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1140);
loc_82A07468:
	// lwz r11,29300(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 29300);
	// cmplw cr6,r27,r26
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r26.u32, ctx.xer);
	// stw r11,1152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1152, ctx.r11.u32);
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
	// bne cr6,0x82a07480
	if (!ctx.cr6.eq) goto loc_82A07480;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
loc_82A07480:
	// subf r8,r11,r29
	ctx.r8.s64 = ctx.r29.s64 - ctx.r11.s64;
	// subf r11,r29,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r29.s64;
	// cmplw cr6,r11,r8
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r8.u32, ctx.xer);
	// bge cr6,0x82a07494
	if (!ctx.cr6.lt) goto loc_82A07494;
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
loc_82A07494:
	// divwu r11,r8,r10
	ctx.r11.u32 = ctx.r8.u32 / ctx.r10.u32;
	// lis r7,3
	ctx.r7.s64 = 196608;
	// mullw r6,r11,r10
	ctx.r6.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// ori r11,r7,3392
	ctx.r11.u64 = ctx.r7.u64 | 3392;
	// subf r7,r6,r8
	ctx.r7.s64 = ctx.r8.s64 - ctx.r6.s64;
	// twllei r10,0
	if (ctx.r10.u32 <= 0) __builtin_debugtrap();
	// cmplw cr6,r7,r11
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82a074c0
	if (ctx.cr6.lt) goto loc_82A074C0;
	// subf r6,r11,r10
	ctx.r6.s64 = ctx.r10.s64 - ctx.r11.s64;
	// cmplw cr6,r7,r6
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r6.u32, ctx.xer);
	// ble cr6,0x82a074cc
	if (!ctx.cr6.gt) goto loc_82A074CC;
loc_82A074C0:
	// stw r29,1140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1140, ctx.r29.u32);
	// stw r29,1128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1128, ctx.r29.u32);
	// b 0x82a0752c
	goto loc_82A0752C;
loc_82A074CC:
	// rlwinm r7,r10,31,1,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// add r4,r7,r8
	ctx.r4.u64 = ctx.r7.u64 + ctx.r8.u64;
	// twllei r10,0
	if (ctx.r10.u32 <= 0) __builtin_debugtrap();
	// divwu r3,r4,r10
	ctx.r3.u32 = ctx.r4.u32 / ctx.r10.u32;
	// mullw r11,r3,r10
	ctx.r11.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r10.s32);
	// subf r11,r11,r4
	ctx.r11.s64 = ctx.r4.s64 - ctx.r11.s64;
	// cmplw cr6,r11,r5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r5.u32, ctx.xer);
	// blt cr6,0x82a074f8
	if (ctx.cr6.lt) goto loc_82A074F8;
	// cmplw cr6,r11,r6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r6.u32, ctx.xer);
	// ble cr6,0x82a0752c
	if (!ctx.cr6.gt) goto loc_82A0752C;
loc_82A074F8:
	// rlwinm r11,r10,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r8,r9,r29
	ctx.r8.s64 = ctx.r29.s64 - ctx.r9.s64;
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// rlwinm r6,r7,30,2,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 30) & 0x3FFFFFFF;
	// cmplw cr6,r8,r6
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r6.u32, ctx.xer);
	// ble cr6,0x82a07524
	if (!ctx.cr6.gt) goto loc_82A07524;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// stw r29,1140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1140, ctx.r29.u32);
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
	// stw r11,1144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1144, ctx.r11.u32);
	// b 0x82a07528
	goto loc_82A07528;
loc_82A07524:
	// stw r29,1144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1144, ctx.r29.u32);
loc_82A07528:
	// stw r9,1128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1128, ctx.r9.u32);
loc_82A0752C:
	// lwz r11,1372(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1372);
	// stw r29,1132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1132, ctx.r29.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a07560
	if (ctx.cr6.eq) goto loc_82A07560;
	// lwz r10,1380(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1380);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82a07560
	if (!ctx.cr6.eq) goto loc_82A07560;
	// lwz r9,1420(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1420);
	// mr r10,r23
	ctx.r10.u64 = ctx.r23.u64;
	// stw r11,1380(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1380, ctx.r11.u32);
	// xori r9,r9,1
	ctx.r9.u64 = ctx.r9.u64 ^ 1;
	// stw r23,1372(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1372, ctx.r23.u32);
	// stw r9,1420(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1420, ctx.r9.u32);
loc_82A07560:
	// lwz r11,1376(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1376);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a07590
	if (ctx.cr6.eq) goto loc_82A07590;
	// lwz r10,1384(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1384);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82a07590
	if (!ctx.cr6.eq) goto loc_82A07590;
	// lwz r9,1424(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1424);
	// mr r10,r23
	ctx.r10.u64 = ctx.r23.u64;
	// stw r11,1384(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1384, ctx.r11.u32);
	// xori r9,r9,1
	ctx.r9.u64 = ctx.r9.u64 ^ 1;
	// stw r23,1376(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1376, ctx.r23.u32);
	// stw r9,1424(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1424, ctx.r9.u32);
loc_82A07590:
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// addi r3,r31,1368
	ctx.r3.s64 = ctx.r31.s64 + 1368;
	// bl 0x83179294
	ctx.lr = 0x82A0759C;
	__imp__KfReleaseSpinLock(ctx, base);
loc_82A0759C:
	// lis r11,0
	ctx.r11.s64 = 0;
	// ori r10,r11,59852
	ctx.r10.u64 = ctx.r11.u64 | 59852;
	// lwzx r11,r31,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a075bc
	if (ctx.cr6.eq) goto loc_82A075BC;
	// bl 0x82a06bd0
	ctx.lr = 0x82A075B4;
	sub_82A06BD0(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82fa76b0
	__restgprlr_22(ctx, base);
	return;
loc_82A075BC:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r31,104
	ctx.r3.s64 = ctx.r31.s64 + 104;
	// bl 0x831792b4
	ctx.lr = 0x82A075CC;
	__imp__KeSetEvent(ctx, base);
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82fa76b0
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A075D4"))) PPC_WEAK_FUNC(sub_82A075D4);
PPC_FUNC_IMPL(__imp__sub_82A075D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A075D8"))) PPC_WEAK_FUNC(sub_82A075D8);
PPC_FUNC_IMPL(__imp__sub_82A075D8) {
	PPC_FUNC_PROLOGUE();
	// b 0x82a07250
	sub_82A07250(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A075DC"))) PPC_WEAK_FUNC(sub_82A075DC);
PPC_FUNC_IMPL(__imp__sub_82A075DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A075E0"))) PPC_WEAK_FUNC(sub_82A075E0);
PPC_FUNC_IMPL(__imp__sub_82A075E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x82A075E8;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// bl 0x82a01b98
	ctx.lr = 0x82A075F0;
	sub_82A01B98(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a077a8
	if (ctx.cr6.eq) goto loc_82A077A8;
	// bl 0x82a060b0
	ctx.lr = 0x82A07600;
	sub_82A060B0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// stw r3,15632(r31)
	PPC_STORE_U32(ctx.r31.u32 + 15632, ctx.r3.u32);
	// beq cr6,0x82a077a0
	if (ctx.cr6.eq) goto loc_82A077A0;
	// mftb r9
	ctx.r9.u64 = __rdtsc();
	// rotlwi r10,r3,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r3.u32, 0);
	// stw r9,15644(r31)
	PPC_STORE_U32(ctx.r31.u32 + 15644, ctx.r9.u32);
	// lis r11,-31964
	ctx.r11.s64 = -2094792704;
	// addi r30,r11,29312
	ctx.r30.s64 = ctx.r11.s64 + 29312;
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r7,r8,0,25,25
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x40;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// bne cr6,0x82a07668
	if (!ctx.cr6.eq) goto loc_82A07668;
	// lwz r11,156(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 156);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82a07654
	if (!ctx.cr6.eq) goto loc_82A07654;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,156(r30)
	PPC_STORE_U32(ctx.r30.u32 + 156, ctx.r11.u32);
	// lwz r11,15632(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 15632);
	// lwz r11,72(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// stw r11,152(r30)
	PPC_STORE_U32(ctx.r30.u32 + 152, ctx.r11.u32);
	// b 0x82a07658
	goto loc_82A07658;
loc_82A07654:
	// lwz r11,152(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 152);
loc_82A07658:
	// lwz r10,15632(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 15632);
	// lwz r9,72(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 72);
	// subf r8,r11,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r11.s64;
	// stw r8,72(r10)
	PPC_STORE_U32(ctx.r10.u32 + 72, ctx.r8.u32);
loc_82A07668:
	// lwz r11,40(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82a07688
	if (!ctx.cr6.eq) goto loc_82A07688;
	// lwz r11,15632(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 15632);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r9,r10,0,26,26
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x20;
	// cmplwi cr6,r9,32
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 32, ctx.xer);
	// bne cr6,0x82a07694
	if (!ctx.cr6.eq) goto loc_82A07694;
loc_82A07688:
	// bl 0x82a059f8
	ctx.lr = 0x82A0768C;
	sub_82A059F8(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,40(r30)
	PPC_STORE_U32(ctx.r30.u32 + 40, ctx.r11.u32);
loc_82A07694:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82a076ac
	if (!ctx.cr6.eq) goto loc_82A076AC;
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82a0776c
	if (ctx.cr6.eq) goto loc_82A0776C;
loc_82A076AC:
	// lwz r3,15632(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 15632);
	// bl 0x82a04448
	ctx.lr = 0x82A076B4;
	sub_82A04448(ctx, base);
	// lis r11,-31975
	ctx.r11.s64 = -2095513600;
	// addi r29,r11,-12608
	ctx.r29.s64 = ctx.r11.s64 + -12608;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x831791a4
	ctx.lr = 0x82A076C4;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r11,132(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 132);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addis r11,r30,1
	ctx.r11.s64 = ctx.r30.s64 + 65536;
	// beq cr6,0x82a076dc
	if (ctx.cr6.eq) goto loc_82A076DC;
	// addi r11,r11,-5972
	ctx.r11.s64 = ctx.r11.s64 + -5972;
	// b 0x82a076e0
	goto loc_82A076E0;
loc_82A076DC:
	// addi r11,r11,-5980
	ctx.r11.s64 = ctx.r11.s64 + -5980;
loc_82A076E0:
	// ld r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// bl 0x831791b4
	ctx.lr = 0x82A076F0;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// lwz r4,11184(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 11184);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82a07754
	if (ctx.cr6.eq) goto loc_82A07754;
	// lwz r11,11240(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 11240);
	// addi r9,r31,15392
	ctx.r9.s64 = ctx.r31.s64 + 15392;
	// lwz r7,15632(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 15632);
	// addi r8,r31,15360
	ctx.r8.s64 = ctx.r31.s64 + 15360;
	// lwz r10,15640(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 15640);
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r11,168(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 168);
	// lwz r3,100(r7)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r7.u32 + 100);
	// add r7,r11,r10
	ctx.r7.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x82a3dc88
	ctx.lr = 0x82A0772C;
	sub_82A3DC88(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a00a48
	ctx.lr = 0x82A07734;
	sub_82A00A48(ctx, base);
	// lwz r11,11240(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 11240);
	// lwz r10,15640(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 15640);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r11,168(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 168);
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r4,r3,19200
	ctx.r4.s64 = ctx.r3.s64 + 19200;
	// bl 0x82680e48
	ctx.lr = 0x82A07750;
	sub_82680E48(ctx, base);
	// b 0x82a0776c
	goto loc_82A0776C;
loc_82A07754:
	// lwz r11,15632(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 15632);
	// addi r5,r31,15392
	ctx.r5.s64 = ctx.r31.s64 + 15392;
	// lwz r3,100(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 100);
	// bl 0x82a3de48
	ctx.lr = 0x82A07764;
	sub_82A3DE48(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a00a48
	ctx.lr = 0x82A0776C;
	sub_82A00A48(ctx, base);
loc_82A0776C:
	// lwz r10,15632(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 15632);
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r11,140(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 140);
	// lwz r10,104(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 104);
	// add r3,r10,r11
	ctx.r3.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addis r4,r3,9
	ctx.r4.s64 = ctx.r3.s64 + 589824;
	// addi r4,r4,24576
	ctx.r4.s64 = ctx.r4.s64 + 24576;
	// bl 0x82680e48
	ctx.lr = 0x82A0778C;
	sub_82680E48(ctx, base);
	// mftb r9
	ctx.r9.u64 = __rdtsc();
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r9,15648(r31)
	PPC_STORE_U32(ctx.r31.u32 + 15648, ctx.r9.u32);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
loc_82A077A0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a06df8
	ctx.lr = 0x82A077A8;
	sub_82A06DF8(ctx, base);
loc_82A077A8:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A077B4"))) PPC_WEAK_FUNC(sub_82A077B4);
PPC_FUNC_IMPL(__imp__sub_82A077B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A077B8"))) PPC_WEAK_FUNC(sub_82A077B8);
PPC_FUNC_IMPL(__imp__sub_82A077B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7654
	ctx.lr = 0x82A077C0;
	__savegprlr_19(ctx, base);
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31964
	ctx.r11.s64 = -2094792704;
	// li r25,1
	ctx.r25.s64 = 1;
	// addi r31,r11,29312
	ctx.r31.s64 = ctx.r11.s64 + 29312;
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
	// li r27,0
	ctx.r27.s64 = 0;
	// lis r11,-31975
	ctx.r11.s64 = -2095513600;
	// lis r10,-5
	ctx.r10.s64 = -327680;
	// lis r9,20053
	ctx.r9.s64 = 1314193408;
	// stw r25,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r25.u32);
	// stw r27,12284(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12284, ctx.r27.u32);
	// ori r19,r10,27680
	ctx.r19.u64 = ctx.r10.u64 | 27680;
	// li r22,-1
	ctx.r22.s64 = -1;
	// li r23,15664
	ctx.r23.s64 = 15664;
	// ori r21,r9,18720
	ctx.r21.u64 = ctx.r9.u64 | 18720;
	// addi r20,r11,-12452
	ctx.r20.s64 = ctx.r11.s64 + -12452;
loc_82A07800:
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
loc_82A07804:
	// lwz r11,128(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82a07874
	if (!ctx.cr6.eq) goto loc_82A07874;
loc_82A07810:
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82a07874
	if (!ctx.cr6.eq) goto loc_82A07874;
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82a05b40
	ctx.lr = 0x82A07824;
	sub_82A05B40(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82a07860
	if (!ctx.cr6.eq) goto loc_82A07860;
	// std r19,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r19.u64);
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x83179684
	ctx.lr = 0x82A07844;
	__imp__NtWaitForSingleObjectEx(ctx, base);
	// cmpwi cr6,r3,258
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 258, ctx.xer);
	// bne cr6,0x82a07860
	if (!ctx.cr6.eq) goto loc_82A07860;
	// bl 0x82a0afe8
	ctx.lr = 0x82A07850;
	sub_82A0AFE8(ctx, base);
	// bl 0x82a098a8
	ctx.lr = 0x82A07854;
	sub_82A098A8(ctx, base);
	// bl 0x829ff2a0
	ctx.lr = 0x82A07858;
	sub_829FF2A0(ctx, base);
	// bl 0x82a0aa08
	ctx.lr = 0x82A0785C;
	sub_82A0AA08(ctx, base);
	// bl 0x82a13580
	ctx.lr = 0x82A07860;
	sub_82A13580(ctx, base);
loc_82A07860:
	// lwz r10,128(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
	// stw r25,156(r31)
	PPC_STORE_U32(ctx.r31.u32 + 156, ctx.r25.u32);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82a07810
	if (ctx.cr6.eq) goto loc_82A07810;
loc_82A07874:
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82a07f90
	if (!ctx.cr6.eq) goto loc_82A07F90;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne cr6,0x82a07898
	if (!ctx.cr6.eq) goto loc_82A07898;
	// bl 0x82a02388
	ctx.lr = 0x82A0788C;
	sub_82A02388(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82a07804
	if (ctx.cr6.lt) goto loc_82A07804;
	// mr r30,r25
	ctx.r30.u64 = ctx.r25.u64;
loc_82A07898:
	// bl 0x82a02650
	ctx.lr = 0x82A0789C;
	sub_82A02650(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82a07804
	if (ctx.cr6.lt) goto loc_82A07804;
	// li r10,10
	ctx.r10.s64 = 10;
	// addis r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 65536;
	// mr r9,r27
	ctx.r9.u64 = ctx.r27.u64;
	// addi r11,r11,-5728
	ctx.r11.s64 = ctx.r11.s64 + -5728;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82A078B8:
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x82a078b8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82A078B8;
	// stw r27,12280(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12280, ctx.r27.u32);
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// stw r27,2196(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2196, ctx.r27.u32);
	// addi r11,r31,12208
	ctx.r11.s64 = ctx.r31.s64 + 12208;
	// std r27,12208(r31)
	PPC_STORE_U64(ctx.r31.u32 + 12208, ctx.r27.u64);
	// mr r10,r27
	ctx.r10.u64 = ctx.r27.u64;
	// std r27,12216(r31)
	PPC_STORE_U64(ctx.r31.u32 + 12216, ctx.r27.u64);
	// stw r27,12224(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12224, ctx.r27.u32);
	// mr r9,r22
	ctx.r9.u64 = ctx.r22.u64;
	// stw r27,12228(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12228, ctx.r27.u32);
	// mr r8,r22
	ctx.r8.u64 = ctx.r22.u64;
	// stw r27,12232(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12232, ctx.r27.u32);
	// addi r11,r31,12228
	ctx.r11.s64 = ctx.r31.s64 + 12228;
	// stw r27,12236(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12236, ctx.r27.u32);
	// stw r27,12240(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12240, ctx.r27.u32);
	// stw r27,12244(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12244, ctx.r27.u32);
	// stw r27,12248(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12248, ctx.r27.u32);
	// stw r25,12284(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12284, ctx.r25.u32);
	// stw r27,12252(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12252, ctx.r27.u32);
	// stw r22,12224(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12224, ctx.r22.u32);
	// stw r22,12244(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12244, ctx.r22.u32);
	// sync 
	// lis r11,-32096
	ctx.r11.s64 = -2103443456;
	// lwz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// addi r4,r11,30168
	ctx.r4.s64 = ctx.r11.s64 + 30168;
	// bl 0x8268c990
	ctx.lr = 0x82A07928;
	sub_8268C990(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82a0af50
	ctx.lr = 0x82A07930;
	sub_82A0AF50(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82a0aa88
	ctx.lr = 0x82A0793C;
	sub_82A0AA88(ctx, base);
	// bl 0x82a09760
	ctx.lr = 0x82A07940;
	sub_82A09760(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82a134f8
	ctx.lr = 0x82A07948;
	sub_82A134F8(ctx, base);
	// lwz r11,10632(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10632);
	// addi r10,r31,72
	ctx.r10.s64 = ctx.r31.s64 + 72;
	// addi r9,r31,88
	ctx.r9.s64 = ctx.r31.s64 + 88;
	// addi r8,r31,56
	ctx.r8.s64 = ctx.r31.s64 + 56;
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// addi r7,r31,104
	ctx.r7.s64 = ctx.r31.s64 + 104;
	// stw r9,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r9.u32);
	// stw r8,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r8.u32);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r7,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r7.u32);
	// beq cr6,0x82a07978
	if (ctx.cr6.eq) goto loc_82A07978;
	// bl 0x82a0d538
	ctx.lr = 0x82A07978;
	sub_82A0D538(ctx, base);
loc_82A07978:
	// mr r24,r27
	ctx.r24.u64 = ctx.r27.u64;
loc_82A0797C:
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,3
	ctx.r6.s64 = 3;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// li r3,4
	ctx.r3.s64 = 4;
	// bl 0x831795f4
	ctx.lr = 0x82A079A0;
	__imp__KeWaitForMultipleObjects(ctx, base);
	// rlwinm r11,r3,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// lwz r9,36(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// lwzx r30,r11,r10
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// bne cr6,0x82a079cc
	if (!ctx.cr6.eq) goto loc_82A079CC;
	// lwz r11,128(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82a079cc
	if (!ctx.cr6.eq) goto loc_82A079CC;
	// mr r26,r25
	ctx.r26.u64 = ctx.r25.u64;
	// b 0x82a079f0
	goto loc_82A079F0;
loc_82A079CC:
	// mr r26,r27
	ctx.r26.u64 = ctx.r27.u64;
	// stw r27,12284(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12284, ctx.r27.u32);
	// sync 
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82a041c8
	ctx.lr = 0x82A079E0;
	sub_82A041C8(ctx, base);
	// lwz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// bl 0x8268c9a0
	ctx.lr = 0x82A079E8;
	sub_8268C9A0(ctx, base);
	// lwz r3,120(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// bl 0x82677460
	ctx.lr = 0x82A079F0;
	sub_82677460(ctx, base);
loc_82A079F0:
	// addi r11,r31,56
	ctx.r11.s64 = ctx.r31.s64 + 56;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82a07b2c
	if (!ctx.cr6.eq) goto loc_82A07B2C;
	// lwz r11,12252(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12252);
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,12252(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12252, ctx.r11.u32);
	// beq cr6,0x82a07d08
	if (ctx.cr6.eq) goto loc_82A07D08;
	// lwz r11,12276(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12276);
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82a07a30
	if (!ctx.cr6.eq) goto loc_82A07A30;
	// bl 0x82a075e0
	ctx.lr = 0x82A07A24;
	sub_82A075E0(ctx, base);
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x82a07a34
	goto loc_82A07A34;
loc_82A07A30:
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
loc_82A07A34:
	// stw r11,12260(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12260, ctx.r11.u32);
	// bl 0x82a04260
	ctx.lr = 0x82A07A3C;
	sub_82A04260(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82a07d08
	if (ctx.cr6.eq) goto loc_82A07D08;
	// addi r9,r31,12256
	ctx.r9.s64 = ctx.r31.s64 + 12256;
loc_82A07A48:
	// mfmsr r10
	ctx.r10.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r9
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r9.u32);
	ctx.r11.u64 = __builtin_bswap32(ctx.reserved.u32);
	// stwcx. r30,0,r9
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r9.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r30.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r10,1
	ctx.msr = (ctx.r10.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x82a07a48
	if (!ctx.cr0.eq) goto loc_82A07A48;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a07d08
	if (ctx.cr6.eq) goto loc_82A07D08;
	// lwz r29,15632(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 15632);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82a07ab4
	if (ctx.cr6.eq) goto loc_82A07AB4;
	// addi r3,r31,144
	ctx.r3.s64 = ctx.r31.s64 + 144;
	// bl 0x83179274
	ctx.lr = 0x82A07A80;
	__imp__KfAcquireSpinLock(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// rlwinm r10,r11,0,31,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// rlwinm r9,r10,0,29,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x4;
	// stw r10,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r10.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82a07aa4
	if (!ctx.cr6.eq) goto loc_82A07AA4;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82a022a0
	ctx.lr = 0x82A07AA4;
	sub_82A022A0(ctx, base);
loc_82A07AA4:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r31,144
	ctx.r3.s64 = ctx.r31.s64 + 144;
	// bl 0x83179294
	ctx.lr = 0x82A07AB0;
	__imp__KfReleaseSpinLock(ctx, base);
	// stw r27,15632(r30)
	PPC_STORE_U32(ctx.r30.u32 + 15632, ctx.r27.u32);
loc_82A07AB4:
	// lwz r29,15636(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 15636);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82a07afc
	if (ctx.cr6.eq) goto loc_82A07AFC;
	// addi r3,r31,144
	ctx.r3.s64 = ctx.r31.s64 + 144;
	// bl 0x83179274
	ctx.lr = 0x82A07AC8;
	__imp__KfAcquireSpinLock(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// rlwinm r10,r11,0,31,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// rlwinm r9,r10,0,29,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x4;
	// stw r10,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r10.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82a07aec
	if (!ctx.cr6.eq) goto loc_82A07AEC;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82a02568
	ctx.lr = 0x82A07AEC;
	sub_82A02568(ctx, base);
loc_82A07AEC:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r31,144
	ctx.r3.s64 = ctx.r31.s64 + 144;
	// bl 0x83179294
	ctx.lr = 0x82A07AF8;
	__imp__KfReleaseSpinLock(ctx, base);
	// stw r27,15636(r30)
	PPC_STORE_U32(ctx.r30.u32 + 15636, ctx.r27.u32);
loc_82A07AFC:
	// addi r10,r31,12544
	ctx.r10.s64 = ctx.r31.s64 + 12544;
	// addis r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 65536;
	// subf r9,r10,r30
	ctx.r9.s64 = ctx.r30.s64 - ctx.r10.s64;
	// addi r8,r11,-6000
	ctx.r8.s64 = ctx.r11.s64 + -6000;
	// divw r7,r9,r23
	ctx.r7.s32 = ctx.r9.s32 / ctx.r23.s32;
	// rlwinm r6,r7,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r27,r6,r8
	PPC_STORE_U32(ctx.r6.u32 + ctx.r8.u32, ctx.r27.u32);
	// lwz r11,12248(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12248);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,12248(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12248, ctx.r11.u32);
	// sync 
	// b 0x82a07d08
	goto loc_82A07D08;
loc_82A07B2C:
	// addi r11,r31,72
	ctx.r11.s64 = ctx.r31.s64 + 72;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82a07b90
	if (!ctx.cr6.eq) goto loc_82A07B90;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x831791a4
	ctx.lr = 0x82A07B40;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lwz r11,12288(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12288);
	// addi r10,r31,12264
	ctx.r10.s64 = ctx.r31.s64 + 12264;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r4,r9,r10
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82a07b80
	if (ctx.cr6.eq) goto loc_82A07B80;
	// lwz r3,52(r4)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r4.u32 + 52);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a07b80
	if (ctx.cr6.eq) goto loc_82A07B80;
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// beq cr6,0x82a07b70
	if (ctx.cr6.eq) goto loc_82A07B70;
	// bl 0x82a04610
	ctx.lr = 0x82A07B70;
	sub_82A04610(ctx, base);
loc_82A07B70:
	// bl 0x82a09810
	ctx.lr = 0x82A07B74;
	sub_82A09810(ctx, base);
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x831791b4
	ctx.lr = 0x82A07B7C;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// b 0x82a07d08
	goto loc_82A07D08;
loc_82A07B80:
	// bl 0x82a09760
	ctx.lr = 0x82A07B84;
	sub_82A09760(ctx, base);
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x831791b4
	ctx.lr = 0x82A07B8C;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// b 0x82a07d08
	goto loc_82A07D08;
loc_82A07B90:
	// addi r11,r31,88
	ctx.r11.s64 = ctx.r31.s64 + 88;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82a07cdc
	if (!ctx.cr6.eq) goto loc_82A07CDC;
	// lwz r11,12288(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12288);
	// addi r10,r31,12264
	ctx.r10.s64 = ctx.r31.s64 + 12264;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r30,r9,r10
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r10.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82a07c60
	if (ctx.cr6.eq) goto loc_82A07C60;
	// lwz r3,52(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a07c60
	if (ctx.cr6.eq) goto loc_82A07C60;
	// mr r29,r27
	ctx.r29.u64 = ctx.r27.u64;
	// cmplwi cr6,r3,1
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 1, ctx.xer);
	// beq cr6,0x82a07bf0
	if (ctx.cr6.eq) goto loc_82A07BF0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82a04d18
	ctx.lr = 0x82A07BD4;
	sub_82A04D18(ctx, base);
	// mr r29,r25
	ctx.r29.u64 = ctx.r25.u64;
	// stw r27,12276(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12276, ctx.r27.u32);
	// sync 
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a015d8
	ctx.lr = 0x82A07BE8;
	sub_82A015D8(ctx, base);
	// lwz r3,52(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 52);
	// bl 0x82a06df8
	ctx.lr = 0x82A07BF0;
	sub_82A06DF8(ctx, base);
loc_82A07BF0:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a01ce0
	ctx.lr = 0x82A07BF8;
	sub_82A01CE0(ctx, base);
	// lwz r3,10624(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10624);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a07c24
	if (ctx.cr6.eq) goto loc_82A07C24;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne cr6,0x82a07c18
	if (!ctx.cr6.eq) goto loc_82A07C18;
	// lwz r11,10628(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 10628);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82a07c24
	if (!ctx.cr6.eq) goto loc_82A07C24;
loc_82A07C18:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x831792b4
	ctx.lr = 0x82A07C24;
	__imp__KeSetEvent(ctx, base);
loc_82A07C24:
	// addi r3,r31,12272
	ctx.r3.s64 = ctx.r31.s64 + 12272;
	// bl 0x83179274
	ctx.lr = 0x82A07C2C;
	__imp__KfAcquireSpinLock(ctx, base);
	// lwz r11,12288(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12288);
	// addi r10,r31,12264
	ctx.r10.s64 = ctx.r31.s64 + 12264;
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r27,r9,r10
	PPC_STORE_U32(ctx.r9.u32 + ctx.r10.u32, ctx.r27.u32);
	// lwz r11,12288(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12288);
	// addi r8,r11,-1
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// clrlwi r11,r8,31
	ctx.r11.u64 = ctx.r8.u32 & 0x1;
	// stw r11,12288(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12288, ctx.r11.u32);
	// sync 
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// addi r3,r31,12272
	ctx.r3.s64 = ctx.r31.s64 + 12272;
	// bl 0x83179294
	ctx.lr = 0x82A07C5C;
	__imp__KfReleaseSpinLock(ctx, base);
	// b 0x82a07c7c
	goto loc_82A07C7C;
loc_82A07C60:
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82a0af50
	ctx.lr = 0x82A07C68;
	sub_82A0AF50(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82a0aa88
	ctx.lr = 0x82A07C74;
	sub_82A0AA88(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82a134f8
	ctx.lr = 0x82A07C7C;
	sub_82A134F8(ctx, base);
loc_82A07C7C:
	// lwz r11,12260(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12260);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82a07d08
	if (ctx.cr6.eq) goto loc_82A07D08;
	// bl 0x82a075e0
	ctx.lr = 0x82A07C8C;
	sub_82A075E0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a07cd0
	if (ctx.cr6.eq) goto loc_82A07CD0;
	// addi r9,r31,12256
	ctx.r9.s64 = ctx.r31.s64 + 12256;
loc_82A07C98:
	// mfmsr r10
	ctx.r10.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r9
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r9.u32);
	ctx.r11.u64 = __builtin_bswap32(ctx.reserved.u32);
	// stwcx. r3,0,r9
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r9.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r3.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r10,1
	ctx.msr = (ctx.r10.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x82a07c98
	if (!ctx.cr0.eq) goto loc_82A07C98;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a07cd0
	if (ctx.cr6.eq) goto loc_82A07CD0;
	// bl 0x82a06df8
	ctx.lr = 0x82A07CC0;
	sub_82A06DF8(ctx, base);
	// lwz r11,12248(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12248);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,12248(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12248, ctx.r11.u32);
	// sync 
loc_82A07CD0:
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// stw r27,12260(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12260, ctx.r27.u32);
	// b 0x82a07d08
	goto loc_82A07D08;
loc_82A07CDC:
	// addi r11,r31,104
	ctx.r11.s64 = ctx.r31.s64 + 104;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82a07d08
	if (!ctx.cr6.eq) goto loc_82A07D08;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82a0af50
	ctx.lr = 0x82A07CF0;
	sub_82A0AF50(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82a0aa88
	ctx.lr = 0x82A07CFC;
	sub_82A0AA88(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82a134f8
	ctx.lr = 0x82A07D04;
	sub_82A134F8(ctx, base);
	// bl 0x82a09760
	ctx.lr = 0x82A07D08;
	sub_82A09760(ctx, base);
loc_82A07D08:
	// lwz r11,12284(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12284);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82a07d20
	if (ctx.cr6.eq) goto loc_82A07D20;
	// lwz r11,12280(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12280);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82a07e04
	if (ctx.cr6.eq) goto loc_82A07E04;
loc_82A07D20:
	// addi r9,r31,12256
	ctx.r9.s64 = ctx.r31.s64 + 12256;
loc_82A07D24:
	// mfmsr r10
	ctx.r10.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r9
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r9.u32);
	ctx.r11.u64 = __builtin_bswap32(ctx.reserved.u32);
	// stwcx. r27,0,r9
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r9.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r27.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r10,1
	ctx.msr = (ctx.r10.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x82a07d24
	if (!ctx.cr0.eq) goto loc_82A07D24;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a07e04
	if (ctx.cr6.eq) goto loc_82A07E04;
	// lwz r29,15632(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 15632);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82a07d90
	if (ctx.cr6.eq) goto loc_82A07D90;
	// addi r3,r31,144
	ctx.r3.s64 = ctx.r31.s64 + 144;
	// bl 0x83179274
	ctx.lr = 0x82A07D5C;
	__imp__KfAcquireSpinLock(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// rlwinm r10,r11,0,31,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// rlwinm r9,r10,0,29,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x4;
	// stw r10,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r10.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82a07d80
	if (!ctx.cr6.eq) goto loc_82A07D80;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82a022a0
	ctx.lr = 0x82A07D80;
	sub_82A022A0(ctx, base);
loc_82A07D80:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r31,144
	ctx.r3.s64 = ctx.r31.s64 + 144;
	// bl 0x83179294
	ctx.lr = 0x82A07D8C;
	__imp__KfReleaseSpinLock(ctx, base);
	// stw r27,15632(r30)
	PPC_STORE_U32(ctx.r30.u32 + 15632, ctx.r27.u32);
loc_82A07D90:
	// lwz r29,15636(r30)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r30.u32 + 15636);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82a07dd8
	if (ctx.cr6.eq) goto loc_82A07DD8;
	// addi r3,r31,144
	ctx.r3.s64 = ctx.r31.s64 + 144;
	// bl 0x83179274
	ctx.lr = 0x82A07DA4;
	__imp__KfAcquireSpinLock(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// rlwinm r10,r11,0,31,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFFD;
	// rlwinm r9,r10,0,29,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x4;
	// stw r10,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r10.u32);
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82a07dc8
	if (!ctx.cr6.eq) goto loc_82A07DC8;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82a02568
	ctx.lr = 0x82A07DC8;
	sub_82A02568(ctx, base);
loc_82A07DC8:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r31,144
	ctx.r3.s64 = ctx.r31.s64 + 144;
	// bl 0x83179294
	ctx.lr = 0x82A07DD4;
	__imp__KfReleaseSpinLock(ctx, base);
	// stw r27,15636(r30)
	PPC_STORE_U32(ctx.r30.u32 + 15636, ctx.r27.u32);
loc_82A07DD8:
	// addi r10,r31,12544
	ctx.r10.s64 = ctx.r31.s64 + 12544;
	// addis r11,r31,1
	ctx.r11.s64 = ctx.r31.s64 + 65536;
	// subf r9,r10,r30
	ctx.r9.s64 = ctx.r30.s64 - ctx.r10.s64;
	// addi r8,r11,-6000
	ctx.r8.s64 = ctx.r11.s64 + -6000;
	// divw r7,r9,r23
	ctx.r7.s32 = ctx.r9.s32 / ctx.r23.s32;
	// rlwinm r6,r7,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r27,r6,r8
	PPC_STORE_U32(ctx.r6.u32 + ctx.r8.u32, ctx.r27.u32);
	// lwz r11,12248(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12248);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,12248(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12248, ctx.r11.u32);
	// sync 
loc_82A07E04:
	// mftb r8
	ctx.r8.u64 = __rdtsc();
	// sradi r7,r8,32
	ctx.xer.ca = (ctx.r8.s64 < 0) & ((ctx.r8.u64 & 0xFFFFFFFF) != 0);
	ctx.r7.s64 = ctx.r8.s64 >> 32;
	// stb r25,12091(r31)
	PPC_STORE_U8(ctx.r31.u32 + 12091, ctx.r25.u8);
	// li r5,120
	ctx.r5.s64 = 120;
	// stb r25,12090(r31)
	PPC_STORE_U8(ctx.r31.u32 + 12090, ctx.r25.u8);
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// stw r7,12092(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12092, ctx.r7.u32);
	// addi r4,r31,12088
	ctx.r4.s64 = ctx.r31.s64 + 12088;
	// stw r8,12096(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12096, ctx.r8.u32);
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
	// mr r10,r25
	ctx.r10.u64 = ctx.r25.u64;
	// bl 0x82a83cd8
	ctx.lr = 0x82A07E34;
	sub_82A83CD8(ctx, base);
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// bne cr6,0x82a0797c
	if (!ctx.cr6.eq) goto loc_82A0797C;
	// addi r3,r31,12272
	ctx.r3.s64 = ctx.r31.s64 + 12272;
	// bl 0x83179274
	ctx.lr = 0x82A07E44;
	__imp__KfAcquireSpinLock(ctx, base);
	// lwz r11,12264(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12264);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82a07e64
	if (!ctx.cr6.eq) goto loc_82A07E64;
	// lwz r11,12268(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12268);
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a07e68
	if (ctx.cr6.eq) goto loc_82A07E68;
loc_82A07E64:
	// mr r30,r25
	ctx.r30.u64 = ctx.r25.u64;
loc_82A07E68:
	// addi r3,r31,12272
	ctx.r3.s64 = ctx.r31.s64 + 12272;
	// bl 0x83179294
	ctx.lr = 0x82A07E70;
	__imp__KfReleaseSpinLock(ctx, base);
	// lwz r11,36(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 36);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82a07e84
	if (!ctx.cr6.eq) goto loc_82A07E84;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x82a07eac
	if (ctx.cr6.eq) goto loc_82A07EAC;
loc_82A07E84:
	// lwz r11,128(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 128);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82a07e98
	if (!ctx.cr6.eq) goto loc_82A07E98;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x82a07ee0
	if (ctx.cr6.eq) goto loc_82A07EE0;
loc_82A07E98:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// addi r3,r31,88
	ctx.r3.s64 = ctx.r31.s64 + 88;
	// bl 0x831792b4
	ctx.lr = 0x82A07EA8;
	__imp__KeSetEvent(ctx, base);
	// b 0x82a0797c
	goto loc_82A0797C;
loc_82A07EAC:
	// addi r9,r31,12256
	ctx.r9.s64 = ctx.r31.s64 + 12256;
loc_82A07EB0:
	// mfmsr r10
	ctx.r10.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r9
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r9.u32);
	ctx.r11.u64 = __builtin_bswap32(ctx.reserved.u32);
	// stwcx. r27,0,r9
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r9.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r27.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r10,1
	ctx.msr = (ctx.r10.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x82a07eb0
	if (!ctx.cr0.eq) goto loc_82A07EB0;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a07ed8
	if (ctx.cr6.eq) goto loc_82A07ED8;
	// bl 0x82a06df8
	ctx.lr = 0x82A07ED8;
	sub_82A06DF8(ctx, base);
loc_82A07ED8:
	// mr r24,r25
	ctx.r24.u64 = ctx.r25.u64;
	// b 0x82a07f0c
	goto loc_82A07F0C;
loc_82A07EE0:
	// addi r9,r31,12256
	ctx.r9.s64 = ctx.r31.s64 + 12256;
loc_82A07EE4:
	// mfmsr r10
	ctx.r10.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r9
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r9.u32);
	ctx.r11.u64 = __builtin_bswap32(ctx.reserved.u32);
	// stwcx. r27,0,r9
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r9.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r27.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r10,1
	ctx.msr = (ctx.r10.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x82a07ee4
	if (!ctx.cr0.eq) goto loc_82A07EE4;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a07f0c
	if (ctx.cr6.eq) goto loc_82A07F0C;
	// bl 0x82a06df8
	ctx.lr = 0x82A07F0C;
	sub_82A06DF8(ctx, base);
loc_82A07F0C:
	// stw r27,12284(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12284, ctx.r27.u32);
	// sync 
	// lwz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// bl 0x8268c9a0
	ctx.lr = 0x82A07F1C;
	sub_8268C9A0(ctx, base);
	// bl 0x82a05de0
	ctx.lr = 0x82A07F20;
	sub_82A05DE0(ctx, base);
loc_82A07F20:
	// lwz r11,148(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82a07f38
	if (!ctx.cr6.eq) goto loc_82A07F38;
	// lwz r11,680(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 680);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82a07f54
	if (ctx.cr6.eq) goto loc_82A07F54;
loc_82A07F38:
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,3
	ctx.r4.s64 = 3;
	// addi r3,r31,1472
	ctx.r3.s64 = ctx.r31.s64 + 1472;
	// bl 0x83179414
	ctx.lr = 0x82A07F50;
	__imp__KeWaitForSingleObject(ctx, base);
	// b 0x82a07f20
	goto loc_82A07F20;
loc_82A07F54:
	// bl 0x82a09498
	ctx.lr = 0x82A07F58;
	sub_82A09498(ctx, base);
	// bl 0x82a0abd8
	ctx.lr = 0x82A07F5C;
	sub_82A0ABD8(ctx, base);
	// bl 0x82a0a998
	ctx.lr = 0x82A07F60;
	sub_82A0A998(ctx, base);
	// bl 0x82a13600
	ctx.lr = 0x82A07F64;
	sub_82A13600(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82a134f8
	ctx.lr = 0x82A07F6C;
	sub_82A134F8(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82a0aa88
	ctx.lr = 0x82A07F78;
	sub_82A0AA88(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82a0af50
	ctx.lr = 0x82A07F80;
	sub_82A0AF50(ctx, base);
	// bl 0x82a09760
	ctx.lr = 0x82A07F84;
	sub_82A09760(ctx, base);
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// bne cr6,0x82a07f94
	if (!ctx.cr6.eq) goto loc_82A07F94;
	// b 0x82a07800
	goto loc_82A07800;
loc_82A07F90:
	// bl 0x82a05de0
	ctx.lr = 0x82A07F94;
	sub_82A05DE0(ctx, base);
loc_82A07F94:
	// lwz r3,120(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// bl 0x82677460
	ctx.lr = 0x82A07F9C;
	sub_82677460(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82a07fac
	if (ctx.cr6.eq) goto loc_82A07FAC;
	// bl 0x82a3dbc0
	ctx.lr = 0x82A07FAC;
	sub_82A3DBC0(ctx, base);
loc_82A07FAC:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82a07fd4
	if (ctx.cr6.eq) goto loc_82A07FD4;
	// bl 0x82a427a8
	ctx.lr = 0x82A07FBC;
	sub_82A427A8(ctx, base);
	// lwz r3,12084(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12084);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a07fd4
	if (ctx.cr6.eq) goto loc_82A07FD4;
	// bl 0x8266eed8
	ctx.lr = 0x82A07FCC;
	sub_8266EED8(ctx, base);
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
	// stw r27,12084(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12084, ctx.r27.u32);
loc_82A07FD4:
	// bl 0x829ff248
	ctx.lr = 0x82A07FD8;
	sub_829FF248(ctx, base);
	// bl 0x82a03c50
	ctx.lr = 0x82A07FDC;
	sub_82A03C50(ctx, base);
	// bl 0x82a013e8
	ctx.lr = 0x82A07FE0;
	sub_82A013E8(ctx, base);
	// bl 0x82a3e028
	ctx.lr = 0x82A07FE4;
	sub_82A3E028(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x82fa76a4
	__restgprlr_19(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A07FF0"))) PPC_WEAK_FUNC(sub_82A07FF0);
PPC_FUNC_IMPL(__imp__sub_82A07FF0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7640
	ctx.lr = 0x82A07FF8;
	__savegprlr_14(ctx, base);
	// stwu r1,-832(r1)
	ea = -832 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r12,13311
	ctx.r12.s64 = 872349696;
	// stw r5,868(r1)
	PPC_STORE_U32(ctx.r1.u32 + 868, ctx.r5.u32);
	// li r26,0
	ctx.r26.s64 = 0;
	// ori r12,r12,33556
	ctx.r12.u64 = ctx.r12.u64 | 33556;
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// and r11,r3,r12
	ctx.r11.u64 = ctx.r3.u64 & ctx.r12.u64;
	// mr r18,r4
	ctx.r18.u64 = ctx.r4.u64;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// mr r25,r26
	ctx.r25.u64 = ctx.r26.u64;
	// mr r21,r26
	ctx.r21.u64 = ctx.r26.u64;
	// mr r20,r26
	ctx.r20.u64 = ctx.r26.u64;
	// mr r27,r26
	ctx.r27.u64 = ctx.r26.u64;
	// beq cr6,0x82a08044
	if (ctx.cr6.eq) goto loc_82A08044;
loc_82A08034:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// addi r1,r1,832
	ctx.r1.s64 = ctx.r1.s64 + 832;
	// b 0x82fa7690
	__restgprlr_14(ctx, base);
	return;
loc_82A08044:
	// rlwinm r11,r22,0,22,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 0) & 0x200;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a08068
	if (ctx.cr6.eq) goto loc_82A08068;
	// clrlwi r10,r22,28
	ctx.r10.u64 = ctx.r22.u32 & 0xF;
	// rlwinm r10,r10,0,31,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFFFFF9;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82a08034
	if (!ctx.cr6.eq) goto loc_82A08034;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82a08034
	if (!ctx.cr6.eq) goto loc_82A08034;
loc_82A08068:
	// rlwinm r11,r22,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 0) & 0x8;
	// li r19,1
	ctx.r19.s64 = 1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82a08088
	if (!ctx.cr6.eq) goto loc_82A08088;
	// clrlwi r11,r22,31
	ctx.r11.u64 = ctx.r22.u32 & 0x1;
	// mr r24,r26
	ctx.r24.u64 = ctx.r26.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a0808c
	if (ctx.cr6.eq) goto loc_82A0808C;
loc_82A08088:
	// mr r24,r19
	ctx.r24.u64 = ctx.r19.u64;
loc_82A0808C:
	// rlwinm r11,r22,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 0) & 0x80000000;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82a080a4
	if (!ctx.cr6.eq) goto loc_82A080A4;
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// bne cr6,0x82a080a4
	if (!ctx.cr6.eq) goto loc_82A080A4;
	// mr r24,r19
	ctx.r24.u64 = ctx.r19.u64;
loc_82A080A4:
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r10,r22,0,18,18
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 0) & 0x2000;
	// rlwinm r16,r11,27,31,31
	ctx.r16.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82a080bc
	if (ctx.cr6.eq) goto loc_82A080BC;
	// mr r21,r19
	ctx.r21.u64 = ctx.r19.u64;
loc_82A080BC:
	// rlwinm r11,r22,0,17,17
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 0) & 0x4000;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a080cc
	if (ctx.cr6.eq) goto loc_82A080CC;
	// mr r20,r19
	ctx.r20.u64 = ctx.r19.u64;
loc_82A080CC:
	// rlwinm r11,r22,0,16,16
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 0) & 0x8000;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a080ec
	if (ctx.cr6.eq) goto loc_82A080EC;
	// li r12,8201
	ctx.r12.s64 = 8201;
	// and r11,r22,r12
	ctx.r11.u64 = ctx.r22.u64 & ctx.r12.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a08034
	if (ctx.cr6.eq) goto loc_82A08034;
	// mr r27,r19
	ctx.r27.u64 = ctx.r19.u64;
loc_82A080EC:
	// cmpwi cr6,r24,0
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// beq cr6,0x82a0810c
	if (ctx.cr6.eq) goto loc_82A0810C;
	// cmpwi cr6,r21,0
	ctx.cr6.compare<int32_t>(ctx.r21.s32, 0, ctx.xer);
	// bne cr6,0x82a08034
	if (!ctx.cr6.eq) goto loc_82A08034;
	// bl 0x82c463a0
	ctx.lr = 0x82A08100;
	sub_82C463A0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82a0810c
	if (ctx.cr6.eq) goto loc_82A0810C;
	// mr r21,r19
	ctx.r21.u64 = ctx.r19.u64;
loc_82A0810C:
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 0, ctx.xer);
	// beq cr6,0x82a08034
	if (ctx.cr6.eq) goto loc_82A08034;
	// cmpwi cr6,r18,-1
	ctx.cr6.compare<int32_t>(ctx.r18.s32, -1, ctx.xer);
	// bne cr6,0x82a08124
	if (!ctx.cr6.eq) goto loc_82A08124;
	// li r18,5
	ctx.r18.s64 = 5;
	// b 0x82a0812c
	goto loc_82A0812C;
loc_82A08124:
	// cmplwi cr6,r18,6
	ctx.cr6.compare<uint32_t>(ctx.r18.u32, 6, ctx.xer);
	// bge cr6,0x82a08034
	if (!ctx.cr6.lt) goto loc_82A08034;
loc_82A0812C:
	// cmpwi cr6,r24,1
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 1, ctx.xer);
	// bne cr6,0x82a081a4
	if (!ctx.cr6.eq) goto loc_82A081A4;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,260
	ctx.r4.s64 = 260;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82fa5590
	ctx.lr = 0x82A08144;
	sub_82FA5590(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82a08034
	if (!ctx.cr6.eq) goto loc_82A08034;
	// lis r11,-31975
	ctx.r11.s64 = -2095513600;
	// li r4,260
	ctx.r4.s64 = 260;
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// lwz r5,-12464(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + -12464);
	// bl 0x82fa85a0
	ctx.lr = 0x82A08160;
	sub_82FA85A0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82a08034
	if (!ctx.cr6.eq) goto loc_82A08034;
	// cmpwi cr6,r21,0
	ctx.cr6.compare<int32_t>(ctx.r21.s32, 0, ctx.xer);
	// beq cr6,0x82a081a4
	if (ctx.cr6.eq) goto loc_82A081A4;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,260
	ctx.r4.s64 = 260;
	// addi r3,r1,416
	ctx.r3.s64 = ctx.r1.s64 + 416;
	// bl 0x82fa5590
	ctx.lr = 0x82A08180;
	sub_82FA5590(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82a08034
	if (!ctx.cr6.eq) goto loc_82A08034;
	// lis r11,-31975
	ctx.r11.s64 = -2095513600;
	// li r4,260
	ctx.r4.s64 = 260;
	// addi r3,r1,416
	ctx.r3.s64 = ctx.r1.s64 + 416;
	// lwz r5,-12456(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + -12456);
	// bl 0x82fa85a0
	ctx.lr = 0x82A0819C;
	sub_82FA85A0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82a08034
	if (!ctx.cr6.eq) goto loc_82A08034;
loc_82A081A4:
	// lis r11,-31975
	ctx.r11.s64 = -2095513600;
	// addi r15,r11,-12520
	ctx.r15.s64 = ctx.r11.s64 + -12520;
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// bl 0x831791a4
	ctx.lr = 0x82A081B4;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lis r17,-31964
	ctx.r17.s64 = -2094792704;
	// lwz r11,29308(r17)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r17.u32 + 29308);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82a08994
	if (!ctx.cr6.eq) goto loc_82A08994;
	// lis r11,-31964
	ctx.r11.s64 = -2094792704;
	// lis r5,0
	ctx.r5.s64 = 0;
	// addi r31,r11,29312
	ctx.r31.s64 = ctx.r11.s64 + 29312;
	// ori r5,r5,59856
	ctx.r5.u64 = ctx.r5.u64 | 59856;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82fa7cf0
	ctx.lr = 0x82A081E0;
	sub_82FA7CF0(ctx, base);
	// lis r11,-31975
	ctx.r11.s64 = -2095513600;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// addi r4,r11,-13008
	ctx.r4.s64 = ctx.r11.s64 + -13008;
	// addi r3,r10,-27332
	ctx.r3.s64 = ctx.r10.s64 + -27332;
	// addi r8,r31,10536
	ctx.r8.s64 = ctx.r31.s64 + 10536;
	// li r7,64
	ctx.r7.s64 = 64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,8
	ctx.r5.s64 = 8;
	// bl 0x83179604
	ctx.lr = 0x82A08204;
	__imp__EtxProducerRegister(ctx, base);
	// li r23,-1
	ctx.r23.s64 = -1;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// stw r18,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r18.u32);
	// mr r10,r23
	ctx.r10.u64 = ctx.r23.u64;
	// stw r26,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r26.u32);
	// mr r9,r26
	ctx.r9.u64 = ctx.r26.u64;
	// stw r23,1592(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1592, ctx.r23.u32);
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
	// stw r26,1596(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1596, ctx.r26.u32);
	// stw r26,1600(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1600, ctx.r26.u32);
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// stw r26,1604(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1604, ctx.r26.u32);
	// mr r11,r19
	ctx.r11.u64 = ctx.r19.u64;
	// stw r22,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r22.u32);
	// mr r28,r26
	ctx.r28.u64 = ctx.r26.u64;
	// stw r26,1608(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1608, ctx.r26.u32);
	// addi r30,r31,1656
	ctx.r30.s64 = ctx.r31.s64 + 1656;
	// stw r19,1612(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1612, ctx.r19.u32);
	// li r29,2
	ctx.r29.s64 = 2;
	// stw r26,2036(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2036, ctx.r26.u32);
	// b 0x82a0825c
	goto loc_82A0825C;
loc_82A08258:
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
loc_82A0825C:
	// addi r11,r28,-1
	ctx.r11.s64 = ctx.r28.s64 + -1;
	// addi r5,r30,92
	ctx.r5.s64 = ctx.r30.s64 + 92;
	// cntlzw r10,r11
	ctx.r10.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r14,r10,27,31,31
	ctx.r14.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// mr r4,r14
	ctx.r4.u64 = ctx.r14.u64;
	// bl 0x829fd270
	ctx.lr = 0x82A08274;
	sub_829FD270(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r14
	ctx.r4.u64 = ctx.r14.u64;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x829fd270
	ctx.lr = 0x82A08284;
	sub_829FD270(ctx, base);
	// stw r26,184(r30)
	PPC_STORE_U32(ctx.r30.u32 + 184, ctx.r26.u32);
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r30,r30,192
	ctx.r30.s64 = ctx.r30.s64 + 192;
	// bne 0x82a08258
	if (!ctx.cr0.eq) goto loc_82A08258;
	// lwz r11,1664(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1664);
	// lwz r10,1668(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1668);
	// lwz r9,1672(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 1672);
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// mr r7,r10
	ctx.r7.u64 = ctx.r10.u64;
	// mr r6,r9
	ctx.r6.u64 = ctx.r9.u64;
	// stw r11,1640(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1640, ctx.r11.u32);
	// mr r5,r11
	ctx.r5.u64 = ctx.r11.u64;
	// stw r10,1644(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1644, ctx.r10.u32);
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
	// stw r9,1648(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1648, ctx.r9.u32);
	// mr r3,r9
	ctx.r3.u64 = ctx.r9.u64;
	// stw r11,1628(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1628, ctx.r11.u32);
	// stw r10,1632(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1632, ctx.r10.u32);
	// stw r9,1636(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1636, ctx.r9.u32);
	// stw r11,1616(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1616, ctx.r11.u32);
	// stw r10,1620(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1620, ctx.r10.u32);
	// stw r9,1624(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1624, ctx.r9.u32);
	// bl 0x82a03e28
	ctx.lr = 0x82A082E4;
	sub_82A03E28(ctx, base);
	// addi r9,r31,2176
	ctx.r9.s64 = ctx.r31.s64 + 2176;
	// mr r11,r19
	ctx.r11.u64 = ctx.r19.u64;
	// stb r19,2168(r31)
	PPC_STORE_U8(ctx.r31.u32 + 2168, ctx.r19.u8);
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
	// stw r9,2176(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2176, ctx.r9.u32);
	// addi r11,r31,2176
	ctx.r11.s64 = ctx.r31.s64 + 2176;
	// stw r26,2172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2172, ctx.r26.u32);
	// addi r10,r31,11268
	ctx.r10.s64 = ctx.r31.s64 + 11268;
	// stb r26,11260(r31)
	PPC_STORE_U8(ctx.r31.u32 + 11260, ctx.r26.u8);
	// mr r9,r26
	ctx.r9.u64 = ctx.r26.u64;
	// stw r11,2180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2180, ctx.r11.u32);
	// stw r10,11272(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11272, ctx.r10.u32);
	// mr r9,r19
	ctx.r9.u64 = ctx.r19.u64;
	// addi r11,r31,11268
	ctx.r11.s64 = ctx.r31.s64 + 11268;
	// stw r26,11264(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11264, ctx.r26.u32);
	// addi r10,r31,64
	ctx.r10.s64 = ctx.r31.s64 + 64;
	// stb r19,56(r31)
	PPC_STORE_U8(ctx.r31.u32 + 56, ctx.r19.u8);
	// addi r9,r31,64
	ctx.r9.s64 = ctx.r31.s64 + 64;
	// stw r11,11268(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11268, ctx.r11.u32);
	// stw r10,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r10.u32);
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// stw r9,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r9.u32);
	// addi r9,r31,80
	ctx.r9.s64 = ctx.r31.s64 + 80;
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
	// stw r26,60(r31)
	PPC_STORE_U32(ctx.r31.u32 + 60, ctx.r26.u32);
	// mr r11,r19
	ctx.r11.u64 = ctx.r19.u64;
	// stw r9,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r9.u32);
	// mr r10,r19
	ctx.r10.u64 = ctx.r19.u64;
	// stb r19,72(r31)
	PPC_STORE_U8(ctx.r31.u32 + 72, ctx.r19.u8);
	// addi r11,r31,80
	ctx.r11.s64 = ctx.r31.s64 + 80;
	// stw r26,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r26.u32);
	// addi r10,r31,96
	ctx.r10.s64 = ctx.r31.s64 + 96;
	// stb r19,88(r31)
	PPC_STORE_U8(ctx.r31.u32 + 88, ctx.r19.u8);
	// mr r9,r26
	ctx.r9.u64 = ctx.r26.u64;
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// stw r10,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r10.u32);
	// mr r9,r19
	ctx.r9.u64 = ctx.r19.u64;
	// addi r11,r31,96
	ctx.r11.s64 = ctx.r31.s64 + 96;
	// stw r26,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r26.u32);
	// addi r10,r31,112
	ctx.r10.s64 = ctx.r31.s64 + 112;
	// stb r19,104(r31)
	PPC_STORE_U8(ctx.r31.u32 + 104, ctx.r19.u8);
	// addi r9,r31,112
	ctx.r9.s64 = ctx.r31.s64 + 112;
	// stw r11,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r11.u32);
	// stw r26,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r26.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// stw r10,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r10.u32);
	// li r5,0
	ctx.r5.s64 = 0;
	// stw r9,116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 116, ctx.r9.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// bl 0x831796c4
	ctx.lr = 0x82A083B4;
	__imp__NtCreateEvent(ctx, base);
	// lis r28,-32761
	ctx.r28.s64 = -2147024896;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x82a083e4
	if (!ctx.cr6.lt) goto loc_82A083E4;
	// bl 0x831795c4
	ctx.lr = 0x82A083C4;
	__imp__RtlNtStatusToDosError(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bgt cr6,0x82a083d4
	if (ctx.cr6.gt) goto loc_82A083D4;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// b 0x82a083dc
	goto loc_82A083DC;
loc_82A083D4:
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// or r25,r11,r28
	ctx.r25.u64 = ctx.r11.u64 | ctx.r28.u64;
loc_82A083DC:
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// blt cr6,0x82a088e0
	if (ctx.cr6.lt) goto loc_82A088E0;
loc_82A083E4:
	// cmpwi cr6,r16,0
	ctx.cr6.compare<int32_t>(ctx.r16.s32, 0, ctx.xer);
	// bne cr6,0x82a08408
	if (!ctx.cr6.eq) goto loc_82A08408;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// bne cr6,0x82a08408
	if (!ctx.cr6.eq) goto loc_82A08408;
	// rlwinm r11,r22,0,25,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 0) & 0x7E;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// rlwinm r11,r11,0,30,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFFC3;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a0840c
	if (ctx.cr6.eq) goto loc_82A0840C;
loc_82A08408:
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
loc_82A0840C:
	// bl 0x82a06e80
	ctx.lr = 0x82A08410;
	sub_82A06E80(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x82a08434
	if (!ctx.cr6.lt) goto loc_82A08434;
	// bl 0x831795c4
	ctx.lr = 0x82A0841C;
	__imp__RtlNtStatusToDosError(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bgt cr6,0x82a0842c
	if (ctx.cr6.gt) goto loc_82A0842C;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// b 0x82a08434
	goto loc_82A08434;
loc_82A0842C:
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// or r25,r11,r28
	ctx.r25.u64 = ctx.r11.u64 | ctx.r28.u64;
loc_82A08434:
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// blt cr6,0x82a088e0
	if (ctx.cr6.lt) goto loc_82A088E0;
	// lis r11,-32096
	ctx.r11.s64 = -2103443456;
	// mr r8,r31
	ctx.r8.u64 = ctx.r31.u64;
	// li r9,129
	ctx.r9.s64 = 129;
	// addi r7,r11,30648
	ctx.r7.s64 = ctx.r11.s64 + 30648;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r5,r31,24
	ctx.r5.s64 = ctx.r31.s64 + 24;
	// lis r4,1
	ctx.r4.s64 = 65536;
	// addi r3,r31,28
	ctx.r3.s64 = ctx.r31.s64 + 28;
	// bl 0x831796b4
	ctx.lr = 0x82A08460;
	__imp__ExCreateThread(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82a08488
	if (ctx.cr6.lt) goto loc_82A08488;
	// li r4,17
	ctx.r4.s64 = 17;
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// bl 0x831793d4
	ctx.lr = 0x82A08474;
	__imp__KeSetBasePriorityThread(ctx, base);
	// addi r5,r1,112
	ctx.r5.s64 = ctx.r1.s64 + 112;
	// slw r4,r19,r18
	ctx.r4.u64 = ctx.r18.u8 & 0x20 ? 0 : (ctx.r19.u32 << (ctx.r18.u8 & 0x3F));
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// bl 0x831796a4
	ctx.lr = 0x82A08484;
	__imp__KeSetAffinityThread(ctx, base);
	// b 0x82a084a4
	goto loc_82A084A4;
loc_82A08488:
	// bl 0x831795c4
	ctx.lr = 0x82A0848C;
	__imp__RtlNtStatusToDosError(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bgt cr6,0x82a0849c
	if (ctx.cr6.gt) goto loc_82A0849C;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// b 0x82a084a4
	goto loc_82A084A4;
loc_82A0849C:
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// or r25,r11,r28
	ctx.r25.u64 = ctx.r11.u64 | ctx.r28.u64;
loc_82A084A4:
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// blt cr6,0x82a088e0
	if (ctx.cr6.lt) goto loc_82A088E0;
	// addi r3,r31,44
	ctx.r3.s64 = ctx.r31.s64 + 44;
	// bl 0x8268c948
	ctx.lr = 0x82A084B4;
	sub_8268C948(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82a088e0
	if (ctx.cr6.lt) goto loc_82A088E0;
	// cmpwi cr6,r24,1
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 1, ctx.xer);
	// bne cr6,0x82a085a0
	if (!ctx.cr6.eq) goto loc_82A085A0;
	// bl 0x82a03998
	ctx.lr = 0x82A084CC;
	sub_82A03998(ctx, base);
	// li r10,7
	ctx.r10.s64 = 7;
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// stw r26,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r26.u32);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r9,r26
	ctx.r9.u64 = ctx.r26.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82A084E4:
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x82a084e4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82A084E4;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// blt cr6,0x82a08590
	if (ctx.cr6.lt) goto loc_82A08590;
	// lis r10,-31964
	ctx.r10.s64 = -2094792704;
	// lwz r11,11240(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11240);
	// lwz r9,44(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// li r8,3
	ctx.r8.s64 = 3;
	// addi r7,r11,60
	ctx.r7.s64 = ctx.r11.s64 + 60;
	// addi r6,r11,116
	ctx.r6.s64 = ctx.r11.s64 + 116;
	// stw r8,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r8.u32);
	// addi r5,r11,236
	ctx.r5.s64 = ctx.r11.s64 + 236;
	// stw r7,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r7.u32);
	// lwz r10,29304(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 29304);
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// stw r9,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r9.u32);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// stw r4,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r4.u32);
	// stw r6,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r6.u32);
	// stw r5,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r5.u32);
	// stw r10,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r10.u32);
	// bl 0x82a3e020
	ctx.lr = 0x82A08540;
	sub_82A3E020(ctx, base);
	// lis r11,-31743
	ctx.r11.s64 = -2080309248;
	// ori r10,r11,1
	ctx.r10.u64 = ctx.r11.u64 | 1;
	// subf. r11,r10,r3
	ctx.r11.s64 = ctx.r3.s64 - ctx.r10.s64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82a08568
	if (ctx.cr0.eq) goto loc_82A08568;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x82a08578
	if (!ctx.cr6.eq) goto loc_82A08578;
	// lis r3,-31999
	ctx.r3.s64 = -2097086464;
	// ori r3,r3,15
	ctx.r3.u64 = ctx.r3.u64 | 15;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// b 0x82a085a0
	goto loc_82A085A0;
loc_82A08568:
	// lis r3,-31999
	ctx.r3.s64 = -2097086464;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// b 0x82a085a0
	goto loc_82A085A0;
loc_82A08578:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82a08588
	if (!ctx.cr6.eq) goto loc_82A08588;
	// stw r19,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r19.u32);
	// b 0x82a085a0
	goto loc_82A085A0;
loc_82A08588:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bgt cr6,0x82a08598
	if (ctx.cr6.gt) goto loc_82A08598;
loc_82A08590:
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// b 0x82a085a0
	goto loc_82A085A0;
loc_82A08598:
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// or r25,r11,r28
	ctx.r25.u64 = ctx.r11.u64 | ctx.r28.u64;
loc_82A085A0:
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// blt cr6,0x82a088e0
	if (ctx.cr6.lt) goto loc_82A088E0;
	// cmpwi cr6,r21,0
	ctx.cr6.compare<int32_t>(ctx.r21.s32, 0, ctx.xer);
	// beq cr6,0x82a08654
	if (ctx.cr6.eq) goto loc_82A08654;
	// lwz r11,11240(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11240);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82a085d0
	if (!ctx.cr6.eq) goto loc_82A085D0;
	// bl 0x82a03d48
	ctx.lr = 0x82A085C0;
	sub_82A03D48(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82a088e0
	if (ctx.cr6.lt) goto loc_82A088E0;
	// lwz r11,12080(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12080);
loc_82A085D0:
	// addi r29,r11,4
	ctx.r29.s64 = ctx.r11.s64 + 4;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82a085ec
	if (!ctx.cr6.eq) goto loc_82A085EC;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r30,r11,-26560
	ctx.r30.s64 = ctx.r11.s64 + -26560;
	// b 0x82a085f0
	goto loc_82A085F0;
loc_82A085EC:
	// addi r30,r1,416
	ctx.r30.s64 = ctx.r1.s64 + 416;
loc_82A085F0:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a78410
	ctx.lr = 0x82A085F8;
	sub_82A78410(ctx, base);
	// cmpwi cr6,r3,-1
	ctx.cr6.compare<int32_t>(ctx.r3.s32, -1, ctx.xer);
	// bne cr6,0x82a0860c
	if (!ctx.cr6.eq) goto loc_82A0860C;
	// lis r25,-31999
	ctx.r25.s64 = -2097086464;
	// ori r25,r25,13
	ctx.r25.u64 = ctx.r25.u64 | 13;
	// b 0x82a088e0
	goto loc_82A088E0;
loc_82A0860C:
	// not r11,r22
	ctx.r11.u64 = ~ctx.r22.u64;
	// lwz r3,44(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// addi r6,r31,12084
	ctx.r6.s64 = ctx.r31.s64 + 12084;
	// rlwinm r7,r11,19,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 19) & 0x1;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82a43138
	ctx.lr = 0x82A08628;
	sub_82A43138(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82a0863c
	if (!ctx.cr6.eq) goto loc_82A0863C;
	// mr r11,r19
	ctx.r11.u64 = ctx.r19.u64;
	// stw r19,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r19.u32);
	// b 0x82a08654
	goto loc_82A08654;
loc_82A0863C:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bgt cr6,0x82a0864c
	if (ctx.cr6.gt) goto loc_82A0864C;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// b 0x82a08654
	goto loc_82A08654;
loc_82A0864C:
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// or r25,r11,r28
	ctx.r25.u64 = ctx.r11.u64 | ctx.r28.u64;
loc_82A08654:
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// blt cr6,0x82a088e0
	if (ctx.cr6.lt) goto loc_82A088E0;
	// cmpwi cr6,r20,0
	ctx.cr6.compare<int32_t>(ctx.r20.s32, 0, ctx.xer);
	// beq cr6,0x82a08678
	if (ctx.cr6.eq) goto loc_82A08678;
	// bl 0x82a138c0
	ctx.lr = 0x82A08668;
	sub_82A138C0(ctx, base);
	// rlwinm r11,r3,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0x1;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// xori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 ^ 1;
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
loc_82A08678:
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// blt cr6,0x82a088e0
	if (ctx.cr6.lt) goto loc_82A088E0;
	// addi r10,r1,116
	ctx.r10.s64 = ctx.r1.s64 + 116;
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// rlwinm r9,r22,0,25,25
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 0) & 0x40;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// stw r26,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r26.u32);
	// stw r26,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r26.u32);
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// beq cr6,0x82a086ac
	if (ctx.cr6.eq) goto loc_82A086AC;
	// lwz r11,120(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// ori r10,r11,1
	ctx.r10.u64 = ctx.r11.u64 | 1;
	// b 0x82a086c0
	goto loc_82A086C0;
loc_82A086AC:
	// rlwinm r11,r22,0,24,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 0) & 0x80;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a086c4
	if (ctx.cr6.eq) goto loc_82A086C4;
	// lwz r11,120(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// ori r10,r11,256
	ctx.r10.u64 = ctx.r11.u64 | 256;
loc_82A086C0:
	// stw r10,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r10.u32);
loc_82A086C4:
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82a3e1b0
	ctx.lr = 0x82A086CC;
	sub_82A3E1B0(ctx, base);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a086ec
	if (ctx.cr6.eq) goto loc_82A086EC;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bgt cr6,0x82a086e4
	if (ctx.cr6.gt) goto loc_82A086E4;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// b 0x82a086ec
	goto loc_82A086EC;
loc_82A086E4:
	// clrlwi r11,r3,16
	ctx.r11.u64 = ctx.r3.u32 & 0xFFFF;
	// or r25,r11,r28
	ctx.r25.u64 = ctx.r11.u64 | ctx.r28.u64;
loc_82A086EC:
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// blt cr6,0x82a088e0
	if (ctx.cr6.lt) goto loc_82A088E0;
	// lis r4,-21348
	ctx.r4.s64 = -1399062528;
	// li r3,16384
	ctx.r3.s64 = 16384;
	// bl 0x82a3df10
	ctx.lr = 0x82A08700;
	sub_82A3DF10(ctx, base);
	// stw r3,11072(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11072, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82a08718
	if (!ctx.cr6.eq) goto loc_82A08718;
	// lis r25,-32761
	ctx.r25.s64 = -2147024896;
	// ori r25,r25,14
	ctx.r25.u64 = ctx.r25.u64 | 14;
	// b 0x82a088e0
	goto loc_82A088E0;
loc_82A08718:
	// lis r6,6690
	ctx.r6.s64 = 438435840;
	// stw r26,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r26.u32);
	// addi r11,r31,11076
	ctx.r11.s64 = ctx.r31.s64 + 11076;
	// stw r26,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r26.u32);
	// mr r10,r23
	ctx.r10.u64 = ctx.r23.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// ori r6,r6,43608
	ctx.r6.u64 = ctx.r6.u64 | 43608;
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,1
	ctx.r4.s64 = 1;
	// li r3,8192
	ctx.r3.s64 = 8192;
	// bl 0x82af4258
	ctx.lr = 0x82A08750;
	sub_82AF4258(ctx, base);
	// addi r3,r31,11076
	ctx.r3.s64 = ctx.r31.s64 + 11076;
	// lwz r4,11072(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11072);
	// bl 0x82af44c8
	ctx.lr = 0x82A0875C;
	sub_82AF44C8(ctx, base);
	// lis r4,-21348
	ctx.r4.s64 = -1399062528;
	// li r3,16384
	ctx.r3.s64 = 16384;
	// bl 0x82a3df10
	ctx.lr = 0x82A08768;
	sub_82A3DF10(ctx, base);
	// stw r3,11128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11128, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82a08780
	if (!ctx.cr6.eq) goto loc_82A08780;
	// lis r25,-32761
	ctx.r25.s64 = -2147024896;
	// ori r25,r25,14
	ctx.r25.u64 = ctx.r25.u64 | 14;
	// b 0x82a088e0
	goto loc_82A088E0;
loc_82A08780:
	// lis r6,6690
	ctx.r6.s64 = 438435840;
	// stw r26,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r26.u32);
	// addi r11,r31,11132
	ctx.r11.s64 = ctx.r31.s64 + 11132;
	// stw r26,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r26.u32);
	// mr r10,r23
	ctx.r10.u64 = ctx.r23.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// ori r6,r6,43608
	ctx.r6.u64 = ctx.r6.u64 | 43608;
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,1
	ctx.r4.s64 = 1;
	// li r3,8192
	ctx.r3.s64 = 8192;
	// bl 0x82af4258
	ctx.lr = 0x82A087B8;
	sub_82AF4258(ctx, base);
	// addi r3,r31,11132
	ctx.r3.s64 = ctx.r31.s64 + 11132;
	// lwz r4,11128(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11128);
	// bl 0x82af44c8
	ctx.lr = 0x82A087C4;
	sub_82AF44C8(ctx, base);
	// lis r4,-21348
	ctx.r4.s64 = -1399062528;
	// li r3,16384
	ctx.r3.s64 = 16384;
	// bl 0x82a3df10
	ctx.lr = 0x82A087D0;
	sub_82A3DF10(ctx, base);
	// stw r3,11184(r31)
	PPC_STORE_U32(ctx.r31.u32 + 11184, ctx.r3.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82a087e8
	if (!ctx.cr6.eq) goto loc_82A087E8;
	// lis r25,-32761
	ctx.r25.s64 = -2147024896;
	// ori r25,r25,14
	ctx.r25.u64 = ctx.r25.u64 | 14;
	// b 0x82a088e0
	goto loc_82A088E0;
loc_82A087E8:
	// addi r11,r31,11188
	ctx.r11.s64 = ctx.r31.s64 + 11188;
	// stw r26,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r26.u32);
	// stw r26,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r26.u32);
	// lis r6,6690
	ctx.r6.s64 = 438435840;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// mr r10,r23
	ctx.r10.u64 = ctx.r23.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// ori r6,r6,88
	ctx.r6.u64 = ctx.r6.u64 | 88;
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,1
	ctx.r4.s64 = 1;
	// li r3,8192
	ctx.r3.s64 = 8192;
	// bl 0x82af4258
	ctx.lr = 0x82A08820;
	sub_82AF4258(ctx, base);
	// addi r3,r31,11188
	ctx.r3.s64 = ctx.r31.s64 + 11188;
	// lwz r4,11184(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11184);
	// bl 0x82af44c8
	ctx.lr = 0x82A0882C;
	sub_82AF44C8(ctx, base);
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
	// rlwinm r9,r26,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 1) & 0xFFFFFFFE;
loc_82A08838:
	// lwz r8,11184(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 11184);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// sthx r11,r9,r8
	PPC_STORE_U16(ctx.r9.u32 + ctx.r8.u32, ctx.r11.u16);
	// clrlwi r11,r10,16
	ctx.r11.u64 = ctx.r10.u32 & 0xFFFF;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,8192
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8192, ctx.xer);
	// rlwinm r9,r11,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0xFFFFFFFE;
	// blt cr6,0x82a08838
	if (ctx.cr6.lt) goto loc_82A08838;
	// li r5,8192
	ctx.r5.s64 = 8192;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,11188
	ctx.r3.s64 = ctx.r31.s64 + 11188;
	// bl 0x82a04120
	ctx.lr = 0x82A08868;
	sub_82A04120(ctx, base);
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x82a13c80
	ctx.lr = 0x82A08870;
	sub_82A13C80(ctx, base);
	// cmpwi cr6,r16,0
	ctx.cr6.compare<int32_t>(ctx.r16.s32, 0, ctx.xer);
	// beq cr6,0x82a088e0
	if (ctx.cr6.eq) goto loc_82A088E0;
	// bl 0x82a06690
	ctx.lr = 0x82A0887C;
	sub_82A06690(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82a088e0
	if (ctx.cr6.lt) goto loc_82A088E0;
	// rlwinm r11,r22,0,19,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 0) & 0x1000;
	// li r30,19
	ctx.r30.s64 = 19;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a0889c
	if (ctx.cr6.eq) goto loc_82A0889C;
	// li r30,83
	ctx.r30.s64 = 83;
loc_82A0889C:
	// rlwinm r11,r22,0,21,21
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 0) & 0x400;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a088ac
	if (ctx.cr6.eq) goto loc_82A088AC;
	// ori r30,r30,256
	ctx.r30.u64 = ctx.r30.u64 | 256;
loc_82A088AC:
	// bl 0x82a3df00
	ctx.lr = 0x82A088B0;
	sub_82A3DF00(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82a088bc
	if (ctx.cr6.eq) goto loc_82A088BC;
	// ori r30,r30,128
	ctx.r30.u64 = ctx.r30.u64 | 128;
loc_82A088BC:
	// mr r4,r18
	ctx.r4.u64 = ctx.r18.u64;
	// lwz r5,868(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 868);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82a13400
	ctx.lr = 0x82A088CC;
	sub_82A13400(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82a088e0
	if (ctx.cr6.lt) goto loc_82A088E0;
	// mr r11,r19
	ctx.r11.u64 = ctx.r19.u64;
	// stw r19,10632(r31)
	PPC_STORE_U32(ctx.r31.u32 + 10632, ctx.r19.u32);
loc_82A088E0:
	// bl 0x82a00200
	ctx.lr = 0x82A088E4;
	sub_82A00200(ctx, base);
	// addi r11,r1,120
	ctx.r11.s64 = ctx.r1.s64 + 120;
	// std r26,112(r1)
	PPC_STORE_U64(ctx.r1.u32 + 112, ctx.r26.u64);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// std r26,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r26.u64);
	// bl 0x83178d74
	ctx.lr = 0x82A088F8;
	__imp__XamGetActiveDashAppInfo(ctx, base);
	// lis r30,-31963
	ctx.r30.s64 = -2094727168;
	// mr r10,r25
	ctx.r10.u64 = ctx.r25.u64;
	// lwz r5,120(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// mr r7,r22
	ctx.r7.u64 = ctx.r22.u64;
	// ld r4,112(r1)
	ctx.r4.u64 = PPC_LOAD_U64(ctx.r1.u32 + 112);
	// addi r3,r31,10536
	ctx.r3.s64 = ctx.r31.s64 + 10536;
	// lwz r6,23632(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 23632);
	// xor r9,r6,r22
	ctx.r9.u64 = ctx.r6.u64 ^ ctx.r22.u64;
	// and r8,r9,r22
	ctx.r8.u64 = ctx.r9.u64 & ctx.r22.u64;
	// and r9,r9,r6
	ctx.r9.u64 = ctx.r9.u64 & ctx.r6.u64;
	// bl 0x82a037b0
	ctx.lr = 0x82A08924;
	sub_82A037B0(ctx, base);
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// blt cr6,0x82a08950
	if (ctx.cr6.lt) goto loc_82A08950;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82a05b40
	ctx.lr = 0x82A08934;
	sub_82A05B40(ctx, base);
	// mr r11,r19
	ctx.r11.u64 = ctx.r19.u64;
	// stw r22,23632(r30)
	PPC_STORE_U32(ctx.r30.u32 + 23632, ctx.r22.u32);
	// stw r19,29308(r17)
	PPC_STORE_U32(ctx.r17.u32 + 29308, ctx.r19.u32);
	// sync 
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// bl 0x83179694
	ctx.lr = 0x82A0894C;
	__imp__KeResumeThread(ctx, base);
	// b 0x82a08964
	goto loc_82A08964;
loc_82A08950:
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a08960
	if (ctx.cr6.eq) goto loc_82A08960;
	// bl 0x83179694
	ctx.lr = 0x82A08960;
	__imp__KeResumeThread(ctx, base);
loc_82A08960:
	// bl 0x82a03e88
	ctx.lr = 0x82A08964;
	sub_82A03E88(ctx, base);
loc_82A08964:
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// blt cr6,0x82a0899c
	if (ctx.cr6.lt) goto loc_82A0899C;
	// stw r22,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r22.u32);
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// stw r18,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r18.u32);
	// li r3,769
	ctx.r3.s64 = 769;
	// bl 0x83178d24
	ctx.lr = 0x82A08980;
	__imp__XamXStudioRequest(ctx, base);
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// bl 0x831791b4
	ctx.lr = 0x82A08988;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// addi r1,r1,832
	ctx.r1.s64 = ctx.r1.s64 + 832;
	// b 0x82fa7690
	__restgprlr_14(ctx, base);
	return;
loc_82A08994:
	// lis r25,-32761
	ctx.r25.s64 = -2147024896;
	// ori r25,r25,1247
	ctx.r25.u64 = ctx.r25.u64 | 1247;
loc_82A0899C:
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// bl 0x831791b4
	ctx.lr = 0x82A089A4;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// addi r1,r1,832
	ctx.r1.s64 = ctx.r1.s64 + 832;
	// b 0x82fa7690
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A089B0"))) PPC_WEAK_FUNC(sub_82A089B0);
PPC_FUNC_IMPL(__imp__sub_82A089B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa765c
	ctx.lr = 0x82A089B8;
	__savegprlr_21(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// rlwinm r11,r3,0,22,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x200;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r23,r4
	ctx.r23.u64 = ctx.r4.u64;
	// li r25,2
	ctx.r25.s64 = 2;
	// li r24,2
	ctx.r24.s64 = 2;
	// li r22,2
	ctx.r22.s64 = 2;
	// li r21,2
	ctx.r21.s64 = 2;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a089f0
	if (ctx.cr6.eq) goto loc_82A089F0;
loc_82A089E0:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82fa76ac
	__restgprlr_21(ctx, base);
	return;
loc_82A089F0:
	// rlwinm r27,r31,0,18,18
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0x2000;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x82a08a08
	if (ctx.cr6.eq) goto loc_82A08A08;
	// bl 0x82c463a0
	ctx.lr = 0x82A08A00;
	sub_82C463A0(ctx, base);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// beq cr6,0x82a089e0
	if (ctx.cr6.eq) goto loc_82A089E0;
loc_82A08A08:
	// rlwinm r7,r31,0,28,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0x8;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lis r9,-32250
	ctx.r9.s64 = -2113536000;
	// lis r8,-32250
	ctx.r8.s64 = -2113536000;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// addi r30,r11,-26216
	ctx.r30.s64 = ctx.r11.s64 + -26216;
	// addi r26,r10,-26236
	ctx.r26.s64 = ctx.r10.s64 + -26236;
	// addi r28,r9,-26252
	ctx.r28.s64 = ctx.r9.s64 + -26252;
	// addi r29,r8,-26264
	ctx.r29.s64 = ctx.r8.s64 + -26264;
	// bne cr6,0x82a08a4c
	if (!ctx.cr6.eq) goto loc_82A08A4C;
	// clrlwi r11,r31,31
	ctx.r11.u64 = ctx.r31.u32 & 0x1;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82a08a4c
	if (!ctx.cr6.eq) goto loc_82A08A4C;
	// rlwinm r11,r31,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0x80000000;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82a08ab8
	if (!ctx.cr6.eq) goto loc_82A08AB8;
loc_82A08A4C:
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r5,r11,-26288
	ctx.r5.s64 = ctx.r11.s64 + -26288;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,67
	ctx.r6.s64 = 67;
	// li r3,255
	ctx.r3.s64 = 255;
	// bl 0x83178d94
	ctx.lr = 0x82A08A70;
	__imp__XamContentOpenFile(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a08ab8
	if (ctx.cr6.eq) goto loc_82A08AB8;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r5,r11,-26312
	ctx.r5.s64 = ctx.r11.s64 + -26312;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,67
	ctx.r6.s64 = 67;
	// li r3,255
	ctx.r3.s64 = 255;
	// bl 0x83178d94
	ctx.lr = 0x82A08AA0;
	__imp__XamContentOpenFile(ctx, base);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a08ab8
	if (ctx.cr6.eq) goto loc_82A08AB8;
	// lis r31,-31999
	ctx.r31.s64 = -2097086464;
	// ori r31,r31,13
	ctx.r31.u64 = ctx.r31.u64 | 13;
	// b 0x82a08c40
	goto loc_82A08C40;
loc_82A08AB8:
	// rlwinm r11,r31,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0x80000000;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82a08b30
	if (!ctx.cr6.eq) goto loc_82A08B30;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r5,r11,-26340
	ctx.r5.s64 = ctx.r11.s64 + -26340;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,67
	ctx.r6.s64 = 67;
	// li r3,255
	ctx.r3.s64 = 255;
	// bl 0x83178d94
	ctx.lr = 0x82A08AE8;
	__imp__XamContentOpenFile(ctx, base);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a08b30
	if (ctx.cr6.eq) goto loc_82A08B30;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r5,r11,-26368
	ctx.r5.s64 = ctx.r11.s64 + -26368;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,67
	ctx.r6.s64 = 67;
	// li r3,255
	ctx.r3.s64 = 255;
	// bl 0x83178d94
	ctx.lr = 0x82A08B18;
	__imp__XamContentOpenFile(ctx, base);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a08b30
	if (ctx.cr6.eq) goto loc_82A08B30;
	// lis r31,-31999
	ctx.r31.s64 = -2097086464;
	// ori r31,r31,13
	ctx.r31.u64 = ctx.r31.u64 | 13;
	// b 0x82a08c40
	goto loc_82A08C40;
loc_82A08B30:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x82a08ba4
	if (ctx.cr6.eq) goto loc_82A08BA4;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r5,r11,-26396
	ctx.r5.s64 = ctx.r11.s64 + -26396;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,67
	ctx.r6.s64 = 67;
	// li r3,255
	ctx.r3.s64 = 255;
	// bl 0x83178d94
	ctx.lr = 0x82A08B5C;
	__imp__XamContentOpenFile(ctx, base);
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a08ba4
	if (ctx.cr6.eq) goto loc_82A08BA4;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r5,r11,-26424
	ctx.r5.s64 = ctx.r11.s64 + -26424;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,67
	ctx.r6.s64 = 67;
	// li r3,255
	ctx.r3.s64 = 255;
	// bl 0x83178d94
	ctx.lr = 0x82A08B8C;
	__imp__XamContentOpenFile(ctx, base);
	// mr r22,r3
	ctx.r22.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a08ba4
	if (ctx.cr6.eq) goto loc_82A08BA4;
	// lis r31,-31999
	ctx.r31.s64 = -2097086464;
	// ori r31,r31,13
	ctx.r31.u64 = ctx.r31.u64 | 13;
	// b 0x82a08c40
	goto loc_82A08C40;
loc_82A08BA4:
	// rlwinm r11,r31,0,16,16
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0x8000;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a08c1c
	if (ctx.cr6.eq) goto loc_82A08C1C;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r5,r11,-26460
	ctx.r5.s64 = ctx.r11.s64 + -26460;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,67
	ctx.r6.s64 = 67;
	// li r3,255
	ctx.r3.s64 = 255;
	// bl 0x83178d94
	ctx.lr = 0x82A08BD4;
	__imp__XamContentOpenFile(ctx, base);
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a08c1c
	if (ctx.cr6.eq) goto loc_82A08C1C;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// addi r5,r11,-26492
	ctx.r5.s64 = ctx.r11.s64 + -26492;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,67
	ctx.r6.s64 = 67;
	// li r3,255
	ctx.r3.s64 = 255;
	// bl 0x83178d94
	ctx.lr = 0x82A08C04;
	__imp__XamContentOpenFile(ctx, base);
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a08c1c
	if (ctx.cr6.eq) goto loc_82A08C1C;
	// lis r31,-31999
	ctx.r31.s64 = -2097086464;
	// ori r31,r31,13
	ctx.r31.u64 = ctx.r31.u64 | 13;
	// b 0x82a08c40
	goto loc_82A08C40;
loc_82A08C1C:
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// addi r6,r11,-26508
	ctx.r6.s64 = ctx.r11.s64 + -26508;
	// addi r5,r10,-26524
	ctx.r5.s64 = ctx.r10.s64 + -26524;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a07ff0
	ctx.lr = 0x82A08C3C;
	sub_82A07FF0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
loc_82A08C40:
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// bne cr6,0x82a08c54
	if (!ctx.cr6.eq) goto loc_82A08C54;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x83178d84
	ctx.lr = 0x82A08C54;
	__imp__XamContentClose(ctx, base);
loc_82A08C54:
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// bne cr6,0x82a08c68
	if (!ctx.cr6.eq) goto loc_82A08C68;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x83178d84
	ctx.lr = 0x82A08C68;
	__imp__XamContentClose(ctx, base);
loc_82A08C68:
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 0, ctx.xer);
	// bne cr6,0x82a08c7c
	if (!ctx.cr6.eq) goto loc_82A08C7C;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x83178d84
	ctx.lr = 0x82A08C7C;
	__imp__XamContentClose(ctx, base);
loc_82A08C7C:
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, 0, ctx.xer);
	// bne cr6,0x82a08c90
	if (!ctx.cr6.eq) goto loc_82A08C90;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x83178d84
	ctx.lr = 0x82A08C90;
	__imp__XamContentClose(ctx, base);
loc_82A08C90:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82fa76ac
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A08C9C"))) PPC_WEAK_FUNC(sub_82A08C9C);
PPC_FUNC_IMPL(__imp__sub_82A08C9C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A08CA0"))) PPC_WEAK_FUNC(sub_82A08CA0);
PPC_FUNC_IMPL(__imp__sub_82A08CA0) {
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
loc_82A08CB4:
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
	// bne 0x82a08cb4
	if (!ctx.cr0.eq) goto loc_82A08CB4;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mr r31,r10
	ctx.r31.u64 = ctx.r10.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82a08cf4
	if (!ctx.cr6.eq) goto loc_82A08CF4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r4,1
	ctx.r4.s64 = 1;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82A08CF4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82A08CF4:
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

__attribute__((alias("__imp__sub_82A08D0C"))) PPC_WEAK_FUNC(sub_82A08D0C);
PPC_FUNC_IMPL(__imp__sub_82A08D0C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A08D10"))) PPC_WEAK_FUNC(sub_82A08D10);
PPC_FUNC_IMPL(__imp__sub_82A08D10) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// addi r11,r11,23656
	ctx.r11.s64 = ctx.r11.s64 + 23656;
	// stw r4,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r4.u32);
	// blelr cr6
	if (!ctx.cr6.gt) return;
	// mulli r10,r3,48
	ctx.r10.s64 = ctx.r3.s64 * 48;
	// addi r11,r11,44
	ctx.r11.s64 = ctx.r11.s64 + 44;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// b 0x82a14740
	sub_82A14740(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A08D3C"))) PPC_WEAK_FUNC(sub_82A08D3C);
PPC_FUNC_IMPL(__imp__sub_82A08D3C) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A08D40"))) PPC_WEAK_FUNC(sub_82A08D40);
PPC_FUNC_IMPL(__imp__sub_82A08D40) {
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
	// bl 0x82a15bf0
	ctx.lr = 0x82A08D60;
	sub_82A15BF0(ctx, base);
	// lis r10,-31963
	ctx.r10.s64 = -2094727168;
	// mulli r11,r31,48
	ctx.r11.s64 = ctx.r31.s64 * 48;
	// addi r10,r10,23656
	ctx.r10.s64 = ctx.r10.s64 + 23656;
	// addi r10,r10,44
	ctx.r10.s64 = ctx.r10.s64 + 44;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82a08d94
	if (!ctx.cr6.eq) goto loc_82A08D94;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82a15650
	ctx.lr = 0x82A08D90;
	sub_82A15650(ctx, base);
	// b 0x82a08da0
	goto loc_82A08DA0;
loc_82A08D94:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82a14708
	ctx.lr = 0x82A08D9C;
	sub_82A14708(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_82A08DA0:
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

__attribute__((alias("__imp__sub_82A08DB8"))) PPC_WEAK_FUNC(sub_82A08DB8);
PPC_FUNC_IMPL(__imp__sub_82A08DB8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// mulli r10,r3,48
	ctx.r10.s64 = ctx.r3.s64 * 48;
	// addi r11,r11,23656
	ctx.r11.s64 = ctx.r11.s64 + 23656;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// addi r8,r11,20
	ctx.r8.s64 = ctx.r11.s64 + 20;
	// lis r7,-32255
	ctx.r7.s64 = -2113863680;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// lfs f13,5184(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 5184);
	ctx.f13.f64 = double(temp.f32);
	// lfsx f0,r10,r8
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	ctx.f0.f64 = double(temp.f32);
	// lfs f1,23392(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + 23392);
	ctx.f1.f64 = double(temp.f32);
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// ble cr6,0x82a08df4
	if (!ctx.cr6.gt) goto loc_82A08DF4;
	// lis r9,-32233
	ctx.r9.s64 = -2112421888;
	// lfs f13,24436(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 24436);
	ctx.f13.f64 = double(temp.f32);
	// fdivs f1,f13,f0
	ctx.f1.f64 = double(float(ctx.f13.f64 / ctx.f0.f64));
loc_82A08DF4:
	// addi r9,r11,32
	ctx.r9.s64 = ctx.r11.s64 + 32;
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// lwzx r9,r10,r9
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// lfsx f2,r10,r11
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	ctx.f2.f64 = double(temp.f32);
	// addic r11,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r11.s64 = ctx.r9.s64 + -1;
	// subfe r7,r11,r9
	temp.u8 = (~ctx.r11.u32 + ctx.r9.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r7.u64 = ~ctx.r11.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// b 0x82a15d20
	sub_82A15D20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A08E14"))) PPC_WEAK_FUNC(sub_82A08E14);
PPC_FUNC_IMPL(__imp__sub_82A08E14) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A08E18"))) PPC_WEAK_FUNC(sub_82A08E18);
PPC_FUNC_IMPL(__imp__sub_82A08E18) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// mulli r10,r3,48
	ctx.r10.s64 = ctx.r3.s64 * 48;
	// addi r11,r11,23656
	ctx.r11.s64 = ctx.r11.s64 + 23656;
	// addi r11,r11,44
	ctx.r11.s64 = ctx.r11.s64 + 44;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82a08e40
	if (!ctx.cr6.eq) goto loc_82A08E40;
	// lis r3,-31999
	ctx.r3.s64 = -2097086464;
	// ori r3,r3,5
	ctx.r3.u64 = ctx.r3.u64 | 5;
	// blr 
	return;
loc_82A08E40:
	// b 0x82a15748
	sub_82A15748(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A08E44"))) PPC_WEAK_FUNC(sub_82A08E44);
PPC_FUNC_IMPL(__imp__sub_82A08E44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A08E48"))) PPC_WEAK_FUNC(sub_82A08E48);
PPC_FUNC_IMPL(__imp__sub_82A08E48) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// bne cr6,0x82a08e5c
	if (!ctx.cr6.eq) goto loc_82A08E5C;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// blr 
	return;
loc_82A08E5C:
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// mulli r10,r3,48
	ctx.r10.s64 = ctx.r3.s64 * 48;
	// addi r11,r11,23656
	ctx.r11.s64 = ctx.r11.s64 + 23656;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r11,r11,40
	ctx.r11.s64 = ctx.r11.s64 + 40;
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A08E7C"))) PPC_WEAK_FUNC(sub_82A08E7C);
PPC_FUNC_IMPL(__imp__sub_82A08E7C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A08E80"))) PPC_WEAK_FUNC(sub_82A08E80);
PPC_FUNC_IMPL(__imp__sub_82A08E80) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// mulli r10,r3,48
	ctx.r10.s64 = ctx.r3.s64 * 48;
	// addi r11,r11,23656
	ctx.r11.s64 = ctx.r11.s64 + 23656;
	// addi r11,r11,44
	ctx.r11.s64 = ctx.r11.s64 + 44;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beqlr cr6
	if (ctx.cr6.eq) return;
	// b 0x82a14af0
	sub_82A14AF0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A08EA0"))) PPC_WEAK_FUNC(sub_82A08EA0);
PPC_FUNC_IMPL(__imp__sub_82A08EA0) {
	PPC_FUNC_PROLOGUE();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A08EA4"))) PPC_WEAK_FUNC(sub_82A08EA4);
PPC_FUNC_IMPL(__imp__sub_82A08EA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A08EA8"))) PPC_WEAK_FUNC(sub_82A08EA8);
PPC_FUNC_IMPL(__imp__sub_82A08EA8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// mulli r10,r3,48
	ctx.r10.s64 = ctx.r3.s64 * 48;
	// addi r11,r11,23656
	ctx.r11.s64 = ctx.r11.s64 + 23656;
	// addi r11,r11,44
	ctx.r11.s64 = ctx.r11.s64 + 44;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82a08ed0
	if (!ctx.cr6.eq) goto loc_82A08ED0;
	// lis r3,-31999
	ctx.r3.s64 = -2097086464;
	// ori r3,r3,5
	ctx.r3.u64 = ctx.r3.u64 | 5;
	// blr 
	return;
loc_82A08ED0:
	// b 0x82a153c0
	sub_82A153C0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A08ED4"))) PPC_WEAK_FUNC(sub_82A08ED4);
PPC_FUNC_IMPL(__imp__sub_82A08ED4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A08ED8"))) PPC_WEAK_FUNC(sub_82A08ED8);
PPC_FUNC_IMPL(__imp__sub_82A08ED8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x82A08EE0;
	__savegprlr_29(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r10,-31963
	ctx.r10.s64 = -2094727168;
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// addi r10,r10,23656
	ctx.r10.s64 = ctx.r10.s64 + 23656;
	// mulli r8,r3,48
	ctx.r8.s64 = ctx.r3.s64 * 48;
	// addi r10,r10,44
	ctx.r10.s64 = ctx.r10.s64 + 44;
	// lwzx r3,r8,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r10.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82a08f10
	if (!ctx.cr6.eq) goto loc_82A08F10;
	// lis r3,-31999
	ctx.r3.s64 = -2097086464;
	// ori r3,r3,5
	ctx.r3.u64 = ctx.r3.u64 | 5;
	// b 0x82a08f3c
	goto loc_82A08F3C;
loc_82A08F10:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r31,r1,80
	ctx.r31.s64 = ctx.r1.s64 + 80;
	// lwz r30,4(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// lwz r29,8(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// stw r29,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r29.u32);
	// stw r11,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r11.u32);
	// bl 0x82a14ae8
	ctx.lr = 0x82A08F3C;
	sub_82A14AE8(ctx, base);
loc_82A08F3C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A08F44"))) PPC_WEAK_FUNC(sub_82A08F44);
PPC_FUNC_IMPL(__imp__sub_82A08F44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A08F48"))) PPC_WEAK_FUNC(sub_82A08F48);
PPC_FUNC_IMPL(__imp__sub_82A08F48) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// mulli r10,r3,48
	ctx.r10.s64 = ctx.r3.s64 * 48;
	// addi r11,r11,23656
	ctx.r11.s64 = ctx.r11.s64 + 23656;
	// addi r11,r11,44
	ctx.r11.s64 = ctx.r11.s64 + 44;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82a08f70
	if (!ctx.cr6.eq) goto loc_82A08F70;
	// lis r3,-31999
	ctx.r3.s64 = -2097086464;
	// ori r3,r3,5
	ctx.r3.u64 = ctx.r3.u64 | 5;
	// blr 
	return;
loc_82A08F70:
	// b 0x82a14580
	sub_82A14580(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A08F74"))) PPC_WEAK_FUNC(sub_82A08F74);
PPC_FUNC_IMPL(__imp__sub_82A08F74) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A08F78"))) PPC_WEAK_FUNC(sub_82A08F78);
PPC_FUNC_IMPL(__imp__sub_82A08F78) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// mulli r10,r3,48
	ctx.r10.s64 = ctx.r3.s64 * 48;
	// addi r11,r11,23656
	ctx.r11.s64 = ctx.r11.s64 + 23656;
	// addi r11,r11,44
	ctx.r11.s64 = ctx.r11.s64 + 44;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82a08fa0
	if (!ctx.cr6.eq) goto loc_82A08FA0;
	// lis r3,-31999
	ctx.r3.s64 = -2097086464;
	// ori r3,r3,5
	ctx.r3.u64 = ctx.r3.u64 | 5;
	// blr 
	return;
loc_82A08FA0:
	// b 0x82a14f40
	sub_82A14F40(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A08FA4"))) PPC_WEAK_FUNC(sub_82A08FA4);
PPC_FUNC_IMPL(__imp__sub_82A08FA4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A08FA8"))) PPC_WEAK_FUNC(sub_82A08FA8);
PPC_FUNC_IMPL(__imp__sub_82A08FA8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x82A08FB0;
	__savegprlr_29(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// lwz r9,0(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// addi r31,r1,128
	ctx.r31.s64 = ctx.r1.s64 + 128;
	// lwz r30,4(r8)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// addi r11,r11,23656
	ctx.r11.s64 = ctx.r11.s64 + 23656;
	// lwz r29,8(r8)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// mulli r3,r3,48
	ctx.r3.s64 = ctx.r3.s64 * 48;
	// lwz r8,12(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// stw r9,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r9.u32);
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// stw r29,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r29.u32);
	// stw r8,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r8.u32);
	// addi r11,r11,44
	ctx.r11.s64 = ctx.r11.s64 + 44;
	// lis r9,-32256
	ctx.r9.s64 = -2113929216;
	// lwzx r3,r3,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r11.u32);
	// lfs f0,5184(r9)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 5184);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,112(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 112, temp.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82a0900c
	if (!ctx.cr6.eq) goto loc_82A0900C;
	// lis r3,-31999
	ctx.r3.s64 = -2097086464;
	// ori r3,r3,5
	ctx.r3.u64 = ctx.r3.u64 | 5;
	// b 0x82a0902c
	goto loc_82A0902C;
loc_82A0900C:
	// lbz r11,263(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 263);
	// addi r31,r1,112
	ctx.r31.s64 = ctx.r1.s64 + 112;
	// mr r8,r6
	ctx.r8.u64 = ctx.r6.u64;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// addi r9,r1,128
	ctx.r9.s64 = ctx.r1.s64 + 128;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// stb r11,103(r1)
	PPC_STORE_U8(ctx.r1.u32 + 103, ctx.r11.u8);
	// bl 0x82a144b8
	ctx.lr = 0x82A0902C;
	sub_82A144B8(ctx, base);
loc_82A0902C:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A09034"))) PPC_WEAK_FUNC(sub_82A09034);
PPC_FUNC_IMPL(__imp__sub_82A09034) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A09038"))) PPC_WEAK_FUNC(sub_82A09038);
PPC_FUNC_IMPL(__imp__sub_82A09038) {
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
	// mulli r10,r3,48
	ctx.r10.s64 = ctx.r3.s64 * 48;
	// addi r11,r11,23656
	ctx.r11.s64 = ctx.r11.s64 + 23656;
	// addi r11,r11,44
	ctx.r11.s64 = ctx.r11.s64 + 44;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82a0906c
	if (!ctx.cr6.eq) goto loc_82A0906C;
	// lis r3,-31999
	ctx.r3.s64 = -2097086464;
	// ori r3,r3,5
	ctx.r3.u64 = ctx.r3.u64 | 5;
	// b 0x82a09074
	goto loc_82A09074;
loc_82A0906C:
	// bl 0x82a149f0
	ctx.lr = 0x82A09070;
	sub_82A149F0(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_82A09074:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A09084"))) PPC_WEAK_FUNC(sub_82A09084);
PPC_FUNC_IMPL(__imp__sub_82A09084) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A09088"))) PPC_WEAK_FUNC(sub_82A09088);
PPC_FUNC_IMPL(__imp__sub_82A09088) {
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
	// mulli r10,r3,48
	ctx.r10.s64 = ctx.r3.s64 * 48;
	// addi r11,r11,23656
	ctx.r11.s64 = ctx.r11.s64 + 23656;
	// addi r11,r11,44
	ctx.r11.s64 = ctx.r11.s64 + 44;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82a090bc
	if (!ctx.cr6.eq) goto loc_82A090BC;
	// lis r3,-31999
	ctx.r3.s64 = -2097086464;
	// ori r3,r3,5
	ctx.r3.u64 = ctx.r3.u64 | 5;
	// b 0x82a090c4
	goto loc_82A090C4;
loc_82A090BC:
	// bl 0x82a14588
	ctx.lr = 0x82A090C0;
	sub_82A14588(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_82A090C4:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A090D4"))) PPC_WEAK_FUNC(sub_82A090D4);
PPC_FUNC_IMPL(__imp__sub_82A090D4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A090D8"))) PPC_WEAK_FUNC(sub_82A090D8);
PPC_FUNC_IMPL(__imp__sub_82A090D8) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// mulli r10,r3,48
	ctx.r10.s64 = ctx.r3.s64 * 48;
	// addi r11,r11,23656
	ctx.r11.s64 = ctx.r11.s64 + 23656;
	// addi r11,r11,44
	ctx.r11.s64 = ctx.r11.s64 + 44;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a090f8
	if (ctx.cr6.eq) goto loc_82A090F8;
	// b 0x82a14c20
	sub_82A14C20(ctx, base);
	return;
loc_82A090F8:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A09100"))) PPC_WEAK_FUNC(sub_82A09100);
PPC_FUNC_IMPL(__imp__sub_82A09100) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// mulli r10,r3,48
	ctx.r10.s64 = ctx.r3.s64 * 48;
	// addi r11,r11,23656
	ctx.r11.s64 = ctx.r11.s64 + 23656;
	// addi r11,r11,44
	ctx.r11.s64 = ctx.r11.s64 + 44;
	// lwzx r3,r10,r11
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a09120
	if (ctx.cr6.eq) goto loc_82A09120;
	// b 0x82a14c28
	sub_82A14C28(ctx, base);
	return;
loc_82A09120:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A09128"))) PPC_WEAK_FUNC(sub_82A09128);
PPC_FUNC_IMPL(__imp__sub_82A09128) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// mulli r10,r3,48
	ctx.r10.s64 = ctx.r3.s64 * 48;
	// addi r11,r11,23656
	ctx.r11.s64 = ctx.r11.s64 + 23656;
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// stwx r4,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A09140"))) PPC_WEAK_FUNC(sub_82A09140);
PPC_FUNC_IMPL(__imp__sub_82A09140) {
	PPC_FUNC_PROLOGUE();
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// mulli r10,r3,48
	ctx.r10.s64 = ctx.r3.s64 * 48;
	// addi r11,r11,23656
	ctx.r11.s64 = ctx.r11.s64 + 23656;
	// addi r11,r11,32
	ctx.r11.s64 = ctx.r11.s64 + 32;
	// lwzx r11,r10,r11
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A0915C"))) PPC_WEAK_FUNC(sub_82A0915C);
PPC_FUNC_IMPL(__imp__sub_82A0915C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A09160"))) PPC_WEAK_FUNC(sub_82A09160);
PPC_FUNC_IMPL(__imp__sub_82A09160) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// lfs f0,-23728(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -23728);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// bgt cr6,0x82a0919c
	if (ctx.cr6.gt) goto loc_82A0919C;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// lfs f0,-27880(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + -27880);
	ctx.f0.f64 = double(temp.f32);
	// fcmpu cr6,f1,f0
	ctx.cr6.compare(ctx.f1.f64, ctx.f0.f64);
	// blt cr6,0x82a0919c
	if (ctx.cr6.lt) goto loc_82A0919C;
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// mulli r10,r3,48
	ctx.r10.s64 = ctx.r3.s64 * 48;
	// addi r11,r11,23656
	ctx.r11.s64 = ctx.r11.s64 + 23656;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// stfsx f1,r10,r11
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, temp.u32);
	// blr 
	return;
loc_82A0919C:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A091A8"))) PPC_WEAK_FUNC(sub_82A091A8);
PPC_FUNC_IMPL(__imp__sub_82A091A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// mulli r10,r3,48
	ctx.r10.s64 = ctx.r3.s64 * 48;
	// addi r11,r11,23656
	ctx.r11.s64 = ctx.r11.s64 + 23656;
	// addi r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 + 12;
	// lfsx f0,r10,r11
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	ctx.f0.f64 = double(temp.f32);
	// stfs f0,0(r4)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r4.u32 + 0, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A091C4"))) PPC_WEAK_FUNC(sub_82A091C4);
PPC_FUNC_IMPL(__imp__sub_82A091C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A091C8"))) PPC_WEAK_FUNC(sub_82A091C8);
PPC_FUNC_IMPL(__imp__sub_82A091C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// cmplwi cr6,r4,1
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 1, ctx.xer);
	// blt cr6,0x82a091f8
	if (ctx.cr6.lt) goto loc_82A091F8;
	// beq cr6,0x82a091f0
	if (ctx.cr6.eq) goto loc_82A091F0;
	// cmplwi cr6,r4,3
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 3, ctx.xer);
	// blt cr6,0x82a091e8
	if (ctx.cr6.lt) goto loc_82A091E8;
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// li r11,5
	ctx.r11.s64 = 5;
	// b 0x82a091fc
	goto loc_82A091FC;
loc_82A091E8:
	// li r11,10
	ctx.r11.s64 = 10;
	// b 0x82a091fc
	goto loc_82A091FC;
loc_82A091F0:
	// li r11,15
	ctx.r11.s64 = 15;
	// b 0x82a091fc
	goto loc_82A091FC;
loc_82A091F8:
	// li r11,30
	ctx.r11.s64 = 30;
loc_82A091FC:
	// extsw r11,r11
	ctx.r11.s64 = ctx.r11.s32;
	// lis r10,-31963
	ctx.r10.s64 = -2094727168;
	// std r11,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r11.u64);
	// lfd f0,-16(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f0.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// fcfid f0,f0
	ctx.f0.f64 = double(ctx.f0.s64);
	// addi r11,r10,23656
	ctx.r11.s64 = ctx.r10.s64 + 23656;
	// frsp f13,f0
	ctx.f13.f64 = double(float(ctx.f0.f64));
	// lis r10,-32233
	ctx.r10.s64 = -2112421888;
	// mulli r9,r3,48
	ctx.r9.s64 = ctx.r3.s64 * 48;
	// lfs f0,24436(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 24436);
	ctx.f0.f64 = double(temp.f32);
	// addi r11,r11,20
	ctx.r11.s64 = ctx.r11.s64 + 20;
	// fdivs f0,f0,f13
	ctx.f0.f64 = double(float(ctx.f0.f64 / ctx.f13.f64));
	// stfsx f0,r9,r11
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r9.u32 + ctx.r11.u32, temp.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A09234"))) PPC_WEAK_FUNC(sub_82A09234);
PPC_FUNC_IMPL(__imp__sub_82A09234) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A09238"))) PPC_WEAK_FUNC(sub_82A09238);
PPC_FUNC_IMPL(__imp__sub_82A09238) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7670
	ctx.lr = 0x82A09240;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r31,-31963
	ctx.r31.s64 = -2094727168;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// lwz r11,23648(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 23648);
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82a09298
	if (!ctx.cr6.eq) goto loc_82A09298;
	// lis r11,-32250
	ctx.r11.s64 = -2113536000;
	// addi r3,r11,-26196
	ctx.r3.s64 = ctx.r11.s64 + -26196;
	// bl 0x82a7f320
	ctx.lr = 0x82A09274;
	sub_82A7F320(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82a0928c
	if (ctx.cr0.eq) goto loc_82A0928C;
	// li r4,2271
	ctx.r4.s64 = 2271;
	// bl 0x82a7f398
	ctx.lr = 0x82A09284;
	sub_82A7F398(ctx, base);
	// stw r3,23648(r31)
	PPC_STORE_U32(ctx.r31.u32 + 23648, ctx.r3.u32);
	// b 0x82a09290
	goto loc_82A09290;
loc_82A0928C:
	// lwz r3,23648(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 23648);
loc_82A09290:
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a092bc
	if (ctx.cr6.eq) goto loc_82A092BC;
loc_82A09298:
	// lwz r11,23648(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 23648);
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82A092B8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// b 0x82a092c4
	goto loc_82A092C4;
loc_82A092BC:
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16385
	ctx.r3.u64 = ctx.r3.u64 | 16385;
loc_82A092C4:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82fa76c0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A092CC"))) PPC_WEAK_FUNC(sub_82A092CC);
PPC_FUNC_IMPL(__imp__sub_82A092CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A092D0"))) PPC_WEAK_FUNC(sub_82A092D0);
PPC_FUNC_IMPL(__imp__sub_82A092D0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// li r10,2
	ctx.r10.s64 = 2;
	// li r9,60
	ctx.r9.s64 = 60;
	// lis r8,-32250
	ctx.r8.s64 = -2113536000;
	// stw r9,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r9.u32);
	// lis r9,-32233
	ctx.r9.s64 = -2112421888;
	// lis r7,-32250
	ctx.r7.s64 = -2113536000;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// lis r10,-32250
	ctx.r10.s64 = -2113536000;
	// lis r6,-32253
	ctx.r6.s64 = -2113732608;
	// lis r5,-32256
	ctx.r5.s64 = -2113929216;
	// lfs f11,-26200(r8)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r8.u32 + -26200);
	ctx.f11.f64 = double(temp.f32);
	// lfs f10,24436(r9)
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + 24436);
	ctx.f10.f64 = double(temp.f32);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lfs f12,-27880(r7)
	temp.u32 = PPC_LOAD_U32(ctx.r7.u32 + -27880);
	ctx.f12.f64 = double(temp.f32);
	// lfs f9,-26204(r10)
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + -26204);
	ctx.f9.f64 = double(temp.f32);
	// li r10,0
	ctx.r10.s64 = 0;
	// lfs f13,-23728(r6)
	temp.u32 = PPC_LOAD_U32(ctx.r6.u32 + -23728);
	ctx.f13.f64 = double(temp.f32);
	// lfs f0,5184(r5)
	temp.u32 = PPC_LOAD_U32(ctx.r5.u32 + 5184);
	ctx.f0.f64 = double(temp.f32);
loc_82A09318:
	// li r9,5
	ctx.r9.s64 = 5;
	// stfs f0,4(r11)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 4, temp.u32);
	// stfs f0,8(r11)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + 8, temp.u32);
	// stw r10,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r10.u32);
	// stfs f13,12(r11)
	temp.f32 = float(ctx.f13.f64);
	PPC_STORE_U32(ctx.r11.u32 + 12, temp.u32);
	// stw r9,28(r11)
	PPC_STORE_U32(ctx.r11.u32 + 28, ctx.r9.u32);
	// stfs f12,16(r11)
	temp.f32 = float(ctx.f12.f64);
	PPC_STORE_U32(ctx.r11.u32 + 16, temp.u32);
	// stw r10,40(r11)
	PPC_STORE_U32(ctx.r11.u32 + 40, ctx.r10.u32);
	// stfs f11,20(r11)
	temp.f32 = float(ctx.f11.f64);
	PPC_STORE_U32(ctx.r11.u32 + 20, temp.u32);
	// stw r10,44(r11)
	PPC_STORE_U32(ctx.r11.u32 + 44, ctx.r10.u32);
	// stfs f10,24(r11)
	temp.f32 = float(ctx.f10.f64);
	PPC_STORE_U32(ctx.r11.u32 + 24, temp.u32);
	// stfs f9,36(r11)
	temp.f32 = float(ctx.f9.f64);
	PPC_STORE_U32(ctx.r11.u32 + 36, temp.u32);
	// stwu r10,48(r11)
	ea = 48 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x82a09318
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82A09318;
	// stw r10,100(r3)
	PPC_STORE_U32(ctx.r3.u32 + 100, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A09358"))) PPC_WEAK_FUNC(sub_82A09358);
PPC_FUNC_IMPL(__imp__sub_82A09358) {
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
	// bl 0x82a08db8
	ctx.lr = 0x82A09374;
	sub_82A08DB8(ctx, base);
	// lis r11,-31963
	ctx.r11.s64 = -2094727168;
	// mulli r31,r31,48
	ctx.r31.s64 = ctx.r31.s64 * 48;
	// addi r11,r11,23656
	ctx.r11.s64 = ctx.r11.s64 + 23656;
	// addi r30,r11,44
	ctx.r30.s64 = ctx.r11.s64 + 44;
	// lwzx r3,r31,r30
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r30.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a0939c
	if (ctx.cr6.eq) goto loc_82A0939C;
	// bl 0x82a08ca0
	ctx.lr = 0x82A09394;
	sub_82A08CA0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stwx r11,r31,r30
	PPC_STORE_U32(ctx.r31.u32 + ctx.r30.u32, ctx.r11.u32);
loc_82A0939C:
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

__attribute__((alias("__imp__sub_82A093B4"))) PPC_WEAK_FUNC(sub_82A093B4);
PPC_FUNC_IMPL(__imp__sub_82A093B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A093B8"))) PPC_WEAK_FUNC(sub_82A093B8);
PPC_FUNC_IMPL(__imp__sub_82A093B8) {
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
	// beq cr6,0x82a09430
	if (ctx.cr6.eq) goto loc_82A09430;
	// lwz r3,16(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 16);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a093e8
	if (ctx.cr6.eq) goto loc_82A093E8;
	// bl 0x83179424
	ctx.lr = 0x82A093E8;
	__imp__ObDereferenceObject(ctx, base);
loc_82A093E8:
	// lwz r3,60(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 60);
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a09404
	if (ctx.cr6.eq) goto loc_82A09404;
	// lis r4,-29506
	ctx.r4.s64 = -1933705216;
	// bl 0x82691460
	ctx.lr = 0x82A09404;
	sub_82691460(ctx, base);
loc_82A09404:
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a0941c
	if (ctx.cr6.eq) goto loc_82A0941C;
	// lis r4,8348
	ctx.r4.s64 = 547094528;
	// bl 0x82691460
	ctx.lr = 0x82A09418;
	sub_82691460(ctx, base);
	// stw r30,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r30.u32);
loc_82A0941C:
	// li r5,124
	ctx.r5.s64 = 124;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82fa7cf0
	ctx.lr = 0x82A0942C;
	sub_82FA7CF0(ctx, base);
	// sync 
loc_82A09430:
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

__attribute__((alias("__imp__sub_82A09448"))) PPC_WEAK_FUNC(sub_82A09448);
PPC_FUNC_IMPL(__imp__sub_82A09448) {
	PPC_FUNC_PROLOGUE();
	// lwz r7,24(r3)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// li r10,0
	ctx.r10.s64 = 0;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82a09484
	if (ctx.cr6.eq) goto loc_82A09484;
	// lwz r9,28(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 28);
	// li r11,0
	ctx.r11.s64 = 0;
	// add r8,r11,r9
	ctx.r8.u64 = ctx.r11.u64 + ctx.r9.u64;
loc_82A09464:
	// lwz r8,108(r8)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + 108);
	// cmpwi cr6,r8,2
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 2, ctx.xer);
	// beq cr6,0x82a0948c
	if (ctx.cr6.eq) goto loc_82A0948C;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,120
	ctx.r11.s64 = ctx.r11.s64 + 120;
	// cmplw cr6,r10,r7
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r7.u32, ctx.xer);
	// add r8,r11,r9
	ctx.r8.u64 = ctx.r11.u64 + ctx.r9.u64;
	// blt cr6,0x82a09464
	if (ctx.cr6.lt) goto loc_82A09464;
loc_82A09484:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82A0948C:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82A09494"))) PPC_WEAK_FUNC(sub_82A09494);
PPC_FUNC_IMPL(__imp__sub_82A09494) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A09498"))) PPC_WEAK_FUNC(sub_82A09498);
PPC_FUNC_IMPL(__imp__sub_82A09498) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7674
	ctx.lr = 0x82A094A0;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31975
	ctx.r11.s64 = -2095513600;
	// addi r27,r11,-12452
	ctx.r27.s64 = ctx.r11.s64 + -12452;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x831791a4
	ctx.lr = 0x82A094B4;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lis r11,-31964
	ctx.r11.s64 = -2094792704;
	// li r28,6
	ctx.r28.s64 = 6;
	// addi r11,r11,29312
	ctx.r11.s64 = ctx.r11.s64 + 29312;
	// li r29,0
	ctx.r29.s64 = 0;
	// addi r30,r11,10600
	ctx.r30.s64 = ctx.r11.s64 + 10600;
loc_82A094C8:
	// lwz r31,0(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82a09530
	if (ctx.cr6.eq) goto loc_82A09530;
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a09518
	if (ctx.cr6.eq) goto loc_82A09518;
	// stw r29,108(r11)
	PPC_STORE_U32(ctx.r11.u32 + 108, ctx.r29.u32);
	// addi r3,r11,48
	ctx.r3.s64 = ctx.r11.s64 + 48;
	// bl 0x82a04180
	ctx.lr = 0x82A094EC;
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
loc_82A09518:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831793b4
	ctx.lr = 0x82A09520;
	__imp__KeResetEvent(ctx, base);
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a09530
	if (ctx.cr6.eq) goto loc_82A09530;
	// bl 0x831793b4
	ctx.lr = 0x82A09530;
	__imp__KeResetEvent(ctx, base);
loc_82A09530:
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// bne 0x82a094c8
	if (!ctx.cr0.eq) goto loc_82A094C8;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x831791b4
	ctx.lr = 0x82A09544;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A0954C"))) PPC_WEAK_FUNC(sub_82A0954C);
PPC_FUNC_IMPL(__imp__sub_82A0954C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A09550"))) PPC_WEAK_FUNC(sub_82A09550);
PPC_FUNC_IMPL(__imp__sub_82A09550) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x82A09558;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31975
	ctx.r11.s64 = -2095513600;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// addi r30,r11,-12452
	ctx.r30.s64 = ctx.r11.s64 + -12452;
	// li r31,0
	ctx.r31.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831791a4
	ctx.lr = 0x82A09574;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lis r11,-31964
	ctx.r11.s64 = -2094792704;
	// rlwinm r10,r29,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,29312
	ctx.r11.s64 = ctx.r11.s64 + 29312;
	// addi r9,r11,10600
	ctx.r9.s64 = ctx.r11.s64 + 10600;
	// lwzx r11,r10,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82a095d4
	if (ctx.cr6.eq) goto loc_82A095D4;
	// lwz r10,56(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82a095d4
	if (!ctx.cr6.eq) goto loc_82A095D4;
	// lwz r31,36(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// addi r10,r11,36
	ctx.r10.s64 = ctx.r11.s64 + 36;
	// cmplw cr6,r31,r10
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, ctx.xer);
	// beq cr6,0x82a095c0
	if (ctx.cr6.eq) goto loc_82A095C0;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// b 0x82a095cc
	goto loc_82A095CC;
loc_82A095C0:
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r31,32(r11)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// stw r10,32(r11)
	PPC_STORE_U32(ctx.r11.u32 + 32, ctx.r10.u32);
loc_82A095CC:
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r11.u32);
loc_82A095D4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831791b4
	ctx.lr = 0x82A095DC;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A095E8"))) PPC_WEAK_FUNC(sub_82A095E8);
PPC_FUNC_IMPL(__imp__sub_82A095E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x82A095F0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31975
	ctx.r11.s64 = -2095513600;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r29,r11,-12452
	ctx.r29.s64 = ctx.r11.s64 + -12452;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x831791a4
	ctx.lr = 0x82A0960C;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lis r11,-31964
	ctx.r11.s64 = -2094792704;
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,29312
	ctx.r11.s64 = ctx.r11.s64 + 29312;
	// addi r9,r11,10600
	ctx.r9.s64 = ctx.r11.s64 + 10600;
	// lwzx r30,r10,r9
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82a09650
	if (ctx.cr6.eq) goto loc_82A09650;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r3,r31,48
	ctx.r3.s64 = ctx.r31.s64 + 48;
	// stw r11,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r11.u32);
	// bl 0x82a04180
	ctx.lr = 0x82A09638;
	sub_82A04180(ctx, base);
	// lwz r10,36(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// addi r11,r30,36
	ctx.r11.s64 = ctx.r30.s64 + 36;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// stw r31,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r31.u32);
	// stw r31,36(r30)
	PPC_STORE_U32(ctx.r30.u32 + 36, ctx.r31.u32);
loc_82A09650:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x831791b4
	ctx.lr = 0x82A09658;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A09660"))) PPC_WEAK_FUNC(sub_82A09660);
PPC_FUNC_IMPL(__imp__sub_82A09660) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x82A09668;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31975
	ctx.r11.s64 = -2095513600;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r30,r11,-12452
	ctx.r30.s64 = ctx.r11.s64 + -12452;
	// li r29,0
	ctx.r29.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831791a4
	ctx.lr = 0x82A09684;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lis r11,-31964
	ctx.r11.s64 = -2094792704;
	// rlwinm r10,r31,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,29312
	ctx.r11.s64 = ctx.r11.s64 + 29312;
	// addi r9,r11,10600
	ctx.r9.s64 = ctx.r11.s64 + 10600;
	// lwzx r8,r10,r9
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x82a096ac
	if (ctx.cr6.eq) goto loc_82A096AC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82a09550
	ctx.lr = 0x82A096A8;
	sub_82A09550(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
loc_82A096AC:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831791b4
	ctx.lr = 0x82A096B4;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A096C0"))) PPC_WEAK_FUNC(sub_82A096C0);
PPC_FUNC_IMPL(__imp__sub_82A096C0) {
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
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r30,r11,-12452
	ctx.r30.s64 = ctx.r11.s64 + -12452;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831791a4
	ctx.lr = 0x82A096E8;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lis r11,-31964
	ctx.r11.s64 = -2094792704;
	// rlwinm r10,r31,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,29312
	ctx.r11.s64 = ctx.r11.s64 + 29312;
	// addi r9,r11,10600
	ctx.r9.s64 = ctx.r11.s64 + 10600;
	// lwzx r31,r10,r9
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82a0973c
	if (ctx.cr6.eq) goto loc_82A0973C;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// rlwinm r10,r11,0,15,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82a0973c
	if (!ctx.cr6.eq) goto loc_82A0973C;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831792b4
	ctx.lr = 0x82A09724;
	__imp__KeSetEvent(ctx, base);
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a0973c
	if (ctx.cr6.eq) goto loc_82A0973C;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x831792b4
	ctx.lr = 0x82A0973C;
	__imp__KeSetEvent(ctx, base);
loc_82A0973C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x831791b4
	ctx.lr = 0x82A09744;
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

__attribute__((alias("__imp__sub_82A0975C"))) PPC_WEAK_FUNC(sub_82A0975C);
PPC_FUNC_IMPL(__imp__sub_82A0975C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82A09760"))) PPC_WEAK_FUNC(sub_82A09760);
PPC_FUNC_IMPL(__imp__sub_82A09760) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x82A09768;
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
	ctx.lr = 0x82A0977C;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lis r11,-31964
	ctx.r11.s64 = -2094792704;
	// addi r29,r11,29312
	ctx.r29.s64 = ctx.r11.s64 + 29312;
	// addi r30,r29,10600
	ctx.r30.s64 = ctx.r29.s64 + 10600;
loc_82A09788:
	// lwz r31,0(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82a097cc
	if (ctx.cr6.eq) goto loc_82A097CC;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// rlwinm r10,r11,0,15,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82a097cc
	if (!ctx.cr6.eq) goto loc_82A097CC;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831792b4
	ctx.lr = 0x82A097B4;
	__imp__KeSetEvent(ctx, base);
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a097cc
	if (ctx.cr6.eq) goto loc_82A097CC;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x831792b4
	ctx.lr = 0x82A097CC;
	__imp__KeSetEvent(ctx, base);
loc_82A097CC:
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// addi r11,r29,10624
	ctx.r11.s64 = ctx.r29.s64 + 10624;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82a09788
	if (ctx.cr6.lt) goto loc_82A09788;
	// lwz r11,10628(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 10628);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82a09800
	if (!ctx.cr6.eq) goto loc_82A09800;
	// lwz r3,10624(r29)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r29.u32 + 10624);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a09800
	if (ctx.cr6.eq) goto loc_82A09800;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x831792b4
	ctx.lr = 0x82A09800;
	__imp__KeSetEvent(ctx, base);
loc_82A09800:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x831791b4
	ctx.lr = 0x82A09808;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82A09810"))) PPC_WEAK_FUNC(sub_82A09810);
PPC_FUNC_IMPL(__imp__sub_82A09810) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x82A09818;
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
	ctx.lr = 0x82A0982C;
	__imp__RtlEnterCriticalSection(ctx, base);
	// lis r11,-31964
	ctx.r11.s64 = -2094792704;
	// addi r29,r11,29312
	ctx.r29.s64 = ctx.r11.s64 + 29312;
	// addi r30,r29,10600
	ctx.r30.s64 = ctx.r29.s64 + 10600;
loc_82A09838:
	// lwz r31,0(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82a09888
	if (ctx.cr6.eq) goto loc_82A09888;
	// lwz r11,32(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82a09888
	if (!ctx.cr6.eq) goto loc_82A09888;
	// lwz r11,20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 20);
	// rlwinm r10,r11,0,15,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10000;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82a09888
	if (!ctx.cr6.eq) goto loc_82A09888;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831792b4
	ctx.lr = 0x82A09870;
	__imp__KeSetEvent(ctx, base);
	// lwz r3,16(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82a09888
	if (ctx.cr6.eq) goto loc_82A09888;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x831792b4
	ctx.lr = 0x82A09888;
	__imp__KeSetEvent(ctx, base);
loc_82A09888:
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// addi r11,r29,10624
	ctx.r11.s64 = ctx.r29.s64 + 10624;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82a09838
	if (ctx.cr6.lt) goto loc_82A09838;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x831791b4
	ctx.lr = 0x82A098A0;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

