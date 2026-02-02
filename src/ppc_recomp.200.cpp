#include "ppc_recomp_shared.h"

__attribute__((alias("__imp__sub_82AFDAD0"))) PPC_WEAK_FUNC(sub_82AFDAD0);
PPC_FUNC_IMPL(__imp__sub_82AFDAD0) {
	PPC_FUNC_PROLOGUE();
	// b 0x82afd098
	sub_82AFD098(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AFDAD4"))) PPC_WEAK_FUNC(sub_82AFDAD4);
PPC_FUNC_IMPL(__imp__sub_82AFDAD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AFDAD8"))) PPC_WEAK_FUNC(sub_82AFDAD8);
PPC_FUNC_IMPL(__imp__sub_82AFDAD8) {
	PPC_FUNC_PROLOGUE();
	// b 0x82afd150
	sub_82AFD150(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AFDADC"))) PPC_WEAK_FUNC(sub_82AFDADC);
PPC_FUNC_IMPL(__imp__sub_82AFDADC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AFDAE0"))) PPC_WEAK_FUNC(sub_82AFDAE0);
PPC_FUNC_IMPL(__imp__sub_82AFDAE0) {
	PPC_FUNC_PROLOGUE();
	// b 0x82afd240
	sub_82AFD240(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AFDAE4"))) PPC_WEAK_FUNC(sub_82AFDAE4);
PPC_FUNC_IMPL(__imp__sub_82AFDAE4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AFDAE8"))) PPC_WEAK_FUNC(sub_82AFDAE8);
PPC_FUNC_IMPL(__imp__sub_82AFDAE8) {
	PPC_FUNC_PROLOGUE();
	// b 0x82afd350
	sub_82AFD350(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AFDAEC"))) PPC_WEAK_FUNC(sub_82AFDAEC);
PPC_FUNC_IMPL(__imp__sub_82AFDAEC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AFDAF0"))) PPC_WEAK_FUNC(sub_82AFDAF0);
PPC_FUNC_IMPL(__imp__sub_82AFDAF0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7650
	ctx.lr = 0x82AFDAF8;
	__savegprlr_18(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// lwz r10,24(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 24);
	// mr r20,r4
	ctx.r20.u64 = ctx.r4.u64;
	// addi r31,r11,1
	ctx.r31.s64 = ctx.r11.s64 + 1;
	// mr r18,r5
	ctx.r18.u64 = ctx.r5.u64;
	// addi r30,r3,16
	ctx.r30.s64 = ctx.r3.s64 + 16;
	// cmplw cr6,r31,r10
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, ctx.xer);
	// ble cr6,0x82afdb30
	if (!ctx.cr6.gt) goto loc_82AFDB30;
	// addi r5,r3,144
	ctx.r5.s64 = ctx.r3.s64 + 144;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82af9410
	ctx.lr = 0x82AFDB30;
	sub_82AF9410(ctx, base);
loc_82AFDB30:
	// stw r31,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r31.u32);
	// addi r19,r29,144
	ctx.r19.s64 = ctx.r29.s64 + 144;
	// lwz r11,144(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 144);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge cr6,0x82afdb4c
	if (!ctx.cr6.lt) goto loc_82AFDB4C;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82afdd8c
	goto loc_82AFDD8C;
loc_82AFDB4C:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// li r31,0
	ctx.r31.s64 = 0;
	// lwz r10,0(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r20,0
	ctx.cr6.compare<uint32_t>(ctx.r20.u32, 0, ctx.xer);
	// mulli r11,r11,476
	ctx.r11.s64 = ctx.r11.s64 * 476;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r30,r11,-476
	ctx.r30.s64 = ctx.r11.s64 + -476;
	// addi r28,r30,276
	ctx.r28.s64 = ctx.r30.s64 + 276;
	// stw r31,-200(r11)
	PPC_STORE_U32(ctx.r11.u32 + -200, ctx.r31.u32);
	// addi r27,r30,288
	ctx.r27.s64 = ctx.r30.s64 + 288;
	// stw r31,-196(r11)
	PPC_STORE_U32(ctx.r11.u32 + -196, ctx.r31.u32);
	// addi r26,r30,324
	ctx.r26.s64 = ctx.r30.s64 + 324;
	// stw r31,-192(r11)
	PPC_STORE_U32(ctx.r11.u32 + -192, ctx.r31.u32);
	// stw r31,-188(r11)
	PPC_STORE_U32(ctx.r11.u32 + -188, ctx.r31.u32);
	// addi r25,r30,352
	ctx.r25.s64 = ctx.r30.s64 + 352;
	// stw r31,-184(r11)
	PPC_STORE_U32(ctx.r11.u32 + -184, ctx.r31.u32);
	// addi r24,r30,364
	ctx.r24.s64 = ctx.r30.s64 + 364;
	// stw r31,-180(r11)
	PPC_STORE_U32(ctx.r11.u32 + -180, ctx.r31.u32);
	// stw r31,-152(r11)
	PPC_STORE_U32(ctx.r11.u32 + -152, ctx.r31.u32);
	// addi r23,r30,376
	ctx.r23.s64 = ctx.r30.s64 + 376;
	// stw r31,-148(r11)
	PPC_STORE_U32(ctx.r11.u32 + -148, ctx.r31.u32);
	// addi r22,r30,432
	ctx.r22.s64 = ctx.r30.s64 + 432;
	// stw r31,-144(r11)
	PPC_STORE_U32(ctx.r11.u32 + -144, ctx.r31.u32);
	// stw r31,-124(r11)
	PPC_STORE_U32(ctx.r11.u32 + -124, ctx.r31.u32);
	// addi r21,r30,444
	ctx.r21.s64 = ctx.r30.s64 + 444;
	// stw r31,-120(r11)
	PPC_STORE_U32(ctx.r11.u32 + -120, ctx.r31.u32);
	// stw r31,-116(r11)
	PPC_STORE_U32(ctx.r11.u32 + -116, ctx.r31.u32);
	// stw r31,-112(r11)
	PPC_STORE_U32(ctx.r11.u32 + -112, ctx.r31.u32);
	// stw r31,-108(r11)
	PPC_STORE_U32(ctx.r11.u32 + -108, ctx.r31.u32);
	// stw r31,-104(r11)
	PPC_STORE_U32(ctx.r11.u32 + -104, ctx.r31.u32);
	// stw r31,-100(r11)
	PPC_STORE_U32(ctx.r11.u32 + -100, ctx.r31.u32);
	// stw r31,-96(r11)
	PPC_STORE_U32(ctx.r11.u32 + -96, ctx.r31.u32);
	// stw r31,-92(r11)
	PPC_STORE_U32(ctx.r11.u32 + -92, ctx.r31.u32);
	// stw r31,-44(r11)
	PPC_STORE_U32(ctx.r11.u32 + -44, ctx.r31.u32);
	// stw r31,-40(r11)
	PPC_STORE_U32(ctx.r11.u32 + -40, ctx.r31.u32);
	// stw r31,-36(r11)
	PPC_STORE_U32(ctx.r11.u32 + -36, ctx.r31.u32);
	// stw r31,-32(r11)
	PPC_STORE_U32(ctx.r11.u32 + -32, ctx.r31.u32);
	// stw r31,-28(r11)
	PPC_STORE_U32(ctx.r11.u32 + -28, ctx.r31.u32);
	// stw r31,-24(r11)
	PPC_STORE_U32(ctx.r11.u32 + -24, ctx.r31.u32);
	// beq cr6,0x82afdc00
	if (ctx.cr6.eq) goto loc_82AFDC00;
	// mr r5,r20
	ctx.r5.u64 = ctx.r20.u64;
	// li r4,256
	ctx.r4.s64 = 256;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x829321e0
	ctx.lr = 0x82AFDBFC;
	sub_829321E0(ctx, base);
	// b 0x82afdc04
	goto loc_82AFDC04;
loc_82AFDC00:
	// stb r31,0(r30)
	PPC_STORE_U8(ctx.r30.u32 + 0, ctx.r31.u8);
loc_82AFDC04:
	// stw r31,388(r30)
	PPC_STORE_U32(ctx.r30.u32 + 388, ctx.r31.u32);
	// stw r18,256(r30)
	PPC_STORE_U32(ctx.r30.u32 + 256, ctx.r18.u32);
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// cmplwi cr6,r11,100
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 100, ctx.xer);
	// stw r31,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r31.u32);
	// bge cr6,0x82afdc2c
	if (!ctx.cr6.lt) goto loc_82AFDC2C;
	// mr r5,r19
	ctx.r5.u64 = ctx.r19.u64;
	// li r4,100
	ctx.r4.s64 = 100;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82af8f90
	ctx.lr = 0x82AFDC2C;
	sub_82AF8F90(ctx, base);
loc_82AFDC2C:
	// lwz r11,8(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 8);
	// stw r31,4(r27)
	PPC_STORE_U32(ctx.r27.u32 + 4, ctx.r31.u32);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x82afdc4c
	if (!ctx.cr6.lt) goto loc_82AFDC4C;
	// mr r5,r19
	ctx.r5.u64 = ctx.r19.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82af9020
	ctx.lr = 0x82AFDC4C;
	sub_82AF9020(ctx, base);
loc_82AFDC4C:
	// lwz r11,8(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 8);
	// stw r31,4(r26)
	PPC_STORE_U32(ctx.r26.u32 + 4, ctx.r31.u32);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x82afdc6c
	if (!ctx.cr6.lt) goto loc_82AFDC6C;
	// mr r5,r19
	ctx.r5.u64 = ctx.r19.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82af9020
	ctx.lr = 0x82AFDC6C;
	sub_82AF9020(ctx, base);
loc_82AFDC6C:
	// lwz r11,8(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 8);
	// stw r31,4(r25)
	PPC_STORE_U32(ctx.r25.u32 + 4, ctx.r31.u32);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x82afdc8c
	if (!ctx.cr6.lt) goto loc_82AFDC8C;
	// mr r5,r19
	ctx.r5.u64 = ctx.r19.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82af90b0
	ctx.lr = 0x82AFDC8C;
	sub_82AF90B0(ctx, base);
loc_82AFDC8C:
	// lwz r11,8(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 8);
	// stw r31,4(r24)
	PPC_STORE_U32(ctx.r24.u32 + 4, ctx.r31.u32);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x82afdcac
	if (!ctx.cr6.lt) goto loc_82AFDCAC;
	// mr r5,r19
	ctx.r5.u64 = ctx.r19.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82af9140
	ctx.lr = 0x82AFDCAC;
	sub_82AF9140(ctx, base);
loc_82AFDCAC:
	// lwz r11,8(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 8);
	// stw r31,4(r23)
	PPC_STORE_U32(ctx.r23.u32 + 4, ctx.r31.u32);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bge cr6,0x82afdccc
	if (!ctx.cr6.lt) goto loc_82AFDCCC;
	// mr r5,r19
	ctx.r5.u64 = ctx.r19.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82af91d0
	ctx.lr = 0x82AFDCCC;
	sub_82AF91D0(ctx, base);
loc_82AFDCCC:
	// li r11,-1
	ctx.r11.s64 = -1;
	// stw r31,472(r30)
	PPC_STORE_U32(ctx.r30.u32 + 472, ctx.r31.u32);
	// stw r11,468(r30)
	PPC_STORE_U32(ctx.r30.u32 + 468, ctx.r11.u32);
	// stw r11,460(r30)
	PPC_STORE_U32(ctx.r30.u32 + 460, ctx.r11.u32);
	// stw r11,464(r30)
	PPC_STORE_U32(ctx.r30.u32 + 464, ctx.r11.u32);
	// stw r11,456(r30)
	PPC_STORE_U32(ctx.r30.u32 + 456, ctx.r11.u32);
	// lwz r10,0(r19)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r19.u32 + 0);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x82afdd08
	if (ctx.cr6.lt) goto loc_82AFDD08;
	// stw r31,280(r30)
	PPC_STORE_U32(ctx.r30.u32 + 280, ctx.r31.u32);
	// stw r31,292(r30)
	PPC_STORE_U32(ctx.r30.u32 + 292, ctx.r31.u32);
	// stw r31,328(r30)
	PPC_STORE_U32(ctx.r30.u32 + 328, ctx.r31.u32);
	// stw r31,356(r30)
	PPC_STORE_U32(ctx.r30.u32 + 356, ctx.r31.u32);
	// stw r31,368(r30)
	PPC_STORE_U32(ctx.r30.u32 + 368, ctx.r31.u32);
	// stw r31,380(r30)
	PPC_STORE_U32(ctx.r30.u32 + 380, ctx.r31.u32);
loc_82AFDD08:
	// stw r11,272(r30)
	PPC_STORE_U32(ctx.r30.u32 + 272, ctx.r11.u32);
	// addi r4,r30,260
	ctx.r4.s64 = ctx.r30.s64 + 260;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82afc158
	ctx.lr = 0x82AFDD18;
	sub_82AFC158(ctx, base);
	// addi r31,r30,336
	ctx.r31.s64 = ctx.r30.s64 + 336;
	// lis r4,19523
	ctx.r4.s64 = 1279459328;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// ori r4,r4,17494
	ctx.r4.u64 = ctx.r4.u64 | 17494;
	// bl 0x8296ce08
	ctx.lr = 0x82AFDD2C;
	sub_8296CE08(ctx, base);
	// lwz r11,0(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x82afdd88
	if (ctx.cr6.lt) goto loc_82AFDD88;
	// addi r11,r30,300
	ctx.r11.s64 = ctx.r30.s64 + 300;
	// stw r30,128(r29)
	PPC_STORE_U32(ctx.r29.u32 + 128, ctx.r30.u32);
	// addi r10,r30,312
	ctx.r10.s64 = ctx.r30.s64 + 312;
	// stw r28,28(r29)
	PPC_STORE_U32(ctx.r29.u32 + 28, ctx.r28.u32);
	// addi r9,r30,396
	ctx.r9.s64 = ctx.r30.s64 + 396;
	// stw r27,68(r29)
	PPC_STORE_U32(ctx.r29.u32 + 68, ctx.r27.u32);
	// addi r8,r30,408
	ctx.r8.s64 = ctx.r30.s64 + 408;
	// stw r26,72(r29)
	PPC_STORE_U32(ctx.r29.u32 + 72, ctx.r26.u32);
	// addi r7,r30,420
	ctx.r7.s64 = ctx.r30.s64 + 420;
	// stw r31,96(r29)
	PPC_STORE_U32(ctx.r29.u32 + 96, ctx.r31.u32);
	// stw r25,100(r29)
	PPC_STORE_U32(ctx.r29.u32 + 100, ctx.r25.u32);
	// stw r24,104(r29)
	PPC_STORE_U32(ctx.r29.u32 + 104, ctx.r24.u32);
	// stw r23,108(r29)
	PPC_STORE_U32(ctx.r29.u32 + 108, ctx.r23.u32);
	// stw r11,76(r29)
	PPC_STORE_U32(ctx.r29.u32 + 76, ctx.r11.u32);
	// stw r10,80(r29)
	PPC_STORE_U32(ctx.r29.u32 + 80, ctx.r10.u32);
	// stw r9,84(r29)
	PPC_STORE_U32(ctx.r29.u32 + 84, ctx.r9.u32);
	// stw r8,88(r29)
	PPC_STORE_U32(ctx.r29.u32 + 88, ctx.r8.u32);
	// stw r7,92(r29)
	PPC_STORE_U32(ctx.r29.u32 + 92, ctx.r7.u32);
	// stw r22,112(r29)
	PPC_STORE_U32(ctx.r29.u32 + 112, ctx.r22.u32);
	// stw r21,120(r29)
	PPC_STORE_U32(ctx.r29.u32 + 120, ctx.r21.u32);
loc_82AFDD88:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_82AFDD8C:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82fa76a0
	__restgprlr_18(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AFDD94"))) PPC_WEAK_FUNC(sub_82AFDD94);
PPC_FUNC_IMPL(__imp__sub_82AFDD94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AFDD98"))) PPC_WEAK_FUNC(sub_82AFDD98);
PPC_FUNC_IMPL(__imp__sub_82AFDD98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x82AFDDA0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lhz r11,156(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 156);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// stw r4,152(r3)
	PPC_STORE_U32(ctx.r3.u32 + 152, ctx.r4.u32);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x82afde10
	if (ctx.cr6.lt) goto loc_82AFDE10;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82afdaf0
	ctx.lr = 0x82AFDDC8;
	sub_82AFDAF0(ctx, base);
	// li r4,256
	ctx.r4.s64 = 256;
	// addi r5,r3,-476
	ctx.r5.s64 = ctx.r3.s64 + -476;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x829321e0
	ctx.lr = 0x82AFDDD8;
	sub_829321E0(ctx, base);
	// lwz r11,-220(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -220);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,256(r31)
	PPC_STORE_U32(ctx.r31.u32 + 256, ctx.r11.u32);
	// lwz r11,-8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -8);
	// stw r11,468(r31)
	PPC_STORE_U32(ctx.r31.u32 + 468, ctx.r11.u32);
	// lwz r11,-16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -16);
	// stw r11,460(r31)
	PPC_STORE_U32(ctx.r31.u32 + 460, ctx.r11.u32);
	// lwz r11,-12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -12);
	// stw r11,464(r31)
	PPC_STORE_U32(ctx.r31.u32 + 464, ctx.r11.u32);
	// lwz r11,-20(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + -20);
	// stw r11,456(r31)
	PPC_STORE_U32(ctx.r31.u32 + 456, ctx.r11.u32);
	// lwz r5,-84(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + -84);
	// lwz r4,-88(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + -88);
	// bl 0x82af9718
	ctx.lr = 0x82AFDE10;
	sub_82AF9718(ctx, base);
loc_82AFDE10:
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// lwz r10,16(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// mulli r11,r11,476
	ctx.r11.s64 = ctx.r11.s64 * 476;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r29,-4(r11)
	PPC_STORE_U32(ctx.r11.u32 + -4, ctx.r29.u32);
	// lhz r11,158(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 158);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// sth r11,158(r30)
	PPC_STORE_U16(ctx.r30.u32 + 158, ctx.r11.u16);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AFDE38"))) PPC_WEAK_FUNC(sub_82AFDE38);
PPC_FUNC_IMPL(__imp__sub_82AFDE38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x82AFDE40;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,148(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 148);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x82afdea0
	if (!ctx.cr6.eq) goto loc_82AFDEA0;
	// lwz r8,128(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 128);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
loc_82AFDE68:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r7,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r7.s64;
	// beq 0x82afde8c
	if (ctx.cr0.eq) goto loc_82AFDE8C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82afde68
	if (ctx.cr6.eq) goto loc_82AFDE68;
loc_82AFDE8C:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82afdea0
	if (!ctx.cr0.eq) goto loc_82AFDEA0;
	// lwz r11,256(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 256);
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x82afdf60
	if (ctx.cr6.eq) goto loc_82AFDF60;
loc_82AFDEA0:
	// lwz r11,160(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 160);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82afdee0
	if (!ctx.cr6.eq) goto loc_82AFDEE0;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lwz r3,132(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// addi r4,r11,-28888
	ctx.r4.s64 = ctx.r11.s64 + -28888;
	// bl 0x82fa4460
	ctx.lr = 0x82AFDEBC;
	sub_82FA4460(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq 0x82afded4
	if (ctx.cr0.eq) goto loc_82AFDED4;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// b 0x82afdedc
	goto loc_82AFDEDC;
loc_82AFDED4:
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
loc_82AFDEDC:
	// bl 0x82afaf38
	ctx.lr = 0x82AFDEE0;
	sub_82AFAF38(ctx, base);
loc_82AFDEE0:
	// lwz r11,148(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	// li r9,0
	ctx.r9.s64 = 0;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82afdf3c
	if (ctx.cr6.eq) goto loc_82AFDF3C;
	// lwz r11,160(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 160);
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,65534
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 65534, ctx.xer);
	// blt cr6,0x82afdf10
	if (ctx.cr6.lt) goto loc_82AFDF10;
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// ori r11,r11,16389
	ctx.r11.u64 = ctx.r11.u64 | 16389;
	// stw r11,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r11.u32);
loc_82AFDF10:
	// lhz r11,156(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 156);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bne 0x82afdf24
	if (!ctx.cr0.eq) goto loc_82AFDF24;
	// addi r11,r10,1
	ctx.r11.s64 = ctx.r10.s64 + 1;
loc_82AFDF24:
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// sth r9,162(r31)
	PPC_STORE_U16(ctx.r31.u32 + 162, ctx.r9.u16);
	// lwz r10,160(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 160);
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// stw r11,160(r31)
	PPC_STORE_U32(ctx.r31.u32 + 160, ctx.r11.u32);
loc_82AFDF3C:
	// sth r9,156(r31)
	PPC_STORE_U16(ctx.r31.u32 + 156, ctx.r9.u16);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// sth r9,158(r31)
	PPC_STORE_U16(ctx.r31.u32 + 158, ctx.r9.u16);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// stw r9,152(r31)
	PPC_STORE_U32(ctx.r31.u32 + 152, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82afdaf0
	ctx.lr = 0x82AFDF58;
	sub_82AFDAF0(ctx, base);
	// li r11,2
	ctx.r11.s64 = 2;
	// stw r11,148(r31)
	PPC_STORE_U32(ctx.r31.u32 + 148, ctx.r11.u32);
loc_82AFDF60:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AFDF68"))) PPC_WEAK_FUNC(sub_82AFDF68);
PPC_FUNC_IMPL(__imp__sub_82AFDF68) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa766c
	ctx.lr = 0x82AFDF70;
	__savegprlr_25(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,144(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 144);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// mr r26,r8
	ctx.r26.u64 = ctx.r8.u64;
	// mr r25,r9
	ctx.r25.u64 = ctx.r9.u64;
	// addi r30,r3,144
	ctx.r30.s64 = ctx.r3.s64 + 144;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x82afdfe0
	if (ctx.cr6.lt) goto loc_82AFDFE0;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// bl 0x82afd478
	ctx.lr = 0x82AFDFA8;
	sub_82AFD478(ctx, base);
	// stw r3,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r3.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82afdfe0
	if (ctx.cr0.lt) goto loc_82AFDFE0;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// stw r29,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r29.u32);
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r28,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r28.u32);
	// stw r27,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r27.u32);
	// stw r26,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r26.u32);
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// stw r25,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r25.u32);
	// lwz r3,28(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// bl 0x82afb800
	ctx.lr = 0x82AFDFE0;
	sub_82AFB800(ctx, base);
loc_82AFDFE0:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82fa76bc
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AFDFE8"))) PPC_WEAK_FUNC(sub_82AFDFE8);
PPC_FUNC_IMPL(__imp__sub_82AFDFE8) {
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
	// bl 0x82afd958
	ctx.lr = 0x82AFE008;
	sub_82AFD958(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82afe01c
	if (ctx.cr6.eq) goto loc_82AFE01C;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// b 0x82afe024
	goto loc_82AFE024;
loc_82AFE01C:
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// addi r4,r11,32570
	ctx.r4.s64 = ctx.r11.s64 + 32570;
loc_82AFE024:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82afd958
	ctx.lr = 0x82AFE02C;
	sub_82AFD958(ctx, base);
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// addi r5,r31,144
	ctx.r5.s64 = ctx.r31.s64 + 144;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r3,r31,32
	ctx.r3.s64 = ctx.r31.s64 + 32;
	// bl 0x82afc000
	ctx.lr = 0x82AFE040;
	sub_82AFC000(ctx, base);
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

__attribute__((alias("__imp__sub_82AFE058"))) PPC_WEAK_FUNC(sub_82AFE058);
PPC_FUNC_IMPL(__imp__sub_82AFE058) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7674
	ctx.lr = 0x82AFE060;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// bl 0x82afd478
	ctx.lr = 0x82AFE078;
	sub_82AFD478(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// stw r3,144(r30)
	PPC_STORE_U32(ctx.r30.u32 + 144, ctx.r3.u32);
	// blt 0x82afe0e8
	if (ctx.cr0.lt) goto loc_82AFE0E8;
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mulli r28,r10,276
	ctx.r28.s64 = ctx.r10.s64 * 276;
	// add r11,r28,r11
	ctx.r11.u64 = ctx.r28.u64 + ctx.r11.u64;
	// lwz r11,272(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 272);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82afe0e8
	if (!ctx.cr6.eq) goto loc_82AFE0E8;
	// lis r4,9351
	ctx.r4.s64 = 612827136;
	// addi r3,r29,1
	ctx.r3.s64 = ctx.r29.s64 + 1;
	// bl 0x82691410
	ctx.lr = 0x82AFE0AC;
	sub_82691410(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x82afe0c4
	if (!ctx.cr0.eq) goto loc_82AFE0C4;
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// ori r11,r11,16389
	ctx.r11.u64 = ctx.r11.u64 | 16389;
	// stw r11,144(r30)
	PPC_STORE_U32(ctx.r30.u32 + 144, ctx.r11.u32);
	// b 0x82afe0e8
	goto loc_82AFE0E8;
loc_82AFE0C4:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82fa77c0
	ctx.lr = 0x82AFE0D4;
	sub_82FA77C0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stbx r11,r31,r29
	PPC_STORE_U8(ctx.r31.u32 + ctx.r29.u32, ctx.r11.u8);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// add r11,r28,r11
	ctx.r11.u64 = ctx.r28.u64 + ctx.r11.u64;
	// stw r31,272(r11)
	PPC_STORE_U32(ctx.r11.u32 + 272, ctx.r31.u32);
loc_82AFE0E8:
	// lwz r3,144(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 144);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82fa76c4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AFE0F4"))) PPC_WEAK_FUNC(sub_82AFE0F4);
PPC_FUNC_IMPL(__imp__sub_82AFE0F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AFE0F8"))) PPC_WEAK_FUNC(sub_82AFE0F8);
PPC_FUNC_IMPL(__imp__sub_82AFE0F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7664
	ctx.lr = 0x82AFE100;
	__savegprlr_23(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,144(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 144);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// mr r24,r8
	ctx.r24.u64 = ctx.r8.u64;
	// mr r23,r9
	ctx.r23.u64 = ctx.r9.u64;
	// addi r29,r3,144
	ctx.r29.s64 = ctx.r3.s64 + 144;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x82afe1c4
	if (ctx.cr6.lt) goto loc_82AFE1C4;
	// lwz r28,72(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// bgt cr6,0x82afe16c
	if (ctx.cr6.gt) goto loc_82AFE16C;
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// addi r27,r4,1
	ctx.r27.s64 = ctx.r4.s64 + 1;
	// cmplw cr6,r27,r11
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82afe15c
	if (!ctx.cr6.gt) goto loc_82AFE15C;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82af9020
	ctx.lr = 0x82AFE15C;
	sub_82AF9020(ctx, base);
loc_82AFE15C:
	// stw r27,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r27.u32);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x82afe1c4
	if (ctx.cr6.lt) goto loc_82AFE1C4;
loc_82AFE16C:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x82afe1c4
	if (ctx.cr6.eq) goto loc_82AFE1C4;
	// lwz r10,72(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 72);
	// rlwinm r11,r31,4,0,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 4) & 0xFFFFFFF0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// add r31,r11,r10
	ctx.r31.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r24,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r24.u32);
	// stw r23,12(r31)
	PPC_STORE_U32(ctx.r31.u32 + 12, ctx.r23.u32);
	// lwz r11,20(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 20);
	// lwz r4,24(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// bl 0x82afd958
	ctx.lr = 0x82AFE19C;
	sub_82AFD958(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwimi r3,r11,0,0,0
	ctx.r3.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0x80000000) | (ctx.r3.u64 & 0xFFFFFFFF7FFFFFFF);
	// addi r7,r31,4
	ctx.r7.s64 = ctx.r31.s64 + 4;
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,96(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 96);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// bl 0x82990000
	ctx.lr = 0x82AFE1C0;
	sub_82990000(ctx, base);
	// stw r3,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r3.u32);
loc_82AFE1C4:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82fa76b4
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AFE1CC"))) PPC_WEAK_FUNC(sub_82AFE1CC);
PPC_FUNC_IMPL(__imp__sub_82AFE1CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AFE1D0"))) PPC_WEAK_FUNC(sub_82AFE1D0);
PPC_FUNC_IMPL(__imp__sub_82AFE1D0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7670
	ctx.lr = 0x82AFE1D8;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// addi r26,r3,144
	ctx.r26.s64 = ctx.r3.s64 + 144;
	// lwz r3,144(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 144);
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82afe2b0
	if (ctx.cr6.lt) goto loc_82AFE2B0;
	// lwz r30,108(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// bgt cr6,0x82afe238
	if (ctx.cr6.gt) goto loc_82AFE238;
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r29,r4,1
	ctx.r29.s64 = ctx.r4.s64 + 1;
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82afe228
	if (!ctx.cr6.gt) goto loc_82AFE228;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82af91d0
	ctx.lr = 0x82AFE228;
	sub_82AF91D0(ctx, base);
loc_82AFE228:
	// stw r29,4(r30)
	PPC_STORE_U32(ctx.r30.u32 + 4, ctx.r29.u32);
	// lwz r3,0(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82afe2b0
	if (ctx.cr6.lt) goto loc_82AFE2B0;
loc_82AFE238:
	// lwz r10,108(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// mulli r11,r27,20
	ctx.r11.s64 = ctx.r27.s64 * 20;
	// lwz r9,20(r28)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20);
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r4,24(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 24);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// add r31,r11,r10
	ctx.r31.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x82afd958
	ctx.lr = 0x82AFE258;
	sub_82AFD958(ctx, base);
	// stw r3,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r3.u32);
	// lwz r11,40(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 40);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// lwz r11,24(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 24);
	// lwz r30,44(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82afe2ac
	if (ctx.cr6.eq) goto loc_82AFE2AC;
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
loc_82AFE278:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// bl 0x82afc078
	ctx.lr = 0x82AFE294;
	sub_82AFC078(ctx, base);
	// lwz r3,0(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82afe2b0
	if (ctx.cr6.lt) goto loc_82AFE2B0;
	// lwz r30,12(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x82afe278
	if (!ctx.cr6.eq) goto loc_82AFE278;
loc_82AFE2AC:
	// lwz r3,0(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
loc_82AFE2B0:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82fa76c0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AFE2B8"))) PPC_WEAK_FUNC(sub_82AFE2B8);
PPC_FUNC_IMPL(__imp__sub_82AFE2B8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa765c
	ctx.lr = 0x82AFE2C0;
	__savegprlr_21(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,144(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 144);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// mr r24,r7
	ctx.r24.u64 = ctx.r7.u64;
	// mr r23,r8
	ctx.r23.u64 = ctx.r8.u64;
	// mr r22,r9
	ctx.r22.u64 = ctx.r9.u64;
	// mr r21,r10
	ctx.r21.u64 = ctx.r10.u64;
	// addi r29,r3,144
	ctx.r29.s64 = ctx.r3.s64 + 144;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x82afe390
	if (ctx.cr6.lt) goto loc_82AFE390;
	// lwz r28,112(r3)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r3.u32 + 112);
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// bgt cr6,0x82afe334
	if (ctx.cr6.gt) goto loc_82AFE334;
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// addi r27,r4,1
	ctx.r27.s64 = ctx.r4.s64 + 1;
	// cmplw cr6,r27,r11
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82afe324
	if (!ctx.cr6.gt) goto loc_82AFE324;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82af8f00
	ctx.lr = 0x82AFE324;
	sub_82AF8F00(ctx, base);
loc_82AFE324:
	// stw r27,4(r28)
	PPC_STORE_U32(ctx.r28.u32 + 4, ctx.r27.u32);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x82afe390
	if (ctx.cr6.lt) goto loc_82AFE390;
loc_82AFE334:
	// li r11,-1
	ctx.r11.s64 = -1;
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// beq cr6,0x82afe360
	if (ctx.cr6.eq) goto loc_82AFE360;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82afd478
	ctx.lr = 0x82AFE354;
	sub_82AFD478(ctx, base);
	// stw r3,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r3.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82afe390
	if (ctx.cr0.lt) goto loc_82AFE390;
loc_82AFE360:
	// lwz r10,112(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 112);
	// mulli r11,r31,28
	ctx.r11.s64 = ctx.r31.s64 * 28;
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r31,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r31.u32);
	// stw r26,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r26.u32);
	// stw r25,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r25.u32);
	// stw r9,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r9.u32);
	// stw r23,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r23.u32);
	// stw r22,20(r11)
	PPC_STORE_U32(ctx.r11.u32 + 20, ctx.r22.u32);
	// stw r21,24(r11)
	PPC_STORE_U32(ctx.r11.u32 + 24, ctx.r21.u32);
loc_82AFE390:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82fa76ac
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AFE398"))) PPC_WEAK_FUNC(sub_82AFE398);
PPC_FUNC_IMPL(__imp__sub_82AFE398) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x82AFE3A0;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,160(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 160);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82afe3bc
	if (!ctx.cr6.eq) goto loc_82AFE3BC;
	// bl 0x82afc0e8
	ctx.lr = 0x82AFE3BC;
	sub_82AFC0E8(ctx, base);
loc_82AFE3BC:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-28260
	ctx.r4.s64 = ctx.r11.s64 + -28260;
	// bl 0x82af8808
	ctx.lr = 0x82AFE3CC;
	sub_82AF8808(ctx, base);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,4436
	ctx.r4.s64 = ctx.r11.s64 + 4436;
	// bl 0x82af8808
	ctx.lr = 0x82AFE3DC;
	sub_82AF8808(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// bl 0x82af8860
	ctx.lr = 0x82AFE3EC;
	sub_82AF8860(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// addi r29,r11,-28272
	ctx.r29.s64 = ctx.r11.s64 + -28272;
	// addi r4,r10,-29564
	ctx.r4.s64 = ctx.r10.s64 + -29564;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82af8808
	ctx.lr = 0x82AFE408;
	sub_82AF8808(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r7,168(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 168);
	// addi r4,r11,-28340
	ctx.r4.s64 = ctx.r11.s64 + -28340;
	// lwz r6,164(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 164);
	// lwz r5,160(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 160);
	// bl 0x82af8808
	ctx.lr = 0x82AFE424;
	sub_82AF8808(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r5,21076
	ctx.r5.s64 = 21076;
	// addi r4,r11,-28288
	ctx.r4.s64 = ctx.r11.s64 + -28288;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82af8808
	ctx.lr = 0x82AFE438;
	sub_82AF8808(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82af9608
	ctx.lr = 0x82AFE440;
	sub_82AF9608(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82af9790
	ctx.lr = 0x82AFE44C;
	sub_82AF9790(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82afb240
	ctx.lr = 0x82AFE458;
	sub_82AFB240(ctx, base);
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82afd600
	ctx.lr = 0x82AFE464;
	sub_82AFD600(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82af88c0
	ctx.lr = 0x82AFE470;
	sub_82AF88C0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AFE478"))) PPC_WEAK_FUNC(sub_82AFE478);
PPC_FUNC_IMPL(__imp__sub_82AFE478) {
	PPC_FUNC_PROLOGUE();
	// b 0x82afde38
	sub_82AFDE38(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AFE47C"))) PPC_WEAK_FUNC(sub_82AFE47C);
PPC_FUNC_IMPL(__imp__sub_82AFE47C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AFE480"))) PPC_WEAK_FUNC(sub_82AFE480);
PPC_FUNC_IMPL(__imp__sub_82AFE480) {
	PPC_FUNC_PROLOGUE();
	// b 0x82afdf68
	sub_82AFDF68(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AFE484"))) PPC_WEAK_FUNC(sub_82AFE484);
PPC_FUNC_IMPL(__imp__sub_82AFE484) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AFE488"))) PPC_WEAK_FUNC(sub_82AFE488);
PPC_FUNC_IMPL(__imp__sub_82AFE488) {
	PPC_FUNC_PROLOGUE();
	// b 0x82afe058
	sub_82AFE058(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AFE48C"))) PPC_WEAK_FUNC(sub_82AFE48C);
PPC_FUNC_IMPL(__imp__sub_82AFE48C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AFE490"))) PPC_WEAK_FUNC(sub_82AFE490);
PPC_FUNC_IMPL(__imp__sub_82AFE490) {
	PPC_FUNC_PROLOGUE();
	// b 0x82afdfe8
	sub_82AFDFE8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AFE494"))) PPC_WEAK_FUNC(sub_82AFE494);
PPC_FUNC_IMPL(__imp__sub_82AFE494) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AFE498"))) PPC_WEAK_FUNC(sub_82AFE498);
PPC_FUNC_IMPL(__imp__sub_82AFE498) {
	PPC_FUNC_PROLOGUE();
	// b 0x82afe0f8
	sub_82AFE0F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AFE49C"))) PPC_WEAK_FUNC(sub_82AFE49C);
PPC_FUNC_IMPL(__imp__sub_82AFE49C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AFE4A0"))) PPC_WEAK_FUNC(sub_82AFE4A0);
PPC_FUNC_IMPL(__imp__sub_82AFE4A0) {
	PPC_FUNC_PROLOGUE();
	// b 0x82afe1d0
	sub_82AFE1D0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AFE4A4"))) PPC_WEAK_FUNC(sub_82AFE4A4);
PPC_FUNC_IMPL(__imp__sub_82AFE4A4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AFE4A8"))) PPC_WEAK_FUNC(sub_82AFE4A8);
PPC_FUNC_IMPL(__imp__sub_82AFE4A8) {
	PPC_FUNC_PROLOGUE();
	// b 0x82afe2b8
	sub_82AFE2B8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AFE4AC"))) PPC_WEAK_FUNC(sub_82AFE4AC);
PPC_FUNC_IMPL(__imp__sub_82AFE4AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AFE4B0"))) PPC_WEAK_FUNC(sub_82AFE4B0);
PPC_FUNC_IMPL(__imp__sub_82AFE4B0) {
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
	// lwz r10,144(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 144);
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// blt cr6,0x82afe52c
	if (ctx.cr6.lt) goto loc_82AFE52C;
	// lwz r10,148(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 148);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// beq cr6,0x82afe534
	if (ctx.cr6.eq) goto loc_82AFE534;
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// bne cr6,0x82afe534
	if (!ctx.cr6.eq) goto loc_82AFE534;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// addi r10,r10,-29596
	ctx.r10.s64 = ctx.r10.s64 + -29596;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// bl 0x82afe398
	ctx.lr = 0x82AFE518;
	sub_82AFE398(ctx, base);
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x82afe528
	if (ctx.cr6.lt) goto loc_82AFE528;
	// lwz r30,96(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
loc_82AFE528:
	// stw r11,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r11.u32);
loc_82AFE52C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// b 0x82afe538
	goto loc_82AFE538;
loc_82AFE534:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82AFE538:
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

__attribute__((alias("__imp__sub_82AFE550"))) PPC_WEAK_FUNC(sub_82AFE550);
PPC_FUNC_IMPL(__imp__sub_82AFE550) {
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
	// lwz r11,144(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 144);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x82afe5e8
	if (ctx.cr6.lt) goto loc_82AFE5E8;
	// lwz r11,148(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 148);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82afe5f0
	if (ctx.cr6.eq) goto loc_82AFE5F0;
	// cmpwi cr6,r11,3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 3, ctx.xer);
	// beq cr6,0x82afe598
	if (ctx.cr6.eq) goto loc_82AFE598;
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// ori r11,r11,16389
	ctx.r11.u64 = ctx.r11.u64 | 16389;
	// b 0x82afe5e4
	goto loc_82AFE5E4;
loc_82AFE598:
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// stw r4,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r4.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r5,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r5.u32);
	// addi r10,r10,-29580
	ctx.r10.s64 = ctx.r10.s64 + -29580;
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// bl 0x82afe398
	ctx.lr = 0x82AFE5D0;
	sub_82AFE398(ctx, base);
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x82afe5e4
	if (ctx.cr6.lt) goto loc_82AFE5E4;
	// lwz r10,104(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
loc_82AFE5E4:
	// stw r11,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r11.u32);
loc_82AFE5E8:
	// lwz r3,144(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 144);
	// b 0x82afe5f4
	goto loc_82AFE5F4;
loc_82AFE5F0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82AFE5F4:
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

__attribute__((alias("__imp__sub_82AFE60C"))) PPC_WEAK_FUNC(sub_82AFE60C);
PPC_FUNC_IMPL(__imp__sub_82AFE60C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AFE610"))) PPC_WEAK_FUNC(sub_82AFE610);
PPC_FUNC_IMPL(__imp__sub_82AFE610) {
	PPC_FUNC_PROLOGUE();
	// b 0x82afe4b0
	sub_82AFE4B0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AFE614"))) PPC_WEAK_FUNC(sub_82AFE614);
PPC_FUNC_IMPL(__imp__sub_82AFE614) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AFE618"))) PPC_WEAK_FUNC(sub_82AFE618);
PPC_FUNC_IMPL(__imp__sub_82AFE618) {
	PPC_FUNC_PROLOGUE();
	// b 0x82afe550
	sub_82AFE550(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AFE61C"))) PPC_WEAK_FUNC(sub_82AFE61C);
PPC_FUNC_IMPL(__imp__sub_82AFE61C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AFE620"))) PPC_WEAK_FUNC(sub_82AFE620);
PPC_FUNC_IMPL(__imp__sub_82AFE620) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// b 0x82fac8f8
	sub_82FAC8F8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AFE628"))) PPC_WEAK_FUNC(sub_82AFE628);
PPC_FUNC_IMPL(__imp__sub_82AFE628) {
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
	// bl 0x82fa27a8
	ctx.lr = 0x82AFE63C;
	sub_82FA27A8(ctx, base);
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

__attribute__((alias("__imp__sub_82AFE650"))) PPC_WEAK_FUNC(sub_82AFE650);
PPC_FUNC_IMPL(__imp__sub_82AFE650) {
	PPC_FUNC_PROLOGUE();
	// li r11,0
	ctx.r11.s64 = 0;
	// li r10,100
	ctx.r10.s64 = 100;
	// stw r11,16(r6)
	PPC_STORE_U32(ctx.r6.u32 + 16, ctx.r11.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,8(r6)
	PPC_STORE_U32(ctx.r6.u32 + 8, ctx.r11.u32);
	// stw r11,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r11.u32);
	// stw r11,4(r6)
	PPC_STORE_U32(ctx.r6.u32 + 4, ctx.r11.u32);
	// stw r10,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AFE674"))) PPC_WEAK_FUNC(sub_82AFE674);
PPC_FUNC_IMPL(__imp__sub_82AFE674) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AFE678"))) PPC_WEAK_FUNC(sub_82AFE678);
PPC_FUNC_IMPL(__imp__sub_82AFE678) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82afe6c8
	if (ctx.cr6.eq) goto loc_82AFE6C8;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// addi r10,r10,-28056
	ctx.r10.s64 = ctx.r10.s64 + -28056;
loc_82AFE68C:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// lbz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// subf r9,r8,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r8.s64;
	// beq 0x82afe6b0
	if (ctx.cr0.eq) goto loc_82AFE6B0;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82afe68c
	if (ctx.cr6.eq) goto loc_82AFE68C;
loc_82AFE6B0:
	// cmpwi r9,0
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82afe6c8
	if (!ctx.cr0.eq) goto loc_82AFE6C8;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r3,1
	ctx.r3.s64 = 1;
	// stw r11,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r11.u32);
	// blr 
	return;
loc_82AFE6C8:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AFE6D0"))) PPC_WEAK_FUNC(sub_82AFE6D0);
PPC_FUNC_IMPL(__imp__sub_82AFE6D0) {
	PPC_FUNC_PROLOGUE();
	// twi 31,r0,22
	if (ctx.r0.s32 < 22 || ctx.r0.s32 > 22 || ctx.r0.u32 == 22 || ctx.r0.u32 < 22 || ctx.r0.u32 > 22) __builtin_debugtrap();
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AFE6D8"))) PPC_WEAK_FUNC(sub_82AFE6D8);
PPC_FUNC_IMPL(__imp__sub_82AFE6D8) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctr 
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	return;
}

__attribute__((alias("__imp__sub_82AFE6E8"))) PPC_WEAK_FUNC(sub_82AFE6E8);
PPC_FUNC_IMPL(__imp__sub_82AFE6E8) {
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
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// bl 0x82b0fbb0
	ctx.lr = 0x82AFE708;
	sub_82B0FBB0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne 0x82afe71c
	if (!ctx.cr0.eq) goto loc_82AFE71C;
	// bl 0x82b0e890
	ctx.lr = 0x82AFE714;
	sub_82B0E890(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82afe724
	goto loc_82AFE724;
loc_82AFE71C:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
loc_82AFE724:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AFE734"))) PPC_WEAK_FUNC(sub_82AFE734);
PPC_FUNC_IMPL(__imp__sub_82AFE734) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AFE738"))) PPC_WEAK_FUNC(sub_82AFE738);
PPC_FUNC_IMPL(__imp__sub_82AFE738) {
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
	// mr r31,r7
	ctx.r31.u64 = ctx.r7.u64;
	// stw r6,0(r8)
	PPC_STORE_U32(ctx.r8.u32 + 0, ctx.r6.u32);
	// mr r30,r8
	ctx.r30.u64 = ctx.r8.u64;
	// cmplwi cr6,r5,19
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 19, ctx.xer);
	// beq cr6,0x82afe7bc
	if (ctx.cr6.eq) goto loc_82AFE7BC;
	// cmplwi cr6,r5,20
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 20, ctx.xer);
	// beq cr6,0x82afe7b4
	if (ctx.cr6.eq) goto loc_82AFE7B4;
	// cmplwi cr6,r5,21
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 21, ctx.xer);
	// beq cr6,0x82afe7ac
	if (ctx.cr6.eq) goto loc_82AFE7AC;
	// cmplwi cr6,r5,22
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 22, ctx.xer);
	// beq cr6,0x82afe7a0
	if (ctx.cr6.eq) goto loc_82AFE7A0;
	// cmplwi cr6,r5,23
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 23, ctx.xer);
	// beq cr6,0x82afe794
	if (ctx.cr6.eq) goto loc_82AFE794;
	// bl 0x82a82960
	ctx.lr = 0x82AFE784;
	sub_82A82960(ctx, base);
	// li r11,15
	ctx.r11.s64 = 15;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// b 0x82afe820
	goto loc_82AFE820;
loc_82AFE794:
	// li r11,11
	ctx.r11.s64 = 11;
loc_82AFE798:
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x82afe830
	goto loc_82AFE830;
loc_82AFE7A0:
	// li r11,10
	ctx.r11.s64 = 10;
	// li r10,1
	ctx.r10.s64 = 1;
	// b 0x82afe818
	goto loc_82AFE818;
loc_82AFE7AC:
	// li r11,10
	ctx.r11.s64 = 10;
	// b 0x82afe798
	goto loc_82AFE798;
loc_82AFE7B4:
	// li r11,5
	ctx.r11.s64 = 5;
	// b 0x82afe798
	goto loc_82AFE798;
loc_82AFE7BC:
	// cmplwi cr6,r6,10
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 10, ctx.xer);
	// bge cr6,0x82afe80c
	if (!ctx.cr6.lt) goto loc_82AFE80C;
	// cmplwi cr6,r3,20
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 20, ctx.xer);
	// beq cr6,0x82afe7fc
	if (ctx.cr6.eq) goto loc_82AFE7FC;
	// cmplwi cr6,r3,21
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 21, ctx.xer);
	// beq cr6,0x82afe7ac
	if (ctx.cr6.eq) goto loc_82AFE7AC;
	// cmplwi cr6,r3,22
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 22, ctx.xer);
	// beq cr6,0x82afe7a0
	if (ctx.cr6.eq) goto loc_82AFE7A0;
	// cmplwi cr6,r3,23
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 23, ctx.xer);
	// beq cr6,0x82afe794
	if (ctx.cr6.eq) goto loc_82AFE794;
	// cmplwi cr6,r3,33
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 33, ctx.xer);
	// beq cr6,0x82afe7b4
	if (ctx.cr6.eq) goto loc_82AFE7B4;
	// bl 0x82a82960
	ctx.lr = 0x82AFE7F0;
	sub_82A82960(ctx, base);
	// li r11,15
	ctx.r11.s64 = 15;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// b 0x82afe82c
	goto loc_82AFE82C;
loc_82AFE7FC:
	// li r11,5
	ctx.r11.s64 = 5;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r4,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r4.u32);
	// b 0x82afe820
	goto loc_82AFE820;
loc_82AFE80C:
	// rlwinm r11,r6,28,4,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 28) & 0xFFFFFFF;
	// clrlwi r10,r6,28
	ctx.r10.u64 = ctx.r6.u32 & 0xF;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
loc_82AFE818:
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
loc_82AFE820:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,13
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 13, ctx.xer);
	// ble cr6,0x82afe830
	if (!ctx.cr6.gt) goto loc_82AFE830;
loc_82AFE82C:
	// bl 0x82a82960
	ctx.lr = 0x82AFE830;
	sub_82A82960(ctx, base);
loc_82AFE830:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// blt cr6,0x82afe840
	if (ctx.cr6.lt) goto loc_82AFE840;
	// bl 0x82a82960
	ctx.lr = 0x82AFE840;
	sub_82A82960(ctx, base);
loc_82AFE840:
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

__attribute__((alias("__imp__sub_82AFE858"))) PPC_WEAK_FUNC(sub_82AFE858);
PPC_FUNC_IMPL(__imp__sub_82AFE858) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x82AFE860;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// rlwinm r29,r4,27,5,31
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 27) & 0x7FFFFFF;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// cmplwi cr6,r29,8
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 8, ctx.xer);
	// blt cr6,0x82afe89c
	if (ctx.cr6.lt) goto loc_82AFE89C;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// addi r6,r11,-27944
	ctx.r6.s64 = ctx.r11.s64 + -27944;
	// addi r5,r10,-28004
	ctx.r5.s64 = ctx.r10.s64 + -28004;
	// addi r4,r9,-28036
	ctx.r4.s64 = ctx.r9.s64 + -28036;
	// li r7,808
	ctx.r7.s64 = 808;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82b102f0
	ctx.lr = 0x82AFE89C;
	sub_82B102F0(ctx, base);
loc_82AFE89C:
	// rlwinm r11,r29,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// li r9,1
	ctx.r9.s64 = 1;
	// clrlwi r10,r30,27
	ctx.r10.u64 = ctx.r30.u32 & 0x1F;
	// slw r10,r9,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r10.u8 & 0x3F));
	// lwzx r9,r11,r31
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r31.u32);
	// or r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 | ctx.r9.u64;
	// stwx r10,r11,r31
	PPC_STORE_U32(ctx.r11.u32 + ctx.r31.u32, ctx.r10.u32);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AFE8C0"))) PPC_WEAK_FUNC(sub_82AFE8C0);
PPC_FUNC_IMPL(__imp__sub_82AFE8C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x82AFE8C8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// rlwinm r30,r4,27,5,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 27) & 0x7FFFFFF;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// cmplwi cr6,r30,8
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 8, ctx.xer);
	// blt cr6,0x82afe904
	if (ctx.cr6.lt) goto loc_82AFE904;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// addi r6,r11,-27944
	ctx.r6.s64 = ctx.r11.s64 + -27944;
	// addi r5,r10,-28004
	ctx.r5.s64 = ctx.r10.s64 + -28004;
	// addi r4,r9,-28036
	ctx.r4.s64 = ctx.r9.s64 + -28036;
	// li r7,814
	ctx.r7.s64 = 814;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82b102f0
	ctx.lr = 0x82AFE904;
	sub_82B102F0(ctx, base);
loc_82AFE904:
	// rlwinm r11,r30,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// clrlwi r10,r31,27
	ctx.r10.u64 = ctx.r31.u32 & 0x1F;
	// li r9,1
	ctx.r9.s64 = 1;
	// slw r10,r9,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r10.u8 & 0x3F));
	// lwzx r11,r11,r29
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	// and r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ctx.r11.u64;
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r3,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r3.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AFE92C"))) PPC_WEAK_FUNC(sub_82AFE92C);
PPC_FUNC_IMPL(__imp__sub_82AFE92C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AFE930"))) PPC_WEAK_FUNC(sub_82AFE930);
PPC_FUNC_IMPL(__imp__sub_82AFE930) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// srawi r11,r4,5
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x1F) != 0);
	ctx.r11.s64 = ctx.r4.s32 >> 5;
	// addze. r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt 0x82afe978
	if (ctx.cr0.lt) goto loc_82AFE978;
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r9,r10,r3
	ctx.r9.u64 = ctx.r10.u64 + ctx.r3.u64;
loc_82AFE944:
	// lwz r8,0(r9)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmpwi cr6,r8,-1
	ctx.cr6.compare<int32_t>(ctx.r8.s32, -1, ctx.xer);
	// beq cr6,0x82afe96c
	if (ctx.cr6.eq) goto loc_82AFE96C;
	// li r10,31
	ctx.r10.s64 = 31;
loc_82AFE954:
	// li r7,1
	ctx.r7.s64 = 1;
	// slw r7,r7,r10
	ctx.r7.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r10.u8 & 0x3F));
	// and. r7,r7,r8
	ctx.r7.u64 = ctx.r7.u64 & ctx.r8.u64;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq 0x82afe980
	if (ctx.cr0.eq) goto loc_82AFE980;
	// addic. r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bge 0x82afe954
	if (!ctx.cr0.lt) goto loc_82AFE954;
loc_82AFE96C:
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r9,r9,-4
	ctx.r9.s64 = ctx.r9.s64 + -4;
	// bge 0x82afe944
	if (!ctx.cr0.lt) goto loc_82AFE944;
loc_82AFE978:
	// li r3,-1
	ctx.r3.s64 = -1;
	// blr 
	return;
loc_82AFE980:
	// rlwinm r11,r11,5,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 5) & 0xFFFFFFE0;
	// add r3,r11,r10
	ctx.r3.u64 = ctx.r11.u64 + ctx.r10.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AFE98C"))) PPC_WEAK_FUNC(sub_82AFE98C);
PPC_FUNC_IMPL(__imp__sub_82AFE98C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AFE990"))) PPC_WEAK_FUNC(sub_82AFE990);
PPC_FUNC_IMPL(__imp__sub_82AFE990) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x82AFE998;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,12(r4)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + 12);
	// lwz r28,8(r4)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x82afe9b0
	if (!ctx.cr6.eq) goto loc_82AFE9B0;
	// li r30,1
	ctx.r30.s64 = 1;
loc_82AFE9B0:
	// li r31,0
	ctx.r31.s64 = 0;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82afe9d8
	if (ctx.cr6.eq) goto loc_82AFE9D8;
	// addi r29,r3,40
	ctx.r29.s64 = ctx.r3.s64 + 40;
loc_82AFE9C0:
	// add r4,r31,r28
	ctx.r4.u64 = ctx.r31.u64 + ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82afe858
	ctx.lr = 0x82AFE9CC;
	sub_82AFE858(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplw cr6,r31,r30
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r30.u32, ctx.xer);
	// blt cr6,0x82afe9c0
	if (ctx.cr6.lt) goto loc_82AFE9C0;
loc_82AFE9D8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AFE9E0"))) PPC_WEAK_FUNC(sub_82AFE9E0);
PPC_FUNC_IMPL(__imp__sub_82AFE9E0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7670
	ctx.lr = 0x82AFE9E8;
	__savegprlr_26(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// li r5,48
	ctx.r5.s64 = 48;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// bl 0x82fa77c0
	ctx.lr = 0x82AFEA08;
	sub_82FA77C0(ctx, base);
	// lwz r10,112(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// bne cr6,0x82afea38
	if (!ctx.cr6.eq) goto loc_82AFEA38;
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82afeb08
	if (!ctx.cr6.eq) goto loc_82AFEB08;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82afe990
	ctx.lr = 0x82AFEA2C;
	sub_82AFE990(ctx, base);
	// lwz r10,112(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// beq cr6,0x82afeafc
	if (ctx.cr6.eq) goto loc_82AFEAFC;
loc_82AFEA38:
	// lhz r11,6(r30)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r30.u32 + 6);
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lhz r8,4(r30)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r30.u32 + 4);
	// lwz r31,92(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmpwi cr6,r9,2
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 2, ctx.xer);
	// mullw r11,r11,r8
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r8.s32);
	// beq cr6,0x82afea5c
	if (ctx.cr6.eq) goto loc_82AFEA5C;
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// bne cr6,0x82afea6c
	if (!ctx.cr6.eq) goto loc_82AFEA6C;
loc_82AFEA5C:
	// clrlwi. r9,r11,30
	ctx.r9.u64 = ctx.r11.u32 & 0x3;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// rlwinm r11,r11,30,2,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFF;
	// beq 0x82afea6c
	if (ctx.cr0.eq) goto loc_82AFEA6C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_82AFEA6C:
	// li r9,1
	ctx.r9.s64 = 1;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r9,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r9.u32);
	// beq 0x82afec10
	if (ctx.cr0.eq) goto loc_82AFEC10;
	// mr r29,r10
	ctx.r29.u64 = ctx.r10.u64;
loc_82AFEA84:
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82afea94
	if (!ctx.cr6.lt) goto loc_82AFEA94;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
loc_82AFEA94:
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// subf r31,r11,r31
	ctx.r31.s64 = ctx.r31.s64 - ctx.r11.s64;
	// bl 0x82afe9e0
	ctx.lr = 0x82AFEAB0;
	sub_82AFE9E0(ctx, base);
	// lwz r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r10,124(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// add r9,r9,r11
	ctx.r9.u64 = ctx.r9.u64 + ctx.r11.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// beq cr6,0x82afeaf0
	if (ctx.cr6.eq) goto loc_82AFEAF0;
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// subfic r9,r9,0
	ctx.xer.ca = ctx.r9.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r9.s64;
	// subfe r9,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r9.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi r9,r9,30
	ctx.r9.u64 = ctx.r9.u32 & 0x3;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// mullw r9,r9,r11
	ctx.r9.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r11.s32);
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r10,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r10.u32);
loc_82AFEAF0:
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne 0x82afea84
	if (!ctx.cr0.eq) goto loc_82AFEA84;
	// b 0x82afec10
	goto loc_82AFEC10;
loc_82AFEAFC:
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82afec10
	if (ctx.cr6.eq) goto loc_82AFEC10;
loc_82AFEB08:
	// lwz r10,12(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// lwz r31,92(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// add r10,r10,r28
	ctx.r10.u64 = ctx.r10.u64 + ctx.r28.u64;
	// beq cr6,0x82afec10
	if (ctx.cr6.eq) goto loc_82AFEC10;
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r30,r10,4
	ctx.r30.s64 = ctx.r10.s64 + 4;
	// mr r29,r11
	ctx.r29.u64 = ctx.r11.u64;
loc_82AFEB28:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpwi cr6,r9,2
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 2, ctx.xer);
	// add r7,r11,r28
	ctx.r7.u64 = ctx.r11.u64 + ctx.r28.u64;
	// lhz r11,6(r7)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r7.u32 + 6);
	// lhz r10,4(r7)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r7.u32 + 4);
	// mullw r11,r11,r10
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// beq cr6,0x82afeb4c
	if (ctx.cr6.eq) goto loc_82AFEB4C;
	// cmpwi cr6,r9,1
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 1, ctx.xer);
	// bne cr6,0x82afeb5c
	if (!ctx.cr6.eq) goto loc_82AFEB5C;
loc_82AFEB4C:
	// clrlwi. r10,r11,30
	ctx.r10.u64 = ctx.r11.u32 & 0x3;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// rlwinm r11,r11,30,2,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFF;
	// beq 0x82afeb5c
	if (ctx.cr0.eq) goto loc_82AFEB5C;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_82AFEB5C:
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// lhz r10,8(r7)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r7.u32 + 8);
	// mullw r11,r10,r11
	ctx.r11.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82afeb7c
	if (!ctx.cr6.lt) goto loc_82AFEB7C;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
loc_82AFEB7C:
	// lhz r10,6(r7)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r7.u32 + 6);
	// subf r31,r11,r31
	ctx.r31.s64 = ctx.r31.s64 - ctx.r11.s64;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// stw r10,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r10.u32);
	// lhz r11,4(r7)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r7.u32 + 4);
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// lhz r11,0(r7)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r7.u32 + 0);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// lhz r11,2(r7)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r7.u32 + 2);
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// lhz r11,8(r7)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r7.u32 + 8);
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// lhz r11,10(r7)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r7.u32 + 10);
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// bl 0x82afe9e0
	ctx.lr = 0x82AFEBC4;
	sub_82AFE9E0(ctx, base);
	// lwz r8,88(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r10,92(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r11,124(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// add r8,r8,r10
	ctx.r8.u64 = ctx.r8.u64 + ctx.r10.u64;
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r8,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r8.u32);
	// beq cr6,0x82afec04
	if (ctx.cr6.eq) goto loc_82AFEC04;
	// subfic r8,r9,0
	ctx.xer.ca = ctx.r9.u32 <= 0;
	ctx.r8.s64 = 0 - ctx.r9.s64;
	// subfe r8,r8,r8
	temp.u8 = (~ctx.r8.u32 + ctx.r8.u32 < ~ctx.r8.u32) | (~ctx.r8.u32 + ctx.r8.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ~ctx.r8.u64 + ctx.r8.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi r8,r8,30
	ctx.r8.u64 = ctx.r8.u32 & 0x3;
	// addi r8,r8,1
	ctx.r8.s64 = ctx.r8.s64 + 1;
	// mullw r10,r8,r10
	ctx.r10.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r10.s32);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
loc_82AFEC04:
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// bne 0x82afeb28
	if (!ctx.cr0.eq) goto loc_82AFEB28;
loc_82AFEC10:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82fa76c0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AFEC18"))) PPC_WEAK_FUNC(sub_82AFEC18);
PPC_FUNC_IMPL(__imp__sub_82AFEC18) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// lhz r11,4(r6)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r6.u32 + 4);
	// stw r11,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r11.u32);
	// lhz r11,6(r6)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r6.u32 + 6);
	// stw r11,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r11.u32);
	// lhz r11,8(r6)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r6.u32 + 8);
	// stw r11,12(r4)
	PPC_STORE_U32(ctx.r4.u32 + 12, ctx.r11.u32);
	// lwz r11,16(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// bne cr6,0x82afec50
	if (!ctx.cr6.eq) goto loc_82AFEC50;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82AFEC50:
	// stw r11,44(r4)
	PPC_STORE_U32(ctx.r4.u32 + 44, ctx.r11.u32);
	// lhz r11,6(r7)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r7.u32 + 6);
	// stw r11,28(r4)
	PPC_STORE_U32(ctx.r4.u32 + 28, ctx.r11.u32);
	// lhz r11,4(r7)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r7.u32 + 4);
	// stw r11,24(r4)
	PPC_STORE_U32(ctx.r4.u32 + 24, ctx.r11.u32);
	// lhz r11,0(r7)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r7.u32 + 0);
	// stw r11,16(r4)
	PPC_STORE_U32(ctx.r4.u32 + 16, ctx.r11.u32);
	// lhz r11,2(r7)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r7.u32 + 2);
	// stw r11,20(r4)
	PPC_STORE_U32(ctx.r4.u32 + 20, ctx.r11.u32);
	// lhz r11,8(r7)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r7.u32 + 8);
	// stw r11,32(r4)
	PPC_STORE_U32(ctx.r4.u32 + 32, ctx.r11.u32);
	// lhz r11,10(r7)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r7.u32 + 10);
	// stw r11,36(r4)
	PPC_STORE_U32(ctx.r4.u32 + 36, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AFEC88"))) PPC_WEAK_FUNC(sub_82AFEC88);
PPC_FUNC_IMPL(__imp__sub_82AFEC88) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7674
	ctx.lr = 0x82AFEC90;
	__savegprlr_27(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82afed2c
	if (ctx.cr6.eq) goto loc_82AFED2C;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82AFECB4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq 0x82afed2c
	if (ctx.cr0.eq) goto loc_82AFED2C;
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82afed2c
	if (ctx.cr6.eq) goto loc_82AFED2C;
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// add r30,r10,r31
	ctx.r30.u64 = ctx.r10.u64 + ctx.r31.u64;
	// beq cr6,0x82afed2c
	if (ctx.cr6.eq) goto loc_82AFED2C;
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
loc_82AFECDC:
	// lwz r11,12(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// add r29,r11,r31
	ctx.r29.u64 = ctx.r11.u64 + ctx.r31.u64;
	// lhz r11,2(r29)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r29.u32 + 2);
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bne cr6,0x82afed20
	if (!ctx.cr6.eq) goto loc_82AFED20;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82afec18
	ctx.lr = 0x82AFED08;
	sub_82AFEC18(ctx, base);
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82afe9e0
	ctx.lr = 0x82AFED20;
	sub_82AFE9E0(ctx, base);
loc_82AFED20:
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// addi r30,r30,20
	ctx.r30.s64 = ctx.r30.s64 + 20;
	// bne 0x82afecdc
	if (!ctx.cr0.eq) goto loc_82AFECDC;
loc_82AFED2C:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82fa76c4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AFED34"))) PPC_WEAK_FUNC(sub_82AFED34);
PPC_FUNC_IMPL(__imp__sub_82AFED34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AFED38"))) PPC_WEAK_FUNC(sub_82AFED38);
PPC_FUNC_IMPL(__imp__sub_82AFED38) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7674
	ctx.lr = 0x82AFED40;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// addi r27,r3,8
	ctx.r27.s64 = ctx.r3.s64 + 8;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// bl 0x82afe8c0
	ctx.lr = 0x82AFED58;
	sub_82AFE8C0(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82afedc8
	if (!ctx.cr0.eq) goto loc_82AFEDC8;
	// addi r28,r31,40
	ctx.r28.s64 = ctx.r31.s64 + 40;
	// lwz r4,4680(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4680);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82afe930
	ctx.lr = 0x82AFED70;
	sub_82AFE930(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bge 0x82afed88
	if (!ctx.cr0.lt) goto loc_82AFED88;
	// li r11,1
	ctx.r11.s64 = 1;
	// li r3,0
	ctx.r3.s64 = 0;
	// stb r11,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r11.u8);
	// b 0x82afedd0
	goto loc_82AFEDD0;
loc_82AFED88:
	// addi r11,r30,-1
	ctx.r11.s64 = ctx.r30.s64 + -1;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// stw r11,4680(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4680, ctx.r11.u32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82afe858
	ctx.lr = 0x82AFED9C;
	sub_82AFE858(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stb r29,328(r11)
	PPC_STORE_U8(ctx.r11.u32 + 328, ctx.r29.u8);
	// bl 0x82afe858
	ctx.lr = 0x82AFEDB4;
	sub_82AFE858(ctx, base);
	// add r11,r29,r31
	ctx.r11.u64 = ctx.r29.u64 + ctx.r31.u64;
	// stb r30,72(r11)
	PPC_STORE_U8(ctx.r11.u32 + 72, ctx.r30.u8);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
loc_82AFEDC8:
	// add r11,r29,r31
	ctx.r11.u64 = ctx.r29.u64 + ctx.r31.u64;
	// lbz r3,72(r11)
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r11.u32 + 72);
loc_82AFEDD0:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AFEDD8"))) PPC_WEAK_FUNC(sub_82AFEDD8);
PPC_FUNC_IMPL(__imp__sub_82AFEDD8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x82AFEDE0;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r8
	ctx.r28.u64 = ctx.r8.u64;
	// clrlwi. r11,r4,24
	ctx.r11.u64 = ctx.r4.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82afeef8
	if (ctx.cr0.eq) goto loc_82AFEEF8;
	// clrlwi. r11,r5,24
	ctx.r11.u64 = ctx.r5.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82afeef8
	if (!ctx.cr0.eq) goto loc_82AFEEF8;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm. r10,r11,0,0,0
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82afee1c
	if (!ctx.cr0.eq) goto loc_82AFEE1C;
	// rlwinm. r10,r11,0,1,1
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82afee1c
	if (!ctx.cr0.eq) goto loc_82AFEE1C;
	// rlwinm. r11,r11,0,2,2
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne 0x82afee20
	if (!ctx.cr0.eq) goto loc_82AFEE20;
loc_82AFEE1C:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82AFEE20:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82afeef8
	if (ctx.cr0.eq) goto loc_82AFEEF8;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lis r10,-31975
	ctx.r10.s64 = -2095513600;
	// addi r30,r10,5832
	ctx.r30.s64 = ctx.r10.s64 + 5832;
	// rlwinm r29,r11,10,25,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 10) & 0x7C;
	// lwzx r10,r29,r30
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r30.u32);
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// blt cr6,0x82afee5c
	if (ctx.cr6.lt) goto loc_82AFEE5C;
	// rlwinm. r11,r11,0,0,0
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82afee5c
	if (!ctx.cr0.eq) goto loc_82AFEE5C;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lbz r4,9(r31)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r31.u32 + 9);
	// bl 0x82afed38
	ctx.lr = 0x82AFEE58;
	sub_82AFED38(ctx, base);
	// stb r3,9(r31)
	PPC_STORE_U8(ctx.r31.u32 + 9, ctx.r3.u8);
loc_82AFEE5C:
	// lwzx r11,r29,r30
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r30.u32);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// blt cr6,0x82afee84
	if (ctx.cr6.lt) goto loc_82AFEE84;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm. r11,r11,0,1,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82afee84
	if (!ctx.cr0.eq) goto loc_82AFEE84;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lbz r4,10(r31)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r31.u32 + 10);
	// bl 0x82afed38
	ctx.lr = 0x82AFEE80;
	sub_82AFED38(ctx, base);
	// stb r3,10(r31)
	PPC_STORE_U8(ctx.r31.u32 + 10, ctx.r3.u8);
loc_82AFEE84:
	// lwzx r10,r29,r30
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r30.u32);
	// lis r11,-31975
	ctx.r11.s64 = -2095513600;
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// addi r30,r11,6272
	ctx.r30.s64 = ctx.r11.s64 + 6272;
	// bge cr6,0x82afeeac
	if (!ctx.cr6.lt) goto loc_82AFEEAC;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r11,r11,8,24,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFC;
	// lwzx r11,r11,r30
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82afeec8
	if (!ctx.cr6.eq) goto loc_82AFEEC8;
loc_82AFEEAC:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm. r10,r11,0,2,2
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20000000;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82afeec8
	if (!ctx.cr0.eq) goto loc_82AFEEC8;
	// clrlwi r4,r11,24
	ctx.r4.u64 = ctx.r11.u32 & 0xFF;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82afed38
	ctx.lr = 0x82AFEEC4;
	sub_82AFED38(ctx, base);
	// stb r3,11(r31)
	PPC_STORE_U8(ctx.r31.u32 + 11, ctx.r3.u8);
loc_82AFEEC8:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm r11,r11,8,24,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 8) & 0xFC;
	// lwzx r11,r11,r30
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// bne cr6,0x82afeeec
	if (!ctx.cr6.eq) goto loc_82AFEEEC;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lbz r4,11(r31)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r31.u32 + 11);
	// bl 0x82afed38
	ctx.lr = 0x82AFEEE8;
	sub_82AFED38(ctx, base);
	// stb r3,11(r31)
	PPC_STORE_U8(ctx.r31.u32 + 11, ctx.r3.u8);
loc_82AFEEEC:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm r11,r11,0,3,1
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFDFFFFFFF;
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
loc_82AFEEF8:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AFEF00"))) PPC_WEAK_FUNC(sub_82AFEF00);
PPC_FUNC_IMPL(__imp__sub_82AFEF00) {
	PPC_FUNC_PROLOGUE();
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r30.u64);
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// clrlwi. r11,r5,24
	ctx.r11.u64 = ctx.r5.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r30,0
	ctx.r30.s64 = 0;
	// beq 0x82afef1c
	if (ctx.cr0.eq) goto loc_82AFEF1C;
	// std r30,0(r3)
	PPC_STORE_U64(ctx.r3.u32 + 0, ctx.r30.u64);
loc_82AFEF1C:
	// clrlwi. r11,r4,24
	ctx.r11.u64 = ctx.r4.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// beq 0x82afef8c
	if (ctx.cr0.eq) goto loc_82AFEF8C;
	// lwz r11,0(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// clrlwi r9,r11,27
	ctx.r9.u64 = ctx.r11.u32 & 0x1F;
	// cmplwi cr6,r9,19
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 19, ctx.xer);
	// bgt cr6,0x82afef48
	if (ctx.cr6.gt) goto loc_82AFEF48;
	// rlwinm r10,r11,20,26,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 20) & 0x3F;
	// slw r10,r4,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r4.u32 << (ctx.r10.u8 & 0x3F));
loc_82AFEF48:
	// clrlwi. r9,r6,24
	ctx.r9.u64 = ctx.r6.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// beq 0x82afef60
	if (ctx.cr0.eq) goto loc_82AFEF60;
	// lwz r9,4(r7)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r7.u32 + 4);
	// rlwinm. r9,r9,0,1,1
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x40000000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82afef68
	if (!ctx.cr0.eq) goto loc_82AFEF68;
loc_82AFEF60:
	// rlwinm r9,r11,27,26,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x3F;
	// slw r8,r4,r9
	ctx.r8.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r4.u32 << (ctx.r9.u8 & 0x3F));
loc_82AFEF68:
	// rlwinm. r9,r11,0,13,13
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// li r9,-1
	ctx.r9.s64 = -1;
	// bne 0x82afef78
	if (!ctx.cr0.eq) goto loc_82AFEF78;
	// clrldi r9,r10,32
	ctx.r9.u64 = ctx.r10.u64 & 0xFFFFFFFF;
loc_82AFEF78:
	// rlwinm. r11,r11,0,20,20
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x800;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// bne 0x82afef90
	if (!ctx.cr0.eq) goto loc_82AFEF90;
	// clrldi r11,r8,32
	ctx.r11.u64 = ctx.r8.u64 & 0xFFFFFFFF;
	// b 0x82afef94
	goto loc_82AFEF94;
loc_82AFEF8C:
	// li r10,-1
	ctx.r10.s64 = -1;
loc_82AFEF90:
	// li r11,-1
	ctx.r11.s64 = -1;
loc_82AFEF94:
	// ld r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// and r11,r11,r8
	ctx.r11.u64 = ctx.r11.u64 & ctx.r8.u64;
	// cmpdi cr6,r11,0
	ctx.cr6.compare<int64_t>(ctx.r11.s64, 0, ctx.xer);
	// beq cr6,0x82afefac
	if (ctx.cr6.eq) goto loc_82AFEFAC;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
loc_82AFEFAC:
	// clrlwi. r11,r5,24
	ctx.r11.u64 = ctx.r5.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82afefb8
	if (ctx.cr0.eq) goto loc_82AFEFB8;
	// std r30,0(r31)
	PPC_STORE_U64(ctx.r31.u32 + 0, ctx.r30.u64);
loc_82AFEFB8:
	// ld r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r31.u32 + 0);
	// mr r3,r5
	ctx.r3.u64 = ctx.r5.u64;
	// or r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 | ctx.r9.u64;
	// std r11,0(r31)
	PPC_STORE_U64(ctx.r31.u32 + 0, ctx.r11.u64);
	// ld r30,-16(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AFEFD4"))) PPC_WEAK_FUNC(sub_82AFEFD4);
PPC_FUNC_IMPL(__imp__sub_82AFEFD4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AFEFD8"))) PPC_WEAK_FUNC(sub_82AFEFD8);
PPC_FUNC_IMPL(__imp__sub_82AFEFD8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7670
	ctx.lr = 0x82AFEFE0;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31961
	ctx.r11.s64 = -2094596096;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// addi r31,r11,-25944
	ctx.r31.s64 = ctx.r11.s64 + -25944;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// li r28,1
	ctx.r28.s64 = 1;
	// addi r8,r31,40
	ctx.r8.s64 = ctx.r31.s64 + 40;
loc_82AFF000:
	// mfmsr r9
	ctx.r9.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r8
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r8.u32);
	ctx.r10.u64 = __builtin_bswap32(ctx.reserved.u32);
	// cmpw cr6,r10,r30
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r30.s32, ctx.xer);
	// bne cr6,0x82aff024
	if (!ctx.cr6.eq) goto loc_82AFF024;
	// stwcx. r28,0,r8
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r8.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r28.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x82aff000
	if (!ctx.cr0.eq) goto loc_82AFF000;
	// b 0x82aff02c
	goto loc_82AFF02C;
loc_82AFF024:
	// stwcx. r10,0,r8
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r8.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r10.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
loc_82AFF02C:
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// b 0x82aff070
	goto loc_82AFF070;
loc_82AFF034:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82a77720
	ctx.lr = 0x82AFF03C;
	sub_82A77720(ctx, base);
	// addi r10,r31,40
	ctx.r10.s64 = ctx.r31.s64 + 40;
loc_82AFF040:
	// mfmsr r9
	ctx.r9.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r10
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r10.u32);
	ctx.r11.u64 = __builtin_bswap32(ctx.reserved.u32);
	// cmpw cr6,r11,r30
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r30.s32, ctx.xer);
	// bne cr6,0x82aff064
	if (!ctx.cr6.eq) goto loc_82AFF064;
	// stwcx. r28,0,r10
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r10.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r28.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x82aff040
	if (!ctx.cr0.eq) goto loc_82AFF040;
	// b 0x82aff06c
	goto loc_82AFF06C;
loc_82AFF064:
	// stwcx. r11,0,r10
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r10.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r11.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
loc_82AFF06C:
	// mr r11,r11
	ctx.r11.u64 = ctx.r11.u64;
loc_82AFF070:
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82aff034
	if (ctx.cr6.eq) goto loc_82AFF034;
	// lis r29,-31961
	ctx.r29.s64 = -2094596096;
	// lwz r11,-25908(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -25908);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82aff090
	if (!ctx.cr6.eq) goto loc_82AFF090;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831791c4
	ctx.lr = 0x82AFF090;
	__imp__RtlInitializeCriticalSection(ctx, base);
loc_82AFF090:
	// lwz r11,-25908(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -25908);
	// addi r8,r31,40
	ctx.r8.s64 = ctx.r31.s64 + 40;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,-25908(r29)
	PPC_STORE_U32(ctx.r29.u32 + -25908, ctx.r11.u32);
loc_82AFF0A0:
	// mfmsr r9
	ctx.r9.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r8
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r8.u32);
	ctx.r10.u64 = __builtin_bswap32(ctx.reserved.u32);
	// stwcx. r30,0,r8
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r8.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r30.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x82aff0a0
	if (!ctx.cr0.eq) goto loc_82AFF0A0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831791a4
	ctx.lr = 0x82AFF0C0;
	__imp__RtlEnterCriticalSection(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82b133d8
	ctx.lr = 0x82AFF0CC;
	sub_82B133D8(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x831791b4
	ctx.lr = 0x82AFF0D8;
	__imp__RtlLeaveCriticalSection(ctx, base);
	// addi r10,r31,40
	ctx.r10.s64 = ctx.r31.s64 + 40;
loc_82AFF0DC:
	// mfmsr r9
	ctx.r9.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r10
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r10.u32);
	ctx.r11.u64 = __builtin_bswap32(ctx.reserved.u32);
	// cmpw cr6,r11,r30
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r30.s32, ctx.xer);
	// bne cr6,0x82aff100
	if (!ctx.cr6.eq) goto loc_82AFF100;
	// stwcx. r28,0,r10
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r10.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r28.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x82aff0dc
	if (!ctx.cr0.eq) goto loc_82AFF0DC;
	// b 0x82aff144
	goto loc_82AFF144;
loc_82AFF100:
	// stwcx. r11,0,r10
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r10.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r11.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// b 0x82aff144
	goto loc_82AFF144;
loc_82AFF10C:
	// li r3,1
	ctx.r3.s64 = 1;
	// bl 0x82a77720
	ctx.lr = 0x82AFF114;
	sub_82A77720(ctx, base);
	// addi r10,r31,40
	ctx.r10.s64 = ctx.r31.s64 + 40;
loc_82AFF118:
	// mfmsr r9
	ctx.r9.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r11,0,r10
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r10.u32);
	ctx.r11.u64 = __builtin_bswap32(ctx.reserved.u32);
	// cmpw cr6,r11,r30
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r30.s32, ctx.xer);
	// bne cr6,0x82aff13c
	if (!ctx.cr6.eq) goto loc_82AFF13C;
	// stwcx. r28,0,r10
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r10.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r28.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x82aff118
	if (!ctx.cr0.eq) goto loc_82AFF118;
	// b 0x82aff144
	goto loc_82AFF144;
loc_82AFF13C:
	// stwcx. r11,0,r10
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r10.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r11.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
loc_82AFF144:
	// mr r11,r11
	ctx.r11.u64 = ctx.r11.u64;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// beq cr6,0x82aff10c
	if (ctx.cr6.eq) goto loc_82AFF10C;
	// lwz r11,-25908(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -25908);
	// addi r8,r31,40
	ctx.r8.s64 = ctx.r31.s64 + 40;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,-25908(r29)
	PPC_STORE_U32(ctx.r29.u32 + -25908, ctx.r11.u32);
	// lwz r11,-25908(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + -25908);
loc_82AFF164:
	// mfmsr r9
	ctx.r9.u64 = ctx.msr;
	// mtmsrd r13,1
	ctx.msr = (ctx.r13.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// lwarx r10,0,r8
	ctx.reserved.u32 = *(uint32_t*)(base + ctx.r8.u32);
	ctx.r10.u64 = __builtin_bswap32(ctx.reserved.u32);
	// stwcx. r30,0,r8
	ctx.cr0.lt = 0;
	ctx.cr0.gt = 0;
	ctx.cr0.eq = __sync_bool_compare_and_swap(reinterpret_cast<uint32_t*>(base + ctx.r8.u32), ctx.reserved.s32, __builtin_bswap32(ctx.r30.s32));
	ctx.cr0.so = ctx.xer.so;
	// mtmsrd r9,1
	ctx.msr = (ctx.r9.u32 & 0x8020) | (ctx.msr & ~0x8020);
	// bne 0x82aff164
	if (!ctx.cr0.eq) goto loc_82AFF164;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82fa76c0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AFF188"))) PPC_WEAK_FUNC(sub_82AFF188);
PPC_FUNC_IMPL(__imp__sub_82AFF188) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r4,3
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 3, ctx.xer);
	// bne cr6,0x82aff1d8
	if (!ctx.cr6.eq) goto loc_82AFF1D8;
	// cmplwi cr6,r7,1
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 1, ctx.xer);
	// bge cr6,0x82aff1a4
	if (!ctx.cr6.lt) goto loc_82AFF1A4;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// blr 
	return;
loc_82AFF1A4:
	// lwz r8,0(r3)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r10,0
	ctx.r10.s64 = 0;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// cmplwi cr6,r8,0
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 0, ctx.xer);
	// beq cr6,0x82aff1d8
	if (ctx.cr6.eq) goto loc_82AFF1D8;
loc_82AFF1B8:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// clrlwi r7,r9,20
	ctx.r7.u64 = ctx.r9.u32 & 0xFFF;
	// cmplw cr6,r7,r5
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r5.u32, ctx.xer);
	// beq cr6,0x82aff1e0
	if (ctx.cr6.eq) goto loc_82AFF1E0;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmplw cr6,r10,r8
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r8.u32, ctx.xer);
	// blt cr6,0x82aff1b8
	if (ctx.cr6.lt) goto loc_82AFF1B8;
loc_82AFF1D8:
	// li r3,1
	ctx.r3.s64 = 1;
	// blr 
	return;
loc_82AFF1E0:
	// rlwinm r11,r9,24,24,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 24) & 0xF0;
	// rlwinm r10,r9,16,28,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 16) & 0xF;
	// li r3,0
	ctx.r3.s64 = 0;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// stb r11,0(r6)
	PPC_STORE_U8(ctx.r6.u32 + 0, ctx.r11.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AFF1F8"))) PPC_WEAK_FUNC(sub_82AFF1F8);
PPC_FUNC_IMPL(__imp__sub_82AFF1F8) {
	PPC_FUNC_PROLOGUE();
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82aff208
	if (ctx.cr6.eq) goto loc_82AFF208;
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
loc_82AFF208:
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AFF210"))) PPC_WEAK_FUNC(sub_82AFF210);
PPC_FUNC_IMPL(__imp__sub_82AFF210) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,0(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
	// lhz r11,4(r5)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r5.u32 + 4);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
	// lhz r11,6(r5)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r5.u32 + 6);
	// stw r11,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r11.u32);
	// lhz r11,8(r5)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r5.u32 + 8);
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// lwz r11,16(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 16);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
	// bne cr6,0x82aff248
	if (!ctx.cr6.eq) goto loc_82AFF248;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82AFF248:
	// stw r11,44(r3)
	PPC_STORE_U32(ctx.r3.u32 + 44, ctx.r11.u32);
	// lhz r11,6(r6)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r6.u32 + 6);
	// stw r11,28(r3)
	PPC_STORE_U32(ctx.r3.u32 + 28, ctx.r11.u32);
	// lhz r11,4(r6)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r6.u32 + 4);
	// stw r11,24(r3)
	PPC_STORE_U32(ctx.r3.u32 + 24, ctx.r11.u32);
	// lhz r11,0(r6)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r6.u32 + 0);
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// lhz r11,2(r6)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r6.u32 + 2);
	// stw r11,20(r3)
	PPC_STORE_U32(ctx.r3.u32 + 20, ctx.r11.u32);
	// lhz r11,8(r6)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r6.u32 + 8);
	// stw r11,32(r3)
	PPC_STORE_U32(ctx.r3.u32 + 32, ctx.r11.u32);
	// lhz r11,10(r6)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r6.u32 + 10);
	// stw r11,36(r3)
	PPC_STORE_U32(ctx.r3.u32 + 36, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82AFF280"))) PPC_WEAK_FUNC(sub_82AFF280);
PPC_FUNC_IMPL(__imp__sub_82AFF280) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x82AFF288;
	__savegprlr_28(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// li r5,48
	ctx.r5.s64 = 48;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// bl 0x82fa77c0
	ctx.lr = 0x82AFF2A8;
	sub_82FA77C0(ctx, base);
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x82aff2dc
	if (ctx.cr6.eq) goto loc_82AFF2DC;
	// li r10,1
	ctx.r10.s64 = 1;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// stw r10,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// bl 0x82aff280
	ctx.lr = 0x82AFF2D4;
	sub_82AFF280(ctx, base);
	// mullw r29,r3,r31
	ctx.r29.s64 = int64_t(ctx.r3.s32) * int64_t(ctx.r31.s32);
	// b 0x82aff388
	goto loc_82AFF388;
loc_82AFF2DC:
	// lwz r31,116(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82aff350
	if (ctx.cr6.eq) goto loc_82AFF350;
	// lwz r11,12(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// beq cr6,0x82aff388
	if (ctx.cr6.eq) goto loc_82AFF388;
	// addi r28,r11,-4
	ctx.r28.s64 = ctx.r11.s64 + -4;
loc_82AFF2FC:
	// lwzu r11,8(r28)
	ea = 8 + ctx.r28.u32;
	ctx.r11.u64 = PPC_LOAD_U32(ea);
	ctx.r28.u32 = ea;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// add r5,r11,r30
	ctx.r5.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lhz r10,6(r5)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r5.u32 + 6);
	// stw r10,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r10.u32);
	// lhz r10,4(r5)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r5.u32 + 4);
	// stw r10,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// lhzx r11,r11,r30
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r30.u32);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// lhz r11,2(r5)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r5.u32 + 2);
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// lhz r11,8(r5)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r5.u32 + 8);
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// lhz r11,10(r5)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r5.u32 + 10);
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// bl 0x82aff280
	ctx.lr = 0x82AFF340;
	sub_82AFF280(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// add r29,r3,r29
	ctx.r29.u64 = ctx.r3.u64 + ctx.r29.u64;
	// bne 0x82aff2fc
	if (!ctx.cr0.eq) goto loc_82AFF2FC;
	// b 0x82aff388
	goto loc_82AFF388;
loc_82AFF350:
	// lhz r10,6(r28)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r28.u32 + 6);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lhz r9,4(r28)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r28.u32 + 4);
	// cmpwi cr6,r11,2
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 2, ctx.xer);
	// mullw r29,r10,r9
	ctx.r29.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r9.s32);
	// beq cr6,0x82aff370
	if (ctx.cr6.eq) goto loc_82AFF370;
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// bne cr6,0x82aff388
	if (!ctx.cr6.eq) goto loc_82AFF388;
loc_82AFF370:
	// clrlwi. r11,r29,30
	ctx.r11.u64 = ctx.r29.u32 & 0x3;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82aff380
	if (!ctx.cr0.eq) goto loc_82AFF380;
	// rlwinm r29,r29,30,2,31
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 30) & 0x3FFFFFFF;
	// b 0x82aff388
	goto loc_82AFF388;
loc_82AFF380:
	// rlwinm r11,r29,30,2,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r29,r11,1
	ctx.r29.s64 = ctx.r11.s64 + 1;
loc_82AFF388:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AFF394"))) PPC_WEAK_FUNC(sub_82AFF394);
PPC_FUNC_IMPL(__imp__sub_82AFF394) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AFF398"))) PPC_WEAK_FUNC(sub_82AFF398);
PPC_FUNC_IMPL(__imp__sub_82AFF398) {
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
	// bne cr6,0x82aff3bc
	if (!ctx.cr6.eq) goto loc_82AFF3BC;
	// bl 0x82a82960
	ctx.lr = 0x82AFF3B8;
	sub_82A82960(ctx, base);
	// b 0x82aff3e4
	goto loc_82AFF3E4;
loc_82AFF3BC:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82aff3e4
	if (ctx.cr6.eq) goto loc_82AFF3E4;
	// lis r4,9351
	ctx.r4.s64 = 612827136;
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82691460
	ctx.lr = 0x82AFF3D4;
	sub_82691460(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// stw r11,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r11.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_82AFF3E4:
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

__attribute__((alias("__imp__sub_82AFF3F8"))) PPC_WEAK_FUNC(sub_82AFF3F8);
PPC_FUNC_IMPL(__imp__sub_82AFF3F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7670
	ctx.lr = 0x82AFF400;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// addi r28,r11,-28036
	ctx.r28.s64 = ctx.r11.s64 + -28036;
	// addi r27,r10,-27688
	ctx.r27.s64 = ctx.r10.s64 + -27688;
	// bne cr6,0x82aff444
	if (!ctx.cr6.eq) goto loc_82AFF444;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// addi r5,r11,-27704
	ctx.r5.s64 = ctx.r11.s64 + -27704;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r7,411
	ctx.r7.s64 = 411;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82b102f0
	ctx.lr = 0x82AFF444;
	sub_82B102F0(ctx, base);
loc_82AFF444:
	// lwz r11,68(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82aff46c
	if (ctx.cr6.lt) goto loc_82AFF46C;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// addi r5,r11,-27760
	ctx.r5.s64 = ctx.r11.s64 + -27760;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r7,411
	ctx.r7.s64 = 411;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82b102f0
	ctx.lr = 0x82AFF46C;
	sub_82B102F0(ctx, base);
loc_82AFF46C:
	// lwz r11,80(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// rlwinm r29,r30,3,0,28
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 3) & 0xFFFFFFF8;
	// lwz r10,76(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// lwzx r11,r11,r29
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82aff4a0
	if (ctx.cr6.lt) goto loc_82AFF4A0;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// addi r5,r11,-27848
	ctx.r5.s64 = ctx.r11.s64 + -27848;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// li r7,411
	ctx.r7.s64 = 411;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82b102f0
	ctx.lr = 0x82AFF4A0;
	sub_82B102F0(ctx, base);
loc_82AFF4A0:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,8(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r8,1
	ctx.r8.s64 = 1;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// stwx r26,r9,r10
	PPC_STORE_U32(ctx.r9.u32 + ctx.r10.u32, ctx.r26.u32);
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwz r10,80(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 80);
	// lwzx r9,r10,r29
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r29.u32);
	// rlwinm r10,r9,29,3,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 29) & 0x1FFFFFFC;
	// clrlwi r9,r9,27
	ctx.r9.u64 = ctx.r9.u32 & 0x1F;
	// lwzx r7,r10,r11
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// slw r9,r8,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r9.u8 & 0x3F));
	// or r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 | ctx.r7.u64;
	// stwx r9,r10,r11
	PPC_STORE_U32(ctx.r10.u32 + ctx.r11.u32, ctx.r9.u32);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82fa76c0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AFF4E8"))) PPC_WEAK_FUNC(sub_82AFF4E8);
PPC_FUNC_IMPL(__imp__sub_82AFF4E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7670
	ctx.lr = 0x82AFF4F0;
	__savegprlr_26(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r9,72(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 72);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// cmplw cr6,r4,r9
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r9.u32, ctx.xer);
	// addi r27,r11,-28036
	ctx.r27.s64 = ctx.r11.s64 + -28036;
	// addi r26,r10,-27688
	ctx.r26.s64 = ctx.r10.s64 + -27688;
	// blt cr6,0x82aff53c
	if (ctx.cr6.lt) goto loc_82AFF53C;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// addi r5,r11,-27528
	ctx.r5.s64 = ctx.r11.s64 + -27528;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r7,557
	ctx.r7.s64 = 557;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82b102f0
	ctx.lr = 0x82AFF53C;
	sub_82B102F0(ctx, base);
loc_82AFF53C:
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// mulli r30,r30,12
	ctx.r30.s64 = ctx.r30.s64 * 12;
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// cmplw cr6,r29,r11
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82aff570
	if (ctx.cr6.lt) goto loc_82AFF570;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// addi r5,r11,-27600
	ctx.r5.s64 = ctx.r11.s64 + -27600;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// li r7,557
	ctx.r7.s64 = 557;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82b102f0
	ctx.lr = 0x82AFF570;
	sub_82B102F0(ctx, base);
loc_82AFF570:
	// lwz r11,84(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 84);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// lwz r10,16(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// add r11,r30,r11
	ctx.r11.u64 = ctx.r30.u64 + ctx.r11.u64;
	// ori r9,r10,1
	ctx.r9.u64 = ctx.r10.u64 | 1;
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r9,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r9.u32);
	// mullw r11,r11,r29
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r29.s32);
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x82aff3f8
	ctx.lr = 0x82AFF5A0;
	sub_82AFF3F8(ctx, base);
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82fa76c0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AFF5A8"))) PPC_WEAK_FUNC(sub_82AFF5A8);
PPC_FUNC_IMPL(__imp__sub_82AFF5A8) {
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
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82aff5dc
	if (ctx.cr6.eq) goto loc_82AFF5DC;
	// lis r4,9351
	ctx.r4.s64 = 612827136;
	// bl 0x82691460
	ctx.lr = 0x82AFF5D8;
	sub_82691460(ctx, base);
	// stw r30,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r30.u32);
loc_82AFF5DC:
	// stw r30,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r30.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r30,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r30.u32);
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

__attribute__((alias("__imp__sub_82AFF600"))) PPC_WEAK_FUNC(sub_82AFF600);
PPC_FUNC_IMPL(__imp__sub_82AFF600) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa764c
	ctx.lr = 0x82AFF608;
	__savegprlr_17(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r19,r5
	ctx.r19.u64 = ctx.r5.u64;
	// mr r18,r6
	ctx.r18.u64 = ctx.r6.u64;
	// mr r25,r8
	ctx.r25.u64 = ctx.r8.u64;
	// clrlwi. r11,r7,24
	ctx.r11.u64 = ctx.r7.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r17,1
	ctx.r17.s64 = 1;
	// li r27,-1
	ctx.r27.s64 = -1;
	// beq 0x82aff714
	if (ctx.cr0.eq) goto loc_82AFF714;
	// mr r28,r27
	ctx.r28.u64 = ctx.r27.u64;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82aff714
	if (ctx.cr6.eq) goto loc_82AFF714;
loc_82AFF640:
	// cmplw cr6,r30,r28
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r28.u32, ctx.xer);
	// bge cr6,0x82aff714
	if (!ctx.cr6.lt) goto loc_82AFF714;
	// li r11,6
	ctx.r11.s64 = 6;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// divwu r7,r30,r11
	ctx.r7.u32 = ctx.r30.u32 / ctx.r11.u32;
	// rlwinm r11,r7,31,1,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 31) & 0x7FFFFFFF;
	// rlwinm r9,r7,3,28,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 3) & 0x8;
	// mulli r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 * 12;
	// lwzx r8,r11,r26
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r26.u32);
	// add r31,r11,r26
	ctx.r31.u64 = ctx.r11.u64 + ctx.r26.u64;
	// add r3,r9,r10
	ctx.r3.u64 = ctx.r9.u64 + ctx.r10.u64;
	// stw r8,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r8.u32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// rlwinm r9,r11,16,16,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF;
	// rlwinm r8,r10,16,0,15
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xFFFF0000;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// or r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 | ctx.r9.u64;
	// rlwinm r10,r10,16,16,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xFFFF;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// stw r9,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r9.u32);
	// stw r10,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r10.u32);
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm r11,r11,20,28,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 20) & 0xF;
	// slw r11,r17,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r17.u32 << (ctx.r11.u8 & 0x3F));
	// andi. r11,r11,24702
	ctx.r11.u64 = ctx.r11.u64 & 24702;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82aff6c4
	if (ctx.cr0.eq) goto loc_82AFF6C4;
	// cmpwi cr6,r28,-1
	ctx.cr6.compare<int32_t>(ctx.r28.s32, -1, ctx.xer);
	// bne cr6,0x82aff6c4
	if (!ctx.cr6.eq) goto loc_82AFF6C4;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// clrlwi r11,r11,20
	ctx.r11.u64 = ctx.r11.u32 & 0xFFF;
	// mulli r28,r11,12
	ctx.r28.s64 = ctx.r11.s64 * 12;
loc_82AFF6C4:
	// mr r8,r18
	ctx.r8.u64 = ctx.r18.u64;
	// mtctr r19
	ctx.ctr.u64 = ctx.r19.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bctrl 
	ctx.lr = 0x82AFF6DC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r9,108(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// addi r30,r30,6
	ctx.r30.s64 = ctx.r30.s64 + 6;
	// lwz r8,100(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// rlwinm r10,r11,16,16,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF;
	// lwz r7,96(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// rlwinm r9,r9,16,0,15
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 16) & 0xFFFF0000;
	// rlwimi r8,r11,16,0,15
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF0000) | (ctx.r8.u64 & 0xFFFFFFFF0000FFFF);
	// or r11,r9,r10
	ctx.r11.u64 = ctx.r9.u64 | ctx.r10.u64;
	// cmplw cr6,r30,r29
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r29.u32, ctx.xer);
	// stw r8,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r8.u32);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// stw r7,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r7.u32);
	// blt cr6,0x82aff640
	if (ctx.cr6.lt) goto loc_82AFF640;
loc_82AFF714:
	// clrlwi. r11,r25,24
	ctx.r11.u64 = ctx.r25.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82aff854
	if (ctx.cr0.eq) goto loc_82AFF854;
	// lwz r24,80(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r23,r27
	ctx.r23.u64 = ctx.r27.u64;
	// add r21,r26,r29
	ctx.r21.u64 = ctx.r26.u64 + ctx.r29.u64;
loc_82AFF728:
	// li r25,-1
	ctx.r25.s64 = -1;
	// li r20,0
	ctx.r20.s64 = 0;
	// mr r22,r26
	ctx.r22.u64 = ctx.r26.u64;
	// cmplw cr6,r26,r21
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r21.u32, ctx.xer);
	// bge cr6,0x82aff854
	if (!ctx.cr6.lt) goto loc_82AFF854;
loc_82AFF73C:
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// srawi r11,r25,1
	ctx.xer.ca = (ctx.r25.s32 < 0) & ((ctx.r25.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r25.s32 >> 1;
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// cmplw cr6,r11,r23
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r23.u32, ctx.xer);
	// beq cr6,0x82aff84c
	if (ctx.cr6.eq) goto loc_82AFF84C;
	// mulli r11,r11,12
	ctx.r11.s64 = ctx.r11.s64 * 12;
	// add r11,r11,r26
	ctx.r11.u64 = ctx.r11.u64 + ctx.r26.u64;
	// rlwinm r10,r25,3,28,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 3) & 0x8;
	// addi r9,r1,112
	ctx.r9.s64 = ctx.r1.s64 + 112;
	// add r31,r10,r9
	ctx.r31.u64 = ctx.r10.u64 + ctx.r9.u64;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,8(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r8,r10,16,16,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xFFFF;
	// rlwinm r7,r9,16,0,15
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 16) & 0xFFFF0000;
	// clrlwi r10,r10,16
	ctx.r10.u64 = ctx.r10.u32 & 0xFFFF;
	// or r8,r7,r8
	ctx.r8.u64 = ctx.r7.u64 | ctx.r8.u64;
	// rlwinm r9,r9,16,16,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 16) & 0xFFFF;
	// stw r10,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// stw r8,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r8.u32);
	// stw r9,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r9.u32);
	// lwz r30,4(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rlwinm. r11,r30,0,20,20
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x800;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82aff7a4
	if (ctx.cr0.eq) goto loc_82AFF7A4;
	// bl 0x82a82960
	ctx.lr = 0x82AFF7A4;
	sub_82A82960(ctx, base);
loc_82AFF7A4:
	// rlwinm r11,r30,20,28,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 20) & 0xF;
	// slw r11,r17,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r17.u32 << (ctx.r11.u8 & 0x3F));
	// andi. r11,r11,24702
	ctx.r11.u64 = ctx.r11.u64 & 24702;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82aff840
	if (ctx.cr0.eq) goto loc_82AFF840;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmpwi cr6,r23,-1
	ctx.cr6.compare<int32_t>(ctx.r23.s32, -1, ctx.xer);
	// clrlwi r31,r11,20
	ctx.r31.u64 = ctx.r11.u32 & 0xFFF;
	// bne cr6,0x82aff7d0
	if (!ctx.cr6.eq) goto loc_82AFF7D0;
	// mr r23,r31
	ctx.r23.u64 = ctx.r31.u64;
	// mr r24,r31
	ctx.r24.u64 = ctx.r31.u64;
loc_82AFF7D0:
	// rlwinm r9,r30,4,26,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 4) & 0x30;
	// rlwinm r8,r11,4,28,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xF;
	// mulli r10,r31,12
	ctx.r10.s64 = ctx.r31.s64 * 12;
	// rlwinm. r27,r11,20,29,31
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 20) & 0x7;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// rlwinm r29,r11,16,20,31
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFF;
	// or r30,r9,r8
	ctx.r30.u64 = ctx.r9.u64 | ctx.r8.u64;
	// add r28,r10,r26
	ctx.r28.u64 = ctx.r10.u64 + ctx.r26.u64;
	// beq 0x82aff840
	if (ctx.cr0.eq) goto loc_82AFF840;
loc_82AFF7F0:
	// clrlwi r5,r29,31
	ctx.r5.u64 = ctx.r29.u32 & 0x1;
	// clrlwi r6,r30,31
	ctx.r6.u64 = ctx.r30.u32 & 0x1;
	// rlwinm r30,r30,31,1,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 31) & 0x7FFFFFFF;
	// rlwinm r29,r29,30,2,31
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 30) & 0x3FFFFFFF;
	// cmplw cr6,r31,r24
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r24.u32, ctx.xer);
	// bne cr6,0x82aff828
	if (!ctx.cr6.eq) goto loc_82AFF828;
	// mr r8,r18
	ctx.r8.u64 = ctx.r18.u64;
	// mtctr r19
	ctx.ctr.u64 = ctx.r19.u64;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bctrl 
	ctx.lr = 0x82AFF820;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// addi r24,r31,1
	ctx.r24.s64 = ctx.r31.s64 + 1;
	// b 0x82aff830
	goto loc_82AFF830;
loc_82AFF828:
	// ble cr6,0x82aff830
	if (!ctx.cr6.gt) goto loc_82AFF830;
	// mr r20,r17
	ctx.r20.u64 = ctx.r17.u64;
loc_82AFF830:
	// addic. r27,r27,-1
	ctx.xer.ca = ctx.r27.u32 > 0;
	ctx.r27.s64 = ctx.r27.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// addi r28,r28,12
	ctx.r28.s64 = ctx.r28.s64 + 12;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// bne 0x82aff7f0
	if (!ctx.cr0.eq) goto loc_82AFF7F0;
loc_82AFF840:
	// addi r22,r22,6
	ctx.r22.s64 = ctx.r22.s64 + 6;
	// cmplw cr6,r22,r21
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, ctx.r21.u32, ctx.xer);
	// blt cr6,0x82aff73c
	if (ctx.cr6.lt) goto loc_82AFF73C;
loc_82AFF84C:
	// cmpwi cr6,r20,0
	ctx.cr6.compare<int32_t>(ctx.r20.s32, 0, ctx.xer);
	// bne cr6,0x82aff728
	if (!ctx.cr6.eq) goto loc_82AFF728;
loc_82AFF854:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x82fa769c
	__restgprlr_17(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AFF85C"))) PPC_WEAK_FUNC(sub_82AFF85C);
PPC_FUNC_IMPL(__imp__sub_82AFF85C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AFF860"))) PPC_WEAK_FUNC(sub_82AFF860);
PPC_FUNC_IMPL(__imp__sub_82AFF860) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7664
	ctx.lr = 0x82AFF868;
	__savegprlr_23(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r24,r4
	ctx.r24.u64 = ctx.r4.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// mr r23,r6
	ctx.r23.u64 = ctx.r6.u64;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// li r27,0
	ctx.r27.s64 = 0;
	// bl 0x82b16220
	ctx.lr = 0x82AFF888;
	sub_82B16220(ctx, base);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// bl 0x82b15120
	ctx.lr = 0x82AFF890;
	sub_82B15120(ctx, base);
	// b 0x82aff90c
	goto loc_82AFF90C;
loc_82AFF894:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82b154d0
	ctx.lr = 0x82AFF89C;
	sub_82B154D0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r11,r11,-1978
	ctx.r11.s64 = ctx.r11.s64 + -1978;
	// cmplwi cr6,r11,13
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 13, ctx.xer);
	// bgt cr6,0x82aff8fc
	if (ctx.cr6.gt) goto loc_82AFF8FC;
	// lis r12,-32242
	ctx.r12.s64 = -2113011712;
	// addi r12,r12,-27464
	ctx.r12.s64 = ctx.r12.s64 + -27464;
	// lbzx r0,r12,r11
	ctx.r0.u64 = PPC_LOAD_U8(ctx.r12.u32 + ctx.r11.u32);
	// rlwinm r0,r0,2,0,29
	ctx.r0.u64 = __builtin_rotateleft64(ctx.r0.u32 | (ctx.r0.u64 << 32), 2) & 0xFFFFFFFC;
	// lis r12,-32080
	ctx.r12.s64 = -2102394880;
	// nop 
	// addi r12,r12,-1832
	ctx.r12.s64 = ctx.r12.s64 + -1832;
	// add r12,r12,r0
	ctx.r12.u64 = ctx.r12.u64 + ctx.r0.u64;
	// mtctr r12
	ctx.ctr.u64 = ctx.r12.u64;
	// bctr 
	switch (ctx.r11.u64) {
	case 0:
		goto loc_82AFF8D8;
	case 1:
		goto loc_82AFF990;
	case 2:
		goto loc_82AFF8F4;
	case 3:
		goto loc_82AFF9A8;
	case 4:
		goto loc_82AFF9B4;
	case 5:
		goto loc_82AFF9CC;
	case 6:
		goto loc_82AFF948;
	case 7:
		goto loc_82AFF960;
	case 8:
		goto loc_82AFF9E4;
	case 9:
		goto loc_82AFF978;
	case 10:
		goto loc_82AFF8FC;
	case 11:
		goto loc_82AFFA1C;
	case 12:
		goto loc_82AFF8FC;
	case 13:
		goto loc_82AFF9FC;
	default:
		__builtin_unreachable();
	}
loc_82AFF8D8:
	// clrlwi. r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82aff8e4
	if (ctx.cr0.eq) goto loc_82AFF8E4;
	// bl 0x82a82960
	ctx.lr = 0x82AFF8E4;
	sub_82A82960(ctx, base);
loc_82AFF8E4:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// rlwimi r11,r31,0,0,25
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r31.u32, 0) & 0xFFFFFFC0) | (ctx.r11.u64 & 0xFFFFFFFF0000003F);
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// b 0x82aff900
	goto loc_82AFF900;
loc_82AFF8F4:
	// clrlwi. r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82aff900
	if (ctx.cr0.eq) goto loc_82AFF900;
loc_82AFF8FC:
	// bl 0x82a82960
	ctx.lr = 0x82AFF900;
	sub_82A82960(ctx, base);
loc_82AFF900:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82b15420
	ctx.lr = 0x82AFF90C;
	sub_82B15420(ctx, base);
loc_82AFF90C:
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne 0x82aff894
	if (!ctx.cr0.eq) goto loc_82AFF894;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x8266cca0
	ctx.lr = 0x82AFF924;
	sub_8266CCA0(ctx, base);
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x82aff930
	if (ctx.cr6.eq) goto loc_82AFF930;
	// stw r31,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r31.u32);
loc_82AFF930:
	// cmplwi cr6,r23,0
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 0, ctx.xer);
	// beq cr6,0x82aff93c
	if (ctx.cr6.eq) goto loc_82AFF93C;
	// stw r27,0(r23)
	PPC_STORE_U32(ctx.r23.u32 + 0, ctx.r27.u32);
loc_82AFF93C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82fa76b4
	__restgprlr_23(ctx, base);
	return;
loc_82AFF948:
	// clrlwi. r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82aff954
	if (ctx.cr0.eq) goto loc_82AFF954;
	// bl 0x82a82960
	ctx.lr = 0x82AFF954;
	sub_82A82960(ctx, base);
loc_82AFF954:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// rlwimi r31,r11,20,8,11
	ctx.r31.u64 = (__builtin_rotateleft32(ctx.r11.u32, 20) & 0xF00000) | (ctx.r31.u64 & 0xFFFFFFFFFF0FFFFF);
	// b 0x82aff900
	goto loc_82AFF900;
loc_82AFF960:
	// clrlwi. r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82aff96c
	if (ctx.cr0.eq) goto loc_82AFF96C;
	// bl 0x82a82960
	ctx.lr = 0x82AFF96C;
	sub_82A82960(ctx, base);
loc_82AFF96C:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// rlwimi r31,r11,24,5,7
	ctx.r31.u64 = (__builtin_rotateleft32(ctx.r11.u32, 24) & 0x7000000) | (ctx.r31.u64 & 0xFFFFFFFFF8FFFFFF);
	// b 0x82aff900
	goto loc_82AFF900;
loc_82AFF978:
	// clrlwi. r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82aff984
	if (ctx.cr0.eq) goto loc_82AFF984;
	// bl 0x82a82960
	ctx.lr = 0x82AFF984;
	sub_82A82960(ctx, base);
loc_82AFF984:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// rlwimi r31,r11,31,0,0
	ctx.r31.u64 = (__builtin_rotateleft32(ctx.r11.u32, 31) & 0x80000000) | (ctx.r31.u64 & 0xFFFFFFFF7FFFFFFF);
	// b 0x82aff900
	goto loc_82AFF900;
loc_82AFF990:
	// clrlwi. r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82aff99c
	if (!ctx.cr0.eq) goto loc_82AFF99C;
	// bl 0x82a82960
	ctx.lr = 0x82AFF99C;
	sub_82A82960(ctx, base);
loc_82AFF99C:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// rlwimi r31,r11,8,18,23
	ctx.r31.u64 = (__builtin_rotateleft32(ctx.r11.u32, 8) & 0x3F00) | (ctx.r31.u64 & 0xFFFFFFFFFFFFC0FF);
	// b 0x82aff900
	goto loc_82AFF900;
loc_82AFF9A8:
	// clrlwi. r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82aff900
	if (!ctx.cr0.eq) goto loc_82AFF900;
	// b 0x82aff8fc
	goto loc_82AFF8FC;
loc_82AFF9B4:
	// clrlwi. r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82aff9c0
	if (!ctx.cr0.eq) goto loc_82AFF9C0;
	// bl 0x82a82960
	ctx.lr = 0x82AFF9C0;
	sub_82A82960(ctx, base);
loc_82AFF9C0:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// rlwimi r31,r11,18,13,13
	ctx.r31.u64 = (__builtin_rotateleft32(ctx.r11.u32, 18) & 0x40000) | (ctx.r31.u64 & 0xFFFFFFFFFFFBFFFF);
	// b 0x82aff900
	goto loc_82AFF900;
loc_82AFF9CC:
	// clrlwi. r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82aff9d8
	if (!ctx.cr0.eq) goto loc_82AFF9D8;
	// bl 0x82a82960
	ctx.lr = 0x82AFF9D8;
	sub_82A82960(ctx, base);
loc_82AFF9D8:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// rlwimi r31,r11,19,12,12
	ctx.r31.u64 = (__builtin_rotateleft32(ctx.r11.u32, 19) & 0x80000) | (ctx.r31.u64 & 0xFFFFFFFFFFF7FFFF);
	// b 0x82aff900
	goto loc_82AFF900;
loc_82AFF9E4:
	// clrlwi. r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82aff9f0
	if (!ctx.cr0.eq) goto loc_82AFF9F0;
	// bl 0x82a82960
	ctx.lr = 0x82AFF9F0;
	sub_82A82960(ctx, base);
loc_82AFF9F0:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// rlwimi r31,r11,27,1,4
	ctx.r31.u64 = (__builtin_rotateleft32(ctx.r11.u32, 27) & 0x78000000) | (ctx.r31.u64 & 0xFFFFFFFF87FFFFFF);
	// b 0x82aff900
	goto loc_82AFF900;
loc_82AFF9FC:
	// clrlwi. r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82affa08
	if (!ctx.cr0.eq) goto loc_82AFFA08;
	// bl 0x82a82960
	ctx.lr = 0x82AFFA08;
	sub_82A82960(ctx, base);
loc_82AFFA08:
	// lbz r11,7(r30)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r30.u32 + 7);
	// rlwinm r10,r27,0,24,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 0) & 0xFFFFFFFFFFFF00FF;
	// rotlwi r11,r11,8
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 8);
	// or r27,r11,r10
	ctx.r27.u64 = ctx.r11.u64 | ctx.r10.u64;
	// b 0x82aff900
	goto loc_82AFF900;
loc_82AFFA1C:
	// clrlwi. r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82affa28
	if (!ctx.cr0.eq) goto loc_82AFFA28;
	// bl 0x82a82960
	ctx.lr = 0x82AFFA28;
	sub_82A82960(ctx, base);
loc_82AFFA28:
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// rlwimi r27,r11,1,30,30
	ctx.r27.u64 = (__builtin_rotateleft32(ctx.r11.u32, 1) & 0x2) | (ctx.r27.u64 & 0xFFFFFFFFFFFFFFFD);
	// b 0x82aff900
	goto loc_82AFF900;
}

__attribute__((alias("__imp__sub_82AFFA34"))) PPC_WEAK_FUNC(sub_82AFFA34);
PPC_FUNC_IMPL(__imp__sub_82AFFA34) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AFFA38"))) PPC_WEAK_FUNC(sub_82AFFA38);
PPC_FUNC_IMPL(__imp__sub_82AFFA38) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7658
	ctx.lr = 0x82AFFA40;
	__savegprlr_20(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r20,0
	ctx.r20.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// stw r20,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r20.u32);
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// li r5,32
	ctx.r5.s64 = 32;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r3,8
	ctx.r3.s64 = ctx.r3.s64 + 8;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// bl 0x82fa7cf0
	ctx.lr = 0x82AFFA70;
	sub_82FA7CF0(ctx, base);
	// addi r28,r31,40
	ctx.r28.s64 = ctx.r31.s64 + 40;
	// li r5,32
	ctx.r5.s64 = 32;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82fa7cf0
	ctx.lr = 0x82AFFA84;
	sub_82FA7CF0(ctx, base);
	// li r5,256
	ctx.r5.s64 = 256;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,72
	ctx.r3.s64 = ctx.r31.s64 + 72;
	// bl 0x82fa7cf0
	ctx.lr = 0x82AFFA94;
	sub_82FA7CF0(ctx, base);
	// li r5,256
	ctx.r5.s64 = 256;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,328
	ctx.r3.s64 = ctx.r31.s64 + 328;
	// bl 0x82fa7cf0
	ctx.lr = 0x82AFFAA4;
	sub_82FA7CF0(ctx, base);
	// li r5,4096
	ctx.r5.s64 = 4096;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r31,584
	ctx.r3.s64 = ctx.r31.s64 + 584;
	// bl 0x82fa7cf0
	ctx.lr = 0x82AFFAB4;
	sub_82FA7CF0(ctx, base);
	// li r10,255
	ctx.r10.s64 = 255;
	// addi r11,r30,4
	ctx.r11.s64 = ctx.r30.s64 + 4;
	// stb r20,0(r31)
	PPC_STORE_U8(ctx.r31.u32 + 0, ctx.r20.u8);
	// add r29,r30,r29
	ctx.r29.u64 = ctx.r30.u64 + ctx.r29.u64;
	// stw r10,4680(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4680, ctx.r10.u32);
	// b 0x82affb30
	goto loc_82AFFB30;
loc_82AFFACC:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplwi cr6,r9,65535
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 65535, ctx.xer);
	// beq cr6,0x82affb38
	if (ctx.cr6.eq) goto loc_82AFFB38;
	// clrlwi r10,r9,16
	ctx.r10.u64 = ctx.r9.u32 & 0xFFFF;
	// addi r30,r11,4
	ctx.r30.s64 = ctx.r11.s64 + 4;
	// cmplwi cr6,r10,65534
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 65534, ctx.xer);
	// bne cr6,0x82affaf4
	if (!ctx.cr6.eq) goto loc_82AFFAF4;
	// rlwinm r11,r9,18,15,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 18) & 0x1FFFC;
	// add r11,r11,r30
	ctx.r11.u64 = ctx.r11.u64 + ctx.r30.u64;
	// b 0x82affb30
	goto loc_82AFFB30;
loc_82AFFAF4:
	// cmplwi cr6,r10,81
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 81, ctx.xer);
	// bne cr6,0x82affb0c
	if (!ctx.cr6.eq) goto loc_82AFFB0C;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lbz r4,3(r30)
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r30.u32 + 3);
	// bl 0x82afe858
	ctx.lr = 0x82AFFB08;
	sub_82AFE858(ctx, base);
	// b 0x82affb14
	goto loc_82AFFB14;
loc_82AFFB0C:
	// cmplwi cr6,r10,48
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 48, ctx.xer);
	// bne cr6,0x82affb1c
	if (!ctx.cr6.eq) goto loc_82AFFB1C;
loc_82AFFB14:
	// addi r11,r30,20
	ctx.r11.s64 = ctx.r30.s64 + 20;
	// b 0x82affb30
	goto loc_82AFFB30;
loc_82AFFB1C:
	// cmplwi cr6,r10,47
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 47, ctx.xer);
	// beq cr6,0x82affb2c
	if (ctx.cr6.eq) goto loc_82AFFB2C;
	// cmplwi cr6,r10,31
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 31, ctx.xer);
	// bne cr6,0x82affb38
	if (!ctx.cr6.eq) goto loc_82AFFB38;
loc_82AFFB2C:
	// addi r11,r30,8
	ctx.r11.s64 = ctx.r30.s64 + 8;
loc_82AFFB30:
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, ctx.xer);
	// blt cr6,0x82affacc
	if (ctx.cr6.lt) goto loc_82AFFACC;
loc_82AFFB38:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82afec88
	ctx.lr = 0x82AFFB44;
	sub_82AFEC88(ctx, base);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82b16900
	ctx.lr = 0x82AFFB4C;
	sub_82B16900(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x82b17288
	ctx.lr = 0x82AFFB54;
	sub_82B17288(ctx, base);
	// mr. r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r21.s32, 0, ctx.xer);
	// beq 0x82affc58
	if (ctx.cr0.eq) goto loc_82AFFC58;
	// lis r8,-32242
	ctx.r8.s64 = -2113011712;
	// lwz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r23,r8,-27384
	ctx.r23.s64 = ctx.r8.s64 + -27384;
	// addi r26,r9,-28036
	ctx.r26.s64 = ctx.r9.s64 + -28036;
	// addi r22,r10,-27428
	ctx.r22.s64 = ctx.r10.s64 + -27428;
	// addi r25,r11,-27944
	ctx.r25.s64 = ctx.r11.s64 + -27944;
loc_82AFFB80:
	// lwz r11,0(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// lbz r24,0(r7)
	ctx.r24.u64 = PPC_LOAD_U8(ctx.r7.u32 + 0);
	// rlwinm r28,r11,12,28,31
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 12) & 0xF;
	// cmplwi cr6,r28,16
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 16, ctx.xer);
	// blt cr6,0x82affbb0
	if (ctx.cr6.lt) goto loc_82AFFBB0;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// li r7,910
	ctx.r7.s64 = 910;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82b102f0
	ctx.lr = 0x82AFFBAC;
	sub_82B102F0(ctx, base);
	// lwz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
loc_82AFFBB0:
	// mr r29,r20
	ctx.r29.u64 = ctx.r20.u64;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82affc48
	if (ctx.cr6.eq) goto loc_82AFFC48;
	// mr r30,r20
	ctx.r30.u64 = ctx.r20.u64;
	// mr r27,r20
	ctx.r27.u64 = ctx.r20.u64;
loc_82AFFBC4:
	// clrlwi. r11,r28,31
	ctx.r11.u64 = ctx.r28.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82affc34
	if (ctx.cr0.eq) goto loc_82AFFC34;
	// lwz r11,0(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// rlwinm r11,r11,20,24,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 20) & 0xFF;
	// srw r11,r11,r27
	ctx.r11.u64 = ctx.r27.u8 & 0x20 ? 0 : (ctx.r11.u32 >> (ctx.r27.u8 & 0x3F));
	// clrlwi r11,r11,30
	ctx.r11.u64 = ctx.r11.u32 & 0x3;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x82affc18
	if (ctx.cr6.lt) goto loc_82AFFC18;
	// beq cr6,0x82affc34
	if (ctx.cr6.eq) goto loc_82AFFC34;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// blt cr6,0x82affc10
	if (ctx.cr6.lt) goto loc_82AFFC10;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// li r7,1006
	ctx.r7.s64 = 1006;
	// li r3,0
	ctx.r3.s64 = 0;
	// bl 0x82b102f0
	ctx.lr = 0x82AFFC08;
	sub_82B102F0(ctx, base);
	// lwz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// b 0x82affc34
	goto loc_82AFFC34;
loc_82AFFC10:
	// mr r28,r20
	ctx.r28.u64 = ctx.r20.u64;
	// b 0x82affc34
	goto loc_82AFFC34;
loc_82AFFC18:
	// rlwinm r11,r24,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r30,r7
	ctx.r10.u64 = ctx.r30.u64 + ctx.r7.u64;
	// add r11,r11,r29
	ctx.r11.u64 = ctx.r11.u64 + ctx.r29.u64;
	// addi r11,r11,146
	ctx.r11.s64 = ctx.r11.s64 + 146;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lfs f0,4(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	ctx.f0.f64 = double(temp.f32);
	// stfsx f0,r11,r31
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r11.u32 + ctx.r31.u32, temp.u32);
loc_82AFFC34:
	// rlwinm. r28,r28,31,1,31
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 31) & 0x7FFFFFFF;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// addi r27,r27,2
	ctx.r27.s64 = ctx.r27.s64 + 2;
	// addi r30,r30,8
	ctx.r30.s64 = ctx.r30.s64 + 8;
	// bne 0x82affbc4
	if (!ctx.cr0.eq) goto loc_82AFFBC4;
loc_82AFFC48:
	// addi r7,r7,36
	ctx.r7.s64 = ctx.r7.s64 + 36;
	// addic. r21,r21,-1
	ctx.xer.ca = ctx.r21.u32 > 0;
	ctx.r21.s64 = ctx.r21.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r21.s32, 0, ctx.xer);
	// stw r7,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r7.u32);
	// bne 0x82affb80
	if (!ctx.cr0.eq) goto loc_82AFFB80;
loc_82AFFC58:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82fa76a8
	__restgprlr_20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AFFC64"))) PPC_WEAK_FUNC(sub_82AFFC64);
PPC_FUNC_IMPL(__imp__sub_82AFFC64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AFFC68"))) PPC_WEAK_FUNC(sub_82AFFC68);
PPC_FUNC_IMPL(__imp__sub_82AFFC68) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7674
	ctx.lr = 0x82AFFC70;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lbz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82affc98
	if (ctx.cr0.eq) goto loc_82AFFC98;
	// lis r3,-30602
	ctx.r3.s64 = -2005532672;
	// ori r3,r3,2932
	ctx.r3.u64 = ctx.r3.u64 | 2932;
	// b 0x82affd3c
	goto loc_82AFFD3C;
loc_82AFFC98:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lis r4,9351
	ctx.r4.s64 = 612827136;
	// mulli r30,r11,20
	ctx.r30.s64 = ctx.r11.s64 * 20;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82691410
	ctx.lr = 0x82AFFCAC;
	sub_82691410(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// bne 0x82affcc0
	if (!ctx.cr0.eq) goto loc_82AFFCC0;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x82affd3c
	goto loc_82AFFD3C;
loc_82AFFCC0:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r7,0
	ctx.r7.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82affd30
	if (!ctx.cr6.gt) goto loc_82AFFD30;
	// addi r6,r31,72
	ctx.r6.s64 = ctx.r31.s64 + 72;
	// addi r5,r31,328
	ctx.r5.s64 = ctx.r31.s64 + 328;
	// addi r11,r4,-4
	ctx.r11.s64 = ctx.r4.s64 + -4;
loc_82AFFCDC:
	// lbzx r3,r5,r7
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r5.u32 + ctx.r7.u32);
	// li r9,4
	ctx.r9.s64 = 4;
	// li r27,0
	ctx.r27.s64 = 0;
	// rotlwi r8,r3,2
	ctx.r8.u64 = __builtin_rotateleft32(ctx.r3.u32, 2);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r8,r8,146
	ctx.r8.s64 = ctx.r8.s64 + 146;
	// lbzx r3,r6,r3
	ctx.r3.u64 = PPC_LOAD_U8(ctx.r6.u32 + ctx.r3.u32);
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
	// sth r27,4(r11)
	PPC_STORE_U16(ctx.r11.u32 + 4, ctx.r27.u16);
	// sth r3,6(r11)
	PPC_STORE_U16(ctx.r11.u32 + 6, ctx.r3.u16);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
loc_82AFFD08:
	// add r9,r8,r10
	ctx.r9.u64 = ctx.r8.u64 + ctx.r10.u64;
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// lfsx f0,r9,r31
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r31.u32);
	ctx.f0.f64 = double(temp.f32);
	// stfsu f0,4(r11)
	temp.f32 = float(ctx.f0.f64);
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, temp.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x82affd08
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82AFFD08;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r7,r7,1
	ctx.r7.s64 = ctx.r7.s64 + 1;
	// cmplw cr6,r7,r10
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, ctx.r10.u32, ctx.xer);
	// blt cr6,0x82affcdc
	if (ctx.cr6.lt) goto loc_82AFFCDC;
loc_82AFFD30:
	// stw r30,0(r28)
	PPC_STORE_U32(ctx.r28.u32 + 0, ctx.r30.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r4,0(r29)
	PPC_STORE_U32(ctx.r29.u32 + 0, ctx.r4.u32);
loc_82AFFD3C:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AFFD44"))) PPC_WEAK_FUNC(sub_82AFFD44);
PPC_FUNC_IMPL(__imp__sub_82AFFD44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82AFFD48"))) PPC_WEAK_FUNC(sub_82AFFD48);
PPC_FUNC_IMPL(__imp__sub_82AFFD48) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7650
	ctx.lr = 0x82AFFD50;
	__savegprlr_18(ctx, base);
	// stwu r1,-368(r1)
	ea = -368 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r18,r3
	ctx.r18.u64 = ctx.r3.u64;
	// mr r20,r4
	ctx.r20.u64 = ctx.r4.u64;
	// mr r19,r5
	ctx.r19.u64 = ctx.r5.u64;
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// bne cr6,0x82affd7c
	if (!ctx.cr6.eq) goto loc_82AFFD7C;
	// li r6,144
	ctx.r6.s64 = 144;
	// li r5,1
	ctx.r5.s64 = 1;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x8266cfe8
	ctx.lr = 0x82AFFD7C;
	sub_8266CFE8(ctx, base);
loc_82AFFD7C:
	// li r22,0
	ctx.r22.s64 = 0;
	// li r23,0
	ctx.r23.s64 = 0;
	// li r21,-1
	ctx.r21.s64 = -1;
loc_82AFFD88:
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r3,r18
	ctx.r3.u64 = ctx.r18.u64;
	// bl 0x82b15fc8
	ctx.lr = 0x82AFFD98;
	sub_82B15FC8(ctx, base);
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x82affea4
	if (!ctx.cr6.eq) goto loc_82AFFEA4;
	// cmplw cr6,r22,r23
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, ctx.r23.u32, ctx.xer);
	// beq cr6,0x82affdb0
	if (ctx.cr6.eq) goto loc_82AFFDB0;
	// bl 0x82a82960
	ctx.lr = 0x82AFFDB0;
	sub_82A82960(ctx, base);
loc_82AFFDB0:
	// addi r22,r22,1
	ctx.r22.s64 = ctx.r22.s64 + 1;
	// mr r27,r21
	ctx.r27.u64 = ctx.r21.u64;
	// mr r26,r21
	ctx.r26.u64 = ctx.r21.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r28,0
	ctx.r28.s64 = 0;
	// cmpwi cr6,r19,0
	ctx.cr6.compare<int32_t>(ctx.r19.s32, 0, ctx.xer);
	// beq cr6,0x82affddc
	if (ctx.cr6.eq) goto loc_82AFFDDC;
	// lwz r11,228(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 228);
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq cr6,0x82affde0
	if (ctx.cr6.eq) goto loc_82AFFDE0;
loc_82AFFDDC:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82AFFDE0:
	// clrlwi r24,r11,24
	ctx.r24.u64 = ctx.r11.u32 & 0xFF;
	// li r25,0
	ctx.r25.s64 = 0;
	// addi r31,r1,164
	ctx.r31.s64 = ctx.r1.s64 + 164;
loc_82AFFDEC:
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r30,-16(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + -16);
	// lwz r29,0(r31)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82affe7c
	if (ctx.cr6.eq) goto loc_82AFFE7C;
	// cmplw cr6,r30,r27
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r27.u32, ctx.xer);
	// bne cr6,0x82affe10
	if (!ctx.cr6.eq) goto loc_82AFFE10;
	// cmplw cr6,r29,r26
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r26.u32, ctx.xer);
	// beq cr6,0x82affe70
	if (ctx.cr6.eq) goto loc_82AFFE70;
loc_82AFFE10:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82affe2c
	if (ctx.cr6.eq) goto loc_82AFFE2C;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x8266cf50
	ctx.lr = 0x82AFFE28;
	sub_8266CF50(ctx, base);
	// li r28,0
	ctx.r28.s64 = 0;
loc_82AFFE2C:
	// addi r8,r1,84
	ctx.r8.s64 = ctx.r1.s64 + 84;
	// lwz r3,-32(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + -32);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// lwz r4,-48(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + -48);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r27,r30
	ctx.r27.u64 = ctx.r30.u64;
	// mr r26,r29
	ctx.r26.u64 = ctx.r29.u64;
	// bl 0x82afe738
	ctx.lr = 0x82AFFE50;
	sub_82AFE738(ctx, base);
	// clrlwi r11,r24,24
	ctx.r11.u64 = ctx.r24.u32 & 0xFF;
	// lwz r6,84(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addic r10,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfe r11,r10,r11
	temp.u8 = (~ctx.r10.u32 + ctx.r11.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r10.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// rlwimi r10,r11,4,27,27
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 4) & 0x10) | (ctx.r10.u64 & 0xFFFFFFFFFFFFFFEF);
	// clrlwi r11,r10,27
	ctx.r11.u64 = ctx.r10.u32 & 0x1F;
	// rlwimi r6,r11,4,0,27
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r11.u32, 4) & 0xFFFFFFF0) | (ctx.r6.u64 & 0xFFFFFFFF0000000F);
loc_82AFFE70:
	// li r11,1
	ctx.r11.s64 = 1;
	// slw r11,r11,r25
	ctx.r11.u64 = ctx.r25.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r25.u8 & 0x3F));
	// or r28,r11,r28
	ctx.r28.u64 = ctx.r11.u64 | ctx.r28.u64;
loc_82AFFE7C:
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmplwi cr6,r25,4
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 4, ctx.xer);
	// blt cr6,0x82affdec
	if (ctx.cr6.lt) goto loc_82AFFDEC;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82affea4
	if (ctx.cr6.eq) goto loc_82AFFEA4;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x8266cf50
	ctx.lr = 0x82AFFEA4;
	sub_8266CF50(ctx, base);
loc_82AFFEA4:
	// addi r23,r23,1
	ctx.r23.s64 = ctx.r23.s64 + 1;
	// cmplwi cr6,r23,16
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, 16, ctx.xer);
	// blt cr6,0x82affd88
	if (ctx.cr6.lt) goto loc_82AFFD88;
	// addi r1,r1,368
	ctx.r1.s64 = ctx.r1.s64 + 368;
	// b 0x82fa76a0
	__restgprlr_18(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82AFFEB8"))) PPC_WEAK_FUNC(sub_82AFFEB8);
PPC_FUNC_IMPL(__imp__sub_82AFFEB8) {
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
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r3,20(r8)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r8.u32 + 20);
	// clrlwi. r10,r4,24
	ctx.r10.u64 = ctx.r4.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82affff0
	if (ctx.cr0.eq) goto loc_82AFFFF0;
	// stw r7,4(r8)
	PPC_STORE_U32(ctx.r8.u32 + 4, ctx.r7.u32);
	// clrlwi. r10,r5,24
	ctx.r10.u64 = ctx.r5.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// beq 0x82afff98
	if (ctx.cr0.eq) goto loc_82AFFF98;
	// clrlwi. r9,r10,27
	ctx.r9.u64 = ctx.r10.u32 & 0x1F;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x82afff18
	if (ctx.cr0.eq) goto loc_82AFFF18;
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// bne cr6,0x82afff0c
	if (!ctx.cr6.eq) goto loc_82AFFF0C;
	// lwz r9,24(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 24);
	// rlwinm r10,r10,12,27,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 12) & 0x1F;
	// lwz r8,8(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// lbzx r10,r10,r9
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + ctx.r9.u32);
	// rlwimi r8,r10,14,16,17
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r10.u32, 14) & 0xC000) | (ctx.r8.u64 & 0xFFFFFFFFFFFF3FFF);
	// stw r8,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r8.u32);
loc_82AFFF0C:
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// bl 0x8266d048
	ctx.lr = 0x82AFFF14;
	sub_8266D048(ctx, base);
	// b 0x82b00030
	goto loc_82B00030;
loc_82AFFF18:
	// lwz r9,8(r8)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// lwz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82afff88
	if (ctx.cr6.eq) goto loc_82AFFF88;
loc_82AFFF28:
	// clrlwi r8,r10,20
	ctx.r8.u64 = ctx.r10.u32 & 0xFFF;
	// cmplw cr6,r8,r7
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, ctx.r7.u32, ctx.xer);
	// beq cr6,0x82afff40
	if (ctx.cr6.eq) goto loc_82AFFF40;
	// lwzu r10,4(r9)
	ea = 4 + ctx.r9.u32;
	ctx.r10.u64 = PPC_LOAD_U32(ea);
	ctx.r9.u32 = ea;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82afff28
	if (!ctx.cr6.eq) goto loc_82AFFF28;
loc_82AFFF40:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82afff88
	if (ctx.cr6.eq) goto loc_82AFFF88;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// li r8,209
	ctx.r8.s64 = 209;
	// lwz r7,0(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// li r6,0
	ctx.r6.s64 = 0;
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// rlwimi r10,r8,3,20,31
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r8.u32, 3) & 0xFFF) | (ctx.r10.u64 & 0xFFFFFFFFFFFFF000);
	// addi r4,r1,88
	ctx.r4.s64 = ctx.r1.s64 + 88;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// stw r7,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r7.u32);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// rlwimi r10,r11,24,20,23
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 24) & 0xF00) | (ctx.r10.u64 & 0xFFFFFFFFFFFFF0FF);
	// rlwinm r5,r10,24,24,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 24) & 0xFF;
	// bl 0x8266d100
	ctx.lr = 0x82AFFF84;
	sub_8266D100(ctx, base);
	// b 0x82b00030
	goto loc_82B00030;
loc_82AFFF88:
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// bl 0x8266d0a0
	ctx.lr = 0x82AFFF94;
	sub_8266D0A0(ctx, base);
	// b 0x82b00030
	goto loc_82B00030;
loc_82AFFF98:
	// rlwinm. r9,r10,0,16,16
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x8000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x82afffe4
	if (ctx.cr0.eq) goto loc_82AFFFE4;
	// clrlwi r9,r10,26
	ctx.r9.u64 = ctx.r10.u32 & 0x3F;
	// cmplwi cr6,r9,63
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 63, ctx.xer);
	// bne cr6,0x82afffe4
	if (!ctx.cr6.eq) goto loc_82AFFFE4;
	// lbz r9,12(r8)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r8.u32 + 12);
	// lis r8,-32242
	ctx.r8.s64 = -2113011712;
	// lis r7,-241
	ctx.r7.s64 = -15794176;
	// clrlwi r9,r9,29
	ctx.r9.u64 = ctx.r9.u32 & 0x7;
	// addi r8,r8,-27356
	ctx.r8.s64 = ctx.r8.s64 + -27356;
	// lis r6,-16
	ctx.r6.s64 = -1048576;
	// ori r7,r7,65535
	ctx.r7.u64 = ctx.r7.u64 | 65535;
	// ori r6,r6,65535
	ctx.r6.u64 = ctx.r6.u64 | 65535;
	// lbzx r9,r9,r8
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r8.u32);
	// rlwimi r7,r9,20,8,11
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r9.u32, 20) & 0xF00000) | (ctx.r7.u64 & 0xFFFFFFFFFF0FFFFF);
	// rlwimi r6,r9,16,12,15
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r9.u32, 16) & 0xF0000) | (ctx.r6.u64 & 0xFFFFFFFFFFF0FFFF);
	// and r9,r7,r6
	ctx.r9.u64 = ctx.r7.u64 & ctx.r6.u64;
	// and r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 & ctx.r10.u64;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_82AFFFE4:
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// bl 0x8266d118
	ctx.lr = 0x82AFFFEC;
	sub_8266D118(ctx, base);
	// b 0x82b00030
	goto loc_82B00030;
loc_82AFFFF0:
	// ld r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r11.u32 + 0);
	// li r10,1
	ctx.r10.s64 = 1;
	// std r11,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.r11.u64);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// rlwinm r11,r11,20,28,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 20) & 0xF;
	// slw r11,r10,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r11.u8 & 0x3F));
	// andi. r11,r11,24702
	ctx.r11.u64 = ctx.r11.u64 & 24702;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82b00028
	if (ctx.cr0.eq) goto loc_82B00028;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,0(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// subf r10,r10,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r10.s64;
	// rlwimi r10,r11,0,0,19
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0xFFFFF000) | (ctx.r10.u64 & 0xFFFFFFFF00000FFF);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
loc_82B00028:
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// bl 0x8266d130
	ctx.lr = 0x82B00030;
	sub_8266D130(ctx, base);
loc_82B00030:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B00040"))) PPC_WEAK_FUNC(sub_82B00040);
PPC_FUNC_IMPL(__imp__sub_82B00040) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa765c
	ctx.lr = 0x82B00048;
	__savegprlr_21(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// add r28,r3,r4
	ctx.r28.u64 = ctx.r3.u64 + ctx.r4.u64;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// mr r25,r7
	ctx.r25.u64 = ctx.r7.u64;
	// mr r24,r8
	ctx.r24.u64 = ctx.r8.u64;
	// mr r23,r9
	ctx.r23.u64 = ctx.r9.u64;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// cmplw cr6,r3,r28
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r28.u32, ctx.xer);
	// bge cr6,0x82b00130
	if (!ctx.cr6.lt) goto loc_82B00130;
loc_82B00078:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// li r5,4
	ctx.r5.s64 = 4;
	// lwz r10,4(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// li r4,45
	ctx.r4.s64 = 45;
	// lwz r9,8(r29)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// mr r8,r11
	ctx.r8.u64 = ctx.r11.u64;
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
	// mr r6,r10
	ctx.r6.u64 = ctx.r10.u64;
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// mr r22,r9
	ctx.r22.u64 = ctx.r9.u64;
	// mr r21,r9
	ctx.r21.u64 = ctx.r9.u64;
	// rlwimi r7,r11,16,0,15
	ctx.r7.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF0000) | (ctx.r7.u64 & 0xFFFFFFFF0000FFFF);
	// rlwimi r8,r11,16,16,31
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r11.u32, 16) & 0xFFFF) | (ctx.r8.u64 & 0xFFFFFFFFFFFF0000);
	// rlwimi r6,r10,16,16,31
	ctx.r6.u64 = (__builtin_rotateleft32(ctx.r10.u32, 16) & 0xFFFF) | (ctx.r6.u64 & 0xFFFFFFFFFFFF0000);
	// rlwimi r3,r10,16,0,15
	ctx.r3.u64 = (__builtin_rotateleft32(ctx.r10.u32, 16) & 0xFFFF0000) | (ctx.r3.u64 & 0xFFFFFFFF0000FFFF);
	// rlwimi r22,r9,16,16,31
	ctx.r22.u64 = (__builtin_rotateleft32(ctx.r9.u32, 16) & 0xFFFF) | (ctx.r22.u64 & 0xFFFFFFFFFFFF0000);
	// rlwimi r21,r9,16,0,15
	ctx.r21.u64 = (__builtin_rotateleft32(ctx.r9.u32, 16) & 0xFFFF0000) | (ctx.r21.u64 & 0xFFFFFFFF0000FFFF);
	// rlwinm r10,r7,8,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 8) & 0xFFFF0000;
	// rlwinm r11,r8,24,16,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 24) & 0xFFFF;
	// rlwinm r9,r6,24,16,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 24) & 0xFFFF;
	// rlwinm r8,r3,8,0,15
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 8) & 0xFFFF0000;
	// rlwinm r7,r22,24,16,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 24) & 0xFFFF;
	// rlwinm r6,r21,8,0,15
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 8) & 0xFFFF0000;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// or r10,r9,r8
	ctx.r10.u64 = ctx.r9.u64 | ctx.r8.u64;
	// or r9,r7,r6
	ctx.r9.u64 = ctx.r7.u64 | ctx.r6.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// bl 0x82b101f8
	ctx.lr = 0x82B000F4;
	sub_82B101F8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble 0x82b00104
	if (!ctx.cr0.gt) goto loc_82B00104;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// ble cr6,0x82b00180
	if (!ctx.cr6.gt) goto loc_82B00180;
loc_82B00104:
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,45
	ctx.r4.s64 = 45;
	// addi r3,r1,86
	ctx.r3.s64 = ctx.r1.s64 + 86;
	// bl 0x82b101f8
	ctx.lr = 0x82B00114;
	sub_82B101F8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble 0x82b00124
	if (!ctx.cr0.gt) goto loc_82B00124;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// ble cr6,0x82b00194
	if (!ctx.cr6.gt) goto loc_82B00194;
loc_82B00124:
	// addi r29,r29,12
	ctx.r29.s64 = ctx.r29.s64 + 12;
	// cmplw cr6,r29,r28
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r28.u32, ctx.xer);
	// blt cr6,0x82b00078
	if (ctx.cr6.lt) goto loc_82B00078;
loc_82B00130:
	// li r11,12
	ctx.r11.s64 = 12;
	// divwu r3,r30,r11
	ctx.r3.u32 = ctx.r30.u32 / ctx.r11.u32;
loc_82B00138:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r3,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r3.u32);
	// stw r26,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r26.u32);
	// lis r10,-32080
	ctx.r10.s64 = -2102394880;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r25,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r25.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// stw r24,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r24.u32);
	// addi r6,r1,96
	ctx.r6.s64 = ctx.r1.s64 + 96;
	// stw r27,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r27.u32);
	// addi r5,r10,-328
	ctx.r5.s64 = ctx.r10.s64 + -328;
	// stw r23,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r23.u32);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82aff600
	ctx.lr = 0x82B00178;
	sub_82AFF600(ctx, base);
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x82fa76ac
	__restgprlr_21(ctx, base);
	return;
loc_82B00180:
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
loc_82B00184:
	// li r4,1
	ctx.r4.s64 = 1;
	// li r5,12
	ctx.r5.s64 = 12;
	// bl 0x82b101f8
	ctx.lr = 0x82B00190;
	sub_82B101F8(ctx, base);
	// b 0x82b00138
	goto loc_82B00138;
loc_82B00194:
	// addi r3,r1,86
	ctx.r3.s64 = ctx.r1.s64 + 86;
	// b 0x82b00184
	goto loc_82B00184;
}

__attribute__((alias("__imp__sub_82B0019C"))) PPC_WEAK_FUNC(sub_82B0019C);
PPC_FUNC_IMPL(__imp__sub_82B0019C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B001A0"))) PPC_WEAK_FUNC(sub_82B001A0);
PPC_FUNC_IMPL(__imp__sub_82B001A0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7664
	ctx.lr = 0x82B001A8;
	__savegprlr_23(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lis r4,9351
	ctx.r4.s64 = 612827136;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// li r3,4684
	ctx.r3.s64 = 4684;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// mr r25,r7
	ctx.r25.u64 = ctx.r7.u64;
	// mr r23,r8
	ctx.r23.u64 = ctx.r8.u64;
	// mr r24,r9
	ctx.r24.u64 = ctx.r9.u64;
	// mr r30,r10
	ctx.r30.u64 = ctx.r10.u64;
	// bl 0x82691410
	ctx.lr = 0x82B001E4;
	sub_82691410(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x82b001f8
	if (!ctx.cr0.eq) goto loc_82B001F8;
	// lis r28,-32761
	ctx.r28.s64 = -2147024896;
	// ori r28,r28,14
	ctx.r28.u64 = ctx.r28.u64 | 14;
	// b 0x82b002a4
	goto loc_82B002A4;
loc_82B001F8:
	// addic r11,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r11.s64 = ctx.r30.s64 + -1;
	// mr r7,r24
	ctx.r7.u64 = ctx.r24.u64;
	// subfe r8,r11,r30
	temp.u8 = (~ctx.r11.u32 + ctx.r30.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r30.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r8.u64 = ~ctx.r11.u64 + ctx.r30.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// mr r6,r25
	ctx.r6.u64 = ctx.r25.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82affa38
	ctx.lr = 0x82B00218;
	sub_82AFFA38(ctx, base);
	// lis r11,-32080
	ctx.r11.s64 = -2102394880;
	// li r8,1
	ctx.r8.s64 = 1;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// addi r5,r11,-4648
	ctx.r5.s64 = ctx.r11.s64 + -4648;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82aff600
	ctx.lr = 0x82B00238;
	sub_82AFF600(ctx, base);
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82affc68
	ctx.lr = 0x82B00248;
	sub_82AFFC68(ctx, base);
	// lwz r27,80(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr. r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// blt 0x82b00284
	if (ctx.cr0.lt) goto loc_82B00284;
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// li r10,20
	ctx.r10.s64 = 20;
	// divwu. r29,r11,r10
	ctx.r29.u32 = ctx.r11.u32 / ctx.r10.u32;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq 0x82b00284
	if (ctx.cr0.eq) goto loc_82B00284;
	// addi r30,r27,2
	ctx.r30.s64 = ctx.r27.s64 + 2;
loc_82B00268:
	// addi r5,r30,2
	ctx.r5.s64 = ctx.r30.s64 + 2;
	// lhz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U16(ctx.r30.u32 + 0);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x8266ce60
	ctx.lr = 0x82B00278;
	sub_8266CE60(ctx, base);
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r30,r30,20
	ctx.r30.s64 = ctx.r30.s64 + 20;
	// bne 0x82b00268
	if (!ctx.cr0.eq) goto loc_82B00268;
loc_82B00284:
	// lis r4,9351
	ctx.r4.s64 = 612827136;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82691460
	ctx.lr = 0x82B00290;
	sub_82691460(ctx, base);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x82b002a4
	if (ctx.cr6.eq) goto loc_82B002A4;
	// lis r4,9351
	ctx.r4.s64 = 612827136;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82691460
	ctx.lr = 0x82B002A4;
	sub_82691460(ctx, base);
loc_82B002A4:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82fa76b4
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B002B0"))) PPC_WEAK_FUNC(sub_82B002B0);
PPC_FUNC_IMPL(__imp__sub_82B002B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7668
	ctx.lr = 0x82B002B8;
	__savegprlr_24(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r10,r4
	ctx.r10.u64 = ctx.r4.u64;
	// mr r29,r5
	ctx.r29.u64 = ctx.r5.u64;
	// li r5,32
	ctx.r5.s64 = 32;
	// li r4,2
	ctx.r4.s64 = 2;
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// add r25,r11,r10
	ctx.r25.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r31,r11,4
	ctx.r31.s64 = ctx.r11.s64 + 4;
	// bl 0x82fa7cf0
	ctx.lr = 0x82B002E8;
	sub_82FA7CF0(ctx, base);
	// addi r11,r1,128
	ctx.r11.s64 = ctx.r1.s64 + 128;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// li r30,0
	ctx.r30.s64 = 0;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// cmplw cr6,r31,r25
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r25.u32, ctx.xer);
	// std r30,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r30.u64);
	// std r30,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r30.u64);
	// std r30,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r30.u64);
	// std r30,8(r10)
	PPC_STORE_U64(ctx.r10.u32 + 8, ctx.r30.u64);
	// std r30,16(r11)
	PPC_STORE_U64(ctx.r11.u32 + 16, ctx.r30.u64);
	// std r30,16(r10)
	PPC_STORE_U64(ctx.r10.u32 + 16, ctx.r30.u64);
	// std r30,24(r11)
	PPC_STORE_U64(ctx.r11.u32 + 24, ctx.r30.u64);
	// stw r30,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r30.u32);
	// std r30,24(r10)
	PPC_STORE_U64(ctx.r10.u32 + 24, ctx.r30.u64);
	// bge cr6,0x82b00518
	if (!ctx.cr6.lt) goto loc_82B00518;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r27,1
	ctx.r27.s64 = 1;
	// addi r24,r11,-27348
	ctx.r24.s64 = ctx.r11.s64 + -27348;
loc_82B00330:
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// cmplwi cr6,r9,65535
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 65535, ctx.xer);
	// beq cr6,0x82b00518
	if (ctx.cr6.eq) goto loc_82B00518;
	// clrlwi r10,r9,16
	ctx.r10.u64 = ctx.r9.u32 & 0xFFFF;
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
	// cmplwi cr6,r10,31
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 31, ctx.xer);
	// beq cr6,0x82b004b8
	if (ctx.cr6.eq) goto loc_82B004B8;
	// cmplwi cr6,r10,47
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 47, ctx.xer);
	// beq cr6,0x82b0043c
	if (ctx.cr6.eq) goto loc_82B0043C;
	// cmplwi cr6,r10,48
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 48, ctx.xer);
	// beq cr6,0x82b003d4
	if (ctx.cr6.eq) goto loc_82B003D4;
	// cmplwi cr6,r10,81
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 81, ctx.xer);
	// beq cr6,0x82b00378
	if (ctx.cr6.eq) goto loc_82B00378;
	// cmplwi cr6,r10,65534
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 65534, ctx.xer);
	// bne cr6,0x82b00518
	if (!ctx.cr6.eq) goto loc_82B00518;
	// rlwinm r10,r9,18,15,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 18) & 0x1FFFC;
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// b 0x82b00510
	goto loc_82B00510;
loc_82B00378:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r31,r11,4
	ctx.r31.s64 = ctx.r11.s64 + 4;
	// clrlwi r4,r10,21
	ctx.r4.u64 = ctx.r10.u32 & 0x7FF;
	// cmplwi cr6,r4,256
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 256, ctx.xer);
	// bge cr6,0x82b00524
	if (!ctx.cr6.lt) goto loc_82B00524;
	// rlwinm r10,r4,29,3,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 29) & 0x1FFFFFFC;
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// clrlwi r9,r4,27
	ctx.r9.u64 = ctx.r4.u32 & 0x1F;
	// rlwinm r11,r4,27,5,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 27) & 0x7FFFFFF;
	// slw r9,r27,r9
	ctx.r9.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r27.u32 << (ctx.r9.u8 & 0x3F));
	// lwzx r10,r10,r8
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r8.u32);
	// and. r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 & ctx.r9.u64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82b00530
	if (!ctx.cr0.eq) goto loc_82B00530;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwzx r8,r11,r10
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// or r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 | ctx.r8.u64;
	// stwx r9,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r9.u32);
	// bl 0x8266ce60
	ctx.lr = 0x82B003CC;
	sub_8266CE60(ctx, base);
loc_82B003CC:
	// addi r31,r31,16
	ctx.r31.s64 = ctx.r31.s64 + 16;
	// b 0x82b00510
	goto loc_82B00510;
loc_82B003D4:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r31,r11,4
	ctx.r31.s64 = ctx.r11.s64 + 4;
	// clrlwi r11,r10,21
	ctx.r11.u64 = ctx.r10.u32 & 0x7FF;
	// cmplwi cr6,r11,16
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 16, ctx.xer);
	// bge cr6,0x82b0053c
	if (!ctx.cr6.lt) goto loc_82B0053C;
	// rlwinm r9,r11,29,3,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFC;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// clrlwi r8,r11,27
	ctx.r8.u64 = ctx.r11.u32 & 0x1F;
	// rlwinm r10,r11,27,5,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x7FFFFFF;
	// slw r8,r27,r8
	ctx.r8.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r27.u32 << (ctx.r8.u8 & 0x3F));
	// lwzx r9,r9,r7
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r7.u32);
	// and. r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 & ctx.r8.u64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82b00548
	if (!ctx.cr0.eq) goto loc_82B00548;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// lwzx r7,r10,r9
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// or r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 | ctx.r7.u64;
	// stwx r8,r10,r9
	PPC_STORE_U32(ctx.r10.u32 + ctx.r9.u32, ctx.r8.u32);
	// beq cr6,0x82b0042c
	if (ctx.cr6.eq) goto loc_82B0042C;
	// addi r4,r11,16
	ctx.r4.s64 = ctx.r11.s64 + 16;
loc_82B0042C:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8266cde0
	ctx.lr = 0x82B00438;
	sub_8266CDE0(ctx, base);
	// b 0x82b003cc
	goto loc_82B003CC;
loc_82B0043C:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// addi r7,r11,4
	ctx.r7.s64 = ctx.r11.s64 + 4;
	// clrlwi r11,r10,21
	ctx.r11.u64 = ctx.r10.u32 & 0x7FF;
	// cmplwi cr6,r11,128
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 128, ctx.xer);
	// bge cr6,0x82b00554
	if (!ctx.cr6.lt) goto loc_82B00554;
	// rlwinm r9,r11,29,3,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFC;
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// clrlwi r8,r11,27
	ctx.r8.u64 = ctx.r11.u32 & 0x1F;
	// rlwinm r10,r11,27,5,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x7FFFFFF;
	// slw r8,r27,r8
	ctx.r8.u64 = ctx.r8.u8 & 0x20 ? 0 : (ctx.r27.u32 << (ctx.r8.u8 & 0x3F));
	// lwzx r9,r9,r6
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r6.u32);
	// and. r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 & ctx.r8.u64;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82b00560
	if (!ctx.cr0.eq) goto loc_82B00560;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r1,128
	ctx.r9.s64 = ctx.r1.s64 + 128;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// lwzx r6,r10,r9
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r9.u32);
	// or r8,r6,r8
	ctx.r8.u64 = ctx.r6.u64 | ctx.r8.u64;
	// stwx r8,r10,r9
	PPC_STORE_U32(ctx.r10.u32 + ctx.r9.u32, ctx.r8.u32);
	// beq cr6,0x82b00494
	if (ctx.cr6.eq) goto loc_82B00494;
	// addi r4,r11,128
	ctx.r4.s64 = ctx.r11.s64 + 128;
loc_82B00494:
	// lwz r11,0(r7)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// addi r31,r7,4
	ctx.r31.s64 = ctx.r7.s64 + 4;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82b004ac
	if (!ctx.cr6.eq) goto loc_82B004AC;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
loc_82B004AC:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x8266cd60
	ctx.lr = 0x82B004B4;
	sub_8266CD60(ctx, base);
	// b 0x82b00510
	goto loc_82B00510;
loc_82B004B8:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwzu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	ctx.r10.u64 = PPC_LOAD_U32(ea);
	ctx.r11.u32 = ea;
	// mr r8,r10
	ctx.r8.u64 = ctx.r10.u64;
	// addi r31,r11,4
	ctx.r31.s64 = ctx.r11.s64 + 4;
	// rlwimi r8,r10,12,21,23
	ctx.r8.u64 = (__builtin_rotateleft32(ctx.r10.u32, 12) & 0x700) | (ctx.r8.u64 & 0xFFFFFFFFFFFFF8FF);
	// rlwinm r11,r8,0,19,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x1F00;
	// cmplwi cr6,r11,2560
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2560, ctx.xer);
	// bne cr6,0x82b00510
	if (!ctx.cr6.eq) goto loc_82B00510;
	// clrlwi r11,r10,21
	ctx.r11.u64 = ctx.r10.u32 & 0x7FF;
	// cmplwi cr6,r11,32
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 32, ctx.xer);
	// bge cr6,0x82b00510
	if (!ctx.cr6.lt) goto loc_82B00510;
	// rlwinm r10,r9,5,29,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 5) & 0x7;
	// cmplwi cr6,r10,2
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 2, ctx.xer);
	// blt cr6,0x82b00510
	if (ctx.cr6.lt) goto loc_82B00510;
	// cmplwi cr6,r10,4
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 4, ctx.xer);
	// bgt cr6,0x82b00510
	if (ctx.cr6.gt) goto loc_82B00510;
	// cmpwi cr6,r29,0
	ctx.cr6.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// bne cr6,0x82b00504
	if (!ctx.cr6.eq) goto loc_82B00504;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
loc_82B00504:
	// add r10,r10,r24
	ctx.r10.u64 = ctx.r10.u64 + ctx.r24.u64;
	// lbz r10,-2(r10)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r10.u32 + -2);
	// stbx r10,r11,r26
	PPC_STORE_U8(ctx.r11.u32 + ctx.r26.u32, ctx.r10.u8);
loc_82B00510:
	// cmplw cr6,r31,r25
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r25.u32, ctx.xer);
	// blt cr6,0x82b00330
	if (ctx.cr6.lt) goto loc_82B00330;
loc_82B00518:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82B0051C:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x82fa76b8
	__restgprlr_24(ctx, base);
	return;
loc_82B00524:
	// lis r3,-30602
	ctx.r3.s64 = -2005532672;
	// ori r3,r3,2935
	ctx.r3.u64 = ctx.r3.u64 | 2935;
	// b 0x82b0051c
	goto loc_82B0051C;
loc_82B00530:
	// lis r3,-30602
	ctx.r3.s64 = -2005532672;
	// ori r3,r3,2944
	ctx.r3.u64 = ctx.r3.u64 | 2944;
	// b 0x82b0051c
	goto loc_82B0051C;
loc_82B0053C:
	// lis r3,-30602
	ctx.r3.s64 = -2005532672;
	// ori r3,r3,2934
	ctx.r3.u64 = ctx.r3.u64 | 2934;
	// b 0x82b0051c
	goto loc_82B0051C;
loc_82B00548:
	// lis r3,-30602
	ctx.r3.s64 = -2005532672;
	// ori r3,r3,2943
	ctx.r3.u64 = ctx.r3.u64 | 2943;
	// b 0x82b0051c
	goto loc_82B0051C;
loc_82B00554:
	// lis r3,-30602
	ctx.r3.s64 = -2005532672;
	// ori r3,r3,2933
	ctx.r3.u64 = ctx.r3.u64 | 2933;
	// b 0x82b0051c
	goto loc_82B0051C;
loc_82B00560:
	// lis r3,-30602
	ctx.r3.s64 = -2005532672;
	// ori r3,r3,2942
	ctx.r3.u64 = ctx.r3.u64 | 2942;
	// b 0x82b0051c
	goto loc_82B0051C;
}

__attribute__((alias("__imp__sub_82B0056C"))) PPC_WEAK_FUNC(sub_82B0056C);
PPC_FUNC_IMPL(__imp__sub_82B0056C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B00570"))) PPC_WEAK_FUNC(sub_82B00570);
PPC_FUNC_IMPL(__imp__sub_82B00570) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7654
	ctx.lr = 0x82B00578;
	__savegprlr_19(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// mr r22,r4
	ctx.r22.u64 = ctx.r4.u64;
	// mr r24,r5
	ctx.r24.u64 = ctx.r5.u64;
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// mr r21,r7
	ctx.r21.u64 = ctx.r7.u64;
	// mr r28,r8
	ctx.r28.u64 = ctx.r8.u64;
	// mr r19,r9
	ctx.r19.u64 = ctx.r9.u64;
	// mr r20,r10
	ctx.r20.u64 = ctx.r10.u64;
	// bl 0x82b15ec0
	ctx.lr = 0x82B005A4;
	sub_82B15EC0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// addi r30,r3,8
	ctx.r30.s64 = ctx.r3.s64 + 8;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// rlwinm r27,r11,2,0,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r26,r30
	ctx.r26.u64 = ctx.r30.u64;
	// add r31,r30,r27
	ctx.r31.u64 = ctx.r30.u64 + ctx.r27.u64;
	// cmplw cr6,r30,r31
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r31.u32, ctx.xer);
	// bge cr6,0x82b005f0
	if (!ctx.cr6.lt) goto loc_82B005F0;
loc_82B005C4:
	// li r5,4
	ctx.r5.s64 = 4;
	// li r4,45
	ctx.r4.s64 = 45;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82b101f8
	ctx.lr = 0x82B005D4;
	sub_82B101F8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble 0x82b005e4
	if (!ctx.cr0.gt) goto loc_82B005E4;
	// cmpwi cr6,r3,2
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 2, ctx.xer);
	// ble cr6,0x82b00640
	if (!ctx.cr6.gt) goto loc_82B00640;
loc_82B005E4:
	// addi r26,r26,6
	ctx.r26.s64 = ctx.r26.s64 + 6;
	// cmplw cr6,r26,r31
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r31.u32, ctx.xer);
	// blt cr6,0x82b005c4
	if (ctx.cr6.lt) goto loc_82B005C4;
loc_82B005F0:
	// li r11,12
	ctx.r11.s64 = 12;
	// divwu r3,r27,r11
	ctx.r3.u32 = ctx.r27.u32 / ctx.r11.u32;
loc_82B005F8:
	// mulli r11,r3,12
	ctx.r11.s64 = ctx.r3.s64 * 12;
	// rlwinm. r11,r11,30,2,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82b00628
	if (ctx.cr0.eq) goto loc_82B00628;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// addi r11,r30,-4
	ctx.r11.s64 = ctx.r30.s64 + -4;
loc_82B0060C:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// rlwinm r9,r10,8,24,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 8) & 0xFF;
	// rlwimi r9,r10,24,16,23
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 24) & 0xFF00) | (ctx.r9.u64 & 0xFFFFFFFFFFFF00FF);
	// rlwimi r9,r10,8,8,15
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 8) & 0xFF0000) | (ctx.r9.u64 & 0xFFFFFFFFFF00FFFF);
	// rlwimi r9,r10,24,0,7
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 24) & 0xFF000000) | (ctx.r9.u64 & 0xFFFFFFFF00FFFFFF);
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x82b0060c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82B0060C;
loc_82B00628:
	// bl 0x8266d988
	ctx.lr = 0x82B0062C;
	sub_8266D988(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x82b00654
	if (!ctx.cr0.eq) goto loc_82B00654;
	// lis r27,-32761
	ctx.r27.s64 = -2147024896;
	// ori r27,r27,14
	ctx.r27.u64 = ctx.r27.u64 | 14;
	// b 0x82b00770
	goto loc_82B00770;
loc_82B00640:
	// li r5,12
	ctx.r5.s64 = 12;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82b101f8
	ctx.lr = 0x82B00650;
	sub_82B101F8(ctx, base);
	// b 0x82b005f8
	goto loc_82B005F8;
loc_82B00654:
	// stw r31,0(r21)
	PPC_STORE_U32(ctx.r21.u32 + 0, ctx.r31.u32);
	// li r4,50
	ctx.r4.s64 = 50;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq cr6,0x82b00668
	if (ctx.cr6.eq) goto loc_82B00668;
	// li r4,54
	ctx.r4.s64 = 54;
loc_82B00668:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8266cc60
	ctx.lr = 0x82B00670;
	sub_8266CC60(ctx, base);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82affd48
	ctx.lr = 0x82B00680;
	sub_82AFFD48(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// li r10,1
	ctx.r10.s64 = 1;
	// mr r9,r25
	ctx.r9.u64 = ctx.r25.u64;
	// mr r8,r31
	ctx.r8.u64 = ctx.r31.u64;
	// mr r7,r24
	ctx.r7.u64 = ctx.r24.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// rlwinm r6,r11,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82b001a0
	ctx.lr = 0x82B006A8;
	sub_82B001A0(ctx, base);
	// mr. r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// blt 0x82b00770
	if (ctx.cr0.lt) goto loc_82B00770;
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82b002b0
	ctx.lr = 0x82B006C8;
	sub_82B002B0(ctx, base);
	// mr. r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// blt 0x82b00770
	if (ctx.cr0.lt) goto loc_82B00770;
	// cmplwi cr6,r24,0
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, 0, ctx.xer);
	// beq cr6,0x82b00718
	if (ctx.cr6.eq) goto loc_82B00718;
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82B006EC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr. r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// beq 0x82b00718
	if (ctx.cr0.eq) goto loc_82B00718;
	// lwz r11,0(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 0);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82B00708;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8266cef8
	ctx.lr = 0x82B00718;
	sub_8266CEF8(ctx, base);
loc_82B00718:
	// addic r11,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r11.s64 = ctx.r28.s64 + -1;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// subfe r7,r11,r28
	temp.u8 = (~ctx.r11.u32 + ctx.r28.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r28.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r7.u64 = ~ctx.r11.u64 + ctx.r28.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addi r5,r1,84
	ctx.r5.s64 = ctx.r1.s64 + 84;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82aff860
	ctx.lr = 0x82B00734;
	sub_82AFF860(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r9,r1,96
	ctx.r9.s64 = ctx.r1.s64 + 96;
	// lwz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r8,r31
	ctx.r8.u64 = ctx.r31.u64;
	// lwz r6,84(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r5,r19
	ctx.r5.u64 = ctx.r19.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// rlwinm r4,r11,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82b00040
	ctx.lr = 0x82B00758;
	sub_82B00040(ctx, base);
	// cmplwi cr6,r20,0
	ctx.cr6.compare<uint32_t>(ctx.r20.u32, 0, ctx.xer);
	// beq cr6,0x82b00770
	if (ctx.cr6.eq) goto loc_82B00770;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,4(r20)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r20.u32 + 4);
	// lwz r4,0(r20)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r20.u32 + 0);
	// bl 0x8266d138
	ctx.lr = 0x82B00770;
	sub_8266D138(ctx, base);
loc_82B00770:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x82fa76a4
	__restgprlr_19(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B0077C"))) PPC_WEAK_FUNC(sub_82B0077C);
PPC_FUNC_IMPL(__imp__sub_82B0077C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B00780"))) PPC_WEAK_FUNC(sub_82B00780);
PPC_FUNC_IMPL(__imp__sub_82B00780) {
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
	// b 0x82b00818
	goto loc_82B00818;
loc_82B007A0:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// bl 0x8266d348
	ctx.lr = 0x82B007AC;
	sub_8266D348(ctx, base);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// rlwinm. r11,r10,20,28,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 20) & 0xF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82b00814
	if (ctx.cr0.eq) goto loc_82B00814;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82b00834
	if (ctx.cr6.eq) goto loc_82B00834;
	// cmplwi cr6,r11,6
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 6, ctx.xer);
	// ble cr6,0x82b007f4
	if (!ctx.cr6.gt) goto loc_82B007F4;
	// cmplwi cr6,r11,12
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 12, ctx.xer);
	// beq cr6,0x82b007e8
	if (ctx.cr6.eq) goto loc_82B007E8;
	// ble cr6,0x82b00834
	if (!ctx.cr6.gt) goto loc_82B00834;
	// cmplwi cr6,r11,14
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 14, ctx.xer);
	// ble cr6,0x82b007f4
	if (!ctx.cr6.gt) goto loc_82B007F4;
	// cmplwi cr6,r11,15
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 15, ctx.xer);
	// bne cr6,0x82b00834
	if (!ctx.cr6.eq) goto loc_82B00834;
	// b 0x82b00814
	goto loc_82B00814;
loc_82B007E8:
	// rlwinm. r11,r10,0,23,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x100;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82b00834
	if (ctx.cr0.eq) goto loc_82B00834;
	// b 0x82b00814
	goto loc_82B00814;
loc_82B007F4:
	// lwz r10,0(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// rlwinm. r9,r10,0,17,19
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x7000;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne 0x82b0082c
	if (!ctx.cr0.eq) goto loc_82B0082C;
	// li r10,1
	ctx.r10.s64 = 1;
	// slw r11,r10,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r11.u8 & 0x3F));
	// andi. r11,r11,16468
	ctx.r11.u64 = ctx.r11.u64 & 16468;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne 0x82b00834
	if (!ctx.cr0.eq) goto loc_82B00834;
loc_82B00814:
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
loc_82B00818:
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// bl 0x8266d218
	ctx.lr = 0x82B00820;
	sub_8266D218(ctx, base);
	// cmplw cr6,r3,r31
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r31.u32, ctx.xer);
	// bgt cr6,0x82b007a0
	if (ctx.cr6.gt) goto loc_82B007A0;
	// b 0x82b00834
	goto loc_82B00834;
loc_82B0082C:
	// oris r11,r10,2
	ctx.r11.u64 = ctx.r10.u64 | 131072;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
loc_82B00834:
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

__attribute__((alias("__imp__sub_82B0084C"))) PPC_WEAK_FUNC(sub_82B0084C);
PPC_FUNC_IMPL(__imp__sub_82B0084C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B00850"))) PPC_WEAK_FUNC(sub_82B00850);
PPC_FUNC_IMPL(__imp__sub_82B00850) {
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
	// lhz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 8);
	// li r30,0
	ctx.r30.s64 = 0;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// addi r6,r3,16
	ctx.r6.s64 = ctx.r3.s64 + 16;
	// stb r30,16(r11)
	PPC_STORE_U8(ctx.r11.u32 + 16, ctx.r30.u8);
	// lwz r10,4(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// lwz r3,0(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cntlzw r11,r4
	ctx.r11.u64 = ctx.r4.u32 == 0 ? 32 : __builtin_clz(ctx.r4.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// addi r5,r11,7101
	ctx.r5.s64 = ctx.r11.s64 + 7101;
	// bctrl 
	ctx.lr = 0x82B0089C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// li r3,0
	ctx.r3.s64 = 0;
	// sth r30,8(r31)
	PPC_STORE_U16(ctx.r31.u32 + 8, ctx.r30.u16);
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

__attribute__((alias("__imp__sub_82B008BC"))) PPC_WEAK_FUNC(sub_82B008BC);
PPC_FUNC_IMPL(__imp__sub_82B008BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B008C0"))) PPC_WEAK_FUNC(sub_82B008C0);
PPC_FUNC_IMPL(__imp__sub_82B008C0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x82B008C8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r29,r4,-1
	ctx.r29.s64 = ctx.r4.s64 + -1;
loc_82B008DC:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82b00928
	if (ctx.cr6.eq) goto loc_82B00928;
	// lbzu r11,1(r29)
	ea = 1 + ctx.r29.u32;
	ctx.r11.u64 = PPC_LOAD_U8(ea);
	ctx.r29.u32 = ea;
	// addi r30,r30,-1
	ctx.r30.s64 = ctx.r30.s64 + -1;
	// cmplwi cr6,r11,10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 10, ctx.xer);
	// beq cr6,0x82b00918
	if (ctx.cr6.eq) goto loc_82B00918;
	// lhz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 8);
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + ctx.r31.u64;
	// stb r11,16(r10)
	PPC_STORE_U8(ctx.r10.u32 + 16, ctx.r11.u8);
	// lhz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// clrlwi r11,r11,16
	ctx.r11.u64 = ctx.r11.u32 & 0xFFFF;
	// sth r11,8(r31)
	PPC_STORE_U16(ctx.r31.u32 + 8, ctx.r11.u16);
	// cmplwi cr6,r11,511
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 511, ctx.xer);
	// blt cr6,0x82b00920
	if (ctx.cr6.lt) goto loc_82B00920;
loc_82B00918:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b00850
	ctx.lr = 0x82B00920;
	sub_82B00850(ctx, base);
loc_82B00920:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x82b008dc
	if (!ctx.cr6.lt) goto loc_82B008DC;
loc_82B00928:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B00930"))) PPC_WEAK_FUNC(sub_82B00930);
PPC_FUNC_IMPL(__imp__sub_82B00930) {
	PPC_FUNC_PROLOGUE();
	// b 0x82b008c0
	sub_82B008C0(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B00934"))) PPC_WEAK_FUNC(sub_82B00934);
PPC_FUNC_IMPL(__imp__sub_82B00934) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B00938"))) PPC_WEAK_FUNC(sub_82B00938);
PPC_FUNC_IMPL(__imp__sub_82B00938) {
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
	// std r5,32(r1)
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.r5.u64);
	// std r6,40(r1)
	PPC_STORE_U64(ctx.r1.u32 + 40, ctx.r6.u64);
	// std r7,48(r1)
	PPC_STORE_U64(ctx.r1.u32 + 48, ctx.r7.u64);
	// std r8,56(r1)
	PPC_STORE_U64(ctx.r1.u32 + 56, ctx.r8.u64);
	// std r9,64(r1)
	PPC_STORE_U64(ctx.r1.u32 + 64, ctx.r9.u64);
	// std r10,72(r1)
	PPC_STORE_U64(ctx.r1.u32 + 72, ctx.r10.u64);
	// stwu r1,-2176(r1)
	ea = -2176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r4,2204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 2204, ctx.r4.u32);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r10,r1,2208
	ctx.r10.s64 = ctx.r1.s64 + 2208;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r4,2047
	ctx.r4.s64 = 2047;
	// addi r3,r1,96
	ctx.r3.s64 = ctx.r1.s64 + 96;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82fad3e8
	ctx.lr = 0x82B0098C;
	sub_82FAD3E8(ctx, base);
	// li r10,0
	ctx.r10.s64 = 0;
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// stb r10,2143(r1)
	PPC_STORE_U8(ctx.r1.u32 + 2143, ctx.r10.u8);
	// bge 0x82b009a8
	if (!ctx.cr0.lt) goto loc_82B009A8;
	// lis r3,-32768
	ctx.r3.s64 = -2147483648;
	// ori r3,r3,16389
	ctx.r3.u64 = ctx.r3.u64 | 16389;
	// b 0x82b00a54
	goto loc_82B00A54;
loc_82B009A8:
	// mr r3,r10
	ctx.r3.u64 = ctx.r10.u64;
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// ble cr6,0x82b00a54
	if (!ctx.cr6.gt) goto loc_82B00A54;
	// lwz r11,16(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82b00a24
	if (ctx.cr6.eq) goto loc_82B00A24;
	// lbz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 96);
	// stw r10,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r10.u32);
	// extsb r11,r11
	ctx.r11.s64 = ctx.r11.s8;
	// cmpwi cr6,r11,32
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 32, ctx.xer);
	// beq cr6,0x82b009f4
	if (ctx.cr6.eq) goto loc_82B009F4;
	// cmpwi cr6,r11,45
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 45, ctx.xer);
	// beq cr6,0x82b009f4
	if (ctx.cr6.eq) goto loc_82B009F4;
	// cmpwi cr6,r11,48
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 48, ctx.xer);
	// blt cr6,0x82b009ec
	if (ctx.cr6.lt) goto loc_82B009EC;
	// cmpwi cr6,r11,57
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 57, ctx.xer);
	// ble cr6,0x82b009f4
	if (!ctx.cr6.gt) goto loc_82B009F4;
loc_82B009EC:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82b009f8
	goto loc_82B009F8;
loc_82B009F4:
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
loc_82B009F8:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82b00a24
	if (!ctx.cr0.eq) goto loc_82B00A24;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// li r5,1
	ctx.r5.s64 = 1;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r4,r10,4404
	ctx.r4.s64 = ctx.r10.s64 + 4404;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82B00A1C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82b00a44
	if (ctx.cr0.lt) goto loc_82B00A44;
loc_82B00A24:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82B00A3C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x82b00a54
	if (!ctx.cr0.lt) goto loc_82B00A54;
loc_82B00A44:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x82b00a54
	if (ctx.cr6.lt) goto loc_82B00A54;
	// stw r3,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
loc_82B00A54:
	// addi r1,r1,2176
	ctx.r1.s64 = ctx.r1.s64 + 2176;
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

__attribute__((alias("__imp__sub_82B00A6C"))) PPC_WEAK_FUNC(sub_82B00A6C);
PPC_FUNC_IMPL(__imp__sub_82B00A6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B00A70"))) PPC_WEAK_FUNC(sub_82B00A70);
PPC_FUNC_IMPL(__imp__sub_82B00A70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7668
	ctx.lr = 0x82B00A78;
	__savegprlr_24(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// mr r24,r8
	ctx.r24.u64 = ctx.r8.u64;
	// clrlwi. r11,r5,24
	ctx.r11.u64 = ctx.r5.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82b00b54
	if (!ctx.cr0.eq) goto loc_82B00B54;
	// lwz r11,4(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// li r10,1
	ctx.r10.s64 = 1;
	// rlwinm r9,r11,20,28,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 20) & 0xF;
	// slw r10,r10,r9
	ctx.r10.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r9.u8 & 0x3F));
	// andi. r10,r10,24702
	ctx.r10.u64 = ctx.r10.u64 & 24702;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq 0x82b00b54
	if (ctx.cr0.eq) goto loc_82B00B54;
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// rlwinm r9,r11,4,26,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0x30;
	// li r27,0
	ctx.r27.s64 = 0;
	// rlwinm r8,r10,4,28,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 4) & 0xF;
	// rlwinm. r11,r10,20,29,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 20) & 0x7;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// std r27,0(r3)
	PPC_STORE_U64(ctx.r3.u32 + 0, ctx.r27.u64);
	// clrlwi r30,r10,20
	ctx.r30.u64 = ctx.r10.u32 & 0xFFF;
	// rlwinm r31,r10,16,20,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 16) & 0xFFF;
	// or r29,r9,r8
	ctx.r29.u64 = ctx.r9.u64 | ctx.r8.u64;
	// beq 0x82b00b54
	if (ctx.cr0.eq) goto loc_82B00B54;
	// mr r26,r11
	ctx.r26.u64 = ctx.r11.u64;
loc_82B00AD8:
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// lwz r3,8(r28)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x8266d378
	ctx.lr = 0x82B00AE8;
	sub_8266D378(ctx, base);
	// mr r7,r3
	ctx.r7.u64 = ctx.r3.u64;
	// clrlwi r4,r31,31
	ctx.r4.u64 = ctx.r31.u32 & 0x1;
	// rlwinm r5,r31,31,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 31) & 0x1;
	// clrlwi r6,r29,31
	ctx.r6.u64 = ctx.r29.u32 & 0x1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// rlwinm r29,r29,31,1,31
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 31) & 0x7FFFFFFF;
	// rlwinm r31,r31,30,2,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 30) & 0x3FFFFFFF;
	// bl 0x82afef00
	ctx.lr = 0x82B00B08;
	sub_82AFEF00(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82b00b2c
	if (ctx.cr0.eq) goto loc_82B00B2C;
	// li r11,2
	ctx.r11.s64 = 2;
	// lwz r10,0(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// slw r11,r11,r27
	ctx.r11.u64 = ctx.r27.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r27.u8 & 0x3F));
	// rlwinm r11,r11,16,0,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xFFFF0000;
	// or r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 | ctx.r10.u64;
	// rlwimi r11,r10,0,16,3
	ctx.r11.u64 = (__builtin_rotateleft32(ctx.r10.u32, 0) & 0xFFFFFFFFF000FFFF) | (ctx.r11.u64 & 0xFFF0000);
	// stw r11,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r11.u32);
loc_82B00B2C:
	// addic. r26,r26,-1
	ctx.xer.ca = ctx.r26.u32 > 0;
	ctx.r26.s64 = ctx.r26.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// addi r27,r27,2
	ctx.r27.s64 = ctx.r27.s64 + 2;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// bne 0x82b00ad8
	if (!ctx.cr0.eq) goto loc_82B00AD8;
	// ld r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U64(ctx.r28.u32 + 0);
	// cmpdi cr6,r11,0
	ctx.cr6.compare<int64_t>(ctx.r11.s64, 0, ctx.xer);
	// beq cr6,0x82b00b54
	if (ctx.cr6.eq) goto loc_82B00B54;
	// addi r4,r24,1
	ctx.r4.s64 = ctx.r24.s64 + 1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82b00780
	ctx.lr = 0x82B00B54;
	sub_82B00780(ctx, base);
loc_82B00B54:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82fa76b8
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B00B5C"))) PPC_WEAK_FUNC(sub_82B00B5C);
PPC_FUNC_IMPL(__imp__sub_82B00B5C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B00B60"))) PPC_WEAK_FUNC(sub_82B00B60);
PPC_FUNC_IMPL(__imp__sub_82B00B60) {
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
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r3,4(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82B00B84;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x82b00b9c
	if (!ctx.cr0.lt) goto loc_82B00B9C;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x82b00b9c
	if (ctx.cr6.lt) goto loc_82B00B9C;
	// stw r3,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
loc_82B00B9C:
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

__attribute__((alias("__imp__sub_82B00BB0"))) PPC_WEAK_FUNC(sub_82B00BB0);
PPC_FUNC_IMPL(__imp__sub_82B00BB0) {
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
	// lis r10,-32768
	ctx.r10.s64 = -2147483648;
	// stfs f1,124(r1)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f1.f64);
	PPC_STORE_U32(ctx.r1.u32 + 124, temp.u32);
	// lwz r11,124(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82b00bdc
	if (!ctx.cr6.eq) goto loc_82B00BDC;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r4,r11,-27336
	ctx.r4.s64 = ctx.r11.s64 + -27336;
	// b 0x82b00c4c
	goto loc_82B00C4C;
loc_82B00BDC:
	// lis r10,32640
	ctx.r10.s64 = 2139095040;
	// rlwinm r9,r11,0,1,8
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x7F800000;
	// cmplw cr6,r9,r10
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82b00c54
	if (!ctx.cr6.eq) goto loc_82B00C54;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82b00c00
	if (!ctx.cr6.eq) goto loc_82B00C00;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,-18720
	ctx.r4.s64 = ctx.r11.s64 + -18720;
	// b 0x82b00c4c
	goto loc_82B00C4C;
loc_82B00C00:
	// lis r10,-128
	ctx.r10.s64 = -8388608;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82b00c18
	if (!ctx.cr6.eq) goto loc_82B00C18;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r4,r11,-27344
	ctx.r4.s64 = ctx.r11.s64 + -27344;
	// b 0x82b00c4c
	goto loc_82B00C4C;
loc_82B00C18:
	// lis r10,-64
	ctx.r10.s64 = -4194304;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// bne cr6,0x82b00c30
	if (!ctx.cr6.eq) goto loc_82B00C30;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,-18712
	ctx.r4.s64 = ctx.r11.s64 + -18712;
	// b 0x82b00c4c
	goto loc_82B00C4C;
loc_82B00C30:
	// rlwinm. r11,r11,0,9,9
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x400000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82b00c44
	if (ctx.cr0.eq) goto loc_82B00C44;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,-18728
	ctx.r4.s64 = ctx.r11.s64 + -18728;
	// b 0x82b00c4c
	goto loc_82B00C4C;
loc_82B00C44:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r4,r11,-18736
	ctx.r4.s64 = ctx.r11.s64 + -18736;
loc_82B00C4C:
	// bl 0x82b00938
	ctx.lr = 0x82B00C50;
	sub_82B00938(ctx, base);
	// b 0x82b00c68
	goto loc_82B00C68;
loc_82B00C54:
	// stfd f1,32(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.f1.u64);
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// addi r4,r11,-31688
	ctx.r4.s64 = ctx.r11.s64 + -31688;
	// ld r5,32(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 32);
	// bl 0x82b00938
	ctx.lr = 0x82B00C68;
	sub_82B00938(ctx, base);
loc_82B00C68:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B00C78"))) PPC_WEAK_FUNC(sub_82B00C78);
PPC_FUNC_IMPL(__imp__sub_82B00C78) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7654
	ctx.lr = 0x82B00C80;
	__savegprlr_19(ctx, base);
	// stwu r1,-608(r1)
	ea = -608 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,4(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// mr r20,r3
	ctx.r20.u64 = ctx.r3.u64;
	// mr r19,r4
	ctx.r19.u64 = ctx.r4.u64;
	// mr r23,r5
	ctx.r23.u64 = ctx.r5.u64;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x82b00cc4
	if (ctx.cr6.lt) goto loc_82B00CC4;
	// beq cr6,0x82b00cbc
	if (ctx.cr6.eq) goto loc_82B00CBC;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// blt cr6,0x82b00cb4
	if (ctx.cr6.lt) goto loc_82B00CB4;
	// bne cr6,0x82b00ccc
	if (!ctx.cr6.eq) goto loc_82B00CCC;
	// li r10,115
	ctx.r10.s64 = 115;
	// b 0x82b00cd0
	goto loc_82B00CD0;
loc_82B00CB4:
	// li r10,99
	ctx.r10.s64 = 99;
	// b 0x82b00cd0
	goto loc_82B00CD0;
loc_82B00CBC:
	// li r10,105
	ctx.r10.s64 = 105;
	// b 0x82b00cd0
	goto loc_82B00CD0;
loc_82B00CC4:
	// li r10,98
	ctx.r10.s64 = 98;
	// b 0x82b00cd0
	goto loc_82B00CD0;
loc_82B00CCC:
	// lbz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r1.u32 + 100);
loc_82B00CD0:
	// lwz r11,12(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 12);
	// extsb r5,r10
	ctx.r5.s64 = ctx.r10.s8;
	// addi r3,r1,368
	ctx.r3.s64 = ctx.r1.s64 + 368;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82b00cf4
	if (!ctx.cr6.eq) goto loc_82B00CF4;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r4,r11,-27224
	ctx.r4.s64 = ctx.r11.s64 + -27224;
	// bl 0x82fa24d8
	ctx.lr = 0x82B00CF0;
	sub_82FA24D8(ctx, base);
	// b 0x82b00d24
	goto loc_82B00D24;
loc_82B00CF4:
	// lwz r6,8(r23)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r23.u32 + 8);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x82b00d10
	if (!ctx.cr6.eq) goto loc_82B00D10;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r4,r11,-27232
	ctx.r4.s64 = ctx.r11.s64 + -27232;
	// bl 0x82fa24d8
	ctx.lr = 0x82B00D0C;
	sub_82FA24D8(ctx, base);
	// b 0x82b00d24
	goto loc_82B00D24;
loc_82B00D10:
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// add r11,r6,r11
	ctx.r11.u64 = ctx.r6.u64 + ctx.r11.u64;
	// addi r4,r9,-27240
	ctx.r4.s64 = ctx.r9.s64 + -27240;
	// addi r7,r11,-1
	ctx.r7.s64 = ctx.r11.s64 + -1;
	// bl 0x82fa24d8
	ctx.lr = 0x82B00D24;
	sub_82FA24D8(ctx, base);
loc_82B00D24:
	// li r21,0
	ctx.r21.s64 = 0;
	// li r5,127
	ctx.r5.s64 = 127;
	// li r4,0
	ctx.r4.s64 = 0;
	// stb r21,240(r1)
	PPC_STORE_U8(ctx.r1.u32 + 240, ctx.r21.u8);
	// addi r3,r1,241
	ctx.r3.s64 = ctx.r1.s64 + 241;
	// bl 0x82fa7cf0
	ctx.lr = 0x82B00D3C;
	sub_82FA7CF0(ctx, base);
	// lwz r31,44(r23)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r23.u32 + 44);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82b00f68
	if (ctx.cr6.eq) goto loc_82B00F68;
	// lwz r11,12(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 12);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82b00f68
	if (ctx.cr6.eq) goto loc_82B00F68;
	// lwz r11,32(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 32);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x82b00f68
	if (!ctx.cr6.eq) goto loc_82B00F68;
	// lwz r11,36(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 36);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82b00f68
	if (!ctx.cr6.eq) goto loc_82B00F68;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// addi r4,r11,-27248
	ctx.r4.s64 = ctx.r11.s64 + -27248;
	// bl 0x82fa24d8
	ctx.lr = 0x82B00D7C;
	sub_82FA24D8(ctx, base);
	// lwz r11,12(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 12);
	// mr r22,r21
	ctx.r22.u64 = ctx.r21.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// ble cr6,0x82b00f30
	if (!ctx.cr6.gt) goto loc_82B00F30;
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// lis r8,-32227
	ctx.r8.s64 = -2112028672;
	// lis r7,-32230
	ctx.r7.s64 = -2112225280;
	// lis r6,-32230
	ctx.r6.s64 = -2112225280;
	// lis r5,-32230
	ctx.r5.s64 = -2112225280;
	// addi r31,r31,-4
	ctx.r31.s64 = ctx.r31.s64 + -4;
	// addi r24,r11,31808
	ctx.r24.s64 = ctx.r11.s64 + 31808;
	// addi r27,r10,-27272
	ctx.r27.s64 = ctx.r10.s64 + -27272;
	// addi r30,r9,-27288
	ctx.r30.s64 = ctx.r9.s64 + -27288;
	// addi r29,r8,-24420
	ctx.r29.s64 = ctx.r8.s64 + -24420;
	// addi r26,r7,-30212
	ctx.r26.s64 = ctx.r7.s64 + -30212;
	// addi r25,r6,-30204
	ctx.r25.s64 = ctx.r6.s64 + -30204;
	// addi r28,r5,-32224
	ctx.r28.s64 = ctx.r5.s64 + -32224;
loc_82B00DC8:
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 0, ctx.xer);
	// beq cr6,0x82b00e04
	if (ctx.cr6.eq) goto loc_82B00E04;
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// addi r11,r1,240
	ctx.r11.s64 = ctx.r1.s64 + 240;
loc_82B00DD8:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82b00dd8
	if (!ctx.cr6.eq) goto loc_82B00DD8;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
loc_82B00DEC:
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// stb r9,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r9.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bne cr6,0x82b00dec
	if (!ctx.cr6.eq) goto loc_82B00DEC;
loc_82B00E04:
	// li r5,127
	ctx.r5.s64 = 127;
	// stb r21,112(r1)
	PPC_STORE_U8(ctx.r1.u32 + 112, ctx.r21.u8);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,113
	ctx.r3.s64 = ctx.r1.s64 + 113;
	// bl 0x82fa7cf0
	ctx.lr = 0x82B00E18;
	sub_82FA7CF0(ctx, base);
	// lwz r11,4(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 4);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x82b00ec8
	if (ctx.cr6.lt) goto loc_82B00EC8;
	// beq cr6,0x82b00ea8
	if (ctx.cr6.eq) goto loc_82B00EA8;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// blt cr6,0x82b00e44
	if (ctx.cr6.lt) goto loc_82B00E44;
	// bne cr6,0x82b00eec
	if (!ctx.cr6.eq) goto loc_82B00EEC;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82fa24d8
	ctx.lr = 0x82B00E40;
	sub_82FA24D8(ctx, base);
	// b 0x82b00eec
	goto loc_82B00EEC;
loc_82B00E44:
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lwz r9,16(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 16);
	// lwz r8,12(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// lfs f2,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f2.f64 = double(temp.f32);
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// lfs f1,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f1.f64 = double(temp.f32);
	// stw r9,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r9.u32);
	// lfs f4,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f4.f64 = double(temp.f32);
	// stw r8,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r8.u32);
	// lfs f3,96(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f3.f64 = double(temp.f32);
	// stfd f3,48(r1)
	PPC_STORE_U64(ctx.r1.u32 + 48, ctx.f3.u64);
	// ld r7,48(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 48);
	// stfd f4,56(r1)
	PPC_STORE_U64(ctx.r1.u32 + 56, ctx.f4.u64);
	// ld r8,56(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 56);
	// stfd f2,40(r1)
	PPC_STORE_U64(ctx.r1.u32 + 40, ctx.f2.u64);
	// ld r6,40(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 40);
	// stfd f1,32(r1)
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.f1.u64);
	// ld r5,32(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 32);
	// bl 0x82fa24d8
	ctx.lr = 0x82B00EA0;
	sub_82FA24D8(ctx, base);
	// addi r31,r31,16
	ctx.r31.s64 = ctx.r31.s64 + 16;
	// b 0x82b00eec
	goto loc_82B00EEC;
loc_82B00EA8:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// lwz r6,8(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r7,12(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lwzu r8,16(r31)
	ea = 16 + ctx.r31.u32;
	ctx.r8.u64 = PPC_LOAD_U32(ea);
	ctx.r31.u32 = ea;
	// bl 0x82fa24d8
	ctx.lr = 0x82B00EC4;
	sub_82FA24D8(ctx, base);
	// b 0x82b00eec
	goto loc_82B00EEC;
loc_82B00EC8:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82b00edc
	if (!ctx.cr6.eq) goto loc_82B00EDC;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
loc_82B00EDC:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82fa24d8
	ctx.lr = 0x82B00EE8;
	sub_82FA24D8(ctx, base);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
loc_82B00EEC:
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// addi r11,r1,240
	ctx.r11.s64 = ctx.r1.s64 + 240;
loc_82B00EF4:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82b00ef4
	if (!ctx.cr6.eq) goto loc_82B00EF4;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
loc_82B00F08:
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// stb r9,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r9.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bne cr6,0x82b00f08
	if (!ctx.cr6.eq) goto loc_82B00F08;
	// lwz r11,12(r23)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r23.u32 + 12);
	// addi r22,r22,1
	ctx.r22.s64 = ctx.r22.s64 + 1;
	// cmplw cr6,r22,r11
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82b00dc8
	if (ctx.cr6.lt) goto loc_82B00DC8;
loc_82B00F30:
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// addi r11,r1,240
	ctx.r11.s64 = ctx.r1.s64 + 240;
	// addi r10,r10,-27292
	ctx.r10.s64 = ctx.r10.s64 + -27292;
loc_82B00F3C:
	// lbz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// bne cr6,0x82b00f3c
	if (!ctx.cr6.eq) goto loc_82B00F3C;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
loc_82B00F50:
	// lbz r9,0(r10)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// cmplwi cr6,r9,0
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 0, ctx.xer);
	// stb r9,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r9.u8);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// bne cr6,0x82b00f50
	if (!ctx.cr6.eq) goto loc_82B00F50;
loc_82B00F68:
	// lis r10,-31975
	ctx.r10.s64 = -2095513600;
	// lwz r9,20(r23)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r23.u32 + 20);
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// addi r10,r10,3792
	ctx.r10.s64 = ctx.r10.s64 + 3792;
	// addi r7,r11,32570
	ctx.r7.s64 = ctx.r11.s64 + 32570;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// b 0x82b00f9c
	goto loc_82B00F9C;
loc_82B00F88:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82b00fc0
	if (ctx.cr6.eq) goto loc_82B00FC0;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
loc_82B00F9C:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82b00f88
	if (!ctx.cr6.eq) goto loc_82B00F88;
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
loc_82B00FA8:
	// lis r11,-31975
	ctx.r11.s64 = -2095513600;
	// lwz r9,16(r23)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r23.u32 + 16);
	// addi r10,r11,3736
	ctx.r10.s64 = ctx.r11.s64 + 3736;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// lwz r10,4(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// b 0x82b00fdc
	goto loc_82B00FDC;
loc_82B00FC0:
	// lwz r6,4(r11)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// b 0x82b00fa8
	goto loc_82B00FA8;
loc_82B00FC8:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// cmplw cr6,r10,r9
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r9.u32, ctx.xer);
	// beq cr6,0x82b00fe8
	if (ctx.cr6.eq) goto loc_82B00FE8;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
loc_82B00FDC:
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82b00fc8
	if (!ctx.cr6.eq) goto loc_82B00FC8;
	// b 0x82b00fec
	goto loc_82B00FEC;
loc_82B00FE8:
	// lwz r7,4(r11)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
loc_82B00FEC:
	// addi r11,r1,240
	ctx.r11.s64 = ctx.r1.s64 + 240;
	// lwz r9,28(r23)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r23.u32 + 28);
	// lis r5,-32242
	ctx.r5.s64 = -2113011712;
	// lwz r8,24(r23)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r23.u32 + 24);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// addi r10,r1,368
	ctx.r10.s64 = ctx.r1.s64 + 368;
	// addi r4,r5,-27332
	ctx.r4.s64 = ctx.r5.s64 + -27332;
	// mr r5,r19
	ctx.r5.u64 = ctx.r19.u64;
	// mr r3,r20
	ctx.r3.u64 = ctx.r20.u64;
	// bl 0x82b00938
	ctx.lr = 0x82B01014;
	sub_82B00938(ctx, base);
	// addi r1,r1,608
	ctx.r1.s64 = ctx.r1.s64 + 608;
	// b 0x82fa76a4
	__restgprlr_19(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B0101C"))) PPC_WEAK_FUNC(sub_82B0101C);
PPC_FUNC_IMPL(__imp__sub_82B0101C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B01020"))) PPC_WEAK_FUNC(sub_82B01020);
PPC_FUNC_IMPL(__imp__sub_82B01020) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7664
	ctx.lr = 0x82B01028;
	__savegprlr_23(ctx, base);
	// stwu r1,-592(r1)
	ea = -592 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// li r5,48
	ctx.r5.s64 = 48;
	// mr r4,r7
	ctx.r4.u64 = ctx.r7.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r28,r8
	ctx.r28.u64 = ctx.r8.u64;
	// mr r23,r9
	ctx.r23.u64 = ctx.r9.u64;
	// mr r26,r10
	ctx.r26.u64 = ctx.r10.u64;
	// bl 0x82fa77c0
	ctx.lr = 0x82B01058;
	sub_82FA77C0(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r27,r11,-29252
	ctx.r27.s64 = ctx.r11.s64 + -29252;
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x82b01078
	if (ctx.cr6.eq) goto loc_82B01078;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r4,r11,-27200
	ctx.r4.s64 = ctx.r11.s64 + -27200;
	// b 0x82b01094
	goto loc_82B01094;
loc_82B01078:
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82b01090
	if (ctx.cr6.eq) goto loc_82B01090;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r4,r11,-27212
	ctx.r4.s64 = ctx.r11.s64 + -27212;
	// b 0x82b01094
	goto loc_82B01094;
loc_82B01090:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
loc_82B01094:
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// lwz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82fa24d8
	ctx.lr = 0x82B010AC;
	sub_82FA24D8(ctx, base);
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x82b010e0
	if (!ctx.cr6.eq) goto loc_82B010E0;
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82b011e4
	if (!ctx.cr6.eq) goto loc_82B011E4;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82b00c78
	ctx.lr = 0x82B010D4;
	sub_82B00C78(ctx, base);
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x82b011d8
	if (ctx.cr6.eq) goto loc_82B011D8;
loc_82B010E0:
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// addi r4,r11,-12112
	ctx.r4.s64 = ctx.r11.s64 + -12112;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x82fa24d8
	ctx.lr = 0x82B010FC;
	sub_82FA24D8(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r27,112(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// lwz r31,92(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// bl 0x82aff280
	ctx.lr = 0x82B0111C;
	sub_82AFF280(ctx, base);
	// stw r3,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r3.u32);
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x82b0130c
	if (ctx.cr6.eq) goto loc_82B0130C;
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// addi r30,r11,32570
	ctx.r30.s64 = ctx.r11.s64 + 32570;
	// addi r25,r10,-27220
	ctx.r25.s64 = ctx.r10.s64 + -27220;
loc_82B0113C:
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r3,r1,384
	ctx.r3.s64 = ctx.r1.s64 + 384;
	// bl 0x82fa24d8
	ctx.lr = 0x82B0114C;
	sub_82FA24D8(ctx, base);
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82b01160
	if (!ctx.cr6.lt) goto loc_82B01160;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// stw r31,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r31.u32);
loc_82B01160:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r10,r26
	ctx.r10.u64 = ctx.r26.u64;
	// mr r9,r23
	ctx.r9.u64 = ctx.r23.u64;
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r6,r1,384
	ctx.r6.s64 = ctx.r1.s64 + 384;
	// addi r5,r1,256
	ctx.r5.s64 = ctx.r1.s64 + 256;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// subf r31,r11,r31
	ctx.r31.s64 = ctx.r31.s64 - ctx.r11.s64;
	// bl 0x82b01020
	ctx.lr = 0x82B01188;
	sub_82B01020(ctx, base);
	// lwz r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r10,92(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r11,124(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// beq cr6,0x82b011c8
	if (ctx.cr6.eq) goto loc_82B011C8;
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// subfic r9,r9,0
	ctx.xer.ca = ctx.r9.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r9.s64;
	// subfe r9,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r9.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi r9,r9,30
	ctx.r9.u64 = ctx.r9.u32 & 0x3;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// mullw r10,r9,r10
	ctx.r10.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r10.s32);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
loc_82B011C8:
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// cmplw cr6,r29,r27
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, ctx.r27.u32, ctx.xer);
	// blt cr6,0x82b0113c
	if (ctx.cr6.lt) goto loc_82B0113C;
	// b 0x82b0130c
	goto loc_82B0130C;
loc_82B011D8:
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82b0130c
	if (ctx.cr6.eq) goto loc_82B0130C;
loc_82B011E4:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r8,r29
	ctx.r8.u64 = ctx.r29.u64;
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// bl 0x82fa24d8
	ctx.lr = 0x82B01200;
	sub_82FA24D8(ctx, base);
	// lwz r11,12(r26)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r26.u32 + 12);
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// add r29,r11,r28
	ctx.r29.u64 = ctx.r11.u64 + ctx.r28.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// lwz r30,92(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// beq cr6,0x82b0130c
	if (ctx.cr6.eq) goto loc_82B0130C;
	// mr r25,r10
	ctx.r25.u64 = ctx.r10.u64;
	// lis r10,-32229
	ctx.r10.s64 = -2112159744;
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// addi r27,r10,-19068
	ctx.r27.s64 = ctx.r10.s64 + -19068;
	// addi r26,r11,32570
	ctx.r26.s64 = ctx.r11.s64 + 32570;
loc_82B0122C:
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// add r31,r11,r28
	ctx.r31.u64 = ctx.r11.u64 + ctx.r28.u64;
	// add r10,r10,r28
	ctx.r10.u64 = ctx.r10.u64 + ctx.r28.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lhz r10,6(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 6);
	// stw r10,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r10.u32);
	// lhz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 4);
	// stw r10,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r10.u32);
	// lhzx r11,r11,r28
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r11.u32 + ctx.r28.u32);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// lhz r11,2(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 2);
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// lhz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 8);
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// lhz r11,10(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 10);
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// bl 0x82aff280
	ctx.lr = 0x82B01280;
	sub_82AFF280(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// stw r3,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r3.u32);
	// cmplw cr6,r30,r3
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r3.u32, ctx.xer);
	// bge cr6,0x82b01298
	if (!ctx.cr6.lt) goto loc_82B01298;
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// stw r30,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r30.u32);
loc_82B01298:
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// mr r9,r23
	ctx.r9.u64 = ctx.r23.u64;
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// addi r5,r1,256
	ctx.r5.s64 = ctx.r1.s64 + 256;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// subf r30,r11,r30
	ctx.r30.s64 = ctx.r30.s64 - ctx.r11.s64;
	// bl 0x82b01020
	ctx.lr = 0x82B012C0;
	sub_82B01020(ctx, base);
	// lwz r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r10,92(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r11,124(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// beq cr6,0x82b01300
	if (ctx.cr6.eq) goto loc_82B01300;
	// lwz r9,84(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// subfic r9,r9,0
	ctx.xer.ca = ctx.r9.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r9.s64;
	// subfe r9,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r9.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// clrlwi r9,r9,30
	ctx.r9.u64 = ctx.r9.u32 & 0x3;
	// addi r9,r9,1
	ctx.r9.s64 = ctx.r9.s64 + 1;
	// mullw r10,r9,r10
	ctx.r10.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r10.s32);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stw r11,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r11.u32);
loc_82B01300:
	// addic. r25,r25,-1
	ctx.xer.ca = ctx.r25.u32 > 0;
	ctx.r25.s64 = ctx.r25.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// addi r29,r29,8
	ctx.r29.s64 = ctx.r29.s64 + 8;
	// bne 0x82b0122c
	if (!ctx.cr0.eq) goto loc_82B0122C;
loc_82B0130C:
	// addi r1,r1,592
	ctx.r1.s64 = ctx.r1.s64 + 592;
	// b 0x82fa76b4
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B01314"))) PPC_WEAK_FUNC(sub_82B01314);
PPC_FUNC_IMPL(__imp__sub_82B01314) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B01318"))) PPC_WEAK_FUNC(sub_82B01318);
PPC_FUNC_IMPL(__imp__sub_82B01318) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7674
	ctx.lr = 0x82B01320;
	__savegprlr_27(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,16(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 16);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82b013c0
	if (ctx.cr6.eq) goto loc_82B013C0;
	// addi r10,r11,28
	ctx.r10.s64 = ctx.r11.s64 + 28;
	// cmplw cr6,r10,r6
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r6.u32, ctx.xer);
	// ble cr6,0x82b0134c
	if (!ctx.cr6.gt) goto loc_82B0134C;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// b 0x82b013c4
	goto loc_82B013C4;
loc_82B0134C:
	// add r11,r11,r5
	ctx.r11.u64 = ctx.r11.u64 + ctx.r5.u64;
	// addi r30,r11,4
	ctx.r30.s64 = ctx.r11.s64 + 4;
	// lwz r28,16(r11)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82b013c0
	if (ctx.cr6.eq) goto loc_82B013C0;
	// lwz r11,16(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// add r31,r11,r30
	ctx.r31.u64 = ctx.r11.u64 + ctx.r30.u64;
	// beq cr6,0x82b013c0
	if (ctx.cr6.eq) goto loc_82B013C0;
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// addi r29,r11,32570
	ctx.r29.s64 = ctx.r11.s64 + 32570;
loc_82B01378:
	// lwz r11,12(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// add r10,r11,r30
	ctx.r10.u64 = ctx.r11.u64 + ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// mr r6,r10
	ctx.r6.u64 = ctx.r10.u64;
	// bl 0x82aff210
	ctx.lr = 0x82B01394;
	sub_82AFF210(ctx, base);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r9,r31
	ctx.r9.u64 = ctx.r31.u64;
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82b01020
	ctx.lr = 0x82B013B4;
	sub_82B01020(ctx, base);
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// addi r31,r31,20
	ctx.r31.s64 = ctx.r31.s64 + 20;
	// bne 0x82b01378
	if (!ctx.cr0.eq) goto loc_82B01378;
loc_82B013C0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82B013C4:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82fa76c4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B013CC"))) PPC_WEAK_FUNC(sub_82B013CC);
PPC_FUNC_IMPL(__imp__sub_82B013CC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B013D0"))) PPC_WEAK_FUNC(sub_82B013D0);
PPC_FUNC_IMPL(__imp__sub_82B013D0) {
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
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82b01410
	if (ctx.cr6.eq) goto loc_82B01410;
	// li r11,0
	ctx.r11.s64 = 0;
	// lis r10,-32227
	ctx.r10.s64 = -2112028672;
	// stw r11,16(r3)
	PPC_STORE_U32(ctx.r3.u32 + 16, ctx.r11.u32);
	// addi r4,r10,-24420
	ctx.r4.s64 = ctx.r10.s64 + -24420;
	// bl 0x82b00938
	ctx.lr = 0x82B01408;
	sub_82B00938(ctx, base);
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
loc_82B01410:
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

__attribute__((alias("__imp__sub_82B01424"))) PPC_WEAK_FUNC(sub_82B01424);
PPC_FUNC_IMPL(__imp__sub_82B01424) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B01428"))) PPC_WEAK_FUNC(sub_82B01428);
PPC_FUNC_IMPL(__imp__sub_82B01428) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x82B01430;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// lwz r3,8(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// bl 0x8266d218
	ctx.lr = 0x82B01440;
	sub_8266D218(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// li r31,0
	ctx.r31.s64 = 0;
	// beq 0x82b01480
	if (ctx.cr0.eq) goto loc_82B01480;
loc_82B0144C:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r3,8(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// bl 0x8266d348
	ctx.lr = 0x82B01458;
	sub_8266D348(ctx, base);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r8,r31
	ctx.r8.u64 = ctx.r31.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// li r6,0
	ctx.r6.s64 = 0;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82b00a70
	ctx.lr = 0x82B01474;
	sub_82B00A70(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplw cr6,r31,r29
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r29.u32, ctx.xer);
	// blt cr6,0x82b0144c
	if (ctx.cr6.lt) goto loc_82B0144C;
loc_82B01480:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B01488"))) PPC_WEAK_FUNC(sub_82B01488);
PPC_FUNC_IMPL(__imp__sub_82B01488) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7658
	ctx.lr = 0x82B01490;
	__savegprlr_20(ctx, base);
	// stwu r1,-832(r1)
	ea = -832 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31961
	ctx.r11.s64 = -2094596096;
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// mr r23,r4
	ctx.r23.u64 = ctx.r4.u64;
	// mr r22,r5
	ctx.r22.u64 = ctx.r5.u64;
	// mr r21,r6
	ctx.r21.u64 = ctx.r6.u64;
	// lwz r11,-25916(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -25916);
	// mr r20,r7
	ctx.r20.u64 = ctx.r7.u64;
	// mr r30,r9
	ctx.r30.u64 = ctx.r9.u64;
	// mr r29,r10
	ctx.r29.u64 = ctx.r10.u64;
	// li r31,0
	ctx.r31.s64 = 0;
	// li r27,1
	ctx.r27.s64 = 1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82b014dc
	if (ctx.cr6.eq) goto loc_82B014DC;
	// rlwinm. r11,r8,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r27,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r27.u32);
	// bne 0x82b014e0
	if (!ctx.cr0.eq) goto loc_82B014E0;
loc_82B014DC:
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
loc_82B014E0:
	// li r5,448
	ctx.r5.s64 = 448;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// bl 0x82fa7cf0
	ctx.lr = 0x82B014F0;
	sub_82FA7CF0(ctx, base);
	// addi r11,r1,240
	ctx.r11.s64 = ctx.r1.s64 + 240;
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// std r31,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r31.u64);
	// std r31,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r31.u64);
	// stw r31,16(r11)
	PPC_STORE_U32(ctx.r11.u32 + 16, ctx.r31.u32);
	// bl 0x82afe6e8
	ctx.lr = 0x82B01508;
	sub_82AFE6E8(ctx, base);
	// mr. r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// blt 0x82b017d0
	if (ctx.cr0.lt) goto loc_82B017D0;
	// li r11,8
	ctx.r11.s64 = 8;
	// stw r31,296(r1)
	PPC_STORE_U32(ctx.r1.u32 + 296, ctx.r31.u32);
	// stw r31,304(r1)
	PPC_STORE_U32(ctx.r1.u32 + 304, ctx.r31.u32);
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
	// stw r11,300(r1)
	PPC_STORE_U32(ctx.r1.u32 + 300, ctx.r11.u32);
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// li r7,0
	ctx.r7.s64 = 0;
	// addi r6,r1,272
	ctx.r6.s64 = ctx.r1.s64 + 272;
	// addi r5,r1,240
	ctx.r5.s64 = ctx.r1.s64 + 240;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82b0fe00
	ctx.lr = 0x82B01540;
	sub_82B0FE00(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// addi r3,r1,296
	ctx.r3.s64 = ctx.r1.s64 + 296;
	// bl 0x82aff398
	ctx.lr = 0x82B0154C;
	sub_82AFF398(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82b01560
	if (ctx.cr6.eq) goto loc_82B01560;
	// lis r28,-30602
	ctx.r28.s64 = -2005532672;
	// ori r28,r28,2156
	ctx.r28.u64 = ctx.r28.u64 | 2156;
	// b 0x82b017c8
	goto loc_82B017C8;
loc_82B01560:
	// li r11,9
	ctx.r11.s64 = 9;
	// addi r10,r1,136
	ctx.r10.s64 = ctx.r1.s64 + 136;
	// mr r9,r31
	ctx.r9.u64 = ctx.r31.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_82B01570:
	// stdu r9,8(r10)
	ea = 8 + ctx.r10.u32;
	PPC_STORE_U64(ea, ctx.r9.u64);
	ctx.r10.u32 = ea;
	// bdnz 0x82b01570
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82B01570;
	// lis r10,-32080
	ctx.r10.s64 = -2102394880;
	// stw r27,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r27.u32);
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// addi r10,r10,-6624
	ctx.r10.s64 = ctx.r10.s64 + -6624;
	// lis r7,-32080
	ctx.r7.s64 = -2102394880;
	// lis r9,-32080
	ctx.r9.s64 = -2102394880;
	// stw r10,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r10.u32);
	// addi r10,r7,-6536
	ctx.r10.s64 = ctx.r7.s64 + -6536;
	// addi r9,r9,-6448
	ctx.r9.s64 = ctx.r9.s64 + -6448;
	// std r31,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r31.u64);
	// lis r6,-32117
	ctx.r6.s64 = -2104819712;
	// std r31,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r31.u64);
	// lis r4,-32211
	ctx.r4.s64 = -2110980096;
	// std r31,16(r11)
	PPC_STORE_U64(ctx.r11.u32 + 16, ctx.r31.u64);
	// lis r8,-32080
	ctx.r8.s64 = -2102394880;
	// stw r9,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r9.u32);
	// stw r10,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r10.u32);
	// addi r10,r4,28464
	ctx.r10.s64 = ctx.r4.s64 + 28464;
	// std r31,24(r11)
	PPC_STORE_U64(ctx.r11.u32 + 24, ctx.r31.u64);
	// addi r8,r8,-6616
	ctx.r8.s64 = ctx.r8.s64 + -6616;
	// addi r9,r6,9280
	ctx.r9.s64 = ctx.r6.s64 + 9280;
	// stw r10,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r10.u32);
	// lis r5,-32080
	ctx.r5.s64 = -2102394880;
	// stw r8,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r8.u32);
	// lis r3,-32080
	ctx.r3.s64 = -2102394880;
	// stw r9,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r9.u32);
	// lis r11,-32211
	ctx.r11.s64 = -2110980096;
	// addi r9,r3,-6440
	ctx.r9.s64 = ctx.r3.s64 + -6440;
	// addi r8,r5,-6576
	ctx.r8.s64 = ctx.r5.s64 + -6576;
	// addi r11,r11,28464
	ctx.r11.s64 = ctx.r11.s64 + 28464;
	// stw r9,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r9.u32);
	// addi r10,r1,88
	ctx.r10.s64 = ctx.r1.s64 + 88;
	// stw r8,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r8.u32);
	// lis r30,-32060
	ctx.r30.s64 = -2101084160;
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
	// lis r29,-32060
	ctx.r29.s64 = -2101084160;
	// stw r10,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
	// lis r28,-32117
	ctx.r28.s64 = -2104819712;
	// addi r8,r1,88
	ctx.r8.s64 = ctx.r1.s64 + 88;
	// addi r9,r30,25504
	ctx.r9.s64 = ctx.r30.s64 + 25504;
	// addi r10,r29,25504
	ctx.r10.s64 = ctx.r29.s64 + 25504;
	// stw r8,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r8.u32);
	// addi r11,r28,9280
	ctx.r11.s64 = ctx.r28.s64 + 9280;
	// stw r9,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r9.u32);
	// li r27,50
	ctx.r27.s64 = 50;
	// stw r10,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r10.u32);
	// stw r11,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r11.u32);
	// li r4,13
	ctx.r4.s64 = 13;
	// stw r27,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r27.u32);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82b174d0
	ctx.lr = 0x82B01644;
	sub_82B174D0(ctx, base);
	// lwz r11,280(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 280);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r4,272(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 272);
	// li r6,1
	ctx.r6.s64 = 1;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// bl 0x82b13230
	ctx.lr = 0x82B01660;
	sub_82B13230(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// beq 0x82b017a0
	if (ctx.cr0.eq) goto loc_82B017A0;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82b17c88
	ctx.lr = 0x82B01674;
	sub_82B17C88(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// bl 0x82b13600
	ctx.lr = 0x82B01680;
	sub_82B13600(ctx, base);
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// mr r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82b016d4
	if (ctx.cr6.eq) goto loc_82B016D4;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82ad6c20
	ctx.lr = 0x82B0169C;
	sub_82AD6C20(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82431c78
	ctx.lr = 0x82B016A8;
	sub_82431C78(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82b18450
	ctx.lr = 0x82B016B0;
	sub_82B18450(ctx, base);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// li r6,1
	ctx.r6.s64 = 1;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82b18e10
	ctx.lr = 0x82B016CC;
	sub_82B18E10(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// b 0x82b01708
	goto loc_82B01708;
loc_82B016D4:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82afefd8
	ctx.lr = 0x82B016E0;
	sub_82AFEFD8(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne 0x82b01710
	if (!ctx.cr0.eq) goto loc_82B01710;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82ab82d0
	ctx.lr = 0x82B016F0;
	sub_82AB82D0(ctx, base);
	// bl 0x82431c78
	ctx.lr = 0x82B016F4;
	sub_82431C78(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82b185b0
	ctx.lr = 0x82B016FC;
	sub_82B185B0(ctx, base);
	// bl 0x82b15120
	ctx.lr = 0x82B01700;
	sub_82B15120(ctx, base);
	// bl 0x82b154d0
	ctx.lr = 0x82B01704;
	sub_82B154D0(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
loc_82B01708:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq cr6,0x82b0171c
	if (ctx.cr6.eq) goto loc_82B0171C;
loc_82B01710:
	// lis r28,-32768
	ctx.r28.s64 = -2147483648;
	// ori r28,r28,16389
	ctx.r28.u64 = ctx.r28.u64 | 16389;
	// b 0x82b0178c
	goto loc_82B0178C;
loc_82B0171C:
	// li r9,0
	ctx.r9.s64 = 0;
	// lwz r10,924(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 924);
	// li r8,1
	ctx.r8.s64 = 1;
	// lwz r5,916(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 916);
	// addi r7,r1,84
	ctx.r7.s64 = ctx.r1.s64 + 84;
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82b00570
	ctx.lr = 0x82B01744;
	sub_82B00570(ctx, base);
	// lwz r31,84(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr. r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// blt 0x82b0177c
	if (ctx.cr0.lt) goto loc_82B0177C;
	// stw r31,232(r1)
	PPC_STORE_U32(ctx.r1.u32 + 232, ctx.r31.u32);
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x82b01428
	ctx.lr = 0x82B0175C;
	sub_82B01428(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8266d408
	ctx.lr = 0x82B01764;
	sub_8266D408(ctx, base);
	// mr r6,r20
	ctx.r6.u64 = ctx.r20.u64;
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8266d4f0
	ctx.lr = 0x82B01778;
	sub_8266D4F0(ctx, base);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
loc_82B0177C:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82b0178c
	if (ctx.cr6.eq) goto loc_82B0178C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8266cb90
	ctx.lr = 0x82B0178C;
	sub_8266CB90(ctx, base);
loc_82B0178C:
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82b13698
	ctx.lr = 0x82B01794;
	sub_82B13698(ctx, base);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82b17fd0
	ctx.lr = 0x82B0179C;
	sub_82B17FD0(ctx, base);
	// b 0x82b017ac
	goto loc_82B017AC;
loc_82B017A0:
	// lis r28,-30602
	ctx.r28.s64 = -2005532672;
	// ori r28,r28,2156
	ctx.r28.u64 = ctx.r28.u64 | 2156;
	// bl 0x82a82960
	ctx.lr = 0x82B017AC;
	sub_82A82960(ctx, base);
loc_82B017AC:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82b017c0
	if (ctx.cr6.eq) goto loc_82B017C0;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82b13318
	ctx.lr = 0x82B017C0;
	sub_82B13318(ctx, base);
loc_82B017C0:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82b17aa8
	ctx.lr = 0x82B017C8;
	sub_82B17AA8(ctx, base);
loc_82B017C8:
	// addi r3,r1,272
	ctx.r3.s64 = ctx.r1.s64 + 272;
	// bl 0x82aff5a8
	ctx.lr = 0x82B017D0;
	sub_82AFF5A8(ctx, base);
loc_82B017D0:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// addi r1,r1,832
	ctx.r1.s64 = ctx.r1.s64 + 832;
	// b 0x82fa76a8
	__restgprlr_20(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B017DC"))) PPC_WEAK_FUNC(sub_82B017DC);
PPC_FUNC_IMPL(__imp__sub_82B017DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B017E0"))) PPC_WEAK_FUNC(sub_82B017E0);
PPC_FUNC_IMPL(__imp__sub_82B017E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7648
	ctx.lr = 0x82B017E8;
	__savegprlr_16(ctx, base);
	// stwu r1,-2576(r1)
	ea = -2576 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31961
	ctx.r11.s64 = -2094596096;
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// mr r20,r4
	ctx.r20.u64 = ctx.r4.u64;
	// mr r19,r5
	ctx.r19.u64 = ctx.r5.u64;
	// mr r18,r6
	ctx.r18.u64 = ctx.r6.u64;
	// lwz r11,-25916(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + -25916);
	// mr r17,r7
	ctx.r17.u64 = ctx.r7.u64;
	// li r22,0
	ctx.r22.s64 = 0;
	// li r29,1
	ctx.r29.s64 = 1;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82b0182c
	if (ctx.cr6.eq) goto loc_82B0182C;
	// rlwinm. r11,r8,0,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r29,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r29.u32);
	// bne 0x82b01830
	if (!ctx.cr0.eq) goto loc_82B01830;
loc_82B0182C:
	// stw r22,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r22.u32);
loc_82B01830:
	// li r5,1860
	ctx.r5.s64 = 1860;
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,304
	ctx.r3.s64 = ctx.r1.s64 + 304;
	// bl 0x82fa7cf0
	ctx.lr = 0x82B01840;
	sub_82FA7CF0(ctx, base);
	// lis r3,0
	ctx.r3.s64 = 0;
	// lis r4,9351
	ctx.r4.s64 = 612827136;
	// ori r3,r3,33024
	ctx.r3.u64 = ctx.r3.u64 | 33024;
	// bl 0x82691410
	ctx.lr = 0x82B01850;
	sub_82691410(ctx, base);
	// li r11,8
	ctx.r11.s64 = 8;
	// addi r10,r1,232
	ctx.r10.s64 = ctx.r1.s64 + 232;
	// stw r3,332(r1)
	PPC_STORE_U32(ctx.r1.u32 + 332, ctx.r3.u32);
	// mr r16,r3
	ctx.r16.u64 = ctx.r3.u64;
	// mr r9,r22
	ctx.r9.u64 = ctx.r22.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_82B01868:
	// stdu r9,8(r10)
	ea = 8 + ctx.r10.u32;
	PPC_STORE_U64(ea, ctx.r9.u64);
	ctx.r10.u32 = ea;
	// bdnz 0x82b01868
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82B01868;
	// li r5,260
	ctx.r5.s64 = 260;
	// stw r21,328(r1)
	PPC_STORE_U32(ctx.r1.u32 + 328, ctx.r21.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// addi r3,r1,2176
	ctx.r3.s64 = ctx.r1.s64 + 2176;
	// bl 0x82fa7cf0
	ctx.lr = 0x82B01884;
	sub_82FA7CF0(ctx, base);
	// lhz r11,2(r21)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r21.u32 + 2);
	// addi r10,r1,2176
	ctx.r10.s64 = ctx.r1.s64 + 2176;
	// lis r9,16392
	ctx.r9.s64 = 1074266112;
	// stw r10,1884(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1884, ctx.r10.u32);
	// cmplwi cr6,r11,1024
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1024, ctx.xer);
	// stw r9,308(r1)
	PPC_STORE_U32(ctx.r1.u32 + 308, ctx.r9.u32);
	// stw r11,320(r1)
	PPC_STORE_U32(ctx.r1.u32 + 320, ctx.r11.u32);
	// blt cr6,0x82b018a8
	if (ctx.cr6.lt) goto loc_82B018A8;
	// bl 0x82a82960
	ctx.lr = 0x82B018A8;
	sub_82A82960(ctx, base);
loc_82B018A8:
	// stw r22,612(r1)
	PPC_STORE_U32(ctx.r1.u32 + 612, ctx.r22.u32);
	// mr r30,r22
	ctx.r30.u64 = ctx.r22.u64;
	// lwz r10,4(r21)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r21.u32 + 4);
	// addi r11,r21,4
	ctx.r11.s64 = ctx.r21.s64 + 4;
	// b 0x82b01984
	goto loc_82B01984;
loc_82B018BC:
	// clrlwi r9,r10,16
	ctx.r9.u64 = ctx.r10.u32 & 0xFFFF;
	// addi r31,r11,4
	ctx.r31.s64 = ctx.r11.s64 + 4;
	// cmplwi cr6,r9,31
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 31, ctx.xer);
	// beq cr6,0x82b01900
	if (ctx.cr6.eq) goto loc_82B01900;
	// cmplwi cr6,r9,47
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 47, ctx.xer);
	// beq cr6,0x82b0197c
	if (ctx.cr6.eq) goto loc_82B0197C;
	// cmplwi cr6,r9,48
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 48, ctx.xer);
	// beq cr6,0x82b018f8
	if (ctx.cr6.eq) goto loc_82B018F8;
	// cmplwi cr6,r9,81
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 81, ctx.xer);
	// beq cr6,0x82b018f8
	if (ctx.cr6.eq) goto loc_82B018F8;
	// cmplwi cr6,r9,65534
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 65534, ctx.xer);
	// bne cr6,0x82b0198c
	if (!ctx.cr6.eq) goto loc_82B0198C;
	// rlwinm r11,r10,18,15,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 18) & 0x1FFFC;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// b 0x82b01980
	goto loc_82B01980;
loc_82B018F8:
	// addi r11,r31,20
	ctx.r11.s64 = ctx.r31.s64 + 20;
	// b 0x82b01980
	goto loc_82B01980;
loc_82B01900:
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// rlwimi r10,r11,12,21,23
	ctx.r10.u64 = (__builtin_rotateleft32(ctx.r11.u32, 12) & 0x700) | (ctx.r10.u64 & 0xFFFFFFFFFFFFF8FF);
	// rlwinm r11,r10,0,19,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1F00;
	// cmplwi cr6,r11,256
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 256, ctx.xer);
	// bne cr6,0x82b0197c
	if (!ctx.cr6.eq) goto loc_82B0197C;
	// addi r11,r30,1
	ctx.r11.s64 = ctx.r30.s64 + 1;
	// cmplwi cr6,r30,64
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 64, ctx.xer);
	// stw r11,612(r1)
	PPC_STORE_U32(ctx.r1.u32 + 612, ctx.r11.u32);
	// blt cr6,0x82b0192c
	if (ctx.cr6.lt) goto loc_82B0192C;
	// bl 0x82a82960
	ctx.lr = 0x82B0192C;
	sub_82A82960(ctx, base);
loc_82B0192C:
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r11,r1,356
	ctx.r11.s64 = ctx.r1.s64 + 356;
	// clrlwi r9,r9,28
	ctx.r9.u64 = ctx.r9.u32 & 0xF;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// stb r9,0(r11)
	PPC_STORE_U8(ctx.r11.u32 + 0, ctx.r9.u8);
	// lhz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 0);
	// clrlwi r10,r10,28
	ctx.r10.u64 = ctx.r10.u32 & 0xF;
	// stb r10,1(r11)
	PPC_STORE_U8(ctx.r11.u32 + 1, ctx.r10.u8);
	// lbz r9,7(r31)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r31.u32 + 7);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r10,r10,0,24,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFFFFFF00FF;
	// rotlwi r9,r9,8
	ctx.r9.u64 = __builtin_rotateleft32(ctx.r9.u32, 8);
	// or r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 | ctx.r10.u64;
	// mr r9,r10
	ctx.r9.u64 = ctx.r10.u64;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// rlwimi r9,r10,20,24,27
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r10.u32, 20) & 0xF0) | (ctx.r9.u64 & 0xFFFFFFFFFFFFFF0F);
	// stw r9,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r9.u32);
	// lwz r30,612(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 612);
loc_82B0197C:
	// addi r11,r31,8
	ctx.r11.s64 = ctx.r31.s64 + 8;
loc_82B01980:
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
loc_82B01984:
	// cmplwi cr6,r10,65535
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 65535, ctx.xer);
	// bne cr6,0x82b018bc
	if (!ctx.cr6.eq) goto loc_82B018BC;
loc_82B0198C:
	// addi r4,r1,304
	ctx.r4.s64 = ctx.r1.s64 + 304;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82b19768
	ctx.lr = 0x82B01998;
	sub_82B19768(ctx, base);
	// stw r3,336(r1)
	PPC_STORE_U32(ctx.r1.u32 + 336, ctx.r3.u32);
	// li r10,8192
	ctx.r10.s64 = 8192;
	// addi r9,r1,1136
	ctx.r9.s64 = ctx.r1.s64 + 1136;
	// addi r8,r1,336
	ctx.r8.s64 = ctx.r1.s64 + 336;
	// addi r7,r1,304
	ctx.r7.s64 = ctx.r1.s64 + 304;
	// li r6,256
	ctx.r6.s64 = 256;
	// mr r5,r20
	ctx.r5.u64 = ctx.r20.u64;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82b1ae20
	ctx.lr = 0x82B019C0;
	sub_82B1AE20(ctx, base);
	// mr. r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// blt 0x82b01de8
	if (ctx.cr0.lt) goto loc_82B01DE8;
	// lwz r11,336(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 336);
	// cmplwi cr6,r11,8192
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 8192, ctx.xer);
	// ble cr6,0x82b019d8
	if (!ctx.cr6.gt) goto loc_82B019D8;
	// bl 0x82a82960
	ctx.lr = 0x82B019D8;
	sub_82A82960(ctx, base);
loc_82B019D8:
	// li r11,9
	ctx.r11.s64 = 9;
	// addi r10,r1,136
	ctx.r10.s64 = ctx.r1.s64 + 136;
	// mr r9,r22
	ctx.r9.u64 = ctx.r22.u64;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_82B019E8:
	// stdu r9,8(r10)
	ea = 8 + ctx.r10.u32;
	PPC_STORE_U64(ea, ctx.r9.u64);
	ctx.r10.u32 = ea;
	// bdnz 0x82b019e8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82B019E8;
	// lis r10,-32080
	ctx.r10.s64 = -2102394880;
	// stw r29,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r29.u32);
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// addi r10,r10,-6624
	ctx.r10.s64 = ctx.r10.s64 + -6624;
	// lis r7,-32080
	ctx.r7.s64 = -2102394880;
	// lis r9,-32080
	ctx.r9.s64 = -2102394880;
	// stw r10,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r10.u32);
	// addi r10,r7,-6536
	ctx.r10.s64 = ctx.r7.s64 + -6536;
	// addi r9,r9,-6448
	ctx.r9.s64 = ctx.r9.s64 + -6448;
	// std r22,0(r11)
	PPC_STORE_U64(ctx.r11.u32 + 0, ctx.r22.u64);
	// lis r6,-32117
	ctx.r6.s64 = -2104819712;
	// std r22,8(r11)
	PPC_STORE_U64(ctx.r11.u32 + 8, ctx.r22.u64);
	// lis r4,-32211
	ctx.r4.s64 = -2110980096;
	// std r22,16(r11)
	PPC_STORE_U64(ctx.r11.u32 + 16, ctx.r22.u64);
	// lis r8,-32080
	ctx.r8.s64 = -2102394880;
	// stw r9,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r9.u32);
	// stw r10,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r10.u32);
	// addi r10,r4,28464
	ctx.r10.s64 = ctx.r4.s64 + 28464;
	// std r22,24(r11)
	PPC_STORE_U64(ctx.r11.u32 + 24, ctx.r22.u64);
	// addi r8,r8,-6616
	ctx.r8.s64 = ctx.r8.s64 + -6616;
	// addi r9,r6,9280
	ctx.r9.s64 = ctx.r6.s64 + 9280;
	// stw r10,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r10.u32);
	// lis r5,-32080
	ctx.r5.s64 = -2102394880;
	// stw r8,168(r1)
	PPC_STORE_U32(ctx.r1.u32 + 168, ctx.r8.u32);
	// lis r3,-32080
	ctx.r3.s64 = -2102394880;
	// stw r9,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r9.u32);
	// lis r11,-32211
	ctx.r11.s64 = -2110980096;
	// addi r9,r3,-6440
	ctx.r9.s64 = ctx.r3.s64 + -6440;
	// addi r8,r5,-6576
	ctx.r8.s64 = ctx.r5.s64 + -6576;
	// addi r11,r11,28464
	ctx.r11.s64 = ctx.r11.s64 + 28464;
	// stw r9,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r9.u32);
	// addi r10,r1,88
	ctx.r10.s64 = ctx.r1.s64 + 88;
	// stw r8,172(r1)
	PPC_STORE_U32(ctx.r1.u32 + 172, ctx.r8.u32);
	// lis r31,-32060
	ctx.r31.s64 = -2101084160;
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
	// lis r30,-32060
	ctx.r30.s64 = -2101084160;
	// stw r10,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
	// lis r29,-32117
	ctx.r29.s64 = -2104819712;
	// addi r8,r1,88
	ctx.r8.s64 = ctx.r1.s64 + 88;
	// addi r9,r31,25504
	ctx.r9.s64 = ctx.r31.s64 + 25504;
	// addi r10,r30,25504
	ctx.r10.s64 = ctx.r30.s64 + 25504;
	// stw r8,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r8.u32);
	// addi r11,r29,9280
	ctx.r11.s64 = ctx.r29.s64 + 9280;
	// stw r9,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r9.u32);
	// li r28,50
	ctx.r28.s64 = 50;
	// stw r10,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r10.u32);
	// stw r11,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r11.u32);
	// li r4,13
	ctx.r4.s64 = 13;
	// stw r28,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r28.u32);
	// addi r3,r1,144
	ctx.r3.s64 = ctx.r1.s64 + 144;
	// bl 0x82b174d0
	ctx.lr = 0x82B01ABC;
	sub_82B174D0(ctx, base);
	// lwz r11,336(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 336);
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r4,332(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 332);
	// li r6,1
	ctx.r6.s64 = 1;
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// bl 0x82b13230
	ctx.lr = 0x82B01AD8;
	sub_82B13230(ctx, base);
	// mr. r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// beq 0x82b01db4
	if (ctx.cr0.eq) goto loc_82B01DB4;
	// addi r4,r1,112
	ctx.r4.s64 = ctx.r1.s64 + 112;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82b17c88
	ctx.lr = 0x82B01AEC;
	sub_82B17C88(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// bl 0x82b13600
	ctx.lr = 0x82B01AF8;
	sub_82B13600(ctx, base);
	// lwz r11,612(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 612);
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r31,r22
	ctx.r31.u64 = ctx.r22.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82b01b30
	if (ctx.cr6.eq) goto loc_82B01B30;
loc_82B01B0C:
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// li r4,40
	ctx.r4.s64 = 40;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82aff4e8
	ctx.lr = 0x82B01B20;
	sub_82AFF4E8(ctx, base);
	// lwz r11,612(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 612);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82b01b0c
	if (ctx.cr6.lt) goto loc_82B01B0C;
loc_82B01B30:
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// stw r22,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r22.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82b01b80
	if (ctx.cr6.eq) goto loc_82B01B80;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82ad6c20
	ctx.lr = 0x82B01B48;
	sub_82AD6C20(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82431c78
	ctx.lr = 0x82B01B54;
	sub_82431C78(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bl 0x82b18450
	ctx.lr = 0x82B01B5C;
	sub_82B18450(ctx, base);
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b18e10
	ctx.lr = 0x82B01B78;
	sub_82B18E10(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x82b01bb4
	goto loc_82B01BB4;
loc_82B01B80:
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82afefd8
	ctx.lr = 0x82B01B8C;
	sub_82AFEFD8(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x82b01bbc
	if (!ctx.cr0.eq) goto loc_82B01BBC;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82ab82d0
	ctx.lr = 0x82B01B9C;
	sub_82AB82D0(ctx, base);
	// bl 0x82431c78
	ctx.lr = 0x82B01BA0;
	sub_82431C78(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// bl 0x82b185b0
	ctx.lr = 0x82B01BA8;
	sub_82B185B0(ctx, base);
	// bl 0x82b15120
	ctx.lr = 0x82B01BAC;
	sub_82B15120(ctx, base);
	// bl 0x82b154d0
	ctx.lr = 0x82B01BB0;
	sub_82B154D0(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
loc_82B01BB4:
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq cr6,0x82b01bc4
	if (ctx.cr6.eq) goto loc_82B01BC4;
loc_82B01BBC:
	// lis r27,-32768
	ctx.r27.s64 = -2147483648;
	// ori r27,r27,16389
	ctx.r27.u64 = ctx.r27.u64 | 16389;
loc_82B01BC4:
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// blt cr6,0x82b01da0
	if (ctx.cr6.lt) goto loc_82B01DA0;
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// mr r29,r22
	ctx.r29.u64 = ctx.r22.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82b01c1c
	if (!ctx.cr6.eq) goto loc_82B01C1C;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82b16080
	ctx.lr = 0x82B01BE4;
	sub_82B16080(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// bl 0x82b15120
	ctx.lr = 0x82B01BEC;
	sub_82B15120(ctx, base);
	// b 0x82b01c14
	goto loc_82B01C14;
loc_82B01BF0:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b154d0
	ctx.lr = 0x82B01BF8;
	sub_82B154D0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82b01c08
	if (!ctx.cr6.eq) goto loc_82B01C08;
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
loc_82B01C08:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82b15420
	ctx.lr = 0x82B01C14;
	sub_82B15420(ctx, base);
loc_82B01C14:
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x82b01bf0
	if (!ctx.cr0.eq) goto loc_82B01BF0;
loc_82B01C1C:
	// addi r11,r29,1
	ctx.r11.s64 = ctx.r29.s64 + 1;
	// lis r4,9351
	ctx.r4.s64 = 612827136;
	// rlwinm r3,r11,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82691410
	ctx.lr = 0x82B01C2C;
	sub_82691410(ctx, base);
	// mr. r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// bne 0x82b01c3c
	if (!ctx.cr0.eq) goto loc_82B01C3C;
	// lis r27,-32761
	ctx.r27.s64 = -2147024896;
	// ori r27,r27,14
	ctx.r27.u64 = ctx.r27.u64 | 14;
loc_82B01C3C:
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// blt cr6,0x82b01cc4
	if (ctx.cr6.lt) goto loc_82B01CC4;
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// mr r30,r28
	ctx.r30.u64 = ctx.r28.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82b01cc0
	if (!ctx.cr6.eq) goto loc_82B01CC0;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82b16080
	ctx.lr = 0x82B01C5C;
	sub_82B16080(ctx, base);
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// bl 0x82b15120
	ctx.lr = 0x82B01C64;
	sub_82B15120(ctx, base);
	// b 0x82b01cb8
	goto loc_82B01CB8;
loc_82B01C68:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b154d0
	ctx.lr = 0x82B01C70;
	sub_82B154D0(ctx, base);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82b01cac
	if (!ctx.cr6.eq) goto loc_82B01CAC;
	// lwz r11,4(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// addi r10,r1,356
	ctx.r10.s64 = ctx.r1.s64 + 356;
	// lwz r9,8(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r8,12
	ctx.r8.s64 = 12;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// divwu r9,r9,r8
	ctx.r9.u32 = ctx.r9.u32 / ctx.r8.u32;
	// lwzx r11,r11,r10
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// rlwimi r9,r11,20,16,19
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r11.u32, 20) & 0xF000) | (ctx.r9.u64 & 0xFFFFFFFFFFFF0FFF);
	// rlwimi r9,r11,0,12,15
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r11.u32, 0) & 0xF0000) | (ctx.r9.u64 & 0xFFFFFFFFFFF0FFFF);
	// clrlwi r11,r9,12
	ctx.r11.u64 = ctx.r9.u32 & 0xFFFFF;
	// stw r11,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r11.u32);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
loc_82B01CAC:
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82b15420
	ctx.lr = 0x82B01CB8;
	sub_82B15420(ctx, base);
loc_82B01CB8:
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x82b01c68
	if (!ctx.cr0.eq) goto loc_82B01C68;
loc_82B01CC0:
	// stw r22,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r22.u32);
loc_82B01CC4:
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// stw r22,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r22.u32);
	// blt cr6,0x82b01d8c
	if (ctx.cr6.lt) goto loc_82B01D8C;
	// mr r9,r28
	ctx.r9.u64 = ctx.r28.u64;
	// lwz r10,2668(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 2668);
	// li r8,0
	ctx.r8.s64 = 0;
	// lwz r6,80(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// addi r7,r1,84
	ctx.r7.s64 = ctx.r1.s64 + 84;
	// lwz r5,2660(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 2660);
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x82b00570
	ctx.lr = 0x82B01CF4;
	sub_82B00570(ctx, base);
	// lwz r31,84(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr. r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// blt 0x82b01d7c
	if (ctx.cr0.lt) goto loc_82B01D7C;
	// stw r31,232(r1)
	PPC_STORE_U32(ctx.r1.u32 + 232, ctx.r31.u32);
	// addi r3,r1,224
	ctx.r3.s64 = ctx.r1.s64 + 224;
	// bl 0x82b01428
	ctx.lr = 0x82B01D0C;
	sub_82B01428(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8266d318
	ctx.lr = 0x82B01D14;
	sub_8266D318(ctx, base);
	// mr. r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// mr r30,r22
	ctx.r30.u64 = ctx.r22.u64;
	// beq 0x82b01d5c
	if (ctx.cr0.eq) goto loc_82B01D5C;
loc_82B01D20:
	// addi r5,r1,100
	ctx.r5.s64 = ctx.r1.s64 + 100;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8266d378
	ctx.lr = 0x82B01D30;
	sub_8266D378(ctx, base);
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82b01d50
	if (ctx.cr6.eq) goto loc_82B01D50;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// clrlwi. r10,r11,27
	ctx.r10.u64 = ctx.r11.u32 & 0x1F;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82b01d50
	if (ctx.cr0.eq) goto loc_82B01D50;
	// oris r11,r11,8
	ctx.r11.u64 = ctx.r11.u64 | 524288;
	// stw r11,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r11.u32);
loc_82B01D50:
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// cmplw cr6,r30,r29
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r29.u32, ctx.xer);
	// blt cr6,0x82b01d20
	if (ctx.cr6.lt) goto loc_82B01D20;
loc_82B01D5C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8266d408
	ctx.lr = 0x82B01D64;
	sub_8266D408(ctx, base);
	// mr r6,r17
	ctx.r6.u64 = ctx.r17.u64;
	// mr r5,r18
	ctx.r5.u64 = ctx.r18.u64;
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8266d4f0
	ctx.lr = 0x82B01D78;
	sub_8266D4F0(ctx, base);
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
loc_82B01D7C:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82b01d8c
	if (ctx.cr6.eq) goto loc_82B01D8C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x8266cb90
	ctx.lr = 0x82B01D8C;
	sub_8266CB90(ctx, base);
loc_82B01D8C:
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82b01da0
	if (ctx.cr6.eq) goto loc_82B01DA0;
	// lis r4,9351
	ctx.r4.s64 = 612827136;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82691460
	ctx.lr = 0x82B01DA0;
	sub_82691460(ctx, base);
loc_82B01DA0:
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82b13698
	ctx.lr = 0x82B01DA8;
	sub_82B13698(ctx, base);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82b17fd0
	ctx.lr = 0x82B01DB0;
	sub_82B17FD0(ctx, base);
	// b 0x82b01dc0
	goto loc_82B01DC0;
loc_82B01DB4:
	// lis r27,-32768
	ctx.r27.s64 = -2147483648;
	// stw r22,332(r1)
	PPC_STORE_U32(ctx.r1.u32 + 332, ctx.r22.u32);
	// ori r27,r27,16389
	ctx.r27.u64 = ctx.r27.u64 | 16389;
loc_82B01DC0:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x82b01dd4
	if (ctx.cr6.eq) goto loc_82B01DD4;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82b13318
	ctx.lr = 0x82B01DD4;
	sub_82B13318(ctx, base);
loc_82B01DD4:
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82b17aa8
	ctx.lr = 0x82B01DDC;
	sub_82B17AA8(ctx, base);
	// lis r4,9351
	ctx.r4.s64 = 612827136;
	// mr r3,r16
	ctx.r3.u64 = ctx.r16.u64;
	// bl 0x82691460
	ctx.lr = 0x82B01DE8;
	sub_82691460(ctx, base);
loc_82B01DE8:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,2576
	ctx.r1.s64 = ctx.r1.s64 + 2576;
	// b 0x82fa7698
	__restgprlr_16(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B01DF4"))) PPC_WEAK_FUNC(sub_82B01DF4);
PPC_FUNC_IMPL(__imp__sub_82B01DF4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B01DF8"))) PPC_WEAK_FUNC(sub_82B01DF8);
PPC_FUNC_IMPL(__imp__sub_82B01DF8) {
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
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82b01e78
	if (ctx.cr6.eq) goto loc_82B01E78;
	// cmplwi cr6,r4,4
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 4, ctx.xer);
	// blt cr6,0x82b01e78
	if (ctx.cr6.lt) goto loc_82B01E78;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82b01e78
	if (ctx.cr6.eq) goto loc_82B01E78;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82b01e78
	if (ctx.cr6.eq) goto loc_82B01E78;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lis r31,-2
	ctx.r31.s64 = -131072;
	// rlwinm r11,r11,0,0,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFF0000;
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x82b01e54
	if (!ctx.cr6.eq) goto loc_82B01E54;
	// lwz r11,204(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 204);
	// lwz r31,196(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// bl 0x82b017e0
	ctx.lr = 0x82B01E50;
	sub_82B017E0(ctx, base);
	// b 0x82b01e80
	goto loc_82B01E80;
loc_82B01E54:
	// lis r31,-1
	ctx.r31.s64 = -65536;
	// cmplw cr6,r11,r31
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r31.u32, ctx.xer);
	// bne cr6,0x82b01e78
	if (!ctx.cr6.eq) goto loc_82B01E78;
	// lwz r11,204(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 204);
	// lwz r31,196(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// bl 0x82b01488
	ctx.lr = 0x82B01E74;
	sub_82B01488(ctx, base);
	// b 0x82b01e80
	goto loc_82B01E80;
loc_82B01E78:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
loc_82B01E80:
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

__attribute__((alias("__imp__sub_82B01E94"))) PPC_WEAK_FUNC(sub_82B01E94);
PPC_FUNC_IMPL(__imp__sub_82B01E94) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B01E98"))) PPC_WEAK_FUNC(sub_82B01E98);
PPC_FUNC_IMPL(__imp__sub_82B01E98) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7664
	ctx.lr = 0x82B01EA0;
	__savegprlr_23(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,0(r6)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r6.u32 + 0);
	// mr r27,r4
	ctx.r27.u64 = ctx.r4.u64;
	// lwz r26,4(r6)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r6.u32 + 4);
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// mr r25,r10
	ctx.r25.u64 = ctx.r10.u64;
	// add r23,r11,r8
	ctx.r23.u64 = ctx.r11.u64 + ctx.r8.u64;
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x82b01fb0
	if (ctx.cr6.eq) goto loc_82B01FB0;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ori r24,r3,2
	ctx.r24.u64 = ctx.r3.u64 | 2;
	// bne cr6,0x82b01ed8
	if (!ctx.cr6.eq) goto loc_82B01ED8;
	// ori r24,r3,1
	ctx.r24.u64 = ctx.r3.u64 | 1;
loc_82B01ED8:
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r29,r11,15072
	ctx.r29.s64 = ctx.r11.s64 + 15072;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82b013d0
	ctx.lr = 0x82B01EEC;
	sub_82B013D0(ctx, base);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r28,r11,5180
	ctx.r28.s64 = ctx.r11.s64 + 5180;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x82b00938
	ctx.lr = 0x82B01F00;
	sub_82B00938(ctx, base);
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// li r11,0
	ctx.r11.s64 = 0;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// std r11,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r11.u64);
	// bne cr6,0x82b01f3c
	if (!ctx.cr6.eq) goto loc_82B01F3C;
	// lwz r10,24(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 24);
	// addi r9,r31,36
	ctx.r9.s64 = ctx.r31.s64 + 36;
	// lwz r8,28(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 28);
	// addi r10,r10,9
	ctx.r10.s64 = ctx.r10.s64 + 9;
	// stw r9,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r9.u32);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r10,r31
	ctx.r10.u64 = ctx.r10.u64 + ctx.r31.u64;
	// stw r8,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r8.u32);
	// stw r10,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r10.u32);
	// b 0x82b01f44
	goto loc_82B01F44;
loc_82B01F3C:
	// addi r10,r31,32
	ctx.r10.s64 = ctx.r31.s64 + 32;
	// stw r10,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r10.u32);
loc_82B01F44:
	// lis r10,-32080
	ctx.r10.s64 = -2102394880;
	// lwz r4,12(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// lis r9,-32080
	ctx.r9.s64 = -2102394880;
	// lwz r3,8(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// addi r6,r10,2912
	ctx.r6.s64 = ctx.r10.s64 + 2912;
	// stw r30,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r30.u32);
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// stw r24,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r24.u32);
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// addi r9,r9,-3704
	ctx.r9.s64 = ctx.r9.s64 + -3704;
	// li r8,0
	ctx.r8.s64 = 0;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// li r7,0
	ctx.r7.s64 = 0;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// bl 0x8268ffa8
	ctx.lr = 0x82B01F88;
	sub_8268FFA8(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82b013d0
	ctx.lr = 0x82B01F98;
	sub_82B013D0(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82b00938
	ctx.lr = 0x82B01FA4;
	sub_82B00938(ctx, base);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// blt cr6,0x82b01fb4
	if (ctx.cr6.lt) goto loc_82B01FB4;
loc_82B01FB0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82B01FB4:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x82fa76b4
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B01FBC"))) PPC_WEAK_FUNC(sub_82B01FBC);
PPC_FUNC_IMPL(__imp__sub_82B01FBC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B01FC0"))) PPC_WEAK_FUNC(sub_82B01FC0);
PPC_FUNC_IMPL(__imp__sub_82B01FC0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x82B01FC8;
	__savegprlr_28(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// addi r4,r11,-27156
	ctx.r4.s64 = ctx.r11.s64 + -27156;
	// bl 0x82b00938
	ctx.lr = 0x82B01FE4;
	sub_82B00938(ctx, base);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r29,r11,15072
	ctx.r29.s64 = ctx.r11.s64 + 15072;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82b013d0
	ctx.lr = 0x82B01FF8;
	sub_82B013D0(ctx, base);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r28,r11,5180
	ctx.r28.s64 = ctx.r11.s64 + 5180;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x82b00938
	ctx.lr = 0x82B0200C;
	sub_82B00938(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r5,0(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// addi r4,r11,-27176
	ctx.r4.s64 = ctx.r11.s64 + -27176;
	// bl 0x82b00938
	ctx.lr = 0x82B02020;
	sub_82B00938(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b013d0
	ctx.lr = 0x82B0202C;
	sub_82B013D0(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b00938
	ctx.lr = 0x82B02038;
	sub_82B00938(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-27188
	ctx.r4.s64 = ctx.r11.s64 + -27188;
	// bl 0x82b00938
	ctx.lr = 0x82B02048;
	sub_82B00938(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r4,r30,8
	ctx.r4.s64 = ctx.r30.s64 + 8;
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwz r5,4(r30)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82B02060;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x82b02078
	if (!ctx.cr0.lt) goto loc_82B02078;
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x82b02078
	if (ctx.cr6.lt) goto loc_82B02078;
	// stw r3,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r3.u32);
loc_82B02078:
	// lis r11,-32255
	ctx.r11.s64 = -2113863680;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-14928
	ctx.r4.s64 = ctx.r11.s64 + -14928;
	// bl 0x82b00938
	ctx.lr = 0x82B02088;
	sub_82B00938(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b013d0
	ctx.lr = 0x82B02094;
	sub_82B013D0(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b00938
	ctx.lr = 0x82B020A0;
	sub_82B00938(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B020AC"))) PPC_WEAK_FUNC(sub_82B020AC);
PPC_FUNC_IMPL(__imp__sub_82B020AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B020B0"))) PPC_WEAK_FUNC(sub_82B020B0);
PPC_FUNC_IMPL(__imp__sub_82B020B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7644
	ctx.lr = 0x82B020B8;
	__savegprlr_15(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// mr r9,r6
	ctx.r9.u64 = ctx.r6.u64;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r8,r5
	ctx.r8.u64 = ctx.r5.u64;
	// mr r7,r4
	ctx.r7.u64 = ctx.r4.u64;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// li r5,32
	ctx.r5.s64 = 32;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82b01e98
	ctx.lr = 0x82B020EC;
	sub_82B01E98(ctx, base);
	// mr. r15,r3
	ctx.r15.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r15.s32, 0, ctx.xer);
	// blt 0x82b02324
	if (ctx.cr0.lt) goto loc_82B02324;
	// rlwinm. r11,r29,0,23,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0x100;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82b02324
	if (ctx.cr0.eq) goto loc_82B02324;
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r29,r11,15072
	ctx.r29.s64 = ctx.r11.s64 + 15072;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82b013d0
	ctx.lr = 0x82B02110;
	sub_82B013D0(ctx, base);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r28,r11,5180
	ctx.r28.s64 = ctx.r11.s64 + 5180;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// bl 0x82b00938
	ctx.lr = 0x82B02124;
	sub_82B00938(ctx, base);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,15220
	ctx.r4.s64 = ctx.r11.s64 + 15220;
	// bl 0x82b013d0
	ctx.lr = 0x82B02134;
	sub_82B013D0(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lhz r6,24(r30)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r30.u32 + 24);
	// addi r4,r11,-26976
	ctx.r4.s64 = ctx.r11.s64 + -26976;
	// lhz r5,26(r30)
	ctx.r5.u64 = PPC_LOAD_U16(ctx.r30.u32 + 26);
	// bl 0x82b00938
	ctx.lr = 0x82B0214C;
	sub_82B00938(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b013d0
	ctx.lr = 0x82B02158;
	sub_82B013D0(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b00938
	ctx.lr = 0x82B02164;
	sub_82B00938(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-27028
	ctx.r4.s64 = ctx.r11.s64 + -27028;
	// lwz r11,28(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 28);
	// rlwinm r7,r11,27,31,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// rlwinm r6,r11,28,31,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0x1;
	// clrlwi r5,r11,28
	ctx.r5.u64 = ctx.r11.u32 & 0xF;
	// bl 0x82b00938
	ctx.lr = 0x82B02184;
	sub_82B00938(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b013d0
	ctx.lr = 0x82B02190;
	sub_82B013D0(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b00938
	ctx.lr = 0x82B0219C;
	sub_82B00938(ctx, base);
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// rlwinm. r17,r11,27,27,31
	ctx.r17.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1F;
	ctx.cr0.compare<int32_t>(ctx.r17.s32, 0, ctx.xer);
	// beq 0x82b02314
	if (ctx.cr0.eq) goto loc_82B02314;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lwz r18,96(r1)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-27056
	ctx.r4.s64 = ctx.r11.s64 + -27056;
	// bl 0x82b00938
	ctx.lr = 0x82B021BC;
	sub_82B00938(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b013d0
	ctx.lr = 0x82B021C8;
	sub_82B013D0(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b00938
	ctx.lr = 0x82B021D4;
	sub_82B00938(ctx, base);
	// li r16,0
	ctx.r16.s64 = 0;
	// li r27,0
	ctx.r27.s64 = 0;
	// cmplwi cr6,r17,0
	ctx.cr6.compare<uint32_t>(ctx.r17.u32, 0, ctx.xer);
	// beq cr6,0x82b022fc
	if (ctx.cr6.eq) goto loc_82B022FC;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// lis r8,-32242
	ctx.r8.s64 = -2113011712;
	// lis r7,-31975
	ctx.r7.s64 = -2095513600;
	// lis r6,-32227
	ctx.r6.s64 = -2112028672;
	// lis r5,-32227
	ctx.r5.s64 = -2112028672;
	// lis r4,-32227
	ctx.r4.s64 = -2112028672;
	// lis r10,-32231
	ctx.r10.s64 = -2112290816;
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r23,r9,-27108
	ctx.r23.s64 = ctx.r9.s64 + -27108;
	// addi r26,r8,-27136
	ctx.r26.s64 = ctx.r8.s64 + -27136;
	// addi r25,r7,3088
	ctx.r25.s64 = ctx.r7.s64 + 3088;
	// addi r22,r6,13976
	ctx.r22.s64 = ctx.r6.s64 + 13976;
	// addi r21,r5,13980
	ctx.r21.s64 = ctx.r5.s64 + 13980;
	// addi r20,r4,13984
	ctx.r20.s64 = ctx.r4.s64 + 13984;
	// addi r24,r10,32570
	ctx.r24.s64 = ctx.r10.s64 + 32570;
	// addi r19,r11,13988
	ctx.r19.s64 = ctx.r11.s64 + 13988;
loc_82B02224:
	// lwz r30,0(r18)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r18.u32 + 0);
	// mr r8,r19
	ctx.r8.u64 = ctx.r19.u64;
	// rlwinm. r11,r30,20,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 20) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// rlwinm r6,r30,28,28,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 28) & 0xF;
	// clrlwi r7,r30,28
	ctx.r7.u64 = ctx.r30.u32 & 0xF;
	// rlwinm r9,r30,20,28,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 20) & 0xF;
	// bne 0x82b02244
	if (!ctx.cr0.eq) goto loc_82B02244;
	// mr r8,r24
	ctx.r8.u64 = ctx.r24.u64;
loc_82B02244:
	// rlwinm. r11,r9,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
	// bne 0x82b02254
	if (!ctx.cr0.eq) goto loc_82B02254;
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
loc_82B02254:
	// rlwinm. r10,r9,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// mr r10,r21
	ctx.r10.u64 = ctx.r21.u64;
	// bne 0x82b02264
	if (!ctx.cr0.eq) goto loc_82B02264;
	// mr r10,r24
	ctx.r10.u64 = ctx.r24.u64;
loc_82B02264:
	// clrlwi. r9,r9,31
	ctx.r9.u64 = ctx.r9.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// mr r9,r22
	ctx.r9.u64 = ctx.r22.u64;
	// bne 0x82b02274
	if (!ctx.cr0.eq) goto loc_82B02274;
	// mr r9,r24
	ctx.r9.u64 = ctx.r24.u64;
loc_82B02274:
	// rlwinm r6,r6,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// rlwinm r8,r30,24,28,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 24) & 0xF;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwzx r6,r6,r25
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r6.u32 + ctx.r25.u32);
	// bl 0x82b00938
	ctx.lr = 0x82B02298;
	sub_82B00938(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b013d0
	ctx.lr = 0x82B022A4;
	sub_82B013D0(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b00938
	ctx.lr = 0x82B022B0;
	sub_82B00938(ctx, base);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x82b022e8
	if (ctx.cr6.eq) goto loc_82B022E8;
	// clrlwi r11,r30,24
	ctx.r11.u64 = ctx.r30.u32 & 0xFF;
	// cmplw cr6,r16,r11
	ctx.cr6.compare<uint32_t>(ctx.r16.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82b022e8
	if (ctx.cr6.lt) goto loc_82B022E8;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b00938
	ctx.lr = 0x82B022D0;
	sub_82B00938(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b013d0
	ctx.lr = 0x82B022DC;
	sub_82B013D0(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b00938
	ctx.lr = 0x82B022E8;
	sub_82B00938(ctx, base);
loc_82B022E8:
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// clrlwi r16,r30,24
	ctx.r16.u64 = ctx.r30.u32 & 0xFF;
	// addi r18,r18,4
	ctx.r18.s64 = ctx.r18.s64 + 4;
	// cmplw cr6,r27,r17
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r17.u32, ctx.xer);
	// blt cr6,0x82b02224
	if (ctx.cr6.lt) goto loc_82B02224;
loc_82B022FC:
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b013d0
	ctx.lr = 0x82B02308;
	sub_82B013D0(ctx, base);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b00938
	ctx.lr = 0x82B02314;
	sub_82B00938(ctx, base);
loc_82B02314:
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,15204
	ctx.r4.s64 = ctx.r11.s64 + 15204;
	// bl 0x82b013d0
	ctx.lr = 0x82B02324;
	sub_82B013D0(ctx, base);
loc_82B02324:
	// mr r3,r15
	ctx.r3.u64 = ctx.r15.u64;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x82fa7694
	__restgprlr_15(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B02330"))) PPC_WEAK_FUNC(sub_82B02330);
PPC_FUNC_IMPL(__imp__sub_82B02330) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7640
	ctx.lr = 0x82B02338;
	__savegprlr_14(ctx, base);
	// stwu r1,-272(r1)
	ea = -272 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// mr r9,r6
	ctx.r9.u64 = ctx.r6.u64;
	// mr r24,r3
	ctx.r24.u64 = ctx.r3.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r8,r5
	ctx.r8.u64 = ctx.r5.u64;
	// mr r7,r4
	ctx.r7.u64 = ctx.r4.u64;
	// mr r6,r3
	ctx.r6.u64 = ctx.r3.u64;
	// addi r10,r1,96
	ctx.r10.s64 = ctx.r1.s64 + 96;
	// li r5,36
	ctx.r5.s64 = 36;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82b01e98
	ctx.lr = 0x82B0236C;
	sub_82B01E98(ctx, base);
	// stw r3,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82b0274c
	if (ctx.cr0.lt) goto loc_82B0274C;
	// rlwinm. r11,r30,0,23,23
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 0) & 0x100;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82b0274c
	if (ctx.cr0.eq) goto loc_82B0274C;
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// lwz r30,28(r24)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r24.u32 + 28);
	// lis r7,-31975
	ctx.r7.s64 = -2095513600;
	// lwz r23,96(r1)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// lis r10,-32227
	ctx.r10.s64 = -2112028672;
	// lwz r28,24(r24)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r24.u32 + 24);
	// lis r9,-32227
	ctx.r9.s64 = -2112028672;
	// lis r8,-32227
	ctx.r8.s64 = -2112028672;
	// addi r15,r11,15204
	ctx.r15.s64 = ctx.r11.s64 + 15204;
	// addi r16,r7,3088
	ctx.r16.s64 = ctx.r7.s64 + 3088;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// stw r15,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r15.u32);
	// addi r22,r10,15220
	ctx.r22.s64 = ctx.r10.s64 + 15220;
	// stw r16,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r16.u32);
	// addi r27,r9,5180
	ctx.r27.s64 = ctx.r9.s64 + 5180;
	// addi r26,r8,15072
	ctx.r26.s64 = ctx.r8.s64 + 15072;
	// beq cr6,0x82b024d4
	if (ctx.cr6.eq) goto loc_82B024D4;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b013d0
	ctx.lr = 0x82B023D0;
	sub_82B013D0(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b00938
	ctx.lr = 0x82B023DC;
	sub_82B00938(ctx, base);
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b013d0
	ctx.lr = 0x82B023E8;
	sub_82B013D0(ctx, base);
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// rlwinm r11,r28,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r4,r10,-26716
	ctx.r4.s64 = ctx.r10.s64 + -26716;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// add r29,r11,r23
	ctx.r29.u64 = ctx.r11.u64 + ctx.r23.u64;
	// bl 0x82b00938
	ctx.lr = 0x82B02400;
	sub_82B00938(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b013d0
	ctx.lr = 0x82B0240C;
	sub_82B013D0(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b00938
	ctx.lr = 0x82B02418;
	sub_82B00938(ctx, base);
	// li r25,0
	ctx.r25.s64 = 0;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82b024c8
	if (ctx.cr6.eq) goto loc_82B024C8;
	// lis r8,-32242
	ctx.r8.s64 = -2113011712;
	// lis r9,-31975
	ctx.r9.s64 = -2095513600;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r21,r29
	ctx.r21.u64 = ctx.r29.u64;
	// addi r19,r8,-26720
	ctx.r19.s64 = ctx.r8.s64 + -26720;
	// addi r18,r9,3952
	ctx.r18.s64 = ctx.r9.s64 + 3952;
	// addi r17,r10,-26744
	ctx.r17.s64 = ctx.r10.s64 + -26744;
	// addi r20,r11,-26772
	ctx.r20.s64 = ctx.r11.s64 + -26772;
loc_82B02448:
	// lwz r29,0(r21)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// rlwinm r11,r29,22,26,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 22) & 0x3C;
	// clrlwi r8,r29,20
	ctx.r8.u64 = ctx.r29.u32 & 0xFFF;
	// rlwinm r7,r29,16,28,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 16) & 0xF;
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwzx r6,r11,r16
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r16.u32);
	// bl 0x82b00938
	ctx.lr = 0x82B02470;
	sub_82B00938(ctx, base);
	// rlwinm. r11,r29,0,9,9
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0x400000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82b02484
	if (ctx.cr0.eq) goto loc_82B02484;
	// mr r4,r17
	ctx.r4.u64 = ctx.r17.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b00938
	ctx.lr = 0x82B02484;
	sub_82B00938(ctx, base);
loc_82B02484:
	// rlwinm. r11,r29,12,30,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 12) & 0x3;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82b024a0
	if (ctx.cr0.eq) goto loc_82B024A0;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwzx r5,r11,r18
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r18.u32);
	// bl 0x82b00938
	ctx.lr = 0x82B024A0;
	sub_82B00938(ctx, base);
loc_82B024A0:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b013d0
	ctx.lr = 0x82B024AC;
	sub_82B013D0(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b00938
	ctx.lr = 0x82B024B8;
	sub_82B00938(ctx, base);
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// addi r21,r21,4
	ctx.r21.s64 = ctx.r21.s64 + 4;
	// cmplw cr6,r25,r30
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, ctx.r30.u32, ctx.xer);
	// blt cr6,0x82b02448
	if (ctx.cr6.lt) goto loc_82B02448;
loc_82B024C8:
	// mr r4,r15
	ctx.r4.u64 = ctx.r15.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b013d0
	ctx.lr = 0x82B024D4;
	sub_82B013D0(ctx, base);
loc_82B024D4:
	// lwz r11,20(r24)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r24.u32 + 20);
	// rlwinm. r21,r11,27,27,31
	ctx.r21.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1F;
	ctx.cr0.compare<int32_t>(ctx.r21.s32, 0, ctx.xer);
	// beq 0x82b0274c
	if (ctx.cr0.eq) goto loc_82B0274C;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b013d0
	ctx.lr = 0x82B024EC;
	sub_82B013D0(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b00938
	ctx.lr = 0x82B024F8;
	sub_82B00938(ctx, base);
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b013d0
	ctx.lr = 0x82B02504;
	sub_82B013D0(ctx, base);
	// add r11,r21,r30
	ctx.r11.u64 = ctx.r21.u64 + ctx.r30.u64;
	// add r10,r30,r28
	ctx.r10.u64 = ctx.r30.u64 + ctx.r28.u64;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r23
	ctx.r11.u64 = ctx.r11.u64 + ctx.r23.u64;
	// addi r4,r9,-26804
	ctx.r4.s64 = ctx.r9.s64 + -26804;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// add r22,r10,r23
	ctx.r22.u64 = ctx.r10.u64 + ctx.r23.u64;
	// lwz r14,32(r24)
	ctx.r14.u64 = PPC_LOAD_U32(ctx.r24.u32 + 32);
	// stw r14,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r14.u32);
	// bl 0x82b00938
	ctx.lr = 0x82B0253C;
	sub_82B00938(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b013d0
	ctx.lr = 0x82B02548;
	sub_82B013D0(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b00938
	ctx.lr = 0x82B02554;
	sub_82B00938(ctx, base);
	// li r30,0
	ctx.r30.s64 = 0;
	// li r28,0
	ctx.r28.s64 = 0;
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, 0, ctx.xer);
	// beq cr6,0x82b02740
	if (ctx.cr6.eq) goto loc_82B02740;
	// lis r3,-32242
	ctx.r3.s64 = -2113011712;
	// lis r4,-32242
	ctx.r4.s64 = -2113011712;
	// lis r5,-32242
	ctx.r5.s64 = -2113011712;
	// lis r6,-32242
	ctx.r6.s64 = -2113011712;
	// lis r7,-32227
	ctx.r7.s64 = -2112028672;
	// lis r8,-32227
	ctx.r8.s64 = -2112028672;
	// lis r9,-32227
	ctx.r9.s64 = -2112028672;
	// lis r10,-32231
	ctx.r10.s64 = -2112290816;
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r20,r3,-26864
	ctx.r20.s64 = ctx.r3.s64 + -26864;
	// addi r23,r4,-26880
	ctx.r23.s64 = ctx.r4.s64 + -26880;
	// addi r19,r5,-27108
	ctx.r19.s64 = ctx.r5.s64 + -27108;
	// addi r25,r6,-26908
	ctx.r25.s64 = ctx.r6.s64 + -26908;
	// addi r18,r7,13976
	ctx.r18.s64 = ctx.r7.s64 + 13976;
	// addi r17,r8,13980
	ctx.r17.s64 = ctx.r8.s64 + 13980;
	// addi r16,r9,13984
	ctx.r16.s64 = ctx.r9.s64 + 13984;
	// addi r24,r10,32570
	ctx.r24.s64 = ctx.r10.s64 + 32570;
	// addi r15,r11,13988
	ctx.r15.s64 = ctx.r11.s64 + 13988;
	// b 0x82b025b4
	goto loc_82B025B4;
loc_82B025B0:
	// lwz r30,104(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
loc_82B025B4:
	// lwz r29,0(r22)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// mr r6,r15
	ctx.r6.u64 = ctx.r15.u64;
	// rlwinm. r11,r29,20,28,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 20) & 0x8;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// rlwinm r5,r29,28,28,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 28) & 0xF;
	// clrlwi r7,r29,28
	ctx.r7.u64 = ctx.r29.u32 & 0xF;
	// rlwinm r9,r29,20,28,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 20) & 0xF;
	// rlwinm r8,r29,24,28,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 24) & 0xF;
	// bne 0x82b025d8
	if (!ctx.cr0.eq) goto loc_82B025D8;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
loc_82B025D8:
	// rlwinm. r11,r9,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r11,r16
	ctx.r11.u64 = ctx.r16.u64;
	// bne 0x82b025e8
	if (!ctx.cr0.eq) goto loc_82B025E8;
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
loc_82B025E8:
	// rlwinm. r10,r9,0,30,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// mr r10,r17
	ctx.r10.u64 = ctx.r17.u64;
	// bne 0x82b025f8
	if (!ctx.cr0.eq) goto loc_82B025F8;
	// mr r10,r24
	ctx.r10.u64 = ctx.r24.u64;
loc_82B025F8:
	// clrlwi. r9,r9,31
	ctx.r9.u64 = ctx.r9.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// mr r9,r18
	ctx.r9.u64 = ctx.r18.u64;
	// bne 0x82b02608
	if (!ctx.cr0.eq) goto loc_82B02608;
	// mr r9,r24
	ctx.r9.u64 = ctx.r24.u64;
loc_82B02608:
	// lwz r3,100(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// rlwinm r5,r5,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// lwzx r6,r5,r3
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r3.u32);
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b00938
	ctx.lr = 0x82B0262C;
	sub_82B00938(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b013d0
	ctx.lr = 0x82B02638;
	sub_82B013D0(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b00938
	ctx.lr = 0x82B02644;
	sub_82B00938(ctx, base);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82b0267c
	if (ctx.cr6.eq) goto loc_82B0267C;
	// clrlwi r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	// cmplw cr6,r30,r11
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82b0267c
	if (ctx.cr6.lt) goto loc_82B0267C;
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b00938
	ctx.lr = 0x82B02664;
	sub_82B00938(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b013d0
	ctx.lr = 0x82B02670;
	sub_82B013D0(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b00938
	ctx.lr = 0x82B0267C;
	sub_82B00938(ctx, base);
loc_82B0267C:
	// rlwinm r30,r29,16,20,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 16) & 0xFFF;
	// clrlwi r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	// cmplw cr6,r30,r14
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r14.u32, ctx.xer);
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// bge cr6,0x82b026f0
	if (!ctx.cr6.lt) goto loc_82B026F0;
	// lwz r10,108(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// rlwinm r11,r30,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// add r29,r11,r10
	ctx.r29.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_82B0269C:
	// lwz r14,0(r29)
	ctx.r14.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// clrlwi r6,r14,20
	ctx.r6.u64 = ctx.r14.u32 & 0xFFF;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b00938
	ctx.lr = 0x82B026B4;
	sub_82B00938(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b013d0
	ctx.lr = 0x82B026C0;
	sub_82B013D0(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b00938
	ctx.lr = 0x82B026CC;
	sub_82B00938(ctx, base);
	// rlwinm. r11,r14,0,19,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r14.u32 | (ctx.r14.u64 << 32), 0) & 0x1000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r14,96(r1)
	ctx.r14.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// bne 0x82b026e8
	if (!ctx.cr0.eq) goto loc_82B026E8;
	// addi r30,r30,1
	ctx.r30.s64 = ctx.r30.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmplw cr6,r30,r14
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r14.u32, ctx.xer);
	// blt cr6,0x82b0269c
	if (ctx.cr6.lt) goto loc_82B0269C;
loc_82B026E8:
	// cmplw cr6,r30,r14
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r14.u32, ctx.xer);
	// blt cr6,0x82b02714
	if (ctx.cr6.lt) goto loc_82B02714;
loc_82B026F0:
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b00938
	ctx.lr = 0x82B026FC;
	sub_82B00938(ctx, base);
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b013d0
	ctx.lr = 0x82B02708;
	sub_82B013D0(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b00938
	ctx.lr = 0x82B02714;
	sub_82B00938(ctx, base);
loc_82B02714:
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b013d0
	ctx.lr = 0x82B02720;
	sub_82B013D0(ctx, base);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b00938
	ctx.lr = 0x82B0272C;
	sub_82B00938(ctx, base);
	// addi r28,r28,1
	ctx.r28.s64 = ctx.r28.s64 + 1;
	// addi r22,r22,4
	ctx.r22.s64 = ctx.r22.s64 + 4;
	// cmplw cr6,r28,r21
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r21.u32, ctx.xer);
	// blt cr6,0x82b025b0
	if (ctx.cr6.lt) goto loc_82B025B0;
	// lwz r15,112(r1)
	ctx.r15.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
loc_82B02740:
	// mr r4,r15
	ctx.r4.u64 = ctx.r15.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b013d0
	ctx.lr = 0x82B0274C;
	sub_82B013D0(ctx, base);
loc_82B0274C:
	// lwz r3,116(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// addi r1,r1,272
	ctx.r1.s64 = ctx.r1.s64 + 272;
	// b 0x82fa7690
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B02758"))) PPC_WEAK_FUNC(sub_82B02758);
PPC_FUNC_IMPL(__imp__sub_82B02758) {
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
	// mr r5,r7
	ctx.r5.u64 = ctx.r7.u64;
	// li r3,0
	ctx.r3.s64 = 0;
	// cmplwi cr6,r6,36
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 36, ctx.xer);
	// bge cr6,0x82b02788
	if (!ctx.cr6.lt) goto loc_82B02788;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
loc_82B02788:
	// addi r10,r10,3
	ctx.r10.s64 = ctx.r10.s64 + 3;
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// lwzx r10,r10,r11
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82b027ec
	if (ctx.cr6.eq) goto loc_82B027EC;
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82b027ec
	if (ctx.cr6.lt) goto loc_82B027EC;
	// cmplwi cr6,r4,1
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 1, ctx.xer);
	// blt cr6,0x82b027d8
	if (ctx.cr6.lt) goto loc_82B027D8;
	// beq cr6,0x82b027c0
	if (ctx.cr6.eq) goto loc_82B027C0;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// b 0x82b027ec
	goto loc_82B027EC;
loc_82B027C0:
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// mr r6,r8
	ctx.r6.u64 = ctx.r8.u64;
	// mr r4,r9
	ctx.r4.u64 = ctx.r9.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82b02330
	ctx.lr = 0x82B027D4;
	sub_82B02330(ctx, base);
	// b 0x82b027ec
	goto loc_82B027EC;
loc_82B027D8:
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// mr r6,r8
	ctx.r6.u64 = ctx.r8.u64;
	// mr r4,r9
	ctx.r4.u64 = ctx.r9.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82b020b0
	ctx.lr = 0x82B027EC;
	sub_82B020B0(ctx, base);
loc_82B027EC:
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

__attribute__((alias("__imp__sub_82B02800"))) PPC_WEAK_FUNC(sub_82B02800);
PPC_FUNC_IMPL(__imp__sub_82B02800) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r24,-28108(r23)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r23.u32 + -28108);
	// lwz r16,9104(r30)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r30.u32 + 9104);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x82B02810;
	__savegprlr_28(ctx, base);
	// addi r31,r1,-144
	ctx.r31.s64 = ctx.r1.s64 + -144;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r9
	ctx.r29.u64 = ctx.r9.u64;
	// stw r9,212(r31)
	PPC_STORE_U32(ctx.r31.u32 + 212, ctx.r9.u32);
	// mr r28,r10
	ctx.r28.u64 = ctx.r10.u64;
	// stw r10,220(r31)
	PPC_STORE_U32(ctx.r31.u32 + 220, ctx.r10.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82b0283c
	if (!ctx.cr6.eq) goto loc_82B0283C;
loc_82B02830:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// b 0x82b028f0
	// ERROR 82B028F0
	return;
loc_82B0283C:
	// cmplwi cr6,r4,4
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 4, ctx.xer);
	// blt cr6,0x82b02830
	if (ctx.cr6.lt) goto loc_82B02830;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82b02830
	if (ctx.cr6.eq) goto loc_82B02830;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82b02830
	if (ctx.cr6.eq) goto loc_82B02830;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lwz r11,236(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 236);
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// lwz r30,228(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 228);
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// bl 0x82b01df8
	ctx.lr = 0x82B02878;
	sub_82B01DF8(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// stw r30,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r30.u32);
	// bge 0x82b028b0
	if (!ctx.cr0.lt) goto loc_82B028B0;
	// lis r11,-30602
	ctx.r11.s64 = -2005532672;
	// ori r11,r11,2921
	ctx.r11.u64 = ctx.r11.u64 | 2921;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x82b028b0
	if (!ctx.cr6.eq) goto loc_82B028B0;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mtctr r28
	ctx.ctr.u64 = ctx.r28.u64;
	// li r5,48
	ctx.r5.s64 = 48;
	// addi r6,r11,-26544
	ctx.r6.s64 = ctx.r11.s64 + -26544;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bctrl 
	ctx.lr = 0x82B028B0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82B028B0:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x82b028ec
	// ERROR 82B028EC
	return;
}

__attribute__((alias("__imp__sub_82B02808"))) PPC_WEAK_FUNC(sub_82B02808);
PPC_FUNC_IMPL(__imp__sub_82B02808) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x82B02810;
	__savegprlr_28(ctx, base);
	// addi r31,r1,-144
	ctx.r31.s64 = ctx.r1.s64 + -144;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r29,r9
	ctx.r29.u64 = ctx.r9.u64;
	// stw r9,212(r31)
	PPC_STORE_U32(ctx.r31.u32 + 212, ctx.r9.u32);
	// mr r28,r10
	ctx.r28.u64 = ctx.r10.u64;
	// stw r10,220(r31)
	PPC_STORE_U32(ctx.r31.u32 + 220, ctx.r10.u32);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne cr6,0x82b0283c
	if (!ctx.cr6.eq) goto loc_82B0283C;
loc_82B02830:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// b 0x82b028f0
	goto loc_82B028F0;
loc_82B0283C:
	// cmplwi cr6,r4,4
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 4, ctx.xer);
	// blt cr6,0x82b02830
	if (ctx.cr6.lt) goto loc_82B02830;
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82b02830
	if (ctx.cr6.eq) goto loc_82B02830;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// beq cr6,0x82b02830
	if (ctx.cr6.eq) goto loc_82B02830;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lwz r11,236(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 236);
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// lwz r30,228(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 228);
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// bl 0x82b01df8
	ctx.lr = 0x82B02878;
	sub_82B01DF8(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// stw r30,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r30.u32);
	// bge 0x82b028b0
	if (!ctx.cr0.lt) goto loc_82B028B0;
	// lis r11,-30602
	ctx.r11.s64 = -2005532672;
	// ori r11,r11,2921
	ctx.r11.u64 = ctx.r11.u64 | 2921;
	// cmpw cr6,r30,r11
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x82b028b0
	if (!ctx.cr6.eq) goto loc_82B028B0;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mtctr r28
	ctx.ctr.u64 = ctx.r28.u64;
	// li r5,48
	ctx.r5.s64 = 48;
	// addi r6,r11,-26544
	ctx.r6.s64 = ctx.r11.s64 + -26544;
	// li r4,1
	ctx.r4.s64 = 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bctrl 
	ctx.lr = 0x82B028B0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82B028B0:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x82b028ec
	goto loc_82B028EC;
	// lwz r11,220(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 220);
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// li r5,47
	ctx.r5.s64 = 47;
	// lwz r3,212(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 212);
	// addi r6,r10,-26600
	ctx.r6.s64 = ctx.r10.s64 + -26600;
	// li r4,1
	ctx.r4.s64 = 1;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82B028E0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r30,-32768
	ctx.r30.s64 = -2147483648;
	// ori r30,r30,16389
	ctx.r30.u64 = ctx.r30.u64 | 16389;
	// stw r30,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r30.u32);
loc_82B028EC:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_82B028F0:
	// addi r1,r31,144
	ctx.r1.s64 = ctx.r31.s64 + 144;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B028C0"))) PPC_WEAK_FUNC(sub_82B028C0);
PPC_FUNC_IMPL(__imp__sub_82B028C0) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,220(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 220);
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// li r5,47
	ctx.r5.s64 = 47;
	// lwz r3,212(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 212);
	// addi r6,r10,-26600
	ctx.r6.s64 = ctx.r10.s64 + -26600;
	// li r4,1
	ctx.r4.s64 = 1;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82B028E0;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r30,-32768
	ctx.r30.s64 = -2147483648;
	// ori r30,r30,16389
	ctx.r30.u64 = ctx.r30.u64 | 16389;
	// stw r30,96(r31)
	PPC_STORE_U32(ctx.r31.u32 + 96, ctx.r30.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r31,144
	ctx.r1.s64 = ctx.r31.s64 + 144;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B028F8"))) PPC_WEAK_FUNC(sub_82B028F8);
PPC_FUNC_IMPL(__imp__sub_82B028F8) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B02904"))) PPC_WEAK_FUNC(sub_82B02904);
PPC_FUNC_IMPL(__imp__sub_82B02904) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B02908"))) PPC_WEAK_FUNC(sub_82B02908);
PPC_FUNC_IMPL(__imp__sub_82B02908) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7664
	ctx.lr = 0x82B02910;
	__savegprlr_23(ctx, base);
	// stwu r1,-720(r1)
	ea = -720 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// lis r4,9351
	ctx.r4.s64 = 612827136;
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// mr r23,r5
	ctx.r23.u64 = ctx.r5.u64;
	// mr r30,r6
	ctx.r30.u64 = ctx.r6.u64;
	// mr r25,r7
	ctx.r25.u64 = ctx.r7.u64;
	// mr r24,r8
	ctx.r24.u64 = ctx.r8.u64;
	// mr r29,r9
	ctx.r29.u64 = ctx.r9.u64;
	// mr r28,r10
	ctx.r28.u64 = ctx.r10.u64;
	// bl 0x82691410
	ctx.lr = 0x82B02940;
	sub_82691410(ctx, base);
	// mr. r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x82b02954
	if (!ctx.cr0.eq) goto loc_82B02954;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x82b02ab8
	goto loc_82B02AB8;
loc_82B02954:
	// lwz r3,804(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 804);
	// mr r10,r28
	ctx.r10.u64 = ctx.r28.u64;
	// lwz r11,812(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 812);
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
	// mr r8,r24
	ctx.r8.u64 = ctx.r24.u64;
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// stw r3,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r3.u32);
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82b02808
	ctx.lr = 0x82B02988;
	sub_82B02808(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt 0x82b029a0
	if (ctx.cr0.lt) goto loc_82B029A0;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// lwz r5,0(r25)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82668f78
	ctx.lr = 0x82B029A0;
	sub_82668F78(ctx, base);
loc_82B029A0:
	// lis r4,9351
	ctx.r4.s64 = 612827136;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82691460
	ctx.lr = 0x82B029AC;
	sub_82691460(ctx, base);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt cr6,0x82b02ab4
	if (ctx.cr6.lt) goto loc_82B02AB4;
	// rlwinm. r11,r24,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r24.u32 | (ctx.r24.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82b02ab4
	if (!ctx.cr0.eq) goto loc_82B02AB4;
	// li r31,0
	ctx.r31.s64 = 0;
	// lwz r11,820(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 820);
	// lis r10,-32080
	ctx.r10.s64 = -2102394880;
	// lwz r4,0(r25)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// stw r31,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r31.u32);
	// rlwinm r27,r11,10,15,21
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 10) & 0x1FC00;
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// addi r7,r10,-3592
	ctx.r7.s64 = ctx.r10.s64 + -3592;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x822d6f30
	ctx.lr = 0x82B029EC;
	sub_822D6F30(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt 0x82b02a00
	if (ctx.cr0.lt) goto loc_82B02A00;
	// lwz r11,96(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82b02ab4
	if (ctx.cr6.eq) goto loc_82B02AB4;
loc_82B02A00:
	// rlwinm r4,r30,1,31,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0x1;
	// stw r29,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r29.u32);
	// stw r28,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r28.u32);
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// cntlzw r11,r4
	ctx.r11.u64 = ctx.r4.u32 == 0 ? 32 : __builtin_clz(ctx.r4.u32);
	// stw r4,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r4.u32);
	// sth r31,120(r1)
	PPC_STORE_U16(ctx.r1.u32 + 120, ctx.r31.u16);
	// mtctr r28
	ctx.ctr.u64 = ctx.r28.u64;
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r5,r11,7101
	ctx.r5.s64 = ctx.r11.s64 + 7101;
	// bge cr6,0x82b02a3c
	if (!ctx.cr6.lt) goto loc_82B02A3C;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r6,r10,24384
	ctx.r6.s64 = ctx.r10.s64 + 24384;
	// b 0x82b02a44
	goto loc_82B02A44;
loc_82B02A3C:
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// addi r6,r10,24332
	ctx.r6.s64 = ctx.r10.s64 + 24332;
loc_82B02A44:
	// bctrl 
	ctx.lr = 0x82B02A48;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32080
	ctx.r11.s64 = -2102394880;
	// addi r8,r1,112
	ctx.r8.s64 = ctx.r1.s64 + 112;
	// lwz r4,0(r25)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// addi r7,r11,2352
	ctx.r7.s64 = ctx.r11.s64 + 2352;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x822d6f30
	ctx.lr = 0x82B02A68;
	sub_822D6F30(ctx, base);
	// lhz r11,120(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 120);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82b02a7c
	if (ctx.cr0.eq) goto loc_82B02A7C;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82b00850
	ctx.lr = 0x82B02A7C;
	sub_82B00850(ctx, base);
loc_82B02A7C:
	// lis r11,-32080
	ctx.r11.s64 = -2102394880;
	// lwz r4,0(r25)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// li r9,0
	ctx.r9.s64 = 0;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// addi r6,r11,2352
	ctx.r6.s64 = ctx.r11.s64 + 2352;
	// li r5,68
	ctx.r5.s64 = 68;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// bl 0x82b041f0
	ctx.lr = 0x82B02AA0;
	sub_82B041F0(ctx, base);
	// lhz r11,120(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 120);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82b02ab4
	if (ctx.cr0.eq) goto loc_82B02AB4;
	// addi r3,r1,112
	ctx.r3.s64 = ctx.r1.s64 + 112;
	// bl 0x82b00850
	ctx.lr = 0x82B02AB4;
	sub_82B00850(ctx, base);
loc_82B02AB4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_82B02AB8:
	// addi r1,r1,720
	ctx.r1.s64 = ctx.r1.s64 + 720;
	// b 0x82fa76b4
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B02AC0"))) PPC_WEAK_FUNC(sub_82B02AC0);
PPC_FUNC_IMPL(__imp__sub_82B02AC0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa766c
	ctx.lr = 0x82B02AC8;
	__savegprlr_25(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// li r5,80
	ctx.r5.s64 = 80;
	// li r4,0
	ctx.r4.s64 = 0;
	// lfs f0,5184(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5184);
	ctx.f0.f64 = double(temp.f32);
	// addi r3,r1,100
	ctx.r3.s64 = ctx.r1.s64 + 100;
	// stfs f0,96(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 96, temp.u32);
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
	// bl 0x82fa7cf0
	ctx.lr = 0x82B02AF8;
	sub_82FA7CF0(ctx, base);
	// addi r5,r1,96
	ctx.r5.s64 = ctx.r1.s64 + 96;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82b1c5f0
	ctx.lr = 0x82B02B08;
	sub_82B1C5F0(ctx, base);
	// addi r11,r30,-1
	ctx.r11.s64 = ctx.r30.s64 + -1;
	// lfs f0,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f0.f64 = double(temp.f32);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// fcmpu cr6,f0,f0
	ctx.cr6.compare(ctx.f0.f64, ctx.f0.f64);
	// rlwinm r25,r11,27,31,31
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// bne cr6,0x82b0313c
	if (!ctx.cr6.eq) goto loc_82B0313C;
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// beq cr6,0x82b02b34
	if (ctx.cr6.eq) goto loc_82B02B34;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r5,r11,18368
	ctx.r5.s64 = ctx.r11.s64 + 18368;
	// b 0x82b02b3c
	goto loc_82B02B3C;
loc_82B02B34:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r5,r11,18360
	ctx.r5.s64 = ctx.r11.s64 + 18360;
loc_82B02B3C:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-25068
	ctx.r4.s64 = ctx.r11.s64 + -25068;
	// bl 0x82b00938
	ctx.lr = 0x82B02B4C;
	sub_82B00938(ctx, base);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r30,r11,15072
	ctx.r30.s64 = ctx.r11.s64 + 15072;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82b013d0
	ctx.lr = 0x82B02B60;
	sub_82B013D0(ctx, base);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r29,r11,5180
	ctx.r29.s64 = ctx.r11.s64 + 5180;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82b00938
	ctx.lr = 0x82B02B74;
	sub_82B00938(ctx, base);
	// lis r11,-32254
	ctx.r11.s64 = -2113798144;
	// lfs f0,96(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	ctx.f0.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f12,100(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	ctx.f12.f64 = double(temp.f32);
	// fmr f1,f0
	ctx.f1.f64 = ctx.f0.f64;
	// fcmpu cr6,f12,f0
	ctx.cr6.compare(ctx.f12.f64, ctx.f0.f64);
	// lfs f13,11968(r11)
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 11968);
	ctx.f13.f64 = double(temp.f32);
	// bne cr6,0x82b02bb8
	if (!ctx.cr6.eq) goto loc_82B02BB8;
	// fmuls f2,f0,f13
	ctx.f2.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfd f0,32(r1)
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.f0.u64);
	// stfd f2,40(r1)
	PPC_STORE_U64(ctx.r1.u32 + 40, ctx.f2.u64);
	// ld r5,32(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 32);
	// ld r6,40(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 40);
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// addi r4,r10,-25104
	ctx.r4.s64 = ctx.r10.s64 + -25104;
	// bl 0x82b00938
	ctx.lr = 0x82B02BB4;
	sub_82B00938(ctx, base);
	// b 0x82b02bf0
	goto loc_82B02BF0;
loc_82B02BB8:
	// fmuls f4,f12,f13
	ctx.fpscr.disableFlushMode();
	ctx.f4.f64 = double(float(ctx.f12.f64 * ctx.f13.f64));
	// stfd f12,40(r1)
	PPC_STORE_U64(ctx.r1.u32 + 40, ctx.f12.u64);
	// stfd f4,56(r1)
	PPC_STORE_U64(ctx.r1.u32 + 56, ctx.f4.u64);
	// ld r8,56(r1)
	ctx.r8.u64 = PPC_LOAD_U64(ctx.r1.u32 + 56);
	// ld r6,40(r1)
	ctx.r6.u64 = PPC_LOAD_U64(ctx.r1.u32 + 40);
	// fmuls f3,f0,f13
	ctx.f3.f64 = double(float(ctx.f0.f64 * ctx.f13.f64));
	// stfd f1,32(r1)
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.f1.u64);
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// stfd f3,48(r1)
	PPC_STORE_U64(ctx.r1.u32 + 48, ctx.f3.u64);
	// fmr f2,f12
	ctx.f2.f64 = ctx.f12.f64;
	// addi r4,r10,-25152
	ctx.r4.s64 = ctx.r10.s64 + -25152;
	// ld r5,32(r1)
	ctx.r5.u64 = PPC_LOAD_U64(ctx.r1.u32 + 32);
	// ld r7,48(r1)
	ctx.r7.u64 = PPC_LOAD_U64(ctx.r1.u32 + 48);
	// bl 0x82b00938
	ctx.lr = 0x82B02BF0;
	sub_82B00938(ctx, base);
loc_82B02BF0:
	// lfs f0,116(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	ctx.f0.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f13,120(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f0.f64));
	// bne cr6,0x82b02c20
	if (!ctx.cr6.eq) goto loc_82B02C20;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lwz r5,84(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r4,r11,-25168
	ctx.r4.s64 = ctx.r11.s64 + -25168;
	// bl 0x82b00938
	ctx.lr = 0x82B02C1C;
	sub_82B00938(ctx, base);
	// b 0x82b02c40
	goto loc_82B02C40;
loc_82B02C20:
	// stfd f0,80(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// fctiwz f13,f13
	ctx.f13.s64 = (ctx.f13.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f13.f64));
	// stfd f13,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f13.u64);
	// addi r4,r11,-25184
	ctx.r4.s64 = ctx.r11.s64 + -25184;
	// lwz r6,92(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r5,84(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x82b00938
	ctx.lr = 0x82B02C40;
	sub_82B00938(ctx, base);
loc_82B02C40:
	// lfs f0,108(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	ctx.f0.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfs f13,112(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	ctx.f13.f64 = double(temp.f32);
	// fcmpu cr6,f13,f0
	ctx.cr6.compare(ctx.f13.f64, ctx.f0.f64);
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f0.f64));
	// bne cr6,0x82b02c70
	if (!ctx.cr6.eq) goto loc_82B02C70;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// stfd f0,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f0.u64);
	// lwz r5,92(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// addi r4,r11,-25200
	ctx.r4.s64 = ctx.r11.s64 + -25200;
	// bl 0x82b00938
	ctx.lr = 0x82B02C6C;
	sub_82B00938(ctx, base);
	// b 0x82b02c90
	goto loc_82B02C90;
loc_82B02C70:
	// fctiwz f13,f13
	ctx.fpscr.disableFlushMode();
	ctx.f13.s64 = (ctx.f13.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f13.f64));
	// stfd f13,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f13.u64);
	// stfd f0,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f0.u64);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r4,r11,-25220
	ctx.r4.s64 = ctx.r11.s64 + -25220;
	// lwz r6,92(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r5,84(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x82b00938
	ctx.lr = 0x82B02C90;
	sub_82B00938(ctx, base);
loc_82B02C90:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b013d0
	ctx.lr = 0x82B02C9C;
	sub_82B013D0(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b00938
	ctx.lr = 0x82B02CA8;
	sub_82B00938(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-25224
	ctx.r4.s64 = ctx.r11.s64 + -25224;
	// bl 0x82b00938
	ctx.lr = 0x82B02CB8;
	sub_82B00938(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lfs f0,124(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	ctx.f0.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f0.f64));
	// addi r4,r11,-25244
	ctx.r4.s64 = ctx.r11.s64 + -25244;
	// stfd f0,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f0.u64);
	// lwz r5,92(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// bl 0x82b00938
	ctx.lr = 0x82B02CD8;
	sub_82B00938(ctx, base);
	// lis r11,-32231
	ctx.r11.s64 = -2112290816;
	// lis r10,-32253
	ctx.r10.s64 = -2113732608;
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// addi r28,r11,32570
	ctx.r28.s64 = ctx.r11.s64 + 32570;
	// addi r27,r10,-17892
	ctx.r27.s64 = ctx.r10.s64 + -17892;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bne cr6,0x82b02d38
	if (!ctx.cr6.eq) goto loc_82B02D38;
	// lfs f0,104(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	ctx.f0.f64 = double(temp.f32);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f0.f64));
	// stfd f0,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f0.u64);
	// addi r4,r11,-25268
	ctx.r4.s64 = ctx.r11.s64 + -25268;
	// lwz r5,92(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// bl 0x82b00938
	ctx.lr = 0x82B02D10;
	sub_82B00938(ctx, base);
	// lwz r10,160(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// li r11,64
	ctx.r11.s64 = 64;
	// addi r5,r10,1
	ctx.r5.s64 = ctx.r10.s64 + 1;
	// divw r11,r11,r5
	ctx.r11.s32 = ctx.r11.s32 / ctx.r5.s32;
	// twllei r5,0
	if (ctx.r5.u32 <= 0) __builtin_debugtrap();
	// mulli r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 * 3;
	// cmpwi cr6,r11,63
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 63, ctx.xer);
	// ble cr6,0x82b02d6c
	if (!ctx.cr6.gt) goto loc_82B02D6C;
	// li r26,63
	ctx.r26.s64 = 63;
	// b 0x82b02d7c
	goto loc_82B02D7C;
loc_82B02D38:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r4,r11,4404
	ctx.r4.s64 = ctx.r11.s64 + 4404;
	// bl 0x82b00938
	ctx.lr = 0x82B02D44;
	sub_82B00938(ctx, base);
	// lwz r10,160(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// li r11,64
	ctx.r11.s64 = 64;
	// addi r5,r10,1
	ctx.r5.s64 = ctx.r10.s64 + 1;
	// divw r11,r11,r5
	ctx.r11.s32 = ctx.r11.s32 / ctx.r5.s32;
	// twllei r5,0
	if (ctx.r5.u32 <= 0) __builtin_debugtrap();
	// mulli r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 * 3;
	// cmpwi cr6,r11,31
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 31, ctx.xer);
	// ble cr6,0x82b02d6c
	if (!ctx.cr6.gt) goto loc_82B02D6C;
	// li r26,31
	ctx.r26.s64 = 31;
	// b 0x82b02d7c
	goto loc_82B02D7C;
loc_82B02D6C:
	// mr r26,r11
	ctx.r26.u64 = ctx.r11.u64;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// beq cr6,0x82b02d80
	if (ctx.cr6.eq) goto loc_82B02D80;
loc_82B02D7C:
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
loc_82B02D80:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// bne cr6,0x82b02d90
	if (!ctx.cr6.eq) goto loc_82B02D90;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
loc_82B02D90:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// addi r4,r11,-25292
	ctx.r4.s64 = ctx.r11.s64 + -25292;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b00938
	ctx.lr = 0x82B02DA4;
	sub_82B00938(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b013d0
	ctx.lr = 0x82B02DB0;
	sub_82B013D0(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b00938
	ctx.lr = 0x82B02DBC;
	sub_82B00938(ctx, base);
	// lfs f0,128(r1)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	ctx.f0.f64 = double(temp.f32);
	// lfs f13,132(r1)
	temp.u32 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	ctx.f13.f64 = double(temp.f32);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// fcmpu cr6,f0,f13
	ctx.cr6.compare(ctx.f0.f64, ctx.f13.f64);
	// fctiwz f0,f0
	ctx.f0.s64 = (ctx.f0.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f0.f64));
	// bne cr6,0x82b02dec
	if (!ctx.cr6.eq) goto loc_82B02DEC;
	// stfd f0,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f0.u64);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r4,r11,-25352
	ctx.r4.s64 = ctx.r11.s64 + -25352;
	// lwz r5,92(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// bl 0x82b00938
	ctx.lr = 0x82B02DE8;
	sub_82B00938(ctx, base);
	// b 0x82b02e0c
	goto loc_82B02E0C;
loc_82B02DEC:
	// fctiwz f13,f13
	ctx.fpscr.disableFlushMode();
	ctx.f13.s64 = (ctx.f13.f64 > double(INT_MAX)) ? INT_MAX : _mm_cvttsd_si32(_mm_load_sd(&ctx.f13.f64));
	// stfd f13,80(r1)
	PPC_STORE_U64(ctx.r1.u32 + 80, ctx.f13.u64);
	// stfd f0,88(r1)
	PPC_STORE_U64(ctx.r1.u32 + 88, ctx.f0.u64);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r4,r11,-25416
	ctx.r4.s64 = ctx.r11.s64 + -25416;
	// lwz r6,84(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r5,92(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// bl 0x82b00938
	ctx.lr = 0x82B02E0C;
	sub_82B00938(ctx, base);
loc_82B02E0C:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b013d0
	ctx.lr = 0x82B02E18;
	sub_82B013D0(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b00938
	ctx.lr = 0x82B02E24;
	sub_82B00938(ctx, base);
	// lwz r11,136(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82b02e80
	if (ctx.cr6.eq) goto loc_82B02E80;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-25496
	ctx.r4.s64 = ctx.r11.s64 + -25496;
	// bl 0x82b00938
	ctx.lr = 0x82B02E40;
	sub_82B00938(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b013d0
	ctx.lr = 0x82B02E4C;
	sub_82B013D0(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b00938
	ctx.lr = 0x82B02E58;
	sub_82B00938(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-25520
	ctx.r4.s64 = ctx.r11.s64 + -25520;
	// bl 0x82b00938
	ctx.lr = 0x82B02E68;
	sub_82B00938(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b013d0
	ctx.lr = 0x82B02E74;
	sub_82B013D0(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b00938
	ctx.lr = 0x82B02E80;
	sub_82B00938(ctx, base);
loc_82B02E80:
	// lwz r11,140(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82b02edc
	if (ctx.cr6.eq) goto loc_82B02EDC;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-25600
	ctx.r4.s64 = ctx.r11.s64 + -25600;
	// bl 0x82b00938
	ctx.lr = 0x82B02E9C;
	sub_82B00938(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b013d0
	ctx.lr = 0x82B02EA8;
	sub_82B013D0(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b00938
	ctx.lr = 0x82B02EB4;
	sub_82B00938(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-25672
	ctx.r4.s64 = ctx.r11.s64 + -25672;
	// bl 0x82b00938
	ctx.lr = 0x82B02EC4;
	sub_82B00938(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b013d0
	ctx.lr = 0x82B02ED0;
	sub_82B013D0(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b00938
	ctx.lr = 0x82B02EDC;
	sub_82B00938(ctx, base);
loc_82B02EDC:
	// lwz r11,144(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 144);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82b02f10
	if (ctx.cr6.eq) goto loc_82B02F10;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-25760
	ctx.r4.s64 = ctx.r11.s64 + -25760;
	// bl 0x82b00938
	ctx.lr = 0x82B02EF8;
	sub_82B00938(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b013d0
	ctx.lr = 0x82B02F04;
	sub_82B013D0(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b00938
	ctx.lr = 0x82B02F10;
	sub_82B00938(ctx, base);
loc_82B02F10:
	// lwz r11,148(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82b02f44
	if (ctx.cr6.eq) goto loc_82B02F44;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-25832
	ctx.r4.s64 = ctx.r11.s64 + -25832;
	// bl 0x82b00938
	ctx.lr = 0x82B02F2C;
	sub_82B00938(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b013d0
	ctx.lr = 0x82B02F38;
	sub_82B013D0(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b00938
	ctx.lr = 0x82B02F44;
	sub_82B00938(ctx, base);
loc_82B02F44:
	// lwz r11,152(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 152);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82b02fa0
	if (ctx.cr6.eq) goto loc_82B02FA0;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-25912
	ctx.r4.s64 = ctx.r11.s64 + -25912;
	// bl 0x82b00938
	ctx.lr = 0x82B02F60;
	sub_82B00938(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b013d0
	ctx.lr = 0x82B02F6C;
	sub_82B013D0(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b00938
	ctx.lr = 0x82B02F78;
	sub_82B00938(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-25952
	ctx.r4.s64 = ctx.r11.s64 + -25952;
	// bl 0x82b00938
	ctx.lr = 0x82B02F88;
	sub_82B00938(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b013d0
	ctx.lr = 0x82B02F94;
	sub_82B013D0(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b00938
	ctx.lr = 0x82B02FA0;
	sub_82B00938(ctx, base);
loc_82B02FA0:
	// lwz r11,156(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 156);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82b02ffc
	if (ctx.cr6.eq) goto loc_82B02FFC;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-26032
	ctx.r4.s64 = ctx.r11.s64 + -26032;
	// bl 0x82b00938
	ctx.lr = 0x82B02FBC;
	sub_82B00938(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b013d0
	ctx.lr = 0x82B02FC8;
	sub_82B013D0(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b00938
	ctx.lr = 0x82B02FD4;
	sub_82B00938(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-26080
	ctx.r4.s64 = ctx.r11.s64 + -26080;
	// bl 0x82b00938
	ctx.lr = 0x82B02FE4;
	sub_82B00938(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b013d0
	ctx.lr = 0x82B02FF0;
	sub_82B013D0(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b00938
	ctx.lr = 0x82B02FFC;
	sub_82B00938(ctx, base);
loc_82B02FFC:
	// cmplwi cr6,r26,9
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 9, ctx.xer);
	// beq cr6,0x82b0300c
	if (ctx.cr6.eq) goto loc_82B0300C;
	// cmplwi cr6,r26,6
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 6, ctx.xer);
	// bne cr6,0x82b03034
	if (!ctx.cr6.eq) goto loc_82B03034;
loc_82B0300C:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-26160
	ctx.r4.s64 = ctx.r11.s64 + -26160;
	// bl 0x82b00938
	ctx.lr = 0x82B0301C;
	sub_82B00938(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b013d0
	ctx.lr = 0x82B03028;
	sub_82B013D0(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b00938
	ctx.lr = 0x82B03034;
	sub_82B00938(ctx, base);
loc_82B03034:
	// cmplwi cr6,r26,3
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 3, ctx.xer);
	// bne cr6,0x82b03124
	if (!ctx.cr6.eq) goto loc_82B03124;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-26240
	ctx.r4.s64 = ctx.r11.s64 + -26240;
	// bl 0x82b00938
	ctx.lr = 0x82B0304C;
	sub_82B00938(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b013d0
	ctx.lr = 0x82B03058;
	sub_82B013D0(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b00938
	ctx.lr = 0x82B03064;
	sub_82B00938(ctx, base);
	// lwz r11,160(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 160);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmpwi cr6,r11,56
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 56, ctx.xer);
	// ble cr6,0x82b03084
	if (!ctx.cr6.gt) goto loc_82B03084;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r4,r11,-26304
	ctx.r4.s64 = ctx.r11.s64 + -26304;
	// b 0x82b0308c
	goto loc_82B0308C;
loc_82B03084:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r4,r11,-26360
	ctx.r4.s64 = ctx.r11.s64 + -26360;
loc_82B0308C:
	// bl 0x82b00938
	ctx.lr = 0x82B03090;
	sub_82B00938(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b013d0
	ctx.lr = 0x82B0309C;
	sub_82B013D0(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b00938
	ctx.lr = 0x82B030A8;
	sub_82B00938(ctx, base);
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// beq cr6,0x82b030bc
	if (ctx.cr6.eq) goto loc_82B030BC;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r5,r11,-26380
	ctx.r5.s64 = ctx.r11.s64 + -26380;
	// b 0x82b030c4
	goto loc_82B030C4;
loc_82B030BC:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r5,r11,-26400
	ctx.r5.s64 = ctx.r11.s64 + -26400;
loc_82B030C4:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-26448
	ctx.r4.s64 = ctx.r11.s64 + -26448;
	// bl 0x82b00938
	ctx.lr = 0x82B030D4;
	sub_82B00938(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b013d0
	ctx.lr = 0x82B030E0;
	sub_82B013D0(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b00938
	ctx.lr = 0x82B030EC;
	sub_82B00938(ctx, base);
	// subfic r11,r25,0
	ctx.xer.ca = ctx.r25.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r25.s64;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// addi r4,r10,-26484
	ctx.r4.s64 = ctx.r10.s64 + -26484;
	// rlwinm r11,r11,0,29,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x6;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r5,r11,80
	ctx.r5.s64 = ctx.r11.s64 + 80;
	// bl 0x82b00938
	ctx.lr = 0x82B0310C;
	sub_82B00938(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b013d0
	ctx.lr = 0x82B03118;
	sub_82B013D0(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b00938
	ctx.lr = 0x82B03124;
	sub_82B00938(ctx, base);
loc_82B03124:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b013d0
	ctx.lr = 0x82B03130;
	sub_82B013D0(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b00938
	ctx.lr = 0x82B0313C;
	sub_82B00938(ctx, base);
loc_82B0313C:
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x82fa76bc
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B03148"))) PPC_WEAK_FUNC(sub_82B03148);
PPC_FUNC_IMPL(__imp__sub_82B03148) {
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
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// addi r4,r11,15188
	ctx.r4.s64 = ctx.r11.s64 + 15188;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82b013d0
	ctx.lr = 0x82B03170;
	sub_82B013D0(ctx, base);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-24420
	ctx.r4.s64 = ctx.r11.s64 + -24420;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x82b00938
	ctx.lr = 0x82B03184;
	sub_82B00938(ctx, base);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,15204
	ctx.r4.s64 = ctx.r11.s64 + 15204;
	// bl 0x82b013d0
	ctx.lr = 0x82B03194;
	sub_82B013D0(ctx, base);
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

__attribute__((alias("__imp__sub_82B031AC"))) PPC_WEAK_FUNC(sub_82B031AC);
PPC_FUNC_IMPL(__imp__sub_82B031AC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B031B0"))) PPC_WEAK_FUNC(sub_82B031B0);
PPC_FUNC_IMPL(__imp__sub_82B031B0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7640
	ctx.lr = 0x82B031B8;
	__savegprlr_14(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,-31975
	ctx.r11.s64 = -2095513600;
	// lbz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r9.u32 + 0);
	// stw r8,316(r1)
	PPC_STORE_U32(ctx.r1.u32 + 316, ctx.r8.u32);
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// stw r9,324(r1)
	PPC_STORE_U32(ctx.r1.u32 + 324, ctx.r9.u32);
	// addi r8,r11,3968
	ctx.r8.s64 = ctx.r11.s64 + 3968;
	// rlwinm r9,r4,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r4,284(r1)
	PPC_STORE_U32(ctx.r1.u32 + 284, ctx.r4.u32);
	// lis r11,-31975
	ctx.r11.s64 = -2095513600;
	// stw r5,292(r1)
	PPC_STORE_U32(ctx.r1.u32 + 292, ctx.r5.u32);
	// stb r10,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r10.u8);
	// li r7,18
	ctx.r7.s64 = 18;
	// addi r11,r11,3216
	ctx.r11.s64 = ctx.r11.s64 + 3216;
	// stw r6,300(r1)
	PPC_STORE_U32(ctx.r1.u32 + 300, ctx.r6.u32);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// lwzx r10,r9,r8
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r8.u32);
	// addi r14,r11,20
	ctx.r14.s64 = ctx.r11.s64 + 20;
	// lis r30,-31975
	ctx.r30.s64 = -2095513600;
	// lis r29,-32227
	ctx.r29.s64 = -2112028672;
	// lis r31,-32227
	ctx.r31.s64 = -2112028672;
	// lis r3,-32227
	ctx.r3.s64 = -2112028672;
	// stw r10,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r10.u32);
	// lis r4,-32227
	ctx.r4.s64 = -2112028672;
	// lis r5,-32229
	ctx.r5.s64 = -2112159744;
	// lis r6,-32230
	ctx.r6.s64 = -2112225280;
	// lis r7,-32230
	ctx.r7.s64 = -2112225280;
	// lis r8,-32227
	ctx.r8.s64 = -2112028672;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r25,r30,3680
	ctx.r25.s64 = ctx.r30.s64 + 3680;
	// addi r23,r29,5180
	ctx.r23.s64 = ctx.r29.s64 + 5180;
	// addi r22,r31,15072
	ctx.r22.s64 = ctx.r31.s64 + 15072;
	// addi r18,r3,15204
	ctx.r18.s64 = ctx.r3.s64 + 15204;
	// addi r21,r4,15220
	ctx.r21.s64 = ctx.r4.s64 + 15220;
	// addi r20,r5,26556
	ctx.r20.s64 = ctx.r5.s64 + 26556;
	// addi r17,r6,-30212
	ctx.r17.s64 = ctx.r6.s64 + -30212;
	// addi r16,r7,-30204
	ctx.r16.s64 = ctx.r7.s64 + -30204;
	// addi r27,r8,-24420
	ctx.r27.s64 = ctx.r8.s64 + -24420;
	// addi r24,r9,-25016
	ctx.r24.s64 = ctx.r9.s64 + -25016;
	// addi r19,r10,-25224
	ctx.r19.s64 = ctx.r10.s64 + -25224;
	// addi r15,r11,5732
	ctx.r15.s64 = ctx.r11.s64 + 5732;
loc_82B03268:
	// lwz r7,284(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 284);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x82b03280
	if (ctx.cr6.eq) goto loc_82B03280;
	// lwz r11,-4(r14)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r14.u32 + -4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82b034e8
	if (ctx.cr6.eq) goto loc_82B034E8;
loc_82B03280:
	// lbz r9,0(r14)
	ctx.r9.u64 = PPC_LOAD_U8(ctx.r14.u32 + 0);
	// li r31,0
	ctx.r31.s64 = 0;
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi cr6,r9,17
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 17, ctx.xer);
	// bgt cr6,0x82b0336c
	if (ctx.cr6.gt) goto loc_82B0336C;
	// lis r12,-32242
	ctx.r12.s64 = -2113011712;
	// addi r12,r12,-27448
	ctx.r12.s64 = ctx.r12.s64 + -27448;
	// lbzx r0,r12,r9
	ctx.r0.u64 = PPC_LOAD_U8(ctx.r12.u32 + ctx.r9.u32);
	// lis r12,-32080
	ctx.r12.s64 = -2102394880;
	// nop 
	// addi r12,r12,12988
	ctx.r12.s64 = ctx.r12.s64 + 12988;
	// nop 
	// add r12,r12,r0
	ctx.r12.u64 = ctx.r12.u64 + ctx.r0.u64;
	// mtctr r12
	ctx.ctr.u64 = ctx.r12.u64;
	// bctr 
	switch (ctx.r9.u64) {
	case 0:
		goto loc_82B032BC;
	case 1:
		goto loc_82B032C4;
	case 2:
		goto loc_82B032CC;
	case 3:
		goto loc_82B032D4;
	case 4:
		goto loc_82B032DC;
	case 5:
		goto loc_82B032E4;
	case 6:
		goto loc_82B032F0;
	case 7:
		goto loc_82B032F8;
	case 8:
		goto loc_82B03300;
	case 9:
		goto loc_82B03308;
	case 10:
		goto loc_82B03310;
	case 11:
		goto loc_82B03318;
	case 12:
		goto loc_82B03324;
	case 13:
		goto loc_82B03334;
	case 14:
		goto loc_82B03340;
	case 15:
		goto loc_82B0334C;
	case 16:
		goto loc_82B03358;
	case 17:
		goto loc_82B03364;
	default:
		__builtin_unreachable();
	}
loc_82B032BC:
	// clrlwi r31,r26,26
	ctx.r31.u64 = ctx.r26.u32 & 0x3F;
	// b 0x82b0336c
	goto loc_82B0336C;
loc_82B032C4:
	// rlwinm r31,r26,24,26,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 24) & 0x3F;
	// b 0x82b0336c
	goto loc_82B0336C;
loc_82B032CC:
	// rlwinm r31,r26,16,31,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 16) & 0x1;
	// b 0x82b0336c
	goto loc_82B0336C;
loc_82B032D4:
	// rlwinm r31,r26,15,31,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 15) & 0x1;
	// b 0x82b0336c
	goto loc_82B0336C;
loc_82B032DC:
	// rlwinm r31,r26,14,31,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 14) & 0x1;
	// b 0x82b0336c
	goto loc_82B0336C;
loc_82B032E4:
	// rlwinm r31,r26,13,31,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 13) & 0x1;
loc_82B032E8:
	// li r29,1
	ctx.r29.s64 = 1;
	// b 0x82b0336c
	goto loc_82B0336C;
loc_82B032F0:
	// rlwinm r31,r26,12,28,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 12) & 0xF;
	// b 0x82b0336c
	goto loc_82B0336C;
loc_82B032F8:
	// rlwinm r31,r26,8,29,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 8) & 0x7;
	// b 0x82b0336c
	goto loc_82B0336C;
loc_82B03300:
	// rlwinm r31,r26,5,31,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 5) & 0x1;
	// b 0x82b032e8
	goto loc_82B032E8;
loc_82B03308:
	// rlwinm r31,r26,4,29,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 4) & 0x7;
	// b 0x82b0336c
	goto loc_82B0336C;
loc_82B03310:
	// rlwinm r31,r26,1,31,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 1) & 0x1;
	// b 0x82b032e8
	goto loc_82B032E8;
loc_82B03318:
	// lwz r11,316(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 316);
	// clrlwi r31,r11,31
	ctx.r31.u64 = ctx.r11.u32 & 0x1;
	// b 0x82b0336c
	goto loc_82B0336C;
loc_82B03324:
	// lwz r11,316(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 316);
	// li r29,1
	ctx.r29.s64 = 1;
	// rlwinm r31,r11,31,31,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x1;
	// b 0x82b0336c
	goto loc_82B0336C;
loc_82B03334:
	// lwz r11,316(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 316);
	// rlwinm r31,r11,30,30,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3;
	// b 0x82b0336c
	goto loc_82B0336C;
loc_82B03340:
	// lwz r11,316(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 316);
	// rlwinm r31,r11,24,24,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xFF;
	// b 0x82b0336c
	goto loc_82B0336C;
loc_82B0334C:
	// lwz r11,316(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 316);
	// rlwinm r31,r11,16,31,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0x1;
	// b 0x82b0336c
	goto loc_82B0336C;
loc_82B03358:
	// lwz r11,316(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 316);
	// rlwinm r31,r11,15,31,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 15) & 0x1;
	// b 0x82b0336c
	goto loc_82B0336C;
loc_82B03364:
	// lwz r11,316(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 316);
	// rlwinm r31,r11,14,31,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 14) & 0x1;
loc_82B0336C:
	// lwz r11,292(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 292);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82b03380
	if (!ctx.cr6.eq) goto loc_82B03380;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82b03384
	if (ctx.cr6.eq) goto loc_82B03384;
loc_82B03380:
	// li r11,1
	ctx.r11.s64 = 1;
loc_82B03384:
	// lwz r8,300(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 300);
	// clrlwi r10,r11,24
	ctx.r10.u64 = ctx.r11.u32 & 0xFF;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x82b033f0
	if (ctx.cr6.eq) goto loc_82B033F0;
	// lwz r11,-12(r14)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r14.u32 + -12);
loc_82B03398:
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82b033f8
	if (!ctx.cr6.eq) goto loc_82B033F8;
loc_82B033A0:
	// lwz r6,-8(r14)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r14.u32 + -8);
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq cr6,0x82b033b8
	if (ctx.cr6.eq) goto loc_82B033B8;
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// bne 0x82b033bc
	if (!ctx.cr0.eq) goto loc_82B033BC;
loc_82B033B8:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82B033BC:
	// clrlwi r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// beq cr6,0x82b033cc
	if (ctx.cr6.eq) goto loc_82B033CC;
	// li r11,1
	ctx.r11.s64 = 1;
loc_82B033CC:
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x82b03404
	if (ctx.cr6.eq) goto loc_82B03404;
	// cmplwi cr6,r9,14
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 14, ctx.xer);
	// bne cr6,0x82b03404
	if (!ctx.cr6.eq) goto loc_82B03404;
	// rlwinm. r11,r26,0,13,13
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 0) & 0x40000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82b03400
	if (ctx.cr0.eq) goto loc_82B03400;
	// li r10,1
	ctx.r10.s64 = 1;
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82b03404
	goto loc_82B03404;
loc_82B033F0:
	// lwz r11,-16(r14)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r14.u32 + -16);
	// b 0x82b03398
	goto loc_82B03398;
loc_82B033F8:
	// li r11,1
	ctx.r11.s64 = 1;
	// b 0x82b033a0
	goto loc_82B033A0;
loc_82B03400:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82B03404:
	// clrlwi. r10,r10,24
	ctx.r10.u64 = ctx.r10.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82b034e8
	if (ctx.cr0.eq) goto loc_82B034E8;
	// clrlwi. r30,r11,24
	ctx.r30.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// beq 0x82b0342c
	if (ctx.cr0.eq) goto loc_82B0342C;
	// mr r4,r15
	ctx.r4.u64 = ctx.r15.u64;
	// bl 0x82b03148
	ctx.lr = 0x82B03428;
	sub_82B03148(ctx, base);
	// b 0x82b03440
	goto loc_82B03440;
loc_82B0342C:
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// bl 0x82b013d0
	ctx.lr = 0x82B03434;
	sub_82B013D0(ctx, base);
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82b00938
	ctx.lr = 0x82B03440;
	sub_82B00938(ctx, base);
loc_82B03440:
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// lwz r6,-20(r14)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r14.u32 + -20);
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// lwz r5,88(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x82b00938
	ctx.lr = 0x82B03454;
	sub_82B00938(ctx, base);
	// lbz r11,0(r14)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r14.u32 + 0);
	// cmplwi cr6,r11,7
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 7, ctx.xer);
	// bne cr6,0x82b03474
	if (!ctx.cr6.eq) goto loc_82B03474;
	// addi r11,r25,-32
	ctx.r11.s64 = ctx.r25.s64 + -32;
	// rlwinm r10,r31,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwzx r5,r10,r11
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// b 0x82b034b4
	goto loc_82B034B4;
loc_82B03474:
	// cmplwi cr6,r11,13
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 13, ctx.xer);
	// bne cr6,0x82b0348c
	if (!ctx.cr6.eq) goto loc_82B0348C;
	// rlwinm r11,r31,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// lwzx r5,r11,r25
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r25.u32);
	// b 0x82b034b4
	goto loc_82B034B4;
loc_82B0348C:
	// clrlwi. r11,r29,24
	ctx.r11.u64 = ctx.r29.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82b034ac
	if (ctx.cr0.eq) goto loc_82B034AC;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// mr r5,r16
	ctx.r5.u64 = ctx.r16.u64;
	// bne cr6,0x82b034a4
	if (!ctx.cr6.eq) goto loc_82B034A4;
	// mr r5,r17
	ctx.r5.u64 = ctx.r17.u64;
loc_82B034A4:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// b 0x82b034b4
	goto loc_82B034B4;
loc_82B034AC:
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
loc_82B034B4:
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82b00938
	ctx.lr = 0x82B034BC;
	sub_82B00938(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// bne cr6,0x82b034d0
	if (!ctx.cr6.eq) goto loc_82B034D0;
	// mr r4,r18
	ctx.r4.u64 = ctx.r18.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82b013d0
	ctx.lr = 0x82B034D0;
	sub_82B013D0(ctx, base);
loc_82B034D0:
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82b013d0
	ctx.lr = 0x82B034DC;
	sub_82B013D0(ctx, base);
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82b00938
	ctx.lr = 0x82B034E8;
	sub_82B00938(ctx, base);
loc_82B034E8:
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r14,r14,24
	ctx.r14.s64 = ctx.r14.s64 + 24;
	// addic. r11,r11,-1
	ctx.xer.ca = ctx.r11.u32 > 0;
	ctx.r11.s64 = ctx.r11.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// bne 0x82b03268
	if (!ctx.cr0.eq) goto loc_82B03268;
	// lbz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lwz r10,324(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 324);
	// stb r11,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r11.u8);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x82fa7690
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B03510"))) PPC_WEAK_FUNC(sub_82B03510);
PPC_FUNC_IMPL(__imp__sub_82B03510) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7674
	ctx.lr = 0x82B03518;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r31,r7
	ctx.r31.u64 = ctx.r7.u64;
	// cmplwi cr6,r6,36
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 36, ctx.xer);
	// bge cr6,0x82b0353c
	if (!ctx.cr6.lt) goto loc_82B0353C;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// b 0x82b035ec
	goto loc_82B035EC;
loc_82B0353C:
	// lis r11,-31975
	ctx.r11.s64 = -2095513600;
	// rlwinm r10,r4,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,3976
	ctx.r11.s64 = ctx.r11.s64 + 3976;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwzx r4,r10,r11
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// bl 0x82b03148
	ctx.lr = 0x82B03554;
	sub_82B03148(ctx, base);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r30,r11,15072
	ctx.r30.s64 = ctx.r11.s64 + 15072;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// bl 0x82b013d0
	ctx.lr = 0x82B03568;
	sub_82B013D0(ctx, base);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r29,r11,5180
	ctx.r29.s64 = ctx.r11.s64 + 5180;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// bl 0x82b00938
	ctx.lr = 0x82B0357C;
	sub_82B00938(ctx, base);
	// rlwinm. r11,r28,25,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 25) & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r11,0(r27)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r27.u32 + 0);
	// rlwinm r28,r11,27,31,31
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// bne 0x82b03594
	if (!ctx.cr0.eq) goto loc_82B03594;
	// clrlwi. r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82b035e8
	if (ctx.cr0.eq) goto loc_82B035E8;
loc_82B03594:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,5732
	ctx.r4.s64 = ctx.r11.s64 + 5732;
	// bl 0x82b03148
	ctx.lr = 0x82B035A4;
	sub_82B03148(ctx, base);
	// clrlwi. r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82b035b8
	if (ctx.cr0.eq) goto loc_82B035B8;
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r5,r11,-30204
	ctx.r5.s64 = ctx.r11.s64 + -30204;
	// b 0x82b035c0
	goto loc_82B035C0;
loc_82B035B8:
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r5,r11,-30212
	ctx.r5.s64 = ctx.r11.s64 + -30212;
loc_82B035C0:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-25008
	ctx.r4.s64 = ctx.r11.s64 + -25008;
	// bl 0x82b00938
	ctx.lr = 0x82B035D0;
	sub_82B00938(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b013d0
	ctx.lr = 0x82B035DC;
	sub_82B013D0(ctx, base);
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b00938
	ctx.lr = 0x82B035E8;
	sub_82B00938(ctx, base);
loc_82B035E8:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82B035EC:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B035F4"))) PPC_WEAK_FUNC(sub_82B035F4);
PPC_FUNC_IMPL(__imp__sub_82B035F4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B035F8"))) PPC_WEAK_FUNC(sub_82B035F8);
PPC_FUNC_IMPL(__imp__sub_82B035F8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7640
	ctx.lr = 0x82B03600;
	__savegprlr_14(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r19,r5
	ctx.r19.u64 = ctx.r5.u64;
	// mr r31,r7
	ctx.r31.u64 = ctx.r7.u64;
	// cmplwi cr6,r6,36
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 36, ctx.xer);
	// bge cr6,0x82b03624
	if (!ctx.cr6.lt) goto loc_82B03624;
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
	// b 0x82b03cc4
	goto loc_82B03CC4;
loc_82B03624:
	// addi r11,r8,3
	ctx.r11.s64 = ctx.r8.s64 + 3;
	// cntlzw r10,r4
	ctx.r10.u64 = ctx.r4.u32 == 0 ? 32 : __builtin_clz(ctx.r4.u32);
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// lwzx r11,r11,r19
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r19.u32);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82b03cc0
	if (ctx.cr6.eq) goto loc_82B03CC0;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// add r25,r11,r19
	ctx.r25.u64 = ctx.r11.u64 + ctx.r19.u64;
	// rlwinm r8,r4,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r9,-24600
	ctx.r9.s64 = ctx.r9.s64 + -24600;
	// clrlwi. r20,r10,24
	ctx.r20.u64 = ctx.r10.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r20.s32, 0, ctx.xer);
	// lwzx r11,r8,r9
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r9.u32);
	// lwz r17,20(r25)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r25.u32 + 20);
	// lwz r26,8(r25)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r25.u32 + 8);
	// add r16,r11,r25
	ctx.r16.u64 = ctx.r11.u64 + ctx.r25.u64;
	// lwz r24,12(r25)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r25.u32 + 12);
	// rlwinm r10,r17,15,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r17.u32 | (ctx.r17.u64 << 32), 15) & 0x1;
	// bne 0x82b03674
	if (!ctx.cr0.eq) goto loc_82B03674;
	// rlwinm r10,r17,14,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r17.u32 | (ctx.r17.u64 << 32), 14) & 0x1;
loc_82B03674:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r30,r11,5732
	ctx.r30.s64 = ctx.r11.s64 + 5732;
	// clrlwi r28,r10,24
	ctx.r28.u64 = ctx.r10.u32 & 0xFF;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// rlwinm r29,r27,25,31,31
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 25) & 0x1;
	// bl 0x82b03148
	ctx.lr = 0x82B03690;
	sub_82B03148(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-24624
	ctx.r4.s64 = ctx.r11.s64 + -24624;
	// bl 0x82b00938
	ctx.lr = 0x82B036A0;
	sub_82B00938(ctx, base);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r14,r11,15072
	ctx.r14.s64 = ctx.r11.s64 + 15072;
	// mr r4,r14
	ctx.r4.u64 = ctx.r14.u64;
	// stw r14,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r14.u32);
	// bl 0x82b013d0
	ctx.lr = 0x82B036B8;
	sub_82B013D0(ctx, base);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r22,r11,5180
	ctx.r22.s64 = ctx.r11.s64 + 5180;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// stw r22,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r22.u32);
	// bl 0x82b00938
	ctx.lr = 0x82B036D0;
	sub_82B00938(ctx, base);
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b03148
	ctx.lr = 0x82B036DC;
	sub_82B03148(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-24644
	ctx.r4.s64 = ctx.r11.s64 + -24644;
	// bl 0x82b00938
	ctx.lr = 0x82B036EC;
	sub_82B00938(ctx, base);
	// mr r4,r14
	ctx.r4.u64 = ctx.r14.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b013d0
	ctx.lr = 0x82B036F8;
	sub_82B013D0(ctx, base);
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b00938
	ctx.lr = 0x82B03704;
	sub_82B00938(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// lis r10,-32230
	ctx.r10.s64 = -2112225280;
	// li r15,1
	ctx.r15.s64 = 1;
	// addi r23,r11,-30212
	ctx.r23.s64 = ctx.r11.s64 + -30212;
	// stb r15,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r15.u8);
	// cmplwi r29,0
	ctx.cr0.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// addi r21,r10,-30204
	ctx.r21.s64 = ctx.r10.s64 + -30204;
	// bne 0x82b0372c
	if (!ctx.cr0.eq) goto loc_82B0372C;
	// clrlwi. r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82b03774
	if (ctx.cr0.eq) goto loc_82B03774;
loc_82B0372C:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b03148
	ctx.lr = 0x82B03738;
	sub_82B03148(ctx, base);
	// clrlwi. r11,r28,24
	ctx.r11.u64 = ctx.r28.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// bne 0x82b03748
	if (!ctx.cr0.eq) goto loc_82B03748;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
loc_82B03748:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-24672
	ctx.r4.s64 = ctx.r11.s64 + -24672;
	// bl 0x82b00938
	ctx.lr = 0x82B03758;
	sub_82B00938(ctx, base);
	// mr r4,r14
	ctx.r4.u64 = ctx.r14.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b013d0
	ctx.lr = 0x82B03764;
	sub_82B013D0(ctx, base);
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b00938
	ctx.lr = 0x82B03770;
	sub_82B00938(ctx, base);
	// stb r15,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r15.u8);
loc_82B03774:
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// mr r8,r24
	ctx.r8.u64 = ctx.r24.u64;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// mr r6,r20
	ctx.r6.u64 = ctx.r20.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b031b0
	ctx.lr = 0x82B03794;
	sub_82B031B0(ctx, base);
	// lbz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82b037b8
	if (ctx.cr0.eq) goto loc_82B037B8;
	// mr r4,r14
	ctx.r4.u64 = ctx.r14.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b013d0
	ctx.lr = 0x82B037AC;
	sub_82B013D0(ctx, base);
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b00938
	ctx.lr = 0x82B037B8;
	sub_82B00938(ctx, base);
loc_82B037B8:
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// lis r10,-32227
	ctx.r10.s64 = -2112028672;
	// addi r18,r11,15204
	ctx.r18.s64 = ctx.r11.s64 + 15204;
	// rlwinm. r9,r27,0,23,23
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 0) & 0x100;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// stw r18,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r18.u32);
	// addi r27,r10,15220
	ctx.r27.s64 = ctx.r10.s64 + 15220;
	// beq 0x82b03950
	if (ctx.cr0.eq) goto loc_82B03950;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b013d0
	ctx.lr = 0x82B037E0;
	sub_82B013D0(ctx, base);
	// lwz r11,16(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 16);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x82b037f4
	if (!ctx.cr6.eq) goto loc_82B037F4;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82b03824
	if (ctx.cr6.eq) goto loc_82B03824;
loc_82B037F4:
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// rlwinm r6,r11,16,28,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 16) & 0xF;
	// addi r4,r10,-24732
	ctx.r4.s64 = ctx.r10.s64 + -24732;
	// clrlwi r5,r11,16
	ctx.r5.u64 = ctx.r11.u32 & 0xFFFF;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b00938
	ctx.lr = 0x82B0380C;
	sub_82B00938(ctx, base);
	// mr r4,r14
	ctx.r4.u64 = ctx.r14.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b013d0
	ctx.lr = 0x82B03818;
	sub_82B013D0(ctx, base);
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b00938
	ctx.lr = 0x82B03824;
	sub_82B00938(ctx, base);
loc_82B03824:
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// bne cr6,0x82b03834
	if (!ctx.cr6.eq) goto loc_82B03834;
	// clrlwi. r30,r17,27
	ctx.r30.u64 = ctx.r17.u32 & 0x1F;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x82b0386c
	if (ctx.cr0.eq) goto loc_82B0386C;
loc_82B03834:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// clrlwi r30,r17,27
	ctx.r30.u64 = ctx.r17.u32 & 0x1F;
	// rlwinm r7,r17,22,25,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r17.u32 | (ctx.r17.u64 << 32), 22) & 0x7F;
	// addi r4,r11,-24788
	ctx.r4.s64 = ctx.r11.s64 + -24788;
	// rlwinm r6,r17,27,27,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r17.u32 | (ctx.r17.u64 << 32), 27) & 0x1F;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b00938
	ctx.lr = 0x82B03854;
	sub_82B00938(ctx, base);
	// mr r4,r14
	ctx.r4.u64 = ctx.r14.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b013d0
	ctx.lr = 0x82B03860;
	sub_82B013D0(ctx, base);
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b00938
	ctx.lr = 0x82B0386C;
	sub_82B00938(ctx, base);
loc_82B0386C:
	// rlwinm r29,r17,27,27,31
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r17.u32 | (ctx.r17.u64 << 32), 27) & 0x1F;
	// cmplw cr6,r30,r29
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, ctx.r29.u32, ctx.xer);
	// ble cr6,0x82b038a0
	if (!ctx.cr6.gt) goto loc_82B038A0;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-24828
	ctx.r4.s64 = ctx.r11.s64 + -24828;
	// bl 0x82b00938
	ctx.lr = 0x82B03888;
	sub_82B00938(ctx, base);
	// mr r4,r14
	ctx.r4.u64 = ctx.r14.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b013d0
	ctx.lr = 0x82B03894;
	sub_82B013D0(ctx, base);
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b00938
	ctx.lr = 0x82B038A0;
	sub_82B00938(ctx, base);
loc_82B038A0:
	// rlwinm r28,r17,22,25,31
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r17.u32 | (ctx.r17.u64 << 32), 22) & 0x7F;
	// cmplw cr6,r28,r29
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r29.u32, ctx.xer);
	// bge cr6,0x82b038d4
	if (!ctx.cr6.lt) goto loc_82B038D4;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-24868
	ctx.r4.s64 = ctx.r11.s64 + -24868;
	// bl 0x82b00938
	ctx.lr = 0x82B038BC;
	sub_82B00938(ctx, base);
	// mr r4,r14
	ctx.r4.u64 = ctx.r14.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b013d0
	ctx.lr = 0x82B038C8;
	sub_82B013D0(ctx, base);
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b00938
	ctx.lr = 0x82B038D4;
	sub_82B00938(ctx, base);
loc_82B038D4:
	// rlwinm r11,r30,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// cmplw cr6,r28,r11
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82b03908
	if (!ctx.cr6.gt) goto loc_82B03908;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-24912
	ctx.r4.s64 = ctx.r11.s64 + -24912;
	// bl 0x82b00938
	ctx.lr = 0x82B038F0;
	sub_82B00938(ctx, base);
	// mr r4,r14
	ctx.r4.u64 = ctx.r14.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b013d0
	ctx.lr = 0x82B038FC;
	sub_82B013D0(ctx, base);
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b00938
	ctx.lr = 0x82B03908;
	sub_82B00938(ctx, base);
loc_82B03908:
	// lwz r11,0(r19)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r19.u32 + 0);
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// rlwinm. r11,r11,0,27,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82b0391c
	if (!ctx.cr0.eq) goto loc_82B0391C;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
loc_82B0391C:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-24936
	ctx.r4.s64 = ctx.r11.s64 + -24936;
	// bl 0x82b00938
	ctx.lr = 0x82B0392C;
	sub_82B00938(ctx, base);
	// mr r4,r14
	ctx.r4.u64 = ctx.r14.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b013d0
	ctx.lr = 0x82B03938;
	sub_82B013D0(ctx, base);
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b00938
	ctx.lr = 0x82B03944;
	sub_82B00938(ctx, base);
	// mr r4,r18
	ctx.r4.u64 = ctx.r18.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b013d0
	ctx.lr = 0x82B03950;
	sub_82B013D0(ctx, base);
loc_82B03950:
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b013d0
	ctx.lr = 0x82B0395C;
	sub_82B013D0(ctx, base);
	// li r19,0
	ctx.r19.s64 = 0;
	// cmplwi cr6,r20,0
	ctx.cr6.compare<uint32_t>(ctx.r20.u32, 0, ctx.xer);
	// beq cr6,0x82b03ac8
	if (ctx.cr6.eq) goto loc_82B03AC8;
	// lhz r11,24(r25)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r25.u32 + 24);
	// rlwinm. r15,r17,27,27,31
	ctx.r15.u64 = __builtin_rotateleft64(ctx.r17.u32 | (ctx.r17.u64 << 32), 27) & 0x1F;
	ctx.cr0.compare<int32_t>(ctx.r15.s32, 0, ctx.xer);
	// lhz r10,26(r25)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r25.u32 + 26);
	// mr r29,r16
	ctx.r29.u64 = ctx.r16.u64;
	// not r17,r11
	ctx.r17.u64 = ~ctx.r11.u64;
	// not r16,r10
	ctx.r16.u64 = ~ctx.r10.u64;
	// li r23,0
	ctx.r23.s64 = 0;
	// beq 0x82b03c94
	if (ctx.cr0.eq) goto loc_82B03C94;
	// li r11,1
	ctx.r11.s64 = 1;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// stb r11,80(r1)
	PPC_STORE_U8(ctx.r1.u32 + 80, ctx.r11.u8);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// lis r8,-32242
	ctx.r8.s64 = -2113011712;
	// lis r7,-32242
	ctx.r7.s64 = -2113011712;
	// lis r6,-32229
	ctx.r6.s64 = -2112159744;
	// lis r5,-32242
	ctx.r5.s64 = -2113011712;
	// lis r4,-31975
	ctx.r4.s64 = -2095513600;
	// addi r25,r11,15188
	ctx.r25.s64 = ctx.r11.s64 + 15188;
	// addi r21,r10,-24940
	ctx.r21.s64 = ctx.r10.s64 + -24940;
	// addi r22,r9,-24948
	ctx.r22.s64 = ctx.r9.s64 + -24948;
	// addi r19,r8,-24968
	ctx.r19.s64 = ctx.r8.s64 + -24968;
	// addi r18,r7,-24980
	ctx.r18.s64 = ctx.r7.s64 + -24980;
	// addi r20,r6,26556
	ctx.r20.s64 = ctx.r6.s64 + 26556;
	// addi r24,r5,-24988
	ctx.r24.s64 = ctx.r5.s64 + -24988;
	// addi r28,r4,3088
	ctx.r28.s64 = ctx.r4.s64 + 3088;
loc_82B039D0:
	// li r11,1
	ctx.r11.s64 = 1;
	// lbz r14,3(r29)
	ctx.r14.u64 = PPC_LOAD_U8(ctx.r29.u32 + 3);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// slw r11,r11,r23
	ctx.r11.u64 = ctx.r23.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r23.u8 & 0x3F));
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// clrlwi r30,r14,28
	ctx.r30.u64 = ctx.r14.u32 & 0xF;
	// and r27,r11,r17
	ctx.r27.u64 = ctx.r11.u64 & ctx.r17.u64;
	// and r26,r11,r16
	ctx.r26.u64 = ctx.r11.u64 & ctx.r16.u64;
	// bl 0x82b013d0
	ctx.lr = 0x82B039F4;
	sub_82B013D0(ctx, base);
	// rlwinm r11,r14,30,2,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r14.u32 | (ctx.r14.u64 << 32), 30) & 0x3FFFFFFC;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwzx r5,r11,r28
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r28.u32);
	// bl 0x82b00938
	ctx.lr = 0x82B03A08;
	sub_82B00938(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82b03a20
	if (ctx.cr6.eq) goto loc_82B03A20;
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b00938
	ctx.lr = 0x82B03A20;
	sub_82B00938(ctx, base);
loc_82B03A20:
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x82b03a30
	if (ctx.cr6.eq) goto loc_82B03A30;
	// mr r4,r18
	ctx.r4.u64 = ctx.r18.u64;
	// b 0x82b03a3c
	goto loc_82B03A3C;
loc_82B03A30:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x82b03a44
	if (ctx.cr6.eq) goto loc_82B03A44;
	// mr r4,r19
	ctx.r4.u64 = ctx.r19.u64;
loc_82B03A3C:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b00938
	ctx.lr = 0x82B03A44;
	sub_82B00938(ctx, base);
loc_82B03A44:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,88(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// bl 0x82b013d0
	ctx.lr = 0x82B03A50;
	sub_82B013D0(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r5,r11,24,28,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xF;
	// bl 0x82b00938
	ctx.lr = 0x82B03A64;
	sub_82B00938(ctx, base);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// rlwinm r11,r11,20,28,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 20) & 0xF;
	// cmplwi cr6,r11,15
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 15, ctx.xer);
	// beq cr6,0x82b03a8c
	if (ctx.cr6.eq) goto loc_82B03A8C;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r28,64
	ctx.r10.s64 = ctx.r28.s64 + 64;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwzx r5,r11,r10
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// bl 0x82b00938
	ctx.lr = 0x82B03A8C;
	sub_82B00938(ctx, base);
loc_82B03A8C:
	// lwz r14,92(r1)
	ctx.r14.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mr r4,r14
	ctx.r4.u64 = ctx.r14.u64;
	// bl 0x82b013d0
	ctx.lr = 0x82B03A9C;
	sub_82B013D0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r4,84(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// bl 0x82b00938
	ctx.lr = 0x82B03AA8;
	sub_82B00938(ctx, base);
	// addi r23,r23,1
	ctx.r23.s64 = ctx.r23.s64 + 1;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmplw cr6,r23,r15
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, ctx.r15.u32, ctx.xer);
	// blt cr6,0x82b039d0
	if (ctx.cr6.lt) goto loc_82B039D0;
	// lbz r19,80(r1)
	ctx.r19.u64 = PPC_LOAD_U8(ctx.r1.u32 + 80);
	// lwz r22,84(r1)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// lwz r18,88(r1)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// b 0x82b03c94
	goto loc_82B03C94;
loc_82B03AC8:
	// lwz r11,24(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 24);
	// lis r10,-32227
	ctx.r10.s64 = -2112028672;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// lis r8,-32229
	ctx.r8.s64 = -2112159744;
	// lis r7,-32242
	ctx.r7.s64 = -2113011712;
	// lis r6,-31975
	ctx.r6.s64 = -2095513600;
	// mr r30,r16
	ctx.r30.u64 = ctx.r16.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// addi r24,r10,15188
	ctx.r24.s64 = ctx.r10.s64 + 15188;
	// addi r21,r9,-24940
	ctx.r21.s64 = ctx.r9.s64 + -24940;
	// addi r20,r8,26556
	ctx.r20.s64 = ctx.r8.s64 + 26556;
	// addi r23,r7,-24988
	ctx.r23.s64 = ctx.r7.s64 + -24988;
	// addi r26,r6,3088
	ctx.r26.s64 = ctx.r6.s64 + 3088;
	// beq cr6,0x82b03bbc
	if (ctx.cr6.eq) goto loc_82B03BBC;
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r19,r15
	ctx.r19.u64 = ctx.r15.u64;
	// addi r27,r11,-24948
	ctx.r27.s64 = ctx.r11.s64 + -24948;
loc_82B03B10:
	// lbz r15,3(r30)
	ctx.r15.u64 = PPC_LOAD_U8(ctx.r30.u32 + 3);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// clrlwi r29,r15,28
	ctx.r29.u64 = ctx.r15.u32 & 0xF;
	// bl 0x82b013d0
	ctx.lr = 0x82B03B24;
	sub_82B013D0(ctx, base);
	// rlwinm r11,r15,30,2,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r15.u32 | (ctx.r15.u64 << 32), 30) & 0x3FFFFFFC;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwzx r5,r11,r26
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r26.u32);
	// bl 0x82b00938
	ctx.lr = 0x82B03B38;
	sub_82B00938(ctx, base);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82b03b50
	if (ctx.cr6.eq) goto loc_82B03B50;
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b00938
	ctx.lr = 0x82B03B50;
	sub_82B00938(ctx, base);
loc_82B03B50:
	// mr r4,r18
	ctx.r4.u64 = ctx.r18.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b013d0
	ctx.lr = 0x82B03B5C;
	sub_82B013D0(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r5,r11,24,31,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0x1;
	// bl 0x82b00938
	ctx.lr = 0x82B03B70;
	sub_82B00938(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm r11,r11,23,28,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 23) & 0xF;
	// cmplwi cr6,r11,15
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 15, ctx.xer);
	// beq cr6,0x82b03b98
	if (ctx.cr6.eq) goto loc_82B03B98;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r26,64
	ctx.r10.s64 = ctx.r26.s64 + 64;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwzx r5,r11,r10
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// bl 0x82b00938
	ctx.lr = 0x82B03B98;
	sub_82B00938(ctx, base);
loc_82B03B98:
	// mr r4,r14
	ctx.r4.u64 = ctx.r14.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b013d0
	ctx.lr = 0x82B03BA4;
	sub_82B013D0(ctx, base);
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b00938
	ctx.lr = 0x82B03BB0;
	sub_82B00938(ctx, base);
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// bne 0x82b03b10
	if (!ctx.cr0.eq) goto loc_82B03B10;
loc_82B03BBC:
	// lwz r10,28(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 28);
	// rlwinm. r11,r17,27,27,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r17.u32 | (ctx.r17.u64 << 32), 27) & 0x1F;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// lwz r9,24(r25)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r25.u32 + 24);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r30,r10,r16
	ctx.r30.u64 = ctx.r10.u64 + ctx.r16.u64;
	// beq 0x82b03c94
	if (ctx.cr0.eq) goto loc_82B03C94;
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r19,1
	ctx.r19.s64 = 1;
	// addi r27,r11,-24996
	ctx.r27.s64 = ctx.r11.s64 + -24996;
loc_82B03BE8:
	// lbz r25,3(r30)
	ctx.r25.u64 = PPC_LOAD_U8(ctx.r30.u32 + 3);
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// clrlwi r29,r25,28
	ctx.r29.u64 = ctx.r25.u32 & 0xF;
	// bl 0x82b013d0
	ctx.lr = 0x82B03BFC;
	sub_82B013D0(ctx, base);
	// rlwinm r11,r25,30,2,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 30) & 0x3FFFFFFC;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwzx r5,r11,r26
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r26.u32);
	// bl 0x82b00938
	ctx.lr = 0x82B03C10;
	sub_82B00938(ctx, base);
	// cmplwi cr6,r29,0
	ctx.cr6.compare<uint32_t>(ctx.r29.u32, 0, ctx.xer);
	// beq cr6,0x82b03c28
	if (ctx.cr6.eq) goto loc_82B03C28;
	// mr r4,r20
	ctx.r4.u64 = ctx.r20.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b00938
	ctx.lr = 0x82B03C28;
	sub_82B00938(ctx, base);
loc_82B03C28:
	// mr r4,r18
	ctx.r4.u64 = ctx.r18.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b013d0
	ctx.lr = 0x82B03C34;
	sub_82B013D0(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r5,r11,24,28,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 24) & 0xF;
	// bl 0x82b00938
	ctx.lr = 0x82B03C48;
	sub_82B00938(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm r11,r11,20,28,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 20) & 0xF;
	// cmplwi cr6,r11,15
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 15, ctx.xer);
	// beq cr6,0x82b03c70
	if (ctx.cr6.eq) goto loc_82B03C70;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r10,r26,64
	ctx.r10.s64 = ctx.r26.s64 + 64;
	// mr r4,r21
	ctx.r4.u64 = ctx.r21.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwzx r5,r11,r10
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// bl 0x82b00938
	ctx.lr = 0x82B03C70;
	sub_82B00938(ctx, base);
loc_82B03C70:
	// mr r4,r14
	ctx.r4.u64 = ctx.r14.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b013d0
	ctx.lr = 0x82B03C7C;
	sub_82B013D0(ctx, base);
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b00938
	ctx.lr = 0x82B03C88;
	sub_82B00938(ctx, base);
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// bne 0x82b03be8
	if (!ctx.cr0.eq) goto loc_82B03BE8;
loc_82B03C94:
	// mr r4,r18
	ctx.r4.u64 = ctx.r18.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b013d0
	ctx.lr = 0x82B03CA0;
	sub_82B013D0(ctx, base);
	// clrlwi. r11,r19,24
	ctx.r11.u64 = ctx.r19.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82b03cc0
	if (ctx.cr0.eq) goto loc_82B03CC0;
	// mr r4,r14
	ctx.r4.u64 = ctx.r14.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b013d0
	ctx.lr = 0x82B03CB4;
	sub_82B013D0(ctx, base);
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b00938
	ctx.lr = 0x82B03CC0;
	sub_82B00938(ctx, base);
loc_82B03CC0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82B03CC4:
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x82fa7690
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B03CCC"))) PPC_WEAK_FUNC(sub_82B03CCC);
PPC_FUNC_IMPL(__imp__sub_82B03CCC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B03CD0"))) PPC_WEAK_FUNC(sub_82B03CD0);
PPC_FUNC_IMPL(__imp__sub_82B03CD0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7674
	ctx.lr = 0x82B03CD8;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,8(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// li r27,0
	ctx.r27.s64 = 0;
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82b03dfc
	if (!ctx.cr6.eq) goto loc_82B03DFC;
	// lwz r31,0(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// cmplwi cr6,r5,1
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 1, ctx.xer);
	// blt cr6,0x82b03da8
	if (ctx.cr6.lt) goto loc_82B03DA8;
	// beq cr6,0x82b03d50
	if (ctx.cr6.eq) goto loc_82B03D50;
	// cmplwi cr6,r5,3
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 3, ctx.xer);
	// blt cr6,0x82b03d18
	if (ctx.cr6.lt) goto loc_82B03D18;
	// lis r27,-32768
	ctx.r27.s64 = -2147483648;
	// ori r27,r27,16389
	ctx.r27.u64 = ctx.r27.u64 | 16389;
	// b 0x82b03dec
	goto loc_82B03DEC;
loc_82B03D18:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-17724
	ctx.r4.s64 = ctx.r11.s64 + -17724;
	// bl 0x82b03148
	ctx.lr = 0x82B03D28;
	sub_82B03148(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwz r9,12(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 12);
	// addi r4,r11,-24572
	ctx.r4.s64 = ctx.r11.s64 + -24572;
	// lwz r8,8(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lwz r7,4(r30)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r6,0(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// bl 0x82b00938
	ctx.lr = 0x82B03D4C;
	sub_82B00938(ctx, base);
	// b 0x82b03dec
	goto loc_82B03DEC;
loc_82B03D50:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-19372
	ctx.r4.s64 = ctx.r11.s64 + -19372;
	// bl 0x82b03148
	ctx.lr = 0x82B03D60;
	sub_82B03148(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r11,-24580
	ctx.r4.s64 = ctx.r11.s64 + -24580;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b00938
	ctx.lr = 0x82B03D74;
	sub_82B00938(ctx, base);
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r29,r30,-4
	ctx.r29.s64 = ctx.r30.s64 + -4;
	// li r30,4
	ctx.r30.s64 = 4;
	// addi r28,r11,-32224
	ctx.r28.s64 = ctx.r11.s64 + -32224;
loc_82B03D84:
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b00938
	ctx.lr = 0x82B03D90;
	sub_82B00938(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// lfsu f1,4(r29)
	ctx.fpscr.disableFlushMode();
	ea = 4 + ctx.r29.u32;
	temp.u32 = PPC_LOAD_U32(ea);
	ctx.r29.u32 = ea;
	ctx.f1.f64 = double(temp.f32);
	// bl 0x82b00bb0
	ctx.lr = 0x82B03D9C;
	sub_82B00BB0(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// bne 0x82b03d84
	if (!ctx.cr0.eq) goto loc_82B03D84;
	// b 0x82b03dec
	goto loc_82B03DEC;
loc_82B03DA8:
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,-17732
	ctx.r4.s64 = ctx.r11.s64 + -17732;
	// bl 0x82b03148
	ctx.lr = 0x82B03DB8;
	sub_82B03148(ctx, base);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82b03dd0
	if (ctx.cr6.eq) goto loc_82B03DD0;
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r6,r11,-30204
	ctx.r6.s64 = ctx.r11.s64 + -30204;
	// b 0x82b03dd8
	goto loc_82B03DD8;
loc_82B03DD0:
	// lis r11,-32230
	ctx.r11.s64 = -2112225280;
	// addi r6,r11,-30212
	ctx.r6.s64 = ctx.r11.s64 + -30212;
loc_82B03DD8:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// addi r4,r11,-24592
	ctx.r4.s64 = ctx.r11.s64 + -24592;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b00938
	ctx.lr = 0x82B03DEC;
	sub_82B00938(ctx, base);
loc_82B03DEC:
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,5180
	ctx.r4.s64 = ctx.r11.s64 + 5180;
	// bl 0x82b00938
	ctx.lr = 0x82B03DFC;
	sub_82B00938(ctx, base);
loc_82B03DFC:
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B03E08"))) PPC_WEAK_FUNC(sub_82B03E08);
PPC_FUNC_IMPL(__imp__sub_82B03E08) {
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
	// rlwinm r10,r8,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// add r10,r10,r5
	ctx.r10.u64 = ctx.r10.u64 + ctx.r5.u64;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// lwz r10,20(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82b03e40
	if (!ctx.cr6.eq) goto loc_82B03E40;
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82b03e9c
	goto loc_82B03E9C;
loc_82B03E40:
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// li r30,0
	ctx.r30.s64 = 0;
	// lis r9,-32080
	ctx.r9.s64 = -2102394880;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// addi r5,r9,15568
	ctx.r5.s64 = ctx.r9.s64 + 15568;
	// std r30,0(r10)
	PPC_STORE_U64(ctx.r10.u32 + 0, ctx.r30.u64);
	// stw r30,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r30.u32);
	// mr r3,r7
	ctx.r3.u64 = ctx.r7.u64;
	// stw r31,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r31.u32);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// stw r8,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r8.u32);
	// bl 0x8266e2b8
	ctx.lr = 0x82B03E70;
	sub_8266E2B8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82b03e9c
	if (ctx.cr0.lt) goto loc_82B03E9C;
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,15072
	ctx.r4.s64 = ctx.r11.s64 + 15072;
	// bl 0x82b013d0
	ctx.lr = 0x82B03E88;
	sub_82B013D0(ctx, base);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r4,r11,5180
	ctx.r4.s64 = ctx.r11.s64 + 5180;
	// bl 0x82b00938
	ctx.lr = 0x82B03E98;
	sub_82B00938(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
loc_82B03E9C:
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

__attribute__((alias("__imp__sub_82B03EB4"))) PPC_WEAK_FUNC(sub_82B03EB4);
PPC_FUNC_IMPL(__imp__sub_82B03EB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B03EB8"))) PPC_WEAK_FUNC(sub_82B03EB8);
PPC_FUNC_IMPL(__imp__sub_82B03EB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7670
	ctx.lr = 0x82B03EC0;
	__savegprlr_26(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r26,r8
	ctx.r26.u64 = ctx.r8.u64;
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82b041e0
	if (ctx.cr6.eq) goto loc_82B041E0;
	// cmplwi cr6,r4,4
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 4, ctx.xer);
	// blt cr6,0x82b041e0
	if (ctx.cr6.lt) goto loc_82B041E0;
	// cmplwi cr6,r6,0
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 0, ctx.xer);
	// beq cr6,0x82b041e0
	if (ctx.cr6.eq) goto loc_82B041E0;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r6,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r6.u32);
	// clrlwi. r10,r5,30
	ctx.r10.u64 = ctx.r5.u32 & 0x3;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// bne 0x82b041e0
	if (!ctx.cr0.eq) goto loc_82B041E0;
	// rlwinm r11,r5,28,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 28) & 0x1;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r10,-24320
	ctx.r4.s64 = ctx.r10.s64 + -24320;
	// bl 0x82b013d0
	ctx.lr = 0x82B03F20;
	sub_82B013D0(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-24448
	ctx.r4.s64 = ctx.r11.s64 + -24448;
	// bl 0x82b013d0
	ctx.lr = 0x82B03F30;
	sub_82B013D0(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-24504
	ctx.r4.s64 = ctx.r11.s64 + -24504;
	// bl 0x82b013d0
	ctx.lr = 0x82B03F40;
	sub_82B013D0(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lis r9,-31975
	ctx.r9.s64 = -2095513600;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// add r29,r10,r11
	ctx.r29.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r4,4000(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 4000);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// clrlwi r30,r11,31
	ctx.r30.u64 = ctx.r11.u32 & 0x1;
	// bl 0x82b013d0
	ctx.lr = 0x82B03F64;
	sub_82B013D0(ctx, base);
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-24524
	ctx.r4.s64 = ctx.r11.s64 + -24524;
	// bl 0x82b00938
	ctx.lr = 0x82B03F74;
	sub_82B00938(ctx, base);
	// cmpwi cr6,r30,1
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 1, ctx.xer);
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bgt cr6,0x82b03f9c
	if (ctx.cr6.gt) goto loc_82B03F9C;
	// lis r11,-31975
	ctx.r11.s64 = -2095513600;
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r11,r11,3992
	ctx.r11.s64 = ctx.r11.s64 + 3992;
	// lis r9,-32242
	ctx.r9.s64 = -2113011712;
	// addi r4,r9,-24528
	ctx.r4.s64 = ctx.r9.s64 + -24528;
	// lwzx r5,r10,r11
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// b 0x82b03fa8
	goto loc_82B03FA8;
loc_82B03F9C:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// addi r4,r11,-24544
	ctx.r4.s64 = ctx.r11.s64 + -24544;
loc_82B03FA8:
	// bl 0x82b00938
	ctx.lr = 0x82B03FAC;
	sub_82B00938(ctx, base);
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,1224
	ctx.r4.s64 = ctx.r11.s64 + 1224;
	// bl 0x82b00938
	ctx.lr = 0x82B03FBC;
	sub_82B00938(ctx, base);
	// lis r11,-31975
	ctx.r11.s64 = -2095513600;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,3988(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3988);
	// bl 0x82b013d0
	ctx.lr = 0x82B03FCC;
	sub_82B013D0(ctx, base);
	// lis r11,-31975
	ctx.r11.s64 = -2095513600;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// lwz r4,3984(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 3984);
	// bl 0x82b013d0
	ctx.lr = 0x82B03FDC;
	sub_82B013D0(ctx, base);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82b03510
	ctx.lr = 0x82B03FF4;
	sub_82B03510(ctx, base);
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82b01318
	ctx.lr = 0x82B04008;
	sub_82B01318(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82b041e8
	if (ctx.cr0.lt) goto loc_82B041E8;
	// li r8,0
	ctx.r8.s64 = 0;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82b035f8
	ctx.lr = 0x82B0402C;
	sub_82B035F8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82b04080
	if (ctx.cr0.lt) goto loc_82B04080;
	// li r8,0
	ctx.r8.s64 = 0;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82b03e08
	ctx.lr = 0x82B04050;
	sub_82B03E08(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82b04080
	if (ctx.cr0.lt) goto loc_82B04080;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// add r7,r11,r31
	ctx.r7.u64 = ctx.r11.u64 + ctx.r31.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82b02758
	ctx.lr = 0x82B04080;
	sub_82B02758(ctx, base);
loc_82B04080:
	// rlwinm. r27,r28,0,20,20
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 0) & 0x800;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// beq 0x82b040a8
	if (ctx.cr0.eq) goto loc_82B040A8;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r5,0
	ctx.r5.s64 = 0;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82b02ac0
	ctx.lr = 0x82B0409C;
	sub_82B02AC0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x82b040b0
	if (!ctx.cr0.lt) goto loc_82B040B0;
	// b 0x82b041e8
	goto loc_82B041E8;
loc_82B040A8:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt cr6,0x82b041e8
	if (ctx.cr6.lt) goto loc_82B041E8;
loc_82B040B0:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// rlwinm. r11,r11,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82b04188
	if (ctx.cr0.eq) goto loc_82B04188;
	// lis r11,-32253
	ctx.r11.s64 = -2113732608;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,5724
	ctx.r4.s64 = ctx.r11.s64 + 5724;
	// bl 0x82b03148
	ctx.lr = 0x82B040CC;
	sub_82B03148(ctx, base);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,15072
	ctx.r4.s64 = ctx.r11.s64 + 15072;
	// bl 0x82b013d0
	ctx.lr = 0x82B040DC;
	sub_82B013D0(ctx, base);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,5180
	ctx.r4.s64 = ctx.r11.s64 + 5180;
	// bl 0x82b00938
	ctx.lr = 0x82B040EC;
	sub_82B00938(ctx, base);
	// li r8,1
	ctx.r8.s64 = 1;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82b035f8
	ctx.lr = 0x82B04108;
	sub_82B035F8(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82b041e8
	if (ctx.cr0.lt) goto loc_82B041E8;
	// li r8,1
	ctx.r8.s64 = 1;
	// mr r7,r26
	ctx.r7.u64 = ctx.r26.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// bl 0x82b03e08
	ctx.lr = 0x82B0412C;
	sub_82B03E08(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82b041e8
	if (ctx.cr0.lt) goto loc_82B041E8;
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r9,r1,80
	ctx.r9.s64 = ctx.r1.s64 + 80;
	// lwz r8,8(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// add r7,r11,r31
	ctx.r7.u64 = ctx.r11.u64 + ctx.r31.u64;
	// mr r6,r29
	ctx.r6.u64 = ctx.r29.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82b02758
	ctx.lr = 0x82B0415C;
	sub_82B02758(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82b041e8
	if (ctx.cr0.lt) goto loc_82B041E8;
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x82b04188
	if (ctx.cr6.eq) goto loc_82B04188;
	// addi r6,r1,80
	ctx.r6.s64 = ctx.r1.s64 + 80;
	// li r5,1
	ctx.r5.s64 = 1;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82b02ac0
	ctx.lr = 0x82B04180;
	sub_82B02AC0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82b041e8
	if (ctx.cr0.lt) goto loc_82B041E8;
loc_82B04188:
	// lwz r30,12(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 12);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82b041c8
	if (ctx.cr6.eq) goto loc_82B041C8;
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,15220
	ctx.r4.s64 = ctx.r11.s64 + 15220;
	// bl 0x82b013d0
	ctx.lr = 0x82B041A4;
	sub_82B013D0(ctx, base);
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// add r3,r30,r31
	ctx.r3.u64 = ctx.r30.u64 + ctx.r31.u64;
	// bl 0x82b01fc0
	ctx.lr = 0x82B041B0;
	sub_82B01FC0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82b041e8
	if (ctx.cr0.lt) goto loc_82B041E8;
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,15204
	ctx.r4.s64 = ctx.r11.s64 + 15204;
	// bl 0x82b013d0
	ctx.lr = 0x82B041C8;
	sub_82B013D0(ctx, base);
loc_82B041C8:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// addi r3,r1,80
	ctx.r3.s64 = ctx.r1.s64 + 80;
	// addi r4,r11,-24548
	ctx.r4.s64 = ctx.r11.s64 + -24548;
	// bl 0x82b013d0
	ctx.lr = 0x82B041D8;
	sub_82B013D0(ctx, base);
	// lwz r3,88(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// b 0x82b041e8
	goto loc_82B041E8;
loc_82B041E0:
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,87
	ctx.r3.u64 = ctx.r3.u64 | 87;
loc_82B041E8:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82fa76c0
	__restgprlr_26(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B041F0"))) PPC_WEAK_FUNC(sub_82B041F0);
PPC_FUNC_IMPL(__imp__sub_82B041F0) {
	PPC_FUNC_PROLOGUE();
	// mr r8,r3
	ctx.r8.u64 = ctx.r3.u64;
	// b 0x82b03eb8
	sub_82B03EB8(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B041F8"))) PPC_WEAK_FUNC(sub_82B041F8);
PPC_FUNC_IMPL(__imp__sub_82B041F8) {
	PPC_FUNC_PROLOGUE();
	// std r30,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r30.u64);
	// std r31,-8(r1)
	PPC_STORE_U64(ctx.r1.u32 + -8, ctx.r31.u64);
	// addi r11,r7,31
	ctx.r11.s64 = ctx.r7.s64 + 31;
	// rlwinm r10,r5,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 30) & 0x3FFFFFFF;
	// rlwinm r11,r11,28,4,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFE;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mullw r5,r11,r10
	ctx.r5.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// cntlzw r30,r8
	ctx.r30.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// addi r11,r6,31
	ctx.r11.s64 = ctx.r6.s64 + 31;
	// rlwinm r7,r4,28,4,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 28) & 0xFFFFFFF;
	// clrlwi r9,r3,29
	ctx.r9.u64 = ctx.r3.u32 & 0x7;
	// rlwinm r8,r4,2,27,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0x18;
	// add r7,r5,r7
	ctx.r7.u64 = ctx.r5.u64 + ctx.r7.u64;
	// rlwinm r6,r11,27,5,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x7FFFFFF;
	// add r5,r8,r9
	ctx.r5.u64 = ctx.r8.u64 + ctx.r9.u64;
	// subfic r11,r30,31
	ctx.xer.ca = ctx.r30.u32 <= 31;
	ctx.r11.s64 = 31 - ctx.r30.s64;
	// mullw r8,r7,r6
	ctx.r8.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r6.s32);
	// rlwinm r9,r3,27,5,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 27) & 0x7FFFFFF;
	// slw r6,r5,r11
	ctx.r6.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r5.u32 << (ctx.r11.u8 & 0x3F));
	// add r7,r8,r9
	ctx.r7.u64 = ctx.r8.u64 + ctx.r9.u64;
	// rlwinm r8,r6,0,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFFFFF0;
	// rlwinm r9,r4,3,28,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 3) & 0x8;
	// addi r5,r11,8
	ctx.r5.s64 = ctx.r11.s64 + 8;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// clrldi r7,r7,32
	ctx.r7.u64 = ctx.r7.u64 & 0xFFFFFFFF;
	// clrldi r5,r5,32
	ctx.r5.u64 = ctx.r5.u64 & 0xFFFFFFFF;
	// addi r30,r11,6
	ctx.r30.s64 = ctx.r11.s64 + 6;
	// rldicr r8,r9,1,62
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r9.u64, 1) & 0xFFFFFFFFFFFFFFFE;
	// sld r9,r7,r5
	ctx.r9.u64 = ctx.r5.u8 & 0x40 ? 0 : (ctx.r7.u64 << (ctx.r5.u8 & 0x7F));
	// clrldi r7,r30,32
	ctx.r7.u64 = ctx.r30.u64 & 0xFFFFFFFF;
	// clrldi r5,r31,62
	ctx.r5.u64 = ctx.r31.u64 & 0x3;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// sld r8,r5,r7
	ctx.r8.u64 = ctx.r7.u8 & 0x40 ? 0 : (ctx.r5.u64 << (ctx.r7.u8 & 0x7F));
	// rlwinm r7,r4,29,3,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 29) & 0x1FFFFFFF;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// add r10,r7,r10
	ctx.r10.u64 = ctx.r7.u64 + ctx.r10.u64;
	// clrldi r8,r6,60
	ctx.r8.u64 = ctx.r6.u64 & 0xF;
	// clrldi r5,r10,63
	ctx.r5.u64 = ctx.r10.u64 & 0x1;
	// add r10,r9,r8
	ctx.r10.u64 = ctx.r9.u64 + ctx.r8.u64;
	// rldicr r8,r5,8,55
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r5.u64, 8) & 0xFFFFFFFFFFFFFF00;
	// rldicr r9,r10,0,54
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u64, 0) & 0xFFFFFFFFFFFFFE00;
	// rlwinm r6,r10,0,23,25
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0x1C0;
	// add r8,r9,r8
	ctx.r8.u64 = ctx.r9.u64 + ctx.r8.u64;
	// rldicl r9,r3,3,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r3.u64, 3) & 0x7FFFFFFFF;
	// rldicr r7,r8,1,62
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u64, 1) & 0xFFFFFFFFFFFFFFFE;
	// rldicr r9,r9,0,57
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u64, 0) & 0xFFFFFFFFFFFFFFC0;
	// mulli r8,r5,-128
	ctx.r8.s64 = ctx.r5.s64 * -128;
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// add r8,r7,r6
	ctx.r8.u64 = ctx.r7.u64 + ctx.r6.u64;
	// rlwinm r7,r9,0,24,25
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xC0;
	// rldicr r8,r8,2,61
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u64, 2) & 0xFFFFFFFFFFFFFFFC;
	// clrldi r9,r10,58
	ctx.r9.u64 = ctx.r10.u64 & 0x3F;
	// add r10,r8,r7
	ctx.r10.u64 = ctx.r8.u64 + ctx.r7.u64;
	// clrldi r11,r11,32
	ctx.r11.u64 = ctx.r11.u64 & 0xFFFFFFFF;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// srd r11,r10,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x40 ? 0 : (ctx.r10.u64 >> (ctx.r11.u8 & 0x7F));
	// rotlwi r3,r11,0
	ctx.r3.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// ld r30,-16(r1)
	ctx.r30.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// ld r31,-8(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B042E8"))) PPC_WEAK_FUNC(sub_82B042E8);
PPC_FUNC_IMPL(__imp__sub_82B042E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7640
	ctx.lr = 0x82B042F0;
	__savegprlr_14(ctx, base);
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r22,404(r1)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r1.u32 + 404);
	// mr r18,r3
	ctx.r18.u64 = ctx.r3.u64;
	// mr r21,r7
	ctx.r21.u64 = ctx.r7.u64;
	// stw r8,380(r1)
	PPC_STORE_U32(ctx.r1.u32 + 380, ctx.r8.u32);
	// mr r26,r8
	ctx.r26.u64 = ctx.r8.u64;
	// stw r9,388(r1)
	PPC_STORE_U32(ctx.r1.u32 + 388, ctx.r9.u32);
	// mr r25,r10
	ctx.r25.u64 = ctx.r10.u64;
	// stw r10,396(r1)
	PPC_STORE_U32(ctx.r1.u32 + 396, ctx.r10.u32);
	// cmplwi cr6,r22,0
	ctx.cr6.compare<uint32_t>(ctx.r22.u32, 0, ctx.xer);
	// li r16,0
	ctx.r16.s64 = 0;
	// bne cr6,0x82b0433c
	if (!ctx.cr6.eq) goto loc_82B0433C;
	// stw r4,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r4.u32);
	// addi r22,r1,144
	ctx.r22.s64 = ctx.r1.s64 + 144;
	// stw r5,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r5.u32);
	// stw r16,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r16.u32);
	// stw r16,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r16.u32);
	// stw r16,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r16.u32);
	// stw r6,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r6.u32);
loc_82B0433C:
	// lwz r11,8(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 8);
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, 0, ctx.xer);
	// lwz r10,0(r22)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// lwz r9,12(r22)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r22.u32 + 12);
	// subf r29,r10,r11
	ctx.r29.s64 = ctx.r11.s64 - ctx.r10.s64;
	// lwz r8,20(r22)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r22.u32 + 20);
	// lwz r11,4(r22)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r22.u32 + 4);
	// lwz r10,16(r22)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r22.u32 + 16);
	// subf r11,r11,r9
	ctx.r11.s64 = ctx.r9.s64 - ctx.r11.s64;
	// stw r29,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r29.u32);
	// subf r27,r10,r8
	ctx.r27.s64 = ctx.r8.s64 - ctx.r10.s64;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// stw r27,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r27.u32);
	// bne cr6,0x82b04384
	if (!ctx.cr6.eq) goto loc_82B04384;
	// stw r16,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r16.u32);
	// addi r21,r1,128
	ctx.r21.s64 = ctx.r1.s64 + 128;
	// stw r16,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r16.u32);
	// stw r16,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r16.u32);
loc_82B04384:
	// addi r11,r4,31
	ctx.r11.s64 = ctx.r4.s64 + 31;
	// lwz r31,412(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 412);
	// addi r10,r5,31
	ctx.r10.s64 = ctx.r5.s64 + 31;
	// rlwinm r11,r11,0,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFE0;
	// rlwinm r28,r10,0,0,26
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFE0;
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// cmplw cr6,r26,r18
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r18.u32, ctx.xer);
	// bne cr6,0x82b043e0
	if (!ctx.cr6.eq) goto loc_82B043E0;
	// addi r10,r6,3
	ctx.r10.s64 = ctx.r6.s64 + 3;
	// lis r4,9351
	ctx.r4.s64 = 612827136;
	// rlwinm r10,r10,0,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFC;
	// mullw r10,r10,r28
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r28.s32);
	// mullw r11,r10,r11
	ctx.r11.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// mullw r11,r11,r31
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r31.s32);
	// addi r11,r11,4095
	ctx.r11.s64 = ctx.r11.s64 + 4095;
	// rlwinm r30,r11,0,0,19
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFF000;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82691410
	ctx.lr = 0x82B043CC;
	sub_82691410(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r19,r3
	ctx.r19.u64 = ctx.r3.u64;
	// bl 0x82af45a0
	ctx.lr = 0x82B043DC;
	sub_82AF45A0(ctx, base);
	// b 0x82b043e4
	goto loc_82B043E4;
loc_82B043E0:
	// mr r19,r26
	ctx.r19.u64 = ctx.r26.u64;
loc_82B043E4:
	// rlwinm r10,r31,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 30) & 0x3FFFFFFF;
	// lwz r11,0(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// rlwinm r9,r31,28,4,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 28) & 0xFFFFFFF;
	// li r8,1
	ctx.r8.s64 = 1;
	// subf r9,r10,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r10.s64;
	// rlwinm r7,r31,31,1,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r6,r9,3
	ctx.r6.s64 = ctx.r9.s64 + 3;
	// srw r9,r7,r10
	ctx.r9.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r7.u32 >> (ctx.r10.u8 & 0x3F));
	// slw r8,r8,r6
	ctx.r8.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r6.u8 & 0x3F));
	// add r7,r11,r8
	ctx.r7.u64 = ctx.r11.u64 + ctx.r8.u64;
	// stw r8,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r8.u32);
	// addi r6,r8,-1
	ctx.r6.s64 = ctx.r8.s64 + -1;
	// add r5,r11,r29
	ctx.r5.u64 = ctx.r11.u64 + ctx.r29.u64;
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// andc r7,r7,r6
	ctx.r7.u64 = ctx.r7.u64 & ~ctx.r6.u64;
	// add r23,r9,r10
	ctx.r23.u64 = ctx.r9.u64 + ctx.r10.u64;
	// andc r10,r5,r8
	ctx.r10.u64 = ctx.r5.u64 & ~ctx.r8.u64;
	// subf r14,r11,r7
	ctx.r14.s64 = ctx.r7.s64 - ctx.r11.s64;
	// subf r15,r11,r10
	ctx.r15.s64 = ctx.r10.s64 - ctx.r11.s64;
	// addi r30,r23,6
	ctx.r30.s64 = ctx.r23.s64 + 6;
	// cmplw cr6,r14,r29
	ctx.cr6.compare<uint32_t>(ctx.r14.u32, ctx.r29.u32, ctx.xer);
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// bgt cr6,0x82b04444
	if (ctx.cr6.gt) goto loc_82B04444;
	// mr r11,r14
	ctx.r11.u64 = ctx.r14.u64;
loc_82B04444:
	// lwz r10,16(r22)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r22.u32 + 16);
	// slw r11,r11,r23
	ctx.r11.u64 = ctx.r23.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r23.u8 & 0x3F));
	// mullw r10,r10,r25
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r25.s32);
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// stw r16,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r16.u32);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// cmplwi cr6,r27,0
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 0, ctx.xer);
	// beq cr6,0x82b04758
	if (ctx.cr6.eq) goto loc_82B04758;
	// rlwinm r11,r28,28,4,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 28) & 0xFFFFFFF;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
loc_82B0446C:
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,8(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 8);
	// lwz r9,96(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r10,92(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// rlwinm r17,r11,30,2,31
	ctx.r17.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// mullw r10,r9,r17
	ctx.r10.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r17.s32);
	// stw r17,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r17.u32);
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// clrlwi r11,r11,30
	ctx.r11.u64 = ctx.r11.u32 & 0x3;
	// beq cr6,0x82b04738
	if (ctx.cr6.eq) goto loc_82B04738;
	// slw r20,r11,r30
	ctx.r20.u64 = ctx.r30.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r30.u8 & 0x3F));
loc_82B044A0:
	// lwz r11,4(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 4);
	// lwz r6,0(r21)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// add r11,r16,r11
	ctx.r11.u64 = ctx.r16.u64 + ctx.r11.u64;
	// lwz r7,100(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// clrlwi r10,r6,29
	ctx.r10.u64 = ctx.r6.u32 & 0x7;
	// lwz r5,104(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// rlwinm r28,r11,2,27,28
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x18;
	// lwz r9,4(r22)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r22.u32 + 4);
	// rlwinm r8,r11,28,4,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFF;
	// lwz r4,388(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 388);
	// add r3,r10,r28
	ctx.r3.u64 = ctx.r10.u64 + ctx.r28.u64;
	// lwz r31,0(r22)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// lwz r24,84(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// rlwinm r10,r5,27,5,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 27) & 0x7FFFFFF;
	// lwz r5,108(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// slw r7,r3,r30
	ctx.r7.u64 = ctx.r30.u8 & 0x20 ? 0 : (ctx.r3.u32 << (ctx.r30.u8 & 0x3F));
	// mullw r27,r8,r10
	ctx.r27.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r10.s32);
	// rlwinm r10,r6,27,5,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 27) & 0x7FFFFFF;
	// rlwinm r3,r7,26,6,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 26) & 0x3FFFFFF;
	// add r10,r10,r27
	ctx.r10.u64 = ctx.r10.u64 + ctx.r27.u64;
	// rlwinm r8,r3,0,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFFFFFF0;
	// slw r10,r10,r30
	ctx.r10.u64 = ctx.r30.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r30.u8 & 0x3F));
	// rlwinm r10,r10,1,3,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1FFFFFFE;
	// rlwinm r7,r11,29,3,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// add r7,r7,r17
	ctx.r7.u64 = ctx.r7.u64 + ctx.r17.u64;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// clrlwi r8,r3,28
	ctx.r8.u64 = ctx.r3.u32 & 0xF;
	// clrlwi r29,r7,31
	ctx.r29.u64 = ctx.r7.u32 & 0x1;
	// add r8,r10,r8
	ctx.r8.u64 = ctx.r10.u64 + ctx.r8.u64;
	// rlwinm r10,r6,29,3,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 29) & 0x1FFFFFFF;
	// rlwinm r26,r29,1,0,30
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r25,r11,4,27,27
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0x10;
	// add r10,r10,r26
	ctx.r10.u64 = ctx.r10.u64 + ctx.r26.u64;
	// add r11,r8,r20
	ctx.r11.u64 = ctx.r8.u64 + ctx.r20.u64;
	// rlwinm r10,r10,1,29,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x6;
	// add r11,r11,r25
	ctx.r11.u64 = ctx.r11.u64 + ctx.r25.u64;
	// add r10,r10,r29
	ctx.r10.u64 = ctx.r10.u64 + ctx.r29.u64;
	// srawi r8,r11,6
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3F) != 0);
	ctx.r8.s64 = ctx.r11.s32 >> 6;
	// rlwinm r7,r10,3,28,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0x8;
	// clrlwi r6,r8,29
	ctx.r6.u64 = ctx.r8.u32 & 0x7;
	// rlwinm r8,r10,0,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// add r10,r7,r6
	ctx.r10.u64 = ctx.r7.u64 + ctx.r6.u64;
	// add r7,r16,r9
	ctx.r7.u64 = ctx.r16.u64 + ctx.r9.u64;
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r9,r11,0,0,22
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFE00;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// mullw r8,r7,r4
	ctx.r8.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r4.s32);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r24,r8,r24
	ctx.r24.u64 = ctx.r8.u64 + ctx.r24.u64;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// clrlwi r11,r11,26
	ctx.r11.u64 = ctx.r11.u32 & 0x3F;
	// rlwinm r9,r10,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// slw r10,r31,r23
	ctx.r10.u64 = ctx.r23.u8 & 0x20 ? 0 : (ctx.r31.u32 << (ctx.r23.u8 & 0x3F));
	// add r10,r10,r24
	ctx.r10.u64 = ctx.r10.u64 + ctx.r24.u64;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// add r4,r10,r19
	ctx.r4.u64 = ctx.r10.u64 + ctx.r19.u64;
	// add r3,r11,r18
	ctx.r3.u64 = ctx.r11.u64 + ctx.r18.u64;
	// bl 0x82fa77c0
	ctx.lr = 0x82B04590;
	sub_82FA77C0(ctx, base);
	// mr r31,r14
	ctx.r31.u64 = ctx.r14.u64;
	// cmpw cr6,r14,r15
	ctx.cr6.compare<int32_t>(ctx.r14.s32, ctx.r15.s32, ctx.xer);
	// bge cr6,0x82b04660
	if (!ctx.cr6.lt) goto loc_82B04660;
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// slw r17,r11,r23
	ctx.r17.u64 = ctx.r23.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r23.u8 & 0x3F));
loc_82B045A4:
	// lwz r11,0(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// mr r5,r17
	ctx.r5.u64 = ctx.r17.u64;
	// lwz r10,0(r22)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// add r4,r10,r31
	ctx.r4.u64 = ctx.r10.u64 + ctx.r31.u64;
	// clrlwi r9,r11,29
	ctx.r9.u64 = ctx.r11.u32 & 0x7;
	// rlwinm r10,r11,27,5,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x7FFFFFF;
	// add r9,r9,r28
	ctx.r9.u64 = ctx.r9.u64 + ctx.r28.u64;
	// add r10,r10,r27
	ctx.r10.u64 = ctx.r10.u64 + ctx.r27.u64;
	// slw r9,r9,r30
	ctx.r9.u64 = ctx.r30.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r30.u8 & 0x3F));
	// rlwinm r7,r9,26,6,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 26) & 0x3FFFFFF;
	// slw r10,r10,r30
	ctx.r10.u64 = ctx.r30.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r30.u8 & 0x3F));
	// rlwinm r9,r10,1,3,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1FFFFFFE;
	// rlwinm r8,r7,0,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFF0;
	// clrlwi r10,r7,28
	ctx.r10.u64 = ctx.r7.u32 & 0xF;
	// add r8,r9,r8
	ctx.r8.u64 = ctx.r9.u64 + ctx.r8.u64;
	// rlwinm r9,r11,29,3,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
	// rlwinm r11,r8,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// add r9,r9,r26
	ctx.r9.u64 = ctx.r9.u64 + ctx.r26.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r10,r9,1,29,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x6;
	// add r11,r11,r20
	ctx.r11.u64 = ctx.r11.u64 + ctx.r20.u64;
	// add r10,r10,r29
	ctx.r10.u64 = ctx.r10.u64 + ctx.r29.u64;
	// add r11,r11,r25
	ctx.r11.u64 = ctx.r11.u64 + ctx.r25.u64;
	// rlwinm r8,r10,3,28,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0x8;
	// srawi r9,r11,6
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3F) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 6;
	// rlwinm r6,r10,0,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// clrlwi r10,r9,29
	ctx.r10.u64 = ctx.r9.u32 & 0x7;
	// rlwinm r9,r11,0,0,22
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFE00;
	// add r8,r8,r10
	ctx.r8.u64 = ctx.r8.u64 + ctx.r10.u64;
	// clrlwi r10,r11,26
	ctx.r10.u64 = ctx.r11.u32 & 0x3F;
	// rlwinm r7,r8,3,0,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// slw r8,r4,r23
	ctx.r8.u64 = ctx.r23.u8 & 0x20 ? 0 : (ctx.r4.u32 << (ctx.r23.u8 & 0x3F));
	// add r11,r7,r6
	ctx.r11.u64 = ctx.r7.u64 + ctx.r6.u64;
	// add r8,r8,r24
	ctx.r8.u64 = ctx.r8.u64 + ctx.r24.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r4,r8,r19
	ctx.r4.u64 = ctx.r8.u64 + ctx.r19.u64;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r3,r11,r18
	ctx.r3.u64 = ctx.r11.u64 + ctx.r18.u64;
	// bl 0x82fa77c0
	ctx.lr = 0x82B0464C;
	sub_82FA77C0(ctx, base);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// add r31,r31,r11
	ctx.r31.u64 = ctx.r31.u64 + ctx.r11.u64;
	// cmpw cr6,r31,r15
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r15.s32, ctx.xer);
	// blt cr6,0x82b045a4
	if (ctx.cr6.lt) goto loc_82B045A4;
	// lwz r17,112(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
loc_82B04660:
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplw cr6,r31,r10
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82b04718
	if (!ctx.cr6.lt) goto loc_82B04718;
	// lwz r11,0(r21)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// subf r5,r31,r10
	ctx.r5.s64 = ctx.r10.s64 - ctx.r31.s64;
	// lwz r10,0(r22)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r22.u32 + 0);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// add r7,r10,r31
	ctx.r7.u64 = ctx.r10.u64 + ctx.r31.u64;
	// clrlwi r9,r11,29
	ctx.r9.u64 = ctx.r11.u32 & 0x7;
	// rlwinm r10,r11,27,5,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x7FFFFFF;
	// add r9,r9,r28
	ctx.r9.u64 = ctx.r9.u64 + ctx.r28.u64;
	// add r10,r10,r27
	ctx.r10.u64 = ctx.r10.u64 + ctx.r27.u64;
	// slw r9,r9,r30
	ctx.r9.u64 = ctx.r30.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r30.u8 & 0x3F));
	// rlwinm r6,r9,26,6,31
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 26) & 0x3FFFFFF;
	// slw r10,r10,r30
	ctx.r10.u64 = ctx.r30.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r30.u8 & 0x3F));
	// rlwinm r9,r10,1,3,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1FFFFFFE;
	// rlwinm r8,r6,0,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xFFFFFFF0;
	// clrlwi r10,r6,28
	ctx.r10.u64 = ctx.r6.u32 & 0xF;
	// add r8,r9,r8
	ctx.r8.u64 = ctx.r9.u64 + ctx.r8.u64;
	// rlwinm r9,r11,29,3,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
	// rlwinm r11,r8,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// add r9,r9,r26
	ctx.r9.u64 = ctx.r9.u64 + ctx.r26.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r10,r9,1,29,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x6;
	// add r11,r11,r20
	ctx.r11.u64 = ctx.r11.u64 + ctx.r20.u64;
	// add r10,r10,r29
	ctx.r10.u64 = ctx.r10.u64 + ctx.r29.u64;
	// add r11,r11,r25
	ctx.r11.u64 = ctx.r11.u64 + ctx.r25.u64;
	// rlwinm r9,r10,3,28,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0x8;
	// srawi r8,r11,6
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3F) != 0);
	ctx.r8.s64 = ctx.r11.s32 >> 6;
	// rlwinm r6,r10,0,0,30
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// clrlwi r10,r8,29
	ctx.r10.u64 = ctx.r8.u32 & 0x7;
	// rlwinm r8,r11,0,0,22
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFE00;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// slw r9,r7,r23
	ctx.r9.u64 = ctx.r23.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r23.u8 & 0x3F));
	// rlwinm r7,r10,3,0,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// clrlwi r10,r11,26
	ctx.r10.u64 = ctx.r11.u32 & 0x3F;
	// add r7,r7,r6
	ctx.r7.u64 = ctx.r7.u64 + ctx.r6.u64;
	// add r11,r9,r24
	ctx.r11.u64 = ctx.r9.u64 + ctx.r24.u64;
	// rlwinm r9,r7,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r4,r11,r19
	ctx.r4.u64 = ctx.r11.u64 + ctx.r19.u64;
	// add r11,r9,r8
	ctx.r11.u64 = ctx.r9.u64 + ctx.r8.u64;
	// slw r5,r5,r23
	ctx.r5.u64 = ctx.r23.u8 & 0x20 ? 0 : (ctx.r5.u32 << (ctx.r23.u8 & 0x3F));
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r3,r11,r18
	ctx.r3.u64 = ctx.r11.u64 + ctx.r18.u64;
	// bl 0x82fa77c0
	ctx.lr = 0x82B04718;
	sub_82FA77C0(ctx, base);
loc_82B04718:
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// addi r16,r16,1
	ctx.r16.s64 = ctx.r16.s64 + 1;
	// cmplw cr6,r16,r11
	ctx.cr6.compare<uint32_t>(ctx.r16.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82b044a0
	if (ctx.cr6.lt) goto loc_82B044A0;
	// lwz r27,120(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// li r16,0
	ctx.r16.s64 = 0;
	// lwz r25,396(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 396);
	// lwz r26,380(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 380);
loc_82B04738:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// add r10,r10,r25
	ctx.r10.u64 = ctx.r10.u64 + ctx.r25.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// cmplw cr6,r11,r27
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r27.u32, ctx.xer);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// blt cr6,0x82b0446c
	if (ctx.cr6.lt) goto loc_82B0446C;
loc_82B04758:
	// cmplw cr6,r26,r18
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, ctx.r18.u32, ctx.xer);
	// bne cr6,0x82b0476c
	if (!ctx.cr6.eq) goto loc_82B0476C;
	// lis r4,9351
	ctx.r4.s64 = 612827136;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// bl 0x82691460
	ctx.lr = 0x82B0476C;
	sub_82691460(ctx, base);
loc_82B0476C:
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x82fa7690
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B04774"))) PPC_WEAK_FUNC(sub_82B04774);
PPC_FUNC_IMPL(__imp__sub_82B04774) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B04778"))) PPC_WEAK_FUNC(sub_82B04778);
PPC_FUNC_IMPL(__imp__sub_82B04778) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7640
	ctx.lr = 0x82B04780;
	__savegprlr_14(ctx, base);
	// stwu r1,-320(r1)
	ea = -320 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r28,404(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 404);
	// mr r18,r3
	ctx.r18.u64 = ctx.r3.u64;
	// stw r4,348(r1)
	PPC_STORE_U32(ctx.r1.u32 + 348, ctx.r4.u32);
	// mr r24,r5
	ctx.r24.u64 = ctx.r5.u64;
	// stw r5,356(r1)
	PPC_STORE_U32(ctx.r1.u32 + 356, ctx.r5.u32);
	// mr r21,r6
	ctx.r21.u64 = ctx.r6.u64;
	// mr r25,r7
	ctx.r25.u64 = ctx.r7.u64;
	// stw r7,372(r1)
	PPC_STORE_U32(ctx.r1.u32 + 372, ctx.r7.u32);
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// li r16,0
	ctx.r16.s64 = 0;
	// bne cr6,0x82b047cc
	if (!ctx.cr6.eq) goto loc_82B047CC;
	// stw r8,152(r1)
	PPC_STORE_U32(ctx.r1.u32 + 152, ctx.r8.u32);
	// addi r28,r1,144
	ctx.r28.s64 = ctx.r1.s64 + 144;
	// stw r9,156(r1)
	PPC_STORE_U32(ctx.r1.u32 + 156, ctx.r9.u32);
	// stw r16,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r16.u32);
	// stw r16,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r16.u32);
	// stw r16,160(r1)
	PPC_STORE_U32(ctx.r1.u32 + 160, ctx.r16.u32);
	// stw r10,164(r1)
	PPC_STORE_U32(ctx.r1.u32 + 164, ctx.r10.u32);
loc_82B047CC:
	// lwz r11,8(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 8);
	// cmplwi cr6,r21,0
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, 0, ctx.xer);
	// lwz r7,0(r28)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// lwz r6,12(r28)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r28.u32 + 12);
	// subf r29,r7,r11
	ctx.r29.s64 = ctx.r11.s64 - ctx.r7.s64;
	// lwz r5,20(r28)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r28.u32 + 20);
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// lwz r7,16(r28)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// subf r11,r11,r6
	ctx.r11.s64 = ctx.r6.s64 - ctx.r11.s64;
	// stw r29,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r29.u32);
	// subf r26,r7,r5
	ctx.r26.s64 = ctx.r5.s64 - ctx.r7.s64;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// stw r26,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r26.u32);
	// bne cr6,0x82b04814
	if (!ctx.cr6.eq) goto loc_82B04814;
	// stw r16,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r16.u32);
	// addi r21,r1,128
	ctx.r21.s64 = ctx.r1.s64 + 128;
	// stw r16,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r16.u32);
	// stw r16,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r16.u32);
loc_82B04814:
	// addi r11,r8,31
	ctx.r11.s64 = ctx.r8.s64 + 31;
	// lwz r31,412(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 412);
	// addi r9,r9,31
	ctx.r9.s64 = ctx.r9.s64 + 31;
	// rlwinm r11,r11,0,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFE0;
	// rlwinm r27,r9,0,0,26
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFE0;
	// stw r11,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r11.u32);
	// cmplw cr6,r25,r18
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, ctx.r18.u32, ctx.xer);
	// bne cr6,0x82b04870
	if (!ctx.cr6.eq) goto loc_82B04870;
	// addi r10,r10,3
	ctx.r10.s64 = ctx.r10.s64 + 3;
	// lis r4,9351
	ctx.r4.s64 = 612827136;
	// rlwinm r10,r10,0,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFC;
	// mullw r10,r10,r27
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r27.s32);
	// mullw r11,r10,r11
	ctx.r11.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r11.s32);
	// mullw r11,r11,r31
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r31.s32);
	// addi r11,r11,4095
	ctx.r11.s64 = ctx.r11.s64 + 4095;
	// rlwinm r30,r11,0,0,19
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFF000;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82691410
	ctx.lr = 0x82B0485C;
	sub_82691410(ctx, base);
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r19,r3
	ctx.r19.u64 = ctx.r3.u64;
	// bl 0x82af45a0
	ctx.lr = 0x82B0486C;
	sub_82AF45A0(ctx, base);
	// b 0x82b04874
	goto loc_82B04874;
loc_82B04870:
	// mr r19,r25
	ctx.r19.u64 = ctx.r25.u64;
loc_82B04874:
	// rlwinm r10,r31,30,2,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 30) & 0x3FFFFFFF;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// rlwinm r9,r31,28,4,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 28) & 0xFFFFFFF;
	// li r8,1
	ctx.r8.s64 = 1;
	// subf r9,r10,r9
	ctx.r9.s64 = ctx.r9.s64 - ctx.r10.s64;
	// rlwinm r7,r31,31,1,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 31) & 0x7FFFFFFF;
	// addi r6,r9,3
	ctx.r6.s64 = ctx.r9.s64 + 3;
	// srw r9,r7,r10
	ctx.r9.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r7.u32 >> (ctx.r10.u8 & 0x3F));
	// slw r8,r8,r6
	ctx.r8.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r6.u8 & 0x3F));
	// add r7,r11,r8
	ctx.r7.u64 = ctx.r11.u64 + ctx.r8.u64;
	// stw r8,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r8.u32);
	// addi r6,r8,-1
	ctx.r6.s64 = ctx.r8.s64 + -1;
	// add r5,r11,r29
	ctx.r5.u64 = ctx.r11.u64 + ctx.r29.u64;
	// addi r8,r8,-1
	ctx.r8.s64 = ctx.r8.s64 + -1;
	// andc r7,r7,r6
	ctx.r7.u64 = ctx.r7.u64 & ~ctx.r6.u64;
	// add r22,r9,r10
	ctx.r22.u64 = ctx.r9.u64 + ctx.r10.u64;
	// andc r10,r5,r8
	ctx.r10.u64 = ctx.r5.u64 & ~ctx.r8.u64;
	// subf r14,r11,r7
	ctx.r14.s64 = ctx.r7.s64 - ctx.r11.s64;
	// subf r15,r11,r10
	ctx.r15.s64 = ctx.r10.s64 - ctx.r11.s64;
	// addi r30,r22,6
	ctx.r30.s64 = ctx.r22.s64 + 6;
	// cmplw cr6,r14,r29
	ctx.cr6.compare<uint32_t>(ctx.r14.u32, ctx.r29.u32, ctx.xer);
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// bgt cr6,0x82b048d4
	if (ctx.cr6.gt) goto loc_82B048D4;
	// mr r11,r14
	ctx.r11.u64 = ctx.r14.u64;
loc_82B048D4:
	// lwz r10,8(r21)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r21.u32 + 8);
	// slw r11,r11,r22
	ctx.r11.u64 = ctx.r22.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r22.u8 & 0x3F));
	// mullw r10,r10,r24
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r24.s32);
	// stw r11,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r11.u32);
	// stw r16,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r16.u32);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x82b04be8
	if (ctx.cr6.eq) goto loc_82B04BE8;
	// rlwinm r11,r27,28,4,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 28) & 0xFFFFFFF;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
loc_82B048FC:
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,16(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 16);
	// lwz r9,96(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r10,92(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// rlwinm r17,r11,30,2,31
	ctx.r17.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFF;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// mullw r10,r9,r17
	ctx.r10.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r17.s32);
	// stw r17,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r17.u32);
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// clrlwi r11,r11,30
	ctx.r11.u64 = ctx.r11.u32 & 0x3;
	// beq cr6,0x82b04bc8
	if (ctx.cr6.eq) goto loc_82B04BC8;
	// slw r20,r11,r30
	ctx.r20.u64 = ctx.r30.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r30.u8 & 0x3F));
loc_82B04930:
	// lwz r11,4(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 4);
	// lwz r6,0(r28)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// add r11,r16,r11
	ctx.r11.u64 = ctx.r16.u64 + ctx.r11.u64;
	// lwz r7,100(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// clrlwi r10,r6,29
	ctx.r10.u64 = ctx.r6.u32 & 0x7;
	// lwz r5,104(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// rlwinm r27,r11,2,27,28
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x18;
	// lwz r9,4(r21)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r21.u32 + 4);
	// rlwinm r8,r11,28,4,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFF;
	// lwz r4,348(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 348);
	// add r3,r10,r27
	ctx.r3.u64 = ctx.r10.u64 + ctx.r27.u64;
	// lwz r31,0(r21)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// add r8,r8,r7
	ctx.r8.u64 = ctx.r8.u64 + ctx.r7.u64;
	// lwz r23,84(r1)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// rlwinm r10,r5,27,5,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 27) & 0x7FFFFFF;
	// lwz r5,108(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// slw r7,r3,r30
	ctx.r7.u64 = ctx.r30.u8 & 0x20 ? 0 : (ctx.r3.u32 << (ctx.r30.u8 & 0x3F));
	// mullw r26,r8,r10
	ctx.r26.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r10.s32);
	// rlwinm r10,r6,27,5,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 27) & 0x7FFFFFF;
	// rlwinm r3,r7,26,6,31
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 26) & 0x3FFFFFF;
	// add r10,r10,r26
	ctx.r10.u64 = ctx.r10.u64 + ctx.r26.u64;
	// rlwinm r8,r3,0,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFFFFFF0;
	// slw r10,r10,r30
	ctx.r10.u64 = ctx.r30.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r30.u8 & 0x3F));
	// rlwinm r10,r10,1,3,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1FFFFFFE;
	// rlwinm r7,r11,29,3,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// add r7,r7,r17
	ctx.r7.u64 = ctx.r7.u64 + ctx.r17.u64;
	// rlwinm r10,r10,1,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0xFFFFFFFE;
	// clrlwi r8,r3,28
	ctx.r8.u64 = ctx.r3.u32 & 0xF;
	// clrlwi r29,r7,31
	ctx.r29.u64 = ctx.r7.u32 & 0x1;
	// add r8,r10,r8
	ctx.r8.u64 = ctx.r10.u64 + ctx.r8.u64;
	// rlwinm r10,r6,29,3,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 29) & 0x1FFFFFFF;
	// rlwinm r25,r29,1,0,30
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r24,r11,4,27,27
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0x10;
	// add r10,r10,r25
	ctx.r10.u64 = ctx.r10.u64 + ctx.r25.u64;
	// add r11,r8,r20
	ctx.r11.u64 = ctx.r8.u64 + ctx.r20.u64;
	// rlwinm r10,r10,1,29,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x6;
	// add r11,r11,r24
	ctx.r11.u64 = ctx.r11.u64 + ctx.r24.u64;
	// add r10,r10,r29
	ctx.r10.u64 = ctx.r10.u64 + ctx.r29.u64;
	// srawi r8,r11,6
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3F) != 0);
	ctx.r8.s64 = ctx.r11.s32 >> 6;
	// rlwinm r7,r10,3,28,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0x8;
	// clrlwi r6,r8,29
	ctx.r6.u64 = ctx.r8.u32 & 0x7;
	// rlwinm r8,r10,0,0,30
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// add r10,r7,r6
	ctx.r10.u64 = ctx.r7.u64 + ctx.r6.u64;
	// add r7,r9,r16
	ctx.r7.u64 = ctx.r9.u64 + ctx.r16.u64;
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r9,r11,0,0,22
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFE00;
	// add r10,r10,r8
	ctx.r10.u64 = ctx.r10.u64 + ctx.r8.u64;
	// mullw r8,r7,r4
	ctx.r8.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r4.s32);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r23,r8,r23
	ctx.r23.u64 = ctx.r8.u64 + ctx.r23.u64;
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// clrlwi r9,r11,26
	ctx.r9.u64 = ctx.r11.u32 & 0x3F;
	// rlwinm r10,r10,3,0,28
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
	// slw r11,r31,r22
	ctx.r11.u64 = ctx.r22.u8 & 0x20 ? 0 : (ctx.r31.u32 << (ctx.r22.u8 & 0x3F));
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// add r11,r11,r23
	ctx.r11.u64 = ctx.r11.u64 + ctx.r23.u64;
	// add r4,r10,r19
	ctx.r4.u64 = ctx.r10.u64 + ctx.r19.u64;
	// add r3,r11,r18
	ctx.r3.u64 = ctx.r11.u64 + ctx.r18.u64;
	// bl 0x82fa77c0
	ctx.lr = 0x82B04A20;
	sub_82FA77C0(ctx, base);
	// mr r31,r14
	ctx.r31.u64 = ctx.r14.u64;
	// cmpw cr6,r14,r15
	ctx.cr6.compare<int32_t>(ctx.r14.s32, ctx.r15.s32, ctx.xer);
	// bge cr6,0x82b04af0
	if (!ctx.cr6.lt) goto loc_82B04AF0;
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// slw r17,r11,r22
	ctx.r17.u64 = ctx.r22.u8 & 0x20 ? 0 : (ctx.r11.u32 << (ctx.r22.u8 & 0x3F));
loc_82B04A34:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r5,r17
	ctx.r5.u64 = ctx.r17.u64;
	// lwz r10,0(r21)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// add r6,r10,r31
	ctx.r6.u64 = ctx.r10.u64 + ctx.r31.u64;
	// clrlwi r9,r11,29
	ctx.r9.u64 = ctx.r11.u32 & 0x7;
	// rlwinm r10,r11,27,5,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x7FFFFFF;
	// add r9,r9,r27
	ctx.r9.u64 = ctx.r9.u64 + ctx.r27.u64;
	// add r10,r10,r26
	ctx.r10.u64 = ctx.r10.u64 + ctx.r26.u64;
	// slw r9,r9,r30
	ctx.r9.u64 = ctx.r30.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r30.u8 & 0x3F));
	// rlwinm r7,r9,26,6,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 26) & 0x3FFFFFF;
	// slw r10,r10,r30
	ctx.r10.u64 = ctx.r30.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r30.u8 & 0x3F));
	// rlwinm r9,r10,1,3,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1FFFFFFE;
	// rlwinm r8,r7,0,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFF0;
	// clrlwi r10,r7,28
	ctx.r10.u64 = ctx.r7.u32 & 0xF;
	// add r8,r9,r8
	ctx.r8.u64 = ctx.r9.u64 + ctx.r8.u64;
	// rlwinm r9,r11,29,3,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
	// rlwinm r11,r8,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// add r9,r9,r25
	ctx.r9.u64 = ctx.r9.u64 + ctx.r25.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r10,r9,1,29,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x6;
	// add r11,r11,r20
	ctx.r11.u64 = ctx.r11.u64 + ctx.r20.u64;
	// add r10,r10,r29
	ctx.r10.u64 = ctx.r10.u64 + ctx.r29.u64;
	// add r11,r11,r24
	ctx.r11.u64 = ctx.r11.u64 + ctx.r24.u64;
	// rlwinm r8,r10,3,28,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0x8;
	// srawi r9,r11,6
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3F) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 6;
	// rlwinm r7,r10,0,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// clrlwi r10,r9,29
	ctx.r10.u64 = ctx.r9.u32 & 0x7;
	// rlwinm r9,r11,0,0,22
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFE00;
	// add r8,r8,r10
	ctx.r8.u64 = ctx.r8.u64 + ctx.r10.u64;
	// clrlwi r10,r11,26
	ctx.r10.u64 = ctx.r11.u32 & 0x3F;
	// rlwinm r8,r8,3,0,28
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 3) & 0xFFFFFFF8;
	// slw r11,r6,r22
	ctx.r11.u64 = ctx.r22.u8 & 0x20 ? 0 : (ctx.r6.u32 << (ctx.r22.u8 & 0x3F));
	// add r7,r8,r7
	ctx.r7.u64 = ctx.r8.u64 + ctx.r7.u64;
	// add r8,r11,r23
	ctx.r8.u64 = ctx.r11.u64 + ctx.r23.u64;
	// rlwinm r11,r7,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r8,r18
	ctx.r3.u64 = ctx.r8.u64 + ctx.r18.u64;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r4,r11,r19
	ctx.r4.u64 = ctx.r11.u64 + ctx.r19.u64;
	// bl 0x82fa77c0
	ctx.lr = 0x82B04ADC;
	sub_82FA77C0(ctx, base);
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// add r31,r31,r11
	ctx.r31.u64 = ctx.r31.u64 + ctx.r11.u64;
	// cmpw cr6,r31,r15
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r15.s32, ctx.xer);
	// blt cr6,0x82b04a34
	if (ctx.cr6.lt) goto loc_82B04A34;
	// lwz r17,112(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
loc_82B04AF0:
	// lwz r10,116(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplw cr6,r31,r10
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r10.u32, ctx.xer);
	// bge cr6,0x82b04ba8
	if (!ctx.cr6.lt) goto loc_82B04BA8;
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// subf r6,r31,r10
	ctx.r6.s64 = ctx.r10.s64 - ctx.r31.s64;
	// lwz r10,0(r21)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r21.u32 + 0);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// add r5,r10,r31
	ctx.r5.u64 = ctx.r10.u64 + ctx.r31.u64;
	// clrlwi r9,r11,29
	ctx.r9.u64 = ctx.r11.u32 & 0x7;
	// rlwinm r10,r11,27,5,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x7FFFFFF;
	// add r9,r9,r27
	ctx.r9.u64 = ctx.r9.u64 + ctx.r27.u64;
	// add r10,r10,r26
	ctx.r10.u64 = ctx.r10.u64 + ctx.r26.u64;
	// slw r9,r9,r30
	ctx.r9.u64 = ctx.r30.u8 & 0x20 ? 0 : (ctx.r9.u32 << (ctx.r30.u8 & 0x3F));
	// rlwinm r7,r9,26,6,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 26) & 0x3FFFFFF;
	// slw r10,r10,r30
	ctx.r10.u64 = ctx.r30.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r30.u8 & 0x3F));
	// rlwinm r9,r10,1,3,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1FFFFFFE;
	// rlwinm r8,r7,0,0,27
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFF0;
	// clrlwi r10,r7,28
	ctx.r10.u64 = ctx.r7.u32 & 0xF;
	// add r8,r9,r8
	ctx.r8.u64 = ctx.r9.u64 + ctx.r8.u64;
	// rlwinm r9,r11,29,3,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
	// rlwinm r11,r8,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 1) & 0xFFFFFFFE;
	// add r9,r9,r25
	ctx.r9.u64 = ctx.r9.u64 + ctx.r25.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// rlwinm r10,r9,1,29,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 1) & 0x6;
	// add r11,r11,r20
	ctx.r11.u64 = ctx.r11.u64 + ctx.r20.u64;
	// add r10,r10,r29
	ctx.r10.u64 = ctx.r10.u64 + ctx.r29.u64;
	// add r11,r11,r24
	ctx.r11.u64 = ctx.r11.u64 + ctx.r24.u64;
	// rlwinm r9,r10,3,28,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0x8;
	// srawi r8,r11,6
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3F) != 0);
	ctx.r8.s64 = ctx.r11.s32 >> 6;
	// rlwinm r7,r10,0,0,30
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// clrlwi r10,r8,29
	ctx.r10.u64 = ctx.r8.u32 & 0x7;
	// rlwinm r8,r11,0,0,22
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFE00;
	// add r9,r9,r10
	ctx.r9.u64 = ctx.r9.u64 + ctx.r10.u64;
	// clrlwi r10,r11,26
	ctx.r10.u64 = ctx.r11.u32 & 0x3F;
	// rlwinm r9,r9,3,0,28
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 3) & 0xFFFFFFF8;
	// slw r11,r5,r22
	ctx.r11.u64 = ctx.r22.u8 & 0x20 ? 0 : (ctx.r5.u32 << (ctx.r22.u8 & 0x3F));
	// add r9,r9,r7
	ctx.r9.u64 = ctx.r9.u64 + ctx.r7.u64;
	// add r11,r11,r23
	ctx.r11.u64 = ctx.r11.u64 + ctx.r23.u64;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// add r3,r11,r18
	ctx.r3.u64 = ctx.r11.u64 + ctx.r18.u64;
	// add r11,r9,r8
	ctx.r11.u64 = ctx.r9.u64 + ctx.r8.u64;
	// slw r5,r6,r22
	ctx.r5.u64 = ctx.r22.u8 & 0x20 ? 0 : (ctx.r6.u32 << (ctx.r22.u8 & 0x3F));
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r4,r11,r19
	ctx.r4.u64 = ctx.r11.u64 + ctx.r19.u64;
	// bl 0x82fa77c0
	ctx.lr = 0x82B04BA8;
	sub_82FA77C0(ctx, base);
loc_82B04BA8:
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// addi r16,r16,1
	ctx.r16.s64 = ctx.r16.s64 + 1;
	// cmplw cr6,r16,r11
	ctx.cr6.compare<uint32_t>(ctx.r16.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82b04930
	if (ctx.cr6.lt) goto loc_82B04930;
	// lwz r26,120(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// li r16,0
	ctx.r16.s64 = 0;
	// lwz r25,372(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 372);
	// lwz r24,356(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 356);
loc_82B04BC8:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// add r10,r10,r24
	ctx.r10.u64 = ctx.r10.u64 + ctx.r24.u64;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// cmplw cr6,r11,r26
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r26.u32, ctx.xer);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// blt cr6,0x82b048fc
	if (ctx.cr6.lt) goto loc_82B048FC;
loc_82B04BE8:
	// cmplw cr6,r25,r18
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, ctx.r18.u32, ctx.xer);
	// bne cr6,0x82b04bfc
	if (!ctx.cr6.eq) goto loc_82B04BFC;
	// lis r4,9351
	ctx.r4.s64 = 612827136;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// bl 0x82691460
	ctx.lr = 0x82B04BFC;
	sub_82691460(ctx, base);
loc_82B04BFC:
	// addi r1,r1,320
	ctx.r1.s64 = ctx.r1.s64 + 320;
	// b 0x82fa7690
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B04C04"))) PPC_WEAK_FUNC(sub_82B04C04);
PPC_FUNC_IMPL(__imp__sub_82B04C04) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B04C08"))) PPC_WEAK_FUNC(sub_82B04C08);
PPC_FUNC_IMPL(__imp__sub_82B04C08) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7644
	ctx.lr = 0x82B04C10;
	__savegprlr_15(ctx, base);
	// stwu r1,-288(r1)
	ea = -288 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// li r10,8
	ctx.r10.s64 = 8;
	// li r11,2
	ctx.r11.s64 = 2;
	// li r9,4
	ctx.r9.s64 = 4;
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// cntlzw r8,r6
	ctx.r8.u64 = ctx.r6.u32 == 0 ? 32 : __builtin_clz(ctx.r6.u32);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// stw r11,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r11.u32);
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// mr r25,r6
	ctx.r25.u64 = ctx.r6.u64;
	// stw r11,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
	// subfic r11,r8,31
	ctx.xer.ca = ctx.r8.u32 <= 31;
	ctx.r11.s64 = 31 - ctx.r8.s64;
	// stw r10,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r10.u32);
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// stw r10,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r10.u32);
	// rlwinm r4,r11,2,0,29
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r10,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r10.u32);
	// addi r6,r1,112
	ctx.r6.s64 = ctx.r1.s64 + 112;
	// stw r9,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r9.u32);
	// subfic r11,r11,7
	ctx.xer.ca = ctx.r11.u32 <= 7;
	ctx.r11.s64 = 7 - ctx.r11.s64;
	// li r5,1
	ctx.r5.s64 = 1;
	// addi r8,r26,-1
	ctx.r8.s64 = ctx.r26.s64 + -1;
	// slw r11,r5,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r5.u32 << (ctx.r11.u8 & 0x3F));
	// lwzx r30,r4,r7
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r7.u32);
	// addi r7,r11,31
	ctx.r7.s64 = ctx.r11.s64 + 31;
	// lwzx r31,r4,r6
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r6.u32);
	// rlwinm r27,r8,0,0,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 0) & 0xFFFFFFFC;
	// add r11,r30,r28
	ctx.r11.u64 = ctx.r30.u64 + ctx.r28.u64;
	// add r10,r31,r3
	ctx.r10.u64 = ctx.r31.u64 + ctx.r3.u64;
	// addi r8,r11,-1
	ctx.r8.s64 = ctx.r11.s64 + -1;
	// rlwinm r11,r7,0,0,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 0) & 0xFFFFFFE0;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// addi r9,r3,-1
	ctx.r9.s64 = ctx.r3.s64 + -1;
	// addi r5,r28,-1
	ctx.r5.s64 = ctx.r28.s64 + -1;
	// divwu r8,r8,r30
	ctx.r8.u32 = ctx.r8.u32 / ctx.r30.u32;
	// divwu r10,r10,r31
	ctx.r10.u32 = ctx.r10.u32 / ctx.r31.u32;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// mr r29,r3
	ctx.r29.u64 = ctx.r3.u64;
	// twllei r30,0
	if (ctx.r30.u32 <= 0) __builtin_debugtrap();
	// twllei r31,0
	if (ctx.r31.u32 <= 0) __builtin_debugtrap();
	// mullw r20,r10,r31
	ctx.r20.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r31.s32);
	// mullw r19,r8,r30
	ctx.r19.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r30.s32);
	// rlwinm r17,r9,0,0,26
	ctx.r17.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 0) & 0xFFFFFFE0;
	// andc r16,r5,r11
	ctx.r16.u64 = ctx.r5.u64 & ~ctx.r11.u64;
	// li r23,0
	ctx.r23.s64 = 0;
	// b 0x82b04d3c
	goto loc_82B04D3C;
loc_82B04CD4:
	// mr r18,r16
	ctx.r18.u64 = ctx.r16.u64;
	// cmplw cr6,r16,r28
	ctx.cr6.compare<uint32_t>(ctx.r16.u32, ctx.r28.u32, ctx.xer);
	// bge cr6,0x82b04d38
	if (!ctx.cr6.lt) goto loc_82B04D38;
	// addi r15,r30,-1
	ctx.r15.s64 = ctx.r30.s64 + -1;
loc_82B04CE4:
	// mr r24,r17
	ctx.r24.u64 = ctx.r17.u64;
	// cmplw cr6,r17,r29
	ctx.cr6.compare<uint32_t>(ctx.r17.u32, ctx.r29.u32, ctx.xer);
	// bge cr6,0x82b04d2c
	if (!ctx.cr6.lt) goto loc_82B04D2C;
	// add r22,r15,r18
	ctx.r22.u64 = ctx.r15.u64 + ctx.r18.u64;
	// addi r21,r31,-1
	ctx.r21.s64 = ctx.r31.s64 + -1;
loc_82B04CF8:
	// mr r8,r25
	ctx.r8.u64 = ctx.r25.u64;
	// mr r7,r19
	ctx.r7.u64 = ctx.r19.u64;
	// mr r6,r20
	ctx.r6.u64 = ctx.r20.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r22
	ctx.r4.u64 = ctx.r22.u64;
	// add r3,r21,r24
	ctx.r3.u64 = ctx.r21.u64 + ctx.r24.u64;
	// bl 0x82b041f8
	ctx.lr = 0x82B04D14;
	sub_82B041F8(ctx, base);
	// cmplw cr6,r23,r3
	ctx.cr6.compare<uint32_t>(ctx.r23.u32, ctx.r3.u32, ctx.xer);
	// bgt cr6,0x82b04d20
	if (ctx.cr6.gt) goto loc_82B04D20;
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
loc_82B04D20:
	// add r24,r24,r31
	ctx.r24.u64 = ctx.r24.u64 + ctx.r31.u64;
	// cmplw cr6,r24,r29
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, ctx.r29.u32, ctx.xer);
	// blt cr6,0x82b04cf8
	if (ctx.cr6.lt) goto loc_82B04CF8;
loc_82B04D2C:
	// add r18,r18,r30
	ctx.r18.u64 = ctx.r18.u64 + ctx.r30.u64;
	// cmplw cr6,r18,r28
	ctx.cr6.compare<uint32_t>(ctx.r18.u32, ctx.r28.u32, ctx.xer);
	// blt cr6,0x82b04ce4
	if (ctx.cr6.lt) goto loc_82B04CE4;
loc_82B04D38:
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
loc_82B04D3C:
	// cmplw cr6,r27,r26
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, ctx.r26.u32, ctx.xer);
	// blt cr6,0x82b04cd4
	if (ctx.cr6.lt) goto loc_82B04CD4;
	// mr r3,r23
	ctx.r3.u64 = ctx.r23.u64;
	// addi r1,r1,288
	ctx.r1.s64 = ctx.r1.s64 + 288;
	// b 0x82fa7694
	__restgprlr_15(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B04D50"))) PPC_WEAK_FUNC(sub_82B04D50);
PPC_FUNC_IMPL(__imp__sub_82B04D50) {
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
	// lwz r11,204(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 204);
	// lwz r31,196(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// bl 0x82b042e8
	ctx.lr = 0x82B04D74;
	sub_82B042E8(ctx, base);
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

__attribute__((alias("__imp__sub_82B04D88"))) PPC_WEAK_FUNC(sub_82B04D88);
PPC_FUNC_IMPL(__imp__sub_82B04D88) {
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
	// lwz r11,204(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 204);
	// lwz r31,196(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 196);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// stw r31,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r31.u32);
	// bl 0x82b04778
	ctx.lr = 0x82B04DAC;
	sub_82B04778(ctx, base);
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

__attribute__((alias("__imp__sub_82B04DC0"))) PPC_WEAK_FUNC(sub_82B04DC0);
PPC_FUNC_IMPL(__imp__sub_82B04DC0) {
	PPC_FUNC_PROLOGUE();
	// stw r3,20(r1)
	PPC_STORE_U32(ctx.r1.u32 + 20, ctx.r3.u32);
	// stw r4,28(r1)
	PPC_STORE_U32(ctx.r1.u32 + 28, ctx.r4.u32);
	// lwz r11,20(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 20);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// rlwinm r11,r11,0,26,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFFFFFFFE3F;
	// stw r11,20(r1)
	PPC_STORE_U32(ctx.r1.u32 + 20, ctx.r11.u32);
	// lwz r11,20(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 20);
	// lwz r10,28(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 28);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// lwz r11,28(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 28);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r11,28(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 28);
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,8(r11)
	PPC_STORE_U8(ctx.r11.u32 + 8, ctx.r10.u8);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B04E00"))) PPC_WEAK_FUNC(sub_82B04E00);
PPC_FUNC_IMPL(__imp__sub_82B04E00) {
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
	// stw r3,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// stw r4,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r4.u32);
	// stw r5,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r5.u32);
	// li r3,2496
	ctx.r3.s64 = 2496;
	// bl 0x82927480
	ctx.lr = 0x82B04E20;
	sub_82927480(ctx, base);
	// stw r3,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r3.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82b04e3c
	if (!ctx.cr6.eq) goto loc_82B04E3C;
	// lis r11,-32761
	ctx.r11.s64 = -2147024896;
	// ori r3,r11,14
	ctx.r3.u64 = ctx.r11.u64 | 14;
	// b 0x82b04e74
	goto loc_82B04E74;
loc_82B04E3C:
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// lwz r10,80(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// li r5,2496
	ctx.r5.s64 = 2496;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82fa7cf0
	ctx.lr = 0x82B04E58;
	sub_82FA7CF0(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,124(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// stw r10,2488(r11)
	PPC_STORE_U32(ctx.r11.u32 + 2488, ctx.r10.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,132(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// stw r10,2492(r11)
	PPC_STORE_U32(ctx.r11.u32 + 2492, ctx.r10.u32);
	// li r3,0
	ctx.r3.s64 = 0;
loc_82B04E74:
	// addi r1,r1,96
	ctx.r1.s64 = ctx.r1.s64 + 96;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B04E84"))) PPC_WEAK_FUNC(sub_82B04E84);
PPC_FUNC_IMPL(__imp__sub_82B04E84) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B04E88"))) PPC_WEAK_FUNC(sub_82B04E88);
PPC_FUNC_IMPL(__imp__sub_82B04E88) {
	PPC_FUNC_PROLOGUE();
	// stw r3,20(r1)
	PPC_STORE_U32(ctx.r1.u32 + 20, ctx.r3.u32);
	// stw r4,28(r1)
	PPC_STORE_U32(ctx.r1.u32 + 28, ctx.r4.u32);
	// lwz r11,20(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 20);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r11,28(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 28);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82b04eb4
	if (ctx.cr6.eq) goto loc_82B04EB4;
	// lwz r11,28(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 28);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
loc_82B04EB4:
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// ori r3,r11,16387
	ctx.r3.u64 = ctx.r11.u64 | 16387;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B04EC0"))) PPC_WEAK_FUNC(sub_82B04EC0);
PPC_FUNC_IMPL(__imp__sub_82B04EC0) {
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
	// stw r3,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r3.u32);
	// stw r4,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r4.u32);
	// stw r5,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r5.u32);
	// stw r6,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r6.u32);
	// stw r7,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r7.u32);
	// lwz r11,116(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lwz r6,148(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 148);
	// lwz r5,140(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// lwz r4,124(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r3,0(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82B04F0C;
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

__attribute__((alias("__imp__sub_82B04F1C"))) PPC_WEAK_FUNC(sub_82B04F1C);
PPC_FUNC_IMPL(__imp__sub_82B04F1C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B04F20"))) PPC_WEAK_FUNC(sub_82B04F20);
PPC_FUNC_IMPL(__imp__sub_82B04F20) {
	PPC_FUNC_PROLOGUE();
	// lis r10,-31975
	ctx.r10.s64 = -2095513600;
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r9,r10,4008
	ctx.r9.s64 = ctx.r10.s64 + 4008;
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
loc_82B04F30:
	// lhz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U16(ctx.r10.u32 + 0);
	// cmpw cr6,r8,r3
	ctx.cr6.compare<int32_t>(ctx.r8.s32, ctx.r3.s32, ctx.xer);
	// beq cr6,0x82b04f54
	if (ctx.cr6.eq) goto loc_82B04F54;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// cmplwi cr6,r11,171
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 171, ctx.xer);
	// blt cr6,0x82b04f30
	if (ctx.cr6.lt) goto loc_82B04F30;
	// li r3,0
	ctx.r3.s64 = 0;
	// blr 
	return;
loc_82B04F54:
	// rlwinm r11,r11,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// addi r10,r9,4
	ctx.r10.s64 = ctx.r9.s64 + 4;
	// lwzx r3,r11,r10
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B04F64"))) PPC_WEAK_FUNC(sub_82B04F64);
PPC_FUNC_IMPL(__imp__sub_82B04F64) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B04F68"))) PPC_WEAK_FUNC(sub_82B04F68);
PPC_FUNC_IMPL(__imp__sub_82B04F68) {
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
	// mr r3,r6
	ctx.r3.u64 = ctx.r6.u64;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// mr r4,r5
	ctx.r4.u64 = ctx.r5.u64;
	// bl 0x82b04f20
	ctx.lr = 0x82B04F88;
	sub_82B04F20(ctx, base);
	// mr. r5,r3
	ctx.r5.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// beq 0x82b04fa0
	if (ctx.cr0.eq) goto loc_82B04FA0;
	// mr r6,r7
	ctx.r6.u64 = ctx.r7.u64;
	// bl 0x82fad3e8
	ctx.lr = 0x82B04F9C;
	sub_82FAD3E8(ctx, base);
	// b 0x82b04fb0
	goto loc_82B04FB0;
loc_82B04FA0:
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// li r5,15
	ctx.r5.s64 = 15;
	// addi r4,r11,-24108
	ctx.r4.s64 = ctx.r11.s64 + -24108;
	// bl 0x82fa77c0
	ctx.lr = 0x82B04FB0;
	sub_82FA77C0(ctx, base);
loc_82B04FB0:
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

__attribute__((alias("__imp__sub_82B04FC4"))) PPC_WEAK_FUNC(sub_82B04FC4);
PPC_FUNC_IMPL(__imp__sub_82B04FC4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B04FC8"))) PPC_WEAK_FUNC(sub_82B04FC8);
PPC_FUNC_IMPL(__imp__sub_82B04FC8) {
	PPC_FUNC_PROLOGUE();
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r3,552(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 552);
	// lis r4,24973
	ctx.r4.s64 = 1636630528;
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// stw r10,552(r11)
	PPC_STORE_U32(ctx.r11.u32 + 552, ctx.r10.u32);
	// b 0x82691460
	sub_82691460(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B04FE0"))) PPC_WEAK_FUNC(sub_82B04FE0);
PPC_FUNC_IMPL(__imp__sub_82B04FE0) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,40(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r4,1
	ctx.r4.s64 = 1;
	// oris r10,r10,4096
	ctx.r10.u64 = ctx.r10.u64 | 268435456;
	// addi r3,r3,1136
	ctx.r3.s64 = ctx.r3.s64 + 1136;
	// stw r10,40(r11)
	PPC_STORE_U32(ctx.r11.u32 + 40, ctx.r10.u32);
	// b 0x82faab50
	sub_82FAAB50(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B04FFC"))) PPC_WEAK_FUNC(sub_82B04FFC);
PPC_FUNC_IMPL(__imp__sub_82B04FFC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B05000"))) PPC_WEAK_FUNC(sub_82B05000);
PPC_FUNC_IMPL(__imp__sub_82B05000) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa766c
	ctx.lr = 0x82B05008;
	__savegprlr_25(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r29,0(r4)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r25,r5
	ctx.r25.u64 = ctx.r5.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// mr r28,r6
	ctx.r28.u64 = ctx.r6.u64;
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82B05034;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r26,0(r3)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// rlwinm. r11,r26,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82b05194
	if (ctx.cr0.eq) goto loc_82B05194;
	// rlwinm. r11,r25,0,13,13
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 0) & 0x40000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82b05194
	if (!ctx.cr0.eq) goto loc_82B05194;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82b05088
	if (ctx.cr6.eq) goto loc_82B05088;
	// lis r11,-31975
	ctx.r11.s64 = -2095513600;
	// lwz r4,5384(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 5384);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_82B05060:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82b05060
	if (!ctx.cr6.eq) goto loc_82B05060;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// mtctr r28
	ctx.ctr.u64 = ctx.r28.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bctrl 
	ctx.lr = 0x82B05088;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82B05088:
	// li r11,0
	ctx.r11.s64 = 0;
	// rlwinm r10,r26,0,27,25
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 0) & 0xFFFFFFFFFFFFFFDF;
	// stw r11,28(r30)
	PPC_STORE_U32(ctx.r30.u32 + 28, ctx.r11.u32);
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,32(r30)
	PPC_STORE_U32(ctx.r30.u32 + 32, ctx.r11.u32);
	// stw r10,0(r30)
	PPC_STORE_U32(ctx.r30.u32 + 0, ctx.r10.u32);
	// stw r11,776(r31)
	PPC_STORE_U32(ctx.r31.u32 + 776, ctx.r11.u32);
	// stw r11,780(r31)
	PPC_STORE_U32(ctx.r31.u32 + 780, ctx.r11.u32);
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82B050B8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r8,r27
	ctx.r8.u64 = ctx.r27.u64;
	// bl 0x822d6f30
	ctx.lr = 0x82B050D4;
	sub_822D6F30(ctx, base);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmplwi cr6,r28,0
	ctx.cr6.compare<uint32_t>(ctx.r28.u32, 0, ctx.xer);
	// beq cr6,0x82b0519c
	if (ctx.cr6.eq) goto loc_82B0519C;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge cr6,0x82b05110
	if (!ctx.cr6.lt) goto loc_82B05110;
	// lwz r11,780(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 780);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82b05108
	if (ctx.cr6.eq) goto loc_82B05108;
	// lwz r10,776(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 776);
	// subf r11,r11,r10
	ctx.r11.s64 = ctx.r10.s64 - ctx.r11.s64;
	// subfic r11,r11,0
	ctx.xer.ca = ctx.r11.u32 <= 0;
	ctx.r11.s64 = 0 - ctx.r11.s64;
	// subfe r11,r11,r11
	temp.u8 = (~ctx.r11.u32 + ctx.r11.u32 < ~ctx.r11.u32) | (~ctx.r11.u32 + ctx.r11.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r11.u64 = ~ctx.r11.u64 + ctx.r11.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r30,r11,r30
	ctx.r30.u64 = ctx.r11.u64 & ctx.r30.u64;
loc_82B05108:
	// cmpwi cr6,r30,0
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// blt cr6,0x82b05150
	if (ctx.cr6.lt) goto loc_82B05150;
loc_82B05110:
	// lis r11,-31975
	ctx.r11.s64 = -2095513600;
	// lwz r4,5380(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 5380);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_82B0511C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82b0511c
	if (!ctx.cr6.eq) goto loc_82B0511C;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// mtctr r28
	ctx.ctr.u64 = ctx.r28.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bctrl 
	ctx.lr = 0x82B05144;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,780(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 780);
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// b 0x82b0518c
	goto loc_82B0518C;
loc_82B05150:
	// lis r11,-31975
	ctx.r11.s64 = -2095513600;
	// lwz r4,5376(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 5376);
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
loc_82B0515C:
	// lbz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r11.u32 + 0);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// bne cr6,0x82b0515c
	if (!ctx.cr6.eq) goto loc_82B0515C;
	// subf r11,r4,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r4.s64;
	// mtctr r28
	ctx.ctr.u64 = ctx.r28.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rotlwi r5,r11,0
	ctx.r5.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
	// bctrl 
	ctx.lr = 0x82B05184;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,780(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 780);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
loc_82B0518C:
	// stw r11,780(r31)
	PPC_STORE_U32(ctx.r31.u32 + 780, ctx.r11.u32);
	// b 0x82b0519c
	goto loc_82B0519C;
loc_82B05194:
	// lis r30,-32768
	ctx.r30.s64 = -2147483648;
	// ori r30,r30,16389
	ctx.r30.u64 = ctx.r30.u64 | 16389;
loc_82B0519C:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82fa76bc
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B051A8"))) PPC_WEAK_FUNC(sub_82B051A8);
PPC_FUNC_IMPL(__imp__sub_82B051A8) {
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
	// mr r30,r4
	ctx.r30.u64 = ctx.r4.u64;
	// mr r7,r5
	ctx.r7.u64 = ctx.r5.u64;
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// li r5,256
	ctx.r5.s64 = 256;
	// addi r4,r1,80
	ctx.r4.s64 = ctx.r1.s64 + 80;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x82b04f68
	ctx.lr = 0x82B051D8;
	sub_82B04F68(ctx, base);
	// lwz r11,2492(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2492);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82b05208
	if (ctx.cr6.eq) goto loc_82B05208;
	// cmpwi cr6,r30,3537
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 3537, ctx.xer);
	// beq cr6,0x82b05208
	if (ctx.cr6.eq) goto loc_82B05208;
	// addi r7,r1,80
	ctx.r7.s64 = ctx.r1.s64 + 80;
	// lwz r3,2488(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2488);
	// addi r6,r30,-1100
	ctx.r6.s64 = ctx.r30.s64 + -1100;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// li r5,0
	ctx.r5.s64 = 0;
	// li r4,1
	ctx.r4.s64 = 1;
	// bctrl 
	ctx.lr = 0x82B05208;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82B05208:
	// cmpwi cr6,r30,3517
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 3517, ctx.xer);
	// beq cr6,0x82b05244
	if (ctx.cr6.eq) goto loc_82B05244;
	// cmpwi cr6,r30,3525
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 3525, ctx.xer);
	// beq cr6,0x82b05250
	if (ctx.cr6.eq) goto loc_82B05250;
	// cmpwi cr6,r30,3527
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 3527, ctx.xer);
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// beq cr6,0x82b0523c
	if (ctx.cr6.eq) goto loc_82B0523C;
	// cmpwi cr6,r30,3537
	ctx.cr6.compare<int32_t>(ctx.r30.s32, 3537, ctx.xer);
	// beq cr6,0x82b05234
	if (ctx.cr6.eq) goto loc_82B05234;
	// ori r11,r11,16389
	ctx.r11.u64 = ctx.r11.u64 | 16389;
	// b 0x82b0524c
	goto loc_82B0524C;
loc_82B05234:
	// ori r11,r11,16385
	ctx.r11.u64 = ctx.r11.u64 | 16385;
	// b 0x82b0524c
	goto loc_82B0524C;
loc_82B0523C:
	// ori r11,r11,16388
	ctx.r11.u64 = ctx.r11.u64 | 16388;
	// b 0x82b0524c
	goto loc_82B0524C;
loc_82B05244:
	// lis r11,-32761
	ctx.r11.s64 = -2147024896;
	// ori r11,r11,14
	ctx.r11.u64 = ctx.r11.u64 | 14;
loc_82B0524C:
	// stw r11,2480(r31)
	PPC_STORE_U32(ctx.r31.u32 + 2480, ctx.r11.u32);
loc_82B05250:
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// addi r3,r31,1136
	ctx.r3.s64 = ctx.r31.s64 + 1136;
	// bl 0x82faab50
	ctx.lr = 0x82B0525C;
	sub_82FAAB50(ctx, base);
}

__attribute__((alias("__imp__sub_82B0525C"))) PPC_WEAK_FUNC(sub_82B0525C);
PPC_FUNC_IMPL(__imp__sub_82B0525C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B05260"))) PPC_WEAK_FUNC(sub_82B05260);
PPC_FUNC_IMPL(__imp__sub_82B05260) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// std r5,32(r1)
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.r5.u64);
	// std r6,40(r1)
	PPC_STORE_U64(ctx.r1.u32 + 40, ctx.r6.u64);
	// std r7,48(r1)
	PPC_STORE_U64(ctx.r1.u32 + 48, ctx.r7.u64);
	// std r8,56(r1)
	PPC_STORE_U64(ctx.r1.u32 + 56, ctx.r8.u64);
	// std r9,64(r1)
	PPC_STORE_U64(ctx.r1.u32 + 64, ctx.r9.u64);
	// std r10,72(r1)
	PPC_STORE_U64(ctx.r1.u32 + 72, ctx.r10.u64);
	// stwu r1,-368(r1)
	ea = -368 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r4,396(r1)
	PPC_STORE_U32(ctx.r1.u32 + 396, ctx.r4.u32);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r10,r1,400
	ctx.r10.s64 = ctx.r1.s64 + 400;
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// li r5,256
	ctx.r5.s64 = 256;
	// addi r4,r1,96
	ctx.r4.s64 = ctx.r1.s64 + 96;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r7,80(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82b04f68
	ctx.lr = 0x82B052B0;
	sub_82B04F68(ctx, base);
	// lwz r11,2492(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2492);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82b052dc
	if (ctx.cr6.eq) goto loc_82B052DC;
	// lwz r10,396(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 396);
	// addi r7,r1,96
	ctx.r7.s64 = ctx.r1.s64 + 96;
	// li r5,0
	ctx.r5.s64 = 0;
	// lwz r3,2488(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 2488);
	// addi r6,r10,-1100
	ctx.r6.s64 = ctx.r10.s64 + -1100;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// li r4,0
	ctx.r4.s64 = 0;
	// bctrl 
	ctx.lr = 0x82B052DC;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
loc_82B052DC:
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

__attribute__((alias("__imp__sub_82B052F0"))) PPC_WEAK_FUNC(sub_82B052F0);
PPC_FUNC_IMPL(__imp__sub_82B052F0) {
	PPC_FUNC_PROLOGUE();
	// rlwinm r11,r3,0,0,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFFFF000;
	// cmplwi cr6,r5,132
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 132, ctx.xer);
	// lwz r10,0(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// ble cr6,0x82b05330
	if (!ctx.cr6.gt) goto loc_82B05330;
	// addi r3,r4,-12
	ctx.r3.s64 = ctx.r4.s64 + -12;
	// lis r4,24973
	ctx.r4.s64 = 1636630528;
	// rlwinm r11,r3,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r10,r10,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// b 0x82691460
	sub_82691460(ctx, base);
	return;
loc_82B05330:
	// rlwinm r11,r5,30,2,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 30) & 0x3FFFFFFF;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r9,r11,r10
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r10.u32);
	// stw r9,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r9.u32);
	// stwx r4,r11,r10
	PPC_STORE_U32(ctx.r11.u32 + ctx.r10.u32, ctx.r4.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B0534C"))) PPC_WEAK_FUNC(sub_82B0534C);
PPC_FUNC_IMPL(__imp__sub_82B0534C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B05350"))) PPC_WEAK_FUNC(sub_82B05350);
PPC_FUNC_IMPL(__imp__sub_82B05350) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r5,32(r1)
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.r5.u64);
	// std r6,40(r1)
	PPC_STORE_U64(ctx.r1.u32 + 40, ctx.r6.u64);
	// std r7,48(r1)
	PPC_STORE_U64(ctx.r1.u32 + 48, ctx.r7.u64);
	// std r8,56(r1)
	PPC_STORE_U64(ctx.r1.u32 + 56, ctx.r8.u64);
	// std r9,64(r1)
	PPC_STORE_U64(ctx.r1.u32 + 64, ctx.r9.u64);
	// std r10,72(r1)
	PPC_STORE_U64(ctx.r1.u32 + 72, ctx.r10.u64);
	// stwu r1,-96(r1)
	ea = -96 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r4,124(r1)
	PPC_STORE_U32(ctx.r1.u32 + 124, ctx.r4.u32);
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// addi r10,r1,128
	ctx.r10.s64 = ctx.r1.s64 + 128;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r5,80(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82b051a8
	ctx.lr = 0x82B0538C;
	sub_82B051A8(ctx, base);
}

__attribute__((alias("__imp__sub_82B0538C"))) PPC_WEAK_FUNC(sub_82B0538C);
PPC_FUNC_IMPL(__imp__sub_82B0538C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B05390"))) PPC_WEAK_FUNC(sub_82B05390);
PPC_FUNC_IMPL(__imp__sub_82B05390) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// std r5,32(r1)
	PPC_STORE_U64(ctx.r1.u32 + 32, ctx.r5.u64);
	// std r6,40(r1)
	PPC_STORE_U64(ctx.r1.u32 + 40, ctx.r6.u64);
	// std r7,48(r1)
	PPC_STORE_U64(ctx.r1.u32 + 48, ctx.r7.u64);
	// std r8,56(r1)
	PPC_STORE_U64(ctx.r1.u32 + 56, ctx.r8.u64);
	// std r9,64(r1)
	PPC_STORE_U64(ctx.r1.u32 + 64, ctx.r9.u64);
	// std r10,72(r1)
	PPC_STORE_U64(ctx.r1.u32 + 72, ctx.r10.u64);
	// stwu r1,-400(r1)
	ea = -400 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r4,428(r1)
	PPC_STORE_U32(ctx.r1.u32 + 428, ctx.r4.u32);
	// addi r11,r1,112
	ctx.r11.s64 = ctx.r1.s64 + 112;
	// addi r10,r1,432
	ctx.r10.s64 = ctx.r1.s64 + 432;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// li r4,256
	ctx.r4.s64 = 256;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// lwz r6,112(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// bl 0x82fad3e8
	ctx.lr = 0x82B053E0;
	sub_82FAD3E8(ctx, base);
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// li r4,3542
	ctx.r4.s64 = 3542;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b05350
	ctx.lr = 0x82B053F0;
	sub_82B05350(ctx, base);
}

__attribute__((alias("__imp__sub_82B053F0"))) PPC_WEAK_FUNC(sub_82B053F0);
PPC_FUNC_IMPL(__imp__sub_82B053F0) {
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
	// bl 0x8296ce40
	ctx.lr = 0x82B05410;
	sub_8296CE40(ctx, base);
	// clrlwi. r11,r30,31
	ctx.r11.u64 = ctx.r30.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82b0542c
	if (ctx.cr0.eq) goto loc_82B0542C;
	// rlwinm r11,r31,0,0,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 0) & 0xFFFFF000;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// lwz r10,12(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// stw r10,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r10.u32);
	// stw r31,12(r11)
	PPC_STORE_U32(ctx.r11.u32 + 12, ctx.r31.u32);
loc_82B0542C:
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

__attribute__((alias("__imp__sub_82B05448"))) PPC_WEAK_FUNC(sub_82B05448);
PPC_FUNC_IMPL(__imp__sub_82B05448) {
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
	// addi r31,r3,152
	ctx.r31.s64 = ctx.r3.s64 + 152;
loc_82B0545C:
	// lwz r3,4(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// clrlwi. r11,r3,31
	ctx.r11.u64 = ctx.r3.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82b054a0
	if (!ctx.cr0.eq) goto loc_82B054A0;
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82b054a0
	if (ctx.cr0.eq) goto loc_82B054A0;
	// rlwinm r11,r3,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0xFFFFFFFE;
	// lis r4,24973
	ctx.r4.s64 = 1636630528;
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r10,r10,0,0,30
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r9,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r9.u32);
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// bl 0x82691460
	ctx.lr = 0x82B0549C;
	sub_82691460(ctx, base);
	// b 0x82b0545c
	goto loc_82B0545C;
loc_82B054A0:
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

__attribute__((alias("__imp__sub_82B054B4"))) PPC_WEAK_FUNC(sub_82B054B4);
PPC_FUNC_IMPL(__imp__sub_82B054B4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B054B8"))) PPC_WEAK_FUNC(sub_82B054B8);
PPC_FUNC_IMPL(__imp__sub_82B054B8) {
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
	// lwz r3,132(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 132);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82b054f4
	if (ctx.cr6.eq) goto loc_82B054F4;
loc_82B054DC:
	// lis r4,-24435
	ctx.r4.s64 = -1601372160;
	// lwz r31,4(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 4);
	// bl 0x82691460
	ctx.lr = 0x82B054E8;
	sub_82691460(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// bne cr6,0x82b054dc
	if (!ctx.cr6.eq) goto loc_82B054DC;
loc_82B054F4:
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82b05448
	ctx.lr = 0x82B054FC;
	sub_82B05448(ctx, base);
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

__attribute__((alias("__imp__sub_82B05514"))) PPC_WEAK_FUNC(sub_82B05514);
PPC_FUNC_IMPL(__imp__sub_82B05514) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B05518"))) PPC_WEAK_FUNC(sub_82B05518);
PPC_FUNC_IMPL(__imp__sub_82B05518) {
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
	// lwz r30,132(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 132);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// b 0x82b05548
	goto loc_82B05548;
loc_82B05538:
	// li r5,4088
	ctx.r5.s64 = 4088;
	// addi r3,r30,8
	ctx.r3.s64 = ctx.r30.s64 + 8;
	// bl 0x82fa7cf0
	ctx.lr = 0x82B05544;
	sub_82FA7CF0(ctx, base);
	// lwz r30,4(r30)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
loc_82B05548:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// li r4,0
	ctx.r4.s64 = 0;
	// bne cr6,0x82b05538
	if (!ctx.cr6.eq) goto loc_82B05538;
	// lwz r11,132(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// li r5,132
	ctx.r5.s64 = 132;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addi r10,r11,8
	ctx.r10.s64 = ctx.r11.s64 + 8;
	// stw r10,144(r31)
	PPC_STORE_U32(ctx.r31.u32 + 144, ctx.r10.u32);
	// stw r11,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r11.u32);
	// bl 0x82fa7cf0
	ctx.lr = 0x82B05570;
	sub_82FA7CF0(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b05448
	ctx.lr = 0x82B05578;
	sub_82B05448(ctx, base);
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

__attribute__((alias("__imp__sub_82B05590"))) PPC_WEAK_FUNC(sub_82B05590);
PPC_FUNC_IMPL(__imp__sub_82B05590) {
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
	// lis r4,-8051
	ctx.r4.s64 = -527630336;
	// li r3,4096
	ctx.r3.s64 = 4096;
	// bl 0x82691410
	ctx.lr = 0x82B055B0;
	sub_82691410(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// bne 0x82b055c4
	if (!ctx.cr0.eq) goto loc_82B055C4;
	// li r4,3517
	ctx.r4.s64 = 3517;
	// lwz r3,148(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 148);
	// bl 0x82b05350
	ctx.lr = 0x82B055C4;
	sub_82B05350(ctx, base);
loc_82B055C4:
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r31,0(r3)
	PPC_STORE_U32(ctx.r3.u32 + 0, ctx.r31.u32);
	// stw r11,4(r3)
	PPC_STORE_U32(ctx.r3.u32 + 4, ctx.r11.u32);
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

__attribute__((alias("__imp__sub_82B055E4"))) PPC_WEAK_FUNC(sub_82B055E4);
PPC_FUNC_IMPL(__imp__sub_82B055E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B055E8"))) PPC_WEAK_FUNC(sub_82B055E8);
PPC_FUNC_IMPL(__imp__sub_82B055E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r24,-28108(r23)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r23.u32 + -28108);
	// lwz r16,9128(r30)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r30.u32 + 9128);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r30,-24(r1)
	PPC_STORE_U64(ctx.r1.u32 + -24, ctx.r30.u64);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// addi r31,r1,-112
	ctx.r31.s64 = ctx.r1.s64 + -112;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r3,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r3.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lwz r3,772(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 772);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82b05638
	if (ctx.cr6.eq) goto loc_82B05638;
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82b053f0
	ctx.lr = 0x82B05630;
	sub_82B053F0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,772(r30)
	PPC_STORE_U32(ctx.r30.u32 + 772, ctx.r11.u32);
loc_82B05638:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x82b0564c
	// ERROR 82B0564C
	return;
}

__attribute__((alias("__imp__sub_82B055F0"))) PPC_WEAK_FUNC(sub_82B055F0);
PPC_FUNC_IMPL(__imp__sub_82B055F0) {
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
	// addi r31,r1,-112
	ctx.r31.s64 = ctx.r1.s64 + -112;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r3,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r3.u32);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lwz r3,772(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 772);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82b05638
	if (ctx.cr6.eq) goto loc_82B05638;
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// li r4,1
	ctx.r4.s64 = 1;
	// bl 0x82b053f0
	ctx.lr = 0x82B05630;
	sub_82B053F0(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,772(r30)
	PPC_STORE_U32(ctx.r30.u32 + 772, ctx.r11.u32);
loc_82B05638:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x82b0564c
	goto loc_82B0564C;
	// lwz r30,132(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
loc_82B0564C:
	// nop 
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lwz r3,768(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 768);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82b05674
	if (ctx.cr6.eq) goto loc_82B05674;
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// bl 0x8266cb90
	ctx.lr = 0x82B0566C;
	sub_8266CB90(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,768(r30)
	PPC_STORE_U32(ctx.r30.u32 + 768, ctx.r11.u32);
loc_82B05674:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x82b05688
	goto loc_82B05688;
	// lwz r30,132(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
loc_82B05688:
	// addi r3,r30,812
	ctx.r3.s64 = ctx.r30.s64 + 812;
	// bl 0x82b054b8
	ctx.lr = 0x82B05690;
	sub_82B054B8(ctx, base);
	// addi r3,r30,972
	ctx.r3.s64 = ctx.r30.s64 + 972;
	// bl 0x82b054b8
	ctx.lr = 0x82B05698;
	sub_82B054B8(ctx, base);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// lwz r3,784(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 784);
	// bl 0x82691460
	ctx.lr = 0x82B056A4;
	sub_82691460(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,784(r30)
	PPC_STORE_U32(ctx.r30.u32 + 784, ctx.r11.u32);
	// addi r1,r31,112
	ctx.r1.s64 = ctx.r31.s64 + 112;
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

__attribute__((alias("__imp__sub_82B05648"))) PPC_WEAK_FUNC(sub_82B05648);
PPC_FUNC_IMPL(__imp__sub_82B05648) {
	PPC_FUNC_PROLOGUE();
	// lwz r30,132(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// nop 
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lwz r3,768(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 768);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82b05674
	if (ctx.cr6.eq) goto loc_82B05674;
	// stw r3,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r3.u32);
	// bl 0x8266cb90
	ctx.lr = 0x82B0566C;
	sub_8266CB90(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,768(r30)
	PPC_STORE_U32(ctx.r30.u32 + 768, ctx.r11.u32);
loc_82B05674:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x82b05688
	// ERROR 82B05688
	return;
}

__attribute__((alias("__imp__sub_82B05684"))) PPC_WEAK_FUNC(sub_82B05684);
PPC_FUNC_IMPL(__imp__sub_82B05684) {
	PPC_FUNC_PROLOGUE();
	// lwz r30,132(r31)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// addi r3,r30,812
	ctx.r3.s64 = ctx.r30.s64 + 812;
	// bl 0x82b054b8
	ctx.lr = 0x82B05690;
	sub_82B054B8(ctx, base);
	// addi r3,r30,972
	ctx.r3.s64 = ctx.r30.s64 + 972;
	// bl 0x82b054b8
	ctx.lr = 0x82B05698;
	sub_82B054B8(ctx, base);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// lwz r3,784(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 784);
	// bl 0x82691460
	ctx.lr = 0x82B056A4;
	sub_82691460(ctx, base);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,784(r30)
	PPC_STORE_U32(ctx.r30.u32 + 784, ctx.r11.u32);
	// addi r1,r31,112
	ctx.r1.s64 = ctx.r31.s64 + 112;
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

__attribute__((alias("__imp__sub_82B056C4"))) PPC_WEAK_FUNC(sub_82B056C4);
PPC_FUNC_IMPL(__imp__sub_82B056C4) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B056D0"))) PPC_WEAK_FUNC(sub_82B056D0);
PPC_FUNC_IMPL(__imp__sub_82B056D0) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B056DC"))) PPC_WEAK_FUNC(sub_82B056DC);
PPC_FUNC_IMPL(__imp__sub_82B056DC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B056E0"))) PPC_WEAK_FUNC(sub_82B056E0);
PPC_FUNC_IMPL(__imp__sub_82B056E0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa766c
	ctx.lr = 0x82B056E8;
	__savegprlr_25(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,40(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// andis. r11,r11,5
	ctx.r11.u64 = ctx.r11.u64 & 327680;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r28,r5
	ctx.r28.u64 = ctx.r5.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// mr r25,r7
	ctx.r25.u64 = ctx.r7.u64;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82b05714
	if (ctx.cr0.eq) goto loc_82B05714;
	// bl 0x82b7b228
	ctx.lr = 0x82B05714;
	sub_82B7B228(ctx, base);
loc_82B05714:
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// rlwinm. r11,r11,0,7,8
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1800000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82b05728
	if (ctx.cr0.eq) goto loc_82B05728;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b7fbb0
	ctx.lr = 0x82B05728;
	sub_82B7FBB0(ctx, base);
loc_82B05728:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b9f3a0
	ctx.lr = 0x82B05730;
	sub_82B9F3A0(ctx, base);
	// addi r30,r31,972
	ctx.r30.s64 = ctx.r31.s64 + 972;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82b05518
	ctx.lr = 0x82B0573C;
	sub_82B05518(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b73d08
	ctx.lr = 0x82B05744;
	sub_82B73D08(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82b05518
	ctx.lr = 0x82B0574C;
	sub_82B05518(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b69e08
	ctx.lr = 0x82B05754;
	sub_82B69E08(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82b05518
	ctx.lr = 0x82B0575C;
	sub_82B05518(ctx, base);
	// lwz r11,116(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// li r27,0
	ctx.r27.s64 = 0;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82b05784
	if (ctx.cr6.eq) goto loc_82B05784;
	// stw r27,680(r31)
	PPC_STORE_U32(ctx.r31.u32 + 680, ctx.r27.u32);
	// stw r27,684(r31)
	PPC_STORE_U32(ctx.r31.u32 + 684, ctx.r27.u32);
	// stw r27,696(r31)
	PPC_STORE_U32(ctx.r31.u32 + 696, ctx.r27.u32);
	// stw r27,700(r31)
	PPC_STORE_U32(ctx.r31.u32 + 700, ctx.r27.u32);
	// stw r27,704(r31)
	PPC_STORE_U32(ctx.r31.u32 + 704, ctx.r27.u32);
	// stw r27,708(r31)
	PPC_STORE_U32(ctx.r31.u32 + 708, ctx.r27.u32);
loc_82B05784:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b4f4a8
	ctx.lr = 0x82B0578C;
	sub_82B4F4A8(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82b05518
	ctx.lr = 0x82B05794;
	sub_82B05518(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b4d720
	ctx.lr = 0x82B0579C;
	sub_82B4D720(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82b05518
	ctx.lr = 0x82B057A4;
	sub_82B05518(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b46538
	ctx.lr = 0x82B057AC;
	sub_82B46538(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82b05518
	ctx.lr = 0x82B057B4;
	sub_82B05518(ctx, base);
	// lwz r11,116(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82b057c8
	if (ctx.cr6.eq) goto loc_82B057C8;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b432e8
	ctx.lr = 0x82B057C8;
	sub_82B432E8(ctx, base);
loc_82B057C8:
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// rlwinm. r11,r11,0,16,16
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x8000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82b057dc
	if (ctx.cr0.eq) goto loc_82B057DC;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b34c08
	ctx.lr = 0x82B057DC;
	sub_82B34C08(ctx, base);
loc_82B057DC:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b2f788
	ctx.lr = 0x82B057E4;
	sub_82B2F788(ctx, base);
	// clrlwi. r11,r3,24
	ctx.r11.u64 = ctx.r3.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82b057f4
	if (ctx.cr0.eq) goto loc_82B057F4;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b2e718
	ctx.lr = 0x82B057F4;
	sub_82B2E718(ctx, base);
loc_82B057F4:
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// ori r11,r11,128
	ctx.r11.u64 = ctx.r11.u64 | 128;
	// rlwinm. r10,r11,0,29,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// beq 0x82b05828
	if (ctx.cr0.eq) goto loc_82B05828;
	// lwz r11,116(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82b05820
	if (ctx.cr6.eq) goto loc_82B05820;
	// lwz r11,40(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 40);
	// ori r11,r11,4096
	ctx.r11.u64 = ctx.r11.u64 | 4096;
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
loc_82B05820:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b1d808
	ctx.lr = 0x82B05828;
	sub_82B1D808(ctx, base);
loc_82B05828:
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// rlwinm. r10,r11,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82b05840
	if (ctx.cr0.eq) goto loc_82B05840;
	// rlwinm. r11,r11,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq 0x82b05844
	if (ctx.cr0.eq) goto loc_82B05844;
loc_82B05840:
	// mr r11,r27
	ctx.r11.u64 = ctx.r27.u64;
loc_82B05844:
	// clrlwi. r11,r11,24
	ctx.r11.u64 = ctx.r11.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82b05854
	if (ctx.cr0.eq) goto loc_82B05854;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b29010
	ctx.lr = 0x82B05854;
	sub_82B29010(ctx, base);
loc_82B05854:
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b28af8
	ctx.lr = 0x82B0585C;
	sub_82B28AF8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b25d90
	ctx.lr = 0x82B05864;
	sub_82B25D90(ctx, base);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82b05518
	ctx.lr = 0x82B0586C;
	sub_82B05518(ctx, base);
	// lwz r11,116(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82b05890
	if (ctx.cr6.eq) goto loc_82B05890;
	// stw r27,680(r31)
	PPC_STORE_U32(ctx.r31.u32 + 680, ctx.r27.u32);
	// stw r27,684(r31)
	PPC_STORE_U32(ctx.r31.u32 + 684, ctx.r27.u32);
	// stw r27,696(r31)
	PPC_STORE_U32(ctx.r31.u32 + 696, ctx.r27.u32);
	// stw r27,700(r31)
	PPC_STORE_U32(ctx.r31.u32 + 700, ctx.r27.u32);
	// stw r27,704(r31)
	PPC_STORE_U32(ctx.r31.u32 + 704, ctx.r27.u32);
	// stw r27,708(r31)
	PPC_STORE_U32(ctx.r31.u32 + 708, ctx.r27.u32);
loc_82B05890:
	// mr r7,r25
	ctx.r7.u64 = ctx.r25.u64;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b210a8
	ctx.lr = 0x82B058A8;
	sub_82B210A8(ctx, base);
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82b05a18
	if (!ctx.cr0.eq) goto loc_82B05A18;
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// rlwinm. r11,r11,0,18,18
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82b05900
	if (ctx.cr0.eq) goto loc_82B05900;
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// lis r10,-1
	ctx.r10.s64 = -65536;
	// lwz r3,0(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// rlwinm r11,r11,0,0,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFF0000;
	// cmplw cr6,r11,r10
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r10.u32, ctx.xer);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// beq cr6,0x82b058f0
	if (ctx.cr6.eq) goto loc_82B058F0;
	// bctrl 
	ctx.lr = 0x82B058E8;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// bl 0x82b25038
	ctx.lr = 0x82B058EC;
	sub_82B25038(ctx, base);
	// b 0x82b058f8
	goto loc_82B058F8;
loc_82B058F0:
	// bctrl 
	ctx.lr = 0x82B058F4;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// bl 0x82b25040
	ctx.lr = 0x82B058F8;
	sub_82B25040(ctx, base);
loc_82B058F8:
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bne cr6,0x82b05a18
	if (!ctx.cr6.eq) goto loc_82B05A18;
loc_82B05900:
	// lwz r11,52(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 52);
	// lwz r10,792(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 792);
	// rlwinm. r11,r11,0,12,12
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// rlwinm r29,r10,10,15,21
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 10) & 0x1FC00;
	// beq 0x82b05918
	if (ctx.cr0.eq) goto loc_82B05918;
	// oris r29,r29,4
	ctx.r29.u64 = ctx.r29.u64 | 262144;
loc_82B05918:
	// lwz r30,0(r26)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r11,16(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 16);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82B05930;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// lwz r11,12(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 12);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82B05948;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// lis r11,-32078
	ctx.r11.s64 = -2102263808;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r7,r11,-7136
	ctx.r7.s64 = ctx.r11.s64 + -7136;
	// mr r8,r31
	ctx.r8.u64 = ctx.r31.u64;
	// bl 0x822d6f30
	ctx.lr = 0x82B05964;
	sub_822D6F30(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x82b05a18
	if (!ctx.cr0.lt) goto loc_82B05A18;
	// lwz r11,780(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 780);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82b05984
	if (ctx.cr6.eq) goto loc_82B05984;
	// lwz r10,776(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 776);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// ble cr6,0x82b05a18
	if (!ctx.cr6.gt) goto loc_82B05A18;
loc_82B05984:
	// lwz r4,784(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 784);
	// lis r11,-32227
	ctx.r11.s64 = -2112028672;
	// addi r30,r11,5204
	ctx.r30.s64 = ctx.r11.s64 + 5204;
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82b059bc
	if (ctx.cr6.eq) goto loc_82B059BC;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82fa3be8
	ctx.lr = 0x82B059A0;
	sub_82FA3BE8(ctx, base);
	// lis r4,9345
	ctx.r4.s64 = 612433920;
	// lwz r3,784(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 784);
	// bl 0x82691460
	ctx.lr = 0x82B059AC;
	sub_82691460(ctx, base);
	// lwz r11,776(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 776);
	// stw r27,784(r31)
	PPC_STORE_U32(ctx.r31.u32 + 784, ctx.r27.u32);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,776(r31)
	PPC_STORE_U32(ctx.r31.u32 + 776, ctx.r11.u32);
loc_82B059BC:
	// lis r11,-32078
	ctx.r11.s64 = -2102263808;
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// addi r6,r11,-7136
	ctx.r6.s64 = ctx.r11.s64 + -7136;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b05000
	ctx.lr = 0x82B059D8;
	sub_82B05000(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x82b05a18
	if (!ctx.cr0.lt) goto loc_82B05A18;
	// lwz r4,784(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 784);
	// cmplwi cr6,r4,0
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, 0, ctx.xer);
	// beq cr6,0x82b05a00
	if (ctx.cr6.eq) goto loc_82B05A00;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82fa3be8
	ctx.lr = 0x82B059F4;
	sub_82FA3BE8(ctx, base);
	// lwz r11,776(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 776);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stw r11,776(r31)
	PPC_STORE_U32(ctx.r31.u32 + 776, ctx.r11.u32);
loc_82B05A00:
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// rlwinm. r11,r11,0,15,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82b05a20
	if (ctx.cr0.eq) goto loc_82B05A20;
	// li r4,3551
	ctx.r4.s64 = 3551;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b05260
	ctx.lr = 0x82B05A18;
	sub_82B05260(ctx, base);
loc_82B05A18:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82fa76bc
	__restgprlr_25(ctx, base);
	return;
loc_82B05A20:
	// lwz r3,0(r26)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r26.u32 + 0);
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82B05A34;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// stw r27,0(r26)
	PPC_STORE_U32(ctx.r26.u32 + 0, ctx.r27.u32);
	// beq cr6,0x82b05a60
	if (ctx.cr6.eq) goto loc_82B05A60;
	// lwz r3,0(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// cmplwi cr6,r3,0
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq cr6,0x82b05a60
	if (ctx.cr6.eq) goto loc_82B05A60;
	// lwz r11,0(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 0);
	// lwz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// bctrl 
	ctx.lr = 0x82B05A5C;
	PPC_CALL_INDIRECT_FUNC(ctx.ctr.u32);
	// stw r27,0(r25)
	PPC_STORE_U32(ctx.r25.u32 + 0, ctx.r27.u32);
loc_82B05A60:
	// li r4,3551
	ctx.r4.s64 = 3551;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b05350
	ctx.lr = 0x82B05A6C;
	sub_82B05350(ctx, base);
}

__attribute__((alias("__imp__sub_82B05A6C"))) PPC_WEAK_FUNC(sub_82B05A6C);
PPC_FUNC_IMPL(__imp__sub_82B05A6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B05A70"))) PPC_WEAK_FUNC(sub_82B05A70);
PPC_FUNC_IMPL(__imp__sub_82B05A70) {
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
	// stw r3,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r3.u32);
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,40(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// rlwinm. r11,r11,0,3,3
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x10000000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82b05b10
	if (ctx.cr0.eq) goto loc_82B05B10;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r10,132(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lwz r10,0(r10)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// lwz r11,52(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// bne cr6,0x82b05ac8
	if (!ctx.cr6.eq) goto loc_82B05AC8;
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lis r10,-32768
	ctx.r10.s64 = -2147483648;
	// ori r10,r10,65535
	ctx.r10.u64 = ctx.r10.u64 | 65535;
	// stw r10,2480(r11)
	PPC_STORE_U32(ctx.r11.u32 + 2480, ctx.r10.u32);
	// b 0x82b05b10
	goto loc_82B05B10;
loc_82B05AC8:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,52(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// lwz r10,132(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// ori r4,r11,16389
	ctx.r4.u64 = ctx.r11.u64 | 16389;
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82b055f0
	ctx.lr = 0x82B05AE8;
	sub_82B055F0(ctx, base);
	// lwz r3,80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// bl 0x82935068
	ctx.lr = 0x82B05AF0;
	sub_82935068(ctx, base);
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// li r10,0
	ctx.r10.s64 = 0;
	// stw r10,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r10.u32);
	// lwz r11,132(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// li r10,0
	ctx.r10.s64 = 0;
	// stb r10,8(r11)
	PPC_STORE_U8(ctx.r11.u32 + 8, ctx.r10.u8);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82b05b38
	goto loc_82B05B38;
loc_82B05B10:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r11,2480(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 2480);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// blt cr6,0x82b05b34
	if (ctx.cr6.lt) goto loc_82B05B34;
	// lis r11,-32768
	ctx.r11.s64 = -2147483648;
	// ori r11,r11,65535
	ctx.r11.u64 = ctx.r11.u64 | 65535;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
loc_82B05B34:
	// lwz r3,84(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
loc_82B05B38:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B05B48"))) PPC_WEAK_FUNC(sub_82B05B48);
PPC_FUNC_IMPL(__imp__sub_82B05B48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r24,-28108(r23)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r23.u32 + -28108);
	// lwz r16,9168(r30)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r30.u32 + 9168);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// addi r31,r1,-112
	ctx.r31.s64 = ctx.r1.s64 + -112;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r3,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r3.u32);
	// stw r4,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r4.u32);
	// lwz r11,132(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// lbz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 8);
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82b05ba0
	if (ctx.cr0.eq) goto loc_82B05BA0;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lwz r4,140(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// lwz r11,132(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82b055f0
	ctx.lr = 0x82B05B94;
	sub_82B055F0(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
loc_82B05BA0:
	// lwz r11,132(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82b05bbc
	if (ctx.cr6.eq) goto loc_82B05BBC;
	// lwz r11,132(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82935068
	ctx.lr = 0x82B05BBC;
	sub_82935068(ctx, base);
loc_82B05BBC:
	// lwz r3,140(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// addi r1,r31,112
	ctx.r1.s64 = ctx.r31.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B05B50"))) PPC_WEAK_FUNC(sub_82B05B50);
PPC_FUNC_IMPL(__imp__sub_82B05B50) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// addi r31,r1,-112
	ctx.r31.s64 = ctx.r1.s64 + -112;
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r3,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r3.u32);
	// stw r4,140(r31)
	PPC_STORE_U32(ctx.r31.u32 + 140, ctx.r4.u32);
	// lwz r11,132(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// lbz r11,8(r11)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r11.u32 + 8);
	// cmpwi r11,0
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82b05ba0
	if (ctx.cr0.eq) goto loc_82B05BA0;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// lwz r4,140(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// lwz r11,132(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82b055f0
	ctx.lr = 0x82B05B94;
	sub_82B055F0(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
loc_82B05BA0:
	// lwz r11,132(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82b05bbc
	if (ctx.cr6.eq) goto loc_82B05BBC;
	// lwz r11,132(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// lwz r3,4(r11)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// bl 0x82935068
	ctx.lr = 0x82B05BBC;
	sub_82935068(ctx, base);
loc_82B05BBC:
	// lwz r3,140(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 140);
	// addi r1,r31,112
	ctx.r1.s64 = ctx.r31.s64 + 112;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B05BD4"))) PPC_WEAK_FUNC(sub_82B05BD4);
PPC_FUNC_IMPL(__imp__sub_82B05BD4) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B05BE0"))) PPC_WEAK_FUNC(sub_82B05BE0);
PPC_FUNC_IMPL(__imp__sub_82B05BE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x82B05BE8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// bl 0x828b2440
	ctx.lr = 0x82B05BF4;
	sub_828B2440(ctx, base);
	// addi r11,r31,4
	ctx.r11.s64 = ctx.r31.s64 + 4;
	// addi r30,r31,812
	ctx.r30.s64 = ctx.r31.s64 + 812;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// ori r10,r31,1
	ctx.r10.u64 = ctx.r31.u64 | 1;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// stw r11,0(r31)
	PPC_STORE_U32(ctx.r31.u32 + 0, ctx.r11.u32);
	// li r5,132
	ctx.r5.s64 = 132;
	// stw r10,4(r31)
	PPC_STORE_U32(ctx.r31.u32 + 4, ctx.r10.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82fa7cf0
	ctx.lr = 0x82B05C1C;
	sub_82FA7CF0(ctx, base);
	// addi r11,r30,152
	ctx.r11.s64 = ctx.r30.s64 + 152;
	// addi r29,r31,972
	ctx.r29.s64 = ctx.r31.s64 + 972;
	// stw r31,960(r31)
	PPC_STORE_U32(ctx.r31.u32 + 960, ctx.r31.u32);
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// ori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 | 1;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// stw r11,968(r31)
	PPC_STORE_U32(ctx.r31.u32 + 968, ctx.r11.u32);
	// li r5,132
	ctx.r5.s64 = 132;
	// stw r10,964(r31)
	PPC_STORE_U32(ctx.r31.u32 + 964, ctx.r10.u32);
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82fa7cf0
	ctx.lr = 0x82B05C4C;
	sub_82FA7CF0(ctx, base);
	// addi r11,r29,152
	ctx.r11.s64 = ctx.r29.s64 + 152;
	// stw r31,1120(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1120, ctx.r31.u32);
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// addi r10,r11,4
	ctx.r10.s64 = ctx.r11.s64 + 4;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// ori r10,r10,1
	ctx.r10.u64 = ctx.r10.u64 | 1;
	// stw r11,1128(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1128, ctx.r11.u32);
	// stw r10,1124(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1124, ctx.r10.u32);
	// bl 0x82b05590
	ctx.lr = 0x82B05C70;
	sub_82B05590(ctx, base);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// addi r10,r11,8
	ctx.r10.s64 = ctx.r11.s64 + 8;
	// stw r11,944(r31)
	PPC_STORE_U32(ctx.r31.u32 + 944, ctx.r11.u32);
	// stw r11,948(r31)
	PPC_STORE_U32(ctx.r31.u32 + 948, ctx.r11.u32);
	// stw r11,952(r31)
	PPC_STORE_U32(ctx.r31.u32 + 952, ctx.r11.u32);
	// stw r10,956(r31)
	PPC_STORE_U32(ctx.r31.u32 + 956, ctx.r10.u32);
	// bl 0x82b05590
	ctx.lr = 0x82B05C90;
	sub_82B05590(ctx, base);
	// addi r10,r3,8
	ctx.r10.s64 = ctx.r3.s64 + 8;
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r3,1104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1104, ctx.r3.u32);
	// li r9,-1
	ctx.r9.s64 = -1;
	// stw r3,1108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1108, ctx.r3.u32);
	// stw r3,1112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1112, ctx.r3.u32);
	// stw r10,1116(r31)
	PPC_STORE_U32(ctx.r31.u32 + 1116, ctx.r10.u32);
	// stw r11,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r11.u32);
	// stw r9,788(r31)
	PPC_STORE_U32(ctx.r31.u32 + 788, ctx.r9.u32);
	// bl 0x82ba03d0
	ctx.lr = 0x82B05CB8;
	sub_82BA03D0(ctx, base);
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B05CC0"))) PPC_WEAK_FUNC(sub_82B05CC0);
PPC_FUNC_IMPL(__imp__sub_82B05CC0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7664
	ctx.lr = 0x82B05CC8;
	__savegprlr_23(ctx, base);
	// stwu r1,-256(r1)
	ea = -256 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r4
	ctx.r28.u64 = ctx.r4.u64;
	// mr r27,r5
	ctx.r27.u64 = ctx.r5.u64;
	// mr r26,r7
	ctx.r26.u64 = ctx.r7.u64;
	// mr r25,r8
	ctx.r25.u64 = ctx.r8.u64;
	// mr r24,r9
	ctx.r24.u64 = ctx.r9.u64;
	// mr r23,r10
	ctx.r23.u64 = ctx.r10.u64;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// beq cr6,0x82b05cfc
	if (ctx.cr6.eq) goto loc_82B05CFC;
	// lwz r11,40(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// ori r11,r11,2048
	ctx.r11.u64 = ctx.r11.u64 | 2048;
	// stw r11,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r11.u32);
loc_82B05CFC:
	// lwz r30,356(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 356);
	// lis r29,-1
	ctx.r29.s64 = -65536;
	// stw r27,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r27.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// stw r28,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r28.u32);
	// stw r30,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r30.u32);
	// beq cr6,0x82b05db0
	if (ctx.cr6.eq) goto loc_82B05DB0;
	// lwz r6,16(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 16);
	// cmplwi cr6,r6,64
	ctx.cr6.compare<uint32_t>(ctx.r6.u32, 64, ctx.xer);
	// stw r6,792(r31)
	PPC_STORE_U32(ctx.r31.u32 + 792, ctx.r6.u32);
	// ble cr6,0x82b05d38
	if (!ctx.cr6.gt) goto loc_82B05D38;
	// li r5,64
	ctx.r5.s64 = 64;
	// li r4,3589
	ctx.r4.s64 = 3589;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b05350
	ctx.lr = 0x82B05D38;
	sub_82B05350(ctx, base);
loc_82B05D38:
	// rlwinm r11,r28,0,0,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 0) & 0xFFFF0000;
	// cmplw cr6,r11,r29
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r29.u32, ctx.xer);
	// bne cr6,0x82b05d5c
	if (!ctx.cr6.eq) goto loc_82B05D5C;
	// lwz r11,32(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 32);
	// stw r11,800(r31)
	PPC_STORE_U32(ctx.r31.u32 + 800, ctx.r11.u32);
	// lwz r11,36(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// stw r11,804(r31)
	PPC_STORE_U32(ctx.r31.u32 + 804, ctx.r11.u32);
	// lwz r11,48(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 48);
	// b 0x82b05d70
	goto loc_82B05D70;
loc_82B05D5C:
	// lwz r11,40(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 40);
	// stw r11,800(r31)
	PPC_STORE_U32(ctx.r31.u32 + 800, ctx.r11.u32);
	// lwz r11,44(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 44);
	// stw r11,804(r31)
	PPC_STORE_U32(ctx.r31.u32 + 804, ctx.r11.u32);
	// lwz r11,52(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 52);
loc_82B05D70:
	// stw r11,808(r31)
	PPC_STORE_U32(ctx.r31.u32 + 808, ctx.r11.u32);
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm. r11,r11,0,24,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x80;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82b05d8c
	if (ctx.cr0.eq) goto loc_82B05D8C;
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// ori r11,r11,4096
	ctx.r11.u64 = ctx.r11.u64 | 4096;
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
loc_82B05D8C:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82b05db0
	if (ctx.cr6.eq) goto loc_82B05DB0;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm. r11,r11,0,30,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x2;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82b05db0
	if (ctx.cr0.eq) goto loc_82B05DB0;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// lwz r3,20(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// bl 0x82afe478
	ctx.lr = 0x82B05DB0;
	sub_82AFE478(ctx, base);
loc_82B05DB0:
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// rlwinm r10,r11,0,0,15
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFF0000;
	// cmplw cr6,r10,r29
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r29.u32, ctx.xer);
	// beq cr6,0x82b05dec
	if (ctx.cr6.eq) goto loc_82B05DEC;
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82b05dd8
	if (ctx.cr6.eq) goto loc_82B05DD8;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm. r11,r11,0,26,26
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x20;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82b05de4
	if (ctx.cr0.eq) goto loc_82B05DE4;
loc_82B05DD8:
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// ori r11,r11,16
	ctx.r11.u64 = ctx.r11.u64 | 16;
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
loc_82B05DE4:
	// cmplw cr6,r10,r29
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r29.u32, ctx.xer);
	// bne cr6,0x82b05e10
	if (!ctx.cr6.eq) goto loc_82B05E10;
loc_82B05DEC:
	// lwz r11,56(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 56);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82b05e10
	if (ctx.cr6.eq) goto loc_82B05E10;
	// lwz r11,0(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// rlwinm. r11,r11,0,25,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x40;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82b05e10
	if (ctx.cr0.eq) goto loc_82B05E10;
	// lwz r11,44(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 44);
	// ori r11,r11,64
	ctx.r11.u64 = ctx.r11.u64 | 64;
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
loc_82B05E10:
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bc0d10
	ctx.lr = 0x82B05E20;
	sub_82BC0D10(ctx, base);
	// mr. r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bne 0x82b05e38
	if (!ctx.cr0.eq) goto loc_82B05E38;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// li r4,3501
	ctx.r4.s64 = 3501;
	// bl 0x82b05350
	ctx.lr = 0x82B05E38;
	sub_82B05350(ctx, base);
loc_82B05E38:
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// bl 0x82bbd9d8
	ctx.lr = 0x82B05E40;
	sub_82BBD9D8(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ba3db0
	ctx.lr = 0x82B05E48;
	sub_82BA3DB0(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// addic r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ctx.r11.u64;
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82b05e7c
	if (!ctx.cr0.eq) goto loc_82B05E7C;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82b05e7c
	if (ctx.cr6.eq) goto loc_82B05E7C;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ba2280
	ctx.lr = 0x82B05E7C;
	sub_82BA2280(ctx, base);
loc_82B05E7C:
	// addi r3,r31,972
	ctx.r3.s64 = ctx.r31.s64 + 972;
	// bl 0x82b05518
	ctx.lr = 0x82B05E84;
	sub_82B05518(ctx, base);
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// lwz r7,348(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 348);
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// lwz r6,340(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 340);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b056e0
	ctx.lr = 0x82B05EA0;
	sub_82B056E0(ctx, base);
	// addi r1,r1,256
	ctx.r1.s64 = ctx.r1.s64 + 256;
	// b 0x82fa76b4
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B05EA8"))) PPC_WEAK_FUNC(sub_82B05EA8);
PPC_FUNC_IMPL(__imp__sub_82B05EA8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7678
	ctx.lr = 0x82B05EB0;
	__savegprlr_28(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,40(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 40);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r6,52(r3)
	PPC_STORE_U32(ctx.r3.u32 + 52, ctx.r6.u32);
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// oris r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 65536;
	// mr r28,r7
	ctx.r28.u64 = ctx.r7.u64;
	// stw r11,40(r3)
	PPC_STORE_U32(ctx.r3.u32 + 40, ctx.r11.u32);
	// mr r30,r8
	ctx.r30.u64 = ctx.r8.u64;
	// bl 0x82bc1950
	ctx.lr = 0x82B05ED8;
	sub_82BC1950(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ba3db0
	ctx.lr = 0x82B05EE0;
	sub_82BA3DB0(ctx, base);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// clrlwi r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	// addic r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 & ctx.r11.u64;
	// rlwinm r11,r11,0,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFE;
	// lwz r11,4(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82b05f14
	if (!ctx.cr0.eq) goto loc_82B05F14;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82b05f14
	if (ctx.cr6.eq) goto loc_82B05F14;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82ba2280
	ctx.lr = 0x82B05F14;
	sub_82BA2280(ctx, base);
loc_82B05F14:
	// addi r3,r31,972
	ctx.r3.s64 = ctx.r31.s64 + 972;
	// bl 0x82b05518
	ctx.lr = 0x82B05F1C;
	sub_82B05518(ctx, base);
	// li r10,8
	ctx.r10.s64 = 8;
	// addi r11,r1,72
	ctx.r11.s64 = ctx.r1.s64 + 72;
	// li r9,0
	ctx.r9.s64 = 0;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82B05F2C:
	// stdu r9,8(r11)
	ea = 8 + ctx.r11.u32;
	PPC_STORE_U64(ea, ctx.r9.u64);
	ctx.r11.u32 = ea;
	// bdnz 0x82b05f2c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82B05F2C;
	// stw r9,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r9.u32);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82b05f60
	if (ctx.cr6.eq) goto loc_82B05F60;
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r10,4(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// lwz r9,8(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// lwz r8,20(r30)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// stw r10,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r10.u32);
	// stw r9,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r9.u32);
	// stw r8,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r8.u32);
loc_82B05F60:
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// lis r4,-1
	ctx.r4.s64 = -65536;
	// rlwinm r11,r11,0,0,15
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFF0000;
	// cmplw cr6,r11,r4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x82b05f78
	if (ctx.cr6.eq) goto loc_82B05F78;
	// lis r4,-2
	ctx.r4.s64 = -131072;
loc_82B05F78:
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b056e0
	ctx.lr = 0x82B05F90;
	sub_82B056E0(ctx, base);
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82b05fa0
	if (ctx.cr6.eq) goto loc_82B05FA0;
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// stw r11,12(r30)
	PPC_STORE_U32(ctx.r30.u32 + 12, ctx.r11.u32);
loc_82B05FA0:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82fa76c8
	__restgprlr_28(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B05FA8"))) PPC_WEAK_FUNC(sub_82B05FA8);
PPC_FUNC_IMPL(__imp__sub_82B05FA8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r24,-28108(r23)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r23.u32 + -28108);
	// lwz r16,9192(r30)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r30.u32 + 9192);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// addi r31,r1,-160
	ctx.r31.s64 = ctx.r1.s64 + -160;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r3,180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 180, ctx.r3.u32);
	// stw r4,188(r31)
	PPC_STORE_U32(ctx.r31.u32 + 188, ctx.r4.u32);
	// stw r5,196(r31)
	PPC_STORE_U32(ctx.r31.u32 + 196, ctx.r5.u32);
	// stw r6,204(r31)
	PPC_STORE_U32(ctx.r31.u32 + 204, ctx.r6.u32);
	// stw r7,212(r31)
	PPC_STORE_U32(ctx.r31.u32 + 212, ctx.r7.u32);
	// stw r8,220(r31)
	PPC_STORE_U32(ctx.r31.u32 + 220, ctx.r8.u32);
	// stw r9,228(r31)
	PPC_STORE_U32(ctx.r31.u32 + 228, ctx.r9.u32);
	// stw r10,236(r31)
	PPC_STORE_U32(ctx.r31.u32 + 236, ctx.r10.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r11.u32);
	// addi r4,r31,120
	ctx.r4.s64 = ctx.r31.s64 + 120;
	// lwz r3,188(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 188);
	// bl 0x82b04dc0
	ctx.lr = 0x82B05FF8;
	sub_82B04DC0(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
loc_82B06000:
	// lwz r5,260(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 260);
	// lwz r4,252(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 252);
	// addi r3,r31,120
	ctx.r3.s64 = ctx.r31.s64 + 120;
	// bl 0x82b04e00
	ctx.lr = 0x82B06010;
	sub_82B04E00(ctx, base);
	// stw r3,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r3.u32);
	// lwz r11,112(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82b060ac
	if (!ctx.cr6.eq) goto loc_82B060AC;
	// lwz r11,124(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// addi r3,r11,1136
	ctx.r3.s64 = ctx.r11.s64 + 1136;
	// bl 0x82faa880
	ctx.lr = 0x82B0602C;
	sub_82FAA880(ctx, base);
	// stw r3,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r3.u32);
	// lwz r11,136(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// stw r11,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r11.u32);
	// lwz r11,132(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82b06054
	if (ctx.cr6.eq) goto loc_82B06054;
	// addi r3,r31,120
	ctx.r3.s64 = ctx.r31.s64 + 120;
	// bl 0x82b05a70
	ctx.lr = 0x82B0604C;
	sub_82B05A70(ctx, base);
	// stw r3,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r3.u32);
	// b 0x82b060ac
	goto loc_82B060AC;
loc_82B06054:
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,128(r31)
	PPC_STORE_U8(ctx.r31.u32 + 128, ctx.r11.u8);
	// lwz r5,260(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 260);
	// lwz r4,252(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 252);
	// lwz r3,124(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// bl 0x82b05be0
	ctx.lr = 0x82B0606C;
	sub_82B05BE0(ctx, base);
	// lwz r11,268(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 268);
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// lwz r11,244(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 244);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// lwz r11,236(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 236);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// lwz r10,228(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 228);
	// lwz r9,220(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 220);
	// lwz r8,212(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 212);
	// lwz r7,204(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 204);
	// lwz r6,196(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 196);
	// lwz r5,120(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// lwz r4,180(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	// lwz r3,124(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// bl 0x82b05cc0
	ctx.lr = 0x82B060A8;
	sub_82B05CC0(ctx, base);
	// b 0x82b060b8
	goto loc_82B060B8;
loc_82B060AC:
	// lwz r11,112(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82b06000
	if (ctx.cr6.eq) goto loc_82B06000;
loc_82B060B8:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x82b060d8
	// ERROR 82B060D8
	return;
}

__attribute__((alias("__imp__sub_82B05FB0"))) PPC_WEAK_FUNC(sub_82B05FB0);
PPC_FUNC_IMPL(__imp__sub_82B05FB0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// addi r31,r1,-160
	ctx.r31.s64 = ctx.r1.s64 + -160;
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r3,180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 180, ctx.r3.u32);
	// stw r4,188(r31)
	PPC_STORE_U32(ctx.r31.u32 + 188, ctx.r4.u32);
	// stw r5,196(r31)
	PPC_STORE_U32(ctx.r31.u32 + 196, ctx.r5.u32);
	// stw r6,204(r31)
	PPC_STORE_U32(ctx.r31.u32 + 204, ctx.r6.u32);
	// stw r7,212(r31)
	PPC_STORE_U32(ctx.r31.u32 + 212, ctx.r7.u32);
	// stw r8,220(r31)
	PPC_STORE_U32(ctx.r31.u32 + 220, ctx.r8.u32);
	// stw r9,228(r31)
	PPC_STORE_U32(ctx.r31.u32 + 228, ctx.r9.u32);
	// stw r10,236(r31)
	PPC_STORE_U32(ctx.r31.u32 + 236, ctx.r10.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r11.u32);
	// addi r4,r31,120
	ctx.r4.s64 = ctx.r31.s64 + 120;
	// lwz r3,188(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 188);
	// bl 0x82b04dc0
	ctx.lr = 0x82B05FF8;
	sub_82B04DC0(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
loc_82B06000:
	// lwz r5,260(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 260);
	// lwz r4,252(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 252);
	// addi r3,r31,120
	ctx.r3.s64 = ctx.r31.s64 + 120;
	// bl 0x82b04e00
	ctx.lr = 0x82B06010;
	sub_82B04E00(ctx, base);
	// stw r3,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r3.u32);
	// lwz r11,112(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82b060ac
	if (!ctx.cr6.eq) goto loc_82B060AC;
	// lwz r11,124(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// addi r3,r11,1136
	ctx.r3.s64 = ctx.r11.s64 + 1136;
	// bl 0x82faa880
	ctx.lr = 0x82B0602C;
	sub_82FAA880(ctx, base);
	// stw r3,136(r31)
	PPC_STORE_U32(ctx.r31.u32 + 136, ctx.r3.u32);
	// lwz r11,136(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 136);
	// stw r11,132(r31)
	PPC_STORE_U32(ctx.r31.u32 + 132, ctx.r11.u32);
	// lwz r11,132(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 132);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82b06054
	if (ctx.cr6.eq) goto loc_82B06054;
	// addi r3,r31,120
	ctx.r3.s64 = ctx.r31.s64 + 120;
	// bl 0x82b05a70
	ctx.lr = 0x82B0604C;
	sub_82B05A70(ctx, base);
	// stw r3,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r3.u32);
	// b 0x82b060ac
	goto loc_82B060AC;
loc_82B06054:
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,128(r31)
	PPC_STORE_U8(ctx.r31.u32 + 128, ctx.r11.u8);
	// lwz r5,260(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 260);
	// lwz r4,252(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 252);
	// lwz r3,124(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// bl 0x82b05be0
	ctx.lr = 0x82B0606C;
	sub_82B05BE0(ctx, base);
	// lwz r11,268(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 268);
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// lwz r11,244(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 244);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// lwz r11,236(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 236);
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// lwz r10,228(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 228);
	// lwz r9,220(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 220);
	// lwz r8,212(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 212);
	// lwz r7,204(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 204);
	// lwz r6,196(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 196);
	// lwz r5,120(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 120);
	// lwz r4,180(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	// lwz r3,124(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 124);
	// bl 0x82b05cc0
	ctx.lr = 0x82B060A8;
	sub_82B05CC0(ctx, base);
	// b 0x82b060b8
	goto loc_82B060B8;
loc_82B060AC:
	// lwz r11,112(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82b06000
	if (ctx.cr6.eq) goto loc_82B06000;
loc_82B060B8:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x82b060d8
	goto loc_82B060D8;
	// lwz r4,244(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 244);
	// lwz r3,236(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 236);
	// bl 0x82b04e88
	ctx.lr = 0x82B060D4;
	sub_82B04E88(ctx, base);
	// stw r3,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r3.u32);
loc_82B060D8:
	// lwz r4,112(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// addi r3,r31,120
	ctx.r3.s64 = ctx.r31.s64 + 120;
	// bl 0x82b05b50
	ctx.lr = 0x82B060E4;
	sub_82B05B50(ctx, base);
	// addi r1,r31,160
	ctx.r1.s64 = ctx.r31.s64 + 160;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B060C8"))) PPC_WEAK_FUNC(sub_82B060C8);
PPC_FUNC_IMPL(__imp__sub_82B060C8) {
	PPC_FUNC_PROLOGUE();
	// lwz r4,244(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 244);
	// lwz r3,236(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 236);
	// bl 0x82b04e88
	ctx.lr = 0x82B060D4;
	sub_82B04E88(ctx, base);
	// stw r3,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r3.u32);
	// lwz r4,112(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// addi r3,r31,120
	ctx.r3.s64 = ctx.r31.s64 + 120;
	// bl 0x82b05b50
	ctx.lr = 0x82B060E4;
	sub_82B05B50(ctx, base);
	// addi r1,r31,160
	ctx.r1.s64 = ctx.r31.s64 + 160;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B060F8"))) PPC_WEAK_FUNC(sub_82B060F8);
PPC_FUNC_IMPL(__imp__sub_82B060F8) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B06104"))) PPC_WEAK_FUNC(sub_82B06104);
PPC_FUNC_IMPL(__imp__sub_82B06104) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B06108"))) PPC_WEAK_FUNC(sub_82B06108);
PPC_FUNC_IMPL(__imp__sub_82B06108) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// lwz r24,-28108(r23)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r23.u32 + -28108);
	// lwz r16,9216(r30)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r30.u32 + 9216);
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// addi r31,r1,-144
	ctx.r31.s64 = ctx.r1.s64 + -144;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r3,164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 164, ctx.r3.u32);
	// stw r4,172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 172, ctx.r4.u32);
	// stw r5,180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 180, ctx.r5.u32);
	// stw r6,188(r31)
	PPC_STORE_U32(ctx.r31.u32 + 188, ctx.r6.u32);
	// stw r7,196(r31)
	PPC_STORE_U32(ctx.r31.u32 + 196, ctx.r7.u32);
	// stw r8,204(r31)
	PPC_STORE_U32(ctx.r31.u32 + 204, ctx.r8.u32);
	// stw r9,212(r31)
	PPC_STORE_U32(ctx.r31.u32 + 212, ctx.r9.u32);
	// lwz r11,196(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 196);
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// lwz r11,204(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 204);
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// lis r11,-32080
	ctx.r11.s64 = -2102394880;
	// addi r11,r11,20160
	ctx.r11.s64 = ctx.r11.s64 + 20160;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// addi r11,r31,80
	ctx.r11.s64 = ctx.r31.s64 + 80;
	// stw r11,196(r31)
	PPC_STORE_U32(ctx.r31.u32 + 196, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r11.u32);
	// addi r4,r31,96
	ctx.r4.s64 = ctx.r31.s64 + 96;
	// lwz r3,180(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	// bl 0x82b04dc0
	ctx.lr = 0x82B06178;
	sub_82B04DC0(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
loc_82B06180:
	// lwz r5,88(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// lwz r4,196(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 196);
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// bl 0x82b04e00
	ctx.lr = 0x82B06190;
	sub_82B04E00(ctx, base);
	// stw r3,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r3.u32);
	// lwz r11,92(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82b0620c
	if (!ctx.cr6.eq) goto loc_82B0620C;
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// addi r3,r11,1136
	ctx.r3.s64 = ctx.r11.s64 + 1136;
	// bl 0x82faa880
	ctx.lr = 0x82B061AC;
	sub_82FAA880(ctx, base);
	// stw r3,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r3.u32);
	// lwz r11,112(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// stw r11,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r11.u32);
	// lwz r11,108(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82b061d4
	if (ctx.cr6.eq) goto loc_82B061D4;
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// bl 0x82b05a70
	ctx.lr = 0x82B061CC;
	sub_82B05A70(ctx, base);
	// stw r3,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r3.u32);
	// b 0x82b0620c
	goto loc_82B0620C;
loc_82B061D4:
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,104(r31)
	PPC_STORE_U8(ctx.r31.u32 + 104, ctx.r11.u8);
	// lwz r5,88(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// lwz r4,196(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 196);
	// lwz r3,100(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// bl 0x82b05be0
	ctx.lr = 0x82B061EC;
	sub_82B05BE0(ctx, base);
	// lwz r8,212(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 212);
	// lwz r7,188(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 188);
	// lwz r6,96(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// lwz r5,172(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 172);
	// lwz r4,164(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 164);
	// lwz r3,100(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// bl 0x82b05ea8
	ctx.lr = 0x82B06208;
	sub_82B05EA8(ctx, base);
	// b 0x82b06218
	goto loc_82B06218;
loc_82B0620C:
	// lwz r11,92(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82b06180
	if (ctx.cr6.eq) goto loc_82B06180;
loc_82B06218:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x82b06238
	// ERROR 82B06238
	return;
}

__attribute__((alias("__imp__sub_82B06110"))) PPC_WEAK_FUNC(sub_82B06110);
PPC_FUNC_IMPL(__imp__sub_82B06110) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// stw r12,-8(r1)
	PPC_STORE_U32(ctx.r1.u32 + -8, ctx.r12.u32);
	// std r31,-16(r1)
	PPC_STORE_U64(ctx.r1.u32 + -16, ctx.r31.u64);
	// addi r31,r1,-144
	ctx.r31.s64 = ctx.r1.s64 + -144;
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// stw r3,164(r31)
	PPC_STORE_U32(ctx.r31.u32 + 164, ctx.r3.u32);
	// stw r4,172(r31)
	PPC_STORE_U32(ctx.r31.u32 + 172, ctx.r4.u32);
	// stw r5,180(r31)
	PPC_STORE_U32(ctx.r31.u32 + 180, ctx.r5.u32);
	// stw r6,188(r31)
	PPC_STORE_U32(ctx.r31.u32 + 188, ctx.r6.u32);
	// stw r7,196(r31)
	PPC_STORE_U32(ctx.r31.u32 + 196, ctx.r7.u32);
	// stw r8,204(r31)
	PPC_STORE_U32(ctx.r31.u32 + 204, ctx.r8.u32);
	// stw r9,212(r31)
	PPC_STORE_U32(ctx.r31.u32 + 212, ctx.r9.u32);
	// lwz r11,196(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 196);
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// lwz r11,204(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 204);
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// lis r11,-32080
	ctx.r11.s64 = -2102394880;
	// addi r11,r11,20160
	ctx.r11.s64 = ctx.r11.s64 + 20160;
	// stw r11,88(r31)
	PPC_STORE_U32(ctx.r31.u32 + 88, ctx.r11.u32);
	// addi r11,r31,80
	ctx.r11.s64 = ctx.r31.s64 + 80;
	// stw r11,196(r31)
	PPC_STORE_U32(ctx.r31.u32 + 196, ctx.r11.u32);
	// li r11,0
	ctx.r11.s64 = 0;
	// stw r11,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r11.u32);
	// addi r4,r31,96
	ctx.r4.s64 = ctx.r31.s64 + 96;
	// lwz r3,180(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 180);
	// bl 0x82b04dc0
	ctx.lr = 0x82B06178;
	sub_82B04DC0(ctx, base);
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
loc_82B06180:
	// lwz r5,88(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// lwz r4,196(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 196);
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// bl 0x82b04e00
	ctx.lr = 0x82B06190;
	sub_82B04E00(ctx, base);
	// stw r3,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r3.u32);
	// lwz r11,92(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82b0620c
	if (!ctx.cr6.eq) goto loc_82B0620C;
	// lwz r11,100(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// addi r3,r11,1136
	ctx.r3.s64 = ctx.r11.s64 + 1136;
	// bl 0x82faa880
	ctx.lr = 0x82B061AC;
	sub_82FAA880(ctx, base);
	// stw r3,112(r31)
	PPC_STORE_U32(ctx.r31.u32 + 112, ctx.r3.u32);
	// lwz r11,112(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// stw r11,108(r31)
	PPC_STORE_U32(ctx.r31.u32 + 108, ctx.r11.u32);
	// lwz r11,108(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 108);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82b061d4
	if (ctx.cr6.eq) goto loc_82B061D4;
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// bl 0x82b05a70
	ctx.lr = 0x82B061CC;
	sub_82B05A70(ctx, base);
	// stw r3,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r3.u32);
	// b 0x82b0620c
	goto loc_82B0620C;
loc_82B061D4:
	// li r11,1
	ctx.r11.s64 = 1;
	// stb r11,104(r31)
	PPC_STORE_U8(ctx.r31.u32 + 104, ctx.r11.u8);
	// lwz r5,88(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 88);
	// lwz r4,196(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 196);
	// lwz r3,100(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// bl 0x82b05be0
	ctx.lr = 0x82B061EC;
	sub_82B05BE0(ctx, base);
	// lwz r8,212(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 212);
	// lwz r7,188(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 188);
	// lwz r6,96(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 96);
	// lwz r5,172(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 172);
	// lwz r4,164(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 164);
	// lwz r3,100(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 100);
	// bl 0x82b05ea8
	ctx.lr = 0x82B06208;
	sub_82B05EA8(ctx, base);
	// b 0x82b06218
	goto loc_82B06218;
loc_82B0620C:
	// lwz r11,92(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82b06180
	if (ctx.cr6.eq) goto loc_82B06180;
loc_82B06218:
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// b 0x82b06238
	goto loc_82B06238;
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,188(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 188);
	// bl 0x82b04e88
	ctx.lr = 0x82B06234;
	sub_82B04E88(ctx, base);
	// stw r3,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r3.u32);
loc_82B06238:
	// lwz r4,92(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// bl 0x82b05b50
	ctx.lr = 0x82B06244;
	sub_82B05B50(ctx, base);
	// addi r1,r31,144
	ctx.r1.s64 = ctx.r31.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B06228"))) PPC_WEAK_FUNC(sub_82B06228);
PPC_FUNC_IMPL(__imp__sub_82B06228) {
	PPC_FUNC_PROLOGUE();
	// li r4,0
	ctx.r4.s64 = 0;
	// lwz r3,188(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 188);
	// bl 0x82b04e88
	ctx.lr = 0x82B06234;
	sub_82B04E88(ctx, base);
	// stw r3,92(r31)
	PPC_STORE_U32(ctx.r31.u32 + 92, ctx.r3.u32);
	// lwz r4,92(r31)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r31.u32 + 92);
	// addi r3,r31,96
	ctx.r3.s64 = ctx.r31.s64 + 96;
	// bl 0x82b05b50
	ctx.lr = 0x82B06244;
	sub_82B05B50(ctx, base);
	// addi r1,r31,144
	ctx.r1.s64 = ctx.r31.s64 + 144;
	// lwz r12,-8(r1)
	ctx.r12.u64 = PPC_LOAD_U32(ctx.r1.u32 + -8);
	// mtlr r12
	ctx.lr = ctx.r12.u64;
	// ld r31,-16(r1)
	ctx.r31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -16);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B06258"))) PPC_WEAK_FUNC(sub_82B06258);
PPC_FUNC_IMPL(__imp__sub_82B06258) {
	PPC_FUNC_PROLOGUE();
	// li r3,1
	ctx.r3.s64 = 1;
	// mr r8,r8
	ctx.r8.u64 = ctx.r8.u64;
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B06264"))) PPC_WEAK_FUNC(sub_82B06264);
PPC_FUNC_IMPL(__imp__sub_82B06264) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B06268"))) PPC_WEAK_FUNC(sub_82B06268);
PPC_FUNC_IMPL(__imp__sub_82B06268) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7674
	ctx.lr = 0x82B06270;
	__savegprlr_27(ctx, base);
	// stwu r1,-144(r1)
	ea = -144 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lis r11,4
	ctx.r11.s64 = 262144;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// cmpw cr6,r5,r11
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x82b06290
	if (!ctx.cr6.eq) goto loc_82B06290;
	// lwz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// stwbrx r11,0,r3
	PPC_STORE_U32(ctx.r3.u32, __builtin_bswap32(ctx.r11.u32));
	// b 0x82b063b4
	goto loc_82B063B4;
loc_82B06290:
	// lis r11,2
	ctx.r11.s64 = 131072;
	// ori r11,r11,1
	ctx.r11.u64 = ctx.r11.u64 | 1;
	// cmpw cr6,r5,r11
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x82b062ac
	if (!ctx.cr6.eq) goto loc_82B062AC;
	// lhz r11,0(r4)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r4.u32 + 0);
	// sthbrx r11,0,r3
	PPC_STORE_U16(ctx.r3.u32, __builtin_bswap16(ctx.r11.u16));
	// b 0x82b063b4
	goto loc_82B063B4;
loc_82B062AC:
	// lis r11,4
	ctx.r11.s64 = 262144;
	// ori r11,r11,2
	ctx.r11.u64 = ctx.r11.u64 | 2;
	// cmpw cr6,r5,r11
	ctx.cr6.compare<int32_t>(ctx.r5.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x82b062dc
	if (!ctx.cr6.eq) goto loc_82B062DC;
	// lwbrx r11,0,r4
	ctx.r11.u64 = __builtin_bswap32(PPC_LOAD_U32(ctx.r4.u32));
	// li r10,2
	ctx.r10.s64 = 2;
	// stw r11,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r11.u32);
	// lhz r11,82(r1)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r1.u32 + 82);
	// lhz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U16(ctx.r1.u32 + 80);
	// sthbrx r9,0,r3
	PPC_STORE_U16(ctx.r3.u32, __builtin_bswap16(ctx.r9.u16));
	// sthbrx r11,r10,r3
	PPC_STORE_U16(ctx.r10.u32 + ctx.r3.u32, __builtin_bswap16(ctx.r11.u16));
	// b 0x82b063b4
	goto loc_82B063B4;
loc_82B062DC:
	// clrlwi. r31,r5,16
	ctx.r31.u64 = ctx.r5.u32 & 0xFFFF;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// rlwinm r5,r5,16,16,31
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 16) & 0xFFFF;
	// beq 0x82b063a8
	if (ctx.cr0.eq) goto loc_82B063A8;
	// cmplw cr6,r31,r5
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r5.u32, ctx.xer);
	// beq cr6,0x82b063a8
	if (ctx.cr6.eq) goto loc_82B063A8;
	// addi r11,r31,-1
	ctx.r11.s64 = ctx.r31.s64 + -1;
	// cmplw cr6,r3,r4
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r4.u32, ctx.xer);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// subfic r11,r11,32
	ctx.xer.ca = ctx.r11.u32 <= 32;
	ctx.r11.s64 = 32 - ctx.r11.s64;
	// srw r11,r5,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r5.u32 >> (ctx.r11.u8 & 0x3F));
	// beq cr6,0x82b0634c
	if (ctx.cr6.eq) goto loc_82B0634C;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82b063b4
	if (ctx.cr6.eq) goto loc_82B063B4;
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// mr r28,r3
	ctx.r28.u64 = ctx.r3.u64;
	// mullw r10,r10,r31
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r31.s32);
	// neg r27,r31
	ctx.r27.s64 = -ctx.r31.s64;
	// add r29,r10,r4
	ctx.r29.u64 = ctx.r10.u64 + ctx.r4.u64;
	// mr r30,r11
	ctx.r30.u64 = ctx.r11.u64;
loc_82B06328:
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82fa77c0
	ctx.lr = 0x82B06338;
	sub_82FA77C0(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// add r29,r27,r29
	ctx.r29.u64 = ctx.r27.u64 + ctx.r29.u64;
	// add r28,r28,r31
	ctx.r28.u64 = ctx.r28.u64 + ctx.r31.u64;
	// bne 0x82b06328
	if (!ctx.cr0.eq) goto loc_82B06328;
	// b 0x82b063b4
	goto loc_82B063B4;
loc_82B0634C:
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// rlwinm. r9,r10,31,1,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 31) & 0x7FFFFFFF;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq 0x82b063b4
	if (ctx.cr0.eq) goto loc_82B063B4;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// neg r7,r31
	ctx.r7.s64 = -ctx.r31.s64;
	// mullw r11,r11,r31
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r31.s32);
	// add r11,r11,r4
	ctx.r11.u64 = ctx.r11.u64 + ctx.r4.u64;
loc_82B06368:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82b06394
	if (ctx.cr6.eq) goto loc_82B06394;
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// mtctr r31
	ctx.ctr.u64 = ctx.r31.u64;
	// subf r8,r11,r3
	ctx.r8.s64 = ctx.r3.s64 - ctx.r11.s64;
loc_82B0637C:
	// lbz r6,0(r10)
	ctx.r6.u64 = PPC_LOAD_U8(ctx.r10.u32 + 0);
	// lbzx r5,r8,r10
	ctx.r5.u64 = PPC_LOAD_U8(ctx.r8.u32 + ctx.r10.u32);
	// stbx r6,r8,r10
	PPC_STORE_U8(ctx.r8.u32 + ctx.r10.u32, ctx.r6.u8);
	// stb r5,0(r10)
	PPC_STORE_U8(ctx.r10.u32 + 0, ctx.r5.u8);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// bdnz 0x82b0637c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82B0637C;
loc_82B06394:
	// addic. r9,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// add r3,r3,r31
	ctx.r3.u64 = ctx.r3.u64 + ctx.r31.u64;
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// bne 0x82b06368
	if (!ctx.cr0.eq) goto loc_82B06368;
	// b 0x82b063b4
	goto loc_82B063B4;
loc_82B063A8:
	// cmplwi cr6,r5,0
	ctx.cr6.compare<uint32_t>(ctx.r5.u32, 0, ctx.xer);
	// beq cr6,0x82b063b4
	if (ctx.cr6.eq) goto loc_82B063B4;
	// bl 0x82fa77c0
	ctx.lr = 0x82B063B4;
	sub_82FA77C0(ctx, base);
loc_82B063B4:
	// addi r1,r1,144
	ctx.r1.s64 = ctx.r1.s64 + 144;
	// b 0x82fa76c4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B063BC"))) PPC_WEAK_FUNC(sub_82B063BC);
PPC_FUNC_IMPL(__imp__sub_82B063BC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B063C0"))) PPC_WEAK_FUNC(sub_82B063C0);
PPC_FUNC_IMPL(__imp__sub_82B063C0) {
	PPC_FUNC_PROLOGUE();
	// b 0x82b06268
	sub_82B06268(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B063C4"))) PPC_WEAK_FUNC(sub_82B063C4);
PPC_FUNC_IMPL(__imp__sub_82B063C4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B063C8"))) PPC_WEAK_FUNC(sub_82B063C8);
PPC_FUNC_IMPL(__imp__sub_82B063C8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa765c
	ctx.lr = 0x82B063D0;
	__savegprlr_21(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// rlwinm r31,r5,16,16,31
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 16) & 0xFFFF;
	// lis r10,1
	ctx.r10.s64 = 65536;
	// addi r11,r31,-1
	ctx.r11.s64 = ctx.r31.s64 + -1;
	// ori r10,r10,515
	ctx.r10.u64 = ctx.r10.u64 | 515;
	// mr r25,r7
	ctx.r25.u64 = ctx.r7.u64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// stw r10,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r10.u32);
	// lis r9,1029
	ctx.r9.s64 = 67436544;
	// lis r8,2057
	ctx.r8.s64 = 134807552;
	// lis r7,3085
	ctx.r7.s64 = 202178560;
	// li r26,16
	ctx.r26.s64 = 16;
	// subfic r11,r11,32
	ctx.xer.ca = ctx.r11.u32 <= 32;
	ctx.r11.s64 = 32 - ctx.r11.s64;
	// ori r9,r9,1543
	ctx.r9.u64 = ctx.r9.u64 | 1543;
	// ori r8,r8,2571
	ctx.r8.u64 = ctx.r8.u64 | 2571;
	// ori r10,r7,3599
	ctx.r10.u64 = ctx.r7.u64 | 3599;
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// stw r8,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r8.u32);
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// mr r22,r5
	ctx.r22.u64 = ctx.r5.u64;
	// mr r23,r6
	ctx.r23.u64 = ctx.r6.u64;
	// sraw. r11,r26,r11
	temp.u32 = ctx.r11.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r26.s32 < 0) & (((ctx.r26.s32 >> temp.u32) << temp.u32) != ctx.r26.s32);
	ctx.r11.s64 = ctx.r26.s32 >> temp.u32;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r28,r1,80
	ctx.r28.s64 = ctx.r1.s64 + 80;
	// beq 0x82b06458
	if (ctx.cr0.eq) goto loc_82B06458;
	// mr r27,r11
	ctx.r27.u64 = ctx.r11.u64;
loc_82B0643C:
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82b06268
	ctx.lr = 0x82B0644C;
	sub_82B06268(ctx, base);
	// addic. r27,r27,-1
	ctx.xer.ca = ctx.r27.u32 > 0;
	ctx.r27.s64 = ctx.r27.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// add r28,r31,r28
	ctx.r28.u64 = ctx.r31.u64 + ctx.r28.u64;
	// bne 0x82b0643c
	if (!ctx.cr0.eq) goto loc_82B0643C;
loc_82B06458:
	// addi r11,r31,-1
	ctx.r11.s64 = ctx.r31.s64 + -1;
	// addi r10,r1,80
	ctx.r10.s64 = ctx.r1.s64 + 80;
	// addi r8,r1,96
	ctx.r8.s64 = ctx.r1.s64 + 96;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// li r7,1
	ctx.r7.s64 = 1;
	// subfic r9,r11,32
	ctx.xer.ca = ctx.r11.u32 <= 32;
	ctx.r9.s64 = 32 - ctx.r11.s64;
	// lvx128 v0,r0,r10
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// stvx128 v0,r0,r8
	_mm_store_si128((__m128i*)(base + ((ctx.r8.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v0.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// slw r21,r7,r9
	ctx.r21.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r7.u32 << (ctx.r9.u8 & 0x3F));
	// bge cr6,0x82b06494
	if (!ctx.cr6.lt) goto loc_82B06494;
	// li r24,-16
	ctx.r24.s64 = -16;
	// li r27,-128
	ctx.r27.s64 = -128;
	// neg r28,r23
	ctx.r28.s64 = -ctx.r23.s64;
	// b 0x82b064a4
	goto loc_82B064A4;
loc_82B06494:
	// mr r24,r26
	ctx.r24.u64 = ctx.r26.u64;
	// li r27,128
	ctx.r27.s64 = 128;
	// li r28,0
	ctx.r28.s64 = 0;
	// li r26,0
	ctx.r26.s64 = 0;
loc_82B064A4:
	// li r11,8
	ctx.r11.s64 = 8;
	// addi r10,r1,112
	ctx.r10.s64 = ctx.r1.s64 + 112;
	// slw r31,r25,r9
	ctx.r31.u64 = ctx.r9.u8 & 0x20 ? 0 : (ctx.r25.u32 << (ctx.r9.u8 & 0x3F));
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// addi r11,r10,-4
	ctx.r11.s64 = ctx.r10.s64 + -4;
loc_82B064BC:
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// add r9,r9,r24
	ctx.r9.u64 = ctx.r9.u64 + ctx.r24.u64;
	// bdnz 0x82b064bc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82B064BC;
	// add r11,r28,r30
	ctx.r11.u64 = ctx.r28.u64 + ctx.r30.u64;
	// clrlwi. r11,r11,28
	ctx.r11.u64 = ctx.r11.u32 & 0xF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82b0650c
	if (ctx.cr0.eq) goto loc_82B0650C;
loc_82B064D4:
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82b0650c
	if (ctx.cr6.eq) goto loc_82B0650C;
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82b06268
	ctx.lr = 0x82B064EC;
	sub_82B06268(ctx, base);
	// add r30,r30,r23
	ctx.r30.u64 = ctx.r30.u64 + ctx.r23.u64;
	// add r29,r29,r23
	ctx.r29.u64 = ctx.r29.u64 + ctx.r23.u64;
	// add r11,r30,r28
	ctx.r11.u64 = ctx.r30.u64 + ctx.r28.u64;
	// subf r31,r21,r31
	ctx.r31.s64 = ctx.r31.s64 - ctx.r21.s64;
	// clrlwi. r11,r11,28
	ctx.r11.u64 = ctx.r11.u32 & 0xF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// addi r11,r1,96
	ctx.r11.s64 = ctx.r1.s64 + 96;
	// lvx128 v0,r0,r11
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// bne 0x82b064d4
	if (!ctx.cr0.eq) goto loc_82B064D4;
loc_82B0650C:
	// subf r11,r26,r30
	ctx.r11.s64 = ctx.r30.s64 - ctx.r26.s64;
	// subf r10,r26,r29
	ctx.r10.s64 = ctx.r29.s64 - ctx.r26.s64;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// add r10,r10,r28
	ctx.r10.u64 = ctx.r10.u64 + ctx.r28.u64;
	// add r9,r11,r26
	ctx.r9.u64 = ctx.r11.u64 + ctx.r26.u64;
	// clrlwi. r8,r9,25
	ctx.r8.u64 = ctx.r9.u32 & 0x7F;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x82b0655c
	if (ctx.cr0.eq) goto loc_82B0655C;
loc_82B06528:
	// cmplwi cr6,r31,16
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 16, ctx.xer);
	// blt cr6,0x82b0655c
	if (ctx.cr6.lt) goto loc_82B0655C;
	// addi r8,r1,80
	ctx.r8.s64 = ctx.r1.s64 + 80;
	// lvx128 v63,r0,r10
	simd::store_shuffled(ctx.v63, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// add r9,r9,r24
	ctx.r9.u64 = ctx.r9.u64 + ctx.r24.u64;
	// add r10,r10,r24
	ctx.r10.u64 = ctx.r10.u64 + ctx.r24.u64;
	// clrlwi. r7,r9,25
	ctx.r7.u64 = ctx.r9.u32 & 0x7F;
	ctx.cr0.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// lvx128 v7,r0,r8
	simd::store_shuffled(ctx.v7, simd::load_and_shuffle(base + ((ctx.r8.u32) & ~0xF), VectorMaskL));
	// addi r31,r31,-16
	ctx.r31.s64 = ctx.r31.s64 + -16;
	// vperm128 v63,v63,v63,v7
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)ctx.v7.u8)));
	// stvx128 v63,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// add r11,r11,r24
	ctx.r11.u64 = ctx.r11.u64 + ctx.r24.u64;
	// bne 0x82b06528
	if (!ctx.cr0.eq) goto loc_82B06528;
loc_82B0655C:
	// cmplwi cr6,r31,128
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 128, ctx.xer);
	// blt cr6,0x82b06604
	if (ctx.cr6.lt) goto loc_82B06604;
loc_82B06564:
	// dcbz r0,r11
	memset(base + ((ctx.r11.u32) & ~31), 0, 32);
	// rlwinm r9,r27,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 1) & 0xFFFFFFFE;
	// dcbt r9,r10
	// addi r31,r31,-128
	ctx.r31.s64 = ctx.r31.s64 + -128;
	// lwz r9,112(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r8,116(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// cmplwi cr6,r31,128
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 128, ctx.xer);
	// lwz r7,120(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// lwz r6,124(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// lwz r4,132(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 132);
	// lvx128 v63,r9,r10
	simd::store_shuffled(ctx.v63, simd::load_and_shuffle(base + ((ctx.r9.u32 + ctx.r10.u32) & ~0xF), VectorMaskL));
	// lwz r3,136(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// lvx128 v62,r8,r10
	simd::store_shuffled(ctx.v62, simd::load_and_shuffle(base + ((ctx.r8.u32 + ctx.r10.u32) & ~0xF), VectorMaskL));
	// lwz r30,140(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// lvx128 v61,r7,r10
	simd::store_shuffled(ctx.v61, simd::load_and_shuffle(base + ((ctx.r7.u32 + ctx.r10.u32) & ~0xF), VectorMaskL));
	// vperm128 v63,v63,v63,v0
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// lvx128 v60,r6,r10
	simd::store_shuffled(ctx.v60, simd::load_and_shuffle(base + ((ctx.r6.u32 + ctx.r10.u32) & ~0xF), VectorMaskL));
	// vperm128 v62,v62,v62,v0
	_mm_store_si128((__m128i*)ctx.v62.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v62.u8), _mm_load_si128((__m128i*)ctx.v62.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vperm128 v61,v61,v61,v0
	_mm_store_si128((__m128i*)ctx.v61.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v61.u8), _mm_load_si128((__m128i*)ctx.v61.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// lwz r5,128(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 128);
	// vperm128 v60,v60,v60,v0
	_mm_store_si128((__m128i*)ctx.v60.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v60.u8), _mm_load_si128((__m128i*)ctx.v60.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// stvx128 v63,r9,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r9.u32 + ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v62,r8,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r8.u32 + ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v62.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v61,r7,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r7.u32 + ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v61.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v60,r6,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r6.u32 + ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v60.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v62,r4,r10
	simd::store_shuffled(ctx.v62, simd::load_and_shuffle(base + ((ctx.r4.u32 + ctx.r10.u32) & ~0xF), VectorMaskL));
	// lvx128 v61,r3,r10
	simd::store_shuffled(ctx.v61, simd::load_and_shuffle(base + ((ctx.r3.u32 + ctx.r10.u32) & ~0xF), VectorMaskL));
	// lvx128 v60,r30,r10
	simd::store_shuffled(ctx.v60, simd::load_and_shuffle(base + ((ctx.r30.u32 + ctx.r10.u32) & ~0xF), VectorMaskL));
	// lvx128 v63,r5,r10
	simd::store_shuffled(ctx.v63, simd::load_and_shuffle(base + ((ctx.r5.u32 + ctx.r10.u32) & ~0xF), VectorMaskL));
	// vperm128 v63,v63,v63,v0
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// stvx128 v63,r5,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r5.u32 + ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// vperm128 v62,v62,v62,v0
	_mm_store_si128((__m128i*)ctx.v62.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v62.u8), _mm_load_si128((__m128i*)ctx.v62.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vperm128 v63,v61,v61,v0
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v61.u8), _mm_load_si128((__m128i*)ctx.v61.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// add r10,r10,r27
	ctx.r10.u64 = ctx.r10.u64 + ctx.r27.u64;
	// vperm128 v61,v60,v60,v0
	_mm_store_si128((__m128i*)ctx.v61.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v60.u8), _mm_load_si128((__m128i*)ctx.v60.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// stvx128 v62,r4,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r4.u32 + ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v62.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v63,r3,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r3.u32 + ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v61,r30,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r30.u32 + ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v61.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + ctx.r27.u64;
	// bge cr6,0x82b06564
	if (!ctx.cr6.lt) goto loc_82B06564;
loc_82B06604:
	// cmplwi cr6,r31,16
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 16, ctx.xer);
	// blt cr6,0x82b06630
	if (ctx.cr6.lt) goto loc_82B06630;
	// rlwinm r9,r31,28,4,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 28) & 0xFFFFFFF;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82B06614:
	// lvx128 v63,r0,r10
	simd::store_shuffled(ctx.v63, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// add r10,r10,r24
	ctx.r10.u64 = ctx.r10.u64 + ctx.r24.u64;
	// addi r31,r31,-16
	ctx.r31.s64 = ctx.r31.s64 + -16;
	// vperm128 v63,v63,v63,v0
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// stvx128 v63,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// add r11,r11,r24
	ctx.r11.u64 = ctx.r11.u64 + ctx.r24.u64;
	// bdnz 0x82b06614
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82B06614;
loc_82B06630:
	// subf r11,r28,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r28.s64;
	// subf r10,r28,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r28.s64;
	// add r30,r11,r26
	ctx.r30.u64 = ctx.r11.u64 + ctx.r26.u64;
	// add r29,r10,r26
	ctx.r29.u64 = ctx.r10.u64 + ctx.r26.u64;
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// beq cr6,0x82b06668
	if (ctx.cr6.eq) goto loc_82B06668;
loc_82B06648:
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82b06268
	ctx.lr = 0x82B06658;
	sub_82B06268(ctx, base);
	// subf. r31,r21,r31
	ctx.r31.s64 = ctx.r31.s64 - ctx.r21.s64;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// add r30,r30,r23
	ctx.r30.u64 = ctx.r30.u64 + ctx.r23.u64;
	// add r29,r29,r23
	ctx.r29.u64 = ctx.r29.u64 + ctx.r23.u64;
	// bne 0x82b06648
	if (!ctx.cr0.eq) goto loc_82B06648;
loc_82B06668:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x82fa76ac
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B06670"))) PPC_WEAK_FUNC(sub_82B06670);
PPC_FUNC_IMPL(__imp__sub_82B06670) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7668
	ctx.lr = 0x82B06678;
	__savegprlr_24(ctx, base);
	// stwu r1,-208(r1)
	ea = -208 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// rlwinm r30,r4,16,16,31
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 16) & 0xFFFF;
	// li r10,16
	ctx.r10.s64 = 16;
	// addi r11,r30,-1
	ctx.r11.s64 = ctx.r30.s64 + -1;
	// mr r27,r6
	ctx.r27.u64 = ctx.r6.u64;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// lis r9,1
	ctx.r9.s64 = 65536;
	// subfic r11,r11,32
	ctx.xer.ca = ctx.r11.u32 <= 32;
	ctx.r11.s64 = 32 - ctx.r11.s64;
	// lis r8,1029
	ctx.r8.s64 = 67436544;
	// lis r7,2057
	ctx.r7.s64 = 134807552;
	// lis r6,3085
	ctx.r6.s64 = 202178560;
	// sraw. r11,r10,r11
	temp.u32 = ctx.r11.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r10.s32 < 0) & (((ctx.r10.s32 >> temp.u32) << temp.u32) != ctx.r10.s32);
	ctx.r11.s64 = ctx.r10.s32 >> temp.u32;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ori r9,r9,515
	ctx.r9.u64 = ctx.r9.u64 | 515;
	// ori r8,r8,1543
	ctx.r8.u64 = ctx.r8.u64 | 1543;
	// ori r7,r7,2571
	ctx.r7.u64 = ctx.r7.u64 | 2571;
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// ori r10,r6,3599
	ctx.r10.u64 = ctx.r6.u64 | 3599;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// stw r7,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r7.u32);
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// mr r26,r5
	ctx.r26.u64 = ctx.r5.u64;
	// addi r29,r1,80
	ctx.r29.s64 = ctx.r1.s64 + 80;
	// beq 0x82b066fc
	if (ctx.cr0.eq) goto loc_82B066FC;
	// mr r28,r11
	ctx.r28.u64 = ctx.r11.u64;
loc_82B066E0:
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82b06268
	ctx.lr = 0x82B066F0;
	sub_82B06268(ctx, base);
	// addic. r28,r28,-1
	ctx.xer.ca = ctx.r28.u32 > 0;
	ctx.r28.s64 = ctx.r28.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// add r29,r30,r29
	ctx.r29.u64 = ctx.r30.u64 + ctx.r29.u64;
	// bne 0x82b066e0
	if (!ctx.cr0.eq) goto loc_82B066E0;
loc_82B066FC:
	// addi r11,r30,-1
	ctx.r11.s64 = ctx.r30.s64 + -1;
	// li r10,1
	ctx.r10.s64 = 1;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// subfic r11,r11,32
	ctx.xer.ca = ctx.r11.u32 <= 32;
	ctx.r11.s64 = 32 - ctx.r11.s64;
	// slw r29,r10,r11
	ctx.r29.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r11.u8 & 0x3F));
	// slw r30,r27,r11
	ctx.r30.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r27.u32 << (ctx.r11.u8 & 0x3F));
	// bge cr6,0x82b0672c
	if (!ctx.cr6.lt) goto loc_82B0672C;
	// addi r11,r27,-1
	ctx.r11.s64 = ctx.r27.s64 + -1;
	// mullw r11,r11,r26
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r26.s32);
	// add r31,r11,r31
	ctx.r31.u64 = ctx.r11.u64 + ctx.r31.u64;
	// neg r26,r26
	ctx.r26.s64 = -ctx.r26.s64;
loc_82B0672C:
	// li r9,8
	ctx.r9.s64 = 8;
	// addi r10,r1,92
	ctx.r10.s64 = ctx.r1.s64 + 92;
	// li r11,0
	ctx.r11.s64 = 0;
	// mtctr r9
	ctx.ctr.u64 = ctx.r9.u64;
loc_82B0673C:
	// stwu r11,4(r10)
	ea = 4 + ctx.r10.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r10.u32 = ea;
	// addi r11,r11,16
	ctx.r11.s64 = ctx.r11.s64 + 16;
	// bdnz 0x82b0673c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82B0673C;
	// add r11,r31,r26
	ctx.r11.u64 = ctx.r31.u64 + ctx.r26.u64;
	// xor r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r31.u64;
	// rlwinm. r11,r11,0,0,24
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFF80;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82b06784
	if (ctx.cr0.eq) goto loc_82B06784;
	// li r11,128
	ctx.r11.s64 = 128;
	// dcbt r11,r31
	// b 0x82b06784
	goto loc_82B06784;
loc_82B06764:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82b0678c
	if (ctx.cr6.eq) goto loc_82B0678C;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b06268
	ctx.lr = 0x82B0677C;
	sub_82B06268(ctx, base);
	// add r31,r31,r26
	ctx.r31.u64 = ctx.r31.u64 + ctx.r26.u64;
	// subf r30,r29,r30
	ctx.r30.s64 = ctx.r30.s64 - ctx.r29.s64;
loc_82B06784:
	// clrlwi. r11,r31,28
	ctx.r11.u64 = ctx.r31.u32 & 0xF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82b06764
	if (!ctx.cr0.eq) goto loc_82B06764;
loc_82B0678C:
	// addi r11,r1,80
	ctx.r11.s64 = ctx.r1.s64 + 80;
	// clrlwi. r10,r31,25
	ctx.r10.u64 = ctx.r31.u32 & 0x7F;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lvx128 v0,r0,r11
	simd::store_shuffled(ctx.v0, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// beq 0x82b067c0
	if (ctx.cr0.eq) goto loc_82B067C0;
loc_82B0679C:
	// cmplwi cr6,r30,16
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 16, ctx.xer);
	// blt cr6,0x82b067c0
	if (ctx.cr6.lt) goto loc_82B067C0;
	// lvx128 v63,r0,r31
	simd::store_shuffled(ctx.v63, simd::load_and_shuffle(base + ((ctx.r31.u32) & ~0xF), VectorMaskL));
	// addi r30,r30,-16
	ctx.r30.s64 = ctx.r30.s64 + -16;
	// vperm128 v63,v63,v63,v0
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// stvx128 v63,r0,r31
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r31,r31,16
	ctx.r31.s64 = ctx.r31.s64 + 16;
	// clrlwi. r11,r31,25
	ctx.r11.u64 = ctx.r31.u32 & 0x7F;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82b0679c
	if (!ctx.cr0.eq) goto loc_82B0679C;
loc_82B067C0:
	// cmplwi cr6,r30,128
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 128, ctx.xer);
	// ble cr6,0x82b06890
	if (!ctx.cr6.gt) goto loc_82B06890;
	// addi r11,r30,-129
	ctx.r11.s64 = ctx.r30.s64 + -129;
	// lwz r10,100(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r8,96(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// rlwinm r9,r11,25,7,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 25) & 0x1FFFFFF;
	// lwz r7,104(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// lwz r6,108(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// subf r4,r10,r8
	ctx.r4.s64 = ctx.r8.s64 - ctx.r10.s64;
	// addi r3,r9,1
	ctx.r3.s64 = ctx.r9.s64 + 1;
	// lwz r5,112(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r28,116(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// subf r9,r10,r7
	ctx.r9.s64 = ctx.r7.s64 - ctx.r10.s64;
	// lwz r27,120(r1)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// subf r8,r10,r6
	ctx.r8.s64 = ctx.r6.s64 - ctx.r10.s64;
	// lwz r24,124(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// subf r7,r10,r5
	ctx.r7.s64 = ctx.r5.s64 - ctx.r10.s64;
	// add r11,r10,r31
	ctx.r11.u64 = ctx.r10.u64 + ctx.r31.u64;
	// subf r6,r10,r28
	ctx.r6.s64 = ctx.r28.s64 - ctx.r10.s64;
	// mtctr r3
	ctx.ctr.u64 = ctx.r3.u64;
	// subf r5,r10,r27
	ctx.r5.s64 = ctx.r27.s64 - ctx.r10.s64;
	// subf r10,r10,r24
	ctx.r10.s64 = ctx.r24.s64 - ctx.r10.s64;
loc_82B06818:
	// li r3,128
	ctx.r3.s64 = 128;
	// dcbt r3,r31
	// lvx128 v63,r4,r11
	simd::store_shuffled(ctx.v63, simd::load_and_shuffle(base + ((ctx.r4.u32 + ctx.r11.u32) & ~0xF), VectorMaskL));
	// addi r31,r31,128
	ctx.r31.s64 = ctx.r31.s64 + 128;
	// lvx128 v62,r0,r11
	simd::store_shuffled(ctx.v62, simd::load_and_shuffle(base + ((ctx.r11.u32) & ~0xF), VectorMaskL));
	// addi r30,r30,-128
	ctx.r30.s64 = ctx.r30.s64 + -128;
	// lvx128 v61,r9,r11
	simd::store_shuffled(ctx.v61, simd::load_and_shuffle(base + ((ctx.r9.u32 + ctx.r11.u32) & ~0xF), VectorMaskL));
	// vperm128 v63,v63,v63,v0
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// lvx128 v60,r8,r11
	simd::store_shuffled(ctx.v60, simd::load_and_shuffle(base + ((ctx.r8.u32 + ctx.r11.u32) & ~0xF), VectorMaskL));
	// vperm128 v62,v62,v62,v0
	_mm_store_si128((__m128i*)ctx.v62.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v62.u8), _mm_load_si128((__m128i*)ctx.v62.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vperm128 v61,v61,v61,v0
	_mm_store_si128((__m128i*)ctx.v61.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v61.u8), _mm_load_si128((__m128i*)ctx.v61.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vperm128 v60,v60,v60,v0
	_mm_store_si128((__m128i*)ctx.v60.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v60.u8), _mm_load_si128((__m128i*)ctx.v60.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// stvx128 v63,r4,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r4.u32 + ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v62,r0,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v62.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v61,r9,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r9.u32 + ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v61.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v60,r8,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r8.u32 + ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v60.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// lvx128 v62,r6,r11
	simd::store_shuffled(ctx.v62, simd::load_and_shuffle(base + ((ctx.r6.u32 + ctx.r11.u32) & ~0xF), VectorMaskL));
	// lvx128 v61,r5,r11
	simd::store_shuffled(ctx.v61, simd::load_and_shuffle(base + ((ctx.r5.u32 + ctx.r11.u32) & ~0xF), VectorMaskL));
	// lvx128 v60,r10,r11
	simd::store_shuffled(ctx.v60, simd::load_and_shuffle(base + ((ctx.r10.u32 + ctx.r11.u32) & ~0xF), VectorMaskL));
	// lvx128 v63,r7,r11
	simd::store_shuffled(ctx.v63, simd::load_and_shuffle(base + ((ctx.r7.u32 + ctx.r11.u32) & ~0xF), VectorMaskL));
	// vperm128 v63,v63,v63,v0
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// stvx128 v63,r7,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r7.u32 + ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// vperm128 v62,v62,v62,v0
	_mm_store_si128((__m128i*)ctx.v62.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v62.u8), _mm_load_si128((__m128i*)ctx.v62.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vperm128 v63,v61,v61,v0
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v61.u8), _mm_load_si128((__m128i*)ctx.v61.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// vperm128 v61,v60,v60,v0
	_mm_store_si128((__m128i*)ctx.v61.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v60.u8), _mm_load_si128((__m128i*)ctx.v60.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// stvx128 v62,r6,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r6.u32 + ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v62.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v63,r5,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r5.u32 + ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// stvx128 v61,r10,r11
	_mm_store_si128((__m128i*)(base + ((ctx.r10.u32 + ctx.r11.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v61.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r11,r11,128
	ctx.r11.s64 = ctx.r11.s64 + 128;
	// bdnz 0x82b06818
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82B06818;
loc_82B06890:
	// cmplwi cr6,r30,16
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 16, ctx.xer);
	// blt cr6,0x82b068b8
	if (ctx.cr6.lt) goto loc_82B068B8;
	// rlwinm r11,r30,28,4,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 28) & 0xFFFFFFF;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_82B068A0:
	// lvx128 v63,r0,r31
	simd::store_shuffled(ctx.v63, simd::load_and_shuffle(base + ((ctx.r31.u32) & ~0xF), VectorMaskL));
	// addi r30,r30,-16
	ctx.r30.s64 = ctx.r30.s64 + -16;
	// vperm128 v63,v63,v63,v0
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_perm_epi8_(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)ctx.v0.u8)));
	// stvx128 v63,r0,r31
	_mm_store_si128((__m128i*)(base + ((ctx.r31.u32) & ~0xF)), _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v63.u8), _mm_load_si128((__m128i*)VectorMaskL)));
	// addi r31,r31,16
	ctx.r31.s64 = ctx.r31.s64 + 16;
	// bdnz 0x82b068a0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82B068A0;
loc_82B068B8:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82b068dc
	if (ctx.cr6.eq) goto loc_82B068DC;
loc_82B068C0:
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b06268
	ctx.lr = 0x82B068D0;
	sub_82B06268(ctx, base);
	// subf. r30,r29,r30
	ctx.r30.s64 = ctx.r30.s64 - ctx.r29.s64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// add r31,r31,r26
	ctx.r31.u64 = ctx.r31.u64 + ctx.r26.u64;
	// bne 0x82b068c0
	if (!ctx.cr0.eq) goto loc_82B068C0;
loc_82B068DC:
	// addi r1,r1,208
	ctx.r1.s64 = ctx.r1.s64 + 208;
	// b 0x82fa76b8
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B068E4"))) PPC_WEAK_FUNC(sub_82B068E4);
PPC_FUNC_IMPL(__imp__sub_82B068E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B068E8"))) PPC_WEAK_FUNC(sub_82B068E8);
PPC_FUNC_IMPL(__imp__sub_82B068E8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7664
	ctx.lr = 0x82B068F0;
	__savegprlr_23(ctx, base);
	// stwu r1,-160(r1)
	ea = -160 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// srawi r11,r6,31
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x7FFFFFFF) != 0);
	ctx.r11.s64 = ctx.r6.s32 >> 31;
	// mr r29,r4
	ctx.r29.u64 = ctx.r4.u64;
	// xor r10,r6,r11
	ctx.r10.u64 = ctx.r6.u64 ^ ctx.r11.u64;
	// mr r23,r5
	ctx.r23.u64 = ctx.r5.u64;
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// rlwinm r25,r5,16,16,31
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 16) & 0xFFFF;
	// cmplwi cr6,r7,0
	ctx.cr6.compare<uint32_t>(ctx.r7.u32, 0, ctx.xer);
	// subf r24,r11,r10
	ctx.r24.s64 = ctx.r10.s64 - ctx.r11.s64;
	// beq cr6,0x82b06a64
	if (ctx.cr6.eq) goto loc_82B06A64;
	// clrlwi. r11,r5,16
	ctx.r11.u64 = ctx.r5.u32 & 0xFFFF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82b06928
	if (!ctx.cr0.eq) goto loc_82B06928;
	// cmplw cr6,r3,r4
	ctx.cr6.compare<uint32_t>(ctx.r3.u32, ctx.r4.u32, ctx.xer);
	// beq cr6,0x82b06a64
	if (ctx.cr6.eq) goto loc_82B06A64;
loc_82B06928:
	// subf r11,r29,r3
	ctx.r11.s64 = ctx.r3.s64 - ctx.r29.s64;
	// xor. r11,r11,r6
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r6.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge 0x82b06944
	if (!ctx.cr0.lt) goto loc_82B06944;
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// mr r28,r29
	ctx.r28.u64 = ctx.r29.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// b 0x82b06958
	goto loc_82B06958;
loc_82B06944:
	// addi r11,r30,-1
	ctx.r11.s64 = ctx.r30.s64 + -1;
	// neg r26,r6
	ctx.r26.s64 = -ctx.r6.s64;
	// mullw r11,r11,r6
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r6.s32);
	// add r31,r11,r3
	ctx.r31.u64 = ctx.r11.u64 + ctx.r3.u64;
	// add r28,r11,r29
	ctx.r28.u64 = ctx.r11.u64 + ctx.r29.u64;
loc_82B06958:
	// bl 0x83179254
	ctx.lr = 0x82B0695C;
	__imp__MmQueryAddressProtect(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82b06970
	if (ctx.cr0.eq) goto loc_82B06970;
	// rlwinm. r11,r3,0,21,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x600;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r27,1
	ctx.r27.s64 = 1;
	// beq 0x82b06974
	if (ctx.cr0.eq) goto loc_82B06974;
loc_82B06970:
	// li r27,0
	ctx.r27.s64 = 0;
loc_82B06974:
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x83179254
	ctx.lr = 0x82B0697C;
	__imp__MmQueryAddressProtect(ctx, base);
	// cmplwi r3,0
	ctx.cr0.compare<uint32_t>(ctx.r3.u32, 0, ctx.xer);
	// beq 0x82b06990
	if (ctx.cr0.eq) goto loc_82B06990;
	// rlwinm. r11,r3,0,21,22
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 0) & 0x600;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// li r11,1
	ctx.r11.s64 = 1;
	// beq 0x82b06994
	if (ctx.cr0.eq) goto loc_82B06994;
loc_82B06990:
	// li r11,0
	ctx.r11.s64 = 0;
loc_82B06994:
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// beq cr6,0x82b06a3c
	if (ctx.cr6.eq) goto loc_82B06A3C;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82b06a3c
	if (ctx.cr6.eq) goto loc_82B06A3C;
	// cmplwi cr6,r25,16
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 16, ctx.xer);
	// bgt cr6,0x82b06a3c
	if (ctx.cr6.gt) goto loc_82B06A3C;
	// cmplwi cr6,r25,0
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, 0, ctx.xer);
	// beq cr6,0x82b06a3c
	if (ctx.cr6.eq) goto loc_82B06A3C;
	// addi r11,r25,-1
	ctx.r11.s64 = ctx.r25.s64 + -1;
	// and. r11,r11,r25
	ctx.r11.u64 = ctx.r11.u64 & ctx.r25.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82b06a3c
	if (!ctx.cr0.eq) goto loc_82B06A3C;
	// cmplw cr6,r24,r25
	ctx.cr6.compare<uint32_t>(ctx.r24.u32, ctx.r25.u32, ctx.xer);
	// bne cr6,0x82b06a3c
	if (!ctx.cr6.eq) goto loc_82B06A3C;
	// addi r11,r24,-1
	ctx.r11.s64 = ctx.r24.s64 + -1;
	// and. r10,r11,r31
	ctx.r10.u64 = ctx.r11.u64 & ctx.r31.u64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82b06a3c
	if (!ctx.cr0.eq) goto loc_82B06A3C;
	// and. r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 & ctx.r28.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82b06a3c
	if (!ctx.cr0.eq) goto loc_82B06A3C;
	// cmplw cr6,r31,r28
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r28.u32, ctx.xer);
	// bne cr6,0x82b069fc
	if (!ctx.cr6.eq) goto loc_82B069FC;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b06670
	ctx.lr = 0x82B069F8;
	sub_82B06670(ctx, base);
	// b 0x82b06a64
	goto loc_82B06A64;
loc_82B069FC:
	// subf r11,r28,r31
	ctx.r11.s64 = ctx.r31.s64 - ctx.r28.s64;
	// srawi r10,r11,31
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x7FFFFFFF) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 31;
	// xor r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 ^ ctx.r10.u64;
	// subf r11,r10,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r10.s64;
	// cmpwi cr6,r11,128
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 128, ctx.xer);
	// blt cr6,0x82b06a3c
	if (ctx.cr6.lt) goto loc_82B06A3C;
	// xor r11,r28,r31
	ctx.r11.u64 = ctx.r28.u64 ^ ctx.r31.u64;
	// clrlwi. r11,r11,28
	ctx.r11.u64 = ctx.r11.u32 & 0xF;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82b06a3c
	if (!ctx.cr0.eq) goto loc_82B06A3C;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b063c8
	ctx.lr = 0x82B06A38;
	sub_82B063C8(ctx, base);
	// b 0x82b06a64
	goto loc_82B06A64;
loc_82B06A3C:
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82b06a64
	if (ctx.cr6.eq) goto loc_82B06A64;
	// subf r29,r31,r28
	ctx.r29.s64 = ctx.r28.s64 - ctx.r31.s64;
loc_82B06A48:
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// add r4,r29,r31
	ctx.r4.u64 = ctx.r29.u64 + ctx.r31.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b06268
	ctx.lr = 0x82B06A58;
	sub_82B06268(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// add r31,r26,r31
	ctx.r31.u64 = ctx.r26.u64 + ctx.r31.u64;
	// bne 0x82b06a48
	if (!ctx.cr0.eq) goto loc_82B06A48;
loc_82B06A64:
	// addi r1,r1,160
	ctx.r1.s64 = ctx.r1.s64 + 160;
	// b 0x82fa76b4
	__restgprlr_23(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B06A6C"))) PPC_WEAK_FUNC(sub_82B06A6C);
PPC_FUNC_IMPL(__imp__sub_82B06A6C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B06A70"))) PPC_WEAK_FUNC(sub_82B06A70);
PPC_FUNC_IMPL(__imp__sub_82B06A70) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7648
	ctx.lr = 0x82B06A78;
	__savegprlr_16(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r28,316(r1)
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r1.u32 + 316);
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// mr r16,r8
	ctx.r16.u64 = ctx.r8.u64;
	// stw r9,292(r1)
	PPC_STORE_U32(ctx.r1.u32 + 292, ctx.r9.u32);
	// clrlwi r31,r28,26
	ctx.r31.u64 = ctx.r28.u32 & 0x3F;
	// stw r10,300(r1)
	PPC_STORE_U32(ctx.r1.u32 + 300, ctx.r10.u32);
	// addi r11,r11,-25800
	ctx.r11.s64 = ctx.r11.s64 + -25800;
	// mr r27,r3
	ctx.r27.u64 = ctx.r3.u64;
	// mr r21,r4
	ctx.r21.u64 = ctx.r4.u64;
	// mr r17,r5
	ctx.r17.u64 = ctx.r5.u64;
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// lbzx r30,r31,r11
	ctx.r30.u64 = PPC_LOAD_U8(ctx.r31.u32 + ctx.r11.u32);
	// mr r18,r7
	ctx.r18.u64 = ctx.r7.u64;
	// rlwinm. r8,r28,0,23,23
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 0) & 0x100;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq 0x82b06ae0
	if (ctx.cr0.eq) goto loc_82B06AE0;
	// li r9,1
	ctx.r9.s64 = 1;
	// lwz r8,324(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 324);
	// mr r7,r31
	ctx.r7.u64 = ctx.r31.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// addi r5,r1,308
	ctx.r5.s64 = ctx.r1.s64 + 308;
	// addi r4,r1,300
	ctx.r4.s64 = ctx.r1.s64 + 300;
	// addi r3,r1,292
	ctx.r3.s64 = ctx.r1.s64 + 292;
	// bl 0x82661298
	ctx.lr = 0x82B06AD8;
	sub_82661298(ctx, base);
	// lwz r10,300(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 300);
	// lwz r9,292(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 292);
loc_82B06AE0:
	// mr r19,r9
	ctx.r19.u64 = ctx.r9.u64;
	// mr r20,r10
	ctx.r20.u64 = ctx.r10.u64;
	// cmplwi cr6,r31,49
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 49, ctx.xer);
	// bgt cr6,0x82b06b28
	if (ctx.cr6.gt) goto loc_82B06B28;
	// beq cr6,0x82b06b48
	if (ctx.cr6.eq) goto loc_82B06B48;
	// cmplwi cr6,r31,11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 11, ctx.xer);
	// blt cr6,0x82b06b5c
	if (ctx.cr6.lt) goto loc_82B06B5C;
	// cmplwi cr6,r31,12
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 12, ctx.xer);
	// ble cr6,0x82b06b18
	if (!ctx.cr6.gt) goto loc_82B06B18;
	// cmplwi cr6,r31,17
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 17, ctx.xer);
	// ble cr6,0x82b06b5c
	if (!ctx.cr6.gt) goto loc_82B06B5C;
	// cmplwi cr6,r31,20
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 20, ctx.xer);
	// ble cr6,0x82b06b48
	if (!ctx.cr6.gt) goto loc_82B06B48;
	// b 0x82b06b5c
	goto loc_82B06B5C;
loc_82B06B18:
	// addi r11,r9,1
	ctx.r11.s64 = ctx.r9.s64 + 1;
	// rlwinm r30,r30,1,0,30
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 1) & 0xFFFFFFFE;
	// rlwinm r19,r11,31,1,31
	ctx.r19.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 31) & 0x7FFFFFFF;
	// b 0x82b06b5c
	goto loc_82B06B5C;
loc_82B06B28:
	// cmplwi cr6,r31,51
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 51, ctx.xer);
	// blt cr6,0x82b06b5c
	if (ctx.cr6.lt) goto loc_82B06B5C;
	// cmplwi cr6,r31,53
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 53, ctx.xer);
	// ble cr6,0x82b06b48
	if (!ctx.cr6.gt) goto loc_82B06B48;
	// cmplwi cr6,r31,57
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 57, ctx.xer);
	// ble cr6,0x82b06b5c
	if (!ctx.cr6.gt) goto loc_82B06B5C;
	// cmplwi cr6,r31,61
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 61, ctx.xer);
	// bgt cr6,0x82b06b5c
	if (ctx.cr6.gt) goto loc_82B06B5C;
loc_82B06B48:
	// addi r11,r9,3
	ctx.r11.s64 = ctx.r9.s64 + 3;
	// addi r8,r10,3
	ctx.r8.s64 = ctx.r10.s64 + 3;
	// rlwinm r19,r11,30,2,31
	ctx.r19.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFF;
	// rlwinm r20,r8,30,2,31
	ctx.r20.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 30) & 0x3FFFFFFF;
	// rlwinm r30,r30,4,0,27
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 4) & 0xFFFFFFF0;
loc_82B06B5C:
	// srawi r11,r28,6
	ctx.xer.ca = (ctx.r28.s32 < 0) & ((ctx.r28.u32 & 0x3F) != 0);
	ctx.r11.s64 = ctx.r28.s32 >> 6;
	// clrlwi r11,r11,30
	ctx.r11.u64 = ctx.r11.u32 & 0x3;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x82b06ba4
	if (ctx.cr6.lt) goto loc_82B06BA4;
	// beq cr6,0x82b06b98
	if (ctx.cr6.eq) goto loc_82B06B98;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// blt cr6,0x82b06b90
	if (ctx.cr6.lt) goto loc_82B06B90;
	// beq cr6,0x82b06b84
	if (ctx.cr6.eq) goto loc_82B06B84;
	// li r23,0
	ctx.r23.s64 = 0;
	// b 0x82b06ba8
	goto loc_82B06BA8;
loc_82B06B84:
	// lis r23,4
	ctx.r23.s64 = 262144;
	// ori r23,r23,2
	ctx.r23.u64 = ctx.r23.u64 | 2;
	// b 0x82b06ba8
	goto loc_82B06BA8;
loc_82B06B90:
	// lis r23,4
	ctx.r23.s64 = 262144;
	// b 0x82b06b9c
	goto loc_82B06B9C;
loc_82B06B98:
	// lis r23,2
	ctx.r23.s64 = 131072;
loc_82B06B9C:
	// ori r23,r23,1
	ctx.r23.u64 = ctx.r23.u64 | 1;
	// b 0x82b06ba8
	goto loc_82B06BA8;
loc_82B06BA4:
	// rlwinm r23,r30,13,0,15
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 13) & 0xFFFF0000;
loc_82B06BA8:
	// rlwinm r24,r23,16,16,31
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 16) & 0xFFFF;
	// rlwinm r11,r30,29,3,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 29) & 0x1FFFFFFF;
	// addi r8,r24,-1
	ctx.r8.s64 = ctx.r24.s64 + -1;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cntlzw r8,r8
	ctx.r8.u64 = ctx.r8.u32 == 0 ? 32 : __builtin_clz(ctx.r8.u32);
	// rlwinm r7,r21,3,0,28
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 3) & 0xFFFFFFF8;
	// subfic r6,r8,35
	ctx.xer.ca = ctx.r8.u32 <= 35;
	ctx.r6.s64 = 35 - ctx.r8.s64;
	// and. r5,r11,r21
	ctx.r5.u64 = ctx.r11.u64 & ctx.r21.u64;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// divwu r8,r7,r30
	ctx.r8.u32 = ctx.r7.u32 / ctx.r30.u32;
	// twllei r30,0
	if (ctx.r30.u32 <= 0) __builtin_debugtrap();
	// srw r22,r30,r6
	ctx.r22.u64 = ctx.r6.u8 & 0x20 ? 0 : (ctx.r30.u32 >> (ctx.r6.u8 & 0x3F));
	// bne 0x82b06c7c
	if (!ctx.cr0.eq) goto loc_82B06C7C;
	// cmplw cr6,r21,r18
	ctx.cr6.compare<uint32_t>(ctx.r21.u32, ctx.r18.u32, ctx.xer);
	// bne cr6,0x82b06c7c
	if (!ctx.cr6.eq) goto loc_82B06C7C;
	// cmplwi cr6,r9,16
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 16, ctx.xer);
	// ble cr6,0x82b06c7c
	if (!ctx.cr6.gt) goto loc_82B06C7C;
	// cmplwi cr6,r10,16
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 16, ctx.xer);
	// ble cr6,0x82b06c7c
	if (!ctx.cr6.gt) goto loc_82B06C7C;
	// lwz r10,308(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 308);
	// cmplwi cr6,r10,1
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1, ctx.xer);
	// ble cr6,0x82b06c30
	if (!ctx.cr6.gt) goto loc_82B06C30;
	// and. r11,r11,r17
	ctx.r11.u64 = ctx.r11.u64 & ctx.r17.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne 0x82b06c30
	if (!ctx.cr0.eq) goto loc_82B06C30;
	// cmplw cr6,r17,r16
	ctx.cr6.compare<uint32_t>(ctx.r17.u32, ctx.r16.u32, ctx.xer);
	// bne cr6,0x82b06c30
	if (!ctx.cr6.eq) goto loc_82B06C30;
	// mullw r11,r22,r8
	ctx.r11.s64 = int64_t(ctx.r22.s32) * int64_t(ctx.r8.s32);
	// mullw r11,r11,r20
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r20.s32);
	// mullw r7,r11,r10
	ctx.r7.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r10.s32);
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82b068e8
	ctx.lr = 0x82B06C2C;
	sub_82B068E8(ctx, base);
	// b 0x82b06ce8
	goto loc_82B06CE8;
loc_82B06C30:
	// li r31,0
	ctx.r31.s64 = 0;
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
	// cmplwi cr6,r10,0
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// beq cr6,0x82b06ce8
	if (ctx.cr6.eq) goto loc_82B06CE8;
	// mullw r11,r22,r8
	ctx.r11.s64 = int64_t(ctx.r22.s32) * int64_t(ctx.r8.s32);
	// mullw r28,r11,r20
	ctx.r28.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r20.s32);
loc_82B06C48:
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82b068e8
	ctx.lr = 0x82B06C60;
	sub_82B068E8(ctx, base);
	// lwz r11,308(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 308);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// add r30,r30,r17
	ctx.r30.u64 = ctx.r30.u64 + ctx.r17.u64;
	// add r29,r29,r16
	ctx.r29.u64 = ctx.r29.u64 + ctx.r16.u64;
	// cmplw cr6,r31,r11
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82b06c48
	if (ctx.cr6.lt) goto loc_82B06C48;
	// b 0x82b06ce8
	goto loc_82B06CE8;
loc_82B06C7C:
	// lwz r11,308(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 308);
	// li r25,0
	ctx.r25.s64 = 0;
	// mr r26,r29
	ctx.r26.u64 = ctx.r29.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82b06ce8
	if (ctx.cr6.eq) goto loc_82B06CE8;
loc_82B06C90:
	// mr r30,r27
	ctx.r30.u64 = ctx.r27.u64;
	// mr r29,r26
	ctx.r29.u64 = ctx.r26.u64;
	// cmplwi cr6,r20,0
	ctx.cr6.compare<uint32_t>(ctx.r20.u32, 0, ctx.xer);
	// beq cr6,0x82b06cd0
	if (ctx.cr6.eq) goto loc_82B06CD0;
	// mullw r28,r22,r19
	ctx.r28.s64 = int64_t(ctx.r22.s32) * int64_t(ctx.r19.s32);
	// mr r31,r20
	ctx.r31.u64 = ctx.r20.u64;
loc_82B06CA8:
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// mr r5,r23
	ctx.r5.u64 = ctx.r23.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82b068e8
	ctx.lr = 0x82B06CC0;
	sub_82B068E8(ctx, base);
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// add r30,r30,r21
	ctx.r30.u64 = ctx.r30.u64 + ctx.r21.u64;
	// add r29,r29,r18
	ctx.r29.u64 = ctx.r29.u64 + ctx.r18.u64;
	// bne 0x82b06ca8
	if (!ctx.cr0.eq) goto loc_82B06CA8;
loc_82B06CD0:
	// lwz r11,308(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 308);
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// add r27,r27,r17
	ctx.r27.u64 = ctx.r27.u64 + ctx.r17.u64;
	// add r26,r26,r16
	ctx.r26.u64 = ctx.r26.u64 + ctx.r16.u64;
	// cmplw cr6,r25,r11
	ctx.cr6.compare<uint32_t>(ctx.r25.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82b06c90
	if (ctx.cr6.lt) goto loc_82B06C90;
loc_82B06CE8:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x82fa7698
	__restgprlr_16(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B06CF0"))) PPC_WEAK_FUNC(sub_82B06CF0);
PPC_FUNC_IMPL(__imp__sub_82B06CF0) {
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
	// li r11,1
	ctx.r11.s64 = 1;
	// stw r9,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r9.u32);
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// stw r11,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r11.u32);
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
	// stw r11,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r11.u32);
	// mr r9,r7
	ctx.r9.u64 = ctx.r7.u64;
	// mullw r8,r6,r8
	ctx.r8.s64 = int64_t(ctx.r6.s32) * int64_t(ctx.r8.s32);
	// mr r7,r6
	ctx.r7.u64 = ctx.r6.u64;
	// mullw r5,r4,r10
	ctx.r5.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r10.s32);
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// bl 0x82b06a70
	ctx.lr = 0x82B06D30;
	sub_82B06A70(ctx, base);
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

__attribute__((alias("__imp__sub_82B06D44"))) PPC_WEAK_FUNC(sub_82B06D44);
PPC_FUNC_IMPL(__imp__sub_82B06D44) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B06D48"))) PPC_WEAK_FUNC(sub_82B06D48);
PPC_FUNC_IMPL(__imp__sub_82B06D48) {
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
	// lwz r11,220(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 220);
	// li r31,2
	ctx.r31.s64 = 2;
	// lwz r30,212(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 212);
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r31.u32);
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// bl 0x82b06a70
	ctx.lr = 0x82B06D78;
	sub_82B06A70(ctx, base);
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

__attribute__((alias("__imp__sub_82B06D90"))) PPC_WEAK_FUNC(sub_82B06D90);
PPC_FUNC_IMPL(__imp__sub_82B06D90) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7640
	ctx.lr = 0x82B06D98;
	__savegprlr_14(ctx, base);
	// stfd f31,-160(r1)
	ctx.fpscr.disableFlushMode();
	PPC_STORE_U64(ctx.r1.u32 + -160, ctx.f31.u64);
	// stwu r1,-576(r1)
	ea = -576 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// stw r3,596(r1)
	PPC_STORE_U32(ctx.r1.u32 + 596, ctx.r3.u32);
	// addi r3,r1,152
	ctx.r3.s64 = ctx.r1.s64 + 152;
	// stw r4,604(r1)
	PPC_STORE_U32(ctx.r1.u32 + 604, ctx.r4.u32);
	// mr r26,r4
	ctx.r26.u64 = ctx.r4.u64;
	// stw r5,612(r1)
	PPC_STORE_U32(ctx.r1.u32 + 612, ctx.r5.u32);
	// mr r19,r5
	ctx.r19.u64 = ctx.r5.u64;
	// stw r6,620(r1)
	PPC_STORE_U32(ctx.r1.u32 + 620, ctx.r6.u32);
	// mr r24,r6
	ctx.r24.u64 = ctx.r6.u64;
	// stw r7,628(r1)
	PPC_STORE_U32(ctx.r1.u32 + 628, ctx.r7.u32);
	// mr r21,r7
	ctx.r21.u64 = ctx.r7.u64;
	// fmr f31,f1
	ctx.f31.f64 = ctx.f1.f64;
	// mr r31,r8
	ctx.r31.u64 = ctx.r8.u64;
	// mr r15,r9
	ctx.r15.u64 = ctx.r9.u64;
	// mr r16,r10
	ctx.r16.u64 = ctx.r10.u64;
	// bl 0x82958960
	ctx.lr = 0x82B06DE0;
	sub_82958960(ctx, base);
	// lwz r18,668(r1)
	ctx.r18.u64 = PPC_LOAD_U32(ctx.r1.u32 + 668);
	// li r23,4
	ctx.r23.s64 = 4;
	// li r30,0
	ctx.r30.s64 = 0;
	// stw r23,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r23.u32);
	// cmplwi cr6,r18,0
	ctx.cr6.compare<uint32_t>(ctx.r18.u32, 0, ctx.xer);
	// bne cr6,0x82b06e0c
	if (!ctx.cr6.eq) goto loc_82B06E0C;
	// stw r19,280(r1)
	PPC_STORE_U32(ctx.r1.u32 + 280, ctx.r19.u32);
	// addi r18,r1,272
	ctx.r18.s64 = ctx.r1.s64 + 272;
	// stw r24,284(r1)
	PPC_STORE_U32(ctx.r1.u32 + 284, ctx.r24.u32);
	// stw r30,272(r1)
	PPC_STORE_U32(ctx.r1.u32 + 272, ctx.r30.u32);
	// stw r30,276(r1)
	PPC_STORE_U32(ctx.r1.u32 + 276, ctx.r30.u32);
loc_82B06E0C:
	// lwz r9,0(r18)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r18.u32 + 0);
	// cmplwi cr6,r31,0
	ctx.cr6.compare<uint32_t>(ctx.r31.u32, 0, ctx.xer);
	// lwz r10,8(r18)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r18.u32 + 8);
	// lwz r11,4(r18)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r18.u32 + 4);
	// lwz r8,12(r18)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r18.u32 + 12);
	// subf r29,r9,r10
	ctx.r29.s64 = ctx.r10.s64 - ctx.r9.s64;
	// subf r28,r11,r8
	ctx.r28.s64 = ctx.r8.s64 - ctx.r11.s64;
	// bne cr6,0x82b06e38
	if (!ctx.cr6.eq) goto loc_82B06E38;
	// stw r30,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r30.u32);
	// addi r31,r1,144
	ctx.r31.s64 = ctx.r1.s64 + 144;
	// stw r30,148(r1)
	PPC_STORE_U32(ctx.r1.u32 + 148, ctx.r30.u32);
loc_82B06E38:
	// lwz r22,676(r1)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r1.u32 + 676);
	// rlwinm. r10,r22,0,27,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 0) & 0x10;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82b06e50
	if (!ctx.cr0.eq) goto loc_82B06E50;
	// lis r23,8
	ctx.r23.s64 = 524288;
	// ori r23,r23,4
	ctx.r23.u64 = ctx.r23.u64 | 4;
	// stw r23,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r23.u32);
loc_82B06E50:
	// rlwinm r10,r21,0,21,22
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 0) & 0x600;
	// lwz r17,660(r1)
	ctx.r17.u64 = PPC_LOAD_U32(ctx.r1.u32 + 660);
	// clrlwi r14,r21,26
	ctx.r14.u64 = ctx.r21.u32 & 0x3F;
	// addi r10,r10,-1536
	ctx.r10.s64 = ctx.r10.s64 + -1536;
	// rlwinm r8,r17,0,21,22
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r17.u32 | (ctx.r17.u64 << 32), 0) & 0x600;
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// clrlwi r27,r17,26
	ctx.r27.u64 = ctx.r17.u32 & 0x3F;
	// rlwinm r10,r10,27,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// cmpwi cr6,r8,1536
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 1536, ctx.xer);
	// bne cr6,0x82b06e80
	if (!ctx.cr6.eq) goto loc_82B06E80;
	// oris r23,r23,32
	ctx.r23.u64 = ctx.r23.u64 | 2097152;
	// stw r23,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r23.u32);
loc_82B06E80:
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82b06e90
	if (ctx.cr6.eq) goto loc_82B06E90;
	// oris r23,r23,64
	ctx.r23.u64 = ctx.r23.u64 | 4194304;
	// stw r23,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r23.u32);
loc_82B06E90:
	// cmplwi cr6,r14,49
	ctx.cr6.compare<uint32_t>(ctx.r14.u32, 49, ctx.xer);
	// beq cr6,0x82b07330
	if (ctx.cr6.eq) goto loc_82B07330;
	// cmplwi cr6,r14,60
	ctx.cr6.compare<uint32_t>(ctx.r14.u32, 60, ctx.xer);
	// beq cr6,0x82b07330
	if (ctx.cr6.eq) goto loc_82B07330;
	// addi r5,r1,288
	ctx.r5.s64 = ctx.r1.s64 + 288;
	// addi r4,r1,292
	ctx.r4.s64 = ctx.r1.s64 + 292;
	// mr r3,r14
	ctx.r3.u64 = ctx.r14.u64;
	// bl 0x82af34b8
	ctx.lr = 0x82B06EB0;
	sub_82AF34B8(ctx, base);
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r20,1
	ctx.r20.s64 = 1;
	// add r9,r11,r29
	ctx.r9.u64 = ctx.r11.u64 + ctx.r29.u64;
	// stw r25,176(r1)
	PPC_STORE_U32(ctx.r1.u32 + 176, ctx.r25.u32);
	// add r8,r10,r28
	ctx.r8.u64 = ctx.r10.u64 + ctx.r28.u64;
	// stw r26,184(r1)
	PPC_STORE_U32(ctx.r1.u32 + 184, ctx.r26.u32);
	// stw r30,188(r1)
	PPC_STORE_U32(ctx.r1.u32 + 188, ctx.r30.u32);
	// cmplwi cr6,r14,18
	ctx.cr6.compare<uint32_t>(ctx.r14.u32, 18, ctx.xer);
	// stw r30,192(r1)
	PPC_STORE_U32(ctx.r1.u32 + 192, ctx.r30.u32);
	// stw r30,196(r1)
	PPC_STORE_U32(ctx.r1.u32 + 196, ctx.r30.u32);
	// stw r19,200(r1)
	PPC_STORE_U32(ctx.r1.u32 + 200, ctx.r19.u32);
	// stw r24,204(r1)
	PPC_STORE_U32(ctx.r1.u32 + 204, ctx.r24.u32);
	// stw r30,208(r1)
	PPC_STORE_U32(ctx.r1.u32 + 208, ctx.r30.u32);
	// stw r20,212(r1)
	PPC_STORE_U32(ctx.r1.u32 + 212, ctx.r20.u32);
	// stw r30,232(r1)
	PPC_STORE_U32(ctx.r1.u32 + 232, ctx.r30.u32);
	// stw r20,236(r1)
	PPC_STORE_U32(ctx.r1.u32 + 236, ctx.r20.u32);
	// stw r20,240(r1)
	PPC_STORE_U32(ctx.r1.u32 + 240, ctx.r20.u32);
	// stw r30,244(r1)
	PPC_STORE_U32(ctx.r1.u32 + 244, ctx.r30.u32);
	// stw r30,248(r1)
	PPC_STORE_U32(ctx.r1.u32 + 248, ctx.r30.u32);
	// stw r30,252(r1)
	PPC_STORE_U32(ctx.r1.u32 + 252, ctx.r30.u32);
	// stw r30,256(r1)
	PPC_STORE_U32(ctx.r1.u32 + 256, ctx.r30.u32);
	// stw r9,224(r1)
	PPC_STORE_U32(ctx.r1.u32 + 224, ctx.r9.u32);
	// stw r11,216(r1)
	PPC_STORE_U32(ctx.r1.u32 + 216, ctx.r11.u32);
	// stw r10,220(r1)
	PPC_STORE_U32(ctx.r1.u32 + 220, ctx.r10.u32);
	// stw r8,228(r1)
	PPC_STORE_U32(ctx.r1.u32 + 228, ctx.r8.u32);
	// beq cr6,0x82b06fcc
	if (ctx.cr6.eq) goto loc_82B06FCC;
	// cmplwi cr6,r14,51
	ctx.cr6.compare<uint32_t>(ctx.r14.u32, 51, ctx.xer);
	// beq cr6,0x82b06fcc
	if (ctx.cr6.eq) goto loc_82B06FCC;
	// cmplwi cr6,r14,19
	ctx.cr6.compare<uint32_t>(ctx.r14.u32, 19, ctx.xer);
	// beq cr6,0x82b06fc0
	if (ctx.cr6.eq) goto loc_82B06FC0;
	// cmplwi cr6,r14,52
	ctx.cr6.compare<uint32_t>(ctx.r14.u32, 52, ctx.xer);
	// beq cr6,0x82b06fc0
	if (ctx.cr6.eq) goto loc_82B06FC0;
	// cmplwi cr6,r14,20
	ctx.cr6.compare<uint32_t>(ctx.r14.u32, 20, ctx.xer);
	// beq cr6,0x82b06fb4
	if (ctx.cr6.eq) goto loc_82B06FB4;
	// cmplwi cr6,r14,53
	ctx.cr6.compare<uint32_t>(ctx.r14.u32, 53, ctx.xer);
	// beq cr6,0x82b06fb4
	if (ctx.cr6.eq) goto loc_82B06FB4;
	// cmplwi cr6,r14,58
	ctx.cr6.compare<uint32_t>(ctx.r14.u32, 58, ctx.xer);
	// bne cr6,0x82b06f58
	if (!ctx.cr6.eq) goto loc_82B06F58;
	// lis r11,6688
	ctx.r11.s64 = 438304768;
	// ori r11,r11,122
	ctx.r11.u64 = ctx.r11.u64 | 122;
	// b 0x82b06fd4
	goto loc_82B06FD4;
loc_82B06F58:
	// cmplwi cr6,r14,59
	ctx.cr6.compare<uint32_t>(ctx.r14.u32, 59, ctx.xer);
	// bne cr6,0x82b06f6c
	if (!ctx.cr6.eq) goto loc_82B06F6C;
	// lis r11,6688
	ctx.r11.s64 = 438304768;
	// ori r11,r11,123
	ctx.r11.u64 = ctx.r11.u64 | 123;
	// b 0x82b06fd4
	goto loc_82B06FD4;
loc_82B06F6C:
	// cmplwi cr6,r14,11
	ctx.cr6.compare<uint32_t>(ctx.r14.u32, 11, ctx.xer);
	// bne cr6,0x82b06f90
	if (!ctx.cr6.eq) goto loc_82B06F90;
	// rlwinm. r11,r22,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82b06f88
	if (ctx.cr0.eq) goto loc_82B06F88;
	// lis r11,6688
	ctx.r11.s64 = 438304768;
loc_82B06F80:
	// ori r11,r11,75
	ctx.r11.u64 = ctx.r11.u64 | 75;
	// b 0x82b06fd4
	goto loc_82B06FD4;
loc_82B06F88:
	// lis r11,6184
	ctx.r11.s64 = 405274624;
	// b 0x82b06f80
	goto loc_82B06F80;
loc_82B06F90:
	// cmplwi cr6,r14,12
	ctx.cr6.compare<uint32_t>(ctx.r14.u32, 12, ctx.xer);
	// bne cr6,0x82b06fd8
	if (!ctx.cr6.eq) goto loc_82B06FD8;
	// rlwinm. r11,r22,0,29,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 0) & 0x4;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82b06fac
	if (ctx.cr0.eq) goto loc_82B06FAC;
	// lis r11,6688
	ctx.r11.s64 = 438304768;
loc_82B06FA4:
	// ori r11,r11,76
	ctx.r11.u64 = ctx.r11.u64 | 76;
	// b 0x82b06fd4
	goto loc_82B06FD4;
loc_82B06FAC:
	// lis r11,6184
	ctx.r11.s64 = 405274624;
	// b 0x82b06fa4
	goto loc_82B06FA4;
loc_82B06FB4:
	// lis r11,6688
	ctx.r11.s64 = 438304768;
	// ori r11,r11,84
	ctx.r11.u64 = ctx.r11.u64 | 84;
	// b 0x82b06fd4
	goto loc_82B06FD4;
loc_82B06FC0:
	// lis r11,6688
	ctx.r11.s64 = 438304768;
	// ori r11,r11,83
	ctx.r11.u64 = ctx.r11.u64 | 83;
	// b 0x82b06fd4
	goto loc_82B06FD4;
loc_82B06FCC:
	// lis r11,6688
	ctx.r11.s64 = 438304768;
	// ori r11,r11,82
	ctx.r11.u64 = ctx.r11.u64 | 82;
loc_82B06FD4:
	// stw r11,180(r1)
	PPC_STORE_U32(ctx.r1.u32 + 180, ctx.r11.u32);
loc_82B06FD8:
	// lwz r11,0(r18)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r18.u32 + 0);
	// addi r10,r1,320
	ctx.r10.s64 = ctx.r1.s64 + 320;
	// lwz r9,4(r18)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r18.u32 + 4);
	// addi r3,r1,344
	ctx.r3.s64 = ctx.r1.s64 + 344;
	// lwz r8,8(r18)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r18.u32 + 8);
	// addi r4,r1,320
	ctx.r4.s64 = ctx.r1.s64 + 320;
	// lwz r7,12(r18)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r18.u32 + 12);
	// li r5,24
	ctx.r5.s64 = 24;
	// stw r15,304(r1)
	PPC_STORE_U32(ctx.r1.u32 + 304, ctx.r15.u32);
	// stw r16,312(r1)
	PPC_STORE_U32(ctx.r1.u32 + 312, ctx.r16.u32);
	// stw r30,316(r1)
	PPC_STORE_U32(ctx.r1.u32 + 316, ctx.r30.u32);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// stw r9,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r9.u32);
	// stw r8,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r8.u32);
	// stw r7,12(r10)
	PPC_STORE_U32(ctx.r10.u32 + 12, ctx.r7.u32);
	// stw r30,336(r1)
	PPC_STORE_U32(ctx.r1.u32 + 336, ctx.r30.u32);
	// stw r20,340(r1)
	PPC_STORE_U32(ctx.r1.u32 + 340, ctx.r20.u32);
	// bl 0x82fa77c0
	ctx.lr = 0x82B07020;
	sub_82FA77C0(ctx, base);
	// stw r30,376(r1)
	PPC_STORE_U32(ctx.r1.u32 + 376, ctx.r30.u32);
	// stw r30,380(r1)
	PPC_STORE_U32(ctx.r1.u32 + 380, ctx.r30.u32);
	// cmplwi cr6,r27,6
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 6, ctx.xer);
	// stw r30,384(r1)
	PPC_STORE_U32(ctx.r1.u32 + 384, ctx.r30.u32);
	// bne cr6,0x82b07040
	if (!ctx.cr6.eq) goto loc_82B07040;
	// lis r11,6184
	ctx.r11.s64 = 405274624;
	// ori r11,r11,134
	ctx.r11.u64 = ctx.r11.u64 | 134;
	// b 0x82b07048
	goto loc_82B07048;
loc_82B07040:
	// lis r11,6690
	ctx.r11.s64 = 438435840;
	// ori r11,r11,43686
	ctx.r11.u64 = ctx.r11.u64 | 43686;
loc_82B07048:
	// stw r11,308(r1)
	PPC_STORE_U32(ctx.r1.u32 + 308, ctx.r11.u32);
	// rlwinm r11,r17,26,30,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r17.u32 | (ctx.r17.u64 << 32), 26) & 0x3;
	// mr r9,r30
	ctx.r9.u64 = ctx.r30.u64;
	// mr r31,r30
	ctx.r31.u64 = ctx.r30.u64;
	// rlwinm r29,r17,0,26,23
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r17.u32 | (ctx.r17.u64 << 32), 0) & 0xFFFFFFFFFFFFFF3F;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// beq cr6,0x82b07094
	if (ctx.cr6.eq) goto loc_82B07094;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82b07074
	if (!ctx.cr6.eq) goto loc_82B07074;
	// li r11,2
	ctx.r11.s64 = 2;
	// b 0x82b07084
	goto loc_82B07084;
loc_82B07074:
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// li r11,3
	ctx.r11.s64 = 3;
	// beq cr6,0x82b07084
	if (ctx.cr6.eq) goto loc_82B07084;
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
loc_82B07084:
	// rlwinm r10,r29,0,26,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 0) & 0xFFFFFFFFFFFFFF3F;
	// rlwinm r11,r11,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0xFFFFFFC0;
	// mr r9,r20
	ctx.r9.u64 = ctx.r20.u64;
	// or r29,r10,r11
	ctx.r29.u64 = ctx.r10.u64 | ctx.r11.u64;
loc_82B07094:
	// rlwinm r11,r17,14,18,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r17.u32 | (ctx.r17.u64 << 32), 14) & 0x3FFF;
	// rlwinm r10,r17,14,20,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r17.u32 | (ctx.r17.u64 << 32), 14) & 0xFFF;
	// cmplwi cr6,r27,6
	ctx.cr6.compare<uint32_t>(ctx.r27.u32, 6, ctx.xer);
	// bne cr6,0x82b070d0
	if (!ctx.cr6.eq) goto loc_82B070D0;
	// cmplwi cr6,r10,1546
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1546, ctx.xer);
	// beq cr6,0x82b07108
	if (ctx.cr6.eq) goto loc_82B07108;
	// rlwinm r10,r17,11,29,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r17.u32 | (ctx.r17.u64 << 32), 11) & 0x7;
	// clrlwi r11,r11,29
	ctx.r11.u64 = ctx.r11.u32 & 0x7;
	// stw r10,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r10.u32);
	// rlwinm r8,r17,8,29,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r17.u32 | (ctx.r17.u64 << 32), 8) & 0x7;
	// li r10,-1
	ctx.r10.s64 = -1;
	// stw r11,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r11.u32);
	// stw r8,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r8.u32);
	// stw r10,144(r1)
	PPC_STORE_U32(ctx.r1.u32 + 144, ctx.r10.u32);
	// b 0x82b070fc
	goto loc_82B070FC;
loc_82B070D0:
	// cmplwi cr6,r10,1672
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 1672, ctx.xer);
	// beq cr6,0x82b07108
	if (ctx.cr6.eq) goto loc_82B07108;
	// lis r10,-32233
	ctx.r10.s64 = -2112421888;
	// clrlwi r11,r11,29
	ctx.r11.u64 = ctx.r11.u32 & 0x7;
	// rlwinm r8,r17,11,29,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r17.u32 | (ctx.r17.u64 << 32), 11) & 0x7;
	// rlwinm r7,r17,8,29,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r17.u32 | (ctx.r17.u64 << 32), 8) & 0x7;
	// stw r11,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r11.u32);
	// stw r8,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r8.u32);
	// lfs f0,24436(r10)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r10.u32 + 24436);
	ctx.f0.f64 = double(temp.f32);
	// stw r7,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r7.u32);
	// stfs f0,144(r1)
	temp.f32 = float(ctx.f0.f64);
	PPC_STORE_U32(ctx.r1.u32 + 144, temp.u32);
loc_82B070FC:
	// rlwinm r11,r17,5,29,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r17.u32 | (ctx.r17.u64 << 32), 5) & 0x7;
	// mr r31,r20
	ctx.r31.u64 = ctx.r20.u64;
	// stw r11,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
loc_82B07108:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x82b07118
	if (!ctx.cr6.eq) goto loc_82B07118;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq cr6,0x82b07238
	if (ctx.cr6.eq) goto loc_82B07238;
loc_82B07118:
	// lis r11,-32229
	ctx.r11.s64 = -2112159744;
	// addi r11,r11,-25800
	ctx.r11.s64 = ctx.r11.s64 + -25800;
	// lbzx r11,r27,r11
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r27.u32 + ctx.r11.u32);
	// rlwinm r22,r11,29,3,31
	ctx.r22.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 29) & 0x1FFFFFFF;
	// rlwinm r26,r22,30,2,31
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r22.u32 | (ctx.r22.u64 << 32), 30) & 0x3FFFFFFF;
	// mullw r25,r22,r19
	ctx.r25.s64 = int64_t(ctx.r22.s32) * int64_t(ctx.r19.s32);
	// bl 0x82a831b0
	ctx.lr = 0x82B07134;
	sub_82A831B0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mullw r5,r25,r24
	ctx.r5.s64 = int64_t(ctx.r25.s32) * int64_t(ctx.r24.s32);
	// bl 0x82a81490
	ctx.lr = 0x82B07140;
	sub_82A81490(ctx, base);
	// mr. r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// beq 0x82b0742c
	if (ctx.cr0.eq) goto loc_82B0742C;
	// mr r9,r29
	ctx.r9.u64 = ctx.r29.u64;
	// mr r8,r24
	ctx.r8.u64 = ctx.r24.u64;
	// mr r7,r19
	ctx.r7.u64 = ctx.r19.u64;
	// mr r6,r16
	ctx.r6.u64 = ctx.r16.u64;
	// mr r5,r15
	ctx.r5.u64 = ctx.r15.u64;
	// mr r4,r25
	ctx.r4.u64 = ctx.r25.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82b06cf0
	ctx.lr = 0x82B07168;
	sub_82B06CF0(ctx, base);
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// beq cr6,0x82b07218
	if (ctx.cr6.eq) goto loc_82B07218;
	// lwz r11,620(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 620);
	// mr r23,r30
	ctx.r23.u64 = ctx.r30.u64;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82b07218
	if (ctx.cr6.eq) goto loc_82B07218;
	// rotlwi r21,r11,0
	ctx.r21.u64 = __builtin_rotateleft32(ctx.r11.u32, 0);
loc_82B07184:
	// cmplwi cr6,r19,0
	ctx.cr6.compare<uint32_t>(ctx.r19.u32, 0, ctx.xer);
	// beq cr6,0x82b0720c
	if (ctx.cr6.eq) goto loc_82B0720C;
	// mr r27,r23
	ctx.r27.u64 = ctx.r23.u64;
	// mr r24,r19
	ctx.r24.u64 = ctx.r19.u64;
loc_82B07194:
	// addi r31,r1,400
	ctx.r31.s64 = ctx.r1.s64 + 400;
	// addi r28,r1,128
	ctx.r28.s64 = ctx.r1.s64 + 128;
	// li r29,4
	ctx.r29.s64 = 4;
loc_82B071A0:
	// lwz r11,0(r28)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r28.u32 + 0);
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// cmplwi cr6,r11,4
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 4, ctx.xer);
	// bne cr6,0x82b071c0
	if (!ctx.cr6.eq) goto loc_82B071C0;
	// li r4,0
	ctx.r4.s64 = 0;
	// bl 0x82fa7cf0
	ctx.lr = 0x82B071BC;
	sub_82FA7CF0(ctx, base);
	// b 0x82b071e0
	goto loc_82B071E0;
loc_82B071C0:
	// cmplwi cr6,r11,5
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 5, ctx.xer);
	// bne cr6,0x82b071d0
	if (!ctx.cr6.eq) goto loc_82B071D0;
	// addi r4,r1,144
	ctx.r4.s64 = ctx.r1.s64 + 144;
	// b 0x82b071dc
	goto loc_82B071DC;
loc_82B071D0:
	// subfic r11,r11,3
	ctx.xer.ca = ctx.r11.u32 <= 3;
	ctx.r11.s64 = 3 - ctx.r11.s64;
	// mullw r11,r11,r26
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r26.s32);
	// add r4,r11,r27
	ctx.r4.u64 = ctx.r11.u64 + ctx.r27.u64;
loc_82B071DC:
	// bl 0x82fa77c0
	ctx.lr = 0x82B071E0;
	sub_82FA77C0(ctx, base);
loc_82B071E0:
	// addic. r29,r29,-1
	ctx.xer.ca = ctx.r29.u32 > 0;
	ctx.r29.s64 = ctx.r29.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r29.s32, 0, ctx.xer);
	// addi r28,r28,4
	ctx.r28.s64 = ctx.r28.s64 + 4;
	// add r31,r31,r26
	ctx.r31.u64 = ctx.r31.u64 + ctx.r26.u64;
	// bne 0x82b071a0
	if (!ctx.cr0.eq) goto loc_82B071A0;
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// addi r4,r1,400
	ctx.r4.s64 = ctx.r1.s64 + 400;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82fa77c0
	ctx.lr = 0x82B07200;
	sub_82FA77C0(ctx, base);
	// addic. r24,r24,-1
	ctx.xer.ca = ctx.r24.u32 > 0;
	ctx.r24.s64 = ctx.r24.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// add r27,r27,r22
	ctx.r27.u64 = ctx.r27.u64 + ctx.r22.u64;
	// bne 0x82b07194
	if (!ctx.cr0.eq) goto loc_82B07194;
loc_82B0720C:
	// addic. r21,r21,-1
	ctx.xer.ca = ctx.r21.u32 > 0;
	ctx.r21.s64 = ctx.r21.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r21.s32, 0, ctx.xer);
	// add r23,r23,r25
	ctx.r23.u64 = ctx.r23.u64 + ctx.r25.u64;
	// bne 0x82b07184
	if (!ctx.cr0.eq) goto loc_82B07184;
loc_82B07218:
	// stw r25,312(r1)
	PPC_STORE_U32(ctx.r1.u32 + 312, ctx.r25.u32);
	// lwz r21,628(r1)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r1.u32 + 628);
	// lwz r24,620(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 620);
	// lwz r25,596(r1)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r1.u32 + 596);
	// lwz r26,604(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + 604);
	// lwz r23,112(r1)
	ctx.r23.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// lwz r22,676(r1)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r1.u32 + 676);
	// stw r30,304(r1)
	PPC_STORE_U32(ctx.r1.u32 + 304, ctx.r30.u32);
loc_82B07238:
	// lis r10,-31961
	ctx.r10.s64 = -2094596096;
	// lis r9,-31975
	ctx.r9.s64 = -2095513600;
	// clrlwi r11,r22,31
	ctx.r11.u64 = ctx.r22.u32 & 0x1;
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// addi r5,r1,304
	ctx.r5.s64 = ctx.r1.s64 + 304;
	// stw r11,-25892(r10)
	PPC_STORE_U32(ctx.r10.u32 + -25892, ctx.r11.u32);
	// addi r4,r1,176
	ctx.r4.s64 = ctx.r1.s64 + 176;
	// stfs f31,5388(r9)
	ctx.fpscr.disableFlushMode();
	temp.f32 = float(ctx.f31.f64);
	PPC_STORE_U32(ctx.r9.u32 + 5388, temp.u32);
	// addi r3,r1,152
	ctx.r3.s64 = ctx.r1.s64 + 152;
	// bl 0x82bc63d0
	ctx.lr = 0x82B07260;
	sub_82BC63D0(ctx, base);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// cmplwi cr6,r30,0
	ctx.cr6.compare<uint32_t>(ctx.r30.u32, 0, ctx.xer);
	// beq cr6,0x82b0727c
	if (ctx.cr6.eq) goto loc_82B0727C;
	// bl 0x82a831b0
	ctx.lr = 0x82B07270;
	sub_82A831B0(ctx, base);
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// bl 0x82a81d88
	ctx.lr = 0x82B0727C;
	sub_82A81D88(ctx, base);
loc_82B0727C:
	// rlwinm r11,r21,26,30,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 26) & 0x3;
	// cmplwi cr6,r14,18
	ctx.cr6.compare<uint32_t>(ctx.r14.u32, 18, ctx.xer);
	// beq cr6,0x82b072d0
	if (ctx.cr6.eq) goto loc_82B072D0;
	// cmplwi cr6,r14,51
	ctx.cr6.compare<uint32_t>(ctx.r14.u32, 51, ctx.xer);
	// beq cr6,0x82b072d0
	if (ctx.cr6.eq) goto loc_82B072D0;
	// cmplwi cr6,r14,19
	ctx.cr6.compare<uint32_t>(ctx.r14.u32, 19, ctx.xer);
	// beq cr6,0x82b072d0
	if (ctx.cr6.eq) goto loc_82B072D0;
	// cmplwi cr6,r14,52
	ctx.cr6.compare<uint32_t>(ctx.r14.u32, 52, ctx.xer);
	// beq cr6,0x82b072d0
	if (ctx.cr6.eq) goto loc_82B072D0;
	// cmplwi cr6,r14,58
	ctx.cr6.compare<uint32_t>(ctx.r14.u32, 58, ctx.xer);
	// beq cr6,0x82b072d0
	if (ctx.cr6.eq) goto loc_82B072D0;
	// cmplwi cr6,r14,20
	ctx.cr6.compare<uint32_t>(ctx.r14.u32, 20, ctx.xer);
	// beq cr6,0x82b072d0
	if (ctx.cr6.eq) goto loc_82B072D0;
	// cmplwi cr6,r14,53
	ctx.cr6.compare<uint32_t>(ctx.r14.u32, 53, ctx.xer);
	// beq cr6,0x82b072d0
	if (ctx.cr6.eq) goto loc_82B072D0;
	// cmplwi cr6,r14,59
	ctx.cr6.compare<uint32_t>(ctx.r14.u32, 59, ctx.xer);
	// beq cr6,0x82b072d0
	if (ctx.cr6.eq) goto loc_82B072D0;
	// cmplwi cr6,r14,11
	ctx.cr6.compare<uint32_t>(ctx.r14.u32, 11, ctx.xer);
	// beq cr6,0x82b072d0
	if (ctx.cr6.eq) goto loc_82B072D0;
	// cmplwi cr6,r14,12
	ctx.cr6.compare<uint32_t>(ctx.r14.u32, 12, ctx.xer);
	// bne cr6,0x82b07320
	if (!ctx.cr6.eq) goto loc_82B07320;
loc_82B072D0:
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x82b07320
	if (ctx.cr6.eq) goto loc_82B07320;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82b072e8
	if (!ctx.cr6.eq) goto loc_82B072E8;
	// mr r11,r20
	ctx.r11.u64 = ctx.r20.u64;
	// b 0x82b072f8
	goto loc_82B072F8;
loc_82B072E8:
	// addi r11,r11,-2
	ctx.r11.s64 = ctx.r11.s64 + -2;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r11,r11,27,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
loc_82B072F8:
	// rlwinm r11,r11,6,0,25
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 6) & 0xFFFFFFC0;
	// rlwinm r10,r21,0,26,23
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r21.u32 | (ctx.r21.u64 << 32), 0) & 0xFFFFFFFFFFFFFF3F;
	// mr r8,r24
	ctx.r8.u64 = ctx.r24.u64;
	// or r9,r11,r10
	ctx.r9.u64 = ctx.r11.u64 | ctx.r10.u64;
	// mr r7,r19
	ctx.r7.u64 = ctx.r19.u64;
	// mr r6,r26
	ctx.r6.u64 = ctx.r26.u64;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82b06cf0
	ctx.lr = 0x82B07320;
	sub_82B06CF0(ctx, base);
loc_82B07320:
	// addi r3,r1,152
	ctx.r3.s64 = ctx.r1.s64 + 152;
	// bl 0x82bc2e60
	ctx.lr = 0x82B07328;
	sub_82BC2E60(ctx, base);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// b 0x82b07638
	goto loc_82B07638;
loc_82B07330:
	// lis r8,-32229
	ctx.r8.s64 = -2112159744;
	// lwz r6,0(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mullw r10,r11,r16
	ctx.r10.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r16.s32);
	// lwz r11,4(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// addi r8,r8,-25800
	ctx.r8.s64 = ctx.r8.s64 + -25800;
	// srawi r7,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r7.s64 = ctx.r11.s32 >> 2;
	// addze r7,r7
	temp.s64 = ctx.r7.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r7.u32;
	ctx.r7.s64 = temp.s64;
	// srawi r5,r6,2
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x3) != 0);
	ctx.r5.s64 = ctx.r6.s32 >> 2;
	// lbzx r4,r27,r8
	ctx.r4.u64 = PPC_LOAD_U8(ctx.r27.u32 + ctx.r8.u32);
	// mullw r7,r7,r26
	ctx.r7.s64 = int64_t(ctx.r7.s32) * int64_t(ctx.r26.s32);
	// lbzx r8,r14,r8
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r14.u32 + ctx.r8.u32);
	// addze r5,r5
	temp.s64 = ctx.r5.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r5.u32;
	ctx.r5.s64 = temp.s64;
	// rlwinm r4,r4,29,3,31
	ctx.r4.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 29) & 0x1FFFFFFF;
	// rotlwi r23,r8,1
	ctx.r23.u64 = __builtin_rotateleft32(ctx.r8.u32, 1);
	// srawi r3,r6,2
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x3) != 0);
	ctx.r3.s64 = ctx.r6.s32 >> 2;
	// mullw r9,r4,r9
	ctx.r9.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r9.s32);
	// mullw r8,r5,r23
	ctx.r8.s64 = int64_t(ctx.r5.s32) * int64_t(ctx.r23.s32);
	// addze r3,r3
	temp.s64 = ctx.r3.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r3.u32;
	ctx.r3.s64 = temp.s64;
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// add r9,r7,r8
	ctx.r9.u64 = ctx.r7.u64 + ctx.r8.u64;
	// rlwinm r5,r3,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r26,r30
	ctx.r26.u64 = ctx.r30.u64;
	// subf. r8,r5,r6
	ctx.r8.s64 = ctx.r6.s64 - ctx.r5.s64;
	ctx.cr0.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// add r22,r10,r15
	ctx.r22.u64 = ctx.r10.u64 + ctx.r15.u64;
	// mr r27,r16
	ctx.r27.u64 = ctx.r16.u64;
	// add r19,r9,r25
	ctx.r19.u64 = ctx.r9.u64 + ctx.r25.u64;
	// bne 0x82b073c4
	if (!ctx.cr0.eq) goto loc_82B073C4;
	// srawi r10,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r11.s32 >> 2;
	// addze r10,r10
	temp.s64 = ctx.r10.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r10.u32;
	ctx.r10.s64 = temp.s64;
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// subf. r10,r10,r11
	ctx.r10.s64 = ctx.r11.s64 - ctx.r10.s64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82b073c4
	if (!ctx.cr0.eq) goto loc_82B073C4;
	// clrlwi. r10,r29,30
	ctx.r10.u64 = ctx.r29.u32 & 0x3;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82b073c4
	if (!ctx.cr0.eq) goto loc_82B073C4;
	// clrlwi. r10,r28,30
	ctx.r10.u64 = ctx.r28.u32 & 0x3;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// mr r10,r30
	ctx.r10.u64 = ctx.r30.u64;
	// beq 0x82b073c8
	if (ctx.cr0.eq) goto loc_82B073C8;
loc_82B073C4:
	// li r10,1
	ctx.r10.s64 = 1;
loc_82B073C8:
	// lis r9,11554
	ctx.r9.s64 = 757202944;
	// clrlwi r25,r10,24
	ctx.r25.u64 = ctx.r10.u32 & 0xFF;
	// ori r24,r9,43685
	ctx.r24.u64 = ctx.r9.u64 | 43685;
	// mr r20,r30
	ctx.r20.u64 = ctx.r30.u64;
	// mr r21,r30
	ctx.r21.u64 = ctx.r30.u64;
	// cmpw cr6,r17,r24
	ctx.cr6.compare<int32_t>(ctx.r17.s32, ctx.r24.s32, ctx.xer);
	// bne cr6,0x82b073ec
	if (!ctx.cr6.eq) goto loc_82B073EC;
	// clrlwi. r10,r25,24
	ctx.r10.u64 = ctx.r25.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82b0755c
	if (ctx.cr0.eq) goto loc_82B0755C;
loc_82B073EC:
	// srawi r9,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r11.s32 >> 2;
	// add r10,r8,r29
	ctx.r10.u64 = ctx.r8.u64 + ctx.r29.u64;
	// addze r9,r9
	temp.s64 = ctx.r9.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r9.s64 = temp.s64;
	// addi r10,r10,3
	ctx.r10.s64 = ctx.r10.s64 + 3;
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r29,r10,0,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 0) & 0xFFFFFFFC;
	// subf r11,r9,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r9.s64;
	// lis r4,9351
	ctx.r4.s64 = 612827136;
	// add r11,r11,r28
	ctx.r11.u64 = ctx.r11.u64 + ctx.r28.u64;
	// addi r11,r11,3
	ctx.r11.s64 = ctx.r11.s64 + 3;
	// rlwinm r28,r11,0,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xFFFFFFFC;
	// mullw r11,r28,r29
	ctx.r11.s64 = int64_t(ctx.r28.s32) * int64_t(ctx.r29.s32);
	// rlwinm r3,r11,3,0,28
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 3) & 0xFFFFFFF8;
	// bl 0x82691410
	ctx.lr = 0x82B07424;
	sub_82691410(ctx, base);
	// mr. r26,r3
	ctx.r26.u64 = ctx.r3.u64;
	ctx.cr0.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// bne 0x82b07440
	if (!ctx.cr0.eq) goto loc_82B07440;
loc_82B0742C:
	// addi r3,r1,152
	ctx.r3.s64 = ctx.r1.s64 + 152;
	// bl 0x82bc2e60
	ctx.lr = 0x82B07434;
	sub_82BC2E60(ctx, base);
	// lis r3,-32761
	ctx.r3.s64 = -2147024896;
	// ori r3,r3,14
	ctx.r3.u64 = ctx.r3.u64 | 14;
	// b 0x82b07638
	goto loc_82B07638;
loc_82B07440:
	// lis r11,-32256
	ctx.r11.s64 = -2113929216;
	// clrlwi. r10,r25,24
	ctx.r10.u64 = ctx.r25.u32 & 0xFF;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// lfs f31,5184(r11)
	ctx.fpscr.disableFlushMode();
	temp.u32 = PPC_LOAD_U32(ctx.r11.u32 + 5184);
	ctx.f31.f64 = double(temp.f32);
	// mr r22,r26
	ctx.r22.u64 = ctx.r26.u64;
	// rlwinm r27,r29,3,0,28
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 3) & 0xFFFFFFF8;
	// beq 0x82b074f8
	if (ctx.cr0.eq) goto loc_82B074F8;
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// lwz r5,4(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// li r8,0
	ctx.r8.s64 = 0;
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// lwz r4,628(r1)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r1.u32 + 628);
	// stw r6,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r6.u32);
	// mr r7,r24
	ctx.r7.u64 = ctx.r24.u64;
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// lwz r10,604(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 604);
	// srawi r5,r5,2
	ctx.xer.ca = (ctx.r5.s32 < 0) & ((ctx.r5.u32 & 0x3) != 0);
	ctx.r5.s64 = ctx.r5.s32 >> 2;
	// lwz r9,596(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 596);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// fmr f1,f31
	ctx.f1.f64 = ctx.f31.f64;
	// addze r5,r5
	temp.s64 = ctx.r5.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r5.u32;
	ctx.r5.s64 = temp.s64;
	// stw r4,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r4.u32);
	// add r4,r11,r29
	ctx.r4.u64 = ctx.r11.u64 + ctx.r29.u64;
	// stw r11,128(r1)
	PPC_STORE_U32(ctx.r1.u32 + 128, ctx.r11.u32);
	// rlwinm r25,r5,2,0,29
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r30,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r30.u32);
	// stw r4,136(r1)
	PPC_STORE_U32(ctx.r1.u32 + 136, ctx.r4.u32);
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// add r11,r25,r28
	ctx.r11.u64 = ctx.r25.u64 + ctx.r28.u64;
	// stw r25,132(r1)
	PPC_STORE_U32(ctx.r1.u32 + 132, ctx.r25.u32);
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// stw r11,140(r1)
	PPC_STORE_U32(ctx.r1.u32 + 140, ctx.r11.u32);
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82af72f8
	ctx.lr = 0x82B074CC;
	sub_82AF72F8(ctx, base);
	// lwz r11,136(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 136);
	// lwz r10,612(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 612);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x82b074e4
	if (!ctx.cr6.gt) goto loc_82B074E4;
	// rotlwi r10,r10,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// subf r20,r10,r11
	ctx.r20.s64 = ctx.r11.s64 - ctx.r10.s64;
loc_82B074E4:
	// lwz r11,140(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 140);
	// lwz r10,620(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 620);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x82b074f8
	if (!ctx.cr6.gt) goto loc_82B074F8;
	// subf r21,r10,r11
	ctx.r21.s64 = ctx.r11.s64 - ctx.r10.s64;
loc_82B074F8:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// mr r10,r16
	ctx.r10.u64 = ctx.r16.u64;
	// lwz r6,4(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// mr r9,r15
	ctx.r9.u64 = ctx.r15.u64;
	// srawi r7,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r7.s64 = ctx.r11.s32 >> 2;
	// fmr f1,f31
	ctx.fpscr.disableFlushMode();
	ctx.f1.f64 = ctx.f31.f64;
	// addi r8,r1,112
	ctx.r8.s64 = ctx.r1.s64 + 112;
	// stw r30,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r30.u32);
	// addze r7,r7
	temp.s64 = ctx.r7.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r7.u32;
	ctx.r7.s64 = temp.s64;
	// stw r18,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r18.u32);
	// srawi r5,r6,2
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x3) != 0);
	ctx.r5.s64 = ctx.r6.s32 >> 2;
	// stw r17,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r17.u32);
	// rlwinm r7,r7,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// addze r5,r5
	temp.s64 = ctx.r5.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r5.u32;
	ctx.r5.s64 = temp.s64;
	// subf r11,r7,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r7.s64;
	// rlwinm r5,r5,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// stw r11,112(r1)
	PPC_STORE_U32(ctx.r1.u32 + 112, ctx.r11.u32);
	// mr r7,r24
	ctx.r7.u64 = ctx.r24.u64;
	// subf r11,r5,r6
	ctx.r11.s64 = ctx.r6.s64 - ctx.r5.s64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// stw r11,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r11.u32);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82af72f8
	ctx.lr = 0x82B0755C;
	sub_82AF72F8(ctx, base);
loc_82B0755C:
	// lwz r11,604(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 604);
	// cmplwi cr6,r14,49
	ctx.cr6.compare<uint32_t>(ctx.r14.u32, 49, ctx.xer);
	// twllei r23,0
	if (ctx.r23.u32 <= 0) __builtin_debugtrap();
	// divwu r8,r11,r23
	ctx.r8.u32 = ctx.r11.u32 / ctx.r23.u32;
	// beq cr6,0x82b0759c
	if (ctx.cr6.eq) goto loc_82B0759C;
	// cmplwi cr6,r14,60
	ctx.cr6.compare<uint32_t>(ctx.r14.u32, 60, ctx.xer);
	// bne cr6,0x82b075bc
	if (!ctx.cr6.eq) goto loc_82B075BC;
	// mr r10,r21
	ctx.r10.u64 = ctx.r21.u64;
	// mr r9,r20
	ctx.r9.u64 = ctx.r20.u64;
	// mr r7,r19
	ctx.r7.u64 = ctx.r19.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82bc2d40
	ctx.lr = 0x82B07598;
	sub_82BC2D40(ctx, base);
	// b 0x82b075bc
	goto loc_82B075BC;
loc_82B0759C:
	// mr r10,r21
	ctx.r10.u64 = ctx.r21.u64;
	// mr r9,r20
	ctx.r9.u64 = ctx.r20.u64;
	// mr r7,r19
	ctx.r7.u64 = ctx.r19.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r22
	ctx.r5.u64 = ctx.r22.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82bc25f0
	ctx.lr = 0x82B075BC;
	sub_82BC25F0(ctx, base);
loc_82B075BC:
	// cmplwi cr6,r26,0
	ctx.cr6.compare<uint32_t>(ctx.r26.u32, 0, ctx.xer);
	// beq cr6,0x82b075d0
	if (ctx.cr6.eq) goto loc_82B075D0;
	// lis r4,9351
	ctx.r4.s64 = 612827136;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82691460
	ctx.lr = 0x82B075D0;
	sub_82691460(ctx, base);
loc_82B075D0:
	// lwz r9,628(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 628);
	// srawi r11,r9,6
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3F) != 0);
	ctx.r11.s64 = ctx.r9.s32 >> 6;
	// clrlwi r11,r11,30
	ctx.r11.u64 = ctx.r11.u32 & 0x3;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x82b0762c
	if (ctx.cr6.eq) goto loc_82B0762C;
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// bne cr6,0x82b075f8
	if (!ctx.cr6.eq) goto loc_82B075F8;
	// li r11,1
	ctx.r11.s64 = 1;
	// rlwimi r9,r11,6,24,25
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r11.u32, 6) & 0xC0) | (ctx.r9.u64 & 0xFFFFFFFFFFFFFF3F);
	// b 0x82b07610
	goto loc_82B07610;
loc_82B075F8:
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bne cr6,0x82b07608
	if (!ctx.cr6.eq) goto loc_82B07608;
	// ori r9,r9,192
	ctx.r9.u64 = ctx.r9.u64 | 192;
	// b 0x82b07610
	goto loc_82B07610;
loc_82B07608:
	// li r11,1
	ctx.r11.s64 = 1;
	// rlwimi r9,r11,7,24,25
	ctx.r9.u64 = (__builtin_rotateleft32(ctx.r11.u32, 7) & 0xC0) | (ctx.r9.u64 & 0xFFFFFFFFFFFFFF3F);
loc_82B07610:
	// lwz r6,604(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + 604);
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// mr r7,r29
	ctx.r7.u64 = ctx.r29.u64;
	// mr r5,r19
	ctx.r5.u64 = ctx.r19.u64;
	// mr r4,r6
	ctx.r4.u64 = ctx.r6.u64;
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
	// bl 0x82b06cf0
	ctx.lr = 0x82B0762C;
	sub_82B06CF0(ctx, base);
loc_82B0762C:
	// addi r3,r1,152
	ctx.r3.s64 = ctx.r1.s64 + 152;
	// bl 0x82bc2e60
	ctx.lr = 0x82B07634;
	sub_82BC2E60(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
loc_82B07638:
	// addi r1,r1,576
	ctx.r1.s64 = ctx.r1.s64 + 576;
	// lfd f31,-160(r1)
	ctx.fpscr.disableFlushMode();
	ctx.f31.u64 = PPC_LOAD_U64(ctx.r1.u32 + -160);
	// b 0x82fa7690
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B07644"))) PPC_WEAK_FUNC(sub_82B07644);
PPC_FUNC_IMPL(__imp__sub_82B07644) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B07648"))) PPC_WEAK_FUNC(sub_82B07648);
PPC_FUNC_IMPL(__imp__sub_82B07648) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,232(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 232);
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// li r9,0
	ctx.r9.s64 = 0;
	// li r3,0
	ctx.r3.s64 = 0;
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// stw r4,4(r10)
	PPC_STORE_U32(ctx.r10.u32 + 4, ctx.r4.u32);
	// stw r9,8(r10)
	PPC_STORE_U32(ctx.r10.u32 + 8, ctx.r9.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B07668"))) PPC_WEAK_FUNC(sub_82B07668);
PPC_FUNC_IMPL(__imp__sub_82B07668) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7674
	ctx.lr = 0x82B07670;
	__savegprlr_27(ctx, base);
	// stwu r1,-128(r1)
	ea = -128 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r30,232(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 232);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bge cr6,0x82b07690
	if (!ctx.cr6.lt) goto loc_82B07690;
	// li r3,-11
	ctx.r3.s64 = -11;
	// b 0x82b07740
	goto loc_82B07740;
loc_82B07690:
	// li r10,0
	ctx.r10.s64 = 0;
	// cmpwi cr6,r11,40
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 40, ctx.xer);
	// stw r10,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r10.u32);
	// bge cr6,0x82b076a8
	if (!ctx.cr6.lt) goto loc_82B076A8;
	// li r3,-12
	ctx.r3.s64 = -12;
	// b 0x82b07740
	goto loc_82B07740;
loc_82B076A8:
	// li r5,40
	ctx.r5.s64 = 40;
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82fa77c0
	ctx.lr = 0x82B076B8;
	sub_82FA77C0(ctx, base);
	// addi r11,r31,8
	ctx.r11.s64 = ctx.r31.s64 + 8;
	// addi r10,r31,10
	ctx.r10.s64 = ctx.r31.s64 + 10;
	// addi r9,r31,12
	ctx.r9.s64 = ctx.r31.s64 + 12;
	// addi r8,r31,14
	ctx.r8.s64 = ctx.r31.s64 + 14;
	// addi r7,r31,16
	ctx.r7.s64 = ctx.r31.s64 + 16;
	// addi r6,r31,20
	ctx.r6.s64 = ctx.r31.s64 + 20;
	// addi r5,r31,24
	ctx.r5.s64 = ctx.r31.s64 + 24;
	// addi r4,r31,28
	ctx.r4.s64 = ctx.r31.s64 + 28;
	// addi r29,r31,32
	ctx.r29.s64 = ctx.r31.s64 + 32;
	// addi r28,r31,36
	ctx.r28.s64 = ctx.r31.s64 + 36;
	// li r3,0
	ctx.r3.s64 = 0;
	// lwz r27,8(r30)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addi r27,r27,40
	ctx.r27.s64 = ctx.r27.s64 + 40;
	// stw r27,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r27.u32);
	// lhbrx r11,0,r11
	ctx.r11.u16 = __builtin_bswap16(mem::loadVolatileU16<true>(base + ctx.r0.u32 + ctx.r11.u32));
	// sth r11,8(r31)
	PPC_STORE_U16(ctx.r31.u32 + 8, ctx.r11.u16);
	// lhbrx r11,0,r10
	ctx.r11.u16 = __builtin_bswap16(mem::loadVolatileU16<true>(base + ctx.r0.u32 + ctx.r10.u32));
	// sth r11,10(r31)
	PPC_STORE_U16(ctx.r31.u32 + 10, ctx.r11.u16);
	// lhbrx r11,0,r9
	ctx.r11.u16 = __builtin_bswap16(mem::loadVolatileU16<true>(base + ctx.r0.u32 + ctx.r9.u32));
	// sth r11,12(r31)
	PPC_STORE_U16(ctx.r31.u32 + 12, ctx.r11.u16);
	// lhbrx r11,0,r8
	ctx.r11.u16 = __builtin_bswap16(mem::loadVolatileU16<true>(base + ctx.r0.u32 + ctx.r8.u32));
	// sth r11,14(r31)
	PPC_STORE_U16(ctx.r31.u32 + 14, ctx.r11.u16);
	// lwbrx r11,0,r7
	ctx.r11.u64 = __builtin_bswap32(PPC_LOAD_U32(ctx.r7.u32));
	// stw r11,16(r31)
	PPC_STORE_U32(ctx.r31.u32 + 16, ctx.r11.u32);
	// lwbrx r11,0,r6
	ctx.r11.u64 = __builtin_bswap32(PPC_LOAD_U32(ctx.r6.u32));
	// stw r11,20(r31)
	PPC_STORE_U32(ctx.r31.u32 + 20, ctx.r11.u32);
	// lwbrx r11,0,r5
	ctx.r11.u64 = __builtin_bswap32(PPC_LOAD_U32(ctx.r5.u32));
	// stw r11,24(r31)
	PPC_STORE_U32(ctx.r31.u32 + 24, ctx.r11.u32);
	// lwbrx r11,0,r4
	ctx.r11.u64 = __builtin_bswap32(PPC_LOAD_U32(ctx.r4.u32));
	// stw r11,28(r31)
	PPC_STORE_U32(ctx.r31.u32 + 28, ctx.r11.u32);
	// lwbrx r11,0,r29
	ctx.r11.u64 = __builtin_bswap32(PPC_LOAD_U32(ctx.r29.u32));
	// stw r11,32(r31)
	PPC_STORE_U32(ctx.r31.u32 + 32, ctx.r11.u32);
	// lwbrx r11,0,r28
	ctx.r11.u64 = __builtin_bswap32(PPC_LOAD_U32(ctx.r28.u32));
	// stw r11,36(r31)
	PPC_STORE_U32(ctx.r31.u32 + 36, ctx.r11.u32);
loc_82B07740:
	// addi r1,r1,128
	ctx.r1.s64 = ctx.r1.s64 + 128;
	// b 0x82fa76c4
	__restgprlr_27(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B07748"))) PPC_WEAK_FUNC(sub_82B07748);
PPC_FUNC_IMPL(__imp__sub_82B07748) {
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
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lwz r31,232(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 232);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// cmpwi cr6,r10,40
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 40, ctx.xer);
	// bge cr6,0x82b0777c
	if (!ctx.cr6.lt) goto loc_82B0777C;
	// li r3,-11
	ctx.r3.s64 = -11;
	// b 0x82b077e8
	goto loc_82B077E8;
loc_82B0777C:
	// li r11,40
	ctx.r11.s64 = 40;
	// cmpwi cr6,r10,41
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 41, ctx.xer);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// bge cr6,0x82b07794
	if (!ctx.cr6.lt) goto loc_82B07794;
loc_82B0778C:
	// li r3,-12
	ctx.r3.s64 = -12;
	// b 0x82b077e8
	goto loc_82B077E8;
loc_82B07794:
	// lwz r9,0(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// li r11,41
	ctx.r11.s64 = 41;
	// lbz r8,40(r9)
	ctx.r8.u64 = PPC_LOAD_U8(ctx.r9.u32 + 40);
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// cmplwi cr6,r8,255
	ctx.cr6.compare<uint32_t>(ctx.r8.u32, 255, ctx.xer);
	// beq cr6,0x82b077b4
	if (ctx.cr6.eq) goto loc_82B077B4;
	// li r3,-16
	ctx.r3.s64 = -16;
	// b 0x82b077e8
	goto loc_82B077E8;
loc_82B077B4:
	// lwz r11,36(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// addi r8,r11,40
	ctx.r8.s64 = ctx.r11.s64 + 40;
	// cmpw cr6,r10,r8
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x82b0778c
	if (ctx.cr6.lt) goto loc_82B0778C;
	// addi r5,r11,-1
	ctx.r5.s64 = ctx.r11.s64 + -1;
	// addi r4,r9,41
	ctx.r4.s64 = ctx.r9.s64 + 41;
	// bl 0x82fa77c0
	ctx.lr = 0x82B077D0;
	sub_82FA77C0(ctx, base);
	// lwz r11,8(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// lwz r10,36(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// li r3,0
	ctx.r3.s64 = 0;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_82B077E8:
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

__attribute__((alias("__imp__sub_82B07800"))) PPC_WEAK_FUNC(sub_82B07800);
PPC_FUNC_IMPL(__imp__sub_82B07800) {
	PPC_FUNC_PROLOGUE();
	// lwz r11,232(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 232);
	// lwz r10,36(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// addi r10,r10,40
	ctx.r10.s64 = ctx.r10.s64 + 40;
	// lwz r9,4(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// ble cr6,0x82b07820
	if (!ctx.cr6.gt) goto loc_82B07820;
	// li r3,-11
	ctx.r3.s64 = -11;
	// blr 
	return;
loc_82B07820:
	// addi r8,r10,4
	ctx.r8.s64 = ctx.r10.s64 + 4;
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// cmpw cr6,r9,r8
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r8.s32, ctx.xer);
	// bge cr6,0x82b07838
	if (!ctx.cr6.lt) goto loc_82B07838;
	// li r3,-12
	ctx.r3.s64 = -12;
	// blr 
	return;
loc_82B07838:
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// li r3,0
	ctx.r3.s64 = 0;
	// add r8,r9,r10
	ctx.r8.u64 = ctx.r9.u64 + ctx.r10.u64;
	// lbzx r10,r9,r10
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r9.u32 + ctx.r10.u32);
	// stb r10,0(r4)
	PPC_STORE_U8(ctx.r4.u32 + 0, ctx.r10.u8);
	// lbz r10,1(r8)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r8.u32 + 1);
	// stb r10,1(r4)
	PPC_STORE_U8(ctx.r4.u32 + 1, ctx.r10.u8);
	// lbz r10,2(r8)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r8.u32 + 2);
	// stb r10,2(r4)
	PPC_STORE_U8(ctx.r4.u32 + 2, ctx.r10.u8);
	// lbz r10,3(r8)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r8.u32 + 3);
	// stb r10,3(r4)
	PPC_STORE_U8(ctx.r4.u32 + 3, ctx.r10.u8);
	// lwz r10,8(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 8);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// stw r10,8(r11)
	PPC_STORE_U32(ctx.r11.u32 + 8, ctx.r10.u32);
	// lwbrx r11,0,r4
	ctx.r11.u64 = __builtin_bswap32(PPC_LOAD_U32(ctx.r4.u32));
	// stw r11,0(r4)
	PPC_STORE_U32(ctx.r4.u32 + 0, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B0787C"))) PPC_WEAK_FUNC(sub_82B0787C);
PPC_FUNC_IMPL(__imp__sub_82B0787C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B07880"))) PPC_WEAK_FUNC(sub_82B07880);
PPC_FUNC_IMPL(__imp__sub_82B07880) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7648
	ctx.lr = 0x82B07888;
	__savegprlr_16(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r29,232(r3)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r3.u32 + 232);
	// addi r11,r11,10
	ctx.r11.s64 = ctx.r11.s64 + 10;
	// lwz r9,36(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,4(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 4);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// cmpw cr6,r10,r11
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x82b078bc
	if (!ctx.cr6.gt) goto loc_82B078BC;
	// li r3,-11
	ctx.r3.s64 = -11;
	// b 0x82b079f4
	goto loc_82B079F4;
loc_82B078BC:
	// addi r9,r10,68
	ctx.r9.s64 = ctx.r10.s64 + 68;
	// stw r10,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r10.u32);
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x82b078d4
	if (!ctx.cr6.lt) goto loc_82B078D4;
	// li r3,-12
	ctx.r3.s64 = -12;
	// b 0x82b079f4
	goto loc_82B079F4;
loc_82B078D4:
	// lwz r11,0(r29)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// addi r30,r31,40
	ctx.r30.s64 = ctx.r31.s64 + 40;
	// li r5,68
	ctx.r5.s64 = 68;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// mr r3,r30
	ctx.r3.u64 = ctx.r30.u64;
	// bl 0x82fa77c0
	ctx.lr = 0x82B078EC;
	sub_82FA77C0(ctx, base);
	// addi r11,r31,44
	ctx.r11.s64 = ctx.r31.s64 + 44;
	// addi r10,r31,48
	ctx.r10.s64 = ctx.r31.s64 + 48;
	// addi r9,r31,52
	ctx.r9.s64 = ctx.r31.s64 + 52;
	// addi r8,r31,56
	ctx.r8.s64 = ctx.r31.s64 + 56;
	// addi r7,r31,60
	ctx.r7.s64 = ctx.r31.s64 + 60;
	// addi r6,r31,62
	ctx.r6.s64 = ctx.r31.s64 + 62;
	// addi r5,r31,64
	ctx.r5.s64 = ctx.r31.s64 + 64;
	// addi r4,r31,68
	ctx.r4.s64 = ctx.r31.s64 + 68;
	// addi r28,r31,72
	ctx.r28.s64 = ctx.r31.s64 + 72;
	// addi r27,r31,76
	ctx.r27.s64 = ctx.r31.s64 + 76;
	// addi r26,r31,80
	ctx.r26.s64 = ctx.r31.s64 + 80;
	// addi r25,r31,84
	ctx.r25.s64 = ctx.r31.s64 + 84;
	// addi r24,r31,88
	ctx.r24.s64 = ctx.r31.s64 + 88;
	// addi r23,r31,90
	ctx.r23.s64 = ctx.r31.s64 + 90;
	// addi r22,r31,92
	ctx.r22.s64 = ctx.r31.s64 + 92;
	// addi r21,r31,94
	ctx.r21.s64 = ctx.r31.s64 + 94;
	// addi r20,r31,96
	ctx.r20.s64 = ctx.r31.s64 + 96;
	// addi r19,r31,98
	ctx.r19.s64 = ctx.r31.s64 + 98;
	// addi r18,r31,100
	ctx.r18.s64 = ctx.r31.s64 + 100;
	// addi r17,r31,104
	ctx.r17.s64 = ctx.r31.s64 + 104;
	// lwz r16,8(r29)
	ctx.r16.u64 = PPC_LOAD_U32(ctx.r29.u32 + 8);
	// li r3,0
	ctx.r3.s64 = 0;
	// addi r16,r16,68
	ctx.r16.s64 = ctx.r16.s64 + 68;
	// stw r16,8(r29)
	PPC_STORE_U32(ctx.r29.u32 + 8, ctx.r16.u32);
	// lwbrx r30,0,r30
	ctx.r30.u64 = __builtin_bswap32(PPC_LOAD_U32(ctx.r30.u32));
	// stw r30,40(r31)
	PPC_STORE_U32(ctx.r31.u32 + 40, ctx.r30.u32);
	// lwbrx r11,0,r11
	ctx.r11.u64 = __builtin_bswap32(PPC_LOAD_U32(ctx.r11.u32));
	// stw r11,44(r31)
	PPC_STORE_U32(ctx.r31.u32 + 44, ctx.r11.u32);
	// lwbrx r11,0,r10
	ctx.r11.u64 = __builtin_bswap32(PPC_LOAD_U32(ctx.r10.u32));
	// stw r11,48(r31)
	PPC_STORE_U32(ctx.r31.u32 + 48, ctx.r11.u32);
	// lwbrx r11,0,r9
	ctx.r11.u64 = __builtin_bswap32(PPC_LOAD_U32(ctx.r9.u32));
	// stw r11,52(r31)
	PPC_STORE_U32(ctx.r31.u32 + 52, ctx.r11.u32);
	// lwbrx r11,0,r8
	ctx.r11.u64 = __builtin_bswap32(PPC_LOAD_U32(ctx.r8.u32));
	// stw r11,56(r31)
	PPC_STORE_U32(ctx.r31.u32 + 56, ctx.r11.u32);
	// lhbrx r11,0,r7
	ctx.r11.u16 = __builtin_bswap16(mem::loadVolatileU16<true>(base + ctx.r0.u32 + ctx.r7.u32));
	// sth r11,60(r31)
	PPC_STORE_U16(ctx.r31.u32 + 60, ctx.r11.u16);
	// lhbrx r11,0,r6
	ctx.r11.u16 = __builtin_bswap16(mem::loadVolatileU16<true>(base + ctx.r0.u32 + ctx.r6.u32));
	// sth r11,62(r31)
	PPC_STORE_U16(ctx.r31.u32 + 62, ctx.r11.u16);
	// lwbrx r11,0,r5
	ctx.r11.u64 = __builtin_bswap32(PPC_LOAD_U32(ctx.r5.u32));
	// stw r11,64(r31)
	PPC_STORE_U32(ctx.r31.u32 + 64, ctx.r11.u32);
	// lwbrx r11,0,r4
	ctx.r11.u64 = __builtin_bswap32(PPC_LOAD_U32(ctx.r4.u32));
	// stw r11,68(r31)
	PPC_STORE_U32(ctx.r31.u32 + 68, ctx.r11.u32);
	// lwbrx r11,0,r28
	ctx.r11.u64 = __builtin_bswap32(PPC_LOAD_U32(ctx.r28.u32));
	// stw r11,72(r31)
	PPC_STORE_U32(ctx.r31.u32 + 72, ctx.r11.u32);
	// lwbrx r11,0,r27
	ctx.r11.u64 = __builtin_bswap32(PPC_LOAD_U32(ctx.r27.u32));
	// stw r11,76(r31)
	PPC_STORE_U32(ctx.r31.u32 + 76, ctx.r11.u32);
	// lwbrx r11,0,r26
	ctx.r11.u64 = __builtin_bswap32(PPC_LOAD_U32(ctx.r26.u32));
	// stw r11,80(r31)
	PPC_STORE_U32(ctx.r31.u32 + 80, ctx.r11.u32);
	// lwbrx r11,0,r25
	ctx.r11.u64 = __builtin_bswap32(PPC_LOAD_U32(ctx.r25.u32));
	// stw r11,84(r31)
	PPC_STORE_U32(ctx.r31.u32 + 84, ctx.r11.u32);
	// lhbrx r11,0,r24
	ctx.r11.u16 = __builtin_bswap16(mem::loadVolatileU16<true>(base + ctx.r0.u32 + ctx.r24.u32));
	// sth r11,88(r31)
	PPC_STORE_U16(ctx.r31.u32 + 88, ctx.r11.u16);
	// lhbrx r11,0,r23
	ctx.r11.u16 = __builtin_bswap16(mem::loadVolatileU16<true>(base + ctx.r0.u32 + ctx.r23.u32));
	// sth r11,90(r31)
	PPC_STORE_U16(ctx.r31.u32 + 90, ctx.r11.u16);
	// lhbrx r11,0,r22
	ctx.r11.u16 = __builtin_bswap16(mem::loadVolatileU16<true>(base + ctx.r0.u32 + ctx.r22.u32));
	// sth r11,92(r31)
	PPC_STORE_U16(ctx.r31.u32 + 92, ctx.r11.u16);
	// lhbrx r11,0,r21
	ctx.r11.u16 = __builtin_bswap16(mem::loadVolatileU16<true>(base + ctx.r0.u32 + ctx.r21.u32));
	// sth r11,94(r31)
	PPC_STORE_U16(ctx.r31.u32 + 94, ctx.r11.u16);
	// lhbrx r11,0,r20
	ctx.r11.u16 = __builtin_bswap16(mem::loadVolatileU16<true>(base + ctx.r0.u32 + ctx.r20.u32));
	// sth r11,96(r31)
	PPC_STORE_U16(ctx.r31.u32 + 96, ctx.r11.u16);
	// lhbrx r11,0,r19
	ctx.r11.u16 = __builtin_bswap16(mem::loadVolatileU16<true>(base + ctx.r0.u32 + ctx.r19.u32));
	// sth r11,98(r31)
	PPC_STORE_U16(ctx.r31.u32 + 98, ctx.r11.u16);
	// lwbrx r11,0,r18
	ctx.r11.u64 = __builtin_bswap32(PPC_LOAD_U32(ctx.r18.u32));
	// stw r11,100(r31)
	PPC_STORE_U32(ctx.r31.u32 + 100, ctx.r11.u32);
	// lwbrx r11,0,r17
	ctx.r11.u64 = __builtin_bswap32(PPC_LOAD_U32(ctx.r17.u32));
	// stw r11,104(r31)
	PPC_STORE_U32(ctx.r31.u32 + 104, ctx.r11.u32);
loc_82B079F4:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x82fa7698
	__restgprlr_16(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B079FC"))) PPC_WEAK_FUNC(sub_82B079FC);
PPC_FUNC_IMPL(__imp__sub_82B079FC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B07A00"))) PPC_WEAK_FUNC(sub_82B07A00);
PPC_FUNC_IMPL(__imp__sub_82B07A00) {
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
	// mr r3,r4
	ctx.r3.u64 = ctx.r4.u64;
	// lwz r11,20(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 20);
	// lwz r31,232(r30)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + 232);
	// addi r11,r11,27
	ctx.r11.s64 = ctx.r11.s64 + 27;
	// lwz r10,36(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 36);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,4(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// ble cr6,0x82b07a48
	if (!ctx.cr6.gt) goto loc_82B07A48;
	// li r3,-11
	ctx.r3.s64 = -11;
	// b 0x82b07ab4
	goto loc_82B07AB4;
loc_82B07A48:
	// addi r10,r11,1
	ctx.r10.s64 = ctx.r11.s64 + 1;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// cmpw cr6,r9,r10
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x82b07a60
	if (!ctx.cr6.lt) goto loc_82B07A60;
loc_82B07A58:
	// li r3,-12
	ctx.r3.s64 = -12;
	// b 0x82b07ab4
	goto loc_82B07AB4;
loc_82B07A60:
	// lwz r8,0(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lbzx r11,r8,r11
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r8.u32 + ctx.r11.u32);
	// stw r10,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r10.u32);
	// cmplwi cr6,r11,255
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 255, ctx.xer);
	// beq cr6,0x82b07a7c
	if (ctx.cr6.eq) goto loc_82B07A7C;
	// li r3,-16
	ctx.r3.s64 = -16;
	// b 0x82b07ab4
	goto loc_82B07AB4;
loc_82B07A7C:
	// lwz r11,104(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 104);
	// add r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 + ctx.r11.u64;
	// addi r7,r7,-1
	ctx.r7.s64 = ctx.r7.s64 + -1;
	// cmpw cr6,r9,r7
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r7.s32, ctx.xer);
	// blt cr6,0x82b07a58
	if (ctx.cr6.lt) goto loc_82B07A58;
	// addi r5,r11,-1
	ctx.r5.s64 = ctx.r11.s64 + -1;
	// add r4,r10,r8
	ctx.r4.u64 = ctx.r10.u64 + ctx.r8.u64;
	// bl 0x82fa77c0
	ctx.lr = 0x82B07A9C;
	sub_82FA77C0(ctx, base);
	// lwz r11,104(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 104);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r3,0
	ctx.r3.s64 = 0;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
loc_82B07AB4:
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

__attribute__((alias("__imp__sub_82B07ACC"))) PPC_WEAK_FUNC(sub_82B07ACC);
PPC_FUNC_IMPL(__imp__sub_82B07ACC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B07AD0"))) PPC_WEAK_FUNC(sub_82B07AD0);
PPC_FUNC_IMPL(__imp__sub_82B07AD0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x82B07AD8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 20);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// lwz r30,232(r3)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r3.u32 + 232);
	// addi r11,r11,27
	ctx.r11.s64 = ctx.r11.s64 + 27;
	// lwz r10,104(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 104);
	// lwz r9,36(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r11,r10
	ctx.r10.u64 = ctx.r11.u64 + ctx.r10.u64;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// add r29,r10,r9
	ctx.r29.u64 = ctx.r10.u64 + ctx.r9.u64;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// ble cr6,0x82b07b14
	if (!ctx.cr6.gt) goto loc_82B07B14;
	// li r3,-11
	ctx.r3.s64 = -11;
	// b 0x82b07bd4
	goto loc_82B07BD4;
loc_82B07B14:
	// stw r29,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r29.u32);
	// lwz r10,48(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// rlwinm r5,r10,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r10,r5,r29
	ctx.r10.u64 = ctx.r5.u64 + ctx.r29.u64;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// bge cr6,0x82b07b34
	if (!ctx.cr6.lt) goto loc_82B07B34;
	// li r3,-12
	ctx.r3.s64 = -12;
	// b 0x82b07bd4
	goto loc_82B07BD4;
loc_82B07B34:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r3,112(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// add r4,r11,r29
	ctx.r4.u64 = ctx.r11.u64 + ctx.r29.u64;
	// bl 0x82fa77c0
	ctx.lr = 0x82B07B44;
	sub_82FA77C0(ctx, base);
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// lwz r9,8(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// li r10,0
	ctx.r10.s64 = 0;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 + ctx.r9.u64;
	// stw r11,8(r30)
	PPC_STORE_U32(ctx.r30.u32 + 8, ctx.r11.u32);
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// cmplwi cr6,r11,0
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq cr6,0x82b07b90
	if (ctx.cr6.eq) goto loc_82B07B90;
	// li r9,0
	ctx.r9.s64 = 0;
loc_82B07B6C:
	// lwz r11,112(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// add r11,r9,r11
	ctx.r11.u64 = ctx.r9.u64 + ctx.r11.u64;
	// addi r9,r9,4
	ctx.r9.s64 = ctx.r9.s64 + 4;
	// lwbrx r8,0,r11
	ctx.r8.u64 = __builtin_bswap32(PPC_LOAD_U32(ctx.r11.u32));
	// stw r8,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r8.u32);
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// cmplw cr6,r10,r11
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, ctx.r11.u32, ctx.xer);
	// blt cr6,0x82b07b6c
	if (ctx.cr6.lt) goto loc_82B07B6C;
loc_82B07B90:
	// rlwinm r9,r11,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// li r10,0
	ctx.r10.s64 = 0;
	// add r9,r9,r29
	ctx.r9.u64 = ctx.r9.u64 + ctx.r29.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// ble cr6,0x82b07bd0
	if (!ctx.cr6.gt) goto loc_82B07BD0;
	// li r11,0
	ctx.r11.s64 = 0;
loc_82B07BA8:
	// lwz r8,116(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 116);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// stwx r9,r11,r8
	PPC_STORE_U32(ctx.r11.u32 + ctx.r8.u32, ctx.r9.u32);
	// lwz r8,112(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 112);
	// lwz r7,48(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// cmpw cr6,r10,r7
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r7.s32, ctx.xer);
	// lwzx r8,r11,r8
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r8.u32);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// add r9,r8,r9
	ctx.r9.u64 = ctx.r8.u64 + ctx.r9.u64;
	// blt cr6,0x82b07ba8
	if (ctx.cr6.lt) goto loc_82B07BA8;
loc_82B07BD0:
	// li r3,0
	ctx.r3.s64 = 0;
loc_82B07BD4:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B07BDC"))) PPC_WEAK_FUNC(sub_82B07BDC);
PPC_FUNC_IMPL(__imp__sub_82B07BDC) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B07BE0"))) PPC_WEAK_FUNC(sub_82B07BE0);
PPC_FUNC_IMPL(__imp__sub_82B07BE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa767c
	ctx.lr = 0x82B07BE8;
	__savegprlr_29(ctx, base);
	// stwu r1,-112(r1)
	ea = -112 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// blt cr6,0x82b07c74
	if (ctx.cr6.lt) goto loc_82B07C74;
	// lwz r11,48(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 48);
	// cmplw cr6,r4,r11
	ctx.cr6.compare<uint32_t>(ctx.r4.u32, ctx.r11.u32, ctx.xer);
	// bge cr6,0x82b07c74
	if (!ctx.cr6.lt) goto loc_82B07C74;
	// lwz r31,232(r3)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r3.u32 + 232);
	// rlwinm r29,r4,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,116(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 116);
	// lwz r10,4(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 4);
	// lwzx r11,r11,r29
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// ble cr6,0x82b07c28
	if (!ctx.cr6.gt) goto loc_82B07C28;
	// li r3,-11
	ctx.r3.s64 = -11;
	// b 0x82b07c78
	goto loc_82B07C78;
loc_82B07C28:
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// lwz r9,112(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 112);
	// lwzx r5,r9,r29
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r29.u32);
	// add r9,r5,r11
	ctx.r9.u64 = ctx.r5.u64 + ctx.r11.u64;
	// cmpw cr6,r10,r9
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r9.s32, ctx.xer);
	// bge cr6,0x82b07c48
	if (!ctx.cr6.lt) goto loc_82B07C48;
	// li r3,-12
	ctx.r3.s64 = -12;
	// b 0x82b07c78
	goto loc_82B07C78;
loc_82B07C48:
	// lwz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// lwz r3,108(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 108);
	// add r4,r10,r11
	ctx.r4.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x82fa77c0
	ctx.lr = 0x82B07C58;
	sub_82FA77C0(ctx, base);
	// lwz r11,112(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 112);
	// lwz r10,8(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 8);
	// li r3,0
	ctx.r3.s64 = 0;
	// lwzx r11,r11,r29
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r29.u32);
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// stw r11,8(r31)
	PPC_STORE_U32(ctx.r31.u32 + 8, ctx.r11.u32);
	// b 0x82b07c78
	goto loc_82B07C78;
loc_82B07C74:
	// li r3,-18
	ctx.r3.s64 = -18;
loc_82B07C78:
	// addi r1,r1,112
	ctx.r1.s64 = ctx.r1.s64 + 112;
	// b 0x82fa76cc
	__restgprlr_29(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B07C80"))) PPC_WEAK_FUNC(sub_82B07C80);
PPC_FUNC_IMPL(__imp__sub_82B07C80) {
	PPC_FUNC_PROLOGUE();
	// lwz r10,8(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 8);
	// li r11,0
	ctx.r11.s64 = 0;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// stw r11,12(r3)
	PPC_STORE_U32(ctx.r3.u32 + 12, ctx.r11.u32);
	// srawi r10,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 2;
	// stw r10,8(r3)
	PPC_STORE_U32(ctx.r3.u32 + 8, ctx.r10.u32);
	// lwz r9,8(r4)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + 8);
	// lwz r10,4(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 4);
	// mulli r10,r10,3
	ctx.r10.s64 = ctx.r10.s64 * 3;
	// addi r10,r10,2
	ctx.r10.s64 = ctx.r10.s64 + 2;
	// stw r11,12(r4)
	PPC_STORE_U32(ctx.r4.u32 + 12, ctx.r11.u32);
	// addi r9,r9,2
	ctx.r9.s64 = ctx.r9.s64 + 2;
	// srawi r10,r10,2
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 2;
	// srawi r9,r9,2
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 2;
	// stw r10,4(r4)
	PPC_STORE_U32(ctx.r4.u32 + 4, ctx.r10.u32);
	// stw r9,8(r4)
	PPC_STORE_U32(ctx.r4.u32 + 8, ctx.r9.u32);
	// lwz r9,4(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 4);
	// lwz r10,8(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 8);
	// lwz r8,0(r5)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r5.u32 + 0);
	// addi r8,r8,2
	ctx.r8.s64 = ctx.r8.s64 + 2;
	// addi r9,r9,2
	ctx.r9.s64 = ctx.r9.s64 + 2;
	// stw r11,12(r5)
	PPC_STORE_U32(ctx.r5.u32 + 12, ctx.r11.u32);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// srawi r8,r8,2
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r8.s32 >> 2;
	// srawi r9,r9,2
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 2;
	// srawi r10,r10,3
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x7) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 3;
	// stw r8,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r8.u32);
	// stw r9,4(r5)
	PPC_STORE_U32(ctx.r5.u32 + 4, ctx.r9.u32);
	// stw r10,8(r5)
	PPC_STORE_U32(ctx.r5.u32 + 8, ctx.r10.u32);
	// stw r11,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r11.u32);
	// stw r11,4(r6)
	PPC_STORE_U32(ctx.r6.u32 + 4, ctx.r11.u32);
	// stw r11,8(r6)
	PPC_STORE_U32(ctx.r6.u32 + 8, ctx.r11.u32);
	// stw r11,12(r6)
	PPC_STORE_U32(ctx.r6.u32 + 12, ctx.r11.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B07D08"))) PPC_WEAK_FUNC(sub_82B07D08);
PPC_FUNC_IMPL(__imp__sub_82B07D08) {
	PPC_FUNC_PROLOGUE();
	// li r10,0
	ctx.r10.s64 = 0;
	// li r8,1
	ctx.r8.s64 = 1;
	// stw r10,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r10.u32);
	// slw r9,r8,r4
	ctx.r9.u64 = ctx.r4.u8 & 0x20 ? 0 : (ctx.r8.u32 << (ctx.r4.u8 & 0x3F));
	// lhz r11,52(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 52);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmpw cr6,r4,r11
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x82b07d38
	if (!ctx.cr6.eq) goto loc_82B07D38;
	// lhz r11,22(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 22);
	// rlwinm. r11,r11,0,19,19
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x1000;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82b07d38
	if (ctx.cr0.eq) goto loc_82B07D38;
	// stw r8,0(r5)
	PPC_STORE_U32(ctx.r5.u32 + 0, ctx.r8.u32);
loc_82B07D38:
	// stw r10,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r10.u32);
	// lhz r11,20(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 20);
	// and. r11,r11,r9
	ctx.r11.u64 = ctx.r11.u64 & ctx.r9.u64;
	ctx.cr0.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq 0x82b07d4c
	if (ctx.cr0.eq) goto loc_82B07D4C;
	// stw r8,0(r7)
	PPC_STORE_U32(ctx.r7.u32 + 0, ctx.r8.u32);
loc_82B07D4C:
	// stw r10,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r10.u32);
	// lhz r11,52(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 52);
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// bltlr cr6
	if (ctx.cr6.lt) return;
	// lhz r11,22(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 22);
	// rlwinm r11,r11,28,28,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xF;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// beq cr6,0x82b07d74
	if (ctx.cr6.eq) goto loc_82B07D74;
	// cmplwi cr6,r11,2
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 2, ctx.xer);
	// bne cr6,0x82b07d88
	if (!ctx.cr6.eq) goto loc_82B07D88;
loc_82B07D74:
	// cmpwi cr6,r4,1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 1, ctx.xer);
	// blt cr6,0x82b07d88
	if (ctx.cr6.lt) goto loc_82B07D88;
	// cmpwi cr6,r4,2
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 2, ctx.xer);
	// bgt cr6,0x82b07d88
	if (ctx.cr6.gt) goto loc_82B07D88;
	// stw r8,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r8.u32);
loc_82B07D88:
	// lhz r11,22(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 22);
	// rlwinm r11,r11,0,24,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xF0;
	// cmplwi cr6,r11,48
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 48, ctx.xer);
	// bnelr cr6
	if (!ctx.cr6.eq) return;
	// cmpwi cr6,r4,1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 1, ctx.xer);
	// bltlr cr6
	if (ctx.cr6.lt) return;
	// cmpwi cr6,r4,3
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 3, ctx.xer);
	// bgtlr cr6
	if (ctx.cr6.gt) return;
	// stw r8,0(r6)
	PPC_STORE_U32(ctx.r6.u32 + 0, ctx.r8.u32);
	// blr 
	return;
}

__attribute__((alias("__imp__sub_82B07DB0"))) PPC_WEAK_FUNC(sub_82B07DB0);
PPC_FUNC_IMPL(__imp__sub_82B07DB0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7654
	ctx.lr = 0x82B07DB8;
	__savegprlr_19(ctx, base);
	// srawi r11,r6,4
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r6.s32 >> 4;
	// mr r31,r4
	ctx.r31.u64 = ctx.r4.u64;
	// addze r27,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r27.s64 = temp.s64;
	// li r30,0
	ctx.r30.s64 = 0;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// ble cr6,0x82b07e18
	if (!ctx.cr6.gt) goto loc_82B07E18;
	// addi r11,r6,-1
	ctx.r11.s64 = ctx.r6.s64 + -1;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
	// rlwinm r11,r11,28,4,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFF;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_82B07DE4:
	// lwz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// stw r11,0(r10)
	PPC_STORE_U32(ctx.r10.u32 + 0, ctx.r11.u32);
	// beq cr6,0x82b07e0c
	if (ctx.cr6.eq) goto loc_82B07E0C;
	// addi r11,r11,2
	ctx.r11.s64 = ctx.r11.s64 + 2;
	// srawi r11,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 2;
	// srawi r29,r30,2
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0x3) != 0);
	ctx.r29.s64 = ctx.r30.s32 >> 2;
	// rlwinm r29,r29,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r11,r29,r5
	PPC_STORE_U32(ctx.r29.u32 + ctx.r5.u32, ctx.r11.u32);
loc_82B07E0C:
	// addi r30,r30,16
	ctx.r30.s64 = ctx.r30.s64 + 16;
	// addi r10,r10,64
	ctx.r10.s64 = ctx.r10.s64 + 64;
	// bdnz 0x82b07de4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82B07DE4;
loc_82B07E18:
	// rlwinm r10,r6,4,0,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 4) & 0xFFFFFFF0;
	// rlwinm r11,r6,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r29,r6,5,0,26
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 5) & 0xFFFFFFE0;
	// mulli r28,r6,52
	ctx.r28.s64 = ctx.r6.s64 * 52;
	// mr r22,r31
	ctx.r22.u64 = ctx.r31.u64;
	// add r31,r10,r4
	ctx.r31.u64 = ctx.r10.u64 + ctx.r4.u64;
	// add r30,r11,r4
	ctx.r30.u64 = ctx.r11.u64 + ctx.r4.u64;
	// add r10,r29,r4
	ctx.r10.u64 = ctx.r29.u64 + ctx.r4.u64;
	// add r4,r28,r4
	ctx.r4.u64 = ctx.r28.u64 + ctx.r4.u64;
	// li r26,0
	ctx.r26.s64 = 0;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// ble cr6,0x82b07fb4
	if (!ctx.cr6.gt) goto loc_82B07FB4;
	// lis r11,-32242
	ctx.r11.s64 = -2113011712;
	// lis r29,-32242
	ctx.r29.s64 = -2113011712;
	// rlwinm r21,r27,2,0,29
	ctx.r21.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r24,r11,-15808
	ctx.r24.s64 = ctx.r11.s64 + -15808;
	// addi r23,r29,-15824
	ctx.r23.s64 = ctx.r29.s64 + -15824;
loc_82B07E5C:
	// li r29,15
	ctx.r29.s64 = 15;
	// li r11,0
	ctx.r11.s64 = 0;
	// mr r25,r22
	ctx.r25.u64 = ctx.r22.u64;
	// mtctr r29
	ctx.ctr.u64 = ctx.r29.u64;
loc_82B07E6C:
	// lbzx r28,r11,r23
	ctx.r28.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r23.u32);
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// lwz r29,0(r25)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r25.u32 + 0);
	// rlwinm r20,r28,28,4,31
	ctx.r20.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 28) & 0xFFFFFFF;
	// clrlwi r27,r28,28
	ctx.r27.u64 = ctx.r28.u32 & 0xF;
	// mullw r28,r20,r6
	ctx.r28.s64 = int64_t(ctx.r20.s32) * int64_t(ctx.r6.s32);
	// add r28,r28,r27
	ctx.r28.u64 = ctx.r28.u64 + ctx.r27.u64;
	// add r28,r28,r26
	ctx.r28.u64 = ctx.r28.u64 + ctx.r26.u64;
	// rlwinm r28,r28,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r29,r28,r3
	PPC_STORE_U32(ctx.r28.u32 + ctx.r3.u32, ctx.r29.u32);
	// beq cr6,0x82b07ec8
	if (ctx.cr6.eq) goto loc_82B07EC8;
	// lbzx r28,r11,r23
	ctx.r28.u64 = PPC_LOAD_U8(ctx.r11.u32 + ctx.r23.u32);
	// addi r27,r29,2
	ctx.r27.s64 = ctx.r29.s64 + 2;
	// clrlwi r29,r28,28
	ctx.r29.u64 = ctx.r28.u32 & 0xF;
	// srawi r27,r27,2
	ctx.xer.ca = (ctx.r27.s32 < 0) & ((ctx.r27.u32 & 0x3) != 0);
	ctx.r27.s64 = ctx.r27.s32 >> 2;
	// add r29,r29,r26
	ctx.r29.u64 = ctx.r29.u64 + ctx.r26.u64;
	// srawi r20,r7,2
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x3) != 0);
	ctx.r20.s64 = ctx.r7.s32 >> 2;
	// rlwinm r19,r28,26,6,31
	ctx.r19.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 26) & 0x3FFFFFF;
	// srawi r28,r29,2
	ctx.xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0x3) != 0);
	ctx.r28.s64 = ctx.r29.s32 >> 2;
	// mullw r29,r19,r20
	ctx.r29.s64 = int64_t(ctx.r19.s32) * int64_t(ctx.r20.s32);
	// add r29,r29,r28
	ctx.r29.u64 = ctx.r29.u64 + ctx.r28.u64;
	// rlwinm r29,r29,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r29.u32 | (ctx.r29.u64 << 32), 2) & 0xFFFFFFFC;
	// stwx r27,r29,r5
	PPC_STORE_U32(ctx.r29.u32 + ctx.r5.u32, ctx.r27.u32);
loc_82B07EC8:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// add r25,r21,r25
	ctx.r25.u64 = ctx.r21.u64 + ctx.r25.u64;
	// bdnz 0x82b07e6c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82B07E6C;
	// addi r22,r22,4
	ctx.r22.s64 = ctx.r22.s64 + 4;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82b07fa8
	if (ctx.cr6.eq) goto loc_82B07FA8;
	// li r11,16
	ctx.r11.s64 = 16;
	// addi r28,r6,-3
	ctx.r28.s64 = ctx.r6.s64 + -3;
	// li r29,0
	ctx.r29.s64 = 0;
	// rlwinm r28,r28,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r11
	ctx.ctr.u64 = ctx.r11.u64;
loc_82B07EF4:
	// lbzx r11,r29,r24
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r29.u32 + ctx.r24.u32);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// lwz r25,0(r30)
	ctx.r25.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// rlwinm r20,r11,28,4,31
	ctx.r20.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 28) & 0xFFFFFFF;
	// clrlwi r27,r11,28
	ctx.r27.u64 = ctx.r11.u32 & 0xF;
	// mullw r11,r20,r6
	ctx.r11.s64 = int64_t(ctx.r20.s32) * int64_t(ctx.r6.s32);
	// add r11,r11,r27
	ctx.r11.u64 = ctx.r11.u64 + ctx.r27.u64;
	// add r11,r11,r26
	ctx.r11.u64 = ctx.r11.u64 + ctx.r26.u64;
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r3
	ctx.r11.u64 = ctx.r11.u64 + ctx.r3.u64;
	// stw r25,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r25.u32);
	// lwz r27,0(r31)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// stwu r27,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r27.u32);
	ctx.r11.u32 = ea;
	// lwz r27,0(r10)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// stwu r27,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r27.u32);
	ctx.r11.u32 = ea;
	// lwzu r27,4(r30)
	ea = 4 + ctx.r30.u32;
	ctx.r27.u64 = PPC_LOAD_U32(ea);
	ctx.r30.u32 = ea;
	// stwux r27,r11,r28
	ea = ctx.r11.u32 + ctx.r28.u32;
	PPC_STORE_U32(ea, ctx.r27.u32);
	ctx.r11.u32 = ea;
	// lwzu r27,4(r30)
	ea = 4 + ctx.r30.u32;
	ctx.r27.u64 = PPC_LOAD_U32(ea);
	ctx.r30.u32 = ea;
	// addi r30,r30,4
	ctx.r30.s64 = ctx.r30.s64 + 4;
	// stwu r27,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r27.u32);
	ctx.r11.u32 = ea;
	// lwzu r27,4(r31)
	ea = 4 + ctx.r31.u32;
	ctx.r27.u64 = PPC_LOAD_U32(ea);
	ctx.r31.u32 = ea;
	// stwu r27,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r27.u32);
	ctx.r11.u32 = ea;
	// lwzu r27,4(r10)
	ea = 4 + ctx.r10.u32;
	ctx.r27.u64 = PPC_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// stwu r27,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r27.u32);
	ctx.r11.u32 = ea;
	// lwzu r27,4(r31)
	ea = 4 + ctx.r31.u32;
	ctx.r27.u64 = PPC_LOAD_U32(ea);
	ctx.r31.u32 = ea;
	// stwux r27,r11,r28
	ea = ctx.r11.u32 + ctx.r28.u32;
	PPC_STORE_U32(ea, ctx.r27.u32);
	ctx.r11.u32 = ea;
	// lwzu r27,4(r31)
	ea = 4 + ctx.r31.u32;
	ctx.r27.u64 = PPC_LOAD_U32(ea);
	ctx.r31.u32 = ea;
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// stwu r27,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r27.u32);
	ctx.r11.u32 = ea;
	// lwzu r27,4(r10)
	ea = 4 + ctx.r10.u32;
	ctx.r27.u64 = PPC_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// stwu r27,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r27.u32);
	ctx.r11.u32 = ea;
	// lwz r27,0(r4)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// stwu r27,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r27.u32);
	ctx.r11.u32 = ea;
	// lwzu r27,4(r10)
	ea = 4 + ctx.r10.u32;
	ctx.r27.u64 = PPC_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// stwux r27,r11,r28
	ea = ctx.r11.u32 + ctx.r28.u32;
	PPC_STORE_U32(ea, ctx.r27.u32);
	ctx.r11.u32 = ea;
	// lwzu r27,4(r10)
	ea = 4 + ctx.r10.u32;
	ctx.r27.u64 = PPC_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// stwu r27,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r27.u32);
	ctx.r11.u32 = ea;
	// lwzu r27,4(r4)
	ea = 4 + ctx.r4.u32;
	ctx.r27.u64 = PPC_LOAD_U32(ea);
	ctx.r4.u32 = ea;
	// stwu r27,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r27.u32);
	ctx.r11.u32 = ea;
	// lwzu r27,4(r4)
	ea = 4 + ctx.r4.u32;
	ctx.r27.u64 = PPC_LOAD_U32(ea);
	ctx.r4.u32 = ea;
	// addi r4,r4,4
	ctx.r4.s64 = ctx.r4.s64 + 4;
	// stw r27,4(r11)
	PPC_STORE_U32(ctx.r11.u32 + 4, ctx.r27.u32);
	// bdnz 0x82b07ef4
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82B07EF4;
loc_82B07FA8:
	// addi r26,r26,16
	ctx.r26.s64 = ctx.r26.s64 + 16;
	// cmpw cr6,r26,r6
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r6.s32, ctx.xer);
	// blt cr6,0x82b07e5c
	if (ctx.cr6.lt) goto loc_82B07E5C;
loc_82B07FB4:
	// b 0x82fa76a4
	__restgprlr_19(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B07FB8"))) PPC_WEAK_FUNC(sub_82B07FB8);
PPC_FUNC_IMPL(__imp__sub_82B07FB8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7640
	ctx.lr = 0x82B07FC0;
	__savegprlr_14(ctx, base);
	// stwu r1,-1360(r1)
	ea = -1360 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r10,224(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 224);
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// lhz r23,94(r3)
	ctx.r23.u64 = PPC_LOAD_U16(ctx.r3.u32 + 94);
	// mr r14,r5
	ctx.r14.u64 = ctx.r5.u64;
	// stw r4,1388(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1388, ctx.r4.u32);
	// li r11,60
	ctx.r11.s64 = 60;
	// stw r6,1404(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1404, ctx.r6.u32);
	// stw r7,1412(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1412, ctx.r7.u32);
	// lwz r9,56(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 56);
	// stw r8,1420(r1)
	PPC_STORE_U32(ctx.r1.u32 + 1420, ctx.r8.u32);
	// stw r9,104(r1)
	PPC_STORE_U32(ctx.r1.u32 + 104, ctx.r9.u32);
loc_82B07FF0:
	// lwzx r7,r10,r11
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// li r9,1
	ctx.r9.s64 = 1;
	// li r8,0
	ctx.r8.s64 = 0;
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne cr6,0x82b08018
	if (!ctx.cr6.eq) goto loc_82B08018;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpwi cr6,r11,68
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 68, ctx.xer);
	// ble cr6,0x82b07ff0
	if (!ctx.cr6.gt) goto loc_82B07FF0;
	// stw r8,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r8.u32);
	// b 0x82b08028
	goto loc_82B08028;
loc_82B08018:
	// mullw r11,r4,r14
	ctx.r11.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r14.s32);
	// stw r9,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r9.u32);
	// mullw r11,r11,r6
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r6.s32);
	// stw r11,120(r1)
	PPC_STORE_U32(ctx.r1.u32 + 120, ctx.r11.u32);
loc_82B08028:
	// li r11,52
	ctx.r11.s64 = 52;
loc_82B0802C:
	// lwzx r7,r10,r11
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// bne cr6,0x82b0818c
	if (!ctx.cr6.eq) goto loc_82B0818C;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// cmpwi cr6,r11,56
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 56, ctx.xer);
	// ble cr6,0x82b0802c
	if (!ctx.cr6.gt) goto loc_82B0802C;
	// stw r8,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r8.u32);
loc_82B08048:
	// lhz r10,92(r25)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r25.u32 + 92);
	// mr r11,r8
	ctx.r11.u64 = ctx.r8.u64;
	// stw r8,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r8.u32);
	// cmpwi r10,0
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// ble 0x82b08070
	if (!ctx.cr0.gt) goto loc_82B08070;
	// addi r9,r1,172
	ctx.r9.s64 = ctx.r1.s64 + 172;
loc_82B08060:
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// stwu r8,4(r9)
	ea = 4 + ctx.r9.u32;
	PPC_STORE_U32(ea, ctx.r8.u32);
	ctx.r9.u32 = ea;
	// cmpw cr6,r11,r10
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r10.s32, ctx.xer);
	// blt cr6,0x82b08060
	if (ctx.cr6.lt) goto loc_82B08060;
loc_82B08070:
	// add r11,r23,r14
	ctx.r11.u64 = ctx.r23.u64 + ctx.r14.u64;
	// stw r8,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r8.u32);
	// stw r8,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r8.u32);
	// twllei r23,0
	if (ctx.r23.u32 <= 0) __builtin_debugtrap();
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// rotlwi r11,r10,1
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r10.u32, 1);
	// divw. r10,r10,r23
	ctx.r10.s32 = ctx.r10.s32 / ctx.r23.s32;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// stw r10,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r10.u32);
	// andc r11,r23,r11
	ctx.r11.u64 = ctx.r23.u64 & ~ctx.r11.u64;
	// twlgei r11,-1
	if (ctx.r11.u32 >= 4294967295) __builtin_debugtrap();
	// ble 0x82b08690
	if (!ctx.cr0.gt) goto loc_82B08690;
	// lwz r22,104(r1)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
loc_82B080A4:
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// lwz r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmpw cr6,r9,r11
	ctx.cr6.compare<int32_t>(ctx.r9.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x82b080c0
	if (!ctx.cr6.eq) goto loc_82B080C0;
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// subf r23,r11,r14
	ctx.r23.s64 = ctx.r14.s64 - ctx.r11.s64;
loc_82B080C0:
	// lwz r10,224(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 224);
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// lwz r8,1388(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1388);
	// lwz r31,108(r25)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r25.u32 + 108);
	// lwz r21,120(r25)
	ctx.r21.u64 = PPC_LOAD_U32(ctx.r25.u32 + 120);
	// lwz r11,24(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 24);
	// lwz r7,20(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 20);
	// add r8,r11,r8
	ctx.r8.u64 = ctx.r11.u64 + ctx.r8.u64;
	// lwz r11,28(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 28);
	// mullw r10,r8,r7
	ctx.r10.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r7.s32);
	// add r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r4,r11,r9
	ctx.r4.u64 = ctx.r11.u64 + ctx.r9.u64;
	// bl 0x82b07be0
	ctx.lr = 0x82B080F4;
	sub_82B07BE0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// blt 0x82b0866c
	if (ctx.cr0.lt) goto loc_82B0866C;
	// lhz r30,92(r25)
	ctx.r30.u64 = PPC_LOAD_U16(ctx.r25.u32 + 92);
	// li r16,0
	ctx.r16.s64 = 0;
	// cmpwi r30,0
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// ble 0x82b0866c
	if (!ctx.cr0.gt) goto loc_82B0866C;
	// lwz r10,1412(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1412);
	// addi r11,r1,176
	ctx.r11.s64 = ctx.r1.s64 + 176;
	// li r17,0
	ctx.r17.s64 = 0;
	// addi r15,r10,64
	ctx.r15.s64 = ctx.r10.s64 + 64;
	// addi r18,r11,-4
	ctx.r18.s64 = ctx.r11.s64 + -4;
loc_82B08120:
	// rlwinm r29,r23,4,0,27
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 4) & 0xFFFFFFF0;
	// stw r31,116(r1)
	PPC_STORE_U32(ctx.r1.u32 + 116, ctx.r31.u32);
	// addi r3,r25,40
	ctx.r3.s64 = ctx.r25.s64 + 40;
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// addi r6,r1,124
	ctx.r6.s64 = ctx.r1.s64 + 124;
	// addi r5,r1,108
	ctx.r5.s64 = ctx.r1.s64 + 108;
	// mr r4,r16
	ctx.r4.u64 = ctx.r16.u64;
	// li r24,0
	ctx.r24.s64 = 0;
	// mullw r26,r29,r16
	ctx.r26.s64 = int64_t(ctx.r29.s32) * int64_t(ctx.r16.s32);
	// bl 0x82b07d08
	ctx.lr = 0x82B08148;
	sub_82B07D08(ctx, base);
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// li r19,0
	ctx.r19.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82b08174
	if (ctx.cr6.eq) goto loc_82B08174;
	// lhz r11,94(r25)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r25.u32 + 94);
	// srawi r10,r14,2
	ctx.xer.ca = (ctx.r14.s32 < 0) & ((ctx.r14.u32 & 0x3) != 0);
	ctx.r10.s64 = ctx.r14.s32 >> 2;
	// lwz r9,88(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// rlwinm r8,r11,30,2,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3FFFFFFF;
	// mullw r11,r10,r16
	ctx.r11.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r16.s32);
	// mullw r10,r8,r9
	ctx.r10.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r9.s32);
	// add r19,r10,r11
	ctx.r19.u64 = ctx.r10.u64 + ctx.r11.u64;
loc_82B08174:
	// lwz r20,112(r1)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmpwi cr6,r20,0
	ctx.cr6.compare<int32_t>(ctx.r20.s32, 0, ctx.xer);
	// beq cr6,0x82b08194
	if (ctx.cr6.eq) goto loc_82B08194;
	// srawi r11,r29,2
	ctx.xer.ca = (ctx.r29.s32 < 0) & ((ctx.r29.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r29.s32 >> 2;
	// addze r28,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r28.s64 = temp.s64;
	// b 0x82b081c8
	goto loc_82B081C8;
loc_82B0818C:
	// stw r9,80(r1)
	PPC_STORE_U32(ctx.r1.u32 + 80, ctx.r9.u32);
	// b 0x82b08048
	goto loc_82B08048;
loc_82B08194:
	// lbz r11,0(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// clrlwi. r10,r11,31
	ctx.r10.u64 = ctx.r11.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82b081b0
	if (!ctx.cr0.eq) goto loc_82B081B0;
	// rlwinm r28,r11,2,0,29
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// li r24,1
	ctx.r24.s64 = 1;
	// b 0x82b081c8
	goto loc_82B081C8;
loc_82B081B0:
	// lbz r10,1(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// addi r31,r31,2
	ctx.r31.s64 = ctx.r31.s64 + 2;
	// li r24,2
	ctx.r24.s64 = 2;
	// rotlwi r10,r10,8
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r10.u32, 8);
	// or r11,r10,r11
	ctx.r11.u64 = ctx.r10.u64 | ctx.r11.u64;
	// rlwinm r28,r11,2,14,28
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0x3FFF8;
loc_82B081C8:
	// lwz r9,108(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82b081dc
	if (ctx.cr6.eq) goto loc_82B081DC;
	// lwz r27,68(r25)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r25.u32 + 68);
	// b 0x82b081e0
	goto loc_82B081E0;
loc_82B081DC:
	// lwz r27,64(r25)
	ctx.r27.u64 = PPC_LOAD_U32(ctx.r25.u32 + 64);
loc_82B081E0:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// beq cr6,0x82b08440
	if (ctx.cr6.eq) goto loc_82B08440;
	// addi r11,r30,-1
	ctx.r11.s64 = ctx.r30.s64 + -1;
	// cmpw cr6,r16,r11
	ctx.cr6.compare<int32_t>(ctx.r16.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x82b08210
	if (ctx.cr6.eq) goto loc_82B08210;
	// lbz r11,1(r31)
	ctx.r11.u64 = PPC_LOAD_U8(ctx.r31.u32 + 1);
	// addi r24,r24,2
	ctx.r24.s64 = ctx.r24.s64 + 2;
	// lbz r10,0(r31)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r31.u32 + 0);
	// addi r31,r31,2
	ctx.r31.s64 = ctx.r31.s64 + 2;
	// rotlwi r11,r11,8
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r11.u32, 8);
	// or r29,r11,r10
	ctx.r29.u64 = ctx.r11.u64 | ctx.r10.u64;
	// b 0x82b08218
	goto loc_82B08218;
loc_82B08210:
	// lwz r11,120(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 120);
	// subf r29,r21,r11
	ctx.r29.s64 = ctx.r11.s64 - ctx.r21.s64;
loc_82B08218:
	// lwz r11,204(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 204);
	// rlwinm r10,r26,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 2) & 0xFFFFFFFC;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// add r22,r10,r11
	ctx.r22.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lhz r11,62(r25)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r25.u32 + 62);
	// beq cr6,0x82b08238
	if (ctx.cr6.eq) goto loc_82B08238;
	// rlwinm r11,r11,30,30,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 30) & 0x3;
	// b 0x82b0823c
	goto loc_82B0823C;
loc_82B08238:
	// clrlwi r11,r11,30
	ctx.r11.u64 = ctx.r11.u32 & 0x3;
loc_82B0823C:
	// cmpwi cr6,r20,0
	ctx.cr6.compare<int32_t>(ctx.r20.s32, 0, ctx.xer);
	// beq cr6,0x82b08248
	if (ctx.cr6.eq) goto loc_82B08248;
	// li r11,2
	ctx.r11.s64 = 2;
loc_82B08248:
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// blt cr6,0x82b083b4
	if (ctx.cr6.lt) goto loc_82B083B4;
	// beq cr6,0x82b082a0
	if (ctx.cr6.eq) goto loc_82B082A0;
	// cmplwi cr6,r11,3
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 3, ctx.xer);
	// blt cr6,0x82b0827c
	if (ctx.cr6.lt) goto loc_82B0827C;
	// bne cr6,0x82b08440
	if (!ctx.cr6.eq) goto loc_82B08440;
	// rlwinm r30,r28,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r5,r30
	ctx.r5.u64 = ctx.r30.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x82fa77c0
	ctx.lr = 0x82B08274;
	sub_82FA77C0(ctx, base);
	// add r24,r30,r24
	ctx.r24.u64 = ctx.r30.u64 + ctx.r24.u64;
	// b 0x82b08440
	goto loc_82B08440;
loc_82B0827C:
	// mr r9,r23
	ctx.r9.u64 = ctx.r23.u64;
	// lwz r7,200(r25)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r25.u32 + 200);
	// li r8,16
	ctx.r8.s64 = 16;
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,368
	ctx.r3.s64 = ctx.r1.s64 + 368;
	// bl 0x82bc76f8
	ctx.lr = 0x82B0829C;
	sub_82BC76F8(ctx, base);
	// b 0x82b08438
	goto loc_82B08438;
loc_82B082A0:
	// lhz r11,90(r25)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r25.u32 + 90);
	// lis r10,4
	ctx.r10.s64 = 262144;
	// cmpw cr6,r28,r23
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r23.s32, ctx.xer);
	// subfic r11,r11,16
	ctx.xer.ca = ctx.r11.u32 <= 16;
	ctx.r11.s64 = 16 - ctx.r11.s64;
	// ori r10,r10,57856
	ctx.r10.u64 = ctx.r10.u64 | 57856;
	// sraw r8,r10,r11
	temp.u32 = ctx.r11.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r10.s32 < 0) & (((ctx.r10.s32 >> temp.u32) << temp.u32) != ctx.r10.s32);
	ctx.r8.s64 = ctx.r10.s32 >> temp.u32;
	// ble cr6,0x82b0836c
	if (!ctx.cr6.gt) goto loc_82B0836C;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// beq cr6,0x82b082e8
	if (ctx.cr6.eq) goto loc_82B082E8;
	// srawi r10,r27,4
	ctx.xer.ca = (ctx.r27.s32 < 0) & ((ctx.r27.u32 & 0xF) != 0);
	ctx.r10.s64 = ctx.r27.s32 >> 4;
	// rotlwi r11,r8,1
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r8.u32, 1);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// divw r11,r8,r10
	ctx.r11.s32 = ctx.r8.s32 / ctx.r10.s32;
	// twllei r10,0
	if (ctx.r10.u32 <= 0) __builtin_debugtrap();
	// andc r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 & ~ctx.r9.u64;
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// twlgei r10,-1
	if (ctx.r10.u32 >= 4294967295) __builtin_debugtrap();
loc_82B082E8:
	// mr r7,r23
	ctx.r7.u64 = ctx.r23.u64;
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82bc6dc0
	ctx.lr = 0x82B08300;
	sub_82BC6DC0(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82b0841c
	if (ctx.cr6.eq) goto loc_82B0841C;
	// lhz r11,90(r25)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r25.u32 + 90);
	// li r10,24000
	ctx.r10.s64 = 24000;
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// subfic r11,r11,16
	ctx.xer.ca = ctx.r11.u32 <= 16;
	ctx.r11.s64 = 16 - ctx.r11.s64;
	// sraw r8,r10,r11
	temp.u32 = ctx.r11.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r10.s32 < 0) & (((ctx.r10.s32 >> temp.u32) << temp.u32) != ctx.r10.s32);
	ctx.r8.s64 = ctx.r10.s32 >> temp.u32;
	// beq cr6,0x82b0834c
	if (ctx.cr6.eq) goto loc_82B0834C;
	// srawi r10,r27,4
	ctx.xer.ca = (ctx.r27.s32 < 0) & ((ctx.r27.u32 & 0xF) != 0);
	ctx.r10.s64 = ctx.r27.s32 >> 4;
	// rotlwi r11,r8,1
	ctx.r11.u64 = __builtin_rotateleft32(ctx.r8.u32, 1);
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r9,r11,-1
	ctx.r9.s64 = ctx.r11.s64 + -1;
	// divw r11,r8,r10
	ctx.r11.s32 = ctx.r8.s32 / ctx.r10.s32;
	// twllei r10,0
	if (ctx.r10.u32 <= 0) __builtin_debugtrap();
	// andc r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 & ~ctx.r9.u64;
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// twlgei r10,-1
	if (ctx.r10.u32 >= 4294967295) __builtin_debugtrap();
loc_82B0834C:
	// rlwinm r11,r23,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r7,r23,r28
	ctx.r7.s64 = ctx.r28.s64 - ctx.r23.s64;
	// add r6,r11,r22
	ctx.r6.u64 = ctx.r11.u64 + ctx.r22.u64;
	// subf r5,r30,r21
	ctx.r5.s64 = ctx.r21.s64 - ctx.r30.s64;
	// add r4,r30,r31
	ctx.r4.u64 = ctx.r30.u64 + ctx.r31.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82bc6dc0
	ctx.lr = 0x82B08368;
	sub_82BC6DC0(ctx, base);
	// b 0x82b08410
	goto loc_82B08410;
loc_82B0836C:
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// beq cr6,0x82b08398
	if (ctx.cr6.eq) goto loc_82B08398;
	// rotlwi r10,r8,1
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r8.u32, 1);
	// srawi r11,r27,4
	ctx.xer.ca = (ctx.r27.s32 < 0) & ((ctx.r27.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r27.s32 >> 4;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// addi r9,r11,1
	ctx.r9.s64 = ctx.r11.s64 + 1;
	// divw r11,r8,r9
	ctx.r11.s32 = ctx.r8.s32 / ctx.r9.s32;
	// andc r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 & ~ctx.r10.u64;
	// twllei r9,0
	if (ctx.r9.u32 <= 0) __builtin_debugtrap();
	// addi r8,r11,1
	ctx.r8.s64 = ctx.r11.s64 + 1;
	// twlgei r10,-1
	if (ctx.r10.u32 >= 4294967295) __builtin_debugtrap();
loc_82B08398:
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r6,r22
	ctx.r6.u64 = ctx.r22.u64;
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,128
	ctx.r3.s64 = ctx.r1.s64 + 128;
	// bl 0x82bc6dc0
	ctx.lr = 0x82B083B0;
	sub_82BC6DC0(ctx, base);
	// b 0x82b08438
	goto loc_82B08438;
loc_82B083B4:
	// cmpw cr6,r28,r23
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r23.s32, ctx.xer);
	// li r9,1
	ctx.r9.s64 = 1;
	// mr r7,r22
	ctx.r7.u64 = ctx.r22.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// mr r5,r21
	ctx.r5.u64 = ctx.r21.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// ble cr6,0x82b08430
	if (!ctx.cr6.gt) goto loc_82B08430;
	// mr r8,r23
	ctx.r8.u64 = ctx.r23.u64;
	// bl 0x82bc65b0
	ctx.lr = 0x82B083DC;
	sub_82BC65B0(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// mr r30,r3
	ctx.r30.u64 = ctx.r3.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82b0841c
	if (ctx.cr6.eq) goto loc_82B0841C;
	// rlwinm r11,r23,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r5,r3,r21
	ctx.r5.s64 = ctx.r21.s64 - ctx.r3.s64;
	// add r4,r3,r31
	ctx.r4.u64 = ctx.r3.u64 + ctx.r31.u64;
	// li r9,1
	ctx.r9.s64 = 1;
	// subf r8,r23,r28
	ctx.r8.s64 = ctx.r28.s64 - ctx.r23.s64;
	// add r7,r11,r22
	ctx.r7.u64 = ctx.r11.u64 + ctx.r22.u64;
	// li r6,0
	ctx.r6.s64 = 0;
	// addi r3,r1,240
	ctx.r3.s64 = ctx.r1.s64 + 240;
	// bl 0x82bc65b0
	ctx.lr = 0x82B08410;
	sub_82BC65B0(ctx, base);
loc_82B08410:
	// add r11,r3,r30
	ctx.r11.u64 = ctx.r3.u64 + ctx.r30.u64;
	// add r24,r11,r24
	ctx.r24.u64 = ctx.r11.u64 + ctx.r24.u64;
	// b 0x82b08424
	goto loc_82B08424;
loc_82B0841C:
	// mr r24,r29
	ctx.r24.u64 = ctx.r29.u64;
	// subf r3,r30,r29
	ctx.r3.s64 = ctx.r29.s64 - ctx.r30.s64;
loc_82B08424:
	// subf r11,r3,r21
	ctx.r11.s64 = ctx.r21.s64 - ctx.r3.s64;
	// subf r21,r30,r11
	ctx.r21.s64 = ctx.r11.s64 - ctx.r30.s64;
	// b 0x82b08440
	goto loc_82B08440;
loc_82B08430:
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// bl 0x82bc65b0
	ctx.lr = 0x82B08438;
	sub_82BC65B0(ctx, base);
loc_82B08438:
	// add r24,r3,r24
	ctx.r24.u64 = ctx.r3.u64 + ctx.r24.u64;
	// subf r21,r3,r21
	ctx.r21.s64 = ctx.r21.s64 - ctx.r3.s64;
loc_82B08440:
	// cmpwi cr6,r20,0
	ctx.cr6.compare<int32_t>(ctx.r20.s32, 0, ctx.xer);
	// beq cr6,0x82b084f8
	if (ctx.cr6.eq) goto loc_82B084F8;
	// lwz r10,204(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 204);
	// rlwinm r11,r26,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r31,4(r18)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r18.u32 + 4);
	// mr r8,r15
	ctx.r8.u64 = ctx.r15.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// add r10,r31,r17
	ctx.r10.u64 = ctx.r31.u64 + ctx.r17.u64;
	// addi r6,r11,-1
	ctx.r6.s64 = ctx.r11.s64 + -1;
	// rlwinm r5,r10,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// li r4,16
	ctx.r4.s64 = 16;
loc_82B0846C:
	// lwz r10,0(r8)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// lhz r11,88(r25)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r25.u32 + 88);
	// add r22,r10,r5
	ctx.r22.u64 = ctx.r10.u64 + ctx.r5.u64;
	// cmplwi cr6,r11,1
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 1, ctx.xer);
	// bne cr6,0x82b084a4
	if (!ctx.cr6.eq) goto loc_82B084A4;
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// ble cr6,0x82b084e8
	if (!ctx.cr6.gt) goto loc_82B084E8;
	// addi r11,r22,-4
	ctx.r11.s64 = ctx.r22.s64 + -4;
	// mtctr r23
	ctx.ctr.u64 = ctx.r23.u64;
loc_82B08490:
	// lbz r10,1(r6)
	ctx.r10.u64 = PPC_LOAD_U8(ctx.r6.u32 + 1);
	// addi r6,r6,1
	ctx.r6.s64 = ctx.r6.s64 + 1;
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x82b08490
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82B08490;
	// b 0x82b084e8
	goto loc_82B084E8;
loc_82B084A4:
	// li r10,1
	ctx.r10.s64 = 1;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// slw r11,r10,r11
	ctx.r11.u64 = ctx.r11.u8 & 0x20 ? 0 : (ctx.r10.u32 << (ctx.r11.u8 & 0x3F));
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// subfic r7,r10,-1
	ctx.xer.ca = ctx.r10.u32 <= 4294967295;
	ctx.r7.s64 = -1 - ctx.r10.s64;
	// ble cr6,0x82b084e8
	if (!ctx.cr6.gt) goto loc_82B084E8;
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
	// mtctr r23
	ctx.ctr.u64 = ctx.r23.u64;
loc_82B084C8:
	// lbzu r9,1(r6)
	ea = 1 + ctx.r6.u32;
	ctx.r9.u64 = PPC_LOAD_U8(ea);
	ctx.r6.u32 = ea;
	// cmplwi cr6,r9,1
	ctx.cr6.compare<uint32_t>(ctx.r9.u32, 1, ctx.xer);
	// bne cr6,0x82b084dc
	if (!ctx.cr6.eq) goto loc_82B084DC;
	// stw r10,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r10.u32);
	// b 0x82b084e0
	goto loc_82B084E0;
loc_82B084DC:
	// stw r7,0(r11)
	PPC_STORE_U32(ctx.r11.u32 + 0, ctx.r7.u32);
loc_82B084E0:
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x82b084c8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82B084C8;
loc_82B084E8:
	// addic. r4,r4,-1
	ctx.xer.ca = ctx.r4.u32 > 0;
	ctx.r4.s64 = ctx.r4.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// bne 0x82b0846c
	if (!ctx.cr0.eq) goto loc_82B0846C;
	// b 0x82b0863c
	goto loc_82B0863C;
loc_82B084F8:
	// srawi r11,r23,4
	ctx.xer.ca = (ctx.r23.s32 < 0) & ((ctx.r23.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r23.s32 >> 4;
	// addze r11,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r11.s64 = temp.s64;
	// cmpw cr6,r28,r11
	ctx.cr6.compare<int32_t>(ctx.r28.s32, ctx.r11.s32, ctx.xer);
	// bge cr6,0x82b0850c
	if (!ctx.cr6.lt) goto loc_82B0850C;
	// mr r11,r28
	ctx.r11.u64 = ctx.r28.u64;
loc_82B0850C:
	// cmpwi cr6,r11,1
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 1, ctx.xer);
	// ble cr6,0x82b08534
	if (!ctx.cr6.gt) goto loc_82B08534;
	// addi r10,r11,-1
	ctx.r10.s64 = ctx.r11.s64 + -1;
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82B08520:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r9,0(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// add r10,r10,r9
	ctx.r10.u64 = ctx.r10.u64 + ctx.r9.u64;
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x82b08520
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82B08520;
loc_82B08534:
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// beq cr6,0x82b0857c
	if (ctx.cr6.eq) goto loc_82B0857C;
	// lwz r10,204(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 204);
	// rlwinm r11,r26,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r8,124(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 124);
	// mr r9,r27
	ctx.r9.u64 = ctx.r27.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// beq cr6,0x82b0855c
	if (ctx.cr6.eq) goto loc_82B0855C;
	// rlwinm r9,r27,1,0,30
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r27.u32 | (ctx.r27.u64 << 32), 1) & 0xFFFFFFFE;
loc_82B0855C:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// ble cr6,0x82b0857c
	if (!ctx.cr6.gt) goto loc_82B0857C;
	// addi r11,r11,-4
	ctx.r11.s64 = ctx.r11.s64 + -4;
	// mtctr r28
	ctx.ctr.u64 = ctx.r28.u64;
loc_82B0856C:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mullw r10,r10,r9
	ctx.r10.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r9.s32);
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x82b0856c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82B0856C;
loc_82B0857C:
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82b085b0
	if (ctx.cr6.eq) goto loc_82B085B0;
	// lwz r10,204(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 204);
	// rlwinm r11,r26,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r9,r23,4,0,27
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 4) & 0xFFFFFFF0;
	// add r22,r11,r10
	ctx.r22.u64 = ctx.r11.u64 + ctx.r10.u64;
	// subf r10,r28,r9
	ctx.r10.s64 = ctx.r9.s64 - ctx.r28.s64;
	// rlwinm r11,r28,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r5,r10,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// li r4,0
	ctx.r4.s64 = 0;
	// add r3,r11,r22
	ctx.r3.u64 = ctx.r11.u64 + ctx.r22.u64;
	// bl 0x82fa7cf0
	ctx.lr = 0x82B085B0;
	sub_82FA7CF0(ctx, base);
loc_82B085B0:
	// lwz r11,84(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// li r4,0
	ctx.r4.s64 = 0;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82b085d0
	if (ctx.cr6.eq) goto loc_82B085D0;
	// lwz r10,120(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 120);
	// lwz r11,188(r25)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r25.u32 + 188);
	// rlwinm r10,r10,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
loc_82B085D0:
	// rlwinm r5,r19,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r19.u32 | (ctx.r19.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,204(r25)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r25.u32 + 204);
	// lwz r9,1404(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1404);
	// rlwinm r11,r26,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 2) & 0xFFFFFFFC;
	// add r5,r5,r4
	ctx.r5.u64 = ctx.r5.u64 + ctx.r4.u64;
	// lwz r3,200(r25)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r25.u32 + 200);
	// mullw r7,r14,r9
	ctx.r7.s64 = int64_t(ctx.r14.s32) * int64_t(ctx.r9.s32);
	// lwz r9,80(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// lwz r8,84(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// mr r6,r23
	ctx.r6.u64 = ctx.r23.u64;
	// add r4,r11,r10
	ctx.r4.u64 = ctx.r11.u64 + ctx.r10.u64;
	// bl 0x82b07db0
	ctx.lr = 0x82B08600;
	sub_82B07DB0(ctx, base);
	// lwz r31,4(r18)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r18.u32 + 4);
	// rlwinm r27,r23,2,0,29
	ctx.r27.u64 = __builtin_rotateleft64(ctx.r23.u32 | (ctx.r23.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r31,r17
	ctx.r11.u64 = ctx.r31.u64 + ctx.r17.u64;
	// addi r28,r15,-4
	ctx.r28.s64 = ctx.r15.s64 + -4;
	// rlwinm r26,r11,2,0,29
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// li r30,16
	ctx.r30.s64 = 16;
	// lwz r29,200(r25)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r25.u32 + 200);
loc_82B0861C:
	// lwzu r11,4(r28)
	ea = 4 + ctx.r28.u32;
	ctx.r11.u64 = PPC_LOAD_U32(ea);
	ctx.r28.u32 = ea;
	// mr r5,r27
	ctx.r5.u64 = ctx.r27.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// add r3,r11,r26
	ctx.r3.u64 = ctx.r11.u64 + ctx.r26.u64;
	// bl 0x82fa77c0
	ctx.lr = 0x82B08630;
	sub_82FA77C0(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// add r29,r27,r29
	ctx.r29.u64 = ctx.r27.u64 + ctx.r29.u64;
	// bne 0x82b0861c
	if (!ctx.cr0.eq) goto loc_82B0861C;
loc_82B0863C:
	// lwz r10,96(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// add r11,r31,r23
	ctx.r11.u64 = ctx.r31.u64 + ctx.r23.u64;
	// lhz r30,92(r25)
	ctx.r30.u64 = PPC_LOAD_U16(ctx.r25.u32 + 92);
	// addi r16,r16,1
	ctx.r16.s64 = ctx.r16.s64 + 1;
	// lwz r9,116(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 116);
	// add r10,r24,r10
	ctx.r10.u64 = ctx.r24.u64 + ctx.r10.u64;
	// stwu r11,4(r18)
	ea = 4 + ctx.r18.u32;
	PPC_STORE_U32(ea, ctx.r11.u32);
	ctx.r18.u32 = ea;
	// add r17,r17,r14
	ctx.r17.u64 = ctx.r17.u64 + ctx.r14.u64;
	// stw r10,96(r1)
	PPC_STORE_U32(ctx.r1.u32 + 96, ctx.r10.u32);
	// add r31,r9,r24
	ctx.r31.u64 = ctx.r9.u64 + ctx.r24.u64;
	// cmpw cr6,r16,r30
	ctx.cr6.compare<int32_t>(ctx.r16.s32, ctx.r30.s32, ctx.xer);
	// blt cr6,0x82b08120
	if (ctx.cr6.lt) goto loc_82B08120;
loc_82B0866C:
	// lwz r11,88(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 88);
	// lwz r10,92(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// lwz r9,100(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// addi r11,r11,1
	ctx.r11.s64 = ctx.r11.s64 + 1;
	// add r10,r10,r23
	ctx.r10.u64 = ctx.r10.u64 + ctx.r23.u64;
	// stw r11,88(r1)
	PPC_STORE_U32(ctx.r1.u32 + 88, ctx.r11.u32);
	// cmpw cr6,r11,r9
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r9.s32, ctx.xer);
	// stw r10,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r10.u32);
	// blt cr6,0x82b080a4
	if (ctx.cr6.lt) goto loc_82B080A4;
loc_82B08690:
	// lwz r11,104(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 104);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82b086d8
	if (ctx.cr6.eq) goto loc_82B086D8;
	// lwz r10,1404(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1404);
	// li r30,16
	ctx.r30.s64 = 16;
	// lwz r11,1420(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1420);
	// lwz r9,1412(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 1412);
	// mullw r10,r14,r10
	ctx.r10.s64 = int64_t(ctx.r14.s32) * int64_t(ctx.r10.s32);
	// rlwinm r29,r10,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r31,r11,64
	ctx.r31.s64 = ctx.r11.s64 + 64;
	// subf r28,r11,r9
	ctx.r28.s64 = ctx.r9.s64 - ctx.r11.s64;
loc_82B086BC:
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// lwzx r4,r28,r31
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r31.u32);
	// lwz r3,0(r31)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r31.u32 + 0);
	// bl 0x82fa77c0
	ctx.lr = 0x82B086CC;
	sub_82FA77C0(ctx, base);
	// addic. r30,r30,-1
	ctx.xer.ca = ctx.r30.u32 > 0;
	ctx.r30.s64 = ctx.r30.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r30.s32, 0, ctx.xer);
	// addi r31,r31,4
	ctx.r31.s64 = ctx.r31.s64 + 4;
	// bne 0x82b086bc
	if (!ctx.cr0.eq) goto loc_82B086BC;
loc_82B086D8:
	// lwz r3,96(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + 96);
	// addi r1,r1,1360
	ctx.r1.s64 = ctx.r1.s64 + 1360;
	// b 0x82fa7690
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B086E4"))) PPC_WEAK_FUNC(sub_82B086E4);
PPC_FUNC_IMPL(__imp__sub_82B086E4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B086E8"))) PPC_WEAK_FUNC(sub_82B086E8);
PPC_FUNC_IMPL(__imp__sub_82B086E8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7660
	ctx.lr = 0x82B086F0;
	__savegprlr_22(ctx, base);
	// stwu r1,-192(r1)
	ea = -192 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r22,r9
	ctx.r22.u64 = ctx.r9.u64;
	// lis r9,0
	ctx.r9.s64 = 0;
	// subfic r11,r10,16
	ctx.xer.ca = ctx.r10.u32 <= 16;
	ctx.r11.s64 = 16 - ctx.r10.s64;
	// lwz r10,36(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// ori r9,r9,32768
	ctx.r9.u64 = ctx.r9.u64 | 32768;
	// mr r23,r8
	ctx.r23.u64 = ctx.r8.u64;
	// lwz r8,276(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 276);
	// sraw r11,r9,r11
	temp.u32 = ctx.r11.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r9.s32 < 0) & (((ctx.r9.s32 >> temp.u32) << temp.u32) != ctx.r9.s32);
	ctx.r11.s64 = ctx.r9.s32 >> temp.u32;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// addi r25,r11,-1
	ctx.r25.s64 = ctx.r11.s64 + -1;
	// neg r24,r11
	ctx.r24.s64 = -ctx.r11.s64;
	// beq cr6,0x82b08730
	if (ctx.cr6.eq) goto loc_82B08730;
	// srawi r31,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r31.s64 = ctx.r10.s32 >> 1;
	// li r28,2
	ctx.r28.s64 = 2;
	// b 0x82b08738
	goto loc_82B08738;
loc_82B08730:
	// mr r31,r10
	ctx.r31.u64 = ctx.r10.u64;
	// li r28,1
	ctx.r28.s64 = 1;
loc_82B08738:
	// lhz r11,52(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 52);
	// li r27,0
	ctx.r27.s64 = 0;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82b08830
	if (ctx.cr0.eq) goto loc_82B08830;
	// rlwinm r11,r6,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r29,r7
	ctx.r29.u64 = ctx.r7.u64;
	// rlwinm r26,r4,2,0,29
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// add r30,r11,r5
	ctx.r30.u64 = ctx.r11.u64 + ctx.r5.u64;
loc_82B08758:
	// addi r7,r1,84
	ctx.r7.s64 = ctx.r1.s64 + 84;
	// addi r6,r1,88
	ctx.r6.s64 = ctx.r1.s64 + 88;
	// addi r5,r1,80
	ctx.r5.s64 = ctx.r1.s64 + 80;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// bl 0x82b07d08
	ctx.lr = 0x82B0876C;
	sub_82B07D08(ctx, base);
	// lwz r11,80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 80);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// mr r11,r22
	ctx.r11.u64 = ctx.r22.u64;
	// bne cr6,0x82b08780
	if (!ctx.cr6.eq) goto loc_82B08780;
	// mr r11,r23
	ctx.r11.u64 = ctx.r23.u64;
loc_82B08780:
	// lwz r10,84(r1)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82b08790
	if (ctx.cr6.eq) goto loc_82B08790;
	// li r11,1
	ctx.r11.s64 = 1;
loc_82B08790:
	// lwz r10,0(r29)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r29.u32 + 0);
	// mr r8,r30
	ctx.r8.u64 = ctx.r30.u64;
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82b087cc
	if (ctx.cr6.eq) goto loc_82B087CC;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// ble cr6,0x82b08818
	if (!ctx.cr6.gt) goto loc_82B08818;
	// rlwinm r11,r28,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r31
	ctx.ctr.u64 = ctx.r31.u64;
	// addi r9,r10,-2
	ctx.r9.s64 = ctx.r10.s64 + -2;
	// subf r10,r11,r30
	ctx.r10.s64 = ctx.r30.s64 - ctx.r11.s64;
loc_82B087B8:
	// lwzux r8,r10,r11
	ea = ctx.r10.u32 + ctx.r11.u32;
	ctx.r8.u64 = PPC_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// extsh r8,r8
	ctx.r8.s64 = ctx.r8.s16;
	// sthu r8,2(r9)
	ea = 2 + ctx.r9.u32;
	PPC_STORE_U16(ea, ctx.r8.u16);
	ctx.r9.u32 = ea;
	// bdnz 0x82b087b8
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82B087B8;
	// b 0x82b08818
	goto loc_82B08818;
loc_82B087CC:
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// ble cr6,0x82b08818
	if (!ctx.cr6.gt) goto loc_82B08818;
	// rlwinm r9,r28,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r28.u32 | (ctx.r28.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r31
	ctx.ctr.u64 = ctx.r31.u64;
	// addi r10,r10,-2
	ctx.r10.s64 = ctx.r10.s64 + -2;
loc_82B087E0:
	// lwz r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// srawi r11,r11,4
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 4;
	// cmpw cr6,r11,r25
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r25.s32, ctx.xer);
	// ble cr6,0x82b087fc
	if (!ctx.cr6.gt) goto loc_82B087FC;
	// mr r11,r25
	ctx.r11.u64 = ctx.r25.u64;
	// b 0x82b08808
	goto loc_82B08808;
loc_82B087FC:
	// cmpw cr6,r11,r24
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r24.s32, ctx.xer);
	// bge cr6,0x82b08808
	if (!ctx.cr6.lt) goto loc_82B08808;
	// mr r11,r24
	ctx.r11.u64 = ctx.r24.u64;
loc_82B08808:
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// add r8,r9,r8
	ctx.r8.u64 = ctx.r9.u64 + ctx.r8.u64;
	// sthu r11,2(r10)
	ea = 2 + ctx.r10.u32;
	PPC_STORE_U16(ea, ctx.r11.u16);
	ctx.r10.u32 = ea;
	// bdnz 0x82b087e0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82B087E0;
loc_82B08818:
	// lhz r11,52(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 52);
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// add r30,r26,r30
	ctx.r30.u64 = ctx.r26.u64 + ctx.r30.u64;
	// addi r29,r29,4
	ctx.r29.s64 = ctx.r29.s64 + 4;
	// cmpw cr6,r27,r11
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82b08758
	if (ctx.cr6.lt) goto loc_82B08758;
loc_82B08830:
	// addi r1,r1,192
	ctx.r1.s64 = ctx.r1.s64 + 192;
	// b 0x82fa76b0
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B08838"))) PPC_WEAK_FUNC(sub_82B08838);
PPC_FUNC_IMPL(__imp__sub_82B08838) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7640
	ctx.lr = 0x82B08840;
	__savegprlr_14(ctx, base);
	// stw r10,76(r1)
	PPC_STORE_U32(ctx.r1.u32 + 76, ctx.r10.u32);
	// lis r10,0
	ctx.r10.s64 = 0;
	// lwz r11,100(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 100);
	// mr r29,r6
	ctx.r29.u64 = ctx.r6.u64;
	// ori r10,r10,32768
	ctx.r10.u64 = ctx.r10.u64 | 32768;
	// stw r6,44(r1)
	PPC_STORE_U32(ctx.r1.u32 + 44, ctx.r6.u32);
	// subfic r11,r11,16
	ctx.xer.ca = ctx.r11.u32 <= 16;
	ctx.r11.s64 = 16 - ctx.r11.s64;
	// stw r3,20(r1)
	PPC_STORE_U32(ctx.r1.u32 + 20, ctx.r3.u32);
	// addi r6,r1,-176
	ctx.r6.s64 = ctx.r1.s64 + -176;
	// stw r7,52(r1)
	PPC_STORE_U32(ctx.r1.u32 + 52, ctx.r7.u32);
	// sraw r11,r10,r11
	temp.u32 = ctx.r11.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r10.s32 < 0) & (((ctx.r10.s32 >> temp.u32) << temp.u32) != ctx.r10.s32);
	ctx.r11.s64 = ctx.r10.s32 >> temp.u32;
	// stw r5,36(r1)
	PPC_STORE_U32(ctx.r1.u32 + 36, ctx.r5.u32);
	// neg r3,r11
	ctx.r3.s64 = -ctx.r11.s64;
	// stw r8,60(r1)
	PPC_STORE_U32(ctx.r1.u32 + 60, ctx.r8.u32);
	// addi r28,r1,-164
	ctx.r28.s64 = ctx.r1.s64 + -164;
	// stw r3,-176(r1)
	PPC_STORE_U32(ctx.r1.u32 + -176, ctx.r3.u32);
	// lvlx128 v63,r0,r6
	temp.u32 = ctx.r6.u32;
	_mm_store_si128((__m128i*)ctx.v63.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// mr r30,r7
	ctx.r30.u64 = ctx.r7.u64;
	// addi r7,r11,-1
	ctx.r7.s64 = ctx.r11.s64 + -1;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// lwz r5,108(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + 108);
	// stw r7,-164(r1)
	PPC_STORE_U32(ctx.r1.u32 + -164, ctx.r7.u32);
	// lvlx128 v62,r0,r28
	temp.u32 = ctx.r28.u32;
	_mm_store_si128((__m128i*)ctx.v62.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// li r28,2
	ctx.r28.s64 = 2;
	// vspltw128 v0,v62,0
	_mm_store_si128((__m128i*)ctx.v0.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v62.u32), 0xFF));
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// vspltw128 v13,v63,0
	_mm_store_si128((__m128i*)ctx.v13.u32, _mm_shuffle_epi32(_mm_load_si128((__m128i*)ctx.v63.u32), 0xFF));
	// beq cr6,0x82b088bc
	if (ctx.cr6.eq) goto loc_82B088BC;
	// srawi r6,r4,1
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x1) != 0);
	ctx.r6.s64 = ctx.r4.s32 >> 1;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// b 0x82b088c4
	goto loc_82B088C4;
loc_82B088BC:
	// mr r6,r4
	ctx.r6.u64 = ctx.r4.u64;
	// li r5,1
	ctx.r5.s64 = 1;
loc_82B088C4:
	// rlwinm r10,r30,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r30.u32 | (ctx.r30.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r24,84(r1)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r1.u32 + 84);
	// rlwinm r30,r31,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r31.u32 | (ctx.r31.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r11,0(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + 0);
	// add r26,r10,r29
	ctx.r26.u64 = ctx.r10.u64 + ctx.r29.u64;
	// lwz r4,4(r8)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r8.u32 + 4);
	// lwz r31,8(r8)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r8.u32 + 8);
	// cmpwi cr6,r24,3
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 3, ctx.xer);
	// add r25,r30,r26
	ctx.r25.u64 = ctx.r30.u64 + ctx.r26.u64;
	// stw r5,-168(r1)
	PPC_STORE_U32(ctx.r1.u32 + -168, ctx.r5.u32);
	// stw r6,-172(r1)
	PPC_STORE_U32(ctx.r1.u32 + -172, ctx.r6.u32);
	// add r27,r30,r25
	ctx.r27.u64 = ctx.r30.u64 + ctx.r25.u64;
	// bne cr6,0x82b08904
	if (!ctx.cr6.eq) goto loc_82B08904;
	// lwz r29,12(r8)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r8.u32 + 12);
	// add r15,r30,r27
	ctx.r15.u64 = ctx.r30.u64 + ctx.r27.u64;
	// b 0x82b0890c
	goto loc_82B0890C;
loc_82B08904:
	// lwz r15,-164(r1)
	ctx.r15.u64 = PPC_LOAD_U32(ctx.r1.u32 + -164);
	// lwz r29,-176(r1)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r1.u32 + -176);
loc_82B0890C:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82b08e38
	if (ctx.cr6.eq) goto loc_82B08E38;
	// cmpwi cr6,r24,3
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 3, ctx.xer);
	// bne cr6,0x82b08bfc
	if (!ctx.cr6.eq) goto loc_82B08BFC;
	// addic. r14,r6,-3
	ctx.xer.ca = ctx.r6.u32 > 2;
	ctx.r14.s64 = ctx.r6.s64 + -3;
	ctx.cr0.compare<int32_t>(ctx.r14.s32, 0, ctx.xer);
	// li r17,0
	ctx.r17.s64 = 0;
	// li r16,0
	ctx.r16.s64 = 0;
	// ble 0x82b08ad8
	if (!ctx.cr0.gt) goto loc_82B08AD8;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// mulli r19,r5,12
	ctx.r19.s64 = ctx.r5.s64 * 12;
	// rlwinm r18,r5,3,0,28
	ctx.r18.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r20,r5,2,0,29
	ctx.r20.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// li r30,4
	ctx.r30.s64 = 4;
	// li r9,6
	ctx.r9.s64 = 6;
	// addi r10,r10,-15872
	ctx.r10.s64 = ctx.r10.s64 + -15872;
loc_82B08948:
	// rlwinm r21,r16,2,0,29
	ctx.r21.u64 = __builtin_rotateleft64(ctx.r16.u32 | (ctx.r16.u64 << 32), 2) & 0xFFFFFFFC;
	// lvx128 v63,r0,r10
	simd::store_shuffled(ctx.v63, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// addi r17,r17,4
	ctx.r17.s64 = ctx.r17.s64 + 4;
	// add r24,r21,r15
	ctx.r24.u64 = ctx.r21.u64 + ctx.r15.u64;
	// add r23,r21,r26
	ctx.r23.u64 = ctx.r21.u64 + ctx.r26.u64;
	// add r22,r21,r27
	ctx.r22.u64 = ctx.r21.u64 + ctx.r27.u64;
	// add r21,r21,r25
	ctx.r21.u64 = ctx.r21.u64 + ctx.r25.u64;
	// add r16,r20,r16
	ctx.r16.u64 = ctx.r20.u64 + ctx.r16.u64;
	// lvlx128 v61,r20,r24
	temp.u32 = ctx.r20.u32 + ctx.r24.u32;
	_mm_store_si128((__m128i*)ctx.v61.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// cmpw cr6,r17,r14
	ctx.cr6.compare<int32_t>(ctx.r17.s32, ctx.r14.s32, ctx.xer);
	// lvlx128 v59,r0,r24
	temp.u32 = ctx.r24.u32;
	_mm_store_si128((__m128i*)ctx.v59.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v62,r19,r24
	temp.u32 = ctx.r19.u32 + ctx.r24.u32;
	_mm_store_si128((__m128i*)ctx.v62.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v60,r18,r24
	temp.u32 = ctx.r18.u32 + ctx.r24.u32;
	_mm_store_si128((__m128i*)ctx.v60.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vmrghw128 v62,v61,v62
	_mm_store_si128((__m128i*)ctx.v62.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v62.u32), _mm_load_si128((__m128i*)ctx.v61.u32)));
	// lvlx128 v58,r18,r23
	temp.u32 = ctx.r18.u32 + ctx.r23.u32;
	_mm_store_si128((__m128i*)ctx.v58.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vmrghw128 v60,v59,v60
	_mm_store_si128((__m128i*)ctx.v60.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v60.u32), _mm_load_si128((__m128i*)ctx.v59.u32)));
	// lvlx128 v59,r20,r23
	temp.u32 = ctx.r20.u32 + ctx.r23.u32;
	_mm_store_si128((__m128i*)ctx.v59.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v57,r0,r23
	temp.u32 = ctx.r23.u32;
	_mm_store_si128((__m128i*)ctx.v57.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v61,r19,r23
	temp.u32 = ctx.r19.u32 + ctx.r23.u32;
	_mm_store_si128((__m128i*)ctx.v61.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v56,r20,r22
	temp.u32 = ctx.r20.u32 + ctx.r22.u32;
	_mm_store_si128((__m128i*)ctx.v56.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vmrghw128 v12,v60,v62
	_mm_store_si128((__m128i*)ctx.v12.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v62.u32), _mm_load_si128((__m128i*)ctx.v60.u32)));
	// lvlx128 v62,r18,r22
	temp.u32 = ctx.r18.u32 + ctx.r22.u32;
	_mm_store_si128((__m128i*)ctx.v62.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vmrghw128 v61,v59,v61
	_mm_store_si128((__m128i*)ctx.v61.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v61.u32), _mm_load_si128((__m128i*)ctx.v59.u32)));
	// lvlx128 v59,r19,r22
	temp.u32 = ctx.r19.u32 + ctx.r22.u32;
	_mm_store_si128((__m128i*)ctx.v59.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vmrghw128 v60,v57,v58
	_mm_store_si128((__m128i*)ctx.v60.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v58.u32), _mm_load_si128((__m128i*)ctx.v57.u32)));
	// lvlx128 v58,r0,r22
	temp.u32 = ctx.r22.u32;
	_mm_store_si128((__m128i*)ctx.v58.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vmrghw128 v59,v56,v59
	_mm_store_si128((__m128i*)ctx.v59.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v59.u32), _mm_load_si128((__m128i*)ctx.v56.u32)));
	// lvlx128 v57,r19,r21
	temp.u32 = ctx.r19.u32 + ctx.r21.u32;
	_mm_store_si128((__m128i*)ctx.v57.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vmrghw128 v62,v58,v62
	_mm_store_si128((__m128i*)ctx.v62.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v62.u32), _mm_load_si128((__m128i*)ctx.v58.u32)));
	// lvlx128 v58,r0,r21
	temp.u32 = ctx.r21.u32;
	_mm_store_si128((__m128i*)ctx.v58.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vsraw128 v10,v12,v63
	ctx.v10.s32[0] = ctx.v12.s32[0] >> (ctx.v63.u8[0] & 0x1F);
	ctx.v10.s32[1] = ctx.v12.s32[1] >> (ctx.v63.u8[4] & 0x1F);
	ctx.v10.s32[2] = ctx.v12.s32[2] >> (ctx.v63.u8[8] & 0x1F);
	ctx.v10.s32[3] = ctx.v12.s32[3] >> (ctx.v63.u8[12] & 0x1F);
	// vmrghw128 v9,v60,v61
	_mm_store_si128((__m128i*)ctx.v9.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v61.u32), _mm_load_si128((__m128i*)ctx.v60.u32)));
	// lvlx128 v61,r20,r21
	temp.u32 = ctx.r20.u32 + ctx.r21.u32;
	_mm_store_si128((__m128i*)ctx.v61.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v60,r18,r21
	temp.u32 = ctx.r18.u32 + ctx.r21.u32;
	_mm_store_si128((__m128i*)ctx.v60.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vmrghw128 v11,v62,v59
	_mm_store_si128((__m128i*)ctx.v11.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v59.u32), _mm_load_si128((__m128i*)ctx.v62.u32)));
	// vmrghw128 v61,v61,v57
	_mm_store_si128((__m128i*)ctx.v61.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v57.u32), _mm_load_si128((__m128i*)ctx.v61.u32)));
	// vmrghw128 v62,v58,v60
	_mm_store_si128((__m128i*)ctx.v62.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v60.u32), _mm_load_si128((__m128i*)ctx.v58.u32)));
	// vsubsws v10,v9,v10
	temp.s64 = int64_t(ctx.v9.s32[0]) - int64_t(ctx.v10.s32[0]);
	ctx.v10.s32[0] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v9.s32[1]) - int64_t(ctx.v10.s32[1]);
	ctx.v10.s32[1] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v9.s32[2]) - int64_t(ctx.v10.s32[2]);
	ctx.v10.s32[2] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v9.s32[3]) - int64_t(ctx.v10.s32[3]);
	ctx.v10.s32[3] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	// vsraw128 v7,v11,v63
	ctx.v7.s32[0] = ctx.v11.s32[0] >> (ctx.v63.u8[0] & 0x1F);
	ctx.v7.s32[1] = ctx.v11.s32[1] >> (ctx.v63.u8[4] & 0x1F);
	ctx.v7.s32[2] = ctx.v11.s32[2] >> (ctx.v63.u8[8] & 0x1F);
	ctx.v7.s32[3] = ctx.v11.s32[3] >> (ctx.v63.u8[12] & 0x1F);
	// vmrghw128 v9,v62,v61
	_mm_store_si128((__m128i*)ctx.v9.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v61.u32), _mm_load_si128((__m128i*)ctx.v62.u32)));
	// vaddsws v8,v12,v10
	simd::store_u32(ctx.v8.u32, simd::add_saturate_i32(simd::to_vec128i(ctx.v12), simd::to_vec128i(ctx.v10)));
	// vsubsws v12,v10,v7
	temp.s64 = int64_t(ctx.v10.s32[0]) - int64_t(ctx.v7.s32[0]);
	ctx.v12.s32[0] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v10.s32[1]) - int64_t(ctx.v7.s32[1]);
	ctx.v12.s32[1] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v10.s32[2]) - int64_t(ctx.v7.s32[2]);
	ctx.v12.s32[2] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v10.s32[3]) - int64_t(ctx.v7.s32[3]);
	ctx.v12.s32[3] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	// vsraw128 v10,v9,v63
	ctx.v10.s32[0] = ctx.v9.s32[0] >> (ctx.v63.u8[0] & 0x1F);
	ctx.v10.s32[1] = ctx.v9.s32[1] >> (ctx.v63.u8[4] & 0x1F);
	ctx.v10.s32[2] = ctx.v9.s32[2] >> (ctx.v63.u8[8] & 0x1F);
	ctx.v10.s32[3] = ctx.v9.s32[3] >> (ctx.v63.u8[12] & 0x1F);
	// vmaxsw v8,v8,v13
	_mm_store_si128((__m128i*)ctx.v8.u32, _mm_max_epi32(_mm_load_si128((__m128i*)ctx.v8.u32), _mm_load_si128((__m128i*)ctx.v13.u32)));
	// vsubsws v10,v12,v10
	temp.s64 = int64_t(ctx.v12.s32[0]) - int64_t(ctx.v10.s32[0]);
	ctx.v10.s32[0] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v12.s32[1]) - int64_t(ctx.v10.s32[1]);
	ctx.v10.s32[1] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v12.s32[2]) - int64_t(ctx.v10.s32[2]);
	ctx.v10.s32[2] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v12.s32[3]) - int64_t(ctx.v10.s32[3]);
	ctx.v10.s32[3] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	// vaddsws v12,v11,v12
	simd::store_u32(ctx.v12.u32, simd::add_saturate_i32(simd::to_vec128i(ctx.v11), simd::to_vec128i(ctx.v12)));
	// vminsw v8,v8,v0
	ctx.fpscr.enableFlushMode();
	ctx.v8.v128 = simd::min_i32(ctx.v8.v128, ctx.v0.v128);
	// vaddsws v11,v10,v9
	simd::store_u32(ctx.v11.u32, simd::add_saturate_i32(simd::to_vec128i(ctx.v10), simd::to_vec128i(ctx.v9)));
	// vmaxsw v12,v12,v13
	_mm_store_si128((__m128i*)ctx.v12.u32, _mm_max_epi32(_mm_load_si128((__m128i*)ctx.v12.u32), _mm_load_si128((__m128i*)ctx.v13.u32)));
	// vmaxsw v10,v10,v13
	_mm_store_si128((__m128i*)ctx.v10.u32, _mm_max_epi32(_mm_load_si128((__m128i*)ctx.v10.u32), _mm_load_si128((__m128i*)ctx.v13.u32)));
	// vmaxsw v11,v11,v13
	_mm_store_si128((__m128i*)ctx.v11.u32, _mm_max_epi32(_mm_load_si128((__m128i*)ctx.v11.u32), _mm_load_si128((__m128i*)ctx.v13.u32)));
	// vminsw v12,v12,v0
	ctx.v12.v128 = simd::min_i32(ctx.v12.v128, ctx.v0.v128);
	// vminsw v10,v10,v0
	ctx.v10.v128 = simd::min_i32(ctx.v10.v128, ctx.v0.v128);
	// vminsw v11,v11,v0
	ctx.v11.v128 = simd::min_i32(ctx.v11.v128, ctx.v0.v128);
	// vpkshss v12,v12,v12
	_mm_store_si128((__m128i*)ctx.v12.s8, _mm_packs_epi16(_mm_load_si128((__m128i*)ctx.v12.s16), _mm_load_si128((__m128i*)ctx.v12.s16)));
	// vpkshss v11,v11,v11
	_mm_store_si128((__m128i*)ctx.v11.s8, _mm_packs_epi16(_mm_load_si128((__m128i*)ctx.v11.s16), _mm_load_si128((__m128i*)ctx.v11.s16)));
	// vsplth v9,v12,0
	_mm_store_si128((__m128i*)ctx.v9.u16, _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v12.u16), _mm_set1_epi16(short(0xF0E))));
	// vsplth v7,v12,1
	_mm_store_si128((__m128i*)ctx.v7.u16, _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v12.u16), _mm_set1_epi16(short(0xD0C))));
	// vsplth v6,v12,2
	_mm_store_si128((__m128i*)ctx.v6.u16, _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v12.u16), _mm_set1_epi16(short(0xB0A))));
	// vsplth v5,v11,0
	_mm_store_si128((__m128i*)ctx.v5.u16, _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v11.u16), _mm_set1_epi16(short(0xF0E))));
	// vsplth v4,v11,1
	_mm_store_si128((__m128i*)ctx.v4.u16, _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v11.u16), _mm_set1_epi16(short(0xD0C))));
	// vsplth v1,v12,3
	_mm_store_si128((__m128i*)ctx.v1.u16, _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v12.u16), _mm_set1_epi16(short(0x908))));
	// vsplth v3,v11,2
	_mm_store_si128((__m128i*)ctx.v3.u16, _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v11.u16), _mm_set1_epi16(short(0xB0A))));
	// vpkshss v12,v10,v10
	_mm_store_si128((__m128i*)ctx.v12.s8, _mm_packs_epi16(_mm_load_si128((__m128i*)ctx.v10.s16), _mm_load_si128((__m128i*)ctx.v10.s16)));
	// vsplth v2,v11,3
	_mm_store_si128((__m128i*)ctx.v2.u16, _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v11.u16), _mm_set1_epi16(short(0x908))));
	// vpkshss v11,v8,v8
	_mm_store_si128((__m128i*)ctx.v11.s8, _mm_packs_epi16(_mm_load_si128((__m128i*)ctx.v8.s16), _mm_load_si128((__m128i*)ctx.v8.s16)));
	// stvehx v5,r0,r11
	ea = (ctx.r11.u32) & ~0x1;
	PPC_STORE_U16(ea, ctx.v5.u16[7 - ((ea & 0xF) >> 1)]);
	// vsplth v10,v12,0
	_mm_store_si128((__m128i*)ctx.v10.u16, _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v12.u16), _mm_set1_epi16(short(0xF0E))));
	// stvehx v4,r11,r28
	ea = (ctx.r11.u32 + ctx.r28.u32) & ~0x1;
	PPC_STORE_U16(ea, ctx.v4.u16[7 - ((ea & 0xF) >> 1)]);
	// vsplth v8,v12,1
	_mm_store_si128((__m128i*)ctx.v8.u16, _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v12.u16), _mm_set1_epi16(short(0xD0C))));
	// stvehx v3,r11,r30
	ea = (ctx.r11.u32 + ctx.r30.u32) & ~0x1;
	PPC_STORE_U16(ea, ctx.v3.u16[7 - ((ea & 0xF) >> 1)]);
	// stvehx v2,r11,r9
	ea = (ctx.r11.u32 + ctx.r9.u32) & ~0x1;
	PPC_STORE_U16(ea, ctx.v2.u16[7 - ((ea & 0xF) >> 1)]);
	// stvehx v9,r0,r4
	ea = (ctx.r4.u32) & ~0x1;
	PPC_STORE_U16(ea, ctx.v9.u16[7 - ((ea & 0xF) >> 1)]);
	// vsplth v9,v12,2
	_mm_store_si128((__m128i*)ctx.v9.u16, _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v12.u16), _mm_set1_epi16(short(0xB0A))));
	// stvehx v7,r4,r28
	ea = (ctx.r4.u32 + ctx.r28.u32) & ~0x1;
	PPC_STORE_U16(ea, ctx.v7.u16[7 - ((ea & 0xF) >> 1)]);
	// vsplth v12,v12,3
	_mm_store_si128((__m128i*)ctx.v12.u16, _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v12.u16), _mm_set1_epi16(short(0x908))));
	// stvehx v6,r4,r30
	ea = (ctx.r4.u32 + ctx.r30.u32) & ~0x1;
	PPC_STORE_U16(ea, ctx.v6.u16[7 - ((ea & 0xF) >> 1)]);
	// vsplth v7,v11,0
	_mm_store_si128((__m128i*)ctx.v7.u16, _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v11.u16), _mm_set1_epi16(short(0xF0E))));
	// stvehx v1,r4,r9
	ea = (ctx.r4.u32 + ctx.r9.u32) & ~0x1;
	PPC_STORE_U16(ea, ctx.v1.u16[7 - ((ea & 0xF) >> 1)]);
	// stvehx v10,r0,r31
	ea = (ctx.r31.u32) & ~0x1;
	PPC_STORE_U16(ea, ctx.v10.u16[7 - ((ea & 0xF) >> 1)]);
	// vsplth v10,v11,1
	_mm_store_si128((__m128i*)ctx.v10.u16, _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v11.u16), _mm_set1_epi16(short(0xD0C))));
	// stvehx v8,r31,r28
	ea = (ctx.r31.u32 + ctx.r28.u32) & ~0x1;
	PPC_STORE_U16(ea, ctx.v8.u16[7 - ((ea & 0xF) >> 1)]);
	// vsplth v8,v11,2
	_mm_store_si128((__m128i*)ctx.v8.u16, _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v11.u16), _mm_set1_epi16(short(0xB0A))));
	// vsplth v11,v11,3
	_mm_store_si128((__m128i*)ctx.v11.u16, _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v11.u16), _mm_set1_epi16(short(0x908))));
	// stvehx v9,r31,r30
	ea = (ctx.r31.u32 + ctx.r30.u32) & ~0x1;
	PPC_STORE_U16(ea, ctx.v9.u16[7 - ((ea & 0xF) >> 1)]);
	// stvehx v12,r31,r9
	ea = (ctx.r31.u32 + ctx.r9.u32) & ~0x1;
	PPC_STORE_U16(ea, ctx.v12.u16[7 - ((ea & 0xF) >> 1)]);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// stvehx v7,r0,r29
	ea = (ctx.r29.u32) & ~0x1;
	PPC_STORE_U16(ea, ctx.v7.u16[7 - ((ea & 0xF) >> 1)]);
	// addi r4,r4,8
	ctx.r4.s64 = ctx.r4.s64 + 8;
	// stvehx v10,r29,r28
	ea = (ctx.r29.u32 + ctx.r28.u32) & ~0x1;
	PPC_STORE_U16(ea, ctx.v10.u16[7 - ((ea & 0xF) >> 1)]);
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// stvehx v8,r29,r30
	ea = (ctx.r29.u32 + ctx.r30.u32) & ~0x1;
	PPC_STORE_U16(ea, ctx.v8.u16[7 - ((ea & 0xF) >> 1)]);
	// stvehx v11,r29,r9
	ea = (ctx.r29.u32 + ctx.r9.u32) & ~0x1;
	PPC_STORE_U16(ea, ctx.v11.u16[7 - ((ea & 0xF) >> 1)]);
	// addi r29,r29,8
	ctx.r29.s64 = ctx.r29.s64 + 8;
	// blt cr6,0x82b08948
	if (ctx.cr6.lt) goto loc_82B08948;
	// lwz r5,-168(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + -168);
	// lwz r6,-172(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + -172);
	// lwz r3,-176(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + -176);
	// lwz r7,-164(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + -164);
	// lwz r8,60(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 60);
loc_82B08AD8:
	// cmpw cr6,r17,r6
	ctx.cr6.compare<int32_t>(ctx.r17.s32, ctx.r6.s32, ctx.xer);
	// bge cr6,0x82b093c8
	if (!ctx.cr6.lt) goto loc_82B093C8;
	// subf r10,r17,r6
	ctx.r10.s64 = ctx.r6.s64 - ctx.r17.s64;
	// rlwinm r9,r16,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r16.u32 | (ctx.r16.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r28,r27,r15
	ctx.r28.s64 = ctx.r15.s64 - ctx.r27.s64;
	// subf r25,r27,r25
	ctx.r25.s64 = ctx.r25.s64 - ctx.r27.s64;
	// add r9,r9,r26
	ctx.r9.u64 = ctx.r9.u64 + ctx.r26.u64;
	// subf r27,r26,r27
	ctx.r27.s64 = ctx.r27.s64 - ctx.r26.s64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// addi r23,r29,-2
	ctx.r23.s64 = ctx.r29.s64 + -2;
	// rlwinm r22,r5,2,0,29
	ctx.r22.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r29,r31,-2
	ctx.r29.s64 = ctx.r31.s64 + -2;
	// addi r26,r4,-2
	ctx.r26.s64 = ctx.r4.s64 + -2;
	// addi r24,r11,-2
	ctx.r24.s64 = ctx.r11.s64 + -2;
loc_82B08B10:
	// add r11,r27,r9
	ctx.r11.u64 = ctx.r27.u64 + ctx.r9.u64;
	// lwz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lwzx r4,r11,r28
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r28.u32);
	// srawi r4,r4,1
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x1) != 0);
	ctx.r4.s64 = ctx.r4.s32 >> 1;
	// subf r10,r4,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r4.s64;
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// rotlwi r4,r10,0
	ctx.r4.u64 = __builtin_rotateleft32(ctx.r10.u32, 0);
	// lwzx r30,r11,r28
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r28.u32);
	// lwzx r10,r27,r9
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r9.u32);
	// srawi r10,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 1;
	// subf r31,r10,r4
	ctx.r31.s64 = ctx.r4.s64 - ctx.r10.s64;
	// add r30,r4,r30
	ctx.r30.u64 = ctx.r4.u64 + ctx.r30.u64;
	// stw r31,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r31.u32);
	// rotlwi r10,r31,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r31.u32, 0);
	// lwzx r4,r27,r9
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r27.u32 + ctx.r9.u32);
	// lwzx r11,r11,r25
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r25.u32);
	// srawi r21,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r21.s64 = ctx.r11.s32 >> 1;
	// subf r10,r21,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r21.s64;
	// add r4,r31,r4
	ctx.r4.u64 = ctx.r31.u64 + ctx.r4.u64;
	// add r11,r11,r10
	ctx.r11.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmpw cr6,r11,r7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r7.s32, ctx.xer);
	// ble cr6,0x82b08b70
	if (!ctx.cr6.gt) goto loc_82B08B70;
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// b 0x82b08b7c
	goto loc_82B08B7C;
loc_82B08B70:
	// cmpw cr6,r11,r3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r3.s32, ctx.xer);
	// bge cr6,0x82b08b7c
	if (!ctx.cr6.lt) goto loc_82B08B7C;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_82B08B7C:
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// mr r11,r4
	ctx.r11.u64 = ctx.r4.u64;
	// sthu r31,2(r24)
	ea = 2 + ctx.r24.u32;
	PPC_STORE_U16(ea, ctx.r31.u16);
	ctx.r24.u32 = ea;
	// cmpw cr6,r4,r7
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r7.s32, ctx.xer);
	// ble cr6,0x82b08b98
	if (!ctx.cr6.gt) goto loc_82B08B98;
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// b 0x82b08ba4
	goto loc_82B08BA4;
loc_82B08B98:
	// cmpw cr6,r4,r3
	ctx.cr6.compare<int32_t>(ctx.r4.s32, ctx.r3.s32, ctx.xer);
	// bge cr6,0x82b08ba4
	if (!ctx.cr6.lt) goto loc_82B08BA4;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_82B08BA4:
	// sthu r11,2(r26)
	ea = 2 + ctx.r26.u32;
	PPC_STORE_U16(ea, ctx.r11.u16);
	ctx.r26.u32 = ea;
	// cmpw cr6,r10,r7
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r7.s32, ctx.xer);
	// ble cr6,0x82b08bb8
	if (!ctx.cr6.gt) goto loc_82B08BB8;
	// mr r10,r7
	ctx.r10.u64 = ctx.r7.u64;
	// b 0x82b08bc4
	goto loc_82B08BC4;
loc_82B08BB8:
	// cmpw cr6,r10,r3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r3.s32, ctx.xer);
	// bge cr6,0x82b08bc4
	if (!ctx.cr6.lt) goto loc_82B08BC4;
	// mr r10,r3
	ctx.r10.u64 = ctx.r3.u64;
loc_82B08BC4:
	// mr r11,r30
	ctx.r11.u64 = ctx.r30.u64;
	// sthu r10,2(r29)
	ea = 2 + ctx.r29.u32;
	PPC_STORE_U16(ea, ctx.r10.u16);
	ctx.r29.u32 = ea;
	// cmpw cr6,r30,r7
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r7.s32, ctx.xer);
	// ble cr6,0x82b08bdc
	if (!ctx.cr6.gt) goto loc_82B08BDC;
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// b 0x82b08be8
	goto loc_82B08BE8;
loc_82B08BDC:
	// cmpw cr6,r30,r3
	ctx.cr6.compare<int32_t>(ctx.r30.s32, ctx.r3.s32, ctx.xer);
	// bge cr6,0x82b08be8
	if (!ctx.cr6.lt) goto loc_82B08BE8;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_82B08BE8:
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// add r9,r22,r9
	ctx.r9.u64 = ctx.r22.u64 + ctx.r9.u64;
	// sthu r11,2(r23)
	ea = 2 + ctx.r23.u32;
	PPC_STORE_U16(ea, ctx.r11.u16);
	ctx.r23.u32 = ea;
	// bdnz 0x82b08b10
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82B08B10;
	// b 0x82b093c8
	goto loc_82B093C8;
loc_82B08BFC:
	// addic. r17,r6,-3
	ctx.xer.ca = ctx.r6.u32 > 2;
	ctx.r17.s64 = ctx.r6.s64 + -3;
	ctx.cr0.compare<int32_t>(ctx.r17.s32, 0, ctx.xer);
	// li r21,0
	ctx.r21.s64 = 0;
	// li r20,0
	ctx.r20.s64 = 0;
	// ble 0x82b08d58
	if (!ctx.cr0.gt) goto loc_82B08D58;
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// mulli r19,r5,12
	ctx.r19.s64 = ctx.r5.s64 * 12;
	// rlwinm r18,r5,3,0,28
	ctx.r18.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r22,r5,2,0,29
	ctx.r22.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// li r30,4
	ctx.r30.s64 = 4;
	// li r9,6
	ctx.r9.s64 = 6;
	// addi r10,r10,-15872
	ctx.r10.s64 = ctx.r10.s64 + -15872;
loc_82B08C28:
	// rlwinm r23,r20,2,0,29
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r20.u32 | (ctx.r20.u64 << 32), 2) & 0xFFFFFFFC;
	// lvx128 v63,r0,r10
	simd::store_shuffled(ctx.v63, simd::load_and_shuffle(base + ((ctx.r10.u32) & ~0xF), VectorMaskL));
	// addi r21,r21,4
	ctx.r21.s64 = ctx.r21.s64 + 4;
	// add r29,r23,r27
	ctx.r29.u64 = ctx.r23.u64 + ctx.r27.u64;
	// add r24,r23,r26
	ctx.r24.u64 = ctx.r23.u64 + ctx.r26.u64;
	// add r23,r23,r25
	ctx.r23.u64 = ctx.r23.u64 + ctx.r25.u64;
	// add r20,r22,r20
	ctx.r20.u64 = ctx.r22.u64 + ctx.r20.u64;
	// cmpw cr6,r21,r17
	ctx.cr6.compare<int32_t>(ctx.r21.s32, ctx.r17.s32, ctx.xer);
	// lvlx128 v61,r22,r29
	temp.u32 = ctx.r22.u32 + ctx.r29.u32;
	_mm_store_si128((__m128i*)ctx.v61.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v59,r0,r29
	temp.u32 = ctx.r29.u32;
	_mm_store_si128((__m128i*)ctx.v59.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v62,r19,r29
	temp.u32 = ctx.r19.u32 + ctx.r29.u32;
	_mm_store_si128((__m128i*)ctx.v62.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v60,r18,r29
	temp.u32 = ctx.r18.u32 + ctx.r29.u32;
	_mm_store_si128((__m128i*)ctx.v60.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vmrghw128 v62,v61,v62
	_mm_store_si128((__m128i*)ctx.v62.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v62.u32), _mm_load_si128((__m128i*)ctx.v61.u32)));
	// lvlx128 v58,r18,r24
	temp.u32 = ctx.r18.u32 + ctx.r24.u32;
	_mm_store_si128((__m128i*)ctx.v58.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vmrghw128 v60,v59,v60
	_mm_store_si128((__m128i*)ctx.v60.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v60.u32), _mm_load_si128((__m128i*)ctx.v59.u32)));
	// lvlx128 v59,r22,r24
	temp.u32 = ctx.r22.u32 + ctx.r24.u32;
	_mm_store_si128((__m128i*)ctx.v59.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v61,r19,r24
	temp.u32 = ctx.r19.u32 + ctx.r24.u32;
	_mm_store_si128((__m128i*)ctx.v61.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v57,r0,r24
	temp.u32 = ctx.r24.u32;
	_mm_store_si128((__m128i*)ctx.v57.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vmrghw128 v61,v59,v61
	_mm_store_si128((__m128i*)ctx.v61.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v61.u32), _mm_load_si128((__m128i*)ctx.v59.u32)));
	// lvlx128 v59,r19,r23
	temp.u32 = ctx.r19.u32 + ctx.r23.u32;
	_mm_store_si128((__m128i*)ctx.v59.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vmrghw128 v12,v60,v62
	_mm_store_si128((__m128i*)ctx.v12.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v62.u32), _mm_load_si128((__m128i*)ctx.v60.u32)));
	// lvlx128 v56,r22,r23
	temp.u32 = ctx.r22.u32 + ctx.r23.u32;
	_mm_store_si128((__m128i*)ctx.v56.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vmrghw128 v60,v57,v58
	_mm_store_si128((__m128i*)ctx.v60.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v58.u32), _mm_load_si128((__m128i*)ctx.v57.u32)));
	// lvlx128 v62,r18,r23
	temp.u32 = ctx.r18.u32 + ctx.r23.u32;
	_mm_store_si128((__m128i*)ctx.v62.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v58,r0,r23
	temp.u32 = ctx.r23.u32;
	_mm_store_si128((__m128i*)ctx.v58.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vmrghw128 v59,v56,v59
	_mm_store_si128((__m128i*)ctx.v59.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v59.u32), _mm_load_si128((__m128i*)ctx.v56.u32)));
	// vmrghw128 v62,v58,v62
	_mm_store_si128((__m128i*)ctx.v62.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v62.u32), _mm_load_si128((__m128i*)ctx.v58.u32)));
	// vsraw128 v10,v12,v63
	ctx.v10.s32[0] = ctx.v12.s32[0] >> (ctx.v63.u8[0] & 0x1F);
	ctx.v10.s32[1] = ctx.v12.s32[1] >> (ctx.v63.u8[4] & 0x1F);
	ctx.v10.s32[2] = ctx.v12.s32[2] >> (ctx.v63.u8[8] & 0x1F);
	ctx.v10.s32[3] = ctx.v12.s32[3] >> (ctx.v63.u8[12] & 0x1F);
	// vmrghw128 v9,v60,v61
	_mm_store_si128((__m128i*)ctx.v9.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v61.u32), _mm_load_si128((__m128i*)ctx.v60.u32)));
	// vmrghw128 v11,v62,v59
	_mm_store_si128((__m128i*)ctx.v11.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v59.u32), _mm_load_si128((__m128i*)ctx.v62.u32)));
	// vsubsws v10,v9,v10
	temp.s64 = int64_t(ctx.v9.s32[0]) - int64_t(ctx.v10.s32[0]);
	ctx.v10.s32[0] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v9.s32[1]) - int64_t(ctx.v10.s32[1]);
	ctx.v10.s32[1] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v9.s32[2]) - int64_t(ctx.v10.s32[2]);
	ctx.v10.s32[2] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v9.s32[3]) - int64_t(ctx.v10.s32[3]);
	ctx.v10.s32[3] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	// vsraw128 v9,v11,v63
	ctx.v9.s32[0] = ctx.v11.s32[0] >> (ctx.v63.u8[0] & 0x1F);
	ctx.v9.s32[1] = ctx.v11.s32[1] >> (ctx.v63.u8[4] & 0x1F);
	ctx.v9.s32[2] = ctx.v11.s32[2] >> (ctx.v63.u8[8] & 0x1F);
	ctx.v9.s32[3] = ctx.v11.s32[3] >> (ctx.v63.u8[12] & 0x1F);
	// vaddsws v12,v12,v10
	simd::store_u32(ctx.v12.u32, simd::add_saturate_i32(simd::to_vec128i(ctx.v12), simd::to_vec128i(ctx.v10)));
	// vsubsws v9,v10,v9
	temp.s64 = int64_t(ctx.v10.s32[0]) - int64_t(ctx.v9.s32[0]);
	ctx.v9.s32[0] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v10.s32[1]) - int64_t(ctx.v9.s32[1]);
	ctx.v9.s32[1] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v10.s32[2]) - int64_t(ctx.v9.s32[2]);
	ctx.v9.s32[2] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v10.s32[3]) - int64_t(ctx.v9.s32[3]);
	ctx.v9.s32[3] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	// vmaxsw v12,v12,v13
	_mm_store_si128((__m128i*)ctx.v12.u32, _mm_max_epi32(_mm_load_si128((__m128i*)ctx.v12.u32), _mm_load_si128((__m128i*)ctx.v13.u32)));
	// vaddsws v11,v9,v11
	simd::store_u32(ctx.v11.u32, simd::add_saturate_i32(simd::to_vec128i(ctx.v9), simd::to_vec128i(ctx.v11)));
	// vminsw v12,v12,v0
	ctx.fpscr.enableFlushMode();
	ctx.v12.v128 = simd::min_i32(ctx.v12.v128, ctx.v0.v128);
	// vmaxsw v10,v9,v13
	_mm_store_si128((__m128i*)ctx.v10.u32, _mm_max_epi32(_mm_load_si128((__m128i*)ctx.v9.u32), _mm_load_si128((__m128i*)ctx.v13.u32)));
	// vmaxsw v11,v11,v13
	_mm_store_si128((__m128i*)ctx.v11.u32, _mm_max_epi32(_mm_load_si128((__m128i*)ctx.v11.u32), _mm_load_si128((__m128i*)ctx.v13.u32)));
	// vpkshss v12,v12,v12
	_mm_store_si128((__m128i*)ctx.v12.s8, _mm_packs_epi16(_mm_load_si128((__m128i*)ctx.v12.s16), _mm_load_si128((__m128i*)ctx.v12.s16)));
	// vminsw v10,v10,v0
	ctx.v10.v128 = simd::min_i32(ctx.v10.v128, ctx.v0.v128);
	// vminsw v11,v11,v0
	ctx.v11.v128 = simd::min_i32(ctx.v11.v128, ctx.v0.v128);
	// vsplth v9,v12,0
	_mm_store_si128((__m128i*)ctx.v9.u16, _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v12.u16), _mm_set1_epi16(short(0xF0E))));
	// vsplth v8,v12,1
	_mm_store_si128((__m128i*)ctx.v8.u16, _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v12.u16), _mm_set1_epi16(short(0xD0C))));
	// vsplth v7,v12,2
	_mm_store_si128((__m128i*)ctx.v7.u16, _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v12.u16), _mm_set1_epi16(short(0xB0A))));
	// vpkshss v11,v11,v11
	_mm_store_si128((__m128i*)ctx.v11.s8, _mm_packs_epi16(_mm_load_si128((__m128i*)ctx.v11.s16), _mm_load_si128((__m128i*)ctx.v11.s16)));
	// vsplth v6,v12,3
	_mm_store_si128((__m128i*)ctx.v6.u16, _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v12.u16), _mm_set1_epi16(short(0x908))));
	// vpkshss v12,v10,v10
	_mm_store_si128((__m128i*)ctx.v12.s8, _mm_packs_epi16(_mm_load_si128((__m128i*)ctx.v10.s16), _mm_load_si128((__m128i*)ctx.v10.s16)));
	// vsplth v10,v11,0
	_mm_store_si128((__m128i*)ctx.v10.u16, _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v11.u16), _mm_set1_epi16(short(0xF0E))));
	// vsplth v5,v11,1
	_mm_store_si128((__m128i*)ctx.v5.u16, _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v11.u16), _mm_set1_epi16(short(0xD0C))));
	// vsplth v4,v11,2
	_mm_store_si128((__m128i*)ctx.v4.u16, _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v11.u16), _mm_set1_epi16(short(0xB0A))));
	// vsplth v11,v11,3
	_mm_store_si128((__m128i*)ctx.v11.u16, _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v11.u16), _mm_set1_epi16(short(0x908))));
	// vsplth v3,v12,0
	_mm_store_si128((__m128i*)ctx.v3.u16, _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v12.u16), _mm_set1_epi16(short(0xF0E))));
	// vsplth v2,v12,1
	_mm_store_si128((__m128i*)ctx.v2.u16, _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v12.u16), _mm_set1_epi16(short(0xD0C))));
	// vsplth v1,v12,2
	_mm_store_si128((__m128i*)ctx.v1.u16, _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v12.u16), _mm_set1_epi16(short(0xB0A))));
	// stvehx v10,r0,r11
	ea = (ctx.r11.u32) & ~0x1;
	PPC_STORE_U16(ea, ctx.v10.u16[7 - ((ea & 0xF) >> 1)]);
	// vsplth v12,v12,3
	_mm_store_si128((__m128i*)ctx.v12.u16, _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v12.u16), _mm_set1_epi16(short(0x908))));
	// stvehx v5,r11,r28
	ea = (ctx.r11.u32 + ctx.r28.u32) & ~0x1;
	PPC_STORE_U16(ea, ctx.v5.u16[7 - ((ea & 0xF) >> 1)]);
	// stvehx v4,r11,r30
	ea = (ctx.r11.u32 + ctx.r30.u32) & ~0x1;
	PPC_STORE_U16(ea, ctx.v4.u16[7 - ((ea & 0xF) >> 1)]);
	// stvehx v11,r11,r9
	ea = (ctx.r11.u32 + ctx.r9.u32) & ~0x1;
	PPC_STORE_U16(ea, ctx.v11.u16[7 - ((ea & 0xF) >> 1)]);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// stvehx v9,r0,r4
	ea = (ctx.r4.u32) & ~0x1;
	PPC_STORE_U16(ea, ctx.v9.u16[7 - ((ea & 0xF) >> 1)]);
	// stvehx v8,r4,r28
	ea = (ctx.r4.u32 + ctx.r28.u32) & ~0x1;
	PPC_STORE_U16(ea, ctx.v8.u16[7 - ((ea & 0xF) >> 1)]);
	// stvehx v7,r4,r30
	ea = (ctx.r4.u32 + ctx.r30.u32) & ~0x1;
	PPC_STORE_U16(ea, ctx.v7.u16[7 - ((ea & 0xF) >> 1)]);
	// stvehx v6,r4,r9
	ea = (ctx.r4.u32 + ctx.r9.u32) & ~0x1;
	PPC_STORE_U16(ea, ctx.v6.u16[7 - ((ea & 0xF) >> 1)]);
	// addi r4,r4,8
	ctx.r4.s64 = ctx.r4.s64 + 8;
	// stvehx v3,r0,r31
	ea = (ctx.r31.u32) & ~0x1;
	PPC_STORE_U16(ea, ctx.v3.u16[7 - ((ea & 0xF) >> 1)]);
	// stvehx v2,r31,r28
	ea = (ctx.r31.u32 + ctx.r28.u32) & ~0x1;
	PPC_STORE_U16(ea, ctx.v2.u16[7 - ((ea & 0xF) >> 1)]);
	// stvehx v1,r31,r30
	ea = (ctx.r31.u32 + ctx.r30.u32) & ~0x1;
	PPC_STORE_U16(ea, ctx.v1.u16[7 - ((ea & 0xF) >> 1)]);
	// stvehx v12,r31,r9
	ea = (ctx.r31.u32 + ctx.r9.u32) & ~0x1;
	PPC_STORE_U16(ea, ctx.v12.u16[7 - ((ea & 0xF) >> 1)]);
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// blt cr6,0x82b08c28
	if (ctx.cr6.lt) goto loc_82B08C28;
	// lwz r8,60(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 60);
	// lwz r3,-176(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + -176);
	// lwz r6,-172(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + -172);
	// lwz r5,-168(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + -168);
loc_82B08D58:
	// cmpw cr6,r21,r6
	ctx.cr6.compare<int32_t>(ctx.r21.s32, ctx.r6.s32, ctx.xer);
	// bge cr6,0x82b093c8
	if (!ctx.cr6.lt) goto loc_82B093C8;
	// subf r10,r21,r6
	ctx.r10.s64 = ctx.r6.s64 - ctx.r21.s64;
	// rlwinm r9,r20,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r20.u32 | (ctx.r20.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r29,r25,r27
	ctx.r29.s64 = ctx.r27.s64 - ctx.r25.s64;
	// subf r30,r25,r26
	ctx.r30.s64 = ctx.r26.s64 - ctx.r25.s64;
	// add r9,r9,r25
	ctx.r9.u64 = ctx.r9.u64 + ctx.r25.u64;
	// rlwinm r24,r5,2,0,29
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// addi r26,r31,-2
	ctx.r26.s64 = ctx.r31.s64 + -2;
	// addi r28,r4,-2
	ctx.r28.s64 = ctx.r4.s64 + -2;
	// addi r27,r11,-2
	ctx.r27.s64 = ctx.r11.s64 + -2;
loc_82B08D88:
	// lwzx r11,r9,r29
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r29.u32);
	// lwzx r10,r9,r30
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r30.u32);
	// srawi r11,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 1;
	// subf r4,r11,r10
	ctx.r4.s64 = ctx.r10.s64 - ctx.r11.s64;
	// stwx r4,r9,r30
	PPC_STORE_U32(ctx.r9.u32 + ctx.r30.u32, ctx.r4.u32);
	// rotlwi r10,r4,0
	ctx.r10.u64 = __builtin_rotateleft32(ctx.r4.u32, 0);
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// srawi r31,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r31.s64 = ctx.r11.s32 >> 1;
	// subf r31,r31,r10
	ctx.r31.s64 = ctx.r10.s64 - ctx.r31.s64;
	// lwzx r10,r9,r29
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + ctx.r29.u32);
	// add r10,r10,r4
	ctx.r10.u64 = ctx.r10.u64 + ctx.r4.u64;
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// cmpw cr6,r11,r7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r7.s32, ctx.xer);
	// ble cr6,0x82b08dc8
	if (!ctx.cr6.gt) goto loc_82B08DC8;
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// b 0x82b08dd4
	goto loc_82B08DD4;
loc_82B08DC8:
	// cmpw cr6,r11,r3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r3.s32, ctx.xer);
	// bge cr6,0x82b08dd4
	if (!ctx.cr6.lt) goto loc_82B08DD4;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_82B08DD4:
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// mr r11,r10
	ctx.r11.u64 = ctx.r10.u64;
	// sthu r4,2(r27)
	ea = 2 + ctx.r27.u32;
	PPC_STORE_U16(ea, ctx.r4.u16);
	ctx.r27.u32 = ea;
	// cmpw cr6,r10,r7
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r7.s32, ctx.xer);
	// ble cr6,0x82b08df0
	if (!ctx.cr6.gt) goto loc_82B08DF0;
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// b 0x82b08dfc
	goto loc_82B08DFC;
loc_82B08DF0:
	// cmpw cr6,r10,r3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, ctx.r3.s32, ctx.xer);
	// bge cr6,0x82b08dfc
	if (!ctx.cr6.lt) goto loc_82B08DFC;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_82B08DFC:
	// mr r10,r11
	ctx.r10.u64 = ctx.r11.u64;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// sthu r10,2(r28)
	ea = 2 + ctx.r28.u32;
	PPC_STORE_U16(ea, ctx.r10.u16);
	ctx.r28.u32 = ea;
	// cmpw cr6,r31,r7
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r7.s32, ctx.xer);
	// ble cr6,0x82b08e18
	if (!ctx.cr6.gt) goto loc_82B08E18;
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// b 0x82b08e24
	goto loc_82B08E24;
loc_82B08E18:
	// cmpw cr6,r31,r3
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r3.s32, ctx.xer);
	// bge cr6,0x82b08e24
	if (!ctx.cr6.lt) goto loc_82B08E24;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_82B08E24:
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// add r9,r9,r24
	ctx.r9.u64 = ctx.r9.u64 + ctx.r24.u64;
	// sthu r11,2(r26)
	ea = 2 + ctx.r26.u32;
	PPC_STORE_U16(ea, ctx.r11.u16);
	ctx.r26.u32 = ea;
	// bdnz 0x82b08d88
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82B08D88;
	// b 0x82b093c8
	goto loc_82B093C8;
loc_82B08E38:
	// lis r10,-32242
	ctx.r10.s64 = -2113011712;
	// li r9,32
	ctx.r9.s64 = 32;
	// addi r14,r10,-15872
	ctx.r14.s64 = ctx.r10.s64 + -15872;
	// li r10,16
	ctx.r10.s64 = 16;
	// cmpwi cr6,r24,3
	ctx.cr6.compare<int32_t>(ctx.r24.s32, 3, ctx.xer);
	// lvx128 v12,r14,r9
	simd::store_shuffled(ctx.v12, simd::load_and_shuffle(base + ((ctx.r14.u32 + ctx.r9.u32) & ~0xF), VectorMaskL));
	// lvx128 v63,r14,r10
	simd::store_shuffled(ctx.v63, simd::load_and_shuffle(base + ((ctx.r14.u32 + ctx.r10.u32) & ~0xF), VectorMaskL));
	// addic. r10,r6,-3
	ctx.xer.ca = ctx.r6.u32 > 2;
	ctx.r10.s64 = ctx.r6.s64 + -3;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne cr6,0x82b09170
	if (!ctx.cr6.eq) goto loc_82B09170;
	// li r17,0
	ctx.r17.s64 = 0;
	// li r16,0
	ctx.r16.s64 = 0;
	// ble 0x82b0902c
	if (!ctx.cr0.gt) goto loc_82B0902C;
	// mulli r19,r5,12
	ctx.r19.s64 = ctx.r5.s64 * 12;
	// rlwinm r18,r5,3,0,28
	ctx.r18.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r24,r5,2,0,29
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// li r30,4
	ctx.r30.s64 = 4;
	// li r9,6
	ctx.r9.s64 = 6;
loc_82B08E7C:
	// rlwinm r20,r16,2,0,29
	ctx.r20.u64 = __builtin_rotateleft64(ctx.r16.u32 | (ctx.r16.u64 << 32), 2) & 0xFFFFFFFC;
	// lvx128 v62,r0,r14
	simd::store_shuffled(ctx.v62, simd::load_and_shuffle(base + ((ctx.r14.u32) & ~0xF), VectorMaskL));
	// addi r17,r17,4
	ctx.r17.s64 = ctx.r17.s64 + 4;
	// add r23,r20,r15
	ctx.r23.u64 = ctx.r20.u64 + ctx.r15.u64;
	// add r22,r20,r26
	ctx.r22.u64 = ctx.r20.u64 + ctx.r26.u64;
	// add r21,r20,r27
	ctx.r21.u64 = ctx.r20.u64 + ctx.r27.u64;
	// add r20,r20,r25
	ctx.r20.u64 = ctx.r20.u64 + ctx.r25.u64;
	// add r16,r24,r16
	ctx.r16.u64 = ctx.r24.u64 + ctx.r16.u64;
	// lvlx128 v60,r24,r23
	temp.u32 = ctx.r24.u32 + ctx.r23.u32;
	_mm_store_si128((__m128i*)ctx.v60.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v58,r0,r23
	temp.u32 = ctx.r23.u32;
	_mm_store_si128((__m128i*)ctx.v58.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v61,r19,r23
	temp.u32 = ctx.r19.u32 + ctx.r23.u32;
	_mm_store_si128((__m128i*)ctx.v61.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v59,r18,r23
	temp.u32 = ctx.r18.u32 + ctx.r23.u32;
	_mm_store_si128((__m128i*)ctx.v59.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vmrghw128 v61,v60,v61
	_mm_store_si128((__m128i*)ctx.v61.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v61.u32), _mm_load_si128((__m128i*)ctx.v60.u32)));
	// lvlx128 v57,r18,r22
	temp.u32 = ctx.r18.u32 + ctx.r22.u32;
	_mm_store_si128((__m128i*)ctx.v57.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vmrghw128 v59,v58,v59
	_mm_store_si128((__m128i*)ctx.v59.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v59.u32), _mm_load_si128((__m128i*)ctx.v58.u32)));
	// lvlx128 v58,r24,r22
	temp.u32 = ctx.r24.u32 + ctx.r22.u32;
	_mm_store_si128((__m128i*)ctx.v58.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v56,r0,r22
	temp.u32 = ctx.r22.u32;
	_mm_store_si128((__m128i*)ctx.v56.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v60,r19,r22
	temp.u32 = ctx.r19.u32 + ctx.r22.u32;
	_mm_store_si128((__m128i*)ctx.v60.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v55,r24,r21
	temp.u32 = ctx.r24.u32 + ctx.r21.u32;
	_mm_store_si128((__m128i*)ctx.v55.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vmrghw128 v11,v59,v61
	_mm_store_si128((__m128i*)ctx.v11.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v61.u32), _mm_load_si128((__m128i*)ctx.v59.u32)));
	// lvlx128 v61,r18,r21
	temp.u32 = ctx.r18.u32 + ctx.r21.u32;
	_mm_store_si128((__m128i*)ctx.v61.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vmrghw128 v60,v58,v60
	_mm_store_si128((__m128i*)ctx.v60.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v60.u32), _mm_load_si128((__m128i*)ctx.v58.u32)));
	// lvlx128 v58,r19,r21
	temp.u32 = ctx.r19.u32 + ctx.r21.u32;
	_mm_store_si128((__m128i*)ctx.v58.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vmrghw128 v59,v56,v57
	_mm_store_si128((__m128i*)ctx.v59.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v57.u32), _mm_load_si128((__m128i*)ctx.v56.u32)));
	// lvlx128 v57,r0,r21
	temp.u32 = ctx.r21.u32;
	_mm_store_si128((__m128i*)ctx.v57.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vmrghw128 v58,v55,v58
	_mm_store_si128((__m128i*)ctx.v58.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v58.u32), _mm_load_si128((__m128i*)ctx.v55.u32)));
	// lvlx128 v56,r19,r20
	temp.u32 = ctx.r19.u32 + ctx.r20.u32;
	_mm_store_si128((__m128i*)ctx.v56.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vsraw128 v9,v11,v62
	ctx.v9.s32[0] = ctx.v11.s32[0] >> (ctx.v62.u8[0] & 0x1F);
	ctx.v9.s32[1] = ctx.v11.s32[1] >> (ctx.v62.u8[4] & 0x1F);
	ctx.v9.s32[2] = ctx.v11.s32[2] >> (ctx.v62.u8[8] & 0x1F);
	ctx.v9.s32[3] = ctx.v11.s32[3] >> (ctx.v62.u8[12] & 0x1F);
	// vmrghw128 v61,v57,v61
	_mm_store_si128((__m128i*)ctx.v61.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v61.u32), _mm_load_si128((__m128i*)ctx.v57.u32)));
	// lvlx128 v57,r0,r20
	temp.u32 = ctx.r20.u32;
	_mm_store_si128((__m128i*)ctx.v57.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vmrghw128 v8,v59,v60
	_mm_store_si128((__m128i*)ctx.v8.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v60.u32), _mm_load_si128((__m128i*)ctx.v59.u32)));
	// lvlx128 v60,r24,r20
	temp.u32 = ctx.r24.u32 + ctx.r20.u32;
	_mm_store_si128((__m128i*)ctx.v60.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v59,r18,r20
	temp.u32 = ctx.r18.u32 + ctx.r20.u32;
	_mm_store_si128((__m128i*)ctx.v59.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vmrghw128 v10,v61,v58
	_mm_store_si128((__m128i*)ctx.v10.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v58.u32), _mm_load_si128((__m128i*)ctx.v61.u32)));
	// vmrghw128 v60,v60,v56
	_mm_store_si128((__m128i*)ctx.v60.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v56.u32), _mm_load_si128((__m128i*)ctx.v60.u32)));
	// vsubsws v9,v8,v9
	temp.s64 = int64_t(ctx.v8.s32[0]) - int64_t(ctx.v9.s32[0]);
	ctx.v9.s32[0] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v8.s32[1]) - int64_t(ctx.v9.s32[1]);
	ctx.v9.s32[1] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v8.s32[2]) - int64_t(ctx.v9.s32[2]);
	ctx.v9.s32[2] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v8.s32[3]) - int64_t(ctx.v9.s32[3]);
	ctx.v9.s32[3] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	// vmrghw128 v61,v57,v59
	_mm_store_si128((__m128i*)ctx.v61.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v59.u32), _mm_load_si128((__m128i*)ctx.v57.u32)));
	// vsraw128 v6,v10,v62
	ctx.v6.s32[0] = ctx.v10.s32[0] >> (ctx.v62.u8[0] & 0x1F);
	ctx.v6.s32[1] = ctx.v10.s32[1] >> (ctx.v62.u8[4] & 0x1F);
	ctx.v6.s32[2] = ctx.v10.s32[2] >> (ctx.v62.u8[8] & 0x1F);
	ctx.v6.s32[3] = ctx.v10.s32[3] >> (ctx.v62.u8[12] & 0x1F);
	// vaddsws v7,v11,v9
	simd::store_u32(ctx.v7.u32, simd::add_saturate_i32(simd::to_vec128i(ctx.v11), simd::to_vec128i(ctx.v9)));
	// vmrghw128 v8,v61,v60
	_mm_store_si128((__m128i*)ctx.v8.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v60.u32), _mm_load_si128((__m128i*)ctx.v61.u32)));
	// vsubsws v11,v9,v6
	temp.s64 = int64_t(ctx.v9.s32[0]) - int64_t(ctx.v6.s32[0]);
	ctx.v11.s32[0] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v9.s32[1]) - int64_t(ctx.v6.s32[1]);
	ctx.v11.s32[1] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v9.s32[2]) - int64_t(ctx.v6.s32[2]);
	ctx.v11.s32[2] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v9.s32[3]) - int64_t(ctx.v6.s32[3]);
	ctx.v11.s32[3] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	// vaddsws v7,v7,v12
	simd::store_u32(ctx.v7.u32, simd::add_saturate_i32(simd::to_vec128i(ctx.v7), simd::to_vec128i(ctx.v12)));
	// vsraw128 v9,v8,v62
	ctx.v9.s32[0] = ctx.v8.s32[0] >> (ctx.v62.u8[0] & 0x1F);
	ctx.v9.s32[1] = ctx.v8.s32[1] >> (ctx.v62.u8[4] & 0x1F);
	ctx.v9.s32[2] = ctx.v8.s32[2] >> (ctx.v62.u8[8] & 0x1F);
	ctx.v9.s32[3] = ctx.v8.s32[3] >> (ctx.v62.u8[12] & 0x1F);
	// vsraw128 v7,v7,v63
	ctx.v7.s32[0] = ctx.v7.s32[0] >> (ctx.v63.u8[0] & 0x1F);
	ctx.v7.s32[1] = ctx.v7.s32[1] >> (ctx.v63.u8[4] & 0x1F);
	ctx.v7.s32[2] = ctx.v7.s32[2] >> (ctx.v63.u8[8] & 0x1F);
	ctx.v7.s32[3] = ctx.v7.s32[3] >> (ctx.v63.u8[12] & 0x1F);
	// vsubsws v9,v11,v9
	temp.s64 = int64_t(ctx.v11.s32[0]) - int64_t(ctx.v9.s32[0]);
	ctx.v9.s32[0] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v11.s32[1]) - int64_t(ctx.v9.s32[1]);
	ctx.v9.s32[1] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v11.s32[2]) - int64_t(ctx.v9.s32[2]);
	ctx.v9.s32[2] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v11.s32[3]) - int64_t(ctx.v9.s32[3]);
	ctx.v9.s32[3] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	// vaddsws v11,v10,v11
	simd::store_u32(ctx.v11.u32, simd::add_saturate_i32(simd::to_vec128i(ctx.v10), simd::to_vec128i(ctx.v11)));
	// vmaxsw v10,v7,v13
	_mm_store_si128((__m128i*)ctx.v10.u32, _mm_max_epi32(_mm_load_si128((__m128i*)ctx.v7.u32), _mm_load_si128((__m128i*)ctx.v13.u32)));
	// vaddsws v8,v9,v8
	simd::store_u32(ctx.v8.u32, simd::add_saturate_i32(simd::to_vec128i(ctx.v9), simd::to_vec128i(ctx.v8)));
	// vaddsws v11,v11,v12
	simd::store_u32(ctx.v11.u32, simd::add_saturate_i32(simd::to_vec128i(ctx.v11), simd::to_vec128i(ctx.v12)));
	// vaddsws v9,v9,v12
	simd::store_u32(ctx.v9.u32, simd::add_saturate_i32(simd::to_vec128i(ctx.v9), simd::to_vec128i(ctx.v12)));
	// vminsw v10,v10,v0
	ctx.fpscr.enableFlushMode();
	ctx.v10.v128 = simd::min_i32(ctx.v10.v128, ctx.v0.v128);
	// vaddsws v8,v8,v12
	simd::store_u32(ctx.v8.u32, simd::add_saturate_i32(simd::to_vec128i(ctx.v8), simd::to_vec128i(ctx.v12)));
	// vsraw128 v11,v11,v63
	ctx.v11.s32[0] = ctx.v11.s32[0] >> (ctx.v63.u8[0] & 0x1F);
	ctx.v11.s32[1] = ctx.v11.s32[1] >> (ctx.v63.u8[4] & 0x1F);
	ctx.v11.s32[2] = ctx.v11.s32[2] >> (ctx.v63.u8[8] & 0x1F);
	ctx.v11.s32[3] = ctx.v11.s32[3] >> (ctx.v63.u8[12] & 0x1F);
	// vsraw128 v9,v9,v63
	ctx.v9.s32[0] = ctx.v9.s32[0] >> (ctx.v63.u8[0] & 0x1F);
	ctx.v9.s32[1] = ctx.v9.s32[1] >> (ctx.v63.u8[4] & 0x1F);
	ctx.v9.s32[2] = ctx.v9.s32[2] >> (ctx.v63.u8[8] & 0x1F);
	ctx.v9.s32[3] = ctx.v9.s32[3] >> (ctx.v63.u8[12] & 0x1F);
	// vor128 v62,v10,v10
	_mm_store_si128((__m128i*)ctx.v62.u8, _mm_load_si128((__m128i*)ctx.v10.u8));
	// vsraw128 v10,v8,v63
	ctx.v10.s32[0] = ctx.v8.s32[0] >> (ctx.v63.u8[0] & 0x1F);
	ctx.v10.s32[1] = ctx.v8.s32[1] >> (ctx.v63.u8[4] & 0x1F);
	ctx.v10.s32[2] = ctx.v8.s32[2] >> (ctx.v63.u8[8] & 0x1F);
	ctx.v10.s32[3] = ctx.v8.s32[3] >> (ctx.v63.u8[12] & 0x1F);
	// vmaxsw v11,v11,v13
	_mm_store_si128((__m128i*)ctx.v11.u32, _mm_max_epi32(_mm_load_si128((__m128i*)ctx.v11.u32), _mm_load_si128((__m128i*)ctx.v13.u32)));
	// vmaxsw v9,v9,v13
	_mm_store_si128((__m128i*)ctx.v9.u32, _mm_max_epi32(_mm_load_si128((__m128i*)ctx.v9.u32), _mm_load_si128((__m128i*)ctx.v13.u32)));
	// vmaxsw v10,v10,v13
	_mm_store_si128((__m128i*)ctx.v10.u32, _mm_max_epi32(_mm_load_si128((__m128i*)ctx.v10.u32), _mm_load_si128((__m128i*)ctx.v13.u32)));
	// vminsw v11,v11,v0
	ctx.v11.v128 = simd::min_i32(ctx.v11.v128, ctx.v0.v128);
	// vminsw v9,v9,v0
	ctx.v9.v128 = simd::min_i32(ctx.v9.v128, ctx.v0.v128);
	// vminsw v10,v10,v0
	ctx.v10.v128 = simd::min_i32(ctx.v10.v128, ctx.v0.v128);
	// vpkshss v11,v11,v11
	_mm_store_si128((__m128i*)ctx.v11.s8, _mm_packs_epi16(_mm_load_si128((__m128i*)ctx.v11.s16), _mm_load_si128((__m128i*)ctx.v11.s16)));
	// vpkshss v10,v10,v10
	_mm_store_si128((__m128i*)ctx.v10.s8, _mm_packs_epi16(_mm_load_si128((__m128i*)ctx.v10.s16), _mm_load_si128((__m128i*)ctx.v10.s16)));
	// vsplth v8,v11,0
	_mm_store_si128((__m128i*)ctx.v8.u16, _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v11.u16), _mm_set1_epi16(short(0xF0E))));
	// vsplth v7,v11,1
	_mm_store_si128((__m128i*)ctx.v7.u16, _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v11.u16), _mm_set1_epi16(short(0xD0C))));
	// vsplth v6,v11,2
	_mm_store_si128((__m128i*)ctx.v6.u16, _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v11.u16), _mm_set1_epi16(short(0xB0A))));
	// vsplth v5,v10,0
	_mm_store_si128((__m128i*)ctx.v5.u16, _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v10.u16), _mm_set1_epi16(short(0xF0E))));
	// vsplth v4,v10,1
	_mm_store_si128((__m128i*)ctx.v4.u16, _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v10.u16), _mm_set1_epi16(short(0xD0C))));
	// vsplth v3,v10,2
	_mm_store_si128((__m128i*)ctx.v3.u16, _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v10.u16), _mm_set1_epi16(short(0xB0A))));
	// vsplth v10,v10,3
	_mm_store_si128((__m128i*)ctx.v10.u16, _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v10.u16), _mm_set1_epi16(short(0x908))));
	// vsplth v2,v11,3
	_mm_store_si128((__m128i*)ctx.v2.u16, _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v11.u16), _mm_set1_epi16(short(0x908))));
	// vpkshss v11,v9,v9
	_mm_store_si128((__m128i*)ctx.v11.s8, _mm_packs_epi16(_mm_load_si128((__m128i*)ctx.v9.s16), _mm_load_si128((__m128i*)ctx.v9.s16)));
	// stvehx v5,r0,r11
	ea = (ctx.r11.u32) & ~0x1;
	PPC_STORE_U16(ea, ctx.v5.u16[7 - ((ea & 0xF) >> 1)]);
	// stvehx v4,r11,r28
	ea = (ctx.r11.u32 + ctx.r28.u32) & ~0x1;
	PPC_STORE_U16(ea, ctx.v4.u16[7 - ((ea & 0xF) >> 1)]);
	// stvehx v3,r11,r30
	ea = (ctx.r11.u32 + ctx.r30.u32) & ~0x1;
	PPC_STORE_U16(ea, ctx.v3.u16[7 - ((ea & 0xF) >> 1)]);
	// stvehx v10,r11,r9
	ea = (ctx.r11.u32 + ctx.r9.u32) & ~0x1;
	PPC_STORE_U16(ea, ctx.v10.u16[7 - ((ea & 0xF) >> 1)]);
	// vpkshss128 v10,v62,v62
	_mm_store_si128((__m128i*)ctx.v10.s8, _mm_packs_epi16(_mm_load_si128((__m128i*)ctx.v62.s16), _mm_load_si128((__m128i*)ctx.v62.s16)));
	// stvehx v8,r0,r4
	ea = (ctx.r4.u32) & ~0x1;
	PPC_STORE_U16(ea, ctx.v8.u16[7 - ((ea & 0xF) >> 1)]);
	// stvehx v7,r4,r28
	ea = (ctx.r4.u32 + ctx.r28.u32) & ~0x1;
	PPC_STORE_U16(ea, ctx.v7.u16[7 - ((ea & 0xF) >> 1)]);
	// stvehx v6,r4,r30
	ea = (ctx.r4.u32 + ctx.r30.u32) & ~0x1;
	PPC_STORE_U16(ea, ctx.v6.u16[7 - ((ea & 0xF) >> 1)]);
	// vsplth v9,v11,0
	_mm_store_si128((__m128i*)ctx.v9.u16, _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v11.u16), _mm_set1_epi16(short(0xF0E))));
	// stvehx v2,r4,r9
	ea = (ctx.r4.u32 + ctx.r9.u32) & ~0x1;
	PPC_STORE_U16(ea, ctx.v2.u16[7 - ((ea & 0xF) >> 1)]);
	// vsplth v8,v11,1
	_mm_store_si128((__m128i*)ctx.v8.u16, _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v11.u16), _mm_set1_epi16(short(0xD0C))));
	// cmpw cr6,r17,r10
	ctx.cr6.compare<int32_t>(ctx.r17.s32, ctx.r10.s32, ctx.xer);
	// vsplth v7,v11,2
	_mm_store_si128((__m128i*)ctx.v7.u16, _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v11.u16), _mm_set1_epi16(short(0xB0A))));
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// vsplth v11,v11,3
	_mm_store_si128((__m128i*)ctx.v11.u16, _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v11.u16), _mm_set1_epi16(short(0x908))));
	// addi r4,r4,8
	ctx.r4.s64 = ctx.r4.s64 + 8;
	// vsplth v6,v10,0
	_mm_store_si128((__m128i*)ctx.v6.u16, _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v10.u16), _mm_set1_epi16(short(0xF0E))));
	// vsplth v5,v10,1
	_mm_store_si128((__m128i*)ctx.v5.u16, _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v10.u16), _mm_set1_epi16(short(0xD0C))));
	// vsplth v4,v10,2
	_mm_store_si128((__m128i*)ctx.v4.u16, _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v10.u16), _mm_set1_epi16(short(0xB0A))));
	// vsplth v10,v10,3
	_mm_store_si128((__m128i*)ctx.v10.u16, _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v10.u16), _mm_set1_epi16(short(0x908))));
	// stvehx v9,r0,r31
	ea = (ctx.r31.u32) & ~0x1;
	PPC_STORE_U16(ea, ctx.v9.u16[7 - ((ea & 0xF) >> 1)]);
	// stvehx v8,r31,r28
	ea = (ctx.r31.u32 + ctx.r28.u32) & ~0x1;
	PPC_STORE_U16(ea, ctx.v8.u16[7 - ((ea & 0xF) >> 1)]);
	// stvehx v7,r31,r30
	ea = (ctx.r31.u32 + ctx.r30.u32) & ~0x1;
	PPC_STORE_U16(ea, ctx.v7.u16[7 - ((ea & 0xF) >> 1)]);
	// stvehx v11,r31,r9
	ea = (ctx.r31.u32 + ctx.r9.u32) & ~0x1;
	PPC_STORE_U16(ea, ctx.v11.u16[7 - ((ea & 0xF) >> 1)]);
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// stvehx v6,r0,r29
	ea = (ctx.r29.u32) & ~0x1;
	PPC_STORE_U16(ea, ctx.v6.u16[7 - ((ea & 0xF) >> 1)]);
	// stvehx v5,r29,r28
	ea = (ctx.r29.u32 + ctx.r28.u32) & ~0x1;
	PPC_STORE_U16(ea, ctx.v5.u16[7 - ((ea & 0xF) >> 1)]);
	// stvehx v4,r29,r30
	ea = (ctx.r29.u32 + ctx.r30.u32) & ~0x1;
	PPC_STORE_U16(ea, ctx.v4.u16[7 - ((ea & 0xF) >> 1)]);
	// stvehx v10,r29,r9
	ea = (ctx.r29.u32 + ctx.r9.u32) & ~0x1;
	PPC_STORE_U16(ea, ctx.v10.u16[7 - ((ea & 0xF) >> 1)]);
	// addi r29,r29,8
	ctx.r29.s64 = ctx.r29.s64 + 8;
	// blt cr6,0x82b08e7c
	if (ctx.cr6.lt) goto loc_82B08E7C;
	// lwz r8,60(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 60);
	// lwz r3,-176(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + -176);
	// lwz r6,-172(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + -172);
	// lwz r5,-168(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + -168);
loc_82B0902C:
	// cmpw cr6,r17,r6
	ctx.cr6.compare<int32_t>(ctx.r17.s32, ctx.r6.s32, ctx.xer);
	// bge cr6,0x82b093c8
	if (!ctx.cr6.lt) goto loc_82B093C8;
	// subf r10,r17,r6
	ctx.r10.s64 = ctx.r6.s64 - ctx.r17.s64;
	// rlwinm r9,r16,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r16.u32 | (ctx.r16.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r28,r27,r25
	ctx.r28.s64 = ctx.r25.s64 - ctx.r27.s64;
	// add r9,r9,r26
	ctx.r9.u64 = ctx.r9.u64 + ctx.r26.u64;
	// subf r30,r26,r27
	ctx.r30.s64 = ctx.r27.s64 - ctx.r26.s64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// rlwinm r22,r5,2,0,29
	ctx.r22.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r10,r27,r15
	ctx.r10.s64 = ctx.r15.s64 - ctx.r27.s64;
	// addi r23,r29,-2
	ctx.r23.s64 = ctx.r29.s64 + -2;
	// addi r24,r31,-2
	ctx.r24.s64 = ctx.r31.s64 + -2;
	// addi r26,r4,-2
	ctx.r26.s64 = ctx.r4.s64 + -2;
	// addi r25,r11,-2
	ctx.r25.s64 = ctx.r11.s64 + -2;
loc_82B09064:
	// add r11,r30,r9
	ctx.r11.u64 = ctx.r30.u64 + ctx.r9.u64;
	// lwz r4,0(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lwzx r31,r10,r11
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// srawi r31,r31,1
	ctx.xer.ca = (ctx.r31.s32 < 0) & ((ctx.r31.u32 & 0x1) != 0);
	ctx.r31.s64 = ctx.r31.s32 >> 1;
	// subf r4,r31,r4
	ctx.r4.s64 = ctx.r4.s64 - ctx.r31.s64;
	// stw r4,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r4.u32);
	// lwzx r31,r10,r11
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// lwzx r4,r30,r9
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r9.u32);
	// srawi r29,r4,1
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x1) != 0);
	ctx.r29.s64 = ctx.r4.s32 >> 1;
	// lwz r4,0(r9)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// subf r29,r29,r4
	ctx.r29.s64 = ctx.r4.s64 - ctx.r29.s64;
	// stw r29,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r29.u32);
	// add r27,r4,r31
	ctx.r27.u64 = ctx.r4.u64 + ctx.r31.u64;
	// lwzx r31,r30,r9
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r9.u32);
	// lwzx r4,r28,r11
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r28.u32 + ctx.r11.u32);
	// srawi r29,r4,1
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x1) != 0);
	ctx.r29.s64 = ctx.r4.s32 >> 1;
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// subf r29,r29,r11
	ctx.r29.s64 = ctx.r11.s64 - ctx.r29.s64;
	// add r31,r31,r11
	ctx.r31.u64 = ctx.r31.u64 + ctx.r11.u64;
	// add r11,r4,r29
	ctx.r11.u64 = ctx.r4.u64 + ctx.r29.u64;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// srawi r11,r11,4
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 4;
	// cmpw cr6,r11,r7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r7.s32, ctx.xer);
	// ble cr6,0x82b090cc
	if (!ctx.cr6.gt) goto loc_82B090CC;
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// b 0x82b090d8
	goto loc_82B090D8;
loc_82B090CC:
	// cmpw cr6,r11,r3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r3.s32, ctx.xer);
	// bge cr6,0x82b090d8
	if (!ctx.cr6.lt) goto loc_82B090D8;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_82B090D8:
	// addi r4,r31,8
	ctx.r4.s64 = ctx.r31.s64 + 8;
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// srawi r11,r4,4
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r4.s32 >> 4;
	// sthu r31,2(r25)
	ea = 2 + ctx.r25.u32;
	PPC_STORE_U16(ea, ctx.r31.u16);
	ctx.r25.u32 = ea;
	// cmpw cr6,r11,r7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r7.s32, ctx.xer);
	// ble cr6,0x82b090f8
	if (!ctx.cr6.gt) goto loc_82B090F8;
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// b 0x82b09104
	goto loc_82B09104;
loc_82B090F8:
	// cmpw cr6,r11,r3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r3.s32, ctx.xer);
	// bge cr6,0x82b09104
	if (!ctx.cr6.lt) goto loc_82B09104;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_82B09104:
	// addi r4,r29,8
	ctx.r4.s64 = ctx.r29.s64 + 8;
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// srawi r11,r4,4
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r4.s32 >> 4;
	// sthu r31,2(r26)
	ea = 2 + ctx.r26.u32;
	PPC_STORE_U16(ea, ctx.r31.u16);
	ctx.r26.u32 = ea;
	// cmpw cr6,r11,r7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r7.s32, ctx.xer);
	// ble cr6,0x82b09124
	if (!ctx.cr6.gt) goto loc_82B09124;
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// b 0x82b09130
	goto loc_82B09130;
loc_82B09124:
	// cmpw cr6,r11,r3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r3.s32, ctx.xer);
	// bge cr6,0x82b09130
	if (!ctx.cr6.lt) goto loc_82B09130;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_82B09130:
	// addi r4,r27,8
	ctx.r4.s64 = ctx.r27.s64 + 8;
	// mr r31,r11
	ctx.r31.u64 = ctx.r11.u64;
	// srawi r11,r4,4
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r4.s32 >> 4;
	// sthu r31,2(r24)
	ea = 2 + ctx.r24.u32;
	PPC_STORE_U16(ea, ctx.r31.u16);
	ctx.r24.u32 = ea;
	// cmpw cr6,r11,r7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r7.s32, ctx.xer);
	// ble cr6,0x82b09150
	if (!ctx.cr6.gt) goto loc_82B09150;
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// b 0x82b0915c
	goto loc_82B0915C;
loc_82B09150:
	// cmpw cr6,r11,r3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r3.s32, ctx.xer);
	// bge cr6,0x82b0915c
	if (!ctx.cr6.lt) goto loc_82B0915C;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_82B0915C:
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// add r9,r22,r9
	ctx.r9.u64 = ctx.r22.u64 + ctx.r9.u64;
	// sthu r11,2(r23)
	ea = 2 + ctx.r23.u32;
	PPC_STORE_U16(ea, ctx.r11.u16);
	ctx.r23.u32 = ea;
	// bdnz 0x82b09064
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82B09064;
	// b 0x82b093c8
	goto loc_82B093C8;
loc_82B09170:
	// li r21,0
	ctx.r21.s64 = 0;
	// li r20,0
	ctx.r20.s64 = 0;
	// ble 0x82b092d8
	if (!ctx.cr0.gt) goto loc_82B092D8;
	// mulli r19,r5,12
	ctx.r19.s64 = ctx.r5.s64 * 12;
	// rlwinm r18,r5,3,0,28
	ctx.r18.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 3) & 0xFFFFFFF8;
	// rlwinm r22,r5,2,0,29
	ctx.r22.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// li r30,4
	ctx.r30.s64 = 4;
	// li r9,6
	ctx.r9.s64 = 6;
loc_82B09190:
	// rlwinm r23,r20,2,0,29
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r20.u32 | (ctx.r20.u64 << 32), 2) & 0xFFFFFFFC;
	// lvx128 v62,r0,r14
	simd::store_shuffled(ctx.v62, simd::load_and_shuffle(base + ((ctx.r14.u32) & ~0xF), VectorMaskL));
	// addi r21,r21,4
	ctx.r21.s64 = ctx.r21.s64 + 4;
	// add r29,r23,r27
	ctx.r29.u64 = ctx.r23.u64 + ctx.r27.u64;
	// add r24,r23,r26
	ctx.r24.u64 = ctx.r23.u64 + ctx.r26.u64;
	// add r23,r23,r25
	ctx.r23.u64 = ctx.r23.u64 + ctx.r25.u64;
	// add r20,r22,r20
	ctx.r20.u64 = ctx.r22.u64 + ctx.r20.u64;
	// cmpw cr6,r21,r10
	ctx.cr6.compare<int32_t>(ctx.r21.s32, ctx.r10.s32, ctx.xer);
	// lvlx128 v60,r22,r29
	temp.u32 = ctx.r22.u32 + ctx.r29.u32;
	_mm_store_si128((__m128i*)ctx.v60.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v58,r0,r29
	temp.u32 = ctx.r29.u32;
	_mm_store_si128((__m128i*)ctx.v58.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v61,r19,r29
	temp.u32 = ctx.r19.u32 + ctx.r29.u32;
	_mm_store_si128((__m128i*)ctx.v61.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v59,r18,r29
	temp.u32 = ctx.r18.u32 + ctx.r29.u32;
	_mm_store_si128((__m128i*)ctx.v59.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vmrghw128 v61,v60,v61
	_mm_store_si128((__m128i*)ctx.v61.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v61.u32), _mm_load_si128((__m128i*)ctx.v60.u32)));
	// lvlx128 v57,r18,r24
	temp.u32 = ctx.r18.u32 + ctx.r24.u32;
	_mm_store_si128((__m128i*)ctx.v57.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vmrghw128 v59,v58,v59
	_mm_store_si128((__m128i*)ctx.v59.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v59.u32), _mm_load_si128((__m128i*)ctx.v58.u32)));
	// lvlx128 v58,r22,r24
	temp.u32 = ctx.r22.u32 + ctx.r24.u32;
	_mm_store_si128((__m128i*)ctx.v58.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v60,r19,r24
	temp.u32 = ctx.r19.u32 + ctx.r24.u32;
	_mm_store_si128((__m128i*)ctx.v60.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v56,r0,r24
	temp.u32 = ctx.r24.u32;
	_mm_store_si128((__m128i*)ctx.v56.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vmrghw128 v60,v58,v60
	_mm_store_si128((__m128i*)ctx.v60.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v60.u32), _mm_load_si128((__m128i*)ctx.v58.u32)));
	// lvlx128 v58,r19,r23
	temp.u32 = ctx.r19.u32 + ctx.r23.u32;
	_mm_store_si128((__m128i*)ctx.v58.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vmrghw128 v11,v59,v61
	_mm_store_si128((__m128i*)ctx.v11.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v61.u32), _mm_load_si128((__m128i*)ctx.v59.u32)));
	// lvlx128 v55,r22,r23
	temp.u32 = ctx.r22.u32 + ctx.r23.u32;
	_mm_store_si128((__m128i*)ctx.v55.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vmrghw128 v59,v56,v57
	_mm_store_si128((__m128i*)ctx.v59.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v57.u32), _mm_load_si128((__m128i*)ctx.v56.u32)));
	// lvlx128 v61,r18,r23
	temp.u32 = ctx.r18.u32 + ctx.r23.u32;
	_mm_store_si128((__m128i*)ctx.v61.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// lvlx128 v57,r0,r23
	temp.u32 = ctx.r23.u32;
	_mm_store_si128((__m128i*)ctx.v57.u8, _mm_shuffle_epi8(_mm_load_si128((__m128i*)(base + (temp.u32 & ~0xF))), _mm_load_si128((__m128i*)&VectorMaskL[(temp.u32 & 0xF) * 16])));
	// vmrghw128 v58,v55,v58
	_mm_store_si128((__m128i*)ctx.v58.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v58.u32), _mm_load_si128((__m128i*)ctx.v55.u32)));
	// vmrghw128 v61,v57,v61
	_mm_store_si128((__m128i*)ctx.v61.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v61.u32), _mm_load_si128((__m128i*)ctx.v57.u32)));
	// vsraw128 v9,v11,v62
	ctx.v9.s32[0] = ctx.v11.s32[0] >> (ctx.v62.u8[0] & 0x1F);
	ctx.v9.s32[1] = ctx.v11.s32[1] >> (ctx.v62.u8[4] & 0x1F);
	ctx.v9.s32[2] = ctx.v11.s32[2] >> (ctx.v62.u8[8] & 0x1F);
	ctx.v9.s32[3] = ctx.v11.s32[3] >> (ctx.v62.u8[12] & 0x1F);
	// vmrghw128 v8,v59,v60
	_mm_store_si128((__m128i*)ctx.v8.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v60.u32), _mm_load_si128((__m128i*)ctx.v59.u32)));
	// vmrghw128 v10,v61,v58
	_mm_store_si128((__m128i*)ctx.v10.u32, _mm_unpackhi_epi32(_mm_load_si128((__m128i*)ctx.v58.u32), _mm_load_si128((__m128i*)ctx.v61.u32)));
	// vsubsws v9,v8,v9
	temp.s64 = int64_t(ctx.v8.s32[0]) - int64_t(ctx.v9.s32[0]);
	ctx.v9.s32[0] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v8.s32[1]) - int64_t(ctx.v9.s32[1]);
	ctx.v9.s32[1] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v8.s32[2]) - int64_t(ctx.v9.s32[2]);
	ctx.v9.s32[2] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v8.s32[3]) - int64_t(ctx.v9.s32[3]);
	ctx.v9.s32[3] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	// vsraw128 v8,v10,v62
	ctx.v8.s32[0] = ctx.v10.s32[0] >> (ctx.v62.u8[0] & 0x1F);
	ctx.v8.s32[1] = ctx.v10.s32[1] >> (ctx.v62.u8[4] & 0x1F);
	ctx.v8.s32[2] = ctx.v10.s32[2] >> (ctx.v62.u8[8] & 0x1F);
	ctx.v8.s32[3] = ctx.v10.s32[3] >> (ctx.v62.u8[12] & 0x1F);
	// vaddsws v11,v11,v9
	simd::store_u32(ctx.v11.u32, simd::add_saturate_i32(simd::to_vec128i(ctx.v11), simd::to_vec128i(ctx.v9)));
	// vsubsws v8,v9,v8
	temp.s64 = int64_t(ctx.v9.s32[0]) - int64_t(ctx.v8.s32[0]);
	ctx.v8.s32[0] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v9.s32[1]) - int64_t(ctx.v8.s32[1]);
	ctx.v8.s32[1] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v9.s32[2]) - int64_t(ctx.v8.s32[2]);
	ctx.v8.s32[2] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	temp.s64 = int64_t(ctx.v9.s32[3]) - int64_t(ctx.v8.s32[3]);
	ctx.v8.s32[3] = temp.s64 > INT_MAX ? INT_MAX : temp.s64 < INT_MIN ? INT_MIN : temp.s64;
	// vaddsws v11,v11,v12
	simd::store_u32(ctx.v11.u32, simd::add_saturate_i32(simd::to_vec128i(ctx.v11), simd::to_vec128i(ctx.v12)));
	// vaddsws v10,v8,v10
	simd::store_u32(ctx.v10.u32, simd::add_saturate_i32(simd::to_vec128i(ctx.v8), simd::to_vec128i(ctx.v10)));
	// vsraw128 v11,v11,v63
	ctx.v11.s32[0] = ctx.v11.s32[0] >> (ctx.v63.u8[0] & 0x1F);
	ctx.v11.s32[1] = ctx.v11.s32[1] >> (ctx.v63.u8[4] & 0x1F);
	ctx.v11.s32[2] = ctx.v11.s32[2] >> (ctx.v63.u8[8] & 0x1F);
	ctx.v11.s32[3] = ctx.v11.s32[3] >> (ctx.v63.u8[12] & 0x1F);
	// vaddsws v9,v8,v12
	simd::store_u32(ctx.v9.u32, simd::add_saturate_i32(simd::to_vec128i(ctx.v8), simd::to_vec128i(ctx.v12)));
	// vaddsws v10,v10,v12
	simd::store_u32(ctx.v10.u32, simd::add_saturate_i32(simd::to_vec128i(ctx.v10), simd::to_vec128i(ctx.v12)));
	// vmaxsw v11,v11,v13
	_mm_store_si128((__m128i*)ctx.v11.u32, _mm_max_epi32(_mm_load_si128((__m128i*)ctx.v11.u32), _mm_load_si128((__m128i*)ctx.v13.u32)));
	// vsraw128 v9,v9,v63
	ctx.v9.s32[0] = ctx.v9.s32[0] >> (ctx.v63.u8[0] & 0x1F);
	ctx.v9.s32[1] = ctx.v9.s32[1] >> (ctx.v63.u8[4] & 0x1F);
	ctx.v9.s32[2] = ctx.v9.s32[2] >> (ctx.v63.u8[8] & 0x1F);
	ctx.v9.s32[3] = ctx.v9.s32[3] >> (ctx.v63.u8[12] & 0x1F);
	// vsraw128 v10,v10,v63
	ctx.v10.s32[0] = ctx.v10.s32[0] >> (ctx.v63.u8[0] & 0x1F);
	ctx.v10.s32[1] = ctx.v10.s32[1] >> (ctx.v63.u8[4] & 0x1F);
	ctx.v10.s32[2] = ctx.v10.s32[2] >> (ctx.v63.u8[8] & 0x1F);
	ctx.v10.s32[3] = ctx.v10.s32[3] >> (ctx.v63.u8[12] & 0x1F);
	// vminsw v11,v11,v0
	ctx.fpscr.enableFlushMode();
	ctx.v11.v128 = simd::min_i32(ctx.v11.v128, ctx.v0.v128);
	// vmaxsw v9,v9,v13
	_mm_store_si128((__m128i*)ctx.v9.u32, _mm_max_epi32(_mm_load_si128((__m128i*)ctx.v9.u32), _mm_load_si128((__m128i*)ctx.v13.u32)));
	// vmaxsw v10,v10,v13
	_mm_store_si128((__m128i*)ctx.v10.u32, _mm_max_epi32(_mm_load_si128((__m128i*)ctx.v10.u32), _mm_load_si128((__m128i*)ctx.v13.u32)));
	// vpkshss v11,v11,v11
	_mm_store_si128((__m128i*)ctx.v11.s8, _mm_packs_epi16(_mm_load_si128((__m128i*)ctx.v11.s16), _mm_load_si128((__m128i*)ctx.v11.s16)));
	// vminsw v9,v9,v0
	ctx.v9.v128 = simd::min_i32(ctx.v9.v128, ctx.v0.v128);
	// vminsw v10,v10,v0
	ctx.v10.v128 = simd::min_i32(ctx.v10.v128, ctx.v0.v128);
	// vsplth v8,v11,0
	_mm_store_si128((__m128i*)ctx.v8.u16, _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v11.u16), _mm_set1_epi16(short(0xF0E))));
	// vsplth v7,v11,1
	_mm_store_si128((__m128i*)ctx.v7.u16, _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v11.u16), _mm_set1_epi16(short(0xD0C))));
	// vsplth v6,v11,2
	_mm_store_si128((__m128i*)ctx.v6.u16, _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v11.u16), _mm_set1_epi16(short(0xB0A))));
	// vpkshss v10,v10,v10
	_mm_store_si128((__m128i*)ctx.v10.s8, _mm_packs_epi16(_mm_load_si128((__m128i*)ctx.v10.s16), _mm_load_si128((__m128i*)ctx.v10.s16)));
	// vsplth v5,v11,3
	_mm_store_si128((__m128i*)ctx.v5.u16, _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v11.u16), _mm_set1_epi16(short(0x908))));
	// vpkshss v11,v9,v9
	_mm_store_si128((__m128i*)ctx.v11.s8, _mm_packs_epi16(_mm_load_si128((__m128i*)ctx.v9.s16), _mm_load_si128((__m128i*)ctx.v9.s16)));
	// vsplth v9,v10,0
	_mm_store_si128((__m128i*)ctx.v9.u16, _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v10.u16), _mm_set1_epi16(short(0xF0E))));
	// vsplth v4,v10,1
	_mm_store_si128((__m128i*)ctx.v4.u16, _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v10.u16), _mm_set1_epi16(short(0xD0C))));
	// vsplth v3,v10,2
	_mm_store_si128((__m128i*)ctx.v3.u16, _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v10.u16), _mm_set1_epi16(short(0xB0A))));
	// vsplth v10,v10,3
	_mm_store_si128((__m128i*)ctx.v10.u16, _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v10.u16), _mm_set1_epi16(short(0x908))));
	// vsplth v2,v11,0
	_mm_store_si128((__m128i*)ctx.v2.u16, _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v11.u16), _mm_set1_epi16(short(0xF0E))));
	// vsplth v1,v11,1
	_mm_store_si128((__m128i*)ctx.v1.u16, _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v11.u16), _mm_set1_epi16(short(0xD0C))));
	// vsplth v31,v11,2
	_mm_store_si128((__m128i*)ctx.v31.u16, _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v11.u16), _mm_set1_epi16(short(0xB0A))));
	// stvehx v9,r0,r11
	ea = (ctx.r11.u32) & ~0x1;
	PPC_STORE_U16(ea, ctx.v9.u16[7 - ((ea & 0xF) >> 1)]);
	// vsplth v11,v11,3
	_mm_store_si128((__m128i*)ctx.v11.u16, _mm_shuffle_epi8(_mm_load_si128((__m128i*)ctx.v11.u16), _mm_set1_epi16(short(0x908))));
	// stvehx v4,r11,r28
	ea = (ctx.r11.u32 + ctx.r28.u32) & ~0x1;
	PPC_STORE_U16(ea, ctx.v4.u16[7 - ((ea & 0xF) >> 1)]);
	// stvehx v3,r11,r30
	ea = (ctx.r11.u32 + ctx.r30.u32) & ~0x1;
	PPC_STORE_U16(ea, ctx.v3.u16[7 - ((ea & 0xF) >> 1)]);
	// stvehx v10,r11,r9
	ea = (ctx.r11.u32 + ctx.r9.u32) & ~0x1;
	PPC_STORE_U16(ea, ctx.v10.u16[7 - ((ea & 0xF) >> 1)]);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// stvehx v8,r0,r4
	ea = (ctx.r4.u32) & ~0x1;
	PPC_STORE_U16(ea, ctx.v8.u16[7 - ((ea & 0xF) >> 1)]);
	// stvehx v7,r4,r28
	ea = (ctx.r4.u32 + ctx.r28.u32) & ~0x1;
	PPC_STORE_U16(ea, ctx.v7.u16[7 - ((ea & 0xF) >> 1)]);
	// stvehx v6,r4,r30
	ea = (ctx.r4.u32 + ctx.r30.u32) & ~0x1;
	PPC_STORE_U16(ea, ctx.v6.u16[7 - ((ea & 0xF) >> 1)]);
	// stvehx v5,r4,r9
	ea = (ctx.r4.u32 + ctx.r9.u32) & ~0x1;
	PPC_STORE_U16(ea, ctx.v5.u16[7 - ((ea & 0xF) >> 1)]);
	// addi r4,r4,8
	ctx.r4.s64 = ctx.r4.s64 + 8;
	// stvehx v2,r0,r31
	ea = (ctx.r31.u32) & ~0x1;
	PPC_STORE_U16(ea, ctx.v2.u16[7 - ((ea & 0xF) >> 1)]);
	// stvehx v1,r31,r28
	ea = (ctx.r31.u32 + ctx.r28.u32) & ~0x1;
	PPC_STORE_U16(ea, ctx.v1.u16[7 - ((ea & 0xF) >> 1)]);
	// stvehx v31,r31,r30
	ea = (ctx.r31.u32 + ctx.r30.u32) & ~0x1;
	PPC_STORE_U16(ea, ctx.v31.u16[7 - ((ea & 0xF) >> 1)]);
	// stvehx v11,r31,r9
	ea = (ctx.r31.u32 + ctx.r9.u32) & ~0x1;
	PPC_STORE_U16(ea, ctx.v11.u16[7 - ((ea & 0xF) >> 1)]);
	// addi r31,r31,8
	ctx.r31.s64 = ctx.r31.s64 + 8;
	// blt cr6,0x82b09190
	if (ctx.cr6.lt) goto loc_82B09190;
	// lwz r8,60(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + 60);
	// lwz r3,-176(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + -176);
	// lwz r6,-172(r1)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r1.u32 + -172);
	// lwz r5,-168(r1)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r1.u32 + -168);
loc_82B092D8:
	// cmpw cr6,r21,r6
	ctx.cr6.compare<int32_t>(ctx.r21.s32, ctx.r6.s32, ctx.xer);
	// bge cr6,0x82b093c8
	if (!ctx.cr6.lt) goto loc_82B093C8;
	// subf r10,r21,r6
	ctx.r10.s64 = ctx.r6.s64 - ctx.r21.s64;
	// rlwinm r9,r20,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r20.u32 | (ctx.r20.u64 << 32), 2) & 0xFFFFFFFC;
	// subf r30,r25,r27
	ctx.r30.s64 = ctx.r27.s64 - ctx.r25.s64;
	// add r9,r9,r26
	ctx.r9.u64 = ctx.r9.u64 + ctx.r26.u64;
	// subf r29,r26,r25
	ctx.r29.s64 = ctx.r25.s64 - ctx.r26.s64;
	// rlwinm r24,r5,2,0,29
	ctx.r24.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// addi r26,r31,-2
	ctx.r26.s64 = ctx.r31.s64 + -2;
	// addi r28,r4,-2
	ctx.r28.s64 = ctx.r4.s64 + -2;
	// addi r27,r11,-2
	ctx.r27.s64 = ctx.r11.s64 + -2;
loc_82B09308:
	// add r11,r29,r9
	ctx.r11.u64 = ctx.r29.u64 + ctx.r9.u64;
	// lwz r10,0(r9)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lwzx r4,r11,r30
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// srawi r4,r4,1
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x1) != 0);
	ctx.r4.s64 = ctx.r4.s32 >> 1;
	// subf r10,r4,r10
	ctx.r10.s64 = ctx.r10.s64 - ctx.r4.s64;
	// stw r10,0(r9)
	PPC_STORE_U32(ctx.r9.u32 + 0, ctx.r10.u32);
	// lwzx r10,r11,r30
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + ctx.r30.u32);
	// lwz r11,0(r9)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r9.u32 + 0);
	// lwzx r4,r29,r9
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r29.u32 + ctx.r9.u32);
	// srawi r31,r4,1
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x1) != 0);
	ctx.r31.s64 = ctx.r4.s32 >> 1;
	// subf r31,r31,r11
	ctx.r31.s64 = ctx.r11.s64 - ctx.r31.s64;
	// add r10,r10,r11
	ctx.r10.u64 = ctx.r10.u64 + ctx.r11.u64;
	// add r11,r4,r31
	ctx.r11.u64 = ctx.r4.u64 + ctx.r31.u64;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// srawi r11,r11,4
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 4;
	// cmpw cr6,r11,r7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r7.s32, ctx.xer);
	// ble cr6,0x82b09354
	if (!ctx.cr6.gt) goto loc_82B09354;
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// b 0x82b09360
	goto loc_82B09360;
loc_82B09354:
	// cmpw cr6,r11,r3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r3.s32, ctx.xer);
	// bge cr6,0x82b09360
	if (!ctx.cr6.lt) goto loc_82B09360;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_82B09360:
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// srawi r11,r10,4
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r10.s32 >> 4;
	// sthu r4,2(r27)
	ea = 2 + ctx.r27.u32;
	PPC_STORE_U16(ea, ctx.r4.u16);
	ctx.r27.u32 = ea;
	// cmpw cr6,r11,r7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r7.s32, ctx.xer);
	// ble cr6,0x82b09380
	if (!ctx.cr6.gt) goto loc_82B09380;
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// b 0x82b0938c
	goto loc_82B0938C;
loc_82B09380:
	// cmpw cr6,r11,r3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r3.s32, ctx.xer);
	// bge cr6,0x82b0938c
	if (!ctx.cr6.lt) goto loc_82B0938C;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_82B0938C:
	// addi r10,r31,8
	ctx.r10.s64 = ctx.r31.s64 + 8;
	// mr r4,r11
	ctx.r4.u64 = ctx.r11.u64;
	// srawi r11,r10,4
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r10.s32 >> 4;
	// sthu r4,2(r28)
	ea = 2 + ctx.r28.u32;
	PPC_STORE_U16(ea, ctx.r4.u16);
	ctx.r28.u32 = ea;
	// cmpw cr6,r11,r7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r7.s32, ctx.xer);
	// ble cr6,0x82b093ac
	if (!ctx.cr6.gt) goto loc_82B093AC;
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// b 0x82b093b8
	goto loc_82B093B8;
loc_82B093AC:
	// cmpw cr6,r11,r3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r3.s32, ctx.xer);
	// bge cr6,0x82b093b8
	if (!ctx.cr6.lt) goto loc_82B093B8;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_82B093B8:
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// add r9,r24,r9
	ctx.r9.u64 = ctx.r24.u64 + ctx.r9.u64;
	// sthu r11,2(r26)
	ea = 2 + ctx.r26.u32;
	PPC_STORE_U16(ea, ctx.r11.u16);
	ctx.r26.u32 = ea;
	// bdnz 0x82b09308
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82B09308;
loc_82B093C8:
	// lwz r11,92(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 92);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82b094a4
	if (ctx.cr6.eq) goto loc_82B094A4;
	// lwz r11,20(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 20);
	// lwz r9,36(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 36);
	// addi r4,r11,-1
	ctx.r4.s64 = ctx.r11.s64 + -1;
	// lwz r31,52(r1)
	ctx.r31.u64 = PPC_LOAD_U32(ctx.r1.u32 + 52);
	// rlwinm r10,r11,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r30,44(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 44);
	// mullw r11,r4,r9
	ctx.r11.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r9.s32);
	// lwz r9,76(r1)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r1.u32 + 76);
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// add r8,r10,r8
	ctx.r8.u64 = ctx.r10.u64 + ctx.r8.u64;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// add r10,r11,r30
	ctx.r10.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lwz r11,-4(r8)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r8.u32 + -4);
	// beq cr6,0x82b09458
	if (ctx.cr6.eq) goto loc_82B09458;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// ble cr6,0x82b094a4
	if (!ctx.cr6.gt) goto loc_82B094A4;
	// rlwinm r8,r5,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// addi r9,r11,-2
	ctx.r9.s64 = ctx.r11.s64 + -2;
loc_82B09424:
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// cmpw cr6,r11,r7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r7.s32, ctx.xer);
	// ble cr6,0x82b09438
	if (!ctx.cr6.gt) goto loc_82B09438;
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// b 0x82b09444
	goto loc_82B09444;
loc_82B09438:
	// cmpw cr6,r11,r3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r3.s32, ctx.xer);
	// bge cr6,0x82b09444
	if (!ctx.cr6.lt) goto loc_82B09444;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_82B09444:
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// sthu r11,2(r9)
	ea = 2 + ctx.r9.u32;
	PPC_STORE_U16(ea, ctx.r11.u16);
	ctx.r9.u32 = ea;
	// bdnz 0x82b09424
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82B09424;
	// b 0x82b094a4
	goto loc_82B094A4;
loc_82B09458:
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// ble cr6,0x82b094a4
	if (!ctx.cr6.gt) goto loc_82B094A4;
	// rlwinm r8,r5,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r6
	ctx.ctr.u64 = ctx.r6.u64;
	// addi r9,r11,-2
	ctx.r9.s64 = ctx.r11.s64 + -2;
loc_82B0946C:
	// lwz r11,0(r10)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// srawi r11,r11,4
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 4;
	// cmpw cr6,r11,r7
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r7.s32, ctx.xer);
	// ble cr6,0x82b09488
	if (!ctx.cr6.gt) goto loc_82B09488;
	// mr r11,r7
	ctx.r11.u64 = ctx.r7.u64;
	// b 0x82b09494
	goto loc_82B09494;
loc_82B09488:
	// cmpw cr6,r11,r3
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r3.s32, ctx.xer);
	// bge cr6,0x82b09494
	if (!ctx.cr6.lt) goto loc_82B09494;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
loc_82B09494:
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// add r10,r8,r10
	ctx.r10.u64 = ctx.r8.u64 + ctx.r10.u64;
	// sthu r11,2(r9)
	ea = 2 + ctx.r9.u32;
	PPC_STORE_U16(ea, ctx.r11.u16);
	ctx.r9.u32 = ea;
	// bdnz 0x82b0946c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82B0946C;
loc_82B094A4:
	// b 0x82fa7690
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B094A8"))) PPC_WEAK_FUNC(sub_82B094A8);
PPC_FUNC_IMPL(__imp__sub_82B094A8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7668
	ctx.lr = 0x82B094B0;
	__savegprlr_24(ctx, base);
	// rlwinm r6,r6,2,0,29
	ctx.r6.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// subfic r4,r10,16
	ctx.xer.ca = ctx.r10.u32 <= 16;
	ctx.r4.s64 = 16 - ctx.r10.s64;
	// lis r10,0
	ctx.r10.s64 = 0;
	// add r6,r6,r5
	ctx.r6.u64 = ctx.r6.u64 + ctx.r5.u64;
	// ori r31,r10,32768
	ctx.r31.u64 = ctx.r10.u64 | 32768;
	// add r5,r11,r6
	ctx.r5.u64 = ctx.r11.u64 + ctx.r6.u64;
	// sraw r4,r31,r4
	temp.u32 = ctx.r4.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r31.s32 < 0) & (((ctx.r31.s32 >> temp.u32) << temp.u32) != ctx.r31.s32);
	ctx.r4.s64 = ctx.r31.s32 >> temp.u32;
	// add r10,r11,r5
	ctx.r10.u64 = ctx.r11.u64 + ctx.r5.u64;
	// addi r29,r4,-1
	ctx.r29.s64 = ctx.r4.s64 + -1;
	// neg r26,r4
	ctx.r26.s64 = -ctx.r4.s64;
	// srawi r31,r3,1
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x1) != 0);
	ctx.r31.s64 = ctx.r3.s32 >> 1;
	// add r30,r11,r10
	ctx.r30.u64 = ctx.r11.u64 + ctx.r10.u64;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// bne cr6,0x82b09504
	if (!ctx.cr6.eq) goto loc_82B09504;
	// lwz r7,0(r7)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r7.u32 + 0);
	// rlwinm r11,r3,1,0,30
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 1) & 0xFFFFFFFE;
	// add r11,r11,r7
	ctx.r11.u64 = ctx.r11.u64 + ctx.r7.u64;
	// addi r8,r7,2
	ctx.r8.s64 = ctx.r7.s64 + 2;
	// addi r3,r11,2
	ctx.r3.s64 = ctx.r11.s64 + 2;
	// b 0x82b09514
	goto loc_82B09514;
loc_82B09504:
	// lwz r7,-80(r1)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r1.u32 + -80);
	// lwz r8,-80(r1)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r1.u32 + -80);
	// lwz r11,-80(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + -80);
	// lwz r3,-80(r1)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r1.u32 + -80);
loc_82B09514:
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// beq cr6,0x82b095a4
	if (ctx.cr6.eq) goto loc_82B095A4;
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// ble cr6,0x82b096bc
	if (!ctx.cr6.gt) goto loc_82B096BC;
	// mtctr r31
	ctx.ctr.u64 = ctx.r31.u64;
	// subf r4,r10,r30
	ctx.r4.s64 = ctx.r30.s64 - ctx.r10.s64;
	// subf r29,r11,r8
	ctx.r29.s64 = ctx.r8.s64 - ctx.r11.s64;
	// subf r5,r10,r5
	ctx.r5.s64 = ctx.r5.s64 - ctx.r10.s64;
	// subf r31,r10,r6
	ctx.r31.s64 = ctx.r6.s64 - ctx.r10.s64;
	// subf r30,r11,r7
	ctx.r30.s64 = ctx.r7.s64 - ctx.r11.s64;
	// subf r3,r11,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r11.s64;
loc_82B09540:
	// lwzx r8,r4,r10
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r10.u32);
	// lwzx r6,r5,r10
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r10.u32);
	// lwz r7,0(r10)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// srawi r9,r8,1
	ctx.xer.ca = (ctx.r8.s32 < 0) & ((ctx.r8.u32 & 0x1) != 0);
	ctx.r9.s64 = ctx.r8.s32 >> 1;
	// lwzx r28,r31,r10
	ctx.r28.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r10.u32);
	// srawi r27,r6,1
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x1) != 0);
	ctx.r27.s64 = ctx.r6.s32 >> 1;
	// srawi r26,r7,1
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x1) != 0);
	ctx.r26.s64 = ctx.r7.s32 >> 1;
	// subf r9,r9,r28
	ctx.r9.s64 = ctx.r28.s64 - ctx.r9.s64;
	// subf r28,r27,r8
	ctx.r28.s64 = ctx.r8.s64 - ctx.r27.s64;
	// subf r8,r26,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r26.s64;
	// add r9,r28,r9
	ctx.r9.u64 = ctx.r28.u64 + ctx.r9.u64;
	// add r28,r7,r8
	ctx.r28.u64 = ctx.r7.u64 + ctx.r8.u64;
	// add r7,r6,r9
	ctx.r7.u64 = ctx.r6.u64 + ctx.r9.u64;
	// extsh r6,r28
	ctx.r6.s64 = ctx.r28.s16;
	// extsh r9,r9
	ctx.r9.s64 = ctx.r9.s16;
	// extsh r7,r7
	ctx.r7.s64 = ctx.r7.s16;
	// sthx r6,r30,r11
	PPC_STORE_U16(ctx.r30.u32 + ctx.r11.u32, ctx.r6.u16);
	// extsh r8,r8
	ctx.r8.s64 = ctx.r8.s16;
	// sthx r9,r29,r11
	PPC_STORE_U16(ctx.r29.u32 + ctx.r11.u32, ctx.r9.u16);
	// sth r7,0(r11)
	PPC_STORE_U16(ctx.r11.u32 + 0, ctx.r7.u16);
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// sthx r8,r3,r11
	PPC_STORE_U16(ctx.r3.u32 + ctx.r11.u32, ctx.r8.u16);
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// bdnz 0x82b09540
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82B09540;
	// b 0x82b096bc
	goto loc_82B096BC;
loc_82B095A4:
	// cmpwi cr6,r31,0
	ctx.cr6.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// ble cr6,0x82b096bc
	if (!ctx.cr6.gt) goto loc_82B096BC;
	// mtctr r31
	ctx.ctr.u64 = ctx.r31.u64;
	// subf r31,r10,r30
	ctx.r31.s64 = ctx.r30.s64 - ctx.r10.s64;
	// mr r4,r10
	ctx.r4.u64 = ctx.r10.u64;
	// subf r5,r10,r5
	ctx.r5.s64 = ctx.r5.s64 - ctx.r10.s64;
	// subf r30,r10,r6
	ctx.r30.s64 = ctx.r6.s64 - ctx.r10.s64;
	// subf r28,r8,r7
	ctx.r28.s64 = ctx.r7.s64 - ctx.r8.s64;
	// subf r27,r8,r11
	ctx.r27.s64 = ctx.r11.s64 - ctx.r8.s64;
	// subf r3,r8,r3
	ctx.r3.s64 = ctx.r3.s64 - ctx.r8.s64;
loc_82B095CC:
	// lwzx r7,r4,r31
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r31.u32);
	// lwzx r9,r4,r5
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r5.u32);
	// lwz r10,0(r4)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r4.u32 + 0);
	// srawi r11,r7,1
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r7.s32 >> 1;
	// lwzx r6,r4,r30
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r4.u32 + ctx.r30.u32);
	// srawi r25,r9,1
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r25.s64 = ctx.r9.s32 >> 1;
	// srawi r24,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r24.s64 = ctx.r10.s32 >> 1;
	// subf r11,r11,r6
	ctx.r11.s64 = ctx.r6.s64 - ctx.r11.s64;
	// subf r7,r25,r7
	ctx.r7.s64 = ctx.r7.s64 - ctx.r25.s64;
	// subf r6,r24,r11
	ctx.r6.s64 = ctx.r11.s64 - ctx.r24.s64;
	// add r7,r7,r11
	ctx.r7.u64 = ctx.r7.u64 + ctx.r11.u64;
	// add r11,r10,r6
	ctx.r11.u64 = ctx.r10.u64 + ctx.r6.u64;
	// add r10,r9,r7
	ctx.r10.u64 = ctx.r9.u64 + ctx.r7.u64;
	// addi r11,r11,8
	ctx.r11.s64 = ctx.r11.s64 + 8;
	// srawi r11,r11,4
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r11.s32 >> 4;
	// cmpw cr6,r11,r29
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r29.s32, ctx.xer);
	// ble cr6,0x82b09618
	if (!ctx.cr6.gt) goto loc_82B09618;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// b 0x82b09624
	goto loc_82B09624;
loc_82B09618:
	// cmpw cr6,r11,r26
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r26.s32, ctx.xer);
	// bge cr6,0x82b09624
	if (!ctx.cr6.lt) goto loc_82B09624;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
loc_82B09624:
	// addi r9,r7,8
	ctx.r9.s64 = ctx.r7.s64 + 8;
	// mr r7,r11
	ctx.r7.u64 = ctx.r11.u64;
	// srawi r11,r9,4
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r9.s32 >> 4;
	// sthx r7,r28,r8
	PPC_STORE_U16(ctx.r28.u32 + ctx.r8.u32, ctx.r7.u16);
	// cmpw cr6,r11,r29
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r29.s32, ctx.xer);
	// ble cr6,0x82b09644
	if (!ctx.cr6.gt) goto loc_82B09644;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// b 0x82b09650
	goto loc_82B09650;
loc_82B09644:
	// cmpw cr6,r11,r26
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r26.s32, ctx.xer);
	// bge cr6,0x82b09650
	if (!ctx.cr6.lt) goto loc_82B09650;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
loc_82B09650:
	// addi r10,r10,8
	ctx.r10.s64 = ctx.r10.s64 + 8;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// srawi r11,r10,4
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r10.s32 >> 4;
	// sth r9,0(r8)
	PPC_STORE_U16(ctx.r8.u32 + 0, ctx.r9.u16);
	// cmpw cr6,r11,r29
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r29.s32, ctx.xer);
	// ble cr6,0x82b09670
	if (!ctx.cr6.gt) goto loc_82B09670;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// b 0x82b0967c
	goto loc_82B0967C;
loc_82B09670:
	// cmpw cr6,r11,r26
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r26.s32, ctx.xer);
	// bge cr6,0x82b0967c
	if (!ctx.cr6.lt) goto loc_82B0967C;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
loc_82B0967C:
	// addi r10,r6,8
	ctx.r10.s64 = ctx.r6.s64 + 8;
	// mr r9,r11
	ctx.r9.u64 = ctx.r11.u64;
	// srawi r11,r10,4
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r10.s32 >> 4;
	// sthx r9,r27,r8
	PPC_STORE_U16(ctx.r27.u32 + ctx.r8.u32, ctx.r9.u16);
	// cmpw cr6,r11,r29
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r29.s32, ctx.xer);
	// ble cr6,0x82b0969c
	if (!ctx.cr6.gt) goto loc_82B0969C;
	// mr r11,r29
	ctx.r11.u64 = ctx.r29.u64;
	// b 0x82b096a8
	goto loc_82B096A8;
loc_82B0969C:
	// cmpw cr6,r11,r26
	ctx.cr6.compare<int32_t>(ctx.r11.s32, ctx.r26.s32, ctx.xer);
	// bge cr6,0x82b096a8
	if (!ctx.cr6.lt) goto loc_82B096A8;
	// mr r11,r26
	ctx.r11.u64 = ctx.r26.u64;
loc_82B096A8:
	// extsh r11,r11
	ctx.r11.s64 = ctx.r11.s16;
	// addi r4,r4,4
	ctx.r4.s64 = ctx.r4.s64 + 4;
	// sthx r11,r3,r8
	PPC_STORE_U16(ctx.r3.u32 + ctx.r8.u32, ctx.r11.u16);
	// addi r8,r8,4
	ctx.r8.s64 = ctx.r8.s64 + 4;
	// bdnz 0x82b095cc
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82B095CC;
loc_82B096BC:
	// b 0x82fa76b8
	__restgprlr_24(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B096C0"))) PPC_WEAK_FUNC(sub_82B096C0);
PPC_FUNC_IMPL(__imp__sub_82B096C0) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa766c
	ctx.lr = 0x82B096C8;
	__savegprlr_25(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r25,r4
	ctx.r25.u64 = ctx.r4.u64;
	// mr r4,r7
	ctx.r4.u64 = ctx.r7.u64;
	// lhz r7,52(r3)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r3.u32 + 52);
	// mr r28,r9
	ctx.r28.u64 = ctx.r9.u64;
	// lwz r9,32(r3)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + 32);
	// mr r30,r5
	ctx.r30.u64 = ctx.r5.u64;
	// mr r11,r3
	ctx.r11.u64 = ctx.r3.u64;
	// lwz r3,36(r3)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r3.u32 + 36);
	// mr r5,r8
	ctx.r5.u64 = ctx.r8.u64;
	// mr r26,r6
	ctx.r26.u64 = ctx.r6.u64;
	// li r29,0
	ctx.r29.s64 = 0;
	// cmpwi cr6,r10,1
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 1, ctx.xer);
	// mr r27,r7
	ctx.r27.u64 = ctx.r7.u64;
	// sraw r8,r9,r10
	temp.u32 = ctx.r10.u32 & 0x3F;
	if (temp.u32 > 0x1F) temp.u32 = 0x1F;
	ctx.xer.ca = (ctx.r9.s32 < 0) & (((ctx.r9.s32 >> temp.u32) << temp.u32) != ctx.r9.s32);
	ctx.r8.s64 = ctx.r9.s32 >> temp.u32;
	// beq cr6,0x82b09734
	if (ctx.cr6.eq) goto loc_82B09734;
	// cmpwi cr6,r10,2
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 2, ctx.xer);
	// beq cr6,0x82b097f4
	if (ctx.cr6.eq) goto loc_82B097F4;
	// cmpwi cr6,r10,3
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 3, ctx.xer);
	// beq cr6,0x82b0972c
	if (ctx.cr6.eq) goto loc_82B0972C;
	// cmpwi cr6,r10,4
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 4, ctx.xer);
	// bne cr6,0x82b09738
	if (!ctx.cr6.eq) goto loc_82B09738;
	// srawi r3,r3,4
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xF) != 0);
	ctx.r3.s64 = ctx.r3.s32 >> 4;
	// srawi r30,r30,4
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0xF) != 0);
	ctx.r30.s64 = ctx.r30.s32 >> 4;
	// b 0x82b09738
	goto loc_82B09738;
loc_82B0972C:
	// srawi r3,r3,2
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x3) != 0);
	ctx.r3.s64 = ctx.r3.s32 >> 2;
	// srawi r30,r30,2
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0x3) != 0);
	ctx.r30.s64 = ctx.r30.s32 >> 2;
loc_82B09734:
	// li r29,1
	ctx.r29.s64 = 1;
loc_82B09738:
	// lhz r6,22(r11)
	ctx.r6.u64 = PPC_LOAD_U16(ctx.r11.u32 + 22);
	// rlwinm r10,r6,0,24,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0xF0;
	// cmplwi cr6,r10,64
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 64, ctx.xer);
	// bne cr6,0x82b09754
	if (!ctx.cr6.eq) goto loc_82B09754;
	// srawi r8,r9,1
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r8.s64 = ctx.r9.s32 >> 1;
	// srawi r4,r4,1
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x1) != 0);
	ctx.r4.s64 = ctx.r4.s32 >> 1;
	// li r27,4
	ctx.r27.s64 = 4;
loc_82B09754:
	// cmpwi cr6,r26,0
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// blt cr6,0x82b09870
	if (ctx.cr6.lt) goto loc_82B09870;
	// cmpw cr6,r26,r8
	ctx.cr6.compare<int32_t>(ctx.r26.s32, ctx.r8.s32, ctx.xer);
	// bge cr6,0x82b09870
	if (!ctx.cr6.lt) goto loc_82B09870;
	// lwz r10,24(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 24);
	// rlwinm. r31,r6,0,19,19
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 0) & 0x1000;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// lwz r9,28(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 28);
	// cntlzw r10,r10
	ctx.r10.u64 = ctx.r10.u32 == 0 ? 32 : __builtin_clz(ctx.r10.u32);
	// cntlzw r9,r9
	ctx.r9.u64 = ctx.r9.u32 == 0 ? 32 : __builtin_clz(ctx.r9.u32);
	// rlwinm r8,r10,27,31,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 27) & 0x1;
	// rlwinm r9,r9,27,31,31
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 27) & 0x1;
	// beq 0x82b097a0
	if (ctx.cr0.eq) goto loc_82B097A0;
	// addi r10,r7,-1
	ctx.r10.s64 = ctx.r7.s64 + -1;
	// lhz r7,20(r11)
	ctx.r7.u64 = PPC_LOAD_U16(ctx.r11.u32 + 20);
	// li r31,1
	ctx.r31.s64 = 1;
	// slw r10,r31,r10
	ctx.r10.u64 = ctx.r10.u8 & 0x20 ? 0 : (ctx.r31.u32 << (ctx.r10.u8 & 0x3F));
	// and. r10,r10,r7
	ctx.r10.u64 = ctx.r10.u64 & ctx.r7.u64;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq 0x82b097a0
	if (ctx.cr0.eq) goto loc_82B097A0;
	// li r9,1
	ctx.r9.s64 = 1;
loc_82B097A0:
	// lhz r31,50(r11)
	ctx.r31.u64 = PPC_LOAD_U16(ctx.r11.u32 + 50);
	// rlwinm r7,r6,28,28,31
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 28) & 0xF;
	// cmpwi cr6,r27,3
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 3, ctx.xer);
	// bge cr6,0x82b097c0
	if (!ctx.cr6.lt) goto loc_82B097C0;
	// addi r10,r7,-4
	ctx.r10.s64 = ctx.r7.s64 + -4;
	// addic r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r7,r10,r7
	ctx.r7.u64 = ctx.r10.u64 & ctx.r7.u64;
loc_82B097C0:
	// cmpwi cr6,r7,0
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 0, ctx.xer);
	// ble cr6,0x82b0983c
	if (!ctx.cr6.gt) goto loc_82B0983C;
	// cmpwi cr6,r7,3
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 3, ctx.xer);
	// ble cr6,0x82b09800
	if (!ctx.cr6.gt) goto loc_82B09800;
	// cmpwi cr6,r7,4
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 4, ctx.xer);
	// bne cr6,0x82b0983c
	if (!ctx.cr6.eq) goto loc_82B0983C;
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	// rlwinm r8,r6,26,28,31
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 26) & 0xF;
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// bl 0x82b094a8
	ctx.lr = 0x82B097F0;
	sub_82B094A8(ctx, base);
	// b 0x82b09854
	goto loc_82B09854;
loc_82B097F4:
	// srawi r3,r3,2
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0x3) != 0);
	ctx.r3.s64 = ctx.r3.s32 >> 2;
	// srawi r30,r30,2
	ctx.xer.ca = (ctx.r30.s32 < 0) & ((ctx.r30.u32 & 0x3) != 0);
	ctx.r30.s64 = ctx.r30.s32 >> 2;
	// b 0x82b09738
	goto loc_82B09738;
loc_82B09800:
	// rlwinm r11,r6,20,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r6.u32 | (ctx.r6.u64 << 32), 20) & 0x1;
	// stw r7,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r7.u32);
	// mr r6,r5
	ctx.r6.u64 = ctx.r5.u64;
	// stw r29,108(r1)
	PPC_STORE_U32(ctx.r1.u32 + 108, ctx.r29.u32);
	// mr r10,r9
	ctx.r10.u64 = ctx.r9.u64;
	// stw r31,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r31.u32);
	// mr r5,r4
	ctx.r5.u64 = ctx.r4.u64;
	// stw r11,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r11.u32);
	// mr r9,r8
	ctx.r9.u64 = ctx.r8.u64;
	// mr r4,r3
	ctx.r4.u64 = ctx.r3.u64;
	// mr r8,r28
	ctx.r8.u64 = ctx.r28.u64;
	// mr r7,r30
	ctx.r7.u64 = ctx.r30.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82b08838
	ctx.lr = 0x82B09838;
	sub_82B08838(ctx, base);
	// b 0x82b09854
	goto loc_82B09854;
loc_82B0983C:
	// mr r10,r31
	ctx.r10.u64 = ctx.r31.u64;
	// stw r29,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r29.u32);
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r3,r11
	ctx.r3.u64 = ctx.r11.u64;
	// bl 0x82b086e8
	ctx.lr = 0x82B09854;
	sub_82B086E8(ctx, base);
loc_82B09854:
	// mr r6,r31
	ctx.r6.u64 = ctx.r31.u64;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r28
	ctx.r4.u64 = ctx.r28.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// bl 0x82b0b328
	ctx.lr = 0x82B09868;
	sub_82B0B328(ctx, base);
	// li r3,0
	ctx.r3.s64 = 0;
	// b 0x82b09874
	goto loc_82B09874;
loc_82B09870:
	// li r3,-1
	ctx.r3.s64 = -1;
loc_82B09874:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82fa76bc
	__restgprlr_25(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B0987C"))) PPC_WEAK_FUNC(sub_82B0987C);
PPC_FUNC_IMPL(__imp__sub_82B0987C) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B09880"))) PPC_WEAK_FUNC(sub_82B09880);
PPC_FUNC_IMPL(__imp__sub_82B09880) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa765c
	ctx.lr = 0x82B09888;
	__savegprlr_21(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lwz r11,96(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 96);
	// rlwinm r30,r4,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r9,80(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 80);
	// srawi r8,r3,4
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xF) != 0);
	ctx.r8.s64 = ctx.r3.s32 >> 4;
	// add r28,r11,r30
	ctx.r28.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lwz r10,112(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 112);
	// lwz r11,64(r5)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r5.u32 + 64);
	// add r29,r9,r30
	ctx.r29.u64 = ctx.r9.u64 + ctx.r30.u64;
	// add r27,r10,r30
	ctx.r27.u64 = ctx.r10.u64 + ctx.r30.u64;
	// add r26,r11,r30
	ctx.r26.u64 = ctx.r11.u64 + ctx.r30.u64;
	// mr r23,r3
	ctx.r23.u64 = ctx.r3.u64;
	// mr r31,r5
	ctx.r31.u64 = ctx.r5.u64;
	// mr r21,r6
	ctx.r21.u64 = ctx.r6.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// mr r22,r7
	ctx.r22.u64 = ctx.r7.u64;
	// addze r25,r8
	temp.s64 = ctx.r8.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r25.s64 = temp.s64;
	// bl 0x82bc7f30
	ctx.lr = 0x82B098DC;
	sub_82BC7F30(ctx, base);
	// addic. r25,r25,-1
	ctx.xer.ca = ctx.r25.u32 > 0;
	ctx.r25.s64 = ctx.r25.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// addi r26,r26,64
	ctx.r26.s64 = ctx.r26.s64 + 64;
	// addi r29,r29,64
	ctx.r29.s64 = ctx.r29.s64 + 64;
	// addi r28,r28,64
	ctx.r28.s64 = ctx.r28.s64 + 64;
	// addi r27,r27,64
	ctx.r27.s64 = ctx.r27.s64 + 64;
	// li r24,0
	ctx.r24.s64 = 0;
	// ble 0x82b0993c
	if (!ctx.cr0.gt) goto loc_82B0993C;
loc_82B098F8:
	// mr r6,r27
	ctx.r6.u64 = ctx.r27.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r26
	ctx.r3.u64 = ctx.r26.u64;
	// bl 0x82bc7f30
	ctx.lr = 0x82B0990C;
	sub_82BC7F30(ctx, base);
	// cmpwi cr6,r21,0
	ctx.cr6.compare<int32_t>(ctx.r21.s32, 0, ctx.xer);
	// beq cr6,0x82b09920
	if (ctx.cr6.eq) goto loc_82B09920;
	// addi r4,r29,-32
	ctx.r4.s64 = ctx.r29.s64 + -32;
	// addi r3,r26,-32
	ctx.r3.s64 = ctx.r26.s64 + -32;
	// bl 0x82bc7c58
	ctx.lr = 0x82B09920;
	sub_82BC7C58(ctx, base);
loc_82B09920:
	// addi r24,r24,1
	ctx.r24.s64 = ctx.r24.s64 + 1;
	// addi r26,r26,64
	ctx.r26.s64 = ctx.r26.s64 + 64;
	// addi r29,r29,64
	ctx.r29.s64 = ctx.r29.s64 + 64;
	// addi r28,r28,64
	ctx.r28.s64 = ctx.r28.s64 + 64;
	// addi r27,r27,64
	ctx.r27.s64 = ctx.r27.s64 + 64;
	// cmpw cr6,r24,r25
	ctx.cr6.compare<int32_t>(ctx.r24.s32, ctx.r25.s32, ctx.xer);
	// blt cr6,0x82b098f8
	if (ctx.cr6.lt) goto loc_82B098F8;
loc_82B0993C:
	// lwz r11,64(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 64);
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// lwz r10,72(r31)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + 72);
	// lwz r9,68(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 68);
	// add r29,r11,r30
	ctx.r29.u64 = ctx.r11.u64 + ctx.r30.u64;
	// lwz r11,76(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 76);
	// add r28,r10,r30
	ctx.r28.u64 = ctx.r10.u64 + ctx.r30.u64;
	// add r31,r9,r30
	ctx.r31.u64 = ctx.r9.u64 + ctx.r30.u64;
	// add r30,r11,r30
	ctx.r30.u64 = ctx.r11.u64 + ctx.r30.u64;
	// beq cr6,0x82b09978
	if (ctx.cr6.eq) goto loc_82B09978;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82b07c80
	ctx.lr = 0x82B09978;
	sub_82B07C80(ctx, base);
loc_82B09978:
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82bc7f28
	ctx.lr = 0x82B0998C;
	sub_82BC7F28(ctx, base);
	// addic. r26,r23,-4
	ctx.xer.ca = ctx.r23.u32 > 3;
	ctx.r26.s64 = ctx.r23.s64 + -4;
	ctx.cr0.compare<int32_t>(ctx.r26.s32, 0, ctx.xer);
	// addi r29,r29,16
	ctx.r29.s64 = ctx.r29.s64 + 16;
	// addi r31,r31,16
	ctx.r31.s64 = ctx.r31.s64 + 16;
	// addi r28,r28,16
	ctx.r28.s64 = ctx.r28.s64 + 16;
	// addi r30,r30,16
	ctx.r30.s64 = ctx.r30.s64 + 16;
	// li r27,0
	ctx.r27.s64 = 0;
	// ble 0x82b09a08
	if (!ctx.cr0.gt) goto loc_82B09A08;
loc_82B099A8:
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// beq cr6,0x82b099c4
	if (ctx.cr6.eq) goto loc_82B099C4;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82b07c80
	ctx.lr = 0x82B099C4;
	sub_82B07C80(ctx, base);
loc_82B099C4:
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r28
	ctx.r5.u64 = ctx.r28.u64;
	// mr r4,r31
	ctx.r4.u64 = ctx.r31.u64;
	// mr r3,r29
	ctx.r3.u64 = ctx.r29.u64;
	// bl 0x82bc7f28
	ctx.lr = 0x82B099D8;
	sub_82BC7F28(ctx, base);
	// cmpwi cr6,r21,0
	ctx.cr6.compare<int32_t>(ctx.r21.s32, 0, ctx.xer);
	// beq cr6,0x82b099ec
	if (ctx.cr6.eq) goto loc_82B099EC;
	// addi r4,r31,-8
	ctx.r4.s64 = ctx.r31.s64 + -8;
	// addi r3,r29,-8
	ctx.r3.s64 = ctx.r29.s64 + -8;
	// bl 0x82bc7c10
	ctx.lr = 0x82B099EC;
	sub_82BC7C10(ctx, base);
loc_82B099EC:
	// addi r27,r27,4
	ctx.r27.s64 = ctx.r27.s64 + 4;
	// addi r29,r29,16
	ctx.r29.s64 = ctx.r29.s64 + 16;
	// addi r31,r31,16
	ctx.r31.s64 = ctx.r31.s64 + 16;
	// addi r28,r28,16
	ctx.r28.s64 = ctx.r28.s64 + 16;
	// addi r30,r30,16
	ctx.r30.s64 = ctx.r30.s64 + 16;
	// cmpw cr6,r27,r26
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r26.s32, ctx.xer);
	// blt cr6,0x82b099a8
	if (ctx.cr6.lt) goto loc_82B099A8;
loc_82B09A08:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82fa76ac
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B09A10"))) PPC_WEAK_FUNC(sub_82B09A10);
PPC_FUNC_IMPL(__imp__sub_82B09A10) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7660
	ctx.lr = 0x82B09A18;
	__savegprlr_22(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r10,64(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 64);
	// lwz r9,80(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 80);
	// mr r23,r7
	ctx.r23.u64 = ctx.r7.u64;
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r10,112(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 112);
	// lwz r8,96(r5)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r5.u32 + 96);
	// add r30,r9,r11
	ctx.r30.u64 = ctx.r9.u64 + ctx.r11.u64;
	// add r28,r10,r11
	ctx.r28.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwz r9,32(r5)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r5.u32 + 32);
	// add r29,r8,r11
	ctx.r29.u64 = ctx.r8.u64 + ctx.r11.u64;
	// lwz r10,48(r5)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + 48);
	// srawi r7,r3,4
	ctx.xer.ca = (ctx.r3.s32 < 0) & ((ctx.r3.u32 & 0xF) != 0);
	ctx.r7.s64 = ctx.r3.s32 >> 4;
	// mr r22,r6
	ctx.r22.u64 = ctx.r6.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// addze r25,r7
	temp.s64 = ctx.r7.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r7.u32;
	ctx.r25.s64 = temp.s64;
	// add r27,r9,r11
	ctx.r27.u64 = ctx.r9.u64 + ctx.r11.u64;
	// add r26,r10,r11
	ctx.r26.u64 = ctx.r10.u64 + ctx.r11.u64;
	// bl 0x82bc7f30
	ctx.lr = 0x82B09A74;
	sub_82BC7F30(ctx, base);
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// beq cr6,0x82b09a90
	if (ctx.cr6.eq) goto loc_82B09A90;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82bc7cd8
	ctx.lr = 0x82B09A90;
	sub_82BC7CD8(ctx, base);
loc_82B09A90:
	// addic. r24,r25,-1
	ctx.xer.ca = ctx.r25.u32 > 0;
	ctx.r24.s64 = ctx.r25.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// addi r27,r27,32
	ctx.r27.s64 = ctx.r27.s64 + 32;
	// addi r26,r26,32
	ctx.r26.s64 = ctx.r26.s64 + 32;
	// addi r31,r31,64
	ctx.r31.s64 = ctx.r31.s64 + 64;
	// addi r30,r30,64
	ctx.r30.s64 = ctx.r30.s64 + 64;
	// addi r29,r29,64
	ctx.r29.s64 = ctx.r29.s64 + 64;
	// addi r28,r28,64
	ctx.r28.s64 = ctx.r28.s64 + 64;
	// li r25,0
	ctx.r25.s64 = 0;
	// ble 0x82b09b24
	if (!ctx.cr0.gt) goto loc_82B09B24;
loc_82B09AB4:
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bc7f30
	ctx.lr = 0x82B09AC8;
	sub_82BC7F30(ctx, base);
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// beq cr6,0x82b09ae4
	if (ctx.cr6.eq) goto loc_82B09AE4;
	// addi r6,r30,-32
	ctx.r6.s64 = ctx.r30.s64 + -32;
	// addi r5,r31,-32
	ctx.r5.s64 = ctx.r31.s64 + -32;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82bc81f8
	ctx.lr = 0x82B09AE4;
	sub_82BC81F8(ctx, base);
loc_82B09AE4:
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// beq cr6,0x82b09b00
	if (ctx.cr6.eq) goto loc_82B09B00;
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// beq cr6,0x82b09b00
	if (ctx.cr6.eq) goto loc_82B09B00;
	// addi r4,r28,-32
	ctx.r4.s64 = ctx.r28.s64 + -32;
	// addi r3,r29,-32
	ctx.r3.s64 = ctx.r29.s64 + -32;
	// bl 0x82bc7c58
	ctx.lr = 0x82B09B00;
	sub_82BC7C58(ctx, base);
loc_82B09B00:
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// addi r31,r31,64
	ctx.r31.s64 = ctx.r31.s64 + 64;
	// addi r30,r30,64
	ctx.r30.s64 = ctx.r30.s64 + 64;
	// addi r29,r29,64
	ctx.r29.s64 = ctx.r29.s64 + 64;
	// addi r28,r28,64
	ctx.r28.s64 = ctx.r28.s64 + 64;
	// addi r27,r27,64
	ctx.r27.s64 = ctx.r27.s64 + 64;
	// addi r26,r26,64
	ctx.r26.s64 = ctx.r26.s64 + 64;
	// cmpw cr6,r25,r24
	ctx.cr6.compare<int32_t>(ctx.r25.s32, ctx.r24.s32, ctx.xer);
	// blt cr6,0x82b09ab4
	if (ctx.cr6.lt) goto loc_82B09AB4;
loc_82B09B24:
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// beq cr6,0x82b09b40
	if (ctx.cr6.eq) goto loc_82B09B40;
	// addi r6,r30,-32
	ctx.r6.s64 = ctx.r30.s64 + -32;
	// addi r5,r31,-32
	ctx.r5.s64 = ctx.r31.s64 + -32;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82bc7cd8
	ctx.lr = 0x82B09B40;
	sub_82BC7CD8(ctx, base);
loc_82B09B40:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82fa76b0
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B09B48"))) PPC_WEAK_FUNC(sub_82B09B48);
PPC_FUNC_IMPL(__imp__sub_82B09B48) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa765c
	ctx.lr = 0x82B09B50;
	__savegprlr_21(ctx, base);
	// stwu r1,-176(r1)
	ea = -176 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r22,r9
	ctx.r22.u64 = ctx.r9.u64;
	// rlwinm r11,r5,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r9,r5,2
	ctx.r9.s64 = ctx.r5.s64 + 2;
	// add r10,r11,r6
	ctx.r10.u64 = ctx.r11.u64 + ctx.r6.u64;
	// mr r25,r3
	ctx.r25.u64 = ctx.r3.u64;
	// mr r21,r7
	ctx.r21.u64 = ctx.r7.u64;
	// rlwinm r31,r9,2,0,29
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r7,r5,3
	ctx.r7.s64 = ctx.r5.s64 + 3;
	// addi r3,r5,4
	ctx.r3.s64 = ctx.r5.s64 + 4;
	// lwz r9,4(r10)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + 4);
	// addi r5,r5,5
	ctx.r5.s64 = ctx.r5.s64 + 5;
	// mr r23,r8
	ctx.r23.u64 = ctx.r8.u64;
	// lwz r8,0(r10)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r10.u32 + 0);
	// rlwinm r7,r7,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r7.u32 | (ctx.r7.u64 << 32), 2) & 0xFFFFFFFC;
	// lwzx r10,r31,r6
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r31.u32 + ctx.r6.u32);
	// rlwinm r3,r3,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r3.u32 | (ctx.r3.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r5,r5,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r5.u32 | (ctx.r5.u64 << 32), 2) & 0xFFFFFFFC;
	// rlwinm r11,r4,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// add r27,r8,r11
	ctx.r27.u64 = ctx.r8.u64 + ctx.r11.u64;
	// lwzx r8,r7,r6
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r7.u32 + ctx.r6.u32);
	// add r26,r9,r11
	ctx.r26.u64 = ctx.r9.u64 + ctx.r11.u64;
	// lwzx r9,r3,r6
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r3.u32 + ctx.r6.u32);
	// add r31,r10,r11
	ctx.r31.u64 = ctx.r10.u64 + ctx.r11.u64;
	// lwzx r10,r5,r6
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r5.u32 + ctx.r6.u32);
	// add r30,r8,r11
	ctx.r30.u64 = ctx.r8.u64 + ctx.r11.u64;
	// add r29,r9,r11
	ctx.r29.u64 = ctx.r9.u64 + ctx.r11.u64;
	// add r28,r10,r11
	ctx.r28.u64 = ctx.r10.u64 + ctx.r11.u64;
	// beq cr6,0x82b09bdc
	if (ctx.cr6.eq) goto loc_82B09BDC;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b07c80
	ctx.lr = 0x82B09BDC;
	sub_82B07C80(ctx, base);
loc_82B09BDC:
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bc7f28
	ctx.lr = 0x82B09BF0;
	sub_82BC7F28(ctx, base);
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// beq cr6,0x82b09c0c
	if (ctx.cr6.eq) goto loc_82B09C0C;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82bc7ca0
	ctx.lr = 0x82B09C0C;
	sub_82BC7CA0(ctx, base);
loc_82B09C0C:
	// addic. r24,r25,-4
	ctx.xer.ca = ctx.r25.u32 > 3;
	ctx.r24.s64 = ctx.r25.s64 + -4;
	ctx.cr0.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// addi r27,r27,8
	ctx.r27.s64 = ctx.r27.s64 + 8;
	// addi r26,r26,8
	ctx.r26.s64 = ctx.r26.s64 + 8;
	// addi r31,r31,16
	ctx.r31.s64 = ctx.r31.s64 + 16;
	// addi r30,r30,16
	ctx.r30.s64 = ctx.r30.s64 + 16;
	// addi r29,r29,16
	ctx.r29.s64 = ctx.r29.s64 + 16;
	// addi r28,r28,16
	ctx.r28.s64 = ctx.r28.s64 + 16;
	// li r25,0
	ctx.r25.s64 = 0;
	// ble 0x82b09cbc
	if (!ctx.cr0.gt) goto loc_82B09CBC;
loc_82B09C30:
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// beq cr6,0x82b09c4c
	if (ctx.cr6.eq) goto loc_82B09C4C;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b07c80
	ctx.lr = 0x82B09C4C;
	sub_82B07C80(ctx, base);
loc_82B09C4C:
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bc7f28
	ctx.lr = 0x82B09C60;
	sub_82BC7F28(ctx, base);
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// beq cr6,0x82b09c7c
	if (ctx.cr6.eq) goto loc_82B09C7C;
	// addi r6,r30,-8
	ctx.r6.s64 = ctx.r30.s64 + -8;
	// addi r5,r31,-8
	ctx.r5.s64 = ctx.r31.s64 + -8;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82bc81f0
	ctx.lr = 0x82B09C7C;
	sub_82BC81F0(ctx, base);
loc_82B09C7C:
	// cmpwi cr6,r21,0
	ctx.cr6.compare<int32_t>(ctx.r21.s32, 0, ctx.xer);
	// beq cr6,0x82b09c98
	if (ctx.cr6.eq) goto loc_82B09C98;
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// beq cr6,0x82b09c98
	if (ctx.cr6.eq) goto loc_82B09C98;
	// addi r4,r28,-8
	ctx.r4.s64 = ctx.r28.s64 + -8;
	// addi r3,r29,-8
	ctx.r3.s64 = ctx.r29.s64 + -8;
	// bl 0x82bc7c10
	ctx.lr = 0x82B09C98;
	sub_82BC7C10(ctx, base);
loc_82B09C98:
	// addi r25,r25,4
	ctx.r25.s64 = ctx.r25.s64 + 4;
	// addi r31,r31,16
	ctx.r31.s64 = ctx.r31.s64 + 16;
	// addi r30,r30,16
	ctx.r30.s64 = ctx.r30.s64 + 16;
	// addi r29,r29,16
	ctx.r29.s64 = ctx.r29.s64 + 16;
	// addi r28,r28,16
	ctx.r28.s64 = ctx.r28.s64 + 16;
	// addi r27,r27,16
	ctx.r27.s64 = ctx.r27.s64 + 16;
	// addi r26,r26,16
	ctx.r26.s64 = ctx.r26.s64 + 16;
	// cmpw cr6,r25,r24
	ctx.cr6.compare<int32_t>(ctx.r25.s32, ctx.r24.s32, ctx.xer);
	// blt cr6,0x82b09c30
	if (ctx.cr6.lt) goto loc_82B09C30;
loc_82B09CBC:
	// cmpwi cr6,r23,0
	ctx.cr6.compare<int32_t>(ctx.r23.s32, 0, ctx.xer);
	// beq cr6,0x82b09cd8
	if (ctx.cr6.eq) goto loc_82B09CD8;
	// addi r6,r30,-8
	ctx.r6.s64 = ctx.r30.s64 + -8;
	// addi r5,r31,-8
	ctx.r5.s64 = ctx.r31.s64 + -8;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82bc7ca0
	ctx.lr = 0x82B09CD8;
	sub_82BC7CA0(ctx, base);
loc_82B09CD8:
	// addi r1,r1,176
	ctx.r1.s64 = ctx.r1.s64 + 176;
	// b 0x82fa76ac
	__restgprlr_21(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B09CE0"))) PPC_WEAK_FUNC(sub_82B09CE0);
PPC_FUNC_IMPL(__imp__sub_82B09CE0) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7640
	ctx.lr = 0x82B09CE8;
	__savegprlr_14(ctx, base);
	// stwu r1,-240(r1)
	ea = -240 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// mr r17,r3
	ctx.r17.u64 = ctx.r3.u64;
	// stw r7,292(r1)
	PPC_STORE_U32(ctx.r1.u32 + 292, ctx.r7.u32);
	// mr r15,r4
	ctx.r15.u64 = ctx.r4.u64;
	// mr r16,r6
	ctx.r16.u64 = ctx.r6.u64;
	// mullw r19,r4,r5
	ctx.r19.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r5.s32);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// ble cr6,0x82b09eac
	if (!ctx.cr6.gt) goto loc_82B09EAC;
	// li r18,0
	ctx.r18.s64 = 0;
	// mr r14,r5
	ctx.r14.u64 = ctx.r5.u64;
loc_82B09D10:
	// li r27,0
	ctx.r27.s64 = 0;
	// li r26,0
	ctx.r26.s64 = 0;
	// li r22,0
	ctx.r22.s64 = 0;
	// cmpwi cr6,r17,0
	ctx.cr6.compare<int32_t>(ctx.r17.s32, 0, ctx.xer);
	// ble cr6,0x82b09ea0
	if (!ctx.cr6.gt) goto loc_82B09EA0;
	// rlwinm r21,r19,2,0,29
	ctx.r21.u64 = __builtin_rotateleft64(ctx.r19.u32 | (ctx.r19.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r20,r15,-4
	ctx.r20.s64 = ctx.r15.s64 + -4;
loc_82B09D2C:
	// mullw r11,r22,r19
	ctx.r11.s64 = int64_t(ctx.r22.s32) * int64_t(ctx.r19.s32);
	// add r11,r11,r18
	ctx.r11.u64 = ctx.r11.u64 + ctx.r18.u64;
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r31,r11,r16
	ctx.r31.u64 = ctx.r11.u64 + ctx.r16.u64;
	// add r30,r21,r31
	ctx.r30.u64 = ctx.r21.u64 + ctx.r31.u64;
	// add r29,r21,r30
	ctx.r29.u64 = ctx.r21.u64 + ctx.r30.u64;
	// add r28,r21,r29
	ctx.r28.u64 = ctx.r21.u64 + ctx.r29.u64;
	// beq cr6,0x82b09d5c
	if (ctx.cr6.eq) goto loc_82B09D5C;
	// rlwinm r11,r19,3,0,28
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r19.u32 | (ctx.r19.u64 << 32), 3) & 0xFFFFFFF8;
	// subf r27,r11,r31
	ctx.r27.s64 = ctx.r31.s64 - ctx.r11.s64;
	// add r26,r21,r27
	ctx.r26.u64 = ctx.r21.u64 + ctx.r27.u64;
loc_82B09D5C:
	// lwz r11,292(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 292);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82b09d7c
	if (ctx.cr6.eq) goto loc_82B09D7C;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b07c80
	ctx.lr = 0x82B09D7C;
	sub_82B07C80(ctx, base);
loc_82B09D7C:
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bc7f28
	ctx.lr = 0x82B09D90;
	sub_82BC7F28(ctx, base);
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// beq cr6,0x82b09dac
	if (ctx.cr6.eq) goto loc_82B09DAC;
	// mr r6,r30
	ctx.r6.u64 = ctx.r30.u64;
	// mr r5,r31
	ctx.r5.u64 = ctx.r31.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82bc7ca0
	ctx.lr = 0x82B09DAC;
	sub_82BC7CA0(ctx, base);
loc_82B09DAC:
	// addi r27,r27,8
	ctx.r27.s64 = ctx.r27.s64 + 8;
	// addi r26,r26,8
	ctx.r26.s64 = ctx.r26.s64 + 8;
	// addi r31,r31,16
	ctx.r31.s64 = ctx.r31.s64 + 16;
	// addi r30,r30,16
	ctx.r30.s64 = ctx.r30.s64 + 16;
	// addi r29,r29,16
	ctx.r29.s64 = ctx.r29.s64 + 16;
	// addi r28,r28,16
	ctx.r28.s64 = ctx.r28.s64 + 16;
	// li r23,0
	ctx.r23.s64 = 0;
	// cmpwi cr6,r20,0
	ctx.cr6.compare<int32_t>(ctx.r20.s32, 0, ctx.xer);
	// ble cr6,0x82b09e78
	if (!ctx.cr6.gt) goto loc_82B09E78;
	// addi r25,r31,-8
	ctx.r25.s64 = ctx.r31.s64 + -8;
	// addi r24,r30,-8
	ctx.r24.s64 = ctx.r30.s64 + -8;
loc_82B09DD8:
	// lwz r11,292(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 292);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82b09df8
	if (ctx.cr6.eq) goto loc_82B09DF8;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82b07c80
	ctx.lr = 0x82B09DF8;
	sub_82B07C80(ctx, base);
loc_82B09DF8:
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// mr r5,r29
	ctx.r5.u64 = ctx.r29.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// bl 0x82bc7f28
	ctx.lr = 0x82B09E0C;
	sub_82BC7F28(ctx, base);
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// bne cr6,0x82b09e20
	if (!ctx.cr6.eq) goto loc_82B09E20;
	// mr r4,r24
	ctx.r4.u64 = ctx.r24.u64;
	// mr r3,r25
	ctx.r3.u64 = ctx.r25.u64;
	// b 0x82b09e48
	goto loc_82B09E48;
loc_82B09E20:
	// mr r6,r24
	ctx.r6.u64 = ctx.r24.u64;
	// mr r5,r25
	ctx.r5.u64 = ctx.r25.u64;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82bc81f0
	ctx.lr = 0x82B09E34;
	sub_82BC81F0(ctx, base);
	// addi r11,r17,-4
	ctx.r11.s64 = ctx.r17.s64 + -4;
	// cmpw cr6,r22,r11
	ctx.cr6.compare<int32_t>(ctx.r22.s32, ctx.r11.s32, ctx.xer);
	// bne cr6,0x82b09e4c
	if (!ctx.cr6.eq) goto loc_82B09E4C;
	// addi r4,r28,-8
	ctx.r4.s64 = ctx.r28.s64 + -8;
	// addi r3,r29,-8
	ctx.r3.s64 = ctx.r29.s64 + -8;
loc_82B09E48:
	// bl 0x82bc7c10
	ctx.lr = 0x82B09E4C;
	sub_82BC7C10(ctx, base);
loc_82B09E4C:
	// addi r23,r23,4
	ctx.r23.s64 = ctx.r23.s64 + 4;
	// addi r31,r31,16
	ctx.r31.s64 = ctx.r31.s64 + 16;
	// addi r25,r25,16
	ctx.r25.s64 = ctx.r25.s64 + 16;
	// addi r30,r30,16
	ctx.r30.s64 = ctx.r30.s64 + 16;
	// addi r24,r24,16
	ctx.r24.s64 = ctx.r24.s64 + 16;
	// addi r29,r29,16
	ctx.r29.s64 = ctx.r29.s64 + 16;
	// addi r28,r28,16
	ctx.r28.s64 = ctx.r28.s64 + 16;
	// addi r27,r27,16
	ctx.r27.s64 = ctx.r27.s64 + 16;
	// addi r26,r26,16
	ctx.r26.s64 = ctx.r26.s64 + 16;
	// cmpw cr6,r23,r20
	ctx.cr6.compare<int32_t>(ctx.r23.s32, ctx.r20.s32, ctx.xer);
	// blt cr6,0x82b09dd8
	if (ctx.cr6.lt) goto loc_82B09DD8;
loc_82B09E78:
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// beq cr6,0x82b09e94
	if (ctx.cr6.eq) goto loc_82B09E94;
	// addi r6,r30,-8
	ctx.r6.s64 = ctx.r30.s64 + -8;
	// addi r5,r31,-8
	ctx.r5.s64 = ctx.r31.s64 + -8;
	// mr r4,r26
	ctx.r4.u64 = ctx.r26.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82bc7ca0
	ctx.lr = 0x82B09E94;
	sub_82BC7CA0(ctx, base);
loc_82B09E94:
	// addi r22,r22,4
	ctx.r22.s64 = ctx.r22.s64 + 4;
	// cmpw cr6,r22,r17
	ctx.cr6.compare<int32_t>(ctx.r22.s32, ctx.r17.s32, ctx.xer);
	// blt cr6,0x82b09d2c
	if (ctx.cr6.lt) goto loc_82B09D2C;
loc_82B09EA0:
	// addic. r14,r14,-1
	ctx.xer.ca = ctx.r14.u32 > 0;
	ctx.r14.s64 = ctx.r14.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r14.s32, 0, ctx.xer);
	// add r18,r18,r15
	ctx.r18.u64 = ctx.r18.u64 + ctx.r15.u64;
	// bne 0x82b09d10
	if (!ctx.cr0.eq) goto loc_82B09D10;
loc_82B09EAC:
	// addi r1,r1,240
	ctx.r1.s64 = ctx.r1.s64 + 240;
	// b 0x82fa7690
	__restgprlr_14(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B09EB4"))) PPC_WEAK_FUNC(sub_82B09EB4);
PPC_FUNC_IMPL(__imp__sub_82B09EB4) {
	PPC_FUNC_PROLOGUE();
	// .long 0x0
}

__attribute__((alias("__imp__sub_82B09EB8"))) PPC_WEAK_FUNC(sub_82B09EB8);
PPC_FUNC_IMPL(__imp__sub_82B09EB8) {
	PPC_FUNC_PROLOGUE();
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7660
	ctx.lr = 0x82B09EC0;
	__savegprlr_22(ctx, base);
	// subfic r30,r7,64
	ctx.xer.ca = ctx.r7.u32 <= 64;
	ctx.r30.s64 = 64 - ctx.r7.s64;
	// mullw r25,r4,r5
	ctx.r25.s64 = int64_t(ctx.r4.s32) * int64_t(ctx.r5.s32);
	// cmpwi cr6,r5,0
	ctx.cr6.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// ble cr6,0x82b0a024
	if (!ctx.cr6.gt) goto loc_82B0A024;
	// lwz r26,-96(r1)
	ctx.r26.u64 = PPC_LOAD_U32(ctx.r1.u32 + -96);
	// addi r24,r3,-2
	ctx.r24.s64 = ctx.r3.s64 + -2;
	// rlwinm r23,r4,2,0,29
	ctx.r23.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 2) & 0xFFFFFFFC;
loc_82B09EDC:
	// li r27,0
	ctx.r27.s64 = 0;
	// cmpwi cr6,r3,0
	ctx.cr6.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// ble cr6,0x82b09fc4
	if (!ctx.cr6.gt) goto loc_82B09FC4;
	// rlwinm r29,r25,2,0,29
	ctx.r29.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r28,r4,-2
	ctx.r28.s64 = ctx.r4.s64 + -2;
	// mr r31,r6
	ctx.r31.u64 = ctx.r6.u64;
loc_82B09EF4:
	// mr r26,r31
	ctx.r26.u64 = ctx.r31.u64;
	// cmpwi cr6,r4,1
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 1, ctx.xer);
	// ble cr6,0x82b09f30
	if (!ctx.cr6.gt) goto loc_82B09F30;
	// addi r10,r4,-1
	ctx.r10.s64 = ctx.r4.s64 + -1;
	// mr r11,r31
	ctx.r11.u64 = ctx.r31.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82B09F0C:
	// lwz r10,4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mullw r9,r10,r30
	ctx.r9.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r30.s32);
	// mullw r10,r8,r7
	ctx.r10.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r7.s32);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// addi r10,r10,32
	ctx.r10.s64 = ctx.r10.s64 + 32;
	// srawi r10,r10,6
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3F) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 6;
	// stwu r10,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x82b09f0c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82B09F0C;
loc_82B09F30:
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// blt cr6,0x82b09f70
	if (ctx.cr6.lt) goto loc_82B09F70;
	// addi r11,r28,1
	ctx.r11.s64 = ctx.r28.s64 + 1;
	// addi r10,r28,1
	ctx.r10.s64 = ctx.r28.s64 + 1;
	// rlwinm r11,r11,2,0,29
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// add r11,r11,r31
	ctx.r11.u64 = ctx.r11.u64 + ctx.r31.u64;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
loc_82B09F4C:
	// lwz r10,-4(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + -4);
	// lwz r8,0(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 0);
	// mullw r9,r10,r30
	ctx.r9.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r30.s32);
	// mullw r10,r8,r7
	ctx.r10.s64 = int64_t(ctx.r8.s32) * int64_t(ctx.r7.s32);
	// add r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 + ctx.r10.u64;
	// addi r10,r10,32
	ctx.r10.s64 = ctx.r10.s64 + 32;
	// srawi r10,r10,6
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x3F) != 0);
	ctx.r10.s64 = ctx.r10.s32 >> 6;
	// stwu r10,-4(r11)
	ea = -4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r10.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x82b09f4c
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82B09F4C;
loc_82B09F70:
	// cmpwi cr6,r27,0
	ctx.cr6.compare<int32_t>(ctx.r27.s32, 0, ctx.xer);
	// beq cr6,0x82b09fb4
	if (ctx.cr6.eq) goto loc_82B09FB4;
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x82b09fb4
	if (!ctx.cr6.gt) goto loc_82B09FB4;
	// subf r10,r29,r31
	ctx.r10.s64 = ctx.r31.s64 - ctx.r29.s64;
	// mtctr r4
	ctx.ctr.u64 = ctx.r4.u64;
	// addi r11,r31,-4
	ctx.r11.s64 = ctx.r31.s64 + -4;
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
loc_82B09F90:
	// lwzu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// lwz r22,4(r11)
	ctx.r22.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mullw r8,r9,r7
	ctx.r8.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r7.s32);
	// mullw r9,r22,r30
	ctx.r9.s64 = int64_t(ctx.r22.s32) * int64_t(ctx.r30.s32);
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// addi r9,r9,32
	ctx.r9.s64 = ctx.r9.s64 + 32;
	// srawi r9,r9,6
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3F) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 6;
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x82b09f90
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82B09F90;
loc_82B09FB4:
	// addi r27,r27,1
	ctx.r27.s64 = ctx.r27.s64 + 1;
	// add r31,r31,r29
	ctx.r31.u64 = ctx.r31.u64 + ctx.r29.u64;
	// cmpw cr6,r27,r3
	ctx.cr6.compare<int32_t>(ctx.r27.s32, ctx.r3.s32, ctx.xer);
	// blt cr6,0x82b09ef4
	if (ctx.cr6.lt) goto loc_82B09EF4;
loc_82B09FC4:
	// cmpwi r24,0
	ctx.cr0.compare<int32_t>(ctx.r24.s32, 0, ctx.xer);
	// bgt 0x82b0a018
	if (ctx.cr0.gt) goto loc_82B0A018;
	// subfic r31,r24,1
	ctx.xer.ca = ctx.r24.u32 <= 1;
	ctx.r31.s64 = 1 - ctx.r24.s64;
loc_82B09FD0:
	// cmpwi cr6,r4,0
	ctx.cr6.compare<int32_t>(ctx.r4.s32, 0, ctx.xer);
	// ble cr6,0x82b0a010
	if (!ctx.cr6.gt) goto loc_82B0A010;
	// rlwinm r10,r25,2,0,29
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r25.u32 | (ctx.r25.u64 << 32), 2) & 0xFFFFFFFC;
	// mtctr r4
	ctx.ctr.u64 = ctx.r4.u64;
	// addi r11,r26,-4
	ctx.r11.s64 = ctx.r26.s64 + -4;
	// add r10,r10,r26
	ctx.r10.u64 = ctx.r10.u64 + ctx.r26.u64;
	// addi r10,r10,-4
	ctx.r10.s64 = ctx.r10.s64 + -4;
loc_82B09FEC:
	// lwzu r9,4(r10)
	ea = 4 + ctx.r10.u32;
	ctx.r9.u64 = PPC_LOAD_U32(ea);
	ctx.r10.u32 = ea;
	// lwz r29,4(r11)
	ctx.r29.u64 = PPC_LOAD_U32(ctx.r11.u32 + 4);
	// mullw r8,r9,r7
	ctx.r8.s64 = int64_t(ctx.r9.s32) * int64_t(ctx.r7.s32);
	// mullw r9,r29,r30
	ctx.r9.s64 = int64_t(ctx.r29.s32) * int64_t(ctx.r30.s32);
	// add r9,r9,r8
	ctx.r9.u64 = ctx.r9.u64 + ctx.r8.u64;
	// addi r9,r9,32
	ctx.r9.s64 = ctx.r9.s64 + 32;
	// srawi r9,r9,6
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x3F) != 0);
	ctx.r9.s64 = ctx.r9.s32 >> 6;
	// stwu r9,4(r11)
	ea = 4 + ctx.r11.u32;
	PPC_STORE_U32(ea, ctx.r9.u32);
	ctx.r11.u32 = ea;
	// bdnz 0x82b09fec
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82B09FEC;
loc_82B0A010:
	// addic. r31,r31,-1
	ctx.xer.ca = ctx.r31.u32 > 0;
	ctx.r31.s64 = ctx.r31.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r31.s32, 0, ctx.xer);
	// bne 0x82b09fd0
	if (!ctx.cr0.eq) goto loc_82B09FD0;
loc_82B0A018:
	// addic. r5,r5,-1
	ctx.xer.ca = ctx.r5.u32 > 0;
	ctx.r5.s64 = ctx.r5.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r5.s32, 0, ctx.xer);
	// add r6,r23,r6
	ctx.r6.u64 = ctx.r23.u64 + ctx.r6.u64;
	// bne 0x82b09edc
	if (!ctx.cr0.eq) goto loc_82B09EDC;
loc_82B0A024:
	// b 0x82fa76b0
	__restgprlr_22(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B0A028"))) PPC_WEAK_FUNC(sub_82B0A028);
PPC_FUNC_IMPL(__imp__sub_82B0A028) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7644
	ctx.lr = 0x82B0A030;
	__savegprlr_15(ctx, base);
	// stwu r1,-224(r1)
	ea = -224 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// rlwinm r11,r10,1,31,31
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 1) & 0x1;
	// lhz r24,52(r3)
	ctx.r24.u64 = PPC_LOAD_U16(ctx.r3.u32 + 52);
	// mr r18,r9
	ctx.r18.u64 = ctx.r9.u64;
	// srawi r9,r6,2
	ctx.xer.ca = (ctx.r6.s32 < 0) & ((ctx.r6.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r6.s32 >> 2;
	// addi r11,r11,-1
	ctx.r11.s64 = ctx.r11.s64 + -1;
	// addze r22,r9
	temp.s64 = ctx.r9.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r22.s64 = temp.s64;
	// srawi r9,r7,2
	ctx.xer.ca = (ctx.r7.s32 < 0) & ((ctx.r7.u32 & 0x3) != 0);
	ctx.r9.s64 = ctx.r7.s32 >> 2;
	// and r16,r11,r10
	ctx.r16.u64 = ctx.r11.u64 & ctx.r10.u64;
	// mr r21,r3
	ctx.r21.u64 = ctx.r3.u64;
	// mr r19,r4
	ctx.r19.u64 = ctx.r4.u64;
	// mr r15,r5
	ctx.r15.u64 = ctx.r5.u64;
	// mr r17,r8
	ctx.r17.u64 = ctx.r8.u64;
	// addze r27,r9
	temp.s64 = ctx.r9.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r9.u32;
	ctx.r27.s64 = temp.s64;
	// cmpwi cr6,r16,14
	ctx.cr6.compare<int32_t>(ctx.r16.s32, 14, ctx.xer);
	// ble cr6,0x82b0a074
	if (!ctx.cr6.gt) goto loc_82B0A074;
	// li r16,14
	ctx.r16.s64 = 14;
loc_82B0A074:
	// lwz r11,308(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 308);
	// rlwinm r10,r11,1,31,31
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 1) & 0x1;
	// addi r10,r10,-1
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// and r7,r10,r11
	ctx.r7.u64 = ctx.r10.u64 & ctx.r11.u64;
	// cmpwi cr6,r7,14
	ctx.cr6.compare<int32_t>(ctx.r7.s32, 14, ctx.xer);
	// ble cr6,0x82b0a090
	if (!ctx.cr6.gt) goto loc_82B0A090;
	// li r7,14
	ctx.r7.s64 = 14;
loc_82B0A090:
	// lwz r11,16(r15)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r15.u32 + 16);
	// lwz r20,324(r1)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r1.u32 + 324);
	// lwz r30,316(r1)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r1.u32 + 316);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82b0a180
	if (ctx.cr6.eq) goto loc_82B0A180;
	// srawi r8,r22,2
	ctx.xer.ca = (ctx.r22.s32 < 0) & ((ctx.r22.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r22.s32 >> 2;
	// lwz r9,0(r30)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mullw r11,r27,r24
	ctx.r11.s64 = int64_t(ctx.r27.s32) * int64_t(ctx.r24.s32);
	// lwz r10,8(r30)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// addze. r28,r8
	temp.s64 = ctx.r8.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r28.s64 = temp.s64;
	ctx.cr0.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// srawi r8,r27,2
	ctx.xer.ca = (ctx.r27.s32 < 0) & ((ctx.r27.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r27.s32 >> 2;
	// addze r23,r8
	temp.s64 = ctx.r8.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r23.s64 = temp.s64;
	// srawi r8,r11,2
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x3) != 0);
	ctx.r8.s64 = ctx.r11.s32 >> 2;
	// addze r8,r8
	temp.s64 = ctx.r8.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r8.u32;
	ctx.r8.s64 = temp.s64;
	// ble 0x82b0a114
	if (!ctx.cr0.gt) goto loc_82B0A114;
	// rlwinm r31,r11,4,0,27
	ctx.r31.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 4) & 0xFFFFFFF0;
	// mr r11,r9
	ctx.r11.u64 = ctx.r9.u64;
	// rlwinm r3,r8,2,0,29
	ctx.r3.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// mr r9,r28
	ctx.r9.u64 = ctx.r28.u64;
loc_82B0A0DC:
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// ble cr6,0x82b0a104
	if (!ctx.cr6.gt) goto loc_82B0A104;
	// addi r5,r10,-4
	ctx.r5.s64 = ctx.r10.s64 + -4;
	// mtctr r8
	ctx.ctr.u64 = ctx.r8.u64;
	// addi r6,r11,-16
	ctx.r6.s64 = ctx.r11.s64 + -16;
loc_82B0A0F0:
	// lwzu r4,16(r6)
	ea = 16 + ctx.r6.u32;
	ctx.r4.u64 = PPC_LOAD_U32(ea);
	ctx.r6.u32 = ea;
	// addi r4,r4,2
	ctx.r4.s64 = ctx.r4.s64 + 2;
	// srawi r4,r4,2
	ctx.xer.ca = (ctx.r4.s32 < 0) & ((ctx.r4.u32 & 0x3) != 0);
	ctx.r4.s64 = ctx.r4.s32 >> 2;
	// stwu r4,4(r5)
	ea = 4 + ctx.r5.u32;
	PPC_STORE_U32(ea, ctx.r4.u32);
	ctx.r5.u32 = ea;
	// bdnz 0x82b0a0f0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82B0A0F0;
loc_82B0A104:
	// addic. r9,r9,-1
	ctx.xer.ca = ctx.r9.u32 > 0;
	ctx.r9.s64 = ctx.r9.s64 + -1;
	ctx.cr0.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// add r11,r31,r11
	ctx.r11.u64 = ctx.r31.u64 + ctx.r11.u64;
	// add r10,r3,r10
	ctx.r10.u64 = ctx.r3.u64 + ctx.r10.u64;
	// bne 0x82b0a0dc
	if (!ctx.cr0.eq) goto loc_82B0A0DC;
loc_82B0A114:
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// lwz r6,8(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82b09eb8
	ctx.lr = 0x82B0A128;
	sub_82B09EB8(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
	// cmpwi cr6,r28,0
	ctx.cr6.compare<int32_t>(ctx.r28.s32, 0, ctx.xer);
	// ble cr6,0x82b0a180
	if (!ctx.cr6.gt) goto loc_82B0A180;
	// srawi r11,r17,4
	ctx.xer.ca = (ctx.r17.s32 < 0) & ((ctx.r17.u32 & 0xF) != 0);
	ctx.r11.s64 = ctx.r17.s32 >> 4;
	// mullw r10,r23,r24
	ctx.r10.s64 = int64_t(ctx.r23.s32) * int64_t(ctx.r24.s32);
	// addze r26,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r26.s64 = temp.s64;
	// li r29,0
	ctx.r29.s64 = 0;
	// rlwinm r25,r10,2,0,29
	ctx.r25.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
loc_82B0A148:
	// lwz r11,8(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 8);
	// li r10,4
	ctx.r10.s64 = 4;
	// mr r9,r20
	ctx.r9.u64 = ctx.r20.u64;
	// lwz r4,16(r19)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r19.u32 + 16);
	// add r8,r29,r11
	ctx.r8.u64 = ctx.r29.u64 + ctx.r11.u64;
	// mr r7,r23
	ctx.r7.u64 = ctx.r23.u64;
	// subf r6,r26,r31
	ctx.r6.s64 = ctx.r31.s64 - ctx.r26.s64;
	// mr r5,r18
	ctx.r5.u64 = ctx.r18.u64;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x82b096c0
	ctx.lr = 0x82B0A170;
	sub_82B096C0(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// add r29,r25,r29
	ctx.r29.u64 = ctx.r25.u64 + ctx.r29.u64;
	// cmpw cr6,r31,r28
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r28.s32, ctx.xer);
	// blt cr6,0x82b0a148
	if (ctx.cr6.lt) goto loc_82B0A148;
loc_82B0A180:
	// lwz r11,12(r15)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r15.u32 + 12);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82b0a21c
	if (ctx.cr6.eq) goto loc_82B0A21C;
	// mullw r11,r27,r22
	ctx.r11.s64 = int64_t(ctx.r27.s32) * int64_t(ctx.r22.s32);
	// lwz r4,0(r30)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// lwz r3,4(r30)
	ctx.r3.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mullw r11,r11,r24
	ctx.r11.s64 = int64_t(ctx.r11.s32) * int64_t(ctx.r24.s32);
	// rlwinm r5,r11,2,0,29
	ctx.r5.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 2) & 0xFFFFFFFC;
	// bl 0x82fa77c0
	ctx.lr = 0x82B0A1A4;
	sub_82FA77C0(ctx, base);
	// li r7,1
	ctx.r7.s64 = 1;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// lwz r6,4(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x82b09ce0
	ctx.lr = 0x82B0A1BC;
	sub_82B09CE0(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// ble cr6,0x82b0a21c
	if (!ctx.cr6.gt) goto loc_82B0A21C;
	// srawi r11,r17,2
	ctx.xer.ca = (ctx.r17.s32 < 0) & ((ctx.r17.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r17.s32 >> 2;
	// mullw r10,r27,r24
	ctx.r10.s64 = int64_t(ctx.r27.s32) * int64_t(ctx.r24.s32);
	// addze r28,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r28.s64 = temp.s64;
	// li r29,0
	ctx.r29.s64 = 0;
	// rlwinm r26,r10,3,0,28
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 3) & 0xFFFFFFF8;
loc_82B0A1DC:
	// subf r9,r28,r31
	ctx.r9.s64 = ctx.r31.s64 - ctx.r28.s64;
	// lwz r11,4(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 4);
	// li r10,3
	ctx.r10.s64 = 3;
	// lwz r4,12(r19)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r19.u32 + 12);
	// srawi r6,r9,1
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r6.s64 = ctx.r9.s32 >> 1;
	// mr r9,r20
	ctx.r9.u64 = ctx.r20.u64;
	// add r8,r11,r29
	ctx.r8.u64 = ctx.r11.u64 + ctx.r29.u64;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// addze r6,r6
	temp.s64 = ctx.r6.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r6.u32;
	ctx.r6.s64 = temp.s64;
	// mr r5,r18
	ctx.r5.u64 = ctx.r18.u64;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x82b096c0
	ctx.lr = 0x82B0A20C;
	sub_82B096C0(ctx, base);
	// addi r31,r31,2
	ctx.r31.s64 = ctx.r31.s64 + 2;
	// add r29,r26,r29
	ctx.r29.u64 = ctx.r26.u64 + ctx.r29.u64;
	// cmpw cr6,r31,r22
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r22.s32, ctx.xer);
	// blt cr6,0x82b0a1dc
	if (ctx.cr6.lt) goto loc_82B0A1DC;
loc_82B0A21C:
	// lwz r11,8(r15)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r15.u32 + 8);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82b0a2b0
	if (ctx.cr6.eq) goto loc_82B0A2B0;
	// li r7,0
	ctx.r7.s64 = 0;
	// lwz r6,0(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x82b09ce0
	ctx.lr = 0x82B0A240;
	sub_82B09CE0(ctx, base);
	// mr r7,r16
	ctx.r7.u64 = ctx.r16.u64;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// lwz r6,0(r30)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// mr r4,r27
	ctx.r4.u64 = ctx.r27.u64;
	// mr r3,r22
	ctx.r3.u64 = ctx.r22.u64;
	// bl 0x82b09eb8
	ctx.lr = 0x82B0A258;
	sub_82B09EB8(ctx, base);
	// li r31,0
	ctx.r31.s64 = 0;
	// cmpwi cr6,r22,0
	ctx.cr6.compare<int32_t>(ctx.r22.s32, 0, ctx.xer);
	// ble cr6,0x82b0a2b0
	if (!ctx.cr6.gt) goto loc_82B0A2B0;
	// srawi r11,r17,2
	ctx.xer.ca = (ctx.r17.s32 < 0) & ((ctx.r17.u32 & 0x3) != 0);
	ctx.r11.s64 = ctx.r17.s32 >> 2;
	// mullw r10,r27,r24
	ctx.r10.s64 = int64_t(ctx.r27.s32) * int64_t(ctx.r24.s32);
	// addze r28,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r28.s64 = temp.s64;
	// li r29,0
	ctx.r29.s64 = 0;
	// rlwinm r26,r10,2,0,29
	ctx.r26.u64 = __builtin_rotateleft64(ctx.r10.u32 | (ctx.r10.u64 << 32), 2) & 0xFFFFFFFC;
loc_82B0A278:
	// lwz r11,0(r30)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r30.u32 + 0);
	// li r10,2
	ctx.r10.s64 = 2;
	// mr r9,r20
	ctx.r9.u64 = ctx.r20.u64;
	// lwz r4,8(r19)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r19.u32 + 8);
	// add r8,r29,r11
	ctx.r8.u64 = ctx.r29.u64 + ctx.r11.u64;
	// mr r7,r27
	ctx.r7.u64 = ctx.r27.u64;
	// subf r6,r28,r31
	ctx.r6.s64 = ctx.r31.s64 - ctx.r28.s64;
	// mr r5,r18
	ctx.r5.u64 = ctx.r18.u64;
	// mr r3,r21
	ctx.r3.u64 = ctx.r21.u64;
	// bl 0x82b096c0
	ctx.lr = 0x82B0A2A0;
	sub_82B096C0(ctx, base);
	// addi r31,r31,1
	ctx.r31.s64 = ctx.r31.s64 + 1;
	// add r29,r26,r29
	ctx.r29.u64 = ctx.r26.u64 + ctx.r29.u64;
	// cmpw cr6,r31,r22
	ctx.cr6.compare<int32_t>(ctx.r31.s32, ctx.r22.s32, ctx.xer);
	// blt cr6,0x82b0a278
	if (ctx.cr6.lt) goto loc_82B0A278;
loc_82B0A2B0:
	// addi r1,r1,224
	ctx.r1.s64 = ctx.r1.s64 + 224;
	// b 0x82fa7694
	__restgprlr_15(ctx, base);
	return;
}

__attribute__((alias("__imp__sub_82B0A2B8"))) PPC_WEAK_FUNC(sub_82B0A2B8);
PPC_FUNC_IMPL(__imp__sub_82B0A2B8) {
	PPC_FUNC_PROLOGUE();
	PPCRegister temp{};
	uint32_t ea{};
	// mflr r12
	ctx.r12.u64 = ctx.lr;
	// bl 0x82fa7648
	ctx.lr = 0x82B0A2C0;
	__savegprlr_16(ctx, base);
	// stwu r1,-528(r1)
	ea = -528 + ctx.r1.u32;
	PPC_STORE_U32(ea, ctx.r1.u32);
	ctx.r1.u32 = ea;
	// lhz r11,62(r3)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r3.u32 + 62);
	// mr r31,r3
	ctx.r31.u64 = ctx.r3.u64;
	// rlwinm r10,r11,0,24,27
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xF0;
	// cmplwi cr6,r10,64
	ctx.cr6.compare<uint32_t>(ctx.r10.u32, 64, ctx.xer);
	// bne cr6,0x82b0a2f8
	if (!ctx.cr6.eq) goto loc_82B0A2F8;
	// lwz r11,208(r3)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r3.u32 + 208);
	// li r17,4
	ctx.r17.s64 = 4;
	// lwz r10,212(r3)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r3.u32 + 212);
	// li r18,0
	ctx.r18.s64 = 0;
	// srawi r20,r11,1
	ctx.xer.ca = (ctx.r11.s32 < 0) & ((ctx.r11.u32 & 0x1) != 0);
	ctx.r20.s64 = ctx.r11.s32 >> 1;
	// sth r17,92(r3)
	PPC_STORE_U16(ctx.r3.u32 + 92, ctx.r17.u16);
	// srawi r24,r10,1
	ctx.xer.ca = (ctx.r10.s32 < 0) & ((ctx.r10.u32 & 0x1) != 0);
	ctx.r24.s64 = ctx.r10.s32 >> 1;
	// b 0x82b0a318
	goto loc_82B0A318;
loc_82B0A2F8:
	// rlwinm r10,r11,0,20,20
	ctx.r10.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0x800;
	// lwz r20,208(r31)
	ctx.r20.u64 = PPC_LOAD_U32(ctx.r31.u32 + 208);
	// li r11,1
	ctx.r11.s64 = 1;
	// lwz r24,212(r31)
	ctx.r24.u64 = PPC_LOAD_U32(ctx.r31.u32 + 212);
	// addic r10,r10,-1
	ctx.xer.ca = ctx.r10.u32 > 0;
	ctx.r10.s64 = ctx.r10.s64 + -1;
	// lhz r17,92(r31)
	ctx.r17.u64 = PPC_LOAD_U16(ctx.r31.u32 + 92);
	// subfe r10,r10,r10
	temp.u8 = (~ctx.r10.u32 + ctx.r10.u32 < ~ctx.r10.u32) | (~ctx.r10.u32 + ctx.r10.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r10.u64 = ~ctx.r10.u64 + ctx.r10.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r18,r10,r11
	ctx.r18.u64 = ctx.r10.u64 & ctx.r11.u64;
loc_82B0A318:
	// li r4,0
	ctx.r4.s64 = 0;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// mullw r16,r17,r24
	ctx.r16.s64 = int64_t(ctx.r17.s32) * int64_t(ctx.r24.s32);
	// bl 0x82b07ad0
	ctx.lr = 0x82B0A328;
	sub_82B07AD0(ctx, base);
	// cmpwi r3,0
	ctx.cr0.compare<int32_t>(ctx.r3.s32, 0, ctx.xer);
	// bge 0x82b0a338
	if (!ctx.cr0.lt) goto loc_82B0A338;
	// li r3,-61
	ctx.r3.s64 = -61;
	// b 0x82b0a7ec
	goto loc_82B0A7EC;
loc_82B0A338:
	// lwz r11,48(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 48);
	// li r10,32
	ctx.r10.s64 = 32;
	// lwz r6,224(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 224);
	// rlwinm r7,r16,2,0,29
	ctx.r7.u64 = __builtin_rotateleft64(ctx.r16.u32 | (ctx.r16.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r8,r11,17
	ctx.r8.s64 = ctx.r11.s64 + 17;
	// lwz r9,104(r31)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r31.u32 + 104);
	// lwz r11,196(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 196);
	// rlwinm r8,r8,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r8.u32 | (ctx.r8.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r5,192(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 192);
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// li r10,0
	ctx.r10.s64 = 0;
	// add r19,r8,r9
	ctx.r19.u64 = ctx.r8.u64 + ctx.r9.u64;
	// lwz r8,56(r6)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r6.u32 + 56);
	// subf r9,r11,r5
	ctx.r9.s64 = ctx.r5.s64 - ctx.r11.s64;
loc_82B0A370:
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// add r5,r9,r11
	ctx.r5.u64 = ctx.r9.u64 + ctx.r11.u64;
	// cmpwi cr6,r8,0
	ctx.cr6.compare<int32_t>(ctx.r8.s32, 0, ctx.xer);
	// stwx r5,r10,r6
	PPC_STORE_U32(ctx.r10.u32 + ctx.r6.u32, ctx.r5.u32);
	// beq cr6,0x82b0a38c
	if (ctx.cr6.eq) goto loc_82B0A38C;
	// addi r6,r1,256
	ctx.r6.s64 = ctx.r1.s64 + 256;
	// stwx r11,r10,r6
	PPC_STORE_U32(ctx.r10.u32 + ctx.r6.u32, ctx.r11.u32);
loc_82B0A38C:
	// add r11,r7,r11
	ctx.r11.u64 = ctx.r7.u64 + ctx.r11.u64;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// bdnz 0x82b0a370
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82B0A370;
	// li r22,0
	ctx.r22.s64 = 0;
	// li r26,16
	ctx.r26.s64 = 16;
	// li r23,0
	ctx.r23.s64 = 0;
	// li r25,0
	ctx.r25.s64 = 0;
	// li r21,2
	ctx.r21.s64 = 2;
	// cmpwi cr6,r20,0
	ctx.cr6.compare<int32_t>(ctx.r20.s32, 0, ctx.xer);
	// ble cr6,0x82b0a770
	if (!ctx.cr6.gt) goto loc_82B0A770;
loc_82B0A3B4:
	// cmpwi cr6,r25,0
	ctx.cr6.compare<int32_t>(ctx.r25.s32, 0, ctx.xer);
	// bne cr6,0x82b0a484
	if (!ctx.cr6.eq) goto loc_82B0A484;
	// addi r8,r1,256
	ctx.r8.s64 = ctx.r1.s64 + 256;
	// addi r7,r1,128
	ctx.r7.s64 = ctx.r1.s64 + 128;
	// mr r6,r17
	ctx.r6.u64 = ctx.r17.u64;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// li r26,16
	ctx.r26.s64 = 16;
	// bl 0x82b07fb8
	ctx.lr = 0x82B0A3DC;
	sub_82B07FB8(ctx, base);
	// lhz r11,92(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 92);
	// add r19,r3,r19
	ctx.r19.u64 = ctx.r3.u64 + ctx.r19.u64;
	// addi r23,r23,1
	ctx.r23.s64 = ctx.r23.s64 + 1;
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82b0a48c
	if (ctx.cr0.eq) goto loc_82B0A48C;
	// addi r28,r31,40
	ctx.r28.s64 = ctx.r31.s64 + 40;
	// li r30,0
	ctx.r30.s64 = 0;
loc_82B0A3FC:
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// addi r6,r1,120
	ctx.r6.s64 = ctx.r1.s64 + 120;
	// addi r5,r1,116
	ctx.r5.s64 = ctx.r1.s64 + 116;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r28
	ctx.r3.u64 = ctx.r28.u64;
	// bl 0x82b07d08
	ctx.lr = 0x82B0A414;
	sub_82B07D08(ctx, base);
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82b0a470
	if (!ctx.cr6.eq) goto loc_82B0A470;
	// lwz r11,224(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 224);
	// lwz r11,52(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82b0a448
	if (ctx.cr6.eq) goto loc_82B0A448;
	// li r7,0
	ctx.r7.s64 = 0;
	// mr r6,r18
	ctx.r6.u64 = ctx.r18.u64;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82b09880
	ctx.lr = 0x82B0A448;
	sub_82B09880(ctx, base);
loc_82B0A448:
	// lwz r11,224(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 224);
	// lwz r11,56(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82b0a470
	if (ctx.cr6.eq) goto loc_82B0A470;
	// li r7,1
	ctx.r7.s64 = 1;
	// mr r6,r18
	ctx.r6.u64 = ctx.r18.u64;
	// addi r5,r1,256
	ctx.r5.s64 = ctx.r1.s64 + 256;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82b09880
	ctx.lr = 0x82B0A470;
	sub_82B09880(ctx, base);
loc_82B0A470:
	// lhz r11,92(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 92);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// add r30,r30,r24
	ctx.r30.u64 = ctx.r30.u64 + ctx.r24.u64;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82b0a3fc
	if (ctx.cr6.lt) goto loc_82B0A3FC;
loc_82B0A484:
	// cmpwi cr6,r26,16
	ctx.cr6.compare<int32_t>(ctx.r26.s32, 16, ctx.xer);
	// bne cr6,0x82b0a5ec
	if (!ctx.cr6.eq) goto loc_82B0A5EC;
loc_82B0A48C:
	// addi r9,r22,16
	ctx.r9.s64 = ctx.r22.s64 + 16;
	// lwz r8,224(r31)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r31.u32 + 224);
	// li r10,32
	ctx.r10.s64 = 32;
	// lwz r5,196(r31)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r31.u32 + 196);
	// srawi r6,r9,5
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1F) != 0);
	ctx.r6.s64 = ctx.r9.s32 >> 5;
	// lwz r7,192(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 192);
	// li r11,0
	ctx.r11.s64 = 0;
	// addze r4,r6
	temp.s64 = ctx.r6.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r6.u32;
	ctx.r4.s64 = temp.s64;
	// lwz r6,56(r8)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r8.u32 + 56);
	// rlwinm r8,r4,5,0,26
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r4.u32 | (ctx.r4.u64 << 32), 5) & 0xFFFFFFE0;
	// mtctr r10
	ctx.ctr.u64 = ctx.r10.u64;
	// subf r8,r8,r9
	ctx.r8.s64 = ctx.r9.s64 - ctx.r8.s64;
	// mr r10,r8
	ctx.r10.u64 = ctx.r8.u64;
loc_82B0A4C0:
	// mullw r9,r10,r16
	ctx.r9.s64 = int64_t(ctx.r10.s32) * int64_t(ctx.r16.s32);
	// rlwinm r9,r9,2,0,29
	ctx.r9.u64 = __builtin_rotateleft64(ctx.r9.u32 | (ctx.r9.u64 << 32), 2) & 0xFFFFFFFC;
	// addi r4,r1,128
	ctx.r4.s64 = ctx.r1.s64 + 128;
	// add r3,r9,r7
	ctx.r3.u64 = ctx.r9.u64 + ctx.r7.u64;
	// cmpwi cr6,r6,0
	ctx.cr6.compare<int32_t>(ctx.r6.s32, 0, ctx.xer);
	// stwx r3,r11,r4
	PPC_STORE_U32(ctx.r11.u32 + ctx.r4.u32, ctx.r3.u32);
	// beq cr6,0x82b0a4e8
	if (ctx.cr6.eq) goto loc_82B0A4E8;
	// addi r4,r1,256
	ctx.r4.s64 = ctx.r1.s64 + 256;
	// add r9,r9,r5
	ctx.r9.u64 = ctx.r9.u64 + ctx.r5.u64;
	// stwx r9,r11,r4
	PPC_STORE_U32(ctx.r11.u32 + ctx.r4.u32, ctx.r9.u32);
loc_82B0A4E8:
	// addi r10,r10,1
	ctx.r10.s64 = ctx.r10.s64 + 1;
	// addi r11,r11,4
	ctx.r11.s64 = ctx.r11.s64 + 4;
	// addi r9,r10,-32
	ctx.r9.s64 = ctx.r10.s64 + -32;
	// subfic r9,r9,0
	ctx.xer.ca = ctx.r9.u32 <= 0;
	ctx.r9.s64 = 0 - ctx.r9.s64;
	// subfe r9,r9,r9
	temp.u8 = (~ctx.r9.u32 + ctx.r9.u32 < ~ctx.r9.u32) | (~ctx.r9.u32 + ctx.r9.u32 + ctx.xer.ca < ctx.xer.ca);
	ctx.r9.u64 = ~ctx.r9.u64 + ctx.r9.u64 + ctx.xer.ca;
	ctx.xer.ca = temp.u8;
	// and r10,r9,r10
	ctx.r10.u64 = ctx.r9.u64 & ctx.r10.u64;
	// bdnz 0x82b0a4c0
	--ctx.ctr.u64;
	if (ctx.ctr.u32 != 0) goto loc_82B0A4C0;
	// addi r11,r20,-16
	ctx.r11.s64 = ctx.r20.s64 + -16;
	// mr r22,r8
	ctx.r22.u64 = ctx.r8.u64;
	// li r26,0
	ctx.r26.s64 = 0;
	// cmpw cr6,r25,r11
	ctx.cr6.compare<int32_t>(ctx.r25.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x82b0a5ec
	if (ctx.cr6.eq) goto loc_82B0A5EC;
	// addi r11,r20,-32
	ctx.r11.s64 = ctx.r20.s64 + -32;
	// addi r8,r1,256
	ctx.r8.s64 = ctx.r1.s64 + 256;
	// subf r11,r25,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r25.s64;
	// addi r7,r1,128
	ctx.r7.s64 = ctx.r1.s64 + 128;
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// mr r6,r17
	ctx.r6.u64 = ctx.r17.u64;
	// mr r5,r24
	ctx.r5.u64 = ctx.r24.u64;
	// mr r4,r23
	ctx.r4.u64 = ctx.r23.u64;
	// mr r3,r31
	ctx.r3.u64 = ctx.r31.u64;
	// rlwinm r28,r11,27,31,31
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// bl 0x82b07fb8
	ctx.lr = 0x82B0A544;
	sub_82B07FB8(ctx, base);
	// lhz r11,92(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 92);
	// add r19,r3,r19
	ctx.r19.u64 = ctx.r3.u64 + ctx.r19.u64;
	// addi r23,r23,1
	ctx.r23.s64 = ctx.r23.s64 + 1;
	// li r29,0
	ctx.r29.s64 = 0;
	// cmplwi r11,0
	ctx.cr0.compare<uint32_t>(ctx.r11.u32, 0, ctx.xer);
	// beq 0x82b0a5ec
	if (ctx.cr0.eq) goto loc_82B0A5EC;
	// addi r27,r31,40
	ctx.r27.s64 = ctx.r31.s64 + 40;
	// li r30,0
	ctx.r30.s64 = 0;
loc_82B0A564:
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// addi r6,r1,120
	ctx.r6.s64 = ctx.r1.s64 + 120;
	// addi r5,r1,116
	ctx.r5.s64 = ctx.r1.s64 + 116;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82b07d08
	ctx.lr = 0x82B0A57C;
	sub_82B07D08(ctx, base);
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82b0a5d8
	if (!ctx.cr6.eq) goto loc_82B0A5D8;
	// lwz r11,224(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 224);
	// lwz r11,52(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82b0a5b0
	if (ctx.cr6.eq) goto loc_82B0A5B0;
	// mr r7,r18
	ctx.r7.u64 = ctx.r18.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r5,r1,128
	ctx.r5.s64 = ctx.r1.s64 + 128;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82b09a10
	ctx.lr = 0x82B0A5B0;
	sub_82B09A10(ctx, base);
loc_82B0A5B0:
	// lwz r11,224(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 224);
	// lwz r11,56(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82b0a5d8
	if (ctx.cr6.eq) goto loc_82B0A5D8;
	// mr r7,r18
	ctx.r7.u64 = ctx.r18.u64;
	// mr r6,r28
	ctx.r6.u64 = ctx.r28.u64;
	// addi r5,r1,256
	ctx.r5.s64 = ctx.r1.s64 + 256;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82b09a10
	ctx.lr = 0x82B0A5D8;
	sub_82B09A10(ctx, base);
loc_82B0A5D8:
	// lhz r11,92(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 92);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// add r30,r30,r24
	ctx.r30.u64 = ctx.r30.u64 + ctx.r24.u64;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82b0a564
	if (ctx.cr6.lt) goto loc_82B0A564;
loc_82B0A5EC:
	// cmpwi cr6,r21,4
	ctx.cr6.compare<int32_t>(ctx.r21.s32, 4, ctx.xer);
	// bne cr6,0x82b0a6c4
	if (!ctx.cr6.eq) goto loc_82B0A6C4;
	// addi r11,r20,-2
	ctx.r11.s64 = ctx.r20.s64 + -2;
	// cmpw cr6,r25,r11
	ctx.cr6.compare<int32_t>(ctx.r25.s32, ctx.r11.s32, ctx.xer);
	// beq cr6,0x82b0a6c4
	if (ctx.cr6.eq) goto loc_82B0A6C4;
	// addi r11,r20,-6
	ctx.r11.s64 = ctx.r20.s64 + -6;
	// lhz r10,92(r31)
	ctx.r10.u64 = PPC_LOAD_U16(ctx.r31.u32 + 92);
	// li r29,0
	ctx.r29.s64 = 0;
	// subf r11,r25,r11
	ctx.r11.s64 = ctx.r11.s64 - ctx.r25.s64;
	// cmplwi r10,0
	ctx.cr0.compare<uint32_t>(ctx.r10.u32, 0, ctx.xer);
	// cntlzw r11,r11
	ctx.r11.u64 = ctx.r11.u32 == 0 ? 32 : __builtin_clz(ctx.r11.u32);
	// rlwinm r28,r11,27,31,31
	ctx.r28.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 27) & 0x1;
	// beq 0x82b0a6c0
	if (ctx.cr0.eq) goto loc_82B0A6C0;
	// addi r27,r31,40
	ctx.r27.s64 = ctx.r31.s64 + 40;
	// li r30,0
	ctx.r30.s64 = 0;
loc_82B0A628:
	// addi r7,r1,112
	ctx.r7.s64 = ctx.r1.s64 + 112;
	// addi r6,r1,120
	ctx.r6.s64 = ctx.r1.s64 + 120;
	// addi r5,r1,116
	ctx.r5.s64 = ctx.r1.s64 + 116;
	// mr r4,r29
	ctx.r4.u64 = ctx.r29.u64;
	// mr r3,r27
	ctx.r3.u64 = ctx.r27.u64;
	// bl 0x82b07d08
	ctx.lr = 0x82B0A640;
	sub_82B07D08(ctx, base);
	// lwz r11,112(r1)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r1.u32 + 112);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// bne cr6,0x82b0a6ac
	if (!ctx.cr6.eq) goto loc_82B0A6AC;
	// lwz r11,224(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 224);
	// lwz r11,52(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82b0a67c
	if (ctx.cr6.eq) goto loc_82B0A67C;
	// li r9,0
	ctx.r9.s64 = 0;
	// mr r8,r18
	ctx.r8.u64 = ctx.r18.u64;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// addi r6,r1,128
	ctx.r6.s64 = ctx.r1.s64 + 128;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82b09b48
	ctx.lr = 0x82B0A67C;
	sub_82B09B48(ctx, base);
loc_82B0A67C:
	// lwz r11,224(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 224);
	// lwz r11,56(r11)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// cmpwi cr6,r11,0
	ctx.cr6.compare<int32_t>(ctx.r11.s32, 0, ctx.xer);
	// beq cr6,0x82b0a6ac
	if (ctx.cr6.eq) goto loc_82B0A6AC;
	// li r9,1
	ctx.r9.s64 = 1;
	// mr r8,r18
	ctx.r8.u64 = ctx.r18.u64;
	// mr r7,r28
	ctx.r7.u64 = ctx.r28.u64;
	// addi r6,r1,256
	ctx.r6.s64 = ctx.r1.s64 + 256;
	// mr r5,r26
	ctx.r5.u64 = ctx.r26.u64;
	// mr r4,r30
	ctx.r4.u64 = ctx.r30.u64;
	// mr r3,r24
	ctx.r3.u64 = ctx.r24.u64;
	// bl 0x82b09b48
	ctx.lr = 0x82B0A6AC;
	sub_82B09B48(ctx, base);
loc_82B0A6AC:
	// lhz r11,92(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 92);
	// addi r29,r29,1
	ctx.r29.s64 = ctx.r29.s64 + 1;
	// add r30,r30,r24
	ctx.r30.u64 = ctx.r30.u64 + ctx.r24.u64;
	// cmpw cr6,r29,r11
	ctx.cr6.compare<int32_t>(ctx.r29.s32, ctx.r11.s32, ctx.xer);
	// blt cr6,0x82b0a628
	if (ctx.cr6.lt) goto loc_82B0A628;
loc_82B0A6C0:
	// li r21,0
	ctx.r21.s64 = 0;
loc_82B0A6C4:
	// lwz r11,224(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 224);
	// lwz r8,32(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// cmpw cr6,r25,r8
	ctx.cr6.compare<int32_t>(ctx.r25.s32, ctx.r8.s32, ctx.xer);
	// blt cr6,0x82b0a75c
	if (ctx.cr6.lt) goto loc_82B0A75C;
	// lwz r10,52(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 52);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82b0a70c
	if (ctx.cr6.eq) goto loc_82B0A70C;
	// rlwinm r30,r26,2,0,29
	ctx.r30.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r7,212(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 212);
	// addi r29,r1,128
	ctx.r29.s64 = ctx.r1.s64 + 128;
	// lwz r5,36(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// subf r6,r8,r25
	ctx.r6.s64 = ctx.r25.s64 - ctx.r8.s64;
	// lwz r4,72(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 72);
	// li r10,0
	ctx.r10.s64 = 0;
	// addi r9,r31,124
	ctx.r9.s64 = ctx.r31.s64 + 124;
	// addi r3,r31,40
	ctx.r3.s64 = ctx.r31.s64 + 40;
	// lwzx r8,r30,r29
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r30.u32 + ctx.r29.u32);
	// bl 0x82b096c0
	ctx.lr = 0x82B0A70C;
	sub_82B096C0(ctx, base);
loc_82B0A70C:
	// lwz r11,224(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 224);
	// lwz r10,56(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 56);
	// cmpwi cr6,r10,0
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// beq cr6,0x82b0a75c
	if (ctx.cr6.eq) goto loc_82B0A75C;
	// clrlwi. r10,r25,31
	ctx.r10.u64 = ctx.r25.u32 & 0x1;
	ctx.cr0.compare<int32_t>(ctx.r10.s32, 0, ctx.xer);
	// bne 0x82b0a75c
	if (!ctx.cr0.eq) goto loc_82B0A75C;
	// lwz r10,32(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// addi r3,r1,256
	ctx.r3.s64 = ctx.r1.s64 + 256;
	// rlwinm r8,r26,2,0,29
	ctx.r8.u64 = __builtin_rotateleft64(ctx.r26.u32 | (ctx.r26.u64 << 32), 2) & 0xFFFFFFFC;
	// lwz r5,36(r11)
	ctx.r5.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// subf r9,r10,r25
	ctx.r9.s64 = ctx.r25.s64 - ctx.r10.s64;
	// lwz r4,76(r11)
	ctx.r4.u64 = PPC_LOAD_U32(ctx.r11.u32 + 76);
	// li r10,1
	ctx.r10.s64 = 1;
	// lwz r7,212(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 212);
	// srawi r11,r9,1
	ctx.xer.ca = (ctx.r9.s32 < 0) & ((ctx.r9.u32 & 0x1) != 0);
	ctx.r11.s64 = ctx.r9.s32 >> 1;
	// addi r9,r31,124
	ctx.r9.s64 = ctx.r31.s64 + 124;
	// lwzx r8,r8,r3
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r8.u32 + ctx.r3.u32);
	// addze r6,r11
	temp.s64 = ctx.r11.s64 + ctx.xer.ca;
	ctx.xer.ca = temp.u32 < ctx.r11.u32;
	ctx.r6.s64 = temp.s64;
	// addi r3,r31,40
	ctx.r3.s64 = ctx.r31.s64 + 40;
	// bl 0x82b096c0
	ctx.lr = 0x82B0A75C;
	sub_82B096C0(ctx, base);
loc_82B0A75C:
	// addi r25,r25,1
	ctx.r25.s64 = ctx.r25.s64 + 1;
	// addi r21,r21,1
	ctx.r21.s64 = ctx.r21.s64 + 1;
	// addi r26,r26,1
	ctx.r26.s64 = ctx.r26.s64 + 1;
	// cmpw cr6,r25,r20
	ctx.cr6.compare<int32_t>(ctx.r25.s32, ctx.r20.s32, ctx.xer);
	// blt cr6,0x82b0a3b4
	if (ctx.cr6.lt) goto loc_82B0A3B4;
loc_82B0A770:
	// lhz r11,62(r31)
	ctx.r11.u64 = PPC_LOAD_U16(ctx.r31.u32 + 62);
	// rlwinm r11,r11,0,24,27
	ctx.r11.u64 = __builtin_rotateleft64(ctx.r11.u32 | (ctx.r11.u64 << 32), 0) & 0xF0;
	// cmplwi cr6,r11,64
	ctx.cr6.compare<uint32_t>(ctx.r11.u32, 64, ctx.xer);
	// bne cr6,0x82b0a788
	if (!ctx.cr6.eq) goto loc_82B0A788;
	// li r11,1
	ctx.r11.s64 = 1;
	// sth r11,92(r31)
	PPC_STORE_U16(ctx.r31.u32 + 92, ctx.r11.u16);
loc_82B0A788:
	// lwz r11,224(r31)
	ctx.r11.u64 = PPC_LOAD_U32(ctx.r31.u32 + 224);
	// li r10,60
	ctx.r10.s64 = 60;
loc_82B0A790:
	// lwzx r9,r10,r11
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r10.u32 + ctx.r11.u32);
	// cmpwi cr6,r9,0
	ctx.cr6.compare<int32_t>(ctx.r9.s32, 0, ctx.xer);
	// bne cr6,0x82b0a7ac
	if (!ctx.cr6.eq) goto loc_82B0A7AC;
	// addi r10,r10,4
	ctx.r10.s64 = ctx.r10.s64 + 4;
	// cmpwi cr6,r10,68
	ctx.cr6.compare<int32_t>(ctx.r10.s32, 68, ctx.xer);
	// ble cr6,0x82b0a790
	if (!ctx.cr6.gt) goto loc_82B0A790;
	// b 0x82b0a7e8
	goto loc_82B0A7E8;
loc_82B0A7AC:
	// lwz r30,44(r11)
	ctx.r30.u64 = PPC_LOAD_U32(ctx.r11.u32 + 44);
	// addi r29,r11,92
	ctx.r29.s64 = ctx.r11.s64 + 92;
	// addi r28,r31,124
	ctx.r28.s64 = ctx.r31.s64 + 124;
	// lwz r10,40(r11)
	ctx.r10.u64 = PPC_LOAD_U32(ctx.r11.u32 + 40);
	// addi r5,r11,52
	ctx.r5.s64 = ctx.r11.s64 + 52;
	// lwz r9,36(r11)
	ctx.r9.u64 = PPC_LOAD_U32(ctx.r11.u32 + 36);
	// addi r4,r11,72
	ctx.r4.s64 = ctx.r11.s64 + 72;
	// lwz r8,32(r11)
	ctx.r8.u64 = PPC_LOAD_U32(ctx.r11.u32 + 32);
	// addi r3,r31,40
	ctx.r3.s64 = ctx.r31.s64 + 40;
	// lwz r7,212(r31)
	ctx.r7.u64 = PPC_LOAD_U32(ctx.r31.u32 + 212);
	// lwz r6,208(r31)
	ctx.r6.u64 = PPC_LOAD_U32(ctx.r31.u32 + 208);
	// stw r28,100(r1)
	PPC_STORE_U32(ctx.r1.u32 + 100, ctx.r28.u32);
	// stw r29,92(r1)
	PPC_STORE_U32(ctx.r1.u32 + 92, ctx.r29.u32);
	// stw r30,84(r1)
	PPC_STORE_U32(ctx.r1.u32 + 84, ctx.r30.u32);
	// bl 0x82b0a028
	ctx.lr = 0x82B0A7E8;
	sub_82B0A028(ctx, base);
loc_82B0A7E8:
	// mr r3,r19
	ctx.r3.u64 = ctx.r19.u64;
loc_82B0A7EC:
	// addi r1,r1,528
	ctx.r1.s64 = ctx.r1.s64 + 528;
	// b 0x82fa7698
	__restgprlr_16(ctx, base);
	return;
}

